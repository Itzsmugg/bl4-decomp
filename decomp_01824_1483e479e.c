// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1483e479e FUN_1483e479e body=143 status=ok
// SIG undefined FUN_1483e479e(void)

void FUN_1483e479e(longlong *param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xa30))(param_1,&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483e482e FUN_1483e482e body=50 status=ok
// SIG undefined FUN_1483e482e(void)

void FUN_1483e482e(longlong param_1,longlong param_2,undefined8 *param_3)

{
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140aab3d8();
  *param_3 = *(undefined8 *)(param_1 + 0x1050);
  return;
}



// FUNCTION 1483e4860 FUN_1483e4860 body=81 status=ok
// SIG undefined FUN_1483e4860(void)

void FUN_1483e4860(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar2 = *(longlong *)(param_1 + 0xa8);
  if (lVar2 != 0) {
    lVar1 = FUN_144a7a908();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_1483e48a7;
  }
  lVar2 = 0;
LAB_1483e48a7:
  *param_3 = lVar2;
  return;
}



// FUNCTION 1483e48b2 FUN_1483e48b2 body=60 status=ok
// SIG undefined FUN_1483e48b2(void)

longlong FUN_1483e48b2(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    lVar2 = FUN_144a7a908();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1483e48ee FUN_1483e48ee body=50 status=ok
// SIG undefined FUN_1483e48ee(void)

void FUN_1483e48ee(longlong param_1,longlong param_2,undefined8 *param_3)

{
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140aabb36();
  *param_3 = *(undefined8 *)(param_1 + 0x1058);
  return;
}



// FUNCTION 1483e4920 FUN_1483e4920 body=50 status=ok
// SIG undefined FUN_1483e4920(void)

void FUN_1483e4920(longlong param_1,longlong param_2,undefined8 *param_3)

{
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140aab796();
  *param_3 = *(undefined8 *)(param_1 + 0x1048);
  return;
}



// FUNCTION 1483e496e FUN_1483e496e body=54 status=ok
// SIG undefined FUN_1483e496e(void)

void FUN_1483e496e(longlong *param_1,longlong param_2,longlong *param_3)

{
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xb78))();
  *param_3 = param_1[0x208];
  return;
}



// FUNCTION 1483e49a4 FUN_1483e49a4 body=90 status=ok
// SIG undefined FUN_1483e49a4(void)

void FUN_1483e49a4(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    lVar2 = FUN_144a7a908();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      uVar3 = *(undefined8 *)(lVar1 + 0x398);
      goto LAB_1483e49eb;
    }
  }
  uVar3 = 0;
LAB_1483e49eb:
  *param_3 = uVar3;
  return;
}



// FUNCTION 1483e49fe FUN_1483e49fe body=50 status=ok
// SIG undefined FUN_1483e49fe(void)

void FUN_1483e49fe(longlong param_1,longlong param_2,undefined8 *param_3)

{
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140aab796();
  *param_3 = *(undefined8 *)(param_1 + 0x1048);
  return;
}



// FUNCTION 1483e4a36 FUN_1483e4a36 body=766 status=ok
// SIG undefined FUN_1483e4a36(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1483e4a36(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined1 auStack_1a8 [32];
  undefined1 *local_188;
  int local_180 [8];
  undefined8 local_160 [3];
  undefined8 local_148 [3];
  undefined1 local_130 [24];
  undefined1 local_118 [4];
  undefined1 local_114;
  undefined1 local_110 [40];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  int local_9c;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  puVar1 = (undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_130);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_130);
  }
  puVar3 = local_130;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_148);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_148);
  }
  puVar6 = local_148;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar6 = *(undefined8 **)(param_2 + 0x38);
  }
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_160);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_160);
  }
  puVar4 = local_160;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_180 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_180 + 2);
  }
  piVar5 = local_180 + 2;
  if (*(int **)(param_2 + 0x38) != (int *)0x0) {
    piVar5 = *(int **)(param_2 + 0x38);
  }
  local_180[1] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_180 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_180 + 1);
  }
  piVar7 = local_180 + 1;
  if (*(int **)(param_2 + 0x38) != (int *)0x0) {
    piVar7 = *(int **)(param_2 + 0x38);
  }
  local_180[0] = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_180);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_180);
  }
  iVar2 = local_180[0];
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_188 = local_118;
  local_114 = 0;
  (**(code **)(*param_1 + 0xa80))(param_1,local_110,puVar3,(local_180[0] != 0) * '\b' + '\a');
  puVar6[2] = local_d8;
  *puVar6 = local_e8;
  puVar6[1] = uStack_e0;
  puVar4[2] = local_a8;
  *puVar4 = local_b8;
  puVar4[1] = uStack_b0;
  *(undefined8 *)(piVar5 + 4) = local_58;
  *piVar5 = local_68;
  piVar5[1] = iStack_64;
  piVar5[2] = iStack_60;
  piVar5[3] = iStack_5c;
  if (iVar2 != 0) {
    *piVar7 = local_9c;
  }
  if ((local_48 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483e4d36 FUN_1483e4d36 body=169 status=ok
// SIG undefined FUN_1483e4d36(void)

void FUN_1483e4d36(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0xa88))(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483e4de0 FUN_1483e4de0 body=90 status=ok
// SIG undefined FUN_1483e4de0(void)

void FUN_1483e4de0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    lVar2 = FUN_144a7a908();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      uVar3 = *(undefined8 *)(lVar1 + 0x3b8);
      goto LAB_1483e4e27;
    }
  }
  uVar3 = 0;
LAB_1483e4e27:
  *param_3 = uVar3;
  return;
}



// FUNCTION 1483e4e4a FUN_1483e4e4a body=322 status=ok
// SIG undefined FUN_1483e4e4a(void)

