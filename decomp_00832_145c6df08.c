// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145c6df08 FUN_145c6df08 body=922 status=ok
// SIG undefined FUN_145c6df08(void)

undefined8 * FUN_145c6df08(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14bb58940;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 2;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa2) = 0;
  *(undefined8 *)((longlong)param_1 + 0xaa) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb2) = 1;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x19));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x19),4000);
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x22) = 1;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0x80;
  *(undefined4 *)(param_1 + 0x29) = 0xffffffff;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined8 *)((longlong)param_1 + 0x244) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x24c) = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x55] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x56) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2dc) = 0;
  param_1[0x5c] = 0;
  *(undefined2 *)(param_1 + 0x5d) = 0;
  *(undefined1 *)(param_1 + 0x5b) = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 2;
  param_1[100] = 0;
  param_1[0x65] = 0;
  *(undefined8 *)((longlong)param_1 + 0x314) = 0;
  *(undefined8 *)((longlong)param_1 + 0x31c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x304) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30c) = 0;
  *(undefined1 *)(param_1 + 0x66) = 1;
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0;
  param_1[0x69] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  *(undefined8 *)((longlong)param_1 + 0x36c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x374) = 0;
  param_1[0x70] = 0;
  *(undefined4 *)(param_1 + 0x71) = 0;
  param_1[0x76] = 0;
  *(undefined4 *)(param_1 + 0x77) = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3bc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c4) = 0;
  param_1[0x7a] = 0;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  param_1[0x82] = 0;
  *(undefined4 *)(param_1 + 0x83) = 0;
  *(undefined4 *)(param_1 + 0x81) = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  *(undefined4 *)((longlong)param_1 + 0x41c) = 0xffffffff;
  param_1[0x86] = 0;
  param_1[0x87] = 0x8000000000;
  param_1[0x88] = 0xffffffff;
  param_1[0x8a] = 0;
  *(undefined4 *)(param_1 + 0x8b) = 0;
  param_1[0x93] = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined1 *)(param_1 + 0x8e) = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4a4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4ac) = 0;
  param_1[0x97] = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined1 *)(param_1 + 0x99) = 0;
  param_1[0x9f] = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  param_1[0x9c] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x504) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x50c) = 0;
  param_1[0xa3] = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined2 *)((longlong)param_1 + 0x52c) = 1;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa6));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xa6),4000);
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar1 = 0;
  *(undefined1 *)((longlong)puVar1 + 0xc) = 0;
  puVar1[2] = 0;
  param_1[0xb1] = puVar1;
  param_1[0xb0] = puVar1;
  param_1[0xb2] = 0;
  FUN_14150bb00(param_1,1);
  return param_1;
}



// FUNCTION 145c6e2a2 FUN_145c6e2a2 body=70 status=ok
// SIG undefined FUN_145c6e2a2(void)

void FUN_145c6e2a2(longlong param_1)

{
  FUN_14150c274(param_1 + 0xe8,L"Online.HttpManager",&DAT_14c872ce8);
  FUN_14150c034(param_1);
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145c6e2dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x58))();
    return;
  }
  return;
}



// FUNCTION 145c6e2e8 FUN_145c6e2e8 body=31 status=ok
// SIG undefined FUN_145c6e2e8(void)

void FUN_145c6e2e8(longlong *param_1)

