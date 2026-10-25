// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145c284d8 FUN_145c284d8 body=112 status=ok
// SIG undefined FUN_145c284d8(void)

void FUN_145c284d8(undefined8 *param_1)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446f470e(&local_30,L"Children",1);
  FUN_145a5ebc0(*param_1,local_28,local_30,0x1e0);
  FUN_145c2854a(local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c2854a FUN_145c2854a body=841 status=ok
// SIG undefined FUN_145c2854a(void)

void FUN_145c2854a(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined7 uStack_6f;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_145c28894();
  local_70 = 1;
  local_60 = 0;
  FUN_1446ddc76(&local_78,"Slot.MinSize",1);
  local_58[0] = 1;
  local_50 = 0;
  local_68 = 0;
  local_48 = 0;
  local_d8 = 0x2c;
  local_d0 = local_58;
  FUN_141309508(*param_1,local_90,param_1[1],local_78);
  FUN_1449db362(&local_68);
  local_70 = 1;
  local_60 = 0;
  FUN_1446ddc76(&local_98,"Slot.MaxSize",1);
  local_58[0] = 1;
  local_50 = 0;
  local_68 = 0;
  local_48 = 0;
  local_d8 = 0x30;
  local_d0 = local_58;
  FUN_141309508(*param_1,local_90,param_1[1],local_98);
  FUN_1449db362(&local_68);
  local_90[0] = 1;
  local_80 = 0;
  FUN_1446ddc76(&local_a0,"Slot.SizeValue",1);
  local_58[0] = 1;
  local_50 = 0;
  local_88 = 0;
  local_48 = 0;
  local_d8 = 0x24;
  local_d0 = local_58;
  FUN_141309508(*param_1,&local_70,param_1[1],local_a0);
  FUN_1446ddc76(&local_a8,"Slot.MinSize",1);
  iVar2 = (int)local_60;
  lVar3 = (longlong)(int)local_60;
  if (lVar3 < 0) {
    FUN_1446ddc76(&local_b0,"Slot.MaxSize",1);
  }
  else {
    plVar1 = (longlong *)CONCAT71(uStack_6f,local_70);
    if ((int)local_60 < (int)plVar1[1]) {
      FUN_1414f3ac0(plVar1,local_68,lVar3 * 0x58 + *plVar1,local_a8);
    }
    FUN_1446ddc76(&local_b0,"Slot.MaxSize",1);
    if (iVar2 < (int)plVar1[1]) {
      FUN_1414f3ac0(plVar1,local_68,lVar3 * 0x58 + *plVar1,local_b0);
    }
  }
  FUN_1449db362(&local_88);
  local_90[0] = 1;
  local_80 = 0;
  FUN_1446ddc76(&local_b8,"Slot.ShrinkSizeValue",1);
  local_58[0] = 1;
  local_50 = 0;
  local_88 = 0;
  local_48 = 0;
  local_d8 = 0x28;
  local_d0 = local_58;
  FUN_141309508(*param_1,&local_70,param_1[1],local_b8);
  FUN_1446ddc76(&local_c0,"Slot.MinSize",1);
  iVar2 = (int)local_60;
  lVar3 = (longlong)(int)local_60;
  if (lVar3 < 0) {
    FUN_1446ddc76(&local_c8,"Slot.MaxSize",1);
  }
  else {
    plVar1 = (longlong *)CONCAT71(uStack_6f,local_70);
    if ((int)local_60 < (int)plVar1[1]) {
      FUN_1414f3ac0(plVar1,local_68,lVar3 * 0x58 + *plVar1,local_c0);
    }
    FUN_1446ddc76(&local_c8,"Slot.MaxSize",1);
    if (iVar2 < (int)plVar1[1]) {
      FUN_1414f3ac0(plVar1,local_68,lVar3 * 0x58 + *plVar1,local_c8);
    }
  }
  FUN_1449db362(&local_88);
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c28894 FUN_145c28894 body=181 status=ok
// SIG undefined FUN_145c28894(void)

void FUN_145c28894(undefined8 *param_1)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined1 *local_90;
  undefined1 local_80 [24];
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_60 = 1;
  local_50 = 0;
  FUN_1446ddc76(&local_68,"Slot.Padding",1);
  local_90 = local_48;
  local_48[0] = 1;
  local_40 = 0;
  local_58 = 0;
  local_38 = 0;
  local_98 = 8;
  FUN_141309508(*param_1,local_80,param_1[1],local_68);
  FUN_1449db362(&local_58);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c2894a FUN_145c2894a body=40 status=ok
// SIG undefined FUN_145c2894a(void)

undefined8 FUN_145c2894a(undefined8 param_1,int param_2)

{
  FUN_145c28972();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c28972 FUN_145c28972 body=201 status=ok
// SIG undefined FUN_145c28972(void)

void FUN_145c28972(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f86c40;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_145c28a66(param_1 + 0x15);
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_14592016a(param_1 + 0xf,0);
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_145c28a3b(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_140113f3a();
    param_1[0xc] = 0;
  }
  *param_1 = &PTR_FUN_149f85b30;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c28a3b FUN_145c28a3b body=43 status=ok
// SIG undefined FUN_145c28a3b(void)

void FUN_145c28a3b(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146f07854(param_1);
    param_1 = param_1 + 0x1e0;
  }
  return;
}



// FUNCTION 145c28a66 FUN_145c28a66 body=55 status=ok
// SIG undefined FUN_145c28a66(void)

void FUN_145c28a66(longlong *param_1)

{
  FUN_145c28a9e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c28a9e FUN_145c28a9e body=420 status=ok
// SIG undefined FUN_145c28a9e(void)

void FUN_145c28a9e(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
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
      lVar5 = (longlong)iStack_64 * 0x60;
      *(undefined4 *)(lVar2 + 0x50 + lVar5) = 0;
      if (*(longlong *)(lVar2 + 0x48 + lVar5) != 0) {
        FUN_1400020a8();
      }
      FUN_1401bc218(lVar2 + lVar5 + 8);
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1448fc38a(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar4 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar4) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar3 = 0x80;
    if (0x80 < (int)uVar4) {
      uVar3 = uVar4;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar3;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c28c4e FUN_145c28c4e body=143 status=ok
// SIG undefined FUN_145c28c4e(void)

undefined8 * FUN_145c28c4e(undefined8 *param_1)

{
  FUN_140ea0e34();
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  *param_1 = &PTR_FUN_14a535a20;
  param_1[5] = &PTR_FUN_14a535d40;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0x8000000000;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  FUN_1401b5a8c(param_1 + 0x34,0);
  *(byte *)((longlong)param_1 + 0xd9) = *(byte *)((longlong)param_1 + 0xd9) | 1;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0x3f800000;
  FUN_145c28cde(param_1 + 0x34);
  return param_1;
}



// FUNCTION 145c28cde FUN_145c28cde body=36 status=ok
// SIG undefined FUN_145c28cde(void)

void FUN_145c28cde(uint *param_1)

{
  *param_1 = *param_1 & 0xfb5fefdf;
  param_1[4] = param_1[4] & 0xfcff7fff;
  *(byte *)((longlong)param_1 + 0x15) = *(byte *)((longlong)param_1 + 0x15) & 0xf1;
  param_1[2] = param_1[2] & 0xffffcf9f;
  param_1[1] = param_1[1] & 0x7cfff7ff;
  *(byte *)((longlong)param_1 + 0x1b) = *(byte *)((longlong)param_1 + 0x1b) & 0xfb;
  return;
}



// FUNCTION 145c28d0a FUN_145c28d0a body=87 status=ok
// SIG undefined FUN_145c28d0a(void)

undefined8 * FUN_145c28d0a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_140da6ea8(param_1,uVar1);
  *param_1 = &PTR_FUN_14a5a2330;
  *(undefined1 *)(param_1 + 7) = 0;
  FUN_1400b22c2(param_1 + 8,"30fps");
  FUN_1400b22c2(param_1 + 10,"24000fps");
  *(undefined1 *)(param_1 + 0xc) = 0;
  return param_1;
}



// FUNCTION 145c28d6c FUN_145c28d6c body=84 status=ok
// SIG undefined FUN_145c28d6c(void)

undefined8 * FUN_145c28d6c(undefined8 *param_1)

{
  FUN_144a0768c();
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) | 3;
  *param_1 = &PTR_FUN_14a5e3640;
  param_1[5] = &PTR_LAB_14a5e3940;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x1010000;
  *(undefined1 *)(param_1 + 0xb) = 1;
  *(byte *)((longlong)param_1 + 0x5c) = *(byte *)((longlong)param_1 + 0x5c) & 0xfe;
  return param_1;
}



// FUNCTION 145c28dc0 FUN_145c28dc0 body=40 status=ok
// SIG undefined FUN_145c28dc0(void)

undefined8 FUN_145c28dc0(undefined8 param_1,int param_2)

{
  FUN_145c28de8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c28de8 FUN_145c28de8 body=89 status=ok
// SIG undefined FUN_145c28de8(void)

void FUN_145c28de8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a8b8d50;
  FUN_145c28e41(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c28e41 FUN_145c28e41 body=61 status=ok
// SIG undefined FUN_145c28e41(void)

void FUN_145c28e41(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-3] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145c28e86 FUN_145c28e86 body=277 status=ok
// SIG undefined FUN_145c28e86(void)

undefined8 * FUN_145c28e86(undefined8 *param_1)

{
  FUN_140c444d0();
  *param_1 = &PTR_FUN_14a9b6460;
  param_1[6] = &PTR_FUN_14a9b6740;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c9) = 0;
  return param_1;
}



// FUNCTION 145c28f9c FUN_145c28f9c body=55 status=ok
// SIG undefined FUN_145c28f9c(void)

void FUN_145c28f9c(void)

{
  FUN_145c28fd3(DAT_14cb25a00,DAT_14cb25a08);
  DAT_14cb25a08 = 0;
  if (DAT_14cb25a0c == 0) {
    return;
  }
  FUN_147f807b2();
  return;
}



// FUNCTION 145c28fd3 FUN_145c28fd3 body=40 status=ok
// SIG undefined FUN_145c28fd3(void)

void FUN_145c28fd3(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_147f8016a(param_1);
    param_1 = param_1 + 0x30;
  }
  return;
}



// FUNCTION 145c28ffc FUN_145c28ffc body=40 status=ok
// SIG undefined FUN_145c28ffc(void)

undefined8 FUN_145c28ffc(undefined8 param_1,int param_2)

{
  FUN_145c29024();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c29024 FUN_145c29024 body=89 status=ok
// SIG undefined FUN_145c29024(void)

void FUN_145c29024(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ad51f60;
  FUN_145c2907d(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[7] + 0x10))();
  }
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c2907d FUN_145c2907d body=61 status=ok
// SIG undefined FUN_145c2907d(void)

void FUN_145c2907d(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if ((longlong *)param_1[3] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[3] + 0x10))();
    }
    if ((longlong *)*param_1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_1 + 0x10))();
    }
    param_1 = param_1 + 10;
  }
  return;
}



// FUNCTION 145c290c6 FUN_145c290c6 body=84 status=ok
// SIG undefined FUN_145c290c6(void)

undefined8 * FUN_145c290c6(undefined8 *param_1)

{
  FUN_145caa4aa();
  *param_1 = &PTR_FUN_14b3d20a0;
  *(undefined2 *)(param_1 + 0x73) = 0;
  *(undefined8 *)((longlong)param_1 + 0x39c) = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  *(undefined4 *)(param_1 + 0x77) = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  return param_1;
}



// FUNCTION 145c29144 FUN_145c29144 body=103 status=ok
// SIG undefined FUN_145c29144(void)

ulonglong FUN_145c29144(longlong param_1)

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
LAB_145c2918e:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145c2918e;
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



// FUNCTION 145c291ab FUN_145c291ab body=110 status=ok
// SIG undefined FUN_145c291ab(void)

void FUN_145c291ab(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145c2921a(puVar1);
  *puVar1 = &PTR_FUN_14b6d84b0;
  memset(puVar1 + 0x14,0,0x150);
  *(undefined4 *)(puVar1 + 0x3e) = 0x40800000;
  puVar1[0x3f] = 0;
  puVar1[0x40] = 0;
  puVar1[0x41] = 0;
  puVar1[0x42] = 0;
  puVar1[0x43] = 0;
  puVar1[0x44] = 0;
  puVar1[0x45] = 0;
  puVar1[0x46] = 0;
  puVar1[0x47] = 0;
  puVar1[0x48] = 0;
  puVar1[0x49] = 0;
  puVar1[0x4a] = 0;
  return;
}



// FUNCTION 145c2921a FUN_145c2921a body=80 status=ok
// SIG undefined FUN_145c2921a(void)

undefined8 * FUN_145c2921a(undefined8 *param_1)

{
  FUN_14077009c();
  *param_1 = &PTR_FUN_14acaa270;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0x3f800000;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0x89) = 0;
  *(undefined8 *)((longlong)param_1 + 0x91) = 0;
  return param_1;
}



// FUNCTION 145c2926a FUN_145c2926a body=37 status=ok
// SIG undefined FUN_145c2926a(void)

void FUN_145c2926a(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xc0);
  FUN_145c29290(param_2);
  return;
}



// FUNCTION 145c29290 FUN_145c29290 body=153 status=ok
// SIG undefined FUN_145c29290(void)

undefined8 * FUN_145c29290(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *param_1 = &PTR_FUN_14b7ac6c0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x29) = 0;
  *(undefined8 *)((longlong)param_1 + 0x31) = 0;
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
  FUN_1446ddc76(param_1 + 0x13,"CurrentZoomLevel",1);
  param_1[0x14] = 0x3a6ed02d3e4ccccd;
  param_1[0x15] = 0x3c1f44d43ba9cdc4;
  *(undefined4 *)(param_1 + 0x16) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0xb4) = 1;
  *(undefined4 *)(param_1 + 0x17) = 0xbf800000;
  return param_1;
}



// FUNCTION 145c2932a FUN_145c2932a body=190 status=ok
// SIG undefined FUN_145c2932a(void)

void FUN_145c2932a(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xf8);
  *param_2 = &PTR_FUN_14b919270;
  *(undefined4 *)(param_2 + 1) = 0x41200000;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *(undefined4 *)(param_2 + 8) = 0xf00000d0;
  param_2[9] = 0;
  *(undefined4 *)(param_2 + 10) = 0x3f800000;
  *(undefined4 *)(param_2 + 0xb) = 0x40800000;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  *(undefined4 *)(param_2 + 0x12) = 0xf00000d0;
  param_2[0x13] = 0;
  *(undefined4 *)(param_2 + 0x14) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x15) = 0x40000000;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  *(undefined4 *)(param_2 + 0x1c) = 0xf00000d0;
  param_2[0x1d] = 0;
  *(undefined4 *)(param_2 + 0x1e) = 0x3f800000;
  return;
}



// FUNCTION 145c2940c FUN_145c2940c body=97 status=ok
// SIG undefined FUN_145c2940c(void)

undefined8 * FUN_145c2940c(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x310);
  memset(_Dst,0,0x310);
  FUN_145c2946e(_Dst);
  *_Dst = &PTR_FUN_14b9cb700;
  _Dst[0x5e] = 0;
  *(undefined4 *)(_Dst + 0x5f) = 0;
  _Dst[0x60] = 0;
  _Dst[0x61] = 0;
  return _Dst;
}



// FUNCTION 145c2946e FUN_145c2946e body=93 status=ok
// SIG undefined FUN_145c2946e(void)

undefined8 * FUN_145c2946e(undefined8 *param_1)

{
  FUN_140e8cfb8();
  *param_1 = &PTR_LAB_14b9cf200;
  *(undefined4 *)(param_1 + 0x56) = 0;
  *(undefined2 *)((longlong)param_1 + 0x2b4) = 0;
  param_1[0x57] = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2dd) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e5) = 0;
  return param_1;
}



// FUNCTION 145c294cc FUN_145c294cc body=38 status=ok
// SIG undefined FUN_145c294cc(void)

undefined8 FUN_145c294cc(undefined8 param_1,int param_2)

{
  FUN_145c294f2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c294f2 FUN_145c294f2 body=152 status=ok
// SIG undefined FUN_145c294f2(void)

void FUN_145c294f2(undefined8 *param_1)

{
  if (param_1[0x65] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x62] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x60] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5a] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_14b47ae80;
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  FUN_1410ecf08(param_1);
  return;
}



// FUNCTION 145c2958a FUN_145c2958a body=984 status=ok
// SIG undefined FUN_145c2958a(void)

