// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147b772d4 FUN_147b772d4 body=374 status=ok
// SIG undefined FUN_147b772d4(void)

undefined4
FUN_147b772d4(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 unaff_RBP;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined1 local_c0 [80];
  longlong local_70;
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar1 = FUN_147a90476(param_4);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae7f70) {
    FUN_144b3d300(&DAT_14cae7f70);
    if (DAT_14cae7f70 == -1) {
      FUN_1446f470e(&DAT_14cae7f68,L"LineTraceMulti",1);
      _Init_thread_footer(&DAT_14cae7f70);
    }
  }
  local_d8 = CONCAT31(local_d8._1_3_,param_8);
  local_d0 = param_1;
  FUN_14354be4f(local_c0,DAT_14cae7f68,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5) & 0xffffffff,param_6);
  lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    local_c8 = &DAT_14cad0f10;
    local_d8 = uVar1;
    local_d0 = local_c0;
    uVar1 = FUN_1401e24ee(lVar2,param_7,param_2,param_3);
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b77460 FUN_147b77460 body=1178 status=ok
// SIG undefined FUN_147b77460(void)

void FUN_147b77460(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_158 [32];
  undefined1 local_138;
  longlong *local_130;
  longlong *local_128;
  undefined1 local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined1 local_dc [16];
  undefined1 local_cc [16];
  int local_bc;
  longlong local_b8 [3];
  undefined1 local_99;
  longlong local_98 [3];
  int local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_78 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_7c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  iVar2 = local_7c;
  local_98[0] = 0;
  local_98[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  plVar4 = local_98;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_99 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_99);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_99);
  }
  local_b8[0] = 0;
  local_b8[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
  plVar5 = local_b8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  local_bc = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_bc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_bc);
  }
  iVar1 = local_bc;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_cc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_cc);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_dc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_dc);
  }
  local_e0 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e0);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_f8 = local_70;
  uStack_f0 = uStack_68;
  local_e8 = local_60;
  local_118 = local_58;
  uStack_114 = uStack_54;
  uStack_110 = uStack_50;
  uStack_10c = uStack_4c;
  local_108 = local_48;
  local_120 = iVar1 != 0;
  local_138 = iVar2 != 0;
  local_130 = plVar4;
  local_128 = plVar5;
  uVar3 = FUN_147b778fc(local_40,&local_118,&local_f8,local_78);
  *param_3 = uVar3;
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b778fc FUN_147b778fc body=356 status=ok
// SIG undefined FUN_147b778fc(void)

undefined4
FUN_147b778fc(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 unaff_RBP;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined1 *local_d0;
  undefined1 local_c0 [80];
  longlong local_70;
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae8070) {
    FUN_144b3d300(&DAT_14cae8070);
    if (DAT_14cae8070 == -1) {
      FUN_1446f470e(&DAT_14cae8068,L"LineTraceMultiByProfile",1);
      _Init_thread_footer(&DAT_14cae8070);
    }
  }
  local_d8 = CONCAT71(local_d8._1_7_,param_8);
  local_d0 = param_1;
  FUN_14354be4f(local_c0,DAT_14cae8068,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5) & 0xffffffff,param_6);
  lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    local_d8 = param_4;
    local_d0 = local_c0;
    uVar1 = FUN_1479b4a42(lVar2,param_7,param_2,param_3);
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b77a76 FUN_147b77a76 body=1298 status=ok
// SIG undefined FUN_147b77a76(void)

void FUN_147b77a76(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_168 [32];
  undefined1 local_148;
  longlong *local_140;
  longlong *local_138;
  undefined1 local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined1 local_ec [16];
  undefined1 local_dc [16];
  int local_cc;
  longlong local_c8 [3];
  undefined1 local_a9;
  longlong local_a8 [3];
  int local_8c;
  longlong local_88 [3];
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88 + 2);
  }
  local_88[0] = 0;
  local_88[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  plVar4 = local_88;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_8c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_8c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_8c);
  }
  iVar2 = local_8c;
  local_a8[0] = 0;
  local_a8[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  plVar5 = local_a8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  local_a9 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a9);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a9);
  }
  local_c8[0] = 0;
  local_c8[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_c8);
  }
  plVar6 = local_c8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar6 = *(longlong **)(param_2 + 0x38);
  }
  local_cc = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_cc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_cc);
  }
  iVar1 = local_cc;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_dc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_dc);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_ec);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_ec);
  }
  local_f0 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_f0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_f0);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_f8 = local_68;
  local_108 = local_88[2];
  uStack_100 = uStack_70;
  local_128 = local_60;
  uStack_124 = uStack_5c;
  uStack_120 = uStack_58;
  uStack_11c = uStack_54;
  local_118 = local_50;
  local_130 = iVar1 != 0;
  local_148 = iVar2 != 0;
  local_140 = plVar5;
  local_138 = plVar6;
  uVar3 = FUN_14354a988(local_48,&local_128,&local_108,plVar4);
  *param_3 = uVar3;
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b77fa0 FUN_147b77fa0 body=1206 status=ok
// SIG undefined FUN_147b77fa0(void)

void FUN_147b77fa0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  longlong *plVar5;
  undefined1 auStack_238 [32];
  undefined1 local_218;
  longlong *local_210;
  undefined1 *local_208;
  undefined1 local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined4 local_1b8;
  undefined1 local_1b4 [16];
  undefined1 local_1a4 [16];
  int local_194;
  undefined1 local_190 [4];
  undefined4 local_18c;
  undefined4 local_ec;
  undefined4 local_c0;
  undefined1 local_89;
  longlong local_88 [2];
  int local_78;
  undefined1 local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_71 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_71);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_71);
  }
  local_78 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  iVar2 = local_78;
  local_88[0] = 0;
  local_88[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  plVar5 = local_88;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  local_89 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_89);
  }
  memset(local_190,0,0x100);
  local_c0 = 0xffffffff;
  local_18c = 0x3f800000;
  local_ec = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_190);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_190);
  }
  puVar4 = local_190;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  local_194 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_194);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_194);
  }
  iVar1 = local_194;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_1a4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_1a4);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_1b4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_1b4);
  }
  local_1b8 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1b8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_1d8 = local_70;
  uStack_1d0 = uStack_68;
  local_1c8 = local_60;
  local_1f8 = local_58;
  uStack_1f4 = uStack_54;
  uStack_1f0 = uStack_50;
  uStack_1ec = uStack_4c;
  local_1e8 = local_48;
  local_200 = iVar1 != 0;
  local_218 = iVar2 != 0;
  local_210 = plVar5;
  local_208 = puVar4;
  uVar3 = FUN_147b78458(local_40,&local_1f8,&local_1d8,local_71);
  *param_3 = uVar3;
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b78458 FUN_147b78458 body=374 status=ok
// SIG undefined FUN_147b78458(void)

undefined4
FUN_147b78458(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 unaff_RBP;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined1 local_c0 [80];
  longlong local_70;
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar1 = FUN_147a90476(param_4);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae7f60) {
    FUN_144b3d300(&DAT_14cae7f60);
    if (DAT_14cae7f60 == -1) {
      FUN_1446f470e(&DAT_14cae7f58,L"LineTraceSingle",1);
      _Init_thread_footer(&DAT_14cae7f60);
    }
  }
  local_d8 = CONCAT31(local_d8._1_3_,param_8);
  local_d0 = param_1;
  FUN_14354be4f(local_c0,DAT_14cae7f58,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5) & 0xffffffff,param_6);
  lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    local_c8 = &DAT_14cad0f10;
    local_d8 = uVar1;
    local_d0 = local_c0;
    uVar1 = FUN_1400b50cc(lVar2,param_7,param_2,param_3);
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b785e6 FUN_147b785e6 body=1209 status=ok
// SIG undefined FUN_147b785e6(void)

void FUN_147b785e6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  longlong *plVar5;
  undefined1 auStack_248 [32];
  undefined1 local_228;
  longlong *local_220;
  undefined1 *local_218;
  undefined1 local_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined4 local_1c8;
  undefined1 local_1c4 [16];
  undefined1 local_1b4 [16];
  int local_1a4;
  undefined1 local_1a0 [4];
  undefined4 local_19c;
  undefined4 local_fc;
  undefined4 local_d0;
  undefined1 local_99;
  longlong local_98 [3];
  int local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_248;
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_78 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_7c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  iVar2 = local_7c;
  local_98[0] = 0;
  local_98[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  plVar5 = local_98;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  local_99 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_99);
  }
  memset(local_1a0,0,0x100);
  local_d0 = 0xffffffff;
  local_19c = 0x3f800000;
  local_fc = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_1a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_1a0);
  }
  puVar4 = local_1a0;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  local_1a4 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1a4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1a4);
  }
  iVar1 = local_1a4;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_1b4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_1b4);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_1c4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_1c4);
  }
  local_1c8 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_1e8 = local_70;
  uStack_1e0 = uStack_68;
  local_1d8 = local_60;
  local_208 = local_58;
  uStack_204 = uStack_54;
  uStack_200 = uStack_50;
  uStack_1fc = uStack_4c;
  local_1f8 = local_48;
  local_210 = iVar1 != 0;
  local_228 = iVar2 != 0;
  local_220 = plVar5;
  local_218 = puVar4;
  uVar3 = FUN_147b78aa0(local_40,&local_208,&local_1e8,local_78);
  *param_3 = uVar3;
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b78aa0 FUN_147b78aa0 body=356 status=ok
// SIG undefined FUN_147b78aa0(void)

undefined4
FUN_147b78aa0(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 unaff_RBP;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined1 *local_d0;
  undefined1 local_c0 [80];
  longlong local_70;
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae8060) {
    FUN_144b3d300(&DAT_14cae8060);
    if (DAT_14cae8060 == -1) {
      FUN_1446f470e(&DAT_14cae8058,L"LineTraceSingleByProfile",1);
      _Init_thread_footer(&DAT_14cae8060);
    }
  }
  local_d8 = CONCAT71(local_d8._1_7_,param_8);
  local_d0 = param_1;
  FUN_14354be4f(local_c0,DAT_14cae8058,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5) & 0xffffffff,param_6);
  lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    local_d8 = param_4;
    local_d0 = local_c0;
    uVar1 = FUN_1479b47fa(lVar2,param_7,param_2,param_3);
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b78c1c FUN_147b78c1c body=1332 status=ok
// SIG undefined FUN_147b78c1c(void)

void FUN_147b78c1c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  undefined1 auStack_258 [32];
  undefined1 local_238;
  longlong *local_230;
  undefined1 *local_228;
  undefined1 local_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined4 local_1d8;
  undefined1 local_1d4 [16];
  undefined1 local_1c4 [16];
  int local_1b4;
  undefined1 local_1b0 [4];
  undefined4 local_1ac;
  undefined4 local_10c;
  undefined4 local_e0;
  undefined1 local_a9;
  longlong local_a8 [3];
  int local_8c;
  longlong local_88 [3];
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_258;
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88 + 2);
  }
  local_88[0] = 0;
  local_88[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  plVar4 = local_88;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_8c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_8c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_8c);
  }
  iVar2 = local_8c;
  local_a8[0] = 0;
  local_a8[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  plVar6 = local_a8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar6 = *(longlong **)(param_2 + 0x38);
  }
  local_a9 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a9);
  }
  memset(local_1b0,0,0x100);
  local_e0 = 0xffffffff;
  local_1ac = 0x3f800000;
  local_10c = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_1b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_1b0);
  }
  puVar5 = local_1b0;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  local_1b4 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1b4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1b4);
  }
  iVar1 = local_1b4;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_1c4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_1c4);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_1d4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_1d4);
  }
  local_1d8 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1d8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_1e8 = local_68;
  local_1f8 = local_88[2];
  uStack_1f0 = uStack_70;
  local_218 = local_60;
  uStack_214 = uStack_5c;
  uStack_210 = uStack_58;
  uStack_20c = uStack_54;
  local_208 = local_50;
  local_220 = iVar1 != 0;
  local_238 = iVar2 != 0;
  local_230 = plVar6;
  local_228 = puVar5;
  uVar3 = FUN_14354ab64(local_48,&local_218,&local_1f8,plVar4);
  *param_3 = uVar3;
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b79152 FUN_147b79152 body=634 status=ok
// SIG undefined FUN_147b79152(void)

