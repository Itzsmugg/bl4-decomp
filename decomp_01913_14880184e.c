// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14880184e FUN_14880184e body=69 status=ok
// SIG undefined FUN_14880184e(void)

undefined4 FUN_14880184e(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  longlong *plVar2;
  
  if (*param_2 == 0) {
    plVar2 = &DAT_14c9a1308;
  }
  else {
    plVar2 = (longlong *)FUN_1446e60f4(*param_2,&DAT_14cb75230);
  }
  uVar1 = *(undefined1 *)(param_1 + 0x10);
  if (*plVar2 != 0) {
    uVar1 = FUN_14000584e(*plVar2,uVar1);
  }
  *(undefined1 *)(param_1 + 0x11) = uVar1;
  return 1;
}



// FUNCTION 14880189a FUN_14880189a body=55 status=ok
// SIG undefined FUN_14880189a(void)

void FUN_14880189a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  puVar1[1] = 0;
  *(undefined4 *)((longlong)puVar1 + 0xf) = 0;
  *puVar1 = &PTR_FUN_14b016330;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  return;
}



// FUNCTION 1488018d2 FUN_1488018d2 body=333 status=ok
// SIG undefined FUN_1488018d2(void)

undefined8 FUN_1488018d2(longlong param_1,longlong *param_2)

{
  byte bVar1;
  char cVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong *local_18;
  
  plVar3 = (longlong *)(DAT_14c707940 ^ (ulonglong)auStack_48);
  local_18 = plVar3;
  if (*param_2 == 0) {
    plVar7 = &DAT_14c9a1308;
  }
  else {
    plVar3 = (longlong *)FUN_1446e60f4(*param_2,&DAT_14cb75230);
    plVar7 = plVar3;
  }
  uVar4 = CONCAT71((int7)((ulonglong)plVar3 >> 8),*(undefined1 *)(param_1 + 0x10));
  if (*plVar7 != 0) {
    uVar4 = FUN_14000584e(*plVar7,uVar4 & 0xffffffff);
  }
  *(char *)(param_1 + 0x11) = (char)uVar4;
  if (*param_2 == 0) {
    plVar3 = &DAT_14c9a1308;
  }
  else {
    plVar3 = (longlong *)FUN_1446e60f4(*param_2,&DAT_14cb74db0);
  }
  if (*plVar3 == 0) {
    bVar1 = 1;
  }
  else {
    bVar1 = FUN_14000584e(*plVar3,1);
  }
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfe | bVar1;
  if (*param_2 == 0) {
    plVar3 = &DAT_14c9a1308;
  }
  else {
    plVar3 = (longlong *)FUN_1446e60f4(*param_2,&DAT_14cb74db8);
  }
  if (*plVar3 == 0) {
    bVar1 = 2;
  }
  else {
    cVar2 = FUN_14000584e(*plVar3,1);
    bVar1 = cVar2 * '\x02';
  }
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfd | bVar1;
  if (*param_2 == 0) {
    puVar5 = &DAT_14c9a1308;
  }
  else {
    puVar5 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb74dc0);
  }
  uVar6 = FUN_140625082(puVar5,&DAT_14c9a12e0);
  FUN_1447325ac(uVar6,&local_20,1);
  *(undefined8 *)(param_1 + 0x1c) = local_20;
  if (((ulonglong)local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148801a26 FUN_148801a26 body=259 status=ok
// SIG undefined FUN_148801a26(void)

undefined8 * FUN_148801a26(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x178);
  memset(puVar1 + 1,0,0x138);
  *puVar1 = &PTR_FUN_14b0163b0;
  puVar1[3] = &PTR_FUN_14b00bdf8;
  *(undefined4 *)(puVar1 + 10) = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x54) = 0xffffffff00000080;
  puVar1[0xd] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  *(undefined4 *)(puVar1 + 0x11) = 0x7f7fffff;
  *(undefined2 *)((longlong)puVar1 + 0x8c) = 0x404;
  puVar1[4] = &DAT_14a176f00;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = &PTR_FUN_14b00bdf8;
  *(undefined4 *)(puVar1 + 0x20) = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x104) = 0xffffffff00000080;
  puVar1[0x23] = 0;
  puVar1[0x25] = 0;
  puVar1[0x26] = 0;
  *(undefined4 *)(puVar1 + 0x27) = 0x7f7fffff;
  *(undefined2 *)((longlong)puVar1 + 0x13c) = 0x404;
  puVar1[0x1a] = &DAT_14a176f00;
  puVar1[0x2e] = 0;
  puVar1[0x2c] = 0;
  puVar1[0x2d] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  return puVar1;
}



// FUNCTION 148801b30 FUN_148801b30 body=85 status=ok
// SIG undefined FUN_148801b30(void)

void FUN_148801b30(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_14b016430;
  uVar1 = DAT_14c8464e8;
  puVar2[3] = DAT_14c8464e0;
  puVar2[4] = uVar1;
  puVar2[5] = DAT_14c8464f0;
  uVar1 = DAT_14c846500;
  puVar2[6] = DAT_14c8464f8;
  puVar2[7] = uVar1;
  puVar2[8] = DAT_14c846508;
  return;
}



// FUNCTION 148801b86 FUN_148801b86 body=375 status=ok
// SIG undefined FUN_148801b86(void)

undefined8 FUN_148801b86(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  longlong *local_20;
  
  plVar2 = (longlong *)(DAT_14c707940 ^ (ulonglong)auStack_98);
  local_20 = plVar2;
  if (*param_2 == 0) {
    plVar5 = &DAT_14c9a1308;
  }
  else {
    plVar2 = (longlong *)FUN_1446e60f4(*param_2,&DAT_14cb75230);
    plVar5 = plVar2;
  }
  uVar3 = CONCAT71((int7)((ulonglong)plVar2 >> 8),*(undefined1 *)(param_1 + 0x10));
  if (*plVar5 != 0) {
    uVar3 = FUN_14000584e(*plVar5,uVar3 & 0xffffffff);
  }
  *(char *)(param_1 + 0x11) = (char)uVar3;
  local_48 = DAT_14c8464f0;
  local_58 = (undefined4)DAT_14c8464e0;
  uStack_54 = DAT_14c8464e0._4_4_;
  uStack_50 = (undefined4)DAT_14c8464e8;
  uStack_4c = DAT_14c8464e8._4_4_;
  if (*param_2 == 0) {
    puVar4 = &DAT_14c9a1308;
  }
  else {
    puVar4 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb74ed0);
  }
  pbVar1 = (byte *)*puVar4;
  if ((pbVar1 == (byte *)0x0) || ((*pbVar1 & 3) != 1)) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(pbVar1 + 8);
  }
  FUN_147095002(&local_38,uVar6,&local_58);
  *(undefined8 *)(param_1 + 0x28) = local_28;
  *(ulonglong *)(param_1 + 0x18) = CONCAT44(uStack_34,local_38);
  *(ulonglong *)(param_1 + 0x20) = CONCAT44(uStack_2c,uStack_30);
  local_68 = DAT_14c846508;
  local_78 = (undefined4)DAT_14c8464f8;
  uStack_74 = DAT_14c8464f8._4_4_;
  uStack_70 = (undefined4)DAT_14c846500;
  uStack_6c = DAT_14c846500._4_4_;
  if (*param_2 == 0) {
    puVar4 = &DAT_14c9a1308;
  }
  else {
    puVar4 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb74ed8);
  }
  pbVar1 = (byte *)*puVar4;
  if ((pbVar1 == (byte *)0x0) || ((*pbVar1 & 3) != 1)) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(pbVar1 + 8);
  }
  FUN_147095088(&local_38,uVar6,&local_78);
  *(undefined8 *)(param_1 + 0x40) = local_28;
  *(undefined4 *)(param_1 + 0x30) = local_38;
  *(undefined4 *)(param_1 + 0x34) = uStack_34;
  *(undefined4 *)(param_1 + 0x38) = uStack_30;
  *(undefined4 *)(param_1 + 0x3c) = uStack_2c;
  if (((ulonglong)local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148801d04 FUN_148801d04 body=41 status=ok
// SIG undefined FUN_148801d04(void)

void FUN_148801d04(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_14b0164b0;
  return;
}



// FUNCTION 148801d2e FUN_148801d2e body=101 status=ok
// SIG undefined FUN_148801d2e(void)

void FUN_148801d2e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x28) + 0xe8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x680))(plVar1,&local_30);
    *(undefined8 *)(param_2 + 0x58) = local_20;
    *(undefined4 *)(param_2 + 0x48) = local_30;
    *(undefined4 *)(param_2 + 0x4c) = uStack_2c;
    *(undefined4 *)(param_2 + 0x50) = uStack_28;
    *(undefined4 *)(param_2 + 0x54) = uStack_24;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148801d9a FUN_148801d9a body=189 status=ok
// SIG undefined FUN_148801d9a(void)

undefined8 * FUN_148801d9a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xe8);
  memset(puVar1 + 1,0,0xe0);
  *puVar1 = &PTR_FUN_14b016530;
  puVar1[3] = 0x3e8000003f8ccccd;
  puVar1[4] = 0x3ee6666640100000;
  puVar1[5] = &PTR_FUN_14b00bdf8;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined8 *)((longlong)puVar1 + 100) = 0xffffffff00000080;
  puVar1[0xf] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  *(undefined4 *)(puVar1 + 0x13) = 0x7f7fffff;
  *(undefined2 *)((longlong)puVar1 + 0x9c) = 0x404;
  puVar1[6] = &DAT_14a176f00;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  *(undefined1 *)(puVar1 + 0x1c) = 0;
  return puVar1;
}



// FUNCTION 148801e58 FUN_148801e58 body=316 status=ok
// SIG undefined FUN_148801e58(void)

undefined8 FUN_148801e58(longlong param_1,longlong *param_2)

{
  longlong *in_RAX;
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  
  if (*param_2 == 0) {
    plVar3 = &DAT_14c9a1308;
  }
  else {
    in_RAX = (longlong *)FUN_1446e60f4(*param_2,&DAT_14cb75230);
    plVar3 = in_RAX;
  }
  uVar1 = CONCAT71((int7)((ulonglong)in_RAX >> 8),*(undefined1 *)(param_1 + 0x10));
  if (*plVar3 != 0) {
    uVar1 = FUN_14000584e(*plVar3,uVar1 & 0xffffffff);
  }
  *(char *)(param_1 + 0x11) = (char)uVar1;
  puVar4 = &DAT_14c9a1308;
  puVar2 = &DAT_14c9a1308;
  if (*param_2 != 0) {
    puVar2 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb74fe0);
  }
  uVar5 = FUN_140b963dc(puVar2,0x3f8ccccd);
  *(undefined4 *)(param_1 + 0x18) = uVar5;
  puVar2 = &DAT_14c9a1308;
  if (*param_2 != 0) {
    puVar2 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb74fe8);
  }
  uVar5 = FUN_140b963dc(puVar2,0x3e800000);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  puVar2 = &DAT_14c9a1308;
  if (*param_2 != 0) {
    puVar2 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb74ff0);
  }
  uVar5 = FUN_140b963dc(puVar2,0x40100000);
  *(undefined4 *)(param_1 + 0x20) = uVar5;
  puVar2 = &DAT_14c9a1308;
  if (*param_2 != 0) {
    puVar2 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb74ff8);
  }
  uVar5 = FUN_140b963dc(puVar2,0x3ee66666);
  *(undefined4 *)(param_1 + 0x24) = uVar5;
  if (*param_2 != 0) {
    puVar4 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb75000);
  }
  FUN_147095300(puVar4,param_1 + 0x30);
  return 1;
}



// FUNCTION 148801f9a FUN_148801f9a body=71 status=ok
// SIG undefined FUN_148801f9a(void)

void FUN_148801f9a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  *puVar1 = &PTR_FUN_14b0165b0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0x3e80000042a00000;
  *(undefined1 *)((longlong)puVar1 + 0x24) = 1;
  return;
}



// FUNCTION 148801fe2 FUN_148801fe2 body=229 status=ok
// SIG undefined FUN_148801fe2(void)

undefined8 FUN_148801fe2(longlong param_1,longlong *param_2)

{
  undefined1 extraout_AL;
  undefined1 uVar1;
  longlong *in_RAX;
  ulonglong uVar2;
  longlong *plVar3;
  undefined7 extraout_var;
  undefined7 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Da;
  
  if (*param_2 == 0) {
    plVar6 = &DAT_14c9a1308;
  }
  else {
    in_RAX = (longlong *)FUN_1446e60f4(*param_2,&DAT_14cb75230);
    plVar6 = in_RAX;
  }
  uVar2 = CONCAT71((int7)((ulonglong)in_RAX >> 8),*(undefined1 *)(param_1 + 0x10));
  if (*plVar6 != 0) {
    uVar2 = FUN_14000584e(*plVar6,uVar2 & 0xffffffff);
  }
  *(char *)(param_1 + 0x11) = (char)uVar2;
  puVar5 = &DAT_14c9a1308;
  if (*param_2 != 0) {
    puVar5 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb75090);
  }
  uVar7 = FUN_140b963dc(puVar5,0x42a00000);
  *(undefined4 *)(param_1 + 0x1c) = uVar7;
  puVar5 = &DAT_14c9a1308;
  if (*param_2 != 0) {
    puVar5 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb75098);
  }
  plVar3 = (longlong *)FUN_140b963dc(puVar5,0x3e800000);
  *(undefined4 *)(param_1 + 0x20) = extraout_XMM0_Da;
  plVar6 = &DAT_14c9a1308;
  if (*param_2 != 0) {
    plVar3 = (longlong *)FUN_1446e60f4(*param_2,&DAT_14cb750a0);
    plVar6 = plVar3;
  }
  if (*plVar6 == 0) {
    uVar4 = (undefined7)((ulonglong)plVar3 >> 8);
    uVar1 = 1;
  }
  else {
    FUN_14000584e(*plVar6,1);
    uVar1 = extraout_AL;
    uVar4 = extraout_var;
  }
  *(undefined1 *)(param_1 + 0x24) = uVar1;
  return CONCAT71(uVar4,1);
}



// FUNCTION 1488020ce FUN_1488020ce body=121 status=ok
// SIG undefined FUN_1488020ce(void)

void FUN_1488020ce(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar2[1] = 0;
  *(undefined4 *)((longlong)puVar2 + 0xf) = 0;
  *puVar2 = &PTR_FUN_14b3f18f0;
  puVar2[5] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  puVar2[3] = DAT_14c8464e0;
  puVar2[4] = uVar1;
  puVar2[8] = DAT_14c846508;
  uVar1 = DAT_14c846500;
  puVar2[6] = DAT_14c8464f8;
  puVar2[7] = uVar1;
  puVar2[0xb] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  puVar2[9] = DAT_14c8464e0;
  puVar2[10] = uVar1;
  *(undefined2 *)(puVar2 + 2) = 0x101;
  return;
}



// FUNCTION 148802148 FUN_148802148 body=527 status=ok
// SIG undefined FUN_148802148(void)

undefined8 FUN_148802148(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  longlong *local_20;
  
  plVar2 = (longlong *)(DAT_14c707940 ^ (ulonglong)auStack_b8);
  local_20 = plVar2;
  if (*param_2 == 0) {
    plVar5 = &DAT_14c9a1308;
  }
  else {
    plVar2 = (longlong *)FUN_1446e60f4(*param_2,&DAT_14cb75230);
    plVar5 = plVar2;
  }
  uVar3 = CONCAT71((int7)((ulonglong)plVar2 >> 8),*(undefined1 *)(param_1 + 0x10));
  if (*plVar5 != 0) {
    uVar3 = FUN_14000584e(*plVar5,uVar3 & 0xffffffff);
  }
  *(char *)(param_1 + 0x11) = (char)uVar3;
  local_48 = DAT_14c8464f0;
  local_58 = (undefined4)DAT_14c8464e0;
  uStack_54 = DAT_14c8464e0._4_4_;
  uStack_50 = (undefined4)DAT_14c8464e8;
  uStack_4c = DAT_14c8464e8._4_4_;
  if (*param_2 == 0) {
    puVar4 = &DAT_14c9a1308;
  }
  else {
    puVar4 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb75130);
  }
  pbVar1 = (byte *)*puVar4;
  if ((pbVar1 == (byte *)0x0) || ((*pbVar1 & 3) != 1)) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(pbVar1 + 8);
  }
  FUN_147095002(&local_38,uVar6,&local_58);
  *(undefined8 *)(param_1 + 0x28) = local_28;
  *(ulonglong *)(param_1 + 0x18) = CONCAT44(uStack_34,local_38);
  *(ulonglong *)(param_1 + 0x20) = CONCAT44(uStack_2c,uStack_30);
  local_68 = DAT_14c846508;
  local_78 = (undefined4)DAT_14c8464f8;
  uStack_74 = DAT_14c8464f8._4_4_;
  uStack_70 = (undefined4)DAT_14c846500;
  uStack_6c = DAT_14c846500._4_4_;
  if (*param_2 == 0) {
    puVar4 = &DAT_14c9a1308;
  }
  else {
    puVar4 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb75138);
  }
  pbVar1 = (byte *)*puVar4;
  if ((pbVar1 == (byte *)0x0) || ((*pbVar1 & 3) != 1)) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(pbVar1 + 8);
  }
  FUN_147095088(&local_38,uVar6,&local_78);
  *(undefined8 *)(param_1 + 0x40) = local_28;
  *(ulonglong *)(param_1 + 0x30) = CONCAT44(uStack_34,local_38);
  *(ulonglong *)(param_1 + 0x38) = CONCAT44(uStack_2c,uStack_30);
  local_88 = DAT_14c8464f0;
  local_98 = (undefined4)DAT_14c8464e0;
  uStack_94 = DAT_14c8464e0._4_4_;
  uStack_90 = (undefined4)DAT_14c8464e8;
  uStack_8c = DAT_14c8464e8._4_4_;
  if (*param_2 == 0) {
    puVar4 = &DAT_14c9a1308;
  }
  else {
    puVar4 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb75140);
  }
  pbVar1 = (byte *)*puVar4;
  if ((pbVar1 == (byte *)0x0) || ((*pbVar1 & 3) != 1)) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(pbVar1 + 8);
  }
  FUN_147095002(&local_38,uVar6,&local_98);
  *(undefined8 *)(param_1 + 0x58) = local_28;
  *(undefined4 *)(param_1 + 0x48) = local_38;
  *(undefined4 *)(param_1 + 0x4c) = uStack_34;
  *(undefined4 *)(param_1 + 0x50) = uStack_30;
  *(undefined4 *)(param_1 + 0x54) = uStack_2c;
  if (((ulonglong)local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14880235e FUN_14880235e body=56 status=ok
// SIG undefined FUN_14880235e(void)

void FUN_14880235e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 3) = 0x3f800000;
  *puVar1 = &PTR_FUN_14b016630;
  return;
}



// FUNCTION 148802396 FUN_148802396 body=62 status=ok
// SIG undefined FUN_148802396(void)

undefined1 FUN_148802396(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140dddafc(param_2);
  FUN_14045886c(uVar1,&DAT_14cb75238);
  uVar1 = FUN_140dddafc(param_2);
  FUN_14045886c(uVar1,&DAT_14cb75260);
  return 1;
}



// FUNCTION 1488023d4 FUN_1488023d4 body=61 status=ok
// SIG undefined FUN_1488023d4(void)

undefined8 FUN_1488023d4(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x50))();
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x60))(param_1,param_2,param_3,param_4);
  }
  return 0;
}



// FUNCTION 148802412 FUN_148802412 body=1065 status=ok
// SIG undefined FUN_148802412(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_148802412(longlong param_1,undefined8 param_2,undefined8 param_3,float param_4,
             undefined4 param_5,undefined1 param_6,undefined8 param_7)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_148 [32];
  undefined8 *local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  undefined4 local_f8;
  float local_f4;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined2 local_af;
  undefined1 local_ad;
  undefined2 local_ac;
  undefined1 local_aa;
  undefined2 local_a9;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined2 local_98;
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb752e0) {
    FUN_144b3d300(&DAT_14cb752e0);
    if (DAT_14cb752e0 == -1) {
      FUN_1446f470e(&DAT_14cb752d8,L"CameraTrace",1);
      _Init_thread_footer(&DAT_14cb752e0);
    }
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0xe0) == 0) {
    uVar9 = 0;
  }
  else {
    lVar10 = FUN_1447210f0();
    uVar9 = 0;
    if (lVar10 != 0) {
      lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0xe0);
      local_9c = 0;
      local_b8 = 0;
      local_98 = 0x101;
      local_70 = 0;
      local_68 = 0x800000000;
      local_50 = 0;
      local_48 = 0x400000000;
      local_b0 = 1;
      local_a4 = 0;
      local_c0 = DAT_14cb752d8;
      local_af = 1;
      local_ad = 0;
      local_ac = 0;
      local_aa = 0;
      if (lVar11 != 0) {
        local_60 = *(undefined4 *)(lVar11 + 0xc);
        local_48 = 0x400000001;
        local_b8 = *(undefined8 *)(lVar11 + 0x18);
      }
      local_a9 = 0x101;
      local_a0 = param_6;
      local_d8 = _DAT_14cad0ee0;
      uStack_d0 = uRam000000014cad0ee8;
      local_e8 = _DAT_14cad0ed0;
      uStack_e0 = _DAT_14cad0ed8;
      lVar11 = 0;
      do {
        bVar1 = *(char *)((longlong)&local_e8 + lVar11) == '\x02';
        bVar2 = *(char *)((longlong)&local_e8 + lVar11 + 1) == '\x02';
        bVar3 = *(char *)((longlong)&local_e8 + lVar11 + 2) == '\x02';
        bVar4 = *(char *)((longlong)&local_e8 + lVar11 + 3) == '\x02';
        bVar5 = *(char *)((longlong)&local_e8 + lVar11 + 4) == '\x02';
        bVar6 = *(char *)((longlong)&local_e8 + lVar11 + 5) == '\x02';
        bVar7 = *(char *)((longlong)&local_e8 + lVar11 + 6) == '\x02';
        bVar8 = *(char *)((longlong)&local_e8 + lVar11 + 7) == '\x02';
        if ((bool)(~bVar1 & 1)) {
          *(undefined1 *)((longlong)&local_e8 + lVar11) = 2;
        }
        if ((bool)(~bVar2 & 1)) {
          *(undefined1 *)((longlong)&local_e8 + lVar11 + 1) = 2;
        }
        if ((bool)(~bVar3 & 1)) {
          *(undefined1 *)((longlong)&local_e8 + lVar11 + 2) = 2;
        }
        if ((bool)(~bVar4 & 1)) {
          *(undefined1 *)((longlong)&local_e8 + lVar11 + 3) = 2;
        }
        if ((bool)(~bVar5 & 1)) {
          *(undefined1 *)((longlong)&local_e8 + lVar11 + 4) = 2;
        }
        if ((bool)(~bVar6 & 1)) {
          *(undefined1 *)((longlong)&local_e8 + lVar11 + 5) = 2;
        }
        if ((bool)(~bVar7 & 1)) {
          *(undefined1 *)((longlong)&local_e8 + lVar11 + 6) = 2;
        }
        if ((bool)(~bVar8 & 1)) {
          *(undefined1 *)((longlong)&local_e8 + lVar11 + 7) = 2;
        }
        if ((bool)(~bVar1 & 1)) {
          *(undefined1 *)((longlong)&uStack_e0 + lVar11) = 2;
        }
        if ((bool)(~bVar2 & 1)) {
          *(undefined1 *)((longlong)&uStack_e0 + lVar11 + 1) = 2;
        }
        if ((bool)(~bVar3 & 1)) {
          *(undefined1 *)((longlong)&uStack_e0 + lVar11 + 2) = 2;
        }
        if ((bool)(~bVar4 & 1)) {
          *(undefined1 *)((longlong)&uStack_e0 + lVar11 + 3) = 2;
        }
        if ((bool)(~bVar5 & 1)) {
          *(undefined1 *)((longlong)&uStack_e0 + lVar11 + 4) = 2;
        }
        if ((bool)(~bVar6 & 1)) {
          *(undefined1 *)((longlong)&uStack_e0 + lVar11 + 5) = 2;
        }
        if ((bool)(~bVar7 & 1)) {
          *(undefined1 *)((longlong)&uStack_e0 + lVar11 + 6) = 2;
        }
        if ((bool)(~bVar8 & 1)) {
          *(undefined1 *)((longlong)&uStack_e0 + lVar11 + 7) = 2;
        }
        lVar11 = lVar11 + 0x10;
      } while (lVar11 != 0x20);
      if (param_4 <= 0.0) {
        local_118 = &local_e8;
        local_120 = &local_c0;
        local_128 = (undefined8 *)CONCAT44(local_128._4_4_,param_5);
        uVar9 = FUN_1400b50cc(lVar10,param_7,param_2,param_3);
      }
      else {
        local_118 = (undefined8 *)&local_f8;
        local_f8 = 2;
        local_108 = &local_e8;
        local_110 = &local_c0;
        local_120 = (undefined8 *)CONCAT44(local_120._4_4_,param_5);
        local_128 = &DAT_14c8463d0;
        local_f4 = param_4;
        uVar9 = FUN_14021655c(lVar10,param_7,param_2,param_3);
      }
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      if (local_70 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14880283c FUN_14880283c body=126 status=ok
// SIG undefined FUN_14880283c(void)

undefined4 * FUN_14880283c(undefined4 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0x429a0000;
  *(undefined8 *)(param_1 + 2) = 0x4056800000000000;
  *(undefined8 *)(param_1 + 4) = 0x4056800000000000;
  *(undefined8 *)(param_1 + 6) = 0;
  FUN_1446ddc76(param_1 + 8,"Camera",1);
  param_1[10] = 0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0xc) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0xe) = uVar1;
  *(undefined8 *)(param_1 + 0x10) = DAT_14c8464f0;
  uVar1 = DAT_14c846500;
  *(undefined8 *)(param_1 + 0x12) = DAT_14c8464f8;
  *(undefined8 *)(param_1 + 0x14) = uVar1;
  *(undefined8 *)(param_1 + 0x16) = DAT_14c846508;
  *(undefined1 *)(param_1 + 0x18) = 0;
  return param_1;
}



// FUNCTION 1488028ba FUN_1488028ba body=64 status=ok
// SIG undefined FUN_1488028ba(void)

undefined8 * FUN_1488028ba(longlong param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    *param_2 = 0;
  }
  else {
    puVar1 = *(undefined4 **)(*(longlong *)(param_1 + 0x10) + 8);
    puVar2 = &DAT_14c9485f0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = puVar1;
    }
    FUN_1447325ac(puVar2,param_2,1);
  }
  return param_2;
}



// FUNCTION 1488028fa FUN_1488028fa body=269 status=ok
// SIG undefined FUN_1488028fa(void)

void FUN_1488028fa(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if ((longlong)*(int *)(param_1 + 0x28) != 0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
    plVar5 = plVar4 + (longlong)*(int *)(param_1 + 0x28) * 2;
    do {
      plVar2 = (longlong *)*plVar4;
      plVar3 = (longlong *)plVar4[1];
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x68))(plVar2,param_2,param_3,param_4,param_5);
      }
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
      plVar4 = plVar4 + 2;
    } while (plVar4 != plVar5);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    plVar4 = *(longlong **)(param_1 + 0x30);
    plVar5 = plVar4 + (longlong)*(int *)(param_1 + 0x38) * 2;
    do {
      plVar2 = (longlong *)*plVar4;
      plVar3 = (longlong *)plVar4[1];
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x68))(plVar2,param_2,param_3,param_4,param_5);
      }
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
      plVar4 = plVar4 + 2;
    } while (plVar4 != plVar5);
  }
  return;
}



// FUNCTION 148802a08 FUN_148802a08 body=68 status=ok
// SIG undefined FUN_148802a08(void)

void FUN_148802a08(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b0dd3c0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(byte *)((longlong)param_1 + 0x1d) = *(byte *)((longlong)param_1 + 0x1d) & 0xfc;
  return;
}



// FUNCTION 148802a4c FUN_148802a4c body=68 status=ok
// SIG undefined FUN_148802a4c(void)

void FUN_148802a4c(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_140f0eac8(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_14880dda6(param_1,param_2);
  return;
}



// FUNCTION 148802a92 FUN_148802a92 body=361 status=ok
// SIG undefined FUN_148802a92(void)

void FUN_148802a92(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  longlong local_60;
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar2 = FUN_140625082(param_2,&DAT_14c9a12e0);
  FUN_1447a97f4(local_50,uVar2);
  lVar3 = FUN_144837648(param_1,local_50,1);
  if (lVar3 != 0) {
    uVar2 = FUN_148802f38(param_1,lVar3,0);
    FUN_1488030b6(param_4,uVar2);
    local_80 = DAT_14cb75498;
    local_88 = DAT_14cb75490;
    FUN_1448075d0(local_78);
    uVar2 = FUN_144a06846(lVar3 + 0x48,local_78);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    plVar4 = (longlong *)FUN_1412ba9fc(param_4);
    local_98 = 0;
    FUN_140008518(local_78,param_3,uVar2,0);
    (**(code **)(*plVar4 + 0x58))(plVar4,local_78);
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_70 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_70 + 0x10))(local_70);
        }
      }
    }
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148802bfc FUN_148802bfc body=125 status=ok
// SIG undefined FUN_148802bfc(void)

undefined8 FUN_148802bfc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_1412d8410(param_2);
  if (cVar1 != '\0') {
    uVar2 = FUN_140dddafc(param_2);
    FUN_1446dcdd4(local_40,&DAT_14cb75438);
    FUN_14045886c(uVar2,local_40);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148802c7a FUN_148802c7a body=165 status=ok
// SIG undefined FUN_148802c7a(void)

void FUN_148802c7a(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = param_3[1];
  if ((lVar3 == 0) && (lVar3 = *param_3, lVar3 == 0)) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar3 + 0x20);
  }
  FUN_1446f470e(&local_28,L"Behaviors",1);
  if ((lVar3 == local_28) && ((longlong)*(int *)(param_1 + 0x30) != 0)) {
    plVar2 = *(longlong **)(param_1 + 0x28);
    lVar3 = (longlong)*(int *)(param_1 + 0x30) * 0x18;
    do {
      if (*plVar2 != 0) {
        plVar1 = (longlong *)FUN_1412ba9fc(plVar2);
        (**(code **)(*plVar1 + 0x70))(plVar1);
      }
      plVar2 = plVar2 + 3;
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != 0);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148802d20 FUN_148802d20 body=50 status=ok
// SIG undefined FUN_148802d20(void)

void FUN_148802d20(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b0dd410;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



// FUNCTION 148802d52 FUN_148802d52 body=22 status=ok
// SIG undefined FUN_148802d52(void)

ulonglong FUN_148802d52(uint *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  ulonglong *puVar7;
  uint *puVar8;
  longlong lVar9;
  uint *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  undefined1 auStack_68 [40];
  ulonglong uStack_40;
  int iStack_38;
  ulonglong uStack_30;
  
  plVar3 = DAT_14cb75728;
  if (DAT_14cb75728 == (longlong *)0x0) {
    return 0;
  }
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(code **)(*DAT_14cb75728 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb75728 + 0x154) & 1) != 0) &&
       (*(int *)((longlong)DAT_14cb75728 + 0x1fc) < (int)DAT_14cb75728[0x3a])) goto LAB_144815de0;
LAB_144815f6c:
    iVar6 = (int)plVar3[0x59];
    uVar14 = *param_1;
    if ((longlong)iVar6 == -1) {
      if (((uVar14 != 0) && (param_1[1] != 0)) && (uVar14 != DAT_14c948000)) {
        puVar7 = &DAT_14c948028;
        goto LAB_144815fa4;
      }
LAB_1448160f1:
      puVar7 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
      uVar14 = (uint)DAT_14c948618;
    }
    else {
      if (((uVar14 == 0) || (uVar5 = param_1[1], uVar5 == 0)) || (uVar14 == DAT_14c948000))
      goto LAB_1448160f1;
      puVar10 = param_1 + 2;
      if (0 < (int)param_1[9]) {
        puVar10 = *(uint **)(param_1 + 6);
      }
      if (1 < (int)uVar5) {
        puVar10 = *(uint **)(param_1 + 6);
      }
      if (uVar5 == 1 && 0 < iVar6) {
        puVar8 = (uint *)&DAT_14c948618;
        if (*(int *)((longlong)plVar3 + 0x2cc) == 1) {
          puVar8 = puVar10;
        }
        uVar14 = *puVar8;
        puVar7 = (ulonglong *)(puVar8 + 1);
      }
      else {
        if ((int)uVar5 <= iVar6) goto LAB_1448160f1;
        puVar7 = (ulonglong *)(puVar10 + (longlong)iVar6 * 3 + 1);
        uVar14 = puVar10[(longlong)iVar6 * 3];
      }
    }
LAB_144815fa4:
    uVar2 = *puVar7;
    uVar15 = uVar2 >> 0x20;
    uVar5 = uVar14;
    if (uVar15 != 0) {
      uVar5 = FUN_144a78877(uVar14,uVar15);
    }
    if ((int)plVar3[0x50] != *(int *)((longlong)plVar3 + 0x2ac)) {
      plVar11 = plVar3 + 0x56;
      if ((longlong *)plVar3[0x57] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar3[0x57];
      }
      iVar6 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar3[0x58] - 1U & uVar5) * 4);
      if (iVar6 != -1) {
        plVar11 = plVar3 + 0x4f;
        lVar9 = *plVar11;
        uVar15 = 0;
LAB_144815ffc:
        lVar18 = (longlong)iVar6 * 0x20;
        if ((*(uint *)(lVar9 + lVar18) != uVar14) ||
           (lVar1 = lVar9 + lVar18, *(int *)(lVar1 + 8) != (int)(uVar2 >> 0x20)))
        goto LAB_144816008;
        uVar15 = 0;
        if ((lVar1 != 0) && ((longlong *)(lVar1 + 0x10) != (longlong *)0x0)) {
          lVar9 = *(longlong *)(lVar1 + 0x10);
          if (lVar9 != 0) {
            lVar18 = *(longlong *)(lVar9 + 0x60);
            if (lVar18 != 0) {
              do {
                FUN_144a62e5c(&uStack_40,lVar18 + 0x18,(int)plVar3[0x59],
                              *(undefined4 *)((longlong)plVar3 + 0x2cc));
                if (iStack_38 != 0) {
                  FUN_144a78877(uStack_40 & 0xffffffff,iStack_38);
                }
                iVar6 = FUN_144b0847a(plVar11);
                if (iVar6 == -1) {
                  lVar9 = 0;
                }
                else {
                  lVar9 = (longlong)iVar6 * 0x20 + *plVar11;
                }
                plVar12 = (longlong *)(lVar9 + 0x10);
                if (lVar9 == 0) {
                  plVar12 = (longlong *)0x0;
                }
                lVar9 = *plVar12;
                lVar18 = *(longlong *)(lVar9 + 0x60);
              } while (lVar18 != 0);
            }
            uVar15 = *(ulonglong *)(lVar9 + 0x30);
            uStack_40 = uVar15;
            if (uVar15 != 0) goto LAB_144815ea3;
            FUN_140e43bf0(plVar3,&uStack_40,lVar9);
            uVar15 = uStack_40;
            if (uStack_40 != 0) {
              *(ulonglong *)(lVar9 + 0x30) = uStack_40;
              if (lVar9 != 0) {
                FUN_1407d81de(uStack_40 + 8,lVar9);
              }
              goto LAB_144815ea3;
            }
          }
          goto LAB_144816103;
        }
        goto LAB_144815ea3;
      }
    }
  }
  else {
    cVar4 = (**(code **)(*DAT_14cb75728 + 0x300))(DAT_14cb75728);
    if (cVar4 == '\0') goto LAB_144815f6c;
LAB_144815de0:
    puVar10 = (uint *)&DAT_14c948618;
    if (((*param_1 != 0) && (0 < (int)param_1[1])) && (*param_1 != DAT_14c948000)) {
      puVar10 = param_1 + 2;
      if (0 < (int)param_1[9]) {
        puVar10 = *(uint **)(param_1 + 6);
      }
      if (1 < param_1[1]) {
        puVar10 = *(uint **)(param_1 + 6);
      }
    }
    uVar14 = *puVar10;
    uVar5 = puVar10[2];
    uVar13 = uVar14;
    if (uVar5 != 0) {
      uVar13 = uVar5 >> 0xd ^ uVar14 - uVar5;
      uVar16 = uVar13 << 8 ^ (-0x61c88647 - uVar5) - uVar13;
      uVar17 = uVar16 >> 0xd ^ (uVar5 - uVar13) - uVar16;
      uVar13 = uVar17 >> 0xc ^ (uVar13 - uVar16) - uVar17;
      uVar19 = uVar13 << 0x10 ^ (uVar16 - uVar17) - uVar13;
      uVar16 = uVar19 >> 5 ^ (uVar17 - uVar13) - uVar19;
      uVar17 = uVar16 >> 3 ^ (uVar13 - uVar19) - uVar16;
      uVar13 = uVar17 << 10 ^ (uVar19 - uVar16) - uVar17;
      uVar13 = uVar13 >> 0xf ^ uVar16 - (uVar17 + uVar13);
    }
    if ((int)plVar3[0x3a] != *(int *)((longlong)plVar3 + 0x1fc)) {
      plVar11 = plVar3 + 0x40;
      if ((longlong *)plVar3[0x41] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar3[0x41];
      }
      iVar6 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar3[0x42] - 1U & uVar13) * 4);
      if (iVar6 != -1) {
        lVar9 = plVar3[0x39];
        uVar15 = 0;
        do {
          lVar18 = (longlong)iVar6 * 0x20;
          if ((*(uint *)(lVar9 + lVar18) == uVar14) &&
             (lVar1 = lVar9 + lVar18, *(uint *)(lVar1 + 8) == uVar5)) {
            uVar15 = 0;
            if ((lVar1 != 0) && ((ulonglong *)(lVar1 + 0x10) != (ulonglong *)0x0)) {
              uVar15 = *(ulonglong *)(lVar1 + 0x10);
            }
            break;
          }
          iVar6 = *(int *)(lVar9 + 0x18 + lVar18);
        } while (iVar6 != -1);
        goto LAB_144815ea3;
      }
    }
  }
