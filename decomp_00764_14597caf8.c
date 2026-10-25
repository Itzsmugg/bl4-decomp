// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14597caf8 FUN_14597caf8 body=40 status=ok
// SIG undefined FUN_14597caf8(void)

undefined8 FUN_14597caf8(undefined8 param_1,int param_2)

{
  FUN_14597cb20();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14597cb20 FUN_14597cb20 body=189 status=ok
// SIG undefined FUN_14597cb20(void)

void FUN_14597cb20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b53b710;
  FUN_14597cbde(param_1 + 0x30);
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  FUN_14597ccbe(param_1 + 0x23);
  *(undefined4 *)(param_1 + 0x22) = 0;
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  FUN_14597ccf4(param_1 + 0x19);
  FUN_144760e21(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_14597cd82(param_1);
  return;
}



// FUNCTION 14597cbde FUN_14597cbde body=79 status=ok
// SIG undefined FUN_14597cbde(void)

void FUN_14597cbde(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 4);
  if (lVar1 != 0) {
    FUN_140457ffc(lVar1 + 0x28,param_1);
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_14597cc2e(param_1 + 0x10);
  return;
}



// FUNCTION 14597cc2e FUN_14597cc2e body=53 status=ok
// SIG undefined FUN_14597cc2e(void)

void FUN_14597cc2e(longlong *param_1)

{
  FUN_14597cc64();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14597cc64 FUN_14597cc64 body=90 status=ok
// SIG undefined FUN_14597cc64(void)

void FUN_14597cc64(longlong param_1)

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



// FUNCTION 14597ccbe FUN_14597ccbe body=53 status=ok
// SIG undefined FUN_14597ccbe(void)

void FUN_14597ccbe(longlong *param_1)

{
  FUN_14597cd2a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14597ccf4 FUN_14597ccf4 body=53 status=ok
// SIG undefined FUN_14597ccf4(void)

void FUN_14597ccf4(longlong *param_1)

{
  FUN_14597ce36();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14597cd2a FUN_14597cd2a body=88 status=ok
// SIG undefined FUN_14597cd2a(void)

void FUN_14597cd2a(longlong param_1)

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



// FUNCTION 14597cd82 FUN_14597cd82 body=179 status=ok
// SIG undefined FUN_14597cd82(void)

void FUN_14597cd82(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b532620;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
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



// FUNCTION 14597ce36 FUN_14597ce36 body=90 status=ok
// SIG undefined FUN_14597ce36(void)

void FUN_14597ce36(longlong param_1)

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



// FUNCTION 14597ce90 FUN_14597ce90 body=1217 status=ok
// SIG undefined FUN_14597ce90(void)

void FUN_14597ce90(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  code *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = (longlong *)(param_1 + -0x30);
  lVar3 = FUN_1459a8610(plVar1);
  if (lVar3 != 0) {
    local_48 = FUN_1461247a6;
    local_40 = 0;
    FUN_14597d56a(lVar3 + 0x18,&local_50,plVar1);
    *(undefined8 *)(param_1 + 0x38) = local_50;
  }
  lVar3 = (**(code **)(*plVar1 + 0x2b8))(plVar1);
  if (lVar3 != 0) {
    lVar4 = FUN_144a2f878();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      local_48 = FUN_1457e018e;
      local_40 = 0;
      FUN_14597d750(lVar3 + 0x77c0,&local_50,plVar1,&local_48);
      local_48 = FUN_146124806;
      local_40 = 0;
      FUN_14597d56a(lVar3 + 0x6090,&local_50,plVar1,&local_48);
      local_48 = FUN_146124806;
      local_40 = 0;
      FUN_14597d56a(lVar3 + 0x60a8,&local_50,plVar1,&local_48);
    }
  }
  lVar3 = FUN_1459a85ac(plVar1);
  if (lVar3 != 0) {
    local_48 = FUN_140d8daae;
    local_40 = 0;
    FUN_14597d352(lVar3,&local_50,plVar1,&local_48);
    local_48 = FUN_1457a6864;
    local_40 = 0;
    FUN_14597d352(lVar3 + 0x18,&local_50,plVar1,&local_48);
    local_48 = (code *)0x0;
    local_40 = 0;
    FUN_1446efa72(&local_48,0,3,0x10);
    pcVar2 = local_48;
    local_40 = 3;
    *(undefined ***)local_48 = &PTR_LAB_14b9a6df0;
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
    *(longlong *)(local_48 + 0x10) = lVar5;
    *(undefined ***)local_48 = &PTR_FUN_14b9a6d80;
    *(undefined8 *)(local_48 + 0x18) = 0;
    FUN_14485c47a(local_48 + 0x18,plVar1);
    *(longlong **)(pcVar2 + 0x20) = plVar1;
    FUN_14597d66a(lVar3 + 0x30,&local_50,&local_48);
    FUN_1449db362(&local_48);
  }
  lVar3 = FUN_140d8e3ae(plVar1);
  if (lVar3 != 0) {
    local_48 = FUN_140d8daae;
    local_40 = 0;
    FUN_14597d352(lVar3,&local_50,plVar1,&local_48);
    local_48 = FUN_1457a6864;
    local_40 = 0;
    FUN_14597d352(lVar3 + 0x18,&local_50,plVar1,&local_48);
    local_48 = (code *)0x0;
    local_40 = 0;
    FUN_1446efa72(&local_48,0,3,0x10);
    pcVar2 = local_48;
    local_40 = 3;
    *(undefined ***)local_48 = &PTR_LAB_14b9a6df0;
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
    *(longlong *)(local_48 + 0x10) = lVar5;
    *(undefined ***)local_48 = &PTR_FUN_14b9a6e60;
    *(undefined8 *)(local_48 + 0x18) = 0;
    FUN_14485c47a(local_48 + 0x18,plVar1);
    *(longlong **)(pcVar2 + 0x20) = plVar1;
    FUN_14597d66a(lVar3 + 0x30,&local_50,&local_48);
    FUN_1449db362(&local_48);
  }
  lVar3 = (**(code **)(*plVar1 + 0x180))(plVar1);
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x1f0) != 0)) {
    lVar3 = FUN_1400d6ce6();
    if (lVar3 != 0) {
      local_48 = FUN_141181c5e;
      local_40 = 0;
      FUN_14597d850(lVar3 + 400,&local_50,plVar1,&local_48);
      local_48 = FUN_140c3e41c;
      local_40 = 0;
      FUN_14597d452(lVar3 + 0x160,&local_50,plVar1,&local_48);
      local_48 = (code *)&DAT_145788c8a;
      local_40 = 0;
      FUN_14597d452(lVar3 + 0x178,&local_50,plVar1,&local_48);
    }
  }
  lVar3 = *(longlong *)(param_1 + -0x10);
  if (lVar3 != 0) {
    lVar4 = FUN_144a5dd5e();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      lVar4 = FUN_144a5dd5e();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) {
        local_48 = (code *)&LAB_145788c8c;
        local_40 = 0;
        FUN_14597d452(lVar3 + 0x3c58,&local_50,plVar1,&local_48);
        local_48 = (code *)&LAB_148e1f60a;
        local_40 = 0;
        FUN_14597d452(lVar3 + 0x3c70,&local_50,plVar1,&local_48);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14597d352 FUN_14597d352 body=254 status=ok
// SIG undefined FUN_14597d352(void)

undefined8
FUN_14597d352(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b9955b0;
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
  *local_48 = &PTR_FUN_14b9a6d10;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14140a2fc(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14597d452 FUN_14597d452 body=254 status=ok
// SIG undefined FUN_14597d452(void)

undefined8
FUN_14597d452(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
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
  *local_48 = &PTR_FUN_14b9a6f40;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14597d552 FUN_14597d552 body=24 status=ok
// SIG undefined FUN_14597d552(void)

bool FUN_14597d552(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14597d56a FUN_14597d56a body=254 status=ok
// SIG undefined FUN_14597d56a(void)

undefined8
FUN_14597d56a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b422d40;
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
  *local_48 = &PTR_FUN_14b9a6c30;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14591eb98(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14597d66a FUN_14597d66a body=216 status=ok
// SIG undefined FUN_14597d66a(void)

undefined8 * FUN_14597d66a(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 14597d750 FUN_14597d750 body=254 status=ok
// SIG undefined FUN_14597d750(void)

undefined8
FUN_14597d750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e35290;
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
  *local_48 = &PTR_FUN_14b9a6ca0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140feff30(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14597d850 FUN_14597d850 body=254 status=ok
// SIG undefined FUN_14597d850(void)

undefined8
FUN_14597d850(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b9a7080;
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
  *local_48 = &PTR_FUN_14b9a6ed0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14127eb6a(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14597d950 FUN_14597d950 body=54 status=ok
// SIG undefined FUN_14597d950(void)

void FUN_14597d950(void)

{
  FUN_14597d986();
  if (DAT_14c9a3ce0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c9a3cc0 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14597d986 FUN_14597d986 body=365 status=ok
// SIG undefined FUN_14597d986(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14597d986(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = 0x100000000;
  local_38 = &DAT_14c9a3cd0;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if (DAT_14c9a3ce8 != 0) {
    FUN_1449c0562(&local_40);
  }
  local_68 = &DAT_14c9a3cc0;
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  if (iStack_2c < *(int *)(local_38 + 0x18)) {
    do {
      lVar1 = *local_68;
      lVar2 = (longlong)iStack_4c;
      FUN_14597daf4(*(undefined8 *)(lVar1 + 0x10 + lVar2 * 0x28),
                    *(undefined4 *)(lVar1 + 0x18 + lVar2 * 0x28));
      if (*(longlong *)(lVar1 + 0x10 + lVar2 * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < *(int *)(local_58 + 0x18));
  }
  DAT_14c9a3cc8 = 0;
  if (DAT_14c9a3ccc != 0) {
    FUN_140549ad6(&DAT_14c9a3cc0,0);
  }
  _DAT_14c9a3cf0 = 0xffffffff;
  DAT_14c9a3ce8 = 0;
  if (0x80 < DAT_14c9a3cec) {
    DAT_14c9a3cec = 0x80;
    FUN_1446efbd8(&DAT_14c9a3cd0,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14597daf4 FUN_14597daf4 body=56 status=ok
// SIG undefined FUN_14597daf4(void)

void FUN_14597daf4(longlong param_1,int param_2)

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



// FUNCTION 14597db2c FUN_14597db2c body=86 status=ok
// SIG undefined FUN_14597db2c(void)

longlong * FUN_14597db2c(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 14597db82 FUN_14597db82 body=109 status=ok
// SIG undefined FUN_14597db82(void)

undefined8 * FUN_14597db82(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x1b8);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b40d300;
  _Dst = puVar1 + 2;
  memset(_Dst,0,0x1a8);
  FUN_14597dc8e(_Dst);
  *param_2 = _Dst;
  param_2[1] = puVar1;
  FUN_14597dbf0(param_2,_Dst);
  return param_2;
}



// FUNCTION 14597dbf0 FUN_14597dbf0 body=157 status=ok
// SIG undefined FUN_14597dbf0(void)

void FUN_14597dbf0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14597dc2a;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14597dc2a;
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
LAB_14597dc2a:
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
                    /* WARNING: Could not recover jumptable at 0x00014597dc89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14597dc8e FUN_14597dc8e body=265 status=ok
// SIG undefined FUN_14597dc8e(void)

undefined8 * FUN_14597dc8e(undefined8 *param_1)

{
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 7) = 2;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfd) = 0;
  *(undefined8 *)((longlong)param_1 + 0x105) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *param_1 = &PTR_FUN_14b1c1350;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 2;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2b] = 2;
  FUN_144a7a8f6(param_1 + 0x2c);
  *(undefined1 *)((longlong)param_1 + 0x16c) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0;
  return param_1;
}



// FUNCTION 14597dd98 FUN_14597dd98 body=87 status=ok
// SIG undefined FUN_14597dd98(void)

void FUN_14597dd98(longlong param_1)

{
  undefined8 uVar1;
  
  if (DAT_14c872bf0 == '\0') {
    uVar1 = FUN_14597ddf0(*(undefined1 *)(param_1 + 0x150),*(undefined8 *)(param_1 + 0x218));
    *(undefined8 *)(param_1 + 0x620) = uVar1;
    return;
  }
  *(undefined8 *)(param_1 + 0x620) = 0;
                    /* WARNING: Could not recover jumptable at 0x00014597ddec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x218) + 0x418))(*(longlong **)(param_1 + 0x218),0);
  return;
}



// FUNCTION 14597ddf0 FUN_14597ddf0 body=753 status=ok
// SIG undefined FUN_14597ddf0(void)

undefined8 * FUN_14597ddf0(undefined4 param_1,longlong *param_2)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_b8 [38];
  undefined2 local_92;
  longlong *local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_92 = FUN_144a82cbc(param_2);
  puVar4 = (undefined8 *)FUN_14001cc68(0x168,0x10);
  FUN_14597e166(puVar4,param_1);
  if (puVar4 != (undefined8 *)0x0) {
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
  }
  if (DAT_14caf3258 == DAT_14caf3284) {
    puVar5 = (undefined8 *)FUN_14001cc68(0xf0,0x10);
    FUN_147bf521a(puVar5,param_1,puVar4);
    (**(code **)(*param_2 + 0x418))(param_2,puVar5);
    puVar5[2] = param_2;
    puVar5[3] = param_2;
    uVar8 = local_78;
  }
  else {
    puVar5 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    *(undefined1 *)(puVar5 + 1) = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    *puVar5 = &PTR_FUN_14a9fd960;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = puVar4;
    if (puVar4 != (undefined8 *)0x0) {
      *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    }
    (**(code **)(*param_2 + 0x418))(param_2,puVar5);
    puVar5[2] = param_2;
    puVar5[3] = param_2;
    lVar7 = DAT_14caf3248;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar6 = 0;
    }
    else {
      bVar2 = FUN_144a61b4f();
      uVar6 = (ulonglong)(bVar2 ^ 1);
    }
    plVar10 = puVar5 + 4;
    if (*(char *)(lVar7 + uVar6) == '\x01') {
      uVar8 = FUN_14001cc68(0xf0,0x10);
      FUN_147bf521a(uVar8,param_1,puVar4);
      iVar3 = *(int *)(puVar5 + 5);
      *(uint *)(puVar5 + 5) = iVar3 + 1U;
      if (*(uint *)((longlong)puVar5 + 0x2c) < iVar3 + 1U) {
        FUN_14597e0e2(plVar10,iVar3);
      }
      *(undefined8 *)(*plVar10 + (longlong)iVar3 * 8) = uVar8;
    }
    local_68 = 0x100000000;
    local_60 = &DAT_14caf3260;
    local_58 = 0xffffffff;
    local_50 = 0;
    if (DAT_14caf3278 != 0) {
      FUN_1449c0562(&local_68);
    }
    local_78 = local_58;
    uVar8 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_88 = local_68;
    local_80 = local_60;
    local_90 = &DAT_14caf3250;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    if (local_78._4_4_ < *(int *)(local_60 + 0x18)) {
      iVar3 = local_78._4_4_;
      local_78 = uVar8;
      do {
        if (*(int *)(*local_90 + 0x10 + (longlong)iVar3 * 0x20) == 0) {
          plVar9 = (longlong *)0x0;
        }
        else {
          plVar9 = *(longlong **)((longlong)iVar3 * 0x20 + *local_90 + 8);
        }
        lVar7 = (**(code **)(*plVar9 + 0x58))(plVar9,param_1,local_92,puVar4);
        if (lVar7 != 0) {
          *(longlong **)(lVar7 + 0x10) = param_2;
          *(longlong **)(lVar7 + 0x18) = param_2;
          iVar3 = *(int *)(puVar5 + 5);
          *(uint *)(puVar5 + 5) = iVar3 + 1U;
          if (*(uint *)((longlong)puVar5 + 0x2c) < iVar3 + 1U) {
            FUN_14597e0e2(plVar10,iVar3);
          }
          *(longlong *)(*plVar10 + (longlong)iVar3 * 8) = lVar7;
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar3 = local_78._4_4_;
        uVar8 = local_78;
      } while (local_78._4_4_ < *(int *)(local_80 + 0x18));
    }
  }
  local_78 = uVar8;
  if (puVar4 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14597e0e2 FUN_14597e0e2 body=132 status=ok
// SIG undefined FUN_14597e0e2(void)

void FUN_14597e0e2(longlong param_1,int param_2)

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



// FUNCTION 14597e166 FUN_14597e166 body=179 status=ok
// SIG undefined FUN_14597e166(void)

void FUN_14597e166(undefined8 *param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_14a916998;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 2;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[7] = 2;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0x400000000;
  param_1[0x1e] = 0x4000000000000000;
  param_1[0x24] = 0;
  param_1[0x25] = 0x400000000;
  param_1[0x28] = 0;
  param_1[0x29] = 0x200000000;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  if (1.0 < DAT_14c761580) {
    *(float *)((longlong)param_1 + 0xf4) = DAT_14c761580;
  }
  *(undefined4 *)(param_1 + 0x1f) = DAT_14c761578;
  *(undefined4 *)((longlong)param_1 + 0xfc) = DAT_14c76157c;
  return;
}



// FUNCTION 14597e21a FUN_14597e21a body=782 status=ok
// SIG undefined FUN_14597e21a(void)

void FUN_14597e21a(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int *piVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  undefined4 *puVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  PSRWLOCK local_98;
  longlong local_90;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_140170290();
  local_a0 = *(longlong **)(param_1 + -0x10);
  if (local_a0 != (longlong *)0x0) {
    lVar8 = FUN_144a5dd5e();
    if ((*(int *)(lVar8 + 0x38) <= *(int *)(local_a0[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(local_a0[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
        lVar8 + 0x30)) goto LAB_14597e288;
  }
  local_a0 = (longlong *)0x0;
LAB_14597e288:
  lVar8 = FUN_14140a722();
  if (lVar8 != 0) {
    local_78 = 0;
    uStack_70 = 0;
    FUN_1457b0c52(lVar8);
    FUN_1449027d0(param_1 + -0x30,&local_88);
    plVar5 = *(longlong **)(local_88 + 0x10);
    local_98 = (PSRWLOCK)(plVar5 + 4);
    AcquireSRWLockExclusive(local_98);
    plVar7 = local_80;
    *(int *)(plVar5 + 3) = (int)plVar5[3] + 1;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_80 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar4 = (int *)((longlong)plVar7 + 0xc);
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    iVar10 = *(int *)((longlong)plVar5 + 0xc);
    FUN_140f7abbb(*plVar5,(int)plVar5[1]);
    *(undefined4 *)(plVar5 + 1) = 0;
    if ((iVar10 < 0) && (*(int *)((longlong)plVar5 + 0xc) != 0)) {
      FUN_148e34dd2(plVar5);
    }
    *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
    lVar8 = (longlong)(int)uStack_70;
    if (lVar8 != 0) {
      local_90 = local_78;
      local_a0 = local_a0 + 0x136;
      lVar12 = 0;
      do {
        lVar9 = *(longlong *)(local_90 + lVar12);
        if (lVar9 != 0) {
          FUN_14597e52a(lVar9 + 0x18,&local_88);
          plVar7 = local_80;
          if ((local_88 == 0) || (*(char *)(local_88 + 0x50) == '\0')) {
            if (local_80 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_80 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_80)(local_80);
                LOCK();
                piVar4 = (int *)((longlong)plVar7 + 0xc);
                *piVar4 = *piVar4 + -1;
                UNLOCK();
                if (*piVar4 == 0) {
                  (**(code **)(*plVar7 + 0x10))(plVar7);
                }
              }
            }
            *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
            iVar10 = (int)plVar5[1];
            *(uint *)(plVar5 + 1) = iVar10 + 1U;
            if (*(uint *)((longlong)plVar5 + 0xc) < iVar10 + 1U) {
              FUN_14597e5b8(plVar5,iVar10);
            }
            lVar6 = *plVar5;
            lVar13 = (longlong)iVar10 * 0x40;
            lVar2 = lVar6 + lVar13;
            puVar3 = (undefined8 *)(lVar6 + 0x30 + lVar13);
            *puVar3 = 0;
            puVar3[1] = 0;
            puVar3 = (undefined8 *)(lVar6 + 0x20 + lVar13);
            *puVar3 = 0;
            puVar3[1] = 0;
            puVar3 = (undefined8 *)(lVar6 + 0x10 + lVar13);
            *puVar3 = 0;
            puVar3[1] = 0;
            *(undefined8 *)(lVar6 + lVar13) = 0;
            ((undefined8 *)(lVar6 + lVar13))[1] = 0;
            puVar11 = *(undefined4 **)(lVar9 + 8);
            if (puVar11 == (undefined4 *)0x0) {
              puVar11 = &DAT_14c9485f0;
            }
            FUN_1447715ec(lVar2,puVar11);
            piVar4 = (int *)(lVar6 + 0x28 + lVar13);
            *piVar4 = *piVar4 + 1;
            puVar11 = *(undefined4 **)(lVar9 + 8);
            if (puVar11 == (undefined4 *)0x0) {
              puVar11 = &DAT_14c9485f0;
            }
            FUN_144a7660c(puVar11,&local_88,1);
            lVar9 = (**(code **)(*local_a0 + 0x18))(local_a0,&local_88);
            iVar10 = *(int *)(lVar6 + 0x38 + lVar13);
            if ((lVar9 != *(longlong *)(lVar6 + 0x30 + lVar13)) ||
               (bVar14 = iVar10 == 0, iVar10 = 0, bVar14)) {
              *(longlong *)(lVar2 + 0x30) = lVar9;
              *(int *)(lVar2 + 0x38) = iVar10 + 1;
            }
          }
          else if (local_80 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_80 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_80)(local_80);
              LOCK();
              piVar4 = (int *)((longlong)plVar7 + 0xc);
              *piVar4 = *piVar4 + -1;
              UNLOCK();
              if (*piVar4 == 0) {
                (**(code **)(*plVar7 + 0x10))(plVar7);
              }
            }
          }
        }
        lVar12 = lVar12 + 8;
      } while (lVar8 * 8 != lVar12);
    }
    ReleaseSRWLockExclusive(local_98);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14597e52a FUN_14597e52a body=83 status=ok
// SIG undefined FUN_14597e52a(void)

longlong * FUN_14597e52a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_14597e57e();
    cVar2 = FUN_1448093f4(lVar1,uVar3);
    if (cVar2 != '\0') {
      *param_2 = *param_1;
      lVar1 = param_1[1];
      param_2[1] = lVar1;
      if (lVar1 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 14597e57e FUN_14597e57e body=57 status=ok
// SIG undefined FUN_14597e57e(void)

void FUN_14597e57e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba7788 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba7788 = FUN_140002ddd(FUN_1465ccfbe,uVar1,L"OakCurrencyGameData");
  }
  return;
}



// FUNCTION 14597e5b8 FUN_14597e5b8 body=132 status=ok
// SIG undefined FUN_14597e5b8(void)

void FUN_14597e5b8(longlong param_1,int param_2)

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



// FUNCTION 14597e648 FUN_14597e648 body=128 status=ok
// SIG undefined FUN_14597e648(void)

undefined8 * FUN_14597e648(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14597e6ca();
  *param_1 = &PTR_FUN_14a16b6b0;
  *(undefined4 *)(param_1 + 0x16) = 0x2225f48c;
  param_1[0x17] = "arraydef";
  FUN_1400b22c2(local_28,"ToolsDev.Testing.ArrayDef");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14597e6ca FUN_14597e6ca body=336 status=ok
// SIG undefined FUN_14597e6ca(void)

undefined8 * FUN_14597e6ca(undefined8 *param_1)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  longlong local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140c6b9f8();
  *param_1 = &PTR_FUN_14a16bc30;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x354) = 0;
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_1446ddda2(&local_68,"class",0);
  FUN_1404e49fa(param_1 + 0x5a,&local_68);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_1446ddda2(&local_68,"parent",0);
  FUN_1404e49fa(param_1 + 0x5f,&local_68);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14597e81c FUN_14597e81c body=40 status=ok
// SIG undefined FUN_14597e81c(void)

undefined8 FUN_14597e81c(undefined8 param_1,int param_2)

{
  FUN_14597e844();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14597e844 FUN_14597e844 body=75 status=ok
// SIG undefined FUN_14597e844(void)

void FUN_14597e844(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b848970;
  FUN_14597ea40(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_14597e890(param_1 + 6);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 14597e890 FUN_14597e890 body=53 status=ok
// SIG undefined FUN_14597e890(void)

void FUN_14597e890(longlong *param_1)

{
  FUN_14597e8c6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14597e8c6 FUN_14597e8c6 body=339 status=ok
// SIG undefined FUN_14597e8c6(void)

void FUN_14597e8c6(longlong *param_1)

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
      FUN_14597ea1a(*(undefined8 *)(lVar2 + 8 + lVar3),*(undefined4 *)(lVar2 + 0x10 + lVar3));
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
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14597ea1a FUN_14597ea1a body=38 status=ok
// SIG undefined FUN_14597ea1a(void)

void FUN_14597ea1a(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14597ea40(param_1);
    param_1 = param_1 + 0x48;
  }
  return;
}



// FUNCTION 14597ea40 FUN_14597ea40 body=78 status=ok
// SIG undefined FUN_14597ea40(void)

void FUN_14597ea40(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14597ea8e FUN_14597ea8e body=85 status=ok
// SIG undefined FUN_14597ea8e(void)

void FUN_14597ea8e(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x210))();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,param_2,1);
    FUN_14140a72a(plVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00014597ead6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x58))(plVar1);
    return;
  }
  return;
}



// FUNCTION 14597eae4 FUN_14597eae4 body=133 status=ok
// SIG undefined FUN_14597eae4(void)

undefined8 * FUN_14597eae4(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  PSRWLOCK SRWLock;
  
  lVar3 = FUN_1401af92e(FUN_1456d6024);
  SRWLock = (PSRWLOCK)(*(longlong *)(lVar3 + 0x68) + 0x20);
  AcquireSRWLockShared(SRWLock);
  lVar3 = FUN_1401af92e(FUN_1456d6024);
  lVar3 = *(longlong *)(lVar3 + 0x68);
  *param_1 = 0;
  iVar1 = *(int *)(lVar3 + 0x18);
  uVar2 = *(undefined8 *)(lVar3 + 0x10);
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_140b856de(param_1,iVar1,0);
    FUN_140b8566a(*param_1,uVar2,iVar1);
  }
  ReleaseSRWLockShared(SRWLock);
  return param_1;
}



// FUNCTION 14597eb6a FUN_14597eb6a body=40 status=ok
// SIG undefined FUN_14597eb6a(void)

undefined8 FUN_14597eb6a(undefined8 param_1,int param_2)

{
  FUN_14597eb92();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14597eb92 FUN_14597eb92 body=58 status=ok
// SIG undefined FUN_14597eb92(void)

void FUN_14597eb92(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_149e60300;
  lVar1 = param_1[5];
  if (lVar1 != 0) {
    FUN_14597ebcc(lVar1);
    FUN_1400020a8(lVar1);
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14597ebcc FUN_14597ebcc body=49 status=ok
// SIG undefined FUN_14597ebcc(void)

void FUN_14597ebcc(LPCRITICAL_SECTION param_1)

{
  if (param_1[1].OwningThread != (HANDLE)0x0) {
    FUN_1400020a8();
  }
  if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection(param_1);
  return;
}



// FUNCTION 14597ec14 FUN_14597ec14 body=205 status=ok
// SIG undefined FUN_14597ec14(void)

void FUN_14597ec14(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar5 = FUN_1447210f0();
  FUN_1404d1e78(&local_28,uVar5);
  if (((local_28 != 0) && (local_20 != (longlong *)0x0)) && (0 < (int)local_20[1])) {
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
    lVar6 = 0;
    if (plVar7 != (longlong *)0x0) {
      lVar6 = local_28;
    }
    FUN_14140a7a0(lVar6,param_1 + 0x500);
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
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)local_20 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14597ece2 FUN_14597ece2 body=385 status=ok
// SIG undefined FUN_14597ece2(void)

void FUN_14597ece2(longlong param_1)

{
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined2 **)(param_1 + 0x40) = &DAT_14a171d50;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined2 **)(param_1 + 0x60) = &DAT_14a171d50;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined **)(param_1 + 0x48) = &DAT_14cb70058;
  *(undefined **)(param_1 + 0x68) = &DAT_14cb70058;
  *(undefined2 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x92) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x101) = 0;
  *(undefined8 *)(param_1 + 0x109) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0xd4) = 0;
  *(undefined8 *)(param_1 + 0xdc) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0x144) = 1;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x174) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1c4) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x204) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x20c) = 0x3ff00000;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x238) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x240) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  return;
}



// FUNCTION 14597ee72 FUN_14597ee72 body=45 status=ok
// SIG undefined FUN_14597ee72(void)

undefined8 FUN_14597ee72(undefined8 param_1,int param_2)

{
  FUN_14597eea0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 14597eea0 FUN_14597eea0 body=71 status=ok
// SIG undefined FUN_14597eea0(void)

void FUN_14597eea0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a18e380;
  FUN_14597eee7(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 14597eee7 FUN_14597eee7 body=54 status=ok
// SIG undefined FUN_14597eee7(void)

void FUN_14597eee7(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140a87f81(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 14597ef1e FUN_14597ef1e body=40 status=ok
// SIG undefined FUN_14597ef1e(void)

undefined8 FUN_14597ef1e(undefined8 param_1,int param_2)

{
  FUN_14597ef46();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14597ef46 FUN_14597ef46 body=98 status=ok
// SIG undefined FUN_14597ef46(void)

void FUN_14597ef46(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aca1100;
  if ((param_1[0x13] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x13] + 0x50));
  }
  if ((param_1[0xc] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0xc] + 0x50));
  }
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 14597efb6 FUN_14597efb6 body=45 status=ok
// SIG undefined FUN_14597efb6(void)

undefined8 FUN_14597efb6(undefined8 param_1,int param_2)

{
  FUN_14597efe4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 14597efe4 FUN_14597efe4 body=76 status=ok
// SIG undefined FUN_14597efe4(void)

void FUN_14597efe4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b182080;
  FUN_14597f030(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  FUN_144a659aa(param_1);
  return;
}



// FUNCTION 14597f030 FUN_14597f030 body=49 status=ok
// SIG undefined FUN_14597f030(void)

void FUN_14597f030(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14597f07a FUN_14597f07a body=38 status=ok
// SIG undefined FUN_14597f07a(void)

undefined8 FUN_14597f07a(undefined8 param_1,int param_2)

{
  FUN_14597f0a0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14597f0a0 FUN_14597f0a0 body=158 status=ok
// SIG undefined FUN_14597f0a0(void)

void FUN_14597f0a0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *param_1 = &PTR_FUN_14a9f8d60;
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    plVar3 = param_1 + 0x18;
    if ((longlong *)param_1[0x16] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x16];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  plVar3 = (longlong *)param_1[0xe];
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
  lVar4 = 0x40;
  do {
    if (*(longlong *)((longlong)param_1 + lVar4) != 0) {
      FUN_1400020a8();
    }
    lVar4 = lVar4 + -0x10;
  } while (lVar4 != 0x20);
  FUN_14597f13e(param_1);
  return;
}



// FUNCTION 14597f13e FUN_14597f13e body=1 status=ok
// SIG undefined FUN_14597f13e(void)

void FUN_14597f13e(void)

{
  return;
}



// FUNCTION 14597f140 FUN_14597f140 body=29 status=ok
// SIG undefined FUN_14597f140(void)

void FUN_14597f140(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14597f15e FUN_14597f15e body=54 status=ok
// SIG undefined FUN_14597f15e(void)

undefined8 * FUN_14597f15e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9c1200;
  FUN_145cd53b8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14597f194 FUN_14597f194 body=29 status=ok
// SIG undefined FUN_14597f194(void)

void FUN_14597f194(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14597f1b2 FUN_14597f1b2 body=54 status=ok
// SIG undefined FUN_14597f1b2(void)

undefined8 * FUN_14597f1b2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9c54d0;
  FUN_14576e738(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14597f1e8 FUN_14597f1e8 body=150 status=ok
// SIG undefined FUN_14597f1e8(void)

void FUN_14597f1e8(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x238,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x238)) {
      uVar5 = uVar4 / 0x238 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x238,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14597f288 FUN_14597f288 body=97 status=ok
// SIG undefined FUN_14597f288(void)

undefined8 * FUN_14597f288(undefined8 *param_1)

{
  FUN_14597f2ea();
  *param_1 = &PTR_FUN_14bc43610;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  FUN_14020fad6(param_1 + 0x20,L"UseInverseSquaredFalloff");
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  FUN_14020fad6(param_1 + 0x22,L"LightFalloffExponent");
  return param_1;
}



// FUNCTION 14597f2ea FUN_14597f2ea body=201 status=ok
// SIG undefined FUN_14597f2ea(void)

undefined8 * FUN_14597f2ea(undefined8 *param_1)

{
  FUN_14597f3b4();
  *param_1 = &PTR_FUN_14bc42db0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  FUN_14020fad6(param_1 + 0x14,L"IntensityUnits");
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  FUN_14020fad6(param_1 + 0x16,L"AttenuationRadius");
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  FUN_14020fad6(param_1 + 0x18,L"IESTexture");
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  FUN_14020fad6(param_1 + 0x1a,L"UseIESBrightness");
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  FUN_14020fad6(param_1 + 0x1c,L"IESBrightnessScale");
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  FUN_14020fad6(param_1 + 0x1e,L"Rotation");
  return param_1;
}



// FUNCTION 14597f3b4 FUN_14597f3b4 body=137 status=ok
// SIG undefined FUN_14597f3b4(void)

undefined8 * FUN_14597f3b4(undefined8 *param_1)

{
  FUN_1410832cc();
  *param_1 = &PTR_FUN_14bc41be0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_14020fad6(param_1 + 0xc,L"LightColor");
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_14020fad6(param_1 + 0xe,L"LightIntensity");
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  FUN_14020fad6(param_1 + 0x10,L"Temperature");
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  FUN_14020fad6(param_1 + 0x12,L"UseTemperature");
  return param_1;
}



// FUNCTION 14597f43e FUN_14597f43e body=40 status=ok
// SIG undefined FUN_14597f43e(void)

undefined8 FUN_14597f43e(undefined8 param_1,int param_2)

{
  FUN_14597f466();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14597f466 FUN_14597f466 body=653 status=ok
// SIG undefined FUN_14597f466(void)

void FUN_14597f466(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b5dea80;
  param_1[0x72] = &PTR_FUN_14b5df0f0;
  param_1[0x73] = &PTR_FUN_14b5df110;
  param_1[0x74] = &PTR_FUN_14b5df140;
  param_1[0x75] = &PTR_FUN_14b5df150;
  param_1[0x76] = &PTR_FUN_14b5df1c0;
  param_1[0x77] = &PTR_FUN_14b5df1f0;
  param_1[0x78] = &PTR_FUN_14b5df220;
  param_1[0x7f] = &PTR_FUN_14b5df2d0;
  param_1[0x80] = &PTR_FUN_14b5df340;
  param_1[0x81] = &PTR_FUN_14b5df3b0;
  param_1[0x82] = &PTR_FUN_14b5df3e0;
  param_1[0x83] = &PTR_FUN_14b5df420;
  param_1[0x84] = &PTR_FUN_14b5df4c0;
  param_1[0x85] = &PTR_FUN_14b5df4e0;
  param_1[0x89] = &PTR_FUN_14b5df500;
  param_1[0x8a] = &PTR_FUN_14b5df5c0;
  param_1[0x8b] = &PTR_FUN_14b5df640;
  param_1[0x8c] = &PTR_FUN_14b5df690;
  param_1[0x8d] = &PTR_FUN_14b5df6d0;
  param_1[0x8e] = &PTR_FUN_14b5df6f0;
  param_1[0x8f] = &PTR_FUN_14b5df710;
  param_1[0x90] = &PTR_FUN_14b5df730;
  param_1[0x91] = &PTR_FUN_14b5df750;
  param_1[0x92] = &PTR_FUN_14b5df770;
  param_1[0x93] = &PTR_FUN_14b5df790;
  param_1[0x94] = &PTR_FUN_14b5df7b0;
  param_1[0x95] = &PTR_FUN_14b5df7d0;
  param_1[0x96] = &PTR_FUN_14b5df7f0;
  param_1[0x34b] = &PTR_FUN_14b5df810;
  param_1[0x352] = &PTR_FUN_14b5df820;
  param_1[0x353] = &PTR_FUN_14b5df860;
  param_1[0x354] = &PTR_FUN_14b5df8a0;
  param_1[0x355] = &PTR_FUN_14b5df8f0;
  param_1[0x356] = &PTR_FUN_14b5df920;
  param_1[0x359] = &PTR_FUN_14b5df960;
  param_1[0x35a] = &PTR_FUN_14b5df970;
  param_1[0x35b] = &PTR_FUN_14b5df9a0;
  param_1[0x35c] = &PTR_FUN_14b5dfa40;
  FUN_14597f6f3(param_1[0x4d5],*(undefined4 *)(param_1 + 0x4d6));
  if (param_1[0x4d5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4cf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4c1] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4bf] != 0) {
    FUN_1400020a8();
  }
  FUN_140639172(param_1);
  return;
}



// FUNCTION 14597f6f3 FUN_14597f6f3 body=27 status=ok
// SIG undefined FUN_14597f6f3(void)

void FUN_14597f6f3(longlong param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 != 0) {
    pcVar1 = (char *)(param_1 + 0x30);
    do {
      if (*pcVar1 == '\x01') {
        *pcVar1 = '\0';
      }
      pcVar1 = pcVar1 + 0x38;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14597f716 FUN_14597f716 body=111 status=ok
// SIG undefined FUN_14597f716(void)

undefined8 FUN_14597f716(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  uVar1 = DAT_14cbc3088;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = param_1;
  FUN_1446dcdd4(local_40);
  uVar1 = FUN_144837462(uVar1,local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14597f786 FUN_14597f786 body=28 status=ok
// SIG undefined FUN_14597f786(void)

void FUN_14597f786(undefined8 param_1)

{
  FUN_14597f7a2();
  FUN_14140e334(param_1,1);
  return;
}



// FUNCTION 14597f7a2 FUN_14597f7a2 body=28 status=ok
// SIG undefined FUN_14597f7a2(void)

void FUN_14597f7a2(undefined8 param_1)

{
  FUN_14597f7be();
  FUN_14597f7c0(param_1,1);
  return;
}



// FUNCTION 14597f7be FUN_14597f7be body=1 status=ok
// SIG undefined FUN_14597f7be(void)

void FUN_14597f7be(void)

{
  return;
}



// FUNCTION 14597f7c0 FUN_14597f7c0 body=229 status=ok
// SIG undefined FUN_14597f7c0(void)

void FUN_14597f7c0(longlong param_1,char param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined4 local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_14597f8a6();
  if (lVar2 != 0) {
    if (param_2 != '\0') {
      uVar1 = FUN_14140e32c(lVar2);
      *(undefined4 *)(param_1 + 0x688) = uVar1;
      if (*(longlong *)(param_1 + 0x680) == 0) {
        local_48 = &LAB_1457f3750;
        local_40 = 0;
        FUN_14597f8ee(local_38,param_1);
        FUN_140feff30(lVar2 + 0x6f0,&local_48,local_38);
        FUN_1449db362(local_38);
        *(undefined1 **)(param_1 + 0x680) = local_48;
      }
      goto LAB_14597f885;
    }
    if (*(longlong *)(param_1 + 0x680) == 0) goto LAB_14597f885;
    FUN_14480f766(lVar2 + 0x6f0);
  }
  *(undefined8 *)(param_1 + 0x680) = 0;
LAB_14597f885:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14597f8a6 FUN_14597f8a6 body=72 status=ok
// SIG undefined FUN_14597f8a6(void)

longlong FUN_14597f8a6(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_140612812();
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x170), lVar1 != 0)) {
    lVar2 = FUN_1411531be();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 14597f8ee FUN_14597f8ee body=428 status=ok
// SIG undefined FUN_14597f8ee(void)

longlong * FUN_14597f8ee(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_14597f9ce:
    *puVar5 = &PTR_LAB_149e35290;
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
    *puVar5 = &PTR_FUN_14b435480;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14597f9ce;
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
    *puVar5 = &PTR_LAB_149e35290;
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
    *puVar5 = &PTR_FUN_14b435480;
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



// FUNCTION 14597fa9a FUN_14597fa9a body=42 status=ok
// SIG undefined FUN_14597fa9a(void)

void FUN_14597fa9a(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14597fada(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014597faaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x38))();
    return;
  }
  uVar2 = FUN_14597fc32();
  FUN_14152c15a(uVar2);
  return;
}



// FUNCTION 14597fac4 FUN_14597fac4 body=21 status=ok
// SIG undefined FUN_14597fac4(void)

void FUN_14597fac4(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14597fc32();
  FUN_14152c15a(uVar1);
  return;
}



// FUNCTION 14597fada FUN_14597fada body=191 status=ok
// SIG undefined FUN_14597fada(void)

longlong FUN_14597fada(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_14597fb9a();
  lVar3 = *param_1;
  if (DAT_14cbc5c30 != DAT_14cbc5c5c) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14cbc5c60;
    if (DAT_14cbc5c68 != (undefined *)0x0) {
      puVar7 = DAT_14cbc5c68;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14cbc5c70 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14cbc5c28 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  lVar5 = DAT_14cbc5c20;
  if (lVar3 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 14597fb9a FUN_14597fb9a body=152 status=ok
// SIG undefined FUN_14597fb9a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14597fb9a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc5c78) {
    FUN_144b3d300(&DAT_14cbc5c78);
    if (DAT_14cbc5c78 == -1) {
      DAT_14cbc5c48 = 0;
      DAT_14cbc5c50 = 0;
      DAT_14cbc5c28 = 0;
      _DAT_14cbc5c30 = 0;
      _DAT_14cbc5c54 = 0xffffffff00000080;
      DAT_14cbc5c5c = 0;
      DAT_14cbc5c68 = 0;
      DAT_14cbc5c70 = 0;
      atexit(FUN_1440e7c49);
      _Init_thread_footer(&DAT_14cbc5c78);
      return;
    }
  }
  return;
}



// FUNCTION 14597fc32 FUN_14597fc32 body=111 status=ok
// SIG undefined FUN_14597fc32(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14597fc32(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar2 = DAT_14cbc5c80;
  if (DAT_14cbc5c80 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_140595974(0x1af00,0);
    lVar4 = 0xf;
    puVar1 = puVar2;
    do {
      puVar3 = puVar1 + 0x35e;
      *puVar1 = puVar3;
      lVar4 = lVar4 + -1;
      puVar1 = puVar3;
    } while (lVar4 != 0);
    *puVar3 = DAT_14cbc5c80;
    DAT_14cbc5c88 = DAT_14cbc5c88 + 0x10;
  }
  DAT_14cbc5c80 = (undefined8 *)*puVar2;
  _DAT_14cbc5c8c = _DAT_14cbc5c8c + 1;
  return;
}



// FUNCTION 14597fca2 FUN_14597fca2 body=42 status=ok
// SIG undefined FUN_14597fca2(void)

void FUN_14597fca2(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14597fce2(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014597fcb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x38))();
    return;
  }
  uVar2 = FUN_14597fe3a();
  FUN_14603922c(uVar2);
  return;
}



// FUNCTION 14597fccc FUN_14597fccc body=21 status=ok
// SIG undefined FUN_14597fccc(void)

void FUN_14597fccc(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14597fe3a();
  FUN_14603922c(uVar1);
  return;
}



// FUNCTION 14597fce2 FUN_14597fce2 body=191 status=ok
// SIG undefined FUN_14597fce2(void)

longlong FUN_14597fce2(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_14597fda2();
  lVar3 = *param_1;
  if (DAT_14cbcb0f8 != DAT_14cbcb124) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14cbcb128;
    if (DAT_14cbcb130 != (undefined *)0x0) {
      puVar7 = DAT_14cbcb130;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14cbcb138 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14cbcb0f0 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  lVar5 = DAT_14cbcb0e8;
  if (lVar3 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 14597fda2 FUN_14597fda2 body=152 status=ok
// SIG undefined FUN_14597fda2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14597fda2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbcb140) {
    FUN_144b3d300(&DAT_14cbcb140);
    if (DAT_14cbcb140 == -1) {
      DAT_14cbcb110 = 0;
      DAT_14cbcb118 = 0;
      DAT_14cbcb0f0 = 0;
      _DAT_14cbcb0f8 = 0;
      _DAT_14cbcb11c = 0xffffffff00000080;
      DAT_14cbcb124 = 0;
      DAT_14cbcb130 = 0;
      DAT_14cbcb138 = 0;
      atexit(FUN_1441603fa);
      _Init_thread_footer(&DAT_14cbcb140);
      return;
    }
  }
  return;
}



// FUNCTION 14597fe3a FUN_14597fe3a body=111 status=ok
// SIG undefined FUN_14597fe3a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14597fe3a(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar2 = DAT_14cbcb148;
  if (DAT_14cbcb148 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_140595974(0x5900,0);
    lVar4 = 0xf;
    puVar1 = puVar2;
    do {
      puVar3 = puVar1 + 0xb2;
      *puVar1 = puVar3;
      lVar4 = lVar4 + -1;
      puVar1 = puVar3;
    } while (lVar4 != 0);
    *puVar3 = DAT_14cbcb148;
    DAT_14cbcb150 = DAT_14cbcb150 + 0x10;
  }
  DAT_14cbcb148 = (undefined8 *)*puVar2;
  _DAT_14cbcb154 = _DAT_14cbcb154 + 1;
  return;
}



// FUNCTION 14597feaa FUN_14597feaa body=42 status=ok
// SIG undefined FUN_14597feaa(void)

void FUN_14597feaa(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14597feea(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014597febf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x38))();
    return;
  }
  uVar2 = FUN_14140e5e0();
  FUN_145cda230(uVar2);
  return;
}



// FUNCTION 14597fed4 FUN_14597fed4 body=21 status=ok
// SIG undefined FUN_14597fed4(void)

void FUN_14597fed4(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14140e5e0();
  FUN_145cda230(uVar1);
  return;
}



// FUNCTION 14597feea FUN_14597feea body=191 status=ok
// SIG undefined FUN_14597feea(void)

longlong FUN_14597feea(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_14597ffaa();
  lVar3 = *param_1;
  if (DAT_14cbd0008 != DAT_14cbd0034) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14cbd0038;
    if (DAT_14cbd0040 != (undefined *)0x0) {
      puVar7 = DAT_14cbd0040;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14cbd0048 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14cbd0000 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  lVar5 = DAT_14cbcfff8;
  if (lVar3 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 14597ffaa FUN_14597ffaa body=152 status=ok
// SIG undefined FUN_14597ffaa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14597ffaa(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbd0050) {
    FUN_144b3d300(&DAT_14cbd0050);
    if (DAT_14cbd0050 == -1) {
      DAT_14cbd0020 = 0;
      DAT_14cbd0028 = 0;
      DAT_14cbd0000 = 0;
      _DAT_14cbd0008 = 0;
      _DAT_14cbd002c = 0xffffffff00000080;
      DAT_14cbd0034 = 0;
      DAT_14cbd0040 = 0;
      DAT_14cbd0048 = 0;
      atexit(FUN_1441f8dad);
      _Init_thread_footer(&DAT_14cbd0050);
      return;
    }
  }
  return;
}



// FUNCTION 145980042 FUN_145980042 body=303 status=ok
// SIG undefined FUN_145980042(void)

undefined4 * FUN_145980042(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_1459801f4(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2;
  cVar4 = FUN_145980172(param_1,uVar9,local_40,&local_4c);
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
      FUN_1459802d8(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145980172 FUN_145980172 body=130 status=ok
// SIG undefined FUN_145980172(void)

undefined8 FUN_145980172(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_14584050c((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1459801f4 FUN_1459801f4 body=227 status=ok
// SIG undefined FUN_1459801f4(void)

int * FUN_1459801f4(longlong *param_1,int *param_2)

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



// FUNCTION 1459802d8 FUN_1459802d8 body=456 status=ok
// SIG undefined FUN_1459802d8(void)

void FUN_1459802d8(longlong *param_1)

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



// FUNCTION 1459804a2 FUN_1459804a2 body=75 status=ok
// SIG undefined FUN_1459804a2(void)

void FUN_1459804a2(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 9000) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x2320);
    lVar2 = (longlong)*(int *)(param_1 + 9000) << 5;
    do {
      if (*plVar1 == *param_2) {
        return;
      }
      plVar1 = plVar1 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  plVar1 = (longlong *)FUN_1459804ee(param_1 + 0x2320);
  *plVar1 = *param_2;
  return;
}



// FUNCTION 1459804ee FUN_1459804ee body=64 status=ok
// SIG undefined FUN_1459804ee(void)

longlong FUN_1459804ee(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145980550(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x20 + *param_1;
  FUN_14598052e(lVar2,1);
  return lVar2;
}



// FUNCTION 14598052e FUN_14598052e body=34 status=ok
// SIG undefined FUN_14598052e(void)

void FUN_14598052e(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0x100;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 145980550 FUN_145980550 body=132 status=ok
// SIG undefined FUN_145980550(void)

void FUN_145980550(longlong param_1,int param_2)

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



// FUNCTION 1459805d4 FUN_1459805d4 body=618 status=ok
// SIG undefined FUN_1459805d4(void)

void FUN_1459805d4(longlong param_1)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  undefined8 *local_b0;
  undefined4 local_a8;
  undefined2 local_a0 [2];
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_145980856();
  if (0 < *(int *)(param_1 + 0x7600)) {
    lVar3 = FUN_1404281d6(param_1);
    if (lVar3 != 0) {
      lVar3 = param_1 + 0x75e8;
      uVar5 = FUN_1404281d6(param_1);
      FUN_1406c5554(lVar3,param_1,uVar5);
      FUN_1406c6e60(lVar3);
      if (*(char *)(param_1 + 0x7690) == '\x01') {
        FUN_1405ea3a2(lVar3,param_1 + 0x76b8,0);
        *(undefined2 *)(param_1 + 0x7690) = 0x100;
      }
    }
  }
  FUN_145980840(param_1 + 0x6c48);
  cVar2 = FUN_144a783a6(param_1);
  *(byte *)(param_1 + 0x41a5) = *(byte *)(param_1 + 0x41a5) & 0xfd | cVar2 * '\x02';
  (**(code **)(*(longlong *)(param_1 + 0x3c50) + 0x10))(param_1 + 0x3c50);
  lVar3 = FUN_1447210f0(param_1);
  if (lVar3 != 0) {
    cVar2 = FUN_1449ce97a(param_1);
    if (cVar2 != '\0') {
      if (*(longlong *)(lVar3 + 0x1f0) == 0) {
        puVar4 = (undefined8 *)(lVar3 + 0x458);
      }
      else {
        puVar4 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
      }
      uVar5 = *puVar4;
      lVar3 = FUN_1403ca227();
      uVar1 = *(undefined4 *)(lVar3 + 0x31c);
      local_b0 = (undefined8 *)0x0;
      local_a8 = 0;
      FUN_1446efa72(&local_b0,0,3,0x10);
      puVar4 = local_b0;
      local_a8 = 3;
      *local_b0 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_b0[2] = lVar6;
      *local_b0 = &PTR_FUN_14b95c150;
      local_b0[3] = 0;
      FUN_14485c47a(local_b0 + 3,param_1);
      puVar4[4] = param_1;
      local_98 = 0;
      local_90 = 0;
      FUN_14487d8d8(&local_98,&local_b0);
      local_58 = 1;
      local_b8 = local_a0;
      local_a0[0] = 1;
      local_9c = 0xbf800000;
      FUN_1406f4044(uVar5,param_1 + 0x83a0,&local_98,uVar1);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
      FUN_1449db362(&local_b0);
    }
  }
  FUN_14030d586(param_1,0);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145980840 FUN_145980840 body=21 status=ok
// SIG undefined FUN_145980840(void)

void FUN_145980840(longlong param_1)

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
  longlong lStack_28;
  longlong *plStack_20;
  ulonglong uStack_18;
  
  if ((*(longlong *)(param_1 + 0x20) == 0) ||
     (plVar2 = *(longlong **)(param_1 + 0x28), plVar2 == (longlong *)0x0)) {
    return;
  }
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar5 = (**(code **)(*plVar2 + 8))();
  if (lVar5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_1447210f0(lVar5);
  }
  FUN_140cfc686(&lStack_28,uVar6);
  if (plStack_20 != (longlong *)0x0) {
    iVar4 = (int)plStack_20[1];
    do {
      if (iVar4 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)plStack_20[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(plStack_20 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar7 = plStack_20;
    } while (!bVar8);
    LOCK();
    piVar1 = (int *)((longlong)plStack_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_20 + 0x10))();
    }
    if (plVar7 != (longlong *)0x0) {
      if (lStack_28 != 0) {
        FUN_145980a72(lStack_28,plVar2);
      }
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
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145980856 FUN_145980856 body=91 status=ok
// SIG undefined FUN_145980856(void)

void FUN_145980856(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1459808b2();
  FUN_1459808ee(param_1,param_2);
  if ((param_2 != 0) && ((*(byte *)(param_2 + 0x420) & 2) != 0)) {
    uVar1 = (**(code **)(*(longlong *)(param_1 + 0x868) + 0x30))(param_1 + 0x868);
    uVar1 = FUN_1408a1fe2(uVar1);
    FUN_140d526ba(uVar1,1);
  }
  FUN_14140e650(param_1);
  return;
}



// FUNCTION 1459808b2 FUN_1459808b2 body=53 status=ok
// SIG undefined FUN_1459808b2(void)

void FUN_1459808b2(longlong *param_1)

{
  char cVar1;
  
  thunk_FUN_145980c64();
  cVar1 = (**(code **)(*param_1 + 0x708))(param_1);
  if (cVar1 == '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001459808e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x8d8))(param_1);
  return;
}



// FUNCTION 1459808e8 thunk_FUN_145980c64 body=5 status=ok
// SIG undefined thunk_FUN_145980c64(void)

void thunk_FUN_145980c64(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_58 [40];
  longlong lStack_30;
  ulonglong uStack_28;
  
  uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x440))();
  lVar1 = param_1[0x78];
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  param_1[0x78] = param_2;
  (**(code **)(*param_1 + 0x578))(param_1);
  FUN_1405f18a8(param_1);
  lVar5 = param_1[0x78];
  if (*(longlong *)(lVar5 + 0x398) != 0) {
    FUN_1410ccde4(param_1);
    lVar5 = param_1[0x78];
  }
  if (lVar5 != 0) {
    lVar5 = FUN_144a75eb4();
    plVar7 = (longlong *)param_1[0x78];
    if ((((plVar7 != (longlong *)0x0) && (lVar5 != 0)) && (lVar2 = plVar7[2], lVar2 != 0)) &&
       ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar2 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
         lVar5 + 0x30)))) {
      iVar4 = FUN_14487fd02(param_1);
      if (iVar4 != 0) {
        FUN_140c7ce82(param_1,1);
        cVar3 = (**(code **)(*plVar7 + 0x6c8))(plVar7);
        if (cVar3 == '\0') {
          FUN_14140e92e(param_1,1,1);
        }
      }
      goto LAB_145980d67;
    }
  }
  plVar7 = (longlong *)FUN_144a7cbb2();
  lVar5 = plVar7[0x22];
  if (lVar5 == 0) {
    (**(code **)(*plVar7 + 1000))(plVar7);
    lVar5 = plVar7[0x22];
  }
  FUN_1478c0b42(param_1,lVar5);
LAB_145980d67:
  if (lVar1 != param_2) {
    lStack_30 = param_1[0x78];
    uVar6 = FUN_14477b072(param_1,DAT_14caf6478);
    (**(code **)(*param_1 + 0x248))(param_1,uVar6,&lStack_30);
    (**(code **)(*param_1 + 0x6e0))(param_1);
  }
  if ((uStack_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459808ee FUN_1459808ee body=154 status=ok
// SIG undefined FUN_1459808ee(void)

void FUN_1459808ee(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined1 local_68 [72];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_2 != 0) && ((*(byte *)(param_2 + 0x420) & 2) != 0)) {
    lVar1 = FUN_144a782da(param_1 + 0x1808,&DAT_14cb72620);
    if (lVar1 != 0) {
      local_70 = 0;
      FUN_14485c47a(&local_70,param_2);
      FUN_14598098a(local_68,&local_70);
      FUN_1406ebff6(lVar1,5,local_68);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598098a FUN_14598098a body=36 status=ok
// SIG undefined FUN_14598098a(void)

void FUN_14598098a(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  param_1[3] = DAT_14c846508;
  uVar2 = DAT_14c846500;
  param_1[1] = DAT_14c8464f8;
  param_1[2] = uVar2;
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 8) = 3;
  return;
}



// FUNCTION 1459809ae FUN_1459809ae body=195 status=ok
// SIG undefined FUN_1459809ae(void)

void FUN_1459809ae(longlong *param_1)

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
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar5 = (**(code **)(*param_1 + 8))();
  if (lVar5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_1447210f0(lVar5);
  }
  FUN_140cfc686(&local_28,uVar6);
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
      if (local_28 != 0) {
        FUN_145980a72(local_28,param_1);
      }
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
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145980a72 FUN_145980a72 body=282 status=ok
// SIG undefined FUN_145980a72(void)

void FUN_145980a72(longlong param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = (**(code **)(*param_2 + 8))(param_2);
  plVar4 = (longlong *)FUN_145980ba4(param_2);
  if ((plVar4 != (longlong *)0x0 && lVar3 != 0) && (*(char *)(lVar3 + 0x178) == '\x03')) {
    lVar5 = (**(code **)(*plVar4 + 0x2b8))(plVar4);
    if (lVar5 == 0) {
      if ((longlong)*(int *)(param_1 + 0xc70) != 0) {
        lVar5 = *(longlong *)(param_1 + 0xc68);
        lVar6 = (longlong)*(int *)(param_1 + 0xc70) << 3;
        do {
          cVar2 = FUN_145980bea(lVar5,plVar4);
          if (cVar2 != '\0') goto LAB_145980ab9;
          lVar5 = lVar5 + 8;
          lVar6 = lVar6 + -8;
        } while (lVar6 != 0);
      }
      local_38 = 0;
      FUN_14485c47a(&local_38,plVar4);
      iVar1 = *(int *)(param_1 + 0xc70);
      *(uint *)(param_1 + 0xc70) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0xc74) < iVar1 + 1U) {
        FUN_146561180(param_1 + 0xc68,iVar1);
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0xc68) + (longlong)iVar1 * 8) = local_38;
      FUN_145980e0c(param_1,lVar3,plVar4);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
    }
  }
LAB_145980ab9:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145980ba4 FUN_145980ba4 body=70 status=ok
// SIG undefined FUN_145980ba4(void)

undefined8 FUN_145980ba4(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = (**(code **)(*param_1 + 0x10))();
  plVar2 = *(longlong **)(lVar1 + 0x30);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
    if (*(longlong *)(lVar1 + 0x20) != 0) {
      plVar2 = *(longlong **)(lVar1 + 0x28);
    }
    plVar2 = (longlong *)(**(code **)(*plVar2 + 8))();
    if (plVar2 == (longlong *)0x0) {
      return 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000145980bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*plVar2 + 0x498))(plVar2);
  return uVar3;
}



// FUNCTION 145980bea FUN_145980bea body=120 status=ok
// SIG undefined FUN_145980bea(void)

ulonglong FUN_145980bea(int *param_1)

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



// FUNCTION 145980c64 FUN_145980c64 body=422 status=ok
// SIG undefined FUN_145980c64(void)

void FUN_145980c64(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x440))();
  lVar1 = param_1[0x78];
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  param_1[0x78] = param_2;
  (**(code **)(*param_1 + 0x578))(param_1);
  FUN_1405f18a8(param_1);
  lVar5 = param_1[0x78];
  if (*(longlong *)(lVar5 + 0x398) != 0) {
    FUN_1410ccde4(param_1);
    lVar5 = param_1[0x78];
  }
  if (lVar5 != 0) {
    lVar5 = FUN_144a75eb4();
    plVar7 = (longlong *)param_1[0x78];
    if ((((plVar7 != (longlong *)0x0) && (lVar5 != 0)) && (lVar2 = plVar7[2], lVar2 != 0)) &&
       ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar2 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
         lVar5 + 0x30)))) {
      iVar4 = FUN_14487fd02(param_1);
      if (iVar4 != 0) {
        FUN_140c7ce82(param_1,1);
        cVar3 = (**(code **)(*plVar7 + 0x6c8))(plVar7);
        if (cVar3 == '\0') {
          FUN_14140e92e(param_1,1,1);
        }
      }
      goto LAB_145980d67;
    }
  }
  plVar7 = (longlong *)FUN_144a7cbb2();
  lVar5 = plVar7[0x22];
  if (lVar5 == 0) {
    (**(code **)(*plVar7 + 1000))(plVar7);
    lVar5 = plVar7[0x22];
  }
  FUN_1478c0b42(param_1,lVar5);
LAB_145980d67:
  if (lVar1 != param_2) {
    local_30 = param_1[0x78];
    uVar6 = FUN_14477b072(param_1,DAT_14caf6478);
    (**(code **)(*param_1 + 0x248))(param_1,uVar6,&local_30);
    (**(code **)(*param_1 + 0x6e0))(param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145980e0c FUN_145980e0c body=536 status=ok
// SIG undefined FUN_145980e0c(void)

void FUN_145980e0c(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  longlong local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(param_1 + 0xc78);
  lVar2 = param_1 + 0xc88;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar7 = 0;
  local_60 = lVar2;
  if (*(int *)(param_1 + 0xca0) != 0) {
    FUN_1449c0562(&local_68);
    iVar7 = *(int *)(param_1 + 0xca0);
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  local_90 = plVar1;
  if ((iStack_54 != iVar7) || (local_60 != lVar2)) {
    do {
      local_98 = (longlong)iStack_74 * 0x20 + *local_90;
      local_a0 = (longlong *)FUN_14479d2ce();
      if ((local_a0 != (longlong *)0x0) &&
         ((local_a0 != param_2 && ((*(uint *)(local_a0 + 1) & 0x40000000) == 0)))) {
        if ((longlong)*(int *)(local_98 + 0x10) != 0) {
          lVar5 = *(longlong *)(local_98 + 8);
          lVar6 = (longlong)*(int *)(local_98 + 0x10) << 3;
          do {
            lVar4 = FUN_14479d2ce(lVar5);
            if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x28) == param_3)) goto LAB_145980fe5;
            lVar5 = lVar5 + 8;
            lVar6 = lVar6 + -8;
          } while (lVar6 != 0);
        }
        lVar6 = FUN_143e34816(local_a0,param_3);
        lVar5 = local_98;
        if (lVar6 != 0) {
          local_a0 = (longlong *)(local_98 + 8);
          local_68 = 0;
          FUN_14485c47a(&local_68,lVar6);
          iVar3 = *(int *)(lVar5 + 0x10);
          *(uint *)(lVar5 + 0x10) = iVar3 + 1U;
          if (*(uint *)(lVar5 + 0x14) < iVar3 + 1U) {
            FUN_14898ca2c(local_a0,iVar3);
          }
          *(undefined8 *)(*local_a0 + (longlong)iVar3 * 8) = local_68;
        }
      }
LAB_145980fe5:
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (((iStack_74 != iVar7) || (local_80 != lVar2)) || (local_90 != plVar1));
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145981026 FUN_145981026 body=202 status=ok
// SIG undefined FUN_145981026(void)

undefined8 * FUN_145981026(undefined8 *param_1,longlong param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  if (*(char *)(param_2 + 0x10) == '\0') {
    param_1[1] = *(undefined8 *)(param_2 + 8);
  }
  *param_1 = &PTR_FUN_14b023890;
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
  param_1[6] = 0;
  FUN_1459810f0(param_1 + 7,param_2 + 0x38);
  FUN_1459810f0(param_1 + 0x1b,param_2 + 0xd8);
  FUN_1459811d8(param_1 + 0x2f,param_2 + 0x178);
  param_1[0x5b] = 0;
  param_1[0x5b] = *(undefined8 *)(param_2 + 0x2d8);
  *(undefined8 *)(param_2 + 0x2d8) = 0;
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x2e0);
  *(undefined4 *)((longlong)param_1 + 0x2e4) = *(undefined4 *)(param_2 + 0x2e4);
  *(undefined8 *)(param_2 + 0x2e0) = 0;
  return param_1;
}



// FUNCTION 1459810f0 FUN_1459810f0 body=231 status=ok
// SIG undefined FUN_1459810f0(void)

undefined1 * FUN_1459810f0(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = 0;
  param_1[0x20] = param_2[0x20];
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  FUN_1408db122(param_1 + 0x30,param_2 + 0x30);
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
  *(undefined8 *)(param_2 + 0x90) = 0;
  param_1[0x98] = param_2[0x98];
  return param_1;
}



// FUNCTION 1459811d8 FUN_1459811d8 body=249 status=ok
// SIG undefined FUN_1459811d8(void)

undefined8 * FUN_1459811d8(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_14a171dc0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  if (*(char *)(param_2 + 0x10) == '\0') {
    param_1[1] = *(undefined8 *)(param_2 + 8);
  }
  *param_1 = &PTR_FUN_14b023b20;
  FUN_1459813aa(param_1 + 3,param_2 + 0x18);
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_2 + 0xc0);
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 200);
  FUN_1408db122(param_1 + 0x1a,param_2 + 0xd0);
  uVar1 = *(undefined8 *)(param_2 + 0xf0);
  param_1[0x1d] = *(undefined8 *)(param_2 + 0xe8);
  param_1[0x1e] = uVar1;
  param_1[0x1f] = *(undefined8 *)(param_2 + 0xf8);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x100);
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(param_2 + 0x110);
  FUN_1459812d2(param_1 + 0x23,param_2 + 0x118);
  FUN_14598131a(param_1 + 0x26,param_2 + 0x130);
  FUN_145981362(param_1 + 0x29,param_2 + 0x148);
  return param_1;
}



// FUNCTION 1459812d2 FUN_1459812d2 body=71 status=ok
// SIG undefined FUN_1459812d2(void)

undefined8 * FUN_1459812d2(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 14598131a FUN_14598131a body=71 status=ok
// SIG undefined FUN_14598131a(void)

undefined8 * FUN_14598131a(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 145981362 FUN_145981362 body=71 status=ok
// SIG undefined FUN_145981362(void)

undefined8 * FUN_145981362(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 1459813aa FUN_1459813aa body=270 status=ok
// SIG undefined FUN_1459813aa(void)

undefined8 * FUN_1459813aa(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *param_1 = &PTR_FUN_14b023b40;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  _Src = *(void **)(param_2 + 8);
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 * 2);
  }
  param_1[3] = &PTR_FUN_14b00be70;
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
  param_1[6] = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x3d);
  param_1[7] = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)((longlong)param_1 + 0x3d) = uVar2;
  param_1[9] = *(undefined8 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0x50);
  param_1[0xb] = 0;
  param_1[0xc] = *(undefined8 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0x68);
  param_1[0xe] = 0;
  uVar4 = *(undefined4 *)(param_2 + 0x7c);
  uVar5 = *(undefined4 *)(param_2 + 0x80);
  uVar6 = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar4;
  *(undefined4 *)(param_1 + 0x10) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar6;
  param_1[0x11] = *(undefined8 *)(param_2 + 0x88);
  plVar3 = *(longlong **)(param_2 + 0x90);
  param_1[0x12] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xa0);
  return param_1;
}



// FUNCTION 1459814b8 FUN_1459814b8 body=176 status=ok
// SIG undefined FUN_1459814b8(void)

void FUN_1459814b8(longlong param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_2 + 0x68) == DAT_14cbd0da0) {
    if (-20000.0 <= *(float *)(param_2 + 0x84)) {
      *(float *)(param_1 + 0x3b0) = *(float *)(param_2 + 0x84);
    }
    uVar2 = FUN_1459815aa(param_2 + 0x78);
    cVar1 = FUN_1408c826c(param_2,param_3);
    if (cVar1 != '\0') {
      FUN_14598156a(param_2,local_38,param_3);
      FUN_1459815aa(local_38);
    }
    FUN_14140f21c(param_1 + -0x3a0,uVar2);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598156a FUN_14598156a body=64 status=ok
// SIG undefined FUN_14598156a(void)

undefined8 * FUN_14598156a(undefined8 param_1,undefined8 *param_2,uint param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14140f0d8();
  uVar2 = 0;
  if ((-1 < (int)param_3) && (lVar1 != 0)) {
    if ((int)param_3 < *(int *)(lVar1 + 0x10)) {
      uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 8) + (ulonglong)param_3 * 8);
    }
    else {
      uVar2 = 0;
    }
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 1459815aa FUN_1459815aa body=127 status=ok
// SIG undefined FUN_1459815aa(void)

int FUN_1459815aa(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_14598162a();
  if (lVar2 == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1400021e4(param_1,local_30);
    iVar1 = FUN_1401e9588(lVar2,local_30,0);
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
    iVar3 = 0;
    if (iVar1 != -1) {
      iVar3 = iVar1;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598162a FUN_14598162a body=96 status=ok
// SIG undefined FUN_14598162a(void)

undefined8 FUN_14598162a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbd0db8) {
    FUN_144b3d300(&DAT_14cbd0db8);
    if (DAT_14cbd0db8 == -1) {
      DAT_14cbd0db0 = FUN_145723659();
      _Init_thread_footer(&DAT_14cbd0db8);
    }
  }
  return DAT_14cbd0db0;
}



// FUNCTION 145981698 FUN_145981698 body=40 status=ok
// SIG undefined FUN_145981698(void)

undefined8 FUN_145981698(undefined8 param_1,int param_2)

{
  FUN_1459816c0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459816c0 FUN_1459816c0 body=57 status=ok
// SIG undefined FUN_1459816c0(void)

void FUN_1459816c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a16e1c0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459816fa FUN_1459816fa body=79 status=ok
// SIG undefined FUN_1459816fa(void)

void FUN_1459816fa(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0xa8,0,0);
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0xb0,0,0);
  FUN_14598174a(param_1,param_2);
  return;
}



// FUNCTION 14598174a FUN_14598174a body=106 status=ok
// SIG undefined FUN_14598174a(void)

void FUN_14598174a(longlong param_1,longlong *param_2)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    (**(code **)(*param_2 + 0x88))(param_2,*(longlong *)(param_1 + 0x48) + 0x58,0,0);
    (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x58,0,0);
  }
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x38,0,0);
  FUN_1449e2820(param_1,param_2);
  return;
}



// FUNCTION 1459817b4 FUN_1459817b4 body=40 status=ok
// SIG undefined FUN_1459817b4(void)

undefined8 FUN_1459817b4(undefined8 param_1,int param_2)

{
  FUN_1459817dc();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459817dc FUN_1459817dc body=71 status=ok
// SIG undefined FUN_1459817dc(void)

void FUN_1459817dc(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a5b09f0;
  plVar3 = (longlong *)param_1[8];
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
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 14598182e FUN_14598182e body=95 status=ok
// SIG undefined FUN_14598182e(void)

undefined8 * FUN_14598182e(undefined8 *param_1)

{
  FUN_14598188e();
  *param_1 = &PTR_FUN_14a6da7b0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xdd) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe5) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined8 *)((longlong)param_1 + 0x10d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x115) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 1;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 0x40;
  *(undefined1 *)(param_1 + 0x26) = 2;
  return param_1;
}



// FUNCTION 14598188e FUN_14598188e body=153 status=ok
// SIG undefined FUN_14598188e(void)

undefined8 * FUN_14598188e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *param_1 = &PTR_FUN_14a6da150;
  param_1[0x11] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x45) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x75) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7d) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x12] = DAT_14c8464e0;
  param_1[0x13] = uVar1;
  param_1[0x14] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x15] = DAT_14c8464e0;
  param_1[0x16] = uVar1;
  param_1[0x17] = DAT_14c8464f0;
  param_1[0x18] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x16 | 0x81;
  *(undefined1 *)(param_1 + 6) = 0x3f;
  return param_1;
}



// FUNCTION 145981928 FUN_145981928 body=40 status=ok
// SIG undefined FUN_145981928(void)

undefined8 FUN_145981928(undefined8 param_1,int param_2)

{
  FUN_145981950();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145981950 FUN_145981950 body=59 status=ok
// SIG undefined FUN_145981950(void)

void FUN_145981950(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a6e2a20;
  FUN_14598198b(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 14598198b FUN_14598198b body=49 status=ok
// SIG undefined FUN_14598198b(void)

void FUN_14598198b(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1459819bc FUN_1459819bc body=69 status=ok
// SIG undefined FUN_1459819bc(void)

undefined8 * FUN_1459819bc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a6f1a80;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145981a02 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145981a08 FUN_145981a08 body=106 status=ok
// SIG undefined FUN_145981a08(void)

void FUN_145981a08(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  
  puVar2 = &DAT_149dfb77a;
  if (*(int *)((undefined8 *)*param_2 + 1) != 0) {
    puVar2 = *(undefined2 **)*param_2;
  }
  FUN_145981a72(param_2[3],puVar2);
  iVar3 = *(int *)(*param_2 + 0x30) + 3;
  iVar1 = *(int *)(*param_2 + 0x30) + 6;
  if (-1 < iVar3) {
    iVar1 = iVar3;
  }
  iVar3 = 1;
  if (1 < iVar1 >> 2) {
    iVar3 = iVar1 >> 2;
  }
  puVar2 = &DAT_149dfb77a;
  if (DAT_14cb3b630 != 0) {
    puVar2 = DAT_14cb3b628;
  }
  FUN_140ef3efc(param_2,puVar2,iVar3);
  return;
}



// FUNCTION 145981a72 FUN_145981a72 body=153 status=ok
// SIG undefined FUN_145981a72(void)

void FUN_145981a72(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(uint *)(param_1 + 2) = (int)param_1[2] + 0xfU & 0xfffffff0;
  FUN_145981b0c();
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
  *(undefined **)(lVar2 + 0x28 + lVar4) = &DAT_14cb3bf08;
  *(int *)(param_1 + 2) = (int)param_1[2] + 0x40;
  return;
}



// FUNCTION 145981b0c FUN_145981b0c body=258 status=ok
// SIG undefined FUN_145981b0c(void)

void FUN_145981b0c(void)

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
              0x110) < DAT_14cb3bf88) {
    FUN_144b3d300(&DAT_14cb3bf88);
    if (DAT_14cb3bf88 == -1) {
      FUN_1456ea382(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FNDIGrid2DShaderParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x25;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb3bf08,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143a3e92d);
      _Init_thread_footer(&DAT_14cb3bf88);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145981c0f FUN_145981c0f body=42 status=ok
// SIG undefined FUN_145981c0f(void)

void FUN_145981c0f(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145981c3a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bca4530;
  *(undefined4 *)(puVar1 + 5) = 0x10001;
  return;
}



// FUNCTION 145981c3a FUN_145981c3a body=32 status=ok
// SIG undefined FUN_145981c3a(void)

undefined8 * FUN_145981c3a(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14bc24a20;
  return param_1;
}



// FUNCTION 145981c5a FUN_145981c5a body=52 status=ok
// SIG undefined FUN_145981c5a(void)

void FUN_145981c5a(longlong param_1)

{
  FUN_14479d2ce(param_1 + 0x16d4);
  FUN_141304360();
  return;
}



// FUNCTION 145981c8e FUN_145981c8e body=90 status=ok
// SIG undefined FUN_145981c8e(void)

void FUN_145981c8e(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(longlong *)(param_1 + 0x1848) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x1848) + 0xc01) == '\x01')) {
    uVar1 = FUN_14479d2ce(param_1 + 0x16d4);
    FUN_1412138f0(param_1,uVar1,param_1 + 0x1828,param_1 + 0x1820);
    return;
  }
  return;
}



// FUNCTION 145981ce8 FUN_145981ce8 body=169 status=ok
// SIG undefined FUN_145981ce8(void)

bool FUN_145981ce8(longlong param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 145981d92 FUN_145981d92 body=514 status=ok
// SIG undefined FUN_145981d92(void)

void FUN_145981d92(undefined8 param_1,longlong *param_2,longlong param_3)

{
  ushort uVar1;
  ushort uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined2 *puVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  bool bVar12;
  undefined1 auStack_98 [44];
  int local_6c;
  undefined2 *local_68;
  undefined8 uStack_60;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar3 = (longlong *)FUN_14140fc00();
  plVar3 = (longlong *)*plVar3;
  AcquireSRWLockExclusive((PSRWLOCK)(plVar3 + 0x26));
  lVar9 = *plVar3;
  *(int *)(plVar3 + 2) = (int)plVar3[2] + 2;
  if ((longlong)(int)plVar3[1] != 0) {
    lVar6 = (longlong)(int)plVar3[1] * 0x100 + lVar9;
    bVar11 = false;
    do {
      if ((*(char *)(lVar9 + 0x30) == '\x01') && ((longlong)*(int *)(lVar9 + 0xd8) != 0)) {
        lVar4 = *(longlong *)(lVar9 + 0xd0);
        lVar5 = (longlong)*(int *)(lVar9 + 0xd8) * 0x208 + lVar4;
        local_6c = (int)param_2[1];
LAB_145981e60:
        if (*(int *)(lVar4 + 0x20) == local_6c) {
          bVar12 = true;
          if (1 < local_6c) {
            lVar10 = 0;
            do {
              uVar1 = *(ushort *)(*(longlong *)(lVar4 + 0x18) + lVar10);
              uVar2 = *(ushort *)(*param_2 + lVar10);
              if (uVar1 == uVar2) {
                if (uVar1 == 0) goto LAB_145981ef2;
              }
              else {
                if (0x7f < (uVar2 | uVar1)) {
                  iVar8 = (uint)uVar1 - (uint)uVar2;
                  goto LAB_145981ef5;
                }
                if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) {
                  iVar8 = (uint)(byte)(&DAT_149e05da0)[uVar1] -
                          (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
                  goto LAB_145981ef5;
                }
              }
              lVar10 = lVar10 + 2;
            } while( true );
          }
        }
        else {
          bVar12 = *(int *)(lVar4 + 0x20) + local_6c == 1;
        }
        goto LAB_145981ed4;
      }
LAB_145981e04:
      lVar9 = lVar9 + 0x100;
    } while (lVar9 != lVar6);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(plVar3 + 0x26));
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_145981ef2:
  iVar8 = 0;
LAB_145981ef5:
  bVar12 = iVar8 == 0;
LAB_145981ed4:
  if ((param_3 != 0) && (bVar12)) {
    local_68 = (undefined2 *)0x0;
    uStack_60 = 0;
    FUN_1401031ac(param_3,0,&local_68);
    puVar7 = local_68;
    if ((int)uStack_60 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    FUN_140002266(local_58,L"TextureRenderTarget2D\'%s\'",puVar7);
    FUN_140775538(plVar3 + 6,local_58);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    bVar12 = !bVar11;
    bVar11 = true;
    if (bVar12) {
      *(int *)(plVar3 + 0x25) = (int)plVar3[0x25] + 1;
    }
    goto LAB_145981e04;
  }
  lVar4 = lVar4 + 0x208;
  if (lVar4 == lVar5) goto LAB_145981e04;
  goto LAB_145981e60;
}



// FUNCTION 145981f96 FUN_145981f96 body=297 status=ok
// SIG undefined FUN_145981f96(void)

void FUN_145981f96(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x1b8);
  *param_2 = &PTR_FUN_14b0694e0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0xb;
  param_2[3] = 0;
  *(undefined1 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 0xf00000d0;
  param_2[0xd] = 0;
  *(undefined4 *)(param_2 + 0xe) = 0x3f800000;
  *(undefined4 *)(param_2 + 0xf) = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  *(undefined4 *)(param_2 + 0x16) = 0xf00000d0;
  param_2[0x17] = 0;
  *(undefined4 *)(param_2 + 0x18) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x19) = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  *(undefined4 *)(param_2 + 0x20) = 0xf00000d0;
  param_2[0x21] = 0;
  *(undefined4 *)(param_2 + 0x22) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x23) = 0;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  *(undefined4 *)(param_2 + 0x2a) = 0xf00000d0;
  param_2[0x2b] = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x2d) = 0;
  param_2[0x2e] = 0;
  param_2[0x2f] = 0;
  param_2[0x30] = 0;
  param_2[0x31] = 0;
  param_2[0x32] = 0;
  param_2[0x33] = 0;
  *(undefined4 *)(param_2 + 0x34) = 0xf00000d0;
  param_2[0x35] = 0;
  *(undefined4 *)(param_2 + 0x36) = 0x3f800000;
  return;
}



// FUNCTION 1459820c0 FUN_1459820c0 body=436 status=ok
// SIG undefined FUN_1459820c0(void)

void FUN_1459820c0(longlong param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined1 auStack_118 [37];
  undefined2 local_f3;
  undefined1 local_f1;
  undefined8 local_f0;
  undefined2 local_e4;
  undefined1 local_e2;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined2 local_c8;
  undefined5 uStack_c6;
  undefined4 uStack_c1;
  undefined8 local_bc;
  undefined8 uStack_b4;
  undefined1 local_ac [120];
  undefined1 local_34;
  undefined1 local_2b;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar1 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_1459821cd;
    bVar1 = DAT_14c8442b8 & 1;
  }
  if ((bVar1 == 0) && ((*(uint *)(param_1 + 8) & 0x10) == 0)) {
    puVar2 = (undefined8 *)FUN_14001cc68(8);
    *puVar2 = &PTR_FUN_14ab08470;
    local_f0 = 0;
    local_e4 = 1;
    local_e2 = 0;
    local_c8 = 0;
    uStack_c6 = 0;
    uStack_c1 = 0;
    local_bc = 0;
    uStack_b4 = 0x3f80000000000000;
    memset(local_ac,0,0x81);
    local_2b = 4;
    local_c8 = 0x102;
    local_e0 = 4;
    uStack_dc = 0;
    uStack_d8 = 1;
    uStack_d4 = 1;
    local_d0 = 0x1000100000001;
    local_34 = 0;
    local_f3 = 0;
    local_f1 = 0;
    FUN_14140fc7a(*(undefined8 *)(param_1 + 0x58),puVar2,&local_f0);
  }
LAB_1459821cd:
  if ((local_28 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145982275 FUN_145982275 body=46 status=ok
// SIG undefined FUN_145982275(void)

void FUN_145982275(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1459822a4(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b58f9d0;
  puVar1[5] = &PTR_FUN_14b58fcf0;
  return;
}



// FUNCTION 1459822a4 FUN_1459822a4 body=84 status=ok
// SIG undefined FUN_1459822a4(void)

undefined8 * FUN_1459822a4(undefined8 *param_1)

{
  FUN_140ea0e34();
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 1;
  *param_1 = &PTR_FUN_14a534660;
  param_1[5] = &PTR_FUN_14a534980;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(byte *)((longlong)param_1 + 0xd9) = *(byte *)((longlong)param_1 + 0xd9) & 0xfe;
  FUN_140e2f50a(param_1,4);
  return param_1;
}



// FUNCTION 1459822f8 FUN_1459822f8 body=52 status=ok
// SIG undefined FUN_1459822f8(void)

longlong FUN_1459822f8(longlong param_1,int param_2)

{
  FUN_14598232c(param_1 + 0x30);
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14598232c FUN_14598232c body=128 status=ok
// SIG undefined FUN_14598232c(void)

void FUN_14598232c(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14af10040;
  if (param_1[0x12] != 0) {
    plVar1 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] == 0) {
    return;
  }
  plVar1 = param_1 + 6;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar1 = (longlong *)param_1[4];
  }
                    /* WARNING: Could not recover jumptable at 0x0001459823a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(plVar1);
  return;
}



// FUNCTION 1459823b8 FUN_1459823b8 body=31 status=ok
// SIG undefined FUN_1459823b8(void)

undefined8 FUN_1459823b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459823d8 FUN_1459823d8 body=331 status=ok
// SIG undefined FUN_1459823d8(void)

void FUN_1459823d8(longlong param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145982524();
  FUN_145982524(param_1,&DAT_149e01f72,param_3,param_4);
  uVar1 = FUN_144a82cde();
  FUN_1414dd36c(uVar1,param_2,param_3,param_4);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cad8390) {
      FUN_144b3d300(&DAT_14cad8390);
      if (DAT_14cad8390 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar2 = (longlong *)
                 (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"con.MinLogVerbosity",1);
        if (plVar2 == (longlong *)0x0) {
          DAT_14cad8388 = (int *)0x0;
        }
        else {
          DAT_14cad8388 = (int *)(**(code **)(*plVar2 + 0x68))(plVar2);
        }
        _Init_thread_footer(&DAT_14cad8390);
      }
    }
    if ((DAT_14cad8388 == (int *)0x0) || (*DAT_14cad8388 < (int)(param_3 & 0xff))) {
      plVar2 = *(longlong **)(param_1 + 0x20);
      FUN_140056680(local_38,param_2);
      (**(code **)(*plVar2 + 0x2c0))(plVar2,local_38);
      if (local_38[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145982524 FUN_145982524 body=138 status=ok
// SIG undefined FUN_145982524(void)

void FUN_145982524(longlong *param_1,wchar_t *param_2)

{
  size_t sVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  sVar1 = wcslen(param_2);
  FUN_1400020e8(param_1 + 2,param_2,sVar1 & 0xffffffff);
  if (*(char *)((longlong)param_1 + 9) == '\x01') {
    FUN_140056680(local_30,&DAT_149e02010);
    (**(code **)(*param_1 + 0x58))(param_1,local_30);
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459825b0 FUN_1459825b0 body=96 status=ok
// SIG undefined FUN_1459825b0(void)

undefined8 * FUN_1459825b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *(undefined2 *)(param_1 + 1) = 0x100;
  *param_1 = &PTR_FUN_149e326e0;
  puVar1 = (undefined8 *)FUN_14001cc68(0xf0);
  *puVar1 = FUN_145cbb927;
  memset(puVar1 + 1,0,0xe8);
  FUN_145982610(puVar1 + 2);
  param_1[2] = puVar1 + 2;
  return param_1;
}



// FUNCTION 145982610 FUN_145982610 body=180 status=ok
// SIG undefined FUN_145982610(void)

PSRWLOCK FUN_145982610(PSRWLOCK param_1)

{
  DWORD DVar1;
  
  InitializeSRWLock(param_1);
  param_1[0xd].Ptr = (PVOID)0x0;
  param_1[0xe].Ptr = (PVOID)0x0;
  param_1[0xb].Ptr = (PVOID)0x0;
  param_1[0xc].Ptr = (PVOID)0x0;
  param_1[9].Ptr = (PVOID)0x0;
  param_1[10].Ptr = (PVOID)0x0;
  param_1[7].Ptr = (PVOID)0x0;
  param_1[8].Ptr = (PVOID)0x0;
  param_1[5].Ptr = (PVOID)0x0;
  param_1[6].Ptr = (PVOID)0x0;
  param_1[3].Ptr = (PVOID)0x0;
  param_1[4].Ptr = (PVOID)0x0;
  param_1[1].Ptr = (PVOID)0x0;
  param_1[2].Ptr = (PVOID)0x0;
  InitializeSRWLock(param_1 + 0xf);
  param_1[0x10].Ptr = (PVOID)0x0;
  param_1[0x11].Ptr = (PVOID)0x0;
  InitializeSRWLock(param_1 + 0x12);
  param_1[0x13].Ptr = (PVOID)0x0;
  *(undefined4 *)&param_1[0x14].Ptr = 0xffffffff;
  DVar1 = GetCurrentThreadId();
  *(DWORD *)((longlong)&param_1[0x14].Ptr + 4) = DVar1;
  *(undefined4 *)&param_1[0x15].Ptr = 0xffffffff;
  *(undefined2 *)((longlong)&param_1[0x15].Ptr + 4) = 0;
  param_1[0x17].Ptr = (PVOID)0x0;
  param_1[0x18].Ptr = (PVOID)0x2000000000;
  param_1[0x1a].Ptr = (PVOID)0x0;
  param_1[0x1b].Ptr = (PVOID)0x2000000000;
  return param_1;
}



// FUNCTION 1459826cc FUN_1459826cc body=171 status=ok
// SIG undefined FUN_1459826cc(void)

undefined8 * FUN_1459826cc(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14ae9e960;
  param_1[5] = 0;
  FUN_1446f470e(&local_20,L"WaterWaves",1);
  uVar1 = FUN_1414101aa();
  local_30 = 0;
  local_38 = 1;
  lVar2 = FUN_14048696c(param_1,local_20,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[5] = lVar2;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145982778 FUN_145982778 body=155 status=ok
// SIG undefined FUN_145982778(void)

void FUN_145982778(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = FUN_145982814(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145982814 FUN_145982814 body=98 status=ok
// SIG undefined FUN_145982814(void)

undefined8 FUN_145982814(longlong *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined7 uVar5;
  byte bVar6;
  longlong *plVar7;
  
  if (param_1 == (longlong *)0x0) {
LAB_145982872:
    bVar6 = (byte)param_1;
  }
  else {
    uVar2 = FUN_140338614();
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar2);
    if (plVar3 == (longlong *)0x0) goto LAB_145982872;
    uVar2 = FUN_140338614();
    plVar7 = plVar3;
    plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
    bVar6 = (byte)plVar7;
    bVar1 = 0;
    uVar5 = 0;
    if (plVar3 != plVar4) {
      if (plVar4 != (longlong *)0x0) {
        uVar2 = (**(code **)(*plVar4 + 0x60))(plVar4);
        bVar6 = (byte)uVar2;
        uVar5 = (undefined7)((ulonglong)uVar2 >> 8);
        bVar1 = 1;
      }
      goto LAB_14598286a;
    }
  }
  bVar1 = 0;
  uVar5 = 0;
LAB_14598286a:
  return CONCAT71(uVar5,bVar1 & bVar6);
}



// FUNCTION 14598287e FUN_14598287e body=271 status=ok
// SIG undefined FUN_14598287e(void)

undefined8 * FUN_14598287e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1406046aa();
  *(undefined2 *)(param_1 + 0x15) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *param_1 = &PTR_FUN_14b6dd160;
  param_1[5] = &PTR_LAB_14b6dd460;
  param_1[6] = &PTR_LAB_14b6dd490;
  param_1[0x14] = &PTR_LAB_14b6dd4c0;
  *(undefined2 *)(param_1 + 0x1d) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0xea) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0x6000;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 2;
  *(undefined2 *)((longlong)param_1 + 0x10c) = 0;
  param_1[0x24] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x22] = DAT_14c8464e0;
  param_1[0x23] = uVar1;
  *(undefined4 *)(param_1 + 0x25) = 0x45bb8000;
  *(undefined4 *)((longlong)param_1 + 300) = 0x447a0000;
  *(undefined4 *)(param_1 + 0x26) = 0x44fa0000;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0x453b8000;
  param_1[0x29] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  FUN_140d7ec9e(param_1 + 0x2a);
  param_1[0x2f] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  return param_1;
}



// FUNCTION 145982998 FUN_145982998 body=60 status=ok
// SIG undefined FUN_145982998(void)

void FUN_145982998(longlong *param_1)

{
  FUN_1459829d4(param_1[5],(int)param_1[6]);
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459829d4 FUN_1459829d4 body=38 status=ok
// SIG undefined FUN_1459829d4(void)

void FUN_1459829d4(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1459829fa(param_1);
    param_1 = param_1 + 0x40;
  }
  return;
}



// FUNCTION 1459829fa FUN_1459829fa body=79 status=ok
// SIG undefined FUN_1459829fa(void)

void FUN_1459829fa(longlong *param_1)

{
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145982a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 145982a4a FUN_145982a4a body=65 status=ok
// SIG undefined FUN_145982a4a(void)

undefined8 * FUN_145982a4a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac87f30;
  FUN_144a2da94(param_1 + 0x21);
  FUN_145982a8c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145982a8c FUN_145982a8c body=83 status=ok
// SIG undefined FUN_145982a8c(void)

void FUN_145982a8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ac88f40;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_145982adf(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 145982adf FUN_145982adf body=1 status=ok
// SIG undefined FUN_145982adf(void)

void FUN_145982adf(void)

{
  return;
}



// FUNCTION 145982aee FUN_145982aee body=45 status=ok
// SIG undefined FUN_145982aee(void)

undefined8 FUN_145982aee(undefined8 param_1,int param_2)

{
  FUN_145982b1c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 145982b1c FUN_145982b1c body=90 status=ok
// SIG undefined FUN_145982b1c(void)

void FUN_145982b1c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b132800;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 145982b8c FUN_145982b8c body=59 status=ok
// SIG undefined FUN_145982b8c(void)

void FUN_145982b8c(longlong *param_1)

{
  byte bVar1;
  byte bVar2;
  
  (**(code **)(*param_1 + 0x2a8))(param_1,0);
  *(byte *)((longlong)param_1 + 0x111) = *(byte *)((longlong)param_1 + 0x111) & 0xfd;
  bVar1 = *(byte *)((longlong)param_1 + 0x112);
  bVar2 = bVar1 + 3;
  if (bVar1 < 0xfd) {
    bVar2 = bVar1;
  }
  *(byte *)((longlong)param_1 + 0x112) = (bVar2 | 1) + 2;
  return;
}



// FUNCTION 145982bc8 FUN_145982bc8 body=32 status=ok
// SIG undefined FUN_145982bc8(void)

void FUN_145982bc8(longlong param_1)

{
  FUN_1408453d0();
  FUN_140cbebe8(param_1 + 0x40,1);
  return;
}



// FUNCTION 145982bee FUN_145982bee body=107 status=ok
// SIG undefined FUN_145982bee(void)

void FUN_145982bee(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1[0x2a] == -1) {
    FUN_14006bf18(piVar1 + 0x28,param_2);
  }
  else if (*piVar1 == 0) {
    FUN_1447fd100(piVar1 + 0x28,param_2);
  }
  piVar1 = (int *)*param_1;
  if (piVar1[8] != -1) {
    if (*piVar1 != 0) {
      return;
    }
    FUN_1447fd100(piVar1 + 6,param_2);
    return;
  }
  FUN_140d00208(piVar1 + 6,param_2);
  return;
}



// FUNCTION 145982c5a FUN_145982c5a body=9 status=ok
// SIG undefined FUN_145982c5a(void)

void FUN_145982c5a(longlong param_1)

{
  FUN_145982c64(param_1 + 0x10);
  return;
}



// FUNCTION 145982c64 FUN_145982c64 body=44 status=ok
// SIG undefined FUN_145982c64(void)

void FUN_145982c64(longlong param_1)

{
  NVSDK_NGX_D3D12_ReleaseFeature(*(undefined8 *)(param_1 + 0x48));
  if (*(longlong *)(param_1 + 0x50) != 0) {
    NVSDK_NGX_D3D12_DestroyParameters();
  }
  FUN_1414118ac(param_1);
  return;
}



// FUNCTION 145982c90 FUN_145982c90 body=63 status=ok
// SIG undefined FUN_145982c90(void)

void FUN_145982c90(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_145982cfa(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000145982ca5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x38))();
    return;
  }
  puVar2 = (undefined8 *)FUN_14119c38e(&DAT_14cb78e40);
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_14b321ba0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  return;
}



// FUNCTION 145982cd0 FUN_145982cd0 body=42 status=ok
// SIG undefined FUN_145982cd0(void)

void FUN_145982cd0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14119c38e(&DAT_14cb78e40);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_14b321ba0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  return;
}



// FUNCTION 145982cfa FUN_145982cfa body=191 status=ok
// SIG undefined FUN_145982cfa(void)

longlong FUN_145982cfa(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_145982dba();
  lVar3 = *param_1;
  if (DAT_14cb78df0 != DAT_14cb78e1c) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14cb78e20;
    if (DAT_14cb78e28 != (undefined *)0x0) {
      puVar7 = DAT_14cb78e28;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14cb78e30 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14cb78de8 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  lVar5 = DAT_14cb78de0;
  if (lVar3 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 145982dba FUN_145982dba body=152 status=ok
// SIG undefined FUN_145982dba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145982dba(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb78e38) {
    FUN_144b3d300(&DAT_14cb78e38);
    if (DAT_14cb78e38 == -1) {
      DAT_14cb78e08 = 0;
      DAT_14cb78e10 = 0;
      DAT_14cb78de8 = 0;
      _DAT_14cb78df0 = 0;
      _DAT_14cb78e14 = 0xffffffff00000080;
      DAT_14cb78e1c = 0;
      DAT_14cb78e28 = 0;
      DAT_14cb78e30 = 0;
      atexit(FUN_143d1f82c);
      _Init_thread_footer(&DAT_14cb78e38);
      return;
    }
  }
  return;
}



// FUNCTION 145982e52 FUN_145982e52 body=63 status=ok
// SIG undefined FUN_145982e52(void)

void FUN_145982e52(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_145982ebc(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000145982e67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x38))();
    return;
  }
  puVar2 = (undefined8 *)FUN_14119c38e(&DAT_14cbe4800);
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_14b827570;
  puVar2[3] = 0;
  puVar2[4] = 0;
  return;
}



// FUNCTION 145982e92 FUN_145982e92 body=42 status=ok
// SIG undefined FUN_145982e92(void)

void FUN_145982e92(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14119c38e(&DAT_14cbe4800);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_14b827570;
  puVar1[3] = 0;
  puVar1[4] = 0;
  return;
}



// FUNCTION 145982ebc FUN_145982ebc body=191 status=ok
// SIG undefined FUN_145982ebc(void)

longlong FUN_145982ebc(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_145982f7c();
  lVar3 = *param_1;
  if (DAT_14cbe47b0 != DAT_14cbe47dc) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14cbe47e0;
    if (DAT_14cbe47e8 != (undefined *)0x0) {
      puVar7 = DAT_14cbe47e8;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14cbe47f0 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14cbe47a8 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  lVar5 = DAT_14cbe47a0;
  if (lVar3 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 145982f7c FUN_145982f7c body=152 status=ok
// SIG undefined FUN_145982f7c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145982f7c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbe47f8) {
    FUN_144b3d300(&DAT_14cbe47f8);
    if (DAT_14cbe47f8 == -1) {
      DAT_14cbe47c8 = 0;
      DAT_14cbe47d0 = 0;
      DAT_14cbe47a8 = 0;
      _DAT_14cbe47b0 = 0;
      _DAT_14cbe47d4 = 0xffffffff00000080;
      DAT_14cbe47dc = 0;
      DAT_14cbe47e8 = 0;
      DAT_14cbe47f0 = 0;
      atexit(FUN_14431f163);
      _Init_thread_footer(&DAT_14cbe47f8);
      return;
    }
  }
  return;
}



// FUNCTION 145983014 FUN_145983014 body=145 status=ok
// SIG undefined FUN_145983014(void)

void FUN_145983014(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_2 + 0x88) = 0;
  if (*(int *)(param_2 + 0x8c) < 0) {
    FUN_148867d4c(param_2,0);
  }
  local_28 = FUN_144a799b0();
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_28);
  }
  FUN_14598312c(param_1,&local_28,param_3,param_2);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459830a6 FUN_1459830a6 body=132 status=ok
// SIG undefined FUN_1459830a6(void)

void FUN_1459830a6(longlong param_1,int param_2)

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



// FUNCTION 14598312c FUN_14598312c body=340 status=ok
// SIG undefined FUN_14598312c(void)

void FUN_14598312c(undefined8 param_1,longlong *param_2,char param_3,undefined8 param_4)

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
      goto LAB_145983183;
    }
  }
  lVar3 = 0;
LAB_145983183:
  lVar2 = FUN_144a78d6a();
  lVar1 = *param_2;
  if (lVar3 == lVar2) {
    if (param_3 == '\0') {
      local_40 = lVar1;
      if ((lVar1 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      FUN_14886803e(param_1,&local_40,param_4);
    }
    else {
      local_38 = lVar1;
      if ((lVar1 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      FUN_148867dba(param_1,&local_38,param_4);
    }
  }
  else if (param_3 == '\0') {
    local_50 = lVar1;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_141411c5a(param_1,&local_50,param_4);
  }
  else {
    local_48 = lVar1;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_148868190(param_1,&local_48,param_4);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145983282 FUN_145983282 body=129 status=ok
// SIG undefined FUN_145983282(void)

void FUN_145983282(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 0x11) {
      uVar4 = 0x10;
    }
    else {
      lVar3 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x8c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 3,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 3)) {
        uVar4 = uVar2 >> 3 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x8c) = (int)uVar4;
    FUN_145983304(param_1,param_2,uVar4,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 145983304 FUN_145983304 body=142 status=ok
// SIG undefined FUN_145983304(void)

void FUN_145983304(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,param_4);
  return;
}



// FUNCTION 145983392 FUN_145983392 body=47 status=ok
// SIG undefined FUN_145983392(void)

longlong FUN_145983392(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_1459833c2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459833c2 FUN_1459833c2 body=195 status=ok
// SIG undefined FUN_1459833c2(void)

void FUN_1459833c2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149e1c3d0;
  param_1[1] = &PTR_FUN_149e1c3f0;
  *(undefined4 *)(param_1 + 0x121) = 0;
  if (param_1[0x120] != 0) {
    FUN_1400020a8();
  }
  FUN_145983486(param_1 + 0x118);
  *(undefined4 *)(param_1 + 0x117) = 0;
  if (param_1[0x116] != 0) {
    FUN_1400020a8();
  }
  FUN_145983486(param_1 + 0x10e);
  *(undefined4 *)(param_1 + 0x10d) = 0;
  if (param_1[0x10c] != 0) {
    FUN_1400020a8();
  }
  FUN_145983538(param_1 + 0x104);
  if (param_1[0x102] != 0) {
    FUN_1400020a8();
  }
  FUN_1410c966c(param_1 + 1);
  return;
}



// FUNCTION 145983486 FUN_145983486 body=55 status=ok
// SIG undefined FUN_145983486(void)

void FUN_145983486(longlong *param_1)

{
  FUN_1459834be(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459834be FUN_1459834be body=121 status=ok
// SIG undefined FUN_1459834be(void)

void FUN_1459834be(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1401ad22e(param_1,param_2);
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



// FUNCTION 145983538 FUN_145983538 body=53 status=ok
// SIG undefined FUN_145983538(void)

void FUN_145983538(longlong *param_1)

{
  FUN_14598356e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14598356e FUN_14598356e body=89 status=ok
// SIG undefined FUN_14598356e(void)

void FUN_14598356e(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1459835c8 FUN_1459835c8 body=148 status=ok
// SIG undefined FUN_1459835c8(void)

bool FUN_1459835c8(longlong param_1)

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



// FUNCTION 145983660 FUN_145983660 body=168 status=ok
// SIG undefined FUN_145983660(void)

void FUN_145983660(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  cVar1 = FUN_144729dda(param_1 + 9);
  if ((((cVar1 != '\0') && (lVar2 = (**(code **)(*param_1 + 0x180))(param_1), lVar2 != 0)) &&
      (*(longlong *)(lVar2 + 0x1f0) != 0)) && (lVar2 = FUN_1400d6ce6(), lVar2 != 0)) {
    plVar3 = (longlong *)FUN_1458f4156(param_1);
    lVar5 = *plVar3;
    AcquireSRWLockShared((PSRWLOCK)(lVar5 + 0x140));
    ReleaseSRWLockShared((PSRWLOCK)(lVar5 + 0x140));
    if ((longlong)*(int *)(lVar5 + 0x10) != 0) {
      lVar4 = (longlong)*(int *)(lVar5 + 0x10) * 0x448;
      lVar5 = *(longlong *)(lVar5 + 8) + 0x1f0;
      do {
        FUN_140c3e4c2(lVar2,lVar5);
        lVar5 = lVar5 + 0x448;
        lVar4 = lVar4 + -0x448;
      } while (lVar4 != 0);
    }
  }
  return;
}



// FUNCTION 145983708 FUN_145983708 body=40 status=ok
// SIG undefined FUN_145983708(void)

undefined8 FUN_145983708(undefined8 param_1,int param_2)

{
  FUN_145983730();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145983730 FUN_145983730 body=91 status=ok
// SIG undefined FUN_145983730(void)

void FUN_145983730(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b82ac90;
  param_1[6] = &PTR_FUN_14b82af50;
  param_1[7] = &PTR_FUN_14b82afe0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_1458fc99a(param_1 + 9);
  FUN_140b3fd78(param_1);
  return;
}



// FUNCTION 145983792 FUN_145983792 body=228 status=ok
// SIG undefined FUN_145983792(void)

longlong FUN_145983792(void)

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
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cafa5a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463ebd96;
    local_38 = &LAB_147ca8d57;
    local_40 = FUN_14585ff22;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x3c0;
    FUN_14081cfa3(L"/Script/Engine",L"PlayerStart",&DAT_14cafa5a8,&DAT_147ca8d56);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cafa5a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598387e FUN_14598387e body=228 status=ok
// SIG undefined FUN_14598387e(void)

longlong FUN_14598387e(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb57468 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_14863f9c5;
    local_40 = &LAB_145a5b802;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x408;
    FUN_14081cfa3(L"/Script/GbxGame",L"EchoDialogSpeakerHost",&DAT_14cb57468,&DAT_14863f9c4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb57468;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14598396a FUN_14598396a body=228 status=ok
// SIG undefined FUN_14598396a(void)

longlong FUN_14598396a(void)

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
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9a148 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146591a10;
    local_38 = &LAB_148af40cb;
    local_40 = FUN_146591e5f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x138;
    FUN_14081cfa3(L"/Script/GameSettings",L"GameSettingValueScalar",&DAT_14cb9a148,&DAT_148af40ca);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9a148;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145983a50 FUN_145983a50 body=29 status=ok
// SIG undefined FUN_145983a50(void)

void FUN_145983a50(void)

{
  FUN_145983b7d();
  FUN_141412076();
  FUN_145983bf2();
  FUN_145983a6e();
  return;
}



// FUNCTION 145983a6e FUN_145983a6e body=75 status=ok
// SIG undefined FUN_145983a6e(void)

void FUN_145983a6e(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_140b631de();
  if (DAT_14cacd570 != 0) {
    FUN_14480f766(uVar2);
  }
  lVar1 = DAT_14cacd528;
  if (DAT_14cacd528 != 0) {
    FUN_145983aba(DAT_14cacd528);
    FUN_1400020a8(lVar1);
  }
  DAT_14cacd528 = 0;
  return;
}



// FUNCTION 145983aba FUN_145983aba body=87 status=ok
// SIG undefined FUN_145983aba(void)

void FUN_145983aba(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  FUN_145983b12(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_145983b48(param_1 + 8);
  return;
}



// FUNCTION 145983b12 FUN_145983b12 body=53 status=ok
// SIG undefined FUN_145983b12(void)

void FUN_145983b12(longlong *param_1)

{
  FUN_141412240();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145983b48 FUN_145983b48 body=53 status=ok
// SIG undefined FUN_145983b48(void)

void FUN_145983b48(longlong *param_1)

{
  FUN_141412458();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145983b7d FUN_145983b7d body=116 status=ok
// SIG undefined FUN_145983b7d(void)

void FUN_145983b7d(void)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446f470e(&local_18,L"NetActorFactory",1);
  FUN_14141200e(local_18);
  FUN_1446f470e(&local_20,L"NetSubObjectFactory",1);
  FUN_14141200e(local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145983bf2 FUN_145983bf2 body=275 status=ok
// SIG undefined FUN_145983bf2(void)

void FUN_145983bf2(void)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined4 local_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  int iStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = 0x100000000;
  uStack_40 = &DAT_14cacd618;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  uStack_30 = 0;
  if (DAT_14cacd630 == 0) {
    iVar2 = 0;
  }
  else {
    FUN_1449c0562(&local_48);
    iVar2 = DAT_14cacd630;
  }
  uStack_50 = CONCAT44(uStack_2c,uStack_30);
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_68 = (undefined4)local_48;
  uStack_64 = local_48._4_4_;
  uStack_60 = (undefined4)uStack_40;
  uStack_5c = uStack_40._4_4_;
  local_70 = &DAT_14cacd608;
  if ((iStack_34 != iVar2) || (uStack_40 != &DAT_14cacd618)) {
    do {
      plVar1 = *(longlong **)(*local_70 + 8 + (longlong)iStack_54 * 0x18);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x30))(plVar1,1);
      }
      local_58 = local_58 & ~uStack_64;
      FUN_1449c0562(&local_68);
    } while (((iStack_54 != iVar2) || ((undefined *)CONCAT44(uStack_5c,uStack_60) != &DAT_14cacd618)
             ) || (local_70 != &DAT_14cacd608));
  }
  FUN_145983d06();
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145983d06 FUN_145983d06 body=52 status=ok
// SIG undefined FUN_145983d06(void)

void FUN_145983d06(void)

{
  if (1 < DAT_14cacd650) {
    FUN_145bcca32();
    DAT_14cacd650 = 1;
    FUN_14144b8e6();
    return;
  }
  FUN_14794e1b0();
  FUN_145bcca32();
  return;
}



// FUNCTION 145983d3a FUN_145983d3a body=378 status=ok
// SIG undefined FUN_145983d3a(void)

void FUN_145983d3a(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 unaff_RBX;
  bool bVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  int local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
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
  bVar2 = local_3c != 0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_38;
  uVar1 = FUN_14477b664(uStack_30);
  local_50 = FUN_14477b664(uVar1);
  local_48 = local_28;
  FUN_141412632(local_20,&local_58,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar2) & 0xffffffff);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145983eb6 FUN_145983eb6 body=40 status=ok
// SIG undefined FUN_145983eb6(void)

undefined8 FUN_145983eb6(undefined8 param_1,int param_2)

{
  FUN_145983ede();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145983ede FUN_145983ede body=35 status=ok
// SIG undefined FUN_145983ede(void)

void FUN_145983ede(longlong param_1)

{
  FUN_1459ad83e(param_1 + 0x48);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145983f10 FUN_145983f10 body=61 status=ok
// SIG undefined FUN_145983f10(void)

undefined8 * FUN_145983f10(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b103380;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145983f5c FUN_145983f5c body=61 status=ok
// SIG undefined FUN_145983f5c(void)

undefined8 * FUN_145983f5c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b3025b0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145983fa8 FUN_145983fa8 body=61 status=ok
// SIG undefined FUN_145983fa8(void)

undefined8 * FUN_145983fa8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4911c0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145983fe6 FUN_145983fe6 body=9 status=ok
// SIG undefined FUN_145983fe6(void)

void FUN_145983fe6(longlong param_1)

{
  FUN_1414126ea(param_1 + 0x10);
  return;
}



// FUNCTION 145983ff0 FUN_145983ff0 body=40 status=ok
// SIG undefined FUN_145983ff0(void)

undefined8 FUN_145983ff0(undefined8 param_1,int param_2)

{
  FUN_145984018();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145984018 FUN_145984018 body=209 status=ok
// SIG undefined FUN_145984018(void)

void FUN_145984018(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b78db20;
  thunk_FUN_14598420a(param_1 + 0x2a);
  FUN_144a65a1e(param_1[0x28],*(undefined4 *)(param_1 + 0x29));
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x27];
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
  plVar3 = (longlong *)param_1[0x25];
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
  FUN_1459840ea(param_1);
  return;
}



// FUNCTION 1459840ea FUN_1459840ea body=276 status=ok
// SIG undefined FUN_1459840ea(void)

void FUN_1459840ea(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b529860;
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
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_144a65a1e(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_14598420a(param_1 + 0xf);
  if (param_1[0xe] != 0) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    param_1[0xe] = 0;
  }
  FUN_144760e21(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 1459841fe thunk_FUN_14598420a body=5 status=ok
// SIG undefined thunk_FUN_14598420a(void)

void thunk_FUN_14598420a(char *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (*param_1 == '\x01') {
    lVar1 = FUN_14479d2ce(param_1 + 4);
    if (lVar1 != 0) {
      plVar2 = (longlong *)FUN_14598425a(lVar1);
      if ((plVar2 != (longlong *)0x0) && (*param_1 == '\x01')) {
        LOCK();
        *(int *)(plVar2 + 6) = (int)plVar2[6] + -1;
        UNLOCK();
        (**(code **)(*plVar2 + 0x2b8))(plVar2);
      }
    }
    *param_1 = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
  }
  return;
}



// FUNCTION 145984204 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(void)

{
  thunk_FUN_144760e82();
  return;
}



// FUNCTION 14598420a FUN_14598420a body=80 status=ok
// SIG undefined FUN_14598420a(void)

void FUN_14598420a(char *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (*param_1 == '\x01') {
    lVar1 = FUN_14479d2ce(param_1 + 4);
    if (lVar1 != 0) {
      plVar2 = (longlong *)FUN_14598425a(lVar1);
      if ((plVar2 != (longlong *)0x0) && (*param_1 == '\x01')) {
        LOCK();
        *(int *)(plVar2 + 6) = (int)plVar2[6] + -1;
        UNLOCK();
        (**(code **)(*plVar2 + 0x2b8))(plVar2);
      }
    }
    *param_1 = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
  }
  return;
}



// FUNCTION 14598425a FUN_14598425a body=105 status=ok
// SIG undefined FUN_14598425a(void)

void FUN_14598425a(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145978eb4();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_1459842c4(param_1 + 0x100,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459842c4 FUN_1459842c4 body=76 status=ok
// SIG undefined FUN_1459842c4(void)

void FUN_1459842c4(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_145978eb4();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_145984301;
    }
  }
  lVar2 = 0;
LAB_145984301:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 145984310 FUN_145984310 body=254 status=ok
// SIG undefined FUN_145984310(void)

undefined8
FUN_145984310(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b9a7fb0;
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
  *local_48 = &PTR_FUN_14b9a7f40;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145984410(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145984410 FUN_145984410 body=216 status=ok
// SIG undefined FUN_145984410(void)

undefined8 * FUN_145984410(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1459844f6 FUN_1459844f6 body=24 status=ok
// SIG undefined FUN_1459844f6(void)

bool FUN_1459844f6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14598450e FUN_14598450e body=57 status=ok
// SIG undefined FUN_14598450e(void)

void FUN_14598450e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf9c8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf9c8 = FUN_140002ddd(FUN_1466137dc,uVar1,L"PlaceableActorDef");
  }
  return;
}



// FUNCTION 145984552 FUN_145984552 body=290 status=ok
// SIG undefined FUN_145984552(void)

void FUN_145984552(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *param_1 = &PTR_FUN_14bea9af0;
  if (DAT_14cc2afa8 != 0) {
    FUN_14480f766(param_1[0x7e] + 0x18);
  }
  if (DAT_14cc2afb0 != 0) {
    FUN_14480f766(param_1[0x7e] + 0x30);
  }
  if (DAT_14cc2afb8 != 0) {
    FUN_14480f766(param_1[0x7e] + 0x48);
  }
  if (DAT_14cc2afc0 != 0) {
    FUN_14480f766(param_1[0x7e] + 0x60);
  }
  if (DAT_14cc2afc8 != 0) {
    FUN_141092d32(param_1[0x7e] + 0x78);
  }
  plVar3 = (longlong *)param_1[0x7f];
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
  lVar4 = 0x3e0;
  do {
    FUN_141412c32(*(undefined8 *)((longlong)param_1 + lVar4),
                  *(undefined4 *)((longlong)param_1 + lVar4 + 8));
    if (*(longlong *)((longlong)param_1 + lVar4) != 0) {
      FUN_1400020a8();
    }
    lVar4 = lVar4 + -0x10;
  } while (lVar4 != 0x380);
  lVar4 = 0x328;
  do {
    FUN_140e848f6((longlong)param_1 + lVar4);
    lVar4 = lVar4 + -0x68;
  } while (lVar4 != 0xb8);
  FUN_145d1c0cc(param_1);
  return;
}



// FUNCTION 145984674 FUN_145984674 body=43 status=ok
// SIG undefined FUN_145984674(void)

undefined8 FUN_145984674(undefined8 param_1,int param_2)

{
  FUN_1459846a0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 1459846a0 FUN_1459846a0 body=115 status=ok
// SIG undefined FUN_1459846a0(void)

void FUN_1459846a0(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_149f9dea0;
  FUN_14004673c(param_1 + 0x11,0);
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_145984714(param_1 + 5);
  *param_1 = &PTR_LAB_149f9a4a0;
  lVar1 = param_1[1];
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



// FUNCTION 145984714 FUN_145984714 body=53 status=ok
// SIG undefined FUN_145984714(void)

void FUN_145984714(longlong *param_1)

{
  FUN_14598474a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14598474a FUN_14598474a body=90 status=ok
// SIG undefined FUN_14598474a(void)

void FUN_14598474a(longlong param_1)

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



// FUNCTION 1459847a4 FUN_1459847a4 body=115 status=ok
// SIG undefined FUN_1459847a4(void)

void FUN_1459847a4(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 145984818 FUN_145984818 body=147 status=ok
// SIG undefined FUN_145984818(void)

void FUN_145984818(longlong param_1,int param_2)

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



// FUNCTION 1459848ac FUN_1459848ac body=40 status=ok
// SIG undefined FUN_1459848ac(void)

undefined8 FUN_1459848ac(undefined8 param_1,int param_2)

{
  FUN_1459848d4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459848d4 FUN_1459848d4 body=73 status=ok
// SIG undefined FUN_1459848d4(void)

void FUN_1459848d4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14acffda0;
  plVar3 = (longlong *)param_1[8];
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
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 14598492c FUN_14598492c body=40 status=ok
// SIG undefined FUN_14598492c(void)

undefined8 FUN_14598492c(undefined8 param_1,int param_2)

{
  FUN_145984954();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145984954 FUN_145984954 body=59 status=ok
// SIG undefined FUN_145984954(void)

void FUN_145984954(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b081df0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 145984990 FUN_145984990 body=563 status=ok
// SIG undefined FUN_145984990(void)

void FUN_145984990(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  undefined4 local_90;
  longlong *local_88;
  longlong *local_80;
  wchar_t *local_78;
  undefined4 local_70;
  longlong *local_68;
  int local_60;
  undefined4 uStack_5c;
  longlong *local_58;
  int local_50;
  longlong local_48 [2];
  longlong *local_38;
  int local_30;
  wchar_t *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar3 = (longlong *)FUN_144a8054c();
  local_78 = L"FSR3";
  local_70 = 4;
  (**(code **)(*plVar3 + 0x70))(plVar3,&local_68);
  (**(code **)(*local_68 + 0x20))(local_68,&local_58);
  local_38 = local_58;
  local_30 = local_50 + -1;
  if (local_50 == 0) {
    local_30 = 0;
  }
  local_28 = L"Source/fidelityfx-hlsl";
  local_20 = 0x16;
  FUN_140bee87a(local_48,&local_38,2);
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)CONCAT44(uStack_5c,local_60);
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
  FUN_140056680(&local_38,L"/ThirdParty/FFX");
  FUN_141414c4a(&local_38,local_48);
  if (local_38 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)FUN_144a8054c();
  local_98 = L"FSR3";
  local_90 = 4;
  (**(code **)(*plVar3 + 0x70))(plVar3,&local_88);
  (**(code **)(*local_88 + 0x20))(local_88,&local_68);
  local_38 = local_68;
  local_30 = local_60 + -1;
  if (local_60 == 0) {
    local_30 = 0;
  }
  local_28 = L"Shaders";
  local_20 = 7;
  FUN_140bee87a(&local_58,&local_38,2);
  if (local_68 != (longlong *)0x0) {
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
      piVar2 = (int *)((longlong)local_80 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_80 + 0x10))(local_80);
      }
    }
  }
  FUN_140056680(&local_38,L"/Plugin/FFX");
  FUN_141414c4a(&local_38,&local_58);
  if (local_38 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145984bc4 FUN_145984bc4 body=250 status=ok
// SIG undefined FUN_145984bc4(void)

void FUN_145984bc4(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448ef896();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb54450) {
    FUN_144b3d300(&DAT_14cb54450);
    if (DAT_14cb54450 == -1) {
      FUN_1446f470e(&local_28,L"WorldWeatherData",1);
      uVar1 = FUN_14593f08e();
      FUN_14593f08e();
      DAT_14cb54448 = FUN_140f1fabf(uVar1,local_28);
      _Init_thread_footer(&DAT_14cb54450);
    }
  }
  uVar1 = FUN_144a83aa4();
  if (0 < *(int *)(DAT_14cb54448 + 0x30)) {
    iVar2 = 0;
    do {
      FUN_1448ef1fe(uVar1,param_1,*(int *)(DAT_14cb54448 + 0x40) + iVar2,
                    *(undefined1 *)(param_1 + 0x48c));
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(DAT_14cb54448 + 0x30));
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145984cc0 FUN_145984cc0 body=137 status=ok
// SIG undefined FUN_145984cc0(void)

undefined8 * FUN_145984cc0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  *(undefined1 *)(param_1 + 0xd) = 0;
  uVar1 = FUN_140b631de();
  FUN_145984d4a(uVar1,&local_20,param_1);
  *param_1 = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145984d4a FUN_145984d4a body=228 status=ok
// SIG undefined FUN_145984d4a(void)

undefined8 FUN_145984d4a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_149e020b0;
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
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_149f7d190;
  local_38[3] = param_3;
  local_38[4] = FUN_1411cfd46;
  FUN_1448b6402(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145984e30 FUN_145984e30 body=66 status=ok
// SIG undefined FUN_145984e30(void)

void FUN_145984e30(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_1414dac37();
  cVar1 = (**(code **)(*plVar2 + 0x100))(plVar2);
  if (cVar1 == '\0') {
    FUN_14598420a(param_2);
    return;
  }
  return;
}



// FUNCTION 145984e72 FUN_145984e72 body=40 status=ok
// SIG undefined FUN_145984e72(void)

undefined8 FUN_145984e72(undefined8 param_1,int param_2)

{
  FUN_145984e9a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145984e9a FUN_145984e9a body=92 status=ok
// SIG undefined FUN_145984e9a(void)

void FUN_145984e9a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b831660;
  param_1[6] = &PTR_FUN_14b831920;
  param_1[7] = &PTR_FUN_14b8319b0;
  if (*(char *)((longlong)param_1 + 0x21c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x21c) = 0;
  }
  FUN_140368b56(param_1 + 0x28);
  FUN_140368b56(param_1 + 0xd);
  FUN_140b3fd78(param_1);
  return;
}



// FUNCTION 145984ef6 FUN_145984ef6 body=455 status=ok
// SIG undefined FUN_145984ef6(void)

longlong * FUN_145984ef6(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_98 [40];
  longlong *local_70;
  longlong *local_68;
  code *local_60;
  undefined4 local_58;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar3 = (**(code **)(*(longlong *)*param_3 + 0x50))();
  if (cVar3 != '\0') {
    plVar4 = (longlong *)(**(code **)(*(longlong *)*param_3 + 8))();
    if (plVar4 != (longlong *)0x0) {
      lVar5 = FUN_144a2f878();
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
          lVar5 + 0x30)) {
        lVar5 = (**(code **)(*plVar4 + 0x5d8))(plVar4);
        if (lVar5 != 0) {
          lVar6 = FUN_144a5dd5e();
          if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
            cVar3 = FUN_140d62f4c(*(undefined8 *)(lVar5 + 0xb10));
            plVar7 = (longlong *)FUN_14001cc68(0x40,0x10);
            plVar7[1] = (longlong)&DAT_100000001;
            *plVar7 = (longlong)&PTR_FUN_14b99f630;
            plVar1 = plVar7 + 2;
            plVar7[3] = 0;
            plVar7[4] = 0;
            *(undefined8 *)((longlong)plVar7 + 0x24) = 0;
            *(undefined8 *)((longlong)plVar7 + 0x2c) = 0;
            *(char *)(plVar7 + 7) = cVar3 * '\x02';
            plVar7[2] = (longlong)&PTR_FUN_14b99f650;
            local_70 = plVar1;
            local_68 = plVar7;
            FUN_1459851bc(&local_70,plVar1);
            local_60 = FUN_140d62f2c;
            local_58 = 0;
            FUN_14598525e(local_50,&local_70);
            FUN_1459850be(plVar4 + 0xddd,&local_60,local_50);
            FUN_1449db362(local_50);
            plVar4 = local_68;
            *param_2 = (longlong)plVar1;
            param_2[1] = (longlong)plVar7;
            if (plVar7 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
              UNLOCK();
              if (local_68 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_68 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*local_68)(local_68);
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
            if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0();
            }
            return param_2;
          }
        }
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
}



// FUNCTION 1459850be FUN_1459850be body=216 status=ok
// SIG undefined FUN_1459850be(void)

undefined8 * FUN_1459850be(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1459851a4 FUN_1459851a4 body=24 status=ok
// SIG undefined FUN_1459851a4(void)

bool FUN_1459851a4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1459851bc FUN_1459851bc body=162 status=ok
// SIG undefined FUN_1459851bc(void)

void FUN_1459851bc(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1459851fb;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1459851fb;
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
LAB_1459851fb:
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
                    /* WARNING: Could not recover jumptable at 0x00014598525a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14598525e FUN_14598525e body=300 status=ok
// SIG undefined FUN_14598525e(void)

longlong * FUN_14598525e(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  uVar6 = *param_2;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 == (longlong *)0x0) {
    *puVar5 = &PTR_LAB_14b3e9d10;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b99f670;
    puVar5[3] = uVar6;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b3e9d10;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b99f670;
    puVar5[3] = uVar6;
    puVar5[4] = plVar7;
    LOCK();
    *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 14598538a FUN_14598538a body=22 status=ok
// SIG undefined FUN_14598538a(void)

undefined8 FUN_14598538a(undefined8 param_1)

{
  FUN_1459853a0();
  return param_1;
}