void FUN_147b79152(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_f8 [40];
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  void *pvStack_40;
  ulonglong local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_48 = 0;
  pvStack_40 = (void *)0x0;
  local_58 = 0;
  uStack_50 = 0;
  local_38 = 0;
  FUN_1446ef9c4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_68 = 0;
  uStack_60 = 0;
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_80 = 0xffffffffffffffff;
  uStack_78 = 0;
  lStack_70 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = (undefined4)local_80;
  uStack_94 = local_80._4_4_;
  uStack_90 = (undefined4)uStack_78;
  uStack_8c = uStack_78._4_4_;
  local_88 = lStack_70;
  if ((lStack_70 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  _Src = pvStack_40;
  local_a8 = local_68;
  uStack_a0 = uStack_60;
  local_d0 = local_58;
  local_c8 = (undefined4)uStack_50;
  uStack_c4 = uStack_50._4_4_;
  uStack_c0 = (undefined4)local_48;
  uStack_bc = local_48._4_4_;
  local_b8 = (void *)0x0;
  lVar1 = (longlong)(int)local_38;
  local_b0 = (int)local_38;
  if (lVar1 == 0) {
    local_ac = 0;
  }
  else {
    FUN_1446dd670(&local_b8,local_38 & 0xffffffff,0);
    memcpy(local_b8,_Src,lVar1 * 2);
  }
  FUN_147b793ce(local_28,&local_d0,&local_a8,&local_98);
  if (pvStack_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b793ce FUN_147b793ce body=280 status=ok
// SIG undefined FUN_147b793ce(void)

void FUN_147b793ce(undefined8 param_1,longlong param_2,undefined8 *param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (lVar4 != 0) {
    iVar1 = *(int *)(param_2 + 0x20) + -1;
    if (*(int *)(param_2 + 0x20) == 0) {
      iVar1 = 0;
    }
    FUN_1446f82e2(&local_58,iVar1,*(undefined8 *)(param_2 + 0x18),1);
    FUN_1417dd0a0(local_58);
    if (*(longlong *)(lVar4 + 0x1f0) == 0) {
      lVar4 = lVar4 + 0x460;
    }
    else {
      lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x1f0) + 0xf8);
    }
    puVar5 = (undefined8 *)FUN_14001cc68(0x158,0x10);
    uVar2 = *param_3;
    uVar3 = param_3[1];
    FUN_147b8faf8(puVar5,param_2 + 8,param_4);
    *puVar5 = &PTR_FUN_14a9b0870;
    puVar5[0x29] = uVar2;
    puVar5[0x2a] = uVar3;
    FUN_140b1330e(lVar4,*(undefined8 *)(param_4 + 0x10),*(undefined4 *)(param_4 + 4),puVar5);
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b794e8 FUN_147b794e8 body=329 status=ok
// SIG undefined FUN_147b794e8(void)

void FUN_147b794e8(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  void *_Src;
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  void *pvStack_40;
  ulonglong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = 0;
  pvStack_40 = (void *)0x0;
  local_58 = 0;
  uStack_50 = 0;
  local_38 = 0;
  FUN_1446ef9c4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  _Src = pvStack_40;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_80 = local_58;
  local_78 = (undefined4)uStack_50;
  uStack_74 = uStack_50._4_4_;
  uStack_70 = (undefined4)local_48;
  uStack_6c = local_48._4_4_;
  local_68 = (void *)0x0;
  lVar2 = (longlong)(int)local_38;
  local_60 = (int)local_38;
  if (lVar2 == 0) {
    local_5c = 0;
  }
  else {
    FUN_1446dd670(&local_68,local_38 & 0xffffffff,0);
    memcpy(local_68,_Src,lVar2 * 2);
  }
  uVar1 = FUN_144a6654a(&local_80);
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  *param_3 = uVar1;
  if (pvStack_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b79632 FUN_147b79632 body=634 status=ok
// SIG undefined FUN_147b79632(void)

void FUN_147b79632(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_f8 [40];
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  void *pvStack_40;
  ulonglong local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_48 = 0;
  pvStack_40 = (void *)0x0;
  local_58 = 0;
  uStack_50 = 0;
  local_38 = 0;
  FUN_140f4d408();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_68 = 0;
  uStack_60 = 0;
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_80 = 0xffffffffffffffff;
  uStack_78 = 0;
  lStack_70 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = (undefined4)local_80;
  uStack_94 = local_80._4_4_;
  uStack_90 = (undefined4)uStack_78;
  uStack_8c = uStack_78._4_4_;
  local_88 = lStack_70;
  if ((lStack_70 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  _Src = pvStack_40;
  local_a8 = local_68;
  uStack_a0 = uStack_60;
  local_d0 = local_58;
  local_c8 = (undefined4)uStack_50;
  uStack_c4 = uStack_50._4_4_;
  uStack_c0 = (undefined4)local_48;
  uStack_bc = local_48._4_4_;
  local_b8 = (void *)0x0;
  lVar1 = (longlong)(int)local_38;
  local_b0 = (int)local_38;
  if (lVar1 == 0) {
    local_ac = 0;
  }
  else {
    FUN_1446dd670(&local_b8,local_38 & 0xffffffff,0);
    memcpy(local_b8,_Src,lVar1 * 2);
  }
  FUN_147b798ae(local_28,&local_d0,&local_a8,&local_98);
  if (pvStack_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b798ae FUN_147b798ae body=208 status=ok
// SIG undefined FUN_147b798ae(void)

void FUN_147b798ae(undefined8 param_1,longlong param_2,undefined8 *param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar3 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (lVar3 != 0) {
    if (*(longlong *)(lVar3 + 0x1f0) == 0) {
      lVar3 = lVar3 + 0x460;
    }
    else {
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x1f0) + 0xf8);
    }
    puVar4 = (undefined8 *)FUN_14001cc68(0x158,0x10);
    uVar1 = *param_3;
    uVar2 = param_3[1];
    FUN_147b8faf8(puVar4,param_2 + 8,param_4);
    *puVar4 = &PTR_FUN_14a9b0940;
    puVar4[0x29] = uVar1;
    puVar4[0x2a] = uVar2;
    FUN_140b1330e(lVar3,*(undefined8 *)(param_4 + 0x10),*(undefined4 *)(param_4 + 4),puVar4);
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147b7997e FUN_147b7997e body=315 status=ok
// SIG undefined FUN_147b7997e(void)

void FUN_147b7997e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  void *_Src;
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  void *pvStack_40;
  ulonglong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = 0;
  pvStack_40 = (void *)0x0;
  local_58 = 0;
  uStack_50 = 0;
  local_38 = 0;
  FUN_140f4d408();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  _Src = pvStack_40;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_80 = local_58;
  local_78 = (undefined4)uStack_50;
  uStack_74 = uStack_50._4_4_;
  uStack_70 = (undefined4)local_48;
  uStack_6c = local_48._4_4_;
  local_68 = (void *)0x0;
  lVar2 = (longlong)(int)local_38;
  local_60 = (int)local_38;
  if (lVar2 == 0) {
    local_5c = 0;
  }
  else {
    FUN_1446dd670(&local_68,local_38 & 0xffffffff,0);
    memcpy(local_68,_Src,lVar2 * 2);
  }
  uVar1 = FUN_147957e68(&local_80);
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  *param_3 = uVar1;
  if (pvStack_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b79aba FUN_147b79aba body=146 status=ok
// SIG undefined FUN_147b79aba(void)

void FUN_147b79aba(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_14);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_14);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b79b4e(local_14);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b79b4e FUN_147b79b4e body=123 status=ok
// SIG undefined FUN_147b79b4e(void)

void FUN_147b79b4e(undefined4 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446ddc76(&local_20,"Advertising",1);
  uVar1 = FUN_144a52528();
  plVar2 = (longlong *)FUN_14493e38c(uVar1,local_20);
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0x48))(plVar2);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x58))(plVar2,param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b79bd0 FUN_147b79bd0 body=228 status=ok
// SIG undefined FUN_147b79bd0(void)

void FUN_147b79bd0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
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
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b79cce FUN_147b79cce body=1416 status=ok
// SIG undefined FUN_147b79cce(void)

void FUN_147b79cce(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 auStack_308 [32];
  longlong *local_2e8;
  undefined8 *local_2e0;
  longlong *local_2d8;
  undefined8 *local_2d0;
  undefined1 local_2c8;
  undefined1 local_2c0;
  undefined1 local_2b8;
  longlong *local_2b0;
  longlong *local_2a8;
  undefined8 local_2a0;
  int local_294;
  int local_290;
  int local_28c;
  longlong local_288 [10];
  undefined1 local_238 [336];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_308;
  puVar6 = (undefined8 *)(param_2 + 0x38);
  local_288[8] = 0;
  local_288[9] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  local_2a0 = param_3;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_288 + 8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_288 + 8);
  }
  local_2a8 = local_288 + 8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    local_2a8 = *(longlong **)(param_2 + 0x38);
  }
  local_288[6] = 0;
  local_288[7] = 0;
  *puVar6 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_288 + 6);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_288 + 6);
  }
  local_2b0 = local_288 + 6;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    local_2b0 = *(longlong **)(param_2 + 0x38);
  }
  local_288[4] = 0;
  local_288[5] = 0;
  *puVar6 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_288 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_288 + 4);
  }
  plVar7 = local_288 + 4;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar7 = *(longlong **)(param_2 + 0x38);
  }
  local_288[2] = 0;
  local_288[3] = 0;
  *puVar6 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_288 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_288 + 2);
  }
  plVar5 = local_288 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  *puVar6 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  puVar3 = &local_98;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  local_288[0] = 0;
  local_288[1] = 0;
  *puVar6 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_288);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_288);
  }
  plVar4 = local_288;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_bc = 0xffffffff00000080;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  *puVar6 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e8);
  }
  puVar6 = &local_e8;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar6 = *(undefined8 **)(param_2 + 0x38);
  }
  local_28c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28c);
  }
  iVar2 = local_28c;
  local_290 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_290);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_290);
  }
  iVar1 = local_290;
  local_294 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_294);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_294);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_2b8 = local_294 != 0;
  local_2c0 = iVar1 != 0;
  local_2c8 = iVar2 != 0;
  local_2e8 = plVar5;
  local_2e0 = puVar3;
  local_2d8 = plVar4;
  local_2d0 = puVar6;
  FUN_14354ace0(local_238,local_2a8,local_2b0,plVar7);
  FUN_146fe335c(local_2a0,local_238);
  FUN_14019571a(local_238);
  local_a0 = 0;
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(&local_e8);
  if (local_288[0] != 0) {
    FUN_1400020a8();
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1403950f6(&local_98);
  if (local_288[2] != 0) {
    FUN_1400020a8();
  }
  FUN_140861e20(local_288[4],local_288[5] & 0xffffffff);
  if (local_288[4] != 0) {
    FUN_1400020a8();
  }
  if (local_288[6] != 0) {
    FUN_1400020a8();
  }
  if (local_288[8] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_308) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7a262 FUN_147b7a262 body=150 status=ok
// SIG undefined FUN_147b7a262(void)

void FUN_147b7a262(undefined8 param_1,longlong param_2,undefined8 param_3)

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
  *(bool *)param_3 = local_1c != 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7a2fa FUN_147b7a2fa body=145 status=ok
// SIG undefined FUN_147b7a2fa(void)

void FUN_147b7a2fa(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 auStack_48 [47];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_19;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7a38c FUN_147b7a38c body=153 status=ok
// SIG undefined FUN_147b7a38c(void)

void FUN_147b7a38c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7a426 FUN_147b7a426 body=188 status=ok
// SIG undefined FUN_147b7a426(void)

void FUN_147b7a426(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((*param_3 != local_38) || ((int)param_3[1] != local_30)) {
    *param_3 = local_38;
    *(int *)(param_3 + 1) = local_30;
    param_3[2] = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7a4e4 FUN_147b7a4e4 body=258 status=ok
// SIG undefined FUN_147b7a4e4(void)

void FUN_147b7a4e4(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  lVar4 = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_14477b664(uStack_30);
  uVar2 = FUN_14477b664(uVar2);
  lVar1 = local_28;
  uVar2 = FUN_14477b664(uVar2);
  lVar3 = FUN_14477b664(uVar2);
  if (*param_3 != lVar4) {
    param_3[2] = 0;
  }
  *param_3 = lVar4;
  if (param_3[1] != lVar3) {
    param_3[2] = 0;
  }
  uVar2 = FUN_14477b664(lVar3);
  lVar4 = FUN_14477b664(uVar2);
  param_3[1] = lVar4;
  param_3[2] = lVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7a5e8 FUN_147b7a5e8 body=148 status=ok
// SIG undefined FUN_147b7a5e8(void)

void FUN_147b7a5e8(undefined8 param_1,longlong param_2,undefined4 *param_3)

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
  *param_3 = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7a67e FUN_147b7a67e body=151 status=ok
// SIG undefined FUN_147b7a67e(void)

void FUN_147b7a67e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a83f76();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7a716 FUN_147b7a716 body=151 status=ok
// SIG undefined FUN_147b7a716(void)

void FUN_147b7a716(undefined8 param_1,longlong param_2,undefined8 *param_3)

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
  *param_3 = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7a7ae FUN_147b7a7ae body=291 status=ok
// SIG undefined FUN_147b7a7ae(void)

void FUN_147b7a7ae(undefined8 param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  void *pvVar4;
  undefined1 auStack_78 [32];
  void *local_58;
  undefined8 uStack_50;
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  pvVar4 = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = (void *)0x0;
  lVar3 = (longlong)(int)uStack_40;
  uStack_50._0_4_ = (int)uStack_40;
  if (lVar3 == 0) {
    uVar2 = 0;
    iVar1 = 0;
    pvVar4 = (void *)0x0;
  }
  else {
    FUN_1446dd670(&local_58,uStack_40 & 0xffffffff,0);
    memcpy(local_58,pvVar4,lVar3 * 2);
    pvVar4 = local_58;
    iVar1 = (int)uStack_50;
    uVar2 = uStack_50._4_4_;
  }
  local_58 = (void *)0x0;
  uStack_50 = 0;
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  *param_3 = (longlong)pvVar4;
  *(int *)(param_3 + 1) = iVar1;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar2;
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7a8d2 FUN_147b7a8d2 body=249 status=ok
// SIG undefined FUN_147b7a8d2(void)

void FUN_147b7a8d2(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b7a9cc(&local_48,local_28);
  *param_3 = local_48;
  param_3[1] = uStack_44;
  param_3[2] = uStack_40;
  param_3[3] = uStack_3c;
  if (&local_48 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_3 + 4) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_3 + 4) = local_38;
    local_38 = 0;
    param_3[6] = local_30;
    param_3[7] = local_2c;
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7a9cc FUN_147b7a9cc body=328 status=ok
// SIG undefined FUN_147b7a9cc(void)

longlong * FUN_147b7a9cc(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_a8 [32];
  longlong local_88 [2];
  undefined8 local_78;
  int local_70;
  longlong *local_68 [2];
  longlong local_58;
  ulonglong uStack_50;
  undefined8 local_40;
  int local_38;
  longlong *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  local_40 = *param_2;
  local_38 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_38 = 0;
  }
  FUN_14475bf92(param_1);
  if ((1 < *(int *)(param_2 + 1)) && (*param_1 == 0)) {
    local_58 = 0;
    uStack_50 = 0;
    local_78 = *param_2;
    local_70 = *(int *)(param_2 + 1) + -1;
    FUN_14598ddda(local_68);
    local_40 = CONCAT44(local_40._4_4_,4);
    FUN_14023423e(&local_30,local_68);
    FUN_140056680(local_88,L"PathString");
    FUN_140233eec(&local_58,local_88,&local_40);
    if (local_88[0] != 0) {
      FUN_1400020a8();
    }
    if (local_30 != (longlong *)0x0) {
      (**(code **)(*local_30 + 0x10))();
      local_30 = (longlong *)0x0;
      local_28 = 0;
    }
    if (local_68[0] != (longlong *)0x0) {
      (**(code **)(*local_68[0] + 0x10))();
    }
    FUN_14010f8af(local_58,uStack_50 & 0xffffffff);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7ab16 FUN_147b7ab16 body=249 status=ok
// SIG undefined FUN_147b7ab16(void)

void FUN_147b7ab16(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b7ac10(&local_48,local_28);
  *param_3 = local_48;
  param_3[1] = uStack_44;
  param_3[2] = uStack_40;
  param_3[3] = uStack_3c;
  if (&local_48 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_3 + 4) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_3 + 4) = local_38;
    local_38 = 0;
    param_3[6] = local_30;
    param_3[7] = local_2c;
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7ac10 FUN_147b7ac10 body=328 status=ok
// SIG undefined FUN_147b7ac10(void)

longlong * FUN_147b7ac10(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_a8 [32];
  longlong local_88 [2];
  undefined8 local_78;
  int local_70;
  longlong *local_68 [2];
  longlong local_58;
  ulonglong uStack_50;
  undefined8 local_40;
  int local_38;
  longlong *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  local_40 = *param_2;
  local_38 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_38 = 0;
  }
  FUN_14475bf92(param_1);
  if ((1 < *(int *)(param_2 + 1)) && (*param_1 == 0)) {
    local_58 = 0;
    uStack_50 = 0;
    local_78 = *param_2;
    local_70 = *(int *)(param_2 + 1) + -1;
    FUN_14598ddda(local_68);
    local_40 = CONCAT44(local_40._4_4_,4);
    FUN_14023423e(&local_30,local_68);
    FUN_140056680(local_88,L"PathString");
    FUN_140233eec(&local_58,local_88,&local_40);
    if (local_88[0] != 0) {
      FUN_1400020a8();
    }
    if (local_30 != (longlong *)0x0) {
      (**(code **)(*local_30 + 0x10))();
      local_30 = (longlong *)0x0;
      local_28 = 0;
    }
    if (local_68[0] != (longlong *)0x0) {
      (**(code **)(*local_68[0] + 0x10))();
    }
    FUN_14010f8af(local_58,uStack_50 & 0xffffffff);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7ad5a FUN_147b7ad5a body=274 status=ok
// SIG undefined FUN_147b7ad5a(void)

void FUN_147b7ad5a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48[2] = 0;
  local_48[3] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b7ae6e(&local_58,local_48 + 2,local_48);
  *param_3 = local_58;
  param_3[1] = uStack_54;
  param_3[2] = uStack_50;
  param_3[3] = uStack_4c;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7ae6e FUN_147b7ae6e body=1023 status=ok
// SIG undefined FUN_147b7ae6e(void)

longlong * FUN_147b7ae6e(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined2 *puVar2;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  int local_e0;
  undefined8 local_d8;
  int local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  int local_b0;
  longlong local_a8 [2];
  undefined8 local_98;
  int local_90;
  longlong *local_88 [2];
  longlong local_78;
  ulonglong uStack_70;
  undefined8 local_60;
  int local_58;
  longlong *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  cVar1 = FUN_144a791f8(param_2,&DAT_149e065c6,1,1);
  if (cVar1 == '\0') {
    local_78 = 0;
    uStack_70 = 0;
    local_98 = *param_2;
    local_90 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      local_90 = 0;
    }
    FUN_14598ddda(local_88);
    local_60 = CONCAT44(local_60._4_4_,4);
    FUN_14023423e(&local_50,local_88);
    FUN_140056680(local_a8,L"PathString");
    FUN_140233eec(&local_78,local_a8,&local_60);
    if (local_a8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*local_50 + 0x10))();
      local_50 = (longlong *)0x0;
      local_48 = 0;
    }
    if (local_88[0] != (longlong *)0x0) {
      (**(code **)(*local_88[0] + 0x10))();
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (*(int *)(param_3 + 1) < 2) {
      *param_1 = 0;
      param_1[1] = 0;
      local_60 = *param_2;
      local_58 = *(int *)(param_2 + 1) + -1;
      if (*(int *)(param_2 + 1) == 0) {
        local_58 = 0;
      }
      FUN_1468fe3e4(param_1);
      if (*(int *)(param_2 + 1) < 2 || *param_1 != 0) goto LAB_147b7b0b3;
      local_78 = 0;
      uStack_70 = 0;
      local_b8 = *param_2;
      local_b0 = *(int *)(param_2 + 1) + -1;
      FUN_14598ddda(local_88);
      local_60 = CONCAT44(local_60._4_4_,4);
      FUN_14023423e(&local_50,local_88);
      FUN_140056680(local_a8,L"PathString");
      FUN_140233eec(&local_78,local_a8,&local_60);
    }
    else {
      FUN_1446f470e(&local_c0,*param_3,1);
      if (*(int *)(param_2 + 1) == 0) {
        puVar2 = &DAT_149dfb77a;
      }
      else {
        puVar2 = (undefined2 *)*param_2;
      }
      FUN_1446f470e(&local_c8,puVar2,1);
      *param_1 = 0;
      param_1[1] = 0;
      FUN_1411652ee(param_1,local_c8,local_c0);
      if (*param_1 != 0) goto LAB_147b7b0b3;
      local_78 = 0;
      uStack_70 = 0;
      local_d8 = *param_2;
      local_d0 = *(int *)(param_2 + 1) + -1;
      if (*(int *)(param_2 + 1) == 0) {
        local_d0 = 0;
      }
      FUN_14598ddda(local_88);
      local_60 = CONCAT44(local_60._4_4_,4);
      FUN_14023423e(&local_50,local_88);
      FUN_140056680(local_a8,L"PackageName");
      FUN_140233eec(&local_78,local_a8,&local_60);
      if (local_a8[0] != 0) {
        FUN_1400020a8();
      }
      if (local_50 != (longlong *)0x0) {
        (**(code **)(*local_50 + 0x10))();
        local_50 = (longlong *)0x0;
        local_48 = 0;
      }
      if (local_88[0] != (longlong *)0x0) {
        (**(code **)(*local_88[0] + 0x10))();
      }
      local_e8 = *param_3;
      local_e0 = *(int *)(param_3 + 1) + -1;
      if (*(int *)(param_3 + 1) == 0) {
        local_e0 = 0;
      }
      FUN_14598ddda(local_88);
      local_60 = CONCAT44(local_60._4_4_,4);
      FUN_14023423e(&local_50,local_88);
      FUN_140056680(local_a8,L"AssetName");
      FUN_140233eec(&local_78,local_a8,&local_60);
    }
    if (local_a8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*local_50 + 0x10))();
      local_50 = (longlong *)0x0;
      local_48 = 0;
    }
    if (local_88[0] != (longlong *)0x0) {
      (**(code **)(*local_88[0] + 0x10))();
    }
  }
  FUN_14010f8af(local_78,uStack_70 & 0xffffffff);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
LAB_147b7b0b3:
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7b280 FUN_147b7b280 body=987 status=ok
// SIG undefined FUN_147b7b280(void)

void FUN_147b7b280(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  undefined4 local_110;
  undefined1 local_108;
  undefined1 local_100;
  undefined4 *local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong lStack_80;
  undefined1 local_71;
  int local_70;
  undefined4 local_6c;
  int local_68;
  int local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_64 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_64);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  iVar3 = local_64;
  local_68 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  iVar2 = local_68;
  local_6c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  local_70 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  iVar1 = local_70;
  local_71 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_71);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_71);
  }
  local_90 = 0xffffffffffffffff;
  uStack_88 = 0;
  lStack_80 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_a8 = (undefined4)local_90;
  uStack_a4 = local_90._4_4_;
  uStack_a0 = (undefined4)uStack_88;
  uStack_9c = uStack_88._4_4_;
  local_98 = lStack_80;
  if ((lStack_80 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_c8 = local_60;
  uStack_c0 = uStack_58;
  local_b8 = local_50;
  local_e8 = local_48;
  uStack_e4 = uStack_44;
  uStack_e0 = uStack_40;
  uStack_dc = uStack_3c;
  local_d8 = local_38;
  local_108 = iVar1 != 0;
  local_118 = iVar2 != 0;
  local_f8 = &local_a8;
  local_100 = local_71;
  local_110 = local_6c;
  FUN_147b7b65c(local_30,&local_e8,&local_c8,iVar3 != 0);
  if ((local_28 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7b65c FUN_147b7b65c body=721 status=ok
// SIG undefined FUN_147b7b65c(void)

void FUN_147b7b65c(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4,
                  undefined1 param_5,undefined4 param_6,undefined1 param_7,char param_8,
                  longlong param_9)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined1 local_b0;
  undefined1 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x1f0) == 0) {
      lVar2 = lVar2 + 0x460;
    }
    else {
      lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x1f0) + 0xf8);
    }
    lVar3 = FUN_147b924ac(lVar2,*(undefined8 *)(param_9 + 0x10),*(undefined4 *)(param_9 + 4));
    if (param_1 == 0) {
      local_68 = DAT_14c8464f0;
      local_78 = DAT_14c8464e0;
      uStack_70 = DAT_14c8464e8;
      local_88 = DAT_14c846508;
      local_98 = (undefined4)DAT_14c8464f8;
      uStack_94 = DAT_14c8464f8._4_4_;
      uStack_90 = (undefined4)DAT_14c846500;
      uStack_8c = DAT_14c846500._4_4_;
    }
    else {
      local_68 = *(undefined8 *)(param_1 + 0x1a8);
      local_78 = *(undefined8 *)(param_1 + 0x198);
      uStack_70 = *(undefined8 *)(param_1 + 0x1a0);
      local_88 = *(undefined8 *)(param_1 + 0x1c0);
      local_98 = *(undefined4 *)(param_1 + 0x1b0);
      uStack_94 = *(undefined4 *)(param_1 + 0x1b4);
      uStack_90 = *(undefined4 *)(param_1 + 0x1b8);
      uStack_8c = *(undefined4 *)(param_1 + 0x1bc);
    }
    if (lVar3 == 0) {
      if (param_8 == '\0') {
        lVar3 = FUN_14001cc68(0xa8,0x10);
        local_a8 = param_7;
        local_b0 = param_5;
        local_b8 = param_4;
        FUN_147b83636(lVar3,param_6,param_9,param_1);
        *(undefined8 *)(lVar3 + 0x98) = param_2[2];
        uVar1 = param_2[1];
        *(undefined8 *)(lVar3 + 0x88) = *param_2;
        *(undefined8 *)(lVar3 + 0x90) = uVar1;
        *(undefined8 *)(lVar3 + 0x60) = param_3[2];
        uVar1 = param_3[1];
        *(undefined8 *)(lVar3 + 0x50) = *param_3;
        *(undefined8 *)(lVar3 + 0x58) = uVar1;
        *(undefined8 *)(lVar3 + 0x80) = local_68;
        *(undefined8 *)(lVar3 + 0x70) = local_78;
        *(undefined8 *)(lVar3 + 0x78) = uStack_70;
        *(undefined4 *)(lVar3 + 0x38) = local_98;
        *(undefined4 *)(lVar3 + 0x3c) = uStack_94;
        *(undefined4 *)(lVar3 + 0x40) = uStack_90;
        *(undefined4 *)(lVar3 + 0x44) = uStack_8c;
        *(undefined8 *)(lVar3 + 0x48) = local_88;
        FUN_140b1330e(lVar2,*(undefined8 *)(param_9 + 0x10),*(undefined4 *)(param_9 + 4),lVar3);
      }
    }
    else {
      if (param_8 == '\x02') {
        *(undefined4 *)(lVar3 + 8) = *(undefined4 *)(lVar3 + 0xc);
        *(undefined4 *)(lVar3 + 0xc) = 0;
        *(undefined8 *)(lVar3 + 0x98) = *(undefined8 *)(lVar3 + 0x80);
        *(undefined8 *)(lVar3 + 0x88) = *(undefined8 *)(lVar3 + 0x70);
        *(undefined8 *)(lVar3 + 0x90) = *(undefined8 *)(lVar3 + 0x78);
        *(undefined8 *)(lVar3 + 0x60) = *(undefined8 *)(lVar3 + 0x48);
        *(undefined8 *)(lVar3 + 0x50) = *(undefined8 *)(lVar3 + 0x38);
        *(undefined8 *)(lVar3 + 0x58) = *(undefined8 *)(lVar3 + 0x40);
        *(undefined8 *)(lVar3 + 0x80) = local_68;
        *(undefined8 *)(lVar3 + 0x70) = local_78;
        *(undefined8 *)(lVar3 + 0x78) = uStack_70;
      }
      else {
        if (param_8 == '\x01') {
          *(undefined1 *)(lVar3 + 0x10) = 0;
          goto LAB_147b7b6ac;
        }
        if (param_8 != '\0') goto LAB_147b7b6ac;
        *(undefined4 *)(lVar3 + 8) = param_6;
        *(undefined4 *)(lVar3 + 0xc) = 0;
        *(undefined8 *)(lVar3 + 0x98) = param_2[2];
        uVar1 = param_2[1];
        *(undefined8 *)(lVar3 + 0x88) = *param_2;
        *(undefined8 *)(lVar3 + 0x90) = uVar1;
        *(undefined8 *)(lVar3 + 0x60) = param_3[2];
        uVar1 = param_3[1];
        *(undefined8 *)(lVar3 + 0x50) = *param_3;
        *(undefined8 *)(lVar3 + 0x58) = uVar1;
        *(undefined8 *)(lVar3 + 0x70) = local_78;
        *(undefined8 *)(lVar3 + 0x78) = uStack_70;
        *(undefined8 *)(lVar3 + 0x80) = local_68;
      }
      *(undefined4 *)(lVar3 + 0x38) = local_98;
      *(undefined4 *)(lVar3 + 0x3c) = uStack_94;
      *(undefined4 *)(lVar3 + 0x40) = uStack_90;
      *(undefined4 *)(lVar3 + 0x44) = uStack_8c;
      *(undefined8 *)(lVar3 + 0x48) = local_88;
    }
  }
LAB_147b7b6ac:
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7b92e FUN_147b7b92e body=241 status=ok
// SIG undefined FUN_147b7b92e(void)

void FUN_147b7b92e(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b7ba20(&local_38,local_28);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    local_38 = 0;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7ba20 FUN_147b7ba20 body=90 status=ok
// SIG undefined FUN_147b7ba20(void)

undefined8 * FUN_147b7ba20(undefined8 *param_1,undefined8 *param_2)

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
  FUN_140d6dd3e(param_1);
  return param_1;
}



// FUNCTION 147b7ba80 FUN_147b7ba80 body=244 status=ok
// SIG undefined FUN_147b7ba80(void)

void FUN_147b7ba80(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  longlong lStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  lStack_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_38 = 0;
  lStack_30 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 = lStack_30 != lStack_20 || local_28 != local_38;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7bb7c FUN_147b7bb7c body=230 status=ok
// SIG undefined FUN_147b7bb7c(void)

void FUN_147b7bb7c(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 = local_20 != local_28;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7bc6a FUN_147b7bc6a body=352 status=ok
// SIG undefined FUN_147b7bc6a(void)

void FUN_147b7bc6a(undefined8 param_1,longlong param_2,byte *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong lStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = 0;
  lStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  local_78 = 0;
  lStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_68 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  puVar2 = &local_58;
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = puVar3;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar3 = &local_88;
  }
  bVar1 = FUN_144a7afa6(puVar2 + 1,puVar3 + 1);
  *param_3 = bVar1 ^ 1;
  if (lStack_70 != 0) {
    FUN_1400020a8();
  }
  if (lStack_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7bdd2 FUN_147b7bdd2 body=352 status=ok
// SIG undefined FUN_147b7bdd2(void)

void FUN_147b7bdd2(undefined8 param_1,longlong param_2,byte *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong lStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = 0;
  lStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  local_78 = 0;
  lStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_68 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  puVar2 = &local_58;
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = puVar3;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar3 = &local_88;
  }
  bVar1 = FUN_144a7afa6(puVar2 + 1,puVar3 + 1);
  *param_3 = bVar1 ^ 1;
  if (lStack_70 != 0) {
    FUN_1400020a8();
  }
  if (lStack_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7bf34 FUN_147b7bf34 body=607 status=ok
// SIG undefined FUN_147b7bf34(void)

void FUN_147b7bf34(undefined8 param_1,longlong param_2)

{
  undefined2 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  ulonglong uStack_a0;
  longlong local_98;
  ulonglong uStack_90;
  undefined2 *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_88 = (undefined2 *)0x0;
  uStack_80 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_98 = 0;
  uStack_90 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  plVar3 = &local_98;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_a8 = 0;
  uStack_a0 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  plVar2 = &local_a8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  puVar4 = &local_78;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar1 = local_88;
  if ((int)uStack_80 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_147b83740(puVar1,plVar3,plVar2,puVar4);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(&local_78);
  FUN_1447a1747(local_a8,uStack_a0 & 0xffffffff);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_98,uStack_90 & 0xffffffff);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147b7c19a FUN_147b7c19a body=297 status=ok
// SIG undefined FUN_147b7c19a(void)

void FUN_147b7c19a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  undefined8 uStack_30;
  undefined2 *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = (undefined2 *)0x0;
  uStack_20 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar3 = &DAT_149dfb77a;
  if ((int)uStack_30 != 0) {
    puVar3 = local_38;
  }
  puVar2 = &DAT_149dfb77a;
  if ((int)uStack_20 != 0) {
    puVar2 = local_28;
  }
  uVar1 = FUN_14054d46e(puVar2,puVar3);
  *param_3 = uVar1;
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7c2ca FUN_147b7c2ca body=416 status=ok
// SIG undefined FUN_147b7c2ca(void)

void FUN_147b7c2ca(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_48 [2];
  undefined2 *local_38;
  undefined8 uStack_30;
  undefined2 *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = (undefined2 *)0x0;
  uStack_20 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar4 = local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar3 = &DAT_149dfb77a;
  if ((int)uStack_30 != 0) {
    puVar3 = local_38;
  }
  puVar2 = &DAT_149dfb77a;
  if ((int)uStack_20 != 0) {
    puVar2 = local_28;
  }
  local_58 = 0;
  uVar1 = FUN_14063337c(puVar2,puVar3,plVar4,1);
  *param_3 = uVar1;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7c478 FUN_147b7c478 body=1 status=ok
// SIG undefined FUN_147b7c478(void)

void FUN_147b7c478(void)

{
  return;
}



// FUNCTION 147b7c486 FUN_147b7c486 body=646 status=ok
// SIG undefined FUN_147b7c486(void)

void FUN_147b7c486(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_78 [44];
  undefined8 local_4c;
  undefined4 local_44;
  undefined1 local_40 [16];
  undefined4 local_30;
  undefined4 local_2c;
  longlong *local_28 [2];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  FUN_144a5dc74(local_28);
  FUN_144a4a07e();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
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
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  local_44 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  local_4c = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  plVar1 = local_28[0];
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_28[0] != (longlong *)0x0) {
    (**(code **)(*local_28[0] + 8))(local_28[0]);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    if (local_28[0] != (longlong *)0x0) {
      (**(code **)(*local_28[0] + 0x10))();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7c70e FUN_147b7c70e body=152 status=ok
// SIG undefined FUN_147b7c70e(void)

void FUN_147b7c70e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7c7ae FUN_147b7c7ae body=375 status=ok
// SIG undefined FUN_147b7c7ae(void)

void FUN_147b7c7ae(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  int local_28;
  undefined1 local_21;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
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
  FUN_147b7c926(local_18,local_20,local_21,local_28 != 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7c926 FUN_147b7c926 body=238 status=ok
// SIG undefined FUN_147b7c926(void)

void FUN_147b7c926(undefined8 param_1,longlong *param_2,char param_3,char param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_88 [40];
  longlong local_60 [2];
  longlong local_50 [2];
  longlong local_40 [2];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_2 != (longlong *)0x0) ||
     (param_2 = (longlong *)FUN_1414fb874(param_1,0), param_2 != (longlong *)0x0)) {
    if (param_3 == '\x01') {
      FUN_1400b22c2(local_40,"quit background");
      lVar1 = *param_2;
      plVar2 = local_30;
    }
    else if (param_4 == '\0') {
      FUN_1400b22c2(local_40,&DAT_14a9a10cf);
      lVar1 = *param_2;
      plVar2 = local_60;
    }
    else {
      FUN_1400b22c2(local_40,"quit force");
      lVar1 = *param_2;
      plVar2 = local_50;
    }
    (**(code **)(lVar1 + 0xd40))(param_2,plVar2,local_40,1);
    if (*plVar2 != 0) {
      FUN_1400020a8();
    }
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147b7ca3e FUN_147b7ca3e body=137 status=ok
// SIG undefined FUN_147b7ca3e(void)

void FUN_147b7ca3e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  FUN_144a7452c();
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



// FUNCTION 147b7cac8 FUN_147b7cac8 body=349 status=ok
// SIG undefined FUN_147b7cac8(void)

void FUN_147b7cac8(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong lStack_28;
  undefined4 local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_38 = 0xffffffffffffffff;
  uStack_30 = 0;
  lStack_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = (undefined4)local_38;
  uStack_54 = local_38._4_4_;
  uStack_50 = (undefined4)uStack_30;
  uStack_4c = uStack_30._4_4_;
  local_48 = lStack_28;
  if ((lStack_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_147b7cc26(local_18,local_1c,&local_58);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7cc26 FUN_147b7cc26 body=251 status=ok
// SIG undefined FUN_147b7cc26(void)

void FUN_147b7cc26(undefined8 param_1,undefined4 param_2,undefined4 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [39];
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x1f0) == 0) {
      lVar1 = lVar1 + 0x460;
    }
    else {
      lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x1f0) + 0xf8);
    }
    lVar2 = FUN_140b1315a(lVar1,*(undefined8 *)(param_3 + 4),param_3[1],&local_31);
    if (lVar2 == 0) {
      puVar3 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *puVar3 = &PTR_FUN_14a9b0800;
      *(undefined4 *)(puVar3 + 1) = param_2;
      *(undefined8 *)((longlong)puVar3 + 0xc) = *(undefined8 *)(param_3 + 2);
      *(undefined4 *)((longlong)puVar3 + 0x14) = *param_3;
      puVar3[3] = 0;
      FUN_14485c47a(puVar3 + 3,*(undefined8 *)(param_3 + 4));
      FUN_140b1330e(lVar1,*(undefined8 *)(param_3 + 4),param_3[1],puVar3);
    }
    else {
      *(undefined4 *)(lVar2 + 8) = param_2;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7cd28 FUN_147b7cd28 body=303 status=ok
// SIG undefined FUN_147b7cd28(void)

void FUN_147b7cd28(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
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
  FUN_147b7ce58(local_18,local_20,local_24 != 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7ce58 FUN_147b7ce58 body=80 status=ok
// SIG undefined FUN_147b7ce58(void)

void FUN_147b7ce58(longlong param_1,undefined8 param_2,char param_3)

{
  byte bVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    lVar2 = FUN_147b82f91(*(undefined8 *)(param_1 + 0x10));
    if (lVar2 != 0) {
      param_1 = param_1 + *(int *)(lVar2 + 0x44);
      if (param_3 == '\0') {
        bVar1 = 0;
      }
      else {
        bVar1 = *(byte *)(lVar2 + 0x72);
      }
      *(byte *)(param_1 + (ulonglong)*(byte *)(lVar2 + 0x71)) =
           *(byte *)((ulonglong)*(byte *)(lVar2 + 0x71) + param_1) & ~*(byte *)(lVar2 + 0x73) |
           bVar1;
    }
  }
  return;
}



// FUNCTION 147b7cea8 FUN_147b7cea8 body=296 status=ok
// SIG undefined FUN_147b7cea8(void)

void FUN_147b7cea8(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [39];
  undefined1 local_21;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_144a63fc8();
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
  FUN_147b7cfd2(local_18,local_20,local_21);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7cfd2 FUN_147b7cfd2 body=113 status=ok
// SIG undefined FUN_147b7cfd2(void)

void FUN_147b7cfd2(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = FUN_145c2ef20(*(undefined8 *)(param_1 + 0x10),param_2,3);
    if (lVar1 == 0) {
      lVar1 = FUN_147b82e6e(*(undefined8 *)(param_1 + 0x10),param_2,3);
      if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000147b7d040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(lVar1 + 0x70) + 0x1f8))
                  (*(longlong **)(lVar1 + 0x70),param_1 + *(int *)(lVar1 + 0x44),param_3);
        return;
      }
    }
    else {
      *(undefined1 *)(param_1 + *(int *)(lVar1 + 0x44)) = param_3;
    }
  }
  return;
}



// FUNCTION 147b7d044 FUN_147b7d044 body=329 status=ok
// SIG undefined FUN_147b7d044(void)

void FUN_147b7d044(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
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
  FUN_147b7d18e(local_18,local_20,&local_30);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7d18e FUN_147b7d18e body=260 status=ok
// SIG undefined FUN_147b7d18e(void)

void FUN_147b7d18e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_1 == 0) || (lVar1 = FUN_147b83036(*(undefined8 *)(param_1 + 0x10)), lVar1 == 0)) {
    return;
  }
  lVar3 = *param_3;
  if (lVar3 != 0) {
    lVar2 = FUN_1446f8646();
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      lVar3 = *param_3;
      if (lVar3 == 0) goto LAB_147b7d211;
      lVar2 = FUN_1446f8646();
      if (((lVar2 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30)) {
        lVar3 = 0;
      }
      else {
        lVar3 = *param_3;
      }
      lVar2 = *(longlong *)(lVar1 + 0x78);
      if (lVar2 == 0) {
        return;
      }
      if (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38)) {
        return;
      }
      if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30) {
        return;
      }
    }
    lVar3 = *param_3;
    if (((lVar3 != 0) && (lVar2 = FUN_1446f8646(), lVar2 != 0)) &&
       ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
         lVar2 + 0x30)))) {
      lVar3 = *param_3;
      goto LAB_147b7d214;
    }
  }
LAB_147b7d211:
  lVar3 = 0;
LAB_147b7d214:
  FUN_1408c8fa8(lVar1,param_1,lVar3,0);
  return;
}



// FUNCTION 147b7d292 FUN_147b7d292 body=304 status=ok
// SIG undefined FUN_147b7d292(void)

void FUN_147b7d292(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [36];
  undefined1 local_24 [4];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_24);
  }
  puVar1 = local_24;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b7d3c4(local_18,local_20,puVar1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7d3c4 FUN_147b7d3c4 body=76 status=ok
// SIG undefined FUN_147b7d3c4(void)

void FUN_147b7d3c4(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    lVar1 = FUN_140f8052a();
    lVar2 = FUN_1408d67c1(*(undefined8 *)(param_1 + 0x10),param_2,3);
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x70) == lVar1)) {
      *(undefined4 *)(param_1 + *(int *)(lVar2 + 0x44)) = *param_3;
    }
  }
  return;
}