LAB_144816103:
  uVar15 = 0;
LAB_144815ea3:
  if ((uStack_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_144816008:
  iVar6 = *(int *)(lVar9 + 0x18 + lVar18);
  if (iVar6 == -1) goto LAB_144815ea3;
  goto LAB_144815ffc;
}



// FUNCTION 148802e5a FUN_148802e5a body=66 status=ok
// SIG undefined FUN_148802e5a(void)

undefined1 FUN_148802e5a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  
  if (*param_2 == 0) {
    puVar1 = &DAT_14c9a1308;
  }
  else {
    puVar1 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb75600);
  }
  uVar2 = FUN_140b963dc(puVar1,0xbf800000);
  *(undefined4 *)(param_1 + 8) = uVar2;
  return 1;
}



// FUNCTION 148802ea0 FUN_148802ea0 body=47 status=ok
// SIG undefined FUN_148802ea0(void)

undefined4 FUN_148802ea0(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x40))();
  if ((char)uVar1 != '\0') {
    (**(code **)(*param_1 + 0x48))(param_1,param_2);
  }
  return uVar1;
}



// FUNCTION 148802ed0 FUN_148802ed0 body=61 status=ok
// SIG undefined FUN_148802ed0(void)

undefined8 FUN_148802ed0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x40))();
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x50))(param_1,param_2,param_3,param_4);
  }
  return 0;
}



// FUNCTION 148802f0e FUN_148802f0e body=1 status=ok
// SIG undefined FUN_148802f0e(void)

void FUN_148802f0e(void)

{
  return;
}



// FUNCTION 148802f38 FUN_148802f38 body=380 status=ok
// SIG undefined FUN_148802f38(void)

longlong FUN_148802f38(undefined8 param_1,longlong param_2,char param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != 0) {
    FUN_144837e54(param_2,0);
    local_60 = DAT_14cb75660;
    local_68 = DAT_14cb75658;
    FUN_1448075d0(local_58);
    uVar2 = FUN_144a06846(param_2 + 0x48,local_58);
    uVar2 = FUN_140625082(uVar2,&DAT_14c9a12e0);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    local_60 = DAT_14cb75678;
    local_68 = DAT_14cb75670;
    FUN_1448075d0(local_58);
    uVar3 = FUN_144a06846(param_2 + 0x48,local_58);
    uVar3 = FUN_140625082(uVar3,&DAT_14c9a12e0);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (param_3 == '\0') {
      lVar4 = FUN_140009742(param_1,uVar2);
      if (lVar4 != 0) goto LAB_14880307e;
      lVar4 = FUN_140009742(param_1,uVar3);
      if (lVar4 != 0) goto LAB_14880307e;
    }
    FUN_1447325ac(uVar3,local_58,1);
    lVar4 = FUN_148803210(local_58);
    if ((lVar4 != 0) && (pcVar1 = *(code **)(lVar4 + 0x40), pcVar1 != (code *)0x0)) {
      plVar5 = (longlong *)(lVar4 + 0x60);
      if (*(longlong **)(lVar4 + 0x50) != (longlong *)0x0) {
        plVar5 = *(longlong **)(lVar4 + 0x50);
      }
      uVar2 = (**(code **)(*plVar5 + 8))(plVar5);
      lVar4 = (*pcVar1)(uVar2);
      goto LAB_14880307e;
    }
  }
  lVar4 = 0;
LAB_14880307e:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488030b6 FUN_1488030b6 body=78 status=ok
// SIG undefined FUN_1488030b6(void)

void FUN_1488030b6(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((param_2 == 0) || (lVar1 = FUN_145929270(), lVar1 == 0)) ||
     (*(int *)(param_2 + 0x38) < *(int *)(lVar1 + 0x38))) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    if (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30) {
      lVar2 = param_2;
    }
  }
  FUN_140005f6c(param_1,lVar2,0,0);
  return;
}



// FUNCTION 148803104 FUN_148803104 body=267 status=ok
// SIG undefined FUN_148803104(void)

