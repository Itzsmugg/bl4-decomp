// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146b6a2a0 FUN_146b6a2a0 body=131 status=ok
// SIG undefined FUN_146b6a2a0(void)

undefined8 * FUN_146b6a2a0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x234);
  while ((iVar1 == 0 && (*(int *)(param_1 + 0x230) == 0))) {
    FUN_14000f986(0x3dcccccd);
    iVar1 = *(int *)(param_1 + 0x234);
  }
  *param_2 = 0;
  param_2[1] = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x110));
  FUN_140b7fa3a(param_2,param_1 + 0x138);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x110));
  return param_2;
}



// FUNCTION 146b6a324 FUN_146b6a324 body=65 status=ok
// SIG undefined FUN_146b6a324(void)

ulonglong FUN_146b6a324(longlong param_1)

{
  ulonglong uVar1;
  
  if (*(int *)(param_1 + 0x90) == 0) {
    uVar1 = 0;
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
    uVar1 = CONCAT71((int7)((ulonglong)param_1 >> 8),*(int *)(param_1 + 0x80) == 0);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  }
  return uVar1 & 0xffffffff;
}



// FUNCTION 146b6a366 FUN_146b6a366 body=48 status=ok
// SIG undefined FUN_146b6a366(void)

undefined8 FUN_146b6a366(longlong param_1)

{
  undefined8 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  return uVar1;
}



// FUNCTION 146b6a396 FUN_146b6a396 body=706 status=ok
// SIG undefined FUN_146b6a396(void)

/* WARNING: Removing unreachable block (ram,0x000146b6a5df) */
/* WARNING: Removing unreachable block (ram,0x000146b6a5f3) */

longlong * FUN_146b6a396(longlong param_1,longlong *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  longlong local_d8;
  LPCRITICAL_SECTION local_d0;
  longlong local_c8 [2];
  longlong *local_b8;
  undefined4 local_b0;
  uint uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined1 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x98);
  *param_2 = 0;
  param_2[1] = 0;
  EnterCriticalSection(lpCriticalSection);
  FUN_146b6a65a(param_1 + 0xc0,param_2);
  plVar1 = (longlong *)(param_1 + 0x148);
  lVar8 = param_1 + 0x158;
  local_90 = 0x100000000;
  local_80 = 0xffffffff;
  uStack_78 = 0;
  local_d0 = lpCriticalSection;
  uStack_88 = lVar8;
  if (*(int *)(param_1 + 0x170) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_90);
    iVar7 = *(int *)(param_1 + 0x170);
  }
  uStack_98 = CONCAT44(uStack_74,uStack_78);
  local_a0 = local_80;
  uVar5 = local_a0;
  local_b0 = (undefined4)local_90;
  uStack_ac = local_90._4_4_;
  uStack_a8 = (undefined4)uStack_88;
  uStack_a4 = uStack_88._4_4_;
  local_a0._4_4_ = (int)((ulonglong)local_80 >> 0x20);
  local_b8 = plVar1;
  if ((local_a0._4_4_ != iVar7) || (uStack_88 != lVar8)) {
    iVar6 = local_a0._4_4_;
    local_d8 = lVar8;
    local_a0 = uVar5;
    do {
      lVar8 = *local_b8;
      FUN_140056680(local_c8,&DAT_149dfb77a);
      local_e8 = local_c8;
      FUN_146b6a78a(&local_90,(longlong)iVar6 * 0x18 + lVar8,0,0);
      if (local_c8[0] != 0) {
        FUN_1400020a8();
      }
      FUN_142787a10(param_1 + 0x198,&local_70);
      iVar6 = (int)param_2[1];
      lVar8 = (longlong)iVar6;
      *(uint *)(param_2 + 1) = iVar6 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar6 + 1U) {
        FUN_146b81c98(param_2,iVar6);
      }
      lVar4 = local_d8;
      lVar3 = *param_2;
      *(undefined8 *)(lVar3 + lVar8 * 0x48) = 0;
      *(undefined8 *)(lVar3 + lVar8 * 0x48) = local_90;
      *(undefined4 *)(lVar3 + 8 + lVar8 * 0x48) = (undefined4)uStack_88;
      *(undefined4 *)(lVar3 + 0xc + lVar8 * 0x48) = uStack_88._4_4_;
      *(undefined8 *)(lVar3 + 0x10 + lVar8 * 0x48) = local_80;
      *(ulonglong *)(lVar3 + 0x18 + lVar8 * 0x48) = CONCAT44(uStack_74,uStack_78);
      puVar2 = (undefined4 *)(lVar3 + 0x20 + lVar8 * 0x48);
      *puVar2 = local_70;
      puVar2[1] = uStack_6c;
      puVar2[2] = uStack_68;
      puVar2[3] = uStack_64;
      *(undefined4 *)(lVar3 + 0x30 + lVar8 * 0x48) = local_60;
      *(undefined1 *)(lVar3 + 0x34 + lVar8 * 0x48) = local_5c;
      *(undefined8 *)(lVar3 + 0x38 + lVar8 * 0x48) = 0;
      *(undefined8 *)(lVar3 + 0x38 + lVar8 * 0x48) = local_58;
      *(undefined4 *)(lVar3 + 0x40 + lVar8 * 0x48) = (undefined4)local_50;
      *(undefined4 *)(lVar3 + 0x44 + lVar8 * 0x48) = local_50._4_4_;
      local_50 = 0;
      local_58 = 0;
      uStack_88 = 0;
      local_90 = 0;
      local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0 & ~uStack_ac);
      FUN_1449c0562(&local_b0);
      iVar6 = local_a0._4_4_;
      uVar5 = local_a0;
    } while (local_b8 != plVar1 ||
             (CONCAT44(uStack_a4,uStack_a8) != lVar4 || local_a0._4_4_ != iVar7));
  }
  local_a0 = uVar5;
  LeaveCriticalSection(local_d0);
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146b6a65a FUN_146b6a65a body=302 status=ok
// SIG undefined FUN_146b6a65a(void)

void FUN_146b6a65a(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
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
  FUN_146b81b1e(param_2,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  local_48 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      iVar3 = iStack_5c;
      lVar2 = *local_78;
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_146b81c98(param_2,iVar1);
      }
      FUN_146b81bd4((longlong)iVar1 * 0x48 + *param_2,lVar2 + (longlong)iVar3 * 0x58 + 8);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b6a78a FUN_146b6a78a body=195 status=ok
// SIG undefined FUN_146b6a78a(void)

undefined8 *
FUN_146b6a78a(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d) = 0;
  iVar1 = *(int *)(param_5 + 1);
  pvVar2 = (void *)*param_5;
  *(int *)(param_1 + 8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 7,iVar1,0);
    memcpy((void *)param_1[7],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 146b6a85a FUN_146b6a85a body=503 status=ok
// SIG undefined FUN_146b6a85a(void)

void FUN_146b6a85a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  undefined2 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_c8 [32];
  int local_a8;
  void *local_98;
  int local_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  longlong local_78 [3];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78[0] = 0;
  local_78[1] = 0;
  if (*(int *)(param_1 + 0x20) == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 0x18);
  }
  FUN_140f7cb10(local_78,puVar4,0,0);
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  local_a8 = CONCAT31(local_a8._1_3_,1);
  FUN_144a38a52(local_78,&local_88,&PTR_DAT_14c7585f0,3);
  uVar6 = 0;
  if ((longlong)(int)uStack_80 != 0) {
    lVar9 = (longlong)(int)uStack_80 << 4;
    puVar5 = local_88;
    do {
      FUN_14033cb48(puVar5);
      iVar2 = *(int *)(puVar5 + 1);
      if (iVar2 - 2U < 0x7fffffff) {
        local_a8 = iVar2 + (uint)(*(int *)(param_1 + 0x10) == 0);
        local_98 = (void *)0x0;
        FUN_14125bce8(&local_98,*(undefined8 *)(param_1 + 8),*(int *)(param_1 + 0x10),0);
        FUN_1401aebe8(&local_98,*puVar5,iVar2 + -1);
        FUN_1448097c4(&local_98,&DAT_149e01f64,&DAT_149e065c6);
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1447a1bd6(param_2,iVar2);
        }
        _Src = local_98;
        lVar3 = *param_2;
        lVar8 = (longlong)iVar2 * 0x10;
        puVar1 = (undefined8 *)(lVar3 + lVar8);
        *(undefined8 *)(lVar3 + lVar8) = 0;
        lVar7 = (longlong)local_90;
        *(int *)(lVar3 + 8 + lVar8) = local_90;
        if (lVar7 == 0) {
          *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar1,local_90,0);
          memcpy((void *)*puVar1,_Src,lVar7 * 2);
        }
        if (local_98 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      puVar5 = puVar5 + 2;
      lVar9 = lVar9 + -0x10;
    } while (lVar9 != 0);
    uVar6 = (int)uStack_80;
  }
  FUN_1447a1747(local_88,uVar6);
  if (local_88 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b6aa52 FUN_146b6aa52 body=72 status=ok
// SIG undefined FUN_146b6aa52(void)

void FUN_146b6aa52(longlong param_1,undefined8 param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x110));
  FUN_140bee9ec(param_1 + 0x138,param_2);
  LOCK();
  *(undefined4 *)(param_1 + 0x234) = 1;
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x000146b6aa93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x110));
  return;
}



// FUNCTION 146b6aa9a FUN_146b6aa9a body=154 status=ok
// SIG undefined FUN_146b6aa9a(void)

void FUN_146b6aa9a(longlong param_1,longlong *param_2)

{
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  local_38 = param_2 + 3;
  local_30 = param_2;
  FUN_146b81d2c(param_1 + 0xc0,local_24);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  if (param_2[7] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b6ab44 FUN_146b6ab44 body=175 status=ok
// SIG undefined FUN_146b6ab44(void)

void FUN_146b6ab44(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  if (*(int *)(param_1 + 200) != *(int *)(param_1 + 0xf4)) {
    lVar2 = param_1 + 0xf8;
    if (*(longlong *)(param_1 + 0x100) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x100);
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)
                             (*(int *)(param_1 + 0x108) - 1U &
                             (int)param_2 + (int)((ulonglong)param_2 >> 0x20) * 0x17) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0xc0) + (longlong)iVar1 * 0x58;
        if (*(longlong *)(*(longlong *)(param_1 + 0xc0) + (longlong)iVar1 * 0x58) == param_2)
        goto LAB_146b6ab78;
        iVar1 = *(int *)(lVar2 + 0x50);
      } while (iVar1 != -1);
    }
  }
  lVar2 = 0;
LAB_146b6ab78:
  FUN_142787a10(param_3,lVar2 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x000146b6ab90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  return;
}



// FUNCTION 146b6abf4 FUN_146b6abf4 body=122 status=ok
// SIG undefined FUN_146b6abf4(void)

void FUN_146b6abf4(longlong param_1,longlong *param_2)