{
  FUN_145c6e30a();
                    /* WARNING: Could not recover jumptable at 0x000145c6e300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1);
  return;
}



// FUNCTION 145c6e30a FUN_145c6e30a body=312 status=ok
// SIG undefined FUN_145c6e30a(void)

void FUN_145c6e30a(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined ***pppuVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined1 *local_90;
  longlong local_80;
  undefined1 local_78 [8];
  undefined1 local_70;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong *local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(**(code **)(*param_1 + 0xb0))();
  local_68[0] = (code *)0x0;
  local_58 = (undefined ***)0x0;
  (**(code **)(*plVar1 + 0x20))(plVar1,param_1 + 0x12,local_68);
  if (local_68[0] != (code *)0x0) {
    pppuVar3 = local_58;
    if (local_58 == (undefined ***)0x0) {
      pppuVar3 = &local_48;
    }
    (*(code *)(*pppuVar3)[2])();
  }
  local_70 = 0;
  lVar2 = FUN_141054386();
  auVar4._0_8_ = (double)*(float *)(lVar2 + 0x44) * 10000000.0 + 0.5;
  auVar4._8_8_ = 0;
  auVar4 = roundpd(auVar4,auVar4,1);
  local_58 = (undefined ***)0x0;
  local_48 = &PTR_LAB_149f2a680;
  local_68[0] = FUN_14291f814;
  local_98 = 1;
  local_90 = local_78;
  local_40 = param_1;
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_80,local_68,(longlong)auVar4._0_8_);
  param_1[0x12] = local_80;
  if (local_68[0] != (code *)0x0) {
    pppuVar3 = local_58;
    if (local_58 == (undefined ***)0x0) {
      pppuVar3 = &local_48;
    }
    (*(code *)(*pppuVar3)[2])();
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c6e444 FUN_145c6e444 body=67 status=ok
// SIG undefined FUN_145c6e444(void)

void FUN_145c6e444(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145c6e604(param_1);
    FUN_145c6e488(param_1,0);
    return;
  }
  FUN_145c6e488(param_1,0);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_14682082e(param_1);
  return;
}



// FUNCTION 145c6e488 FUN_145c6e488 body=378 status=ok
// SIG undefined FUN_145c6e488(void)

void FUN_145c6e488(longlong *param_1,int param_2)

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
      FUN_1468205a0((longlong)iStack_54 * 0x28 + *local_70);
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
    FUN_140549ad6(param_1,param_2);
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



// FUNCTION 145c6e604 FUN_145c6e604 body=335 status=ok
// SIG undefined FUN_145c6e604(void)

void FUN_145c6e604(longlong *param_1)

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



// FUNCTION 145c6e754 FUN_145c6e754 body=75 status=ok
// SIG undefined FUN_145c6e754(void)

undefined8 * FUN_145c6e754(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f22540;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_145c6e7a0(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c6e7a0 FUN_145c6e7a0 body=53 status=ok
// SIG undefined FUN_145c6e7a0(void)

void FUN_145c6e7a0(longlong *param_1)

{
  FUN_145c6e7d6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c6e7d6 FUN_145c6e7d6 body=88 status=ok
// SIG undefined FUN_145c6e7d6(void)

void FUN_145c6e7d6(longlong param_1)

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



// FUNCTION 145c6e834 FUN_145c6e834 body=103 status=ok
// SIG undefined FUN_145c6e834(void)

undefined4 FUN_145c6e834(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  undefined4 *puVar3;
  
  cVar2 = FUN_14019108b(*param_1);
  if (cVar2 != '\0') {
    uVar1 = *param_1;
    if (2 < (int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf]) {
      puVar3 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar3 = DAT_14ca96af8;
      }
      if (((uint)puVar3[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return CONCAT31((int3)((uint)~(&DAT_14ca814c8)[(ulonglong)uVar1 * 0xf] >> 8),
                        (~(&DAT_14ca814c8)[(ulonglong)uVar1 * 0xf] & 0x1400000) == 0);
      }
    }
  }
  return 0;
}



// FUNCTION 145c6e8a2 FUN_145c6e8a2 body=103 status=ok
// SIG undefined FUN_145c6e8a2(void)

undefined4 FUN_145c6e8a2(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  undefined4 *puVar3;
  
  cVar2 = FUN_14019108b(*param_1);
  if (cVar2 != '\0') {
    uVar1 = *param_1;
    if (2 < (int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf]) {
      puVar3 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar3 = DAT_14ca96af8;
      }
      if (((uint)puVar3[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        return CONCAT31((int3)((uint)~(&DAT_14ca814c8)[(ulonglong)uVar1 * 0xf] >> 8),
                        (~(&DAT_14ca814c8)[(ulonglong)uVar1 * 0xf] & 0x1400000) == 0);
      }
    }
  }
  return 0;
}



// FUNCTION 145c6e914 FUN_145c6e914 body=97 status=ok
// SIG undefined FUN_145c6e914(void)

undefined8 * FUN_145c6e914(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a6a8c90;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  return param_1;
}



// FUNCTION 145c6e980 FUN_145c6e980 body=97 status=ok
// SIG undefined FUN_145c6e980(void)

undefined8 * FUN_145c6e980(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a6c45a0;
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
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(byte *)((longlong)param_1 + 0x2c) = *(byte *)((longlong)param_1 + 0x2c) | 1;
  *(byte *)(param_1 + 0x16) = *(byte *)(param_1 + 0x16) | 1;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  return param_1;
}



// FUNCTION 145c6e9e1 FUN_145c6e9e1 body=76 status=ok
// SIG undefined FUN_145c6e9e1(void)

void FUN_145c6e9e1(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145c6ea2e(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a8cb710;
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
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  return;
}



// FUNCTION 145c6ea2e FUN_145c6ea2e body=32 status=ok
// SIG undefined FUN_145c6ea2e(void)

undefined8 * FUN_145c6ea2e(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a9bf8e0;
  return param_1;
}



// FUNCTION 145c6ea4e FUN_145c6ea4e body=112 status=ok
// SIG undefined FUN_145c6ea4e(void)

void FUN_145c6ea4e(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 5) {
      iVar5 = 4;
    }
    else {
      lVar4 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x4c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar5;
    FUN_145c6eabe(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 145c6eabe FUN_145c6eabe body=131 status=ok
// SIG undefined FUN_145c6eabe(void)

void FUN_145c6eabe(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,0x10);
  return;
}



// FUNCTION 145c6eb42 FUN_145c6eb42 body=64 status=ok
// SIG undefined FUN_145c6eb42(void)

void FUN_145c6eb42(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x48) = 0;
    if (*(longlong *)(lVar1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_148087ce0(lVar1);
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  return;
}



// FUNCTION 145c6eb82 FUN_145c6eb82 body=129 status=ok
// SIG undefined FUN_145c6eb82(void)

undefined * FUN_145c6eb82(code *param_1)

{
  undefined *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb37d00) {
    FUN_144b3d300(&DAT_14cb37d00);
    if (DAT_14cb37d00 == -1) {
      if (param_1 == (code *)0x0) {
        puVar1 = (undefined *)0x0;
      }
      else {
        puVar1 = &DAT_14cb37ca0;
        (*param_1)(&DAT_14cb37ca0);
      }
      DAT_14cb37cf8 = puVar1;
      atexit((_func_5014 *)&LAB_14390b2ae);
      _Init_thread_footer(&DAT_14cb37d00);
    }
  }
  return &DAT_14cb37ca0;
}



// FUNCTION 145c6ec04 FUN_145c6ec04 body=40 status=ok
// SIG undefined FUN_145c6ec04(void)

undefined8 FUN_145c6ec04(undefined8 param_1,int param_2)

{
  FUN_145c6ec2c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c6ec2c FUN_145c6ec2c body=68 status=ok
// SIG undefined FUN_145c6ec2c(void)

void FUN_145c6ec2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14af150a0;
  FUN_1447a1747(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_140e36c74(param_1);
  return;
}



// FUNCTION 145c6ec70 FUN_145c6ec70 body=40 status=ok
// SIG undefined FUN_145c6ec70(void)

undefined8 FUN_145c6ec70(undefined8 param_1,int param_2)

{
  FUN_145c6ec98();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c6ec98 FUN_145c6ec98 body=68 status=ok
// SIG undefined FUN_145c6ec98(void)

void FUN_145c6ec98(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b16a8d0;
  FUN_144760e21(param_1[0x72],*(undefined4 *)(param_1 + 0x73));
  if (param_1[0x72] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 145c6ece8 FUN_145c6ece8 body=581 status=ok
// SIG undefined FUN_145c6ece8(void)

undefined8 * FUN_145c6ece8(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b36d030;
  *(undefined4 *)(param_1 + 0x16) = 0x3005;
  param_1[0x17] = "damagedata";
  lVar5 = FUN_145c6ef2e();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
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
    FUN_1400bbfc4(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar2 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145c6edbf;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_145c6edbf:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar1 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar1 * 2);
    }
  }
  FUN_1400b22c2(local_58,"Damage.Datas");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c6ef2e FUN_145c6ef2e body=55 status=ok
// SIG undefined FUN_145c6ef2e(void)

void FUN_145c6ef2e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb56580 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb56580 = FUN_140002ddd(FUN_1464b7cd9,uVar1,L"DamageDef");
  }
  return;
}



// FUNCTION 145c6ef66 FUN_145c6ef66 body=55 status=ok
// SIG undefined FUN_145c6ef66(void)

void FUN_145c6ef66(longlong *param_1)

{
  FUN_14150c7c0(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c6ef9e FUN_145c6ef9e body=103 status=ok
// SIG undefined FUN_145c6ef9e(void)

ulonglong FUN_145c6ef9e(longlong param_1)

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
LAB_145c6efe8:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145c6efe8;
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



// FUNCTION 145c6f00b FUN_145c6f00b body=112 status=ok
// SIG undefined FUN_145c6f00b(void)

void FUN_145c6f00b(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145c6f07c(puVar1);
  *puVar1 = &PTR_FUN_14b726930;
  puVar1[6] = &PTR_FUN_14b726c68;
  puVar1[0x2b] = 0;
  puVar1[0x2c] = 0;
  *(undefined4 *)(puVar1 + 0x2d) = 2;
  *(undefined4 *)((longlong)puVar1 + 0x16c) = 0;
  *(undefined4 *)(puVar1 + 0x2e) = 0xffffffff;
  puVar1[0x2f] = 0;
  puVar1[0x30] = 0;
  puVar1[0x31] = 0;
  puVar1[0x32] = 0xffffffffffffffff;
  return;
}



// FUNCTION 145c6f07c FUN_145c6f07c body=212 status=ok
// SIG undefined FUN_145c6f07c(void)

undefined8 * FUN_145c6f07c(undefined8 *param_1)

{
  FUN_140bf9282();
  param_1[7] = 0;
  *param_1 = &PTR_FUN_14b4dc720;
  param_1[6] = &PTR_FUN_14b4dca58;
  param_1[8] = 0x4007fffffff;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
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
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  return param_1;
}



// FUNCTION 145c6f15a FUN_145c6f15a body=180 status=ok
// SIG undefined FUN_145c6f15a(void)

void FUN_145c6f15a(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b99b790;
  param_1[5] = &PTR_FUN_14b99b7b0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0xc) == '\x01') {
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  param_1[5] = &PTR_LAB_14b242fd0;
  plVar3 = (longlong *)param_1[7];
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
  *param_1 = &PTR_LAB_14b99b7d0;
  plVar3 = (longlong *)param_1[3];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[10];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145c6f202. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145c6f20e FUN_145c6f20e body=38 status=ok
// SIG undefined FUN_145c6f20e(void)

undefined8 FUN_145c6f20e(undefined8 param_1,int param_2)

{
  FUN_145c6f234();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c6f234 FUN_145c6f234 body=178 status=ok
// SIG undefined FUN_145c6f234(void)

void FUN_145c6f234(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b9da570;
  plVar3 = (longlong *)param_1[0x60];
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
  if (param_1[0x5d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x59] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_14b47ae80;
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  FUN_1410ecf08(param_1);
  return;
}



// FUNCTION 145c6f2e6 FUN_145c6f2e6 body=235 status=ok
// SIG undefined FUN_145c6f2e6(void)

ulonglong FUN_145c6f2e6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar4 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764910);
  (**(code **)(*(longlong *)*puVar4 + 0x78))
            ((longlong *)*puVar4,*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x18));
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))(*(longlong **)(param_1 + 0x10),&local_38);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
  }
  if (local_38 != 0) {
    FUN_145c6f3d2(local_38,*(undefined8 *)(param_1 + 0x30));
  }
  LOCK();
  *(undefined4 *)(param_1 + 0x18) = 1;
  UNLOCK();
  LOCK();
  uVar3 = *(uint *)(param_1 + 0x1c);
  *(uint *)(param_1 + 0x1c) = 1;
  uVar5 = (ulonglong)uVar3;
  UNLOCK();
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      uVar5 = (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        uVar5 = (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c6f3d2 FUN_145c6f3d2 body=139 status=ok
// SIG undefined FUN_145c6f3d2(void)

void FUN_145c6f3d2(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x330));
  if (0 < *(int *)(param_1 + 0x360)) {
    plVar1 = (longlong *)(param_1 + 0x358);
    lVar3 = 0;
    uVar4 = 0;
    do {
      cVar2 = (**(code **)**(undefined8 **)(*plVar1 + lVar3))
                        (*(undefined8 **)(*plVar1 + lVar3),param_2);
      if (cVar2 != '\0') {
        FUN_145c6f4f6(plVar1,uVar4 & 0xffffffff);
        FUN_145c6f45e(plVar1);
        break;
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x10;
    } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x360));
  }
                    /* WARNING: Could not recover jumptable at 0x000145c6f441. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x330));
  return;
}



// FUNCTION 145c6f45e FUN_145c6f45e body=62 status=ok
// SIG undefined FUN_145c6f45e(void)

void FUN_145c6f45e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145c6f49c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 145c6f49c FUN_145c6f49c body=89 status=ok
// SIG undefined FUN_145c6f49c(void)

ulonglong FUN_145c6f49c(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if ((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) == 0) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
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



// FUNCTION 145c6f4f6 FUN_145c6f4f6 body=122 status=ok
// SIG undefined FUN_145c6f4f6(void)

void FUN_145c6f4f6(longlong *param_1,uint param_2)

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



// FUNCTION 145c6f570 FUN_145c6f570 body=75 status=ok
// SIG undefined FUN_145c6f570(void)

undefined8 * FUN_145c6f570(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bab03f0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_145c6f5bc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c6f5bc FUN_145c6f5bc body=53 status=ok
// SIG undefined FUN_145c6f5bc(void)

void FUN_145c6f5bc(longlong *param_1)

{
  FUN_145c6f5f2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c6f5f2 FUN_145c6f5f2 body=88 status=ok
// SIG undefined FUN_145c6f5f2(void)

void FUN_145c6f5f2(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1490acf28(param_1);
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



// FUNCTION 145c6f64a FUN_145c6f64a body=40 status=ok
// SIG undefined FUN_145c6f64a(void)

undefined8 FUN_145c6f64a(undefined8 param_1,int param_2)

{
  FUN_145c6f672();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c6f672 FUN_145c6f672 body=68 status=ok
// SIG undefined FUN_145c6f672(void)

void FUN_145c6f672(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc5a7e0;
  FUN_144760e21(param_1[0x72],*(undefined4 *)(param_1 + 0x73));
  if (param_1[0x72] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 145c6f6b6 FUN_145c6f6b6 body=40 status=ok
// SIG undefined FUN_145c6f6b6(void)

undefined8 FUN_145c6f6b6(undefined8 param_1,int param_2)

{
  FUN_145c6f6de();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c6f6de FUN_145c6f6de body=68 status=ok
// SIG undefined FUN_145c6f6de(void)

void FUN_145c6f6de(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bd83b40;
  FUN_1447a1747(param_1[0x19],*(undefined4 *)(param_1 + 0x1a));
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_140e36c74(param_1);
  return;
}



// FUNCTION 145c6f722 FUN_145c6f722 body=40 status=ok
// SIG undefined FUN_145c6f722(void)

undefined8 FUN_145c6f722(undefined8 param_1,int param_2)

{
  FUN_145c6f74a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c6f74a FUN_145c6f74a body=68 status=ok
// SIG undefined FUN_145c6f74a(void)

void FUN_145c6f74a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bd84110;
  FUN_1447a1747(param_1[0x17],*(undefined4 *)(param_1 + 0x18));
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_140e36c74(param_1);
  return;
}



// FUNCTION 145c6f796 FUN_145c6f796 body=100 status=ok
// SIG undefined FUN_145c6f796(void)

undefined8 * FUN_145c6f796(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14bec9f00;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x44) = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5c) = 0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0xc) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0xd) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar3;
  param_1[0xe] = DAT_14c8464f0;
  FUN_144757f48(param_1,8);
  return param_1;
}



// FUNCTION 145c6f7fa FUN_145c6f7fa body=221 status=ok
// SIG undefined FUN_145c6f7fa(void)

void FUN_145c6f7fa(void)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140457ffc(&DAT_14c8687d0,&DAT_14cb1b430);
  FUN_145c6f9bc(&DAT_14cb1b430);
  lVar1 = DAT_14cb1ceb0;
  if (DAT_14cb1ceb0 != 0) {
    FUN_145c6f8fe(DAT_14cb1ceb0 + 8);
    FUN_1400020a8(lVar1);
    DAT_14cb1ceb0 = 0;
  }
  if (DAT_14cb1cde8 != (undefined8 *)0x0) {
    plVar2 = (longlong *)FUN_1448c2e86();
    puVar3 = DAT_14cb1cde8 + 1;
    if (DAT_14cb1cde8 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
    }
    FUN_1446ddc76(&local_28,"HavokAI",1);
    (**(code **)(*plVar2 + 0x30))(plVar2,local_28,puVar3);
    if (DAT_14cb1cde8 != (undefined8 *)0x0) {
      (**(code **)*DAT_14cb1cde8)(DAT_14cb1cde8,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c6f8d8 FUN_145c6f8d8 body=38 status=ok
// SIG undefined FUN_145c6f8d8(void)

undefined8 FUN_145c6f8d8(undefined8 param_1,int param_2)

{
  FUN_145c6f93e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c6f8fe FUN_145c6f8fe body=63 status=ok
// SIG undefined FUN_145c6f8fe(void)

void FUN_145c6f8fe(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_14581f4ca();
  plVar3 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x000145c6f939. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145c6f93e FUN_145c6f93e body=76 status=ok
// SIG undefined FUN_145c6f93e(void)

void FUN_145c6f93e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aba2be0;
  if (param_1[2] != 0) {
    FUN_14480f766(&DAT_14c872cf8);
  }
  FUN_145c6f98a(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c6f98a FUN_145c6f98a body=49 status=ok
// SIG undefined FUN_145c6f98a(void)

void FUN_145c6f98a(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = 0;
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + 1;
    } while (param_2 != (int)lVar1);
  }
  return;
}



// FUNCTION 145c6f9bc FUN_145c6f9bc body=93 status=ok
// SIG undefined FUN_145c6f9bc(void)

void FUN_145c6f9bc(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x18);
    lVar3 = 0;
    do {
      (**(code **)(lVar2 + lVar3))();
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) < 0) {
    FUN_147e2cc26(param_1 + 0x18,0);
    return;
  }
  return;
}



// FUNCTION 145c6fa22 FUN_145c6fa22 body=300 status=ok
// SIG undefined FUN_145c6fa22(void)

undefined8 * FUN_145c6fa22(undefined8 *param_1)

{
  FUN_140e48d86();
  *param_1 = &PTR_FUN_14ac3c610;
  FUN_140785382(param_1 + 0x10,10);
  *(undefined2 *)(param_1 + 0x17) = 0;
  FUN_140803772(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x87) = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0x44bb8000447a0000;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  FUN_14150d5fe(param_1 + 0x93);
  *(undefined2 *)(param_1 + 0xad) = 0;
  param_1[0xae] = 0x44bb800044bb8000;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  FUN_14150d5fe(param_1 + 0xb7);
  *(undefined2 *)(param_1 + 0xd1) = 0;
  param_1[0xd2] = 0x44bb800044bb8000;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  FUN_14150d5fe(param_1 + 0xdb);
  *(undefined2 *)(param_1 + 0xf5) = 0;
  *(undefined2 *)(param_1 + 0xf6) = 2;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  return param_1;
}



// FUNCTION 145c6fb4e FUN_145c6fb4e body=78 status=ok
// SIG undefined FUN_145c6fb4e(void)

void FUN_145c6fb4e(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 8) = 0;
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x000145c6fb92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145c6fb9c FUN_145c6fb9c body=38 status=ok
// SIG undefined FUN_145c6fb9c(void)

undefined8 FUN_145c6fb9c(undefined8 param_1,int param_2)

{
  FUN_145c6fbc2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c6fbc2 FUN_145c6fbc2 body=176 status=ok
// SIG undefined FUN_145c6fbc2(void)

void FUN_145c6fbc2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4cdca0;
  if (param_1[0xe] != 0) {
    FUN_14480f766(&DAT_14cb8e380);
  }
  *(undefined4 *)(param_1 + 0x22) = 0;
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  FUN_145c6fc72(param_1 + 0x19);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_145983486(param_1 + 0xf);
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_140ea1a4e(param_1 + 4);
  FUN_1449db362(param_1 + 2);
  return;
}



// FUNCTION 145c6fc72 FUN_145c6fc72 body=53 status=ok
// SIG undefined FUN_145c6fc72(void)

void FUN_145c6fc72(longlong *param_1)

{
  FUN_145c6fca8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c6fca8 FUN_145c6fca8 body=88 status=ok
// SIG undefined FUN_145c6fca8(void)

void FUN_145c6fca8(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1401ad22e(param_1,0);
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



// FUNCTION 145c6fe1e FUN_145c6fe1e body=264 status=ok
// SIG undefined FUN_145c6fe1e(void)

undefined8 FUN_145c6fe1e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  FUN_145c6ff46(&local_48,1);
  uVar5 = uStack_40;
  lVar7 = (longlong)(int)uStack_40;
  uVar6 = (int)uStack_40 + 1;
  uStack_40 = CONCAT44(uStack_40._4_4_,uVar6);
  if (uStack_40._4_4_ < uVar6) {
    FUN_140188694(&local_48,uVar5 & 0xffffffff);
  }
  lVar7 = lVar7 * 0x20;
  uVar3 = *param_3;
  *(undefined4 *)(local_48 + lVar7) = 1;
  *(undefined8 *)(local_48 + 0x10 + lVar7) = 0;
  *(undefined4 *)(local_48 + 0x18 + lVar7) = 0;
  *(undefined8 *)(local_48 + 8 + lVar7) = uVar3;
  FUN_145c6ff28(param_1,param_2,&local_48);
  FUN_14007f2db(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  plVar4 = *(longlong **)(param_2 + 8);
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
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c6ff28 FUN_145c6ff28 body=30 status=ok
// SIG undefined FUN_145c6ff28(void)

undefined8 FUN_145c6ff28(undefined8 param_1)

{
  FUN_14010c062();
  return param_1;
}



// FUNCTION 145c6ff46 FUN_145c6ff46 body=96 status=ok
// SIG undefined FUN_145c6ff46(void)

void FUN_145c6ff46(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 5,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 145c6ffa6 FUN_145c6ffa6 body=191 status=ok
// SIG undefined FUN_145c6ffa6(void)

void FUN_145c6ffa6(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 *local_38;
  undefined8 *puStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = (undefined8 *)0x0;
  puStack_30 = (undefined8 *)0x0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_28 = 0;
  FUN_145c70066(param_1 + 0xe0,&local_58);
  if (puStack_30 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puStack_30 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puStack_30)(puStack_30,1);
    }
  }
  if (local_38 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_38 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_38)(local_38,1);
    }
  }
  puVar2 = *(undefined8 **)(param_1 + 0x118);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x118) = 0;
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c70066 FUN_145c70066 body=133 status=ok
// SIG undefined FUN_145c70066(void)

undefined4 * FUN_145c70066(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_2[5];
  uVar8 = param_2[6];
  uVar9 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar7;
  param_1[6] = uVar8;
  param_1[7] = uVar9;
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  if (param_1 != param_2) {
    puVar2 = *(undefined8 **)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_2 + 8) = 0;
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    puVar2 = *(undefined8 **)(param_1 + 10);
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_2 + 10) = 0;
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
  }
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  return param_1;
}



// FUNCTION 145c700ec FUN_145c700ec body=147 status=ok
// SIG undefined FUN_145c700ec(void)

void FUN_145c700ec(longlong param_1)

{
  char cVar1;
  undefined1 auStack_58 [32];
  longlong *local_38 [2];
  longlong *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_144a5dc74(local_38);
    FUN_144a5dc74(local_28);
    cVar1 = FUN_145c70191(local_38);
    if (cVar1 != '\0') {
      FUN_145c70180(*(undefined8 *)(param_1 + 0x110),local_38);
    }
    if (local_28[0] != (longlong *)0x0) {
      (**(code **)(*local_28[0] + 0x10))();
    }
    if (local_38[0] != (longlong *)0x0) {
      (**(code **)(*local_38[0] + 0x10))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c70180 FUN_145c70180 body=17 status=ok
// SIG undefined FUN_145c70180(void)

void FUN_145c70180(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [40];
  longlong *plStack_70;
  undefined4 uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  longlong *plStack_48;
  undefined4 uStack_40;
  undefined1 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  ulonglong uStack_20;
  
  lVar1 = *(longlong *)(param_1 + 0x2d8);
  if (lVar1 == 0) {
    return;
  }
  uStack_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = *(longlong *)(lVar1 + 0x288);
  if (lVar2 != 0) {
    plStack_48 = (longlong *)*param_2;
    if (plStack_48 != (longlong *)0x0) {
      (**(code **)(*plStack_48 + 8))();
    }
    uStack_40 = (undefined4)param_2[1];
    uStack_38 = 1;
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_140a5cace(lVar2);
  }
  lVar1 = *(longlong *)(lVar1 + 0x298);
  if (lVar1 != 0) {
    plStack_70 = (longlong *)param_2[2];
    if (plStack_70 != (longlong *)0x0) {
      (**(code **)(*plStack_70 + 8))();
    }
    uStack_68 = (undefined4)param_2[3];
    uStack_60 = 1;
    uStack_58 = 0;
    uStack_50 = 0;
    FUN_140a5cace(lVar1);
  }
  if ((uStack_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c70191 FUN_145c70191 body=99 status=ok
// SIG undefined FUN_145c70191(void)

bool FUN_145c70191(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_1402735c8();
  iVar2 = DAT_14cbe4538;
  iVar1 = *(int *)(lVar3 + 0x1c0);
  if (DAT_14cbe4538 < iVar1) {
    lVar3 = FUN_1402735c8();
    lVar4 = (longlong)DAT_14cbe4538;
    DAT_14cbe4538 = DAT_14cbe4538 + 1;
    FUN_145c701f4(param_1,lVar4 * 0x20 + *(longlong *)(lVar3 + 0x1b8));
    DAT_14cbe4538 = DAT_14cbe4538 % iVar1;
  }
  return iVar2 < iVar1;
}



// FUNCTION 145c701f4 FUN_145c701f4 body=117 status=ok
// SIG undefined FUN_145c701f4(void)

longlong * FUN_145c701f4(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_2;
  plVar2 = (longlong *)*param_1;
  if (plVar2 != plVar1) {
    *param_1 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  plVar1 = (longlong *)param_2[2];
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != plVar1) {
    param_1[2] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 3) = (int)param_2[3];
  return param_1;
}



// FUNCTION 145c7026a FUN_145c7026a body=187 status=ok
// SIG undefined FUN_145c7026a(void)

void FUN_145c7026a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined4 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined4 local_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    local_48 = (longlong *)*param_2;
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 8))();
    }
    local_40 = (undefined4)param_2[1];
    local_38 = 1;
    local_30 = 0;
    uStack_28 = 0;
    FUN_140a5cace(lVar1);
  }
  lVar1 = *(longlong *)(param_1 + 0x298);
  if (lVar1 != 0) {
    local_70 = (longlong *)param_2[2];
    if (local_70 != (longlong *)0x0) {
      (**(code **)(*local_70 + 8))();
    }
    local_68 = (undefined4)param_2[3];
    local_60 = 1;
    local_58 = 0;
    uStack_50 = 0;
    FUN_140a5cace(lVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c70326 FUN_145c70326 body=284 status=ok
// SIG undefined FUN_145c70326(void)

undefined4 * FUN_145c70326(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  byte *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145c704ce(param_1,local_48);
  puVar2 = (undefined4 *)param_3[1];
  bVar1 = *(byte *)*param_3;
  *local_40 = bVar1;
  uVar3 = puVar2[1];
  uVar4 = puVar2[2];
  uVar5 = puVar2[3];
  *(undefined4 *)(local_40 + 8) = *puVar2;
  *(undefined4 *)(local_40 + 0xc) = uVar3;
  *(undefined4 *)(local_40 + 0x10) = uVar4;
  *(undefined4 *)(local_40 + 0x14) = uVar5;
  local_40[0x18] = 0xff;
  local_40[0x19] = 0xff;
  local_40[0x1a] = 0xff;
  local_40[0x1b] = 0xff;
  local_4c = local_48[0];
  cVar6 = FUN_145c70444(param_1,bVar1,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar6 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar10 = 1;
    if (3 < uVar8) {
      uVar7 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & (uint)bVar1;
      *(uint *)(local_40 + 0x1c) = uVar8;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x18) =
           *(undefined4 *)(lVar9 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar8) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar8) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_14150e28c(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c70444 FUN_145c70444 body=137 status=ok
// SIG undefined FUN_145c70444(void)

undefined8 FUN_145c70444(longlong *param_1,uint param_2,char *param_3,int *param_4)

{
  undefined4 *puVar1;
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
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(char *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          uVar2 = *(undefined4 *)param_3;
          uVar3 = *(undefined4 *)(param_3 + 4);
          uVar4 = *(undefined4 *)(param_3 + 8);
          uVar5 = *(undefined4 *)(param_3 + 0xc);
          *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_3 + 0x10);
          *puVar1 = uVar2;
          puVar1[1] = uVar3;
          puVar1[2] = uVar4;
          puVar1[3] = uVar5;
          FUN_146b222de(uVar2,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 145c704ce FUN_145c704ce body=239 status=ok
// SIG undefined FUN_145c704ce(void)

int * FUN_145c704ce(longlong *param_1,int *param_2)

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



// FUNCTION 145c705be FUN_145c705be body=241 status=ok
// SIG undefined FUN_145c705be(void)

void FUN_145c705be(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong in_stack_00000028;
  undefined1 auStack_138 [32];
  longlong local_118;
  undefined2 *local_110;
  undefined1 *local_108;
  undefined2 local_100;
  undefined2 local_fe;
  undefined2 local_fc;
  undefined2 local_fa;
  undefined1 local_f7;
  undefined4 local_f4;
  undefined1 local_f0;
  undefined2 local_ea;
  undefined1 local_e8 [24];
  undefined1 local_d0 [80];
  longlong local_80;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar1 = FUN_14009d2a0();
  lVar2 = FUN_14038fb82();
  local_100 = *(undefined2 *)(lVar1 + 0x4a);
  local_fe = *(undefined2 *)(lVar1 + 0x62);
  local_fc = *(undefined2 *)(lVar1 + 0x104);
  local_fa = *(undefined2 *)(lVar2 + 0xac);
  local_f7 = 0;
  local_f4 = 0x6ff;
  local_f0 = 0;
  local_ea = *(undefined2 *)(lVar1 + 0x11a);
  local_110 = &local_ea;
  local_108 = local_e8;
  FUN_145c706b0(&local_100,local_e8);
  local_118 = lVar2;
  FUN_14150e434(local_e8,in_stack_00000028 + 0x28,local_d0);
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c706b0 FUN_145c706b0 body=146 status=ok
// SIG undefined FUN_145c706b0(void)

undefined8 * FUN_145c706b0(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 2);
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[7] = 0x10000000000;
  param_2[0xc] = 0x10000000000;
  param_2[0x13] = 0x10000000000;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0x18] = 0x10000000000;
  FUN_145c70744(param_2,param_2 + 3);
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



// FUNCTION 145c70744 FUN_145c70744 body=166 status=ok
// SIG undefined FUN_145c70744(void)

void FUN_145c70744(undefined2 *param_1,undefined8 param_2)

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
  local_32 = param_1[1];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[3];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c707ec FUN_145c707ec body=179 status=ok
// SIG undefined FUN_145c707ec(void)

void FUN_145c707ec(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = param_1[9];
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (*(ulonglong *)(lVar2 + 0x10) < (ulonglong)param_1[10]) {
      uVar3 = param_1[10];
    }
    *(ulonglong *)(lVar2 + 0x10) = uVar3;
    LOCK();
    *(int *)(param_1[9] + 0x18) = *(int *)(param_1[9] + 0x18) + -1;
    UNLOCK();
    if ((int)param_1[0xb] == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1[9] + 8));
    }
  }
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[7] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[6] + 8));
    }
  }
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[4] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x000145c7087e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 145c708a0 FUN_145c708a0 body=465 status=ok
// SIG undefined FUN_145c708a0(void)

void FUN_145c708a0(longlong *param_1,undefined8 param_2,longlong param_3,ushort *param_4,
                  longlong *param_5)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_4 != (ushort *)0x0) &&
     (lVar2 = *param_1, *(int *)(lVar2 + 0xec8) != *(int *)(lVar2 + 0xef4))) {
    lVar5 = lVar2 + 0xef8;
    if (*(longlong *)(lVar2 + 0xf00) != 0) {
      lVar5 = *(longlong *)(lVar2 + 0xf00);
    }
    uVar4 = *(uint *)(lVar5 + (ulonglong)(*(int *)(lVar2 + 0xf08) - 1U & (uint)*param_4) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)(lVar2 + 0xec0) + (longlong)(int)uVar4 * 0x18);
        if (*puVar1 == (uint)*param_4) {
          if (puVar1 != (uint *)0xfffffffffffffffc && puVar1 != (uint *)0x0) {
            lVar2 = FUN_14479d2ce();
            if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(lVar2);
            }
            *param_5 = lVar2;
            *(char *)(param_5 + 1) = (char)puVar1[3];
            goto LAB_145c7094b;
          }
          break;
        }
        uVar4 = puVar1[4];
      } while (uVar4 != 0xffffffff);
    }
  }
  FUN_1400021e4(param_3 + 8,local_30);
  lVar2 = FUN_140dbb734(param_2,local_30);
  if (lVar2 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(longlong *)(lVar2 + 8);
    lVar3 = FUN_1446f4b16();
    if (*(ulonglong *)(lVar3 + 8) == 0) {
      bVar6 = lVar5 != 0;
      if (lVar5 != lVar3 && bVar6) {
        do {
          lVar5 = *(longlong *)(lVar5 + 0x30);
          bVar6 = lVar5 != 0;
          if (lVar5 == lVar3) break;
        } while (lVar5 != 0);
      }
    }
    else {
      bVar6 = (*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0;
    }
    lVar5 = 0;
    if (bVar6) {
      lVar5 = lVar2;
    }
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if (lVar5 != 0) {
    lVar2 = *(longlong *)(lVar5 + 0x70);
    if (DAT_14c950c29 == '\x01') {
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar2 = *(longlong *)(lVar5 + 0x70);
      }
    }
    *param_5 = lVar2;
    *(bool *)(param_5 + 1) = (*(uint *)(lVar5 + 0x38) >> 0x19 & 1) == 0;
  }
LAB_145c7094b:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c70a7a FUN_145c70a7a body=209 status=ok
// SIG undefined FUN_145c70a7a(void)

undefined8 * FUN_145c70a7a(undefined8 *param_1)

{
  FUN_14067215e();
  *param_1 = &PTR_FUN_14b2e2480;
  param_1[5] = &PTR_FUN_14b2e2ee0;
  param_1[6] = &PTR_LAB_14b2e2f20;
  param_1[0x55] = &PTR_FUN_14b2e2f70;
  param_1[0x56] = &PTR_FUN_14b2e2ff0;
  param_1[0x57] = &PTR_FUN_14b2e3000;
  param_1[0xc4] = &PTR_FUN_14b2e3030;
  param_1[0xff] = &PTR_FUN_14b2e3040;
  param_1[0x108] = &PTR_FUN_14b2e3050;
  param_1[0x109] = &PTR_FUN_14b2e30f0;
  param_1[0x12a] = 0;
  FUN_14112fbd2(param_1 + 299);
  param_1[0x178] = 0;
  param_1[0x179] = 0;
  param_1[0x17a] = 0;
  param_1[0x17b] = 0;
  param_1[0x17c] = 0;
  *(undefined4 *)(param_1 + 0x17d) = 0xffffffff;
  return param_1;
}



// FUNCTION 145c70b4c FUN_145c70b4c body=103 status=ok
// SIG undefined FUN_145c70b4c(void)

ulonglong FUN_145c70b4c(longlong param_1)

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
LAB_145c70b96:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145c70b96;
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



// FUNCTION 145c70bb4 FUN_145c70bb4 body=114 status=ok
// SIG undefined FUN_145c70bb4(void)

void FUN_145c70bb4(longlong param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  int iVar1;
  longlong lVar2;
  
  if (*param_4 == '\x01') {
    lVar2 = FUN_1414354ce();
    if (((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x1e0), lVar2 != 0)) &&
       (*(longlong *)(lVar2 + 0x68) != 0)) {
      iVar1 = FUN_140def96c(*(longlong *)(lVar2 + 0x68),param_2 + 0x18);
      if ((iVar1 == *(int *)(param_1 + 0x30)) && (*(longlong *)(lVar2 + 0x30) != 0)) {
        if (*(longlong *)(param_1 + 0x60) != 0) {
          FUN_14480f766(*(longlong *)(lVar2 + 0x30) + 0x40);
        }
        *(undefined8 *)(param_1 + 0x60) = 0;
        *(undefined1 *)(param_1 + 0x18) = 1;
      }
    }
  }
  return;
}



// FUNCTION 145c70c32 FUN_145c70c32 body=132 status=ok
// SIG undefined FUN_145c70c32(void)

undefined8 * FUN_145c70c32(undefined8 *param_1)

{
  FUN_145c70cb6();
  *param_1 = &PTR_FUN_14b5782a0;
  param_1[5] = &PTR_FUN_14b5785f0;
  param_1[0x52] = &PTR_LAB_14b578630;
  param_1[0x16f] = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  param_1[0x168] = 0;
  param_1[0x169] = 0;
  param_1[0x16a] = 0;
  param_1[0x16b] = 0;
  param_1[0x16c] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb8c) = 0;
  param_1[0x173] = 0;
  *(undefined4 *)(param_1 + 0x174) = 0;
  return param_1;
}



// FUNCTION 145c70cb6 FUN_145c70cb6 body=74 status=ok
// SIG undefined FUN_145c70cb6(void)

undefined8 * FUN_145c70cb6(undefined8 *param_1)

{
  FUN_145861f48();
  *param_1 = &PTR_FUN_14ae4f230;
  param_1[5] = &PTR_FUN_14ae4f580;
  param_1[0x52] = &PTR_LAB_14ae4f5c0;
  FUN_140e2f50a(param_1,0);
  *(undefined1 *)((longlong)param_1 + 0x194) = 1;
  return param_1;
}



// FUNCTION 145c70d0c FUN_145c70d0c body=170 status=ok
// SIG undefined FUN_145c70d0c(void)

undefined8 * FUN_145c70d0c(undefined8 *param_1)

{
  FUN_145c70db6();
  *param_1 = &PTR_FUN_14bd26fa0;
  param_1[6] = &DAT_10000003c;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 1;
  *(undefined4 *)((longlong)param_1 + 0x54) = 1;
  param_1[0xb] = 0x3ff0000000000000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  FUN_144a85b52(param_1 + 0x12,0);
  FUN_144a85b52(param_1 + 0x13,0);
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined1 *)((longlong)param_1 + 0xac) = 1;
  *(undefined4 *)(param_1 + 0x16) = 1;
  param_1[0x17] = 0x3ff0000000000000;
  return param_1;
}



// FUNCTION 145c70db6 FUN_145c70db6 body=36 status=ok
// SIG undefined FUN_145c70db6(void)

undefined8 * FUN_145c70db6(undefined8 *param_1)

{
  FUN_14587e7ec();
  *param_1 = &PTR_FUN_14a453d30;
  *(undefined1 *)(param_1 + 5) = 0;
  return param_1;
}



// FUNCTION 145c70dda FUN_145c70dda body=328 status=ok
// SIG undefined FUN_145c70dda(void)

undefined1 * FUN_145c70dda(undefined1 *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  FUN_140212f8e(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_3 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_3 + 0x1c);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  uVar1 = FUN_140c52150();
  uVar1 = FUN_14477b664(uVar1);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  lVar2 = FUN_140c52150();
  uVar1 = FUN_140c52150();
  FUN_1402d1bfa(&local_40,uVar1,param_2);
  if (*(longlong *)(param_1 + 0x18) != local_40) {
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  *(longlong *)(param_1 + 0x18) = local_40;
  lVar3 = FUN_140c52150();
  if (lVar2 != 0) {
    if (lVar3 == 0) {
      lVar3 = 0;
      goto LAB_145c70ea5;
    }
    if ((*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
        lVar3 + 0x30)) goto LAB_145c70ea5;
  }
  lVar3 = lVar2;
LAB_145c70ea5:
  if (*(longlong *)(param_1 + 0x20) != lVar3) {
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  uVar1 = FUN_14477b664(lVar3);
  lVar2 = FUN_14477b664(uVar1);
  *(longlong *)(param_1 + 0x20) = lVar2;
  if ((lVar2 != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
    *(undefined8 *)(param_1 + 0x28) = param_2;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_3 + 0x10);
  param_1[0x48] = 0;
  FUN_14150e7c8(param_1,param_3);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c70f24 FUN_145c70f24 body=89 status=ok
// SIG undefined FUN_145c70f24(void)

undefined4 * FUN_145c70f24(undefined4 *param_1,undefined4 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  iVar1 = *(int *)(param_3 + 1);
  uVar2 = *param_3;
  param_1[4] = iVar1;
  if (iVar1 == 0) {
    param_1[5] = 0;
  }
  else {
    FUN_140b856de(param_1 + 2,iVar1,0);
    FUN_140b8566a(*(undefined8 *)(param_1 + 2),uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 145c70f7e FUN_145c70f7e body=147 status=ok
// SIG undefined FUN_145c70f7e(void)

void FUN_145c70f7e(longlong param_1,int param_2)

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



// FUNCTION 145c71012 FUN_145c71012 body=33 status=ok
// SIG undefined FUN_145c71012(void)

void FUN_145c71012(longlong param_1)

{
  FUN_145c71034();
  FUN_145c7122c(param_1 + 0x120,param_1);
  return;
}



// FUNCTION 145c71034 FUN_145c71034 body=258 status=ok
// SIG undefined FUN_145c71034(void)

void FUN_145c71034(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145c71138();
  lVar2 = *(longlong *)(param_1 + 0xa8);
  if (lVar2 != 0) {
    lVar4 = FUN_144a2f878();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      FUN_14150ea58(lVar2 + 0x6c48,&local_30);
      if (local_30 != 0) {
        FUN_14485c47a(local_30 + 0x30,param_1);
        plVar3 = local_28;
        *(longlong *)(param_1 + 0x110) = local_30;
        plVar5 = *(longlong **)(param_1 + 0x118);
        if (plVar5 != local_28) {
          if (local_28 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)local_28 + 0xc) = *(int *)((longlong)local_28 + 0xc) + 1;
            UNLOCK();
            plVar5 = *(longlong **)(param_1 + 0x118);
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
          *(longlong **)(param_1 + 0x118) = plVar3;
        }
      }
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_28 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
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
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c71138 FUN_145c71138 body=82 status=ok
// SIG undefined FUN_145c71138(void)

void FUN_145c71138(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  FUN_14134c582();
  lVar3 = *(longlong *)(param_1 + 0xa8);
  if (lVar3 != 0) {
    uVar1 = FUN_144a7c80a();
    plVar2 = (longlong *)FUN_144718840(lVar3,uVar1);
    if (plVar2 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_145c7118a(lVar3 + 8,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 145c7118a FUN_145c7118a body=162 status=ok
// SIG undefined FUN_145c7118a(void)

void FUN_145c7118a(longlong *param_1,undefined8 param_2)

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
        goto LAB_145c71217;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145c71217:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145c7122c FUN_145c7122c body=336 status=ok
// SIG undefined FUN_145c7122c(void)

void FUN_145c7122c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 ***pppuVar6;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [40];
  undefined4 local_58;
  undefined8 **local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x120) = param_2;
  plVar1 = *(longlong **)(param_2 + 0xa8);
  if (plVar1 != (longlong *)0x0) {
    lVar5 = FUN_144a2f878();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
        lVar5 + 0x30)) {
      uVar3 = (**(code **)(*plVar1 + 0x700))(plVar1);
      *(undefined1 *)(param_1 + 0x128) = uVar3;
    }
  }
  lVar5 = FUN_1403ca43f();
  local_80[0] = 0;
  local_58 = 0;
  FUN_14575a19a(local_80,0);
  FUN_1448729ea(lVar5 + 0x298,local_50,local_80);
  uVar4 = FUN_14005fbd2(local_50,0);
  *(undefined4 *)(param_1 + 300) = uVar4;
  *(undefined1 *)(param_1 + 0x130) = 1;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
  if (pcVar2 != (code *)0x0) {
    pppuVar6 = local_50;
    if (0x18 < local_38) {
      pppuVar6 = (undefined8 ***)local_50[0];
    }
    (*pcVar2)(pppuVar6);
  }
  if (0x18 < local_38) {
    FUN_1400020a8(local_50[0]);
  }
  FUN_144a5ac3a(local_80);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c7137e FUN_145c7137e body=22 status=ok
// SIG undefined FUN_145c7137e(void)

undefined8 FUN_145c7137e(undefined8 param_1,undefined8 param_2)

{
  FUN_145c71394();
  return param_2;
}



// FUNCTION 145c71394 FUN_145c71394 body=141 status=ok
// SIG undefined FUN_145c71394(void)

int * FUN_145c71394(longlong *param_1,int *param_2)

{
  undefined8 *puVar1;
  byte *pbVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar4 = *(undefined8 *)(param_1[0x1d] + 0x248);
  iVar3 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
    FUN_1406ae28e(param_1,iVar3);
  }
  lVar5 = *param_1;
  lVar6 = (longlong)iVar3 * 0x78;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar6);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + lVar6) = 0;
  ((undefined8 *)(lVar5 + lVar6))[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + 0x28 + lVar6);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + 0x40 + lVar6) = uVar4;
  puVar1 = (undefined8 *)(lVar5 + 0x48 + lVar6);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined2 *)(lVar5 + 0x58 + lVar6) = 0xffff;
  puVar1 = (undefined8 *)(lVar5 + 0x60 + lVar6);
  *puVar1 = 0;
  puVar1[1] = 0xffffffff00000000;
  *(undefined1 *)(lVar5 + 0x70 + lVar6) = 0;
  pbVar2 = (byte *)(lVar5 + 0x71 + lVar6);
  *pbVar2 = *pbVar2 & 0xfc;
  *param_2 = iVar3;
  return param_2;
}



// FUNCTION 145c71422 FUN_145c71422 body=154 status=ok
// SIG undefined FUN_145c71422(void)

void FUN_145c71422(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 uVar7;
  
  lVar6 = (**(code **)(*param_1 + 0x20))();
  if (lVar6 != 0) {
    if (*(char *)(lVar6 + 0x3e) == '\x01') {
      uVar4 = *(undefined8 *)(param_1[0x51] + 0xf8);
      plVar5 = *(longlong **)(param_1[0x51] + 0x100);
      bVar3 = 1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        bVar3 = *(byte *)(lVar6 + 0x3e);
      }
      if ((bVar3 & 1) == 0) {
        uVar7 = 1;
      }
      else if (*(char *)(lVar6 + 0x3d) == '\x01') {
        uVar7 = *(undefined1 *)(lVar6 + 0x3f);
      }
      else {
        uVar7 = 0;
      }
      FUN_14582bb32(uVar4,uVar7);
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
                    /* WARNING: Could not recover jumptable at 0x000145c71498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x68))(param_1,param_2,1);
  return;
}



// FUNCTION 145c714c6 FUN_145c714c6 body=144 status=ok
// SIG undefined FUN_145c714c6(void)

bool FUN_145c714c6(longlong param_1)

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
    (**(code **)(param_1 + 0x20))(lVar2);
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



// FUNCTION 145c71558 FUN_145c71558 body=264 status=ok
// SIG undefined FUN_145c71558(void)

void FUN_145c71558(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_145c71662();
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x17) = 0;
    if (*(int *)((longlong)param_1 + 0xbc) < 0) {
      FUN_144893a1c(param_1 + 0x16,0);
    }
    FUN_1401211f6(param_1 + 0x16,*(int *)((longlong)param_1 + 0xac) * (int)param_1[0x15],1);
  }
  local_28 = param_1 + 0x15;
  local_38 = 0;
  uStack_30 = 0;
  if ((0 < (int)param_1[0x15]) && (0 < *(int *)((longlong)param_1 + 0xac))) {
    uStack_30 = CONCAT44(*(int *)((longlong)param_1 + 0xac) + -1,(int)param_1[0x15] + -1);
  }
  if (*(int *)((longlong)param_1 + 0x11c) != -1) {
    if (param_1[0x22] != 0) {
      FUN_1400020a8();
    }
    param_1[0x22] = 0;
    param_1[0x23] = -0x100000000;
  }
  uVar2 = (**(code **)(*param_1 + 0x2c0))(param_1);
  FUN_141495eae(uVar2,&local_38);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c71662 FUN_145c71662 body=157 status=ok
// SIG undefined FUN_145c71662(void)

bool FUN_145c71662(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144729dda(param_1 + 0x58);
  if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0x70) != 0)) {
    local_28 = 0;
    uVar2 = FUN_14479d2ce(param_1 + 0x58);
    cVar1 = FUN_145c71700(uVar2,*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x18),&local_28,
                          param_1 + 0xb0);
    if ((cVar1 != '\0') && ((int)local_28 == *(int *)(param_1 + 0xa8))) {
      bVar3 = local_28._4_4_ == *(int *)(param_1 + 0xac);
      goto LAB_145c716c6;
    }
  }
  bVar3 = false;
LAB_145c716c6:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c71700 FUN_145c71700 body=113 status=ok
// SIG undefined FUN_145c71700(void)

ulonglong FUN_145c71700(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  byte unaff_BPL;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  lVar1 = FUN_1410fe04e(param_1,param_2,0);
  if (lVar1 != 0) {
    unaff_BPL = FUN_145c71772(lVar1,param_3,param_4);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  return CONCAT71((int7)((ulonglong)param_3 >> 8),lVar1 != 0 & unaff_BPL) & 0xffffffff;
}



// FUNCTION 145c71772 FUN_145c71772 body=422 status=ok
// SIG undefined FUN_145c71772(void)

ulonglong FUN_145c71772(longlong param_1,undefined8 *param_2,void **param_3)

{
  longlong lVar1;
  void *_Src;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined7 uVar7;
  ulonglong uVar6;
  int iVar8;
  ulonglong _Size;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined4 local_60;
  undefined8 local_58;
  void *local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  lVar1 = *(longlong *)(param_1 + 0x18);
  iVar8 = *(int *)(param_1 + 0x20);
  iVar4 = 1;
  if (1 < iVar8) {
    iVar4 = iVar8;
  }
  if (((lVar1 == 0) || (iVar8 < 2)) ||
     (uVar5 = iVar4 - 1, *(char *)(lVar1 + (ulonglong)uVar5) != '\0')) {
LAB_145c717f9:
    _Src = local_48;
    _Size = (longlong)*(int *)(param_1 + 0xc) * (longlong)*(int *)(param_1 + 8);
    uVar7 = (undefined7)((ulonglong)param_2 >> 8);
    iVar8 = (int)_Size;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      if (iVar8 == (int)uStack_40) {
        *param_2 = *(undefined8 *)(param_1 + 8);
        uVar6 = CONCAT71(uVar7,1);
        if (&local_48 != param_3) {
          *(int *)(param_3 + 1) = iVar8;
          if (*(int *)((longlong)param_3 + 0xc) == 0 && iVar8 == 0) {
            *(undefined4 *)((longlong)param_3 + 0xc) = 0;
          }
          else {
            FUN_1447a127e(param_3,_Size & 0xffffffff);
            if (iVar8 != 0) {
              memcpy(*param_3,_Src,_Size);
            }
          }
        }
        goto LAB_145c71860;
      }
    }
    else {
      FUN_140393c76(param_3,_Size & 0xffffffff,0);
      local_68 = (longlong)(int)uStack_40;
      local_58 = 0;
      local_60 = 0;
      cVar2 = FUN_140aa9920(*(undefined8 *)(param_1 + 0x10),*param_3,(longlong)*(int *)(param_3 + 1)
                            ,local_48);
      if (cVar2 != '\0') {
        *param_2 = *(undefined8 *)(param_1 + 8);
        uVar6 = CONCAT71(uVar7,1);
        goto LAB_145c71860;
      }
    }
  }
  else {
    uVar3 = FUN_145c7191a(lVar1,uVar5);
    FUN_140393c76(&local_48,uVar3,1);
    cVar2 = FUN_14150ec72(lVar1,uVar5,local_48,0);
    if (cVar2 != '\0') goto LAB_145c717f9;
  }
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) < 0) {
    FUN_144893a1c(param_3,0);
  }
  *param_2 = 0;
  uVar6 = 0;
LAB_145c71860:
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c7191a FUN_145c7191a body=71 status=ok
// SIG undefined FUN_145c7191a(void)

int FUN_145c7191a(longlong param_1,uint param_2)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar2 = param_2 + 1;
  uVar4 = (ulonglong)param_2;
  do {
    if (uVar4 == 0) {
      uVar2 = 0;
      break;
    }
    uVar2 = uVar2 - 1;
    pcVar1 = (char *)(param_1 + -1 + uVar4);
    uVar4 = uVar4 - 1;
  } while (*pcVar1 == '=');
  iVar3 = (uVar2 >> 2) * 3 + 2;
  if ((uVar2 & 3) != 3) {
    iVar3 = (uVar2 >> 2) * 3;
  }
  return (uint)((uVar2 & 3) == 2) + iVar3;
}



// FUNCTION 145c71962 FUN_145c71962 body=358 status=ok
// SIG undefined FUN_145c71962(void)

undefined8 *
FUN_145c71962(longlong *param_1,undefined8 *param_2,uint param_3,uint param_4,float param_5,
             undefined8 param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *param_2 = 0;
  param_2[1] = 0;
  fVar3 = 0.0;
  if (((param_3 != 0xffffffff) && (-1 < (int)param_3)) && ((int)param_3 < (int)param_1[0x31])) {
    fVar3 = *(float *)(param_1[0x30] + 8 + (ulonglong)param_3 * 0xc);
    FUN_145c71ac8(param_2,*(undefined8 *)(param_1[0x30] + (ulonglong)param_3 * 0xc),param_6);
  }
  if (((param_4 == 0xffffffff) || ((int)param_4 < 0)) || ((int)param_1[0x31] <= (int)param_4)) {
    fVar2 = (float)(**(code **)(*param_1 + 0x2b0))(param_1);
  }
  else {
    fVar2 = *(float *)(param_1[0x30] + 8 + (ulonglong)param_4 * 0xc);
    FUN_145c71ac8(param_2 + 1,*(undefined8 *)(param_1[0x30] + (ulonglong)param_4 * 0xc),param_6);
  }
  if (fVar2 < fVar3) {
    if (param_5 < fVar3) {
      fVar1 = (float)(**(code **)(*param_1 + 0x2b0))(param_1);
      fVar3 = fVar3 - fVar1;
    }
    if (fVar2 < param_5) {
      fVar1 = (float)(**(code **)(*param_1 + 0x2b0))(param_1);
      fVar2 = fVar2 + fVar1;
    }
  }
  else if (param_5 < fVar3) {
    fVar1 = (float)(**(code **)(*param_1 + 0x2b0))(param_1);
    param_5 = param_5 + fVar1;
  }
  if ((fVar3 == fVar2) && (!NAN(fVar3) && !NAN(fVar2))) {
    fVar1 = (float)(**(code **)(*param_1 + 0x2b0))(param_1);
    fVar3 = fVar3 - fVar1;
  }
  *(float *)(param_2 + 2) = (param_5 - fVar3) / (fVar2 - fVar3);
  return param_2;
}



// FUNCTION 145c71ac8 FUN_145c71ac8 body=186 status=ok
// SIG undefined FUN_145c71ac8(void)

void FUN_145c71ac8(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  
  if ((param_3 != 0) && (*(int *)(param_3 + 0x1a8) != *(int *)(param_3 + 0x1d4))) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar5 = (uint)param_2 & 0xffff;
    lVar4 = param_3 + 0x1d8;
    if (*(longlong *)(param_3 + 0x1e0) != 0) {
      lVar4 = *(longlong *)(param_3 + 0x1e0);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_3 + 0x1e8) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar5) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_3 + 0x1a0) + (longlong)iVar3 * 0x18);
        if (*plVar1 == param_2) {
          if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
            param_2 = plVar1[1];
          }
          break;
        }
        iVar3 = (int)plVar1[2];
      } while (iVar3 != -1);
    }
  }
  *param_1 = param_2;
  return;
}



// FUNCTION 145c71b8a FUN_145c71b8a body=116 status=ok
// SIG undefined FUN_145c71b8a(void)

undefined8 * FUN_145c71b8a(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14a633920;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_1446f8bcc(param_1 + 10,0);
  FUN_145c71bfe(param_1 + 5);
  param_1[9] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_1446f8bcc(param_1 + 10,0);
  return param_1;
}



// FUNCTION 145c71bfe FUN_145c71bfe body=60 status=ok
// SIG undefined FUN_145c71bfe(void)

void FUN_145c71bfe(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145c71cb0(param_1,iVar1);
  }
  FUN_145c71c3a((longlong)iVar1 * 0x350 + *param_1);
  return;
}



// FUNCTION 145c71c3a FUN_145c71c3a body=118 status=ok
// SIG undefined FUN_145c71c3a(void)

undefined8 * FUN_145c71c3a(undefined8 *param_1)

{
  *param_1 = 0x461c40003ea147ae;
  *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xf0;
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  FUN_145c71e0a(param_1 + 2);
  FUN_145c71d46(param_1 + 0x22);
  FUN_145c71ed4(param_1 + 0x43);
  param_1[0x68] = 0x4248000044fa0000;
  *(undefined4 *)(param_1 + 0x69) = 2;
  *(byte *)((longlong)param_1 + 0x1cc) = *(byte *)((longlong)param_1 + 0x1cc) | 0x21;
  *(undefined1 *)(param_1 + 0xb) = 1;
  *(byte *)((longlong)param_1 + 0xcf) = *(byte *)((longlong)param_1 + 0xcf) & 0xf7;
  return param_1;
}



// FUNCTION 145c71cb0 FUN_145c71cb0 body=149 status=ok
// SIG undefined FUN_145c71cb0(void)

void FUN_145c71cb0(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x350,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x350)) {
      uVar5 = uVar4 / 0x350 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x350,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145c71d46 FUN_145c71d46 body=195 status=ok
// SIG undefined FUN_145c71d46(void)

undefined4 * FUN_145c71d46(undefined4 *param_1)

{
  *param_1 = 0x100;
  FUN_145c71fb8(param_1 + 4);
  param_1[0x2c] = 2;
  *(undefined1 *)(param_1 + 0x2d) = 2;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0x81;
  *(byte *)((longlong)param_1 + 0xbd) = *(byte *)((longlong)param_1 + 0xbd) & 0x80 | 0x36;
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xf0 | 8;
  *(undefined8 *)(param_1 + 0x31) = 0xffffffff80000000;
  *(undefined8 *)(param_1 + 0x33) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x35) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x37) = 0;
  param_1[0x38] = DAT_14c761520;
  param_1[0x39] = DAT_14c761524;
  *(undefined8 *)((longlong)param_1 + 0xf1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf9) = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 1) = 0x101010101010101;
  return param_1;
}



// FUNCTION 145c71e0a FUN_145c71e0a body=202 status=ok
// SIG undefined FUN_145c71e0a(void)

undefined8 * FUN_145c71e0a(undefined8 *param_1)

{
  *param_1 = 0x404000000000012c;
  FUN_145c71fb8(param_1 + 1);
  param_1[0x15] = 0xff00000000000000;
  param_1[0x16] = 0x4302000041a00000;
  *(undefined4 *)(param_1 + 0x17) = 0x100;
  *(undefined2 *)((longlong)param_1 + 0xbc) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0xbe) = 0xa0;
  *(byte *)((longlong)param_1 + 0xbf) = *(byte *)((longlong)param_1 + 0xbf) & 0xc0 | 10;
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xf0 | 8;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0xffffffff80000000;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0x1c) = DAT_14c761520;
  *(undefined4 *)((longlong)param_1 + 0xe4) = DAT_14c761524;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  return param_1;
}



// FUNCTION 145c71ed4 FUN_145c71ed4 body=227 status=ok
// SIG undefined FUN_145c71ed4(void)

undefined1 * FUN_145c71ed4(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0x4003f800000;
  param_1[0xc] = 1;
  *(undefined4 *)(param_1 + 0x10) = 0x3fc00000;
  param_1[0x14] = 1;
  *(undefined4 *)(param_1 + 0x18) = 0x3d4ccccd;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0x3f000000;
  param_1[0x24] = 1;
  *(undefined4 *)(param_1 + 0x28) = 0x3dcccccd;
  *(undefined2 *)(param_1 + 0x2c) = 0x101;
  param_1[0x2e] = 2;
  *(undefined8 *)(param_1 + 0x30) = 0x40000000000007d0;
  *(undefined4 *)(param_1 + 0x38) = 0x3dcccccd;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x44] = 1;
  *(undefined4 *)(param_1 + 0x48) = 0x42700000;
  param_1[0x4c] = 1;
  *(undefined4 *)(param_1 + 0x50) = 0xfa;
  *(undefined4 *)(param_1 + 0x54) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x58) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x5c) = 0x42340000;
  *(undefined2 *)(param_1 + 0x60) = 0;
  *(undefined1 **)(param_1 + 100) = &DAT_3f8000003f800000;
  *(undefined2 *)(param_1 + 0x6c) = 0x101;
  *(undefined8 *)(param_1 + 0x70) = 0x80000000000;
  FUN_145c71fb8(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x118) = 0x3f80000041f00000;
  *(undefined4 *)(param_1 + 0x120) = 0x10100;
  param_1[0x124] = 0;
  return param_1;
}



// FUNCTION 145c71fb8 FUN_145c71fb8 body=122 status=ok
// SIG undefined FUN_145c71fb8(void)

void FUN_145c71fb8(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0x40000000400;
  *(undefined8 *)(param_1 + 0xc) = 0x3f00000040a00000;
  *(undefined8 *)(param_1 + 0x18) = 0x40c3880000000000;
  *(undefined8 *)(param_1 + 0x20) = 0x40800000;
  *(undefined8 *)(param_1 + 0x28) = 0x3f000000;
  *(undefined8 *)(param_1 + 0x30) = 0x3f8000003f000000;
  *(undefined1 **)(param_1 + 0x38) = &DAT_3f8000003f800000;
  *(undefined2 *)(param_1 + 0x40) = 0;
  param_1[0x42] = 3;
  param_1[0x43] = param_1[0x43] & 0xf8;
  *(undefined8 *)(param_1 + 0x44) = 0x40000000400;
  *(undefined8 *)(param_1 + 0x4c) = 0x40000000400;
  *(undefined8 *)(param_1 + 0x54) = 0x40000000400;
  *(undefined8 *)(param_1 + 0x5c) = 0x40000000400;
  *(undefined8 *)(param_1 + 100) = 0x40000000400;
  *(undefined8 *)(param_1 + 0x6c) = 0x40000000400;
  *(undefined8 *)(param_1 + 0x74) = 0x40000000400;
  *(undefined8 *)(param_1 + 0x7c) = 0x40000000400;
  *(undefined8 *)(param_1 + 0x84) = 0x40000000400;
  *(undefined8 *)(param_1 + 0x8c) = 0x40000000400;
  *(undefined8 *)(param_1 + 0x94) = 0x40000000400;
  return;
}



// FUNCTION 145c72032 FUN_145c72032 body=744 status=ok
// SIG undefined FUN_145c72032(void)

void FUN_145c72032(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  longlong lVar9;
  
  if (param_2 == 1) {
    (**(code **)(*param_1 + 0x5c8))(param_1,1);
  }
  if (((char)param_1[0x2f] == '\x03') && (lVar6 = param_1[0x497], (longlong)(int)lVar6 != 0)) {
    lVar5 = param_1[0x496];
    lVar9 = 0;
    bVar3 = DAT_14c950c29;
    do {
      plVar7 = *(longlong **)(lVar5 + lVar9);
      if ((plVar7 != (longlong *)0x0 & bVar3) == 1) {
        FUN_1456cec3c(plVar7);
LAB_145c72090:
        (**(code **)(*plVar7 + 0x5c8))(plVar7,0);
        bVar3 = DAT_14c950c29;
      }
      else if (plVar7 != (longlong *)0x0) goto LAB_145c72090;
      lVar9 = lVar9 + 8;
    } while ((longlong)(int)lVar6 * 8 != lVar9);
  }
  if ((param_1[0xaa] != 0) && (param_1[0xac] != 0)) {
    FUN_140ccfb62();
  }
  lVar6 = param_1[0x85];
  if (lVar6 != 0) {
    lVar5 = FUN_144a78c84();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) {
      FUN_140457ffc(lVar6 + 0x1618,param_1);
    }
  }
  FUN_1406335ea(param_1 + 0xbb,param_2);
  puVar8 = (undefined4 *)param_1[0x290];
  if (puVar8 != (undefined4 *)0x0) {
    do {
      FUN_145cfd944(param_1 + 0x284,*puVar8);
      puVar8 = (undefined4 *)param_1[0x290];
    } while (puVar8 != (undefined4 *)0x0);
  }
  FUN_140cf818e(param_1 + 0x1b9,0);
  FUN_140cf86ea(param_1 + 0x454);
  FUN_140872868(param_1 + 0x2fc);
  FUN_1405213ee(param_1 + 0xcb);
  param_1[0x3a1] = 0;
  FUN_1406398aa(param_1 + 0x3a4,0);
  FUN_140b3b8ec(param_1 + 0x8c);
  FUN_140c2d000(param_1 + 0x2af);
  if (param_1[0x2b7] != 0) {
    FUN_140521208();
    param_1[0x2b7] = 0;
    plVar7 = (longlong *)param_1[0x2b8];
    if (plVar7 != (longlong *)0x0) {
      param_1[0x2b8] = 0;
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
  FUN_140790e84(param_1 + 0x386);
  lVar6 = FUN_1447210f0(param_1);
  if (((param_2 != 3) || (lVar6 == 0)) || ((*(byte *)(lVar6 + 0x155) & 0x20) != 0)) {
    *(undefined1 *)((longlong)param_1 + 0x1d79) = 1;
    FUN_14067171c(param_1 + 0x3a8);
    param_1[0x3a8] = 0;
    FUN_14078a7c0(param_1 + 0xad);
    thunk_FUN_140633cb6(param_1 + 0x2bf);
  }
  FUN_140457ffc(param_1 + 0x43a,param_1);
  cVar4 = FUN_144729dda(param_1 + 0x4c6);
  if (cVar4 != '\0') {
    plVar7 = (longlong *)FUN_14479d2ce(param_1 + 0x4c6);
    (**(code **)(*plVar7 + 0xa48))(plVar7);
  }
  FUN_14035d552(param_1 + 0x104);
  FUN_140457ffc(param_1 + 0x104,param_1);
  if (param_1[0x182] != 0) {
    FUN_140a19d0e(param_1 + 0x180,0);
    param_1[0x17d] = 0;
    param_1[0x17e] = 0;
    param_1[0x17f] = 0;
  }
  FUN_14150ee7c(param_1,param_2);
  return;
}



// FUNCTION 145c72326 FUN_145c72326 body=233 status=ok
// SIG undefined FUN_145c72326(void)

undefined8 * FUN_145c72326(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1406ee02c();
  *param_1 = &PTR_FUN_14b729e50;
  param_1[0x72] = &PTR_LAB_14b72a490;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  FUN_1446f470e(&local_20,L"RootComponent",1);
  uVar1 = FUN_144a799b0();
  local_30 = 0;
  local_38 = 1;
  lVar2 = FUN_14048696c(param_1,local_20,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x39] = lVar2;
  *(undefined1 *)(lVar2 + 0x1fb) = 0;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) & 0xfd;
  *(byte *)((longlong)param_1 + 0x62) = *(byte *)((longlong)param_1 + 0x62) | 1;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) & 0xf7;
  FUN_1405ba932(param_1,0);
  FUN_1403121a6(param_1,0);
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) & 0xfe;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c72410 FUN_145c72410 body=40 status=ok
// SIG undefined FUN_145c72410(void)

undefined8 FUN_145c72410(undefined8 param_1,int param_2)

{
  FUN_145c72438();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c72438 FUN_145c72438 body=69 status=ok
// SIG undefined FUN_145c72438(void)

void FUN_145c72438(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a183c60;
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(param_1 + 0xc);
  FUN_1458fef78(param_1);
  return;
}



// FUNCTION 145c72488 FUN_145c72488 body=98 status=ok
// SIG undefined FUN_145c72488(void)

undefined8 * FUN_145c72488(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_145ae736a();
  *param_1 = &PTR_FUN_14a4d8ad0;
  param_1[0xd] = 0;
  *(undefined2 *)(param_1 + 0xe) = 0xffff;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  uVar1 = FUN_145920a42();
  lVar2 = FUN_14009d2a0();
  FUN_145c02044(param_1 + 0xd,param_1,*(undefined2 *)(lVar2 + 0x72),uVar1);
  return param_1;
}



// FUNCTION 145c724ea FUN_145c724ea body=40 status=ok
// SIG undefined FUN_145c724ea(void)

undefined8 FUN_145c724ea(undefined8 param_1,int param_2)

{
  FUN_145c72512();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c72512 FUN_145c72512 body=69 status=ok
// SIG undefined FUN_145c72512(void)

void FUN_145c72512(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4de9f0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1 + 10);
  FUN_145a22e26(param_1);
  return;
}



// FUNCTION 145c72558 FUN_145c72558 body=45 status=ok
// SIG undefined FUN_145c72558(void)

longlong FUN_145c72558(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_145c72586(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c72586 FUN_145c72586 body=133 status=ok
// SIG undefined FUN_145c72586(void)

void FUN_145c72586(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a598ea0;
  param_1[1] = &PTR_FUN_14a598ed0;
  FUN_144760e21(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 6);
  FUN_1447a1747(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_145c7260b(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_1410c966c(param_1);
  return;
}



// FUNCTION 145c7260b FUN_145c7260b body=40 status=ok
// SIG undefined FUN_145c7260b(void)

void FUN_145c7260b(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1449db362(param_1);
    param_1 = param_1 + 0x10;
  }
  return;
}



// FUNCTION 145c72634 FUN_145c72634 body=40 status=ok
// SIG undefined FUN_145c72634(void)

undefined8 FUN_145c72634(undefined8 param_1,int param_2)

{
  FUN_145c7265c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c7265c FUN_145c7265c body=69 status=ok
// SIG undefined FUN_145c7265c(void)

void FUN_145c7265c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a67a4b0;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_140bc97f4(param_1);
  return;
}



// FUNCTION 145c726a2 FUN_145c726a2 body=40 status=ok
// SIG undefined FUN_145c726a2(void)

undefined8 FUN_145c726a2(undefined8 param_1,int param_2)

{
  FUN_145c726ca();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c726ca FUN_145c726ca body=69 status=ok
// SIG undefined FUN_145c726ca(void)

void FUN_145c726ca(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a689970;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_140bc97f4(param_1);
  return;
}



// FUNCTION 145c7271a FUN_145c7271a body=98 status=ok
// SIG undefined FUN_145c7271a(void)

undefined8 * FUN_145c7271a(undefined8 *param_1)

{
  FUN_14598188e();
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd5) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdd) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *param_1 = &PTR_FUN_14a6db600;
  param_1[0x1f] = 0;
  *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) & 0xf0 | 4;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 0x41;
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) | 0xc;
  return param_1;
}



// FUNCTION 145c7277c FUN_145c7277c body=40 status=ok
// SIG undefined FUN_145c7277c(void)

undefined8 FUN_145c7277c(undefined8 param_1,int param_2)

{
  FUN_145c727a4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c727a4 FUN_145c727a4 body=69 status=ok
// SIG undefined FUN_145c727a4(void)

void FUN_145c727a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a894a10;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_141027bfe(param_1);
  return;
}



// FUNCTION 145c727ea FUN_145c727ea body=75 status=ok
// SIG undefined FUN_145c727ea(void)

undefined8 * FUN_145c727ea(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ad7f3b0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_145c72836(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c72836 FUN_145c72836 body=53 status=ok
// SIG undefined FUN_145c72836(void)

void FUN_145c72836(longlong *param_1)

{
  FUN_145c7286c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c7286c FUN_145c7286c body=90 status=ok
// SIG undefined FUN_145c7286c(void)

void FUN_145c7286c(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140de7f60(param_1,0);
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



// FUNCTION 145c728ce FUN_145c728ce body=101 status=ok
// SIG undefined FUN_145c728ce(void)

undefined8 * FUN_145c728ce(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_14007ca06();
  uVar1 = FUN_14007ca06();
  FUN_14130963a(param_1,uVar1);
  *param_1 = &PTR_FUN_14adb0b80;
  param_1[7] = &PTR_FUN_14adb0fc0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 8));
  *(undefined1 *)(param_1 + 9) = 1;
  *param_1 = &PTR_FUN_14adb2f20;
  param_1[7] = &PTR_LAB_14adb3360;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return param_1;
}



// FUNCTION 145c7293c FUN_145c7293c body=101 status=ok
// SIG undefined FUN_145c7293c(void)

undefined8 * FUN_145c7293c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_14007ca06();
  uVar1 = FUN_14007ca06();
  FUN_14130963a(param_1,uVar1);
  *param_1 = &PTR_FUN_14adb0b80;
  param_1[7] = &PTR_FUN_14adb0fc0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 8));
  *(undefined1 *)(param_1 + 9) = 1;
  *param_1 = &PTR_FUN_14adb3ab0;
  param_1[7] = &PTR_LAB_14adb3ef0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return param_1;
}



// FUNCTION 145c729aa FUN_145c729aa body=101 status=ok
// SIG undefined FUN_145c729aa(void)

undefined8 * FUN_145c729aa(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_14007ca06();
  uVar1 = FUN_14007ca06();
  FUN_14130963a(param_1,uVar1);
  *param_1 = &PTR_FUN_14adb0b80;
  param_1[7] = &PTR_FUN_14adb0fc0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 8));
  *(undefined1 *)(param_1 + 9) = 1;
  *param_1 = &PTR_FUN_14adb4080;
  param_1[7] = &PTR_LAB_14adb44c0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return param_1;
}



// FUNCTION 145c72a18 FUN_145c72a18 body=101 status=ok
// SIG undefined FUN_145c72a18(void)

undefined8 * FUN_145c72a18(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_14007ca06();
  uVar1 = FUN_14007ca06();
  FUN_14130963a(param_1,uVar1);
  *param_1 = &PTR_FUN_14adb0b80;
  param_1[7] = &PTR_FUN_14adb0fc0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 8));
  *(undefined1 *)(param_1 + 9) = 1;
  *param_1 = &PTR_FUN_14adb9a10;
  param_1[7] = &PTR_LAB_14adb9e50;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return param_1;
}



// FUNCTION 145c72a86 FUN_145c72a86 body=101 status=ok
// SIG undefined FUN_145c72a86(void)

undefined8 * FUN_145c72a86(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_14007ca06();
  uVar1 = FUN_14007ca06();
  FUN_14130963a(param_1,uVar1);
  *param_1 = &PTR_FUN_14adb0b80;
  param_1[7] = &PTR_FUN_14adb0fc0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 8));
  *(undefined1 *)(param_1 + 9) = 1;
  *param_1 = &PTR_FUN_14adb9fd0;
  param_1[7] = &PTR_LAB_14adba410;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return param_1;
}



// FUNCTION 145c72af4 FUN_145c72af4 body=101 status=ok
// SIG undefined FUN_145c72af4(void)

undefined8 * FUN_145c72af4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_14007ca06();
  uVar1 = FUN_14007ca06();
  FUN_14130963a(param_1,uVar1);
  *param_1 = &PTR_FUN_14adb0b80;
  param_1[7] = &PTR_FUN_14adb0fc0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 8));
  *(undefined1 *)(param_1 + 9) = 1;
  *param_1 = &PTR_FUN_14adba610;
  param_1[7] = &PTR_LAB_14adbaa50;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return param_1;
}



// FUNCTION 145c72b5a FUN_145c72b5a body=40 status=ok
// SIG undefined FUN_145c72b5a(void)

undefined8 FUN_145c72b5a(undefined8 param_1,int param_2)

{
  FUN_145c72b82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c72b82 FUN_145c72b82 body=69 status=ok
// SIG undefined FUN_145c72b82(void)

void FUN_145c72b82(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14adc9060;
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_14116305e(param_1);
  return;
}



// FUNCTION 145c72bc8 FUN_145c72bc8 body=40 status=ok
// SIG undefined FUN_145c72bc8(void)

undefined8 FUN_145c72bc8(undefined8 param_1,int param_2)

{
  FUN_145c72bf0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c72bf0 FUN_145c72bf0 body=69 status=ok
// SIG undefined FUN_145c72bf0(void)

void FUN_145c72bf0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14adcd3b0;
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_1458a0856(param_1);
  return;
}



// FUNCTION 145c72c36 FUN_145c72c36 body=75 status=ok
// SIG undefined FUN_145c72c36(void)

undefined8 * FUN_145c72c36(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14addcc00;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_145c72c82(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c72c82 FUN_145c72c82 body=53 status=ok
// SIG undefined FUN_145c72c82(void)

void FUN_145c72c82(longlong *param_1)

{
  FUN_145c72cb8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c72cb8 FUN_145c72cb8 body=90 status=ok
// SIG undefined FUN_145c72cb8(void)

void FUN_145c72cb8(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14494313c(param_1,0);
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



// FUNCTION 145c72d12 FUN_145c72d12 body=40 status=ok
// SIG undefined FUN_145c72d12(void)

undefined8 FUN_145c72d12(undefined8 param_1,int param_2)

{
  FUN_145c72d3a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c72d3a FUN_145c72d3a body=69 status=ok
// SIG undefined FUN_145c72d3a(void)

void FUN_145c72d3a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aec0480;
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c72d80 FUN_145c72d80 body=40 status=ok
// SIG undefined FUN_145c72d80(void)

undefined8 FUN_145c72d80(undefined8 param_1,int param_2)

{
  FUN_145c72da8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c72da8 FUN_145c72da8 body=69 status=ok
// SIG undefined FUN_145c72da8(void)

void FUN_145c72da8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aec2e90;
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c72dee FUN_145c72dee body=40 status=ok
// SIG undefined FUN_145c72dee(void)

undefined8 FUN_145c72dee(undefined8 param_1,int param_2)

{
  FUN_145c72e16();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c72e16 FUN_145c72e16 body=69 status=ok
// SIG undefined FUN_145c72e16(void)

void FUN_145c72e16(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1c6a20;
  if (param_1[0x7b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x79] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_1402d9b92(param_1);
  return;
}



// FUNCTION 145c72e5c FUN_145c72e5c body=40 status=ok
// SIG undefined FUN_145c72e5c(void)

undefined8 FUN_145c72e5c(undefined8 param_1,int param_2)

{
  FUN_145c72e84();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c72e84 FUN_145c72e84 body=69 status=ok
// SIG undefined FUN_145c72e84(void)

void FUN_145c72e84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b277480;
  if (param_1[0x80] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7e] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 145c72eca FUN_145c72eca body=40 status=ok
// SIG undefined FUN_145c72eca(void)

undefined8 FUN_145c72eca(undefined8 param_1,int param_2)

{
  FUN_145c72ef2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c72ef2 FUN_145c72ef2 body=69 status=ok
// SIG undefined FUN_145c72ef2(void)

void FUN_145c72ef2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b547870;
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_1410bf6a4(param_1);
  return;
}



// FUNCTION 145c72f38 FUN_145c72f38 body=43 status=ok
// SIG undefined FUN_145c72f38(void)

undefined8 FUN_145c72f38(undefined8 param_1,int param_2)

{
  FUN_145c72f64();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,200);
  }
  return param_1;
}



// FUNCTION 145c72f64 FUN_145c72f64 body=66 status=ok
// SIG undefined FUN_145c72f64(void)

void FUN_145c72f64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8c2120;
  FUN_1456e6a3a(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 145c72fa6 FUN_145c72fa6 body=43 status=ok
// SIG undefined FUN_145c72fa6(void)

undefined8 FUN_145c72fa6(undefined8 param_1,int param_2)

{
  FUN_145c72fd2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 145c72fd2 FUN_145c72fd2 body=66 status=ok
// SIG undefined FUN_145c72fd2(void)

void FUN_145c72fd2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8c22b0;
  FUN_140840ea5(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 145c73014 FUN_145c73014 body=75 status=ok
// SIG undefined FUN_145c73014(void)

undefined8 * FUN_145c73014(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b966fe0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_145c73060(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c73060 FUN_145c73060 body=53 status=ok
// SIG undefined FUN_145c73060(void)

void FUN_145c73060(longlong *param_1)

{
  FUN_145c73096();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c73096 FUN_145c73096 body=90 status=ok
// SIG undefined FUN_145c73096(void)

void FUN_145c73096(longlong param_1)

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



// FUNCTION 145c730f0 FUN_145c730f0 body=40 status=ok
// SIG undefined FUN_145c730f0(void)

undefined8 FUN_145c730f0(undefined8 param_1,int param_2)

{
  FUN_145c73118();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c73118 FUN_145c73118 body=69 status=ok
// SIG undefined FUN_145c73118(void)

void FUN_145c73118(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba0f230;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_140e36c74(param_1);
  return;
}



// FUNCTION 145c73166 FUN_145c73166 body=537 status=ok
// SIG undefined FUN_145c73166(void)

undefined8 * FUN_145c73166(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14bac92d0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 4;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 4;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 4;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  *(undefined2 *)(param_1 + 0x3c) = 0;
  param_1[0x3d] = param_1 + 0x27;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = param_1 + 0x41;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = param_1 + 0x44;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = param_1 + 0x47;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x28c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x294) = 0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x314) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  *(undefined4 *)(param_1 + 0x67) = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6c] = 2;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6d));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x6d),4000);
  return param_1;
}



// FUNCTION 145c73380 FUN_145c73380 body=40 status=ok
// SIG undefined FUN_145c73380(void)

undefined8 FUN_145c73380(undefined8 param_1,int param_2)

{
  FUN_145c733a8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c733a8 FUN_145c733a8 body=69 status=ok
// SIG undefined FUN_145c733a8(void)

void FUN_145c733a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bb47070;
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_145bf1ed8(param_1);
  return;
}



// FUNCTION 145c733ee FUN_145c733ee body=40 status=ok
// SIG undefined FUN_145c733ee(void)

undefined8 FUN_145c733ee(undefined8 param_1,int param_2)

{
  FUN_145c73416();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c73416 FUN_145c73416 body=69 status=ok
// SIG undefined FUN_145c73416(void)

void FUN_145c73416(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc53bb0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bc53600;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_140fed60e(param_1);
  return;
}



// FUNCTION 145c7345c FUN_145c7345c body=40 status=ok
// SIG undefined FUN_145c7345c(void)

undefined8 FUN_145c7345c(undefined8 param_1,int param_2)

{
  FUN_145c73484();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c73484 FUN_145c73484 body=69 status=ok
// SIG undefined FUN_145c73484(void)

void FUN_145c73484(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bdbc4d0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_140e36c74(param_1);
  return;
}



// FUNCTION 145c734ca FUN_145c734ca body=75 status=ok
// SIG undefined FUN_145c734ca(void)

undefined8 * FUN_145c734ca(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14beea070;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_145c73516(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c73516 FUN_145c73516 body=53 status=ok
// SIG undefined FUN_145c73516(void)

void FUN_145c73516(longlong *param_1)

{
  FUN_145c7354c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c7354c FUN_145c7354c body=90 status=ok
// SIG undefined FUN_145c7354c(void)

void FUN_145c7354c(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1472cec54(param_1,0);
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



// FUNCTION 145c735a6 FUN_145c735a6 body=75 status=ok
// SIG undefined FUN_145c735a6(void)

undefined8 * FUN_145c735a6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14beea0e0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_145c735f2(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c735f2 FUN_145c735f2 body=53 status=ok
// SIG undefined FUN_145c735f2(void)

void FUN_145c735f2(longlong *param_1)

{
  FUN_145c73628();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c73628 FUN_145c73628 body=90 status=ok
// SIG undefined FUN_145c73628(void)

void FUN_145c73628(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
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



// FUNCTION 145c73682 FUN_145c73682 body=883 status=ok
// SIG undefined FUN_145c73682(void)

void FUN_145c73682(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_80;
  _RTL_CRITICAL_SECTION local_78;
  undefined8 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar4 = *param_2;
  plVar2 = (longlong *)param_2[1];
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_1 + 0x10) = lVar4;
    plVar9 = *(longlong **)(param_1 + 0x18);
    if (plVar9 == (longlong *)0x0) goto LAB_145c736e0;
    *(undefined8 *)(param_1 + 0x18) = 0;
LAB_145c73975:
    LOCK();
    plVar2 = plVar9 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 != 0) goto LAB_145c736e0;
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar7 = *piVar1;
    UNLOCK();
    plVar2 = plVar9;
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_1 + 0x10) = lVar4;
    plVar9 = *(longlong **)(param_1 + 0x18);
    if (plVar2 != plVar9) {
      *(longlong **)(param_1 + 0x18) = plVar2;
      if (plVar9 == (longlong *)0x0) goto LAB_145c736e0;
      goto LAB_145c73975;
    }
    LOCK();
    plVar9 = plVar2 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 != 0) goto LAB_145c736e0;
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar7 = *piVar1;
    UNLOCK();
  }
  if (iVar7 == 0) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
LAB_145c736e0:
  *(undefined1 *)(param_1 + 0x268) = *(undefined1 *)(*param_2 + 0x28);
  lVar8 = (longlong)DAT_14c75f5d4 << 10;
  lVar4 = 0x40000;
  if (0 < (longlong)DAT_14c75f5d4) {
    lVar4 = lVar8;
  }
  *(longlong *)(param_1 + 8) = lVar4;
  FUN_14150eeaa((HANDLE)(param_1 + 0xd0),(longlong)DAT_14c75f5dc << 0x14,lVar8,DAT_14c75f5d8);
  FUN_145c73b6a((HANDLE)(param_1 + 0x28),(longlong)DAT_14c99fe08 << 0x14,lVar8);
  local_78.DebugInfo = *(PRTL_CRITICAL_SECTION_DEBUG *)(param_1 + 0x10);
  local_78._8_8_ = param_1 + 0x118;
  local_78.SpinCount = param_1 + 0x20;
  local_78.OwningThread = (HANDLE)(param_1 + 0xd0);
  local_78.LockSemaphore = (HANDLE)(param_1 + 0x28);
  (**(code **)(**(longlong **)(param_1 + 600) + 8))();
  iVar7 = 4;
  if (0 < DAT_14c75f5e0) {
    iVar7 = DAT_14c75f5e0;
  }
  FUN_145c73c0e(param_1 + 0x288,iVar7);
  iVar7 = *(int *)(param_1 + 0x290);
  if ((longlong)iVar7 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x288);
    lVar8 = 0;
    do {
      puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      lVar3 = *(longlong *)(lVar4 + lVar8);
      *(undefined8 **)(lVar4 + lVar8) = puVar5;
      if (lVar3 != 0) {
        FUN_1400020a8();
        puVar5 = *(undefined8 **)(lVar4 + lVar8);
      }
      *puVar5 = *(undefined8 *)(param_1 + 0x2b8);
      *(undefined8 *)(param_1 + 0x2b8) = *(undefined8 *)(lVar4 + lVar8);
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar7 * 8 != lVar8);
  }
  local_90 = 0;
  local_98 = 0xffffffffffffffff;
  uVar6 = FUN_1411b1052(param_1 + -8,L"IoService",0,1);
  *(undefined8 *)(param_1 + 0x260) = uVar6;
  uVar6 = FUN_145c739f6(&DAT_14c82ba00);
  InitializeCriticalSection(&local_78);
  SetCriticalSectionSpinCount(&local_78,4000);
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  EnterCriticalSection(&local_78);
  if (local_48 != 2) {
    FUN_1446efa72(&local_50,0,2,0x10);
    local_48 = 2;
  }
  *local_50 = &PTR_LAB_149e065d0;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_50[2] = lVar8;
  *local_50 = &PTR_FUN_14a161ad0;
  local_50[3] = param_1 + -8;
  LeaveCriticalSection(&local_78);
  FUN_145c73a1e(uVar6,&local_80,&local_78);
  FUN_1401cb1ee(&local_78);
  *(undefined8 *)(param_1 + 0x310) = local_80;
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar2 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c739f6 FUN_145c739f6 body=8 status=ok
// SIG undefined FUN_145c739f6(void)

longlong FUN_145c739f6(longlong param_1)

{
  return param_1 + 0x7c08;
}



// FUNCTION 145c73a1e FUN_145c73a1e body=315 status=ok
// SIG undefined FUN_145c73a1e(void)

undefined8 *
FUN_145c73a1e(LPCRITICAL_SECTION param_1,undefined8 *param_2,LPCRITICAL_SECTION param_3)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection(param_1);
  *param_2 = 0;
  EnterCriticalSection(param_3);
  cVar3 = '\0';
  if ((param_3[1].LockCount != 0) && (param_3[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
    cVar3 = (**(code **)(*(longlong *)param_3[1].DebugInfo + 0x30))();
  }
  if (param_3 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_3);
  }
  if (cVar3 != '\0') {
    FUN_14109be94(param_1,1);
    EnterCriticalSection(param_3);
    if ((param_3[1].LockCount == 0) ||
       (p_Var2 = param_3[1].DebugInfo, p_Var2 == (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
      local_40 = 0;
    }
    else {
      (**(code **)(*(longlong *)p_Var2 + 0x38))(p_Var2,&local_40);
    }
    if (param_3 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(param_3);
    }
    *param_2 = local_40;
    iVar1 = param_1[1].LockCount;
    lVar4 = (longlong)iVar1;
    param_1[1].LockCount = iVar1 + 1U;
    if ((uint)param_1[1].RecursionCount < iVar1 + 1U) {
      FUN_1447a71f6(param_1 + 1,iVar1);
    }
    p_Var2 = param_1[1].DebugInfo;
    *(undefined8 *)(&p_Var2->Type + lVar4 * 8) = 0;
    *(undefined4 *)(&p_Var2->CriticalSection + lVar4 * 2) = 0;
    FUN_14109be38(&p_Var2->Type + lVar4 * 8,param_3);
  }
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c73b6a FUN_145c73b6a body=164 status=ok
// SIG undefined FUN_145c73b6a(void)

void FUN_145c73b6a(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  *(ulonglong *)(param_1 + 0xa0) = param_3;
  if (param_3 <= param_2) {
    uVar4 = 0;
    lVar1 = FUN_14001cc68((param_2 / param_3) * param_3,0);
    *(longlong *)(param_1 + 8) = lVar1;
    plVar2 = (longlong *)(param_1 + 0x60);
    do {
      plVar3 = (longlong *)FUN_14001cc68(0x20,0x10);
      plVar3[1] = 0;
      plVar3[2] = -1;
      plVar3[3] = lVar1;
      plVar2[1] = (longlong)plVar3;
      *plVar3 = (longlong)plVar2;
      uVar4 = uVar4 + 1;
      lVar1 = lVar1 + param_3;
      plVar2 = plVar3;
    } while (uVar4 < param_2 / param_3);
    plVar3[1] = param_1 + 0x80;
    *(longlong **)(param_1 + 0x80) = plVar3;
  }
  return;
}



// FUNCTION 145c73c0e FUN_145c73c0e body=185 status=ok
// SIG undefined FUN_145c73c0e(void)

void FUN_145c73c0e(longlong *param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1[1];
  if (iVar3 < (int)param_2) {
    *(uint *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar3) < param_2 - iVar3) {
      FUN_145c73cc8(param_1);
    }
    memset((void *)((longlong)iVar3 * 8 + *param_1),0,(longlong)(int)(param_2 - iVar3) << 3);
    return;
  }
  if (-1 < (int)param_2) {
    iVar2 = iVar3 - param_2;
    if (iVar2 == 0 || iVar3 < (int)param_2) {
      return;
    }
    _Dst = (void *)((ulonglong)param_2 * 8 + *param_1);
    FUN_1458537f7(_Dst,iVar2);
    iVar1 = (int)param_1[1] - iVar3;
    if (iVar1 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar2 * 8),(longlong)iVar1 << 3);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - iVar2;
    FUN_1470816d8(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 145c73cc8 FUN_145c73cc8 body=132 status=ok
// SIG undefined FUN_145c73cc8(void)

void FUN_145c73cc8(longlong param_1,int param_2)

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



// FUNCTION 145c73d54 FUN_145c73d54 body=480 status=ok
// SIG undefined FUN_145c73d54(void)

undefined8 * FUN_145c73d54(undefined8 *param_1)

{
  FUN_145c73f34();
  *param_1 = &PTR_FUN_14bd9b760;
  param_1[5] = &PTR_FUN_14bd9bdc0;
  param_1[0x13] = &PTR_FUN_14bd9bde0;
  param_1[0x15] = &PTR_FUN_14bd9be10;
  param_1[0x16] = &PTR_FUN_14bd9be50;
  param_1[0x184] = 0;
  *(undefined4 *)(param_1 + 0x185) = 0;
  param_1[0x174] = 0;
  param_1[0x175] = 0;
  param_1[0x176] = 0;
  param_1[0x177] = 0;
  *(undefined8 *)((longlong)param_1 + 0xbb9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc1) = 0;
  param_1[0x17a] = 0;
  param_1[0x17b] = 0;
  param_1[0x17c] = 0;
  param_1[0x17d] = 0;
  param_1[0x17e] = 0;
  param_1[0x17f] = 0;
  param_1[0x180] = 0;
  param_1[0x181] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xc34) = 0;
  param_1[0x188] = 0;
  *(undefined4 *)(param_1 + 0x189) = 0;
  *(undefined1 *)(param_1 + 0x18a) = 0;
  param_1[0x197] = 0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  param_1[0x193] = 0;
  param_1[0x194] = 0;
  param_1[0x191] = 0;
  param_1[0x192] = 0;
  param_1[399] = 0;
  param_1[400] = 0;
  param_1[0x18d] = 0;
  param_1[0x18e] = 0;
  param_1[0x18b] = 0;
  param_1[0x18c] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xccc) = 0;
  param_1[0x19b] = 0;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  param_1[0x1a1] = 0;
  *(undefined4 *)(param_1 + 0x1a2) = 0;
  param_1[0x19d] = 0;
  param_1[0x19e] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd14) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd1c) = 0;
  param_1[0x1a5] = 0;
  *(undefined4 *)(param_1 + 0x1a6) = 0;
  *(undefined1 *)(param_1 + 0x1a7) = 0;
  FUN_1458481c0(param_1 + 0x1a8);
  param_1[0x1e3] = 0x7fefffffffffffff;
  param_1[0x1e4] = 0x7fefffffffffffff;
  param_1[0x1e5] = 0x7fefffffffffffff;
  param_1[0x1e6] = 0xffefffffffffffff;
  param_1[0x1e7] = 0xffefffffffffffff;
  param_1[0x1e8] = 0xffefffffffffffff;
  *(undefined2 *)(param_1 + 0x1e9) = 0;
  *(undefined1 *)(param_1 + 0x1f8) = 0;
  param_1[0x1ea] = 0;
  param_1[0x1eb] = 0;
  param_1[0x1ec] = 0;
  param_1[0x1ed] = 0;
  param_1[0x1ee] = 0;
  param_1[0x1ef] = 0;
  param_1[0x1f0] = 0;
  param_1[0x1f1] = 0;
  param_1[0x1f2] = 0;
  param_1[499] = 0;
  param_1[500] = 0;
  param_1[0x1f5] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfa9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfb1) = 0;
  param_1[0x1f9] = 0;
  param_1[0x1fa] = 0;
  return param_1;
}



// FUNCTION 145c73f34 FUN_145c73f34 body=1036 status=ok
// SIG undefined FUN_145c73f34(void)

undefined8 * FUN_145c73f34(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_145ad3c5c();
  *param_1 = &PTR_FUN_14bdc35c0;
  param_1[5] = &PTR_FUN_14bdc3c10;
  param_1[0x13] = &PTR_FUN_14bdc3c30;
  param_1[0x15] = &PTR_FUN_14bdc3c60;
  param_1[0x16] = &PTR_FUN_14bdc3ca0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0x3ff0000000000000;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x32] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x33] = uVar1;
  param_1[0x34] = DAT_14c8464f0;
  uVar1 = DAT_14c846518;
  param_1[0x35] = DAT_14c846510;
  param_1[0x36] = uVar1;
  param_1[0x37] = DAT_14c846520;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0x3ff0000000000000;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x3c] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x3d] = uVar1;
  param_1[0x3e] = DAT_14c8464f0;
  uVar1 = DAT_14c846518;
  param_1[0x3f] = DAT_14c846510;
  param_1[0x40] = uVar1;
  param_1[0x41] = DAT_14c846520;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(undefined8 *)((longlong)param_1 + 0x25c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x264) = 0;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = 0;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0;
  param_1[0x5e] = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2fc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x304) = 0;
  param_1[0x62] = 0;
  *(undefined4 *)(param_1 + 99) = 0;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x354) = 0;
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  *(undefined1 *)(param_1 + 0x72) = 1;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x77] = 0x7fefffffffffffff;
  param_1[0x78] = 0xffefffffffffffff;
  param_1[0x79] = 0x3ff0000000000000;
  param_1[0x7a] = 0x3fe0000000000000;
  param_1[0x7b] = 0x3ff0000000000000;
  param_1[0x7e] = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x7c] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x7d] = uVar1;
  param_1[0x81] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x82] = 0x3ff0000000000000;
  param_1[0x85] = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x83] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x84] = uVar1;
  param_1[0x88] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x89] = 0x3ff0000000000000;
  param_1[0x8d] = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x8b] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x8c] = uVar1;
  param_1[0x90] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x91] = 0x3ff0000000000000;
  *(undefined2 *)(param_1 + 0x92) = 0;
  *(undefined1 *)((longlong)param_1 + 0x492) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4a1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4a9) = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x99] = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x97) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x4bc) = uVar2;
  *(undefined4 *)(param_1 + 0x98) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x4c4) = uVar4;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0x3ff0000000000000;
  FUN_145c74340(param_1 + 0x9e);
  FUN_145c74340(param_1 + 0xd0);
  FUN_145c74340(param_1 + 0x102);
  param_1[0x136] = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x134] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x135] = uVar1;
  param_1[0x139] = 0;
  param_1[0x137] = 0;
  param_1[0x138] = 0;
  param_1[0x13a] = 0x3ff0000000000000;
  param_1[0x13d] = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x13b] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x13c] = uVar1;
  param_1[0x13e] = 0;
  param_1[0x13f] = 0;
  param_1[0x140] = 0;
  param_1[0x141] = 0x3ff0000000000000;
  param_1[0x14e] = 0;
  param_1[0x150] = 0;
  param_1[0x156] = 0;
  param_1[0x158] = 0;
  param_1[0x162] = 0;
  param_1[0x164] = 0;
  param_1[0x16a] = 0;
  param_1[0x16c] = 0;
  *(undefined4 *)((longlong)param_1 + 0xb94) = 0;
  param_1[0x144] = 0;
  param_1[0x142] = 0;
  param_1[0x143] = 0;
  param_1[0x148] = 0;
  param_1[0x149] = 0;
  param_1[0x146] = 0;
  param_1[0x147] = 0;
  *(undefined4 *)(param_1 + 0x173) = 1;
  return param_1;
}



// FUNCTION 145c74340 FUN_145c74340 body=329 status=ok
// SIG undefined FUN_145c74340(void)

undefined8 * FUN_145c74340(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uVar2 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[2] = DAT_14c8464f0;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0x3ff0000000000000;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[7] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[8] = uVar1;
  param_1[9] = DAT_14c8464f0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x3ff0000000000000;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x14] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x15] = uVar1;
  param_1[0x16] = DAT_14c8464f0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0x3ff0000000000000;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x1b] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x1c] = uVar1;
  param_1[0x1d] = DAT_14c8464f0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0x3ff0000000000000;
  param_1[0x22] = 0;
  param_1[0x25] = DAT_14c8464f0;
  uVar5 = DAT_14c8464e8._4_4_;
  uVar4 = (undefined4)DAT_14c8464e8;
  uVar3 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x23) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = uVar3;
  *(undefined4 *)(param_1 + 0x24) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x124) = uVar5;
  param_1[0x28] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x29] = 0x3ff0000000000000;
  param_1[0x2a] = 0;
  param_1[0x2c] = 0;
  FUN_1402160b8(&local_20);
  param_1[0x22] = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c7448a FUN_145c7448a body=40 status=ok
// SIG undefined FUN_145c7448a(void)

undefined8 FUN_145c7448a(undefined8 param_1,int param_2)

{
  FUN_145c744b2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c744b2 FUN_145c744b2 body=125 status=ok
// SIG undefined FUN_145c744b2(void)

void FUN_145c744b2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bca8410;
  param_1[7] = &PTR_FUN_14bca8700;
  param_1[8] = &PTR_FUN_14bca8720;
  param_1[9] = &PTR_FUN_14bca8760;
  param_1[10] = &PTR_FUN_14bca8780;
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (param_1[0x4f] != 0) {
    FUN_1400020a8();
  }
  FUN_145c74530(param_1 + 0x47);
  FUN_145c746c2(param_1 + 0xb);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c74530 FUN_145c74530 body=53 status=ok
// SIG undefined FUN_145c74530(void)

void FUN_145c74530(longlong *param_1)

{
  FUN_145c74566();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c74566 FUN_145c74566 body=346 status=ok
// SIG undefined FUN_145c74566(void)

void FUN_145c74566(longlong *param_1)

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
      if (*(longlong *)(*local_68 + 8 + (longlong)iStack_4c * 0x20) != 0) {
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
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c746c2 FUN_145c746c2 body=829 status=ok
// SIG undefined FUN_145c746c2(void)

void FUN_145c746c2(longlong *param_1)

{
  FUN_145c74b7c(param_1[0x3a],(int)param_1[0x3b]);
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  FUN_145c74be2(param_1 + 0x2e);
  *(undefined4 *)(param_1 + 0x2d) = 0;
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  FUN_145c74baa(param_1 + 0x24);
  FUN_1447a1747(param_1[0x22],(int)param_1[0x23]);
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x20],(int)param_1[0x21]);
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x1e],(int)param_1[0x1f]);
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_145c74a4f(param_1[0x1c],(int)param_1[0x1d]);
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_145c749ff(param_1[0x1a],(int)param_1[0x1b]);
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_145c74a7a(param_1[0x16],(int)param_1[0x17]);
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_145c74aa5(param_1[0x14],(int)param_1[0x15]);
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_145c74ad0(param_1[0x12],(int)param_1[0x13]);
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_145c74c98(param_1[0x10],(int)param_1[0x11]);
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_145c74afb(param_1[0xe],(int)param_1[0xf]);
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_145c74b26(param_1[0xc],(int)param_1[0xd]);
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_145c74a27(param_1[10],(int)param_1[0xb]);
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_145c74b51(param_1[8],(int)param_1[9]);
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c749ff FUN_145c749ff body=40 status=ok
// SIG undefined FUN_145c749ff(void)

void FUN_145c749ff(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_149326614(param_1);
    param_1 = param_1 + 0x80;
  }
  return;
}



// FUNCTION 145c74a27 FUN_145c74a27 body=40 status=ok
// SIG undefined FUN_145c74a27(void)

void FUN_145c74a27(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14932af96(param_1);
    param_1 = param_1 + 0x80;
  }
  return;
}



// FUNCTION 145c74a4f FUN_145c74a4f body=43 status=ok
// SIG undefined FUN_145c74a4f(void)

void FUN_145c74a4f(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14932b3a8(param_1);
    param_1 = param_1 + 0x370;
  }
  return;
}



// FUNCTION 145c74a7a FUN_145c74a7a body=43 status=ok
// SIG undefined FUN_145c74a7a(void)

void FUN_145c74a7a(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14932650e(param_1);
    param_1 = param_1 + 0xa8;
  }
  return;
}



// FUNCTION 145c74aa5 FUN_145c74aa5 body=43 status=ok
// SIG undefined FUN_145c74aa5(void)

void FUN_145c74aa5(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14932c93e(param_1);
    param_1 = param_1 + 0x90;
  }
  return;
}



// FUNCTION 145c74ad0 FUN_145c74ad0 body=43 status=ok
// SIG undefined FUN_145c74ad0(void)

void FUN_145c74ad0(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14932b1a0(param_1);
    param_1 = param_1 + 0x98;
  }
  return;
}



// FUNCTION 145c74afb FUN_145c74afb body=43 status=ok
// SIG undefined FUN_145c74afb(void)

void FUN_145c74afb(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14932b0d8(param_1);
    param_1 = param_1 + 0x90;
  }
  return;
}



// FUNCTION 145c74b26 FUN_145c74b26 body=43 status=ok
// SIG undefined FUN_145c74b26(void)

void FUN_145c74b26(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14932643c(param_1);
    param_1 = param_1 + 0x220;
  }
  return;
}



// FUNCTION 145c74b51 FUN_145c74b51 body=43 status=ok
// SIG undefined FUN_145c74b51(void)

void FUN_145c74b51(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14932ad72(param_1);
    param_1 = param_1 + 0xa8;
  }
  return;
}



// FUNCTION 145c74b7c FUN_145c74b7c body=45 status=ok
// SIG undefined FUN_145c74b7c(void)

void FUN_145c74b7c(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 145c74baa FUN_145c74baa body=55 status=ok
// SIG undefined FUN_145c74baa(void)

void FUN_145c74baa(longlong *param_1)

{
  FUN_145c74c1e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c74be2 FUN_145c74be2 body=60 status=ok
// SIG undefined FUN_145c74be2(void)

void FUN_145c74be2(longlong *param_1)

{
  FUN_145c74cd7(param_1[3],(int)param_1[4]);
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c74c1e FUN_145c74c1e body=121 status=ok
// SIG undefined FUN_145c74c1e(void)

void FUN_145c74c1e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1447a08a2(param_1,param_2);
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



// FUNCTION 145c74c98 FUN_145c74c98 body=63 status=ok
// SIG undefined FUN_145c74c98(void)

void FUN_145c74c98(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x48);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-8] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145c74cd7 FUN_145c74cd7 body=63 status=ok
// SIG undefined FUN_145c74cd7(void)

void FUN_145c74cd7(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145c74d1e FUN_145c74d1e body=347 status=ok
// SIG undefined FUN_145c74d1e(void)

undefined8 * FUN_145c74d1e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_1400ead26(param_1,uVar1);
  *param_1 = &PTR_FUN_14afa6830;
  param_1[5] = &PTR_FUN_14afa6e10;
  param_1[6] = &PTR_LAB_14afa6e50;
  param_1[0x55] = 0x4000000040;
  *(undefined4 *)(param_1 + 0x56) = 0x20;
  param_1[0x57] = 0x40af400000000000;
  param_1[0x58] = 0x40af400000000000;
  param_1[0x59] = 0x409f400000000000;
  param_1[0x5a] = 0x44c800003f800000;
  *(undefined4 *)(param_1 + 0x5b) = 0x3f800000;
  param_1[0x5c] = DAT_14c846330;
  *(undefined4 *)(param_1 + 0x5d) = DAT_14c846338;
  FUN_1446f470e((longlong)param_1 + 0x2ec,L"Wind_Direction",1);
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  FUN_1446f470e(param_1 + 99,L"SimulationOrigin",1);
  FUN_1446f470e(param_1 + 100,L"SimulationOrigin_PreviousFrame",1);
  FUN_1446f470e(param_1 + 0x65,L"SimulationExtents",1);
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0xffffffff;
  *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) | 8;
  *(undefined2 *)(param_1 + 9) = 0;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) & 0xf8 | 6;
  return param_1;
}



// FUNCTION 145c74e7a FUN_145c74e7a body=121 status=ok
// SIG undefined FUN_145c74e7a(void)

void FUN_145c74e7a(longlong param_1)

{
  PSRWLOCK SRWLock;
  
  SRWLock = (PSRWLOCK)0x0;
  if (DAT_14c992a90 != '\0') {
    SRWLock = (PSRWLOCK)(param_1 + 0x280);
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    AcquireSRWLockExclusive(SRWLock);
  }
  FUN_145c74ef4(param_1 + 0x2a8);
  if (*(int *)(param_1 + 0x300) != *(int *)(param_1 + 0x32c)) {
    FUN_14150f0b6(param_1 + 0x2f8);
    FUN_14150ef20(param_1 + 0x2f8);
  }
  if (SRWLock != (PSRWLOCK)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145c74ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive(SRWLock);
    return;
  }
  return;
}



// FUNCTION 145c74ef4 FUN_145c74ef4 body=70 status=ok
// SIG undefined FUN_145c74ef4(void)

void FUN_145c74ef4(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_14150f2ce();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_144727cd0(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 145c74f3a FUN_145c74f3a body=31 status=ok
// SIG undefined FUN_145c74f3a(void)

void FUN_145c74f3a(longlong *param_1)

{
  FUN_1400f80f0();
                    /* WARNING: Could not recover jumptable at 0x000145c74f52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x480))(param_1);
  return;
}



// FUNCTION 145c74f5a FUN_145c74f5a body=122 status=ok
// SIG undefined FUN_145c74f5a(void)

void FUN_145c74f5a(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_145c74fd4();
  if ((*(byte *)(param_1 + 0x390) & 8) != 0) {
    lVar1 = *(longlong *)(param_1 + 0xb0);
    if (lVar1 == 0) {
      lVar1 = FUN_1448abda6(param_1);
    }
    lVar1 = FUN_147eedcd2(lVar1);
    if (lVar1 != 0) {
      if (param_1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_145a74e24();
        uVar2 = FUN_144718840(param_1,uVar2);
      }
      FUN_147ef2352(lVar1 + 0x78,uVar2);
      *(undefined1 *)(param_1 + 0x394) = 2;
      *(byte *)(param_1 + 0x390) = *(byte *)(param_1 + 0x390) & 0xf7;
    }
  }
  return;
}



// FUNCTION 145c74fd4 FUN_145c74fd4 body=37 status=ok
// SIG undefined FUN_145c74fd4(void)

void FUN_145c74fd4(longlong *param_1)

{
  (**(code **)(*param_1 + 0x4d0))(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x000145c74ff2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x520))(param_1);
  return;
}



// FUNCTION 145c74ffa FUN_145c74ffa body=601 status=ok
// SIG undefined FUN_145c74ffa(void)

void FUN_145c74ffa(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((((param_2 == 0) && (*(longlong *)(param_1 + 0x158) != 0)) &&
      (cVar2 = FUN_144729dda(param_1 + 0x150), cVar2 != '\0')) &&
     (lVar3 = (**(code **)(**(longlong **)(param_1 + 0x158) + 0x50))(), lVar3 == param_1 + 0x118)) {
    (**(code **)(**(longlong **)(param_1 + 0x158) + 0x40))(*(longlong **)(param_1 + 0x158),0);
  }
  FUN_145c75254(&local_40,param_2);
  *(undefined4 *)(param_1 + 0x150) = (undefined4)local_40;
  *(undefined4 *)(param_1 + 0x154) = local_40._4_4_;
  *(undefined4 *)(param_1 + 0x158) = uStack_38;
  *(undefined4 *)(param_1 + 0x15c) = uStack_34;
  *(undefined8 *)(param_1 + 0x170) = 0;
  if ((*(longlong *)(param_1 + 0x158) != 0) &&
     (cVar2 = FUN_144729dda(param_1 + 0x150), cVar2 != '\0')) {
    lVar3 = (**(code **)(**(longlong **)(param_1 + 0x158) + 0x38))();
    *(float *)(param_1 + 0x198) = *(float *)(lVar3 + 4) * 0.1;
    plVar1 = *(longlong **)(param_1 + 0x158);
    if (param_1 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_145a6e83e();
      uVar4 = FUN_144718840(param_1,uVar4);
    }
    (**(code **)(*plVar1 + 0x40))(plVar1,uVar4);
    lVar5 = *(longlong *)(param_1 + 0xb0);
    if (((lVar5 != 0) || (lVar5 = FUN_1448abda6(param_1), lVar5 != 0)) &&
       (plVar1 = *(longlong **)(lVar5 + 0x168), plVar1 != (longlong *)0x0)) {
      lVar5 = FUN_1409035a4();
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
          lVar5 + 0x30)) {
        (**(code **)(**(longlong **)(param_1 + 0x158) + 0x78))
                  (*(longlong **)(param_1 + 0x158),&local_40);
        lVar3 = (**(code **)(*plVar1 + 0x340))(plVar1,lVar3,&local_40,&DAT_14c8464e0);
        if ((lVar3 == 0) || (DAT_14c950c29 == '\0')) {
          *(longlong *)(param_1 + 0x170) = lVar3;
          if (lVar3 == 0) {
            if ((*(byte *)((longlong)plVar1 + 0x52a) & 4) == 0) {
              local_40 = &LAB_147ef8dce;
              uStack_38 = 0;
              FUN_147ef8cce(plVar1 + 0x26,local_48,param_1);
            }
            else {
              FUN_147ef8e5a(&local_50);
              FUN_147ef8ddc(plVar1 + 0x22,param_1,local_50);
            }
          }
        }
        else {
          FUN_1456cec3c(lVar3);
          *(longlong *)(param_1 + 0x170) = lVar3;
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c75254 FUN_145c75254 body=82 status=ok
// SIG undefined FUN_145c75254(void)

undefined8 * FUN_145c75254(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  if ((param_2 == (longlong *)0x0) || (lVar2 = (**(code **)(*param_2 + 8))(param_2), lVar2 == 0)) {
    lVar2 = 0;
  }
  FUN_14485c47a(param_1,lVar2);
  cVar1 = FUN_14493c216(param_1,0);
  if (cVar1 == '\0') {
    param_1[1] = param_2;
  }
  return param_1;
}



// FUNCTION 145c752a6 FUN_145c752a6 body=40 status=ok
// SIG undefined FUN_145c752a6(void)

undefined8 FUN_145c752a6(undefined8 param_1,int param_2)

{
  FUN_145c752ce();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c752ce FUN_145c752ce body=145 status=ok
// SIG undefined FUN_145c752ce(void)

void FUN_145c752ce(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a4f2a00;
  FUN_140a07690(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x11];
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
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_145c75360(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c75360 FUN_145c75360 body=53 status=ok
// SIG undefined FUN_145c75360(void)

void FUN_145c75360(longlong *param_1)

{
  FUN_145c75396();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c75396 FUN_145c75396 body=90 status=ok
// SIG undefined FUN_145c75396(void)

void FUN_145c75396(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1401ad22e(param_1,0);
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



// FUNCTION 145c753fc FUN_145c753fc body=152 status=ok
// SIG undefined FUN_145c753fc(void)

undefined8 * FUN_145c753fc(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a6698a0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeac90) {
    FUN_144b3d300(&DAT_14caeac90);
    if (DAT_14caeac90 == -1) {
      FUN_14150f4e6();
      atexit((_func_5014 *)&LAB_14356d766);
      _Init_thread_footer(&DAT_14caeac90);
    }
  }
  return param_1;
}



// FUNCTION 145c75494 FUN_145c75494 body=222 status=ok
// SIG undefined FUN_145c75494(void)

void FUN_145c75494(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [39];
  undefined1 local_21;
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
  local_21 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145c75574(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c75574 FUN_145c75574 body=105 status=ok
// SIG undefined FUN_145c75574(void)

void FUN_145c75574(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x80);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x78);
    lVar3 = 0;
    do {
      FUN_1479a6f40(*(undefined8 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(int *)(param_1 + 0x84) != 0) {
    FUN_1479af7e8(param_1 + 0x78);
    return;
  }
  return;
}



// FUNCTION 145c755de FUN_145c755de body=33 status=ok
// SIG undefined FUN_145c755de(void)

void FUN_145c755de(longlong param_1)

{
  FUN_140402d60();
  FUN_145c75600(param_1 + 0x3a8);
  return;
}



// FUNCTION 145c75600 FUN_145c75600 body=216 status=ok
// SIG undefined FUN_145c75600(void)

void FUN_145c75600(longlong *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_1;
  *param_1 = 0;
  local_28 = (undefined4)param_1[1];
  local_24 = *(undefined4 *)((longlong)param_1 + 0xc);
  param_1[1] = 0;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(byte *)(lVar3 + 0xc80) & 1) == 0) {
    FUN_145c756da(param_1,&local_30);
  }
  else {
    puVar1 = (undefined1 *)(lVar3 + 0xc80);
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    uVar2 = *(undefined4 *)(lVar3 + 0xc7c);
    *puVar1 = 0;
    *(undefined4 *)(lVar3 + 0xc7c) = 0xffffffff;
    FUN_145c756da(param_1,&local_30);
    *(undefined4 *)(lVar3 + 0xc7c) = uVar2;
    *puVar1 = 1;
  }
  FUN_14150f58b(local_30,local_28);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c756da FUN_145c756da body=93 status=ok
// SIG undefined FUN_145c756da(void)

undefined8 * FUN_145c756da(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14150f58b(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_145c75738(param_1,iVar1);
      FUN_14150f5ec(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 145c75738 FUN_145c75738 body=98 status=ok
// SIG undefined FUN_145c75738(void)

void FUN_145c75738(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 5,8);
    iVar1 = (int)(uVar2 >> 5);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x20,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 145c7579a FUN_145c7579a body=74 status=ok
// SIG undefined FUN_145c7579a(void)

undefined8 * FUN_145c7579a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4a7ca0;
  FUN_1449db362(param_1 + 0x3c);
  FUN_145c757e4(param_1 + 8);
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c757e4 FUN_145c757e4 body=187 status=ok
// SIG undefined FUN_145c757e4(void)

void FUN_145c757e4(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x158) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FUN_1400020a8();
  }
  FUN_145c758a0(param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  FUN_145c758d6(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_14094e882(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_14094e8ba(param_1);
  return;
}



// FUNCTION 145c758a0 FUN_145c758a0 body=53 status=ok
// SIG undefined FUN_145c758a0(void)

void FUN_145c758a0(longlong *param_1)

{
  FUN_145c7590c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c758d6 FUN_145c758d6 body=53 status=ok
// SIG undefined FUN_145c758d6(void)

void FUN_145c758d6(longlong *param_1)

{
  FUN_145c75966();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c7590c FUN_145c7590c body=90 status=ok
// SIG undefined FUN_145c7590c(void)

void FUN_145c7590c(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140411364(param_1,0);
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



// FUNCTION 145c75966 FUN_145c75966 body=90 status=ok
// SIG undefined FUN_145c75966(void)

void FUN_145c75966(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1401ad22e(param_1,0);
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



// FUNCTION 145c759c0 FUN_145c759c0 body=157 status=ok
// SIG undefined FUN_145c759c0(void)

void FUN_145c759c0(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x38);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72((longlong *)(param_1 + 0x38),0,0,0x10);
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x48);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72((longlong *)(param_1 + 0x48),0,0,0x10);
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
  }
  if (DAT_14cb0d2b0 == 0) {
    return;
  }
  FUN_145aa735e(DAT_14cb0d2b0,0);
  FUN_145aa7366(DAT_14cb0d2b0,0);
  return;
}



// FUNCTION 145c75a5e FUN_145c75a5e body=31 status=ok
// SIG undefined FUN_145c75a5e(void)

undefined8 FUN_145c75a5e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c75a7e FUN_145c75a7e body=31 status=ok
// SIG undefined FUN_145c75a7e(void)

undefined8 FUN_145c75a7e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c75a9e FUN_145c75a9e body=37 status=ok
// SIG undefined FUN_145c75a9e(void)

void FUN_145c75a9e(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x110);
  FUN_145c75ac4(param_2);
  return;
}



// FUNCTION 145c75ac4 FUN_145c75ac4 body=182 status=ok
// SIG undefined FUN_145c75ac4(void)

undefined8 * FUN_145c75ac4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_1 + 1);
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *param_1 = &PTR_FUN_14b181c00;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  return param_1;
}



// FUNCTION 145c75b86 FUN_145c75b86 body=26 status=ok
// SIG undefined FUN_145c75b86(void)

void FUN_145c75b86(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14494321d(0xa0);
  FUN_145c75ba0(uVar1);
  return;
}



// FUNCTION 145c75ba0 FUN_145c75ba0 body=181 status=ok
// SIG undefined FUN_145c75ba0(void)

undefined8 * FUN_145c75ba0(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14be80840;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xd),4000);
  FUN_1446ddc76(&local_28,"game_session",1);
  FUN_145c6afe4(param_1 + 0x12,local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c75c56 FUN_145c75c56 body=40 status=ok
// SIG undefined FUN_145c75c56(void)

undefined8 FUN_145c75c56(undefined8 param_1,int param_2)

{
  FUN_145c75c7e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c75c7e FUN_145c75c7e body=146 status=ok
// SIG undefined FUN_145c75c7e(void)

void FUN_145c75c7e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc61660;
  FUN_145c75d83(param_1[0x4c],*(undefined4 *)(param_1 + 0x4d));
  if (param_1[0x4c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  FUN_145c75d10(param_1 + 0x2c);
  FUN_145c75dae(param_1 + 7);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c75d10 FUN_145c75d10 body=60 status=ok
// SIG undefined FUN_145c75d10(void)

void FUN_145c75d10(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_145c75d4c(param_1);
  return;
}



// FUNCTION 145c75d4c FUN_145c75d4c body=55 status=ok
// SIG undefined FUN_145c75d4c(void)

void FUN_145c75d4c(longlong *param_1)

{
  FUN_145c75f04(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c75d83 FUN_145c75d83 body=43 status=ok
// SIG undefined FUN_145c75d83(void)

void FUN_145c75d83(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1493633b0(param_1);
    param_1 = param_1 + 200;
  }
  return;
}



// FUNCTION 145c75dae FUN_145c75dae body=108 status=ok
// SIG undefined FUN_145c75dae(void)

void FUN_145c75dae(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x120) = 0;
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1400020a8();
  }
  FUN_145c75e1a(param_1 + 0xd8);
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1400020a8();
  }
  FUN_145c75e52(param_1 + 0x88);
  FUN_145c75d10(param_1);
  return;
}



// FUNCTION 145c75e1a FUN_145c75e1a body=55 status=ok
// SIG undefined FUN_145c75e1a(void)

void FUN_145c75e1a(longlong *param_1)

{
  FUN_145c76068(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c75e52 FUN_145c75e52 body=55 status=ok
// SIG undefined FUN_145c75e52(void)

void FUN_145c75e52(longlong *param_1)

{
  FUN_145c75e8a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c75e8a FUN_145c75e8a body=121 status=ok
// SIG undefined FUN_145c75e8a(void)

void FUN_145c75e8a(longlong param_1,int param_2)

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



// FUNCTION 145c75f04 FUN_145c75f04 body=353 status=ok
// SIG undefined FUN_145c75f04(void)

void FUN_145c75f04(longlong *param_1,int param_2)

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
      FUN_1457f5776(*local_70 + (longlong)iStack_54 * 0x30 + 8);
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
    FUN_14494313c(param_1,param_2);
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
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c76068 FUN_145c76068 body=384 status=ok
// SIG undefined FUN_145c76068(void)

void FUN_145c76068(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
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
  local_50 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_78 = local_58;
  local_70 = local_50;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      lVar2 = *local_80;
      lVar4 = (longlong)iStack_64;
      FUN_1459408f7(*(undefined8 *)(lVar2 + 0x10 + lVar4 * 0x28),
                    *(undefined4 *)(lVar2 + 0x18 + lVar4 * 0x28));
      if (*(longlong *)(lVar2 + 0x10 + lVar4 * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_140549ad6(param_1,param_2);
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
    if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 145c761ea FUN_145c761ea body=146 status=ok
// SIG undefined FUN_145c761ea(void)

code * FUN_145c761ea(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145c7627c();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"FrontLayerTranslucencyGBufferParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FLumenFrontLayerTranslucencyGBufferParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000184;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9f6948;
  return FUN_1462ddb46;
}