longlong FUN_148803104(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong *plStack_70;
  longlong local_68 [3];
  longlong local_50;
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68[0] = 0;
  local_68[1] = 0;
  cVar4 = (**(code **)(*param_1 + 0x418))();
  if (cVar4 != '\0') {
    local_78 = 0;
    plStack_70 = (longlong *)0x0;
    cVar4 = FUN_1446e9750(param_1,&local_78,local_68,0);
    lVar5 = 0;
    if (cVar4 != '\0') {
      FUN_1411ef135(&local_50,&local_78,param_1,0);
      lVar5 = 0;
      if (local_48 != '\0') {
        lVar5 = local_50;
      }
    }
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
    if (lVar5 != 0) goto LAB_1488031b8;
  }
  lVar5 = FUN_148802f38(param_1,param_3,1);
  if (lVar5 == 0) {
    lVar5 = FUN_145929270();
  }
LAB_1488031b8:
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148803210 FUN_148803210 body=204 status=ok
// SIG undefined FUN_148803210(void)

longlong FUN_148803210(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_1411f2994();
  lVar3 = *param_1;
  if (DAT_14cb751e0 != DAT_14cb7520c) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14cb75210;
    if (DAT_14cb75218 != (undefined *)0x0) {
      puVar7 = DAT_14cb75218;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14cb75220 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14cb751d8 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  lVar5 = DAT_14cb751d0;
  if (lVar3 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 148803310 FUN_148803310 body=442 status=ok
// SIG undefined FUN_148803310(void)

void FUN_148803310(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  byte bVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
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
  *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
  plVar1 = param_1 + 0x4f;
  plVar2 = param_1 + 0x51;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = plVar2;
  if ((int)param_1[0x54] == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar8 = (int)param_1[0x54];
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar8) || (uStack_60 != plVar2)) {
    do {
      lVar4 = *(longlong *)(*local_90 + 0x10 + (longlong)iStack_74 * 0x20);
      if (lVar4 != param_2 && lVar4 != 0) {
        puVar5 = (undefined8 *)FUN_144a06846(lVar4 + 0x48,param_1 + 0x5a);
        if (((byte *)*puVar5 != (byte *)0x0) &&
           (bVar3 = *(byte *)*puVar5, (bVar3 & 0x68) == 0 && (bVar3 & 3) != 0)) {
          uVar6 = FUN_140625082(puVar5,&DAT_14c9a12e0);
          lVar7 = FUN_144837648(param_1,uVar6,1);
          if (lVar7 == param_2) {
            (**(code **)(*param_1 + 0x420))(param_1,lVar4);
          }
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 ||
             ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar2 || iStack_74 != iVar8));
  }
  if (*(char *)((longlong)param_1 + 0xc9) == '\x01') {
    FUN_140ed1266(param_1,param_2);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488034cc FUN_1488034cc body=322 status=ok
// SIG undefined FUN_1488034cc(void)

undefined8 FUN_1488034cc(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 != 0) {
    FUN_144837e54(param_1,0);
    local_48 = DAT_14cb75690;
    local_50 = DAT_14cb75688;
    FUN_1448075d0(local_40);
    uVar2 = FUN_144a06846(param_1 + 0x48,local_40);
    FUN_140625082(uVar2,&DAT_14c9a12e0);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    local_48 = DAT_14cb756a8;
    local_50 = DAT_14cb756a0;
    FUN_1448075d0(local_40);
    uVar2 = FUN_144a06846(param_1 + 0x48,local_40);
    uVar2 = FUN_140625082(uVar2,&DAT_14c9a12e0);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    FUN_1447325ac(uVar2,local_40,1);
    lVar3 = FUN_148803714(local_40);
    if ((lVar3 != 0) && (pcVar1 = *(code **)(lVar3 + 0x40), pcVar1 != (code *)0x0)) {
      plVar4 = (longlong *)(lVar3 + 0x60);
      if (*(longlong **)(lVar3 + 0x50) != (longlong *)0x0) {
        plVar4 = *(longlong **)(lVar3 + 0x50);
      }
      uVar2 = (**(code **)(*plVar4 + 8))(plVar4);
      uVar2 = (*pcVar1)(uVar2);
      goto LAB_1488034e8;
    }
  }
  uVar2 = 0;
LAB_1488034e8:
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148803610 FUN_148803610 body=259 status=ok
// SIG undefined FUN_148803610(void)

longlong FUN_148803610(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong *plStack_70;
  longlong local_68 [3];
  longlong local_50;
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68[0] = 0;
  local_68[1] = 0;
  cVar4 = (**(code **)(*param_1 + 0x418))();
  if (cVar4 != '\0') {
    local_78 = 0;
    plStack_70 = (longlong *)0x0;
    cVar4 = FUN_1446e9750(param_1,&local_78,local_68,0);
    lVar5 = 0;
    if (cVar4 != '\0') {
      FUN_1411ef135(&local_50,&local_78,param_1,0);
      lVar5 = 0;
      if (local_48 != '\0') {
        lVar5 = local_50;
      }
    }
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
    if (lVar5 != 0) goto LAB_1488036c2;
  }
  lVar5 = FUN_1488034cc(param_3);
  if (lVar5 == 0) {
    lVar5 = FUN_1459292ae();
  }
LAB_1488036c2:
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148803714 FUN_148803714 body=204 status=ok
// SIG undefined FUN_148803714(void)

longlong FUN_148803714(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_1459c472c();
  lVar3 = *param_1;
  if (DAT_14cb755b0 != DAT_14cb755dc) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14cb755e0;
    if (DAT_14cb755e8 != (undefined *)0x0) {
      puVar7 = DAT_14cb755e8;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14cb755f0 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14cb755a8 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  lVar5 = DAT_14cb755a0;
  if (lVar3 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 148803818 FUN_148803818 body=40 status=ok
// SIG undefined FUN_148803818(void)

undefined8 FUN_148803818(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1458d1e62(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 148803840 FUN_148803840 body=76 status=ok
// SIG undefined FUN_148803840(void)

undefined8 FUN_148803840(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_1458d1e62(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x000148803881. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 1488038d8 FUN_1488038d8 body=40 status=ok
// SIG undefined FUN_1488038d8(void)

undefined8 FUN_1488038d8(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140fb40a6(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 148803900 FUN_148803900 body=76 status=ok
// SIG undefined FUN_148803900(void)

undefined8 FUN_148803900(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_140fb40a6(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x000148803941. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 14880395a FUN_14880395a body=38 status=ok
// SIG undefined FUN_14880395a(void)

void FUN_14880395a(longlong *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x8b8))();
  *(undefined4 *)(param_1 + 0x75) = uVar1;
  FUN_14587625a(param_1);
  return;
}



// FUNCTION 148803980 FUN_148803980 body=81 status=ok
// SIG undefined FUN_148803980(void)

void FUN_148803980(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_147c91c90();
  if (*(longlong *)(param_1 + 0x3a48) == 0) {
    return;
  }
  FUN_1488028fa(*(longlong *)(param_1 + 0x3a48),param_2,param_3,param_4);
  return;
}



// FUNCTION 1488039d2 FUN_1488039d2 body=103 status=ok
// SIG undefined FUN_1488039d2(void)

void FUN_1488039d2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = 0;
  uStack_10 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_40 = param_6;
  local_48 = 0;
  local_38 = param_2;
  local_20 = param_3;
  FUN_148803a3a(0,&local_38,&local_20);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148803a3a FUN_148803a3a body=521 status=ok
// SIG undefined FUN_148803a3a(void)

void FUN_148803a3a(longlong param_1,longlong *param_2,longlong *param_3,undefined4 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined1 local_80;
  undefined1 local_70 [8];
  undefined4 local_68;
  undefined8 local_60;
  undefined1 local_58 [8];
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 == 0) goto LAB_148803ab6;
  lVar4 = FUN_140ed3994();
  if ((lVar4 == 0) || (*(longlong *)(lVar4 + 0x448) == 0)) goto LAB_148803ab6;
  lVar5 = FUN_140183ac4();
  lVar4 = *(longlong *)(lVar4 + 0x448);
  if ((lVar4 == 0) ||
     ((((lVar5 == 0 || (lVar1 = *(longlong *)(lVar4 + 0x10), lVar1 == 0)) ||
       (*(int *)(lVar1 + 0x38) < *(int *)(lVar5 + 0x38))) ||
      (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
       lVar5 + 0x30)))) goto LAB_148803ab6;
  lVar5 = param_3[1];
  if (lVar5 == 0) {
    uVar6 = FUN_141263ab0();
    lVar5 = FUN_14477b664(uVar6);
    param_3[1] = lVar5;
  }
  if (((param_3[2] == 0) && (lVar5 != 0)) && (*param_3 != 0)) {
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if (plVar2 == (longlong *)0x0) {
LAB_148803c3c:
      lVar5 = 0;
    }
    else {
      cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
      if (cVar3 == '\0') goto LAB_148803c3c;
      uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar5 = FUN_144aff482(uVar6,param_3);
    }
    param_3[2] = lVar5;
  }
  FUN_144a79b68(local_58);
  local_50 = 0x7202;
  local_48 = 0;
  lVar5 = param_2[1];
  if (lVar5 == 0) {
    uVar6 = FUN_141263a76();
    lVar5 = FUN_14477b664(uVar6);
    param_2[1] = lVar5;
  }
  if (((param_2[2] == 0) && (lVar5 != 0)) && (*param_2 != 0)) {
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if (plVar2 == (longlong *)0x0) {
LAB_148803c40:
      lVar5 = 0;
    }
    else {
      cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
      if (cVar3 == '\0') goto LAB_148803c40;
      uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar5 = FUN_144aff482(uVar6,param_2);
    }
    param_2[2] = lVar5;
  }
  FUN_144a79b68(local_70);
  local_68 = 0x7201;
  local_60 = 0;
  local_80 = param_6;
  local_88 = 0;
  FUN_14129a79a(lVar4,local_70,local_58,param_4);
LAB_148803ab6:
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148803c44 FUN_148803c44 body=210 status=ok
// SIG undefined FUN_148803c44(void)

ulonglong * FUN_148803c44(ulonglong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  ulonglong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  *param_1 = (ulonglong)DAT_14c892e70;
  if (param_2 != 0) {
    lVar2 = FUN_140ed3994(param_2);
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x448) != 0)) {
      lVar3 = FUN_140183ac4();
      plVar1 = *(longlong **)(lVar2 + 0x448);
      if (((plVar1 != (longlong *)0x0) &&
          (((lVar3 != 0 && (lVar2 = plVar1[2], lVar2 != 0)) &&
           (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))))) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) {
        (**(code **)(*plVar1 + 0x890))(plVar1,local_38,param_2);
        *param_1 = local_38[0];
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148803d18 FUN_148803d18 body=121 status=ok
// SIG undefined FUN_148803d18(void)

void FUN_148803d18(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_1 != 0) {
    lVar3 = FUN_140ed3994();
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x448) != 0)) {
      lVar4 = FUN_140183ac4();
      lVar3 = *(longlong *)(lVar3 + 0x448);
      if (((lVar3 != 0) &&
          (((lVar4 != 0 && (lVar1 = *(longlong *)(lVar3 + 0x10), lVar1 != 0)) &&
           (*(int *)(lVar4 + 0x38) <= *(int *)(lVar1 + 0x38))))) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        lVar3 = *(longlong *)(lVar3 + 0x39d8);
        *(undefined8 *)(lVar3 + 0x58) = param_2[2];
        uVar2 = param_2[1];
        *(undefined8 *)(lVar3 + 0x48) = *param_2;
        *(undefined8 *)(lVar3 + 0x50) = uVar2;
      }
    }
  }
  return;
}



// FUNCTION 148803d92 FUN_148803d92 body=154 status=ok
// SIG undefined FUN_148803d92(void)

void FUN_148803d92(longlong param_1,double *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != 0) {
    lVar2 = FUN_140ed3994();
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x448) != 0)) {
      lVar3 = FUN_140183ac4();
      lVar2 = *(longlong *)(lVar2 + 0x448);
      if (((lVar2 != 0) &&
          (((lVar3 != 0 && (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 != 0)) &&
           (*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38))))) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) {
        lVar2 = *(longlong *)(lVar2 + 0x39d8);
        *(double *)(lVar2 + 0x48) = *param_2 + *(double *)(lVar2 + 0x48);
        *(double *)(lVar2 + 0x50) = param_2[1] + *(double *)(lVar2 + 0x50);
        *(double *)(lVar2 + 0x58) = param_2[2] + *(double *)(lVar2 + 0x58);
      }
    }
  }
  return;
}



// FUNCTION 148803e42 FUN_148803e42 body=129 status=ok
// SIG undefined FUN_148803e42(void)

void FUN_148803e42(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 *param_5,undefined1 param_6,undefined1 param_7)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined1 local_c;
  undefined1 local_b;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 100;
  local_1c = *param_5;
  uStack_18 = param_5[1];
  uStack_14 = param_5[2];
  uStack_10 = param_5[3];
  local_c = param_6;
  local_b = param_7;
  local_38 = 0;
  local_28 = param_2;
  local_24 = param_3;
  local_20 = param_4;
  FUN_140fa871e();
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148803f40 FUN_148803f40 body=194 status=ok
// SIG undefined FUN_148803f40(void)

void FUN_148803f40(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  
  if (*(int *)(param_1 + 0x3a60) != *(int *)(param_1 + 0x3a8c)) {
    lVar1 = *param_3;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar6 = (uint)lVar1 & 0xffff;
    lVar5 = param_1 + 0x3a90;
    if (*(longlong *)(param_1 + 15000) != 0) {
      lVar5 = *(longlong *)(param_1 + 15000);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x3aa0) - 1U &
                             (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar6) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        lVar5 = *(longlong *)(param_1 + 0x3a58) + (longlong)iVar4 * 0x3c;
        if (*(longlong *)(*(longlong *)(param_1 + 0x3a58) + (longlong)iVar4 * 0x3c) == lVar1) {
          if ((lVar5 + 8U & 0xfffffffffffffff7) != 0) {
            *param_2 = *(undefined4 *)(lVar5 + 0x2c);
            uVar3 = 1;
            goto LAB_148803f53;
          }
          break;
        }
        iVar4 = *(int *)(lVar5 + 0x34);
      } while (iVar4 != -1);
    }
  }
  uVar3 = 0;
LAB_148803f53:
  *(undefined1 *)(param_2 + 1) = uVar3;
  return;
}



// FUNCTION 148804002 FUN_148804002 body=87 status=ok
// SIG undefined FUN_148804002(void)

undefined8 * FUN_148804002(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140fadafc(&DAT_14cb75810);
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_14b0dd450;
  puVar1[5] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  FUN_144a5dc74(puVar1 + 6);
  *(undefined2 *)(puVar1 + 8) = 0;
  return puVar1;
}



// FUNCTION 14880405a FUN_14880405a body=44 status=ok
// SIG undefined FUN_14880405a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14880405a(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb7581c = _DAT_14cb7581c + -1;
  *param_1 = DAT_14cb75810;
  DAT_14cb75810 = param_1;
  return;
}



// FUNCTION 148804086 FUN_148804086 body=81 status=ok
// SIG undefined FUN_148804086(void)

void FUN_148804086(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_14b0dd450;
  param_1[5] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_144a5dc74(param_1 + 6);
  *(undefined2 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 148804100 FUN_148804100 body=69 status=ok
// SIG undefined FUN_148804100(void)

void FUN_148804100(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b3f1b70;
  param_1[3] = 0x4348000043fa0000;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffff8 | 2;
  return;
}



// FUNCTION 148804146 FUN_148804146 body=81 status=ok
// SIG undefined FUN_148804146(void)

void FUN_148804146(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b0ef120;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}



// FUNCTION 148804198 FUN_148804198 body=28 status=ok
// SIG undefined FUN_148804198(void)

void FUN_148804198(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  FUN_14589237c(param_1);
  return;
}



// FUNCTION 1488041ec FUN_1488041ec body=40 status=ok
// SIG undefined FUN_1488041ec(void)

undefined8 FUN_1488041ec(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_145876e0c(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 148804220 FUN_148804220 body=28 status=ok
// SIG undefined FUN_148804220(void)

void FUN_148804220(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  FUN_1459b4382(param_1);
  return;
}



// FUNCTION 14880423c FUN_14880423c body=142 status=ok
// SIG undefined FUN_14880423c(void)

void FUN_14880423c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong *_Dst;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  
  if (param_2 != 0) {
    uVar2 = *(uint *)(param_1 + 0x188);
    if (0 < (int)uVar2) {
      plVar1 = *(longlong **)(param_1 + 0x180);
      uVar5 = 0;
      _Dst = plVar1;
      do {
        if (*_Dst == param_2) {
          if (uVar2 - 1 != (int)uVar5) {
            iVar3 = (uVar2 - 1) - (int)uVar5;
            iVar4 = 1;
            if (iVar3 < 1) {
              iVar4 = iVar3;
            }
            memmove(_Dst,plVar1 + (ulonglong)(uVar2 - iVar4) * 3,(longlong)iVar4 * 0x18);
            uVar2 = *(uint *)(param_1 + 0x188);
          }
          *(uint *)(param_1 + 0x188) = uVar2 - 1;
          FUN_14880e0f2((longlong *)(param_1 + 0x180));
          return;
        }
        uVar5 = uVar5 + 1;
        _Dst = _Dst + 3;
      } while (uVar2 != uVar5);
    }
  }
  return;
}



// FUNCTION 148804302 FUN_148804302 body=40 status=ok
// SIG undefined FUN_148804302(void)

undefined8 FUN_148804302(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1410dea44(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 148804370 FUN_148804370 body=40 status=ok
// SIG undefined FUN_148804370(void)

undefined8 FUN_148804370(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_145894b8a(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 1488043d8 FUN_1488043d8 body=40 status=ok
// SIG undefined FUN_1488043d8(void)

undefined8 FUN_1488043d8(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1412573a8(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 14880440c FUN_14880440c body=169 status=ok
// SIG undefined FUN_14880440c(void)

void FUN_14880440c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = param_3;
  FUN_143cd9659(&local_30,"static UGbxCinematicFunctionLibrary::PushGlobalCinematicModeWithReason",
                param_1);
  if (local_30 != 0) {
    lVar3 = FUN_141306ba4("static UGbxCinematicFunctionLibrary::PushGlobalCinematicModeWithReason",
                          param_2);
    if (lVar3 != 0) {
      FUN_145d4f580(local_30,lVar3,&local_20);
    }
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488044b6 FUN_1488044b6 body=82 status=ok
// SIG undefined FUN_1488044b6(void)

void FUN_1488044b6(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  local_18 = *(undefined4 *)(param_2 + 1);
  local_10 = 0;
  FUN_14880440c(param_1,&local_20,0);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14880450a FUN_14880450a body=82 status=ok
// SIG undefined FUN_14880450a(void)

void FUN_14880450a(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  local_18 = *(undefined4 *)(param_2 + 1);
  local_10 = 0;
  FUN_1458d9478(param_1,&local_20,0);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14880455e FUN_14880455e body=135 status=ok
// SIG undefined FUN_14880455e(void)

void FUN_14880455e(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = param_2;
  FUN_143cd9659(&local_28,"static UGbxCinematicFunctionLibrary::PopGlobalCinematicModeWithReason",
                param_1);
  if (local_28 != 0) {
    FUN_14621c628(local_28,&local_18);
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488045e6 FUN_1488045e6 body=7 status=ok
// SIG undefined FUN_1488045e6(void)

void FUN_1488045e6(undefined8 param_1)

{
  FUN_14880455e(param_1,0);
  return;
}



// FUNCTION 1488045ee FUN_1488045ee body=90 status=ok
// SIG undefined FUN_1488045ee(void)

void FUN_1488045ee(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = 0;
  lVar1 = FUN_141306a67("static UGbxCinematicFunctionLibrary::PopPlayerCinematicModeWithReason",
                        param_1);
  if (lVar1 != 0) {
    FUN_14585d6a8(lVar1,&local_10);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14880464a FUN_14880464a body=134 status=ok
// SIG undefined FUN_14880464a(void)

void FUN_14880464a(undefined8 param_1)

{
  int *piVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_143cd9659(&local_28,"static UGbxCinematicFunctionLibrary::ClearGlobalCinematicMode",param_1);
  if (local_28 != 0) {
    FUN_1457eb59e();
  }
  if (local_20 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_20 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488046e2 FUN_1488046e2 body=42 status=ok
// SIG undefined FUN_1488046e2(void)

void FUN_1488046e2(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_141306a67("static UGbxCinematicFunctionLibrary::ClearPlayerCinematicMode",param_1);
  if (lVar1 != 0) {
    FUN_1487c4d9a(lVar1);
    return;
  }
  return;
}



// FUNCTION 148804734 FUN_148804734 body=154 status=ok
// SIG undefined FUN_148804734(void)

void FUN_148804734(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  float fVar3;
  
  fVar3 = DAT_14c758c60;
  if ((((*(float *)(param_1 + 4) != DAT_14c758c60) || (*(float *)(param_1 + 8) != DAT_14c758c60)) ||
      (*(float *)(param_1 + 0xc) != DAT_14c758c60)) ||
     (((NAN(*(float *)(param_1 + 0xc)) || NAN(DAT_14c758c60) || (*(float *)(param_1 + 0x10) != 0.0))
      || (NAN(*(float *)(param_1 + 0x10)))))) {
    uVar1 = *param_1;
    param_2[0x20] = 0;
    *param_2 = uVar1;
    *(undefined1 **)(param_2 + 4) = &DAT_3f8000003f800000;
    *(undefined4 *)(param_2 + 0xc) = 0;
    uVar2 = *(undefined8 *)(param_1 + 0xc);
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 4);
    *(undefined8 *)(param_2 + 0x18) = uVar2;
  }
  else {
    uVar1 = *param_1;
    param_2[0x20] = 0;
    *param_2 = uVar1;
    *(undefined8 *)(param_2 + 4) = 0;
    *(undefined4 *)(param_2 + 0xc) = 0;
    *(float *)(param_2 + 0x10) = fVar3;
    *(float *)(param_2 + 0x14) = fVar3;
    *(float *)(param_2 + 0x18) = fVar3;
    *(undefined4 *)(param_2 + 0x1c) = 0x3f800000;
  }
  param_2[0x21] = 1;
  return;
}



// FUNCTION 1488047f6 FUN_1488047f6 body=111 status=ok
// SIG undefined FUN_1488047f6(void)

undefined8 * FUN_1488047f6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1488048ca();
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *puVar1 = &PTR_FUN_14b021d90;
  puVar1[3] = 0x3f6666663f666666;
  *(undefined1 *)(puVar1 + 4) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0x3f00000044fa0000;
  *(undefined8 *)((longlong)puVar1 + 0x2c) = 0x3dcccccd3dcccccd;
  *(undefined8 *)((longlong)puVar1 + 0x34) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x3c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x44) = 0x42c8000041a00000;
  memset(puVar1 + 10,0,0x118);
  return puVar1;
}



// FUNCTION 148804886 FUN_148804886 body=40 status=ok
// SIG undefined FUN_148804886(void)

undefined8 FUN_148804886(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14592c318(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 1488048ca FUN_1488048ca body=113 status=ok
// SIG undefined FUN_1488048ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1488048ca(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar2 = DAT_14cb75e08;
  if (DAT_14cb75e08 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_140595974(0x1680,0);
    lVar4 = 0xf;
    puVar1 = puVar2;
    do {
      puVar3 = puVar1 + 0x2d;
      *puVar1 = puVar3;
      lVar4 = lVar4 + -1;
      puVar1 = puVar3;
    } while (lVar4 != 0);
    *puVar3 = DAT_14cb75e08;
    DAT_14cb75e10 = DAT_14cb75e10 + 0x10;
  }
  DAT_14cb75e08 = (undefined8 *)*puVar2;
  _DAT_14cb75e14 = _DAT_14cb75e14 + 1;
  return;
}



// FUNCTION 14880493c FUN_14880493c body=44 status=ok
// SIG undefined FUN_14880493c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14880493c(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb75e14 = _DAT_14cb75e14 + -1;
  *param_1 = DAT_14cb75e08;
  DAT_14cb75e08 = param_1;
  return;
}



// FUNCTION 148804968 FUN_148804968 body=116 status=ok
// SIG undefined FUN_148804968(void)

void FUN_148804968(undefined8 *param_1)

{
  (**(code **)*param_1)();
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b021d90;
  param_1[3] = 0x3f6666663f666666;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0x3f00000044fa0000;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x3dcccccd3dcccccd;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0x42c8000041a00000;
  memset(param_1 + 10,0,0x118);
  return;
}



// FUNCTION 148804a08 FUN_148804a08 body=206 status=ok
// SIG undefined FUN_148804a08(void)

float FUN_148804a08(longlong param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = 1.0;
  if (((*(byte *)(param_1 + 0x1bb4) & 1) != 0) &&
     (fVar2 = 1.0, 1e-08 < ABS(*(float *)(param_1 + 0x1bc8)))) {
    iVar1 = 1;
    if (1 < *(int *)(param_1 + 0x1bd0)) {
      iVar1 = *(int *)(param_1 + 0x1bd0);
    }
    fVar2 = (float)iVar1;
  }
  fVar4 = (*(float *)(param_1 + 0x1bc8) / fVar2) * 0.017453292;
  fVar2 = *(float *)(param_1 + 0x1bcc);
  fVar3 = cosf(fVar4);
  fVar2 = (1.0 - fVar3) * fVar2;
  fVar3 = *(float *)(param_1 + 0x1bcc);
  fVar4 = sinf(fVar4);
  fVar4 = fVar4 * fVar3;
  return SQRT(fVar4 * fVar4 + fVar2 * fVar2) * 0.5;
}



// FUNCTION 148804ad6 FUN_148804ad6 body=277 status=ok
// SIG undefined FUN_148804ad6(void)

bool FUN_148804ad6(longlong param_1,longlong *param_2)

{
  undefined1 auStack_e8 [40];
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_90;
  double local_88;
  double local_80;
  undefined1 local_78 [24];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  (**(code **)(*param_2 + 0x578))(param_2,&local_90);
  FUN_148804bec(param_1 + -0x1a58,&local_a8,(float)local_80);
  (**(code **)(*param_2 + 0x578))(param_2,local_78);
  FUN_148804eda(param_1 + -0x1a58,&local_c0,local_78);
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return (local_80 - local_80) * local_b0 +
           (local_90 - local_a8) * local_c0 + (local_88 - local_a0) * local_b8 < 0.0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148804bec FUN_148804bec body=370 status=ok
// SIG undefined FUN_148804bec(void)

double * FUN_148804bec(longlong param_1,double *param_2,float param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_e8 [40];
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  undefined1 local_90 [16];
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_148804d60(param_1,&local_78);
  FUN_148804e16(param_1,local_90);
  (**(code **)(*(longlong *)(param_1 + 0x1a58) + 0x30))(param_1 + 0x1a58,&local_a8);
  dVar1 = (double)param_3;
  if (local_80 <= (double)param_3) {
    dVar1 = local_80;
  }
  if (dVar1 <= local_68) {
    dVar1 = local_68;
  }
  dVar2 = (double)(float)(((double)(float)dVar1 - local_68) / local_98);
  FUN_148804eda(param_1,&local_c0,&local_78);
  dVar3 = (double)*(float *)(param_1 + 0x1bb0);
  *param_2 = (double)(float)(local_a8 * dVar2 + local_78) - dVar3 * local_c0;
  param_2[1] = (double)(float)(dVar2 * local_a0 + local_70) - local_b8 * dVar3;
  param_2[2] = (double)(float)dVar1 - local_b0 * dVar3;
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148804d60 FUN_148804d60 body=180 status=ok
// SIG undefined FUN_148804d60(void)

double * FUN_148804d60(longlong param_1,double *param_2)

{
  float fVar1;
  double dVar2;
  undefined1 auStack_78 [32];
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148805c5e(param_1,&local_40);
  (**(code **)(*(longlong *)(param_1 + 0x1a58) + 0x30))(param_1 + 0x1a58,&local_58);
  fVar1 = (float)FUN_140c9d7f4(param_1);
  dVar2 = (double)fVar1;
  *param_2 = local_40 - dVar2 * local_58;
  param_2[1] = local_38 - local_50 * dVar2;
  param_2[2] = local_30 - local_48 * dVar2;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148804e16 FUN_148804e16 body=194 status=ok
// SIG undefined FUN_148804e16(void)

double * FUN_148804e16(longlong param_1,double *param_2)

{
  double dVar1;
  undefined1 auStack_68 [32];
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148805c5e(param_1,&local_30);
  (**(code **)(*(longlong *)(param_1 + 0x1a58) + 0x30))(param_1 + 0x1a58,&local_48);
  dVar1 = 0.0;
  if ((*(byte *)(param_1 + 0x1a7c) & 1) != 0) {
    dVar1 = (double)((float)*(int *)(param_1 + 0x1bbc) * *(float *)(param_1 + 0x1b20) + 0.0);
  }
  *param_2 = dVar1 * local_48 + local_30;
  param_2[1] = local_40 * dVar1 + local_28;
  param_2[2] = local_38 * dVar1 + local_20;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148804eda FUN_148804eda body=853 status=ok
// SIG undefined FUN_148804eda(void)

undefined1 (*) [16] FUN_148804eda(longlong param_1,undefined1 (*param_2) [16],double *param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  int iVar9;
  double dVar10;
  double *pdVar11;
  uint uVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  double dVar18;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  double local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  double local_58;
  double local_50;
  
  dVar10 = (double)(DAT_14c707940 ^ (ulonglong)auStack_a8);
  lVar1 = *(longlong *)(param_1 + 0x1c8);
  local_50 = dVar10;
  if (lVar1 == 0) {
    local_58 = DAT_14c846508;
    uStack_60 = (undefined4)DAT_14c846500;
    uStack_5c = DAT_14c846500._4_4_;
  }
  else {
    dVar3 = *(double *)(lVar1 + 0x240);
    dVar14 = *(double *)(lVar1 + 0x248);
    dVar18 = *(double *)(lVar1 + 0x250);
    dVar15 = *(double *)(lVar1 + 600);
    pdVar11 = *(double **)(lVar1 + 0x228);
    lVar13 = param_1;
    local_88 = dVar3;
    uStack_80 = dVar14;
    local_78 = dVar18;
    uStack_70 = dVar15;
    if (pdVar11 == (double *)0x0) {
      lVar13 = 0x40;
      pdVar11 = (double *)FUN_14001cc68(0x40,0x10);
      dVar10 = DAT_14c8463d8;
      *pdVar11 = DAT_14c8463d0;
      pdVar11[1] = dVar10;
      dVar10 = DAT_14c8463e8;
      pdVar11[2] = DAT_14c8463e0;
      pdVar11[3] = dVar10;
      dVar10 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
      pdVar11[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
      pdVar11[5] = dVar10;
      dVar10 = DAT_14c846508;
      pdVar11[6] = DAT_14c846508;
      *(double **)(lVar1 + 0x228) = pdVar11;
    }
    auVar6._8_4_ = (int)-(ulonglong)(dVar14 != pdVar11[1]);
    auVar6._0_8_ = -(ulonglong)(dVar3 != *pdVar11);
    auVar6._12_4_ = (int)(-(ulonglong)(dVar14 != pdVar11[1]) >> 0x20);
    iVar9 = movmskpd(SUB84(dVar10,0),auVar6);
    auVar7._8_4_ = (int)-(ulonglong)(dVar15 != pdVar11[3]);
    auVar7._0_8_ = -(ulonglong)(dVar18 != pdVar11[2]);
    auVar7._12_4_ = (int)(-(ulonglong)(dVar15 != pdVar11[3]) >> 0x20);
    uVar12 = movmskpd((int)lVar13,auVar7);
    if ((uVar12 & 0x3fffffff) != 0 || iVar9 != 0) {
      *(undefined4 *)(pdVar11 + 2) = (undefined4)local_78;
      *(undefined4 *)((longlong)pdVar11 + 0x14) = local_78._4_4_;
      *(undefined4 *)(pdVar11 + 3) = (undefined4)uStack_70;
      *(undefined4 *)((longlong)pdVar11 + 0x1c) = uStack_70._4_4_;
      *(undefined4 *)pdVar11 = (undefined4)local_88;
      *(undefined4 *)((longlong)pdVar11 + 4) = local_88._4_4_;
      *(undefined4 *)(pdVar11 + 1) = (undefined4)uStack_80;
      *(undefined4 *)((longlong)pdVar11 + 0xc) = uStack_80._4_4_;
      FUN_1448052ee(&local_88,&local_68);
      pdVar11[6] = local_58;
      pdVar11[4] = local_68;
      pdVar11[5] = (double)CONCAT44(uStack_5c,uStack_60);
    }
    local_58 = pdVar11[6];
    uStack_60 = *(undefined4 *)(pdVar11 + 5);
    uStack_5c = *(undefined4 *)((longlong)pdVar11 + 0x2c);
  }
  local_68 = 0.0;
  FUN_144a76660(&local_68,&local_88);
  dVar14 = -local_78;
  dVar3 = -uStack_80;
  dVar10 = -local_88;
  auVar4._8_4_ = SUB84(uStack_80,0);
  auVar4._0_8_ = dVar10;
  auVar4._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *param_2 = auVar4;
  *(double *)param_2[1] = dVar14;
  if (((*(byte *)(param_1 + 0x1bb4) & 1) != 0) && (1e-08 < ABS(*(float *)(param_1 + 0x1bc8)))) {
    FUN_1488056ac(param_1,&local_88);
    dVar18 = uStack_80 - param_3[1];
    dVar3 = local_88 - *param_3;
    dVar15 = dVar3 * dVar3 + dVar18 * dVar18;
    if ((dVar15 != 1.0) || (NAN(dVar15))) {
      dVar14 = DAT_14c8464f0;
      dVar8 = DAT_14c8464e8;
      dVar10 = DAT_14c8464e0;
      if (9.99999993922529e-09 <= dVar15) {
        dVar14 = 0.0;
        dVar8 = dVar18 * (1.0 / SQRT(dVar15));
        dVar10 = dVar3 * (1.0 / SQRT(dVar15));
      }
    }
    else {
      dVar14 = (double)(-(ulonglong)(local_78 - param_3[2] == 0.0) &
                       (ulonglong)(local_78 - param_3[2]));
      dVar8 = dVar18;
      dVar10 = dVar3;
    }
    *(double *)*param_2 = dVar10;
    *(double *)(*param_2 + 8) = dVar8;
    *(double *)param_2[1] = dVar14;
    dVar3 = dVar8;
    if ((((*(byte *)(param_1 + 0x1bb4) & 1) != 0) && (1e-08 < ABS(*(float *)(param_1 + 0x1bc8)))) &&
       (*(float *)(param_1 + 0x1bc8) < 0.0)) {
      dVar14 = -dVar14;
      dVar3 = -dVar8;
      dVar10 = -dVar10;
      auVar5._8_4_ = SUB84(dVar8,0);
      auVar5._0_8_ = dVar10;
      auVar5._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      *param_2 = auVar5;
      *(double *)param_2[1] = dVar14;
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x1c8);
  if (lVar1 == 0) {
    dVar18 = 1.0;
    dVar15 = 1.0;
    uVar16 = 0;
    uVar17 = 0x3ff00000;
  }
  else {
    dVar18 = *(double *)(lVar1 + 0x280);
    dVar15 = *(double *)(lVar1 + 0x288);
    uVar16 = (undefined4)*(undefined8 *)(lVar1 + 0x290);
    uVar17 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x290) >> 0x20);
  }
  if (dVar15 * dVar18 * (double)CONCAT44(uVar17,uVar16) < 0.0) {
    auVar2._8_4_ = SUB84(dVar3,0);
    auVar2._0_8_ = -dVar10;
    auVar2._12_4_ = (uint)((ulonglong)dVar3 >> 0x20) ^ 0x80000000;
    *param_2 = auVar2;
    *(double *)param_2[1] = -dVar14;
  }
  if (((ulonglong)local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148805230 FUN_148805230 body=110 status=ok
// SIG undefined FUN_148805230(void)

float FUN_148805230(longlong param_1,longlong param_2)

{
  longlong lVar1;
  double dVar2;
  float fVar3;
  
  fVar3 = 0.0;
  if (((*(byte *)(param_1 + 0x1bb4) & 1) != 0) && (1e-08 < ABS(*(float *)(param_1 + 0x1bc8)))) {
    lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x1f0) + 0x438);
    dVar2 = *(double *)(lVar1 + 0x280);
    if (*(double *)(lVar1 + 0x288) <= *(double *)(lVar1 + 0x280)) {
      dVar2 = *(double *)(lVar1 + 0x288);
    }
    fVar3 = (float)dVar2 * *(float *)(lVar1 + 0x644);
    if (*(float *)(param_1 + 0x1bc8) < 0.0) {
      return *(float *)(param_1 + 0x1bcc) - fVar3;
    }
    fVar3 = *(float *)(param_1 + 0x1bcc) + fVar3;
  }
  return fVar3;
}



// FUNCTION 14880529e FUN_14880529e body=1037 status=ok
// SIG undefined FUN_14880529e(void)

undefined1 (*) [16] FUN_14880529e(longlong param_1,undefined1 (*param_2) [16],double *param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  double dVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar8;
  double dVar9;
  double *pdVar10;
  uint uVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  double local_78;
  double local_70;
  
  dVar9 = (double)(DAT_14c707940 ^ (ulonglong)auStack_c8);
  lVar1 = *(longlong *)(param_1 + 0x1c8);
  local_70 = dVar9;
  if (lVar1 == 0) {
    local_78 = DAT_14c846508;
    local_88 = (undefined4)DAT_14c8464f8;
    uStack_84 = DAT_14c8464f8._4_4_;
    uStack_80 = (undefined4)DAT_14c846500;
    uStack_7c = DAT_14c846500._4_4_;
  }
  else {
    dVar3 = *(double *)(lVar1 + 0x240);
    dVar15 = *(double *)(lVar1 + 0x248);
    dVar16 = *(double *)(lVar1 + 0x250);
    dVar17 = *(double *)(lVar1 + 600);
    pdVar10 = *(double **)(lVar1 + 0x228);
    lVar12 = param_1;
    local_a8 = dVar3;
    uStack_a0 = dVar15;
    local_98 = dVar16;
    uStack_90 = dVar17;
    if (pdVar10 == (double *)0x0) {
      lVar12 = 0x40;
      pdVar10 = (double *)FUN_14001cc68(0x40,0x10);
      dVar9 = DAT_14c8463d8;
      *pdVar10 = DAT_14c8463d0;
      pdVar10[1] = dVar9;
      dVar9 = DAT_14c8463e8;
      pdVar10[2] = DAT_14c8463e0;
      pdVar10[3] = dVar9;
      dVar9 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
      pdVar10[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
      pdVar10[5] = dVar9;
      dVar9 = DAT_14c846508;
      pdVar10[6] = DAT_14c846508;
      *(double **)(lVar1 + 0x228) = pdVar10;
    }
    auVar6._8_4_ = (int)-(ulonglong)(dVar15 != pdVar10[1]);
    auVar6._0_8_ = -(ulonglong)(dVar3 != *pdVar10);
    auVar6._12_4_ = (int)(-(ulonglong)(dVar15 != pdVar10[1]) >> 0x20);
    iVar8 = movmskpd(SUB84(dVar9,0),auVar6);
    auVar7._8_4_ = (int)-(ulonglong)(dVar17 != pdVar10[3]);
    auVar7._0_8_ = -(ulonglong)(dVar16 != pdVar10[2]);
    auVar7._12_4_ = (int)(-(ulonglong)(dVar17 != pdVar10[3]) >> 0x20);
    uVar11 = movmskpd((int)lVar12,auVar7);
    if ((uVar11 & 0x3fffffff) != 0 || iVar8 != 0) {
      *(undefined4 *)(pdVar10 + 2) = (undefined4)local_98;
      *(undefined4 *)((longlong)pdVar10 + 0x14) = local_98._4_4_;
      *(undefined4 *)(pdVar10 + 3) = (undefined4)uStack_90;
      *(undefined4 *)((longlong)pdVar10 + 0x1c) = uStack_90._4_4_;
      *(undefined4 *)pdVar10 = (undefined4)local_a8;
      *(undefined4 *)((longlong)pdVar10 + 4) = local_a8._4_4_;
      *(undefined4 *)(pdVar10 + 1) = (undefined4)uStack_a0;
      *(undefined4 *)((longlong)pdVar10 + 0xc) = uStack_a0._4_4_;
      FUN_1448052ee(&local_a8,&local_88);
      pdVar10[6] = local_78;
      pdVar10[4] = (double)CONCAT44(uStack_84,local_88);
      pdVar10[5] = (double)CONCAT44(uStack_7c,uStack_80);
    }
    local_78 = pdVar10[6];
    local_88 = *(undefined4 *)(pdVar10 + 4);
    uStack_84 = *(undefined4 *)((longlong)pdVar10 + 0x24);
    uStack_80 = *(undefined4 *)(pdVar10 + 5);
    uStack_7c = *(undefined4 *)((longlong)pdVar10 + 0x2c);
  }
  FUN_144a7484c(&local_88,&local_a8);
  dVar16 = local_98 - local_a8 * 0.0;
  dVar17 = local_a8 * 0.0 - uStack_a0;
  dVar9 = uStack_a0 * 0.0 + local_98 * -0.0;
  dVar17 = dVar17 + dVar17;
  dVar16 = dVar16 + dVar16;
  dVar9 = dVar9 + dVar9;
  dVar3 = (local_a8 * dVar16 - dVar9 * uStack_a0) + uStack_90 * dVar17 + 0.0;
  dVar15 = (local_98 * dVar9 - dVar17 * local_a8) + uStack_90 * dVar16 + 0.0;
  dVar9 = (uStack_a0 * dVar17 - dVar16 * local_98) + dVar9 * uStack_90 + 1.0;
  *(double *)*param_2 = dVar9;
  *(double *)(*param_2 + 8) = dVar15;
  *(double *)param_2[1] = dVar3;
  if (((*(byte *)(param_1 + 0x1bb4) & 1) != 0) && (1e-08 < ABS(*(float *)(param_1 + 0x1bc8)))) {
    FUN_1488056ac(param_1,&local_a8);
    dVar16 = param_3[1] - uStack_a0;
    dVar9 = *param_3 - local_a8;
    dVar3 = dVar9 * dVar9 + dVar16 * dVar16;
    if ((dVar3 != 1.0) || (NAN(dVar3))) {
      if (9.99999993922529e-09 <= dVar3) {
        dVar16 = dVar16 * (1.0 / SQRT(dVar3));
        dVar9 = dVar9 * (1.0 / SQRT(dVar3));
        uVar13 = 0;
        uVar14 = 0;
      }
      else {
        uVar13 = (undefined4)DAT_14c8464f0;
        uVar14 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
        dVar16 = DAT_14c8464e8;
        dVar9 = DAT_14c8464e0;
      }
    }
    else {
      uVar4 = -(ulonglong)(param_3[2] - local_98 == 0.0) & (ulonglong)(param_3[2] - local_98);
      uVar13 = (undefined4)uVar4;
      uVar14 = (undefined4)(uVar4 >> 0x20);
    }
    *(double *)*param_2 = dVar9;
    *(double *)(*param_2 + 8) = dVar16;
    dVar3 = (double)CONCAT44(uVar14,uVar13);
    *(double *)param_2[1] = dVar3;
    dVar15 = dVar16;
    if ((((*(byte *)(param_1 + 0x1bb4) & 1) != 0) && (1e-08 < ABS(*(float *)(param_1 + 0x1bc8)))) &&
       (*(float *)(param_1 + 0x1bc8) < 0.0)) {
      dVar3 = -(double)CONCAT44(uVar14,uVar13);
      dVar15 = -dVar16;
      dVar9 = -dVar9;
      auVar5._8_4_ = SUB84(dVar16,0);
      auVar5._0_8_ = dVar9;
      auVar5._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
      *param_2 = auVar5;
      *(double *)param_2[1] = dVar3;
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x1c8);
  if (lVar1 == 0) {
    dVar16 = 1.0;
    dVar17 = 1.0;
    uVar13 = 0;
    uVar14 = 0x3ff00000;
  }
  else {
    dVar16 = *(double *)(lVar1 + 0x280);
    dVar17 = *(double *)(lVar1 + 0x288);
    uVar13 = (undefined4)*(undefined8 *)(lVar1 + 0x290);
    uVar14 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x290) >> 0x20);
  }
  if (dVar17 * dVar16 * (double)CONCAT44(uVar14,uVar13) < 0.0) {
    auVar2._8_4_ = SUB84(dVar15,0);
    auVar2._0_8_ = -dVar9;
    auVar2._12_4_ = (uint)((ulonglong)dVar15 >> 0x20) ^ 0x80000000;
    *param_2 = auVar2;
    *(double *)param_2[1] = -dVar3;
  }
  if (((ulonglong)local_70 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488056ac FUN_1488056ac body=1348 status=ok
// SIG undefined FUN_1488056ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_1488056ac(longlong param_1,double *param_2)

{
  double *pdVar1;
  float fVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double *pdVar8;
  int iVar9;
  uint uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar18;
  undefined1 auVar17 [16];
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  double dVar22;
  undefined1 auStack_278 [32];
  undefined1 local_258 [32];
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [16];
  double local_188;
  undefined8 uStack_180;
  undefined1 local_178 [16];
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 uStack_140;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_d8;
  double dStack_d0;
  double local_c8;
  ulonglong local_b0;
  
  auVar17 = _DAT_149934d80;
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_278;
  if (((*(byte *)(param_1 + 0x1bb4) & 1) == 0) || (ABS(*(float *)(param_1 + 0x1bc8)) <= 1e-08)) {
    lVar3 = *(longlong *)(param_1 + 0x1c8);
    if (lVar3 == 0) {
      param_2[2] = DAT_14c8464f0;
      dVar11 = DAT_14c8464e8;
      *param_2 = DAT_14c8464e0;
      param_2[1] = dVar11;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_b0 ^ (ulonglong)auStack_278);
    }
    dVar11 = *(double *)(lVar3 + 0x268);
    *param_2 = *(double *)(lVar3 + 0x260);
    param_2[1] = dVar11;
    param_2[2] = *(double *)(lVar3 + 0x270);
  }
  else {
    fVar2 = *(float *)(param_1 + 0x1bcc);
    uVar10 = -(uint)(*(float *)(param_1 + 0x1bc8) < 0.0);
    dVar11 = (double)(float)(~uVar10 & (uint)-fVar2 | (uint)fVar2 & uVar10);
    pdVar1 = (double *)(*(longlong *)(param_1 + 0x1c8) + 0x240);
    pdVar8 = (double *)&DAT_14c846480;
    if (*(longlong *)(param_1 + 0x1c8) != 0) {
      pdVar8 = pdVar1;
    }
    auVar15 = *(undefined1 (*) [16])(pdVar8 + 8);
    dVar14 = auVar15._0_8_;
    dVar6 = auVar15._8_8_;
    dVar5 = SUB168(*(undefined1 (*) [16])(pdVar8 + 10),0);
    auVar15 = minpd(_DAT_149934d80,auVar15);
    auVar21 = minpd(ZEXT816(0x3ff0000000000000),*(undefined1 (*) [16])(pdVar8 + 10));
    auVar16._8_8_ = -(ulonglong)(auVar15._8_8_ < 0.0);
    auVar16._0_8_ = -(ulonglong)(auVar15._0_8_ < 0.0);
    iVar9 = movmskpd((int)pdVar1,auVar16);
    auVar15._8_8_ = -(ulonglong)(auVar21._8_8_ < 0.0);
    auVar15._0_8_ = -(ulonglong)(auVar21._0_8_ < 0.0);
    uVar10 = movmskpd((int)param_2,auVar15);
    if ((uVar10 & 0x3fffffff) == 0 && iVar9 == 0) {
      dVar4 = *pdVar8;
      dVar7 = pdVar8[1];
      dVar18 = pdVar8[2];
      dVar13 = pdVar8[3];
      dVar14 = dVar14 * dVar11;
      dVar6 = dVar6 * (double)(fVar2 * 0.5);
      dVar5 = dVar5 * 0.0;
      dVar12 = dVar6 * dVar4 - dVar14 * dVar7;
      dVar19 = dVar5 * dVar7 - dVar6 * dVar18;
      dVar11 = dVar14 * dVar18 - dVar5 * dVar4;
      dVar19 = dVar19 + dVar19;
      dVar11 = dVar11 + dVar11;
      dVar12 = dVar12 + dVar12;
      local_d8 = (dVar12 * dVar7 - dVar18 * dVar11) + dVar13 * dVar19 + dVar14 + pdVar8[4];
      dStack_d0 = (dVar19 * dVar18 - dVar12 * dVar4) + pdVar8[3] * dVar11 + dVar6 + pdVar8[5];
      local_c8 = (dVar11 * dVar4 - dVar7 * dVar19) + dVar13 * dVar12 + dVar5 + pdVar8[6];
    }
    else {
      dVar7 = *pdVar8;
      dVar12 = pdVar8[1];
      dVar4 = pdVar8[2];
      dVar18 = dVar12 + dVar12;
      dVar19 = dVar4 + dVar4;
      dVar13 = dVar7 * (dVar7 + dVar7);
      local_1b8 = ((double)DAT_149934d80 - (dVar4 * dVar19 + dVar12 * dVar18)) * dVar14;
      dVar4 = (DAT_149934d80._8_8_ - (dVar4 * dVar19 + dVar13)) * dVar6;
      local_168 = (1.0 - (dVar13 + dVar12 * dVar18)) * dVar5;
      dVar13 = pdVar8[3];
      dVar20 = dVar19 * dVar13;
      dVar22 = (dVar7 + dVar7) * pdVar8[3];
      dVar13 = dVar18 * dVar13;
      dStack_1b0 = (dVar18 * dVar7 + dVar20) * dVar14;
      local_188 = (dVar19 * dVar12 + dVar22) * dVar6;
      dVar12 = (dVar19 * dVar12 - dVar22) * dVar5;
      local_1a8 = (*pdVar8 * dVar19 - dVar13) * dVar14;
      uStack_1a0 = 0;
      local_198._8_4_ = SUB84(dVar4,0);
      local_198._0_8_ = (dVar18 * dVar7 - dVar20) * dVar6;
      local_198._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      uStack_180 = 0;
      local_178._8_4_ = SUB84(dVar12,0);
      local_178._0_8_ = (dVar13 + *pdVar8 * dVar19) * dVar5;
      local_178._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      uStack_160 = 0;
      local_158 = pdVar8[4];
      dStack_150 = pdVar8[5];
      local_148 = pdVar8[6];
      uStack_140 = 0x3ff0000000000000;
      local_238 = 0x3ff0000000000000;
      uStack_230 = 0;
      local_228 = 0;
      uStack_220 = 0;
      local_218 = 0;
      uStack_210 = 0x3ff0000000000000;
      local_208 = 0;
      uStack_200 = 0;
      local_1f8 = 0;
      uStack_1f0 = 0;
      local_1e8 = 0x3ff0000000000000;
      uStack_1e0 = 0;
      local_1c8 = 0;
      uStack_1c0 = 0x3ff0000000000000;
      local_1d8 = dVar11;
      dStack_1d0 = (double)(fVar2 * 0.5);
      FUN_1447fea8d(&local_138);
      FUN_144a1c686(&local_138,0x3e45798ee0000000);
      auVar21._8_8_ = -(ulonglong)(0.0 <= dVar6);
      auVar21._0_8_ = -(ulonglong)(0.0 <= dVar14);
      auVar17 = blendvpd(_DAT_149936790,auVar17,auVar21);
      dVar11 = (double)(~-(ulonglong)(0.0 <= dVar5) & 0xbff0000000000000 |
                       (ulonglong)((uint)(-(ulonglong)(0.0 <= dVar5) >> 0x20) & 0x3ff00000) << 0x20)
      ;
      dVar14 = auVar17._0_8_;
      local_128 = local_128 * dVar14;
      local_130 = local_130 * dVar14;
      local_138 = local_138 * dVar14;
      dVar14 = auVar17._8_8_;
      local_108 = local_108 * dVar14;
      local_110 = local_110 * dVar14;
      local_118 = dVar14 * local_118;
      local_e8 = local_e8 * dVar11;
      local_f0 = local_f0 * dVar11;
      local_f8 = dVar11 * local_f8;
      FUN_14481fd10(local_258,&local_138);
    }
    *param_2 = local_d8;
    param_2[1] = dStack_d0;
    param_2[2] = local_c8;
  }
  if ((local_b0 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148805bf6 FUN_148805bf6 body=102 status=ok
// SIG undefined FUN_148805bf6(void)

undefined8 FUN_148805bf6(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_3 + 0x578))(param_3,local_38);
  FUN_14880529e(param_1 + -0x1a58,param_2,local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148805c5e FUN_148805c5e body=1471 status=ok
// SIG undefined FUN_148805c5e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_148805c5e(longlong param_1,double *param_2)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double *pdVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  float fVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  double dVar25;
  double dVar26;
  undefined1 auStack_288 [32];
  undefined1 local_268 [32];
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 uStack_150;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_c0;
  double *pdVar12;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_288;
  if (((*(byte *)(param_1 + 0x1bb4) & 1) == 0) || (ABS(*(float *)(param_1 + 0x1bc8)) <= 1e-08)) {
    lVar1 = *(longlong *)(param_1 + 0x1c8);
    if (lVar1 == 0) {
      param_2[2] = DAT_14c8464f0;
      dVar21 = DAT_14c8464e8;
      *param_2 = DAT_14c8464e0;
      param_2[1] = dVar21;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_c0 ^ (ulonglong)auStack_288);
    }
    dVar21 = *(double *)(lVar1 + 0x268);
    *param_2 = *(double *)(lVar1 + 0x260);
    param_2[1] = dVar21;
    param_2[2] = *(double *)(lVar1 + 0x270);
  }
  else {
    pdVar12 = param_2;
    fVar13 = cosf(*(float *)(param_1 + 0x1bc8) * 0.5 * 0.017453292);
    uVar10 = SUB84(pdVar12,0);
    fVar14 = sinf(*(float *)(param_1 + 0x1bc8) * 0.5 * 0.017453292);
    dVar15 = (double)*(float *)(param_1 + 0x1bcc);
    dVar21 = dVar15 * 0.0 + 0.0;
    dVar16 = (double)(*(float *)(param_1 + 0x1bcc) * 0.5) - (double)(1.0 - fVar13) * dVar15;
    dVar15 = 0.0 - (double)fVar14 * dVar15;
    pdVar12 = (double *)(*(longlong *)(param_1 + 0x1c8) + 0x240);
    pdVar8 = (double *)&DAT_14c846480;
    if (*(longlong *)(param_1 + 0x1c8) != 0) {
      pdVar8 = pdVar12;
    }
    auVar18 = *(undefined1 (*) [16])(pdVar8 + 8);
    dVar2 = auVar18._0_8_;
    dVar3 = auVar18._8_8_;
    dVar26 = SUB168(*(undefined1 (*) [16])(pdVar8 + 10),0);
    auVar18 = minpd(_DAT_149934d80,auVar18);
    auVar24 = minpd(ZEXT816(0x3ff0000000000000),*(undefined1 (*) [16])(pdVar8 + 10));
    auVar19._8_8_ = -(ulonglong)(auVar18._8_8_ < 0.0);
    auVar19._0_8_ = -(ulonglong)(auVar18._0_8_ < 0.0);
    iVar9 = movmskpd((int)pdVar12,auVar19);
    auVar18._8_8_ = -(ulonglong)(auVar24._8_8_ < 0.0);
    auVar18._0_8_ = -(ulonglong)(auVar24._0_8_ < 0.0);
    uVar11 = movmskpd(uVar10,auVar18);
    if ((uVar11 & 0x3fffffff) == 0 && iVar9 == 0) {
      dVar4 = *pdVar8;
      dVar5 = pdVar8[1];
      dVar6 = pdVar8[2];
      dVar17 = pdVar8[3];
      dVar2 = dVar2 * dVar15;
      dVar3 = dVar3 * dVar16;
      dVar21 = dVar21 * dVar26;
      dVar15 = dVar3 * dVar4 - dVar2 * dVar5;
      dVar16 = dVar21 * dVar5 - dVar3 * dVar6;
      dVar26 = dVar2 * dVar6 - dVar21 * dVar4;
      dVar16 = dVar16 + dVar16;
      dVar26 = dVar26 + dVar26;
      dVar15 = dVar15 + dVar15;
      local_e8 = (dVar15 * dVar5 - dVar6 * dVar26) + dVar17 * dVar16 + dVar2 + pdVar8[4];
      dStack_e0 = (dVar16 * dVar6 - dVar15 * dVar4) + pdVar8[3] * dVar26 + dVar3 + pdVar8[5];
      local_d8 = (dVar26 * dVar4 - dVar5 * dVar16) + dVar17 * dVar15 + dVar21 + pdVar8[6];
    }
    else {
      dVar5 = *pdVar8;
      dVar6 = pdVar8[1];
      dVar7 = pdVar8[2];
      dVar20 = dVar6 + dVar6;
      dVar22 = dVar7 + dVar7;
      dVar17 = dVar5 * (dVar5 + dVar5);
      dStack_1a0 = (DAT_149934d80._8_8_ - (dVar7 * dVar22 + dVar17)) * dVar3;
      local_178 = (1.0 - (dVar17 + dVar6 * dVar20)) * dVar26;
      dVar17 = pdVar8[3];
      dVar23 = dVar22 * dVar17;
      dVar25 = (dVar5 + dVar5) * pdVar8[3];
      dVar17 = dVar20 * dVar17;
      dVar4 = (dVar20 * dVar5 + dVar23) * dVar2;
      local_198 = (dVar22 * dVar6 + dVar25) * dVar3;
      local_188 = (dVar17 + *pdVar8 * dVar22) * dVar26;
      local_1a8 = (dVar20 * dVar5 - dVar23) * dVar3;
      dStack_180 = (dVar22 * dVar6 - dVar25) * dVar26;
      local_1b8 = (*pdVar8 * dVar22 - dVar17) * dVar2;
      local_1c8._8_4_ = SUB84(dVar4,0);
      local_1c8._0_8_ = ((double)DAT_149934d80 - (dVar7 * dVar22 + dVar6 * dVar20)) * dVar2;
      local_1c8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      uStack_1b0 = 0;
      uStack_190 = 0;
      uStack_170 = 0;
      local_168 = pdVar8[4];
      dStack_160 = pdVar8[5];
      local_158 = pdVar8[6];
      uStack_150 = 0x3ff0000000000000;
      local_248 = 0x3ff0000000000000;
      uStack_240 = 0;
      local_238 = 0;
      uStack_230 = 0;
      local_228 = 0;
      uStack_220 = 0x3ff0000000000000;
      local_218 = 0;
      uStack_210 = 0;
      local_208 = 0;
      uStack_200 = 0;
      local_1f8 = 0x3ff0000000000000;
      uStack_1f0 = 0;
      uStack_1d0 = 0x3ff0000000000000;
      local_1e8 = dVar15;
      dStack_1e0 = dVar16;
      local_1d8 = dVar21;
      FUN_1447fea8d(&local_148);
      FUN_144a1c686(&local_148,0x3e45798ee0000000);
      auVar24._8_8_ = -(ulonglong)(0.0 <= dVar3);
      auVar24._0_8_ = -(ulonglong)(0.0 <= dVar2);
      auVar18 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar24);
      dVar15 = (double)(~-(ulonglong)(0.0 <= dVar26) & 0xbff0000000000000 |
                       (ulonglong)((uint)(-(ulonglong)(0.0 <= dVar26) >> 0x20) & 0x3ff00000) << 0x20
                       );
      dVar21 = auVar18._0_8_;
      local_138 = local_138 * dVar21;
      local_140 = local_140 * dVar21;
      local_148 = local_148 * dVar21;
      dVar21 = auVar18._8_8_;
      local_118 = local_118 * dVar21;
      local_120 = local_120 * dVar21;
      local_128 = dVar21 * local_128;
      local_f8 = local_f8 * dVar15;
      local_100 = local_100 * dVar15;
      local_108 = dVar15 * local_108;
      FUN_14481fd10(local_268,&local_148);
    }
    *param_2 = local_e8;
    param_2[1] = dStack_e0;
    param_2[2] = local_d8;
  }
  if ((local_c0 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148806224 FUN_148806224 body=1111 status=ok
// SIG undefined FUN_148806224(void)

ulonglong FUN_148806224(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  byte bVar12;
  char cVar13;
  int iVar14;
  double *pdVar15;
  double dVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined4 *puVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined1 auStack_1e8 [32];
  undefined8 *local_1c8;
  longlong local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  double local_1a8;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  double local_188;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  double local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8;
  undefined4 local_f4;
  undefined2 local_f0;
  longlong local_c8;
  undefined8 local_c0;
  longlong local_a8;
  undefined8 local_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  dVar16 = (double)(ulonglong)DAT_14cb75ed0;
  puVar19 = *(undefined4 **)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((int)puVar19[0x44] < (int)DAT_14cb75ed0) {
    puVar19 = &DAT_14cb75ed0;
    dVar16 = (double)FUN_144b3d300();
    if (DAT_14cb75ed0 == 0xffffffff) {
      FUN_1446ddc76(&DAT_14cb75ec8,"PhysLadderOverlap",1);
      puVar19 = &DAT_14cb75ed0;
      dVar16 = (double)_Init_thread_footer();
    }
  }
  uVar17 = SUB84(puVar19,0);
  uVar10 = *(undefined8 *)(param_2 + 0x260);
  uVar11 = *(undefined8 *)(param_2 + 0x268);
  uVar1 = *(undefined8 *)(param_2 + 0x270);
  dVar6 = *(double *)(param_2 + 0x240);
  dVar7 = *(double *)(param_2 + 0x248);
  dVar8 = *(double *)(param_2 + 0x250);
  dVar9 = *(double *)(param_2 + 600);
  pdVar15 = *(double **)(param_2 + 0x228);
  local_118 = dVar6;
  uStack_110 = dVar7;
  local_108 = dVar8;
  uStack_100 = dVar9;
  if (pdVar15 == (double *)0x0) {
    uVar17 = 0x40;
    pdVar15 = (double *)FUN_14001cc68(0x40,0x10);
    dVar16 = DAT_14c8463d8;
    *pdVar15 = DAT_14c8463d0;
    pdVar15[1] = dVar16;
    dVar16 = DAT_14c8463e8;
    pdVar15[2] = DAT_14c8463e0;
    pdVar15[3] = dVar16;
    dVar16 = DAT_14c846500;
    pdVar15[4] = DAT_14c8464f8;
    pdVar15[5] = dVar16;
    dVar16 = DAT_14c846508;
    pdVar15[6] = DAT_14c846508;
    *(double **)(param_2 + 0x228) = pdVar15;
  }
  auVar4._8_4_ = (int)-(ulonglong)(dVar7 != pdVar15[1]);
  auVar4._0_8_ = -(ulonglong)(dVar6 != *pdVar15);
  auVar4._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar15[1]) >> 0x20);
  iVar14 = movmskpd(SUB84(dVar16,0),auVar4);
  auVar5._8_4_ = (int)-(ulonglong)(dVar9 != pdVar15[3]);
  auVar5._0_8_ = -(ulonglong)(dVar8 != pdVar15[2]);
  auVar5._12_4_ = (int)(-(ulonglong)(dVar9 != pdVar15[3]) >> 0x20);
  uVar18 = movmskpd(uVar17,auVar5);
  if ((uVar18 & 0x3fffffff) != 0 || iVar14 != 0) {
    *(undefined4 *)(pdVar15 + 2) = (undefined4)local_108;
    *(undefined4 *)((longlong)pdVar15 + 0x14) = local_108._4_4_;
    *(undefined4 *)(pdVar15 + 3) = (undefined4)uStack_100;
    *(undefined4 *)((longlong)pdVar15 + 0x1c) = uStack_100._4_4_;
    *(undefined4 *)pdVar15 = (undefined4)local_118;
    *(undefined4 *)((longlong)pdVar15 + 4) = local_118._4_4_;
    *(undefined4 *)(pdVar15 + 1) = (undefined4)uStack_110;
    *(undefined4 *)((longlong)pdVar15 + 0xc) = uStack_110._4_4_;
    FUN_1448052ee(&local_118,&local_138);
    pdVar15[6] = local_128;
    pdVar15[4] = local_138;
    pdVar15[5] = dStack_130;
  }
  local_168 = pdVar15[6];
  local_178 = *(undefined4 *)(pdVar15 + 4);
  uStack_174 = *(undefined4 *)((longlong)pdVar15 + 0x24);
  uStack_170 = *(undefined4 *)(pdVar15 + 5);
  uStack_16c = *(undefined4 *)((longlong)pdVar15 + 0x2c);
  local_f4 = 0;
  uStack_110 = 0.0;
  local_f0 = 0x101;
  local_c8 = 0;
  local_c0 = 0x800000000;
  local_a8 = 0;
  local_a0 = 0x400000000;
  uVar20 = (ulonglong)uStack_100 >> 8;
  local_118 = (double)DAT_14cb75ec8;
  local_f8 = 0;
  local_108 = 7.291122019556812e-304;
  uStack_100 = (double)CONCAT71((uint7)uVar20 & 0xffffff,1);
  iVar14 = *(int *)(param_1 + 0x1b0);
  local_1c0 = param_1;
  if ((longlong)iVar14 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x1a8);
    lVar21 = 0;
    bVar12 = DAT_14c950c29;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar21);
      if ((plVar3 != (longlong *)0x0 & bVar12) == 1) {
        FUN_1456cec3c(plVar3);
LAB_148806437:
        local_188 = local_168;
        local_198 = local_178;
        uStack_194 = uStack_174;
        uStack_190 = uStack_170;
        uStack_18c = uStack_16c;
        FUN_144a7484c(&local_198,&local_138);
        local_1c8 = &local_118;
        local_158 = uVar10;
        uStack_150 = uVar11;
        local_148 = uVar1;
        cVar13 = (**(code **)(*plVar3 + 0x990))(plVar3,param_2,&local_158,&local_138);
        bVar12 = DAT_14c950c29;
        if (cVar13 != '\0') goto LAB_1488065eb;
      }
      else if (plVar3 != (longlong *)0x0) goto LAB_148806437;
      lVar21 = lVar21 + 8;
    } while ((longlong)iVar14 * 8 != lVar21);
  }
  iVar14 = *(int *)(local_1c0 + 0x1c0);
  if ((longlong)iVar14 != 0) {
    lVar2 = *(longlong *)(local_1c0 + 0x1b8);
    lVar21 = 0;
    bVar12 = DAT_14c950c29;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar21);
      if ((plVar3 != (longlong *)0x0 & bVar12) == 1) {
        FUN_1456cec3c(plVar3);
LAB_148806501:
        local_1a8 = local_168;
        local_1b8 = local_178;
        uStack_1b4 = uStack_174;
        uStack_1b0 = uStack_170;
        uStack_1ac = uStack_16c;
        FUN_144a7484c(&local_1b8,&local_138);
        local_1c8 = &local_118;
        local_158 = uVar10;
        uStack_150 = uVar11;
        local_148 = uVar1;
        cVar13 = (**(code **)(*plVar3 + 0x990))(plVar3,param_2,&local_158,&local_138);
        bVar12 = DAT_14c950c29;
        if (cVar13 != '\0') goto LAB_1488065eb;
      }
      else if (plVar3 != (longlong *)0x0) goto LAB_148806501;
      lVar21 = lVar21 + 8;
    } while ((longlong)iVar14 * 8 != lVar21);
  }
  uVar20 = 0;
LAB_148806575:
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if ((local_90 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar20 & 0xffffffff;
LAB_1488065eb:
  uVar20 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
  goto LAB_148806575;
}



// FUNCTION 1488066a8 FUN_1488066a8 body=831 status=ok
// SIG undefined FUN_1488066a8(void)

double * FUN_1488066a8(longlong param_1,double *param_2,undefined8 param_3)

{
  longlong lVar1;
  float fVar2;
  double dVar3;
  longlong lVar4;
  double dVar5;
  undefined4 uVar6;
  longlong *in_R8;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  float fVar10;
  undefined1 auStack_f8 [40];
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  undefined1 local_a0 [16];
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  uVar7 = (undefined4)((ulonglong)param_3 >> 0x20);
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((in_R8[0x3e] == 0) || (*(longlong *)(in_R8[0x3e] + 0x438) == 0)) {
    param_2[2] = DAT_14c8464f0;
    uVar6 = DAT_14c8464e8._4_4_;
    uVar8 = (undefined4)DAT_14c8464e8;
    uVar7 = DAT_14c8464e0._4_4_;
    *(undefined4 *)param_2 = (undefined4)DAT_14c8464e0;
    *(undefined4 *)((longlong)param_2 + 4) = uVar7;
    *(undefined4 *)(param_2 + 1) = uVar8;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar6;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_f8);
  }
  lVar1 = param_1 + -0x1a58;
  (**(code **)(*in_R8 + 0x578))(in_R8,local_a0);
  FUN_148804bec(lVar1,&local_b8,CONCAT44(uVar7,(float)local_90));
  lVar4 = *(longlong *)(in_R8[0x3e] + 0x438);
  dVar3 = *(double *)(lVar4 + 0x280);
  uVar7 = SUB84(dVar3,0);
  uVar8 = (undefined4)((ulonglong)dVar3 >> 0x20);
  dVar9 = *(double *)(lVar4 + 0x288);
  if (dVar9 <= dVar3) {
    uVar7 = SUB84(dVar9,0);
    uVar8 = (undefined4)((ulonglong)dVar9 >> 0x20);
  }
  fVar10 = (float)(double)CONCAT44(uVar8,uVar7) * *(float *)(lVar4 + 0x644);
  dVar3 = *(double *)(lVar4 + 0x290);
  fVar2 = *(float *)(lVar4 + 0x640);
  if (((*(byte *)(param_1 + 0x15c) & 1) == 0) || (ABS(*(float *)(param_1 + 0x170)) <= 1e-08)) {
    (**(code **)(*in_R8 + 0x578))(in_R8,&local_88);
    FUN_148804eda(lVar1,&local_d0,&local_88);
    dVar9 = (double)fVar10;
    local_a8 = local_a8 - local_c0 * dVar9;
    local_b8 = local_b8 - dVar9 * local_d0;
    local_b0 = local_b0 - local_c8 * dVar9;
  }
  else {
    FUN_1488056ac(lVar1,&local_88);
    local_80 = local_b0 - local_80;
    local_88 = local_b8 - local_88;
    dVar9 = local_88 * local_88 + local_80 * local_80;
    if ((dVar9 != 1.0) || (NAN(dVar9))) {
      if (9.99999993922529e-09 <= dVar9) {
        local_80 = local_80 * (1.0 / SQRT(dVar9));
        local_88 = local_88 * (1.0 / SQRT(dVar9));
        dVar9 = 0.0;
      }
      else {
        local_88 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        local_80 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        dVar9 = DAT_14c8464f0;
      }
    }
    else {
      dVar9 = (double)(-(ulonglong)(local_a8 - local_78 == 0.0) & (ulonglong)(local_a8 - local_78));
    }
    if ((((*(byte *)(param_1 + 0x15c) & 1) == 0) || (ABS(*(float *)(param_1 + 0x170)) <= 1e-08)) ||
       (0.0 <= *(float *)(param_1 + 0x170))) {
      dVar5 = (double)fVar10;
      local_a8 = dVar9 * dVar5 + local_a8;
      local_b0 = local_b0 + local_80 * dVar5;
      local_b8 = local_b8 + local_88 * dVar5;
    }
    else {
      dVar5 = (double)fVar10;
      local_a8 = local_a8 - dVar9 * dVar5;
      local_b0 = local_b0 - local_80 * dVar5;
      local_b8 = local_b8 - local_88 * dVar5;
    }
  }
  *param_2 = local_b8 + 0.0;
  param_2[1] = local_b0 + 0.0;
  param_2[2] = (double)((float)dVar3 * fVar2) + local_a8;
  if ((local_70 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488069e8 FUN_1488069e8 body=773 status=ok
// SIG undefined FUN_1488069e8(void)

double * FUN_1488069e8(longlong *param_1,double *param_2,longlong *param_3)

{
  float fVar1;
  longlong lVar2;
  ulonglong uVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_e8 [40];
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  (**(code **)(*param_1 + 0x60))();
  if ((*(byte *)((longlong)param_1 + 0x15c) & 1) != 0) {
    if (1e-08 < ABS(*(float *)(param_1 + 0x2e))) {
      FUN_1488056ac(param_1 + -0x34b,&local_a8);
      (**(code **)(*param_3 + 0x578))(param_3,&local_c0);
      local_b8 = local_b8 - local_a0;
      local_c0 = local_c0 - local_a8;
      dVar5 = local_c0 * local_c0 + local_b8 * local_b8;
      if ((dVar5 != 1.0) || (NAN(dVar5))) {
        if (9.99999993922529e-09 <= dVar5) {
          local_b8 = local_b8 * (1.0 / SQRT(dVar5));
          local_c0 = local_c0 * (1.0 / SQRT(dVar5));
          uVar8 = 0;
          uVar9 = 0;
        }
        else {
          uVar8 = (undefined4)DAT_14c8464f0;
          uVar9 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
          local_b8 = DAT_14c8464e8;
          local_c0 = DAT_14c8464e0;
        }
      }
      else {
        uVar3 = -(ulonglong)(local_b0 - local_98 == 0.0) & (ulonglong)(local_b0 - local_98);
        uVar8 = (undefined4)uVar3;
        uVar9 = (undefined4)(uVar3 >> 0x20);
      }
      dVar5 = *(double *)(*(longlong *)(param_3[0x3e] + 0x438) + 0x290);
      fVar1 = *(float *)(*(longlong *)(param_3[0x3e] + 0x438) + 0x640);
      fVar4 = (float)FUN_148805230(param_1 + -0x34b,param_3);
      dVar6 = (double)fVar4;
      *param_2 = local_a8 + local_c0 * dVar6;
      param_2[1] = local_a0 + local_b8 * dVar6;
      param_2[2] = (double)CONCAT44(uVar9,uVar8) * dVar6 + local_98;
      (**(code **)(*param_3 + 0x578))(param_3,&local_c0);
      param_2[2] = (double)((float)dVar5 * fVar1) + local_b0;
    }
    else {
      (**(code **)(*param_1 + 0x40))(param_1,&local_a8,param_3);
      lVar2 = param_3[0x22];
      if (lVar2 == 0) {
        dVar6 = 3.4028234663852886e+38;
        dVar7 = 3.4028234663852886e+38;
        dVar5 = 3.4028234663852886e+38;
      }
      else {
        dVar6 = *(double *)(lVar2 + 0x260);
        dVar7 = *(double *)(lVar2 + 0x268);
        dVar5 = *(double *)(lVar2 + 0x270);
      }
      dVar5 = (dVar5 - param_2[2]) * local_98 +
              (dVar6 - *param_2) * local_a8 + (dVar7 - param_2[1]) * local_a0;
      *param_2 = dVar5 * local_a8 + *param_2;
      param_2[1] = local_a0 * dVar5 + param_2[1];
      param_2[2] = local_98 * dVar5 + param_2[2];
    }
  }
  if ((local_90 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148806cee FUN_148806cee body=142 status=ok
// SIG undefined FUN_148806cee(void)

bool FUN_148806cee(longlong param_1,longlong *param_2)

{
  double dVar1;
  undefined1 auStack_88 [40];
  undefined1 local_60 [16];
  double local_50;
  undefined1 local_48 [16];
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  dVar1 = 0.0;
  if (param_2[0x3a7] != 0) {
    dVar1 = (double)*(float *)(param_2[0x3a7] + 0x44);
  }
  (**(code **)(*param_2 + 0x578))(param_2,local_48);
  FUN_148804e16(param_1 + -0x1a58,local_60);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_50 < dVar1 + local_38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148806d7e FUN_148806d7e body=179 status=ok
// SIG undefined FUN_148806d7e(void)

undefined8 FUN_148806d7e(longlong param_1,longlong param_2)

{
  float fVar1;
  longlong lVar2;
  double dVar3;
  undefined8 uVar4;
  double dVar5;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(param_2 + 0x1f0);
  if (lVar2 != 0) {
    dVar3 = 0.0;
    if (*(longlong *)(param_2 + 0x1d38) != 0) {
      dVar3 = (double)*(float *)(*(longlong *)(param_2 + 0x1d38) + 0x38);
    }
    dVar5 = DAT_14c8464f0;
    if (*(longlong *)(lVar2 + 0x1c8) != 0) {
      dVar5 = *(double *)(*(longlong *)(lVar2 + 0x1c8) + 0x270);
    }
    fVar1 = *(float *)(lVar2 + 0x39c);
    FUN_148804e16(param_1 + -0x1a58,local_38);
    uVar4 = 1;
    if (local_28 < dVar3 + (double)fVar1 + dVar5) goto LAB_148806da5;
  }
  uVar4 = 0;
LAB_148806da5:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 148806e32 FUN_148806e32 body=56 status=ok
// SIG undefined FUN_148806e32(void)

undefined4 * FUN_148806e32(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined8 *)(param_2 + 4) = DAT_14c8464f0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *param_2 = (undefined4)DAT_14c8464e0;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  FUN_148806e6a(param_1 + -0x1a58,param_3,param_2);
  return param_2;
}



// FUNCTION 148806e6a FUN_148806e6a body=325 status=ok
// SIG undefined FUN_148806e6a(void)

undefined1 FUN_148806e6a(longlong param_1,longlong param_2,undefined8 param_3,undefined1 *param_4)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 auStack_a8 [44];
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  longlong local_70;
  longlong local_68;
  undefined4 *local_60;
  longlong *local_58;
  undefined8 *local_50;
  undefined4 local_44;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  local_38 = param_3;
  if ((*(longlong *)(param_2 + 0x1f0) != 0) &&
     (*(longlong *)(*(longlong *)(param_2 + 0x1f0) + 0x438) != 0)) {
    cVar1 = (**(code **)(*(longlong *)(param_1 + 0x1a58) + 0x58))(param_1 + 0x1a58);
    if (cVar1 != '\0') {
      local_40 = *(longlong *)(param_2 + 0x1d38);
      if (local_40 == 0) {
        local_44 = 0;
      }
      else {
        local_44 = *(undefined4 *)(local_40 + 0x34);
      }
      local_60 = &local_44;
      local_58 = &local_40;
      local_50 = &local_38;
      local_74 = 0;
      local_78 = 0;
      local_70 = param_1;
      local_68 = param_2;
      (**(code **)(**(longlong **)(param_2 + 0x1f0) + 0x528))
                (*(longlong **)(param_2 + 0x1f0),&local_74,&local_78);
      cVar1 = FUN_143cd9b2e(&local_70,&local_74,&local_78);
      uVar2 = 1;
      if (cVar1 == '\0') {
        local_7c = FUN_14165ac3e(param_2);
        uVar2 = FUN_143cd9b2e(&local_70,&local_74);
        if (param_4 != (undefined1 *)0x0) {
          *param_4 = uVar2;
        }
      }
      goto LAB_148806f82;
    }
  }
  uVar2 = 0;
LAB_148806f82:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148806fb0 FUN_148806fb0 body=332 status=ok
// SIG undefined FUN_148806fb0(void)

double * FUN_148806fb0(longlong *param_1,double *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  double dVar6;
  undefined1 auStack_88 [40];
  double local_60;
  double local_58;
  double local_50;
  undefined1 local_48 [16];
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_2[2] = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)param_2 = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_2 + 4) = uVar2;
  *(undefined4 *)(param_2 + 1) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar4;
  if ((*(longlong *)(param_3 + 0x1f0) != 0) &&
     (*(longlong *)(*(longlong *)(param_3 + 0x1f0) + 0x438) != 0)) {
    lVar1 = *(longlong *)(param_3 + 0x1d38);
    FUN_148804e16(param_1 + -0x34b,local_48);
    dVar6 = 0.0;
    if (lVar1 != 0) {
      dVar6 = (double)*(float *)(lVar1 + 0x3c);
    }
    lVar1 = *(longlong *)(*(longlong *)(param_3 + 0x1f0) + 0x438);
    dVar6 = (local_38 - (double)((float)*(double *)(lVar1 + 0x290) * *(float *)(lVar1 + 0x640))) +
            dVar6;
    FUN_148804bec(param_1 + -0x34b,param_2,CONCAT44((int)((ulonglong)dVar6 >> 0x20),(float)dVar6));
    if ((*(byte *)((longlong)param_1 + 0x15c) & 1) != 0) {
      (**(code **)(*param_1 + 0x40))(param_1,&local_60,param_3);
      fVar5 = (float)(**(code **)(*param_1 + 200))(param_1,param_3);
      dVar6 = (double)fVar5;
      *param_2 = dVar6 * local_60 + *param_2;
      param_2[1] = local_58 * dVar6 + param_2[1];
      param_2[2] = local_50 * dVar6 + param_2[2];
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148807122 FUN_148807122 body=345 status=ok
// SIG undefined FUN_148807122(void)

float FUN_148807122(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  
  fVar2 = 0.0;
  if ((*(longlong *)(param_2 + 0x1f0) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x1f0) + 0x438), lVar1 != 0)) {
    if (((*(byte *)((longlong)param_1 + 0x15c) & 1) == 0) ||
       (fVar2 = *(float *)(param_1 + 0x2e), ABS(fVar2) <= 1e-08)) {
      fVar2 = (float)(**(code **)(*param_1 + 200))(param_1,param_2);
      if (0.0 <= fVar2) {
        lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x1f0) + 0x438);
        dVar3 = *(double *)(lVar1 + 0x280);
        if (*(double *)(lVar1 + 0x288) <= *(double *)(lVar1 + 0x280)) {
          dVar3 = *(double *)(lVar1 + 0x288);
        }
        fVar4 = *(float *)((longlong)param_1 + 0xcc) * 0.5 -
                (float)dVar3 * *(float *)(lVar1 + 0x644);
      }
      else {
        lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x1f0) + 0x438);
        dVar3 = *(double *)(lVar1 + 0x280);
        if (*(double *)(lVar1 + 0x288) <= *(double *)(lVar1 + 0x280)) {
          dVar3 = *(double *)(lVar1 + 0x288);
        }
        fVar4 = *(float *)((longlong)param_1 + 0xcc) * ((float)((int)param_1[0x2d] + -1) + 0.5) -
                (float)dVar3 * *(float *)(lVar1 + 0x644);
      }
    }
    else {
      fVar4 = (float)FUN_148805230(0,param_2);
      dVar3 = *(double *)(lVar1 + 0x280);
      if (*(double *)(lVar1 + 0x288) <= *(double *)(lVar1 + 0x280)) {
        dVar3 = *(double *)(lVar1 + 0x288);
      }
      fVar4 = fVar4 * ABS(fVar2) * 0.017453292 * 0.5 - (float)dVar3 * *(float *)(lVar1 + 0x644);
    }
    fVar2 = 0.0;
    if (0.0 <= fVar4) {
      fVar2 = fVar4;
    }
  }
  return fVar2;
}



// FUNCTION 14880727c FUN_14880727c body=833 status=ok
// SIG undefined FUN_14880727c(void)

void FUN_14880727c(longlong *param_1,longlong *param_2)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_e8 [32];
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  (**(code **)(*param_2 + 0x578))(param_2,&local_98);
  (**(code **)(*param_1 + 0x60))(param_1,&local_b0,param_2);
  if (((*(byte *)((longlong)param_1 + 0x15c) & 1) == 0) ||
     (ABS(*(float *)(param_1 + 0x2e)) <= 1e-08)) {
    (**(code **)(*param_1 + 0x40))(param_1,&local_c8,param_2);
    fVar5 = (float)((local_88 - local_a0) * local_b8 +
                   (local_98 - local_b0) * local_c8 + (local_90 - local_a8) * local_c0);
  }
  else {
    FUN_1488056ac(param_1 + -0x34b,&local_c8);
    local_a8 = local_a8 - local_c0;
    local_b0 = local_b0 - local_c8;
    dVar7 = local_b0 * local_b0 + local_a8 * local_a8;
    if ((dVar7 != 1.0) || (NAN(dVar7))) {
      dVar8 = DAT_14c8464f0;
      dVar1 = DAT_14c8464e8;
      dVar2 = DAT_14c8464e0;
      if (9.99999993922529e-09 <= dVar7) {
        dVar8 = 0.0;
        dVar1 = local_a8 * (1.0 / SQRT(dVar7));
        dVar2 = local_b0 * (1.0 / SQRT(dVar7));
      }
    }
    else {
      dVar8 = (double)(-(ulonglong)(local_a0 - local_b8 == 0.0) & (ulonglong)(local_a0 - local_b8));
      dVar1 = local_a8;
      dVar2 = local_b0;
    }
    if ((((*(byte *)((longlong)param_1 + 0x15c) & 1) != 0) &&
        (1e-08 < ABS(*(float *)(param_1 + 0x2e)))) && (*(float *)(param_1 + 0x2e) < 0.0)) {
      dVar8 = -dVar8;
      dVar1 = -dVar1;
      dVar2 = -dVar2;
    }
    (**(code **)(*param_1 + 0x38))(param_1,&local_c8,param_2);
    dVar8 = dVar8 * local_b8 + local_c8 * dVar2 + local_c0 * dVar1;
    dVar7 = dVar8;
    if (1.0 <= dVar8) {
      dVar7 = 1.0;
    }
    dVar8 = acos((double)(-(ulonglong)(dVar8 < -1.0) & 0xbff0000000000000 |
                         ~-(ulonglong)(dVar8 < -1.0) & (ulonglong)dVar7));
    fVar6 = (float)FUN_148805230(param_1 + -0x34b,param_2);
    dVar7 = dVar1 * local_c8 - dVar2 * local_c0;
    uVar4 = -(ulonglong)(0.0 < dVar7);
    fVar5 = (float)(double)(uVar4 & 0x3ff0000000000000 |
                           (ulonglong)
                           (~(uint)(uVar4 >> 0x20) &
                           (uint)(-(ulonglong)(dVar7 < 0.0) >> 0x20) & 0xbff00000) << 0x20);
    if (((*(byte *)((longlong)param_1 + 0x15c) & 1) != 0) &&
       (1e-08 < ABS(*(float *)(param_1 + 0x2e)))) {
      uVar3 = -(uint)(*(float *)(param_1 + 0x2e) < 0.0);
      fVar5 = (float)(~uVar3 & (uint)fVar5 | (uint)-fVar5 & uVar3);
    }
    fVar5 = fVar6 * (float)dVar8 * fVar5;
  }
  if ((local_80 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(fVar5);
  }
  return;
}



// FUNCTION 1488075be FUN_1488075be body=823 status=ok
// SIG undefined FUN_1488075be(void)

double * FUN_1488075be(longlong *param_1,double *param_2,longlong param_3,float param_4,
                      double *param_5)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  char cVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  float fVar13;
  undefined1 auStack_c8 [32];
  double local_a8;
  double local_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  param_2[2] = param_5[2];
  uVar5 = *(undefined4 *)((longlong)param_5 + 4);
  uVar6 = *(undefined4 *)(param_5 + 1);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0xc);
  *(undefined4 *)param_2 = *(undefined4 *)param_5;
  *(undefined4 *)((longlong)param_2 + 4) = uVar5;
  *(undefined4 *)(param_2 + 1) = uVar6;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar7;
  if ((*(byte *)((longlong)param_1 + 0x15c) & 1) != 0) {
    (**(code **)(*param_1 + 0x40))(param_1,&local_a8,param_3);
    dVar12 = param_5[1] * local_a0;
    dVar3 = *param_5 * local_a8;
    dVar4 = param_5[2] * local_98;
    fVar10 = (float)(**(code **)(*param_1 + 200))(param_1,param_3);
    fVar11 = (float)(**(code **)(*param_1 + 0xc0))(param_1,param_3);
    fVar10 = fVar10 + (float)(dVar4 + dVar3 + dVar12);
    if ((fVar11 < ABS(fVar10)) &&
       (((fVar13 = (float)(-(uint)(0.0 < fVar10) & 0x3f800000 |
                          ~-(uint)(0.0 < fVar10) & -(uint)(fVar10 < 0.0) & 0xbf800000), fVar13 < 0.0
         && ((*(byte *)((longlong)param_1 + 0x15c) & 4) != 0)) ||
        ((0.0 < fVar10 && ((*(byte *)((longlong)param_1 + 0x15c) & 8) != 0)))))) {
      (**(code **)(*param_1 + 0x40))(param_1,&local_a8,param_3);
      dVar3 = (double)(ABS(fVar10) - fVar11);
      dVar12 = (double)fVar13;
      *param_2 = *param_2 - dVar3 * local_a8 * dVar12;
      param_2[1] = param_2[1] - local_a0 * dVar3 * dVar12;
      param_2[2] = param_2[2] - local_98 * dVar3 * dVar12;
    }
  }
  lVar1 = *(longlong *)(param_3 + 0x1f0);
  if ((lVar1 != 0) && (dVar3 = param_2[2], 0.0 <= dVar3)) {
    lVar2 = *(longlong *)(param_3 + 0x1d38);
    fVar10 = 0.0;
    if (lVar2 != 0) {
      fVar10 = *(float *)(lVar2 + 0x38);
    }
    dVar12 = DAT_14c8464f0;
    if (*(longlong *)(lVar1 + 0x1c8) != 0) {
      dVar12 = *(double *)(*(longlong *)(lVar1 + 0x1c8) + 0x270);
    }
    fVar11 = *(float *)(lVar1 + 0x39c);
    FUN_148804e16(param_1 + -0x34b,&local_a8);
    fVar10 = (float)((double)(fVar10 + (float)(dVar3 + (double)(float)dVar12) + fVar11) -
                    (local_98 - (double)*(float *)(param_1 + 0x2c)));
    if (0.0 < fVar10) {
      if (*(byte *)((longlong)param_1 + 0x15d) < 2) {
        cVar9 = FUN_148806e6a(param_1 + -0x34b,param_3,0,0);
        if (cVar9 != '\0') goto LAB_148807795;
      }
      else if (*(byte *)((longlong)param_1 + 0x15d) != 2) goto LAB_148807795;
      if (lVar2 == 0) {
        fVar11 = 0.0;
      }
      else {
        fVar11 = *(float *)(lVar2 + 0x48);
      }
      fVar11 = fVar11 * param_4;
      bVar8 = fVar10 < fVar11;
      if (0.0 < param_2[2]) {
        bVar8 = fVar11 < fVar10;
      }
      if (!bVar8) {
        fVar10 = fVar11;
      }
      param_2[2] = param_2[2] - (double)fVar10;
    }
  }
LAB_148807795:
  if ((local_90 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1488078f6 FUN_1488078f6 body=76 status=ok
// SIG undefined FUN_1488078f6(void)

void FUN_1488078f6(longlong param_1,longlong param_2)

{
  FUN_140bfc966();
  if ((*(longlong *)(param_2 + 0x68) == DAT_14cb75ec0) && (*(int *)(param_2 + 0x80) != -1)) {
    *(char *)(param_1 + 0x1889) = (char)*(int *)(param_2 + 0x80);
    FUN_140c9d9f6(param_1 + -0x398);
    return;
  }
  return;
}



// FUNCTION 148807942 FUN_148807942 body=298 status=ok
// SIG undefined FUN_148807942(void)

void FUN_148807942(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  byte bVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x1c08);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x1c00);
    lVar5 = 0;
    bVar4 = DAT_14c950c29;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar5);
      if ((plVar3 != (longlong *)0x0 & bVar4) == 1) {
        FUN_1456cec3c(plVar3);
LAB_148807986:
        (**(code **)(*plVar3 + 0x420))(plVar3,0);
        bVar4 = DAT_14c950c29;
      }
      else if (plVar3 != (longlong *)0x0) goto LAB_148807986;
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  iVar1 = *(int *)(param_1 + 0x1c18);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x1c10);
    lVar5 = 0;
    bVar4 = DAT_14c950c29;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar5);
      if ((plVar3 != (longlong *)0x0 & bVar4) == 1) {
        FUN_1456cec3c(plVar3);
LAB_1488079e5:
        (**(code **)(*plVar3 + 0x420))(plVar3,0);
        bVar4 = DAT_14c950c29;
      }
      else if (plVar3 != (longlong *)0x0) goto LAB_1488079e5;
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  *(undefined4 *)(param_1 + 0x1c08) = 0;
  if (*(int *)(param_1 + 0x1c0c) != 0) {
    FUN_14880e352(param_1 + 0x1c00,0);
  }
  *(undefined4 *)(param_1 + 0x1c18) = 0;
  if (*(int *)(param_1 + 0x1c1c) != 0) {
    FUN_14880e352(param_1 + 0x1c10,0);
    return;
  }
  return;
}



// FUNCTION 148807a6c FUN_148807a6c body=317 status=ok
// SIG undefined FUN_148807a6c(void)

void FUN_148807a6c(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_78 [32];
  uint local_58;
  undefined8 local_50;
  undefined2 *local_48;
  int local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140002266(&local_48,L"VolumeBoxComponent_%d",*(undefined4 *)(param_1 + 0x1c08));
  puVar4 = local_48;
  if (local_40 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_38,puVar4,1);
  uVar2 = FUN_14129fedc();
  local_58 = 0;
  FUN_140af9fb2(&local_30,param_1,uVar2,local_38);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_50 = 0;
  local_58 = local_58 & 0xffffff00;
  lVar3 = FUN_1483e6a2e(param_1,local_30,0x2000000,0);
  FUN_140c9cb5c(param_1,lVar3);
  if (lVar3 != 0) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar3);
    }
    iVar1 = *(int *)(param_1 + 0x1c08);
    *(uint *)(param_1 + 0x1c08) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x1c0c) < iVar1 + 1U) {
      FUN_14880e3b2((longlong *)(param_1 + 0x1c00),iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x1c00) + (longlong)iVar1 * 8) = lVar3;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar3);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148807baa FUN_148807baa body=317 status=ok
// SIG undefined FUN_148807baa(void)

void FUN_148807baa(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_78 [32];
  uint local_58;
  undefined8 local_50;
  undefined2 *local_48;
  int local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140002266(&local_48,L"TopVolumeBoxComponent_%d",*(undefined4 *)(param_1 + 0x1c18));
  puVar4 = local_48;
  if (local_40 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_38,puVar4,1);
  uVar2 = FUN_14129fedc();
  local_58 = 0;
  FUN_140af9fb2(&local_30,param_1,uVar2,local_38);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_50 = 0;
  local_58 = local_58 & 0xffffff00;
  lVar3 = FUN_1483e6a2e(param_1,local_30,0x2000000,0);
  FUN_140c9cb5c(param_1,lVar3);
  if (lVar3 != 0) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar3);
    }
    iVar1 = *(int *)(param_1 + 0x1c18);
    *(uint *)(param_1 + 0x1c18) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x1c1c) < iVar1 + 1U) {
      FUN_14880e3b2((longlong *)(param_1 + 0x1c10),iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x1c10) + (longlong)iVar1 * 8) = lVar3;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar3);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148807ce8 FUN_148807ce8 body=42 status=ok
// SIG undefined FUN_148807ce8(void)

void FUN_148807ce8(longlong param_1)

{
  FUN_1401b2056();
  if (*(longlong *)(param_1 + 0x3a8) != 0) {
    FUN_1400337aa();
    return;
  }
  return;
}



// FUNCTION 148807d1c FUN_148807d1c body=781 status=ok
// SIG undefined FUN_148807d1c(void)

ulonglong FUN_148807d1c(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  int iVar12;
  double *pdVar13;
  double dVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined4 *puVar17;
  ulonglong uVar18;
  undefined1 auStack_1a8 [32];
  undefined8 *local_188;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  double local_168;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  double local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  double local_118;
  double dStack_110;
  double local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8;
  undefined4 local_d4;
  undefined2 local_d0;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_88;
  undefined8 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  dVar14 = (double)(ulonglong)DAT_14cb75f20;
  puVar17 = *(undefined4 **)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((int)puVar17[0x44] < (int)DAT_14cb75f20) {
    puVar17 = &DAT_14cb75f20;
    dVar14 = (double)FUN_144b3d300();
    if (DAT_14cb75f20 == 0xffffffff) {
      FUN_1446ddc76(&DAT_14cb75f18,"PhysLadderOverlap",1);
      puVar17 = &DAT_14cb75f20;
      dVar14 = (double)_Init_thread_footer();
    }
  }
  uVar15 = SUB84(puVar17,0);
  uVar9 = *(undefined8 *)(param_2 + 0x260);
  uVar10 = *(undefined8 *)(param_2 + 0x268);
  uVar1 = *(undefined8 *)(param_2 + 0x270);
  dVar5 = *(double *)(param_2 + 0x240);
  dVar6 = *(double *)(param_2 + 0x248);
  dVar7 = *(double *)(param_2 + 0x250);
  dVar8 = *(double *)(param_2 + 600);
  pdVar13 = *(double **)(param_2 + 0x228);
  local_f8 = dVar5;
  uStack_f0 = dVar6;
  local_e8 = dVar7;
  uStack_e0 = dVar8;
  if (pdVar13 == (double *)0x0) {
    uVar15 = 0x40;
    pdVar13 = (double *)FUN_14001cc68(0x40,0x10);
    dVar14 = DAT_14c8463d8;
    *pdVar13 = DAT_14c8463d0;
    pdVar13[1] = dVar14;
    dVar14 = DAT_14c8463e8;
    pdVar13[2] = DAT_14c8463e0;
    pdVar13[3] = dVar14;
    dVar14 = DAT_14c846500;
    pdVar13[4] = DAT_14c8464f8;
    pdVar13[5] = dVar14;
    dVar14 = DAT_14c846508;
    pdVar13[6] = DAT_14c846508;
    *(double **)(param_2 + 0x228) = pdVar13;
  }
  auVar3._8_4_ = (int)-(ulonglong)(dVar6 != pdVar13[1]);
  auVar3._0_8_ = -(ulonglong)(dVar5 != *pdVar13);
  auVar3._12_4_ = (int)(-(ulonglong)(dVar6 != pdVar13[1]) >> 0x20);
  iVar12 = movmskpd(SUB84(dVar14,0),auVar3);
  auVar4._8_4_ = (int)-(ulonglong)(dVar8 != pdVar13[3]);
  auVar4._0_8_ = -(ulonglong)(dVar7 != pdVar13[2]);
  auVar4._12_4_ = (int)(-(ulonglong)(dVar8 != pdVar13[3]) >> 0x20);
  uVar16 = movmskpd(uVar15,auVar4);
  if ((uVar16 & 0x3fffffff) != 0 || iVar12 != 0) {
    *(undefined4 *)(pdVar13 + 2) = (undefined4)local_e8;
    *(undefined4 *)((longlong)pdVar13 + 0x14) = local_e8._4_4_;
    *(undefined4 *)(pdVar13 + 3) = (undefined4)uStack_e0;
    *(undefined4 *)((longlong)pdVar13 + 0x1c) = uStack_e0._4_4_;
    *(undefined4 *)pdVar13 = (undefined4)local_f8;
    *(undefined4 *)((longlong)pdVar13 + 4) = local_f8._4_4_;
    *(undefined4 *)(pdVar13 + 1) = (undefined4)uStack_f0;
    *(undefined4 *)((longlong)pdVar13 + 0xc) = uStack_f0._4_4_;
    FUN_1448052ee(&local_f8,&local_118);
    pdVar13[6] = local_108;
    pdVar13[4] = local_118;
    pdVar13[5] = dStack_110;
  }
  local_148 = pdVar13[6];
  local_158 = *(undefined4 *)(pdVar13 + 4);
  uStack_154 = *(undefined4 *)((longlong)pdVar13 + 0x24);
  uStack_150 = *(undefined4 *)(pdVar13 + 5);
  uStack_14c = *(undefined4 *)((longlong)pdVar13 + 0x2c);
  local_d4 = 0;
  uStack_f0 = 0.0;
  local_d0 = 0x101;
  local_a8 = 0;
  local_a0 = 0x800000000;
  local_88 = 0;
  local_80 = 0x400000000;
  uVar18 = (ulonglong)uStack_e0 >> 8;
  local_f8 = (double)DAT_14cb75f18;
  local_d8 = 0;
  local_e8 = 7.291122019556812e-304;
  uStack_e0 = (double)CONCAT71((uint7)uVar18 & 0xffffff,1);
  plVar2 = *(longlong **)(param_1 + -0x20);
  if (plVar2 != (longlong *)0x0) {
    local_178 = local_158;
    uStack_174 = uStack_154;
    uStack_170 = uStack_150;
    uStack_16c = uStack_14c;
    local_168 = local_148;
    FUN_144a7484c(&local_178,&local_118);
    local_188 = &local_f8;
    local_138 = uVar9;
    uStack_130 = uVar10;
    local_128 = uVar1;
    cVar11 = (**(code **)(*plVar2 + 0x990))(plVar2,param_2,&local_138,&local_118);
    uVar18 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    if (cVar11 != '\0') goto LAB_148807f2f;
  }
  uVar18 = 0;
LAB_148807f2f:
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return uVar18 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14880809c FUN_14880809c body=256 status=ok
// SIG undefined FUN_14880809c(void)

void FUN_14880809c(longlong *param_1,longlong *param_2)

{
  double dVar1;
  longlong lVar2;
  double *pdVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_a8 [40];
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  (**(code **)(*param_2 + 0x578))(param_2,&local_68);
  lVar2 = param_1[-0x40];
  if (lVar2 == 0) {
    pdVar3 = (double *)&DAT_14c8464e0;
    uVar5 = (undefined4)DAT_14c8464f0;
    uVar6 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  }
  else {
    uVar5 = (undefined4)*(undefined8 *)(lVar2 + 0x270);
    uVar6 = (undefined4)((ulonglong)*(undefined8 *)(lVar2 + 0x270) >> 0x20);
    pdVar3 = (double *)(lVar2 + 0x260);
  }
  dVar4 = *pdVar3;
  dVar1 = pdVar3[1];
  (**(code **)(*param_1 + 0x40))(param_1,&local_80,param_2);
  dVar4 = (local_58 - (double)CONCAT44(uVar6,uVar5)) * local_70 +
          (local_68 - dVar4) * local_80 + (local_60 - dVar1) * local_78;
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(CONCAT44((int)((ulonglong)dVar4 >> 0x20),(float)dVar4));
}



// FUNCTION 14880819e FUN_14880819e body=472 status=ok
// SIG undefined FUN_14880819e(void)

double * FUN_14880819e(longlong *param_1,double *param_2,undefined8 param_3,undefined8 param_4,
                      double *param_5)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  undefined1 auStack_a8 [32];
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_2[2] = param_5[2];
  uVar3 = *(undefined4 *)param_5;
  uVar4 = *(undefined4 *)((longlong)param_5 + 4);
  uVar5 = *(undefined4 *)(param_5 + 1);
  uVar6 = *(undefined4 *)((longlong)param_5 + 0xc);
  *(undefined4 *)param_2 = uVar3;
  *(undefined4 *)((longlong)param_2 + 4) = uVar4;
  *(undefined4 *)(param_2 + 1) = uVar5;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar6;
  if ((*(byte *)((longlong)param_1 + 0x3c) & 1) != 0) {
    (**(code **)(*param_1 + 0x40))(uVar3,&local_88);
    dVar9 = param_5[1] * local_80;
    dVar1 = *param_5 * local_88;
    dVar2 = param_5[2] * local_78;
    fVar7 = (float)(**(code **)(*param_1 + 200))(param_1,param_3);
    fVar8 = (float)(**(code **)(*param_1 + 0xc0))(param_1,param_3);
    fVar7 = fVar7 + (float)(dVar2 + dVar1 + dVar9);
    if (fVar8 < ABS(fVar7)) {
      fVar10 = (float)(-(uint)(0.0 < fVar7) & 0x3f800000 |
                      ~-(uint)(0.0 < fVar7) & -(uint)(fVar7 < 0.0) & 0xbf800000);
      if (((fVar10 < 0.0) && ((*(byte *)((longlong)param_1 + 0x3c) & 2) != 0)) ||
         ((0.0 < fVar7 && ((*(byte *)((longlong)param_1 + 0x3c) & 4) != 0)))) {
        (**(code **)(*param_1 + 0x40))(param_1,&local_88,param_3);
        dVar1 = (double)(ABS(fVar7) - fVar8);
        dVar9 = (double)fVar10;
        *param_2 = *param_2 - dVar1 * local_88 * dVar9;
        param_2[1] = param_2[1] - local_80 * dVar1 * dVar9;
        param_2[2] = param_2[2] - local_78 * dVar1 * dVar9;
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148808378 FUN_148808378 body=385 status=ok
// SIG undefined FUN_148808378(void)

double * FUN_148808378(longlong param_1,double *param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong *in_R8;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_b8 [32];
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  undefined1 local_68 [16];
  double local_58;
  ulonglong local_50;
  
  uVar7 = (undefined4)((ulonglong)param_3 >> 0x20);
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((in_R8[0x3e] == 0) || (*(longlong *)(in_R8[0x3e] + 0x438) == 0)) {
    param_2[2] = DAT_14c8464f0;
    uVar6 = DAT_14c8464e8._4_4_;
    uVar8 = (undefined4)DAT_14c8464e8;
    uVar7 = DAT_14c8464e0._4_4_;
    *(undefined4 *)param_2 = (undefined4)DAT_14c8464e0;
    *(undefined4 *)((longlong)param_2 + 4) = uVar7;
    *(undefined4 *)(param_2 + 1) = uVar8;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar6;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_b8);
  }
  (**(code **)(*in_R8 + 0x578))(in_R8,local_68);
  FUN_1488084fa(param_1 + -0x3c8,&local_80,CONCAT44(uVar7,(float)local_58));
  lVar5 = *(longlong *)(in_R8[0x3e] + 0x438);
  dVar3 = *(double *)(lVar5 + 0x280);
  uVar7 = SUB84(dVar3,0);
  uVar8 = (undefined4)((ulonglong)dVar3 >> 0x20);
  dVar4 = *(double *)(lVar5 + 0x288);
  if (dVar4 <= dVar3) {
    uVar7 = SUB84(dVar4,0);
    uVar8 = (undefined4)((ulonglong)dVar4 >> 0x20);
  }
  dVar3 = *(double *)(lVar5 + 0x290);
  fVar1 = *(float *)(lVar5 + 0x644);
  fVar2 = *(float *)(lVar5 + 0x640);
  FUN_148808724(param_1 + -0x3c8,&local_98);
  dVar4 = (double)((float)(double)CONCAT44(uVar8,uVar7) * fVar1);
  *param_2 = (local_80 - dVar4 * local_98) + 0.0;
  param_2[1] = (local_78 - local_90 * dVar4) + 0.0;
  param_2[2] = (double)((float)dVar3 * fVar2) + (local_70 - local_88 * dVar4);
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1488084fa FUN_1488084fa body=552 status=ok
// SIG undefined FUN_1488084fa(void)

double * FUN_1488084fa(longlong param_1,double *param_2,float param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double *pdVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStack_108 [40];
  double local_e0;
  double local_d8;
  double local_d0;
  double local_b8;
  double local_a8;
  double local_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar2 = *(longlong *)(param_1 + 0x1c8);
  if (lVar2 == 0) {
    pdVar6 = (double *)&DAT_14c8464e0;
    uVar11 = (undefined4)DAT_14c8464f0;
    uVar12 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  }
  else {
    uVar11 = (undefined4)*(undefined8 *)(lVar2 + 0x270);
    uVar12 = (undefined4)((ulonglong)*(undefined8 *)(lVar2 + 0x270) >> 0x20);
    pdVar6 = (double *)(lVar2 + 0x260);
  }
  dVar4 = *pdVar6;
  dVar5 = pdVar6[1];
  lVar2 = param_1 + 0x3c8;
  (**(code **)(*(longlong *)(param_1 + 0x3c8) + 0x30))(lVar2,&local_a8);
  FUN_14377f5b2(param_1,&local_e0);
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar13 = (undefined4)DAT_14c8464f0;
    uVar14 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x1c8) + 0x270);
    uVar13 = (undefined4)uVar1;
    uVar14 = (undefined4)((ulonglong)uVar1 >> 0x20);
  }
  dVar10 = local_a8 * local_b8;
  dVar9 = local_a0 * local_b8;
  dVar8 = (double)CONCAT44(uVar12,uVar11) - local_98 * local_b8;
  (**(code **)(*(longlong *)(param_1 + 0x3c8) + 0x30))(lVar2,&local_a8);
  FUN_14377f5b2(param_1,&local_e0);
  dVar3 = local_b8 * local_98 + (double)CONCAT44(uVar14,uVar13);
  (**(code **)(*(longlong *)(param_1 + 0x3c8) + 0x30))(lVar2,&local_e0);
  dVar7 = (double)param_3;
  if (dVar3 <= (double)param_3) {
    dVar7 = dVar3;
  }
  if (dVar7 <= dVar8) {
    dVar7 = dVar8;
  }
  dVar8 = (double)(float)(((double)(float)dVar7 - dVar8) / local_d0);
  *param_2 = (double)(float)(local_e0 * dVar8 + (dVar4 - dVar10));
  param_2[1] = (double)(float)(dVar8 * local_d8 + (dVar5 - dVar9));
  param_2[2] = (double)(float)dVar7;
  if ((local_90 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148808724 FUN_148808724 body=351 status=ok
// SIG undefined FUN_148808724(void)

undefined8 FUN_148808724(longlong param_1,undefined8 param_2)

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
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  double local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  double local_48;
  double local_40;
  
  dVar9 = (double)(DAT_14c707940 ^ (ulonglong)auStack_98);
  lVar1 = *(longlong *)(param_1 + 0x1c8);
  local_40 = dVar9;
  if (lVar1 == 0) {
    local_48 = DAT_14c846508;
    uStack_50 = (undefined4)DAT_14c846500;
    uStack_4c = DAT_14c846500._4_4_;
  }
  else {
    dVar4 = *(double *)(lVar1 + 0x240);
    dVar5 = *(double *)(lVar1 + 0x248);
    dVar6 = *(double *)(lVar1 + 0x250);
    dVar7 = *(double *)(lVar1 + 600);
    pdVar10 = *(double **)(lVar1 + 0x228);
    local_78 = dVar4;
    uStack_70 = dVar5;
    local_68 = dVar6;
    uStack_60 = dVar7;
    if (pdVar10 == (double *)0x0) {
      param_1 = 0x40;
      pdVar10 = (double *)FUN_14001cc68(0x40,0x10);
      dVar9 = DAT_14c8463d8;
      *pdVar10 = DAT_14c8463d0;
      pdVar10[1] = dVar9;
      dVar9 = DAT_14c8463e8;
      pdVar10[2] = DAT_14c8463e0;
      pdVar10[3] = dVar9;
      dVar9 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
      pdVar10[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
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
    uVar11 = movmskpd((int)param_1,auVar3);
    if ((uVar11 & 0x3fffffff) != 0 || iVar8 != 0) {
      *(undefined4 *)(pdVar10 + 2) = (undefined4)local_68;
      *(undefined4 *)((longlong)pdVar10 + 0x14) = local_68._4_4_;
      *(undefined4 *)(pdVar10 + 3) = (undefined4)uStack_60;
      *(undefined4 *)((longlong)pdVar10 + 0x1c) = uStack_60._4_4_;
      *(undefined4 *)pdVar10 = (undefined4)local_78;
      *(undefined4 *)((longlong)pdVar10 + 4) = local_78._4_4_;
      *(undefined4 *)(pdVar10 + 1) = (undefined4)uStack_70;
      *(undefined4 *)((longlong)pdVar10 + 0xc) = uStack_70._4_4_;
      FUN_1448052ee(&local_78,&local_58);
      pdVar10[6] = local_48;
      pdVar10[4] = local_58;
      pdVar10[5] = (double)CONCAT44(uStack_4c,uStack_50);
    }
    local_48 = pdVar10[6];
    uStack_50 = *(undefined4 *)(pdVar10 + 5);
    uStack_4c = *(undefined4 *)((longlong)pdVar10 + 0x2c);
  }
  local_58 = 0.0;
  FUN_144a76660(&local_58,param_2);
  if (((ulonglong)local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148808884 FUN_148808884 body=23 status=ok
// SIG undefined FUN_148808884(void)

undefined8 FUN_148808884(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x60))();
  return param_2;
}



// FUNCTION 14880889c FUN_14880889c body=8 status=ok
// SIG undefined FUN_14880889c(void)

undefined * FUN_14880889c(void)

{
  return &DAT_14cb75f24;
}



// FUNCTION 1488088a6 FUN_1488088a6 body=1 status=ok
// SIG undefined FUN_1488088a6(void)

void FUN_1488088a6(void)

{
  return;
}



// FUNCTION 1488088a8 FUN_1488088a8 body=1 status=ok
// SIG undefined FUN_1488088a8(void)

void FUN_1488088a8(void)

{
  return;
}



// FUNCTION 1488088aa FUN_1488088aa body=1 status=ok
// SIG undefined FUN_1488088aa(void)

void FUN_1488088aa(void)

{
  return;
}



// FUNCTION 1488088ac FUN_1488088ac body=206 status=ok
// SIG undefined FUN_1488088ac(void)

void FUN_1488088ac(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_14880e438(param_1 + 0x1d00);
  if ((*(longlong *)(param_1 + 0x1d10) != 0) && (*(longlong *)(param_1 + 0x1d18) != 0))
  goto LAB_1488088d8;
  lVar3 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar3 != 0) {
      FUN_1456cec3c();
      lVar3 = *param_2;
      goto LAB_148808936;
    }
    *(undefined8 *)(param_1 + 0x1d10) = 0;
    lVar3 = param_2[1];
    lVar4 = 0x1d18;
  }
  else {
LAB_148808936:
    *(longlong *)(param_1 + 0x1d10) = lVar3;
    plVar1 = (longlong *)param_2[1];
    *(longlong **)(param_1 + 0x1d18) = plVar1;
    if (plVar1 == (longlong *)0x0 || lVar3 == 0) goto LAB_1488088d8;
    uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1);
    lVar3 = FUN_14880897a(param_1,uVar2);
    lVar4 = 0x1d38;
  }
  *(longlong *)(param_1 + lVar4) = lVar3;
LAB_1488088d8:
  if (((&DAT_00001100)[param_1] == '\n') && (*(longlong *)(param_1 + 0x110) != 0)) {
    FUN_148808a42(param_1);
    *(byte *)(param_1 + 0x1d34) = *(byte *)(param_1 + 0x1d34) & 0xfe;
  }
  return;
}



// FUNCTION 14880897a FUN_14880897a body=200 status=ok
// SIG undefined FUN_14880897a(void)

longlong FUN_14880897a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0x1e00) != *(int *)(param_1 + 0x1e2c)) {
    lVar1 = *param_2;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar5 = (uint)lVar1 & 0xffff;
    lVar4 = param_1 + 0x1e30;
    if (*(longlong *)(param_1 + 0x1e38) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x1e38);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x1e40) - 1U &
                             (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar5) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      lVar4 = *(longlong *)(param_1 + 0x1df8);
      iVar7 = iVar6;
      do {
        if (*(longlong *)(lVar4 + (longlong)iVar7 * 0x18) == lVar1) goto LAB_148808a25;
        iVar7 = *(int *)(lVar4 + (longlong)iVar7 * 0x18 + 0x10);
      } while (iVar7 != -1);
    }
  }
  plVar3 = (longlong *)(param_1 + 0x1df0);
  goto LAB_14880898f;
  while (iVar6 = (int)plVar3[2], iVar6 != -1) {
LAB_148808a25:
    plVar3 = (longlong *)(lVar4 + (longlong)iVar6 * 0x18);
    if (*plVar3 == lVar1) goto LAB_148808a39;
  }
  plVar3 = (longlong *)0x0;
LAB_148808a39:
  plVar3 = plVar3 + 1;
LAB_14880898f:
  return *plVar3;
}



// FUNCTION 148808a42 FUN_148808a42 body=777 status=ok
// SIG undefined FUN_148808a42(void)

void FUN_148808a42(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [24];
  double local_c8;
  double dStack_c0;
  double local_b8;
  double local_a8;
  double local_a0;
  double local_98;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_b8 = DAT_14c8464f0;
  local_c8 = DAT_14c8464e0;
  dStack_c0 = DAT_14c8464e8;
  if ((longlong)*(int *)(param_1 + 0x1d08) != 0) {
    plVar4 = *(longlong **)(param_1 + 0x1d00);
    plVar3 = plVar4 + (longlong)*(int *)(param_1 + 0x1d08) * 2;
    do {
      lVar2 = *plVar4;
      if ((lVar2 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar2);
      }
      plVar1 = (longlong *)plVar4[1];
      if (plVar1 != (longlong *)0x0 && lVar2 != 0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_a8,param_1);
        dVar7 = local_a8 * local_a8 + local_a0 * local_a0;
        if ((dVar7 != 1.0) || (NAN(dVar7))) {
          dVar5 = DAT_14c8464e8;
          dVar6 = DAT_14c8464e0;
          dVar8 = DAT_14c8464f0;
          if (9.99999993922529e-09 <= dVar7) {
            dVar5 = local_a0 * (1.0 / SQRT(dVar7));
            dVar6 = local_a8 * (1.0 / SQRT(dVar7));
            dVar8 = 0.0;
          }
        }
        else {
          dVar5 = local_a0;
          dVar6 = local_a8;
          dVar8 = (double)(-(ulonglong)(local_98 == 0.0) & (ulonglong)local_98);
        }
        local_b8 = local_b8 - dVar8;
        local_c8 = local_c8 - dVar6;
        dStack_c0 = dStack_c0 - dVar5;
      }
      plVar4 = plVar4 + 2;
    } while (plVar4 != plVar3);
  }
  if (((9.999999747378752e-05 < ABS(local_c8)) || (9.999999747378752e-05 < ABS(dStack_c0))) ||
     (9.999999747378752e-05 < ABS(local_b8))) {
    dVar7 = local_c8 * local_c8 + dStack_c0 * dStack_c0;
    if ((dVar7 != 1.0) || (NAN(dVar7))) {
      dVar5 = DAT_14c8464e0;
      dVar6 = DAT_14c8464e8;
      local_b8 = DAT_14c8464f0;
      if (9.99999993922529e-09 <= dVar7) {
        dVar6 = dStack_c0 * (1.0 / SQRT(dVar7));
        dVar5 = local_c8 * (1.0 / SQRT(dVar7));
        local_b8 = 0.0;
      }
    }
    else {
      dVar5 = local_c8;
      dVar6 = dStack_c0;
      local_b8 = (double)(-(ulonglong)(local_b8 == 0.0) & (ulonglong)local_b8);
    }
    local_c8 = dVar5;
    dStack_c0 = dVar6;
    if ((*(longlong *)(&DAT_00001ce8 + param_1) != 0) &&
       (lVar2 = FUN_144a782da(*(longlong *)(&DAT_00001ce8 + param_1) + 0x1808,&DAT_14cb72618),
       lVar2 != 0)) {
      FUN_144a79a9c(&local_c8,local_e0);
      FUN_1487d9742(&local_a8,local_e0);
      FUN_1406ebff6(lVar2,4,&local_a8);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148808d4c FUN_148808d4c body=386 status=ok
// SIG undefined FUN_148808d4c(void)

void FUN_148808d4c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  FUN_14880e586();
  if (*(longlong *)(param_1 + 0x1d10) == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x1d18);
  }
  lVar4 = 0;
  if (*param_2 != 0) {
    lVar4 = param_2[1];
  }
  if ((*(longlong *)(param_1 + 0x1d10) == *param_2) && (lVar3 == lVar4)) {
    if (*(int *)(param_1 + 0x1d08) < 1) {
      *(longlong *)(param_1 + 0x1d10) = 0;
      *(undefined8 *)(param_1 + 0x1d18) = 0;
    }
    else {
      plVar1 = *(longlong **)(param_1 + 0x1d00);
      lVar3 = *plVar1;
      if ((lVar3 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar3);
      }
      plVar1 = (longlong *)plVar1[1];
      if ((lVar3 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar3);
      }
      *(longlong *)(param_1 + 0x1d10) = lVar3;
      *(longlong **)(param_1 + 0x1d18) = plVar1;
      if (plVar1 != (longlong *)0x0 && lVar3 != 0) {
        uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1);
        uVar2 = FUN_14880897a(param_1,uVar2);
        *(undefined8 *)(param_1 + 0x1d38) = uVar2;
      }
    }
    if ((*(longlong *)(param_1 + 0x1d20) != 0) && (*(longlong *)(param_1 + 0x1d28) != 0)) {
      lVar3 = *(longlong *)(param_1 + 0x1d10);
      lVar4 = 0;
      if (lVar3 != 0) {
        lVar4 = *(longlong *)(param_1 + 0x1d18);
      }
      if ((*(longlong *)(param_1 + 0x1d20) != lVar3) || (*(longlong *)(param_1 + 0x1d28) != lVar4))
      {
        *(undefined8 *)(param_1 + 0x1d20) = 0;
        *(undefined8 *)(param_1 + 0x1d28) = 0;
      }
    }
  }
  FUN_148808a42(param_1);
  *(byte *)(param_1 + 0x1d34) = *(byte *)(param_1 + 0x1d34) & 0xfe;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148808ed0 FUN_148808ed0 body=123 status=ok
// SIG undefined FUN_148808ed0(void)

void FUN_148808ed0(longlong *param_1)

{
  byte bVar1;
  
  if ((longlong *)param_1[0x39d] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x39d] + 0x948))();
  }
  *(byte *)((longlong)param_1 + 0x1d34) = *(byte *)((longlong)param_1 + 0x1d34) & 0xfe;
  if (param_1[0x15] != 0) {
    bVar1 = *(byte *)(param_1[0x15] + 0x178);
    if (bVar1 < 2) {
      if ((bVar1 == 1) && (*(char *)((longlong)param_1 + 0x1dd1) == '\0')) {
        (**(code **)(*param_1 + 0xd78))(param_1);
      }
    }
    else {
      FUN_14880a276(param_1);
      FUN_148808a42(param_1);
    }
  }
  if ((char)param_1[0x3b8] == '\x03') {
    *(byte *)((longlong)param_1 + 0x1d34) = *(byte *)((longlong)param_1 + 0x1d34) | 8;
  }
  return;
}



// FUNCTION 148808f4c FUN_148808f4c body=202 status=ok
// SIG undefined FUN_148808f4c(void)

void FUN_148808f4c(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  
  if (*(longlong **)(&DAT_00001ce8 + param_1) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(&DAT_00001ce8 + param_1) + 0x950))();
    if (*(longlong **)(&DAT_00001ce8 + param_1) != (longlong *)0x0) {
      cVar1 = (**(code **)(**(longlong **)(&DAT_00001ce8 + param_1) + 0x700))();
      bVar3 = (byte)*(undefined4 *)(param_1 + 0x1d34);
      bVar4 = bVar3 & 0xf0;
      if (cVar1 == '\0') {
        bVar4 = bVar3;
      }
      goto LAB_148808f91;
    }
  }
  bVar4 = *(byte *)(param_1 + 0x1d34);
LAB_148808f91:
  *(byte *)(param_1 + 0x1d34) = bVar4 & 0xf2;
  if ((*(longlong *)(param_1 + 0xa8) != 0) && (1 < *(byte *)(*(longlong *)(param_1 + 0xa8) + 0x178))
     ) {
    FUN_14880a276(param_1);
    if (*(longlong *)(&DAT_00001ce8 + param_1) != 0) {
      lVar2 = FUN_144a782da(*(longlong *)(&DAT_00001ce8 + param_1) + 0x1808,&DAT_14cb72618);
      if (lVar2 != 0) {
        FUN_140c82872(lVar2,4);
      }
    }
  }
  cVar1 = FUN_144a80e0c(param_1);
  if (cVar1 != '\0') {
    FUN_1409df526(param_1,&DAT_14cb75f24);
    return;
  }
  return;
}



// FUNCTION 148809016 FUN_148809016 body=700 status=ok
// SIG undefined FUN_148809016(void)

double * FUN_148809016(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong *plVar6;
  uint uVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_a8 [32];
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_2[2] = DAT_14c8464f0;
  dVar1 = DAT_14c8464e8;
  *param_2 = DAT_14c8464e0;
  param_2[1] = dVar1;
  dVar1 = *(double *)(param_1 + 0x388);
  dVar2 = *(double *)(param_1 + 0x390);
  dVar3 = *(double *)(param_1 + 0x398);
  fVar10 = (float)SQRT(dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2);
  dVar4 = DAT_14c8464f0;
  dVar5 = DAT_14c8464e8;
  dVar9 = DAT_14c8464e0;
  if (1e-08 < fVar10) {
    dVar9 = 1.0 / (double)fVar10;
    dVar4 = dVar3 * dVar9;
    dVar5 = dVar2 * dVar9;
    dVar9 = dVar1 * dVar9;
  }
  if (*(longlong *)(param_1 + 0x1d10) == 0) {
    plVar6 = (longlong *)0x0;
  }
  else {
    plVar6 = *(longlong **)(param_1 + 0x1d18);
  }
  (**(code **)(*plVar6 + 0x30))(plVar6,&local_88);
  fVar11 = (float)(local_78 * dVar4 + local_88 * dVar9 + local_80 * dVar5);
  fVar8 = ABS(fVar11);
  if (fVar8 <= 0.707107) {
    if (*(longlong *)(param_1 + 0x1d10) == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = *(longlong **)(param_1 + 0x1d18);
    }
    (**(code **)(*plVar6 + 0x38))(fVar8,&local_88,param_1);
    if (dVar4 * local_78 + dVar9 * local_88 + dVar5 * local_80 <= 0.0) {
      if (*(longlong *)(param_1 + 0x1d10) == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *(longlong **)(param_1 + 0x1d18);
      }
      (**(code **)(*plVar6 + 0x30))(0,&local_88);
    }
    else {
      if (*(longlong *)(param_1 + 0x1d10) == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *(longlong **)(param_1 + 0x1d18);
      }
      (**(code **)(*plVar6 + 0x30))(0,&local_88);
      fVar10 = -fVar10;
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x1d10) == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = *(longlong **)(param_1 + 0x1d18);
    }
    (**(code **)(*plVar6 + 0x30))(fVar8,&local_88);
    uVar7 = -(uint)(0.0 < fVar11);
    fVar10 = (float)(~uVar7 & (uint)-fVar10 | (uint)fVar10 & uVar7);
  }
  dVar1 = (double)fVar10;
  *param_2 = dVar1 * local_88;
  param_2[1] = local_80 * dVar1;
  param_2[2] = local_78 * dVar1;
  if ((local_70 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1488092d4 FUN_1488092d4 body=835 status=ok
// SIG undefined FUN_1488092d4(void)

void FUN_1488092d4(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  double dVar5;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  double local_b8;
  double dStack_b0;
  double local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    dVar5 = *(double *)(param_1 + 0x388);
    dVar1 = *(double *)(param_1 + 0x390);
    dVar2 = *(double *)(param_1 + 0x398);
    if (((9.999999747378752e-05 < ABS(dVar5)) || (9.999999747378752e-05 < ABS(dVar1))) ||
       (9.999999747378752e-05 < ABS(dVar2))) {
      dVar3 = 1.0 / SQRT(dVar2 * dVar2 + dVar5 * dVar5 + dVar1 * dVar1);
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x1f0) + 0x1c8);
      if (lVar4 == 0) {
        local_88 = DAT_14c8462e8;
        local_98 = DAT_14c8462d8;
        uStack_90 = DAT_14c8462e0;
        lVar4 = 0;
      }
      else {
        FUN_14141a100(lVar4,&local_98);
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x1f0) + 0x1c8);
      }
      if (lVar4 == 0) {
        local_a8 = DAT_14c8462a0;
        local_b8 = DAT_14c846290;
        dStack_b0 = DAT_14c846298;
        lVar4 = 0;
      }
      else {
        FUN_14348affe(lVar4,&local_b8);
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x1f0) + 0x1c8);
      }
      dVar5 = local_a8 * dVar2 * dVar3 + local_b8 * dVar3 * dVar5 + dStack_b0 * dVar1 * dVar3;
      if (lVar4 == 0) {
        local_c8 = DAT_14c8462d0;
        local_d8 = DAT_14c8462c0;
        uStack_d0 = DAT_14c8462c8;
      }
      else {
        FUN_14133901a(CONCAT44((int)((ulonglong)dVar5 >> 0x20),(float)dVar5),&local_d8);
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14880964c FUN_14880964c body=475 status=ok
// SIG undefined FUN_14880964c(void)

double * FUN_14880964c(longlong param_1,double *param_2,double *param_3)

{
  char cVar1;
  longlong *plVar2;
  double dVar3;
  undefined1 auStack_88 [32];
  double local_68;
  double local_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_2[2] = param_3[2];
  dVar3 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = dVar3;
  if ((*(longlong *)(param_1 + 0x1d10) != 0) &&
     (*(longlong **)(param_1 + 0x1d18) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x1d18) + 0x98))();
    if (cVar1 == '\0') {
      if (*(longlong *)(param_1 + 0x1d10) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x1d18);
      }
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_68);
      dVar3 = (double)(float)(param_3[2] * local_58 + *param_3 * local_68 + param_3[1] * local_60);
      *param_2 = local_68 * dVar3;
      param_2[1] = local_60 * dVar3;
      param_2[2] = local_58 * dVar3;
    }
    else {
      if (*(longlong *)(param_1 + 0x1d10) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x1d18);
      }
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_68,param_1);
      dVar3 = (param_2[2] * local_58 + *param_2 * local_68 + param_2[1] * local_60) /
              (local_58 * local_58 + local_68 * local_68 + local_60 * local_60);
      *param_2 = *param_2 - dVar3 * local_68;
      param_2[1] = param_2[1] - local_60 * dVar3;
      param_2[2] = param_2[2] - local_58 * dVar3;
    }
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148809828 FUN_148809828 body=1784 status=ok
// SIG undefined FUN_148809828(void)

undefined8 FUN_148809828(longlong *param_1,longlong *param_2)

{
  double dVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  bool bVar8;
  byte bVar9;
  char cVar10;
  byte bVar11;
  byte bVar12;
  char extraout_AL;
  undefined8 uVar13;
  undefined7 uVar14;
  undefined7 extraout_var;
  longlong *plVar15;
  bool bVar16;
  float fVar17;
  uint uVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  uint uVar27;
  undefined1 auStack_158 [39];
  char local_131;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double dStack_110;
  double local_108;
  undefined8 local_f8;
  double local_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (((*param_2 != 0) && (param_2[1] != 0)) &&
     (cVar10 = (**(code **)(*param_1 + 0xd58))(), cVar10 != '\0')) {
    if (*param_2 == 0) {
      plVar15 = (longlong *)0x0;
    }
    else {
      plVar15 = (longlong *)param_2[1];
    }
    cVar10 = (**(code **)(*plVar15 + 0x20))();
    if (cVar10 != '\0') {
      if (*param_2 == 0) {
        plVar15 = (longlong *)0x0;
      }
      else {
        plVar15 = (longlong *)param_2[1];
      }
      bVar11 = (**(code **)(*plVar15 + 0x58))();
      if (*param_2 == 0) {
        plVar15 = (longlong *)0x0;
      }
      else {
        plVar15 = (longlong *)param_2[1];
      }
      local_131 = (**(code **)(*plVar15 + 0x70))(plVar15,param_1);
      if (*param_2 == 0) {
        plVar15 = (longlong *)0x0;
      }
      else {
        plVar15 = (longlong *)param_2[1];
      }
      bVar12 = (**(code **)(*plVar15 + 0x80))(plVar15,param_1);
      FUN_1436034f6(param_1[0x3e],&local_118);
      local_f8 = 0;
      local_f0 = dStack_110;
      local_e8 = 0;
      FUN_144a76660(&local_f8,&local_118);
      dVar3 = local_118 * local_118 + dStack_110 * dStack_110;
      if ((dVar3 != 1.0) || (NAN(dVar3))) {
        if (9.99999993922529e-09 <= dVar3) {
          dVar5 = dStack_110 * (1.0 / SQRT(dVar3));
          dVar3 = local_118 * (1.0 / SQRT(dVar3));
          uVar23 = 0;
          uVar24 = 0;
        }
        else {
          uVar23 = SUB84(DAT_14c8464f0,0);
          uVar24 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
          dVar5 = DAT_14c8464e8;
          dVar3 = DAT_14c8464e0;
        }
      }
      else {
        uVar7 = -(ulonglong)(local_108 == 0.0) & (ulonglong)local_108;
        uVar23 = (undefined4)uVar7;
        uVar24 = (undefined4)(uVar7 >> 0x20);
        dVar5 = dStack_110;
        dVar3 = local_118;
      }
      if (*param_2 == 0) {
        plVar15 = (longlong *)0x0;
      }
      else {
        plVar15 = (longlong *)param_2[1];
      }
      (**(code **)(*plVar15 + 0x38))(plVar15,&local_118,param_1);
      dVar4 = local_118 * local_118 + dStack_110 * dStack_110;
      if ((dVar4 != 1.0) || (NAN(dVar4))) {
        if (9.99999993922529e-09 <= dVar4) {
          dVar6 = dStack_110 * (1.0 / SQRT(dVar4));
          dVar4 = local_118 * (1.0 / SQRT(dVar4));
          uVar25 = 0;
          uVar26 = 0;
        }
        else {
          uVar25 = SUB84(DAT_14c8464f0,0);
          uVar26 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
          dVar6 = DAT_14c8464e8;
          dVar4 = DAT_14c8464e0;
        }
      }
      else {
        uVar7 = -(ulonglong)(local_108 == 0.0) & (ulonglong)local_108;
        uVar25 = (undefined4)uVar7;
        uVar26 = (undefined4)(uVar7 >> 0x20);
        dVar6 = dStack_110;
        dVar4 = local_118;
      }
      uVar18 = 0xbff00000;
      if (bVar11 != 0) {
        uVar18 = 0x3ff00000;
      }
      uVar27 = 0xbff00000;
      if (bVar12 == 0) {
        uVar27 = uVar18;
      }
      local_108 = DAT_14c8464f0;
      local_118 = (double)param_1[0x5ee];
      dStack_110 = (double)param_1[0x5ef];
      bVar16 = false;
      if ((ABS(local_118) <= 9.999999747378752e-05) &&
         (bVar16 = false, ABS(dStack_110) <= 9.999999747378752e-05)) {
        bVar16 = ABS(DAT_14c8464f0) <= 9.999999747378752e-05;
      }
      FUN_1401c9a0e(&local_f8,&local_130,&local_118);
      dVar21 = local_130 * local_130 + local_128 * local_128;
      if ((dVar21 != 1.0) || (NAN(dVar21))) {
        dVar20 = DAT_14c8464e8;
        dVar22 = DAT_14c8464f0;
        dVar1 = DAT_14c8464e0;
        if (9.99999993922529e-09 <= dVar21) {
          dVar20 = local_128 * (1.0 / SQRT(dVar21));
          dVar1 = local_130 * (1.0 / SQRT(dVar21));
          dVar22 = 0.0;
        }
      }
      else {
        dVar20 = local_128;
        dVar22 = (double)(-(ulonglong)(local_120 == 0.0) & (ulonglong)local_120);
        dVar1 = local_130;
      }
      dVar21 = (double)CONCAT44(uVar26,uVar25) * (double)((ulonglong)uVar27 << 0x20);
      dVar6 = dVar6 * (double)((ulonglong)uVar27 << 0x20);
      dVar4 = dVar4 * (double)((ulonglong)uVar27 << 0x20);
      if (bVar16 == false) {
        bVar8 = dVar22 * dVar21 + dVar1 * dVar4 + dVar20 * dVar6 < 0.0;
      }
      else {
        bVar8 = false;
      }
      uVar13 = (**(code **)(param_1[0x2f] + 0xd8))();
      bVar9 = (byte)uVar13;
      dVar1 = (double)param_1[0x25];
      dVar20 = (double)param_1[0x26];
      dVar22 = dVar1 * dVar1 + dVar20 * dVar20;
      if ((dVar22 != 1.0) || (NAN(dVar22))) {
        if (9.99999993922529e-09 <= dVar22) {
          dVar20 = dVar20 * (1.0 / SQRT(dVar22));
          dVar1 = dVar1 * (1.0 / SQRT(dVar22));
          uVar25 = 0;
          uVar26 = 0;
        }
        else {
          uVar25 = SUB84(DAT_14c8464f0,0);
          uVar26 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
          dVar20 = DAT_14c8464e8;
          dVar1 = DAT_14c8464e0;
        }
      }
      else {
        uVar7 = -(ulonglong)((double)param_1[0x27] == 0.0) & param_1[0x27];
        uVar25 = (undefined4)uVar7;
        uVar26 = (undefined4)(uVar7 >> 0x20);
      }
      lVar2 = param_1[0x3a7];
      if (local_131 != '\0') {
        if (*param_2 == 0) {
          plVar15 = (longlong *)0x0;
        }
        else {
          plVar15 = (longlong *)param_2[1];
        }
        uVar13 = (**(code **)(*plVar15 + 0xb8))();
        if ((char)uVar13 != '\0') goto LAB_148809bff;
      }
      if (lVar2 != 0) {
        fVar17 = (float)((double)CONCAT44(uVar24,uVar23) * dVar21 + dVar3 * dVar4 + dVar5 * dVar6);
        if (local_131 != '\x01' || 0.0 <= fVar17) {
          if ((local_131 != '\0') && (*(char *)(lVar2 + 0x20) != '\x01')) goto LAB_148809bff;
          fVar19 = *(float *)(lVar2 + 0x18);
        }
        else {
          fVar17 = -fVar17;
          fVar19 = *(float *)(lVar2 + 0x1c);
        }
        if (fVar17 < fVar19) goto LAB_148809bff;
        uVar13 = 0;
        if (((double)param_1[0x27] < (double)-*(float *)(lVar2 + 0x24)) ||
           ((double)*(float *)(lVar2 + 0x24) < (double)param_1[0x27])) goto LAB_148809c01;
      }
      uVar14 = (undefined7)((ulonglong)uVar13 >> 8);
      if ((!bVar8 && (bVar16 & (bVar9 ^ 1 |
                               (double)CONCAT44(uVar26,uVar25) * dVar21 +
                               dVar1 * dVar4 + dVar6 * dVar20 <= 0.0)) == 0) &&
         ((param_1[0x3a4] == 0 || (param_1[0x3a5] == 0)))) {
        if ((bVar11 & bVar12) == 1) {
          if (param_1[0x3a2] == 0) {
            plVar15 = (longlong *)0x0;
          }
          else {
            plVar15 = (longlong *)param_1[0x3a3];
          }
          (**(code **)(*plVar15 + 0x78))(0,param_1);
          uVar14 = extraout_var;
          if (extraout_AL != '\0') goto LAB_148809bff;
        }
        uVar13 = CONCAT71(uVar14,1);
        goto LAB_148809c01;
      }
    }
  }
LAB_148809bff:
  uVar13 = 0;
LAB_148809c01:
  if ((local_e0 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13;
}



// FUNCTION 148809f22 FUN_148809f22 body=237 status=ok
// SIG undefined FUN_148809f22(void)

undefined8 FUN_148809f22(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (((char)param_1[0x38c] == '\0') &&
     (cVar1 = (**(code **)(*param_1 + 0xe78))(param_1,8), cVar1 != '\0')) {
    lVar2 = FUN_144b397ea(param_1);
    if (lVar2 != 0) {
      uVar3 = FUN_144b397ea(param_1);
      cVar1 = FUN_1411057e8(uVar3,0);
      if ((cVar1 != '\0') && (param_1[0x22] != 0)) {
        return 0;
      }
    }
    if ((((*(byte *)(param_1 + 0x3e3) & 1) == 0) &&
        (cVar1 = FUN_143e4a860(param_1,1), cVar1 == '\0')) &&
       ((((cVar1 = FUN_144a80e0c(param_1), cVar1 == '\0' ||
          (((char)param_1[0x220] != '\n' || (param_1[0x22] == 0)))) ||
         ((ABS((double)param_1[0x25]) <= 9.999999747378752e-05 &&
          ((ABS((double)param_1[0x26]) <= 9.999999747378752e-05 &&
           (ABS((double)param_1[0x27]) <= 9.999999747378752e-05)))))) ||
        (0.0 < (double)param_1[0x27] || (double)param_1[0x27] == 0.0)))) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14880a026 FUN_14880a026 body=493 status=ok
// SIG undefined FUN_14880a026(void)

undefined8 * FUN_14880a026(longlong param_1,undefined8 *param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *_Src;
  ulonglong uVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x1d38);
  if (lVar1 == 0) {
switchD_14880a057_default:
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[4] = 0;
  }
  else {
    switch(param_3) {
    case 1:
      if ((((*(byte *)(param_1 + 0x1d34) & 4) == 0) && (*(longlong *)(param_1 + 0xa8) != 0)) &&
         (1 < *(byte *)(*(longlong *)(param_1 + 0xa8) + 0x178))) {
        *param_2 = *(undefined8 *)(lVar1 + 0x140);
        uVar2 = *(undefined4 *)(lVar1 + 0x14c);
        uVar3 = *(undefined4 *)(lVar1 + 0x150);
        uVar4 = *(undefined4 *)(lVar1 + 0x154);
        *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar1 + 0x148);
        *(undefined4 *)((longlong)param_2 + 0xc) = uVar2;
        *(undefined4 *)(param_2 + 2) = uVar3;
        *(undefined4 *)((longlong)param_2 + 0x14) = uVar4;
        param_2[3] = 0;
        uVar5 = (ulonglong)*(int *)(lVar1 + 0x160);
        _Src = *(void **)(lVar1 + 0x158);
      }
      else {
        *param_2 = *(undefined8 *)(lVar1 + 0x50);
        uVar2 = *(undefined4 *)(lVar1 + 0x5c);
        uVar3 = *(undefined4 *)(lVar1 + 0x60);
        uVar4 = *(undefined4 *)(lVar1 + 100);
        *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar1 + 0x58);
        *(undefined4 *)((longlong)param_2 + 0xc) = uVar2;
        *(undefined4 *)(param_2 + 2) = uVar3;
        *(undefined4 *)((longlong)param_2 + 0x14) = uVar4;
        param_2[3] = 0;
        uVar5 = (ulonglong)*(int *)(lVar1 + 0x70);
        _Src = *(void **)(lVar1 + 0x68);
      }
      break;
    case 2:
      *param_2 = *(undefined8 *)(lVar1 + 0x78);
      uVar2 = *(undefined4 *)(lVar1 + 0x84);
      uVar3 = *(undefined4 *)(lVar1 + 0x88);
      uVar4 = *(undefined4 *)(lVar1 + 0x8c);
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar1 + 0x80);
      *(undefined4 *)((longlong)param_2 + 0xc) = uVar2;
      *(undefined4 *)(param_2 + 2) = uVar3;
      *(undefined4 *)((longlong)param_2 + 0x14) = uVar4;
      param_2[3] = 0;
      uVar5 = (ulonglong)*(int *)(lVar1 + 0x98);
      _Src = *(void **)(lVar1 + 0x90);
      break;
    case 3:
      *param_2 = *(undefined8 *)(lVar1 + 0xa0);
      uVar2 = *(undefined4 *)(lVar1 + 0xac);
      uVar3 = *(undefined4 *)(lVar1 + 0xb0);
      uVar4 = *(undefined4 *)(lVar1 + 0xb4);
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar1 + 0xa8);
      *(undefined4 *)((longlong)param_2 + 0xc) = uVar2;
      *(undefined4 *)(param_2 + 2) = uVar3;
      *(undefined4 *)((longlong)param_2 + 0x14) = uVar4;
      param_2[3] = 0;
      uVar5 = (ulonglong)*(int *)(lVar1 + 0xc0);
      _Src = *(void **)(lVar1 + 0xb8);
      break;
    case 4:
      *param_2 = *(undefined8 *)(lVar1 + 200);
      uVar2 = *(undefined4 *)(lVar1 + 0xd4);
      uVar3 = *(undefined4 *)(lVar1 + 0xd8);
      uVar4 = *(undefined4 *)(lVar1 + 0xdc);
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar1 + 0xd0);
      *(undefined4 *)((longlong)param_2 + 0xc) = uVar2;
      *(undefined4 *)(param_2 + 2) = uVar3;
      *(undefined4 *)((longlong)param_2 + 0x14) = uVar4;
      param_2[3] = 0;
      uVar5 = (ulonglong)*(int *)(lVar1 + 0xe8);
      _Src = *(void **)(lVar1 + 0xe0);
      break;
    case 5:
      *param_2 = *(undefined8 *)(lVar1 + 0xf0);
      uVar2 = *(undefined4 *)(lVar1 + 0xfc);
      uVar3 = *(undefined4 *)(lVar1 + 0x100);
      uVar4 = *(undefined4 *)(lVar1 + 0x104);
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar1 + 0xf8);
      *(undefined4 *)((longlong)param_2 + 0xc) = uVar2;
      *(undefined4 *)(param_2 + 2) = uVar3;
      *(undefined4 *)((longlong)param_2 + 0x14) = uVar4;
      param_2[3] = 0;
      uVar5 = (ulonglong)*(int *)(lVar1 + 0x110);
      _Src = *(void **)(lVar1 + 0x108);
      break;
    case 6:
      *param_2 = *(undefined8 *)(lVar1 + 0x118);
      uVar2 = *(undefined4 *)(lVar1 + 0x124);
      uVar3 = *(undefined4 *)(lVar1 + 0x128);
      uVar4 = *(undefined4 *)(lVar1 + 300);
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar1 + 0x120);
      *(undefined4 *)((longlong)param_2 + 0xc) = uVar2;
      *(undefined4 *)(param_2 + 2) = uVar3;
      *(undefined4 *)((longlong)param_2 + 0x14) = uVar4;
      param_2[3] = 0;
      uVar5 = (ulonglong)*(int *)(lVar1 + 0x138);
      _Src = *(void **)(lVar1 + 0x130);
      break;
    default:
      goto switchD_14880a057_default;
    }
    *(int *)(param_2 + 4) = (int)uVar5;
    if (uVar5 == 0) {
      *(undefined4 *)((longlong)param_2 + 0x24) = 0;
    }
    else {
      FUN_1446dd670(param_2 + 3,uVar5 & 0xffffffff,0);
      memcpy((void *)param_2[3],_Src,uVar5 * 2);
    }
  }
  return param_2;
}