// FUNCTION 147b7d410 FUN_147b7d410 body=301 status=ok
// SIG undefined FUN_147b7d410(void)

void FUN_147b7d410(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
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
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b7d53e(local_18,local_20,local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7d53e FUN_147b7d53e body=97 status=ok
// SIG undefined FUN_147b7d53e(void)

void FUN_147b7d53e(longlong param_1,undefined8 param_2,double param_3)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = FUN_147b82eec(*(undefined8 *)(param_1 + 0x10));
    if (lVar1 == 0) {
      lVar1 = FUN_145c2f0d0(*(undefined8 *)(param_1 + 0x10),param_2,3);
      if (lVar1 != 0) {
        *(float *)(param_1 + *(int *)(lVar1 + 0x44)) = (float)param_3;
      }
    }
    else {
      *(double *)(param_1 + *(int *)(lVar1 + 0x44)) = param_3;
    }
  }
  return;
}



// FUNCTION 147b7d5a0 FUN_147b7d5a0 body=330 status=ok
// SIG undefined FUN_147b7d5a0(void)

void FUN_147b7d5a0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
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
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar1 = &local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b7d6ec(local_20,local_28,puVar1);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7d6ec FUN_147b7d6ec body=78 status=ok
// SIG undefined FUN_147b7d6ec(void)

void FUN_147b7d6ec(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_1 == 0) {
    return;
  }
  lVar2 = FUN_147b8336f(*(undefined8 *)(param_1 + 0x10));
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x44));
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  FUN_1406fa324(puVar1 + 2,param_3 + 2);
  return;
}



// FUNCTION 147b7d73a FUN_147b7d73a body=323 status=ok
// SIG undefined FUN_147b7d73a(void)

void FUN_147b7d73a(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar1 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b7d87e(local_18,local_20,puVar1);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7d87e FUN_147b7d87e body=82 status=ok
// SIG undefined FUN_147b7d87e(void)

void FUN_147b7d87e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = FUN_147b838d9(*(undefined8 *)(param_1 + 0x10));
    if (lVar1 != 0) {
      lVar1 = (longlong)*(int *)(lVar1 + 0x44);
      if ((*(longlong *)(param_1 + lVar1) != *param_3) ||
         (*(int *)(param_1 + 8 + lVar1) != (int)param_3[1])) {
        *(longlong *)(param_1 + lVar1) = *param_3;
        *(int *)(param_1 + 8 + lVar1) = (int)param_3[1];
        *(undefined8 *)(param_1 + 0x10 + lVar1) = 0;
      }
    }
  }
  return;
}



// FUNCTION 147b7d8d4 FUN_147b7d8d4 body=137 status=ok
// SIG undefined FUN_147b7d8d4(void)

void FUN_147b7d8d4(undefined8 param_1,longlong param_2)

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



// FUNCTION 147b7d95e FUN_147b7d95e body=318 status=ok
// SIG undefined FUN_147b7d95e(void)

void FUN_147b7d95e(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_144a63fc8();
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar1 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b7da9e(local_18,local_20,puVar1);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7da9e FUN_147b7da9e body=141 status=ok
// SIG undefined FUN_147b7da9e(void)

void FUN_147b7da9e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_1 == 0) {
    return;
  }
  lVar1 = FUN_147b8397e(*(undefined8 *)(param_1 + 0x10));
  if (lVar1 != 0) {
    lVar3 = (longlong)*(int *)(lVar1 + 0x44);
    lVar1 = *param_3;
    if (*(longlong *)(param_1 + lVar3) != lVar1) {
      *(undefined8 *)(param_1 + 0x10 + lVar3) = 0;
    }
    *(longlong *)(param_1 + lVar3) = lVar1;
    if (*(longlong *)(param_1 + 8 + lVar3) != param_3[1]) {
      *(undefined8 *)(param_1 + 0x10 + lVar3) = 0;
    }
    uVar2 = FUN_14477b664();
    uVar2 = FUN_14477b664(uVar2);
    *(undefined8 *)(param_1 + 8 + lVar3) = uVar2;
    *(longlong *)(param_1 + 0x10 + lVar3) = param_3[2];
  }
  FUN_147b838d9(*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}



// FUNCTION 147b7db2c FUN_147b7db2c body=358 status=ok
// SIG undefined FUN_147b7db2c(void)

void FUN_147b7db2c(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_144a83f76();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  lVar2 = local_20;
  uVar1 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_20 != 0) {
    lVar3 = FUN_147b82dc9(*(undefined8 *)(local_20 + 0x10),local_28);
    if (lVar3 != 0) {
      *(undefined8 *)(lVar2 + *(int *)(lVar3 + 0x44)) = uVar1;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7dc94 FUN_147b7dc94 body=309 status=ok
// SIG undefined FUN_147b7dc94(void)

void FUN_147b7dc94(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar1 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b7ddca(local_18,local_20,puVar1);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7ddca FUN_147b7ddca body=111 status=ok
// SIG undefined FUN_147b7ddca(void)

void FUN_147b7ddca(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  
  if (param_1 != 0) {
    lVar3 = FUN_147b830db(*(undefined8 *)(param_1 + 0x10));
    if (lVar3 != 0) {
      cVar2 = FUN_144a7ff9e(*(undefined8 *)(*param_3 + 0x10),*(undefined8 *)(lVar3 + 0x70));
      if (cVar2 != '\0') {
        iVar1 = *(int *)(lVar3 + 0x44);
        lVar3 = *param_3;
        if (DAT_14c950c29 == '\x01') {
          if (lVar3 == 0) {
            lVar3 = 0;
          }
          else {
            FUN_1456cec3c();
            lVar3 = *param_3;
          }
        }
        *(longlong *)(param_1 + iVar1) = lVar3;
        *(longlong *)(param_1 + 8 + (longlong)iVar1) = param_3[1];
      }
    }
  }
  return;
}



// FUNCTION 147b7de3a FUN_147b7de3a body=355 status=ok
// SIG undefined FUN_147b7de3a(void)

void FUN_147b7de3a(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  lVar2 = local_20;
  uVar1 = local_2c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_20 != 0) {
    lVar3 = FUN_147b82d24(*(undefined8 *)(local_20 + 0x10),local_28);
    if (lVar3 != 0) {
      *(undefined4 *)(lVar2 + *(int *)(lVar3 + 0x44)) = uVar1;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7df9e FUN_147b7df9e body=304 status=ok
// SIG undefined FUN_147b7df9e(void)

void FUN_147b7df9e(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  puVar1 = local_30;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b7e0d0(local_18,local_20,puVar1);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7e0d0 FUN_147b7e0d0 body=78 status=ok
// SIG undefined FUN_147b7e0d0(void)

void FUN_147b7e0d0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_1 != 0) {
    lVar3 = FUN_140bf8bc4();
    lVar4 = FUN_1408d67c1(*(undefined8 *)(param_1 + 0x10),param_2,3);
    if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x70) == lVar3)) {
      uVar2 = param_3[1];
      puVar1 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x44));
      *puVar1 = *param_3;
      puVar1[1] = uVar2;
    }
  }
  return;
}



// FUNCTION 147b7e11e FUN_147b7e11e body=374 status=ok
// SIG undefined FUN_147b7e11e(void)

void FUN_147b7e11e(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
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
  lVar1 = local_20;
  puVar3 = &local_30;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_20 != 0) {
    lVar2 = FUN_147b83225(*(undefined8 *)(local_20 + 0x10),local_28);
    if (lVar2 != 0) {
      *(undefined8 *)(lVar1 + *(int *)(lVar2 + 0x44)) = *puVar3;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7e296 FUN_147b7e296 body=300 status=ok
// SIG undefined FUN_147b7e296(void)

void FUN_147b7e296(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
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
  FUN_147b7e3c4(local_18,local_20,local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7e3c4 FUN_147b7e3c4 body=136 status=ok
// SIG undefined FUN_147b7e3c4(void)

void FUN_147b7e3c4(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_1 == 0) ||
     (lVar2 = FUN_1408c92bc(*(undefined8 *)(param_1 + 0x10),param_2,3), lVar2 == 0)) {
    return;
  }
  if (param_3 != 0) {
    lVar1 = *(longlong *)(lVar2 + 0x70);
    if ((DAT_14c950c29 == '\x01') && (lVar1 != 0)) {
      FUN_1456cec3c(lVar1);
    }
    if (*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) {
      return;
    }
    if (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) != lVar1 + 0x30) {
      return;
    }
  }
  FUN_1408c8fa8(lVar2,param_1,param_3,0);
  return;
}



// FUNCTION 147b7e44c FUN_147b7e44c body=304 status=ok
// SIG undefined FUN_147b7e44c(void)

void FUN_147b7e44c(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar1 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b7e57e(local_18,local_20,puVar1);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7e57e FUN_147b7e57e body=87 status=ok
// SIG undefined FUN_147b7e57e(void)

void FUN_147b7e57e(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_1 != 0) {
    lVar4 = FUN_14016b782();
    lVar5 = FUN_1408d67c1(*(undefined8 *)(param_1 + 0x10),param_2,3);
    if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x70) == lVar4)) {
      iVar2 = *(int *)(lVar5 + 0x44);
      *(undefined8 *)(param_1 + 0x10 + (longlong)iVar2) = param_3[2];
      uVar3 = param_3[1];
      puVar1 = (undefined8 *)(param_1 + iVar2);
      *puVar1 = *param_3;
      puVar1[1] = uVar3;
    }
  }
  return;
}