{
  undefined1 auStack_48 [36];
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  FUN_140e830ae(param_1 + 0x148,local_24,param_2,0);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b6ac70 FUN_146b6ac70 body=132 status=ok
// SIG undefined FUN_146b6ac70(void)

undefined8 FUN_146b6ac70(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68 [48];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = FUN_14001cc68(0x238,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_146b308be(local_68,param_1);
  FUN_146b69d2e(uVar1,local_68,&local_38);
  FUN_146b31b5e(param_1);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b6acf6 FUN_146b6acf6 body=394 status=ok
// SIG undefined FUN_146b6acf6(void)

undefined8 * FUN_146b6acf6(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  code *local_48;
  longlong *local_40;
  code **local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149f31e60;
  param_1[1] = param_2;
  puVar1 = param_1 + 2;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  local_48 = (code *)&LAB_14294c272;
  FUN_140056680(local_58,L"readonly");
  local_40 = local_58;
  local_38 = &local_48;
  FUN_146b8229c(puVar1,local_2c);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  local_48 = (code *)&LAB_14294c282;
  FUN_140056680(local_58,L"compressed");
  local_40 = local_58;
  local_38 = &local_48;
  FUN_146b8229c(puVar1,local_2c);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  local_48 = (code *)&LAB_14294c294;
  FUN_140056680(local_58,L"executable");
  local_40 = local_58;
  local_38 = &local_48;
  FUN_146b8229c(puVar1,local_2c);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  local_48 = FUN_14294c2a6;
  FUN_140056680(local_58,&DAT_149f31eae);
  local_40 = local_58;
  local_38 = &local_48;
  FUN_146b8229c(puVar1,local_2c);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b6ae82 FUN_146b6ae82 body=103 status=ok
// SIG undefined FUN_146b6ae82(void)

undefined8 * FUN_146b6ae82(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_14001cc68(0x60,0x10);
  FUN_146b6acf6(uVar1,param_2);
  *param_1 = uVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_149f339b0;
  puVar2[2] = uVar1;
  param_1[1] = puVar2;
  return param_1;
}



// FUNCTION 146b6aeea FUN_146b6aeea body=1052 status=ok
// SIG undefined FUN_146b6aeea(void)

undefined8 *
FUN_146b6aeea(undefined8 *param_1,undefined8 param_2,undefined1 *param_3,undefined4 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint *puVar9;
  longlong *plVar10;
  int iVar11;
  undefined1 *puVar12;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  longlong *local_a8;
  undefined8 local_a0;
  undefined4 *local_98;
  uint local_90;
  int iStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  longlong local_80;
  undefined4 *local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *param_1 = &PTR_FUN_149f31ec0;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = *param_3;
  uVar7 = FUN_14001cc68(0x2b8,0x10);
  FUN_146b37170(uVar7);
  param_1[3] = uVar7;
  puVar8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar8[1] = &DAT_100000001;
  *puVar8 = &PTR_FUN_149f2f9a0;
  puVar8[2] = uVar7;
  param_1[4] = puVar8;
  param_1[9] = 0;
  iVar11 = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  FUN_146b7ac2c(param_1 + 5,param_4 + 0x46);
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)(param_1[3] + 8) = *param_4;
  *(undefined1 *)(param_1[3] + 0xc) = 0;
  *(undefined4 *)(param_1[3] + 0x10) = param_4[1];
  FUN_144a787a6(param_1[3] + 0x18,param_4 + 2);
  FUN_144a787a6(param_1[3] + 0x28,param_4 + 6);
  FUN_144a787a6(param_1[3] + 0x38,param_4 + 10);
  FUN_144a787a6(param_1[3] + 0x48,param_4 + 0xe);
  FUN_1410b2022(param_1[3] + 0x58,param_4 + 0x12);
  FUN_144a787a6(param_1[3] + 0xa8,param_4 + 0x26);
  FUN_144a787a6(param_1[3] + 0xb8,param_4 + 0x2a);
  FUN_144a787a6(param_1[3] + 200,param_4 + 0x2e);
  plVar10 = (longlong *)(param_4 + 0x32);
  puVar3 = param_4 + 0x36;
  local_80 = 0x100000000;
  local_70 = 0xffffffff;
  iStack_6c = 0;
  local_68 = 0;
  local_78 = puVar3;
  if (param_4[0x3c] != 0) {
    FUN_1449c0562(&local_80);
    iVar11 = param_4[0x3c];
  }
  local_90 = local_70;
  iStack_8c = iStack_6c;
  local_88 = local_68;
  local_84 = local_64;
  local_a0 = local_80;
  local_98 = local_78;
  local_a8 = plVar10;
  if ((iStack_6c != iVar11) || (local_78 != puVar3)) {
    do {
      lVar4 = *local_a8 + (longlong)iStack_8c * 0x30;
      puVar9 = (uint *)(*local_a8 + (longlong)iStack_8c * 0x30 + 0x10);
      uVar5 = *puVar9;
      if ((uVar5 & 0xfffffffd) == 8) {
        plVar6 = (longlong *)param_1[3];
        local_80 = FUN_146918e4a();
        puVar12 = local_b8;
        (**(code **)(*plVar6 + 0x108))(plVar6,puVar12,lVar4);
LAB_146b6b181:
        plVar6 = *(longlong **)(puVar12 + 8);
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
      else if (uVar5 < 0x21) {
        if ((0x1e000f000U >> ((ulonglong)uVar5 & 0x3f) & 1) != 0) {
          plVar6 = (longlong *)param_1[3];
          local_80 = FUN_146b82fce();
          puVar12 = local_c8;
          (**(code **)(*plVar6 + 0x100))(plVar6,puVar12,lVar4);
          goto LAB_146b6b181;
        }
        if ((ulonglong)uVar5 == 0x18) {
          plVar6 = (longlong *)param_1[3];
          FUN_14691873a(puVar9,&local_80);
          (**(code **)(*plVar6 + 0x110))(plVar6,local_d8,lVar4,&local_80);
          plVar6 = local_d0;
          if (local_d0 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_d0 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_d0)(local_d0);
              LOCK();
              piVar2 = (int *)((longlong)plVar6 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar6 + 0x10))(plVar6);
              }
            }
          }
          if (local_80 != 0) {
            FUN_1400020a8();
          }
        }
      }
      local_90 = local_90 & ~local_a0._4_4_;
      FUN_1449c0562(&local_a0);
    } while (local_a8 != plVar10 || (local_98 != puVar3 || iStack_8c != iVar11));
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146b6b308 FUN_146b6b308 body=156 status=ok
// SIG undefined FUN_146b6b308(void)

void FUN_146b6b308(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f31ec0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_146b7ae18(param_1 + 0x11);
  FUN_146b30b8c(param_1 + 0xf);
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_146b48822(param_1 + 5);
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
                    /* WARNING: Could not recover jumptable at 0x000146b6b398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146b6b3a4 FUN_146b6b3a4 body=61 status=ok
// SIG undefined FUN_146b6b3a4(void)

void FUN_146b6b3a4(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146b55270(param_1,iVar1);
  }
  FUN_146b7bd0e((longlong)iVar1 * 0x60 + *param_1,1);
  return;
}



// FUNCTION 146b6b3e2 FUN_146b6b3e2 body=2431 status=ok
// SIG undefined FUN_146b6b3e2(void)

longlong *
FUN_146b6b3e2(longlong param_1,longlong *param_2,ulonglong param_3,longlong param_4,
             undefined8 param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong **pplVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong lVar18;
  int iVar19;
  ulonglong uVar20;
  longlong *plVar21;
  ulonglong uVar22;
  longlong *plVar23;
  longlong lVar24;
  longlong *plVar25;
  int iVar26;
  int iVar27;
  longlong *plVar28;
  longlong *plVar29;
  longlong lVar30;
  longlong *plVar31;
  int iVar32;
  bool bVar33;
  float fVar34;
  undefined1 auStack_3e8 [44];
  int local_3bc;
  longlong *local_3b8;
  longlong local_3b0;
  longlong *local_3a8;
  longlong *local_3a0;
  undefined4 *local_398;
  longlong *local_390;
  longlong *local_388;
  undefined8 uStack_380;
  longlong *local_378;
  undefined8 local_370;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined8 local_360;
  ulonglong uStack_358;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong uStack_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  *param_2 = 0;
  param_2[1] = 0;
  plVar11 = (longlong *)(param_1 + 0x88);
  local_388 = (longlong *)0x0;
  uStack_380 = 0;
  local_3b0 = param_1 + 0x98;
  local_78 = (longlong *)&DAT_100000000;
  local_68 = 0xffffffff;
  uStack_60 = uStack_60 & 0xffffffff00000000;
  uStack_70 = local_3b0;
  if (*(int *)(param_1 + 0xb0) == 0) {
    local_3bc = 0;
  }
  else {
    FUN_1449c0562(&local_78);
    local_3bc = *(int *)(param_1 + 0xb0);
  }
  uVar22 = param_4 + param_3;
  local_360 = local_68;
  lVar24 = local_360;
  uStack_358 = uStack_60;
  local_370 = local_78;
  uStack_368 = (undefined4)uStack_70;
  uStack_364 = uStack_70._4_4_;
  local_360._4_4_ = (int)((ulonglong)local_68 >> 0x20);
  iVar26 = local_360._4_4_;
  local_3b8 = param_2;
  local_3a8 = plVar11;
  local_378 = plVar11;
  if ((local_360._4_4_ != local_3bc) || (local_360 = lVar24, uStack_70 != local_3b0)) {
    do {
      local_360 = lVar24;
      lVar24 = (longlong)*(int *)(*local_378 + 0x18 + (longlong)iVar26 * 0x28);
      if (lVar24 != 0) {
        local_398 = (undefined4 *)(*local_378 + (longlong)iVar26 * 0x28);
        plVar11 = *(longlong **)(local_398 + 4);
        local_3a0 = plVar11 + lVar24 * 2;
        do {
          lVar24 = *plVar11;
          local_390 = plVar11;
          if (lVar24 != 0) {
            lVar18 = 0;
            do {
              lVar12 = FUN_146b31150(lVar24);
              uVar20 = lVar12 + *(longlong *)(lVar24 + 8);
              uVar13 = FUN_146b31150(lVar24);
              if (param_3 < uVar20 && uVar13 < uVar22) {
                uVar13 = FUN_146b31150(lVar24);
                if (uVar13 < param_3) {
                  uVar13 = param_3;
                }
                if (uVar22 <= uVar20) {
                  uVar20 = uVar22;
                }
                lVar12 = FUN_146b31150(lVar24);
                uVar9 = uStack_380;
                lVar30 = (longlong)(int)uStack_380;
                uVar14 = (int)uStack_380 + 1;
                uStack_380 = CONCAT44(uStack_380._4_4_,uVar14);
                if (uStack_380._4_4_ < uVar14) {
                  FUN_146b836be(&local_388,uVar9 & 0xffffffff);
                }
                lVar18 = (uVar13 - lVar12) + lVar18;
                uVar2 = local_398[1];
                uVar3 = local_398[2];
                uVar4 = local_398[3];
                plVar11 = local_388 + lVar30 * 5;
                *(undefined4 *)plVar11 = *local_398;
                *(undefined4 *)((longlong)plVar11 + 4) = uVar2;
                *(undefined4 *)(plVar11 + 1) = uVar3;
                *(undefined4 *)((longlong)plVar11 + 0xc) = uVar4;
                local_388[lVar30 * 5 + 2] = uVar13;
                local_388[lVar30 * 5 + 3] = lVar18;
                local_388[lVar30 * 5 + 4] = uVar20 - uVar13;
                FUN_1457adc9c(param_5,&local_78,local_398,0);
                lVar12 = *(longlong *)(lVar24 + 8);
                lVar30 = FUN_146b31150(lVar24);
                lVar18 = lVar30 + (lVar18 - uVar13) + lVar12;
              }
              else {
                lVar18 = lVar18 + *(longlong *)(lVar24 + 8);
              }
              lVar24 = *(longlong *)(lVar24 + 0x18);
            } while (lVar24 != 0);
          }
          plVar11 = local_390 + 2;
        } while (plVar11 != local_3a0);
      }
      local_360 = CONCAT44(local_360._4_4_,(uint)local_360 & ~local_370._4_4_);
      FUN_1449c0562(&local_370);
      iVar26 = local_360._4_4_;
      lVar24 = local_360;
    } while (local_378 != local_3a8 ||
             (CONCAT44(uStack_364,uStack_368) != local_3b0 || local_360._4_4_ != local_3bc));
  }
  plVar11 = local_388;
  iVar26 = (int)uStack_380;
  lVar24 = (longlong)(int)uStack_380;
  if (1 < lVar24) {
    memset(&uStack_368,0,0x2f0);
    local_378 = plVar11;
    local_370 = plVar11 + lVar24 * 5 + -5;
    fVar34 = logf((float)iVar26);
    uStack_368 = (int)(longlong)(fVar34 + fVar34);
    pplVar15 = &local_378;
    do {
      plVar16 = *pplVar15;
      plVar21 = pplVar15[1];
      iVar26 = *(int *)(pplVar15 + 2);
      iVar32 = (int)((ulonglong)((longlong)plVar21 - (longlong)plVar16) >> 3) * -0x33333333;
      uVar14 = iVar32 + 1;
      plVar23 = plVar16;
      plVar17 = plVar16;
      plVar11 = plVar21;
      if (iVar26 != 0) {
LAB_146b6b701:
        if (8 < (int)uVar14) {
          uVar22 = (ulonglong)(uVar14 >> 1);
          lVar24 = plVar17[uVar22 * 5 + 4];
          lVar18 = plVar17[uVar22 * 5];
          lVar12 = (plVar17 + uVar22 * 5)[1];
          lVar30 = plVar17[uVar22 * 5 + 2];
          lVar5 = (plVar17 + uVar22 * 5 + 2)[1];
          plVar17[uVar22 * 5 + 4] = plVar17[4];
          lVar6 = *plVar17;
          lVar7 = plVar17[1];
          lVar8 = plVar17[3];
          plVar17[uVar22 * 5 + 2] = plVar17[2];
          (plVar17 + uVar22 * 5 + 2)[1] = lVar8;
          plVar17[uVar22 * 5] = lVar6;
          (plVar17 + uVar22 * 5)[1] = lVar7;
          plVar17[4] = lVar24;
          plVar17[2] = lVar30;
          plVar17[3] = lVar5;
          *plVar17 = lVar18;
          plVar17[1] = lVar12;
          plVar28 = plVar11 + 5;
          plVar16 = plVar17;
          do {
            plVar10 = plVar16 + 5;
            plVar25 = plVar16 + 5;
            do {
              plVar16 = plVar25;
              plVar31 = plVar10;
              if (plVar11 < plVar16) break;
              plVar10 = plVar31 + 5;
              plVar25 = plVar16 + 5;
            } while ((ulonglong)plVar16[2] <= (ulonglong)plVar17[2]);
            plVar10 = plVar28 + -10;
            do {
              plVar25 = plVar28;
              plVar29 = plVar10;
              plVar28 = plVar25 + -5;
              if (plVar28 <= plVar17) break;
              plVar10 = plVar29 + -5;
            } while ((ulonglong)plVar17[2] <= (ulonglong)plVar25[-3]);
            if (plVar28 < plVar16) goto LAB_146b6b83c;
            lVar24 = plVar16[4];
            lVar18 = *plVar16;
            lVar12 = plVar16[1];
            lVar30 = plVar16[2];
            lVar5 = plVar16[3];
            plVar16[4] = plVar25[-1];
            lVar6 = *plVar28;
            lVar7 = plVar25[-4];
            lVar8 = plVar25[-2];
            plVar16[2] = plVar25[-3];
            plVar16[3] = lVar8;
            *plVar16 = lVar6;
            plVar16[1] = lVar7;
            plVar25[-1] = lVar24;
            plVar25[-3] = lVar30;
            plVar25[-2] = lVar5;
            *plVar28 = lVar18;
            plVar25[-4] = lVar12;
          } while( true );
        }
        for (; plVar21 = plVar17, plVar16 = plVar17, plVar17 < plVar11; plVar11 = plVar11 + -5) {
          while (plVar23 = plVar21, plVar16 = plVar16 + 5, plVar16 <= plVar11) {
            plVar21 = plVar16;
            if ((ulonglong)plVar16[2] <= (ulonglong)plVar23[2]) {
              plVar21 = plVar23;
            }
          }
          local_58 = plVar23[4];
          local_78 = (longlong *)*plVar23;
          uStack_70 = plVar23[1];
          local_68 = plVar23[2];
          uStack_60 = plVar23[3];
          plVar16 = local_78;
          lVar30 = uStack_70;
          plVar23[4] = plVar11[4];
          lVar24 = *plVar11;
          lVar18 = plVar11[1];
          lVar12 = plVar11[3];
          plVar23[2] = plVar11[2];
          plVar23[3] = lVar12;
          *plVar23 = lVar24;
          plVar23[1] = lVar18;
          plVar11[4] = local_58;
          local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
          uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
          plVar11[2] = local_68;
          plVar11[3] = uStack_60;
          *(undefined4 *)plVar11 = (undefined4)local_78;
          *(undefined4 *)((longlong)plVar11 + 4) = local_78._4_4_;
          *(undefined4 *)(plVar11 + 1) = (undefined4)uStack_70;
          *(undefined4 *)((longlong)plVar11 + 0xc) = uStack_70._4_4_;
          local_78 = plVar16;
          uStack_70 = lVar30;
        }
        goto LAB_146b6bcbd;
      }
LAB_146b6b931:
      if (uVar14 != 0) {
        iVar26 = (iVar32 - (iVar32 + -1 >> 0x1f)) + -1 >> 1;
        iVar32 = iVar26;
joined_r0x000146b6b958:
        do {
          iVar27 = iVar26 * 2 + 1;
          if (iVar27 < (int)uVar14) {
            iVar19 = iVar26 * 2 + 2;
            if ((iVar19 < (int)uVar14) &&
               ((ulonglong)plVar16[(longlong)iVar27 * 5 + 2] <=
                (ulonglong)plVar16[(longlong)iVar19 * 5 + 2])) {
              iVar27 = iVar19;
            }
            if ((ulonglong)plVar16[(longlong)iVar26 * 5 + 2] <
                (ulonglong)plVar16[(longlong)iVar27 * 5 + 2]) {
              plVar11 = plVar16 + (longlong)iVar26 * 5;
              plVar21 = plVar16 + (longlong)iVar27 * 5;
              local_58 = plVar11[4];
              local_78 = (longlong *)*plVar11;
              uStack_70 = plVar11[1];
              local_68 = plVar11[2];
              uStack_60 = plVar11[3];
              plVar17 = local_78;
              lVar30 = uStack_70;
              plVar11[4] = plVar21[4];
              lVar24 = *plVar21;
              lVar18 = plVar21[1];
              lVar12 = plVar21[3];
              plVar11[2] = plVar21[2];
              plVar11[3] = lVar12;
              *plVar11 = lVar24;
              plVar11[1] = lVar18;
              plVar21[4] = local_58;
              local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
              uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
              plVar21[2] = local_68;
              plVar21[3] = uStack_60;
              *(undefined4 *)plVar21 = (undefined4)local_78;
              *(undefined4 *)((longlong)plVar21 + 4) = local_78._4_4_;
              *(undefined4 *)(plVar21 + 1) = (undefined4)uStack_70;
              *(undefined4 *)((longlong)plVar21 + 0xc) = uStack_70._4_4_;
              iVar26 = iVar27;
              local_78 = plVar17;
              uStack_70 = lVar30;
              goto joined_r0x000146b6b958;
            }
          }
          bVar33 = iVar32 != 0;
          iVar26 = iVar32 + -1;
          iVar32 = iVar26;
        } while (bVar33);
        if (1 < (int)uVar14) {
          uVar22 = (ulonglong)uVar14 - 1;
          local_58 = plVar16[4];
          local_78 = (longlong *)*plVar16;
          uStack_70 = plVar16[1];
          local_68 = plVar16[2];
          uStack_60 = plVar16[3];
          plVar21 = local_78;
          lVar30 = uStack_70;
          plVar16[4] = plVar16[uVar22 * 5 + 4];
          lVar24 = plVar16[uVar22 * 5];
          lVar18 = (plVar16 + uVar22 * 5)[1];
          lVar12 = (plVar16 + uVar22 * 5 + 2)[1];
          plVar16[2] = plVar16[uVar22 * 5 + 2];
          plVar16[3] = lVar12;
          *plVar16 = lVar24;
          plVar16[1] = lVar18;
          plVar16[uVar22 * 5 + 4] = local_58;
          local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
          uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
          plVar16[uVar22 * 5 + 2] = local_68;
          (plVar16 + uVar22 * 5 + 2)[1] = uStack_60;
          plVar11 = plVar16 + uVar22 * 5;
          *(undefined4 *)plVar11 = (undefined4)local_78;
          *(undefined4 *)((longlong)plVar11 + 4) = local_78._4_4_;
          *(undefined4 *)(plVar11 + 1) = (undefined4)uStack_70;
          *(undefined4 *)((longlong)plVar11 + 0xc) = uStack_70._4_4_;
          local_78 = plVar21;
          uStack_70 = lVar30;
          if (uVar14 != 2) {
            do {
              iVar26 = 0;
              iVar27 = 1;
              iVar32 = 0;
              do {
                iVar26 = iVar26 + 2;
                iVar19 = iVar27;
                if (((longlong)iVar26 < (longlong)uVar22) &&
                   ((ulonglong)plVar16[(longlong)iVar27 * 5 + 2] <=
                    (ulonglong)plVar16[(longlong)iVar26 * 5 + 2])) {
                  iVar19 = iVar26;
                }
                if ((ulonglong)plVar16[(longlong)iVar19 * 5 + 2] <=
                    (ulonglong)plVar16[(longlong)iVar32 * 5 + 2]) break;
                plVar11 = plVar16 + (longlong)iVar32 * 5;
                plVar21 = plVar16 + (longlong)iVar19 * 5;
                lVar24 = plVar11[4];
                lVar18 = *plVar11;
                lVar12 = plVar11[1];
                lVar30 = plVar11[2];
                lVar5 = plVar11[3];
                plVar11[4] = plVar21[4];
                lVar6 = *plVar21;
                lVar7 = plVar21[1];
                lVar8 = plVar21[3];
                plVar11[2] = plVar21[2];
                plVar11[3] = lVar8;
                *plVar11 = lVar6;
                plVar11[1] = lVar7;
                plVar21[4] = lVar24;
                plVar21[2] = lVar30;
                plVar21[3] = lVar5;
                *plVar21 = lVar18;
                plVar21[1] = lVar12;
                iVar26 = iVar19 * 2;
                iVar27 = iVar19 * 2 + 1;
                iVar32 = iVar19;
              } while ((longlong)iVar27 < (longlong)uVar22);
              uVar20 = uVar22 - 1;
              local_58 = plVar16[4];
              local_78 = (longlong *)*plVar16;
              uStack_70 = plVar16[1];
              local_68 = plVar16[2];
              uStack_60 = plVar16[3];
              plVar21 = local_78;
              lVar30 = uStack_70;
              plVar16[4] = plVar16[uVar20 * 5 + 4];
              lVar24 = plVar16[uVar20 * 5];
              lVar18 = (plVar16 + uVar20 * 5)[1];
              lVar12 = (plVar16 + uVar20 * 5 + 2)[1];
              plVar16[2] = plVar16[uVar20 * 5 + 2];
              plVar16[3] = lVar12;
              *plVar16 = lVar24;
              plVar16[1] = lVar18;
              plVar16[uVar20 * 5 + 4] = local_58;
              local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
              uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
              plVar16[uVar20 * 5 + 2] = local_68;
              (plVar16 + uVar20 * 5 + 2)[1] = uStack_60;
              plVar11 = plVar16 + uVar20 * 5;
              *(undefined4 *)plVar11 = (undefined4)local_78;
              *(undefined4 *)((longlong)plVar11 + 4) = local_78._4_4_;
              *(undefined4 *)(plVar11 + 1) = (undefined4)uStack_70;
              *(undefined4 *)((longlong)plVar11 + 0xc) = uStack_70._4_4_;
              bVar33 = 2 < uVar22;
              uVar22 = uVar20;
              local_78 = plVar21;
              uStack_70 = lVar30;
            } while (bVar33);
          }
        }
      }
LAB_146b6bcbd:
      pplVar15 = pplVar15 + -3;
    } while (&local_378 <= pplVar15);
  }
  plVar11 = local_3b8;
  if ((int)uStack_380 != 0) {
    plVar16 = local_388 + (longlong)(int)uStack_380 * 5;
    plVar21 = local_388;
    do {
      FUN_146b6bd62(plVar11);
      lVar24 = *plVar11;
      lVar12 = (longlong)((int)plVar11[1] + -1);
      uVar2 = *(undefined4 *)((longlong)plVar21 + 4);
      lVar18 = plVar21[1];
      uVar3 = *(undefined4 *)((longlong)plVar21 + 0xc);
      puVar1 = (undefined4 *)(lVar24 + lVar12 * 0x18);
      *puVar1 = (int)*plVar21;
      puVar1[1] = uVar2;
      puVar1[2] = (int)lVar18;
      puVar1[3] = uVar3;
      *(int *)(lVar24 + 0x10 + lVar12 * 0x18) = (int)plVar21[3];
      *(int *)(lVar24 + 0x14 + lVar12 * 0x18) = (int)plVar21[4];
      plVar21 = plVar21 + 5;
    } while (plVar21 != plVar16);
  }
  if (local_388 != (longlong *)0x0) {
    FUN_1400020a8(local_388);
  }
  if ((local_48 ^ (ulonglong)auStack_3e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar11;
LAB_146b6b83c:
  local_58 = plVar17[4];
  local_78 = (longlong *)*plVar17;
  uStack_70 = plVar17[1];
  local_68 = plVar17[2];
  uStack_60 = plVar17[3];
  plVar10 = local_78;
  lVar30 = uStack_70;
  plVar17[4] = plVar25[-1];
  lVar24 = *plVar28;
  lVar18 = plVar25[-4];
  lVar12 = plVar25[-2];
  plVar17[2] = plVar25[-3];
  plVar17[3] = lVar12;
  *plVar17 = lVar24;
  plVar17[1] = lVar18;
  plVar25[-1] = local_58;
  local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  plVar25[-3] = local_68;
  plVar25[-2] = uStack_60;
  *(undefined4 *)plVar28 = (undefined4)local_78;
  *(undefined4 *)((longlong)plVar25 + -0x24) = local_78._4_4_;
  *(undefined4 *)(plVar25 + -4) = (undefined4)uStack_70;
  *(undefined4 *)((longlong)plVar25 + -0x1c) = uStack_70._4_4_;
  iVar26 = iVar26 + -1;
  plVar25 = plVar25 + -10;
  local_78 = plVar10;
  uStack_70 = lVar30;
  if ((longlong)plVar29 - (longlong)plVar23 < (longlong)plVar21 - (longlong)plVar31) {
    if (plVar16 < plVar11) {
      *pplVar15 = plVar16;
      pplVar15[1] = plVar11;
      *(int *)(pplVar15 + 2) = iVar26;
      pplVar15 = pplVar15 + 3;
    }
    plVar16 = plVar17;
    plVar21 = plVar29;
    if (plVar28 <= plVar17 + 5) goto LAB_146b6bcbd;
  }
  else {
    if (plVar17 + 5 < plVar28) {
      *pplVar15 = plVar17;
      pplVar15[1] = plVar25;
      *(int *)(pplVar15 + 2) = iVar26;
      pplVar15 = pplVar15 + 3;
    }
    plVar17 = plVar31;
    plVar25 = plVar11;
    plVar21 = plVar11;
    if (plVar11 <= plVar16) goto LAB_146b6bcbd;
  }
  iVar32 = (int)((ulonglong)((longlong)plVar21 - (longlong)plVar17) >> 3) * -0x33333333;
  uVar14 = iVar32 + 1;
  plVar23 = plVar17;
  plVar17 = plVar16;
  plVar11 = plVar25;
  if (iVar26 == 0) goto LAB_146b6b931;
  goto LAB_146b6b701;
}



// FUNCTION 146b6bd62 FUN_146b6bd62 body=56 status=ok
// SIG undefined FUN_146b6bd62(void)

void FUN_146b6bd62(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146b55304(param_1,iVar1);
  }
  FUN_146b804ac((longlong)iVar1 * 0x18 + *param_1);
  return;
}



// FUNCTION 146b6bd9a FUN_146b6bd9a body=123 status=ok
// SIG undefined FUN_146b6bd9a(void)

undefined8 *
FUN_146b6bd9a(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_146b6aeea(uVar1,param_2,param_3,param_4);
  *param_1 = uVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_149f339d0;
  puVar2[2] = uVar1;
  param_1[1] = puVar2;
  return param_1;
}



// FUNCTION 146b6be16 FUN_146b6be16 body=141 status=ok
// SIG undefined FUN_146b6be16(void)

undefined8 * FUN_146b6be16(undefined8 *param_1,longlong *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  *param_1 = &PTR_FUN_149f31ee0;
  param_1[1] = 0;
  param_1[1] = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 2) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[3] = param_2[2];
  param_1[4] = param_2[3];
  param_2[2] = 0;
  param_2[3] = 0;
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  uVar5 = param_3[5];
  uVar6 = param_3[6];
  uVar7 = param_3[7];
  *(undefined4 *)(param_1 + 7) = param_3[4];
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar5;
  *(undefined4 *)(param_1 + 8) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar7;
  *(undefined4 *)(param_1 + 5) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar2;
  *(undefined4 *)(param_1 + 6) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar4;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  FUN_146b30b8c(param_2 + 2);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 146b6bea4 FUN_146b6bea4 body=105 status=ok
// SIG undefined FUN_146b6bea4(void)

void FUN_146b6bea4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149f31ee0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  puVar1 = (undefined8 *)param_1[10];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[9];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_146b30b8c(param_1 + 3);
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b6bf0e FUN_146b6bf0e body=449 status=ok
// SIG undefined FUN_146b6bf0e(void)

ulonglong FUN_146b6bf0e(longlong param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  undefined2 *puVar8;
  ulonglong uVar9;
  undefined1 auStack_b8 [44];
  uint local_8c;
  longlong local_88;
  longlong local_80;
  undefined2 *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar5 = *(int *)(param_1 + 0x60);
  uVar9 = 0;
  local_80 = param_2;
  if (param_3 != 0 && 0 < iVar5) {
    local_88 = param_1 + 0x58;
    uVar9 = 0;
    local_8c = param_3;
    do {
      lVar1 = *(longlong *)(param_1 + 0x58) + (longlong)(iVar5 + -1) * 0x18;
      iVar5 = *(int *)(lVar1 + 0x10);
      iVar2 = *(int *)(lVar1 + 0x14);
      iVar3 = *(int *)(param_1 + 0x68);
      plVar6 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 0x50) + 8))
                         (*(longlong **)(param_1 + 0x50),lVar1);
      if (plVar6 == (longlong *)0x0) {
        local_78 = (undefined2 *)0x0;
        uStack_70 = 0;
        FUN_1407c869a(lVar1,&local_78,0);
        puVar8 = &DAT_149dfb77a;
        if ((int)uStack_70 != 0) {
          puVar8 = local_78;
        }
        FUN_140033559(".\\Runtime/Online/BuildPatchServices/Private/Generation/ManifestBuildStreamer.cpp"
                      ,0x68,L"Could not get chunk data (%s).",puVar8);
        if (local_78 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        uVar7 = iVar2 - iVar3;
        param_3 = param_3 - (int)uVar9;
        if (uVar7 < param_3) {
          param_3 = uVar7;
        }
        (**(code **)(*plVar6 + 8))(plVar6,&local_78,0);
        memcpy((void *)(uVar9 + local_80),
               (void *)((ulonglong)(uint)(iVar5 + iVar3) + (longlong)local_78),(ulonglong)param_3);
        (**(code **)(*plVar6 + 0x18))(plVar6);
        uVar7 = *(int *)(param_1 + 0x68) + param_3;
        *(uint *)(param_1 + 0x68) = uVar7;
        if (*(uint *)(lVar1 + 0x14) <= uVar7) {
          cVar4 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x30))
                            (*(longlong **)(param_1 + 0x48),lVar1);
          if (cVar4 == '\0') {
            FUN_140033559(".\\Runtime/Online/BuildPatchServices/Private/Generation/ManifestBuildStreamer.cpp"
                          ,0x60);
          }
          *(undefined4 *)(param_1 + 0x68) = 0;
          *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
          FUN_146b83788(local_88);
        }
        uVar9 = (ulonglong)(param_3 + (int)uVar9);
        param_3 = local_8c;
      }
      iVar5 = *(int *)(param_1 + 0x60);
    } while ((iVar5 != 0) && ((uint)uVar9 < param_3));
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 146b6c0de FUN_146b6c0de body=889 status=ok
// SIG undefined FUN_146b6c0de(void)

void FUN_146b6c0de(longlong param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  ulonglong uVar15;
  undefined4 *puVar16;
  undefined2 *puVar17;
  longlong lVar18;
  int iVar19;
  ulonglong uVar20;
  undefined4 *puVar21;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined8 *local_b0;
  longlong local_a8;
  undefined4 *local_a0;
  longlong local_98;
  ulonglong uStack_90;
  undefined8 *local_88;
  ulonglong uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x40) + 0x1c8))(*(longlong **)(param_1 + 0x40),&local_88);
  puVar14 = *(ulonglong **)(param_1 + 0x18);
  if (puVar14 != (ulonglong *)0x0 && (longlong)(int)uStack_80 != 0) {
    local_b8 = local_88;
    local_b0 = local_88 + (longlong)(int)uStack_80 * 2;
    local_a8 = param_1 + 0x58;
    uVar20 = 0;
    do {
      puVar2 = local_b8;
      lVar11 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x1f8))
                         (*(longlong **)(param_1 + 0x40),local_b8);
      if (lVar11 == 0) {
        puVar17 = &DAT_149dfb77a;
        if (*(int *)(puVar2 + 1) != 0) {
          puVar17 = (undefined2 *)*puVar2;
        }
        FUN_140033559(".\\Runtime/Online/BuildPatchServices/Private/Generation/ManifestBuildStreamer.cpp"
                      ,0x8b,L"Could not get file manifest (%s).",puVar17);
      }
      if ((longlong)*(int *)(lVar11 + 0x50) != 0) {
        puVar21 = *(undefined4 **)(lVar11 + 0x48);
        puVar16 = puVar21 + (longlong)*(int *)(lVar11 + 0x50) * 6;
        local_a0 = puVar16;
        do {
          if (puVar14 == (ulonglong *)0x0) goto LAB_146b6c145;
          uVar13 = (uVar20 + (uint)puVar21[5]) - 1;
          do {
            uVar3 = *puVar14;
            uVar15 = (puVar14[1] + uVar3) - 1;
            if (uVar20 <= uVar15) {
              if (uVar13 < uVar3) goto LAB_146b6c3e2;
              iVar19 = *(int *)(param_1 + 0x60);
              *(uint *)(param_1 + 0x60) = iVar19 + 1U;
              if (*(uint *)(param_1 + 100) < iVar19 + 1U) {
                FUN_146b55304(local_a8,iVar19);
                puVar16 = local_a0;
              }
              lVar11 = *(longlong *)(param_1 + 0x58);
              *(undefined8 *)(lVar11 + 0x10 + (longlong)iVar19 * 0x18) =
                   *(undefined8 *)(puVar21 + 4);
              uVar4 = puVar21[1];
              uVar5 = puVar21[2];
              uVar6 = puVar21[3];
              puVar1 = (undefined4 *)(lVar11 + (longlong)iVar19 * 0x18);
              *puVar1 = *puVar21;
              puVar1[1] = uVar4;
              puVar1[2] = uVar5;
              puVar1[3] = uVar6;
              lVar11 = (longlong)(*(int *)(param_1 + 0x60) + -1) * 0x18 +
                       *(longlong *)(param_1 + 0x58);
              if (uVar20 < uVar3) {
                iVar19 = (int)uVar3 - (int)uVar20;
                *(int *)(lVar11 + 0x10) = *(int *)(lVar11 + 0x10) + iVar19;
                *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) - iVar19;
              }
              if (uVar13 <= uVar15) goto LAB_146b6c3e2;
              *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + ((int)uVar15 - (int)uVar13);
            }
            puVar14 = (ulonglong *)puVar14[3];
          } while (puVar14 != (ulonglong *)0x0);
          puVar14 = (ulonglong *)0x0;
LAB_146b6c3e2:
          uVar20 = uVar20 + (uint)puVar21[5];
          puVar21 = puVar21 + 6;
        } while (puVar21 != puVar16);
      }
      local_b8 = local_b8 + 2;
    } while ((local_b8 != local_b0) && (puVar14 != (ulonglong *)0x0));
  }
LAB_146b6c145:
  iVar19 = *(int *)(param_1 + 0x60);
  if ((longlong)iVar19 != 0) {
    lVar11 = *(longlong *)(param_1 + 0x58);
    lVar18 = 0;
    do {
      uVar20 = uStack_70;
      lVar12 = (longlong)(int)uStack_70;
      uVar8 = (int)uStack_70 + 1;
      uStack_70 = CONCAT44(uStack_70._4_4_,uVar8);
      if (uStack_70._4_4_ < uVar8) {
        FUN_140c60952(&local_78,uVar20 & 0xffffffff);
      }
      puVar16 = (undefined4 *)(lVar11 + lVar18);
      uVar4 = puVar16[1];
      uVar5 = puVar16[2];
      uVar6 = puVar16[3];
      puVar21 = (undefined4 *)(local_78 + lVar12 * 0x10);
      *puVar21 = *puVar16;
      puVar21[1] = uVar4;
      puVar21[2] = uVar5;
      puVar21[3] = uVar6;
      lVar18 = lVar18 + 0x18;
    } while ((longlong)iVar19 * 0x18 != lVar18);
    uVar8 = *(uint *)(param_1 + 0x60);
    if (1 < (longlong)(int)uVar8) {
      lVar18 = *(longlong *)(param_1 + 0x58);
      lVar11 = (longlong)(int)uVar8 * 0x18;
      lVar12 = 0;
      do {
        lVar11 = lVar11 + -0x18;
        local_58 = *(undefined8 *)(lVar18 + 0x10 + lVar12);
        local_68 = *(undefined8 *)(lVar18 + lVar12);
        uStack_60 = ((undefined8 *)(lVar18 + lVar12))[1];
        *(undefined8 *)(lVar18 + 0x10 + lVar12) = *(undefined8 *)(lVar18 + 0x10 + lVar11);
        uVar7 = ((undefined8 *)(lVar18 + lVar11))[1];
        *(undefined8 *)(lVar18 + lVar12) = *(undefined8 *)(lVar18 + lVar11);
        ((undefined8 *)(lVar18 + lVar12))[1] = uVar7;
        *(undefined8 *)(lVar18 + 0x10 + lVar11) = local_58;
        *(undefined8 *)(lVar18 + lVar11) = local_68;
        ((undefined8 *)(lVar18 + lVar11))[1] = uStack_60;
        lVar12 = lVar12 + 0x18;
      } while ((ulonglong)(uVar8 >> 1) * 0x18 != lVar12);
    }
  }
  local_98 = local_78;
  uStack_90 = uStack_70;
  local_78 = 0;
  uStack_70 = 0;
  puVar9 = (undefined8 *)(**(code **)**(undefined8 **)(param_1 + 0x28))();
  puVar2 = *(undefined8 **)(param_1 + 0x48);
  puVar10 = puVar2;
  if ((puVar2 != puVar9) &&
     (*(undefined8 **)(param_1 + 0x48) = puVar9, puVar10 = puVar9, puVar2 != (undefined8 *)0x0)) {
    (**(code **)*puVar2)(puVar2,1);
    puVar10 = *(undefined8 **)(param_1 + 0x48);
  }
  puVar10 = (undefined8 *)
            (**(code **)**(undefined8 **)(param_1 + 0x30))(*(undefined8 **)(param_1 + 0x30),puVar10)
  ;
  puVar2 = *(undefined8 **)(param_1 + 0x50);
  if ((puVar2 != puVar10) &&
     (*(undefined8 **)(param_1 + 0x50) = puVar10, puVar2 != (undefined8 *)0x0)) {
    (**(code **)*puVar2)(puVar2,1);
  }
  FUN_1447a1747(local_88,uStack_80 & 0xffffffff);
  if (local_88 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b6c458 FUN_146b6c458 body=99 status=ok
// SIG undefined FUN_146b6c458(void)

int FUN_146b6c458(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(&local_28,&DAT_149e063bc,param_1);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  iVar1 = local_20 + -1;
  if (local_20 == 0) {
    iVar1 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b6c4bc FUN_146b6c4bc body=1196 status=ok
// SIG undefined FUN_146b6c4bc(void)

longlong *
FUN_146b6c4bc(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  undefined4 *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_268 [32];
  longlong local_248;
  longlong *local_240;
  undefined8 local_238;
  longlong local_230;
  undefined4 *local_228;
  undefined8 uStack_220;
  undefined1 local_210 [7];
  char local_209;
  longlong local_208;
  ulonglong uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1cc;
  undefined4 local_1c4;
  longlong local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_17c;
  undefined4 local_174;
  longlong local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_12c;
  undefined4 local_124;
  longlong local_118;
  undefined4 local_110;
  ulonglong local_108 [4];
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_268;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1cc = 0xffffffff00000080;
  local_1c4 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  local_238 = param_4;
  if ((longlong)(int)param_2[1] != 0) {
    lVar12 = *param_2;
    local_248 = (longlong)(int)param_2[1] * 0x50 + lVar12;
    local_240 = param_1;
    do {
      uVar4 = local_238;
      local_98 = 0;
      local_90 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_8c = 0xffffffff00000080;
      local_84 = 0;
      local_78 = 0;
      local_70 = 0;
      local_e8 = 0;
      local_e0 = 0;
      local_108[0] = 0;
      local_108[1] = 0;
      local_dc = 0xffffffff00000080;
      local_d4 = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_138 = 0;
      local_130 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_12c = 0xffffffff00000080;
      local_124 = 0;
      local_118 = 0;
      local_110 = 0;
      (**(code **)(*(longlong *)*param_5 + 0x1d0))((longlong *)*param_5,local_238,&local_b8);
      (**(code **)(*(longlong *)*param_5 + 0x188))((longlong *)*param_5,&local_b8,local_108);
      (**(code **)(*(longlong *)*param_5 + 0x228))((longlong *)*param_5,uVar4,local_108,&local_158);
      local_228 = (undefined4 *)0x0;
      uStack_220 = 0;
      local_208 = 0;
      uStack_200 = 0;
      local_188 = 0;
      local_180 = 0;
      local_1a8 = 0;
      uStack_1a0 = 0;
      local_17c = 0xffffffff00000080;
      local_174 = 0;
      local_168 = 0;
      local_160 = 0;
      local_230 = lVar12;
      (**(code **)(*(longlong *)*param_3 + 0x1e0))((longlong *)*param_3,lVar12,&local_208);
      if ((longlong)(int)uStack_200 != 0) {
        lVar13 = (longlong)(int)uStack_200 * 0x10 + local_208;
        lVar12 = local_208;
        do {
          lVar9 = (**(code **)(*(longlong *)*param_3 + 0x1f8))((longlong *)*param_3,lVar12);
          if ((lVar9 != 0) && ((longlong)*(int *)(lVar9 + 0x50) != 0)) {
            puVar10 = *(undefined4 **)(lVar9 + 0x48);
            lVar9 = (longlong)*(int *)(lVar9 + 0x50) * 0x18;
            do {
              uVar6 = FUN_1447addd0(puVar10,0x10);
              iVar7 = FUN_140f5cb3a(&local_158,uVar6,puVar10);
              if (iVar7 == -1) {
                local_209 = '\0';
                FUN_1457adc9c(&local_1a8,local_210,puVar10,&local_209);
                uVar5 = uStack_220;
                if (local_209 == '\0') {
                  lVar11 = (longlong)(int)uStack_220;
                  uVar8 = (int)uStack_220 + 1;
                  uStack_220 = CONCAT44(uStack_220._4_4_,uVar8);
                  if (uStack_220._4_4_ < uVar8) {
                    FUN_140c60952(&local_228,uVar5 & 0xffffffff);
                  }
                  uVar6 = puVar10[1];
                  uVar2 = puVar10[2];
                  uVar3 = puVar10[3];
                  puVar1 = local_228 + lVar11 * 4;
                  *puVar1 = *puVar10;
                  puVar1[1] = uVar6;
                  puVar1[2] = uVar2;
                  puVar1[3] = uVar3;
                }
              }
              puVar10 = puVar10 + 6;
              lVar9 = lVar9 + -0x18;
            } while (lVar9 != 0);
          }
          lVar12 = lVar12 + 0x10;
        } while (lVar12 != lVar13);
      }
      local_160 = 0;
      if (local_168 != 0) {
        FUN_1400020a8();
      }
      FUN_140149fc2(&local_1a8);
      FUN_1447a1747(local_208,uStack_200 & 0xffffffff);
      lVar12 = local_230;
      if (local_208 != 0) {
        FUN_1400020a8();
      }
      local_110 = 0;
      if (local_118 != 0) {
        FUN_1400020a8();
      }
      FUN_140149fc2(&local_158);
      param_1 = local_240;
      local_c0 = 0;
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
      FUN_140149fc2(local_108);
      local_70 = 0;
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      FUN_1408910a4(&local_b8);
      if ((longlong)(int)uStack_220 != 0) {
        lVar13 = (longlong)(int)uStack_220 << 4;
        puVar10 = local_228;
        do {
          local_108[0] = local_108[0] & 0xffffffffffffff00;
          FUN_1457adc9c(&local_1f8,&local_b8,puVar10,local_108);
          if ((char)local_108[0] == '\0') {
            iVar7 = (int)param_1[1];
            *(uint *)(param_1 + 1) = iVar7 + 1U;
            if (*(uint *)((longlong)param_1 + 0xc) < iVar7 + 1U) {
              FUN_140c60952(param_1,iVar7);
            }
            uVar6 = puVar10[1];
            uVar2 = puVar10[2];
            uVar3 = puVar10[3];
            puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x10);
            *puVar1 = *puVar10;
            puVar1[1] = uVar6;
            puVar1[2] = uVar2;
            puVar1[3] = uVar3;
          }
          puVar10 = puVar10 + 4;
          lVar13 = lVar13 + -0x10;
        } while (lVar13 != 0);
      }
      if (local_228 != (undefined4 *)0x0) {
        FUN_1400020a8(local_228);
      }
      lVar12 = lVar12 + 0x50;
    } while (lVar12 != local_248);
    local_1b0 = 0;
    if (local_1b8 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_140149fc2(&local_1f8);
  if ((local_60 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146b6c969 FUN_146b6c969 body=755 status=ok
// SIG undefined FUN_146b6c969(void)

longlong * FUN_146b6c969(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  undefined1 auStack_178 [40];
  longlong local_150;
  longlong *local_148;
  longlong local_140;
  undefined4 *local_138;
  undefined8 uStack_130;
  undefined1 local_120 [7];
  char local_119;
  ulonglong local_118;
  ulonglong uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_e8 = 0;
  local_e0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_dc = 0xffffffff00000080;
  local_d4 = 0;
  local_c8 = 0;
  local_c0 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if ((longlong)(int)param_2[1] != 0) {
    lVar8 = *param_2;
    local_150 = (longlong)(int)param_2[1] * 0x50 + lVar8;
    local_148 = param_1;
    do {
      local_138 = (undefined4 *)0x0;
      uStack_130 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_98 = 0;
      local_90 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_8c = 0xffffffff00000080;
      local_84 = 0;
      local_78 = 0;
      local_70 = 0;
      local_140 = lVar8;
      (**(code **)(*(longlong *)*param_3 + 0x1e0))((longlong *)*param_3,lVar8,&local_118);
      if ((longlong)(int)uStack_110 != 0) {
        uVar9 = (longlong)(int)uStack_110 * 0x10 + local_118;
        uVar12 = local_118;
        do {
          lVar8 = (**(code **)(*(longlong *)*param_3 + 0x1f8))((longlong *)*param_3,uVar12);
          if ((lVar8 != 0) && ((longlong)*(int *)(lVar8 + 0x50) != 0)) {
            puVar11 = *(undefined4 **)(lVar8 + 0x48);
            lVar8 = (longlong)*(int *)(lVar8 + 0x50) * 0x18;
            do {
              local_119 = '\0';
              FUN_1457adc9c(&local_b8,local_120,puVar11,&local_119);
              uVar6 = uStack_130;
              if (local_119 == '\0') {
                lVar10 = (longlong)(int)uStack_130;
                uVar7 = (int)uStack_130 + 1;
                uStack_130 = CONCAT44(uStack_130._4_4_,uVar7);
                if (uStack_130._4_4_ < uVar7) {
                  FUN_140c60952(&local_138,uVar6 & 0xffffffff);
                }
                uVar3 = puVar11[1];
                uVar4 = puVar11[2];
                uVar5 = puVar11[3];
                puVar1 = local_138 + lVar10 * 4;
                *puVar1 = *puVar11;
                puVar1[1] = uVar3;
                puVar1[2] = uVar4;
                puVar1[3] = uVar5;
              }
              puVar11 = puVar11 + 6;
              lVar8 = lVar8 + -0x18;
            } while (lVar8 != 0);
          }
          uVar12 = uVar12 + 0x10;
        } while (uVar12 != uVar9);
      }
      local_70 = 0;
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      FUN_140149fc2(&local_b8);
      FUN_1447a1747(local_118,uStack_110 & 0xffffffff);
      param_1 = local_148;
      if (local_118 != 0) {
        FUN_1400020a8();
      }
      if ((longlong)(int)uStack_130 != 0) {
        lVar8 = (longlong)(int)uStack_130 << 4;
        puVar11 = local_138;
        do {
          local_118 = local_118 & 0xffffffffffffff00;
          FUN_1457adc9c(&local_108,&local_b8,puVar11,&local_118);
          if ((char)local_118 == '\0') {
            iVar2 = (int)param_1[1];
            *(uint *)(param_1 + 1) = iVar2 + 1U;
            if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
              FUN_140c60952(param_1,iVar2);
            }
            uVar3 = puVar11[1];
            uVar4 = puVar11[2];
            uVar5 = puVar11[3];
            puVar1 = (undefined4 *)(*param_1 + (longlong)iVar2 * 0x10);
            *puVar1 = *puVar11;
            puVar1[1] = uVar3;
            puVar1[2] = uVar4;
            puVar1[3] = uVar5;
          }
          puVar11 = puVar11 + 4;
          lVar8 = lVar8 + -0x10;
        } while (lVar8 != 0);
      }
      if (local_138 != (undefined4 *)0x0) {
        FUN_1400020a8(local_138);
      }
      lVar8 = local_140 + 0x50;
    } while (lVar8 != local_150);
    local_c0 = 0;
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_140149fc2(&local_108);
  if ((local_60 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146b6cc5e FUN_146b6cc5e body=1003 status=ok
// SIG undefined FUN_146b6cc5e(void)

undefined8 * FUN_146b6cc5e(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_108 [32];
  code *local_e8;
  undefined8 local_d8;
  undefined **local_c8;
  undefined8 *local_c0;
  code *local_a8 [2];
  longlong *local_98;
  longlong local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *param_1 = &PTR_FUN_149f32030;
  FUN_146b6d04a(param_1 + 1);
  uVar2 = FUN_1401cb356();
  param_1[0x19] = uVar2;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  FUN_1446efa72(param_1 + 0x1a,0,3,0x10);
  *(undefined4 *)(param_1 + 0x1b) = 3;
  puVar3 = (undefined8 *)param_1[0x1a];
  *puVar3 = &PTR_LAB_149f34060;
  uVar2 = FUN_144a3f946();
  puVar3[2] = uVar2;
  *puVar3 = &PTR_FUN_149f339f0;
  puVar3[3] = param_1;
  puVar3[4] = FUN_146b6d296;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 1;
  *(undefined4 *)(param_1 + 0x1f) = 1;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffffffffffff;
  local_98 = (longlong *)FUN_14001cc68(0x50,0x10);
  *local_98 = (longlong)&PTR_FUN_149f33b20;
  local_98[2] = (longlong)&LAB_142951e46;
  local_98[4] = 0;
  local_98[6] = (longlong)&PTR_LAB_149f33b00;
  local_98[7] = (longlong)param_1;
  local_a8[0] = FUN_142951e98;
  if (local_98 + 2 == (longlong *)0x0) {
    local_a8[0] = (code *)0x0;
  }
  local_98[8] = (longlong)FUN_142945d90;
  FUN_146b56a20(param_1 + 0x21,local_a8);
  *(undefined1 *)(param_1 + 0x23) = 0;
  if (local_a8[0] != (code *)0x0) {
    plVar4 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar4 = local_88;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  local_98 = (longlong *)FUN_14001cc68(0x50,0x10);
  *local_98 = (longlong)&PTR_FUN_149f33b20;
  local_98[2] = (longlong)&LAB_142951e46;
  local_98[4] = 0;
  local_98[6] = (longlong)&PTR_LAB_149f33b00;
  local_98[7] = (longlong)param_1;
  local_a8[0] = FUN_142951e98;
  if (local_98 + 2 == (longlong *)0x0) {
    local_a8[0] = (code *)0x0;
  }
  local_98[8] = (longlong)FUN_142945d90;
  FUN_146b56a20(param_1 + 0x24,local_a8);
  *(undefined1 *)(param_1 + 0x26) = 0;
  if (local_a8[0] != (code *)0x0) {
    plVar4 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar4 = local_88;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  *(undefined1 *)(param_1 + 0x23) = 1;
  lVar1 = param_1[0x22];
  param_1[0x27] = param_1[0x21];
  param_1[0x28] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 0x26) = 1;
  lVar1 = param_1[0x25];
  param_1[0x29] = param_1[0x24];
  param_1[0x2a] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)((longlong)param_1 + 0x171) = 0;
  *(undefined8 *)((longlong)param_1 + 0x179) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  puVar3 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar3 = &PTR_FUN_149f2f710;
  param_1[0x35] = puVar3;
  uVar2 = FUN_146b33530();
  param_1[0x36] = uVar2;
  uVar2 = FUN_146b30882();
  param_1[0x37] = uVar2;
  uVar2 = FUN_146b8fc9c();
  param_1[0x38] = uVar2;
  uVar2 = FUN_146b8d88c();
  param_1[0x39] = uVar2;
  uVar2 = FUN_146b33564();
  param_1[0x3a] = uVar2;
  uVar2 = FUN_146b33584();
  param_1[0x3b] = uVar2;
  uVar2 = FUN_146b8bea8(0);
  param_1[0x3c] = uVar2;
  uVar2 = FUN_146b91144(param_1[0x3a],param_1[0x3b],uVar2);
  param_1[0x3d] = uVar2;
  uVar2 = FUN_146b89276(param_1[0x36],param_1[0x37],uVar2,param_1[0x3c]);
  param_1[0x3e] = uVar2;
  param_1[0x3f] = 0;
  uVar2 = FUN_146b92f36(param_1[0x19]);
  param_1[0x40] = uVar2;
  param_1[0x41] = 0;
  FUN_146b3347c(param_1 + 0x42);
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  local_d8 = 0;
  local_c8 = &PTR_LAB_149f33a60;
  local_e8 = FUN_142951678;
  local_c0 = param_1;
  (**(code **)(*(longlong *)param_1[0x39] + 0x40))();
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b6d04a FUN_146b6d04a body=588 status=ok
// SIG undefined FUN_146b6d04a(void)

undefined4 * FUN_146b6d04a(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  iVar1 = param_2[4];
  pvVar2 = *(void **)(param_2 + 2);
  param_1[4] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[5] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy(*(void **)(param_1 + 2),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 6) = 0;
  iVar1 = param_2[8];
  pvVar2 = *(void **)(param_2 + 6);
  param_1[8] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[9] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 6,iVar1,0);
    memcpy(*(void **)(param_1 + 6),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 10) = 0;
  iVar1 = param_2[0xc];
  uVar3 = *(undefined8 *)(param_2 + 10);
  param_1[0xc] = iVar1;
  if (iVar1 == 0) {
    param_1[0xd] = 0;
  }
  else {
    FUN_146b755a8(param_1 + 10,iVar1,0);
    FUN_146b7561b(*(undefined8 *)(param_1 + 10),uVar3,iVar1);
  }
  *(undefined8 *)(param_1 + 0x16) = 0;
  param_1[0x18] = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x19) = 0xffffffff00000080;
  param_1[0x1b] = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  param_1[0x20] = 0;
  FUN_1410b2022(param_1 + 0xe,param_2 + 0xe);
  *(undefined8 *)(param_1 + 0x22) = 0;
  iVar1 = param_2[0x24];
  pvVar2 = *(void **)(param_2 + 0x22);
  param_1[0x24] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x25] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x22,iVar1,0);
    memcpy(*(void **)(param_1 + 0x22),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x26) = 0;
  iVar1 = param_2[0x28];
  pvVar2 = *(void **)(param_2 + 0x26);
  param_1[0x28] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x29] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x26,iVar1,0);
    memcpy(*(void **)(param_1 + 0x26),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(param_2 + 0x2a);
  *(undefined8 *)(param_1 + 0x2c) = 0;
  iVar1 = param_2[0x2e];
  pvVar2 = *(void **)(param_2 + 0x2c);
  param_1[0x2e] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x2f] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x2c,iVar1,0);
    memcpy(*(void **)(param_1 + 0x2c),pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 146b6d296 FUN_146b6d296 body=734 status=ok
// SIG undefined FUN_146b6d296(void)

void FUN_146b6d296(longlong param_1,int param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined ***pppuVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong *plStack_c0;
  undefined1 local_b8;
  longlong local_a8 [2];
  longlong *local_98;
  longlong local_88 [4];
  code *local_68;
  undefined ***local_58;
  undefined **local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(int *)(param_1 + 0xfc) == param_2) {
    plVar11 = (longlong *)(param_1 + 0x108);
  }
  else {
    if (*(int *)(param_1 + 0x100) != param_2) goto LAB_146b6d53d;
    plVar11 = (longlong *)(param_1 + 0x120);
  }
  if (plVar11 != (longlong *)0x0) {
    cVar6 = (**(code **)(*(longlong *)*param_3 + 0x10))();
    if (cVar6 == '\0') {
      lVar4 = *plVar11;
      *(undefined8 *)(lVar4 + 0x80) = 0;
      *(undefined8 *)(lVar4 + 0x88) = 0;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_e8);
    }
    local_a8[0] = 0;
    local_98 = (longlong *)0x0;
    uStack_40 = *param_3;
    plVar3 = (longlong *)param_3[1];
    if (plVar3 == (longlong *)0x0) {
      local_38 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      local_38 = plVar3;
    }
    local_48 = &PTR_LAB_149f33ac0;
    local_58 = (undefined ***)0x0;
    local_68 = FUN_142951c8a;
    uStack_30 = plVar11;
    FUN_14170b918(&local_c8,local_a8);
    plVar11 = plStack_c0;
    local_b8 = 1;
    if (plStack_c0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_c0 + 1) = (int)plStack_c0[1] + 1;
      UNLOCK();
    }
    cVar6 = FUN_144a53f06();
    pcVar5 = local_68;
    plVar10 = DAT_14c8442c0;
    if (cVar6 == '\0') {
      pppuVar9 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar9 = &local_48;
      }
      uVar8 = (*(code *)(*pppuVar9)[1])();
      (*pcVar5)(uVar8);
      *(undefined4 *)(local_c8 + 0x80) = 0;
      FUN_140b576f0();
    }
    else {
      puVar7 = (undefined8 *)FUN_14001cc68(0x70,0x10);
      puVar7[1] = 0;
      *puVar7 = TAsyncQueuedWork<void>::vftable;
      puVar7[2] = local_68;
      puVar7[4] = local_58;
      local_58 = (undefined ***)0x0;
      *(undefined4 *)(puVar7 + 8) = (undefined4)local_38;
      *(undefined4 *)((longlong)puVar7 + 0x44) = local_38._4_4_;
      *(undefined4 *)(puVar7 + 9) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)puVar7 + 0x4c) = uStack_30._4_4_;
      puVar7[6] = local_48;
      puVar7[7] = uStack_40;
      if (local_68 != (code *)0x0) {
        local_68 = (code *)0x0;
      }
      puVar7[10] = local_c8;
      puVar7[0xb] = plStack_c0;
      local_c8 = 0;
      plStack_c0 = (longlong *)0x0;
      *(undefined1 *)(puVar7 + 0xc) = 0;
      (**(code **)(*plVar10 + 0x18))(plVar10,puVar7,3);
    }
    plVar10 = plStack_c0;
    if (plStack_c0 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_c0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_c0)(plStack_c0);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
    if (local_68 != (code *)0x0) {
      pppuVar9 = &local_48;
      if (local_58 != (undefined ***)0x0) {
        pppuVar9 = local_58;
      }
      (*(code *)(*pppuVar9)[2])(pppuVar9);
    }
    if (local_a8[0] != 0) {
      plVar10 = local_98;
      if (local_98 == (longlong *)0x0) {
        plVar10 = local_88;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar11 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
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
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar3 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
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
LAB_146b6d53d:
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b6d58a FUN_146b6d58a body=889 status=ok
// SIG undefined FUN_146b6d58a(void)

void FUN_146b6d58a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_149f32030;
  puVar3 = (undefined8 *)param_1[0x5e];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = (undefined8 *)param_1[0x5d];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  plVar4 = (longlong *)param_1[0x5c];
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 8))(plVar4,1);
  }
  puVar3 = (undefined8 *)param_1[0x5b];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = (undefined8 *)param_1[0x5a];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = (undefined8 *)param_1[0x59];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = (undefined8 *)param_1[0x58];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = (undefined8 *)param_1[0x57];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  param_1[0x42] = &PTR_FUN_149f2f730;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x52));
  puVar3 = (undefined8 *)param_1[0x41];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = (undefined8 *)param_1[0x40];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = (undefined8 *)param_1[0x3f];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = (undefined8 *)param_1[0x3e];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = (undefined8 *)param_1[0x3d];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = (undefined8 *)param_1[0x3c];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = (undefined8 *)param_1[0x3b];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = (undefined8 *)param_1[0x3a];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = (undefined8 *)param_1[0x39];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = (undefined8 *)param_1[0x38];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = (undefined8 *)param_1[0x37];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = (undefined8 *)param_1[0x36];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = (undefined8 *)param_1[0x35];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  FUN_144716727(param_1[0x33],*(undefined4 *)(param_1 + 0x34));
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_146b7cb77(param_1[0x31],*(undefined4 *)(param_1 + 0x32));
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  puVar3 = (undefined8 *)param_1[0x2f];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  plVar4 = (longlong *)param_1[0x2e];
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
  plVar4 = (longlong *)param_1[0x2c];
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
  plVar4 = (longlong *)param_1[0x2a];
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
  plVar4 = (longlong *)param_1[0x28];
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
  plVar4 = (longlong *)param_1[0x25];
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
  plVar4 = (longlong *)param_1[0x22];
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
  FUN_1449db362(param_1 + 0x1c);
  FUN_1449db362(param_1 + 0x1a);
  FUN_146b6d904(param_1 + 1);
  return;
}



// FUNCTION 146b6d904 FUN_146b6d904 body=164 status=ok
// SIG undefined FUN_146b6d904(void)

void FUN_146b6d904(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1 + 0x38);
  FUN_146b7c2fd(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b6d9a8 FUN_146b6d9a8 body=483 status=ok
// SIG undefined FUN_146b6d9a8(void)

undefined4 FUN_146b6d9a8(longlong param_1)

{
  double dVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_88 [32];
  LARGE_INTEGER local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_141054386();
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x1f0) + 8))
                    (*(longlong **)(param_1 + 0x1f0),param_1 + 0x10,param_1 + 0xd0,param_1 + 0xe0);
  *(undefined4 *)(param_1 + 0xfc) = uVar2;
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x1f0) + 8))
                    (*(longlong **)(param_1 + 0x1f0),param_1 + 0x20,param_1 + 0xd0,param_1 + 0xe0);
  *(undefined4 *)(param_1 + 0x100) = uVar2;
  QueryPerformanceCounter(&local_68);
  if (*(int *)(param_1 + 0xf4) != 0) {
    dVar4 = 0.0;
    dVar1 = (double)local_68.QuadPart * DAT_14c83f420 + 16777216.0;
    do {
      DAT_14c872be0 = DAT_14c872be0 + 1;
      (**(code **)(*DAT_14c82b500 + 0x48))(DAT_14c82b500,1);
      uVar3 = FUN_1401cb356();
      FUN_142746dae(uVar3,(float)dVar4);
      (**(code **)(**(longlong **)(param_1 + 0x1c0) + 0x20))();
      uVar3 = FUN_144a82cde();
      FUN_1400e4168(uVar3,0);
      QueryPerformanceCounter(&local_68);
      dVar5 = (dVar1 - ((double)local_68.QuadPart * DAT_14c83f420 + 16777216.0)) +
              0.009999999776482582;
      dVar4 = 0.0;
      if (0.0 <= dVar5) {
        dVar4 = dVar5;
      }
      FUN_14000f986(CONCAT44((int)((ulonglong)dVar4 >> 0x20),(float)dVar4));
      QueryPerformanceCounter(&local_68);
      dVar5 = (double)local_68.QuadPart * DAT_14c83f420 + 16777216.0;
      dVar4 = dVar5 - dVar1;
      dVar1 = dVar5;
    } while (*(int *)(param_1 + 0xf4) != 0);
  }
  uVar3 = FUN_144a82cde();
  FUN_1400e4168(uVar3,0);
  if ((local_60 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return CONCAT31((int3)((uint)*(int *)(param_1 + 0xf8) >> 8),*(int *)(param_1 + 0xf8) != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b6db8c FUN_146b6db8c body=738 status=ok
// SIG undefined FUN_146b6db8c(void)

void FUN_146b6db8c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 auStack_308 [32];
  undefined8 *local_2e8;
  undefined8 local_2d8;
  longlong local_2d0;
  undefined8 local_2c8;
  longlong *local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined1 *local_298;
  ulonglong *local_290;
  undefined1 local_288 [16];
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_258;
  undefined4 local_250;
  undefined8 local_24c;
  undefined4 local_244;
  undefined8 local_238;
  undefined4 local_230;
  undefined1 local_220 [152];
  undefined1 local_188 [344];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_308;
  if ((&DAT_149f2f800)[*(byte *)(param_2 + 2)] == '\0') {
    *(bool *)(param_1 + 0x180) = *(longlong *)(param_1 + 0x158) != 0;
LAB_146b6dbf7:
    plVar8 = (longlong *)0x0;
  }
  else {
    lVar4 = *param_2;
    plVar8 = (longlong *)param_2[1];
    if (plVar8 == (longlong *)0x0) {
      *(bool *)(param_1 + 0x180) = *(longlong *)(param_1 + 0x158) != lVar4;
      if (lVar4 == 0) goto LAB_146b6dbf7;
    }
    else {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      *(bool *)(param_1 + 0x180) = *(longlong *)(param_1 + 0x158) != lVar4;
      if (lVar4 == 0) goto LAB_146b6dbf9;
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    plVar6 = *(longlong **)(param_1 + 0x160);
    *(longlong *)(param_1 + 0x158) = lVar4;
    *(longlong **)(param_1 + 0x160) = plVar8;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  }
LAB_146b6dbf9:
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_2b8 = 0;
  uStack_2b0 = 0;
  local_258 = 0;
  local_250 = 0;
  local_278 = 0;
  uStack_270 = 0;
  local_24c = 0xffffffff00000080;
  local_244 = 0;
  local_238 = 0;
  local_230 = 0;
  local_2c8 = *(undefined8 *)(param_1 + 0x158);
  plVar6 = *(longlong **)(param_1 + 0x160);
  if (plVar6 == (longlong *)0x0) {
    local_2c0 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    local_2c0 = plVar6;
  }
  local_2e8 = &local_2a8;
  FUN_146b436cc(local_220,&local_2c8,&local_278,&local_2b8);
  FUN_146b527a0(local_188,local_220);
  local_290 = &local_30;
  local_298 = local_188;
  FUN_146b632e8(local_288);
  puVar7 = (undefined8 *)FUN_146b34196(local_288);
  puVar5 = *(undefined8 **)(param_1 + 0x178);
  if ((puVar5 != puVar7) &&
     (*(undefined8 **)(param_1 + 0x178) = puVar7, puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)(puVar5,1);
  }
  FUN_146b5263a(local_188);
  FUN_146b4388a(local_220);
  plVar2 = local_2c0;
  if (local_2c0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_2c0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_2c0)(local_2c0);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar6 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  (**(code **)(**(longlong **)(param_1 + 0x200) + 0x10))
            (*(longlong **)(param_1 + 0x200),*(undefined8 *)(param_1 + 0x178));
  local_2d8 = *(undefined8 *)(param_1 + 0x158);
  plVar6 = *(longlong **)(param_1 + 0x1d8);
  local_2d0 = *(longlong *)(param_1 + 0x160);
  if (local_2d0 != 0) {
    LOCK();
    *(int *)(local_2d0 + 8) = *(int *)(local_2d0 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*plVar6 + 0x20))(plVar6,&local_2d8);
  FUN_1429461b4(param_1);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar8 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar3 = (int *)((longlong)plVar8 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b6de70 FUN_146b6de70 body=56 status=ok
// SIG undefined FUN_146b6de70(void)

void FUN_146b6de70(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146b839f6(param_1,iVar1);
  }
  FUN_146b839cd((longlong)iVar1 * 0x50 + *param_1);
  return;
}



// FUNCTION 146b6dea8 FUN_146b6dea8 body=95 status=ok
// SIG undefined FUN_146b6dea8(void)

undefined8 * FUN_146b6dea8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_146b7c2fd(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_146b755a8(param_1,iVar1);
      FUN_146b7561b(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 146b6df08 FUN_146b6df08 body=359 status=ok
// SIG undefined FUN_146b6df08(void)

void FUN_146b6df08(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  uVar4 = ((int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) + uVar2;
  if (uVar2 < uVar4) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_1462841aa(param_1,uVar4);
    iVar3 = 1;
    if (3 < uVar4) {
      uVar2 = (uVar4 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar3)) {
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_1457adf2c(param_1);
    }
  }
  plVar1 = param_2 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar3 = (int)param_2[5];
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = param_2;
  if ((iStack_3c != iVar3) || (uStack_48 != plVar1)) {
    do {
      FUN_1457adc9c(param_1,&local_50,(longlong)iStack_5c * 0x18 + *local_78,0);
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_2 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar3));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b6e072 FUN_146b6e072 body=55 status=ok
// SIG undefined FUN_146b6e072(void)

void FUN_146b6e072(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146b83b66(param_1,iVar1);
  }
  FUN_146b83b5a((longlong)iVar1 * 0x20 + *param_1);
  return;
}



// FUNCTION 146b6e0aa FUN_146b6e0aa body=265 status=ok
// SIG undefined FUN_146b6e0aa(void)

undefined8 * FUN_146b6e0aa(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_140b856de(param_1,iVar1,0);
    FUN_140b8566a(*param_1,uVar2,iVar1);
  }
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  param_1[2] = param_2[2];
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar3 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1447c510a(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar3,(longlong)iVar1 << 2);
  }
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  pvVar3 = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1447c510a(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],pvVar3,(longlong)iVar1 << 2);
  }
  uVar2 = param_2[8];
  uVar4 = param_2[9];
  uVar5 = *(undefined8 *)((longlong)param_2 + 0x51);
  *(undefined8 *)((longlong)param_1 + 0x49) = *(undefined8 *)((longlong)param_2 + 0x49);
  *(undefined8 *)((longlong)param_1 + 0x51) = uVar5;
  param_1[8] = uVar2;
  param_1[9] = uVar4;
  return param_1;
}



// FUNCTION 146b6e1b4 FUN_146b6e1b4 body=141 status=ok
// SIG undefined FUN_146b6e1b4(void)

void FUN_146b6e1b4(longlong param_1)

{
  int iVar1;
  undefined1 auStack_48 [46];
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146b551be(param_1,L"TagSetLookupTable");
  local_1a = 0x5b;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_1a,2);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_14047d866(param_1 + 0x10,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 4) = 5;
  *(undefined4 *)(param_1 + 0x20) = 4;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b6e242 FUN_146b6e242 body=39 status=ok
// SIG undefined FUN_146b6e242(void)

void FUN_146b6e242(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x2f8,0x10);
  FUN_146b6cc5e(uVar1,param_1);
  return;
}



// FUNCTION 146b6e26a FUN_146b6e26a body=2727 status=ok
// SIG undefined FUN_146b6e26a(void)

undefined8 * FUN_146b6e26a(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  char cVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined ***pppuVar11;
  longlong *plVar12;
  undefined2 *puVar13;
  undefined1 auStack_408 [32];
  undefined8 *local_3e8;
  undefined1 local_3e0;
  undefined1 local_3d8;
  undefined4 local_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined4 local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined1 local_3a8;
  undefined8 local_3a4;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  code **local_370;
  ulonglong *local_368;
  undefined1 local_360 [16];
  undefined2 *local_350;
  int local_348;
  longlong local_340;
  longlong *local_338;
  undefined1 local_330;
  longlong local_328;
  longlong *local_318;
  longlong local_308 [4];
  longlong local_2e8;
  longlong *local_2d8;
  longlong local_2c8 [4];
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_288;
  undefined4 local_280;
  undefined8 local_27c;
  undefined4 local_274;
  undefined8 local_268;
  undefined4 local_260;
  longlong local_258;
  longlong *plStack_250;
  undefined1 local_248;
  code *local_1b8 [2];
  undefined ***local_1a8;
  undefined **local_198;
  undefined8 *puStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_408;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_149f320e0;
  param_1[3] = *param_2;
  param_1[4] = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  param_1[5] = 0;
  param_1[5] = param_2[2];
  param_2[2] = 0;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[3] = 0;
  param_1[7] = 0;
  param_1[7] = param_2[4];
  param_2[4] = 0;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x2c);
  param_2[5] = 0;
  *(undefined2 *)(param_1 + 9) = *(undefined2 *)(param_2 + 6);
  lVar4 = param_1[4];
  param_1[10] = param_1[3];
  param_1[0xb] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  puVar10 = param_1 + 0xc;
  FUN_146b3347c(puVar10);
  local_388 = 0;
  uStack_380 = 0;
  local_398 = 0;
  uStack_390 = 0;
  local_288 = 0;
  local_280 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_27c = 0xffffffff00000080;
  local_274 = 0;
  local_268 = 0;
  local_260 = 0;
  local_340 = param_1[3];
  local_338 = (longlong *)param_1[4];
  if (local_338 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_338 + 1) = (int)local_338[1] + 1;
    UNLOCK();
  }
  local_3e8 = &local_388;
  FUN_146b436cc(&local_258,&local_340,&local_2a8,&local_398);
  FUN_146b527a0(local_1b8,&local_258);
  local_368 = local_60;
  local_370 = local_1b8;
  FUN_146b632e8(local_360);
  uVar8 = FUN_146b34196(local_360);
  param_1[0x21] = uVar8;
  FUN_146b5263a(local_1b8);
  FUN_146b4388a(&local_258);
  plVar12 = local_338;
  if (local_338 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_338 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_338)(local_338);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  uVar8 = FUN_146b33530();
  param_1[0x22] = uVar8;
  uVar8 = FUN_146b30882();
  param_1[0x23] = uVar8;
  puVar9 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar9 = &PTR_FUN_149f2ed90;
  puVar9[1] = uVar8;
  *(undefined4 *)(puVar9 + 2) = 0x12;
  param_1[0x24] = puVar9;
  puVar9 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar9 = &PTR_FUN_149f2f710;
  param_1[0x25] = puVar9;
  uVar8 = FUN_146b8bea8(0);
  param_1[0x26] = uVar8;
  uVar8 = FUN_146b8d88c();
  param_1[0x27] = uVar8;
  uVar8 = FUN_1401cb356();
  uVar8 = FUN_146b92f36(uVar8);
  param_1[0x28] = uVar8;
  uVar8 = FUN_146b33564();
  param_1[0x29] = uVar8;
  uVar8 = FUN_146b33564();
  param_1[0x2a] = uVar8;
  uVar8 = FUN_146b33564();
  param_1[0x2b] = uVar8;
  uVar8 = FUN_146b33584();
  param_1[0x2c] = uVar8;
  uVar8 = FUN_146b91144(param_1[0x29],uVar8,param_1[0x26]);
  param_1[0x2d] = uVar8;
  uVar8 = FUN_146b93500(param_1[0x28]);
  param_1[0x2e] = uVar8;
  uVar8 = FUN_146b906de(param_1[0x26],puVar10,param_1[0x28]);
  param_1[0x2f] = uVar8;
  uVar8 = FUN_146b91960(param_1[0x2a],param_1[0x2b],puVar10,param_1[0x28]);
  param_1[0x30] = uVar8;
  local_3d0 = 100;
  uStack_3cc = 8;
  uStack_3c8 = 8;
  uStack_3c4 = 8;
  local_3c0 = 4;
  local_3b8 = 0x3feb333333333333;
  local_3b0 = 0x3fe4cccccccccccd;
  local_3a4 = 0x800000010;
  local_3a8 = 1;
  uVar8 = FUN_146b884a4(&local_3d0,param_1[0x2d]);
  param_1[0x31] = uVar8;
  uVar8 = FUN_146b89276(param_1[0x22],param_1[0x23],param_1[0x2d],param_1[0x26]);
  param_1[0x32] = uVar8;
  uVar8 = FUN_146b8fc9c();
  param_1[0x33] = uVar8;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  puVar10 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  *puVar10 = 0;
  puVar10[5] = 0;
  *(undefined4 *)(puVar10 + 6) = 0;
  puVar10[1] = 0;
  puVar10[2] = 0;
  *(undefined8 *)((longlong)puVar10 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar10 + 0x3c) = 0;
  puVar10[9] = 0;
  *(undefined4 *)(puVar10 + 10) = 0;
  *(undefined1 *)(puVar10 + 0xb) = 0;
  puVar10[0xc] = 0;
  puVar10[0xd] = 0;
  param_1[0x3b] = puVar10;
  param_1[0x3a] = puVar10;
  puVar10 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar10 = 0;
  puVar10[2] = 0;
  puVar10[4] = 0;
  param_1[0x3d] = puVar10;
  param_1[0x3c] = puVar10;
  puVar10 = (undefined8 *)FUN_14001cc68(0x50);
  *puVar10 = 0;
  puVar10[2] = 0;
  puVar10[4] = 0;
  param_1[0x3f] = puVar10;
  param_1[0x3e] = puVar10;
  uVar8 = FUN_1405d8a54(0);
  param_1[0x40] = uVar8;
  uVar8 = FUN_1405d8a54(0);
  param_1[0x41] = uVar8;
  memset(param_1 + 0x42,0,0xb0);
  local_2e8 = 0;
  local_2d8 = (longlong *)0x0;
  local_1a8 = (undefined ***)0x0;
  local_198 = &PTR_LAB_149f33b80;
  local_1b8[0] = FUN_1429522c2;
  puStack_190 = param_1;
  FUN_14170b918(&local_258);
  plVar12 = plStack_250;
  lVar4 = local_258;
  local_248 = 1;
  if (plStack_250 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_250 + 1) = (int)plStack_250[1] + 1;
    UNLOCK();
  }
  cVar6 = FUN_144a53f06();
  pcVar5 = local_1b8[0];
  if (cVar6 == '\0') {
    pppuVar11 = local_1a8;
    if (local_1a8 == (undefined ***)0x0) {
      pppuVar11 = &local_198;
    }
    uVar8 = (*(code *)(*pppuVar11)[1])();
    (*pcVar5)(uVar8);
    *(undefined4 *)(local_258 + 0x80) = 0;
    FUN_140b576f0();
  }
  else {
    FUN_145c3b830(&local_340);
    puVar10 = (undefined8 *)FUN_14001cc68(0x80,0x10);
    local_330 = 1;
    if (local_338 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_338 + 1) = (int)local_338[1] + 1;
      UNLOCK();
    }
    *puVar10 = TAsyncRunnable<void>::vftable;
    puVar10[2] = local_1b8[0];
    puVar10[4] = local_1a8;
    local_1a8 = (undefined ***)0x0;
    *(undefined4 *)(puVar10 + 8) = local_188;
    *(undefined4 *)((longlong)puVar10 + 0x44) = uStack_184;
    *(undefined4 *)(puVar10 + 9) = uStack_180;
    *(undefined4 *)((longlong)puVar10 + 0x4c) = uStack_17c;
    puVar10[6] = local_198;
    puVar10[7] = puStack_190;
    if (local_1b8[0] != (code *)0x0) {
      local_1b8[0] = (code *)0x0;
    }
    puVar10[10] = local_258;
    puVar10[0xb] = plStack_250;
    local_258 = 0;
    plStack_250 = (longlong *)0x0;
    *(undefined1 *)(puVar10 + 0xc) = 0;
    puVar10[0xd] = local_340;
    puVar10[0xe] = local_338;
    uVar7 = FUN_146268020();
    FUN_140002266(&local_350,L"TAsync %d",uVar7);
    puVar13 = local_350;
    if (local_348 == 0) {
      puVar13 = &DAT_149dfb77a;
    }
    local_3d8 = 0;
    local_3e0 = 0;
    local_3e8 = (undefined8 *)0xffffffffffffffff;
    uVar8 = FUN_14275bfaa(puVar10,puVar13,0,0);
    *(undefined8 *)(local_340 + 0x80) = uVar8;
    FUN_140b576f0();
    if (local_350 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    plVar1 = local_338;
    if (local_338 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_338 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_338)(local_338);
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
  plVar1 = plStack_250;
  local_340 = lVar4;
  local_338 = plVar12;
  if (plStack_250 != (longlong *)0x0) {
    LOCK();
    plVar12 = plStack_250 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plStack_250)(plStack_250);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (local_1b8[0] != (code *)0x0) {
    pppuVar11 = local_1a8;
    if (local_1a8 == (undefined ***)0x0) {
      pppuVar11 = &local_198;
    }
    (*(code *)(*pppuVar11)[2])();
  }
  if (local_2e8 != 0) {
    plVar12 = local_2d8;
    if (local_2d8 == (longlong *)0x0) {
      plVar12 = local_2c8;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  FUN_14614a64a(param_1 + 0x35,&local_340);
  plVar12 = local_338;
  if (local_338 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_338 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_338)(local_338);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  local_328 = 0;
  local_318 = (longlong *)0x0;
  local_1a8 = (undefined ***)0x0;
  local_198 = &PTR_LAB_149f33ba0;
  local_1b8[0] = FUN_1429530e6;
  puStack_190 = param_1;
  FUN_14170b918(&local_258);
  plVar12 = plStack_250;
  lVar4 = local_258;
  local_248 = 1;
  if (plStack_250 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_250 + 1) = (int)plStack_250[1] + 1;
    UNLOCK();
  }
  cVar6 = FUN_144a53f06();
  pcVar5 = local_1b8[0];
  if (cVar6 == '\0') {
    pppuVar11 = local_1a8;
    if (local_1a8 == (undefined ***)0x0) {
      pppuVar11 = &local_198;
    }
    uVar8 = (*(code *)(*pppuVar11)[1])();
    (*pcVar5)(uVar8);
    *(undefined4 *)(local_258 + 0x80) = 0;
    FUN_140b576f0();
  }
  else {
    FUN_145c3b830(&local_340);
    puVar10 = (undefined8 *)FUN_14001cc68(0x80,0x10);
    local_330 = 1;
    if (local_338 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_338 + 1) = (int)local_338[1] + 1;
      UNLOCK();
    }
    *puVar10 = TAsyncRunnable<void>::vftable;
    puVar10[2] = local_1b8[0];
    puVar10[4] = local_1a8;
    local_1a8 = (undefined ***)0x0;
    *(undefined4 *)(puVar10 + 8) = local_188;
    *(undefined4 *)((longlong)puVar10 + 0x44) = uStack_184;
    *(undefined4 *)(puVar10 + 9) = uStack_180;
    *(undefined4 *)((longlong)puVar10 + 0x4c) = uStack_17c;
    puVar10[6] = local_198;
    puVar10[7] = puStack_190;
    if (local_1b8[0] != (code *)0x0) {
      local_1b8[0] = (code *)0x0;
    }
    puVar10[10] = local_258;
    puVar10[0xb] = plStack_250;
    local_258 = 0;
    plStack_250 = (longlong *)0x0;
    *(undefined1 *)(puVar10 + 0xc) = 0;
    puVar10[0xd] = local_340;
    puVar10[0xe] = local_338;
    uVar7 = FUN_146268020();
    FUN_140002266(&local_350,L"TAsync %d",uVar7);
    puVar13 = local_350;
    if (local_348 == 0) {
      puVar13 = &DAT_149dfb77a;
    }
    local_3d8 = 0;
    local_3e0 = 0;
    local_3e8 = (undefined8 *)0xffffffffffffffff;
    uVar8 = FUN_14275bfaa(puVar10,puVar13,0,0);
    *(undefined8 *)(local_340 + 0x80) = uVar8;
    FUN_140b576f0();
    if (local_350 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    plVar1 = local_338;
    if (local_338 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_338 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_338)(local_338);
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
  plVar1 = plStack_250;
  local_340 = lVar4;
  local_338 = plVar12;
  if (plStack_250 != (longlong *)0x0) {
    LOCK();
    plVar12 = plStack_250 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plStack_250)(plStack_250);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (local_1b8[0] != (code *)0x0) {
    pppuVar11 = &local_198;
    if (local_1a8 != (undefined ***)0x0) {
      pppuVar11 = local_1a8;
    }
    (*(code *)(*pppuVar11)[2])(pppuVar11);
  }
  if (local_328 != 0) {
    plVar12 = local_318;
    if (local_318 == (longlong *)0x0) {
      plVar12 = local_308;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  FUN_14614a64a(param_1 + 0x37,&local_340);
  plVar12 = local_338;
  if (local_338 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_338 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_338)(local_338);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  FUN_146b42aa4(param_2);
  if ((local_60[0] ^ (ulonglong)auStack_408) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146b6ed12 FUN_146b6ed12 body=1003 status=ok
// SIG undefined FUN_146b6ed12(void)

void FUN_146b6ed12(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  longlong **local_38;
  longlong *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_FUN_149f320e0;
  cVar5 = FUN_144a61b4f();
  if (cVar5 == '\0') {
    LOCK();
    *(undefined4 *)(param_1 + 0x34) = 1;
    UNLOCK();
    plVar3 = (longlong *)param_1[0x27];
    plVar6 = (longlong *)FUN_140e82300();
    local_30 = (longlong *)*plVar6;
    if (local_30 != (longlong *)0x0) {
      (**(code **)(*local_30 + 8))();
    }
    local_28 = (undefined4)plVar6[1];
    local_38 = &local_30;
    (**(code **)(*plVar3 + 0x38))(plVar3,5,&DAT_149f2f964,0);
    (**(code **)(*(longlong *)param_1[0x40] + 0x10))();
    (**(code **)(*(longlong *)param_1[0x41] + 0x10))();
    lVar4 = param_1[0x35];
    if (param_1[0x35] != 0) {
      while( true ) {
        do {
          lVar7 = lVar4;
          lVar4 = 0;
        } while (lVar7 == 0);
        plVar3 = *(longlong **)(lVar7 + 0x70);
        cVar5 = (**(code **)(*plVar3 + 0x20))(plVar3,0xffffffff,0);
        if (cVar5 != '\0') break;
        lVar4 = param_1[0x35];
      }
    }
    lVar4 = param_1[0x37];
    if (param_1[0x37] != 0) {
      while( true ) {
        do {
          lVar7 = lVar4;
          lVar4 = 0;
        } while (lVar7 == 0);
        plVar3 = *(longlong **)(lVar7 + 0x70);
        cVar5 = (**(code **)(*plVar3 + 0x20))(plVar3,0xffffffff,0);
        if (cVar5 != '\0') break;
        lVar4 = param_1[0x37];
      }
    }
  }
  else {
    FUN_146b6f0fe(param_1);
  }
  FUN_14018802a(param_1[0x40]);
  FUN_14018802a(param_1[0x41]);
  FUN_14585d2b6(param_1 + 0x3e);
  FUN_14585d2b6(param_1 + 0x3c);
  while (puVar2 = (undefined8 *)param_1[0x3b], puVar2 != (undefined8 *)0x0) {
    param_1[0x3b] = *puVar2;
    FUN_146b6f244(puVar2 + 1);
    FUN_1400020a8(puVar2);
  }
  plVar3 = (longlong *)param_1[0x38];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar3 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  plVar3 = (longlong *)param_1[0x36];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar3 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  puVar2 = (undefined8 *)param_1[0x33];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = (undefined8 *)param_1[0x32];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  plVar3 = (longlong *)param_1[0x31];
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))(plVar3,1);
  }
  puVar2 = (undefined8 *)param_1[0x30];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = (undefined8 *)param_1[0x2f];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = (undefined8 *)param_1[0x2e];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = (undefined8 *)param_1[0x2d];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = (undefined8 *)param_1[0x2c];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = (undefined8 *)param_1[0x2b];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = (undefined8 *)param_1[0x2a];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = (undefined8 *)param_1[0x29];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = (undefined8 *)param_1[0x28];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = (undefined8 *)param_1[0x27];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = (undefined8 *)param_1[0x26];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = (undefined8 *)param_1[0x25];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = (undefined8 *)param_1[0x24];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = (undefined8 *)param_1[0x23];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = (undefined8 *)param_1[0x22];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = (undefined8 *)param_1[0x21];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  param_1[0xc] = &PTR_FUN_149f2f730;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  plVar3 = (longlong *)param_1[0xb];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar3 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  FUN_146b42aa4(param_1 + 3);
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b6f0fe FUN_146b6f0fe body=214 status=ok
// SIG undefined FUN_146b6f0fe(void)

void FUN_146b6f0fe(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  longlong **local_38;
  longlong *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  LOCK();
  *(undefined4 *)(param_1 + 0x1a0) = 1;
  UNLOCK();
  plVar1 = *(longlong **)(param_1 + 0x138);
  plVar2 = (longlong *)FUN_140e82300();
  local_30 = (longlong *)*plVar2;
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 8))();
  }
  local_28 = (undefined4)plVar2[1];
  local_38 = &local_30;
  (**(code **)(*plVar1 + 0x38))(plVar1,5,&DAT_149f2f964,0);
  (**(code **)(**(longlong **)(param_1 + 0x200) + 0x10))();
  (**(code **)(**(longlong **)(param_1 + 0x208) + 0x10))();
  while ((((*(longlong *)(param_1 + 0x1a8) == 0 ||
           ((*(byte *)(*(longlong *)(param_1 + 0x1a8) + 0x78) & 1) == 0)) ||
          (*(longlong *)(param_1 + 0x1b8) == 0)) ||
         ((*(byte *)(*(longlong *)(param_1 + 0x1b8) + 0x78) & 1) == 0))) {
    FUN_142947c80(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b6f1d6 FUN_146b6f1d6 body=109 status=ok
// SIG undefined FUN_146b6f1d6(void)

void FUN_146b6f1d6(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  *puVar2 = 0;
  FUN_145aeb3d6(puVar2 + 1,param_2);
  *(undefined1 *)(puVar2 + 0xb) = *(undefined1 *)(param_2 + 0x50);
  puVar2[0xc] = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined4 *)(puVar2 + 0xd) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_2 + 0x60) = 0;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*param_1;
    *param_1 = puVar2;
    *puVar1 = puVar2;
  }
  return;
}



// FUNCTION 146b6f244 FUN_146b6f244 body=51 status=ok
// SIG undefined FUN_146b6f244(void)

void FUN_146b6f244(longlong param_1)

{
  FUN_1449db362(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1);
  return;
}



// FUNCTION 146b6f2c4 FUN_146b6f2c4 body=284 status=ok
// SIG undefined FUN_146b6f2c4(void)

bool FUN_146b6f2c4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = **(longlong **)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_146b3e088(param_2,lVar1 + 8);
    *(undefined1 *)(param_2 + 0x50) = *(undefined1 *)(lVar1 + 0x58);
    FUN_144a450dc(param_2 + 0x58,lVar1 + 0x60);
    lVar2 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar1;
    local_88 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    uStack_80 = 0x8000000000;
    local_78 = 0xffffffff;
    local_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    FUN_146b3e088(lVar1 + 8,&local_a8);
    *(undefined1 *)(lVar1 + 0x58) = (undefined1)local_58;
    FUN_144a450dc(lVar1 + 0x60,&local_50);
    FUN_146b6f244(&local_a8);
    if (lVar2 != 0) {
      FUN_146b6f244(lVar2 + 8);
      FUN_1400020a8(lVar2);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b6f3e2 FUN_146b6f3e2 body=59 status=ok
// SIG undefined FUN_146b6f3e2(void)

longlong FUN_146b6f3e2(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146b83e5c(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x68 + *param_1;
  FUN_146b83e2c(lVar2);
  return lVar2;
}



// FUNCTION 146b6f41e FUN_146b6f41e body=175 status=ok
// SIG undefined FUN_146b6f41e(void)

longlong FUN_146b6f41e(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  int iVar3;
  
  lVar1 = *param_1 + (longlong)(int)param_1[1] * 0x68;
  FUN_145aeb3d6(param_2,lVar1 + -0x68);
  *(undefined1 *)(param_2 + 0x50) = *(undefined1 *)(lVar1 + -0x18);
  *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(lVar1 + -0x10);
  *(undefined8 *)(lVar1 + -0x10) = 0;
  *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(lVar1 + -8);
  *(undefined4 *)(lVar1 + -8) = 0;
  iVar3 = (int)param_1[1];
  lVar1 = *param_1;
  _Dst = (void *)(lVar1 + (longlong)iVar3 * 0x68 + -0x68);
  FUN_146b6f244(_Dst);
  iVar2 = (int)param_1[1] - iVar3;
  if (iVar2 != 0) {
    memmove(_Dst,(void *)(lVar1 + (longlong)iVar3 * 0x68),(longlong)iVar2 * 0x68);
    iVar3 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar3 + -1;
  FUN_146b83eec(param_1);
  return param_2;
}



// FUNCTION 146b6f4ce FUN_146b6f4ce body=521 status=ok
// SIG undefined FUN_146b6f4ce(void)

void FUN_146b6f4ce(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  code *pcVar5;
  char cVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong *local_70;
  code *local_68 [2];
  longlong *local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(char *)(param_1 + 0x49) != '\x01') {
    plVar7 = (longlong *)(param_2 + 0x20);
    if (*(longlong **)(param_2 + 0x10) != (longlong *)0x0) {
      plVar7 = *(longlong **)(param_2 + 0x10);
    }
    (**(code **)(*plVar7 + 8))(plVar7);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
  }
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  FUN_145d28d24(plVar7);
  *(undefined1 *)(plVar7 + 2) = 0;
  local_78 = plVar7;
  local_70 = (longlong *)FUN_14001cc68(0x18,0x10);
  local_70[1] = (longlong)&DAT_100000001;
  *local_70 = (longlong)&PTR_FUN_149f2f980;
  local_70[2] = (longlong)plVar7;
  FUN_14295197c(local_68,&local_78,param_2);
  cVar6 = FUN_144a61b4f();
  pcVar5 = local_68[0];
  if (cVar6 == '\0') {
    puVar9 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    *puVar9 = 0;
    puVar9[2] = local_68[0];
    puVar9[4] = local_58;
    local_58 = (longlong *)0x0;
    puVar9[8] = local_38;
    puVar9[9] = uStack_30;
    *(undefined4 *)(puVar9 + 6) = local_48;
    *(undefined4 *)((longlong)puVar9 + 0x34) = uStack_44;
    *(undefined4 *)(puVar9 + 7) = uStack_40;
    *(undefined4 *)((longlong)puVar9 + 0x3c) = uStack_3c;
    if (local_68[0] != (code *)0x0) {
      local_68[0] = (code *)0x0;
    }
    if (puVar9 != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)(param_1 + 0x1f0);
      *(undefined8 **)(param_1 + 0x1f0) = puVar9;
      *puVar4 = puVar9;
      plVar7 = local_78;
    }
  }
  else {
    plVar10 = local_58;
    if (local_58 == (longlong *)0x0) {
      plVar10 = (longlong *)&local_48;
    }
    uVar8 = (**(code **)(*plVar10 + 8))();
    (*pcVar5)(uVar8);
  }
  *(undefined1 *)(plVar7 + 2) = 1;
  lVar3 = *plVar7;
  plVar7 = (longlong *)plVar7[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  if (local_68[0] != (code *)0x0) {
    plVar10 = (longlong *)&local_48;
    if (local_58 != (longlong *)0x0) {
      plVar10 = local_58;
    }
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  plVar10 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if (lVar3 != 0) {
    do {
      plVar10 = *(longlong **)(lVar3 + 0x70);
      cVar6 = (**(code **)(*plVar10 + 0x20))(plVar10,0xffffffff,0);
    } while (cVar6 == '\0');
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar7 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b6f6ea FUN_146b6f6ea body=350 status=ok
// SIG undefined FUN_146b6f6ea(void)

void FUN_146b6f6ea(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  uVar4 = ((int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) + uVar2;
  if (uVar2 < uVar4) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_140e83416(param_1,uVar4);
    iVar3 = 1;
    if (3 < uVar4) {
      uVar2 = (uVar4 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar3)) {
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_14482b9e8(param_1);
    }
  }
  plVar1 = param_2 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar3 = (int)param_2[5];
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = param_2;
  if ((iStack_3c != iVar3) || (uStack_48 != plVar1)) {
    do {
      FUN_14482b35e(param_1,&local_50,(longlong)iStack_5c * 0x18 + *local_78,0);
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_2 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar3));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b6f84a FUN_146b6f84a body=47 status=ok
// SIG undefined FUN_146b6f84a(void)

void FUN_146b6f84a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x30,0x10);
  FUN_146b71642(uVar1,param_1,param_2);
  return;
}



// FUNCTION 146b6f87a FUN_146b6f87a body=142 status=ok
// SIG undefined FUN_146b6f87a(void)

void FUN_146b6f87a(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  param_1[2] = param_2[2];
  param_1[4] = 0;
  param_1[4] = param_2[4];
  param_2[4] = 0;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  param_2[5] = 0;
  param_1[6] = 0;
  param_1[6] = param_2[6];
  param_2[6] = 0;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  param_2[7] = 0;
  uVar1 = param_2[8];
  uVar2 = param_2[9];
  uVar3 = *(undefined8 *)((longlong)param_2 + 0x51);
  *(undefined8 *)((longlong)param_1 + 0x49) = *(undefined8 *)((longlong)param_2 + 0x49);
  *(undefined8 *)((longlong)param_1 + 0x51) = uVar3;
  param_1[8] = uVar1;
  param_1[9] = uVar2;
  return;
}



// FUNCTION 146b6f908 FUN_146b6f908 body=169 status=ok
// SIG undefined FUN_146b6f908(void)

double FUN_146b6f908(longlong param_1)

{
  double dVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  dVar1 = (((double)CONCAT44(0x43300000,(int)*(undefined8 *)(param_1 + 0x30)) - 4503599627370496.0)
          + ((double)CONCAT44(0x45300000,(int)((ulonglong)*(undefined8 *)(param_1 + 0x30) >> 0x20))
            - 1.9342813113834067e+25)) * DAT_14c83f418;
  if ((*(char *)(param_1 + 0x38) == '\x01') && (*(char *)(param_1 + 0x39) == '\0')) {
    QueryPerformanceCounter(&local_38);
    lVar2 = local_38.QuadPart - *(longlong *)(param_1 + 0x28);
    auVar3._8_4_ = (int)((ulonglong)lVar2 >> 0x20);
    auVar3._0_8_ = lVar2;
    auVar3._12_4_ = 0x45300000;
    dVar1 = dVar1 + (((double)CONCAT44(0x43300000,(int)lVar2) - 4503599627370496.0) +
                    (auVar3._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418;
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return dVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b6f9b2 FUN_146b6f9b2 body=215 status=ok
// SIG undefined FUN_146b6f9b2(void)

void FUN_146b6f9b2(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_98 [32];
  code *local_78 [2];
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_1 + 0x1a0) == 0) {
    do {
      local_78[0] = (code *)0x0;
      local_68 = (longlong *)0x0;
      cVar2 = FUN_1403c1b2e(param_1 + 0x1e0,local_78);
      pcVar1 = local_78[0];
      if (cVar2 == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x208) + 0x20))
                  (*(longlong **)(param_1 + 0x208),0xffffffff,0);
      }
      else {
        plVar4 = local_68;
        if (local_68 == (longlong *)0x0) {
          plVar4 = local_58;
        }
        uVar3 = (**(code **)(*plVar4 + 8))();
        (*pcVar1)(uVar3);
      }
      if (local_78[0] != (code *)0x0) {
        plVar4 = local_68;
        if (local_68 == (longlong *)0x0) {
          plVar4 = local_58;
        }
        (**(code **)(*plVar4 + 0x10))();
      }
    } while (*(int *)(param_1 + 0x1a0) == 0);
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b6fa8a FUN_146b6fa8a body=338 status=ok
// SIG undefined FUN_146b6fa8a(void)

void FUN_146b6fa8a(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_d8 [32];
  longlong **local_b8;
  longlong *local_b0;
  undefined4 local_a8;
  undefined8 *local_a0;
  undefined4 local_98;
  byte local_89;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  cVar3 = FUN_144a61b4f();
  local_89 = 0;
  if (cVar3 != '\0') {
    local_a0 = (undefined8 *)0x0;
    local_98 = 0;
    FUN_1446efa72(&local_a0,0,2,0x10);
    puVar2 = local_a0;
    local_98 = 2;
    *local_a0 = &PTR_LAB_149f33cb0;
    uVar4 = FUN_144a3f946();
    puVar2[2] = uVar4;
    *puVar2 = &PTR_FUN_149f33c40;
    puVar2[3] = &local_89;
    local_68 = 0;
    local_60 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_5c = 0xffffffff00000080;
    local_54 = 0;
    local_48 = 0;
    local_40 = 0;
    (**(code **)(*param_1 + 0x10))(param_1,&local_88,&local_a0);
  }
  plVar1 = (longlong *)param_1[0x27];
  plVar5 = (longlong *)FUN_140e82300();
  local_b0 = (longlong *)*plVar5;
  if (local_b0 != (longlong *)0x0) {
    (**(code **)(*local_b0 + 8))();
  }
  local_a8 = (undefined4)plVar5[1];
  local_b8 = &local_b0;
  (**(code **)(*plVar1 + 0x38))(plVar1,7,&DAT_149f2f964,0);
  if ((cVar3 != '\0') && ((local_89 & 1) == 0)) {
    do {
      FUN_142947c80(param_1);
    } while (local_89 != 1);
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b6fbde FUN_146b6fbde body=181 status=ok
// SIG undefined FUN_146b6fbde(void)

undefined8 FUN_146b6fbde(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined2 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = FUN_14001cc68(0x2c0,0x10);
  local_50 = *param_1;
  local_48 = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  local_40 = param_1[2];
  param_1[2] = 0;
  local_38 = *(undefined4 *)(param_1 + 3);
  local_34 = *(undefined4 *)((longlong)param_1 + 0x1c);
  param_1[3] = 0;
  local_30 = param_1[4];
  param_1[4] = 0;
  local_28 = *(undefined4 *)(param_1 + 5);
  local_24 = *(undefined4 *)((longlong)param_1 + 0x2c);
  param_1[5] = 0;
  local_20 = *(undefined2 *)(param_1 + 6);
  FUN_146b6e26a(uVar1);
  FUN_146b42aa4(param_1);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b6fc94 FUN_146b6fc94 body=93 status=ok
// SIG undefined FUN_146b6fc94(void)

longlong *
FUN_146b6fc94(longlong *param_1,longlong *param_2,undefined4 *param_3,longlong param_4,
             longlong param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)(param_1 + 2) = *param_3;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 3) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  param_1[4] = param_4;
  param_1[5] = param_5;
  *(undefined4 *)(param_1 + 6) = param_6;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 146b6fcf2 FUN_146b6fcf2 body=13 status=ok
// SIG undefined FUN_146b6fcf2(void)

void FUN_146b6fcf2(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
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



// FUNCTION 146b6fd1a FUN_146b6fd1a body=30 status=ok
// SIG undefined FUN_146b6fd1a(void)

void FUN_146b6fd1a(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_146b33fa6(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x000146b6fd31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x80))(plVar1);
  return;
}



// FUNCTION 146b6fd38 FUN_146b6fd38 body=27 status=ok
// SIG undefined FUN_146b6fd38(void)

void FUN_146b6fd38(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_146b33fb6(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x000146b6fd4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x48))(plVar1);
  return;
}



// FUNCTION 146b6fd54 FUN_146b6fd54 body=27 status=ok
// SIG undefined FUN_146b6fd54(void)

void FUN_146b6fd54(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_146b33fb6(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x000146b6fd6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1);
  return;
}



// FUNCTION 146b6fd70 FUN_146b6fd70 body=27 status=ok
// SIG undefined FUN_146b6fd70(void)

void FUN_146b6fd70(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_146b33fb6(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x000146b6fd87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x40))(plVar1);
  return;
}



// FUNCTION 146b6fd8c FUN_146b6fd8c body=27 status=ok
// SIG undefined FUN_146b6fd8c(void)

void FUN_146b6fd8c(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_146b33fb6(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x000146b6fda3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1);
  return;
}



// FUNCTION 146b6fda8 FUN_146b6fda8 body=42 status=ok
// SIG undefined FUN_146b6fda8(void)

undefined8 FUN_146b6fda8(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_146b33fa6(*(undefined8 *)(param_1 + 8));
  (**(code **)(*plVar1 + 0xa0))(plVar1,param_2);
  return param_2;
}



// FUNCTION 146b6fdd2 FUN_146b6fdd2 body=30 status=ok
// SIG undefined FUN_146b6fdd2(void)

void FUN_146b6fdd2(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_146b33fa6(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x000146b6fde9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xa8))(plVar1);
  return;
}



// FUNCTION 146b6fdf0 FUN_146b6fdf0 body=42 status=ok
// SIG undefined FUN_146b6fdf0(void)

undefined8 FUN_146b6fdf0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_146b33fa6(*(undefined8 *)(param_1 + 8));
  (**(code **)(*plVar1 + 0x98))(plVar1,param_2);
  return param_2;
}



// FUNCTION 146b6fe1a FUN_146b6fe1a body=39 status=ok
// SIG undefined FUN_146b6fe1a(void)

undefined8 FUN_146b6fe1a(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_146b33f96(*(undefined8 *)(param_1 + 8));
  (**(code **)(*plVar1 + 0x40))(plVar1,param_2);
  return param_2;
}



// FUNCTION 146b6fe42 FUN_146b6fe42 body=32 status=ok
// SIG undefined FUN_146b6fe42(void)

bool FUN_146b6fe42(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_146b33f96(*(undefined8 *)(param_1 + 8));
  iVar1 = (**(code **)(*plVar2 + 0x38))(plVar2);
  return 0 < iVar1;
}



// FUNCTION 146b6fe62 FUN_146b6fe62 body=30 status=ok
// SIG undefined FUN_146b6fe62(void)

void FUN_146b6fe62(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_146b33fa6(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x000146b6fe79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xc0))(plVar1);
  return;
}



// FUNCTION 146b6fe80 FUN_146b6fe80 body=30 status=ok
// SIG undefined FUN_146b6fe80(void)

void FUN_146b6fe80(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_146b33fa6(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x000146b6fe97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xb0))(plVar1);
  return;
}



// FUNCTION 146b6fe9e FUN_146b6fe9e body=87 status=ok
// SIG undefined FUN_146b6fe9e(void)

undefined1 FUN_146b6fe9e(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_146b33fa6(*(undefined8 *)(param_1 + 8));
  cVar1 = (**(code **)(*plVar3 + 0xb8))(plVar3);
  if (cVar1 == '\0') {
    plVar3 = (longlong *)FUN_146b33f9e(*(undefined8 *)(param_1 + 8));
    cVar1 = (**(code **)(*plVar3 + 0x40))(plVar3);
    if (cVar1 == '\0') {
      plVar3 = (longlong *)FUN_146b33fae(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x000146b6fef1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar3 + 0x58))(plVar3);
      return uVar2;
    }
  }
  return 1;
}



// FUNCTION 146b6fef6 FUN_146b6fef6 body=27 status=ok
// SIG undefined FUN_146b6fef6(void)

void FUN_146b6fef6(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_146b33f6e(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x000146b6ff0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 8))(plVar1);
  return;
}



// FUNCTION 146b6ff12 FUN_146b6ff12 body=38 status=ok
// SIG undefined FUN_146b6ff12(void)

void FUN_146b6ff12(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_146b33f76(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x000146b6ff35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(plVar1,0x41200000);
  return;
}



// FUNCTION 146b6ff38 FUN_146b6ff38 body=38 status=ok
// SIG undefined FUN_146b6ff38(void)

void FUN_146b6ff38(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_146b33f7e(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x000146b6ff5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(plVar1,0x41200000);
  return;
}



// FUNCTION 146b6ff5e FUN_146b6ff5e body=38 status=ok
// SIG undefined FUN_146b6ff5e(void)

void FUN_146b6ff5e(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_146b33f86(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x000146b6ff81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(plVar1,0x41200000);
  return;
}



// FUNCTION 146b6ff84 FUN_146b6ff84 body=38 status=ok
// SIG undefined FUN_146b6ff84(void)

void FUN_146b6ff84(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_146b33f8e(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x000146b6ffa7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(plVar1,0x41200000);
  return;
}



// FUNCTION 146b6ffaa FUN_146b6ffaa body=27 status=ok
// SIG undefined FUN_146b6ffaa(void)

void FUN_146b6ffaa(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_146b33fae(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x000146b6ffc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x48))(plVar1);
  return;
}



// FUNCTION 146b6ffc6 FUN_146b6ffc6 body=39 status=ok
// SIG undefined FUN_146b6ffc6(void)

undefined8 FUN_146b6ffc6(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_146b33fae(*(undefined8 *)(param_1 + 8));
  (**(code **)(*plVar1 + 0x50))(plVar1,param_2);
  return param_2;
}



// FUNCTION 146b6ffee FUN_146b6ffee body=168 status=ok
// SIG undefined FUN_146b6ffee(void)

undefined8 * FUN_146b6ffee(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  uVar3 = *param_1;
  plVar4 = (longlong *)param_1[1];
  if (plVar4 == (longlong *)0x0) {
    *puVar5 = &PTR_FUN_149f32130;
    puVar5[1] = uVar3;
    puVar5[2] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_FUN_149f32130;
    puVar5[1] = uVar3;
    puVar5[2] = plVar4;
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
  plVar4 = (longlong *)param_1[1];
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
  return puVar5;
}



// FUNCTION 146b70096 FUN_146b70096 body=225 status=ok
// SIG undefined FUN_146b70096(void)

undefined8 * FUN_146b70096(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  code *local_78 [2];
  undefined8 local_68;
  undefined **local_58;
  undefined8 *local_50;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR_FUN_149f32230;
  param_1[1] = 0;
  param_1[1] = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 2) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  if (1 < *(int *)(param_1 + 2)) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(param_1[1] + lVar2 * 8);
      lVar2 = lVar2 + 1;
      local_68 = 0;
      local_58 = &PTR_LAB_149f33d20;
      local_48 = (undefined4)lVar2;
      local_78[0] = FUN_142953a06;
      local_50 = param_1;
      (**(code **)(*plVar1 + 0x20))(plVar1,local_78);
    } while (lVar2 < (longlong)*(int *)(param_1 + 2) + -1);
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b70178 FUN_146b70178 body=87 status=ok
// SIG undefined FUN_146b70178(void)

longlong FUN_146b70178(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar5);
      lVar4 = (**(code **)(*plVar3 + 8))(plVar3,param_2);
      if (lVar4 != 0) {
        return lVar4;
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return 0;
}



// FUNCTION 146b701d0 FUN_146b701d0 body=130 status=ok
// SIG undefined FUN_146b701d0(void)

undefined8 FUN_146b701d0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_98 [32];
  undefined1 local_78 [80];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1409e67a4(local_78,param_3);
  FUN_146b70254(param_1,param_2,local_78,0);
  *(undefined4 *)(param_3 + 0x48) = 0;
  if (*(longlong *)(param_3 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(param_3);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b70254 FUN_146b70254 body=262 status=ok
// SIG undefined FUN_146b70254(void)

undefined8 FUN_146b70254(longlong param_1,undefined8 param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [80];
  undefined1 local_90 [64];
  longlong local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  iVar2 = *(int *)(param_1 + 0x10);
  if (param_4 < iVar2) {
    lVar3 = (longlong)param_4;
    do {
      if (*(int *)(param_3 + 0x34) < *(int *)(param_3 + 8)) {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + lVar3 * 8);
        FUN_1409e67a4(local_e0,param_3);
        (**(code **)(*plVar1 + 0x10))(plVar1,local_90,local_e0);
        FUN_14681b5ea(param_3,local_90);
        local_48 = 0;
        if (local_50 != 0) {
          FUN_1400020a8();
        }
        FUN_140149fc2(local_90);
        iVar2 = *(int *)(param_1 + 0x10);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  FUN_1409e67a4(param_2,param_3);
  *(undefined4 *)(param_3 + 0x48) = 0;
  if (*(longlong *)(param_3 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(param_3);
  if ((local_40 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146b7035c FUN_146b7035c body=83 status=ok
// SIG undefined FUN_146b7035c(void)

byte FUN_146b7035c(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 == 0) {
    bVar5 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar6 = 0;
    bVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar6);
      bVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,param_2);
      bVar5 = bVar5 | bVar4;
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  return bVar5 & 1;
}



// FUNCTION 146b703b0 FUN_146b703b0 body=171 status=ok
// SIG undefined FUN_146b703b0(void)

void FUN_146b703b0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined8 local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146b7045c(param_1 + 0x20);
  plVar2 = *(longlong **)
            (*(longlong *)(param_1 + 8) + (longlong)(*(int *)(param_1 + 0x10) + -1) * 8);
  local_58[0] = *param_2;
  local_48[0] = 0;
  if (local_58[0] != 0) {
    plVar1 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_2[2];
    }
    (**(code **)*plVar1)(plVar1,local_48);
  }
  (**(code **)(*plVar2 + 0x20))(plVar2,local_58);
  if (*param_2 != 0) {
    plVar2 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b7045c FUN_146b7045c body=290 status=ok
// SIG undefined FUN_146b7045c(void)

longlong * FUN_146b7045c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b70580 FUN_146b70580 body=127 status=ok
// SIG undefined FUN_146b70580(void)

undefined8 FUN_146b70580(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_14001cc68(0x60,0x10);
  local_28 = *param_1;
  *param_1 = 0;
  local_20 = (undefined4)param_1[1];
  local_1c = *(undefined4 *)((longlong)param_1 + 0xc);
  param_1[1] = 0;
  FUN_146b70096(uVar1);
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b70600 FUN_146b70600 body=1433 status=ok
// SIG undefined FUN_146b70600(void)

void FUN_146b70600(undefined8 *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,longlong param_6)

{
  longlong *plVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  undefined2 **ppuVar12;
  uint *puVar13;
  undefined2 *puVar14;
  undefined2 **ppuVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined1 auStack_118 [40];
  longlong *local_f0;
  UINT local_e4;
  undefined2 *local_e0;
  undefined2 **ppuStack_d8;
  longlong local_d0;
  undefined8 uStack_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined1 uStack_7c;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_f0 = param_4;
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    puVar17 = (undefined8 *)*param_1;
    lVar11 = (longlong)*(int *)(param_1 + 1) << 4;
    bVar2 = false;
    local_e4 = 0;
    do {
      puVar14 = &DAT_149dfb77a;
      if (*(int *)(puVar17 + 1) != 0) {
        puVar14 = (undefined2 *)*puVar17;
      }
      (**(code **)(*param_2 + 0x48))(param_2,&local_c0,puVar14,0);
      if (local_c0 == (undefined8 *)0x0) {
        if (!bVar2) {
          local_e4 = SetErrorMode(1);
          bVar2 = true;
          goto LAB_146b7072e;
        }
      }
      else {
        local_e0 = (undefined2 *)0x1800000001;
        local_d0 = 0;
        uStack_c8 = 0;
        FUN_146b447fa(local_c0,&local_e0);
        if ((*(byte *)((longlong)local_c0 + 0x29) & 2) == 0) {
          if ((int)uStack_c8 == 0) {
            uVar6 = FUN_144a82cde();
            puVar14 = &DAT_149dfb77a;
            if (*(int *)(puVar17 + 1) != 0) {
              puVar14 = (undefined2 *)*puVar17;
            }
            pwVar10 = L"Loaded empty chunkdb %s";
            goto LAB_146b7071a;
          }
          local_b8 = (undefined2 *)0x1800000001;
          local_a8 = 0;
          uStack_a0 = 0;
          local_90 = 0;
          uStack_8c = 0;
          uStack_88 = 0;
          uStack_84 = 0;
          uStack_80 = 0;
          uStack_7c = 0;
          local_98 = local_c0;
          local_c0 = (undefined8 *)0x0;
          FUN_144a787a6(&local_90);
          local_b8 = local_e0;
          uStack_b0 = ppuStack_d8;
          if (local_a8 != 0) {
            FUN_1400020a8();
          }
          local_a8 = local_d0;
          uStack_a0._0_4_ = (undefined4)uStack_c8;
          uStack_a0._4_4_ = uStack_c8._4_4_;
          local_d0 = 0;
          uStack_c8 = 0;
          lVar16 = param_4[1];
          uVar3 = (int)lVar16 + 1;
          *(uint *)(param_4 + 1) = uVar3;
          if (*(uint *)((longlong)param_4 + 0xc) < uVar3) {
            FUN_146b840aa(local_f0);
            param_4 = local_f0;
          }
          lVar7 = *param_4;
          lVar16 = (longlong)(int)lVar16 * 0x40;
          puVar8 = (undefined4 *)(lVar7 + lVar16);
          *puVar8 = (undefined4)local_b8;
          puVar8[1] = local_b8._4_4_;
          puVar8[2] = (undefined4)uStack_b0;
          puVar8[3] = uStack_b0._4_4_;
          *(undefined8 *)(lVar7 + 0x10 + lVar16) = 0;
          *(longlong *)(lVar7 + 0x10 + lVar16) = local_a8;
          local_a8 = 0;
          *(undefined4 *)(lVar7 + 0x18 + lVar16) = (undefined4)uStack_a0;
          *(undefined4 *)(lVar7 + 0x1c + lVar16) = uStack_a0._4_4_;
          uStack_a0 = 0;
          *(undefined8 **)(lVar7 + 0x20 + lVar16) = local_98;
          local_98 = (undefined8 *)0x0;
          *(undefined8 *)(lVar7 + 0x28 + lVar16) = 0;
          *(ulonglong *)(lVar7 + 0x28 + lVar16) = CONCAT44(uStack_8c,local_90);
          local_90 = 0;
          uStack_8c = 0;
          *(undefined4 *)(lVar7 + 0x30 + lVar16) = uStack_88;
          *(undefined4 *)(lVar7 + 0x34 + lVar16) = uStack_84;
          uStack_88 = 0;
          uStack_84 = 0;
          *(undefined1 *)(lVar7 + 0x3c + lVar16) = uStack_7c;
          *(undefined4 *)(lVar7 + 0x38 + lVar16) = uStack_80;
          FUN_146b70b9a(&local_b8);
          param_4 = local_f0;
        }
        else {
          uVar6 = FUN_144a82cde();
          puVar14 = &DAT_149dfb77a;
          if (*(int *)(puVar17 + 1) != 0) {
            puVar14 = (undefined2 *)*puVar17;
          }
          pwVar10 = L"Failed to load chunkdb header for %s";
LAB_146b7071a:
          FUN_140047918(uVar6,pwVar10,puVar14);
        }
        if (local_d0 != 0) {
          FUN_1400020a8();
        }
LAB_146b7072e:
        if (local_c0 != (undefined8 *)0x0) {
          (**(code **)*local_c0)(local_c0,1);
        }
      }
      puVar17 = puVar17 + 2;
      lVar11 = lVar11 + -0x10;
    } while (lVar11 != 0);
    if (bVar2) {
      SetErrorMode(local_e4);
    }
  }
  if ((longlong)(int)param_4[1] != 0) {
    ppuVar12 = (undefined2 **)*local_f0;
    ppuVar15 = ppuVar12 + (longlong)(int)param_4[1] * 8;
    do {
      if ((longlong)*(int *)(ppuVar12 + 3) != 0) {
        puVar14 = ppuVar12[2];
        lVar11 = (longlong)*(int *)(ppuVar12 + 3) << 5;
        do {
          uVar4 = FUN_1447addd0(puVar14,0x10);
          iVar5 = FUN_146b84130(param_5,uVar4,puVar14);
          if (iVar5 == -1) {
            uStack_b0 = &local_e0;
            local_e0 = puVar14;
            ppuStack_d8 = ppuVar12;
            local_b8 = puVar14;
            FUN_146b841a4(param_5,&local_c0,&local_b8);
            if (param_6 != 0) {
              FUN_1457adc9c(param_6,&local_b8,puVar14,0);
            }
          }
          puVar14 = puVar14 + 0x10;
          lVar11 = lVar11 + -0x20;
        } while (lVar11 != 0);
      }
      ppuVar12 = ppuVar12 + 8;
    } while (ppuVar12 != ppuVar15);
  }
  local_98 = (undefined8 *)0x0;
  local_90 = 0;
  local_b8 = (undefined2 *)0x0;
  uStack_b0 = (undefined2 **)0x0;
  uStack_8c = 0x80;
  uStack_88 = 0xffffffff;
  uStack_84 = 0;
  local_78 = 0;
  local_70 = 0;
  if (0 < (int)param_3[1]) {
    lVar11 = 0;
    lVar16 = 0;
    do {
      lVar7 = *param_3;
      uVar4 = FUN_1447addd0(lVar7 + lVar11,0x10);
      iVar5 = FUN_146b84130(param_5,uVar4,lVar7 + lVar11);
      lVar7 = (longlong)iVar5 * 0x28 + *param_5;
      if (lVar7 != 0 && iVar5 != -1) {
        plVar1 = *(longlong **)(*(longlong *)(lVar7 + 0x18) + 0x20);
        (**(code **)(*plVar1 + 0x18))(plVar1,&local_e0);
        iVar5 = (int)ppuStack_d8 + -1;
        puVar14 = local_e0;
        if ((int)ppuStack_d8 == 0) {
          iVar5 = 0;
          puVar14 = &DAT_149dfb77a;
        }
        uVar4 = FUN_144a49b4a(iVar5,puVar14);
        puVar8 = (undefined4 *)FUN_146b84648(&local_b8,uVar4,&local_e0);
        *puVar8 = (int)lVar16;
        if (local_e0 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      lVar16 = lVar16 + 1;
      lVar11 = lVar11 + 0x10;
    } while (lVar16 < (int)param_3[1]);
  }
  lVar11 = local_f0[1];
  if ((longlong)(int)lVar11 != 0) {
    lVar16 = *local_f0;
    lVar7 = 0;
    do {
      *(int *)(lVar16 + 0x38 + lVar7) = (int)param_3[1];
      plVar1 = *(longlong **)(lVar16 + 0x20 + lVar7);
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_e0);
      puVar14 = &DAT_149dfb77a;
      if ((int)ppuStack_d8 != 0) {
        puVar14 = local_e0;
      }
      iVar5 = (int)ppuStack_d8 + -1;
      if ((int)ppuStack_d8 == 0) {
        iVar5 = 0;
      }
      uVar4 = FUN_144a49b4a(iVar5,puVar14);
      iVar5 = FUN_144a7df4c(&local_b8,uVar4,&local_e0);
      lVar9 = 0;
      if (iVar5 != -1) {
        lVar9 = (longlong)iVar5 * 0x20 + (longlong)local_b8;
      }
      puVar13 = (uint *)(lVar9 + 0x10);
      if (lVar9 == 0) {
        puVar13 = (uint *)0x0;
      }
      if (local_e0 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (puVar13 != (uint *)0x0) {
        *(uint *)(lVar16 + 0x38 + lVar7) = ~*puVar13 + (int)param_3[1];
      }
      lVar7 = lVar7 + 0x40;
    } while ((longlong)(int)lVar11 * 0x40 != lVar7);
  }
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_14062c7dc(&local_b8);
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b70b9a FUN_146b70b9a body=67 status=ok
// SIG undefined FUN_146b70b9a(void)

void FUN_146b70b9a(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b70bf6 FUN_146b70bf6 body=255 status=ok
// SIG undefined FUN_146b70bf6(void)

undefined8
FUN_146b70bf6(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 local_a0;
  longlong local_98;
  ulonglong uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = &local_88;
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  local_a0 = 0;
  FUN_146b70600();
  uVar1 = FUN_142947d43(&local_98,*(undefined4 *)(param_3 + 8),param_4,param_5);
  local_40 = 0;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_146b7afc4(&local_88);
  FUN_146b84817(local_98,uStack_90 & 0xffffffff);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b70cf6 FUN_146b70cf6 body=102 status=ok
// SIG undefined FUN_146b70cf6(void)

void FUN_146b70cf6(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x38))();
  if ((longlong)*(int *)(param_1 + 0x158) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x150);
    lVar3 = (longlong)*(int *)(param_1 + 0x158) << 6;
    do {
      if ((*(char *)(lVar2 + 0x3c) == '\0') && (iVar1 < *(int *)(lVar2 + 0x38))) {
        FUN_146b7b052(lVar2,*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x48),
                      *(undefined1 *)(param_1 + 0x38));
      }
      lVar2 = lVar2 + 0x40;
      lVar3 = lVar3 + -0x40;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 146b70d5c FUN_146b70d5c body=658 status=ok
// SIG undefined FUN_146b70d5c(void)

void FUN_146b70d5c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  
  *param_1 = &PTR_FUN_149f322e0;
  param_1[1] = &PTR_FUN_149f32320;
  LOCK();
  *(undefined1 *)((longlong)param_1 + 0xb1) = 1;
  UNLOCK();
  if (param_1[0x15] == 0) {
    *(undefined4 *)(param_1[0x10] + 0x80) = 0;
    FUN_140b576f0();
  }
  lVar3 = param_1[0x13];
  if (param_1[0x13] != 0) {
    while( true ) {
      do {
        lVar5 = lVar3;
        lVar3 = 0;
      } while (lVar5 == 0);
      plVar6 = *(longlong **)(lVar5 + 0x70);
      cVar4 = (**(code **)(*plVar6 + 0x20))(plVar6,0xffffffff,0);
      if (cVar4 != '\0') break;
      lVar3 = param_1[0x13];
    }
  }
  (**(code **)(*(longlong *)param_1[6] + 0x10))((longlong *)param_1[6],param_1[0x15]);
  param_1[0x15] = 0;
  while ((undefined8 *)param_1[0x61] != (undefined8 *)0x0) {
    param_1[0x61] = *(undefined8 *)param_1[0x61];
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x5f) = 0;
  if (param_1[0x5e] != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(param_1 + 0x56);
  while ((undefined8 *)param_1[0x55] != (undefined8 *)0x0) {
    param_1[0x55] = *(undefined8 *)param_1[0x55];
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x53) = 0;
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(param_1 + 0x4a);
  *(undefined4 *)(param_1 + 0x49) = 0;
  if (param_1[0x48] != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x3f) = 0;
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  FUN_146b7b19e(param_1 + 0x36);
  *(undefined4 *)(param_1 + 0x35) = 0;
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  FUN_146b7afc4(param_1 + 0x2c);
  FUN_146b84817(param_1[0x2a],*(undefined4 *)(param_1 + 0x2b));
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x29) = 0;
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(param_1 + 0x20);
  if (param_1[0x18] != 0) {
    plVar6 = param_1 + 0x1c;
    if ((longlong *)param_1[0x1a] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[0x1a];
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  plVar6 = (longlong *)param_1[0x14];
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
  plVar6 = (longlong *)param_1[0x11];
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
  FUN_1447a1747(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b71000 FUN_146b71000 body=252 status=ok
// SIG undefined FUN_146b71000(void)

bool FUN_146b71000(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_98 [44];
  undefined1 local_6c [4];
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = 0;
  uStack_60 = 0;
  lVar4 = **(longlong **)(param_1 + 0x2a8);
  if (lVar4 != 0) {
    do {
      local_68 = *(undefined8 *)(lVar4 + 8);
      uStack_60 = *(undefined8 *)(lVar4 + 0x10);
      lVar1 = *(longlong *)(param_1 + 0x2a8);
      *(longlong *)(param_1 + 0x2a8) = lVar4;
      *(undefined8 *)(lVar4 + 8) = 0;
      *(undefined8 *)(lVar4 + 0x10) = 0;
      if (lVar1 != 0) {
        FUN_1400020a8();
      }
      FUN_1457adc9c(param_1 + 0x2b0,local_6c,&local_68,0);
      FUN_1457adc9c(param_1 + 0x100,local_6c,&local_68);
      lVar4 = **(longlong **)(param_1 + 0x2a8);
    } while (lVar4 != 0);
  }
  uVar2 = FUN_1447addd0(param_2,0x10);
  iVar3 = FUN_140f5cb3a(param_1 + 0x2b0,uVar2,param_2);
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return iVar3 != -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b710fe FUN_146b710fe body=76 status=ok
// SIG undefined FUN_146b710fe(void)

void FUN_146b710fe(undefined8 *param_1,longlong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  pcVar1 = (code *)*param_1;
  plVar3 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[2];
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,param_2);
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(param_2);
  return;
}



// FUNCTION 146b7114a FUN_146b7114a body=66 status=ok
// SIG undefined FUN_146b7114a(void)

undefined8 FUN_146b7114a(longlong param_1,undefined8 param_2,longlong param_3)

{
  FUN_1461c8dd4(param_3,param_2,param_1 + 0x200);
  *(undefined4 *)(param_3 + 0x48) = 0;
  if (*(longlong *)(param_3 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(param_3);
  return param_2;
}



// FUNCTION 146b7118c FUN_146b7118c body=114 status=ok
// SIG undefined FUN_146b7118c(void)

bool FUN_146b7118c(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  
  uVar3 = FUN_1447addd0(param_2,0x10);
  iVar4 = FUN_140f5cb3a(param_1 + 0x200,uVar3,param_2);
  if (iVar4 != -1) {
    puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar5 = 0;
    uVar2 = param_2[1];
    puVar5[1] = *param_2;
    puVar5[2] = uVar2;
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      puVar1 = *(undefined8 **)(param_1 + 0x300);
      *(undefined8 **)(param_1 + 0x300) = puVar5;
      UNLOCK();
      LOCK();
      *puVar1 = puVar5;
      UNLOCK();
    }
  }
  return iVar4 != -1;
}



// FUNCTION 146b711fe FUN_146b711fe body=63 status=ok
// SIG undefined FUN_146b711fe(void)

void FUN_146b711fe(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  FUN_146b7045c(param_1 + 0xc0);
  if (*param_2 != 0) {
    plVar1 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_2[2];
    }
                    /* WARNING: Could not recover jumptable at 0x000146b71232. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 146b71246 FUN_146b71246 body=159 status=ok
// SIG undefined FUN_146b71246(void)

undefined8 FUN_146b71246(longlong *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = FUN_1447addd0(param_2,0x10);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2;
        if ((((*(int *)(lVar1 + lVar4 * 0x18) == *param_2) &&
             (*(int *)(lVar1 + 4 + lVar4 * 0x18) == param_2[1])) &&
            (*(int *)(lVar1 + 8 + lVar4 * 0x18) == param_2[2])) &&
           (*(int *)(lVar1 + 0xc + lVar4 * 0x18) == param_2[3])) {
          FUN_146b8483e(param_1);
          return 1;
        }
        iVar2 = *(int *)(lVar1 + lVar4 * 0x18 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 146b712e6 FUN_146b712e6 body=329 status=ok
// SIG undefined FUN_146b712e6(void)

void FUN_146b712e6(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  
  iVar1 = (int)param_1[1];
  lVar14 = (longlong)iVar1;
  if (lVar14 != 0) {
    lVar2 = *param_1;
    pcVar3 = (code *)*param_2;
    plVar9 = (longlong *)param_2[2];
    if ((longlong *)param_2[2] == (longlong *)0x0) {
      plVar9 = param_2 + 4;
    }
    uVar7 = (**(code **)(*plVar9 + 8))();
    bVar4 = (*pcVar3)(uVar7,lVar2);
    iVar15 = 0;
    iVar11 = 0;
    do {
      lVar8 = (longlong)iVar11;
      iVar6 = iVar11 + 1;
      if (iVar11 + 1 < iVar1) {
        iVar6 = iVar1;
      }
      lVar10 = lVar8 * 0x10;
      lVar16 = lVar2 + 0x10 + lVar10;
      iVar12 = iVar11;
      do {
        lVar8 = lVar8 + 1;
        iVar13 = iVar6;
        if (lVar14 <= lVar8) break;
        pcVar3 = (code *)*param_2;
        plVar9 = (longlong *)param_2[2];
        if ((longlong *)param_2[2] == (longlong *)0x0) {
          plVar9 = param_2 + 4;
        }
        uVar7 = (**(code **)(*plVar9 + 8))();
        bVar5 = (*pcVar3)(uVar7,lVar16);
        iVar12 = iVar12 + 1;
        lVar16 = lVar16 + 0x10;
        iVar13 = iVar12;
      } while ((bVar4 & 1) == bVar5);
      if ((bVar4 & 1) == 0) {
        if (iVar15 != iVar11) {
          memmove((void *)((longlong)iVar15 * 0x10 + lVar2),(void *)(lVar10 + lVar2),
                  (longlong)(iVar13 - iVar11) << 4);
        }
        iVar15 = iVar15 + (iVar13 - iVar11);
      }
      iVar11 = iVar13;
      bVar4 = bVar4 ^ 1;
    } while (lVar8 < lVar14);
    *(int *)(param_1 + 1) = iVar15;
  }
  return;
}



// FUNCTION 146b71430 FUN_146b71430 body=115 status=ok
// SIG undefined FUN_146b71430(void)

void FUN_146b71430(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140c60952(param_1,iVar1);
    }
    FUN_140100f9f((longlong)iVar1 * 0x10 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146b27e7c(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146b714a4 FUN_146b714a4 body=412 status=ok
// SIG undefined FUN_146b714a4(void)

void FUN_146b714a4(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  char cVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined2 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined1 auStack_98 [40];
  longlong *local_70;
  longlong local_68;
  undefined1 local_60;
  undefined7 uStack_5f;
  int local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar1 = *(int *)(param_1 + 0x158);
  local_68 = param_1;
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x150);
    local_70 = param_3 + 4;
    lVar13 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + 0x20 + lVar13);
      if (lVar3 != 0) {
        pcVar4 = (code *)*param_2;
        plVar10 = (longlong *)param_2[2];
        if ((longlong *)param_2[2] == (longlong *)0x0) {
          plVar10 = param_2 + 4;
        }
        uVar9 = (**(code **)(*plVar10 + 8))();
        cVar8 = (*pcVar4)(uVar9,lVar3);
        if (cVar8 != '\0') {
          plVar10 = *(longlong **)(local_68 + 0x48);
          plVar5 = *(longlong **)(lVar2 + 0x20 + lVar13);
          (**(code **)(*plVar5 + 0x18))(plVar5,&local_60);
          puVar11 = &DAT_149dfb77a;
          if (local_58 != 0) {
            puVar11 = (undefined2 *)CONCAT71(uStack_5f,local_60);
          }
          (**(code **)(*plVar10 + 0x48))(plVar10,&local_50,puVar11,0);
          if (CONCAT71(uStack_5f,local_60) != 0) {
            FUN_1400020a8();
          }
          puVar7 = local_50;
          if (local_50 == (undefined8 *)0x0) {
            FUN_14572541c(*(undefined8 *)(lVar2 + 0x20 + lVar13));
            puVar12 = *(undefined8 **)(lVar2 + 0x20 + lVar13);
            local_60 = 0;
          }
          else {
            local_50 = (undefined8 *)0x0;
            puVar6 = *(undefined8 **)(lVar2 + 0x20 + lVar13);
            puVar12 = puVar6;
            if ((puVar6 != puVar7) &&
               (*(undefined8 **)(lVar2 + 0x20 + lVar13) = puVar7, puVar12 = puVar7,
               puVar6 != (undefined8 *)0x0)) {
              (**(code **)*puVar6)(puVar6,1);
              puVar12 = *(undefined8 **)(lVar2 + 0x20 + lVar13);
            }
            local_60 = 1;
          }
          pcVar4 = (code *)*param_3;
          plVar10 = (longlong *)param_3[2];
          if ((longlong *)param_3[2] == (longlong *)0x0) {
            plVar10 = local_70;
          }
          uVar9 = (**(code **)(*plVar10 + 8))();
          (*pcVar4)(uVar9,puVar12,&local_60);
          if (local_50 != (undefined8 *)0x0) {
            (**(code **)*local_50)(local_50,1);
          }
        }
      }
      lVar13 = lVar13 + 0x40;
    } while ((longlong)iVar1 * 0x40 != lVar13);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b71642 FUN_146b71642 body=572 status=ok
// SIG undefined FUN_146b71642(void)

undefined8 * FUN_146b71642(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_d8 [44];
  int local_ac;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  longlong *local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  uint uStack_64;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_1 = &PTR_FUN_149f32400;
  iVar10 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  local_a8 = param_3 + 2;
  local_68 = 0;
  uStack_64 = 1;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  local_98 = param_2;
  uStack_60 = local_a8;
  if ((int)param_3[5] != 0) {
    FUN_1449c0562(&local_68);
    iVar10 = (int)param_3[5];
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  uStack_84 = uStack_64;
  local_80 = uStack_60;
  local_90 = param_3;
  if ((iStack_54 != iVar10) || (uStack_60 != local_a8)) {
    iVar9 = 0;
    local_ac = iVar10;
    local_a0 = param_3;
    do {
      lVar7 = (**(code **)(*local_98 + 0x68))(local_98,(longlong)iStack_74 * 0x18 + *local_90);
      if ((lVar7 != 0) && (iVar10 = *(int *)(lVar7 + 0x50), (longlong)iVar10 != 0)) {
        lVar7 = *(longlong *)(lVar7 + 0x48);
        lVar8 = 0;
        do {
          iVar4 = *(int *)(param_1 + 3);
          *(uint *)(param_1 + 3) = iVar4 + 1U;
          if (*(uint *)((longlong)param_1 + 0x1c) < iVar4 + 1U) {
            FUN_140c60952(param_1 + 2,iVar4);
          }
          puVar1 = (undefined8 *)(lVar8 + lVar7);
          uVar6 = puVar1[1];
          puVar2 = (undefined8 *)(param_1[2] + (longlong)iVar4 * 0x10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar6;
          local_68 = *(undefined4 *)puVar1;
          uStack_64 = *(uint *)((longlong)puVar1 + 4);
          uStack_60 = (longlong *)puVar1[1];
          iVar4 = *(int *)(param_1 + 5);
          *(uint *)(param_1 + 5) = iVar4 + 1U;
          if (*(uint *)((longlong)param_1 + 0x2c) < iVar4 + 1U) {
            FUN_146b84ec4(param_1 + 4,iVar4);
          }
          lVar5 = param_1[4];
          puVar3 = (undefined4 *)(lVar5 + (longlong)iVar4 * 0x14);
          *puVar3 = local_68;
          puVar3[1] = uStack_64;
          puVar3[2] = (undefined4)uStack_60;
          puVar3[3] = uStack_60._4_4_;
          *(int *)(lVar5 + 0x10 + (longlong)iVar4 * 0x14) = iVar9;
          iVar9 = iVar9 + 1;
          lVar8 = lVar8 + 0x18;
        } while ((longlong)iVar10 * 0x18 != lVar8);
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != local_a0 || (local_80 != local_a8 || iStack_74 != local_ac));
  }
  FUN_146b84f58(param_1[4],*(undefined4 *)(param_1 + 5));
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146b71880 FUN_146b71880 body=263 status=ok
// SIG undefined FUN_146b71880(void)

undefined8 * FUN_146b71880(undefined8 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149f32400;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar6 = 0;
  param_1[2] = 0;
  param_1[2] = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 3) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  iVar2 = *(int *)(param_1 + 3);
  uVar7 = 0;
  if ((longlong)iVar2 != 0) {
    lVar4 = param_1[2];
    lVar9 = 0;
    iVar8 = 0;
    do {
      puVar1 = (undefined4 *)(lVar4 + lVar9);
      local_58 = *puVar1;
      uStack_54 = puVar1[1];
      uStack_50 = puVar1[2];
      uStack_4c = puVar1[3];
      iVar3 = *(int *)(param_1 + 5);
      *(uint *)(param_1 + 5) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0x2c) < iVar3 + 1U) {
        FUN_146b84ec4(param_1 + 4,iVar3);
      }
      lVar5 = param_1[4];
      puVar1 = (undefined4 *)(lVar5 + (longlong)iVar3 * 0x14);
      *puVar1 = local_58;
      puVar1[1] = uStack_54;
      puVar1[2] = uStack_50;
      puVar1[3] = uStack_4c;
      *(int *)(lVar5 + 0x10 + (longlong)iVar3 * 0x14) = iVar8;
      iVar8 = iVar8 + 1;
      lVar9 = lVar9 + 0x10;
    } while ((longlong)iVar2 * 0x10 != lVar9);
    uVar7 = *(undefined4 *)(param_1 + 5);
    uVar6 = param_1[4];
  }
  FUN_146b84f58(uVar6,uVar7);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b71988 FUN_146b71988 body=207 status=ok
// SIG undefined FUN_146b71988(void)

undefined8 * FUN_146b71988(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_58 [36];
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = 0;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  if ((longlong)*(int *)(param_1 + 0x28) != 0) {
    piVar5 = *(int **)(param_1 + 0x20);
    lVar7 = (longlong)*(int *)(param_1 + 0x28) * 0x14;
    iVar3 = 0;
    iVar4 = 0;
    iVar6 = 0;
    do {
      if ((iVar1 <= piVar5[4]) &&
         ((((iVar2 != *piVar5 || (iVar3 != piVar5[1])) || (iVar4 != piVar5[2])) ||
          (iVar6 != piVar5[3])))) {
        FUN_1457adc9c(param_2,local_34,piVar5,0);
        iVar2 = *piVar5;
        iVar3 = piVar5[1];
        iVar4 = piVar5[2];
        iVar6 = piVar5[3];
      }
      piVar5 = piVar5 + 5;
      lVar7 = lVar7 + -0x14;
    } while (lVar7 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146b71a58 FUN_146b71a58 body=210 status=ok
// SIG undefined FUN_146b71a58(void)

int FUN_146b71a58(longlong param_1,uint *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  bool bVar9;
  
  uVar2 = *(uint *)(param_1 + 0x28);
  lVar4 = *(longlong *)(param_1 + 0x20);
  uVar8 = 0;
  uVar6 = uVar2;
  if (0 < (int)uVar2) {
    do {
      uVar5 = (uVar6 >> 1) + uVar8;
      uVar3 = *(uint *)(lVar4 + (ulonglong)uVar5 * 0x14);
      if (uVar3 < *param_2) {
LAB_146b71a99:
        uVar8 = uVar5 + (uVar6 & 1);
      }
      else if (uVar3 <= *param_2) {
        lVar1 = lVar4 + (ulonglong)uVar5 * 0x14;
        if ((*(uint *)(lVar1 + 4) < param_2[1]) ||
           ((*(uint *)(lVar1 + 4) == param_2[1] &&
            ((*(uint *)(lVar1 + 8) < param_2[2] ||
             ((*(uint *)(lVar1 + 8) == param_2[2] &&
              ((*(uint *)(lVar1 + 0xc) < param_2[3] ||
               ((*(uint *)(lVar1 + 0xc) == param_2[3] &&
                (*(int *)(lVar1 + 0x10) < *(int *)(param_1 + 8))))))))))))) goto LAB_146b71a99;
      }
      bVar9 = 1 < uVar6;
      uVar6 = uVar6 >> 1;
    } while (bVar9);
  }
  uVar6 = uVar8;
  if ((int)uVar8 < (int)uVar2) {
    puVar7 = (uint *)(lVar4 + (ulonglong)uVar8 * 0x14 + 0xc);
    uVar5 = uVar8;
    do {
      uVar6 = uVar5;
      if ((((puVar7[-3] != *param_2) || (puVar7[-2] != param_2[1])) || (puVar7[-1] != param_2[2]))
         || (*puVar7 != param_2[3])) break;
      uVar5 = uVar5 + 1;
      puVar7 = puVar7 + 5;
      uVar6 = uVar2;
    } while (uVar2 != uVar5);
  }
  return uVar6 - uVar8;
}



// FUNCTION 146b71b2a FUN_146b71b2a body=3174 status=ok
// SIG undefined FUN_146b71b2a(void)

void FUN_146b71b2a(longlong param_1,uint *param_2,undefined1 param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar17;
  uint *puVar18;
  uint uVar19;
  uint *puVar20;
  ulonglong uVar21;
  uint *puVar22;
  uint *puVar23;
  uint **ppuVar24;
  uint *puVar25;
  uint *puVar26;
  int iVar27;
  uint *puVar28;
  float fVar29;
  undefined1 auStack_408 [40];
  uint **local_3e0;
  ulonglong local_3d8;
  uint *local_3d0;
  uint *local_3c8;
  undefined8 *local_3c0;
  undefined8 *local_3b8;
  undefined8 *local_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_388;
  undefined4 local_380;
  undefined8 local_37c;
  undefined4 local_374;
  longlong local_368;
  undefined4 local_360;
  uint *local_358;
  undefined8 **local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong uVar16;
  
  local_3c8 = (uint *)CONCAT71(local_3c8._1_7_,param_3);
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_408;
  local_388 = 0;
  local_380 = 0;
  local_3a8 = 0;
  uStack_3a0 = 0;
  local_37c = 0xffffffff00000080;
  local_374 = 0;
  local_368 = 0;
  local_360 = 0;
  local_3d0 = param_2;
  if ((longlong)(int)param_2[2] != 0) {
    puVar18 = *(uint **)param_2;
    puVar20 = puVar18 + (longlong)(int)param_2[2] * 4;
    do {
      uVar13 = puVar18[2];
      uVar3 = *(uint *)(param_1 + 0x28);
      lVar5 = *(longlong *)(param_1 + 0x20);
      uVar19 = 0;
      if (0 < (int)uVar3) {
        uVar19 = 0;
        uVar17 = uVar3;
        do {
          uVar1 = (uVar17 >> 1) + uVar19;
          uVar4 = *(uint *)(lVar5 + (ulonglong)uVar1 * 0x14);
          if (uVar4 < *puVar18) {
LAB_146b71bfa:
            uVar19 = uVar1 + (uVar17 & 1);
          }
          else if (uVar4 <= *puVar18) {
            lVar2 = lVar5 + (ulonglong)uVar1 * 0x14;
            if (*(uint *)(lVar2 + 4) < puVar18[1]) goto LAB_146b71bfa;
            if (*(uint *)(lVar2 + 4) == puVar18[1]) {
              if (*(uint *)(lVar2 + 8) < uVar13) goto LAB_146b71bfa;
              if (*(uint *)(lVar2 + 8) == uVar13) {
                local_3d8 = CONCAT44(local_3d8._4_4_,uVar13);
                if ((*(uint *)(lVar2 + 0xc) < puVar18[3]) ||
                   ((*(uint *)(lVar2 + 0xc) == puVar18[3] &&
                    (*(int *)(lVar2 + 0x10) < *(int *)(param_1 + 8))))) goto LAB_146b71bfa;
              }
            }
          }
          bVar6 = 1 < uVar17;
          uVar17 = uVar17 >> 1;
        } while (bVar6);
      }
      local_3b0 = (undefined8 *)CONCAT44(local_3b0._4_4_,0x7fffffff);
      if (((((int)uVar19 < (int)uVar3) &&
           (uVar21 = (ulonglong)uVar19, *(uint *)(lVar5 + uVar21 * 0x14) == *puVar18)) &&
          (*(uint *)(lVar5 + 4 + uVar21 * 0x14) == puVar18[1])) &&
         ((*(uint *)(lVar5 + 8 + uVar21 * 0x14) == puVar18[2] &&
          (*(uint *)(lVar5 + 0xc + uVar21 * 0x14) == puVar18[3])))) {
        local_3b0 = (undefined8 *)
                    CONCAT44(local_3b0._4_4_,*(undefined4 *)(lVar5 + uVar21 * 0x14 + 0x10));
      }
      local_350 = &local_3b0;
      local_358 = puVar18;
      FUN_1401337ca(&local_3a8,&local_58,&local_358,0);
      puVar18 = puVar18 + 4;
    } while (puVar18 != puVar20);
  }
  if ((char)local_3c8 == '\0') {
    uVar13 = local_3d0[2];
    puVar18 = *(uint **)local_3d0;
    local_3c0 = &local_3a8;
    if (1 < (longlong)(int)uVar13) {
      memset(local_348,0,0x2f0);
      local_350 = (undefined8 **)(puVar18 + (longlong)(int)uVar13 * 4 + -4);
      local_358 = puVar18;
      fVar29 = logf((float)(int)uVar13);
      local_348[0] = (int)(longlong)(fVar29 + fVar29);
      ppuVar24 = &local_358;
      do {
        puVar20 = *ppuVar24;
        puVar18 = ppuVar24[1];
        iVar11 = *(int *)(ppuVar24 + 2);
        iVar12 = (int)((ulonglong)((longlong)puVar18 - (longlong)puVar20) >> 4);
        uVar21 = (ulonglong)(iVar12 + 1);
        puVar25 = puVar18;
        puVar28 = puVar20;
        local_3e0 = ppuVar24;
        if (iVar11 != 0) {
LAB_146b722b9:
          ppuVar24 = local_3e0;
          if (8 < (int)(uint)uVar21) {
            local_3d8 = CONCAT44(local_3d8._4_4_,iVar11);
            uVar21 = (ulonglong)((uint)uVar21 >> 1);
            uVar7 = *(undefined8 *)(puVar20 + uVar21 * 4);
            uVar8 = *(undefined8 *)(puVar20 + uVar21 * 4 + 2);
            uVar9 = *(undefined8 *)(puVar20 + 2);
            *(undefined8 *)(puVar20 + uVar21 * 4) = *(undefined8 *)puVar20;
            *(undefined8 *)(puVar20 + uVar21 * 4 + 2) = uVar9;
            local_58._0_4_ = (uint)uVar7;
            local_58._4_4_ = (uint)((ulonglong)uVar7 >> 0x20);
            uStack_50._0_4_ = (uint)uVar8;
            uStack_50._4_4_ = (uint)((ulonglong)uVar8 >> 0x20);
            *puVar20 = (uint)local_58;
            puVar20[1] = local_58._4_4_;
            puVar20[2] = (uint)uStack_50;
            puVar20[3] = uStack_50._4_4_;
            puVar23 = puVar18 + 4;
            puVar26 = puVar20;
            local_3d0 = puVar25;
            local_3c8 = puVar28;
            local_58 = uVar7;
            uStack_50 = uVar8;
            do {
              puVar25 = puVar26 + 4;
              puVar10 = puVar26 + 4;
              do {
                puVar26 = puVar10;
                puVar28 = puVar25;
                if (puVar18 < puVar26) break;
                iVar11 = FUN_142954a82(&local_3c0,puVar26);
                iVar12 = FUN_142954a82(&local_3c0,puVar20);
                puVar25 = puVar28 + 4;
                puVar10 = puVar26 + 4;
              } while (iVar11 <= iVar12);
              puVar10 = puVar23 + -8;
              do {
                puVar22 = puVar23;
                puVar25 = puVar10;
                puVar23 = puVar22 + -4;
                if (puVar23 <= puVar20) break;
                iVar11 = FUN_142954a82(&local_3c0,puVar20);
                iVar12 = FUN_142954a82(&local_3c0,puVar23);
                puVar10 = puVar25 + -4;
              } while (iVar11 <= iVar12);
              if (puVar23 < puVar26) goto LAB_146b723a0;
              uVar7 = *(undefined8 *)puVar26;
              uVar8 = *(undefined8 *)(puVar26 + 2);
              uVar9 = *(undefined8 *)(puVar22 + -2);
              *(undefined8 *)puVar26 = *(undefined8 *)puVar23;
              *(undefined8 *)(puVar26 + 2) = uVar9;
              local_58._0_4_ = (uint)uVar7;
              local_58._4_4_ = (uint)((ulonglong)uVar7 >> 0x20);
              uStack_50._0_4_ = (uint)uVar8;
              uStack_50._4_4_ = (uint)((ulonglong)uVar8 >> 0x20);
              *puVar23 = (uint)local_58;
              puVar22[-3] = local_58._4_4_;
              puVar22[-2] = (uint)uStack_50;
              puVar22[-1] = uStack_50._4_4_;
              local_58 = uVar7;
              uStack_50 = uVar8;
            } while( true );
          }
          for (; puVar28 = puVar20, puVar25 = puVar20, puVar20 < puVar18; puVar18 = puVar18 + -4) {
            while (puVar23 = puVar28, puVar25 = puVar25 + 4, puVar25 <= puVar18) {
              iVar11 = FUN_142954a82(&local_3c0,puVar25);
              iVar12 = FUN_142954a82(&local_3c0,puVar23);
              puVar28 = puVar25;
              if (iVar11 <= iVar12) {
                puVar28 = puVar23;
              }
            }
            local_58 = *(undefined8 *)puVar23;
            uStack_50 = *(undefined8 *)(puVar23 + 2);
            uVar8 = local_58;
            uVar9 = uStack_50;
            uVar7 = *(undefined8 *)(puVar18 + 2);
            *(undefined8 *)puVar23 = *(undefined8 *)puVar18;
            *(undefined8 *)(puVar23 + 2) = uVar7;
            local_58._4_4_ = (uint)((ulonglong)local_58 >> 0x20);
            uStack_50._4_4_ = (uint)((ulonglong)uStack_50 >> 0x20);
            *puVar18 = (uint)local_58;
            puVar18[1] = local_58._4_4_;
            puVar18[2] = (uint)uStack_50;
            puVar18[3] = uStack_50._4_4_;
            local_58 = uVar8;
            uStack_50 = uVar9;
          }
          goto LAB_146b72727;
        }
LAB_146b72469:
        local_3b8 = local_3c0;
        iVar11 = (int)uVar21;
        ppuVar24 = local_3e0;
        if (iVar11 != 0) {
          local_3b0 = local_3c0;
          uVar13 = (iVar12 - (iVar12 + -1 >> 0x1f)) + -1 >> 1;
          do {
            uVar16 = (ulonglong)uVar13;
            local_3d8 = uVar16;
            while (uVar3 = uVar13 * 2 + 1, (int)uVar3 < iVar11) {
              uVar19 = uVar13 * 2 + 2;
              uVar13 = uVar3;
              if ((int)uVar19 < iVar11) {
                iVar12 = FUN_142954a82(&local_3b0,puVar20 + (longlong)(int)uVar19 * 4);
                iVar14 = FUN_142954a82(&local_3b0,puVar20 + (longlong)(int)uVar3 * 4);
                if (iVar14 <= iVar12) {
                  uVar13 = uVar19;
                }
              }
              puVar25 = puVar20 + (longlong)(int)uVar16 * 4;
              iVar12 = FUN_142954a82(&local_3b0,puVar25);
              puVar18 = puVar20 + (longlong)(int)uVar13 * 4;
              iVar14 = FUN_142954a82(&local_3b0,puVar18);
              if (iVar14 <= iVar12) break;
              local_58 = *(undefined8 *)puVar25;
              uStack_50 = *(undefined8 *)(puVar25 + 2);
              uVar8 = local_58;
              uVar9 = uStack_50;
              uVar7 = *(undefined8 *)(puVar18 + 2);
              *(undefined8 *)puVar25 = *(undefined8 *)puVar18;
              *(undefined8 *)(puVar25 + 2) = uVar7;
              local_58._4_4_ = (uint)((ulonglong)local_58 >> 0x20);
              uStack_50._4_4_ = (uint)((ulonglong)uStack_50 >> 0x20);
              *puVar18 = (uint)local_58;
              puVar18[1] = local_58._4_4_;
              puVar18[2] = (uint)uStack_50;
              puVar18[3] = uStack_50._4_4_;
              uVar16 = (ulonglong)uVar13;
              local_58 = uVar8;
              uStack_50 = uVar9;
            }
            uVar13 = (int)local_3d8 - 1;
          } while ((int)local_3d8 != 0);
          ppuVar24 = local_3e0;
          if (1 < iVar11) {
            uVar21 = uVar21 - 1;
            local_58 = *(undefined8 *)puVar20;
            uStack_50 = *(undefined8 *)(puVar20 + 2);
            uVar8 = local_58;
            uVar9 = uStack_50;
            uVar7 = *(undefined8 *)(puVar20 + uVar21 * 4 + 2);
            *(undefined8 *)puVar20 = *(undefined8 *)(puVar20 + uVar21 * 4);
            *(undefined8 *)(puVar20 + 2) = uVar7;
            local_58._4_4_ = (uint)((ulonglong)local_58 >> 0x20);
            uStack_50._4_4_ = (uint)((ulonglong)uStack_50 >> 0x20);
            puVar18 = puVar20 + uVar21 * 4;
            *puVar18 = (uint)local_58;
            puVar18[1] = local_58._4_4_;
            puVar18[2] = (uint)uStack_50;
            puVar18[3] = uStack_50._4_4_;
            local_58 = uVar8;
            uStack_50 = uVar9;
            if (iVar11 != 2) {
              do {
                iVar11 = 0;
                iVar14 = 1;
                iVar12 = 0;
                do {
                  iVar11 = iVar11 + 2;
                  iVar27 = iVar14;
                  if ((longlong)iVar11 < (longlong)uVar21) {
                    iVar15 = FUN_142954a82(&local_3b8,puVar20 + (longlong)iVar11 * 4);
                    iVar14 = FUN_142954a82(&local_3b8,puVar20 + (longlong)iVar14 * 4);
                    if (iVar14 <= iVar15) {
                      iVar27 = iVar11;
                    }
                  }
                  puVar25 = puVar20 + (longlong)iVar12 * 4;
                  iVar11 = FUN_142954a82(&local_3b8,puVar25);
                  puVar18 = puVar20 + (longlong)iVar27 * 4;
                  iVar12 = FUN_142954a82(&local_3b8,puVar18);
                  if (iVar12 <= iVar11) break;
                  uVar7 = *(undefined8 *)puVar25;
                  uVar8 = *(undefined8 *)(puVar25 + 2);
                  uVar9 = *(undefined8 *)(puVar18 + 2);
                  *(undefined8 *)puVar25 = *(undefined8 *)puVar18;
                  *(undefined8 *)(puVar25 + 2) = uVar9;
                  local_58._0_4_ = (uint)uVar7;
                  local_58._4_4_ = (uint)((ulonglong)uVar7 >> 0x20);
                  uStack_50._0_4_ = (uint)uVar8;
                  uStack_50._4_4_ = (uint)((ulonglong)uVar8 >> 0x20);
                  *puVar18 = (uint)local_58;
                  puVar18[1] = local_58._4_4_;
                  puVar18[2] = (uint)uStack_50;
                  puVar18[3] = uStack_50._4_4_;
                  iVar11 = iVar27 * 2;
                  iVar14 = iVar27 * 2 + 1;
                  local_58 = uVar7;
                  uStack_50 = uVar8;
                  iVar12 = iVar27;
                } while ((longlong)iVar14 < (longlong)uVar21);
                uVar16 = uVar21 - 1;
                local_58 = *(undefined8 *)puVar20;
                uStack_50 = *(undefined8 *)(puVar20 + 2);
                uVar8 = local_58;
                uVar9 = uStack_50;
                uVar7 = *(undefined8 *)(puVar20 + uVar16 * 4 + 2);
                *(undefined8 *)puVar20 = *(undefined8 *)(puVar20 + uVar16 * 4);
                *(undefined8 *)(puVar20 + 2) = uVar7;
                local_58._4_4_ = (uint)((ulonglong)local_58 >> 0x20);
                uStack_50._4_4_ = (uint)((ulonglong)uStack_50 >> 0x20);
                puVar18 = puVar20 + uVar16 * 4;
                *puVar18 = (uint)local_58;
                puVar18[1] = local_58._4_4_;
                puVar18[2] = (uint)uStack_50;
                puVar18[3] = uStack_50._4_4_;
                bVar6 = 2 < uVar21;
                uVar21 = uVar16;
                ppuVar24 = local_3e0;
                local_58 = uVar8;
                uStack_50 = uVar9;
              } while (bVar6);
            }
          }
        }
LAB_146b72727:
        ppuVar24 = ppuVar24 + -3;
      } while (&local_358 <= ppuVar24);
    }
  }
  else if ((char)local_3c8 == '\x01') {
    uVar13 = local_3d0[2];
    puVar18 = *(uint **)local_3d0;
    local_3c0 = &local_3a8;
    if (1 < (longlong)(int)uVar13) {
      memset(local_348,0,0x2f0);
      local_350 = (undefined8 **)(puVar18 + (longlong)(int)uVar13 * 4 + -4);
      local_358 = puVar18;
      fVar29 = logf((float)(int)uVar13);
      local_348[0] = (int)(longlong)(fVar29 + fVar29);
      ppuVar24 = &local_358;
      do {
        puVar20 = *ppuVar24;
        puVar18 = ppuVar24[1];
        iVar11 = *(int *)(ppuVar24 + 2);
        iVar12 = (int)((ulonglong)((longlong)puVar18 - (longlong)puVar20) >> 4);
        uVar21 = (ulonglong)(iVar12 + 1);
        puVar25 = puVar18;
        puVar28 = puVar20;
        local_3e0 = ppuVar24;
        if (iVar11 != 0) {
LAB_146b71d91:
          ppuVar24 = local_3e0;
          if (8 < (int)(uint)uVar21) {
            local_3d8 = CONCAT44(local_3d8._4_4_,iVar11);
            uVar21 = (ulonglong)((uint)uVar21 >> 1);
            uVar7 = *(undefined8 *)(puVar20 + uVar21 * 4);
            uVar8 = *(undefined8 *)(puVar20 + uVar21 * 4 + 2);
            uVar9 = *(undefined8 *)(puVar20 + 2);
            *(undefined8 *)(puVar20 + uVar21 * 4) = *(undefined8 *)puVar20;
            *(undefined8 *)(puVar20 + uVar21 * 4 + 2) = uVar9;
            local_58._0_4_ = (uint)uVar7;
            local_58._4_4_ = (uint)((ulonglong)uVar7 >> 0x20);
            uStack_50._0_4_ = (uint)uVar8;
            uStack_50._4_4_ = (uint)((ulonglong)uVar8 >> 0x20);
            *puVar20 = (uint)local_58;
            puVar20[1] = local_58._4_4_;
            puVar20[2] = (uint)uStack_50;
            puVar20[3] = uStack_50._4_4_;
            puVar23 = puVar18 + 4;
            puVar26 = puVar20;
            local_3d0 = puVar25;
            local_3c8 = puVar28;
            local_58 = uVar7;
            uStack_50 = uVar8;
            do {
              puVar25 = puVar26 + 4;
              puVar10 = puVar26 + 4;
              do {
                puVar26 = puVar10;
                puVar28 = puVar25;
                if (puVar18 < puVar26) break;
                iVar11 = FUN_142954acc(&local_3c0,puVar26);
                iVar12 = FUN_142954acc(&local_3c0,puVar20);
                puVar25 = puVar28 + 4;
                puVar10 = puVar26 + 4;
              } while (iVar12 <= iVar11);
              puVar10 = puVar23 + -8;
              do {
                puVar22 = puVar23;
                puVar25 = puVar10;
                puVar23 = puVar22 + -4;
                if (puVar23 <= puVar20) break;
                iVar11 = FUN_142954acc(&local_3c0,puVar20);
                iVar12 = FUN_142954acc(&local_3c0,puVar23);
                puVar10 = puVar25 + -4;
              } while (iVar12 <= iVar11);
              if (puVar23 < puVar26) goto LAB_146b71e78;
              uVar7 = *(undefined8 *)puVar26;
              uVar8 = *(undefined8 *)(puVar26 + 2);
              uVar9 = *(undefined8 *)(puVar22 + -2);
              *(undefined8 *)puVar26 = *(undefined8 *)puVar23;
              *(undefined8 *)(puVar26 + 2) = uVar9;
              local_58._0_4_ = (uint)uVar7;
              local_58._4_4_ = (uint)((ulonglong)uVar7 >> 0x20);
              uStack_50._0_4_ = (uint)uVar8;
              uStack_50._4_4_ = (uint)((ulonglong)uVar8 >> 0x20);
              *puVar23 = (uint)local_58;
              puVar22[-3] = local_58._4_4_;
              puVar22[-2] = (uint)uStack_50;
              puVar22[-1] = uStack_50._4_4_;
              local_58 = uVar7;
              uStack_50 = uVar8;
            } while( true );
          }
          for (; puVar28 = puVar20, puVar25 = puVar20, puVar20 < puVar18; puVar18 = puVar18 + -4) {
            while (puVar23 = puVar28, puVar25 = puVar25 + 4, puVar25 <= puVar18) {
              iVar11 = FUN_142954acc(&local_3c0,puVar25);
              iVar12 = FUN_142954acc(&local_3c0,puVar23);
              puVar28 = puVar25;
              if (iVar12 <= iVar11) {
                puVar28 = puVar23;
              }
            }
            local_58 = *(undefined8 *)puVar23;
            uStack_50 = *(undefined8 *)(puVar23 + 2);
            uVar8 = local_58;
            uVar9 = uStack_50;
            uVar7 = *(undefined8 *)(puVar18 + 2);
            *(undefined8 *)puVar23 = *(undefined8 *)puVar18;
            *(undefined8 *)(puVar23 + 2) = uVar7;
            local_58._4_4_ = (uint)((ulonglong)local_58 >> 0x20);
            uStack_50._4_4_ = (uint)((ulonglong)uStack_50 >> 0x20);
            *puVar18 = (uint)local_58;
            puVar18[1] = local_58._4_4_;
            puVar18[2] = (uint)uStack_50;
            puVar18[3] = uStack_50._4_4_;
            local_58 = uVar8;
            uStack_50 = uVar9;
          }
          goto LAB_146b721ff;
        }
LAB_146b71f41:
        local_3b8 = local_3c0;
        iVar11 = (int)uVar21;
        ppuVar24 = local_3e0;
        if (iVar11 != 0) {
          local_3b0 = local_3c0;
          uVar13 = (iVar12 - (iVar12 + -1 >> 0x1f)) + -1 >> 1;
          do {
            uVar16 = (ulonglong)uVar13;
            local_3d8 = uVar16;
            while (uVar3 = uVar13 * 2 + 1, (int)uVar3 < iVar11) {
              uVar19 = uVar13 * 2 + 2;
              uVar13 = uVar3;
              if ((int)uVar19 < iVar11) {
                iVar12 = FUN_142954acc(&local_3b0,puVar20 + (longlong)(int)uVar19 * 4);
                iVar14 = FUN_142954acc(&local_3b0,puVar20 + (longlong)(int)uVar3 * 4);
                if (iVar12 <= iVar14) {
                  uVar13 = uVar19;
                }
              }
              puVar25 = puVar20 + (longlong)(int)uVar16 * 4;
              iVar12 = FUN_142954acc(&local_3b0,puVar25);
              puVar18 = puVar20 + (longlong)(int)uVar13 * 4;
              iVar14 = FUN_142954acc(&local_3b0,puVar18);
              if (iVar12 <= iVar14) break;
              local_58 = *(undefined8 *)puVar25;
              uStack_50 = *(undefined8 *)(puVar25 + 2);
              uVar8 = local_58;
              uVar9 = uStack_50;
              uVar7 = *(undefined8 *)(puVar18 + 2);
              *(undefined8 *)puVar25 = *(undefined8 *)puVar18;
              *(undefined8 *)(puVar25 + 2) = uVar7;
              local_58._4_4_ = (uint)((ulonglong)local_58 >> 0x20);
              uStack_50._4_4_ = (uint)((ulonglong)uStack_50 >> 0x20);
              *puVar18 = (uint)local_58;
              puVar18[1] = local_58._4_4_;
              puVar18[2] = (uint)uStack_50;
              puVar18[3] = uStack_50._4_4_;
              uVar16 = (ulonglong)uVar13;
              local_58 = uVar8;
              uStack_50 = uVar9;
            }
            uVar13 = (int)local_3d8 - 1;
          } while ((int)local_3d8 != 0);
          ppuVar24 = local_3e0;
          if (1 < iVar11) {
            uVar21 = uVar21 - 1;
            local_58 = *(undefined8 *)puVar20;
            uStack_50 = *(undefined8 *)(puVar20 + 2);
            uVar8 = local_58;
            uVar9 = uStack_50;
            uVar7 = *(undefined8 *)(puVar20 + uVar21 * 4 + 2);
            *(undefined8 *)puVar20 = *(undefined8 *)(puVar20 + uVar21 * 4);
            *(undefined8 *)(puVar20 + 2) = uVar7;
            local_58._4_4_ = (uint)((ulonglong)local_58 >> 0x20);
            uStack_50._4_4_ = (uint)((ulonglong)uStack_50 >> 0x20);
            puVar18 = puVar20 + uVar21 * 4;
            *puVar18 = (uint)local_58;
            puVar18[1] = local_58._4_4_;
            puVar18[2] = (uint)uStack_50;
            puVar18[3] = uStack_50._4_4_;
            local_58 = uVar8;
            uStack_50 = uVar9;
            if (iVar11 != 2) {
              do {
                iVar11 = 0;
                iVar14 = 1;
                iVar12 = 0;
                do {
                  iVar11 = iVar11 + 2;
                  iVar27 = iVar14;
                  if ((longlong)iVar11 < (longlong)uVar21) {
                    iVar15 = FUN_142954acc(&local_3b8,puVar20 + (longlong)iVar11 * 4);
                    iVar14 = FUN_142954acc(&local_3b8,puVar20 + (longlong)iVar14 * 4);
                    if (iVar15 <= iVar14) {
                      iVar27 = iVar11;
                    }
                  }
                  puVar25 = puVar20 + (longlong)iVar12 * 4;
                  iVar11 = FUN_142954acc(&local_3b8,puVar25);
                  puVar18 = puVar20 + (longlong)iVar27 * 4;
                  iVar12 = FUN_142954acc(&local_3b8,puVar18);
                  if (iVar11 <= iVar12) break;
                  uVar7 = *(undefined8 *)puVar25;
                  uVar8 = *(undefined8 *)(puVar25 + 2);
                  uVar9 = *(undefined8 *)(puVar18 + 2);
                  *(undefined8 *)puVar25 = *(undefined8 *)puVar18;
                  *(undefined8 *)(puVar25 + 2) = uVar9;
                  local_58._0_4_ = (uint)uVar7;
                  local_58._4_4_ = (uint)((ulonglong)uVar7 >> 0x20);
                  uStack_50._0_4_ = (uint)uVar8;
                  uStack_50._4_4_ = (uint)((ulonglong)uVar8 >> 0x20);
                  *puVar18 = (uint)local_58;
                  puVar18[1] = local_58._4_4_;
                  puVar18[2] = (uint)uStack_50;
                  puVar18[3] = uStack_50._4_4_;
                  iVar11 = iVar27 * 2;
                  iVar14 = iVar27 * 2 + 1;
                  local_58 = uVar7;
                  uStack_50 = uVar8;
                  iVar12 = iVar27;
                } while ((longlong)iVar14 < (longlong)uVar21);
                uVar16 = uVar21 - 1;
                local_58 = *(undefined8 *)puVar20;
                uStack_50 = *(undefined8 *)(puVar20 + 2);
                uVar8 = local_58;
                uVar9 = uStack_50;
                uVar7 = *(undefined8 *)(puVar20 + uVar16 * 4 + 2);
                *(undefined8 *)puVar20 = *(undefined8 *)(puVar20 + uVar16 * 4);
                *(undefined8 *)(puVar20 + 2) = uVar7;
                local_58._4_4_ = (uint)((ulonglong)local_58 >> 0x20);
                uStack_50._4_4_ = (uint)((ulonglong)uStack_50 >> 0x20);
                puVar18 = puVar20 + uVar16 * 4;
                *puVar18 = (uint)local_58;
                puVar18[1] = local_58._4_4_;
                puVar18[2] = (uint)uStack_50;
                puVar18[3] = uStack_50._4_4_;
                bVar6 = 2 < uVar21;
                uVar21 = uVar16;
                ppuVar24 = local_3e0;
                local_58 = uVar8;
                uStack_50 = uVar9;
              } while (bVar6);
            }
          }
        }
LAB_146b721ff:
        ppuVar24 = ppuVar24 + -3;
      } while (&local_358 <= ppuVar24);
    }
  }
  local_360 = 0;
  if (local_368 != 0) {
    FUN_1400020a8();
  }
  FUN_140096ee6(&local_3a8);
  if ((local_48 ^ (ulonglong)auStack_408) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_146b723a0:
  local_58 = *(undefined8 *)puVar20;
  uStack_50 = *(undefined8 *)(puVar20 + 2);
  uVar8 = local_58;
  uVar9 = uStack_50;
  uVar7 = *(undefined8 *)(puVar22 + -2);
  *(undefined8 *)puVar20 = *(undefined8 *)puVar23;
  *(undefined8 *)(puVar20 + 2) = uVar7;
  local_58._4_4_ = (uint)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (uint)((ulonglong)uStack_50 >> 0x20);
  *puVar23 = (uint)local_58;
  puVar22[-3] = local_58._4_4_;
  puVar22[-2] = (uint)uStack_50;
  puVar22[-1] = uStack_50._4_4_;
  iVar11 = (int)local_3d8 + -1;
  puVar22 = puVar22 + -8;
  local_58 = uVar8;
  uStack_50 = uVar9;
  if ((longlong)puVar25 - (longlong)local_3c8 < (longlong)local_3d0 - (longlong)puVar28) {
    if (puVar26 < puVar18) {
      *local_3e0 = puVar26;
      local_3e0[1] = puVar18;
      *(int *)(local_3e0 + 2) = iVar11;
      local_3e0 = local_3e0 + 3;
    }
    ppuVar24 = local_3e0;
    puVar28 = puVar20;
    if (puVar23 <= puVar20 + 4) goto LAB_146b72727;
  }
  else {
    ppuVar24 = local_3e0;
    if (puVar20 + 4 < puVar23) {
      *local_3e0 = puVar20;
      local_3e0[1] = puVar22;
      *(int *)(local_3e0 + 2) = iVar11;
      ppuVar24 = local_3e0 + 3;
    }
    puVar20 = puVar26;
    puVar22 = puVar18;
    puVar25 = puVar18;
    if (puVar18 <= puVar26) goto LAB_146b72727;
  }
  local_3e0 = ppuVar24;
  iVar12 = (int)((ulonglong)((longlong)puVar25 - (longlong)puVar28) >> 4);
  uVar21 = (ulonglong)(iVar12 + 1);
  puVar18 = puVar22;
  if (iVar11 == 0) goto LAB_146b72469;
  goto LAB_146b722b9;
LAB_146b71e78:
  local_58 = *(undefined8 *)puVar20;
  uStack_50 = *(undefined8 *)(puVar20 + 2);
  uVar8 = local_58;
  uVar9 = uStack_50;
  uVar7 = *(undefined8 *)(puVar22 + -2);
  *(undefined8 *)puVar20 = *(undefined8 *)puVar23;
  *(undefined8 *)(puVar20 + 2) = uVar7;
  local_58._4_4_ = (uint)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (uint)((ulonglong)uStack_50 >> 0x20);
  *puVar23 = (uint)local_58;
  puVar22[-3] = local_58._4_4_;
  puVar22[-2] = (uint)uStack_50;
  puVar22[-1] = uStack_50._4_4_;
  iVar11 = (int)local_3d8 + -1;
  puVar22 = puVar22 + -8;
  local_58 = uVar8;
  uStack_50 = uVar9;
  if ((longlong)puVar25 - (longlong)local_3c8 < (longlong)local_3d0 - (longlong)puVar28) {
    if (puVar26 < puVar18) {
      *local_3e0 = puVar26;
      local_3e0[1] = puVar18;
      *(int *)(local_3e0 + 2) = iVar11;
      local_3e0 = local_3e0 + 3;
    }
    ppuVar24 = local_3e0;
    puVar28 = puVar20;
    if (puVar23 <= puVar20 + 4) goto LAB_146b721ff;
  }
  else {
    ppuVar24 = local_3e0;
    if (puVar20 + 4 < puVar23) {
      *local_3e0 = puVar20;
      local_3e0[1] = puVar22;
      *(int *)(local_3e0 + 2) = iVar11;
      ppuVar24 = local_3e0 + 3;
    }
    puVar20 = puVar26;
    puVar22 = puVar18;
    puVar25 = puVar18;
    if (puVar18 <= puVar26) goto LAB_146b721ff;
  }
  local_3e0 = ppuVar24;
  iVar12 = (int)((ulonglong)((longlong)puVar25 - (longlong)puVar28) >> 4);
  uVar21 = (ulonglong)(iVar12 + 1);
  puVar18 = puVar22;
  if (iVar11 == 0) goto LAB_146b71f41;
  goto LAB_146b71d91;
}



// FUNCTION 146b72792 FUN_146b72792 body=416 status=ok
// SIG undefined FUN_146b72792(void)

longlong * FUN_146b72792(longlong param_1,longlong *param_2,int param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 *puVar12;
  undefined1 auStack_d8 [40];
  undefined8 *local_b0;
  longlong *local_a8;
  undefined1 local_9c [4];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar7 = *(int *)(param_1 + 8);
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  local_b0 = param_4;
  if ((0 < param_3) && (iVar7 < *(int *)(param_1 + 0x18))) {
    lVar10 = (longlong)iVar7;
    local_a8 = param_4 + 4;
    lVar11 = lVar10 << 4;
    do {
      lVar10 = lVar10 + 1;
      puVar12 = (undefined4 *)(*(longlong *)(param_1 + 0x10) + lVar11);
      uVar6 = FUN_1447addd0(puVar12,0x10);
      iVar7 = FUN_140f5cb3a(&local_98,uVar6,puVar12);
      if (iVar7 == -1) {
        pcVar2 = (code *)*local_b0;
        plVar9 = (longlong *)local_b0[2];
        if ((longlong *)local_b0[2] == (longlong *)0x0) {
          plVar9 = local_a8;
        }
        uVar8 = (**(code **)(*plVar9 + 8))();
        cVar5 = (*pcVar2)(uVar8,puVar12);
        if (cVar5 != '\0') {
          FUN_1457adc9c(&local_98,local_9c,puVar12,0);
          iVar7 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar7 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar7 + 1U) {
            FUN_140c60952(param_2,iVar7);
          }
          uVar6 = puVar12[1];
          uVar3 = puVar12[2];
          uVar4 = puVar12[3];
          puVar1 = (undefined4 *)(*param_2 + (longlong)iVar7 * 0x10);
          *puVar1 = *puVar12;
          puVar1[1] = uVar6;
          puVar1[2] = uVar3;
          puVar1[3] = uVar4;
        }
      }
    } while ((lVar10 < *(int *)(param_1 + 0x18)) &&
            (lVar11 = lVar11 + 0x10, (int)param_2[1] < param_3));
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_140149fc2(&local_98);
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146b7293e FUN_146b7293e body=23 status=ok
// SIG undefined FUN_146b7293e(void)

undefined8 FUN_146b7293e(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x20))();
  return param_2;
}



// FUNCTION 146b729ae FUN_146b729ae body=77 status=ok
// SIG undefined FUN_146b729ae(void)

LONGLONG FUN_146b729ae(longlong *param_1)

{
  LONGLONG LVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *param_1;
  QueryPerformanceCounter(&local_20);
  LOCK();
  LVar1 = ((LARGE_INTEGER *)(lVar2 + 0x168))->QuadPart;
  *(LARGE_INTEGER *)(lVar2 + 0x168) = local_20;
  UNLOCK();
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return LVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b72a04 FUN_146b72a04 body=127 status=ok
// SIG undefined FUN_146b72a04(void)

void FUN_146b72a04(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 *local_40;
  undefined8 local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_44 = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x178));
  local_40 = &local_44;
  local_38 = param_3;
  FUN_146b871b8(param_1 + 0x1a0,local_2c);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x178));
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b72a84 FUN_146b72a84 body=928 status=ok
// SIG undefined FUN_146b72a84(void)

undefined8 *
FUN_146b72a84(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             longlong param_13)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong *local_c0;
  undefined1 *local_b8;
  undefined8 local_a8;
  undefined **local_98;
  undefined8 *local_90;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *param_1 = &PTR_FUN_149f32450;
  param_1[1] = &PTR_FUN_149f32490;
  puVar3 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar3 = param_1;
  param_1[2] = puVar3;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_149f33e20;
  puVar4[2] = puVar3;
  param_1[3] = puVar4;
  FUN_146b6f87a(param_1 + 4,param_2);
  param_1[0x10] = param_3;
  param_1[0x11] = param_4;
  param_1[0x12] = param_5;
  param_1[0x13] = param_6;
  param_1[0x14] = param_7;
  param_1[0x15] = param_8;
  param_1[0x16] = param_9;
  param_1[0x17] = param_11;
  param_1[0x18] = param_12;
  FUN_1409e67a4(param_1 + 0x19,param_13);
  FUN_145d28d24(param_1 + 0x23);
  *(undefined1 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  FUN_146b72e26(param_1 + 0x29,param_1 + 2);
  FUN_146b72f04(param_1 + 0x2b,param_1 + 2);
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x2f),4000);
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0x80;
  *(undefined4 *)(param_1 + 0x3a) = 0xffffffff;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3e));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x3e),4000);
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  puVar3 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  *puVar3 = 0;
  puVar3[5] = 0;
  *(undefined4 *)(puVar3 + 6) = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *(undefined8 *)((longlong)puVar3 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = 0;
  puVar3[9] = 0;
  *(undefined4 *)(puVar3 + 10) = 0;
  param_1[0x47] = puVar3;
  param_1[0x46] = puVar3;
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  param_1[0x49] = puVar3;
  param_1[0x48] = puVar3;
  param_1[0x4a] = param_10;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  FUN_144a8c360(param_1 + 0x4c,*(undefined4 *)(param_1 + 5),1);
  *(undefined1 *)(param_1 + 0x25) = 1;
  local_c8 = param_1[0x23];
  local_c0 = (longlong *)param_1[0x24];
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
    UNLOCK();
  }
  FUN_14614a64a(param_1 + 0x26,&local_c8);
  plVar5 = local_c0;
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_c0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (*(char *)(param_1 + 0xf) == '\x01') {
    plVar5 = (longlong *)(**(code **)(*(longlong *)param_1[0xe] + 8))();
    param_1[0x28] = plVar5;
    local_a8 = 0;
    local_98 = &PTR_LAB_149f33f90;
    local_b8 = &LAB_142954b16;
    local_90 = param_1;
    (**(code **)(*plVar5 + 8))(plVar5);
  }
  FUN_146b35076(param_2);
  *(undefined4 *)(param_13 + 0x48) = 0;
  if (*(longlong *)(param_13 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(param_13);
  if ((local_70 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b72e26 FUN_146b72e26 body=222 status=ok
// SIG undefined FUN_146b72e26(void)

longlong * FUN_146b72e26(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  uVar4 = *param_2;
  plVar5 = (longlong *)param_2[1];
  if (plVar5 == (longlong *)0x0) {
    *puVar3 = &PTR_LAB_149f33eb0;
    uVar6 = FUN_144a3f946();
    puVar3[2] = uVar6;
    *puVar3 = &PTR_FUN_149f33e40;
    puVar3[3] = uVar4;
    puVar3[4] = 0;
    puVar3[5] = FUN_146b729ae;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_149f33eb0;
    uVar6 = FUN_144a3f946();
    puVar3[2] = uVar6;
    *puVar3 = &PTR_FUN_149f33e40;
    puVar3[3] = uVar4;
    puVar3[4] = plVar5;
    LOCK();
    *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_146b729ae;
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
  return param_1;
}



// FUNCTION 146b72f04 FUN_146b72f04 body=222 status=ok
// SIG undefined FUN_146b72f04(void)

longlong * FUN_146b72f04(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  uVar4 = *param_2;
  plVar5 = (longlong *)param_2[1];
  if (plVar5 == (longlong *)0x0) {
    *puVar3 = &PTR_LAB_149f34060;
    uVar6 = FUN_144a3f946();
    puVar3[2] = uVar6;
    *puVar3 = &PTR_FUN_149f33f20;
    puVar3[3] = uVar4;
    puVar3[4] = 0;
    puVar3[5] = &LAB_146b729fc;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_149f34060;
    uVar6 = FUN_144a3f946();
    puVar3[2] = uVar6;
    *puVar3 = &PTR_FUN_149f33f20;
    puVar3[3] = uVar4;
    puVar3[4] = plVar5;
    LOCK();
    *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = &LAB_146b729fc;
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
  return param_1;
}



// FUNCTION 146b72fe2 FUN_146b72fe2 body=478 status=ok
// SIG undefined FUN_146b72fe2(void)

void FUN_146b72fe2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  
  *param_1 = &PTR_FUN_149f32450;
  param_1[1] = &PTR_FUN_149f32490;
  LOCK();
  *(undefined4 *)((longlong)param_1 + 0x174) = 1;
  UNLOCK();
  lVar4 = param_1[0x26];
  if (param_1[0x26] != 0) {
    while( true ) {
      do {
        lVar6 = lVar4;
        lVar4 = 0;
      } while (lVar6 == 0);
      plVar3 = *(longlong **)(lVar6 + 0x70);
      cVar5 = (**(code **)(*plVar3 + 0x20))(plVar3,0xffffffff,0);
      if (cVar5 != '\0') break;
      lVar4 = param_1[0x26];
    }
  }
  if (param_1[0x28] != 0) {
    (**(code **)(*(longlong *)param_1[0xe] + 0x10))();
    param_1[0x28] = 0;
  }
  if (param_1[0x4c] != 0) goto LAB_146b7307c;
  while ((undefined8 *)param_1[0x49] != (undefined8 *)0x0) {
    param_1[0x49] = *(undefined8 *)param_1[0x49];
LAB_146b7307c:
    FUN_1400020a8();
  }
  FUN_146b731c0(param_1 + 0x46);
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3e));
  *(undefined4 *)(param_1 + 0x3d) = 0;
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  FUN_146b7b30c(param_1 + 0x34);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f));
  FUN_1449db362(param_1 + 0x2b);
  FUN_1449db362(param_1 + 0x29);
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
  plVar3 = (longlong *)param_1[0x24];
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
  *(undefined4 *)(param_1 + 0x22) = 0;
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(param_1 + 0x19);
  FUN_146b35076(param_1 + 4);
  plVar3 = (longlong *)param_1[3];
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
                    /* WARNING: Could not recover jumptable at 0x000146b731b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146b731c0 FUN_146b731c0 body=79 status=ok
// SIG undefined FUN_146b731c0(void)

void FUN_146b731c0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  while (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 8) = *puVar1;
    *(undefined4 *)(puVar1 + 10) = 0;
    if (puVar1[9] != 0) {
      FUN_1400020a8();
    }
    FUN_140149fc2(puVar1 + 1);
    FUN_1400020a8(puVar1);
    puVar1 = *(undefined8 **)(param_1 + 8);
  }
  return;
}



// FUNCTION 146b73226 FUN_146b73226 body=140 status=ok
// SIG undefined FUN_146b73226(void)

longlong FUN_146b73226(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x10))();
  if (lVar1 == 0) {
    FUN_146b732b2(param_1,param_2);
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x10))
                      (*(longlong **)(param_1 + 0x88),param_2);
    while (lVar1 == 0) {
      if (*(int *)(param_1 + 0x174) != 0) {
        return 0;
      }
      (**(code **)(**(longlong **)(param_1 + 0x80) + 0x10))
                (*(longlong **)(param_1 + 0x80),0x3c23d70a);
      lVar1 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x10))
                        (*(longlong **)(param_1 + 0x88),param_2);
    }
  }
  return lVar1;
}



// FUNCTION 146b732b2 FUN_146b732b2 body=111 status=ok
// SIG undefined FUN_146b732b2(void)

void FUN_146b732b2(longlong param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f0));
  iVar2 = *(int *)(param_1 + 0x220);
  *(uint *)(param_1 + 0x220) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x224) < iVar2 + 1U) {
    FUN_140c60952((longlong *)(param_1 + 0x218),iVar2);
  }
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x218) + (longlong)iVar2 * 0x10);
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x000146b7331a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f0));
  return;
}



// FUNCTION 146b73322 FUN_146b73322 body=166 status=ok
// SIG undefined FUN_146b73322(void)

undefined8 * FUN_146b73322(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x58))(*(longlong **)(param_1 + 0xb8),param_3);
  puVar2 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  *puVar2 = 0;
  FUN_1409e67a4(puVar2 + 1,param_3);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = *(undefined8 **)(param_1 + 0x230);
    *(undefined8 **)(param_1 + 0x230) = puVar2;
    UNLOCK();
    LOCK();
    *puVar1 = puVar2;
    UNLOCK();
  }
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  *(undefined4 *)(param_3 + 0x48) = 0;
  if (*(longlong *)(param_3 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(param_3);
  return param_2;
}



// FUNCTION 146b733c8 FUN_146b733c8 body=68 status=ok
// SIG undefined FUN_146b733c8(void)

undefined8 FUN_146b733c8(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar2 = 0;
  uVar3 = param_2[1];
  puVar2[1] = *param_2;
  puVar2[2] = uVar3;
  uVar3 = 0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = *(undefined8 **)(param_1 + 0x240);
    *(undefined8 **)(param_1 + 0x240) = puVar2;
    UNLOCK();
    LOCK();
    uVar3 = *puVar1;
    *puVar1 = puVar2;
    UNLOCK();
  }
  return CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
}



// FUNCTION 146b7342c FUN_146b7342c body=1274 status=ok
// SIG undefined FUN_146b7342c(void)

int * FUN_146b7342c(longlong param_1,int *param_2,longlong *param_3,longlong param_4,
                   undefined8 param_5,longlong *param_6,code *param_7,undefined8 param_8,
                   code **param_9,undefined4 param_10)

{
  int *piVar1;
  code *pcVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  undefined ***pppuVar15;
  code *pcVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined1 auStack_128 [40];
  longlong local_100;
  code *local_f8;
  undefined8 local_f0;
  undefined ***local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined **local_d8;
  longlong *local_d0;
  code *local_c8;
  undefined8 local_c0;
  LARGE_INTEGER local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(int *)(param_1 + 0x174) != 0) {
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_128);
  }
  if (*(int *)((longlong)param_6 + 0x34) < (int)param_6[1]) {
    local_b0 = (code *)(param_6 + 2);
    local_b8.QuadPart = (LONGLONG)&DAT_100000000;
    local_a8 = (code *)&DAT_ffffffff;
    local_a0 = (undefined ***)((ulonglong)local_a0 & 0xffffffff00000000);
    if ((int)param_6[5] == 0) {
      lVar11 = 0;
    }
    else {
      FUN_1449c0562(&local_b8);
      lVar11 = (longlong)local_a8._4_4_;
    }
    piVar1 = (int *)(*param_6 + lVar11 * 0x18);
    iVar18 = *piVar1;
    iVar10 = piVar1[1];
    iVar17 = piVar1[2];
    iVar19 = piVar1[3];
  }
  else {
    local_100 = param_4;
    QueryPerformanceCounter(&local_b8);
    dVar3 = (((double)CONCAT44(0x43300000,local_b8.s.LowPart) - 4503599627370496.0) +
            ((double)CONCAT44(0x45300000,local_b8.s.HighPart) - 1.9342813113834067e+25)) *
            DAT_14c83f418;
    local_f0 = param_7 + 0x10;
    local_f8 = (code *)&DAT_100000000;
    local_e8 = (undefined ***)&DAT_ffffffff;
    local_e0 = 0;
    if (*(int *)(param_7 + 0x28) != 0) {
      FUN_1449c0562(&local_f8);
    }
    local_a0 = local_e8;
    pppuVar15 = local_a0;
    local_98 = (undefined **)CONCAT44(local_dc,local_e0);
    local_b0 = local_f8;
    local_a8 = local_f0;
    local_b8.QuadPart = (LONGLONG)param_7;
    local_a0._4_4_ = (int)((ulonglong)local_e8 >> 0x20);
    iVar18 = 0;
    iVar10 = 0;
    iVar17 = 0;
    iVar19 = 0;
    if (local_a0._4_4_ < *(int *)(local_f0 + 0x18)) {
      iVar19 = 0;
      iVar17 = 0;
      iVar10 = 0;
      iVar18 = 0;
      iVar8 = local_a0._4_4_;
      local_a0 = pppuVar15;
      do {
        pppuVar15 = local_a0;
        if (((iVar17 != 0 || iVar19 != 0) || iVar10 != 0) || iVar18 != 0) break;
        lVar11 = (longlong)iVar8 * 0x18 + *(longlong *)local_b8;
        uVar7 = FUN_1447addd0(lVar11,0x10);
        iVar8 = FUN_146b85e12(param_3,uVar7,lVar11);
        lVar11 = 0;
        if (iVar8 != -1) {
          lVar11 = (longlong)iVar8 * 0x48 + *param_3;
        }
        uVar13 = *(int *)(param_1 + 0x48) - 1;
        uVar9 = *(int *)(lVar11 + 0x28) - 1;
        if ((int)uVar13 <= (int)uVar9) {
          uVar9 = uVar13;
        }
        uVar12 = (ulonglong)uVar9;
        if ((int)uVar9 < 1) {
          uVar12 = 0;
        }
        if ((double)*(float *)(*(longlong *)(param_1 + 0x40) + uVar12 * 4) <=
            dVar3 - *(double *)(lVar11 + 0x38)) {
          lVar14 = (longlong)local_a0._4_4_;
          lVar11 = *(longlong *)local_b8;
          iVar18 = *(int *)(lVar11 + lVar14 * 0x18);
          iVar10 = *(int *)(lVar11 + 4 + lVar14 * 0x18);
          iVar17 = *(int *)(lVar11 + 8 + lVar14 * 0x18);
          iVar19 = *(int *)(lVar11 + 0xc + lVar14 * 0x18);
        }
        local_a0 = (undefined ***)CONCAT44(local_a0._4_4_,(uint)local_a0 & ~local_b0._4_4_);
        FUN_1449c0562(&local_b0);
        iVar8 = local_a0._4_4_;
        pppuVar15 = local_a0;
      } while (local_a0._4_4_ < *(int *)(local_a8 + 0x18));
    }
    local_a0 = pppuVar15;
    if (((iVar10 != 0 || iVar18 != 0) || iVar17 != 0) || iVar19 != 0) {
      *param_2 = iVar18;
      param_2[1] = iVar10;
      param_2[2] = iVar17;
      param_2[3] = iVar19;
      goto LAB_146b73509;
    }
    iVar17 = *(int *)(local_100 + 8) - *(int *)(local_100 + 0x34);
    iVar18 = *(int *)(param_7 + 8);
    iVar10 = *(int *)(param_7 + 0x34);
    uVar9 = (**(code **)**(undefined8 **)(param_1 + 0x250))
                      (*(undefined8 **)(param_1 + 0x250),iVar17,param_10);
    if ((uint)((iVar18 + iVar17) - iVar10) < uVar9) {
      uVar9 = *(uint *)(param_9 + 1);
      if (uVar9 == 0) {
        local_a8 = (code *)0x0;
        local_98 = &PTR_LAB_149f33fb0;
        local_90 = param_5;
        local_b8.QuadPart = (LONGLONG)FUN_142954b54;
        iVar18 = *(int *)(param_1 + 0x34);
        iVar10 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x20))();
        if (iVar18 <= iVar10) {
          iVar18 = iVar10;
        }
        (**(code **)(**(longlong **)(param_1 + 0x98) + 0x28))
                  (*(longlong **)(param_1 + 0x98),&local_f8,iVar18,&local_b8);
        if (&local_f8 == param_9) {
          if (local_f8 != (code *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*param_9 != (code *)0x0) {
            FUN_1400020a8();
          }
          *param_9 = local_f8;
          *(undefined4 *)(param_9 + 1) = (undefined4)local_f0;
          *(undefined4 *)((longlong)param_9 + 0xc) = local_f0._4_4_;
        }
        local_e8 = (undefined ***)0x0;
        local_d8 = &PTR_LAB_149f33fd0;
        local_c8 = param_7;
        local_c0 = param_8;
        local_f8 = FUN_142954bd0;
        local_d0 = param_3;
        FUN_146b712e6(param_9);
        iVar18 = *(int *)(param_1 + 0x38);
        if (*(int *)(param_9 + 1) < *(int *)(param_1 + 0x38)) {
          iVar18 = *(int *)(param_9 + 1);
        }
        FUN_146b71430(param_9,iVar18);
        uVar9 = *(uint *)(param_9 + 1);
        if (1 < (longlong)(int)uVar9) {
          pcVar16 = *param_9;
          lVar11 = (longlong)(int)uVar9 << 4;
          lVar14 = 0;
          do {
            lVar11 = lVar11 + -0x10;
            local_78 = *(undefined8 *)(pcVar16 + lVar14);
            uStack_70 = *(undefined8 *)(pcVar16 + lVar14 + 8);
            uVar5 = local_78;
            uVar6 = uStack_70;
            uVar4 = *(undefined8 *)(pcVar16 + lVar11 + 8);
            *(undefined8 *)(pcVar16 + lVar14) = *(undefined8 *)(pcVar16 + lVar11);
            *(undefined8 *)(pcVar16 + lVar14 + 8) = uVar4;
            local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
            uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
            pcVar2 = pcVar16 + lVar11;
            *(undefined4 *)pcVar2 = (undefined4)local_78;
            *(undefined4 *)(pcVar2 + 4) = local_78._4_4_;
            *(undefined4 *)(pcVar2 + 8) = (undefined4)uStack_70;
            *(undefined4 *)(pcVar2 + 0xc) = uStack_70._4_4_;
            lVar14 = lVar14 + 0x10;
            local_78 = uVar5;
            uStack_70 = uVar6;
          } while ((ulonglong)(uVar9 >> 1) << 4 != lVar14);
        }
        if (local_f8 != (code *)0x0) {
          pppuVar15 = local_e8;
          if (local_e8 == (undefined ***)0x0) {
            pppuVar15 = &local_d8;
          }
          (*(code *)(*pppuVar15)[2])();
        }
        if ((code *)local_b8.QuadPart != (code *)0x0) {
          pcVar16 = local_a8;
          if (local_a8 == (code *)0x0) {
            pcVar16 = (code *)&local_98;
          }
          (**(code **)(*(longlong *)pcVar16 + 0x10))();
        }
        uVar9 = *(uint *)(param_9 + 1);
      }
      if (0 < (int)uVar9) {
        pcVar16 = *param_9 + (ulonglong)uVar9 * 0x10 + -0x10;
        iVar18 = *(int *)(pcVar16 + 4);
        iVar10 = *(int *)(pcVar16 + 8);
        iVar17 = *(int *)(pcVar16 + 0xc);
        *param_2 = *(int *)pcVar16;
        param_2[1] = iVar18;
        param_2[2] = iVar10;
        param_2[3] = iVar17;
        *(uint *)(param_9 + 1) = uVar9 - 1;
        goto LAB_146b73509;
      }
    }
    iVar18 = 0;
    iVar10 = 0;
    iVar17 = 0;
    iVar19 = 0;
  }
  *param_2 = iVar18;
  param_2[1] = iVar10;
  param_2[2] = iVar17;
  param_2[3] = iVar19;
LAB_146b73509:
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146b73928 FUN_146b73928 body=249 status=ok
// SIG undefined FUN_146b73928(void)

bool FUN_146b73928(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = **(longlong **)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_14681b5ea(param_2,lVar1 + 8);
    lVar2 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar1;
    local_68 = 0;
    local_60 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_5c = 0xffffffff00000080;
    local_54 = 0;
    local_48 = 0;
    local_40 = 0;
    FUN_14681b5ea(lVar1 + 8,&local_88);
    local_40 = 0;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_140149fc2(&local_88);
    if (lVar2 != 0) {
      *(undefined4 *)(lVar2 + 0x50) = 0;
      if (*(longlong *)(lVar2 + 0x48) != 0) {
        FUN_1400020a8();
      }
      FUN_140149fc2(lVar2 + 8);
      FUN_1400020a8(lVar2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b73a22 FUN_146b73a22 body=369 status=ok
// SIG undefined FUN_146b73a22(void)

void FUN_146b73a22(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
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
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  uVar4 = ((int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) + uVar2;
  if (uVar2 < uVar4) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_1462841aa(param_1,uVar4);
    iVar3 = 1;
    if (3 < uVar4) {
      uVar2 = (uVar4 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar3)) {
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_1457adf2c(param_1);
    }
  }
  plVar1 = param_2 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  iVar3 = 0;
  local_48 = plVar1;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_50);
    iVar3 = (int)param_2[5];
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = param_2;
  if ((iStack_3c != iVar3) || (local_48 != plVar1)) {
    do {
      FUN_146b753dc(param_1,&local_50,(longlong)iStack_5c * 0x18 + *local_78);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_2 || (local_68 != plVar1 || iStack_5c != iVar3));
  }
  FUN_1461c8d90(param_2);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b73b96 FUN_146b73b96 body=156 status=ok
// SIG undefined FUN_146b73b96(void)

undefined8 * FUN_146b73b96(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 146b73c32 FUN_146b73c32 body=185 status=ok
// SIG undefined FUN_146b73c32(void)

bool FUN_146b73c32(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  lVar1 = **(longlong **)(param_1 + 8);
  if (lVar1 != 0) {
    uVar3 = *(undefined4 *)(lVar1 + 0xc);
    uVar4 = *(undefined4 *)(lVar1 + 0x10);
    uVar5 = *(undefined4 *)(lVar1 + 0x14);
    *(undefined4 *)param_2 = *(undefined4 *)(lVar1 + 8);
    *(undefined4 *)((longlong)param_2 + 4) = uVar3;
    *(undefined4 *)(param_2 + 1) = uVar4;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar5;
    if ((undefined8 *)(lVar1 + 8) != param_2) {
      if (param_2[2] != 0) {
        FUN_1400020a8();
      }
      param_2[2] = *(undefined8 *)(lVar1 + 0x18);
      *(undefined8 *)(lVar1 + 0x18) = 0;
      *(undefined4 *)(param_2 + 3) = *(undefined4 *)(lVar1 + 0x20);
      *(undefined4 *)((longlong)param_2 + 0x1c) = *(undefined4 *)(lVar1 + 0x24);
      *(undefined8 *)(lVar1 + 0x20) = 0;
    }
    lVar2 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar1;
    *(undefined8 *)(lVar1 + 8) = 0;
    *(undefined8 *)(lVar1 + 0x10) = 0;
    if (*(longlong *)(lVar1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    if (lVar2 != 0) {
      if (*(longlong *)(lVar2 + 0x18) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(lVar2);
    }
  }
  return lVar1 != 0;
}



// FUNCTION 146b73cec FUN_146b73cec body=38 status=ok
// SIG undefined FUN_146b73cec(void)

undefined8 FUN_146b73cec(undefined8 param_1,int param_2)

{
  FUN_146b60802();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b73d12 FUN_146b73d12 body=38 status=ok
// SIG undefined FUN_146b73d12(void)

undefined8 FUN_146b73d12(undefined8 param_1,int param_2)

{
  FUN_146b61d08();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b73d38 FUN_146b73d38 body=38 status=ok
// SIG undefined FUN_146b73d38(void)

undefined8 FUN_146b73d38(undefined8 param_1,int param_2)

{
  FUN_146b62584();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b73d5e FUN_146b73d5e body=38 status=ok
// SIG undefined FUN_146b73d5e(void)

undefined8 FUN_146b73d5e(undefined8 param_1,int param_2)

{
  FUN_146b6310e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b73d84 FUN_146b73d84 body=38 status=ok
// SIG undefined FUN_146b73d84(void)

undefined8 FUN_146b73d84(undefined8 param_1,int param_2)

{
  FUN_146b64bee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b73daa FUN_146b73daa body=38 status=ok
// SIG undefined FUN_146b73daa(void)

undefined8 FUN_146b73daa(undefined8 param_1,int param_2)

{
  FUN_146b66610();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b73dd0 FUN_146b73dd0 body=38 status=ok
// SIG undefined FUN_146b73dd0(void)

undefined8 FUN_146b73dd0(undefined8 param_1,int param_2)

{
  FUN_146b67702();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b73df6 FUN_146b73df6 body=38 status=ok
// SIG undefined FUN_146b73df6(void)

undefined8 FUN_146b73df6(undefined8 param_1,int param_2)

{
  FUN_146b68614();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b73e1c FUN_146b73e1c body=38 status=ok
// SIG undefined FUN_146b73e1c(void)

undefined8 FUN_146b73e1c(undefined8 param_1,int param_2)

{
  FUN_146b69f9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b73e42 FUN_146b73e42 body=73 status=ok
// SIG undefined FUN_146b73e42(void)

undefined8 * FUN_146b73e42(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f31e60;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_146b7aabe(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b73e8c FUN_146b73e8c body=38 status=ok
// SIG undefined FUN_146b73e8c(void)

undefined8 FUN_146b73e8c(undefined8 param_1,int param_2)

{
  FUN_146b6b308();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b73eb2 FUN_146b73eb2 body=38 status=ok
// SIG undefined FUN_146b73eb2(void)

undefined8 FUN_146b73eb2(undefined8 param_1,int param_2)

{
  FUN_146b6bea4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b73ed8 FUN_146b73ed8 body=38 status=ok
// SIG undefined FUN_146b73ed8(void)

undefined8 FUN_146b73ed8(undefined8 param_1,int param_2)

{
  FUN_146b6d58a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b73efe FUN_146b73efe body=38 status=ok
// SIG undefined FUN_146b73efe(void)

undefined8 FUN_146b73efe(undefined8 param_1,int param_2)

{
  FUN_146b6ed12();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b73f24 FUN_146b73f24 body=83 status=ok
// SIG undefined FUN_146b73f24(void)

undefined8 * FUN_146b73f24(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f32130;
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



// FUNCTION 146b73fb8 FUN_146b73fb8 body=85 status=ok
// SIG undefined FUN_146b73fb8(void)

undefined8 * FUN_146b73fb8(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_149f32230;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b7400e FUN_146b7400e body=53 status=ok
// SIG undefined FUN_146b7400e(void)

void FUN_146b7400e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar3 = 0;
    do {
      (**(code **)(**(longlong **)(lVar2 + lVar3) + 0x28))();
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  return;
}



// FUNCTION 146b74044 FUN_146b74044 body=38 status=ok
// SIG undefined FUN_146b74044(void)

undefined8 FUN_146b74044(undefined8 param_1,int param_2)

{
  FUN_146b70d5c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b7406a FUN_146b7406a body=45 status=ok
// SIG undefined FUN_146b7406a(void)

longlong FUN_146b7406a(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_146b70d5c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b74098 FUN_146b74098 body=29 status=ok
// SIG undefined FUN_146b74098(void)

undefined8 FUN_146b74098(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b740b6 FUN_146b740b6 body=71 status=ok
// SIG undefined FUN_146b740b6(void)

undefined8 * FUN_146b740b6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f32400;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b740fe FUN_146b740fe body=125 status=ok
// SIG undefined FUN_146b740fe(void)

void FUN_146b740fe(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0x18);
  uVar5 = iVar2 - iVar1;
  lVar4 = *(longlong *)(param_1 + 0x10);
  iVar3 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar3 + uVar5;
  if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar3) < uVar5) {
    FUN_140c60952(param_2,iVar3);
  }
  if (iVar2 == iVar1) {
    return;
  }
  memcpy((void *)((longlong)iVar3 * 0x10 + *param_2),(void *)((longlong)iVar1 * 0x10 + lVar4),
         (longlong)(int)uVar5 << 4);
  return;
}



// FUNCTION 146b7417c FUN_146b7417c body=38 status=ok
// SIG undefined FUN_146b7417c(void)

undefined8 FUN_146b7417c(undefined8 param_1,int param_2)

{
  FUN_146b72fe2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b741a4 FUN_146b741a4 body=45 status=ok
// SIG undefined FUN_146b741a4(void)

longlong FUN_146b741a4(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_146b72fe2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b741d2 FUN_146b741d2 body=48 status=ok
// SIG undefined FUN_146b741d2(void)

void FUN_146b741d2(undefined8 param_1,longlong param_2)

{
  FUN_140056680(param_2,&DAT_149dfb77a);
  FUN_140056680(param_2 + 0x10,&DAT_149dfb77a);
  return;
}



// FUNCTION 146b74202 FUN_146b74202 body=48 status=ok
// SIG undefined FUN_146b74202(void)

void FUN_146b74202(undefined8 param_1,longlong param_2)

{
  FUN_140056680(param_2,&DAT_149dfb77a);
  FUN_140056680(param_2 + 0x10,&DAT_149dfb77a);
  return;
}



// FUNCTION 146b74232 FUN_146b74232 body=47 status=ok
// SIG undefined FUN_146b74232(void)

void FUN_146b74232(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b74278 FUN_146b74278 body=67 status=ok
// SIG undefined FUN_146b74278(void)

undefined1 FUN_146b74278(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 146b742e4 FUN_146b742e4 body=59 status=ok
// SIG undefined FUN_146b742e4(void)

undefined8 FUN_146b742e4(longlong *param_1)

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



// FUNCTION 146b74382 FUN_146b74382 body=51 status=ok
// SIG undefined FUN_146b74382(void)

void FUN_146b74382(longlong *param_1)

{
  if ((char)param_1[4] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 146b74438 FUN_146b74438 body=59 status=ok
// SIG undefined FUN_146b74438(void)

undefined8 FUN_146b74438(longlong *param_1)

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



// FUNCTION 146b74590 FUN_146b74590 body=59 status=ok
// SIG undefined FUN_146b74590(void)

undefined8 FUN_146b74590(longlong *param_1)

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



// FUNCTION 146b746b8 FUN_146b746b8 body=59 status=ok
// SIG undefined FUN_146b746b8(void)

undefined8 FUN_146b746b8(longlong *param_1)

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



// FUNCTION 146b7475a FUN_146b7475a body=78 status=ok
// SIG undefined FUN_146b7475a(void)

void FUN_146b7475a(undefined8 param_1,longlong param_2)

{
  FUN_140056680(param_2,&DAT_149dfb77a);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined1 *)(param_2 + 0x48) = 0;
  FUN_140056680(param_2 + 0x50,&DAT_149dfb77a);
  *(undefined2 *)(param_2 + 0x60) = 0;
  return;
}



// FUNCTION 146b747a8 FUN_146b747a8 body=78 status=ok
// SIG undefined FUN_146b747a8(void)

void FUN_146b747a8(undefined8 param_1,longlong param_2)

{
  FUN_140056680(param_2,&DAT_149dfb77a);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined1 *)(param_2 + 0x48) = 0;
  FUN_140056680(param_2 + 0x50,&DAT_149dfb77a);
  *(undefined2 *)(param_2 + 0x60) = 0;
  return;
}



// FUNCTION 146b74814 FUN_146b74814 body=54 status=ok
// SIG undefined FUN_146b74814(void)

undefined1 FUN_146b74814(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146b74928(param_2,param_3);
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return 1;
}



// FUNCTION 146b74872 FUN_146b74872 body=59 status=ok
// SIG undefined FUN_146b74872(void)

undefined8 FUN_146b74872(longlong *param_1)

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



// FUNCTION 146b748b8 FUN_146b748b8 body=34 status=ok
// SIG undefined FUN_146b748b8(void)

void FUN_146b748b8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_146b5d4f4(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 146b74928 FUN_146b74928 body=94 status=ok
// SIG undefined FUN_146b74928(void)

longlong FUN_146b74928(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_144a787a6();
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  FUN_146b74986(param_1 + 0x28,param_2 + 0x28);
  FUN_140bee9ec(param_1 + 0x38,param_2 + 0x38);
  *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
  FUN_144a787a6(param_1 + 0x50,param_2 + 0x50);
  *(undefined2 *)(param_1 + 0x60) = *(undefined2 *)(param_2 + 0x60);
  return param_1;
}



// FUNCTION 146b74986 FUN_146b74986 body=89 status=ok
// SIG undefined FUN_146b74986(void)

undefined8 * FUN_146b74986(undefined8 *param_1,undefined8 *param_2)

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
      FUN_146b749e0(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x18);
      }
    }
  }
  return param_1;
}



// FUNCTION 146b749e0 FUN_146b749e0 body=115 status=ok
// SIG undefined FUN_146b749e0(void)

void FUN_146b749e0(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,4);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146b74a54 FUN_146b74a54 body=38 status=ok
// SIG undefined FUN_146b74a54(void)

undefined8 FUN_146b74a54(undefined8 param_1,int param_2)

{
  FUN_146b5dfa8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b74a7a FUN_146b74a7a body=32 status=ok
// SIG undefined FUN_146b74a7a(void)

undefined8 FUN_146b74a7a(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FManifestReader");
  return param_2;
}



// FUNCTION 146b74aae FUN_146b74aae body=304 status=ok
// SIG undefined FUN_146b74aae(void)

longlong * FUN_146b74aae(longlong *param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)((longlong)param_1 + 0x29) & 2) == 0) {
    puVar1 = (ulonglong *)param_1[1];
    puVar5 = (uint *)*puVar1 + 1;
    if ((uint *)puVar1[1] < puVar5) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_1c);
      }
    }
    else {
      local_1c = *(uint *)*puVar1;
      *puVar1 = (ulonglong)puVar5;
    }
    if ((int)param_1[0x15] != *(int *)((longlong)param_1 + 0xd4)) {
      plVar3 = param_1 + 0x1b;
      if ((longlong *)param_1[0x1c] != (longlong *)0x0) {
        plVar3 = (longlong *)param_1[0x1c];
      }
      uVar4 = *(uint *)((longlong)plVar3 + (ulonglong)((int)param_1[0x1d] - 1U & local_1c) * 4);
      if (uVar4 != 0xffffffff) {
        lVar2 = param_1[0x14];
        uVar6 = uVar4;
        do {
          if (*(uint *)(lVar2 + (longlong)(int)uVar6 * 0x14) == local_1c) goto LAB_146b74bae;
          uVar6 = *(uint *)(lVar2 + (longlong)(int)uVar6 * 0x14 + 0xc);
        } while (uVar6 != 0xffffffff);
      }
    }
    *param_2 = 0;
    FUN_14572541c(param_1);
  }
  else {
    *param_2 = 0;
  }
  goto LAB_146b74b0a;
  while (uVar4 = puVar5[3], uVar4 != 0xffffffff) {
LAB_146b74bae:
    puVar5 = (uint *)(lVar2 + (longlong)(int)uVar4 * 0x14);
    if (*puVar5 == local_1c) goto LAB_146b74bc1;
  }
  puVar5 = (uint *)0x0;
LAB_146b74bc1:
  *param_2 = *(undefined8 *)(puVar5 + 1);
LAB_146b74b0a:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146b74be0 FUN_146b74be0 body=96 status=ok
// SIG undefined FUN_146b74be0(void)

void FUN_146b74be0(longlong param_1,void *param_2,size_t param_3)

{
  if ((param_3 != 0) && ((*(byte *)(param_1 + 0x29) & 2) == 0)) {
    if ((longlong)(int)(*(longlong **)(param_1 + 0x98))[1] <
        (longlong)(param_3 + *(longlong *)(param_1 + 0x90))) {
      FUN_14572541c(param_1);
      return;
    }
    memcpy(param_2,(void *)((longlong)(int)*(longlong *)(param_1 + 0x90) +
                           **(longlong **)(param_1 + 0x98)),param_3);
    *(longlong *)(param_1 + 0x90) = *(longlong *)(param_1 + 0x90) + param_3;
  }
  return;
}



// FUNCTION 146b74c48 FUN_146b74c48 body=110 status=ok
// SIG undefined FUN_146b74c48(void)

void FUN_146b74c48(longlong param_1,uint param_2)

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
  if (*(int *)(param_1 + 0x48) < iVar3 && 0 < (int)param_2 || iVar3 < *(int *)(param_1 + 0x48)) {
    FUN_1403dd62e(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_140c19730(param_1);
    return;
  }
  FUN_146b74cb6(param_1);
  FUN_1403dd62e(param_1,param_2);
  return;
}



// FUNCTION 146b74cb6 FUN_146b74cb6 body=322 status=ok
// SIG undefined FUN_146b74cb6(void)

void FUN_146b74cb6(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x10 + (longlong)iVar4 * 0x14) * 4) =
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



// FUNCTION 146b74dfa FUN_146b74dfa body=295 status=ok
// SIG undefined FUN_146b74dfa(void)

undefined4 * FUN_146b74dfa(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c1954a(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar4 = *(uint *)*param_3;
  *local_40 = uVar4;
  *(undefined8 *)(local_40 + 1) = *puVar1;
  local_40[3] = 0xffffffff;
  local_4c = local_48[0];
  local_58 = 0;
  cVar2 = FUN_146b74f22(param_1,uVar4,local_40);
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
      local_40[4] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[3] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
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
      FUN_140c19730(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b74f22 FUN_146b74f22 body=154 status=ok
// SIG undefined FUN_146b74f22(void)

void FUN_146b74f22(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  longlong *plVar4;
  int iVar5;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar5 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar5 * 0x14);
        if (*piVar1 == *param_3) {
          uVar2 = *(undefined8 *)param_3;
          piVar1[2] = param_3[2];
          *(undefined8 *)piVar1 = uVar2;
          FUN_146b74fbc(param_1,*param_4,1);
          *param_4 = iVar5;
          uVar3 = 1;
          goto LAB_146b74f8c;
        }
        iVar5 = piVar1[3];
      } while (iVar5 != -1);
    }
  }
  uVar3 = 0;
LAB_146b74f8c:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar3;
  }
  return;
}



// FUNCTION 146b74fbc FUN_146b74fbc body=138 status=ok
// SIG undefined FUN_146b74fbc(void)

void FUN_146b74fbc(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x14 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x14) = param_2;
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
      puVar7 = puVar7 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146b75046 FUN_146b75046 body=38 status=ok
// SIG undefined FUN_146b75046(void)

undefined8 FUN_146b75046(undefined8 param_1,int param_2)

{
  FUN_146b5eaf0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b7506c FUN_146b7506c body=32 status=ok
// SIG undefined FUN_146b7506c(void)

undefined8 FUN_146b7506c(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FManifestWriter");
  return param_2;
}



// FUNCTION 146b75094 FUN_146b75094 body=498 status=ok
// SIG undefined FUN_146b75094(void)

longlong * FUN_146b75094(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_68 [36];
  int local_44;
  longlong *local_40;
  int *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = param_1 + 0x15;
  iVar5 = (int)param_1[0x16];
  iVar7 = *(int *)((longlong)param_1 + 0xdc);
  if (iVar5 - iVar7 != 0) {
    lVar4 = *param_2;
    uVar3 = (uint)((ulonglong)lVar4 >> 0x10);
    uVar8 = (uint)lVar4 & 0xffff;
    plVar6 = param_1 + 0x1c;
    if ((longlong *)param_1[0x1d] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[0x1d];
    }
    iVar9 = *(int *)((longlong)plVar6 +
                    (ulonglong)
                    ((int)param_1[0x1e] - 1U &
                    (int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar8) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar9 != -1) {
      do {
        if (*(longlong *)(*plVar1 + (longlong)iVar9 * 0x14) == lVar4) goto LAB_146b75100;
        iVar9 = *(int *)(*plVar1 + (longlong)iVar9 * 0x14 + 0xc);
      } while (iVar9 != -1);
    }
  }
  local_38 = &local_44;
  local_44 = iVar5 - iVar7;
  local_40 = param_2;
  FUN_140171856(plVar1,local_2c,&local_40,0);
  lVar4 = *param_2;
  iVar5 = (int)param_1[0x16];
  iVar7 = *(int *)((longlong)param_1 + 0xdc);
LAB_146b75100:
  if (iVar5 != iVar7) {
    uVar3 = (uint)((ulonglong)lVar4 >> 0x10);
    uVar8 = (uint)lVar4 & 0xffff;
    plVar6 = param_1 + 0x1c;
    if ((longlong *)param_1[0x1d] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[0x1d];
    }
    iVar5 = *(int *)((longlong)plVar6 +
                    (ulonglong)
                    ((int)param_1[0x1e] - 1U &
                    (int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar8) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar6 = (longlong *)(*plVar1 + (longlong)iVar5 * 0x14);
        if (*plVar6 == lVar4) goto LAB_146b7510a;
        iVar5 = *(int *)((longlong)plVar6 + 0xc);
      } while (iVar5 != -1);
    }
  }
  plVar6 = (longlong *)0x0;
LAB_146b7510a:
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,plVar6 + 1,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(plVar6 + 1) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146b75288 FUN_146b75288 body=157 status=ok
// SIG undefined FUN_146b75288(void)

void FUN_146b75288(longlong param_1,void *param_2,size_t param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((param_3 != 0) && ((*(byte *)(param_1 + 0x29) & 2) == 0)) {
    lVar3 = *(longlong *)(param_1 + 0x90);
    lVar5 = param_3 + lVar3;
    iVar1 = *(int *)(param_1 + 0xa0);
    lVar4 = lVar5 - iVar1;
    if (lVar4 != 0 && iVar1 <= lVar5) {
      if (0x7ffffffe < lVar5) {
        FUN_14572541c(param_1);
        return;
      }
      uVar2 = (uint)lVar4;
      *(uint *)(param_1 + 0xa0) = iVar1 + uVar2;
      if ((uint)(*(int *)(param_1 + 0xa4) - iVar1) < uVar2) {
        FUN_1447403be(param_1 + 0x98);
        lVar3 = *(longlong *)(param_1 + 0x90);
      }
    }
    memcpy((void *)((longlong)(int)lVar3 + *(longlong *)(param_1 + 0x98)),param_2,param_3);
    *(longlong *)(param_1 + 0x90) = *(longlong *)(param_1 + 0x90) + param_3;
  }
  return;
}



// FUNCTION 146b7532e FUN_146b7532e body=62 status=ok
// SIG undefined FUN_146b7532e(void)

void FUN_146b7532e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146b7536c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 146b7536c FUN_146b7536c body=112 status=ok
// SIG undefined FUN_146b7536c(void)

ulonglong FUN_146b7536c(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146b753a6;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x18,8);
      param_2 = param_2 / 0x18;
    }
  }
LAB_146b753a6:
  return param_2 & 0xffffffff;
}



// FUNCTION 146b753dc FUN_146b753dc body=310 status=ok
// SIG undefined FUN_146b753dc(void)

undefined4 * FUN_146b753dc(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined4 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1457ade44(param_1,local_40);
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *local_38 = *param_3;
  local_38[1] = uVar1;
  local_38[2] = uVar2;
  local_38[3] = uVar3;
  local_38[4] = 0xffffffff;
  local_44 = local_40[0];
  uVar5 = FUN_1447addd0(local_38,0x10);
  local_58 = 0;
  cVar4 = FUN_1457addd6(param_1,uVar5,local_38,&local_44);
  if (cVar4 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar7) {
      uVar6 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_38[5] = uVar5;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      local_38[4] = *(undefined4 *)
                     (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_1457adf2c(param_1);
    }
  }
  *param_2 = local_44;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b75514 FUN_146b75514 body=147 status=ok
// SIG undefined FUN_146b75514(void)

void FUN_146b75514(longlong param_1,int param_2)

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



// FUNCTION 146b755a8 FUN_146b755a8 body=115 status=ok
// SIG undefined FUN_146b755a8(void)

void FUN_146b755a8(longlong param_1,int param_2,int param_3)

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



// FUNCTION 146b7561b FUN_146b7561b body=113 status=ok
// SIG undefined FUN_146b7561b(void)

void FUN_146b7561b(undefined8 *param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    param_1[8] = 0;
    *(undefined4 *)(param_1 + 9) = 0;
    FUN_1410b2022(param_1,param_2);
    param_1 = param_1 + 10;
    param_2 = param_2 + 0x50;
  }
  return;
}



// FUNCTION 146b7568c FUN_146b7568c body=440 status=ok
// SIG undefined FUN_146b7568c(void)

void FUN_146b7568c(longlong param_1,ulonglong *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  code *pcVar4;
  longlong lVar5;
  ulonglong *puVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong local_60;
  longlong local_58;
  ulonglong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar11 = *(longlong *)(param_1 + 0x20);
  if ((lVar11 == 0) || (lVar12 = *(longlong *)(param_1 + 0x28), lVar12 == 0)) {
    lVar11 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 0x20) = lVar11;
    lVar12 = *(longlong *)(lVar11 + 0x20);
    *(longlong *)(param_1 + 0x28) = lVar12;
  }
  lVar5 = FUN_146b75846(param_1,lVar11,param_2);
  if (lVar11 != lVar5) {
    *(longlong *)(param_1 + 0x20) = lVar5;
    lVar12 = *(longlong *)(lVar5 + 0x20);
    *(longlong *)(param_1 + 0x28) = lVar12;
    lVar11 = lVar5;
  }
  puVar6 = (ulonglong *)FUN_146b7590c(lVar11 + 0x18,lVar12,param_2);
  *(ulonglong **)(param_1 + 0x28) = puVar6;
  if (lVar11 != 0) {
    while (((puVar6 != (ulonglong *)0x0 && (*(longlong *)(lVar11 + 0x10) != 0)) && (param_2[1] != 0)
           )) {
      uVar1 = *param_2;
      uVar8 = (param_2[1] + uVar1) - 1;
      if (((uVar8 < *(ulonglong *)(lVar11 + 8)) ||
          ((*(longlong *)(lVar11 + 0x10) + *(ulonglong *)(lVar11 + 8)) - 1 < uVar1)) ||
         ((puVar6[1] == 0 ||
          ((uVar2 = *puVar6, uVar8 < uVar2 || (uVar10 = (puVar6[1] + uVar2) - 1, uVar10 < uVar1)))))
         ) break;
      puVar3 = (ulonglong *)puVar6[5];
      if (uVar10 < uVar8) {
        uVar8 = uVar10;
      }
      local_68 = uVar2;
      if (uVar2 < uVar1) {
        local_68 = uVar1;
      }
      local_60 = (uVar8 - local_68) + 1;
      pcVar4 = (code *)*param_3;
      plVar9 = (longlong *)param_3[2];
      if ((longlong *)param_3[2] == (longlong *)0x0) {
        plVar9 = param_3 + 4;
      }
      local_58 = lVar11;
      local_50 = puVar6;
      uVar7 = (**(code **)(*plVar9 + 8))();
      (*pcVar4)(uVar7,&local_68,&local_58,&local_50);
      *(ulonglong **)(param_1 + 0x28) = puVar3;
      lVar11 = *(longlong *)(param_1 + 0x20);
      puVar6 = puVar3;
      while (puVar6 == (ulonglong *)0x0) {
        if (lVar11 == 0) goto LAB_146b7581d;
        lVar11 = *(longlong *)(lVar11 + 0x38);
        *(longlong *)(param_1 + 0x20) = lVar11;
        if (lVar11 == 0) {
          puVar6 = (ulonglong *)0x0;
        }
        else {
          puVar6 = *(ulonglong **)(lVar11 + 0x20);
          *(ulonglong **)(param_1 + 0x28) = puVar6;
        }
      }
      if (lVar11 == 0) break;
    }
  }
LAB_146b7581d:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b75846 FUN_146b75846 body=197 status=ok
// SIG undefined FUN_146b75846(void)

longlong FUN_146b75846(longlong param_1,longlong param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = (uVar1 + uVar2) - 1;
  if (uVar3 < *(ulonglong *)(param_2 + 8)) {
    for (; param_2 != 0; param_2 = *(longlong *)(param_2 + 0x40)) {
      if (((uVar2 != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
         ((*(ulonglong *)(param_2 + 8) <= uVar3 &&
          (uVar1 <= (*(longlong *)(param_2 + 0x10) + *(ulonglong *)(param_2 + 8)) - 1))))
      goto LAB_146b758b7;
    }
  }
  else {
    for (; param_2 != 0; param_2 = *(longlong *)(param_2 + 0x38)) {
      if ((((uVar2 != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
          (*(ulonglong *)(param_2 + 8) <= uVar3)) &&
         (uVar1 <= (*(longlong *)(param_2 + 0x10) + *(ulonglong *)(param_2 + 8)) - 1))
      goto LAB_146b758b7;
    }
  }
LAB_146b758dd:
  return *(longlong *)(param_1 + 8);
LAB_146b758b7:
  do {
    if ((*(longlong *)(param_2 + 0x10) != 0) &&
       ((uVar3 < *(ulonglong *)(param_2 + 8) ||
        ((*(longlong *)(param_2 + 0x10) + *(ulonglong *)(param_2 + 8)) - 1 < uVar1)))) {
      while ((*(longlong *)(param_2 + 0x10) == 0 ||
             ((uVar3 < *(ulonglong *)(param_2 + 8) ||
              ((*(longlong *)(param_2 + 0x10) + *(ulonglong *)(param_2 + 8)) - 1 < uVar1))))) {
        param_2 = *(longlong *)(param_2 + 0x38);
        if (param_2 == 0) {
          return 0;
        }
      }
      return param_2;
    }
    param_2 = *(longlong *)(param_2 + 0x40);
  } while (param_2 != 0);
  goto LAB_146b758dd;
}



// FUNCTION 146b7590c FUN_146b7590c body=192 status=ok
// SIG undefined FUN_146b7590c(void)

ulonglong * FUN_146b7590c(longlong param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = (uVar1 + uVar2) - 1;
  if (uVar3 < *param_2) {
    for (; param_2 != (ulonglong *)0x0; param_2 = (ulonglong *)param_2[6]) {
      if (((uVar2 != 0) && (param_2[1] != 0)) &&
         ((*param_2 <= uVar3 && (uVar1 <= (param_2[1] + *param_2) - 1)))) goto LAB_146b7597a;
    }
  }
  else {
    for (; param_2 != (ulonglong *)0x0; param_2 = (ulonglong *)param_2[5]) {
      if ((((uVar2 != 0) && (param_2[1] != 0)) && (*param_2 <= uVar3)) &&
         (uVar1 <= (param_2[1] + *param_2) - 1)) goto LAB_146b7597a;
    }
  }
LAB_146b7599f:
  return *(ulonglong **)(param_1 + 8);
LAB_146b7597a:
  do {
    if ((param_2[1] != 0) && ((uVar3 < *param_2 || ((param_2[1] + *param_2) - 1 < uVar1)))) {
      while ((param_2[1] == 0 || ((uVar3 < *param_2 || ((param_2[1] + *param_2) - 1 < uVar1))))) {
        param_2 = (ulonglong *)param_2[5];
        if (param_2 == (ulonglong *)0x0) {
          return (ulonglong *)0x0;
        }
      }
      return param_2;
    }
    param_2 = (ulonglong *)param_2[6];
  } while (param_2 != (ulonglong *)0x0);
  goto LAB_146b7599f;
}



// FUNCTION 146b759cc FUN_146b759cc body=109 status=ok
// SIG undefined FUN_146b759cc(void)

undefined8 FUN_146b759cc(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  *param_2 = 0;
  local_20 = (undefined4)param_2[1];
  local_1c = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  uVar1 = FUN_146b600f6();
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b75a3a FUN_146b75a3a body=29 status=ok
// SIG undefined FUN_146b75a3a(void)

undefined8 FUN_146b75a3a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b75a58 FUN_146b75a58 body=630 status=ok
// SIG undefined FUN_146b75a58(void)

undefined8 FUN_146b75a58(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined8 uVar14;
  undefined1 auStack_208 [32];
  longlong *local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined1 *local_1b0;
  longlong *local_1a0;
  longlong local_198;
  undefined1 local_190 [96];
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined1 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined1 *local_f8;
  undefined8 local_e8;
  undefined **local_d8;
  undefined8 local_d0;
  undefined1 local_b0 [80];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_208;
  FUN_146b75d52(param_1 + 0xe8);
  plVar1 = (longlong *)
           (*(longlong *)(param_1 + 0xe8) + (longlong)(*(int *)(param_1 + 0xf0) + -1) * 0x18);
  puVar11 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar11 = &PTR_FUN_149f323e8;
  puVar11[1] = param_2;
  puVar2 = (undefined8 *)*plVar1;
  puVar12 = puVar2;
  if ((puVar2 != puVar11) &&
     (*plVar1 = (longlong)puVar11, puVar12 = puVar11, puVar2 != (undefined8 *)0x0)) {
    (**(code **)*puVar2)(puVar2,1);
    puVar12 = (undefined8 *)*plVar1;
  }
  local_1e8 = (longlong *)0x0;
  puVar12 = (undefined8 *)FUN_146b8f298(100,puVar12,0,*(undefined8 *)(param_1 + 0xd0));
  puVar2 = (undefined8 *)plVar1[1];
  if ((puVar2 != puVar12) && (plVar1[1] = (longlong)puVar12, puVar2 != (undefined8 *)0x0)) {
    (**(code **)*puVar2)(puVar2,1);
  }
  local_130 = *(undefined4 *)(param_1 + 0x90);
  local_12c = *(undefined4 *)(param_1 + 0x94);
  local_128 = *(undefined4 *)(param_1 + 0x98);
  local_124 = *(undefined4 *)(param_1 + 0x9c);
  local_120 = *(undefined4 *)(param_1 + 0xa0);
  local_118 = *(undefined8 *)(param_1 + 0xa8);
  local_110 = *(undefined8 *)(param_1 + 0xb0);
  local_108 = *(undefined1 *)(param_1 + 0xb8);
  local_104 = *(undefined4 *)(param_1 + 0xbc);
  local_100 = *(undefined4 *)(param_1 + 0xc0);
  plVar13 = (longlong *)FUN_146b884a4(&local_130,0);
  plVar3 = (longlong *)plVar1[2];
  if ((plVar3 != plVar13) && (plVar1[2] = (longlong)plVar13, plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 8))(plVar3,1);
  }
  (**(code **)(*param_2 + 8))(param_2,local_b0);
  uVar14 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0xe0);
  local_198 = plVar1[1];
  lVar5 = plVar1[2];
  uVar6 = *(undefined8 *)(param_1 + 0xd8);
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  uVar8 = *(undefined8 *)(param_1 + 200);
  local_1a0 = param_2;
  FUN_146b6e0aa(local_190,param_1 + 0x30);
  local_1b0 = local_b0;
  local_1e8 = local_1a0;
  local_1e0 = uVar9;
  uStack_1d8 = uVar10;
  local_1d0 = uVar6;
  local_1c8 = lVar5;
  local_1c0 = uVar4;
  local_1b8 = uVar14;
  uVar14 = FUN_14294767a(local_190,uVar8,local_198,uVar7);
  local_f8 = &LAB_146b75e2e;
  local_e8 = 0;
  local_d8 = &PTR_LAB_149f331c0;
  local_d0 = uVar14;
  (**(code **)(*(longlong *)plVar1[1] + 0x28))();
  if ((local_60 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14;
}



// FUNCTION 146b75cd0 FUN_146b75cd0 body=38 status=ok
// SIG undefined FUN_146b75cd0(void)

undefined8 FUN_146b75cd0(undefined8 param_1,int param_2)

{
  FUN_146b75e84();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b75cf6 FUN_146b75cf6 body=29 status=ok
// SIG undefined FUN_146b75cf6(void)

undefined8 FUN_146b75cf6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b75d1e FUN_146b75d1e body=29 status=ok
// SIG undefined FUN_146b75d1e(void)

undefined8 FUN_146b75d1e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b75d52 FUN_146b75d52 body=71 status=ok
// SIG undefined FUN_146b75d52(void)

void FUN_146b75d52(longlong *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146b75d9a(param_1,iVar1);
  }
  puVar2 = (undefined8 *)((longlong)iVar1 * 0x18 + *param_1);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  return;
}



// FUNCTION 146b75d9a FUN_146b75d9a body=147 status=ok
// SIG undefined FUN_146b75d9a(void)

void FUN_146b75d9a(longlong param_1,int param_2)

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



// FUNCTION 146b75e66 FUN_146b75e66 body=29 status=ok
// SIG undefined FUN_146b75e66(void)

undefined8 FUN_146b75e66(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b75e84 FUN_146b75e84 body=158 status=ok
// SIG undefined FUN_146b75e84(void)

void FUN_146b75e84(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149f33120;
  FUN_146b75f22(param_1[0x1d],*(undefined4 *)(param_1 + 0x1e));
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  puVar1 = (undefined8 *)param_1[0x1c];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[0x1b];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[0x1a];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[0x19];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_146b35076(param_1 + 6);
  return;
}



// FUNCTION 146b75f22 FUN_146b75f22 body=38 status=ok
// SIG undefined FUN_146b75f22(void)

void FUN_146b75f22(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146b75f48(param_1);
    param_1 = param_1 + 0x18;
  }
  return;
}



// FUNCTION 146b75f48 FUN_146b75f48 body=81 status=ok
// SIG undefined FUN_146b75f48(void)

void FUN_146b75f48(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)param_1[2];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,1);
  }
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146b75f8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar2)(puVar2,1);
    return;
  }
  return;
}



// FUNCTION 146b75f99 FUN_146b75f99 body=161 status=ok
// SIG undefined FUN_146b75f99(void)

void FUN_146b75f99(longlong *param_1,undefined8 *param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar1 = (code *)*param_2;
  plVar4 = param_2 + 4;
  if ((longlong *)param_2[2] != (longlong *)0x0) {
    plVar4 = (longlong *)param_2[2];
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(&local_30,uVar3);
  lVar2 = *param_1;
  *(longlong *)(lVar2 + 0x80) = local_30;
  local_30 = 0;
  *(undefined4 *)(lVar2 + 0x88) = (undefined4)local_28;
  *(undefined4 *)(lVar2 + 0x8c) = local_28._4_4_;
  local_28 = 0;
  FUN_140b576f0();
  FUN_146b498c7(local_30,local_28 & 0xffffffff);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b7603c FUN_146b7603c body=28 status=ok
// SIG undefined FUN_146b7603c(void)

undefined8 FUN_146b7603c(undefined8 param_1,undefined8 *param_2)

{
  FUN_146b7608c(*param_2,param_1);
  return param_1;
}



// FUNCTION 146b76062 FUN_146b76062 body=12 status=ok
// SIG undefined FUN_146b76062(void)

void FUN_146b76062(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000146b7606b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 146b7606e FUN_146b7606e body=29 status=ok
// SIG undefined FUN_146b7606e(void)

undefined8 FUN_146b7606e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b7608c FUN_146b7608c body=667 status=ok
// SIG undefined FUN_146b7608c(void)

undefined8 FUN_146b7608c(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_158 [40];
  longlong local_130;
  undefined8 local_128;
  undefined8 *local_120;
  longlong local_118;
  undefined8 uStack_110;
  longlong local_108;
  undefined8 uStack_100;
  longlong local_f8;
  longlong lStack_f0;
  undefined **local_e8;
  longlong local_e0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_128 = param_2;
  FUN_146b636f0(&local_e8,param_1[1]);
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  for (lVar6 = local_e0; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x38)) {
    for (lVar7 = *(longlong *)(lVar6 + 0x20); lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x28)) {
      lVar5 = (**(code **)(*(longlong *)*param_1 + 0x218))
                        ((longlong *)*param_1,(undefined8 *)(lVar7 + 0x10));
      if (lVar5 == 0) {
        *(undefined8 *)(lVar7 + 0x10) = 0;
        *(undefined8 *)(lVar7 + 0x18) = 0;
      }
    }
  }
  local_120 = param_1 + 10;
  local_f8 = 0;
  lStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  while( true ) {
    while (cVar4 = FUN_146b76328(local_120,&local_108), cVar4 != '\0') {
      if ((longlong)(int)uStack_100 != 0) {
        lVar6 = local_108 + (longlong)(int)uStack_100 * 0x18;
        lVar5 = 0;
        lVar7 = local_108;
        do {
          local_118 = 0;
          uStack_110 = 0;
          FUN_146b30ae2(&local_f8,lVar5,*(undefined4 *)(lVar7 + 0x14),&local_118);
          FUN_146b629d9(lVar7,&local_118,&local_e8,&local_b8);
          uVar1 = *(uint *)(lVar7 + 0x14);
          lVar2 = local_118;
          while (lVar2 != 0) {
            local_130 = *(longlong *)(lVar2 + 0x18);
            FUN_1400020a8();
            lVar2 = local_130;
          }
          lVar5 = lVar5 + (ulonglong)uVar1;
          lVar7 = lVar7 + 0x18;
        } while (lVar7 != lVar6);
      }
    }
    if (*(int *)(param_1 + 6) == 0) break;
    (**(code **)(*(longlong *)param_1[7] + 0x20))((longlong *)param_1[7],1000,0);
    (**(code **)(*(longlong *)param_1[7] + 0x18))();
  }
  FUN_146b76402(param_1,&local_e8,&local_b8);
  for (; uVar3 = local_128, local_e0 != 0; local_e0 = *(longlong *)(local_e0 + 0x38)) {
    FUN_146b7653a(local_e0 + 0x18);
  }
  FUN_146b63d98(&local_e8,local_128);
  while (local_f8 != 0) {
    lStack_f0 = *(longlong *)(local_f8 + 0x18);
    FUN_1400020a8();
    local_f8 = lStack_f0;
  }
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_146b7d546(&local_b8);
  local_e8 = &PTR_FUN_149f33280;
  FUN_146b76cf6();
  if ((local_60 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b76328 FUN_146b76328 body=217 status=ok
// SIG undefined FUN_146b76328(void)

bool FUN_146b76328(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [5];
  
  local_48[4] = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = **(longlong **)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_146b766e2(param_2,lVar1 + 8);
    lVar2 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar1;
    local_48[2] = 0;
    local_48[3] = 0;
    local_48[0] = 0;
    local_48[1] = 0;
    FUN_146b766e2(lVar1 + 8,local_48);
    while (local_48[2] != 0) {
      local_48[3] = *(longlong *)(local_48[2] + 0x18);
      FUN_1400020a8();
      local_48[2] = local_48[3];
    }
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
    if (lVar2 != 0) {
      FUN_146b30b8c(lVar2 + 0x18);
      if (*(longlong *)(lVar2 + 8) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(lVar2);
    }
  }
  if ((local_48[4] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b76402 FUN_146b76402 body=311 status=ok
// SIG undefined FUN_146b76402(void)

void FUN_146b76402(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = param_2;
  local_70 = param_3;
  if ((longlong)*(int *)(param_1 + 5) != 0) {
    lVar7 = param_1[4];
    local_68 = (longlong)*(int *)(param_1 + 5) * 0x10 + lVar7;
    lVar4 = 0;
    do {
      lVar2 = (**(code **)(*(longlong *)param_1[1] + 0x1f8))((longlong *)param_1[1],lVar7);
      lVar8 = *(longlong *)(lVar2 + 0x58);
      if ((lVar8 != 0) && ((longlong)*(int *)(lVar2 + 0x50) != 0)) {
        lVar5 = *(longlong *)(lVar2 + 0x48);
        lVar2 = lVar5 + (longlong)*(int *)(lVar2 + 0x50) * 0x18;
        lVar6 = lVar4;
        local_60 = lVar8;
        do {
          uVar1 = *(uint *)(lVar5 + 0x14);
          lVar3 = (**(code **)(*(longlong *)*param_1 + 0x218))((longlong *)*param_1,lVar5);
          if (lVar3 != 0) {
            FUN_146b30f62(&local_58,lVar6,(ulonglong)uVar1);
            FUN_146b629d9(lVar5,&local_58,local_78,local_70);
            while (lVar8 = local_60, local_58 != 0) {
              local_50 = *(longlong *)(local_58 + 0x18);
              FUN_1400020a8();
              local_58 = local_50;
            }
          }
          lVar6 = lVar6 + (ulonglong)uVar1;
          lVar5 = lVar5 + 0x18;
        } while (lVar5 != lVar2);
      }
      lVar4 = lVar4 + lVar8;
      lVar7 = lVar7 + 0x10;
    } while (lVar7 != local_68);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b7653a FUN_146b7653a body=424 status=ok
// SIG undefined FUN_146b7653a(void)

void FUN_146b7653a(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  bool bVar18;
  
  puVar10 = *(ulonglong **)(param_1 + 8);
  if (puVar10 != (ulonglong *)0x0) {
    puVar11 = (ulonglong *)puVar10[5];
joined_r0x000146b76563:
    while (puVar13 = puVar11, puVar12 = puVar10, puVar13 != (ulonglong *)0x0) {
      iVar1 = (int)puVar13[2];
      iVar2 = *(int *)((longlong)puVar13 + 0x14);
      iVar3 = (int)puVar13[3];
      uVar4 = *(uint *)((longlong)puVar13 + 0x1c);
      iVar5 = (int)puVar12[2];
      iVar6 = *(int *)((longlong)puVar12 + 0x14);
      iVar7 = (int)puVar12[3];
      uVar8 = *(uint *)((longlong)puVar12 + 0x1c);
      if (uVar8 < 0x100 && ((iVar5 == 1 && iVar6 == 0) && iVar7 == 0)) {
        bVar18 = uVar8 == uVar4 && (iVar1 == 1 && (iVar3 == 0 && iVar2 == 0));
      }
      else {
        bVar18 = false;
      }
      puVar11 = (ulonglong *)puVar13[5];
      puVar10 = puVar13;
      if (((iVar6 == 0 && iVar7 == 0) && (iVar5 == 0 && uVar8 == 0)) &&
          ((iVar1 == 0 && uVar4 == 0) && (iVar3 == 0 && iVar2 == 0))) {
        uVar14 = puVar12[1] + puVar13[1];
        if (uVar14 < 0xffffffff) {
LAB_146b7664f:
          *(int *)((longlong)puVar12 + 0x24) = (int)uVar14;
          puVar12[1] = uVar14;
          goto LAB_146b76656;
        }
      }
      else {
        if (!bVar18) goto LAB_146b76662;
        uVar14 = puVar12[1] + puVar13[1];
        if (uVar14 < 0x100000) {
          *(undefined4 *)(puVar12 + 4) = 0;
          goto LAB_146b7664f;
        }
      }
    }
  }
  return;
LAB_146b76662:
  uVar9 = (uint)puVar12[4];
  if ((ulonglong)uVar9 + (ulonglong)*(uint *)((longlong)puVar12 + 0x24) ==
      (ulonglong)(uint)puVar13[4] &&
      (uVar4 == uVar8 && (iVar3 == iVar7 && (iVar2 == iVar6 && iVar1 == iVar5)))) {
    uVar16 = ((ulonglong)*(uint *)((longlong)puVar12 + 0x24) + (ulonglong)uVar9) - 1;
    uVar14 = ((ulonglong)*(uint *)((longlong)puVar13 + 0x24) + (ulonglong)(uint)puVar13[4]) - 1;
    if (uVar14 < uVar16) {
      uVar14 = uVar16;
    }
    *(uint *)((longlong)puVar12 + 0x24) = ((int)uVar14 - uVar9) + 1;
    uVar14 = *puVar13;
    uVar15 = (puVar13[1] + uVar14) - 1;
    uVar16 = *puVar12;
    uVar17 = (puVar12[1] + uVar16) - 1;
    if (uVar17 < uVar15) {
      uVar17 = uVar15;
    }
    if (uVar16 < uVar14) {
      uVar14 = uVar16;
    }
    *puVar12 = uVar14;
    puVar12[1] = (uVar17 - uVar14) + 1;
LAB_146b76656:
    FUN_146b76736(param_1);
    puVar10 = puVar12;
  }
  goto joined_r0x000146b76563;
}



// FUNCTION 146b766e2 FUN_146b766e2 body=83 status=ok
// SIG undefined FUN_146b766e2(void)

longlong * FUN_146b766e2(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  FUN_146b46bca(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 146b76736 FUN_146b76736 body=161 status=ok
// SIG undefined FUN_146b76736(void)

void FUN_146b76736(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  plVar1 = param_1 + 1;
  lVar2 = param_1[1];
  if ((int)param_1[3] == 1) {
    while (lVar2 != 0) {
      lVar2 = *(longlong *)(lVar2 + 0x28);
      FUN_1400020a8();
      *plVar1 = lVar2;
    }
    *plVar1 = 0;
    param_1[2] = 0;
    iVar3 = 0;
  }
  else {
    if (lVar2 == param_2) {
      lVar2 = *(longlong *)(lVar2 + 0x28);
      *plVar1 = lVar2;
      *(undefined8 *)(lVar2 + 0x30) = 0;
    }
    else if (param_1[2] == param_2) {
      lVar2 = *(longlong *)(param_1[2] + 0x30);
      param_1[2] = lVar2;
      *(undefined8 *)(lVar2 + 0x28) = 0;
    }
    else {
      lVar2 = *(longlong *)(param_2 + 0x30);
      *(longlong *)(*(longlong *)(param_2 + 0x28) + 0x30) = lVar2;
      *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    }
    FUN_1400020a8(param_2);
    iVar3 = (int)param_1[3] + -1;
  }
                    /* WARNING: Could not recover jumptable at 0x000146b767b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,iVar3);
  return;
}



// FUNCTION 146b767d8 FUN_146b767d8 body=130 status=ok
// SIG undefined FUN_146b767d8(void)

longlong * FUN_146b767d8(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0xa0,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_149f33200;
  FUN_1405d89e4(plVar3 + 2,param_2);
  *param_1 = (longlong)(plVar3 + 2);
  param_1[1] = (longlong)plVar3;
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
  return param_1;
}



// FUNCTION 146b7685a FUN_146b7685a body=9 status=ok
// SIG undefined FUN_146b7685a(void)

void FUN_146b7685a(longlong param_1)

{
  FUN_146b76882(param_1 + 0x10);
  return;
}



// FUNCTION 146b76864 FUN_146b76864 body=29 status=ok
// SIG undefined FUN_146b76864(void)

undefined8 FUN_146b76864(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b76882 FUN_146b76882 body=65 status=ok
// SIG undefined FUN_146b76882(void)

void FUN_146b76882(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x78) & 1) != 0) {
    FUN_146b498c7(*(undefined8 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x88));
    if (*(longlong *)(param_1 + 0x80) != 0) {
      FUN_1400020a8();
    }
  }
  FUN_140788a7e(param_1);
  return;
}



// FUNCTION 146b768c4 FUN_146b768c4 body=195 status=ok
// SIG undefined FUN_146b768c4(void)

undefined8 FUN_146b768c4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined8 local_58;
  undefined8 local_48;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_146b75f99(param_1 + 0x50,param_1 + 0x10);
  lVar3 = *(longlong *)(param_1 + 0x68);
  while ((*(byte *)(lVar3 + 0x78) & 1) == 0) {
    (**(code **)(**(longlong **)(lVar3 + 0x70) + 0x20))(*(longlong **)(lVar3 + 0x70),0xffffffff,0);
  }
  local_78 = *(undefined8 *)(lVar3 + 0x80);
  local_58 = 0;
  local_48 = 0;
  local_70 = param_1;
  FUN_14294b17a(local_68);
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
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b76988 FUN_146b76988 body=38 status=ok
// SIG undefined FUN_146b76988(void)

undefined8 FUN_146b76988(undefined8 param_1,int param_2)

{
  FUN_146b76a24();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b769ae FUN_146b769ae body=66 status=ok
// SIG undefined FUN_146b769ae(void)

void FUN_146b769ae(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_1;
  plVar2 = (longlong *)param_1[1];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,1);
  }
  if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146b769e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x28))(plVar2,1);
    return;
  }
  return;
}



// FUNCTION 146b769fa FUN_146b769fa body=12 status=ok
// SIG undefined FUN_146b769fa(void)

void FUN_146b769fa(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000146b76a03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 146b76a06 FUN_146b76a06 body=29 status=ok
// SIG undefined FUN_146b76a06(void)

undefined8 FUN_146b76a06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b76a24 FUN_146b76a24 body=141 status=ok
// SIG undefined FUN_146b76a24(void)

void FUN_146b76a24(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f33220;
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
  plVar3 = (longlong *)param_1[0xb];
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
  if (param_1[2] != 0) {
    plVar3 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[4];
    }
                    /* WARNING: Could not recover jumptable at 0x000146b76aa5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))(plVar3);
    return;
  }
  return;
}



// FUNCTION 146b76ab2 FUN_146b76ab2 body=96 status=ok
// SIG undefined FUN_146b76ab2(void)

undefined8 * FUN_146b76ab2(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != param_2) {
    *param_1 = *param_2;
    *param_2 = 0;
    plVar2 = (longlong *)param_2[1];
    plVar3 = (longlong *)param_1[1];
    if (plVar2 != plVar3) {
      param_2[1] = 0;
      param_1[1] = plVar2;
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
    }
  }
  return param_1;
}



// FUNCTION 146b76b12 FUN_146b76b12 body=105 status=ok
// SIG undefined FUN_146b76b12(void)

void FUN_146b76b12(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *puVar2 = 0;
  puVar2[1] = *param_2;
  *param_2 = 0;
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)puVar2 + 0x14) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  puVar2[3] = param_2[2];
  puVar2[4] = param_2[3];
  param_2[2] = 0;
  param_2[3] = 0;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*param_1;
    *param_1 = puVar2;
    *puVar1 = puVar2;
  }
  return;
}



// FUNCTION 146b76b7c FUN_146b76b7c body=105 status=ok
// SIG undefined FUN_146b76b7c(void)

undefined8 * FUN_146b76b7c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

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
    FUN_146b494a4(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x18);
  }
  FUN_146b31318(param_1 + 2,param_3);
  return param_1;
}



// FUNCTION 146b76be6 FUN_146b76be6 body=48 status=ok
// SIG undefined FUN_146b76be6(void)

undefined8 * FUN_146b76be6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f33270;
  FUN_146b76c1a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b76c1a FUN_146b76c1a body=108 status=ok
// SIG undefined FUN_146b76c1a(void)

void FUN_146b76c1a(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = param_1[1];
  while (lVar2 != 0) {
    lVar1 = *(longlong *)(lVar2 + 0x70);
    *(undefined4 *)(lVar2 + 0x60) = 0;
    if (*(longlong *)(lVar2 + 0x58) != 0) {
      FUN_1400020a8();
    }
    FUN_1408910a4(lVar2 + 0x18);
    FUN_1400020a8(lVar2);
    param_1[1] = lVar1;
    lVar2 = lVar1;
  }
  param_1[1] = 0;
  param_1[2] = 0;
                    /* WARNING: Could not recover jumptable at 0x000146b76c83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,0);
  return;
}



// FUNCTION 146b76c86 FUN_146b76c86 body=112 status=ok
// SIG undefined FUN_146b76c86(void)

void FUN_146b76c86(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x60,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x60)) {
      uVar2 = uVar1 / 0x60 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x60,8);
  }
  return;
}



// FUNCTION 146b76cf6 FUN_146b76cf6 body=174 status=ok
// SIG undefined FUN_146b76cf6(void)

void FUN_146b76cf6(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined **ppuVar3;
  longlong lVar4;
  
  lVar2 = param_1[1];
  while (lVar2 != 0) {
    lVar4 = *(longlong *)(lVar2 + 0x20);
    lVar1 = *(longlong *)(lVar2 + 0x38);
    *(undefined ***)(lVar2 + 0x18) = &PTR_FUN_149f33290;
    ppuVar3 = &PTR_FUN_149f33290;
    if (lVar4 != 0) {
      do {
        lVar4 = *(longlong *)(lVar4 + 0x28);
        FUN_1400020a8();
        *(longlong *)(lVar2 + 0x20) = lVar4;
      } while (lVar4 != 0);
      ppuVar3 = *(undefined ***)(lVar2 + 0x18);
    }
    *(longlong *)(lVar2 + 0x20) = 0;
    *(undefined8 *)(lVar2 + 0x28) = 0;
    (*(code *)ppuVar3[1])((undefined8 *)(lVar2 + 0x18),0);
    FUN_1400020a8(lVar2);
    param_1[1] = lVar1;
    lVar2 = lVar1;
  }
  param_1[1] = 0;
  param_1[2] = 0;
                    /* WARNING: Could not recover jumptable at 0x000146b76da1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,0);
  return;
}



// FUNCTION 146b76da4 FUN_146b76da4 body=48 status=ok
// SIG undefined FUN_146b76da4(void)

undefined8 * FUN_146b76da4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f33280;
  FUN_146b76cf6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b76dd8 FUN_146b76dd8 body=99 status=ok
// SIG undefined FUN_146b76dd8(void)

undefined8 * FUN_146b76dd8(undefined8 *param_1,int param_2)

{
  undefined **ppuVar1;
  longlong lVar2;
  
  ppuVar1 = &PTR_FUN_149f33290;
  *param_1 = &PTR_FUN_149f33290;
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    do {
      lVar2 = *(longlong *)(lVar2 + 0x28);
      FUN_1400020a8();
      param_1[1] = lVar2;
    } while (lVar2 != 0);
    ppuVar1 = (undefined **)*param_1;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  (*(code *)ppuVar1[1])(param_1,0);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b76e3c FUN_146b76e3c body=4 status=ok
// SIG undefined FUN_146b76e3c(void)

void FUN_146b76e3c(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}



// FUNCTION 146b76e40 FUN_146b76e40 body=38 status=ok
// SIG undefined FUN_146b76e40(void)

undefined8 FUN_146b76e40(undefined8 param_1,int param_2)

{
  FUN_146b779e4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b76e66 FUN_146b76e66 body=1373 status=ok
// SIG undefined FUN_146b76e66(void)

void FUN_146b76e66(longlong param_1,uint param_2,ulonglong *param_3,ulonglong *param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  ulonglong *puVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong *puVar21;
  longlong lVar22;
  int iVar23;
  longlong lVar24;
  bool bVar25;
  undefined1 auStack_108 [40];
  ulonglong *local_e0;
  longlong *local_d8;
  ulonglong *local_d0;
  ulonglong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong *local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_146b77c4a();
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar16 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar16 = *(longlong *)(param_1 + 0x48);
    }
    iVar23 = *(int *)(lVar16 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & param_2) * 4);
    if (iVar23 != -1) {
      do {
        lVar16 = *(longlong *)(param_1 + 8) + (longlong)iVar23 * 0x20;
        if (*(uint *)(*(longlong *)(param_1 + 8) + (longlong)iVar23 * 0x20) == param_2)
        goto LAB_146b76eda;
        iVar23 = *(int *)(lVar16 + 0x18);
      } while (iVar23 != -1);
    }
  }
  lVar16 = 0;
LAB_146b76eda:
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    lVar17 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar17 = *(longlong *)(param_1 + 0x98);
    }
    iVar23 = *(int *)(lVar17 + (ulonglong)(*(int *)(param_1 + 0xa0) - 1U & param_2) * 4);
    if (iVar23 != -1) {
      do {
        lVar17 = *(longlong *)(param_1 + 0x58) + (longlong)iVar23 * 0x20;
        if (*(uint *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar23 * 0x20) == param_2)
        goto LAB_146b76f16;
        iVar23 = *(int *)(lVar17 + 0x18);
      } while (iVar23 != -1);
    }
  }
  lVar17 = 0;
LAB_146b76f16:
  local_88 = (ulonglong *)0x0;
  local_b8 = *param_3;
  uStack_b0 = param_3[1];
  local_a8 = param_3[2];
  uStack_a0 = param_3[3];
  uVar20 = *param_4;
  uVar6 = param_4[1];
  *param_4 = 0;
  param_4[1] = 0;
  uStack_80 = 1;
  FUN_146b786fc(&local_88,0);
  local_88[2] = local_a8;
  local_88[3] = uStack_a0;
  *(undefined4 *)local_88 = (undefined4)local_b8;
  *(undefined4 *)((longlong)local_88 + 4) = local_b8._4_4_;
  *(undefined4 *)(local_88 + 1) = (undefined4)uStack_b0;
  *(undefined4 *)((longlong)local_88 + 0xc) = uStack_b0._4_4_;
  local_88[4] = uVar20;
  local_88[5] = uVar6;
  if (0 < (int)uStack_80) {
    plVar1 = (longlong *)(lVar16 + 8);
    local_d8 = (longlong *)(lVar17 + 8);
    local_d0 = param_4;
    do {
      puVar21 = local_88;
      uVar15 = *(uint *)(lVar16 + 0x10);
      uVar20 = (ulonglong)(int)uVar15;
      if ((longlong)uVar20 < 1) {
        *(uint *)(lVar16 + 0x10) = uVar15 + 1;
        if (*(uint *)(lVar16 + 0x14) < uVar15 + 1) {
          FUN_146b786fc(plVar1,uVar15);
        }
        lVar18 = *plVar1;
        lVar22 = uVar20 * 0x30;
        uVar6 = *puVar21;
        uVar8 = *(undefined4 *)((longlong)puVar21 + 4);
        uVar19 = puVar21[1];
        uVar9 = *(undefined4 *)((longlong)puVar21 + 0xc);
        uVar20 = puVar21[3];
        puVar3 = (ulonglong *)(lVar18 + 0x10 + lVar22);
        *puVar3 = puVar21[2];
        puVar3[1] = uVar20;
        puVar2 = (undefined4 *)(lVar18 + lVar22);
        *puVar2 = (int)uVar6;
        puVar2[1] = uVar8;
        puVar2[2] = (int)uVar19;
        puVar2[3] = uVar9;
        *(ulonglong *)(lVar18 + 0x20 + lVar22) = puVar21[4];
        *(ulonglong *)(lVar18 + 0x28 + lVar22) = puVar21[5];
        puVar21[4] = 0;
        puVar21[5] = 0;
      }
      else {
        uVar6 = *local_88;
        uVar4 = (uint)local_88[3];
        local_c8 = (uVar6 + uVar4) - 1;
        lVar18 = *plVar1;
        local_c0 = uVar20 * 0x30;
        puVar21 = (ulonglong *)(lVar18 + local_c0);
        local_e0 = local_88;
        uVar19 = uVar20;
        do {
          puVar21 = puVar21 + -6;
          if (*puVar21 <= uVar6) {
            iVar23 = (int)uVar19 + -1;
            goto LAB_146b77074;
          }
          bVar25 = 1 < uVar19;
          uVar19 = uVar19 - 1;
        } while (bVar25);
        iVar23 = 0;
LAB_146b77074:
        if (iVar23 < (int)uVar15) {
          uVar19 = (ulonglong)iVar23;
          lVar22 = uVar19 * 0x30 + 0x20;
          lVar24 = uVar19 * 0x30 + 0x58;
LAB_146b7709c:
          uVar19 = uVar19 + 1;
          uVar7 = *(ulonglong *)(lVar18 + -0x20 + lVar22);
          uVar5 = *(uint *)(lVar18 + -8 + lVar22);
          if ((uVar7 + uVar5) - 1 < uVar6) goto code_r0x000146b770b2;
          if (local_c8 < uVar7) {
            FUN_146b7804e(plVar1,local_88,iVar23);
          }
          else {
            if ((uVar5 < uVar4) || ((uVar4 == uVar5 && (uVar6 < uVar7)))) {
              local_b8 = *local_88;
              uStack_b0 = local_88[1];
              local_a8 = local_88[2];
              uStack_a0 = local_88[3];
              local_98 = local_88[4];
              local_90 = local_88[5];
              local_88[4] = 0;
              local_88[5] = 0;
              lVar18 = *(longlong *)(lVar16 + 8);
              puVar2 = (undefined4 *)(lVar18 + -0x20 + lVar22);
              uVar8 = *puVar2;
              uVar9 = puVar2[1];
              uVar10 = puVar2[2];
              uVar11 = puVar2[3];
              puVar2 = (undefined4 *)(lVar18 + -0x10 + lVar22);
              uVar12 = puVar2[1];
              uVar13 = puVar2[2];
              uVar14 = puVar2[3];
              *(undefined4 *)(local_88 + 2) = *puVar2;
              *(undefined4 *)((longlong)local_88 + 0x14) = uVar12;
              *(undefined4 *)(local_88 + 3) = uVar13;
              *(undefined4 *)((longlong)local_88 + 0x1c) = uVar14;
              *(undefined4 *)local_88 = uVar8;
              *(undefined4 *)((longlong)local_88 + 4) = uVar9;
              *(undefined4 *)(local_88 + 1) = uVar10;
              *(undefined4 *)((longlong)local_88 + 0xc) = uVar11;
              FUN_146b46bca(local_88 + 4,lVar18 + lVar22);
              lVar18 = *(longlong *)(lVar16 + 8);
              puVar2 = (undefined4 *)(lVar18 + -0x20 + lVar22);
              *puVar2 = (undefined4)local_b8;
              puVar2[1] = local_b8._4_4_;
              puVar2[2] = (undefined4)uStack_b0;
              puVar2[3] = uStack_b0._4_4_;
              puVar2 = (undefined4 *)(lVar18 + -0x10 + lVar22);
              *puVar2 = (undefined4)local_a8;
              puVar2[1] = local_a8._4_4_;
              puVar2[2] = (undefined4)uStack_a0;
              puVar2[3] = uStack_a0._4_4_;
              FUN_146b46bca(lVar18 + lVar22,&local_98);
              if (iVar23 + 1 < *(int *)(lVar16 + 0x10)) {
                do {
                  uVar20 = uStack_80;
                  lVar18 = *plVar1;
                  lVar22 = (longlong)(int)uStack_80;
                  uVar15 = (int)uStack_80 + 1;
                  uStack_80 = CONCAT44(uStack_80._4_4_,uVar15);
                  if (uStack_80._4_4_ < uVar15) {
                    FUN_146b786fc(&local_88,uVar20 & 0xffffffff);
                  }
                  puVar21 = (ulonglong *)(lVar24 + lVar18);
                  uVar6 = puVar21[-5];
                  uVar8 = *(undefined4 *)((longlong)puVar21 + -0x24);
                  uVar7 = puVar21[-4];
                  uVar9 = *(undefined4 *)((longlong)puVar21 + -0x1c);
                  uVar20 = puVar21[-2];
                  local_88[lVar22 * 6 + 2] = puVar21[-3];
                  (local_88 + lVar22 * 6 + 2)[1] = uVar20;
                  puVar3 = local_88 + lVar22 * 6;
                  *(int *)puVar3 = (int)uVar6;
                  *(undefined4 *)((longlong)puVar3 + 4) = uVar8;
                  *(int *)(puVar3 + 1) = (int)uVar7;
                  *(undefined4 *)((longlong)puVar3 + 0xc) = uVar9;
                  local_88[lVar22 * 6 + 4] = puVar21[-1];
                  local_88[lVar22 * 6 + 5] = *puVar21;
                  puVar21[-1] = 0;
                  *puVar21 = 0;
                  uVar19 = uVar19 + 1;
                  lVar24 = lVar24 + 0x30;
                } while ((longlong)uVar19 < (longlong)*(int *)(lVar16 + 0x10));
              }
              FUN_146b77f54(plVar1,iVar23 + 1);
              FUN_146b77f9c(&local_88,local_d8);
              while (local_98 != 0) {
                local_90 = *(ulonglong *)(local_98 + 0x18);
                FUN_1400020a8();
                local_98 = local_90;
              }
              goto LAB_146b77049;
            }
            iVar23 = *(int *)(lVar17 + 0x10);
            *(uint *)(lVar17 + 0x10) = iVar23 + 1U;
            if (*(uint *)(lVar17 + 0x14) < iVar23 + 1U) {
              FUN_146b786fc(local_d8,iVar23);
            }
            lVar18 = *local_d8;
            lVar22 = (longlong)iVar23 * 0x30;
            uVar6 = *local_e0;
            uVar8 = *(undefined4 *)((longlong)local_e0 + 4);
            uVar19 = local_e0[1];
            uVar9 = *(undefined4 *)((longlong)local_e0 + 0xc);
            uVar20 = local_e0[3];
            puVar21 = (ulonglong *)(lVar18 + 0x10 + lVar22);
            *puVar21 = local_e0[2];
            puVar21[1] = uVar20;
            puVar2 = (undefined4 *)(lVar18 + lVar22);
            *puVar2 = (int)uVar6;
            puVar2[1] = uVar8;
            puVar2[2] = (int)uVar19;
            puVar2[3] = uVar9;
            *(ulonglong *)(lVar18 + 0x20 + lVar22) = local_e0[4];
            *(ulonglong *)(lVar18 + 0x28 + lVar22) = local_e0[5];
            local_e0[4] = 0;
            local_e0[5] = 0;
          }
          goto LAB_146b7703c;
        }
LAB_146b770cd:
        *(uint *)(lVar16 + 0x10) = uVar15 + 1;
        if (*(uint *)(lVar16 + 0x14) <= uVar15) {
          FUN_146b786fc(plVar1,uVar15);
          lVar18 = *plVar1;
        }
        uVar6 = *local_e0;
        uVar8 = *(undefined4 *)((longlong)local_e0 + 4);
        uVar19 = local_e0[1];
        uVar9 = *(undefined4 *)((longlong)local_e0 + 0xc);
        uVar20 = local_e0[3];
        puVar21 = (ulonglong *)(lVar18 + 0x10 + local_c0);
        *puVar21 = local_e0[2];
        puVar21[1] = uVar20;
        puVar2 = (undefined4 *)(lVar18 + local_c0);
        *puVar2 = (int)uVar6;
        puVar2[1] = uVar8;
        puVar2[2] = (int)uVar19;
        puVar2[3] = uVar9;
        *(ulonglong *)(lVar18 + 0x20 + local_c0) = local_e0[4];
        *(ulonglong *)(lVar18 + 0x28 + local_c0) = local_e0[5];
        local_e0[4] = 0;
        local_e0[5] = 0;
      }
LAB_146b7703c:
      FUN_146b78002(&local_88);
LAB_146b77049:
      FUN_146b788a4(local_88,uStack_80 & 0xffffffff);
      param_4 = local_d0;
    } while (0 < (int)uStack_80);
  }
  FUN_146b502e3(local_88);
  if (local_88 != (ulonglong *)0x0) {
    FUN_1400020a8();
  }
  FUN_146b30b8c(param_4);
  if ((local_70 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000146b770b2:
  lVar22 = lVar22 + 0x30;
  iVar23 = iVar23 + 1;
  lVar24 = lVar24 + 0x30;
  if (uVar19 == uVar20) goto LAB_146b770cd;
  goto LAB_146b7709c;
}



// FUNCTION 146b773c4 FUN_146b773c4 body=651 status=ok
// SIG undefined FUN_146b773c4(void)

void FUN_146b773c4(longlong param_1,uint param_2,ulonglong param_3)

{
  ulonglong *_Dst;
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint *puVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong *puVar12;
  
  FUN_146b77c4a();
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar2 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x48);
    }
    iVar8 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 8) + (longlong)iVar8 * 0x20;
        if (*(uint *)(*(longlong *)(param_1 + 8) + (longlong)iVar8 * 0x20) == param_2)
        goto LAB_146b77406;
        iVar8 = *(int *)(lVar2 + 0x18);
      } while (iVar8 != -1);
    }
  }
  lVar2 = 0;
LAB_146b77406:
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    lVar4 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x98);
    }
    iVar8 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0xa0) - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x58) + (longlong)iVar8 * 0x20;
        if (*(uint *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar8 * 0x20) == param_2)
        goto LAB_146b7743f;
        iVar8 = *(int *)(lVar4 + 0x18);
      } while (iVar8 != -1);
    }
  }
  lVar4 = 0;
LAB_146b7743f:
  if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
    lVar5 = param_1 + 0xe0;
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      lVar5 = *(longlong *)(param_1 + 0xe8);
    }
    iVar8 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0xf0) - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        lVar5 = *(longlong *)(param_1 + 0xa8) + (longlong)iVar8 * 0x10;
        if (*(uint *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar8 * 0x10) == param_2)
        goto LAB_146b7747a;
        iVar8 = *(int *)(lVar5 + 8);
      } while (iVar8 != -1);
    }
  }
  lVar5 = 0;
LAB_146b7747a:
  if (*(int *)(param_1 + 0x100) != *(int *)(param_1 + 300)) {
    lVar6 = param_1 + 0x130;
    if (*(longlong *)(param_1 + 0x138) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x138);
    }
    uVar10 = *(uint *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x140) - 1U & param_2) * 4);
    if (uVar10 != 0xffffffff) {
      do {
        puVar7 = (uint *)(*(longlong *)(param_1 + 0xf8) + (longlong)(int)uVar10 * 0x18);
        if (*puVar7 == param_2) goto LAB_146b774ba;
        uVar10 = puVar7[4];
      } while (uVar10 != 0xffffffff);
    }
  }
  puVar7 = (uint *)0x0;
LAB_146b774ba:
  *(ulonglong *)(puVar7 + 2) = param_3;
  iVar8 = *(int *)(lVar5 + 4);
  if (iVar8 + 1 < *(int *)(lVar2 + 0x10)) {
    lVar6 = (longlong)iVar8 + 1;
    lVar11 = (longlong)iVar8 * 0x30 + 0x48;
    do {
      uVar9 = *(ulonglong *)(*(longlong *)(lVar2 + 8) + -0x18 + lVar11);
      if (param_3 <= uVar9) break;
      if (param_3 <= (*(uint *)(*(longlong *)(lVar2 + 8) + lVar11) + uVar9) - 1) {
        *(ulonglong *)(puVar7 + 2) = uVar9;
        break;
      }
      *(int *)(lVar5 + 4) = (int)lVar6;
      lVar6 = lVar6 + 1;
      lVar11 = lVar11 + 0x30;
    } while (lVar6 < *(int *)(lVar2 + 0x10));
  }
  FUN_146b78f34(*(undefined8 *)(lVar4 + 8),*(undefined4 *)(lVar4 + 0x10));
  uVar10 = *(uint *)(lVar4 + 0x10);
  if (0 < (int)uVar10) {
    _Dst = *(ulonglong **)(lVar4 + 8);
    if (*_Dst < *(ulonglong *)(puVar7 + 2)) {
      uVar9 = 0;
      puVar12 = _Dst;
      do {
        puVar12 = puVar12 + 6;
        if ((ulonglong)uVar10 - 1 == uVar9) {
          uVar9 = (ulonglong)uVar10;
          break;
        }
        uVar9 = uVar9 + 1;
      } while (*puVar12 < *(ulonglong *)(puVar7 + 2));
      iVar8 = (int)uVar9;
      if (iVar8 != 0) {
        FUN_146b502e3(_Dst,uVar9 & 0xffffffff);
        iVar1 = *(int *)(lVar4 + 0x10) - iVar8;
        iVar3 = iVar8;
        if (iVar1 != 0) {
          memmove(_Dst,_Dst + (longlong)iVar8 * 6,(longlong)iVar1 * 0x30);
          iVar3 = *(int *)(lVar4 + 0x10);
        }
        *(int *)(lVar4 + 0x10) = iVar3 - iVar8;
      }
    }
  }
  return;
}



// FUNCTION 146b77650 FUN_146b77650 body=913 status=ok
// SIG undefined FUN_146b77650(void)

longlong * FUN_146b77650(longlong param_1,longlong *param_2,uint param_3,longlong *param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *_Dst;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint *puVar11;
  longlong lVar12;
  uint *puVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  uint *local_a0;
  longlong local_98;
  longlong *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_146b77c4a(param_1,param_3);
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar6 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x48);
    }
    iVar14 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & param_3) * 4);
    if (iVar14 != -1) {
      do {
        lVar6 = *(longlong *)(param_1 + 8) + (longlong)iVar14 * 0x20;
        if (*(uint *)(*(longlong *)(param_1 + 8) + (longlong)iVar14 * 0x20) == param_3)
        goto LAB_146b7769c;
        iVar14 = *(int *)(lVar6 + 0x18);
      } while (iVar14 != -1);
    }
  }
  lVar6 = 0;
LAB_146b7769c:
  if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
    lVar7 = param_1 + 0xe0;
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      lVar7 = *(longlong *)(param_1 + 0xe8);
    }
    iVar14 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0xf0) - 1U & param_3) * 4);
    if (iVar14 != -1) {
      do {
        local_a8 = *(longlong *)(param_1 + 0xa8) + (longlong)iVar14 * 0x10;
        if (*(uint *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar14 * 0x10) == param_3)
        goto LAB_146b776b3;
        iVar14 = *(int *)(local_a8 + 8);
      } while (iVar14 != -1);
    }
  }
  local_a8 = 0;
LAB_146b776b3:
  if (*(int *)(param_1 + 0x150) != *(int *)(param_1 + 0x17c)) {
    lVar7 = param_1 + 0x180;
    if (*(longlong *)(param_1 + 0x188) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x188);
    }
    uVar8 = *(uint *)(lVar7 + (ulonglong)(*(int *)(param_1 + 400) - 1U & param_3) * 4);
    if (uVar8 != 0xffffffff) {
      do {
        puVar13 = (uint *)(*(longlong *)(param_1 + 0x148) + (longlong)(int)uVar8 * 0x18);
        if (*puVar13 == param_3) goto LAB_146b776ca;
        uVar8 = puVar13[4];
      } while (uVar8 != 0xffffffff);
    }
  }
  puVar13 = (uint *)0x0;
LAB_146b776ca:
  if (*(int *)(param_1 + 0x100) != *(int *)(param_1 + 300)) {
    lVar7 = param_1 + 0x130;
    if (*(longlong *)(param_1 + 0x138) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x138);
    }
    uVar8 = *(uint *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x140) - 1U & param_3) * 4);
    if (uVar8 != 0xffffffff) {
      do {
        puVar11 = (uint *)(*(longlong *)(param_1 + 0xf8) + (longlong)(int)uVar8 * 0x18);
        if (*puVar11 == param_3) goto LAB_146b776e0;
        uVar8 = puVar11[4];
      } while (uVar8 != 0xffffffff);
    }
  }
  puVar11 = (uint *)0x0;
LAB_146b776e0:
  lVar7 = *(longlong *)(puVar11 + 2);
  lVar16 = *(longlong *)(puVar13 + 2);
  *param_2 = lVar16;
  param_2[1] = lVar7 - lVar16;
  iVar14 = *(int *)(local_a8 + 4);
  if (iVar14 < -1) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar14 + 1);
  }
  if (*(int *)((longlong)param_4 + 0xc) <= iVar14) {
    FUN_146b795c4(param_4);
    iVar14 = *(int *)(local_a8 + 4);
  }
  lVar7 = local_a8;
  lVar16 = lVar6;
  if (-1 < iVar14) {
    lVar12 = -1;
    lVar15 = 0x28;
    local_a0 = puVar13;
    local_98 = lVar6;
    local_90 = param_2;
    do {
      lVar16 = *(longlong *)(lVar6 + 8);
      puVar1 = (undefined4 *)(lVar16 + -0x28 + lVar15);
      local_88 = *puVar1;
      uStack_84 = puVar1[1];
      uStack_80 = puVar1[2];
      uStack_7c = puVar1[3];
      puVar1 = (undefined4 *)(lVar16 + -0x18 + lVar15);
      local_78 = *puVar1;
      uStack_74 = puVar1[1];
      uStack_70 = puVar1[2];
      uStack_6c = puVar1[3];
      uVar3 = *(undefined8 *)(lVar16 + -8 + lVar15);
      uVar4 = *(undefined8 *)(lVar16 + lVar15);
      puVar2 = (undefined8 *)(lVar16 + -8 + lVar15);
      *puVar2 = 0;
      puVar2[1] = 0;
      iVar14 = (int)param_4[1];
      *(uint *)(param_4 + 1) = iVar14 + 1U;
      if (*(uint *)((longlong)param_4 + 0xc) < iVar14 + 1U) {
        FUN_146b786fc(param_4,iVar14);
        lVar7 = local_a8;
      }
      lVar16 = *param_4;
      lVar10 = (longlong)iVar14 * 0x30;
      puVar2 = (undefined8 *)(lVar16 + 0x10 + lVar10);
      *puVar2 = CONCAT44(uStack_74,local_78);
      puVar2[1] = CONCAT44(uStack_6c,uStack_70);
      puVar1 = (undefined4 *)(lVar16 + lVar10);
      *puVar1 = local_88;
      puVar1[1] = uStack_84;
      puVar1[2] = uStack_80;
      puVar1[3] = uStack_7c;
      *(undefined8 *)(lVar16 + 0x20 + lVar10) = uVar3;
      *(undefined8 *)(lVar16 + 0x28 + lVar10) = uVar4;
      iVar14 = *(int *)(lVar7 + 4);
      lVar12 = lVar12 + 1;
      lVar15 = lVar15 + 0x30;
      param_2 = local_90;
      puVar13 = local_a0;
      lVar16 = local_98;
    } while (lVar12 < iVar14);
  }
  iVar14 = iVar14 + 1;
  if (iVar14 != 0) {
    _Dst = *(void **)(lVar16 + 8);
    FUN_146b502e3(_Dst,iVar14);
    iVar5 = *(int *)(lVar16 + 0x10) - iVar14;
    iVar9 = iVar14;
    if (iVar5 != 0) {
      memmove(_Dst,(void *)((longlong)iVar14 * 0x30 + (longlong)_Dst),(longlong)iVar5 * 0x30);
      iVar9 = *(int *)(lVar16 + 0x10);
    }
    *(int *)(lVar16 + 0x10) = iVar9 - iVar14;
    FUN_146b787f6((longlong *)(lVar6 + 8));
    lVar7 = local_a8;
  }
  *(undefined4 *)(lVar7 + 4) = 0xffffffff;
  *(undefined8 *)(puVar13 + 2) = *(undefined8 *)(puVar11 + 2);
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146b779e4 FUN_146b779e4 body=223 status=ok
// SIG undefined FUN_146b779e4(void)

void FUN_146b779e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f332a0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  FUN_146b484ec(param_1 + 0x29);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_146b484ec(param_1 + 0x1f);
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(param_1 + 0x15);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_146b77ac4(param_1 + 0xb);
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_146b77ac4(param_1 + 1);
  return;
}



// FUNCTION 146b77ac4 FUN_146b77ac4 body=52 status=ok
// SIG undefined FUN_146b77ac4(void)

void FUN_146b77ac4(longlong *param_1)

{
  FUN_146b77af8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b77af8 FUN_146b77af8 body=337 status=ok
// SIG undefined FUN_146b77af8(void)

void FUN_146b77af8(longlong *param_1)

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
      FUN_146b502e3(*(undefined8 *)(lVar2 + 8 + lVar3),*(undefined4 *)(lVar2 + 0x10 + lVar3));
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



// FUNCTION 146b77c4a FUN_146b77c4a body=777 status=ok
// SIG undefined FUN_146b77c4a(void)

void FUN_146b77c4a(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong uStack_40;
  uint local_34;
  uint *local_30;
  longlong *local_28;
  undefined1 local_1c [12];
  
  local_1c._4_8_ = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_34 = param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar1 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x48);
    }
    iVar2 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)(param_1 + 8);
      do {
        if (*(uint *)(lVar1 + (longlong)iVar2 * 0x20) == param_2) goto LAB_146b77cf4;
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + lVar1 + 0x18);
      } while (iVar2 != -1);
    }
  }
  local_28 = &local_48;
  local_48 = 0;
  uStack_40 = 0;
  local_30 = &local_34;
  FUN_146b780e8((longlong *)(param_1 + 8),local_1c);
  FUN_146b502e3(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
LAB_146b77cf4:
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    lVar1 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x98);
    }
    iVar2 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0xa0) - 1U & local_34) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)(param_1 + 0x58);
      do {
        if (*(uint *)(lVar1 + (longlong)iVar2 * 0x20) == local_34) goto LAB_146b77d8e;
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + lVar1 + 0x18);
      } while (iVar2 != -1);
    }
  }
  local_28 = &local_48;
  local_48 = 0;
  uStack_40 = 0;
  local_30 = &local_34;
  FUN_146b780e8((longlong *)(param_1 + 0x58),local_1c);
  FUN_146b502e3(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
LAB_146b77d8e:
  if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
    lVar1 = param_1 + 0xe0;
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      lVar1 = *(longlong *)(param_1 + 0xe8);
    }
    iVar2 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0xf0) - 1U & local_34) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)(param_1 + 0xa8);
      do {
        if (*(uint *)(lVar1 + (longlong)iVar2 * 0x10) == local_34) goto LAB_146b77dd2;
        iVar2 = *(int *)((longlong)iVar2 * 0x10 + lVar1 + 8);
      } while (iVar2 != -1);
    }
  }
  local_28 = (longlong *)local_1c;
  local_1c._0_4_ = 0xffffffff;
  local_30 = &local_34;
  FUN_140c0fbee((longlong *)(param_1 + 0xa8),&local_48,&local_30,0);
LAB_146b77dd2:
  if (*(int *)(param_1 + 0x100) != *(int *)(param_1 + 300)) {
    lVar1 = param_1 + 0x130;
    if (*(longlong *)(param_1 + 0x138) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x138);
    }
    iVar2 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x140) - 1U & local_34) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)(param_1 + 0xf8);
      do {
        if (*(uint *)(lVar1 + (longlong)iVar2 * 0x18) == local_34) goto LAB_146b77e5a;
        iVar2 = *(int *)(lVar1 + (longlong)iVar2 * 0x18 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_28 = &local_48;
  local_48 = 0;
  local_30 = &local_34;
  FUN_146b785cc((longlong *)(param_1 + 0xf8),local_1c);
LAB_146b77e5a:
  if (*(int *)(param_1 + 0x150) != *(int *)(param_1 + 0x17c)) {
    lVar1 = param_1 + 0x180;
    if (*(longlong *)(param_1 + 0x188) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x188);
    }
    iVar2 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 400) - 1U & local_34) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)(param_1 + 0x148);
      do {
        if (*(uint *)(lVar1 + (longlong)iVar2 * 0x18) == local_34) goto LAB_146b77ee0;
        iVar2 = *(int *)(lVar1 + (longlong)iVar2 * 0x18 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_28 = &local_48;
  local_48 = 0;
  local_30 = &local_34;
  FUN_146b785cc((longlong *)(param_1 + 0x148),local_1c);
LAB_146b77ee0:
  if ((local_1c._4_8_ ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b77f54 FUN_146b77f54 body=71 status=ok
// SIG undefined FUN_146b77f54(void)

void FUN_146b77f54(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146b786fc(param_1,iVar1);
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      FUN_146b78790();
      return;
    }
  }
  return;
}



// FUNCTION 146b77f9c FUN_146b77f9c body=101 status=ok
// SIG undefined FUN_146b77f9c(void)

void FUN_146b77f9c(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_146b786fc(param_1,iVar2);
    }
    memmove((void *)((longlong)iVar2 * 0x30 + *param_1),(void *)*param_2,(longlong)(int)uVar1 * 0x30
           );
    *(undefined4 *)(param_2 + 1) = 0;
  }
  return;
}



// FUNCTION 146b78002 FUN_146b78002 body=75 status=ok
// SIG undefined FUN_146b78002(void)

void FUN_146b78002(undefined8 *param_1)

{
  void *_Dst;
  int iVar1;
  
  _Dst = (void *)*param_1;
  FUN_146b30b8c((longlong)_Dst + 0x20);
  iVar1 = 0;
  if (*(int *)(param_1 + 1) + -1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x30),(longlong)(*(int *)(param_1 + 1) + -1) * 0x30);
    iVar1 = *(int *)(param_1 + 1) + -1;
  }
  *(int *)(param_1 + 1) = iVar1;
  FUN_146b787f6(param_1);
  return;
}



// FUNCTION 146b7804e FUN_146b7804e body=153 status=ok
// SIG undefined FUN_146b7804e(void)

int FUN_146b7804e(longlong *param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_146b786fc(param_1,iVar2);
  }
  lVar4 = (longlong)param_3 * 0x30;
  memmove((void *)(*param_1 + lVar4 + 0x30),(void *)(*param_1 + lVar4),
          (ulonglong)(uint)(iVar2 - param_3) * 0x30);
  lVar3 = *param_1;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  *(undefined8 *)(lVar3 + lVar4) = *param_2;
  ((undefined8 *)(lVar3 + lVar4))[1] = uVar5;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar4);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  *(undefined8 *)(lVar3 + 0x20 + lVar4) = param_2[4];
  *(undefined8 *)(lVar3 + 0x28 + lVar4) = param_2[5];
  param_2[4] = 0;
  param_2[5] = 0;
  return param_3;
}



// FUNCTION 146b780e8 FUN_146b780e8 body=310 status=ok
// SIG undefined FUN_146b780e8(void)

undefined4 * FUN_146b780e8(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
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
  FUN_146b78220(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  *local_40 = *(uint *)*param_3;
  *(undefined8 *)(local_40 + 2) = *puVar1;
  *puVar1 = 0;
  local_40[4] = *(uint *)(puVar1 + 1);
  local_40[5] = *(uint *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  local_40[6] = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  cVar3 = FUN_146b78306(param_1,uVar5,local_40,&local_4c);
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
      local_40[7] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[6] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_146b78424(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b78220 FUN_146b78220 body=229 status=ok
// SIG undefined FUN_146b78220(void)

int * FUN_146b78220(longlong *param_1,int *param_2)

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



// FUNCTION 146b78306 FUN_146b78306 body=172 status=ok
// SIG undefined FUN_146b78306(void)

undefined8 FUN_146b78306(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
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
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(int *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          FUN_146b502e3(*(undefined8 *)(piVar1 + 2),piVar1[4]);
          if (*(longlong *)(piVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *(undefined8 *)(piVar1 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_146b783b2(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 146b783b2 FUN_146b783b2 body=114 status=ok
// SIG undefined FUN_146b783b2(void)

void FUN_146b783b2(longlong *param_1,int param_2)

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



// FUNCTION 146b78424 FUN_146b78424 body=422 status=ok
// SIG undefined FUN_146b78424(void)

void FUN_146b78424(longlong *param_1)

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



// FUNCTION 146b785cc FUN_146b785cc body=302 status=ok
// SIG undefined FUN_146b785cc(void)

undefined4 * FUN_146b785cc(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146b4fc7e(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar4 = *(uint *)*param_3;
  *local_40 = uVar4;
  *(undefined8 *)(local_40 + 2) = *puVar1;
  local_40[4] = 0xffffffff;
  local_4c = local_48[0];
  local_58 = 0;
  cVar2 = FUN_146b4fd64(param_1,uVar4,local_40);
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
      local_40[5] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[4] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
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
      FUN_146b4fe82(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b786fc FUN_146b786fc body=147 status=ok
// SIG undefined FUN_146b786fc(void)

void FUN_146b786fc(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146b78790 FUN_146b78790 body=101 status=ok
// SIG undefined FUN_146b78790(void)

void FUN_146b78790(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x30 + *param_1);
  FUN_146b502e3(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x30 + (longlong)_Dst),(longlong)iVar2 * 0x30);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}