// FUNCTION 14880a214 FUN_14880a214 body=98 status=ok
// SIG undefined FUN_14880a214(void)

void FUN_14880a214(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_140613f88(*(longlong *)(param_1 + 0x110),param_3,0,0,0);
  }
  *(undefined1 *)(param_1 + 0x1d40) = *(undefined1 *)(param_1 + 0x1dd1);
  puVar2 = (undefined8 *)(param_1 + 0x1d50);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)(param_1 + 0x1dd2) = *(undefined1 *)(param_1 + 0x1dd0);
  FUN_14880a276(param_1);
  return;
}



// FUNCTION 14880a276 FUN_14880a276 body=1435 status=ok
// SIG undefined FUN_14880a276(void)

void FUN_14880a276(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  bool bVar8;
  byte bVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 unaff_RDI;
  longlong *plVar15;
  longlong *plVar16;
  undefined1 auStack_308 [32];
  longlong **local_2e8;
  longlong *local_2d8;
  longlong *plStack_2d0;
  undefined1 local_2c0 [24];
  longlong local_2a8;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 local_288;
  undefined8 uStack_280;
  longlong local_278;
  longlong lStack_270;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  longlong *local_258;
  undefined8 uStack_250;
  ulonglong local_248;
  undefined **ppuStack_240;
  undefined *local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  longlong local_218;
  ulonglong uStack_210;
  undefined4 local_208;
  undefined8 local_204;
  undefined4 local_1fc;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined4 local_1d0;
  undefined2 local_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined **local_190;
  undefined *local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_160;
  undefined4 local_158;
  undefined8 local_154;
  undefined4 local_14c;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined2 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  longlong local_d8;
  longlong lStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  longlong lStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_308;
  if (param_1[0x39d] != 0) {
    cVar3 = (char)param_1[0x3a8];
    if ((cVar3 != '\0') && ((char)param_1[0x3b8] != cVar3)) {
      *(undefined1 *)((longlong)param_1 + 0x293) = 0;
      local_278 = param_1[0x3aa];
      lStack_270 = param_1[0x3ab];
      local_268 = (undefined4)param_1[0x3ac];
      uStack_264 = *(undefined4 *)((longlong)param_1 + 0x1d64);
      uStack_260 = (undefined4)param_1[0x3ad];
      uStack_25c = *(undefined4 *)((longlong)param_1 + 0x1d6c);
      dVar4 = (double)param_1[0x3ae];
      dVar5 = (double)param_1[0x3af];
      dVar6 = (double)param_1[0x3b0];
      lVar7 = param_1[0x3b1];
      local_288 = param_1[0x3b4];
      uStack_280 = param_1[0x3b5];
      local_298 = (undefined4)param_1[0x3b2];
      uStack_294 = *(undefined4 *)((longlong)param_1 + 0x1d94);
      uStack_290 = (undefined4)param_1[0x3b3];
      uStack_28c = *(undefined4 *)((longlong)param_1 + 0x1d9c);
      (**(code **)(*param_1 + 0xd70))
                (param_1,local_2c0,CONCAT71((int7)((ulonglong)unaff_RDI >> 8),cVar3) & 0xffffffff);
      bVar9 = (char)param_1[0x3a8] - 1;
      if (bVar9 < 4) {
        FUN_14184d0b2(*(longlong *)(&DAT_14b3f2890 + (ulonglong)bVar9 * 8) + (longlong)param_1);
      }
      lVar10 = FUN_140963a30(local_2c0);
      if (lVar10 == 0) {
        bVar8 = true;
        plVar14 = (longlong *)0x0;
        plVar15 = (longlong *)0x0;
      }
      else {
        uVar11 = (**(code **)(*(longlong *)(param_1[0x39d] + 0x10e0) + 0x50))
                           (param_1[0x39d] + 0x10e0);
        local_238 = (undefined *)0x0;
        uStack_220 = 0;
        local_218 = 0;
        uStack_210 = 0;
        local_248 = 0;
        ppuStack_240 = (undefined **)0x0;
        local_258 = (longlong *)0x0;
        uStack_250 = 0;
        uStack_230 = 0x8000000000;
        local_228 = 0xffffffff;
        uVar12 = FUN_140963a30(local_2c0);
        local_2e8 = &local_258;
        FUN_14122243a(uVar11,&local_2d8,uVar12,1);
        plVar14 = plStack_2d0;
        plVar15 = local_2d8;
        local_2d8 = (longlong *)0x0;
        if (plStack_2d0 != (longlong *)0x0) {
          plStack_2d0 = (longlong *)0x0;
        }
        uStack_210 = uStack_210 & 0xffffffff00000000;
        if (local_218 != 0) {
          FUN_1400020a8();
        }
        FUN_140333f4e(&local_258);
        if (plVar14 == (longlong *)0x0) {
          plVar14 = (longlong *)0x0;
          bVar8 = true;
        }
        else {
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
          bVar8 = false;
        }
      }
      plVar16 = (longlong *)param_1[0x3b7];
      param_1[0x3b6] = (longlong)plVar15;
      param_1[0x3b7] = (longlong)plVar14;
      if (plVar16 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar16 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar16)(plVar16);
          LOCK();
          piVar2 = (int *)((longlong)plVar16 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
          }
        }
      }
      *(char *)(param_1 + 0x3b8) = cVar3;
      if ((plVar15 == (longlong *)0x0 || param_1[0x39d] == 0) || ((char)plVar15[0x14] != '\0')) {
        (**(code **)(*param_1 + 0xd78))(param_1);
      }
      else {
        if ((((byte)(cVar3 - 3U) < 2) &&
            (((((dVar4 != 0.0 || (NAN(dVar4))) || (dVar5 != 0.0)) ||
              ((NAN(dVar5) || (dVar6 != 0.0)))) || (NAN(dVar6))))) &&
           (lVar10 = param_1[0x3a7], lVar10 != 0)) {
          local_2d8 = (longlong *)0x0;
          plStack_2d0 = (longlong *)0x0;
          (**(code **)(*plVar15 + 8))(plVar15,&local_2d8,&DAT_14cb8d438);
          if ((0 < (int)plStack_2d0) &&
             (plVar16 = (longlong *)*local_2d8, plVar16 != (longlong *)0x0)) {
            (**(code **)(*plVar16 + 0x2b0))(plVar16);
            lVar13 = FUN_1402576f0();
            if ((*(int *)(plVar16[2] + 0x38) < *(int *)(lVar13 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(plVar16[2] + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8) !=
                lVar13 + 0x30)) {
              plVar16 = (longlong *)0x0;
            }
            local_258 = (longlong *)0x0;
            local_248 = local_248 & 0xffffffffffffff00;
            ppuStack_240 = &PTR_FUN_14b00bdf8;
            uStack_210 = 0;
            local_208 = 0;
            uStack_230 = 0;
            local_228 = 0;
            local_204 = 0xffffffff00000080;
            local_1fc = 0;
            local_1f0 = 0;
            local_1e8 = 0;
            local_1e0 = 0;
            uStack_1d8 = 0;
            local_1d0 = 0x7f7fffff;
            local_1cc = 0x404;
            local_238 = &DAT_14a176f00;
            local_1c8 = 0;
            uStack_1c0 = 0;
            local_1b8 = 0;
            uStack_1b0 = 0;
            local_1a8 = 0;
            uStack_1a0 = 0;
            local_198 = 0;
            local_190 = &PTR_FUN_14b00bdf8;
            local_160 = 0;
            local_158 = 0;
            local_180 = 0;
            uStack_178 = 0;
            local_154 = 0xffffffff00000080;
            local_14c = 0;
            local_140 = 0;
            local_138 = 0;
            local_130 = 0;
            uStack_128 = 0;
            local_120 = 0x7f7fffff;
            local_11c = 0x404;
            local_188 = &DAT_14a176f00;
            local_e8 = 0;
            local_f8 = 0;
            uStack_f0 = 0;
            local_108 = 0;
            uStack_100 = 0;
            local_118 = 0;
            uStack_110 = 0;
            uStack_250 = CONCAT44(0xbf800000,
                                  *(undefined4 *)(lVar10 + 0x2c + (ulonglong)(cVar3 != '\x03') * 4))
            ;
            local_c8 = CONCAT44(uStack_264,local_268);
            uStack_c0 = CONCAT44(uStack_25c,uStack_260);
            local_d8 = local_278;
            lStack_d0 = lStack_270;
            local_98 = local_298;
            uStack_94 = uStack_294;
            uStack_90 = uStack_290;
            uStack_8c = uStack_28c;
            local_88 = (undefined4)local_288;
            uStack_84 = local_288._4_4_;
            uStack_80 = (undefined4)uStack_280;
            uStack_7c = uStack_280._4_4_;
            local_b8 = dVar4;
            dStack_b0 = dVar5;
            local_a8 = dVar6;
            lStack_a0 = lVar7;
            if ((plVar16 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(plVar16);
            }
            local_258 = plVar16;
            FUN_143cdf59a(param_1);
            FUN_14051f4c4(&local_190);
            FUN_14051f4c4(&ppuStack_240);
          }
          if (local_2d8 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
        local_258 = (longlong *)&LAB_14880a812;
        uStack_250 = uStack_250 & 0xffffffff00000000;
        FUN_141241b12(plVar15 + 3,&local_2d8,param_1);
        if ((param_1[0x15] != 0) && (*(char *)(param_1[0x15] + 0x178) == '\x03')) {
          *(char *)(param_1 + 0x3ba) = (char)param_1[0x3ba] + '\x01';
          *(char *)((longlong)param_1 + 0x1dd1) = cVar3;
          FUN_144a62f0c(param_1,param_1[7],5);
        }
      }
      if (!bVar8) {
        LOCK();
        plVar15 = plVar14 + 1;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)*plVar15 == 0) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar2 = (int *)((longlong)plVar14 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
      }
      if (local_2a8 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14880a81c FUN_14880a81c body=178 status=ok
// SIG undefined FUN_14880a81c(void)

void FUN_14880a81c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  *(undefined8 *)(param_1 + 0x1db0) = 0;
  plVar3 = *(longlong **)(param_1 + 0x1db8);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1db8) = 0;
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
  *(undefined1 *)(param_1 + 0x1dc0) = 0;
  *(undefined1 *)(param_1 + 0x1d40) = 0;
  puVar5 = &DAT_14c846480;
  puVar6 = (undefined8 *)(param_1 + 0x1d50);
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  if ((*(longlong *)(param_1 + 0xa8) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0xa8) + 0x178) == '\x03')) {
    *(undefined1 *)(param_1 + 0x1dd1) = 0;
    FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x38),5);
  }
  FUN_146548c0c(param_1);
  FUN_140572fa0(param_1);
  return;
}