void FUN_1483e4e4a(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_58 [36];
  int local_34;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  iVar2 = local_2c;
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  iVar1 = local_30;
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1483e4f8e(param_1,iVar2 != 0,iVar1 != 0,local_34 != 0);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483e4f8e FUN_1483e4f8e body=378 status=ok
// SIG undefined FUN_1483e4f8e(void)

void FUN_1483e4f8e(undefined8 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  uint uStack_144;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_114;
  undefined4 local_10c;
  longlong local_100;
  undefined4 local_f8;
  uint local_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  longlong local_70;
  undefined4 local_68;
  uint local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined2 local_48;
  undefined1 local_46;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0xffffffff00000001;
  local_150 = 0;
  local_148 = 0;
  local_120 = 0;
  local_118 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_114 = 0xffffffff00000080;
  local_10c = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = local_f0 & 0xffffff00;
  uStack_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0xffffffff00000001;
  local_c0 = 0;
  local_b8 = (ulonglong)uStack_144 << 0x20;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  FUN_140604072(&local_b0,&local_140);
  local_60 = local_f0;
  uStack_5c = uStack_ec;
  uStack_58 = (undefined4)uStack_e8;
  uStack_54 = uStack_e8._4_4_;
  local_50 = CONCAT44(uStack_dc,local_e0);
  local_48 = 0;
  local_46 = 0;
  local_f8 = 0;
  if (local_100 != 0) {
    FUN_1400020a8();
  }
  FUN_140603fbe(&local_140);
  local_48 = CONCAT11(param_3,param_2);
  local_46 = param_4;
  FUN_143b281d4(param_1,&local_d8);
  local_68 = 0;
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  FUN_140603fbe(&local_b0);
  if ((local_40 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483e510a FUN_1483e510a body=191 status=ok
// SIG undefined FUN_1483e510a(void)

void FUN_1483e510a(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
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
  lVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  param_1[0x1eb] = lVar1;
  (**(code **)(*param_1 + 0xac0))(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483e51ca FUN_1483e51ca body=232 status=ok
// SIG undefined FUN_1483e51ca(void)

void FUN_1483e51ca(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
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
  FUN_1483e52b4(param_1,local_20,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483e52b4 FUN_1483e52b4 body=214 status=ok
// SIG undefined FUN_1483e52b4(void)

void FUN_1483e52b4(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  byte bVar2;
  
  if (param_1[0x1e6] == param_2) {
    lVar1 = param_1[0x1eb];
    if (param_2 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(param_2);
    }
    bVar2 = DAT_14c950c29;
    param_1[0x1e6] = param_2;
    if ((param_3 != 0) && ((bVar2 & 1) != 0)) {
      FUN_1456cec3c(param_3);
    }
    param_1[0x1eb] = param_3;
    if (lVar1 == param_3) {
      return;
    }
  }
  else {
    if (param_2 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(param_2);
    }
    bVar2 = DAT_14c950c29;
    param_1[0x1e6] = param_2;
    if ((param_3 != 0) && ((bVar2 & 1) != 0)) {
      FUN_1456cec3c(param_3);
    }
    param_1[0x1eb] = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x0001483e530a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xac0))(param_1);
  return;
}



// FUNCTION 1483e538a FUN_1483e538a body=200 status=ok
// SIG undefined FUN_1483e538a(void)

void FUN_1483e538a(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
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
  lVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (param_1[0x1e6] != local_20) {
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_20);
    }
    param_1[0x1e6] = lVar1;
    (**(code **)(*param_1 + 0xac0))(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483e5454 FUN_1483e5454 body=200 status=ok
// SIG undefined FUN_1483e5454(void)

void FUN_1483e5454(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
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
  lVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (param_1[0x1e9] != local_20) {
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_20);
    }
    param_1[0x1e9] = lVar1;
    (**(code **)(*param_1 + 0xac0))(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483e551e FUN_1483e551e body=245 status=ok
// SIG undefined FUN_1483e551e(void)

void FUN_1483e551e(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong alStack_40 [3];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  alStack_40[0] = 0;
  local_58 = 0;
  uStack_50 = 0;
  alStack_40[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  puVar6 = puVar1;
  if (puVar1 == (undefined8 *)0x0) {
    puVar6 = &local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined8 *)(param_1 + 0x10b8) = *puVar6;
  uVar2 = *(undefined4 *)((longlong)puVar6 + 0xc);
  uVar3 = *(undefined4 *)(puVar6 + 2);
  uVar4 = *(undefined4 *)((longlong)puVar6 + 0x14);
  *(undefined4 *)(param_1 + 0x10c0) = *(undefined4 *)(puVar6 + 1);
  *(undefined4 *)(param_1 + 0x10c4) = uVar2;
  *(undefined4 *)(param_1 + 0x10c8) = uVar3;
  *(undefined4 *)(param_1 + 0x10cc) = uVar4;
  plVar5 = puVar1 + 3;
  if (puVar1 == (undefined8 *)0x0) {
    plVar5 = alStack_40;
  }
  FUN_144a787a6(param_1 + 0x10d0,plVar5);
  FUN_1483e5d42(param_1,0);
  if (alStack_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483e5628 FUN_1483e5628 body=388 status=ok
// SIG undefined FUN_1483e5628(void)

void FUN_1483e5628(longlong param_1,longlong param_2)

{
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  uint uStack_134;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_104;
  undefined4 local_fc;
  longlong local_f0;
  undefined4 local_e8;
  uint local_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  longlong local_60;
  undefined4 local_58;
  uint local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined2 local_38;
  undefined1 local_36;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x1028) = param_2;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0xffffffff00000001;
  local_140 = 0;
  local_138 = 0;
  local_110 = 0;
  local_108 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_104 = 0xffffffff00000080;
  local_fc = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = local_e0 & 0xffffff00;
  uStack_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0xffffffff00000001;
  local_b0 = 0;
  local_a8 = (ulonglong)uStack_134 << 0x20;
  local_80 = 0;
  local_78 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_74 = 0xffffffff00000080;
  local_6c = 0;
  local_60 = 0;
  local_58 = 0;
  FUN_140604072(&local_a0,&local_130);
  local_50 = local_e0;
  uStack_4c = uStack_dc;
  uStack_48 = (undefined4)uStack_d8;
  uStack_44 = uStack_d8._4_4_;
  local_40 = CONCAT44(uStack_cc,local_d0);
  local_38 = 0;
  local_36 = 0;
  local_e8 = 0;
  if (local_f0 != 0) {
    FUN_1400020a8();
  }
  FUN_140603fbe(&local_130);
  local_38 = 1;
  local_36 = 1;
  FUN_143b281d4(param_1,&local_c8);
  local_58 = 0;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  FUN_140603fbe(&local_a0);
  if ((local_28 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483e57c8 FUN_1483e57c8 body=67 status=ok
// SIG undefined FUN_1483e57c8(void)

void FUN_1483e57c8(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*param_2 + 8);
  FUN_1448284b2(param_1,plVar1);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_14aea0ec0);
                    /* WARNING: Could not recover jumptable at 0x0001483e5808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_149e3cbb8);
  return;
}



// FUNCTION 1483e5820 FUN_1483e5820 body=36 status=ok
// SIG undefined FUN_1483e5820(void)

void FUN_1483e5820(longlong *param_1)

{
  FUN_140456554();
                    /* WARNING: Could not recover jumptable at 0x0001483e5841. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xab8))(param_1,1);
  return;
}



// FUNCTION 1483e5844 FUN_1483e5844 body=36 status=ok
// SIG undefined FUN_1483e5844(void)

void FUN_1483e5844(longlong *param_1)

{
  FUN_14058337a();
                    /* WARNING: Could not recover jumptable at 0x0001483e5865. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xab8))(param_1,1);
  return;
}



// FUNCTION 1483e5868 FUN_1483e5868 body=36 status=ok
// SIG undefined FUN_1483e5868(void)

bool FUN_1483e5868(longlong *param_1)

{
  char cVar1;
  bool bVar2;
  
  if ((char)param_1[0x1ff] == '\x01') {
    cVar1 = (**(code **)(*param_1 + 0xa40))();
    bVar2 = cVar1 != '\x03';
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



// FUNCTION 1483e588c FUN_1483e588c body=273 status=ok
// SIG undefined FUN_1483e588c(void)

void FUN_1483e588c(longlong param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_48 = 0;
  if (param_2 == 0) {
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
  }
  else {
    FUN_1400bbfae(&local_40);
    uStack_60 = CONCAT44(uStack_3c,local_40);
    local_58 = CONCAT44(uStack_34,uStack_38);
    if (uStack_50 != 0) {
      FUN_1400020a8();
    }
    uStack_50 = CONCAT44(uStack_2c,local_30);
    local_48 = CONCAT44(uStack_24,uStack_28);
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if (cVar2 != '\0') {
      uVar1 = *(uint *)(param_2 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      if ((*(uint *)(lVar3 + 8) & 0x8400000) != 0) {
        local_68 = 0;
        goto LAB_1483e58d5;
      }
    }
    FUN_14485c47a(&local_68,param_2);
  }
LAB_1483e58d5:
  FUN_1483e599e(param_1 + 0x1060,&local_68);
  if (uStack_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483e599e FUN_1483e599e body=171 status=ok
// SIG undefined FUN_1483e599e(void)

void FUN_1483e599e(longlong *param_1,longlong param_2)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  uVar2 = 0;
  bVar4 = false;
  do {
    lVar3 = uVar2 * 0x28 + 8;
    while (cVar1 = FUN_144a7afa6(*param_1 + lVar3,param_2 + 8), cVar1 == '\0') {
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 0x28;
      if ((longlong)(int)param_1[1] <= (longlong)uVar2) {
        if (!bVar4) {
          return;
        }
        goto LAB_1483e5a36;
      }
    }
    do {
      FUN_1483f03a2(param_1,uVar2 & 0xffffffff);
      if ((longlong)(int)param_1[1] <= (longlong)uVar2) goto LAB_1483e5a36;
      cVar1 = FUN_144a7afa6(*param_1 + lVar3,param_2 + 8);
    } while (cVar1 != '\0');
    uVar2 = uVar2 + 1;
    bVar4 = true;
  } while ((longlong)uVar2 < (longlong)(int)param_1[1]);
LAB_1483e5a36:
  FUN_1483f0364(param_1);
  return;
}



// FUNCTION 1483e5a4a FUN_1483e5a4a body=292 status=ok
// SIG undefined FUN_1483e5a4a(void)

void FUN_1483e5a4a(longlong *param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_58 = 0;
  if (param_2 == 0) {
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
  }
  else {
    FUN_1400bbfae(&local_48);
    uStack_70 = CONCAT44(uStack_44,local_48);
    local_68 = CONCAT44(uStack_3c,uStack_40);
    if (uStack_60 != 0) {
      FUN_1400020a8();
    }
    uStack_60 = CONCAT44(uStack_34,local_38);
    local_58 = CONCAT44(uStack_2c,uStack_30);
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if (cVar2 != '\0') {
      uVar1 = *(uint *)(param_2 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      if ((*(uint *)(lVar3 + 8) & 0x8400000) != 0) {
        local_78 = 0;
        goto LAB_1483e5a95;
      }
    }
    FUN_14485c47a(&local_78,param_2);
  }
LAB_1483e5a95:
  FUN_1483f0482(param_1 + 0x20e,&local_78);
  if (uStack_60 != 0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0xb40))(param_1,1);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483e5b70 FUN_1483e5b70 body=292 status=ok
// SIG undefined FUN_1483e5b70(void)

void FUN_1483e5b70(longlong *param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_58 = 0;
  if (param_2 == 0) {
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
  }
  else {
    FUN_1400bbfae(&local_48);
    uStack_70 = CONCAT44(uStack_44,local_48);
    local_68 = CONCAT44(uStack_3c,uStack_40);
    if (uStack_60 != 0) {
      FUN_1400020a8();
    }
    uStack_60 = CONCAT44(uStack_34,local_38);
    local_58 = CONCAT44(uStack_2c,uStack_30);
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if (cVar2 != '\0') {
      uVar1 = *(uint *)(param_2 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      if ((*(uint *)(lVar3 + 8) & 0x8400000) != 0) {
        local_78 = 0;
        goto LAB_1483e5bbb;
      }
    }
    FUN_14485c47a(&local_78,param_2);
  }
LAB_1483e5bbb:
  FUN_1483e5c96(param_1 + 0x20e,&local_78);
  if (uStack_60 != 0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0xb40))(param_1,1);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483e5c96 FUN_1483e5c96 body=171 status=ok
// SIG undefined FUN_1483e5c96(void)

void FUN_1483e5c96(longlong *param_1,longlong param_2)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  uVar2 = 0;
  bVar4 = false;
  do {
    lVar3 = uVar2 * 0x28 + 8;
    while (cVar1 = FUN_144a7afa6(*param_1 + lVar3,param_2 + 8), cVar1 == '\0') {
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 0x28;
      if ((longlong)(int)param_1[1] <= (longlong)uVar2) {
        if (!bVar4) {
          return;
        }
        goto LAB_1483e5d2e;
      }
    }
    do {
      FUN_1483f061c(param_1,uVar2 & 0xffffffff);
      if ((longlong)(int)param_1[1] <= (longlong)uVar2) goto LAB_1483e5d2e;
      cVar1 = FUN_144a7afa6(*param_1 + lVar3,param_2 + 8);
    } while (cVar1 != '\0');
    uVar2 = uVar2 + 1;
    bVar4 = true;
  } while ((longlong)uVar2 < (longlong)(int)param_1[1]);
LAB_1483e5d2e:
  FUN_1483f05de(param_1);
  return;
}



// FUNCTION 1483e5d42 FUN_1483e5d42 body=1259 status=ok
// SIG undefined FUN_1483e5d42(void)

void FUN_1483e5d42(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  char cVar8;
  undefined2 *puVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_158 [40];
  double local_130;
  double dStack_128;
  double local_120;
  double dStack_118;
  undefined1 local_110;
  undefined8 local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar10 = param_1[0x16];
  if ((lVar10 == 0) && (lVar10 = FUN_1448abda6(param_1), lVar10 == 0)) goto LAB_1483e5eea;
  local_98 = 0;
  uStack_90 = (undefined2 *)0x0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_88 = 0;
  if ((*(byte *)(param_1 + 0x211) & 1) == 0) {
    if (param_1[0x218] == 0) {
      (**(code **)(*param_1 + 0x528))(param_1,&local_e0,param_1 + 0x48);
      dVar3 = (double)CONCAT44(uStack_dc,local_e0);
      dVar4 = (double)CONCAT44(uStack_d4,uStack_d8);
      dVar6 = (double)CONCAT44(uStack_bc,local_c0);
      dVar5 = (double)CONCAT44(uStack_c4,uStack_c8);
      uVar11 = FUN_144a6c4d8();
      lVar12 = FUN_144a78ede(param_1,uVar11);
      if (lVar12 == 0) {
LAB_1483e6149:
        dStack_f0 = 0.0;
        local_108 = 0;
        dStack_100 = 0.0;
        local_f8 = 0.0;
        local_e8 = 0.0;
      }
      else {
        lVar12 = FUN_144a79cc8(lVar12);
        local_108 = 0;
        dStack_100 = 0.0;
        local_f8 = 0.0;
        dStack_f0 = 0.0;
        local_e8 = 0.0;
        if (lVar12 == 0) goto LAB_1483e6149;
        FUN_1400bbfae(&local_130,lVar12);
        dStack_100 = local_130;
        local_f8 = dStack_128;
        if (dStack_f0 != 0.0) {
          FUN_1400020a8();
        }
        dStack_f0 = local_120;
        local_e8 = dStack_118;
        cVar8 = (*(code *)PTR_FUN_14c758760)();
        if (cVar8 == '\0') {
LAB_1483e621c:
          FUN_14485c47a(&local_108,lVar12);
        }
        else {
          uVar2 = *(uint *)(lVar12 + 0xc);
          if ((int)uVar2 < DAT_14c9647dc) {
            lVar13 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
          }
          else {
            lVar13 = 0;
          }
          if ((*(uint *)(lVar13 + 8) & 0x8400000) == 0) goto LAB_1483e621c;
          local_108 = 0;
        }
      }
      local_110 = 1;
      local_130 = dVar3 - dVar5;
      dStack_128 = dVar4 - dVar6;
      local_120 = dVar3 + dVar5;
      dStack_118 = dVar4 + dVar6;
      FUN_148408f60(&local_e0,lVar10,&local_130,&local_108);
      local_a8 = CONCAT44(uStack_dc,local_e0);
      uStack_a0 = CONCAT44(uStack_d4,uStack_d8);
      local_98 = CONCAT44(uStack_cc,local_d0);
      if (uStack_90 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      uStack_90 = (undefined2 *)CONCAT44(uStack_c4,uStack_c8);
      local_88 = CONCAT44(uStack_bc,local_c0);
    }
    else {
      lVar10 = FUN_140297002(param_1 + 0x217);
      if (lVar10 == 0) {
        local_a8 = 0;
        uStack_a0 = 0;
        local_98 = 0;
        bVar14 = (longlong)local_88 < 0;
        local_88 = local_88 & 0xffffffff00000000;
        puVar9 = uStack_90;
        if (bVar14) {
          FUN_1446f8c06(&uStack_90,0);
          puVar9 = uStack_90;
        }
        goto LAB_1483e5e06;
      }
      FUN_1400bbfae(&local_e0,lVar10);
      uStack_a0 = CONCAT44(uStack_dc,local_e0);
      local_98 = CONCAT44(uStack_d4,uStack_d8);
      if (uStack_90 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      uStack_90 = (undefined2 *)CONCAT44(uStack_cc,local_d0);
      local_88 = CONCAT44(uStack_c4,uStack_c8);
      cVar8 = (*(code *)PTR_FUN_14c758760)();
      if (cVar8 != '\0') {
        uVar2 = *(uint *)(lVar10 + 0xc);
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar12 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar12 = 0;
        }
        if ((*(uint *)(lVar12 + 8) & 0x8400000) != 0) {
          local_a8 = 0;
          goto LAB_1483e5e10;
        }
      }
      FUN_14485c47a(&local_a8,lVar10);
    }
  }
  else {
    param_1[0x217] = 0;
    param_1[0x218] = 0;
    param_1[0x219] = 0;
    *(undefined4 *)(param_1 + 0x21b) = 0;
    if (*(int *)((longlong)param_1 + 0x10dc) < 0) {
      FUN_1446f8c06(param_1 + 0x21a,0);
    }
    puVar9 = (undefined2 *)param_1[0x21a];
LAB_1483e5e06:
    if (puVar9 != (undefined2 *)0x0) {
      *puVar9 = 0;
    }
  }
LAB_1483e5e10:
  cVar8 = FUN_144a7afa6(param_1 + 0x213,&uStack_a0);
  if (cVar8 == '\0') {
    lVar10 = FUN_140297002(param_1 + 0x212);
    if (lVar10 != 0) {
      FUN_140f70f70(lVar10,param_1);
    }
    lVar10 = FUN_140297002(&local_a8);
    if (lVar10 != 0) {
      FUN_140e16768(lVar10,param_1);
    }
    puVar9 = uStack_90;
    param_1[0x212] = local_a8;
    *(undefined4 *)(param_1 + 0x213) = (undefined4)uStack_a0;
    *(undefined4 *)((longlong)param_1 + 0x109c) = uStack_a0._4_4_;
    *(undefined4 *)(param_1 + 0x214) = (undefined4)local_98;
    *(undefined4 *)((longlong)param_1 + 0x10a4) = local_98._4_4_;
    plVar1 = param_1 + 0x215;
    if (plVar1 != &uStack_90) {
      iVar7 = (int)local_88;
      lVar10 = (longlong)(int)local_88;
      *(int *)(param_1 + 0x216) = (int)local_88;
      if ((int)local_88 == 0 && *(int *)((longlong)param_1 + 0x10b4) == 0) {
        *(undefined4 *)((longlong)param_1 + 0x10b4) = 0;
      }
      else {
        FUN_1446dd670(plVar1,local_88 & 0xffffffff);
        if (iVar7 != 0) {
          memcpy((void *)*plVar1,puVar9,lVar10 * 2);
        }
      }
    }
    (**(code **)(*param_1 + 0xac0))(param_1);
  }
  if (uStack_90 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_1483e5eea:
  if ((local_80 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483e623e FUN_1483e623e body=73 status=ok
// SIG undefined FUN_1483e623e(void)

void FUN_1483e623e(longlong *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)(**(code **)(*param_1 + 0xaf8))();
  fVar2 = (float)FUN_1405b9a48(param_1);
  *param_3 = fVar1 + fVar2;
  *param_2 = fVar1 - fVar2;
  return;
}



// FUNCTION 1483e6288 FUN_1483e6288 body=84 status=ok
// SIG undefined FUN_1483e6288(void)

void FUN_1483e6288(longlong param_1)

{
  undefined4 uVar1;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(longlong *)(param_1 + 0x1038) == 0) {
    uVar1 = 0;
  }
  else {
    local_c = 0;
    uVar1 = FUN_140753fde(*(longlong *)(param_1 + 0x1038) + 0x70);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uVar1);
}



// FUNCTION 1483e62de FUN_1483e62de body=193 status=ok
// SIG undefined FUN_1483e62de(void)

longlong FUN_1483e62de(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_14479d2ce();
  if (lVar3 == 0) {
    if (*(longlong *)(param_1 + 8) == 0) {
      return 0;
    }
    lVar3 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar3 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_1,lVar3);
      if (lVar3 == 0) {
        return 0;
      }
    }
    else {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar3);
      }
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_1458d5494();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar3;
  }
  return 0;
}



// FUNCTION 1483e63a0 FUN_1483e63a0 body=37 status=ok
// SIG undefined FUN_1483e63a0(void)

undefined8 FUN_1483e63a0(longlong param_1,undefined8 param_2)

{
  (**(code **)(*(longlong *)(param_1 + -0x2a8) + 0xa38))(param_1 + -0x2a8);
  return param_2;
}



// FUNCTION 1483e63c6 FUN_1483e63c6 body=112 status=ok
// SIG undefined FUN_1483e63c6(void)

ulonglong FUN_1483e63c6(longlong *param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144b217d4();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    (**(code **)(*param_1 + 0xa28))(param_1,&local_28,1);
    uVar2 = CONCAT71((int7)((ulonglong)param_1 >> 8),0 < local_20);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483e6444 FUN_1483e6444 body=69 status=ok
// SIG undefined FUN_1483e6444(void)

void FUN_1483e6444(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = param_1;
  if ((*(byte *)(param_1 + 0x9c) & 1) != 0) {
    while( true ) {
      if (lVar1 == 0) {
        FUN_1402b9e22(param_1);
        FUN_145733eba(param_1);
        return;
      }
      if ((*(uint *)(lVar1 + 8) & 0x30) != 0) break;
      lVar1 = *(longlong *)(lVar1 + 0x20);
    }
  }
  return;
}



// FUNCTION 1483e6490 FUN_1483e6490 body=118 status=ok
// SIG undefined FUN_1483e6490(void)

void FUN_1483e6490(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    lVar2 = FUN_144a7a908();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      plVar3 = *(longlong **)(lVar1 + 0x3b8);
      goto LAB_1483e64d7;
    }
  }
  plVar3 = (longlong *)0x0;
LAB_1483e64d7:
                    /* WARNING: Could not recover jumptable at 0x0001483e64fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x2b8))(plVar3,param_2,param_3,param_4);
  return;
}



// FUNCTION 1483e651e FUN_1483e651e body=60 status=ok
// SIG undefined FUN_1483e651e(void)

undefined8 * FUN_1483e651e(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  lVar1 = *(longlong *)(param_1 + 0x19b0);
  if (lVar1 != 0) {
    *(undefined4 *)(param_2 + 1) = 1;
    FUN_140c43e06(param_2,0);
    *(longlong *)*param_2 = lVar1;
  }
  return param_2;
}



// FUNCTION 1483e655a FUN_1483e655a body=155 status=ok
// SIG undefined FUN_1483e655a(void)

void FUN_1483e655a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  FUN_145873a7e(*(undefined8 *)(param_1 + 0xa8),&local_38,0);
  lVar1 = local_38;
  *(undefined8 *)(param_1 + 0x19b0) = 0;
  lVar3 = (longlong)(int)uStack_30;
  if (lVar3 != 0) {
    lVar2 = 0;
    do {
      (**(code **)(**(longlong **)(lVar1 + lVar2) + 0x420))(*(longlong **)(lVar1 + lVar2),0);
      lVar2 = lVar2 + 8;
    } while (lVar3 * 8 != lVar2);
  }
  if (local_38 != 0) {
    FUN_1400020a8(local_38);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483e65f6 FUN_1483e65f6 body=1079 status=ok
// SIG undefined FUN_1483e65f6(void)

void FUN_1483e65f6(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 *puVar7;
  bool bVar8;
  double dVar9;
  undefined1 auStack_1b8 [32];
  undefined1 local_198;
  undefined8 local_190;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  undefined1 local_150 [24];
  double local_138;
  double local_130;
  undefined8 local_118;
  undefined8 local_110;
  undefined1 local_108 [192];
  undefined1 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar4 = param_1[0x15];
  if (param_1[0x336] == 0) {
    FUN_1446f470e(&local_110,L"CustomMeshComponent",1);
    local_190 = 0;
    local_198 = 0;
    lVar2 = FUN_141797230(lVar4,local_110,8,0);
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    param_1[0x336] = lVar2;
    FUN_1408c8a1a(lVar2);
    FUN_140486fc4(param_1[0x336],param_1,0);
    *(byte *)(param_1[0x336] + 0x2d2) = *(byte *)(param_1[0x336] + 0x2d2) & 0xfe;
    if ((*(byte *)((longlong)param_1 + 0x9c) & 1) != 0) {
      FUN_140b506a4(param_1[0x336]);
    }
  }
  local_48 = (undefined1 *)0x0;
  local_40 = 0x1800000000;
  FUN_14024dbd6(lVar4,local_108,0);
  puVar7 = local_48;
  if (local_48 == (undefined1 *)0x0) {
    puVar7 = local_108;
  }
  lVar2 = (longlong)(int)local_40;
  if (lVar2 != 0) {
    lVar6 = 0;
    do {
      plVar5 = *(longlong **)(puVar7 + lVar6);
      lVar3 = FUN_1459ed86c();
      if ((*(int *)(plVar5[2] + 0x38) < *(int *)(lVar3 + 0x38)) ||
         (*(longlong *)(*(longlong *)(plVar5[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30)) {
        FUN_1457ba85c(param_1,plVar5);
        (**(code **)(*plVar5 + 0x588))(plVar5,*(undefined1 *)((longlong)param_1 + 0x1fb));
      }
      lVar6 = lVar6 + 8;
    } while (lVar2 * 8 != lVar6);
  }
  (**(code **)(*param_1 + 0xb78))(param_1);
  (**(code **)(*(longlong *)param_1[0x336] + 0xa78))((longlong *)param_1[0x336],param_1[0x205]);
  FUN_1417be62e(param_1[0x336],0);
  FUN_145733f44(param_1,param_1[0x336]);
  FUN_1457ba85c(param_1,param_1[0x336]);
  FUN_1448215fa(param_1[0x336]);
  iVar1 = (**(code **)(*param_1 + 0x570))(param_1);
  if ((iVar1 == 0) || ((char)param_1[0x338] != '\x01')) {
    plVar5 = (longlong *)param_1[0x337];
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x420))(plVar5,0);
    }
    param_1[0x337] = 0;
    bVar8 = true;
  }
  else {
    plVar5 = (longlong *)param_1[0x337];
    if (plVar5 == (longlong *)0x0) {
      bVar8 = true;
      FUN_1446f470e(&local_118,L"CollisionComponent",1);
      local_190 = 0;
      local_198 = 0;
      lVar4 = FUN_1483e6a2e(lVar4,local_118,8,0);
      if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar4);
      }
      param_1[0x337] = lVar4;
      FUN_1408c8a1a(lVar4);
      FUN_140486fc4(param_1[0x337],param_1,0);
      FUN_140b506a4(param_1[0x337]);
      plVar5 = (longlong *)param_1[0x337];
      if (plVar5 == (longlong *)0x0) goto LAB_1483e67bb;
    }
    (**(code **)(*plVar5 + 0x588))(plVar5,*(undefined1 *)((longlong)param_1 + 0x1fb));
    FUN_145733f44(param_1,param_1[0x337]);
    FUN_1457ba85c(param_1,param_1[0x337]);
    (**(code **)(*(longlong *)param_1[0x336] + 0x530))((longlong *)param_1[0x336],local_150);
    local_158 = (double)param_1[0x4e] - (double)param_1[0x335];
    local_160 = *(double *)(param_1[0x336] + 0x168) + 0.0;
    local_168 = *(double *)(param_1[0x336] + 0x160) + 0.0;
    local_198 = 0;
    FUN_140d93b16(param_1[0x337],&local_168,0,0);
    dVar9 = (double)(*(float *)((longlong)param_1 + 0x19c4) + *(float *)((longlong)param_1 + 0x19c4)
                    );
    local_180 = local_138 - dVar9 / (double)param_1[0x39];
    local_178 = local_130 - dVar9 / (double)param_1[0x3a];
    local_170 = (double)param_1[0x335] / (double)param_1[0x3b];
    FUN_140c9cc04(param_1[0x337],&local_180,0);
    bVar8 = param_1[0x337] == 0;
  }
LAB_1483e67bb:
  (**(code **)(*(longlong *)param_1[0x336] + 0x720))((longlong *)param_1[0x336],bVar8);
  if (local_48 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483e6a2e FUN_1483e6a2e body=246 status=ok
// SIG undefined FUN_1483e6a2e(void)

undefined8
FUN_1483e6a2e(undefined8 param_1,longlong param_2,uint param_3,undefined8 param_4,byte param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  ushort local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong lStack_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_d8 = FUN_14088b378();
  local_88 = (longlong *)0x0;
  local_58 = 0;
  local_a0 = 0;
  lStack_98 = 0;
  uStack_c0 = (ulonglong)param_3;
  local_b8 = (ushort)param_5;
  local_a8 = param_6;
  local_d0 = param_1;
  local_c8 = param_2;
  local_b0 = param_4;
  uVar1 = FUN_1402710dd(&local_d8);
  if (lStack_98 != 0) {
    plVar2 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar2 = local_78;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483e6b2a FUN_1483e6b2a body=48 status=ok
// SIG undefined FUN_1483e6b2a(void)

void FUN_1483e6b2a(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*param_2 + 8);
  FUN_1402d084a(param_1,plVar1);
                    /* WARNING: Could not recover jumptable at 0x0001483e6b57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_149e3c9a0);
  return;
}



// FUNCTION 1483e6b5a FUN_1483e6b5a body=368 status=ok
// SIG undefined FUN_1483e6b5a(void)

undefined4 FUN_1483e6b5a(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
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
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((longlong)(int)param_1[1] == 0) {
    uVar4 = 0;
  }
  else {
    lVar7 = (longlong)(int)param_1[1] * 0x28;
    lVar6 = *param_1 + 8;
    do {
      lVar7 = lVar7 + -0x28;
      lVar2 = *param_2;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_88 = 0;
      if (lVar2 == 0) {
        local_a8 = 0;
        uStack_a0 = 0;
        local_98 = 0;
      }
      else {
        FUN_1400bbfae(&local_80,lVar2);
        uStack_a0 = CONCAT44(uStack_7c,local_80);
        local_98 = CONCAT44(uStack_74,uStack_78);
        if (uStack_90 != 0) {
          FUN_1400020a8();
        }
        uStack_90 = CONCAT44(uStack_6c,local_70);
        local_88 = CONCAT44(uStack_64,uStack_68);
        cVar3 = (*(code *)PTR_FUN_14c758760)();
        if (cVar3 != '\0') {
          uVar1 = *(uint *)(lVar2 + 0xc);
          if ((int)uVar1 < DAT_14c9647dc) {
            lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          }
          else {
            lVar5 = 0;
          }
          if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
            local_a8 = 0;
            goto LAB_1483e6c60;
          }
        }
        FUN_14485c47a(&local_a8,lVar2);
      }
LAB_1483e6c60:
      uVar4 = FUN_144a7afa6(lVar6,&uStack_a0);
      if (uStack_90 != 0) {
        FUN_1400020a8();
      }
      lVar6 = lVar6 + 0x28;
    } while ((byte)(lVar7 == 0 | (byte)uVar4) != 1);
  }
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483e6ccc FUN_1483e6ccc body=320 status=ok
// SIG undefined FUN_1483e6ccc(void)

void FUN_1483e6ccc(undefined8 param_1)

{
  void *_Src;
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_88 [32];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  int local_58;
  void *local_50;
  int local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1417e82ee();
  lVar1 = FUN_1447210f0(param_1);
  FUN_1483f1b9c();
  _Src = local_50;
  local_68 = (void *)0x0;
  lVar3 = (longlong)local_48;
  local_60 = local_48;
  if (lVar3 == 0) {
    local_5c = 0;
    iVar4 = 0;
    local_58 = local_40;
  }
  else {
    FUN_14010590e(&local_68,local_48,0);
    memcpy(local_68,_Src,lVar3 << 3);
    local_58 = local_40;
    iVar4 = local_48;
  }
  do {
    if (local_58 == iVar4) {
      if (local_68 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_50 != (void *)0x0) {
        FUN_1400020a8();
      }
      if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    lVar3 = *(longlong *)((longlong)local_68 + (longlong)local_58 * 8);
    if (lVar3 != 0) {
      lVar2 = *(longlong *)(lVar3 + 0xb0);
      if (lVar2 == 0) {
        lVar2 = FUN_1448abda6(lVar3);
      }
      if (lVar2 == lVar1) {
        FUN_1483e5b70(lVar3,param_1);
      }
    }
    lVar3 = (longlong)local_58;
    do {
      lVar3 = lVar3 + 1;
      local_58 = (int)lVar3;
      if (local_60 <= lVar3) break;
    } while (*(longlong *)((longlong)local_68 + lVar3 * 8) == 0);
  } while( true );
}



// FUNCTION 1483e6e2c FUN_1483e6e2c body=248 status=ok
// SIG undefined FUN_1483e6e2c(void)

void FUN_1483e6e2c(void)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  int local_40;
  void *local_38;
  int local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1483f1c46();
  _Src = local_38;
  local_50 = (void *)0x0;
  lVar2 = (longlong)local_30;
  local_48 = local_30;
  if (lVar2 == 0) {
    local_44 = 0;
    iVar1 = 0;
    local_40 = local_28;
  }
  else {
    FUN_14010590e(&local_50,local_30,0);
    memcpy(local_50,_Src,lVar2 << 3);
    local_40 = local_28;
    iVar1 = local_30;
  }
  do {
    if (local_40 == iVar1) {
      if (local_50 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_38 != (void *)0x0) {
        FUN_1400020a8();
      }
      if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_1448215fa(*(undefined8 *)((longlong)local_50 + (longlong)local_40 * 8));
    lVar2 = (longlong)local_40;
    do {
      lVar2 = lVar2 + 1;
      local_40 = (int)lVar2;
      if (local_48 <= lVar2) break;
    } while (*(longlong *)((longlong)local_50 + lVar2 * 8) == 0);
  } while( true );
}



// FUNCTION 1483e6f25 FUN_1483e6f25 body=155 status=ok
// SIG undefined FUN_1483e6f25(void)

undefined8 FUN_1483e6f25(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb47140) {
    FUN_144b3d300(&DAT_14cb47140);
    if (DAT_14cb47140 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14cb47138 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Water.WaterInfo.RenderMethod",1);
      _Init_thread_footer(&DAT_14cb47140);
    }
  }
  if (DAT_14cb47138 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001483e6f5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*DAT_14cb47138 + 0xb0))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 1483e6fc0 FUN_1483e6fc0 body=72 status=ok
// SIG undefined FUN_1483e6fc0(void)

undefined8 FUN_1483e6fc0(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0xaf8))();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_14001cc68(0x8c0,0x10);
    FUN_143b29612(uVar2,param_1,(char)param_1[0xe3]);
  }
  return uVar2;
}



// FUNCTION 1483e7008 FUN_1483e7008 body=100 status=ok
// SIG undefined FUN_1483e7008(void)

void FUN_1483e7008(longlong param_1)

{
  char cVar1;
  longlong in_stack_00000040;
  
  cVar1 = FUN_14015294c(param_1);
  if (cVar1 != '\0') {
    *(uint *)(in_stack_00000040 + 0xe8) =
         *(uint *)(in_stack_00000040 + 0xe8) & 0xfffffffe | (uint)*(byte *)(param_1 + 0x8b8);
  }
  return;
}



// FUNCTION 1483e708a FUN_1483e708a body=48 status=ok
// SIG undefined FUN_1483e708a(void)

void FUN_1483e708a(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*param_2 + 8);
  FUN_1402d084a(param_1,plVar1);
                    /* WARNING: Could not recover jumptable at 0x0001483e70b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_14aea0ec0);
  return;
}



// FUNCTION 1483e70ba FUN_1483e70ba body=41 status=ok
// SIG undefined FUN_1483e70ba(void)

void FUN_1483e70ba(undefined8 param_1,longlong *param_2)

{
  FUN_1402d084a();
                    /* WARNING: Could not recover jumptable at 0x0001483e70e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14aea0ec0);
  return;
}



// FUNCTION 1483e70e4 FUN_1483e70e4 body=320 status=ok
// SIG undefined FUN_1483e70e4(void)

void FUN_1483e70e4(undefined8 param_1)

{
  void *_Src;
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_88 [32];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  int local_58;
  void *local_50;
  int local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1407fb560();
  lVar1 = FUN_1447210f0(param_1);
  FUN_1483f1b9c();
  _Src = local_50;
  local_68 = (void *)0x0;
  lVar3 = (longlong)local_48;
  local_60 = local_48;
  if (lVar3 == 0) {
    local_5c = 0;
    iVar4 = 0;
    local_58 = local_40;
  }
  else {
    FUN_14010590e(&local_68,local_48,0);
    memcpy(local_68,_Src,lVar3 << 3);
    local_58 = local_40;
    iVar4 = local_48;
  }
  do {
    if (local_58 == iVar4) {
      if (local_68 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_50 != (void *)0x0) {
        FUN_1400020a8();
      }
      if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    lVar3 = *(longlong *)((longlong)local_68 + (longlong)local_58 * 8);
    if (lVar3 != 0) {
      lVar2 = *(longlong *)(lVar3 + 0xb0);
      if (lVar2 == 0) {
        lVar2 = FUN_1448abda6(lVar3);
      }
      if (lVar2 == lVar1) {
        FUN_1483e588c(lVar3,param_1);
      }
    }
    lVar3 = (longlong)local_58;
    do {
      lVar3 = lVar3 + 1;
      local_58 = (int)lVar3;
      if (local_60 <= lVar3) break;
    } while (*(longlong *)((longlong)local_68 + lVar3 * 8) == 0);
  } while( true );
}



// FUNCTION 1483e7238 FUN_1483e7238 body=60 status=ok
// SIG undefined FUN_1483e7238(void)

undefined8 * FUN_1483e7238(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  lVar1 = *(longlong *)(param_1 + 0x19b0);
  if (lVar1 != 0) {
    *(undefined4 *)(param_2 + 1) = 1;
    FUN_140c43e06(param_2,0);
    *(longlong *)*param_2 = lVar1;
  }
  return param_2;
}



// FUNCTION 1483e7274 FUN_1483e7274 body=290 status=ok
// SIG undefined FUN_1483e7274(void)

double FUN_1483e7274(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  double *pdVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  if ((char)param_1[2] == '\0') {
    dVar11 = 1.0;
  }
  else {
    dVar11 = -1.0;
  }
  iVar9 = (int)param_1[1];
  if ((longlong)iVar9 < 1) {
    dVar10 = 0.0;
  }
  else {
    lVar2 = *param_1;
    uVar7 = (ulonglong)(iVar9 - 1);
    pdVar5 = (double *)(lVar2 + 8);
    dVar10 = 0.0;
    uVar6 = 0;
    do {
      lVar8 = (longlong)(int)uVar7 * 0x10;
      dVar10 = dVar10 + (*(double *)(lVar2 + lVar8) * *pdVar5 -
                        pdVar5[-1] * *(double *)(lVar2 + 8 + lVar8));
      uVar7 = uVar6 & 0xffffffff;
      uVar6 = uVar6 + 1;
      pdVar5 = pdVar5 + 2;
    } while ((longlong)iVar9 != uVar6);
    dVar10 = dVar10 * 0.5;
  }
  dVar10 = dVar10 * dVar11;
  if ((longlong)(int)param_1[4] != 0) {
    plVar4 = (longlong *)param_1[3];
    plVar3 = plVar4 + (longlong)(int)param_1[4] * 2;
    do {
      uVar1 = *(uint *)(plVar4 + 1);
      if ((ulonglong)uVar1 == 0) {
        dVar12 = 0.0;
      }
      else {
        if ((int)uVar1 < 1) {
          dVar12 = 0.0;
        }
        else {
          lVar2 = *plVar4;
          iVar9 = uVar1 - 1;
          pdVar5 = (double *)(lVar2 + 8);
          dVar12 = 0.0;
          uVar6 = 0;
          do {
            dVar12 = dVar12 + (*(double *)(lVar2 + (longlong)iVar9 * 0x10) * *pdVar5 -
                              pdVar5[-1] * *(double *)(lVar2 + 8 + (longlong)iVar9 * 0x10));
            iVar9 = (int)uVar6;
            uVar6 = uVar6 + 1;
            pdVar5 = pdVar5 + 2;
          } while (uVar1 != uVar6);
        }
        dVar12 = dVar12 * 0.5;
      }
      dVar10 = dVar10 + dVar12 * dVar11;
      plVar4 = plVar4 + 2;
    } while (plVar4 != plVar3);
  }
  return dVar10;
}



// FUNCTION 1483e7396 FUN_1483e7396 body=181 status=ok
// SIG undefined FUN_1483e7396(void)

void FUN_1483e7396(longlong param_1)

{
  longlong *plVar1;
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
  FUN_145873a7e(*(undefined8 *)(param_1 + 0xa8),&local_38,0);
  lVar2 = local_38;
  lVar3 = (longlong)(int)uStack_30;
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      (**(code **)(**(longlong **)(lVar2 + lVar4) + 0x420))(*(longlong **)(lVar2 + lVar4),0);
      lVar4 = lVar4 + 8;
    } while (lVar3 * 8 != lVar4);
  }
  plVar1 = *(longlong **)(param_1 + 0x19b8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x420))(plVar1,0);
  }
  *(undefined8 *)(param_1 + 0x19b0) = 0;
  *(undefined8 *)(param_1 + 0x19b8) = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483e744c FUN_1483e744c body=1992 status=ok
// SIG undefined FUN_1483e744c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1483e744c(longlong *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  char cVar14;
  int iVar15;
  undefined4 uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong *plVar19;
  uint uVar20;
  longlong lVar21;
  double *pdVar22;
  double *pdVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  undefined1 auStack_248 [32];
  undefined1 local_228;
  undefined8 local_220;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  undefined8 local_180;
  double local_178 [2];
  undefined1 local_168 [16];
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 uStack_140;
  undefined1 local_138 [16];
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [56];
  undefined8 local_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  lVar18 = param_1[0x15];
  cVar14 = FUN_140719528();
  plVar19 = (longlong *)param_1[0x336];
  if (cVar14 == '\0') {
    if (plVar19 == (longlong *)0x0) {
      FUN_1446f470e(&local_d8,L"LakeMeshComponent",1);
      local_220 = 0;
      local_228 = 0;
      lVar17 = FUN_141797230(lVar18,local_d8,8,0);
      if ((lVar17 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar17);
      }
      param_1[0x336] = lVar17;
      FUN_140486fc4(lVar17,param_1,0);
      FUN_140b506a4(param_1[0x336]);
    }
  }
  else if (plVar19 != (longlong *)0x0) {
    (**(code **)(*plVar19 + 0x420))(plVar19,0);
    param_1[0x336] = 0;
  }
  iVar15 = (**(code **)(*param_1 + 0x570))(param_1);
  plVar19 = (longlong *)param_1[0x337];
  if (iVar15 == 0) {
    if (plVar19 != (longlong *)0x0) {
      (**(code **)(*plVar19 + 0x420))(plVar19,0);
    }
    param_1[0x337] = 0;
  }
  else if (plVar19 == (longlong *)0x0) {
    FUN_1446f470e(&local_e0,L"LakeCollisionComponent",1);
    lVar18 = FUN_1483e7c15(lVar18,local_e0);
    if ((lVar18 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar18);
    }
    param_1[0x337] = lVar18;
    FUN_1408c8a1a(lVar18);
    FUN_140486fc4(param_1[0x337],param_1,0);
    FUN_140b506a4(param_1[0x337]);
  }
  lVar18 = param_1[0x15];
  if (lVar18 != 0) {
    lVar17 = FUN_144a7a908();
    if (((*(int *)(lVar17 + 0x38) <= *(int *)(*(longlong *)(lVar18 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar17 + 0x38) * 8) == lVar17 + 0x30)) &&
       (lVar18 = *(longlong *)(lVar18 + 0x398), lVar18 != 0)) {
      lVar17 = param_1[0x205];
      if (lVar17 == 0) {
        plVar19 = (longlong *)FUN_140702386();
        lVar17 = plVar19[0x22];
        if (lVar17 == 0) {
          (**(code **)(*plVar19 + 1000))(plVar19);
          lVar17 = plVar19[0x22];
        }
        lVar17 = *(longlong *)(lVar17 + 0x70);
      }
      local_208 = *(double *)(lVar18 + 0x178);
      dVar1 = *(double *)(lVar18 + 0x180);
      dVar2 = *(double *)(lVar18 + 0x160);
      dVar3 = *(double *)(lVar18 + 0x168);
      local_210 = (double)param_1[0x4e];
      plVar19 = (longlong *)param_1[0x336];
      if (plVar19 != (longlong *)0x0) {
        if (lVar17 != 0) {
          dVar13 = *(double *)(lVar18 + 0x240);
          dVar28 = *(double *)(lVar18 + 0x248);
          dVar11 = *(double *)(lVar18 + 0x250);
          dVar12 = *(double *)(lVar18 + 600);
          dVar8 = *(double *)(lVar18 + 0x260);
          dVar9 = *(double *)(lVar18 + 0x268);
          dVar10 = *(double *)(lVar18 + 0x270);
          auVar4 = *(undefined1 (*) [16])(lVar18 + 0x280);
          auVar5 = *(undefined1 (*) [16])(lVar18 + 0x290);
          lVar21 = lVar17;
          uVar16 = FUN_144b2ab52(lVar17,local_178);
          local_1f0 = (double)local_168._8_8_;
          local_1f8 = local_158;
          auVar26._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar4._8_8_));
          auVar26._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar4._0_8_));
          iVar15 = movmskpd(uVar16,auVar26);
          auVar29._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar5._8_8_));
          auVar29._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar5._0_8_));
          uVar20 = movmskpd((int)lVar21,auVar29);
          if ((uVar20 & 0x3fffffff) == 0 && iVar15 == 0) {
            pdVar22 = (double *)&DAT_14c846480;
            pdVar23 = local_178;
            for (lVar21 = 0xc; lVar21 != 0; lVar21 = lVar21 + -1) {
              *pdVar23 = *pdVar22;
              pdVar22 = pdVar22 + 1;
              pdVar23 = pdVar23 + 1;
            }
          }
          else {
            auVar29 = divpd(_DAT_149934d80,auVar4);
            auVar26 = divpd(ZEXT816(0x3ff0000000000000),auVar5);
            dVar6 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar4._0_8_)) & auVar29._0_8_)
            ;
            dVar7 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar4._8_8_)) & auVar29._8_8_)
            ;
            dVar27 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar5._0_8_)) & auVar26._0_8_
                             );
            uStack_1e0 = 0;
            dVar11 = dVar11 * -1.0;
            dVar12 = dVar12 * 1.0;
            local_178[0] = -dVar13;
            local_178[1] = -dVar28;
            dVar8 = dVar8 * dVar6;
            dVar9 = dVar9 * dVar7;
            dVar10 = dVar10 * dVar27;
            dVar28 = dVar9 * local_178[0] - local_178[1] * dVar8;
            dVar30 = dVar10 * local_178[1] - dVar11 * dVar9;
            dVar31 = dVar8 * dVar11 - local_178[0] * dVar10;
            dVar30 = dVar30 + dVar30;
            dVar31 = dVar31 + dVar31;
            dVar28 = dVar28 + dVar28;
            local_158 = 0.0 - ((dVar28 * local_178[1] - dVar31 * dVar11) + dVar12 * dVar30 + dVar8);
            dStack_150 = 0.0 - (dVar28 * dVar13 + dVar11 * dVar30 + dVar12 * dVar31 + dVar9);
            local_148 = 0.0 - (dVar12 * dVar28 + dVar10 +
                              (dVar31 * local_178[0] - dVar30 * local_178[1]));
            local_168._8_4_ = SUB84(dVar12,0);
            local_168._0_8_ = dVar11;
            local_168._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
            uStack_140 = 0;
            local_138._8_4_ = SUB84(dVar7,0);
            local_138._0_8_ = dVar6;
            local_138._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
            local_1e8._0_4_ = SUB84(dVar27,0);
            local_1e8._4_4_ = (undefined4)((ulonglong)dVar27 >> 0x20);
            local_128 = (undefined4)local_1e8;
            uStack_124 = local_1e8._4_4_;
            uStack_120 = 0;
            uStack_11c = 0;
            local_200 = dVar3;
            local_1e8 = dVar27;
          }
          FUN_144a80a4c(lVar18 + 0x160,local_118,local_178);
          local_188 = dVar1 / local_1f8;
          local_190 = local_208 / local_1f0;
          local_180 = 0x3ff0000000000000;
          FUN_141226a1c(param_1[0x336]);
          local_198 = local_210;
          local_228 = 0;
          local_1a8 = dVar2;
          local_1a0 = dVar3;
          FUN_140d93b16(param_1[0x336],&local_1a8,0,0);
          local_228 = 0;
          FUN_145927ad6(param_1[0x336],&DAT_14c8463d0,0,0);
          FUN_14057a3b2(param_1[0x336],0,0,1);
          (**(code **)(*(longlong *)param_1[0x336] + 0xa78))((longlong *)param_1[0x336],lVar17);
          plVar19 = (longlong *)param_1[0x336];
          (**(code **)(*param_1 + 0xb78))(param_1);
          (**(code **)(*plVar19 + 0x638))(plVar19,0,param_1[0x208]);
          FUN_1417be62e(param_1[0x336],0);
          (**(code **)(*(longlong *)param_1[0x336] + 0x720))((longlong *)param_1[0x336],0);
          plVar19 = (longlong *)param_1[0x336];
        }
        (**(code **)(*plVar19 + 0x588))(plVar19,*(undefined1 *)((longlong)param_1 + 0x1fb));
      }
      plVar19 = (longlong *)param_1[0x337];
      if (plVar19 != (longlong *)0x0) {
        (**(code **)(*plVar19 + 0x588))(plVar19,*(undefined1 *)((longlong)param_1 + 0x1fb));
        FUN_145733f44(param_1,param_1[0x337]);
        FUN_1457ba85c(param_1,param_1[0x337]);
        fVar25 = *(float *)((longlong)param_1 + 0xf24) * 0.5;
        dVar8 = (double)param_1[0x51];
        dVar9 = local_208 / (double)param_1[0x50];
        fVar24 = *(float *)((longlong)param_1 + 0xff4) * 0.5;
        local_1b0 = local_210 + (double)(fVar24 - fVar25);
        local_1b8 = dVar3 + 0.0;
        local_1c0 = dVar2 + 0.0;
        local_228 = 0;
        FUN_140d93b16(param_1[0x337],&local_1c0,0,0);
        local_1d8 = dVar9;
        local_1d0 = dVar1 / dVar8;
        local_1c8 = (double)(fVar25 + fVar24);
        FUN_1483e200e(param_1[0x337]);
      }
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483e7c15 FUN_1483e7c15 body=202 status=ok
// SIG undefined FUN_1483e7c15(void)

undefined8 FUN_1483e7c15(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_b8 = FUN_14595b302();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_98 = 0;
  local_80 = 0;
  lStack_78 = 0;
  uStack_a0 = 8;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483e7ce8 FUN_1483e7ce8 body=45 status=ok
// SIG undefined FUN_1483e7ce8(void)

longlong FUN_1483e7ce8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_14006e248(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483e7d16 FUN_1483e7d16 body=48 status=ok
// SIG undefined FUN_1483e7d16(void)

longlong FUN_1483e7d16(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  thunk_FUN_14006e248(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483e7d46 FUN_1483e7d46 body=48 status=ok
// SIG undefined FUN_1483e7d46(void)

longlong FUN_1483e7d46(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  thunk_FUN_14006e248(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483e7d76 FUN_1483e7d76 body=48 status=ok
// SIG undefined FUN_1483e7d76(void)

longlong FUN_1483e7d76(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  thunk_FUN_14006e248(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483e7db6 FUN_1483e7db6 body=45 status=ok
// SIG undefined FUN_1483e7db6(void)

longlong FUN_1483e7db6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145d290f8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483e7e28 FUN_1483e7e28 body=45 status=ok
// SIG undefined FUN_1483e7e28(void)

longlong FUN_1483e7e28(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483e7e56 FUN_1483e7e56 body=48 status=ok
// SIG undefined FUN_1483e7e56(void)

longlong FUN_1483e7e56(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483e7e86 FUN_1483e7e86 body=48 status=ok
// SIG undefined FUN_1483e7e86(void)

longlong FUN_1483e7e86(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483e7eb6 FUN_1483e7eb6 body=48 status=ok
// SIG undefined FUN_1483e7eb6(void)

longlong FUN_1483e7eb6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483e7f5c FUN_1483e7f5c body=45 status=ok
// SIG undefined FUN_1483e7f5c(void)

longlong FUN_1483e7f5c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483e7f8a FUN_1483e7f8a body=48 status=ok
// SIG undefined FUN_1483e7f8a(void)

longlong FUN_1483e7f8a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483e7fba FUN_1483e7fba body=48 status=ok
// SIG undefined FUN_1483e7fba(void)

longlong FUN_1483e7fba(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483e7fea FUN_1483e7fea body=48 status=ok
// SIG undefined FUN_1483e7fea(void)

longlong FUN_1483e7fea(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483e801a FUN_1483e801a body=45 status=ok
// SIG undefined FUN_1483e801a(void)

longlong FUN_1483e801a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483e8048 FUN_1483e8048 body=48 status=ok
// SIG undefined FUN_1483e8048(void)

longlong FUN_1483e8048(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  thunk_FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483e8078 FUN_1483e8078 body=48 status=ok
// SIG undefined FUN_1483e8078(void)

longlong FUN_1483e8078(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  thunk_FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483e80a8 FUN_1483e80a8 body=48 status=ok
// SIG undefined FUN_1483e80a8(void)

longlong FUN_1483e80a8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  thunk_FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483e80ec FUN_1483e80ec body=33 status=ok
// SIG undefined FUN_1483e80ec(void)

undefined8 FUN_1483e80ec(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x3a8) + 0xa90))();
  return param_2;
}



// FUNCTION 1483e816a FUN_1483e816a body=42 status=ok
// SIG undefined FUN_1483e816a(void)

undefined1 FUN_1483e816a(void)

{
  FUN_140033559("..\\Plugins\\Experimental\\Water\\Source\\Runtime\\Public\\WaterBodyComponent.h",
                0xb6,L"Pure virtual not implemented (%s)",L"UWaterBodyComponent::GetWaterBodyType");
  return 3;
}



// FUNCTION 1483e81d2 FUN_1483e81d2 body=45 status=ok
// SIG undefined FUN_1483e81d2(void)

longlong FUN_1483e81d2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140bb64c8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483e8200 FUN_1483e8200 body=48 status=ok
// SIG undefined FUN_1483e8200(void)

longlong FUN_1483e8200(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_140bb64c8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483e8230 FUN_1483e8230 body=48 status=ok
// SIG undefined FUN_1483e8230(void)

longlong FUN_1483e8230(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_140bb64c8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483e8260 FUN_1483e8260 body=48 status=ok
// SIG undefined FUN_1483e8260(void)

longlong FUN_1483e8260(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_140bb64c8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483e8294 FUN_1483e8294 body=45 status=ok
// SIG undefined FUN_1483e8294(void)

longlong FUN_1483e8294(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140bb64c8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483e82c2 FUN_1483e82c2 body=48 status=ok
// SIG undefined FUN_1483e82c2(void)

longlong FUN_1483e82c2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_140bb64c8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483e82f2 FUN_1483e82f2 body=48 status=ok
// SIG undefined FUN_1483e82f2(void)

longlong FUN_1483e82f2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_140bb64c8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483e8322 FUN_1483e8322 body=48 status=ok
// SIG undefined FUN_1483e8322(void)

longlong FUN_1483e8322(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_140bb64c8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483e835a FUN_1483e835a body=45 status=ok
// SIG undefined FUN_1483e835a(void)

longlong FUN_1483e835a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_14006e248(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483e8388 FUN_1483e8388 body=48 status=ok
// SIG undefined FUN_1483e8388(void)

longlong FUN_1483e8388(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  thunk_FUN_14006e248(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483e83b8 FUN_1483e83b8 body=48 status=ok
// SIG undefined FUN_1483e83b8(void)

longlong FUN_1483e83b8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  thunk_FUN_14006e248(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483e83e8 FUN_1483e83e8 body=48 status=ok
// SIG undefined FUN_1483e83e8(void)

longlong FUN_1483e83e8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  thunk_FUN_14006e248(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483e8418 FUN_1483e8418 body=38 status=ok
// SIG undefined FUN_1483e8418(void)

undefined8 FUN_1483e8418(undefined8 param_1,int param_2)

{
  FUN_140208272();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483e845a FUN_1483e845a body=45 status=ok
// SIG undefined FUN_1483e845a(void)

longlong FUN_1483e845a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140bb64c8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483e8488 FUN_1483e8488 body=48 status=ok
// SIG undefined FUN_1483e8488(void)

longlong FUN_1483e8488(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_140bb64c8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483e84b8 FUN_1483e84b8 body=48 status=ok
// SIG undefined FUN_1483e84b8(void)

longlong FUN_1483e84b8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_140bb64c8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483e84e8 FUN_1483e84e8 body=48 status=ok
// SIG undefined FUN_1483e84e8(void)

longlong FUN_1483e84e8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_140bb64c8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483e8546 FUN_1483e8546 body=63 status=ok
// SIG undefined FUN_1483e8546(void)

undefined1 FUN_1483e8546(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1483dc4de(param_2,param_3);
    param_3 = param_3 + 0x2d0;
    param_2 = param_2 + 0x2d0;
  }
  return 1;
}



// FUNCTION 1483e85ae FUN_1483e85ae body=59 status=ok
// SIG undefined FUN_1483e85ae(void)

undefined8 FUN_1483e85ae(longlong *param_1)

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



// FUNCTION 1483e85fa FUN_1483e85fa body=40 status=ok
// SIG undefined FUN_1483e85fa(void)

void FUN_1483e85fa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2d0) == '\x01') {
    FUN_1483dd086(param_2);
    *(undefined1 *)(param_2 + 0x2d0) = 0;
  }
  return;
}



// FUNCTION 1483e8682 FUN_1483e8682 body=44 status=ok
// SIG undefined FUN_1483e8682(void)

void FUN_1483e8682(undefined8 param_1,longlong *param_2)

{
  FUN_145d291f8(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1483e86c4 FUN_1483e86c4 body=94 status=ok
// SIG undefined FUN_1483e86c4(void)

undefined1 FUN_1483e86c4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1483dd832(param_2,param_3);
    puVar2 = (undefined8 *)(param_3 + 0x10);
    puVar3 = (undefined8 *)(param_2 + 0x10);
    for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    param_3 = param_3 + 0x90;
    param_2 = param_2 + 0x90;
  }
  return 1;
}



// FUNCTION 1483e874a FUN_1483e874a body=59 status=ok
// SIG undefined FUN_1483e874a(void)

undefined8 FUN_1483e874a(longlong *param_1)

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



// FUNCTION 1483e87ee FUN_1483e87ee body=56 status=ok
// SIG undefined FUN_1483e87ee(void)

void FUN_1483e87ee(longlong *param_1)

{
  if ((char)param_1[0x12] == '\x01') {
    FUN_145d291f8(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x12) = 0;
  }
  return;
}



// FUNCTION 1483e88aa FUN_1483e88aa body=59 status=ok
// SIG undefined FUN_1483e88aa(void)

undefined8 FUN_1483e88aa(longlong *param_1)

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



// FUNCTION 1483e899c FUN_1483e899c body=118 status=ok
// SIG undefined FUN_1483e899c(void)

undefined1 FUN_1483e899c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (param_4 != 0) {
    lVar8 = 0;
    bVar6 = DAT_14c950c29;
    do {
      *(undefined8 *)(param_2 + lVar8) = *(undefined8 *)(param_3 + lVar8);
      lVar7 = *(longlong *)(param_3 + 8 + lVar8);
      if ((bVar6 & 1) != 0) {
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar7 = *(longlong *)(param_3 + 8 + lVar8);
          bVar6 = DAT_14c950c29;
        }
      }
      lVar1 = param_2 + lVar8;
      *(longlong *)(lVar1 + 8) = lVar7;
      puVar2 = (undefined4 *)(param_3 + 0x10 + lVar8);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      *(undefined4 *)(lVar1 + 0x10) = *puVar2;
      *(undefined4 *)(lVar1 + 0x14) = uVar3;
      *(undefined4 *)(lVar1 + 0x18) = uVar4;
      *(undefined4 *)(lVar1 + 0x1c) = uVar5;
      lVar8 = lVar8 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1483e8a3a FUN_1483e8a3a body=59 status=ok
// SIG undefined FUN_1483e8a3a(void)

undefined8 FUN_1483e8a3a(longlong *param_1)

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



// FUNCTION 1483e8b48 FUN_1483e8b48 body=59 status=ok
// SIG undefined FUN_1483e8b48(void)

undefined8 FUN_1483e8b48(longlong *param_1)

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



// FUNCTION 1483e8bea FUN_1483e8bea body=122 status=ok
// SIG undefined FUN_1483e8bea(void)

longlong FUN_1483e8bea(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_1483e8c64(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1483e8c64 FUN_1483e8c64 body=121 status=ok
// SIG undefined FUN_1483e8c64(void)

undefined8 * FUN_1483e8c64(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1483e8cde(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14482b872(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x18);
    }
  }
  return param_1;
}



// FUNCTION 1483e8cde FUN_1483e8cde body=128 status=ok
// SIG undefined FUN_1483e8cde(void)

void FUN_1483e8cde(longlong param_1,int param_2)

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
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1483e8d60 FUN_1483e8d60 body=122 status=ok
// SIG undefined FUN_1483e8d60(void)

longlong FUN_1483e8d60(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_1483e8dda(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1483e8dda FUN_1483e8dda body=121 status=ok
// SIG undefined FUN_1483e8dda(void)

undefined8 * FUN_1483e8dda(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1483e8e54(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14482b872(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x18);
    }
  }
  return param_1;
}



// FUNCTION 1483e8e54 FUN_1483e8e54 body=128 status=ok
// SIG undefined FUN_1483e8e54(void)

void FUN_1483e8e54(longlong param_1,int param_2)

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
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1483e8ed6 FUN_1483e8ed6 body=54 status=ok
// SIG undefined FUN_1483e8ed6(void)

void FUN_1483e8ed6(longlong *param_1)

{
  FUN_1483e8e54(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1483e8f0c FUN_1483e8f0c body=54 status=ok
// SIG undefined FUN_1483e8f0c(void)

void FUN_1483e8f0c(longlong *param_1)

{
  FUN_1483e8cde(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1483e8f42 FUN_1483e8f42 body=96 status=ok
// SIG undefined FUN_1483e8f42(void)

void FUN_1483e8f42(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
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



// FUNCTION 1483e8fa2 FUN_1483e8fa2 body=322 status=ok
// SIG undefined FUN_1483e8fa2(void)

void FUN_1483e8fa2(longlong *param_1)

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



// FUNCTION 1483e90e6 FUN_1483e90e6 body=302 status=ok
// SIG undefined FUN_1483e90e6(void)

void FUN_1483e90e6(longlong *param_1)

{
  longlong lVar1;
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
  local_38 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
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
      lVar1 = *(longlong *)(*local_68 + 8 + (longlong)iStack_4c * 0x18);
      if (lVar1 != 0) {
        FUN_1483eb08c(lVar1);
        FUN_1400020a8(lVar1);
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_144727cd0(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483e926c FUN_1483e926c body=39 status=ok
// SIG undefined FUN_1483e926c(void)

undefined8 FUN_1483e926c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1483e92bc FUN_1483e92bc body=59 status=ok
// SIG undefined FUN_1483e92bc(void)

undefined8 FUN_1483e92bc(longlong *param_1)

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



// FUNCTION 1483e9400 FUN_1483e9400 body=59 status=ok
// SIG undefined FUN_1483e9400(void)

undefined8 FUN_1483e9400(longlong *param_1)

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



// FUNCTION 1483e94a2 FUN_1483e94a2 body=29 status=ok
// SIG undefined FUN_1483e94a2(void)

undefined8 FUN_1483e94a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483e94d4 FUN_1483e94d4 body=93 status=ok
// SIG undefined FUN_1483e94d4(void)

void FUN_1483e94d4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae8b9a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1483e9532 FUN_1483e9532 body=93 status=ok
// SIG undefined FUN_1483e9532(void)

void FUN_1483e9532(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae8b9a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1483e9590 FUN_1483e9590 body=126 status=ok
// SIG undefined FUN_1483e9590(void)

void FUN_1483e9590(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae8b9a0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001483e95ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1483e9616 FUN_1483e9616 body=19 status=ok
// SIG undefined FUN_1483e9616(void)

undefined1 FUN_1483e9616(undefined8 param_1,undefined8 param_2)

{
  FUN_143b272b0(param_2);
  return 1;
}



// FUNCTION 1483e962a FUN_1483e962a body=29 status=ok
// SIG undefined FUN_1483e962a(void)

undefined8 FUN_1483e962a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483e965c FUN_1483e965c body=93 status=ok
// SIG undefined FUN_1483e965c(void)

void FUN_1483e965c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae8ba10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1483e96ba FUN_1483e96ba body=93 status=ok
// SIG undefined FUN_1483e96ba(void)

void FUN_1483e96ba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae8ba10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1483e9718 FUN_1483e9718 body=126 status=ok
// SIG undefined FUN_1483e9718(void)

void FUN_1483e9718(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae8ba10;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001483e9787. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1483e979e FUN_1483e979e body=19 status=ok
// SIG undefined FUN_1483e979e(void)

undefined1 FUN_1483e979e(undefined8 param_1,undefined8 param_2)

{
  FUN_1483e2ed2(param_2);
  return 1;
}



// FUNCTION 1483e97b2 FUN_1483e97b2 body=58 status=ok
// SIG undefined FUN_1483e97b2(void)

void FUN_1483e97b2(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 1;
  *(undefined8 *)(param_2 + 4) = 0x42c8000000000000;
  *(undefined4 *)(param_2 + 0xc) = 0x3f800000;
  FUN_144894d4c(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x8d0) = 0;
  return;
}



// FUNCTION 1483e97ec FUN_1483e97ec body=58 status=ok
// SIG undefined FUN_1483e97ec(void)

void FUN_1483e97ec(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 1;
  *(undefined8 *)(param_2 + 4) = 0x42c8000000000000;
  *(undefined4 *)(param_2 + 0xc) = 0x3f800000;
  FUN_144894d4c(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x8d0) = 0;
  return;
}



// FUNCTION 1483e9826 FUN_1483e9826 body=54 status=ok
// SIG undefined FUN_1483e9826(void)

void FUN_1483e9826(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x8c0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x838) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1483e989a FUN_1483e989a body=59 status=ok
// SIG undefined FUN_1483e989a(void)

undefined8 FUN_1483e989a(longlong *param_1)

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



// FUNCTION 1483e993e FUN_1483e993e body=64 status=ok
// SIG undefined FUN_1483e993e(void)

void FUN_1483e993e(longlong param_1)

{
  if (*(char *)(param_1 + 0x8e0) == '\x01') {
    if (*(longlong *)(param_1 + 0x8c0) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x838) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x8e0) = 0;
  }
  return;
}



// FUNCTION 1483e99ce FUN_1483e99ce body=59 status=ok
// SIG undefined FUN_1483e99ce(void)

undefined8 FUN_1483e99ce(longlong *param_1)

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



// FUNCTION 1483e9a7c FUN_1483e9a7c body=98 status=ok
// SIG undefined FUN_1483e9a7c(void)

void FUN_1483e9a7c(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1483e9ade FUN_1483e9ade body=114 status=ok
// SIG undefined FUN_1483e9ade(void)

void FUN_1483e9ade(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x2d0,0x10);
    iVar2 = (int)(uVar1 / 0x2d0);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x2d0,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1483e9b50 FUN_1483e9b50 body=60 status=ok
// SIG undefined FUN_1483e9b50(void)

void FUN_1483e9b50(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1483e9b8c(param_1,param_2);
    param_1 = param_1 + 0x2d0;
    param_2 = param_2 + 0x2d0;
  }
  return;
}



// FUNCTION 1483e9b8c FUN_1483e9b8c body=399 status=ok
// SIG undefined FUN_1483e9b8c(void)

void * FUN_1483e9b8c(void *param_1,void *param_2)

{
  longlong lVar1;
  
  memcpy(param_1,param_2,0x170);
  *(undefined8 *)((longlong)param_1 + 400) = 0;
  *(undefined4 *)((longlong)param_1 + 0x198) = 0;
  *(undefined8 *)((longlong)param_1 + 0x170) = 0;
  *(undefined8 *)((longlong)param_1 + 0x178) = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1b8) = 0;
  FUN_1483e8bea((longlong)param_1 + 0x170,(longlong)param_2 + 0x170);
  *(undefined8 *)((longlong)param_1 + 0x1e0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1e8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 500) = 0;
  *(undefined8 *)((longlong)param_1 + 0x200) = 0;
  *(undefined4 *)((longlong)param_1 + 0x208) = 0;
  FUN_1483e8bea((longlong)param_1 + 0x1c0,(longlong)param_2 + 0x1c0);
  *(undefined8 *)((longlong)param_1 + 0x230) = 0;
  *(undefined4 *)((longlong)param_1 + 0x238) = 0;
  *(undefined8 *)((longlong)param_1 + 0x210) = 0;
  *(undefined8 *)((longlong)param_1 + 0x218) = 0;
  *(undefined8 *)((longlong)param_1 + 0x23c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x244) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined4 *)((longlong)param_1 + 600) = 0;
  FUN_1483e8d60((longlong)param_1 + 0x210,(longlong)param_2 + 0x210);
  *(undefined8 *)((longlong)param_1 + 0x280) = 0;
  *(undefined4 *)((longlong)param_1 + 0x288) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x294) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2a8) = 0;
  FUN_1483e8d60((longlong)param_1 + 0x260,(longlong)param_2 + 0x260);
  *(undefined1 *)((longlong)param_1 + 0x2b0) = *(undefined1 *)((longlong)param_2 + 0x2b0);
  lVar1 = *(longlong *)((longlong)param_2 + 0x2b8);
  *(longlong *)((longlong)param_1 + 0x2b8) = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined8 *)((longlong)param_1 + 0x2c0) = *(undefined8 *)((longlong)param_2 + 0x2c0);
  return param_1;
}



// FUNCTION 1483e9d1c FUN_1483e9d1c body=48 status=ok
// SIG undefined FUN_1483e9d1c(void)

void FUN_1483e9d1c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x2d0,0x10);
  }
  return;
}



// FUNCTION 1483e9d4c FUN_1483e9d4c body=190 status=ok
// SIG undefined FUN_1483e9d4c(void)

void FUN_1483e9d4c(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_1;
    uVar6 = 0;
    bVar5 = DAT_14c950c29;
    do {
      lVar3 = *param_2;
      if ((lVar3 != 0 & bVar5) == 1) {
        FUN_1456cec3c(lVar3);
        bVar5 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar2 + uVar6) == lVar3) {
        if ((int)(~uVar6 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar6 = uVar6 + 8;
    } while ((longlong)(int)lVar4 * 8 != uVar6);
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1483e9e0a(param_1,iVar1);
  }
  lVar4 = *param_2;
  *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar4;
  if ((lVar4 != 0 & DAT_14c950c29) != 1) {
    return;
  }
  FUN_1456cec3c();
  return;
}



// FUNCTION 1483e9e0a FUN_1483e9e0a body=132 status=ok
// SIG undefined FUN_1483e9e0a(void)

void FUN_1483e9e0a(longlong param_1,int param_2)

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



// FUNCTION 1483e9e90 FUN_1483e9e90 body=158 status=ok
// SIG undefined FUN_1483e9e90(void)

void FUN_1483e9e90(longlong *param_1,uint param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_48 [40];
  longlong *local_20;
  undefined8 local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        plVar1 = (longlong *)(*param_1 + (longlong)iVar2 * 0x18);
        if (*plVar1 == *param_3) {
          if (plVar1 != (longlong *)0x0) goto LAB_1483e9f13;
          break;
        }
        iVar2 = (int)plVar1[2];
      } while (iVar2 != -1);
    }
  }
  local_20 = param_3;
  local_18 = param_4;
  FUN_1483e9f30(param_1,local_c,param_2,&local_20);
LAB_1483e9f13:
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483e9f30 FUN_1483e9f30 body=283 status=ok
// SIG undefined FUN_1483e9f30(void)

undefined4 * FUN_1483e9f30(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1483ea04c(param_1,local_48);
  puVar1 = (undefined4 *)param_4[1];
  *local_40 = *(undefined8 *)*param_4;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  cVar2 = FUN_1483ea132(param_1,param_3,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x14) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1483ea224(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483ea04c FUN_1483ea04c body=230 status=ok
// SIG undefined FUN_1483ea04c(void)

int * FUN_1483ea04c(longlong *param_1,int *param_2)

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



// FUNCTION 1483ea132 FUN_1483ea132 body=128 status=ok
// SIG undefined FUN_1483ea132(void)

undefined8 FUN_1483ea132(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_1483ea1b2((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 1483ea1b2 FUN_1483ea1b2 body=114 status=ok
// SIG undefined FUN_1483ea1b2(void)

void FUN_1483ea1b2(longlong *param_1,int param_2)

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



// FUNCTION 1483ea224 FUN_1483ea224 body=474 status=ok
// SIG undefined FUN_1483ea224(void)

void FUN_1483ea224(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
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
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 1483ea400 FUN_1483ea400 body=303 status=ok
// SIG undefined FUN_1483ea400(void)

void FUN_1483ea400(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  
  iVar1 = (int)param_1[1];
  lVar12 = (longlong)iVar1;
  if (lVar12 != 0) {
    plVar2 = (longlong *)*param_1;
    lVar6 = *(longlong *)*param_2;
    if ((lVar6 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar6);
    }
    iVar8 = 0;
    iVar9 = 0;
    bVar4 = *plVar2 == lVar6;
    do {
      lVar7 = (longlong)iVar9;
      iVar10 = iVar9;
      lVar6 = lVar7;
      iVar5 = iVar9 + 1;
      if (iVar9 + 1 < iVar1) {
        iVar5 = iVar1;
      }
      do {
        lVar6 = lVar6 + 1;
        iVar11 = iVar5;
        if (lVar12 <= lVar6) break;
        lVar3 = *(longlong *)*param_2;
        if ((lVar3 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar3);
        }
        iVar11 = iVar10 + 1;
        iVar10 = iVar11;
      } while (bVar4 == (plVar2[lVar6] == lVar3));
      if (bVar4 == false) {
        if (iVar8 != iVar9) {
          memmove(plVar2 + iVar8,plVar2 + lVar7,(longlong)(iVar11 - iVar9) << 3);
        }
        iVar8 = iVar8 + (iVar11 - iVar9);
      }
      iVar9 = iVar11;
      bVar4 = (bool)(bVar4 ^ 1);
    } while (lVar6 < lVar12);
    *(int *)(param_1 + 1) = iVar8;
  }
  return;
}



// FUNCTION 1483ea530 FUN_1483ea530 body=132 status=ok
// SIG undefined FUN_1483ea530(void)

void FUN_1483ea530(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar1 >> 0x10 ^ uVar1) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x18) == param_2) {
          FUN_1483ea5b4(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 1483ea5b4 FUN_1483ea5b4 body=87 status=ok
// SIG undefined FUN_1483ea5b4(void)

void FUN_1483ea5b4(longlong *param_1,int param_2)

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
  FUN_1483ea1b2();
  return;
}



// FUNCTION 1483ea60c FUN_1483ea60c body=181 status=ok
// SIG undefined FUN_1483ea60c(void)

longlong FUN_1483ea60c(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  int *local_28;
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
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_1483ea6a4;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1483ea6c2(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_1483ea6a4:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 1483ea6c2 FUN_1483ea6c2 body=275 status=ok
// SIG undefined FUN_1483ea6c2(void)

undefined4 * FUN_1483ea6c2(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1483ea7d6(param_1,local_48);
  *local_40 = *(undefined4 *)*param_4;
  *(undefined8 *)(local_40 + 2) = 0;
  *(undefined8 *)(local_40 + 4) = 0;
  local_40[6] = 0xffffffff;
  cVar1 = FUN_1483ea8bc(param_1,param_3,local_40,local_48);
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
      local_40[7] = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      local_40[6] = *(undefined4 *)
                     (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4
                     );
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
      FUN_1483ea9ce(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483ea7d6 FUN_1483ea7d6 body=229 status=ok
// SIG undefined FUN_1483ea7d6(void)

int * FUN_1483ea7d6(longlong *param_1,int *param_2)

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



// FUNCTION 1483ea8bc FUN_1483ea8bc body=159 status=ok
// SIG undefined FUN_1483ea8bc(void)

undefined8 FUN_1483ea8bc(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
          FUN_1483ea95c(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 1483ea95c FUN_1483ea95c body=114 status=ok
// SIG undefined FUN_1483ea95c(void)

void FUN_1483ea95c(longlong *param_1,int param_2)

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



// FUNCTION 1483ea9ce FUN_1483ea9ce body=422 status=ok
// SIG undefined FUN_1483ea9ce(void)

void FUN_1483ea9ce(longlong *param_1)

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



// FUNCTION 1483eab76 FUN_1483eab76 body=68 status=ok
// SIG undefined FUN_1483eab76(void)

void FUN_1483eab76(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_1483eabba();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_144727cd0(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1483eabba FUN_1483eabba body=322 status=ok
// SIG undefined FUN_1483eabba(void)

void FUN_1483eabba(longlong *param_1)

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



// FUNCTION 1483eacfe FUN_1483eacfe body=328 status=ok
// SIG undefined FUN_1483eacfe(void)

undefined4 * FUN_1483eacfe(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
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
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1483ea04c(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_1483ea132(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
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
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1483ea224(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483eae48 FUN_1483eae48 body=328 status=ok
// SIG undefined FUN_1483eae48(void)

undefined4 * FUN_1483eae48(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
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
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1483ea04c(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_1483ea132(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
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
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1483ea224(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483eaf92 FUN_1483eaf92 body=38 status=ok
// SIG undefined FUN_1483eaf92(void)

undefined8 FUN_1483eaf92(undefined8 param_1,int param_2)

{
  FUN_1483eafb8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483eafb8 FUN_1483eafb8 body=70 status=ok
// SIG undefined FUN_1483eafb8(void)

void FUN_1483eafb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ae8bf90;
  FUN_145d291f8(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1483eaffe FUN_1483eaffe body=132 status=ok
// SIG undefined FUN_1483eaffe(void)

void FUN_1483eaffe(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1483eb083 FUN_1483eb083 body=8 status=ok
// SIG undefined FUN_1483eb083(void)

void FUN_1483eb083(undefined8 *param_1)

{
  *param_1 = 0xffffffffffffffff;
  return;
}



// FUNCTION 1483eb08c FUN_1483eb08c body=97 status=ok
// SIG undefined FUN_1483eb08c(void)

void FUN_1483eb08c(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1400020a8();
  }
  FUN_14179b8cc(param_1 + 0x80);
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1483eb0ee FUN_1483eb0ee body=336 status=ok
// SIG undefined FUN_1483eb0ee(void)

undefined4 * FUN_1483eb0ee(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
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
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1483eb240(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  *local_40 = *(ulonglong *)*param_3;
  local_40[1] = *puVar1;
  *puVar1 = 0;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(*local_40 >> 0x14) & 0xffff ^ (uint)(*local_40 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_1483eb326(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
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
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1483eb440(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483eb240 FUN_1483eb240 body=230 status=ok
// SIG undefined FUN_1483eb240(void)

int * FUN_1483eb240(longlong *param_1,int *param_2)

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



// FUNCTION 1483eb326 FUN_1483eb326 body=167 status=ok
// SIG undefined FUN_1483eb326(void)

undefined8 FUN_1483eb326(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
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
        plVar4 = (longlong *)(*param_1 + (longlong)iVar5 * 0x18);
        if (*plVar4 == *param_3) {
          lVar1 = plVar4[1];
          if (lVar1 != 0) {
            FUN_1483eb08c(lVar1);
            FUN_1400020a8(lVar1);
          }
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar1 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar4 = (int)*param_3;
          *(undefined4 *)((longlong)plVar4 + 4) = uVar2;
          *(int *)(plVar4 + 1) = (int)lVar1;
          *(undefined4 *)((longlong)plVar4 + 0xc) = uVar3;
          FUN_1483eb3ce(param_1,*param_4);
          *param_4 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar4[2];
      } while (iVar5 != -1);
    }
  }
  return 0;
}



// FUNCTION 1483eb3ce FUN_1483eb3ce body=114 status=ok
// SIG undefined FUN_1483eb3ce(void)

void FUN_1483eb3ce(longlong *param_1,int param_2)

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



// FUNCTION 1483eb440 FUN_1483eb440 body=474 status=ok
// SIG undefined FUN_1483eb440(void)

void FUN_1483eb440(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
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
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 1483eb61c FUN_1483eb61c body=38 status=ok
// SIG undefined FUN_1483eb61c(void)

undefined8 FUN_1483eb61c(undefined8 param_1,int param_2)

{
  FUN_1483eb688();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483eb642 FUN_1483eb642 body=69 status=ok
// SIG undefined FUN_1483eb642(void)

undefined8 * FUN_1483eb642(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ae8bfa8;
  FUN_145d291f8(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483eb688 FUN_1483eb688 body=78 status=ok
// SIG undefined FUN_1483eb688(void)

void FUN_1483eb688(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ae8bfa0;
  FUN_1483eb6d6(param_1 + 0x13);
  *param_1 = &PTR_FUN_14ae8bfa8;
  FUN_145d291f8(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1483eb6d6 FUN_1483eb6d6 body=58 status=ok
// SIG undefined FUN_1483eb6d6(void)

void FUN_1483eb6d6(longlong *param_1)

{
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_145d291f8(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1483eb710 FUN_1483eb710 body=38 status=ok
// SIG undefined FUN_1483eb710(void)

undefined8 FUN_1483eb710(undefined8 param_1,int param_2)

{
  FUN_1483eb736();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483eb736 FUN_1483eb736 body=65 status=ok
// SIG undefined FUN_1483eb736(void)

void FUN_1483eb736(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ae8bfb0;
  FUN_1483eb6d6(param_1 + 5);
  FUN_1483eb777(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1483eb777 FUN_1483eb777 body=41 status=ok
// SIG undefined FUN_1483eb777(void)

void FUN_1483eb777(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1483dd086(param_1);
    param_1 = param_1 + 0x2e0;
  }
  return;
}



// FUNCTION 1483eb7a0 FUN_1483eb7a0 body=1274 status=ok
// SIG undefined FUN_1483eb7a0(void)

void FUN_1483eb7a0(longlong param_1,undefined1 (*param_2) [16])

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  longlong lVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  
  plVar1 = *(longlong **)(param_1 + 0x48);
  dVar16 = 0.0;
  dVar20 = 0.0;
  dVar14 = 0.0;
  dVar15 = 0.0;
  if ((plVar1 != (longlong *)0x0) && (*(char *)((longlong)plVar1 + 0xc) != '\0')) {
    lVar9 = (longlong)(int)plVar1[1];
    lVar2 = *(longlong *)(*plVar1 + 0x278);
    dVar20 = (double)*(float *)(lVar2 + 8 + lVar9 * 0xc);
    dVar14 = (double)*(float *)(lVar2 + 4 + lVar9 * 0xc);
    dVar15 = (double)*(float *)(lVar2 + lVar9 * 0xc);
  }
  *(double *)(param_2[4] + 8) = dVar15;
  *(double *)param_2[5] = dVar14;
  *(double *)(param_2[5] + 8) = dVar20;
  plVar1 = *(longlong **)(param_1 + 0x48);
  if (plVar1 == (longlong *)0x0) {
    dVar11 = 0.0;
    dVar17 = 0.0;
  }
  else {
    dVar11 = 0.0;
    dVar17 = 0.0;
    if (*(char *)((longlong)plVar1 + 0xc) != '\0') {
      lVar9 = (longlong)(int)plVar1[1];
      lVar2 = *(longlong *)(*plVar1 + 0x290);
      dVar16 = (double)*(float *)(lVar2 + 8 + lVar9 * 0xc);
      dVar11 = (double)*(float *)(lVar2 + 4 + lVar9 * 0xc);
      dVar17 = (double)*(float *)(lVar2 + lVar9 * 0xc);
    }
  }
  *(double *)param_2[6] = dVar17;
  *(double *)(param_2[6] + 8) = dVar11;
  fVar10 = (float)SQRT(dVar20 * dVar20 + dVar15 * dVar15 + dVar14 * dVar14);
  *(double *)param_2[7] = dVar16;
  *(float *)(param_2[8] + 8) = fVar10;
  *(float *)(param_2[8] + 0xc) = fVar10 * 0.036;
  lVar2 = *(longlong *)(**(longlong **)(param_1 + 0x48) + 0x48);
  lVar9 = (longlong)(int)(*(longlong **)(param_1 + 0x48))[1] * 0x10;
  dVar11 = (double)*(float *)(lVar2 + 0xc + lVar9);
  dVar16 = (double)*(float *)(lVar2 + 8 + lVar9);
  dVar5 = (double)*(float *)(lVar2 + 4 + lVar9);
  dVar17 = (double)*(float *)(lVar2 + lVar9);
  dVar18 = dVar17 * 0.0 - dVar5 * 1.0;
  dVar21 = dVar5 * 0.0 - dVar16 * 0.0;
  dVar8 = dVar16 * 1.0 - dVar17 * 0.0;
  dVar21 = dVar21 + dVar21;
  dVar8 = dVar8 + dVar8;
  dVar18 = dVar18 + dVar18;
  dVar19 = dVar18 * dVar11 + 0.0 + (dVar8 * dVar17 - dVar21 * dVar5);
  dVar17 = (dVar16 * dVar21 - dVar17 * dVar18) + dVar11 * dVar8 + 0.0;
  auVar7._8_4_ = SUB84(dVar17,0);
  auVar7._0_8_ = (dVar18 * dVar5 - dVar8 * dVar16) + dVar11 * dVar21 + 1.0;
  auVar7._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  *(undefined1 (*) [16])(param_2[1] + 8) = auVar7;
  *(double *)(param_2[2] + 8) = dVar19;
  lVar2 = *(longlong *)(**(longlong **)(param_1 + 0x48) + 0x48);
  lVar9 = (longlong)(int)(*(longlong **)(param_1 + 0x48))[1] * 0x10;
  dVar11 = (double)*(float *)(lVar2 + 8 + lVar9);
  dVar17 = (double)*(float *)(lVar2 + 4 + lVar9);
  dVar12 = (double)*(float *)(lVar2 + lVar9);
  dVar21 = dVar12 * 1.0 - dVar17 * 0.0;
  dVar8 = dVar17 * 0.0 - dVar11 * 1.0;
  dVar5 = (double)*(float *)(lVar2 + 0xc + lVar9);
  dVar16 = dVar11 * 0.0 - dVar12 * 0.0;
  dVar8 = dVar8 + dVar8;
  dVar16 = dVar16 + dVar16;
  dVar21 = dVar21 + dVar21;
  dVar22 = dVar21 * dVar5 + 0.0 + (dVar16 * dVar12 - dVar8 * dVar17);
  dVar18 = (dVar21 * dVar17 - dVar16 * dVar11) + dVar5 * dVar8 + 0.0;
  dVar21 = (dVar11 * dVar8 - dVar12 * dVar21) + dVar5 * dVar16 + 1.0;
  auVar4._8_4_ = SUB84(dVar21,0);
  auVar4._0_8_ = dVar18;
  auVar4._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
  param_2[3] = auVar4;
  *(double *)param_2[4] = dVar22;
  lVar2 = *(longlong *)(**(longlong **)(param_1 + 0x48) + 0x48);
  lVar9 = (longlong)(int)(*(longlong **)(param_1 + 0x48))[1] * 0x10;
  dVar8 = (double)*(float *)(lVar2 + 8 + lVar9);
  dVar6 = (double)*(float *)(lVar2 + 4 + lVar9);
  dVar12 = (double)*(float *)(lVar2 + lVar9);
  dVar11 = dVar12 * 0.0 - dVar6 * 0.0;
  dVar17 = dVar6 * 1.0 - dVar8 * 0.0;
  dVar13 = (double)*(float *)(lVar2 + 0xc + lVar9);
  dVar5 = dVar8 * 0.0 - dVar12 * 1.0;
  dVar17 = dVar17 + dVar17;
  dVar5 = dVar5 + dVar5;
  dVar11 = dVar11 + dVar11;
  dVar16 = (dVar8 * dVar17 - dVar12 * dVar11) + dVar13 * dVar5 + 0.0;
  auVar3._8_4_ = SUB84(dVar16,0);
  auVar3._0_8_ = (dVar11 * dVar6 - dVar5 * dVar8) + dVar13 * dVar17 + 0.0;
  auVar3._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
  *param_2 = auVar3;
  *(double *)param_2[1] = dVar11 * dVar13 + 1.0 + (dVar5 * dVar12 - dVar17 * dVar6);
  fVar10 = (float)(dVar19 * dVar20 +
                  *(double *)(param_2[1] + 8) * dVar15 + *(double *)param_2[2] * dVar14);
  *(float *)param_2[9] = fVar10;
  *(float *)(param_2[9] + 4) = fVar10 * 0.036;
  *(float *)(param_2[9] + 8) = (float)(dVar22 * dVar20 + dVar18 * dVar15 + dVar21 * dVar14);
  return;
}



// FUNCTION 1483ebc9a FUN_1483ebc9a body=2316 status=ok
// SIG undefined FUN_1483ebc9a(void)

void FUN_1483ebc9a(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4,
                  longlong *param_5)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  double *pdVar3;
  double dVar4;
  byte bVar5;
  ulonglong uVar6;
  longlong lVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  ulonglong uVar22;
  byte bVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  uint uVar27;
  longlong *plVar28;
  int iVar29;
  ulonglong *puVar30;
  longlong lVar31;
  float fVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined1 auStack_4a8 [32];
  longlong local_488;
  longlong local_480;
  longlong local_478;
  longlong local_470;
  longlong local_468;
  longlong local_460;
  longlong local_458;
  longlong *local_450;
  longlong *local_448;
  longlong local_440;
  longlong local_438;
  longlong local_430;
  undefined8 local_428;
  double local_420;
  double local_418;
  double local_410;
  undefined4 local_404;
  longlong local_400;
  longlong local_3f8;
  undefined8 uStack_3f0;
  undefined1 local_3dc [4];
  longlong *local_3d8;
  undefined4 *local_3d0;
  undefined1 local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_4a8;
  *(undefined4 *)(param_2 + 0x9c) = 0;
  local_3f8 = 0;
  uStack_3f0 = 0;
  local_448 = param_4;
  local_440 = param_2;
  local_430 = param_1;
  local_428 = param_3;
  if ((longlong)(int)param_4[3] != 0) {
    puVar30 = (ulonglong *)param_4[2];
    puVar1 = puVar30 + (int)param_4[3];
    do {
      uVar22 = uStack_3f0;
      if ((int)param_5[1] != *(int *)((longlong)param_5 + 0x34)) {
        uVar6 = *puVar30;
        uVar27 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar27 = (uVar27 >> 0xd ^ uVar27) * -0x3d4d51cb;
        plVar28 = (longlong *)param_5[8];
        if ((longlong *)param_5[8] == (longlong *)0x0) {
          plVar28 = param_5 + 7;
        }
        iVar29 = *(int *)((longlong)plVar28 +
                         (ulonglong)((int)param_5[9] - 1U & (uVar27 >> 0x10 ^ uVar27)) * 4);
        if (iVar29 != -1) {
          do {
            puVar2 = (ulonglong *)(*param_5 + (longlong)iVar29 * 0x18);
            if (*puVar2 == uVar6) {
              if (puVar2 + 1 != (ulonglong *)0x0 && puVar2 != (ulonglong *)0x0) {
                uVar6 = puVar2[1];
                lVar26 = (longlong)(int)uStack_3f0;
                uVar27 = (int)uStack_3f0 + 1;
                uStack_3f0 = CONCAT44(uStack_3f0._4_4_,uVar27);
                if (uStack_3f0._4_4_ < uVar27) {
                  FUN_1483ed0fa(&local_3f8,uVar22 & 0xffffffff);
                }
                *(ulonglong *)(local_3f8 + lVar26 * 8) = uVar6;
              }
              break;
            }
            iVar29 = (int)puVar2[2];
          } while (iVar29 != -1);
        }
      }
      puVar30 = puVar30 + 1;
    } while (puVar30 != puVar1);
  }
  lVar26 = local_440;
  if ((longlong)(int)local_448[1] != 0) {
    lVar31 = *local_448;
    local_438 = (longlong)(int)local_448[1] * 0x2d0 + lVar31;
    local_450 = (longlong *)(local_440 + 0x78);
    do {
      lVar26 = **(longlong **)(local_430 + 0x48);
      lVar24 = (longlong)(int)(*(longlong **)(local_430 + 0x48))[1];
      lVar7 = *(longlong *)(lVar26 + 0x28);
      lVar26 = *(longlong *)(lVar26 + 0x48);
      lVar25 = lVar24 * 0x10;
      dVar8 = (double)*(float *)(lVar26 + 0xc + lVar25);
      dVar35 = (double)*(float *)(lVar26 + 8 + lVar25);
      dVar10 = (double)*(float *)(lVar26 + 4 + lVar25);
      dVar34 = (double)*(float *)(lVar26 + lVar25);
      dVar4 = *(double *)(lVar7 + 0x10 + lVar24 * 0x18);
      pdVar3 = (double *)(lVar7 + lVar24 * 0x18);
      dVar11 = *pdVar3;
      dVar12 = pdVar3[1];
      if ((*(byte *)(lVar31 + 0x2b0) & 2) == 0) {
        dVar33 = *(double *)(lVar31 + 8);
        dVar17 = *(double *)(lVar31 + 0x10);
        dVar36 = *(double *)(lVar31 + 0x18) * 1.0;
        dVar15 = dVar17 * dVar34 - dVar10 * dVar33;
        dVar16 = dVar36 * dVar10 - dVar35 * dVar17;
        dVar13 = dVar33 * dVar35 - dVar34 * dVar36;
        dVar16 = dVar16 + dVar16;
        dVar13 = dVar13 + dVar13;
        dVar15 = dVar15 + dVar15;
        dVar11 = dVar11 + (dVar15 * dVar10 - dVar13 * dVar35) + dVar8 * dVar16 + dVar33;
        dVar12 = dVar12 + (dVar35 * dVar16 - dVar34 * dVar15) + dVar8 * dVar13 + dVar17;
        dVar4 = dVar4 + dVar15 * dVar8 + dVar36 + (dVar13 * dVar34 - dVar16 * dVar10);
        lVar26 = 0x40;
      }
      else {
        dVar17 = *(double *)(lVar31 + 0x130);
        dVar36 = *(double *)(lVar31 + 0x138);
        dVar13 = *(double *)(lVar31 + 0x140) * 1.0;
        dVar15 = dVar36 * dVar34 - dVar10 * dVar17;
        dVar16 = dVar13 * dVar10 - dVar35 * dVar36;
        dVar33 = dVar17 * dVar35 - dVar34 * dVar13;
        dVar16 = dVar16 + dVar16;
        dVar33 = dVar33 + dVar33;
        dVar15 = dVar15 + dVar15;
        dVar18 = *(double *)(lVar31 + 0x110);
        dVar19 = *(double *)(lVar31 + 0x118);
        dVar4 = dVar4 + dVar15 * dVar8 + dVar13 + (dVar33 * dVar34 - dVar16 * dVar10) +
                *(double *)(lVar31 + 0x90);
        dVar20 = *(double *)(lVar31 + 0x120);
        dVar21 = *(double *)(lVar31 + 0x128);
        *(double *)(lVar31 + 0x40) =
             dVar11 + (dVar15 * dVar10 - dVar33 * dVar35) + dVar8 * dVar16 + dVar17 +
             *(double *)(lVar31 + 0x80);
        *(double *)(lVar31 + 0x48) =
             dVar12 + (dVar35 * dVar16 - dVar34 * dVar15) + dVar8 * dVar33 + dVar36 +
             *(double *)(lVar31 + 0x88);
        dVar13 = dVar18 * dVar35 * 1.0 + dVar21 * dVar10 + dVar34 * dVar20 * -1.0 + dVar8 * dVar19;
        dVar11 = dVar21 * dVar35 * 1.0 +
                 ((dVar34 * dVar19 * 1.0 + dVar8 * dVar20) - dVar10 * dVar18);
        dVar12 = dVar20 * dVar35 * -1.0 +
                 ((dVar34 * dVar18 * -1.0 + dVar8 * dVar21) - dVar10 * dVar19);
        auVar14._8_4_ = SUB84(dVar13,0);
        auVar14._0_8_ =
             dVar19 * dVar35 * -1.0 + dVar20 * dVar10 + dVar34 * dVar21 * 1.0 + dVar8 * dVar18;
        auVar14._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
        *(undefined1 (*) [16])(lVar31 + 0x60) = auVar14;
        lVar26 = 0x70;
      }
      auVar9._8_4_ = SUB84(dVar12,0);
      auVar9._0_8_ = dVar11;
      auVar9._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      *(undefined1 (*) [16])(lVar31 + lVar26) = auVar9;
      *(double *)(lVar31 + 0x50) = dVar4;
      lVar26 = lVar31 + 0x210;
      FUN_1483ed180(lVar26);
      lVar7 = local_3f8;
      lVar24 = (longlong)(int)uStack_3f0;
      if (lVar24 != 0) {
        lVar25 = 0;
        do {
          local_400 = *(longlong *)(lVar7 + lVar25);
          if ((local_400 != 0) && (*(char *)(local_400 + 0x148) == '\0')) {
            local_404 = FUN_1483f47a2(local_400 + 0x20,lVar31 + 0x40);
            local_3d8 = &local_400;
            local_3d0 = &local_404;
            FUN_1483ed308(lVar26,local_3dc,&local_3d8);
          }
          lVar25 = lVar25 + 8;
        } while (lVar24 * 8 != lVar25);
      }
      dVar4 = *(double *)(lVar31 + 0x50) - (double)*(float *)(lVar31 + 0x20);
      local_458 = lVar31 + 0x108;
      local_460 = lVar31 + 0xf0;
      local_468 = lVar31 + 0xd8;
      local_470 = lVar31 + 0xc0;
      local_478 = lVar31 + 0xa8;
      local_480 = lVar31 + 0xa0;
      local_488 = lVar31 + 0x2c0;
      local_418 = *(double *)(lVar31 + 0x48) - DAT_14c8462c8 * 100.0;
      local_420 = *(double *)(lVar31 + 0x40) - DAT_14c8462c0 * 100.0;
      local_410 = dVar4 - DAT_14c8462d0 * 100.0;
      fVar32 = (float)FUN_1483eccb8(&local_3f8,&local_420,(int)local_448[4],lVar26);
      lVar26 = local_440;
      *(float *)(lVar31 + 0x9c) = fVar32;
      bVar5 = *(byte *)(lVar31 + 0x10c);
      fVar32 = (float)((double)fVar32 - dVar4);
      if (0.0 <= fVar32) {
        *(undefined1 *)(lVar31 + 0x10c) = 1;
        *(float *)(lVar31 + 0xa4) = fVar32;
        *(int *)(local_440 + 0x9c) = *(int *)(local_440 + 0x9c) + 1;
      }
      else {
        *(undefined1 *)(lVar31 + 0x10c) = 0;
        *(undefined4 *)(lVar31 + 0xa4) = 0;
      }
      FUN_1483ecfa0(local_428,lVar31,*(undefined4 *)(local_440 + 0x94),
                    (float)*(double *)(local_440 + 0x58));
      bVar23 = *(byte *)(lVar31 + 0x10c);
      if (((~bVar23 | bVar5) & 1) == 0) {
        FUN_1483eab76(lVar31 + 0x1c0);
        FUN_1483e9b8c(&local_3d8,lVar31);
        local_108 = 0;
        iVar29 = *(int *)(lVar26 + 0x80);
        *(uint *)(lVar26 + 0x80) = iVar29 + 1U;
        if (*(uint *)(lVar26 + 0x84) < iVar29 + 1U) {
          FUN_1483ed806(local_450,iVar29);
        }
        lVar7 = *local_450;
        FUN_1483ed89a(lVar7 + (longlong)iVar29 * 0x2e0,&local_3d8);
        *(undefined1 *)(lVar7 + 0x2d0 + (longlong)iVar29 * 0x2e0) = local_108;
        FUN_1483dd086(&local_3d8);
        bVar23 = *(byte *)(lVar31 + 0x10c);
      }
      if (((~bVar5 | bVar23) & 1) == 0) {
        FUN_1483eab76(lVar31 + 0x1c0);
        FUN_1483e9b8c(&local_3d8,lVar31);
        local_108 = 1;
        iVar29 = *(int *)(lVar26 + 0x80);
        *(uint *)(lVar26 + 0x80) = iVar29 + 1U;
        if (*(uint *)(lVar26 + 0x84) < iVar29 + 1U) {
          FUN_1483ed806(local_450,iVar29);
        }
        lVar7 = *local_450;
        FUN_1483ed89a(lVar7 + (longlong)iVar29 * 0x2e0,&local_3d8);
        *(undefined1 *)(lVar7 + 0x2d0 + (longlong)iVar29 * 0x2e0) = local_108;
        FUN_1483dd086(&local_3d8);
      }
      lVar31 = lVar31 + 0x2d0;
    } while (lVar31 != local_438);
  }
  *(bool *)(lVar26 + 0xa4) = 0 < *(int *)(lVar26 + 0x9c);
  if (local_3f8 != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_4a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483ec5a8 FUN_1483ec5a8 body=506 status=ok
// SIG undefined FUN_1483ec5a8(void)

void FUN_1483ec5a8(undefined8 param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  undefined1 auStack_88 [32];
  double local_68;
  double dStack_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(param_3 + 0xa4) == '\x01') {
    dVar5 = *(double *)(param_3 + 0x48);
    dVar6 = *(double *)(param_3 + 0x50);
    dVar4 = dVar5 * dVar5 + dVar6 * dVar6;
    if (((dVar4 != 1.0) || (dVar2 = dVar6, dVar3 = 0.0, dVar8 = dVar5, NAN(dVar4))) &&
       (dVar2 = DAT_14c8464e8, dVar3 = DAT_14c8464f0, dVar8 = DAT_14c8464e0,
       9.99999993922529e-09 <= dVar4)) {
      dVar8 = 1.0 / SQRT(dVar4);
      dVar2 = dVar6 * dVar8;
      dVar3 = dVar8 * 0.0;
      dVar8 = dVar5 * dVar8;
    }
    fVar7 = (float)SQRT(dVar4) * 0.036;
    fVar1 = *(float *)(param_2 + 0x40);
    fVar9 = fVar7;
    if (fVar1 <= fVar7) {
      fVar9 = fVar1;
    }
    if (fVar9 <= -fVar1) {
      fVar9 = -fVar1;
    }
    dVar4 = (double)(*(float *)(param_2 + 0x34) * -fVar9);
    dVar5 = (double)(-fVar9 * fVar9 * *(float *)(param_2 + 0x38));
    dVar6 = (double)(float)(-(uint)(0.0 < fVar7) & 0x3f800000 |
                           ~-(uint)(0.0 < fVar7) & -(uint)(fVar7 < 0.0) & 0xbf800000);
    local_58 = dVar3 * dVar5 * dVar6 + dVar3 * dVar4 + DAT_14c8464f0;
    dStack_60 = dVar2 * dVar5 * dVar6 + dVar2 * dVar4 + DAT_14c8464e8;
    local_68 = dVar8 * dVar5 * dVar6 + dVar4 * dVar8 + DAT_14c8464e0;
    FUN_1483edb60(SUB84(local_68,0),&local_68);
  }
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483ec7a4 FUN_1483ec7a4 body=1047 status=ok
// SIG undefined FUN_1483ec7a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1483ec7a4(longlong param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  double dVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar16;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar17 [16];
  double dVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auStack_158 [32];
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  double local_d8;
  double dStack_d0;
  double local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_c8 = DAT_14c8464f0;
  local_d8 = DAT_14c8464e0;
  dStack_d0 = DAT_14c8464e8;
  iVar5 = *(int *)(param_2 + 0xa0);
  if (((longlong)iVar5 != -1) && (iVar5 < (int)param_4[1])) {
    fVar19 = *(float *)(param_3 + 0x80);
    fVar2 = *(float *)(param_3 + 0x84);
    fVar3 = *(float *)(param_3 + 0x88);
    fVar4 = *(float *)(param_3 + 0x8c);
    lVar8 = (longlong)iVar5 * 0x2d0;
    local_e8 = *(undefined8 *)(*param_4 + 0x100 + lVar8);
    puVar1 = (undefined8 *)(*param_4 + 0xf0 + lVar8);
    local_f8 = *puVar1;
    uStack_f0 = puVar1[1];
    lVar8 = *(longlong *)(**(longlong **)(param_1 + 0x48) + 0x48);
    lVar7 = (longlong)(int)(*(longlong **)(param_1 + 0x48))[1] * 0x10;
    dVar12 = (double)*(float *)(lVar8 + 0xc + lVar7);
    dVar10 = (double)*(float *)(lVar8 + 8 + lVar7);
    dVar18 = (double)*(float *)(lVar8 + 4 + lVar7);
    dVar13 = (double)*(float *)(lVar8 + lVar7);
    dVar16 = *(double *)(param_3 + 0x68);
    dVar6 = *(double *)(param_3 + 0x70);
    dVar20 = dVar6 * dVar13 - dVar16 * dVar18;
    dVar21 = *(double *)(param_3 + 0x78) * dVar18 - dVar6 * dVar10;
    dVar22 = dVar16 * dVar10 - dVar13 * *(double *)(param_3 + 0x78);
    dVar21 = dVar21 + dVar21;
    dVar22 = dVar22 + dVar22;
    dVar20 = dVar20 + dVar20;
    auVar15._0_8_ = dVar12 * dVar21 + dVar16;
    auVar15._8_8_ = dVar12 * dVar22 + dVar6;
    local_108 = dVar20 * dVar12 + *(double *)(param_3 + 0x78) + (dVar22 * dVar13 - dVar21 * dVar18);
    local_118 = (dVar20 * dVar18 - dVar22 * dVar10) + auVar15._0_8_;
    dStack_110 = (dVar10 * dVar21 - dVar13 * dVar20) + auVar15._8_8_;
    FUN_144a9d448(&local_138,&local_118,&local_f8);
    dVar13 = local_128 * local_128 + local_138 * local_138;
    dVar16 = dStack_130 * dStack_130 + 0.0;
    auVar14._0_8_ = dVar13 + dVar16;
    auVar14._8_8_ = dVar13 + dVar16;
    auVar11._8_8_ = -(ulonglong)(1e-08 <= auVar14._8_8_);
    auVar11._0_8_ = -(ulonglong)(1e-08 <= auVar14._0_8_);
    auVar17 = sqrtpd(auVar15,auVar14);
    auVar15 = divpd(_DAT_149934d80,auVar17);
    dStack_130 = dStack_130 * auVar15._8_8_;
    auVar17._8_4_ = SUB84(dStack_130,0);
    auVar17._0_8_ = local_138 * auVar15._0_8_;
    auVar17._12_4_ = (int)((ulonglong)dStack_130 >> 0x20);
    auVar17 = blendvpd(ZEXT816(0x3ff0000000000000),auVar17,auVar11);
    if ((-(ulonglong)(1e-08 <= auVar14._0_8_) & 1) == 0) {
      dVar13 = 0.0;
    }
    else {
      dVar13 = local_128 * auVar15._0_8_;
    }
    dVar16 = dStack_120;
    if (1.0 <= dStack_120) {
      dVar16 = 1.0;
    }
    dVar16 = acos((double)(~-(ulonglong)(dStack_120 < -1.0) & (ulonglong)dVar16 |
                          (ulonglong)((uint)(-(ulonglong)(dStack_120 < -1.0) >> 0x20) & 0xbff00000)
                          << 0x20));
    for (fVar9 = (float)(dVar16 + dVar16); 3.1415927 < fVar9; fVar9 = fVar9 + -6.2831855) {
    }
    for (; fVar9 < -3.1415927; fVar9 = fVar9 + 6.2831855) {
    }
    fVar19 = fVar19 * (float)((double)(fVar2 * fVar9 * 57.295776) -
                             (double)fVar3 *
                             (*(double *)(param_2 + 0x70) * dVar13 +
                             *(double *)(param_2 + 0x60) * auVar17._0_8_ +
                             *(double *)(param_2 + 0x68) * auVar17._8_8_));
    if (fVar4 <= fVar19) {
      fVar19 = fVar4;
    }
    if (fVar19 <= -fVar4) {
      fVar19 = -fVar4;
    }
    local_d8 = (double)fVar19;
    local_c8 = dVar13 * local_d8;
    dStack_d0 = auVar17._8_8_ * local_d8;
    local_d8 = auVar17._0_8_ * local_d8;
  }
  FUN_1483edc00(param_1,&local_d8);
  if ((local_c0 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483ecbbc FUN_1483ecbbc body=155 status=ok
// SIG undefined FUN_1483ecbbc(void)

void FUN_1483ecbbc(undefined8 param_1,undefined8 param_2,longlong param_3,longlong *param_4,
                  undefined4 param_5)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = DAT_14c8464f0;
  local_28 = (undefined4)DAT_14c8464e0;
  uStack_24 = DAT_14c8464e0._4_4_;
  uStack_20 = (undefined4)DAT_14c8464e8;
  uStack_1c = DAT_14c8464e8._4_4_;
  iVar1 = *(int *)(param_3 + 0xa0);
  if (((longlong)iVar1 != -1) && (iVar1 < (int)param_4[1])) {
    local_38 = param_5;
    FUN_1483ede08(&local_28,(longlong)iVar1 * 0x2d0 + *param_4,param_2,param_3 + 0x48);
  }
  FUN_1483edb60(param_1,&local_28);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483ecc58 FUN_1483ecc58 body=95 status=ok
// SIG undefined FUN_1483ecc58(void)

undefined1 * FUN_1483ecc58(undefined1 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = *(undefined1 *)(param_2 + 0xa4);
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = *(int *)(param_2 + 0x80);
  uVar2 = *(undefined8 *)(param_2 + 0x78);
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  else {
    FUN_1483ee572(param_1 + 8,iVar1);
    FUN_1483ee5d7(*(undefined8 *)(param_1 + 8),uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1483eccb8 FUN_1483eccb8 body=743 status=ok
// SIG undefined FUN_1483eccb8(void)

float FUN_1483eccb8(longlong *param_1,longlong param_2,undefined4 param_3,longlong *param_4,
                   ulonglong *param_5,undefined4 *param_6,undefined8 *param_7,undefined8 *param_8,
                   undefined8 *param_9,undefined8 *param_10,undefined4 *param_11)

{
  ulonglong *puVar1;
  double dVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong *plVar9;
  int iVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined4 *local_170;
  undefined4 local_160;
  undefined1 local_15c;
  ushort local_158 [8];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_e4;
  float local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_198;
  *param_5 = 0;
  *param_6 = 0;
  param_7[2] = DAT_14c8464f0;
  uVar7 = DAT_14c8464e8;
  *param_7 = DAT_14c8464e0;
  param_7[1] = uVar7;
  param_8[2] = DAT_14c8462d0;
  uVar6 = DAT_14c8462c8._4_4_;
  uVar5 = (undefined4)DAT_14c8462c8;
  uVar4 = DAT_14c8462c0._4_4_;
  *(undefined4 *)param_8 = (undefined4)DAT_14c8462c0;
  *(undefined4 *)((longlong)param_8 + 4) = uVar4;
  *(undefined4 *)(param_8 + 1) = uVar5;
  *(undefined4 *)((longlong)param_8 + 0xc) = uVar6;
  if ((longlong)(int)param_1[1] == 0) {
    fVar13 = -100000.0;
  }
  else {
    puVar12 = (ulonglong *)*param_1;
    puVar11 = puVar12 + (int)param_1[1];
    fVar14 = -1.0;
    fVar13 = -100000.0;
    do {
      uVar3 = *puVar12;
      if (uVar3 != 0) {
        local_160 = 0;
        if ((int)param_4[1] != *(int *)((longlong)param_4 + 0x34)) {
          uVar8 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
          uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
          plVar9 = (longlong *)param_4[8];
          if ((longlong *)param_4[8] == (longlong *)0x0) {
            plVar9 = param_4 + 7;
          }
          iVar10 = *(int *)((longlong)plVar9 +
                           (ulonglong)((int)param_4[9] - 1U & (uVar8 >> 0x10 ^ uVar8)) * 4);
          if (iVar10 != -1) {
            do {
              puVar1 = (ulonglong *)(*param_4 + (longlong)iVar10 * 0x18);
              if (*puVar1 == uVar3) {
                if (puVar1 != (ulonglong *)0x0) {
                  local_160 = (undefined4)puVar1[1];
                }
                break;
              }
              iVar10 = (int)puVar1[2];
            } while (iVar10 != -1);
          }
        }
        local_15c = 1;
        local_170 = &local_160;
        local_178 = param_3;
        FUN_143b2e170(uVar3,local_158,param_2,0x37);
        if ((0.0 < local_b8) && (fVar14 < local_b8)) {
          dVar2 = *(double *)(param_2 + 0x10);
          *param_5 = uVar3;
          if ((local_158[0] & 0x108) != 0) {
            *param_6 = local_e4;
          }
          fVar13 = (float)((double)local_b8 + dVar2);
          param_7[2] = local_138;
          *param_7 = local_148;
          param_7[1] = uStack_140;
          param_8[2] = local_108;
          *param_8 = local_118;
          param_8[1] = uStack_110;
          param_9[2] = local_120;
          *param_9 = local_130;
          param_9[1] = uStack_128;
          param_10[2] = local_a0;
          *param_10 = local_b0;
          param_10[1] = uStack_a8;
          *param_11 = *(undefined4 *)(uVar3 + 0x16c);
          fVar14 = local_b8;
        }
      }
      puVar12 = puVar12 + 1;
    } while (puVar12 != puVar11);
  }
  if ((local_90 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return fVar13;
}



// FUNCTION 1483ecfa0 FUN_1483ecfa0 body=345 status=ok
// SIG undefined FUN_1483ecfa0(void)

void FUN_1483ecfa0(longlong param_1,longlong param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  
  fVar5 = (param_3 - *(float *)(param_1 + 0x20)) /
          (*(float *)(param_1 + 0x24) - *(float *)(param_1 + 0x20));
  if (1.0 <= fVar5) {
    fVar5 = 1.0;
  }
  fVar2 = 0.0;
  if (fVar5 <= 0.0) {
    fVar5 = fVar2;
  }
  fVar1 = *(float *)(param_2 + 0x20);
  fVar6 = *(float *)(param_2 + 0x9c) - (float)(*(double *)(param_2 + 0x50) - (double)fVar1);
  if (fVar1 + fVar1 <= fVar6) {
    fVar6 = fVar1 + fVar1;
  }
  if (fVar6 <= 0.0) {
    fVar6 = fVar2;
  }
  fVar9 = (float)(-(uint)(0.0 < param_4) & 0x3f800000 |
                 ~-(uint)(0.0 < param_4) & -(uint)(param_4 < 0.0) & 0xbf800000) *
          *(float *)(param_1 + 0x1c) * param_4 * param_4 + *(float *)(param_1 + 0x18) * param_4;
  if (fVar9 <= 0.0) {
    fVar9 = fVar2;
  }
  fVar9 = (fVar1 * 3.0 - fVar6) * fVar6 * fVar6 * 1.0471976 *
          ((*(float *)(param_1 + 0x28) + -1.0) * fVar5 + 1.0) * *(float *)(param_1 + 0x14) - fVar9;
  if (*(float *)(param_1 + 0x2c) <= fVar9) {
    fVar9 = *(float *)(param_1 + 0x2c);
  }
  if (fVar9 <= 0.0) {
    fVar9 = fVar2;
  }
  dVar3 = (double)fVar9;
  dVar4 = DAT_14c8462d0 * dVar3;
  dVar7 = DAT_14c8462c8 * dVar3;
  dVar8 = (double)*(float *)(param_2 + 0x98);
  *(double *)(param_2 + 0x28) = dVar3 * DAT_14c8462c0 * dVar8;
  *(double *)(param_2 + 0x30) = dVar7 * dVar8;
  *(double *)(param_2 + 0x38) = dVar4 * dVar8;
  return;
}



// FUNCTION 1483ed0fa FUN_1483ed0fa body=132 status=ok
// SIG undefined FUN_1483ed0fa(void)

void FUN_1483ed0fa(longlong param_1,int param_2)

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



// FUNCTION 1483ed180 FUN_1483ed180 body=68 status=ok
// SIG undefined FUN_1483ed180(void)

void FUN_1483ed180(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_1483ed1c4();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_144727cd0(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1483ed1c4 FUN_1483ed1c4 body=322 status=ok
// SIG undefined FUN_1483ed1c4(void)

void FUN_1483ed1c4(longlong *param_1)

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



// FUNCTION 1483ed308 FUN_1483ed308 body=328 status=ok
// SIG undefined FUN_1483ed308(void)

undefined4 * FUN_1483ed308(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
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
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1483ed452(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_1483ed538(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
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
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1483ed62a(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483ed452 FUN_1483ed452 body=230 status=ok
// SIG undefined FUN_1483ed452(void)

int * FUN_1483ed452(longlong *param_1,int *param_2)

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



// FUNCTION 1483ed538 FUN_1483ed538 body=128 status=ok
// SIG undefined FUN_1483ed538(void)

undefined8 FUN_1483ed538(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_1483ed5b8((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 1483ed5b8 FUN_1483ed5b8 body=114 status=ok
// SIG undefined FUN_1483ed5b8(void)

void FUN_1483ed5b8(longlong *param_1,int param_2)

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



// FUNCTION 1483ed62a FUN_1483ed62a body=474 status=ok
// SIG undefined FUN_1483ed62a(void)

void FUN_1483ed62a(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
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
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 1483ed806 FUN_1483ed806 body=146 status=ok
// SIG undefined FUN_1483ed806(void)

void FUN_1483ed806(longlong param_1,int param_2)

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
    uVar5 = FUN_144a3809e(lVar4 * 0x2e0,0x10);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 5;
    iVar6 = SUB164(auVar2 * ZEXT816(0xb21642c8590b217),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x2e0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1483ed89a FUN_1483ed89a body=169 status=ok
// SIG undefined FUN_1483ed89a(void)

void * FUN_1483ed89a(void *param_1,void *param_2)

{
  longlong lVar1;
  
  memcpy(param_1,param_2,0x170);
  FUN_1483ed944((longlong)param_1 + 0x170,(longlong)param_2 + 0x170);
  FUN_1483ed944((longlong)param_1 + 0x1c0,(longlong)param_2 + 0x1c0);
  FUN_1483eda52((longlong)param_1 + 0x210,(longlong)param_2 + 0x210);
  FUN_1483eda52((longlong)param_1 + 0x260,(longlong)param_2 + 0x260);
  *(undefined1 *)((longlong)param_1 + 0x2b0) = *(undefined1 *)((longlong)param_2 + 0x2b0);
  lVar1 = *(longlong *)((longlong)param_2 + 0x2b8);
  *(longlong *)((longlong)param_1 + 0x2b8) = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined8 *)((longlong)param_1 + 0x2c0) = *(undefined8 *)((longlong)param_2 + 0x2c0);
  return param_1;
}



// FUNCTION 1483ed944 FUN_1483ed944 body=123 status=ok
// SIG undefined FUN_1483ed944(void)

undefined8 * FUN_1483ed944(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1483ed9c0();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 1483ed9c0 FUN_1483ed9c0 body=146 status=ok
// SIG undefined FUN_1483ed9c0(void)

longlong * FUN_1483ed9c0(longlong *param_1,longlong *param_2)

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
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar3 = param_2[3];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(int *)(param_1 + 3) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
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
  return param_1;
}



// FUNCTION 1483eda52 FUN_1483eda52 body=123 status=ok
// SIG undefined FUN_1483eda52(void)

undefined8 * FUN_1483eda52(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1483edace();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 1483edace FUN_1483edace body=146 status=ok
// SIG undefined FUN_1483edace(void)

longlong * FUN_1483edace(longlong *param_1,longlong *param_2)

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
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar3 = param_2[3];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(int *)(param_1 + 3) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
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
  return param_1;
}



// FUNCTION 1483edb60 FUN_1483edb60 body=158 status=ok
// SIG undefined FUN_1483edb60(void)

void FUN_1483edb60(longlong param_1,double *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_58 [40];
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar2 = FUN_144afe924(param_2);
  if (cVar2 == '\0') {
    plVar1 = *(longlong **)(param_1 + 0x48);
    local_30 = 0.0;
    if ((plVar1 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar1 + 0xc))) {
      local_30 = *(double *)(*(longlong *)(*plVar1 + 0x3b0) + (longlong)(int)plVar1[1] * 8);
    }
    local_20 = param_2[2] * local_30;
    local_28 = param_2[1] * local_30;
    local_30 = local_30 * *param_2;
    FUN_140933574(param_1,&local_30,1);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483edc00 FUN_1483edc00 body=238 status=ok
// SIG undefined FUN_1483edc00(void)

void FUN_1483edc00(undefined8 param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  undefined1 auStack_e8 [40];
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_88;
  double local_80;
  double local_78;
  double local_68;
  double local_60;
  double local_58;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  cVar4 = FUN_144afe924(param_2);
  if (cVar4 == '\0') {
    FUN_140de6c5e(&local_a8,param_1);
    dVar1 = *param_2;
    dVar2 = param_2[1];
    dVar3 = param_2[2];
    local_b0 = local_58 * dVar3 + local_68 * dVar1 + local_60 * dVar2;
    local_b8 = local_78 * dVar3 + local_88 * dVar1 + local_80 * dVar2;
    local_c0 = dVar3 * local_98 + dVar1 * local_a8 + dVar2 * local_a0;
    FUN_1409334da(param_1,&local_c0,1);
  }
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483edcf0 FUN_1483edcf0 body=278 status=ok
// SIG undefined FUN_1483edcf0(void)

void FUN_1483edcf0(undefined8 param_1,double *param_2,double *param_3)

{
  char cVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar1 = FUN_144afe924(param_2);
  if (cVar1 == '\0') {
    cVar1 = FUN_144afe924(param_3);
    if (cVar1 == '\0') {
      FUN_142a5e622(&local_58,param_1);
      local_60 = (*param_3 - local_58) * param_2[1] - *param_2 * (param_3[1] - local_50);
      local_68 = (param_3[2] - local_48) * *param_2 - param_2[2] * (*param_3 - local_58);
      local_70 = (param_3[1] - local_50) * param_2[2] - (param_3[2] - local_48) * param_2[1];
      local_78 = param_2[2];
      local_88 = *(undefined4 *)param_2;
      uStack_84 = *(undefined4 *)((longlong)param_2 + 4);
      uStack_80 = *(undefined4 *)(param_2 + 1);
      uStack_7c = *(undefined4 *)((longlong)param_2 + 0xc);
      FUN_140933574(param_1,&local_88,1);
      FUN_1409334da(param_1,&local_70,1);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483ede08 FUN_1483ede08 body=1897 status=ok
// SIG undefined FUN_1483ede08(void)

double * FUN_1483ede08(double *param_1,longlong param_2,longlong param_3,double *param_4,
                      float param_5)

{
  undefined4 uVar1;
  ulonglong uVar2;
  double dVar3;
  ulonglong uVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  ulonglong *puVar10;
  longlong lVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float fVar25;
  undefined1 auStack_108 [40];
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  param_1[2] = DAT_14c8464f0;
  uVar24 = DAT_14c8464e8._4_4_;
  uVar23 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)param_1 = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 1) = uVar23;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar24;
  uVar2 = *(ulonglong *)(param_2 + 0x2c0);
  if ((uVar2 != 0) && (*(char *)(uVar2 + 0x148) == '\0')) {
    if (*(int *)(param_2 + 0x218) != *(int *)(param_2 + 0x244)) {
      uVar8 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
      uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
      lVar11 = param_2 + 0x248;
      if (*(longlong *)(param_2 + 0x250) != 0) {
        lVar11 = *(longlong *)(param_2 + 0x250);
      }
      iVar9 = *(int *)(lVar11 + (ulonglong)(*(int *)(param_2 + 600) - 1U & (uVar8 >> 0x10 ^ uVar8))
                                * 4);
      if (iVar9 != -1) {
        do {
          puVar10 = (ulonglong *)(*(longlong *)(param_2 + 0x210) + (longlong)iVar9 * 0x18);
          if (*puVar10 == uVar2) goto LAB_1483edf20;
          iVar9 = (int)puVar10[2];
        } while (iVar9 != -1);
      }
    }
    puVar10 = (ulonglong *)0x0;
LAB_1483edf20:
    uVar1 = (undefined4)puVar10[1];
    FUN_1483f5106(uVar2 + 0x20,&local_c8,uVar1,1);
    uVar23 = SUB84(DAT_14c8464f0,0);
    uVar24 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    if (0.0 <= *(float *)(param_3 + 0x4c)) {
      dVar3 = *(double *)(param_2 + 0x48) - local_c0;
      dVar15 = *(double *)(param_2 + 0x40) - local_c8;
      dVar20 = dVar15 * dVar15 + dVar3 * dVar3;
      if ((dVar20 != 1.0) || (NAN(dVar20))) {
        if (9.99999993922529e-09 <= dVar20) {
          dVar3 = dVar3 * (1.0 / SQRT(dVar20));
          dVar15 = dVar15 * (1.0 / SQRT(dVar20));
          fVar12 = 1.0;
          uVar23 = 0;
          uVar24 = 0;
        }
        else {
          dVar15 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          dVar3 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          fVar12 = 1.0;
        }
      }
      else {
        local_b8 = *(double *)(param_2 + 0x50) - local_b8;
        uVar4 = -(ulonglong)(local_b8 == 0.0) & (ulonglong)local_b8;
        uVar23 = (undefined4)uVar4;
        uVar24 = (undefined4)(uVar4 >> 0x20);
        fVar12 = 1.0;
      }
    }
    else {
      dVar3 = local_c0 - *(double *)(param_2 + 0x48);
      dVar15 = local_c8 - *(double *)(param_2 + 0x40);
      dVar20 = dVar15 * dVar15 + dVar3 * dVar3;
      uVar6 = 0;
      uVar7 = 0;
      if ((dVar20 != 1.0) || (NAN(dVar20))) {
        if (9.99999993922529e-09 <= dVar20) {
          dVar3 = dVar3 * (1.0 / SQRT(dVar20));
          dVar15 = dVar15 * (1.0 / SQRT(dVar20));
        }
        else {
          dVar15 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          dVar3 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          uVar6 = uVar23;
          uVar7 = uVar24;
        }
      }
      uVar24 = uVar7;
      uVar23 = uVar6;
      local_c8 = *(double *)(param_2 + 0x40) - local_c8;
      local_c0 = *(double *)(param_2 + 0x48) - local_c0;
      fVar25 = (float)SQRT(local_c0 * local_c0 + local_c8 * local_c8);
      fVar12 = *(float *)(param_3 + 0x50);
      if (fVar25 - fVar12 <= 0.0) {
        dVar20 = (double)CONCAT44(uVar24,uVar23) * (double)CONCAT44(uVar24,uVar23) +
                 dVar15 * dVar15 + dVar3 * dVar3;
        if ((dVar20 != 1.0) ||
           (dVar17 = dVar15, dVar21 = (double)CONCAT44(uVar24,uVar23), dVar19 = dVar3, NAN(dVar20)))
        {
          if (9.99999993922529e-09 <= dVar20) {
            dVar17 = 1.0 / SQRT(dVar20);
            dVar21 = (double)CONCAT44(uVar24,uVar23) * dVar17;
            dVar19 = dVar3 * dVar17;
            dVar17 = dVar17 * dVar15;
          }
          else {
            dVar17 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
            dVar19 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
            dVar21 = DAT_14c8464f0;
          }
        }
        fVar12 = ((fVar25 + fVar25) / fVar12 + 0.0) *
                 -((float)(dVar21 * param_4[2] + dVar17 * *param_4 + dVar19 * param_4[1]) /
                   *(float *)(param_3 + 0x5c) + 0.0);
      }
      else {
        fVar12 = (fVar25 - fVar12) / fVar12 + 0.0;
      }
    }
    FUN_1483f5878(uVar2,&local_e0,uVar1);
    dVar20 = (double)*(float *)(param_3 + 0x58);
    dVar17 = local_d0 * dVar20;
    dVar19 = local_d8 * dVar20;
    dVar20 = dVar20 * local_e0;
    fVar25 = (float)FUN_1483f592e(uVar2,uVar1);
    dVar21 = dVar17 * dVar17 + dVar20 * dVar20 + dVar19 * dVar19;
    if ((dVar21 != 1.0) || (dVar16 = dVar20, dVar14 = dVar17, dVar13 = dVar19, NAN(dVar21))) {
      if (9.99999993922529e-09 <= dVar21) {
        dVar16 = 1.0 / SQRT(dVar21);
        dVar14 = dVar17 * dVar16;
        dVar13 = dVar19 * dVar16;
        dVar16 = dVar16 * dVar20;
      }
      else {
        dVar16 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        dVar13 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        dVar14 = DAT_14c8464f0;
      }
    }
    fVar18 = (float)(dVar14 * param_4[2] + dVar16 * *param_4 + dVar13 * param_4[1]);
    if (*(char *)(param_3 + 0x61) == '\0') {
      fVar18 = ABS(fVar18);
    }
    if ((fVar18 < fVar25) || (*(char *)(param_3 + 0x60) == '\x01')) {
      dVar13 = (double)fVar12;
      dVar14 = (double)ABS(*(float *)(param_3 + 0x4c));
      dVar22 = 1.0 / (double)param_5;
      dVar16 = (double)CONCAT44(uVar24,uVar23) * dVar13 * dVar14 * dVar22;
      dVar21 = dVar3 * dVar13 * dVar14 * dVar22;
      dVar15 = dVar15 * dVar13 * dVar14 * dVar22;
      dVar14 = (double)*(float *)(param_3 + 0x54);
      dVar3 = (double)-*(float *)(param_3 + 0x54);
      dVar13 = SQRT(dVar16 * dVar16 + dVar15 * dVar15 + dVar21 * dVar21);
      if (dVar13 <= 9.99999993922529e-09) {
        dVar15 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        dVar21 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        dVar16 = DAT_14c8464f0;
      }
      else {
        dVar5 = 1.0 / dVar13;
        dVar21 = dVar21 * dVar5;
        dVar15 = dVar15 * dVar5;
        dVar16 = dVar16 * dVar5;
      }
      if (dVar14 <= dVar13) {
        dVar13 = dVar14;
      }
      if (dVar13 <= dVar3) {
        dVar13 = dVar3;
      }
      dVar16 = dVar16 * dVar13 + param_1[2];
      dVar3 = dVar21 * dVar13 + param_1[1];
      dVar15 = dVar13 * dVar15 + *param_1;
      *param_1 = dVar15;
      param_1[1] = dVar3;
      param_1[2] = dVar16;
      if (fVar18 < fVar25) {
        dVar17 = dVar17 * dVar22;
        dVar19 = dVar19 * dVar22;
        dVar20 = dVar20 * dVar22;
        dVar21 = (double)*(float *)(param_3 + 0x5c);
        dVar14 = (double)-*(float *)(param_3 + 0x5c);
        dVar13 = SQRT(dVar17 * dVar17 + dVar20 * dVar20 + dVar19 * dVar19);
        if (dVar13 <= 9.99999993922529e-09) {
          dVar20 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          dVar19 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          dVar17 = DAT_14c8464f0;
        }
        else {
          dVar22 = 1.0 / dVar13;
          dVar19 = dVar19 * dVar22;
          dVar20 = dVar20 * dVar22;
          dVar17 = dVar17 * dVar22;
        }
        if (dVar21 <= dVar13) {
          dVar13 = dVar21;
        }
        if (dVar13 <= dVar14) {
          dVar13 = dVar14;
        }
        *param_1 = dVar15 + dVar13 * dVar20;
        param_1[1] = dVar3 + dVar19 * dVar13;
        param_1[2] = dVar16 + dVar17 * dVar13;
      }
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1483ee572 FUN_1483ee572 body=101 status=ok
// SIG undefined FUN_1483ee572(void)

undefined8 FUN_1483ee572(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x2e0,0x10);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2 >> 5;
  uVar3 = SUB168(auVar1 * ZEXT816(0xb21642c8590b217),0);
  iVar4 = SUB164(auVar1 * ZEXT816(0xb21642c8590b217),8);
  iVar5 = 0x7fffffff;
  if (param_2 <= iVar4) {
    iVar5 = iVar4;
  }
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,iVar5,0x2e0,0x10);
  }
  *(int *)(param_1 + 0xc) = iVar5;
  return uVar3;
}



// FUNCTION 1483ee5d7 FUN_1483ee5d7 body=67 status=ok
// SIG undefined FUN_1483ee5d7(void)

void FUN_1483ee5d7(longlong param_1,longlong param_2,int param_3)

{
  do {
    FUN_1483e9b8c(param_1,param_2);
    *(undefined1 *)(param_1 + 0x2d0) = *(undefined1 *)(param_2 + 0x2d0);
    param_1 = param_1 + 0x2e0;
    param_2 = param_2 + 0x2e0;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1483ee61a FUN_1483ee61a body=80 status=ok
// SIG undefined FUN_1483ee61a(void)

longlong * FUN_1483ee61a(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_1483eb777(*param_1,(int)param_1[1]);
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



// FUNCTION 1483ee66a FUN_1483ee66a body=185 status=ok
// SIG undefined FUN_1483ee66a(void)

int FUN_1483ee66a(longlong *param_1,uint param_2,undefined8 *param_3)

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
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x18);
        cVar1 = FUN_14472d054(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_1483ee693;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_1483ee693:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 1483ee724 FUN_1483ee724 body=299 status=ok
// SIG undefined FUN_1483ee724(void)

undefined4 * FUN_1483ee724(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_1483ee850(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x20) ^ (uint)uVar2;
  cVar4 = FUN_1483ee936(param_1,uVar9,local_40,&local_4c);
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
      FUN_1483eea2e(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483ee850 FUN_1483ee850 body=230 status=ok
// SIG undefined FUN_1483ee850(void)

int * FUN_1483ee850(longlong *param_1,int *param_2)

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
      FUN_1403951a8(param_1,iVar6);
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



// FUNCTION 1483ee936 FUN_1483ee936 body=132 status=ok
// SIG undefined FUN_1483ee936(void)

undefined8 FUN_1483ee936(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    iVar5 = FUN_1483ee66a();
    if (iVar5 != -1) {
      uVar2 = *(undefined4 *)((longlong)param_3 + 4);
      uVar3 = *(undefined4 *)(param_3 + 1);
      uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar5 * 0x18);
      *puVar1 = *(undefined4 *)param_3;
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
      FUN_1483ee9bc(param_1,*param_4);
      *param_4 = iVar5;
      uVar6 = 1;
      goto LAB_1483ee978;
    }
  }
  uVar6 = 0;
LAB_1483ee978:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483ee9bc FUN_1483ee9bc body=114 status=ok
// SIG undefined FUN_1483ee9bc(void)

void FUN_1483ee9bc(longlong *param_1,int param_2)

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



// FUNCTION 1483eea2e FUN_1483eea2e body=436 status=ok
// SIG undefined FUN_1483eea2e(void)

void FUN_1483eea2e(longlong *param_1)

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
        uVar10 = (longlong)(int)((uint)((ulonglong)uVar4 >> 0x20) ^ (uint)uVar4) &
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



// FUNCTION 1483eebe4 FUN_1483eebe4 body=190 status=ok
// SIG undefined FUN_1483eebe4(void)

void FUN_1483eebe4(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_1;
    uVar6 = 0;
    bVar5 = DAT_14c950c29;
    do {
      lVar3 = *param_2;
      if ((lVar3 != 0 & bVar5) == 1) {
        FUN_1456cec3c(lVar3);
        bVar5 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar2 + uVar6) == lVar3) {
        if ((int)(~uVar6 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar6 = uVar6 + 8;
    } while ((longlong)(int)lVar4 * 8 != uVar6);
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1483eeca2(param_1,iVar1);
  }
  lVar4 = *param_2;
  *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar4;
  if ((lVar4 != 0 & DAT_14c950c29) != 1) {
    return;
  }
  FUN_1456cec3c();
  return;
}



// FUNCTION 1483eeca2 FUN_1483eeca2 body=132 status=ok
// SIG undefined FUN_1483eeca2(void)

void FUN_1483eeca2(longlong param_1,int param_2)

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



// FUNCTION 1483eed28 FUN_1483eed28 body=132 status=ok
// SIG undefined FUN_1483eed28(void)

void FUN_1483eed28(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1483eedae FUN_1483eedae body=303 status=ok
// SIG undefined FUN_1483eedae(void)

void FUN_1483eedae(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  
  iVar1 = (int)param_1[1];
  lVar12 = (longlong)iVar1;
  if (lVar12 != 0) {
    plVar2 = (longlong *)*param_1;
    lVar6 = *(longlong *)*param_2;
    if ((lVar6 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar6);
    }
    iVar8 = 0;
    iVar9 = 0;
    bVar4 = *plVar2 == lVar6;
    do {
      lVar7 = (longlong)iVar9;
      iVar10 = iVar9;
      lVar6 = lVar7;
      iVar5 = iVar9 + 1;
      if (iVar9 + 1 < iVar1) {
        iVar5 = iVar1;
      }
      do {
        lVar6 = lVar6 + 1;
        iVar11 = iVar5;
        if (lVar12 <= lVar6) break;
        lVar3 = *(longlong *)*param_2;
        if ((lVar3 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar3);
        }
        iVar11 = iVar10 + 1;
        iVar10 = iVar11;
      } while (bVar4 == (plVar2[lVar6] == lVar3));
      if (bVar4 == false) {
        if (iVar8 != iVar9) {
          memmove(plVar2 + iVar8,plVar2 + lVar7,(longlong)(iVar11 - iVar9) << 3);
        }
        iVar8 = iVar8 + (iVar11 - iVar9);
      }
      iVar9 = iVar11;
      bVar4 = (bool)(bVar4 ^ 1);
    } while (lVar6 < lVar12);
    *(int *)(param_1 + 1) = iVar8;
  }
  return;
}



// FUNCTION 1483eeede FUN_1483eeede body=263 status=ok
// SIG undefined FUN_1483eeede(void)

void FUN_1483eeede(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    uVar6 = (longlong)(int)((uint)((ulonglong)param_2 >> 0x20) ^ (uint)param_2) &
            (longlong)(int)param_1[9] - 1U;
    lVar4 = (longlong)*(int *)((longlong)plVar5 + uVar6 * 4);
    if (lVar4 != -1) {
      lVar2 = *param_1;
      local_40 = *(undefined8 *)(lVar2 + lVar4 * 0x18);
      local_48 = param_2;
      cVar3 = FUN_14472d054();
      if (cVar3 == '\0') {
        puVar1 = (undefined8 *)(lVar2 + lVar4 * 0x18);
        do {
          puVar7 = puVar1;
          lVar4 = (longlong)*(int *)(puVar7 + 2);
          if (lVar4 == -1) goto LAB_1483eef02;
          puVar1 = (undefined8 *)(*param_1 + lVar4 * 0x18);
          local_40 = *puVar1;
          local_48 = param_2;
          cVar3 = FUN_14472d054(&local_40,&local_48);
        } while (cVar3 == '\0');
        puVar7 = puVar7 + 2;
      }
      else {
        puVar7 = (undefined8 *)((longlong)plVar5 + uVar6 * 4);
      }
      FUN_1483eefe6(param_1,*(undefined4 *)puVar7);
    }
  }
LAB_1483eef02:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483eefe6 FUN_1483eefe6 body=87 status=ok
// SIG undefined FUN_1483eefe6(void)

void FUN_1483eefe6(longlong *param_1,int param_2)

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
  FUN_1483ee9bc();
  return;
}



// FUNCTION 1483ef03e FUN_1483ef03e body=96 status=ok
// SIG undefined FUN_1483ef03e(void)

void FUN_1483ef03e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
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



// FUNCTION 1483ef09e FUN_1483ef09e body=132 status=ok
// SIG undefined FUN_1483ef09e(void)

void FUN_1483ef09e(longlong param_1,int param_2)

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



// FUNCTION 1483ef124 FUN_1483ef124 body=132 status=ok
// SIG undefined FUN_1483ef124(void)

void FUN_1483ef124(longlong param_1,int param_2)

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



// FUNCTION 1483ef1c4 FUN_1483ef1c4 body=29 status=ok
// SIG undefined FUN_1483ef1c4(void)

bool FUN_1483ef1c4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1483ef1e2 FUN_1483ef1e2 body=93 status=ok
// SIG undefined FUN_1483ef1e2(void)

void FUN_1483ef1e2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3ea270;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae8bfc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1483ef240 FUN_1483ef240 body=93 status=ok
// SIG undefined FUN_1483ef240(void)

void FUN_1483ef240(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3ea270;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae8bfc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1483ef29e FUN_1483ef29e body=126 status=ok
// SIG undefined FUN_1483ef29e(void)

void FUN_1483ef29e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a3ea270;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae8bfc0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001483ef30d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1483ef31c FUN_1483ef31c body=40 status=ok
// SIG undefined FUN_1483ef31c(void)

void FUN_1483ef31c(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001483ef341. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1483ef35e FUN_1483ef35e body=29 status=ok
// SIG undefined FUN_1483ef35e(void)

bool FUN_1483ef35e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1483ef37c FUN_1483ef37c body=93 status=ok
// SIG undefined FUN_1483ef37c(void)

void FUN_1483ef37c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac988f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae8c030;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1483ef3da FUN_1483ef3da body=93 status=ok
// SIG undefined FUN_1483ef3da(void)

void FUN_1483ef3da(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac988f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae8c030;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1483ef438 FUN_1483ef438 body=126 status=ok
// SIG undefined FUN_1483ef438(void)

void FUN_1483ef438(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ac988f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae8c030;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001483ef4a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1483ef4b6 FUN_1483ef4b6 body=56 status=ok
// SIG undefined FUN_1483ef4b6(void)

void FUN_1483ef4b6(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001483ef4eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3);
  return;
}



// FUNCTION 1483ef4ee FUN_1483ef4ee body=199 status=ok
// SIG undefined FUN_1483ef4ee(void)

undefined8 FUN_1483ef4ee(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  lVar2 = **(longlong **)(param_1 + 0x58);
  if (lVar2 == 0) {
    puVar4 = (undefined8 *)FUN_14001cc68(0x80,0x10);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    *puVar4 = &PTR_LAB_14ae8c240;
    *(undefined4 *)((longlong)puVar4 + 0x4c) = 0x80;
    *(undefined4 *)(puVar4 + 10) = 0xffffffff;
    *(undefined4 *)(puVar4 + 0xf) = 0xffffffff;
    iVar1 = *(int *)(param_1 + 0x68);
    *(uint *)(param_1 + 0x68) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x6c) < iVar1 + 1U) {
      FUN_14037ef0a(param_1 + 0x60,iVar1);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x60) + (longlong)iVar1 * 8) = puVar4;
    uVar5 = *(undefined8 *)
             (*(longlong *)(param_1 + 0x60) + (longlong)(*(int *)(param_1 + 0x68) + -1) * 8);
  }
  else {
    uVar5 = *(undefined8 *)(lVar2 + 8);
    lVar3 = *(longlong *)(param_1 + 0x58);
    *(longlong *)(param_1 + 0x58) = lVar2;
    *(undefined8 *)(lVar2 + 8) = 0;
    if (lVar3 != 0) {
      FUN_1400020a8();
    }
  }
  return uVar5;
}



// FUNCTION 1483ef5b6 FUN_1483ef5b6 body=38 status=ok
// SIG undefined FUN_1483ef5b6(void)

undefined8 FUN_1483ef5b6(undefined8 param_1,int param_2)

{
  FUN_14101c6a2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483ef5dc FUN_1483ef5dc body=96 status=ok
// SIG undefined FUN_1483ef5dc(void)

void FUN_1483ef5dc(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
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



// FUNCTION 1483ef63c FUN_1483ef63c body=48 status=ok
// SIG undefined FUN_1483ef63c(void)

void FUN_1483ef63c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,4);
  }
  return;
}



// FUNCTION 1483ef66c FUN_1483ef66c body=296 status=ok
// SIG undefined FUN_1483ef66c(void)

undefined4 * FUN_1483ef66c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_1483ef796(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  *local_40 = *(uint *)*param_3;
  *(undefined8 *)(local_40 + 2) = *puVar1;
  *puVar1 = 0;
  local_40[4] = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  cVar3 = FUN_1483ef87c(param_1,uVar5,local_40,&local_4c);
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
      local_40[5] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[4] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
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
      FUN_1483ef988(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483ef796 FUN_1483ef796 body=230 status=ok
// SIG undefined FUN_1483ef796(void)

int * FUN_1483ef796(longlong *param_1,int *param_2)

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



// FUNCTION 1483ef87c FUN_1483ef87c body=154 status=ok
// SIG undefined FUN_1483ef87c(void)

undefined8 FUN_1483ef87c(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*piVar1 == *param_3) {
          puVar2 = *(undefined8 **)(piVar1 + 2);
          if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)(puVar2,1);
          }
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *piVar1 = *param_3;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_1483ef916(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[4];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 1483ef916 FUN_1483ef916 body=114 status=ok
// SIG undefined FUN_1483ef916(void)

void FUN_1483ef916(longlong *param_1,int param_2)

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



// FUNCTION 1483ef988 FUN_1483ef988 body=419 status=ok
// SIG undefined FUN_1483ef988(void)

void FUN_1483ef988(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x18);
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



// FUNCTION 1483efb7c FUN_1483efb7c body=87 status=ok
// SIG undefined FUN_1483efb7c(void)

void FUN_1483efb7c(longlong *param_1,int param_2)

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
  FUN_1483efbd4();
  return;
}



// FUNCTION 1483efbd4 FUN_1483efbd4 body=57 status=ok
// SIG undefined FUN_1483efbd4(void)

void FUN_1483efbd4(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(*param_1 + 8 + (longlong)param_2 * 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1483ef916(param_1,param_2);
  return;
}



// FUNCTION 1483efc0e FUN_1483efc0e body=132 status=ok
// SIG undefined FUN_1483efc0e(void)

void FUN_1483efc0e(longlong param_1,int param_2)

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



// FUNCTION 1483efc94 FUN_1483efc94 body=115 status=ok
// SIG undefined FUN_1483efc94(void)

void FUN_1483efc94(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x48,8);
    iVar2 = (int)(uVar1 / 0x48);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x48,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1483efd08 FUN_1483efd08 body=48 status=ok
// SIG undefined FUN_1483efd08(void)

void FUN_1483efd08(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x48,8);
  }
  return;
}



// FUNCTION 1483efd38 FUN_1483efd38 body=31 status=ok
// SIG undefined FUN_1483efd38(void)

undefined8 FUN_1483efd38(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483efd72 FUN_1483efd72 body=93 status=ok
// SIG undefined FUN_1483efd72(void)

void FUN_1483efd72(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae8c2a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1483efdd0 FUN_1483efdd0 body=93 status=ok
// SIG undefined FUN_1483efdd0(void)

void FUN_1483efdd0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae8c2a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1483efe2e FUN_1483efe2e body=126 status=ok
// SIG undefined FUN_1483efe2e(void)

void FUN_1483efe2e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae8c2a0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001483efe9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1483efeac FUN_1483efeac body=35 status=ok
// SIG undefined FUN_1483efeac(void)

void FUN_1483efeac(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001483efecb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}


