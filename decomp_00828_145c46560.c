// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145c46560 FUN_145c46560 body=244 status=ok
// SIG undefined FUN_145c46560(void)

undefined8 FUN_145c46560(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  *local_38 = &PTR_LAB_14a3a3510;
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
  *local_38 = &PTR_FUN_14b967f70;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_145894070;
  FUN_14490d954(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c46656 FUN_145c46656 body=244 status=ok
// SIG undefined FUN_145c46656(void)

undefined8 FUN_145c46656(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  *local_38 = &PTR_LAB_14b3fc260;
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
  *local_38 = &PTR_FUN_14b967ec0;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_1461a7bca;
  FUN_141230466(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c4675e FUN_145c4675e body=85 status=ok
// SIG undefined FUN_145c4675e(void)

void FUN_145c4675e(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_145c467b4(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_145c467b4(param_1);
  return;
}



// FUNCTION 145c467b4 FUN_145c467b4 body=53 status=ok
// SIG undefined FUN_145c467b4(void)

void FUN_145c467b4(longlong *param_1)

{
  FUN_141500ee6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c467ea FUN_145c467ea body=112 status=ok
// SIG undefined FUN_145c467ea(void)

void FUN_145c467ea(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x1d0,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0x8d3dcb08d3dcb09),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0x1d0,8);
  }
  return;
}



// FUNCTION 145c4685a FUN_145c4685a body=800 status=ok
// SIG undefined FUN_145c4685a(void)

void FUN_145c4685a(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong local_88;
  longlong *local_78;
  longlong local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar3 = FUN_14479d2ce(param_1 + 200);
  if (lVar3 != 0) goto LAB_145c46a60;
  *(undefined8 *)(param_1 + 200) = 0;
  lVar3 = FUN_14479d2ce(param_1 + 0xa8);
  if ((lVar3 == 0) || (lVar4 = FUN_14479d2ce(param_1 + 0xb0), lVar4 == 0)) goto LAB_145c46a60;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_98 = 0x800000100;
  local_88 = 0;
  local_78 = (longlong *)0x0;
  lVar4 = *(longlong *)(lVar4 + 0x1c8);
  if (lVar4 == 0) {
    local_d8 = DAT_14c8464f0;
    local_e8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_e0 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  }
  else {
    local_e8 = *(undefined8 *)(lVar4 + 0x260);
    uStack_e0 = *(undefined8 *)(lVar4 + 0x268);
    local_d8 = *(undefined8 *)(lVar4 + 0x270);
  }
  uVar5 = FUN_145c46b7c();
  local_f8 = &local_c8;
  lVar3 = FUN_141137228(lVar3,uVar5,&local_e8,&DAT_14c8464f8);
  if (local_88 != 0) {
    plVar6 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar6 = local_68;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((lVar3 == 0) ||
     (plVar6 = (longlong *)(**(code **)(*(longlong *)(lVar3 + 0x390) + 0x10))(lVar3 + 0x390),
     plVar6 == (longlong *)0x0)) goto LAB_145c46a60;
  lVar4 = *(longlong *)(param_1 + 0x98);
  if (lVar4 == 0) {
    uVar5 = FUN_141518b52();
    lVar4 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0x98) = lVar4;
  }
  lVar7 = *(longlong *)(param_1 + 0xa0);
  if (lVar7 == 0) {
    if ((lVar4 != 0) && (*(longlong *)(param_1 + 0x90) != 0)) {
      plVar1 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        *(undefined8 *)(param_1 + 0xa0) = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar7 = FUN_144aff482(uVar5,(longlong *)(param_1 + 0x90));
        *(longlong *)(param_1 + 0xa0) = lVar7;
        if (lVar7 != 0) goto LAB_145c469ae;
      }
    }
  }
  else {
LAB_145c469ae:
    FUN_1458df8c6(plVar6 + 0xc5,lVar7 + 0x98);
    if ((int)plVar6[0xc6] < 2) {
      puVar8 = &DAT_14c9485f0;
      if (*(undefined4 **)(lVar7 + 8) != (undefined4 *)0x0) {
        puVar8 = *(undefined4 **)(lVar7 + 8);
      }
      local_c8 = 0;
      uStack_c0 = 0;
      FUN_1400b2348(puVar8,&local_c8,1);
      if (plVar6 + 0xc5 == &local_c8) {
        if (local_c8 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (plVar6[0xc5] != 0) {
          FUN_1400020a8();
        }
        plVar6[0xc5] = local_c8;
        local_c8 = 0;
        *(undefined4 *)(plVar6 + 0xc6) = (undefined4)uStack_c0;
        *(undefined4 *)((longlong)plVar6 + 0x634) = uStack_c0._4_4_;
      }
    }
  }
  (**(code **)(*plVar6 + 0x588))(plVar6,2);
  FUN_140b506a4(plVar6);
  FUN_14485c47a(param_1 + 200,lVar3);
LAB_145c46a60:
  if ((local_40 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c46b7c FUN_145c46b7c body=228 status=ok
// SIG undefined FUN_145c46b7c(void)

longlong FUN_145c46b7c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb22410 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_141117124;
    local_38 = &LAB_147f2a020;
    local_40 = &LAB_140bc3d29;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x3a0;
    FUN_14081cfa3(L"/Script/GbxAI",L"GbxTerritory",&DAT_14cb22410,FUN_146438650);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb22410;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c46c6c FUN_145c46c6c body=190 status=ok
// SIG undefined FUN_145c46c6c(void)

undefined8 * FUN_145c46c6c(undefined8 *param_1)

{
  FUN_1458caf28();
  *param_1 = &PTR_FUN_14ac12960;
  param_1[5] = &PTR_FUN_14ac12f60;
  param_1[6] = &PTR_LAB_14ac12fa0;
  param_1[0x22] = &PTR_FUN_14ac12ff0;
  param_1[0x23] = &PTR_FUN_14ac13020;
  param_1[0x6c] = &PTR_FUN_14ac13050;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  *(byte *)((longlong)param_1 + 0x392) = *(byte *)((longlong)param_1 + 0x392) | 1;
  *(byte *)(param_1 + 0x72) = *(byte *)(param_1 + 0x72) & 4 | 0x42;
  *(byte *)((longlong)param_1 + 0x391) = *(byte *)((longlong)param_1 + 0x391) & 0x90 | 0x6b;
  param_1[0x73] = 0x43c8000040000000;
  param_1[0x74] = 0x3f800000447a0000;
  *(undefined2 *)((longlong)param_1 + 0x393) = 0;
  return param_1;
}



// FUNCTION 145c46d2a FUN_145c46d2a body=38 status=ok
// SIG undefined FUN_145c46d2a(void)

undefined8 FUN_145c46d2a(undefined8 param_1,int param_2)

{
  FUN_145c46d50();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c46d50 FUN_145c46d50 body=100 status=ok
// SIG undefined FUN_145c46d50(void)

void FUN_145c46d50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b9da3e0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_145c46db4(param_1 + 0xc);
  FUN_144760e21(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_145c46e42(param_1);
  return;
}



// FUNCTION 145c46db4 FUN_145c46db4 body=53 status=ok
// SIG undefined FUN_145c46db4(void)

void FUN_145c46db4(longlong *param_1)

{
  FUN_145c46dea();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c46dea FUN_145c46dea body=88 status=ok
// SIG undefined FUN_145c46dea(void)

void FUN_145c46dea(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_145fcac6c(param_1,0);
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



// FUNCTION 145c46e42 FUN_145c46e42 body=123 status=ok
// SIG undefined FUN_145c46e42(void)

void FUN_145c46e42(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b9da460;
  plVar3 = (longlong *)param_1[8];
  if (plVar3 != (longlong *)0x0) {
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
  FUN_145c9bf4f(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145c46e8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145c46ede FUN_145c46ede body=171 status=ok
// SIG undefined FUN_145c46ede(void)

void FUN_145c46ede(longlong *param_1,undefined4 param_2,undefined4 param_3)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_145c46f73;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145c46f73:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145c46f8a FUN_145c46f8a body=1203 status=ok
// SIG undefined FUN_145c46f8a(void)

void FUN_145c46f8a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_78 [32];
  code *local_58;
  undefined4 local_50;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_141245f18();
  if (param_2 == 0) goto LAB_145c4736b;
  FUN_1412465d2(param_1 + 0x20,param_2);
  lVar4 = FUN_14479d2ce(param_1 + 8);
  if ((lVar4 == 0) || ((*(byte *)(lVar4 + 0x155) & 4) != 0)) {
    *(undefined4 *)(param_1 + 0x5a4) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x5a4) = *(undefined4 *)(lVar4 + 0x6f4);
    *(undefined4 *)(param_1 + 0x5a0) = *(undefined4 *)(lVar4 + 0x930);
  }
  FUN_140f07f68(param_1);
  lVar4 = FUN_14479d2ce(param_1 + 8);
  if (lVar4 == 0) {
    bVar9 = false;
  }
  else {
    iVar3 = FUN_14490d72a(lVar4);
    bVar9 = iVar3 != 3;
  }
  *(bool *)(param_1 + 0x5cc) = bVar9;
  *(bool *)(param_1 + 0x1f0) = bVar9;
  local_58 = FUN_147e43680;
  local_50 = 0;
  FUN_145c4794a(local_48,param_1);
  FUN_145c4743e(&local_58,local_48);
  FUN_1449db362(local_48);
  local_58 = FUN_145c19b22;
  local_50 = 0;
  FUN_145c47af6(local_48,param_1,&local_58);
  FUN_141211c46(&DAT_14c9647a0,&local_58,local_48);
  FUN_1449db362(local_48);
  uVar5 = FUN_140c61bfa();
  local_58 = (code *)&LAB_140feacec;
  local_50 = 0;
  FUN_145c47ca2(local_48,param_1,&local_58);
  FUN_1448b6402(uVar5,&local_58,local_48);
  FUN_1449db362(local_48);
  *(undefined1 *)(param_1 + 0x5cd) = 0;
  lVar4 = FUN_144a86a6e(param_2);
  if ((((lVar4 != 0) && (*(char *)(lVar4 + 0x38) == '\x01')) && (*(longlong *)(param_2 + 0x30) != 0)
      ) && (lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 0x2b0), lVar4 != 0)) {
    lVar6 = FUN_140f08004();
    if (((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
         == lVar6 + 0x30)) && (*(char *)(lVar4 + 0x658) == '\x01')) {
      *(undefined1 *)(param_1 + 0x5cd) = 1;
    }
  }
  if ((*(char *)(param_1 + 0x5cc) == '\x01') && (*(char *)(param_1 + 0x5cd) == '\x01')) {
    plVar7 = (longlong *)FUN_14001cc68(0x80,0x10);
    plVar7[1] = (longlong)&DAT_100000001;
    *plVar7 = (longlong)&PTR_FUN_14aba0990;
    plVar7[2] = 0;
    plVar7[3] = 0;
    plVar7[8] = -0x3d70000000000000;
    plVar7[9] = -0x3d70000000000000;
    plVar7[10] = 0x4290000000000000;
    plVar7[0xb] = 0x4290000000000000;
    *(undefined1 *)(plVar7 + 0xc) = 1;
    plVar7[0xd] = 0;
    plVar7[0xe] = 0;
    *(undefined4 *)(plVar7 + 0xf) = 0x42c80000;
    *(undefined1 *)((longlong)plVar7 + 0x7c) = 0;
    plVar7[4] = 0;
    plVar7[5] = 0;
    plVar7[6] = 0;
    plVar7[7] = 0;
    if (plVar7 == (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x5d0) = 0x10;
      plVar8 = *(longlong **)(param_1 + 0x5d8);
      if (plVar8 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x5d8) = 0;
LAB_145c473c7:
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
        if (plVar7 != (longlong *)0x0) goto LAB_145c4721d;
      }
    }
    else {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      *(longlong **)(param_1 + 0x5d0) = plVar7 + 2;
      plVar8 = *(longlong **)(param_1 + 0x5d8);
      if (plVar7 == plVar8) {
        LOCK();
        plVar8 = plVar7 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
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
      else {
        *(longlong **)(param_1 + 0x5d8) = plVar7;
        if (plVar8 != (longlong *)0x0) goto LAB_145c473c7;
      }
LAB_145c4721d:
      LOCK();
      plVar8 = plVar7 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
    local_58 = (code *)&LAB_1408ca74c;
    local_50 = 0;
    FUN_145c47ff4(local_48,param_1);
    FUN_1459a7472(&DAT_14cb1cfb0,&local_58,local_48);
    FUN_1449db362(local_48);
    local_58 = (code *)&LAB_1408ca752;
    local_50 = 0;
    FUN_145c47ff4(local_48,param_1,&local_58);
    FUN_1459a7472(&DAT_14cb1cfc8,&local_58,local_48);
    FUN_1449db362(local_48);
    local_58 = (code *)&LAB_140d87b6c;
    local_50 = 0;
    FUN_145c481a0(local_48,param_1,&local_58);
    FUN_145c47848(&DAT_14cb1c7f0,&local_58,local_48);
    FUN_1449db362(local_48);
    local_58 = (code *)&LAB_140d87b6c;
    local_50 = 0;
    FUN_145c481a0(local_48,param_1,&local_58);
    FUN_145c47848(&DAT_14cb1c808,&local_58,local_48);
    FUN_1449db362(local_48);
  }
  FUN_145c47550(param_1 + 0xc0,param_2);
  FUN_141501120(param_1 + 0x5a8,0x2ff);
  uVar5 = FUN_14001cc68(600,0x10);
  FUN_145c4834c(uVar5,param_1);
  *(undefined8 *)(param_1 + 0x598) = uVar5;
LAB_145c4736b:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c4743e FUN_145c4743e body=233 status=ok
// SIG undefined FUN_145c4743e(void)

undefined8 * FUN_145c4743e(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  if (((int)param_2[1] != 0) && ((longlong *)*param_2 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_2 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(&DAT_14caf6fb0,1);
      uVar5 = 0;
      if (((int)param_2[1] != 0) && (plVar1 = (longlong *)*param_2, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
        uVar5 = local_28;
      }
      *param_1 = uVar5;
      uVar3 = DAT_14caf6fb8;
      lVar6 = (longlong)(int)DAT_14caf6fb8;
      DAT_14caf6fb8 = DAT_14caf6fb8 + 1;
      if (DAT_14caf6fbc < DAT_14caf6fb8) {
        FUN_1447a71f6(&DAT_14caf6fb0,uVar3);
      }
      lVar2 = DAT_14caf6fb0;
      lVar6 = lVar6 * 0x10;
      *(undefined8 *)(DAT_14caf6fb0 + lVar6) = 0;
      *(undefined4 *)(lVar2 + 8 + lVar6) = 0;
      *(longlong *)(lVar2 + lVar6) = *param_2;
      *param_2 = 0;
      *(int *)(lVar2 + 8 + lVar6) = (int)param_2[1];
      *(undefined4 *)(param_2 + 1) = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c47550 FUN_145c47550 body=269 status=ok
// SIG undefined FUN_145c47550(void)

void FUN_145c47550(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [8];
  undefined8 *local_78;
  longlong local_70;
  longlong *local_68;
  undefined8 *local_60;
  longlong local_58;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14485c47a();
  iVar3 = FUN_14490d72a(param_2);
  *(bool *)(param_1 + 0x130) = iVar3 != 3;
  local_48 = param_2;
  FUN_145c4765e(local_80);
  lVar2 = local_58;
  lVar1 = local_70;
  LOCK();
  *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
  UNLOCK();
  LOCK();
  *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
  UNLOCK();
  puVar4 = local_78;
LAB_145c475be:
  do {
    if (puVar4 == local_60) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + -1;
      UNLOCK();
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + -1;
      UNLOCK();
      LOCK();
      *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + -1;
      UNLOCK();
      LOCK();
      *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + -1;
      UNLOCK();
      FUN_145c477b0(*(undefined8 *)(param_1 + 0x120),param_2);
      if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_1416612ec(param_1,puVar4[2]);
    for (puVar4 = (undefined8 *)FUN_145c4772c(*puVar4); puVar4 != (undefined8 *)0x0;
        puVar4 = (undefined8 *)FUN_145c4772c(*puVar4)) {
      lVar5 = (**(code **)(*(longlong *)puVar4[2] + 0x180))();
      if (lVar5 == *local_68) goto LAB_145c475be;
    }
    puVar4 = (undefined8 *)0x0;
  } while( true );
}



// FUNCTION 145c4765e FUN_145c4765e body=137 status=ok
// SIG undefined FUN_145c4765e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_145c4765e(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  LOCK();
  _DAT_14cb1c8a8 = _DAT_14cb1c8a8 + 1;
  UNLOCK();
  uVar1 = FUN_145c4772c(DAT_14cb1c8a0);
  param_1[1] = uVar1;
  param_1[2] = &DAT_14cb1c8a0;
  LOCK();
  _DAT_14cb1c8a8 = _DAT_14cb1c8a8 + 1;
  UNLOCK();
  param_1[3] = param_1;
  FUN_145c476e8(param_1 + 1);
  LOCK();
  UNLOCK();
  LOCK();
  UNLOCK();
  param_1[4] = 0;
  param_1[5] = &DAT_14cb1c8a0;
  LOCK();
  _DAT_14cb1c8a8 = _DAT_14cb1c8a8 + 1;
  UNLOCK();
  param_1[6] = param_1;
  FUN_145c476e8(param_1 + 4);
  LOCK();
  _DAT_14cb1c8a8 = _DAT_14cb1c8a8 + -1;
  UNLOCK();
  return param_1;
}



// FUNCTION 145c476e8 FUN_145c476e8 body=67 status=ok
// SIG undefined FUN_145c476e8(void)

void FUN_145c476e8(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  while ((lVar2 != 0 &&
         (plVar1 = (longlong *)param_1[2],
         lVar2 = (**(code **)(**(longlong **)(lVar2 + 0x10) + 0x180))(), lVar2 != *plVar1))) {
    lVar2 = FUN_145c4772c(*(undefined8 *)*param_1);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 145c4772c FUN_145c4772c body=132 status=ok
// SIG undefined FUN_145c4772c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_145c4772c(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_1 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  do {
    lVar2 = param_1[2];
    if ((lVar2 != 0) && ((*(uint *)(lVar2 + 8) & 0x40018000) == 0)) {
      uVar1 = *(uint *)(lVar2 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar2 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        if ((*(uint *)(lVar2 + 8 + (ulonglong)(uVar1 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
          lVar2 = lVar2 + (ulonglong)(uVar1 & 0xffff) * 0x18;
LAB_145c477a1:
          if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) {
            return param_1;
          }
        }
      }
      else if ((_DAT_00000008 >> 0x15 & 1) == 0) {
        lVar2 = 0;
        goto LAB_145c477a1;
      }
    }
    param_1 = (longlong *)*param_1;
    if (param_1 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
  } while( true );
}



// FUNCTION 145c477b0 FUN_145c477b0 body=150 status=ok
// SIG undefined FUN_145c477b0(void)

void FUN_145c477b0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_144a86a6e(param_2);
  if (lVar1 != 0) {
    lVar1 = FUN_14011c706(param_2);
    if (lVar1 != 0) {
      FUN_14485c47a(param_1 + 0x10,lVar1);
      FUN_145c47e4e(local_30,param_1);
      FUN_140ea1bb6(&DAT_14cb0a930,&local_38,local_30);
      FUN_1449db362(local_30);
      *(undefined8 *)(param_1 + 0x28) = local_38;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c47848 FUN_145c47848 body=216 status=ok
// SIG undefined FUN_145c47848(void)

undefined8 * FUN_145c47848(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
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



// FUNCTION 145c4794a FUN_145c4794a body=428 status=ok
// SIG undefined FUN_145c4794a(void)

longlong * FUN_145c4794a(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  plVar6 = *(longlong **)(param_2 + 0x18);
  if (plVar6 == (longlong *)0x0) {
LAB_145c47a2a:
    *puVar5 = &PTR_LAB_14aba0840;
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
    *puVar5 = &PTR_FUN_14aba07d0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145c47a2a;
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
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14aba0840;
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
    *puVar5 = &PTR_FUN_14aba07d0;
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



// FUNCTION 145c47af6 FUN_145c47af6 body=428 status=ok
// SIG undefined FUN_145c47af6(void)

longlong * FUN_145c47af6(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  plVar6 = *(longlong **)(param_2 + 0x18);
  if (plVar6 == (longlong *)0x0) {
LAB_145c47bd6:
    *puVar5 = &PTR_LAB_14a1e1a40;
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
    *puVar5 = &PTR_FUN_14aba08b0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145c47bd6;
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
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14a1e1a40;
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
    *puVar5 = &PTR_FUN_14aba08b0;
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



// FUNCTION 145c47ca2 FUN_145c47ca2 body=428 status=ok
// SIG undefined FUN_145c47ca2(void)

longlong * FUN_145c47ca2(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  plVar6 = *(longlong **)(param_2 + 0x18);
  if (plVar6 == (longlong *)0x0) {
LAB_145c47d82:
    *puVar5 = &PTR_LAB_149e020b0;
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
    *puVar5 = &PTR_FUN_14aba0920;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145c47d82;
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
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e020b0;
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
    *puVar5 = &PTR_FUN_14aba0920;
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



// FUNCTION 145c47e4e FUN_145c47e4e body=422 status=ok
// SIG undefined FUN_145c47e4e(void)

longlong * FUN_145c47e4e(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
LAB_145c47f24:
    *puVar3 = &PTR_LAB_14a1ca3a0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14aba0450;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = FUN_1404fbe58;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_145c47f24;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *param_2;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14a1ca3a0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14aba0450;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_1404fbe58;
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



// FUNCTION 145c47ff4 FUN_145c47ff4 body=428 status=ok
// SIG undefined FUN_145c47ff4(void)

longlong * FUN_145c47ff4(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  plVar6 = *(longlong **)(param_2 + 0x18);
  if (plVar6 == (longlong *)0x0) {
LAB_145c480d4:
    *puVar5 = &PTR_LAB_14aba0a20;
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
    *puVar5 = &PTR_FUN_14aba09b0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145c480d4;
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
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14aba0a20;
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
    *puVar5 = &PTR_FUN_14aba09b0;
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



// FUNCTION 145c481a0 FUN_145c481a0 body=428 status=ok
// SIG undefined FUN_145c481a0(void)

longlong * FUN_145c481a0(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  plVar6 = *(longlong **)(param_2 + 0x18);
  if (plVar6 == (longlong *)0x0) {
LAB_145c48280:
    *puVar5 = &PTR_LAB_14aba0b00;
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
    *puVar5 = &PTR_FUN_14aba0a90;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145c48280;
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
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14aba0b00;
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
    *puVar5 = &PTR_FUN_14aba0a90;
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



// FUNCTION 145c4834c FUN_145c4834c body=1303 status=ok
// SIG undefined FUN_145c4834c(void)

undefined8 * FUN_145c4834c(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_348 [32];
  float local_328;
  undefined4 local_320;
  longlong *local_310;
  undefined4 local_308;
  undefined8 local_304;
  undefined4 local_2fc;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 local_2f0;
  undefined1 local_2e8;
  undefined1 local_2e7;
  undefined4 local_264;
  undefined1 local_248 [288];
  undefined1 local_128 [176];
  undefined1 local_78 [24];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_348;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = param_2;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
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
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = param_1;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined8 *)((longlong)param_1 + 500) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  *(undefined2 *)((longlong)param_1 + 0x21c) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined2 *)((longlong)param_1 + 0x222) = 0;
  *(undefined8 *)((longlong)param_1 + 0x224) = 0xff40400000;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x4a));
  lVar4 = FUN_141501124(param_2);
  if (lVar4 != 0) {
    plVar8 = param_1 + 0xf;
    FUN_14485c47a(param_1 + 0x12,lVar4);
    lVar5 = FUN_14477bcf0();
    FUN_144b4a100(&local_2e8);
    local_264 = *(undefined4 *)(lVar5 + 0xd4);
    local_2e7 = 0;
    local_2f8 = 0x520;
    uStack_2f4 = 0;
    uVar6 = (*DAT_14c787670)(0,&local_2f8,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(uVar6,"hkaiWorld");
    }
    FUN_144b4a2d0(uVar6,&local_2e8);
    FUN_14579fb6e(plVar8);
    param_1[0xf] = uVar6;
    plVar7 = (longlong *)FUN_14001cc68(8,0x10);
    FUN_145c4894a(plVar7,param_1);
    plVar2 = (longlong *)param_1[0x33];
    if ((plVar2 != plVar7) && (param_1[0x33] = plVar7, plVar2 != (longlong *)0x0)) {
      FUN_144b46620(*(longlong *)(*plVar2 + 0x78) + 0x18,plVar2);
      FUN_1400020a8(plVar2);
    }
    lVar5 = FUN_14477bcf0();
    lVar5 = *(longlong *)(lVar5 + 0x98);
    if ((lVar5 != 0) && (lVar11 = *(longlong *)(*plVar8 + 0x148), lVar11 != 0)) {
      *(float *)(lVar11 + 0xc0) = *(float *)(lVar5 + 0x48) * 0.01;
      *(float *)(lVar11 + 0xc4) = *(float *)(lVar5 + 0x4c) * 0.01;
      *(float *)(lVar11 + 200) = *(float *)(lVar5 + 0x50) * 0.01;
      *(float *)(lVar11 + 0xcc) = *(float *)(lVar5 + 0x54) * 0.01;
      *(undefined4 *)(lVar11 + 0xd0) = *(undefined4 *)(lVar5 + 0x58);
      *(undefined4 *)(lVar11 + 0xd4) = *(undefined4 *)(lVar5 + 0x5c);
      *(float *)(lVar11 + 0xd8) = *(float *)(lVar5 + 0x60) * 0.01;
      *(float *)(lVar11 + 0xf0) = *(float *)(lVar5 + 100) * 0.01;
      *(float *)(lVar11 + 0xdc) = *(float *)(lVar5 + 0x68) * 0.01;
      *(undefined1 *)(lVar11 + 0xf4) = *(undefined1 *)(lVar5 + 0x6c);
    }
    local_310 = plVar8;
    FUN_14485c47a(param_1,lVar4);
    lVar4 = FUN_145c48bf4(param_1);
    FUN_145c48878(param_1 + 0xb);
    param_1[0xb] = lVar4;
    if (lVar4 != 0) {
      plVar8 = (longlong *)FUN_145c48865();
      iVar9 = (int)plVar8[1];
      if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar9);
      }
      plVar2 = param_1 + 0x31;
      if (*(int *)((longlong)param_1 + 0x194) < iVar9) {
        FUN_145c488da(plVar2);
        iVar9 = (int)plVar8[1];
      }
      if (iVar9 != 0) {
        lVar5 = *plVar8;
        lVar11 = 0;
        do {
          lVar10 = *(longlong *)(lVar5 + lVar11);
          if (lVar10 != 0) {
            local_2fc = FUN_14038d05c(lVar10);
            local_328 = *(float *)(lVar10 + 0x30 + (ulonglong)*(byte *)(lVar10 + 0x3c) * 4) * 0.01;
            local_320 = 1;
            FUN_144b49df0(param_1[0xf],&local_2f8,&local_2fc,lVar4);
            local_308 = local_2f8;
            local_304 = CONCAT44(local_2f0,uStack_2f4);
            FUN_144b49f10(param_1[0xf],&local_308,100);
            iVar1 = *(int *)(param_1 + 0x32);
            lVar10 = (longlong)iVar1;
            *(uint *)(param_1 + 0x32) = iVar1 + 1U;
            if (*(uint *)((longlong)param_1 + 0x194) < iVar1 + 1U) {
              FUN_147e687c6(plVar2,iVar1);
            }
            lVar3 = *plVar2;
            *(undefined4 *)(lVar3 + lVar10 * 0xc) = local_2f8;
            *(undefined4 *)(lVar3 + 4 + lVar10 * 0xc) = uStack_2f4;
            *(undefined4 *)(lVar3 + 8 + lVar10 * 0xc) = local_2f0;
          }
          lVar11 = lVar11 + 8;
        } while ((longlong)iVar9 * 8 != lVar11);
      }
    }
    FUN_145c48d1a(param_1 + 0x44,local_310);
    FUN_144b49dd0(local_78);
    FUN_144b4a050(local_128);
    FUN_144b409a0(local_248);
  }
  if ((local_60 ^ (ulonglong)auStack_348) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c48865 FUN_145c48865 body=18 status=ok
// SIG undefined FUN_145c48865(void)

longlong FUN_145c48865(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14477bcf0();
  return lVar1 + 0x38;
}



// FUNCTION 145c48878 FUN_145c48878 body=97 status=ok
// SIG undefined FUN_145c48878(void)

void FUN_145c48878(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*param_1 != 0) {
    FUN_144b3f230();
    *param_1 = 0;
  }
  param_1[1] = 0;
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    param_1[2] = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000145c488d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145c488da FUN_145c488da body=112 status=ok
// SIG undefined FUN_145c488da(void)

void FUN_145c488da(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0xc,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0xc)) {
      uVar2 = uVar1 / 0xc & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xc,4);
  }
  return;
}



// FUNCTION 145c4894a FUN_145c4894a body=177 status=ok
// SIG undefined FUN_145c4894a(void)

longlong * FUN_145c4894a(longlong *param_1,longlong param_2)

{
  *param_1 = param_2;
  FUN_145c48aa4(*(longlong *)(param_2 + 0x78) + 0x88,param_1,FUN_140b9c536);
  FUN_145c48b4c(*(longlong *)(*param_1 + 0x78) + 0x98,param_1,FUN_1403e2488);
  FUN_145c489fc(*(longlong *)(*param_1 + 0x78) + 0x40,param_1,FUN_1409e6fc8);
  FUN_145c489fc(*(longlong *)(*param_1 + 0x78) + 0x48,param_1,FUN_1409e702c);
  FUN_145c489fc(*(longlong *)(*param_1 + 0x78) + 0x58,param_1,FUN_1409e6fc8);
  FUN_145c489fc(*(longlong *)(*param_1 + 0x78) + 0x60,param_1,FUN_1409e702c);
  return param_1;
}



// FUNCTION 145c489fc FUN_145c489fc body=166 status=ok
// SIG undefined FUN_145c489fc(void)

void FUN_145c489fc(ulonglong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0x20;
  puVar1 = (undefined8 *)(*DAT_14c787670)(0,&local_30,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar1,"MemberSlot");
  }
  *puVar1 = &PTR_LAB_14ab67c70;
  puVar1[1] = *param_1 & 0xfffffffffffffffc;
  puVar1[2] = param_2;
  *param_1 = (ulonglong)((uint)*param_1 & 3) | (ulonglong)puVar1;
  *puVar1 = &PTR_FUN_14aba3000;
  puVar1[3] = param_3;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c48aa4 FUN_145c48aa4 body=166 status=ok
// SIG undefined FUN_145c48aa4(void)

void FUN_145c48aa4(ulonglong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0x20;
  puVar1 = (undefined8 *)(*DAT_14c787670)(0,&local_30,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar1,"MemberSlot");
  }
  *puVar1 = &PTR_LAB_14ab67c70;
  puVar1[1] = *param_1 & 0xfffffffffffffffc;
  puVar1[2] = param_2;
  *param_1 = (ulonglong)((uint)*param_1 & 3) | (ulonglong)puVar1;
  *puVar1 = &PTR_FUN_14aba2f80;
  puVar1[3] = param_3;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c48b4c FUN_145c48b4c body=166 status=ok
// SIG undefined FUN_145c48b4c(void)

void FUN_145c48b4c(ulonglong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0x20;
  puVar1 = (undefined8 *)(*DAT_14c787670)(0,&local_30,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar1,"MemberSlot");
  }
  *puVar1 = &PTR_LAB_14ab67c70;
  puVar1[1] = *param_1 & 0xfffffffffffffffc;
  puVar1[2] = param_2;
  *param_1 = (ulonglong)((uint)*param_1 & 3) | (ulonglong)puVar1;
  *puVar1 = &PTR_FUN_14aba2fc0;
  puVar1[3] = param_3;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c48bf4 FUN_145c48bf4 body=293 status=ok
// SIG undefined FUN_145c48bf4(void)

undefined8 * FUN_145c48bf4(void)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar6 = FUN_14479d2ce();
  FUN_141246736(&local_30,uVar6);
  if (local_28 != (longlong *)0x0) {
    iVar5 = (int)local_28[1];
    do {
      if (iVar5 == 0) {
        plVar8 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar4 = (int)local_28[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(local_28 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      plVar8 = local_28;
    } while (!bVar9);
    LOCK();
    piVar1 = (int *)((longlong)local_28 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
    lVar3 = local_30;
    if (plVar8 != (longlong *)0x0) {
      if (local_30 == 0) {
        puVar7 = (undefined8 *)0x0;
      }
      else {
        local_30 = 0x20;
        puVar7 = (undefined8 *)(*DAT_14c787670)(0,&local_30,0);
        if (DAT_14c787680 != (code *)0x0) {
          (*DAT_14c787680)(puVar7,"FHavokClearanceFilter");
        }
        puVar7[1] = 0xffffffff;
        puVar7[2] = 1;
        *puVar7 = &PTR_FUN_14aba2f40;
        puVar7[3] = lVar3 + 0x2f0;
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
      goto LAB_145c48cc5;
    }
  }
  puVar7 = (undefined8 *)0x0;
LAB_145c48cc5:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar7;
}



// FUNCTION 145c48d1a FUN_145c48d1a body=353 status=ok
// SIG undefined FUN_145c48d1a(void)

void FUN_145c48d1a(char *param_1,undefined8 *param_2)

{
  char cVar1;
  ushort uVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0x228;
  uVar5 = (*DAT_14c787670)(0,&local_40,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(uVar5,"FHavokDirectProcessingTaskQueue");
  }
  uVar7 = 1;
  FUN_1446f470e(&local_40,L"HavokNav/Runtime",1);
  FUN_145c48e7c(uVar5,&local_40);
  FUN_14579facc(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  uVar4 = (**(code **)(*DAT_14c82b500 + 0x20))();
  uVar2 = *(ushort *)(param_1 + 2);
  if (uVar2 == 0) {
    cVar1 = *param_1;
    if (cVar1 != '\x01') {
      if (cVar1 != '\x02') {
        uVar7 = 0;
        goto LAB_145c48dcc;
      }
      goto LAB_145c48dfe;
    }
LAB_145c48e34:
    uVar5 = *param_2;
    uVar6 = FUN_14001cc68(0x70,0x10);
    FUN_147e49590(uVar6,uVar5,uVar4,*(undefined4 *)(param_1 + 4));
  }
  else {
    uVar7 = uVar4;
    if ((int)(uint)uVar2 < (int)uVar4) {
      uVar7 = (uint)uVar2;
    }
    cVar1 = *param_1;
LAB_145c48dcc:
    if (cVar1 != '\x02') {
      uVar4 = uVar7;
      if (cVar1 != '\x01') goto LAB_145c48dd9;
      goto LAB_145c48e34;
    }
LAB_145c48dfe:
    uVar5 = *param_2;
    uVar6 = FUN_14001cc68(0x278,0x10);
    FUN_147e49084(uVar6,uVar5,uVar7,*(undefined4 *)(param_1 + 8));
  }
  puVar3 = *(undefined8 **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar6;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
LAB_145c48dd9:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c48e7c FUN_145c48e7c body=313 status=ok
// SIG undefined FUN_145c48e7c(void)

undefined8 * FUN_145c48e7c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *param_1 = &PTR_FUN_14ab67590;
  param_1[3] = &PTR_FUN_14ab675b0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined2 *)((longlong)param_1 + 0x22) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0xff;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 1;
  param_1[8] = 0;
  param_1[9] = 0x8000000000000000;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = param_1 + 0xf;
  param_1[0xe] = 0x8000002000000000;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  puVar1 = (undefined8 *)FUN_140595974(0x48,0);
  *puVar1 = param_1[0x2f];
  param_1[0x2f] = puVar1;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  FUN_144b4a250(param_1 + 0x31,1000);
  FUN_144b4a250(param_1 + 0x36,1000);
  FUN_144b4a250(param_1 + 0x3b,1000);
  *(undefined1 *)(param_1 + 0x40) = 0;
  FUN_144b4a290(param_1 + 0x41,0,1,0);
  param_1[0x43] = *param_2;
  *(undefined1 *)(param_1 + 0x44) = 0;
  if ((*(uint *)((longlong)param_1 + 0x4c) & 0x7fffff00) == 0) {
    FUN_145c48fb6(param_1 + 8,0x100);
  }
  return param_1;
}



// FUNCTION 145c48fb6 FUN_145c48fb6 body=289 status=ok
// SIG undefined FUN_145c48fb6(void)

void FUN_145c48fb6(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar11 = (ulonglong)(uint)(*(int *)((longlong)param_1 + 0xc) * 2);
  if (uVar11 <= param_2) {
    uVar11 = param_2;
  }
  if ((0x7ffffffe < uVar11) && (uVar11 = 0x7ffffffe, 0x7ffffffe < param_2)) {
    FUN_144bfc170(0x4648a379,
                  "..\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_30 = uVar11 * 0x10;
  lVar9 = (*DAT_14c787670)(DAT_14c6e47a8,&local_30,DAT_14c6e47ac);
  iVar8 = (int)param_1[1];
  if (0 < iVar8) {
    lVar4 = *param_1;
    lVar10 = 0;
    do {
      puVar2 = (undefined4 *)(lVar4 + lVar10);
      uVar5 = puVar2[1];
      uVar6 = puVar2[2];
      uVar7 = puVar2[3];
      puVar3 = (undefined4 *)(lVar9 + lVar10);
      *puVar3 = *puVar2;
      puVar3[1] = uVar5;
      puVar3[2] = uVar6;
      puVar3[3] = uVar7;
      lVar10 = lVar10 + 0x10;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  uVar1 = uVar11 * 0x10 + 0x10;
  uVar12 = uVar11;
  if (uVar1 <= local_30) {
    uVar12 = uVar11 + 1;
    local_30 = local_30 - 0x10;
    if (uVar1 <= local_30) {
      uVar12 = uVar12 + (local_30 + uVar11 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(CONCAT71((int7)(uVar1 >> 8),DAT_14c6e47a8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar12;
  *param_1 = lVar9;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c490d8 FUN_145c490d8 body=185 status=ok
// SIG undefined FUN_145c490d8(void)

int FUN_145c490d8(longlong *param_1,uint param_2,undefined8 *param_3)

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
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x14);
        cVar1 = FUN_1407052fc(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_145c49101;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_145c49101:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 145c49192 FUN_145c49192 body=258 status=ok
// SIG undefined FUN_145c49192(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c49192(void)

{
  longlong lVar1;
  undefined ***pppuVar2;
  undefined1 auStack_88 [32];
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  DAT_14cb0c050 = 0;
  _DAT_14cb0c058 = 0;
  DAT_14cb0c060 = 0;
  lVar1 = 0x44;
  do {
    *(undefined8 *)(&DAT_14cb0c044 + lVar1) = 0;
    *(undefined8 *)(lVar1 + 0x14cb0c04c) = 0x400000000;
    lVar1 = lVar1 + 0x30;
  } while (lVar1 != 0x1c4);
  _DAT_14cb0ca08 = 0;
  _DAT_14cb0ca10 = 0;
  memset(&DAT_14cb0c1e8,0,0x800);
  _DAT_14cb0ca14 = 4;
  _DAT_14cb0ca1c = 0;
  DAT_14cb0ca20 = 0;
  local_58 = (undefined ***)0x0;
  local_48 = &PTR_LAB_14aadf310;
  local_40 = &DAT_14cb0c050;
  local_68[0] = &LAB_146409446;
  (**(code **)(*DAT_14c82b500 + 0x80))(DAT_14c82b500,local_68);
  if (local_68[0] != (undefined1 *)0x0) {
    pppuVar2 = local_58;
    if (local_58 == (undefined ***)0x0) {
      pppuVar2 = &local_48;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c49296 FUN_145c49296 body=12 status=ok
// SIG undefined FUN_145c49296(void)

void FUN_145c49296(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145c4929f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 145c492a2 FUN_145c492a2 body=31 status=ok
// SIG undefined FUN_145c492a2(void)

undefined8 FUN_145c492a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c492c2 FUN_145c492c2 body=26 status=ok
// SIG undefined FUN_145c492c2(void)

undefined8 FUN_145c492c2(longlong param_1,undefined8 param_2)

{
  FUN_145c492dc(param_1 + 0x18);
  return param_2;
}



// FUNCTION 145c492dc FUN_145c492dc body=426 status=ok
// SIG undefined FUN_145c492dc(void)

undefined8 * FUN_145c492dc(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14cb81080 == (longlong *)0x0 || DAT_14cb81088 == 0) ||
     (cVar3 = (**(code **)(*DAT_14cb81080 + 0x30))(), cVar3 == '\0')) {
    puVar4 = (undefined8 *)FUN_14001cc68(0xd0,0x10);
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = &PTR_FUN_14b40db10;
    puVar4[8] = 0;
    *(undefined4 *)(puVar4 + 9) = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    *(undefined8 *)((longlong)puVar4 + 0x4c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)puVar4 + 0x54) = 0;
    puVar4[0xc] = 0;
    *(undefined4 *)(puVar4 + 0xd) = 0;
    puVar4[0x14] = 0;
    *(undefined4 *)(puVar4 + 0x15) = 0;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
    puVar4[0x10] = 0;
    puVar4[0x11] = 0;
    *(undefined8 *)((longlong)puVar4 + 0xac) = 0xffffffff00000080;
    *(undefined4 *)((longlong)puVar4 + 0xb4) = 0;
    puVar4[0x18] = 0;
    *(undefined4 *)(puVar4 + 0x19) = 0;
    plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar5[1] = (longlong)&DAT_100000001;
    *plVar5 = (longlong)&PTR_FUN_14b40ee10;
    plVar5[2] = (longlong)puVar4;
    local_28 = plVar5;
    if (puVar4 == (undefined8 *)0x0) {
      local_30 = (undefined8 *)0x0;
    }
    else {
      local_30 = puVar4;
      if (plVar5 == (longlong *)0x0) {
        puVar4[2] = puVar4;
        local_28 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        puVar4[2] = puVar4;
        if ((longlong *)puVar4[3] != plVar5) {
          LOCK();
          *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
          UNLOCK();
          plVar2 = (longlong *)puVar4[3];
          if (plVar2 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar2 + 0x10))();
            }
          }
          puVar4[3] = plVar5;
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
  }
  else {
    plVar5 = DAT_14cb81080;
    if (DAT_14cb81088 == 0) {
      plVar5 = (longlong *)0x0;
    }
    (**(code **)(*plVar5 + 0x58))(plVar5,&local_30);
  }
  *param_2 = local_30;
  param_2[1] = local_28;
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145c49488 FUN_145c49488 body=90 status=ok
// SIG undefined FUN_145c49488(void)

void FUN_145c49488(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x938) = 0;
  plVar3 = *(longlong **)(param_1 + 0x940);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x940) = 0;
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
  FUN_145c494e2(*(undefined8 *)(param_1 + 0x998));
  return;
}



// FUNCTION 145c494e2 FUN_145c494e2 body=61 status=ok
// SIG undefined FUN_145c494e2(void)

void FUN_145c494e2(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  FUN_141462cfc(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0xc) != 0)) {
    FUN_148a43da4(param_1);
    return;
  }
  return;
}



// FUNCTION 145c49520 FUN_145c49520 body=68 status=ok
// SIG undefined FUN_145c49520(void)

void FUN_145c49520(undefined8 param_1)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x1e8);
  memset(_Dst,0,0x1e8);
  FUN_145c49564(_Dst);
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 145c49564 FUN_145c49564 body=113 status=ok
// SIG undefined FUN_145c49564(void)

undefined8 * FUN_145c49564(undefined8 *param_1)

{
  FUN_1408f3f9e();
  *param_1 = &PTR_FUN_14b8b9df0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  FUN_145c495d6(param_1 + 0x18);
  FUN_145c495d6(param_1 + 0x24);
  FUN_145c495d6(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1e4) = 0x100;
  return param_1;
}



// FUNCTION 145c495d6 FUN_145c495d6 body=221 status=ok
// SIG undefined FUN_145c495d6(void)

longlong FUN_145c495d6(longlong param_1)

{
  ushort uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400b22c2(param_1,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 0x10,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 0x20,&DAT_149e02088);
  FUN_1400021e4(&DAT_14cb888b0,&local_28);
  uVar2 = local_20 - 1;
  if (local_20 == 0) {
    uVar2 = 0;
  }
  if (0 < (int)uVar2) {
    uVar3 = 0;
    do {
      uVar1 = *(ushort *)(local_28 + uVar3 * 2);
      *(ushort *)(local_28 + uVar3 * 2) = (ushort)(uVar1 - 0x41 < 0x1a) * 0x20 + uVar1;
      uVar3 = uVar3 + 1;
    } while (uVar2 != uVar3);
  }
  *(longlong *)(param_1 + 0x30) = local_28;
  *(int *)(param_1 + 0x38) = local_20;
  *(undefined4 *)(param_1 + 0x3c) = local_1c;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145c496b4 FUN_145c496b4 body=98 status=ok
// SIG undefined FUN_145c496b4(void)

void FUN_145c496b4(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 6,8);
    iVar1 = (int)(uVar2 >> 6);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x40,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 145c49716 FUN_145c49716 body=196 status=ok
// SIG undefined FUN_145c49716(void)

void FUN_145c49716(longlong param_1,undefined4 param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x68) + 0x30))
            (*(longlong **)(param_1 + 0x68),&local_48,param_2);
  if (local_48 == (longlong *)0x0) {
    if (((int)param_4[1] != 0) && (param_4 = (longlong *)*param_4, param_4 != (longlong *)0x0)) {
      (**(code **)(*param_4 + 0x60))(param_4,1,param_3);
    }
  }
  else {
    (**(code **)(*local_48 + 0x10))(local_48,param_3,param_4);
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c497dc FUN_145c497dc body=22 status=ok
// SIG undefined FUN_145c497dc(void)

undefined8 FUN_145c497dc(undefined8 param_1,undefined8 param_2)

{
  FUN_145c497f2();
  return param_2;
}



// FUNCTION 145c497f2 FUN_145c497f2 body=343 status=ok
// SIG undefined FUN_145c497f2(void)

longlong * FUN_145c497f2(longlong *param_1,longlong *param_2,undefined4 param_3,undefined8 param_4)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140056680(&local_48,L"SanitizerPlatformService");
  plVar3 = (longlong *)FUN_145c4994a(&local_48);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)FUN_140a68038(1);
  }
  if (plVar3 == param_1 || plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
LAB_145c4988e:
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar2 = FUN_14054d46e(&DAT_14c846b20,L"testsanitizer");
    if ((cVar2 != '\0') &&
       (plVar4 = (longlong *)FUN_1401e3228(&DAT_14cb8e198), plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 0x30))(plVar4,param_2,param_3,param_4);
      if (plVar3 != (longlong *)0x0) {
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
      goto LAB_145c498b7;
    }
    local_48 = 0;
    local_40 = plVar3;
  }
  else {
    (**(code **)(*plVar3 + 0x30))(plVar3,&local_48,param_3,param_4);
    plVar3 = local_40;
    if (local_48 == 0) goto LAB_145c4988e;
  }
  *param_2 = local_48;
  param_2[1] = (longlong)local_40;
LAB_145c498b7:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145c4994a FUN_145c4994a body=150 status=ok
// SIG undefined FUN_145c4994a(void)

void FUN_145c4994a(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8e458) {
    FUN_144b3d300(&DAT_14cb8e458);
    if (DAT_14cb8e458 == -1) {
      FUN_1446f470e(&DAT_14cb8e450,L"OnlineSubsystem",1);
      _Init_thread_footer(&DAT_14cb8e458);
    }
  }
  uVar1 = DAT_14cb8e450;
  uVar2 = FUN_144a52528();
  plVar3 = (longlong *)FUN_1401e3324(uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x000145c499a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x60))(plVar3,param_1,1,*(code **)(*plVar3 + 0x60));
  return;
}



// FUNCTION 145c499e0 FUN_145c499e0 body=141 status=ok
// SIG undefined FUN_145c499e0(void)

undefined8 FUN_145c499e0(longlong param_1,undefined8 *param_2,char param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  
  iVar4 = *(int *)(param_2 + 1);
  if (iVar4 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*param_2;
  }
  iVar1 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar1 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar1,puVar6);
  iVar4 = FUN_14128acc0((longlong *)(param_1 + 0x18),uVar3,param_2);
  if (((iVar4 != -1) &&
      (lVar7 = (longlong)iVar4 * 0x20 + *(longlong *)(param_1 + 0x18),
      plVar8 = (longlong *)(lVar7 + 0x10), plVar8 != (longlong *)0x0 && lVar7 != 0)) &&
     (*plVar8 != 0)) {
    if ((param_3 == '\0') && (cVar2 = FUN_140a68212(plVar8), cVar2 == '\0')) {
      return 0;
    }
    uVar5 = FUN_1401e3228(plVar8);
    return uVar5;
  }
  return 0;
}



// FUNCTION 145c49a6e FUN_145c49a6e body=609 status=ok
// SIG undefined FUN_145c49a6e(void)

longlong * FUN_145c49a6e(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_2[1] = 0;
  FUN_145c49cd0(param_1 + 0x98,&local_50);
  *param_2 = local_50;
  if (local_48 != (longlong *)0x0) {
    param_2[1] = (longlong)local_48;
  }
  if (local_50 != 0) goto LAB_145c49b9e;
  if ((longlong)*(int *)(param_1 + 0x1e0) < 1) {
    lVar6 = FUN_14001cc68(0x20,0x10);
    FUN_141501a5e(lVar6,param_3);
    plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar7[1] = (longlong)&DAT_100000001;
    *plVar7 = (longlong)&PTR_FUN_14a453120;
    plVar7[2] = lVar6;
    *param_2 = lVar6;
    if (plVar7 == local_48) {
      if (local_48 != (longlong *)0x0) {
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
            lVar6 = *plVar7;
            goto LAB_145c49c90;
          }
        }
      }
    }
    else {
      param_2[1] = (longlong)plVar7;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_48 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar1 = (int *)((longlong)local_48 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            lVar6 = *local_48;
            plVar7 = local_48;
LAB_145c49c90:
            (**(code **)(lVar6 + 0x10))(plVar7);
          }
        }
      }
    }
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x1d8);
    lVar8 = (longlong)*(int *)(param_1 + 0x1e0) * 0x10;
    lVar5 = *(longlong *)(lVar6 + -0x10 + lVar8);
    plVar7 = *(longlong **)(lVar6 + -8 + lVar8);
    puVar3 = (undefined8 *)(lVar6 + -0x10 + lVar8);
    *puVar3 = 0;
    puVar3[1] = 0;
    FUN_147516a6a(param_1 + 0x1d8,*(int *)(param_1 + 0x1e0) + -1);
    *param_2 = lVar5;
    if (plVar7 == local_48) {
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar7 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar4 = *piVar1;
          UNLOCK();
joined_r0x000145c49cb5:
          if (iVar4 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
    }
    else {
      param_2[1] = (longlong)plVar7;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_48 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar1 = (int *)((longlong)local_48 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar4 = *piVar1;
          UNLOCK();
          plVar7 = local_48;
          goto joined_r0x000145c49cb5;
        }
      }
    }
    FUN_1432c55f2(*param_2,param_3);
  }
  fVar9 = (float)(**(code **)(*param_3 + 0x358))(param_3);
  fVar10 = (float)(**(code **)(*param_3 + 0x350))(param_3);
  local_60 = *param_2;
  *(ulonglong *)(*(longlong *)(local_60 + 0x18) + 0x18) = CONCAT44((int)fVar9,(int)fVar10);
  local_58 = param_2[1];
  if (local_58 != 0) {
    LOCK();
    *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
    UNLOCK();
  }
  FUN_145c49e74(param_1 + 0x98,param_3,&local_60);
LAB_145c49b9e:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c49cd0 FUN_145c49cd0 body=180 status=ok
// SIG undefined FUN_145c49cd0(void)

undefined8 * FUN_145c49cd0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 != 0) {
    local_30 = 0;
    FUN_14485c47a(&local_30,param_3);
    local_28 = local_30;
    iVar1 = FUN_145c49d86((longlong *)(param_1 + 0x50),
                          (uint)((ulonglong)local_30 >> 0x20) ^ (uint)local_30);
    if ((iVar1 != -1) &&
       (lVar2 = (longlong)iVar1 * 0x20 + *(longlong *)(param_1 + 0x50), lVar2 != 0)) {
      *param_2 = *(undefined8 *)(lVar2 + 8);
      lVar2 = *(longlong *)(lVar2 + 0x10);
      param_2[1] = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 145c49d86 FUN_145c49d86 body=180 status=ok
// SIG undefined FUN_145c49d86(void)

int FUN_145c49d86(longlong *param_1,uint param_2,undefined8 *param_3)

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
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x20);
        cVar1 = FUN_145c49e3c(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_145c49e14;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x18 + (longlong)iVar4 * 0x20);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_145c49e14:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c49e3c FUN_145c49e3c body=55 status=ok
// SIG undefined FUN_145c49e3c(void)

ulonglong FUN_145c49e3c(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 != *param_2) ||
     (uVar2 = CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1), param_1[1] != param_2[1])) {
    cVar1 = FUN_144729dda();
    if (cVar1 == '\0') {
      uVar2 = FUN_144729dda(param_2);
      uVar2 = uVar2 ^ 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



// FUNCTION 145c49e74 FUN_145c49e74 body=218 status=ok
// SIG undefined FUN_145c49e74(void)

void FUN_145c49e74(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = *param_3;
  local_40 = (longlong *)param_3[1];
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  local_50 = 0;
  FUN_14485c47a(&local_50);
  local_30 = &local_48;
  local_38 = &local_50;
  FUN_145c49f50(param_1 + 0x50,local_24);
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
  plVar3 = (longlong *)param_3[1];
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
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c49f50 FUN_145c49f50 body=313 status=ok
// SIG undefined FUN_145c49f50(void)

undefined4 * FUN_145c49f50(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
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
  FUN_145c4a14c(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  local_40[1] = *puVar1;
  local_40[2] = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)*local_40 >> 0x20) ^ (uint)*local_40;
  cVar3 = FUN_145c4a08a(param_1,uVar8,local_40,&local_4c);
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
      FUN_145c4a232(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c4a08a FUN_145c4a08a body=193 status=ok
// SIG undefined FUN_145c4a08a(void)

undefined8 FUN_145c4a08a(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_40 = *param_3;
    iVar9 = FUN_145c49d86();
    if (iVar9 != -1) {
      puVar3 = (undefined4 *)(*param_1 + (longlong)iVar9 * 0x20);
      plVar4 = *(longlong **)(*param_1 + 0x10 + (longlong)iVar9 * 0x20);
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
      uVar5 = *(undefined4 *)param_3;
      uVar6 = *(undefined4 *)((longlong)param_3 + 4);
      uVar7 = *(undefined4 *)(param_3 + 1);
      uVar8 = *(undefined4 *)((longlong)param_3 + 0xc);
      *(undefined8 *)(puVar3 + 4) = param_3[2];
      *puVar3 = uVar5;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      FUN_14573371e(param_1,*param_4);
      *param_4 = iVar9;
      uVar10 = 1;
      goto LAB_145c4a0d0;
    }
  }
  uVar10 = 0;
LAB_145c4a0d0:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c4a14c FUN_145c4a14c body=230 status=ok
// SIG undefined FUN_145c4a14c(void)

int * FUN_145c4a14c(longlong *param_1,int *param_2)

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



// FUNCTION 145c4a232 FUN_145c4a232 body=448 status=ok
// SIG undefined FUN_145c4a232(void)

void FUN_145c4a232(longlong *param_1)

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
                 (int)((uint)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) ^
                      (uint)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 145c4a3f4 FUN_145c4a3f4 body=156 status=ok
// SIG undefined FUN_145c4a3f4(void)

void FUN_145c4a3f4(undefined8 param_1,longlong param_2)

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
  FUN_145c4a492(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c4a492 FUN_145c4a492 body=95 status=ok
// SIG undefined FUN_145c4a492(void)

void FUN_145c4a492(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0xa88))(param_2,param_1 + 0x8640);
    lVar1 = FUN_144a7e9aa();
    if (((*(int *)(lVar1 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
        (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
         lVar1 + 0x30)) && (*(longlong **)(param_1 + 0x8608) == param_2)) {
      *(undefined8 *)(param_1 + 0x8608) = 0;
    }
  }
  return;
}



// FUNCTION 145c4a4f2 FUN_145c4a4f2 body=40 status=ok
// SIG undefined FUN_145c4a4f2(void)

undefined8 FUN_145c4a4f2(undefined8 param_1,int param_2)

{
  FUN_145c4a51a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c4a51a FUN_145c4a51a body=61 status=ok
// SIG undefined FUN_145c4a51a(void)

void FUN_145c4a51a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4ecdd0;
  if ((longlong *)param_1[10] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[10] + 0x10))();
  }
  if ((longlong *)param_1[6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[6] + 0x10))();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c4a562 FUN_145c4a562 body=191 status=ok
// SIG undefined FUN_145c4a562(void)

undefined8 * FUN_145c4a562(undefined8 *param_1)

{
  FUN_1400ead26();
  *param_1 = &PTR_FUN_14a865560;
  param_1[5] = &PTR_LAB_14a865b50;
  param_1[6] = &PTR_LAB_14a865b90;
  param_1[0x55] = 0;
  param_1[0x57] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  FUN_144a78564(param_1 + 0x61);
  *(undefined4 *)((longlong)param_1 + 0x2c4) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x1fb) = 0;
  param_1[0x5e] = 0;
  *(undefined4 *)((longlong)param_1 + 0x304) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x60) = 0;
  *param_1 = &PTR_FUN_14a5d6f00;
  param_1[5] = &PTR_FUN_14a5d74f0;
  param_1[6] = &PTR_LAB_14a5d7530;
  param_1[99] = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0x42c80000;
  return param_1;
}



// FUNCTION 145c4a62c FUN_145c4a62c body=90 status=ok
// SIG undefined FUN_145c4a62c(void)

undefined8 * FUN_145c4a62c(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a64cb00;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd1) = 0;
  return param_1;
}



// FUNCTION 145c4a692 FUN_145c4a692 body=90 status=ok
// SIG undefined FUN_145c4a692(void)

undefined8 * FUN_145c4a692(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a64fc60;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  return param_1;
}



// FUNCTION 145c4a6f8 FUN_145c4a6f8 body=90 status=ok
// SIG undefined FUN_145c4a6f8(void)

undefined8 * FUN_145c4a6f8(undefined8 *param_1)

{
  FUN_140ffc8f2();
  *param_1 = &PTR_FUN_14a6f5790;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x45) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4d) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x75) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7d) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 0x41;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0x3ff0000000000000;
  return param_1;
}



// FUNCTION 145c4a75e FUN_145c4a75e body=191 status=ok
// SIG undefined FUN_145c4a75e(void)

undefined8 * FUN_145c4a75e(undefined8 *param_1)

{
  FUN_1400ead26();
  *param_1 = &PTR_FUN_14a865560;
  param_1[5] = &PTR_LAB_14a865b50;
  param_1[6] = &PTR_LAB_14a865b90;
  param_1[0x55] = 0;
  param_1[0x57] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  FUN_144a78564(param_1 + 0x61);
  *(undefined4 *)((longlong)param_1 + 0x2c4) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x1fb) = 0;
  param_1[0x5e] = 0;
  *(undefined4 *)((longlong)param_1 + 0x304) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x60) = 0;
  *param_1 = &PTR_FUN_14a70ce20;
  param_1[5] = &PTR_FUN_14a70d410;
  param_1[6] = &PTR_LAB_14a70d450;
  param_1[99] = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0x40000000;
  return param_1;
}



// FUNCTION 145c4a828 FUN_145c4a828 body=90 status=ok
// SIG undefined FUN_145c4a828(void)

undefined8 * FUN_145c4a828(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14acb0b10;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0xaaad1010;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x66) = 0;
  FUN_1400b22c2(param_1 + 0xe,&DAT_14acb0db0);
  *(undefined4 *)(param_1 + 0x10) = 0x1f90;
  return param_1;
}



// FUNCTION 145c4a882 FUN_145c4a882 body=40 status=ok
// SIG undefined FUN_145c4a882(void)

undefined8 FUN_145c4a882(undefined8 param_1,int param_2)

{
  FUN_145c4a8aa();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c4a8aa FUN_145c4a8aa body=61 status=ok
// SIG undefined FUN_145c4a8aa(void)

void FUN_145c4a8aa(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14acb0b10;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c4a8f0 FUN_145c4a8f0 body=93 status=ok
// SIG undefined FUN_145c4a8f0(void)

undefined8 * FUN_145c4a8f0(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_14007ca06();
  FUN_144a0768c(param_1,uVar2);
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14ad93350;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  uVar1 = FUN_144830b78(param_1 + 0xb,&DAT_14cb42160);
  *(undefined4 *)(param_1 + 0xb) = uVar1;
  FUN_140056680(param_1 + 0xc,L"{AssetFolder}/{AssetName}_BakedSVT_{OutputName}");
  return param_1;
}



// FUNCTION 145c4a94e FUN_145c4a94e body=40 status=ok
// SIG undefined FUN_145c4a94e(void)

undefined8 FUN_145c4a94e(undefined8 param_1,int param_2)

{
  FUN_145c4a976();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c4a976 FUN_145c4a976 body=61 status=ok
// SIG undefined FUN_145c4a976(void)

void FUN_145c4a976(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14afd6200;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c4a9bc FUN_145c4a9bc body=93 status=ok
// SIG undefined FUN_145c4a9bc(void)

undefined8 * FUN_145c4a9bc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_1405ba846(param_1,uVar1);
  *param_1 = &PTR_FUN_14b1c6a20;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  *(undefined1 *)(param_1 + 0x7d) = 1;
  (**(code **)(*(longlong *)param_1[0x75] + 0x728))((longlong *)param_1[0x75],DAT_14cb88aa0,1);
  return param_1;
}



// FUNCTION 145c4aa1a FUN_145c4aa1a body=9 status=ok
// SIG undefined FUN_145c4aa1a(void)

void FUN_145c4aa1a(longlong param_1)

{
  FUN_145c4aa24(param_1 + 0x10);
  return;
}



// FUNCTION 145c4aa24 FUN_145c4aa24 body=277 status=ok
// SIG undefined FUN_145c4aa24(void)

void FUN_145c4aa24(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(longlong *)(param_1 + 0x18) != 0) && (*(longlong *)(param_1 + 0x20) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x20) + 8))) {
    FUN_1401cb356();
    local_28 = *(undefined8 *)(param_1 + 0x18);
    local_20 = *(longlong *)(param_1 + 0x20);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_28);
    plVar3 = *(longlong **)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x58);
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
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    piVar2 = (int *)(*(longlong *)(param_1 + 8) + 0xc);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c4ab58 FUN_145c4ab58 body=40 status=ok
// SIG undefined FUN_145c4ab58(void)

undefined8 FUN_145c4ab58(undefined8 param_1,int param_2)

{
  FUN_145c4ab80();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c4ab80 FUN_145c4ab80 body=249 status=ok
// SIG undefined FUN_145c4ab80(void)

void FUN_145c4ab80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8d7de0;
  if ((param_1[0x27] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x27] + 0x50));
  }
  if ((param_1[0x21] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x21] + 0x50));
  }
  if ((param_1[0x1b] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x1b] + 0x50));
  }
  if ((param_1[0x15] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x15] + 0x50));
  }
  if ((param_1[0xf] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0xf] + 0x50));
  }
  if ((param_1[9] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[9] + 0x50));
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 145c4ac7a FUN_145c4ac7a body=70 status=ok
// SIG undefined FUN_145c4ac7a(void)

void FUN_145c4ac7a(void)

{
  if ((DAT_14cb1ae60 != 0) && (DAT_14cb1ae58 != (undefined8 *)0x0)) {
    (**(code **)*DAT_14cb1ae58)(DAT_14cb1ae58,0);
    FUN_1446efa72(&DAT_14cb1ae58,0,0,0x10);
    DAT_14cb1ae60 = 0;
  }
  return;
}



// FUNCTION 145c4acc0 FUN_145c4acc0 body=31 status=ok
// SIG undefined FUN_145c4acc0(void)

undefined8 FUN_145c4acc0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c4ace0 FUN_145c4ace0 body=169 status=ok
// SIG undefined FUN_145c4ace0(void)

ulonglong FUN_145c4ace0(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ushort uVar4;
  ulonglong uVar5;
  ushort uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  if ((ulonglong)*(uint *)(param_1 + 0x60) == 0) {
    return 0xffffffff;
  }
  iVar1 = (int)param_2[1];
  uVar3 = 0;
LAB_145c4ad0b:
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x58) + 8 + uVar3 * 0x90);
  if (iVar2 == iVar1) {
    if (1 < iVar1) {
      lVar7 = 0;
      do {
        uVar4 = *(ushort *)(*(longlong *)(uVar3 * 0x90 + *(longlong *)(param_1 + 0x58)) + lVar7);
        uVar5 = (ulonglong)uVar4;
        uVar6 = *(ushort *)(*param_2 + lVar7);
        if (uVar4 == uVar6) {
          if (uVar4 == 0) break;
        }
        else {
          if (0x7f < (uVar6 | uVar4)) goto LAB_145c4ad78;
          uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
          uVar8 = (ulonglong)uVar6;
          uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
          if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[uVar8]) goto LAB_145c4ad78;
        }
        lVar7 = lVar7 + 2;
      } while( true );
    }
    goto LAB_145c4ad7e;
  }
  if (iVar2 + iVar1 == 1) goto LAB_145c4ad7e;
  goto LAB_145c4ad25;
LAB_145c4ad78:
  if (uVar4 == uVar6) {
LAB_145c4ad7e:
    return uVar3 & 0xffffffff;
  }
LAB_145c4ad25:
  uVar3 = uVar3 + 1;
  if (uVar3 == *(uint *)(param_1 + 0x60)) {
    return 0xffffffff;
  }
  goto LAB_145c4ad0b;
}



// FUNCTION 145c4ad8a FUN_145c4ad8a body=38 status=ok
// SIG undefined FUN_145c4ad8a(void)

undefined8 FUN_145c4ad8a(undefined8 param_1,int param_2)

{
  FUN_145c4adb0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c4adb0 FUN_145c4adb0 body=116 status=ok
// SIG undefined FUN_145c4adb0(void)

void FUN_145c4adb0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b9d1040;
  FUN_141501d8f(param_1[0x5b],*(undefined4 *)(param_1 + 0x5c));
  if (param_1[0x5b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x58] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_14b47ae80;
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  FUN_1410ecf08(param_1);
  return;
}



// FUNCTION 145c4ae2a FUN_145c4ae2a body=96 status=ok
// SIG undefined FUN_145c4ae2a(void)

void FUN_145c4ae2a(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400841f8(puVar1);
  *puVar1 = &PTR_FUN_14ba522c0;
  puVar1[5] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined1 *)(puVar1 + 9) = 0;
  puVar1[6] = &PTR_FUN_14a5af930;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  FUN_144a5dc74(puVar1 + 0xc);
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  return;
}



// FUNCTION 145c4ae8a FUN_145c4ae8a body=40 status=ok
// SIG undefined FUN_145c4ae8a(void)

undefined8 FUN_145c4ae8a(undefined8 param_1,int param_2)

{
  FUN_145c4aeb2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c4aeb2 FUN_145c4aeb2 body=61 status=ok
// SIG undefined FUN_145c4aeb2(void)

void FUN_145c4aeb2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba77460;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c4af00 FUN_145c4af00 body=85 status=ok
// SIG undefined FUN_145c4af00(void)

void FUN_145c4af00(longlong param_1,int *param_2,undefined8 *param_3)

{
  int iVar1;
  
  if (*param_2 != -1) {
    iVar1 = *(int *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x18) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
      FUN_1446f48e2((longlong *)(param_1 + 0x10),iVar1);
    }
    *(int *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 4) = *param_2;
    *param_2 = -1;
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = 0;
    }
  }
  return;
}



// FUNCTION 145c4af56 FUN_145c4af56 body=204 status=ok
// SIG undefined FUN_145c4af56(void)

void FUN_145c4af56(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14b424ea0;
  FUN_141501dc0();
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_145c4b022(param_1 + 0x17);
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_145c4b05a(param_1 + 0xd);
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_14b424db0;
  if (DAT_14cb8a6f8 != (undefined8 *)0x0) {
    puVar1 = DAT_14cb8a6f8;
    if (DAT_14cb8a6f8 == param_1) {
      puVar2 = &DAT_14cb8a6f8;
    }
    else {
      do {
        puVar2 = puVar1;
        puVar1 = (undefined8 *)puVar2[5];
        if (puVar1 == (undefined8 *)0x0) {
          return;
        }
      } while (puVar1 != param_1);
      puVar2 = puVar2 + 5;
    }
    *puVar2 = param_1[5];
    param_1[5] = 0;
  }
  return;
}



// FUNCTION 145c4b022 FUN_145c4b022 body=55 status=ok
// SIG undefined FUN_145c4b022(void)

void FUN_145c4b022(longlong *param_1)

{
  FUN_145c4b1ec(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c4b05a FUN_145c4b05a body=55 status=ok
// SIG undefined FUN_145c4b05a(void)

void FUN_145c4b05a(longlong *param_1)

{
  FUN_145c4b0fe(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c4b092 FUN_145c4b092 body=107 status=ok
// SIG undefined FUN_145c4b092(void)

void FUN_145c4b092(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((int)param_2 < 1) {
    if (iVar3 < *(int *)(param_1 + 0x48)) {
LAB_145c4b0e1:
      FUN_145c4b0fe(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_141501e94(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_145c4b0e1;
  FUN_145c4b2ce(param_1);
  FUN_145c4b0fe(param_1,param_2);
  return;
}



// FUNCTION 145c4b0fe FUN_145c4b0fe body=129 status=ok
// SIG undefined FUN_145c4b0fe(void)

void FUN_145c4b0fe(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((int)uVar2 <= *(int *)(param_1 + 0x2c) && *(int *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145c4b180 FUN_145c4b180 body=107 status=ok
// SIG undefined FUN_145c4b180(void)

void FUN_145c4b180(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((int)param_2 < 1) {
    if (iVar3 < *(int *)(param_1 + 0x48)) {
LAB_145c4b1cf:
      FUN_145c4b1ec(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_1415020b2(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_145c4b1cf;
  FUN_145c4b41e(param_1);
  FUN_145c4b1ec(param_1,param_2);
  return;
}



// FUNCTION 145c4b1ec FUN_145c4b1ec body=129 status=ok
// SIG undefined FUN_145c4b1ec(void)

void FUN_145c4b1ec(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((int)uVar2 <= *(int *)(param_1 + 0x2c) && *(int *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145c4b26e FUN_145c4b26e body=96 status=ok
// SIG undefined FUN_145c4b26e(void)

void FUN_145c4b26e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
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



// FUNCTION 145c4b2ce FUN_145c4b2ce body=335 status=ok
// SIG undefined FUN_145c4b2ce(void)

void FUN_145c4b2ce(longlong *param_1)

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
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
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



// FUNCTION 145c4b41e FUN_145c4b41e body=335 status=ok
// SIG undefined FUN_145c4b41e(void)

void FUN_145c4b41e(longlong *param_1)

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
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
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



// FUNCTION 145c4b56e FUN_145c4b56e body=255 status=ok
// SIG undefined FUN_145c4b56e(void)

void FUN_145c4b56e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)FUN_14001cc68(0x80,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14ba40dc0;
  FUN_145c4b66e(plVar5 + 2,param_2,param_3,param_4);
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



// FUNCTION 145c4b66e FUN_145c4b66e body=298 status=ok
// SIG undefined FUN_145c4b66e(void)

undefined8 *
FUN_145c4b66e(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 *local_68;
  undefined4 local_60;
  longlong local_58 [2];
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = 0;
  uStack_40 = 0;
  FUN_140056680(local_58,L"ShiftSDK::Users::FindDisplayNamesForShiftIds");
  local_78 = &local_48;
  FUN_145c4b8a8(param_1,local_58,param_2,param_4);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ba40e38;
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  FUN_1446efa72(&local_68,0,2,0x10);
  local_60 = 2;
  *local_68 = &PTR_LAB_149e001f0;
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
  local_68[2] = lVar2;
  *local_68 = &PTR_FUN_14ba40e80;
  local_68[3] = param_1;
  FUN_145c4b799(param_2,param_3,&local_68,0);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c4b799 FUN_145c4b799 body=269 status=ok
// SIG undefined FUN_145c4b799(void)

void FUN_145c4b799(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined8 *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = *param_3;
  *param_3 = 0;
  uVar1 = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)(param_3 + 1) = 0;
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  local_48 = 3;
  *local_50 = &PTR_LAB_14b4da840;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_50[2] = lVar4;
  *local_50 = &PTR_FUN_14b4dae00;
  local_50[3] = uVar2;
  local_60 = 0;
  *(undefined4 *)(local_50 + 4) = uVar1;
  local_58 = 0;
  FUN_145c4bb4c(param_1,param_2,&local_50,param_4);
  FUN_1449db362(&local_60);
  FUN_1449db362(param_3);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c4b8a8 FUN_145c4b8a8 body=675 status=ok
// SIG undefined FUN_145c4b8a8(void)

undefined8 *
FUN_145c4b8a8(undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             longlong *param_5)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_108 [40];
  undefined8 *local_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *param_1 = &PTR_LAB_14ba3d1c8;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_3 + 0x38);
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  *param_1 = &PTR_FUN_14ba40e48;
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
  uVar10 = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_141502386(param_1 + 4,param_4);
  param_1[6] = 0;
  param_1[8] = 0;
  local_d8 = 0;
  iVar1 = (int)param_5[1];
  lVar2 = *param_5;
  lVar9 = 0;
  iVar7 = 0;
  uVar6 = 0;
  local_e0 = param_1;
  if (iVar1 != 0) {
    uStack_d0._0_4_ = iVar1;
    FUN_140b856de(&local_d8,iVar1,0);
    FUN_140b8566a(local_d8,lVar2,iVar1);
    lVar9 = local_d8;
    iVar7 = (int)uStack_d0;
    uVar6 = uStack_d0._4_4_;
  }
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = param_1[6];
  uStack_80 = param_1[7];
  local_b8 = (longlong *)param_1[8];
  uStack_70 = param_1[9];
  local_68 = param_1[10];
  uStack_60 = param_1[0xb];
  local_58 = param_1[0xc];
  uStack_50 = param_1[0xd];
  uVar5 = uStack_50;
  local_78 = local_b8;
  uVar4 = uStack_70;
  local_88 = local_c8;
  uVar3 = uStack_80;
  param_1[0xc] = lVar9;
  *(int *)(param_1 + 0xd) = iVar7;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar6;
  param_1[10] = &PTR_LAB_14ba40e60;
  param_1[0xb] = local_e0;
  param_1[8] = 0;
  param_1[9] = CONCAT44(uStack_ac,uStack_b0);
  param_1[6] = FUN_148fa8bd2;
  param_1[7] = CONCAT44(uStack_bc,uStack_c0);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  local_a8 = local_68;
  uStack_a0 = uStack_60;
  local_98 = local_58;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_80 = uVar3;
  uStack_70 = uVar4;
  uStack_50 = uVar5;
  if (local_c8 != 0) {
    plVar8 = local_b8;
    if (local_b8 == (longlong *)0x0) {
      plVar8 = &local_a8;
    }
    (**(code **)(*plVar8 + 0x10))();
    uVar10 = uStack_d0 & 0xffffffff;
  }
  FUN_1447a1747(local_d8,uVar10);
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*param_5,(int)param_5[1]);
  if (*param_5 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145c4bb4c FUN_145c4bb4c body=637 status=ok
// SIG undefined FUN_145c4bb4c(void)

void FUN_145c4bb4c(longlong param_1,longlong *param_2,undefined8 *param_3,undefined1 param_4)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_1d8 [47];
  undefined1 local_1a9;
  longlong local_1a8;
  undefined1 *local_1a0;
  undefined1 *local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined1 local_170;
  longlong local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined1 local_138;
  code *local_118;
  code *local_110;
  code *local_108;
  code *local_100;
  undefined1 local_f8 [160];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_168 = 0;
  uStack_160 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0xa00000000;
  local_1a9 = param_4;
  local_1a8 = param_1;
  if ((longlong)(int)param_2[1] != 0) {
    lVar9 = *param_2;
    lVar5 = (longlong)(int)param_2[1] << 4;
    do {
      FUN_1401e7e86(&local_190,lVar9);
      uVar2 = uStack_160;
      lVar7 = (longlong)(int)uStack_160;
      uVar3 = (int)uStack_160 + 1;
      uStack_160 = CONCAT44(uStack_160._4_4_,uVar3);
      if (uStack_160._4_4_ < uVar3) {
        FUN_145c4be2a(&local_168,uVar2 & 0xffffffff);
      }
      lVar8 = local_168;
      lVar7 = lVar7 * 0x20;
      lVar6 = local_168 + lVar7;
      FUN_145c4bdca(lVar6,&local_190);
      FUN_1401e7e48(&local_190);
      FUN_14482e566(lVar6);
      uVar2 = local_50;
      iVar1 = *(int *)(lVar8 + 0x18 + lVar7);
      lVar7 = *(longlong *)(lVar8 + 0x10 + lVar7);
      lVar8 = (longlong)(int)local_50;
      uVar3 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,uVar3);
      if (local_50._4_4_ < uVar3) {
        FUN_145c4beb0(local_f8,uVar2 & 0xffffffff);
      }
      puVar4 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar4 = local_f8;
      }
      *(longlong *)(puVar4 + lVar8 * 0x10) = lVar7;
      *(longlong *)(puVar4 + lVar8 * 0x10 + 8) = iVar1 + lVar7;
      lVar9 = lVar9 + 0x10;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
  }
  lVar9 = local_1a8;
  local_190 = 0;
  FUN_14485c47a(&local_190,local_1a8);
  local_188 = (undefined4)param_2[1];
  local_148 = *param_3;
  *param_3 = 0;
  local_140 = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)(param_3 + 1) = 0;
  local_170 = local_1a9;
  local_118 = FUN_143effb56;
  local_110 = FUN_143effc6a;
  local_108 = FUN_143effcac;
  local_100 = FUN_143effd32;
  local_158 = local_190;
  local_180 = 0;
  local_178 = 0;
  local_1a0 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    local_1a0 = local_f8;
  }
  local_138 = local_1a9;
  local_198 = local_1a0 + (longlong)(int)local_50 * 0x10;
  local_150 = local_188;
  bifrost::users::findByShiftIds(*(undefined8 *)(lVar9 + 0x2b8));
  FUN_1449db362(&local_180);
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_145c4be03(local_168,uStack_160 & 0xffffffff);
  if (local_168 != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_3);
  if ((local_48 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c4bdca FUN_145c4bdca body=57 status=ok
// SIG undefined FUN_145c4bdca(void)

void FUN_145c4bdca(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[2] = param_2[2];
  *(undefined4 *)(param_1 + 3) = 0;
  param_2[2] = 0;
  return;
}



// FUNCTION 145c4be03 FUN_145c4be03 body=38 status=ok
// SIG undefined FUN_145c4be03(void)

void FUN_145c4be03(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1401e7e48(param_1);
    param_1 = param_1 + 0x20;
  }
  return;
}



// FUNCTION 145c4be2a FUN_145c4be2a body=132 status=ok
// SIG undefined FUN_145c4be2a(void)

void FUN_145c4be2a(longlong param_1,int param_2)

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



// FUNCTION 145c4beb0 FUN_145c4beb0 body=121 status=ok
// SIG undefined FUN_145c4beb0(void)

void FUN_145c4beb0(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0xa8);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 0xb) {
      iVar5 = 10;
    }
    else {
      lVar4 = (longlong)(int)uVar1;
      if (10 < *(uint *)(param_1 + 0xac)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0xac) = iVar5;
    FUN_145c4bf2a(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 145c4bf2a FUN_145c4bf2a body=140 status=ok
// SIG undefined FUN_145c4bf2a(void)

void FUN_145c4bf2a(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xa0);
  if ((uint)param_3 < 0xb) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xa0,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0xa0),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xa0,param_2,param_3,0x10);
  return;
}



// FUNCTION 145c4bfb6 FUN_145c4bfb6 body=226 status=ok
// SIG undefined FUN_145c4bfb6(void)

void FUN_145c4bfb6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145c4c180();
  FUN_1446f470e(&local_58,L"BodyMaterialsOverride",1);
  uVar1 = FUN_145c4c09a();
  FUN_145c4c09a();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"BodyMaterialParamsOverride",1);
  uVar1 = FUN_145c4c09a();
  FUN_145c4c09a();
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



// FUNCTION 145c4c09a FUN_145c4c09a body=228 status=ok
// SIG undefined FUN_145c4c09a(void)

longlong FUN_145c4c09a(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbabf30 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_14652a6c2;
    local_28 = &LAB_14652a6bc;
    local_38 = &LAB_148c2875d;
    local_40 = FUN_1411a8724;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 2000;
    FUN_14081cfa3(L"/Script/OakGame",L"OakLightProjectile",&DAT_14cbabf30,&DAT_148c2875c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbabf30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c4c180 FUN_145c4c180 body=605 status=ok
// SIG undefined FUN_145c4c180(void)

void FUN_145c4c180(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  switchD_143c3d4dc::caseD_42();
  FUN_1446f470e(&local_58,L"SyncID",1);
  uVar1 = FUN_140f1e398();
  FUN_140f1e398();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"ClientState",1);
  uVar1 = FUN_140f1e398();
  FUN_140f1e398();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  local_48 = 0;
  uStack_50 = uStack_50 & 0xffffffffffffff00;
  local_58 = 0x100000000;
  FUN_1446f470e(&local_60,L"AttachmentData",1);
  uVar1 = FUN_140f1e398();
  FUN_140f1e398();
  uVar1 = FUN_140f1fabf(uVar1,local_60);
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"ExplodeState",1);
  uVar1 = FUN_140f1e398();
  FUN_140f1e398();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"ImpactState",1);
  uVar1 = FUN_140f1e398();
  FUN_140f1e398();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"ShutdownID",1);
  uVar1 = FUN_140f1e398();
  FUN_140f1e398();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"HomingTurnSpeedScale",1);
  uVar1 = FUN_140f1e398();
  FUN_140f1e398();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c4c3de FUN_145c4c3de body=575 status=ok
// SIG undefined FUN_145c4c3de(void)

void FUN_145c4c3de(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_68 [8];
  longlong local_60;
  int local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 != 0) {
    lVar2 = *(longlong *)(param_2 + 0x30);
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar2);
    }
    else if (lVar2 == 0) goto LAB_145c4c586;
    cVar5 = FUN_144a8afca(lVar2);
    if (cVar5 != '\0') {
      lVar2 = *(longlong *)(lVar2 + 0xc0);
      if ((lVar2 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar2);
      }
      else if (lVar2 == 0) goto LAB_145c4c586;
      local_90 = *(longlong **)(lVar2 + 0x18);
      FUN_1400021e4(&local_90,&local_60);
      goto LAB_145c4c477;
    }
  }
LAB_145c4c586:
  FUN_140056680(&local_60,&DAT_149dfb77a);
LAB_145c4c477:
  FUN_1415024b8(&local_60);
  if (1 < local_58) {
    FUN_1446f82e2(local_68,local_58 + -1,local_60,1);
    if (*(longlong *)(param_1 + 0x178) != 0) {
      FUN_145c4c61e(*(longlong *)(param_1 + 0x178),param_2,local_68);
    }
    plVar1 = (longlong *)(param_1 + 0x1a0);
    lVar2 = param_1 + 0x1b0;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    iVar7 = 0;
    local_48 = lVar2;
    if (*(int *)(param_1 + 0x1c8) != 0) {
      FUN_1449c0562(&local_50);
      iVar7 = *(int *)(param_1 + 0x1c8);
    }
    local_78 = local_40;
    uVar4 = local_78;
    local_70 = local_38;
    local_6c = local_34;
    local_88 = local_50;
    local_80 = local_48;
    local_78._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar6 = local_78._4_4_;
    local_90 = plVar1;
    if ((local_78._4_4_ != iVar7) || (local_78 = uVar4, local_48 != lVar2)) {
      do {
        local_78 = uVar4;
        plVar3 = *(longlong **)(*local_90 + 8 + (longlong)iVar6 * 0x18);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x348))(plVar3,param_2);
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar6 = local_78._4_4_;
        uVar4 = local_78;
      } while (((local_78._4_4_ != iVar7) || (local_80 != lVar2)) || (local_90 != plVar1));
    }
  }
  if (local_60 != 0) {
    FUN_1400020a8(local_60);
  }
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c4c61e FUN_145c4c61e body=322 status=ok
// SIG undefined FUN_145c4c61e(void)

void FUN_145c4c61e(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [32];
  longlong local_b8;
  longlong *local_a8;
  longlong local_98 [4];
  longlong local_78;
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  cVar1 = (**(code **)(*param_1 + 0x38))();
  if (cVar1 != '\0') {
    uVar2 = FUN_14150261a();
    lVar3 = FUN_14090279a(uVar2,param_3);
    if ((lVar3 != 0) && (plVar4 = (longlong *)FUN_145c4c762(lVar3), *plVar4 != 0)) {
      uVar2 = FUN_145c4c762(lVar3);
      lVar3 = FUN_144a792bc(uVar2);
      FUN_1409388d8();
      cVar1 = FUN_1448093f4(lVar3);
      if ((lVar3 != 0) && ((cVar1 != '\0' && ((longlong)*(int *)(lVar3 + 0x98) != 0)))) {
        lVar5 = *(longlong *)(lVar3 + 0x90);
        lVar3 = (longlong)*(int *)(lVar3 + 0x98) * 0x70;
        do {
          memset(local_d8,0,0xa0);
          FUN_140bc495f(lVar5,param_1,local_d8,0);
          if (local_78 != 0) {
            plVar4 = local_68;
            if (local_68 == (longlong *)0x0) {
              plVar4 = local_58;
            }
            (**(code **)(*plVar4 + 0x10))();
          }
          if (local_b8 != 0) {
            plVar4 = local_a8;
            if (local_a8 == (longlong *)0x0) {
              plVar4 = local_98;
            }
            (**(code **)(*plVar4 + 0x10))();
          }
          lVar5 = lVar5 + 0x70;
          lVar3 = lVar3 + -0x70;
        } while (lVar3 != 0);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c4c762 FUN_145c4c762 body=5 status=ok
// SIG undefined FUN_145c4c762(void)

longlong FUN_145c4c762(longlong param_1)

{
  return param_1 + 0x58;
}



// FUNCTION 145c4c768 FUN_145c4c768 body=146 status=ok
// SIG undefined FUN_145c4c768(void)

code * FUN_145c4c768(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145c4c7fa();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VolumeParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FLumenTranslucencyLightingVolumeParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3700000003f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca06450;
  return FUN_145ddd682;
}



// FUNCTION 145c4c7fa FUN_145c4c7fa body=258 status=ok
// SIG undefined FUN_145c4c7fa(void)

void FUN_145c4c7fa(void)

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
              0x110) < DAT_14ca064d0) {
    FUN_144b3d300(&DAT_14ca064d0);
    if (DAT_14ca064d0 == -1) {
      FUN_145c4c8fe(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FLumenTranslucencyLightingVolumeParameters";
      local_38 = 0;
      local_50 = 0xb0;
      local_58 = 0x39;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca06450,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd3447);
      _Init_thread_footer(&DAT_14ca064d0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c4c8fe FUN_145c4c8fe body=226 status=ok
// SIG undefined FUN_145c4c8fe(void)

longlong * FUN_145c4c8fe(longlong *param_1)

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
  pcVar13 = FUN_1462e983e;
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



// FUNCTION 145c4c9e6 FUN_145c4c9e6 body=138 status=ok
// SIG undefined FUN_145c4c9e6(void)

code * FUN_145c4c9e6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"UnjitteredClipToTranslatedWorld";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000040;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14722b65c;
}



// FUNCTION 145c4ca70 FUN_145c4ca70 body=138 status=ok
// SIG undefined FUN_145c4ca70(void)

code * FUN_145c4ca70(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TranslucencyGIGridZParams";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000003b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462e994e;
}



// FUNCTION 145c4cafa FUN_145c4cafa body=105 status=ok
// SIG undefined FUN_145c4cafa(void)

void FUN_145c4cafa(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  DAT_14c9a6588 = 0;
  lVar1 = *param_1;
  iVar2 = (int)((ulonglong)(param_1[1] - lVar1) >> 4) * -0x33333333;
  DAT_14c9a6590 = iVar2;
  if (iVar2 != 0) {
    FUN_145c4cb64(&DAT_14c9a6588,iVar2,0);
    FUN_141502622(DAT_14c9a6588,lVar1,iVar2);
    return;
  }
  DAT_14c9a6594 = 0;
  return;
}



// FUNCTION 145c4cb64 FUN_145c4cb64 body=115 status=ok
// SIG undefined FUN_145c4cb64(void)

void FUN_145c4cb64(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x50,8);
    iVar2 = (int)(uVar1 / 0x50);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x50,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 145c4cbd8 FUN_145c4cbd8 body=53 status=ok
// SIG undefined FUN_145c4cbd8(void)

void FUN_145c4cbd8(longlong *param_1)

{
  FUN_145c4cc0e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c4cc0e FUN_145c4cc0e body=351 status=ok
// SIG undefined FUN_145c4cc0e(void)

void FUN_145c4cc0e(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
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
      puVar2 = *(undefined8 **)(*local_68 + 0x18 + (longlong)iStack_4c * 0x38);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144748838(param_1,0);
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



// FUNCTION 145c4cd6e FUN_145c4cd6e body=40 status=ok
// SIG undefined FUN_145c4cd6e(void)

undefined8 FUN_145c4cd6e(undefined8 param_1,int param_2)

{
  FUN_145c4cd96();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c4cd96 FUN_145c4cd96 body=168 status=ok
// SIG undefined FUN_145c4cd96(void)

void FUN_145c4cd96(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bab6500;
  *(undefined4 *)(param_1 + 0x31) = 0;
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  FUN_140603fbe(param_1 + 0x28);
  FUN_145c4ce3e(param_1 + 0x1b);
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_140ba05b6(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_145c6bddc(param_1 + 7);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c4ce3e FUN_145c4ce3e body=51 status=ok
// SIG undefined FUN_145c4ce3e(void)

void FUN_145c4ce3e(longlong param_1)

{
  FUN_145c4ceaa(param_1,0);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_145c4ce72(param_1);
  return;
}



// FUNCTION 145c4ce72 FUN_145c4ce72 body=55 status=ok
// SIG undefined FUN_145c4ce72(void)

void FUN_145c4ce72(longlong *param_1)

{
  FUN_145c4d066(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c4ceaa FUN_145c4ceaa body=334 status=ok
// SIG undefined FUN_145c4ceaa(void)

void FUN_145c4ceaa(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  iVar3 = 0;
  local_50 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
    iVar3 = (int)param_1[5];
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = param_1;
  if ((iStack_44 != iVar3) || (local_50 != plVar1)) {
    do {
      lVar2 = *(longlong *)(*local_80 + (longlong)iStack_64 * 0x10);
      if (lVar2 != 0) {
        FUN_1490c45c6(lVar2 + 0x30);
        if (*(longlong *)(lVar2 + 0x10) != 0) {
          FUN_1400020a8();
        }
        thunk_FUN_1400020a8(lVar2,0x1a8);
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (((iStack_64 != iVar3) || (local_70 != plVar1)) || (local_80 != param_1));
  }
  *(int *)(param_1 + 0xc) = param_2;
  iVar3 = 0;
  if (0 < param_2) {
    iVar3 = param_2;
  }
  FUN_145c4cffa(param_1,iVar3);
  param_1[10] = 0;
  param_1[0xb] = 0;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c4cffa FUN_145c4cffa body=107 status=ok
// SIG undefined FUN_145c4cffa(void)

void FUN_145c4cffa(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((int)param_2 < 1) {
    if (iVar3 < *(int *)(param_1 + 0x48)) {
LAB_145c4d049:
      FUN_145c4d066(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_1490c468e(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_145c4d049;
  FUN_145c4d0e2(param_1);
  FUN_145c4d066(param_1,param_2);
  return;
}



// FUNCTION 145c4d066 FUN_145c4d066 body=123 status=ok
// SIG undefined FUN_145c4d066(void)

void FUN_145c4d066(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14474875a(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145c4d0e2 FUN_145c4d0e2 body=335 status=ok
// SIG undefined FUN_145c4d0e2(void)

void FUN_145c4d0e2(longlong *param_1)

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
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xc + (longlong)iVar4 * 0x10) * 4) =
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



// FUNCTION 145c4d232 FUN_145c4d232 body=60 status=ok
// SIG undefined FUN_145c4d232(void)

void FUN_145c4d232(longlong param_1)

{
  undefined8 *puVar1;
  
  FUN_145d28952(*(undefined8 *)(param_1 + 8));
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x000145c4d264. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145c4d26e FUN_145c4d26e body=38 status=ok
// SIG undefined FUN_145c4d26e(void)

undefined8 FUN_145c4d26e(undefined8 param_1,int param_2)

{
  FUN_145c4d294();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c4d294 FUN_145c4d294 body=166 status=ok
// SIG undefined FUN_145c4d294(void)

void FUN_145c4d294(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a1e8f50;
  FUN_14018802a(param_1[2]);
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0x60))(DAT_14c8407a8,param_1[0x12]);
  if (*(char *)(param_1 + 8) == '\x01') {
    (**(code **)(*(longlong *)param_1[9] + 0x10))();
    plVar1 = (longlong *)param_1[9];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))(plVar1,1);
    }
  }
  FUN_145c4d33a(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
                    /* WARNING: Could not recover jumptable at 0x000145c4d322. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return;
}



// FUNCTION 145c4d33a FUN_145c4d33a body=40 status=ok
// SIG undefined FUN_145c4d33a(void)

void FUN_145c4d33a(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_147129b7a(param_1);
    param_1 = param_1 + 0x60;
  }
  return;
}



// FUNCTION 145c4d362 FUN_145c4d362 body=73 status=ok
// SIG undefined FUN_145c4d362(void)

undefined8 * FUN_145c4d362(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4dabd0;
  param_1[0xd] = &PTR_LAB_14a4daeb0;
  FUN_145c4d3ac(param_1 + 0xe);
  FUN_1458ea31e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c4d3ac FUN_145c4d3ac body=53 status=ok
// SIG undefined FUN_145c4d3ac(void)

void FUN_145c4d3ac(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  FUN_145c4d3e2(param_1);
  return;
}



// FUNCTION 145c4d3e2 FUN_145c4d3e2 body=55 status=ok
// SIG undefined FUN_145c4d3e2(void)

void FUN_145c4d3e2(longlong *param_1)

{
  FUN_145c4d41a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c4d41a FUN_145c4d41a body=123 status=ok
// SIG undefined FUN_145c4d41a(void)

void FUN_145c4d41a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140b584e0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145c4d4a0 FUN_145c4d4a0 body=153 status=ok
// SIG undefined FUN_145c4d4a0(void)

undefined8 * FUN_145c4d4a0(undefined8 *param_1)

{
  uint uVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140c61030();
  *param_1 = &PTR_FUN_14acffa10;
  *(undefined4 *)(param_1 + 0xe0) = 2;
  uVar1 = FUN_1459e097e();
  FUN_145c4d53a(param_1 + 0xe1,uVar1 | 0x1e);
  local_20 = FUN_140926940();
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(local_20);
  }
  FUN_145c4d53e(param_1 + 0xe1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c4d53a FUN_145c4d53a body=3 status=ok
// SIG undefined FUN_145c4d53a(void)

void FUN_145c4d53a(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}



// FUNCTION 145c4d53e FUN_145c4d53e body=136 status=ok
// SIG undefined FUN_145c4d53e(void)

void FUN_145c4d53e(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  ushort uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  lVar5 = *param_2;
  if (lVar5 != 0) {
    lVar4 = *(longlong *)(lVar5 + 0x110);
    if (lVar4 == 0) {
      FUN_140aa6c08(lVar5);
      lVar4 = *(longlong *)(lVar5 + 0x110);
      if (lVar4 == 0) {
        return;
      }
    }
    uVar2 = *(ushort *)(lVar4 + 0x36);
    lVar5 = param_1 + 8;
    iVar6 = ((uint)uVar2 - *(int *)(param_1 + 0x20)) + 1;
    if (0 < iVar6) {
      uVar3 = FUN_144a54ea4(lVar5,iVar6);
      FUN_1447c6044(lVar5,uVar3,iVar6,0);
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x18);
    }
    puVar1 = (uint *)(lVar5 + (ulonglong)(uVar2 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  }
  return;
}



// FUNCTION 145c4d5c6 FUN_145c4d5c6 body=40 status=ok
// SIG undefined FUN_145c4d5c6(void)

undefined8 FUN_145c4d5c6(undefined8 param_1,int param_2)

{
  FUN_145c4d5ee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c4d5ee FUN_145c4d5ee body=121 status=ok
// SIG undefined FUN_145c4d5ee(void)

void FUN_145c4d5ee(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b59f0f0;
  param_1[5] = &PTR_FUN_14b59f5a0;
  param_1[0x2d] = &PTR_FUN_14b59f5e0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  FUN_145c4d668(param_1 + 0x62);
  if (param_1[0x60] != 0) {
    FUN_1400020a8();
  }
  FUN_14117c118(param_1);
  return;
}



// FUNCTION 145c4d668 FUN_145c4d668 body=53 status=ok
// SIG undefined FUN_145c4d668(void)

void FUN_145c4d668(longlong *param_1)

{
  FUN_145c4d69e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c4d69e FUN_145c4d69e body=90 status=ok
// SIG undefined FUN_145c4d69e(void)

void FUN_145c4d69e(longlong param_1)

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



// FUNCTION 145c4d700 FUN_145c4d700 body=444 status=ok
// SIG undefined FUN_145c4d700(void)

undefined8 * FUN_145c4d700(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined2 *puVar3;
  undefined4 uVar4;
  
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14ba4fb90;
  param_1[5] = 0x40a0000000000003;
  *(undefined1 *)(param_1 + 6) = 0;
  FUN_140056680(param_1 + 7,&DAT_149e01f60);
  puVar1 = param_1 + 0x12;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 2;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 2;
  FUN_1449da20c(DAT_14c872ce0,&DAT_14ba4e8a0,L"ForceRegionId",puVar1,&DAT_14c872ce8);
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  uVar4 = 0;
  uVar2 = FUN_14063337c(&DAT_14c846b20,L"McpRegion=",puVar1,1,0);
  *(undefined1 *)(param_1 + 0x14) = uVar2;
  if (1 < *(int *)(param_1 + 0x13)) {
    FUN_1427469b0(puVar1);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf5168) {
    FUN_144b3d300(&DAT_14cbf5168);
    if (DAT_14cbf5168 == -1) {
      if (*(int *)(param_1 + 0x13) == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      else {
        puVar3 = (undefined2 *)*puVar1;
      }
      FUN_145c4d8bc(&DAT_14cbf5150,L"McpRegion",puVar3,0,CONCAT44(uVar4,1),100);
      atexit((_func_5014 *)&LAB_1443ba724);
      _Init_thread_footer(&DAT_14cbf5168);
    }
  }
  return param_1;
}



// FUNCTION 145c4d8bc FUN_145c4d8bc body=96 status=ok
// SIG undefined FUN_145c4d8bc(void)

undefined8 *
FUN_145c4d8bc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = FUN_1407bb416();
  uVar1 = FUN_145c4d91c(uVar1,param_2,param_3,param_4,param_5,param_6);
  param_1[2] = uVar1;
  return param_1;
}



// FUNCTION 145c4d91c FUN_145c4d91c body=387 status=ok
// SIG undefined FUN_145c4d91c(void)

/* WARNING: Removing unreachable block (ram,0x000145c4da96) */

undefined8 *
FUN_145c4d91c(LPCRITICAL_SECTION param_1,undefined8 param_2,undefined8 param_3,byte param_4,
             undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  ushort local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar4 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  FUN_14020fad6(puVar4,param_2);
  *(undefined4 *)(puVar4 + 4) = param_5;
  *(undefined4 *)((longlong)puVar4 + 0x24) = param_6;
  FUN_140056680(&local_60);
  local_50 = (ushort)param_4;
  lVar5 = (longlong)*(int *)(puVar4 + 3);
  uVar3 = *(int *)(puVar4 + 3) + 1;
  *(uint *)(puVar4 + 3) = uVar3;
  if (*(uint *)((longlong)puVar4 + 0x1c) < uVar3) {
    FUN_145c4daa0(puVar4 + 2);
  }
  lVar2 = puVar4[2];
  *(undefined8 *)(lVar2 + lVar5 * 0x18) = 0;
  *(undefined8 *)(lVar2 + lVar5 * 0x18) = local_60;
  *(undefined4 *)(lVar2 + 8 + lVar5 * 0x18) = (undefined4)local_58;
  *(undefined4 *)(lVar2 + 0xc + lVar5 * 0x18) = local_58._4_4_;
  *(ushort *)(lVar2 + 0x10 + lVar5 * 0x18) = local_50;
  local_58 = 0;
  local_60 = 0;
  EnterCriticalSection(param_1);
  iVar1 = param_1[3].RecursionCount;
  param_1[3].RecursionCount = iVar1 + 1;
  *(int *)(puVar4 + 5) = iVar1;
  iVar1 = param_1[1].LockCount;
  param_1[1].LockCount = iVar1 + 1U;
  if ((uint)param_1[1].RecursionCount < iVar1 + 1U) {
    FUN_145c4db34(param_1 + 1,iVar1);
  }
  *(undefined8 **)(&(param_1[1].DebugInfo)->Type + (longlong)iVar1 * 4) = puVar4;
  FUN_14089e7f6(param_1,1,puVar4);
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar4;
}



// FUNCTION 145c4daa0 FUN_145c4daa0 body=147 status=ok
// SIG undefined FUN_145c4daa0(void)

void FUN_145c4daa0(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145c4db34 FUN_145c4db34 body=132 status=ok
// SIG undefined FUN_145c4db34(void)

void FUN_145c4db34(longlong param_1,int param_2)

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



// FUNCTION 145c4dbb8 FUN_145c4dbb8 body=292 status=ok
// SIG undefined FUN_145c4dbb8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145c4dbb8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc29818) {
    FUN_144b3d300(&DAT_14cc29818);
    if (DAT_14cc29818 == -1) {
      FUN_145c4dcdc();
      FUN_145c4dde0();
      FUN_140db5666(&DAT_14cc29770,0,&DAT_14cc29708,L"FFXRHIAccumulateCS",
                    L"/Plugin/FFX/Private/ffx_fsr3upscaler_accumulate_pass.usf",&DAT_14a1f6a48,5,
                    0x100,FUN_14981c6ee,FUN_14981c6c6,&LAB_14190e0fa,&LAB_144655c6c,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cc2a738);
      _DAT_14cc29770 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_144655c6f);
      _Init_thread_footer(&DAT_14cc29818);
    }
  }
  return &DAT_14cc29770;
}



// FUNCTION 145c4dcdc FUN_145c4dcdc body=258 status=ok
// SIG undefined FUN_145c4dcdc(void)

void FUN_145c4dcdc(void)

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
              0x110) < DAT_14cc2a7b8) {
    FUN_144b3d300(&DAT_14cc2a7b8);
    if (DAT_14cc2a7b8 == -1) {
      FUN_1415026dc(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1d0;
      local_58 = 0x74;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cc2a738,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14465614d);
      _Init_thread_footer(&DAT_14cc2a7b8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c4dde0 FUN_145c4dde0 body=205 status=ok
// SIG undefined FUN_145c4dde0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c4dde0(void)

{
  if ((DAT_14cc2976f & 2) == 0) {
    DAT_14cc2976f = DAT_14cc2976f | 2;
    _DAT_14cc29710 = L"FFXRHIAccumulateCS";
    _DAT_14cc29728 = FUN_146826540;
    _DAT_14cc29730 = FUN_146825d77;
    _DAT_14cc29738 = FUN_146825fd6;
    _DAT_14cc29740 = FUN_1407e02ea;
    _DAT_14cc29748 = FUN_146826273;
    _DAT_14cc29720 = FUN_14981c698;
    _DAT_14cc29760 = 0xffffffff000000e0;
    _DAT_14cc29768 = 8;
    DAT_14cc2976c = 0;
    _DAT_14cc29750 = &LAB_14981c6c2;
    FUN_145c4deae();
    FUN_1407e00cc(&DAT_14cc29708);
    return;
  }
  return;
}



// FUNCTION 145c4deae FUN_145c4deae body=123 status=ok
// SIG undefined FUN_145c4deae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c4deae(void)

{
  _DAT_14cc2aa18 = L"BASE";
  DAT_14cc2aa42 = 4;
  _DAT_14cc2aa20 = FUN_140b35ae4();
  _DAT_14cc2aa28 = DAT_14cc29718;
  _DAT_14cc2aa30 = &LAB_14682652b;
  DAT_14cc29718 = &DAT_14cc2aa18;
  DAT_14cc2976d = DAT_14cc2976d + '\x01';
  _DAT_14cc2aa38 = 0x100000000;
  if (*(char *)(_DAT_14cc2aa20 + 100) != '\0') {
    DAT_14cc2976e = DAT_14cc2976e + '\x01';
  }
  return;
}



// FUNCTION 145c4df2a FUN_145c4df2a body=138 status=ok
// SIG undefined FUN_145c4df2a(void)

code * FUN_145c4df2a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"rw_spd_mip0";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x190000000a3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14981f86a;
}



// FUNCTION 145c4dfb4 FUN_145c4dfb4 body=138 status=ok
// SIG undefined FUN_145c4dfb4(void)

code * FUN_145c4dfb4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"rw_dilated_depth";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x11800000094;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14981fff6;
}



// FUNCTION 145c4e03e FUN_145c4e03e body=138 status=ok
// SIG undefined FUN_145c4e03e(void)

code * FUN_145c4e03e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"rw_spd_mip5";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1b8000000a8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14981f6cc;
}



// FUNCTION 145c4e0c8 FUN_145c4e0c8 body=234 status=ok
// SIG undefined FUN_145c4e0c8(void)

ulonglong FUN_145c4e0c8(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = (longlong *)FUN_140aa569c(param_2);
  lVar4 = FUN_145c4e1b4(param_1);
  uVar7 = 0;
  if ((plVar3 != (longlong *)0x0) && (lVar4 != 0)) {
    lVar4 = (**(code **)(*plVar3 + 0x7e0))(plVar3,lVar4 + 0x1c);
    if (lVar4 == 0) {
      uVar7 = 0;
    }
    else {
      local_38 = 0;
      uStack_30 = 0;
      uVar5 = FUN_145c4e1b4(param_1);
      FUN_145c4e23a(uVar5,&local_38);
      lVar1 = local_38;
      lVar6 = (longlong)(int)uStack_30;
      if (lVar6 == 0) {
        uVar7 = 0;
      }
      else {
        lVar8 = 0;
        do {
          if ((*(longlong *)(lVar1 + lVar8) != 0) && (cVar2 = FUN_14095026a(lVar4), cVar2 == '\0'))
          {
            uVar7 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
            goto LAB_145c4e14a;
          }
          lVar8 = lVar8 + 8;
        } while (lVar6 * 8 != lVar8);
        uVar7 = 0;
      }
LAB_145c4e14a:
      if (local_38 != 0) {
        FUN_1400020a8(local_38);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 145c4e1b4 FUN_145c4e1b4 body=134 status=ok
// SIG undefined FUN_145c4e1b4(void)

void FUN_145c4e1b4(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x28);
  if (lVar4 == 0) {
    uVar3 = FUN_14573a762();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x28) = lVar4;
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar3 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x20));
    }
    *(undefined8 *)(param_1 + 0x30) = uVar3;
    return;
  }
  return;
}



// FUNCTION 145c4e23a FUN_145c4e23a body=493 status=ok
// SIG undefined FUN_145c4e23a(void)

void FUN_145c4e23a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  lVar6 = DAT_14cb8d3c0;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((param_1 != 0) && (DAT_14cb8d3c0 != 0)) {
    plVar7 = (longlong *)(param_1 + 8);
    if (*(char *)(param_1 + 0x10) != '\0') {
      if (*(char *)(param_1 + 0x10) != '\x02') goto LAB_145c4e3bb;
      plVar7 = (longlong *)(*plVar7 + 0x30);
    }
    if (((*plVar7 != 0) && (lVar1 = *(longlong *)(*plVar7 + 0x68), lVar1 != 0)) &&
       (lVar2 = *(longlong *)(lVar1 + 0x30), lVar2 != 0)) {
      uVar5 = FUN_1406ef318();
      cVar3 = FUN_1448093f4(lVar2,uVar5);
      if (cVar3 != '\0') {
        iVar8 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar8 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar8 + 1U) {
          FUN_1415027c0(param_2,iVar8);
        }
        *(longlong *)(*param_2 + (longlong)iVar8 * 8) = lVar2;
      }
      plVar7 = (longlong *)(lVar1 + 0x70);
      lVar2 = lVar1 + 0x80;
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      uStack_50 = 0;
      uStack_60 = lVar2;
      if (*(int *)(lVar1 + 0x98) == 0) {
        iVar8 = 0;
      }
      else {
        FUN_1449c0562(&local_68);
        iVar8 = *(int *)(lVar1 + 0x98);
      }
      uStack_70 = CONCAT44(uStack_4c,uStack_50);
      local_78 = local_58;
      uVar5 = local_78;
      local_88 = (undefined4)local_68;
      uStack_84 = local_68._4_4_;
      uStack_80 = (undefined4)uStack_60;
      uStack_7c = uStack_60._4_4_;
      local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
      iVar4 = local_78._4_4_;
      local_90 = plVar7;
      if ((local_78._4_4_ != iVar8) || (local_78 = uVar5, uStack_60 != lVar2)) {
        do {
          local_78 = uVar5;
          local_98 = lVar6;
          lVar6 = FUN_1407d7f24(lVar6,param_1,
                                *(undefined8 *)(*local_90 + 0x10 + (longlong)iVar4 * 0x20));
          if (lVar6 != 0) {
            iVar4 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar4 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
              FUN_1415027c0(param_2,iVar4);
            }
            *(longlong *)(*param_2 + (longlong)iVar4 * 8) = lVar6;
          }
          local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
          FUN_1449c0562(&local_88);
          lVar6 = local_98;
          iVar4 = local_78._4_4_;
          uVar5 = local_78;
        } while (((local_78._4_4_ != iVar8) || (CONCAT44(uStack_7c,uStack_80) != lVar2)) ||
                (local_90 != plVar7));
      }
    }
  }
LAB_145c4e3bb:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c4e428 FUN_145c4e428 body=85 status=ok
// SIG undefined FUN_145c4e428(void)

undefined1 * FUN_145c4e428(longlong param_1,undefined1 *param_2)

{
  if ((*(byte *)(param_1 + 0x39) & 8) == 0) {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  else {
    FUN_145c4e47e(param_1,param_2);
  }
  return param_2;
}



// FUNCTION 145c4e47e FUN_145c4e47e body=414 status=ok
// SIG undefined FUN_145c4e47e(void)

undefined1 * FUN_145c4e47e(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  byte bVar5;
  undefined1 uVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_4 + 0x20);
  local_40 = *(undefined8 *)(param_4 + 0x28);
  local_38 = *(longlong **)(param_4 + 0x30);
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  cVar4 = FUN_140230656(&local_48);
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
  if (cVar4 == '\0') {
    FUN_145c4e620(param_1,param_4,1);
  }
  else {
    FUN_1489ce796(&DAT_14cb90e48,param_4,1);
  }
  local_48 = *(undefined8 *)(param_4 + 0x20);
  local_40 = *(undefined8 *)(param_4 + 0x28);
  local_38 = *(longlong **)(param_4 + 0x30);
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  bVar5 = *(byte *)(param_1 + 0x2c0);
  if ((bVar5 & 2) == 0) {
LAB_145c4e543:
    if ((bVar5 & 1) != 0) {
      cVar4 = FUN_140230656(&local_48);
      if (cVar4 == '\0') goto LAB_145c4e555;
    }
    uVar6 = 1;
  }
  else {
    cVar4 = FUN_140230656(&local_48);
    if (cVar4 == '\0') {
      bVar5 = *(byte *)(param_1 + 0x2c0);
      goto LAB_145c4e543;
    }
LAB_145c4e555:
    uVar6 = 0;
  }
  *param_2 = uVar6;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  plVar3 = local_38;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c4e620 FUN_145c4e620 body=115 status=ok
// SIG undefined FUN_145c4e620(void)

void FUN_145c4e620(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145c4e694(local_28);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x238) + 8);
  if ((plVar1 != (longlong *)0x0) && (*(char *)(param_1 + 0x26c) == '\x01')) {
    local_38 = 0;
    (**(code **)(*plVar1 + 0xf0))(plVar1,local_28,0,0);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c4e694 FUN_145c4e694 body=3008 status=ok
// SIG undefined FUN_145c4e694(void)

uint * FUN_145c4e694(uint *param_1,longlong param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  
  *(undefined8 *)((longlong)param_1 + 7) = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x13) = 0;
  param_1[1] = param_3;
  if (param_3 - 1 < 2) {
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 10);
    lVar4 = *(longlong *)(param_2 + 0x20);
    plVar5 = *(longlong **)(param_2 + 0x30);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    lVar9 = DAT_14c9654a8;
    lVar8 = DAT_14c965478;
    lVar7 = DAT_14c965448;
    lVar6 = DAT_14c965418;
    uVar11 = 1;
    if (((((((lVar4 == DAT_14c965418) || (lVar4 == DAT_14c965448)) || (lVar4 == DAT_14c965478)) ||
          ((lVar4 == DAT_14c9654a8 || (uVar11 = 2, lVar4 == DAT_14c965430)))) ||
         (((lVar4 == DAT_14c965460 || ((lVar4 == DAT_14c965490 || (lVar4 == DAT_14c9654c0)))) ||
          (uVar11 = 3, lVar4 == DAT_14c9653e8)))) ||
        ((((lVar4 == DAT_14c965178 || (lVar4 == DAT_14c965190)) || (lVar4 == DAT_14c9651a8)) ||
         (((lVar4 == DAT_14c9651c0 || (lVar4 == DAT_14c9651d8)) ||
          ((lVar4 == DAT_14c9651f0 || ((lVar4 == DAT_14c965208 || (lVar4 == DAT_14c965220))))))))))
       || ((lVar4 == DAT_14c965238 || (lVar4 == DAT_14c965250)))) {
      param_1[4] = uVar11;
    }
    if (lVar4 == DAT_14c966e98) {
      *param_1 = 0;
    }
    if (lVar4 == DAT_14c966fa0) {
      *param_1 = 0;
    }
    if (lVar4 == DAT_14c966fb8) {
      *param_1 = 0;
    }
    if (lVar4 == DAT_14c964d40) {
      *param_1 = 0;
    }
    if (lVar4 == DAT_14c964d58) {
      *param_1 = 0;
    }
    if (lVar4 == DAT_14c966f40) {
      *param_1 = 8;
    }
    if (lVar4 == DAT_14c964d70) {
      *param_1 = 9;
    }
    if (lVar4 == DAT_14c964d88) {
      *param_1 = 0xd;
    }
    if (lVar4 == DAT_14c964da0) {
      *param_1 = 0x13;
    }
    if (lVar4 == DAT_14c964db8) {
      *param_1 = 0x14;
    }
    if (lVar4 == DAT_14c964dd0) {
      *param_1 = 0x1b;
    }
    if (lVar4 == DAT_14c964de8) {
      *param_1 = 0x20;
    }
    if (lVar4 == DAT_14c964e00) {
      *param_1 = 0x21;
    }
    if (lVar4 == DAT_14c964e18) {
      *param_1 = 0x22;
    }
    if (lVar4 == DAT_14c964e30) {
      *param_1 = 0x23;
    }
    if (lVar4 == DAT_14c964e48) {
      *param_1 = 0x24;
    }
    if (lVar4 == DAT_14c964e60) {
      *param_1 = 0x25;
    }
    if (lVar4 == DAT_14c964e78) {
      *param_1 = 0x26;
    }
    if (lVar4 == DAT_14c964e90) {
      *param_1 = 0x27;
    }
    if (lVar4 == DAT_14c964ea8) {
      *param_1 = 0x28;
    }
    if (lVar4 == DAT_14c964ec0) {
      *param_1 = 0x2d;
    }
    if (lVar4 == DAT_14c966f58) {
      *param_1 = 0x2e;
    }
    if (lVar4 == DAT_14c964ed8) {
      *param_1 = 0x30;
    }
    if (lVar4 == DAT_14c964ef0) {
      *param_1 = 0x31;
    }
    if (lVar4 == DAT_14c964f08) {
      *param_1 = 0x32;
    }
    if (lVar4 == DAT_14c964f20) {
      *param_1 = 0x33;
    }
    if (lVar4 == DAT_14c964f38) {
      *param_1 = 0x34;
    }
    if (lVar4 == DAT_14c964f50) {
      *param_1 = 0x35;
    }
    if (lVar4 == DAT_14c964f68) {
      *param_1 = 0x36;
    }
    if (lVar4 == DAT_14c964f80) {
      *param_1 = 0x37;
    }
    if (lVar4 == DAT_14c964f98) {
      *param_1 = 0x38;
    }
    if (lVar4 == DAT_14c964fb0) {
      *param_1 = 0x39;
    }
    if (lVar4 == DAT_14c966f88) {
      *param_1 = 0x41;
    }
    if (lVar4 == DAT_14c964fc8) {
      *param_1 = 0x42;
    }
    if (lVar4 == DAT_14c966ec8) {
      *param_1 = 0x43;
    }
    if (lVar4 == DAT_14c966ef8) {
      *param_1 = 0x44;
    }
    if (lVar4 == DAT_14c964fe0) {
      *param_1 = 0x45;
    }
    if (lVar4 == DAT_14c964ff8) {
      *param_1 = 0x46;
    }
    if (lVar4 == DAT_14c965010) {
      *param_1 = 0x47;
    }
    if (lVar4 == DAT_14c965028) {
      *param_1 = 0x48;
    }
    if (lVar4 == DAT_14c965040) {
      *param_1 = 0x49;
    }
    if (lVar4 == DAT_14c965058) {
      *param_1 = 0x4a;
    }
    if (lVar4 == DAT_14c965070) {
      *param_1 = 0x4b;
    }
    if (lVar4 == DAT_14c965088) {
      *param_1 = 0x4c;
    }
    if (lVar4 == DAT_14c9650a0) {
      *param_1 = 0x4d;
    }
    if (lVar4 == DAT_14c9650b8) {
      *param_1 = 0x4e;
    }
    if (lVar4 == DAT_14c9650d0) {
      *param_1 = 0x4f;
    }
    if (lVar4 == DAT_14c9650e8) {
      *param_1 = 0x50;
    }
    if (lVar4 == DAT_14c965100) {
      *param_1 = 0x51;
    }
    if (lVar4 == DAT_14c965118) {
      *param_1 = 0x52;
    }
    if (lVar4 == DAT_14c965130) {
      *param_1 = 0x53;
    }
    if (lVar4 == DAT_14c965148) {
      *param_1 = 0x54;
    }
    if (lVar4 == DAT_14c965160) {
      *param_1 = 0x55;
    }
    if (lVar4 == DAT_14c966ee0) {
      *param_1 = 0x56;
    }
    if (lVar4 == DAT_14c966fd0) {
      *param_1 = 0x57;
    }
    if (lVar4 == DAT_14c966eb0) {
      *param_1 = 0x58;
    }
    if (lVar4 == DAT_14c966f28) {
      *param_1 = 0x59;
    }
    if (lVar4 == DAT_14c966f10) {
      *param_1 = 0x5a;
    }
    if (lVar4 == DAT_14c965178) {
      *param_1 = 0x60;
    }
    if (lVar4 == DAT_14c965190) {
      *param_1 = 0x61;
    }
    if (lVar4 == DAT_14c9651a8) {
      *param_1 = 0x62;
    }
    if (lVar4 == DAT_14c9651c0) {
      *param_1 = 99;
    }
    if (lVar4 == DAT_14c9651d8) {
      *param_1 = 100;
    }
    if (lVar4 == DAT_14c9651f0) {
      *param_1 = 0x65;
    }
    if (lVar4 == DAT_14c965208) {
      *param_1 = 0x66;
    }
    if (lVar4 == DAT_14c965220) {
      *param_1 = 0x67;
    }
    if (lVar4 == DAT_14c965238) {
      *param_1 = 0x68;
    }
    if (lVar4 == DAT_14c965250) {
      *param_1 = 0x69;
    }
    if (lVar4 == DAT_14c965268) {
      *param_1 = 0x6a;
    }
    if (lVar4 == DAT_14c965280) {
      *param_1 = 0x6b;
    }
    if (lVar4 == DAT_14c965298) {
      *param_1 = 0x6d;
    }
    if (lVar4 == DAT_14c9652b0) {
      *param_1 = 0x6e;
    }
    if (lVar4 == DAT_14c9652c8) {
      *param_1 = 0x6f;
    }
    if (lVar4 == DAT_14c9652e0) {
      *param_1 = 0x70;
    }
    if (lVar4 == DAT_14c966f70) {
      *param_1 = 0x71;
    }
    if (lVar4 == DAT_14c9652f8) {
      *param_1 = 0x72;
    }
    if (lVar4 == DAT_14c965310) {
      *param_1 = 0x73;
    }
    if (lVar4 == DAT_14c965328) {
      *param_1 = 0x74;
    }
    if (lVar4 == DAT_14c965340) {
      *param_1 = 0x75;
    }
    if (lVar4 == DAT_14c965358) {
      *param_1 = 0x76;
    }
    if (lVar4 == DAT_14c965370) {
      *param_1 = 0x77;
    }
    if (lVar4 == DAT_14c965388) {
      *param_1 = 0x78;
    }
    if (lVar4 == DAT_14c9653a0) {
      *param_1 = 0x79;
    }
    if (lVar4 == DAT_14c9653b8) {
      *param_1 = 0x7a;
    }
    if (lVar4 == DAT_14c9653d0) {
      *param_1 = 0x7b;
    }
    if (lVar4 == DAT_14c9653e8) {
      *param_1 = 0x90;
    }
    if (lVar4 == lVar6) {
      uVar11 = 0x10;
LAB_145c4ec66:
      *param_1 = uVar11;
    }
    else {
      uVar11 = 0x91;
      if (lVar4 == DAT_14c965400) goto LAB_145c4ec66;
    }
    if (lVar4 == lVar7) {
      uVar11 = 0x11;
LAB_145c4ec81:
      *param_1 = uVar11;
    }
    else {
      uVar11 = 0x10;
      if (lVar4 == DAT_14c965430) goto LAB_145c4ec81;
    }
    if (lVar4 == lVar8) {
      uVar11 = 0x12;
LAB_145c4ec9b:
      *param_1 = uVar11;
    }
    else {
      uVar11 = 0x11;
      if (lVar4 == DAT_14c965460) goto LAB_145c4ec9b;
    }
    if ((lVar4 == lVar9) || (lVar4 == DAT_14c965490)) {
      uVar11 = 0x12;
      if (lVar4 == lVar9) {
        uVar11 = 0x5b;
      }
      *param_1 = uVar11;
    }
    if (lVar4 == DAT_14c9654c0) {
      *param_1 = 0x5c;
    }
    if (lVar4 == DAT_14c9654d8) {
      *param_1 = 0xba;
    }
    if (lVar4 == DAT_14c9654f0) {
      *param_1 = 0xbb;
    }
    if (lVar4 == DAT_14c965508) {
      *param_1 = 0xbc;
    }
    if (lVar4 == DAT_14c965520) {
      *param_1 = 0xbd;
    }
    if (lVar4 == DAT_14c965550) {
      *param_1 = 0xbe;
    }
    if (lVar4 == DAT_14c965568) {
      *param_1 = 0xbf;
    }
    if (lVar4 == DAT_14c965580) {
      *param_1 = 0xc0;
    }
    if (lVar4 == DAT_14c965598) {
      *param_1 = 0xdb;
    }
    if (lVar4 == DAT_14c9655c8) {
      *param_1 = 0xdc;
    }
    if (lVar4 == DAT_14c9655e0) {
      *param_1 = 0xdd;
    }
    if (lVar4 == DAT_14c965628) {
      *param_1 = 0xde;
    }
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
  else if (param_3 == 3) {
    uVar3 = *(ushort *)(param_2 + 0x20);
    iVar10 = iswprint(uVar3);
    if (iVar10 == 0) {
LAB_145c4edbc:
      bVar12 = false;
    }
    else {
      iVar10 = iswspace(uVar3);
      if ((iVar10 != 0) || ((*(ushort *)(param_2 + 8) & 0xc) == 0)) goto LAB_145c4edbc;
      bVar12 = (*(ushort *)(param_2 + 8) & 0x30) != 0;
    }
    *param_1 = (uint)uVar3;
    goto LAB_145c4ed6a;
  }
  bVar12 = false;
LAB_145c4ed6a:
  *(bool *)((longlong)param_1 + 0xb) = bVar12;
  uVar3 = *(ushort *)(param_2 + 8);
  *(bool *)(param_1 + 2) = (uVar3 & 3) != 0;
  *(byte *)((longlong)param_1 + 10) = (uVar3 & 0x30) != 0 & (bVar12 ^ 1U);
  *(byte *)((longlong)param_1 + 9) = (uVar3 & 0xc) != 0 & (bVar12 ^ 1U);
  *(bool *)(param_1 + 3) = (uVar3 & 0xc0) != 0;
  return param_1;
}



// FUNCTION 145c4f254 FUN_145c4f254 body=169 status=ok
// SIG undefined FUN_145c4f254(void)

bool FUN_145c4f254(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c4f2fe FUN_145c4f2fe body=340 status=ok
// SIG undefined FUN_145c4f2fe(void)

void FUN_145c4f2fe(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auStack_178 [32];
  ushort *local_158;
  code **local_150;
  longlong local_148;
  undefined1 local_134 [4];
  undefined2 *local_130;
  undefined2 *local_128;
  ushort local_11c;
  undefined2 local_11a;
  undefined2 local_118;
  undefined4 local_116;
  undefined2 local_112;
  undefined2 local_110;
  undefined2 local_10e;
  undefined1 local_10b;
  undefined4 local_108;
  undefined1 local_104;
  undefined1 local_100 [12];
  undefined1 local_f4;
  byte bStack_f3;
  uint local_f0;
  longlong local_98;
  code *local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar1 = FUN_14009d2a0();
  local_118 = *(undefined2 *)(lVar1 + 0x4a);
  local_112 = *(undefined2 *)(lVar1 + 0x108);
  local_116 = *(undefined4 *)(lVar1 + 0x104);
  local_110 = **(undefined2 **)(param_2 + 0x18);
  local_10e = *(undefined2 *)*param_3;
  local_10b = 0;
  local_108 = 0x6ff;
  local_104 = 0;
  local_11a = *(undefined2 *)(param_2 + 0x14);
  local_130 = &local_11a;
  local_128 = &local_118;
  FUN_145c4f454(&local_118,local_100);
  local_f0 = *(uint *)(param_6 + 0x290);
  bVar2 = bStack_f3 & 0xfe | (local_f0 & 0xfffffeff) == 1;
  _local_f4 = CONCAT11(bVar2,local_f4);
  local_158 = &local_11c;
  local_11c = CONCAT11(bVar2,local_f4) & 0xfdff;
  local_150 = &local_38;
  local_38 = FUN_140f5d932;
  local_30 = 3;
  local_148 = param_2;
  FUN_145c4f59e(local_100,local_134,param_6 + 0x28,param_5);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c4f454 FUN_145c4f454 body=148 status=ok
// SIG undefined FUN_145c4f454(void)

undefined8 * FUN_145c4f454(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_2[2] = param_1[2];
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[7] = 0x10000000000;
  param_2[0xc] = 0x10000000000;
  param_2[0x13] = 0x10000000000;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0x18] = 0x10000000000;
  FUN_145c4f4ea(param_2,param_2 + 3);
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_1447c44f6(param_2 + 3);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c4f4ea FUN_145c4f4ea body=178 status=ok
// SIG undefined FUN_145c4f4ea(void)

void FUN_145c4f4ea(undefined2 *param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_32 = *param_1;
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  FUN_140dad887(param_1 + 1,param_2);
  local_32 = param_1[4];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[5];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c4f59e FUN_145c4f59e body=566 status=ok
// SIG undefined FUN_145c4f59e(void)

int * FUN_145c4f59e(short *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6,undefined8 param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 **local_100;
  short *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  int local_d4;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  short **local_b8;
  short *local_b0;
  undefined1 local_a8 [8];
  byte local_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((((*param_1 == -1) || (param_1[4] == -1)) || (param_1[5] == -1)) ||
     (cVar4 = FUN_145c4f82e(param_1,param_3), cVar4 == '\0')) {
    *param_2 = -1;
    goto LAB_145c4f732;
  }
  plVar5 = (longlong *)FUN_145c4f8d8(param_1,param_7);
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
  }
  local_50 = 0;
  FUN_1400abb7c(local_70,param_1 + 0x3c);
  local_78 = 0;
  FUN_1400abb7c(local_98,param_1 + 0x50);
  FUN_145c4f7d6(param_1,local_70);
  local_b8 = &local_b0;
  local_c0 = &LAB_145cd54b8;
  local_a0 = *(byte *)(param_6 + 8);
  local_b0 = param_1;
  (*(code *)(&PTR_LAB_14a475bc0)[local_a0])(local_a8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_100 = &local_c0;
  local_108 = local_a8;
  local_f8 = param_1 + 0xc;
  local_f0 = local_70;
  local_e8 = local_98;
  local_d0 = plVar5 + 2;
  local_c8 = plVar5;
  FUN_1406ac01c(param_4,param_2,param_5,&local_d0);
  iVar3 = *param_2;
  if (*param_2 == -1) {
    if ((*(byte *)(param_5 + 1) & 4) != 0) {
      FUN_145c7137e(param_4,&local_d4);
      *param_2 = local_d4;
      iVar3 = local_d4;
      if (local_d4 != -1) goto LAB_145c4f705;
    }
  }
  else {
LAB_145c4f705:
    FUN_1407ce0e2(param_4,iVar3,0xffffffff);
    FUN_1407cdf34(param_4,*param_2,0xffffffff);
  }
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
LAB_145c4f732:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145c4f7d6 FUN_145c4f7d6 body=87 status=ok
// SIG undefined FUN_145c4f7d6(void)

void FUN_145c4f7d6(undefined2 *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FUN_140dba9e6(param_2,*param_1);
  lVar1 = 1;
  do {
    if (param_1[lVar1] != -1) {
      FUN_140dba9e6(param_2);
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 4);
  FUN_140dba9e6(param_2,param_1[4]);
  FUN_140dba9e6(param_2,param_1[5]);
  return;
}



// FUNCTION 145c4f82e FUN_145c4f82e body=170 status=ok
// SIG undefined FUN_145c4f82e(void)

undefined8 FUN_145c4f82e(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  
  uVar1 = *param_1;
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulonglong)
            CONCAT11((char)(uVar1 >> 8),
                     (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0);
  }
  uVar1 = param_1[4];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[5];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar5 = false;
  }
  else {
    bVar5 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 & bVar4 & bVar5);
}



// FUNCTION 145c4f8d8 FUN_145c4f8d8 body=180 status=ok
// SIG undefined FUN_145c4f8d8(void)

undefined8 * FUN_145c4f8d8(undefined4 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar4 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14a4c1d50;
  puVar4[2] = &PTR_FUN_14a4c1d68;
  param_2 = (longlong *)*param_2;
  puVar4[3] = param_2;
  puVar4[4] = 0;
  puVar4[5] = 0;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2,&local_38);
    puVar4[4] = local_38;
    puVar4[5] = uStack_30;
  }
  puVar4[8] = *(undefined8 *)(param_1 + 4);
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *(undefined4 *)(puVar4 + 6) = *param_1;
  *(undefined4 *)((longlong)puVar4 + 0x34) = uVar1;
  *(undefined4 *)(puVar4 + 7) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x3c) = uVar3;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c4f98e FUN_145c4f98e body=40 status=ok
// SIG undefined FUN_145c4f98e(void)

undefined8 FUN_145c4f98e(undefined8 param_1,int param_2)

{
  FUN_145c4f9b6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c4f9b6 FUN_145c4f9b6 body=118 status=ok
// SIG undefined FUN_145c4f9b6(void)

void FUN_145c4f9b6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b51ffe0;
  param_1[0x8a] = &PTR_FUN_14b520b80;
  if (param_1[0x19f] != 0) {
    FUN_1400020a8();
  }
  FUN_14064e066(param_1 + 0x8a);
  FUN_145c4fa2c(param_1[0x87],*(undefined4 *)(param_1 + 0x88));
  if (param_1[0x87] != 0) {
    FUN_1400020a8();
  }
  FUN_14064ee12(param_1);
  return;
}



// FUNCTION 145c4fa2c FUN_145c4fa2c body=45 status=ok
// SIG undefined FUN_145c4fa2c(void)

void FUN_145c4fa2c(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 145c4fa5a FUN_145c4fa5a body=40 status=ok
// SIG undefined FUN_145c4fa5a(void)

undefined8 FUN_145c4fa5a(undefined8 param_1,int param_2)

{
  FUN_145c4fa82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c4fa82 FUN_145c4fa82 body=163 status=ok
// SIG undefined FUN_145c4fa82(void)

void FUN_145c4fa82(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b576860;
  param_1[6] = &PTR_FUN_14b576b20;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_140af926c(param_1 + 6);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c4fb26 FUN_145c4fb26 body=40 status=ok
// SIG undefined FUN_145c4fb26(void)

undefined8 FUN_145c4fb26(undefined8 param_1,int param_2)

{
  FUN_145c4fb4e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c4fb4e FUN_145c4fb4e body=107 status=ok
// SIG undefined FUN_145c4fb4e(void)

void FUN_145c4fb4e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bb78770;
  param_1[5] = &PTR_FUN_14bb78bf0;
  param_1[0x4f] = &PTR_FUN_14bb78c30;
  param_1[0x50] = &PTR_FUN_14bb78c50;
  FUN_145c4fbb9(param_1[0x15a],*(undefined4 *)(param_1 + 0x15b));
  if (param_1[0x15a] != 0) {
    FUN_1400020a8();
  }
  FUN_1456e3f36(param_1);
  return;
}



// FUNCTION 145c4fbb9 FUN_145c4fbb9 body=56 status=ok
// SIG undefined FUN_145c4fbb9(void)

void FUN_145c4fbb9(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_1 + 2);
    param_1 = param_1 + 0x52;
  }
  return;
}



// FUNCTION 145c4fbf2 FUN_145c4fbf2 body=44 status=ok
// SIG undefined FUN_145c4fbf2(void)

void FUN_145c4fbf2(longlong *param_1)

{
  switchD_143c3d4dc::caseD_1d();
  (**(code **)(*param_1 + 0x2a8))(param_1);
  FUN_1400fb146(param_1 + 0xb,0);
  return;
}



// FUNCTION 145c4fc1e FUN_145c4fc1e body=79 status=ok
// SIG undefined FUN_145c4fc1e(void)

void FUN_145c4fc1e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x60) = 0;
  plVar3 = *(longlong **)(param_1 + 0x68);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x68) = 0;
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
  FUN_145c4fc6e(param_1);
  return;
}



// FUNCTION 145c4fc6e FUN_145c4fc6e body=261 status=ok
// SIG undefined FUN_145c4fc6e(void)

uint FUN_145c4fc6e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  
  lVar6 = *(longlong *)(param_1 + 0x38);
  if (lVar6 != 0) {
    *(undefined8 *)(lVar6 + 0x28) = 0;
    plVar4 = *(longlong **)(lVar6 + 0x30);
    if (plVar4 != (longlong *)0x0) {
      *(undefined8 *)(lVar6 + 0x30) = 0;
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
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  lVar6 = *(longlong *)(param_1 + 0x30);
  if (lVar6 != 0) {
    *(undefined8 *)(lVar6 + 0x28) = 0;
    plVar4 = *(longlong **)(lVar6 + 0x30);
    if (plVar4 != (longlong *)0x0) {
      *(undefined8 *)(lVar6 + 0x30) = 0;
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
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  uVar5 = *(uint *)(param_1 + 8);
  if ((uVar5 & 0x10) == 0) {
    FUN_144757f48(param_1,0x40000000);
    uVar5 = *(uint *)(param_1 + 0xc);
    if ((int)uVar5 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    do {
      uVar3 = *(uint *)(lVar6 + 8);
      if ((uVar3 >> 0x15 & 1) != 0) {
        return uVar3;
      }
      LOCK();
      uVar5 = *(uint *)(lVar6 + 8);
      bVar7 = uVar3 == uVar5;
      if (bVar7) {
        *(uint *)(lVar6 + 8) = uVar3 | 0x200000;
        uVar5 = uVar3;
      }
      UNLOCK();
    } while (!bVar7);
  }
  return uVar5;
}



// FUNCTION 145c4fd74 FUN_145c4fd74 body=124 status=ok
// SIG undefined FUN_145c4fd74(void)

void FUN_145c4fd74(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    FUN_14481578e(param_1 + 0x60,0);
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)(param_1 + 0x7c) != 0) {
    FUN_14481578e(param_1 + 0x70,0);
  }
  FUN_145aa5958(*(undefined8 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x88));
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(int *)(param_1 + 0x8c) != 0) {
    FUN_1481258f8(param_1 + 0x80);
  }
  FUN_145c4fc6e(param_1);
  return;
}



// FUNCTION 145c4fdf0 FUN_145c4fdf0 body=104 status=ok
// SIG undefined FUN_145c4fdf0(void)

undefined8 FUN_145c4fdf0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  FUN_1446dcdd4(local_40);
  uVar1 = FUN_145c4fe5a(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c4fe5a FUN_145c4fe5a body=22 status=ok
// SIG undefined FUN_145c4fe5a(void)

undefined8 FUN_145c4fe5a(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  
  plVar4 = DAT_14cb78240;
  if (DAT_14cb78240 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb78240 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb78240 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb78240[0x3a] <= *(int *)((longlong)DAT_14cb78240 + 0x1fc))) {
LAB_144837614:
      lVar8 = FUN_144837648(plVar4,param_1,1);
      if (lVar8 == 0) {
        return 0;
      }
      FUN_14012a344(plVar4,lVar8,0);
      puVar9 = (undefined8 *)(lVar8 + 0x30);
      goto LAB_144837566;
    }
  }
  else {
    cVar5 = (**(code **)(*DAT_14cb78240 + 0x300))(DAT_14cb78240);
    if (cVar5 == '\0') goto LAB_144837614;
  }
  puVar7 = (uint *)&DAT_14c948618;
  if (((*param_1 != 0) && (0 < param_1[1])) && (*param_1 != DAT_14c948000)) {
    puVar7 = (uint *)(param_1 + 2);
    if (0 < param_1[9]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
    if (1 < (uint)param_1[1]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
  }
  uVar2 = *puVar7;
  uVar3 = puVar7[2];
  uVar6 = uVar2;
  if (uVar3 != 0) {
    uVar6 = uVar3 >> 0xd ^ uVar2 - uVar3;
    uVar10 = uVar6 << 8 ^ (-0x61c88647 - uVar3) - uVar6;
    uVar13 = uVar10 >> 0xd ^ (uVar3 - uVar6) - uVar10;
    uVar6 = uVar13 >> 0xc ^ (uVar6 - uVar10) - uVar13;
    uVar15 = uVar6 << 0x10 ^ (uVar10 - uVar13) - uVar6;
    uVar10 = uVar15 >> 5 ^ (uVar13 - uVar6) - uVar15;
    uVar13 = uVar10 >> 3 ^ (uVar6 - uVar15) - uVar10;
    uVar6 = uVar13 << 10 ^ (uVar15 - uVar10) - uVar13;
    uVar6 = uVar6 >> 0xf ^ uVar10 - (uVar13 + uVar6);
  }
  if ((int)plVar4[0x3a] != *(int *)((longlong)plVar4 + 0x1fc)) {
    plVar11 = plVar4 + 0x40;
    if ((longlong *)plVar4[0x41] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar4[0x41];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar4[0x42] - 1U & uVar6) * 4);
    if (iVar12 != -1) {
      lVar8 = plVar4[0x39];
      while ((lVar14 = (longlong)iVar12 * 0x20, *(uint *)(lVar8 + lVar14) != uVar2 ||
             (lVar1 = lVar8 + lVar14, *(uint *)(lVar1 + 8) != uVar3))) {
        iVar12 = *(int *)(lVar8 + 0x18 + lVar14);
        if (iVar12 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      puVar9 = (undefined8 *)(lVar1 + 0x10);
      if (puVar9 == (undefined8 *)0x0) {
        return 0;
      }
LAB_144837566:
      return *puVar9;
    }
  }
  return 0;
}



// FUNCTION 145c4fe70 FUN_145c4fe70 body=46 status=ok
// SIG undefined FUN_145c4fe70(void)

void FUN_145c4fe70(longlong param_1)

{
  FUN_141503574(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145c4fe9e FUN_145c4fe9e body=38 status=ok
// SIG undefined FUN_145c4fe9e(void)

undefined8 FUN_145c4fe9e(undefined8 param_1,int param_2)

{
  FUN_145c4fec4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c4fec4 FUN_145c4fec4 body=169 status=ok
// SIG undefined FUN_145c4fec4(void)

void FUN_145c4fec4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b525c10;
  if (*(char *)(param_1 + 1) == '\x01') {
    FUN_148ae3488(param_1);
    FUN_148aeae02(param_1 + 2);
    *(undefined1 *)(param_1 + 1) = 0;
    vx_uninitialize();
  }
  FUN_145c4ff6d(param_1[0x92],*(undefined4 *)(param_1 + 0x93));
  if (param_1[0x92] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x90] != 0) {
    FUN_1400020a8();
  }
  FUN_145c50182(param_1 + 0x4e);
  FUN_145c50182(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_145c4ff96(param_1 + 2);
  return;
}



// FUNCTION 145c4ff6d FUN_145c4ff6d body=40 status=ok
// SIG undefined FUN_145c4ff6d(void)

void FUN_145c4ff6d(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1449db362(param_1);
    param_1 = param_1 + 0x10;
  }
  return;
}



// FUNCTION 145c4ff96 FUN_145c4ff96 body=53 status=ok
// SIG undefined FUN_145c4ff96(void)

void FUN_145c4ff96(longlong *param_1)

{
  FUN_145c4ffcc();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c4ffcc FUN_145c4ffcc body=312 status=ok
// SIG undefined FUN_145c4ffcc(void)

void FUN_145c4ffcc(longlong *param_1)

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
      FUN_145c50106((longlong)iStack_4c * 0x88 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144a544ac(param_1,0);
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



// FUNCTION 145c50106 FUN_145c50106 body=61 status=ok
// SIG undefined FUN_145c50106(void)

void FUN_145c50106(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x78);
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
  FUN_140d5fbf2(param_1);
  return;
}



// FUNCTION 145c50144 FUN_145c50144 body=24 status=ok
// SIG undefined FUN_145c50144(void)

void FUN_145c50144(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145c50158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145c5015c FUN_145c5015c body=38 status=ok
// SIG undefined FUN_145c5015c(void)

undefined8 FUN_145c5015c(undefined8 param_1,int param_2)

{
  FUN_1415035c6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c50182 FUN_145c50182 body=731 status=ok
// SIG undefined FUN_145c50182(void)

void FUN_145c50182(undefined8 *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  void *_Src;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = &PTR_FUN_14b525a20;
  plVar1 = param_1 + 0x1f;
  local_98 = param_1 + 0x21;
  local_68 = &DAT_100000000;
  local_58 = (undefined8 *)&DAT_ffffffff;
  uStack_50 = 0;
  uStack_60 = local_98;
  if (*(int *)(param_1 + 0x24) == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar6 = *(int *)(param_1 + 0x24);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  puVar4 = local_78;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
  iVar5 = local_78._4_4_;
  local_90 = plVar1;
  if ((local_78._4_4_ != iVar6) || (local_78 = puVar4, uStack_60 != local_98)) {
    do {
      local_78 = puVar4;
      lVar3 = *local_90;
      lVar7 = (longlong)iVar5 * 0x20;
      local_68 = (undefined1 *)0x0;
      uVar2 = *(uint *)(lVar3 + 8 + lVar7);
      _Src = *(void **)(lVar3 + lVar7);
      uStack_60 = (undefined8 *)CONCAT44(uStack_60._4_4_,uVar2);
      if ((longlong)(int)uVar2 == 0) {
        uStack_60 = (undefined8 *)(ulonglong)uVar2;
      }
      else {
        FUN_1446dd670(&local_68,uVar2,0);
        memcpy(local_68,_Src,(longlong)(int)uVar2 * 2);
      }
      local_58 = *(undefined8 **)(lVar3 + lVar7 + 0x10);
      if (local_58 != (undefined8 *)0x0) {
        (**(code **)*local_58)(local_58,1);
      }
      if (local_68 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      local_78 = (undefined8 *)CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
      FUN_1449c0562(&local_88);
      iVar5 = local_78._4_4_;
      puVar4 = local_78;
    } while (local_90 != plVar1 ||
             ((undefined8 *)CONCAT44(uStack_7c,uStack_80) != local_98 || local_78._4_4_ != iVar6));
  }
  *(undefined4 *)(param_1 + 0x41) = 0;
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x37) = 0;
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 0x2e);
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_145c504a6(plVar1);
  param_1[0x19] = &PTR_FUN_14b5259c0;
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  param_1[0x13] = &PTR_FUN_14b5259c0;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  param_1[0xd] = &PTR_FUN_14b5259c0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_145c504dc(param_1);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c5045e FUN_145c5045e body=71 status=ok
// SIG undefined FUN_145c5045e(void)

undefined8 * FUN_145c5045e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b5259c0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c504a6 FUN_145c504a6 body=53 status=ok
// SIG undefined FUN_145c504a6(void)

void FUN_145c504a6(longlong *param_1)

{
  FUN_145c50568();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c504dc FUN_145c504dc body=139 status=ok
// SIG undefined FUN_145c504dc(void)

void FUN_145c504dc(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14b526880;
  FUN_144760e21(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c50568 FUN_145c50568 body=314 status=ok
// SIG undefined FUN_145c50568(void)

void FUN_145c50568(longlong *param_1)

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
      if (*(longlong *)(*local_68 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
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
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c506aa FUN_145c506aa body=299 status=ok
// SIG undefined FUN_145c506aa(void)

longlong FUN_145c506aa(void)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined4 local_70;
  undefined8 local_68;
  wchar_t *local_60;
  undefined4 local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14c948de0 == 0) {
    local_30 = FUN_1449e2820;
    lVar1 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
    DAT_14c948de0 = lVar1;
    FUN_1446f470e(local_28,L"PropertyBagMissingObject",1);
    local_48 = &LAB_14688d3a2;
    local_50 = FUN_146272cc6;
    local_60 = L"Engine";
    local_58 = 199;
    local_68 = 0;
    local_70 = 0x10000000;
    local_78 = (wchar_t *)CONCAT44(local_78._4_4_,8);
    local_40 = &local_30;
    FUN_14574b4b2(lVar1);
    DAT_14c948de0 = lVar1;
    uVar2 = FUN_1446f8646();
    lVar1 = DAT_14c948de0;
    uVar3 = FUN_1446f8646();
    local_78 = L"PropertyBagMissingObject";
    FUN_14574b446(uVar3,lVar1,uVar2,L"/Script/CoreUObject");
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return DAT_14c948de0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c507d6 FUN_145c507d6 body=9 status=ok
// SIG undefined FUN_145c507d6(void)

void FUN_145c507d6(longlong param_1)

{
  FUN_14150371c(param_1 + 0x10);
  return;
}



// FUNCTION 145c507f4 FUN_145c507f4 body=63 status=ok
// SIG undefined FUN_145c507f4(void)

undefined1 FUN_145c507f4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_145c50834(param_2,param_3);
    param_3 = param_3 + 0x228;
    param_2 = param_2 + 0x228;
  }
  return 1;
}



// FUNCTION 145c50834 FUN_145c50834 body=460 status=ok
// SIG undefined FUN_145c50834(void)

longlong FUN_145c50834(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  FUN_145a593dc(param_1 + 0x10,param_2 + 0x10);
  FUN_145a593dc(param_1 + 0x60,param_2 + 0x60);
  lVar2 = FUN_14479d2ce(param_2 + 0xb8);
  if (lVar2 != 0) {
    lVar3 = FUN_1446f4bba();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) goto LAB_145c508b4;
  }
  lVar2 = 0;
LAB_145c508b4:
  lVar3 = FUN_14479d2ce(param_1 + 0xb8);
  if (lVar3 != lVar2) {
    FUN_1446e6d0e(&local_58,lVar2);
    if ((longlong *)(param_1 + 0xb0) != &local_58) {
      (**(code **)(*(longlong *)(param_1 + 0xb0) + 0x48))((longlong *)(param_1 + 0xb0));
      *(undefined8 *)(param_1 + 0xb8) = local_50;
      *(undefined8 *)(param_1 + 0xc0) = local_48;
      *(undefined1 *)(param_1 + 0xd0) = local_38;
      local_38 = 0;
      (**(code **)(local_58 + 0x48))();
    }
    FUN_1448eac94(&local_58);
  }
  plVar1 = *(longlong **)(param_1 + 0xc0);
  lVar2 = *(longlong *)(param_2 + 0xc0);
  (**(code **)(*plVar1 + 0x10))(plVar1,lVar2);
  plVar1[0x21] = param_1;
  if (*(longlong *)(lVar2 + 0x50) == param_2 + 0x108) {
    *(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x50) = param_1 + 0x108;
  }
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  FUN_145c50af8(param_1 + 0xe0,param_2 + 0xe0);
  FUN_140816ffa(param_1 + 0xf0,param_2 + 0xf0);
  FUN_145c50a48(param_1 + 0x1a8,param_2 + 0x1a8);
  FUN_145c50b52(param_1 + 0x208,param_2 + 0x208);
  FUN_145c50aa0(param_1 + 0x218,param_2 + 0x218);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c50a02 FUN_145c50a02 body=70 status=ok
// SIG undefined FUN_145c50a02(void)

void FUN_145c50a02(longlong param_1,longlong param_2)

{
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  FUN_14591e93c(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  return;
}



// FUNCTION 145c50a48 FUN_145c50a48 body=88 status=ok
// SIG undefined FUN_145c50a48(void)

undefined8 * FUN_145c50a48(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1490efbfe(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 5);
      }
    }
  }
  return param_1;
}



// FUNCTION 145c50aa0 FUN_145c50aa0 body=88 status=ok
// SIG undefined FUN_145c50aa0(void)

undefined8 * FUN_145c50aa0(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1490f26de(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 145c50af8 FUN_145c50af8 body=89 status=ok
// SIG undefined FUN_145c50af8(void)

undefined8 * FUN_145c50af8(undefined8 *param_1,undefined8 *param_2)

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
      FUN_145c50bb0(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x14);
      }
    }
  }
  return param_1;
}



// FUNCTION 145c50b52 FUN_145c50b52 body=93 status=ok
// SIG undefined FUN_145c50b52(void)

undefined8 * FUN_145c50b52(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1401f9f9f(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1490f250c(param_1,iVar1);
      FUN_1490f257f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 145c50bb0 FUN_145c50bb0 body=117 status=ok
// SIG undefined FUN_145c50bb0(void)

void FUN_145c50bb0(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x14,4);
    iVar2 = (int)(uVar1 / 0x14);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x14,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 145c50c26 FUN_145c50c26 body=1067 status=ok
// SIG undefined FUN_145c50c26(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145c50c26(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined1 *puVar6;
  undefined1 uVar7;
  longlong lVar8;
  undefined1 *puVar9;
  longlong lVar10;
  undefined1 *puVar11;
  size_t sVar12;
  undefined1 *puVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_68 [8];
  undefined1 *local_60;
  undefined8 local_58;
  undefined1 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)&local_48;
  *(undefined8 *)(param_2 + 0x30) = 0;
  FUN_1446ebfd4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  if (lVar1 == 0) {
LAB_145c50f02:
    puVar9 = auStack_68;
    *(undefined1 *)(param_2 + 0xa0) = 1;
    goto LAB_145c50e7d;
  }
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  lVar10 = *(longlong *)(lVar1 + 8);
  lVar8 = FUN_1446ebfd4();
  puVar9 = auStack_68;
  local_58 = uVar2;
  if (*(ulonglong *)(lVar8 + 8) == 0) {
    bVar15 = lVar10 != 0;
    if (lVar10 != lVar8 && bVar15) {
      do {
        lVar10 = *(longlong *)(lVar10 + 0x30);
        bVar15 = lVar10 != 0;
        if (lVar10 == lVar8) break;
      } while (lVar10 != 0);
    }
    if (!bVar15) goto LAB_145c50f02;
  }
  else if ((*(ulonglong *)(lVar10 + 0x18) & *(ulonglong *)(lVar8 + 8)) == 0) goto LAB_145c50f02;
  plVar3 = *(longlong **)(lVar1 + 0x70);
  sVar12 = (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34);
  if ((int)sVar12 == 0) {
    puVar11 = (undefined1 *)0x0;
  }
  else {
    lVar10 = -(sVar12 + 0x1e & 0xfffffffffffffff0);
    puVar9 = auStack_68 + lVar10;
    puVar11 = auStack_68 + lVar10;
  }
  if ((*(byte *)((longlong)plVar3 + 0x39) & 2) == 0) {
    pcVar5 = *(code **)(*plVar3 + 0x160);
    *(undefined8 *)(puVar9 + -0x28) = 0x145c50f28;
    (*pcVar5)(plVar3,puVar11);
  }
  else {
    *(undefined8 *)(puVar9 + -0x28) = 0x145c50d0c;
    memset(puVar11,0,sVar12);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(puVar9 + -0x28) = 0x145c50d21;
  FUN_1446ddbd2();
  local_60 = param_3;
  local_50 = puVar11;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    *(undefined8 *)(puVar9 + -0x28) = 0x145c50f4e;
    FUN_144a5ded6(param_2);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(puVar9 + -0x28) = 0x145c50d4b;
    FUN_14470e992(param_2,uVar2,puVar11);
  }
  plVar4 = *(longlong **)(lVar1 + 0x78);
  sVar12 = (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34);
  if ((int)sVar12 == 0) {
    puVar11 = (undefined1 *)0x0;
  }
  else {
    *(undefined8 *)(puVar9 + -8) = 0x145c50d75;
    lVar10 = -(sVar12 + 0x1e & 0xfffffffffffffff0);
    puVar11 = puVar9 + lVar10;
    puVar9 = puVar9 + lVar10;
  }
  if ((*(byte *)((longlong)plVar4 + 0x39) & 2) == 0) {
    pcVar5 = *(code **)(*plVar4 + 0x160);
    *(undefined8 *)(puVar9 + -0x28) = 0x145c50d9a;
    (*pcVar5)(plVar4,puVar11);
  }
  else {
    *(undefined8 *)(puVar9 + -0x28) = 0x145c50f6b;
    memset(puVar11,0,sVar12);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(puVar9 + -0x28) = 0x145c50daf;
  FUN_1446ddbd2();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    *(undefined8 *)(puVar9 + -0x28) = 0x145c50f91;
    FUN_144a5ded6(param_2,puVar11);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(puVar9 + -0x28) = 0x145c50dd1;
    FUN_14470e992(param_2,uVar2,puVar11);
  }
  puVar6 = local_50;
  uVar2 = local_58;
  puVar13 = puVar11;
  if ((*(undefined1 **)(param_2 + 0x38) == (undefined1 *)0x0) ||
     (lVar10 = *(longlong *)(param_2 + 0x30),
     (int)sVar12 != *(int *)(lVar10 + 0x30) * *(int *)(lVar10 + 0x34))) goto LAB_145c50e30;
  lVar8 = plVar4[1];
  lVar10 = *(longlong *)(lVar10 + 8);
  if (*(ulonglong *)(lVar8 + 8) == 0) {
    bVar15 = lVar10 != 0;
    lVar14 = lVar10;
    if (lVar10 != lVar8 && bVar15) {
      do {
        lVar14 = *(longlong *)(lVar14 + 0x30);
        bVar15 = lVar14 != 0;
      } while (lVar14 != lVar8 && bVar15);
    }
    if (bVar15) goto LAB_145c50e2d;
LAB_145c50fa0:
    if (*(ulonglong *)(lVar10 + 8) == 0) {
      bVar15 = lVar8 != 0;
      if (lVar8 != lVar10 && bVar15) {
        do {
          lVar8 = *(longlong *)(lVar8 + 0x30);
          bVar15 = lVar8 != 0;
          if (lVar8 == lVar10) break;
        } while (lVar8 != 0);
      }
      if (bVar15) goto LAB_145c50e2d;
    }
    else if ((*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar10 + 8)) != 0) goto LAB_145c50e2d;
  }
  else {
    if ((*(ulonglong *)(lVar10 + 0x18) & *(ulonglong *)(lVar8 + 8)) == 0) goto LAB_145c50fa0;
LAB_145c50e2d:
    puVar13 = *(undefined1 **)(param_2 + 0x38);
  }
LAB_145c50e30:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined8 *)(puVar9 + -0x28) = 0x145c50e5e;
  uVar7 = FUN_145c51056(uVar2,lVar1,puVar6,puVar13);
  *local_60 = uVar7;
  if ((*(byte *)((longlong)plVar4 + 0x3c) & 0x10) == 0) {
    pcVar5 = *(code **)(*plVar4 + 0x148);
    *(undefined8 *)(puVar9 + -0x28) = 0x145c5101e;
    (*pcVar5)(plVar4,puVar11);
  }
  puVar11 = local_50;
  if ((plVar3[7] & 0x1000000000U) == 0) {
    pcVar5 = *(code **)(*plVar3 + 0x148);
    *(undefined8 *)(puVar9 + -0x28) = 0x145c5103b;
    (*pcVar5)(plVar3,puVar11);
  }
LAB_145c50e7d:
  if ((local_48 ^ (ulonglong)&local_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar9 + -0x28) = &UNK_145c50ea7;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c51056 FUN_145c51056 body=238 status=ok
// SIG undefined FUN_145c51056(void)

bool FUN_145c51056(longlong param_1,longlong param_2,undefined8 param_3,void *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 == 0) {
    bVar3 = false;
  }
  else {
    local_40 = *(undefined1 *)(param_2 + 0x98);
    local_70 = *(undefined8 *)(param_2 + 0x70);
    local_68 = *(undefined8 *)(param_2 + 0x78);
    local_38 = &local_70;
    local_58 = *(undefined4 *)(param_2 + 0x80);
    uStack_54 = *(undefined4 *)(param_2 + 0x84);
    uStack_50 = *(undefined4 *)(param_2 + 0x88);
    uStack_4c = *(undefined4 *)(param_2 + 0x8c);
    local_48 = *(undefined8 *)(param_2 + 0x90);
    local_60 = param_1;
    local_30 = param_3;
    local_28 = local_70;
    lVar2 = FUN_145c51146(local_38);
    if (param_4 != (void *)0x0) {
      plVar1 = *(longlong **)(param_2 + 0x78);
      if (lVar2 == 0) {
        if ((*(byte *)((longlong)plVar1 + 0x39) & 2) == 0) {
          (**(code **)(*plVar1 + 0x160))(plVar1,param_4);
        }
        else {
          memset(param_4,0,(longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
        }
      }
      else {
        (**(code **)(*plVar1 + 0x138))(plVar1,param_4,lVar2);
      }
    }
    bVar3 = lVar2 != 0;
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c51146 FUN_145c51146 body=216 status=ok
// SIG undefined FUN_145c51146(void)

void FUN_145c51146(longlong param_1,longlong *param_2)

{
  undefined1 auStack_68 [32];
  undefined1 **local_48;
  longlong local_38;
  undefined1 *local_30;
  longlong *local_28;
  longlong local_20;
  undefined1 *local_18;
  longlong *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    local_38 = param_2[2];
    local_10 = &local_20;
    local_48 = &local_18;
    local_18 = &LAB_14798614a;
    local_28 = &local_38;
    local_30 = &LAB_1463afb1e;
    local_20 = local_38;
    FUN_14000c4cc(*(undefined8 *)(param_1 + 0x10),param_2[1],*param_2 + 0x18);
  }
  else {
    local_38 = param_2[2];
    local_10 = &local_20;
    local_48 = &local_18;
    local_18 = &LAB_147986124;
    local_28 = &local_38;
    local_30 = &LAB_14798613e;
    local_20 = local_38;
    FUN_1468e9802(*(undefined8 *)(param_1 + 0x10),param_2[1],*param_2 + 0x18);
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c51220 FUN_145c51220 body=1107 status=ok
// SIG undefined FUN_145c51220(void)

ulonglong FUN_145c51220(longlong param_1,int param_2,char param_3,char param_4)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  ulonglong unaff_RBP;
  undefined7 uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [16];
  byte local_68;
  undefined1 local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))();
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),3);
    if (cVar5 == '\0') goto LAB_145c51384;
  }
  uVar7 = (undefined7)(unaff_RBP >> 8);
  if (param_3 == '\x01') {
    if (param_4 == '\0') {
      puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x58);
      local_a8 = *puVar11;
      uStack_a0 = puVar11[1];
      local_98 = *(undefined4 *)(puVar11 + 2);
      uStack_94 = *(undefined4 *)((longlong)puVar11 + 0x14);
      uStack_90 = *(undefined4 *)(puVar11 + 3);
      uStack_8c = *(undefined4 *)((longlong)puVar11 + 0x1c);
      local_88 = *(undefined4 *)(puVar11 + 4);
      uStack_84 = *(undefined4 *)((longlong)puVar11 + 0x24);
      uStack_80 = *(undefined4 *)(puVar11 + 5);
      uStack_7c = *(undefined4 *)((longlong)puVar11 + 0x2c);
      local_68 = *(byte *)(puVar11 + 8);
      (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[local_68])(local_78,puVar11 + 6);
      local_60 = *(undefined1 *)(puVar11 + 9);
      local_58 = *(byte *)(puVar11 + 10);
      FUN_1410d7556(param_1 + 0x18,&local_a8);
      (*(code *)(&PTR_LAB_14a4c7e10)
                [*(byte *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x58 + 0x40)])();
      FUN_145c51674(param_1 + 0x68);
      uVar3 = *(uint *)(param_1 + 0xa8);
      uVar6 = 0;
      if (0 < (int)uVar3) {
        uVar8 = (ulonglong)uVar3;
        uVar9 = uVar3;
        do {
          uVar8 = uVar8 >> 1;
          uVar10 = (uint)uVar8 + (int)uVar6;
          if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar10 * 0x48) < param_2) {
            uVar6 = (ulonglong)(uVar10 + (uVar9 & 1));
          }
          bVar4 = 1 < uVar9;
          uVar9 = (uint)uVar8;
        } while (bVar4);
      }
      if (((int)uVar6 < (int)uVar3) &&
         (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar6 * 0x48) <= param_2)) {
        FUN_1475e147a(param_1 + 0xa0);
      }
      if ((local_58 & 1) != 0) {
        FUN_145c516e8(&local_a8,&local_98);
      }
      (*(code *)(&PTR_LAB_14a4c7e10)[local_68])(local_78);
LAB_145c51382:
      unaff_RBP = 0;
      goto LAB_145c51384;
    }
    unaff_RBP = CONCAT71(uVar7,3);
    if ((*(byte *)(*(longlong *)(param_1 + 0x68) + 0x50 + (longlong)param_2 * 0x58) & 1) == 0)
    goto LAB_145c51384;
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x58);
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xa8);
    lVar12 = *(longlong *)(param_1 + 0xa0);
    uVar9 = 0;
    if (0 < (int)uVar3) {
      uVar9 = 0;
      uVar10 = uVar3;
      do {
        uVar1 = (uVar10 >> 1) + uVar9;
        if (*(int *)(lVar12 + (ulonglong)uVar1 * 0x48) < param_2) {
          uVar9 = uVar1 + (uVar10 & 1);
        }
        bVar4 = 1 < uVar10;
        uVar10 = uVar10 >> 1;
      } while (bVar4);
    }
    if ((((int)uVar9 < (int)uVar3) && (*(int *)(lVar12 + (ulonglong)uVar9 * 0x48) <= param_2)) &&
       (lVar12 + (ulonglong)uVar9 * 0x48 != -8)) {
      FUN_145c516e8((longlong)param_2 * 0x58 + *(longlong *)(param_1 + 0x68));
      uVar3 = *(uint *)(param_1 + 0xa8);
      uVar6 = 0;
      if (0 < (int)uVar3) {
        uVar8 = (ulonglong)uVar3;
        uVar9 = uVar3;
        do {
          uVar8 = uVar8 >> 1;
          uVar10 = (uint)uVar8 + (int)uVar6;
          if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar10 * 0x48) < param_2) {
            uVar6 = (ulonglong)(uVar10 + (uVar9 & 1));
          }
          bVar4 = 1 < uVar9;
          uVar9 = (uint)uVar8;
        } while (bVar4);
      }
      unaff_RBP = CONCAT71(uVar7,1);
      if (((int)uVar6 < (int)uVar3) &&
         (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar6 * 0x48) <= param_2)) {
        FUN_1475e147a(param_1 + 0xa0);
      }
      goto LAB_145c51384;
    }
    unaff_RBP = CONCAT71(uVar7,1);
    if (param_4 == '\0') {
      lVar12 = (longlong)param_2 * 0x58;
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x50 + lVar12);
      puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + lVar12);
      if ((bVar2 & 2) == 0) {
        local_a8 = *puVar11;
        uStack_a0 = puVar11[1];
        local_98 = *(undefined4 *)(puVar11 + 2);
        uStack_94 = *(undefined4 *)((longlong)puVar11 + 0x14);
        uStack_90 = *(undefined4 *)(puVar11 + 3);
        uStack_8c = *(undefined4 *)((longlong)puVar11 + 0x1c);
        local_88 = *(undefined4 *)(puVar11 + 4);
        uStack_84 = *(undefined4 *)((longlong)puVar11 + 0x24);
        uStack_80 = *(undefined4 *)(puVar11 + 5);
        uStack_7c = *(undefined4 *)((longlong)puVar11 + 0x2c);
        local_68 = *(byte *)(puVar11 + 8);
        (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[local_68])(local_78,puVar11 + 6);
        local_60 = *(undefined1 *)(puVar11 + 9);
        local_58 = *(byte *)(puVar11 + 10);
        FUN_1410d7556(param_1 + 0x18,&local_a8);
        (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(*(longlong *)(param_1 + 0x68) + lVar12 + 0x40)])();
        FUN_145c51674(param_1 + 0x68);
        uVar3 = *(uint *)(param_1 + 0xa8);
        uVar6 = 0;
        if (0 < (int)uVar3) {
          uVar6 = 0;
          uVar8 = (ulonglong)uVar3;
          uVar9 = uVar3;
          do {
            uVar8 = uVar8 >> 1;
            uVar10 = (uint)uVar8 + (int)uVar6;
            if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar10 * 0x48) < param_2) {
              uVar6 = (ulonglong)(uVar10 + (uVar9 & 1));
            }
            bVar4 = 1 < uVar9;
            uVar9 = (uint)uVar8;
          } while (bVar4);
        }
        if (((int)uVar6 < (int)uVar3) &&
           (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar6 * 0x48) <= param_2)) {
          FUN_1475e147a(param_1 + 0xa0);
        }
        if ((local_58 & 1) != 0) {
          FUN_145c516e8(&local_a8,&local_98);
        }
        (*(code *)(&PTR_LAB_14a4c7e10)[local_68])(local_78);
        goto LAB_145c51382;
      }
      if ((bVar2 & 1) == 0) goto LAB_145c51384;
    }
    else {
      if (param_4 != '\x01') goto LAB_145c51384;
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x50 + (longlong)param_2 * 0x58);
      if ((bVar2 & 1) == 0) goto LAB_145c51384;
      puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x58);
      *(byte *)(puVar11 + 10) = bVar2 | 2;
    }
  }
  FUN_145c516e8(puVar11,puVar11 + 2);
LAB_145c51384:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 145c51674 FUN_145c51674 body=116 status=ok
// SIG undefined FUN_145c51674(void)

void FUN_145c51674(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x58) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x58) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x58 + 4) = uVar5;
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



// FUNCTION 145c516e8 FUN_145c516e8 body=177 status=ok
// SIG undefined FUN_145c516e8(void)

void FUN_145c516e8(undefined4 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_1;
  local_34 = param_1[1];
  lVar1 = FUN_14479d2ce(&local_38);
  if (lVar1 != 0) {
    if (*(char *)(param_2 + 0x30) == '\x02') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
    }
    if (*(char *)(param_2 + 0x30) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
    }
    if (*(longlong *)(param_2 + 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c517e6 FUN_145c517e6 body=81 status=ok
// SIG undefined FUN_145c517e6(void)

/* WARNING: Removing unreachable block (ram,0x000145c5180c) */
/* WARNING: Removing unreachable block (ram,0x000145c517f8) */

undefined8 FUN_145c517e6(void)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  piVar1 = (int *)cpuid_basic_info(0);
  if (6 < *piVar1) {
    lVar2 = cpuid_Extended_Feature_Enumeration_info(7);
    if ((*(uint *)(lVar2 + 0xc) & 0x20) != 0) {
      lVar3 = rdtsc();
      uVar4 = 1;
      FUN_141503919(lVar3 + 0x400,lVar3,*(undefined4 *)(lVar2 + 4));
    }
  }
  return uVar4;
}



// FUNCTION 145c5183c FUN_145c5183c body=55 status=ok
// SIG undefined FUN_145c5183c(void)

void FUN_145c5183c(void)

{
  undefined8 uVar1;
  
  if (DAT_14c98e190 == 0) {
    uVar1 = FUN_145c51873();
    DAT_14c98e190 = FUN_140002ddd(FUN_14627e28d,uVar1,L"SharedImageConstRefBlueprint");
  }
  return;
}



// FUNCTION 145c51873 FUN_145c51873 body=47 status=ok
// SIG undefined FUN_145c51873(void)

longlong FUN_145c51873(void)

{
  if (DAT_14c98e178 == 0) {
    FUN_140f50038(&DAT_14c98e178,&PTR_s__Script_ImageCore_149ef2035_3_149ef2018);
  }
  return DAT_14c98e178;
}



// FUNCTION 145c518a2 FUN_145c518a2 body=55 status=ok
// SIG undefined FUN_145c518a2(void)

void FUN_145c518a2(void)

{
  undefined8 uVar1;
  
  if (DAT_14c998258 == 0) {
    uVar1 = FUN_145c518d9();
    DAT_14c998258 = FUN_140002ddd(FUN_146289137,uVar1,L"JsonObjectWrapper");
  }
  return;
}



// FUNCTION 145c518d9 FUN_145c518d9 body=47 status=ok
// SIG undefined FUN_145c518d9(void)

longlong FUN_145c518d9(void)

{
  if (DAT_14c998218 == 0) {
    FUN_140f50038(&DAT_14c998218,&PTR_s__Script_JsonUtilities_149f7d5a8);
  }
  return DAT_14c998218;
}



// FUNCTION 145c51908 FUN_145c51908 body=55 status=ok
// SIG undefined FUN_145c51908(void)

void FUN_145c51908(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99c610 == 0) {
    uVar1 = FUN_145c5193f();
    DAT_14c99c610 = FUN_140002ddd(FUN_14628f7d5,uVar1,L"UVMapSettings");
  }
  return;
}



// FUNCTION 145c5193f FUN_145c5193f body=47 status=ok
// SIG undefined FUN_145c5193f(void)

longlong FUN_145c5193f(void)

{
  if (DAT_14c99c5f8 == 0) {
    FUN_140f50038(&DAT_14c99c5f8,&PTR_s__Script_StaticMeshDescription_149fa8fbf_1_149fa8fa0);
  }
  return DAT_14c99c5f8;
}



// FUNCTION 145c5197a FUN_145c5197a body=175 status=ok
// SIG undefined FUN_145c5197a(void)

undefined8 * FUN_145c5197a(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14ad33e50;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x408f400000000000;
  param_1[0xe] = 0x420c0000bf800000;
  param_1[0xf] = 0x4270000040333333;
  *(undefined4 *)(param_1 + 0x10) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x41c71eb8;
  *(undefined4 *)(param_1 + 0x11) = 0x41955c29;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x42c80000;
  param_1[0x12] = 0x83f800000;
  param_1[0x13] = 0xbf80000041200000;
  param_1[0x14] = 0;
  FUN_145c51a2a(param_1 + 0x15);
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  return param_1;
}



// FUNCTION 145c51a2a FUN_145c51a2a body=18 status=ok
// SIG undefined FUN_145c51a2a(void)

undefined8 * FUN_145c51a2a(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 145c51a3c FUN_145c51a3c body=55 status=ok
// SIG undefined FUN_145c51a3c(void)

void FUN_145c51a3c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb54808 == 0) {
    uVar1 = FUN_145c51a73();
    DAT_14cb54808 = FUN_140002ddd(FUN_1464adf25,uVar1,L"Hdr10PlusDisplayInfo");
  }
  return;
}



// FUNCTION 145c51a73 FUN_145c51a73 body=47 status=ok
// SIG undefined FUN_145c51a73(void)

longlong FUN_145c51a73(void)

{
  if (DAT_14cb54820 == 0) {
    FUN_140f50038(&DAT_14cb54820,&PTR_s__Script_Hdr10PlusGpuApi_14afe4498);
  }
  return DAT_14cb54820;
}



// FUNCTION 145c51aa2 FUN_145c51aa2 body=40 status=ok
// SIG undefined FUN_145c51aa2(void)

undefined8 FUN_145c51aa2(undefined8 param_1,int param_2)

{
  FUN_14150392a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c51ad0 FUN_145c51ad0 body=97 status=ok
// SIG undefined FUN_145c51ad0(void)

void FUN_145c51ad0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  FUN_145af9302(puVar1 + 5);
  *puVar1 = &PTR_FUN_14b4509a0;
  puVar1[5] = &PTR_LAB_14b450c40;
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar2 = 0;
  puVar2[2] = 0;
  puVar2[4] = 0;
  puVar1[0x2b] = puVar2;
  puVar1[0x2a] = puVar2;
  return;
}



// FUNCTION 145c51b32 FUN_145c51b32 body=55 status=ok
// SIG undefined FUN_145c51b32(void)

void FUN_145c51b32(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9b490 == 0) {
    uVar1 = FUN_145c51b69();
    DAT_14cb9b490 = FUN_140002ddd(FUN_146598860,uVar1,L"ColorGradingSpinBoxStyle");
  }
  return;
}



// FUNCTION 145c51b69 FUN_145c51b69 body=47 status=ok
// SIG undefined FUN_145c51b69(void)

longlong FUN_145c51b69(void)

{
  if (DAT_14cb9b478 == 0) {
    FUN_140f50038(&DAT_14cb9b478,&PTR_s__Script_AdvancedWidgets_14b55b60f_1_14b55b5f0);
  }
  return DAT_14cb9b478;
}



// FUNCTION 145c51b98 FUN_145c51b98 body=40 status=ok
// SIG undefined FUN_145c51b98(void)

undefined8 FUN_145c51b98(undefined8 param_1,int param_2)

{
  FUN_145c51bc0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c51bc0 FUN_145c51bc0 body=89 status=ok
// SIG undefined FUN_145c51bc0(void)

void FUN_145c51bc0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b635130;
  if (param_1[0x45] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x3e) = 0;
  if (param_1[0x3d] != 0) {
    FUN_1400020a8();
  }
  FUN_145c51c1a(param_1 + 0x35);
  FUN_1458888c8(param_1);
  return;
}



// FUNCTION 145c51c1a FUN_145c51c1a body=55 status=ok
// SIG undefined FUN_145c51c1a(void)

void FUN_145c51c1a(longlong *param_1)

{
  FUN_145c51c52(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c51c52 FUN_145c51c52 body=121 status=ok
// SIG undefined FUN_145c51c52(void)

void FUN_145c51c52(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144748838(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145c51ccc FUN_145c51ccc body=37 status=ok
// SIG undefined FUN_145c51ccc(void)

void FUN_145c51ccc(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x2e8);
  FUN_145c51cf2(param_2);
  return;
}



// FUNCTION 145c51cf2 FUN_145c51cf2 body=156 status=ok
// SIG undefined FUN_145c51cf2(void)

undefined8 * FUN_145c51cf2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_1 + 1);
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *param_1 = &PTR_FUN_14b775b80;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_145c51d8e(param_1 + 10);
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0xf00000d0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
  return param_1;
}



// FUNCTION 145c51d8e FUN_145c51d8e body=317 status=ok
// SIG undefined FUN_145c51d8e(void)

undefined8 * FUN_145c51d8e(undefined8 *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0xf00000d0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x3003;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0xf00000d0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0xf00000d0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0x3f800000;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0xf00000d0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0x3f800000;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  FUN_1446ddc76(param_1 + 0x46,"StasisOwner",1);
  return param_1;
}



// FUNCTION 145c51ecc FUN_145c51ecc body=37 status=ok
// SIG undefined FUN_145c51ecc(void)

void FUN_145c51ecc(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x610);
  FUN_145c51ef2(param_2);
  return;
}



// FUNCTION 145c51ef2 FUN_145c51ef2 body=167 status=ok
// SIG undefined FUN_145c51ef2(void)

undefined8 * FUN_145c51ef2(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1409e6ae2();
  *param_1 = &PTR_FUN_14b92b230;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  *(undefined4 *)(param_1 + 0x92) = 0x469c4000;
  *(undefined4 *)((longlong)param_1 + 0x494) = 0x457a0000;
  *(undefined4 *)(param_1 + 0x93) = 0x43fa0000;
  *(undefined4 *)((longlong)param_1 + 0x49c) = 0x3f000000;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  FUN_14126e142(param_1 + 0x97);
  *(undefined4 *)(param_1 + 0xbb) = 0x3e800000;
  uVar1 = DAT_14c8464e8;
  param_1[0xbc] = DAT_14c8464e0;
  param_1[0xbd] = uVar1;
  param_1[0xbe] = DAT_14c8464f0;
  param_1[0xbf] = 0x3f000000;
  param_1[0xc0] = 0x3f8000003f000000;
  *(undefined4 *)(param_1 + 0xc1) = 0;
  return param_1;
}



// FUNCTION 145c51fa6 FUN_145c51fa6 body=91 status=ok
// SIG undefined FUN_145c51fa6(void)

undefined8 * FUN_145c51fa6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x20);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = IModuleInterface::vftable;
  FUN_14118b488(puVar1 + 1);
  *puVar1 = &PTR_FUN_14ba50de0;
  puVar1[1] = &PTR_FUN_14ba50e20;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return puVar1;
}



// FUNCTION 145c52002 FUN_145c52002 body=55 status=ok
// SIG undefined FUN_145c52002(void)

void FUN_145c52002(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1ee78 == 0) {
    uVar1 = FUN_145c52039();
    DAT_14cc1ee78 = FUN_140002ddd(FUN_14190827e,uVar1,L"AnalyticsEventAttr");
  }
  return;
}


