// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14321eb4a FUN_14321eb4a body=723 status=ok
// SIG undefined FUN_14321eb4a(void)

void FUN_14321eb4a(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  size_t _Size;
  undefined1 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  ulonglong local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  ulonglong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar7 = 0;
  local_b8 = (undefined1 *)0x0;
  local_b0 = 0x800000000;
  local_68 = (undefined1 *)0x0;
  local_60 = 0x800000000;
  local_58 = 0;
  uStack_50 = 0;
  lVar8 = *(longlong *)(param_1 + 0x18);
  iVar1 = *(int *)(lVar8 + 0x78);
  if (iVar1 != 0) {
    do {
      uVar4 = (ulonglong)
              *(ushort *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x70) + (longlong)iVar7 * 4)
      ;
      if ((*(longlong *)(*(longlong *)(param_1 + 0x10) + uVar4) != 0) &&
         ((*(byte *)(*(longlong *)(param_1 + 0x10) + 8 + uVar4) & 2) != 0)) {
        FUN_144b1c300(local_c0);
      }
      iVar7 = iVar7 + 1;
    } while (iVar1 != iVar7);
    lVar8 = *(longlong *)(param_1 + 0x18);
  }
  iVar1 = *(int *)(lVar8 + 0x68);
  if (iVar1 != 0) {
    iVar7 = 0;
    do {
      uVar4 = (ulonglong)
              *(ushort *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x60) + (longlong)iVar7 * 4)
      ;
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar4);
      if ((lVar8 != 0) && ((*(byte *)(*(longlong *)(param_1 + 0x10) + 8 + uVar4) & 2) != 0)) {
        FUN_144b1c300(local_c0,*(undefined8 *)(lVar8 + 0x10));
      }
      iVar7 = iVar7 + 1;
    } while (iVar1 != iVar7);
  }
  puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar6 + 0x11;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x90);
    puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar6 + 0x11;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar6;
  param_2[6] = (ulonglong)(puVar6 + 1);
  puVar6[1] = 0;
  *puVar6 = &PTR_FUN_14a1fb978;
  puVar6[3] = 0;
  _Size = (size_t)(int)local_b0;
  *(int *)(puVar6 + 4) = (int)local_b0;
  if (_Size == 0) {
    *(undefined4 *)((longlong)puVar6 + 0x24) = 8;
  }
  else {
    puVar5 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar5 = local_b8;
    }
    FUN_1446fe144(puVar6 + 2,local_b0 & 0xffffffff,0);
    puVar3 = (undefined8 *)puVar6[3];
    if ((undefined8 *)puVar6[3] == (undefined8 *)0x0) {
      puVar3 = puVar6 + 2;
    }
    memcpy(puVar3,puVar5,_Size);
  }
  puVar6[0xd] = 0;
  lVar8 = (longlong)(int)local_60;
  *(int *)(puVar6 + 0xe) = (int)local_60;
  if (lVar8 == 0) {
    *(undefined4 *)((longlong)puVar6 + 0x74) = 8;
  }
  else {
    puVar5 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar5 = local_a8;
    }
    FUN_1446fe1b8(puVar6 + 5,local_60 & 0xffffffff,0);
    puVar3 = (undefined8 *)puVar6[0xd];
    if ((undefined8 *)puVar6[0xd] == (undefined8 *)0x0) {
      puVar3 = puVar6 + 5;
    }
    memcpy(puVar3,puVar5,lVar8 << 3);
  }
  *(undefined4 *)(puVar6 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar6 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar6 + 0x10) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar6 + 0x84) = uStack_50._4_4_;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + 0x10);
  puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar6 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar6 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar6;
  param_2[6] = (ulonglong)(puVar6 + 1);
  puVar6[1] = 0;
  *puVar6 = &PTR_LAB_14a38c048;
  puVar6[2] = uVar2;
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14321ee36 FUN_14321ee36 body=38 status=ok
// SIG undefined FUN_14321ee36(void)

undefined8 FUN_14321ee36(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14321ee5c FUN_14321ee5c body=659 status=ok
// SIG undefined FUN_14321ee5c(void)

void FUN_14321ee5c(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  size_t _Size;
  undefined1 *_Src;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined4 *_Src_00;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 *puStack_c0;
  ulonglong local_b8;
  undefined1 local_b0 [64];
  undefined1 *local_70;
  ulonglong local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar5 = 0;
  puStack_c0 = (undefined4 *)0x0;
  local_b8 = 0x800000000;
  local_70 = (undefined1 *)0x0;
  local_68 = 0x800000000;
  local_60 = 0;
  uStack_58 = 0;
  lVar6 = *(longlong *)(param_1 + 0x18);
  iVar1 = *(int *)(lVar6 + 0x78);
  if (iVar1 != 0) {
    do {
      uVar3 = (ulonglong)
              *(ushort *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x70) + (longlong)iVar5 * 4)
      ;
      if ((*(longlong *)(*(longlong *)(param_1 + 0x10) + uVar3) != 0) &&
         ((*(byte *)(*(longlong *)(param_1 + 0x10) + 8 + uVar3) & 2) != 0)) {
        FUN_144b1c300(&local_c8);
      }
      iVar5 = iVar5 + 1;
    } while (iVar1 != iVar5);
    lVar6 = *(longlong *)(param_1 + 0x18);
  }
  iVar1 = *(int *)(lVar6 + 0x68);
  if (iVar1 != 0) {
    iVar5 = 0;
    do {
      uVar3 = (ulonglong)
              *(ushort *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x60) + (longlong)iVar5 * 4)
      ;
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar3);
      if ((lVar6 != 0) && ((*(byte *)(*(longlong *)(param_1 + 0x10) + 8 + uVar3) & 2) != 0)) {
        FUN_144b1c300(&local_c8,*(undefined8 *)(lVar6 + 0x10));
      }
      iVar5 = iVar5 + 1;
    } while (iVar1 != iVar5);
  }
  puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar4 + 0x11;
  if ((undefined8 *)param_2[1] < puVar2) {
    FUN_140023dd8(param_2,0x90);
    puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar4 + 0x11;
  }
  *param_2 = (ulonglong)puVar2;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar4;
  param_2[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_FUN_14a1fb978;
  puVar4[3] = 0;
  _Size = (size_t)(int)local_b8;
  *(int *)(puVar4 + 4) = (int)local_b8;
  if (_Size == 0) {
    *(undefined4 *)((longlong)puVar4 + 0x24) = 8;
  }
  else {
    _Src_00 = &local_c8;
    if (puStack_c0 != (undefined4 *)0x0) {
      _Src_00 = puStack_c0;
    }
    FUN_1446fe144(puVar4 + 2,local_b8 & 0xffffffff,0);
    puVar2 = (undefined8 *)puVar4[3];
    if ((undefined8 *)puVar4[3] == (undefined8 *)0x0) {
      puVar2 = puVar4 + 2;
    }
    memcpy(puVar2,_Src_00,_Size);
  }
  puVar4[0xd] = 0;
  lVar6 = (longlong)(int)local_68;
  *(int *)(puVar4 + 0xe) = (int)local_68;
  if (lVar6 == 0) {
    *(undefined4 *)((longlong)puVar4 + 0x74) = 8;
  }
  else {
    _Src = local_70;
    if (local_70 == (undefined1 *)0x0) {
      _Src = local_b0;
    }
    FUN_1446fe1b8(puVar4 + 5,local_68 & 0xffffffff,0);
    puVar2 = (undefined8 *)puVar4[0xd];
    if ((undefined8 *)puVar4[0xd] == (undefined8 *)0x0) {
      puVar2 = puVar4 + 5;
    }
    memcpy(puVar2,_Src,lVar6 << 3);
  }
  *(undefined4 *)(puVar4 + 0xf) = local_60;
  *(undefined4 *)((longlong)puVar4 + 0x7c) = uStack_5c;
  *(undefined4 *)(puVar4 + 0x10) = (undefined4)uStack_58;
  *(undefined4 *)((longlong)puVar4 + 0x84) = uStack_58._4_4_;
  if (local_70 != (undefined1 *)0x0) {
    FUN_1400020a8(local_70);
  }
  if (puStack_c0 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  local_c8 = *(undefined4 *)(param_1 + 0x1c8);
  uStack_c4 = *(undefined4 *)(param_1 + 0x1cc);
  puStack_c0 = *(undefined4 **)(param_1 + 0x1d0);
  FUN_14742f8b2(*(undefined8 *)(param_1 + 0x1b8),param_2,
                *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0x10));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14321f0fc FUN_14321f0fc body=31 status=ok
// SIG undefined FUN_14321f0fc(void)

undefined8 FUN_14321f0fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14321f11c FUN_14321f11c body=38 status=ok
// SIG undefined FUN_14321f11c(void)

undefined8 FUN_14321f11c(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14321f142 FUN_14321f142 body=653 status=ok
// SIG undefined FUN_14321f142(void)

void FUN_14321f142(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  size_t _Size;
  undefined1 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  ulonglong local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  ulonglong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar6 = 0;
  local_b8 = (undefined1 *)0x0;
  local_b0 = 0x800000000;
  local_68 = (undefined1 *)0x0;
  local_60 = 0x800000000;
  local_58 = 0;
  uStack_50 = 0;
  lVar7 = *(longlong *)(param_1 + 0x18);
  iVar1 = *(int *)(lVar7 + 0x78);
  if (iVar1 != 0) {
    do {
      uVar3 = (ulonglong)
              *(ushort *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x70) + (longlong)iVar6 * 4)
      ;
      if ((*(longlong *)(*(longlong *)(param_1 + 0x10) + uVar3) != 0) &&
         ((*(byte *)(*(longlong *)(param_1 + 0x10) + 8 + uVar3) & 2) != 0)) {
        FUN_144b1c300(local_c0);
      }
      iVar6 = iVar6 + 1;
    } while (iVar1 != iVar6);
    lVar7 = *(longlong *)(param_1 + 0x18);
  }
  iVar1 = *(int *)(lVar7 + 0x68);
  if (iVar1 != 0) {
    iVar6 = 0;
    do {
      uVar3 = (ulonglong)
              *(ushort *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x60) + (longlong)iVar6 * 4)
      ;
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar3);
      if ((lVar7 != 0) && ((*(byte *)(*(longlong *)(param_1 + 0x10) + 8 + uVar3) & 2) != 0)) {
        FUN_144b1c300(local_c0,*(undefined8 *)(lVar7 + 0x10));
      }
      iVar6 = iVar6 + 1;
    } while (iVar1 != iVar6);
  }
  puVar5 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar5 + 0x11;
  if ((undefined8 *)param_2[1] < puVar2) {
    FUN_140023dd8(param_2,0x90);
    puVar5 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar5 + 0x11;
  }
  *param_2 = (ulonglong)puVar2;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar5;
  param_2[6] = (ulonglong)(puVar5 + 1);
  puVar5[1] = 0;
  *puVar5 = &PTR_FUN_14a1fb978;
  puVar5[3] = 0;
  _Size = (size_t)(int)local_b0;
  *(int *)(puVar5 + 4) = (int)local_b0;
  if (_Size == 0) {
    *(undefined4 *)((longlong)puVar5 + 0x24) = 8;
  }
  else {
    puVar4 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar4 = local_b8;
    }
    FUN_1446fe144(puVar5 + 2,local_b0 & 0xffffffff,0);
    puVar2 = (undefined8 *)puVar5[3];
    if ((undefined8 *)puVar5[3] == (undefined8 *)0x0) {
      puVar2 = puVar5 + 2;
    }
    memcpy(puVar2,puVar4,_Size);
  }
  puVar5[0xd] = 0;
  lVar7 = (longlong)(int)local_60;
  *(int *)(puVar5 + 0xe) = (int)local_60;
  if (lVar7 == 0) {
    *(undefined4 *)((longlong)puVar5 + 0x74) = 8;
  }
  else {
    puVar4 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar4 = local_a8;
    }
    FUN_1446fe1b8(puVar5 + 5,local_60 & 0xffffffff,0);
    puVar2 = (undefined8 *)puVar5[0xd];
    if ((undefined8 *)puVar5[0xd] == (undefined8 *)0x0) {
      puVar2 = puVar5 + 5;
    }
    memcpy(puVar2,puVar4,lVar7 << 3);
  }
  *(undefined4 *)(puVar5 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar5 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar5 + 0x10) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar5 + 0x84) = uStack_50._4_4_;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14178d776(*(undefined8 *)(param_1 + 0x1b8),param_2,
                *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0x10),
                *(undefined4 *)(param_1 + 0x1c8));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14321f3dc FUN_14321f3dc body=31 status=ok
// SIG undefined FUN_14321f3dc(void)

undefined8 FUN_14321f3dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14321f3fc FUN_14321f3fc body=1507 status=ok
// SIG undefined FUN_14321f3fc(void)

void FUN_14321f3fc(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  void *pvVar12;
  longlong lVar13;
  longlong lVar14;
  size_t sVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  int iVar18;
  longlong lVar19;
  ulonglong uVar20;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  ulonglong local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  ulonglong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar18 = 0;
  local_b8 = (undefined1 *)0x0;
  local_b0 = 0x800000000;
  local_68 = (undefined1 *)0x0;
  local_60 = 0x800000000;
  local_58 = 0;
  uStack_50 = 0;
  lVar19 = *(longlong *)(param_1 + 0x18);
  iVar3 = *(int *)(lVar19 + 0x78);
  if (iVar3 != 0) {
    do {
      uVar9 = (ulonglong)
              *(ushort *)
               (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x70) + (longlong)iVar18 * 4);
      if ((*(longlong *)(*(longlong *)(param_1 + 0x10) + uVar9) != 0) &&
         ((*(byte *)(*(longlong *)(param_1 + 0x10) + 8 + uVar9) & 2) != 0)) {
        FUN_144b1c300(local_c0);
      }
      iVar18 = iVar18 + 1;
    } while (iVar3 != iVar18);
    lVar19 = *(longlong *)(param_1 + 0x18);
  }
  iVar3 = *(int *)(lVar19 + 0x68);
  if (iVar3 != 0) {
    iVar18 = 0;
    do {
      uVar9 = (ulonglong)
              *(ushort *)
               (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x60) + (longlong)iVar18 * 4);
      lVar19 = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar9);
      if ((lVar19 != 0) && ((*(byte *)(*(longlong *)(param_1 + 0x10) + 8 + uVar9) & 2) != 0)) {
        FUN_144b1c300(local_c0,*(undefined8 *)(lVar19 + 0x10));
      }
      iVar18 = iVar18 + 1;
    } while (iVar3 != iVar18);
  }
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 0x11;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x90);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 0x11;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_FUN_14a1fb978;
  puVar17[3] = 0;
  sVar15 = (size_t)(int)local_b0;
  *(int *)(puVar17 + 4) = (int)local_b0;
  if (sVar15 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x24) = 8;
  }
  else {
    puVar16 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar16 = local_b8;
    }
    FUN_1446fe144(puVar17 + 2,local_b0 & 0xffffffff,0);
    puVar11 = (undefined8 *)puVar17[3];
    if ((undefined8 *)puVar17[3] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 2;
    }
    memcpy(puVar11,puVar16,sVar15);
  }
  puVar17[0xd] = 0;
  lVar19 = (longlong)(int)local_60;
  *(int *)(puVar17 + 0xe) = (int)local_60;
  if (lVar19 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x74) = 8;
  }
  else {
    puVar16 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar16 = local_a8;
    }
    FUN_1446fe1b8(puVar17 + 5,local_60 & 0xffffffff,0);
    puVar11 = (undefined8 *)puVar17[0xd];
    if ((undefined8 *)puVar17[0xd] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 5;
    }
    memcpy(puVar11,puVar16,lVar19 << 3);
  }
  *(undefined4 *)(puVar17 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar17 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar17 + 0x10) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar17 + 0x84) = uStack_50._4_4_;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar4 = *(undefined4 *)(param_1 + 0x1d8);
  uVar5 = *(undefined4 *)(param_1 + 0x1dc);
  uVar6 = *(undefined8 *)(param_1 + 0x1b8);
  uVar7 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar19 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar13 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar19 + 0x50) + lVar13 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar19,lVar13,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 3;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x20);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 3;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a37d340;
  puVar17[2] = uVar10;
  local_d8 = uVar7;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),uVar6);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 4;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x28);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 4;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar17 + 2) = uVar4;
  *(undefined4 *)((longlong)puVar17 + 0x14) = uVar5;
  *(undefined4 *)(puVar17 + 3) = (undefined4)local_c8;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar19 = 0;
  }
  else {
    lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar14 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar19 = *(longlong *)(*(longlong *)(lVar13 + 0x50) + lVar14 * 8);
    if (lVar19 == 0) {
      lVar19 = FUN_1400bafc2(lVar13,lVar14,1);
    }
  }
  local_c8 = lVar19;
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar19 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar19 + 0x10);
    uVar20 = lVar19 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar20 = uVar9;
    }
    iVar3 = *(int *)(lVar19 + 0x18);
    if ((longlong)iVar3 != 0) {
      lVar19 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar20 + 3 + lVar19);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar20 + 2 + lVar19);
          iVar18 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar18 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar18 + 1U) {
            FUN_1447477d8(puVar1,iVar18);
          }
          uVar9 = *puVar1;
          *(ushort *)(uVar9 + (longlong)iVar18 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar18 * 4) = 1;
        }
        lVar19 = lVar19 + 4;
      } while ((longlong)iVar3 * 4 != lVar19);
    }
    uVar9 = param_2[0x13];
    lVar19 = (longlong)(int)uVar9;
    if (0 < lVar19) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar17 + 5;
        if ((undefined8 *)param_2[1] < puVar11) {
          FUN_140023dd8(param_2,0x30);
          puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar17 + 5;
        }
        *param_2 = (ulonglong)puVar11;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar17;
        param_2[6] = (ulonglong)(puVar17 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar12 = (void *)((longlong)_Dst + lVar19 * 4);
        sVar15 = lVar19 * 4;
        if ((void *)param_2[1] < pvVar12) {
          FUN_140023dd8(param_2,(uint)sVar15 | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar12 = (void *)((longlong)_Dst + sVar15);
        }
        *param_2 = (ulonglong)pvVar12;
        memcpy(_Dst,_Src,sVar15);
        puVar17[1] = 0;
        *puVar17 = &PTR_FUN_14a1fbc38;
        puVar17[2] = local_c8;
        puVar17[3] = _Dst;
        *(int *)(puVar17 + 4) = (int)uVar9;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14321f9e0 FUN_14321f9e0 body=3085 status=ok
// SIG undefined FUN_14321f9e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14321f9e0(void)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = (undefined8 *)((ulonglong)local_58 & 0xffffffff00000000);
  local_68 = (undefined8 **)CONCAT44(local_68._4_4_,4);
  FUN_14078dbce(&DAT_14ca94e20,L"r.Raytracing.DebugForceRuntimeBLAS",&local_58,
                L"Force building BLAS at runtime.");
  atexit(FUN_143201c6c);
  FUN_1400b22c2(&local_58,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_58,&DAT_14ca94e38);
  if (cVar2 == '\0') {
    _DAT_14ca94e38 = 0;
    uRam000000014ca94e40 = 0;
  }
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  local_50 = FUN_145dd2678;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca94f60,&local_58);
  local_50 = FUN_145eb2df6;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca95088,&local_58);
  local_58 = (undefined8 *)0x800000014a388736;
  local_44 = 10;
  uVar3 = FUN_14577453c();
  local_50._0_5_ = CONCAT14(1,uVar3);
  FUN_14631ef1e(&local_58);
  _DAT_14ca964d0 = 0;
  _DAT_14ca964b0 = 0;
  DAT_14ca964b2 = 0;
  _DAT_14ca964b4 = 0;
  _DAT_14ca964c0 = 0;
  _DAT_14ca964c8 = 0x40000000;
  local_58 = (undefined8 *)((ulonglong)local_58 & 0xffffffff00000000);
  local_68._0_4_ = 4;
  FUN_14078dbce(&DAT_14ca95148,L"r.AllowHDR",&local_58,
                L"Creates an HDR compatible swap-chain and enables HDR display output.0: Disabled (default)\n1: Allow HDR, if supported by the platform and display \n"
               );
  atexit(FUN_1432041a5);
  local_58 = (undefined8 *)((ulonglong)local_58 & 0xffffffff00000000);
  local_68._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca95160,L"r.HDR.Display.ColorGamut",&local_58,
                L"Color gamut of the output display:\n0: Rec709 / sRGB, D65 (default)\n1: DCI-P3, D65\n2: Rec2020 / BT2020, D65\n3: ACES, D60\n4: ACEScg, D60\n"
               );
  atexit(FUN_1432041ea);
  local_58 = (undefined8 *)((ulonglong)local_58 & 0xffffffff00000000);
  local_68._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca95178,L"r.HDR.Display.OutputDevice",&local_58,
                L"Device format of the output display:\n0: sRGB (LDR)\n1: Rec709 (LDR)\n2: Explicit gamma mapping (LDR)\n3: ACES 1000 nit ST-2084 (Dolby PQ) (HDR)\n4: ACES 2000 nit ST-2084 (Dolby PQ) (HDR)\n5: ACES 1000 nit ScRGB (HDR)\n6: ACES 2000 nit ScRGB (HDR)\n7: Linear EXR (HDR)\n8: Linear final color, no tone curve (HDR)\n9: Linear final color with tone curve\n"
               );
  atexit(FUN_14320422f);
  local_58._0_4_ = 0xc0800000;
  local_68._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14ca95190,L"r.HDR.Display.MinLuminanceLog10",&local_58,
                L"The configured minimum display output nit level (log10 value)");
  atexit(FUN_143204274);
  local_58._0_4_ = 0x41700000;
  local_68._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14ca951a8,L"r.HDR.Display.MidLuminance",&local_58,
                L"The configured display output nit level for 18% gray");
  atexit(FUN_1432042b9);
  local_58._0_4_ = 0;
  local_68._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca951c0,L"r.HDR.Display.MaxLuminance",&local_58,
                L"The configured display output nit level, assuming HDR output is enabled.");
  atexit(FUN_1432042fe);
  local_58._0_4_ = 0x3fc00000;
  local_68._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14ca951d8,L"r.HDR.Aces.SceneColorMultiplier",&local_58,
                L"Multiplier applied to scene color. Helps to");
  atexit(FUN_143204343);
  local_58._0_4_ = 0;
  local_68._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14ca951f0,L"r.HDR.Aces.GamutCompression",&local_58,
                L"HDR equivalent of BlueCorrection: Bright blue desaturates instead of going to violet"
               );
  atexit(FUN_143204388);
  local_58._0_4_ = 0;
  local_68._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca95208,L"r.HDR.EnableHDROutput",&local_58,
                L"Creates an HDR compatible swap-chain and enables HDR display output.0: Disabled (default)\n1: Enable hardware-specific implementation\n"
               );
  atexit(FUN_1432043cd);
  DAT_14ca95258 = 0;
  _DAT_14ca95260 = 0;
  DAT_14ca95238 = 0;
  _DAT_14ca95240 = 0;
  _DAT_14ca95264 = 0xffffffff00000080;
  DAT_14ca9526c = 0;
  DAT_14ca95278 = 0;
  DAT_14ca95280 = 0;
  atexit(FUN_143204510);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14ca95288);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14ca95288,4000);
  atexit((_func_5014 *)&LAB_143204539);
  _DAT_14ca952b0 = 0x38d1b7173628600e;
  _DAT_14ca952b8 = 0x447a0000442d29ac;
  _DAT_14ca952c0 = 0x4099999a3da8600e;
  _DAT_14ca952c8 = 0x3f8000003fc66666;
  _DAT_14ca952d0 = 0xc0800000c0800000;
  _DAT_14ca952d8 = 0xbef872b0c04a1275;
  _DAT_14ca952e0 = 0x3fd90117beaa6d13;
  _DAT_14ca952e8 = 0x404000004030851b;
  DAT_14ca952f0 = 0x3fec827e;
  DAT_14ca952f4 = 0x40400000;
  DAT_14ca952f8 = 0x3fc00000;
  DAT_14ca952fc = 0;
  DAT_14ca954e4 = TlsAlloc();
  DAT_14ca95618 = 0;
  atexit((_func_5014 *)&LAB_143204779);
  DAT_14ca95620 = 0;
  atexit((_func_5014 *)&LAB_14320479a);
  _DAT_14ca95630 = 0xffffffff;
  _DAT_14ca95634 = 0x105;
  DAT_14ca95636 = 0;
  DAT_14ca95628 = &PTR_FUN_14a38bad0;
  _DAT_14ca956d8 = 0;
  _DAT_14ca956e0 = 0x1000000000;
  DAT_14ca95638 = 0;
  DAT_14ca95640 = 0;
  DAT_14ca95648 = 0;
  DAT_14ca95650 = 0;
  FUN_145c92d90(&DAT_14ca95658,DAT_14ca8b9f8);
  DAT_14ca956f8 = 0;
  _DAT_14ca95700 = 0x1000000000;
  FUN_145cb8022(&DAT_14ca956e8,DAT_14ca8b9f8,1);
  DAT_14ca95628 = &PTR_FUN_14a38baa0;
  FUN_14631f336();
  atexit(FUN_1432117dc);
  local_58 = (undefined8 *)CONCAT44(local_58._4_4_,1);
  local_68 = (undefined8 **)CONCAT44(local_68._4_4_,0x20);
  FUN_14078dbce(&DAT_14ca95720,L"r.RDG.AsyncCompute",&local_58,
                L"Controls the async compute policy.\n 0:disabled, no async compute is used;\n 1:enabled for passes tagged for async compute (default);\n 2:enabled for all compute passes implemented to use the compute command list;\n"
               );
  atexit(FUN_14321187d);
  local_58 = (undefined8 *)0x0;
  local_50 = (code *)((ulonglong)local_50 & 0xffffffff00000000);
  FUN_1446efa72(&local_58,0,2,0x10);
  local_50._0_4_ = 2;
  *local_58 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_58[2] = lVar4;
  *local_58 = &PTR_FUN_14a38bb00;
  FUN_141253d16(&DAT_14ca95738,&local_58);
  if ((int)local_50 == 0) {
LAB_14321ff8f:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50._0_4_ = 0;
    goto LAB_14321ff8f;
  }
  local_68._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca95750,L"r.RDG.CullPasses",&DAT_14c760df0,
                L"The graph will cull passes with unused outputs.\n 0:off;\n 1:on(default);\n");
  atexit(FUN_1432118c2);
  local_68._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca95760,L"r.RDG.MergeRenderPasses",&DAT_14c760dfc,
                L"The graph will merge identical, contiguous render passes into a single render pass.\n 0:off;\n 1:on(default);\n"
               );
  atexit(FUN_143211907);
  local_68._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca95770,L"r.RDG.TransientAllocator",&DAT_14c760de0,
                L"RDG will use the RHITransientResourceAllocator to allocate all transient resources. 0: disables the transient allocator; 1: enables the transient allocator (default); 2: enables the transient allocator for resources with FastVRAM flag only"
               );
  atexit(FUN_14321194c);
  local_68._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca95780,L"r.RDG.TransientExtractedResources",&DAT_14c760de4,
                L"RDG will allocate extracted resources as transient, unless explicitly marked non-transient by the user. 0: disables external transient resources; 1: enables external transient resources (default); 2: force enables all external transient resources (not recommended);"
               );
  atexit(FUN_143211991);
  local_68._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca95790,L"r.RDG.AsyncComputeTransientAliasing",&DAT_14c760e00,
                L"RDG will alias async compute resources on the same heap as graphics resources using fences. This must also be supported by the RHI. 0: disables transient async compute aliasing; 1: enables transient async compute aliasing (default);"
               );
  atexit(FUN_1432119d6);
  local_68._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca957a0,L"r.RDG.ParallelDestruction",&DAT_14c760dec,
                L"RDG will destruct the graph using an async task. 0: graph destruction is done synchronously; 1: graph destruction may be done asynchronously (default);"
               );
  atexit(FUN_143211a1b);
  local_68 = (undefined8 **)CONCAT44(local_68._4_4_,0x20);
  FUN_141471170(&DAT_14ca957b0,L"r.RDG.ParallelSetup",&DAT_14c760e04,
                L"RDG will setup passes in parallel when prompted by calls to FRDGBuilder::FlushSetupQueue. 0: pass setup is done synchronously in AddPass; 1: pass setup is done asynchronously (default);"
               );
  atexit(FUN_143211a60);
  local_58 = (undefined8 *)0x0;
  local_50._0_4_ = 0;
  FUN_1446efa72(&local_58,0,2,0x10);
  local_50._0_4_ = 2;
  *local_58 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_58[2] = lVar4;
  *local_58 = &PTR_FUN_14a38bb70;
  local_60 = 0x20;
  local_68 = &local_58;
  FUN_141703554(&DAT_14ca957c0,L"r.RDG.ParallelExecute",&DAT_14c760de8,
                L"Whether to enable parallel execution of passes when supported. 0: off 1: parallel with all tasks awaited 2: parallel with async tasks (default)"
               );
  if ((int)local_50 == 0) {
LAB_1432201c5:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50._0_4_ = 0;
    goto LAB_1432201c5;
  }
  atexit(FUN_143211aa5);
  local_68._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca957d0,L"r.RDG.ParallelExecute.PassMin",&DAT_14c760e08,
                L"The minimum span of contiguous passes eligible for parallel execution for the span to be offloaded to a task."
               );
  atexit(FUN_143211aea);
  local_68._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca957e0,L"r.RDG.ParallelExecute.PassMax",&DAT_14c760df8,
                L"The maximum span of contiguous passes eligible for parallel execution for the span to be offloaded to a task."
               );
  atexit(FUN_143211b2f);
  local_68 = (undefined8 **)CONCAT44(local_68._4_4_,0x20);
  FUN_141471170(&DAT_14ca957f0,L"r.RDG.ParallelExecute.PassTaskModeThreshold",&DAT_14c760df4,
                L" 0: A pass that is not marked async will mark the entire parallel pass set as awaited. 1: A pass that does not match the task mode of the current batch will always flush the current batch.>1: Same as the above, but only if the current batch is larger than the threshold."
               );
  atexit(FUN_143211b74);
  local_58 = (undefined8 *)0x0;
  local_50._0_4_ = 0;
  FUN_1446efa72(&local_58,0,2,0x10);
  local_50._0_4_ = 2;
  *local_58 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_58[2] = lVar4;
  *local_58 = &PTR_FUN_14a38bbe0;
  local_60 = 0x20;
  local_68 = &local_58;
  FUN_141703554(&DAT_14ca95808,L"r.RDG.ParallelExecuteStress",&DAT_14ca95800,
                L"Stress tests the parallel execution path by launching one task per pass. Render pass merging is also disabled."
               );
  if ((int)local_50 == 0) {
LAB_14322033c:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50._0_4_ = 0;
    goto LAB_14322033c;
  }
  atexit(FUN_143211bb9);
  local_68._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca95818,L"r.RDG.TransientAllocator.IndirectArgumentBuffers",&DAT_14ca955a0,
                L"Whether indirect argument buffers should use transient resource allocator. Default: 0"
               );
  atexit(FUN_143211bfe);
  local_58 = (undefined8 *)0x0;
  local_50._0_4_ = 0;
  FUN_1446efa72(&local_58,0,2,0x10);
  local_50._0_4_ = 2;
  *local_58 = &PTR_LAB_149e35db0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_58[2] = lVar4;
  *local_58 = &PTR_FUN_149e35d40;
  local_58[3] = &LAB_14742b31b;
  local_68 = (undefined8 **)((ulonglong)local_68._4_4_ << 0x20);
  FUN_14170bbaa(&DAT_14ca95828,L"r.DumpBufferPoolMemory",
                L"Dump allocation information for the buffer pool.",&local_58);
  if ((int)local_50 != 0) {
    if (local_58 == (undefined8 *)0x0) goto LAB_14322046b;
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50._0_4_ = 0;
  }
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_14322046b:
  atexit(FUN_143211c43);
  _DAT_14ca95568 = 0xffffffff;
  _DAT_14ca9556c = 0x105;
  DAT_14ca9556e = 0;
  _DAT_14ca95570 = 0;
  DAT_14ca95578 = 0;
  _DAT_14ca95580 = 0;
  DAT_14ca95588._0_4_ = 0;
  DAT_14ca95588._4_4_ = 0;
  DAT_14ca95590 = 0;
  uRam000000014ca95594 = 0;
  DAT_14ca95560 = &PTR_FUN_14a38bc50;
  FUN_14631f3e8();
  atexit(FUN_143211c88);
  FUN_14742f58a();
  DAT_14ca955a8 = &PTR_FUN_14a38bcb0;
  FUN_14631f47c();
  atexit(FUN_143211d37);
  local_50 = FUN_145e5fd22;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca95950,&local_58);
  local_50 = FUN_14155d12a;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca95a78,&local_58);
  local_50 = FUN_141599476;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca95ba0,&local_58);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432205f0 FUN_1432205f0 body=49 status=ok
// SIG undefined FUN_1432205f0(void)

void FUN_1432205f0(void)

{
  FUN_144760e21(DAT_14ca96508,DAT_14ca96510);
  if (DAT_14ca96508 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143220621 FUN_143220621 body=49 status=ok
// SIG undefined FUN_143220621(void)

void FUN_143220621(void)

{
  FUN_144760e21(DAT_14ca96520,DAT_14ca96528);
  if (DAT_14ca96520 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143220663 FUN_143220663 body=1196 status=ok
// SIG undefined FUN_143220663(void)

void FUN_143220663(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  int local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar6 = (**(code **)(*param_1 + 0xb0))();
  DAT_14c82b440 = -1 < iVar6;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 == 2) goto LAB_143220773;
    if (iVar7 != 1) goto LAB_1432206b2;
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    if (DVar8 == DVar9) goto LAB_143220773;
  }
  else {
LAB_1432206b2:
    if (iVar7 == 0x10) goto LAB_143220773;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar4 + 0xc60), iVar7 == 2))
    goto LAB_143220773;
    if (iVar7 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143220773;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar11 = (uint *)*puVar2;
    if (puVar11 != (uint *)0x0) goto LAB_143220835;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_14322aa43);
      }
      lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar10 = *(undefined4 **)(lVar4 + 0x310);
      *(undefined8 *)(lVar4 + 0x310) = 0;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar10 = 0xffffffff;
      *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar2 = puVar10;
      FUN_140217a48(puVar2);
      puVar11 = (uint *)*puVar2;
LAB_143220835:
      puVar16 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar15 = (uint *)(puVar16 + 0x16);
      uVar13 = puVar11[0x12];
      if (puVar15 <= puVar11 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
        LOCK();
        uVar3 = *puVar11;
        *puVar11 = *puVar11 + uVar13 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar13) != 0xffffffff) break;
        puVar11 = (uint *)*puVar2;
        *puVar11 = 0xffffffff;
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar2 = puVar11;
        puVar16 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar16 + 0x16);
        uVar13 = 0;
        if (puVar15 <= puVar11 + 0x4000) {
          uVar13 = 1;
          goto LAB_1432208b5;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_1432208b5:
    *(uint **)(puVar11 + 0x10) = puVar15;
    puVar11[0x12] = uVar13;
    iVar7 = 0;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14a3918e0;
    *(int *)(puVar16 + 0x15) = iVar6;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar13 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
        uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
        iVar7 = 0;
      }
      else {
        uVar17 = 2;
      }
    }
    else {
      iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
              *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
      uVar17 = 5;
    }
    if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
    }
    puVar16[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar16[9] = puVar16;
    puVar16[10] = puVar16;
    lVar4 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar4 == 0) {
      uVar5 = 1;
      if ((char)uVar17 != '\x06') {
        uVar5 = uVar17;
      }
      uVar17 = uVar5;
      uVar12 = 0;
    }
    else {
      if ((char)uVar17 == '\x06') {
        uVar17 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
      }
      uVar12 = *(undefined8 *)(lVar4 + 0x30);
    }
    puVar16[0xf] = uVar12;
    puVar16[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar16 + 0x1c) = iVar7;
    if (puVar16 == (undefined8 *)0x0) {
      local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(0);
      iVar6 = DAT_14c758598;
    }
    else {
      LOCK();
      *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
      UNLOCK();
      local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(puVar16);
      LOCK();
      piVar1 = (int *)(puVar16 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      iVar6 = DAT_14c758598;
      if (*piVar1 == 0) {
        (**(code **)*puVar16)(puVar16,1);
        iVar6 = DAT_14c758598;
      }
    }
  }
  else {
    local_78 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14a3918a0;
    local_68[0] = &LAB_14322aa06;
    local_40 = iVar6;
    FUN_14005a792(&DAT_14ca9a440,L"WakeupCommand",&DAT_14ca98a70);
    iVar6 = DAT_14c758598;
    if (local_68[0] != (undefined1 *)0x0) {
      pppuVar14 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar14 = &local_48;
      }
      (*(code *)(*pppuVar14)[2])();
      iVar6 = DAT_14c758598;
    }
  }
LAB_143220773:
  DAT_14c758598 = iVar6;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143220b10 FUN_143220b10 body=69 status=ok
// SIG undefined FUN_143220b10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143220b10(void)

{
  _DAT_14ca96548 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143220b52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca96550,1);
  return;
}



// FUNCTION 143220b55 FUN_143220b55 body=69 status=ok
// SIG undefined FUN_143220b55(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143220b55(void)

{
  _DAT_14ca96558 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143220b97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca96560,1);
  return;
}



// FUNCTION 143220b9a FUN_143220b9a body=69 status=ok
// SIG undefined FUN_143220b9a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143220b9a(void)

{
  _DAT_14ca96568 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143220bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca96570,1);
  return;
}



// FUNCTION 143220bf7 FUN_143220bf7 body=288 status=ok
// SIG undefined FUN_143220bf7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143220bf7(double param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  double dVar4;
  undefined1 auStack_68 [32];
  LARGE_INTEGER local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca96580) {
    FUN_144b3d300(&DAT_14ca96580);
    if (DAT_14ca96580 == -1) {
      QueryPerformanceCounter(&local_48);
      _DAT_14ca96578 = (double)local_48.QuadPart * DAT_14c83f420 + 16777216.0;
      _Init_thread_footer(&DAT_14ca96580);
    }
  }
  if (0 < DAT_14ca9a3d0) {
    dVar4 = param_1 - _DAT_14ca96578;
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(DAT_14ca9a3c8 + lVar3 * 8);
      cVar2 = (**(code **)(*plVar1 + 0x18))(plVar1);
      if (cVar2 != '\0') {
        (**(code **)(*plVar1 + 8))(plVar1,(float)dVar4);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < DAT_14ca9a3d0);
  }
  _DAT_14ca96578 = param_1;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143220d18 FUN_143220d18 body=301 status=ok
// SIG undefined FUN_143220d18(void)

void FUN_143220d18(longlong *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  uint uVar4;
  
  DAT_14c7585c8 = 2;
  DAT_14c7585d4 = 0x102;
  (**(code **)(*DAT_14c82b500 + 0x40))(DAT_14c82b500,2);
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  FUN_1447f69b6(&DAT_14c867ab8);
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar3 + 0xc60) == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  puVar1 = (undefined4 *)(lVar3 + 0xc60);
  LOCK();
  uVar4 = DAT_14c844204 >> 4;
  DAT_14c844204 = DAT_14c844204 | 0x10;
  UNLOCK();
  if ((uVar4 & 1) != 0) {
    LOCK();
    DAT_14c844204 = 0;
    UNLOCK();
  }
  uVar2 = *puVar1;
  *puVar1 = 0x10;
  if (DAT_14c842750 == '\0') {
    (**(code **)(*DAT_14ca83900 + 0x318))();
    (**(code **)(*DAT_14c82b500 + 0x50))(DAT_14c82b500,2);
    (**(code **)(*DAT_14ca83900 + 800))();
  }
  else {
    (**(code **)(*DAT_14c82b500 + 0x50))(DAT_14c82b500,2);
  }
  *puVar1 = uVar2;
  LOCK();
  DAT_14c844204 = DAT_14c844204 & 0xffffffef;
  UNLOCK();
  FUN_1447f69b6(&DAT_14c867ad0);
  DAT_14c7585c8 = 1;
  DAT_14c7585d4 = 0x101;
  return;
}



// FUNCTION 143220e45 FUN_143220e45 body=49 status=ok
// SIG undefined FUN_143220e45(void)

void FUN_143220e45(void)

{
  FUN_144760e21(DAT_14ca965b0,DAT_14ca965b8);
  if (DAT_14ca965b0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143220e76 FUN_143220e76 body=1276 status=ok
// SIG undefined FUN_143220e76(void)

void FUN_143220e76(void)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  code *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((DAT_14ca83c94 == '\x01') && (DAT_14ca83c90 != DAT_14c760e20)) {
    FUN_141686391();
    if (DAT_14ca83c94 == '\x01') {
      DAT_14c760e20 = DAT_14ca83c90;
      DAT_14ca83c94 = '\0';
    }
    FUN_143221373();
  }
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_143220eee;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_143220ef3;
      goto LAB_143220f45;
    }
  }
  else {
LAB_143220eee:
    if (iVar6 != 0x10) {
LAB_143220f45:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_143220ef3;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_143220ef3;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_1432210a5;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_14322aa43);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_1432210a5:
          puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar16 + 0x16);
          uVar12 = puVar10[0x12];
          if (puVar14 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar3 = *puVar10;
            *puVar10 = *puVar10 + uVar12 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar12) != 0xffffffff) break;
            puVar10 = (uint *)*puVar2;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            puVar16 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar16 + 0x16);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_143221125;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_143221125:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14a3928c8;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
            iVar6 = 0;
          }
          else {
            uVar15 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar15 = 5;
        }
        if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
        }
        puVar16[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar16[9] = puVar16;
        puVar16[10] = puVar16;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar15 != '\x06') {
            uVar5 = uVar15;
          }
          uVar15 = uVar5;
          uVar11 = 0;
        }
        else {
          if ((char)uVar15 == '\x06') {
            uVar15 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar16[0xf] = uVar11;
        puVar16[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar16 + 0x1c) = iVar6;
        if (puVar16 == (undefined8 *)0x0) {
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(puVar16);
          LOCK();
          piVar1 = (int *)(puVar16 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar16)(puVar16,1);
          }
        }
      }
      else {
        local_78 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14a2b3190;
        local_40 = FUN_14322dadc;
        local_68[0] = &LAB_142ea45a2;
        FUN_14005a792(&DAT_14ca9a440,L"LatchBypass",&DAT_14ca99fa8);
        if (local_68[0] != (undefined1 *)0x0) {
          pppuVar13 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar13 = &local_48;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_143220fe3;
    }
  }
LAB_143220ef3:
  if ((DAT_14ca850f8 == '\0') && ((DAT_14ca84e0d != '\0' || (DAT_14c842750 != '\x01')))) {
    DAT_14ca850f9 = FUN_1447e0190();
  }
  else {
    DAT_14ca850f9 = 0;
  }
LAB_143220fe3:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143221373 FUN_143221373 body=2079 status=ok
// SIG undefined FUN_143221373(void)

void FUN_143221373(void)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  undefined4 uVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  undefined2 *puVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  undefined1 auStack_b8 [32];
  undefined2 **local_98;
  undefined1 local_90;
  undefined8 *local_80;
  int local_78;
  ulonglong local_70;
  undefined2 *local_68;
  int local_60;
  undefined ***local_58;
  undefined **local_48;
  code *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((DAT_14ca9a438 != '\0') || (DAT_14ca9a35c != '\x01')) goto LAB_1432213a1;
  (*(code *)PTR_FUN_14c7590a0)();
  FUN_14080c2b4();
  (**(code **)(*DAT_14ca83900 + 800))();
  iVar5 = 0;
  if (DAT_14ca84f1d != '\0') {
    iVar5 = DAT_14c760e20;
  }
  if (iVar5 == 2) {
    DAT_14c842750 = '\x01';
    DAT_14c842751 = 0;
    DAT_14c842752 = 1;
  }
  else if (iVar5 == 1) {
    DAT_14c842750 = '\x01';
    DAT_14c842751 = 1;
    DAT_14c842752 = 0;
    puVar9 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar9 = &PTR_FUN_14a391910;
    puVar9[1] = 0;
    local_90 = 0;
    local_98 = (undefined2 **)0xffffffffffffffff;
    uVar10 = FUN_1411b1052(puVar9,L"RHIThread",0x80000,0);
    puVar9[1] = uVar10;
    DAT_14ca98a78 = puVar9;
  }
  else {
    DAT_14c842750 = '\0';
    DAT_14c842751 = 0;
    DAT_14c842752 = 0;
  }
  DAT_14ca9a438 = '\x01';
  puVar9 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar9 = &PTR_FUN_14a391960;
  uVar10 = FUN_1405d8a54(1);
  puVar9[1] = uVar10;
  local_68 = (undefined2 *)0x0;
  local_60 = 0;
  FUN_14007658c(&DAT_14ca850c8,&local_68,5);
  (**(code **)(*DAT_14ca83900 + 0x328))();
  iVar5 = DAT_14ca98a88;
  DAT_14ca98a80 = puVar9;
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  local_70 = (ulonglong)DAT_14c892f18;
  FUN_14029eeae(&local_70,&local_68);
  puVar16 = local_68;
  if (local_60 == 0) {
    puVar16 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_80,L"%s %u",puVar16,iVar5);
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  puVar9 = local_80;
  if (local_78 == 0) {
    puVar9 = (undefined8 *)&DAT_149dfb77a;
  }
  local_90 = 0;
  local_98 = (undefined2 **)0xffffffffffffffff;
  DAT_14c842748 = FUN_1411b1052(DAT_14ca98a80,puVar9,0,0);
  if (local_80 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(*(longlong *)DAT_14ca98a80[1] + 0x20))((longlong *)DAT_14ca98a80[1],0xffffffff,0);
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0x110))(DAT_14c8407a8,0,&PTR_PTR_14c760e50);
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar5 = *(int *)(lVar3 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar5 != 2) {
      if (iVar5 != 1) goto LAB_143221627;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_14322162c;
      goto LAB_14322167e;
    }
LAB_14322162c:
    if ((DAT_14ca850f8 == '\0') && ((DAT_14ca84e0d != '\0' || (DAT_14c842750 != '\x01')))) {
      DAT_14ca850f9 = FUN_1447e0190();
    }
    else {
      DAT_14ca850f9 = 0;
    }
  }
  else {
LAB_143221627:
    if (iVar5 == 0x10) goto LAB_14322162c;
LAB_14322167e:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar5 = *(int *)(lVar3 + 0xc60), iVar5 == 2))
      goto LAB_14322162c;
      if (iVar5 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        if (DVar7 == DVar8) goto LAB_14322162c;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar9 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar12 = (uint *)*puVar9;
      if (puVar12 != (uint *)0x0) goto LAB_143221754;
      while( true ) {
        uVar13 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar13 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar13 | 1;
          __tlregdtor(&LAB_14322aa43);
        }
        lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar11 = *(undefined4 **)(lVar3 + 0x310);
        *(undefined8 *)(lVar3 + 0x310) = 0;
        if (puVar11 == (undefined4 *)0x0) {
          puVar11 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar11 = 0xffffffff;
        *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar9 = puVar11;
        FUN_140217a48(puVar9);
        puVar12 = (uint *)*puVar9;
LAB_143221754:
        puVar18 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar18 + 0x16);
        uVar13 = puVar12[0x12];
        if (puVar15 <= puVar12 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
          LOCK();
          uVar2 = *puVar12;
          *puVar12 = *puVar12 + uVar13 + 1;
          UNLOCK();
          if ((uVar2 ^ uVar13) != 0xffffffff) break;
          puVar12 = (uint *)*puVar9;
          *puVar12 = 0xffffffff;
          *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar9 = puVar12;
          puVar18 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar18 + 0x16);
          uVar13 = 0;
          if (puVar15 <= puVar12 + 0x4000) {
            uVar13 = 1;
            goto LAB_1432217d4;
          }
        }
      }
      uVar13 = uVar13 + 1;
LAB_1432217d4:
      *(uint **)(puVar12 + 0x10) = puVar15;
      puVar12[0x12] = uVar13;
      iVar5 = 0;
      FUN_1447247dc(puVar18,0);
      *puVar18 = &PTR_FUN_14a391af8;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar13 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
          uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
          iVar5 = 0;
        }
        else {
          uVar17 = 2;
        }
      }
      else {
        iVar5 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar17 = 5;
      }
      if (*(code **)(puVar18[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar18[0xe] + 0x18))(puVar18 + 0xe,puVar18 + 9);
      }
      puVar18[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar18[9] = puVar18;
      puVar18[10] = puVar18;
      lVar3 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar3 == 0) {
        uVar4 = 1;
        if ((char)uVar17 != '\x06') {
          uVar4 = uVar17;
        }
        uVar17 = uVar4;
        uVar10 = 0;
      }
      else {
        if ((char)uVar17 == '\x06') {
          uVar17 = *(ulonglong *)(lVar3 + 0x38) >> 0x3b;
        }
        uVar10 = *(undefined8 *)(lVar3 + 0x30);
      }
      puVar18[0xf] = uVar10;
      puVar18[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar18 + 0x1c) = iVar5;
      if (puVar18 == (undefined8 *)0x0) {
        local_68 = (undefined2 *)CONCAT71(local_68._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
        UNLOCK();
        local_68 = (undefined2 *)CONCAT71(local_68._1_7_,1);
        FUN_1447439e4(puVar18);
        LOCK();
        piVar1 = (int *)(puVar18 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar18)(puVar18,1);
        }
      }
    }
    else {
      local_58 = (undefined ***)0x0;
      local_48 = &PTR_LAB_14a2b3190;
      local_40 = FUN_14322c6fe;
      local_68 = (undefined2 *)&LAB_142ea45a2;
      local_98 = &local_68;
      FUN_14005a792(&DAT_14ca9a440,L"LatchBypass",&DAT_14ca98a9c);
      if (local_68 != (undefined2 *)0x0) {
        pppuVar14 = local_58;
        if (local_58 == (undefined ***)0x0) {
          pppuVar14 = &local_48;
        }
        (*(code *)(*pppuVar14)[2])();
      }
    }
  }
  local_80 = (undefined8 *)0x0;
  FUN_1400fb146(&local_80,0);
  FUN_1408e177a(&local_80,0);
  uVar6 = (**(code **)(*DAT_14ca96570 + 0xb0))();
  DAT_14ca9a43c = FUN_14631ff8f(uVar6);
  LOCK();
  DAT_14ca96594 = 1;
  UNLOCK();
  DAT_14ca965a8 = (undefined8 *)FUN_14001cc68(8,0x10);
  *DAT_14ca965a8 = &PTR_LAB_14a391b10;
  FUN_140002266(&local_68,L"RTHeartBeat %d",DAT_14ca98a88);
  puVar16 = local_68;
  if (local_60 == 0) {
    puVar16 = &DAT_149dfb77a;
  }
  local_90 = 0;
  local_98 = (undefined2 **)0xffffffffffffffff;
  DAT_14ca965a0 = FUN_1411b1052(DAT_14ca965a8,puVar16,0x14000,1);
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  DAT_14ca98a88 = DAT_14ca98a88 + 1;
  (*(code *)PTR_FUN_14c7590a8)();
  if (local_80 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_80 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_80)(local_80,1);
    }
  }
LAB_1432213a1:
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143221b93 FUN_143221b93 body=65 status=ok
// SIG undefined FUN_143221b93(void)

void FUN_143221b93(void)

{
  int *piVar1;
  undefined8 *puVar2;
  
  FUN_14004710c(&DAT_14ca965f8);
  puVar2 = DAT_14ca965d0;
  if (DAT_14ca965d8 == '\x01') {
    if (DAT_14ca965d0 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(DAT_14ca965d0 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    DAT_14ca965d8 = '\0';
  }
  return;
}



// FUNCTION 143221bd4 FUN_143221bd4 body=302 status=ok
// SIG undefined FUN_143221bd4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143221bd4(void)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  int *piVar4;
  undefined1 auStack_68 [40];
  undefined4 local_40 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((DAT_14ca9a438 != '\x01') || (DAT_14c760e1d != '\x01')) ||
     (iVar1 = DAT_14ca96608 + 1, bVar2 = 0 < DAT_14ca96608, DAT_14ca96608 = iVar1, bVar2))
  goto LAB_143221cdb;
  FUN_143221d04(&DAT_14ca965d0,L"RenderCommandFenceBundlerEvent");
  FUN_1403abd4e(&DAT_14ca966d0,local_40);
  if (local_28 == 0 && &stack0x00000000 == &DAT_00000038) {
    _DAT_14ca965e0 = local_40[0];
LAB_143221c60:
    _DAT_14ca965e8 = local_38;
    uRam000000014ca965ec = uStack_34;
    uRam000000014ca965f0 = uStack_30;
    uRam000000014ca965f4 = uStack_2c;
  }
  else if (local_28 == 0) goto LAB_143221c60;
  if (DAT_14ca965f8 != 0) {
    piVar4 = (int *)((DAT_14ca965f8 + -8) - (ulonglong)*(uint *)(DAT_14ca965f8 + -8));
    LOCK();
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (*piVar4 == 0) {
      if (*(longlong *)(piVar4 + 0x10) - (longlong)piVar4 == 0x10000) {
        lVar3 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar3 = FUN_145bdc178();
        }
        FUN_140028df4(lVar3,piVar4);
      }
      else {
        FUN_144705e74(piVar4);
      }
    }
  }
  DAT_14ca965f8 = local_28;
  _DAT_14ca96600 = uStack_20;
  local_28 = 0;
  uStack_20 = 0;
  FUN_14004710c(&local_28);
  DAT_14ca96780 = 1;
LAB_143221cdb:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143221d04 FUN_143221d04 body=380 status=ok
// SIG undefined FUN_143221d04(void)

longlong * FUN_143221d04(longlong *param_1,ulonglong param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  bool bVar5;
  
  if (((char)param_1[1] == '\x01') && (puVar3 = (undefined8 *)*param_1, puVar3 != (undefined8 *)0x0)
     ) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  puVar3 = (undefined8 *)FUN_1448fe162();
  *puVar3 = UE::Tasks::Private::FTaskBase::vftable;
  puVar3[1] = &DAT_100000001;
  puVar3[2] = 0;
  *(undefined4 *)(puVar3 + 3) = 0;
  *(undefined4 *)(puVar3 + 4) = 0xffffffff;
  puVar3[6] = 0;
  puVar3[7] = 0x100000000;
  *(undefined1 *)(puVar3 + 8) = 1;
  puVar3[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                TTaskDelegateDummy::vftable;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0xe800000000000020;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0x100000000;
  *(undefined2 *)(puVar3 + 0x14) = 0;
  LOCK();
  bVar5 = *(char *)(puVar3 + 8) == '\x01';
  if (bVar5) {
    *(char *)(puVar3 + 8) = '\0';
  }
  UNLOCK();
  if (!bVar5) {
    FUN_14008cdb0(puVar3 + 8);
  }
  *puVar3 = &PTR_FUN_149e1e2e0;
  if (*(code **)(puVar3[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar3[0xe] + 0x18))(puVar3 + 0xe,puVar3 + 9);
  }
  puVar3[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                ::vftable;
  puVar3[9] = puVar3;
  puVar3[10] = puVar3;
  lVar2 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar2 + 0x30);
  }
  puVar3[0xf] = uVar4;
  puVar3[0x10] = (param_2 & 0x1ffffffffffffe) << 6 | 0xc800000000000000;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = 2;
  *param_1 = (longlong)puVar3;
  *(undefined1 *)(param_1 + 1) = 1;
  return param_1;
}



// FUNCTION 143221e80 FUN_143221e80 body=1298 status=ok
// SIG undefined FUN_143221e80(void)

void FUN_143221e80(void)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined8 *local_70;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14ca965d8 != '\x01') goto LAB_143221fee;
  FUN_14168c6f8(&DAT_14ca966f0);
  puVar2 = DAT_14ca965d0;
  DAT_14ca96780 = 0;
  local_70 = DAT_14ca965d0;
  DAT_14ca965d0 = (undefined8 *)0x0;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_143221ef2;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_143221ef7;
      goto LAB_143221f21;
    }
LAB_143221ef7:
    FUN_1400daade(&local_70);
  }
  else {
LAB_143221ef2:
    if (iVar6 == 0x10) goto LAB_143221ef7;
LAB_143221f21:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
      goto LAB_143221ef7;
      if (iVar6 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        if (DVar7 == DVar8) goto LAB_143221ef7;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar10 = (uint *)*puVar2;
      if (puVar10 != (uint *)0x0) goto LAB_1432220b0;
      while( true ) {
        uVar12 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar12 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar12 | 1;
          __tlregdtor(&LAB_14322aa43);
        }
        lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar9 = *(undefined4 **)(lVar4 + 0x310);
        *(undefined8 *)(lVar4 + 0x310) = 0;
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar9 = 0xffffffff;
        *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
        puVar9[0x12] = 0;
        *puVar2 = puVar9;
        FUN_140217a48(puVar2);
        puVar10 = (uint *)*puVar2;
LAB_1432220b0:
        puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar14 = (uint *)(puVar16 + 0x16);
        uVar12 = puVar10[0x12];
        if (puVar14 <= puVar10 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
          LOCK();
          uVar3 = *puVar10;
          *puVar10 = *puVar10 + uVar12 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar12) != 0xffffffff) break;
          puVar10 = (uint *)*puVar2;
          *puVar10 = 0xffffffff;
          *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar2 = puVar10;
          puVar16 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar16 + 0x16);
          uVar12 = 0;
          if (puVar14 <= puVar10 + 0x4000) {
            uVar12 = 1;
            goto LAB_143222130;
          }
        }
      }
      uVar12 = uVar12 + 1;
LAB_143222130:
      *(uint **)(puVar10 + 0x10) = puVar14;
      puVar10[0x12] = uVar12;
      iVar6 = 0;
      FUN_1447247dc(puVar16,0);
      *puVar16 = &PTR_FUN_14a392918;
      puVar16[0x15] = local_70;
      local_70 = (undefined8 *)0x0;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar12 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
          uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
          iVar6 = 0;
        }
        else {
          uVar15 = 2;
        }
      }
      else {
        iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar15 = 5;
      }
      if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
      }
      puVar16[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar16[9] = puVar16;
      puVar16[10] = puVar16;
      lVar4 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar4 == 0) {
        uVar5 = 1;
        if ((char)uVar15 != '\x06') {
          uVar5 = uVar15;
        }
        uVar15 = uVar5;
        uVar11 = 0;
      }
      else {
        if ((char)uVar15 == '\x06') {
          uVar15 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
        }
        uVar11 = *(undefined8 *)(lVar4 + 0x30);
      }
      puVar16[0xf] = uVar11;
      puVar16[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar16 + 0x1c) = iVar6;
      if (puVar16 == (undefined8 *)0x0) {
        local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
        UNLOCK();
        local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
        FUN_1447439e4(puVar16);
        LOCK();
        piVar1 = (int *)(puVar16 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar16)(puVar16,1);
        }
      }
    }
    else {
      local_78 = local_68;
      local_58 = (undefined ***)0x0;
      local_48 = &PTR_LAB_14a3928e0;
      local_40 = puVar2;
      local_70 = (undefined8 *)0x0;
      local_68[0] = &LAB_14322dcc2;
      FUN_14005a792(&DAT_14ca9a440,L"InsertFence",&DAT_14ca99fac);
      if (local_68[0] != (undefined1 *)0x0) {
        pppuVar13 = local_58;
        if (local_58 == (undefined ***)0x0) {
          pppuVar13 = &local_48;
        }
        (*(code *)(*pppuVar13)[2])();
      }
    }
  }
  if (local_70 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_70 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_70)(local_70,1);
    }
  }
  FUN_143221d04(&DAT_14ca965d0,L"RenderCommandFenceBundlerEvent");
  DAT_14ca96780 = 1;
LAB_143221fee:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143222393 FUN_143222393 body=1413 status=ok
// SIG undefined FUN_143222393(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143222393(void)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined8 *local_70;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((DAT_14ca9a438 != '\x01') || (DAT_14ca965d8 != '\x01')) ||
     (iVar7 = DAT_14ca96608 + -1, bVar5 = 1 < DAT_14ca96608, DAT_14ca96608 = iVar7, bVar5))
  goto LAB_143222574;
  FUN_14168c6f8(&DAT_14ca966f0);
  puVar2 = DAT_14ca965d0;
  DAT_14ca96780 = 0;
  local_70 = DAT_14ca965d0;
  DAT_14ca965d0 = (undefined8 *)0x0;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_14322242a;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_14322242f;
      goto LAB_143222459;
    }
LAB_14322242f:
    FUN_1400daade(&local_70);
  }
  else {
LAB_14322242a:
    if (iVar7 == 0x10) goto LAB_14322242f;
LAB_143222459:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar4 + 0xc60), iVar7 == 2))
      goto LAB_14322242f;
      if (iVar7 == 1) {
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        if (DVar8 == DVar9) goto LAB_14322242f;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar11 = (uint *)*puVar2;
      if (puVar11 != (uint *)0x0) goto LAB_143222636;
      while( true ) {
        uVar13 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar13 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar13 | 1;
          __tlregdtor(&LAB_14322aa43);
        }
        lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar10 = *(undefined4 **)(lVar4 + 0x310);
        *(undefined8 *)(lVar4 + 0x310) = 0;
        if (puVar10 == (undefined4 *)0x0) {
          puVar10 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar10 = 0xffffffff;
        *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
        puVar10[0x12] = 0;
        *puVar2 = puVar10;
        FUN_140217a48(puVar2);
        puVar11 = (uint *)*puVar2;
LAB_143222636:
        puVar17 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar17 + 0x16);
        uVar13 = puVar11[0x12];
        if (puVar15 <= puVar11 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
          LOCK();
          uVar3 = *puVar11;
          *puVar11 = *puVar11 + uVar13 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar13) != 0xffffffff) break;
          puVar11 = (uint *)*puVar2;
          *puVar11 = 0xffffffff;
          *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar2 = puVar11;
          puVar17 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar17 + 0x16);
          uVar13 = 0;
          if (puVar15 <= puVar11 + 0x4000) {
            uVar13 = 1;
            goto LAB_1432226b6;
          }
        }
      }
      uVar13 = uVar13 + 1;
LAB_1432226b6:
      *(uint **)(puVar11 + 0x10) = puVar15;
      puVar11[0x12] = uVar13;
      iVar7 = 0;
      FUN_1447247dc(puVar17,0);
      *puVar17 = &PTR_FUN_14a392950;
      puVar17[0x15] = local_70;
      local_70 = (undefined8 *)0x0;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar13 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
          uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
          iVar7 = 0;
        }
        else {
          uVar16 = 2;
        }
      }
      else {
        iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar16 = 5;
      }
      if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
      }
      puVar17[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar17[9] = puVar17;
      puVar17[10] = puVar17;
      lVar4 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar4 == 0) {
        uVar6 = 1;
        if ((char)uVar16 != '\x06') {
          uVar6 = uVar16;
        }
        uVar16 = uVar6;
        uVar12 = 0;
      }
      else {
        if ((char)uVar16 == '\x06') {
          uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
        }
        uVar12 = *(undefined8 *)(lVar4 + 0x30);
      }
      puVar17[0xf] = uVar12;
      puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar17 + 0x1c) = iVar7;
      if (puVar17 == (undefined8 *)0x0) {
        local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
        UNLOCK();
        local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
        FUN_1447439e4(puVar17);
        LOCK();
        piVar1 = (int *)(puVar17 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar17)(puVar17,1);
        }
      }
    }
    else {
      local_78 = local_68;
      local_58 = (undefined ***)0x0;
      local_48 = &PTR_LAB_14a392930;
      local_40 = puVar2;
      local_70 = (undefined8 *)0x0;
      local_68[0] = &LAB_14322dea4;
      FUN_14005a792(&DAT_14ca9a440,L"InsertFence",&DAT_14ca99fb0);
      if (local_68[0] != (undefined1 *)0x0) {
        pppuVar14 = local_58;
        if (local_58 == (undefined ***)0x0) {
          pppuVar14 = &local_48;
        }
        (*(code *)(*pppuVar14)[2])();
      }
    }
  }
  if (local_70 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_70 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_70)(local_70,1);
    }
  }
  puVar2 = DAT_14ca965d0;
  if (DAT_14ca965d8 == '\x01') {
    if (DAT_14ca965d0 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(DAT_14ca965d0 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    DAT_14ca965d8 = '\0';
  }
  FUN_1405ee12c(&DAT_14ca966d0,&DAT_14ca965e0);
  _DAT_14ca96600 = 0;
  if (0x20 < DAT_14ca96604) {
    DAT_14ca96604 = 0x20;
    FUN_140074494(&DAT_14ca965e0);
  }
LAB_143222574:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143222919 FUN_143222919 body=69 status=ok
// SIG undefined FUN_143222919(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143222919(void)

{
  _DAT_14ca96618 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014322295b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca96620,1);
  return;
}



// FUNCTION 14322295e FUN_14322295e body=69 status=ok
// SIG undefined FUN_14322295e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14322295e(void)

{
  _DAT_14ca96628 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432229a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca96630,1);
  return;
}



// FUNCTION 1432229a3 FUN_1432229a3 body=1253 status=ok
// SIG undefined FUN_1432229a3(void)

void FUN_1432229a3(void)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68;
  undefined4 local_60;
  undefined ***local_58;
  undefined **local_48;
  code *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14c842750 != 0) goto LAB_143222aec;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 == 2) goto LAB_1432229f1;
    if (iVar7 != 1) goto LAB_1432229ec;
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    if (DVar8 == DVar9) goto LAB_1432229f1;
LAB_143222a46:
    if (DAT_14ca9a438 == '\0') {
      bVar5 = DAT_14c842750;
      if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar4 + 0xc60), iVar7 == 2))
      goto joined_r0x0001432229f3;
      if (iVar7 == 1) {
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        bVar5 = DAT_14c842750;
        if (DVar8 == DVar9) goto joined_r0x0001432229f3;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar11 = (uint *)*puVar2;
      if (puVar11 != (uint *)0x0) goto LAB_143222bae;
      while( true ) {
        uVar13 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar13 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar13 | 1;
          __tlregdtor(&LAB_14322aa43);
        }
        lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar10 = *(undefined4 **)(lVar4 + 0x310);
        *(undefined8 *)(lVar4 + 0x310) = 0;
        if (puVar10 == (undefined4 *)0x0) {
          puVar10 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar10 = 0xffffffff;
        *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
        puVar10[0x12] = 0;
        *puVar2 = puVar10;
        FUN_140217a48(puVar2);
        puVar11 = (uint *)*puVar2;
LAB_143222bae:
        puVar17 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar17 + 0x16);
        uVar13 = puVar11[0x12];
        if (puVar15 <= puVar11 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
          LOCK();
          uVar3 = *puVar11;
          *puVar11 = *puVar11 + uVar13 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar13) != 0xffffffff) break;
          puVar11 = (uint *)*puVar2;
          *puVar11 = 0xffffffff;
          *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar2 = puVar11;
          puVar17 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar17 + 0x16);
          uVar13 = 0;
          if (puVar15 <= puVar11 + 0x4000) {
            uVar13 = 1;
            goto LAB_143222c2e;
          }
        }
      }
      uVar13 = uVar13 + 1;
LAB_143222c2e:
      *(uint **)(puVar11 + 0x10) = puVar15;
      puVar11[0x12] = uVar13;
      iVar7 = 0;
      FUN_1447247dc(puVar17,0);
      *puVar17 = &PTR_FUN_14a392a78;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar13 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
          uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
          iVar7 = 0;
        }
        else {
          uVar16 = 2;
        }
      }
      else {
        iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar16 = 5;
      }
      if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
      }
      puVar17[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar17[9] = puVar17;
      puVar17[10] = puVar17;
      lVar4 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar4 == 0) {
        uVar6 = 1;
        if ((char)uVar16 != '\x06') {
          uVar6 = uVar16;
        }
        uVar16 = uVar6;
        uVar12 = 0;
      }
      else {
        if ((char)uVar16 == '\x06') {
          uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
        }
        uVar12 = *(undefined8 *)(lVar4 + 0x30);
      }
      puVar17[0xf] = uVar12;
      puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar17 + 0x1c) = iVar7;
      if (puVar17 == (undefined8 *)0x0) {
        local_68 = (undefined1 *)CONCAT71(local_68._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
        UNLOCK();
        local_68 = (undefined1 *)CONCAT71(local_68._1_7_,1);
        FUN_1447439e4(puVar17);
        LOCK();
        piVar1 = (int *)(puVar17 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar17)(puVar17,1);
        }
      }
    }
    else {
      local_78 = &local_68;
      local_58 = (undefined ***)0x0;
      local_48 = &PTR_LAB_14a2f19c0;
      local_40 = FUN_14322e8e0;
      local_68 = &LAB_1448467b2;
      FUN_14005a792(&DAT_14ca9a440,L"FlushPendingDeleteRHIResources",&DAT_14ca99fc0);
      if (local_68 != (undefined1 *)0x0) {
        pppuVar14 = local_58;
        if (local_58 == (undefined ***)0x0) {
          pppuVar14 = &local_48;
        }
        (*(code *)(*pppuVar14)[2])();
      }
    }
  }
  else {
LAB_1432229ec:
    if (iVar7 != 0x10) goto LAB_143222a46;
LAB_1432229f1:
    bVar5 = DAT_14c842750 & 1;
joined_r0x0001432229f3:
    if (bVar5 == 0) {
      local_68 = (undefined1 *)0x0;
      local_60 = 0;
      FUN_14007658c(&DAT_14ca850c8,&local_68,7);
    }
  }
LAB_143222aec:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143222e89 FUN_143222e89 body=69 status=ok
// SIG undefined FUN_143222e89(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143222e89(void)

{
  _DAT_14ca96638 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143222ecb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca96640,1);
  return;
}



// FUNCTION 143222ed3 FUN_143222ed3 body=60 status=ok
// SIG undefined FUN_143222ed3(void)

void FUN_143222ed3(longlong *param_1)

{
  uint uVar1;
  wchar_t *_Str;
  
  if ((int)param_1[1] == 1) {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)*param_1;
    }
    uVar1 = _wtoi(_Str);
    if (uVar1 < 3) {
      DAT_14ca83c94 = 1;
      DAT_14ca83c90 = uVar1;
    }
  }
  return;
}



// FUNCTION 143222f0f FUN_143222f0f body=69 status=ok
// SIG undefined FUN_143222f0f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143222f0f(void)

{
  _DAT_14ca966c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143222f51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca966c8,1);
  return;
}



// FUNCTION 143222f6a FUN_143222f6a body=269 status=ok
// SIG undefined FUN_143222f6a(void)

undefined4 * FUN_143222f6a(undefined4 *param_1)

{
  longlong lVar1;
  int *piVar2;
  undefined1 auStack_68 [40];
  undefined4 local_40 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0x2000000000;
  FUN_1403abd4e(&DAT_14ca966d0,local_40);
  if (local_40 == param_1) goto LAB_143223043;
  if (local_28 == 0 && &stack0x00000000 == &DAT_00000038) {
    *param_1 = local_40[0];
LAB_143222fd3:
    param_1[2] = local_38;
    param_1[3] = uStack_34;
    param_1[4] = uStack_30;
    param_1[5] = uStack_2c;
  }
  else if (local_28 == 0) goto LAB_143222fd3;
  lVar1 = *(longlong *)(param_1 + 6);
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
      }
      else {
        FUN_144705e74(piVar2);
      }
    }
  }
  *(longlong *)(param_1 + 6) = local_28;
  local_28 = 0;
  param_1[8] = (undefined4)local_20;
  param_1[9] = local_20._4_4_;
  local_20 = 0;
LAB_143223043:
  FUN_14004710c(&local_28);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143223078 FUN_143223078 body=281 status=ok
// SIG undefined FUN_143223078(void)

undefined4 * FUN_143223078(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  int *piVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_40 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0x2000000000;
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  FUN_14178f798(&DAT_14ca966d0,local_40);
  if (local_40 == param_1) goto LAB_14322315d;
  if (local_28 == 0 && &stack0x00000000 == &DAT_00000038) {
    *param_1 = local_40[0];
LAB_1432230ed:
    param_1[2] = local_38;
    param_1[3] = uStack_34;
    param_1[4] = uStack_30;
    param_1[5] = uStack_2c;
  }
  else if (local_28 == 0) goto LAB_1432230ed;
  lVar1 = *(longlong *)(param_1 + 6);
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
      }
      else {
        FUN_144705e74(piVar2);
      }
    }
  }
  *(longlong *)(param_1 + 6) = local_28;
  local_28 = 0;
  param_1[8] = (undefined4)local_20;
  param_1[9] = local_20._4_4_;
  local_20 = 0;
LAB_14322315d:
  FUN_14004710c(&local_28);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143223192 FUN_143223192 body=353 status=ok
// SIG undefined FUN_143223192(void)

void FUN_143223192(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int *piVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    FUN_144b1cf5b(plVar1[1],(int)plVar1[2]);
    if (plVar1[1] != 0) {
      FUN_1400020a8();
    }
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar4 = (int *)(puVar2 + 1);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    piVar4 = (int *)((longlong)plVar1 + (-8 - (ulonglong)*(uint *)(plVar1 + -1)));
    LOCK();
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (*piVar4 == 0) {
      if (*(longlong *)(piVar4 + 0x10) - (longlong)piVar4 == 0x10000) {
        lVar3 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar3 = FUN_145bdc178();
        }
        FUN_140028df4(lVar3,piVar4);
      }
      else {
        FUN_144705e74(piVar4);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    FUN_144b1cf5b(plVar1[1],(int)plVar1[2]);
    if (plVar1[1] != 0) {
      FUN_1400020a8();
    }
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar4 = (int *)(puVar2 + 1);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    piVar4 = (int *)((longlong)plVar1 + (-8 - (ulonglong)*(uint *)(plVar1 + -1)));
    LOCK();
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (*piVar4 == 0) {
      if (*(longlong *)(piVar4 + 0x10) - (longlong)piVar4 == 0x10000) {
        lVar3 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar3 = FUN_145bdc178();
        }
        FUN_140028df4(lVar3,piVar4);
      }
      else {
        FUN_144705e74(piVar4);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined ***)(param_1 + 0x38) = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432232d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,*(undefined8 *)(param_1 + 0x40),1);
  return;
}



// FUNCTION 1432232f4 FUN_1432232f4 body=11 status=ok
// SIG undefined FUN_1432232f4(void)

undefined8 * FUN_1432232f4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1432232ff FUN_1432232ff body=2024 status=ok
// SIG undefined FUN_1432232ff(void)

void FUN_1432232ff(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  uint *puVar13;
  longlong *plVar14;
  uint *puVar15;
  undefined8 *puVar16;
  int iVar17;
  code *pcVar18;
  ulonglong uVar19;
  bool bVar20;
  undefined1 auStack_138 [32];
  code **local_118;
  code *local_108;
  longlong *local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  code *local_c8;
  longlong *local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  code *local_88 [2];
  longlong *local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  byte local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_f8 = (longlong *)0x0;
  local_e8 = &PTR_LAB_14a392c00;
  uStack_e0 = param_1;
  local_108 = FUN_14322f96e;
  if ((param_2 == 0) || (DAT_14ca9a43c != 2)) {
    local_c8 = FUN_14322f96e;
    local_b8 = (longlong *)0x0;
    local_a8 = &PTR_LAB_14a392c00;
    uStack_a0 = param_1;
    local_98 = local_d8;
    uStack_94 = uStack_d4;
    uStack_90 = uStack_d0;
    uStack_8c = uStack_cc;
LAB_14322350d:
    local_108 = (code *)0x0;
    pcVar18 = local_c8;
  }
  else {
    pcVar1 = (char *)(param_2 + 8);
    LOCK();
    bVar20 = *(char *)(param_2 + 8) == '\0';
    if (bVar20) {
      *(char *)(param_2 + 8) = '\x01';
    }
    UNLOCK();
    if (!bVar20) {
      FUN_1447d2058(pcVar1);
    }
    if (*(longlong *)
         (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xec0) ==
        param_2) {
      local_88[0] = local_108;
      local_78 = local_f8;
      local_f8 = (longlong *)0x0;
      local_68 = (undefined4)local_e8;
      uStack_64 = local_e8._4_4_;
      uStack_60 = (undefined4)uStack_e0;
      uStack_5c = uStack_e0._4_4_;
      local_58 = local_d8;
      uStack_54 = uStack_d4;
      uStack_50 = uStack_d0;
      uStack_4c = uStack_cc;
      if (local_108 != (code *)0x0) {
        local_108 = (code *)0x0;
      }
      local_48 = 1;
      FUN_1401a96bc(param_2,local_88);
LAB_1432234a5:
      (*(code *)(&PTR_LAB_14a3931f0)[local_48])();
      bVar20 = false;
    }
    else {
      if (*(longlong *)(param_2 + 0x10) != 0) {
        local_88[0] = local_108;
        local_78 = local_f8;
        local_f8 = (longlong *)0x0;
        local_68 = (undefined4)local_e8;
        uStack_64 = local_e8._4_4_;
        uStack_60 = (undefined4)uStack_e0;
        uStack_5c = uStack_e0._4_4_;
        local_58 = local_d8;
        uStack_54 = uStack_d4;
        uStack_50 = uStack_d0;
        uStack_4c = uStack_cc;
        if (local_108 != (code *)0x0) {
          local_108 = (code *)0x0;
        }
        local_48 = 1;
        FUN_1401a98c8(param_2,local_88,L"UpdateCommand",&DAT_14ca9a028);
        goto LAB_1432234a5;
      }
      bVar20 = true;
    }
    LOCK();
    cVar4 = *pcVar1;
    if (cVar4 == '\x01') {
      *pcVar1 = '\0';
    }
    UNLOCK();
    if (cVar4 != '\x01') {
      FUN_14008cdb0(pcVar1);
    }
    if (!bVar20) goto LAB_1432236b2;
    local_c8 = local_108;
    local_b8 = local_f8;
    local_a8 = local_e8;
    uStack_a0 = uStack_e0;
    local_98 = local_d8;
    uStack_94 = uStack_d4;
    uStack_90 = uStack_d0;
    uStack_8c = uStack_cc;
    if (local_108 != (code *)0x0) goto LAB_14322350d;
    pcVar18 = (code *)0x0;
  }
  local_f8 = (longlong *)0x0;
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar17 = *(int *)(lVar6 + 0xc60);
  local_e8 = local_a8;
  uStack_e0 = uStack_a0;
  if (DAT_14c86a9fc == 0) {
    if (iVar17 != 2) {
      if (iVar17 != 1) goto LAB_143223539;
      DVar9 = FUN_140ad26c0();
      DVar10 = GetCurrentThreadId();
      pcVar18 = local_c8;
      if (DVar9 == DVar10) goto LAB_14322353e;
      goto LAB_14322358c;
    }
LAB_14322353e:
    plVar14 = local_b8;
    if (local_b8 == (longlong *)0x0) {
      plVar14 = &local_a8;
    }
    uVar11 = (**(code **)(*plVar14 + 8))();
    (*pcVar18)(uVar11,&DAT_14ca85100);
  }
  else {
LAB_143223539:
    if (iVar17 == 0x10) goto LAB_14322353e;
LAB_14322358c:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 == '\x01') && (iVar17 = *(int *)(lVar6 + 0xc60), iVar17 != 2)) {
        if (iVar17 == 1) {
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_143223aa1;
        }
        goto LAB_1432235bd;
      }
LAB_143223aa1:
      pcVar18 = local_c8;
      plVar14 = local_b8;
      if (local_b8 == (longlong *)0x0) {
        plVar14 = &local_a8;
      }
      uVar11 = (**(code **)(*plVar14 + 8))();
      (*pcVar18)(uVar11,&DAT_14ca85100);
    }
    else {
LAB_1432235bd:
      if (DAT_14ca9a43c == 0) {
        puVar3 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar13 = (uint *)*puVar3;
        if (puVar13 != (uint *)0x0) goto LAB_143223795;
        while( true ) {
          uVar8 = *(uint *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x318);
          if ((uVar8 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar8 | 1;
            __tlregdtor(&LAB_14322aa43);
          }
          lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar12 = *(undefined4 **)(lVar6 + 0x310);
          *(undefined8 *)(lVar6 + 0x310) = 0;
          if (puVar12 == (undefined4 *)0x0) {
            puVar12 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar12 = 0xffffffff;
          *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar3 = puVar12;
          FUN_140217a48(puVar3);
          puVar13 = (uint *)*puVar3;
LAB_143223795:
          puVar16 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 0xfU & 0xfffffffffffffff0);
          puVar15 = (uint *)(puVar16 + 0x1e);
          uVar8 = puVar13[0x12];
          if (puVar15 <= puVar13 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
            LOCK();
            uVar5 = *puVar13;
            *puVar13 = *puVar13 + uVar8 + 1;
            UNLOCK();
            if ((uVar5 ^ uVar8) != 0xffffffff) break;
            puVar13 = (uint *)*puVar3;
            *puVar13 = 0xffffffff;
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
            puVar13[0x12] = 0;
            *puVar3 = puVar13;
            puVar16 = (undefined8 *)((longlong)puVar13 + 0x67U & 0xfffffffffffffff0);
            puVar15 = (uint *)(puVar16 + 0x1e);
            uVar8 = 0;
            if (puVar15 <= puVar13 + 0x4000) {
              uVar8 = 1;
              goto LAB_143223815;
            }
          }
        }
        uVar8 = uVar8 + 1;
LAB_143223815:
        *(uint **)(puVar13 + 0x10) = puVar15;
        puVar13[0x12] = uVar8;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14a392bf0;
        puVar16[0x16] = local_c8;
        puVar16[0x18] = local_b8;
        local_b8 = (longlong *)0x0;
        *(undefined4 *)(puVar16 + 0x1c) = local_98;
        *(undefined4 *)((longlong)puVar16 + 0xe4) = uStack_94;
        *(undefined4 *)(puVar16 + 0x1d) = uStack_90;
        *(undefined4 *)((longlong)puVar16 + 0xec) = uStack_8c;
        *(undefined4 *)(puVar16 + 0x1a) = (undefined4)local_a8;
        *(undefined4 *)((longlong)puVar16 + 0xd4) = local_a8._4_4_;
        *(undefined4 *)(puVar16 + 0x1b) = (undefined4)uStack_a0;
        *(undefined4 *)((longlong)puVar16 + 0xdc) = uStack_a0._4_4_;
        if (local_c8 != (code *)0x0) {
          local_c8 = (code *)0x0;
        }
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar8 = DAT_14c7585c8 >> 10 & 3;
          iVar17 = 0;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar8 < 2) {
            uVar19 = (ulonglong)(byte)(&DAT_149e38edc)[uVar8];
            iVar17 = 0;
          }
          else {
            uVar19 = 2;
          }
        }
        else {
          iVar17 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar19 = 5;
        }
        if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
        }
        puVar16[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar16[9] = puVar16;
        puVar16[10] = puVar16;
        lVar6 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar6 == 0) {
          uVar7 = 1;
          if ((char)uVar19 != '\x06') {
            uVar7 = uVar19;
          }
          uVar19 = uVar7;
          uVar11 = 0;
        }
        else {
          if ((char)uVar19 == '\x06') {
            uVar19 = *(ulonglong *)(lVar6 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar6 + 0x30);
        }
        puVar16[0xf] = uVar11;
        puVar16[0x10] = uVar19 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar16 + 0x1c) = iVar17;
        if (puVar16 == (undefined8 *)0x0) {
          local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(puVar16);
          LOCK();
          piVar2 = (int *)(puVar16 + 1);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)*puVar16)(puVar16,1);
          }
        }
      }
      else {
        local_88[0] = (code *)0x0;
        local_78 = (longlong *)FUN_14001cc68(0x50,0x10);
        *local_78 = (longlong)&PTR_LAB_14a392bd0;
        local_78[2] = (longlong)local_c8;
        local_78[4] = (longlong)local_b8;
        local_b8 = (longlong *)0x0;
        *(undefined4 *)(local_78 + 8) = local_98;
        *(undefined4 *)((longlong)local_78 + 0x44) = uStack_94;
        *(undefined4 *)(local_78 + 9) = uStack_90;
        *(undefined4 *)((longlong)local_78 + 0x4c) = uStack_8c;
        *(undefined4 *)(local_78 + 6) = (undefined4)local_a8;
        *(undefined4 *)((longlong)local_78 + 0x34) = local_a8._4_4_;
        *(undefined4 *)(local_78 + 7) = (undefined4)uStack_a0;
        *(undefined4 *)((longlong)local_78 + 0x3c) = uStack_a0._4_4_;
        if (local_c8 != (code *)0x0) {
          local_c8 = (code *)0x0;
        }
        if (local_78 != (longlong *)&DAT_fffffffffffffff0) {
          local_88[0] = FUN_14322f71c;
        }
        local_118 = local_88;
        FUN_14005a792(&DAT_14ca9a440,L"UpdateCommand",&DAT_14ca9a028);
        if (local_88[0] != (code *)0x0) {
          plVar14 = local_78;
          if (local_78 == (longlong *)0x0) {
            plVar14 = (longlong *)&local_68;
          }
          (**(code **)(*plVar14 + 0x10))();
        }
      }
    }
  }
  if (local_c8 != (code *)0x0) {
    plVar14 = &local_a8;
    if (local_b8 != (longlong *)0x0) {
      plVar14 = local_b8;
    }
    (**(code **)(*plVar14 + 0x10))(plVar14);
  }
LAB_1432236b2:
  if (local_108 != (code *)0x0) {
    plVar14 = &local_e8;
    if (local_f8 != (longlong *)0x0) {
      plVar14 = local_f8;
    }
    (**(code **)(*plVar14 + 0x10))(plVar14);
  }
  if ((local_30 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143223af9 FUN_143223af9 body=1189 status=ok
// SIG undefined FUN_143223af9(void)

void FUN_143223af9(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_143223b37;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_143223b3c;
      goto LAB_143223b65;
    }
  }
  else {
LAB_143223b37:
    if (iVar6 != 0x10) {
LAB_143223b65:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_143223b3c;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_143223b3c;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_143223cc3;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_14322aa43);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_143223cc3:
          puVar15 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar15 + 0x16);
          uVar12 = puVar10[0x12];
          if (puVar14 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar3 = *puVar10;
            *puVar10 = *puVar10 + uVar12 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar12) != 0xffffffff) break;
            puVar10 = (uint *)*puVar2;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            puVar15 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar15 + 0x16);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_143223d43;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_143223d43:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar15,0);
        *puVar15 = &PTR_FUN_14a392cb0;
        puVar15[0x15] = param_1;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
            iVar6 = 0;
          }
          else {
            uVar16 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar16 = 5;
        }
        if (*(code **)(puVar15[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar15[0xe] + 0x18))(puVar15 + 0xe,puVar15 + 9);
        }
        puVar15[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar15[9] = puVar15;
        puVar15[10] = puVar15;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar16 != '\x06') {
            uVar5 = uVar16;
          }
          uVar16 = uVar5;
          uVar11 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar15[0xf] = uVar11;
        puVar15[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar15 + 0x1c) = iVar6;
        if (puVar15 == (undefined8 *)0x0) {
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
          UNLOCK();
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(puVar15);
          LOCK();
          piVar1 = (int *)(puVar15 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar15)(puVar15,1);
          }
        }
      }
      else {
        local_78 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14a392c90;
        local_68[0] = &LAB_14322fc66;
        local_40 = param_1;
        FUN_14005a792(&DAT_14ca9a440,L"ReleaseCommand",&DAT_14ca9a030);
        if (local_68[0] != (undefined1 *)0x0) {
          pppuVar13 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar13 = &local_48;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_143223bfc;
    }
  }
LAB_143223b3c:
  (**(code **)(*param_1 + 0x20))(param_1);
LAB_143223bfc:
  FUN_14080c2b4();
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143223f9f FUN_143223f9f body=47 status=ok
// SIG undefined FUN_143223f9f(void)

void FUN_143223f9f(void)

{
  DAT_14ca96788 = &PTR_FUN_14a392cc0;
  FUN_144725486(&DAT_14ca96788);
  FUN_145bfd1ea(&DAT_14ca96788);
  return;
}



// FUNCTION 143223fd2 FUN_143223fd2 body=354 status=ok
// SIG undefined FUN_143223fd2(void)

void FUN_143223fd2(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*DAT_14ca83900 + 0x1b0))(DAT_14ca83900,&local_28,&DAT_14ca85100,0);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_28) {
    lVar4 = *plVar7;
    *plVar7 = local_28;
    local_28 = 0;
    if (lVar4 == 0) goto LAB_1432240e5;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  lVar4 = local_28;
  if (local_28 != 0) {
    LOCK();
    puVar1 = (uint *)(local_28 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_28 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_28 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
LAB_1432240e5:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143224135 FUN_143224135 body=69 status=ok
// SIG undefined FUN_143224135(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143224135(void)

{
  _DAT_14ca967e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143224177. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca967f0,1);
  return;
}



// FUNCTION 14322417a FUN_14322417a body=39 status=ok
// SIG undefined FUN_14322417a(void)

void FUN_14322417a(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14a38d070;
  param_1[2] = 0;
  return;
}



// FUNCTION 1432241a2 FUN_1432241a2 body=391 status=ok
// SIG undefined FUN_1432241a2(void)

void FUN_1432241a2(float *param_1,float param_2,float param_3,double param_4,int param_5)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *param_1;
  if ((((fVar1 == 0.0) && (!NAN(fVar1))) || (0.5 <= (float)(DAT_14c866ff8 - param_4))) ||
     (DAT_14c760e58 < 0.0)) {
    *param_1 = param_2;
    param_1[1] = 0.0;
    param_1[3] = 0.0;
    param_1[2] = DAT_14ca964d4;
    param_1[4] = 0.0;
  }
  else if ((1e-08 < ABS(fVar1 - param_2)) ||
          (1e-08 < ABS(param_3 - ((fVar1 - param_1[4]) + param_1[1])))) {
    fVar2 = (DAT_14ca964d4 - param_1[2]) * param_1[3];
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
    fVar1 = fVar1 - (float)(-(uint)(0.0 <= DAT_14c760e58) & (uint)(param_1[4] - param_1[1] * fVar2))
    ;
    if (param_2 <= fVar1) {
      fVar1 = param_2;
    }
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
    param_1[2] = DAT_14ca964d4;
    *param_1 = param_2;
    param_3 = param_3 - fVar1;
    param_1[1] = param_3;
    if (ABS(param_3) <= 1e-08) {
      param_1[1] = 0.0;
      param_1[3] = 0.0;
      param_1[4] = 0.0;
    }
    else {
      param_1[4] = param_2 - fVar1;
      if (param_3 <= 0.0) {
        fVar1 = *(float *)(&DAT_14ca96804 + (longlong)param_5 * 8);
        fVar2 = -1.0;
      }
      else {
        fVar1 = *(float *)(&DAT_14ca96800 + (longlong)param_5 * 8);
        fVar2 = 1.0;
      }
      param_1[3] = fVar2 / (param_3 * fVar1);
    }
  }
  return;
}



// FUNCTION 143224329 FUN_143224329 body=47 status=ok
// SIG undefined FUN_143224329(void)

void FUN_143224329(void)

{
  DAT_14ca9a3e8 = &PTR_FUN_14a392d20;
  FUN_144725486(&DAT_14ca9a3e8);
  FUN_1463200fe(&DAT_14ca9a3e8);
  return;
}



// FUNCTION 143224358 FUN_143224358 body=69 status=ok
// SIG undefined FUN_143224358(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143224358(void)

{
  _DAT_14ca96810 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014322439a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca96818,1);
  return;
}



// FUNCTION 14322439e FUN_14322439e body=1138 status=ok
// SIG undefined FUN_14322439e(void)

ulonglong FUN_14322439e(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  DWORD DVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined4 uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  bool bVar18;
  
  puVar1 = (uint *)(param_1 + 0x10);
  DVar4 = GetCurrentThreadId();
  uVar15 = *(uint *)(param_1 + 0x10);
  if ((uVar15 & 1) == 0) {
    LOCK();
    uVar11 = *puVar1;
    bVar18 = uVar15 == uVar11;
    if (bVar18) {
      *puVar1 = uVar15 | 1;
      uVar11 = uVar15;
    }
    uVar15 = uVar11;
    UNLOCK();
    if (bVar18) {
      *(DWORD *)(param_1 + 0x14) = DVar4;
      goto LAB_1432243e6;
    }
  }
  if (*(DWORD *)(param_1 + 0x14) == DVar4) {
    LOCK();
    *puVar1 = *puVar1 + 4;
    UNLOCK();
  }
  else {
    FUN_1402441ea(puVar1,uVar15);
  }
LAB_1432243e6:
  lVar10 = *(longlong *)(param_1 + 0x38);
  iVar5 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar5 == 0) {
    uVar9 = 0;
  }
  else {
    lVar17 = 0;
    do {
      lVar3 = *(longlong *)(lVar10 + lVar17);
      (**(code **)(*DAT_14ca83900 + 0x1d0))(DAT_14ca83900,*(undefined8 *)(lVar3 + 8));
      if (*(longlong *)(lVar3 + 0x10) != *(longlong *)(lVar3 + 8)) {
        (**(code **)(*DAT_14ca83900 + 0x1d0))();
      }
      lVar17 = lVar17 + 8;
    } while ((longlong)iVar5 * 8 != lVar17);
    uVar9 = *(undefined4 *)(param_1 + 0x40);
    lVar10 = *(longlong *)(param_1 + 0x38);
  }
  iVar5 = *(int *)(param_1 + 0x44);
  FUN_1413ef4ca(lVar10,uVar9);
  *(undefined4 *)(param_1 + 0x40) = 0;
  if ((iVar5 < 0) && (*(int *)(param_1 + 0x44) != 0)) {
    FUN_145964b54(param_1 + 0x38);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca96840) && (FUN_144b3d300(), DAT_14ca96840 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.RenderTargetPoolMin")
    ;
    if (plVar8 == (longlong *)0x0) {
      DAT_14ca96838 = 0;
    }
    else {
      DAT_14ca96838 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer();
  }
  iVar5 = 2000;
  if (*(int *)(DAT_14ca96838 + 4) < 2000) {
    iVar5 = *(int *)(DAT_14ca96838 + 4);
  }
  uVar15 = 0;
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  uVar16 = iVar5 * 0x400;
  plVar8 = (longlong *)(param_1 + 0x28);
  uVar11 = *(uint *)(param_1 + 0x30);
  if (uVar11 != 0) {
    uVar15 = 0;
    do {
      lVar10 = *plVar8;
      lVar17 = (longlong)(int)uVar15;
      if (*(longlong *)(lVar10 + lVar17 * 8) == 0) {
        iVar5 = *(int *)(param_1 + 0x30);
        iVar6 = iVar5 + ~uVar15;
        if (iVar6 != 0) {
          if (0 < iVar6) {
            iVar6 = 1;
          }
          memmove((void *)(lVar10 + lVar17 * 8),(void *)(lVar10 + (longlong)(iVar5 - iVar6) * 8),
                  (longlong)iVar6 << 3);
          iVar5 = *(int *)(param_1 + 0x30);
        }
        *(int *)(param_1 + 0x30) = iVar5 + -1;
        FUN_1417901ba(plVar8);
        iVar5 = *(int *)(param_1 + 0x20);
        iVar6 = ~uVar15 + iVar5;
        if (iVar6 != 0) {
          if (0 < iVar6) {
            iVar6 = 1;
          }
          memmove((void *)(*(longlong *)(param_1 + 0x18) + lVar17 * 4),
                  (void *)(*(longlong *)(param_1 + 0x18) + (longlong)(iVar5 - iVar6) * 4),
                  (longlong)iVar6 << 2);
          iVar5 = *(int *)(param_1 + 0x20);
        }
        *(int *)(param_1 + 0x20) = iVar5 + -1;
        FUN_144780a3c();
        uVar11 = uVar11 - 1;
      }
      else {
        uVar15 = uVar15 + 1;
      }
    } while (uVar15 < uVar11);
    if (*(int *)(param_1 + 0x30) == 0) {
      uVar15 = 0;
    }
    else {
      uVar11 = 0;
      do {
        lVar10 = *(longlong *)(*plVar8 + (longlong)(int)uVar11 * 8);
        if (lVar10 != 0) {
          uVar15 = *(uint *)(lVar10 + 0x6c);
          if (*(int *)(lVar10 + 0x68) == 1) {
            uVar15 = uVar15 + 1;
            *(uint *)(lVar10 + 0x6c) = uVar15;
          }
          if ((2 < uVar15) &&
             ((**(code **)(*DAT_14ca83900 + 0x1d0))(DAT_14ca83900,*(undefined8 *)(lVar10 + 8)),
             *(longlong *)(lVar10 + 0x10) != *(longlong *)(lVar10 + 8))) {
            (**(code **)(*DAT_14ca83900 + 0x1d0))();
          }
        }
        uVar11 = uVar11 + 1;
        uVar15 = *(uint *)(param_1 + 0x30);
      } while (uVar11 < uVar15);
    }
  }
  uVar11 = *(uint *)(param_1 + 0x48);
  if (uVar16 < uVar11) {
    while (uVar15 != 0) {
      lVar10 = *plVar8;
      uVar12 = 0;
      uVar13 = 0xffffffff;
      do {
        lVar17 = *(longlong *)(lVar10 + (longlong)(int)uVar12 * 8);
        if (((lVar17 == 0) || (uVar2 = *(uint *)(lVar17 + 0x6c), uVar2 < 3)) ||
           ((uVar14 = uVar12, uVar13 != 0xffffffff &&
            (uVar2 <= *(uint *)(*(longlong *)(lVar10 + (longlong)(int)uVar13 * 8) + 0x6c))))) {
          uVar14 = uVar13;
        }
        uVar12 = uVar12 + 1;
        uVar13 = uVar14;
      } while (uVar15 != uVar12);
      if (uVar14 == 0xffffffff) break;
      lVar17 = (longlong)(int)uVar14;
      lVar10 = *(longlong *)(lVar10 + lVar17 * 8);
      iVar5 = (**(code **)(*DAT_14ca83900 + 0x1d0))(DAT_14ca83900,*(undefined8 *)(lVar10 + 8));
      if (*(longlong *)(lVar10 + 0x10) != *(longlong *)(lVar10 + 8)) {
        iVar6 = (**(code **)(*DAT_14ca83900 + 0x1d0))();
        iVar5 = iVar5 + iVar6;
      }
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) - (iVar5 + 0x3ffU >> 10);
      if (*(longlong *)(*(longlong *)(param_1 + 0x28) + lVar17 * 8) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x28) + lVar17 * 8) = 0;
        FUN_144734574();
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x18) + lVar17 * 4) = 0;
      uVar11 = *(uint *)(param_1 + 0x48);
      if (uVar11 <= uVar16) goto LAB_14322472e;
      uVar15 = *(uint *)(param_1 + 0x30);
    }
    if (*(char *)(param_1 + 0x4c) == '\0') {
      *(undefined1 *)(param_1 + 0x4c) = 1;
    }
  }
LAB_14322472e:
  if ((uVar11 <= uVar16) && (*(char *)(param_1 + 0x4c) == '\x01')) {
    *(undefined1 *)(param_1 + 0x4c) = 0;
  }
  uVar15 = *puVar1;
  uVar7 = (ulonglong)uVar15;
  if (uVar15 < 4) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    if (uVar15 < 2) {
      LOCK();
      uVar11 = *puVar1;
      if (uVar15 == uVar11) {
        *puVar1 = 0;
      }
      else {
        uVar7 = (ulonglong)uVar11;
      }
      UNLOCK();
      if (uVar15 == uVar11) {
        return uVar7;
      }
    }
    uVar7 = FUN_140d366d2(puVar1);
    return uVar7;
  }
  LOCK();
  *puVar1 = *puVar1 - 4;
  UNLOCK();
  return uVar7;
}



// FUNCTION 143224810 FUN_143224810 body=69 status=ok
// SIG undefined FUN_143224810(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143224810(void)

{
  _DAT_14ca96878 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143224852. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca96880,1);
  return;
}



// FUNCTION 143224855 FUN_143224855 body=69 status=ok
// SIG undefined FUN_143224855(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143224855(void)

{
  _DAT_14ca96890 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143224897. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca96898,1);
  return;
}



// FUNCTION 14322489a FUN_14322489a body=69 status=ok
// SIG undefined FUN_14322489a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14322489a(void)

{
  _DAT_14ca968a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432248dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca968a8,1);
  return;
}



// FUNCTION 1432248df FUN_1432248df body=125 status=ok
// SIG undefined FUN_1432248df(void)

longlong FUN_1432248df(int param_1,int param_2,byte param_3,byte param_4)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)((uint)param_3 * 0x30);
  param_2 = param_2 >> (param_4 & 0x1f);
  if (param_2 < 2) {
    param_2 = 1;
  }
  uVar1 = *(uint *)((longlong)&DAT_14c87341c + uVar5);
  if ((int)uVar1 < 1) {
    uVar3 = 0;
  }
  else {
    param_1 = param_1 >> (param_4 & 0x1f);
    iVar4 = 1;
    if (1 < param_1) {
      iVar4 = param_1;
    }
    uVar3 = (ulonglong)((iVar4 + uVar1) - 1) / (ulonglong)uVar1;
  }
  uVar1 = *(uint *)((longlong)&DAT_14c873420 + uVar5);
  if ((int)uVar1 < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = (ulonglong)((param_2 + uVar1) - 1) / (ulonglong)uVar1;
  }
  return (longlong)*(int *)((longlong)&DAT_14c873428 + uVar5) * uVar2 * uVar3;
}



// FUNCTION 14322495c FUN_14322495c body=22 status=ok
// SIG undefined FUN_14322495c(void)

undefined1 FUN_14322495c(byte param_1)

{
  if (param_1 < 0x5d) {
    return (&DAT_14a38d8c0)[param_1];
  }
  return 0;
}



// FUNCTION 143224972 FUN_143224972 body=47 status=ok
// SIG undefined FUN_143224972(void)

void FUN_143224972(void)

{
  DAT_14ca968b0 = &PTR_FUN_14a392d80;
  FUN_144725486(&DAT_14ca968b0);
  FUN_147439b24(&DAT_14ca968b0);
  return;
}



// FUNCTION 1432249a1 FUN_1432249a1 body=47 status=ok
// SIG undefined FUN_1432249a1(void)

void FUN_1432249a1(void)

{
  DAT_14ca968c8 = &PTR_FUN_14a392de0;
  FUN_144725486(&DAT_14ca968c8);
  FUN_147439c24(&DAT_14ca968c8);
  return;
}



// FUNCTION 1432249d0 FUN_1432249d0 body=47 status=ok
// SIG undefined FUN_1432249d0(void)

void FUN_1432249d0(void)

{
  DAT_14ca968e0 = &PTR_FUN_14a392e40;
  FUN_144725486(&DAT_14ca968e0);
  FUN_147439d24(&DAT_14ca968e0);
  return;
}



// FUNCTION 143224a65 FUN_143224a65 body=165 status=ok
// SIG undefined FUN_143224a65(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_143224a65(uint param_1)

{
  undefined8 uVar1;
  
  if ((&DAT_14ca814b8)[(ulonglong)(param_1 & 0xffff) * 0xf] != 1) {
    return CONCAT71((int7)((ulonglong)(param_1 & 0xffff) * 0x3c >> 8),1);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca96a60) {
    FUN_144b3d300(&DAT_14ca96a60);
    if (DAT_14ca96a60 == -1) {
      FUN_140056680(&DAT_14ca96a48,L"r.Mobile.SupportsGen4TAA");
      _DAT_14ca96a58 = 0;
      atexit((_func_5014 *)&LAB_143224b0a);
      _Init_thread_footer(&DAT_14ca96a60);
    }
  }
  uVar1 = FUN_144a847a6(&DAT_14ca96a48,param_1);
  return uVar1;
}



// FUNCTION 143224b1b FUN_143224b1b body=69 status=ok
// SIG undefined FUN_143224b1b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143224b1b(void)

{
  _DAT_14ca96a68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143224b5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca96a70,1);
  return;
}



// FUNCTION 143224b60 FUN_143224b60 body=69 status=ok
// SIG undefined FUN_143224b60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143224b60(void)

{
  _DAT_14ca96a78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143224ba2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca96a80,1);
  return;
}



// FUNCTION 143224ba5 FUN_143224ba5 body=69 status=ok
// SIG undefined FUN_143224ba5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143224ba5(void)

{
  _DAT_14ca96a90 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143224be7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca96a98,1);
  return;
}



// FUNCTION 143224c72 FUN_143224c72 body=5741 status=ok
// SIG undefined FUN_143224c72(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143224c72(void)

{
  ushort uVar1;
  ushort uVar2;
  void *_Src;
  undefined1 auVar3 [16];
  char cVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined1 (*pauVar8) [16];
  longlong *plVar9;
  byte bVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  undefined2 *puVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  bool bVar18;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar19 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar20 [16];
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  undefined1 auVar21 [16];
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 extraout_XMM0_Qb_07;
  undefined8 extraout_XMM0_Qb_08;
  undefined1 auVar24 [16];
  undefined8 extraout_XMM0_Qb_09;
  undefined8 extraout_XMM0_Qb_10;
  undefined1 auVar25 [16];
  undefined8 extraout_XMM0_Qb_11;
  undefined8 extraout_XMM0_Qb_12;
  undefined8 extraout_XMM0_Qb_13;
  undefined8 extraout_XMM0_Qb_14;
  undefined8 extraout_XMM0_Qb_15;
  undefined8 extraout_XMM0_Qb_16;
  undefined8 extraout_XMM0_Qb_17;
  undefined8 extraout_XMM0_Qb_18;
  undefined8 extraout_XMM0_Qb_19;
  undefined8 extraout_XMM0_Qb_20;
  longlong lVar26;
  undefined1 unaff_XMM8 [16];
  undefined1 auVar27 [16];
  longlong lVar28;
  undefined1 auStack_1c8 [32];
  undefined8 *local_1a8;
  char local_198;
  undefined7 uStack_197;
  int local_190;
  undefined1 local_188 [16];
  char local_169;
  undefined2 *local_168;
  int local_160;
  undefined4 local_15c;
  undefined2 *local_158;
  int local_150;
  undefined8 local_148 [27];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  auVar27._0_8_ = FUN_143202aa2();
  iVar5 = DAT_14ca96a64;
  auVar27._8_8_ = extraout_XMM0_Qb;
  DAT_14ca96b00 = 0x9b;
  puVar11 = DAT_14ca96af8;
  if (DAT_14ca96b04 + 0x1fU < 0xa0) {
    if (DAT_14ca96af8 == (undefined4 *)0x0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      auVar27._0_8_ = FUN_1446efa72(&DAT_14ca96af8,0,0,4);
      auVar27._8_8_ = extraout_XMM0_Qb_00;
      puVar11 = DAT_14ca96af8;
    }
    DAT_14ca96b04 = 0xa0;
  }
  auVar3 = _DAT_149931e80;
  if (puVar11 == (undefined4 *)0x0) {
    puVar11 = &DAT_14ca96aa8;
  }
  auVar19 = pmovsxbq(auVar27,0x100);
  lVar16 = 1;
  auVar27 = pmovsxbq(unaff_XMM8,0x202);
  do {
    if (SUB168(auVar19 ^ auVar3,0) < -0x7ffffffffffffffb) {
      puVar11[lVar16 + -1] = -(uint)(iVar5 == 1);
    }
    if (SUB168(auVar19 ^ auVar3,8) < -0x7ffffffffffffffb) {
      puVar11[lVar16] = -(uint)(iVar5 == 1);
    }
    lVar14 = auVar19._8_8_;
    lVar26 = auVar27._0_8_;
    auVar19._0_8_ = auVar19._0_8_ + lVar26;
    lVar28 = auVar27._8_8_;
    auVar19._8_8_ = lVar14 + lVar28;
    lVar16 = lVar16 + 2;
  } while (lVar16 != 7);
  iVar5 = DAT_14ca96b00 + 0x1f;
  if (-1 < DAT_14ca96b00) {
    iVar5 = DAT_14ca96b00;
  }
  if (DAT_14ca96b00 % 0x20 != 0) {
    puVar11 = &DAT_14ca96aa8;
    if (DAT_14ca96af8 != (undefined4 *)0x0) {
      puVar11 = DAT_14ca96af8;
    }
    bVar10 = -(char)(DAT_14ca96b00 % 0x20);
    puVar11[iVar5 >> 5] = (uint)(puVar11[iVar5 >> 5] << (bVar10 & 0x1f)) >> (bVar10 & 0x1f);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca96db8) {
    auVar19._0_8_ = FUN_144b3d300(&DAT_14ca96db8);
    auVar19._8_8_ = extraout_XMM0_Qb_11;
    if (DAT_14ca96db8 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14ca96db0 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.DBuffer",1);
      auVar19._0_8_ = _Init_thread_footer(&DAT_14ca96db8);
      auVar19._8_8_ = extraout_XMM0_Qb_12;
    }
  }
  if (DAT_14ca96db0 == (longlong *)0x0) {
    uVar15 = 0;
  }
  else {
    iVar5 = (**(code **)(*DAT_14ca96db0 + 0xb0))();
    auVar19._8_8_ = extraout_XMM0_Qb_01;
    auVar19._0_8_ = extraout_XMM0_Qa;
    uVar15 = (uint)(iVar5 != 0);
  }
  DAT_14ca96b60 = 0x9b;
  puVar11 = DAT_14ca96b58;
  if (DAT_14ca96b64 + 0x1fU < 0xa0) {
    if (DAT_14ca96b58 == (undefined4 *)0x0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      auVar19._0_8_ = FUN_1446efa72(&DAT_14ca96b58,0,0,4);
      auVar19._8_8_ = extraout_XMM0_Qb_02;
      puVar11 = DAT_14ca96b58;
    }
    DAT_14ca96b64 = 0xa0;
  }
  if (puVar11 == (undefined4 *)0x0) {
    puVar11 = &DAT_14ca96b08;
  }
  auVar20 = pmovsxbq(auVar19,0x100);
  lVar16 = 1;
  do {
    if (SUB168(auVar20 ^ auVar3,0) < -0x7ffffffffffffffb) {
      puVar11[lVar16 + -1] = -uVar15;
    }
    if (SUB168(auVar20 ^ auVar3,8) < -0x7ffffffffffffffb) {
      puVar11[lVar16] = -uVar15;
    }
    lVar14 = auVar20._8_8_;
    auVar20._0_8_ = auVar20._0_8_ + lVar26;
    auVar20._8_8_ = lVar14 + lVar28;
    lVar16 = lVar16 + 2;
  } while (lVar16 != 7);
  iVar5 = DAT_14ca96b60 + 0x1f;
  if (-1 < DAT_14ca96b60) {
    iVar5 = DAT_14ca96b60;
  }
  if (DAT_14ca96b60 % 0x20 != 0) {
    puVar11 = DAT_14ca96b58;
    if (DAT_14ca96b58 == (undefined4 *)0x0) {
      puVar11 = &DAT_14ca96b08;
    }
    bVar10 = -(char)(DAT_14ca96b60 % 0x20);
    puVar11[iVar5 >> 5] = (uint)(puVar11[iVar5 >> 5] << (bVar10 & 0x1f)) >> (bVar10 & 0x1f);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca96dc8) {
    auVar20._0_8_ = FUN_144b3d300(&DAT_14ca96dc8);
    auVar20._8_8_ = extraout_XMM0_Qb_13;
    if (DAT_14ca96dc8 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14ca96dc0 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SelectiveBasePassOutputs",1);
      auVar20._0_8_ = _Init_thread_footer(&DAT_14ca96dc8);
      auVar20._8_8_ = extraout_XMM0_Qb_14;
    }
  }
  if (DAT_14ca96dc0 == (longlong *)0x0) {
    uVar15 = 0;
  }
  else {
    iVar5 = (**(code **)(*DAT_14ca96dc0 + 0xb0))();
    auVar20._8_8_ = extraout_XMM0_Qb_03;
    auVar20._0_8_ = extraout_XMM0_Qa_00;
    uVar15 = (uint)(iVar5 != 0);
  }
  DAT_14ca96c20 = 0x9b;
  puVar11 = DAT_14ca96c18;
  if (DAT_14ca96c24 + 0x1fU < 0xa0) {
    if (DAT_14ca96c18 == (undefined4 *)0x0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      auVar20._0_8_ = FUN_1446efa72(&DAT_14ca96c18,0,0,4);
      auVar20._8_8_ = extraout_XMM0_Qb_04;
      puVar11 = DAT_14ca96c18;
    }
    DAT_14ca96c24 = 0xa0;
  }
  if (puVar11 == (undefined4 *)0x0) {
    puVar11 = &DAT_14ca96bc8;
  }
  auVar21 = pmovsxbq(auVar20,0x100);
  lVar16 = 1;
  do {
    if (SUB168(auVar21 ^ auVar3,0) < -0x7ffffffffffffffb) {
      puVar11[lVar16 + -1] = -uVar15;
    }
    if (SUB168(auVar21 ^ auVar3,8) < -0x7ffffffffffffffb) {
      puVar11[lVar16] = -uVar15;
    }
    lVar14 = auVar21._8_8_;
    auVar21._0_8_ = auVar21._0_8_ + lVar26;
    auVar21._8_8_ = lVar14 + lVar28;
    lVar16 = lVar16 + 2;
  } while (lVar16 != 7);
  iVar5 = DAT_14ca96c20 + 0x1f;
  if (-1 < DAT_14ca96c20) {
    iVar5 = DAT_14ca96c20;
  }
  if (DAT_14ca96c20 % 0x20 != 0) {
    puVar11 = &DAT_14ca96bc8;
    if (DAT_14ca96c18 != (undefined4 *)0x0) {
      puVar11 = DAT_14ca96c18;
    }
    bVar10 = -(char)(DAT_14ca96c20 % 0x20);
    puVar11[iVar5 >> 5] = (uint)(puVar11[iVar5 >> 5] << (bVar10 & 0x1f)) >> (bVar10 & 0x1f);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca96dd8) {
    auVar21._0_8_ = FUN_144b3d300(&DAT_14ca96dd8);
    auVar21._8_8_ = extraout_XMM0_Qb_15;
    if (DAT_14ca96dd8 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14ca96dd0 =
           (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.DistanceFields",1);
      auVar21._0_8_ = _Init_thread_footer(&DAT_14ca96dd8);
      auVar21._8_8_ = extraout_XMM0_Qb_16;
    }
  }
  if (DAT_14ca96dd0 == (longlong *)0x0) {
    uVar15 = 0;
  }
  else {
    iVar5 = (**(code **)(*DAT_14ca96dd0 + 0xb0))();
    auVar21._8_8_ = extraout_XMM0_Qb_05;
    auVar21._0_8_ = extraout_XMM0_Qa_01;
    uVar15 = (uint)(iVar5 != 0);
  }
  DAT_14ca96c80 = 0x9b;
  pauVar8 = DAT_14ca96c78;
  if (DAT_14ca96c84 + 0x1fU < 0xa0) {
    if (DAT_14ca96c78 == (undefined1 (*) [16])0x0) {
      pauVar8 = (undefined1 (*) [16])0x0;
    }
    else {
      auVar21._0_8_ = FUN_1446efa72(&DAT_14ca96c78,0,0,4);
      auVar21._8_8_ = extraout_XMM0_Qb_06;
      pauVar8 = DAT_14ca96c78;
    }
    DAT_14ca96c84 = 0xa0;
  }
  if (pauVar8 == (undefined1 (*) [16])0x0) {
    pauVar8 = (undefined1 (*) [16])&DAT_14ca96c28;
  }
  auVar22 = pmovsxbq(auVar21,0x100);
  lVar16 = 1;
  do {
    if (SUB168(auVar22 ^ auVar3,0) < -0x7ffffffffffffffb) {
      *(uint *)((longlong)pauVar8[-1] + (lVar16 + 3) * 4) = -uVar15;
    }
    if (SUB168(auVar22 ^ auVar3,8) < -0x7ffffffffffffffb) {
      *(uint *)((longlong)*pauVar8 + lVar16 * 4) = -uVar15;
    }
    lVar14 = auVar22._8_8_;
    auVar22._0_8_ = auVar22._0_8_ + lVar26;
    auVar22._8_8_ = lVar14 + lVar28;
    lVar16 = lVar16 + 2;
  } while (lVar16 != 7);
  iVar5 = DAT_14ca96c80 + 0x1f;
  if (-1 < DAT_14ca96c80) {
    iVar5 = DAT_14ca96c80;
  }
  if (DAT_14ca96c80 % 0x20 != 0) {
    pauVar8 = DAT_14ca96c78;
    if (DAT_14ca96c78 == (undefined1 (*) [16])0x0) {
      pauVar8 = (undefined1 (*) [16])&DAT_14ca96c28;
    }
    bVar10 = -(char)(DAT_14ca96c80 % 0x20);
    *(uint *)((longlong)*pauVar8 + (longlong)(iVar5 >> 5) * 4) =
         (uint)(*(int *)((longlong)*pauVar8 + (longlong)(iVar5 >> 5) * 4) << (bVar10 & 0x1f)) >>
         (bVar10 & 0x1f);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca96de8) && (FUN_144b3d300(&DAT_14ca96de8), DAT_14ca96de8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14ca96de0 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.RayTracing",1)
    ;
    _Init_thread_footer(&DAT_14ca96de8);
  }
  DAT_14ca96ce0 = 0x9b;
  pauVar8 = DAT_14ca96cd8;
  if (DAT_14ca96ce4 + 0x1fU < 0xa0) {
    if (DAT_14ca96cd8 == (undefined1 (*) [16])0x0) {
      pauVar8 = (undefined1 (*) [16])0x0;
    }
    else {
      FUN_1446efa72(&DAT_14ca96cd8,0,0,4);
      pauVar8 = DAT_14ca96cd8;
    }
    DAT_14ca96ce4 = 0xa0;
  }
  if (pauVar8 == (undefined1 (*) [16])0x0) {
    pauVar8 = (undefined1 (*) [16])&DAT_14ca96c88;
  }
  *pauVar8 = (undefined1  [16])0x0;
  *(undefined4 *)pauVar8[1] = 0;
  iVar5 = DAT_14ca96ce0 + 0x1f;
  if (-1 < DAT_14ca96ce0) {
    iVar5 = DAT_14ca96ce0;
  }
  if (DAT_14ca96ce0 % 0x20 != 0) {
    pauVar8 = (undefined1 (*) [16])&DAT_14ca96c88;
    if (DAT_14ca96cd8 != (undefined1 (*) [16])0x0) {
      pauVar8 = DAT_14ca96cd8;
    }
    bVar10 = -(char)(DAT_14ca96ce0 % 0x20);
    *(uint *)(*pauVar8 + (longlong)(iVar5 >> 5) * 4) =
         (uint)(*(int *)(*pauVar8 + (longlong)(iVar5 >> 5) * 4) << (bVar10 & 0x1f)) >>
         (bVar10 & 0x1f);
  }
  DAT_14ca96bc0 = 0x9b;
  pauVar8 = DAT_14ca96bb8;
  if (DAT_14ca96bc4 + 0x1fU < 0xa0) {
    if (DAT_14ca96bb8 == (undefined1 (*) [16])0x0) {
      pauVar8 = (undefined1 (*) [16])0x0;
    }
    else {
      FUN_1446efa72(&DAT_14ca96bb8,0,0,4);
      pauVar8 = DAT_14ca96bb8;
    }
    DAT_14ca96bc4 = 0xa0;
  }
  if (pauVar8 == (undefined1 (*) [16])0x0) {
    pauVar8 = (undefined1 (*) [16])&DAT_14ca96b68;
  }
  *pauVar8 = (undefined1  [16])0x0;
  *(undefined4 *)pauVar8[1] = 0;
  iVar5 = DAT_14ca96bc0 + 0x1f;
  if (-1 < DAT_14ca96bc0) {
    iVar5 = DAT_14ca96bc0;
  }
  if (DAT_14ca96bc0 % 0x20 != 0) {
    pauVar8 = (undefined1 (*) [16])&DAT_14ca96b68;
    if (DAT_14ca96bb8 != (undefined1 (*) [16])0x0) {
      pauVar8 = DAT_14ca96bb8;
    }
    bVar10 = -(char)(DAT_14ca96bc0 % 0x20);
    *(uint *)(*pauVar8 + (longlong)(iVar5 >> 5) * 4) =
         (uint)(*(int *)(*pauVar8 + (longlong)(iVar5 >> 5) * 4) << (bVar10 & 0x1f)) >>
         (bVar10 & 0x1f);
  }
  DAT_14ca96d40 = 0x9b;
  pauVar8 = DAT_14ca96d38;
  if (DAT_14ca96d44 + 0x1fU < 0xa0) {
    if (DAT_14ca96d38 == (undefined1 (*) [16])0x0) {
      pauVar8 = (undefined1 (*) [16])0x0;
    }
    else {
      FUN_1446efa72(&DAT_14ca96d38,0,0,4);
      pauVar8 = DAT_14ca96d38;
    }
    DAT_14ca96d44 = 0xa0;
  }
  if (pauVar8 == (undefined1 (*) [16])0x0) {
    pauVar8 = (undefined1 (*) [16])&DAT_14ca96ce8;
  }
  *pauVar8 = (undefined1  [16])0x0;
  *(undefined4 *)pauVar8[1] = 0;
  iVar5 = DAT_14ca96d40 + 0x1f;
  if (-1 < DAT_14ca96d40) {
    iVar5 = DAT_14ca96d40;
  }
  if (DAT_14ca96d40 % 0x20 != 0) {
    pauVar8 = DAT_14ca96d38;
    if (DAT_14ca96d38 == (undefined1 (*) [16])0x0) {
      pauVar8 = (undefined1 (*) [16])&DAT_14ca96ce8;
    }
    bVar10 = -(char)(DAT_14ca96d40 % 0x20);
    *(uint *)(*pauVar8 + (longlong)(iVar5 >> 5) * 4) =
         (uint)(*(int *)(*pauVar8 + (longlong)(iVar5 >> 5) * 4) << (bVar10 & 0x1f)) >>
         (bVar10 & 0x1f);
  }
  DAT_14ca96da0 = 0x9b;
  pauVar8 = DAT_14ca96d98;
  if (DAT_14ca96da4 + 0x1fU < 0xa0) {
    if (DAT_14ca96d98 == (undefined1 (*) [16])0x0) {
      pauVar8 = (undefined1 (*) [16])0x0;
    }
    else {
      FUN_1446efa72(&DAT_14ca96d98,0,0,4);
      pauVar8 = DAT_14ca96d98;
    }
    DAT_14ca96da4 = 0xa0;
  }
  if (pauVar8 == (undefined1 (*) [16])0x0) {
    pauVar8 = (undefined1 (*) [16])&DAT_14ca96d48;
  }
  auVar23 = (undefined1  [16])0x0;
  *pauVar8 = (undefined1  [16])0x0;
  *(undefined4 *)pauVar8[1] = 0;
  iVar5 = DAT_14ca96da0 + 0x1f;
  if (-1 < DAT_14ca96da0) {
    iVar5 = DAT_14ca96da0;
  }
  if (DAT_14ca96da0 % 0x20 != 0) {
    pauVar8 = DAT_14ca96d98;
    if (DAT_14ca96d98 == (undefined1 (*) [16])0x0) {
      pauVar8 = (undefined1 (*) [16])&DAT_14ca96d48;
    }
    bVar10 = -(char)(DAT_14ca96da0 % 0x20);
    *(uint *)(*pauVar8 + (longlong)(iVar5 >> 5) * 4) =
         (uint)(*(int *)(*pauVar8 + (longlong)(iVar5 >> 5) * 4) << (bVar10 & 0x1f)) >>
         (bVar10 & 0x1f);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca96df8) {
    auVar23._0_8_ = FUN_144b3d300(&DAT_14ca96df8);
    auVar23._8_8_ = extraout_XMM0_Qb_17;
    if (DAT_14ca96df8 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14ca96df0 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Mobile.AmbientOcclusion",1);
      auVar23._0_8_ = _Init_thread_footer(&DAT_14ca96df8);
      auVar23._8_8_ = extraout_XMM0_Qb_18;
    }
  }
  if (DAT_14ca96df0 == (longlong *)0x0) {
    uVar15 = 0;
  }
  else {
    iVar5 = (**(code **)(*DAT_14ca96df0 + 0xb0))();
    auVar23._8_8_ = extraout_XMM0_Qb_07;
    auVar23._0_8_ = extraout_XMM0_Qa_02;
    uVar15 = (uint)(iVar5 != 0);
  }
  DAT_14ca96990 = 0x9b;
  puVar11 = DAT_14ca96988;
  if (DAT_14ca96994 + 0x1fU < 0xa0) {
    if (DAT_14ca96988 == (undefined4 *)0x0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      auVar23._0_8_ = FUN_1446efa72(&DAT_14ca96988,0,0,4);
      auVar23._8_8_ = extraout_XMM0_Qb_08;
      puVar11 = DAT_14ca96988;
    }
    DAT_14ca96994 = 0xa0;
  }
  if (puVar11 == (undefined4 *)0x0) {
    puVar11 = &DAT_14ca96938;
  }
  auVar24 = pmovsxbq(auVar23,0x100);
  lVar16 = 1;
  do {
    if (SUB168(auVar24 ^ auVar3,0) < -0x7ffffffffffffffb) {
      puVar11[lVar16 + -1] = -uVar15;
    }
    if (SUB168(auVar24 ^ auVar3,8) < -0x7ffffffffffffffb) {
      puVar11[lVar16] = -uVar15;
    }
    lVar14 = auVar24._8_8_;
    auVar24._0_8_ = auVar24._0_8_ + lVar26;
    auVar24._8_8_ = lVar14 + lVar28;
    lVar16 = lVar16 + 2;
  } while (lVar16 != 7);
  iVar5 = DAT_14ca96990 + 0x1f;
  if (-1 < DAT_14ca96990) {
    iVar5 = DAT_14ca96990;
  }
  if (DAT_14ca96990 % 0x20 != 0) {
    puVar11 = &DAT_14ca96938;
    if (DAT_14ca96988 != (undefined4 *)0x0) {
      puVar11 = DAT_14ca96988;
    }
    bVar10 = -(char)(DAT_14ca96990 % 0x20);
    puVar11[iVar5 >> 5] = (uint)(puVar11[iVar5 >> 5] << (bVar10 & 0x1f)) >> (bVar10 & 0x1f);
  }
  if ((&DAT_14ca814b8)[(ulonglong)DAT_14ca85550 * 0xf] == 1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14ca96e08) {
      auVar24._0_8_ = FUN_144b3d300(&DAT_14ca96e08);
      auVar24._8_8_ = extraout_XMM0_Qb_19;
      if (DAT_14ca96e08 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        DAT_14ca96e00 =
             (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Mobile.DBuffer",1);
        auVar24._0_8_ = _Init_thread_footer(&DAT_14ca96e08);
        auVar24._8_8_ = extraout_XMM0_Qb_20;
      }
    }
    uVar15 = 0;
    if (DAT_14ca96e00 != (longlong *)0x0) {
      iVar5 = (**(code **)(*DAT_14ca96e00 + 0xb0))();
      auVar24._8_8_ = extraout_XMM0_Qb_09;
      auVar24._0_8_ = extraout_XMM0_Qa_03;
      uVar15 = 0;
      if (iVar5 != 0) {
        uVar15 = 0xffffffff;
        if (DAT_14ca964f0 != '\0') {
          uVar15 = DAT_14c760e14 ^ 0xff;
        }
      }
    }
    DAT_14ca96b60 = 0x9b;
    puVar11 = DAT_14ca96b58;
    if (DAT_14ca96b64 + 0x1fU < 0xa0) {
      if (DAT_14ca96b58 == (undefined4 *)0x0) {
        puVar11 = (undefined4 *)0x0;
      }
      else {
        auVar24._0_8_ = FUN_1446efa72(&DAT_14ca96b58,0,0,4);
        auVar24._8_8_ = extraout_XMM0_Qb_10;
        puVar11 = DAT_14ca96b58;
      }
      DAT_14ca96b64 = 0xa0;
    }
    if (puVar11 == (undefined4 *)0x0) {
      puVar11 = &DAT_14ca96b08;
    }
    auVar25 = pmovsxbq(auVar24,0x100);
    lVar16 = 1;
    do {
      if (SUB168(auVar25 ^ auVar3,0) < -0x7ffffffffffffffb) {
        puVar11[lVar16 + -1] = -(uVar15 & 1);
      }
      if (SUB168(auVar25 ^ auVar3,8) < -0x7ffffffffffffffb) {
        puVar11[lVar16] = -(uVar15 & 1);
      }
      lVar14 = auVar25._8_8_;
      auVar25._0_8_ = auVar25._0_8_ + lVar26;
      auVar25._8_8_ = lVar14 + lVar28;
      lVar16 = lVar16 + 2;
    } while (lVar16 != 7);
    iVar5 = DAT_14ca96b60 + 0x1f;
    if (-1 < DAT_14ca96b60) {
      iVar5 = DAT_14ca96b60;
    }
    if (DAT_14ca96b60 % 0x20 != 0) {
      puVar11 = &DAT_14ca96b08;
      if (DAT_14ca96b58 != (undefined4 *)0x0) {
        puVar11 = DAT_14ca96b58;
      }
      bVar10 = -(char)(DAT_14ca96b60 % 0x20);
      puVar11[iVar5 >> 5] = (uint)(puVar11[iVar5 >> 5] << (bVar10 & 0x1f)) >> (bVar10 & 0x1f);
    }
  }
  if (((DAT_14ca96de0 != (longlong *)0x0) &&
      (iVar5 = (**(code **)(*DAT_14ca96de0 + 0xb0))(), iVar5 != 0)) && (DAT_14ca84ef4 == '\x01')) {
    DAT_14ca96d40 = 0x9b;
    pauVar8 = DAT_14ca96d38;
    if (DAT_14ca96d44 + 0x1fU < 0xa0) {
      if (DAT_14ca96d38 == (undefined1 (*) [16])0x0) {
        pauVar8 = (undefined1 (*) [16])0x0;
      }
      else {
        FUN_1446efa72(&DAT_14ca96d38,0,0,4);
        pauVar8 = DAT_14ca96d38;
      }
      DAT_14ca96d44 = 0xa0;
    }
    if (pauVar8 == (undefined1 (*) [16])0x0) {
      pauVar8 = (undefined1 (*) [16])&DAT_14ca96ce8;
    }
    *(undefined4 *)*pauVar8 = 0xffffffff;
    *(undefined4 *)(*pauVar8 + 4) = 0xffffffff;
    *(undefined4 *)(*pauVar8 + 8) = 0xffffffff;
    *(undefined4 *)(*pauVar8 + 0xc) = 0xffffffff;
    *(undefined4 *)pauVar8[1] = 0xffffffff;
    iVar5 = DAT_14ca96d40 + 0x1f;
    if (-1 < DAT_14ca96d40) {
      iVar5 = DAT_14ca96d40;
    }
    if (DAT_14ca96d40 % 0x20 != 0) {
      pauVar8 = DAT_14ca96d38;
      if (DAT_14ca96d38 == (undefined1 (*) [16])0x0) {
        pauVar8 = (undefined1 (*) [16])&DAT_14ca96ce8;
      }
      bVar10 = -(char)(DAT_14ca96d40 % 0x20);
      *(uint *)(*pauVar8 + (longlong)(iVar5 >> 5) * 4) =
           (uint)(*(int *)(*pauVar8 + (longlong)(iVar5 >> 5) * 4) << (bVar10 & 0x1f)) >>
           (bVar10 & 0x1f);
    }
    if (DAT_14ca84ef5 == '\x01') {
      DAT_14ca96da0 = 0x9b;
      pauVar8 = DAT_14ca96d98;
      if (DAT_14ca96da4 + 0x1fU < 0xa0) {
        if (DAT_14ca96d98 == (undefined1 (*) [16])0x0) {
          pauVar8 = (undefined1 (*) [16])0x0;
        }
        else {
          FUN_1446efa72(&DAT_14ca96d98,0,0,4);
          pauVar8 = DAT_14ca96d98;
        }
        DAT_14ca96da4 = 0xa0;
      }
      if (pauVar8 == (undefined1 (*) [16])0x0) {
        pauVar8 = (undefined1 (*) [16])&DAT_14ca96d48;
      }
      *(undefined4 *)*pauVar8 = 0xffffffff;
      *(undefined4 *)(*pauVar8 + 4) = 0xffffffff;
      *(undefined4 *)(*pauVar8 + 8) = 0xffffffff;
      *(undefined4 *)(*pauVar8 + 0xc) = 0xffffffff;
      *(undefined4 *)pauVar8[1] = 0xffffffff;
      iVar5 = DAT_14ca96da0 + 0x1f;
      if (-1 < DAT_14ca96da0) {
        iVar5 = DAT_14ca96da0;
      }
      if (DAT_14ca96da0 % 0x20 != 0) {
        pauVar8 = DAT_14ca96d98;
        if (DAT_14ca96d98 == (undefined1 (*) [16])0x0) {
          pauVar8 = (undefined1 (*) [16])&DAT_14ca96d48;
        }
        bVar10 = -(char)(DAT_14ca96da0 % 0x20);
        *(uint *)(*pauVar8 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)(*pauVar8 + (longlong)(iVar5 >> 5) * 4) << (bVar10 & 0x1f)) >>
             (bVar10 & 0x1f);
      }
    }
  }
  FUN_1400b22c2(&local_158,"Windows");
  puVar13 = local_158;
  if (local_150 == 0) {
    puVar13 = &DAT_149dfb77a;
  }
  FUN_1446f470e(local_148,puVar13,1);
  lVar16 = FUN_140f7ad96(local_148[0]);
  local_168 = (undefined2 *)0x0;
  local_160 = *(int *)(lVar16 + 0x28);
  lVar14 = (longlong)local_160;
  _Src = *(void **)(lVar16 + 0x20);
  if (lVar14 == 0) {
    local_15c = 0;
  }
  else {
    FUN_1446dd670(&local_168,local_160,0);
    memcpy(local_168,_Src,lVar14 * 2);
    if (1 < local_160) {
      FUN_1408e76da(local_148);
      puVar13 = local_158;
      if (local_150 == 0) {
        puVar13 = &DAT_149dfb77a;
      }
      local_1a8 = (undefined8 *)((ulonglong)local_1a8 & 0xffffffffffffff00);
      cVar4 = FUN_14626b27c(local_148,L"Engine",1,puVar13);
      if (cVar4 != '\0') {
        local_169 = '\0';
        puVar13 = local_168;
        if (local_160 == 0) {
          puVar13 = &DAT_149dfb77a;
        }
        cVar4 = FUN_141273478(local_148,puVar13,L"bEnableDistanceFields",&local_169);
        if ((cVar4 != '\0') && (local_169 == '\0')) {
          DAT_14ca96c80 = 0x9b;
          pauVar8 = DAT_14ca96c78;
          if (DAT_14ca96c84 + 0x1fU < 0xa0) {
            if (DAT_14ca96c78 == (undefined1 (*) [16])0x0) {
              pauVar8 = (undefined1 (*) [16])0x0;
            }
            else {
              FUN_1446efa72(&DAT_14ca96c78,0,0,4);
              pauVar8 = DAT_14ca96c78;
            }
            DAT_14ca96c84 = 0xa0;
          }
          if (pauVar8 == (undefined1 (*) [16])0x0) {
            pauVar8 = (undefined1 (*) [16])&DAT_14ca96c28;
          }
          *pauVar8 = (undefined1  [16])0x0;
          *(undefined4 *)pauVar8[1] = 0;
          iVar5 = DAT_14ca96c80 + 0x1f;
          if (-1 < DAT_14ca96c80) {
            iVar5 = DAT_14ca96c80;
          }
          if (DAT_14ca96c80 % 0x20 != 0) {
            pauVar8 = (undefined1 (*) [16])&DAT_14ca96c28;
            if (DAT_14ca96c78 != (undefined1 (*) [16])0x0) {
              pauVar8 = DAT_14ca96c78;
            }
            bVar10 = -(char)(DAT_14ca96c80 % 0x20);
            *(uint *)((longlong)*pauVar8 + (longlong)(iVar5 >> 5) * 4) =
                 (uint)(*(int *)((longlong)*pauVar8 + (longlong)(iVar5 >> 5) * 4) << (bVar10 & 0x1f)
                       ) >> (bVar10 & 0x1f);
          }
        }
        local_188 = (undefined1  [16])0x0;
        local_1a8 = &DAT_14c872ce8;
        FUN_1449da20c(DAT_14c872ce0,L"/Script/WindowsTargetPlatform.WindowsTargetSettings",
                      L"RayTracingMode",local_188);
        FUN_140056680(&local_198,L"Inline");
        if (local_188._8_4_ == local_190) {
          bVar18 = true;
          if (1 < (int)local_188._8_4_) {
            lVar16 = 0;
            while( true ) {
              uVar1 = *(ushort *)(local_188._0_8_ + lVar16);
              uVar15 = (uint)uVar1;
              uVar2 = *(ushort *)(CONCAT71(uStack_197,local_198) + lVar16);
              uVar17 = (uint)uVar2;
              if (uVar1 != uVar2) {
                if ((uVar2 | uVar1) < 0x80) {
                  uVar15 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                  uVar17 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                  if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_143225c41;
                }
                iVar5 = uVar15 - uVar17;
                goto LAB_143225c7b;
              }
              if (uVar1 == 0) break;
LAB_143225c41:
              lVar16 = lVar16 + 2;
            }
            iVar5 = 0;
LAB_143225c7b:
            bVar18 = iVar5 == 0;
          }
        }
        else {
          bVar18 = local_190 + local_188._8_4_ == 1;
        }
        if (CONCAT71(uStack_197,local_198) != 0) {
          FUN_1400020a8();
        }
        if (bVar18) {
          DAT_14ca96da0 = 0x9b;
          pauVar8 = DAT_14ca96d98;
          if (DAT_14ca96da4 + 0x1fU < 0xa0) {
            if (DAT_14ca96d98 == (undefined1 (*) [16])0x0) {
              pauVar8 = (undefined1 (*) [16])0x0;
            }
            else {
              FUN_1446efa72(&DAT_14ca96d98,0,0,4);
              pauVar8 = DAT_14ca96d98;
            }
            DAT_14ca96da4 = 0xa0;
          }
          if (pauVar8 == (undefined1 (*) [16])0x0) {
            pauVar8 = (undefined1 (*) [16])&DAT_14ca96d48;
          }
          *pauVar8 = (undefined1  [16])0x0;
          *(undefined4 *)pauVar8[1] = 0;
          iVar5 = DAT_14ca96da0 + 0x1f;
          if (-1 < DAT_14ca96da0) {
            iVar5 = DAT_14ca96da0;
          }
          if (DAT_14ca96da0 % 0x20 != 0) {
            pauVar8 = (undefined1 (*) [16])&DAT_14ca96d48;
            if (DAT_14ca96d98 != (undefined1 (*) [16])0x0) {
              pauVar8 = DAT_14ca96d98;
            }
            bVar10 = -(char)(DAT_14ca96da0 % 0x20);
            *(uint *)(*pauVar8 + (longlong)(iVar5 >> 5) * 4) =
                 (uint)(*(int *)(*pauVar8 + (longlong)(iVar5 >> 5) * 4) << (bVar10 & 0x1f)) >>
                 (bVar10 & 0x1f);
          }
        }
        else {
          FUN_140056680(&local_198,&DAT_149e19f3a);
          if (local_188._8_4_ == local_190) {
            bVar18 = true;
            if (1 < (int)local_188._8_4_) {
              lVar16 = 0;
              while( true ) {
                uVar1 = *(ushort *)(local_188._0_8_ + lVar16);
                uVar15 = (uint)uVar1;
                uVar2 = *(ushort *)(CONCAT71(uStack_197,local_198) + lVar16);
                uVar17 = (uint)uVar2;
                if (uVar1 != uVar2) {
                  if ((uVar2 | uVar1) < 0x80) {
                    uVar15 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                    uVar17 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                    if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_143225d2e;
                  }
                  iVar5 = uVar15 - uVar17;
                  goto LAB_143225d68;
                }
                if (uVar1 == 0) break;
LAB_143225d2e:
                lVar16 = lVar16 + 2;
              }
              iVar5 = 0;
LAB_143225d68:
              bVar18 = iVar5 == 0;
            }
          }
          else {
            bVar18 = local_190 + local_188._8_4_ == 1;
          }
          if (CONCAT71(uStack_197,local_198) != 0) {
            FUN_1400020a8();
          }
          if (!bVar18) {
            FUN_140056680(&local_198,L"Disabled");
            if (local_188._8_4_ == local_190) {
              bVar18 = true;
              if (1 < (int)local_188._8_4_) {
                lVar16 = 0;
                while( true ) {
                  uVar1 = *(ushort *)(local_188._0_8_ + lVar16);
                  uVar15 = (uint)uVar1;
                  uVar2 = *(ushort *)(CONCAT71(uStack_197,local_198) + lVar16);
                  uVar17 = (uint)uVar2;
                  if (uVar1 != uVar2) {
                    if ((uVar2 | uVar1) < 0x80) {
                      uVar15 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                      uVar17 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                      if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_143225dd5;
                    }
                    iVar5 = uVar15 - uVar17;
                    goto LAB_143225e72;
                  }
                  if (uVar1 == 0) break;
LAB_143225dd5:
                  lVar16 = lVar16 + 2;
                }
                iVar5 = 0;
LAB_143225e72:
                bVar18 = iVar5 == 0;
              }
            }
            else {
              bVar18 = local_190 + local_188._8_4_ == 1;
            }
            if (CONCAT71(uStack_197,local_198) != 0) {
              FUN_1400020a8();
            }
            if (bVar18) {
              DAT_14ca96da0 = 0x9b;
              pauVar8 = DAT_14ca96d98;
              if (DAT_14ca96da4 + 0x1fU < 0xa0) {
                if (DAT_14ca96d98 == (undefined1 (*) [16])0x0) {
                  pauVar8 = (undefined1 (*) [16])0x0;
                }
                else {
                  FUN_1446efa72(&DAT_14ca96d98,0,0,4);
                  pauVar8 = DAT_14ca96d98;
                }
                DAT_14ca96da4 = 0xa0;
              }
              if (pauVar8 == (undefined1 (*) [16])0x0) {
                pauVar8 = (undefined1 (*) [16])&DAT_14ca96d48;
              }
              *pauVar8 = (undefined1  [16])0x0;
              *(undefined4 *)pauVar8[1] = 0;
              iVar5 = DAT_14ca96da0 + 0x1f;
              if (-1 < DAT_14ca96da0) {
                iVar5 = DAT_14ca96da0;
              }
              if (DAT_14ca96da0 % 0x20 != 0) {
                pauVar8 = (undefined1 (*) [16])&DAT_14ca96d48;
                if (DAT_14ca96d98 != (undefined1 (*) [16])0x0) {
                  pauVar8 = DAT_14ca96d98;
                }
                bVar10 = -(char)(DAT_14ca96da0 % 0x20);
                *(uint *)(*pauVar8 + (longlong)(iVar5 >> 5) * 4) =
                     (uint)(*(int *)(*pauVar8 + (longlong)(iVar5 >> 5) * 4) << (bVar10 & 0x1f)) >>
                     (bVar10 & 0x1f);
              }
            }
            else {
              local_198 = '\0';
              puVar13 = local_168;
              if (local_160 == 0) {
                puVar13 = &DAT_149dfb77a;
              }
              cVar4 = FUN_141273478(local_148,puVar13,L"bEnableRayTracing",&local_198);
              if ((cVar4 == '\0') || (local_198 != '\0')) goto LAB_143226010;
            }
            DAT_14ca96d40 = 0x9b;
            pauVar8 = DAT_14ca96d38;
            if (DAT_14ca96d44 + 0x1fU < 0xa0) {
              if (DAT_14ca96d38 == (undefined1 (*) [16])0x0) {
                pauVar8 = (undefined1 (*) [16])0x0;
              }
              else {
                FUN_1446efa72(&DAT_14ca96d38,0,0,4);
                pauVar8 = DAT_14ca96d38;
              }
              DAT_14ca96d44 = 0xa0;
            }
            if (pauVar8 == (undefined1 (*) [16])0x0) {
              pauVar8 = (undefined1 (*) [16])&DAT_14ca96ce8;
            }
            *pauVar8 = (undefined1  [16])0x0;
            *(undefined4 *)pauVar8[1] = 0;
            iVar5 = DAT_14ca96d40 + 0x1f;
            if (-1 < DAT_14ca96d40) {
              iVar5 = DAT_14ca96d40;
            }
            if (DAT_14ca96d40 % 0x20 != 0) {
              pauVar8 = DAT_14ca96d38;
              if (DAT_14ca96d38 == (undefined1 (*) [16])0x0) {
                pauVar8 = (undefined1 (*) [16])&DAT_14ca96ce8;
              }
              bVar10 = -(char)(DAT_14ca96d40 % 0x20);
              *(uint *)(*pauVar8 + (longlong)(iVar5 >> 5) * 4) =
                   (uint)(*(int *)(*pauVar8 + (longlong)(iVar5 >> 5) * 4) << (bVar10 & 0x1f)) >>
                   (bVar10 & 0x1f);
            }
          }
        }
LAB_143226010:
        if (local_188._0_8_ != 0) {
          FUN_1400020a8();
        }
      }
      FUN_1409263a6(local_148);
    }
  }
  if ((DAT_14ca96de0 == (longlong *)0x0) ||
     (iVar5 = (**(code **)(*DAT_14ca96de0 + 0xb0))(), iVar5 == 0)) goto LAB_143225a4f;
  iVar5 = (**(code **)(*DAT_14ca96de0 + 0xb0))();
  if (iVar5 == 0) {
LAB_143225993:
    cVar4 = '\0';
  }
  else {
    cVar4 = '\x02';
    if (DAT_14c760e38 != 1) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14ca96e18) && (FUN_144b3d300(&DAT_14ca96e18), DAT_14ca96e18 == -1))
      {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar9 = (longlong *)
                 (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Raytracing.Enable",1);
        if (plVar9 == (longlong *)0x0) {
          DAT_14ca96e10 = 0;
        }
        else {
          DAT_14ca96e10 = (**(code **)(*plVar9 + 0x68))(plVar9);
        }
        _Init_thread_footer(&DAT_14ca96e18);
      }
      lVar16 = DAT_14ca96e10;
      if (DAT_14ca96e10 == 0) goto LAB_143225993;
      iVar5 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (((iVar5 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar5 == 2)) {
        uVar12 = 0;
      }
      else if (iVar5 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        uVar12 = (ulonglong)(DVar6 != DVar7);
      }
      else {
        uVar12 = 1;
      }
      cVar4 = *(int *)(lVar16 + uVar12 * 4) != 0;
    }
  }
  pauVar8 = (undefined1 (*) [16])&DAT_14ca96ce8;
  if (DAT_14ca96d38 != (undefined1 (*) [16])0x0) {
    pauVar8 = DAT_14ca96d38;
  }
  if (((*(uint *)(*pauVar8 + (ulonglong)(DAT_14ca85550 >> 5) * 4) >> (DAT_14ca85550 & 0x1f) & 1) !=
       0) && (DAT_14ca84ef4 != '\0')) {
    DAT_14ca96da8 = cVar4;
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SkinCache.CompileShaders",1);
    if ((DAT_14ca96da8 != '\0') && (iVar5 = (**(code **)(*plVar9 + 0xb0))(plVar9), iVar5 < 1)) {
      DAT_14ca96da8 = '\0';
      FUN_140033559(".\\Runtime/RenderCore/Private/RenderUtils.cpp",0x3de,
                    L"Ray tracing requires skin cache to be enabled. Set r.SkinCache.CompileShaders=1."
                   );
    }
  }
LAB_143225a4f:
  if (local_168 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_158 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1432262e0 FUN_1432262e0 body=240 status=ok
// SIG undefined FUN_1432262e0(void)

void FUN_1432262e0(void)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  DAT_14ca96e20 = &PTR_FUN_14a392ea0;
  FUN_144725486(&DAT_14ca96e20);
  lVar4 = DAT_14ca96e30;
  DAT_14ca96e20 = &PTR_FUN_14a38cff0;
  if (DAT_14ca96e30 != 0) {
    LOCK();
    puVar1 = (uint *)(DAT_14ca96e30 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  DAT_14ca96e20 = &PTR_FUN_14a38cd70;
  DAT_14ca96e2e = 2;
  if ((DAT_14ca96e28 != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  return;
}



// FUNCTION 1432263d0 FUN_1432263d0 body=47 status=ok
// SIG undefined FUN_1432263d0(void)

void FUN_1432263d0(void)

{
  DAT_14ca96e38 = &PTR_FUN_14a392f00;
  FUN_144725486(&DAT_14ca96e38);
  FUN_14003f39a(&DAT_14ca96e38);
  return;
}



// FUNCTION 1432263ff FUN_1432263ff body=240 status=ok
// SIG undefined FUN_1432263ff(void)

void FUN_1432263ff(void)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  DAT_14ca96e50 = &PTR_FUN_14a392f60;
  FUN_144725486(&DAT_14ca96e50);
  lVar4 = DAT_14ca96e60;
  DAT_14ca96e50 = &PTR_FUN_14a38cff0;
  if (DAT_14ca96e60 != 0) {
    LOCK();
    puVar1 = (uint *)(DAT_14ca96e60 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  DAT_14ca96e50 = &PTR_FUN_14a38cd70;
  DAT_14ca96e5e = 2;
  if ((DAT_14ca96e58 != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  return;
}



// FUNCTION 143226555 FUN_143226555 body=35 status=ok
// SIG undefined FUN_143226555(void)

undefined8 FUN_143226555(ushort param_1)

{
  return CONCAT71((int7)((ulonglong)param_1 * 0x3c >> 8),
                  DAT_14ca96888 != 0 && 2 < (int)(&DAT_14ca814b8)[(ulonglong)param_1 * 0xf]);
}



// FUNCTION 143226589 FUN_143226589 body=223 status=ok
// SIG undefined FUN_143226589(void)

bool FUN_143226589(int param_1)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong *plVar4;
  
  if (param_1 == 1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca970b0) && (FUN_144b3d300(&DAT_14ca970b0), DAT_14ca970b0 == -1)) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar4 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.Mobile.Forward.RenderRectLightsAsSpotLights",1);
      if (plVar4 == (longlong *)0x0) {
        DAT_14ca970a8 = 0;
      }
      else {
        DAT_14ca970a8 = (**(code **)(*plVar4 + 0x68))(plVar4);
      }
      _Init_thread_footer(&DAT_14ca970b0);
    }
    lVar1 = DAT_14ca970a8;
    if (DAT_14ca970a8 != 0) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60) == 0x40000002) {
        uVar3 = 0;
      }
      else {
        bVar2 = FUN_144a61b4f();
        uVar3 = (ulonglong)(bVar2 ^ 1);
      }
      return *(int *)(lVar1 + uVar3 * 4) != 0;
    }
  }
  return false;
}



// FUNCTION 143226668 FUN_143226668 body=69 status=ok
// SIG undefined FUN_143226668(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143226668(void)

{
  _DAT_14ca970b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432266aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca970c0,1);
  return;
}



// FUNCTION 1432266ad FUN_1432266ad body=69 status=ok
// SIG undefined FUN_1432266ad(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432266ad(void)

{
  _DAT_14ca970d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432266ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca970d8,1);
  return;
}



// FUNCTION 1432266f2 FUN_1432266f2 body=69 status=ok
// SIG undefined FUN_1432266f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432266f2(void)

{
  _DAT_14ca970e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143226734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca970f0,1);
  return;
}



// FUNCTION 143226737 FUN_143226737 body=69 status=ok
// SIG undefined FUN_143226737(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143226737(void)

{
  _DAT_14ca97100 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143226779. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca97108,1);
  return;
}



// FUNCTION 14322677c FUN_14322677c body=69 status=ok
// SIG undefined FUN_14322677c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14322677c(void)

{
  _DAT_14ca97118 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432267be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca97120,1);
  return;
}



// FUNCTION 1432267c1 FUN_1432267c1 body=69 status=ok
// SIG undefined FUN_1432267c1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432267c1(void)

{
  _DAT_14ca97130 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143226803. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca97138,1);
  return;
}



// FUNCTION 143226806 FUN_143226806 body=69 status=ok
// SIG undefined FUN_143226806(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143226806(void)

{
  _DAT_14ca97148 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143226848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca97150,1);
  return;
}



// FUNCTION 14322684b FUN_14322684b body=105 status=ok
// SIG undefined FUN_14322684b(void)

undefined4 FUN_14322684b(void)

{
  int iVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  
  lVar2 = DAT_14ca970c8;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar5 = 0;
  }
  else if (iVar1 == 1) {
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    uVar5 = (ulonglong)(DVar3 != DVar4);
  }
  else {
    uVar5 = 1;
  }
  return *(undefined4 *)(lVar2 + uVar5 * 4);
}



// FUNCTION 1432268b4 FUN_1432268b4 body=69 status=ok
// SIG undefined FUN_1432268b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432268b4(void)

{
  _DAT_14ca97160 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432268f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca97168,1);
  return;
}



// FUNCTION 1432268f9 FUN_1432268f9 body=69 status=ok
// SIG undefined FUN_1432268f9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432268f9(void)

{
  _DAT_14ca97178 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014322693b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca97180,1);
  return;
}



// FUNCTION 14322693e FUN_14322693e body=69 status=ok
// SIG undefined FUN_14322693e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14322693e(void)

{
  _DAT_14ca97190 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143226980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca97198,1);
  return;
}



// FUNCTION 143226983 FUN_143226983 body=69 status=ok
// SIG undefined FUN_143226983(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143226983(void)

{
  _DAT_14ca971a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432269c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca971b0,1);
  return;
}



// FUNCTION 1432269c8 FUN_1432269c8 body=69 status=ok
// SIG undefined FUN_1432269c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432269c8(void)

{
  _DAT_14ca971c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143226a0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca971c8,1);
  return;
}



// FUNCTION 143226a0d FUN_143226a0d body=69 status=ok
// SIG undefined FUN_143226a0d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143226a0d(void)

{
  _DAT_14ca971d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143226a4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca971e0,1);
  return;
}



// FUNCTION 143226a52 FUN_143226a52 body=69 status=ok
// SIG undefined FUN_143226a52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143226a52(void)

{
  _DAT_14ca971f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143226a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca971f8,1);
  return;
}



// FUNCTION 143226a97 FUN_143226a97 body=69 status=ok
// SIG undefined FUN_143226a97(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143226a97(void)

{
  _DAT_14ca97208 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143226ad9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca97210,1);
  return;
}



// FUNCTION 143226adc FUN_143226adc body=69 status=ok
// SIG undefined FUN_143226adc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143226adc(void)

{
  _DAT_14ca97220 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143226b1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca97228,1);
  return;
}



// FUNCTION 143226b21 FUN_143226b21 body=69 status=ok
// SIG undefined FUN_143226b21(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143226b21(void)

{
  _DAT_14ca97238 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143226b63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca97240,1);
  return;
}



// FUNCTION 143226b66 FUN_143226b66 body=69 status=ok
// SIG undefined FUN_143226b66(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143226b66(void)

{
  _DAT_14ca97250 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143226ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca97258,1);
  return;
}



// FUNCTION 143226bab FUN_143226bab body=69 status=ok
// SIG undefined FUN_143226bab(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143226bab(void)

{
  _DAT_14ca97268 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143226bed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca97270,1);
  return;
}



// FUNCTION 143226bf0 FUN_143226bf0 body=69 status=ok
// SIG undefined FUN_143226bf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143226bf0(void)

{
  _DAT_14ca97280 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143226c32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca97288,1);
  return;
}



// FUNCTION 143226c35 FUN_143226c35 body=69 status=ok
// SIG undefined FUN_143226c35(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143226c35(void)

{
  _DAT_14ca97298 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143226c77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca972a0,1);
  return;
}



// FUNCTION 143226c7a FUN_143226c7a body=69 status=ok
// SIG undefined FUN_143226c7a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143226c7a(void)

{
  _DAT_14ca972b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143226cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca972b8,1);
  return;
}



// FUNCTION 143226cbf FUN_143226cbf body=69 status=ok
// SIG undefined FUN_143226cbf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143226cbf(void)

{
  _DAT_14ca972c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143226d01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca972d0,1);
  return;
}



// FUNCTION 143226d48 FUN_143226d48 body=69 status=ok
// SIG undefined FUN_143226d48(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143226d48(void)

{
  _DAT_14ca97380 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143226d8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca97388,1);
  return;
}



// FUNCTION 143226d8d FUN_143226d8d body=69 status=ok
// SIG undefined FUN_143226d8d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143226d8d(void)

{
  _DAT_14ca97398 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143226dcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca973a0,1);
  return;
}



// FUNCTION 143226dd2 FUN_143226dd2 body=69 status=ok
// SIG undefined FUN_143226dd2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143226dd2(void)

{
  _DAT_14ca973c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143226e14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca973c8,1);
  return;
}



// FUNCTION 143226e8f FUN_143226e8f body=69 status=ok
// SIG undefined FUN_143226e8f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143226e8f(void)

{
  _DAT_14ca984a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143226ed1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca984b0,1);
  return;
}



// FUNCTION 143226ed4 FUN_143226ed4 body=69 status=ok
// SIG undefined FUN_143226ed4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143226ed4(void)

{
  _DAT_14ca984c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143226f16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca984c8,1);
  return;
}



// FUNCTION 143226f19 FUN_143226f19 body=69 status=ok
// SIG undefined FUN_143226f19(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143226f19(void)

{
  _DAT_14ca984d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143226f5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca984e0,1);
  return;
}



// FUNCTION 143226f5e FUN_143226f5e body=69 status=ok
// SIG undefined FUN_143226f5e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143226f5e(void)

{
  _DAT_14ca984f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143226fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca984f8,1);
  return;
}



// FUNCTION 143226fa3 FUN_143226fa3 body=69 status=ok
// SIG undefined FUN_143226fa3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143226fa3(void)

{
  _DAT_14ca98508 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143226fe5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca98510,1);
  return;
}



// FUNCTION 143226fe8 FUN_143226fe8 body=41 status=ok
// SIG undefined FUN_143226fe8(void)

void FUN_143226fe8(void)

{
  DAT_14ca98590 = 0;
  if (DAT_14ca98588 != 0) {
    FUN_1400020a8();
  }
  FUN_145d6b870();
  return;
}



// FUNCTION 143227011 FUN_143227011 body=41 status=ok
// SIG undefined FUN_143227011(void)

void FUN_143227011(void)

{
  DAT_14ca985e8 = 0;
  if (DAT_14ca985e0 != 0) {
    FUN_1400020a8();
  }
  FUN_145d629d4();
  return;
}



// FUNCTION 14322703a FUN_14322703a body=36 status=ok
// SIG undefined FUN_14322703a(void)

undefined8 FUN_14322703a(longlong param_1,ushort param_2)

{
  ulonglong uVar1;
  
  if (*(char *)(param_1 + 0xac) == '\x01') {
    uVar1 = CONCAT71((int7)((ulonglong)param_2 * 0x3c >> 8),
                     *(undefined1 *)((longlong)&DAT_14ca814d8 + (ulonglong)param_2 * 0x3c + 1)) &
            0xffffffffffffff08;
    return CONCAT71((int7)(uVar1 >> 8),(byte)uVar1 >> 3);
  }
  return 0;
}



// FUNCTION 14322705e FUN_14322705e body=69 status=ok
// SIG undefined FUN_14322705e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14322705e(void)

{
  _DAT_14ca98798 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432270a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca987a0,1);
  return;
}



// FUNCTION 1432270bb FUN_1432270bb body=69 status=ok
// SIG undefined FUN_1432270bb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432270bb(void)

{
  _DAT_14ca98a00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432270fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca98a08,1);
  return;
}



// FUNCTION 143227100 FUN_143227100 body=69 status=ok
// SIG undefined FUN_143227100(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143227100(void)

{
  _DAT_14ca98a18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143227142. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca98a20,1);
  return;
}



// FUNCTION 143227145 FUN_143227145 body=69 status=ok
// SIG undefined FUN_143227145(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143227145(void)

{
  _DAT_14ca98a30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143227187. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca98a38,1);
  return;
}



// FUNCTION 14322718a FUN_14322718a body=69 status=ok
// SIG undefined FUN_14322718a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14322718a(void)

{
  _DAT_14ca98a40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432271cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca98a48,1);
  return;
}



// FUNCTION 1432271cf FUN_1432271cf body=69 status=ok
// SIG undefined FUN_1432271cf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432271cf(void)

{
  _DAT_14ca98a50 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143227211. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca98a58,1);
  return;
}



// FUNCTION 143227214 FUN_143227214 body=69 status=ok
// SIG undefined FUN_143227214(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143227214(void)

{
  _DAT_14ca98a60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143227256. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca98a68,1);
  return;
}



// FUNCTION 143227259 FUN_143227259 body=126 status=ok
// SIG undefined FUN_143227259(void)

undefined8 FUN_143227259(undefined8 param_1)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400b22c2(&local_28,&DAT_14c8c27d7);
  puVar1 = local_28;
  if (local_20 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140002266(param_1,
                L"The CPU (%s) may be unstable; for details see http://www.radgametools.com/oodleintel.htm"
                ,puVar1);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1432272d8 FUN_1432272d8 body=156 status=ok
// SIG undefined FUN_1432272d8(void)

longlong FUN_1432272d8(undefined4 param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4,
                      undefined8 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_147433fac(lVar1,param_1,param_4,param_5);
  FUN_147433cb2(lVar1 + 0x50,param_2);
  FUN_1474340a2(lVar1 + 0xf0,*(undefined4 *)(lVar1 + 0x88),1);
  uVar2 = (**(code **)(*param_2 + 0x28))(param_2);
  *(undefined8 *)(lVar1 + 0x40) = uVar2;
  if (*(int *)(param_3 + 1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*param_3;
  }
  uVar2 = FUN_142749e5e(puVar3,0);
  *(undefined8 *)(lVar1 + 0x48) = uVar2;
  return lVar1;
}



// FUNCTION 143227374 FUN_143227374 body=121 status=ok
// SIG undefined FUN_143227374(void)

void FUN_143227374(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a391740;
  FUN_1432273ee();
  FUN_14743bd8c(param_1[0x1e],*(undefined4 *)(param_1 + 0x1f));
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_14743412a(param_1 + 10);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_14a392560;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a37f858;
  return;
}



// FUNCTION 1432273ee FUN_1432273ee body=116 status=ok
// SIG undefined FUN_1432273ee(void)

void FUN_1432273ee(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  puVar1 = *(undefined8 **)(param_1 + 0x48);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x88);
  if (0 < iVar3) {
    lVar5 = 8;
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0xf0);
      if (*(longlong *)(lVar2 + lVar5) != 0) {
        FUN_1400020a8();
        *(undefined8 *)(lVar2 + lVar5) = 0;
        iVar3 = *(int *)(param_1 + 0x88);
      }
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 0x18;
    } while (lVar4 < iVar3);
  }
  return;
}



// FUNCTION 143227462 FUN_143227462 body=1098 status=ok
// SIG undefined FUN_143227462(void)

undefined8 FUN_143227462(longlong param_1,int param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  longlong lVar13;
  uint *puVar14;
  undefined1 *puVar15;
  undefined8 *puVar16;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  uint local_90;
  longlong *local_80;
  undefined1 local_71;
  undefined1 local_70 [32];
  undefined1 *local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x100));
  lVar13 = (longlong)param_2;
  plVar4 = (longlong *)(*(longlong *)(param_1 + 0xf0) + lVar13 * 0x18);
  uVar12 = *(uint *)((longlong)plVar4 + 0x14);
  *(uint *)((longlong)plVar4 + 0x14) = uVar12 & 0x80000000 | uVar12 + 1 & 0x7fffffff;
  if ((uVar12 & 0x7fffffff) == 0) {
    lVar7 = *(longlong *)(param_1 + 0x80);
    lVar8 = FUN_14001cc68(*(undefined4 *)(lVar7 + 8 + lVar13 * 0x18),0);
    plVar4[1] = lVar8;
    *(undefined4 *)(plVar4 + 2) = DAT_14c75b13c;
    local_90 = (uint)(DAT_14ca98a10 != 0) << 9 | DAT_14c760e3c;
    local_50 = (undefined1 *)0x0;
    local_48 = 0x400000000;
    local_98 = (ulonglong)*(uint *)(lVar7 + 8 + lVar13 * 0x18);
    (**(code **)(**(longlong **)(param_1 + 0x48) + 8))
              (*(longlong **)(param_1 + 0x48),&local_80,local_70,
               *(longlong *)(lVar7 + lVar13 * 0x18) + *(longlong *)(param_1 + 0x40));
    puVar3 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar10 = (uint *)*puVar3;
    if (puVar10 != (uint *)0x0) goto LAB_14322765e;
    while( true ) {
      uVar12 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar12 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar12 | 1;
        __tlregdtor(&LAB_14322aa43);
      }
      lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar9 = *(undefined4 **)(lVar13 + 0x310);
      *(undefined8 *)(lVar13 + 0x310) = 0;
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar9 = 0xffffffff;
      *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
      puVar9[0x12] = 0;
      *puVar3 = puVar9;
      FUN_140217a48(puVar3);
      puVar10 = (uint *)*puVar3;
LAB_14322765e:
      puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar14 = (uint *)(puVar16 + 0x18);
      uVar12 = puVar10[0x12];
      if (puVar14 <= puVar10 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
        LOCK();
        uVar5 = *puVar10;
        *puVar10 = *puVar10 + uVar12 + 1;
        UNLOCK();
        if ((uVar5 ^ uVar12) != 0xffffffff) break;
        puVar10 = (uint *)*puVar3;
        *puVar10 = 0xffffffff;
        *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
        puVar10[0x12] = 0;
        *puVar3 = puVar10;
        puVar16 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
        puVar14 = (uint *)(puVar16 + 0x18);
        uVar12 = 0;
        if (puVar14 <= puVar10 + 0x4000) {
          uVar12 = 1;
          goto LAB_1432276e0;
        }
      }
    }
    uVar12 = uVar12 + 1;
LAB_1432276e0:
    *(uint **)(puVar10 + 0x10) = puVar14;
    puVar10[0x12] = uVar12;
    FUN_1447247dc(puVar16,local_70);
    *puVar16 = &PTR_FUN_14a392fc8;
    puVar16[0x15] = param_1;
    puVar16[0x16] = local_80;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_80 + 1) = (int)local_80[1] + 1;
      UNLOCK();
    }
    *(int *)(puVar16 + 0x17) = param_2;
    if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
    }
    puVar16[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar16[9] = puVar16;
    puVar16[10] = puVar16;
    lVar13 = *(longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x2b8);
    if (lVar13 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined8 *)(lVar13 + 0x30);
    }
    puVar16[0xf] = uVar11;
    puVar16[0x10] = 0xc80000527800b400;
    *(undefined4 *)((longlong)puVar16 + 0x1c) = 0;
    if (puVar16 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
      UNLOCK();
    }
    puVar3 = (undefined8 *)*plVar4;
    *plVar4 = (longlong)puVar16;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    local_71 = 1;
    FUN_1447439e4(puVar16);
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_80 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)(*local_80 + 0x28))(local_80,1);
      }
    }
    puVar15 = local_70;
    if (local_50 != (undefined1 *)0x0) {
      puVar15 = local_50;
    }
    FUN_144717c65(puVar15,local_48 & 0xffffffff);
    if (local_50 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (*plVar4 != 0) {
    iVar6 = *(int *)(param_3 + 0x28);
    *(uint *)(param_3 + 0x28) = iVar6 + 1U;
    if (*(uint *)(param_3 + 0x2c) < iVar6 + 1U) {
      FUN_14476a5c8(param_3,iVar6);
    }
    lVar13 = *(longlong *)(param_3 + 0x20);
    if (*(longlong *)(param_3 + 0x20) == 0) {
      lVar13 = param_3;
    }
    lVar7 = *plVar4;
    *(longlong *)(lVar13 + (longlong)iVar6 * 8) = lVar7;
    if (lVar7 != 0) {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x100));
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432278ae FUN_1432278ae body=1285 status=ok
// SIG undefined FUN_1432278ae(void)

undefined8 FUN_1432278ae(longlong param_1,int param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  longlong lVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint uVar14;
  longlong *plVar15;
  longlong *plVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  int *piVar19;
  undefined1 auStack_e8 [32];
  ulonglong local_c8;
  uint local_c0;
  undefined4 local_b8;
  uint local_b4;
  undefined8 *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  PSRWLOCK local_98;
  longlong local_90;
  longlong *local_88;
  undefined1 local_79;
  undefined1 local_78 [32];
  undefined1 *local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar8 = *(longlong *)(param_1 + 0x70);
  local_b4 = DAT_14c760e3c;
  local_b8 = DAT_14c75b13c;
  local_98 = (PSRWLOCK)(param_1 + 0x100);
  AcquireSRWLockExclusive(local_98);
  if (*(int *)(lVar8 + 4 + (longlong)param_2 * 0x10) != 0) {
    piVar19 = (int *)(lVar8 + (longlong)param_2 * 0x10);
    local_90 = *(longlong *)(param_1 + 0xa0);
    lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar2 = (undefined8 *)(lVar8 + 0x308);
    local_b0 = (undefined8 *)(lVar8 + 0x310);
    local_a0 = (longlong *)(lVar8 + 0x2b8);
    local_a8 = 0xc80000527800b400;
    uVar14 = 0;
    do {
      iVar4 = *(int *)(local_90 + (longlong)(int)(*piVar19 + uVar14) * 4);
      lVar8 = (longlong)iVar4 * 0x18;
      plVar15 = (longlong *)(*(longlong *)(param_1 + 0xf0) + lVar8);
      plVar16 = (longlong *)(lVar8 + *(longlong *)(param_1 + 0x80));
      if (((DAT_14ca96da8 == '\0') && (cVar7 = FUN_143227db4(), cVar7 == '\0')) &&
         ((byte)((char)plVar16[2] - 6U) < 4)) {
        *(byte *)((longlong)plVar15 + 0x17) = *(byte *)((longlong)plVar15 + 0x17) | 0x80;
      }
      else {
        uVar12 = *(uint *)((longlong)plVar15 + 0x14);
        *(uint *)((longlong)plVar15 + 0x14) = uVar12 & 0x80000000 | uVar12 + 1 & 0x7fffffff;
        if ((uVar12 & 0x7fffffff) == 0) {
          lVar8 = FUN_14001cc68((int)plVar16[1],0);
          plVar15[1] = lVar8;
          *(undefined4 *)(plVar15 + 2) = local_b8;
          local_58 = (undefined1 *)0x0;
          local_50 = 0x400000000;
          local_c0 = (uint)(DAT_14ca98a10 != 0) << 9 | local_b4;
          local_c8 = (ulonglong)*(uint *)(plVar16 + 1);
          (**(code **)(**(longlong **)(param_1 + 0x48) + 8))
                    (*(longlong **)(param_1 + 0x48),&local_88,local_78,
                     *plVar16 + *(longlong *)(param_1 + 0x40));
          puVar10 = (uint *)*puVar2;
          if (puVar10 != (uint *)0x0) goto LAB_143227b2d;
          do {
            puVar18 = local_b0;
            uVar12 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar12 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar12 | 1;
              __tlregdtor(&LAB_14322aa43);
            }
            puVar9 = (undefined4 *)*puVar18;
            *puVar18 = 0;
            if (puVar9 == (undefined4 *)0x0) {
              puVar9 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar9 = 0xffffffff;
            *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
            puVar9[0x12] = 0;
            *puVar2 = puVar9;
            FUN_140217a48(puVar2);
            puVar10 = (uint *)*puVar2;
LAB_143227b2d:
            uVar17 = *(longlong *)(puVar10 + 0x10) + 7;
            uVar12 = puVar10[0x12];
            while( true ) {
              puVar18 = (undefined8 *)(uVar17 & 0xfffffffffffffff8);
              if (puVar18 + 0x18 <= puVar10 + 0x4000) {
                *(undefined8 **)(puVar10 + 0x10) = puVar18 + 0x18;
                puVar10[0x12] = uVar12 + 1;
                FUN_1447247dc(puVar18,local_78);
                *puVar18 = &PTR_FUN_14a392fc8;
                puVar18[0x15] = param_1;
                puVar18[0x16] = local_88;
                if (local_88 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_88 + 1) = (int)local_88[1] + 1;
                  UNLOCK();
                }
                *(int *)(puVar18 + 0x17) = iVar4;
                if (*(code **)(puVar18[0xe] + 0x18) != FUN_144713626) {
                  (**(code **)(puVar18[0xe] + 0x18))(puVar18 + 0xe,puVar18 + 9);
                }
                puVar18[0xe] = LowLevelTasks::
                               TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                               TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                               ::vftable;
                puVar18[9] = puVar18;
                puVar18[10] = puVar18;
                if (*local_a0 == 0) {
                  uVar11 = 0;
                }
                else {
                  uVar11 = *(undefined8 *)(*local_a0 + 0x30);
                }
                puVar18[0xf] = uVar11;
                puVar18[0x10] = local_a8;
                *(undefined4 *)((longlong)puVar18 + 0x1c) = 0;
                if (puVar18 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
                  UNLOCK();
                }
                puVar6 = (undefined8 *)*plVar15;
                *plVar15 = (longlong)puVar18;
                if (puVar6 != (undefined8 *)0x0) {
                  LOCK();
                  piVar1 = (int *)(puVar6 + 1);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)*puVar6)(puVar6,1);
                  }
                }
                local_79 = 1;
                FUN_1447439e4(puVar18,&local_79);
                iVar4 = *(int *)(param_3 + 0x28);
                *(uint *)(param_3 + 0x28) = iVar4 + 1U;
                if (*(uint *)(param_3 + 0x2c) < iVar4 + 1U) {
                  FUN_14476a5c8(param_3,iVar4);
                }
                lVar8 = *(longlong *)(param_3 + 0x20);
                if (*(longlong *)(param_3 + 0x20) == 0) {
                  lVar8 = param_3;
                }
                lVar5 = *plVar15;
                *(longlong *)(lVar8 + (longlong)iVar4 * 8) = lVar5;
                if (lVar5 != 0) {
                  LOCK();
                  *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
                  UNLOCK();
                }
                if (local_88 != (longlong *)0x0) {
                  LOCK();
                  plVar15 = local_88 + 1;
                  *(int *)plVar15 = (int)*plVar15 + -1;
                  UNLOCK();
                  if ((int)*plVar15 == 0) {
                    (**(code **)(*local_88 + 0x28))(local_88,1);
                  }
                }
                puVar13 = local_58;
                if (local_58 == (undefined1 *)0x0) {
                  puVar13 = local_78;
                }
                FUN_144717c65(puVar13,local_50 & 0xffffffff);
                if (local_58 != (undefined1 *)0x0) {
                  FUN_1400020a8();
                }
                goto LAB_143227a36;
              }
              *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
              LOCK();
              uVar3 = *puVar10;
              *puVar10 = *puVar10 + uVar12 + 1;
              UNLOCK();
              if ((uVar3 ^ uVar12) != 0xffffffff) break;
              puVar10 = (uint *)*puVar2;
              *puVar10 = 0xffffffff;
              *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
              puVar10[0x12] = 0;
              *puVar2 = puVar10;
              uVar17 = (longlong)puVar10 + 0x5f;
              uVar12 = 0;
            }
          } while( true );
        }
        if (*plVar15 != 0) {
          iVar4 = *(int *)(param_3 + 0x28);
          *(uint *)(param_3 + 0x28) = iVar4 + 1U;
          if (*(uint *)(param_3 + 0x2c) < iVar4 + 1U) {
            FUN_14476a5c8(param_3,iVar4);
          }
          lVar8 = *(longlong *)(param_3 + 0x20);
          if (*(longlong *)(param_3 + 0x20) == 0) {
            lVar8 = param_3;
          }
          lVar5 = *plVar15;
          *(longlong *)(lVar8 + (longlong)iVar4 * 8) = lVar5;
          if (lVar5 != 0) {
            LOCK();
            *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
            UNLOCK();
          }
        }
      }
LAB_143227a36:
      uVar14 = uVar14 + 1;
    } while (uVar14 < (uint)piVar19[1]);
  }
  ReleaseSRWLockExclusive(local_98);
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143227db4 FUN_143227db4 body=157 status=ok
// SIG undefined FUN_143227db4(void)

bool FUN_143227db4(void)

{
  int iVar1;
  bool bVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca99fa0) {
    FUN_144b3d300(&DAT_14ca99fa0);
    if (DAT_14ca99fa0 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14ca99f98 =
           (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.CreateShadersOnLoad",1)
      ;
      _Init_thread_footer(&DAT_14ca99fa0);
    }
  }
  if (DAT_14ca99f98 == (longlong *)0x0) {
    bVar2 = false;
  }
  else {
    iVar1 = (**(code **)(*DAT_14ca99f98 + 0xb0))();
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}



// FUNCTION 143227e52 FUN_143227e52 body=167 status=ok
// SIG undefined FUN_143227e52(void)

void FUN_143227e52(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  
  if (*(int *)(*(longlong *)(param_1 + 0xf0) + 0x14 + (longlong)param_2 * 0x18) < 0) {
    return;
  }
  plVar2 = (longlong *)(*(longlong *)(param_1 + 0xf0) + (longlong)param_2 * 0x18);
  FUN_1474342b0(param_1,plVar2);
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x100));
  puVar4 = (undefined8 *)*plVar2;
  if (puVar4 != (undefined8 *)0x0) {
    *plVar2 = 0;
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  uVar3 = *(uint *)((longlong)plVar2 + 0x14);
  *(uint *)((longlong)plVar2 + 0x14) = uVar3 & 0x80000000 | uVar3 - 1 & 0x7fffffff;
  if ((uVar3 & 0x7fffffff) == 1) {
    FUN_1400020a8(plVar2[1]);
    plVar2[1] = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000143227ef2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x100));
  return;
}



// FUNCTION 143227efa FUN_143227efa body=1136 status=ok
// SIG undefined FUN_143227efa(void)

longlong * FUN_143227efa(longlong *param_1,longlong *param_2,int param_3)

{
  ulonglong *puVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  LARGE_INTEGER LVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  DWORD DVar9;
  char cVar10;
  DWORD dwTlsIndex;
  DWORD DVar11;
  LPVOID lpTlsValue;
  LARGE_INTEGER *pLVar12;
  LARGE_INTEGER LVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined4 *puVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStack_e8 [32];
  byte local_c8;
  int local_b4;
  longlong *local_b0;
  longlong local_a8;
  ulonglong *local_a0;
  ulonglong local_98;
  ulonglong local_90;
  char local_88;
  ulonglong local_80;
  LARGE_INTEGER local_78;
  undefined4 local_70;
  LARGE_INTEGER *local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *param_2 = 0;
  dwTlsIndex = DAT_14c7585d0;
  local_b0 = param_2;
  if (DAT_14c7585d0 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar11 = 0xffffffff;
    LOCK();
    bVar18 = DAT_14c7585d0 != 0xffffffff;
    DVar9 = dwTlsIndex;
    if (bVar18) {
      DVar11 = DAT_14c7585d0;
      DVar9 = DAT_14c7585d0;
    }
    DAT_14c7585d0 = DVar9;
    UNLOCK();
    if (bVar18) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar11;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_140036a08(&local_78);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  puVar1 = (ulonglong *)((longlong)lpTlsValue + 0x10);
  local_98 = *(ulonglong *)((longlong)lpTlsValue + 0x10);
  local_90 = *(ulonglong *)((longlong)lpTlsValue + 0x20);
  local_88 = '\0';
  local_80 = *(ulonglong *)((longlong)lpTlsValue + 0x28);
  *(ulonglong ***)((longlong)lpTlsValue + 0x28) = &local_a0;
  *(int *)((longlong)lpTlsValue + 0x30) = *(int *)((longlong)lpTlsValue + 0x30) + 1;
  lVar17 = (longlong)param_3 * 0x18;
  lVar14 = param_1[0x10] + lVar17;
  lVar17 = lVar17 + param_1[0x1e];
  local_58 = (LARGE_INTEGER *)0x0;
  local_50 = 0x400000000;
  local_b4 = param_3;
  local_a0 = puVar1;
  (**(code **)(*param_1 + 0x60))(param_1,param_3,&local_78);
  pLVar12 = local_58;
  if (local_58 == (LARGE_INTEGER *)0x0) {
    pLVar12 = &local_78;
  }
  FUN_144717c65(pLVar12,local_50 & 0xffffffff);
  if (local_58 != (LARGE_INTEGER *)0x0) {
    FUN_1400020a8();
  }
  QueryPerformanceCounter(&local_78);
  cVar10 = FUN_1474342b0(param_1,lVar17);
  if (cVar10 != '\0') {
    QueryPerformanceCounter(&local_78);
  }
  LVar5 = (LARGE_INTEGER)((LARGE_INTEGER *)(lVar17 + 8))->QuadPart;
  uVar3 = *(uint *)(lVar14 + 0xc);
  LVar13 = LVar5;
  if (uVar3 != *(uint *)(lVar14 + 8)) {
    LVar13.QuadPart = *(longlong *)((longlong)lpTlsValue + 0x10) + 0xfU & 0xfffffffffffffff0;
    uVar15 = (ulonglong)uVar3 + LVar13.QuadPart;
    if (*(ulonglong *)((longlong)lpTlsValue + 0x18) < uVar15) {
      FUN_140023dd8(puVar1,uVar3 + 0x10);
      LVar13.QuadPart = *puVar1 + 0xf & 0xfffffffffffffff0;
      uVar15 = (ulonglong)uVar3 + LVar13.QuadPart;
    }
    *puVar1 = uVar15;
    FUN_147433bd8(LVar13.QuadPart,*(undefined4 *)(lVar14 + 0xc),LVar5.QuadPart,
                  *(undefined4 *)(lVar14 + 8));
  }
  plVar8 = local_b0;
  if ((DAT_14c86a9fc == 0) &&
     (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 1)) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  puVar16 = (undefined4 *)((longlong)param_3 * 0x14 + param_1[0xc]);
  bVar2 = *(byte *)(lVar14 + 0x10);
  if (0xb < bVar2) {
LAB_1432280a5:
    lVar17 = 0;
    goto LAB_1432281f7;
  }
  uVar4 = *(undefined4 *)(lVar14 + 0xc);
  switch(bVar2) {
  case 0:
    local_78 = LVar13;
    local_70 = uVar4;
    (**(code **)(*DAT_14ca83900 + 0x78))(DAT_14ca83900,&local_a8,&local_78,puVar16);
    break;
  case 1:
    local_78 = LVar13;
    local_70 = uVar4;
    (**(code **)(*DAT_14ca83900 + 0x88))(DAT_14ca83900,&local_a8,&local_78,puVar16);
    break;
  case 2:
    local_78 = LVar13;
    local_70 = uVar4;
    (**(code **)(*DAT_14ca83900 + 0x90))(DAT_14ca83900,&local_a8,&local_78,puVar16);
    break;
  case 3:
    local_78 = LVar13;
    local_70 = uVar4;
    (**(code **)(*DAT_14ca83900 + 0x70))(DAT_14ca83900,&local_a8,&local_78,puVar16);
    break;
  case 4:
    local_78 = LVar13;
    local_70 = uVar4;
    (**(code **)(*DAT_14ca83900 + 0x80))(DAT_14ca83900,&local_a8,&local_78,puVar16);
    break;
  case 5:
    local_78 = LVar13;
    local_70 = uVar4;
    (**(code **)(*DAT_14ca83900 + 0xa0))(DAT_14ca83900,&local_a8,&local_78,puVar16);
    break;
  default:
    if ((DAT_14ca84ef4 != '\x01') || (DAT_14ca84ef5 != '\x01')) goto LAB_1432280a5;
    local_c8 = bVar2;
    local_78 = LVar13;
    local_70 = uVar4;
    (**(code **)(*DAT_14ca83900 + 0x4e8))(DAT_14ca83900,&local_a8,&local_78,puVar16);
    break;
  case 10:
    lVar17 = *DAT_14ca83900;
    local_c8 = 10;
    goto LAB_1432281e0;
  case 0xb:
    lVar17 = *DAT_14ca83900;
    local_c8 = 0xb;
LAB_1432281e0:
    local_78 = LVar13;
    local_70 = uVar4;
    (**(code **)(lVar17 + 0xa8))(DAT_14ca83900,&local_a8,&local_78,puVar16);
  }
  *plVar8 = local_a8;
  lVar17 = local_a8;
LAB_1432281f7:
  (**(code **)(*param_1 + 0x78))(param_1,local_b4);
  if (lVar17 != 0) {
    *(undefined4 *)(lVar17 + 0x98) = puVar16[4];
    uVar4 = puVar16[1];
    uVar6 = puVar16[2];
    uVar7 = puVar16[3];
    *(undefined4 *)(lVar17 + 0x88) = *puVar16;
    *(undefined4 *)(lVar17 + 0x8c) = uVar4;
    *(undefined4 *)(lVar17 + 0x90) = uVar6;
    *(undefined4 *)(lVar17 + 0x94) = uVar7;
  }
  if (local_88 == '\0') {
    local_88 = '\x01';
    *(int *)(local_a0 + 4) = (int)local_a0[4] + -1;
    if (local_90 != local_a0[2]) {
      FUN_14004673c();
    }
    *local_a0 = local_98;
    local_a0[3] = local_80;
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar8;
}



// FUNCTION 14322836c FUN_14322836c body=1946 status=ok
// SIG undefined FUN_14322836c(void)

undefined *** FUN_14322836c(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  ulonglong *puVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  undefined ***_Dst;
  undefined **ppuVar8;
  undefined **ppuVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  uint uVar16;
  uint uVar17;
  undefined2 *puVar18;
  undefined2 *puVar19;
  longlong lVar20;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined **local_168;
  int local_160;
  undefined4 uStack_15c;
  byte local_140;
  byte local_13e;
  longlong *local_110;
  longlong local_f0;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  int local_60 [2];
  longlong local_58;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar20 = (ulonglong)(param_1 & 0xffff) * 0x3c;
  local_68 = *(undefined8 *)(&DAT_14ca814a0 + lVar20);
  FUN_1400021e4(&local_68,&local_98);
  local_80 = *(undefined8 *)(&DAT_14ca814bc + lVar20);
  FUN_1400021e4();
  iVar12 = (int)local_70;
  iVar6 = ((int)local_70 == 0) + 1;
  local_58 = local_78;
  local_78 = 0;
  local_50 = (int)local_70;
  iVar3 = local_70._4_4_;
  local_4c = local_70._4_4_;
  local_70 = 0;
  iVar11 = iVar6 + iVar12;
  if (iVar11 < iVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar6);
  }
  if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar11);
  }
  if (iVar3 < iVar11) {
    FUN_1446f8c06(&local_58);
  }
  FUN_1400020e8(&local_58,&DAT_149e1419a,1);
  FUN_1401c7f3e(&local_168,&local_58,&local_98);
  iVar12 = local_160 + -1;
  if (local_160 == 0) {
    iVar12 = 0;
  }
  FUN_1446f82e2(local_60,iVar12,local_168,1);
  if (local_168 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_98 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1400021e4(&local_78,&local_98);
  puVar18 = &DAT_149dfb77a;
  puVar19 = &DAT_149dfb77a;
  if ((int)local_90 != 0) {
    puVar19 = local_98;
  }
  if (*(int *)(param_2 + 1) != 0) {
    puVar18 = (undefined2 *)*param_2;
  }
  FUN_140002266(&local_168,L"%s-%s",puVar18,puVar19);
  if (local_98 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  ppuVar8 = local_168;
  uVar14 = (ulonglong)(local_160 - 1);
  if (local_160 == 0) {
    uVar14 = 0;
  }
  iVar12 = (int)uVar14;
  if (0 < iVar12) {
    uVar10 = 0;
    do {
      uVar2 = *(ushort *)((longlong)local_168 + uVar10 * 2);
      *(ushort *)((longlong)local_168 + uVar10 * 2) = (ushort)(uVar2 - 0x41 < 0x1a) * 0x20 + uVar2;
      uVar10 = uVar10 + 1;
    } while (uVar14 != uVar10);
    iVar12 = local_160 + -1;
    if (local_160 == 0) {
      iVar12 = 0;
    }
  }
  ppuVar9 = (undefined **)&DAT_149dfb77a;
  if (local_160 != 0) {
    ppuVar9 = local_168;
  }
  local_58 = FUN_1447addd0(ppuVar9,iVar12 * 2);
  local_50 = 0x8000000;
  if (ppuVar8 != (undefined **)0x0) {
    FUN_1400020a8(ppuVar8);
  }
  cVar5 = FUN_1402df388(*param_3,&local_58);
  if (cVar5 != '\0') {
    local_98 = (undefined2 *)*param_3;
    local_90 = 0;
    uStack_88 = 0;
    local_b8 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    uStack_b0 = 0xffffffffffffffff;
    local_178 = 0x7fffffff;
    FUN_1417039f6(&local_98,&local_78,&local_58);
    plVar7 = (longlong *)FUN_1405d8a54(0);
    FUN_14626a73c(&local_98,plVar7);
    (**(code **)(*plVar7 + 0x20))(plVar7,0xffffffff,0);
    FUN_14018802a(plVar7);
    plVar7 = (longlong *)FUN_141552012(&local_78);
    iVar12 = *(int *)((undefined8 *)*plVar7 + 1);
    uVar15 = *(undefined8 *)*plVar7;
    _Dst = &local_168;
    memset(_Dst,0,0x90);
    FUN_144869430(_Dst);
    local_d8 = 0;
    local_168 = &PTR_FUN_149e1ddc0;
    local_c0 = 0x7fffffffffffffff;
    local_140 = local_140 | 1;
    local_d0 = uVar15;
    local_c8 = (longlong)iVar12;
    FUN_1449c2eca(_Dst,0);
    local_60[0] = 0;
    puVar4 = (ulonglong *)CONCAT44(uStack_15c,local_160);
    piVar1 = (int *)*puVar4 + 1;
    if ((int *)puVar4[1] < piVar1) {
      if ((local_13e & 2) == 0) {
        (*(code *)local_168[0x2e])(&local_168,local_60,4);
      }
      else {
        FUN_14572512c(&local_168,local_60);
      }
    }
    else {
      local_60[0] = *(int *)*puVar4;
      *puVar4 = (ulonglong)piVar1;
    }
    iVar12 = local_60[0];
    if (local_60[0] == 1) {
      _Dst = (undefined ***)FUN_14001cc68(0x148,0x10);
      FUN_1459ad208(_Dst,param_1,param_2,param_3);
      FUN_1456dae0a(&local_168,_Dst + 7);
      uVar16 = *(uint *)(_Dst + 8);
      uVar14 = (ulonglong)((uVar16 - 1) + (uint)(uVar16 == 0)) * 2 + 1;
      lVar20 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      uVar17 = 1 << ((byte)lVar20 & 0x1f);
      if (0xffff < uVar17) {
        uVar17 = 0x10000;
      }
      if (*(int *)(_Dst + 0x16) != 0) {
        *(undefined8 *)((longlong)_Dst + 0xac) = 0;
        if (_Dst[0x17] != (undefined **)0x0) {
          FUN_1400020a8();
        }
        _Dst[0x17] = (undefined **)&DAT_14c7585e0;
        if (_Dst[0x18] != (undefined **)0x0) {
          FUN_1400020a8();
        }
        _Dst[0x18] = (undefined **)0x0;
      }
      *(uint *)(_Dst + 0x15) = uVar17;
      *(uint *)(_Dst + 0x16) = uVar16;
      if (uVar16 != 0) {
        *(uint *)((longlong)_Dst + 0xac) = uVar17 - 1;
        uVar14 = (ulonglong)(uVar17 << 2);
        ppuVar8 = (undefined **)FUN_14001cc68(uVar14 + (uVar14 == 0),0x10);
        _Dst[0x17] = ppuVar8;
        uVar15 = 0;
        ppuVar9 = (undefined **)FUN_14001cc68((ulonglong)uVar16 << 2,0x10);
        _Dst[0x18] = ppuVar9;
        memset(ppuVar8,(int)CONCAT71((int7)((ulonglong)uVar15 >> 8),0xff),uVar14);
      }
      iVar3 = *(int *)(_Dst + 8);
      if (0 < (longlong)iVar3) {
        uVar16 = 1;
        lVar20 = 0;
        uVar14 = 0;
        do {
          uVar17 = *(uint *)((longlong)_Dst[7] + lVar20);
          if (*(uint *)(_Dst + 0x16) <= uVar14) {
            iVar6 = 0x1f;
            if (uVar16 != 0) {
              for (; uVar16 >> iVar6 == 0; iVar6 = iVar6 + -1) {
              }
            }
            uVar13 = 1 << ((byte)iVar6 & 0x1f);
            if (uVar13 < 0x21) {
              uVar13 = 0x20;
            }
            FUN_1404b04e2(_Dst + 0x15,uVar13);
          }
          uVar10 = (ulonglong)(uVar17 & *(uint *)((longlong)_Dst + 0xac));
          *(undefined4 *)((longlong)_Dst[0x18] + uVar14 * 4) =
               *(undefined4 *)((longlong)_Dst[0x17] + uVar10 * 4);
          *(int *)((longlong)_Dst[0x17] + uVar10 * 4) = (int)uVar14;
          uVar14 = uVar14 + 1;
          uVar16 = uVar16 + 2;
          lVar20 = lVar20 + 0x14;
        } while ((longlong)iVar3 != uVar14);
      }
      uVar16 = *(uint *)(_Dst + 10);
      uVar14 = (ulonglong)((uVar16 - 1) + (uint)(uVar16 == 0)) * 2 + 1;
      lVar20 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      uVar17 = 1 << ((byte)lVar20 & 0x1f);
      if (0xffff < uVar17) {
        uVar17 = 0x10000;
      }
      if (*(int *)(_Dst + 0x1a) != 0) {
        *(undefined8 *)((longlong)_Dst + 0xcc) = 0;
        if (_Dst[0x1b] != (undefined **)0x0) {
          FUN_1400020a8();
        }
        _Dst[0x1b] = (undefined **)&DAT_14c7585e0;
        if (_Dst[0x1c] != (undefined **)0x0) {
          FUN_1400020a8();
        }
        _Dst[0x1c] = (undefined **)0x0;
      }
      *(uint *)(_Dst + 0x19) = uVar17;
      *(uint *)(_Dst + 0x1a) = uVar16;
      if (uVar16 != 0) {
        *(uint *)((longlong)_Dst + 0xcc) = uVar17 - 1;
        uVar14 = (ulonglong)(uVar17 << 2);
        ppuVar8 = (undefined **)FUN_14001cc68(uVar14 + (uVar14 == 0),0x10);
        _Dst[0x1b] = ppuVar8;
        uVar15 = 0;
        ppuVar9 = (undefined **)FUN_14001cc68((ulonglong)uVar16 << 2,0x10);
        _Dst[0x1c] = ppuVar9;
        memset(ppuVar8,(int)CONCAT71((int7)((ulonglong)uVar15 >> 8),0xff),uVar14);
      }
      iVar3 = *(int *)(_Dst + 10);
      if (0 < (longlong)iVar3) {
        uVar16 = 1;
        lVar20 = 0;
        uVar14 = 0;
        do {
          uVar17 = *(uint *)((longlong)_Dst[9] + lVar20);
          if (*(uint *)(_Dst + 0x1a) <= uVar14) {
            iVar6 = 0x1f;
            if (uVar16 != 0) {
              for (; uVar16 >> iVar6 == 0; iVar6 = iVar6 + -1) {
              }
            }
            uVar13 = 1 << ((byte)iVar6 & 0x1f);
            if (uVar13 < 0x21) {
              uVar13 = 0x20;
            }
            FUN_1404b04e2(_Dst + 0x19,uVar13);
          }
          uVar10 = (ulonglong)(uVar17 & *(uint *)((longlong)_Dst + 0xcc));
          *(undefined4 *)((longlong)_Dst[0x1c] + uVar14 * 4) =
               *(undefined4 *)((longlong)_Dst[0x1b] + uVar10 * 4);
          *(int *)((longlong)_Dst[0x1b] + uVar10 * 4) = (int)uVar14;
          uVar14 = uVar14 + 1;
          uVar16 = uVar16 + 2;
          lVar20 = lVar20 + 0x14;
        } while ((longlong)iVar3 != uVar14);
      }
    }
    local_168 = &PTR__purecall_149e35f70;
    if (local_110 != (longlong *)0x0) {
      if (*local_110 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(local_110);
    }
    if (local_f0 != 0) {
      if (*(longlong *)(local_f0 + 0x40) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(local_f0);
    }
    FUN_1447ef07c(&local_78);
    FUN_1400d6814(&local_98);
    if (iVar12 == 1) goto LAB_1432285e1;
  }
  _Dst = (undefined ***)0x0;
LAB_1432285e1:
  if ((local_48 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return _Dst;
}



// FUNCTION 143228b08 FUN_143228b08 body=515 status=ok
// SIG undefined FUN_143228b08(void)

void FUN_143228b08(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x138));
  plVar2 = (longlong *)(param_1 + 0xe8);
  iVar6 = *(int *)(param_1 + 0x110);
  if (iVar6 == 0) {
    uVar17 = 1;
    uVar16 = 0;
    iVar13 = 0;
    iVar7 = 0;
  }
  else {
    puVar11 = *(uint **)(param_1 + 0x108);
    if (*(uint **)(param_1 + 0x108) == (uint *)0x0) {
      puVar11 = (uint *)(param_1 + 0xf8);
    }
    uVar14 = *puVar11;
    if (uVar14 == 0) {
      iVar7 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar7 = iVar6 + -1;
      }
      uVar16 = 0;
      uVar17 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar17 = uVar16;
      }
      iVar13 = 0;
      do {
        if (uVar17 == uVar16) goto LAB_143228cb0;
        iVar13 = iVar13 + 0x20;
        uVar14 = puVar11[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar16 = 0;
      iVar13 = 0;
    }
    uVar17 = (ulonglong)(-uVar14 & uVar14);
    uVar3 = uVar17 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar7 = (iVar13 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar6 <= iVar7) {
      iVar7 = iVar6;
    }
  }
  if (iVar7 < iVar6) {
    uVar14 = 0xffffffff;
    do {
      plVar4 = *(longlong **)(*plVar2 + 8 + (longlong)iVar7 * 0x18);
      if (plVar4 != (longlong *)0x0) {
        FUN_1447ef07c(plVar4 + 1);
        puVar5 = (undefined8 *)*plVar4;
        if (puVar5 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar5 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar5)(puVar5,1);
          }
        }
        FUN_1400020a8(plVar4);
        iVar6 = *(int *)(param_1 + 0x110);
      }
      uVar14 = uVar14 & ~(uint)uVar17;
      puVar11 = *(uint **)(param_1 + 0x108);
      if (*(uint **)(param_1 + 0x108) == (uint *)0x0) {
        puVar11 = (uint *)(param_1 + 0xf8);
      }
      iVar7 = (int)uVar16;
      lVar15 = (longlong)iVar7;
      uVar8 = puVar11[lVar15] & uVar14;
      if (uVar8 == 0) {
        iVar9 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar9 = iVar6 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar10 = iVar9;
        if (iVar9 < iVar7) {
          iVar10 = iVar7;
        }
        if (iVar9 <= iVar7) break;
        lVar12 = 0;
        while( true ) {
          iVar13 = iVar13 + 0x20;
          uVar8 = puVar11[lVar15 + lVar12 + 1];
          if (uVar8 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar10 - lVar15 == lVar12) goto LAB_143228cb0;
        }
        uVar16 = (ulonglong)(iVar7 + (int)lVar12 + 1);
        uVar14 = 0xffffffff;
      }
      uVar17 = (ulonglong)(-uVar8 & uVar8);
      uVar3 = uVar17 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar7 = (iVar13 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar6);
  }
LAB_143228cb0:
  if (*(int *)(param_1 + 0x130) < 2) {
    FUN_14743bfd4(plVar2);
    FUN_14126fd2c(plVar2);
  }
  else {
    FUN_14126fd2c(plVar2);
    *(undefined4 *)(param_1 + 0x130) = 1;
    FUN_140b4ec9e(plVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x000143228cfa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x138));
  return;
}



// FUNCTION 143228d0c FUN_143228d0c body=1123 status=ok
// SIG undefined FUN_143228d0c(void)

undefined8 FUN_143228d0c(longlong param_1,uint param_2,longlong param_3,undefined8 *param_4)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 uVar9;
  uint uVar10;
  ushort uVar11;
  ulonglong uVar12;
  ushort uVar13;
  ulonglong uVar14;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  undefined8 *local_198;
  longlong local_190 [6];
  int local_160 [3];
  uint local_154;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x138));
  plVar8 = (longlong *)(param_1 + 0xe8);
  local_154 = param_2;
  if (*(int *)(param_1 + 0xf0) != *(int *)(param_1 + 0x11c)) {
    lVar6 = param_1 + 0x120;
    if (*(longlong *)(param_1 + 0x128) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x128);
    }
    uVar10 = *(uint *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x130) - 1U & param_2) * 4);
    if (uVar10 != 0xffffffff) {
      do {
        puVar2 = (uint *)(*plVar8 + (longlong)(int)uVar10 * 0x18);
        if (*puVar2 == param_2) {
          if (puVar2 != (uint *)0x0) goto LAB_143228de8;
          break;
        }
        uVar10 = puVar2[4];
      } while (uVar10 != 0xffffffff);
    }
  }
  local_150 = &local_154;
  FUN_140b4e9b8(plVar8,local_160,param_2);
  puVar2 = (uint *)(*plVar8 + (longlong)local_160[0] * 0x18);
LAB_143228de8:
  plVar8 = *(longlong **)(puVar2 + 2);
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
    *plVar8 = 0;
    plVar8[1] = 0;
    plVar8[2] = 0xffffffff;
    *(longlong **)(puVar2 + 2) = plVar8;
    uVar10 = 0;
  }
  else {
    uVar10 = *(uint *)((longlong)plVar8 + 0x14);
  }
  *(uint *)((longlong)plVar8 + 0x14) = uVar10 & 0x80000000 | uVar10 + 1 & 0x7fffffff;
  if (plVar8[1] == 0) {
    memcpy(&local_150,&DAT_14c844ee0,0x104);
    uVar10 = (uint)local_150;
  }
  else {
    uVar10 = *(uint *)(plVar8[1] + 0xb4);
    local_150._0_6_ = (uint6)uVar10;
  }
  if (uVar10 == DAT_14c844ee0) {
    lVar6 = 4;
    while( true ) {
      uVar11 = *(ushort *)((longlong)&local_150 + lVar6);
      uVar12 = (ulonglong)uVar11;
      uVar13 = *(ushort *)((longlong)&DAT_14c844ee0 + lVar6);
      if (uVar11 != uVar13) break;
      if (uVar11 == 0) goto LAB_143228ed2;
LAB_143228ea2:
      lVar6 = lVar6 + 2;
    }
    if ((uVar13 | uVar11) < 0x80) {
      uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
      uVar14 = (ulonglong)uVar13;
      uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
      if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar14]) goto LAB_143228ea2;
    }
    if (uVar11 != uVar13) goto LAB_143228e33;
LAB_143228ed2:
    *(undefined4 *)(plVar8 + 2) = DAT_14c75b13c;
    puVar7 = (undefined8 *)FUN_1446fac86(0xa8);
    FUN_1447247dc(puVar7,0);
    *puVar7 = &PTR_FUN_149e00300;
    if (*(code **)(puVar7[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar7[0xe] + 0x18))(puVar7 + 0xe,puVar7 + 9);
    }
    puVar7[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                  ::
                  TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                  ::vftable;
    puVar7[9] = puVar7;
    puVar7[10] = puVar7;
    lVar6 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar6 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(lVar6 + 0x30);
    }
    puVar7[0xf] = uVar9;
    puVar7[0x10] = 0xc80000527800c400;
    *(undefined4 *)((longlong)puVar7 + 0x1c) = 2;
    puVar4 = (undefined8 *)*plVar8;
    *plVar8 = (longlong)puVar7;
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar4 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
    if (param_4 != (undefined8 *)0x0) {
      local_198 = (undefined8 *)*plVar8;
      if (local_198 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(local_198 + 1) = *(int *)(local_198 + 1) + 1;
        UNLOCK();
      }
      (*(code *)*param_4)(&local_150,param_4[1],
                          (longlong)(int)param_2 * 0xc + *(longlong *)(param_1 + 0x58),&local_198);
      if (local_198 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_198 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_198)(local_198,1);
        }
      }
      FUN_1447ef144(plVar8 + 1,&local_150);
      FUN_1447ef07c(&local_150);
      goto LAB_143228e3c;
    }
    local_150 = (uint *)**(longlong **)(param_1 + 0x30);
    local_148 = 0;
    uStack_140 = 0;
    local_1a8 = 0;
    if ((ulonglong)DAT_14c760e48 < 5) {
      local_1a8 = *(undefined4 *)(&DAT_14a3932f8 + (ulonglong)DAT_14c760e48 * 4);
    }
    local_190[1] = 0;
    local_190[3] = 0;
    local_190[4] = 0;
    local_190[2] = 0xffffffffffffffff;
    FUN_1417039f6(&local_150,local_160,(longlong)(int)param_2 * 0xc + *(longlong *)(param_1 + 0x58))
    ;
    FUN_1447ef144(plVar8 + 1,local_160);
    FUN_1447ef07c(local_160);
    local_190[0] = *plVar8;
    if (local_190[0] != 0) {
      LOCK();
      *(int *)(local_190[0] + 8) = *(int *)(local_190[0] + 8) + 1;
      UNLOCK();
    }
    FUN_1405e466c(&local_150,local_190);
    FUN_1400d6814(&local_150);
  }
  else {
LAB_143228e33:
    if (param_4 != (undefined8 *)0x0) goto LAB_143228e3c;
  }
  if ((*plVar8 != 0) && ((*(byte *)(*plVar8 + 0xa0) & 1) == 0)) {
    iVar3 = *(int *)(param_3 + 0x28);
    *(uint *)(param_3 + 0x28) = iVar3 + 1U;
    if (*(uint *)(param_3 + 0x2c) < iVar3 + 1U) {
      FUN_14476a5c8(param_3,iVar3);
    }
    lVar6 = *(longlong *)(param_3 + 0x20);
    if (*(longlong *)(param_3 + 0x20) == 0) {
      lVar6 = param_3;
    }
    lVar5 = *plVar8;
    *(longlong *)(lVar6 + (longlong)iVar3 * 8) = lVar5;
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
  }
LAB_143228e3c:
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x138));
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 143229170 FUN_143229170 body=330 status=ok
// SIG undefined FUN_143229170(void)

void FUN_143229170(longlong param_1,uint param_2)

{
  longlong *plVar1;
  uint *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_68 [44];
  uint local_3c;
  uint *local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x138));
  plVar1 = (longlong *)(param_1 + 0xe8);
  local_3c = param_2;
  if (*(int *)(param_1 + 0xf0) != *(int *)(param_1 + 0x11c)) {
    lVar3 = param_1 + 0x120;
    if (*(longlong *)(param_1 + 0x128) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x128);
    }
    uVar5 = *(uint *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x130) - 1U & param_2) * 4);
    if (uVar5 != 0xffffffff) {
      do {
        puVar2 = (uint *)(*plVar1 + (longlong)(int)uVar5 * 0x18);
        if (*puVar2 == param_2) {
          if (puVar2 != (uint *)0x0) goto LAB_143229239;
          break;
        }
        uVar5 = puVar2[4];
      } while (uVar5 != 0xffffffff);
    }
  }
  local_38 = &local_3c;
  FUN_140b4e9b8(plVar1,&local_2c,param_2);
  puVar2 = (uint *)(*plVar1 + (longlong)local_2c * 0x18);
LAB_143229239:
  puVar4 = *(undefined8 **)(puVar2 + 2);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0xffffffff;
    *(undefined8 **)(puVar2 + 2) = puVar4;
    uVar5 = 0;
  }
  else {
    uVar5 = *(uint *)((longlong)puVar4 + 0x14);
  }
  uVar6 = 0x80000001;
  if ((uVar5 & 0x7fffffff) != 0) {
    uVar6 = uVar5 & 0x80000000 | uVar5 + 1 & 0x7fffffff;
  }
  *(uint *)((longlong)puVar4 + 0x14) = uVar6;
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x138));
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1432292bc FUN_1432292bc body=247 status=ok
// SIG undefined FUN_1432292bc(void)

ulonglong FUN_1432292bc(longlong *param_1,undefined8 param_2,longlong param_3)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar4 = (**(code **)(*param_1 + 0x90))();
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x27));
  if ((int)param_1[0x1e] != *(int *)((longlong)param_1 + 0x11c)) {
    plVar5 = param_1 + 0x24;
    if ((longlong *)param_1[0x25] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[0x25];
    }
    uVar6 = *(uint *)((longlong)plVar5 + (ulonglong)((int)param_1[0x26] - 1U & uVar4) * 4);
    if (uVar6 != 0xffffffff) {
      do {
        puVar1 = (uint *)(param_1[0x1d] + (longlong)(int)uVar6 * 0x18);
        if (*puVar1 == uVar4) {
          if (puVar1 + 2 != (uint *)0x0 && puVar1 != (uint *)0x0) {
            plVar5 = *(longlong **)(puVar1 + 2);
            lVar7 = *plVar5;
            if ((lVar7 != 0) && ((*(byte *)(lVar7 + 0xa0) & 1) == 0)) {
              iVar2 = *(int *)(param_3 + 0x28);
              *(uint *)(param_3 + 0x28) = iVar2 + 1U;
              if (*(uint *)(param_3 + 0x2c) < iVar2 + 1U) {
                FUN_14476a5c8(param_3,iVar2);
              }
              lVar7 = *(longlong *)(param_3 + 0x20);
              if (*(longlong *)(param_3 + 0x20) == 0) {
                lVar7 = param_3;
              }
              lVar3 = *plVar5;
              *(longlong *)(lVar7 + (longlong)iVar2 * 8) = lVar3;
              uVar8 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
              if (lVar3 != 0) {
                LOCK();
                *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
                UNLOCK();
              }
              goto LAB_143229365;
            }
          }
          break;
        }
        uVar6 = puVar1[4];
      } while (uVar6 != 0xffffffff);
    }
  }
  uVar8 = 0;
LAB_143229365:
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x27));
  return uVar8 & 0xffffffff;
}



// FUNCTION 1432293b4 FUN_1432293b4 body=46 status=ok
// SIG undefined FUN_1432293b4(void)

undefined8 FUN_1432293b4(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x90))();
  FUN_143228d0c(param_1,uVar1,param_3,0);
  return 1;
}



// FUNCTION 1432293e2 FUN_1432293e2 body=219 status=ok
// SIG undefined FUN_1432293e2(void)

undefined8 FUN_1432293e2(longlong *param_1,int param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  lVar1 = param_1[0xd];
  lVar7 = (longlong)param_2;
  if (*(int *)(lVar1 + 4 + lVar7 * 8) != 0) {
    uVar6 = 0;
    do {
      iVar3 = (**(code **)(*param_1 + 0x90))
                        (param_1,*(undefined4 *)
                                  (param_1[0x13] +
                                  (longlong)(int)(*(int *)(lVar1 + lVar7 * 8) + uVar6) * 4));
      if ((DAT_14ca96da8 == '\0') && (cVar2 = FUN_143227db4(), cVar2 == '\0')) {
        uVar4 = *(uint *)(param_1[0x11] + (longlong)iVar3 * 0x10);
        iVar5 = *(int *)(param_1[0x11] + 4 + (longlong)iVar3 * 0x10);
        if (uVar4 < iVar5 + uVar4) {
          do {
            if (3 < (byte)((*(byte *)(param_1[0xf] +
                                     (longlong)*(int *)(param_1[0x13] + (longlong)(int)uVar4 * 4) *
                                     8) & 0xe) - 6)) goto LAB_14322943f;
            uVar4 = uVar4 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        FUN_143229170(param_1,iVar3);
      }
      else {
LAB_14322943f:
        FUN_143228d0c(param_1,iVar3,param_3,0);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(lVar1 + 4 + lVar7 * 8));
  }
  return 1;
}



// FUNCTION 1432294be FUN_1432294be body=335 status=ok
// SIG undefined FUN_1432294be(void)

undefined8 FUN_1432294be(longlong *param_1,int param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_98 [40];
  undefined1 local_70 [32];
  undefined1 *local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = param_1[0xd];
  lVar9 = (longlong)param_2;
  local_50 = (undefined1 *)0x0;
  local_48 = 0x400000000;
  if (*(int *)(lVar1 + 4 + lVar9 * 8) == 0) {
    uVar7 = 0;
  }
  else {
    uVar8 = 0;
    do {
      iVar3 = (**(code **)(*param_1 + 0x90))
                        (param_1,*(undefined4 *)
                                  (param_1[0x13] +
                                  (longlong)(int)(*(int *)(lVar1 + lVar9 * 8) + uVar8) * 4));
      if (DAT_14ca96da8 == '\0') {
        cVar2 = FUN_143227db4();
        if (cVar2 != '\0') goto LAB_143229548;
        uVar4 = *(uint *)(param_1[0x11] + (longlong)iVar3 * 0x10);
        iVar5 = *(int *)(param_1[0x11] + 4 + (longlong)iVar3 * 0x10);
        if (uVar4 < iVar5 + uVar4) {
          do {
            if (3 < (byte)((*(byte *)(param_1[0xf] +
                                     (longlong)*(int *)(param_1[0x13] + (longlong)(int)uVar4 * 4) *
                                     8) & 0xe) - 6)) goto LAB_143229548;
            uVar4 = uVar4 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        FUN_143229170(param_1,iVar3);
      }
      else {
LAB_143229548:
        FUN_143228d0c(param_1,iVar3,local_70,param_3);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(lVar1 + 4 + lVar9 * 8));
    uVar7 = local_48 & 0xffffffff;
  }
  puVar6 = local_50;
  if (local_50 == (undefined1 *)0x0) {
    puVar6 = local_70;
  }
  FUN_144717c65(puVar6,uVar7);
  if (local_50 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14322967a FUN_14322967a body=4865 status=ok
// SIG undefined FUN_14322967a(void)

longlong * FUN_14322967a(longlong *param_1,longlong *param_2,int param_3,char param_4)

{
  LARGE_INTEGER LVar1;
  int *piVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  DWORD DVar12;
  char cVar13;
  uint uVar14;
  DWORD dwTlsIndex;
  DWORD DVar15;
  uint *puVar16;
  undefined8 *puVar17;
  LPVOID lpTlsValue;
  longlong *plVar18;
  longlong *plVar19;
  longlong *plVar20;
  longlong *plVar21;
  ulonglong uVar22;
  int iVar23;
  uint uVar24;
  ulonglong uVar25;
  undefined1 *puVar26;
  uint *puVar27;
  uint uVar28;
  longlong lVar29;
  longlong lVar30;
  undefined4 *puVar31;
  ulonglong uVar32;
  undefined2 *puVar33;
  bool bVar34;
  undefined1 auStack_188 [32];
  undefined2 *local_168;
  undefined4 local_160;
  undefined8 local_158;
  ulonglong local_150;
  undefined2 *local_148;
  undefined2 *local_140;
  uint local_134;
  longlong *local_130;
  ulonglong local_128;
  undefined2 *local_120;
  longlong *local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  LARGE_INTEGER local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  char local_e0;
  ulonglong local_d8;
  undefined8 *local_d0;
  undefined2 *local_c8;
  undefined8 uStack_c0;
  undefined2 *local_b8;
  undefined8 uStack_b0;
  undefined2 *local_a0;
  int local_98;
  undefined1 local_90 [32];
  undefined1 *local_70;
  ulonglong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  puVar27 = (uint *)0x0;
  *param_2 = 0;
  local_110 = param_1[0xf];
  uVar14 = (**(code **)(*param_1 + 0x90))(param_1,param_3);
  local_70 = (undefined1 *)0x0;
  local_68 = 0x400000000;
  FUN_143228d0c(param_1,uVar14,local_90,0);
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x27));
  if ((int)param_1[0x1e] != *(int *)((longlong)param_1 + 0x11c)) {
    plVar21 = param_1 + 0x24;
    if ((longlong *)param_1[0x25] != (longlong *)0x0) {
      plVar21 = (longlong *)param_1[0x25];
    }
    uVar28 = *(uint *)((longlong)plVar21 + (ulonglong)((int)param_1[0x26] - 1U & uVar14) * 4);
    if (uVar28 != 0xffffffff) {
      do {
        puVar27 = (uint *)(param_1[0x1d] + (longlong)(int)uVar28 * 0x18);
        if (*puVar27 == uVar14) goto LAB_143229761;
        uVar28 = puVar27[4];
      } while (uVar28 != 0xffffffff);
    }
    puVar27 = (uint *)0x0;
  }
LAB_143229761:
  puVar16 = puVar27 + 2;
  if (puVar27 == (uint *)0x0) {
    puVar16 = (uint *)0x0;
  }
  plVar21 = *(longlong **)puVar16;
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x27));
  iVar23 = DAT_14c844ee0;
  if (plVar21[1] != 0) {
    iVar23 = *(int *)(plVar21[1] + 0xb4);
  }
  plVar18 = plVar21 + 1;
  if (iVar23 == 1) {
    FUN_140714782(plVar18,0x7fffffff);
  }
  local_d0 = (undefined8 *)*plVar21;
  if (local_d0 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_d0 + 1) = *(int *)(local_d0 + 1) + 1;
    UNLOCK();
    if ((local_d0 != (undefined8 *)0x0) && ((*(byte *)(local_d0 + 0x14) & 1) == 0)) {
      if (param_4 == '\0') {
        FUN_1400f4110(param_1,uVar14);
        goto LAB_14322a511;
      }
      QueryPerformanceCounter(&local_f8);
      FUN_14009fd82(DAT_14c82b500,&local_d0,0xff);
      QueryPerformanceCounter(&local_f8);
    }
  }
  local_118 = param_2;
  puVar17 = (undefined8 *)FUN_141552012(plVar18);
  local_128 = *(ulonglong *)*puVar17;
  dwTlsIndex = DAT_14c7585d0;
  local_130 = param_1;
  if (DAT_14c7585d0 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar15 = 0xffffffff;
    LOCK();
    bVar34 = DAT_14c7585d0 != 0xffffffff;
    DVar12 = dwTlsIndex;
    if (bVar34) {
      DVar15 = DAT_14c7585d0;
      DVar12 = DAT_14c7585d0;
    }
    DAT_14c7585d0 = DVar12;
    UNLOCK();
    if (bVar34) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar15;
    }
  }
  plVar21 = local_130;
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_140036a08(&local_f8);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  local_108 = (longlong)param_3;
  LVar1.QuadPart = (longlong)lpTlsValue + 0x10;
  local_f0 = *(ulonglong *)((longlong)lpTlsValue + 0x10);
  local_e8 = *(ulonglong *)((longlong)lpTlsValue + 0x20);
  local_e0 = '\0';
  local_d8 = *(ulonglong *)((longlong)lpTlsValue + 0x28);
  *(LARGE_INTEGER **)((longlong)lpTlsValue + 0x28) = &local_f8;
  *(int *)((longlong)lpTlsValue + 0x30) = *(int *)((longlong)lpTlsValue + 0x30) + 1;
  lVar6 = plVar21[0x11];
  lVar29 = (longlong)(int)uVar14 * 0x10;
  local_134 = uVar14;
  local_f8.QuadPart = LVar1.QuadPart;
  plVar18 = (longlong *)FUN_141552012(plVar18);
  uVar28 = *(uint *)(lVar6 + 8 + lVar29);
  plVar21 = local_130;
  lVar30 = local_110;
  param_2 = local_118;
  uVar32 = local_128;
  if (*(uint *)(lVar6 + 0xc + lVar29) != uVar28) {
    local_120 = (undefined2 *)(ulonglong)*(uint *)(*plVar18 + 8);
    uVar32 = *(longlong *)((longlong)lpTlsValue + 0x10) + 0xfU & 0xfffffffffffffff0;
    uVar25 = uVar32 + uVar28;
    if (*(ulonglong *)((longlong)lpTlsValue + 0x18) < uVar25) {
      FUN_140023dd8(LVar1.QuadPart,uVar28 + 0x10);
      uVar32 = *(ulonglong *)LVar1 + 0xf & 0xfffffffffffffff0;
      uVar25 = uVar28 + uVar32;
    }
    lVar30 = local_110;
    *(ulonglong *)LVar1 = uVar25;
    uVar5 = *(undefined4 *)(lVar6 + lVar29 + 8);
    lVar7 = local_130[9];
    local_100 = local_130[0xb];
    uVar25 = *(ulonglong *)(local_110 + local_108 * 8);
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    local_168 = local_120;
    local_158 = 0;
    local_160 = 0;
    cVar13 = FUN_140aa9920(DAT_14c892f54,uVar32,uVar5,local_128);
    plVar21 = local_130;
    param_2 = local_118;
    if (cVar13 == '\0') {
      lVar30 = local_108 * 0x14;
      FUN_143227259(&local_a0);
      local_120 = &DAT_149dfb77a;
      if (local_98 != 0) {
        local_120 = local_a0;
      }
      local_128 = (ulonglong)((uint)(uVar25 >> 4) & 0x3fffffff);
      lVar3 = local_100 + (longlong)(int)uVar14 * 0xc;
      local_b8 = (undefined2 *)0x0;
      uStack_b0 = 0;
      FUN_1407c8a86(lVar7 + lVar30,0x14,&local_b8);
      local_148 = &DAT_149dfb77a;
      if ((int)uStack_b0 != 0) {
        local_148 = local_b8;
      }
      uVar5 = *(undefined4 *)(lVar6 + lVar29 + 4);
      local_c8 = (undefined2 *)0x0;
      uStack_c0 = 0;
      FUN_1467e8c0a(lVar3,&local_c8);
      param_2 = local_118;
      plVar21 = local_130;
      local_168 = &DAT_149dfb77a;
      if ((int)uStack_c0 != 0) {
        local_168 = local_c8;
      }
      local_140 = local_120;
      local_150 = local_128;
      local_158 = CONCAT44(local_158._4_4_,param_3);
      local_160 = uVar5;
      FUN_140033559(".\\Runtime/RenderCore/Private/ShaderCodeArchive.cpp",0x1c0,
                    L"DecompressShaderWithOodleAndExtraLogging(): Could not decompress shader group with Oodle. Group Index: %d Group IoStoreHash:%s Group NumShaders: %d Shader Index: %d Shader In-group Index: %d Shader Hash: %s. %s"
                    ,local_134);
      lVar30 = local_110;
      if (local_c8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_b8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_a0 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  uVar24 = local_134;
  uVar25 = *(ulonglong *)(lVar30 + local_108 * 8);
  lVar6 = plVar21[0x11];
  uVar8 = *(ulonglong *)(plVar21[0xf] + local_108 * 8);
  uVar22 = uVar8 & 0x3fffffff0;
  uVar28 = *(uint *)(lVar6 + uVar22);
  iVar23 = *(int *)(lVar6 + 4 + uVar22);
  uVar14 = iVar23 + uVar28;
  plVar18 = plVar21;
  if (uVar28 < uVar14) {
    do {
      plVar18 = local_130;
      if (*(int *)(plVar21[0x13] + (longlong)(int)uVar28 * 4) == param_3) {
        uVar9 = (uint)(uVar8 >> 0x20);
        if (uVar28 < uVar14 - 1) {
          iVar23 = (uint)((ulonglong)
                          *(undefined8 *)
                           (plVar21[0xf] +
                           (longlong)*(int *)(plVar21[0x13] + (longlong)(int)(uVar28 + 1) * 4) * 8)
                         >> 0x22) - (uVar9 >> 2);
        }
        else {
          iVar23 = *(int *)(lVar6 + uVar22 + 8) - (uVar9 >> 2);
        }
        goto LAB_143229a44;
      }
      uVar28 = uVar28 + 1;
      iVar23 = iVar23 + -1;
    } while (iVar23 != 0);
  }
  iVar23 = 0;
LAB_143229a44:
  puVar31 = (undefined4 *)(local_108 * 0x14 + plVar18[9]);
  uVar14 = (uint)uVar25 & 0xf;
  if (uVar14 < 0xc) {
    puVar33 = (undefined2 *)(uVar32 + (uVar25 >> 0x22));
    switch(uVar14) {
    case 0:
      local_a0 = puVar33;
      local_98 = iVar23;
      (**(code **)(*DAT_14ca83900 + 0x78))(DAT_14ca83900,&local_b8,&local_a0,puVar31);
      lVar6 = *param_2;
      *param_2 = (longlong)local_b8;
      local_b8 = (undefined2 *)0x0;
      plVar18 = local_130;
      if (lVar6 != 0) {
        LOCK();
        puVar27 = (uint *)(lVar6 + 8);
        uVar14 = *puVar27;
        *puVar27 = *puVar27 - 1;
        UNLOCK();
        if ((uVar14 & 0x3fffffff) == 1) {
          puVar27 = (uint *)(lVar6 + 8);
          LOCK();
          uVar14 = *puVar27;
          *puVar27 = *puVar27 | 0x40000000;
          UNLOCK();
          if ((uVar14 >> 0x1e & 1) == 0) {
            bVar4 = *(byte *)(lVar6 + 0xd);
            plVar19 = (longlong *)FUN_14001cc68(0x10,8);
            plVar19[1] = lVar6;
            plVar21 = DAT_14ca843c0;
            plVar18 = DAT_14ca843c8;
            uVar24 = local_134;
            if ((bVar4 & 2) == 0) {
              do {
                *plVar19 = (longlong)plVar21;
                LOCK();
                bVar34 = plVar21 != DAT_14ca843c0;
                plVar18 = plVar19;
                if (bVar34) {
                  plVar21 = DAT_14ca843c0;
                  plVar18 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar18;
                UNLOCK();
              } while (bVar34);
            }
            else {
              do {
                *plVar19 = (longlong)plVar18;
                LOCK();
                bVar34 = plVar18 != DAT_14ca843c8;
                plVar21 = plVar19;
                if (bVar34) {
                  plVar18 = DAT_14ca843c8;
                  plVar21 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar21;
                UNLOCK();
              } while (bVar34);
            }
          }
        }
        puVar33 = local_b8;
        plVar18 = local_130;
        if (local_b8 != (undefined2 *)0x0) {
          LOCK();
          puVar27 = (uint *)(local_b8 + 4);
          uVar14 = *puVar27;
          *puVar27 = *puVar27 - 1;
          UNLOCK();
          if ((uVar14 & 0x3fffffff) == 1) {
            puVar27 = (uint *)(local_b8 + 4);
            LOCK();
            uVar14 = *puVar27;
            *puVar27 = *puVar27 | 0x40000000;
            UNLOCK();
            if ((uVar14 >> 0x1e & 1) == 0) {
              bVar4 = *(byte *)((longlong)local_b8 + 0xd);
              plVar20 = (longlong *)FUN_14001cc68(0x10,8);
              plVar20[1] = (longlong)puVar33;
              plVar21 = DAT_14ca843c0;
              plVar19 = DAT_14ca843c8;
              uVar24 = local_134;
              plVar18 = local_130;
              if ((bVar4 & 2) == 0) {
                do {
                  *plVar20 = (longlong)plVar21;
                  LOCK();
                  bVar34 = plVar21 != DAT_14ca843c0;
                  plVar19 = plVar20;
                  if (bVar34) {
                    plVar21 = DAT_14ca843c0;
                    plVar19 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar19;
                  UNLOCK();
                } while (bVar34);
              }
              else {
                do {
                  *plVar20 = (longlong)plVar19;
                  LOCK();
                  bVar34 = plVar19 != DAT_14ca843c8;
                  plVar21 = plVar20;
                  if (bVar34) {
                    plVar19 = DAT_14ca843c8;
                    plVar21 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar21;
                  UNLOCK();
                } while (bVar34);
              }
            }
          }
        }
      }
      break;
    case 1:
      local_a0 = puVar33;
      local_98 = iVar23;
      (**(code **)(*DAT_14ca83900 + 0x88))(DAT_14ca83900,&local_b8,&local_a0,puVar31);
      lVar6 = *param_2;
      *param_2 = (longlong)local_b8;
      local_b8 = (undefined2 *)0x0;
      plVar18 = local_130;
      if (lVar6 != 0) {
        LOCK();
        puVar27 = (uint *)(lVar6 + 8);
        uVar14 = *puVar27;
        *puVar27 = *puVar27 - 1;
        UNLOCK();
        if ((uVar14 & 0x3fffffff) == 1) {
          puVar27 = (uint *)(lVar6 + 8);
          LOCK();
          uVar14 = *puVar27;
          *puVar27 = *puVar27 | 0x40000000;
          UNLOCK();
          if ((uVar14 >> 0x1e & 1) == 0) {
            bVar4 = *(byte *)(lVar6 + 0xd);
            plVar19 = (longlong *)FUN_14001cc68(0x10,8);
            plVar19[1] = lVar6;
            plVar21 = DAT_14ca843c0;
            plVar18 = DAT_14ca843c8;
            uVar24 = local_134;
            if ((bVar4 & 2) == 0) {
              do {
                *plVar19 = (longlong)plVar21;
                LOCK();
                bVar34 = plVar21 != DAT_14ca843c0;
                plVar18 = plVar19;
                if (bVar34) {
                  plVar21 = DAT_14ca843c0;
                  plVar18 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar18;
                UNLOCK();
              } while (bVar34);
            }
            else {
              do {
                *plVar19 = (longlong)plVar18;
                LOCK();
                bVar34 = plVar18 != DAT_14ca843c8;
                plVar21 = plVar19;
                if (bVar34) {
                  plVar18 = DAT_14ca843c8;
                  plVar21 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar21;
                UNLOCK();
              } while (bVar34);
            }
          }
        }
        puVar33 = local_b8;
        plVar18 = local_130;
        if (local_b8 != (undefined2 *)0x0) {
          LOCK();
          puVar27 = (uint *)(local_b8 + 4);
          uVar14 = *puVar27;
          *puVar27 = *puVar27 - 1;
          UNLOCK();
          if ((uVar14 & 0x3fffffff) == 1) {
            puVar27 = (uint *)(local_b8 + 4);
            LOCK();
            uVar14 = *puVar27;
            *puVar27 = *puVar27 | 0x40000000;
            UNLOCK();
            if ((uVar14 >> 0x1e & 1) == 0) {
              bVar4 = *(byte *)((longlong)local_b8 + 0xd);
              plVar20 = (longlong *)FUN_14001cc68(0x10,8);
              plVar20[1] = (longlong)puVar33;
              plVar21 = DAT_14ca843c0;
              plVar19 = DAT_14ca843c8;
              uVar24 = local_134;
              plVar18 = local_130;
              if ((bVar4 & 2) == 0) {
                do {
                  *plVar20 = (longlong)plVar21;
                  LOCK();
                  bVar34 = plVar21 != DAT_14ca843c0;
                  plVar19 = plVar20;
                  if (bVar34) {
                    plVar21 = DAT_14ca843c0;
                    plVar19 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar19;
                  UNLOCK();
                } while (bVar34);
              }
              else {
                do {
                  *plVar20 = (longlong)plVar19;
                  LOCK();
                  bVar34 = plVar19 != DAT_14ca843c8;
                  plVar21 = plVar20;
                  if (bVar34) {
                    plVar19 = DAT_14ca843c8;
                    plVar21 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar21;
                  UNLOCK();
                } while (bVar34);
              }
            }
          }
        }
      }
      break;
    case 2:
      local_a0 = puVar33;
      local_98 = iVar23;
      (**(code **)(*DAT_14ca83900 + 0x90))(DAT_14ca83900,&local_b8,&local_a0,puVar31);
      lVar6 = *param_2;
      *param_2 = (longlong)local_b8;
      local_b8 = (undefined2 *)0x0;
      plVar18 = local_130;
      if (lVar6 != 0) {
        LOCK();
        puVar27 = (uint *)(lVar6 + 8);
        uVar14 = *puVar27;
        *puVar27 = *puVar27 - 1;
        UNLOCK();
        if ((uVar14 & 0x3fffffff) == 1) {
          puVar27 = (uint *)(lVar6 + 8);
          LOCK();
          uVar14 = *puVar27;
          *puVar27 = *puVar27 | 0x40000000;
          UNLOCK();
          if ((uVar14 >> 0x1e & 1) == 0) {
            bVar4 = *(byte *)(lVar6 + 0xd);
            plVar19 = (longlong *)FUN_14001cc68(0x10,8);
            plVar19[1] = lVar6;
            plVar21 = DAT_14ca843c0;
            plVar18 = DAT_14ca843c8;
            uVar24 = local_134;
            if ((bVar4 & 2) == 0) {
              do {
                *plVar19 = (longlong)plVar21;
                LOCK();
                bVar34 = plVar21 != DAT_14ca843c0;
                plVar18 = plVar19;
                if (bVar34) {
                  plVar21 = DAT_14ca843c0;
                  plVar18 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar18;
                UNLOCK();
              } while (bVar34);
            }
            else {
              do {
                *plVar19 = (longlong)plVar18;
                LOCK();
                bVar34 = plVar18 != DAT_14ca843c8;
                plVar21 = plVar19;
                if (bVar34) {
                  plVar18 = DAT_14ca843c8;
                  plVar21 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar21;
                UNLOCK();
              } while (bVar34);
            }
          }
        }
        puVar33 = local_b8;
        plVar18 = local_130;
        if (local_b8 != (undefined2 *)0x0) {
          LOCK();
          puVar27 = (uint *)(local_b8 + 4);
          uVar14 = *puVar27;
          *puVar27 = *puVar27 - 1;
          UNLOCK();
          if ((uVar14 & 0x3fffffff) == 1) {
            puVar27 = (uint *)(local_b8 + 4);
            LOCK();
            uVar14 = *puVar27;
            *puVar27 = *puVar27 | 0x40000000;
            UNLOCK();
            if ((uVar14 >> 0x1e & 1) == 0) {
              bVar4 = *(byte *)((longlong)local_b8 + 0xd);
              plVar20 = (longlong *)FUN_14001cc68(0x10,8);
              plVar20[1] = (longlong)puVar33;
              plVar21 = DAT_14ca843c0;
              plVar19 = DAT_14ca843c8;
              uVar24 = local_134;
              plVar18 = local_130;
              if ((bVar4 & 2) == 0) {
                do {
                  *plVar20 = (longlong)plVar21;
                  LOCK();
                  bVar34 = plVar21 != DAT_14ca843c0;
                  plVar19 = plVar20;
                  if (bVar34) {
                    plVar21 = DAT_14ca843c0;
                    plVar19 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar19;
                  UNLOCK();
                } while (bVar34);
              }
              else {
                do {
                  *plVar20 = (longlong)plVar19;
                  LOCK();
                  bVar34 = plVar19 != DAT_14ca843c8;
                  plVar21 = plVar20;
                  if (bVar34) {
                    plVar19 = DAT_14ca843c8;
                    plVar21 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar21;
                  UNLOCK();
                } while (bVar34);
              }
            }
          }
        }
      }
      break;
    case 3:
      local_a0 = puVar33;
      local_98 = iVar23;
      (**(code **)(*DAT_14ca83900 + 0x70))(DAT_14ca83900,&local_b8,&local_a0,puVar31);
      lVar6 = *param_2;
      *param_2 = (longlong)local_b8;
      local_b8 = (undefined2 *)0x0;
      plVar18 = local_130;
      if (lVar6 != 0) {
        LOCK();
        puVar27 = (uint *)(lVar6 + 8);
        uVar14 = *puVar27;
        *puVar27 = *puVar27 - 1;
        UNLOCK();
        if ((uVar14 & 0x3fffffff) == 1) {
          puVar27 = (uint *)(lVar6 + 8);
          LOCK();
          uVar14 = *puVar27;
          *puVar27 = *puVar27 | 0x40000000;
          UNLOCK();
          if ((uVar14 >> 0x1e & 1) == 0) {
            bVar4 = *(byte *)(lVar6 + 0xd);
            plVar19 = (longlong *)FUN_14001cc68(0x10,8);
            plVar19[1] = lVar6;
            plVar21 = DAT_14ca843c0;
            plVar18 = DAT_14ca843c8;
            uVar24 = local_134;
            if ((bVar4 & 2) == 0) {
              do {
                *plVar19 = (longlong)plVar21;
                LOCK();
                bVar34 = plVar21 != DAT_14ca843c0;
                plVar18 = plVar19;
                if (bVar34) {
                  plVar21 = DAT_14ca843c0;
                  plVar18 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar18;
                UNLOCK();
              } while (bVar34);
            }
            else {
              do {
                *plVar19 = (longlong)plVar18;
                LOCK();
                bVar34 = plVar18 != DAT_14ca843c8;
                plVar21 = plVar19;
                if (bVar34) {
                  plVar18 = DAT_14ca843c8;
                  plVar21 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar21;
                UNLOCK();
              } while (bVar34);
            }
          }
        }
        puVar33 = local_b8;
        plVar18 = local_130;
        if (local_b8 != (undefined2 *)0x0) {
          LOCK();
          puVar27 = (uint *)(local_b8 + 4);
          uVar14 = *puVar27;
          *puVar27 = *puVar27 - 1;
          UNLOCK();
          if ((uVar14 & 0x3fffffff) == 1) {
            puVar27 = (uint *)(local_b8 + 4);
            LOCK();
            uVar14 = *puVar27;
            *puVar27 = *puVar27 | 0x40000000;
            UNLOCK();
            if ((uVar14 >> 0x1e & 1) == 0) {
              bVar4 = *(byte *)((longlong)local_b8 + 0xd);
              plVar20 = (longlong *)FUN_14001cc68(0x10,8);
              plVar20[1] = (longlong)puVar33;
              plVar21 = DAT_14ca843c0;
              plVar19 = DAT_14ca843c8;
              uVar24 = local_134;
              plVar18 = local_130;
              if ((bVar4 & 2) == 0) {
                do {
                  *plVar20 = (longlong)plVar21;
                  LOCK();
                  bVar34 = plVar21 != DAT_14ca843c0;
                  plVar19 = plVar20;
                  if (bVar34) {
                    plVar21 = DAT_14ca843c0;
                    plVar19 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar19;
                  UNLOCK();
                } while (bVar34);
              }
              else {
                do {
                  *plVar20 = (longlong)plVar19;
                  LOCK();
                  bVar34 = plVar19 != DAT_14ca843c8;
                  plVar21 = plVar20;
                  if (bVar34) {
                    plVar19 = DAT_14ca843c8;
                    plVar21 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar21;
                  UNLOCK();
                } while (bVar34);
              }
            }
          }
        }
      }
      break;
    case 4:
      local_a0 = puVar33;
      local_98 = iVar23;
      (**(code **)(*DAT_14ca83900 + 0x80))(DAT_14ca83900,&local_b8,&local_a0,puVar31);
      lVar6 = *param_2;
      *param_2 = (longlong)local_b8;
      local_b8 = (undefined2 *)0x0;
      plVar18 = local_130;
      if (lVar6 != 0) {
        LOCK();
        puVar27 = (uint *)(lVar6 + 8);
        uVar14 = *puVar27;
        *puVar27 = *puVar27 - 1;
        UNLOCK();
        if ((uVar14 & 0x3fffffff) == 1) {
          puVar27 = (uint *)(lVar6 + 8);
          LOCK();
          uVar14 = *puVar27;
          *puVar27 = *puVar27 | 0x40000000;
          UNLOCK();
          if ((uVar14 >> 0x1e & 1) == 0) {
            bVar4 = *(byte *)(lVar6 + 0xd);
            plVar19 = (longlong *)FUN_14001cc68(0x10,8);
            plVar19[1] = lVar6;
            plVar21 = DAT_14ca843c0;
            plVar18 = DAT_14ca843c8;
            uVar24 = local_134;
            if ((bVar4 & 2) == 0) {
              do {
                *plVar19 = (longlong)plVar21;
                LOCK();
                bVar34 = plVar21 != DAT_14ca843c0;
                plVar18 = plVar19;
                if (bVar34) {
                  plVar21 = DAT_14ca843c0;
                  plVar18 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar18;
                UNLOCK();
              } while (bVar34);
            }
            else {
              do {
                *plVar19 = (longlong)plVar18;
                LOCK();
                bVar34 = plVar18 != DAT_14ca843c8;
                plVar21 = plVar19;
                if (bVar34) {
                  plVar18 = DAT_14ca843c8;
                  plVar21 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar21;
                UNLOCK();
              } while (bVar34);
            }
          }
        }
        puVar33 = local_b8;
        plVar18 = local_130;
        if (local_b8 != (undefined2 *)0x0) {
          LOCK();
          puVar27 = (uint *)(local_b8 + 4);
          uVar14 = *puVar27;
          *puVar27 = *puVar27 - 1;
          UNLOCK();
          if ((uVar14 & 0x3fffffff) == 1) {
            puVar27 = (uint *)(local_b8 + 4);
            LOCK();
            uVar14 = *puVar27;
            *puVar27 = *puVar27 | 0x40000000;
            UNLOCK();
            if ((uVar14 >> 0x1e & 1) == 0) {
              bVar4 = *(byte *)((longlong)local_b8 + 0xd);
              plVar20 = (longlong *)FUN_14001cc68(0x10,8);
              plVar20[1] = (longlong)puVar33;
              plVar21 = DAT_14ca843c0;
              plVar19 = DAT_14ca843c8;
              uVar24 = local_134;
              plVar18 = local_130;
              if ((bVar4 & 2) == 0) {
                do {
                  *plVar20 = (longlong)plVar21;
                  LOCK();
                  bVar34 = plVar21 != DAT_14ca843c0;
                  plVar19 = plVar20;
                  if (bVar34) {
                    plVar21 = DAT_14ca843c0;
                    plVar19 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar19;
                  UNLOCK();
                } while (bVar34);
              }
              else {
                do {
                  *plVar20 = (longlong)plVar19;
                  LOCK();
                  bVar34 = plVar19 != DAT_14ca843c8;
                  plVar21 = plVar20;
                  if (bVar34) {
                    plVar19 = DAT_14ca843c8;
                    plVar21 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar21;
                  UNLOCK();
                } while (bVar34);
              }
            }
          }
        }
      }
      break;
    case 5:
      local_a0 = puVar33;
      local_98 = iVar23;
      (**(code **)(*DAT_14ca83900 + 0xa0))(DAT_14ca83900,&local_b8,&local_a0,puVar31);
      lVar6 = *param_2;
      *param_2 = (longlong)local_b8;
      local_b8 = (undefined2 *)0x0;
      plVar18 = local_130;
      if (lVar6 != 0) {
        LOCK();
        puVar27 = (uint *)(lVar6 + 8);
        uVar14 = *puVar27;
        *puVar27 = *puVar27 - 1;
        UNLOCK();
        if ((uVar14 & 0x3fffffff) == 1) {
          puVar27 = (uint *)(lVar6 + 8);
          LOCK();
          uVar14 = *puVar27;
          *puVar27 = *puVar27 | 0x40000000;
          UNLOCK();
          if ((uVar14 >> 0x1e & 1) == 0) {
            bVar4 = *(byte *)(lVar6 + 0xd);
            plVar19 = (longlong *)FUN_14001cc68(0x10,8);
            plVar19[1] = lVar6;
            plVar21 = DAT_14ca843c0;
            plVar18 = DAT_14ca843c8;
            uVar24 = local_134;
            if ((bVar4 & 2) == 0) {
              do {
                *plVar19 = (longlong)plVar21;
                LOCK();
                bVar34 = plVar21 != DAT_14ca843c0;
                plVar18 = plVar19;
                if (bVar34) {
                  plVar21 = DAT_14ca843c0;
                  plVar18 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar18;
                UNLOCK();
              } while (bVar34);
            }
            else {
              do {
                *plVar19 = (longlong)plVar18;
                LOCK();
                bVar34 = plVar18 != DAT_14ca843c8;
                plVar21 = plVar19;
                if (bVar34) {
                  plVar18 = DAT_14ca843c8;
                  plVar21 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar21;
                UNLOCK();
              } while (bVar34);
            }
          }
        }
        puVar33 = local_b8;
        plVar18 = local_130;
        if (local_b8 != (undefined2 *)0x0) {
          LOCK();
          puVar27 = (uint *)(local_b8 + 4);
          uVar14 = *puVar27;
          *puVar27 = *puVar27 - 1;
          UNLOCK();
          if ((uVar14 & 0x3fffffff) == 1) {
            puVar27 = (uint *)(local_b8 + 4);
            LOCK();
            uVar14 = *puVar27;
            *puVar27 = *puVar27 | 0x40000000;
            UNLOCK();
            if ((uVar14 >> 0x1e & 1) == 0) {
              bVar4 = *(byte *)((longlong)local_b8 + 0xd);
              plVar20 = (longlong *)FUN_14001cc68(0x10,8);
              plVar20[1] = (longlong)puVar33;
              plVar21 = DAT_14ca843c0;
              plVar19 = DAT_14ca843c8;
              uVar24 = local_134;
              plVar18 = local_130;
              if ((bVar4 & 2) == 0) {
                do {
                  *plVar20 = (longlong)plVar21;
                  LOCK();
                  bVar34 = plVar21 != DAT_14ca843c0;
                  plVar19 = plVar20;
                  if (bVar34) {
                    plVar21 = DAT_14ca843c0;
                    plVar19 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar19;
                  UNLOCK();
                } while (bVar34);
              }
              else {
                do {
                  *plVar20 = (longlong)plVar19;
                  LOCK();
                  bVar34 = plVar19 != DAT_14ca843c8;
                  plVar21 = plVar20;
                  if (bVar34) {
                    plVar19 = DAT_14ca843c8;
                    plVar21 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar21;
                  UNLOCK();
                } while (bVar34);
              }
            }
          }
        }
      }
      break;
    default:
      if ((DAT_14ca84ef4 == '\x01') && (DAT_14ca84ef5 == '\x01')) {
        local_168 = (undefined2 *)(CONCAT71(local_168._1_7_,(char)uVar25) & 0xffffffffffffff0f);
        local_a0 = puVar33;
        local_98 = iVar23;
        (**(code **)(*DAT_14ca83900 + 0x4e8))(DAT_14ca83900,&local_b8,&local_a0,puVar31);
        lVar6 = *param_2;
        *param_2 = (longlong)local_b8;
        local_b8 = (undefined2 *)0x0;
        plVar18 = local_130;
        if (lVar6 != 0) {
          LOCK();
          puVar27 = (uint *)(lVar6 + 8);
          uVar14 = *puVar27;
          *puVar27 = *puVar27 - 1;
          UNLOCK();
          if ((uVar14 & 0x3fffffff) == 1) {
            puVar27 = (uint *)(lVar6 + 8);
            LOCK();
            uVar14 = *puVar27;
            *puVar27 = *puVar27 | 0x40000000;
            UNLOCK();
            if ((uVar14 >> 0x1e & 1) == 0) {
              bVar4 = *(byte *)(lVar6 + 0xd);
              plVar19 = (longlong *)FUN_14001cc68(0x10,8);
              plVar19[1] = lVar6;
              plVar21 = DAT_14ca843c0;
              plVar18 = DAT_14ca843c8;
              uVar24 = local_134;
              if ((bVar4 & 2) == 0) {
                do {
                  *plVar19 = (longlong)plVar21;
                  LOCK();
                  bVar34 = plVar21 != DAT_14ca843c0;
                  plVar18 = plVar19;
                  if (bVar34) {
                    plVar21 = DAT_14ca843c0;
                    plVar18 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar18;
                  UNLOCK();
                } while (bVar34);
              }
              else {
                do {
                  *plVar19 = (longlong)plVar18;
                  LOCK();
                  bVar34 = plVar18 != DAT_14ca843c8;
                  plVar21 = plVar19;
                  if (bVar34) {
                    plVar18 = DAT_14ca843c8;
                    plVar21 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar21;
                  UNLOCK();
                } while (bVar34);
              }
            }
          }
          puVar33 = local_b8;
          plVar18 = local_130;
          if (local_b8 != (undefined2 *)0x0) {
            LOCK();
            puVar27 = (uint *)(local_b8 + 4);
            uVar14 = *puVar27;
            *puVar27 = *puVar27 - 1;
            UNLOCK();
            if ((uVar14 & 0x3fffffff) == 1) {
              puVar27 = (uint *)(local_b8 + 4);
              LOCK();
              uVar14 = *puVar27;
              *puVar27 = *puVar27 | 0x40000000;
              UNLOCK();
              if ((uVar14 >> 0x1e & 1) == 0) {
                bVar4 = *(byte *)((longlong)local_b8 + 0xd);
                plVar20 = (longlong *)FUN_14001cc68(0x10,8);
                plVar20[1] = (longlong)puVar33;
                plVar21 = DAT_14ca843c0;
                plVar19 = DAT_14ca843c8;
                uVar24 = local_134;
                plVar18 = local_130;
                if ((bVar4 & 2) == 0) {
                  do {
                    *plVar20 = (longlong)plVar21;
                    LOCK();
                    bVar34 = plVar21 != DAT_14ca843c0;
                    plVar19 = plVar20;
                    if (bVar34) {
                      plVar21 = DAT_14ca843c0;
                      plVar19 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar19;
                    UNLOCK();
                  } while (bVar34);
                }
                else {
                  do {
                    *plVar20 = (longlong)plVar19;
                    LOCK();
                    bVar34 = plVar19 != DAT_14ca843c8;
                    plVar21 = plVar20;
                    if (bVar34) {
                      plVar19 = DAT_14ca843c8;
                      plVar21 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar21;
                    UNLOCK();
                  } while (bVar34);
                }
              }
            }
          }
        }
      }
      break;
    case 10:
      local_168 = (undefined2 *)CONCAT71(local_168._1_7_,10);
      local_a0 = puVar33;
      local_98 = iVar23;
      (**(code **)(*DAT_14ca83900 + 0xa8))(DAT_14ca83900,&local_b8,&local_a0,puVar31);
      lVar6 = *param_2;
      *param_2 = (longlong)local_b8;
      local_b8 = (undefined2 *)0x0;
      plVar18 = local_130;
      if (lVar6 != 0) {
        LOCK();
        puVar27 = (uint *)(lVar6 + 8);
        uVar14 = *puVar27;
        *puVar27 = *puVar27 - 1;
        UNLOCK();
        if ((uVar14 & 0x3fffffff) == 1) {
          puVar27 = (uint *)(lVar6 + 8);
          LOCK();
          uVar14 = *puVar27;
          *puVar27 = *puVar27 | 0x40000000;
          UNLOCK();
          if ((uVar14 >> 0x1e & 1) == 0) {
            bVar4 = *(byte *)(lVar6 + 0xd);
            plVar19 = (longlong *)FUN_14001cc68(0x10,8);
            plVar19[1] = lVar6;
            plVar21 = DAT_14ca843c0;
            plVar18 = DAT_14ca843c8;
            uVar24 = local_134;
            if ((bVar4 & 2) == 0) {
              do {
                *plVar19 = (longlong)plVar21;
                LOCK();
                bVar34 = plVar21 != DAT_14ca843c0;
                plVar18 = plVar19;
                if (bVar34) {
                  plVar21 = DAT_14ca843c0;
                  plVar18 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar18;
                UNLOCK();
              } while (bVar34);
            }
            else {
              do {
                *plVar19 = (longlong)plVar18;
                LOCK();
                bVar34 = plVar18 != DAT_14ca843c8;
                plVar21 = plVar19;
                if (bVar34) {
                  plVar18 = DAT_14ca843c8;
                  plVar21 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar21;
                UNLOCK();
              } while (bVar34);
            }
          }
        }
        puVar33 = local_b8;
        plVar18 = local_130;
        if (local_b8 != (undefined2 *)0x0) {
          LOCK();
          puVar27 = (uint *)(local_b8 + 4);
          uVar14 = *puVar27;
          *puVar27 = *puVar27 - 1;
          UNLOCK();
          if ((uVar14 & 0x3fffffff) == 1) {
            puVar27 = (uint *)(local_b8 + 4);
            LOCK();
            uVar14 = *puVar27;
            *puVar27 = *puVar27 | 0x40000000;
            UNLOCK();
            if ((uVar14 >> 0x1e & 1) == 0) {
              bVar4 = *(byte *)((longlong)local_b8 + 0xd);
              plVar20 = (longlong *)FUN_14001cc68(0x10,8);
              plVar20[1] = (longlong)puVar33;
              plVar21 = DAT_14ca843c0;
              plVar19 = DAT_14ca843c8;
              uVar24 = local_134;
              plVar18 = local_130;
              if ((bVar4 & 2) == 0) {
                do {
                  *plVar20 = (longlong)plVar21;
                  LOCK();
                  bVar34 = plVar21 != DAT_14ca843c0;
                  plVar19 = plVar20;
                  if (bVar34) {
                    plVar21 = DAT_14ca843c0;
                    plVar19 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar19;
                  UNLOCK();
                } while (bVar34);
              }
              else {
                do {
                  *plVar20 = (longlong)plVar19;
                  LOCK();
                  bVar34 = plVar19 != DAT_14ca843c8;
                  plVar21 = plVar20;
                  if (bVar34) {
                    plVar19 = DAT_14ca843c8;
                    plVar21 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar21;
                  UNLOCK();
                } while (bVar34);
              }
            }
          }
        }
      }
      break;
    case 0xb:
      local_168 = (undefined2 *)CONCAT71(local_168._1_7_,0xb);
      local_a0 = puVar33;
      local_98 = iVar23;
      (**(code **)(*DAT_14ca83900 + 0xa8))(DAT_14ca83900,&local_b8,&local_a0,puVar31);
      lVar6 = *param_2;
      *param_2 = (longlong)local_b8;
      local_b8 = (undefined2 *)0x0;
      plVar18 = local_130;
      if (lVar6 != 0) {
        LOCK();
        puVar27 = (uint *)(lVar6 + 8);
        uVar14 = *puVar27;
        *puVar27 = *puVar27 - 1;
        UNLOCK();
        if ((uVar14 & 0x3fffffff) == 1) {
          puVar27 = (uint *)(lVar6 + 8);
          LOCK();
          uVar14 = *puVar27;
          *puVar27 = *puVar27 | 0x40000000;
          UNLOCK();
          if ((uVar14 >> 0x1e & 1) == 0) {
            bVar4 = *(byte *)(lVar6 + 0xd);
            plVar19 = (longlong *)FUN_14001cc68(0x10,8);
            plVar19[1] = lVar6;
            plVar21 = DAT_14ca843c0;
            plVar18 = DAT_14ca843c8;
            uVar24 = local_134;
            if ((bVar4 & 2) == 0) {
              do {
                *plVar19 = (longlong)plVar21;
                LOCK();
                bVar34 = plVar21 != DAT_14ca843c0;
                plVar18 = plVar19;
                if (bVar34) {
                  plVar21 = DAT_14ca843c0;
                  plVar18 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar18;
                UNLOCK();
              } while (bVar34);
            }
            else {
              do {
                *plVar19 = (longlong)plVar18;
                LOCK();
                bVar34 = plVar18 != DAT_14ca843c8;
                plVar21 = plVar19;
                if (bVar34) {
                  plVar18 = DAT_14ca843c8;
                  plVar21 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar21;
                UNLOCK();
              } while (bVar34);
            }
          }
        }
        puVar33 = local_b8;
        plVar18 = local_130;
        if (local_b8 != (undefined2 *)0x0) {
          LOCK();
          puVar27 = (uint *)(local_b8 + 4);
          uVar14 = *puVar27;
          *puVar27 = *puVar27 - 1;
          UNLOCK();
          if ((uVar14 & 0x3fffffff) == 1) {
            puVar27 = (uint *)(local_b8 + 4);
            LOCK();
            uVar14 = *puVar27;
            *puVar27 = *puVar27 | 0x40000000;
            UNLOCK();
            if ((uVar14 >> 0x1e & 1) == 0) {
              bVar4 = *(byte *)((longlong)local_b8 + 0xd);
              plVar20 = (longlong *)FUN_14001cc68(0x10,8);
              plVar20[1] = (longlong)puVar33;
              plVar21 = DAT_14ca843c0;
              plVar19 = DAT_14ca843c8;
              uVar24 = local_134;
              plVar18 = local_130;
              if ((bVar4 & 2) == 0) {
                do {
                  *plVar20 = (longlong)plVar21;
                  LOCK();
                  bVar34 = plVar21 != DAT_14ca843c0;
                  plVar19 = plVar20;
                  if (bVar34) {
                    plVar21 = DAT_14ca843c0;
                    plVar19 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar19;
                  UNLOCK();
                } while (bVar34);
              }
              else {
                do {
                  *plVar20 = (longlong)plVar19;
                  LOCK();
                  bVar34 = plVar19 != DAT_14ca843c8;
                  plVar21 = plVar20;
                  if (bVar34) {
                    plVar19 = DAT_14ca843c8;
                    plVar21 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar21;
                  UNLOCK();
                } while (bVar34);
              }
            }
          }
        }
      }
    }
  }
  FUN_1400f4110(plVar18,uVar24);
  lVar6 = *param_2;
  if (lVar6 != 0) {
    *(undefined4 *)(lVar6 + 0x98) = puVar31[4];
    uVar5 = puVar31[1];
    uVar10 = puVar31[2];
    uVar11 = puVar31[3];
    *(undefined4 *)(lVar6 + 0x88) = *puVar31;
    *(undefined4 *)(lVar6 + 0x8c) = uVar5;
    *(undefined4 *)(lVar6 + 0x90) = uVar10;
    *(undefined4 *)(lVar6 + 0x94) = uVar11;
  }
  if (local_e0 == '\0') {
    local_e0 = '\x01';
    *(int *)(local_f8.QuadPart + 0x20) = *(int *)(local_f8.QuadPart + 0x20) + -1;
    if (local_e8 != *(ulonglong *)(local_f8.QuadPart + 0x10)) {
      FUN_14004673c();
    }
    *(ulonglong *)local_f8 = local_f0;
    *(ulonglong *)(local_f8.QuadPart + 0x18) = local_d8;
  }
LAB_14322a511:
  if (local_d0 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_d0 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*local_d0)(local_d0,1);
    }
  }
  puVar26 = local_90;
  if (local_70 != (undefined1 *)0x0) {
    puVar26 = local_70;
  }
  FUN_144717c65(puVar26,local_68 & 0xffffffff);
  if (local_70 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14322a988 FUN_14322a988 body=126 status=ok
// SIG undefined FUN_14322a988(void)

int FUN_14322a988(longlong param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (1 < *(uint *)(param_1 + 0x130)) {
    iVar1 = *(uint *)(param_1 + 0x130) * 4;
  }
  return iVar1 + 0x1b8 +
         (*(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x44)) * 0x14 +
         *(int *)(param_1 + 100) * 0xc + *(int *)(param_1 + 0x94) * 0x10 +
         (*(int *)(param_1 + 0x84) + *(int *)(param_1 + 0x74)) * 8 + *(int *)(param_1 + 0xa4) * 4 +
         *(int *)(param_1 + 0xf4) * 0x18 + (*(int *)(param_1 + 0x114) + 0x1fU >> 5) * 4;
}



// FUNCTION 14322aa1a FUN_14322aa1a body=12 status=ok
// SIG undefined FUN_14322aa1a(void)

void FUN_14322aa1a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014322aa23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14322aa26 FUN_14322aa26 body=29 status=ok
// SIG undefined FUN_14322aa26(void)

undefined8 FUN_14322aa26(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14322aa6a FUN_14322aa6a body=282 status=ok
// SIG undefined FUN_14322aa6a(void)

undefined8 * FUN_14322aa6a(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14322aa43);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14322abc8 FUN_14322abc8 body=238 status=ok
// SIG undefined FUN_14322abc8(void)

undefined8 FUN_14322abc8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  uint uVar4;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar3 + 0xc60) == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  puVar1 = (undefined4 *)(lVar3 + 0xc60);
  LOCK();
  uVar4 = DAT_14c844204 >> 5;
  DAT_14c844204 = DAT_14c844204 | 0x20;
  UNLOCK();
  if ((uVar4 & 1) != 0) {
    LOCK();
    DAT_14c844204 = 0;
    UNLOCK();
  }
  uVar2 = *puVar1;
  *puVar1 = 0x20;
  if (DAT_14c872d28 == (longlong *)0x0) {
    FUN_1460d69fa();
  }
  (**(code **)(*DAT_14c872d28 + 0x78))();
  (**(code **)(*DAT_14ca83900 + 0x318))();
  (**(code **)(*DAT_14c82b500 + 0x40))(DAT_14c82b500,0);
  (**(code **)(*DAT_14c82b500 + 0x50))(DAT_14c82b500,0);
  (**(code **)(*DAT_14ca83900 + 800))();
  if (DAT_14c872d28 != (longlong *)0x0) {
    (**(code **)(*DAT_14c872d28 + 0x90))();
  }
  *puVar1 = uVar2;
  LOCK();
  DAT_14c844204 = DAT_14c844204 & 0xffffffdf;
  UNLOCK();
  return 0;
}



// FUNCTION 14322acb6 FUN_14322acb6 body=230 status=ok
// SIG undefined FUN_14322acb6(void)

undefined8 FUN_14322acb6(longlong param_1)

{
  char cVar1;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    FUN_1460d69fa();
  }
  (**(code **)(*DAT_14c872d28 + 0x78))();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  LOCK();
  UNLOCK();
  if ((DAT_14c844204 >> 4 & 1) != 0) {
    LOCK();
    DAT_14c844204 = 0;
    UNLOCK();
  }
  LOCK();
  DAT_14c844204 = DAT_14c844204 & 0xffffffef;
  UNLOCK();
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar1 = FUN_14054d46e(&DAT_14c846b20,L"noexceptionhandler");
  if (cVar1 == '\0') {
    FUN_143220d18(*(undefined8 *)(param_1 + 8));
  }
  else {
    FUN_143220d18(*(undefined8 *)(param_1 + 8));
  }
  if (DAT_14c872d28 != (longlong *)0x0) {
    (**(code **)(*DAT_14c872d28 + 0x90))();
  }
  return 0;
}



// FUNCTION 14322ae26 FUN_14322ae26 body=42 status=ok
// SIG undefined FUN_14322ae26(void)

void FUN_14322ae26(undefined8 param_1)

{
  if (DAT_14ca83900 != (longlong *)0x0) {
    (**(code **)(*DAT_14ca83900 + 0x98))();
  }
  FUN_14682ea22(param_1);
  return;
}



// FUNCTION 14322ae50 FUN_14322ae50 body=1516 status=ok
// SIG undefined FUN_14322ae50(void)

void FUN_14322ae50(undefined8 param_1,void **param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *pvVar4;
  void **ppvVar5;
  ulonglong uVar6;
  uint uVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  int iVar17;
  longlong lVar18;
  undefined1 auStack_a8 [32];
  undefined1 **local_88;
  void **local_80;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  void **local_40;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = (void *)0x0;
  local_70 = *(int *)(param_3 + 1);
  lVar18 = (longlong)local_70;
  pvVar4 = (void *)*param_3;
  local_80 = param_2;
  if (lVar18 == 0) {
    local_6c = 0;
  }
  else {
    FUN_1446dd670(&local_78,local_70,0);
    memcpy(local_78,pvVar4,lVar18 * 2);
  }
  lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar17 = *(int *)(lVar18 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar17 != 2) {
      if (iVar17 != 1) goto LAB_14322aed9;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_14322aede;
      goto LAB_14322af53;
    }
  }
  else {
LAB_14322aed9:
    if (iVar17 != 0x10) {
LAB_14322af53:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar17 = *(int *)(lVar18 + 0xc60), iVar17 == 2))
        goto LAB_14322aede;
        if (iVar17 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_14322aede;
        }
      }
      pvVar4 = local_78;
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar11 = (uint *)*puVar2;
        if (puVar11 != (uint *)0x0) goto LAB_14322b118;
        while( true ) {
          uVar7 = *(uint *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x318);
          if ((uVar7 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar7 | 1;
            __tlregdtor(&LAB_14322aa43);
          }
          lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar10 = *(undefined4 **)(lVar18 + 0x310);
          *(undefined8 *)(lVar18 + 0x310) = 0;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar10 = 0xffffffff;
          *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar2 = puVar10;
          FUN_140217a48(puVar2);
          puVar11 = (uint *)*puVar2;
LAB_14322b118:
          puVar16 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar16 + 0x18);
          uVar7 = puVar11[0x12];
          if (puVar14 <= puVar11 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
            LOCK();
            uVar3 = *puVar11;
            *puVar11 = *puVar11 + uVar7 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar7) != 0xffffffff) break;
            puVar11 = (uint *)*puVar2;
            *puVar11 = 0xffffffff;
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
            puVar11[0x12] = 0;
            *puVar2 = puVar11;
            puVar16 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar16 + 0x18);
            uVar7 = 0;
            if (puVar14 <= puVar11 + 0x4000) {
              uVar7 = 1;
              goto LAB_14322b198;
            }
          }
        }
        uVar7 = uVar7 + 1;
LAB_14322b198:
        *(uint **)(puVar11 + 0x10) = puVar14;
        puVar11[0x12] = uVar7;
        FUN_1447247dc(puVar16,0);
        pvVar4 = local_78;
        *puVar16 = &PTR_FUN_14a391a00;
        puVar16[0x15] = local_80;
        puVar16[0x16] = 0;
        lVar18 = (longlong)local_70;
        *(int *)(puVar16 + 0x17) = local_70;
        if (lVar18 == 0) {
          *(undefined4 *)((longlong)puVar16 + 0xbc) = 0;
        }
        else {
          FUN_1446dd670(puVar16 + 0x16,local_70,0);
          memcpy((void *)puVar16[0x16],pvVar4,lVar18 * 2);
        }
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar7 = DAT_14c7585c8 >> 10 & 3;
          iVar17 = 0;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar7 < 2) {
            uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar7];
            iVar17 = 0;
          }
          else {
            uVar15 = 2;
          }
        }
        else {
          iVar17 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar15 = 5;
        }
        if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
        }
        puVar16[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar16[9] = puVar16;
        puVar16[10] = puVar16;
        lVar18 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar18 == 0) {
          uVar6 = 1;
          if ((char)uVar15 != '\x06') {
            uVar6 = uVar15;
          }
          uVar15 = uVar6;
          uVar12 = 0;
        }
        else {
          if ((char)uVar15 == '\x06') {
            uVar15 = *(ulonglong *)(lVar18 + 0x38) >> 0x3b;
          }
          uVar12 = *(undefined8 *)(lVar18 + 0x30);
        }
        puVar16[0xf] = uVar12;
        puVar16[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar16 + 0x1c) = iVar17;
        if (puVar16 == (undefined8 *)0x0) {
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(puVar16);
          LOCK();
          piVar1 = (int *)(puVar16 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar16)(puVar16,1);
          }
        }
      }
      else {
        local_68[0] = (undefined1 *)0x0;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14a3919c0;
        local_40 = local_80;
        local_38 = (void *)0x0;
        lVar18 = (longlong)local_70;
        local_30 = local_70;
        if (lVar18 == 0) {
          local_2c = 0;
        }
        else {
          FUN_1446dd670(&local_38,local_70,0);
          memcpy(local_38,pvVar4,lVar18 * 2);
        }
        local_88 = local_68;
        local_68[0] = &LAB_14743481e;
        FUN_14005a792(&DAT_14ca9a440,L"OnCVarChange3",&DAT_14ca98a8c);
        if (local_68[0] != (undefined1 *)0x0) {
          pppuVar13 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar13 = &local_48;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_14322b042;
    }
  }
LAB_14322aede:
  iVar17 = local_70;
  pvVar4 = local_78;
  ppvVar5 = local_80;
  if (local_80 != &local_78) {
    lVar18 = (longlong)local_70;
    *(int *)(local_80 + 1) = local_70;
    if (local_70 == 0 && *(int *)((longlong)local_80 + 0xc) == 0) {
      *(undefined4 *)((longlong)local_80 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(local_80,local_70);
      if (iVar17 != 0) {
        memcpy(*ppvVar5,pvVar4,lVar18 * 2);
      }
    }
  }
LAB_14322b042:
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14322b43e FUN_14322b43e body=1213 status=ok
// SIG undefined FUN_14322b43e(void)

void FUN_14322b43e(undefined8 param_1,undefined1 *param_2,undefined1 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined1 local_69;
  undefined8 local_68;
  undefined ***local_58;
  undefined **local_48;
  undefined1 *local_40;
  undefined1 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_14322b47f;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_14322b484;
      goto LAB_14322b4a6;
    }
  }
  else {
LAB_14322b47f:
    if (iVar7 != 0x10) {
LAB_14322b4a6:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar4 + 0xc60), iVar7 == 2))
        goto LAB_14322b484;
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_14322b484;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar11 = (uint *)*puVar2;
        if (puVar11 != (uint *)0x0) goto LAB_14322b601;
        while( true ) {
          uVar13 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar13 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar13 | 1;
            __tlregdtor(&LAB_14322aa43);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar10 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar10 = 0xffffffff;
          *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar2 = puVar10;
          FUN_140217a48(puVar2);
          puVar11 = (uint *)*puVar2;
LAB_14322b601:
          puVar16 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar16 + 0x17);
          uVar13 = puVar11[0x12];
          if (puVar15 <= puVar11 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
            LOCK();
            uVar3 = *puVar11;
            *puVar11 = *puVar11 + uVar13 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar13) != 0xffffffff) break;
            puVar11 = (uint *)*puVar2;
            *puVar11 = 0xffffffff;
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
            puVar11[0x12] = 0;
            *puVar2 = puVar11;
            puVar16 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
            puVar15 = (uint *)(puVar16 + 0x17);
            uVar13 = 0;
            if (puVar15 <= puVar11 + 0x4000) {
              uVar13 = 1;
              goto LAB_14322b681;
            }
          }
        }
        uVar13 = uVar13 + 1;
LAB_14322b681:
        *(uint **)(puVar11 + 0x10) = puVar15;
        puVar11[0x12] = uVar13;
        iVar7 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14a391a50;
        puVar16[0x15] = param_2;
        *(undefined1 *)(puVar16 + 0x16) = param_3;
        uVar5 = (undefined4)local_68;
        *(undefined4 *)((longlong)puVar16 + 0xb1) = uVar5;
        *(undefined4 *)((longlong)puVar16 + 0xb4) = local_68._3_4_;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar13 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
            uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
            iVar7 = 0;
          }
          else {
            uVar17 = 2;
          }
        }
        else {
          iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar17 = 5;
        }
        if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
        }
        puVar16[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar16[9] = puVar16;
        puVar16[10] = puVar16;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar6 = 1;
          if ((char)uVar17 != '\x06') {
            uVar6 = uVar17;
          }
          uVar17 = uVar6;
          uVar12 = 0;
        }
        else {
          if ((char)uVar17 == '\x06') {
            uVar17 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar12 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar16[0xf] = uVar12;
        puVar16[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar16 + 0x1c) = iVar7;
        if (puVar16 == (undefined8 *)0x0) {
          local_69 = 1;
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_69 = 1;
          FUN_1447439e4(puVar16);
          LOCK();
          piVar1 = (int *)(puVar16 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar16)(puVar16,1);
          }
        }
      }
      else {
        local_78 = &local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14a391a10;
        local_68 = &LAB_14322c37c;
        local_40 = param_2;
        local_38 = param_3;
        FUN_14005a792(&DAT_14ca9a440,L"OnCVarChange2",&DAT_14ca98a90);
        if (local_68 != (undefined1 *)0x0) {
          pppuVar14 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar14 = &local_48;
          }
          (*(code *)(*pppuVar14)[2])();
        }
      }
      goto LAB_14322b540;
    }
  }
LAB_14322b484:
  *param_2 = param_3;
LAB_14322b540:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14322b8fc FUN_14322b8fc body=1211 status=ok
// SIG undefined FUN_14322b8fc(void)

void FUN_14322b8fc(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined1 auStack_a8 [32];
  undefined1 **local_88;
  undefined1 *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  undefined4 *local_50;
  undefined4 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_14322b945;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_14322b94a;
      goto LAB_14322b96e;
    }
  }
  else {
LAB_14322b945:
    if (iVar6 != 0x10) {
LAB_14322b96e:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_14322b94a;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_14322b94a;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_14322bad4;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_14322aa43);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_14322bad4:
          puVar15 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar15 + 0x17);
          uVar12 = puVar10[0x12];
          if (puVar14 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar3 = *puVar10;
            *puVar10 = *puVar10 + uVar12 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar12) != 0xffffffff) break;
            puVar10 = (uint *)*puVar2;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            puVar15 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar15 + 0x17);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_14322bb54;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_14322bb54:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar15,0);
        *puVar15 = &PTR_FUN_14a391a80;
        puVar15[0x15] = param_2;
        *(undefined4 *)(puVar15 + 0x16) = param_3;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
            iVar6 = 0;
          }
          else {
            uVar16 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar16 = 5;
        }
        if (*(code **)(puVar15[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar15[0xe] + 0x18))(puVar15 + 0xe,puVar15 + 9);
        }
        puVar15[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar15[9] = puVar15;
        puVar15[10] = puVar15;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar16 != '\x06') {
            uVar5 = uVar16;
          }
          uVar16 = uVar5;
          uVar11 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar15[0xf] = uVar11;
        puVar15[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar15 + 0x1c) = iVar6;
        if (puVar15 == (undefined8 *)0x0) {
          local_78[0] = (undefined1 *)CONCAT71(local_78[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
          UNLOCK();
          local_78[0] = (undefined1 *)CONCAT71(local_78[0]._1_7_,1);
          FUN_1447439e4(puVar15);
          LOCK();
          piVar1 = (int *)(puVar15 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar15)(puVar15,1);
          }
        }
      }
      else {
        local_88 = local_78;
        local_68 = (undefined ***)0x0;
        local_58 = &PTR_LAB_14a391a60;
        local_78[0] = &LAB_14322c4a6;
        local_50 = param_2;
        local_48 = param_3;
        FUN_14005a792(&DAT_14ca9a440,L"OnCVarChange2",&DAT_14ca98a94);
        if (local_78[0] != (undefined1 *)0x0) {
          pppuVar13 = local_68;
          if (local_68 == (undefined ***)0x0) {
            pppuVar13 = &local_58;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_14322ba0a;
    }
  }
LAB_14322b94a:
  *param_2 = param_3;
LAB_14322ba0a:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14322bdb8 FUN_14322bdb8 body=1193 status=ok
// SIG undefined FUN_14322bdb8(void)

void FUN_14322bdb8(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined4 *local_40;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_14322bdf9;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_14322bdfe;
      goto LAB_14322be20;
    }
  }
  else {
LAB_14322bdf9:
    if (iVar6 != 0x10) {
LAB_14322be20:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_14322bdfe;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_14322bdfe;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_14322bf7b;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_14322aa43);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_14322bf7b:
          puVar15 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar15 + 0x17);
          uVar12 = puVar10[0x12];
          if (puVar14 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar3 = *puVar10;
            *puVar10 = *puVar10 + uVar12 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar12) != 0xffffffff) break;
            puVar10 = (uint *)*puVar2;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            puVar15 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar15 + 0x17);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_14322bffb;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_14322bffb:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar15,0);
        *puVar15 = &PTR_FUN_14a391ad0;
        puVar15[0x15] = param_2;
        *(undefined4 *)(puVar15 + 0x16) = param_3;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
            iVar6 = 0;
          }
          else {
            uVar16 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar16 = 5;
        }
        if (*(code **)(puVar15[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar15[0xe] + 0x18))(puVar15 + 0xe,puVar15 + 9);
        }
        puVar15[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar15[9] = puVar15;
        puVar15[10] = puVar15;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar16 != '\x06') {
            uVar5 = uVar16;
          }
          uVar16 = uVar5;
          uVar11 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar15[0xf] = uVar11;
        puVar15[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar15 + 0x1c) = iVar6;
        if (puVar15 == (undefined8 *)0x0) {
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
          UNLOCK();
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(puVar15);
          LOCK();
          piVar1 = (int *)(puVar15 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar15)(puVar15,1);
          }
        }
      }
      else {
        local_78 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14a391a90;
        local_68[0] = &LAB_14322c5d4;
        local_40 = param_2;
        local_38 = param_3;
        FUN_14005a792(&DAT_14ca9a440,L"OnCVarChange1",&DAT_14ca98a98);
        if (local_68[0] != (undefined1 *)0x0) {
          pppuVar13 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar13 = &local_48;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_14322beba;
    }
  }
LAB_14322bdfe:
  *param_2 = param_3;
LAB_14322beba:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14322c262 FUN_14322c262 body=282 status=ok
// SIG undefined FUN_14322c262(void)

undefined8 * FUN_14322c262(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14322aa43);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14322c38c FUN_14322c38c body=282 status=ok
// SIG undefined FUN_14322c38c(void)

undefined8 * FUN_14322c38c(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14322aa43);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14322c4ba FUN_14322c4ba body=282 status=ok
// SIG undefined FUN_14322c4ba(void)

undefined8 * FUN_14322c4ba(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14322aa43);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14322c5e4 FUN_14322c5e4 body=282 status=ok
// SIG undefined FUN_14322c5e4(void)

undefined8 * FUN_14322c5e4(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14322aa43);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14322c6fe FUN_14322c6fe body=51 status=ok
// SIG undefined FUN_14322c6fe(void)

void FUN_14322c6fe(void)

{
  if ((DAT_14ca850f8 == '\0') && ((DAT_14ca84e0d != '\0' || (DAT_14c842750 == '\0')))) {
    DAT_14ca850f9 = FUN_1447e0190();
  }
  else {
    DAT_14ca850f9 = 0;
  }
  return;
}



// FUNCTION 14322c732 FUN_14322c732 body=282 status=ok
// SIG undefined FUN_14322c732(void)

undefined8 * FUN_14322c732(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14322aa43);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14322c84c FUN_14322c84c body=152 status=ok
// SIG undefined FUN_14322c84c(void)

ulonglong FUN_14322c84c(undefined8 *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    uVar2 = (ulonglong)DAT_14c7585c8;
    if ((DAT_14ca850f8 == '\0') && ((DAT_14ca84e0d != '\0' || (DAT_14c842750 != '\x01')))) {
      uVar2 = FUN_1447e0190();
      DAT_14ca850f9 = (undefined1)uVar2;
    }
    else {
      DAT_14ca850f9 = 0;
    }
  }
  else {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
    if ((DAT_14ca850f8 == '\0') && ((DAT_14ca84e0d != '\0' || (DAT_14c842750 == '\0')))) {
      uVar2 = FUN_1447e0190();
    }
    else {
      uVar2 = 0;
    }
    DAT_14ca850f9 = (undefined1)uVar2;
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014322c8be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)*param_1)(param_1,1);
      return uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 14322c8e4 FUN_14322c8e4 body=1294 status=ok
// SIG undefined FUN_14322c8e4(void)

undefined8 FUN_14322c8e4(void)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  undefined ***pppuVar12;
  int iVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 auStack_e8 [32];
  undefined1 **local_c8;
  undefined8 *local_c0;
  longlong *local_b8;
  longlong local_b0;
  undefined1 *local_a8 [2];
  undefined ***local_98;
  undefined **local_88;
  undefined1 *local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((DAT_14ca96594 & 1) != 0) {
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar2 = (undefined8 *)(lVar4 + 0x308);
    puVar16 = (undefined8 *)(lVar4 + 0x310);
    local_b0 = 0x527800b400;
    local_b8 = (longlong *)(lVar4 + 0x2b8);
    do {
      FUN_14000f986(0x3bcccccd);
      if (DAT_14ca96598 < 4) {
        LOCK();
        DAT_14ca96598 = DAT_14ca96598 + 1;
        UNLOCK();
        iVar13 = *(int *)(lVar4 + 0xc60);
        if (DAT_14c86a9fc == 0) {
          if (iVar13 != 2) {
            if (iVar13 != 1) goto LAB_14322c9ba;
            DVar7 = FUN_140ad26c0();
            DVar8 = GetCurrentThreadId();
            if (DVar7 == DVar8) goto LAB_14322c9bf;
            goto LAB_14322c9fb;
          }
        }
        else {
LAB_14322c9ba:
          if (iVar13 != 0x10) {
LAB_14322c9fb:
            if (DAT_14ca9a438 == '\0') {
              if ((DAT_14c86a9f8 != '\x01') || (iVar13 = *(int *)(lVar4 + 0xc60), iVar13 == 2))
              goto LAB_14322c9bf;
              if (iVar13 == 1) {
                DVar7 = FUN_140ad26c0();
                DVar8 = GetCurrentThreadId();
                if (DVar7 == DVar8) goto LAB_14322c9bf;
              }
            }
            if (DAT_14ca9a43c == 0) {
              puVar10 = (uint *)*puVar2;
              if (puVar10 != (uint *)0x0) goto LAB_14322cb03;
              do {
                uVar6 = *(uint *)(*(longlong *)
                                   ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                 + 0x318);
                if ((uVar6 & 1) == 0) {
                  *(uint *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x318) = uVar6 | 1;
                  __tlregdtor(&LAB_14322aa43);
                }
                puVar9 = (undefined4 *)*puVar16;
                *puVar16 = 0;
                if (puVar9 == (undefined4 *)0x0) {
                  puVar9 = _aligned_malloc(0x10000,0x10000);
                }
                *puVar9 = 0xffffffff;
                *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
                puVar9[0x12] = 0;
                *puVar2 = puVar9;
                FUN_140217a48(puVar2);
                puVar10 = (uint *)*puVar2;
LAB_14322cb03:
                uVar14 = *(longlong *)(puVar10 + 0x10) + 7;
                uVar6 = puVar10[0x12];
                while( true ) {
                  puVar15 = (undefined8 *)(uVar14 & 0xfffffffffffffff8);
                  if (puVar15 + 0x16 <= puVar10 + 0x4000) {
                    *(undefined8 **)(puVar10 + 0x10) = puVar15 + 0x16;
                    puVar10[0x12] = uVar6 + 1;
                    FUN_1447247dc(puVar15,0);
                    *puVar15 = &PTR_FUN_14a391b70;
                    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                      uVar6 = DAT_14c7585c8 >> 10 & 3;
                      iVar13 = 0;
                      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar6 < 2) {
                        uVar14 = (ulonglong)(byte)(&DAT_149e38edc)[uVar6];
                        iVar13 = 0;
                      }
                      else {
                        uVar14 = 2;
                      }
                    }
                    else {
                      iVar13 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                               *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                      uVar14 = 5;
                    }
                    local_c0 = puVar16;
                    if (*(code **)(puVar15[0xe] + 0x18) != FUN_144713626) {
                      (**(code **)(puVar15[0xe] + 0x18))(puVar15 + 0xe,puVar15 + 9);
                    }
                    puVar16 = local_c0;
                    puVar15[0xe] = LowLevelTasks::
                                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                                   ::
                                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                                   ::vftable;
                    puVar15[9] = puVar15;
                    puVar15[10] = puVar15;
                    lVar5 = *local_b8;
                    if (lVar5 == 0) {
                      if ((char)uVar14 == '\x06') {
                        uVar14 = 1;
                      }
                      uVar11 = 0;
                    }
                    else {
                      if ((char)uVar14 == '\x06') {
                        uVar14 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
                      }
                      uVar11 = *(undefined8 *)(lVar5 + 0x30);
                    }
                    puVar15[0xf] = uVar11;
                    puVar15[0x10] = (uVar14 << 0x3b) + local_b0 | 0xc000000000000000;
                    *(int *)((longlong)puVar15 + 0x1c) = iVar13;
                    if (puVar15 == (undefined8 *)0x0) {
                      local_a8[0] = (undefined1 *)CONCAT71(local_a8[0]._1_7_,1);
                      FUN_1447439e4(0,local_a8);
                    }
                    else {
                      LOCK();
                      *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
                      UNLOCK();
                      local_a8[0] = (undefined1 *)CONCAT71(local_a8[0]._1_7_,1);
                      FUN_1447439e4(puVar15,local_a8);
                      LOCK();
                      piVar1 = (int *)(puVar15 + 1);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (*piVar1 == 0) {
                        (**(code **)*puVar15)(puVar15,1);
                      }
                    }
                    goto LAB_14322ca85;
                  }
                  *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
                  LOCK();
                  uVar3 = *puVar10;
                  *puVar10 = *puVar10 + uVar6 + 1;
                  UNLOCK();
                  if ((uVar3 ^ uVar6) != 0xffffffff) break;
                  puVar10 = (uint *)*puVar2;
                  *puVar10 = 0xffffffff;
                  *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
                  puVar10[0x12] = 0;
                  *puVar2 = puVar10;
                  uVar14 = (longlong)puVar10 + 0x5f;
                  uVar6 = 0;
                }
              } while( true );
            }
            local_98 = (undefined ***)0x0;
            local_88 = &PTR_LAB_14a2f19c0;
            local_80 = &LAB_1474349ec;
            local_a8[0] = &LAB_1448467b2;
            local_c8 = local_a8;
            FUN_14005a792(&DAT_14ca9a440,L"HeartbeatTickTickables",&DAT_14ca98aa0);
            if (local_a8[0] != (undefined1 *)0x0) {
              pppuVar12 = local_98;
              if (local_98 == (undefined ***)0x0) {
                pppuVar12 = &local_88;
              }
              (*(code *)(*pppuVar12)[2])();
            }
            goto LAB_14322ca85;
          }
        }
LAB_14322c9bf:
        LOCK();
        DAT_14ca96598 = DAT_14ca96598 + -1;
        UNLOCK();
        if (DAT_14ca9659c == 0) {
          FUN_14013e875();
        }
      }
LAB_14322ca85:
    } while ((DAT_14ca96594 & 1) != 0);
  }
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14322cdf4 FUN_14322cdf4 body=282 status=ok
// SIG undefined FUN_14322cdf4(void)

undefined8 * FUN_14322cdf4(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14322aa43);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14322cf0e FUN_14322cf0e body=85 status=ok
// SIG undefined FUN_14322cf0e(void)

void FUN_14322cf0e(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  LOCK();
  DAT_14ca96598 = DAT_14ca96598 + -1;
  UNLOCK();
  if (DAT_14ca9659c == 0) {
    FUN_14013e875();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014322cf59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14322cf64 FUN_14322cf64 body=547 status=ok
// SIG undefined FUN_14322cf64(void)

longlong * FUN_14322cf64(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 14322d188 FUN_14322d188 body=75 status=ok
// SIG undefined FUN_14322d188(void)

void FUN_14322d188(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x10))();
  plVar3 = *(longlong **)(param_1 + 0xb0);
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
                    /* WARNING: Could not recover jumptable at 0x00014322d1c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14322d1d4 FUN_14322d1d4 body=110 status=ok
// SIG undefined FUN_14322d1d4(void)

undefined8 * FUN_14322d1d4(undefined8 *param_1,int param_2)

{
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14322d242 FUN_14322d242 body=68 status=ok
// SIG undefined FUN_14322d242(void)

void FUN_14322d242(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar1 = *param_1;
  iVar2 = (int)param_1[3];
  DAT_14ca83d40 = DAT_14ca83d40 + iVar2;
  if ((longlong)iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    plVar4 = (longlong *)param_1[2];
    plVar3 = plVar4 + (longlong)iVar2 * 2;
    do {
      *(longlong *)(*plVar4 + 0x18) = plVar4[1];
      plVar4 = plVar4 + 2;
    } while (plVar4 != plVar3);
    iVar2 = (int)param_1[3];
  }
  *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + iVar2;
  FUN_1400daade(param_1 + 1);
  return;
}



// FUNCTION 14322d28c FUN_14322d28c body=282 status=ok
// SIG undefined FUN_14322d28c(void)

undefined8 * FUN_14322d28c(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14322aa43);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14322d3ac FUN_14322d3ac body=282 status=ok
// SIG undefined FUN_14322d3ac(void)

undefined8 * FUN_14322d3ac(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14322aa43);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14322d4cc FUN_14322d4cc body=282 status=ok
// SIG undefined FUN_14322d4cc(void)

undefined8 * FUN_14322d4cc(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14322aa43);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14322d5e6 FUN_14322d5e6 body=164 status=ok
// SIG undefined FUN_14322d5e6(void)

ulonglong FUN_14322d5e6(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar4 = (ulonglong)DAT_14c7585c8;
  puVar5 = (undefined8 *)param_1[0x25];
  puVar6 = param_1 + 0x15;
  if (puVar5 != (undefined8 *)0x0) {
    puVar6 = puVar5;
  }
  iVar2 = *(int *)(param_1 + 0x26);
  if ((longlong)iVar2 != 0) {
    lVar7 = 0;
    do {
      plVar3 = *(longlong **)((longlong)puVar6 + lVar7);
      uVar4 = (**(code **)(*plVar3 + 0x20))(plVar3);
      *(undefined1 *)((longlong)plVar3 + 0xe) = 0;
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar2 * 8 != lVar7);
    puVar5 = (undefined8 *)param_1[0x25];
  }
  if (puVar5 != (undefined8 *)0x0) {
    uVar4 = FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014322d67a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)*param_1)(param_1,1);
      return uVar4;
    }
  }
  return uVar4;
}



// FUNCTION 14322d69c FUN_14322d69c body=46 status=ok
// SIG undefined FUN_14322d69c(void)

void FUN_14322d69c(void)

{
  longlong lVar1;
  
  lVar1 = 0x60;
  do {
    if (*(longlong *)((longlong)&DAT_14ca99e30 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 14322d6ca FUN_14322d6ca body=114 status=ok
// SIG undefined FUN_14322d6ca(void)

void FUN_14322d6ca(longlong *param_1,int param_2)

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



// FUNCTION 14322d73c FUN_14322d73c body=29 status=ok
// SIG undefined FUN_14322d73c(void)

undefined8 FUN_14322d73c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14322d76e FUN_14322d76e body=85 status=ok
// SIG undefined FUN_14322d76e(void)

void FUN_14322d76e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a3927f0;
  return;
}



// FUNCTION 14322d7c4 FUN_14322d7c4 body=85 status=ok
// SIG undefined FUN_14322d7c4(void)

void FUN_14322d7c4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a3927f0;
  return;
}



// FUNCTION 14322d81a FUN_14322d81a body=118 status=ok
// SIG undefined FUN_14322d81a(void)

void FUN_14322d81a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e170a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a3927f0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014322d881. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14322d890 FUN_14322d890 body=103 status=ok
// SIG undefined FUN_14322d890(void)

void FUN_14322d890(undefined8 param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1403abd4e(&DAT_14ca966d0,local_38);
  FUN_14004710c(local_20);
  uVar1 = (**(code **)(*param_2 + 0xb0))(param_2);
  DAT_14ca9a43c = FUN_14631ff8f(uVar1);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14322d8f8 FUN_14322d8f8 body=105 status=ok
// SIG undefined FUN_14322d8f8(void)

undefined8 FUN_14322d8f8(undefined8 param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1403abd4e(&DAT_14ca966d0,local_38);
  FUN_14004710c(local_20);
  uVar1 = (**(code **)(*param_2 + 0xb0))(param_2);
  DAT_14ca9a43c = FUN_14631ff8f(uVar1);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14322d96e FUN_14322d96e body=12 status=ok
// SIG undefined FUN_14322d96e(void)

void FUN_14322d96e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014322d977. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14322d97a FUN_14322d97a body=29 status=ok
// SIG undefined FUN_14322d97a(void)

undefined8 FUN_14322d97a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14322d998 FUN_14322d998 body=282 status=ok
// SIG undefined FUN_14322d998(void)

undefined8 * FUN_14322d998(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14322aa43);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14322dadc FUN_14322dadc body=51 status=ok
// SIG undefined FUN_14322dadc(void)

void FUN_14322dadc(void)

{
  if ((DAT_14ca850f8 == '\0') && ((DAT_14ca84e0d != '\0' || (DAT_14c842750 == '\0')))) {
    DAT_14ca850f9 = FUN_1447e0190();
  }
  else {
    DAT_14ca850f9 = 0;
  }
  return;
}



// FUNCTION 14322db10 FUN_14322db10 body=282 status=ok
// SIG undefined FUN_14322db10(void)

undefined8 * FUN_14322db10(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14322aa43);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14322dc2a FUN_14322dc2a body=152 status=ok
// SIG undefined FUN_14322dc2a(void)

ulonglong FUN_14322dc2a(undefined8 *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    uVar2 = (ulonglong)DAT_14c7585c8;
    if ((DAT_14ca850f8 == '\0') && ((DAT_14ca84e0d != '\0' || (DAT_14c842750 != '\x01')))) {
      uVar2 = FUN_1447e0190();
      DAT_14ca850f9 = (undefined1)uVar2;
    }
    else {
      DAT_14ca850f9 = 0;
    }
  }
  else {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
    if ((DAT_14ca850f8 == '\0') && ((DAT_14ca84e0d != '\0' || (DAT_14c842750 == '\0')))) {
      uVar2 = FUN_1447e0190();
    }
    else {
      uVar2 = 0;
    }
    DAT_14ca850f9 = (undefined1)uVar2;
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014322dc9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)*param_1)(param_1,1);
      return uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 14322dcd2 FUN_14322dcd2 body=12 status=ok
// SIG undefined FUN_14322dcd2(void)

void FUN_14322dcd2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014322dcdb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14322dcde FUN_14322dcde body=68 status=ok
// SIG undefined FUN_14322dcde(void)

undefined8 * FUN_14322dcde(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_LAB_14a3928e0;
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14322dd22 FUN_14322dd22 body=282 status=ok
// SIG undefined FUN_14322dd22(void)

undefined8 * FUN_14322dd22(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14322aa43);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14322de3c FUN_14322de3c body=103 status=ok
// SIG undefined FUN_14322de3c(void)

void FUN_14322de3c(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1400daade(param_1 + 0x15);
  puVar2 = (undefined8 *)param_1[0x15];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014322de99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14322deb4 FUN_14322deb4 body=12 status=ok
// SIG undefined FUN_14322deb4(void)

void FUN_14322deb4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014322debd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14322dec0 FUN_14322dec0 body=68 status=ok
// SIG undefined FUN_14322dec0(void)

undefined8 * FUN_14322dec0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_LAB_14a392930;
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14322df04 FUN_14322df04 body=282 status=ok
// SIG undefined FUN_14322df04(void)

undefined8 * FUN_14322df04(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14322aa43);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14322e01e FUN_14322e01e body=103 status=ok
// SIG undefined FUN_14322e01e(void)

void FUN_14322e01e(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1400daade(param_1 + 0x15);
  puVar2 = (undefined8 *)param_1[0x15];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014322e07b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14322e096 FUN_14322e096 body=12 status=ok
// SIG undefined FUN_14322e096(void)

void FUN_14322e096(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014322e09f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14322e0a2 FUN_14322e0a2 body=68 status=ok
// SIG undefined FUN_14322e0a2(void)

undefined8 * FUN_14322e0a2(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_LAB_14a392960;
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14322e0e6 FUN_14322e0e6 body=282 status=ok
// SIG undefined FUN_14322e0e6(void)

undefined8 * FUN_14322e0e6(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14322aa43);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14322e200 FUN_14322e200 body=103 status=ok
// SIG undefined FUN_14322e200(void)

void FUN_14322e200(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1400daade(param_1 + 0x15);
  puVar2 = (undefined8 *)param_1[0x15];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014322e25d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14322e268 FUN_14322e268 body=337 status=ok
// SIG undefined FUN_14322e268(void)

void FUN_14322e268(longlong *param_1,ulonglong *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined8 local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar2 = (int)param_1[1];
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
  }
  local_28 = CONCAT44(local_28._4_4_,iVar2);
  local_20 = (undefined8 *)*param_1;
  if (local_20 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = *(int *)(local_20 + 1) + 1;
    UNLOCK();
  }
  if (*(char *)((longlong)param_2 + 100) == '\x01') {
    if (iVar2 == 1) {
      FUN_1400daade(&local_20);
    }
    else {
      lVar5 = DAT_14ca84f50 + -1;
      if (local_20 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(local_20 + 1) = *(int *)(local_20 + 1) + 1;
        UNLOCK();
      }
      local_30 = local_20;
      FUN_1431edf28(lVar5,&local_30);
    }
    if (local_20 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_20 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_20)(local_20,1);
      }
    }
  }
  else {
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 4;
    if ((undefined8 *)param_2[1] < puVar4) {
      FUN_140023dd8(param_2,0x28);
      puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar4 = puVar3 + 4;
    }
    *param_2 = (ulonglong)puVar4;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar3;
    param_2[6] = (ulonglong)(puVar3 + 1);
    puVar3[1] = 0;
    *puVar3 = &PTR_FUN_14a3929a8;
    *(undefined4 *)(puVar3 + 2) = (undefined4)local_28;
    puVar3[3] = local_20;
  }
  local_28 = 0;
  local_20 = (undefined8 *)((ulonglong)local_20 & 0xffffffff00000000);
  FUN_14007658c(&DAT_14ca850c8,&local_28,1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14322e3c8 FUN_14322e3c8 body=140 status=ok
// SIG undefined FUN_14322e3c8(void)

void FUN_14322e3c8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x10) == 1) {
    FUN_1400daade(plVar1);
  }
  else {
    lVar3 = DAT_14ca84f50 + -1;
    local_20 = *plVar1;
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    FUN_1431edf28(lVar3,&local_20);
  }
  if (*plVar1 != 0) {
    LOCK();
    piVar2 = (int *)(*plVar1 + 8);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
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



// FUNCTION 14322e47a FUN_14322e47a body=12 status=ok
// SIG undefined FUN_14322e47a(void)

void FUN_14322e47a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014322e483. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14322e486 FUN_14322e486 body=68 status=ok
// SIG undefined FUN_14322e486(void)

undefined8 * FUN_14322e486(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_LAB_14a3929b0;
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14322e4ca FUN_14322e4ca body=282 status=ok
// SIG undefined FUN_14322e4ca(void)

undefined8 * FUN_14322e4ca(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14322aa43);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14322e5e4 FUN_14322e5e4 body=110 status=ok
// SIG undefined FUN_14322e5e4(void)

void FUN_14322e5e4(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_14322e268(param_1 + 0x15,&DAT_14ca85100);
  puVar2 = (undefined8 *)param_1[0x15];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014322e648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14322e652 FUN_14322e652 body=114 status=ok
// SIG undefined FUN_14322e652(void)

void FUN_14322e652(void)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  local_28 = 0;
  FUN_14007658c(&DAT_14ca850c8,&local_30,7);
  local_30 = 0;
  local_28 = 0;
  FUN_14007658c(&DAT_14ca850c8,&local_30,5);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14322e6c6 FUN_14322e6c6 body=282 status=ok
// SIG undefined FUN_14322e6c6(void)

undefined8 * FUN_14322e6c6(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14322aa43);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14322e7e0 FUN_14322e7e0 body=232 status=ok
// SIG undefined FUN_14322e7e0(void)

void FUN_14322e7e0(longlong param_1)

{
  int *piVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 == 0) {
    local_38 = 0;
    local_30 = 0;
    FUN_14007658c(&DAT_14ca850c8,&local_38,7);
    local_38 = 0;
    local_30 = 0;
    FUN_14007658c(&DAT_14ca850c8,&local_38,5);
  }
  else {
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
    local_38 = 0;
    local_30 = 0;
    FUN_14007658c(&DAT_14ca850c8,&local_38,7);
    local_38 = 0;
    local_30 = 0;
    FUN_14007658c(&DAT_14ca850c8,&local_38,5);
    LOCK();
    piVar1 = (int *)(param_1 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14322e8e0 FUN_14322e8e0 body=92 status=ok
// SIG undefined FUN_14322e8e0(void)

void FUN_14322e8e0(void)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (DAT_14c842750 == '\0') {
    local_18 = 0;
    local_10 = 0;
    FUN_14007658c(&DAT_14ca850c8,&local_18,7);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14322e93e FUN_14322e93e body=282 status=ok
// SIG undefined FUN_14322e93e(void)

undefined8 * FUN_14322e93e(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14322aa43);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14322ea58 FUN_14322ea58 body=144 status=ok
// SIG undefined FUN_14322ea58(void)

ulonglong FUN_14322ea58(longlong param_1)

{
  int *piVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
  }
  uVar2 = (ulonglong)DAT_14c7585c8;
  if (DAT_14c842750 == '\0') {
    local_28 = 0;
    local_20 = 0;
    uVar2 = FUN_14007658c(&DAT_14ca850c8,&local_28,7);
  }
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14322eafe FUN_14322eafe body=282 status=ok
// SIG undefined FUN_14322eafe(void)

undefined8 * FUN_14322eafe(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14322aa43);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14322ec18 FUN_14322ec18 body=134 status=ok
// SIG undefined FUN_14322ec18(void)

void FUN_14322ec18(undefined8 *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  pcVar2 = (code *)param_1[0x16];
  plVar4 = (longlong *)param_1[0x18];
  if ((longlong *)param_1[0x18] == (longlong *)0x0) {
    plVar4 = param_1 + 0x1a;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3);
  if (param_1[0x16] != 0) {
    plVar4 = param_1 + 0x1a;
    if ((longlong *)param_1[0x18] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x18];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014322ec9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14322ec9e FUN_14322ec9e body=443 status=ok
// SIG undefined FUN_14322ec9e(void)

void FUN_14322ec9e(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  uint uVar12;
  uint *puVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  puVar3 = (uint *)*param_1;
  LOCK();
  bVar17 = (char)puVar3[10] == '\0';
  if (bVar17) {
    *(char *)(puVar3 + 10) = '\x01';
  }
  UNLOCK();
  if (!bVar17) {
    FUN_1447d2058(puVar3 + 10);
  }
  uVar1 = *puVar3;
  puVar13 = puVar3 + (ulonglong)uVar1 * 4 + 2;
  *puVar3 = uVar1 ^ 1;
  uVar12 = 0;
  LOCK();
  bVar17 = (char)puVar3[10] == '\x01';
  if (bVar17) {
    *(char *)(puVar3 + 10) = '\0';
  }
  UNLOCK();
  if (!bVar17) {
    FUN_14008cdb0(puVar3 + 10);
  }
  lVar15 = *(longlong *)puVar13;
  if ((longlong)(int)puVar3[(ulonglong)uVar1 * 4 + 4] != 0) {
    lVar16 = (longlong)(int)puVar3[(ulonglong)uVar1 * 4 + 4] * 0x60;
    plVar14 = (longlong *)(lVar15 + 0x40);
    do {
      pcVar4 = (code *)plVar14[-4];
      plVar11 = (longlong *)plVar14[-2];
      if ((longlong *)plVar14[-2] == (longlong *)0x0) {
        plVar11 = plVar14;
      }
      uVar10 = (**(code **)(*plVar11 + 8))();
      (*pcVar4)(uVar10,&DAT_14ca85100);
      local_c8 = plVar14[-4];
      uStack_80 = plVar14[-3];
      local_b8 = (longlong *)plVar14[-2];
      uStack_70 = plVar14[-1];
      local_68 = *plVar14;
      uStack_60 = plVar14[1];
      local_58 = plVar14[2];
      uStack_50 = plVar14[3];
      lVar8 = local_58;
      lVar9 = uStack_50;
      lVar6 = local_68;
      lVar7 = uStack_60;
      local_78 = local_b8;
      lVar5 = uStack_70;
      local_88 = local_c8;
      lVar15 = uStack_80;
      plVar14[2] = CONCAT44(uStack_94,local_98);
      plVar14[3] = CONCAT44(uStack_8c,uStack_90);
      *plVar14 = CONCAT44(uStack_a4,local_a8);
      plVar14[1] = CONCAT44(uStack_9c,uStack_a0);
      plVar14[-2] = 0;
      plVar14[-1] = CONCAT44(uStack_ac,uStack_b0);
      plVar14[-4] = 0;
      plVar14[-3] = CONCAT44(uStack_bc,uStack_c0);
      uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
      uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
      local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
      uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
      local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
      uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
      local_98 = (undefined4)local_58;
      uStack_94 = local_58._4_4_;
      uStack_90 = (undefined4)uStack_50;
      uStack_8c = uStack_50._4_4_;
      local_a8 = (undefined4)local_68;
      uStack_a4 = local_68._4_4_;
      uStack_a0 = (undefined4)uStack_60;
      uStack_9c = uStack_60._4_4_;
      uStack_b0 = (undefined4)uStack_70;
      uStack_ac = uStack_70._4_4_;
      uStack_c0 = (undefined4)uStack_80;
      uStack_bc = uStack_80._4_4_;
      uStack_80 = lVar15;
      uStack_70 = lVar5;
      local_68 = lVar6;
      uStack_60 = lVar7;
      local_58 = lVar8;
      uStack_50 = lVar9;
      if (local_c8 != 0) {
        plVar11 = local_b8;
        if (local_b8 == (longlong *)0x0) {
          plVar11 = (longlong *)&local_a8;
        }
        (**(code **)(*plVar11 + 0x10))();
      }
      plVar14 = plVar14 + 0xc;
      lVar16 = lVar16 + -0x60;
    } while (lVar16 != 0);
    uVar12 = puVar3[(ulonglong)uVar1 * 4 + 4];
    lVar15 = *(longlong *)puVar13;
  }
  uVar2 = puVar3[(ulonglong)uVar1 * 4 + 5];
  FUN_144a87ccd(lVar15,uVar12);
  puVar3[(ulonglong)uVar1 * 4 + 4] = 0;
  if (((int)uVar2 < 0) && (puVar3[(ulonglong)uVar1 * 4 + 5] != 0)) {
    FUN_1474397ea(puVar13);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14322ee70 FUN_14322ee70 body=29 status=ok
// SIG undefined FUN_14322ee70(void)

undefined8 FUN_14322ee70(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14322ee8e FUN_14322ee8e body=29 status=ok
// SIG undefined FUN_14322ee8e(void)

undefined8 FUN_14322ee8e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14322eec0 FUN_14322eec0 body=93 status=ok
// SIG undefined FUN_14322eec0(void)

void FUN_14322eec0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a392ac0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14322ef1e FUN_14322ef1e body=93 status=ok
// SIG undefined FUN_14322ef1e(void)

void FUN_14322ef1e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a392ac0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14322ef7c FUN_14322ef7c body=126 status=ok
// SIG undefined FUN_14322ef7c(void)

void FUN_14322ef7c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e170a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a392ac0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014322efeb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14322effa FUN_14322effa body=30 status=ok
// SIG undefined FUN_14322effa(void)

void FUN_14322effa(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  uVar2 = (**(code **)(*param_2 + 0xa8))(param_2);
  *(undefined1 *)(lVar1 + 0x4f) = uVar2;
  return;
}



// FUNCTION 14322f018 FUN_14322f018 body=32 status=ok
// SIG undefined FUN_14322f018(void)

undefined8 FUN_14322f018(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  uVar2 = (**(code **)(*param_2 + 0xa8))(param_2);
  *(undefined1 *)(lVar1 + 0x4f) = uVar2;
  return 1;
}



// FUNCTION 14322f038 FUN_14322f038 body=547 status=ok
// SIG undefined FUN_14322f038(void)

longlong * FUN_14322f038(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 14322f25c FUN_14322f25c body=350 status=ok
// SIG undefined FUN_14322f25c(void)

void FUN_14322f25c(longlong param_1)

{
  char *pcVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  
  lVar6 = *(longlong *)(param_1 + 0xa8);
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar9 = *piVar2;
  if (iVar9 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar9 = *piVar2;
  }
  if ((iVar9 == 0x60000000) || (iVar9 == 0)) {
    *piVar2 = 0x40000010;
  }
  pcVar1 = (char *)(lVar6 + 8);
  LOCK();
  bVar12 = *(char *)(lVar6 + 8) == '\0';
  if (bVar12) {
    *(char *)(lVar6 + 8) = '\x01';
  }
  UNLOCK();
  if (!bVar12) {
    FUN_1447d2058(pcVar1);
  }
  lVar7 = *(longlong *)(lVar6 + 0x18);
  FUN_144b1cf5b(0,0);
  lVar8 = *(longlong *)(lVar7 + 8);
  iVar5 = *(int *)(lVar7 + 0x10);
  *(undefined8 *)(lVar7 + 8) = 0;
  *(undefined8 *)(lVar7 + 0x10) = 0;
  if (*(int *)(*(longlong *)(lVar6 + 0x18) + 0x14) < 0x80) {
    FUN_141790114();
  }
  LOCK();
  cVar4 = *pcVar1;
  if (cVar4 == '\x01') {
    *pcVar1 = '\0';
  }
  UNLOCK();
  if (cVar4 != '\x01') {
    FUN_14008cdb0(pcVar1);
  }
  plVar3 = (longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xec0);
  lVar7 = *plVar3;
  *plVar3 = lVar6;
  if (iVar5 != 0) {
    lVar11 = (longlong)iVar5 * 0x60;
    lVar10 = lVar8;
    do {
      FUN_1401a96bc(lVar6,lVar10);
      lVar10 = lVar10 + 0x60;
      lVar11 = lVar11 + -0x60;
    } while (lVar11 != 0);
  }
  *plVar3 = lVar7;
  LOCK();
  *(int *)(lVar6 + 0x48) = *(int *)(lVar6 + 0x48) - iVar5;
  UNLOCK();
  FUN_144b1cf5b(lVar8,iVar5);
  if (lVar8 != 0) {
    FUN_1400020a8(lVar8);
  }
  if ((iVar9 == 0x60000000) || (iVar9 == 0)) {
    *piVar2 = iVar9;
  }
  return;
}



// FUNCTION 14322f3ba FUN_14322f3ba body=110 status=ok
// SIG undefined FUN_14322f3ba(void)

undefined8 * FUN_14322f3ba(undefined8 *param_1,int param_2)

{
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14322f428 FUN_14322f428 body=48 status=ok
// SIG undefined FUN_14322f428(void)

void FUN_14322f428(void)

{
  if (DAT_14ca99fe0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14ca99fd0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14322f458 FUN_14322f458 body=48 status=ok
// SIG undefined FUN_14322f458(void)

void FUN_14322f458(void)

{
  if (DAT_14ca9a010 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14ca9a000 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14322f488 FUN_14322f488 body=51 status=ok
// SIG undefined FUN_14322f488(void)

void FUN_14322f488(undefined8 *param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  plVar2 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[2];
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014322f4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_2);
  return;
}



// FUNCTION 14322f4c6 FUN_14322f4c6 body=29 status=ok
// SIG undefined FUN_14322f4c6(void)

void FUN_14322f4c6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14322f4e4 FUN_14322f4e4 body=71 status=ok
// SIG undefined FUN_14322f4e4(void)

undefined8 * FUN_14322f4e4(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14a392b60;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14322f52c FUN_14322f52c body=282 status=ok
// SIG undefined FUN_14322f52c(void)

undefined8 * FUN_14322f52c(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14322aa43);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14322f646 FUN_14322f646 body=148 status=ok
// SIG undefined FUN_14322f646(void)

void FUN_14322f646(undefined8 *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  pcVar2 = (code *)param_1[0x16];
  plVar4 = (longlong *)param_1[0x18];
  if ((longlong *)param_1[0x18] == (longlong *)0x0) {
    plVar4 = param_1 + 0x1a;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,&DAT_14ca85100);
  if (param_1[0x16] != 0) {
    plVar4 = param_1 + 0x1a;
    if ((longlong *)param_1[0x18] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x18];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014322f6ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14322f6ec FUN_14322f6ec body=5 status=ok
// SIG undefined FUN_14322f6ec(void)

longlong FUN_14322f6ec(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 14322f6f2 FUN_14322f6f2 body=12 status=ok
// SIG undefined FUN_14322f6f2(void)

void FUN_14322f6f2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014322f6fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14322f6fe FUN_14322f6fe body=29 status=ok
// SIG undefined FUN_14322f6fe(void)

undefined8 FUN_14322f6fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14322f71c FUN_14322f71c body=51 status=ok
// SIG undefined FUN_14322f71c(void)

void FUN_14322f71c(undefined8 *param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  plVar2 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[2];
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014322f74c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_2);
  return;
}



// FUNCTION 14322f75a FUN_14322f75a body=29 status=ok
// SIG undefined FUN_14322f75a(void)

void FUN_14322f75a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14322f778 FUN_14322f778 body=71 status=ok
// SIG undefined FUN_14322f778(void)

undefined8 * FUN_14322f778(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14a392bd0;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14322f7c0 FUN_14322f7c0 body=282 status=ok
// SIG undefined FUN_14322f7c0(void)

undefined8 * FUN_14322f7c0(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14322aa43);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14322f8da FUN_14322f8da body=148 status=ok
// SIG undefined FUN_14322f8da(void)

void FUN_14322f8da(undefined8 *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  pcVar2 = (code *)param_1[0x16];
  plVar4 = (longlong *)param_1[0x18];
  if ((longlong *)param_1[0x18] == (longlong *)0x0) {
    plVar4 = param_1 + 0x1a;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,&DAT_14ca85100);
  if (param_1[0x16] != 0) {
    plVar4 = param_1 + 0x1a;
    if ((longlong *)param_1[0x18] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x18];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014322f962. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14322f96e FUN_14322f96e body=66 status=ok
// SIG undefined FUN_14322f96e(void)

void FUN_14322f96e(longlong *param_1,undefined8 param_2)

{
  param_1 = (longlong *)*param_1;
  if (((int)param_1[1] != -1) && (DAT_14ca84d88 == '\x01')) {
    (**(code **)(*param_1 + 0x10))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014322f9a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 14322f9b4 FUN_14322f9b4 body=5 status=ok
// SIG undefined FUN_14322f9b4(void)

longlong FUN_14322f9b4(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 14322f9ba FUN_14322f9ba body=12 status=ok
// SIG undefined FUN_14322f9ba(void)

void FUN_14322f9ba(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014322f9c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14322f9c6 FUN_14322f9c6 body=29 status=ok
// SIG undefined FUN_14322f9c6(void)

undefined8 FUN_14322f9c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14322f9e4 FUN_14322f9e4 body=43 status=ok
// SIG undefined FUN_14322f9e4(void)

void FUN_14322f9e4(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  plVar2 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[2];
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014322fa0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}



// FUNCTION 14322fa1a FUN_14322fa1a body=29 status=ok
// SIG undefined FUN_14322fa1a(void)

void FUN_14322fa1a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14322fa38 FUN_14322fa38 body=71 status=ok
// SIG undefined FUN_14322fa38(void)

undefined8 * FUN_14322fa38(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14a392c40;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14322fa80 FUN_14322fa80 body=282 status=ok
// SIG undefined FUN_14322fa80(void)

undefined8 * FUN_14322fa80(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14322aa43);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14322fb9a FUN_14322fb9a body=141 status=ok
// SIG undefined FUN_14322fb9a(void)

void FUN_14322fb9a(undefined8 *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  pcVar2 = (code *)param_1[0x16];
  plVar4 = (longlong *)param_1[0x18];
  if ((longlong *)param_1[0x18] == (longlong *)0x0) {
    plVar4 = param_1 + 0x1a;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3);
  if (param_1[0x16] != 0) {
    plVar4 = param_1 + 0x1a;
    if ((longlong *)param_1[0x18] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x18];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014322fc1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14322fc36 FUN_14322fc36 body=5 status=ok
// SIG undefined FUN_14322fc36(void)

longlong FUN_14322fc36(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 14322fc3c FUN_14322fc3c body=12 status=ok
// SIG undefined FUN_14322fc3c(void)

void FUN_14322fc3c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014322fc45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14322fc48 FUN_14322fc48 body=29 status=ok
// SIG undefined FUN_14322fc48(void)

undefined8 FUN_14322fc48(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14322fc7a FUN_14322fc7a body=12 status=ok
// SIG undefined FUN_14322fc7a(void)

void FUN_14322fc7a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014322fc83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14322fc86 FUN_14322fc86 body=29 status=ok
// SIG undefined FUN_14322fc86(void)

undefined8 FUN_14322fc86(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14322fca4 FUN_14322fca4 body=282 status=ok
// SIG undefined FUN_14322fca4(void)

undefined8 * FUN_14322fca4(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14322aa43);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14322fdbe FUN_14322fdbe body=97 status=ok
// SIG undefined FUN_14322fdbe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14322fdbe(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014322fe14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*_DAT_000000a8 + 0x20))();
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  (**(code **)(*(longlong *)param_1[0x15] + 0x20))();
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014322fdfb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14322fe20 FUN_14322fe20 body=25 status=ok
// SIG undefined FUN_14322fe20(void)

void FUN_14322fe20(void)

{
  FUN_145cc1382();
  FUN_14170c56a(&DAT_14ca97f78);
  return;
}



// FUNCTION 14322fe3a FUN_14322fe3a body=25 status=ok
// SIG undefined FUN_14322fe3a(void)

void FUN_14322fe3a(void)

{
  FUN_145cc1552();
  FUN_14170c56a(&DAT_14ca97fe8);
  return;
}



// FUNCTION 14322fe54 FUN_14322fe54 body=25 status=ok
// SIG undefined FUN_14322fe54(void)

void FUN_14322fe54(void)

{
  FUN_1457fb4a4();
  FUN_14170c56a(&DAT_14ca98058);
  return;
}



// FUNCTION 14322fe6e FUN_14322fe6e body=25 status=ok
// SIG undefined FUN_14322fe6e(void)

void FUN_14322fe6e(void)

{
  FUN_14606a6c0();
  FUN_14170c56a(&DAT_14ca980c8);
  return;
}



// FUNCTION 14322fe88 FUN_14322fe88 body=25 status=ok
// SIG undefined FUN_14322fe88(void)

void FUN_14322fe88(void)

{
  FUN_146069c5a();
  FUN_14170c56a(&DAT_14ca98138);
  return;
}



// FUNCTION 14322fea2 FUN_14322fea2 body=25 status=ok
// SIG undefined FUN_14322fea2(void)

void FUN_14322fea2(void)

{
  FUN_1461a23b8();
  FUN_14170c56a(&DAT_14ca981a8);
  return;
}



// FUNCTION 14322febc FUN_14322febc body=25 status=ok
// SIG undefined FUN_14322febc(void)

void FUN_14322febc(void)

{
  FUN_146120868();
  FUN_14170c56a(&DAT_14ca98218);
  return;
}



// FUNCTION 14322fed6 FUN_14322fed6 body=25 status=ok
// SIG undefined FUN_14322fed6(void)

void FUN_14322fed6(void)

{
  FUN_146143680();
  FUN_14170c56a(&DAT_14ca98288);
  return;
}



// FUNCTION 14322fef0 FUN_14322fef0 body=25 status=ok
// SIG undefined FUN_14322fef0(void)

void FUN_14322fef0(void)

{
  FUN_14611f246();
  FUN_14170c56a(&DAT_14ca982f8);
  return;
}



// FUNCTION 14322ff0a FUN_14322ff0a body=25 status=ok
// SIG undefined FUN_14322ff0a(void)

void FUN_14322ff0a(void)

{
  FUN_145cc1620();
  FUN_14170c56a(&DAT_14ca98368);
  return;
}



// FUNCTION 14322ff24 FUN_14322ff24 body=282 status=ok
// SIG undefined FUN_14322ff24(void)

undefined8 * FUN_14322ff24(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14322aa43);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14323003e FUN_14323003e body=5586 status=ok
// SIG undefined FUN_14323003e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14323003e(void)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_98;
  code *local_90;
  undefined8 local_88;
  undefined **local_78;
  code *local_70;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  DAT_14ca96508 = 0;
  _DAT_14ca96510 = 0;
  _DAT_14ca96518 = 2;
  atexit(FUN_1432205f0);
  DAT_14ca96520 = 0;
  _DAT_14ca96528 = 0;
  _DAT_14ca96530 = 2;
  atexit(FUN_143220621);
  DAT_14ca96538 = 0;
  _DAT_14ca96540 = 0;
  atexit((_func_5014 *)&LAB_143220652);
  local_98 = (code *)0x0;
  local_90._0_4_ = 0;
  FUN_1446efa72(&local_98,0,2,0x10);
  local_90._0_4_ = 2;
  *(undefined ***)local_98 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)((longlong)local_98 + 0x10) = lVar3;
  *(undefined ***)local_98 = &PTR_FUN_149e17030;
  *(code **)((longlong)local_98 + 0x18) = FUN_143220663;
  local_a8 = &local_98;
  FUN_14631f7b2(&DAT_14ca96548,L"TaskGraph.RenderThreadPollPeriodMs",1,
                L"Render thread polling period in milliseconds. If value < 0, task graph tasks explicitly wake up RT, otherwise RT polls for tasks."
               );
  if ((int)local_90 == 0) {
LAB_143230181:
    if (local_98 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_98 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90._0_4_ = 0;
    goto LAB_143230181;
  }
  atexit(FUN_143220b10);
  local_a8 = (undefined8 *)((ulonglong)local_a8 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14ca96558,L"r.RenderCommandFenceBundling",&DAT_14c760e1d,
                L"Controls whether render command fences are allowed to be batched.\n 0: disabled;\n 1: enabled (default);\n"
               );
  atexit(FUN_143220b55);
  local_98 = (code *)0x0;
  local_90._0_4_ = 0;
  FUN_1446efa72(&local_98,0,2,0x10);
  local_90._0_4_ = 2;
  *(undefined ***)local_98 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)((longlong)local_98 + 0x10) = lVar3;
  *(undefined ***)local_98 = &PTR_FUN_14a3927f0;
  local_a8 = &local_98;
  FUN_14631f7b2(&DAT_14ca96568,L"r.RenderCommandPipeMode",2,
                L"Controls behavior of the main render thread command pipe. 0: Render commands are launched individually as tasks;\n 1: Render commands are enqueued into a render command pipe for the render thread only.;\n 2: Render commands are enqueued into a render command pipe for all declared pipes.;\n"
               );
  if ((int)local_90 == 0) {
LAB_143230286:
    if (local_98 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_98 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90._0_4_ = 0;
    goto LAB_143230286;
  }
  atexit(FUN_143220b9a);
  DAT_14ca9a3d8 = 0;
  _DAT_14ca9a3e0 = 0;
  atexit((_func_5014 *)&LAB_143220bdf);
  DAT_14ca9a3c8 = 0;
  _DAT_14ca9a3d0 = 0;
  atexit((_func_5014 *)&LAB_143220beb);
  DAT_14ca96598 = 0;
  DAT_14ca965b0 = 0;
  _DAT_14ca965b8 = 0;
  _DAT_14ca965c0 = 2;
  atexit(FUN_143220e45);
  DAT_14ca965d8 = 0;
  DAT_14ca965f8 = 0;
  _DAT_14ca96600 = 0x2000000000;
  DAT_14ca96608 = 0;
  atexit(FUN_143221b93);
  local_a8 = (undefined8 *)((ulonglong)local_a8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14ca96618,L"g.TimeToBlockOnRenderFence",&DAT_14c760e24,
                L"Number of milliseconds the game thread should block when waiting on a render thread fence."
               );
  atexit(FUN_143222919);
  local_a8 = (undefined8 *)((ulonglong)local_a8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14ca96628,L"g.TimeoutForBlockOnRenderFence",&DAT_14c760e28,
                L"Number of milliseconds the game thread should wait before failing when waiting on a render thread fence."
               );
  atexit(FUN_14322295e);
  local_a8 = (undefined8 *)((ulonglong)local_a8 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14ca96638,L"g.bEnablePendingCleanupObjectsCommandBatching",&DAT_14c760e2c,
                L"Enable batching PendingCleanupObjects destruction.");
  atexit(FUN_143222e89);
  DAT_14ca96680 = 0;
  atexit((_func_5014 *)&LAB_143222ece);
  local_98 = (code *)0x0;
  local_90._0_4_ = 0;
  FUN_1446efa72(&local_98,0,2,0x10);
  local_90._0_4_ = 2;
  *(undefined ***)local_98 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)((longlong)local_98 + 0x10) = lVar3;
  *(undefined ***)local_98 = &PTR_FUN_149e00260;
  *(code **)((longlong)local_98 + 0x18) = FUN_143222ed3;
  local_a8 = (undefined8 *)((ulonglong)local_a8 & 0xffffffff00000000);
  FUN_1415c7246(&DAT_14ca966c0,L"r.RHIThread.Enable",
                L"Enables/disabled the RHI Thread and determine if the RHI work runs on a dedicated thread or not.\n"
                ,&local_98);
  if ((int)local_90 == 0) {
LAB_143230494:
    if (local_98 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_98 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90._0_4_ = 0;
    goto LAB_143230494;
  }
  atexit(FUN_143222f0f);
  _DAT_14ca9a440 = 0;
  DAT_14ca9a448 = 0;
  _DAT_14ca9a450 = 0;
  DAT_14ca9a458 = 0;
  _DAT_14ca9a460 = 0;
  DAT_14ca9a468 = 0;
  atexit((_func_5014 *)&LAB_143222f54);
  DAT_14ca966d0 = 0;
  DAT_14ca966d8 = 0;
  _DAT_14ca966e0 = 0;
  _DAT_14ca966e8 = 0;
  atexit((_func_5014 *)&LAB_143222f59);
  local_98 = (code *)0x14a38ce48;
  local_90._0_5_ = 0x13;
  FUN_14001a6c0(&local_98,1);
  local_98 = (code *)0x14a38ce5c;
  local_90._0_5_ = 0xb;
  FUN_14001a6c0(&local_98,1);
  local_98 = (code *)0x14a38ce68;
  local_90._0_5_ = 10;
  FUN_14001a6c0(&local_98,1);
  local_98 = (code *)0x14a38ce73;
  local_90._0_5_ = 0x10;
  FUN_14001a6c0(&local_98,1);
  local_98 = (code *)0x14a38ce84;
  local_90 = (code *)CONCAT35(local_90._5_3_,7);
  FUN_14001a6c0(&local_98,1);
  DAT_14ca96770 = 0;
  _DAT_14ca96778 = 0x1000000000;
  atexit((_func_5014 *)&LAB_143223ae8);
  FUN_14631f884();
  atexit(FUN_143223f9f);
  local_a8 = (undefined8 *)((ulonglong)local_a8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14ca967e8,L"r.TextureReferenceRevertsLastRenderContainer",&DAT_14c760e30,
                &DAT_149dfb77a);
  atexit(FUN_143224135);
  _DAT_14ca96800 = 0x3e99999a;
  _DAT_14ca96804 = 0x3dcccccd;
  uRam000000014ca96808 = 0x40000000;
  uRam000000014ca9680c = 0x3f800000;
  FUN_14631fa1c();
  atexit(FUN_143224329);
  local_98 = (code *)0x0;
  local_90 = (code *)((ulonglong)local_90 & 0xffffffff00000000);
  FUN_1446efa72(&local_98,0,2,0x10);
  local_90._0_4_ = 2;
  *(undefined ***)local_98 = &PTR_LAB_149e35db0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)((longlong)local_98 + 0x10) = lVar3;
  *(undefined ***)local_98 = &PTR_FUN_149e35d40;
  *(undefined1 **)((longlong)local_98 + 0x18) = &LAB_14742fd4f;
  local_a8 = (undefined8 *)((ulonglong)local_a8 & 0xffffffff00000000);
  FUN_14170bbaa(&DAT_14ca96810,L"r.DumpRenderTargetPoolMemory",
                L"Dump allocation information for the render target pool.",&local_98);
  if ((int)local_90 != 0) {
    if (local_98 == (code *)0x0) goto LAB_14323071b;
    (*(code *)**(undefined8 **)local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90._0_4_ = 0;
  }
  if (local_98 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_14323071b:
  atexit(FUN_143224358);
  _DAT_14ca96844 = 0x3f800000;
  uRam000000014ca9684c = 0;
  _DAT_14ca96854 = 0x3f800000;
  uRam000000014ca9685c = 0;
  _DAT_14ca96864 = 0x3f800000;
  uRam000000014ca9686c = 0;
  local_a8._0_4_ = 0x24;
  FUN_141471170(&DAT_14ca96878,L"r.Nanite.ProjectEnabled",&DAT_14c760e34,
                L"This setting allows you to disable Nanite on platforms that support it to reduce the number of shaders. It cannot be used to force Nanite on on unsupported platforms.\n"
               );
  atexit(FUN_143224810);
  local_a8._0_4_ = 0x24;
  FUN_141471170(&DAT_14ca96890,L"r.Shadow.TranslucentPerObject.ProjectEnabled",&DAT_14ca96888,
                L"Enable/Disable translucency shadows on a per-project basis. Turning off can significantly reduce the number of permutations if your project has many translucent materials.\n"
               );
  atexit(FUN_143224855);
  local_a8._0_4_ = 0x24;
  FUN_141471170(&DAT_14ca968a0,L"r.RayTracing.EnableOnDemand",&DAT_14c760e38,
                L"Controls whether ray tracing features can be toggled on demand at runtime without restarting the game (experimental).\nRequires r.RayTracing=1. Has a small performance and memory overhead.\n 0: off\n 1: on"
               );
  atexit(FUN_14322489a);
  FUN_14631fa9c();
  atexit(FUN_143224972);
  FUN_14631fb08();
  atexit(FUN_1432249a1);
  FUN_14631fb74();
  atexit(FUN_1432249d0);
  DAT_14ca96988 = 0;
  _DAT_14ca96990 = 0x26000000000;
  atexit((_func_5014 *)&LAB_143224a10);
  local_a8._0_4_ = 0x24;
  FUN_141471170(&DAT_14ca96a68,L"r.ForwardShading",&DAT_14ca96a64,
                L"Whether to use forward shading on desktop platforms - requires Shader Model 5 hardware.\nForward shading has lower constant cost, but fewer features supported. 0:off, 1:on\nThis rendering path is a work in progress with many unimplemented features, notably only a single reflection capture is applied per object and no translucency dynamic shadow receiving."
               );
  atexit(FUN_143224b1b);
  local_98 = (code *)((ulonglong)local_98 & 0xffffffff00000000);
  local_a8._0_4_ = 0x24;
  FUN_14078dbce(&DAT_14ca96a78,L"r.GBufferDiffuseSampleOcclusion",&local_98,
                L"Whether the gbuffer contain occlusion information for individual diffuse samples."
               );
  atexit(FUN_143224b60);
  local_98._0_4_ = 1;
  local_a8._0_4_ = 0x24;
  FUN_14078dbce(&DAT_14ca96a90,L"r.DistanceFields",&local_98,
                L"Enables distance fields rendering.\n 0: Disabled.\n 1: Enabled.");
  atexit(FUN_143224ba5);
  DAT_14ca96af8 = 0;
  _DAT_14ca96b00 = 0x26000000000;
  atexit((_func_5014 *)&LAB_143224bea);
  DAT_14ca96b58 = 0;
  _DAT_14ca96b60 = 0x26000000000;
  atexit((_func_5014 *)&LAB_143224bfb);
  DAT_14ca96bb8 = 0;
  _DAT_14ca96bc0 = 0x26000000000;
  atexit((_func_5014 *)&LAB_143224c0c);
  DAT_14ca96c18 = 0;
  _DAT_14ca96c20 = 0x26000000000;
  atexit((_func_5014 *)&LAB_143224c1d);
  DAT_14ca96c78 = 0;
  _DAT_14ca96c80 = 0x26000000000;
  atexit((_func_5014 *)&LAB_143224c2e);
  DAT_14ca96cd8 = 0;
  _DAT_14ca96ce0 = 0x26000000000;
  atexit((_func_5014 *)&LAB_143224c3f);
  DAT_14ca96d38 = 0;
  _DAT_14ca96d40 = 0x26000000000;
  atexit((_func_5014 *)&LAB_143224c50);
  DAT_14ca96d98 = 0;
  _DAT_14ca96da0 = 0x26000000000;
  atexit((_func_5014 *)&LAB_143224c61);
  FUN_14631fbe0();
  atexit(FUN_1432262e0);
  FUN_14631fc4c();
  atexit(FUN_1432263d0);
  FUN_14631fcb8();
  atexit(FUN_1432263ff);
  local_98._0_4_ = 0;
  local_a8._0_4_ = 0x24;
  FUN_14078dbce(&DAT_14ca970b8,L"r.LightFunctionAtlas.Format",&local_98,
                L"0: grey scale in [0,1]. 1: colored in [0,1]");
  atexit(FUN_143226668);
  local_98._0_4_ = 0;
  local_a8._0_4_ = 0x24;
  FUN_14078dbce(&DAT_14ca970d0,L"r.SingleLayerWater.UsesLightFunctionAtlas",&local_98,
                L"Enable sampling of the light function atlas on SingleLAyer Water mateirals.");
  atexit(FUN_1432266ad);
  local_98._0_4_ = 0;
  local_a8._0_4_ = 0x24;
  FUN_14078dbce(&DAT_14ca970e8,L"r.Translucent.UsesLightFunctionAtlas",&local_98,
                L"Enable sampling of the light function atlas on translucent materials using forward shading."
               );
  atexit(FUN_1432266f2);
  local_98._0_4_ = 0;
  local_a8._0_4_ = 0x24;
  FUN_14078dbce(&DAT_14ca97100,L"r.Translucent.UsesRectLights",&local_98,
                L"Enable rect light support for translucent surfaces. When enabled, it will add an extrat sampler to the pixel shader (limited to 16 on dx11 based system)"
               );
  atexit(FUN_143226737);
  local_98._0_4_ = 0;
  local_a8._0_4_ = 0x24;
  FUN_14078dbce(&DAT_14ca97118,L"r.Translucent.UsesIESProfiles",&local_98,
                L"Enable IES profiles support for translucent surfaces. When enabled, it will add an extrat sampler to the pixel shader (limited to 16 on dx11 based system)"
               );
  atexit(FUN_14322677c);
  local_98._0_4_ = 1;
  local_a8._0_4_ = 0x24;
  FUN_14078dbce(&DAT_14ca97130,L"r.HairStrands.Strands.UseTriangleStrips",&local_98,
                L"Enable triangle strip geometry for hair strands rendering. This improves performances, but removes the last segments of each curve."
               );
  atexit(FUN_1432267c1);
  local_98._0_4_ = 1;
  local_a8._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca97148,L"r.HairStrands.LODMode",&local_98,
                L"Enable hair strands Auto LOD mode by default. Otherwise use Manual LOD mode. Auto LOD mode adapts hair curves based on screen coverage. Manual LOD mode relies on LODs manually setup per groom asset. This global behavior can be overridden per groom asset."
               );
  atexit(FUN_143226806);
  local_98._0_4_ = 0;
  local_a8._0_4_ = 0x24;
  FUN_14078dbce(&DAT_14ca97160,L"r.Substrate",&local_98,L"Enable Substrate materials (Beta).");
  atexit(FUN_1432268b4);
  local_98._0_4_ = 0x50;
  local_a8._0_4_ = 0x124;
  FUN_14078dbce(&DAT_14ca97178,L"r.Substrate.BytesPerPixel",&local_98,
                L"Substrate allocated byte per pixel to store materials data. Higher value means more complex material can be represented."
               );
  atexit(FUN_1432268f9);
  local_98._0_4_ = 8;
  local_a8._0_4_ = 0x124;
  FUN_14078dbce(&DAT_14ca97190,L"r.Substrate.ClosuresPerPixel",&local_98,
                L"Substrate closure count per pixel can be constrained. That is usefull to reduce the number of byte written durting the base pass, but also to limit the number of closures in Forward. Higher value means more complex material can be represented."
               );
  atexit(FUN_14322693e);
  local_98._0_4_ = 0;
  local_a8._0_4_ = 0x24;
  FUN_14078dbce(&DAT_14ca971a8,L"r.SubstrateBackCompatibility",&local_98,
                L"Disables Substrate multiple scattering and replaces Chan diffuse by Lambert.");
  atexit(FUN_143226983);
  local_98._0_4_ = 0;
  local_a8._0_4_ = 0x24;
  FUN_14078dbce(&DAT_14ca971c0,L"r.Substrate.OpaqueMaterialRoughRefraction",&local_98,
                L"Enable Substrate opaque material rough refractions effect from top layers over layers below."
               );
  atexit(FUN_1432269c8);
  local_98._0_4_ = 1;
  local_a8._0_4_ = 0x124;
  FUN_14078dbce(&DAT_14ca971d8,L"r.Substrate.SheenQuality",&local_98,
                L"Define Substrate sheen quality (1: Disney-based sheen, 2: Charlie-based sheen, ). r.Substrate.ShadingQuality=2 forces SheenQuality to 2. This variable is read-only."
               );
  atexit(FUN_143226a0d);
  local_98._0_4_ = 1;
  local_a8._0_4_ = 0x124;
  FUN_14078dbce(&DAT_14ca971f0,L"r.Substrate.ShadingQuality",&local_98,
                L"Define Substrate shading quality (1: accurate lighting, 2: approximate lighting). This variable is read-only."
               );
  atexit(FUN_143226a52);
  local_98._0_4_ = 0;
  local_a8._0_4_ = 0x24;
  FUN_14078dbce(&DAT_14ca97208,L"r.Substrate.DBufferPass",&local_98,
                L"Apply DBuffer after the base-pass as a separate pass. Read only because when this is changed, it will require the recompilation of all shaders."
               );
  atexit(FUN_143226a97);
  local_98._0_4_ = 0;
  local_a8._0_4_ = 0x124;
  FUN_14078dbce(&DAT_14ca97220,L"r.Material.RoughDiffuse",&local_98,
                L"Enable rough diffuse material.");
  atexit(FUN_143226adc);
  local_98._0_4_ = 1;
  local_a8._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca97238,L"r.Substrate.RoughDiffuse",&local_98,
                L"Enable Substrate rough diffuse model (works only if r.Material.RoughDiffuse is enabled in the project settings). Togglable at runtime"
               );
  atexit(FUN_143226b21);
  local_98._0_4_ = 1;
  local_a8._0_4_ = 0x124;
  FUN_14078dbce(&DAT_14ca97250,L"r.Substrate.Glints",&local_98,
                L"Enable Glint support for Substrate slabs. If changed, shaders needs to be recompiled."
               );
  atexit(FUN_143226b66);
  local_98._0_4_ = 1;
  local_a8._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca97268,L"r.Substrate.Glints.LUT",&local_98,
                L"Select one of the glint rendering LUT for testing.");
  atexit(FUN_143226bab);
  local_98._0_4_ = 0;
  local_a8._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14ca97280,L"r.Substrate.Glints.LevelBias",&local_98,
                L"Constantly bias the glint level. A negative value will reinforce the glint effect while a positive value will attenuate it. Be careful as this might cause aliasing."
               );
  atexit(FUN_143226bf0);
  local_98._0_4_ = 0;
  local_a8._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14ca97298,L"r.Substrate.Glints.LevelMin",&local_98,
                L"The minimum glint level used to render glints. Mostly affect the look of distance surfaces. A value greater than 0 will force glints to always be visible instead of using the analytic BSDF. Be careful as this might cause aliasing."
               );
  atexit(FUN_143226c35);
  local_98._0_4_ = 1;
  local_a8._0_4_ = 0x524;
  FUN_14078dbce(&DAT_14ca972b0,L"r.Substrate.SpecularProfile",&local_98,
                L"Enable Specular Profile support for Substrate slabs. If changed, shaders needs to be recompiled."
               );
  atexit(FUN_143226c7a);
  local_98._0_4_ = 0;
  local_a8._0_4_ = 0x24;
  FUN_14078dbce(&DAT_14ca972c8,L"r.Substrate.Debug.AdvancedVisualizationShaders",&local_98,
                L"Enable advanced Substrate material debug visualization shaders. Base pass shaders can output such advanced data."
               );
  atexit(FUN_143226cbf);
  local_98._0_4_ = 1;
  local_a8._0_4_ = 0x24;
  FUN_14078dbce(&DAT_14ca97380,
                L"r.Lumen.Reflections.HardwareRayTracing.Translucent.Refraction.EnableForProject",
                &local_98,
                L"Whether to use Lumen refraction tracing from surfaces when using harware ray tracing and hit lighting. This will require shader recompilation to compile of translucent card capture Lumen shaders. Increases GPU cost when enabled."
               );
  atexit(FUN_143226d48);
  local_98._0_4_ = 0;
  local_a8._0_4_ = 0x24;
  FUN_14078dbce(&DAT_14ca97398,L"r.ForwardShading.ForceSkyLightCubemapBlending",&local_98,
                L"Forces in shader sky box blending for forward shading. More expenssive but higher quality. This is similar to having Blend Sky Light Cubemaps = true on all forward materials."
               );
  atexit(FUN_143226d8d);
  local_98 = (code *)((ulonglong)local_98._4_4_ << 0x20);
  local_a8 = (undefined8 *)CONCAT44(local_a8._4_4_,0x24);
  FUN_14078dbce(&DAT_14ca973c0,L"r.SupportExpFogMatchesVolumetricFog",&local_98,
                L"When enabled, the height fog scattering/ambient/emissive/phase will match the volumetric fog better."
               );
  atexit(FUN_143226dd2);
  FUN_1400b22c2(&local_98,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_98,&DAT_14ca973d8);
  if (cVar2 == '\0') {
    _DAT_14ca973d8 = 0;
    uRam000000014ca973e0 = 0;
  }
  if (local_98 != (code *)0x0) {
    FUN_1400020a8();
  }
  local_90 = FUN_145c1161c;
  local_98 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca97500,&local_98);
  local_90 = FUN_1460b04be;
  local_98 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca97628,&local_98);
  local_90 = FUN_1460b072e;
  local_98 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca97750,&local_98);
  local_90 = FUN_1460b099e;
  local_98 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca97878,&local_98);
  local_90 = FUN_1460b0c0e;
  local_98 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca979a0,&local_98);
  local_90 = FUN_1460b0e7e;
  local_98 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca97ac8,&local_98);
  local_90 = FUN_1460b10ee;
  local_98 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca97bf0,&local_98);
  local_90 = FUN_1460455a2;
  local_98 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca97d18,&local_98);
  local_90 = FUN_145ee189a;
  local_98 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca97e40,&local_98);
  local_90 = FUN_1460b135e;
  local_98 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca97f68,&local_98);
  local_88 = 0;
  local_78 = &PTR_LAB_149e01e20;
  local_70 = FUN_14322fe20;
  local_98 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14ca97fe0,6,&local_98);
  local_88 = 0;
  local_78 = &PTR_LAB_149e01e20;
  local_70 = FUN_14322fe3a;
  local_98 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14ca98050,6,&local_98);
  local_88 = 0;
  local_78 = &PTR_LAB_149e01e20;
  local_70 = FUN_14322fe54;
  local_98 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14ca980c0,6,&local_98);
  local_88 = 0;
  local_78 = &PTR_LAB_149e01e20;
  local_70 = FUN_14322fe6e;
  local_98 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14ca98130,6,&local_98);
  local_88 = 0;
  local_78 = &PTR_LAB_149e01e20;
  local_70 = FUN_14322fe88;
  local_98 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14ca981a0,6,&local_98);
  local_88 = 0;
  local_78 = &PTR_LAB_149e01e20;
  local_70 = FUN_14322fea2;
  local_98 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14ca98210,6,&local_98);
  local_88 = 0;
  local_78 = &PTR_LAB_149e01e20;
  local_70 = FUN_14322febc;
  local_98 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14ca98280,6,&local_98);
  local_88 = 0;
  local_78 = &PTR_LAB_149e01e20;
  local_70 = FUN_14322fed6;
  local_98 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14ca982f0,6,&local_98);
  local_88 = 0;
  local_78 = &PTR_LAB_149e01e20;
  local_70 = FUN_14322fef0;
  local_98 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14ca98360,6,&local_98);
  local_88 = 0;
  local_78 = &PTR_LAB_149e01e20;
  local_70 = FUN_14322ff0a;
  local_98 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14ca983d0,6,&local_98);
  local_98._0_4_ = 1;
  local_a8 = (undefined8 *)((ulonglong)local_a8 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14ca984a8,L"r.ShaderPipelines",&local_98,L"Enable using Shader pipelines.");
  atexit(FUN_143226e8f);
  local_98._0_4_ = 0;
  local_a8._0_4_ = 4;
  FUN_14078dbce(&DAT_14ca984c0,L"r.Shaders.RemoveUnusedInterpolators",&local_98,
                L"Enables removing unused interpolators mode when compiling shader pipelines.\n 0: Disable (default)\n 1: Enable removing unused"
               );
  atexit(FUN_143226ed4);
  local_98._0_4_ = 0;
  local_a8._0_4_ = 5;
  FUN_14078dbce(&DAT_14ca984d8,L"r.Shaders.SkipCompression",&local_98,
                L"Skips shader compression after compiling. Shader compression time can be quite significant when using debug shaders. This CVar is only valid in non-shipping/test builds."
               );
  atexit(FUN_143226f19);
  local_98._0_4_ = 1;
  local_a8._0_4_ = 4;
  FUN_14078dbce(&DAT_14ca984f0,L"r.Shaders.AllowCompilingThroughWorkers",&local_98,
                L"Allows shader compilation through external ShaderCompileWorker processes.\n1 - (Default) Allows external shader compiler workers\n0 - Disallows external shader compiler workers. Will run shader compilation in proc of UE process."
               );
  atexit(FUN_143226f5e);
  local_98._0_4_ = 1;
  local_a8._0_4_ = 4;
  FUN_14078dbce(&DAT_14ca98508,L"r.Shaders.ForceDXC",&local_98,
                L"Forces DirectX Shader Compiler (DXC) to be used for all shaders instead of HLSLcc if supported.\n 1: Force new compiler for all shaders (default)\n 0: Disable"
               );
  atexit(FUN_143226fa3);
  _DAT_14ca98520 = 0;
  uRam000000014ca98528 = 0;
  _DAT_14ca98530 = 0;
  local_98 = (code *)CONCAT44(local_98._4_4_,0x2000);
  local_a8._0_4_ = 0x24;
  FUN_14078dbce(&DAT_14ca98798,L"r.ShaderBundle.MaxSize",&local_98,
                L"Maximum number of items in a work graph shader bundle.");
  atexit(FUN_14322705e);
  local_90 = FUN_145ef6f5a;
  local_98 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca988c8,&local_98);
  local_90 = FUN_14612c64a;
  local_98 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca989f0,&local_98);
  local_a8._0_4_ = 0;
  FUN_141471170(&DAT_14ca98a00,L"r.ShaderCodeLibrary.DefaultAsyncIOPriority",&DAT_14c760e3c,
                &DAT_149dfb77a);
  atexit(FUN_1432270bb);
  local_a8._0_4_ = 0;
  FUN_141471170(&DAT_14ca98a18,L"r.ShaderCodeLibrary.AsyncIOAllowDontCache",&DAT_14ca98a10,
                &DAT_149dfb77a);
  atexit(FUN_143227100);
  local_a8._0_4_ = 0x24;
  FUN_141471170(&DAT_14ca98a30,L"r.ShaderCodeLibrary.VisualizeShaderUsage",&DAT_14ca98a28,
                L"If 1, a bitmap with the used shaders (for each shader library chunk) will be saved at the exit. Works in standalone games only."
               );
  atexit(FUN_143227145);
  local_a8._0_4_ = 0x24;
  FUN_141471170(&DAT_14ca98a40,L"r.ShaderCodeLibrary.MaxShaderGroupSize",&DAT_14c760e40,
                L"Max (uncompressed) size of a group of shaders to be compressed/decompressed together.If a group exceeds it, it will be evenly split into subgroups which strive to not exceed it. However, if a shader group is down to one shader and still exceeds the limit, the limit will be ignored."
               );
  atexit(FUN_14322718a);
  local_a8._0_4_ = 0x24;
  FUN_1415c789c(&DAT_14ca98a50,L"r.ShaderCodeLibrary.MaxShaderPreloadWaitTime",&DAT_14c760e44,
                L"If we wait on shader preloads longer than this amount of seconds, we will log it as a warning."
               );
  atexit(FUN_1432271cf);
  local_a8 = (undefined8 *)((ulonglong)local_a8._4_4_ << 0x20);
  FUN_141471170(&DAT_14ca98a60,L"r.PreloadShaderPriority",&DAT_14c760e48,
                L"Change PreloadShaderGroup I/O priority.\n0-Min\n1-Low\n2-Medium (Default)\n3-High\n4-Max\n"
               );
  atexit(FUN_143227214);
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14323168b FUN_14323168b body=69 status=ok
// SIG undefined FUN_14323168b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14323168b(void)

{
  _DAT_14ca9a4e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432316cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca9a4f0,1);
  return;
}



// FUNCTION 1432316d0 FUN_1432316d0 body=69 status=ok
// SIG undefined FUN_1432316d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432316d0(void)

{
  _DAT_14ca9a4f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143231712. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca9a500,1);
  return;
}



// FUNCTION 143231715 FUN_143231715 body=69 status=ok
// SIG undefined FUN_143231715(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143231715(void)

{
  _DAT_14ca9a510 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143231757. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca9a518,1);
  return;
}



// FUNCTION 14323175a FUN_14323175a body=69 status=ok
// SIG undefined FUN_14323175a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14323175a(void)

{
  _DAT_14ca9a520 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014323179c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca9a528,1);
  return;
}


