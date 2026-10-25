// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147a07626 FUN_147a07626 body=8 status=ok
// SIG undefined FUN_147a07626(void)

undefined8 FUN_147a07626(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xaf8);
}



// FUNCTION 147a0762e FUN_147a0762e body=96 status=ok
// SIG undefined FUN_147a0762e(void)

void FUN_147a0762e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147d1c584(param_1,&local_30);
  *(undefined8 *)(param_3 + 4) = local_20;
  *param_3 = local_30;
  param_3[1] = uStack_2c;
  param_3[2] = uStack_28;
  param_3[3] = uStack_24;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a07690 FUN_147a07690 body=38 status=ok
// SIG undefined FUN_147a07690(void)

void FUN_147a07690(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_144a81888();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147a076bc FUN_147a076bc body=658 status=ok
// SIG undefined FUN_147a076bc(void)

void FUN_147a076bc(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  void *_Src;
  undefined1 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined1 local_a0;
  void *local_90;
  int local_88;
  undefined4 local_84;
  undefined1 local_79;
  longlong local_78 [2];
  void *local_68;
  ulonglong uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  puVar2 = &local_50;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  local_58 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar5 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 0x38);
  }
  local_68 = (void *)0x0;
  uStack_60 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_78[0] = 0;
  local_78[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  plVar3 = local_78;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_79 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_79);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_79);
  }
  _Src = local_68;
  uVar1 = local_79;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_90 = (void *)0x0;
  lVar4 = (longlong)(int)uStack_60;
  local_88 = (int)uStack_60;
  if (lVar4 == 0) {
    local_84 = 0;
  }
  else {
    FUN_1446dd670(&local_90,uStack_60 & 0xffffffff,0);
    memcpy(local_90,_Src,lVar4 * 2);
  }
  local_a0 = uVar1;
  local_a8 = plVar3;
  uVar1 = FUN_147a07950(param_1,puVar2,puVar5,&local_90);
  *param_3 = uVar1;
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a07950 FUN_147a07950 body=222 status=ok
// SIG undefined FUN_147a07950(void)

undefined4
FUN_147a07950(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
             undefined8 param_5,undefined1 param_6)

{
  void *_Src;
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = (void *)0x0;
  local_50 = (int)param_4[1];
  lVar2 = (longlong)local_50;
  _Src = (void *)*param_4;
  if (lVar2 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,_Src,lVar2 * 2);
  }
  local_60 = param_6;
  local_68 = param_5;
  uVar1 = FUN_147a0d3da(param_1,param_2,param_3,&local_58);
  if (*param_4 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a07a36 FUN_147a07a36 body=467 status=ok
// SIG undefined FUN_147a07a36(void)

void FUN_147a07a36(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_59;
  longlong local_58 [5];
  
  local_58[4] = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58 + 3);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 3);
  }
  plVar3 = local_58 + 3;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_58[2] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 2);
  }
  plVar4 = local_58 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  plVar2 = local_58;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_59 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_59);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_59);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_59;
  uVar1 = FUN_147a07c0a(param_1,plVar3,plVar4,plVar2);
  *param_3 = uVar1;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_58[4] ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a07c0a FUN_147a07c0a body=192 status=ok
// SIG undefined FUN_147a07c0a(void)

void FUN_147a07c0a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined1 param_5)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined1 local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = (void *)0x0;
  local_50 = *(int *)(param_4 + 1);
  lVar1 = (longlong)local_50;
  _Src = (void *)*param_4;
  if (lVar1 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,_Src,lVar1 * 2);
  }
  local_60 = param_5;
  local_68 = param_4;
  FUN_147a0d3da(param_1,param_2,param_3,&local_58);
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a07d10 FUN_147a07d10 body=730 status=ok
// SIG undefined FUN_147a07d10(void)

void FUN_147a07d10(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_1d8 [32];
  undefined8 *local_1b8;
  undefined1 local_1b0;
  undefined1 local_199;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138 [2];
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8 [13];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_d0 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d0);
  }
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  local_d8 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  local_138[0] = 0;
  local_138[1] = 0;
  local_128 = 0;
  uStack_124 = 0;
  uStack_120 = 0;
  uStack_11c = 0x3ff00000;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0x3ff0000000000000;
  uStack_f0 = 0x3ff0000000000000;
  local_e8 = 0x3ff0000000000000;
  uStack_e0 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_138);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_138);
  }
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  uStack_184 = 0;
  uStack_180 = 0;
  uStack_17c = 0x3ff00000;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0x3ff0000000000000;
  uStack_150 = 0x3ff0000000000000;
  local_148 = 0x3ff0000000000000;
  uStack_140 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_198);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_198);
  }
  puVar6 = *(undefined8 **)(param_2 + 0x38);
  local_199 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_199);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_199);
  }
  local_1b8 = &local_198;
  if (puVar6 != (undefined8 *)0x0) {
    local_1b8 = puVar6;
  }
  puVar6 = &local_d8;
  if (puVar3 != (undefined8 *)0x0) {
    puVar6 = puVar3;
  }
  puVar3 = &local_d0;
  if (puVar4 != (undefined8 *)0x0) {
    puVar3 = puVar4;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar4 = local_138;
  puVar5 = local_c8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_1b0 = local_199;
  uVar1 = FUN_147a0cf82(param_1,puVar3,puVar6);
  *param_3 = uVar1;
  if ((local_60 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a07ff2 FUN_147a07ff2 body=564 status=ok
// SIG undefined FUN_147a07ff2(void)

void FUN_147a07ff2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_148 [32];
  undefined8 *local_128;
  undefined1 local_120;
  undefined1 local_109;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98 [12];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_a0 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  local_a8 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f4 = 0;
  uStack_f0 = 0;
  uStack_ec = 0x3ff00000;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c4 = 0x3ff00000;
  uStack_c0 = 0;
  uStack_bc = 0x3ff00000;
  local_b8 = 0x3ff0000000000000;
  uStack_b0 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_108);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_108);
  }
  puVar6 = *(undefined8 **)(param_2 + 0x38);
  local_109 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_109);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_109);
  }
  local_128 = &local_108;
  if (puVar6 != (undefined8 *)0x0) {
    local_128 = puVar6;
  }
  puVar6 = &local_a8;
  if (puVar3 != (undefined8 *)0x0) {
    puVar6 = puVar3;
  }
  puVar3 = &local_a0;
  if (puVar4 != (undefined8 *)0x0) {
    puVar3 = puVar4;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar4 = local_128;
  puVar5 = local_98;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_120 = local_109;
  uVar1 = FUN_147a0cf82(param_1,puVar3,puVar6);
  *param_3 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0825e FUN_147a0825e body=163 status=ok
// SIG undefined FUN_147a0825e(void)

void FUN_147a0825e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147d1bbfe(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0832a FUN_147a0832a body=37 status=ok
// SIG undefined FUN_147a0832a(void)

void FUN_147a0832a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14348c122();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147a08356 FUN_147a08356 body=583 status=ok
// SIG undefined FUN_147a08356(void)

void FUN_147a08356(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined4 *local_b0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined1 local_90 [24];
  undefined1 local_78 [24];
  undefined1 local_60 [24];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar1 = (undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  puVar5 = *(undefined1 **)(param_2 + 0x38);
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_90);
  }
  puVar6 = *(undefined1 **)(param_2 + 0x38);
  local_98 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  local_9c = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_9c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_9c);
  }
  local_b8 = &local_98;
  if (puVar3 != (undefined8 *)0x0) {
    local_b8 = puVar3;
  }
  puVar7 = local_90;
  if (puVar6 != (undefined1 *)0x0) {
    puVar7 = puVar6;
  }
  puVar6 = local_78;
  if (puVar5 != (undefined1 *)0x0) {
    puVar6 = puVar5;
  }
  puVar5 = local_60;
  if (puVar2 != (undefined1 *)0x0) {
    puVar5 = puVar2;
  }
  local_b0 = &local_9c;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    local_b0 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_147d1bc86(param_1,puVar5,puVar6,puVar7);
  *param_3 = uVar4;
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0859e FUN_147a0859e body=185 status=ok
// SIG undefined FUN_147a0859e(void)