void FUN_145c2958a(longlong param_1)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined8 unaff_RBP;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  longlong local_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong *plStack_d0;
  undefined8 local_64;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar8 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x180))();
  if ((((lVar8 != 0) && (*(longlong *)(lVar8 + 0x1f0) != 0)) &&
      (lVar8 = FUN_14591aa10(), lVar8 != 0)) && (lVar8 = *(longlong *)(lVar8 + 0x30), lVar8 != 0)) {
    iVar6 = *(int *)(param_1 + 0x38);
    uVar9 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x2d0))();
    plVar10 = (longlong *)FUN_14001cc68(0x88,0x10);
    plVar10[1] = (longlong)&DAT_100000001;
    *plVar10 = (longlong)&PTR_FUN_14b989780;
    plVar12 = plVar10 + 2;
    FUN_148aaaa9a(plVar12,uVar9,DAT_14cbcdf30,
                  CONCAT71((int7)((ulonglong)unaff_RBP >> 8),iVar6 == 2) & 0xffffffff);
    local_e8 = plVar12;
    local_e0 = plVar10;
    FUN_148d9b626(&local_e8,plVar12);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    local_d8 = plVar12;
    plStack_d0 = plVar10;
    FUN_143f45a56(lVar8);
    plVar12 = plStack_d0;
    if (plStack_d0 != (longlong *)0x0) {
      LOCK();
      plVar10 = plStack_d0 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plStack_d0)(plStack_d0);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    plVar12 = local_e0;
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_e0 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*local_e0)(local_e0);
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
  lVar8 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x180))();
  if (((((lVar8 != 0) && (*(longlong *)(lVar8 + 0x1f0) != 0)) &&
       ((lVar8 = FUN_1458774f4(), lVar8 != 0 &&
        ((lVar8 = *(longlong *)(lVar8 + 0x30), lVar8 != 0 && (*(longlong *)(param_1 + 0x170) != 0)))
        ))) && (plVar12 = *(longlong **)(param_1 + 0x178), plVar12 != (longlong *)0x0)) &&
     (0 < (int)plVar12[1])) {
    uVar9 = 0;
    iVar6 = (int)plVar12[1];
    do {
      iVar5 = iVar6;
      if (iVar5 == 0) {
        plVar12 = (longlong *)0x0;
        goto LAB_145c29668;
      }
      LOCK();
      iVar6 = (int)plVar12[1];
      bVar14 = iVar5 == iVar6;
      if (bVar14) {
        *(int *)(plVar12 + 1) = iVar5 + 1;
        iVar6 = iVar5;
      }
      UNLOCK();
    } while (!bVar14);
    uVar9 = *(undefined8 *)(param_1 + 0x170);
LAB_145c29668:
    uVar7 = FUN_145c29964(uVar9);
    local_f8 = 0;
    local_f0 = *(longlong *)(param_1 + 0x178);
    if (local_f0 != 0) {
      iVar6 = *(int *)(local_f0 + 8);
      do {
        if (iVar6 == 0) {
          local_f0 = 0;
          goto LAB_145c296b3;
        }
        LOCK();
        iVar2 = *(int *)(local_f0 + 8);
        bVar14 = iVar6 == iVar2;
        if (bVar14) {
          *(int *)(local_f0 + 8) = iVar6 + 1;
          iVar2 = iVar6;
        }
        iVar6 = iVar2;
        UNLOCK();
      } while (!bVar14);
      if (local_f0 != 0) {
        local_f8 = *(undefined8 *)(param_1 + 0x170);
      }
    }
LAB_145c296b3:
    FUN_145c29984(lVar8,&local_f8,uVar7);
    if (iVar5 != 0) {
      LOCK();
      plVar10 = plVar12 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
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
  memset(&local_d8,0,0x98);
  local_64 = 0xffffffff00000080;
  lVar8 = param_1 + 0x1f8;
  FUN_145c29df8(lVar8,&local_d8);
  FUN_145cbdc62(&local_d8);
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1459da824(*(longlong *)(param_1 + 0x50),&local_d8);
    FUN_145c29d58(lVar8,&local_d8);
    if (local_d8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x218) = 1;
    bVar3 = FUN_145d53b76(param_1);
    *(byte *)(param_1 + 0x219) = bVar3 ^ 1;
    uVar4 = FUN_145c29970(*(undefined8 *)(param_1 + 0x50));
    *(undefined1 *)(param_1 + 0x22c) = uVar4;
    FUN_14101cf30(*(undefined8 *)(param_1 + 0x50),&local_d8);
    if ((longlong)(int)plStack_d0 == 0) {
      uVar11 = 0;
    }
    else {
      lVar13 = (longlong)(int)plStack_d0 << 4;
      plVar12 = local_d8;
      do {
        FUN_145c29b92(lVar8,plVar12);
        plVar12 = plVar12 + 2;
        lVar13 = lVar13 + -0x10;
      } while (lVar13 != 0);
      uVar11 = (ulonglong)plStack_d0 & 0xffffffff;
    }
    FUN_14101cee4(local_d8,uVar11);
    if (local_d8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    local_d8 = (longlong *)0x0;
    plStack_d0 = (longlong *)0x0;
    FUN_140056680(&local_e8,L"group_created");
    FUN_145c29a14(param_1,&local_e8,&local_d8);
    if (local_e8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_145c2b43e(param_1);
  if ((local_38 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c29964 FUN_145c29964 body=11 status=ok
// SIG undefined FUN_145c29964(void)

bool FUN_145c29964(longlong param_1)

{
  return *(int *)(param_1 + 0x528) != 0;
}



// FUNCTION 145c29970 FUN_145c29970 body=20 status=ok
// SIG undefined FUN_145c29970(void)

undefined8 FUN_145c29970(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x60);
  if (lVar1 != 0) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(int *)(lVar1 + 0x58) == 1);
  }
  return 0;
}



// FUNCTION 145c29984 FUN_145c29984 body=144 status=ok
// SIG undefined FUN_145c29984(void)

void FUN_145c29984(longlong param_1,undefined8 *param_2,undefined1 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x18) = *param_2;
  plVar2 = (longlong *)param_2[1];
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar3 = *(longlong **)(param_1 + 0x20);
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
    *(longlong **)(param_1 + 0x20) = plVar2;
  }
  *(undefined1 *)(param_1 + 0x78) = param_3;
  FUN_145c2a68e(param_1);
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
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
                    /* WARNING: Could not recover jumptable at 0x000145c29a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x10))(plVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145c29a14 FUN_145c29a14 body=333 status=ok
// SIG undefined FUN_145c29a14(void)

void FUN_145c29a14(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  longlong local_88 [2];
  longlong local_78 [2];
  longlong local_68;
  undefined8 local_60;
  undefined4 *local_58;
  code *local_50;
  longlong *local_48;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar2 = (longlong *)FUN_140773fe2();
  if (plVar2 != (longlong *)0x0) {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x180))();
    uVar1 = FUN_145c29b62(param_1);
    lVar4 = (**(code **)(*plVar2 + 0x2d0))(plVar2,uVar1,uVar3);
    if (lVar4 != 0) {
      FUN_145c2ac5c(param_1);
      param_3 = (longlong *)*param_3;
      if (param_3 == (longlong *)0x0) {
        local_3c = 0;
      }
      else {
        (**(code **)(*param_3 + 0x30))(param_3,&local_68);
        local_3c = thunk_FUN_14657de13(&local_68);
        if (local_68 != 0) {
          FUN_1400020a8();
        }
      }
      local_58 = &local_3c;
      local_48 = &local_68;
      local_50 = FUN_1441ce90e;
      local_68 = param_1;
      local_60 = param_2;
      FUN_140056680(local_78,L"group_status");
      FUN_140056680(local_88,&DAT_14b4f37c6);
      FUN_1414f3dba(lVar4,local_88,local_78,&local_50);
      if (local_88[0] != 0) {
        FUN_1400020a8();
      }
      if (local_78[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c29b62 FUN_145c29b62 body=48 status=ok
// SIG undefined FUN_145c29b62(void)

undefined4 FUN_145c29b62(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x2d0))();
  lVar3 = FUN_14119d4d6(uVar2);
  if (lVar3 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(lVar3 + 0xe0);
  }
  return uVar1;
}



// FUNCTION 145c29b92 FUN_145c29b92 body=187 status=ok
// SIG undefined FUN_145c29b92(void)

void FUN_145c29b92(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  undefined8 *local_38;
  longlong *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar3 = *(int *)(param_1 + 0x50);
  iVar4 = *(int *)(param_1 + 0x7c);
  local_48 = *(undefined8 *)*param_2;
  local_40 = (longlong *)((undefined8 *)*param_2)[1];
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  local_38 = &local_48;
  local_30 = param_2;
  FUN_145c2a266(param_1 + 0x48,local_24);
  plVar5 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x7c) != iVar3 - iVar4) {
    FUN_145c29ef6(param_1);
    FUN_145c29c4e(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c29c4e FUN_145c29c4e body=265 status=ok
// SIG undefined FUN_145c29c4e(void)

void FUN_145c29c4e(longlong param_1)

{
  int iVar1;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  longlong local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar1 = *(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x7c);
  *(int *)(param_1 + 0x24) = iVar1;
  *(int *)(param_1 + 0x30) = iVar1;
  *(undefined8 *)(param_1 + 0x28) = 0;
  local_30 = param_1 + 0x58;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if (*(int *)(param_1 + 0x70) != 0) {
    FUN_1449c0562(&local_38);
  }
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_58 = local_38;
  local_50 = local_30;
  local_60 = (longlong *)(param_1 + 0x48);
  if (iStack_24 < *(int *)(local_30 + 0x18)) {
    do {
      if (*(int *)(*(longlong *)(*local_60 + 0x10 + (longlong)iStack_44 * 0x28) + 0x14) == 0) {
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      }
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < *(int *)(local_50 + 0x18));
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c29d58 FUN_145c29d58 body=158 status=ok
// SIG undefined FUN_145c29d58(void)

void FUN_145c29d58(longlong *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_2 + 1) == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  else {
    puVar2 = (undefined2 *)*param_2;
  }
  uVar1 = FUN_144a1ccda(puVar2,0);
  local_28 = 0;
  uStack_20 = 0;
  FUN_144a83b10(&local_28,uVar1);
  if (&local_28 == param_1) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_28;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_20;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_20._4_4_;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c29df8 FUN_145c29df8 body=160 status=ok
// SIG undefined FUN_145c29df8(void)

longlong * FUN_145c29df8(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = param_2[2];
    param_2[2] = 0;
    *(int *)(param_1 + 3) = (int)param_2[3];
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_2[3] = 0;
  }
  *(undefined8 *)((longlong)param_1 + 0x2d) = *(undefined8 *)((longlong)param_2 + 0x2d);
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x24);
  lVar3 = param_2[5];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(int *)(param_1 + 4) = (int)param_2[4];
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar1;
  *(int *)(param_1 + 5) = (int)lVar3;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar2;
  FUN_145c2b25e(param_1 + 7,param_2 + 7);
  FUN_145c29e98(param_1 + 9,param_2 + 9);
  return param_1;
}



// FUNCTION 145c29e98 FUN_145c29e98 body=93 status=ok
// SIG undefined FUN_145c29e98(void)

longlong FUN_145c29e98(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_145c2a8b4(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 145c29ef6 FUN_145c29ef6 body=564 status=ok
// SIG undefined FUN_145c29ef6(void)

/* WARNING: Removing unreachable block (ram,0x000145c2a121) */

void FUN_145c29ef6(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined2 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  ulonglong uStack_80;
  undefined2 *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_88 = 0;
  uStack_80 = 0;
  FUN_145c2a12c(param_1 + 0x48,&local_88);
  lVar1 = local_88;
  local_98 = 0;
  uStack_90 = 0;
  lVar9 = (longlong)(int)uStack_80;
  if (lVar9 == 0) {
    uVar6 = 0;
  }
  else {
    lVar7 = 0;
    puVar5 = local_70;
    uVar2 = local_68;
    do {
      local_68 = uVar2;
      local_70 = puVar5;
      (**(code **)(**(longlong **)(lVar1 + lVar7) + 0x30))(*(longlong **)(lVar1 + lVar7),&local_70);
      uVar6 = uStack_90;
      lVar8 = (longlong)(int)uStack_90;
      uVar3 = (int)uStack_90 + 1;
      uStack_90 = CONCAT44(uStack_90._4_4_,uVar3);
      if (uStack_90._4_4_ < uVar3) {
        FUN_1447a1bd6(&local_98,uVar6 & 0xffffffff);
      }
      lVar8 = lVar8 * 0x10;
      *(undefined8 *)(local_98 + lVar8) = 0;
      *(undefined2 **)(local_98 + lVar8) = local_70;
      local_70 = (undefined2 *)0x0;
      puVar5 = local_70;
      *(int *)(local_98 + 8 + lVar8) = (int)local_68;
      *(undefined4 *)(local_98 + 0xc + lVar8) = local_68._4_4_;
      local_68 = 0;
      uVar2 = local_68;
      local_68 = 0;
      local_70 = (undefined2 *)0x0;
      lVar7 = lVar7 + 0x10;
    } while (lVar9 * 0x10 != lVar7);
    uVar6 = uStack_90 & 0xffffffff;
  }
  FUN_140e836da(local_98,uVar6);
  FUN_144a8b2a0(&local_a8,&local_98,&DAT_149e06196);
  FUN_1407ec8fc(&local_70,param_1,&local_a8);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  puVar5 = local_70;
  if ((int)local_68 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  uVar4 = FUN_144a1ccda(puVar5,0);
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_144a83b10(&local_a8,uVar4);
  if ((longlong *)(param_1 + 0x10) == &local_a8) {
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x10) = local_a8;
    local_a8 = 0;
    *(undefined4 *)(param_1 + 0x18) = (undefined4)uStack_a0;
    *(undefined4 *)(param_1 + 0x1c) = uStack_a0._4_4_;
  }
  if (local_70 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_98,uStack_90 & 0xffffffff);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  FUN_14127b1cd(local_88,uStack_80 & 0xffffffff);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c2a12c FUN_145c2a12c body=313 status=ok
// SIG undefined FUN_145c2a12c(void)

void FUN_145c2a12c(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
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
  FUN_1459b6bf6(param_2,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  local_40 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_68 = local_48;
  local_60 = local_40;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      puVar4 = (undefined8 *)((longlong)iStack_54 * 0x28 + *local_70);
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1413eac7e(param_2,iVar1);
      }
      lVar2 = *param_2;
      *(undefined8 *)(lVar2 + (longlong)iVar1 * 0x10) = *puVar4;
      lVar3 = puVar4[1];
      *(longlong *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = lVar3;
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c2a266 FUN_145c2a266 body=404 status=ok
// SIG undefined FUN_145c2a266(void)

undefined4 * FUN_145c2a266(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145c2a3fc(param_1,local_40);
  puVar2 = (undefined8 *)*param_3;
  puVar3 = (undefined8 *)param_3[1];
  *local_38 = *puVar2;
  lVar12 = puVar2[1];
  local_38[1] = lVar12;
  if (lVar12 != 0) {
    LOCK();
    *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
    UNLOCK();
  }
  local_38[2] = *puVar3;
  lVar12 = puVar3[1];
  local_38[3] = lVar12;
  if (lVar12 != 0) {
    LOCK();
    *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(local_38 + 4) = 0xffffffff;
  local_44 = local_40[0];
  plVar4 = (longlong *)*local_38;
  plVar5 = (longlong *)local_38[1];
  if (plVar5 == (longlong *)0x0) {
    uVar8 = (**(code **)(*plVar4 + 0x40))();
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    uVar8 = (**(code **)(*plVar4 + 0x40))();
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  cVar7 = FUN_145c2a4e4(param_1,uVar8,local_38,&local_44);
  uVar6 = local_44;
  if (cVar7 == '\0') {
    uVar9 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar11 = 1;
    if (3 < uVar9) {
      uVar10 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
      lVar12 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar12 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar11 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_38 + 0x24) = uVar8;
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 4) =
           *(undefined4 *)
            (lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar11;
      FUN_145c2aa66(param_1);
    }
  }
  *param_2 = uVar6;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c2a3fc FUN_145c2a3fc body=231 status=ok
// SIG undefined FUN_145c2a3fc(void)

int * FUN_145c2a3fc(longlong *param_1,int *param_2)

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



// FUNCTION 145c2a4e4 FUN_145c2a4e4 body=242 status=ok
// SIG undefined FUN_145c2a4e4(void)

undefined8 FUN_145c2a4e4(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined8 uVar13;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_40 = *param_3;
    plVar4 = (longlong *)param_3[1];
    local_38 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      iVar12 = FUN_145c2a5d8(param_1,param_2,&local_40);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      iVar12 = FUN_145c2a5d8(param_1);
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
    if (iVar12 != -1) {
      puVar3 = (undefined4 *)(*param_1 + (longlong)iVar12 * 0x28);
      FUN_145dd6f6a(puVar3);
      uVar5 = *(undefined4 *)param_3;
      uVar6 = *(undefined4 *)((longlong)param_3 + 4);
      uVar7 = *(undefined4 *)(param_3 + 1);
      uVar8 = *(undefined4 *)((longlong)param_3 + 0xc);
      uVar9 = *(undefined4 *)((longlong)param_3 + 0x14);
      uVar10 = *(undefined4 *)(param_3 + 3);
      uVar11 = *(undefined4 *)((longlong)param_3 + 0x1c);
      puVar3[4] = *(undefined4 *)(param_3 + 2);
      puVar3[5] = uVar9;
      puVar3[6] = uVar10;
      puVar3[7] = uVar11;
      *puVar3 = uVar5;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      FUN_145dd6fd0(param_1,*param_4);
      *param_4 = iVar12;
      uVar13 = 1;
      goto LAB_145c2a50a;
    }
  }
  uVar13 = 0;
LAB_145c2a50a:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c2a5d8 FUN_145c2a5d8 body=181 status=ok
// SIG undefined FUN_145c2a5d8(void)

int FUN_145c2a5d8(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      lVar6 = *param_1;
      do {
        lVar7 = (longlong)iVar8;
        puVar3 = *(undefined8 **)(lVar6 + lVar7 * 0x28);
        plVar5 = *(longlong **)(lVar6 + 8 + lVar7 * 0x28);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        if (puVar3 == (undefined8 *)*param_3) {
          cVar4 = '\x01';
        }
        else {
          cVar4 = (**(code **)*puVar3)();
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
        if (cVar4 != '\0') {
          return iVar8;
        }
        lVar6 = *param_1;
        iVar8 = *(int *)(lVar6 + 0x20 + lVar7 * 0x28);
      } while (iVar8 != -1);
    }
  }
  return -1;
}



// FUNCTION 145c2a68e FUN_145c2a68e body=548 status=ok
// SIG undefined FUN_145c2a68e(void)

void FUN_145c2a68e(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_98 [36];
  undefined1 local_74 [4];
  undefined8 local_70;
  longlong *local_68;
  undefined4 local_5c;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar9 = (int)plVar3[1];
    do {
      if (iVar9 == 0) goto LAB_145c2a6f9;
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar14 = iVar9 == iVar6;
      if (bVar14) {
        *(int *)(plVar3 + 1) = iVar9 + 1;
        iVar6 = iVar9;
      }
      iVar9 = iVar6;
      UNLOCK();
    } while (!bVar14);
    lVar11 = *(longlong *)(param_1 + 0x18);
    if (lVar11 != 0) {
      FUN_14068ded2(param_1 + 0x28,0);
      cVar7 = FUN_1414e62ca(lVar11);
      if ((cVar7 == '\0') && (*(char *)(param_1 + 0x78) == '\0')) {
        FUN_14101cf30(lVar11,&local_58);
        lVar5 = local_58;
        lVar13 = (longlong)local_50;
        if (lVar13 == 0) {
          local_50 = 0;
        }
        else {
          lVar12 = 0;
          do {
            puVar4 = *(undefined8 **)(lVar5 + lVar12);
            if (*(int *)((longlong)puVar4 + 0x14) == 0) {
              local_70 = *puVar4;
              local_68 = (longlong *)puVar4[1];
              if (local_68 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_68 + 1) = (int)local_68[1] + 1;
                UNLOCK();
              }
              local_5c = FUN_145ce2ae6(lVar11,&local_70);
              FUN_144984904(param_1 + 0x28,local_74,&local_5c,0);
              plVar10 = local_68;
              if (local_68 != (longlong *)0x0) {
                LOCK();
                plVar2 = local_68 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)*local_68)(local_68);
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
            lVar12 = lVar12 + 0x10;
          } while (lVar13 * 0x10 != lVar12);
        }
        FUN_14101cee4(local_58,local_50);
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        plVar10 = (longlong *)FUN_14479d2ce(param_1 + 0x10);
        if (plVar10 != (longlong *)0x0) {
          lVar11 = FUN_1403ca142();
          if ((*(int *)(lVar11 + 0x38) <= *(int *)(plVar10[2] + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(plVar10[2] + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
              lVar11 + 0x30)) {
            bVar8 = (**(code **)(*plVar10 + 0x498))(plVar10);
            if (bVar8 < 8) {
              FUN_148d8d46a(param_1);
            }
            else if (*(longlong *)(param_1 + 0x80) == 0) {
              FUN_148d9a992(&local_58,param_1);
              FUN_1412a3750(&DAT_14cb7df98,&local_70,&local_58);
              FUN_1449db362(&local_58);
              *(undefined8 *)(param_1 + 0x80) = local_70;
            }
          }
        }
      }
    }
    LOCK();
    plVar10 = plVar3 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
LAB_145c2a6f9:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c2a8b4 FUN_145c2a8b4 body=433 status=ok
// SIG undefined FUN_145c2a8b4(void)

longlong * FUN_145c2a8b4(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    iVar7 = 0;
    local_48 = plVar1;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_50);
      iVar7 = (int)param_1[5];
    }
    local_70 = local_50;
    local_68 = local_48;
    local_60 = local_40;
    uVar5 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar6 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar7) || (local_60 = uVar5, local_48 != plVar1)) {
      do {
        do {
          local_60 = uVar5;
          FUN_145dd6f6a((longlong)iVar6 * 0x28 + *local_78);
          local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
          FUN_1449c0562(&local_70);
          iVar6 = local_60._4_4_;
          uVar5 = local_60;
        } while (local_60._4_4_ != iVar7);
      } while ((local_68 != plVar1) || (local_78 != param_1));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar4 = param_2[3];
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
      *(int *)(param_1 + 3) = (int)lVar4;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145c2aa66 FUN_145c2aa66 body=501 status=ok
// SIG undefined FUN_145c2aa66(void)

void FUN_145c2aa66(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar6 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)((longlong)plVar10 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar3 != uVar11);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar6 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar12 = local_68._4_4_;
      local_68 = uVar6;
      do {
        lVar4 = *local_80;
        lVar9 = (longlong)iVar12;
        plVar10 = *(longlong **)(lVar4 + lVar9 * 0x28);
        plVar5 = *(longlong **)(lVar4 + 8 + lVar9 * 0x28);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        lVar4 = lVar4 + lVar9 * 0x28;
        iVar7 = (**(code **)(*plVar10 + 0x40))();
        uVar8 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar4 + 0x24) = iVar7;
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)(lVar4 + 0x20) =
             *(undefined4 *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(int *)((longlong)plVar10 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar12;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar5 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
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
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar12 = local_68._4_4_;
        uVar6 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar6;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c2ac5c FUN_145c2ac5c body=1537 status=ok
// SIG undefined FUN_145c2ac5c(void)

/* WARNING: Removing unreachable block (ram,0x000145c2b17a) */
/* WARNING: Removing unreachable block (ram,0x000145c2b184) */

void FUN_145c2ac5c(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  char cVar9;
  undefined1 uVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  longlong lVar14;
  wchar_t *pwVar15;
  longlong *plVar16;
  undefined1 auStack_128 [32];
  longlong local_108;
  undefined4 local_100;
  int local_fc;
  undefined8 local_f8;
  longlong *local_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [5];
  undefined3 uStack_d3;
  longlong local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_78 = 0;
  uStack_70 = 0;
  lVar14 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x180))();
  if (((lVar14 == 0) || (*(longlong *)(lVar14 + 0x1f0) == 0)) ||
     (lVar14 = FUN_140d6e14c(), lVar14 == 0)) {
    local_108 = 0;
  }
  else {
    local_108 = *(longlong *)(lVar14 + 0x30);
  }
  FUN_145c2b2ec(param_1,&local_88);
  local_100 = FUN_145c29b62(param_1);
  uVar7 = local_98;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    local_fc = *(int *)(param_1 + 0x220);
    iVar4 = *(int *)(param_1 + 0x228);
    local_d0 = param_1 + 0x250;
    _local_d8 = 0x100000000;
    uStack_c8 = 0xffffffff;
    local_c0 = local_c0 & 0xffffffff00000000;
    if (*(int *)(param_1 + 0x268) != 0) {
      FUN_1449c0562(local_d8);
    }
    local_98 = uStack_c8;
    uVar7 = local_98;
    local_90 = (undefined4)local_c0;
    local_8c = local_c0._4_4_;
    local_a8 = _local_d8;
    local_a0 = local_d0;
    local_98._4_4_ = (int)((ulonglong)uStack_c8 >> 0x20);
    local_b0 = (longlong *)(param_1 + 0x240);
    if (local_98._4_4_ < *(int *)(local_d0 + 0x18)) {
      iVar11 = local_98._4_4_;
      local_98 = uVar7;
      do {
        lVar14 = *local_b0;
        local_d8 = (undefined1  [5])CONCAT14(0,local_d8._0_4_);
        local_c0 = 0;
        uStack_b8 = 0;
        local_d0 = 0;
        uStack_c8 = 0;
        puVar5 = *(undefined8 **)(lVar14 + 0x10 + (longlong)iVar11 * 0x28);
        plVar16 = (longlong *)*puVar5;
        plVar6 = (longlong *)puVar5[1];
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
        }
        (**(code **)(*plVar16 + 0x30))(plVar16,&local_e8);
        uVar12 = thunk_FUN_14657de13(&local_e8);
        _local_d8 = CONCAT44(stack0xffffffffffffff2c,uVar12);
        if (local_e8 != 0) {
          FUN_1400020a8();
        }
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar16 = plVar6 + 1;
          *(int *)plVar16 = (int)*plVar16 + -1;
          UNLOCK();
          if ((int)*plVar16 == 0) {
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
        plVar16 = (longlong *)(lVar14 + (longlong)iVar11 * 0x28 + 0x10);
        if (local_88 == 0) {
LAB_145c2afad:
          if (local_108 == 0) {
            local_d8 = (undefined1  [5])CONCAT14(0,local_d8._0_4_);
          }
          else {
            uVar7 = *(undefined8 *)*plVar16;
            plVar6 = (longlong *)((undefined8 *)*plVar16)[1];
            if (plVar6 == (longlong *)0x0) {
              uVar10 = FUN_140b70752(local_108,local_100,uVar7);
              local_d8 = (undefined1  [5])CONCAT14(uVar10,local_d8._0_4_);
            }
            else {
              LOCK();
              *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
              UNLOCK();
              uVar10 = FUN_140b70752(local_108,local_100,uVar7);
              local_d8 = (undefined1  [5])CONCAT14(uVar10,local_d8._0_4_);
              LOCK();
              plVar1 = plVar6 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
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
          uVar7 = *(undefined8 *)(param_1 + 0x168);
          local_f8 = *(undefined8 *)*plVar16;
          plVar6 = (longlong *)((undefined8 *)*plVar16)[1];
          if (plVar6 == (longlong *)0x0) {
            local_f0 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
            UNLOCK();
            local_f0 = plVar6;
          }
          FUN_140b7124e(uVar7,&local_e8,&local_f8);
          if (local_c0 != 0) {
            FUN_1400020a8();
          }
          plVar1 = local_f0;
          local_c0 = local_e8;
          uStack_b8 = uStack_e0;
          local_e8 = 0;
          uStack_e0 = 0;
          if (local_f0 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_f0 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_f0)(local_f0);
              LOCK();
              piVar3 = (int *)((longlong)plVar1 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*plVar1 + 0x10))(plVar1);
              }
            }
          }
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar6 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
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
          pwVar15 = L"group_client";
          if (*(int *)(*plVar16 + 0x14) == 0) {
            pwVar15 = L"local_client";
          }
        }
        else {
          puVar5 = *(undefined8 **)*plVar16;
          plVar6 = (longlong *)((undefined8 *)*plVar16)[1];
          if (plVar6 == (longlong *)0x0) {
            cVar9 = (**(code **)*puVar5)();
            uVar7 = _local_d8;
          }
          else {
            LOCK();
            *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
            UNLOCK();
            cVar9 = (**(code **)*puVar5)();
            LOCK();
            plVar1 = plVar6 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            uVar7 = _local_d8;
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar6)(plVar6);
              LOCK();
              piVar3 = (int *)((longlong)plVar6 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              uVar7 = _local_d8;
              if (*piVar3 == 0) {
                (**(code **)(*plVar6 + 0x10))(plVar6);
                uVar7 = _local_d8;
              }
            }
          }
          _local_d8 = uVar7;
          if (cVar9 == '\0') goto LAB_145c2afad;
          uStack_d3 = (undefined3)((ulonglong)uVar7 >> 0x28);
          local_d8._0_4_ = (undefined4)uVar7;
          local_d8 = (undefined1  [5])CONCAT14(0,local_d8._0_4_);
          FUN_140b74390(*(undefined8 *)(param_1 + 0x168),&local_e8);
          if (local_c0 != 0) {
            FUN_1400020a8();
          }
          pwVar15 = L"local_leader";
          if (local_fc < iVar4) {
            pwVar15 = L"group_host";
          }
          local_c0 = local_e8;
          uStack_b8 = uStack_e0;
        }
        FUN_14020fad6(&local_d0,pwVar15);
        uVar8 = uStack_70;
        lVar14 = (longlong)(int)uStack_70;
        uVar13 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar13);
        if (uStack_70._4_4_ < uVar13) {
          FUN_145c2b3aa(&local_78,uVar8 & 0xffffffff);
        }
        *(undefined1 *)(local_78 + 4 + lVar14 * 0x28) = local_d8[4];
        *(undefined4 *)(local_78 + lVar14 * 0x28) = local_d8._0_4_;
        *(undefined8 *)(local_78 + 8 + lVar14 * 0x28) = 0;
        *(longlong *)(local_78 + 8 + lVar14 * 0x28) = local_d0;
        *(undefined4 *)(local_78 + 0x10 + lVar14 * 0x28) = (undefined4)uStack_c8;
        *(undefined4 *)(local_78 + 0x14 + lVar14 * 0x28) = uStack_c8._4_4_;
        *(undefined8 *)(local_78 + 0x18 + lVar14 * 0x28) = 0;
        *(ulonglong *)(local_78 + 0x18 + lVar14 * 0x28) = local_c0;
        *(undefined4 *)(local_78 + 0x20 + lVar14 * 0x28) = (undefined4)uStack_b8;
        *(undefined4 *)(local_78 + 0x24 + lVar14 * 0x28) = uStack_b8._4_4_;
        uStack_b8 = 0;
        local_c0 = 0;
        uStack_c8 = 0;
        local_d0 = 0;
        local_98 = CONCAT44(local_98._4_4_,(uint)local_98 & ~local_a8._4_4_);
        FUN_1449c0562(&local_a8);
        iVar11 = local_98._4_4_;
        uVar7 = local_98;
      } while (local_98._4_4_ < *(int *)(local_a0 + 0x18));
    }
  }
  local_98 = uVar7;
  FUN_145c2b25e(param_1 + 0x230,&local_78);
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_80 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar3 = (int *)((longlong)local_80 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_80 + 0x10))(local_80);
      }
    }
  }
  FUN_145c2b2ac(local_78,uStack_70 & 0xffffffff);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c2b25e FUN_145c2b25e body=78 status=ok