// FUNCTION 14880a8d2 FUN_14880a8d2 body=5803 status=ok
// SIG undefined FUN_14880a8d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14880a8d2(longlong *param_1,float param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  double dVar34;
  double dVar35;
  longlong lVar36;
  longlong lVar37;
  double dVar38;
  longlong lVar39;
  longlong lVar40;
  undefined1 auStack_338 [32];
  undefined8 *local_318;
  undefined1 local_310;
  int local_304;
  longlong *local_2f8;
  longlong *local_2f0;
  double local_2e8;
  double local_2e0;
  longlong *local_2d8;
  longlong *local_2d0;
  double local_2c8;
  undefined8 uStack_2c0;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  double local_2a0;
  double local_298;
  double local_290;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  double local_278;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  double local_258;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 local_228;
  undefined8 uStack_220;
  double local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined8 uStack_200;
  double local_1f8;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined4 local_164;
  byte local_15b;
  undefined4 local_138;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_338;
  if (1e-06 <= param_2) {
    if ((param_1[0x39e] == 0) || (lVar12 = param_1[0x3e], lVar12 == 0)) {
LAB_14880bbb9:
      param_1[0x73] = (longlong)DAT_14c8464f0;
      lVar12 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      param_1[0x71] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      param_1[0x72] = lVar12;
      uVar16 = DAT_14c8464e8._4_4_;
      uVar20 = (undefined4)DAT_14c8464e8;
      uVar19 = DAT_14c8464e0._4_4_;
      *(undefined4 *)(param_1 + 0x25) = (undefined4)DAT_14c8464e0;
      *(undefined4 *)((longlong)param_1 + 300) = uVar19;
      *(undefined4 *)(param_1 + 0x26) = uVar20;
      *(undefined4 *)((longlong)param_1 + 0x134) = uVar16;
      param_1[0x27] = (longlong)DAT_14c8464f0;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_338);
    }
    if ((*(longlong *)(lVar12 + 0x3c0) == 0) &&
       (((*(byte *)((longlong)param_1 + 0x349) & 8) == 0 && ((char)param_1[0x1f0] == '\0')))) {
      cVar9 = FUN_1434e77c6(param_1 + 0x1b1);
      lVar12 = param_1[0x3e];
      if ((cVar9 == '\0') && (*(char *)(lVar12 + 0x178) != '\x01')) goto LAB_14880bbb9;
    }
    if (*(char *)(lVar12 + 0x178) == '\x01') {
      local_108 = (double)param_2;
      local_f8 = (double)param_1[0x27] * local_108;
      uStack_100 = (double)param_1[0x26] * local_108;
      local_108 = local_108 * (double)param_1[0x25];
      if ((((((local_108 != 0.0) || (NAN(local_108))) || (uStack_100 != 0.0)) ||
           ((NAN(uStack_100) || (local_f8 != 0.0)))) || (NAN(local_f8))) &&
         (lVar12 = param_1[0x22], lVar12 != 0)) {
        memset(&local_208,0,0x100);
        local_138 = 0xffffffff;
        local_164 = 0xffffffff;
        local_208 = (double)CONCAT44(0x3f800000,(undefined4)local_208);
        local_228 = *(double *)(lVar12 + 0x240);
        uStack_220 = *(double *)(lVar12 + 0x248);
        local_218 = *(double *)(lVar12 + 0x250);
        uStack_210 = *(undefined4 *)(lVar12 + 600);
        uStack_20c = *(undefined4 *)(lVar12 + 0x25c);
        local_310 = 0;
        local_318 = &local_208;
        FUN_1402eda10(param_1,&local_108,&local_228,1);
      }
    }
    else {
      uVar10 = (**(code **)(*(longlong *)param_1[0x22] + 0x570))();
      if ((5 < uVar10) || ((0x2aU >> (uVar10 & 0x1f) & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_338);
      }
      cVar9 = (**(code **)(*param_1 + 0xd50))(param_1);
      if ((((cVar9 == '\0') || (param_1[0x3a2] == 0)) ||
          ((longlong *)param_1[0x3a3] == (longlong *)0x0)) ||
         (cVar9 = (**(code **)(*(longlong *)param_1[0x3a3] + 0x20))(), cVar9 == '\0')) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_338);
      }
      *(byte *)((longlong)param_1 + 0x5b4) = *(byte *)((longlong)param_1 + 0x5b4) & 0xdf;
      plVar1 = param_1 + 0x3a2;
      local_2f0 = param_1 + 0x1b1;
      local_2f8 = param_1 + 0x25;
      local_2d0 = param_1 + 0x93;
      local_2d8 = param_1 + 0x95;
      uVar19 = 0xffffffff;
      uVar20 = 0x7fffffff;
      do {
        if ((((param_2 < 1e-06) || (*(int *)((longlong)param_1 + 0x444) <= param_3)) ||
            (param_1[0x3e] == 0)) ||
           (((*(longlong *)(param_1[0x3e] + 0x3c0) == 0 &&
             ((*(byte *)((longlong)param_1 + 0x349) & 8) == 0)) &&
            (((char)param_1[0x1f0] == '\0' &&
             ((cVar9 = FUN_1434e77c6(local_2f0), cVar9 == '\0' &&
              (*(char *)(param_1[0x3e] + 0x178) != '\x01')))))))) {
          if ((*plVar1 != 0) &&
             (((longlong *)param_1[0x3a3] != (longlong *)0x0 &&
              (cVar9 = (**(code **)(*(longlong *)param_1[0x3a3] + 0xd8))(), cVar9 != '\0')))) {
            FUN_148808a42(param_1);
          }
          break;
        }
        local_304 = param_3 + 1;
        *(byte *)((longlong)param_1 + 0x5b4) = *(byte *)((longlong)param_1 + 0x5b4) & 0xdf;
        fVar15 = (float)FUN_1479c4fce(param_1,param_2);
        if ((*(byte *)((longlong)param_1 + 0x1d34) & 1) == 0) {
          if (*plVar1 == 0) {
            plVar13 = (longlong *)0x0;
          }
          else {
            plVar13 = (longlong *)param_1[0x3a3];
          }
          (**(code **)(*plVar13 + 0x68))(plVar13,&local_108,param_1);
          if (param_1[0x3a2] == 0) {
            plVar13 = (longlong *)0x0;
          }
          else {
            plVar13 = (longlong *)param_1[0x3a3];
          }
          lVar12 = param_1[0x22];
          dVar4 = local_f8 - *(double *)(lVar12 + 0x270);
          dVar5 = uStack_100 - *(double *)(lVar12 + 0x268);
          dVar35 = local_108 - *(double *)(lVar12 + 0x260);
          (**(code **)(*plVar13 + 0x30))();
          dVar34 = (dVar4 * local_1f8 + dVar35 * local_208 + dVar5 * uStack_200) /
                   (local_1f8 * local_1f8 + local_208 * local_208 + uStack_200 * uStack_200);
          dVar4 = dVar4 - local_1f8 * dVar34;
          dVar5 = dVar5 - uStack_200 * dVar34;
          dVar35 = dVar35 - dVar34 * local_208;
          dVar34 = dVar4 * dVar4 + dVar35 * dVar35 + dVar5 * dVar5;
          if ((dVar34 != 1.0) || (NAN(dVar34))) {
            if (9.99999993922529e-09 <= dVar34) {
              dVar34 = 1.0 / SQRT(dVar34);
              dVar4 = dVar4 * dVar34;
              dVar5 = dVar5 * dVar34;
              dVar35 = dVar35 * dVar34;
            }
            else {
              dVar35 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
              dVar5 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
              dVar4 = DAT_14c8464f0;
            }
          }
          dVar34 = (double)fVar15;
          local_248 = (double)*(float *)(param_1[0x39e] + 0x23c);
          local_238 = dVar4 * dVar34 * local_248;
          dStack_240 = dVar5 * dVar34 * local_248;
          local_248 = dVar34 * dVar35 * local_248;
          if (((9.999999747378752e-05 < (double)((ulonglong)local_248 & CONCAT44(uVar20,uVar19))) ||
              (9.999999747378752e-05 < ABS(dStack_240))) || (9.999999747378752e-05 < ABS(local_238))
             ) {
            memset(&local_208,0,0x100);
            local_138 = 0xffffffff;
            local_164 = 0xffffffff;
            local_208 = (double)CONCAT44(0x3f800000,(undefined4)local_208);
            lVar12 = param_1[0x22];
            local_228 = *(double *)(lVar12 + 0x240);
            uStack_220 = *(double *)(lVar12 + 0x248);
            local_218 = *(double *)(lVar12 + 0x250);
            uStack_210 = *(undefined4 *)(lVar12 + 600);
            uStack_20c = *(undefined4 *)(lVar12 + 0x25c);
            local_310 = 0;
            local_318 = &local_208;
            FUN_1402eda10(param_1,&local_248,&local_228,0);
            if (param_1[0x3a2] == 0) {
              plVar13 = (longlong *)0x0;
            }
            else {
              plVar13 = (longlong *)param_1[0x3a3];
            }
            lVar12 = param_1[0x22];
            dVar6 = local_f8 - *(double *)(lVar12 + 0x270);
            dVar7 = uStack_100 - *(double *)(lVar12 + 0x268);
            dVar38 = local_108 - *(double *)(lVar12 + 0x260);
            (**(code **)(*plVar13 + 0x30))(plVar13,&local_228);
            dVar34 = (dVar6 * local_218 + dVar38 * local_228 + dVar7 * uStack_220) /
                     (local_218 * local_218 + local_228 * local_228 + uStack_220 * uStack_220);
            dVar6 = dVar6 - local_218 * dVar34;
            dVar7 = dVar7 - uStack_220 * dVar34;
            dVar38 = dVar38 - dVar34 * local_228;
            dVar34 = dVar6 * dVar6 + dVar38 * dVar38 + dVar7 * dVar7;
            if ((dVar34 != 1.0) || (NAN(dVar34))) {
              if (9.99999993922529e-09 <= dVar34) {
                dVar34 = 1.0 / SQRT(dVar34);
                dVar6 = dVar6 * dVar34;
                dVar7 = dVar7 * dVar34;
                dVar38 = dVar38 * dVar34;
              }
              else {
                dVar38 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
                dVar7 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
                dVar6 = DAT_14c8464f0;
              }
            }
            lVar12 = param_1[0x22];
            if (dVar4 * dVar6 + dVar35 * dVar38 + dVar5 * dVar7 <= 0.0) {
              local_258 = local_f8;
              local_268 = (undefined4)local_108;
              uStack_264 = local_108._4_4_;
              uStack_260 = (undefined4)uStack_100;
              uStack_25c = uStack_100._4_4_;
              local_318 = (undefined8 *)((ulonglong)local_318 & 0xffffffffffffff00);
              FUN_140d93b16(lVar12,&local_268,0);
            }
            else {
              uVar19 = 0xffffffff;
              uVar20 = 0x7fffffff;
              if (((9.999999747378752e-05 < ABS(*(double *)(lVar12 + 0x260) - local_108)) ||
                  (9.999999747378752e-05 < ABS(*(double *)(lVar12 + 0x268) - uStack_100))) ||
                 (9.999999747378752e-05 < ABS(*(double *)(lVar12 + 0x270) - local_f8)))
              goto LAB_14880b097;
            }
            uVar20 = 0x7fffffff;
            uVar19 = 0xffffffff;
            *(byte *)((longlong)param_1 + 0x1d34) = *(byte *)((longlong)param_1 + 0x1d34) | 1;
          }
        }
LAB_14880b097:
        lVar12 = param_1[0x22];
        local_2b8 = *(undefined4 *)(lVar12 + 0x260);
        uStack_2b4 = *(undefined4 *)(lVar12 + 0x264);
        uStack_2b0 = *(undefined4 *)(lVar12 + 0x268);
        uStack_2ac = *(undefined4 *)(lVar12 + 0x26c);
        dVar5 = *(double *)(lVar12 + 0x270);
        uVar11 = *(undefined8 *)(lVar12 + 0x278);
        dVar34 = (double)param_1[0x71];
        dVar4 = (double)param_1[0x72];
        dVar35 = (double)param_1[0x73];
        (**(code **)(*param_1 + 0xb80))(param_1);
        (**(code **)(*param_1 + 0xd20))(param_1,&local_208);
        param_1[0x73] = (longlong)local_1f8;
        *(undefined4 *)(param_1 + 0x71) = (undefined4)local_208;
        *(float *)((longlong)param_1 + 0x38c) = local_208._4_4_;
        *(undefined4 *)(param_1 + 0x72) = (undefined4)uStack_200;
        *(undefined4 *)((longlong)param_1 + 0x394) = uStack_200._4_4_;
        if (((char)param_1[0x1f0] == '\0') && (cVar9 = FUN_1434e77c6(local_2f0), cVar9 == '\0')) {
          uVar16 = (**(code **)(*param_1 + 0xd28))(param_1);
          uVar17 = (**(code **)(*param_1 + 0xd30))(param_1);
          local_318 = (undefined8 *)CONCAT44(local_318._4_4_,uVar16);
          (**(code **)(*param_1 + 0x6f0))(param_1,fVar15,uVar17);
          plVar13 = local_2f8;
          (**(code **)(*param_1 + 0xd38))(param_1,&local_208,local_2f8,fVar15);
          plVar13[2] = (longlong)local_1f8;
          *(undefined4 *)plVar13 = (undefined4)local_208;
          *(float *)((longlong)plVar13 + 4) = local_208._4_4_;
          *(undefined4 *)(plVar13 + 1) = (undefined4)uStack_200;
          *(undefined4 *)((longlong)plVar13 + 0xc) = uStack_200._4_4_;
          (**(code **)(*param_1 + 0xd40))(param_1);
        }
        param_2 = param_2 - fVar15;
        (**(code **)(*param_1 + 0xb88))(param_1,fVar15);
        param_1[0x71] = (longlong)dVar34;
        param_1[0x72] = (longlong)dVar4;
        param_1[0x73] = (longlong)dVar35;
        if (((char)param_1[0x220] != '\n') || (param_1[0x22] == 0)) {
          (**(code **)(*param_1 + 0x668))(param_1,fVar15 + param_2,param_3);
          break;
        }
        if (param_1[0x3a2] == 0) {
          plVar13 = (longlong *)0x0;
        }
        else {
          plVar13 = (longlong *)param_1[0x3a3];
        }
        local_2e0 = (double)param_1[0x25];
        local_2e8 = (double)param_1[0x26];
        dVar6 = (double)param_1[0x27];
        local_208 = (double)fVar15;
        local_1f8 = dVar6 * local_208;
        uStack_200 = local_2e8 * local_208;
        local_208 = local_208 * local_2e0;
        local_318 = &local_208;
        local_2c8 = dVar5;
        uStack_2c0 = uVar11;
        (**(code **)(*plVar13 + 0xd0))(SUB84(local_208,0),&local_108,param_1);
        if (((9.999999747378752e-05 < (double)((ulonglong)local_108 & CONCAT44(uVar20,uVar19))) ||
            (9.999999747378752e-05 < (double)((ulonglong)uStack_100 & CONCAT44(uVar20,uVar19)))) ||
           (9.999999747378752e-05 < (double)((ulonglong)local_f8 & CONCAT44(uVar20,uVar19)))) {
          memset(&local_208,0,0x100);
          local_138 = 0xffffffff;
          local_164 = 0xffffffff;
          local_208 = (double)CONCAT44(0x3f800000,(undefined4)local_208);
          lVar12 = param_1[0x22];
          local_228 = *(double *)(lVar12 + 0x240);
          uStack_220 = *(double *)(lVar12 + 0x248);
          local_218 = *(double *)(lVar12 + 0x250);
          uStack_210 = *(undefined4 *)(lVar12 + 600);
          uStack_20c = *(undefined4 *)(lVar12 + 0x25c);
          local_310 = 0;
          local_318 = &local_208;
          FUN_1402eda10(param_1,&local_108,&local_228,1);
          dVar5 = local_f8;
          if (((local_f8 < 0.0) || (*plVar1 == 0)) ||
             (((longlong *)param_1[0x3a3] == (longlong *)0x0 ||
              (cVar9 = (**(code **)(*(longlong *)param_1[0x3a3] + 0x58))(), cVar9 == '\0')))) {
LAB_14880b397:
            if ((local_15b & 2) != 0) {
              (**(code **)(*param_1 + 0x4c8))(param_1,&local_208,0,&DAT_14c8464e0);
              local_310 = 1;
              local_318 = &local_208;
              (**(code **)(*param_1 + 0x508))(param_1,&local_108,0x3f800000);
              if ((local_15b & 2) != 0) {
                (**(code **)(*param_1 + 0x8d0))(param_1,&local_208);
              }
              if (0.0 <= dVar5) goto LAB_14880b51c;
              goto LAB_14880b55c;
            }
            if ((local_15b & 1) != 0) {
              (**(code **)(*param_1 + 0x4c8))(param_1,&local_208,fVar15);
              if ((0.0 <= dVar5) ||
                 (cVar9 = (**(code **)(*param_1 + 0x878))(param_1,&local_208), cVar9 == '\0')) {
                local_218 = local_1b8;
                local_228 = local_1c8;
                uStack_220 = dStack_1c0;
                local_238 = local_f8;
                local_248 = local_108;
                dStack_240 = uStack_100;
                if ((*plVar1 != 0) &&
                   (((longlong *)param_1[0x3a3] != (longlong *)0x0 &&
                    (cVar9 = (**(code **)(*(longlong *)param_1[0x3a3] + 0x98))(), cVar9 != '\0'))))
                {
                  if (*plVar1 == 0) {
                    plVar13 = (longlong *)0x0;
                  }
                  else {
                    plVar13 = (longlong *)param_1[0x3a3];
                  }
                  (**(code **)(*plVar13 + 0x38))(plVar13,&local_2a0,param_1);
                  dVar38 = local_238 * local_290 + local_248 * local_2a0 + dStack_240 * local_298;
                  local_248 = local_248 - dVar38 * local_2a0;
                  dStack_240 = dStack_240 - local_298 * dVar38;
                  local_238 = local_238 - local_290 * dVar38;
                  dVar38 = local_218 * local_290 + local_228 * local_2a0 + local_298 * uStack_220;
                  local_218 = local_218 - local_290 * dVar38;
                  uStack_220 = uStack_220 - local_298 * dVar38;
                  local_228 = local_228 - dVar38 * local_2a0;
                  dVar38 = local_218 * local_218 + local_228 * local_228 + uStack_220 * uStack_220;
                  if ((dVar38 != 1.0) || (NAN(dVar38))) {
                    if (9.99999993922529e-09 <= dVar38) {
                      dVar38 = 1.0 / SQRT(dVar38);
                      local_218 = local_218 * dVar38;
                      uStack_220 = uStack_220 * dVar38;
                      local_228 = local_228 * dVar38;
                    }
                    else {
                      local_228 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
                      uStack_220 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
                      local_218 = DAT_14c8464f0;
                    }
                  }
                }
                local_310 = 1;
                local_318 = &local_208;
                (**(code **)(*param_1 + 0x508))(param_1,&local_248,1.0 - local_208._4_4_);
                if (((0.0 <= dVar5) || ((local_15b & 3) != 1)) ||
                   (cVar9 = (**(code **)(*param_1 + 0x878))(param_1,&local_208), cVar9 == '\0'))
                goto LAB_14880b51c;
              }
              goto LAB_14880b55c;
            }
LAB_14880b51c:
            if (((*(byte *)((longlong)param_1 + 0x349) & 1) != 0) && (param_1[0x23] != 0)) {
              *plVar1 = 0;
              param_1[0x3a3] = 0;
              if ((longlong)(int)param_1[0x3a1] != 0) {
                plVar13 = (longlong *)param_1[0x3a0];
                plVar14 = plVar13 + (longlong)(int)param_1[0x3a1] * 2;
                do {
                  lVar12 = *plVar13;
                  if ((lVar12 != 0 & DAT_14c950c29) == 1) {
                    FUN_1456cec3c(lVar12);
                  }
                  plVar2 = (longlong *)plVar13[1];
                  if ((plVar2 != (longlong *)0x0 && lVar12 != 0) &&
                     (cVar9 = (**(code **)(*plVar2 + 0x48))(plVar2,param_1[0x23]), cVar9 != '\0')) {
                    if (DAT_14c950c29 == 1) {
                      FUN_1456cec3c(lVar12);
                    }
                    param_1[0x3a2] = lVar12;
                    param_1[0x3a3] = (longlong)plVar2;
                    uVar11 = (**(code **)(*plVar2 + 0x18))(plVar2);
                    lVar12 = FUN_14880897a(param_1,uVar11);
                    param_1[0x3a7] = lVar12;
                    break;
                  }
                  plVar13 = plVar13 + 2;
                } while (plVar13 != plVar14);
              }
            }
            if ((*plVar1 == 0) || (param_1[0x3a3] == 0)) goto LAB_14880b55c;
          }
          else {
            if (*plVar1 == 0) {
              plVar13 = (longlong *)0x0;
            }
            else {
              plVar13 = (longlong *)param_1[0x3a3];
            }
            cVar9 = (**(code **)(*plVar13 + 0x78))(plVar13,param_1);
            if (cVar9 == '\0') goto LAB_14880b397;
            local_248 = (double)((ulonglong)local_248 & 0xffffffffffffff00);
            if (*plVar1 == 0) {
              plVar13 = (longlong *)0x0;
            }
            else {
              plVar13 = (longlong *)param_1[0x3a3];
            }
            (**(code **)(*plVar13 + 0x88))(plVar13,&local_228,param_1);
            if ((((local_228 == 0.0) && (!NAN(local_228))) &&
                ((uStack_220 == 0.0 && ((!NAN(uStack_220) && (local_218 == 0.0)))))) &&
               (!NAN(local_218))) goto LAB_14880b51c;
            lVar12 = param_1[0x22];
            if (lVar12 == 0) {
              uVar19 = 0;
              uVar20 = 0;
              uVar16 = 0;
              uVar17 = 0;
              uVar22 = 0;
              uVar23 = 0;
              uVar24 = 0;
              uVar25 = 0x3ff00000;
              uVar26 = 0;
              uVar27 = 0;
              uVar28 = 0;
              uVar29 = 0;
              uVar30 = 0;
              uVar31 = 0;
              uVar32 = 0;
              uVar33 = 0;
              lVar36 = 0x3ff0000000000000;
              lVar37 = 0x3ff0000000000000;
              lVar39 = 0x3ff0000000000000;
              lVar40 = 0;
            }
            else {
              uVar19 = *(undefined4 *)(lVar12 + 0x240);
              uVar20 = *(undefined4 *)(lVar12 + 0x244);
              uVar16 = *(undefined4 *)(lVar12 + 0x248);
              uVar17 = *(undefined4 *)(lVar12 + 0x24c);
              uVar22 = *(undefined4 *)(lVar12 + 0x250);
              uVar23 = *(undefined4 *)(lVar12 + 0x254);
              uVar24 = *(undefined4 *)(lVar12 + 600);
              uVar25 = *(undefined4 *)(lVar12 + 0x25c);
              uVar26 = *(undefined4 *)(lVar12 + 0x260);
              uVar27 = *(undefined4 *)(lVar12 + 0x264);
              uVar28 = *(undefined4 *)(lVar12 + 0x268);
              uVar29 = *(undefined4 *)(lVar12 + 0x26c);
              uVar30 = *(undefined4 *)(lVar12 + 0x270);
              uVar31 = *(undefined4 *)(lVar12 + 0x274);
              uVar32 = *(undefined4 *)(lVar12 + 0x278);
              uVar33 = *(undefined4 *)(lVar12 + 0x27c);
              lVar36 = *(longlong *)(lVar12 + 0x280);
              lVar37 = *(longlong *)(lVar12 + 0x288);
              lVar39 = *(longlong *)(lVar12 + 0x290);
              lVar40 = *(longlong *)(lVar12 + 0x298);
            }
            *(undefined4 *)(param_1 + 0x3aa) = uVar19;
            *(undefined4 *)((longlong)param_1 + 0x1d54) = uVar20;
            *(undefined4 *)(param_1 + 0x3ab) = uVar16;
            *(undefined4 *)((longlong)param_1 + 0x1d5c) = uVar17;
            *(undefined4 *)(param_1 + 0x3ac) = uVar22;
            *(undefined4 *)((longlong)param_1 + 0x1d64) = uVar23;
            *(undefined4 *)(param_1 + 0x3ad) = uVar24;
            *(undefined4 *)((longlong)param_1 + 0x1d6c) = uVar25;
            *(undefined4 *)(param_1 + 0x3ae) = uVar26;
            *(undefined4 *)((longlong)param_1 + 0x1d74) = uVar27;
            *(undefined4 *)(param_1 + 0x3af) = uVar28;
            *(undefined4 *)((longlong)param_1 + 0x1d7c) = uVar29;
            *(undefined4 *)(param_1 + 0x3b0) = uVar30;
            *(undefined4 *)((longlong)param_1 + 0x1d84) = uVar31;
            *(undefined4 *)(param_1 + 0x3b1) = uVar32;
            *(undefined4 *)((longlong)param_1 + 0x1d8c) = uVar33;
            param_1[0x3b2] = lVar36;
            param_1[0x3b3] = lVar37;
            param_1[0x3b4] = lVar39;
            param_1[0x3b5] = lVar40;
            if (local_248._0_1_ == '\x01') {
              *(byte *)((longlong)param_1 + 0x5b5) = *(byte *)((longlong)param_1 + 0x5b5) | 0x20;
              (**(code **)(*param_1 + 0x7e8))(param_1,0);
              lVar12 = param_1[0x22];
            }
            local_278 = local_218;
            local_288 = (undefined4)local_228;
            uStack_284 = local_228._4_4_;
            uStack_280 = (undefined4)uStack_220;
            uStack_27c = uStack_220._4_4_;
            local_318 = (undefined8 *)CONCAT71(local_318._1_7_,1);
            FUN_140d93b16(lVar12,&local_288,0);
            local_2f8[2] = (longlong)DAT_14c8464f0;
            lVar12 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
            *local_2f8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
            local_2f8[1] = lVar12;
            *(byte *)((longlong)param_1 + 0x5b4) = *(byte *)((longlong)param_1 + 0x5b4) | 0x20;
LAB_14880b55c:
            lVar12 = param_1[0x22];
            local_228 = *(double *)(lVar12 + 0x260);
            uStack_220 = *(double *)(lVar12 + 0x268);
            local_218 = *(double *)(lVar12 + 0x270);
            if (dVar6 <= 0.0) {
              *(undefined1 *)(param_1 + 0x3a8) = 2;
            }
            else {
              dVar5 = dVar34 * dVar34 + dVar4 * dVar4;
              if ((dVar5 != 1.0) || (NAN(dVar5))) {
                if (9.99999993922529e-09 <= dVar5) {
                  dVar38 = dVar4 * (1.0 / SQRT(dVar5));
                  dVar35 = (1.0 / SQRT(dVar5)) * dVar34;
                  uVar19 = 0;
                  uVar20 = 0;
                }
                else {
                  dVar35 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
                  dVar38 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
                  uVar19 = SUB84(DAT_14c8464f0,0);
                  uVar20 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
                }
              }
              else {
                uVar3 = -(ulonglong)(dVar35 == 0.0) & (ulonglong)dVar35;
                uVar19 = (undefined4)uVar3;
                uVar20 = (undefined4)(uVar3 >> 0x20);
                dVar35 = dVar34;
                dVar38 = dVar4;
              }
              dVar5 = *(double *)(lVar12 + 0x178);
              uVar16 = SUB84(dVar5,0);
              uVar17 = (undefined4)((ulonglong)dVar5 >> 0x20);
              dVar7 = *(double *)(lVar12 + 0x180);
              if (dVar5 <= dVar7) {
                uVar16 = SUB84(dVar7,0);
                uVar17 = (undefined4)((ulonglong)dVar7 >> 0x20);
              }
              dVar5 = (double)(float)(double)CONCAT44(uVar17,uVar16);
              uStack_220 = *(double *)(lVar12 + 0x268) + dVar38 * dVar5;
              local_228 = dVar35 * dVar5 + local_228;
              local_218 = local_218 + (double)CONCAT44(uVar20,uVar19) * dVar5;
              *(undefined1 *)(param_1 + 0x3a8) = 4;
              if (param_1[0x3a7] != 0) {
                local_218 = local_218 + (double)*(float *)(param_1[0x3a7] + 0x40);
              }
            }
            local_318 = (undefined8 *)0x0;
            (**(code **)(*param_1 + 0x900))(param_1,&local_228,local_2d0);
            if ((~*(uint *)(param_1 + 0x93) & 3) == 0) {
              (**(code **)(*param_1 + 0xd60))(param_1,local_2d8);
              FUN_1409df526(param_1,&DAT_14cb75f24);
              FUN_141874722(param_1,0);
            }
            else {
              FUN_1409df526(param_1,&DAT_14cb75f24);
            }
          }
          lVar12 = param_1[0x22];
          bVar8 = false;
          if (lVar12 == 0 || (char)param_1[0x220] != '\n') {
            dVar35 = *(double *)(lVar12 + 0x260) - (double)CONCAT44(uStack_2b4,local_2b8);
            dVar5 = *(double *)(lVar12 + 0x268) - (double)CONCAT44(uStack_2ac,uStack_2b0);
            dVar38 = *(double *)(lVar12 + 0x270) - local_2c8;
            fVar21 = (float)SQRT(dVar38 * dVar38 + dVar35 * dVar35 + dVar5 * dVar5) /
                     (float)SQRT(local_f8 * local_f8 +
                                 local_108 * local_108 + uStack_100 * uStack_100);
            fVar18 = 1.0;
            if (fVar21 <= 1.0) {
              fVar18 = fVar21;
            }
            param_2 = fVar15 * (1.0 - fVar18) + param_2;
            bVar8 = true;
            uVar19 = (undefined4)DAT_149931180;
            uVar20 = DAT_149931180._4_4_;
            if ((char)param_1[0x3b8] == '\0') {
              dVar35 = dVar34 * dVar34 + dVar4 * dVar4;
              if ((dVar35 != 1.0) || (NAN(dVar35))) {
                if (9.99999993922529e-09 <= dVar35) {
                  dVar4 = dVar4 * (1.0 / SQRT(dVar35));
                  dVar34 = dVar34 * (1.0 / SQRT(dVar35));
                }
                else {
                  dVar34 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
                  dVar4 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
                }
              }
              uVar16 = 0;
              uVar17 = 0;
              if (dVar6 <= 0.0) {
                uVar16 = SUB84(dVar6,0);
                uVar17 = (int)((ulonglong)dVar6 >> 0x20);
              }
              dVar6 = (double)((ulonglong)dVar6 & DAT_149931180);
              param_1[0x25] = (longlong)(local_2e0 + dVar6 * dVar34);
              param_1[0x26] = (longlong)(local_2e8 + dVar4 * dVar6);
              param_1[0x27] = CONCAT44(uVar17,uVar16);
              (**(code **)(*param_1 + 0x668))(param_1,param_2,local_304);
            }
          }
          else {
            uVar19 = 0xffffffff;
            uVar20 = 0x7fffffff;
          }
        }
        else {
          param_2 = 0.0;
          bVar8 = false;
        }
        param_3 = local_304;
      } while (!bVar8);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_338) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14880c09e FUN_14880c09e body=38 status=ok