void FUN_147a0859e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = local_20;
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  FUN_147a08658(param_1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a08658 FUN_147a08658 body=117 status=ok
// SIG undefined FUN_147a08658(void)

void FUN_147a08658(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (((*(byte *)(param_1 + 0xc70) & 0x20) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0xae8), plVar1 != (longlong *)0x0)) {
    local_18 = *param_2;
    if ((local_18 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    (**(code **)(*plVar1 + 0x2c8))(plVar1,&local_18);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a086ce FUN_147a086ce body=261 status=ok
// SIG undefined FUN_147a086ce(void)

void FUN_147a086ce(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_144a63fc8();
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
  local_30 = local_28;
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  FUN_147a087d4(param_1,local_20,&local_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a087d4 FUN_147a087d4 body=121 status=ok
// SIG undefined FUN_147a087d4(void)

void FUN_147a087d4(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(byte *)(param_1 + 0xc70) & 0x20) != 0) &&
     (lVar1 = *(longlong *)(param_1 + 0xae8), lVar1 != 0)) {
    local_20 = *param_3;
    if ((local_20 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_1478f10c2(lVar1,param_2,&local_20);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0885a FUN_147a0885a body=519 status=ok
// SIG undefined FUN_147a0885a(void)

void FUN_147a0885a(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  iVar2 = local_34;
  local_38 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  iVar1 = local_38;
  local_3c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_40 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_40;
  local_58 = local_3c;
  FUN_14348c17e(param_1,local_30,iVar2 != 0,iVar1 != 0);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a08a66 FUN_147a08a66 body=158 status=ok
// SIG undefined FUN_147a08a66(void)

void FUN_147a08a66(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14164d71c(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a08b0c FUN_147a08b0c body=241 status=ok
// SIG undefined FUN_147a08b0c(void)

void FUN_147a08b0c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
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
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14348c25a(param_1,local_20,local_24 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a08c14 FUN_147a08c14 body=238 status=ok
// SIG undefined FUN_147a08c14(void)

void FUN_147a08c14(undefined8 param_1,longlong param_2)

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
  FUN_1459dbc2c(param_1,local_20,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a08d04 FUN_147a08d04 body=156 status=ok
// SIG undefined FUN_147a08d04(void)

void FUN_147a08d04(undefined8 param_1,longlong param_2)

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
  FUN_147d1c13c(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a08db8 FUN_147a08db8 body=84 status=ok
// SIG undefined FUN_147a08db8(void)

void FUN_147a08db8(longlong param_1,longlong param_2)

{
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(int *)(param_1 + 0xc8c) < 0) {
    *(undefined4 *)(param_1 + 0xc88) = 0;
    FUN_1402191ca(param_1 + 0xc80,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xc88) = 0;
  }
  *(undefined2 *)(param_1 + 0xc74) = 0;
  return;
}



// FUNCTION 147a08e0c FUN_147a08e0c body=151 status=ok
// SIG undefined FUN_147a08e0c(void)

void FUN_147a08e0c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140090446(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a08eec FUN_147a08eec body=12 status=ok
// SIG undefined FUN_147a08eec(void)

void FUN_147a08eec(longlong param_1)

{
  *(byte *)(param_1 + 0xc72) = *(byte *)(param_1 + 0xc72) & 0xf7;
  FUN_147d1c798();
  return;
}



// FUNCTION 147a08efe FUN_147a08efe body=359 status=ok
// SIG undefined FUN_147a08efe(void)

void FUN_147a08efe(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_78 [44];
  int local_4c;
  undefined1 local_48 [24];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  puVar4 = local_48;
  if (puVar2 != (undefined1 *)0x0) {
    puVar4 = puVar2;
  }
  puVar3 = &local_30;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147d1986a(param_1,puVar3,puVar4,local_4c != 0);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a09072 FUN_147a09072 body=438 status=ok
// SIG undefined FUN_147a09072(void)

void FUN_147a09072(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_34 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_38 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  iVar2 = local_38;
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_3c != 0;
  puVar3 = &local_30;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  FUN_147d19ec6(param_1,puVar3,local_34,iVar2 != 0);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a09236 FUN_147a09236 body=353 status=ok
// SIG undefined FUN_147a09236(void)

void FUN_147a09236(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  int local_38;
  int local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  iVar2 = local_34;
  local_38 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar3 = &local_30;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147d19808(param_1,puVar3,iVar2 != 0,local_38 != 0);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a093a4 FUN_147a093a4 body=353 status=ok
// SIG undefined FUN_147a093a4(void)

void FUN_147a093a4(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  int local_38;
  int local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  iVar2 = local_34;
  local_38 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar3 = &local_30;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147d19956(param_1,puVar3,iVar2 != 0,local_38 != 0);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0950c FUN_147a0950c body=241 status=ok
// SIG undefined FUN_147a0950c(void)

void FUN_147a0950c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  int local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1417ef39a(param_1,local_1c,local_20 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a09602 FUN_147a09602 body=158 status=ok
// SIG undefined FUN_147a09602(void)

void FUN_147a09602(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147d19754(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a096a8 FUN_147a096a8 body=417 status=ok
// SIG undefined FUN_147a096a8(void)

void FUN_147a096a8(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_28 != 0;
  FUN_147d19ce6(param_1,local_1c,local_20,local_24);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0985a FUN_147a0985a body=343 status=ok
// SIG undefined FUN_147a0985a(void)

void FUN_147a0985a(undefined8 param_1,longlong param_2)

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
  FUN_147d19a6e(param_1,iVar2 != 0,iVar1 != 0,local_34 != 0);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a099c2 FUN_147a099c2 body=343 status=ok
// SIG undefined FUN_147a099c2(void)

void FUN_147a099c2(undefined8 param_1,longlong param_2)

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
  FUN_147d19b06(param_1,iVar2 != 0,iVar1 != 0,local_34 != 0);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a09b1e FUN_147a09b1e body=199 status=ok
// SIG undefined FUN_147a09b1e(void)

void FUN_147a09b1e(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (((*(byte *)(param_1 + 0xc68) & 2) == 0) == (local_1c != 0)) {
    *(byte *)(param_1 + 0xc68) = *(byte *)(param_1 + 0xc68) & 0xfd | (local_1c != 0) * '\x02';
    *(undefined2 *)(param_1 + 0xc74) = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a09bea FUN_147a09bea body=169 status=ok
// SIG undefined FUN_147a09bea(void)

void FUN_147a09bea(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0xc62) = *(byte *)(param_1 + 0xc62) & 0xfd | (local_1c != 0) * '\x02';
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a09c9a FUN_147a09c9a body=264 status=ok
// SIG undefined FUN_147a09c9a(void)

void FUN_147a09c9a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [44];
  int local_3c;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a09da4(param_1,plVar1,local_3c != 0);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a09da4 FUN_147a09da4 body=163 status=ok
// SIG undefined FUN_147a09da4(void)

void FUN_147a09da4(longlong param_1,undefined8 *param_2,undefined1 param_3)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  
  plVar1 = (longlong *)(param_1 + 0xc80);
  *(undefined4 *)(param_1 + 0xc88) = 0;
  if (*(int *)(param_1 + 0xc8c) < 0) {
    FUN_1402191ca(plVar1,0);
  }
  *(undefined2 *)(param_1 + 0xc74) = 0;
  uVar2 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar2 != 0) {
    iVar3 = *(int *)(param_1 + 0xc88);
    *(uint *)(param_1 + 0xc88) = iVar3 + uVar2;
    if ((uint)(*(int *)(param_1 + 0xc8c) - iVar3) < uVar2) {
      FUN_1446f84a2(plVar1,iVar3);
    }
    memcpy((void *)((longlong)iVar3 * 8 + *plVar1),(void *)*param_2,(longlong)(int)uVar2 << 3);
  }
  *(undefined1 *)(param_1 + 0xc7d) = param_3;
  return;
}



// FUNCTION 147a09e52 FUN_147a09e52 body=240 status=ok
// SIG undefined FUN_147a09e52(void)

void FUN_147a09e52(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
  local_28 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a09f44(param_1,iVar1 != 0,local_28 != 0);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a09f44 FUN_147a09f44 body=112 status=ok
// SIG undefined FUN_147a09f44(void)

void FUN_147a09f44(longlong param_1,byte param_2,char param_3)

{
  longlong lVar1;
  
  if (((*(byte *)(param_1 + 0xc68) ^ param_2) & 1) == 0) {
    *(byte *)(param_1 + 0xc68) = *(byte *)(param_1 + 0xc68) & 0xfe | param_2 ^ 1;
    if ((param_3 != '\0') && ((*(byte *)(param_1 + 0x9c) & 1) != 0)) {
      lVar1 = FUN_144a81888(param_1);
      if (lVar1 != 0) {
        if (*(longlong *)(param_1 + 0xae8) != 0) {
          FUN_140737aec(*(longlong *)(param_1 + 0xae8),0);
        }
        if (*(longlong *)(param_1 + 0xaf8) != 0) {
          FUN_140737aec(*(longlong *)(param_1 + 0xaf8),0);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 147a09fb4 FUN_147a09fb4 body=418 status=ok
// SIG undefined FUN_147a09fb4(void)

void FUN_147a09fb4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_2c;
  FUN_147d1a980(param_1,local_20,local_24,local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0a158 FUN_147a0a158 body=156 status=ok
// SIG undefined FUN_147a0a158(void)

void FUN_147a0a158(undefined8 param_1,longlong param_2)

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
  FUN_14164d696(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0a1fc FUN_147a0a1fc body=237 status=ok
// SIG undefined FUN_147a0a1fc(void)

void FUN_147a0a1fc(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  int local_20;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  local_20 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14073397e(param_1,local_19,local_20 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0a2ea FUN_147a0a2ea body=160 status=ok
// SIG undefined FUN_147a0a2ea(void)

void FUN_147a0a2ea(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0xc48))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0a390 FUN_147a0a390 body=251 status=ok
// SIG undefined FUN_147a0a390(void)

void FUN_147a0a390(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xc70))(param_1,iVar1 != 0,local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0a492 FUN_147a0a492 body=264 status=ok
// SIG undefined FUN_147a0a492(void)

void FUN_147a0a492(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [44];
  int local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar2 = &local_28;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147d199f4(param_1,puVar2,local_2c != 0);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0a59c FUN_147a0a59c body=156 status=ok
// SIG undefined FUN_147a0a59c(void)

void FUN_147a0a59c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147d1c786(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0a640 FUN_147a0a640 body=332 status=ok
// SIG undefined FUN_147a0a640(void)

void FUN_147a0a640(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [44];
  int local_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147d19b9e(param_1,local_20,local_28,local_2c != 0);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0a794 FUN_147a0a794 body=241 status=ok
// SIG undefined FUN_147a0a794(void)

void FUN_147a0a794(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147d19c70(param_1,local_20,local_24 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0a88a FUN_147a0a88a body=202 status=ok
// SIG undefined FUN_147a0a88a(void)

void FUN_147a0a88a(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((bool)((*(byte *)(param_1 + 0xc68) & 2) >> 1) == (local_1c != 0)) {
    *(byte *)(param_1 + 0xc68) = *(byte *)(param_1 + 0xc68) & 0xfd | (local_1c == 0) * '\x02';
    *(undefined2 *)(param_1 + 0xc74) = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0a95a FUN_147a0a95a body=204 status=ok
// SIG undefined FUN_147a0a95a(void)

void FUN_147a0a95a(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (((local_24 == 0) && ((*(byte *)(param_1 + 0xc61) & 1) != 0)) &&
     (*(longlong *)(param_1 + 0xaf8) != 0)) {
    FUN_140737aec(*(longlong *)(param_1 + 0xaf8),0);
  }
  *(byte *)(param_1 + 0xc61) = *(byte *)(param_1 + 0xc61) & 0xfe | iVar1 != 0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0aa2c FUN_147a0aa2c body=243 status=ok
// SIG undefined FUN_147a0aa2c(void)

void FUN_147a0aa2c(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147d1bbc6(param_1,iVar1 != 0,local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0ab2a FUN_147a0ab2a body=337 status=ok
// SIG undefined FUN_147a0ab2a(void)

void FUN_147a0ab2a(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [36];
  int local_34;
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
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
  FUN_147d1bc2a(param_1,iVar1 != 0,local_30,local_34 != 0);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0ac80 FUN_147a0ac80 body=158 status=ok
// SIG undefined FUN_147a0ac80(void)

void FUN_147a0ac80(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147d19e2e(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0ad26 FUN_147a0ad26 body=311 status=ok
// SIG undefined FUN_147a0ad26(void)

void FUN_147a0ad26(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  int local_28;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a0ae5e(param_1,local_20,local_24,local_28 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0ae5e FUN_147a0ae5e body=312 status=ok
// SIG undefined FUN_147a0ae5e(void)

void FUN_147a0ae5e(longlong param_1,longlong param_2,float param_3,byte param_4)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  float *pfVar5;
  uint uVar6;
  undefined1 auStack_68 [44];
  float local_3c;
  longlong local_38;
  longlong *local_30;
  float *local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0xed8) != *(int *)(param_1 + 0xf04)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar6 = (uint)param_2 & 0xffff;
    lVar4 = param_1 + 0xf08;
    if (*(longlong *)(param_1 + 0xf10) != 0) {
      lVar4 = *(longlong *)(param_1 + 0xf10);
    }
    iVar2 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0xf18) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar6) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar2 != -1) {
      do {
        plVar3 = (longlong *)(*(longlong *)(param_1 + 0xed0) + (longlong)iVar2 * 0x14);
        if (*plVar3 == param_2) goto LAB_147a0ae98;
        iVar2 = *(int *)((longlong)plVar3 + 0xc);
      } while (iVar2 != -1);
    }
  }
  plVar3 = (longlong *)0x0;
LAB_147a0ae98:
  pfVar5 = (float *)(plVar3 + 1);
  if (plVar3 == (longlong *)0x0) {
    pfVar5 = (float *)0x0;
  }
  local_3c = param_3;
  local_38 = param_2;
  if ((ABS(param_3) <= 1e-05 & param_4) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
  }
  if (pfVar5 == (float *)0x0) {
    local_30 = &local_38;
    local_28 = &local_3c;
    FUN_144a405ac((longlong *)(param_1 + 0xed0),local_1c,&local_30,0);
  }
  else {
    *pfVar5 = param_3;
  }
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a0afb2 FUN_147a0afb2 body=341 status=ok
// SIG undefined FUN_147a0afb2(void)

void FUN_147a0afb2(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [36];
  int local_34;
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
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
  (**(code **)(*param_1 + 0xc78))(param_1,iVar1 != 0,local_30,local_34 != 0);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0b10e FUN_147a0b10e body=328 status=ok
// SIG undefined FUN_147a0b10e(void)

void FUN_147a0b10e(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [44];
  int local_2c;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  lVar2 = local_28;
  iVar1 = local_2c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_28 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(local_28);
  }
  if ((lVar2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(lVar2);
  }
  *(longlong *)(param_1 + 0xaf0) = lVar2;
  if (iVar1 != 0) {
    FUN_14348cf12(param_1,1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0b258 FUN_147a0b258 body=156 status=ok
// SIG undefined FUN_147a0b258(void)

void FUN_147a0b258(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147d19e42(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0b2f6 FUN_147a0b2f6 body=156 status=ok
// SIG undefined FUN_147a0b2f6(void)

void FUN_147a0b2f6(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14348c2a4(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0b39a FUN_147a0b39a body=241 status=ok
// SIG undefined FUN_147a0b39a(void)

void FUN_147a0b39a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  int local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14164d616(param_1,local_1c,local_20 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0b48c FUN_147a0b48c body=163 status=ok
// SIG undefined FUN_147a0b48c(void)

void FUN_147a0b48c(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0xaa8))(param_1,local_20,0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0b534 FUN_147a0b534 body=137 status=ok
// SIG undefined FUN_147a0b534(void)

void FUN_147a0b534(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_14);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_14);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0b5c2 FUN_147a0b5c2 body=137 status=ok
// SIG undefined FUN_147a0b5c2(void)

void FUN_147a0b5c2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_14);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_14);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0b64c FUN_147a0b64c body=214 status=ok
// SIG undefined FUN_147a0b64c(void)

void FUN_147a0b64c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_78 [32];
  longlong local_58 [6];
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[4] = 0;
  local_58[5] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140ee6a9c(param_1,plVar1);
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0b752 FUN_147a0b752 body=8 status=ok
// SIG undefined FUN_147a0b752(void)

void FUN_147a0b752(longlong param_1)

{
  *(byte *)(param_1 + 0xc72) = *(byte *)(param_1 + 0xc72) | 8;
  return;
}



// FUNCTION 147a0b75a FUN_147a0b75a body=156 status=ok
// SIG undefined FUN_147a0b75a(void)

void FUN_147a0b75a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1436b4014(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0b7f8 FUN_147a0b7f8 body=82 status=ok
// SIG undefined FUN_147a0b7f8(void)

void FUN_147a0b7f8(longlong param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  bVar1 = *(byte *)(param_1 + 0xc61);
  bVar2 = bVar1 & 1;
  if ((bVar2 != 0) && (*(longlong *)(param_1 + 0xaf8) != 0)) {
    FUN_140737aec(*(longlong *)(param_1 + 0xaf8),0);
    bVar1 = *(byte *)(param_1 + 0xc61);
  }
  *(byte *)(param_1 + 0xc61) = (bVar1 & 0xfe | bVar2) ^ 1;
  return;
}



// FUNCTION 147a0b84e FUN_147a0b84e body=150 status=ok
// SIG undefined FUN_147a0b84e(void)

void FUN_147a0b84e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a0b8e6(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0b8e6 FUN_147a0b8e6 body=105 status=ok
// SIG undefined FUN_147a0b8e6(void)

void FUN_147a0b8e6(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x668);
  if (lVar1 != 0) {
    lVar2 = FUN_144a74fb4();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         == lVar2 + 0x30)) && ((*(byte *)(param_1 + 0xc68) & 4) != 0)) {
      if (*(longlong *)(param_1 + 0xe50) != 0) {
        *(byte *)(param_1 + 0xc62) = *(byte *)(param_1 + 0xc62) & 0xfb;
      }
      *(byte *)(param_1 + 0xc68) = *(byte *)(param_1 + 0xc68) & 0xfb;
    }
  }
  return;
}



// FUNCTION 147a0b950 FUN_147a0b950 body=185 status=ok
// SIG undefined FUN_147a0b950(void)

void FUN_147a0b950(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = local_20;
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  FUN_147a0ba0a(param_1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0ba0a FUN_147a0ba0a body=117 status=ok
// SIG undefined FUN_147a0ba0a(void)

void FUN_147a0ba0a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (((*(byte *)(param_1 + 0xc70) & 0x20) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0xae8), plVar1 != (longlong *)0x0)) {
    local_18 = *param_2;
    if ((local_18 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    (**(code **)(*plVar1 + 0x2d0))(plVar1,&local_18);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0bb9c FUN_147a0bb9c body=75 status=ok
// SIG undefined FUN_147a0bb9c(void)

void FUN_147a0bb9c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_140be5e7c(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0bbe8 FUN_147a0bbe8 body=127 status=ok
// SIG undefined FUN_147a0bbe8(void)

void FUN_147a0bbe8(longlong param_1,byte param_2)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = param_1 + 0xd90;
  if (*(byte **)(param_1 + 0xdb0) == (byte *)0x0) {
    if (param_2 == 0) {
      return;
    }
  }
  else {
    if ((**(byte **)(param_1 + 0xdb0) & 1) == param_2) {
      return;
    }
    if (param_2 == 0) {
      FUN_1405f3418(lVar1);
      return;
    }
  }
  cVar2 = FUN_14118ad78(param_1,lVar1);
  if (cVar2 == '\0') {
    return;
  }
  *(longlong *)(param_1 + 0xdb8) = param_1;
  FUN_14082bc44(lVar1,param_1,param_1 + 0x40);
  FUN_14082bc44(lVar1,param_1,param_1 + 0xf30);
  return;
}



// FUNCTION 147a0bc68 FUN_147a0bc68 body=53 status=ok
// SIG undefined FUN_147a0bc68(void)

void FUN_147a0bc68(longlong *param_1)

{
  undefined4 uVar1;
  
  if (((byte *)param_1[0xc] == (byte *)0x0) || ((*(byte *)param_1[0xc] & 1) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0xce0))(param_1);
  }
  FUN_147a0bbe8(param_1,uVar1);
  return;
}



// FUNCTION 147a0bc9e FUN_147a0bc9e body=267 status=ok
// SIG undefined FUN_147a0bc9e(void)

void FUN_147a0bc9e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  byte local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_144a81888();
  if (lVar2 != 0) {
    local_40 = 0;
    if ((*(byte *)(param_1 + 0xc68) & 2) == 0) {
      local_38 = 1;
    }
    else if (*(int *)(param_1 + 0xc88) < 1) {
      local_38 = 3;
    }
    else {
      local_40 = param_1 + 0xc80;
      local_38 = *(byte *)(param_1 + 0xc7d) ^ 3;
    }
    local_34 = *(undefined4 *)(param_1 + 0x854);
    if (*(longlong *)(param_1 + 0xae8) != 0) {
      FUN_1478f6964(*(longlong *)(param_1 + 0xae8),&local_40);
    }
    iVar1 = *(int *)(param_1 + 0xb80);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0xb78);
      lVar3 = 0;
      do {
        FUN_1478f6964(*(undefined8 *)(lVar2 + lVar3),&local_40);
        lVar3 = lVar3 + 8;
      } while ((longlong)iVar1 * 8 != lVar3);
    }
    if (*(longlong *)(param_1 + 0xaf8) != 0) {
      FUN_1478f6964(*(longlong *)(param_1 + 0xaf8),&local_40);
    }
    FUN_140729912(param_1);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0bdb8 FUN_147a0bdb8 body=258 status=ok
// SIG undefined FUN_147a0bdb8(void)

void FUN_147a0bdb8(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_144a81888();
  uVar4 = 0;
  uVar5 = 0;
  if (lVar2 != 0) {
    plVar3 = (longlong *)FUN_144a81888(param_1);
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x388))(plVar3);
    uVar5 = uVar4;
    if (plVar3 != (longlong *)0x0) {
      iVar1 = *(int *)(param_1 + 0x854);
      if ((-1 < (longlong)iVar1) && (iVar1 < (int)plVar3[1])) {
        uVar5 = *(undefined4 *)(*(longlong *)(*plVar3 + (longlong)iVar1 * 8) + 0xec);
      }
    }
  }
  FUN_140002266(local_40,L"\nRequiredBones(%d) NumVerts(%d)",*(undefined4 *)(param_1 + 0xd58),uVar5)
  ;
  FUN_1407ec8fc(&local_30,param_2,local_40);
  if (&local_30 == param_2) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_30;
    local_30 = 0;
    *(undefined4 *)(param_2 + 1) = (undefined4)local_28;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_28._4_4_;
    local_28 = 0;
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0bebc FUN_147a0bebc body=135 status=ok
// SIG undefined FUN_147a0bebc(void)

ulonglong FUN_147a0bebc(longlong param_1)

{
  char cVar1;
  uint uVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (((~*(byte *)(param_1 + 0xc71) & 9) == 0) &&
     (*(int *)(param_1 + 0xed8) == *(int *)(param_1 + 0xf04))) {
    if (*(longlong *)(param_1 + 0xae8) == 0) {
      uVar3 = 0;
    }
    else {
      uVar2 = FUN_1478f6dfa();
      uVar3 = (ulonglong)uVar2;
    }
  }
  if (((*(byte *)(param_1 + 0x89f) & 0x40) == 0) && (*(char *)(param_1 + 0x89c) != '\0')) {
    if (*(longlong *)(param_1 + 0xae8) != 0) {
      cVar1 = FUN_1478f0a24();
      if ((cVar1 != '\0') && (*(char *)(param_1 + 0x89c) == '\x02')) goto LAB_147a0bf25;
    }
    uVar3 = 0;
  }
  else {
LAB_147a0bf25:
    uVar3 = CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 & (*(byte *)(param_1 + 0xc70) & 8) == 0);
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 147a0bf44 FUN_147a0bf44 body=22 status=ok
// SIG undefined FUN_147a0bf44(void)

bool FUN_147a0bf44(longlong param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if ((*(byte *)(param_1 + 0x89f) & 0x40) == 0) {
    bVar1 = *(char *)(param_1 + 0x89c) == '\0';
  }
  return bVar1;
}



// FUNCTION 147a0bf5a FUN_147a0bf5a body=238 status=ok
// SIG undefined FUN_147a0bf5a(void)

undefined8 FUN_147a0bf5a(longlong *param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  
  cVar1 = FUN_144729dda(param_1 + 0xcd);
  if ((cVar1 == '\0') || ((*(byte *)((longlong)param_1 + 0x8a2) & 4) != 0)) {
    if (DAT_14c872be0 == *(uint *)(param_1 + 0x22e)) {
      bVar3 = 0;
    }
    else {
      bVar3 = (**(code **)(*param_1 + 0xcf8))(param_1);
      bVar3 = bVar3 ^ 1;
    }
    bVar2 = 1;
    if ((*(byte *)((longlong)param_1 + 0xc71) & 4) == 0) {
      bVar2 = bVar3 & (*(byte *)((longlong)param_1 + 0xc71) & 2) == 0;
    }
    if ((3 < *(byte *)((longlong)param_1 + 0x89c)) &&
       ((*(byte *)((longlong)param_1 + 0x89f) & 0x40) == 0)) {
      bVar3 = (**(code **)(*param_1 + 0xbb0))(param_1);
      bVar2 = bVar2 & bVar3;
    }
    if ((((bVar2 != 0) && ((*(byte *)((longlong)param_1 + 0x9c) & 1) != 0)) &&
        ((param_1[0x15d] != 0 || (param_1[0x15f] != 0)))) &&
       ((*(byte *)(param_1 + 0x18e) & 0x10) == 0)) {
      lVar4 = param_1[0x16];
      if (lVar4 == 0) {
        lVar4 = FUN_1448abda6(param_1);
      }
      if (((*(char *)(lVar4 + 0x154) < '\0') && (lVar4 = *(longlong *)(lVar4 + 0x30), lVar4 != 0))
         && (*(int *)(lVar4 + 0xa8) != 0)) {
        return CONCAT71((int7)((ulonglong)lVar4 >> 8),(*(byte *)(param_1 + 0x18e) & 8) == 0);
      }
    }
  }
  return 0;
}



// FUNCTION 147a0c048 FUN_147a0c048 body=259 status=ok
// SIG undefined FUN_147a0c048(void)

void FUN_147a0c048(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  FUN_1448ed74c();
  cVar1 = FUN_144729dda(param_1 + 0x668);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 0x668);
    if (lVar2 != 0) {
      lVar3 = FUN_144a74fb4();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        if (*(longlong *)(lVar2 + 0xae8) != 0) {
          FUN_1405f5e52(*(longlong *)(lVar2 + 0xae8),param_1);
        }
        lVar3 = FUN_144a81888(param_1);
        if (lVar3 != 0) {
          if (*(int *)(lVar2 + 0xf04) < *(int *)(lVar2 + 0xed8)) {
            uVar4 = FUN_144a81888(param_1);
            FUN_1478d3b40(uVar4,lVar2 + 0xed0,param_1 + 0x7c0,param_1 + 0x810);
          }
          if (*(int *)(param_1 + 0xf04) < *(int *)(param_1 + 0xed8)) {
            uVar4 = FUN_144a81888(param_1);
            FUN_1478d3b40(uVar4,param_1 + 0xed0,param_1 + 0x7c0,param_1 + 0x810);
          }
        }
      }
    }
  }
  FUN_1448c6f34(param_1);
  return;
}



// FUNCTION 147a0c152 FUN_147a0c152 body=497 status=ok
// SIG undefined FUN_147a0c152(void)

/* WARNING: Removing unreachable block (ram,0x000147a0c2b1) */

void FUN_147a0c152(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = param_1;
  local_90 = param_2;
  if (param_2 != param_1) {
    FUN_144ade160(param_1 + 0x10,param_2 + 0x10);
    FUN_144aa2ab0(param_1,param_2);
    local_80 = (longlong *)(param_1 + 0x30);
    FUN_144b1e478(local_80,param_2 + 0x30);
    local_a0 = (longlong *)(param_1 + 0x20);
    FUN_144723bcc(local_a0,*(undefined4 *)(param_2 + 0x28));
    local_88 = (longlong)*(int *)(param_1 + 0x38);
    if (0 < local_88) {
      lVar8 = 0;
      do {
        plVar10 = (longlong *)(lVar8 * 0x10 + *(longlong *)(local_90 + 0x20));
        iVar2 = *(int *)(local_98 + 0x28);
        *(uint *)(local_98 + 0x28) = iVar2 + 1U;
        if (*(uint *)(local_98 + 0x2c) < iVar2 + 1U) {
          FUN_1474d86f8(local_a0,iVar2);
        }
        lVar3 = *local_a0;
        puVar1 = (undefined8 *)(lVar3 + (longlong)iVar2 * 0x10);
        *puVar1 = 0;
        puVar1[1] = 0;
        local_68 = *(undefined8 *)(*local_80 + lVar8 * 8);
        lVar7 = (longlong)(int)plVar10[1];
        if (lVar7 != 0) {
          plVar9 = (longlong *)(lVar3 + (longlong)iVar2 * 0x10);
          lVar3 = *plVar10;
          lVar11 = 0;
          do {
            uVar5 = FUN_14479d2ce(&local_68);
            FUN_1474d8648(&local_78,uVar5);
            iVar2 = (int)plVar9[1];
            *(uint *)(plVar9 + 1) = iVar2 + 1U;
            if (*(uint *)((longlong)plVar9 + 0xc) < iVar2 + 1U) {
              FUN_1474d877e(plVar9,iVar2);
            }
            lVar4 = *plVar9;
            lVar6 = (longlong)iVar2 * 0x10;
            *(undefined8 *)(lVar4 + lVar6) = 0;
            *(undefined8 *)(lVar4 + lVar6) = local_78;
            *(undefined4 *)(lVar4 + 8 + lVar6) = (undefined4)local_70;
            *(undefined4 *)(lVar4 + 0xc + lVar6) = local_70._4_4_;
            local_70 = 0;
            local_78 = 0;
            uVar5 = FUN_14479d2ce(&local_68);
            FUN_1449b16b6(uVar5,*(undefined8 *)(lVar4 + lVar6),*(undefined8 *)(lVar3 + lVar11),1);
            lVar11 = lVar11 + 0x10;
          } while (lVar7 * 0x10 != lVar11);
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 != local_88);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0c344 FUN_147a0c344 body=144 status=ok
// SIG undefined FUN_147a0c344(void)

void FUN_147a0c344(longlong *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  
  FUN_147a14e9a(param_2,param_1);
  param_1[2] = param_2;
  if (*(char *)(param_2 + 0xfa) == '\x01') {
    lVar2 = FUN_14479d2ce(param_2 + 0x38);
    if (lVar2 != 0) {
      uVar3 = FUN_14479d2ce(param_2 + 0x40);
      plVar4 = (longlong *)FUN_144a98104(uVar3,0);
      uVar1 = *(uint *)(param_1 + 1);
      if ((ulonglong)uVar1 != 0) {
        lVar2 = 0;
        uVar8 = 0;
        do {
          puVar6 = (undefined8 *)
                   ((longlong)*(int *)(*(longlong *)(param_1[2] + 0x70) + uVar8 * 4) * 0x60 +
                   *plVar4);
          puVar7 = (undefined8 *)(*param_1 + lVar2);
          for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          uVar8 = uVar8 + 1;
          lVar2 = lVar2 + 0x60;
        } while (uVar1 != uVar8);
      }
    }
  }
  return;
}



// FUNCTION 147a0c3d4 FUN_147a0c3d4 body=67 status=ok
// SIG undefined FUN_147a0c3d4(void)

void FUN_147a0c3d4(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0xe78);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0xe78) = 0;
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    FUN_14019f46a(param_1);
    return;
  }
  return;
}



// FUNCTION 147a0c418 FUN_147a0c418 body=521 status=ok
// SIG undefined FUN_147a0c418(void)

undefined8 FUN_147a0c418(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = 1;
  if (*(int *)(param_1 + 0x38) == *(int *)(param_2 + 0x38)) {
    if (*(int *)(param_1 + 0x38) < 1) {
      uVar3 = 0;
    }
    else {
      lVar8 = 0;
      do {
        local_50 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + lVar8 * 8);
        local_68 = lVar8;
        uVar3 = FUN_14479d2ce(&local_50);
        iVar4 = *(int *)(param_2 + 0x38);
        if ((longlong)iVar4 == 0) {
LAB_147a0c5f4:
          uVar3 = 1;
          break;
        }
        lVar8 = *(longlong *)(param_2 + 0x30);
        uVar9 = 0;
        lVar10 = 0;
        while (cVar2 = FUN_1400063ec(lVar8 + uVar9,uVar3), cVar2 == '\0') {
          lVar10 = lVar10 + 0x100000000;
          uVar9 = uVar9 + 8;
          if ((longlong)iVar4 * 8 == uVar9) goto LAB_147a0c5f4;
        }
        if ((int)(~uVar9 >> 3) == 0) goto LAB_147a0c5f4;
        lVar8 = *(longlong *)(param_1 + 0x20);
        lVar12 = local_68 * 0x10;
        iVar4 = *(int *)(lVar8 + 8 + lVar12);
        lVar10 = (lVar10 >> 0x20) * 0x10;
        if (iVar4 != *(int *)(*(longlong *)(param_2 + 0x20) + 8 + lVar10)) goto LAB_147a0c5f4;
        if (0 < iVar4) {
          lVar11 = 0;
          do {
            lVar5 = (longlong)*(int *)(*(longlong *)(param_2 + 0x10) + 8 + lVar10);
            if (lVar5 == 0) goto LAB_147a0c5f4;
            plVar7 = (longlong *)
                     (lVar11 * 0x14 + *(longlong *)(*(longlong *)(param_1 + 0x10) + lVar12));
            lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x10) + lVar10);
            lVar6 = 0;
            while (((*(int *)(lVar1 + 0x10 + lVar6) != (int)plVar7[2] ||
                    (*(longlong *)(lVar1 + 8 + lVar6) != plVar7[1])) ||
                   (*(longlong *)(lVar1 + lVar6) != *plVar7))) {
              lVar6 = lVar6 + 0x14;
              if (lVar5 * 0x14 == lVar6) goto LAB_147a0c5f4;
            }
            iVar4 = (int)(lVar6 >> 2) * -0x33333333;
            if (iVar4 == -1) goto LAB_147a0c5f4;
            local_58 = *(longlong *)(lVar8 + lVar12);
            local_60 = *(longlong *)(*(longlong *)(param_2 + 0x20) + lVar10);
            uVar3 = FUN_14479d2ce(&local_50);
            cVar2 = FUN_14470ec92(uVar3,*(undefined8 *)(local_58 + lVar11 * 0x10),
                                  *(undefined8 *)(local_60 + (longlong)iVar4 * 0x10),0);
            if (cVar2 == '\0') goto LAB_147a0c5f4;
            lVar11 = lVar11 + 1;
            lVar8 = *(longlong *)(param_1 + 0x20);
          } while (lVar11 < *(int *)(lVar8 + 8 + lVar12));
        }
        lVar8 = local_68 + 1;
        uVar3 = 0;
      } while (lVar8 < *(int *)(param_1 + 0x38));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 147a0c622 FUN_147a0c622 body=84 status=ok
// SIG undefined FUN_147a0c622(void)

void FUN_147a0c622(longlong *param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_144a85a6c();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_147a0c659;
  }
  param_2 = 0;
LAB_147a0c659:
                    /* WARNING: Could not recover jumptable at 0x000147a0c673. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xaa8))(param_1,param_2,param_3);
  return;
}



// FUNCTION 147a0c694 FUN_147a0c694 body=40 status=ok
// SIG undefined FUN_147a0c694(void)

void FUN_147a0c694(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x4a0))(param_2,&DAT_14cadad64);
  FUN_1401bf202(param_2);
  return;
}



// FUNCTION 147a0c6bc FUN_147a0c6bc body=88 status=ok
// SIG undefined FUN_147a0c6bc(void)

void FUN_147a0c6bc(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  
  iVar2 = *(int *)(param_1 + 0x714);
  cVar3 = FUN_144729dda(param_1 + 0x668);
  if ((cVar3 == '\0') &&
     (lVar1 = param_1 + (longlong)iVar2 * 0x10, param_2 < *(int *)(lVar1 + 0x880))) {
    *(undefined1 *)(*(longlong *)(lVar1 + 0x878) + (longlong)param_2) = 2;
    FUN_14102729c(param_1);
    return;
  }
  return;
}



// FUNCTION 147a0c714 FUN_147a0c714 body=113 status=ok
// SIG undefined FUN_147a0c714(void)

void FUN_147a0c714(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  FUN_1479f20c4();
  plVar1 = *(longlong **)(param_1 + 0x8a8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0xb0))(plVar1,param_2);
  }
  iVar3 = *(int *)(param_1 + 0xd78);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xd70) + lVar4 * 8);
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x138) != 0)) {
        FUN_147c48a58(lVar2,param_2);
        iVar3 = *(int *)(param_1 + 0xd78);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  return;
}



// FUNCTION 147a0c786 FUN_147a0c786 body=59 status=ok
// SIG undefined FUN_147a0c786(void)

void FUN_147a0c786(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  FUN_1479f20c4();
  plVar1 = *(longlong **)(param_1 + 0x8a8);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147a0c7b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xb0))(plVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 147a0c7c2 FUN_147a0c7c2 body=210 status=ok
// SIG undefined FUN_147a0c7c2(void)

float FUN_147a0c7c2(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  
  if ((int)param_1[0x1af] == 0) {
    lVar3 = (**(code **)(*param_1 + 0xb98))(param_1);
    fVar6 = 0.0;
    if ((lVar3 != 0) && (iVar1 = *(int *)(lVar3 + 0x48), 0 < iVar1)) {
      lVar4 = 0;
      do {
        plVar2 = *(longlong **)(*(longlong *)(lVar3 + 0x40) + lVar4 * 8);
        if ((plVar2 != (longlong *)0x0) && ((param_2 == 0 || (plVar2[5] == param_2)))) {
          fVar5 = (float)(**(code **)(*plVar2 + 0x2b8))(plVar2,param_1);
          fVar6 = fVar6 + fVar5;
          iVar1 = *(int *)(lVar3 + 0x48);
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < iVar1);
    }
  }
  else {
    fVar6 = 0.0;
    if (0 < (int)param_1[0x1af]) {
      lVar3 = 0;
      do {
        plVar2 = (longlong *)FUN_140aa2aee(*(undefined8 *)(param_1[0x1ae] + lVar3 * 8));
        if ((plVar2 != (longlong *)0x0) && ((param_2 == 0 || (plVar2[5] == param_2)))) {
          fVar5 = (float)(**(code **)(*plVar2 + 0x2b8))(plVar2,param_1);
          fVar6 = fVar6 + fVar5;
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < (int)param_1[0x1af]);
    }
  }
  return fVar6;
}



// FUNCTION 147a0c8b6 FUN_147a0c8b6 body=379 status=ok
// SIG undefined FUN_147a0c8b6(void)

undefined8 FUN_147a0c8b6(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [64];
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar1 = param_1 + -0x2a8;
  lVar5 = (**(code **)(*(longlong *)(param_1 + -0x2a8) + 0xb98))(lVar1);
  if (lVar5 != 0) {
    if ((((ABS(*(double *)(param_1 + -0x28) - *(double *)(param_1 + -0x20)) <= 9.999999747378752e-05
          ) && (ABS(*(double *)(param_1 + -0x28) - *(double *)(param_1 + -0x18)) <=
                9.999999747378752e-05)) &&
        (ABS(*(double *)(param_1 + -0x20) - *(double *)(param_1 + -0x18)) <= 9.999999747378752e-05))
       && (iVar2 = *(int *)(lVar5 + 0x48), 0 < (longlong)iVar2)) {
      lVar6 = 0;
      do {
        lVar3 = *(longlong *)(*(longlong *)(lVar5 + 0x40) + lVar6 * 8);
        if (lVar3 != 0) {
          iVar4 = FUN_144909502(lVar1,*(undefined8 *)(lVar3 + 0x28));
          if (iVar4 != -1) {
            FUN_140084aae(lVar1,local_d8,iVar4,param_1 + -0x68);
            if (9.999999747378752e-05 < ABS(local_98 * local_90 * local_88)) {
              (**(code **)(*param_2 + 0x28))(param_2,lVar3,local_d8);
            }
          }
        }
        lVar6 = lVar6 + 1;
      } while (iVar2 != lVar6);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0ca32 FUN_147a0ca32 body=26 status=ok
// SIG undefined FUN_147a0ca32(void)

void FUN_147a0ca32(longlong param_1)

{
  FUN_1448ee24a();
  *(byte *)(param_1 + 0x89e) = *(byte *)(param_1 + 0x89e) | 1;
  return;
}



// FUNCTION 147a0ca4c FUN_147a0ca4c body=26 status=ok
// SIG undefined FUN_147a0ca4c(void)

void FUN_147a0ca4c(longlong param_1)

{
  FUN_143491266();
  *(byte *)(param_1 + 0xc71) = *(byte *)(param_1 + 0xc71) & 0xdf;
  return;
}



// FUNCTION 147a0ca66 FUN_147a0ca66 body=26 status=ok
// SIG undefined FUN_147a0ca66(void)

void FUN_147a0ca66(longlong param_1)

{
  FUN_147a0ca80();
  *(byte *)(param_1 + 0xc71) = *(byte *)(param_1 + 0xc71) & 0xdf;
  return;
}



// FUNCTION 147a0ca80 FUN_147a0ca80 body=91 status=ok
// SIG undefined FUN_147a0ca80(void)

void FUN_147a0ca80(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x7b0) != 0) {
    *(undefined8 *)(param_1 + 0x7b0) = 0;
    plVar3 = *(longlong **)(param_1 + 0x7b8);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x7b8) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000147a0cad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 147a0cadc FUN_147a0cadc body=120 status=ok
// SIG undefined FUN_147a0cadc(void)

undefined8 FUN_147a0cadc(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  local_28 = 0;
  FUN_14009d848(&local_30,param_3);
  FUN_1448b6402(param_1 + 0x1140,param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0cb56 FUN_147a0cb56 body=21 status=ok
// SIG undefined FUN_147a0cb56(void)

void FUN_147a0cb56(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0x1140);
    return;
  }
  return;
}



// FUNCTION 147a0cb6c FUN_147a0cb6c body=151 status=ok
// SIG undefined FUN_147a0cb6c(void)

void FUN_147a0cb6c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  FUN_14485c47a(&local_30);
  FUN_147a15e9a(param_1 + 0x730,&local_30);
  if (param_2 != 0) {
    lVar1 = FUN_144a74fb4();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      *(byte *)(param_2 + 0xc71) = *(byte *)(param_2 + 0xc71) & 0xdf;
    }
  }
  *(byte *)(param_1 + 0xc71) = *(byte *)(param_1 + 0xc71) & 0xdf;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0cc04 FUN_147a0cc04 body=91 status=ok
// SIG undefined FUN_147a0cc04(void)

void FUN_147a0cc04(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_14485c47a(&local_20);
  FUN_147a15e9a(param_1 + 0x730,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0cc60 FUN_147a0cc60 body=156 status=ok
// SIG undefined FUN_147a0cc60(void)

void FUN_147a0cc60(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  FUN_14485c47a(&local_38);
  local_30 = &local_38;
  FUN_147a15f4c(param_1 + 0x730);
  if (param_2 != 0) {
    lVar1 = FUN_144a74fb4();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      *(byte *)(param_2 + 0xc71) = *(byte *)(param_2 + 0xc71) & 0xdf;
    }
  }
  *(byte *)(param_1 + 0xc71) = *(byte *)(param_1 + 0xc71) & 0xdf;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0ccfe FUN_147a0ccfe body=96 status=ok
// SIG undefined FUN_147a0ccfe(void)

void FUN_147a0ccfe(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_14485c47a(&local_28);
  local_20 = &local_28;
  FUN_147a15f4c(param_1 + 0x730);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0cd60 FUN_147a0cd60 body=544 status=ok
// SIG undefined FUN_147a0cd60(void)

undefined8
FUN_147a0cd60(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
             undefined4 *param_5,char param_6)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  uint local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_5 = param_4;
  plVar2 = (longlong *)FUN_144a81888();
  if (plVar2 != (longlong *)0x0) {
    lVar6 = param_1 + (longlong)*(int *)(param_1 + 0x718) * 0x40 + 0x10a8;
    uVar3 = (**(code **)(*plVar2 + 0x310))(plVar2);
    uVar1 = FUN_144a750a0(uVar3,param_2);
    local_58 = DAT_14cad2438;
    local_50 = *param_3;
    local_48 = uVar1;
    uVar3 = FUN_145cd07f8();
    puVar4 = (undefined4 *)FUN_147937f22(lVar6,uVar3,&local_58);
    if (((param_6 == '\0') || (uVar1 == 0xffffffff)) || (puVar4 != (undefined4 *)0x0)) {
LAB_147a0cebe:
      if (puVar4 != (undefined4 *)0x0) {
LAB_147a0cec7:
        *param_5 = *puVar4;
        uVar3 = 1;
        goto LAB_147a0cd9f;
      }
    }
    else if (param_6 == '\x02') {
      lVar5 = (**(code **)(*plVar2 + 0x310))(plVar2);
      uVar3 = 0;
      if (((int)uVar1 < 0) || (uVar3 = 0, *(int *)(lVar5 + 0x28) <= (int)uVar1)) goto LAB_147a0cd9f;
      uVar1 = *(uint *)(*(longlong *)(lVar5 + 0x20) + 8 + (ulonglong)uVar1 * 0xc);
      if (uVar1 != 0xffffffff) {
        do {
          local_58 = DAT_14cad2438;
          local_50 = *param_3;
          local_48 = uVar1;
          uVar3 = FUN_145cd07f8();
          puVar4 = (undefined4 *)FUN_147937f22(lVar6,uVar3,&local_58);
          if (puVar4 != (undefined4 *)0x0) goto LAB_147a0cec7;
          lVar5 = (**(code **)(*plVar2 + 0x310))(plVar2);
          uVar3 = 0;
          if (((int)uVar1 < 0) || (*(int *)(lVar5 + 0x28) <= (int)uVar1)) break;
          uVar1 = *(uint *)(*(longlong *)(lVar5 + 0x20) + 8 + (ulonglong)uVar1 * 0xc);
          uVar3 = 0;
        } while (uVar1 != 0xffffffff);
        goto LAB_147a0cd9f;
      }
    }
    else if (param_6 == '\x01') {
      lVar5 = (**(code **)(*plVar2 + 0x310))(plVar2);
      uVar3 = 0;
      if (((int)uVar1 < 0) || (*(int *)(lVar5 + 0x28) <= (int)uVar1)) goto LAB_147a0cd9f;
      uVar1 = *(uint *)(*(longlong *)(lVar5 + 0x20) + 8 + (ulonglong)uVar1 * 0xc);
      if (uVar1 != 0xffffffff) {
        local_58 = DAT_14cad2438;
        local_50 = *param_3;
        local_48 = uVar1;
        uVar3 = FUN_145cd07f8();
        puVar4 = (undefined4 *)FUN_147937f22(lVar6,uVar3,&local_58);
        goto LAB_147a0cebe;
      }
    }
  }
  uVar3 = 0;
LAB_147a0cd9f:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 147a0cf82 FUN_147a0cf82 body=571 status=ok
// SIG undefined FUN_147a0cf82(void)

undefined8
FUN_147a0cf82(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,char param_6)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar4 = param_5;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar4 = *param_4;
    param_4 = param_4 + 1;
    puVar4 = puVar4 + 1;
  }
  plVar2 = (longlong *)FUN_144a81888(param_1);
  if (plVar2 != (longlong *)0x0) {
    lVar6 = param_1 + (longlong)*(int *)(param_1 + 0x718) * 0x40 + 0x10a8;
    uVar3 = (**(code **)(*plVar2 + 0x310))(plVar2);
    uVar1 = FUN_144a750a0(uVar3,param_2);
    local_60 = DAT_14cad2438;
    local_58 = *param_3;
    local_50 = uVar1;
    uVar3 = FUN_145cd0b36();
    puVar4 = (undefined8 *)FUN_147937f22(lVar6,uVar3,&local_60);
    if (((param_6 == '\0') || (uVar1 == 0xffffffff)) || (puVar4 != (undefined8 *)0x0)) {
LAB_147a0d0f2:
      if (puVar4 != (undefined8 *)0x0) {
LAB_147a0d0fb:
        for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
          *param_5 = *puVar4;
          puVar4 = puVar4 + 1;
          param_5 = param_5 + 1;
        }
        uVar3 = 1;
        goto LAB_147a0cfcf;
      }
    }
    else if (param_6 == '\x02') {
      lVar5 = (**(code **)(*plVar2 + 0x310))(plVar2);
      uVar3 = 0;
      if (((int)uVar1 < 0) || (uVar3 = 0, *(int *)(lVar5 + 0x28) <= (int)uVar1)) goto LAB_147a0cfcf;
      uVar1 = *(uint *)(*(longlong *)(lVar5 + 0x20) + 8 + (ulonglong)uVar1 * 0xc);
      if (uVar1 != 0xffffffff) {
        do {
          local_60 = DAT_14cad2438;
          local_58 = *param_3;
          local_50 = uVar1;
          uVar3 = FUN_145cd0b36();
          puVar4 = (undefined8 *)FUN_147937f22(lVar6,uVar3,&local_60);
          if (puVar4 != (undefined8 *)0x0) goto LAB_147a0d0fb;
          lVar5 = (**(code **)(*plVar2 + 0x310))(plVar2);
          uVar3 = 0;
          if (((int)uVar1 < 0) || (*(int *)(lVar5 + 0x28) <= (int)uVar1)) break;
          uVar1 = *(uint *)(*(longlong *)(lVar5 + 0x20) + 8 + (ulonglong)uVar1 * 0xc);
          uVar3 = 0;
        } while (uVar1 != 0xffffffff);
        goto LAB_147a0cfcf;
      }
    }
    else if (param_6 == '\x01') {
      lVar5 = (**(code **)(*plVar2 + 0x310))(plVar2);
      uVar3 = 0;
      if (((int)uVar1 < 0) || (*(int *)(lVar5 + 0x28) <= (int)uVar1)) goto LAB_147a0cfcf;
      uVar1 = *(uint *)(*(longlong *)(lVar5 + 0x20) + 8 + (ulonglong)uVar1 * 0xc);
      if (uVar1 != 0xffffffff) {
        local_60 = DAT_14cad2438;
        local_58 = *param_3;
        local_50 = uVar1;
        uVar3 = FUN_145cd0b36();
        puVar4 = (undefined8 *)FUN_147937f22(lVar6,uVar3,&local_60);
        goto LAB_147a0d0f2;
      }
    }
  }
  uVar3 = 0;
LAB_147a0cfcf:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 147a0d1be FUN_147a0d1be body=538 status=ok
// SIG undefined FUN_147a0d1be(void)

undefined8
FUN_147a0d1be(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
             undefined4 *param_5,char param_6)

{
  undefined4 uVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  uint local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_5 = param_4;
  plVar3 = (longlong *)FUN_144a81888();
  if (plVar3 != (longlong *)0x0) {
    lVar7 = param_1 + (longlong)*(int *)(param_1 + 0x718) * 0x40 + 0x10a8;
    uVar4 = (**(code **)(*plVar3 + 0x310))(plVar3);
    uVar2 = FUN_144a750a0(uVar4,param_2);
    local_58 = DAT_14cad2438;
    local_50 = *param_3;
    local_48 = uVar2;
    uVar4 = FUN_145cd0522();
    puVar5 = (undefined4 *)FUN_147937f22(lVar7,uVar4,&local_58);
    if (((param_6 == '\0') || (uVar2 == 0xffffffff)) || (puVar5 != (undefined4 *)0x0)) {
LAB_147a0d31a:
      if (puVar5 != (undefined4 *)0x0) {
LAB_147a0d323:
        uVar1 = *puVar5;
        *param_5 = uVar1;
        uVar4 = CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
        goto LAB_147a0d1fb;
      }
    }
    else if (param_6 == '\x02') {
      lVar6 = (**(code **)(*plVar3 + 0x310))(plVar3);
      uVar4 = 0;
      if (((int)uVar2 < 0) || (uVar4 = 0, *(int *)(lVar6 + 0x28) <= (int)uVar2)) goto LAB_147a0d1fb;
      uVar2 = *(uint *)(*(longlong *)(lVar6 + 0x20) + 8 + (ulonglong)uVar2 * 0xc);
      if (uVar2 != 0xffffffff) {
        do {
          local_58 = DAT_14cad2438;
          local_50 = *param_3;
          local_48 = uVar2;
          uVar4 = FUN_145cd0522();
          puVar5 = (undefined4 *)FUN_147937f22(lVar7,uVar4,&local_58);
          if (puVar5 != (undefined4 *)0x0) goto LAB_147a0d323;
          lVar6 = (**(code **)(*plVar3 + 0x310))(plVar3);
          uVar4 = 0;
          if (((int)uVar2 < 0) || (*(int *)(lVar6 + 0x28) <= (int)uVar2)) break;
          uVar2 = *(uint *)(*(longlong *)(lVar6 + 0x20) + 8 + (ulonglong)uVar2 * 0xc);
          uVar4 = 0;
        } while (uVar2 != 0xffffffff);
        goto LAB_147a0d1fb;
      }
    }
    else if (param_6 == '\x01') {
      lVar6 = (**(code **)(*plVar3 + 0x310))(plVar3);
      uVar4 = 0;
      if (((int)uVar2 < 0) || (*(int *)(lVar6 + 0x28) <= (int)uVar2)) goto LAB_147a0d1fb;
      uVar2 = *(uint *)(*(longlong *)(lVar6 + 0x20) + 8 + (ulonglong)uVar2 * 0xc);
      if (uVar2 != 0xffffffff) {
        local_58 = DAT_14cad2438;
        local_50 = *param_3;
        local_48 = uVar2;
        uVar4 = FUN_145cd0522();
        puVar5 = (undefined4 *)FUN_147937f22(lVar7,uVar4,&local_58);
        goto LAB_147a0d31a;
      }
    }
  }
  uVar4 = 0;
LAB_147a0d1fb:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 147a0d3da FUN_147a0d3da body=602 status=ok
// SIG undefined FUN_147a0d3da(void)

int FUN_147a0d3da(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4,
                 undefined8 param_5,char param_6)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar5 = 0;
  iVar6 = (int)param_4[1] + -1;
  if ((int)param_4[1] == 0) {
    iVar6 = iVar5;
  }
  FUN_1402980a2(param_5,*param_4,iVar6);
  plVar2 = (longlong *)FUN_144a81888(param_1);
  if (plVar2 == (longlong *)0x0) goto LAB_147a0d433;
  lVar7 = param_1 + (longlong)*(int *)(param_1 + 0x718) * 0x40 + 0x10a8;
  uVar3 = (**(code **)(*plVar2 + 0x310))(plVar2);
  uVar1 = FUN_144a750a0(uVar3,param_2);
  local_60 = DAT_14cad2438;
  local_58 = *param_3;
  local_50 = uVar1;
  uVar3 = FUN_145cd0626();
  lVar4 = FUN_147937f22(lVar7,uVar3,&local_60);
  if (((param_6 == '\0') || (uVar1 == 0xffffffff)) || (lVar4 != 0)) {
LAB_147a0d567:
    if (lVar4 != 0) {
LAB_147a0d570:
      FUN_144a787a6(param_5,lVar4);
      iVar5 = 1;
      goto LAB_147a0d433;
    }
  }
  else if (param_6 == '\x02') {
    lVar4 = (**(code **)(*plVar2 + 0x310))(plVar2);
    iVar5 = 0;
    if (((int)uVar1 < 0) || (*(int *)(lVar4 + 0x28) <= (int)uVar1)) goto LAB_147a0d433;
    uVar1 = *(uint *)(*(longlong *)(lVar4 + 0x20) + 8 + (ulonglong)uVar1 * 0xc);
    if (uVar1 != 0xffffffff) {
      do {
        local_60 = DAT_14cad2438;
        local_58 = *param_3;
        local_50 = uVar1;
        uVar3 = FUN_145cd0626();
        lVar4 = FUN_147937f22(lVar7,uVar3,&local_60);
        if (lVar4 != 0) goto LAB_147a0d570;
        lVar4 = (**(code **)(*plVar2 + 0x310))(plVar2);
        iVar5 = 0;
        if (((int)uVar1 < 0) || (*(int *)(lVar4 + 0x28) <= (int)uVar1)) break;
        uVar1 = *(uint *)(*(longlong *)(lVar4 + 0x20) + 8 + (ulonglong)uVar1 * 0xc);
        iVar5 = 0;
      } while (uVar1 != 0xffffffff);
      goto LAB_147a0d433;
    }
  }
  else if (param_6 == '\x01') {
    lVar4 = (**(code **)(*plVar2 + 0x310))(plVar2);
    iVar5 = 0;
    if (((int)uVar1 < 0) || (*(int *)(lVar4 + 0x28) <= (int)uVar1)) goto LAB_147a0d433;
    uVar1 = *(uint *)(*(longlong *)(lVar4 + 0x20) + 8 + (ulonglong)uVar1 * 0xc);
    if (uVar1 != 0xffffffff) {
      local_60 = DAT_14cad2438;
      local_58 = *param_3;
      local_50 = uVar1;
      uVar3 = FUN_145cd0626();
      lVar4 = FUN_147937f22(lVar7,uVar3,&local_60);
      goto LAB_147a0d567;
    }
  }
  iVar5 = 0;
LAB_147a0d433:
  if (*param_4 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar5;
}



// FUNCTION 147a0d636 FUN_147a0d636 body=104 status=ok
// SIG undefined FUN_147a0d636(void)

undefined8 * FUN_147a0d636(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  FUN_14036294a(param_1,1,1);
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0xb20);
  _Src = *(void **)(param_1 + 0xb18);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_144756262(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 0x60);
  }
  return param_2;
}



// FUNCTION 147a0d69e FUN_147a0d69e body=75 status=ok
// SIG undefined FUN_147a0d69e(void)

void FUN_147a0d69e(longlong param_1)

{
  longlong lVar1;
  
  if ((*(byte *)(param_1 + 0x9c) & 1) != 0) {
    FUN_14072bb4a(param_1);
  }
  lVar1 = *(longlong *)(param_1 + 0x658);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_1 + 0x658);
    }
  }
  *(longlong *)(param_1 + 0x660) = lVar1;
  return;
}



// FUNCTION 147a0d6f5 FUN_147a0d6f5 body=998 status=ok
// SIG undefined FUN_147a0d6f5(void)

void FUN_147a0d6f5(longlong param_1,undefined4 param_2,char param_3,float param_4,uint param_5,
                  byte param_6,byte param_7)

{
  longlong *plVar1;
  float *pfVar2;
  uint uVar3;
  byte bVar4;
  undefined8 uVar5;
  int iVar6;
  byte bVar7;
  longlong lVar8;
  char cVar9;
  undefined4 uVar10;
  int iVar11;
  bool bVar12;
  undefined1 auStack_e8 [32];
  int local_c8;
  undefined1 local_c0;
  longlong *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  int local_84;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  bVar4 = param_7;
  bVar7 = param_6;
  uVar3 = param_5;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(longlong *)(**(longlong **)(param_1 + 0x90) + 0xa8) == 0) {
    bVar12 = false;
  }
  else {
    lVar8 = FUN_140ed3994();
    bVar12 = lVar8 != 0;
  }
  bVar7 = ~bVar4 & bVar7;
  if (param_3 == '\0') {
    local_c8 = *(undefined4 *)(param_1 + 0x18);
    uVar10 = 1;
    if (bVar7 == 0 && !bVar12) {
      uVar10 = local_c8;
    }
    cVar9 = *(char *)(param_1 + 0x8c);
    if (cVar9 == '\0') {
      cVar9 = (&DAT_14cad2a98)[*(byte *)(param_1 + 1)] + '\x01';
      (&DAT_14cad2a98)[*(byte *)(param_1 + 1)] = cVar9;
      *(char *)(param_1 + 0x8c) = cVar9;
    }
  }
  else {
    if (bVar7 == 0 && !bVar12) {
      local_84 = 1;
      if ((*(byte *)(param_1 + 2) & 2) == 0) {
        iVar6 = *(int *)(param_1 + 0x28);
        local_84 = iVar6 + 1;
        if (0 < (longlong)iVar6) {
          lVar8 = 0;
          do {
            pfVar2 = (float *)(*(longlong *)(param_1 + 0x20) + lVar8 * 4);
            if (*pfVar2 <= param_4 && param_4 != *pfVar2) {
              local_84 = (int)lVar8 + 1;
              break;
            }
            lVar8 = lVar8 + 1;
          } while (iVar6 != lVar8);
        }
      }
      else {
        plVar1 = (longlong *)(param_1 + 0x30);
        if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
          lVar8 = param_1 + 0x68;
          if (*(longlong *)(param_1 + 0x70) != 0) {
            lVar8 = *(longlong *)(param_1 + 0x70);
          }
          iVar6 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0x78) - 1U & uVar3) * 4);
          if (iVar6 != -1) {
            do {
              lVar8 = *plVar1 + (longlong)iVar6 * 0x10;
              if (*(uint *)(*plVar1 + (longlong)iVar6 * 0x10) == uVar3) {
                if ((int *)(lVar8 + 4) != (int *)0x0 && lVar8 != 0) {
                  local_84 = *(int *)(lVar8 + 4) + 1;
                  goto LAB_147a0d9cd;
                }
                break;
              }
              iVar6 = *(int *)(lVar8 + 8);
            } while (iVar6 != -1);
          }
        }
        if (*(int *)(param_1 + 100) < *(int *)(param_1 + 0x38)) {
          local_78 = param_1 + 0x40;
          local_80 = 0x100000000;
          local_70 = 0xffffffff;
          local_68 = 0;
          if (*(int *)(param_1 + 0x58) != 0) {
            FUN_1449c0562(&local_80);
          }
          local_98 = local_70;
          uVar5 = local_98;
          local_90 = local_68;
          local_8c = local_64;
          local_a8 = (int *)local_80;
          local_a0 = local_78;
          local_98._4_4_ = (int)((ulonglong)local_70 >> 0x20);
          if (local_98._4_4_ < *(int *)(local_78 + 0x18)) {
            iVar11 = 1;
            iVar6 = local_98._4_4_;
            local_b0 = plVar1;
            local_98 = uVar5;
            do {
              if ((*(int *)(*local_b0 + (longlong)iVar6 * 0x10) < (int)uVar3) &&
                 (iVar6 = *(int *)(*local_b0 + 4 + (longlong)iVar6 * 0x10), local_84 = iVar11,
                 iVar11 <= iVar6)) {
                iVar11 = iVar6;
                local_84 = iVar6;
              }
              local_98 = CONCAT44(local_98._4_4_,(uint)local_98 & ~local_a8._4_4_);
              FUN_1449c0562(&local_a8);
              iVar6 = local_98._4_4_;
              uVar5 = local_98;
            } while (local_98._4_4_ < *(int *)(local_a0 + 0x18));
          }
          local_98 = uVar5;
          local_b0 = (longlong *)&param_5;
          local_a8 = &local_84;
          FUN_140263e2a(plVar1,&local_80,&local_b0,0);
          local_84 = local_84 + 1;
        }
      }
LAB_147a0d9cd:
      if (*DAT_14cad2b00 != 0) {
        local_84 = *DAT_14cad2b00;
      }
      if ((bVar4 == 0) || (local_84 < 2)) {
        if (*(char *)(param_1 + 0x8c) == '\0') {
          cVar9 = (&DAT_14cad2a98)[*(byte *)(param_1 + 1)];
          (&DAT_14cad2a98)[*(byte *)(param_1 + 1)] = cVar9 + '\x01';
          *(char *)(param_1 + 0x8c) = cVar9 + '\x01';
        }
        local_c0 = 1;
        local_c8 = local_84;
        FUN_147a0dadc(param_1,param_2);
      }
      else {
        if (*(char *)(param_1 + 0x8c) == '\0') {
          cVar9 = (&DAT_14cad2a98)[*(byte *)(param_1 + 1)];
          (&DAT_14cad2a98)[*(byte *)(param_1 + 1)] = cVar9 + '\x01';
          *(char *)(param_1 + 0x8c) = cVar9 + '\x01';
        }
        FUN_147a0dcd6(param_1,param_2,(float)local_84 * 0.033333335);
      }
      if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    cVar9 = *(char *)(param_1 + 0x8c);
    if (cVar9 == '\0') {
      cVar9 = (&DAT_14cad2a98)[*(byte *)(param_1 + 1)] + '\x01';
      (&DAT_14cad2a98)[*(byte *)(param_1 + 1)] = cVar9;
      *(char *)(param_1 + 0x8c) = cVar9;
    }
    local_c8 = 1;
    uVar10 = 1;
  }
  local_c0 = 0;
  FUN_147a0dadc(param_1,param_2,cVar9,uVar10);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_e8);
}



// FUNCTION 147a0dadc FUN_147a0dadc body=506 status=ok
// SIG undefined FUN_147a0dadc(void)

void FUN_147a0dadc(undefined1 *param_1,float param_2,ulonglong param_3,int param_4,int param_5,
                  char param_6)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  byte bVar9;
  bool bVar10;
  float fVar11;
  
  *param_1 = 0;
  *(float *)(param_1 + 0x14) = param_2;
  if (param_4 < 2) {
    param_4 = 1;
  }
  *(int *)(param_1 + 4) = param_4;
  param_5 = param_5 - param_5 % param_4;
  if (param_5 < 2) {
    param_5 = 1;
  }
  *(int *)(param_1 + 8) = param_5;
  lVar3 = DAT_14cad2b30;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar1 + 0xc60) == 0x40000002) {
    uVar8 = 0;
  }
  else {
    bVar9 = FUN_144a61b4f();
    uVar8 = (ulonglong)(bVar9 ^ 1);
  }
  lVar2 = DAT_14cad2b18;
  iVar6 = 0;
  bVar10 = false;
  if ((*(int *)(lVar3 + uVar8 * 4) == 0) &&
     ((param_6 == '\0' || (bVar10 = true, *(int *)(param_1 + 0x1c) <= *(int *)(param_1 + 8))))) {
    if (*(int *)(lVar1 + 0xc60) == 0x40000002) {
      uVar8 = 0;
    }
    else {
      bVar9 = FUN_144a61b4f();
      uVar8 = (ulonglong)(bVar9 ^ 1);
    }
    bVar10 = *(int *)(lVar2 + uVar8 * 4) == 1;
  }
  bVar9 = param_1[2];
  param_1[2] = bVar9 & 0xfe | bVar10;
  uVar8 = (param_3 & 0xff) + DAT_14c872be0;
  uVar7 = (int)uVar8 + (int)(uVar8 / 0xffffffff);
  uVar5 = uVar7 % *(uint *)(param_1 + 4);
  bVar9 = bVar9 & 0xe6 | bVar10;
  uVar7 = uVar7 % *(uint *)(param_1 + 8);
  param_1[2] = (uVar7 != 0) << 4 | (uVar5 != 0) << 3 | bVar9;
  if (uVar5 != 0) {
    iVar6 = *(int *)(param_1 + 0x80) + 1;
  }
  *(int *)(param_1 + 0x80) = iVar6;
  if (uVar7 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x84) + 1;
  }
  *(int *)(param_1 + 0x84) = iVar4;
  if (iVar6 < (int)*(uint *)(param_1 + 4) && iVar4 < (int)*(uint *)(param_1 + 8)) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    fVar11 = *(float *)(param_1 + 0xc);
    if (uVar5 != 0) {
      param_2 = fVar11 - param_2;
      goto LAB_147a0dc68;
    }
  }
  else {
    param_1[2] = bVar9;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    fVar11 = *(float *)(param_1 + 0xc);
  }
  param_2 = 0.0;
  if (0.0 <= fVar11) {
    return;
  }
  *(float *)(param_1 + 0x10) = -fVar11;
LAB_147a0dc68:
  *(float *)(param_1 + 0xc) = param_2;
  return;
}



// FUNCTION 147a0dcd6 FUN_147a0dcd6 body=181 status=ok
// SIG undefined FUN_147a0dcd6(void)

void FUN_147a0dcd6(char *param_1,float param_2,float param_3)

{
  float fVar1;
  byte bVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *(float *)(param_1 + 0xc);
  fVar5 = 0.0;
  if (*param_1 != '\0') {
    fVar5 = fVar1;
  }
  *param_1 = '\x01';
  *(float *)(param_1 + 0x14) = param_2;
  bVar2 = param_1[2];
  bVar3 = bVar2 | 1;
  param_1[2] = bVar3;
  fVar5 = fVar5 - param_2;
  *(float *)(param_1 + 0xc) = fVar5;
  if (0.0 <= fVar5) {
    param_1[0x10] = '\0';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    bVar3 = bVar2 | 0x19;
  }
  else {
    fVar4 = -fVar5;
    if (-fVar5 <= param_3) {
      fVar4 = param_3;
    }
    *(float *)(param_1 + 0x10) = fVar4;
    fVar5 = fVar5 + fVar4;
    *(float *)(param_1 + 0xc) = fVar5;
    if (fVar5 < 0.0) {
      FUN_145d03cb4(L"TPO Time: %.3f | Orig TPO Time: %.3f | DT: %.3f | LookAheadAmount: %.3f\n",
                    (double)fVar5,(double)fVar1,(double)param_2,(double)fVar4);
      bVar3 = param_1[2];
    }
    bVar3 = bVar3 & 0xe7;
  }
  param_1[2] = bVar3;
  return;
}



// FUNCTION 147a0dd8b FUN_147a0dd8b body=289 status=ok
// SIG undefined FUN_147a0dd8b(void)

void FUN_147a0dd8b(longlong param_1,undefined4 param_2,byte param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  float fVar12;
  
  iVar1 = *(int *)(param_1 + 0x98);
  if ((longlong)iVar1 == 0) {
    bVar10 = 0;
    bVar11 = 1;
    iVar7 = 0x7fffffff;
    fVar12 = 0.0;
    bVar9 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x90);
    fVar12 = 0.0;
    iVar7 = 0x7fffffff;
    bVar11 = 1;
    lVar8 = 0;
    bVar9 = 0;
    bVar10 = 0;
    do {
      plVar4 = *(longlong **)(lVar3 + lVar8);
      cVar5 = (**(code **)(*plVar4 + 0x4e8))(plVar4);
      if (cVar5 != '\0') {
        bVar9 = bVar9 | *(byte *)((longlong)plVar4 + 0x89f) >> 6;
        if (fVar12 <= *(float *)(plVar4 + 0x10b)) {
          fVar12 = *(float *)(plVar4 + 0x10b);
        }
        bVar6 = (**(code **)(*plVar4 + 0xbb0))(plVar4);
        bVar10 = bVar10 | bVar6;
        bVar6 = (**(code **)(*plVar4 + 3000))(plVar4);
        bVar11 = bVar11 & bVar6;
        iVar2 = *(int *)((longlong)plVar4 +
                        (ulonglong)((*(byte *)(param_1 + 2) & 4) == 0) * 4 + 0x850);
        if (iVar2 <= iVar7) {
          iVar7 = iVar2;
        }
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar1 * 8 != lVar8);
    bVar10 = bVar10 & 1;
  }
  FUN_147a0d6f5(param_1,param_2,bVar9 & 1,fVar12,iVar7,param_3 & bVar10,bVar11);
  return;
}



// FUNCTION 147a0deac FUN_147a0deac body=202 status=ok
// SIG undefined FUN_147a0deac(void)

void FUN_147a0deac(ulonglong param_1)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong *puVar4;
  int iVar5;
  undefined *puVar6;
  
  iVar5 = (int)DAT_14c872be0 + (int)(DAT_14c872be0 / 0xffffffff);
  uVar2 = *(ulonglong *)(param_1 + 0xa8);
  if (*(ulonglong *)(param_1 + 0xa8) == 0) {
    uVar2 = param_1;
  }
  if (DAT_14cad2aa8 != DAT_14cad2ad4) {
    uVar3 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    puVar6 = &DAT_14cad2ad8;
    if (DAT_14cad2ae0 != (undefined *)0x0) {
      puVar6 = DAT_14cad2ae0;
    }
    iVar1 = *(int *)(puVar6 + (ulonglong)(DAT_14cad2ae8 - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
    while (iVar1 != -1) {
      puVar4 = (ulonglong *)(DAT_14cad2aa0 + (longlong)iVar1 * 0x18);
      if (*puVar4 == uVar2) goto LAB_147a0dee8;
      iVar1 = (int)puVar4[2];
    }
  }
  puVar4 = (ulonglong *)0x0;
LAB_147a0dee8:
  if (*(int *)(puVar4[1] + 0x88) == iVar5) {
    return;
  }
  *(int *)(puVar4[1] + 0x88) = iVar5;
  FUN_147a0dd8b();
  return;
}



// FUNCTION 147a0df76 FUN_147a0df76 body=7 status=ok
// SIG undefined FUN_147a0df76(void)

undefined4 FUN_147a0df76(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x848);
}



// FUNCTION 147a0df7e FUN_147a0df7e body=30 status=ok
// SIG undefined FUN_147a0df7e(void)

undefined4 FUN_147a0df7e(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0xa90))();
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(lVar2 + 8);
  }
  return uVar1;
}



// FUNCTION 147a0df9c FUN_147a0df9c body=186 status=ok
// SIG undefined FUN_147a0df9c(void)

longlong * FUN_147a0df9c(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_2 = 0;
  param_2[1] = 0;
  lVar1 = FUN_144a7954a();
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_144a7954a(param_1);
    (**(code **)(*plVar2 + 0x48))(plVar2,&local_28);
    if (&local_28 == param_2) {
      if (local_28 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_28;
      *(undefined4 *)(param_2 + 1) = local_20;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_1c;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  FUN_14020fad6(param_2,L"No_SkeletalMesh");
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147a0e058 FUN_147a0e058 body=188 status=ok
// SIG undefined FUN_147a0e058(void)

void FUN_147a0e058(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0x8a8) != 0) {
    FUN_144a7954a();
    iVar2 = *(int *)(param_1 + 0x6c8);
    *(uint *)(param_1 + 0x6c8) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x6cc) < iVar2 + 1U) {
      FUN_1401ffd16(param_1 + 0x6c0,iVar2);
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x6c0) + (longlong)iVar2 * 4) = 1;
    uVar1 = DAT_14c872be0;
    if (DAT_14c872be0 == *(uint *)(param_1 + 0x724)) {
      iVar2 = *(int *)(param_1 + 0x71c);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x720);
      *(int *)(param_1 + 0x71c) = iVar2;
      *(int *)(param_1 + 0x724) = (int)uVar1;
    }
    *(uint *)(param_1 + 0x720) =
         iVar2 + (uint)(*(int *)(*(longlong *)(param_1 + 0x6c0) +
                                (longlong)(*(int *)(param_1 + 0x6c8) + -1) * 4) == 1) + 1;
    *(byte *)(param_1 + 0x8a1) = *(byte *)(param_1 + 0x8a1) | 0x10;
    FUN_1448c6f34(param_1);
    return;
  }
  return;
}



// FUNCTION 147a0e114 FUN_147a0e114 body=188 status=ok
// SIG undefined FUN_147a0e114(void)

void FUN_147a0e114(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0x8a8) != 0) {
    FUN_144a7954a();
    iVar2 = *(int *)(param_1 + 0x6c8);
    *(uint *)(param_1 + 0x6c8) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x6cc) < iVar2 + 1U) {
      FUN_1401ffd16(param_1 + 0x6c0,iVar2);
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x6c0) + (longlong)iVar2 * 4) = 2;
    uVar1 = DAT_14c872be0;
    if (DAT_14c872be0 == *(uint *)(param_1 + 0x724)) {
      iVar2 = *(int *)(param_1 + 0x71c);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x720);
      *(int *)(param_1 + 0x71c) = iVar2;
      *(int *)(param_1 + 0x724) = (int)uVar1;
    }
    *(uint *)(param_1 + 0x720) =
         iVar2 + (uint)(*(int *)(*(longlong *)(param_1 + 0x6c0) +
                                (longlong)(*(int *)(param_1 + 0x6c8) + -1) * 4) == 1) + 1;
    *(byte *)(param_1 + 0x8a1) = *(byte *)(param_1 + 0x8a1) | 0x10;
    FUN_1448c6f34(param_1);
    return;
  }
  return;
}



// FUNCTION 147a0e1d0 FUN_147a0e1d0 body=65 status=ok
// SIG undefined FUN_147a0e1d0(void)

byte FUN_147a0e1d0(longlong param_1)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = FUN_144729dda(param_1 + 0x668);
  if ((cVar1 == '\0') || ((*(byte *)(param_1 + 0x8a2) & 4) != 0)) {
    bVar2 = 1;
    if (3 < *(byte *)(param_1 + 0x89c)) {
      bVar2 = (*(byte *)(param_1 + 0x89f) & 0x40) >> 6;
    }
  }
  else {
    bVar2 = 0;
  }
  return bVar2;
}



// FUNCTION 147a0e212 FUN_147a0e212 body=212 status=ok
// SIG undefined FUN_147a0e212(void)

void FUN_147a0e212(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  
  if ((*(byte *)(param_1 + 0x9c8) & 1) != 0) {
    fVar6 = (float)FUN_144b21608();
    iVar1 = *(int *)(param_1 + 0x140);
    if ((longlong)iVar1 != 0) {
      lVar4 = *(longlong *)(param_1 + 0x138);
      lVar5 = 0;
      do {
        lVar2 = *(longlong *)(lVar4 + lVar5);
        if (lVar2 != 0) {
          lVar3 = FUN_144a3a302();
          if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
            fVar7 = (float)FUN_144b21608(lVar2);
            if (fVar6 <= fVar7) {
              fVar6 = fVar7;
            }
          }
        }
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar1 * 8 != lVar5);
    }
    lVar4 = *(longlong *)(param_1 + 0xb0);
    if (lVar4 == 0) {
      lVar4 = FUN_1448abda6(param_1);
    }
    *(byte *)(param_1 + 0x89f) =
         *(byte *)(param_1 + 0x89f) & 0xbf |
         (*(double *)(lVar4 + 0x6d0) + -1.0 < (double)fVar6) << 6;
  }
  return;
}



// FUNCTION 147a0e2e6 FUN_147a0e2e6 body=606 status=ok
// SIG undefined FUN_147a0e2e6(void)

void FUN_147a0e2e6(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_198 [40];
  longlong *local_170;
  longlong *local_168;
  longlong *local_160;
  undefined1 local_158 [248];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if ((*(byte *)((longlong)param_1 + 0x9c) & 1) != 0) {
    plVar8 = (longlong *)(**(code **)(*param_1 + 0xa90))();
    plVar9 = (longlong *)FUN_144a7954a(param_1);
    plVar9 = (longlong *)(**(code **)(*plVar9 + 0x3b8))(plVar9);
    iVar11 = (int)plVar8[1];
    if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar11);
    }
    if (*(int *)((longlong)param_2 + 0xc) < iVar11) {
      FUN_147a15a3a(param_2);
      iVar11 = (int)plVar8[1];
    }
    if (iVar11 != 0) {
      plVar8 = (longlong *)*plVar8;
      local_170 = plVar8 + iVar11;
      lVar12 = 0;
      local_168 = param_2;
      do {
        plVar6 = local_168;
        lVar4 = *plVar8;
        iVar11 = (int)local_168[1];
        *(int *)(local_168 + 1) = iVar11 + 1;
        local_160 = plVar8;
        if (*(int *)((longlong)local_168 + 0xc) == iVar11) {
          FUN_147a15aac(local_168,iVar11);
        }
        lVar13 = *plVar6;
        lVar5 = lVar12 * 0x28;
        memmove((void *)(lVar13 + lVar5 + 0x28),(void *)(lVar13 + lVar5),
                (ulonglong)(uint)(iVar11 - (int)lVar12) * 0x28);
        lVar13 = *plVar6;
        *(int *)(lVar13 + lVar5) = (int)lVar12;
        *(undefined8 *)(lVar13 + 4 + lVar5) = 1;
        *(undefined2 *)(lVar13 + 0xc + lVar5) = 0x100;
        puVar2 = (undefined8 *)(lVar13 + 0x10 + lVar5);
        *puVar2 = 0;
        puVar2[1] = 0;
        *(undefined8 *)(lVar13 + 0x20 + lVar5) = 0;
        *(undefined4 *)(lVar13 + 4 + lVar5) = *(undefined4 *)(lVar4 + 0x18);
        *(byte *)(lVar13 + 0xc + lVar5) = *(byte *)(lVar4 + 0x540) >> 1 & 1;
        uVar7 = 1;
        if ((*(byte *)(lVar4 + 0x540) & 1) == 0) {
          uVar7 = FUN_146888846(lVar4 + 0x518);
        }
        lVar1 = lVar13 + lVar5;
        *(undefined1 *)(lVar1 + 0xd) = uVar7;
        FUN_1468200e0(local_158);
        FUN_147d1dc62(lVar4,local_158);
        uVar10 = FUN_140209a84(local_158);
        *(undefined8 *)(lVar1 + 0x10) = uVar10;
        iVar11 = *(int *)(lVar4 + 0x18);
        if ((longlong)iVar11 != 0) {
          plVar8 = (longlong *)(lVar13 + lVar5 + 0x18);
          lVar4 = *(longlong *)(lVar4 + 0x10);
          lVar13 = 0;
          do {
            if (*(longlong *)(*plVar9 + (ulonglong)*(ushort *)(lVar4 + lVar13) * 0x28) != 0) {
              iVar3 = *(int *)(lVar1 + 0x20);
              *(uint *)(lVar1 + 0x20) = iVar3 + 1U;
              if (*(uint *)(lVar1 + 0x24) < iVar3 + 1U) {
                FUN_14488eebe(plVar8,iVar3);
              }
              *(undefined2 *)(*plVar8 + (longlong)iVar3 * 2) = *(undefined2 *)(lVar4 + lVar13);
            }
            *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + *(int *)(lVar4 + 8 + lVar13);
            lVar13 = lVar13 + 0xf8;
          } while ((longlong)iVar11 * 0xf8 - lVar13 != 0);
        }
        lVar12 = lVar12 + 1;
        FUN_1400fd2aa(local_158);
        plVar8 = local_160 + 1;
      } while (plVar8 != local_170);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a0e546 FUN_147a0e546 body=23 status=ok
// SIG undefined FUN_147a0e546(void)

bool FUN_147a0e546(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x618))();
  return -1 < iVar1;
}



// FUNCTION 147a0e55e FUN_147a0e55e body=296 status=ok
// SIG undefined FUN_147a0e55e(void)

longlong FUN_147a0e55e(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x840) != 0) {
    return *(longlong *)(param_1 + 0x840);
  }
  plVar3 = *(longlong **)(param_1 + 0x658);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x660);
    if ((DAT_14c950c29 & plVar3 != (longlong *)0x0) != 0) goto LAB_147a0e629;
    if (plVar3 == (longlong *)0x0) {
      return 0;
    }
LAB_147a0e64a:
    bVar1 = DAT_14c950c29 & plVar3 != (longlong *)0x0;
joined_r0x000147a0e673:
    if (bVar1 != 0) {
      FUN_1456cec3c(plVar3);
    }
  }
  else if (DAT_14c950c29 != 0) {
LAB_147a0e629:
    FUN_1456cec3c(plVar3);
    plVar3 = *(longlong **)(param_1 + 0x658);
    if (plVar3 == (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x660);
      goto LAB_147a0e64a;
    }
    bVar1 = DAT_14c950c29 & 1;
    goto joined_r0x000147a0e673;
  }
  if (*(code **)(*plVar3 + 0x3a8) == (code *)&LAB_144b0892a) {
    lVar2 = plVar3[0x58];
  }
  else {
    lVar2 = (**(code **)(*plVar3 + 0x3a8))(plVar3);
  }
  if (lVar2 == 0) {
    return 0;
  }
  plVar3 = *(longlong **)(param_1 + 0x658);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x660);
    if ((DAT_14c950c29 & plVar3 != (longlong *)0x0) == 0) goto LAB_147a0e5c8;
  }
  else if (DAT_14c950c29 != 1) goto LAB_147a0e5c8;
  FUN_1456cec3c(plVar3);
LAB_147a0e5c8:
  if (*(code **)(*plVar3 + 0x3a8) != (code *)&LAB_144b0892a) {
                    /* WARNING: Could not recover jumptable at 0x000147a0e66e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar2 = (**(code **)(*plVar3 + 0x3a8))(plVar3);
    return lVar2;
  }
  return plVar3[0x58];
}



// FUNCTION 147a0e686 FUN_147a0e686 body=2227 status=ok
// SIG undefined FUN_147a0e686(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_147a0e686(longlong param_1,ulonglong param_2,undefined1 (*param_3) [16])

{
  double *pdVar1;
  double *pdVar2;
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
  double dVar16;
  double dVar17;
  double dVar18;
  longlong *plVar19;
  longlong lVar20;
  undefined8 uVar21;
  int iVar22;
  longlong lVar23;
  longlong lVar24;
  uint uVar25;
  undefined8 *puVar26;
  undefined1 (*pauVar27) [16];
  int iVar28;
  ulonglong uVar29;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  double dVar34;
  undefined1 auVar35 [16];
  double dVar36;
  double dVar37;
  double dVar39;
  undefined1 auVar38 [16];
  double dVar40;
  double dVar41;
  double dVar44;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  double dVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined1 auStack_2f8 [32];
  undefined1 local_2d8 [16];
  double local_2c8;
  double dStack_2c0;
  undefined1 local_2b8 [16];
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
  double local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double local_170;
  double local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  uVar29 = param_2 & 0xffffffff;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  plVar19 = (longlong *)FUN_144a7954a();
  lVar20 = (**(code **)(*plVar19 + 0x310))(plVar19);
  *(undefined4 *)param_3[6] = 0xffffffff;
  puVar26 = &DAT_14c846480;
  pauVar27 = param_3;
  for (lVar23 = 0xc; lVar23 != 0; lVar23 = lVar23 + -1) {
    *(undefined8 *)*pauVar27 = *puVar26;
    puVar26 = puVar26 + 1;
    pauVar27 = (undefined1 (*) [16])(*pauVar27 + 8);
  }
  iVar28 = (int)param_2;
  if (iVar28 == -1) {
LAB_147a0ee8c:
    uVar21 = 0;
  }
  else {
    uVar21 = 0;
    if ((-1 < iVar28) && (iVar28 < *(int *)(lVar20 + 0x28))) {
      lVar23 = *(longlong *)(lVar20 + 0x30);
      lVar24 = (param_2 & 0xffffffff) * 0x60;
      dVar37 = *(double *)(lVar23 + lVar24);
      dVar39 = ((double *)(lVar23 + lVar24))[1];
      auVar35 = *(undefined1 (*) [16])(lVar23 + 0x10 + lVar24);
      pdVar1 = (double *)(lVar23 + 0x20 + lVar24);
      pdVar2 = (double *)(lVar23 + 0x30 + lVar24);
      dVar34 = *pdVar2;
      dVar36 = pdVar2[1];
      pdVar2 = (double *)(lVar23 + 0x40 + lVar24);
      dVar14 = *pdVar2;
      dVar48 = pdVar2[1];
      pdVar2 = (double *)(lVar23 + 0x50 + lVar24);
      dVar8 = *pdVar2;
      dVar40 = pdVar2[1];
      dVar30 = *pdVar1;
      dVar33 = pdVar1[1];
      while( true ) {
        uVar57 = (undefined4)((ulonglong)dVar40 >> 0x20);
        uVar58 = (undefined4)((ulonglong)dVar48 >> 0x20);
        iVar28 = *(int *)(*(longlong *)(lVar20 + 0x20) + 8 + (uVar29 & 0xffffffff) * 0xc);
        uVar29 = (ulonglong)iVar28;
        if (uVar29 == 0xffffffffffffffff) goto LAB_147a0ee8c;
        iVar22 = *(int *)(*(longlong *)(param_1 + 0x740) + uVar29 * 4);
        *(int *)param_3[6] = iVar22;
        auVar42 = _DAT_149934d80;
        if (iVar22 != -1) break;
        lVar23 = *(longlong *)(lVar20 + 0x30);
        lVar24 = uVar29 * 0x60;
        pdVar1 = (double *)(lVar23 + lVar24);
        auVar46 = *(undefined1 (*) [16])(lVar23 + 0x40 + lVar24);
        dVar4 = auVar46._0_8_;
        dVar5 = auVar46._8_8_;
        auVar54 = *(undefined1 (*) [16])(lVar23 + 0x50 + lVar24);
        dVar12 = auVar54._0_8_;
        dVar9 = auVar54._8_8_;
        auVar45._8_8_ = dVar48;
        auVar45._0_8_ = dVar14;
        auVar46 = minpd(auVar45,auVar46);
        auVar53._8_8_ = dVar40;
        auVar53._0_8_ = dVar8;
        auVar54 = minpd(auVar53,auVar54);
        auVar47._8_8_ = -(ulonglong)(auVar46._8_8_ < 0.0);
        auVar47._0_8_ = -(ulonglong)(auVar46._0_8_ < 0.0);
        iVar22 = movmskpd((int)lVar23,auVar47);
        auVar55._8_8_ = -(ulonglong)(auVar54._8_8_ < 0.0);
        auVar55._0_8_ = -(ulonglong)(auVar54._0_8_ < 0.0);
        uVar25 = movmskpd((int)lVar24,auVar55);
        local_2b8._8_4_ = SUB84(dVar48,0);
        local_2b8._0_8_ = dVar14;
        local_2b8._12_4_ = uVar58;
        dVar48 = auVar35._0_8_;
        dVar50 = auVar35._8_8_;
        uVar21 = local_2b8._8_8_;
        local_2c8 = dVar30;
        dStack_2c0 = dVar33;
        local_2a8 = dVar34;
        dStack_2a0 = dVar36;
        if ((uVar25 & 0x3fffffff) == 0 && iVar22 == 0) {
          local_2d8._8_4_ = SUB84(dVar40,0);
          local_2d8._0_8_ = dVar8;
          local_2d8._12_4_ = uVar57;
          dVar15 = *pdVar1;
          dVar16 = pdVar1[1];
          dVar17 = pdVar1[2];
          dVar18 = pdVar1[3];
          dVar10 = pdVar1[3];
          dVar11 = pdVar1[3];
          dVar52 = *pdVar1 * dVar39;
          dVar56 = *pdVar1 * dVar37;
          dVar49 = pdVar1[1];
          dVar40 = pdVar1[1];
          dVar6 = dVar37 * dVar49;
          dVar7 = dVar39 * dVar40;
          dVar3 = pdVar1[2];
          dVar13 = pdVar1[2];
          dVar44 = dVar37 * dVar13;
          dVar37 = dVar39 * dVar3 * -1.0 +
                   dVar48 * dVar49 + dVar50 * *pdVar1 * 1.0 + dVar37 * dVar10;
          dVar39 = dVar44 * 1.0 + dVar50 * dVar40 + dVar48 * *pdVar1 * -1.0 + dVar39 * dVar11;
          dVar30 = dVar30 * dVar4;
          dVar33 = dVar33 * dVar5;
          dVar34 = dVar34 * dVar12;
          dVar36 = dVar36 * dVar9;
          dVar49 = dVar33 * dVar15 - dVar30 * dVar16;
          dVar51 = dVar34 * dVar16 - dVar33 * dVar17;
          dVar41 = dVar30 * dVar17 - dVar34 * dVar15;
          dVar44 = dVar36 * dVar18 - dVar36 * dVar18;
          dVar51 = dVar51 + dVar51;
          dVar41 = dVar41 + dVar41;
          dVar49 = dVar49 + dVar49;
          dVar44 = dVar44 + dVar44;
          dVar30 = (dVar49 * dVar16 - dVar17 * dVar41) + dVar10 * dVar51 + dVar30 + pdVar1[4];
          dVar33 = (dVar51 * dVar17 - dVar49 * dVar15) + dVar11 * dVar41 + dVar33 + pdVar1[5];
          dVar8 = dVar8 * dVar12;
          dVar40 = (double)local_2d8._8_8_ * dVar9;
          auVar35._8_8_ = dVar48 * dVar13 * -1.0 + ((dVar56 * -1.0 + dVar50 * dVar11) - dVar7);
          auVar35._0_8_ = dVar50 * dVar3 * 1.0 + ((dVar52 * 1.0 + dVar48 * dVar10) - dVar6);
          dVar34 = (dVar41 * dVar15 - dVar16 * dVar51) + dVar10 * dVar49 + dVar34 + pdVar1[6];
          dVar36 = (dVar44 * dVar18 - dVar44 * dVar18) + dVar11 * dVar44 + dVar36 + pdVar1[7];
        }
        else {
          local_2d8._8_8_ = dVar40 * dVar9;
          local_2d8._0_8_ = dVar8 * dVar12;
          dVar3 = *pdVar1;
          dVar6 = pdVar1[1];
          dVar7 = pdVar1[2];
          dVar44 = dVar6 + dVar6;
          dVar10 = dVar7 + dVar7;
          dVar9 = dVar3 * (dVar3 + dVar3);
          local_1a8 = (1.0 - (dVar9 + dVar6 * dVar44)) * dVar12;
          dVar40 = pdVar1[3];
          dVar11 = dVar10 * dVar40;
          dVar49 = (dVar3 + dVar3) * pdVar1[3];
          dVar40 = dVar44 * dVar40;
          dVar36 = (dVar10 * dVar6 - dVar49) * dVar12;
          dVar13 = (double)local_2b8._8_8_ * dVar5;
          local_1f8 = (1.0 - (dVar7 * dVar10 + dVar6 * dVar44)) * dVar4;
          dVar9 = (1.0 - (dVar7 * dVar10 + dVar9)) * dVar5;
          dStack_1f0 = (dVar44 * dVar3 + dVar11) * dVar4;
          local_1c8 = (dVar10 * dVar6 + dVar49) * dVar5;
          local_1e8 = (*pdVar1 * dVar10 - dVar40) * dVar4;
          uStack_1e0 = 0;
          local_1d8._8_4_ = SUB84(dVar9,0);
          local_1d8._0_8_ = (dVar44 * dVar3 - dVar11) * dVar5;
          local_1d8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
          uStack_1c0 = 0;
          local_1b8._8_4_ = SUB84(dVar36,0);
          local_1b8._0_8_ = (dVar40 + *pdVar1 * dVar10) * dVar12;
          local_1b8._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
          uStack_1a0 = 0;
          local_198 = pdVar1[4];
          dStack_190 = pdVar1[5];
          local_188 = pdVar1[6];
          uStack_180 = 0x3ff0000000000000;
          dVar36 = dVar39 + dVar39;
          dVar9 = dVar48 + dVar48;
          dVar40 = dVar37 * (dVar37 + dVar37);
          local_228 = (1.0 - (dVar40 + dVar39 * dVar36)) * dVar8;
          dVar10 = (dVar37 + dVar37) * dVar50;
          dVar12 = (dVar9 * dVar39 - dVar10) * dVar8;
          local_278 = ((double)DAT_149934d80 - (dVar48 * dVar9 + dVar39 * dVar36)) * dVar14;
          dVar40 = (DAT_149934d80._8_8_ - (dVar48 * dVar9 + dVar40)) * (double)local_2b8._8_8_;
          dStack_270 = (dVar36 * dVar37 + dVar9 * dVar50) * dVar14;
          local_248 = (dVar9 * dVar39 + dVar10) * (double)local_2b8._8_8_;
          local_268 = (dVar37 * dVar9 - dVar36 * dVar50) * dVar14;
          uStack_260 = 0;
          local_258._8_4_ = SUB84(dVar40,0);
          local_258._0_8_ = (dVar36 * dVar37 - dVar9 * dVar50) * (double)local_2b8._8_8_;
          local_258._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
          uStack_240 = 0;
          local_238._8_4_ = SUB84(dVar12,0);
          local_238._0_8_ = (dVar36 * dVar50 + dVar37 * dVar9) * dVar8;
          local_238._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
          uStack_220 = 0;
          uStack_200 = 0x3ff0000000000000;
          local_218 = dVar30;
          dStack_210 = dVar33;
          local_208 = dVar34;
          FUN_1447fea8d(&local_178,&local_278,&local_1f8);
          FUN_144a1c686(&local_178,0x3e45798ee0000000);
          auVar31._8_8_ = -(ulonglong)(0.0 <= dVar13);
          auVar31._0_8_ = -(ulonglong)(0.0 <= dVar14 * dVar4);
          auVar35 = blendvpd(_DAT_149936790,auVar42,auVar31);
          dVar8 = (double)local_2d8._0_8_;
          dVar40 = (double)local_2d8._8_8_;
          dVar37 = (double)(~-(ulonglong)(0.0 <= (double)local_2d8._0_8_) & 0xbff0000000000000 |
                           -(ulonglong)(0.0 <= (double)local_2d8._0_8_) & 0x3ff0000000000000);
          dVar39 = auVar35._0_8_;
          local_168 = local_168 * dVar39;
          local_170 = local_170 * dVar39;
          local_178 = local_178 * dVar39;
          dVar39 = auVar35._8_8_;
          local_148 = local_148 * dVar39;
          local_150 = local_150 * dVar39;
          local_158 = dVar39 * local_158;
          local_128 = local_128 * dVar37;
          local_130 = local_130 * dVar37;
          local_138 = dVar37 * local_138;
          FUN_14481fd10(&local_298,&local_178);
          dVar37 = local_288 * local_288 + local_298 * local_298;
          dVar39 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
          auVar38._0_8_ = dVar37 + dVar39;
          auVar38._8_8_ = dVar37 + dVar39;
          auVar32._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar38._8_8_);
          auVar32._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar38._0_8_);
          auVar35 = sqrtpd(auVar38,auVar38);
          auVar42 = divpd(auVar42,auVar35);
          auVar43._0_8_ = auVar42._0_8_ * local_288;
          auVar43._8_8_ = auVar42._8_8_ * dStack_280;
          auVar35 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar43,auVar32);
          dVar37 = (double)((ulonglong)(local_298 * auVar42._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar38._0_8_));
          dVar39 = (double)((ulonglong)(dStack_290 * auVar42._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar38._8_8_));
          dVar34 = local_108;
          dVar36 = 0.0;
          dVar30 = local_118;
          dVar33 = dStack_110;
        }
        dVar48 = (double)uVar21 * dVar5;
        dVar14 = dVar14 * dVar4;
        uVar21 = 0;
        if ((iVar28 < 0) || (uVar21 = 0, *(int *)(lVar20 + 0x28) <= iVar28)) goto LAB_147a0ee8e;
      }
      auVar42._8_4_ = SUB84(dVar39,0);
      auVar42._0_8_ = dVar37;
      auVar42._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
      *param_3 = auVar42;
      param_3[1] = auVar35;
      *(double *)param_3[2] = dVar30;
      *(double *)(param_3[2] + 8) = dVar33;
      *(double *)param_3[3] = dVar34;
      *(double *)(param_3[3] + 8) = dVar36;
      auVar54._8_4_ = SUB84(dVar48,0);
      auVar54._0_8_ = dVar14;
      auVar54._12_4_ = uVar58;
      param_3[4] = auVar54;
      auVar46._8_4_ = SUB84(dVar40,0);
      auVar46._0_8_ = dVar8;
      auVar46._12_4_ = uVar57;
      param_3[5] = auVar46;
      uVar21 = CONCAT71((uint7)(uint3)((uint)iVar22 >> 8),1);
    }
  }
LAB_147a0ee8e:
  if ((local_f0 ^ (ulonglong)auStack_2f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar21;
}



// FUNCTION 147a0ef3a FUN_147a0ef3a body=497 status=ok
// SIG undefined FUN_147a0ef3a(void)

undefined8 * FUN_147a0ef3a(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8 [12];
  longlong local_168 [12];
  longlong local_108 [12];
  longlong local_a8 [12];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  lVar2 = FUN_144a7954a();
  if (lVar2 != 0) {
    plVar3 = (longlong *)FUN_144a7954a(param_1);
    uVar4 = (**(code **)(*plVar3 + 0x310))(plVar3);
    iVar1 = FUN_144909502(param_1,param_3);
    if (iVar1 != -1) {
      if ((*(byte *)(param_1 + 0x9c) & 1) == 0) {
        plVar3 = &DAT_14c846480;
        plVar7 = local_a8;
        for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
          *plVar7 = *plVar3;
          plVar3 = plVar3 + 1;
          plVar7 = plVar7 + 1;
        }
      }
      else {
        FUN_140084aae(param_1,local_a8,iVar1,param_1 + 0x240);
      }
      FUN_1478d3348(local_108,uVar4,iVar1);
      if (param_4 == 0) {
        FUN_1417c06ee(param_1,local_168,param_3);
        param_4 = local_168[0];
      }
      iVar1 = FUN_144909502(param_1,param_4);
      if (iVar1 != -1) {
        if ((*(byte *)(param_1 + 0x9c) & 1) == 0) {
          puVar5 = &DAT_14c846480;
          puVar6 = local_1c8;
          for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
        }
        else {
          FUN_140084aae(param_1,local_1c8,iVar1,param_1 + 0x240);
        }
        FUN_1449437a2(local_a8,local_168,local_1c8);
        plVar3 = local_168;
        plVar7 = local_a8;
        for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
          *plVar7 = *plVar3;
          plVar3 = plVar3 + 1;
          plVar7 = plVar7 + 1;
        }
        FUN_1478d3348(local_1c8,uVar4,iVar1);
        FUN_1449437a2(local_108,local_168,local_1c8);
        plVar3 = local_168;
        plVar7 = local_108;
        for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
          *plVar7 = *plVar3;
          plVar3 = plVar3 + 1;
          plVar7 = plVar7 + 1;
        }
      }
      FUN_1449437a2(local_a8,param_2,local_108);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_1e8);
    }
  }
  puVar5 = &DAT_14c846480;
  puVar6 = param_2;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  if ((local_48 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0f12c FUN_147a0f12c body=816 status=ok
// SIG undefined FUN_147a0f12c(void)

undefined8 FUN_147a0f12c(longlong param_1,undefined8 param_2,float *param_3,float *param_4)

{
  double dVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  double *pdVar13;
  double *pdVar14;
  double dVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_1f8 [32];
  double local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  undefined1 local_198 [24];
  double local_180;
  double local_178 [13];
  longlong local_110;
  double local_108 [2];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  plVar8 = (longlong *)FUN_144a7954a();
  lVar9 = (**(code **)(*plVar8 + 0x310))(plVar8);
  iVar6 = FUN_144909502(param_1,param_2);
  lVar12 = (longlong)*(int *)(param_1 + 0x718) * 0x10;
  iVar7 = *(int *)(param_1 + 0x6d8 + lVar12);
  if (iVar7 == 0) {
    uVar10 = 0;
    *param_4 = 0.0;
    *param_3 = 0.0;
  }
  else {
    uVar10 = 0;
    if ((iVar6 != -1) && (iVar6 < iVar7)) {
      lVar2 = (longlong)iVar6 * 0x60;
      pdVar13 = (double *)(*(longlong *)(param_1 + 0x6d0 + lVar12) + lVar2);
      pdVar14 = local_108;
      for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
        *pdVar14 = *pdVar13;
        pdVar13 = pdVar13 + 1;
        pdVar14 = pdVar14 + 1;
      }
      pdVar13 = (double *)(*(longlong *)(lVar9 + 0x30) + lVar2);
      dVar15 = *pdVar13;
      dVar3 = pdVar13[1];
      pdVar13 = (double *)(*(longlong *)(lVar9 + 0x30) + 0x10 + lVar2);
      dVar4 = *pdVar13;
      dVar5 = pdVar13[1];
      FUN_1417c06ee(param_1,&local_110,param_2);
      if (local_110 != 0) {
        iVar7 = FUN_144909502(param_1);
        if (iVar7 != -1) {
          FUN_1449437a2(local_108,local_178,
                        (longlong)iVar7 * 0x60 +
                        *(longlong *)(param_1 + 0x6d0 + (longlong)*(int *)(param_1 + 0x718) * 0x10))
          ;
          pdVar13 = local_178;
          pdVar14 = local_108;
          for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
            *pdVar14 = *pdVar13;
            pdVar13 = pdVar13 + 1;
            pdVar14 = pdVar14 + 1;
          }
        }
      }
      dVar1 = dVar4 - dVar15 * 0.0;
      dVar18 = dVar15 * 0.0 - dVar3;
      dVar19 = dVar3 * 0.0 + dVar4 * -0.0;
      dVar18 = dVar18 + dVar18;
      dVar1 = dVar1 + dVar1;
      dVar19 = dVar19 + dVar19;
      local_1a0 = (dVar15 * dVar1 - dVar19 * dVar3) + dVar5 * dVar18 + 0.0;
      local_1a8 = (dVar4 * dVar19 - dVar18 * dVar15) + dVar5 * dVar1 + 0.0;
      local_1b0 = (dVar3 * dVar18 - dVar1 * dVar4) + dVar5 * dVar19 + 1.0;
      local_1d8 = local_108[0];
      uStack_1d0 = local_108[1];
      local_1c8 = local_f8;
      uStack_1c4 = uStack_f4;
      uStack_1c0 = uStack_f0;
      uStack_1bc = uStack_ec;
      FUN_144afe582(&local_1d8,&local_1b0,local_178,local_198);
      uVar16 = SUB84(local_180,0);
      uVar17 = (int)((ulonglong)local_180 >> 0x20);
      if (1.0 <= local_180) {
        uVar16 = 0;
        uVar17 = 0x3ff00000;
      }
      dVar15 = acos((double)(-(ulonglong)(local_180 < -1.0) & 0xbff0000000000000 |
                            ~-(ulonglong)(local_180 < -1.0) & CONCAT44(uVar17,uVar16)));
      *param_3 = (float)((dVar15 + dVar15) * 57.29577951308232);
      uVar16 = SUB84(local_178[3],0);
      uVar17 = (int)((ulonglong)local_178[3] >> 0x20);
      if (1.0 <= local_178[3]) {
        uVar16 = 0;
        uVar17 = 0x3ff00000;
      }
      dVar15 = acos((double)(-(ulonglong)(local_178[3] < -1.0) & 0xbff0000000000000 |
                            ~-(ulonglong)(local_178[3] < -1.0) & CONCAT44(uVar17,uVar16)));
      *param_4 = (float)((dVar15 + dVar15) * 57.29577951308232);
      uVar10 = 1;
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0f45e FUN_147a0f45e body=120 status=ok
// SIG undefined FUN_147a0f45e(void)

undefined8 * FUN_147a0f45e(undefined8 param_1,undefined8 *param_2,uint param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  lVar1 = FUN_144a7954a();
  if ((-1 < (int)param_3) && (lVar1 != 0)) {
    plVar2 = (longlong *)FUN_144a7954a(param_1);
    lVar1 = (**(code **)(*plVar2 + 0x310))(plVar2);
    if ((int)param_3 < *(int *)(lVar1 + 0x28)) {
      plVar2 = (longlong *)FUN_144a7954a(param_1);
      lVar1 = (**(code **)(*plVar2 + 0x310))(plVar2);
      puVar3 = (undefined8 *)((ulonglong)param_3 * 0x60 + *(longlong *)(lVar1 + 0x30));
      goto LAB_147a0f4c0;
    }
  }
  puVar3 = &DAT_14c846480;
LAB_147a0f4c0:
  puVar4 = param_2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return param_2;
}



// FUNCTION 147a0f4e4 FUN_147a0f4e4 body=61 status=ok
// SIG undefined FUN_147a0f4e4(void)

longlong FUN_147a0f4e4(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144a7954a();
  if (lVar1 != 0) {
    lVar2 = FUN_144a85a6c();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 147a0f522 FUN_147a0f522 body=16 status=ok
// SIG undefined FUN_147a0f522(void)

void FUN_147a0f522(longlong *param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000147a0f52f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xab0))(param_1,param_2,1);
  return;
}



// FUNCTION 147a0f532 FUN_147a0f532 body=87 status=ok
// SIG undefined FUN_147a0f532(void)

undefined8 * FUN_147a0f532(undefined8 *param_1,void *param_2)

{
  int iVar1;
  void *_Src;
  
  _Src = *(void **)((longlong)param_2 + 8);
  if (*(void **)((longlong)param_2 + 8) == (void *)0x0) {
    _Src = param_2;
  }
  iVar1 = *(int *)((longlong)param_2 + 0x10);
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_140bec78a(param_1,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)*param_1,_Src,(longlong)iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147a0f58a FUN_147a0f58a body=32 status=ok
// SIG undefined FUN_147a0f58a(void)

undefined8 FUN_147a0f58a(longlong param_1)

{
  undefined8 uVar1;
  
  if (0 < *(int *)(param_1 + 0x6a8)) {
                    /* WARNING: Could not recover jumptable at 0x000147a0f5a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x6a0) + 0x2c0))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 147a0f5aa FUN_147a0f5aa body=277 status=ok
// SIG undefined FUN_147a0f5aa(void)

void FUN_147a0f5aa(longlong param_1,undefined1 param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  longlong *local_40;
  int local_38;
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined1 *)(param_1 + 0x680) = param_2;
  if ((param_3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_3);
  }
  *(longlong *)(param_1 + 0x688) = param_3;
  FUN_140788cb8(param_1,local_50);
  if (local_38 < 1) {
LAB_147a0f64a:
    lVar1 = 0;
  }
  else {
    plVar2 = local_50;
    if (local_40 != (longlong *)0x0) {
      plVar2 = local_40;
    }
    plVar2 = (longlong *)*plVar2;
    if ((DAT_14c950c29 == '\x01') && (plVar2 != (longlong *)0x0)) {
      FUN_1456cec3c(plVar2);
    }
    else if (plVar2 == (longlong *)0x0) goto LAB_147a0f64a;
    lVar1 = (**(code **)(*plVar2 + 0x2a0))(plVar2,param_1);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
  }
  *(longlong *)(param_1 + 0x698) = lVar1;
  FUN_140107d74(param_1,local_50);
  FUN_1448215fa(param_1);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if (local_40 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0f6c0 FUN_147a0f6c0 body=10 status=ok
// SIG undefined FUN_147a0f6c0(void)

void FUN_147a0f6c0(undefined8 param_1,undefined8 param_2)

{
  FUN_147a0f5aa(param_1,1,param_2);
  return;
}



// FUNCTION 147a0f6d4 FUN_147a0f6d4 body=24 status=ok
// SIG undefined FUN_147a0f6d4(void)

void FUN_147a0f6d4(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x690) = param_2;
  FUN_147a0f5aa(param_1,*(undefined1 *)(param_1 + 0x680),*(undefined8 *)(param_1 + 0x688));
  return;
}



// FUNCTION 147a0f6ec FUN_147a0f6ec body=7 status=ok
// SIG undefined FUN_147a0f6ec(void)

undefined1 FUN_147a0f6ec(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x690);
}



// FUNCTION 147a0f6f4 FUN_147a0f6f4 body=69 status=ok
// SIG undefined FUN_147a0f6f4(void)

void FUN_147a0f6f4(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*(int *)(param_2 + 8) != *(int *)(param_2 + 0x34)) {
    FUN_1402c6cea(param_2);
    FUN_1402c6e36(param_2);
  }
  puVar2 = &DAT_14c846400;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_3 = *puVar2;
    puVar2 = puVar2 + 1;
    param_3 = param_3 + 1;
  }
  *param_4 = 0;
  return;
}



// FUNCTION 147a0f73a FUN_147a0f73a body=118 status=ok
// SIG undefined FUN_147a0f73a(void)

ulonglong FUN_147a0f73a(int *param_1)

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



// FUNCTION 147a0f7b2 FUN_147a0f7b2 body=64 status=ok
// SIG undefined FUN_147a0f7b2(void)

undefined8 FUN_147a0f7b2(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_144a7954a();
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_144a7954a(param_1);
                    /* WARNING: Could not recover jumptable at 0x000147a0f7e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*plVar2 + 0x440))(plVar2,param_2,*(code **)(*plVar2 + 0x440));
    return uVar3;
  }
  return 0;
}



// FUNCTION 147a0f7f2 FUN_147a0f7f2 body=55 status=ok
// SIG undefined FUN_147a0f7f2(void)

bool FUN_147a0f7f2(undefined8 param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = FUN_144a7954a();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    plVar3 = (longlong *)FUN_144a7954a(param_1);
    lVar2 = (**(code **)(*plVar3 + 0x310))(plVar3);
    bVar1 = 0 < *(int *)(lVar2 + 0x28);
  }
  return bVar1;
}



// FUNCTION 147a0f82a FUN_147a0f82a body=357 status=ok
// SIG undefined FUN_147a0f82a(void)

void FUN_147a0f82a(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = FUN_144a7954a();
  if (lVar3 != 0) {
    plVar4 = (longlong *)FUN_144a7954a(param_1);
    (**(code **)(*plVar4 + 0x3d8))(plVar4,&local_48);
    if (0 < local_40) {
      lVar3 = 0;
      iVar2 = local_40;
      do {
        lVar6 = *(longlong *)(local_48 + lVar3 * 8);
        if (lVar6 != 0) {
          iVar2 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
            FUN_1474acd28(param_2,iVar2);
          }
          lVar5 = *param_2;
          *(undefined8 *)(lVar5 + (longlong)iVar2 * 0xc) = *(undefined8 *)(lVar6 + 0x28);
          *(undefined1 *)(lVar5 + 8 + (longlong)iVar2 * 0xc) = 2;
          iVar2 = local_40;
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < iVar2);
    }
    plVar4 = (longlong *)FUN_144a7954a(param_1);
    lVar3 = (**(code **)(*plVar4 + 0x310))(plVar4);
    if (0 < *(int *)(lVar3 + 0x28)) {
      lVar3 = 0;
      lVar6 = 0;
      do {
        plVar4 = (longlong *)FUN_144a7954a(param_1);
        lVar5 = (**(code **)(*plVar4 + 0x310))(plVar4);
        uVar1 = *(undefined8 *)(*(longlong *)(lVar5 + 0x20) + lVar3);
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1474acd28(param_2,iVar2);
        }
        lVar5 = *param_2;
        *(undefined8 *)(lVar5 + (longlong)iVar2 * 0xc) = uVar1;
        *(undefined1 *)(lVar5 + 8 + (longlong)iVar2 * 0xc) = 1;
        lVar6 = lVar6 + 1;
        plVar4 = (longlong *)FUN_144a7954a(param_1);
        lVar5 = (**(code **)(*plVar4 + 0x310))(plVar4);
        lVar3 = lVar3 + 0xc;
      } while (lVar6 < *(int *)(lVar5 + 0x28));
    }
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a0f996 FUN_147a0f996 body=776 status=ok
// SIG undefined FUN_147a0f996(void)

void FUN_147a0f996(undefined8 param_1,undefined8 param_2,undefined8 *param_3,double *param_4,
                  undefined4 *param_5,undefined4 *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  undefined1 auStack_2e8 [32];
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 local_2b8;
  undefined1 local_248 [96];
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  undefined8 local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  undefined8 local_190;
  double local_188;
  double local_180;
  double local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined1 local_148 [136];
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  iVar7 = FUN_144909502();
  if (iVar7 != -1) {
    FUN_1401ff402(param_1,local_148,iVar7);
    dVar5 = *param_4;
    dVar6 = param_4[1];
    dVar1 = param_4[2];
    dVar2 = sin(dVar5 * 0.01745329238474369);
    dVar3 = sin(dVar6 * 0.01745329238474369);
    dVar4 = sin(dVar1 * 0.01745329238474369);
    sin(0.0);
    dVar5 = cos(dVar5 * 0.01745329238474369);
    dVar6 = cos(dVar6 * 0.01745329238474369);
    dVar1 = cos(dVar1 * 0.01745329238474369);
    cos(0.0);
    local_1c8 = dVar5 * dVar6;
    local_1c0 = dVar3 * dVar5;
    local_1a8 = dVar2 * dVar4 * dVar6 - dVar3 * dVar1;
    local_1a0 = dVar2 * dVar4 * dVar3 + dVar6 * dVar1;
    local_198 = -dVar4 * dVar5;
    local_188 = -(dVar2 * dVar1 * dVar6 + dVar3 * dVar4);
    local_180 = dVar6 * dVar4 - dVar3 * dVar2 * dVar1;
    local_178 = dVar5 * dVar1;
    local_168 = *param_3;
    uStack_160 = param_3[1];
    local_158 = param_3[2];
    local_1b0 = 0;
    local_190 = 0;
    local_170 = 0;
    local_150 = 0x3ff0000000000000;
    local_1b8 = dVar2;
    FUN_14494412e(local_148,&local_2c8);
    FUN_1447fea8d(local_248,&local_1c8,&local_2c8);
    *param_5 = local_1e8;
    param_5[1] = uStack_1e4;
    param_5[2] = uStack_1e0;
    param_5[3] = uStack_1dc;
    *(undefined8 *)(param_5 + 4) = local_1d8;
    FUN_144a90b9e(local_248,&local_2c8);
    *(undefined8 *)(param_6 + 4) = local_2b8;
    *param_6 = local_2c8;
    param_6[1] = uStack_2c4;
    param_6[2] = uStack_2c0;
    param_6[3] = uStack_2bc;
  }
  if ((local_c0 ^ (ulonglong)auStack_2e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0fca0 FUN_147a0fca0 body=754 status=ok
// SIG undefined FUN_147a0fca0(void)

void FUN_147a0fca0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,double *param_4,
                  undefined4 *param_5,undefined4 *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  undefined1 auStack_288 [40];
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined8 local_250;
  undefined1 local_248 [96];
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  undefined8 local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  undefined8 local_190;
  double local_188;
  double local_180;
  double local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined1 local_148 [136];
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_288;
  iVar7 = FUN_144909502();
  if (iVar7 != -1) {
    FUN_1401ff402(param_1,local_148,iVar7);
    dVar5 = *param_4;
    dVar6 = param_4[1];
    dVar1 = param_4[2];
    dVar2 = sin(dVar5 * 0.01745329238474369);
    dVar3 = sin(dVar6 * 0.01745329238474369);
    dVar4 = sin(dVar1 * 0.01745329238474369);
    sin(0.0);
    dVar5 = cos(dVar5 * 0.01745329238474369);
    dVar6 = cos(dVar6 * 0.01745329238474369);
    dVar1 = cos(dVar1 * 0.01745329238474369);
    cos(0.0);
    local_1c8 = dVar5 * dVar6;
    local_1c0 = dVar3 * dVar5;
    local_1a8 = dVar2 * dVar4 * dVar6 - dVar3 * dVar1;
    local_1a0 = dVar2 * dVar4 * dVar3 + dVar6 * dVar1;
    local_198 = -dVar4 * dVar5;
    local_188 = -(dVar2 * dVar1 * dVar6 + dVar3 * dVar4);
    local_180 = dVar6 * dVar4 - dVar3 * dVar2 * dVar1;
    local_178 = dVar5 * dVar1;
    local_168 = *param_3;
    uStack_160 = param_3[1];
    local_158 = param_3[2];
    local_1b0 = 0;
    local_190 = 0;
    local_170 = 0;
    local_150 = 0x3ff0000000000000;
    local_1b8 = dVar2;
    FUN_1447fea8d(local_248,&local_1c8,local_148);
    *param_5 = local_1e8;
    param_5[1] = uStack_1e4;
    param_5[2] = uStack_1e0;
    param_5[3] = uStack_1dc;
    *(undefined8 *)(param_5 + 4) = local_1d8;
    FUN_144a90b9e(local_248,&local_260);
    *(undefined8 *)(param_6 + 4) = local_250;
    *param_6 = local_260;
    param_6[1] = uStack_25c;
    param_6[2] = uStack_258;
    param_6[3] = uStack_254;
  }
  if ((local_c0 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0ff94 FUN_147a0ff94 body=2754 status=ok
// SIG undefined FUN_147a0ff94(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_147a0ff94(longlong *param_1,undefined8 *param_2,double *param_3,double *param_4,float param_5,
             char param_6)

{
  double *pdVar1;
  double *pdVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  float fVar37;
  undefined1 auStack_2d8 [40];
  double *local_2b0;
  undefined8 *local_2a8;
  longlong local_2a0;
  undefined1 local_298 [32];
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [16];
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  longlong local_198;
  longlong lStack_190;
  longlong local_188;
  undefined8 uStack_180;
  double local_178;
  double local_170;
  double local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  lVar4 = FUN_144a7954a();
  if ((lVar4 != 0) &&
     (lVar4 = (**(code **)(*param_1 + 0xb98))(param_1), param_6 != '\x01' || lVar4 != 0)) {
    dVar31 = *param_3 - (double)param_1[0x4c];
    dVar32 = param_3[1] - (double)param_1[0x4d];
    dVar20 = param_3[2] - (double)param_1[0x4e];
    dVar35 = (double)param_1[0x48];
    auVar23 = *(undefined1 (*) [16])(param_1 + 0x50);
    dVar24 = -dVar35;
    dVar21 = -(double)param_1[0x49];
    dVar27 = (double)param_1[0x4a] * -1.0;
    dVar29 = (double)param_1[0x4b] * 1.0;
    dVar34 = dVar31 * dVar27 - dVar24 * dVar20;
    dVar33 = dVar32 * dVar24 - dVar31 * dVar21;
    dVar19 = dVar20 * dVar21 - dVar32 * dVar27;
    dVar19 = dVar19 + dVar19;
    dVar34 = dVar34 + dVar34;
    dVar33 = dVar33 + dVar33;
    auVar22 = divpd(_DAT_149934d80,auVar23);
    dVar18 = (double)param_1[0x52];
    *param_3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar23._0_8_)) & auVar22._0_8_) *
               ((dVar33 * dVar21 - dVar34 * dVar27) + dVar29 * dVar19 + dVar31);
    param_3[1] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar23._8_8_)) & auVar22._8_8_) *
                 (dVar35 * dVar33 + dVar27 * dVar19 + dVar29 * dVar34 + dVar32);
    param_3[2] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar18)) &
                         (ulonglong)(1.0 / dVar18)) *
                 (dVar29 * dVar33 + dVar20 + (dVar34 * dVar24 - dVar19 * dVar21));
    cVar3 = FUN_144729dda(param_1 + 0xcd);
    plVar6 = param_1;
    if (cVar3 != '\0') {
      plVar6 = (longlong *)FUN_14479d2ce(param_1 + 0xcd);
    }
    lVar13 = plVar6[0xe3];
    if (0 < (int)plVar6[(longlong)(int)lVar13 * 2 + 0xdb]) {
      local_2a0 = lVar4 + 0xd0;
      uVar16 = 0xffffffff;
      fVar37 = 3.4e+38;
      uVar14 = 0;
      local_2b0 = param_4;
      local_2a8 = param_2;
      do {
        if (param_6 == '\0') {
LAB_147a103cd:
          lVar8 = plVar6[(longlong)(int)lVar13 * 2 + 0xda];
          if (0.0 <= param_5) {
            lVar10 = uVar14 * 0x60;
            pdVar2 = (double *)(lVar8 + 0x40 + lVar10);
            dVar27 = *pdVar2 * 1.0;
            dVar29 = pdVar2[1] * 0.0;
            dVar34 = *(double *)(lVar8 + 0x50 + lVar10) * 0.0;
            dVar24 = *(double *)(lVar8 + lVar10);
            dVar21 = ((double *)(lVar8 + lVar10))[1];
            dVar19 = *(double *)(lVar8 + 0x10 + lVar10);
            pdVar2 = (double *)(lVar8 + 0x18 + lVar10);
            dVar18 = *pdVar2;
            dVar35 = dVar29 * dVar24 - dVar27 * dVar21;
            dVar20 = dVar34 * dVar21 - dVar29 * dVar19;
            dVar33 = dVar27 * dVar19 - dVar24 * dVar34;
            dVar20 = dVar20 + dVar20;
            dVar33 = dVar33 + dVar33;
            dVar35 = dVar35 + dVar35;
            dVar34 = dVar35 * dVar18 + dVar34 + (dVar33 * dVar24 - dVar20 * dVar21);
            dVar18 = (dVar35 * dVar21 - dVar33 * dVar19) + dVar18 * dVar20 + dVar27;
            dVar33 = (dVar19 * dVar20 - dVar24 * dVar35) + *pdVar2 * dVar33 + dVar29;
            if (dVar34 * dVar34 + dVar18 * dVar18 + dVar33 * dVar33 <= (double)(param_5 * param_5))
            goto LAB_147a1052e;
          }
          lVar10 = uVar14 * 0x60;
          dVar18 = param_3[2] - *(double *)(lVar8 + 0x30 + lVar10);
          dVar33 = param_3[1] - *(double *)(lVar8 + 0x28 + lVar10);
          dVar24 = *param_3 - *(double *)(lVar8 + 0x20 + lVar10);
          fVar17 = (float)(dVar18 * dVar18 + dVar24 * dVar24 + dVar33 * dVar33);
          if (fVar17 < fVar37) {
            uVar16 = uVar14 & 0xffffffff;
            fVar37 = fVar17;
          }
        }
        else {
          plVar7 = (longlong *)FUN_144a7954a(param_1);
          lVar8 = (**(code **)(*plVar7 + 0x310))(plVar7);
          if (*(int *)(lVar4 + 0xa0) != *(int *)(lVar4 + 0xcc)) {
            lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x20) + uVar14 * 0xc);
            uVar12 = (uint)((ulonglong)lVar8 >> 0x10);
            uVar11 = (uint)lVar8 & 0xffff;
            lVar10 = *(longlong *)(lVar4 + 0xd8);
            if (*(longlong *)(lVar4 + 0xd8) == 0) {
              lVar10 = local_2a0;
            }
            iVar15 = *(int *)(lVar10 + (ulonglong)
                                       (*(int *)(lVar4 + 0xe0) - 1U &
                                       (int)((ulonglong)lVar8 >> 0x20) +
                                       ((uint)lVar8 << 0x10 | uVar11) +
                                       (uVar12 << 0x13 | uVar12 & 0xffff) + (uVar11 >> 4)) * 4);
            if (iVar15 != -1) {
              do {
                plVar7 = (longlong *)(*(longlong *)(lVar4 + 0x98) + (longlong)iVar15 * 0x14);
                if (*plVar7 == lVar8) {
                  if (((ulonglong)(plVar7 + 1) & 0xfffffffffffffff7) != 0) goto LAB_147a103cd;
                  break;
                }
                iVar15 = *(int *)((longlong)plVar7 + 0xc);
              } while (iVar15 != -1);
            }
          }
        }
LAB_147a1052e:
        param_2 = local_2a8;
        pdVar2 = local_2b0;
        auVar23 = _DAT_149934d80;
        uVar14 = uVar14 + 1;
      } while ((longlong)uVar14 < (longlong)(int)plVar6[(longlong)(int)plVar6[0xe3] * 2 + 0xdb]);
      iVar15 = (int)uVar16;
      param_4 = local_2b0;
      if (iVar15 != -1) {
        if (local_2b0 != (double *)0x0) {
          lVar4 = plVar6[(longlong)(int)lVar13 * 2 + 0xda];
          lVar13 = (longlong)iVar15 * 0x60;
          pdVar1 = (double *)(lVar4 + lVar13);
          auVar22 = *(undefined1 (*) [16])(param_1 + 0x50);
          dVar18 = auVar22._0_8_;
          dVar19 = auVar22._8_8_;
          dVar33 = SUB168(*(undefined1 (*) [16])(param_1 + 0x52),0);
          auVar25 = *(undefined1 (*) [16])(lVar4 + 0x40 + lVar13);
          dVar24 = auVar25._0_8_;
          dVar34 = auVar25._8_8_;
          auVar26 = *(undefined1 (*) [16])(lVar4 + 0x50 + lVar13);
          dVar21 = auVar26._0_8_;
          auVar22 = minpd(auVar25,auVar22);
          auVar26 = minpd(auVar26,*(undefined1 (*) [16])(param_1 + 0x52));
          auVar25._8_8_ = -(ulonglong)(auVar22._8_8_ < 0.0);
          auVar25._0_8_ = -(ulonglong)(auVar22._0_8_ < 0.0);
          iVar9 = movmskpd((int)lVar4,auVar25);
          auVar22._8_8_ = -(ulonglong)(auVar26._8_8_ < 0.0);
          auVar22._0_8_ = -(ulonglong)(auVar26._0_8_ < 0.0);
          uVar12 = movmskpd((int)lVar13,auVar22);
          if ((uVar12 & 0x3fffffff) == 0 && iVar9 == 0) {
            dVar34 = (double)param_1[0x48];
            dVar35 = (double)param_1[0x49];
            dVar20 = (double)param_1[0x4a];
            dVar24 = (double)param_1[0x4b];
            dVar18 = dVar18 * pdVar1[4];
            dVar19 = dVar19 * pdVar1[5];
            dVar33 = dVar33 * pdVar1[6];
            dVar21 = dVar19 * dVar34 - dVar35 * dVar18;
            dVar27 = dVar33 * dVar35 - dVar20 * dVar19;
            dVar29 = dVar18 * dVar20 - dVar34 * dVar33;
            dVar27 = dVar27 + dVar27;
            dVar29 = dVar29 + dVar29;
            dVar21 = dVar21 + dVar21;
            local_118 = (dVar21 * dVar35 - dVar20 * dVar29) + dVar24 * dVar27 + dVar18 +
                        (double)param_1[0x4c];
            dStack_110 = (dVar27 * dVar20 - dVar21 * dVar34) +
                         (double)param_1[0x4b] * dVar29 + dVar19 + (double)param_1[0x4d];
            local_108 = (dVar29 * dVar34 - dVar35 * dVar27) + dVar24 * dVar21 + dVar33 +
                        (double)param_1[0x4e];
          }
          else {
            dVar20 = (double)param_1[0x48];
            dVar27 = (double)param_1[0x49];
            dVar29 = (double)param_1[0x4a];
            dVar31 = dVar27 + dVar27;
            dVar32 = dVar29 + dVar29;
            dVar35 = dVar20 * (dVar20 + dVar20);
            dStack_1d0 = (DAT_149934d80._8_8_ - (dVar29 * dVar32 + dVar35)) * dVar19;
            local_1a8 = (1.0 - (dVar35 + dVar27 * dVar31)) * dVar33;
            dVar35 = (double)param_1[0x4b];
            dVar28 = dVar32 * dVar35;
            dVar30 = (dVar20 + dVar20) * (double)param_1[0x4b];
            dVar35 = dVar31 * dVar35;
            local_1d8 = (dVar31 * dVar20 - dVar28) * dVar19;
            dStack_1b0 = (dVar32 * dVar27 - dVar30) * dVar33;
            dVar20 = (dVar31 * dVar20 + dVar28) * dVar18;
            local_1c8 = (dVar32 * dVar27 + dVar30) * dVar19;
            local_1b8 = (dVar35 + (double)param_1[0x48] * dVar32) * dVar33;
            local_1e8 = ((double)param_1[0x48] * dVar32 - dVar35) * dVar18;
            local_1f8._8_4_ = SUB84(dVar20,0);
            local_1f8._0_8_ = ((double)DAT_149934d80 - (dVar29 * dVar32 + dVar27 * dVar31)) * dVar18
            ;
            local_1f8._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
            uStack_1e0 = 0;
            uStack_1c0 = 0;
            uStack_1a0 = 0;
            local_198 = param_1[0x4c];
            lStack_190 = param_1[0x4d];
            local_188 = param_1[0x4e];
            uStack_180 = 0x3ff0000000000000;
            dVar27 = *pdVar1;
            dVar29 = pdVar1[1];
            dVar20 = pdVar1[2];
            dVar31 = dVar29 + dVar29;
            dVar32 = dVar20 + dVar20;
            dVar36 = dVar27 * (dVar27 + dVar27);
            dVar35 = pdVar1[3];
            dVar28 = dVar32 * dVar35;
            dVar30 = (dVar27 + dVar27) * pdVar1[3];
            dVar35 = dVar31 * dVar35;
            dStack_230 = (dVar32 * dVar29 - dVar30) * dVar21;
            local_278 = ((double)DAT_149934d80 - (dVar20 * dVar32 + dVar29 * dVar31)) * dVar24;
            dVar20 = (DAT_149934d80._8_8_ - (dVar20 * dVar32 + dVar36)) * dVar34;
            dStack_270 = (dVar31 * dVar27 + dVar28) * dVar24;
            local_248 = (dVar32 * dVar29 + dVar30) * dVar34;
            local_238 = (dVar35 + *pdVar1 * dVar32) * dVar21;
            local_268 = (*pdVar1 * dVar32 - dVar35) * dVar24;
            uStack_260 = 0;
            local_258._8_4_ = SUB84(dVar20,0);
            local_258._0_8_ = (dVar31 * dVar27 - dVar28) * dVar34;
            local_258._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
            uStack_240 = 0;
            local_228 = (1.0 - (dVar36 + dVar29 * dVar31)) * dVar21;
            uStack_220 = 0;
            local_218 = pdVar1[4];
            dStack_210 = pdVar1[5];
            local_208 = pdVar1[6];
            uStack_200 = 0x3ff0000000000000;
            FUN_1447fea8d(&local_178);
            FUN_144a1c686(&local_178,0x3e45798ee0000000);
            auVar26._8_8_ = -(ulonglong)(0.0 <= dVar19 * dVar34);
            auVar26._0_8_ = -(ulonglong)(0.0 <= dVar18 * dVar24);
            auVar23 = blendvpd(_DAT_149936790,auVar23,auVar26);
            uVar14 = -(ulonglong)(0.0 <= dVar33 * dVar21);
            dVar18 = (double)(~uVar14 & 0xbff0000000000000 |
                             (ulonglong)((uint)(uVar14 >> 0x20) & 0x3ff00000) << 0x20);
            dVar33 = auVar23._0_8_;
            local_168 = local_168 * dVar33;
            local_170 = local_170 * dVar33;
            local_178 = local_178 * dVar33;
            dVar33 = auVar23._8_8_;
            local_148 = local_148 * dVar33;
            local_150 = local_150 * dVar33;
            local_158 = dVar33 * local_158;
            local_128 = local_128 * dVar18;
            local_130 = local_130 * dVar18;
            local_138 = dVar18 * local_138;
            FUN_14481fd10(local_298,&local_178);
          }
          *pdVar2 = local_118;
          pdVar2[1] = dStack_110;
          pdVar2[2] = local_108;
        }
        plVar6 = (longlong *)FUN_144a7954a(param_1);
        lVar4 = (**(code **)(*plVar6 + 0x310))(plVar6);
        uVar5 = *(undefined8 *)(*(longlong *)(lVar4 + 0x20) + (longlong)iVar15 * 0xc);
        goto LAB_147a10079;
      }
    }
  }
  if (param_4 != (double *)0x0) {
    param_4[2] = DAT_14c8464f0;
    dVar18 = DAT_14c8464e8;
    *param_4 = DAT_14c8464e0;
    param_4[1] = dVar18;
  }
  uVar5 = 0;
LAB_147a10079:
  *param_2 = uVar5;
  if ((local_f0 ^ (ulonglong)auStack_2d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a10a58 FUN_147a10a58 body=133 status=ok
// SIG undefined FUN_147a10a58(void)

undefined8
FUN_147a10a58(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4,
             undefined4 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined1 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_4[2] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *param_4 = DAT_14c8464e0;
  param_4[1] = uVar1;
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = *(undefined8 *)(param_3 + 4);
  local_30 = param_6;
  local_38 = param_5;
  FUN_147a0ff94(param_5,param_2,&local_28);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a10ade FUN_147a10ade body=55 status=ok
// SIG undefined FUN_147a10ade(void)

byte FUN_147a10ade(longlong param_1,uint param_2,uint param_3)

{
  byte bVar1;
  longlong *plVar2;
  
  bVar1 = 1;
  if ((((-1 < (int)param_3) && ((int)param_3 < *(int *)(param_1 + 0x870))) && (-1 < (int)param_2))
     && (plVar2 = (longlong *)((ulonglong)param_3 * 0x28 + *(longlong *)(param_1 + 0x868)),
        (int)param_2 < (int)plVar2[1])) {
    bVar1 = *(byte *)(*plVar2 + (ulonglong)param_2) ^ 1;
  }
  return bVar1;
}



// FUNCTION 147a10b15 FUN_147a10b15 body=1231 status=ok
// SIG undefined FUN_147a10b15(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_147a10b15(float *param_1,longlong *param_2,longlong param_3,longlong param_4,
                     longlong param_5,int param_6)

{
  double *pdVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  ushort uVar6;
  int iVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  ushort uVar19;
  uint uVar20;
  longlong *plVar21;
  longlong lVar22;
  ulonglong uVar23;
  int iVar24;
  double dVar25;
  float fVar26;
  undefined1 auStack_1b8 [32];
  longlong *local_198;
  longlong *local_190;
  longlong *local_188;
  longlong local_180;
  float local_178;
  float fStack_174;
  float fStack_170;
  float local_168;
  float fStack_164;
  float fStack_160;
  float local_158;
  float fStack_154;
  float fStack_150;
  float local_148;
  float fStack_144;
  float fStack_140;
  float local_138;
  float fStack_134;
  float fStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  ulonglong uStack_120;
  undefined8 local_118;
  ulonglong uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  local_180 = param_4;
  local_198 = (longlong *)FUN_14479d2ce(param_2 + 0xcd);
  iVar7 = *(int *)(param_5 + 0x24);
  if (0 < iVar7) {
    param_6 = *(int *)(param_3 + 0x10) + param_6;
    local_188 = local_198;
    if (local_198 == (longlong *)0x0) {
      local_188 = param_2;
    }
    local_190 = local_188 + 0xda;
    iVar24 = 0;
    do {
      uVar20 = FUN_147ccebe4(param_5,param_6,iVar24);
      if ((-1 < (int)uVar20) && ((int)uVar20 < *(int *)(param_3 + 0x40))) {
        uVar6 = *(ushort *)(*(longlong *)(param_3 + 0x38) + (ulonglong)uVar20 * 2);
        uVar20 = (uint)uVar6;
        if (local_198 != (longlong *)0x0) {
          plVar21 = (longlong *)(**(code **)(*param_2 + 0xa78))(param_2,0);
          uVar20 = *(uint *)(*plVar21 + (ulonglong)uVar6 * 4);
        }
        uVar19 = FUN_147ccec3a(param_5,param_6,iVar24);
        fVar26 = (float)uVar19 * 1.5259022e-05;
        if (uVar20 == 0xffffffff) {
          local_108 = _DAT_14c846280;
          uStack_100 = _DAT_14c846288;
          local_118 = _DAT_14c846270;
          uStack_110 = _DAT_14c846278;
          local_128 = _DAT_14c846260;
          uStack_120 = _DAT_14c846268;
          uStack_12c = DAT_14c846258._4_4_;
          local_138 = DAT_14c846250;
          fStack_134 = DAT_14c846254;
          fStack_130 = (float)DAT_14c846258;
        }
        else {
          lVar8 = local_190[(longlong)(int)local_188[0xe3] * 2];
          lVar22 = (longlong)(int)uVar20 * 0x60;
          dVar13 = *(double *)(lVar8 + lVar22);
          dVar14 = ((double *)(lVar8 + lVar22))[1];
          dVar15 = *(double *)(lVar8 + 0x10 + lVar22);
          dVar9 = dVar14 + dVar14;
          dVar25 = dVar15 + dVar15;
          dVar10 = dVar13 * (dVar13 + dVar13);
          pdVar1 = (double *)(lVar8 + 0x40 + lVar22);
          dVar16 = *pdVar1;
          dVar17 = pdVar1[1];
          dVar18 = *(double *)(lVar8 + 0x50 + lVar22);
          dVar11 = *(double *)(lVar8 + lVar22) * dVar25;
          dVar5 = *(double *)(lVar8 + 0x18 + lVar22);
          dVar12 = dVar5 * (dVar13 + dVar13);
          local_138 = (float)((1.0 - (dVar15 * dVar25 + dVar14 * dVar9)) * dVar16);
          fStack_134 = (float)((dVar9 * dVar13 + dVar5 * dVar25) * dVar16);
          fStack_130 = (float)((dVar11 - dVar9 * dVar5) * dVar16);
          uStack_12c = 0;
          local_128 = CONCAT44((float)((1.0 - (dVar15 * dVar25 + dVar10)) * dVar17),
                               (float)((dVar9 * dVar13 - dVar5 * dVar25) * dVar17));
          uStack_120 = (ulonglong)(uint)(float)((dVar25 * dVar14 + dVar12) * dVar17);
          local_118 = CONCAT44((float)((dVar25 * dVar14 - dVar12) * dVar18),
                               (float)((dVar9 * dVar5 + dVar11) * dVar18));
          uStack_110 = (ulonglong)(uint)(float)((1.0 - (dVar10 + dVar14 * dVar9)) * dVar18);
          local_108 = CONCAT44((float)*(double *)(lVar8 + 0x28 + lVar22),
                               (float)*(double *)(lVar8 + 0x20 + lVar22));
          uStack_100 = CONCAT44(0x3f800000,(float)*(double *)(lVar8 + 0x30 + lVar22));
        }
        plVar21 = (longlong *)FUN_144a7954a(param_2);
        plVar21 = (longlong *)(**(code **)(*plVar21 + 0x370))(plVar21);
        FUN_144afeb32(&local_178,(ulonglong)uVar6 * 0x40 + *plVar21,&local_138);
        lVar8 = *(longlong *)(local_180 + 0x28);
        uVar23 = (ulonglong)(uint)(*(int *)(local_180 + 0x30) * param_6);
        fVar2 = *(float *)(lVar8 + uVar23);
        fVar3 = *(float *)(lVar8 + 4 + uVar23);
        fVar4 = *(float *)(lVar8 + 8 + uVar23);
        *param_1 = (fVar4 * local_158 + fVar3 * local_168 + fVar2 * local_178 + local_148) * fVar26
                   + *param_1;
        param_1[1] = (fVar4 * fStack_154 + fVar3 * fStack_164 + fVar2 * fStack_174 + fStack_144) *
                     fVar26 + param_1[1];
        param_1[2] = (fVar4 * fStack_150 + fVar3 * fStack_160 + fVar2 * fStack_170 + fStack_140) *
                     fVar26 + param_1[2];
      }
      iVar24 = iVar24 + 1;
    } while (iVar7 != iVar24);
  }
  if ((local_f0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147a110d1 FUN_147a110d1 body=391 status=ok
// SIG undefined FUN_147a110d1(void)

float * FUN_147a110d1(float *param_1,longlong *param_2,longlong param_3,longlong param_4,
                     longlong param_5,int param_6,longlong *param_7)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ushort uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  ushort uVar20;
  uint uVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  int iVar25;
  float fVar26;
  
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  lVar22 = FUN_14479d2ce(param_2 + 0xcd);
  iVar9 = *(int *)(param_5 + 0x24);
  if (0 < iVar9) {
    param_6 = *(int *)(param_3 + 0x10) + param_6;
    iVar25 = 0;
    do {
      uVar21 = FUN_147ccebe4(param_5,param_6,iVar25);
      if ((-1 < (int)uVar21) && ((int)uVar21 < *(int *)(param_3 + 0x40))) {
        uVar8 = *(ushort *)(*(longlong *)(param_3 + 0x38) + (ulonglong)uVar21 * 2);
        if (lVar22 != 0) {
          (**(code **)(*param_2 + 0xa78))(param_2,0);
        }
        uVar20 = FUN_147ccec3a(param_5,param_6,iVar25);
        if ((int)(uint)uVar8 < (int)param_7[1]) {
          lVar10 = *param_7;
          lVar24 = (ulonglong)uVar8 * 0x40;
          lVar11 = *(longlong *)(param_4 + 0x28);
          uVar23 = (ulonglong)(uint)(*(int *)(param_4 + 0x30) * param_6);
          fVar5 = *(float *)(lVar11 + uVar23);
          fVar6 = *(float *)(lVar11 + 4 + uVar23);
          fVar7 = *(float *)(lVar11 + 8 + uVar23);
          pfVar1 = (float *)(lVar10 + lVar24);
          fVar12 = pfVar1[1];
          fVar13 = pfVar1[2];
          pfVar2 = (float *)(lVar10 + 0x10 + lVar24);
          fVar14 = pfVar2[1];
          fVar15 = pfVar2[2];
          pfVar3 = (float *)(lVar10 + 0x20 + lVar24);
          fVar16 = pfVar3[1];
          fVar17 = pfVar3[2];
          pfVar4 = (float *)(lVar10 + 0x30 + lVar24);
          fVar18 = pfVar4[1];
          fVar19 = pfVar4[2];
          fVar26 = (float)uVar20 * 1.5259022e-05;
          *param_1 = (fVar7 * *pfVar3 + fVar6 * *pfVar2 + fVar5 * *pfVar1 + *pfVar4) * fVar26 +
                     *param_1;
          param_1[1] = (fVar7 * fVar16 + fVar6 * fVar14 + fVar5 * fVar12 + fVar18) * fVar26 +
                       param_1[1];
          param_1[2] = (fVar7 * fVar17 + fVar6 * fVar15 + fVar5 * fVar13 + fVar19) * fVar26 +
                       param_1[2];
        }
      }
      iVar25 = iVar25 + 1;
    } while (iVar9 != iVar25);
  }
  return param_1;
}



// FUNCTION 147a11258 FUN_147a11258 body=245 status=ok
// SIG undefined FUN_147a11258(void)

undefined4 * FUN_147a11258(longlong param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_144a7954a();
  if ((lVar2 == 0) || (*(longlong *)(param_1 + 0x8a8) == 0)) {
LAB_147a11322:
    *param_2 = 0xffffffff;
  }
  else {
    if ((*(int *)(param_1 + 0x870) < 1) ||
       (((lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x868) + 0x10), lVar2 == 0 ||
         (*(int *)(lVar2 + 8) == -1)) || (*(int *)(lVar2 + 0x34) <= param_3)))) {
      lVar2 = *(longlong *)**(undefined8 **)(*(longlong *)(param_1 + 0x8a8) + 0x40);
      if (*(int *)(lVar2 + 0x100) == -1) goto LAB_147a11322;
      FUN_147d18614(lVar2,param_3,&local_34,&local_38);
      uVar1 = *(undefined4 *)
               (*(longlong *)(lVar2 + 0x120) +
               (ulonglong)
               (uint)((local_38 +
                      *(int *)(*(longlong *)(lVar2 + 0x10) + 0x10 + (longlong)local_34 * 0xf8)) *
                     *(int *)(lVar2 + 0x128)));
    }
    else {
      uVar1 = *(undefined4 *)
               (*(longlong *)(lVar2 + 0x28) + (ulonglong)(uint)(param_3 * *(int *)(lVar2 + 0x30)));
    }
    *param_2 = uVar1;
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1134e FUN_147a1134e body=457 status=ok
// SIG undefined FUN_147a1134e(void)

double * FUN_147a1134e(longlong param_1,double *param_2,undefined4 param_3,uint param_4)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  float fVar4;
  longlong lVar5;
  float fVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [40];
  int local_50;
  int local_4c;
  double local_48;
  double dStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = DAT_14c8463f0;
  dStack_40 = DAT_14c8463f8;
  lVar5 = FUN_144a7954a();
  if (((lVar5 == 0) || (*(longlong *)(param_1 + 0x8a8) == 0)) ||
     (lVar5 = *(longlong *)**(undefined8 **)(*(longlong *)(param_1 + 0x8a8) + 0x40),
     *(int *)(lVar5 + 0x38) == -1)) {
    *param_2 = local_48;
    param_2[1] = dStack_40;
  }
  else {
    FUN_147d18614(lVar5,param_3,&local_4c,&local_50);
    uVar3 = *(uint *)(lVar5 + 0xa8);
    if (uVar3 <= param_4) {
      param_4 = uVar3;
    }
    uVar8 = (ulonglong)param_4;
    uVar7 = (ulonglong)
            (uint)(local_50 +
                  *(int *)(*(longlong *)(lVar5 + 0x10) + 0x10 + (longlong)local_4c * 0xf8));
    if (*(char *)(lVar5 + 0xb0) == '\x01') {
      lVar5 = *(longlong *)(lVar5 + 0x98) + uVar3 * uVar7 * 8;
      fVar6 = *(float *)(lVar5 + uVar8 * 8);
      fVar4 = *(float *)(lVar5 + 4 + uVar8 * 8);
    }
    else {
      lVar5 = *(longlong *)(lVar5 + 0x98) + uVar3 * uVar7 * 4;
      uVar1 = *(ushort *)(lVar5 + 2 + uVar8 * 4);
      uVar3 = (uint)uVar1 << 0xd;
      if ((uVar3 & 0xf800000) == 0xf800000) {
        fVar4 = (float)(uVar3 | 0x70000000);
      }
      else if ((uVar3 & 0xf800000) == 0) {
        fVar4 = (float)(uVar3 | 0x38800000) + -6.1035156e-05;
      }
      else {
        fVar4 = (float)((uVar3 & 0xfffe000) + 0x38000000);
      }
      uVar2 = *(ushort *)(lVar5 + uVar8 * 4);
      uVar3 = (uint)uVar2 << 0xd;
      if ((uVar3 & 0xf800000) == 0xf800000) {
        fVar6 = (float)(uVar3 | 0x70000000);
      }
      else if ((uVar3 & 0xf800000) == 0) {
        fVar6 = (float)(uVar3 | 0x38800000) + -6.1035156e-05;
      }
      else {
        fVar6 = (float)((uVar3 & 0xfffe000) + 0x38000000);
      }
      fVar4 = (float)((uint)fVar4 | (int)(short)uVar1 & 0x80000000U);
      fVar6 = (float)((int)(short)uVar2 & 0x80000000U | (uint)fVar6);
    }
    *param_2 = (double)fVar6;
    param_2[1] = (double)fVar4;
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a11518 FUN_147a11518 body=41 status=ok
// SIG undefined FUN_147a11518(void)

undefined8 FUN_147a11518(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_144909502();
  if (iVar1 != -1) {
    uVar2 = FUN_140c6f8de(param_1,iVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 147a11542 FUN_147a11542 body=29 status=ok
// SIG undefined FUN_147a11542(void)

void FUN_147a11542(longlong *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0xab8))();
  *(undefined4 *)(param_1 + 0x10a) = uVar1;
  return;
}



// FUNCTION 147a11560 FUN_147a11560 body=36 status=ok
// SIG undefined FUN_147a11560(void)

void FUN_147a11560(longlong *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0xab8))();
  *(undefined4 *)(param_1 + 0x10a) = uVar1;
  *(byte *)((longlong)param_1 + 0x89e) = *(byte *)((longlong)param_1 + 0x89e) | 8;
  return;
}



// FUNCTION 147a11584 FUN_147a11584 body=36 status=ok
// SIG undefined FUN_147a11584(void)

void FUN_147a11584(longlong param_1,char param_2)

{
  if (-1 < (char)*(byte *)(param_1 + 0x89f) != (bool)param_2) {
    return;
  }
  *(byte *)(param_1 + 0x89f) = *(byte *)(param_1 + 0x89f) & 0x7f | param_2 << 7;
  FUN_1448215fa();
  return;
}



// FUNCTION 147a115a8 FUN_147a115a8 body=34 status=ok
// SIG undefined FUN_147a115a8(void)

void FUN_147a115a8(longlong param_1,byte param_2)

{
  if ((*(byte *)(param_1 + 0x8a0) & 1) != param_2) {
    *(byte *)(param_1 + 0x8a0) = *(byte *)(param_1 + 0x8a0) & 0xfe | param_2;
    FUN_1448215fa();
    return;
  }
  return;
}



// FUNCTION 147a115ca FUN_147a115ca body=29 status=ok
// SIG undefined FUN_147a115ca(void)

void FUN_147a115ca(longlong param_1,float param_2)

{
  if ((*(float *)(param_1 + 0x8a4) == param_2) &&
     (!NAN(*(float *)(param_1 + 0x8a4)) && !NAN(param_2))) {
    return;
  }
  *(float *)(param_1 + 0x8a4) = param_2;
  FUN_1448215fa();
  return;
}



// FUNCTION 147a115e8 FUN_147a115e8 body=60 status=ok
// SIG undefined FUN_147a115e8(void)

int FUN_147a115e8(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_144a7954a(param_1 + -0x650);
  iVar1 = -1;
  if ((lVar2 != 0) && (*(longlong *)(param_1 + 600) != 0)) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 600) + 0x28) + DAT_14cad29b4;
  }
  return iVar1;
}



// FUNCTION 147a11624 FUN_147a11624 body=70 status=ok
// SIG undefined FUN_147a11624(void)

ulonglong FUN_147a11624(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar3 = FUN_144a7954a(param_1 + -0x650);
  uVar4 = 0xffffffff;
  if ((lVar3 != 0) && (*(longlong *)(param_1 + 600) != 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 600) + 0x40);
    bVar1 = *(byte *)(lVar3 + 0x1b);
    bVar2 = (byte)*(undefined4 *)(lVar3 + 0x1c);
    if (bVar2 < bVar1) {
      bVar2 = bVar1;
    }
    uVar4 = (ulonglong)bVar2;
  }
  return uVar4;
}



// FUNCTION 147a11674 FUN_147a11674 body=41 status=ok
// SIG undefined FUN_147a11674(void)

undefined4 FUN_147a11674(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*(longlong *)(param_1 + -0x650) + 0xa90))(param_1 + -0x650);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(lVar2 + 8);
  }
  return uVar1;
}



// FUNCTION 147a1169e FUN_147a1169e body=278 status=ok
// SIG undefined FUN_147a1169e(void)

void FUN_147a1169e(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  
  lVar4 = FUN_14479d2ce(param_1 + 0xcd);
  plVar5 = param_1;
  if (lVar4 != 0) {
    plVar5 = (longlong *)FUN_14479d2ce(param_1 + 0xcd);
  }
  lVar4 = plVar5[0x109];
  plVar1 = plVar5 + 0xca;
  (**(code **)(plVar5[0xca] + 0x28))(plVar1,param_3);
  (**(code **)(plVar5[0xca] + 0x30))(plVar1,param_3);
  (**(code **)(*plVar5 + 0xb20))(plVar5);
  (**(code **)(*plVar5 + 0xaf8))(plVar5,0);
  bVar2 = *(byte *)(param_1 + 0x114);
  *(byte *)(param_1 + 0x114) = bVar2 & 0xdf;
  FUN_143493152(param_1,1,1);
  if ((longlong *)param_1[0x115] != (longlong *)0x0) {
    cVar3 = (**(code **)(*(longlong *)param_1[0x115] + 0x40))();
    if (cVar3 != '\0') {
      FUN_147a117b4(param_2,param_1[0x115] + 0x168);
    }
  }
  uVar7 = (ulonglong)CONCAT31((int3)((uint)param_3 >> 8),bVar2) & 0xffffffffffffff02;
  iVar6 = (int)lVar4 + -1;
  (**(code **)(*plVar1 + 0x28))(plVar1,iVar6);
  (**(code **)(*plVar1 + 0x30))(plVar1,iVar6);
  *(byte *)(param_1 + 0x114) = *(byte *)(param_1 + 0x114) & 0xdf | bVar2 & 0x20;
  FUN_143493152(param_1,CONCAT71((int7)(uVar7 >> 8),(byte)uVar7 >> 1),1);
  return;
}



// FUNCTION 147a117b4 FUN_147a117b4 body=89 status=ok
// SIG undefined FUN_147a117b4(void)

undefined8 * FUN_147a117b4(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147a166dc(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x60);
      }
    }
  }
  return param_1;
}



// FUNCTION 147a1180e FUN_147a1180e body=128 status=ok
// SIG undefined FUN_147a1180e(void)

void FUN_147a1180e(longlong param_1,undefined8 param_2,int param_3,undefined4 param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = FUN_144a7954a();
  if (lVar1 != 0) {
    if (param_3 < 0) {
      plVar3 = (longlong *)FUN_144a7954a(param_1);
      param_3 = (**(code **)(*plVar3 + 0x428))(plVar3,1);
    }
    uVar2 = FUN_144a7954a(param_1);
    FUN_147d5e8c2(uVar2,param_1,param_3,param_4,param_5,param_2);
    *(byte *)(param_1 + 0x8a2) = *(byte *)(param_1 + 0x8a2) | 2;
  }
  return;
}



// FUNCTION 147a1188e FUN_147a1188e body=109 status=ok
// SIG undefined FUN_147a1188e(void)

void FUN_147a1188e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_144a7954a();
  if (lVar1 != 0) {
    uVar2 = FUN_144a7954a(param_1);
    FUN_147d5ea50(uVar2,param_1,param_4,param_2,param_5,param_3);
    *(byte *)(param_1 + 0x8a2) = *(byte *)(param_1 + 0x8a2) | 2;
  }
  return;
}



// FUNCTION 147a118fc FUN_147a118fc body=263 status=ok
// SIG undefined FUN_147a118fc(void)

ulonglong FUN_147a118fc(longlong *param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_144a7954a();
  if (lVar3 == 0) {
    bVar1 = 0;
  }
  else {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cad2b78) {
      FUN_144b3d300(&DAT_14cad2b78);
      if (DAT_14cad2b78 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        DAT_14cad2b70 =
             (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))
                       (DAT_14c8407a8,L"r.Streaming.AllowFastForceResident",1);
        _Init_thread_footer(&DAT_14cad2b78);
      }
    }
    if (DAT_14cad2b70 == (longlong *)0x0) {
      bVar1 = 0;
    }
    else {
      iVar2 = (**(code **)(*DAT_14cad2b70 + 0xb0))();
      bVar1 = (iVar2 != 0) << 4;
    }
    *(byte *)(lVar3 + 0xbc) = *(byte *)(lVar3 + 0xbc) & 0xef | bVar1;
    FUN_14371bf72(lVar3,param_2,0);
    lVar4 = FUN_140083894();
    param_1 = *(longlong **)(lVar4 + 0x30);
    bVar1 = (**(code **)(*param_1 + 0xa0))(param_1,lVar3);
  }
  return CONCAT71((int7)((ulonglong)param_1 >> 8),lVar3 != 0 & bVar1) & 0xffffffff;
}



// FUNCTION 147a11a04 FUN_147a11a04 body=67 status=ok
// SIG undefined FUN_147a11a04(void)

void FUN_147a11a04(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_140414380(*(longlong *)(param_1 + 0x10),&DAT_14cb00c08);
    FUN_14080c2b4();
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
  }
  return;
}



// FUNCTION 147a11a48 FUN_147a11a48 body=47 status=ok
// SIG undefined FUN_147a11a48(void)

void FUN_147a11a48(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1417eb482();
    FUN_14080c2b4();
    FUN_1403c6164(param_1);
    return;
  }
  return;
}



// FUNCTION 147a11a78 FUN_147a11a78 body=347 status=ok
// SIG undefined FUN_147a11a78(void)

void FUN_147a11a78(undefined8 param_1,undefined4 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  if ((0 < (int)param_3[1]) && (FUN_1469886f0(local_38,(int)param_3[1],1), 0 < (int)param_3[1])) {
    lVar2 = 0xc;
    lVar3 = 0;
    do {
      lVar1 = *param_3;
      fVar4 = *(float *)(lVar1 + lVar2);
      if (fVar4 <= 0.0) {
        fVar4 = 0.0;
      }
      if (1.0 <= fVar4) {
        fVar4 = 1.0;
      }
      fVar5 = *(float *)(lVar1 + -4 + lVar2);
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
      if (1.0 <= fVar5) {
        fVar5 = 1.0;
      }
      fVar6 = *(float *)(lVar1 + -0xc + lVar2);
      fVar7 = *(float *)(lVar1 + -8 + lVar2);
      if (fVar7 <= 0.0) {
        fVar7 = 0.0;
      }
      if (1.0 <= fVar7) {
        fVar7 = 1.0;
      }
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      if (1.0 <= fVar6) {
        fVar6 = 1.0;
      }
      *(uint *)(local_38[0] + lVar3 * 4) =
           (int)(fVar5 * 255.0 + 0.5) & 0xffU |
           ((int)(fVar7 * 255.0 + 0.5) & 0xffU) << 8 |
           ((int)(fVar6 * 255.0 + 0.5) & 0xffU) << 0x10 | (int)(fVar4 * 255.0 + 0.5) << 0x18;
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x10;
    } while (lVar3 < (int)param_3[1]);
  }
  FUN_143494f56(param_1,param_2,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a11bd4 FUN_147a11bd4 body=69 status=ok
// SIG undefined FUN_147a11bd4(void)

void FUN_147a11bd4(longlong param_1,uint param_2)

{
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x870))) {
    if (*(longlong *)(*(longlong *)(param_1 + 0x868) + 0x10 + (ulonglong)param_2 * 0x28) != 0) {
      FUN_147a11a04(*(longlong *)(param_1 + 0x868) + (ulonglong)param_2 * 0x28);
      FUN_1448215fa(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 147a11c1a FUN_147a11c1a body=78 status=ok
// SIG undefined FUN_147a11c1a(void)

void FUN_147a11c1a(longlong param_1,undefined8 param_2,byte param_3)

{
  undefined4 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = *(undefined4 *)(param_1 + 0x8c8);
  local_18._4_4_ = *(undefined4 *)(param_1 + 0x8cc);
  uStack_10 = *(undefined4 *)(param_1 + 0x8d0);
  uStack_c = *(undefined4 *)(param_1 + 0x8d4);
  local_18._0_4_ = uVar1;
  (&local_18)[param_3] = param_2;
  FUN_147a11c6a(uVar1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a11c6a FUN_147a11c6a body=1042 status=ok
// SIG undefined FUN_147a11c6a(void)

ulonglong FUN_147a11c6a(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined ***pppuVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined ***pppuVar10;
  code **ppcVar11;
  ulonglong uVar12;
  byte bVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  bool bVar17;
  bool bVar18;
  undefined1 auStack_e8 [32];
  code **local_c8;
  undefined4 local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  code *local_98 [2];
  undefined ***local_88;
  undefined **local_78;
  longlong local_70;
  longlong local_58 [3];
  
  local_58[2] = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar15 = 0;
  FUN_1433f4f2c(local_98,0,param_3,&DAT_149eda618);
  uVar7 = 0;
  bVar17 = true;
  do {
    bVar1 = bVar17;
    if ((code *)param_2[lVar15] != (code *)0x0) {
      uVar12 = (ulonglong)uVar7;
      uVar7 = uVar7 + 1;
      local_98[uVar12] = (code *)param_2[lVar15];
    }
    lVar15 = 1;
    bVar17 = false;
  } while (bVar1);
  local_b0 = param_1[0x119];
  local_b8 = param_1[0x11a];
  FUN_1433f4f2c(local_58,0);
  uVar12 = 0;
  plVar4 = &local_b0;
  bVar17 = true;
  do {
    bVar1 = bVar17;
    uVar14 = uVar12;
    if (*plVar4 != 0) {
      uVar14 = (ulonglong)((int)uVar12 + 1);
      local_58[uVar12] = *plVar4;
    }
    uVar12 = uVar14;
    plVar4 = &local_b8;
    bVar17 = false;
  } while (bVar1);
  ppcVar11 = local_98;
  plVar4 = local_58;
  bVar17 = true;
  while (*ppcVar11 == (code *)*plVar4) {
    bVar1 = !bVar17;
    ppcVar11 = local_98 + 1;
    plVar4 = local_58 + 1;
    bVar17 = false;
    if (bVar1) {
      uVar12 = CONCAT71((int7)((ulonglong)(local_98 + 1) >> 8),1);
LAB_147a11ed3:
      if ((local_58[2] ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return uVar12 & 0xffffffff;
    }
  }
  plVar4 = (longlong *)(**(code **)(*param_1 + 0xa90))(param_1);
  if (plVar4 != (longlong *)0x0) {
    if (param_2[1] == 0 && *param_2 == 0) {
      if (((*(byte *)((longlong)param_1 + 0x89e) & 2) != 0) &&
         (FUN_1409b47b8(), 0 < (int)param_1[0x10e])) {
        lVar15 = 0x20;
        lVar9 = 0;
        bVar17 = false;
        do {
          bVar1 = bVar17;
          bVar18 = *(longlong *)(param_1[0x10d] + lVar15) != 0;
          *(undefined8 *)(param_1[0x10d] + lVar15) = 0;
          lVar9 = lVar9 + 1;
          lVar15 = lVar15 + 0x28;
          bVar17 = (bool)(bVar1 | bVar18);
        } while (lVar9 < (int)param_1[0x10e]);
        if (bVar1 || bVar18) {
          *(byte *)((longlong)param_1 + 0x8a1) = *(byte *)((longlong)param_1 + 0x8a1) | 0x10;
          FUN_1448215fa(param_1);
          plVar4 = (longlong *)param_1[0x115];
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x88))(plVar4,param_1);
          }
        }
      }
      uVar12 = CONCAT71((int7)((ulonglong)ppcVar11 >> 8),1);
      if ((*(byte *)((longlong)param_1 + 0x89e) & 4) != 0) {
        lVar15 = param_1[0x16];
        if (lVar15 == 0) {
          lVar15 = FUN_1448abda6(param_1);
        }
        lVar15 = FUN_140a2dd74(lVar15);
        if (lVar15 != 0) {
          FUN_140a2e418(lVar15,param_1);
        }
      }
      goto LAB_147a11eb9;
    }
    FUN_1409b47b8(param_1);
    iVar3 = (int)param_1[0x10e];
    if (0 < iVar3) {
      lVar15 = 0;
      bVar13 = 0;
      bVar17 = false;
      iVar8 = DAT_14c7612f4;
      do {
        if (iVar8 < lVar15) {
          lVar16 = *(longlong *)(*plVar4 + lVar15 * 8) + 0x298;
          lVar9 = 0;
          bVar17 = true;
          do {
            bVar1 = bVar17;
            local_98[0] = (code *)param_2[lVar9];
            bVar2 = FUN_14793dad4(lVar16,local_98);
            bVar13 = bVar13 | bVar2;
            lVar9 = 1;
            bVar17 = false;
          } while (bVar1);
          lVar9 = FUN_1433f2764(lVar16,param_2);
          *(longlong *)(param_1[0x10d] + 0x20 + lVar15 * 0x28) = lVar9;
          bVar17 = lVar9 != 0;
          iVar3 = (int)param_1[0x10e];
          iVar8 = DAT_14c7612f4;
        }
        lVar15 = lVar15 + 1;
      } while (lVar15 < iVar3);
      if ((bVar13 & 1) != 0) {
        if (bVar17) {
          *(byte *)((longlong)param_1 + 0x8a1) = *(byte *)((longlong)param_1 + 0x8a1) | 0x10;
          FUN_1448215fa(param_1);
          plVar4 = (longlong *)param_1[0x115];
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x88))(plVar4,param_1);
          }
          *(byte *)((longlong)param_1 + 0x89e) = *(byte *)((longlong)param_1 + 0x89e) | 2;
        }
        else {
          local_58[0] = 0;
          FUN_14485c47a(local_58,param_1);
          local_88 = (undefined ***)0x0;
          local_78 = &PTR_LAB_14a879470;
          local_70 = local_58[0];
          local_98[0] = FUN_143497b58;
          lVar15 = param_1[0x16];
          if (lVar15 == 0) {
            lVar15 = FUN_1448abda6(param_1);
          }
          lVar15 = FUN_140a2dd74(lVar15);
          if (lVar15 == 0) {
            pppuVar6 = (undefined ***)0x0;
          }
          else {
            if ((*(byte *)((longlong)param_1 + 0x89e) & 4) != 0) {
              FUN_140a2e418(lVar15,param_1);
            }
            uVar5 = FUN_144a7954a(param_1);
            local_a8 = (undefined4)*param_2;
            uStack_a4 = *(undefined4 *)((longlong)param_2 + 4);
            uStack_a0 = (undefined4)param_2[1];
            uStack_9c = *(undefined4 *)((longlong)param_2 + 0xc);
            local_c0 = 0xffffffff;
            local_c8 = local_98;
            FUN_1433f28d2(lVar15,&local_a8,uVar5,param_1);
            *(byte *)((longlong)param_1 + 0x89e) = *(byte *)((longlong)param_1 + 0x89e) | 4;
            pppuVar6 = local_88;
            if (local_98[0] == (code *)0x0) goto LAB_147a11eb3;
          }
          pppuVar10 = &local_78;
          if (pppuVar6 != (undefined ***)0x0) {
            pppuVar10 = pppuVar6;
          }
          (*(code *)(*pppuVar10)[2])();
        }
LAB_147a11eb3:
        uVar12 = CONCAT71((int7)((ulonglong)local_98 >> 8),1);
        goto LAB_147a11eb9;
      }
    }
  }
  uVar12 = 0;
LAB_147a11eb9:
  lVar15 = *param_2;
  if (lVar15 == 0) {
    if (param_2[1] == 0) {
      *(byte *)((longlong)param_1 + 0x89e) = *(byte *)((longlong)param_1 + 0x89e) & 0xf9;
      lVar15 = *param_2;
    }
    else {
      lVar15 = 0;
    }
  }
  param_1[0x119] = lVar15;
  param_1[0x11a] = param_2[1];
  goto LAB_147a11ed3;
}



// FUNCTION 147a1207e FUN_147a1207e body=81 status=ok
// SIG undefined FUN_147a1207e(void)

void FUN_147a1207e(longlong param_1,byte param_2)

{
  undefined4 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = *(undefined4 *)(param_1 + 0x8c8);
  local_18._4_4_ = *(undefined4 *)(param_1 + 0x8cc);
  uStack_10 = *(undefined4 *)(param_1 + 0x8d0);
  uStack_c = *(undefined4 *)(param_1 + 0x8d4);
  local_18._0_4_ = uVar1;
  (&local_18)[param_2] = 0;
  FUN_147a11c6a(uVar1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a120d0 FUN_147a120d0 body=86 status=ok
// SIG undefined FUN_147a120d0(void)

void FUN_147a120d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1433f4f2c(local_28,0,param_3,&DAT_149eda618);
  FUN_147a11c6a(param_1,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a12128 FUN_147a12128 body=1 status=ok
// SIG undefined FUN_147a12128(void)

void FUN_147a12128(void)

{
  return;
}



// FUNCTION 147a1212a FUN_147a1212a body=84 status=ok
// SIG undefined FUN_147a1212a(void)

ulonglong FUN_147a1212a(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  undefined7 uVar4;
  
  uVar4 = (undefined7)((ulonglong)unaff_RSI >> 8);
  uVar3 = CONCAT71(uVar4,1);
  if ((*(byte *)(param_1 + 0x89e) & 2) == 0) {
    plVar1 = (longlong *)FUN_144a7954a();
    if (plVar1 != (longlong *)0x0) {
      lVar2 = (**(code **)(*plVar1 + 0x470))(plVar1,*(undefined4 *)(param_1 + 0x854));
      if (lVar2 != 0) {
        if (*(char *)(lVar2 + 0xb0) == '\0') {
          uVar3 = CONCAT71(uVar4,*(undefined1 *)(lVar2 + 0xb1));
        }
        goto LAB_147a12175;
      }
    }
    uVar3 = 0;
  }
LAB_147a12175:
  return uVar3 & 0xffffffff;
}



// FUNCTION 147a1217e FUN_147a1217e body=97 status=ok
// SIG undefined FUN_147a1217e(void)

undefined8 * FUN_147a1217e(undefined8 param_1,undefined8 *param_2,uint param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147a121e0(param_1,local_30);
  *param_2 = *(undefined8 *)(local_30[0] + (ulonglong)(param_3 & 0xff) * 8);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a121e0 FUN_147a121e0 body=211 status=ok
// SIG undefined FUN_147a121e0(void)

longlong * FUN_147a121e0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1433f4f2c(&local_28,0,param_3,&DAT_149eda618);
  if ((*(byte *)(param_1 + 0x89e) & 2) != 0) {
    local_28 = *(undefined8 *)(param_1 + 0x8c8);
    uStack_20 = *(undefined8 *)(param_1 + 0x8d0);
  }
  plVar1 = (longlong *)FUN_144a7954a(param_1);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x470))(plVar1,*(undefined4 *)(param_1 + 0x854));
    if ((lVar2 != 0) && ((*(char *)(lVar2 + 0xb0) != '\0' || (*(char *)(lVar2 + 0xb1) == '\x01'))))
    {
      local_28 = *(undefined8 *)(lVar2 + 0xb4);
      uStack_20 = *(undefined8 *)(lVar2 + 0xbc);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1406089a0(param_2,2,1);
  *(undefined8 *)*param_2 = local_28;
  *(undefined8 *)(*param_2 + 8) = uStack_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a122b4 FUN_147a122b4 body=60 status=ok
// SIG undefined FUN_147a122b4(void)

void FUN_147a122b4(longlong param_1)

{
  longlong *plVar1;
  
  *(byte *)(param_1 + 0x8a1) = *(byte *)(param_1 + 0x8a1) | 0x10;
  FUN_1448215fa();
  plVar1 = *(longlong **)(param_1 + 0x8a8);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147a122e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x88))(plVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 147a122f0 FUN_147a122f0 body=67 status=ok
// SIG undefined FUN_147a122f0(void)

void FUN_147a122f0(longlong *param_1,char param_2)

{
  if (((*(byte *)(param_1 + 0x114) & 0x20) == 0) != (bool)param_2) {
    return;
  }
  *(byte *)(param_1 + 0x114) = *(byte *)(param_1 + 0x114) & 0xdf | param_2 << 5;
  (**(code **)(*param_1 + 0x310))(param_1);
  FUN_1448215fa(param_1);
  return;
}



// FUNCTION 147a12333 FUN_147a12333 body=1022 status=ok
// SIG undefined FUN_147a12333(void)

void FUN_147a12333(longlong param_1,longlong param_2,longlong param_3,longlong param_4,int param_5,
                  longlong *param_6,float *param_7,float *param_8,float *param_9)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  ushort uVar5;
  int iVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  ushort uVar18;
  int iVar19;
  ulonglong uVar20;
  int iVar21;
  longlong lVar22;
  float fVar23;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  
  param_7[2] = DAT_14c846338;
  *(undefined8 *)param_7 = DAT_14c846330;
  param_8[2] = DAT_14c846338;
  *(undefined8 *)param_8 = DAT_14c846330;
  param_9[2] = DAT_14c846338;
  *(undefined8 *)param_9 = DAT_14c846330;
  auVar24._0_8_ = FUN_14479d2ce(param_1 + 0x668);
  auVar24._8_8_ = extraout_XMM0_Qb;
  iVar6 = *(int *)(param_4 + 0x24);
  lVar7 = *(longlong *)(param_3 + 0x60);
  uVar20 = (ulonglong)(uint)(*(int *)(param_2 + 0x10) + param_5);
  if (*(char *)(param_3 + 0x81) == '\x01') {
    auVar24 = pmovsxwd(auVar24,*(undefined8 *)(lVar7 + uVar20 * 0x10));
    fVar25 = (float)auVar24._0_4_ * 3.051851e-05;
    fVar26 = (float)auVar24._4_4_ * 3.051851e-05;
    fVar27 = (float)auVar24._8_4_ * 3.051851e-05;
    auVar24 = pmovsxwd(auVar24,*(undefined8 *)(lVar7 + 8 + uVar20 * 0x10));
    fVar28 = (float)auVar24._0_4_ * 3.051851e-05;
    fVar29 = (float)auVar24._4_4_ * 3.051851e-05;
    fVar30 = (float)auVar24._8_4_ * 3.051851e-05;
    fVar31 = (float)auVar24._12_4_ * 3.051851e-05;
  }
  else {
    auVar24 = pmovsxbd(auVar24,*(undefined4 *)(lVar7 + uVar20 * 8));
    fVar25 = (float)auVar24._0_4_ * 0.007874016;
    fVar26 = (float)auVar24._4_4_ * 0.007874016;
    fVar27 = (float)auVar24._8_4_ * 0.007874016;
    auVar24 = pmovsxbd(auVar24,*(undefined4 *)(lVar7 + 4 + uVar20 * 8));
    fVar28 = (float)auVar24._0_4_ * 0.007874016;
    fVar29 = (float)auVar24._4_4_ * 0.007874016;
    fVar30 = (float)auVar24._8_4_ * 0.007874016;
    fVar31 = (float)auVar24._12_4_ * 0.007874016;
  }
  if (0 < iVar6) {
    fVar16 = (fVar29 * fVar27 - fVar30 * fVar26) * fVar31;
    fVar17 = (fVar30 * fVar25 - fVar27 * fVar28) * fVar31;
    fVar31 = (fVar28 * fVar26 - fVar25 * fVar29) * fVar31;
    iVar21 = 0;
    do {
      iVar19 = FUN_147ccebe4(param_4,uVar20,iVar21);
      uVar5 = *(ushort *)(*(longlong *)(param_2 + 0x38) + (longlong)iVar19 * 2);
      uVar18 = FUN_147ccec3a(param_4,uVar20,iVar21);
      lVar7 = *param_6;
      lVar22 = (ulonglong)uVar5 * 0x40;
      pfVar1 = (float *)(lVar7 + lVar22);
      fVar8 = pfVar1[1];
      fVar9 = pfVar1[2];
      fVar23 = (float)uVar18 * 1.5259022e-05;
      pfVar2 = (float *)(lVar7 + 0x10 + lVar22);
      fVar10 = pfVar2[1];
      fVar11 = pfVar2[2];
      pfVar3 = (float *)(lVar7 + 0x20 + lVar22);
      fVar12 = pfVar3[1];
      fVar13 = pfVar3[2];
      pfVar4 = (float *)(lVar7 + 0x30 + lVar22);
      fVar14 = pfVar4[1];
      fVar15 = pfVar4[2];
      *param_7 = (*pfVar4 * 0.0 + *pfVar3 * fVar27 + *pfVar2 * fVar26 + *pfVar1 * fVar25) * fVar23 +
                 *param_7;
      param_7[1] = (fVar14 * 0.0 + fVar12 * fVar27 + fVar10 * fVar26 + fVar8 * fVar25) * fVar23 +
                   param_7[1];
      param_7[2] = (fVar15 * 0.0 + fVar13 * fVar27 + fVar11 * fVar26 + fVar9 * fVar25) * fVar23 +
                   param_7[2];
      pfVar1 = (float *)(lVar7 + lVar22);
      fVar8 = pfVar1[1];
      fVar9 = pfVar1[2];
      pfVar2 = (float *)(lVar7 + 0x10 + lVar22);
      fVar10 = pfVar2[1];
      fVar11 = pfVar2[2];
      pfVar3 = (float *)(lVar7 + 0x20 + lVar22);
      fVar12 = pfVar3[1];
      fVar13 = pfVar3[2];
      pfVar4 = (float *)(lVar7 + 0x30 + lVar22);
      fVar14 = pfVar4[1];
      fVar15 = pfVar4[2];
      *param_8 = (*pfVar4 * 0.0 + *pfVar3 * fVar31 + *pfVar2 * fVar17 + *pfVar1 * fVar16) * fVar23 +
                 *param_8;
      param_8[1] = (fVar14 * 0.0 + fVar12 * fVar31 + fVar10 * fVar17 + fVar8 * fVar16) * fVar23 +
                   param_8[1];
      param_8[2] = (fVar15 * 0.0 + fVar13 * fVar31 + fVar11 * fVar17 + fVar9 * fVar16) * fVar23 +
                   param_8[2];
      pfVar1 = (float *)(lVar7 + lVar22);
      fVar8 = pfVar1[1];
      fVar9 = pfVar1[2];
      pfVar2 = (float *)(lVar7 + 0x10 + lVar22);
      fVar10 = pfVar2[1];
      fVar11 = pfVar2[2];
      pfVar3 = (float *)(lVar7 + 0x20 + lVar22);
      fVar12 = pfVar3[1];
      fVar13 = pfVar3[2];
      pfVar4 = (float *)(lVar7 + 0x30 + lVar22);
      fVar14 = pfVar4[1];
      fVar15 = pfVar4[2];
      *param_9 = (*pfVar4 * 0.0 + *pfVar3 * fVar30 + *pfVar2 * fVar29 + *pfVar1 * fVar28) * fVar23 +
                 *param_9;
      param_9[1] = (fVar14 * 0.0 + fVar12 * fVar30 + fVar10 * fVar29 + fVar8 * fVar28) * fVar23 +
                   param_9[1];
      param_9[2] = (fVar15 * 0.0 + fVar13 * fVar30 + fVar11 * fVar29 + fVar9 * fVar28) * fVar23 +
                   param_9[2];
      iVar21 = iVar21 + 1;
    } while (iVar6 != iVar21);
  }
  return;
}



// FUNCTION 147a12732 FUN_147a12732 body=163 status=ok
// SIG undefined FUN_147a12732(void)

ulonglong FUN_147a12732(undefined8 param_1,undefined8 param_2,int *param_3,int *param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 unaff_RBP;
  ulonglong uVar7;
  int iVar8;
  
  lVar4 = FUN_144a7954a();
  if ((lVar4 == 0) || (iVar3 = FUN_144909502(param_1,param_2), iVar3 == -1)) {
    uVar7 = 0;
  }
  else {
    plVar5 = (longlong *)FUN_144a7954a(param_1);
    lVar4 = (**(code **)(*plVar5 + 0x310))(plVar5);
    iVar1 = *(int *)(lVar4 + 0x28);
    *param_4 = iVar3;
    *param_3 = iVar3;
    iVar8 = iVar3 + 1;
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    if (iVar8 < iVar1) {
      do {
        plVar5 = (longlong *)FUN_144a7954a(param_1);
        uVar6 = (**(code **)(*plVar5 + 0x310))(plVar5);
        cVar2 = FUN_1404183aa(uVar6,iVar8,iVar3);
        if (cVar2 == '\0') break;
        *param_4 = iVar8;
        iVar8 = iVar8 + 1;
      } while (iVar1 != iVar8);
    }
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 147a127d6 FUN_147a127d6 body=78 status=ok
// SIG undefined FUN_147a127d6(void)

undefined8
FUN_147a127d6(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x158,0x10);
  FUN_147d24c38(uVar1,param_1,param_2,param_3,param_4);
  return uVar1;
}



// FUNCTION 147a12824 FUN_147a12824 body=78 status=ok
// SIG undefined FUN_147a12824(void)

undefined8
FUN_147a12824(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x1a0,0x10);
  FUN_147d219c2(uVar1,param_1,param_2,param_3,param_4);
  return uVar1;
}



// FUNCTION 147a1288c FUN_147a1288c body=45 status=ok
// SIG undefined FUN_147a1288c(void)

longlong FUN_147a1288c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140b87324(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a128ba FUN_147a128ba body=45 status=ok
// SIG undefined FUN_147a128ba(void)

longlong FUN_147a128ba(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14083f1da(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a128e8 FUN_147a128e8 body=43 status=ok
// SIG undefined FUN_147a128e8(void)

undefined8 FUN_147a128e8(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Components/ReflectionCaptureComponent.h",0x57,
                L"Pure virtual not implemented (%s)",
                L"UReflectionCaptureComponent::GetInfluenceBoundingRadius");
  return 0;
}



// FUNCTION 147a1291e FUN_147a1291e body=45 status=ok
// SIG undefined FUN_147a1291e(void)

longlong FUN_147a1291e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e852(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a1294c FUN_147a1294c body=45 status=ok
// SIG undefined FUN_147a1294c(void)

longlong FUN_147a1294c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1458b9a42(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a1297a FUN_147a1297a body=45 status=ok
// SIG undefined FUN_147a1297a(void)

longlong FUN_147a1297a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1458271e8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a129a8 FUN_147a129a8 body=45 status=ok
// SIG undefined FUN_147a129a8(void)

longlong FUN_147a129a8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a129d6 FUN_147a129d6 body=48 status=ok
// SIG undefined FUN_147a129d6(void)

longlong FUN_147a129d6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a12a06 FUN_147a12a06 body=48 status=ok
// SIG undefined FUN_147a12a06(void)

longlong FUN_147a12a06(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a12a36 FUN_147a12a36 body=48 status=ok
// SIG undefined FUN_147a12a36(void)

longlong FUN_147a12a36(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a12a82 FUN_147a12a82 body=45 status=ok
// SIG undefined FUN_147a12a82(void)

longlong FUN_147a12a82(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1403c5294(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a12ab6 FUN_147a12ab6 body=48 status=ok
// SIG undefined FUN_147a12ab6(void)

longlong FUN_147a12ab6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_1403c5294(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a12aee FUN_147a12aee body=48 status=ok
// SIG undefined FUN_147a12aee(void)

longlong FUN_147a12aee(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_1403c5294(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a12b26 FUN_147a12b26 body=48 status=ok
// SIG undefined FUN_147a12b26(void)

longlong FUN_147a12b26(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_1403c5294(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a12b5e FUN_147a12b5e body=48 status=ok
// SIG undefined FUN_147a12b5e(void)

longlong FUN_147a12b5e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xad0;
  FUN_1403c5294(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a12ba6 FUN_147a12ba6 body=41 status=ok
// SIG undefined FUN_147a12ba6(void)

void FUN_147a12ba6(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Components/SkinnedMeshComponent.h",0x61e,
                L"Pure virtual not implemented (%s)",L"USkinnedMeshComponent::RefreshBoneTransforms"
               );
  return;
}



// FUNCTION 147a12bd0 FUN_147a12bd0 body=45 status=ok
// SIG undefined FUN_147a12bd0(void)

longlong FUN_147a12bd0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1403c5b3e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a12bfe FUN_147a12bfe body=48 status=ok
// SIG undefined FUN_147a12bfe(void)

longlong FUN_147a12bfe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_1403c5b3e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a12c2e FUN_147a12c2e body=48 status=ok
// SIG undefined FUN_147a12c2e(void)

longlong FUN_147a12c2e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_1403c5b3e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a12c5e FUN_147a12c5e body=48 status=ok
// SIG undefined FUN_147a12c5e(void)

longlong FUN_147a12c5e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_1403c5b3e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a12c8e FUN_147a12c8e body=38 status=ok
// SIG undefined FUN_147a12c8e(void)

undefined8 FUN_147a12c8e(undefined8 param_1,int param_2)

{
  FUN_147a12cbc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a12cbc FUN_147a12cbc body=79 status=ok
// SIG undefined FUN_147a12cbc(void)

void FUN_147a12cbc(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a878630;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0xb] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_1401c051c(param_1);
  return;
}



// FUNCTION 147a12d4c FUN_147a12d4c body=60 status=ok
// SIG undefined FUN_147a12d4c(void)

undefined1 FUN_147a12d4c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
    param_2 = param_2 + 0x18;
    param_3 = param_3 + 0x18;
  }
  return 1;
}



// FUNCTION 147a12db0 FUN_147a12db0 body=59 status=ok
// SIG undefined FUN_147a12db0(void)

undefined8 FUN_147a12db0(longlong *param_1)

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



// FUNCTION 147a12df6 FUN_147a12df6 body=37 status=ok
// SIG undefined FUN_147a12df6(void)

void FUN_147a12df6(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[3] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 147a12f0c FUN_147a12f0c body=59 status=ok
// SIG undefined FUN_147a12f0c(void)

undefined8 FUN_147a12f0c(longlong *param_1)

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



// FUNCTION 147a12f52 FUN_147a12f52 body=32 status=ok
// SIG undefined FUN_147a12f52(void)

void FUN_147a12f52(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_144760f98(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 147a13062 FUN_147a13062 body=59 status=ok
// SIG undefined FUN_147a13062(void)

undefined8 FUN_147a13062(longlong *param_1)

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



// FUNCTION 147a130a8 FUN_147a130a8 body=32 status=ok
// SIG undefined FUN_147a130a8(void)

void FUN_147a130a8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_144760f98(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 147a13118 FUN_147a13118 body=38 status=ok
// SIG undefined FUN_147a13118(void)

undefined8 FUN_147a13118(undefined8 param_1,int param_2)

{
  FUN_144760f98();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a1313e FUN_147a1313e body=38 status=ok
// SIG undefined FUN_147a1313e(void)

undefined8 FUN_147a1313e(undefined8 param_1,int param_2)

{
  FUN_144760f98();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a13164 FUN_147a13164 body=96 status=ok
// SIG undefined FUN_147a13164(void)

void FUN_147a13164(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,4);
  }
  return;
}



// FUNCTION 147a131c4 FUN_147a131c4 body=262 status=ok
// SIG undefined FUN_147a131c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147a131c4(undefined8 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_88 [40];
  undefined *local_60;
  undefined *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar1 = *param_2;
  iVar2 = param_2[1];
  iVar3 = param_2[2];
  iVar4 = param_2[3];
  if (((iVar2 == 0 && iVar1 == 0) && iVar3 == 0) && iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
  }
  uVar5 = *(undefined8 *)(param_2 + 4);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cae9d90);
  iVar7 = DAT_14cae9d74;
  iVar6 = DAT_14cae9d48;
  local_60 = &DAT_14cae9db8;
  local_58 = &DAT_14cae9dc0;
  _DAT_14cae9db8 = param_1;
  _DAT_14cae9dc0 = iVar1;
  _DAT_14cae9dc4 = iVar2;
  _DAT_14cae9dc8 = iVar3;
  _DAT_14cae9dcc = iVar4;
  _DAT_14cae9dd0 = uVar5;
  FUN_147a134fa(local_4c);
  if (iVar6 == iVar7) {
    FUN_140f9708a(&DAT_14c9647b8,&DAT_14cae9d38);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000147a132d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cae9d90);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
}



// FUNCTION 147a13376 FUN_147a13376 body=155 status=ok
// SIG undefined FUN_147a13376(void)

undefined8 FUN_147a13376(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x28) == param_2) {
          FUN_147a13412(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x28 + 0x20);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 147a13412 FUN_147a13412 body=93 status=ok
// SIG undefined FUN_147a13412(void)

void FUN_147a13412(longlong *param_1,int param_2)

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
  lVar1 = lVar2 + (longlong)param_2 * 0x28;
  lVar6 = (longlong)*(int *)(lVar1 + 0x24);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x20 + lVar6 * 0x28);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x28 + 0x20);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x20);
  FUN_147a13470(param_1,param_2,1);
  return;
}



// FUNCTION 147a13470 FUN_147a13470 body=138 status=ok
// SIG undefined FUN_147a13470(void)

void FUN_147a13470(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x28 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x28) = param_2;
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
      puVar7 = puVar7 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147a134fa FUN_147a134fa body=353 status=ok
// SIG undefined FUN_147a134fa(void)

undefined4 * FUN_147a134fa(undefined4 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  ulonglong uVar10;
  int iVar11;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  ulonglong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147a1365c(local_40);
  puVar1 = (undefined4 *)param_2[1];
  uVar10 = *(ulonglong *)*param_2;
  *local_38 = uVar10;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *(undefined4 *)(local_38 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_38 + 0xc) = uVar3;
  *(undefined4 *)(local_38 + 2) = uVar4;
  *(undefined4 *)((longlong)local_38 + 0x14) = uVar5;
  local_38[3] = *(ulonglong *)(puVar1 + 4);
  *(undefined4 *)(local_38 + 4) = 0xffffffff;
  local_44 = local_40[0];
  uVar7 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  uVar7 = uVar7 >> 0x10 ^ uVar7;
  cVar6 = FUN_147a1376a(uVar7,local_38,&local_44);
  uVar3 = local_44;
  if (cVar6 == '\0') {
    uVar8 = DAT_14cae9d48 - DAT_14cae9d74;
    iVar11 = 1;
    if (3 < uVar8) {
      uVar10 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar11 <= DAT_14cae9d88)) {
      uVar7 = DAT_14cae9d88 - 1U & uVar7;
      *(uint *)((longlong)local_38 + 0x24) = uVar7;
      puVar9 = DAT_14cae9d80;
      if (DAT_14cae9d80 == (undefined *)0x0) {
        puVar9 = &DAT_14cae9d78;
      }
      *(undefined4 *)(local_38 + 4) =
           *(undefined4 *)(puVar9 + ((longlong)DAT_14cae9d88 - 1U & (longlong)(int)uVar7) * 4);
      puVar9 = DAT_14cae9d80;
      if (DAT_14cae9d80 == (undefined *)0x0) {
        puVar9 = &DAT_14cae9d78;
      }
      *(undefined4 *)(puVar9 + ((longlong)DAT_14cae9d88 - 1U & (longlong)(int)uVar7) * 4) = local_44
      ;
    }
    else {
      DAT_14cae9d88 = iVar11;
      FUN_147a13810(&DAT_14cae9d40);
    }
  }
  *param_1 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1365c FUN_147a1365c body=270 status=ok
// SIG undefined FUN_147a1365c(void)

int * FUN_147a1365c(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cae9d70;
  iVar4 = DAT_14cae9d48;
  if (DAT_14cae9d74 == 0) {
    iVar2 = DAT_14cae9d48 + 1;
    bVar7 = DAT_14cae9d4c == DAT_14cae9d48;
    DAT_14cae9d48 = iVar2;
    if (bVar7) {
      FUN_140549c28(&DAT_14cae9d40,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14cae9d50,1);
    puVar3 = DAT_14cae9d60;
    if (DAT_14cae9d60 == (undefined *)0x0) {
      puVar3 = &DAT_14cae9d50;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  }
  else {
    lVar6 = (longlong)DAT_14cae9d70;
    DAT_14cae9d70 = *(int *)(DAT_14cae9d40 + 4 + lVar6 * 0x28);
    DAT_14cae9d74 = DAT_14cae9d74 + -1;
    iVar4 = iVar2;
    if (DAT_14cae9d74 != 0) {
      *(undefined4 *)(DAT_14cae9d40 + (longlong)DAT_14cae9d70 * 0x28) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14cae9d50;
  if (DAT_14cae9d60 != (undefined *)0x0) {
    puVar3 = DAT_14cae9d60;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x28 + DAT_14cae9d40;
  return param_1;
}



// FUNCTION 147a1376a FUN_147a1376a body=165 status=ok
// SIG undefined FUN_147a1376a(void)

undefined8 FUN_147a1376a(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  undefined *puVar10;
  
  if ((DAT_14cae9d48 - DAT_14cae9d74 != 1) && (DAT_14cae9d48 != DAT_14cae9d74)) {
    puVar10 = &DAT_14cae9d78;
    if (DAT_14cae9d80 != (undefined *)0x0) {
      puVar10 = DAT_14cae9d80;
    }
    iVar9 = *(int *)(puVar10 + (ulonglong)(DAT_14cae9d88 - 1U & param_1) * 4);
    if (iVar9 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cae9d40 + (longlong)iVar9 * 0x28);
        if (*plVar1 == *param_2) {
          lVar6 = *param_2;
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar7 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
          lVar8 = param_2[3];
          uVar5 = *(undefined4 *)((longlong)param_2 + 0x1c);
          *(int *)(plVar1 + 2) = (int)param_2[2];
          *(undefined4 *)((longlong)plVar1 + 0x14) = uVar4;
          *(int *)(plVar1 + 3) = (int)lVar8;
          *(undefined4 *)((longlong)plVar1 + 0x1c) = uVar5;
          *(int *)plVar1 = (int)lVar6;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar7;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_147a13470(&DAT_14cae9d40,*param_3,1);
          *param_3 = iVar9;
          return 1;
        }
        iVar9 = (int)plVar1[4];
      } while (iVar9 != -1);
    }
  }
  return 0;
}



// FUNCTION 147a13810 FUN_147a13810 body=474 status=ok
// SIG undefined FUN_147a13810(void)

void FUN_147a13810(longlong *param_1)

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
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x28);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x24 + lVar5 * 0x28) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x20 + lVar5 * 0x28) =
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



// FUNCTION 147a139ec FUN_147a139ec body=204 status=ok
// SIG undefined FUN_147a139ec(void)

void FUN_147a139ec(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_144a78d6a();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_147a13a3f;
    }
  }
  lVar2 = 0;
LAB_147a13a3f:
  lVar1 = FUN_144a78d6a();
  local_30 = *param_2;
  if (lVar2 == lVar1) {
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_147a13d08(param_1,&local_30,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a13ace FUN_147a13ace body=90 status=ok
// SIG undefined FUN_147a13ace(void)

void FUN_147a13ace(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0xcc) != 0) {
    *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
    if (*(void **)((longlong)param_1 + 0xc0) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0xc0),
              (longlong)*(int *)((longlong)param_1 + 200) << 3);
      FUN_1446efa72((longlong)param_1 + 0xc0,0,0,8);
      return;
    }
  }
  return;
}



// FUNCTION 147a13b28 FUN_147a13b28 body=141 status=ok
// SIG undefined FUN_147a13b28(void)

void FUN_147a13b28(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xc0);
  if ((uint)param_3 < 0x19) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xc0,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0xc0),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xc0,param_2,param_3,8);
  return;
}



// FUNCTION 147a13d08 FUN_147a13d08 body=465 status=ok
// SIG undefined FUN_147a13d08(void)

void FUN_147a13d08(longlong param_1,longlong *param_2,longlong param_3)

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
LAB_147a13e37:
          lVar6 = FUN_144a78d6a();
          if ((lVar6 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38))) goto LAB_147a13e4f;
          lVar7 = 0;
          if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
              lVar6 + 0x30) {
            lVar7 = lVar5;
          }
        }
        else {
          if (lVar5 != 0) goto LAB_147a13e37;
LAB_147a13e4f:
          lVar7 = 0;
        }
        if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
          iVar3 = *(int *)(param_3 + 200);
          *(uint *)(param_3 + 200) = iVar3 + 1U;
          if (*(uint *)(param_3 + 0xcc) < iVar3 + 1U) {
            FUN_147a13eda(param_3,iVar3);
          }
          lVar5 = *(longlong *)(param_3 + 0xc0);
          if (*(longlong *)(param_3 + 0xc0) == 0) {
            lVar5 = param_3;
          }
          *(longlong *)(lVar5 + (longlong)iVar3 * 8) = lVar4;
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



// FUNCTION 147a13eda FUN_147a13eda body=119 status=ok
// SIG undefined FUN_147a13eda(void)

void FUN_147a13eda(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 200);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x18;
    if (0x18 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x18 < *(uint *)(param_1 + 0xcc)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0xcc) = iVar5;
    FUN_147a13b28(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147a13f52 FUN_147a13f52 body=62 status=ok
// SIG undefined FUN_147a13f52(void)

void FUN_147a13f52(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147a13f90(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 147a13f90 FUN_147a13f90 body=93 status=ok
// SIG undefined FUN_147a13f90(void)

ulonglong FUN_147a13f90(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 147a13fee FUN_147a13fee body=115 status=ok
// SIG undefined FUN_147a13fee(void)

void FUN_147a13fee(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147a14061 FUN_147a14061 body=124 status=ok
// SIG undefined FUN_147a14061(void)

void FUN_147a14061(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined1 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = (undefined1 *)(param_2 + 0x10);
    do {
      *param_1 = 0;
      iVar1 = *(int *)(puVar2 + -8);
      _Src = *(void **)(puVar2 + -0x10);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
      }
      *(undefined1 *)(param_1 + 2) = *puVar2;
      param_1 = param_1 + 3;
      puVar2 = puVar2 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147a140de FUN_147a140de body=31 status=ok
// SIG undefined FUN_147a140de(void)

undefined8 FUN_147a140de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a14118 FUN_147a14118 body=101 status=ok
// SIG undefined FUN_147a14118(void)

void FUN_147a14118(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a879170;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147a1417e FUN_147a1417e body=101 status=ok
// SIG undefined FUN_147a1417e(void)

void FUN_147a1417e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a879170;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147a141e4 FUN_147a141e4 body=134 status=ok
// SIG undefined FUN_147a141e4(void)

void FUN_147a141e4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a879170;
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
                    /* WARNING: Could not recover jumptable at 0x000147a1425b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147a1426a FUN_147a1426a body=39 status=ok
// SIG undefined FUN_147a1426a(void)

void FUN_147a1426a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147a1428d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 147a14292 FUN_147a14292 body=122 status=ok
// SIG undefined FUN_147a14292(void)

void FUN_147a14292(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_1;
    uVar5 = 0;
    do {
      cVar4 = FUN_1404853da(lVar2 + uVar5,param_2);
      if (cVar4 != '\0') {
        if ((int)(~uVar5 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar5 = uVar5 + 8;
    } while ((longlong)(int)lVar3 * 8 != uVar5);
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1410872ba(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = *param_2;
  return;
}



// FUNCTION 147a1430c FUN_147a1430c body=62 status=ok
// SIG undefined FUN_147a1430c(void)

void FUN_147a1430c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147a1434a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 147a1434a FUN_147a1434a body=93 status=ok
// SIG undefined FUN_147a1434a(void)

ulonglong FUN_147a1434a(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,4);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 147a143a8 FUN_147a143a8 body=48 status=ok
// SIG undefined FUN_147a143a8(void)

void FUN_147a143a8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 147a143d8 FUN_147a143d8 body=412 status=ok
// SIG undefined FUN_147a143d8(void)

undefined4 * FUN_147a143d8(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  int iVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1479d53aa(param_1,local_48);
  puVar7 = (ulonglong *)param_3[1];
  uVar4 = *(ulonglong *)*param_3;
  *local_40 = uVar4;
  if (uVar4 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(uVar4);
    uVar4 = *local_40;
  }
  bVar1 = DAT_14c950c29;
  puVar8 = local_40 + 2;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined4 *)(local_40 + 0xe) = 0xffffffff;
  local_4c = local_48[0];
  if (((bVar1 & 1) != 0) && (uVar4 != 0)) {
    FUN_1456cec3c(uVar4);
  }
  uVar3 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  local_58 = 0;
  cVar2 = FUN_1479d5490(param_1,uVar3,local_40,&local_4c);
  if (cVar2 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar6) {
      uVar4 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0x74) = uVar3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0xe) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_1479d56b2(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a14576 FUN_147a14576 body=102 status=ok
// SIG undefined FUN_147a14576(void)

void FUN_147a14576(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  
  FUN_144aa17a4();
  lVar1 = FUN_14639386a();
  if (lVar1 != 0) {
    FUN_14485c47a(param_1 + 8,lVar1);
    uVar3 = -*(int *)(lVar1 + 0x5c) & (*(int *)(lVar1 + 0x58) + *(int *)(lVar1 + 0x5c)) - 1U;
    uVar2 = FUN_14001cc68((longlong)(int)(uVar3 + (uVar3 == 0)),0);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    FUN_147a04442(uVar2,*param_2);
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  return;
}



// FUNCTION 147a145e2 FUN_147a145e2 body=181 status=ok
// SIG undefined FUN_147a145e2(void)

void FUN_147a145e2(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_1;
  lVar1 = lVar2 + 0x410;
  local_38 = 0;
  uStack_30 = 0;
  FUN_144a84622(lVar1,&local_38);
  if ((longlong)(int)uStack_30 != 0) {
    lVar5 = (longlong)(int)uStack_30 << 4;
    lVar6 = local_38;
    do {
      cVar4 = FUN_144a84554(lVar1,lVar6);
      if (cVar4 != '\0') {
        lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x620) + 0x58);
        *(undefined4 *)(lVar3 + 0x20) = 6;
        *(longlong *)(lVar3 + 0x28) = lVar3;
        FUN_1459ba8a6(lVar6,lVar3 + 0x20);
      }
      lVar6 = lVar6 + 0x10;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
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



// FUNCTION 147a1469e FUN_147a1469e body=181 status=ok
// SIG undefined FUN_147a1469e(void)

void FUN_147a1469e(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_1;
  lVar1 = lVar2 + 0x410;
  local_38 = 0;
  uStack_30 = 0;
  FUN_144a84622(lVar1,&local_38);
  if ((longlong)(int)uStack_30 != 0) {
    lVar5 = (longlong)(int)uStack_30 << 4;
    lVar6 = local_38;
    do {
      cVar4 = FUN_144a84554(lVar1,lVar6);
      if (cVar4 != '\0') {
        lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x620) + 0x48);
        *(undefined4 *)(lVar3 + 0x20) = 6;
        *(longlong *)(lVar3 + 0x28) = lVar3;
        FUN_1459ba8a6(lVar6,lVar3 + 0x20);
      }
      lVar6 = lVar6 + 0x10;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
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



// FUNCTION 147a14754 FUN_147a14754 body=96 status=ok
// SIG undefined FUN_147a14754(void)

void FUN_147a14754(longlong param_1,int param_2)

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



// FUNCTION 147a147b4 FUN_147a147b4 body=96 status=ok
// SIG undefined FUN_147a147b4(void)

void FUN_147a147b4(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 147a14814 FUN_147a14814 body=285 status=ok
// SIG undefined FUN_147a14814(void)

undefined4 * FUN_147a14814(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint *puVar1;
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
  FUN_147a14932(param_1,local_48);
  puVar1 = (uint *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_40 = uVar5;
  local_40[1] = *puVar1;
  local_40[2] = 0xffffffff;
  local_4c = local_48[0];
  cVar3 = FUN_147a14a18(param_1,uVar5,local_40,&local_4c);
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
      local_40[3] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[2] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
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
      FUN_147a14b0a(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a14932 FUN_147a14932 body=229 status=ok
// SIG undefined FUN_147a14932(void)

int * FUN_147a14932(longlong *param_1,int *param_2)

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
      FUN_144869a3c(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 147a14a18 FUN_147a14a18 body=127 status=ok
// SIG undefined FUN_147a14a18(void)

undefined8 FUN_147a14a18(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        puVar1 = (undefined8 *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(int *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *puVar1 = *(undefined8 *)param_3;
          FUN_147a14a98(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)(puVar1 + 1);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 147a14a98 FUN_147a14a98 body=114 status=ok
// SIG undefined FUN_147a14a98(void)

void FUN_147a14a98(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
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



// FUNCTION 147a14b0a FUN_147a14b0a body=422 status=ok
// SIG undefined FUN_147a14b0a(void)

void FUN_147a14b0a(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x10;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0xc + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 8 + lVar7) =
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



// FUNCTION 147a14cb2 FUN_147a14cb2 body=52 status=ok
// SIG undefined FUN_147a14cb2(void)

void FUN_147a14cb2(longlong *param_1)

{
  FUN_147a14ce6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}