// SIG undefined FUN_145c2b25e(void)

longlong * FUN_145c2b25e(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_145c2b2ac(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 145c2b2ac FUN_145c2b2ac body=63 status=ok
// SIG undefined FUN_145c2b2ac(void)

void FUN_145c2b2ac(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145c2b2ec FUN_145c2b2ec body=189 status=ok
// SIG undefined FUN_145c2b2ec(void)

undefined8 * FUN_145c2b2ec(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  undefined **local_48 [3];
  byte local_30;
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x2d0))();
  plVar2 = (longlong *)FUN_14119d4d6(uVar1);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x350))(plVar2,local_48);
    FUN_1408e4d18(local_48,param_2);
    local_48[0] = &PTR_FUN_14a5af930;
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    local_48[0] = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_30])();
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145c2b3aa FUN_145c2b3aa body=147 status=ok
// SIG undefined FUN_145c2b3aa(void)

void FUN_145c2b3aa(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145c2b43e FUN_145c2b43e body=639 status=ok
// SIG undefined FUN_145c2b43e(void)

void FUN_145c2b43e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  void *_Src;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_78 [32];
  void *local_58;
  uint local_50;
  undefined8 local_48;
  void *pvStack_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(longlong *)(param_1 + 0x50) != 0) && (iVar4 = FUN_1411eec94(param_1 + 0x38), iVar4 == 2)) {
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      local_48 = 0;
      pvStack_40 = (void *)0x0;
      local_38 = 0;
      FUN_145c2b718(uVar3,&local_48,1);
      local_58 = pvStack_40;
    }
    else {
      FUN_14119d664(*(longlong *)(param_1 + 0x40),&local_58);
      _Src = local_58;
      local_48 = CONCAT44(local_48._4_4_,1);
      pvStack_40 = (void *)0x0;
      local_38 = CONCAT44(local_38._4_4_,local_50);
      if ((longlong)(int)local_50 == 0) {
        local_38 = (ulonglong)local_50;
      }
      else {
        FUN_1446dd670(&pvStack_40,local_50,0);
        memcpy(pvStack_40,_Src,(longlong)(int)local_50 * 2);
      }
      FUN_145c2b718(uVar3,&local_48,1);
      if (pvStack_40 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
    FUN_1414f40b2(param_1);
  }
  iVar4 = FUN_1411eec94(param_1 + 0x38);
  if (iVar4 != 2) goto LAB_145c2b539;
  plVar5 = (longlong *)FUN_14001cc68(0x28,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b4eb230;
  FUN_145c2b6be(plVar5 + 2,param_1);
  if (plVar5 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x78) = 0x10;
    plVar6 = *(longlong **)(param_1 + 0x80);
    if (plVar6 == (longlong *)0x0) goto LAB_145c2b539;
    *(undefined8 *)(param_1 + 0x80) = 0;
LAB_145c2b5fb:
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
    if (plVar5 == (longlong *)0x0) goto LAB_145c2b539;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x78) = plVar5 + 2;
    plVar6 = *(longlong **)(param_1 + 0x80);
    if (plVar5 == plVar6) {
      LOCK();
      plVar6 = plVar5 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x80) = plVar5;
      if (plVar6 != (longlong *)0x0) goto LAB_145c2b5fb;
    }
  }
  LOCK();
  plVar6 = plVar5 + 1;
  *(int *)plVar6 = (int)*plVar6 + -1;
  UNLOCK();
  if ((int)*plVar6 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
LAB_145c2b539:
  FUN_1414f3fa8(*(undefined8 *)(param_1 + 0x30));
  if ((*(int *)(param_1 + 0xf0) != 0) && (*(longlong **)(param_1 + 0xe8) != (longlong *)0x0)) {
    local_48 = 0;
    pvStack_40 = (void *)CONCAT44(pvStack_40._4_4_,0xffffffff);
    (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x60))();
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c2b6be FUN_145c2b6be body=89 status=ok
// SIG undefined FUN_145c2b6be(void)

undefined8 * FUN_145c2b6be(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_145c2b8f2(&local_20,param_1);
  param_1[2] = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c2b718 FUN_145c2b718 body=133 status=ok
// SIG undefined FUN_145c2b718(void)

void FUN_145c2b718(longlong *param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145c2b79e();
  if (param_3 != '\0') {
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
    (**(code **)(*param_1 + 0xf0))(param_1,&local_38);
    plVar3 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_30)(plStack_30);
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c2b79e FUN_145c2b79e body=93 status=ok
// SIG undefined FUN_145c2b79e(void)

void FUN_145c2b79e(longlong *param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  
  *(undefined4 *)(param_1 + 0xa5) = *param_2;
  param_2 = param_2 + 2;
  FUN_144a787a6(param_1 + 0xa6,param_2);
  if (*(char *)((longlong)param_1 + 0x21) == '\x01') {
    uVar1 = CONCAT71((int7)((ulonglong)param_2 >> 8),(char)param_1[0xa4]) ^ 1;
    if (((int)param_1[0xa5] == 0 & (byte)uVar1) == 0) {
      (**(code **)(*param_1 + 0x110))(param_1,uVar1,(int)param_1[0xa5] == 0);
    }
  }
  *(undefined1 *)(param_1 + 0xa4) = 1;
  return;
}



// FUNCTION 145c2b7fc FUN_145c2b7fc body=141 status=ok
// SIG undefined FUN_145c2b7fc(void)

void FUN_145c2b7fc(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_88 [40];
  longlong local_60 [2];
  undefined1 local_50 [48];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_145c2b8a8(local_60,param_1 + 0x528);
  FUN_145c2b88a(param_1,local_50,&DAT_14cb978c0,local_60);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1458291a6(param_1,local_50,param_2);
  FUN_14119d498(local_50);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c2b88a FUN_145c2b88a body=29 status=ok
// SIG undefined FUN_145c2b88a(void)

undefined8 FUN_145c2b88a(longlong param_1,undefined8 param_2)

{
  FUN_1414f3eb8(param_2,param_1 + 0x28);
  return param_2;
}



// FUNCTION 145c2b8a8 FUN_145c2b8a8 body=74 status=ok
// SIG undefined FUN_145c2b8a8(void)

undefined8 FUN_145c2b8a8(undefined8 param_1,uint *param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  
  puVar2 = *(undefined2 **)(param_2 + 2);
  puVar1 = &DAT_149dfb77a;
  if ((ulonglong)*param_2 < 4) {
    puVar1 = (undefined2 *)(&PTR_DAT_14b4f79b8)[*param_2];
  }
  if (param_2[4] == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140002266(param_1,L"%s:%s",puVar1,puVar2);
  return param_1;
}



// FUNCTION 145c2b8f2 FUN_145c2b8f2 body=223 status=ok
// SIG undefined FUN_145c2b8f2(void)

undefined8 FUN_145c2b8f2(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  local_28 = 3;
  *local_30 = &PTR_LAB_14b3ecf50;
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
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14b4f2490;
  local_30[3] = param_2;
  local_30[4] = FUN_14605f09e;
  FUN_1412a3750(&DAT_14cb7df68,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c2b9de FUN_145c2b9de body=454 status=ok
// SIG undefined FUN_145c2b9de(void)

undefined8 * FUN_145c2b9de(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
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
  *param_1 = &PTR_FUN_14b376c20;
  *(undefined4 *)(param_1 + 0x16) = 0x1910f;
  param_1[0x17] = "skill_effect";
  lVar4 = FUN_145c2bba6();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar4);
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
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145c2bab5;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145c2bab5:
  FUN_1400b22c2(local_58,"GbxSkills.Skill Effect");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c2bba6 FUN_145c2bba6 body=57 status=ok
// SIG undefined FUN_145c2bba6(void)

void FUN_145c2bba6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb650c0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb650c0 = FUN_140002ddd(FUN_146508238,uVar1,L"GbxSkillEffectDef");
  }
  return;
}



// FUNCTION 145c2bbdf FUN_145c2bbdf body=201 status=ok
// SIG undefined FUN_145c2bbdf(void)

void FUN_145c2bbdf(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined1 auStack_b8 [32];
  undefined **local_98;
  undefined *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_145c2bcaa();
  local_60 = *(undefined4 *)(param_6 + 1);
  local_68 = *param_6;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1448f70da(*param_4,&DAT_14c9f0a28,param_5);
  local_88 = &DAT_14c9f0a28;
  local_80 = param_5;
  local_78 = *(undefined4 *)param_4;
  uStack_74 = *(undefined4 *)((longlong)param_4 + 4);
  uStack_70 = *(undefined4 *)(param_4 + 1);
  uStack_6c = *(undefined4 *)((longlong)param_4 + 0xc);
  local_98 = &local_88;
  FUN_145c2bdae(param_1,param_2,param_5,param_3);
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c2bcaa FUN_145c2bcaa body=258 status=ok
// SIG undefined FUN_145c2bcaa(void)

void FUN_145c2bcaa(void)

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
              0x110) < DAT_14c9f0aa8) {
    FUN_144b3d300(&DAT_14c9f0aa8);
    if (DAT_14c9f0aa8 == -1) {
      FUN_145c2bff6(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x108;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f0a28,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d262ef);
      _Init_thread_footer(&DAT_14c9f0aa8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c2bdae FUN_145c2bdae body=582 status=ok
// SIG undefined FUN_145c2bdae(void)

void FUN_145c2bdae(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  undefined4 *param_5)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  puVar1 = (ulonglong *)(param_1 + 0x70);
  local_58 = param_3;
  if ((param_4 & 4) == 0) {
    uVar14 = FUN_144a8b328(L"[Compiled Out]",param_4);
    puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar16 + 0x3d;
    if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
      FUN_140023dd8(puVar1,0x1f0);
      puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar15 = puVar16 + 0x3d;
    }
    *puVar1 = (ulonglong)puVar15;
    local_50 = DAT_14c9f0a70;
    if (DAT_14c9f0a70 != 0) {
      LOCK();
      *(int *)(DAT_14c9f0a70 + 8) = *(int *)(DAT_14c9f0a70 + 8) + 1;
      UNLOCK();
    }
    local_48 = &DAT_14c9f0a28;
    local_68 = 2;
    FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
    *puVar16 = &PTR_FUN_14a256540;
    uVar14 = param_5[1];
    uVar2 = param_5[2];
    uVar4 = param_5[3];
    uVar5 = param_5[4];
    uVar6 = param_5[5];
    uVar7 = param_5[6];
    uVar8 = param_5[7];
    uVar9 = param_5[8];
    uVar10 = param_5[9];
    uVar11 = param_5[10];
    uVar12 = param_5[0xb];
    *(undefined4 *)(puVar16 + 0x37) = *param_5;
    *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
    *(undefined4 *)(puVar16 + 0x38) = uVar2;
    *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
    *(undefined4 *)(puVar16 + 0x39) = uVar5;
    *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
    *(undefined4 *)(puVar16 + 0x3a) = uVar7;
    *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
    *(undefined4 *)(puVar16 + 0x3b) = uVar9;
    *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
    *(undefined4 *)(puVar16 + 0x3c) = uVar11;
    *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  }
  else {
    uVar14 = FUN_144a8b328(L"[Compiled Out]",param_4);
    puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar16 + 0x3e;
    if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
      FUN_140023dd8(puVar1,0x1f8);
      puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar15 = puVar16 + 0x3e;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar15;
    uVar2 = *(undefined4 *)(param_1 + 0x660);
    local_50 = DAT_14c9f0a70;
    if (DAT_14c9f0a70 != 0) {
      LOCK();
      *(int *)(DAT_14c9f0a70 + 8) = *(int *)(DAT_14c9f0a70 + 8) + 1;
      UNLOCK();
    }
    local_48 = &DAT_14c9f0a28;
    local_68 = 2;
    FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
    *puVar16 = &PTR_FUN_14a256540;
    uVar14 = param_5[1];
    uVar4 = param_5[2];
    uVar5 = param_5[3];
    uVar6 = param_5[4];
    uVar7 = param_5[5];
    uVar8 = param_5[6];
    uVar9 = param_5[7];
    uVar10 = param_5[8];
    uVar11 = param_5[9];
    uVar12 = param_5[10];
    uVar13 = param_5[0xb];
    *(undefined4 *)(puVar16 + 0x37) = *param_5;
    *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
    *(undefined4 *)(puVar16 + 0x38) = uVar4;
    *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar5;
    *(undefined4 *)(puVar16 + 0x39) = uVar6;
    *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar7;
    *(undefined4 *)(puVar16 + 0x3a) = uVar8;
    *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar9;
    *(undefined4 *)(puVar16 + 0x3b) = uVar10;
    *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar11;
    *(undefined4 *)(puVar16 + 0x3c) = uVar12;
    *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar13;
    *puVar16 = &PTR_FUN_14a256520;
    *(undefined4 *)(puVar16 + 0x3d) = uVar2;
  }
  iVar3 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar3 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar3 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar16);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c2bff6 FUN_145c2bff6 body=226 status=ok
// SIG undefined FUN_145c2bff6(void)

longlong * FUN_145c2bff6(longlong *param_1)

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
  pcVar13 = FUN_1462d8faa;
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



// FUNCTION 145c2c0de FUN_145c2c0de body=130 status=ok
// SIG undefined FUN_145c2c0de(void)

undefined1 * FUN_145c2c0de(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWProbeFreeListAllocator";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<int>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x109;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145c2c0da;
}



// FUNCTION 145c2c160 FUN_145c2c160 body=138 status=ok
// SIG undefined FUN_145c2c160(void)

code * FUN_145c2c160(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWProbeFreeList";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000010a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145c2c0de;
}



// FUNCTION 145c2c1ea FUN_145c2c1ea body=142 status=ok
// SIG undefined FUN_145c2c1ea(void)

code * FUN_145c2c1ea(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a8b374();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"GlobalDistanceFieldParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FGlobalDistanceFieldParameters2";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1e000000099;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145cdb868;
}



// FUNCTION 145c2c278 FUN_145c2c278 body=136 status=ok
// SIG undefined FUN_145c2c278(void)

code * FUN_145c2c278(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GlobalDistanceFieldCoverageAtlasTextureSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1f000000049;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147152312;
}



// FUNCTION 145c2c300 FUN_145c2c300 body=138 status=ok
// SIG undefined FUN_145c2c300(void)

code * FUN_145c2c300(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GlobalDistanceFieldMipTranslatedWorldToUVScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xe000000039;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 6;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147152a9e;
}



// FUNCTION 145c2c38a FUN_145c2c38a body=138 status=ok
// SIG undefined FUN_145c2c38a(void)

code * FUN_145c2c38a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GlobalDistanceFieldInvPageAtlasSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1b00000003e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147152876;
}



// FUNCTION 145c2c414 FUN_145c2c414 body=40 status=ok
// SIG undefined FUN_145c2c414(void)

undefined8 FUN_145c2c414(undefined8 param_1,int param_2)

{
  FUN_145c2c43c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c2c43c FUN_145c2c43c body=221 status=ok
// SIG undefined FUN_145c2c43c(void)

void FUN_145c2c43c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b915280;
  param_1[5] = &PTR_FUN_14b915520;
  *(undefined4 *)(param_1 + 0x26) = 0;
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_145c2c51a(param_1 + 0x1d);
  FUN_140fd7d60(param_1[0x1b],*(undefined4 *)(param_1 + 0x1c));
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_145c2c550(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_145c2c586(param_1 + 7);
  FUN_140af926c(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c2c51a FUN_145c2c51a body=53 status=ok
// SIG undefined FUN_145c2c51a(void)

void FUN_145c2c51a(longlong *param_1)

{
  FUN_145c2c616();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c2c550 FUN_145c2c550 body=53 status=ok
// SIG undefined FUN_145c2c550(void)

void FUN_145c2c550(longlong *param_1)

{
  FUN_145c2c5be();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c2c586 FUN_145c2c586 body=55 status=ok
// SIG undefined FUN_145c2c586(void)

void FUN_145c2c586(longlong *param_1)

{
  FUN_1414f43a4(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c2c5be FUN_145c2c5be body=88 status=ok
// SIG undefined FUN_145c2c5be(void)

void FUN_145c2c5be(longlong param_1)

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



// FUNCTION 145c2c616 FUN_145c2c616 body=315 status=ok
// SIG undefined FUN_145c2c616(void)

void FUN_145c2c616(longlong *param_1)

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
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c2c752 FUN_145c2c752 body=112 status=ok
// SIG undefined FUN_145c2c752(void)

void FUN_145c2c752(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x1d8,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x1d8)) {
      uVar2 = uVar1 / 0x1d8 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x1d8,8);
  }
  return;
}



// FUNCTION 145c2c7c2 FUN_145c2c7c2 body=45 status=ok
// SIG undefined FUN_145c2c7c2(void)

undefined8 FUN_145c2c7c2(undefined8 param_1,int param_2)

{
  FUN_145c2c7f0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 145c2c7f0 FUN_145c2c7f0 body=74 status=ok
// SIG undefined FUN_145c2c7f0(void)

void FUN_145c2c7f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b486a10;
  FUN_144a2da94(param_1 + 0x17);
  FUN_144a2da94(param_1 + 0x10);
  *param_1 = &PTR_FUN_14ac3d210;
  FUN_144a2da94(param_1 + 7);
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 145c2c83a FUN_145c2c83a body=183 status=ok
// SIG undefined FUN_145c2c83a(void)

void FUN_145c2c83a(longlong param_1,undefined8 *param_2,undefined8 *param_3,byte param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  byte *pbVar4;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_140b645f6(param_1,*param_3);
  uVar2 = (**(code **)(*(longlong *)*param_2 + 0x40))();
  uVar3 = FUN_145cf852a(param_1 + 0x50,uVar2,param_2);
  local_39 = 0;
  uVar2 = (**(code **)(*(longlong *)*param_3 + 0x40))();
  pbVar4 = (byte *)FUN_145cf85b0(uVar3,uVar2,param_3,&local_39);
  *pbVar4 = *pbVar4 | param_4;
  uVar2 = FUN_140b645f6(param_1,*param_3);
  if (cVar1 != (char)uVar2) {
    FUN_145c2c8f2(param_1 + 0x38,param_3,uVar2);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c2c8f2 FUN_145c2c8f2 body=173 status=ok
// SIG undefined FUN_145c2c8f2(void)

void FUN_145c2c8f2(longlong *param_1,undefined8 param_2,undefined4 param_3)

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
        goto LAB_145c2c989;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145c2c989:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145c2c9a0 FUN_145c2c9a0 body=55 status=ok
// SIG undefined FUN_145c2c9a0(void)

void FUN_145c2c9a0(longlong param_1)

{
  FUN_14125202e();
  FUN_1458fda6e(&DAT_14c9a3cc0,&DAT_14c9a3d18,1,1);
  FUN_145c2c9d7(param_1 + 0x40);
  return;
}



// FUNCTION 145c2c9d7 FUN_145c2c9d7 body=26 status=ok
// SIG undefined FUN_145c2c9d7(void)

void FUN_145c2c9d7(undefined8 param_1)

{
  FUN_141237793();
  FUN_1414f45ee(param_1);
  return;
}



// FUNCTION 145c2c9f2 FUN_145c2c9f2 body=38 status=ok
// SIG undefined FUN_145c2c9f2(void)

undefined8 FUN_145c2c9f2(undefined8 param_1,int param_2)

{
  FUN_145c2ca18();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c2ca18 FUN_145c2ca18 body=116 status=ok
// SIG undefined FUN_145c2ca18(void)

void FUN_145c2ca18(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_14a927fe0;
  plVar1 = DAT_14c9485b8;
  if (DAT_14c9485b8 != (longlong *)0x0) {
    uVar2 = (**(code **)(*DAT_14c9485b8 + 0x328))(DAT_14c9485b8);
    FUN_14126849c(uVar2,param_1);
    uVar2 = (**(code **)(*plVar1 + 0x338))(plVar1);
    FUN_14126849c(uVar2,param_1);
    uVar2 = (**(code **)(*plVar1 + 0x348))(plVar1);
    FUN_14126849c(uVar2,param_1);
  }
  FUN_145c2ca8c(param_1);
  return;
}



// FUNCTION 145c2ca8c FUN_145c2ca8c body=223 status=ok
// SIG undefined FUN_145c2ca8c(void)

void FUN_145c2ca8c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  
  *param_1 = &PTR_LAB_149e5ef90;
  cVar4 = FUN_145c2cb76();
  if (cVar4 != '\0') {
    lVar5 = FUN_140d5712e();
    FUN_140457ffc(lVar5 + 8,param_1);
  }
  FUN_140457ffc(&DAT_14c9485c0,param_1);
  FUN_140457ffc(&DAT_14c9485d8,param_1);
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(param_1 + 0xc);
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_145c2cb8f(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[7];
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
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return;
}



// FUNCTION 145c2cb6c FUN_145c2cb6c body=9 status=ok
// SIG undefined FUN_145c2cb6c(void)

void FUN_145c2cb6c(longlong param_1)

{
  FUN_145c2cc2e(param_1 + 0x10);
  return;
}



// FUNCTION 145c2cb76 FUN_145c2cb76 body=25 status=ok
// SIG undefined FUN_145c2cb76(void)

undefined1 FUN_145c2cb76(void)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)FUN_145c2cbb6();
  if (puVar2 == (undefined1 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *puVar2;
  }
  return uVar1;
}



// FUNCTION 145c2cb8f FUN_145c2cb8f body=38 status=ok
// SIG undefined FUN_145c2cb8f(void)

void FUN_145c2cb8f(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1458cf234(param_1);
    param_1 = param_1 + 0x20;
  }
  return;
}



// FUNCTION 145c2cbb6 FUN_145c2cbb6 body=120 status=ok
// SIG undefined FUN_145c2cbb6(void)

undefined * FUN_145c2cbb6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844be8) {
    FUN_144b3d300(&DAT_14c844be8);
    if (DAT_14c844be8 == -1) {
      FUN_1456bade4(&DAT_14c844b48);
      DAT_14c844be0 = &DAT_14c844b48;
      atexit(FUN_142761918);
      _Init_thread_footer(&DAT_14c844be8);
    }
  }
  return DAT_14c844be0;
}



// FUNCTION 145c2cc2e FUN_145c2cc2e body=193 status=ok
// SIG undefined FUN_145c2cc2e(void)

void FUN_145c2cc2e(LPCRITICAL_SECTION param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  param_1[6].LockCount = 0;
  if (param_1[6].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    FUN_1400020a8();
  }
  FUN_1401fc242(&param_1[4].OwningThread);
  param_1[4].LockCount = 0;
  if (param_1[4].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    FUN_1400020a8();
  }
  FUN_140a49dbc(&param_1[2].OwningThread);
  FUN_1447a1747(param_1[2].DebugInfo,param_1[2].LockCount);
  if (param_1[2].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[1].LockSemaphore,(int)param_1[1].SpinCount);
  if (param_1[1].LockSemaphore != (HANDLE)0x0) {
    FUN_1400020a8();
  }
  uVar1._0_4_ = param_1[1].LockCount;
  uVar1._4_4_ = param_1[1].RecursionCount;
  FUN_1447a1747(uVar1,*(undefined4 *)&param_1[1].OwningThread);
  lVar2._0_4_ = param_1[1].LockCount;
  lVar2._4_4_ = param_1[1].RecursionCount;
  if (lVar2 != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection(param_1);
  return;
}



// FUNCTION 145c2ccf0 FUN_145c2ccf0 body=301 status=ok
// SIG undefined FUN_145c2ccf0(void)

void FUN_145c2ccf0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145c2ce1e();
  lVar2 = *(longlong *)(param_1 + 0x40) + 0x240;
  lVar1 = *(longlong *)(param_1 + 0x48);
  FUN_140309ec4(lVar1 + 0x80,&local_40,lVar2);
  *(undefined8 *)(param_1 + 0x478) = local_30;
  *(undefined4 *)(param_1 + 0x468) = local_40;
  *(undefined4 *)(param_1 + 0x46c) = uStack_3c;
  *(undefined4 *)(param_1 + 0x470) = uStack_38;
  *(undefined4 *)(param_1 + 0x474) = uStack_34;
  uVar3 = FUN_140309e34(lVar1 + 0x140,lVar2,lVar1 + 0x158);
  *(undefined4 *)(param_1 + 0x480) = uVar3;
  FUN_140d0fa06(lVar1 + 0x160,&local_40,lVar2);
  *(undefined8 *)(param_1 + 0x498) = local_30;
  *(undefined4 *)(param_1 + 0x488) = local_40;
  *(undefined4 *)(param_1 + 0x48c) = uStack_3c;
  *(undefined4 *)(param_1 + 0x490) = uStack_38;
  *(undefined4 *)(param_1 + 0x494) = uStack_34;
  uVar3 = FUN_140e4cbdc(lVar1 + 0x1c8,lVar2,lVar1 + 0x1e0);
  *(undefined4 *)(param_1 + 0x4a0) = uVar3;
  uVar3 = FUN_140309e34(lVar1 + 0x1e8,lVar2,lVar1 + 0x200);
  *(undefined4 *)(param_1 + 0x4a4) = uVar3;
  uVar3 = FUN_140309e34(lVar1 + 0x120,lVar2,lVar1 + 0x138);
  *(undefined4 *)(param_1 + 0x4a8) = uVar3;
  if (*(char *)(lVar1 + 0x118) == '\x01') {
    FUN_145c2cef0(param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c2ce1e FUN_145c2ce1e body=209 status=ok
// SIG undefined FUN_145c2ce1e(void)

void FUN_145c2ce1e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400ef488();
  lVar2 = *(longlong *)(param_1 + 0x40);
  lVar3 = param_1 + 0x418;
  *(undefined4 *)(param_1 + 0x460) = 0;
  if (*(int *)(param_1 + 0x464) < 0) {
    FUN_147f53e9a(lVar3,0);
  }
  lVar2 = FUN_1414f471a(lVar2 + 0x240,DAT_14c9ab028);
  if (lVar2 != 0) {
    local_28 = 0;
    FUN_14485c47a(&local_28,lVar2);
    iVar1 = *(int *)(param_1 + 0x460);
    *(uint *)(param_1 + 0x460) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x464) < iVar1 + 1U) {
      FUN_1457ef560(lVar3,iVar1);
    }
    if (*(longlong *)(param_1 + 0x458) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x458);
    }
    *(undefined8 *)(lVar3 + (longlong)iVar1 * 8) = local_28;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c2cef0 FUN_145c2cef0 body=330 status=ok
// SIG undefined FUN_145c2cef0(void)

void FUN_145c2cef0(longlong param_1)

{
  double dVar1;
  undefined1 auStack_188 [40];
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  char local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  double local_40;
  double local_38;
  double local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (1.0 < *(float *)(param_1 + 0x480)) {
    local_48 = *(undefined8 *)(param_1 + 0x478);
    local_58 = *(undefined4 *)(param_1 + 0x468);
    uStack_54 = *(undefined4 *)(param_1 + 0x46c);
    uStack_50 = *(undefined4 *)(param_1 + 0x470);
    uStack_4c = *(undefined4 *)(param_1 + 0x474);
    FUN_144a76660(param_1 + 0x488,&local_160);
    dVar1 = (double)*(float *)(param_1 + 0x480);
    local_30 = local_150 * dVar1 + *(double *)(param_1 + 0x478);
    local_38 = local_158 * dVar1 + *(double *)(param_1 + 0x470);
    local_40 = dVar1 * local_160 + *(double *)(param_1 + 0x468);
    FUN_145c2d03c(param_1,&local_160,&local_58);
    if (local_60 == '\x01') {
      local_150 = local_150 - *(double *)(param_1 + 0x468);
      local_148 = local_148 - *(double *)(param_1 + 0x470);
      local_140 = local_140 - *(double *)(param_1 + 0x478);
      *(float *)(param_1 + 0x480) =
           (float)(SQRT(local_140 * local_140 + local_148 * local_148 + local_150 * local_150) -
                  (double)*(float *)(param_1 + 0x4a8));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c2d03c FUN_145c2d03c body=137 status=ok
// SIG undefined FUN_145c2d03c(void)

void * FUN_145c2d03c(longlong param_1,void *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_144a8069e(*(undefined8 *)(param_1 + 0x40));
  if ((lVar1 != 0) && (lVar1 = FUN_1447210f0(lVar1), lVar1 != 0)) {
    FUN_140a2a5cc(*(longlong *)(param_1 + 0x48) + 0x40,param_2,param_3,lVar1,param_1 + 0x418);
    return param_2;
  }
  memset(param_2,0,0x100);
  *(undefined4 *)((longlong)param_2 + 0xd0) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 4) = 0x3f800000;
  *(undefined4 *)((longlong)param_2 + 0xa4) = 0xffffffff;
  *(undefined1 *)((longlong)param_2 + 0x100) = 0;
  return param_2;
}



// FUNCTION 145c2d0c6 FUN_145c2d0c6 body=40 status=ok
// SIG undefined FUN_145c2d0c6(void)

undefined8 FUN_145c2d0c6(undefined8 param_1,int param_2)

{
  FUN_145c2d0ee();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c2d0ee FUN_145c2d0ee body=131 status=ok
// SIG undefined FUN_145c2d0ee(void)

void FUN_145c2d0ee(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a17f650;
  param_1[5] = &PTR_FUN_14a17f8f0;
  FUN_1449e6b18(param_1 + 10);
  plVar3 = (longlong *)param_1[9];
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
  plVar3 = (longlong *)param_1[7];
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
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c2d172 FUN_145c2d172 body=20 status=ok
// SIG undefined FUN_145c2d172(void)

void FUN_145c2d172(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14a182e30;
  FUN_1449e6b18(param_1 + 0x18);
  return;
}



// FUNCTION 145c2d186 FUN_145c2d186 body=104 status=ok
// SIG undefined FUN_145c2d186(void)

void FUN_145c2d186(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 0;
  if ((param_2 != 0) && (iVar3 = 0x20, 0x20 < param_2)) {
    uVar2 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if ((int)param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (iVar3 == *(int *)(param_1 + 0x10c)) {
    return;
  }
  *(int *)(param_1 + 0x10c) = iVar3;
  FUN_145c2d1ee(param_1,*(undefined4 *)(param_1 + 0x108));
  return;
}



// FUNCTION 145c2d1ee FUN_145c2d1ee body=140 status=ok
// SIG undefined FUN_145c2d1ee(void)

void FUN_145c2d1ee(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x100);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,8);
  return;
}



// FUNCTION 145c2d286 FUN_145c2d286 body=747 status=ok
// SIG undefined FUN_145c2d286(void)

undefined8 * FUN_145c2d286(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined1 local_b8 [8];
  undefined4 local_b0;
  undefined3 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined2 *local_90;
  int local_88;
  undefined8 local_60;
  longlong *local_58;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_140ea0e34();
  *param_1 = &PTR_FUN_14a50ff60;
  param_1[5] = &PTR_FUN_14a510260;
  FUN_144a5dc74(param_1 + 0x2d);
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  FUN_144a5dc74(param_1 + 0x31);
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  FUN_145c2d572(param_1 + 0x36);
  *(undefined1 *)((longlong)param_1 + 0x44f) = 0;
  *(undefined2 *)((longlong)param_1 + 0x455) = 0;
  *(byte *)((longlong)param_1 + 0x454) = *(byte *)((longlong)param_1 + 0x454) & 0xfc;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  lVar6 = FUN_140bcc93a();
  FUN_145c2d5d0(param_1 + 0x36,lVar6 + 0x1310);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cab7938) && (FUN_144b3d300(&DAT_14cab7938), DAT_14cab7938 == -1)) {
    FUN_140056680(&local_90,L"/Engine/EngineFonts/Roboto");
    local_c8 = &DAT_14c872ce8;
    FUN_1449da20c(DAT_14c872ce0,L"SlateStyle",L"DefaultFontName",&local_90);
    puVar7 = local_90;
    if (local_88 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    FUN_145b0497c(&DAT_14cab7920,puVar7,0);
    if (local_90 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    atexit(FUN_1433338c6);
    _Init_thread_footer(&DAT_14cab7938);
  }
  local_a8 = 0;
  local_b0 = 0;
  uStack_ac = 0;
  local_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0x3f800000;
  FUN_1446ddc76(local_b8,"Regular",1);
  local_c8 = (undefined8 *)&local_b0;
  FUN_140324f46(&local_90,DAT_14cab7930,0x41c00000,local_b8);
  plVar1 = local_58;
  local_60 = param_1[0x3d];
  plVar4 = (longlong *)param_1[0x3e];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_58 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      puVar5 = (undefined8 *)*local_58;
      local_58 = plVar4;
      (*(code *)*puVar5)(plVar1);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      plVar4 = local_58;
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        plVar4 = local_58;
      }
    }
  }
  local_58 = plVar4;
  FUN_1412cc59c(param_1 + 0x37,&local_90);
  plVar4 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  *(undefined2 *)(param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x444) = 0x100000100000000;
  *(undefined2 *)((longlong)param_1 + 0x44c) = 0x100;
  *(undefined2 *)(param_1 + 0x8a) = 0;
  FUN_141266e28(param_1,1);
  *(undefined1 *)((longlong)param_1 + 0x453) = 0;
  if ((local_30 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145c2d572 FUN_145c2d572 body=93 status=ok
// SIG undefined FUN_145c2d572(void)

undefined8 * FUN_145c2d572(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149ee3340;
  FUN_1412cd6d6(param_1 + 1,9);
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x3f800000;
  *(undefined2 *)(param_1 + 0xf) = 2;
  FUN_140ca8f8e(param_1 + 0x10);
  FUN_140ca8f8e(param_1 + 0x26);
  FUN_140ca8f8e(param_1 + 0x3c);
  return param_1;
}



// FUNCTION 145c2d5d0 FUN_145c2d5d0 body=103 status=ok
// SIG undefined FUN_145c2d5d0(void)

longlong FUN_145c2d5d0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_1412cc59c(param_1 + 8,param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x6c);
  uVar2 = *(undefined4 *)(param_2 + 0x70);
  uVar3 = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  *(undefined4 *)(param_1 + 0x74) = uVar3;
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  FUN_140f13d9e(param_1 + 0x80,param_2 + 0x80);
  FUN_140f13d9e(param_1 + 0x130,param_2 + 0x130);
  FUN_140f13d9e(param_1 + 0x1e0,param_2 + 0x1e0);
  return param_1;
}



// FUNCTION 145c2d640 FUN_145c2d640 body=250 status=ok
// SIG undefined FUN_145c2d640(void)

undefined8 * FUN_145c2d640(undefined8 *param_1)

{
  int iVar1;
  
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *param_1 = &PTR_FUN_14b33dd70;
  *(undefined4 *)(param_1 + 4) = 0x40;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0x432d000042500000;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x4120000042340000;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0x423000003f400000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x41a00000;
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 1;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3f000000;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0x44fa000044fa0000;
  param_1[0x12] = 0x4416000041a00000;
  *(undefined4 *)(param_1 + 0x13) = 0x43960000;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x43160000;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x42dc0000;
  *(undefined1 *)(param_1 + 0x15) = 1;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x10) = 1;
  FUN_145c2d73a(param_1 + 0xf,0);
  *(undefined1 *)param_1[0xf] = 3;
  iVar1 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x84) < iVar1 + 1U) {
    FUN_145c2d73a(param_1 + 0xf,iVar1);
  }
  *(undefined1 *)(param_1[0xf] + (longlong)iVar1) = 0xb;
  return param_1;
}



// FUNCTION 145c2d73a FUN_145c2d73a body=124 status=ok
// SIG undefined FUN_145c2d73a(void)

void FUN_145c2d73a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
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
    iVar3 = FUN_144a3809e(lVar4,1);
    iVar5 = 0x7fffffff;
    if ((int)uVar1 <= iVar3) {
      iVar5 = iVar3;
    }
    *(int *)(param_1 + 0xc) = iVar5;
    FUN_1446f8d3c(param_1,param_2,iVar5,1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145c2d7be FUN_145c2d7be body=183 status=ok
// SIG undefined FUN_145c2d7be(void)

undefined8 * FUN_145c2d7be(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_141021b94();
  *param_1 = &PTR_FUN_14b5e9da0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  uVar1 = DAT_14caa8578;
  param_1[0x95] = DAT_14caa8578;
  param_1[0x96] = uVar1;
  *(undefined4 *)(param_1 + 0x97) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x4bc) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0xbf99999a;
  *(undefined1 *)((longlong)param_1 + 0x4c4) = 0;
  param_1[0x99] = 0x400000003f800000;
  param_1[0x9a] = 0x4000000042c80000;
  param_1[0x9b] = 0x40a000003fc00000;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  *(undefined4 *)(param_1 + 0x9e) = 0x7010;
  param_1[0x9f] = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0x3e99999a;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  return param_1;
}



// FUNCTION 145c2d880 FUN_145c2d880 body=180 status=ok
// SIG undefined FUN_145c2d880(void)

undefined8 * FUN_145c2d880(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_140f8b11c();
  *param_1 = &PTR_FUN_14b7ba310;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
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
  *puVar2 = &PTR_FUN_14b9e0f00;
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



// FUNCTION 145c2d934 FUN_145c2d934 body=38 status=ok
// SIG undefined FUN_145c2d934(void)

undefined8 FUN_145c2d934(undefined8 param_1,int param_2)

{
  FUN_145c2d95a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c2d95a FUN_145c2d95a body=95 status=ok
// SIG undefined FUN_145c2d95a(void)

void FUN_145c2d95a(longlong param_1)

{
  if (*(longlong **)(param_1 + 0xb70) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xb70) + 0x10))();
  }
  FUN_145c2d9b9(*(undefined8 *)(param_1 + 0xb60),*(undefined4 *)(param_1 + 0xb68));
  if (*(longlong *)(param_1 + 0xb60) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb50) != 0) {
    FUN_1400020a8();
  }
  FUN_1458b3782(param_1);
  return;
}



// FUNCTION 145c2d9b9 FUN_145c2d9b9 body=58 status=ok
// SIG undefined FUN_145c2d9b9(void)

void FUN_145c2d9b9(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*(longlong *)(param_1 + 0x270) != 0) {
      FUN_1400020a8();
    }
    FUN_1412d6a62(param_1);
    param_1 = param_1 + 0x280;
  }
  return;
}



// FUNCTION 145c2d9f4 FUN_145c2d9f4 body=24 status=ok
// SIG undefined FUN_145c2d9f4(void)

undefined1
FUN_145c2d9f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  FUN_1414f4bba(param_5,param_2,param_4);
  return 1;
}



// FUNCTION 145c2da0c FUN_145c2da0c body=55 status=ok
// SIG undefined FUN_145c2da0c(void)

void FUN_145c2da0c(longlong *param_1)

{
  FUN_145c2da44(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c2da44 FUN_145c2da44 body=421 status=ok
// SIG undefined FUN_145c2da44(void)

void FUN_145c2da44(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
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
      plVar4 = *(longlong **)(*local_78 + 0x10 + (longlong)iStack_5c * 0x20);
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
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
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
  uVar6 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar6) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar5 = 0x80;
    if (0x80 < (int)uVar6) {
      uVar5 = uVar6;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c2dbec FUN_145c2dbec body=158 status=ok
// SIG undefined FUN_145c2dbec(void)

void FUN_145c2dbec(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xa28))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c2dca8 FUN_145c2dca8 body=100 status=ok
// SIG undefined FUN_145c2dca8(void)

void FUN_145c2dca8(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = FUN_1447210f0();
  if ((*(longlong *)(param_1 + 0x430) != 0) && (lVar1 = *(longlong *)(lVar1 + 0x38), lVar1 != 0)) {
    iVar2 = *(int *)(lVar1 + 200);
    if (param_2 < *(int *)(lVar1 + 200)) {
      iVar2 = param_2;
    }
    iVar3 = 0x708;
    if (0x708 < iVar2) {
      iVar3 = iVar2;
    }
    *(int *)(*(longlong *)(param_1 + 0x430) + 0x38) = iVar3;
    if (*(longlong *)(lVar1 + 0xf0) != 0) {
      *(undefined4 *)(*(longlong *)(lVar1 + 0xf0) + 0x38) =
           *(undefined4 *)(*(longlong *)(param_1 + 0x430) + 0x38);
    }
  }
  return;
}



// FUNCTION 145c2dd0c FUN_145c2dd0c body=181 status=ok
// SIG undefined FUN_145c2dd0c(void)

longlong FUN_145c2dd0c(longlong *param_1,uint param_2,longlong *param_3)

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
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_145c2dda4;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_145c2ddc2(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_145c2dda4:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 145c2ddc2 FUN_145c2ddc2 body=283 status=ok
// SIG undefined FUN_145c2ddc2(void)

undefined4 * FUN_145c2ddc2(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145c2df7c(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_58 = 0;
  cVar1 = FUN_145c2dede(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
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
      FUN_145c2e062(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c2dede FUN_145c2dede body=158 status=ok
// SIG undefined FUN_145c2dede(void)

void FUN_145c2dede(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
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
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar8 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar8 * 0x20) == *param_3) {
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_145a1e66a((int)lVar4,*param_4,1);
          *param_4 = iVar8;
          uVar6 = 1;
          break;
        }
        iVar8 = puVar1[6];
        uVar6 = 0;
      } while (iVar8 != -1);
      goto LAB_145c2df04;
    }
  }
  uVar6 = 0;
LAB_145c2df04:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 145c2df7c FUN_145c2df7c body=230 status=ok
// SIG undefined FUN_145c2df7c(void)

int * FUN_145c2df7c(longlong *param_1,int *param_2)

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



// FUNCTION 145c2e062 FUN_145c2e062 body=485 status=ok
// SIG undefined FUN_145c2e062(void)

void FUN_145c2e062(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 145c2e248 FUN_145c2e248 body=40 status=ok
// SIG undefined FUN_145c2e248(void)

undefined8 FUN_145c2e248(undefined8 param_1,int param_2)

{
  FUN_1414f4e40();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c2e270 FUN_145c2e270 body=246 status=ok
// SIG undefined FUN_145c2e270(void)

undefined8 *
FUN_145c2e270(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar3 = *param_4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  iVar2 = DAT_14c762760 + 1;
  *(int *)(puVar4 + 1) = DAT_14c762760;
  DAT_14c762760 = iVar2;
  puVar4[2] = 0;
  FUN_14485c47a(puVar4 + 2,param_2);
  *(undefined1 *)(puVar4 + 3) = 1;
  *puVar4 = &PTR_FUN_14b47b0e0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *(undefined1 *)(puVar4 + 6) = 0;
  uVar5 = FUN_14063ee94(puVar4 + 4);
  local_48 = uVar3;
  local_40 = uVar1;
  FUN_145c2e368(uVar5,param_3);
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
    FUN_141053524((longlong *)(param_1 + 0x198),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar4;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c2e368 FUN_145c2e368 body=423 status=ok
// SIG undefined FUN_145c2e368(void)

void FUN_145c2e368(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_145c2e43e:
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
    *puVar5 = &PTR_FUN_14b9d34c0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145c2e43e;
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
    *puVar5 = &PTR_FUN_14b9d34c0;
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
                    /* WARNING: Could not recover jumptable at 0x000145c2e4f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145c2e510 FUN_145c2e510 body=247 status=ok
// SIG undefined FUN_145c2e510(void)

void FUN_145c2e510(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_b8 [32];
  int local_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  undefined **local_88;
  undefined2 local_80;
  longlong local_78;
  undefined1 local_70;
  undefined2 local_68;
  code *local_60;
  undefined1 local_58;
  uint local_50;
  int local_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  undefined1 local_3c;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(int *)(param_1 + 0x68) != 0) || (*(char *)(param_1 + 0x88) == '\x01')) {
    lVar1 = FUN_14009d2a0();
    FUN_145c2e608();
    FUN_1414f4f68(param_3,&local_98);
    if (((iStack_94 != 0 || local_98 != 0) || iStack_90 != 0) || iStack_8c != 0) {
      local_78 = param_1 + 8;
      local_80 = DAT_14cb8a3c8;
      local_68 = *(undefined2 *)(lVar1 + 0x66);
      local_4c = local_98;
      iStack_48 = iStack_94;
      iStack_44 = iStack_90;
      iStack_40 = iStack_8c;
      local_70 = 1;
      local_58 = 1;
      local_60 = FUN_14655c4e2;
      local_50 = *(ushort *)(lVar1 + 100) | 0x10000;
      local_3c = 1;
      local_38 = 0;
      local_88 = &PTR_FUN_14b422c70;
      FUN_145c2e65c(param_4);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c2e608 FUN_145c2e608 body=84 status=ok
// SIG undefined FUN_145c2e608(void)

void FUN_145c2e608(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8a3d0) {
    FUN_144b3d300(&DAT_14cb8a3d0);
    if (DAT_14cb8a3d0 == -1) {
      FUN_145c2e796();
      _Init_thread_footer(&DAT_14cb8a3d0);
      return;
    }
  }
  return;
}



// FUNCTION 145c2e65c FUN_145c2e65c body=213 status=ok
// SIG undefined FUN_145c2e65c(void)

void FUN_145c2e65c(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar3 = (undefined8 *)FUN_14001cc68(0x58,8);
  FUN_145c2e732(puVar3,param_2);
  *puVar3 = &PTR_FUN_14b422c70;
  iVar2 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
    FUN_140561fb4(param_1,iVar2);
  }
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar4 = param_1;
  }
  puVar1 = (undefined8 *)(lVar4 + (longlong)iVar2 * 0x48);
  *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) & 0xfc | 2;
  FUN_14055f024(puVar1);
  *(byte *)(puVar1 + 8) = (*(byte *)(puVar1 + 8) & 0xfc) + 1;
  *puVar1 = puVar3;
  *(undefined4 *)(puVar1 + 1) = local_60;
  *(undefined4 *)((longlong)puVar1 + 0xc) = uStack_5c;
  *(undefined4 *)(puVar1 + 2) = uStack_58;
  *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_54;
  *(undefined4 *)(puVar1 + 3) = local_50;
  *(undefined4 *)((longlong)puVar1 + 0x1c) = uStack_4c;
  *(undefined4 *)(puVar1 + 4) = uStack_48;
  *(undefined4 *)((longlong)puVar1 + 0x24) = uStack_44;
  *(undefined4 *)(puVar1 + 5) = local_40;
  *(undefined4 *)((longlong)puVar1 + 0x2c) = uStack_3c;
  *(undefined4 *)(puVar1 + 6) = uStack_38;
  *(undefined4 *)((longlong)puVar1 + 0x34) = uStack_34;
  puVar1[7] = local_30;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c2e732 FUN_145c2e732 body=99 status=ok
// SIG undefined FUN_145c2e732(void)

void FUN_145c2e732(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_14b4224f0;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 8);
  cVar1 = *(char *)(param_2 + 0x18);
  *(char *)(param_1 + 3) = cVar1;
  if (cVar1 == '\x01') {
    param_1[2] = *(undefined8 *)(param_2 + 0x10);
  }
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 0x20);
  cVar1 = *(char *)(param_2 + 0x30);
  *(char *)(param_1 + 6) = cVar1;
  if (cVar1 == '\x01') {
    param_1[5] = *(undefined8 *)(param_2 + 0x28);
  }
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  cVar1 = *(char *)(param_2 + 0x4c);
  *(char *)((longlong)param_1 + 0x4c) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 0x44);
    *(undefined8 *)((longlong)param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x3c);
    *(undefined8 *)((longlong)param_1 + 0x44) = uVar2;
  }
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 0x50);
  return;
}



// FUNCTION 145c2e796 FUN_145c2e796 body=429 status=ok
// SIG undefined FUN_145c2e796(void)

void FUN_145c2e796(void)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  DAT_14cb8a3c8 = 0xffff;
  DAT_14cb8a3ca = 0xffff;
  DAT_14cb8a3cc = 0xffff;
  lVar1 = FUN_14009d2a0();
  uVar2 = FUN_145d77b9e();
  local_48 = (undefined2 *)0x0;
  local_40 = (ulonglong *)((ulonglong)local_40 & 0xffffffffffffff00);
  FUN_1400ac8c6(uVar2,&local_32,L"Capsule Offset Weight Channel",&local_48);
  DAT_14cb8a3c8 = local_32;
  local_48 = (undefined2 *)0x0;
  local_40 = (ulonglong *)((ulonglong)local_40 & 0xffffffffffffff00);
  FUN_1400acbba(uVar2,&local_32,L"Capsule Offset Weight Interpolation",&local_48);
  DAT_14cb8a3ca = local_32;
  local_48 = (undefined2 *)0x0;
  local_40 = (ulonglong *)((ulonglong)local_40 & 0xffffffffffffff00);
  FUN_1400ac57c(uVar2,&local_32,L"Capsule Offset Weight Result",&local_48);
  DAT_14cb8a3cc = local_32;
  FUN_1456c8a66(uVar2,DAT_14cb8a3c8);
  FUN_1456c8af2(uVar2,DAT_14cb8a3cc);
  local_32 = DAT_14cb8a3cc;
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1415471c6(uVar2,DAT_14cb8a3c8,&local_48);
  local_32 = *(undefined2 *)(lVar1 + 0x54);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1415471c6(uVar2,DAT_14cb8a3c8,&local_48);
  local_32 = DAT_14cb8a3ca;
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1415471c6(uVar2,DAT_14cb8a3c8,&local_48);
  FUN_145845be0(DAT_14cb8a3c8,DAT_14cb8a3ca,DAT_14cb8a3cc);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c2e944 FUN_145c2e944 body=48 status=ok
// SIG undefined FUN_145c2e944(void)

void FUN_145c2e944(void)

{
  if (DAT_14ca09680 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14ca09668 != 0) {
    FUN_1400020a8();
  }
  FUN_145c2e974();
  return;
}



// FUNCTION 145c2e974 FUN_145c2e974 body=89 status=ok
// SIG undefined FUN_145c2e974(void)

void FUN_145c2e974(void)

{
  FUN_1414f4f82();
  if (DAT_14ca09648 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14ca09630 != 0) {
    FUN_1400020a8();
  }
  FUN_145c2e9cd(DAT_14ca09620,DAT_14ca09628);
  if (DAT_14ca09620 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c2e9cd FUN_145c2e9cd body=43 status=ok
// SIG undefined FUN_145c2e9cd(void)

void FUN_145c2e9cd(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1446fbe14(param_1);
    param_1 = param_1 + 0xa8;
  }
  return;
}



// FUNCTION 145c2e9f8 FUN_145c2e9f8 body=64 status=ok
// SIG undefined FUN_145c2e9f8(void)

void FUN_145c2e9f8(void)

{
  if (DAT_14ca0962c != 0) {
    DAT_14ca0962c = 0;
    FUN_1446f8d3c(&DAT_14ca09620,DAT_14ca09628,0,0xa8,8);
  }
  return;
}



// FUNCTION 145c2ea38 FUN_145c2ea38 body=146 status=ok
// SIG undefined FUN_145c2ea38(void)

code * FUN_145c2ea38(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145c2eaca();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SplitWorkQueue";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FGlobalWorkQueueParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x60000004ed;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca181b0;
  return FUN_146105e7c;
}



// FUNCTION 145c2eaca FUN_145c2eaca body=258 status=ok
// SIG undefined FUN_145c2eaca(void)

void FUN_145c2eaca(void)

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
              0x110) < DAT_14ca18230) {
    FUN_144b3d300(&DAT_14ca18230);
    if (DAT_14ca18230 == -1) {
      FUN_145c2ebce(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FGlobalWorkQueueParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x4b5;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca181b0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e276e7);
      _Init_thread_footer(&DAT_14ca18230);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c2ebce FUN_145c2ebce body=226 status=ok
// SIG undefined FUN_145c2ebce(void)

longlong * FUN_145c2ebce(longlong *param_1)

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
  pcVar13 = FUN_1462f1bd0;
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



// FUNCTION 145c2ecb6 FUN_145c2ecb6 body=132 status=ok
// SIG undefined FUN_145c2ecb6(void)

undefined1 * FUN_145c2ecb6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DataBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4b6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145c2ecb2;
}



// FUNCTION 145c2ed3a FUN_145c2ed3a body=214 status=ok
// SIG undefined FUN_145c2ed3a(void)

void FUN_145c2ed3a(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_58 [44];
  short local_2c [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == 0) {
LAB_145c2edd0:
    cVar1 = (**(code **)(*param_1 + 0x930))(param_1,param_2);
    if (cVar1 != '\0') goto LAB_145c2ede3;
  }
  else {
    lVar2 = FUN_1449f3324();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) != lVar2 + 0x30)) goto LAB_145c2edd0;
    lVar2 = FUN_1447210f0(param_1);
    if (lVar2 != 0) {
      lVar2 = FUN_1400f6f32(lVar2);
      if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x68), lVar2 != 0)) {
        FUN_140d27df6(lVar2,local_2c,param_2);
        if (-1 < local_2c[0]) {
          FUN_145c2ee12(lVar2,local_2c);
        }
      }
    }
    if (*(char *)(param_2 + 0xd69) != '\x01') goto LAB_145c2edd0;
  }
  FUN_1414f51ee(param_1,param_2);
LAB_145c2ede3:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c2ee12 FUN_145c2ee12 body=77 status=ok
// SIG undefined FUN_145c2ee12(void)

void FUN_145c2ee12(longlong param_1,ushort *param_2)

{
  ushort uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined4 uVar9;
  uint uVar10;
  
  uVar1 = *param_2;
  if (((short)uVar1 < 0) || (*(int *)(param_1 + 0x10) <= (int)(short)uVar1)) {
    return;
  }
  lVar8 = *(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar1 * 8);
  if (lVar8 == 0) {
    return;
  }
  if (*(uint *)(lVar8 + 8) != (uint)param_2[1]) {
    return;
  }
  if (-1 < *(short *)(lVar8 + 4)) {
    do {
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)*(short *)(lVar8 + 2) * 8);
    } while (-1 < *(short *)(lVar8 + 4));
    if (lVar8 == 0) {
      return;
    }
  }
  if (lVar8 == 0) {
    return;
  }
  uVar10 = *(uint *)(lVar8 + 0x118);
  if (*(int *)(param_1 + 0x94) == 0) {
LAB_1414f51e3:
    uVar6 = 0;
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x90);
    uVar6 = 0;
    if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
      puVar7 = (undefined8 *)
               ((ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
      if ((puVar7 == (undefined8 *)0x0) ||
         ((*(int *)(puVar7 + 2) != *(int *)(param_1 + 0x94) ||
          ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)))) goto LAB_1414f51e3;
      uVar6 = *puVar7;
    }
  }
  uVar4 = FUN_1415e9ee6(lVar8,uVar6,param_1);
  if (uVar10 == uVar4) {
    return;
  }
  if (uVar4 < uVar10) {
    uVar9 = 0x10000;
    if (uVar4 - 1 < 0xb) {
      uVar9 = *(undefined4 *)(&DAT_14b4107d4 + (ulonglong)(uVar4 - 1) * 4);
    }
    FUN_141323fc0(param_1,lVar8,uVar9);
    return;
  }
  if (*(int *)(param_1 + 0x94) != 0) {
    uVar2 = *(uint *)(param_1 + 0x90);
    bVar3 = 0;
    if (((int)uVar2 < 0) || (bVar3 = 0, DAT_14c9647dc <= (int)uVar2)) goto LAB_1414f51a1;
    puVar7 = (undefined8 *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((puVar7 != (undefined8 *)0x0) &&
       ((*(int *)(puVar7 + 2) == *(int *)(param_1 + 0x94) &&
        ((*(uint *)(puVar7 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(puVar7 + 1) & 0x10200000) == 0) {
        plVar5 = (longlong *)*puVar7;
      }
      else {
        plVar5 = (longlong *)0x0;
      }
      bVar3 = (**(code **)(*plVar5 + 0x4a8))();
      bVar3 = bVar3 ^ 1;
      goto LAB_1414f51a1;
    }
  }
  bVar3 = 0;
LAB_1414f51a1:
  do {
    if ((bVar3 & uVar10 - 3 < 5) == 0) {
      uVar9 = 0x10000;
      if (uVar10 < 0xb) {
        uVar9 = *(undefined4 *)(&DAT_14b4107d4 + (ulonglong)uVar10 * 4);
      }
      FUN_141323fc0(param_1,lVar8,uVar9);
    }
    uVar10 = uVar10 + 1;
  } while (uVar4 != uVar10);
  return;
}



// FUNCTION 145c2ee5f FUN_145c2ee5f body=53 status=ok
// SIG undefined FUN_145c2ee5f(void)

void FUN_145c2ee5f(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145c2ee94(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a17c930;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  *(undefined4 *)(puVar1 + 0xc) = 2;
  return;
}



// FUNCTION 145c2ee94 FUN_145c2ee94 body=43 status=ok
// SIG undefined FUN_145c2ee94(void)

undefined8 * FUN_145c2ee94(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_149ecc770;
  *(undefined1 *)(param_1 + 7) = 0;
  return param_1;
}



// FUNCTION 145c2eec8 FUN_145c2eec8 body=88 status=ok
// SIG undefined FUN_145c2eec8(void)

undefined8 * FUN_145c2eec8(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14a3b1120;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 2;
  *(undefined2 *)((longlong)param_1 + 0x34) = 0;
  *(undefined1 *)((longlong)param_1 + 0x36) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0x200000000;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)((longlong)param_1 + 0x47) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  return param_1;
}



// FUNCTION 145c2ef20 FUN_145c2ef20 body=123 status=ok
// SIG undefined FUN_145c2ef20(void)

longlong FUN_145c2ef20(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    FUN_145c2f04c(local_30,param_1);
    if (local_28 != 0) {
      do {
        lVar1 = local_28;
        if (*(longlong *)(local_28 + 0x20) == param_2) goto LAB_145c2ef7e;
        local_28 = *(longlong *)(local_28 + 0x18);
        FUN_145c2ef9c(local_30);
      } while (local_28 != 0);
    }
  }
  lVar1 = 0;
LAB_145c2ef7e:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c2ef9c FUN_145c2ef9c body=176 status=ok
// SIG undefined FUN_145c2ef9c(void)

void FUN_145c2ef9c(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  lVar4 = param_1[1];
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
LAB_145c2efb0:
    for (; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x18)) {
      if (((~*(uint *)(*(longlong *)(lVar4 + 8) + 0x18) & 0x1008041) == 0) &&
         ((*(char *)((longlong)param_1 + 0x15) != '\0' || ((*(byte *)(lVar4 + 0x3b) & 0x20) == 0))))
      goto LAB_145c2efd2;
    }
    if (*(char *)((longlong)param_1 + 0x16) == '\x01') {
      lVar4 = (longlong)(int)param_1[2] + 1;
      iVar3 = (int)lVar4;
      *(int *)(param_1 + 2) = iVar3;
      if (iVar3 < (int)plVar2[0x3c]) {
        lVar1 = *(longlong *)(plVar2[0x3b] + lVar4 * 0x10);
        lVar4 = 0;
        if (lVar1 != 0) {
          lVar4 = *(longlong *)(lVar1 + 0x50);
        }
        goto LAB_145c2efb0;
      }
    }
    if (*(char *)((longlong)param_1 + 0x14) == '\x01') {
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2b0))();
      if (plVar2 != (longlong *)0x0) {
        lVar4 = plVar2[10];
        *(undefined4 *)(param_1 + 2) = 0xffffffff;
        goto LAB_145c2efb0;
      }
      plVar2 = (longlong *)0x0;
    }
    lVar4 = 0;
  }
LAB_145c2efd2:
  *param_1 = (longlong)plVar2;
  param_1[1] = lVar4;
  return;
}



// FUNCTION 145c2f04c FUN_145c2f04c body=132 status=ok
// SIG undefined FUN_145c2f04c(void)

longlong * FUN_145c2f04c(longlong *param_1,longlong param_2,byte param_3)

{
  longlong lVar1;
  bool bVar2;
  
  *param_1 = param_2;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_2 + 0x50);
  }
  param_1[1] = lVar1;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *(byte *)((longlong)param_1 + 0x14) = param_3 & 1;
  *(byte *)((longlong)param_1 + 0x15) = param_3 >> 1 & 1;
  if ((param_3 & 4) != 0 && param_2 != 0) {
    lVar1 = FUN_144a797b2();
    if (*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) {
      bVar2 = *(longlong *)
               (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30;
      goto LAB_145c2f094;
    }
  }
  bVar2 = false;
LAB_145c2f094:
  *(bool *)((longlong)param_1 + 0x16) = bVar2;
  FUN_145c2ef9c(param_1);
  return param_1;
}



// FUNCTION 145c2f0d0 FUN_145c2f0d0 body=123 status=ok
// SIG undefined FUN_145c2f0d0(void)

longlong FUN_145c2f0d0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    FUN_145c2f1fc(local_30,param_1);
    if (local_28 != 0) {
      do {
        lVar1 = local_28;
        if (*(longlong *)(local_28 + 0x20) == param_2) goto LAB_145c2f12e;
        local_28 = *(longlong *)(local_28 + 0x18);
        FUN_145c2f14c(local_30);
      } while (local_28 != 0);
    }
  }
  lVar1 = 0;
LAB_145c2f12e:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c2f14c FUN_145c2f14c body=176 status=ok
// SIG undefined FUN_145c2f14c(void)

void FUN_145c2f14c(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  lVar4 = param_1[1];
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
LAB_145c2f160:
    for (; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x18)) {
      if (((~*(uint *)(*(longlong *)(lVar4 + 8) + 0x18) & 0x1008101) == 0) &&
         ((*(char *)((longlong)param_1 + 0x15) != '\0' || ((*(byte *)(lVar4 + 0x3b) & 0x20) == 0))))
      goto LAB_145c2f182;
    }
    if (*(char *)((longlong)param_1 + 0x16) == '\x01') {
      lVar4 = (longlong)(int)param_1[2] + 1;
      iVar3 = (int)lVar4;
      *(int *)(param_1 + 2) = iVar3;
      if (iVar3 < (int)plVar2[0x3c]) {
        lVar1 = *(longlong *)(plVar2[0x3b] + lVar4 * 0x10);
        lVar4 = 0;
        if (lVar1 != 0) {
          lVar4 = *(longlong *)(lVar1 + 0x50);
        }
        goto LAB_145c2f160;
      }
    }
    if (*(char *)((longlong)param_1 + 0x14) == '\x01') {
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2b0))();
      if (plVar2 != (longlong *)0x0) {
        lVar4 = plVar2[10];
        *(undefined4 *)(param_1 + 2) = 0xffffffff;
        goto LAB_145c2f160;
      }
      plVar2 = (longlong *)0x0;
    }
    lVar4 = 0;
  }
LAB_145c2f182:
  *param_1 = (longlong)plVar2;
  param_1[1] = lVar4;
  return;
}



// FUNCTION 145c2f1fc FUN_145c2f1fc body=132 status=ok
// SIG undefined FUN_145c2f1fc(void)

longlong * FUN_145c2f1fc(longlong *param_1,longlong param_2,byte param_3)

{
  longlong lVar1;
  bool bVar2;
  
  *param_1 = param_2;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_2 + 0x50);
  }
  param_1[1] = lVar1;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *(byte *)((longlong)param_1 + 0x14) = param_3 & 1;
  *(byte *)((longlong)param_1 + 0x15) = param_3 >> 1 & 1;
  if ((param_3 & 4) != 0 && param_2 != 0) {
    lVar1 = FUN_144a797b2();
    if (*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) {
      bVar2 = *(longlong *)
               (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30;
      goto LAB_145c2f244;
    }
  }
  bVar2 = false;
LAB_145c2f244:
  *(bool *)((longlong)param_1 + 0x16) = bVar2;
  FUN_145c2f14c(param_1);
  return param_1;
}



// FUNCTION 145c2f28c FUN_145c2f28c body=85 status=ok
// SIG undefined FUN_145c2f28c(void)

undefined8 * FUN_145c2f28c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14abcae20;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar1 = DAT_14cb203d8;
  param_1[6] = DAT_14cb203d0;
  param_1[7] = uVar1;
  param_1[8] = DAT_14cb203e0;
  *(undefined4 *)(param_1 + 9) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 0xc) = DAT_14cb1f000;
  return param_1;
}



// FUNCTION 145c2f2ea FUN_145c2f2ea body=88 status=ok
// SIG undefined FUN_145c2f2ea(void)

undefined8 * FUN_145c2f2ea(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_1402309ae(param_1,uVar1);
  *param_1 = &PTR_FUN_14b0aeb40;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(byte *)(param_1 + 0x16) = *(byte *)(param_1 + 0x16) | 1;
  param_1[0xe] = 0x3ff0000000000000;
  param_1[0xf] = 0x3ff0000000000000;
  param_1[0x10] = 0x3ff0000000000000;
  return param_1;
}



// FUNCTION 145c2f342 FUN_145c2f342 body=39 status=ok
// SIG undefined FUN_145c2f342(void)

void FUN_145c2f342(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145c2f36a();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145c2f36a FUN_145c2f36a body=9 status=ok
// SIG undefined FUN_145c2f36a(void)

float FUN_145c2f36a(longlong param_1)

{
  return (float)*(int *)(param_1 + 0x110);
}



// FUNCTION 145c2f374 FUN_145c2f374 body=39 status=ok
// SIG undefined FUN_145c2f374(void)

void FUN_145c2f374(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1414f52f2();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145c2f39c FUN_145c2f39c body=39 status=ok
// SIG undefined FUN_145c2f39c(void)

void FUN_145c2f39c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145c2f3c3();
  FUN_1409f75d4(param_2,&DAT_14cb75ec0,uVar1,0);
  return;
}



// FUNCTION 145c2f3c3 FUN_145c2f3c3 body=57 status=ok
// SIG undefined FUN_145c2f3c3(void)

void FUN_145c2f3c3(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb55d78 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb55d78 = FUN_14171c317(FUN_1464b5790,uVar1,L"EClimbableInteractiveObjectHiddenState");
  }
  return;
}



// FUNCTION 145c2f3fc FUN_145c2f3fc body=40 status=ok
// SIG undefined FUN_145c2f3fc(void)

undefined8 FUN_145c2f3fc(undefined8 param_1,int param_2)

{
  FUN_145c2f424();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c2f424 FUN_145c2f424 body=103 status=ok
// SIG undefined FUN_145c2f424(void)

void FUN_145c2f424(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b435c40;
  FUN_144760e21(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_145c2f48b(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c2f48b FUN_145c2f48b body=49 status=ok
// SIG undefined FUN_145c2f48b(void)

void FUN_145c2f48b(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145c2f4bc FUN_145c2f4bc body=38 status=ok
// SIG undefined FUN_145c2f4bc(void)

undefined8 FUN_145c2f4bc(undefined8 param_1,int param_2)

{
  FUN_145c2f4e2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c2f4e2 FUN_145c2f4e2 body=58 status=ok
// SIG undefined FUN_145c2f4e2(void)

void FUN_145c2f4e2(ILogHandler *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_14b43b0d0;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x000145c2f50e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  renoir::Logging::ILogHandler::~ILogHandler(param_1);
  return;
}



// FUNCTION 145c2f51c FUN_145c2f51c body=38 status=ok
// SIG undefined FUN_145c2f51c(void)

undefined8 FUN_145c2f51c(undefined8 param_1,int param_2)

{
  FUN_145c2f542();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c2f542 FUN_145c2f542 body=58 status=ok
// SIG undefined FUN_145c2f542(void)

void FUN_145c2f542(IPerformanceHandler *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_14b43b0e0;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x000145c2f56e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  renoir::Profile::IPerformanceHandler::~IPerformanceHandler(param_1);
  return;
}



// FUNCTION 145c2f57c FUN_145c2f57c body=38 status=ok
// SIG undefined FUN_145c2f57c(void)

undefined8 FUN_145c2f57c(undefined8 param_1,int param_2)

{
  FUN_145c2f5a2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c2f5a2 FUN_145c2f5a2 body=58 status=ok
// SIG undefined FUN_145c2f5a2(void)

void FUN_145c2f5a2(ILogHandler *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_14b452ba0;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x000145c2f5ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  cohtml::Logging::ILogHandler::~ILogHandler(param_1);
  return;
}



// FUNCTION 145c2f5dc FUN_145c2f5dc body=38 status=ok
// SIG undefined FUN_145c2f5dc(void)

undefined8 FUN_145c2f5dc(undefined8 param_1,int param_2)

{
  FUN_145c2f602();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c2f602 FUN_145c2f602 body=58 status=ok
// SIG undefined FUN_145c2f602(void)

void FUN_145c2f602(IPerformanceHandler *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_14b452bb0;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x000145c2f62e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  cohtml::Profile::IPerformanceHandler::~IPerformanceHandler(param_1);
  return;
}



// FUNCTION 145c2f63c FUN_145c2f63c body=53 status=ok
// SIG undefined FUN_145c2f63c(void)

void FUN_145c2f63c(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145c2f672(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b466c40;
  puVar1[8] = 0;
  puVar1[9] = 0;
  FUN_140d7ec9e(puVar1 + 10);
  return;
}



// FUNCTION 145c2f672 FUN_145c2f672 body=43 status=ok
// SIG undefined FUN_145c2f672(void)

undefined8 * FUN_145c2f672(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14b461dc0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  return param_1;
}



// FUNCTION 145c2f69e FUN_145c2f69e body=39 status=ok
// SIG undefined FUN_145c2f69e(void)

void FUN_145c2f69e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145c2f6c6();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145c2f6c6 FUN_145c2f6c6 body=9 status=ok
// SIG undefined FUN_145c2f6c6(void)

undefined4 FUN_145c2f6c6(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x268);
}



// FUNCTION 145c2f6da FUN_145c2f6da body=85 status=ok
// SIG undefined FUN_145c2f6da(void)

undefined8 * FUN_145c2f6da(undefined8 *param_1)

{
  FUN_146481886();
  *param_1 = &PTR_FUN_14b589280;
  param_1[5] = &PTR_FUN_14b589600;
  *(undefined1 *)(param_1 + 0xfc) = 1;
  param_1[0xfd] = 0;
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  param_1[0x100] = 0;
  param_1[0x101] = 0;
  *(undefined1 *)((longlong)param_1 + 0x494) = 1;
  return param_1;
}



// FUNCTION 145c2f730 FUN_145c2f730 body=40 status=ok
// SIG undefined FUN_145c2f730(void)

undefined8 FUN_145c2f730(undefined8 param_1,int param_2)

{
  FUN_145c2f758();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c2f758 FUN_145c2f758 body=56 status=ok
// SIG undefined FUN_145c2f758(void)

void FUN_145c2f758(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b57c030;
  FUN_1412dafa6(param_1 + 0xb);
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c2f790 FUN_145c2f790 body=40 status=ok
// SIG undefined FUN_145c2f790(void)

undefined8 FUN_145c2f790(undefined8 param_1,int param_2)

{
  FUN_145c2f7b8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c2f7b8 FUN_145c2f7b8 body=56 status=ok
// SIG undefined FUN_145c2f7b8(void)

void FUN_145c2f7b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b57c560;
  FUN_1412dafa6(param_1 + 0xb);
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c2f7f8 FUN_145c2f7f8 body=88 status=ok
// SIG undefined FUN_145c2f7f8(void)

undefined8 * FUN_145c2f7f8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_1405ba846(param_1,uVar1);
  *param_1 = &PTR_FUN_14b7097a0;
  *(undefined4 *)(param_1 + 0x79) = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  *(undefined1 *)(param_1 + 0x7c) = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) & 0xf7;
  return param_1;
}



// FUNCTION 145c2f850 FUN_145c2f850 body=39 status=ok
// SIG undefined FUN_145c2f850(void)

void FUN_145c2f850(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1414f52fc();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145c2f878 FUN_145c2f878 body=39 status=ok
// SIG undefined FUN_145c2f878(void)

void FUN_145c2f878(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1414f5306();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145c2f8a0 FUN_145c2f8a0 body=39 status=ok
// SIG undefined FUN_145c2f8a0(void)

void FUN_145c2f8a0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145c2f8c8();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145c2f8c8 FUN_145c2f8c8 body=9 status=ok
// SIG undefined FUN_145c2f8c8(void)

undefined4 FUN_145c2f8c8(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x3a8);
}



// FUNCTION 145c2f8d2 FUN_145c2f8d2 body=39 status=ok
// SIG undefined FUN_145c2f8d2(void)

void FUN_145c2f8d2(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145c2f8fa();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145c2f8fa FUN_145c2f8fa body=9 status=ok
// SIG undefined FUN_145c2f8fa(void)

undefined4 FUN_145c2f8fa(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x3a0);
}



// FUNCTION 145c2f904 FUN_145c2f904 body=39 status=ok
// SIG undefined FUN_145c2f904(void)

void FUN_145c2f904(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145c2f92c();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145c2f92c FUN_145c2f92c body=9 status=ok
// SIG undefined FUN_145c2f92c(void)

undefined4 FUN_145c2f92c(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x394);
}



// FUNCTION 145c2f936 FUN_145c2f936 body=39 status=ok
// SIG undefined FUN_145c2f936(void)

void FUN_145c2f936(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145c2f95e();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145c2f95e FUN_145c2f95e body=9 status=ok
// SIG undefined FUN_145c2f95e(void)

undefined4 FUN_145c2f95e(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x38c);
}



// FUNCTION 145c2f968 FUN_145c2f968 body=39 status=ok
// SIG undefined FUN_145c2f968(void)

void FUN_145c2f968(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145c2f990();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145c2f990 FUN_145c2f990 body=9 status=ok
// SIG undefined FUN_145c2f990(void)

undefined4 FUN_145c2f990(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x3c4);
}



// FUNCTION 145c2f99a FUN_145c2f99a body=39 status=ok
// SIG undefined FUN_145c2f99a(void)

void FUN_145c2f99a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145c2f9c2();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145c2f9c2 FUN_145c2f9c2 body=9 status=ok
// SIG undefined FUN_145c2f9c2(void)

undefined4 FUN_145c2f9c2(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x3c8);
}



// FUNCTION 145c2f9cc FUN_145c2f9cc body=39 status=ok
// SIG undefined FUN_145c2f9cc(void)

void FUN_145c2f9cc(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145c2f9f4();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145c2f9f4 FUN_145c2f9f4 body=9 status=ok
// SIG undefined FUN_145c2f9f4(void)

undefined4 FUN_145c2f9f4(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x3bc);
}



// FUNCTION 145c2f9fe FUN_145c2f9fe body=39 status=ok
// SIG undefined FUN_145c2f9fe(void)

void FUN_145c2f9fe(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145c2fa26();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145c2fa26 FUN_145c2fa26 body=9 status=ok
// SIG undefined FUN_145c2fa26(void)

undefined4 FUN_145c2fa26(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x3c0);
}



// FUNCTION 145c2fa30 FUN_145c2fa30 body=39 status=ok
// SIG undefined FUN_145c2fa30(void)

void FUN_145c2fa30(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1414f5310();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145c2fa58 FUN_145c2fa58 body=39 status=ok
// SIG undefined FUN_145c2fa58(void)

void FUN_145c2fa58(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145c2fa80();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145c2fa80 FUN_145c2fa80 body=9 status=ok
// SIG undefined FUN_145c2fa80(void)

undefined4 FUN_145c2fa80(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x3d4);
}



// FUNCTION 145c2fa8a FUN_145c2fa8a body=39 status=ok
// SIG undefined FUN_145c2fa8a(void)

void FUN_145c2fa8a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145c2fab2();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145c2fab2 FUN_145c2fab2 body=9 status=ok
// SIG undefined FUN_145c2fab2(void)

undefined4 FUN_145c2fab2(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x3d8);
}



// FUNCTION 145c2fabc FUN_145c2fabc body=39 status=ok
// SIG undefined FUN_145c2fabc(void)

void FUN_145c2fabc(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145c2fae4();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145c2fae4 FUN_145c2fae4 body=9 status=ok
// SIG undefined FUN_145c2fae4(void)

undefined4 FUN_145c2fae4(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x3cc);
}



// FUNCTION 145c2faee FUN_145c2faee body=39 status=ok
// SIG undefined FUN_145c2faee(void)

void FUN_145c2faee(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145c2fb16();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145c2fb16 FUN_145c2fb16 body=9 status=ok
// SIG undefined FUN_145c2fb16(void)

undefined4 FUN_145c2fb16(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x3d0);
}



// FUNCTION 145c2fb20 FUN_145c2fb20 body=39 status=ok
// SIG undefined FUN_145c2fb20(void)

void FUN_145c2fb20(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145c2fb48();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145c2fb48 FUN_145c2fb48 body=9 status=ok
// SIG undefined FUN_145c2fb48(void)

undefined4 FUN_145c2fb48(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x3ac);
}



// FUNCTION 145c2fb52 FUN_145c2fb52 body=39 status=ok
// SIG undefined FUN_145c2fb52(void)

void FUN_145c2fb52(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145c2fb7a();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145c2fb7a FUN_145c2fb7a body=9 status=ok
// SIG undefined FUN_145c2fb7a(void)

undefined4 FUN_145c2fb7a(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x3a4);
}



// FUNCTION 145c2fb84 FUN_145c2fb84 body=39 status=ok
// SIG undefined FUN_145c2fb84(void)

void FUN_145c2fb84(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145c2fbac();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145c2fbac FUN_145c2fbac body=9 status=ok
// SIG undefined FUN_145c2fbac(void)

undefined4 FUN_145c2fbac(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x398);
}



// FUNCTION 145c2fbb6 FUN_145c2fbb6 body=39 status=ok
// SIG undefined FUN_145c2fbb6(void)

void FUN_145c2fbb6(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145c2fbde();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145c2fbde FUN_145c2fbde body=9 status=ok
// SIG undefined FUN_145c2fbde(void)

undefined4 FUN_145c2fbde(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x390);
}



// FUNCTION 145c2fbe8 FUN_145c2fbe8 body=52 status=ok
// SIG undefined FUN_145c2fbe8(void)

void FUN_145c2fbe8(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x350);
  memset(_Dst,0,0x350);
  FUN_145c2fc1c(_Dst);
  return;
}



// FUNCTION 145c2fc1c FUN_145c2fc1c body=140 status=ok
// SIG undefined FUN_145c2fc1c(void)

undefined8 * FUN_145c2fc1c(undefined8 *param_1)

{
  FUN_140e8cffc();
  *param_1 = &PTR_FUN_14b9bf690;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2cc) = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  return param_1;
}



// FUNCTION 145c2fcb4 FUN_145c2fcb4 body=85 status=ok
// SIG undefined FUN_145c2fcb4(void)

undefined8 * FUN_145c2fcb4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x18);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = IModuleInterface::vftable;
  FUN_14118b488(puVar1 + 1);
  *puVar1 = &PTR_FUN_14ba6a7c0;
  puVar1[1] = &PTR_FUN_14ba6a800;
  *(undefined1 *)(puVar1 + 2) = 0;
  return puVar1;
}



// FUNCTION 145c2fd0a FUN_145c2fd0a body=40 status=ok
// SIG undefined FUN_145c2fd0a(void)

undefined8 FUN_145c2fd0a(undefined8 param_1,int param_2)

{
  FUN_145c2fd32();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c2fd32 FUN_145c2fd32 body=56 status=ok
// SIG undefined FUN_145c2fd32(void)

void FUN_145c2fd32(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bd20590;
  FUN_14121c54c(param_1 + 0xd);
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c2fd6a FUN_145c2fd6a body=40 status=ok
// SIG undefined FUN_145c2fd6a(void)

undefined8 FUN_145c2fd6a(undefined8 param_1,int param_2)

{
  FUN_145c2fd92();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c2fd92 FUN_145c2fd92 body=107 status=ok
// SIG undefined FUN_145c2fd92(void)

void FUN_145c2fd92(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bdd1720;
  param_1[5] = &PTR_FUN_14bdd1ae0;
  param_1[0x13] = &PTR_FUN_14bdd1b00;
  param_1[0x14] = &PTR_FUN_14bdd1b18;
  FUN_145c2fdfd(param_1[0x21],*(undefined4 *)(param_1 + 0x22));
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  FUN_145bcef5c(param_1);
  return;
}



// FUNCTION 145c2fdfd FUN_145c2fdfd body=45 status=ok
// SIG undefined FUN_145c2fdfd(void)

void FUN_145c2fdfd(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 0x10;
  }
  return;
}



// FUNCTION 145c2fe2a FUN_145c2fe2a body=40 status=ok
// SIG undefined FUN_145c2fe2a(void)

undefined8 FUN_145c2fe2a(undefined8 param_1,int param_2)

{
  FUN_145c2fe52();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c2fe52 FUN_145c2fe52 body=150 status=ok
// SIG undefined FUN_145c2fe52(void)

void FUN_145c2fe52(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_14beb04d0;
  plVar2 = (longlong *)param_1[0x23];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  puVar3 = (undefined8 *)param_1[0x1e];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  FUN_145c2fee8(param_1 + 0xe);
  FUN_14102a02c(param_1 + 9);
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c2fee8 FUN_145c2fee8 body=98 status=ok
// SIG undefined FUN_145c2fee8(void)

void FUN_145c2fee8(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if (param_1[6] != 0) {
      (**(code **)(*(longlong *)param_1[10] + 0x10))
                ((longlong *)param_1[10],param_1[6],
                 *(int *)(lVar1 + 0x20) * 0x10 + *(int *)(lVar1 + 0x1c) * 8 +
                 ((*(int *)(lVar1 + 0x10) + 0x1fU >> 3) + (*(int *)(lVar1 + 0x14) + 0x1fU >> 5) * 4
                 & 0xfffffffc) * 2);
    }
    *param_1 = 0;
  }
  return;
}



// FUNCTION 145c2ff4a FUN_145c2ff4a body=433 status=ok
// SIG undefined FUN_145c2ff4a(void)

void FUN_145c2ff4a(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  double dVar9;
  double *pdVar10;
  uint uVar11;
  longlong *plVar12;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double local_50;
  
  dVar9 = (double)(DAT_14c707940 ^ (ulonglong)auStack_b8);
  local_50 = dVar9;
  if ((char)param_2 == '\0') {
    plVar12 = *(longlong **)(param_1 + 0x38);
    lVar1 = plVar12[0x39];
    if (lVar1 == 0) {
      local_58 = DAT_14c846508;
      local_68 = DAT_14c8464f8;
    }
    else {
      dVar4 = *(double *)(lVar1 + 0x240);
      dVar5 = *(double *)(lVar1 + 0x248);
      dVar6 = *(double *)(lVar1 + 0x250);
      dVar7 = *(double *)(lVar1 + 600);
      pdVar10 = *(double **)(lVar1 + 0x228);
      local_88 = dVar4;
      uStack_80 = dVar5;
      local_78 = dVar6;
      uStack_70 = dVar7;
      if (pdVar10 == (double *)0x0) {
        plVar12 = (longlong *)&DAT_00000040;
        pdVar10 = (double *)FUN_14001cc68(0x40,0x10);
        dVar9 = DAT_14c8463d8;
        *pdVar10 = DAT_14c8463d0;
        pdVar10[1] = dVar9;
        dVar9 = DAT_14c8463e8;
        pdVar10[2] = DAT_14c8463e0;
        pdVar10[3] = dVar9;
        dVar9 = DAT_14c846500;
        pdVar10[4] = DAT_14c8464f8;
        pdVar10[5] = dVar9;
        dVar9 = DAT_14c846508;
        pdVar10[6] = DAT_14c846508;
        *(double **)(lVar1 + 0x228) = pdVar10;
      }
      auVar2._8_4_ = (int)-(ulonglong)(dVar5 != pdVar10[1]);
      auVar2._0_8_ = -(ulonglong)(dVar4 != *pdVar10);
      auVar2._12_4_ = (int)(-(ulonglong)(dVar5 != pdVar10[1]) >> 0x20);
      iVar8 = movmskpd(SUB84(dVar9,0),auVar2);
      auVar3._8_4_ = (int)-(ulonglong)(dVar7 != pdVar10[3]);
      auVar3._0_8_ = -(ulonglong)(dVar6 != pdVar10[2]);
      auVar3._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar10[3]) >> 0x20);
      uVar11 = movmskpd((int)plVar12,auVar3);
      if ((uVar11 & 0x3fffffff) != 0 || iVar8 != 0) {
        *(undefined4 *)(pdVar10 + 2) = (undefined4)local_78;
        *(undefined4 *)((longlong)pdVar10 + 0x14) = local_78._4_4_;
        *(undefined4 *)(pdVar10 + 3) = (undefined4)uStack_70;
        *(undefined4 *)((longlong)pdVar10 + 0x1c) = uStack_70._4_4_;
        *(undefined4 *)pdVar10 = (undefined4)local_88;
        *(undefined4 *)((longlong)pdVar10 + 4) = local_88._4_4_;
        *(undefined4 *)(pdVar10 + 1) = (undefined4)uStack_80;
        *(undefined4 *)((longlong)pdVar10 + 0xc) = uStack_80._4_4_;
        FUN_1448052ee(&local_88,&local_68);
        pdVar10[6] = local_58;
        pdVar10[4] = local_68;
        pdVar10[5] = dStack_60;
      }
      local_58 = pdVar10[6];
      local_68 = pdVar10[4];
      plVar12 = *(longlong **)(param_1 + 0x38);
    }
    dStack_60 = (double)*(float *)(param_1 + 0x120);
    local_98 = 0;
    (**(code **)(*plVar12 + 0x4d0))(SUB84(dStack_60,0),param_1 + 0x100,&local_68,0);
  }
  FUN_140670e42(param_1,param_2);
  FUN_1414f531a(param_1,0);
  if (((ulonglong)local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c300fc FUN_145c300fc body=78 status=ok
// SIG undefined FUN_145c300fc(void)

void FUN_145c300fc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xb0);
  if (((lVar1 != 0) || (lVar1 = FUN_1448abda6(param_1), lVar1 != 0)) &&
     ((undefined4 *)(lVar1 + 0x930) != (undefined4 *)(param_1 + 0x1b64))) {
    *(undefined4 *)(param_1 + 0x1b64) = *(undefined4 *)(lVar1 + 0x930);
    *(undefined1 *)(param_1 + 0x1b68) = 1;
  }
  return;
}



// FUNCTION 145c3014a FUN_145c3014a body=263 status=ok
// SIG undefined FUN_145c3014a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c3014a(longlong *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  DAT_14cbf68f0 = 0;
  DAT_14cbf68f8 = 0;
  DAT_14cbf68d0 = 0;
  _DAT_14cbf68d8 = 0;
  _DAT_14cbf68fc = 0xffffffff00000080;
  DAT_14cbf6904 = 0;
  DAT_14cbf6910 = 0;
  DAT_14cbf6918 = 0;
  uVar5 = (ulonglong)(param_1[1] - *param_1) >> 4;
  uVar4 = (uint)uVar5;
  if (uVar4 != 0) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_145c306ee(uVar5 & 0xffffffff);
    if (uVar4 < 4) {
      iVar2 = 1;
    }
    else {
      uVar4 = (uVar4 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if ((DAT_14cbf6918 == 0) || (DAT_14cbf6918 < iVar2)) {
      DAT_14cbf6918 = iVar2;
      FUN_145c30514();
    }
  }
  puVar3 = (undefined4 *)*param_1;
  puVar1 = (undefined4 *)param_1[1];
  if (puVar3 != puVar1) {
    do {
      local_40 = *puVar3;
      uStack_3c = puVar3[1];
      uStack_38 = puVar3[2];
      uStack_34 = puVar3[3];
      FUN_145c30252(local_2c,&local_40);
      puVar3 = puVar3 + 4;
    } while (puVar3 != puVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c30252 FUN_145c30252 body=288 status=ok
// SIG undefined FUN_145c30252(void)

undefined4 * FUN_145c30252(undefined4 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  ulonglong uVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  byte *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145c30406(local_40);
  puVar2 = (undefined4 *)param_2[1];
  bVar1 = *(byte *)*param_2;
  *local_38 = bVar1;
  *(undefined4 *)(local_38 + 4) = *puVar2;
  local_38[8] = 0xff;
  local_38[9] = 0xff;
  local_38[10] = 0xff;
  local_38[0xb] = 0xff;
  local_44 = local_40[0];
  cVar5 = FUN_145c30374(bVar1,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar8 = DAT_14cbf68d8 - DAT_14cbf6904;
    iVar9 = 1;
    if (3 < uVar8) {
      uVar6 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar9 <= DAT_14cbf6918)) {
      uVar8 = DAT_14cbf6918 - 1U & (uint)bVar1;
      *(uint *)(local_38 + 0xc) = uVar8;
      puVar7 = DAT_14cbf6910;
      if (DAT_14cbf6910 == (undefined *)0x0) {
        puVar7 = &DAT_14cbf6908;
      }
      *(undefined4 *)(local_38 + 8) =
           *(undefined4 *)(puVar7 + (ulonglong)(DAT_14cbf6918 - 1U & uVar8) * 4);
      puVar7 = DAT_14cbf6910;
      if (DAT_14cbf6910 == (undefined *)0x0) {
        puVar7 = &DAT_14cbf6908;
      }
      *(undefined4 *)(puVar7 + (ulonglong)(DAT_14cbf6918 - 1U & uVar8) * 4) = local_44;
    }
    else {
      DAT_14cbf6918 = iVar9;
      FUN_145c30514();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c30374 FUN_145c30374 body=145 status=ok
// SIG undefined FUN_145c30374(void)

undefined8 FUN_145c30374(uint param_1,char *param_2,int *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  
  if ((DAT_14cbf68d8 - DAT_14cbf6904 != 1) && (DAT_14cbf68d8 != DAT_14cbf6904)) {
    puVar3 = &DAT_14cbf6908;
    if (DAT_14cbf6910 != (undefined *)0x0) {
      puVar3 = DAT_14cbf6910;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)(DAT_14cbf6918 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        puVar1 = (undefined8 *)(DAT_14cbf68d0 + (longlong)iVar2 * 0x10);
        if (*(char *)(DAT_14cbf68d0 + (longlong)iVar2 * 0x10) == *param_2) {
          *puVar1 = *(undefined8 *)param_2;
          FUN_14905f4b0(*param_3);
          *param_3 = iVar2;
          return 1;
        }
        iVar2 = *(int *)(puVar1 + 1);
      } while (iVar2 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145c30406 FUN_145c30406 body=269 status=ok
// SIG undefined FUN_145c30406(void)

int * FUN_145c30406(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cbf6900;
  iVar4 = DAT_14cbf68d8;
  if (DAT_14cbf6904 == 0) {
    iVar2 = DAT_14cbf68d8 + 1;
    bVar7 = DAT_14cbf68dc == DAT_14cbf68d8;
    DAT_14cbf68d8 = iVar2;
    if (bVar7) {
      FUN_144869a3c(&DAT_14cbf68d0,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14cbf68e0,1);
    puVar3 = DAT_14cbf68f0;
    if (DAT_14cbf68f0 == (undefined4 *)0x0) {
      puVar3 = &DAT_14cbf68e0;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    puVar3[iVar5 >> 5] = puVar3[iVar5 >> 5] & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  }
  else {
    lVar6 = (longlong)DAT_14cbf6900;
    DAT_14cbf6900 = *(int *)(DAT_14cbf68d0 + 4 + lVar6 * 0x10);
    DAT_14cbf6904 = DAT_14cbf6904 + -1;
    iVar4 = iVar2;
    if (DAT_14cbf6904 != 0) {
      *(undefined4 *)(DAT_14cbf68d0 + (longlong)DAT_14cbf6900 * 0x10) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14cbf68e0;
  if (DAT_14cbf68f0 != (undefined4 *)0x0) {
    puVar3 = DAT_14cbf68f0;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  puVar3[iVar2 >> 5] = puVar3[iVar2 >> 5] | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x10 + DAT_14cbf68d0;
  return param_1;
}



// FUNCTION 145c30514 FUN_145c30514 body=472 status=ok
// SIG undefined FUN_145c30514(void)

void FUN_145c30514(void)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined4 *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbf6910 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cbf6910,0,0,4);
  }
  uVar7 = DAT_14cbf6918;
  uVar2 = local_50;
  if (DAT_14cbf6918 != 0) {
    uVar6 = 0;
    FUN_144a1cbf0(&DAT_14cbf6908,0,DAT_14cbf6918,4);
    if (0 < (int)uVar7) {
      do {
        puVar4 = DAT_14cbf6910;
        if (DAT_14cbf6910 == (undefined *)0x0) {
          puVar4 = &DAT_14cbf6908;
        }
        *(undefined4 *)(puVar4 + (ulonglong)(DAT_14cbf6918 + 0x7fffffff & uVar6) * 4) = 0xffffffff;
        uVar6 = uVar6 + 1;
      } while (uVar7 != uVar6);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cbf68e0;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cbf68f8 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cbf68d0;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < (int)local_38[6]) {
      iVar3 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar3 * 0x10;
        uVar7 = DAT_14cbf6918 - 1 & (uint)*(byte *)(lVar1 + lVar5);
        *(uint *)(lVar1 + 0xc + lVar5) = uVar7;
        puVar4 = DAT_14cbf6910;
        if (DAT_14cbf6910 == (undefined *)0x0) {
          puVar4 = &DAT_14cbf6908;
        }
        *(undefined4 *)(lVar1 + 8 + lVar5) =
             *(undefined4 *)(puVar4 + (ulonglong)(DAT_14cbf6918 - 1 & uVar7) * 4);
        puVar4 = DAT_14cbf6910;
        if (DAT_14cbf6910 == (undefined *)0x0) {
          puVar4 = &DAT_14cbf6908;
        }
        *(int *)(puVar4 + (ulonglong)(DAT_14cbf6918 - 1 & uVar7) * 4) = iVar3;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar3 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < (int)local_58[6]);
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c306ee FUN_145c306ee body=481 status=ok
// SIG undefined FUN_145c306ee(void)

void FUN_145c306ee(uint param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  
  iVar3 = DAT_14cbf68d8;
  uVar9 = param_1 - DAT_14cbf68d8;
  if (uVar9 != 0 && DAT_14cbf68d8 <= (int)param_1) {
    iVar8 = DAT_14cbf68d8;
    if (DAT_14cbf68dc < (int)param_1) {
      FUN_14472eb64(&DAT_14cbf68d0);
      iVar8 = DAT_14cbf68d8;
    }
    DAT_14cbf68d8 = iVar8 + uVar9;
    if ((uint)(DAT_14cbf68dc - iVar8) < uVar9) {
      FUN_144869a3c(&DAT_14cbf68d0);
    }
    lVar2 = DAT_14cbf68d0;
    if (iVar8 < (int)param_1) {
      piVar7 = (int *)((ulonglong)param_1 * 0x10 + DAT_14cbf68d0 + -0xc);
      uVar12 = (ulonglong)param_1;
      do {
        uVar1 = uVar12 - 1;
        if (DAT_14cbf6904 == 0) {
          iVar11 = (int)uVar12 + -1;
        }
        else {
          *(int *)(lVar2 + (longlong)DAT_14cbf6900 * 0x10) = (int)uVar12 + -1;
          iVar11 = (int)uVar1;
        }
        piVar7[-1] = -1;
        iVar13 = -1;
        if (0 < DAT_14cbf6904) {
          iVar13 = DAT_14cbf6900;
        }
        *piVar7 = iVar13;
        DAT_14cbf6904 = DAT_14cbf6904 + 1;
        piVar7 = piVar7 + -4;
        uVar12 = uVar1;
        DAT_14cbf6900 = iVar11;
      } while ((longlong)iVar8 < (longlong)uVar1);
    }
    if (iVar3 == 0) {
      uVar10 = uVar9 + 0x1f >> 5;
      DAT_14cbf68f8 = uVar9;
      if (DAT_14cbf68fc + 0x1f >> 5 < uVar10) {
        FUN_14499171c(&DAT_14cbf68e0,0,uVar10,4);
        DAT_14cbf68fc = uVar9 + 0x1f & 0xffffffe0;
      }
      puVar6 = DAT_14cbf68f0;
      if (DAT_14cbf68f0 == (undefined4 *)0x0) {
        puVar6 = &DAT_14cbf68e0;
      }
      if (uVar9 < 0x101) {
        uVar10 = uVar10 + (uVar10 == 0);
      }
      memset(puVar6,0,(ulonglong)(uVar10 << 2));
      uVar9 = DAT_14cbf68f8 + 0x1f;
      if (-1 < (int)DAT_14cbf68f8) {
        uVar9 = DAT_14cbf68f8;
      }
      if ((int)DAT_14cbf68f8 % 0x20 != 0) {
        puVar6 = &DAT_14cbf68e0;
        if (DAT_14cbf68f0 != (undefined4 *)0x0) {
          puVar6 = DAT_14cbf68f0;
        }
        bVar5 = -(char)((int)DAT_14cbf68f8 % 0x20);
        puVar6[(int)uVar9 >> 5] =
             (uint)(puVar6[(int)uVar9 >> 5] << (bVar5 & 0x1f)) >> (bVar5 & 0x1f);
      }
    }
    else if (-1 < (int)uVar9) {
      uVar4 = FUN_144a54ea4(&DAT_14cbf68e0,uVar9);
      FUN_1447c6044(&DAT_14cbf68e0,uVar4,uVar9,0);
      return;
    }
  }
  return;
}



// FUNCTION 145c308da FUN_145c308da body=149 status=ok
// SIG undefined FUN_145c308da(void)

undefined8 * FUN_145c308da(undefined8 *param_1)

{
  FUN_145c30970();
  *param_1 = &PTR_FUN_14a68fb60;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0x20;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caebeb0) {
    FUN_144b3d300(&DAT_14caebeb0);
    if (DAT_14caebeb0 == -1) {
      FUN_1414f5b24();
      atexit((_func_5014 *)&LAB_14356f2d8);
      _Init_thread_footer(&DAT_14caebeb0);
    }
  }
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 1;
  return param_1;
}



// FUNCTION 145c30970 FUN_145c30970 body=183 status=ok
// SIG undefined FUN_145c30970(void)

undefined8 * FUN_145c30970(undefined8 *param_1)

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
  param_1[0x16] = 0;
  *param_1 = &PTR_FUN_14a68f6b0;
  memset(param_1 + 0x17,0,200);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caebe98) {
    FUN_144b3d300(&DAT_14caebe98);
    if (DAT_14caebe98 == -1) {
      FUN_1414f5bca();
      atexit((_func_5014 *)&LAB_14356f2c4);
      _Init_thread_footer(&DAT_14caebe98);
    }
  }
  return param_1;
}



// FUNCTION 145c30a28 FUN_145c30a28 body=40 status=ok
// SIG undefined FUN_145c30a28(void)

undefined8 FUN_145c30a28(undefined8 param_1,int param_2)

{
  FUN_145c30a50();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c30a50 FUN_145c30a50 body=130 status=ok
// SIG undefined FUN_145c30a50(void)

void FUN_145c30a50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4fac20;
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_145c30ad2(param_1 + 0xc);
  FUN_144760e21(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c30ad2 FUN_145c30ad2 body=53 status=ok
// SIG undefined FUN_145c30ad2(void)

void FUN_145c30ad2(longlong *param_1)

{
  FUN_145c30b08();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c30b08 FUN_145c30b08 body=353 status=ok
// SIG undefined FUN_145c30b08(void)

void FUN_145c30b08(longlong *param_1)

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
      plVar3 = *(longlong **)(*local_68 + 0x60 + (longlong)iStack_4c * 0x78);
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
    FUN_1410fd13e(param_1,0);
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



// FUNCTION 145c30c6a FUN_145c30c6a body=24 status=ok
// SIG undefined FUN_145c30c6a(void)

void FUN_145c30c6a(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145c30c7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145c30c82 FUN_145c30c82 body=38 status=ok
// SIG undefined FUN_145c30c82(void)

undefined8 FUN_145c30c82(undefined8 param_1,int param_2)

{
  FUN_145c30ca8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c30ca8 FUN_145c30ca8 body=413 status=ok
// SIG undefined FUN_145c30ca8(void)

void FUN_145c30ca8(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b40f220;
  param_1[4] = &PTR_FUN_14b40f240;
  param_1[6] = &PTR_FUN_14b40f260;
  param_1[0x29] = 0;
  plVar3 = (longlong *)param_1[0x2a];
  if (plVar3 != (longlong *)0x0) {
    param_1[0x2a] = 0;
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
  FUN_145c30e7c(param_1 + 0x24);
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_145c30e46(param_1 + 0xf);
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_140af926c(param_1 + 6);
  param_1[4] = &PTR_LAB_149e668b0;
  FUN_14019e1de(param_1 + 4);
  plVar3 = (longlong *)param_1[3];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145c30e41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145c30e46 FUN_145c30e46 body=53 status=ok
// SIG undefined FUN_145c30e46(void)

void FUN_145c30e46(longlong *param_1)

{
  FUN_145c30ec6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c30e7c FUN_145c30e7c body=73 status=ok
// SIG undefined FUN_145c30e7c(void)

void FUN_145c30e7c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b2ee310;
  plVar3 = (longlong *)param_1[6];
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
  FUN_144760f98(param_1);
  return;
}



// FUNCTION 145c30ec6 FUN_145c30ec6 body=360 status=ok
// SIG undefined FUN_145c30ec6(void)

void FUN_145c30ec6(longlong *param_1)

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
      lVar3 = (longlong)iStack_5c * 0x68;
      *(undefined4 *)(lVar2 + 0x50 + lVar3) = 0;
      if (*(longlong *)(lVar2 + 0x48 + lVar3) != 0) {
        FUN_1400020a8();
      }
      FUN_140600b9a(lVar2 + lVar3 + 8);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14059f004(param_1,0);
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



// FUNCTION 145c31030 FUN_145c31030 body=187 status=ok
// SIG undefined FUN_145c31030(void)

bool FUN_145c31030(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_48,0);
    lVar3 = local_48;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