// SIG undefined FUN_14880c09e(void)

undefined8 FUN_14880c09e(undefined8 param_1,int param_2)

{
  FUN_14880e8da();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14880c0f0 FUN_14880c0f0 body=69 status=ok
// SIG undefined FUN_14880c0f0(void)

void FUN_14880c0f0(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_14880c136(param_1 + 2);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14880c136 FUN_14880c136 body=52 status=ok
// SIG undefined FUN_14880c136(void)

void FUN_14880c136(longlong *param_1)

{
  FUN_14880c16a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14880c16a FUN_14880c16a body=90 status=ok
// SIG undefined FUN_14880c16a(void)

void FUN_14880c16a(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14880c1c4(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_147f0950a(param_1 + 0x10,0);
  return;
}



// FUNCTION 14880c1c4 FUN_14880c1c4 body=113 status=ok
// SIG undefined FUN_14880c1c4(void)

void FUN_14880c1c4(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 14880c236 FUN_14880c236 body=143 status=ok
// SIG undefined FUN_14880c236(void)

void FUN_14880c236(longlong param_1,int param_2)

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
    uVar5 = FUN_144a3809e(lVar4 * 0x38,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x38,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14880c2c6 FUN_14880c2c6 body=98 status=ok
// SIG undefined FUN_14880c2c6(void)

void FUN_14880c2c6(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14880c328 FUN_14880c328 body=98 status=ok
// SIG undefined FUN_14880c328(void)

void FUN_14880c328(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,4);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14880c38a FUN_14880c38a body=29 status=ok
// SIG undefined FUN_14880c38a(void)

undefined8 FUN_14880c38a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14880c3c2 FUN_14880c3c2 body=29 status=ok
// SIG undefined FUN_14880c3c2(void)

bool FUN_14880c3c2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14880c3e0 FUN_14880c3e0 body=26 status=ok
// SIG undefined FUN_14880c3e0(void)

bool FUN_14880c3e0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14880c3fa FUN_14880c3fa body=24 status=ok
// SIG undefined FUN_14880c3fa(void)

bool FUN_14880c3fa(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14880c412 FUN_14880c412 body=93 status=ok
// SIG undefined FUN_14880c412(void)

void FUN_14880c412(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3f23f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14880c470 FUN_14880c470 body=93 status=ok
// SIG undefined FUN_14880c470(void)

void FUN_14880c470(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3f23f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14880c4ce FUN_14880c4ce body=126 status=ok
// SIG undefined FUN_14880c4ce(void)

void FUN_14880c4ce(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b3f23f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014880c53d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14880c54c FUN_14880c54c body=35 status=ok
// SIG undefined FUN_14880c54c(void)

void FUN_14880c54c(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014880c56b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 14880c570 FUN_14880c570 body=142 status=ok
// SIG undefined FUN_14880c570(void)

bool FUN_14880c570(longlong param_1)

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



// FUNCTION 14880c600 FUN_14880c600 body=331 status=ok
// SIG undefined FUN_14880c600(void)

undefined4 * FUN_14880c600(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  FUN_14880c74c(param_1,local_48);
  uVar1 = *(undefined8 *)*param_3;
  *local_40 = uVar1;
  local_40[1] = 0;
  local_40[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar8 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar4 >> 4);
  cVar3 = FUN_14880c832(param_1,uVar8,local_40,&local_4c);
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
      FUN_1487f6252(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14880c74c FUN_14880c74c body=229 status=ok
// SIG undefined FUN_14880c74c(void)

int * FUN_14880c74c(longlong *param_1,int *param_2)

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



// FUNCTION 14880c832 FUN_14880c832 body=161 status=ok
// SIG undefined FUN_14880c832(void)

undefined8 FUN_14880c832(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
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
        if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          if (*(longlong *)(puVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_14880c8d4(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 14880c8d4 FUN_14880c8d4 body=114 status=ok
// SIG undefined FUN_14880c8d4(void)

void FUN_14880c8d4(longlong *param_1,int param_2)

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



// FUNCTION 14880c946 FUN_14880c946 body=47 status=ok
// SIG undefined FUN_14880c946(void)

undefined8 FUN_14880c946(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1447262c2();
  if (lVar1 != 0) {
    uVar2 = FUN_14018b740();
    uVar2 = FUN_144718840(lVar1,uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14880c976 FUN_14880c976 body=132 status=ok
// SIG undefined FUN_14880c976(void)

void FUN_14880c976(longlong param_1,int param_2)

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



// FUNCTION 14880c9fc FUN_14880c9fc body=143 status=ok
// SIG undefined FUN_14880c9fc(void)

void FUN_14880c9fc(longlong param_1,int param_2)

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
    uVar5 = FUN_144a3809e(lVar4 * 0x38,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x38,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14880ca8c FUN_14880ca8c body=143 status=ok
// SIG undefined FUN_14880ca8c(void)

void FUN_14880ca8c(longlong param_1,int param_2)

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
    uVar5 = FUN_144a3809e(lVar4 * 0x38,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x38,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14880cb1c FUN_14880cb1c body=86 status=ok
// SIG undefined FUN_14880cb1c(void)

void FUN_14880cb1c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 4)) {
    uVar2 = uVar1 >> 4 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 14880cb72 FUN_14880cb72 body=132 status=ok
// SIG undefined FUN_14880cb72(void)

void FUN_14880cb72(longlong param_1,int param_2)

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



// FUNCTION 14880cbf8 FUN_14880cbf8 body=116 status=ok
// SIG undefined FUN_14880cbf8(void)

undefined8 * FUN_14880cbf8(undefined8 *param_1)

{
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  FUN_14880d06c(param_1);
  if ((uint)(*(int *)(param_1 + 3) - *(int *)((longlong)param_1 + 0x44)) < 0x10) {
    FUN_14880cc6c(param_1 + 2);
    if (*(int *)(param_1 + 0xb) < 0x10) {
      *(undefined4 *)(param_1 + 0xb) = 0x10;
      FUN_14880cdf2(param_1 + 2);
    }
  }
  return param_1;
}



// FUNCTION 14880cc6c FUN_14880cc6c body=390 status=ok
// SIG undefined FUN_14880cc6c(void)

void FUN_14880cc6c(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong *plVar4;
  byte bVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < 0x10) {
    uVar8 = 0x10 - iVar1;
    iVar11 = *(int *)((longlong)param_1 + 0xc);
    iVar7 = iVar1;
    if (iVar11 < 0x10) {
      FUN_14880c1c4(param_1,0x10);
      iVar7 = (int)param_1[1];
      iVar11 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar7 + uVar8;
    if ((uint)(iVar11 - iVar7) < uVar8) {
      FUN_14880cfd8(param_1,iVar7);
    }
    if (iVar7 < 0x10) {
      lVar2 = *param_1;
      iVar11 = *(int *)((longlong)param_1 + 0x34);
      puVar6 = (undefined4 *)(lVar2 + 0x16c);
      lVar10 = 0x10;
      do {
        iVar9 = (int)lVar10;
        if (iVar11 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = iVar9 + -1;
        }
        puVar6[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        lVar10 = lVar10 + -1;
        *puVar6 = uVar3;
        *(int *)(param_1 + 6) = iVar9 + -1;
        iVar11 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar11;
        puVar6 = puVar6 + -6;
      } while (iVar7 < lVar10);
    }
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 5) = 0x10;
      if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0x20) {
        if (param_1[4] != 0) {
          FUN_1446efa72(param_1 + 4,0,0,4);
        }
        *(undefined4 *)((longlong)param_1 + 0x2c) = 0x20;
      }
      plVar4 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar4 = param_1 + 2;
      }
      *(undefined4 *)plVar4 = 0;
      iVar1 = (int)param_1[5];
      iVar11 = iVar1 + 0x1f;
      if (-1 < iVar1) {
        iVar11 = iVar1;
      }
      if (iVar1 % 0x20 != 0) {
        plVar4 = param_1 + 2;
        if ((longlong *)param_1[4] != (longlong *)0x0) {
          plVar4 = (longlong *)param_1[4];
        }
        bVar5 = -(char)(iVar1 % 0x20);
        *(uint *)((longlong)plVar4 + (longlong)(iVar11 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar4 + (longlong)(iVar11 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    else if (-1 < (int)uVar8) {
      uVar3 = FUN_147f0b2e6(param_1 + 2,uVar8);
      FUN_147f0b382(param_1 + 2,uVar3,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 14880cdf2 FUN_14880cdf2 body=484 status=ok
// SIG undefined FUN_14880cdf2(void)

void FUN_14880cdf2(longlong *param_1)

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
    FUN_147f0b4fc(plVar1,0,uVar8,4);
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
      FUN_147f0b582(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_50 = local_30;
    local_4c = local_2c;
    local_58 = local_38;
    uVar3 = local_58;
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
        FUN_147f0b582(&local_68);
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



// FUNCTION 14880cfd8 FUN_14880cfd8 body=147 status=ok
// SIG undefined FUN_14880cfd8(void)

void FUN_14880cfd8(longlong param_1,int param_2)

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



// FUNCTION 14880d06c FUN_14880d06c body=162 status=ok
// SIG undefined FUN_14880d06c(void)

undefined8 FUN_14880d06c(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar3 = 0xc00;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841ec0];
  }
  else {
    uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0xc00,8);
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar3;
  uVar2 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar4 = 0x7fffffff;
  if (0x3f < (int)(uVar3 / 0x30)) {
    uVar4 = uVar3 / 0x30 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar2 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x30,8);
  }
  return uVar2;
}



// FUNCTION 14880d10e FUN_14880d10e body=41 status=ok
// SIG undefined FUN_14880d10e(void)

void FUN_14880d10e(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_14880da8a();
  return;
}



// FUNCTION 14880d138 FUN_14880d138 body=70 status=ok
// SIG undefined FUN_14880d138(void)

void FUN_14880d138(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_14880d17e();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_14880c1c4(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14880d17e FUN_14880d17e body=349 status=ok
// SIG undefined FUN_14880d17e(void)

void FUN_14880d17e(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
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
    local_38 = 0;
    iVar6 = 0;
    local_48 = plVar1;
    if ((int)param_1[5] != 0) {
      FUN_147f0b582(&local_50);
      iVar6 = (int)param_1[5];
    }
    local_70 = local_50;
    local_68 = local_48;
    local_60 = local_40;
    uVar2 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, local_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_147f0b582(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 || (local_68 != plVar1 || local_60._4_4_ != iVar6));
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



// FUNCTION 14880d2dc FUN_14880d2dc body=147 status=ok
// SIG undefined FUN_14880d2dc(void)

void FUN_14880d2dc(longlong param_1,int param_2)

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



// FUNCTION 14880d370 FUN_14880d370 body=324 status=ok
// SIG undefined FUN_14880d370(void)

undefined4 * FUN_14880d370(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_14880d4b6(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_14880d59c(param_1,uVar4,local_40,&local_4c);
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
      FUN_14880cdf2(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14880d4b6 FUN_14880d4b6 body=230 status=ok
// SIG undefined FUN_14880d4b6(void)

int * FUN_14880d4b6(longlong *param_1,int *param_2)

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
      FUN_14880cfd8(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_147f0b2e6(param_1 + 2,1);
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



// FUNCTION 14880d59c FUN_14880d59c body=128 status=ok
// SIG undefined FUN_14880d59c(void)

undefined8 FUN_14880d59c(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_14880d61c((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 14880d61c FUN_14880d61c body=114 status=ok
// SIG undefined FUN_14880d61c(void)

void FUN_14880d61c(longlong *param_1,int param_2)

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



// FUNCTION 14880d68e FUN_14880d68e body=155 status=ok
// SIG undefined FUN_14880d68e(void)

void FUN_14880d68e(longlong *param_1,undefined4 *param_2,undefined8 *param_3)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  iVar3 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
    FUN_147f0bcf2(param_1,iVar3);
  }
  *(undefined4 *)(*param_1 + (longlong)iVar3 * 4) = *param_2;
  if (1 < (int)param_1[1]) {
    lVar5 = *param_1;
    uVar6 = (ulonglong)((int)param_1[1] - 1);
    iVar3 = *(int *)(lVar5 + uVar6 * 4);
    do {
      uVar7 = (int)uVar6 - 1;
      uVar8 = (ulonglong)(uVar7 >> 1);
      iVar4 = *(int *)(lVar5 + uVar8 * 4);
      dVar2 = *(double *)(*(longlong *)*param_3 + 0x18 + (longlong)iVar4 * 0x30);
      pdVar1 = (double *)(*(longlong *)*param_3 + 0x18 + (longlong)iVar3 * 0x30);
      if (dVar2 < *pdVar1 || dVar2 == *pdVar1) {
        return;
      }
      *(int *)(lVar5 + uVar6 * 4) = iVar4;
      *(int *)(lVar5 + uVar8 * 4) = iVar3;
      uVar6 = uVar8;
    } while (1 < uVar7);
  }
  return;
}



// FUNCTION 14880d72a FUN_14880d72a body=140 status=ok
// SIG undefined FUN_14880d72a(void)

void FUN_14880d72a(longlong *param_1,longlong param_2)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  
  if ((longlong)(int)param_1[1] == 0) {
    return;
  }
  lVar5 = *param_1;
  lVar8 = (longlong)(int)param_1[1] << 2;
  uVar7 = 0;
  do {
    if (*(int *)(lVar5 + uVar7 * 4) == *(int *)(param_2 + 0x20)) {
      if ((int)(uint)uVar7 < 1) {
        return;
      }
      puVar6 = (undefined8 *)param_1[3];
      iVar3 = *(int *)(lVar5 + (ulonglong)((uint)uVar7 & 0x7fffffff) * 4);
      do {
        uVar9 = (int)uVar7 - 1;
        uVar10 = (ulonglong)(uVar9 >> 1);
        iVar4 = *(int *)(lVar5 + uVar10 * 4);
        dVar2 = *(double *)(*(longlong *)*puVar6 + 0x18 + (longlong)iVar4 * 0x30);
        pdVar1 = (double *)(*(longlong *)*puVar6 + 0x18 + (longlong)iVar3 * 0x30);
        if (dVar2 < *pdVar1 || dVar2 == *pdVar1) {
          return;
        }
        *(int *)(lVar5 + (uVar7 & 0xffffffff) * 4) = iVar4;
        *(int *)(lVar5 + uVar10 * 4) = iVar3;
        uVar7 = uVar10;
      } while (1 < uVar9);
      return;
    }
    uVar7 = uVar7 + 1;
    lVar8 = lVar8 + -4;
  } while (lVar8 != 0);
  return;
}



// FUNCTION 14880d7b6 FUN_14880d7b6 body=256 status=ok
// SIG undefined FUN_14880d7b6(void)

void FUN_14880d7b6(longlong *param_1,undefined4 *param_2,undefined8 *param_3)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  *param_2 = *(undefined4 *)*param_1;
  iVar5 = (int)param_1[1] + -1;
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
  }
  else {
    iVar8 = 1;
    if (0 < iVar5) {
      iVar5 = 1;
    }
    memmove((void *)*param_1,(void *)(*param_1 + (longlong)((int)param_1[1] - iVar5) * 4),
            (longlong)iVar5 << 2);
    lVar4 = param_1[1];
    iVar5 = (int)lVar4 + -1;
    *(int *)(param_1 + 1) = iVar5;
    if (2 < (int)lVar4) {
      lVar4 = *param_1;
      iVar6 = 0;
      iVar9 = 0;
      do {
        iVar6 = iVar6 + 2;
        lVar3 = *(longlong *)*param_3;
        iVar7 = iVar8;
        if ((iVar6 < iVar5) &&
           (dVar2 = *(double *)
                     (lVar3 + 0x18 + (longlong)*(int *)(lVar4 + (longlong)iVar6 * 4) * 0x30),
           pdVar1 = (double *)
                    (lVar3 + 0x18 + (longlong)*(int *)(lVar4 + (longlong)iVar8 * 4) * 0x30),
           dVar2 < *pdVar1 || dVar2 == *pdVar1)) {
          iVar7 = iVar6;
        }
        iVar8 = *(int *)(lVar4 + (longlong)iVar9 * 4);
        iVar6 = *(int *)(lVar4 + (longlong)iVar7 * 4);
        dVar2 = *(double *)(lVar3 + 0x18 + (longlong)iVar8 * 0x30);
        pdVar1 = (double *)(lVar3 + 0x18 + (longlong)iVar6 * 0x30);
        if (dVar2 < *pdVar1 || dVar2 == *pdVar1) {
          return;
        }
        *(int *)(lVar4 + (longlong)iVar9 * 4) = iVar6;
        *(int *)(lVar4 + (longlong)iVar7 * 4) = iVar8;
        iVar6 = iVar7 * 2;
        iVar8 = iVar7 * 2 + 1;
        iVar9 = iVar7;
      } while (iVar8 < iVar5);
    }
  }
  return;
}



// FUNCTION 14880d8b6 FUN_14880d8b6 body=187 status=ok
// SIG undefined FUN_14880d8b6(void)

longlong * FUN_14880d8b6(longlong *param_1,uint param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_58 [40];
  longlong *local_30;
  undefined8 local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x18);
        if (*plVar2 == *param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_14880d954;
          break;
        }
        iVar1 = (int)plVar2[2];
      } while (iVar1 != -1);
    }
  }
  local_30 = param_3;
  local_28 = param_4;
  FUN_14880d972(param_1,&local_1c,param_2,&local_30);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x18);
LAB_14880d954:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 14880d972 FUN_14880d972 body=279 status=ok
// SIG undefined FUN_14880d972(void)

undefined4 * FUN_14880d972(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

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
  FUN_14880d4b6(param_1,local_48);
  puVar1 = (undefined4 *)param_4[1];
  *local_40 = *(undefined8 *)*param_4;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  cVar2 = FUN_14880d59c(param_1,param_3,local_40,local_48);
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
      FUN_14880cdf2(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14880da8a FUN_14880da8a body=86 status=ok
// SIG undefined FUN_14880da8a(void)

void FUN_14880da8a(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 14880dae0 FUN_14880dae0 body=114 status=ok
// SIG undefined FUN_14880dae0(void)

void FUN_14880dae0(longlong *param_1,int param_2)

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



// FUNCTION 14880db52 FUN_14880db52 body=132 status=ok
// SIG undefined FUN_14880db52(void)

void FUN_14880db52(longlong param_1,int param_2)

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



// FUNCTION 14880dbd8 FUN_14880dbd8 body=147 status=ok
// SIG undefined FUN_14880dbd8(void)

void FUN_14880dbd8(longlong param_1,int param_2)

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



// FUNCTION 14880dc6c FUN_14880dc6c body=48 status=ok
// SIG undefined FUN_14880dc6c(void)

void FUN_14880dc6c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x30,8);
  }
  return;
}



// FUNCTION 14880dcbe FUN_14880dcbe body=134 status=ok
// SIG undefined FUN_14880dcbe(void)

undefined1 FUN_14880dcbe(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 uVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != 0) {
    lVar2 = FUN_1486293fd();
    FUN_1446ddc76(&local_20,param_1,1);
    if (lVar2 != 0) {
      uVar3 = 0;
      iVar1 = FUN_1448e5bf4(lVar2,local_20,0);
      if (iVar1 != -1) {
        uVar3 = *(undefined1 *)(*(longlong *)(lVar2 + 0x40) + 8 + (longlong)iVar1 * 0x10);
      }
      goto LAB_14880dd21;
    }
  }
  uVar3 = 0;
LAB_14880dd21:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14880dd46 FUN_14880dd46 body=48 status=ok
// SIG undefined FUN_14880dd46(void)

void FUN_14880dd46(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x8d0,0x10);
  }
  return;
}



// FUNCTION 14880dd76 FUN_14880dd76 body=48 status=ok
// SIG undefined FUN_14880dd76(void)

void FUN_14880dd76(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 14880dda6 FUN_14880dda6 body=112 status=ok
// SIG undefined FUN_14880dda6(void)

void FUN_14880dda6(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 14880de16 FUN_14880de16 body=147 status=ok
// SIG undefined FUN_14880de16(void)

void FUN_14880de16(longlong param_1,int param_2)

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



// FUNCTION 14880deaa FUN_14880deaa body=133 status=ok
// SIG undefined FUN_14880deaa(void)

undefined4 FUN_14880deaa(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = 0;
  if (param_1 != 0) {
    lVar2 = FUN_148677184();
    FUN_1446ddc76(&local_28,param_1,1);
    uVar3 = 0;
    if (lVar2 != 0) {
      uVar3 = 0;
      iVar1 = FUN_1448e5bf4(lVar2,local_28,0);
      if (iVar1 != -1) {
        uVar3 = *(undefined4 *)(*(longlong *)(lVar2 + 0x40) + 8 + (longlong)iVar1 * 0x10);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14880df30 FUN_14880df30 body=31 status=ok
// SIG undefined FUN_14880df30(void)

undefined8 FUN_14880df30(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14880df6a FUN_14880df6a body=29 status=ok
// SIG undefined FUN_14880df6a(void)

bool FUN_14880df6a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14880df88 FUN_14880df88 body=93 status=ok
// SIG undefined FUN_14880df88(void)

void FUN_14880df88(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e01f80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f2550;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14880dfe6 FUN_14880dfe6 body=93 status=ok
// SIG undefined FUN_14880dfe6(void)

void FUN_14880dfe6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e01f80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f2550;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14880e044 FUN_14880e044 body=126 status=ok
// SIG undefined FUN_14880e044(void)

void FUN_14880e044(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e01f80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3f2550;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014880e0b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14880e0c2 FUN_14880e0c2 body=48 status=ok
// SIG undefined FUN_14880e0c2(void)

void FUN_14880e0c2(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014880e0ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2);
  return;
}



// FUNCTION 14880e0f2 FUN_14880e0f2 body=62 status=ok
// SIG undefined FUN_14880e0f2(void)

void FUN_14880e0f2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14880e130(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 14880e130 FUN_14880e130 body=112 status=ok
// SIG undefined FUN_14880e130(void)

ulonglong FUN_14880e130(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14880e16a;
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
LAB_14880e16a:
  return param_2 & 0xffffffff;
}



// FUNCTION 14880e1a0 FUN_14880e1a0 body=48 status=ok
// SIG undefined FUN_14880e1a0(void)

void FUN_14880e1a0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 14880e1d0 FUN_14880e1d0 body=31 status=ok
// SIG undefined FUN_14880e1d0(void)

undefined8 FUN_14880e1d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14880e204 FUN_14880e204 body=85 status=ok
// SIG undefined FUN_14880e204(void)

void FUN_14880e204(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f27f0;
  return;
}



// FUNCTION 14880e25a FUN_14880e25a body=118 status=ok
// SIG undefined FUN_14880e25a(void)

void FUN_14880e25a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c87c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3f27f0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014880e2c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14880e2d0 FUN_14880e2d0 body=105 status=ok
// SIG undefined FUN_14880e2d0(void)

undefined8 FUN_14880e2d0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145a99c92(param_1 + 0x18,local_20);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_18 + 0x10))(local_18);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14880e33a FUN_14880e33a body=24 status=ok
// SIG undefined FUN_14880e33a(void)

void FUN_14880e33a(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014880e34e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 14880e352 FUN_14880e352 body=96 status=ok
// SIG undefined FUN_14880e352(void)

void FUN_14880e352(longlong param_1,int param_2)

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



// FUNCTION 14880e3b2 FUN_14880e3b2 body=132 status=ok
// SIG undefined FUN_14880e3b2(void)

void FUN_14880e3b2(longlong param_1,int param_2)

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



// FUNCTION 14880e438 FUN_14880e438 body=199 status=ok
// SIG undefined FUN_14880e438(void)

ulonglong FUN_14880e438(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  uVar4 = (ulonglong)iVar1;
  if (uVar4 != 0) {
    lVar3 = 0;
    if (*param_2 != 0) {
      lVar3 = param_2[1];
    }
    lVar6 = 0;
    iVar5 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar6) == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = *(longlong *)(lVar2 + 8 + lVar6);
      }
      if ((*(longlong *)(lVar2 + lVar6) == *param_2) && (lVar7 == lVar3)) {
        if (iVar5 != 1) {
          uVar4 = (ulonglong)(uint)-iVar5;
          goto LAB_14880e4d5;
        }
        break;
      }
      iVar5 = iVar5 + -1;
      lVar6 = lVar6 + 0x10;
    } while (uVar4 << 4 != lVar6);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14880e500(param_1,iVar1);
    lVar2 = *param_1;
  }
  lVar3 = *param_2;
  *(longlong *)(lVar2 + uVar4 * 0x10) = lVar3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(longlong *)(lVar2 + uVar4 * 0x10 + 8) = param_2[1];
LAB_14880e4d5:
  return uVar4 & 0xffffffff;
}



// FUNCTION 14880e500 FUN_14880e500 body=132 status=ok
// SIG undefined FUN_14880e500(void)

void FUN_14880e500(longlong param_1,int param_2)

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



// FUNCTION 14880e586 FUN_14880e586 body=359 status=ok
// SIG undefined FUN_14880e586(void)

int FUN_14880e586(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  int local_64;
  
  iVar7 = (int)param_1[1];
  lVar8 = (longlong)iVar7;
  if (lVar8 == 0) {
    iVar7 = 0;
  }
  else {
    plVar2 = (longlong *)*param_1;
    lVar9 = 0;
    if (*plVar2 != 0) {
      lVar9 = plVar2[1];
    }
    lVar10 = *(longlong *)*param_2;
    lVar5 = 0;
    if (lVar10 != 0) {
      lVar5 = ((longlong *)*param_2)[1];
    }
    local_64 = 0;
    bVar15 = *plVar2 == lVar10 && lVar9 == lVar5;
    iVar12 = 0;
    do {
      lVar9 = (longlong)iVar12;
      iVar4 = iVar12 + 1;
      if (iVar12 + 1 < iVar7) {
        iVar4 = iVar7;
      }
      plVar11 = plVar2 + lVar9 * 2 + 3;
      iVar13 = iVar12;
      lVar10 = lVar9;
      do {
        lVar10 = lVar10 + 1;
        iVar14 = iVar4;
        if (lVar8 <= lVar10) break;
        plVar1 = plVar11 + -1;
        lVar5 = 0;
        if (*plVar1 != 0) {
          lVar5 = *plVar11;
        }
        lVar3 = *(longlong *)*param_2;
        lVar6 = 0;
        if (lVar3 != 0) {
          lVar6 = ((longlong *)*param_2)[1];
        }
        iVar13 = iVar13 + 1;
        plVar11 = plVar11 + 2;
        iVar14 = iVar13;
      } while (bVar15 == (*plVar1 == lVar3 && lVar5 == lVar6));
      if (bVar15 == false) {
        if (local_64 != iVar12) {
          memmove(plVar2 + (longlong)local_64 * 2,plVar2 + lVar9 * 2,
                  (longlong)(iVar14 - iVar12) << 4);
        }
        local_64 = local_64 + (iVar14 - iVar12);
      }
      bVar15 = (bool)(bVar15 ^ 1);
      iVar12 = iVar14;
    } while (lVar10 < lVar8);
    *(int *)(param_1 + 1) = local_64;
    iVar7 = iVar7 - local_64;
  }
  return iVar7;
}



// FUNCTION 14880e6ee FUN_14880e6ee body=29 status=ok
// SIG undefined FUN_14880e6ee(void)

undefined8 FUN_14880e6ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14880e726 FUN_14880e726 body=29 status=ok
// SIG undefined FUN_14880e726(void)

bool FUN_14880e726(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14880e744 FUN_14880e744 body=26 status=ok
// SIG undefined FUN_14880e744(void)

bool FUN_14880e744(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14880e75e FUN_14880e75e body=101 status=ok
// SIG undefined FUN_14880e75e(void)

void FUN_14880e75e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f26e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14880e7c4 FUN_14880e7c4 body=101 status=ok
// SIG undefined FUN_14880e7c4(void)

void FUN_14880e7c4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f26e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14880e82a FUN_14880e82a body=134 status=ok
// SIG undefined FUN_14880e82a(void)

void FUN_14880e82a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9c20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3f26e0;
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
                    /* WARNING: Could not recover jumptable at 0x00014880e8a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14880e8b0 FUN_14880e8b0 body=42 status=ok
// SIG undefined FUN_14880e8b0(void)

void FUN_14880e8b0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014880e8d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 14880e8da FUN_14880e8da body=100 status=ok
// SIG undefined FUN_14880e8da(void)

void FUN_14880e8da(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b3f08e0;
  FUN_14880e93e(param_1[0x76],*(undefined4 *)(param_1 + 0x77));
  if (param_1[0x76] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x74] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x72] != 0) {
    FUN_1400020a8();
  }
  FUN_1405d133e(param_1);
  return;
}



// FUNCTION 14880e93e FUN_14880e93e body=47 status=ok
// SIG undefined FUN_14880e93e(void)

void FUN_14880e93e(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14880e96e FUN_14880e96e body=74 status=ok
// SIG undefined FUN_14880e96e(void)

undefined8 FUN_14880e96e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 8);
    lVar2 = (longlong)*(int *)(param_1 + 0x10) * 8;
    do {
      lVar2 = lVar2 + -8;
      uVar1 = FUN_14069eaf4(lVar3,param_3);
      if ((char)uVar1 != '\0') {
        return uVar1;
      }
      lVar3 = lVar3 + 8;
    } while (lVar2 != 0);
  }
  return uVar1;
}



// FUNCTION 14880e9b8 FUN_14880e9b8 body=176 status=ok
// SIG undefined FUN_14880e9b8(void)

undefined8 FUN_14880e9b8(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 == 0) {
LAB_14880ea46:
    uVar3 = 0;
  }
  else {
    if ((longlong)*(int *)(param_1 + 0x10) != 0) {
      lVar4 = *(longlong *)(param_1 + 8);
      lVar5 = (longlong)*(int *)(param_1 + 0x10) << 3;
      do {
        cVar2 = FUN_14069eaf4(lVar4,param_3);
        if (cVar2 != '\0') goto LAB_14880ea46;
        lVar4 = lVar4 + 8;
        lVar5 = lVar5 + -8;
      } while (lVar5 != 0);
    }
    local_30 = 0;
    FUN_14485c47a(&local_30,param_3);
    iVar1 = *(int *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x10) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
      FUN_140155462((longlong *)(param_1 + 8),iVar1);
    }
    lVar4 = *(longlong *)(param_1 + 8);
    *(undefined8 *)(lVar4 + (longlong)iVar1 * 8) = local_30;
    uVar3 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14880ea6a FUN_14880ea6a body=101 status=ok
// SIG undefined FUN_14880ea6a(void)

bool FUN_14880ea6a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_14485c47a(&local_28,param_3);
  local_20 = &local_28;
  iVar1 = FUN_140bf0ae6(param_1 + 8);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 0 < iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14880eaf4 FUN_14880eaf4 body=117 status=ok
// SIG undefined FUN_14880eaf4(void)

ulonglong FUN_14880eaf4(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  ulonglong uVar3;
  undefined8 unaff_RDI;
  
  if ((*(byte *)(param_1 + 0x5b5) & 0x20) == 0) {
    plVar1 = (longlong *)(param_1 + 0x178);
    cVar2 = (**(code **)(*(longlong *)(param_1 + 0x178) + 0x118))(plVar1);
    if ((cVar2 != '\0') && ((*(byte *)(param_1 + 0x1c8) & 2) != 0)) {
      cVar2 = (**(code **)(*plVar1 + 0xe0))(plVar1);
      uVar3 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
      if (cVar2 == '\0') {
        cVar2 = (**(code **)(*plVar1 + 0xd8))(plVar1);
        if (cVar2 == '\0') {
          uVar3 = FUN_143e4a8c2(param_1);
          return uVar3;
        }
      }
      goto LAB_14880eb2d;
    }
  }
  uVar3 = 0;
LAB_14880eb2d:
  return uVar3 & 0xffffffff;
}



// FUNCTION 14880eb6a FUN_14880eb6a body=990 status=ok
// SIG undefined FUN_14880eb6a(void)

ulonglong FUN_14880eb6a(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  ulonglong uVar8;
  
  if ((*(longlong *)(param_1 + 0x1cf0) == 0) ||
     (*(char *)(*(longlong *)(param_1 + 0x1cf0) + 0x24) != '\x01')) goto LAB_14880ef16;
  lVar5 = *(longlong *)(param_1 + 0x2bf0);
  if (lVar5 == 0) {
    uVar4 = FUN_140aed8fc();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x2bf0) = lVar5;
  }
  plVar1 = (longlong *)(param_1 + 0x2be8);
  lVar6 = *(longlong *)(param_1 + 0x2bf8);
  if (lVar6 == 0) {
    if ((lVar5 == 0) || (*plVar1 == 0)) goto LAB_14880ef16;
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if (plVar2 != (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
      if (cVar3 != '\0') {
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar6 = FUN_144aff482(uVar4,plVar1);
        *(longlong *)(param_1 + 0x2bf8) = lVar6;
        if (lVar6 == 0) goto LAB_14880ef16;
        lVar5 = *(longlong *)(param_1 + 0x2bf0);
        goto LAB_14880ebd2;
      }
    }
    *(undefined8 *)(param_1 + 0x2bf8) = 0;
    goto LAB_14880ef16;
  }
LAB_14880ebd2:
  if (lVar5 == 0) {
    uVar4 = FUN_140aed8fc();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x2bf0) = lVar5;
    lVar6 = *(longlong *)(param_1 + 0x2bf8);
    if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*plVar1 != 0)) {
      plVar2 = *(longlong **)(lVar5 + 0xb8);
      if (plVar2 == (longlong *)0x0) {
LAB_14880ef36:
        lVar6 = 0;
      }
      else {
        cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
        if (cVar3 == '\0') goto LAB_14880ef36;
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar6 = FUN_144aff482(uVar4,plVar1);
      }
      *(longlong *)(param_1 + 0x2bf8) = lVar6;
    }
  }
  if ((*(byte *)(lVar6 + 0x20) & 2) == 0) {
    lVar5 = *(longlong *)(param_1 + 0x2bf0);
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x2bf0);
    if (0.0 < *(float *)(lVar6 + 0x1c)) {
      if (lVar5 == 0) {
        uVar4 = FUN_140aed8fc();
        lVar5 = FUN_14477b664(uVar4);
        *(longlong *)(param_1 + 0x2bf0) = lVar5;
        lVar6 = *(longlong *)(param_1 + 0x2bf8);
      }
      if (lVar6 == 0) {
        *(undefined8 *)(param_1 + 0x2bf8) = 0;
        if (lVar5 == 0 || *(longlong *)(param_1 + 0x2be8) == 0) {
          lVar6 = 0;
        }
        else {
          plVar2 = *(longlong **)(lVar5 + 0xb8);
          if (plVar2 == (longlong *)0x0) {
LAB_14880ef3d:
            lVar6 = 0;
          }
          else {
            cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
            if (cVar3 == '\0') goto LAB_14880ef3d;
            uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
            lVar6 = FUN_144aff482(uVar4,plVar1);
          }
          *(longlong *)(param_1 + 0x2bf8) = lVar6;
        }
      }
      fVar7 = *(float *)(lVar6 + 0x1c);
      goto LAB_14880ed49;
    }
  }
  if (lVar5 == 0) {
    uVar4 = FUN_140aed8fc();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x2bf0) = lVar5;
    lVar6 = *(longlong *)(param_1 + 0x2bf8);
  }
  if (lVar6 == 0) {
    *(undefined8 *)(param_1 + 0x2bf8) = 0;
    lVar6 = 0;
    if ((lVar5 != 0) && (*(longlong *)(param_1 + 0x2be8) != 0)) {
      plVar2 = *(longlong **)(lVar5 + 0xb8);
      if (plVar2 == (longlong *)0x0) {
LAB_14880ef2f:
        lVar6 = 0;
      }
      else {
        cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
        if (cVar3 == '\0') goto LAB_14880ef2f;
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar6 = FUN_144aff482(uVar4,plVar1);
      }
      *(longlong *)(param_1 + 0x2bf8) = lVar6;
    }
  }
  if (((*(byte *)(lVar6 + 0x20) & 1) == 0) || (*(float *)(lVar6 + 0x18) <= 0.0)) {
LAB_14880ef16:
    uVar8 = FUN_1479c3a16(param_1);
    return uVar8;
  }
  fVar7 = (float)FUN_144ae1bd2(param_1);
  if ((fVar7 == 0.0) && (!NAN(fVar7))) goto LAB_14880ef16;
  lVar5 = *(longlong *)(param_1 + 0x2bf0);
  if (lVar5 == 0) {
    uVar4 = FUN_140aed8fc();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x2bf0) = lVar5;
  }
  lVar6 = *(longlong *)(param_1 + 0x2bf8);
  if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*plVar1 != 0)) {
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if (plVar2 == (longlong *)0x0) {
LAB_14880ef44:
      lVar6 = 0;
    }
    else {
      cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
      if (cVar3 == '\0') goto LAB_14880ef44;
      uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar6 = FUN_144aff482(uVar4,plVar1);
    }
    *(longlong *)(param_1 + 0x2bf8) = lVar6;
  }
  fVar7 = (*(float *)(lVar6 + 0x18) * *(float *)(lVar6 + 0x18)) / (fVar7 * -2.0);
LAB_14880ed49:
  return (ulonglong)(uint)fVar7;
}



// FUNCTION 14880ef48 FUN_14880ef48 body=62 status=ok
// SIG undefined FUN_14880ef48(void)

void FUN_14880ef48(longlong *param_1,uint param_2)

{
  char cVar1;
  
  if (param_1[0x76c] != 0) {
    cVar1 = (**(code **)(*param_1 + 0xeb8))();
    if (cVar1 != '\0') {
      FUN_1410fee4e(param_1,(param_2 & 0xff) << 3);
      return;
    }
  }
  return;
}



// FUNCTION 14880ef86 FUN_14880ef86 body=95 status=ok
// SIG undefined FUN_14880ef86(void)

void FUN_14880ef86(longlong *param_1)

{
  char cVar1;
  int iVar2;
  
  if ((longlong *)param_1[0x39d] != (longlong *)0x0) {
    cVar1 = (**(code **)(*(longlong *)param_1[0x39d] + 0x700))();
    if (cVar1 != '\0') {
      if (param_1[0x15] != 0) {
        iVar2 = FUN_14487fd02();
        if (iVar2 == 3) {
          (**(code **)(*param_1 + 3000))(param_1);
          FUN_14867e8d2(param_1);
        }
      }
      FUN_1404fad5e(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14880efe6 FUN_14880efe6 body=584 status=ok
// SIG undefined FUN_14880efe6(void)

undefined4 * FUN_14880efe6(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined8 uStack_88;
  double local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_3 + 4);
  uVar4 = *param_3;
  uVar5 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_2 = uVar4;
  param_2[1] = uVar5;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  if (*(longlong *)(param_1 + 0x3b60) == 0) goto LAB_14880f031;
  FUN_14880f230(uVar4,&local_90);
  dVar7 = local_90 * local_90 + uStack_88 * uStack_88;
  if ((dVar7 != 1.0) || (NAN(dVar7))) {
    if (9.99999993922529e-09 <= dVar7) {
      uStack_70 = uStack_88 * (1.0 / SQRT(dVar7));
      local_90 = local_90 * (1.0 / SQRT(dVar7));
      goto LAB_14880f215;
    }
    local_68 = DAT_14c8464f0;
    local_90._0_4_ = (undefined4)DAT_14c8464e0;
    local_90._4_4_ = DAT_14c8464e0._4_4_;
    uVar4 = (undefined4)DAT_14c8464e8;
    uVar5 = DAT_14c8464e8._4_4_;
LAB_14880f0db:
    local_78 = (double)CONCAT44(local_90._4_4_,(undefined4)local_90);
    uStack_70 = (double)CONCAT44(uVar5,uVar4);
  }
  else {
    uStack_70 = uStack_88;
    if ((local_80 == 0.0) && (!NAN(local_80))) {
      local_68 = local_80;
      uVar4 = (undefined4)uStack_88;
      uVar5 = uStack_88._4_4_;
      goto LAB_14880f0db;
    }
LAB_14880f215:
    local_68 = 0.0;
    local_78 = local_90;
  }
  FUN_144a79a9c(&local_78,&local_90);
  fVar8 = (float)uStack_88;
  FUN_144a79a9c(param_3,&local_90);
  fVar9 = (float)uStack_88;
  dVar7 = (double)FUN_144719204(SUB84((double)(fVar8 - fVar9),0));
  dVar7 = (double)(~-(ulonglong)(dVar7 < 0.0) & (ulonglong)dVar7 |
                  (ulonglong)(dVar7 + 360.0) & -(ulonglong)(dVar7 < 0.0));
  fVar6 = (float)(double)(~-(ulonglong)(180.0 < dVar7) & (ulonglong)dVar7 |
                         (ulonglong)(dVar7 + -360.0) & -(ulonglong)(180.0 < dVar7));
  fVar1 = *(float *)(*(longlong *)(param_1 + 0x3b60) + 0x118);
  if (fVar6 <= fVar1) {
    if (fVar6 < -fVar1) {
      fVar9 = fVar1 + fVar8;
    }
  }
  else {
    fVar9 = fVar8 - fVar1;
  }
  uStack_88 = (double)fVar9;
  local_90 = 0.0;
  local_80 = 0.0;
  FUN_144a76660(&local_90,param_2);
LAB_14880f031:
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14880f230 FUN_14880f230 body=395 status=ok
// SIG undefined FUN_14880f230(void)

void FUN_14880f230(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  if ((~*(uint *)(param_1 + 0x498) & 3) == 0) {
    dVar6 = *(double *)(param_1 + 0x500);
    dVar1 = *(double *)(param_1 + 0x508);
    dVar2 = *(double *)(param_1 + 0x510);
    dVar7 = dVar6 * 0.0 + dVar1 * -0.0;
    dVar5 = dVar2 * 0.0 + dVar6;
    dVar3 = dVar2 * -0.0 - dVar1;
    dVar4 = dVar3 * dVar1 - dVar6 * dVar5;
    dVar3 = dVar7 * dVar6 - dVar2 * dVar3;
    dVar6 = dVar5 * dVar2 - dVar7 * dVar1;
    *param_2 = dVar6;
    param_2[1] = dVar3;
    param_2[2] = dVar4;
    if (((ABS(dVar6) <= 9.999999747378752e-05) && (ABS(dVar3) <= 9.999999747378752e-05)) &&
       (ABS(dVar4) <= 9.999999747378752e-05)) {
      dVar6 = *(double *)(param_1 + 0x128);
      dVar1 = *(double *)(param_1 + 0x130);
      dVar2 = *(double *)(param_1 + 0x138);
      dVar7 = dVar2 * dVar2 + dVar6 * dVar6 + dVar1 * dVar1;
      if (((dVar7 != 1.0) || (dVar3 = dVar6, dVar4 = dVar1, dVar5 = dVar2, NAN(dVar7))) &&
         (dVar3 = DAT_14c8464e0, dVar4 = DAT_14c8464e8, dVar5 = DAT_14c8464f0,
         9.99999993922529e-09 <= dVar7)) {
        dVar7 = 1.0 / SQRT(dVar7);
        dVar3 = dVar6 * dVar7;
        dVar4 = dVar1 * dVar7;
        dVar5 = dVar2 * dVar7;
      }
      *param_2 = dVar3;
      param_2[1] = dVar4;
      param_2[2] = dVar5;
    }
  }
  else {
    param_2[2] = DAT_14c8464f0;
    dVar6 = DAT_14c8464e8;
    *param_2 = DAT_14c8464e0;
    param_2[1] = dVar6;
  }
  return;
}



// FUNCTION 14880f3bc FUN_14880f3bc body=72 status=ok
// SIG undefined FUN_14880f3bc(void)

void FUN_14880f3bc(longlong param_1)

{
  longlong lVar1;
  
  FUN_141105774(param_1,0,3);
  lVar1 = *(longlong *)(param_1 + 0x818);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x80) != 0)) {
    *(undefined8 *)(lVar1 + 0x80) = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x818) + 0x88) = 0;
  }
  return;
}



// FUNCTION 14880f404 FUN_14880f404 body=289 status=ok
// SIG undefined FUN_14880f404(void)

void FUN_14880f404(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48 [3];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48[0] = param_2;
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(param_2);
  }
  FUN_14881311a(param_1 + 0x4100,local_48);
  if (*(longlong *)(param_1 + 0x4110) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x3b60);
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    *(longlong *)(param_1 + 0x4110) = param_2;
    local_50 = *(longlong *)(param_2 + 0x3c8);
    if (local_50 == 0) {
      lVar2 = FUN_140541594();
      local_50 = *(longlong *)(lVar2 + 0x20);
    }
    FUN_1446dcdd4(local_48);
    if (DAT_14cb75bb8 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_144815d88(DAT_14cb75bb8,local_48);
    }
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    if (lVar2 == 0) {
      lVar2 = *(longlong *)(param_1 + 0x3b58);
    }
    *(longlong *)(param_1 + 0x3b60) = lVar2;
    if (lVar2 != lVar1) {
      FUN_145bed826(param_1);
    }
  }
  if (*(longlong *)(&DAT_00001ce8 + param_1) != 0) {
    FUN_1487bce16();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14880f526 FUN_14880f526 body=362 status=ok
// SIG undefined FUN_14880f526(void)

undefined4
FUN_14880f526(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  int local_90;
  int local_8c;
  undefined8 local_88;
  undefined4 local_80;
  char local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_8c = 1;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    local_8c = (*(char *)(*(longlong *)(param_1 + 0xa8) + 0x178) == '\x02') + 1;
  }
  local_90 = *(int *)(param_1 + 0x35a0) + 1;
  if (*(int *)(param_1 + 0x35a0) < -1) {
    local_90 = 1;
  }
  *(int *)(param_1 + 0x35a0) = local_90;
  puVar1 = &local_88;
  local_78 = 0;
  if (puVar1 != param_3) {
    local_88 = 0;
    local_80 = 0;
    FUN_14867b726(puVar1,param_3);
  }
  local_a0 = param_8;
  local_a8 = param_7;
  local_b0 = param_6;
  local_b8 = param_5;
  local_78 = puVar1 != param_3;
  uVar2 = FUN_141122b72(param_1,&local_90,param_2,param_4);
  if (local_78 == '\x01') {
    FUN_1449db362(puVar1);
  }
  FUN_1449db362(param_3);
  if ((local_70 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14880f69a FUN_14880f69a body=229 status=ok
// SIG undefined FUN_14880f69a(void)

undefined4
FUN_14880f69a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined4 *param_8)

{
  undefined4 uVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 *local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  int local_38 [2];
  undefined1 local_30 [16];
  char local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38[0] = 1;
  if (-2 < *(int *)(param_1 + 0x35a0)) {
    local_38[0] = *(int *)(param_1 + 0x35a0) + 1;
  }
  *(int *)(param_1 + 0x35a0) = local_38[0];
  local_38[1] = 1;
  local_20 = '\0';
  local_58 = *param_8;
  uStack_54 = param_8[1];
  uStack_50 = param_8[2];
  uStack_4c = param_8[3];
  local_68 = &local_58;
  local_48 = *(undefined8 *)(param_8 + 4);
  local_70 = param_7;
  local_78 = param_6;
  local_80 = param_5;
  local_88 = param_4;
  uVar1 = FUN_141122e06(param_5,local_38,param_2,param_3);
  if (local_20 == '\x01') {
    FUN_1449db362(local_30);
  }
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14880f79c FUN_14880f79c body=136 status=ok
// SIG undefined FUN_14880f79c(void)

undefined8 * FUN_14880f79c(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x630);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_14001cc68(0xf8,0x10);
    FUN_1414fc186(puVar2,param_1 + -0x1e8);
    *puVar2 = &PTR_FUN_14b3f3cf0;
    puVar2[0x1a] = 0xffffffffbf800000;
    uVar1 = DAT_14c8464e8;
    puVar2[0x1b] = DAT_14c8464e0;
    puVar2[0x1c] = uVar1;
    puVar2[0x1d] = DAT_14c8464f0;
    puVar2[0x1e] = 0;
    *(undefined8 **)(param_1 + 0x630) = puVar2;
  }
  return puVar2;
}



// FUNCTION 14880f824 FUN_14880f824 body=111 status=ok
// SIG undefined FUN_14880f824(void)

undefined8 * FUN_14880f824(undefined8 param_1,undefined8 *param_2)

{
  void *_Dst;
  undefined8 *puVar1;
  
  _Dst = (void *)FUN_14001cc68(0x550);
  memset(_Dst,0,0x550);
  FUN_1410f8202(_Dst);
  *param_2 = _Dst;
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b3f4ff0;
  puVar1[2] = _Dst;
  param_2[1] = puVar1;
  return param_2;
}



// FUNCTION 14880f894 FUN_14880f894 body=69 status=ok
// SIG undefined FUN_14880f894(void)

void FUN_14880f894(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_14880f8da(param_1 + 0x2c00,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14880f8da FUN_14880f8da body=203 status=ok
// SIG undefined FUN_14880f8da(void)

void FUN_14880f8da(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar1 = param_1 + 0x18;
  lVar4 = *(longlong *)(param_1 + 0x98);
  lVar5 = lVar4;
  if (lVar4 == 0) {
    lVar5 = lVar1;
  }
  iVar3 = *(int *)(param_1 + 0xa0);
  lVar7 = (longlong)iVar3;
  if (lVar7 != 0) {
    lVar6 = lVar7 << 5;
    do {
      if (*(longlong *)(lVar5 + 0x18) == *param_2) {
        if (lVar5 != 0) goto LAB_14880f968;
        break;
      }
      lVar5 = lVar5 + 0x20;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  *(uint *)(param_1 + 0xa0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar3 + 1U) {
    FUN_1488133c4(lVar1,iVar3);
    lVar4 = *(longlong *)(param_1 + 0x98);
  }
  if (lVar4 == 0) {
    lVar4 = lVar1;
  }
  lVar7 = lVar7 * 0x20;
  puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar7);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar4 + lVar7) = 0;
  ((undefined8 *)(lVar4 + lVar7))[1] = 0;
  lVar4 = *(longlong *)(param_1 + 0x98);
  if (*(longlong *)(param_1 + 0x98) == 0) {
    lVar4 = lVar1;
  }
  lVar5 = lVar4 + lVar7;
  *(longlong *)(lVar4 + 0x18 + lVar7) = *param_2;
LAB_14880f968:
  FUN_145bed7d2(lVar5,param_3);
  return;
}



// FUNCTION 14880f9a6 FUN_14880f9a6 body=87 status=ok
// SIG undefined FUN_14880f9a6(void)

void FUN_14880f9a6(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  if (0 < *(int *)(param_1 + 0x2ca0)) {
    local_10 = &local_18;
    FUN_1488134ca(param_1 + 0x2c18);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14880f9fe FUN_14880f9fe body=66 status=ok
// SIG undefined FUN_14880f9fe(void)

undefined8 FUN_14880f9fe(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = param_1 + 0x2c18;
  if (*(longlong *)(param_1 + 0x2c98) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x2c98);
  }
  if ((longlong)*(int *)(param_1 + 0x2ca0) == 0) {
    uVar2 = 0;
  }
  else {
    lVar3 = (longlong)*(int *)(param_1 + 0x2ca0) << 5;
    do {
      if (*(longlong *)(lVar1 + 0x18) == param_2) goto LAB_14880fa35;
      lVar1 = lVar1 + 0x20;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
    lVar1 = 0;
LAB_14880fa35:
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),lVar1 != 0);
  }
  return uVar2;
}



// FUNCTION 14880fa40 FUN_14880fa40 body=215 status=ok
// SIG undefined FUN_14880fa40(void)

double * FUN_14880fa40(longlong param_1,double *param_2,longlong *param_3)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  (**(code **)(*param_3 + 0x4e0))(param_3);
  if (*(longlong *)(param_1 + 0x1cf0) != 0) {
    fVar1 = *(float *)(*(longlong *)(param_1 + 0x1cf0) + 600);
    if (*(float *)((longlong)param_3 + 0x76c) <= fVar1) {
      fVar1 = *(float *)((longlong)param_3 + 0x76c);
    }
    dVar2 = DAT_14c8464e0;
    dVar3 = DAT_14c8464e8;
    dVar4 = DAT_14c8464f0;
    if (0.0001 <= fVar1) {
      dVar5 = (double)fVar1;
      dVar2 = *param_2;
      dVar3 = param_2[1];
      dVar4 = param_2[2];
      dVar6 = dVar4 * dVar4 + dVar2 * dVar2 + dVar3 * dVar3;
      if (dVar5 * dVar5 < dVar6) {
        dVar5 = (1.0 / SQRT(dVar6)) * dVar5;
        dVar2 = dVar2 * dVar5;
        dVar3 = dVar3 * dVar5;
        dVar4 = dVar4 * dVar5;
      }
    }
    *param_2 = dVar2;
    param_2[1] = dVar3;
    param_2[2] = dVar4;
  }
  return param_2;
}



// FUNCTION 14880fb18 FUN_14880fb18 body=160 status=ok
// SIG undefined FUN_14880fb18(void)

void FUN_14880fb18(longlong param_1,longlong *param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != (longlong *)0x0) {
    local_30 = 0;
    FUN_14485c47a(&local_30,param_1);
    local_28 = DAT_14cb760d0;
    (**(code **)(*param_2 + 0xa88))(param_2,&local_30);
    FUN_14880423c(param_1 + 0x3bd0,param_2);
    FUN_14880423c(param_1 + 0x3d80,param_2);
    FUN_14880423c(param_1 + 0x3f30,param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14880fbba FUN_14880fbba body=79 status=ok
// SIG undefined FUN_14880fbba(void)

void FUN_14880fbba(longlong *param_1)

{
  undefined4 uVar1;
  
  if ((param_1[0x15] != 0) && (1 < *(byte *)(param_1[0x15] + 0x178))) {
    uVar1 = (**(code **)(*param_1 + 0xed8))();
    *(undefined4 *)(param_1 + 0x823) = uVar1;
    *(undefined1 *)((longlong)param_1 + 0x411c) = 1;
    uVar1 = (**(code **)(*param_1 + 0xee0))(param_1);
    *(undefined4 *)(param_1 + 0x824) = uVar1;
  }
  return;
}



// FUNCTION 14880fc0a FUN_14880fc0a body=145 status=ok
// SIG undefined FUN_14880fc0a(void)

void FUN_14880fc0a(longlong param_1,float *param_2)

{
  if (*(char *)(param_1 + 0x4134) == '\x01') {
    *(undefined1 *)(param_1 + 0x4134) = 0;
  }
  if (0.0001 < *param_2 || *param_2 == 0.0001) {
    *(undefined8 *)(param_1 + 0x4124) = 0;
    *(undefined8 *)(param_1 + 0x412c) = 0;
    *(undefined1 *)(param_1 + 0x4134) = 1;
    *(float *)(param_1 + 0x4124) = *param_2;
    *(float *)(param_1 + 0x4128) = param_2[1];
    *(float *)(param_1 + 0x412c) = param_2[2];
    *(bool *)(param_1 + 0x4131) =
         (float)SQRT(*(double *)(param_1 + 0x128) * *(double *)(param_1 + 0x128) +
                     *(double *)(param_1 + 0x130) * *(double *)(param_1 + 0x130)) < param_2[1];
    *(undefined1 *)(param_1 + 0x4130) = *(undefined1 *)(param_2 + 3);
  }
  return;
}



// FUNCTION 14880fc9c FUN_14880fc9c body=122 status=ok
// SIG undefined FUN_14880fc9c(void)

undefined8 FUN_14880fc9c(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_2;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)((int)((ulonglong)lVar2 >> 0x20) * 0x17 + (int)lVar2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x10) == lVar2) {
          FUN_148813660();
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x10 + *param_1 + 8);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 14880fd16 FUN_14880fd16 body=384 status=ok
// SIG undefined FUN_14880fd16(void)

double * FUN_14880fd16(longlong param_1,double *param_2,longlong *param_3)

{
  double dVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double *pdVar5;
  double *pdVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  undefined1 auStack_78 [40];
  undefined1 local_50 [4];
  float local_4c;
  undefined1 local_48 [4];
  float local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_3 + 0x528))(param_3,&local_44,local_48);
  (**(code **)(**(longlong **)(&DAT_00001ce8 + param_1) + 0x528))
            (*(longlong **)(&DAT_00001ce8 + param_1),&local_4c,local_50);
  pdVar6 = (double *)(param_3[0x39] + 0x260);
  pdVar5 = (double *)&DAT_14c8464e0;
  if (param_3[0x39] == 0) {
    pdVar6 = (double *)&DAT_14c8464e0;
  }
  lVar2 = *(longlong *)(*(longlong *)(&DAT_00001ce8 + param_1) + 0x1c8);
  dVar7 = DAT_14c8464f0;
  if (lVar2 != 0) {
    pdVar5 = (double *)(lVar2 + 0x260);
    dVar7 = *(double *)(lVar2 + 0x270);
  }
  dVar8 = *pdVar6 - *pdVar5;
  dVar9 = pdVar6[1] - pdVar5[1];
  dVar4 = dVar8 * dVar8 + dVar9 * dVar9;
  dVar3 = 1.0 / SQRT(dVar4);
  if (9.99999993922529e-09 < dVar4) {
    dVar9 = dVar9 * dVar3;
  }
  else {
    dVar9 = 0.0;
  }
  fVar10 = (float)SQRT(dVar4) - (local_44 + local_4c);
  fVar12 = 0.0;
  if (0.0 <= fVar10) {
    fVar12 = fVar10;
  }
  dVar11 = (double)fVar12;
  dVar1 = pdVar5[1];
  *param_2 = *pdVar5 + (double)(-(ulonglong)(9.99999993922529e-09 < dVar4) &
                               (ulonglong)(dVar8 * dVar3)) * dVar11;
  param_2[1] = dVar9 * dVar11 + dVar1;
  param_2[2] = dVar7 + dVar11 * 0.0;
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14880fea6 FUN_14880fea6 body=632 status=ok
// SIG undefined FUN_14880fea6(void)

double * FUN_14880fea6(longlong *param_1,double *param_2,float param_3,float *param_4,
                      double *param_5,char param_6)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  double *pdVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  lVar6 = param_1[0x39d];
  param_2[2] = DAT_14c8464f0;
  dVar9 = DAT_14c8464e8;
  *param_2 = DAT_14c8464e0;
  param_2[1] = dVar9;
  if (lVar6 != 0) {
    fVar8 = *param_4;
    if (0.0 < fVar8) {
      lVar1 = *(longlong *)(lVar6 + 0x1c8);
      if (lVar1 == 0) {
        pdVar7 = &DAT_14c8464e0;
        dVar9 = DAT_14c8464f0;
      }
      else {
        pdVar7 = (double *)(lVar1 + 0x260);
        dVar9 = *(double *)(lVar1 + 0x270);
      }
      dVar4 = param_5[1] - pdVar7[1];
      dVar2 = *param_5 - *pdVar7;
      dVar9 = param_5[2] - dVar9;
      dVar10 = dVar9 * dVar9 + dVar2 * dVar2 + dVar4 * dVar4;
      if (((dVar10 != 1.0) || (dVar5 = dVar4, dVar3 = dVar2, dVar12 = dVar9, NAN(dVar10))) &&
         (dVar5 = DAT_14c8464e8, dVar3 = DAT_14c8464e0, dVar12 = DAT_14c8464f0,
         9.99999993922529e-09 <= dVar10)) {
        dVar12 = 1.0 / SQRT(dVar10);
        dVar5 = dVar4 * dVar12;
        dVar3 = dVar2 * dVar12;
        dVar12 = dVar9 * dVar12;
      }
      if (fVar8 <= param_3) {
        fVar8 = param_3;
      }
      dVar9 = (double)(float)(-(uint)(0.0 < fVar8) & (uint)((float)SQRT(dVar10) / fVar8));
      dVar12 = dVar12 * dVar9;
      dVar5 = dVar5 * dVar9;
      dVar3 = dVar3 * dVar9;
      *param_2 = dVar3;
      param_2[1] = dVar5;
      param_2[2] = dVar12;
      if (param_6 != '\0') {
        fVar8 = (float)(**(code **)(*param_1 + 0x480))(param_1);
        dVar9 = DAT_14c8464f0;
        dVar2 = DAT_14c8464e8;
        dVar4 = DAT_14c8464e0;
        if (0.0001 <= fVar8) {
          dVar10 = (double)fVar8;
          dVar11 = dVar12 * dVar12 + dVar3 * dVar3 + dVar5 * dVar5;
          dVar9 = dVar12;
          dVar2 = dVar5;
          dVar4 = dVar3;
          if (dVar10 * dVar10 < dVar11) {
            dVar10 = (1.0 / SQRT(dVar11)) * dVar10;
            dVar9 = dVar12 * dVar10;
            dVar2 = dVar5 * dVar10;
            dVar4 = dVar3 * dVar10;
          }
        }
        *param_2 = dVar4;
        param_2[1] = dVar2;
        param_2[2] = dVar9;
        lVar6 = param_1[0x39d];
      }
    }
    if ((*(byte *)(lVar6 + 0x550) & 0x10) == 0) {
      *param_4 = *param_4 - param_3;
    }
  }
  return param_2;
}



// FUNCTION 14881011e FUN_14881011e body=31 status=ok
// SIG undefined FUN_14881011e(void)

void FUN_14881011e(longlong *param_1)

{
  FUN_140456554();
                    /* WARNING: Could not recover jumptable at 0x000148810136. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xcf0))(param_1);
  return;
}



// FUNCTION 14881013e FUN_14881013e body=226 status=ok
// SIG undefined FUN_14881013e(void)

void FUN_14881013e(longlong *param_1,undefined4 *param_2,char param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[0xcb] = *(longlong *)(param_2 + 4);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0xc9) = *param_2;
  *(undefined4 *)((longlong)param_1 + 0x64c) = uVar1;
  *(undefined4 *)(param_1 + 0xca) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x654) = uVar3;
  if ((int)param_1[200] == 0) {
    (**(code **)(*param_1 + 0x540))();
    FUN_1448215fa(param_1);
    (**(code **)(*param_1 + 0x9f8))(param_1);
    if ((*(byte *)((longlong)param_1 + 0x9c) & 8) != 0) {
      local_38 = param_1[0x50];
      lStack_30 = param_1[0x51];
      local_28 = param_1[0x52];
      FUN_140043360(param_1 + 0x82,&local_38,1);
      if (param_3 != '\0') {
        iVar4 = (**(code **)(*param_1 + 0x570))(param_1);
        if ((iVar4 != 0) && (param_1[0x15] != 0)) {
          FUN_144907e2c(param_1,0,1,0);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148810222 FUN_148810222 body=204 status=ok
// SIG undefined FUN_148810222(void)

void FUN_148810222(longlong *param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_1 + 0xcc) = param_2;
  if ((int)param_1[200] == 2) {
    (**(code **)(*param_1 + 0x540))();
    (**(code **)(*param_1 + 0x9f8))(param_1);
    FUN_1448215fa(param_1);
    if ((*(byte *)((longlong)param_1 + 0x9c) & 8) != 0) {
      local_38 = param_1[0x50];
      lStack_30 = param_1[0x51];
      local_28 = param_1[0x52];
      FUN_140043360(param_1 + 0x82,&local_38,1);
      if (param_3 != '\0') {
        iVar1 = (**(code **)(*param_1 + 0x570))(param_1);
        if ((iVar1 != 0) && (param_1[0x15] != 0)) {
          FUN_144907e2c(param_1,0,1,0);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148810394 FUN_148810394 body=148 status=ok
// SIG undefined FUN_148810394(void)

undefined8 * FUN_148810394(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x2c0,0x10);
  FUN_1406ff4f8(puVar2,param_1,0);
  *puVar2 = &PTR_FUN_14b3f4690;
  *(uint *)(puVar2 + 0x53) = *(uint *)(puVar2 + 0x53) & 0xfffffffe | *(byte *)(param_1 + 0x62c) & 1;
  uVar1 = *(undefined8 *)(param_1 + 0x650);
  puVar2[0x54] = *(undefined8 *)(param_1 + 0x648);
  puVar2[0x55] = uVar1;
  puVar2[0x56] = *(undefined8 *)(param_1 + 0x658);
  *(undefined4 *)(puVar2 + 0x57) = *(undefined4 *)(param_1 + 0x628);
  *(undefined4 *)((longlong)puVar2 + 700) = *(undefined4 *)(param_1 + 0x638);
  *(byte *)((longlong)puVar2 + 0x6f) = *(byte *)((longlong)puVar2 + 0x6f) & 0x7f;
  return puVar2;
}



// FUNCTION 148810428 FUN_148810428 body=152 status=ok
// SIG undefined FUN_148810428(void)

undefined8 * FUN_148810428(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x2b0,0x10);
  FUN_1406ff4f8(puVar1,param_1,0);
  *puVar1 = &PTR_FUN_14b3f4b10;
  *(uint *)(puVar1 + 0x53) = *(uint *)(puVar1 + 0x53) & 0xfffffffe | *(byte *)(param_1 + 0x62c) & 1;
  *(undefined4 *)((longlong)puVar1 + 0x29c) = *(undefined4 *)(param_1 + 0x668);
  *(undefined4 *)(puVar1 + 0x54) = *(undefined4 *)(param_1 + 0x664);
  *(undefined4 *)((longlong)puVar1 + 0x2a4) = *(undefined4 *)(param_1 + 0x628);
  *(undefined4 *)(puVar1 + 0x55) = *(undefined4 *)(param_1 + 0x638);
  *(byte *)((longlong)puVar1 + 0x6f) = *(byte *)((longlong)puVar1 + 0x6f) & 0x7f;
  return puVar1;
}



// FUNCTION 1488104c0 FUN_1488104c0 body=136 status=ok
// SIG undefined FUN_1488104c0(void)

undefined8 * FUN_1488104c0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x2b0,0x10);
  FUN_1406ff4f8(puVar1,param_1,0);
  *puVar1 = &PTR_FUN_14b3f48d0;
  *(uint *)(puVar1 + 0x53) = *(uint *)(puVar1 + 0x53) & 0xfffffffe | *(byte *)(param_1 + 0x62c) & 1;
  *(undefined4 *)((longlong)puVar1 + 0x29c) = *(undefined4 *)(param_1 + 0x628);
  *(undefined4 *)(puVar1 + 0x54) = *(undefined4 *)(param_1 + 0x660);
  *(undefined4 *)((longlong)puVar1 + 0x2a4) = *(undefined4 *)(param_1 + 0x638);
  *(byte *)((longlong)puVar1 + 0x6f) = *(byte *)((longlong)puVar1 + 0x6f) & 0x7f;
  return puVar1;
}



// FUNCTION 1488106b4 FUN_1488106b4 body=1075 status=ok
// SIG undefined FUN_1488106b4(void)

ulonglong FUN_1488106b4(longlong param_1,double *param_2,double *param_3,double *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  undefined4 uVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  
  iVar11 = *(int *)(param_1 + 0x640);
  if (iVar11 == 2) {
    uVar10 = 2;
    if (((ABS(ABS(*param_4) - ABS(param_4[1])) <= 9.999999747378752e-05) &&
        (ABS(ABS(*param_4) - ABS(param_4[2])) <= 9.999999747378752e-05)) &&
       (uVar10 = 1, ABS(ABS(param_4[1]) - ABS(param_4[2])) <= 9.999999747378752e-05)) {
      return 1;
    }
    dVar19 = *param_2;
    dVar20 = param_2[1];
    dVar17 = param_2[2];
    dVar18 = param_2[3];
    dVar21 = *param_3;
    dVar23 = param_3[1];
    dVar25 = param_3[2];
    dVar27 = param_3[3];
    lVar16 = -(ulonglong)(9.999999747378752e-05 < ABS(dVar20 - dVar23));
    auVar7._8_4_ = (int)lVar16;
    auVar7._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar19 - dVar21));
    auVar7._12_4_ = (int)((ulonglong)lVar16 >> 0x20);
    uVar14 = movmskpd(uVar10,auVar7);
    lVar16 = -(ulonglong)(9.999999747378752e-05 < ABS(dVar18 - dVar27));
    auVar4._8_4_ = (int)lVar16;
    auVar4._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar17 - dVar25));
    auVar4._12_4_ = (int)((ulonglong)lVar16 >> 0x20);
    iVar11 = movmskpd((int)param_1,auVar4);
    uVar13 = iVar11 << 2 | uVar14;
    if (uVar13 == 0) {
      return CONCAT71((uint7)(uint3)(uVar14 >> 8),1);
    }
  }
  else {
    if (iVar11 == 1) {
      if ((*param_4 == param_4[1]) && (!NAN(*param_4) && !NAN(param_4[1]))) {
        dVar19 = param_2[2];
        dVar20 = *param_2;
        dVar17 = param_2[1];
        dVar26 = dVar20 * 0.0 + dVar17 * -0.0;
        dVar24 = dVar17 - dVar19 * 0.0;
        dVar22 = dVar19 * 0.0 - dVar20;
        dVar26 = dVar26 + dVar26;
        dVar22 = dVar22 + dVar22;
        dVar24 = dVar24 + dVar24;
        dVar18 = param_2[3];
        dVar21 = param_3[2];
        dVar23 = *param_3;
        dVar25 = param_3[1];
        dVar9 = dVar23 * 0.0 + dVar25 * -0.0;
        dVar5 = dVar25 - dVar21 * 0.0;
        dVar8 = dVar21 * 0.0 - dVar23;
        dVar9 = dVar9 + dVar9;
        dVar8 = dVar8 + dVar8;
        dVar5 = dVar5 + dVar5;
        dVar27 = param_3[3];
        if ((ABS(((dVar17 * dVar26 - dVar22 * dVar19) + dVar24 * dVar18 + 0.0) -
                 ((dVar25 * dVar9 - dVar8 * dVar21) + dVar5 * dVar27 + 0.0)) <=
             9.999999747378752e-05) &&
           (ABS((dVar19 * dVar24 + -dVar20 * dVar26 + dVar18 * dVar22 + 0.0) -
                (dVar21 * dVar5 + -dVar23 * dVar9 + dVar27 * dVar8 + 0.0)) <= 9.999999747378752e-05)
           ) {
          return (ulonglong)
                 (ABS(((dVar20 * dVar22 - dVar24 * dVar17) + dVar18 * dVar26 + 1.0) -
                      ((dVar23 * dVar8 - dVar5 * dVar25) + dVar27 * dVar9 + 1.0)) <=
                 9.999999747378752e-05);
        }
      }
      return 0;
    }
    dVar19 = *param_2;
    dVar20 = param_2[1];
    dVar17 = param_2[2];
    dVar18 = param_2[3];
    dVar21 = *param_3;
    dVar23 = param_3[1];
    dVar25 = param_3[2];
    dVar27 = param_3[3];
    lVar16 = -(ulonglong)(9.999999747378752e-05 < ABS(dVar20 - dVar23));
    auVar6._8_4_ = (int)lVar16;
    auVar6._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar19 - dVar21));
    auVar6._12_4_ = (int)((ulonglong)lVar16 >> 0x20);
    uVar13 = movmskpd((int)param_1,auVar6);
    lVar16 = -(ulonglong)(9.999999747378752e-05 < ABS(dVar18 - dVar27));
    auVar3._8_4_ = (int)lVar16;
    auVar3._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar17 - dVar25));
    auVar3._12_4_ = (int)((ulonglong)lVar16 >> 0x20);
    uVar15 = movmskpd((int)param_2,auVar3);
    uVar12 = CONCAT71((uint7)(uint3)((uint)iVar11 >> 8),1);
    uVar14 = (uint)uVar12;
    if ((uVar15 & 0x3fffffff) == 0 && uVar13 == 0) {
      return uVar12;
    }
  }
  auVar1._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar20 + dVar23));
  auVar1._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar19 + dVar21));
  iVar11 = movmskpd(uVar14,auVar1);
  auVar2._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar18 + dVar27));
  auVar2._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar17 + dVar25));
  uVar14 = movmskpd(uVar13,auVar2);
  return (ulonglong)CONCAT31((int3)((uint)iVar11 >> 8),(uVar14 & 0x3fffffff) == 0 && iVar11 == 0);
}