// FUNCTION 147b7e5d6 FUN_147b7e5d6 body=339 status=ok
// SIG undefined FUN_147b7e5d6(void)

void FUN_147b7e5d6(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong lStack_40;
  undefined8 local_38;
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
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_48 = 0;
  lStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_38 = 0;
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
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar1 = &local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b7e72a(local_20,local_28,puVar1);
  if (lStack_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7e72a FUN_147b7e72a body=78 status=ok
// SIG undefined FUN_147b7e72a(void)

void FUN_147b7e72a(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  if (param_1 == 0) {
    return;
  }
  lVar5 = FUN_147b83414(*(undefined8 *)(param_1 + 0x10));
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar5 + 0x44));
  *puVar1 = *param_3;
  uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
  uVar3 = *(undefined4 *)(param_3 + 2);
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x14);
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)((longlong)puVar1 + 0xc) = uVar2;
  *(undefined4 *)(puVar1 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar1 + 0x14) = uVar4;
  FUN_144a787a6(puVar1 + 3,param_3 + 3);
  return;
}



// FUNCTION 147b7e778 FUN_147b7e778 body=339 status=ok
// SIG undefined FUN_147b7e778(void)

void FUN_147b7e778(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong lStack_40;
  undefined8 local_38;
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
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_48 = 0;
  lStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_38 = 0;
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
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar1 = &local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b7e8cc(local_20,local_28,puVar1);
  if (lStack_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7e8cc FUN_147b7e8cc body=78 status=ok
// SIG undefined FUN_147b7e8cc(void)

void FUN_147b7e8cc(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  if (param_1 == 0) {
    return;
  }
  lVar5 = FUN_147b832ca(*(undefined8 *)(param_1 + 0x10));
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar5 + 0x44));
  *puVar1 = *param_3;
  uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
  uVar3 = *(undefined4 *)(param_3 + 2);
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x14);
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)((longlong)puVar1 + 0xc) = uVar2;
  *(undefined4 *)(puVar1 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar1 + 0x14) = uVar4;
  FUN_144a787a6(puVar1 + 3,param_3 + 3);
  return;
}



// FUNCTION 147b7e91a FUN_147b7e91a body=453 status=ok
// SIG undefined FUN_147b7e91a(void)

void FUN_147b7e91a(undefined8 param_1,longlong param_2)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  void **ppvVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  void *local_48;
  ulonglong uStack_40;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48 = (void *)0x0;
  uStack_40 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  lVar4 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_28 != 0) {
    lVar2 = FUN_147b83180(*(undefined8 *)(local_28 + 0x10),local_30);
    _Src = local_48;
    if ((lVar2 != 0) && (ppvVar3 = (void **)(lVar4 + *(int *)(lVar2 + 0x44)), ppvVar3 != &local_48))
    {
      iVar1 = (int)uStack_40;
      lVar4 = (longlong)(int)uStack_40;
      *(int *)(ppvVar3 + 1) = (int)uStack_40;
      if ((int)uStack_40 == 0 && *(int *)((longlong)ppvVar3 + 0xc) == 0) {
        *(undefined4 *)((longlong)ppvVar3 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(ppvVar3,uStack_40 & 0xffffffff);
        if (iVar1 != 0) {
          memcpy(*ppvVar3,_Src,lVar4 * 2);
        }
      }
    }
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7eae6 FUN_147b7eae6 body=226 status=ok
// SIG undefined FUN_147b7eae6(void)

void FUN_147b7eae6(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
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
  FUN_147b7ebca(local_18,local_1c != 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7ebca FUN_147b7ebca body=90 status=ok
// SIG undefined FUN_147b7ebca(void)

void FUN_147b7ebca(undefined8 param_1,undefined1 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (lVar1 != 0) {
    lVar2 = FUN_145866520(lVar1);
    if (lVar2 != 0) {
      lVar2 = FUN_145866520(lVar1);
      if (*(longlong *)(lVar2 + 0x78) != 0) {
        lVar1 = FUN_145866520(lVar1);
        *(undefined1 *)(*(longlong *)(lVar1 + 0x78) + 0x88) = param_2;
      }
    }
  }
  return;
}



// FUNCTION 147b7ec24 FUN_147b7ec24 body=333 status=ok
// SIG undefined FUN_147b7ec24(void)

void FUN_147b7ec24(undefined8 param_1,longlong param_2)

{
  longlong **pplVar1;
  undefined1 auStack_58 [32];
  longlong *local_38 [2];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_144a5dc74(local_38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  pplVar1 = local_38;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar1 = *(longlong ***)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b7ed72(local_20,local_28,pplVar1);
  if (local_38[0] != (longlong *)0x0) {
    (**(code **)(*local_38[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7ed72 FUN_147b7ed72 body=99 status=ok
// SIG undefined FUN_147b7ed72(void)

void FUN_147b7ed72(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_1 != 0) {
    lVar3 = FUN_147b834b9(*(undefined8 *)(param_1 + 0x10));
    if (lVar3 != 0) {
      lVar3 = (longlong)*(int *)(lVar3 + 0x44);
      plVar1 = (longlong *)*param_3;
      plVar2 = *(longlong **)(param_1 + lVar3);
      if (plVar2 != plVar1) {
        *(longlong **)(param_1 + lVar3) = plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      *(int *)(param_1 + 8 + lVar3) = (int)param_3[1];
    }
  }
  return;
}



// FUNCTION 147b7edd6 FUN_147b7edd6 body=395 status=ok
// SIG undefined FUN_147b7edd6(void)

void FUN_147b7edd6(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0x3ff00000;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_44 = 0x3ff00000;
  uStack_40 = 0;
  uStack_3c = 0x3ff00000;
  local_38 = 0x3ff0000000000000;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  puVar1 = &local_88;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b7ef62(local_18,local_20,puVar1);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7ef62 FUN_147b7ef62 body=82 status=ok
// SIG undefined FUN_147b7ef62(void)

void FUN_147b7ef62(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if (param_1 != 0) {
    lVar1 = FUN_140ce9674();
    lVar2 = FUN_1408d67c1(*(undefined8 *)(param_1 + 0x10),param_2,3);
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x70) == lVar1)) {
      puVar3 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x44));
      for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar3 = *param_3;
        param_3 = param_3 + 1;
        puVar3 = puVar3 + 1;
      }
    }
  }
  return;
}



// FUNCTION 147b7efb4 FUN_147b7efb4 body=177 status=ok
// SIG undefined FUN_147b7efb4(void)

void FUN_147b7efb4(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  undefined1 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14376ca24(plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7f066 FUN_147b7f066 body=304 status=ok
// SIG undefined FUN_147b7f066(void)

void FUN_147b7f066(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [44];
  undefined1 local_2c [12];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_2c);
  }
  puVar1 = local_2c;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b7f198(local_18,local_20,puVar1);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7f198 FUN_147b7f198 body=85 status=ok
// SIG undefined FUN_147b7f198(void)

void FUN_147b7f198(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != 0) {
    lVar2 = FUN_146892264();
    lVar3 = FUN_1408d67c1(*(undefined8 *)(param_1 + 0x10),param_2,3);
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x70) == lVar2)) {
      iVar1 = *(int *)(lVar3 + 0x44);
      *(undefined4 *)(param_1 + 8 + (longlong)iVar1) = *(undefined4 *)(param_3 + 1);
      *(undefined8 *)(param_1 + iVar1) = *param_3;
    }
  }
  return;
}



// FUNCTION 147b7f1ee FUN_147b7f1ee body=304 status=ok
// SIG undefined FUN_147b7f1ee(void)

void FUN_147b7f1ee(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar1 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b7f320(local_18,local_20,puVar1);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7f320 FUN_147b7f320 body=87 status=ok
// SIG undefined FUN_147b7f320(void)

void FUN_147b7f320(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_1 != 0) {
    lVar4 = FUN_14068e11a();
    lVar5 = FUN_1408d67c1(*(undefined8 *)(param_1 + 0x10),param_2,3);
    if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x70) == lVar4)) {
      iVar2 = *(int *)(lVar5 + 0x44);
      *(undefined8 *)(param_1 + 0x10 + (longlong)iVar2) = param_3[2];
      uVar3 = param_3[1];
      puVar1 = (undefined8 *)(param_1 + iVar2);
      *puVar1 = *param_3;
      puVar1[1] = uVar3;
    }
  }
  return;
}



// FUNCTION 147b7f37c FUN_147b7f37c body=137 status=ok
// SIG undefined FUN_147b7f37c(void)

void FUN_147b7f37c(undefined8 param_1,longlong param_2)

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



// FUNCTION 147b7f406 FUN_147b7f406 body=181 status=ok
// SIG undefined FUN_147b7f406(void)

void FUN_147b7f406(undefined8 param_1,longlong param_2)

{
  longlong **pplVar1;
  undefined1 auStack_48 [32];
  longlong *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a5dc74(local_28);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  pplVar1 = local_28;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar1 = *(longlong ***)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b7f4bc(pplVar1);
  if (local_28[0] != (longlong *)0x0) {
    (**(code **)(*local_28[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7f4bc FUN_147b7f4bc body=150 status=ok
// SIG undefined FUN_147b7f4bc(void)

void FUN_147b7f4bc(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  
  lVar4 = DAT_14cb0d2b0;
  if (DAT_14cb0d2b0 != 0) {
    lVar7 = FUN_1413f862e();
    if (((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
         == lVar7 + 0x30)) && (plVar3 = *(longlong **)(lVar4 + 0x1368), plVar3 != (longlong *)0x0))
    {
      iVar6 = (int)plVar3[1];
      do {
        if (iVar6 == 0) {
          return;
        }
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
      if (*(longlong *)(lVar4 + 0x1360) != 0) {
        FUN_1469d64d8(*(longlong *)(lVar4 + 0x1360),param_1);
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
                    /* WARNING: Could not recover jumptable at 0x000147b7f544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 147b7f558 FUN_147b7f558 body=224 status=ok
// SIG undefined FUN_147b7f558(void)

void FUN_147b7f558(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  int local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_14);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_14);
  }
  local_18 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b7f63a(local_14,local_18 != 0);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7f63a FUN_147b7f63a body=130 status=ok
// SIG undefined FUN_147b7f63a(void)

void FUN_147b7f63a(undefined4 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446ddc76(&local_28,"Advertising",1);
  uVar1 = FUN_144a52528();
  plVar2 = (longlong *)FUN_14493e38c(uVar1,local_28);
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0x48))(plVar2);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7f6d4 FUN_147b7f6d4 body=116 status=ok
// SIG undefined FUN_147b7f6d4(void)

void FUN_147b7f6d4(void)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1446ddc76(&local_18,"Advertising",1);
  uVar1 = FUN_144a52528();
  plVar2 = (longlong *)FUN_14493e38c(uVar1,local_18);
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0x48))(plVar2);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x70))(plVar2);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7f74a FUN_147b7f74a body=148 status=ok
// SIG undefined FUN_147b7f74a(void)

void FUN_147b7f74a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b7f7e0(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7f7e0 FUN_147b7f7e0 body=134 status=ok
// SIG undefined FUN_147b7f7e0(void)

void FUN_147b7f7e0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar6 = 0;
  if (param_1 == 0) {
    uVar3 = 0;
    uVar7 = uVar6;
  }
  else {
    uVar3 = FUN_1447210f0();
    uVar7 = 0;
    if (*(longlong *)(param_1 + 0x430) != 0) {
      lVar4 = FUN_1449db7f2();
      lVar1 = *(longlong *)(param_1 + 0x430);
      uVar7 = uVar6;
      if ((((lVar1 != 0) && (lVar4 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
         ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
           lVar4 + 0x30)))) {
        uVar7 = *(undefined4 *)(lVar1 + 0xe0);
      }
    }
  }
  plVar5 = (longlong *)FUN_140489acc();
                    /* WARNING: Could not recover jumptable at 0x000147b7f863. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x3a8))(plVar5,uVar3,uVar7,*(code **)(*plVar5 + 0x3a8));
  return;
}



// FUNCTION 147b7f866 FUN_147b7f866 body=178 status=ok
// SIG undefined FUN_147b7f866(void)

void FUN_147b7f866(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar1 = (longlong *)FUN_140489acc();
  (**(code **)(*plVar1 + 0x3a0))(plVar1,0,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7f91a FUN_147b7f91a body=138 status=ok
// SIG undefined FUN_147b7f91a(void)

void FUN_147b7f91a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7f9ac FUN_147b7f9ac body=796 status=ok
// SIG undefined FUN_147b7f9ac(void)

void FUN_147b7f9ac(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong *local_d0;
  longlong *local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  longlong local_98 [5];
  undefined8 local_70;
  longlong local_68 [2];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_54 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  local_68[0] = 0;
  local_68[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  plVar2 = local_68;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_70 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_98[2] = 0;
  local_98[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98 + 2);
  }
  plVar3 = local_98 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_98[0] = 0;
  local_98[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  local_c8 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    local_c8 = local_98;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_b8 = local_50;
  uStack_b4 = uStack_4c;
  uStack_b0 = uStack_48;
  uStack_ac = uStack_44;
  local_a8 = local_40;
  local_d8 = local_70;
  local_d0 = plVar3;
  uVar1 = FUN_147b7fcca(local_38,&local_b8,local_54,plVar2);
  *param_3 = uVar1;
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if (local_98[2] != 0) {
    FUN_1400020a8();
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7fcca FUN_147b7fcca body=247 status=ok
// SIG undefined FUN_147b7fcca(void)

bool FUN_147b7fcca(undefined8 param_1,undefined4 *param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  longlong local_58 [3];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined4 *)(param_7 + 8) = 0;
  if (*(int *)(param_7 + 0xc) != 0) {
    FUN_140c5c1ec(param_7,0);
  }
  local_88 = local_58;
  local_58[0] = 0;
  local_58[1] = 0;
  local_78 = *param_2;
  uStack_74 = param_2[1];
  uStack_70 = param_2[2];
  uStack_6c = param_2[3];
  local_68 = *(undefined8 *)(param_2 + 4);
  local_90 = param_6;
  local_98 = 0;
  cVar2 = FUN_14354b4a0(param_1,&local_78,param_3,param_4);
  if (cVar2 != '\0') {
    FUN_147b707ec(local_58,param_5,param_7);
  }
  iVar1 = *(int *)(param_7 + 8);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return 0 < iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b7fdc8 FUN_147b7fdc8 body=845 status=ok
// SIG undefined FUN_147b7fdc8(void)

void FUN_147b7fdc8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong *local_d0;
  longlong *local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  longlong local_98 [5];
  undefined8 local_70;
  longlong local_68 [2];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_54 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  local_68[0] = 0;
  local_68[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  plVar2 = local_68;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_70 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_98[2] = 0;
  local_98[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98 + 2);
  }
  plVar3 = local_98 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_98[0] = 0;
  local_98[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  local_c8 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    local_c8 = local_98;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_b8 = local_50;
  uStack_b4 = uStack_4c;
  uStack_b0 = uStack_48;
  uStack_ac = uStack_44;
  local_a8 = local_40;
  local_d8 = local_70;
  local_d0 = plVar3;
  uVar1 = FUN_14354b4a0(local_38,&local_b8,local_54,plVar2);
  *param_3 = uVar1;
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if (local_98[2] != 0) {
    FUN_1400020a8();
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b8012a FUN_147b8012a body=1281 status=ok
// SIG undefined FUN_147b8012a(void)

void FUN_147b8012a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_168 [32];
  uint local_148;
  undefined1 local_140;
  longlong *local_138;
  longlong *local_130;
  undefined1 local_128;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined1 local_dc [16];
  undefined1 local_cc [16];
  int local_bc;
  longlong local_b8 [3];
  undefined1 local_99;
  longlong local_98 [3];
  int local_7c;
  byte local_75;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_74 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_74);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_74);
  }
  local_75 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_75);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_75);
  }
  local_7c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  iVar2 = local_7c;
  local_98[0] = 0;
  local_98[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  plVar4 = local_98;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_99 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_99);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_99);
  }
  local_b8[0] = 0;
  local_b8[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
  plVar5 = local_b8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  local_bc = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_bc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_bc);
  }
  iVar1 = local_bc;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_cc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_cc);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_dc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_dc);
  }
  local_e0 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e0);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_f8 = local_70;
  uStack_f0 = uStack_68;
  local_e8 = local_60;
  local_118 = local_58;
  uStack_114 = uStack_54;
  uStack_110 = uStack_50;
  uStack_10c = uStack_4c;
  local_108 = local_48;
  local_128 = iVar1 != 0;
  local_140 = iVar2 != 0;
  local_148 = (uint)local_75;
  local_138 = plVar4;
  local_130 = plVar5;
  uVar3 = FUN_147b8062c(local_40,&local_118,&local_f8,local_74);
  *param_3 = uVar3;
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b8062c FUN_147b8062c body=434 status=ok
// SIG undefined FUN_147b8062c(void)

undefined4
FUN_147b8062c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 unaff_RBP;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined4 *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined1 local_d0 [80];
  longlong local_80;
  longlong local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar1 = FUN_147a90476(param_5);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae7fb0) {
    FUN_144b3d300(&DAT_14cae7fb0);
    if (DAT_14cae7fb0 == -1) {
      FUN_1446f470e(&DAT_14cae7fa8,L"SphereTraceMulti",1);
      _Init_thread_footer(&DAT_14cae7fb0);
    }
  }
  local_108 = (undefined8 *)CONCAT71(local_108._1_7_,param_9);
  local_100 = param_1;
  FUN_14354be4f(local_d0,DAT_14cae7fa8,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_6) & 0xffffffff,param_7);
  lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    local_f8 = &local_e0;
    local_e0 = 2;
    local_e8 = &DAT_14cad0f10;
    local_100 = CONCAT44(local_100._4_4_,uVar1);
    local_108 = &DAT_14c8463d0;
    local_f0 = local_d0;
    local_dc = param_4;
    uVar1 = FUN_14038e76e(lVar2,param_8,param_2,param_3);
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b807f4 FUN_147b807f4 body=1286 status=ok
// SIG undefined FUN_147b807f4(void)

void FUN_147b807f4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined1 local_140;
  longlong *local_138;
  longlong *local_130;
  undefined1 local_128;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined1 local_dc [16];
  undefined1 local_cc [16];
  int local_bc;
  longlong local_b8 [3];
  undefined1 local_99;
  longlong local_98 [2];
  int local_84;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_74 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_74);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_74);
  }
  local_80 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  local_84 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_84);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_84);
  }
  iVar2 = local_84;
  local_98[0] = 0;
  local_98[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  plVar4 = local_98;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_99 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_99);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_99);
  }
  local_b8[0] = 0;
  local_b8[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
  plVar5 = local_b8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  local_bc = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_bc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_bc);
  }
  iVar1 = local_bc;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_cc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_cc);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_dc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_dc);
  }
  local_e0 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e0);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_f8 = local_70;
  uStack_f0 = uStack_68;
  local_e8 = local_60;
  local_118 = local_58;
  uStack_114 = uStack_54;
  uStack_110 = uStack_50;
  uStack_10c = uStack_4c;
  local_108 = local_48;
  local_128 = iVar1 != 0;
  local_140 = iVar2 != 0;
  local_148 = local_80;
  local_138 = plVar4;
  local_130 = plVar5;
  uVar3 = FUN_147b80cfc(local_40,&local_118,&local_f8,local_74);
  *param_3 = uVar3;
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b80cfc FUN_147b80cfc body=415 status=ok
// SIG undefined FUN_147b80cfc(void)

undefined4
FUN_147b80cfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 unaff_RBP;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined4 *local_f8;
  undefined1 *local_f0;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined1 local_d0 [80];
  longlong local_80;
  longlong local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae80b0) {
    FUN_144b3d300(&DAT_14cae80b0);
    if (DAT_14cae80b0 == -1) {
      FUN_1446f470e(&DAT_14cae80a8,L"SphereTraceMultiByProfile",1);
      _Init_thread_footer(&DAT_14cae80b0);
    }
  }
  local_108 = (undefined8 *)CONCAT71(local_108._1_7_,param_9);
  local_100 = param_1;
  FUN_14354be4f(local_d0,DAT_14cae80a8,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_6) & 0xffffffff,param_7);
  lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    local_f8 = &local_e0;
    local_e0 = 2;
    local_100 = param_5;
    local_108 = &DAT_14c8463d0;
    local_f0 = local_d0;
    local_dc = param_4;
    uVar1 = FUN_1479b4ea2(lVar2,param_8,param_2,param_3);
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b80eb2 FUN_147b80eb2 body=1410 status=ok
// SIG undefined FUN_147b80eb2(void)

void FUN_147b80eb2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_188 [32];
  longlong *local_168;
  undefined1 local_160;
  longlong *local_158;
  longlong *local_150;
  undefined1 local_148;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined1 local_fc [16];
  undefined1 local_ec [16];
  int local_dc;
  longlong local_d8 [3];
  undefined1 local_b9;
  longlong local_b8 [3];
  int local_9c;
  longlong local_98 [3];
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_7c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  local_98[0] = 0;
  local_98[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  plVar4 = local_98;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_9c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_9c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_9c);
  }
  iVar2 = local_9c;
  local_b8[0] = 0;
  local_b8[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
  plVar5 = local_b8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  local_b9 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b9);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b9);
  }
  local_d8[0] = 0;
  local_d8[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_d8);
  }
  plVar6 = local_d8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar6 = *(longlong **)(param_2 + 0x38);
  }
  local_dc = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_dc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_dc);
  }
  iVar1 = local_dc;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_ec);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_ec);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_fc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_fc);
  }
  local_100 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_100);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_100);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_118 = local_78;
  uStack_110 = uStack_70;
  local_108 = local_68;
  local_138 = local_60;
  uStack_134 = uStack_5c;
  uStack_130 = uStack_58;
  uStack_12c = uStack_54;
  local_128 = local_50;
  local_148 = iVar1 != 0;
  local_160 = iVar2 != 0;
  local_168 = plVar4;
  local_158 = plVar5;
  local_150 = plVar6;
  uVar3 = FUN_14354ba3c(local_48,&local_138,&local_118,local_7c);
  *param_3 = uVar3;
  if (local_d8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b8144c FUN_147b8144c body=1297 status=ok
// SIG undefined FUN_147b8144c(void)

void FUN_147b8144c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  longlong *plVar5;
  undefined1 auStack_258 [32];
  uint local_238;
  undefined1 local_230;
  longlong *local_228;
  undefined1 *local_220;
  undefined1 local_218;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined4 local_1c8;
  undefined1 local_1c4 [16];
  undefined1 local_1b4 [16];
  int local_1a4;
  undefined1 local_1a0 [4];
  undefined4 local_19c;
  undefined4 local_fc;
  undefined4 local_d0;
  undefined1 local_99;
  longlong local_98 [3];
  int local_7c;
  byte local_75;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_258;
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_74 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_74);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_74);
  }
  local_75 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_75);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_75);
  }
  local_7c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  iVar2 = local_7c;
  local_98[0] = 0;
  local_98[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  plVar5 = local_98;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  local_99 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_99);
  }
  memset(local_1a0,0,0x100);
  local_d0 = 0xffffffff;
  local_19c = 0x3f800000;
  local_fc = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_1a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_1a0);
  }
  puVar4 = local_1a0;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  local_1a4 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1a4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1a4);
  }
  iVar1 = local_1a4;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_1b4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_1b4);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_1c4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_1c4);
  }
  local_1c8 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_1e8 = local_70;
  uStack_1e0 = uStack_68;
  local_1d8 = local_60;
  local_208 = local_58;
  uStack_204 = uStack_54;
  uStack_200 = uStack_50;
  uStack_1fc = uStack_4c;
  local_1f8 = local_48;
  local_218 = iVar1 != 0;
  local_230 = iVar2 != 0;
  local_238 = (uint)local_75;
  local_228 = plVar5;
  local_220 = puVar4;
  uVar3 = FUN_147b8195e(local_40,&local_208,&local_1e8,local_74);
  *param_3 = uVar3;
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b8195e FUN_147b8195e body=434 status=ok
// SIG undefined FUN_147b8195e(void)

undefined4
FUN_147b8195e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 unaff_RBP;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined4 *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined1 local_d0 [80];
  longlong local_80;
  longlong local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar1 = FUN_147a90476(param_5);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae7fa0) {
    FUN_144b3d300(&DAT_14cae7fa0);
    if (DAT_14cae7fa0 == -1) {
      FUN_1446f470e(&DAT_14cae7f98,L"SphereTraceSingle",1);
      _Init_thread_footer(&DAT_14cae7fa0);
    }
  }
  local_108 = (undefined8 *)CONCAT71(local_108._1_7_,param_9);
  local_100 = param_1;
  FUN_14354be4f(local_d0,DAT_14cae7f98,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_6) & 0xffffffff,param_7);
  lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    local_f8 = &local_e0;
    local_e0 = 2;
    local_e8 = &DAT_14cad0f10;
    local_100 = CONCAT44(local_100._4_4_,uVar1);
    local_108 = &DAT_14c8463d0;
    local_f0 = local_d0;
    local_dc = param_4;
    uVar1 = FUN_14021655c(lVar2,param_8,param_2,param_3);
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b81b28 FUN_147b81b28 body=1302 status=ok
// SIG undefined FUN_147b81b28(void)

void FUN_147b81b28(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  longlong *plVar5;
  undefined1 auStack_258 [32];
  undefined8 local_238;
  undefined1 local_230;
  longlong *local_228;
  undefined1 *local_220;
  undefined1 local_218;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined4 local_1c8;
  undefined1 local_1c4 [16];
  undefined1 local_1b4 [16];
  int local_1a4;
  undefined1 local_1a0 [4];
  undefined4 local_19c;
  undefined4 local_fc;
  undefined4 local_d0;
  undefined1 local_99;
  longlong local_98 [2];
  int local_84;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_258;
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_74 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_74);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_74);
  }
  local_80 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  local_84 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_84);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_84);
  }
  iVar2 = local_84;
  local_98[0] = 0;
  local_98[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  plVar5 = local_98;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  local_99 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_99);
  }
  memset(local_1a0,0,0x100);
  local_d0 = 0xffffffff;
  local_19c = 0x3f800000;
  local_fc = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_1a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_1a0);
  }
  puVar4 = local_1a0;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  local_1a4 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1a4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1a4);
  }
  iVar1 = local_1a4;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_1b4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_1b4);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_1c4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_1c4);
  }
  local_1c8 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_1e8 = local_70;
  uStack_1e0 = uStack_68;
  local_1d8 = local_60;
  local_208 = local_58;
  uStack_204 = uStack_54;
  uStack_200 = uStack_50;
  uStack_1fc = uStack_4c;
  local_1f8 = local_48;
  local_218 = iVar1 != 0;
  local_230 = iVar2 != 0;
  local_238 = local_80;
  local_228 = plVar5;
  local_220 = puVar4;
  uVar3 = FUN_147b82040(local_40,&local_208,&local_1e8,local_74);
  *param_3 = uVar3;
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b82040 FUN_147b82040 body=415 status=ok
// SIG undefined FUN_147b82040(void)

undefined4
FUN_147b82040(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 unaff_RBP;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined4 *local_f8;
  undefined1 *local_f0;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined1 local_d0 [80];
  longlong local_80;
  longlong local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae80a0) {
    FUN_144b3d300(&DAT_14cae80a0);
    if (DAT_14cae80a0 == -1) {
      FUN_1446f470e(&DAT_14cae8098,L"SphereTraceSingleByProfile",1);
      _Init_thread_footer(&DAT_14cae80a0);
    }
  }
  local_108 = (undefined8 *)CONCAT71(local_108._1_7_,param_9);
  local_100 = param_1;
  FUN_14354be4f(local_d0,DAT_14cae8098,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_6) & 0xffffffff,param_7);
  lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    local_f8 = &local_e0;
    local_e0 = 2;
    local_100 = param_5;
    local_108 = &DAT_14c8463d0;
    local_f0 = local_d0;
    local_dc = param_4;
    uVar1 = FUN_1479b4c8a(lVar2,param_8,param_2,param_3);
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b821f6 FUN_147b821f6 body=1426 status=ok
// SIG undefined FUN_147b821f6(void)

void FUN_147b821f6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_278 [32];
  longlong *local_258;
  undefined1 local_250;
  longlong *local_248;
  undefined1 *local_240;
  undefined1 local_238;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined4 local_1e8;
  undefined1 local_1e4 [16];
  undefined1 local_1d4 [16];
  int local_1c4;
  undefined1 local_1c0 [4];
  undefined4 local_1bc;
  undefined4 local_11c;
  undefined4 local_f0;
  undefined1 local_b9;
  longlong local_b8 [3];
  int local_9c;
  longlong local_98 [3];
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_278;
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_7c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  local_98[0] = 0;
  local_98[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  plVar5 = local_98;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  local_9c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_9c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_9c);
  }
  iVar2 = local_9c;
  local_b8[0] = 0;
  local_b8[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
  plVar6 = local_b8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar6 = *(longlong **)(param_2 + 0x38);
  }
  local_b9 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b9);
  }
  memset(local_1c0,0,0x100);
  local_f0 = 0xffffffff;
  local_1bc = 0x3f800000;
  local_11c = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_1c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_1c0);
  }
  puVar4 = local_1c0;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  local_1c4 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c4);
  }
  iVar1 = local_1c4;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_1d4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_1d4);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_1e4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_1e4);
  }
  local_1e8 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1e8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_208 = local_78;
  uStack_200 = uStack_70;
  local_1f8 = local_68;
  local_228 = local_60;
  uStack_224 = uStack_5c;
  uStack_220 = uStack_58;
  uStack_21c = uStack_54;
  local_218 = local_50;
  local_238 = iVar1 != 0;
  local_250 = iVar2 != 0;
  local_258 = plVar5;
  local_248 = plVar6;
  local_240 = puVar4;
  uVar3 = FUN_14354bbf4(local_48,&local_228,&local_208,local_7c);
  *param_3 = uVar3;
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b8278a FUN_147b8278a body=138 status=ok
// SIG undefined FUN_147b8278a(void)

void FUN_147b8278a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b82816 FUN_147b82816 body=171 status=ok
// SIG undefined FUN_147b82816(void)

void FUN_147b82816(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = (undefined4)local_28;
  uStack_34 = local_28._4_4_;
  uStack_30 = (undefined4)uStack_20;
  uStack_2c = uStack_20._4_4_;
  plVar1 = (longlong *)FUN_14050fd64();
  (**(code **)(*plVar1 + 0x388))(plVar1,&local_38);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b828c2 FUN_147b828c2 body=193 status=ok
// SIG undefined FUN_147b828c2(void)

void FUN_147b828c2(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar1 = (longlong *)FUN_14050fd64();
  (**(code **)(*plVar1 + 0x380))(plVar1,plVar2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b8299a FUN_147b8299a body=380 status=ok
// SIG undefined FUN_147b8299a(void)

void FUN_147b8299a(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
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
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 8);
    lVar2 = FUN_1446dcc8c();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
    }
    else {
      bVar4 = (*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0;
    }
    lVar3 = 0;
    if (bVar4) {
      lVar3 = lVar1;
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b82c98(local_28,local_30,lVar3,*(undefined8 *)(param_2 + 0x38));
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147b82b18 FUN_147b82b18 body=380 status=ok
// SIG undefined FUN_147b82b18(void)

void FUN_147b82b18(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
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
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 8);
    lVar2 = FUN_1446dcc8c();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
    }
    else {
      bVar4 = (*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0;
    }
    lVar3 = 0;
    if (bVar4) {
      lVar3 = lVar1;
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b82c98(local_28,local_30,lVar3,*(undefined8 *)(param_2 + 0x38));
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147b82c98 FUN_147b82c98 body=140 status=ok
// SIG undefined FUN_147b82c98(void)

void FUN_147b82c98(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (param_1 != 0) {
    plVar3 = (longlong *)FUN_1408d67c1(*(undefined8 *)(param_1 + 0x10),param_2,3);
    if ((((param_4 != 0) && (param_3 != 0)) && (plVar3 != (longlong *)0x0)) &&
       (((lVar1 = *(longlong *)(param_3 + 0x70), lVar1 != 0 && (lVar2 = plVar3[0xe], lVar2 != 0)) &&
        ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30)))))) {
                    /* WARNING: Could not recover jumptable at 0x000147b82d21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x100))(plVar3,param_1 + *(int *)((longlong)plVar3 + 0x44),param_4,1);
      return;
    }
  }
  return;
}



// FUNCTION 147b82d24 FUN_147b82d24 body=164 status=ok
// SIG undefined FUN_147b82d24(void)

longlong FUN_147b82d24(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  undefined4 local_20;
  undefined2 local_1c;
  undefined1 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    if (param_1 == 0) {
      local_28 = 0;
    }
    else {
      local_28 = *(longlong *)(param_1 + 0x50);
    }
    local_20 = 0xffffffff;
    local_1c = 0x101;
    local_1a = 0;
    local_30 = param_1;
    FUN_147b91b10(&local_30);
    if (local_28 != 0) {
      do {
        lVar1 = local_28;
        if (*(longlong *)(local_28 + 0x20) == param_2) goto LAB_147b82d40;
        local_28 = *(longlong *)(local_28 + 0x18);
        FUN_147b91b10(&local_30);
      } while (local_28 != 0);
    }
  }
  lVar1 = 0;
LAB_147b82d40:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 147b82dc9 FUN_147b82dc9 body=164 status=ok
// SIG undefined FUN_147b82dc9(void)

longlong FUN_147b82dc9(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  undefined4 local_20;
  undefined2 local_1c;
  undefined1 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    if (param_1 == 0) {
      local_28 = 0;
    }
    else {
      local_28 = *(longlong *)(param_1 + 0x50);
    }
    local_20 = 0xffffffff;
    local_1c = 0x101;
    local_1a = 0;
    local_30 = param_1;
    FUN_147b91bc0(&local_30);
    if (local_28 != 0) {
      do {
        lVar1 = local_28;
        if (*(longlong *)(local_28 + 0x20) == param_2) goto LAB_147b82de5;
        local_28 = *(longlong *)(local_28 + 0x18);
        FUN_147b91bc0(&local_30);
      } while (local_28 != 0);
    }
  }
  lVar1 = 0;
LAB_147b82de5:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 147b82e6e FUN_147b82e6e body=125 status=ok
// SIG undefined FUN_147b82e6e(void)

longlong FUN_147b82e6e(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 != 0) && (FUN_147b91c70(local_30,param_1), local_28 != 0)) {
    do {
      lVar1 = local_28;
      if (*(longlong *)(local_28 + 0x20) == param_2) goto LAB_147b82e8d;
      local_28 = *(longlong *)(local_28 + 0x18);
      FUN_147b91cf4(local_30);
    } while (local_28 != 0);
  }
  lVar1 = 0;
LAB_147b82e8d:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 147b82eec FUN_147b82eec body=164 status=ok
// SIG undefined FUN_147b82eec(void)

longlong FUN_147b82eec(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  undefined4 local_20;
  undefined2 local_1c;
  undefined1 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    if (param_1 == 0) {
      local_28 = 0;
    }
    else {
      local_28 = *(longlong *)(param_1 + 0x50);
    }
    local_20 = 0xffffffff;
    local_1c = 0x101;
    local_1a = 0;
    local_30 = param_1;
    FUN_147b91dae(&local_30);
    if (local_28 != 0) {
      do {
        lVar1 = local_28;
        if (*(longlong *)(local_28 + 0x20) == param_2) goto LAB_147b82f08;
        local_28 = *(longlong *)(local_28 + 0x18);
        FUN_147b91dae(&local_30);
      } while (local_28 != 0);
    }
  }
  lVar1 = 0;
LAB_147b82f08:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 147b82f91 FUN_147b82f91 body=164 status=ok
// SIG undefined FUN_147b82f91(void)

longlong FUN_147b82f91(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  undefined4 local_20;
  undefined2 local_1c;
  undefined1 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    if (param_1 == 0) {
      local_28 = 0;
    }
    else {
      local_28 = *(longlong *)(param_1 + 0x50);
    }
    local_20 = 0xffffffff;
    local_1c = 0x101;
    local_1a = 0;
    local_30 = param_1;
    FUN_147b91e68(&local_30);
    if (local_28 != 0) {
      do {
        lVar1 = local_28;
        if (*(longlong *)(local_28 + 0x20) == param_2) goto LAB_147b82fad;
        local_28 = *(longlong *)(local_28 + 0x18);
        FUN_147b91e68(&local_30);
      } while (local_28 != 0);
    }
  }
  lVar1 = 0;
LAB_147b82fad:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 147b83036 FUN_147b83036 body=164 status=ok
// SIG undefined FUN_147b83036(void)

longlong FUN_147b83036(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  undefined4 local_20;
  undefined2 local_1c;
  undefined1 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    if (param_1 == 0) {
      local_28 = 0;
    }
    else {
      local_28 = *(longlong *)(param_1 + 0x50);
    }
    local_20 = 0xffffffff;
    local_1c = 0x101;
    local_1a = 0;
    local_30 = param_1;
    FUN_147b91f18(&local_30);
    if (local_28 != 0) {
      do {
        lVar1 = local_28;
        if (*(longlong *)(local_28 + 0x20) == param_2) goto LAB_147b83052;
        local_28 = *(longlong *)(local_28 + 0x18);
        FUN_147b91f18(&local_30);
      } while (local_28 != 0);
    }
  }
  lVar1 = 0;
LAB_147b83052:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 147b830db FUN_147b830db body=164 status=ok
// SIG undefined FUN_147b830db(void)

longlong FUN_147b830db(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  undefined4 local_20;
  undefined2 local_1c;
  undefined1 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    if (param_1 == 0) {
      local_28 = 0;
    }
    else {
      local_28 = *(longlong *)(param_1 + 0x50);
    }
    local_20 = 0xffffffff;
    local_1c = 0x101;
    local_1a = 0;
    local_30 = param_1;
    FUN_147b91fc8(&local_30);
    if (local_28 != 0) {
      do {
        lVar1 = local_28;
        if (*(longlong *)(local_28 + 0x20) == param_2) goto LAB_147b830f7;
        local_28 = *(longlong *)(local_28 + 0x18);
        FUN_147b91fc8(&local_30);
      } while (local_28 != 0);
    }
  }
  lVar1 = 0;
LAB_147b830f7:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 147b83180 FUN_147b83180 body=164 status=ok
// SIG undefined FUN_147b83180(void)

longlong FUN_147b83180(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  undefined4 local_20;
  undefined2 local_1c;
  undefined1 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    if (param_1 == 0) {
      local_28 = 0;
    }
    else {
      local_28 = *(longlong *)(param_1 + 0x50);
    }
    local_20 = 0xffffffff;
    local_1c = 0x101;
    local_1a = 0;
    local_30 = param_1;
    FUN_147b92078(&local_30);
    if (local_28 != 0) {
      do {
        lVar1 = local_28;
        if (*(longlong *)(local_28 + 0x20) == param_2) goto LAB_147b8319c;
        local_28 = *(longlong *)(local_28 + 0x18);
        FUN_147b92078(&local_30);
      } while (local_28 != 0);
    }
  }
  lVar1 = 0;
LAB_147b8319c:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 147b83225 FUN_147b83225 body=164 status=ok
// SIG undefined FUN_147b83225(void)

longlong FUN_147b83225(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  undefined4 local_20;
  undefined2 local_1c;
  undefined1 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    if (param_1 == 0) {
      local_28 = 0;
    }
    else {
      local_28 = *(longlong *)(param_1 + 0x50);
    }
    local_20 = 0xffffffff;
    local_1c = 0x101;
    local_1a = 0;
    local_30 = param_1;
    FUN_147b92128(&local_30);
    if (local_28 != 0) {
      do {
        lVar1 = local_28;
        if (*(longlong *)(local_28 + 0x20) == param_2) goto LAB_147b83241;
        local_28 = *(longlong *)(local_28 + 0x18);
        FUN_147b92128(&local_30);
      } while (local_28 != 0);
    }
  }
  lVar1 = 0;
LAB_147b83241:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 147b832ca FUN_147b832ca body=164 status=ok
// SIG undefined FUN_147b832ca(void)

longlong FUN_147b832ca(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  undefined4 local_20;
  undefined2 local_1c;
  undefined1 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    if (param_1 == 0) {
      local_28 = 0;
    }
    else {
      local_28 = *(longlong *)(param_1 + 0x50);
    }
    local_20 = 0xffffffff;
    local_1c = 0x101;
    local_1a = 0;
    local_30 = param_1;
    FUN_147b921d8(&local_30);
    if (local_28 != 0) {
      do {
        lVar1 = local_28;
        if (*(longlong *)(local_28 + 0x20) == param_2) goto LAB_147b832e6;
        local_28 = *(longlong *)(local_28 + 0x18);
        FUN_147b921d8(&local_30);
      } while (local_28 != 0);
    }
  }
  lVar1 = 0;
LAB_147b832e6:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 147b8336f FUN_147b8336f body=164 status=ok
// SIG undefined FUN_147b8336f(void)

longlong FUN_147b8336f(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  undefined4 local_20;
  undefined2 local_1c;
  undefined1 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    if (param_1 == 0) {
      local_28 = 0;
    }
    else {
      local_28 = *(longlong *)(param_1 + 0x50);
    }
    local_20 = 0xffffffff;
    local_1c = 0x101;
    local_1a = 0;
    local_30 = param_1;
    FUN_147b92288(&local_30);
    if (local_28 != 0) {
      do {
        lVar1 = local_28;
        if (*(longlong *)(local_28 + 0x20) == param_2) goto LAB_147b8338b;
        local_28 = *(longlong *)(local_28 + 0x18);
        FUN_147b92288(&local_30);
      } while (local_28 != 0);
    }
  }
  lVar1 = 0;
LAB_147b8338b:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 147b83414 FUN_147b83414 body=164 status=ok
// SIG undefined FUN_147b83414(void)

longlong FUN_147b83414(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  undefined4 local_20;
  undefined2 local_1c;
  undefined1 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    if (param_1 == 0) {
      local_28 = 0;
    }
    else {
      local_28 = *(longlong *)(param_1 + 0x50);
    }
    local_20 = 0xffffffff;
    local_1c = 0x101;
    local_1a = 0;
    local_30 = param_1;
    FUN_147b92342(&local_30);
    if (local_28 != 0) {
      do {
        lVar1 = local_28;
        if (*(longlong *)(local_28 + 0x20) == param_2) goto LAB_147b83430;
        local_28 = *(longlong *)(local_28 + 0x18);
        FUN_147b92342(&local_30);
      } while (local_28 != 0);
    }
  }
  lVar1 = 0;
LAB_147b83430:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 147b834b9 FUN_147b834b9 body=164 status=ok
// SIG undefined FUN_147b834b9(void)

longlong FUN_147b834b9(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  undefined4 local_20;
  undefined2 local_1c;
  undefined1 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    if (param_1 == 0) {
      local_28 = 0;
    }
    else {
      local_28 = *(longlong *)(param_1 + 0x50);
    }
    local_20 = 0xffffffff;
    local_1c = 0x101;
    local_1a = 0;
    local_30 = param_1;
    FUN_147b923fc(&local_30);
    if (local_28 != 0) {
      do {
        lVar1 = local_28;
        if (*(longlong *)(local_28 + 0x20) == param_2) goto LAB_147b834d5;
        local_28 = *(longlong *)(local_28 + 0x18);
        FUN_147b923fc(&local_30);
      } while (local_28 != 0);
    }
  }
  lVar1 = 0;
LAB_147b834d5:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 147b8355e FUN_147b8355e body=216 status=ok
// SIG undefined FUN_147b8355e(void)

void FUN_147b8355e(undefined8 *param_1,float *param_2)

{
  uint uVar1;
  float fVar2;
  
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    fVar2 = *(float *)((longlong)param_1 + 0x14);
    if (*param_2 <= *(float *)((longlong)param_1 + 0x14)) {
      fVar2 = *param_2;
    }
    *(float *)((longlong)param_1 + 0x14) = fVar2;
    fVar2 = *(float *)(param_1 + 3);
    if (*(float *)(param_1 + 3) <= *param_2) {
      fVar2 = *param_2;
    }
    *(float *)(param_1 + 3) = fVar2;
    uVar1 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar1 + 1;
    if (*(uint *)((longlong)param_1 + 0xc) < uVar1 + 1) {
      FUN_14475e4ac(param_1,(ulonglong)uVar1);
    }
    memmove((void *)((longlong)*param_1 + 4),(void *)*param_1,(ulonglong)uVar1 << 2);
    *(float *)*param_1 = *param_2;
  }
  else {
    fVar2 = *param_2;
    if (*(float *)(param_1 + 3) <= *param_2) {
      fVar2 = *(float *)(param_1 + 3);
    }
    if (fVar2 <= *(float *)((longlong)param_1 + 0x14)) {
      fVar2 = *(float *)((longlong)param_1 + 0x14);
    }
    uVar1 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar1 + 1;
    if (*(uint *)((longlong)param_1 + 0xc) < uVar1 + 1) {
      FUN_14475e4ac(param_1,(ulonglong)uVar1);
    }
    memmove((void *)((longlong)*param_1 + 4),(void *)*param_1,(ulonglong)uVar1 << 2);
    *(float *)*param_1 = fVar2;
  }
  if (*(int *)(param_1 + 2) < *(int *)(param_1 + 1)) {
    *(int *)(param_1 + 1) = *(int *)(param_1 + 2);
    FUN_1401fef06(param_1);
    return;
  }
  return;
}



// FUNCTION 147b83636 FUN_147b83636 body=265 status=ok
// SIG undefined FUN_147b83636(void)

undefined8 *
FUN_147b83636(undefined8 *param_1,undefined4 param_2,undefined4 *param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_14a9b0840;
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined8 *)((longlong)param_1 + 0x14) = *(undefined8 *)(param_3 + 2);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *param_3;
  param_1[4] = 0;
  FUN_14485c47a(param_1 + 4,*(undefined8 *)(param_3 + 4));
  param_1[5] = 0;
  FUN_14485c47a(param_1 + 5,param_4);
  *(undefined1 *)(param_1 + 6) = 1;
  uVar1 = DAT_14c846500;
  param_1[7] = DAT_14c8464f8;
  param_1[8] = uVar1;
  param_1[9] = DAT_14c846508;
  uVar1 = DAT_14c846500;
  param_1[10] = DAT_14c8464f8;
  param_1[0xb] = uVar1;
  param_1[0xc] = DAT_14c846508;
  *(undefined1 *)(param_1 + 0xd) = 1;
  uVar1 = DAT_14c8464e8;
  param_1[0xe] = DAT_14c8464e0;
  param_1[0xf] = uVar1;
  param_1[0x10] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x11] = DAT_14c8464e0;
  param_1[0x12] = uVar1;
  param_1[0x13] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x14) = param_6;
  *(undefined1 *)((longlong)param_1 + 0xa1) = param_5;
  *(undefined1 *)((longlong)param_1 + 0xa2) = param_7;
  return param_1;
}



// FUNCTION 147b83740 FUN_147b83740 body=408 status=ok
// SIG undefined FUN_147b83740(void)

void FUN_147b83740(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined2 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90 [2];
  longlong local_80 [2];
  longlong local_70 [2];
  longlong *local_60;
  longlong *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = param_4;
  FUN_1463e77d2();
  if (0 < (longlong)(int)param_3[1]) {
    uVar9 = (longlong)(int)param_3[1];
    do {
      uVar10 = uVar9 - 1;
      lVar2 = *param_3;
      lVar5 = uVar10 * 0x10;
      iVar1 = *(int *)(lVar2 + 8 + lVar5);
      if ((longlong)iVar1 != 0) {
        lVar6 = (longlong)iVar1 * 2;
        lVar14 = 0;
        do {
          if (*(short *)(*(longlong *)(lVar2 + lVar5) + lVar14 * 2) == 0x3d) {
            uVar13 = (uint)lVar14;
            if (uVar13 != 0xffffffff) {
              uVar12 = 0;
              uVar11 = iVar1 - 1;
              if (iVar1 == 0) {
                uVar11 = uVar12;
              }
              uVar4 = uVar13 + 1;
              if ((int)uVar11 <= (int)(uVar13 + 1)) {
                uVar4 = uVar11;
              }
              uVar7 = (ulonglong)uVar4;
              if ((int)uVar4 < 1) {
                uVar7 = 0;
              }
              FUN_14006620a(local_80,*(longlong *)(lVar2 + lVar5) + uVar7 * 2,uVar11 - (int)uVar7);
              FUN_141701410(local_80,local_70,0);
              iVar1 = *(int *)((undefined8 *)(lVar2 + lVar5) + 1);
              puVar8 = &DAT_149dfb77a;
              if (iVar1 != 0) {
                puVar8 = *(undefined2 **)(lVar2 + lVar5);
                uVar12 = iVar1 - 1;
              }
              if ((int)uVar13 < (int)uVar12) {
                uVar12 = uVar13;
              }
              uVar7 = (ulonglong)uVar12;
              if ((int)uVar12 < 1) {
                uVar7 = 0;
              }
              FUN_14006620a(local_90,puVar8,uVar7);
              local_60 = local_90;
              local_58 = local_70;
              FUN_1411f1c38(local_98,local_4c,&local_60,0);
              if (local_90[0] != 0) {
                FUN_1400020a8();
              }
              if (local_70[0] != 0) {
                FUN_1400020a8();
              }
              if (local_80[0] != 0) {
                FUN_1400020a8();
              }
              FUN_14101da94(param_3,uVar10 & 0xffffffff);
              FUN_140b12644(param_3);
            }
            break;
          }
          lVar14 = lVar14 + 1;
          lVar6 = lVar6 + -2;
        } while (lVar6 != 0);
      }
      FUN_1447a1747(0,0);
      bVar3 = 1 < (longlong)uVar9;
      uVar9 = uVar10;
    } while (bVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b838d9 FUN_147b838d9 body=164 status=ok
// SIG undefined FUN_147b838d9(void)

longlong FUN_147b838d9(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  undefined4 local_20;
  undefined2 local_1c;
  undefined1 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    if (param_1 == 0) {
      local_28 = 0;
    }
    else {
      local_28 = *(longlong *)(param_1 + 0x50);
    }
    local_20 = 0xffffffff;
    local_1c = 0x101;
    local_1a = 0;
    local_30 = param_1;
    FUN_147b9276c(&local_30);
    if (local_28 != 0) {
      do {
        lVar1 = local_28;
        if (*(longlong *)(local_28 + 0x20) == param_2) goto LAB_147b838f5;
        local_28 = *(longlong *)(local_28 + 0x18);
        FUN_147b9276c(&local_30);
      } while (local_28 != 0);
    }
  }
  lVar1 = 0;
LAB_147b838f5:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 147b8397e FUN_147b8397e body=164 status=ok
// SIG undefined FUN_147b8397e(void)

longlong FUN_147b8397e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  undefined4 local_20;
  undefined2 local_1c;
  undefined1 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    if (param_1 == 0) {
      local_28 = 0;
    }
    else {
      local_28 = *(longlong *)(param_1 + 0x50);
    }
    local_20 = 0xffffffff;
    local_1c = 0x101;
    local_1a = 0;
    local_30 = param_1;
    FUN_147b9281c(&local_30);
    if (local_28 != 0) {
      do {
        lVar1 = local_28;
        if (*(longlong *)(local_28 + 0x20) == param_2) goto LAB_147b8399a;
        local_28 = *(longlong *)(local_28 + 0x18);
        FUN_147b9281c(&local_30);
      } while (local_28 != 0);
    }
  }
  lVar1 = 0;
LAB_147b8399a:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 147b83a24 FUN_147b83a24 body=572 status=ok
// SIG undefined FUN_147b83a24(void)

undefined8 FUN_147b83a24(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_b8 [44];
  undefined1 local_8c [4];
  undefined1 local_88 [16];
  longlong local_78 [2];
  longlong local_68;
  ulonglong uStack_60;
  wchar_t *local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = 0;
  uStack_60 = 0;
  local_48 = *param_2;
  local_50 = (wchar_t *)CONCAT44(local_50._4_4_,3);
  local_40 = (longlong *)0x0;
  local_38 = 0;
  FUN_140056680(local_78,&DAT_149e25cc8);
  FUN_140233eec(&local_68,local_78,&local_50);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 0x10))();
  }
  local_48 = param_2[1];
  local_50 = (wchar_t *)CONCAT44(local_50._4_4_,3);
  local_40 = (longlong *)0x0;
  local_38 = 0;
  FUN_140056680(local_78,&DAT_149e25ccc);
  FUN_140233eec(&local_68,local_78,&local_50);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 0x10))();
  }
  local_48 = param_2[2];
  local_50 = (wchar_t *)CONCAT44(local_50._4_4_,3);
  local_40 = (longlong *)0x0;
  local_38 = 0;
  FUN_140056680(local_78,&DAT_149e25cd0);
  FUN_140233eec(&local_68,local_78,&local_50);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 0x10))();
  }
  local_50 = L"Vector3";
  local_48._0_4_ = 7;
  FUN_1446e940c(local_78,&local_50);
  local_50 = L"Core";
  local_48 = CONCAT44(local_48._4_4_,4);
  FUN_1446e940c(local_8c,&local_50);
  FUN_140208bae(&local_50,local_8c,local_78,L"X={X} Y={Y} Z={Z}");
  FUN_14023409e(local_88,&local_50,1);
  FUN_140233c04(param_1,local_88,&local_68);
  if (local_50 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_50 + 0x10))();
  }
  FUN_14010f8af(local_68,uStack_60 & 0xffffffff);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b83c62 FUN_147b83c62 body=471 status=ok
// SIG undefined FUN_147b83c62(void)

undefined8 FUN_147b83c62(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_b8 [44];
  undefined1 local_8c [4];
  undefined1 local_88 [16];
  longlong local_78 [2];
  longlong local_68;
  ulonglong uStack_60;
  wchar_t *local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = 0;
  uStack_60 = 0;
  local_48 = *param_2;
  local_50 = (wchar_t *)CONCAT44(local_50._4_4_,3);
  local_40 = (longlong *)0x0;
  local_38 = 0;
  FUN_140056680(local_78,&DAT_149e25cc8);
  FUN_140233eec(&local_68,local_78,&local_50);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 0x10))();
  }
  local_48 = param_2[1];
  local_50 = (wchar_t *)CONCAT44(local_50._4_4_,3);
  local_40 = (longlong *)0x0;
  local_38 = 0;
  FUN_140056680(local_78,&DAT_149e25ccc);
  FUN_140233eec(&local_68,local_78,&local_50);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 0x10))();
  }
  local_50 = L"Vector2";
  local_48._0_4_ = 7;
  FUN_1446e940c(local_78,&local_50);
  local_50 = L"Core";
  local_48 = CONCAT44(local_48._4_4_,4);
  FUN_1446e940c(local_8c,&local_50);
  FUN_140208bae(&local_50,local_8c,local_78,L"X={X} Y={Y}");
  FUN_14023409e(local_88,&local_50,1);
  FUN_140233c04(param_1,local_88,&local_68);
  if (local_50 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_50 + 0x10))();
  }
  FUN_14010f8af(local_68,uStack_60 & 0xffffffff);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b83e3a FUN_147b83e3a body=572 status=ok
// SIG undefined FUN_147b83e3a(void)

undefined8 FUN_147b83e3a(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_b8 [44];
  undefined1 local_8c [4];
  undefined1 local_88 [16];
  longlong local_78 [2];
  longlong local_68;
  ulonglong uStack_60;
  wchar_t *local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = 0;
  uStack_60 = 0;
  local_48 = *param_2;
  local_50 = (wchar_t *)CONCAT44(local_50._4_4_,3);
  local_40 = (longlong *)0x0;
  local_38 = 0;
  FUN_140056680(local_78,&DAT_149ebbc06);
  FUN_140233eec(&local_68,local_78,&local_50);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 0x10))();
  }
  local_48 = param_2[1];
  local_50 = (wchar_t *)CONCAT44(local_50._4_4_,3);
  local_40 = (longlong *)0x0;
  local_38 = 0;
  FUN_140056680(local_78,&DAT_149e25ccc);
  FUN_140233eec(&local_68,local_78,&local_50);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 0x10))();
  }
  local_48 = param_2[2];
  local_50 = (wchar_t *)CONCAT44(local_50._4_4_,3);
  local_40 = (longlong *)0x0;
  local_38 = 0;
  FUN_140056680(local_78,&DAT_149ebbc0e);
  FUN_140233eec(&local_68,local_78,&local_50);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 0x10))();
  }
  local_50 = L"Rotator";
  local_48._0_4_ = 7;
  FUN_1446e940c(local_78,&local_50);
  local_50 = L"Core";
  local_48 = CONCAT44(local_48._4_4_,4);
  FUN_1446e940c(local_8c,&local_50);
  FUN_140208bae(&local_50,local_8c,local_78,L"P={P} Y={Y} R={R}");
  FUN_14023409e(local_88,&local_50,1);
  FUN_140233c04(param_1,local_88,&local_68);
  if (local_50 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_50 + 0x10))();
  }
  FUN_14010f8af(local_68,uStack_60 & 0xffffffff);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b84078 FUN_147b84078 body=919 status=ok
// SIG undefined FUN_147b84078(void)

undefined8 FUN_147b84078(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_158 [32];
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  longlong local_108 [2];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  longlong *local_d8 [2];
  longlong local_c8;
  ulonglong uStack_c0;
  undefined1 local_b0 [24];
  wchar_t *local_98;
  undefined8 uStack_90;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_158;
  uVar3 = param_2[4];
  uVar4 = param_2[5];
  uVar1 = param_2[6];
  local_98 = (wchar_t *)*param_2;
  uStack_90 = param_2[1];
  local_88 = (longlong *)param_2[2];
  uStack_80 = *(undefined4 *)(param_2 + 3);
  uStack_7c = *(undefined4 *)((longlong)param_2 + 0x1c);
  FUN_1448052ee(&local_98,local_b0);
  uVar5 = param_2[8];
  uVar6 = param_2[9];
  uVar2 = param_2[10];
  local_c8 = 0;
  uStack_c0 = 0;
  local_f8 = uVar3;
  uStack_f0 = uVar4;
  local_e8 = uVar1;
  FUN_147b83a24(local_d8);
  local_98 = (wchar_t *)CONCAT44(local_98._4_4_,4);
  FUN_14023423e(&local_88,local_d8);
  FUN_140056680(local_108,&DAT_149ebbc16);
  FUN_140233eec(&local_c8,local_108,&local_98);
  if (local_108[0] != 0) {
    FUN_1400020a8();
  }
  if (local_88 != (longlong *)0x0) {
    (**(code **)(*local_88 + 0x10))();
    local_88 = (longlong *)0x0;
    uStack_80 = 0;
  }
  if (local_d8[0] != (longlong *)0x0) {
    (**(code **)(*local_d8[0] + 0x10))();
  }
  FUN_147b83e3a(local_d8,local_b0);
  local_98 = (wchar_t *)CONCAT44(local_98._4_4_,4);
  FUN_14023423e(&local_88,local_d8);
  FUN_140056680(local_108,&DAT_149ebbc0e);
  FUN_140233eec(&local_c8,local_108,&local_98);
  if (local_108[0] != 0) {
    FUN_1400020a8();
  }
  if (local_88 != (longlong *)0x0) {
    (**(code **)(*local_88 + 0x10))();
    local_88 = (longlong *)0x0;
    uStack_80 = 0;
  }
  if (local_d8[0] != (longlong *)0x0) {
    (**(code **)(*local_d8[0] + 0x10))();
  }
  local_128 = uVar5;
  uStack_120 = uVar6;
  local_118 = uVar2;
  FUN_147b83a24(local_d8);
  local_98 = (wchar_t *)CONCAT44(local_98._4_4_,4);
  FUN_14023423e(&local_88,local_d8);
  FUN_140056680(local_108,&DAT_149ebbc12);
  FUN_140233eec(&local_c8,local_108,&local_98);
  if (local_108[0] != 0) {
    FUN_1400020a8();
  }
  if (local_88 != (longlong *)0x0) {
    (**(code **)(*local_88 + 0x10))();
    local_88 = (longlong *)0x0;
    uStack_80 = 0;
  }
  if (local_d8[0] != (longlong *)0x0) {
    (**(code **)(*local_d8[0] + 0x10))();
  }
  local_98 = L"Transform";
  uStack_90._0_4_ = 9;
  FUN_1446e940c(local_d8,&local_98);
  local_98 = L"Core";
  uStack_90 = CONCAT44(uStack_90._4_4_,4);
  FUN_1446e940c(local_108,&local_98);
  FUN_140208bae(&local_98,local_108,local_d8,L"Translation: {T} Rotation: {R} Scale: {S}");
  FUN_14023409e(local_138,&local_98,1);
  FUN_140233c04(param_1,local_138,&local_c8);
  if (local_98 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_98 + 0x10))();
  }
  FUN_14010f8af(local_c8,uStack_c0 & 0xffffffff);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b84410 FUN_147b84410 body=144 status=ok
// SIG undefined FUN_147b84410(void)

longlong * FUN_147b84410(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == 0) {
    lVar3 = FUN_140932b5c();
    plVar1 = *(longlong **)(lVar3 + 0x20);
    plVar2 = (longlong *)*plVar1;
    *param_1 = (longlong)plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    *(int *)(param_1 + 1) = (int)plVar1[1];
  }
  else {
    local_20 = *(undefined8 *)(param_2 + 0x18);
    FUN_1400021e4(&local_20,local_30);
    FUN_145aa9352(param_1,local_30);
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b844a2 FUN_147b844a2 body=673 status=ok
// SIG undefined FUN_147b844a2(void)

undefined8 FUN_147b844a2(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_b8 [44];
  undefined1 local_8c [4];
  undefined1 local_88 [16];
  longlong local_78 [2];
  longlong local_68;
  ulonglong uStack_60;
  wchar_t *local_50;
  undefined4 local_48;
  longlong *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = 0;
  uStack_60 = 0;
  local_48 = *param_2;
  local_50 = (wchar_t *)CONCAT44(local_50._4_4_,2);
  local_40 = (longlong *)0x0;
  local_38 = 0;
  FUN_140056680(local_78,&DAT_149ebbc0e);
  FUN_140233eec(&local_68,local_78,&local_50);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 0x10))();
  }
  local_48 = param_2[1];
  local_50 = (wchar_t *)CONCAT44(local_50._4_4_,2);
  local_40 = (longlong *)0x0;
  local_38 = 0;
  FUN_140056680(local_78,&DAT_149ebbbea);
  FUN_140233eec(&local_68,local_78,&local_50);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 0x10))();
  }
  local_48 = param_2[2];
  local_50 = (wchar_t *)CONCAT44(local_50._4_4_,2);
  local_40 = (longlong *)0x0;
  local_38 = 0;
  FUN_140056680(local_78,&DAT_149e060e8);
  FUN_140233eec(&local_68,local_78,&local_50);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 0x10))();
  }
  local_48 = param_2[3];
  local_50 = (wchar_t *)CONCAT44(local_50._4_4_,2);
  local_40 = (longlong *)0x0;
  local_38 = 0;
  FUN_140056680(local_78,&DAT_149e71d50);
  FUN_140233eec(&local_68,local_78,&local_50);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 0x10))();
  }
  local_50 = L"LinearColor";
  local_48 = 0xb;
  FUN_1446e940c(local_78,&local_50);
  local_50 = L"Core";
  local_48 = 4;
  FUN_1446e940c(local_8c,&local_50);
  FUN_140208bae(&local_50,local_8c,local_78,L"R={R} G={G} B={B} A={A}");
  FUN_14023409e(local_88,&local_50,1);
  FUN_140233c04(param_1,local_88,&local_68);
  if (local_50 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_50 + 0x10))();
  }
  FUN_14010f8af(local_68,uStack_60 & 0xffffffff);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b84744 FUN_147b84744 body=90 status=ok
// SIG undefined FUN_147b84744(void)

undefined8 * FUN_147b84744(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_1447a1f4a(param_2);
  *param_1 = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 147b8479e FUN_147b8479e body=90 status=ok
// SIG undefined FUN_147b8479e(void)

undefined8 FUN_147b8479e(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  local_18 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_18 = 0;
  }
  FUN_14598ddda(param_1,&local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b847fa FUN_147b847fa body=101 status=ok
// SIG undefined FUN_147b847fa(void)

undefined8 FUN_147b847fa(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = param_2;
  FUN_1400021e4(&local_20,local_30);
  FUN_145aa9352(param_1,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b84860 FUN_147b84860 body=90 status=ok
// SIG undefined FUN_147b84860(void)

undefined8 FUN_147b84860(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  local_18 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_18 = 0;
  }
  FUN_14598ddda(param_1,&local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b848bc thunk_FUN_144a7c5f6 body=5 status=ok
// SIG undefined thunk_FUN_144a7c5f6(void)

bool thunk_FUN_144a7c5f6(longlong *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)*param_1;
  if (*(code **)(*plVar2 + 0x50) != FUN_144828418) {
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x50))();
  }
  FUN_1447a1fc0(plVar2);
  param_1 = (longlong *)*param_1;
  pcVar1 = *(code **)(*param_1 + 0x28);
  if (pcVar1 == FUN_14482841c) {
    plVar2 = param_1 + 3;
    if (param_1[5] != 0) {
      plVar2 = (longlong *)(param_1[5] + 8);
    }
  }
  else if (pcVar1 == (code *)&LAB_14010c34c) {
    plVar2 = param_1 + 2;
  }
  else {
    plVar2 = (longlong *)(*pcVar1)(param_1);
  }
  return (int)plVar2[1] < 2;
}



// FUNCTION 147b848c2 thunk_FUN_142760c0c body=5 status=ok
// SIG undefined thunk_FUN_142760c0c(void)

byte thunk_FUN_142760c0c(longlong param_1)

{
  return *(byte *)(param_1 + 8) & 1;
}



// FUNCTION 147b848c8 thunk_FUN_142760c04 body=5 status=ok
// SIG undefined thunk_FUN_142760c04(void)

byte thunk_FUN_142760c04(longlong param_1)

{
  return (*(byte *)(param_1 + 8) & 2) >> 1;
}



// FUNCTION 147b848ce FUN_147b848ce body=28 status=ok
// SIG undefined FUN_147b848ce(void)

undefined8 FUN_147b848ce(undefined8 param_1,undefined8 param_2)

{
  FUN_1467cf2c6(param_2,param_1);
  return param_1;
}



// FUNCTION 147b848ea FUN_147b848ea body=28 status=ok
// SIG undefined FUN_147b848ea(void)

undefined8 FUN_147b848ea(undefined8 param_1,undefined8 param_2)

{
  FUN_1467cf38e(param_2,param_1);
  return param_1;
}



// FUNCTION 147b84906 FUN_147b84906 body=22 status=ok
// SIG undefined FUN_147b84906(void)

undefined8 FUN_147b84906(undefined8 param_1)

{
  FUN_1467cf456();
  return param_1;
}



// FUNCTION 147b8491c FUN_147b8491c body=22 status=ok
// SIG undefined FUN_147b8491c(void)

undefined8 FUN_147b8491c(undefined8 param_1)

{
  FUN_1467cf586();
  return param_1;
}



// FUNCTION 147b84932 FUN_147b84932 body=22 status=ok
// SIG undefined FUN_147b84932(void)

undefined8 FUN_147b84932(undefined8 param_1)

{
  FUN_1467cf6ac();
  return param_1;
}



// FUNCTION 147b84948 FUN_147b84948 body=50 status=ok
// SIG undefined FUN_147b84948(void)

longlong * FUN_147b84948(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *param_1 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 1) = (int)plVar2[1];
  return param_1;
}



// FUNCTION 147b8497a FUN_147b8497a body=181 status=ok
// SIG undefined FUN_147b8497a(void)

void FUN_147b8497a(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_4 + 8) < 2) {
    param_4 = 0;
  }
  local_48 = *param_2;
  local_40 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_40 = 0;
  }
  FUN_1446e940c(local_4c,&local_48);
  local_48 = *param_1;
  local_40 = *(int *)(param_1 + 1) + -1;
  if (*(int *)(param_1 + 1) == 0) {
    local_40 = 0;
  }
  FUN_1446e940c(local_50,&local_48);
  FUN_140008c02(local_50,local_4c,param_3,param_4);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b84a30 thunk_FUN_1467d167a body=5 status=ok
// SIG undefined thunk_FUN_1467d167a(void)

bool thunk_FUN_1467d167a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = (**(code **)(*(longlong *)*param_2 + 0x50))();
  FUN_1447a1fc0(uVar2);
  uVar2 = (**(code **)(*(longlong *)*param_2 + 0x28))();
  uVar3 = (**(code **)(*(longlong *)*param_1 + 0x50))();
  FUN_1447a1fc0(uVar3);
  uVar3 = (**(code **)(*(longlong *)*param_1 + 0x28))();
  iVar1 = FUN_1467c98d0(uVar3,uVar2,2);
  return iVar1 == 0;
}



// FUNCTION 147b84a36 FUN_147b84a36 body=8 status=ok
// SIG undefined FUN_147b84a36(void)

void FUN_147b84a36(undefined8 param_1,undefined8 param_2)

{
  FUN_144722c14(param_1,param_2,0);
  return;
}



// FUNCTION 147b84a3e FUN_147b84a3e body=16 status=ok
// SIG undefined FUN_147b84a3e(void)

byte FUN_147b84a3e(void)

{
  byte bVar1;
  
  bVar1 = FUN_1467d167a();
  return bVar1 ^ 1;
}



// FUNCTION 147b84a4e FUN_147b84a4e body=19 status=ok
// SIG undefined FUN_147b84a4e(void)

byte FUN_147b84a4e(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  
  bVar1 = FUN_144722c14(param_1,param_2,0);
  return bVar1 ^ 1;
}



// FUNCTION 147b84a62 FUN_147b84a62 body=238 status=ok
// SIG undefined FUN_147b84a62(void)

undefined8 FUN_147b84a62(undefined8 param_1,char param_2)

{
  wchar_t *pwVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == '\0') {
    local_30 = L"False";
    local_28 = 5;
    FUN_1446e940c(local_34,&local_30);
    local_30 = L"Kismet";
    local_28 = 6;
    FUN_1446e940c(local_38,&local_30);
    pwVar1 = L"false";
  }
  else {
    local_30 = L"True";
    local_28 = 4;
    FUN_1446e940c(local_34,&local_30);
    local_30 = L"Kismet";
    local_28 = 6;
    FUN_1446e940c(local_38,&local_30);
    pwVar1 = L"true";
  }
  FUN_140208bae(param_1,local_38,local_34,pwVar1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b84b52 FUN_147b84b52 body=130 status=ok
// SIG undefined FUN_147b84b52(void)

undefined8 FUN_147b84b52(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  uVar4 = FUN_145a19d3c();
  FUN_1467cfb94(param_1,param_2,uVar4,&local_38);
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b84bd6 FUN_147b84bd6 body=189 status=ok
// SIG undefined FUN_147b84bd6(void)

undefined8
FUN_147b84bd6(undefined8 param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
             undefined4 param_5,undefined4 param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *plStack_60;
  undefined1 local_58;
  undefined1 local_57;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_141366fce(&local_58);
  local_50 = param_5;
  local_4c = param_6;
  local_68 = 0;
  plStack_60 = (longlong *)0x0;
  local_58 = param_3;
  local_57 = param_4;
  FUN_1413a4536(param_1,param_2,&local_58,&local_68);
  plVar3 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b84c94 FUN_147b84c94 body=190 status=ok
// SIG undefined FUN_147b84c94(void)

undefined8
FUN_147b84c94(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
             undefined4 param_5,undefined4 param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *plStack_60;
  undefined1 local_58;
  undefined1 local_57;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_141366fce(&local_58);
  local_50 = param_5;
  local_4c = param_6;
  local_68 = 0;
  plStack_60 = (longlong *)0x0;
  local_58 = param_3;
  local_57 = param_4;
  FUN_1456e1912(param_1,param_2,&local_58,&local_68);
  plVar3 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b84d54 FUN_147b84d54 body=244 status=ok
// SIG undefined FUN_147b84d54(void)

undefined8
FUN_147b84d54(undefined8 param_1,undefined4 param_2,uint param_3,undefined1 param_4,
             undefined1 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong *plStack_80;
  undefined1 local_78;
  undefined1 local_77;
  uint local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_141366fce(&local_78);
  local_77 = param_5;
  local_74 = param_3 & 0xff;
  local_70 = param_6;
  local_6c = param_7;
  local_68 = param_8;
  local_64 = param_9;
  local_88 = 0;
  plStack_80 = (longlong *)0x0;
  local_78 = param_4;
  FUN_1413ea578(param_1,param_2,&local_78,&local_88);
  plVar3 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_80 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b84e4a FUN_147b84e4a body=124 status=ok
// SIG undefined FUN_147b84e4a(void)

undefined8 FUN_147b84e4a(undefined8 param_1,int param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  local_38 = 0xffffffff;
  FUN_1467d02b6(0,(longlong)param_2,param_3,&local_28);
  plVar3 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b84ec8 FUN_147b84ec8 body=240 status=ok
// SIG undefined FUN_147b84ec8(void)

undefined8
FUN_147b84ec8(undefined8 param_1,undefined4 param_2,uint param_3,undefined1 param_4,
             undefined1 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9,undefined8 param_10)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 local_78;
  longlong *plStack_70;
  undefined1 local_60;
  undefined1 local_5f;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_141366fce(&local_60);
  local_5f = param_5;
  local_5c = param_3 & 0xff;
  local_58 = param_6;
  local_54 = param_7;
  local_50 = param_8;
  local_4c = param_9;
  local_88 = &local_78;
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  local_60 = param_4;
  FUN_1467d00a4(param_1,param_2,param_10,&local_60);
  plVar3 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b84fba FUN_147b84fba body=253 status=ok
// SIG undefined FUN_147b84fba(void)

undefined8
FUN_147b84fba(undefined8 param_1,undefined4 param_2,uint param_3,undefined1 param_4,
             undefined1 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9,undefined8 param_10)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined8 local_88;
  longlong *plStack_80;
  undefined1 local_78;
  undefined1 local_77;
  uint local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_141366fce(&local_78);
  local_77 = param_5;
  local_74 = param_3 & 0xff;
  local_70 = param_6;
  local_6c = param_7;
  local_68 = param_8;
  local_64 = param_9;
  local_98 = &local_88;
  local_88 = 0;
  plStack_80 = (longlong *)0x0;
  local_78 = param_4;
  FUN_1467cfe8e(param_1,param_2,param_10,&local_78);
  plVar3 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_80 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b850b8 FUN_147b850b8 body=244 status=ok
// SIG undefined FUN_147b850b8(void)

undefined8
FUN_147b850b8(undefined8 param_1,undefined4 param_2,uint param_3,undefined1 param_4,
             undefined1 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong *plStack_80;
  undefined1 local_78;
  undefined1 local_77;
  uint local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_141366fce(&local_78);
  local_77 = param_5;
  local_74 = param_3 & 0xff;
  local_70 = param_6;
  local_6c = param_7;
  local_68 = param_8;
  local_64 = param_9;
  local_88 = 0;
  plStack_80 = (longlong *)0x0;
  local_78 = param_4;
  FUN_1467d068c(param_1,param_2,&local_78,&local_88);
  plVar3 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_80 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b851ae FUN_147b851ae body=172 status=ok
// SIG undefined FUN_147b851ae(void)

undefined8 FUN_147b851ae(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  longlong local_58 [2];
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  FUN_1467d14a6(local_58);
  local_68 = &local_48;
  FUN_1467d0834(param_1,param_2,param_3,local_58);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  plVar3 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b8525c FUN_147b8525c body=128 status=ok
// SIG undefined FUN_147b8525c(void)

undefined8
FUN_147b8525c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = &local_28;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  FUN_1467d0834(param_1,param_2,param_4,param_3);
  plVar3 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b852de FUN_147b852de body=186 status=ok
// SIG undefined FUN_147b852de(void)

undefined8
FUN_147b852de(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 *local_60;
  longlong local_58 [2];
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  FUN_1467d14a6(local_58);
  local_68 = local_58;
  local_60 = &local_48;
  FUN_1467d09ac(param_1,param_2,param_3,param_4);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  plVar3 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b8539a FUN_147b8539a body=141 status=ok
// SIG undefined FUN_147b8539a(void)

undefined8
FUN_147b8539a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = &local_28;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  local_38 = param_3;
  FUN_1467d09ac(param_1,param_2,param_4,param_5);
  plVar3 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b85428 FUN_147b85428 body=172 status=ok
// SIG undefined FUN_147b85428(void)

undefined8 FUN_147b85428(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  longlong local_58 [2];
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  FUN_1467d14a6(local_58);
  local_68 = &local_48;
  FUN_1467d0b3c(param_1,param_2,param_3,local_58);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  plVar3 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b854d6 FUN_147b854d6 body=128 status=ok
// SIG undefined FUN_147b854d6(void)

undefined8
FUN_147b854d6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = &local_28;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  FUN_1467d0b3c(param_1,param_2,param_4,param_3);
  plVar3 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b85558 FUN_147b85558 body=113 status=ok
// SIG undefined FUN_147b85558(void)

undefined8 FUN_147b85558(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  FUN_1467d0cb4(0,param_2,&local_28);
  plVar3 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b855ca FUN_147b855ca body=228 status=ok
// SIG undefined FUN_147b855ca(void)

undefined8
FUN_147b855ca(undefined8 param_1,longlong param_2,uint param_3,undefined1 param_4,undefined4 param_5
             ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  uint local_88;
  undefined8 local_78;
  longlong *plStack_70;
  undefined1 local_60;
  undefined1 local_5f;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_141366fce(&local_60);
  local_58 = param_5;
  local_54 = param_6;
  local_50 = param_7;
  local_4c = param_8;
  lVar4 = 0;
  if (0 < param_2) {
    lVar4 = param_2;
  }
  local_88 = param_3 & 0xff;
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  local_5f = param_4;
  FUN_14023326e(param_1,lVar4,&local_60,&local_78);
  plVar3 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b856b0 FUN_147b856b0 body=184 status=ok
// SIG undefined FUN_147b856b0(void)

undefined8 FUN_147b856b0(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_38 [8];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14023409e(local_38,param_2,1);
  local_48 = 0;
  FUN_1467d51ce(param_1,local_38,param_3,0);
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
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  FUN_1467de9d3(*param_3,(int)param_3[1]);
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b8576a thunk_FUN_1417036c0 body=5 status=ok
// SIG undefined thunk_FUN_1417036c0(void)

bool thunk_FUN_1417036c0(undefined8 *param_1)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x48))();
  cVar1 = (**(code **)(*plVar2 + 0x58))(plVar2);
  return cVar1 == '\v';
}



// FUNCTION 147b85770 FUN_147b85770 body=117 status=ok
// SIG undefined FUN_147b85770(void)

undefined8 FUN_147b85770(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_58 [36];
  undefined1 local_34 [4];
  undefined8 local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_3;
  local_28 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    local_28 = 0;
  }
  FUN_1446e940c(local_34);
  FUN_1467d14c4(param_1,param_2,local_34,1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b857e6 FUN_147b857e6 body=39 status=ok
// SIG undefined FUN_147b857e6(void)

undefined4 FUN_147b857e6(longlong *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1467cee5a();
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x10))();
  }
  return uVar1;
}



// FUNCTION 147b8580e FUN_147b8580e body=155 status=ok
// SIG undefined FUN_147b8580e(void)

ulonglong FUN_147b8580e(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined1 auStack_68 [44];
  uint local_3c;
  uint local_38;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1467cef4a(&local_38,param_1);
  bVar1 = (local_34 & local_38) != 0xffffffff;
  if (bVar1) {
    local_3c = local_38;
    FUN_1467e785c(&local_3c,param_2);
    local_3c = local_34;
    FUN_1467e785c(&local_3c,param_3);
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)&local_38 >> 8),bVar1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b858aa FUN_147b858aa body=47 status=ok
// SIG undefined FUN_147b858aa(void)

undefined8 FUN_147b858aa(undefined8 param_1,longlong *param_2)

{
  FUN_1467d159c(param_2,param_1);
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  return param_1;
}



// FUNCTION 147b858da FUN_147b858da body=24 status=ok
// SIG undefined FUN_147b858da(void)

void FUN_147b858da(undefined8 param_1,undefined1 *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  uVar1 = FUN_1467cc390(param_1,param_3);
  *param_2 = uVar1;
  return;
}



// FUNCTION 147b858f2 FUN_147b858f2 body=28 status=ok
// SIG undefined FUN_147b858f2(void)

undefined8 FUN_147b858f2(undefined8 param_1,undefined8 param_2)

{
  FUN_1467cc7b6(param_2,param_1);
  return param_1;
}



// FUNCTION 147b8590e FUN_147b8590e body=727 status=ok
// SIG undefined FUN_147b8590e(void)

void FUN_147b8590e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong **pplVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong **pplVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_d8 [32];
  code **local_b8;
  undefined1 local_b0;
  code *local_a0;
  longlong *local_98;
  longlong local_90;
  longlong local_88;
  undefined1 local_80;
  longlong local_78 [3];
  longlong *local_60 [2];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  FUN_144a5dc74(local_60);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  lVar2 = *(longlong *)(param_2 + 0x30);
  pplVar3 = *(longlong ***)(param_2 + 0x38);
  pplVar7 = pplVar3;
  if (pplVar3 == (longlong **)0x0) {
    pplVar7 = local_60;
  }
  if (lVar2 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = *(longlong *)(lVar2 + 8);
    lVar6 = FUN_144a4a07e();
    if (*(ulonglong *)(lVar6 + 8) == 0) {
      bVar10 = lVar8 != 0;
      if (lVar8 != lVar6 && bVar10) {
        do {
          lVar8 = *(longlong *)(lVar8 + 0x30);
          bVar10 = lVar8 != 0;
          if (lVar8 == lVar6) break;
        } while (lVar8 != 0);
      }
    }
    else {
      bVar10 = (*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar6 + 8)) != 0;
    }
    lVar8 = 0;
    if (bVar10) {
      lVar8 = lVar2;
    }
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
  plVar9 = local_78;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar9 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = 0;
  if ((lVar8 != 0 && local_50 != 0) &&
     (cVar5 = (**(code **)(**(longlong **)(local_50 + 0x10) + 0x3c8))(), cVar5 != '\0')) {
    local_98 = &local_90;
    local_90 = local_50;
    local_80 = 0;
    local_b8 = &local_a0;
    local_a0 = FUN_143555020;
    local_b0 = 0;
    local_88 = lVar8;
    cVar5 = FUN_14686fcfd(local_50,lVar8,CONCAT71((int7)((ulonglong)local_b8 >> 8),2),plVar9);
    lVar2 = local_50;
    if (cVar5 != '\0') {
      *param_3 = 1;
      iVar1 = *(int *)(lVar8 + 0x44);
      plVar9 = *(longlong **)(local_50 + iVar1);
      plVar4 = *pplVar7;
      if (plVar4 != plVar9) {
        *pplVar7 = plVar9;
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 8))();
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
      pplVar7 = local_60;
      if (pplVar3 != (longlong **)0x0) {
        pplVar7 = pplVar3;
      }
      *(undefined4 *)(pplVar7 + 1) = *(undefined4 *)(lVar2 + 8 + (longlong)iVar1);
    }
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_60[0] != (longlong *)0x0) {
    (**(code **)(*local_60[0] + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147b85be6 FUN_147b85be6 body=828 status=ok
// SIG undefined FUN_147b85be6(void)

void FUN_147b85be6(undefined8 param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  bool bVar13;
  undefined4 uVar14;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *plStack_50;
  longlong *local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446ddbd2();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  plVar9 = *(longlong **)(param_2 + 0x30);
  lVar7 = *(longlong *)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar4 = (longlong *)FUN_140e82300();
  plVar6 = (longlong *)*plVar4;
  plVar2 = (longlong *)*param_3;
  if (plVar2 != plVar6) {
    *param_3 = (longlong)plVar6;
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_3 + 1) = (int)plVar4[1];
  if (lVar7 == 0 || plVar9 == (longlong *)0x0) goto LAB_147b85c83;
  lVar12 = plVar9[1];
  lVar5 = FUN_14475b26a();
  if (*(ulonglong *)(lVar5 + 8) == 0) {
    bVar13 = lVar12 != 0;
    if (lVar12 != lVar5 && bVar13) {
      do {
        lVar12 = *(longlong *)(lVar12 + 0x30);
        bVar13 = lVar12 != 0;
        if (lVar12 == lVar5) break;
      } while (lVar12 != 0);
    }
    if (bVar13) goto LAB_147b85cc4;
LAB_147b85db0:
    lVar12 = plVar9[1];
    lVar5 = FUN_144a7add4();
    if (*(ulonglong *)(lVar5 + 8) == 0) {
      bVar13 = lVar12 != 0;
      if (lVar12 != lVar5 && bVar13) {
        do {
          lVar12 = *(longlong *)(lVar12 + 0x30);
          bVar13 = lVar12 != 0;
          if (lVar12 == lVar5) break;
        } while (lVar12 != 0);
      }
      if (!bVar13) goto LAB_147b85c83;
    }
    else if ((*(ulonglong *)(lVar12 + 0x18) & *(ulonglong *)(lVar5 + 8)) == 0) goto LAB_147b85c83;
    lVar7 = (**(code **)(*(longlong *)plVar9[0xe] + 0x220))((longlong *)plVar9[0xe],lVar7);
    plVar6 = (longlong *)plVar9[0xf];
    uVar10 = 0xffffffff;
    if (0 < (longlong)(int)plVar6[9]) {
      plVar9 = (longlong *)(plVar6[8] + 8);
      uVar11 = 0;
      do {
        if (*plVar9 == lVar7) {
          uVar10 = uVar11 & 0xffffffff;
          break;
        }
        uVar11 = uVar11 + 1;
        plVar9 = plVar9 + 2;
      } while ((longlong)(int)plVar6[9] != uVar11);
    }
    lVar7 = *plVar6;
  }
  else {
    if ((*(ulonglong *)(lVar12 + 0x18) & *(ulonglong *)(lVar5 + 8)) == 0) goto LAB_147b85db0;
LAB_147b85cc4:
    cVar3 = (**(code **)(*plVar9 + 0x1e0))(plVar9);
    if (cVar3 != '\0') {
      uVar14 = (**(code **)(*plVar9 + 0x240))(plVar9,lVar7);
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      FUN_1413ea578(local_40,uVar14,0);
LAB_147b85d07:
      FUN_140008f88(param_3,local_40);
      if (local_40[0] != (longlong *)0x0) {
        (**(code **)(*local_40[0] + 0x10))();
      }
      plVar9 = plStack_50;
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        plVar6 = plStack_50 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plStack_50)(plStack_50);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      goto LAB_147b85c83;
    }
    plVar6 = (longlong *)(**(code **)(*plVar9 + 0x1f0))(plVar9);
    if (plVar6 == (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar9 + 0x1e8))(plVar9);
      if (cVar3 == '\0') goto LAB_147b85c83;
      uVar8 = (**(code **)(*plVar9 + 0x220))(plVar9,lVar7);
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      FUN_1456e1912(local_40,uVar8,0);
      goto LAB_147b85d07;
    }
    lVar7 = (**(code **)(*plVar9 + 0x220))(plVar9,lVar7);
    uVar10 = 0xffffffff;
    if (0 < (longlong)(int)plVar6[9]) {
      plVar9 = (longlong *)(plVar6[8] + 8);
      uVar11 = 0;
      do {
        if (*plVar9 == lVar7) {
          uVar10 = uVar11 & 0xffffffff;
          break;
        }
        uVar11 = uVar11 + 1;
        plVar9 = plVar9 + 2;
      } while ((longlong)(int)plVar6[9] != uVar11);
    }
    lVar7 = *plVar6;
  }
  (**(code **)(lVar7 + 0x2b0))(plVar6,local_40,uVar10);
  FUN_140008f88(param_3,local_40);
  if (local_40[0] != (longlong *)0x0) {
    (**(code **)(*local_40[0] + 0x10))();
  }
LAB_147b85c83:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147b85f42 FUN_147b85f42 body=1 status=ok
// SIG undefined FUN_147b85f42(void)

void FUN_147b85f42(void)

{
  return;
}



// FUNCTION 147b85f44 FUN_147b85f44 body=71 status=ok
// SIG undefined FUN_147b85f44(void)

void FUN_147b85f44(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,param_2,1);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000147b85f81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2a8))(param_1);
    return;
  }
  return;
}



// FUNCTION 147b85f8c FUN_147b85f8c body=93 status=ok
// SIG undefined FUN_147b85f8c(void)

void FUN_147b85f8c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  if (param_2 != (longlong *)0x0) {
    plVar1 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x408))(plVar1,param_1);
    }
    (**(code **)(*param_2 + 0x400))(param_2,param_1);
    FUN_14485c47a(param_1 + 0x28,param_2);
    return;
  }
  return;
}



// FUNCTION 147b85fea FUN_147b85fea body=139 status=ok
// SIG undefined FUN_147b85fea(void)

void FUN_147b85fea(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14681776e(&local_28);
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



// FUNCTION 147b86076 FUN_147b86076 body=139 status=ok
// SIG undefined FUN_147b86076(void)

void FUN_147b86076(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14681780a(&local_28);
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



// FUNCTION 147b86102 FUN_147b86102 body=139 status=ok
// SIG undefined FUN_147b86102(void)

void FUN_147b86102(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_146817796(&local_28);
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



// FUNCTION 147b8618e FUN_147b8618e body=139 status=ok
// SIG undefined FUN_147b8618e(void)

void FUN_147b8618e(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1468176ae(&local_28);
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



// FUNCTION 147b8621a FUN_147b8621a body=356 status=ok
// SIG undefined FUN_147b8621a(void)

void FUN_147b8621a(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  longlong local_38 [5];
  
  local_38[4] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[2] = 0;
  local_38[3] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14170b210(&local_48,local_38 + 2,local_38);
  if (&local_48 == param_3) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_48;
    local_48 = 0;
    *(undefined4 *)(param_3 + 1) = local_40;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_3c;
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[4] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b86380 FUN_147b86380 body=139 status=ok
// SIG undefined FUN_147b86380(void)

void FUN_147b86380(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14170b1e8(&local_28);
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



// FUNCTION 147b86412 FUN_147b86412 body=378 status=ok
// SIG undefined FUN_147b86412(void)

void FUN_147b86412(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  void **ppvVar1;
  void *_Src;
  int iVar2;
  ulonglong uVar3;
  undefined1 uVar4;
  void **ppvVar5;
  void **ppvVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  void *local_48;
  undefined8 uStack_40;
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48 = (void *)0x0;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  uVar3 = uStack_30;
  _Src = local_38;
  ppvVar1 = *(void ***)(param_2 + 0x38);
  ppvVar6 = ppvVar1;
  if (ppvVar1 == (void **)0x0) {
    ppvVar6 = &local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (ppvVar6 != &local_38) {
    ppvVar5 = &local_48;
    if (ppvVar1 != (void **)0x0) {
      ppvVar5 = ppvVar1;
    }
    iVar2 = (int)uStack_30;
    lVar7 = (longlong)(int)uStack_30;
    *(int *)(ppvVar5 + 1) = (int)uStack_30;
    if (iVar2 == 0 && *(int *)((longlong)ppvVar5 + 0xc) == 0) {
      *(undefined4 *)((longlong)ppvVar5 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(ppvVar6,uVar3 & 0xffffffff);
      if (iVar2 != 0) {
        memcpy(*ppvVar6,_Src,lVar7 * 2);
      }
    }
  }
  uVar4 = FUN_1448b5552(ppvVar6);
  *param_3 = uVar4;
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
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



// FUNCTION 147b8658e FUN_147b8658e body=265 status=ok
// SIG undefined FUN_147b8658e(void)

void FUN_147b8658e(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  plVar1 = &local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b86698(&local_38,plVar1);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    local_38 = 0;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  FUN_1447a1747(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b86698 FUN_147b86698 body=321 status=ok
// SIG undefined FUN_147b86698(void)

longlong * FUN_147b86698(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong local_68;
  int local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = 0;
  param_1[1] = 0;
  if ((int)param_2[1] == 1) {
    FUN_144a787a6(param_1,*param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
  }
  if ((1 < (int)param_2[1]) && (FUN_144a787a6(param_1,*param_2), 1 < (int)param_2[1])) {
    lVar3 = 1;
    lVar2 = 0x18;
    do {
      local_68 = *param_1;
      local_60 = (int)param_1[1] + -1;
      if ((int)param_1[1] == 0) {
        local_60 = 0;
      }
      local_58 = *(undefined8 *)(*param_2 + -8 + lVar2);
      iVar1 = *(int *)(*param_2 + lVar2);
      local_50 = iVar1 + -1;
      if (iVar1 == 0) {
        local_50 = 0;
      }
      FUN_140bee87a(&local_78,&local_68,2);
      if (&local_78 == param_1) {
        if (local_78 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_1 != 0) {
          FUN_1400020a8();
        }
        *param_1 = local_78;
        local_78 = 0;
        *(undefined4 *)(param_1 + 1) = local_70;
        *(undefined4 *)((longlong)param_1 + 0xc) = local_6c;
      }
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x10;
    } while (lVar3 < (int)param_2[1]);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b867da FUN_147b867da body=372 status=ok
// SIG undefined FUN_147b867da(void)

void FUN_147b867da(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined2 *puVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined2 *local_38;
  undefined8 uStack_30;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar1 = local_38;
  if ((int)uStack_30 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_146818c08(&local_48,local_28,puVar1);
  if (&local_48 == param_3) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_48;
    local_48 = 0;
    *(undefined4 *)(param_3 + 1) = local_40;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_3c;
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147b86950 FUN_147b86950 body=384 status=ok
// SIG undefined FUN_147b86950(void)

void FUN_147b86950(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  longlong local_38;
  undefined8 uStack_30;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_38 = 0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((int)uStack_30 - 2U < 0x7fffffff) {
    FUN_146818870(&local_48,&local_38,local_28);
  }
  else {
    FUN_1401aea18(&local_48,local_28);
  }
  if (&local_48 == param_3) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_48;
    local_48 = 0;
    *(undefined4 *)(param_3 + 1) = local_40;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_3c;
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b86ad2 FUN_147b86ad2 body=372 status=ok
// SIG undefined FUN_147b86ad2(void)

void FUN_147b86ad2(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined2 *puVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined2 *local_38;
  undefined8 uStack_30;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar1 = local_38;
  if ((int)uStack_30 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_146818a40(&local_48,local_28,puVar1);
  if (&local_48 == param_3) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_48;
    local_48 = 0;
    *(undefined4 *)(param_3 + 1) = local_40;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_3c;
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147b86c48 FUN_147b86c48 body=487 status=ok
// SIG undefined FUN_147b86c48(void)

void FUN_147b86c48(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined2 *local_48;
  undefined8 uStack_40;
  undefined2 *local_38;
  undefined8 uStack_30;
  undefined2 *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = (undefined2 *)0x0;
  uStack_20 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48 = (undefined2 *)0x0;
  uStack_40 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar3 = &DAT_149dfb77a;
  if ((int)uStack_40 != 0) {
    puVar3 = local_48;
  }
  puVar2 = &DAT_149dfb77a;
  if ((int)uStack_30 != 0) {
    puVar2 = local_38;
  }
  puVar1 = &DAT_149dfb77a;
  if ((int)uStack_20 != 0) {
    puVar1 = local_28;
  }
  FUN_146818d70(&local_58,puVar1,puVar2,puVar3);
  if (&local_58 == param_3) {
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_58;
    local_58 = 0;
    *(undefined4 *)(param_3 + 1) = local_50;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_4c;
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b86e30 FUN_147b86e30 body=139 status=ok
// SIG undefined FUN_147b86e30(void)

void FUN_147b86e30(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14681787e(&local_28);
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



// FUNCTION 147b86ec2 FUN_147b86ec2 body=170 status=ok
// SIG undefined FUN_147b86ec2(void)

void FUN_147b86ec2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145ec9a30(local_28);
  *param_3 = uVar1;
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b86f6e FUN_147b86f6e body=139 status=ok
// SIG undefined FUN_147b86f6e(void)

void FUN_147b86f6e(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140d6ab96(&local_28);
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



// FUNCTION 147b86ffa FUN_147b86ffa body=139 status=ok
// SIG undefined FUN_147b86ffa(void)

void FUN_147b86ffa(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1414927bc(&local_28);
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



// FUNCTION 147b87086 FUN_147b87086 body=139 status=ok
// SIG undefined FUN_147b87086(void)

void FUN_147b87086(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1401afab0(&local_28);
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



// FUNCTION 147b87112 FUN_147b87112 body=139 status=ok
// SIG undefined FUN_147b87112(void)

void FUN_147b87112(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14626c06e(&local_28);
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



// FUNCTION 147b8719e FUN_147b8719e body=139 status=ok
// SIG undefined FUN_147b8719e(void)

void FUN_147b8719e(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145ef8dd4(&local_28);
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



// FUNCTION 147b8722a FUN_147b8722a body=139 status=ok
// SIG undefined FUN_147b8722a(void)

void FUN_147b8722a(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145cbe856(&local_28);
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



// FUNCTION 147b872b6 FUN_147b872b6 body=139 status=ok
// SIG undefined FUN_147b872b6(void)

void FUN_147b872b6(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_146817f7a(&local_28);
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



// FUNCTION 147b87342 FUN_147b87342 body=139 status=ok
// SIG undefined FUN_147b87342(void)

void FUN_147b87342(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145cbe9b2(&local_28);
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



// FUNCTION 147b873ce FUN_147b873ce body=139 status=ok
// SIG undefined FUN_147b873ce(void)

void FUN_147b873ce(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14626bf40(&local_28);
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



// FUNCTION 147b8745a FUN_147b8745a body=139 status=ok
// SIG undefined FUN_147b8745a(void)

void FUN_147b8745a(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145c6a176(&local_28);
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



// FUNCTION 147b874e6 FUN_147b874e6 body=139 status=ok
// SIG undefined FUN_147b874e6(void)

void FUN_147b874e6(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_146816fba(&local_28);
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



// FUNCTION 147b87572 FUN_147b87572 body=139 status=ok
// SIG undefined FUN_147b87572(void)

void FUN_147b87572(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145c6a10e(&local_28);
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



// FUNCTION 147b875fe FUN_147b875fe body=139 status=ok
// SIG undefined FUN_147b875fe(void)

void FUN_147b875fe(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_146818056(&local_28);
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



// FUNCTION 147b87690 FUN_147b87690 body=170 status=ok
// SIG undefined FUN_147b87690(void)

void FUN_147b87690(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1415258a0(local_28);
  *param_3 = uVar1;
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b8773c FUN_147b8773c body=139 status=ok
// SIG undefined FUN_147b8773c(void)

void FUN_147b8773c(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145cbe840(&local_28);
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



// FUNCTION 147b877c8 FUN_147b877c8 body=139 status=ok
// SIG undefined FUN_147b877c8(void)

void FUN_147b877c8(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_146167fdc(&local_28);
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



// FUNCTION 147b87854 FUN_147b87854 body=139 status=ok
// SIG undefined FUN_147b87854(void)

void FUN_147b87854(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_146817fe8(&local_28);
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



// FUNCTION 147b878e0 FUN_147b878e0 body=139 status=ok
// SIG undefined FUN_147b878e0(void)

void FUN_147b878e0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_146167f2e(&local_28);
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



// FUNCTION 147b8796c FUN_147b8796c body=139 status=ok
// SIG undefined FUN_147b8796c(void)

void FUN_147b8796c(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140b7d3f8(&local_28);
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



// FUNCTION 147b879fe FUN_147b879fe body=341 status=ok
// SIG undefined FUN_147b879fe(void)

void FUN_147b879fe(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  int local_2c;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
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
  FUN_140c50e86(&local_40,local_28,local_2c != 0);
  if (&local_40 == param_3) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_40;
    local_40 = 0;
    *(undefined4 *)(param_3 + 1) = local_38;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_34;
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b87b54 FUN_147b87b54 body=248 status=ok
// SIG undefined FUN_147b87b54(void)

void FUN_147b87b54(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_144a06ecc(&local_38,local_28);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    local_38 = 0;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b87c4e FUN_147b87c4e body=45 status=ok
// SIG undefined FUN_147b87c4e(void)

void FUN_147b87c4e(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_142787044();
  FUN_140bee9ec(param_3,uVar1);
  return;
}



// FUNCTION 147b87c7c FUN_147b87c7c body=45 status=ok
// SIG undefined FUN_147b87c7c(void)

void FUN_147b87c7c(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_140e82edc();
  FUN_140bee9ec(param_3,uVar1);
  return;
}



// FUNCTION 147b87cb0 FUN_147b87cb0 body=341 status=ok
// SIG undefined FUN_147b87cb0(void)

void FUN_147b87cb0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  int local_2c;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
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
  FUN_144a06df0(&local_40,local_28,local_2c != 0);
  if (&local_40 == param_3) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_40;
    local_40 = 0;
    *(undefined4 *)(param_3 + 1) = local_38;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_34;
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b87e06 FUN_147b87e06 body=45 status=ok
// SIG undefined FUN_147b87e06(void)

void FUN_147b87e06(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_140e82e76();
  FUN_140bee9ec(param_3,uVar1);
  return;
}



// FUNCTION 147b87e34 FUN_147b87e34 body=139 status=ok
// SIG undefined FUN_147b87e34(void)

void FUN_147b87e34(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_146818f30(&local_28);
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



// FUNCTION 147b87ec0 FUN_147b87ec0 body=248 status=ok
// SIG undefined FUN_147b87ec0(void)

void FUN_147b87ec0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140bee914(&local_38,local_28);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    local_38 = 0;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b87fba FUN_147b87fba body=139 status=ok
// SIG undefined FUN_147b87fba(void)

void FUN_147b87fba(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1457a1ca8(&local_28);
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



// FUNCTION 147b88046 FUN_147b88046 body=45 status=ok
// SIG undefined FUN_147b88046(void)

void FUN_147b88046(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_142787108();
  FUN_140bee9ec(param_3,uVar1);
  return;
}



// FUNCTION 147b88074 FUN_147b88074 body=45 status=ok
// SIG undefined FUN_147b88074(void)

void FUN_147b88074(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1401aecd6();
  FUN_144a787a6(param_3,uVar1);
  return;
}



// FUNCTION 147b880a2 FUN_147b880a2 body=45 status=ok
// SIG undefined FUN_147b880a2(void)

void FUN_147b880a2(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1468178a6();
  FUN_140bee9ec(param_3,uVar1);
  return;
}



// FUNCTION 147b880d0 FUN_147b880d0 body=45 status=ok
// SIG undefined FUN_147b880d0(void)

void FUN_147b880d0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1427871cc();
  FUN_140bee9ec(param_3,uVar1);
  return;
}



// FUNCTION 147b88102 FUN_147b88102 body=37 status=ok
// SIG undefined FUN_147b88102(void)

void FUN_147b88102(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14278700e();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147b8812e FUN_147b8812e body=170 status=ok
// SIG undefined FUN_147b8812e(void)

void FUN_147b8812e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1468182e0(local_28);
  *param_3 = uVar1;
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b881de FUN_147b881de body=37 status=ok
// SIG undefined FUN_147b881de(void)

void FUN_147b881de(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_140d6b588();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147b8820a FUN_147b8820a body=170 status=ok
// SIG undefined FUN_147b8820a(void)

void FUN_147b8820a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1401aeb9c(local_28);
  *param_3 = uVar1;
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b882bc FUN_147b882bc body=170 status=ok
// SIG undefined FUN_147b882bc(void)

void FUN_147b882bc(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_146817cfe(local_28);
  *param_3 = uVar1;
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


