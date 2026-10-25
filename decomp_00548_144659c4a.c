// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144659c4a FUN_144659c4a body=81 status=ok
// SIG undefined FUN_144659c4a(void)

void FUN_144659c4a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_14982569a(param_1,param_2,lVar1);
  return;
}



// FUNCTION 144659c9c FUN_144659c9c body=438 status=ok
// SIG undefined FUN_144659c9c(void)

void FUN_144659c9c(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined1 local_89;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_149825974(&local_58,
                *(undefined8 *)
                 (&DAT_14ca8c1f0 +
                 (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x59e44c) * 2)
                 * 8),param_1 + 0x10);
  local_90 = *(undefined4 *)(param_4 + 0x8ef8);
  uVar1 = *(undefined4 *)(param_4 + 0x8ef0);
  uVar2 = *(undefined4 *)(param_4 + 0x8ef4);
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar4 = puVar5 + 0x3c;
  if (*(undefined8 **)(param_2 + 0x78) < puVar4) {
    FUN_140023dd8((longlong *)(param_2 + 0x70));
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar4 = puVar5 + 0x3c;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar4;
  *puVar5 = &PTR_FUN_14bea90d8;
  puVar4 = puVar5 + 2;
  puVar5[2] = 0;
  *(undefined1 *)(puVar5 + 3) = 1;
  puVar5[4] = 0;
  *(undefined1 *)(puVar5 + 5) = 1;
  puVar5[6] = 0;
  *(undefined1 *)(puVar5 + 7) = 1;
  puVar5[8] = 0;
  *(undefined1 *)(puVar5 + 9) = 1;
  memset(puVar5 + 10,0,400);
  iVar3 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar3 + 1U) {
    FUN_1448cfae8(param_2 + 0x98,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar3 * 8) = puVar5;
  FUN_14981d164(param_2,param_3,param_4,puVar4);
  FUN_145c4dcdc();
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  FUN_1448f70da(CONCAT44(uStack_54,local_58),&DAT_14cc2a738,puVar4,&local_88);
  uStack_78 = uStack_50;
  uStack_74 = uStack_4c;
  local_68 = local_90;
  local_88 = puVar4;
  local_70 = uVar1;
  local_6c = uVar2;
  FUN_145c4dcdc();
  FUN_149825a2a(param_2,&local_89,puVar4,&local_88);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144659e54 FUN_144659e54 body=492 status=ok
// SIG undefined FUN_144659e54(void)

void FUN_144659e54(longlong param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *_Dst;
  undefined1 *_Src;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,&local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar2) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar2;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = &local_b8;
    if ((undefined8 *)CONCAT44(uStack_ac,local_b0) != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)CONCAT44(uStack_ac,local_b0);
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    _Dst = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      _Dst = puVar3 + 2;
    }
    memcpy(_Dst,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    _Src = local_60;
    if (local_60 == (undefined1 *)0x0) {
      _Src = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar2 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar2 = puVar3 + 5;
    }
    memcpy(puVar2,_Src,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (CONCAT44(uStack_ac,local_b0) != 0) {
    FUN_1400020a8();
  }
  local_b0 = *(undefined4 *)(param_1 + 0x1d8);
  local_b8 = *(undefined8 *)(param_1 + 0x1d0);
  uVar1 = *(undefined8 *)(param_1 + 0x1b8);
  FUN_145c4dcdc();
  FUN_149825bd0(param_2,param_1 + 0x1c0,uVar1,&local_b8);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14465a041 FUN_14465a041 body=229 status=ok
// SIG undefined FUN_14465a041(void)

void FUN_14465a041(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14cc2a738,param_3);
  return;
}



// FUNCTION 14465a126 FUN_14465a126 body=81 status=ok
// SIG undefined FUN_14465a126(void)

void FUN_14465a126(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_149825c68(param_1,param_2,lVar1);
  return;
}



// FUNCTION 14465a178 FUN_14465a178 body=438 status=ok
// SIG undefined FUN_14465a178(void)

void FUN_14465a178(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined1 local_89;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_149825f42(&local_58,
                *(undefined8 *)
                 (&DAT_14ca8c1f0 +
                 (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x59e44c) * 2)
                 * 8),param_1 + 0x10);
  local_90 = *(undefined4 *)(param_4 + 0x8ef8);
  uVar1 = *(undefined4 *)(param_4 + 0x8ef0);
  uVar2 = *(undefined4 *)(param_4 + 0x8ef4);
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar4 = puVar5 + 0x3c;
  if (*(undefined8 **)(param_2 + 0x78) < puVar4) {
    FUN_140023dd8((longlong *)(param_2 + 0x70));
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar4 = puVar5 + 0x3c;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar4;
  *puVar5 = &PTR_FUN_14bea90d8;
  puVar4 = puVar5 + 2;
  puVar5[2] = 0;
  *(undefined1 *)(puVar5 + 3) = 1;
  puVar5[4] = 0;
  *(undefined1 *)(puVar5 + 5) = 1;
  puVar5[6] = 0;
  *(undefined1 *)(puVar5 + 7) = 1;
  puVar5[8] = 0;
  *(undefined1 *)(puVar5 + 9) = 1;
  memset(puVar5 + 10,0,400);
  iVar3 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar3 + 1U) {
    FUN_1448cfae8(param_2 + 0x98,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar3 * 8) = puVar5;
  FUN_14981d164(param_2,param_3,param_4,puVar4);
  FUN_145c4dcdc();
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  FUN_1448f70da(CONCAT44(uStack_54,local_58),&DAT_14cc2a738,puVar4,&local_88);
  uStack_78 = uStack_50;
  uStack_74 = uStack_4c;
  local_68 = local_90;
  local_88 = puVar4;
  local_70 = uVar1;
  local_6c = uVar2;
  FUN_145c4dcdc();
  FUN_149825ff8(param_2,&local_89,puVar4,&local_88);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14465a330 FUN_14465a330 body=492 status=ok
// SIG undefined FUN_14465a330(void)

void FUN_14465a330(longlong param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *_Dst;
  undefined1 *_Src;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,&local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar2) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar2;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = &local_b8;
    if ((undefined8 *)CONCAT44(uStack_ac,local_b0) != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)CONCAT44(uStack_ac,local_b0);
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    _Dst = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      _Dst = puVar3 + 2;
    }
    memcpy(_Dst,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    _Src = local_60;
    if (local_60 == (undefined1 *)0x0) {
      _Src = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar2 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar2 = puVar3 + 5;
    }
    memcpy(puVar2,_Src,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (CONCAT44(uStack_ac,local_b0) != 0) {
    FUN_1400020a8();
  }
  local_b0 = *(undefined4 *)(param_1 + 0x1d8);
  local_b8 = *(undefined8 *)(param_1 + 0x1d0);
  uVar1 = *(undefined8 *)(param_1 + 0x1b8);
  FUN_145c4dcdc();
  FUN_14982619e(param_2,param_1 + 0x1c0,uVar1,&local_b8);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14465a51d FUN_14465a51d body=229 status=ok
// SIG undefined FUN_14465a51d(void)

void FUN_14465a51d(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14cc2a738,param_3);
  return;
}



// FUNCTION 14465a602 FUN_14465a602 body=81 status=ok
// SIG undefined FUN_14465a602(void)

void FUN_14465a602(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_149826236(param_1,param_2,lVar1);
  return;
}



// FUNCTION 14465a654 FUN_14465a654 body=425 status=ok
// SIG undefined FUN_14465a654(void)

void FUN_14465a654(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_c8 [40];
  undefined4 local_a0;
  undefined1 local_99;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_149826510(&local_70,
                *(undefined8 *)
                 (&DAT_14ca8c1f0 +
                 (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x59e44c) * 2)
                 * 8),param_1 + 0x10);
  local_a0 = *(undefined4 *)(param_4 + 0x8ef8);
  uVar1 = *(undefined4 *)(param_4 + 0x8ef0);
  uVar2 = *(undefined4 *)(param_4 + 0x8ef4);
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar4 = puVar5 + 10;
  if (*(undefined8 **)(param_2 + 0x78) < puVar4) {
    FUN_140023dd8((longlong *)(param_2 + 0x70),0x60);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar4 = puVar5 + 10;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar4;
  *puVar5 = &PTR_FUN_14bea94d0;
  puVar4 = puVar5 + 2;
  puVar5[2] = 0;
  *(undefined1 *)(puVar5 + 3) = 1;
  puVar5[4] = 0;
  *(undefined1 *)(puVar5 + 5) = 1;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  iVar3 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar3 + 1U) {
    FUN_1448cfae8(param_2 + 0x98,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar3 * 8) = puVar5;
  FUN_1498265c6(param_2,param_3,param_4,puVar4);
  FUN_145e9e862();
  local_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  FUN_1448f70da(CONCAT44(uStack_6c,local_70),&DAT_14cc2a7c0,puVar4,&local_98);
  uStack_88 = uStack_68;
  uStack_84 = uStack_64;
  local_78 = local_a0;
  local_98 = puVar4;
  local_80 = uVar1;
  local_7c = uVar2;
  FUN_145e9e862();
  FUN_149826878(param_2,&local_99,puVar4,&local_98);
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14465a7fe FUN_14465a7fe body=492 status=ok
// SIG undefined FUN_14465a7fe(void)

void FUN_14465a7fe(longlong param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *_Dst;
  undefined1 *_Src;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,&local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar2) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar2;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = &local_b8;
    if ((undefined8 *)CONCAT44(uStack_ac,local_b0) != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)CONCAT44(uStack_ac,local_b0);
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    _Dst = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      _Dst = puVar3 + 2;
    }
    memcpy(_Dst,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    _Src = local_60;
    if (local_60 == (undefined1 *)0x0) {
      _Src = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar2 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar2 = puVar3 + 5;
    }
    memcpy(puVar2,_Src,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (CONCAT44(uStack_ac,local_b0) != 0) {
    FUN_1400020a8();
  }
  local_b0 = *(undefined4 *)(param_1 + 0x1d8);
  local_b8 = *(undefined8 *)(param_1 + 0x1d0);
  uVar1 = *(undefined8 *)(param_1 + 0x1b8);
  FUN_145e9e862();
  FUN_149826a1e(param_2,param_1 + 0x1c0,uVar1,&local_b8);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14465a9eb FUN_14465a9eb body=229 status=ok
// SIG undefined FUN_14465a9eb(void)

void FUN_14465a9eb(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14cc2a7c0,param_3);
  return;
}



// FUNCTION 14465aad0 FUN_14465aad0 body=81 status=ok
// SIG undefined FUN_14465aad0(void)

void FUN_14465aad0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_149826ab6(param_1,param_2,lVar1);
  return;
}



// FUNCTION 14465ab22 FUN_14465ab22 body=438 status=ok
// SIG undefined FUN_14465ab22(void)

void FUN_14465ab22(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined1 local_89;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_149826d74(&local_58,
                *(undefined8 *)
                 (&DAT_14ca8c1f0 +
                 (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x59e44c) * 2)
                 * 8),param_1 + 0x10);
  local_90 = *(undefined4 *)(param_4 + 0x8ef8);
  uVar1 = *(undefined4 *)(param_4 + 0x8ef0);
  uVar2 = *(undefined4 *)(param_4 + 0x8ef4);
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar4 = puVar5 + 0x3c;
  if (*(undefined8 **)(param_2 + 0x78) < puVar4) {
    FUN_140023dd8((longlong *)(param_2 + 0x70));
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar4 = puVar5 + 0x3c;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar4;
  *puVar5 = &PTR_FUN_14bea90d8;
  puVar4 = puVar5 + 2;
  puVar5[2] = 0;
  *(undefined1 *)(puVar5 + 3) = 1;
  puVar5[4] = 0;
  *(undefined1 *)(puVar5 + 5) = 1;
  puVar5[6] = 0;
  *(undefined1 *)(puVar5 + 7) = 1;
  puVar5[8] = 0;
  *(undefined1 *)(puVar5 + 9) = 1;
  memset(puVar5 + 10,0,400);
  iVar3 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar3 + 1U) {
    FUN_1448cfae8(param_2 + 0x98,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar3 * 8) = puVar5;
  FUN_14981d164(param_2,param_3,param_4,puVar4);
  FUN_145c4dcdc();
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  FUN_1448f70da(CONCAT44(uStack_54,local_58),&DAT_14cc2a738,puVar4,&local_88);
  uStack_78 = uStack_50;
  uStack_74 = uStack_4c;
  local_68 = local_90;
  local_88 = puVar4;
  local_70 = uVar1;
  local_6c = uVar2;
  FUN_145c4dcdc();
  FUN_149826e2a(param_2,&local_89,puVar4,&local_88);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14465acda FUN_14465acda body=492 status=ok
// SIG undefined FUN_14465acda(void)

void FUN_14465acda(longlong param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *_Dst;
  undefined1 *_Src;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,&local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar2) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar2;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = &local_b8;
    if ((undefined8 *)CONCAT44(uStack_ac,local_b0) != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)CONCAT44(uStack_ac,local_b0);
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    _Dst = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      _Dst = puVar3 + 2;
    }
    memcpy(_Dst,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    _Src = local_60;
    if (local_60 == (undefined1 *)0x0) {
      _Src = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar2 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar2 = puVar3 + 5;
    }
    memcpy(puVar2,_Src,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (CONCAT44(uStack_ac,local_b0) != 0) {
    FUN_1400020a8();
  }
  local_b0 = *(undefined4 *)(param_1 + 0x1d8);
  local_b8 = *(undefined8 *)(param_1 + 0x1d0);
  uVar1 = *(undefined8 *)(param_1 + 0x1b8);
  FUN_145c4dcdc();
  FUN_149826fd0(param_2,param_1 + 0x1c0,uVar1,&local_b8);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14465aec7 FUN_14465aec7 body=229 status=ok
// SIG undefined FUN_14465aec7(void)

void FUN_14465aec7(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14cc2a738,param_3);
  return;
}



// FUNCTION 14465afac FUN_14465afac body=81 status=ok
// SIG undefined FUN_14465afac(void)

void FUN_14465afac(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_149827068(param_1,param_2,lVar1);
  return;
}



// FUNCTION 14465affe FUN_14465affe body=438 status=ok
// SIG undefined FUN_14465affe(void)

void FUN_14465affe(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined1 local_89;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14982734e(&local_58,
                *(undefined8 *)
                 (&DAT_14ca8c1f0 +
                 (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x59e44c) * 2)
                 * 8),param_1 + 0x10);
  local_90 = *(undefined4 *)(param_4 + 0x8ef8);
  uVar1 = *(undefined4 *)(param_4 + 0x8ef0);
  uVar2 = *(undefined4 *)(param_4 + 0x8ef4);
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar4 = puVar5 + 0x3c;
  if (*(undefined8 **)(param_2 + 0x78) < puVar4) {
    FUN_140023dd8((longlong *)(param_2 + 0x70));
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar4 = puVar5 + 0x3c;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar4;
  *puVar5 = &PTR_FUN_14bea90d8;
  puVar4 = puVar5 + 2;
  puVar5[2] = 0;
  *(undefined1 *)(puVar5 + 3) = 1;
  puVar5[4] = 0;
  *(undefined1 *)(puVar5 + 5) = 1;
  puVar5[6] = 0;
  *(undefined1 *)(puVar5 + 7) = 1;
  puVar5[8] = 0;
  *(undefined1 *)(puVar5 + 9) = 1;
  memset(puVar5 + 10,0,400);
  iVar3 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar3 + 1U) {
    FUN_1448cfae8(param_2 + 0x98,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar3 * 8) = puVar5;
  FUN_14981d164(param_2,param_3,param_4,puVar4);
  FUN_145c4dcdc();
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  FUN_1448f70da(CONCAT44(uStack_54,local_58),&DAT_14cc2a738,puVar4,&local_88);
  uStack_78 = uStack_50;
  uStack_74 = uStack_4c;
  local_68 = local_90;
  local_88 = puVar4;
  local_70 = uVar1;
  local_6c = uVar2;
  FUN_145c4dcdc();
  FUN_149827404(param_2,&local_89,puVar4,&local_88);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14465b1b6 FUN_14465b1b6 body=492 status=ok
// SIG undefined FUN_14465b1b6(void)

void FUN_14465b1b6(longlong param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *_Dst;
  undefined1 *_Src;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,&local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar2) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar2;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = &local_b8;
    if ((undefined8 *)CONCAT44(uStack_ac,local_b0) != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)CONCAT44(uStack_ac,local_b0);
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    _Dst = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      _Dst = puVar3 + 2;
    }
    memcpy(_Dst,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    _Src = local_60;
    if (local_60 == (undefined1 *)0x0) {
      _Src = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar2 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar2 = puVar3 + 5;
    }
    memcpy(puVar2,_Src,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (CONCAT44(uStack_ac,local_b0) != 0) {
    FUN_1400020a8();
  }
  local_b0 = *(undefined4 *)(param_1 + 0x1d8);
  local_b8 = *(undefined8 *)(param_1 + 0x1d0);
  uVar1 = *(undefined8 *)(param_1 + 0x1b8);
  FUN_145c4dcdc();
  FUN_1498275aa(param_2,param_1 + 0x1c0,uVar1,&local_b8);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14465b3a3 FUN_14465b3a3 body=229 status=ok
// SIG undefined FUN_14465b3a3(void)

void FUN_14465b3a3(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14cc2a738,param_3);
  return;
}



// FUNCTION 14465b488 FUN_14465b488 body=81 status=ok
// SIG undefined FUN_14465b488(void)

void FUN_14465b488(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_149827642(param_1,param_2,lVar1);
  return;
}



// FUNCTION 14465b4d9 FUN_14465b4d9 body=956 status=ok
// SIG undefined FUN_14465b4d9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14465b4d9(void)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  char *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400b22c2(&local_30,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_30,&DAT_14cc290e8);
  if (cVar1 == '\0') {
    _DAT_14cc290e8 = 0;
    uRam000000014cc290f0 = 0;
  }
  if (local_30 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_28 = FUN_145f103f8;
  local_30 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cc29210,&local_30);
  local_28 = FUN_145f617aa;
  local_30 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cc29338,&local_30);
  local_28 = FUN_145e4d46e;
  local_30 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cc29460,&local_30);
  local_28 = FUN_145ed69a2;
  local_30 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cc29588,&local_30);
  DAT_14cc295b8 = 0;
  DAT_14cc295c0 = 0;
  DAT_14cc29598 = 0;
  _DAT_14cc295a0 = 0;
  _DAT_14cc295c4 = 0xffffffff00000080;
  DAT_14cc295cc = 0;
  DAT_14cc295d8 = 0;
  DAT_14cc295e0 = 0;
  atexit(FUN_14464fc04);
  FUN_1446f470e(&DAT_14cc295f8,L"FFXFSR3FXSystem",1);
  local_30 = (char *)0x800000014bea6dea;
  local_34 = 0x18;
  uVar2 = FUN_14577453c();
  local_28._0_5_ = CONCAT14(1,uVar2);
  FUN_14676207c(&local_30);
  local_30 = "SMInstance";
  local_28 = (code *)CONCAT35(local_28._5_3_,10);
  uVar3 = FUN_14001a6c0(&local_30,1);
  _DAT_14cc29640 = (ulonglong)uVar3;
  local_28 = FUN_145c4dbb8;
  local_30 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cc29820,&local_30);
  local_28 = FUN_146097652;
  local_30 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cc29948,&local_30);
  local_28 = FUN_1460978c0;
  local_30 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cc29a70,&local_30);
  local_28 = FUN_146097b2e;
  local_30 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cc29b98,&local_30);
  local_28 = FUN_146097d9c;
  local_30 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cc29cc0,&local_30);
  local_28 = FUN_14609800a;
  local_30 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cc29de8,&local_30);
  local_28 = FUN_146098278;
  local_30 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cc29f10,&local_30);
  local_28 = FUN_145e9e5f4;
  local_30 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cc2a038,&local_30);
  local_28 = FUN_145de5a5a;
  local_30 = &DAT_14152059c;
  FUN_14142a670(&DAT_14cc2a0d0,&local_30);
  local_28 = FUN_145eedda0;
  local_30 = &DAT_14152059c;
  FUN_14142a670(&DAT_14cc2a168,&local_30);
  local_28 = FUN_145da973c;
  local_30 = &DAT_14152059c;
  FUN_14142a670(&DAT_14cc2a200,&local_30);
  local_28 = FUN_145e0ef42;
  local_30 = &DAT_14152059c;
  FUN_14142a670(&DAT_14cc2a298,&local_30);
  FUN_145c5e0a4(0x11,FUN_14981cf2b);
  local_28 = FUN_1460984e6;
  local_30 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cc2a3c0,&local_30);
  local_28 = FUN_146098754;
  local_30 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cc2a4e8,&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14465b8b0 FUN_14465b8b0 body=558 status=ok
// SIG undefined FUN_14465b8b0(void)

void FUN_14465b8b0(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  byte bVar7;
  DWORD DVar8;
  DWORD DVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  double dVar13;
  float fVar14;
  undefined1 auStack_68 [32];
  LARGE_INTEGER local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  bVar5 = true;
  if (DAT_14cb0d2b0 != 0) {
    lVar10 = *(longlong *)(DAT_14cb0d2b0 + 0xc20);
    if ((lVar10 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar10);
    }
    else if (lVar10 == 0) goto LAB_14465b9c9;
    if ((*(longlong *)(lVar10 + 0xf8) != 0) &&
       (plVar12 = *(longlong **)(*(longlong *)(lVar10 + 0xf8) + 0x90), plVar12 != (longlong *)0x0))
    {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      lVar10 = (**(code **)(*plVar12 + 0x30))(plVar12);
      bVar5 = false;
      goto LAB_14465b93a;
    }
  }
LAB_14465b9c9:
  plVar12 = (longlong *)0x0;
  lVar10 = 0;
LAB_14465b93a:
  lVar6 = DAT_14cc28e58;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar3 = *(int *)(lVar4 + 0xc60);
  if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
    uVar11 = 0;
  }
  else if (iVar3 == 1) {
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    uVar11 = (ulonglong)(DVar8 != DVar9);
  }
  else {
    uVar11 = 1;
  }
  if (((lVar10 != 0) && (*(int *)(lVar6 + uVar11 * 4) != 0)) && (*(int *)(lVar10 + 0xa4) == 0)) {
    QueryPerformanceCounter(&local_48);
    dVar13 = (double)local_48.QuadPart * DAT_14c83f420 + 16777216.0;
    fVar14 = *(float *)(param_1 + 0x138) * 0.75 +
             (float)((dVar13 - *(double *)(param_1 + 0x130)) * 1000.0) * 0.25;
    *(float *)(param_1 + 0x138) = fVar14;
    *(double *)(param_1 + 0x130) = dVar13;
    fVar14 = 1000.0 / fVar14;
    *(float *)(param_1 + 0x13c) = fVar14;
    lVar10 = DAT_14cc28e88;
    if (*(int *)(lVar4 + 0xc60) == 0x40000002) {
      uVar11 = 0;
    }
    else {
      bVar7 = FUN_144a61b4f();
      uVar11 = (ulonglong)(bVar7 ^ 1);
      fVar14 = *(float *)(param_1 + 0x13c);
    }
    if (*(int *)(lVar10 + uVar11 * 4) != 0) {
      DAT_14cb0cbdc = *(undefined4 *)(param_1 + 0x138);
      DAT_14cb0d290 = fVar14;
    }
    FUN_147d7d58b();
  }
  if (!bVar5) {
    LOCK();
    puVar1 = (uint *)(plVar12 + 1);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812(plVar12);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14465bae0 FUN_14465bae0 body=3388 status=ok
// SIG undefined FUN_14465bae0(void)

void FUN_14465bae0(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  longlong lVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  undefined1 uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  bool bVar23;
  undefined1 auStack_1a8 [32];
  wchar_t *local_188;
  longlong local_180;
  longlong *local_178;
  longlong *local_170;
  longlong local_168;
  ulonglong local_160;
  ulonglong local_158;
  char *local_150;
  undefined4 local_148;
  longlong local_140;
  char *local_138;
  undefined4 local_130;
  char *local_128;
  undefined4 local_120;
  char *local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined4 local_100;
  char *local_f8;
  undefined4 local_f0;
  char local_e8 [6];
  undefined2 uStack_e2;
  undefined2 uStack_e0;
  undefined2 uStack_de;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  ulonglong local_cc;
  undefined8 local_c4;
  undefined2 local_bc;
  uint3 local_ba;
  undefined1 uStack_b7;
  undefined1 local_b6;
  undefined1 local_b5;
  undefined2 local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  longlong local_a0;
  undefined1 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined1 local_80;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  uVar5 = DAT_14c9a52a0;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  uVar6 = uStack_e0;
  uVar7 = uStack_de;
  if ((*(char *)(param_1 + 0xac) == '\x01') && ((*(byte *)(param_1 + 0xa0) & 0xfd) == 0)) {
    local_70 = DAT_14c9a5298;
    local_68 = DAT_14c9a52a0;
    local_108 = DAT_14c9a5298;
    local_100 = DAT_14c9a52a0;
    lVar11 = (**(code **)(*(longlong *)*param_2 + 8))();
    uVar3 = *(undefined4 *)(lVar11 + 0x24);
    lVar11 = (**(code **)(*(longlong *)*param_2 + 8))();
    uVar21 = *(uint *)(lVar11 + 0x28);
    lVar11 = (**(code **)(*(longlong *)*param_2 + 8))();
    uVar7 = uStack_de;
    uVar6 = uStack_e0;
    uStack_e0 = (undefined2)DAT_14ca83a58;
    uStack_de = (undefined2)((uint)DAT_14ca83a58 >> 0x10);
    local_c4._0_4_ = uVar3;
    local_c4._4_4_ = uVar21;
    if (*(char *)(param_1 + 0xa0) == '\x02') {
      local_178 = (longlong *)(param_1 + 0x48);
      local_cc = (ulonglong)(-1 << ((byte)DAT_14c760da4 & 0x1f) ^ 0xffffffff);
      local_bc = 1;
      local_b6 = 0;
      uStack_dc = DAT_14ca83a5c;
      local_d8 = CONCAT44(DAT_14ca83a64,DAT_14ca83a60);
      local_d0 = DAT_14ca83a68;
      local_b4 = 0xff00;
      _local_ba = 0x1010001;
      local_e8[0] = '\b';
      local_e8[1] = 0;
      local_e8[2] = 2;
      local_e8[3] = 0;
      local_e8[4] = 0;
      local_e8[5] = 0;
      uStack_e2 = 0;
      local_188 = L"RealFrame";
      local_160 = (ulonglong)uVar21;
      local_b5 = *(undefined1 *)(lVar11 + 0x33);
      FUN_14490a8c0(&DAT_14ca9a3e8,&DAT_14ca85100,local_e8);
      local_d8 = *param_2;
      local_e8[0] = -1;
      local_e8[1] = 0xff;
      local_e8[2] = 0xff;
      local_e8[3] = 0xff;
      local_e8[4] = 0xff;
      local_e8[5] = 0xff;
      uStack_e2 = 0xffff;
      uStack_e0 = 0xffff;
      uStack_de = 0xffff;
      local_d0 = CONCAT31(local_d0._1_3_,1);
      local_cc = 0x8000000000;
      local_c4 = (ulonglong)local_c4._4_4_ << 0x20;
      local_ba = (uint3)(ushort)local_ba;
      local_a0 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 8);
      local_b0 = 0xffffffffffffffff;
      local_a8 = 0xffffffff;
      local_98 = 1;
      local_94 = 0x200000000000;
      local_8c = 0;
      local_80 = 0;
      local_130 = 2;
      local_138 = local_e8;
      FUN_144760590(&DAT_14ca85100,&local_138,0);
      uVar13 = local_160;
      lVar11 = 0x68;
      do {
        if (local_e8[lVar11] == '\x01') {
          local_e8[lVar11] = '\0';
        }
        lVar11 = lVar11 + -0x38;
      } while (lVar11 != -8);
      uVar4 = *(undefined8 *)(*local_178 + 8);
      lVar11 = *param_2;
      puVar12 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar18 = puVar12 + 0xc;
      if (DAT_14ca85108 < puVar18) {
        FUN_140023dd8(&DAT_14ca85100,0x68);
        puVar12 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
        puVar18 = puVar12 + 0xc;
      }
      DAT_14ca85160 = DAT_14ca85160 + 1;
      DAT_14ca85100 = puVar18;
      *DAT_14ca85130 = puVar12;
      DAT_14ca85130 = puVar12 + 1;
      puVar12[1] = 0;
      *puVar12 = &PTR_LAB_14a289d68;
      *(undefined4 *)(puVar12 + 2) = uVar3;
      *(int *)((longlong)puVar12 + 0x14) = (int)uVar13;
      *(undefined4 *)(puVar12 + 3) = uVar5;
      *(undefined8 *)((longlong)puVar12 + 0x1c) = local_70;
      *(undefined4 *)((longlong)puVar12 + 0x24) = local_68;
      puVar12[5] = local_108;
      *(undefined4 *)(puVar12 + 6) = local_100;
      *(undefined8 *)((longlong)puVar12 + 0x34) = 0;
      *(undefined8 *)((longlong)puVar12 + 0x3c) = 1;
      *(undefined8 *)((longlong)puVar12 + 0x44) = 0x100000000;
      puVar12[10] = lVar11;
      puVar12[0xb] = uVar4;
      lVar11 = DAT_14cc28e70;
      iVar22 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (iVar22 == 0x40000002) {
        uVar13 = 0;
      }
      else {
        bVar23 = true;
        if ((DAT_14c86a9f8 == '\x01') && (iVar22 != 2)) {
          if (iVar22 == 1) {
            DVar9 = FUN_140ad26c0();
            DVar10 = GetCurrentThreadId();
            bVar23 = DVar9 == DVar10;
          }
          else {
            bVar23 = false;
          }
        }
        uVar13 = (ulonglong)(bVar23 ^ 1);
      }
      if (((*(int *)(lVar11 + uVar13 * 4) != 0) && (*(char *)(param_1 + 0xab) == '\x01')) &&
         (*(int *)(param_1 + 0xa4) == 0)) {
        local_170 = *(longlong **)(*(longlong *)(param_1 + 0x48) + 8);
        local_e8[1] = 0;
        local_e8[2] = 0;
        local_e8[3] = 0;
        local_e8[5] = 0;
        uStack_e2 = 0;
        uStack_e0 = 0;
        uStack_de = 0;
        uStack_dc = 0;
        local_e8[0] = '\x03';
        local_e8[4] = 1;
        lVar11 = (**(code **)(*local_170 + 8))();
        if (*(byte *)(lVar11 + 0x32) < 5) {
          local_e8[2] = local_e8[2] & 0x8fU |
                        (byte)(0x4030502010 >> ((*(byte *)(lVar11 + 0x32) & 7) << 3));
        }
        uVar13 = 0;
        local_e8[3] = 0;
        uStack_e2 = 0;
        uStack_e0 = 0;
        local_188 = (wchar_t *)local_e8;
        (**(code **)(*DAT_14ca83900 + 0x1c0))(DAT_14ca83900,&local_140,&DAT_14ca85100,local_170);
        FUN_1498280fc(local_e8,*(undefined8 *)
                                (&DAT_14ca8c1f0 +
                                (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2)
                                * 8));
        local_170 = (longlong *)
                    CONCAT26(uStack_e2,
                             CONCAT15(local_e8[5],
                                      CONCAT14(local_e8[4],
                                               CONCAT13(local_e8[3],
                                                        CONCAT12(local_e8[2],
                                                                 CONCAT11(local_e8[1],local_e8[0])))
                                              )));
        local_168 = CONCAT44(uStack_dc,CONCAT22(uStack_de,uStack_e0));
        local_e8[0] = -1;
        local_e8[1] = 0xff;
        local_e8[2] = 0xff;
        local_e8[3] = 0xff;
        local_e8[4] = 0xff;
        local_e8[5] = 0xff;
        uStack_e2 = 0xffff;
        uStack_e0 = 0xffff;
        uStack_de = 0xffff;
        local_d8 = local_140;
        local_d0 = CONCAT31(local_d0._1_3_,3);
        local_cc = 0x40000000000;
        local_c4 = local_c4 & 0xffffffff00000000;
        local_ba = (uint3)(ushort)local_ba;
        local_f0 = 1;
        local_f8 = local_e8;
        FUN_144760590(&DAT_14ca85100,&local_f8,0);
        lVar11 = (**(code **)(*(longlong *)*param_2 + 8))();
        uVar21 = 0;
        switch(*(undefined1 *)(lVar11 + 0x32)) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
          uVar21 = *(uint *)(lVar11 + 0x28);
        }
        lVar11 = (**(code **)(*(longlong *)*param_2 + 8))();
        switch(*(undefined1 *)(lVar11 + 0x32)) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
          uVar13 = (ulonglong)*(uint *)(lVar11 + 0x24);
        }
        local_158 = uVar13;
        if (local_170 == (longlong *)0x0) {
          lVar11 = 0;
        }
        else {
          lVar11 = *(longlong *)
                    (*(longlong *)(*(longlong *)(local_168 + 8) + 0x50) +
                    (longlong)*(int *)((longlong)local_170 + 0xd4) * 8);
          if (lVar11 == 0) {
            lVar11 = FUN_1400bafc2(*(longlong *)(local_168 + 8),
                                   (longlong)*(int *)((longlong)local_170 + 0xd4),1);
          }
        }
        lVar15 = FUN_140029432(&DAT_14ca85100,lVar11,0);
        puVar12 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
        puVar18 = puVar12 + 3;
        DAT_14ca852b8 = lVar11;
        if (DAT_14ca85108 < puVar18) {
          local_168 = lVar15;
          FUN_140023dd8(&DAT_14ca85100,0x20);
          puVar12 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
          puVar18 = puVar12 + 3;
          lVar15 = local_168;
        }
        DAT_14ca85160 = DAT_14ca85160 + 1;
        DAT_14ca85100 = puVar18;
        *DAT_14ca85130 = puVar12;
        DAT_14ca85130 = puVar12 + 1;
        puVar12[1] = 0;
        *puVar12 = &PTR_LAB_14a37d340;
        puVar12[2] = lVar15;
        local_188 = *(wchar_t **)(*(longlong *)(param_1 + 0x38) + 8);
        iVar20 = (int)local_158;
        local_180 = local_140;
        FUN_149828164(local_170,local_158 & 0xffffffff | (ulonglong)uVar21 << 0x20,
                      *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 8),
                      *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 8));
        iVar22 = uVar21 + 0xe;
        if (-1 < (int)(uVar21 + 7)) {
          iVar22 = uVar21 + 7;
        }
        iVar8 = iVar20 + 7;
        iVar20 = iVar20 + 0xe;
        if (-1 < iVar8) {
          iVar20 = iVar8;
        }
        puVar12 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
        puVar18 = puVar12 + 4;
        if (DAT_14ca85108 < puVar18) {
          FUN_140023dd8(&DAT_14ca85100,0x28);
          puVar12 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
          puVar18 = puVar12 + 4;
        }
        DAT_14ca85160 = DAT_14ca85160 + 1;
        DAT_14ca85100 = puVar18;
        *DAT_14ca85130 = puVar12;
        DAT_14ca85130 = puVar12 + 1;
        puVar12[1] = 0;
        *puVar12 = &PTR_LAB_14a1fbc30;
        *(int *)(puVar12 + 2) = iVar20 >> 3;
        *(int *)((longlong)puVar12 + 0x14) = iVar22 >> 3;
        *(undefined4 *)(puVar12 + 3) = 1;
        local_d8 = *(undefined8 *)(*local_178 + 8);
        local_e8[0] = -1;
        local_e8[1] = 0xff;
        local_e8[2] = 0xff;
        local_e8[3] = 0xff;
        local_e8[4] = 0xff;
        local_e8[5] = 0xff;
        uStack_e2 = 0xffff;
        uStack_e0 = 0xffff;
        uStack_de = 0xffff;
        local_d0 = CONCAT31(local_d0._1_3_,1);
        local_cc = 0x8000000000;
        local_c4 = local_c4 & 0xffffffff00000000;
        local_ba = (uint3)(ushort)local_ba;
        local_a0 = *param_2;
        local_b0 = 0xffffffffffffffff;
        local_a8 = 0xffffffff;
        local_98 = 1;
        local_94 = 0x200000000000;
        local_8c = 0;
        local_80 = 0;
        local_150 = local_e8;
        local_148 = 2;
        FUN_144760590(&DAT_14ca85100,&local_150,0);
        lVar11 = 0x68;
        do {
          if (local_e8[lVar11] == '\x01') {
            local_e8[lVar11] = '\0';
          }
          lVar11 = lVar11 + -0x38;
        } while (lVar11 != -8);
        lVar11 = *param_2;
        uVar4 = *(undefined8 *)(*local_178 + 8);
        puVar12 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
        puVar18 = puVar12 + 0xc;
        if (DAT_14ca85108 < puVar18) {
          FUN_140023dd8(&DAT_14ca85100,0x68);
          puVar12 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
          puVar18 = puVar12 + 0xc;
        }
        DAT_14ca85160 = DAT_14ca85160 + 1;
        DAT_14ca85100 = puVar18;
        *DAT_14ca85130 = puVar12;
        DAT_14ca85130 = puVar12 + 1;
        puVar12[1] = 0;
        *puVar12 = &PTR_LAB_14a289d68;
        *(undefined4 *)(puVar12 + 2) = uVar3;
        *(int *)((longlong)puVar12 + 0x14) = (int)local_160;
        *(undefined4 *)(puVar12 + 3) = uVar5;
        *(undefined8 *)((longlong)puVar12 + 0x1c) = local_70;
        *(undefined4 *)((longlong)puVar12 + 0x24) = local_68;
        puVar12[5] = local_108;
        *(undefined4 *)(puVar12 + 6) = local_100;
        *(undefined8 *)((longlong)puVar12 + 0x34) = 0;
        *(undefined8 *)((longlong)puVar12 + 0x3c) = 1;
        *(undefined8 *)((longlong)puVar12 + 0x44) = 0x100000000;
        puVar12[10] = uVar4;
        puVar12[0xb] = lVar11;
        if (local_140 != 0) {
          LOCK();
          puVar1 = (uint *)(local_140 + 8);
          uVar21 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar21 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(local_140 + 8);
            LOCK();
            uVar21 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar21 >> 0x1e & 1) == 0) {
              bVar2 = *(byte *)(local_140 + 0xd);
              plVar14 = (longlong *)FUN_14001cc68(0x10,8);
              plVar14[1] = local_140;
              plVar17 = DAT_14ca843c0;
              plVar16 = DAT_14ca843c8;
              if ((bVar2 & 2) == 0) {
                do {
                  *plVar14 = (longlong)plVar17;
                  LOCK();
                  bVar23 = plVar17 != DAT_14ca843c0;
                  plVar16 = plVar14;
                  if (bVar23) {
                    plVar17 = DAT_14ca843c0;
                    plVar16 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar16;
                  UNLOCK();
                } while (bVar23);
              }
              else {
                do {
                  *plVar14 = (longlong)plVar16;
                  LOCK();
                  bVar23 = plVar16 != DAT_14ca843c8;
                  plVar17 = plVar14;
                  if (bVar23) {
                    plVar16 = DAT_14ca843c8;
                    plVar17 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar17;
                  UNLOCK();
                } while (bVar23);
              }
            }
          }
        }
      }
      local_d8 = *param_2;
      local_e8[0] = -1;
      local_e8[1] = 0xff;
      local_e8[2] = 0xff;
      local_e8[3] = 0xff;
      local_e8[4] = 0xff;
      local_e8[5] = 0xff;
      uStack_e2 = 0xffff;
      uStack_e0 = 0xffff;
      uStack_de = 0xffff;
      local_d0 = CONCAT31(local_d0._1_3_,1);
      local_cc = 0x200000000;
      local_c4 = local_c4 & 0xffffffff00000000;
      local_ba = (uint3)(ushort)local_ba;
      local_f0 = 1;
      uVar19 = 0;
      local_f8 = local_e8;
      FUN_144760590(&DAT_14ca85100,&local_f8,0);
    }
    else {
      if (*(char *)(param_1 + 0xa0) != '\0') goto LAB_14465c1c3;
      local_178 = (longlong *)(param_1 + 0x50);
      local_cc = (ulonglong)(-1 << ((byte)DAT_14c760da4 & 0x1f) ^ 0xffffffff);
      local_bc = 1;
      local_b6 = 0;
      uStack_dc = DAT_14ca83a5c;
      local_d8 = CONCAT44(DAT_14ca83a64,DAT_14ca83a60);
      local_d0 = DAT_14ca83a68;
      local_b4 = 0xff00;
      _local_ba = 0x1010001;
      local_e8[0] = '\b';
      local_e8[1] = 0;
      local_e8[2] = 2;
      local_e8[3] = 0;
      local_e8[4] = 0;
      local_e8[5] = 0;
      uStack_e2 = 0;
      local_188 = L"Interpolated";
      local_b5 = *(undefined1 *)(lVar11 + 0x33);
      FUN_14490a8c0(&DAT_14ca9a3e8,&DAT_14ca85100,local_e8);
      local_d8 = *param_2;
      local_e8[0] = -1;
      local_e8[1] = 0xff;
      local_e8[2] = 0xff;
      local_e8[3] = 0xff;
      local_e8[4] = 0xff;
      local_e8[5] = 0xff;
      uStack_e2 = 0xffff;
      uStack_e0 = 0xffff;
      uStack_de = 0xffff;
      local_d0 = CONCAT31(local_d0._1_3_,1);
      local_cc = 0x8000000000;
      local_c4 = (ulonglong)local_c4._4_4_ << 0x20;
      local_ba = (uint3)(ushort)local_ba;
      local_a0 = *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 8);
      local_b0 = 0xffffffffffffffff;
      local_a8 = 0xffffffff;
      local_98 = 1;
      local_94 = 0x200000000000;
      local_8c = 0;
      local_80 = 0;
      local_110 = 2;
      local_118 = local_e8;
      FUN_144760590(&DAT_14ca85100,&local_118,0);
      lVar11 = 0x68;
      do {
        if (local_e8[lVar11] == '\x01') {
          local_e8[lVar11] = '\0';
        }
        lVar11 = lVar11 + -0x38;
      } while (lVar11 != -8);
      uVar4 = *(undefined8 *)(*local_178 + 8);
      lVar11 = *param_2;
      puVar12 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar18 = puVar12 + 0xc;
      if (DAT_14ca85108 < puVar18) {
        FUN_140023dd8(&DAT_14ca85100,0x68);
        puVar12 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
        puVar18 = puVar12 + 0xc;
      }
      DAT_14ca85160 = DAT_14ca85160 + 1;
      DAT_14ca85100 = puVar18;
      *DAT_14ca85130 = puVar12;
      DAT_14ca85130 = puVar12 + 1;
      puVar12[1] = 0;
      *puVar12 = &PTR_LAB_14a289d68;
      *(undefined4 *)(puVar12 + 2) = uVar3;
      *(uint *)((longlong)puVar12 + 0x14) = uVar21;
      *(undefined4 *)(puVar12 + 3) = uVar5;
      *(undefined8 *)((longlong)puVar12 + 0x1c) = local_70;
      *(undefined4 *)((longlong)puVar12 + 0x24) = local_68;
      puVar12[5] = local_108;
      *(undefined4 *)(puVar12 + 6) = local_100;
      *(undefined4 *)((longlong)puVar12 + 0x34) = 0;
      *(undefined4 *)(puVar12 + 7) = 0;
      *(undefined4 *)((longlong)puVar12 + 0x3c) = 1;
      *(undefined4 *)(puVar12 + 8) = 0;
      *(undefined8 *)((longlong)puVar12 + 0x44) = 0x100000000;
      puVar12[10] = lVar11;
      puVar12[0xb] = uVar4;
      local_d8 = *param_2;
      local_e8[0] = -1;
      local_e8[1] = 0xff;
      local_e8[2] = 0xff;
      local_e8[3] = 0xff;
      local_e8[4] = 0xff;
      local_e8[5] = 0xff;
      uStack_e2 = 0xffff;
      uStack_e0 = 0xffff;
      uStack_de = 0xffff;
      local_d0 = CONCAT31(local_d0._1_3_,1);
      local_cc = 0x200000000;
      local_c4 = local_c4 & 0xffffffff00000000;
      local_ba = (uint3)(ushort)local_ba;
      local_a0 = *(longlong *)(*local_178 + 8);
      local_b0 = 0xffffffffffffffff;
      local_a8 = 0xffffffff;
      local_98 = 1;
      local_94 = 0x1000000000;
      local_8c = 0;
      local_80 = 0;
      local_120 = 2;
      local_128 = local_e8;
      FUN_144760590(&DAT_14ca85100,&local_128,0);
      lVar11 = 0x68;
      do {
        if (local_e8[lVar11] == '\x01') {
          local_e8[lVar11] = '\0';
        }
        lVar11 = lVar11 + -0x38;
      } while (lVar11 != -8);
      uVar19 = 1;
    }
    *(undefined1 *)(param_1 + 0xab) = uVar19;
    uVar6 = uStack_e0;
    uVar7 = uStack_de;
  }
LAB_14465c1c3:
  uStack_de = uVar7;
  uStack_e0 = uVar6;
  lVar11 = *param_2;
  if (lVar11 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar11 + 8);
    uVar21 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar21 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar11 + 8);
      LOCK();
      uVar21 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar21 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)(lVar11 + 0xd);
        plVar14 = (longlong *)FUN_14001cc68(0x10,8);
        plVar14[1] = lVar11;
        plVar17 = DAT_14ca843c0;
        plVar16 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar14 = (longlong)plVar17;
            LOCK();
            bVar23 = plVar17 != DAT_14ca843c0;
            plVar16 = plVar14;
            if (bVar23) {
              plVar17 = DAT_14ca843c0;
              plVar16 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar16;
            UNLOCK();
          } while (bVar23);
        }
        else {
          do {
            *plVar14 = (longlong)plVar16;
            LOCK();
            bVar23 = plVar16 != DAT_14ca843c8;
            plVar17 = plVar14;
            if (bVar23) {
              plVar16 = DAT_14ca843c8;
              plVar17 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar17;
            UNLOCK();
          } while (bVar23);
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14465c82a FUN_14465c82a body=1454 status=ok
// SIG undefined FUN_14465c82a(void)

void FUN_14465c82a(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  uint *puVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined ***pppuVar14;
  longlong lVar15;
  uint *puVar16;
  ulonglong uVar17;
  undefined1 auStack_e8 [32];
  code **local_c8;
  code *local_b8;
  undefined1 local_b0 [8];
  undefined ***local_a8;
  undefined **local_98;
  longlong local_90;
  undefined2 local_80;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *(undefined1 *)(param_1 + 0xad) = 1;
  lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar5 = *(int *)(lVar15 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar5 != 2) {
      if (iVar5 != 1) goto LAB_14465c876;
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      if (DVar6 == DVar7) goto LAB_14465c87f;
      goto LAB_14465c994;
    }
  }
  else {
LAB_14465c876:
    if (iVar5 != 0x10) {
LAB_14465c994:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar5 = *(int *)(lVar15 + 0xc60), iVar5 == 2))
        goto LAB_14465c87f;
        if (iVar5 == 1) {
          DVar6 = FUN_140ad26c0();
          DVar7 = GetCurrentThreadId();
          if (DVar6 == DVar7) goto LAB_14465c87f;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar13 = (undefined8 *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x308);
        puVar11 = (uint *)*puVar13;
        if (puVar11 != (uint *)0x0) goto LAB_14465cafd;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_14465e119);
          }
          lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar10 = *(undefined4 **)(lVar15 + 0x310);
          *(undefined8 *)(lVar15 + 0x310) = 0;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar10 = 0xffffffff;
          *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar13 = puVar10;
          FUN_140217a48(puVar13);
          puVar11 = (uint *)*puVar13;
LAB_14465cafd:
          puVar9 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar16 = (uint *)(puVar9 + 0x16);
          uVar12 = puVar11[0x12];
          if (puVar16 <= puVar11 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
            LOCK();
            uVar2 = *puVar11;
            *puVar11 = *puVar11 + uVar12 + 1;
            UNLOCK();
            if ((uVar2 ^ uVar12) != 0xffffffff) break;
            puVar11 = (uint *)*puVar13;
            *puVar11 = 0xffffffff;
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
            puVar11[0x12] = 0;
            *puVar13 = puVar11;
            puVar9 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
            puVar16 = (uint *)(puVar9 + 0x16);
            uVar12 = 0;
            if (puVar16 <= puVar11 + 0x4000) {
              uVar12 = 1;
              goto LAB_14465cb7d;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_14465cb7d:
        *(uint **)(puVar11 + 0x10) = puVar16;
        puVar11[0x12] = uVar12;
        iVar5 = 0;
        FUN_1447247dc(puVar9,0);
        *puVar9 = &PTR_FUN_14beac8a0;
        puVar9[0x15] = param_1;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
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
        if (*(code **)(puVar9[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar9[0xe] + 0x18))(puVar9 + 0xe,puVar9 + 9);
        }
        puVar9[0xe] = LowLevelTasks::
                      TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                      TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                      ::vftable;
        puVar9[9] = puVar9;
        puVar9[10] = puVar9;
        lVar15 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar15 == 0) {
          uVar4 = 1;
          if ((char)uVar17 != '\x06') {
            uVar4 = uVar17;
          }
          uVar17 = uVar4;
          uVar8 = 0;
        }
        else {
          if ((char)uVar17 == '\x06') {
            uVar17 = *(ulonglong *)(lVar15 + 0x38) >> 0x3b;
          }
          uVar8 = *(undefined8 *)(lVar15 + 0x30);
        }
        puVar9[0xf] = uVar8;
        puVar9[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar9 + 0x1c) = iVar5;
        if (puVar9 == (undefined8 *)0x0) {
          local_b8 = (code *)CONCAT71(local_b8._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar9 + 1) = *(int *)(puVar9 + 1) + 1;
          UNLOCK();
          local_b8 = (code *)CONCAT71(local_b8._1_7_,1);
          FUN_1447439e4(puVar9);
          LOCK();
          piVar1 = (int *)(puVar9 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar9)(puVar9,1);
          }
        }
      }
      else {
        local_c8 = &local_b8;
        local_a8 = (undefined ***)0x0;
        local_98 = &PTR_LAB_14beac810;
        local_b8 = FUN_144660f6a;
        local_90 = param_1;
        FUN_14005a792(&DAT_14ca9a440,L"FFXFrameInterpolationCustomPresentOnBackBufferResize",
                      &DAT_14cc2cb90);
        if (local_b8 != (code *)0x0) {
          pppuVar14 = local_a8;
          if (local_a8 == (undefined ***)0x0) {
            pppuVar14 = &local_98;
          }
          (*(code *)(*pppuVar14)[2])();
        }
      }
      goto LAB_14465ca33;
    }
  }
LAB_14465c87f:
  if (DAT_14ca85164 == '\x01') {
    memset(local_b0,0,0x88);
    local_b8 = (code *)0x20002;
    plVar3 = *(longlong **)(param_1 + 0x58);
    uVar8 = (**(code **)(**(longlong **)(param_1 + 0x68) + 8))();
    local_a8 = (undefined ***)(**(code **)(*plVar3 + 0x40))(plVar3,uVar8);
    local_80 = 0;
    lVar15 = *(longlong *)(param_1 + 0x78) + 0x40;
    if (*(longlong *)(param_1 + 0x78) == 0) {
      lVar15 = 0;
    }
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x80))
              (*(longlong **)(param_1 + 0x58),lVar15,&local_b8);
  }
  else {
    puVar9 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar13 = puVar9 + 3;
    if (DAT_14ca85108 < puVar13) {
      FUN_140023dd8(&DAT_14ca85100,0x20);
      puVar9 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar13 = puVar9 + 3;
    }
    DAT_14ca85160 = DAT_14ca85160 + 1;
    DAT_14ca85100 = puVar13;
    *DAT_14ca85130 = puVar9;
    DAT_14ca85130 = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_FUN_14beac800;
    puVar9[2] = param_1;
  }
LAB_14465ca33:
  FUN_14080c2b4();
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14465ce20 FUN_14465ce20 body=46 status=ok
// SIG undefined FUN_14465ce20(void)

void FUN_14465ce20(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x160,0x10);
  FUN_145df439a(uVar1);
  *(undefined8 *)(param_1 + 8) = uVar1;
  return;
}



// FUNCTION 14465ce68 FUN_14465ce68 body=362 status=ok
// SIG undefined FUN_14465ce68(void)

longlong * FUN_14465ce68(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar5;
  bool bVar6;
  ulonglong uVar4;
  
  uVar3 = (int)param_1[0x80] + (((int)param_1[0x80] + 1U) / 6) * -6 + 1;
  uVar4 = (ulonglong)uVar3;
  *(uint *)(param_1 + 0x80) = uVar3;
  LOCK();
  bVar6 = (char)param_1[uVar4 * 0xd + 0x2f] == '\0';
  if (bVar6) {
    *(char *)(param_1 + uVar4 * 0xd + 0x2f) = '\x01';
  }
  UNLOCK();
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  while (!bVar6) {
    iVar2 = *piVar1;
    if ((iVar2 == 8) || (iVar2 == 4)) {
      FUN_14000f986(0x3a83126f);
      uVar3 = *(uint *)(param_1 + 0x80);
    }
    else {
      (**(code **)(*param_1 + 0xc0))(param_1);
      uVar3 = (int)param_1[0x80] + (((int)param_1[0x80] + 1U) / 6) * -6 + 1;
      *(uint *)(param_1 + 0x80) = uVar3;
    }
    uVar4 = (ulonglong)uVar3;
    LOCK();
    bVar6 = (char)param_1[uVar4 * 0xd + 0x2f] == '\0';
    if (bVar6) {
      *(char *)(param_1 + uVar4 * 0xd + 0x2f) = '\x01';
    }
    UNLOCK();
  }
  plVar5 = param_1 + uVar4 * 0xd + 0x24;
  *(bool *)((longlong)plVar5 + 0x59) = *piVar1 == 4;
  uVar4 = (ulonglong)*(uint *)(param_1 + 0x80);
  FUN_141412c32(param_1[uVar4 * 2 + 0x72],(int)param_1[uVar4 * 2 + 0x73]);
  *(undefined4 *)(param_1 + uVar4 * 2 + 0x73) = 0;
  if (*(int *)((longlong)param_1 + uVar4 * 0x10 + 0x39c) != 0) {
    FUN_1475143b4(param_1 + uVar4 * 2 + 0x72,0);
  }
  FUN_1400559ea(plVar5);
  FUN_1415a9fae(plVar5,*(undefined4 *)((longlong)param_1 + 0x404));
  return plVar5;
}



// FUNCTION 14465cfd2 FUN_14465cfd2 body=1190 status=ok
// SIG undefined FUN_14465cfd2(void)

void FUN_14465cfd2(undefined8 param_1,undefined8 param_2)

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
  undefined8 local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 == 2) goto LAB_14465d015;
    if (iVar6 != 1) goto LAB_14465d010;
    DVar7 = FUN_140ad26c0();
    DVar8 = GetCurrentThreadId();
    if (DVar7 == DVar8) goto LAB_14465d015;
  }
  else {
LAB_14465d010:
    if (iVar6 == 0x10) goto LAB_14465d015;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2)) {
LAB_14465d015:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
    }
    if (iVar6 == 1) {
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_14465d015;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar10 = (uint *)*puVar2;
    if (puVar10 != (uint *)0x0) goto LAB_14465d1b2;
    while( true ) {
      uVar12 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar12 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar12 | 1;
        __tlregdtor(&LAB_14465e119);
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
LAB_14465d1b2:
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
          goto LAB_14465d232;
        }
      }
    }
    uVar12 = uVar12 + 1;
LAB_14465d232:
    *(uint **)(puVar10 + 0x10) = puVar14;
    puVar10[0x12] = uVar12;
    iVar6 = 0;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14beacb50;
    puVar16[0x15] = param_2;
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
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
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
    local_48 = &PTR_LAB_14beacb30;
    local_68[0] = &LAB_144661620;
    local_40 = param_2;
    FUN_14005a792(&DAT_14ca9a440,L"SlateReleaseDrawBufferCommand",&DAT_14cc2cb94);
    if (local_68[0] != (undefined1 *)0x0) {
      pppuVar13 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar13 = &local_48;
      }
      (*(code *)(*pppuVar13)[2])();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14465d4a0 FUN_14465d4a0 body=45 status=ok
// SIG undefined FUN_14465d4a0(void)

undefined8 FUN_14465d4a0(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x3f0) + 0x88))();
  return param_2;
}



// FUNCTION 14465d4e0 FUN_14465d4e0 body=46 status=ok
// SIG undefined FUN_14465d4e0(void)

void FUN_14465d4e0(longlong param_1,char param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x3f0) + 0x100))();
  if (param_2 != '\0') {
    *(int *)(param_1 + 0x404) = *(int *)(param_1 + 0x404) + 1;
  }
  return;
}



// FUNCTION 14465d61c FUN_14465d61c body=246 status=ok
// SIG undefined FUN_14465d61c(void)

longlong * FUN_14465d61c(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145eee1c0();
  local_30 = 1;
  local_38 = 0;
  (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_28,param_2,DAT_14cc2bcd0);
  *param_1 = local_28;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
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
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = local_28;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar7 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar4;
              if (bVar7) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar7);
          }
          else {
            do {
              *plVar4 = (longlong)plVar5;
              LOCK();
              bVar7 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar4;
              if (bVar7) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar7);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14465d714 FUN_14465d714 body=246 status=ok
// SIG undefined FUN_14465d714(void)

longlong * FUN_14465d714(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145e0a182();
  local_30 = 1;
  local_38 = 0;
  (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_28,param_2,DAT_14cc2bd68);
  *param_1 = local_28;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
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
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = local_28;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar7 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar4;
              if (bVar7) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar7);
          }
          else {
            do {
              *plVar4 = (longlong)plVar5;
              LOCK();
              bVar7 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar4;
              if (bVar7) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar7);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14465d878 FUN_14465d878 body=246 status=ok
// SIG undefined FUN_14465d878(void)

longlong * FUN_14465d878(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145e0a8bc();
  local_30 = 1;
  local_38 = 0;
  (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_28,param_2,DAT_14cc2c618);
  *param_1 = local_28;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
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
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = local_28;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar7 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar4;
              if (bVar7) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar7);
          }
          else {
            do {
              *plVar4 = (longlong)plVar5;
              LOCK();
              bVar7 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar4;
              if (bVar7) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar7);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14465d970 FUN_14465d970 body=246 status=ok
// SIG undefined FUN_14465d970(void)

longlong * FUN_14465d970(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145e0a522();
  local_30 = 1;
  local_38 = 0;
  (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_28,param_2,DAT_14cc2c6b0);
  *param_1 = local_28;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
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
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = local_28;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar7 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar4;
              if (bVar7) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar7);
          }
          else {
            do {
              *plVar4 = (longlong)plVar5;
              LOCK();
              bVar7 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar4;
              if (bVar7) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar7);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14465daa2 FUN_14465daa2 body=29 status=ok
// SIG undefined FUN_14465daa2(void)

undefined8 FUN_14465daa2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14465dad4 FUN_14465dad4 body=93 status=ok
// SIG undefined FUN_14465dad4(void)

void FUN_14465dad4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beac540;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14465db32 FUN_14465db32 body=93 status=ok
// SIG undefined FUN_14465db32(void)

void FUN_14465db32(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beac540;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14465db90 FUN_14465db90 body=126 status=ok
// SIG undefined FUN_14465db90(void)

void FUN_14465db90(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14beac540;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014465dbff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14465dc18 FUN_14465dc18 body=20 status=ok
// SIG undefined FUN_14465dc18(void)

undefined1 FUN_14465dc18(longlong param_1)

{
  FUN_14465dc2c(param_1 + 0x18);
  return 1;
}



// FUNCTION 14465dc2c FUN_14465dc2c body=1183 status=ok
// SIG undefined FUN_14465dc2c(void)

void FUN_14465dc2c(undefined8 *param_1)

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
  undefined8 local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar11 = *param_1;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 == 2) goto LAB_14465dc6f;
    if (iVar6 != 1) goto LAB_14465dc6a;
    DVar7 = FUN_140ad26c0();
    DVar8 = GetCurrentThreadId();
    if (DVar7 == DVar8) goto LAB_14465dc6f;
  }
  else {
LAB_14465dc6a:
    if (iVar6 == 0x10) goto LAB_14465dc6f;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2)) {
LAB_14465dc6f:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
    }
    if (iVar6 == 1) {
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_14465dc6f;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar10 = (uint *)*puVar2;
    if (puVar10 != (uint *)0x0) goto LAB_14465de02;
    while( true ) {
      uVar12 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar12 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar12 | 1;
        __tlregdtor(&LAB_14465e119);
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
LAB_14465de02:
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
          goto LAB_14465de82;
        }
      }
    }
    uVar12 = uVar12 + 1;
LAB_14465de82:
    *(uint **)(puVar10 + 0x10) = puVar14;
    puVar10[0x12] = uVar12;
    iVar6 = 0;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14beac5f0;
    puVar16[0x15] = uVar11;
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
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
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
    local_48 = &PTR_LAB_14beac5b0;
    local_68[0] = &LAB_14465e0de;
    local_40 = uVar11;
    FUN_14005a792(&DAT_14ca9a440,L"BeginFrameRT",&DAT_14cc2cac0);
    if (local_68[0] != (undefined1 *)0x0) {
      pppuVar13 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar13 = &local_48;
      }
      (*(code *)(*pppuVar13)[2])();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14465e0f0 FUN_14465e0f0 body=12 status=ok
// SIG undefined FUN_14465e0f0(void)

void FUN_14465e0f0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014465e0f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14465e0fc FUN_14465e0fc body=29 status=ok
// SIG undefined FUN_14465e0fc(void)

undefined8 FUN_14465e0fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14465e140 FUN_14465e140 body=282 status=ok
// SIG undefined FUN_14465e140(void)

undefined8 * FUN_14465e140(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14465e119);
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



// FUNCTION 14465e25a FUN_14465e25a body=94 status=ok
// SIG undefined FUN_14465e25a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14465e25a(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14465b8b0(_DAT_000000a8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14465b8b0(param_1[0x15]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014465e296. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14465e2b8 FUN_14465e2b8 body=481 status=ok
// SIG undefined FUN_14465e2b8(void)

void FUN_14465e2b8(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_14982f46e(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14465e49a FUN_14465e49a body=232 status=ok
// SIG undefined FUN_14465e49a(void)

void FUN_14465e49a(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 14465e582 FUN_14465e582 body=81 status=ok
// SIG undefined FUN_14465e582(void)

void FUN_14465e582(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_14982f511(param_1,param_2,lVar1);
  return;
}



// FUNCTION 14465e5d4 FUN_14465e5d4 body=481 status=ok
// SIG undefined FUN_14465e5d4(void)

void FUN_14465e5d4(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_14982f84e(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14465e7b6 FUN_14465e7b6 body=232 status=ok
// SIG undefined FUN_14465e7b6(void)

void FUN_14465e7b6(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 14465e89e FUN_14465e89e body=81 status=ok
// SIG undefined FUN_14465e89e(void)

void FUN_14465e89e(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_14982f8f1(param_1,param_2,lVar1);
  return;
}



// FUNCTION 14465e8f0 FUN_14465e8f0 body=174 status=ok
// SIG undefined FUN_14465e8f0(void)

undefined8 * FUN_14465e8f0(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14beac660;
  lVar4 = param_1[0x39];
  if (lVar4 != 0) {
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
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14465e99e FUN_14465e99e body=1105 status=ok
// SIG undefined FUN_14465e99e(void)

void FUN_14465e99e(longlong param_1,ulonglong *param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 *_Src;
  undefined8 *puVar10;
  bool bVar11;
  undefined1 auStack_148 [32];
  undefined1 *local_128;
  undefined8 local_120;
  undefined1 local_118 [48];
  longlong local_e8;
  longlong *local_e0;
  int local_d8 [2];
  undefined1 local_d0 [64];
  undefined1 *local_90;
  int local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_144b1c6fa(param_1 + 0x10,&local_e8);
  puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar10 + 0x11;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x90);
    puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar10 + 0x11;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar10;
  param_2[6] = (ulonglong)(puVar10 + 1);
  puVar10[1] = 0;
  *puVar10 = &PTR_FUN_14a1fb978;
  puVar10[3] = 0;
  *(int *)(puVar10 + 4) = local_d8[0];
  if ((longlong)local_d8[0] == 0) {
    *(undefined4 *)((longlong)puVar10 + 0x24) = 8;
  }
  else {
    plVar9 = &local_e8;
    if (local_e0 != (longlong *)0x0) {
      plVar9 = local_e0;
    }
    FUN_1446fe144(puVar10 + 2,local_d8[0],0);
    puVar7 = (undefined8 *)puVar10[3];
    if ((undefined8 *)puVar10[3] == (undefined8 *)0x0) {
      puVar7 = puVar10 + 2;
    }
    memcpy(puVar7,plVar9,(longlong)local_d8[0]);
  }
  puVar10[0xd] = 0;
  *(int *)(puVar10 + 0xe) = local_88;
  if ((longlong)local_88 == 0) {
    *(undefined4 *)((longlong)puVar10 + 0x74) = 8;
  }
  else {
    _Src = local_90;
    if (local_90 == (undefined1 *)0x0) {
      _Src = local_d0;
    }
    FUN_1446fe1b8(puVar10 + 5,local_88,0);
    puVar7 = (undefined8 *)puVar10[0xd];
    if ((undefined8 *)puVar10[0xd] == (undefined8 *)0x0) {
      puVar7 = puVar10 + 5;
    }
    memcpy(puVar7,_Src,(longlong)local_88 << 3);
  }
  *(undefined4 *)(puVar10 + 0xf) = local_80;
  *(undefined4 *)((longlong)puVar10 + 0x7c) = uStack_7c;
  *(undefined4 *)(puVar10 + 0x10) = uStack_78;
  *(undefined4 *)((longlong)puVar10 + 0x84) = uStack_74;
  if (local_90 != (undefined1 *)0x0) {
    FUN_1400020a8(local_90);
  }
  if (local_e0 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x1c0) + 0x60) + 0x10);
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 0x68);
  if (lVar5 != lVar4) {
    *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 0x68) = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    if (lVar5 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar5 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar5 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar5 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar5;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar6;
              if (bVar11) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x1b8);
  *(undefined1 *)(lVar4 + 0xaf) = 1;
  bVar11 = *(int *)(lVar4 + 0xa4) == 1;
  *(bool *)(lVar4 + 0xa9) = bVar11;
  *(char *)(lVar4 + 0xa0) = bVar11 * '\x02';
  local_e8 = *(longlong *)(param_1 + 0x1b8);
  local_e0 = *(longlong **)(param_1 + 0x1c8);
  if (local_e0 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_e0 + 8) = *(int *)((longlong)local_e0 + 8) + 1;
    UNLOCK();
  }
  memcpy(local_d8,(void *)(param_1 + 0x1d0),0x90);
  if (*(char *)((longlong)param_2 + 100) == '\x01') {
    if (*(longlong *)((longlong)local_e0 + 0x68) == 0) {
      (**(code **)(**(longlong **)(local_e8 + 0x58) + 0x80))
                (*(longlong **)(local_e8 + 0x58),(longlong)local_e0 + 0x40,local_d8);
    }
    else {
      local_120 = 0;
      local_128 = &DAT_00020008;
      (**(code **)(**(longlong **)(local_e8 + 0x58) + 0x50))
                (*(longlong **)(local_e8 + 0x58),local_118,*(longlong *)((longlong)local_e0 + 0x68),
                 2);
      (**(code **)(**(longlong **)(local_e8 + 0x58) + 0x78))
                (*(longlong **)(local_e8 + 0x58),(longlong)local_e0 + 0x40,local_d8,&local_128);
    }
    plVar9 = local_e0;
    *(undefined1 *)(local_e8 + 0xb0) = 1;
    *(bool *)(local_e8 + 0xaa) = *(int *)(local_e8 + 0xa4) == 1;
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      puVar1 = (uint *)((longlong)local_e0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)((longlong)local_e0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)((longlong)local_e0 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = (longlong)plVar9;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar6;
              if (bVar11) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
  }
  else {
    puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar10 + 0x16;
    if ((undefined8 *)param_2[1] < puVar7) {
      FUN_140023dd8(param_2,0xb8);
      puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar7 = puVar10 + 0x16;
    }
    *param_2 = (ulonglong)puVar7;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar10;
    param_2[6] = (ulonglong)(puVar10 + 1);
    puVar10[1] = 0;
    *puVar10 = &PTR_FUN_14beac678;
    puVar10[2] = local_e8;
    puVar10[3] = local_e0;
    memcpy(puVar10 + 4,local_d8,0x90);
  }
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14465edf0 FUN_14465edf0 body=304 status=ok
// SIG undefined FUN_14465edf0(void)

void FUN_14465edf0(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x68) == 0) {
    plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x58);
    (**(code **)(*plVar7 + 0x80))(plVar7,*(longlong *)(param_1 + 0x18) + 0x40,param_1 + 0x20);
  }
  else {
    local_50 = 0;
    local_58 = &DAT_00020008;
    (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x10) + 0x58) + 0x50))();
    plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x58);
    (**(code **)(*plVar7 + 0x78))
              (plVar7,*(longlong *)(param_1 + 0x18) + 0x40,param_1 + 0x20,&local_58);
  }
  lVar4 = *(longlong *)(param_1 + 0x10);
  *(undefined1 *)(lVar4 + 0xb0) = 1;
  *(bool *)(lVar4 + 0xaa) = *(int *)(lVar4 + 0xa4) == 1;
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 != 0) {
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
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14465ef2e FUN_14465ef2e body=300 status=ok
// SIG undefined FUN_14465ef2e(void)

undefined8 * FUN_14465ef2e(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14beac6e0;
  lVar4 = param_1[0x6d];
  if (lVar4 != 0) {
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
  lVar4 = param_1[0x6b];
  if (lVar4 != 0) {
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
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14465f05a FUN_14465f05a body=3181 status=ok
// SIG undefined FUN_14465f05a(void)

void FUN_14465f05a(longlong param_1,ulonglong *param_2)

{
  uint *puVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined4 uVar12;
  size_t _Size;
  longlong lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  uint uVar18;
  bool bVar19;
  undefined1 auStack_3f8 [39];
  undefined1 local_3d1;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  ulonglong *local_3b0;
  longlong local_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined4 local_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 local_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined1 local_370 [88];
  undefined1 local_318 [48];
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  int local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_260;
  undefined4 uStack_258;
  undefined4 uStack_254;
  int iStack_250;
  undefined4 uStack_24c;
  undefined8 uStack_248;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined8 local_22c;
  undefined8 *local_208;
  int local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  uint local_138;
  undefined8 uStack_134;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0 [2];
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined8 uStack_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  FUN_144b1c6fa(param_1 + 0x10,&local_260);
  puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar16 + 0x11;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x90);
    puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar16 + 0x11;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar16;
  param_2[6] = (ulonglong)(puVar16 + 1);
  puVar16[1] = 0;
  *puVar16 = &PTR_FUN_14a1fb978;
  puVar16[3] = 0;
  _Size = (size_t)iStack_250;
  *(int *)(puVar16 + 4) = iStack_250;
  if (_Size == 0) {
    *(undefined4 *)((longlong)puVar16 + 0x24) = 8;
  }
  else {
    puVar7 = &local_260;
    if ((undefined8 *)CONCAT44(uStack_254,uStack_258) != (undefined8 *)0x0) {
      puVar7 = (undefined8 *)CONCAT44(uStack_254,uStack_258);
    }
    FUN_1446fe144(puVar16 + 2,iStack_250,0);
    puVar10 = (undefined8 *)puVar16[3];
    if ((undefined8 *)puVar16[3] == (undefined8 *)0x0) {
      puVar10 = puVar16 + 2;
    }
    memcpy(puVar10,puVar7,_Size);
  }
  puVar16[0xd] = 0;
  *(int *)(puVar16 + 0xe) = local_200;
  if ((longlong)local_200 == 0) {
    *(undefined4 *)((longlong)puVar16 + 0x74) = 8;
  }
  else {
    puVar7 = local_208;
    if (local_208 == (undefined8 *)0x0) {
      puVar7 = &uStack_248;
    }
    FUN_1446fe1b8(puVar16 + 5,local_200,0);
    puVar10 = (undefined8 *)puVar16[0xd];
    if ((undefined8 *)puVar16[0xd] == (undefined8 *)0x0) {
      puVar10 = puVar16 + 5;
    }
    memcpy(puVar10,puVar7,(longlong)local_200 << 3);
  }
  *(undefined4 *)(puVar16 + 0xf) = local_1f8;
  *(undefined4 *)((longlong)puVar16 + 0x7c) = uStack_1f4;
  *(undefined4 *)(puVar16 + 0x10) = uStack_1f0;
  *(undefined4 *)((longlong)puVar16 + 0x84) = uStack_1ec;
  if (local_208 != (undefined8 *)0x0) {
    FUN_1400020a8(local_208);
  }
  if (CONCAT44(uStack_254,uStack_258) != 0) {
    FUN_1400020a8();
  }
  lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x370) + 0x60);
  if (lVar11 == 0) {
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x368) + 0x68);
    if (lVar11 == 0) goto LAB_14465f298;
    *(undefined8 *)(*(longlong *)(param_1 + 0x368) + 0x68) = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar11 + 0x10);
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x368) + 0x68);
    if (lVar11 == lVar3) goto LAB_14465f298;
    *(longlong *)(*(longlong *)(param_1 + 0x368) + 0x68) = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    if (lVar11 == 0) goto LAB_14465f298;
  }
  LOCK();
  puVar1 = (uint *)(lVar11 + 8);
  uVar18 = *puVar1;
  *puVar1 = *puVar1 - 1;
  UNLOCK();
  if ((uVar18 & 0x3fffffff) == 1) {
    LOCK();
    puVar1 = (uint *)(lVar11 + 8);
    uVar18 = *puVar1;
    *puVar1 = *puVar1 | 0x40000000;
    UNLOCK();
    if ((uVar18 >> 0x1e & 1) == 0) {
      bVar2 = *(byte *)(lVar11 + 0xd);
      plVar6 = (longlong *)FUN_14001cc68(0x10,8);
      plVar6[1] = lVar11;
      plVar9 = DAT_14ca843c0;
      plVar8 = DAT_14ca843c8;
      if ((bVar2 & 2) == 0) {
        do {
          *plVar6 = (longlong)plVar9;
          LOCK();
          bVar19 = plVar9 != DAT_14ca843c0;
          plVar8 = plVar6;
          if (bVar19) {
            plVar9 = DAT_14ca843c0;
            plVar8 = DAT_14ca843c0;
          }
          DAT_14ca843c0 = plVar8;
          UNLOCK();
        } while (bVar19);
      }
      else {
        do {
          *plVar6 = (longlong)plVar8;
          LOCK();
          bVar19 = plVar8 != DAT_14ca843c8;
          plVar9 = plVar6;
          if (bVar19) {
            plVar8 = DAT_14ca843c8;
            plVar9 = DAT_14ca843c8;
          }
          DAT_14ca843c8 = plVar9;
          UNLOCK();
        } while (bVar19);
      }
    }
  }
LAB_14465f298:
  puVar7 = *(undefined8 **)(param_1 + 0x370);
  lVar11 = puVar7[0x12];
  lVar3 = puVar7[0x15];
  local_3d1 = lVar3 == lVar11;
  local_278 = *(undefined8 *)(param_1 + 0x278);
  uStack_270 = *(undefined8 *)(param_1 + 0x280);
  local_3c8 = *(undefined8 *)(param_1 + 0x288);
  local_3c0 = *(undefined8 *)(param_1 + 0x290);
  local_3b8 = *(undefined8 *)(param_1 + 0x298);
  uVar4 = *(undefined8 *)(param_1 + 0x2a0);
  uVar17 = *(undefined8 *)(param_1 + 0x2a8);
  local_288 = *(undefined8 *)(param_1 + 0x2e0);
  local_298 = *(undefined8 *)(param_1 + 0x2d0);
  uStack_290 = *(undefined8 *)(param_1 + 0x2d8);
  local_2a8 = *(undefined8 *)(param_1 + 0x2c0);
  uStack_2a0 = *(undefined8 *)(param_1 + 0x2c8);
  local_2b8 = *(undefined8 *)(param_1 + 0x2b0);
  uStack_2b0 = *(undefined8 *)(param_1 + 0x2b8);
  uVar18 = *(uint *)(param_1 + 0x2e8);
  uStack_54 = *(undefined8 *)(param_1 + 0x300);
  uStack_58 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x2f8) >> 0x20);
  uStack_68 = *(undefined4 *)(param_1 + 0x2ec);
  uStack_64 = *(undefined4 *)(param_1 + 0x2f0);
  uStack_60 = *(undefined4 *)(param_1 + 0x2f4);
  local_5c = *(undefined4 *)(param_1 + 0x2f8);
  lVar13 = *(longlong *)(param_1 + 0x360);
  if (*(int *)(lVar13 + 0xa4) == 1) {
    (**(code **)(**(longlong **)(lVar13 + 0x58) + 0x48))
              (*(longlong **)(lVar13 + 0x58),&uStack_2b0,*puVar7,0x20);
    plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x360) + 0x58);
    uVar15 = 0x80;
    if (lVar3 != lVar11) {
      uVar15 = 0x20;
    }
    lVar13 = 0x78;
    if (lVar3 == lVar11) {
      lVar13 = 0x18;
    }
    uVar14 = *(undefined8 *)(*(longlong *)(param_1 + 0x370) + lVar13);
    lVar13 = *plVar9;
  }
  else {
    plVar9 = *(longlong **)(lVar13 + 0x58);
    uVar14 = *puVar7;
    lVar13 = *plVar9;
    uVar15 = 0x20;
  }
  (**(code **)(lVar13 + 0x48))(plVar9,&local_260,uVar14,uVar15);
  lVar13 = *(longlong *)(param_1 + 0x378);
  *(ulonglong *)(lVar13 + 0x38) = CONCAT44(uStack_23c,local_240);
  *(ulonglong *)(lVar13 + 0x40) = CONCAT44(uStack_234,uStack_238);
  *(ulonglong *)(lVar13 + 0x28) = CONCAT44(uStack_24c,iStack_250);
  *(undefined8 *)(lVar13 + 0x30) = uStack_248;
  *(undefined8 *)(lVar13 + 0x18) = local_260;
  *(ulonglong *)(lVar13 + 0x20) = CONCAT44(uStack_254,uStack_258);
  local_3d0 = uVar4;
  if (*(int *)(param_1 + 0x1b8) != 0) {
    uVar18 = uVar18 | 8;
    uVar17 = 0;
    local_3d0 = 0;
    local_3b8 = 0;
    local_3c0 = 0;
    local_3c8 = 0;
  }
  local_3b0 = param_2;
  memcpy(local_370,(void *)(param_1 + 0x1c0),0xb8);
  plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x360) + 0x58);
  (**(code **)(*plVar9 + 0x48))
            (plVar9,local_318,*(undefined8 *)(*(longlong *)(param_1 + 0x370) + 0x30),4);
  plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x360) + 0x58);
  (**(code **)(*plVar9 + 0x48))
            (plVar9,&local_260,*(undefined8 *)(*(longlong *)(param_1 + 0x370) + 0x48),2);
  local_2c8 = local_240;
  uStack_2c4 = uStack_23c;
  uStack_2c0 = uStack_238;
  uStack_2bc = uStack_234;
  local_2d8 = iStack_250;
  uStack_2d4 = uStack_24c;
  uStack_2d0 = (undefined4)uStack_248;
  uStack_2cc = uStack_248._4_4_;
  local_2e8 = (undefined4)local_260;
  uStack_2e4 = local_260._4_4_;
  uStack_2e0 = uStack_258;
  uStack_2dc = uStack_254;
  plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x360) + 0x58);
  uVar12 = 2;
  if ((lVar3 == lVar11) && (*(int *)(*(longlong *)(param_1 + 0x360) + 0xa4) != 1)) {
    uVar12 = 0x10;
    if (*(int *)(param_1 + 0x1b8) == 0) {
      uVar12 = 2;
    }
  }
  (**(code **)(*plVar9 + 0x48))
            (plVar9,&local_3a0,*(undefined8 *)(*(longlong *)(param_1 + 0x370) + 0x90),uVar12);
  lVar11 = *(longlong *)(param_1 + 0x360);
  *(undefined1 *)(lVar11 + 0xaf) = 1;
  bVar19 = *(int *)(lVar11 + 0xa4) == 1;
  *(bool *)(lVar11 + 0xa9) = bVar19;
  *(char *)(lVar11 + 0xa0) = bVar19 * '\x02';
  memcpy(&local_260,local_370,0xb8);
  puVar5 = local_3b0;
  local_1a8 = local_278;
  uStack_1a0 = uStack_270;
  local_198 = local_3c8;
  local_190 = local_3c0;
  local_188 = local_3b8;
  local_180 = local_3d0;
  local_170 = local_2b8;
  uStack_168 = uStack_2b0;
  local_160 = local_2a8;
  uStack_158 = uStack_2a0;
  local_150 = local_298;
  uStack_148 = uStack_290;
  local_140 = local_288;
  uStack_124 = uStack_58;
  uStack_120 = uStack_54;
  uStack_134 = CONCAT44(uStack_64,uStack_68);
  uStack_12c = uStack_60;
  local_128 = local_5c;
  local_118 = *(undefined8 *)(param_1 + 0x308);
  uStack_110 = *(undefined8 *)(param_1 + 0x310);
  local_108 = *(undefined8 *)(param_1 + 0x318);
  uStack_100 = *(undefined8 *)(param_1 + 800);
  local_f8 = *(undefined8 *)(param_1 + 0x328);
  uStack_f0 = *(undefined8 *)(param_1 + 0x330);
  local_e8 = *(undefined4 *)(param_1 + 0x338);
  uStack_e4 = *(undefined4 *)(param_1 + 0x33c);
  uStack_e0 = *(undefined4 *)(param_1 + 0x340);
  uStack_dc = *(undefined4 *)(param_1 + 0x344);
  local_d8 = *(longlong *)(param_1 + 0x358);
  if (local_d8 != 0) {
    LOCK();
    *(int *)(local_d8 + 8) = *(int *)(local_d8 + 8) + 1;
    UNLOCK();
  }
  local_d0 = *(undefined8 *)(param_1 + 0x360);
  local_c8 = *(longlong *)(param_1 + 0x368);
  if (local_c8 != 0) {
    LOCK();
    *(int *)(local_c8 + 8) = *(int *)(local_c8 + 8) + 1;
    UNLOCK();
  }
  local_a0 = local_380;
  uStack_9c = uStack_37c;
  uStack_98 = uStack_378;
  uStack_94 = uStack_374;
  local_b0 = local_390;
  uStack_ac = uStack_38c;
  uStack_a8 = uStack_388;
  uStack_a4 = uStack_384;
  local_c0[0] = local_3a0;
  local_c0[1] = uStack_398;
  local_90 = *(undefined8 *)(param_1 + 0x378);
  local_88 = *(undefined8 *)(param_1 + 0x348);
  local_80 = *(undefined8 *)(param_1 + 0x350);
  local_78 = local_3d1;
  local_74 = *(undefined4 *)(param_1 + 0x390);
  local_70 = *(undefined4 *)(param_1 + 0x394);
  local_6c = *(undefined4 *)(param_1 + 0x398);
  local_178 = uVar17;
  local_138 = uVar18;
  if (*(char *)((longlong)local_3b0 + 100) == '\0') {
    puVar16 = (undefined8 *)(*local_3b0 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar16 + 0x41;
    if ((undefined8 *)local_3b0[1] < puVar7) {
      FUN_140023dd8(local_3b0,0x210);
      puVar16 = (undefined8 *)(*puVar5 + 7 & 0xfffffffffffffff8);
      puVar7 = puVar16 + 0x41;
    }
    *puVar5 = (ulonglong)puVar7;
    *(int *)(puVar5 + 0xc) = (int)puVar5[0xc] + 1;
    *(undefined8 **)puVar5[6] = puVar16;
    puVar5[6] = (ulonglong)(puVar16 + 1);
    puVar16[1] = 0;
    *puVar16 = &PTR_FUN_14beac6f8;
    memcpy(puVar16 + 2,&local_260,0x188);
    puVar16[0x33] = local_d8;
    local_d8 = 0;
    puVar16[0x34] = local_d0;
    puVar16[0x35] = local_c8;
    local_c8 = 0;
    puVar7 = local_c0;
    puVar16 = puVar16 + 0x36;
    for (lVar11 = 0xb; lVar11 != 0; lVar11 = lVar11 + -1) {
      *puVar16 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar16 = puVar16 + 1;
    }
  }
  else {
    FUN_14465fcc8(&local_260,local_3b0);
    lVar11 = local_c8;
    if (local_c8 != 0) {
      LOCK();
      puVar1 = (uint *)(local_c8 + 8);
      uVar18 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar18 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_c8 + 8);
        LOCK();
        uVar18 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar18 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(local_c8 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar11;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar9;
              LOCK();
              bVar19 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar6;
              if (bVar19) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar19);
          }
          else {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar19 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar6;
              if (bVar19) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar19);
          }
        }
      }
    }
  }
  lVar11 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    puVar1 = (uint *)(local_d8 + 8);
    uVar18 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar18 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_d8 + 8);
      LOCK();
      uVar18 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar18 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)(local_d8 + 0xd);
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar11;
        plVar9 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar9;
            LOCK();
            bVar19 = plVar9 != DAT_14ca843c0;
            plVar8 = plVar6;
            if (bVar19) {
              plVar9 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar19);
        }
        else {
          do {
            *plVar6 = (longlong)plVar8;
            LOCK();
            bVar19 = plVar8 != DAT_14ca843c8;
            plVar9 = plVar6;
            if (bVar19) {
              plVar8 = DAT_14ca843c8;
              plVar9 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar9;
            UNLOCK();
          } while (bVar19);
        }
      }
    }
  }
  plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x360) + 0x58);
  (**(code **)(*plVar9 + 0xb0))
            (plVar9,*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x368) + 0x60) + 8),puVar5
            );
  if (*(int *)(*(longlong *)(param_1 + 0x360) + 0xa4) != 1) {
    (**(code **)(*DAT_14ca83900 + 0x2c8))(DAT_14ca83900,&local_3a8,*(undefined8 *)(param_1 + 0x358))
    ;
    lVar11 = *(longlong *)(param_1 + 0x370);
    lVar3 = *(longlong *)(lVar11 + 0x90);
    lVar13 = *(longlong *)(lVar11 + 0xa8);
    if ((lVar13 == lVar3) && (*(int *)(lVar11 + 0xb8) == *(int *)(lVar11 + 0xa0))) {
      lVar11 = *(longlong *)(lVar3 + 0x10);
      if (lVar11 != 0) {
        LOCK();
        *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
        UNLOCK();
      }
      uStack_258 = DAT_14c9a52a0;
      local_260 = DAT_14c9a5298;
      uStack_254 = (undefined4)DAT_14c9a5298;
      iStack_250 = (int)((ulonglong)DAT_14c9a5298 >> 0x20);
      uStack_24c = DAT_14c9a52a0;
      uStack_248 = DAT_14c9a5298;
      local_240 = DAT_14c9a52a0;
      uStack_23c = 0;
      uStack_238 = 0;
      uStack_234 = 1;
      uStack_230 = 0;
      local_22c = 0x100000000;
      FUN_1477f1eb1(puVar5,lVar11,local_3a8);
      if (lVar11 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar11 + 8);
        uVar18 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar18 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar11 + 8);
          LOCK();
          uVar18 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar18 >> 0x1e & 1) == 0) {
            bVar2 = *(byte *)(lVar11 + 0xd);
            plVar6 = (longlong *)FUN_14001cc68(0x10,8);
            plVar6[1] = lVar11;
            plVar9 = DAT_14ca843c0;
            plVar8 = DAT_14ca843c8;
            if ((bVar2 & 2) == 0) {
              do {
                *plVar6 = (longlong)plVar9;
                LOCK();
                bVar19 = plVar9 != DAT_14ca843c0;
                plVar8 = plVar6;
                if (bVar19) {
                  plVar9 = DAT_14ca843c0;
                  plVar8 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar8;
                UNLOCK();
              } while (bVar19);
            }
            else {
              do {
                *plVar6 = (longlong)plVar8;
                LOCK();
                bVar19 = plVar8 != DAT_14ca843c8;
                plVar9 = plVar6;
                if (bVar19) {
                  plVar8 = DAT_14ca843c8;
                  plVar9 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar9;
                UNLOCK();
              } while (bVar19);
            }
          }
        }
      }
    }
    else {
      uStack_258 = DAT_14c9a52a0;
      uStack_24c = DAT_14c9a52a0;
      uStack_254 = (undefined4)DAT_14c9a5298;
      iStack_250 = (int)((ulonglong)DAT_14c9a5298 >> 0x20);
      local_240 = DAT_14c9a52a0;
      uStack_23c = 0;
      uStack_238 = 0;
      uStack_234 = 1;
      uStack_230 = 0;
      local_22c = 0x100000000;
      uStack_248 = *(undefined8 *)(param_1 + 0x350);
      local_260 = *(undefined8 *)(param_1 + 0x348);
      lVar11 = *(longlong *)(lVar3 + 0x10);
      if (lVar11 != 0) {
        LOCK();
        *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
        UNLOCK();
        lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x370) + 0xa8);
      }
      FUN_1477f1eb1(puVar5,lVar11,*(undefined8 *)(lVar13 + 0x10),&local_260);
      if (*(int *)(*(longlong *)(param_1 + 0x360) + 0xa4) == 0) {
        FUN_1477f1eb1(puVar5,lVar11,local_3a8,&local_260);
      }
      if (lVar11 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar11 + 8);
        uVar18 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar18 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar11 + 8);
          LOCK();
          uVar18 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar18 >> 0x1e & 1) == 0) {
            bVar2 = *(byte *)(lVar11 + 0xd);
            plVar6 = (longlong *)FUN_14001cc68(0x10,8);
            plVar6[1] = lVar11;
            plVar9 = DAT_14ca843c0;
            plVar8 = DAT_14ca843c8;
            if ((bVar2 & 2) == 0) {
              do {
                *plVar6 = (longlong)plVar9;
                LOCK();
                bVar19 = plVar9 != DAT_14ca843c0;
                plVar8 = plVar6;
                if (bVar19) {
                  plVar9 = DAT_14ca843c0;
                  plVar8 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar8;
                UNLOCK();
              } while (bVar19);
            }
            else {
              do {
                *plVar6 = (longlong)plVar8;
                LOCK();
                bVar19 = plVar8 != DAT_14ca843c8;
                plVar9 = plVar6;
                if (bVar19) {
                  plVar8 = DAT_14ca843c8;
                  plVar9 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar9;
                UNLOCK();
              } while (bVar19);
            }
          }
        }
      }
    }
    if (local_3a8 != 0) {
      LOCK();
      puVar1 = (uint *)(local_3a8 + 8);
      uVar18 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar18 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_3a8 + 8);
        LOCK();
        uVar18 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar18 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(local_3a8 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = local_3a8;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar9;
              LOCK();
              bVar19 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar6;
              if (bVar19) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar19);
          }
          else {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar19 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar6;
              if (bVar19) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar19);
          }
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_3f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14465fcc8 FUN_14465fcc8 body=857 status=ok
// SIG undefined FUN_14465fcc8(void)

void FUN_14465fcc8(void *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined1 **ppuVar15;
  longlong lVar16;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 *local_118;
  longlong lStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 *local_e8;
  longlong lStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar16 = *(longlong *)(*(longlong *)((longlong)param_1 + 0x198) + 0x68);
  if (lVar16 == 0) {
    plVar1 = *(longlong **)(*(longlong *)((longlong)param_1 + 400) + 0x58);
    (**(code **)(*plVar1 + 0x80))
              (plVar1,*(longlong *)((longlong)param_1 + 0x198) + 0x40,(longlong)param_1 + 0xb8);
  }
  else {
    lStack_e0 = 0;
    local_e8 = &DAT_00020008;
    plVar1 = *(longlong **)(*(longlong *)((longlong)param_1 + 400) + 0x58);
    (**(code **)(*plVar1 + 0x50))(plVar1,&local_d8,lVar16,2);
    plVar1 = *(longlong **)(*(longlong *)((longlong)param_1 + 400) + 0x58);
    (**(code **)(*plVar1 + 0x78))
              (plVar1,*(longlong *)((longlong)param_1 + 0x198) + 0x40,(longlong)param_1 + 0xb8,
               &local_e8);
  }
  lVar16 = *(longlong *)((longlong)param_1 + 400);
  *(undefined1 *)(lVar16 + 0xb0) = 1;
  *(bool *)(lVar16 + 0xaa) = *(int *)(lVar16 + 0xa4) == 1;
  lVar16 = *(longlong *)((longlong)param_1 + 400);
  if ((*(int *)(lVar16 + 0xa4) == 1) || (*(char *)(lVar16 + 0xae) == '\x01')) {
    (**(code **)(**(longlong **)(lVar16 + 0x58) + 0x98))
              (*(longlong **)(lVar16 + 0x58),*(undefined8 *)((longlong)param_1 + 0x198),
               *(undefined8 *)((longlong)param_1 + 0x140));
    lVar16 = *(longlong *)((longlong)param_1 + 400);
    if (*(int *)(lVar16 + 0xa4) != 1) goto LAB_14465fe22;
    lVar14 = DAT_14cc2cb50;
    if (DAT_14cc2cb50 == 0) {
      plVar1 = *(longlong **)(lVar16 + 0x58);
      uVar13 = (**(code **)(**(longlong **)((longlong)param_1 + 0x188) + 8))();
      uVar13 = (**(code **)(*plVar1 + 0x40))(plVar1,uVar13);
      lVar14 = (**(code **)(*plVar1 + 0x90))(plVar1,uVar13);
      DAT_14cc2cb50 = lVar14;
      goto LAB_14465fe41;
    }
  }
  else {
LAB_14465fe22:
    lVar14 = (**(code **)(**(longlong **)(lVar16 + 0x58) + 0x58))
                       (*(longlong **)(lVar16 + 0x58),param_2,
                        *(undefined8 *)
                         (*(longlong *)(*(longlong *)((longlong)param_1 + 0x198) + 0x60) + 8));
LAB_14465fe41:
    if (lVar14 == 0) goto LAB_14465ffe8;
    lVar16 = *(longlong *)((longlong)param_1 + 400);
  }
  memcpy(&local_e8,param_1,0xb8);
  local_c8 = (**(code **)(**(longlong **)(lVar16 + 0x58) + 0x58))
                       (*(longlong **)(lVar16 + 0x58),param_2,
                        *(undefined8 *)
                         (*(longlong *)(*(longlong *)((longlong)param_1 + 0x198) + 0x60) + 8));
  lStack_e0 = (longlong)param_1 + 0x148;
  plVar1 = *(longlong **)(*(longlong *)((longlong)param_1 + 400) + 0x58);
  (**(code **)(*plVar1 + 0x20))(plVar1,*(longlong *)((longlong)param_1 + 0x198) + 0x40,&local_e8);
  plVar1 = *(longlong **)(*(longlong *)((longlong)param_1 + 400) + 0x58);
  uVar13 = (**(code **)(**(longlong **)((longlong)param_1 + 0x188) + 8))();
  uVar13 = (**(code **)(*plVar1 + 0x40))(plVar1,uVar13);
  ppuVar15 = &local_e8;
  (**(code **)(*plVar1 + 0x88))(plVar1,ppuVar15,uVar13);
  if ((*(int *)(*(longlong *)((longlong)param_1 + 400) + 0xa4) != 1) ||
     (*(char *)((longlong)param_1 + 0x1e8) == '\0')) {
    ppuVar15 = (undefined1 **)((longlong)param_1 + 0x1a0);
  }
  lVar16 = *(longlong *)((longlong)param_1 + 0x1d0);
  uVar2 = *(undefined4 *)ppuVar15;
  uVar3 = *(undefined4 *)((longlong)ppuVar15 + 4);
  uVar4 = *(undefined4 *)(ppuVar15 + 1);
  uVar5 = *(undefined4 *)((longlong)ppuVar15 + 0xc);
  uVar6 = *(undefined4 *)(ppuVar15 + 2);
  uVar7 = *(undefined4 *)((longlong)ppuVar15 + 0x14);
  uVar8 = *(undefined4 *)(ppuVar15 + 3);
  uVar9 = *(undefined4 *)((longlong)ppuVar15 + 0x1c);
  uVar10 = *(undefined4 *)((longlong)ppuVar15 + 0x24);
  uVar11 = *(undefined4 *)(ppuVar15 + 5);
  uVar12 = *(undefined4 *)((longlong)ppuVar15 + 0x2c);
  *(undefined4 *)(lVar16 + 0x68) = *(undefined4 *)(ppuVar15 + 4);
  *(undefined4 *)(lVar16 + 0x6c) = uVar10;
  *(undefined4 *)(lVar16 + 0x70) = uVar11;
  *(undefined4 *)(lVar16 + 0x74) = uVar12;
  *(undefined4 *)(lVar16 + 0x58) = uVar6;
  *(undefined4 *)(lVar16 + 0x5c) = uVar7;
  *(undefined4 *)(lVar16 + 0x60) = uVar8;
  *(undefined4 *)(lVar16 + 100) = uVar9;
  *(undefined4 *)(lVar16 + 0x48) = uVar2;
  *(undefined4 *)(lVar16 + 0x4c) = uVar3;
  *(undefined4 *)(lVar16 + 0x50) = uVar4;
  *(undefined4 *)(lVar16 + 0x54) = uVar5;
  *(longlong *)(*(longlong *)((longlong)param_1 + 0x1d0) + 0x10) = lVar14;
  plVar1 = *(longlong **)(*(longlong *)((longlong)param_1 + 400) + 0x58);
  (**(code **)(*plVar1 + 0x20))
            (plVar1,*(longlong *)((longlong)param_1 + 0x198) + 0x40,
             *(undefined8 *)((longlong)param_1 + 0x1d0));
  if ((*(char *)((longlong)param_1 + 0x1e8) == '\0') &&
     (*(int *)(*(longlong *)((longlong)param_1 + 400) + 0xa4) == 1)) {
    plVar1 = *(longlong **)(*(longlong *)((longlong)param_1 + 400) + 0x58);
    local_158 = *(undefined4 *)((longlong)param_1 + 0x1d8);
    uStack_154 = *(undefined4 *)((longlong)param_1 + 0x1dc);
    uStack_150 = *(undefined4 *)((longlong)param_1 + 0x1e0);
    uStack_14c = *(undefined4 *)((longlong)param_1 + 0x1e4);
    local_f8 = local_c8;
    uStack_f0 = uStack_c0;
    local_108 = local_d8;
    uStack_100 = uStack_d0;
    local_118 = local_e8;
    lStack_110 = lStack_e0;
    local_148 = *(undefined4 *)((longlong)param_1 + 0x1a0);
    uStack_144 = *(undefined4 *)((longlong)param_1 + 0x1a4);
    uStack_140 = *(undefined4 *)((longlong)param_1 + 0x1a8);
    uStack_13c = *(undefined4 *)((longlong)param_1 + 0x1ac);
    local_138 = *(undefined4 *)((longlong)param_1 + 0x1b0);
    uStack_134 = *(undefined4 *)((longlong)param_1 + 0x1b4);
    uStack_130 = *(undefined4 *)((longlong)param_1 + 0x1b8);
    uStack_12c = *(undefined4 *)((longlong)param_1 + 0x1bc);
    local_128 = *(undefined4 *)((longlong)param_1 + 0x1c0);
    uStack_124 = *(undefined4 *)((longlong)param_1 + 0x1c4);
    uStack_120 = *(undefined4 *)((longlong)param_1 + 0x1c8);
    uStack_11c = *(undefined4 *)((longlong)param_1 + 0x1cc);
    (**(code **)(*plVar1 + 0xa8))(plVar1,lVar14);
  }
LAB_14465ffe8:
  if (*(longlong *)((longlong)param_1 + 0x1d0) != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144660022 FUN_144660022 body=261 status=ok
// SIG undefined FUN_144660022(void)

void FUN_144660022(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  FUN_14465fcc8(param_1 + 0x10);
  lVar4 = *(longlong *)(param_1 + 0x1a8);
  if (lVar4 != 0) {
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
  lVar4 = *(longlong *)(param_1 + 0x198);
  if (lVar4 != 0) {
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
  return;
}



// FUNCTION 144660128 FUN_144660128 body=38 status=ok
// SIG undefined FUN_144660128(void)

undefined8 FUN_144660128(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14466014e FUN_14466014e body=518 status=ok
// SIG undefined FUN_14466014e(void)

void FUN_14466014e(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_d8 [40];
  undefined1 local_b0 [8];
  undefined1 *local_a8;
  int local_a0;
  undefined1 local_98 [64];
  undefined1 *local_58;
  int local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,local_b0);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a0;
  if ((longlong)local_a0 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = local_b0;
    if (local_a8 != (undefined1 *)0x0) {
      puVar2 = local_a8;
    }
    FUN_1446fe144(puVar3 + 2,local_a0,0);
    puVar1 = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 2;
    }
    memcpy(puVar1,puVar2,(longlong)local_a0);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_50;
  if ((longlong)local_50 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    puVar2 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      puVar2 = local_98;
    }
    FUN_1446fe1b8(puVar3 + 5,local_50,0);
    puVar1 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 5;
    }
    memcpy(puVar1,puVar2,(longlong)local_50 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_48;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_44;
  *(undefined4 *)(puVar3 + 0x10) = uStack_40;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_3c;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8(local_58);
  }
  if (local_a8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (*(char *)((longlong)param_2 + 100) == '\x01') {
    DAT_14cc2cb50 = 0;
  }
  else {
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar3 + 3;
    if ((undefined8 *)param_2[1] < puVar1) {
      FUN_140023dd8(param_2,0x20);
      puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar1 = puVar3 + 3;
    }
    *param_2 = (ulonglong)puVar1;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar3;
    param_2[6] = (ulonglong)(puVar3 + 1);
    puVar3[1] = 0;
    *puVar3 = &PTR_LAB_14beac718;
  }
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14466036e FUN_14466036e body=38 status=ok
// SIG undefined FUN_14466036e(void)

undefined8 FUN_14466036e(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144660394 FUN_144660394 body=548 status=ok
// SIG undefined FUN_144660394(void)

void FUN_144660394(longlong param_1,ulonglong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined1 *local_b0;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,local_b8);
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
  *(int *)(puVar4 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar4 + 0x24) = 8;
  }
  else {
    puVar3 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar3 = local_b0;
    }
    FUN_1446fe144(puVar4 + 2,local_a8,0);
    puVar2 = (undefined8 *)puVar4[3];
    if ((undefined8 *)puVar4[3] == (undefined8 *)0x0) {
      puVar2 = puVar4 + 2;
    }
    memcpy(puVar2,puVar3,(longlong)local_a8);
  }
  puVar4[0xd] = 0;
  *(int *)(puVar4 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar4 + 0x74) = 8;
  }
  else {
    puVar3 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar3 = local_a0;
    }
    FUN_1446fe1b8(puVar4 + 5,local_58,0);
    puVar2 = (undefined8 *)puVar4[0xd];
    if ((undefined8 *)puVar4[0xd] == (undefined8 *)0x0) {
      puVar2 = puVar4 + 5;
    }
    memcpy(puVar2,puVar3,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar4 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar4 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar4 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar4 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  plVar1 = *(longlong **)(param_1 + 0x1b8);
  if (*(char *)((longlong)param_2 + 100) == '\x01') {
    (**(code **)(*plVar1 + 0x40))(plVar1);
  }
  else {
    puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar4 + 3;
    if ((undefined8 *)param_2[1] < puVar2) {
      FUN_140023dd8(param_2,0x20);
      puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar2 = puVar4 + 3;
    }
    *param_2 = (ulonglong)puVar2;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar4;
    param_2[6] = (ulonglong)(puVar4 + 1);
    puVar4[1] = 0;
    *puVar4 = &PTR_LAB_14beac738;
    puVar4[2] = plVar1;
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446605c6 FUN_1446605c6 body=608 status=ok
// SIG undefined FUN_1446605c6(void)

void FUN_1446605c6(longlong *param_1,ulonglong *param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  bool bVar12;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 local_3c;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *param_1;
  (**(code **)(*DAT_14ca83900 + 0x2c8))(DAT_14ca83900,&local_30,param_1[1]);
  lVar6 = (**(code **)(*(longlong *)param_1[1] + 0x30))();
  if ((lVar6 != 0) && (*(longlong *)(lVar4 + 0x68) != 0)) {
    FUN_14465b8b0(lVar4);
    lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x68) + 8);
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    local_68 = DAT_14c9a52a0;
    local_70 = DAT_14c9a5298;
    local_64 = DAT_14c9a5298;
    local_5c = DAT_14c9a52a0;
    local_58 = DAT_14c9a5298;
    local_50 = DAT_14c9a52a0;
    local_4c = 0;
    uStack_48 = 0;
    uStack_44 = 1;
    uStack_40 = 0;
    local_3c = 0x100000000;
    FUN_1477f1eb1(param_2,lVar5,local_30);
    *(undefined1 *)(lVar6 + 0xa0) = 2;
    *(undefined1 *)(lVar6 + 0xa9) = 1;
    if (*(char *)((longlong)param_2 + 100) == '\x01') {
      *(undefined1 *)(lVar6 + 0xaa) = 1;
    }
    else {
      puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar8 + 4;
      if ((undefined8 *)param_2[1] < puVar11) {
        FUN_140023dd8(param_2,0x28);
        puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar8 + 4;
      }
      *param_2 = (ulonglong)puVar11;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar8;
      param_2[6] = (ulonglong)(puVar8 + 1);
      puVar8[1] = 0;
      *puVar8 = &PTR_LAB_14beac740;
      puVar8[2] = lVar4;
      puVar8[3] = lVar6;
    }
    if (lVar5 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar5 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar5 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar5 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar5;
          plVar10 = DAT_14ca843c0;
          plVar9 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar10;
              LOCK();
              bVar12 = plVar10 != DAT_14ca843c0;
              plVar9 = plVar7;
              if (bVar12) {
                plVar10 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar9;
              UNLOCK();
            } while (bVar12);
          }
          else {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar12 = plVar9 != DAT_14ca843c8;
              plVar10 = plVar7;
              if (bVar12) {
                plVar9 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar12);
          }
        }
      }
    }
  }
  if (local_30 != 0) {
    LOCK();
    puVar1 = (uint *)(local_30 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_30 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_30 + 0xd);
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = local_30;
        plVar10 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar7 = (longlong)plVar10;
            LOCK();
            bVar12 = plVar10 != DAT_14ca843c0;
            plVar9 = plVar7;
            if (bVar12) {
              plVar10 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar12);
        }
        else {
          do {
            *plVar7 = (longlong)plVar9;
            LOCK();
            bVar12 = plVar9 != DAT_14ca843c8;
            plVar10 = plVar7;
            if (bVar12) {
              plVar9 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar12);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144660844 FUN_144660844 body=12 status=ok
// SIG undefined FUN_144660844(void)

void FUN_144660844(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014466084d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144660850 FUN_144660850 body=163 status=ok
// SIG undefined FUN_144660850(void)

undefined8 * FUN_144660850(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_LAB_14beac750;
  lVar4 = param_1[2];
  if (lVar4 != 0) {
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446608f4 FUN_1446608f4 body=282 status=ok
// SIG undefined FUN_1446608f4(void)

undefined8 * FUN_1446608f4(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14465e119);
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



// FUNCTION 144660a0e FUN_144660a0e body=205 status=ok
// SIG undefined FUN_144660a0e(void)

void FUN_144660a0e(undefined8 *param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1446605c6(param_1 + 0x15,&DAT_14ca85100);
  lVar5 = param_1[0x16];
  if (lVar5 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar5 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar5 + 8);
      LOCK();
      uVar3 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(lVar5 + 0xd);
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar5;
        plVar8 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar8;
            LOCK();
            bVar9 = plVar8 != DAT_14ca843c0;
            plVar7 = plVar6;
            if (bVar9) {
              plVar8 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar9);
        }
        else {
          do {
            *plVar6 = (longlong)plVar7;
            LOCK();
            bVar9 = plVar7 != DAT_14ca843c8;
            plVar8 = plVar6;
            if (bVar9) {
              plVar7 = DAT_14ca843c8;
              plVar8 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar8;
            UNLOCK();
          } while (bVar9);
        }
      }
    }
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(param_1 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144660ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 144660ae8 FUN_144660ae8 body=154 status=ok
// SIG undefined FUN_144660ae8(void)

void FUN_144660ae8(undefined8 *param_1,ulonglong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  lVar1 = (**(code **)(*(longlong *)*param_1 + 0x30))();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0xa0) = 2;
    *(undefined1 *)(lVar1 + 0xa9) = 1;
    if (*(char *)((longlong)param_2 + 100) == '\x01') {
      *(undefined1 *)(lVar1 + 0xaa) = 1;
    }
    else {
      puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar3 = puVar2 + 3;
      if ((undefined8 *)param_2[1] < puVar3) {
        FUN_140023dd8(param_2,0x20);
        puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar2 + 3;
      }
      *param_2 = (ulonglong)puVar3;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar2;
      param_2[6] = (ulonglong)(puVar2 + 1);
      puVar2[1] = 0;
      *puVar2 = &PTR_LAB_14beac7c0;
      puVar2[2] = lVar1;
    }
  }
  return;
}



// FUNCTION 144660b8c FUN_144660b8c body=12 status=ok
// SIG undefined FUN_144660b8c(void)

void FUN_144660b8c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144660b95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144660b98 FUN_144660b98 body=163 status=ok
// SIG undefined FUN_144660b98(void)

undefined8 * FUN_144660b98(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_LAB_14beac7d0;
  lVar4 = param_1[1];
  if (lVar4 != 0) {
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144660c3c FUN_144660c3c body=282 status=ok
// SIG undefined FUN_144660c3c(void)

undefined8 * FUN_144660c3c(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14465e119);
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



// FUNCTION 144660d56 FUN_144660d56 body=363 status=ok
// SIG undefined FUN_144660d56(void)

void FUN_144660d56(undefined8 *param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  bool bVar11;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar5 = (**(code **)(*(longlong *)param_1[0x15] + 0x30))();
  if (lVar5 != 0) {
    *(undefined1 *)(lVar5 + 0xa0) = 2;
    *(undefined1 *)(lVar5 + 0xa9) = 1;
    if (DAT_14ca85164 == '\x01') {
      *(undefined1 *)(lVar5 + 0xaa) = 1;
    }
    else {
      puVar6 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar10 = puVar6 + 3;
      if (DAT_14ca85108 < puVar10) {
        FUN_140023dd8(&DAT_14ca85100,0x20);
        puVar6 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
        puVar10 = puVar6 + 3;
      }
      DAT_14ca85160 = DAT_14ca85160 + 1;
      DAT_14ca85100 = puVar10;
      *DAT_14ca85130 = puVar6;
      DAT_14ca85130 = puVar6 + 1;
      puVar6[1] = 0;
      *puVar6 = &PTR_LAB_14beac7c0;
      puVar6[2] = lVar5;
    }
  }
  lVar5 = param_1[0x15];
  if (lVar5 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar5 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar5 + 8);
      LOCK();
      uVar3 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(lVar5 + 0xd);
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = lVar5;
        plVar9 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar7 = (longlong)plVar9;
            LOCK();
            bVar11 = plVar9 != DAT_14ca843c0;
            plVar8 = plVar7;
            if (bVar11) {
              plVar9 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar11);
        }
        else {
          do {
            *plVar7 = (longlong)plVar8;
            LOCK();
            bVar11 = plVar8 != DAT_14ca843c8;
            plVar9 = plVar7;
            if (bVar11) {
              plVar8 = DAT_14ca843c8;
              plVar9 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar9;
            UNLOCK();
          } while (bVar11);
        }
      }
    }
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(param_1 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144660e9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 144660ec2 FUN_144660ec2 body=167 status=ok
// SIG undefined FUN_144660ec2(void)

void FUN_144660ec2(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined2 local_78;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar1 = *(longlong *)(param_1 + 0x10);
  memset(local_a8,0,0x88);
  local_b0 = 0x20002;
  plVar2 = *(longlong **)(lVar1 + 0x58);
  uVar3 = (**(code **)(**(longlong **)(lVar1 + 0x68) + 8))();
  local_a0 = (**(code **)(*plVar2 + 0x40))(plVar2,uVar3);
  local_78 = 0;
  lVar4 = *(longlong *)(lVar1 + 0x78) + 0x40;
  if (*(longlong *)(lVar1 + 0x78) == 0) {
    lVar4 = 0;
  }
  (**(code **)(**(longlong **)(lVar1 + 0x58) + 0x80))(*(longlong **)(lVar1 + 0x58),lVar4,&local_b0);
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144660f6a FUN_144660f6a body=269 status=ok
// SIG undefined FUN_144660f6a(void)

void FUN_144660f6a(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined2 local_78;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar1 = *param_1;
  if (*(char *)((longlong)param_2 + 100) == '\x01') {
    memset(local_a8,0,0x88);
    local_b0 = 0x20002;
    plVar2 = *(longlong **)(lVar1 + 0x58);
    uVar3 = (**(code **)(**(longlong **)(lVar1 + 0x68) + 8))();
    local_a0 = (**(code **)(*plVar2 + 0x40))(plVar2,uVar3);
    local_78 = 0;
    lVar6 = *(longlong *)(lVar1 + 0x78) + 0x40;
    if (*(longlong *)(lVar1 + 0x78) == 0) {
      lVar6 = 0;
    }
    (**(code **)(**(longlong **)(lVar1 + 0x58) + 0x80))
              (*(longlong **)(lVar1 + 0x58),lVar6,&local_b0);
  }
  else {
    puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 3;
    if ((undefined8 *)param_2[1] < puVar5) {
      FUN_140023dd8(param_2,0x20);
      puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar5 = puVar4 + 3;
    }
    *param_2 = (ulonglong)puVar5;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar4;
    param_2[6] = (ulonglong)(puVar4 + 1);
    puVar4[1] = 0;
    *puVar4 = &PTR_FUN_14beac800;
    puVar4[2] = lVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144661082 FUN_144661082 body=12 status=ok
// SIG undefined FUN_144661082(void)

void FUN_144661082(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014466108b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14466108e FUN_14466108e body=29 status=ok
// SIG undefined FUN_14466108e(void)

undefined8 FUN_14466108e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446610ac FUN_1446610ac body=282 status=ok
// SIG undefined FUN_1446610ac(void)

undefined8 * FUN_1446610ac(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14465e119);
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



// FUNCTION 1446611c6 FUN_1446611c6 body=347 status=ok
// SIG undefined FUN_1446611c6(void)

void FUN_1446611c6(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 local_b0 [8];
  undefined8 local_a8;
  undefined2 local_80;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar2 = param_1[0x15];
  if (DAT_14ca85164 == '\x01') {
    memset(local_b0,0,0x88);
    local_b8 = 0x20002;
    plVar3 = *(longlong **)(lVar2 + 0x58);
    uVar4 = (**(code **)(**(longlong **)(lVar2 + 0x68) + 8))();
    local_a8 = (**(code **)(*plVar3 + 0x40))(plVar3,uVar4);
    local_80 = 0;
    lVar7 = *(longlong *)(lVar2 + 0x78) + 0x40;
    if (*(longlong *)(lVar2 + 0x78) == 0) {
      lVar7 = 0;
    }
    (**(code **)(**(longlong **)(lVar2 + 0x58) + 0x80))
              (*(longlong **)(lVar2 + 0x58),lVar7,&local_b8);
  }
  else {
    puVar5 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar6 = puVar5 + 3;
    if (DAT_14ca85108 < puVar6) {
      FUN_140023dd8(&DAT_14ca85100,0x20);
      puVar5 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar6 = puVar5 + 3;
    }
    DAT_14ca85160 = DAT_14ca85160 + 1;
    DAT_14ca85100 = puVar6;
    *DAT_14ca85130 = puVar5;
    DAT_14ca85130 = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_FUN_14beac800;
    puVar5[2] = lVar2;
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*param_1)(param_1,1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144661322 FUN_144661322 body=83 status=ok
// SIG undefined FUN_144661322(void)

undefined8 * FUN_144661322(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14beacac0;
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14466138a FUN_14466138a body=110 status=ok
// SIG undefined FUN_14466138a(void)

void FUN_14466138a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beacac0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1446613f8 FUN_1446613f8 body=110 status=ok
// SIG undefined FUN_1446613f8(void)

void FUN_1446613f8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beacac0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 144661466 FUN_144661466 body=148 status=ok
// SIG undefined FUN_144661466(void)

void FUN_144661466(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14beacac0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001446614ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144661504 FUN_144661504 body=20 status=ok
// SIG undefined FUN_144661504(void)

undefined1 FUN_144661504(longlong param_1)

{
  FUN_144661518(param_1 + 0x18);
  return 1;
}



// FUNCTION 144661518 FUN_144661518 body=140 status=ok
// SIG undefined FUN_144661518(void)

void FUN_144661518(longlong *param_1)

{
  if (DAT_14cc2afa8 != 0) {
    FUN_14480f766(*param_1 + 0x18);
  }
  if (DAT_14cc2afb0 != 0) {
    FUN_14480f766(*param_1 + 0x30);
  }
  if (DAT_14cc2afb8 != 0) {
    FUN_14480f766(*param_1 + 0x48);
  }
  if (DAT_14cc2afc0 != 0) {
    FUN_14480f766(*param_1 + 0x60);
  }
  if (DAT_14cc2afc8 != 0) {
    FUN_141092d32(*param_1 + 0x78);
    return;
  }
  return;
}



// FUNCTION 1446615a4 FUN_1446615a4 body=113 status=ok
// SIG undefined FUN_1446615a4(void)

void FUN_1446615a4(ulonglong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar1 + 3;
  if ((undefined8 *)param_1[1] < puVar2) {
    FUN_140023dd8(param_1,0x20);
    puVar1 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar1 + 3;
  }
  *param_1 = (ulonglong)puVar2;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar1;
  param_1[6] = (ulonglong)(puVar1 + 1);
  puVar1[1] = 0;
  *puVar1 = &PTR_LAB_14beacb28;
  puVar1[2] = param_2;
  return;
}



// FUNCTION 144661638 FUN_144661638 body=12 status=ok
// SIG undefined FUN_144661638(void)

void FUN_144661638(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144661641. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144661644 FUN_144661644 body=29 status=ok
// SIG undefined FUN_144661644(void)

undefined8 FUN_144661644(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144661662 FUN_144661662 body=282 status=ok
// SIG undefined FUN_144661662(void)

undefined8 * FUN_144661662(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14465e119);
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



// FUNCTION 14466177c FUN_14466177c body=108 status=ok
// SIG undefined FUN_14466177c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14466177c(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1446615a4(&DAT_14ca85100,_DAT_000000a8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1446615a4(&DAT_14ca85100,param_1[0x15]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001446617bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1446617e8 FUN_1446617e8 body=424 status=ok
// SIG undefined FUN_1446617e8(void)

void FUN_1446617e8(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined1 local_89;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_149830d56(&local_58,
                *(undefined8 *)
                 (&DAT_14ca8c1f0 +
                 (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x59e44c) * 2)
                 * 8),param_1 + 0x10);
  local_90 = *(undefined4 *)(param_4 + 0x8ef8);
  uVar1 = *(undefined4 *)(param_4 + 0x8ef0);
  uVar2 = *(undefined4 *)(param_4 + 0x8ef4);
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar4 = puVar5 + 0x38;
  if (*(undefined8 **)(param_2 + 0x78) < puVar4) {
    FUN_140023dd8((longlong *)(param_2 + 0x70));
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar4 = puVar5 + 0x38;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar4;
  *puVar5 = &PTR_FUN_14beacbf8;
  puVar4 = puVar5 + 2;
  puVar5[2] = 0;
  *(undefined1 *)(puVar5 + 3) = 1;
  puVar5[4] = 0;
  *(undefined1 *)(puVar5 + 5) = 1;
  memset(puVar5 + 6,0,0x188);
  iVar3 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar3 + 1U) {
    FUN_1448cfae8(param_2 + 0x98,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar3 * 8) = puVar5;
  FUN_1498291d8(param_2,param_3,param_4,puVar4);
  FUN_145aa6372();
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  FUN_1448f70da(CONCAT44(uStack_54,local_58),&DAT_14cc2c950,puVar4,&local_88);
  uStack_78 = uStack_50;
  uStack_74 = uStack_4c;
  local_68 = local_90;
  local_88 = puVar4;
  local_70 = uVar1;
  local_6c = uVar2;
  FUN_145aa6372();
  FUN_149830df6(param_2,&local_89,puVar4,&local_88);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144661992 FUN_144661992 body=492 status=ok
// SIG undefined FUN_144661992(void)

void FUN_144661992(longlong param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *_Dst;
  undefined1 *_Src;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,&local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar2) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar2;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = &local_b8;
    if ((undefined8 *)CONCAT44(uStack_ac,local_b0) != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)CONCAT44(uStack_ac,local_b0);
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    _Dst = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      _Dst = puVar3 + 2;
    }
    memcpy(_Dst,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    _Src = local_60;
    if (local_60 == (undefined1 *)0x0) {
      _Src = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar2 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar2 = puVar3 + 5;
    }
    memcpy(puVar2,_Src,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (CONCAT44(uStack_ac,local_b0) != 0) {
    FUN_1400020a8();
  }
  local_b0 = *(undefined4 *)(param_1 + 0x1d8);
  local_b8 = *(undefined8 *)(param_1 + 0x1d0);
  uVar1 = *(undefined8 *)(param_1 + 0x1b8);
  FUN_145aa6372();
  FUN_149830f9c(param_2,param_1 + 0x1c0,uVar1,&local_b8);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144661b7f FUN_144661b7f body=229 status=ok
// SIG undefined FUN_144661b7f(void)

void FUN_144661b7f(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14cc2c950,param_3);
  return;
}



// FUNCTION 144661c64 FUN_144661c64 body=81 status=ok
// SIG undefined FUN_144661c64(void)

void FUN_144661c64(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_149831034(param_1,param_2,lVar1);
  return;
}



// FUNCTION 144661cb6 FUN_144661cb6 body=424 status=ok
// SIG undefined FUN_144661cb6(void)

void FUN_144661cb6(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined1 local_89;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_149831302(&local_58,
                *(undefined8 *)
                 (&DAT_14ca8c1f0 +
                 (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x59e44c) * 2)
                 * 8),param_1 + 0x10);
  local_90 = *(undefined4 *)(param_4 + 0x8ef8);
  uVar1 = *(undefined4 *)(param_4 + 0x8ef0);
  uVar2 = *(undefined4 *)(param_4 + 0x8ef4);
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar4 = puVar5 + 0x38;
  if (*(undefined8 **)(param_2 + 0x78) < puVar4) {
    FUN_140023dd8((longlong *)(param_2 + 0x70));
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar4 = puVar5 + 0x38;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar4;
  *puVar5 = &PTR_FUN_14beacbf8;
  puVar4 = puVar5 + 2;
  puVar5[2] = 0;
  *(undefined1 *)(puVar5 + 3) = 1;
  puVar5[4] = 0;
  *(undefined1 *)(puVar5 + 5) = 1;
  memset(puVar5 + 6,0,0x188);
  iVar3 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar3 + 1U) {
    FUN_1448cfae8(param_2 + 0x98,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar3 * 8) = puVar5;
  FUN_1498291d8(param_2,param_3,param_4,puVar4);
  FUN_145aa6372();
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  FUN_1448f70da(CONCAT44(uStack_54,local_58),&DAT_14cc2c950,puVar4,&local_88);
  uStack_78 = uStack_50;
  uStack_74 = uStack_4c;
  local_68 = local_90;
  local_88 = puVar4;
  local_70 = uVar1;
  local_6c = uVar2;
  FUN_145aa6372();
  FUN_149831384(param_2,&local_89,puVar4,&local_88);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144661e60 FUN_144661e60 body=492 status=ok
// SIG undefined FUN_144661e60(void)

void FUN_144661e60(longlong param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *_Dst;
  undefined1 *_Src;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,&local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar2) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar2;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = &local_b8;
    if ((undefined8 *)CONCAT44(uStack_ac,local_b0) != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)CONCAT44(uStack_ac,local_b0);
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    _Dst = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      _Dst = puVar3 + 2;
    }
    memcpy(_Dst,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    _Src = local_60;
    if (local_60 == (undefined1 *)0x0) {
      _Src = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar2 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar2 = puVar3 + 5;
    }
    memcpy(puVar2,_Src,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (CONCAT44(uStack_ac,local_b0) != 0) {
    FUN_1400020a8();
  }
  local_b0 = *(undefined4 *)(param_1 + 0x1d8);
  local_b8 = *(undefined8 *)(param_1 + 0x1d0);
  uVar1 = *(undefined8 *)(param_1 + 0x1b8);
  FUN_145aa6372();
  FUN_14983152a(param_2,param_1 + 0x1c0,uVar1,&local_b8);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14466204d FUN_14466204d body=229 status=ok
// SIG undefined FUN_14466204d(void)

void FUN_14466204d(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14cc2c950,param_3);
  return;
}



// FUNCTION 144662132 FUN_144662132 body=81 status=ok
// SIG undefined FUN_144662132(void)

void FUN_144662132(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1498315c2(param_1,param_2,lVar1);
  return;
}



// FUNCTION 144662184 FUN_144662184 body=424 status=ok
// SIG undefined FUN_144662184(void)

void FUN_144662184(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined1 local_89;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_149831890(&local_58,
                *(undefined8 *)
                 (&DAT_14ca8c1f0 +
                 (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x59e44c) * 2)
                 * 8),param_1 + 0x10);
  local_90 = *(undefined4 *)(param_4 + 0x8ef8);
  uVar1 = *(undefined4 *)(param_4 + 0x8ef0);
  uVar2 = *(undefined4 *)(param_4 + 0x8ef4);
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar4 = puVar5 + 0x38;
  if (*(undefined8 **)(param_2 + 0x78) < puVar4) {
    FUN_140023dd8((longlong *)(param_2 + 0x70));
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar4 = puVar5 + 0x38;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar4;
  *puVar5 = &PTR_FUN_14beacbf8;
  puVar4 = puVar5 + 2;
  puVar5[2] = 0;
  *(undefined1 *)(puVar5 + 3) = 1;
  puVar5[4] = 0;
  *(undefined1 *)(puVar5 + 5) = 1;
  memset(puVar5 + 6,0,0x188);
  iVar3 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar3 + 1U) {
    FUN_1448cfae8(param_2 + 0x98,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar3 * 8) = puVar5;
  FUN_1498291d8(param_2,param_3,param_4,puVar4);
  FUN_145aa6372();
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  FUN_1448f70da(CONCAT44(uStack_54,local_58),&DAT_14cc2c950,puVar4,&local_88);
  uStack_78 = uStack_50;
  uStack_74 = uStack_4c;
  local_68 = local_90;
  local_88 = puVar4;
  local_70 = uVar1;
  local_6c = uVar2;
  FUN_145aa6372();
  FUN_149831912(param_2,&local_89,puVar4,&local_88);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14466232e FUN_14466232e body=492 status=ok
// SIG undefined FUN_14466232e(void)

void FUN_14466232e(longlong param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *_Dst;
  undefined1 *_Src;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,&local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar2) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar2;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = &local_b8;
    if ((undefined8 *)CONCAT44(uStack_ac,local_b0) != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)CONCAT44(uStack_ac,local_b0);
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    _Dst = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      _Dst = puVar3 + 2;
    }
    memcpy(_Dst,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    _Src = local_60;
    if (local_60 == (undefined1 *)0x0) {
      _Src = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar2 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar2 = puVar3 + 5;
    }
    memcpy(puVar2,_Src,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (CONCAT44(uStack_ac,local_b0) != 0) {
    FUN_1400020a8();
  }
  local_b0 = *(undefined4 *)(param_1 + 0x1d8);
  local_b8 = *(undefined8 *)(param_1 + 0x1d0);
  uVar1 = *(undefined8 *)(param_1 + 0x1b8);
  FUN_145aa6372();
  FUN_149831ab8(param_2,param_1 + 0x1c0,uVar1,&local_b8);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14466251b FUN_14466251b body=229 status=ok
// SIG undefined FUN_14466251b(void)

void FUN_14466251b(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14cc2c950,param_3);
  return;
}



// FUNCTION 144662600 FUN_144662600 body=81 status=ok
// SIG undefined FUN_144662600(void)

void FUN_144662600(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_149831b50(param_1,param_2,lVar1);
  return;
}



// FUNCTION 144662652 FUN_144662652 body=424 status=ok
// SIG undefined FUN_144662652(void)

void FUN_144662652(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined1 local_89;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_149831e1e(&local_58,
                *(undefined8 *)
                 (&DAT_14ca8c1f0 +
                 (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x59e44c) * 2)
                 * 8),param_1 + 0x10);
  local_90 = *(undefined4 *)(param_4 + 0x8ef8);
  uVar1 = *(undefined4 *)(param_4 + 0x8ef0);
  uVar2 = *(undefined4 *)(param_4 + 0x8ef4);
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar4 = puVar5 + 0x38;
  if (*(undefined8 **)(param_2 + 0x78) < puVar4) {
    FUN_140023dd8((longlong *)(param_2 + 0x70));
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar4 = puVar5 + 0x38;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar4;
  *puVar5 = &PTR_FUN_14beacbf8;
  puVar4 = puVar5 + 2;
  puVar5[2] = 0;
  *(undefined1 *)(puVar5 + 3) = 1;
  puVar5[4] = 0;
  *(undefined1 *)(puVar5 + 5) = 1;
  memset(puVar5 + 6,0,0x188);
  iVar3 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar3 + 1U) {
    FUN_1448cfae8(param_2 + 0x98,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar3 * 8) = puVar5;
  FUN_1498291d8(param_2,param_3,param_4,puVar4);
  FUN_145aa6372();
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  FUN_1448f70da(CONCAT44(uStack_54,local_58),&DAT_14cc2c950,puVar4,&local_88);
  uStack_78 = uStack_50;
  uStack_74 = uStack_4c;
  local_68 = local_90;
  local_88 = puVar4;
  local_70 = uVar1;
  local_6c = uVar2;
  FUN_145aa6372();
  FUN_149831ea0(param_2,&local_89,puVar4,&local_88);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446627fc FUN_1446627fc body=492 status=ok
// SIG undefined FUN_1446627fc(void)

void FUN_1446627fc(longlong param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *_Dst;
  undefined1 *_Src;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,&local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar2) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar2;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = &local_b8;
    if ((undefined8 *)CONCAT44(uStack_ac,local_b0) != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)CONCAT44(uStack_ac,local_b0);
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    _Dst = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      _Dst = puVar3 + 2;
    }
    memcpy(_Dst,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    _Src = local_60;
    if (local_60 == (undefined1 *)0x0) {
      _Src = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar2 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar2 = puVar3 + 5;
    }
    memcpy(puVar2,_Src,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (CONCAT44(uStack_ac,local_b0) != 0) {
    FUN_1400020a8();
  }
  local_b0 = *(undefined4 *)(param_1 + 0x1d8);
  local_b8 = *(undefined8 *)(param_1 + 0x1d0);
  uVar1 = *(undefined8 *)(param_1 + 0x1b8);
  FUN_145aa6372();
  FUN_149832046(param_2,param_1 + 0x1c0,uVar1,&local_b8);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446629e9 FUN_1446629e9 body=229 status=ok
// SIG undefined FUN_1446629e9(void)

void FUN_1446629e9(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14cc2c950,param_3);
  return;
}



// FUNCTION 144662ace FUN_144662ace body=81 status=ok
// SIG undefined FUN_144662ace(void)

void FUN_144662ace(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1498320de(param_1,param_2,lVar1);
  return;
}



// FUNCTION 144662b20 FUN_144662b20 body=424 status=ok
// SIG undefined FUN_144662b20(void)

void FUN_144662b20(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined1 local_89;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1498323b8(&local_58,
                *(undefined8 *)
                 (&DAT_14ca8c1f0 +
                 (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x59e44c) * 2)
                 * 8),param_1 + 0x10);
  local_90 = *(undefined4 *)(param_4 + 0x8ef8);
  uVar1 = *(undefined4 *)(param_4 + 0x8ef0);
  uVar2 = *(undefined4 *)(param_4 + 0x8ef4);
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar4 = puVar5 + 0x38;
  if (*(undefined8 **)(param_2 + 0x78) < puVar4) {
    FUN_140023dd8((longlong *)(param_2 + 0x70));
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar4 = puVar5 + 0x38;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar4;
  *puVar5 = &PTR_FUN_14beacbf8;
  puVar4 = puVar5 + 2;
  puVar5[2] = 0;
  *(undefined1 *)(puVar5 + 3) = 1;
  puVar5[4] = 0;
  *(undefined1 *)(puVar5 + 5) = 1;
  memset(puVar5 + 6,0,0x188);
  iVar3 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar3 + 1U) {
    FUN_1448cfae8(param_2 + 0x98,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar3 * 8) = puVar5;
  FUN_1498291d8(param_2,param_3,param_4,puVar4);
  FUN_145aa6372();
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  FUN_1448f70da(CONCAT44(uStack_54,local_58),&DAT_14cc2c950,puVar4,&local_88);
  uStack_78 = uStack_50;
  uStack_74 = uStack_4c;
  local_68 = local_90;
  local_88 = puVar4;
  local_70 = uVar1;
  local_6c = uVar2;
  FUN_145aa6372();
  FUN_14983243a(param_2,&local_89,puVar4,&local_88);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144662cca FUN_144662cca body=492 status=ok
// SIG undefined FUN_144662cca(void)

void FUN_144662cca(longlong param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *_Dst;
  undefined1 *_Src;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,&local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar2) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar2;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = &local_b8;
    if ((undefined8 *)CONCAT44(uStack_ac,local_b0) != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)CONCAT44(uStack_ac,local_b0);
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    _Dst = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      _Dst = puVar3 + 2;
    }
    memcpy(_Dst,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    _Src = local_60;
    if (local_60 == (undefined1 *)0x0) {
      _Src = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar2 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar2 = puVar3 + 5;
    }
    memcpy(puVar2,_Src,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (CONCAT44(uStack_ac,local_b0) != 0) {
    FUN_1400020a8();
  }
  local_b0 = *(undefined4 *)(param_1 + 0x1d8);
  local_b8 = *(undefined8 *)(param_1 + 0x1d0);
  uVar1 = *(undefined8 *)(param_1 + 0x1b8);
  FUN_145aa6372();
  FUN_1498325e0(param_2,param_1 + 0x1c0,uVar1,&local_b8);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144662eb7 FUN_144662eb7 body=229 status=ok
// SIG undefined FUN_144662eb7(void)

void FUN_144662eb7(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14cc2c950,param_3);
  return;
}



// FUNCTION 144662f9c FUN_144662f9c body=81 status=ok
// SIG undefined FUN_144662f9c(void)

void FUN_144662f9c(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_149832678(param_1,param_2,lVar1);
  return;
}



// FUNCTION 144662fee FUN_144662fee body=424 status=ok
// SIG undefined FUN_144662fee(void)

void FUN_144662fee(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined1 local_89;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14983295e(&local_58,
                *(undefined8 *)
                 (&DAT_14ca8c1f0 +
                 (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x59e44c) * 2)
                 * 8),param_1 + 0x10);
  local_90 = *(undefined4 *)(param_4 + 0x8ef8);
  uVar1 = *(undefined4 *)(param_4 + 0x8ef0);
  uVar2 = *(undefined4 *)(param_4 + 0x8ef4);
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar4 = puVar5 + 0x38;
  if (*(undefined8 **)(param_2 + 0x78) < puVar4) {
    FUN_140023dd8((longlong *)(param_2 + 0x70));
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar4 = puVar5 + 0x38;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar4;
  *puVar5 = &PTR_FUN_14beacbf8;
  puVar4 = puVar5 + 2;
  puVar5[2] = 0;
  *(undefined1 *)(puVar5 + 3) = 1;
  puVar5[4] = 0;
  *(undefined1 *)(puVar5 + 5) = 1;
  memset(puVar5 + 6,0,0x188);
  iVar3 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar3 + 1U) {
    FUN_1448cfae8(param_2 + 0x98,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar3 * 8) = puVar5;
  FUN_1498291d8(param_2,param_3,param_4,puVar4);
  FUN_145aa6372();
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  FUN_1448f70da(CONCAT44(uStack_54,local_58),&DAT_14cc2c950,puVar4,&local_88);
  uStack_78 = uStack_50;
  uStack_74 = uStack_4c;
  local_68 = local_90;
  local_88 = puVar4;
  local_70 = uVar1;
  local_6c = uVar2;
  FUN_145aa6372();
  FUN_1498329e0(param_2,&local_89,puVar4,&local_88);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144663198 FUN_144663198 body=492 status=ok
// SIG undefined FUN_144663198(void)

void FUN_144663198(longlong param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *_Dst;
  undefined1 *_Src;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,&local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar2) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar2;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = &local_b8;
    if ((undefined8 *)CONCAT44(uStack_ac,local_b0) != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)CONCAT44(uStack_ac,local_b0);
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    _Dst = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      _Dst = puVar3 + 2;
    }
    memcpy(_Dst,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    _Src = local_60;
    if (local_60 == (undefined1 *)0x0) {
      _Src = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar2 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar2 = puVar3 + 5;
    }
    memcpy(puVar2,_Src,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (CONCAT44(uStack_ac,local_b0) != 0) {
    FUN_1400020a8();
  }
  local_b0 = *(undefined4 *)(param_1 + 0x1d8);
  local_b8 = *(undefined8 *)(param_1 + 0x1d0);
  uVar1 = *(undefined8 *)(param_1 + 0x1b8);
  FUN_145aa6372();
  FUN_149832b86(param_2,param_1 + 0x1c0,uVar1,&local_b8);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144663385 FUN_144663385 body=229 status=ok
// SIG undefined FUN_144663385(void)

void FUN_144663385(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14cc2c950,param_3);
  return;
}



// FUNCTION 14466346a FUN_14466346a body=81 status=ok
// SIG undefined FUN_14466346a(void)

void FUN_14466346a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_149832c1e(param_1,param_2,lVar1);
  return;
}



// FUNCTION 1446634bc FUN_1446634bc body=424 status=ok
// SIG undefined FUN_1446634bc(void)

void FUN_1446634bc(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined1 local_89;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_149832eec(&local_58,
                *(undefined8 *)
                 (&DAT_14ca8c1f0 +
                 (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x59e44c) * 2)
                 * 8),param_1 + 0x10);
  local_90 = *(undefined4 *)(param_4 + 0x8ef8);
  uVar1 = *(undefined4 *)(param_4 + 0x8ef0);
  uVar2 = *(undefined4 *)(param_4 + 0x8ef4);
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar4 = puVar5 + 0x38;
  if (*(undefined8 **)(param_2 + 0x78) < puVar4) {
    FUN_140023dd8((longlong *)(param_2 + 0x70));
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar4 = puVar5 + 0x38;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar4;
  *puVar5 = &PTR_FUN_14beacbf8;
  puVar4 = puVar5 + 2;
  puVar5[2] = 0;
  *(undefined1 *)(puVar5 + 3) = 1;
  puVar5[4] = 0;
  *(undefined1 *)(puVar5 + 5) = 1;
  memset(puVar5 + 6,0,0x188);
  iVar3 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar3 + 1U) {
    FUN_1448cfae8(param_2 + 0x98,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar3 * 8) = puVar5;
  FUN_1498291d8(param_2,param_3,param_4,puVar4);
  FUN_145aa6372();
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  FUN_1448f70da(CONCAT44(uStack_54,local_58),&DAT_14cc2c950,puVar4,&local_88);
  uStack_78 = uStack_50;
  uStack_74 = uStack_4c;
  local_68 = local_90;
  local_88 = puVar4;
  local_70 = uVar1;
  local_6c = uVar2;
  FUN_145aa6372();
  FUN_149832f6e(param_2,&local_89,puVar4,&local_88);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144663666 FUN_144663666 body=492 status=ok
// SIG undefined FUN_144663666(void)

void FUN_144663666(longlong param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *_Dst;
  undefined1 *_Src;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,&local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar2) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar2;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = &local_b8;
    if ((undefined8 *)CONCAT44(uStack_ac,local_b0) != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)CONCAT44(uStack_ac,local_b0);
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    _Dst = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      _Dst = puVar3 + 2;
    }
    memcpy(_Dst,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    _Src = local_60;
    if (local_60 == (undefined1 *)0x0) {
      _Src = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar2 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar2 = puVar3 + 5;
    }
    memcpy(puVar2,_Src,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (CONCAT44(uStack_ac,local_b0) != 0) {
    FUN_1400020a8();
  }
  local_b0 = *(undefined4 *)(param_1 + 0x1d8);
  local_b8 = *(undefined8 *)(param_1 + 0x1d0);
  uVar1 = *(undefined8 *)(param_1 + 0x1b8);
  FUN_145aa6372();
  FUN_149833114(param_2,param_1 + 0x1c0,uVar1,&local_b8);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144663853 FUN_144663853 body=229 status=ok
// SIG undefined FUN_144663853(void)

void FUN_144663853(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14cc2c950,param_3);
  return;
}



// FUNCTION 144663938 FUN_144663938 body=81 status=ok
// SIG undefined FUN_144663938(void)

void FUN_144663938(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1498331ac(param_1,param_2,lVar1);
  return;
}



// FUNCTION 14466398a FUN_14466398a body=424 status=ok
// SIG undefined FUN_14466398a(void)

void FUN_14466398a(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined1 local_89;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_149833486(&local_58,
                *(undefined8 *)
                 (&DAT_14ca8c1f0 +
                 (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x59e44c) * 2)
                 * 8),param_1 + 0x10);
  local_90 = *(undefined4 *)(param_4 + 0x8ef8);
  uVar1 = *(undefined4 *)(param_4 + 0x8ef0);
  uVar2 = *(undefined4 *)(param_4 + 0x8ef4);
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar4 = puVar5 + 0x38;
  if (*(undefined8 **)(param_2 + 0x78) < puVar4) {
    FUN_140023dd8((longlong *)(param_2 + 0x70));
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar4 = puVar5 + 0x38;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar4;
  *puVar5 = &PTR_FUN_14beacbf8;
  puVar4 = puVar5 + 2;
  puVar5[2] = 0;
  *(undefined1 *)(puVar5 + 3) = 1;
  puVar5[4] = 0;
  *(undefined1 *)(puVar5 + 5) = 1;
  memset(puVar5 + 6,0,0x188);
  iVar3 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar3 + 1U) {
    FUN_1448cfae8(param_2 + 0x98,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar3 * 8) = puVar5;
  FUN_1498291d8(param_2,param_3,param_4,puVar4);
  FUN_145aa6372();
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  FUN_1448f70da(CONCAT44(uStack_54,local_58),&DAT_14cc2c950,puVar4,&local_88);
  uStack_78 = uStack_50;
  uStack_74 = uStack_4c;
  local_68 = local_90;
  local_88 = puVar4;
  local_70 = uVar1;
  local_6c = uVar2;
  FUN_145aa6372();
  FUN_149833508(param_2,&local_89,puVar4,&local_88);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144663b34 FUN_144663b34 body=492 status=ok
// SIG undefined FUN_144663b34(void)

void FUN_144663b34(longlong param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *_Dst;
  undefined1 *_Src;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,&local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar2) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar2;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = &local_b8;
    if ((undefined8 *)CONCAT44(uStack_ac,local_b0) != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)CONCAT44(uStack_ac,local_b0);
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    _Dst = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      _Dst = puVar3 + 2;
    }
    memcpy(_Dst,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    _Src = local_60;
    if (local_60 == (undefined1 *)0x0) {
      _Src = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar2 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar2 = puVar3 + 5;
    }
    memcpy(puVar2,_Src,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (CONCAT44(uStack_ac,local_b0) != 0) {
    FUN_1400020a8();
  }
  local_b0 = *(undefined4 *)(param_1 + 0x1d8);
  local_b8 = *(undefined8 *)(param_1 + 0x1d0);
  uVar1 = *(undefined8 *)(param_1 + 0x1b8);
  FUN_145aa6372();
  FUN_1498336ae(param_2,param_1 + 0x1c0,uVar1,&local_b8);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144663d21 FUN_144663d21 body=229 status=ok
// SIG undefined FUN_144663d21(void)

void FUN_144663d21(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14cc2c950,param_3);
  return;
}



// FUNCTION 144663e06 FUN_144663e06 body=81 status=ok
// SIG undefined FUN_144663e06(void)

void FUN_144663e06(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_149833746(param_1,param_2,lVar1);
  return;
}



// FUNCTION 144663e58 FUN_144663e58 body=424 status=ok
// SIG undefined FUN_144663e58(void)

void FUN_144663e58(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined1 local_89;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_149833a20(&local_58,
                *(undefined8 *)
                 (&DAT_14ca8c1f0 +
                 (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x59e44c) * 2)
                 * 8),param_1 + 0x10);
  local_90 = *(undefined4 *)(param_4 + 0x8ef8);
  uVar1 = *(undefined4 *)(param_4 + 0x8ef0);
  uVar2 = *(undefined4 *)(param_4 + 0x8ef4);
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar4 = puVar5 + 0x38;
  if (*(undefined8 **)(param_2 + 0x78) < puVar4) {
    FUN_140023dd8((longlong *)(param_2 + 0x70));
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar4 = puVar5 + 0x38;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar4;
  *puVar5 = &PTR_FUN_14beacbf8;
  puVar4 = puVar5 + 2;
  puVar5[2] = 0;
  *(undefined1 *)(puVar5 + 3) = 1;
  puVar5[4] = 0;
  *(undefined1 *)(puVar5 + 5) = 1;
  memset(puVar5 + 6,0,0x188);
  iVar3 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar3 + 1U) {
    FUN_1448cfae8(param_2 + 0x98,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar3 * 8) = puVar5;
  FUN_1498291d8(param_2,param_3,param_4,puVar4);
  FUN_145aa6372();
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  FUN_1448f70da(CONCAT44(uStack_54,local_58),&DAT_14cc2c950,puVar4,&local_88);
  uStack_78 = uStack_50;
  uStack_74 = uStack_4c;
  local_68 = local_90;
  local_88 = puVar4;
  local_70 = uVar1;
  local_6c = uVar2;
  FUN_145aa6372();
  FUN_149833aa2(param_2,&local_89,puVar4,&local_88);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144664002 FUN_144664002 body=492 status=ok
// SIG undefined FUN_144664002(void)

void FUN_144664002(longlong param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *_Dst;
  undefined1 *_Src;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,&local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar2) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar2;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = &local_b8;
    if ((undefined8 *)CONCAT44(uStack_ac,local_b0) != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)CONCAT44(uStack_ac,local_b0);
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    _Dst = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      _Dst = puVar3 + 2;
    }
    memcpy(_Dst,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    _Src = local_60;
    if (local_60 == (undefined1 *)0x0) {
      _Src = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar2 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar2 = puVar3 + 5;
    }
    memcpy(puVar2,_Src,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (CONCAT44(uStack_ac,local_b0) != 0) {
    FUN_1400020a8();
  }
  local_b0 = *(undefined4 *)(param_1 + 0x1d8);
  local_b8 = *(undefined8 *)(param_1 + 0x1d0);
  uVar1 = *(undefined8 *)(param_1 + 0x1b8);
  FUN_145aa6372();
  FUN_149833c48(param_2,param_1 + 0x1c0,uVar1,&local_b8);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446641ef FUN_1446641ef body=229 status=ok
// SIG undefined FUN_1446641ef(void)

void FUN_1446641ef(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14cc2c950,param_3);
  return;
}



// FUNCTION 1446642d4 FUN_1446642d4 body=81 status=ok
// SIG undefined FUN_1446642d4(void)

void FUN_1446642d4(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_149833ce0(param_1,param_2,lVar1);
  return;
}



// FUNCTION 144664326 FUN_144664326 body=424 status=ok
// SIG undefined FUN_144664326(void)

void FUN_144664326(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined1 local_89;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_149833fba(&local_58,
                *(undefined8 *)
                 (&DAT_14ca8c1f0 +
                 (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x59e44c) * 2)
                 * 8),param_1 + 0x10);
  local_90 = *(undefined4 *)(param_4 + 0x8ef8);
  uVar1 = *(undefined4 *)(param_4 + 0x8ef0);
  uVar2 = *(undefined4 *)(param_4 + 0x8ef4);
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar4 = puVar5 + 0x38;
  if (*(undefined8 **)(param_2 + 0x78) < puVar4) {
    FUN_140023dd8((longlong *)(param_2 + 0x70));
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar4 = puVar5 + 0x38;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar4;
  *puVar5 = &PTR_FUN_14beacbf8;
  puVar4 = puVar5 + 2;
  puVar5[2] = 0;
  *(undefined1 *)(puVar5 + 3) = 1;
  puVar5[4] = 0;
  *(undefined1 *)(puVar5 + 5) = 1;
  memset(puVar5 + 6,0,0x188);
  iVar3 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar3 + 1U) {
    FUN_1448cfae8(param_2 + 0x98,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar3 * 8) = puVar5;
  FUN_1498291d8(param_2,param_3,param_4,puVar4);
  FUN_145aa6372();
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  FUN_1448f70da(CONCAT44(uStack_54,local_58),&DAT_14cc2c950,puVar4,&local_88);
  uStack_78 = uStack_50;
  uStack_74 = uStack_4c;
  local_68 = local_90;
  local_88 = puVar4;
  local_70 = uVar1;
  local_6c = uVar2;
  FUN_145aa6372();
  FUN_14983403c(param_2,&local_89,puVar4,&local_88);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446644d0 FUN_1446644d0 body=492 status=ok
// SIG undefined FUN_1446644d0(void)

void FUN_1446644d0(longlong param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *_Dst;
  undefined1 *_Src;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,&local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar2) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar2;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = &local_b8;
    if ((undefined8 *)CONCAT44(uStack_ac,local_b0) != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)CONCAT44(uStack_ac,local_b0);
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    _Dst = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      _Dst = puVar3 + 2;
    }
    memcpy(_Dst,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    _Src = local_60;
    if (local_60 == (undefined1 *)0x0) {
      _Src = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar2 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar2 = puVar3 + 5;
    }
    memcpy(puVar2,_Src,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (CONCAT44(uStack_ac,local_b0) != 0) {
    FUN_1400020a8();
  }
  local_b0 = *(undefined4 *)(param_1 + 0x1d8);
  local_b8 = *(undefined8 *)(param_1 + 0x1d0);
  uVar1 = *(undefined8 *)(param_1 + 0x1b8);
  FUN_145aa6372();
  FUN_1498341e2(param_2,param_1 + 0x1c0,uVar1,&local_b8);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446646bd FUN_1446646bd body=229 status=ok
// SIG undefined FUN_1446646bd(void)

void FUN_1446646bd(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14cc2c950,param_3);
  return;
}



// FUNCTION 1446647a2 FUN_1446647a2 body=81 status=ok
// SIG undefined FUN_1446647a2(void)

void FUN_1446647a2(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_14983427a(param_1,param_2,lVar1);
  return;
}



// FUNCTION 1446647f4 FUN_1446647f4 body=424 status=ok
// SIG undefined FUN_1446647f4(void)

void FUN_1446647f4(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined1 local_89;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_149834548(&local_58,
                *(undefined8 *)
                 (&DAT_14ca8c1f0 +
                 (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x59e44c) * 2)
                 * 8),param_1 + 0x10);
  local_90 = *(undefined4 *)(param_4 + 0x8ef8);
  uVar1 = *(undefined4 *)(param_4 + 0x8ef0);
  uVar2 = *(undefined4 *)(param_4 + 0x8ef4);
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar4 = puVar5 + 0x38;
  if (*(undefined8 **)(param_2 + 0x78) < puVar4) {
    FUN_140023dd8((longlong *)(param_2 + 0x70));
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar4 = puVar5 + 0x38;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar4;
  *puVar5 = &PTR_FUN_14beacbf8;
  puVar4 = puVar5 + 2;
  puVar5[2] = 0;
  *(undefined1 *)(puVar5 + 3) = 1;
  puVar5[4] = 0;
  *(undefined1 *)(puVar5 + 5) = 1;
  memset(puVar5 + 6,0,0x188);
  iVar3 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar3 + 1U) {
    FUN_1448cfae8(param_2 + 0x98,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar3 * 8) = puVar5;
  FUN_1498291d8(param_2,param_3,param_4,puVar4);
  FUN_145aa6372();
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  FUN_1448f70da(CONCAT44(uStack_54,local_58),&DAT_14cc2c950,puVar4,&local_88);
  uStack_78 = uStack_50;
  uStack_74 = uStack_4c;
  local_68 = local_90;
  local_88 = puVar4;
  local_70 = uVar1;
  local_6c = uVar2;
  FUN_145aa6372();
  FUN_1498345ca(param_2,&local_89,puVar4,&local_88);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14466499e FUN_14466499e body=492 status=ok
// SIG undefined FUN_14466499e(void)

void FUN_14466499e(longlong param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *_Dst;
  undefined1 *_Src;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,&local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar2) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar2;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = &local_b8;
    if ((undefined8 *)CONCAT44(uStack_ac,local_b0) != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)CONCAT44(uStack_ac,local_b0);
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    _Dst = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      _Dst = puVar3 + 2;
    }
    memcpy(_Dst,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    _Src = local_60;
    if (local_60 == (undefined1 *)0x0) {
      _Src = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar2 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar2 = puVar3 + 5;
    }
    memcpy(puVar2,_Src,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (CONCAT44(uStack_ac,local_b0) != 0) {
    FUN_1400020a8();
  }
  local_b0 = *(undefined4 *)(param_1 + 0x1d8);
  local_b8 = *(undefined8 *)(param_1 + 0x1d0);
  uVar1 = *(undefined8 *)(param_1 + 0x1b8);
  FUN_145aa6372();
  FUN_149834770(param_2,param_1 + 0x1c0,uVar1,&local_b8);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144664b8b FUN_144664b8b body=229 status=ok
// SIG undefined FUN_144664b8b(void)

void FUN_144664b8b(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14cc2c950,param_3);
  return;
}



// FUNCTION 144664c70 FUN_144664c70 body=81 status=ok
// SIG undefined FUN_144664c70(void)

void FUN_144664c70(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_149834808(param_1,param_2,lVar1);
  return;
}



// FUNCTION 144664cc2 FUN_144664cc2 body=478 status=ok
// SIG undefined FUN_144664cc2(void)

void FUN_144664cc2(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined1 local_79;
  undefined8 *local_78;
  undefined8 *puStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar5 = *(undefined8 *)
           (&DAT_14ca8c1f0 +
           (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x59e44c) * 2) * 8);
  bVar1 = *(byte *)(param_1 + 0x10);
  bVar2 = *(byte *)(param_1 + 0x11);
  FUN_145c9d1ce();
  FUN_1448e935e(uVar5,&local_78,&DAT_14cc2be20,(uint)bVar1 + (uint)bVar2 * 2);
  FUN_145c9d1ce();
  puVar6 = local_78;
  local_88 = puStack_70;
  local_8c = *(undefined4 *)(param_4 + 0x8ef8);
  local_90 = *(undefined4 *)(param_4 + 0x8ef0);
  uVar3 = *(undefined4 *)(param_4 + 0x8ef4);
  puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar7 = puVar8 + 0x1a;
  if (*(undefined8 **)(param_2 + 0x78) < puVar7) {
    FUN_140023dd8((longlong *)(param_2 + 0x70));
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar7 = puVar8 + 0x1a;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar7;
  *puVar8 = &PTR_FUN_14bead2c0;
  puVar7 = puVar8 + 2;
  puVar8[2] = 0;
  *(undefined1 *)(puVar8 + 3) = 1;
  puVar8[4] = 0;
  *(undefined1 *)(puVar8 + 5) = 1;
  memset(puVar8 + 6,0,0xa0);
  iVar4 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar4 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar4 + 1U) {
    FUN_1448cfae8(param_2 + 0x98,iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar4 * 8) = puVar8;
  FUN_14982a79a(param_2,param_3,param_4,puVar7);
  FUN_145c9d2f2();
  local_78 = (undefined8 *)0x0;
  puStack_70 = (undefined8 *)0x0;
  FUN_1448f70da(puVar6,&DAT_14cc2c9d8,puVar7,&local_78);
  puStack_70 = puVar6;
  local_68 = local_88;
  local_60 = local_90;
  local_58 = local_8c;
  local_78 = puVar7;
  local_5c = uVar3;
  FUN_145c9d2f2();
  FUN_149834aa8(param_2,&local_79,puVar7,&local_78);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144664ea2 FUN_144664ea2 body=492 status=ok
// SIG undefined FUN_144664ea2(void)

void FUN_144664ea2(longlong param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *_Dst;
  undefined1 *_Src;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,&local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar2) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar2;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = &local_b8;
    if ((undefined8 *)CONCAT44(uStack_ac,local_b0) != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)CONCAT44(uStack_ac,local_b0);
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    _Dst = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      _Dst = puVar3 + 2;
    }
    memcpy(_Dst,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    _Src = local_60;
    if (local_60 == (undefined1 *)0x0) {
      _Src = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar2 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar2 = puVar3 + 5;
    }
    memcpy(puVar2,_Src,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (CONCAT44(uStack_ac,local_b0) != 0) {
    FUN_1400020a8();
  }
  local_b0 = *(undefined4 *)(param_1 + 0x1d8);
  local_b8 = *(undefined8 *)(param_1 + 0x1d0);
  uVar1 = *(undefined8 *)(param_1 + 0x1b8);
  FUN_145c9d2f2();
  FUN_149834c4e(param_2,param_1 + 0x1c0,uVar1,&local_b8);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14466508f FUN_14466508f body=229 status=ok
// SIG undefined FUN_14466508f(void)

void FUN_14466508f(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14cc2c9d8,param_3);
  return;
}



// FUNCTION 144665174 FUN_144665174 body=81 status=ok
// SIG undefined FUN_144665174(void)

void FUN_144665174(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_149834ce6(param_1,param_2,lVar1);
  return;
}



// FUNCTION 1446651c6 FUN_1446651c6 body=478 status=ok
// SIG undefined FUN_1446651c6(void)

void FUN_1446651c6(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined1 local_79;
  undefined8 *local_78;
  undefined8 *puStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar5 = *(undefined8 *)
           (&DAT_14ca8c1f0 +
           (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x59e44c) * 2) * 8);
  bVar1 = *(byte *)(param_1 + 0x10);
  bVar2 = *(byte *)(param_1 + 0x11);
  FUN_14609a47c();
  FUN_1448e935e(uVar5,&local_78,&DAT_14cc2bf48,(uint)bVar1 + (uint)bVar2 * 2);
  FUN_14609a47c();
  puVar6 = local_78;
  local_88 = puStack_70;
  local_8c = *(undefined4 *)(param_4 + 0x8ef8);
  local_90 = *(undefined4 *)(param_4 + 0x8ef0);
  uVar3 = *(undefined4 *)(param_4 + 0x8ef4);
  puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar7 = puVar8 + 0x1a;
  if (*(undefined8 **)(param_2 + 0x78) < puVar7) {
    FUN_140023dd8((longlong *)(param_2 + 0x70));
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar7 = puVar8 + 0x1a;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar7;
  *puVar8 = &PTR_FUN_14bead2c0;
  puVar7 = puVar8 + 2;
  puVar8[2] = 0;
  *(undefined1 *)(puVar8 + 3) = 1;
  puVar8[4] = 0;
  *(undefined1 *)(puVar8 + 5) = 1;
  memset(puVar8 + 6,0,0xa0);
  iVar4 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar4 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar4 + 1U) {
    FUN_1448cfae8(param_2 + 0x98,iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar4 * 8) = puVar8;
  FUN_14982a79a(param_2,param_3,param_4,puVar7);
  FUN_145c9d2f2();
  local_78 = (undefined8 *)0x0;
  puStack_70 = (undefined8 *)0x0;
  FUN_1448f70da(puVar6,&DAT_14cc2c9d8,puVar7,&local_78);
  puStack_70 = puVar6;
  local_68 = local_88;
  local_60 = local_90;
  local_58 = local_8c;
  local_78 = puVar7;
  local_5c = uVar3;
  FUN_145c9d2f2();
  FUN_149834fc0(param_2,&local_79,puVar7,&local_78);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446653a6 FUN_1446653a6 body=492 status=ok
// SIG undefined FUN_1446653a6(void)

void FUN_1446653a6(longlong param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *_Dst;
  undefined1 *_Src;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,&local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar2) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar2;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = &local_b8;
    if ((undefined8 *)CONCAT44(uStack_ac,local_b0) != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)CONCAT44(uStack_ac,local_b0);
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    _Dst = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      _Dst = puVar3 + 2;
    }
    memcpy(_Dst,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    _Src = local_60;
    if (local_60 == (undefined1 *)0x0) {
      _Src = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar2 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar2 = puVar3 + 5;
    }
    memcpy(puVar2,_Src,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (CONCAT44(uStack_ac,local_b0) != 0) {
    FUN_1400020a8();
  }
  local_b0 = *(undefined4 *)(param_1 + 0x1d8);
  local_b8 = *(undefined8 *)(param_1 + 0x1d0);
  uVar1 = *(undefined8 *)(param_1 + 0x1b8);
  FUN_145c9d2f2();
  FUN_149835166(param_2,param_1 + 0x1c0,uVar1,&local_b8);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144665593 FUN_144665593 body=229 status=ok
// SIG undefined FUN_144665593(void)

void FUN_144665593(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14cc2c9d8,param_3);
  return;
}



// FUNCTION 144665678 FUN_144665678 body=81 status=ok
// SIG undefined FUN_144665678(void)

void FUN_144665678(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1498351fe(param_1,param_2,lVar1);
  return;
}



// FUNCTION 1446656ca FUN_1446656ca body=478 status=ok
// SIG undefined FUN_1446656ca(void)

void FUN_1446656ca(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined1 local_79;
  undefined8 *local_78;
  undefined8 *puStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar5 = *(undefined8 *)
           (&DAT_14ca8c1f0 +
           (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x59e44c) * 2) * 8);
  bVar1 = *(byte *)(param_1 + 0x10);
  bVar2 = *(byte *)(param_1 + 0x11);
  FUN_14609a6ea();
  FUN_1448e935e(uVar5,&local_78,&DAT_14cc2c070,(uint)bVar1 + (uint)bVar2 * 2);
  FUN_14609a6ea();
  puVar6 = local_78;
  local_88 = puStack_70;
  local_8c = *(undefined4 *)(param_4 + 0x8ef8);
  local_90 = *(undefined4 *)(param_4 + 0x8ef0);
  uVar3 = *(undefined4 *)(param_4 + 0x8ef4);
  puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar7 = puVar8 + 0x1a;
  if (*(undefined8 **)(param_2 + 0x78) < puVar7) {
    FUN_140023dd8((longlong *)(param_2 + 0x70));
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar7 = puVar8 + 0x1a;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar7;
  *puVar8 = &PTR_FUN_14bead2c0;
  puVar7 = puVar8 + 2;
  puVar8[2] = 0;
  *(undefined1 *)(puVar8 + 3) = 1;
  puVar8[4] = 0;
  *(undefined1 *)(puVar8 + 5) = 1;
  memset(puVar8 + 6,0,0xa0);
  iVar4 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar4 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar4 + 1U) {
    FUN_1448cfae8(param_2 + 0x98,iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar4 * 8) = puVar8;
  FUN_14982a79a(param_2,param_3,param_4,puVar7);
  FUN_145c9d2f2();
  local_78 = (undefined8 *)0x0;
  puStack_70 = (undefined8 *)0x0;
  FUN_1448f70da(puVar6,&DAT_14cc2c9d8,puVar7,&local_78);
  puStack_70 = puVar6;
  local_68 = local_88;
  local_60 = local_90;
  local_58 = local_8c;
  local_78 = puVar7;
  local_5c = uVar3;
  FUN_145c9d2f2();
  FUN_149835474(param_2,&local_79,puVar7,&local_78);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446658aa FUN_1446658aa body=492 status=ok
// SIG undefined FUN_1446658aa(void)

void FUN_1446658aa(longlong param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *_Dst;
  undefined1 *_Src;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,&local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar2) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar2;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = &local_b8;
    if ((undefined8 *)CONCAT44(uStack_ac,local_b0) != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)CONCAT44(uStack_ac,local_b0);
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    _Dst = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      _Dst = puVar3 + 2;
    }
    memcpy(_Dst,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    _Src = local_60;
    if (local_60 == (undefined1 *)0x0) {
      _Src = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar2 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar2 = puVar3 + 5;
    }
    memcpy(puVar2,_Src,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (CONCAT44(uStack_ac,local_b0) != 0) {
    FUN_1400020a8();
  }
  local_b0 = *(undefined4 *)(param_1 + 0x1d8);
  local_b8 = *(undefined8 *)(param_1 + 0x1d0);
  uVar1 = *(undefined8 *)(param_1 + 0x1b8);
  FUN_145c9d2f2();
  FUN_14983561a(param_2,param_1 + 0x1c0,uVar1,&local_b8);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144665a97 FUN_144665a97 body=229 status=ok
// SIG undefined FUN_144665a97(void)

void FUN_144665a97(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14cc2c9d8,param_3);
  return;
}



// FUNCTION 144665b7c FUN_144665b7c body=81 status=ok
// SIG undefined FUN_144665b7c(void)

void FUN_144665b7c(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1498356b2(param_1,param_2,lVar1);
  return;
}



// FUNCTION 144665bce FUN_144665bce body=478 status=ok
// SIG undefined FUN_144665bce(void)

void FUN_144665bce(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined1 local_79;
  undefined8 *local_78;
  undefined8 *puStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar5 = *(undefined8 *)
           (&DAT_14ca8c1f0 +
           (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x59e44c) * 2) * 8);
  bVar1 = *(byte *)(param_1 + 0x10);
  bVar2 = *(byte *)(param_1 + 0x11);
  FUN_14609a958();
  FUN_1448e935e(uVar5,&local_78,&DAT_14cc2c198,(uint)bVar1 + (uint)bVar2 * 2);
  FUN_14609a958();
  puVar6 = local_78;
  local_88 = puStack_70;
  local_8c = *(undefined4 *)(param_4 + 0x8ef8);
  local_90 = *(undefined4 *)(param_4 + 0x8ef0);
  uVar3 = *(undefined4 *)(param_4 + 0x8ef4);
  puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar7 = puVar8 + 0x1a;
  if (*(undefined8 **)(param_2 + 0x78) < puVar7) {
    FUN_140023dd8((longlong *)(param_2 + 0x70));
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar7 = puVar8 + 0x1a;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar7;
  *puVar8 = &PTR_FUN_14bead2c0;
  puVar7 = puVar8 + 2;
  puVar8[2] = 0;
  *(undefined1 *)(puVar8 + 3) = 1;
  puVar8[4] = 0;
  *(undefined1 *)(puVar8 + 5) = 1;
  memset(puVar8 + 6,0,0xa0);
  iVar4 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar4 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar4 + 1U) {
    FUN_1448cfae8(param_2 + 0x98,iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar4 * 8) = puVar8;
  FUN_14982a79a(param_2,param_3,param_4,puVar7);
  FUN_145c9d2f2();
  local_78 = (undefined8 *)0x0;
  puStack_70 = (undefined8 *)0x0;
  FUN_1448f70da(puVar6,&DAT_14cc2c9d8,puVar7,&local_78);
  puStack_70 = puVar6;
  local_68 = local_88;
  local_60 = local_90;
  local_58 = local_8c;
  local_78 = puVar7;
  local_5c = uVar3;
  FUN_145c9d2f2();
  FUN_149835970(param_2,&local_79,puVar7,&local_78);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144665dae FUN_144665dae body=492 status=ok
// SIG undefined FUN_144665dae(void)

void FUN_144665dae(longlong param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *_Dst;
  undefined1 *_Src;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,&local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar2) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar2;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = &local_b8;
    if ((undefined8 *)CONCAT44(uStack_ac,local_b0) != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)CONCAT44(uStack_ac,local_b0);
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    _Dst = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      _Dst = puVar3 + 2;
    }
    memcpy(_Dst,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    _Src = local_60;
    if (local_60 == (undefined1 *)0x0) {
      _Src = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar2 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar2 = puVar3 + 5;
    }
    memcpy(puVar2,_Src,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (CONCAT44(uStack_ac,local_b0) != 0) {
    FUN_1400020a8();
  }
  local_b0 = *(undefined4 *)(param_1 + 0x1d8);
  local_b8 = *(undefined8 *)(param_1 + 0x1d0);
  uVar1 = *(undefined8 *)(param_1 + 0x1b8);
  FUN_145c9d2f2();
  FUN_149835b16(param_2,param_1 + 0x1c0,uVar1,&local_b8);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144665f9b FUN_144665f9b body=229 status=ok
// SIG undefined FUN_144665f9b(void)

void FUN_144665f9b(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14cc2c9d8,param_3);
  return;
}



// FUNCTION 144666080 FUN_144666080 body=81 status=ok
// SIG undefined FUN_144666080(void)

void FUN_144666080(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_149835bae(param_1,param_2,lVar1);
  return;
}



// FUNCTION 1446660d2 FUN_1446660d2 body=478 status=ok
// SIG undefined FUN_1446660d2(void)

void FUN_1446660d2(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined1 local_79;
  undefined8 *local_78;
  undefined8 *puStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar5 = *(undefined8 *)
           (&DAT_14ca8c1f0 +
           (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x59e44c) * 2) * 8);
  bVar1 = *(byte *)(param_1 + 0x10);
  bVar2 = *(byte *)(param_1 + 0x11);
  FUN_14609abc6();
  FUN_1448e935e(uVar5,&local_78,&DAT_14cc2c2c0,(uint)bVar1 + (uint)bVar2 * 2);
  FUN_14609abc6();
  puVar6 = local_78;
  local_88 = puStack_70;
  local_8c = *(undefined4 *)(param_4 + 0x8ef8);
  local_90 = *(undefined4 *)(param_4 + 0x8ef0);
  uVar3 = *(undefined4 *)(param_4 + 0x8ef4);
  puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar7 = puVar8 + 0x1a;
  if (*(undefined8 **)(param_2 + 0x78) < puVar7) {
    FUN_140023dd8((longlong *)(param_2 + 0x70));
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar7 = puVar8 + 0x1a;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar7;
  *puVar8 = &PTR_FUN_14bead2c0;
  puVar7 = puVar8 + 2;
  puVar8[2] = 0;
  *(undefined1 *)(puVar8 + 3) = 1;
  puVar8[4] = 0;
  *(undefined1 *)(puVar8 + 5) = 1;
  memset(puVar8 + 6,0,0xa0);
  iVar4 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar4 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar4 + 1U) {
    FUN_1448cfae8(param_2 + 0x98,iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar4 * 8) = puVar8;
  FUN_14982a79a(param_2,param_3,param_4,puVar7);
  FUN_145c9d2f2();
  local_78 = (undefined8 *)0x0;
  puStack_70 = (undefined8 *)0x0;
  FUN_1448f70da(puVar6,&DAT_14cc2c9d8,puVar7,&local_78);
  puStack_70 = puVar6;
  local_68 = local_88;
  local_60 = local_90;
  local_58 = local_8c;
  local_78 = puVar7;
  local_5c = uVar3;
  FUN_145c9d2f2();
  FUN_149835e6c(param_2,&local_79,puVar7,&local_78);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446662b2 FUN_1446662b2 body=492 status=ok
// SIG undefined FUN_1446662b2(void)

void FUN_1446662b2(longlong param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *_Dst;
  undefined1 *_Src;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,&local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar2) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar2;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = &local_b8;
    if ((undefined8 *)CONCAT44(uStack_ac,local_b0) != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)CONCAT44(uStack_ac,local_b0);
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    _Dst = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      _Dst = puVar3 + 2;
    }
    memcpy(_Dst,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    _Src = local_60;
    if (local_60 == (undefined1 *)0x0) {
      _Src = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar2 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar2 = puVar3 + 5;
    }
    memcpy(puVar2,_Src,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (CONCAT44(uStack_ac,local_b0) != 0) {
    FUN_1400020a8();
  }
  local_b0 = *(undefined4 *)(param_1 + 0x1d8);
  local_b8 = *(undefined8 *)(param_1 + 0x1d0);
  uVar1 = *(undefined8 *)(param_1 + 0x1b8);
  FUN_145c9d2f2();
  FUN_149836012(param_2,param_1 + 0x1c0,uVar1,&local_b8);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14466649f FUN_14466649f body=229 status=ok
// SIG undefined FUN_14466649f(void)

void FUN_14466649f(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14cc2c9d8,param_3);
  return;
}



// FUNCTION 144666584 FUN_144666584 body=81 status=ok
// SIG undefined FUN_144666584(void)

void FUN_144666584(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1498360aa(param_1,param_2,lVar1);
  return;
}



// FUNCTION 1446665d6 FUN_1446665d6 body=478 status=ok
// SIG undefined FUN_1446665d6(void)

void FUN_1446665d6(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined1 local_79;
  undefined8 *local_78;
  undefined8 *puStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar5 = *(undefined8 *)
           (&DAT_14ca8c1f0 +
           (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x59e44c) * 2) * 8);
  bVar1 = *(byte *)(param_1 + 0x10);
  bVar2 = *(byte *)(param_1 + 0x11);
  FUN_14609ae34();
  FUN_1448e935e(uVar5,&local_78,&DAT_14cc2c3e8,(uint)bVar1 + (uint)bVar2 * 2);
  FUN_14609ae34();
  puVar6 = local_78;
  local_88 = puStack_70;
  local_8c = *(undefined4 *)(param_4 + 0x8ef8);
  local_90 = *(undefined4 *)(param_4 + 0x8ef0);
  uVar3 = *(undefined4 *)(param_4 + 0x8ef4);
  puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar7 = puVar8 + 0x1a;
  if (*(undefined8 **)(param_2 + 0x78) < puVar7) {
    FUN_140023dd8((longlong *)(param_2 + 0x70));
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar7 = puVar8 + 0x1a;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar7;
  *puVar8 = &PTR_FUN_14bead2c0;
  puVar7 = puVar8 + 2;
  puVar8[2] = 0;
  *(undefined1 *)(puVar8 + 3) = 1;
  puVar8[4] = 0;
  *(undefined1 *)(puVar8 + 5) = 1;
  memset(puVar8 + 6,0,0xa0);
  iVar4 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar4 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar4 + 1U) {
    FUN_1448cfae8(param_2 + 0x98,iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar4 * 8) = puVar8;
  FUN_14982a79a(param_2,param_3,param_4,puVar7);
  FUN_145c9d2f2();
  local_78 = (undefined8 *)0x0;
  puStack_70 = (undefined8 *)0x0;
  FUN_1448f70da(puVar6,&DAT_14cc2c9d8,puVar7,&local_78);
  puStack_70 = puVar6;
  local_68 = local_88;
  local_60 = local_90;
  local_58 = local_8c;
  local_78 = puVar7;
  local_5c = uVar3;
  FUN_145c9d2f2();
  FUN_149836368(param_2,&local_79,puVar7,&local_78);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446667b6 FUN_1446667b6 body=492 status=ok
// SIG undefined FUN_1446667b6(void)

void FUN_1446667b6(longlong param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *_Dst;
  undefined1 *_Src;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,&local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar2) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar2;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = &local_b8;
    if ((undefined8 *)CONCAT44(uStack_ac,local_b0) != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)CONCAT44(uStack_ac,local_b0);
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    _Dst = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      _Dst = puVar3 + 2;
    }
    memcpy(_Dst,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    _Src = local_60;
    if (local_60 == (undefined1 *)0x0) {
      _Src = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar2 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar2 = puVar3 + 5;
    }
    memcpy(puVar2,_Src,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (CONCAT44(uStack_ac,local_b0) != 0) {
    FUN_1400020a8();
  }
  local_b0 = *(undefined4 *)(param_1 + 0x1d8);
  local_b8 = *(undefined8 *)(param_1 + 0x1d0);
  uVar1 = *(undefined8 *)(param_1 + 0x1b8);
  FUN_145c9d2f2();
  FUN_14983650e(param_2,param_1 + 0x1c0,uVar1,&local_b8);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446669a3 FUN_1446669a3 body=229 status=ok
// SIG undefined FUN_1446669a3(void)

void FUN_1446669a3(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14cc2c9d8,param_3);
  return;
}



// FUNCTION 144666a88 FUN_144666a88 body=81 status=ok
// SIG undefined FUN_144666a88(void)

void FUN_144666a88(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1498365a6(param_1,param_2,lVar1);
  return;
}



// FUNCTION 144666ada FUN_144666ada body=478 status=ok
// SIG undefined FUN_144666ada(void)

void FUN_144666ada(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined1 local_79;
  undefined8 *local_78;
  undefined8 *puStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar5 = *(undefined8 *)
           (&DAT_14ca8c1f0 +
           (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x59e44c) * 2) * 8);
  bVar1 = *(byte *)(param_1 + 0x10);
  bVar2 = *(byte *)(param_1 + 0x11);
  FUN_14609b0a2();
  FUN_1448e935e(uVar5,&local_78,&DAT_14cc2c510,(uint)bVar1 + (uint)bVar2 * 2);
  FUN_14609b0a2();
  puVar6 = local_78;
  local_88 = puStack_70;
  local_8c = *(undefined4 *)(param_4 + 0x8ef8);
  local_90 = *(undefined4 *)(param_4 + 0x8ef0);
  uVar3 = *(undefined4 *)(param_4 + 0x8ef4);
  puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar7 = puVar8 + 0x1a;
  if (*(undefined8 **)(param_2 + 0x78) < puVar7) {
    FUN_140023dd8((longlong *)(param_2 + 0x70));
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar7 = puVar8 + 0x1a;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar7;
  *puVar8 = &PTR_FUN_14bead2c0;
  puVar7 = puVar8 + 2;
  puVar8[2] = 0;
  *(undefined1 *)(puVar8 + 3) = 1;
  puVar8[4] = 0;
  *(undefined1 *)(puVar8 + 5) = 1;
  memset(puVar8 + 6,0,0xa0);
  iVar4 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar4 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar4 + 1U) {
    FUN_1448cfae8(param_2 + 0x98,iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar4 * 8) = puVar8;
  FUN_14982a79a(param_2,param_3,param_4,puVar7);
  FUN_145c9d2f2();
  local_78 = (undefined8 *)0x0;
  puStack_70 = (undefined8 *)0x0;
  FUN_1448f70da(puVar6,&DAT_14cc2c9d8,puVar7,&local_78);
  puStack_70 = puVar6;
  local_68 = local_88;
  local_60 = local_90;
  local_58 = local_8c;
  local_78 = puVar7;
  local_5c = uVar3;
  FUN_145c9d2f2();
  FUN_149836880(param_2,&local_79,puVar7,&local_78);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144666cba FUN_144666cba body=492 status=ok
// SIG undefined FUN_144666cba(void)

void FUN_144666cba(longlong param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *_Dst;
  undefined1 *_Src;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,&local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar2) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar2;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = &local_b8;
    if ((undefined8 *)CONCAT44(uStack_ac,local_b0) != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)CONCAT44(uStack_ac,local_b0);
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    _Dst = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      _Dst = puVar3 + 2;
    }
    memcpy(_Dst,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    _Src = local_60;
    if (local_60 == (undefined1 *)0x0) {
      _Src = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar2 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar2 = puVar3 + 5;
    }
    memcpy(puVar2,_Src,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (CONCAT44(uStack_ac,local_b0) != 0) {
    FUN_1400020a8();
  }
  local_b0 = *(undefined4 *)(param_1 + 0x1d8);
  local_b8 = *(undefined8 *)(param_1 + 0x1d0);
  uVar1 = *(undefined8 *)(param_1 + 0x1b8);
  FUN_145c9d2f2();
  FUN_149836a26(param_2,param_1 + 0x1c0,uVar1,&local_b8);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144666ea7 FUN_144666ea7 body=229 status=ok
// SIG undefined FUN_144666ea7(void)

void FUN_144666ea7(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14cc2c9d8,param_3);
  return;
}



// FUNCTION 144666f8c FUN_144666f8c body=81 status=ok
// SIG undefined FUN_144666f8c(void)

void FUN_144666f8c(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_149836abe(param_1,param_2,lVar1);
  return;
}



// FUNCTION 144666fdd FUN_144666fdd body=1102 status=ok
// SIG undefined FUN_144666fdd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144666fdd(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [32];
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400b22c2(&local_38,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_38,&DAT_14cc2abf8);
  if (cVar1 == '\0') {
    _DAT_14cc2abf8 = 0;
    uRam000000014cc2ac00 = 0;
  }
  if (local_38 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  local_30 = FUN_145f3bfe2;
  local_38 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cc2ad20,&local_38);
  local_30 = FUN_145e9eb64;
  local_38 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cc2ae48,&local_38);
  local_30 = FUN_145e1a002;
  local_38 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cc2af90,&local_38);
  local_38 = (undefined *)0x800000014bea2666;
  local_24 = 0x15;
  uVar2 = FUN_14577453c();
  local_30._0_5_ = CONCAT14(1,uVar2);
  FUN_146762ce6(&local_38);
  DAT_14cc2afa8 = 0;
  DAT_14cc2afb0 = 0;
  DAT_14cc2afb8 = 0;
  DAT_14cc2afc0 = 0;
  DAT_14cc2afc8 = 0;
  local_30 = FUN_1460989c2;
  local_38 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cc2b0e8,&local_38);
  local_30 = FUN_146098c30;
  local_38 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cc2b210,&local_38);
  local_30 = FUN_146098e9e;
  local_38 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cc2b338,&local_38);
  local_30 = FUN_14609910c;
  local_38 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cc2b460,&local_38);
  local_30 = FUN_14609937a;
  local_38 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cc2b588,&local_38);
  local_30 = FUN_1460995e8;
  local_38 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cc2b6b0,&local_38);
  local_30 = FUN_146099856;
  local_38 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cc2b7d8,&local_38);
  local_30 = FUN_146099ac4;
  local_38 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cc2b900,&local_38);
  local_30 = FUN_146099d32;
  local_38 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cc2ba28,&local_38);
  local_30 = FUN_146099fa0;
  local_38 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cc2bb50,&local_38);
  local_30 = FUN_14609a20e;
  local_38 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cc2bc78,&local_38);
  local_30 = FUN_145eee1c0;
  local_38 = &DAT_14152059c;
  FUN_14142a670(&DAT_14cc2bd10,&local_38);
  local_30 = FUN_145e0a182;
  local_38 = &DAT_14152059c;
  FUN_14142a670(&DAT_14cc2bda8,&local_38);
  FUN_145c5e0a4(0x12,FUN_149828ec2);
  local_30 = FUN_145c9d1ce;
  local_38 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cc2bed0,&local_38);
  local_30 = FUN_14609a47c;
  local_38 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cc2bff8,&local_38);
  local_30 = FUN_14609a6ea;
  local_38 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cc2c120,&local_38);
  local_30 = FUN_14609a958;
  local_38 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cc2c248,&local_38);
  local_30 = FUN_14609abc6;
  local_38 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cc2c370,&local_38);
  local_30 = FUN_14609ae34;
  local_38 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cc2c498,&local_38);
  local_30 = FUN_14609b0a2;
  local_38 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cc2c5c0,&local_38);
  local_30 = FUN_145e0a8bc;
  local_38 = &DAT_14152059c;
  FUN_14142a670(&DAT_14cc2c658,&local_38);
  local_30 = FUN_145e0a522;
  local_38 = &DAT_14152059c;
  FUN_14142a670(&DAT_14cc2c6f0,&local_38);
  FUN_145c5e0a4(0x13,FUN_14982a5b4);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14466742c FUN_14466742c body=1198 status=ok
// SIG undefined FUN_14466742c(void)

undefined4 FUN_14466742c(int param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_278 [32];
  longlong *local_258;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  undefined1 local_210 [8];
  undefined1 local_208 [8];
  undefined8 local_200;
  undefined8 local_1f8;
  longlong local_1f0 [2];
  undefined1 local_1e0 [24];
  longlong local_1c8 [2];
  wchar_t *local_1b8;
  int local_1b0;
  longlong local_1a8 [2];
  longlong local_198 [2];
  longlong local_188;
  int local_180;
  longlong local_178 [2];
  undefined8 local_168 [6];
  longlong local_138 [2];
  undefined8 local_128 [6];
  longlong local_f8 [2];
  undefined8 local_e8 [7];
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  longlong local_98;
  longlong local_88 [2];
  undefined8 local_78 [7];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_278;
  FUN_148abb9fc(param_3,&local_b0,&DAT_149e06196);
  FUN_148abbabc(&local_b0,&local_188);
  FUN_148abbb5a(&local_b0);
  FUN_148abb9fc(param_3,&local_b0,&DAT_149e06196);
  FUN_148abbabc(&local_b0,local_198);
  FUN_148abbb5a(&local_b0);
  FUN_148abb9fc(param_3,&local_b0,&DAT_149e06196);
  FUN_148abbabc(&local_b0,local_1a8);
  FUN_148abbb5a(&local_b0);
  FUN_148abb9fc(param_3,&local_b0,&DAT_149e06196);
  FUN_148abbabc(&local_b0,&local_1b8);
  FUN_148abbb5a(&local_b0);
  iVar7 = 0;
  if (1 < local_1b0) {
    iVar2 = _wtoi(local_1b8);
    iVar7 = 0;
    if (0 < iVar2) {
      iVar7 = iVar2;
    }
  }
  FUN_148abc2ba(param_3,&local_b0,iVar7);
  FUN_148abbabc(&local_b0,local_1c8);
  FUN_148abbb5a(&local_b0);
  FUN_148abb9fc(param_3,local_1e0,&DAT_149e06196);
  FUN_148abbb5a(local_1e0);
  FUN_148abbabc(param_3,local_1f0);
  local_1f8 = 0;
  local_200 = 0;
  local_88[0] = *param_4;
  local_78[0] = 0;
  if (local_88[0] != 0) {
    plVar5 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_4[2];
    }
    (**(code **)*plVar5)(plVar5,local_78);
  }
  FUN_14000bbd8(&local_b0,local_198,0);
  if (DAT_14c947fe0 == 0) {
    lVar4 = FUN_14494321d(0x140);
    FUN_1456b2032(lVar4);
    DAT_14c947fe0 = lVar4;
  }
  FUN_140045924(DAT_14c947fe0,local_208,&local_b0,1);
  iVar7 = local_180 + -1;
  if (local_180 == 0) {
    iVar7 = 0;
  }
  FUN_1446f82e2(local_210,iVar7,local_188,1);
  local_258 = local_88;
  cVar1 = FUN_149836c6f(local_210,local_208,&local_1f8,&local_200);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (cVar1 != '\0') {
    local_f8[0] = *param_4;
    local_e8[0] = 0;
    if (local_f8[0] != 0) {
      plVar5 = param_4 + 4;
      if ((longlong *)param_4[2] != (longlong *)0x0) {
        plVar5 = (longlong *)param_4[2];
      }
      (**(code **)*plVar5)(plVar5,local_e8);
    }
    local_258 = local_f8;
    FUN_143f5a31c(&local_b0,local_1a8,local_1f8,local_200);
    if (CONCAT44(uStack_a4,uStack_a8) != 0) {
      if (param_1 == 1) {
        local_178[0] = *param_4;
        local_168[0] = 0;
        if (local_178[0] != 0) {
          plVar5 = param_4 + 4;
          if ((longlong *)param_4[2] != (longlong *)0x0) {
            plVar5 = (longlong *)param_4[2];
          }
          (**(code **)*plVar5)(plVar5,local_168);
        }
        puVar6 = &local_248;
        local_238 = local_a0;
        local_248 = local_b0;
        uStack_244 = uStack_ac;
        uStack_240 = uStack_a8;
        uStack_23c = uStack_a4;
        plVar5 = local_1f0;
        plVar8 = local_1c8;
        plVar9 = local_178;
      }
      else {
        if (param_1 != 0) goto LAB_144667776;
        local_138[0] = *param_4;
        local_128[0] = 0;
        if (local_138[0] != 0) {
          plVar5 = param_4 + 4;
          if ((longlong *)param_4[2] != (longlong *)0x0) {
            plVar5 = (longlong *)param_4[2];
          }
          (**(code **)*plVar5)(plVar5,local_128);
        }
        puVar6 = &local_228;
        local_218 = local_a0;
        local_228 = local_b0;
        uStack_224 = uStack_ac;
        uStack_220 = uStack_a8;
        uStack_21c = uStack_a4;
        plVar5 = local_1c8;
        plVar8 = local_1f0;
        plVar9 = local_138;
      }
      uVar3 = FUN_143f59e72(puVar6,plVar5,plVar8,plVar9);
      goto LAB_144667778;
    }
  }
LAB_144667776:
  uVar3 = 0;
LAB_144667778:
  if (local_1f0[0] != 0) {
    FUN_1400020a8();
  }
  if (local_1c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_1b8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_1a8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_198[0] != 0) {
    FUN_1400020a8();
  }
  if (local_188 != 0) {
    FUN_1400020a8();
  }
  FUN_148abbb5a(param_3);
  if (*param_4 != 0) {
    plVar5 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if ((local_40 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446678db FUN_1446678db body=256 status=ok
// SIG undefined FUN_1446678db(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446678db(void)

{
  uint uVar1;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  char *local_30;
  undefined4 local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  DAT_14cc2cef8 = 1;
  local_30 = "mp";
  local_28 = 2;
  local_24 = 0;
  uVar1 = FUN_14001a6c0(&local_30,1);
  _DAT_14cc2cf00 = (ulonglong)uVar1;
  local_30 = "ShiftMicropatching";
  local_28 = 0x12;
  local_24 = 0;
  uVar1 = FUN_14001a6c0(&local_30,1);
  DAT_14cc2cf08 = (ulonglong)uVar1;
  local_30 = (char *)0x800000014bead6e8;
  local_34 = 0x10;
  local_28 = FUN_14577453c();
  local_24 = 1;
  FUN_1467635fa(&local_30);
  local_30 = "AssetRegistry";
  local_28 = 0xd;
  local_24 = 0;
  uVar1 = FUN_14001a6c0(&local_30,1);
  _DAT_14cc2cf18 = (ulonglong)uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144667ad0 FUN_144667ad0 body=36 status=ok
// SIG undefined FUN_144667ad0(void)

undefined8 FUN_144667ad0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 144667b40 FUN_144667b40 body=2045 status=ok
// SIG undefined FUN_144667b40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144667b40(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  char *local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  _DAT_14cc2cf20 = 0x47efffffe0000000;
  _DAT_14cc2cf28 = 0x47efffffe0000000;
  _DAT_14cc2cf30 = 0x47efffffe0000000;
  _DAT_14cc2cf38 = 0x47efffffe0000000;
  _DAT_14cc2cf40 = 0x47efffffe0000000;
  _DAT_14cc2cf48 = 0x47efffffe0000000;
  _DAT_14cc2cf50 = 0x47efffffe0000000;
  _DAT_14cc2cf58 = 0x47efffffe0000000;
  local_68 = "bone";
  local_60 = 4;
  local_5c = 0;
  FUN_14001a6c0(&local_68,1);
  local_68 = "AssetRegistry";
  local_60 = 0xd;
  local_5c = 0;
  uVar2 = FUN_14001a6c0(&local_68,1);
  _DAT_14cc2cf60 = (ulonglong)uVar2;
  local_68 = "Use";
  local_60 = 3;
  local_5c = 0;
  uVar2 = FUN_14001a6c0(&local_68,1);
  _DAT_14cc2cf68 = (ulonglong)uVar2;
  local_68 = "Sight";
  local_60 = 5;
  local_5c = 0;
  uVar2 = FUN_14001a6c0(&local_68,1);
  _DAT_14cc2cf70 = (ulonglong)uVar2;
  local_68 = "TargetLock";
  local_60 = 10;
  local_5c = 0;
  uVar2 = FUN_14001a6c0(&local_68,1);
  _DAT_14cc2cf78 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_68,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_68,&DAT_14cc2cf80);
  if (cVar1 == '\0') {
    _DAT_14cc2cf80 = 0;
    uRam000000014cc2cf88 = 0;
  }
  if (local_68 != (char *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cc2cf94 = 0;
  FUN_14052b5e0(&DAT_14cc2cf90,"PlayerAwareness",0);
  _DAT_14cc2cfa0 = "PlayerAwareness";
  local_68 = "basic";
  local_60 = 5;
  local_5c = 0;
  uVar2 = FUN_14001a6c0(&local_68,1);
  _DAT_14cc2cfa8 = (ulonglong)uVar2;
  local_68 = "challenge";
  local_60 = 9;
  local_5c = 0;
  uVar2 = FUN_14001a6c0(&local_68,1);
  _DAT_14cc2cfb0 = (ulonglong)uVar2;
  local_68 = "online";
  local_60 = 6;
  local_5c = 0;
  uVar2 = FUN_14001a6c0(&local_68,1);
  _DAT_14cc2cfb8 = (ulonglong)uVar2;
  local_68 = "social";
  local_60 = 6;
  local_5c = 0;
  uVar2 = FUN_14001a6c0(&local_68,1);
  _DAT_14cc2cfc0 = (ulonglong)uVar2;
  local_68 = "alert";
  local_60 = 5;
  local_5c = 0;
  uVar2 = FUN_14001a6c0(&local_68,1);
  _DAT_14cc2cfc8 = (ulonglong)uVar2;
  local_68 = "photo_mode";
  local_60 = 10;
  local_5c = 0;
  uVar2 = FUN_14001a6c0(&local_68,1);
  _DAT_14cc2cfd0 = (ulonglong)uVar2;
  local_68 = "generic_task";
  local_60 = 0xc;
  local_5c = 0;
  uVar2 = FUN_14001a6c0(&local_68,1);
  _DAT_14cc2cfd8 = (ulonglong)uVar2;
  local_68 = "mission";
  local_60 = 7;
  local_5c = 0;
  uVar2 = FUN_14001a6c0(&local_68,1);
  _DAT_14cc2cfe0 = (ulonglong)uVar2;
  local_68 = "mail";
  local_60 = 4;
  local_5c = 0;
  uVar2 = FUN_14001a6c0(&local_68,1);
  _DAT_14cc2cfe8 = (ulonglong)uVar2;
  local_68 = "respawn";
  local_60 = 7;
  local_5c = 0;
  uVar2 = FUN_14001a6c0(&local_68,1);
  _DAT_14cc2cff0 = (ulonglong)uVar2;
  local_68 = "tutorial";
  local_60 = 8;
  local_5c = 0;
  uVar2 = FUN_14001a6c0(&local_68,1);
  _DAT_14cc2cff8 = (ulonglong)uVar2;
  local_68 = "special_notification";
  local_60 = 0x14;
  local_5c = 0;
  uVar2 = FUN_14001a6c0(&local_68,1);
  _DAT_14cc2d000 = (ulonglong)uVar2;
  local_68 = "generic_notification";
  local_60 = 0x14;
  local_5c = 0;
  uVar2 = FUN_14001a6c0(&local_68,1);
  _DAT_14cc2d008 = (ulonglong)uVar2;
  local_68 = "vault_card";
  local_60 = 10;
  local_5c = 0;
  uVar2 = FUN_14001a6c0(&local_68,1);
  _DAT_14cc2d010 = (ulonglong)uVar2;
  local_68 = "ONLINE_MESSAGE";
  local_60 = 0xe;
  local_5c = 0;
  uVar2 = FUN_14001a6c0(&local_68,1);
  _DAT_14cc2d018 = (ulonglong)uVar2;
  local_68 = "INGAME_MESSAGE";
  local_60 = 0xe;
  local_5c = 0;
  uVar2 = FUN_14001a6c0(&local_68,1);
  _DAT_14cc2d020 = (ulonglong)uVar2;
  local_68 = "NOTIFICATION_MESSAGE";
  local_60 = 0x14;
  local_5c = 0;
  uVar2 = FUN_14001a6c0(&local_68,1);
  _DAT_14cc2d028 = (ulonglong)uVar2;
  local_68 = "MENU_TUTORIAL_MESSAGE";
  local_60 = 0x15;
  local_5c = 0;
  uVar2 = FUN_14001a6c0(&local_68,1);
  _DAT_14cc2d030 = (ulonglong)uVar2;
  local_68 = "collectible";
  local_60 = 0xb;
  local_5c = 0;
  uVar2 = FUN_14001a6c0(&local_68,1);
  _DAT_14cc2d038 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cc2d040,L"GoreStump_");
  atexit((_func_5014 *)&LAB_1446679dc);
  FUN_140056680(&DAT_14cc2d050,L"GoreLimb_");
  atexit((_func_5014 *)&LAB_1446679ed);
  FUN_140056680(&DAT_14cc2d060,L"GoreDecal_");
  atexit((_func_5014 *)&LAB_1446679fe);
  FUN_140056680(&DAT_14cc2d070,L"GoreFX_");
  atexit((_func_5014 *)&LAB_144667a0f);
  FUN_1446f470e(&DAT_14cc2d080,L"LIMB_GORED",1);
  _DAT_14cc2d088 = 0x4072c00000000000;
  _DAT_14cc2d090 = 0x4082c00000000000;
  FUN_1446f470e(&DAT_14cc2d098,L"body",1);
  FUN_1446f470e(&DAT_14cc2d0a0,L"title_card",1);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/WyvrnSDKPlugin",&PTR_FUN_14beae370,1,0);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/WyvrnSDKPlugin",&PTR_FUN_14beaea90,1,0);
  uStack_80 = 0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/WyvrnSDKPlugin",0,0,&PTR_FUN_14beaeca0);
  local_68 = "Cash";
  local_60 = 4;
  local_5c = 0;
  uVar2 = FUN_14001a6c0(&local_68,1);
  _DAT_14cc2d168 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cc2d170,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_144667a20);
  FUN_1446f470e(&DAT_14cc2d180,L"UNSET",1);
  local_68 = "init";
  local_60 = 4;
  local_5c = 0;
  FUN_14001a6c0(&local_68,1);
  local_68 = "update";
  local_60 = 6;
  local_5c = 0;
  FUN_14001a6c0(&local_68,1);
  local_68 = "config_update";
  local_60 = 0xd;
  local_5c = 0;
  FUN_14001a6c0(&local_68,1);
  local_68 = "deinit";
  local_60 = 6;
  local_5c = 0;
  FUN_14001a6c0(&local_68,1);
  FUN_1446f470e(&DAT_14cc2d188,L"Party",1);
  FUN_1446f470e(&DAT_14cc2d190,&DAT_149e063b2,1);
  local_68 = (char *)0x800000014beaf0fc;
  local_54 = 0xe;
  local_60 = FUN_14577453c();
  local_5c = 1;
  FUN_146763a76(&local_68);
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144668340 FUN_144668340 body=182 status=ok
// SIG undefined FUN_144668340(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144668340(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  _DAT_14cc2d2a8 = 0x47efffffe0000000;
  _DAT_14cc2d2b0 = 0x47efffffe0000000;
  _DAT_14cc2d2b8 = 0x47efffffe0000000;
  _DAT_14cc2d2c0 = 0x47efffffe0000000;
  _DAT_14cc2d2c8 = 0x47efffffe0000000;
  _DAT_14cc2d2d0 = 0x47efffffe0000000;
  _DAT_14cc2d2d8 = 0x47efffffe0000000;
  _DAT_14cc2d2e0 = 0x47efffffe0000000;
  _DAT_14cc2d2e8 = 0x47efffffe0000000;
  _DAT_14cc2d2f0 = 0x47efffffe0000000;
  local_28 = 0x800000014beaf9b0;
  local_14 = 0xf;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_146763eb8(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446683f8 FUN_1446683f8 body=55 status=ok
// SIG undefined FUN_1446683f8(void)

void FUN_1446683f8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2d310 == 0) {
    uVar1 = FUN_14190e5ad();
    DAT_14cc2d310 = FUN_14171c317(FUN_146763ffa,uVar1,L"ACLRotationFormat");
  }
  return;
}



// FUNCTION 14466842f FUN_14466842f body=55 status=ok
// SIG undefined FUN_14466842f(void)

void FUN_14466842f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2d328 == 0) {
    uVar1 = FUN_14190e5ad();
    DAT_14cc2d328 = FUN_14171c317(FUN_146764029,uVar1,L"ACLVectorFormat");
  }
  return;
}



// FUNCTION 144668466 FUN_144668466 body=55 status=ok
// SIG undefined FUN_144668466(void)

void FUN_144668466(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2d340 == 0) {
    uVar1 = FUN_14190e5ad();
    DAT_14cc2d340 = FUN_14171c317(FUN_146764058,uVar1,L"ACLCompressionLevel");
  }
  return;
}



// FUNCTION 1446684a1 FUN_1446684a1 body=55 status=ok
// SIG undefined FUN_1446684a1(void)

void FUN_1446684a1(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2d378 == 0) {
    uVar1 = FUN_14190e5ad();
    DAT_14cc2d378 = FUN_14171c317(FUN_146764149,uVar1,L"ACLVisualFidelity");
  }
  return;
}



// FUNCTION 1446684d8 FUN_1446684d8 body=55 status=ok
// SIG undefined FUN_1446684d8(void)

void FUN_1446684d8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2d390 == 0) {
    uVar1 = FUN_14190e5ad();
    DAT_14cc2d390 = FUN_14171c317(FUN_14676417a,uVar1,L"ACLVisualFidelityChangeResult");
  }
  return;
}



// FUNCTION 144668510 FUN_144668510 body=741 status=ok
// SIG undefined FUN_144668510(void)

int FUN_144668510(longlong param_1,char param_2,undefined1 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined ***pppuVar9;
  undefined1 uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_c8 [32];
  code **local_a8;
  undefined8 local_98;
  longlong *local_90;
  code *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar2 = (longlong *)(param_1 + 0x100);
  iVar4 = *(int *)(param_1 + 0x108);
  lVar13 = (longlong)iVar4;
  if (lVar13 == 0) {
    pcVar5 = (char *)(param_1 + 0xf8);
  }
  else {
    pcVar5 = (char *)(*plVar2 + (longlong)(iVar4 + -1) * 0x10 + 0xc);
  }
  cVar3 = *pcVar5;
  if (cVar3 == param_2) {
    iVar11 = -1;
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 1;
    }
    goto LAB_144668795;
  }
  iVar11 = *(int *)(param_1 + 0xfc);
  *(int *)(param_1 + 0xfc) = iVar11 + 1;
  if (cVar3 == '\x02') {
    if (param_2 == '\x01') {
LAB_144668641:
      *(int *)(param_1 + 0x108) = iVar4 + 1;
      uVar10 = 1;
      goto LAB_14466865d;
    }
    if (param_2 != '\0') goto LAB_1446686db;
    *(uint *)(param_1 + 0x108) = iVar4 + 1U;
    if (*(uint *)(param_1 + 0x10c) < iVar4 + 1U) {
      FUN_14983b65e(plVar2,iVar4);
    }
    lVar6 = *(longlong *)(param_1 + 0x100);
    lVar13 = lVar13 * 0x10;
    *(undefined8 *)(lVar6 + lVar13) = 0;
    *(int *)(lVar6 + 8 + lVar13) = iVar11;
    *(undefined2 *)(lVar6 + 0xc + lVar13) = 1;
    iVar12 = *(int *)(param_1 + 0x108);
    uVar8 = iVar12 + 1;
    *(uint *)(param_1 + 0x108) = uVar8;
    uVar10 = 0;
LAB_1446686b4:
    if (*(uint *)(param_1 + 0x10c) < uVar8) {
      FUN_14983b65e(plVar2,iVar12);
    }
    lVar13 = *plVar2;
    lVar6 = (longlong)iVar12 * 0x10;
    *(undefined1 **)(lVar13 + lVar6) = param_3;
    *(int *)(lVar13 + 8 + lVar6) = iVar11;
    *(undefined1 *)(lVar13 + 0xc + lVar6) = uVar10;
    *(undefined1 *)(lVar13 + 0xd + lVar6) = 0;
  }
  else {
    if (cVar3 == '\x01') {
      if (param_2 == '\x02') {
        *(int *)(param_1 + 0x108) = iVar4 + 1;
        uVar10 = 2;
      }
      else {
        if (param_2 != '\0') goto LAB_1446686db;
        *(int *)(param_1 + 0x108) = iVar4 + 1;
        uVar10 = 0;
      }
LAB_14466865d:
      uVar8 = iVar4 + 1;
      iVar12 = iVar4;
      goto LAB_1446686b4;
    }
    if (cVar3 == '\0') {
      if (param_2 == '\x02') {
        *(uint *)(param_1 + 0x108) = iVar4 + 1U;
        if (*(uint *)(param_1 + 0x10c) < iVar4 + 1U) {
          FUN_14983b65e(plVar2,iVar4);
        }
        lVar6 = *(longlong *)(param_1 + 0x100);
        lVar13 = lVar13 * 0x10;
        *(undefined8 *)(lVar6 + lVar13) = 0;
        *(int *)(lVar6 + 8 + lVar13) = iVar11;
        *(undefined2 *)(lVar6 + 0xc + lVar13) = 1;
        iVar12 = *(int *)(param_1 + 0x108);
        uVar8 = iVar12 + 1;
        *(uint *)(param_1 + 0x108) = uVar8;
        uVar10 = 2;
        goto LAB_1446686b4;
      }
      if (param_2 == '\x01') goto LAB_144668641;
    }
  }
LAB_1446686db:
  if (iVar4 == 0) {
    uVar7 = FUN_1401cb356();
    local_a8 = local_88;
    local_78 = (undefined ***)0x0;
    local_68 = &PTR_LAB_14beb21c0;
    local_88[0] = FUN_1446690de;
    local_60 = param_1;
    FUN_1401cbba4(uVar7,&local_98,L"ACLDBStreamOut",0);
    *(undefined8 *)(param_1 + 0x110) = local_98;
    local_98 = 0;
    plVar2 = *(longlong **)(param_1 + 0x118);
    *(longlong **)(param_1 + 0x118) = local_90;
    local_90 = (longlong *)0x0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
      if (local_90 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_90 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_90 + 0x10))();
        }
      }
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar9 = local_78;
      if (local_78 == (undefined ***)0x0) {
        pppuVar9 = &local_68;
      }
      (*(code *)(*pppuVar9)[2])();
    }
  }
LAB_144668795:
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar11;
}



// FUNCTION 1446687f6 FUN_1446687f6 body=160 status=ok
// SIG undefined FUN_1446687f6(void)

void FUN_1446687f6(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x10))(param_1,param_3);
  piVar1 = *(int **)param_3[1];
  if ((int *)((undefined8 *)param_3[1])[1] < piVar1 + 1) {
    local_24 = (uint)*(byte *)(param_1 + 2);
    (**(code **)(*param_3 + 0x170))(param_3,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_3);
    }
    *(bool *)(param_1 + 2) = local_24 != 0;
  }
  else {
    *(bool *)(param_1 + 2) = *piVar1 != 0;
    *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144668898 FUN_144668898 body=138 status=ok
// SIG undefined FUN_144668898(void)

void FUN_144668898(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x38);
  uVar2 = *(uint *)(lVar4 + 0x40);
  if ((int)uVar2 < 1) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    uVar7 = uVar2;
    do {
      uVar1 = (uVar7 >> 1) + uVar6;
      if (*(uint *)(*(longlong *)(lVar4 + 0x38) + 4 + (ulonglong)uVar1 * 8) <
          *(uint *)(param_1 + 0x38)) {
        uVar6 = uVar1 + (uVar7 & 1);
      }
      bVar5 = 1 < uVar7;
      uVar7 = uVar7 >> 1;
    } while (bVar5);
  }
  if (((int)uVar6 < (int)uVar2) &&
     (uVar8 = *(ulonglong *)(*(longlong *)(lVar4 + 0x38) + (ulonglong)uVar6 * 8),
     (uint)(uVar8 >> 0x20) <= *(uint *)(param_1 + 0x38))) {
    uVar8 = uVar8 & 0xffffffff;
    uVar3 = *(undefined4 *)(*(longlong *)(lVar4 + 0x28) + uVar8);
    *(ulonglong *)(param_1 + 0x18) = *(longlong *)(lVar4 + 0x28) + uVar8;
    *(undefined4 *)(param_1 + 0x20) = uVar3;
    *(longlong *)(param_1 + 0x28) = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x38) + 0x70;
  }
  return;
}



// FUNCTION 144668922 FUN_144668922 body=864 status=ok
// SIG undefined FUN_144668922(void)

void FUN_144668922(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  ulonglong *puVar1;
  undefined2 *puVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  DWORD DVar5;
  char cVar6;
  uint uVar7;
  DWORD dwTlsIndex;
  DWORD DVar8;
  size_t _Size;
  LPVOID lpTlsValue;
  undefined2 *puVar9;
  LPVOID pvVar10;
  size_t sVar11;
  ulonglong uVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  void *local_d8;
  undefined8 local_d0;
  longlong local_c8 [17];
  
  local_c8[0x10] = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar13 = *(longlong *)(param_2 + 0x10);
  local_c8[0xe] = 0;
  local_c8[0xf] = 0;
  local_c8[0xc] = 0;
  local_c8[0xd] = 0;
  local_c8[10] = 0;
  local_c8[0xb] = 0;
  local_c8[8] = 0;
  local_c8[9] = 0;
  local_c8[6] = 0;
  local_c8[7] = 0;
  local_c8[4] = 0;
  local_c8[5] = 0;
  local_c8[2] = 0;
  local_c8[3] = 0;
  local_c8[0] = 0;
  local_c8[1] = 0;
  if (*(int *)(lVar13 + 0x20) != 0) {
    lVar3 = *(longlong *)(lVar13 + 0x18);
    if ((((*(longlong *)(lVar13 + 0x28) == 0) ||
         (cVar6 = FUN_14983ab0c(local_c8,lVar3), cVar6 == '\0')) &&
        (*(int *)(lVar3 + 8) == -0x53ee53ef)) &&
       ((*(char *)(lVar3 + 0xe) == '\0' && (*(short *)(lVar3 + 0xc) == 10)))) {
      FUN_149845243(local_c8,lVar3,0);
    }
    local_f8 = param_3;
    local_f0 = param_4;
    if (local_c8[0] == 0) {
      lVar13 = 0;
    }
    else {
      FUN_1498452eb(local_c8,((float)((longlong)(int)*(undefined8 *)(param_2 + 0x48) *
                                     (longlong)*(int *)(param_2 + 0x44)) +
                             (float)*(int *)(param_2 + 0x44) *
                             (float)((ulonglong)*(undefined8 *)(param_2 + 0x48) >> 0x20)) /
                             (float)*(int *)(param_2 + 0x40),*(char *)(param_2 + 4) == '\x01');
      lVar13 = local_c8[0];
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (longlong)*(int *)(lVar13 + 0x10);
    pvVar10 = SUB168(auVar4 * ZEXT816(6),8);
    _Size = SUB168(auVar4 * ZEXT816(6),0);
    sVar11 = 0xffffffffffffffff;
    if (pvVar10 == (LPVOID)0x0) {
      sVar11 = _Size;
    }
    dwTlsIndex = DAT_14c7585d0;
    if (DAT_14c7585d0 == 0xffffffff) {
      dwTlsIndex = TlsAlloc();
      DVar8 = 0xffffffff;
      LOCK();
      bVar14 = DAT_14c7585d0 != 0xffffffff;
      DVar5 = dwTlsIndex;
      if (bVar14) {
        DVar8 = DAT_14c7585d0;
        DVar5 = DAT_14c7585d0;
      }
      DAT_14c7585d0 = DVar5;
      UNLOCK();
      if (bVar14) {
        TlsFree(dwTlsIndex);
        dwTlsIndex = DVar8;
      }
    }
    lpTlsValue = TlsGetValue(dwTlsIndex);
    if (lpTlsValue == (LPVOID)0x0) {
      lpTlsValue = (LPVOID)FUN_140036a08(&local_e8);
      FUN_140fddf04(lpTlsValue);
      pvVar10 = lpTlsValue;
      TlsSetValue(dwTlsIndex,lpTlsValue);
    }
    puVar1 = (ulonglong *)((longlong)lpTlsValue + 0x10);
    local_d8 = (void *)(*(longlong *)((longlong)lpTlsValue + 0x10) + 0xfU & 0xfffffffffffffff0);
    uVar12 = (longlong)local_d8 + sVar11;
    if (*(ulonglong *)((longlong)lpTlsValue + 0x18) < uVar12) {
      pvVar10 = (LPVOID)(ulonglong)((int)sVar11 + 0x10);
      FUN_140023dd8(puVar1,pvVar10);
      local_d8 = (void *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      uVar12 = sVar11 + (longlong)local_d8;
    }
    *puVar1 = uVar12;
    memset(local_d8,(int)CONCAT71((int7)((ulonglong)pvVar10 >> 8),0xff),_Size);
    if ((longlong)*(int *)(local_f8 + 1) != 0) {
      puVar9 = (undefined2 *)*local_f8;
      puVar2 = puVar9 + (longlong)*(int *)(local_f8 + 1) * 4;
      do {
        *(undefined2 *)((longlong)local_d8 + (longlong)*(int *)(puVar9 + 2) * 6) = *puVar9;
        puVar9 = puVar9 + 4;
      } while (puVar9 != puVar2);
    }
    if ((longlong)*(int *)(local_f0 + 1) != 0) {
      puVar9 = (undefined2 *)*local_f0;
      puVar2 = puVar9 + (longlong)*(int *)(local_f0 + 1) * 4;
      do {
        *(undefined2 *)((longlong)local_d8 + (longlong)*(int *)(puVar9 + 2) * 6 + 2) = *puVar9;
        puVar9 = puVar9 + 4;
      } while (puVar9 != puVar2);
    }
    uVar7 = *(uint *)(lVar13 + 0x1c);
    if (((uVar7 & 1) != 0) && ((longlong)*(int *)(param_5 + 1) != 0)) {
      puVar9 = (undefined2 *)*param_5;
      puVar2 = puVar9 + (longlong)*(int *)(param_5 + 1) * 4;
      do {
        *(undefined2 *)((longlong)local_d8 + (longlong)*(int *)(puVar9 + 2) * 6 + 4) = *puVar9;
        puVar9 = puVar9 + 4;
      } while (puVar9 != puVar2);
      uVar7 = *(uint *)(lVar13 + 0x1c);
    }
    if ((uVar7 & 2) == 0) {
      local_e8 = 0;
      uStack_e0 = 0;
      local_d0 = *param_6;
      if (local_c8[0] != 0) {
        FUN_149847fc2(local_c8,&local_e8);
      }
    }
    else {
      local_e8 = *(undefined8 *)(param_2 + 0x20);
      uStack_e0 = *(undefined8 *)(param_2 + 0x30);
      local_d0 = *param_6;
      if (local_c8[0] != 0) {
        FUN_149845932(local_c8,&local_e8);
      }
    }
  }
  if ((local_c8[0x10] ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144668c84 FUN_144668c84 body=445 status=ok
// SIG undefined FUN_144668c84(void)

void FUN_144668c84(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  longlong local_a8 [17];
  
  local_a8[0x10] = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar3 = *(longlong *)(param_2 + 0x10);
  local_a8[0xe] = 0;
  local_a8[0xf] = 0;
  local_a8[0xc] = 0;
  local_a8[0xd] = 0;
  local_a8[10] = 0;
  local_a8[0xb] = 0;
  local_a8[8] = 0;
  local_a8[9] = 0;
  local_a8[6] = 0;
  local_a8[7] = 0;
  local_a8[4] = 0;
  local_a8[5] = 0;
  local_a8[2] = 0;
  local_a8[3] = 0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  if (*(int *)(lVar3 + 0x20) != 0) {
    lVar1 = *(longlong *)(lVar3 + 0x18);
    if ((((*(longlong *)(lVar3 + 0x28) == 0) ||
         (cVar2 = FUN_14983ab0c(local_a8,lVar1), cVar2 == '\0')) &&
        (*(int *)(lVar1 + 8) == -0x53ee53ef)) &&
       ((*(char *)(lVar1 + 0xe) == '\0' && (*(short *)(lVar1 + 0xc) == 10)))) {
      FUN_149845243(local_a8,lVar1,0);
    }
    if (local_a8[0] == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1498452eb(local_a8,((float)((longlong)(int)*(undefined8 *)(param_2 + 0x48) *
                                     (longlong)*(int *)(param_2 + 0x44)) +
                             (float)*(int *)(param_2 + 0x44) *
                             (float)((ulonglong)*(undefined8 *)(param_2 + 0x48) >> 0x20)) /
                             (float)*(int *)(param_2 + 0x40),*(char *)(param_2 + 4) == '\x01');
      lVar3 = local_a8[0];
    }
    local_b8 = param_4;
    if ((*(byte *)(lVar3 + 0x1c) & 2) == 0) {
      local_c8 = 0;
      uStack_c0 = 0;
      if (lVar3 != 0) {
        FUN_14984a627(local_a8,param_3,&local_c8);
      }
    }
    else {
      local_c8 = *(undefined8 *)(param_2 + 0x20);
      uStack_c0 = *(undefined8 *)(param_2 + 0x30);
      if (lVar3 != 0) {
        FUN_149849293(local_a8,param_3,&local_c8);
      }
    }
  }
  if ((local_a8[0x10] ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144668e90 FUN_144668e90 body=29 status=ok
// SIG undefined FUN_144668e90(void)

undefined8 FUN_144668e90(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144668eae FUN_144668eae body=409 status=ok
// SIG undefined FUN_144668eae(void)

void FUN_144668eae(longlong param_1,uint param_2,ulonglong param_3,char param_4,int param_5,
                  undefined8 param_6)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  undefined4 local_b0;
  undefined1 **local_a8;
  longlong local_a0;
  longlong local_90;
  undefined1 *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar6 = (ulonglong)(param_5 - 1);
  iVar3 = *(int *)(param_1 + 0x40 + uVar6 * 4);
  plVar1 = *(longlong **)(param_1 + 0x48);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,0);
    puVar2 = *(undefined8 **)(param_1 + 0x48);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14beb21a0;
  local_58 = param_6;
  local_88[0] = &LAB_1446690c2;
  local_60 = param_1;
  if (param_4 != '\0') {
    uVar4 = FUN_14001cc68(iVar3 + (uint)(iVar3 == 0),0x10);
    *(undefined8 *)(param_1 + 0x30 + uVar6 * 8) = uVar4;
  }
  iVar3 = 0;
  if (param_5 != 1) {
    iVar3 = *(int *)(param_1 + 0x40);
  }
  local_a0 = (ulonglong)param_2 + *(longlong *)(param_1 + 0x30 + uVar6 * 8);
  uVar7 = (ulonglong)*(uint5 *)(*(longlong *)(param_1 + 0x28) + 0xd);
  uVar6 = 0xffffffffffffffff;
  if (uVar7 != 0xffffffffff) {
    uVar6 = uVar7;
  }
  local_a8 = local_88;
  local_b0 = 1;
  local_b8 = param_3 & 0xffffffff;
  FUN_1411dbd50(&local_90,param_3 & 0xffffffff,*(longlong *)(param_1 + 0x28) + 0x18,
                uVar6 + (iVar3 + param_2));
  *(longlong *)(param_1 + 0x48) = local_90;
  if (local_90 == 0) {
    FUN_14983b402(param_1,param_6);
  }
  if (local_88[0] != (undefined1 *)0x0) {
    pppuVar5 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar5 = &local_68;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144669048 FUN_144669048 body=121 status=ok
// SIG undefined FUN_144669048(void)

void FUN_144669048(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4,int param_5,
                  undefined8 param_6)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x48);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,0);
    puVar2 = *(undefined8 **)(param_1 + 0x48);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  if (param_4 != '\0') {
    if (*(longlong *)(param_1 + 0x30 + (ulonglong)(param_5 - 1) * 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x30 + (ulonglong)(param_5 - 1) * 8) = 0;
  }
  FUN_14983b492(param_1,param_6);
  return;
}



// FUNCTION 1446690de FUN_1446690de body=730 status=ok
// SIG undefined FUN_1446690de(void)

undefined8 FUN_1446690de(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  
  lVar4 = *param_1;
  plVar1 = (longlong *)(lVar4 + 0x70);
  if (*(int *)(lVar4 + 0x120) == 0) {
    iVar11 = -1;
  }
  else {
    uVar7 = (uint)(*(int *)(lVar4 + 0x120) << 10) / *(uint *)(*plVar1 + 0x18);
    iVar11 = uVar7 + (uVar7 == 0);
  }
  iVar8 = *(int *)(lVar4 + 0x108);
  if (iVar8 != 0) {
    while( true ) {
      puVar5 = *(undefined8 **)(lVar4 + 0x100);
      cVar3 = *(char *)((longlong)puVar5 + 0xc);
      if (*(char *)(lVar4 + 0xf8) != '\x01') break;
      if (cVar3 == '\0') {
        iVar8 = FUN_14983a058(plVar1,2,iVar11);
      }
      else {
        if (cVar3 != '\x02') {
          lVar9 = 0;
          do {
            if (*(undefined1 **)((longlong)puVar5 + lVar9) != (undefined1 *)0x0) {
              **(undefined1 **)((longlong)puVar5 + lVar9) = 2;
            }
            lVar9 = lVar9 + 0x10;
          } while ((longlong)iVar8 * 0x10 != lVar9);
          goto LAB_144669365;
        }
        iVar8 = FUN_149839da2(plVar1,1,iVar11);
      }
      if (iVar8 != 0) {
        if (iVar8 == 2) goto LAB_1446692c4;
        if (iVar8 == 1) goto LAB_1446692bf;
        iVar11 = *(int *)(lVar4 + 0x108);
        if ((longlong)iVar11 != 0) {
          lVar9 = *(longlong *)(lVar4 + 0x100);
          lVar10 = 0;
          do {
            puVar6 = *(undefined1 **)(lVar9 + lVar10);
            if (puVar6 != (undefined1 *)0x0) {
              *puVar6 = 2;
            }
            lVar10 = lVar10 + 0x10;
          } while ((longlong)iVar11 * 0x10 != lVar10);
        }
        goto LAB_144669365;
      }
LAB_1446691c2:
      *(undefined1 *)(lVar4 + 0xf8) = *(undefined1 *)((longlong)puVar5 + 0xc);
      if ((undefined1 *)*puVar5 != (undefined1 *)0x0) {
        *(undefined1 *)*puVar5 = 1;
      }
      iVar8 = 0;
      iVar12 = *(int *)(lVar4 + 0x108) + -1;
      if (iVar12 != 0) {
        memmove(*(void **)(lVar4 + 0x100),(void *)((longlong)*(void **)(lVar4 + 0x100) + 0x10),
                (longlong)iVar12 << 4);
        iVar8 = *(int *)(lVar4 + 0x108) + -1;
      }
      *(int *)(lVar4 + 0x108) = iVar8;
      FUN_14983b6e4(lVar4 + 0x100);
      iVar8 = *(int *)(lVar4 + 0x108);
      if (iVar8 == 0) goto LAB_14466937a;
    }
    if (*(char *)(lVar4 + 0xf8) != '\x02') {
      if (cVar3 == '\x01') {
        iVar8 = FUN_149839da2(plVar1,2,iVar11);
        if (iVar8 == 0) goto LAB_1446691c2;
        if (iVar8 == 2) goto LAB_1446692c4;
        if (iVar8 == 1) goto LAB_1446692bf;
        iVar11 = *(int *)(lVar4 + 0x108);
        if ((longlong)iVar11 != 0) {
          lVar9 = *(longlong *)(lVar4 + 0x100);
          lVar10 = 0;
          do {
            puVar6 = *(undefined1 **)(lVar9 + lVar10);
            if (puVar6 != (undefined1 *)0x0) {
              *puVar6 = 2;
            }
            lVar10 = lVar10 + 0x10;
          } while ((longlong)iVar11 * 0x10 != lVar10);
        }
      }
      else {
        lVar9 = 0;
        do {
          if (*(undefined1 **)((longlong)puVar5 + lVar9) != (undefined1 *)0x0) {
            **(undefined1 **)((longlong)puVar5 + lVar9) = 2;
          }
          lVar9 = lVar9 + 0x10;
        } while ((longlong)iVar8 * 0x10 != lVar9);
      }
      goto LAB_144669365;
    }
    if (cVar3 == '\x01') {
      iVar8 = FUN_14983a058(plVar1,1,iVar11);
      if (iVar8 == 0) goto LAB_1446691c2;
      if (iVar8 == 2) goto LAB_1446692c4;
      if (iVar8 == 1) {
LAB_1446692bf:
        *(undefined1 *)((longlong)puVar5 + 0xd) = 1;
        goto LAB_1446692c4;
      }
      iVar11 = *(int *)(lVar4 + 0x108);
      if ((longlong)iVar11 != 0) {
        lVar9 = *(longlong *)(lVar4 + 0x100);
        lVar10 = 0;
        do {
          puVar6 = *(undefined1 **)(lVar9 + lVar10);
          if (puVar6 != (undefined1 *)0x0) {
            *puVar6 = 2;
          }
          lVar10 = lVar10 + 0x10;
        } while ((longlong)iVar11 * 0x10 != lVar10);
      }
    }
    else {
      lVar9 = 0;
      do {
        if (*(undefined1 **)((longlong)puVar5 + lVar9) != (undefined1 *)0x0) {
          **(undefined1 **)((longlong)puVar5 + lVar9) = 2;
        }
        lVar9 = lVar9 + 0x10;
      } while ((longlong)iVar8 * 0x10 != lVar9);
    }
LAB_144669365:
    *(undefined4 *)(lVar4 + 0x108) = 0;
    if (*(int *)(lVar4 + 0x10c) == 0) goto LAB_14466937a;
    FUN_14983b3a0(lVar4 + 0x100);
LAB_1446692c4:
    if (*(int *)(lVar4 + 0x108) != 0) {
      return 1;
    }
  }
LAB_14466937a:
  plVar1 = *(longlong **)(lVar4 + 0x118);
  *(undefined8 *)(lVar4 + 0x110) = 0;
  *(undefined8 *)(lVar4 + 0x118) = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar1 + 0x10))();
    }
  }
  return 0;
}



// FUNCTION 1446693c2 FUN_1446693c2 body=12 status=ok
// SIG undefined FUN_1446693c2(void)

void FUN_1446693c2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001446693cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1446693ce FUN_1446693ce body=29 status=ok
// SIG undefined FUN_1446693ce(void)

undefined8 FUN_1446693ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446693eb FUN_1446693eb body=512 status=ok
// SIG undefined FUN_1446693eb(void)

void FUN_1446693eb(longlong param_1,uint param_2,undefined8 param_3,longlong *param_4)

{
  undefined4 uVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 in_XMM0 [16];
  undefined1 auVar5 [16];
  undefined1 in_XMM3 [16];
  
  lVar3 = param_4[1];
  lVar4 = (ulonglong)param_2 * 6;
  bVar2 = *(byte *)(*param_4 + (ulonglong)param_2);
  if (bVar2 == 0) {
    pmovzxwd(in_XMM0,*(undefined8 *)(lVar3 + lVar4));
  }
  else if (bVar2 != 0x1f) {
    uVar1 = *(undefined4 *)(&DAT_14beb2200 + (ulonglong)(uint)bVar2 * 8);
    auVar5._4_4_ = uVar1;
    auVar5._0_4_ = uVar1;
    auVar5._8_4_ = uVar1;
    auVar5._12_4_ = uVar1;
    if (*(char *)(param_1 + 0x20) != '\0') {
      auVar5 = pmovzxbw(auVar5,*(undefined8 *)(lVar3 + lVar4));
      pmovzxwd(auVar5,auVar5);
      auVar5 = pmovzxbw(in_XMM3,*(undefined8 *)(lVar3 + 3 + lVar4));
      pmovzxwd(auVar5,auVar5);
    }
  }
  return;
}



// FUNCTION 1446695f4 FUN_1446695f4 body=433 status=ok
// SIG undefined FUN_1446695f4(void)

void FUN_1446695f4(void)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = 0x10;
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_PTR_14beafc10 + lVar1),L"/Script/ACLPlugin",
                  *(undefined8 *)(&UNK_14beafc18 + lVar1),
                  *(undefined8 *)((longlong)&PTR_FUN_14beafc20 + lVar1));
    lVar1 = lVar1 + 0x20;
  } while (lVar1 != 0x70);
  local_48 = 0x800000014beafcf8;
  local_34 = 9;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_146764088(&local_48);
  ppuStack_60 = &PTR_FUN_14beb0770;
  local_68 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/ACLPlugin",&PTR_FUN_14beb07b0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ACLPlugin",&PTR_FUN_14beb0b80,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ACLPlugin",&PTR_FUN_14beb0f30,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ACLPlugin",&PTR_FUN_14beb12e0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ACLPlugin",&PTR_FUN_14beb16e0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ACLPlugin",&PTR_FUN_14beb1a90,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ACLPlugin",&PTR_FUN_14beb1e30,1,0);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446697a8 FUN_1446697a8 body=55 status=ok
// SIG undefined FUN_1446697a8(void)

void FUN_1446697a8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2d480 == 0) {
    uVar1 = FUN_140f1f6b9();
    DAT_14cc2d480 = FUN_14171c317(FUN_146764757,uVar1,L"ESplineType");
  }
  return;
}



// FUNCTION 1446697e0 FUN_1446697e0 body=162 status=ok
// SIG undefined FUN_1446697e0(void)

void FUN_1446697e0(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined8 local_18;
  int local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(param_2 + 8);
  if ((lVar2 == 0) || (*(longlong *)(lVar2 + 0x30) == 0)) goto LAB_144669827;
  iVar1 = *(int *)(param_1 + 1);
  iVar3 = *(int *)(lVar2 + 0x18);
  if (*(char *)(lVar2 + 0x38) == '\0') {
LAB_144669822:
    if (iVar1 != iVar3) goto LAB_144669827;
  }
  else if (iVar1 != iVar3) {
    iVar3 = iVar3 - (uint)*(byte *)(*(longlong *)(lVar2 + 0x30) + 0x18);
    goto LAB_144669822;
  }
  local_18 = *param_1;
  local_28 = *(undefined4 *)(lVar2 + 0x44);
  local_30 = *(undefined4 *)(lVar2 + 0x40);
  local_38 = *(undefined4 *)(lVar2 + 0x3c);
  local_10 = iVar1;
  FUN_1498513d0(param_2,&local_18,CONCAT71((int7)((ulonglong)lVar2 >> 8),*(undefined1 *)(lVar2 + 8))
               );
LAB_144669827:
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144669884 FUN_144669884 body=162 status=ok
// SIG undefined FUN_144669884(void)

void FUN_144669884(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined8 local_18;
  int local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(param_2 + 8);
  if ((lVar2 == 0) || (*(longlong *)(lVar2 + 0x30) == 0)) goto LAB_1446698cb;
  iVar1 = *(int *)(param_1 + 1);
  iVar3 = *(int *)(lVar2 + 0x18);
  if (*(char *)(lVar2 + 0x38) == '\0') {
LAB_1446698c6:
    if (iVar1 != iVar3) goto LAB_1446698cb;
  }
  else if (iVar1 != iVar3) {
    iVar3 = iVar3 - (uint)*(byte *)(*(longlong *)(lVar2 + 0x30) + 0x18);
    goto LAB_1446698c6;
  }
  local_18 = *param_1;
  local_28 = *(undefined4 *)(lVar2 + 0x44);
  local_30 = *(undefined4 *)(lVar2 + 0x40);
  local_38 = *(undefined4 *)(lVar2 + 0x3c);
  local_10 = iVar1;
  FUN_1498515de(param_2,&local_18,CONCAT71((int7)((ulonglong)lVar2 >> 8),*(undefined1 *)(lVar2 + 8))
               );
LAB_1446698cb:
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144669928 FUN_144669928 body=113 status=ok
// SIG undefined FUN_144669928(void)

void FUN_144669928(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_2 = (longlong *)*param_2;
  lVar1 = *(longlong *)(*param_2 + 8);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) != 0)) {
    puVar2 = (undefined4 *)param_2[8];
    FUN_149853216(*param_2,&local_30,*(undefined4 *)param_2[4]);
    *(undefined8 *)(puVar2 + 4) = local_20;
    *puVar2 = local_30;
    puVar2[1] = uStack_2c;
    puVar2[2] = uStack_28;
    puVar2[3] = uStack_24;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14466999a FUN_14466999a body=162 status=ok
// SIG undefined FUN_14466999a(void)

void FUN_14466999a(longlong param_1)

{
  undefined1 auStack_238 [32];
  undefined1 local_218 [480];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_238;
  FUN_1412ca278(local_218);
  FUN_1490d751a(local_218);
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) != 0)) {
    FUN_149853216(param_1 + 8,&local_38,*(undefined4 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x38) = local_28;
    *(undefined4 *)(param_1 + 0x28) = local_38;
    *(undefined4 *)(param_1 + 0x2c) = uStack_34;
    *(undefined4 *)(param_1 + 0x30) = uStack_30;
    *(undefined4 *)(param_1 + 0x34) = uStack_2c;
  }
  FUN_140f8ccfc(local_218);
  if ((local_20 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144669a3e FUN_144669a3e body=1317 status=ok
// SIG undefined FUN_144669a3e(void)

void FUN_144669a3e(longlong param_1,double *param_2,float param_3,undefined8 param_4,double *param_5
                  )

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  undefined1 auStack_1d8 [32];
  double local_1b8;
  double local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  double local_198;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  undefined1 local_158 [136];
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar10 = *(longlong *)(param_1 + 8);
  if ((lVar10 != 0) && (*(longlong *)(lVar10 + 0x30) != 0)) {
    dVar12 = *param_2;
    dVar3 = param_2[1];
    dVar11 = param_2[2];
    dVar14 = dVar11 * dVar11 + dVar12 * dVar12 + dVar3 * dVar3;
    if (9.99999993922529e-09 < dVar14) {
      dVar14 = 1.0 / SQRT(dVar14);
      dVar12 = dVar12 * dVar14;
      dVar3 = dVar3 * dVar14;
      dVar11 = dVar11 * dVar14;
    }
    fVar13 = (float)param_4;
    if (1.0 <= fVar13) {
      fVar13 = 1.0;
    }
    if (180.0 <= param_3) {
      param_3 = 180.0;
    }
    if (param_3 <= -180.0) {
      param_3 = -180.0;
    }
    if (fVar13 <= 0.0) {
      fVar13 = 0.0;
    }
    fVar17 = fVar13;
    if (1.0 <= fVar13) {
      fVar17 = 1.0;
    }
    if (fVar17 <= 0.0) {
      fVar17 = 0.0;
    }
    lVar4 = *(longlong *)(lVar10 + 0x48);
    lVar10 = (longlong)(int)((float)(*(int *)(lVar10 + 0x50) + -2) * fVar17) * 0x60;
    dVar14 = *(double *)(lVar4 + 0x90 + lVar10) - *(double *)(lVar4 + 0x30 + lVar10);
    pdVar2 = (double *)(lVar4 + 0x80 + lVar10);
    pdVar1 = (double *)(lVar4 + 0x20 + lVar10);
    dVar5 = *pdVar2 - *pdVar1;
    dVar6 = pdVar2[1] - pdVar1[1];
    dVar16 = dVar14 * dVar14 + dVar5 * dVar5 + dVar6 * dVar6;
    if (dVar16 <= 9.99999993922529e-09) {
      dVar6 = param_5[1];
      dVar14 = param_5[2];
      dVar5 = dVar14 + dVar14;
      dVar7 = dVar6 + dVar6;
      dVar6 = 1.0 - (dVar6 * dVar7 + dVar14 * dVar5);
      dVar16 = *param_5 * dVar7 + param_5[3] * dVar5;
      dVar5 = dVar5 * *param_5 - dVar7 * param_5[3];
      dVar14 = dVar5 * dVar5 + dVar6 * dVar6 + dVar16 * dVar16;
      if (((dVar14 != 1.0) || (dVar7 = dVar6, dVar8 = dVar16, dVar9 = dVar5, NAN(dVar14))) &&
         (dVar7 = DAT_14c8464e0, dVar8 = DAT_14c8464e8, dVar9 = DAT_14c8464f0,
         9.99999993922529e-09 <= dVar14)) {
        dVar14 = 1.0 / SQRT(dVar14);
        dVar7 = dVar6 * dVar14;
        dVar8 = dVar16 * dVar14;
        dVar9 = dVar5 * dVar14;
      }
    }
    else {
      dVar16 = 1.0 / SQRT(dVar16);
      dVar7 = dVar5 * dVar16;
      dVar8 = dVar6 * dVar16;
      dVar9 = dVar14 * dVar16;
    }
    local_1b0 = dVar7 * dVar3 - dVar12 * dVar8;
    dVar5 = dVar9 * dVar12 - dVar11 * dVar7;
    dVar6 = dVar8 * dVar11 - dVar3 * dVar9;
    dVar3 = (double)(param_3 * fVar13) * 0.017453292519943295;
    local_170 = dVar7;
    local_168 = dVar8;
    local_160 = dVar9;
    dVar12 = sin(dVar3);
    dVar3 = cos(dVar3);
    local_1b8 = dVar7 * dVar7;
    dVar11 = 1.0 - dVar3;
    dVar16 = dVar7 * dVar9 * dVar11;
    dVar14 = dVar8 * dVar9 * dVar11;
    local_178 = (dVar9 * dVar9 * dVar11 + dVar3) * local_1b0 +
                (dVar16 - dVar8 * dVar12) * dVar6 + (dVar14 + dVar7 * dVar12) * dVar5;
    dVar15 = dVar8 * dVar7 * dVar11;
    local_180 = (dVar14 - dVar7 * dVar12) * local_1b0 +
                (dVar15 + dVar9 * dVar12) * dVar6 + (dVar8 * dVar8 * dVar11 + dVar3) * dVar5;
    local_188 = (dVar16 + dVar8 * dVar12) * local_1b0 +
                (dVar11 * local_1b8 + dVar3) * dVar6 + (dVar15 - dVar9 * dVar12) * dVar5;
    FUN_14099e850(local_158,&local_170);
    FUN_1448ac920(param_5,local_158);
    FUN_149853216(param_1,&local_1a8,param_4);
    *(undefined4 *)(param_5 + 4) = local_1a8;
    *(undefined4 *)((longlong)param_5 + 0x24) = uStack_1a4;
    *(undefined4 *)(param_5 + 5) = uStack_1a0;
    *(undefined4 *)((longlong)param_5 + 0x2c) = uStack_19c;
    param_5[6] = local_198;
    param_5[7] = 0.0;
  }
  if ((local_d0 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144669f64 FUN_144669f64 body=182 status=ok
// SIG undefined FUN_144669f64(void)

void FUN_144669f64(longlong param_1,float param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98 [13];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(longlong *)(param_1 + 8) != 0) && (*(longlong *)(*(longlong *)(param_1 + 8) + 0x30) != 0))
  {
    if (1.0 <= param_2) {
      param_2 = 1.0;
    }
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
    FUN_1498532e8(0,local_98,param_2);
    puVar2 = local_98;
    puVar3 = param_5;
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_1498548a6(local_98,param_5,param_3,param_4);
    puVar2 = local_98;
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *param_5 = *puVar2;
      puVar2 = puVar2 + 1;
      param_5 = param_5 + 1;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14466a01c FUN_14466a01c body=213 status=ok
// SIG undefined FUN_14466a01c(void)

void FUN_14466a01c(longlong param_1,float param_2,double *param_3)

{
  double *pdVar1;
  double *pdVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  lVar4 = *(longlong *)(param_1 + 8);
  if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x30) != 0)) {
    if (1.0 <= param_2) {
      param_2 = 1.0;
    }
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
    if (1.0 <= param_2) {
      param_2 = 1.0;
    }
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
    lVar3 = *(longlong *)(lVar4 + 0x48);
    lVar4 = (longlong)(int)((float)(*(int *)(lVar4 + 0x50) + -2) * param_2) * 0x60;
    dVar5 = *(double *)(lVar3 + 0x90 + lVar4) - *(double *)(lVar3 + 0x30 + lVar4);
    pdVar2 = (double *)(lVar3 + 0x80 + lVar4);
    pdVar1 = (double *)(lVar3 + 0x20 + lVar4);
    dVar6 = *pdVar2 - *pdVar1;
    dVar7 = pdVar2[1] - pdVar1[1];
    dVar8 = dVar5 * dVar5 + dVar6 * dVar6 + dVar7 * dVar7;
    if (9.99999993922529e-09 < dVar8) {
      dVar8 = 1.0 / SQRT(dVar8);
      *param_3 = dVar6 * dVar8;
      param_3[1] = dVar7 * dVar8;
      param_3[2] = dVar5 * dVar8;
    }
  }
  return;
}



// FUNCTION 14466a0f2 FUN_14466a0f2 body=409 status=ok
// SIG undefined FUN_14466a0f2(void)

void FUN_14466a0f2(longlong param_1,longlong param_2,undefined4 *param_3,undefined4 param_4,
                  uint param_5)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  float fVar8;
  undefined1 auStack_168 [40];
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 local_120;
  longlong local_118 [2];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined8 local_e8 [12];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (((*(longlong *)(param_1 + 0x58) != 0) && (*(longlong *)(param_2 + 8) != 0)) &&
     (*(longlong *)(*(longlong *)(param_2 + 8) + 0x30) != 0)) {
    uVar3 = 0x40;
    if ((int)param_5 < 0x40) {
      uVar3 = param_5;
    }
    uVar7 = 4;
    if (4 < (int)uVar3) {
      uVar7 = (ulonglong)uVar3;
    }
    puVar5 = &DAT_14c846480;
    puVar6 = local_e8;
    for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    lVar4 = 0;
    local_128 = 0;
    local_120 = 2;
    local_118[0] = 0;
    local_118[1] = 0;
    local_108 = *param_3;
    uStack_104 = param_3[1];
    uStack_100 = param_3[2];
    uStack_fc = param_3[3];
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_f8 = param_4;
    FUN_140b463b8(local_118,uVar7,1);
    fVar8 = 0.0;
    do {
      FUN_149853216(param_2,&local_140,fVar8);
      *(undefined8 *)(local_118[0] + 0x10 + lVar4) = local_130;
      puVar1 = (undefined4 *)(local_118[0] + lVar4);
      *puVar1 = local_140;
      puVar1[1] = uStack_13c;
      puVar1[2] = uStack_138;
      puVar1[3] = uStack_134;
      fVar8 = fVar8 + 1.0 / (float)((int)uVar7 + -1);
      lVar4 = lVar4 + 0x18;
    } while (uVar7 * 0x18 != lVar4);
    lVar4 = *(longlong *)(param_1 + 0x58);
    iVar2 = *(int *)(lVar4 + 0x10);
    *(uint *)(lVar4 + 0x10) = iVar2 + 1U;
    if (*(uint *)(lVar4 + 0x14) < iVar2 + 1U) {
      FUN_1490f2448((longlong *)(lVar4 + 8),iVar2);
    }
    FUN_1490eb446((longlong)iVar2 * 0xd0 + *(longlong *)(lVar4 + 8),&local_128);
    FUN_1490de8da(&local_128);
  }
  if ((local_50 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14466a2c0 FUN_14466a2c0 body=137 status=ok
// SIG undefined FUN_14466a2c0(void)

void FUN_14466a2c0(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  lVar1 = *(longlong *)(param_1 + 0x10);
  uVar2 = 0;
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) != 0)) {
    uVar2 = *(undefined4 *)
             (*(longlong *)(lVar1 + 0x58) + (longlong)(*(int *)(lVar1 + 0x60) + -1) * 4);
  }
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14466a34a FUN_14466a34a body=56 status=ok
// SIG undefined FUN_14466a34a(void)

void FUN_14466a34a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  param_2 = (longlong *)*param_2;
  lVar1 = *(longlong *)(*param_2 + 8);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) != 0)) {
    puVar2 = (undefined4 *)param_2[8];
    uVar3 = FUN_149853560(*param_2,*(undefined4 *)param_2[4]);
    *puVar2 = uVar3;
  }
  return;
}



// FUNCTION 14466a382 FUN_14466a382 body=133 status=ok
// SIG undefined FUN_14466a382(void)

void FUN_14466a382(longlong param_1)

{
  undefined4 uVar1;
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) != 0)) {
    uVar1 = FUN_149853560(param_1 + 8,*(undefined4 *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14466a408 FUN_14466a408 body=15043 status=ok
// SIG undefined FUN_14466a408(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14466a408(longlong param_1,longlong *param_2,longlong param_3,undefined1 param_4,
                  float param_5,float param_6,float param_7,double *param_8,double *param_9,
                  double *param_10,longlong *param_11,undefined1 param_12,float param_13,
                  byte param_14,char *param_15,float *param_16)

{
  char *pcVar1;
  byte bVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auVar6 [12];
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  void *_Src;
  int *piVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  ulonglong uVar14;
  double *pdVar15;
  longlong *plVar16;
  int iVar17;
  int *piVar18;
  int *piVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  undefined8 *puVar23;
  double *pdVar24;
  longlong lVar25;
  int *piVar26;
  float *pfVar27;
  longlong lVar28;
  int *piVar29;
  double dVar30;
  float fVar31;
  char *pcVar32;
  void *pvVar33;
  ulonglong uVar34;
  undefined8 *puVar35;
  int *piVar36;
  int *piVar37;
  double *pdVar38;
  int *piVar39;
  double *pdVar40;
  int *piVar41;
  longlong lVar42;
  longlong lVar43;
  bool bVar44;
  float fVar45;
  undefined4 uVar46;
  double dVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  double dVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  double dVar73;
  double dVar74;
  double dVar75;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  float fVar80;
  double dVar81;
  double dVar82;
  undefined1 auVar83 [16];
  double dVar84;
  double dVar85;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  double dVar89;
  double dVar90;
  undefined1 auVar91 [16];
  double dVar92;
  undefined1 auVar93 [12];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  float fVar97;
  float fVar98;
  double dVar99;
  double dVar100;
  double dVar101;
  undefined1 auVar102 [16];
  double dVar103;
  double dVar104;
  double dVar105;
  double dVar106;
  undefined1 auStack_6b8 [32];
  char *local_698;
  undefined1 local_690;
  undefined1 local_688;
  undefined1 local_680;
  float *local_678;
  float *local_670;
  float *local_668;
  longlong local_660;
  double local_658;
  double dStack_650;
  undefined1 local_648 [16];
  undefined1 local_638 [16];
  float *local_628;
  double dStack_620;
  float *local_610;
  float *local_608;
  double dStack_600;
  undefined1 local_5f8 [16];
  undefined1 local_5e8 [24];
  float *local_5d0;
  undefined1 local_5c8 [16];
  undefined1 local_5b8 [16];
  double local_5a8;
  longlong local_5a0;
  undefined1 local_598 [16];
  double local_588;
  double dStack_580;
  double local_578;
  double dStack_570;
  undefined8 local_568;
  int local_560;
  undefined8 local_558;
  undefined4 local_550;
  void *local_548;
  ulonglong uStack_540;
  undefined4 local_538;
  undefined2 uStack_534;
  ushort uStack_532;
  int local_530;
  undefined4 local_52c;
  int *local_528;
  undefined8 uStack_520;
  void *local_518;
  undefined8 uStack_510;
  double local_508;
  double dStack_500;
  undefined8 local_4f8;
  undefined4 uStack_4f0;
  undefined2 uStack_4ec;
  undefined2 uStack_4ea;
  undefined1 local_4e8 [16];
  double local_4d8;
  double dStack_4d0;
  float *local_4c8;
  double dStack_4c0;
  undefined1 local_4b8 [16];
  float *local_4a8;
  double dStack_4a0;
  double local_498;
  double dStack_490;
  float *local_488;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  void *local_1f8;
  double dStack_1f0;
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
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 local_178 [12];
  undefined4 uStack_16c;
  undefined1 local_168 [16];
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  float *local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_6b8;
  lVar4 = *(longlong *)(param_1 + 0x1b0);
  if (((lVar4 == 0) || (*(longlong *)(param_3 + 8) == 0)) ||
     (*(longlong *)(*(longlong *)(param_3 + 8) + 0x30) == 0)) goto LAB_14466db04;
  local_608 = param_16 + 2;
  local_628 = param_16 + 10;
  local_638._0_8_ = param_16 + 0xe;
  local_668 = param_16 + 0x12;
  local_670 = param_16 + 0x16;
  local_678 = param_16 + 0x1a;
  local_610 = param_16 + 0x1e;
  local_5d0 = param_16 + 0x22;
  fVar45 = param_16[0x14];
  local_660 = param_3;
  local_5a0 = param_1;
  if (fVar45 == 0.0) {
    if (1 < (int)param_2[1]) {
      param_16[0xc] = 0.0;
      if ((int)param_16[0xd] < 0) {
        FUN_1447a8aa0(local_628,0);
      }
      param_16[4] = 0.0;
      if ((int)param_16[5] < 0) {
        FUN_1447a8aa0(local_608,0);
      }
      param_16[8] = 0.0;
      if ((int)param_16[9] < 0) {
        FUN_14482f6fa(param_16 + 6,0);
      }
      param_16[0x10] = 0.0;
      if ((int)param_16[0x11] < 0) {
        FUN_14482f6fa(local_638._0_8_,0);
      }
      param_16[0x18] = 0.0;
      if ((int)param_16[0x19] < 0) {
        FUN_14481578e(local_670,0);
      }
      param_16[0x1c] = 0.0;
      if ((int)param_16[0x1d] < 0) {
        FUN_14481578e(local_678,0);
      }
      local_658 = (double)CONCAT71(local_658._1_7_,param_4);
      param_16[0x20] = 0.0;
      if ((int)param_16[0x21] < 0) {
        FUN_14482f6fa(local_610,0);
      }
      local_648._0_8_ = param_16 + 6;
      param_16[0x24] = 0.0;
      if ((int)param_16[0x25] < 0) {
        FUN_1401a2688(local_5d0,0);
      }
      *param_16 = 0.0;
      lVar25 = param_2[1];
      if ((longlong)(int)lVar25 != 0) {
        lVar42 = *param_2;
        lVar43 = 0;
        do {
          local_178._8_4_ = *(undefined4 *)(lVar42 + 8 + lVar43);
          local_178._0_8_ = *(undefined8 *)(lVar42 + lVar43);
          local_4f8._0_4_ = (uint)local_4f8 & 0xffffff00;
          local_4f8._4_4_ = 0;
          uStack_4f0 = 0;
          uStack_4ec = 0xffff;
          local_4e8._0_4_ = 0xffffffff;
          FUN_144828dba(&local_4f8,local_178,lVar4);
          fVar45 = param_16[0x14];
          param_16[0x14] = (float)((int)fVar45 + 1);
          if ((uint)param_16[0x15] < (uint)((int)fVar45 + 1)) {
            FUN_1492d0738(local_668,fVar45);
          }
          lVar28 = *(longlong *)local_668;
          puVar23 = (undefined8 *)(lVar28 + 0x10 + (longlong)(int)fVar45 * 0x20);
          *puVar23 = local_4e8._0_8_;
          puVar23[1] = local_4e8._8_8_;
          puVar23 = (undefined8 *)(lVar28 + (longlong)(int)fVar45 * 0x20);
          *puVar23 = CONCAT44(local_4f8._4_4_,(uint)local_4f8);
          puVar23[1] = CONCAT26(uStack_4ea,CONCAT24(uStack_4ec,uStack_4f0));
          lVar43 = lVar43 + 0xc;
        } while ((longlong)(int)lVar25 * 0xc != lVar43);
      }
      param_3 = local_660;
      param_4 = local_658._0_1_;
      if ((int)param_16[0x14] < 2) goto LAB_14466db04;
      FUN_146ba0be8(local_608,param_16[0x14],1);
      fVar45 = param_16[0x14];
      fVar80 = param_16[8];
      uVar7 = local_648._0_8_;
      if ((int)fVar80 < (int)fVar45) {
        param_16[8] = fVar45;
        if ((uint)((int)param_16[9] - (int)fVar80) < (uint)((int)fVar45 - (int)fVar80)) {
          FUN_14475e4ac(local_648._0_8_);
        }
        memset((void *)((longlong)(int)fVar80 * 4 + *(longlong *)uVar7),0,
               (longlong)((int)fVar45 - (int)fVar80) << 2);
      }
      else {
        if ((int)fVar45 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(fVar45);
        }
        if ((int)fVar45 < (int)fVar80) {
          param_16[8] = fVar45;
          FUN_1401fef06(local_648._0_8_);
        }
      }
      **(undefined4 **)(param_16 + 6) = 0;
      fVar45 = param_16[0x14];
      if (1 < (int)fVar45) {
        lVar25 = 1;
        lVar42 = 0;
        do {
          lVar43 = *(longlong *)local_668;
          uVar3 = *(ushort *)(lVar43 + 0xc + lVar42);
          if ((((uVar3 == 0xffff) ||
               (*(uint *)(lVar4 + 0xc0) == (uint)uVar3 ||
                (int)*(uint *)(lVar4 + 0xc0) < (int)(uint)uVar3)) ||
              (lVar28 = *(longlong *)(*(longlong *)(lVar4 + 0xb8) + (ulonglong)(uint)uVar3 * 8),
              lVar28 == 0)) ||
             (((bVar2 = *(byte *)(lVar28 + 0x10), 1 < bVar2 - 1 && (bVar2 != 0x80)) &&
              ((0x20 < bVar2 || ((0x100010010U >> ((ulonglong)bVar2 & 0x3f) & 1) == 0)))))) {
            puVar23 = &DAT_14c846480;
            puVar35 = &local_4f8;
            for (lVar28 = 0xc; lVar28 != 0; lVar28 = lVar28 + -1) {
              *puVar35 = *puVar23;
              puVar23 = puVar23 + 1;
              puVar35 = puVar35 + 1;
            }
          }
          else {
            FUN_1401571e4(lVar4,&local_4f8,lVar28,3);
            lVar43 = *(longlong *)local_668;
          }
          pfVar27 = local_4c8;
          dVar73 = dStack_4d0;
          dVar30 = local_4d8;
          uVar3 = *(ushort *)(lVar43 + 0x2c + lVar42);
          if ((((uVar3 == 0xffff) ||
               (*(uint *)(lVar4 + 0xc0) == (uint)uVar3 ||
                (int)*(uint *)(lVar4 + 0xc0) < (int)(uint)uVar3)) ||
              (lVar43 = *(longlong *)(*(longlong *)(lVar4 + 0xb8) + (ulonglong)(uint)uVar3 * 8),
              lVar43 == 0)) ||
             (((bVar2 = *(byte *)(lVar43 + 0x10), 1 < bVar2 - 1 && (bVar2 != 0x80)) &&
              ((0x20 < bVar2 || ((0x100010010U >> ((ulonglong)bVar2 & 0x3f) & 1) == 0)))))) {
            puVar23 = &DAT_14c846480;
            puVar35 = &local_4f8;
            for (lVar43 = 0xc; lVar43 != 0; lVar43 = lVar43 + -1) {
              *puVar35 = *puVar23;
              puVar23 = puVar23 + 1;
              puVar35 = puVar35 + 1;
            }
          }
          else {
            FUN_1401571e4(lVar4,&local_4f8,lVar43,3);
          }
          *(float *)(*(longlong *)(param_16 + 6) + lVar25 * 4) =
               (float)SQRT(((double)pfVar27 - (double)local_4c8) *
                           ((double)pfVar27 - (double)local_4c8) +
                           (dVar30 - local_4d8) * (dVar30 - local_4d8) +
                           (dVar73 - dStack_4d0) * (dVar73 - dStack_4d0));
          *param_16 = *(float *)(*(longlong *)(param_16 + 6) + lVar25 * 4) + *param_16;
          lVar25 = lVar25 + 1;
          fVar45 = param_16[0x14];
          lVar42 = lVar42 + 0x20;
        } while (lVar25 < (int)fVar45);
        param_4 = local_658._0_1_;
      }
      fVar80 = param_16[0x18];
      if ((int)fVar80 < (int)fVar45) {
        param_16[0x18] = fVar45;
        if ((uint)((int)param_16[0x19] - (int)fVar80) < (uint)((int)fVar45 - (int)fVar80)) {
          FUN_1446f48e2(local_670);
        }
        memset((void *)((longlong)(int)fVar80 * 4 + *(longlong *)local_670),0,
               (longlong)((int)fVar45 - (int)fVar80) << 2);
      }
      else {
        if ((int)fVar45 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(fVar45);
        }
        if ((int)fVar45 < (int)fVar80) {
          param_16[0x18] = fVar45;
          FUN_14479f406(local_670);
        }
      }
      fVar80 = param_16[0x14];
      fVar45 = param_16[0x1c];
      if ((int)fVar45 < (int)fVar80) {
        param_16[0x1c] = fVar80;
        if ((uint)((int)param_16[0x1d] - (int)fVar45) < (uint)((int)fVar80 - (int)fVar45)) {
          FUN_1446f48e2(local_678);
        }
        memset((void *)((longlong)(int)fVar45 * 4 + *(longlong *)local_678),0,
               (longlong)((int)fVar80 - (int)fVar45) << 2);
      }
      else {
        if ((int)fVar80 < 0) goto LAB_14466deb5;
        if ((int)fVar80 < (int)fVar45) {
          param_16[0x1c] = fVar80;
          FUN_14479f406(local_678);
        }
      }
      fVar80 = param_16[0x14];
      fVar45 = param_16[0x20];
      if ((int)fVar45 < (int)fVar80) {
        param_16[0x20] = fVar80;
        if ((uint)((int)param_16[0x21] - (int)fVar45) < (uint)((int)fVar80 - (int)fVar45)) {
          FUN_14475e4ac(local_610);
        }
        memset((void *)((longlong)(int)fVar45 * 4 + *(longlong *)local_610),0,
               (longlong)((int)fVar80 - (int)fVar45) << 2);
      }
      else {
        if ((int)fVar80 < 0) {
LAB_14466deb5:
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(fVar80);
        }
        if ((int)fVar80 < (int)fVar45) {
          param_16[0x20] = fVar80;
          FUN_1401fef06(local_610);
        }
      }
      FUN_149268aee(local_5d0,param_16[0x14],1);
      lVar25 = param_11[1];
      if (1 < (longlong)(int)lVar25) {
        local_518 = (void *)0x0;
        uStack_510 = 0.0;
        local_528 = (int *)0x0;
        uStack_520 = 0;
        lVar42 = *param_11;
        lVar43 = 0;
        do {
          iVar20 = (int)uStack_520;
          uVar11 = (int)uStack_520 + 1;
          uStack_520 = CONCAT44(uStack_520._4_4_,uVar11);
          if (uStack_520._4_4_ < uVar11) {
            FUN_1446f48e2(&local_528);
          }
          local_528[iVar20] = iVar20;
          fVar45 = *(float *)(lVar42 + 0x20 + lVar43);
          auVar93._4_8_ = 0;
          auVar93._0_4_ = fVar45;
          if (1.0 <= fVar45) {
            auVar93 = ZEXT412(0x3f800000);
          }
          lVar28 = (longlong)(int)uStack_510;
          uVar11 = (int)uStack_510 + 1;
          uStack_510 = (double)CONCAT44(uStack_510._4_4_,uVar11);
          if (uStack_510._4_4_ < uVar11) {
            FUN_14475e4ac(&local_518);
          }
          pvVar33 = local_518;
          if (auVar93._0_4_ <= 0.0) {
            auVar6._8_4_ = 0;
            auVar6._0_8_ = auVar93._4_8_;
            auVar93 = auVar6 << 0x20;
          }
          *(int *)((longlong)local_518 + lVar28 * 4) = auVar93._0_4_;
          lVar43 = lVar43 + 0x30;
        } while ((longlong)(int)lVar25 * 0x30 != lVar43);
        lVar25 = (longlong)(int)uStack_510;
        local_538 = 0;
        uStack_534 = 0;
        uStack_532 = 0;
        local_530 = (int)uStack_510;
        if (lVar25 == 0) {
          local_52c = 0;
          uStack_540 = 0;
LAB_14466abff:
          uStack_540 = uStack_540 & 0xffffffff;
          pvVar33 = (void *)0x0;
          param_3 = local_660;
        }
        else {
          FUN_1447c510a(&local_538,(ulonglong)uStack_510 & 0xffffffff,0);
          memcpy((void *)CONCAT26(uStack_532,CONCAT24(uStack_534,local_538)),pvVar33,lVar25 << 2);
          param_3 = local_660;
          lVar25 = (longlong)local_530;
          local_548 = (void *)0x0;
          pvVar33 = (void *)CONCAT26(uStack_532,CONCAT24(uStack_534,local_538));
          uStack_540 = CONCAT44(uStack_540._4_4_,local_530);
          if (lVar25 == 0) goto LAB_14466abff;
          FUN_1447c510a(&local_548,local_530,0);
          memcpy(local_548,pvVar33,lVar25 << 2);
          pvVar33 = local_548;
        }
        piVar18 = local_528;
        iVar20 = (int)uStack_540;
        local_548 = (void *)0x0;
        uStack_540 = 0;
        iVar12 = (int)uStack_520;
        lVar25 = (longlong)(int)uStack_520;
        if (1 < lVar25) {
          local_5f8._0_4_ = iVar20;
          memset(local_4e8,0,0x2f0);
          local_4f8._0_4_ = (uint)piVar18;
          local_4f8._4_4_ = (undefined4)((ulonglong)piVar18 >> 0x20);
          piVar18 = piVar18 + lVar25 + -1;
          uStack_4f0 = SUB84(piVar18,0);
          uStack_4ec = (undefined2)((ulonglong)piVar18 >> 0x20);
          uStack_4ea = (undefined2)((ulonglong)piVar18 >> 0x30);
          fVar45 = logf((float)iVar12);
          local_4e8._0_4_ = (int)(longlong)(fVar45 + fVar45);
          local_5e8._0_8_ = (longlong)iVar20 << 2;
          puVar23 = &local_4f8;
          do {
            piVar13 = (int *)*puVar23;
            piVar18 = (int *)puVar23[1];
            local_648._0_8_ = puVar23;
            iVar20 = *(int *)(puVar23 + 2);
            iVar12 = (int)((ulonglong)((longlong)piVar18 - (longlong)piVar13) >> 2);
            uVar34 = (ulonglong)(iVar12 + 1);
            piVar39 = piVar18;
            piVar37 = piVar13;
            if (iVar20 != 0) {
LAB_14466acc1:
              if (8 < (int)(uint)uVar34) {
                uVar11 = (uint)uVar34 >> 1;
                iVar12 = piVar13[uVar11];
                piVar13[uVar11] = *piVar13;
                *piVar13 = iVar12;
                piVar41 = piVar18 + 1;
                piVar26 = piVar13;
                do {
                  piVar10 = piVar26 + 1;
                  piVar19 = piVar26 + 1;
                  do {
                    piVar26 = piVar19;
                    piVar36 = piVar10;
                    if (piVar18 < piVar26) break;
                    fVar45 = *(float *)((longlong)pvVar33 + (longlong)*piVar26 * 4);
                    pfVar27 = (float *)((longlong)pvVar33 + (longlong)*piVar13 * 4);
                    piVar10 = piVar36 + 1;
                    piVar19 = piVar26 + 1;
                  } while (fVar45 < *pfVar27 || fVar45 == *pfVar27);
                  piVar10 = piVar41 + -2;
                  do {
                    piVar19 = piVar41;
                    piVar29 = piVar10;
                    piVar41 = piVar19 + -1;
                    if (piVar41 <= piVar13) break;
                    fVar45 = *(float *)((longlong)pvVar33 + (longlong)*piVar13 * 4);
                    pfVar27 = (float *)((longlong)pvVar33 + (longlong)*piVar41 * 4);
                    piVar10 = piVar29 + -1;
                  } while (fVar45 < *pfVar27 || fVar45 == *pfVar27);
                  if (piVar41 < piVar26) goto LAB_14466ad51;
                  iVar12 = *piVar26;
                  *piVar26 = *piVar41;
                  *piVar41 = iVar12;
                } while( true );
              }
              if (piVar13 < piVar18) {
                do {
                  piVar39 = piVar13;
                  if (piVar13 + 1 <= piVar18) {
                    iVar20 = *piVar13;
                    piVar37 = piVar13 + 1;
                    piVar41 = piVar13;
                    do {
                      fVar45 = *(float *)((longlong)pvVar33 + (longlong)*piVar37 * 4);
                      pfVar27 = (float *)((longlong)pvVar33 + (longlong)iVar20 * 4);
                      piVar39 = piVar37;
                      iVar12 = *piVar37;
                      if (fVar45 < *pfVar27 || fVar45 == *pfVar27) {
                        piVar39 = piVar41;
                        iVar12 = iVar20;
                      }
                      iVar20 = iVar12;
                      piVar37 = piVar37 + 1;
                      piVar41 = piVar39;
                    } while (piVar37 <= piVar18);
                  }
                  iVar20 = *piVar39;
                  *piVar39 = *piVar18;
                  *piVar18 = iVar20;
                  piVar18 = piVar18 + -1;
                } while (piVar13 < piVar18);
              }
              goto LAB_14466b083;
            }
LAB_14466adfa:
            local_1f8 = (void *)0x0;
            dStack_1f0 = (double)CONCAT44(dStack_1f0._4_4_,local_5f8._0_4_);
            if (local_5f8._0_4_ == 0) {
              dStack_1f0 = 0.0;
            }
            else {
              FUN_1447c510a(&local_1f8,local_5f8._0_4_,0);
              memcpy(local_1f8,pvVar33,local_5e8._0_8_);
            }
            _Src = local_1f8;
            iVar20 = (int)uVar34;
            if (iVar20 != 0) {
              lVar25 = (longlong)(int)dStack_1f0._0_4_;
              auVar58._4_4_ = uStack_16c;
              auVar58._0_4_ = dStack_1f0._0_4_;
              auVar58._8_8_ = 0;
              _local_178 = auVar58 << 0x40;
              if (lVar25 == 0) {
                _local_178 = ZEXT416(dStack_1f0._0_4_) << 0x40;
              }
              else {
                FUN_1447c510a(local_178,(ulonglong)dStack_1f0 & 0xffffffff,0);
                memcpy((void *)local_178._0_8_,_Src,lVar25 << 2);
              }
              iVar12 = (iVar12 - (iVar12 + -1 >> 0x1f)) + -1 >> 1;
              do {
                iVar22 = iVar12;
                while (iVar17 = iVar22 * 2 + 1, iVar17 < iVar20) {
                  iVar21 = iVar22 * 2 + 2;
                  if ((iVar21 < iVar20) &&
                     (fVar45 = *(float *)(local_178._0_8_ + (longlong)piVar13[iVar17] * 4),
                     pfVar27 = (float *)(local_178._0_8_ + (longlong)piVar13[iVar21] * 4),
                     fVar45 < *pfVar27 || fVar45 == *pfVar27)) {
                    iVar17 = iVar21;
                  }
                  iVar21 = piVar13[iVar22];
                  fVar45 = *(float *)(local_178._0_8_ + (longlong)piVar13[iVar17] * 4);
                  pfVar27 = (float *)(local_178._0_8_ + (longlong)iVar21 * 4);
                  if (fVar45 < *pfVar27 || fVar45 == *pfVar27) break;
                  piVar13[iVar22] = piVar13[iVar17];
                  piVar13[iVar17] = iVar21;
                  iVar22 = iVar17;
                }
                bVar44 = iVar12 != 0;
                iVar12 = iVar12 + -1;
              } while (bVar44);
              if (local_178._0_8_ != 0) {
                FUN_1400020a8();
              }
              if (1 < iVar20) {
                iVar12 = *piVar13;
                *piVar13 = piVar13[uVar34 - 1];
                piVar13[uVar34 - 1] = iVar12;
                if (iVar20 != 2) {
                  do {
                    uVar14 = uVar34 - 1;
                    iVar20 = 0;
                    iVar22 = 1;
                    iVar12 = 0;
                    do {
                      iVar20 = iVar20 + 2;
                      iVar17 = iVar22;
                      if (((longlong)iVar20 < (longlong)uVar14) &&
                         (fVar45 = *(float *)((longlong)local_1f8 + (longlong)piVar13[iVar22] * 4),
                         pfVar27 = (float *)((longlong)local_1f8 + (longlong)piVar13[iVar20] * 4),
                         fVar45 < *pfVar27 || fVar45 == *pfVar27)) {
                        iVar17 = iVar20;
                      }
                      iVar20 = piVar13[iVar12];
                      fVar45 = *(float *)((longlong)local_1f8 + (longlong)piVar13[iVar17] * 4);
                      pfVar27 = (float *)((longlong)local_1f8 + (longlong)iVar20 * 4);
                      if (fVar45 < *pfVar27 || fVar45 == *pfVar27) break;
                      piVar13[iVar12] = piVar13[iVar17];
                      piVar13[iVar17] = iVar20;
                      iVar20 = iVar17 * 2;
                      iVar22 = iVar17 * 2 + 1;
                      iVar12 = iVar17;
                    } while ((longlong)iVar22 < (longlong)uVar14);
                    iVar20 = *piVar13;
                    *piVar13 = piVar13[uVar34 - 2];
                    piVar13[uVar34 - 2] = iVar20;
                    uVar34 = uVar14;
                  } while (2 < uVar14);
                }
              }
            }
            if (local_1f8 != (void *)0x0) {
              FUN_1400020a8();
            }
LAB_14466b083:
            puVar23 = (undefined8 *)(local_648._0_8_ + -0x18);
            param_3 = local_660;
          } while (&local_4f8 <= puVar23);
        }
        if (pvVar33 != (void *)0x0) {
          FUN_1400020a8(pvVar33);
        }
        param_4 = local_658._0_1_;
        if (local_548 != (void *)0x0) {
          FUN_1400020a8();
        }
        fVar45 = param_16[0x14];
        if (0 < (int)fVar45) {
          lVar25 = 0;
          do {
            lVar42 = local_660;
            if ((int)fVar45 < 2) {
              fVar80 = 0.0;
            }
            else {
              fVar80 = (float)(int)lVar25 / (float)((int)fVar45 + -1);
            }
            iVar20 = *local_528;
            if (fVar80 <= *(float *)((longlong)local_518 + (longlong)iVar20 * 4)) {
              *(int *)(*(longlong *)local_678 + lVar25 * 4) = iVar20;
              *(int *)(*(longlong *)local_670 + lVar25 * 4) = iVar20;
LAB_14466b1ef:
              uVar46 = 0;
LAB_14466b1f2:
              *(undefined4 *)(*(longlong *)(param_16 + 0x1e) + lVar25 * 4) = uVar46;
              fVar45 = param_16[0x14];
            }
            else {
              iVar20 = local_528[(int)uStack_520 + -1];
              if (*(float *)((longlong)local_518 + (longlong)iVar20 * 4) <= fVar80) {
                *(int *)(*(longlong *)local_678 + lVar25 * 4) = iVar20;
                *(int *)(*(longlong *)local_670 + lVar25 * 4) = iVar20;
                goto LAB_14466b1ef;
              }
              if (1 < (int)uStack_520) {
                uVar34 = 1;
                do {
                  iVar20 = local_528[uVar34 - 1];
                  lVar43 = (longlong)iVar20;
                  if (ABS(*(float *)(*param_11 + 0x20 + lVar43 * 0x30) - fVar80) <= 1e-08) {
LAB_14466b2a7:
                    lVar42 = param_3;
                    *(int *)(*(longlong *)local_678 + lVar25 * 4) = iVar20;
                    *(int *)(*(longlong *)local_670 + lVar25 * 4) = iVar20;
                    uVar46 = 0;
LAB_14466b2c2:
                    param_3 = lVar42;
                    param_4 = local_658._0_1_;
                    goto LAB_14466b1f2;
                  }
                  iVar12 = local_528[uVar34];
                  lVar28 = (longlong)iVar12;
                  fVar31 = *(float *)(*param_11 + 0x20 + lVar28 * 0x30);
                  if (ABS(fVar31 - fVar80) <= 1e-08) {
                    *(int *)(*(longlong *)local_678 + lVar25 * 4) = iVar12;
                    *(int *)(*(longlong *)local_670 + lVar25 * 4) = iVar12;
                    uVar46 = 0;
                    goto LAB_14466b2c2;
                  }
                  param_3 = local_660;
                  if (fVar80 < fVar31) {
                    if (ABS(*(float *)((longlong)local_518 + lVar43 * 4) -
                            *(float *)((longlong)local_518 + lVar28 * 4)) <= 1e-08)
                    goto LAB_14466b2a7;
                    *(int *)(*(longlong *)local_670 + lVar25 * 4) = iVar20;
                    *(int *)(*(longlong *)local_678 + lVar25 * 4) = iVar12;
                    fVar45 = *(float *)((longlong)local_518 + lVar43 * 4);
                    *(float *)(*(longlong *)local_610 + lVar25 * 4) =
                         (fVar80 - fVar45) / (*(float *)((longlong)local_518 + lVar28 * 4) - fVar45)
                    ;
                    uVar46 = FUN_14915b162(local_610,param_12);
                    goto LAB_14466b2c2;
                  }
                  uVar34 = uVar34 + 1;
                } while ((uStack_520 & 0xffffffff) != uVar34);
                param_4 = local_658._0_1_;
              }
            }
            lVar25 = lVar25 + 1;
          } while (lVar25 < (int)fVar45);
        }
        if (CONCAT26(uStack_532,CONCAT24(uStack_534,local_538)) != 0) {
          FUN_1400020a8();
        }
        if (local_528 != (int *)0x0) {
          FUN_1400020a8();
        }
        if (local_518 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    fVar45 = param_16[0x14];
  }
  if (1 < (int)fVar45) {
    fVar45 = 8.96831e-44;
    if ((int)param_7 < 0x40) {
      fVar45 = param_7;
    }
    fVar80 = 5.60519e-45;
    if (4 < (int)fVar45) {
      fVar80 = fVar45;
    }
    if (param_16[0xc] != fVar80) {
      fVar31 = (float)((int)fVar80 + 1);
      FUN_14051b394(local_628,fVar31,1);
      fVar45 = param_16[0x10];
      if ((int)fVar80 < (int)fVar45) {
        if ((uint)fVar31 < (uint)fVar45) {
          param_16[0x10] = fVar31;
          FUN_1401fef06(local_638._0_8_);
        }
      }
      else {
        param_16[0x10] = fVar31;
        if ((uint)((int)param_16[0x11] - (int)fVar45) < (uint)((int)fVar31 - (int)fVar45)) {
          FUN_14475e4ac(local_638._0_8_);
        }
        memset((void *)((longlong)(int)fVar45 * 4 + *(longlong *)local_638._0_8_),0,
               (longlong)((int)fVar31 - (int)fVar45) << 2);
      }
    }
    local_658 = (double)CONCAT71(local_658._1_7_,param_4);
    auVar102._8_8_ = 0;
    auVar102._0_8_ = DAT_14c8464e0;
    uVar14 = (ulonglong)(uint)fVar80;
    lVar25 = 0;
    uVar34 = 0;
    fVar45 = 0.0;
    dVar30 = DAT_14c8464e8;
    dVar73 = DAT_14c8464f0;
    do {
      fVar31 = ((float)(int)uVar34 / (float)(int)((int)fVar80 - 1U)) * (param_6 - param_5) + param_5
      ;
      FUN_149853216(param_3,&local_4f8);
      lVar42 = *(longlong *)local_628;
      *(undefined8 *)(lVar42 + 0x10 + lVar25) = local_4e8._0_8_;
      puVar23 = (undefined8 *)(lVar42 + lVar25);
      *puVar23 = CONCAT44(local_4f8._4_4_,(uint)local_4f8);
      puVar23[1] = CONCAT26(uStack_4ea,CONCAT24(uStack_4ec,uStack_4f0));
      lVar42 = *(longlong *)(param_3 + 8);
      if (lVar42 == 0) {
        dVar47 = 0.0;
        dVar81 = 0.0;
        auVar71 = ZEXT816(0);
      }
      else {
        if (1.0 <= fVar31) {
          fVar31 = 1.0;
        }
        if (fVar31 <= 0.0) {
          fVar31 = 0.0;
        }
        lVar43 = *(longlong *)(lVar42 + 0x48);
        lVar42 = (longlong)(int)((float)(*(int *)(lVar42 + 0x50) + -2) * fVar31) * 0x60;
        pdVar24 = (double *)(lVar43 + 0x80 + lVar42);
        dVar47 = *(double *)(lVar43 + 0x90 + lVar42) - *(double *)(lVar43 + 0x30 + lVar42);
        pdVar15 = (double *)(lVar43 + 0x20 + lVar42);
        auVar71._0_8_ = *pdVar24 - *pdVar15;
        auVar71._8_8_ = pdVar24[1] - pdVar15[1];
        dVar81 = auVar71._8_8_;
      }
      if (uVar34 == 0 || (int)fVar80 - 1U != uVar34) {
        auVar71 = auVar102;
        dVar47 = dVar73;
        dVar81 = dVar30;
      }
      dVar30 = dVar81;
      if (uVar34 == 0) {
        **(undefined4 **)local_638._0_8_ = 0;
      }
      else {
        lVar42 = *(longlong *)local_628;
        dVar73 = *(double *)(lVar42 + 0x10 + lVar25) - *(double *)(lVar42 + -8 + lVar25);
        dVar81 = *(double *)(lVar42 + 8 + lVar25) - *(double *)(lVar42 + -0x10 + lVar25);
        dVar84 = *(double *)(lVar42 + lVar25) - *(double *)(lVar42 + -0x18 + lVar25);
        *(float *)(*(longlong *)local_638._0_8_ + uVar34 * 4) =
             (float)SQRT(dVar73 * dVar73 + dVar84 * dVar84 + dVar81 * dVar81);
        fVar45 = fVar45 + *(float *)(*(longlong *)local_638._0_8_ + uVar34 * 4);
      }
      uVar34 = uVar34 + 1;
      lVar25 = lVar25 + 0x18;
      auVar102 = auVar71;
      dVar73 = dVar47;
    } while (uVar14 != uVar34);
    lVar25 = *(longlong *)(param_16 + 10);
    dVar73 = (double)*param_16;
    *(double *)(lVar25 + uVar14 * 0x18) =
         auVar71._0_8_ * dVar73 + *(double *)(lVar25 + -0x18 + uVar14 * 0x18);
    *(double *)(lVar25 + 8 + uVar14 * 0x18) =
         dVar30 * dVar73 + *(double *)(lVar25 + -0x10 + uVar14 * 0x18);
    *(double *)(lVar25 + 0x10 + uVar14 * 0x18) =
         dVar47 * dVar73 + *(double *)(lVar25 + -8 + uVar14 * 0x18);
    fVar80 = *param_16;
    *(float *)(*(longlong *)(param_16 + 0xe) + uVar14 * 4) = fVar80;
    if ((1e-08 <= fVar80) && (1e-08 <= fVar45)) {
      puVar23 = *(undefined8 **)(param_16 + 2);
      puVar35 = *(undefined8 **)(param_16 + 10);
      puVar23[2] = puVar35[2];
      uVar7 = puVar35[1];
      *puVar23 = *puVar35;
      puVar23[1] = uVar7;
      uVar34 = (ulonglong)(uint)param_16[0x14];
      if (1 < (int)param_16[0x14]) {
        iVar20 = 1;
        lVar25 = 1;
        do {
          fVar80 = *(float *)(*(longlong *)(param_16 + 6) + lVar25 * 4);
          if (local_658._0_1_ == '\x01') {
            fVar80 = (fVar80 * fVar45) / *param_16;
          }
          lVar43 = *(longlong *)(param_16 + 2);
          lVar42 = *(longlong *)(param_16 + 10);
          lVar28 = (longlong)iVar20;
          dVar81 = *(double *)(lVar42 + lVar28 * 0x18);
          dVar84 = *(double *)(lVar42 + 8 + lVar28 * 0x18);
          dVar92 = *(double *)(lVar42 + 0x10 + lVar28 * 0x18);
          dVar30 = *(double *)(lVar43 + -8 + lVar25 * 0x18);
          dVar73 = *(double *)(lVar43 + -0x18 + lVar25 * 0x18);
          dVar47 = *(double *)(lVar43 + -0x10 + lVar25 * 0x18);
          fVar31 = (float)SQRT((dVar30 - dVar92) * (dVar30 - dVar92) +
                               (dVar73 - dVar81) * (dVar73 - dVar81) +
                               (dVar47 - dVar84) * (dVar47 - dVar84));
          if (fVar31 <= fVar80) {
            if (iVar20 < (int)((longlong)(int)param_16[0xc] + -1)) {
              pdVar15 = (double *)(lVar42 + lVar28 * 0x18 + 0x28);
              do {
                dVar74 = dVar92;
                dVar82 = dVar81;
                dVar66 = dVar84;
                fVar97 = fVar31;
                lVar28 = lVar28 + 1;
                dVar81 = pdVar15[-2];
                dVar84 = pdVar15[-1];
                dVar92 = *pdVar15;
                fVar31 = (float)SQRT((dVar92 - dVar30) * (dVar92 - dVar30) +
                                     (dVar81 - dVar73) * (dVar81 - dVar73) +
                                     (dVar84 - dVar47) * (dVar84 - dVar47));
                iVar20 = iVar20 + 1;
                if ((longlong)(int)param_16[0xc] + -1 <= lVar28) break;
                pdVar15 = pdVar15 + 3;
              } while (fVar97 < fVar80 != fVar80 <= fVar31);
            }
            else {
              lVar42 = lVar42 + lVar28 * 0x18;
              dVar74 = *(double *)(lVar42 + -8);
              dVar82 = *(double *)(lVar42 + -0x18);
              dVar66 = *(double *)(lVar42 + -0x10);
              fVar97 = (float)SQRT((dVar30 - dVar74) * (dVar30 - dVar74) +
                                   (dVar73 - dVar82) * (dVar73 - dVar82) +
                                   (dVar47 - dVar66) * (dVar47 - dVar66));
            }
            fVar98 = fVar31;
            dVar30 = dVar92;
            dVar73 = dVar84;
            dVar47 = dVar81;
            if (fVar31 < fVar97) {
              fVar98 = fVar97;
              fVar97 = fVar31;
              dVar30 = dVar74;
              dVar73 = dVar66;
              dVar47 = dVar82;
              dVar66 = dVar84;
              dVar82 = dVar81;
              dVar74 = dVar92;
            }
            if (1e-08 < ABS(fVar97 - fVar98)) {
              dVar81 = (double)((fVar80 - fVar97) / (fVar98 - fVar97));
              dVar74 = dVar74 + (dVar30 - dVar74) * dVar81;
              dVar66 = dVar66 + (dVar73 - dVar66) * dVar81;
              dVar82 = dVar82 + (dVar47 - dVar82) * dVar81;
            }
          }
          else {
            dVar82 = (double)(fVar80 / fVar31);
            dVar74 = (dVar92 - dVar30) * dVar82 + dVar30;
            dVar66 = (dVar84 - dVar47) * dVar82 + dVar47;
            dVar82 = (dVar81 - dVar73) * dVar82 + dVar73;
          }
          pdVar15 = (double *)(lVar43 + lVar25 * 0x18);
          *pdVar15 = dVar82;
          pdVar15[1] = dVar66;
          pdVar15[2] = dVar74;
          lVar25 = lVar25 + 1;
          uVar34 = (ulonglong)(int)param_16[0x14];
        } while (lVar25 < (longlong)uVar34);
      }
      local_528 = (int *)0x0;
      uStack_520 = 0;
      if (0 < (int)uVar34 && param_13 < 1.0) {
        lVar25 = 0xc;
        lVar42 = 0;
        do {
          uVar3 = *(ushort *)(*(longlong *)local_668 + lVar25);
          if ((((uVar3 == 0xffff) ||
               (*(uint *)(lVar4 + 0xc0) == (uint)uVar3 ||
                (int)*(uint *)(lVar4 + 0xc0) < (int)(uint)uVar3)) ||
              (lVar43 = *(longlong *)(*(longlong *)(lVar4 + 0xb8) + (ulonglong)(uint)uVar3 * 8),
              lVar43 == 0)) ||
             (((bVar2 = *(byte *)(lVar43 + 0x10), 1 < bVar2 - 1 && (bVar2 != 0x80)) &&
              ((0x20 < bVar2 || ((0x100010010U >> ((ulonglong)bVar2 & 0x3f) & 1) == 0)))))) {
            puVar23 = &DAT_14c846480;
            puVar35 = &local_4f8;
            for (lVar43 = 0xc; lVar43 != 0; lVar43 = lVar43 + -1) {
              *puVar35 = *puVar23;
              puVar23 = puVar23 + 1;
              puVar35 = puVar35 + 1;
            }
          }
          else {
            FUN_1401571e4(lVar4,&local_4f8,lVar43,3);
          }
          uVar34 = uStack_520;
          lVar43 = (longlong)(int)uStack_520;
          uVar11 = (int)uStack_520 + 1;
          uStack_520 = CONCAT44(uStack_520._4_4_,uVar11);
          if (uStack_520._4_4_ < uVar11) {
            FUN_144a2c682(&local_528,uVar34 & 0xffffffff);
          }
          puVar23 = &local_4f8;
          piVar18 = local_528 + lVar43 * 0x18;
          for (lVar28 = 0xc; lVar28 != 0; lVar28 = lVar28 + -1) {
            *(undefined8 *)piVar18 = *puVar23;
            puVar23 = puVar23 + 1;
            piVar18 = piVar18 + 2;
          }
          lVar42 = lVar42 + 1;
          uVar34 = (ulonglong)(int)param_16[0x14];
          lVar25 = lVar25 + 0x20;
        } while (lVar42 < (longlong)uVar34);
      }
      if (0 < (int)uVar34) {
        fVar45 = param_13;
        if (1.0 <= param_13) {
          fVar45 = 1.0;
        }
        if (fVar45 <= 0.0) {
          fVar45 = 0.0;
        }
        local_5f8._0_4_ = fVar45;
        lVar42 = 3;
        local_648 = ZEXT816(0x3ff0000000000000) << 0x40;
        pfVar27 = (float *)0x0;
        lVar25 = 0;
        dVar30 = 0.0;
        do {
          fVar45 = (float)uVar34;
          uVar3 = *(ushort *)(*(longlong *)local_668 + lVar42 * 4);
          if (((uVar3 == 0xffff) ||
              (*(uint *)(lVar4 + 0xc0) == (uint)uVar3 ||
               (int)*(uint *)(lVar4 + 0xc0) < (int)(uint)uVar3)) ||
             ((lVar43 = *(longlong *)(*(longlong *)(lVar4 + 0xb8) + (ulonglong)(uint)uVar3 * 8),
              lVar43 == 0 ||
              (((bVar2 = *(byte *)(lVar43 + 0x10), 1 < bVar2 - 1 && (bVar2 != 0x80)) &&
               ((0x20 < bVar2 || ((0x100010010U >> ((ulonglong)bVar2 & 0x3f) & 1) == 0)))))))) {
            puVar23 = &DAT_14c846480;
            puVar35 = (undefined8 *)local_178;
            for (lVar43 = 0xc; lVar43 != 0; lVar43 = lVar43 + -1) {
              *puVar35 = *puVar23;
              puVar23 = puVar23 + 1;
              puVar35 = puVar35 + 1;
            }
          }
          else {
            FUN_1401571e4(lVar4,local_178,lVar43,3);
            fVar45 = param_16[0x14];
          }
          lVar43 = *(longlong *)local_608;
          local_158 = *(double *)(lVar43 + (longlong)pfVar27);
          dStack_150 = ((double *)(lVar43 + (longlong)pfVar27))[1];
          local_148 = *(double *)(lVar43 + 0x10 + (longlong)pfVar27);
          uStack_140 = 0;
          if ((longlong)dVar30 < (longlong)((int)fVar45 + -1)) {
            pdVar15 = (double *)(lVar43 + (longlong)pfVar27);
            pdVar24 = (double *)((longlong)pfVar27 + lVar43 + 0x18);
            dVar73 = *(double *)((longlong)pfVar27 + lVar43 + 0x28) -
                     *(double *)((longlong)pfVar27 + lVar43 + 0x10);
            pdVar40 = (double *)((longlong)pfVar27 + lVar43 + 0x20);
            pdVar38 = (double *)((longlong)pfVar27 + lVar43 + 8);
          }
          else {
            fVar45 = param_16[4];
            pdVar24 = (double *)(lVar43 + (longlong)((int)fVar45 + -1) * 0x18);
            pdVar15 = (double *)(lVar43 + -0x30 + (longlong)(int)fVar45 * 0x18);
            dVar73 = pdVar24[2] - pdVar15[2];
            pdVar40 = (double *)(lVar43 + (longlong)((int)fVar45 + -1) * 0x18 + 8);
            pdVar38 = (double *)(lVar43 + (longlong)(int)fVar45 * 0x18 + -0x28);
          }
          dVar47 = *pdVar40 - *pdVar38;
          dVar81 = *pdVar24 - *pdVar15;
          if ((((9.999999747378752e-05 < ABS(dVar81)) || (9.999999747378752e-05 < ABS(dVar47))) ||
              (9.999999747378752e-05 < ABS(dVar73))) &&
             (((9.999999747378752e-05 < ABS(*param_8) || (9.999999747378752e-05 < ABS(param_8[1])))
              || (9.999999747378752e-05 < ABS(param_8[2]))))) {
            dVar84 = dVar73 * dVar73 + dVar81 * dVar81 + dVar47 * dVar47;
            if (((dVar84 != 1.0) || (dVar92 = dVar47, dVar82 = dVar81, dVar74 = dVar73, NAN(dVar84))
                ) && (dVar92 = DAT_14c8464e8, dVar82 = DAT_14c8464e0, dVar74 = DAT_14c8464f0,
                     9.99999993922529e-09 <= dVar84)) {
              dVar84 = 1.0 / SQRT(dVar84);
              dVar92 = dVar47 * dVar84;
              dVar82 = dVar81 * dVar84;
              dVar74 = dVar73 * dVar84;
            }
            dVar73 = *param_8;
            dVar47 = param_8[1];
            dVar81 = dVar47 * (double)local_178._0_8_ - dVar73 * stack0xfffffffffffffe90;
            dVar66 = param_8[2] * stack0xfffffffffffffe90 - dVar47 * (double)local_168._0_8_;
            dVar106 = dVar73 * (double)local_168._0_8_ - (double)local_178._0_8_ * param_8[2];
            dVar66 = dVar66 + dVar66;
            dVar106 = dVar106 + dVar106;
            dVar81 = dVar81 + dVar81;
            dVar84 = dVar81 * (double)local_168._8_8_ + param_8[2] +
                     (dVar106 * (double)local_178._0_8_ - dVar66 * stack0xfffffffffffffe90);
            dVar73 = (dVar81 * stack0xfffffffffffffe90 - dVar106 * (double)local_168._0_8_) +
                     (double)local_168._8_8_ * dVar66 + dVar73;
            dVar47 = ((double)local_168._0_8_ * dVar66 - (double)local_178._0_8_ * dVar81) +
                     (double)local_168._8_8_ * dVar106 + dVar47;
            dVar81 = dVar84 * dVar84 + dVar73 * dVar73 + dVar47 * dVar47;
            if (((dVar81 != 1.0) ||
                (dVar66 = dVar73, dVar106 = dVar47, dVar75 = dVar84, NAN(dVar81))) &&
               (dVar66 = DAT_14c8464e0, dVar106 = DAT_14c8464e8, dVar75 = DAT_14c8464f0,
               9.99999993922529e-09 <= dVar81)) {
              dVar81 = 1.0 / SQRT(dVar81);
              dVar66 = dVar81 * dVar73;
              dVar106 = dVar47 * dVar81;
              dVar75 = dVar84 * dVar81;
            }
            dVar73 = dVar75 * dVar74 + dVar66 * dVar82 + dVar106 * dVar92 + 1.0;
            if (dVar73 < 9.999999974752427e-07) {
              if ((ABS(dVar66) <= ABS(dVar106)) ||
                 (dVar92 = DAT_14c846390, dVar82 = DAT_14c846388, dVar74 = DAT_14c846398,
                 ABS(dVar66) <= ABS(dVar75))) {
                dVar92 = -DAT_14c8463a8;
                dVar82 = -DAT_14c8463a0;
                dVar74 = -DAT_14c8463b0;
              }
              dVar73 = 0.0;
            }
            dVar90 = dVar66 * dVar92 - dVar82 * dVar106;
            dVar47 = dVar75 * dVar82 - dVar74 * dVar66;
            dVar92 = dVar106 * dVar74 - dVar92 * dVar75;
            dVar81 = dVar90 * dVar90 + dVar92 * dVar92;
            dVar84 = dVar73 * dVar73 + dVar47 * dVar47;
            auVar57._0_8_ = dVar81 + dVar84;
            auVar57._8_8_ = dVar81 + dVar84;
            auVar52._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar57._8_8_);
            auVar52._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar57._0_8_);
            auVar58 = sqrtpd(auVar57,auVar57);
            auVar58 = divpd(_DAT_149934d80,auVar58);
            auVar76._0_8_ = auVar58._0_8_ * dVar90;
            auVar76._8_8_ = auVar58._8_8_ * dVar73;
            dVar92 = (double)((ulonglong)(dVar92 * auVar58._0_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar57._0_8_));
            dVar82 = (double)((ulonglong)(dVar47 * auVar58._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar57._8_8_));
            auVar58 = blendvpd(local_648,auVar76,auVar52);
            dVar73 = auVar58._0_8_;
            dVar47 = auVar58._8_8_;
            auVar86._8_4_ = SUB84(dVar92,0);
            auVar86._0_8_ = dVar92;
            auVar86._12_4_ = (int)((ulonglong)dVar92 >> 0x20);
            auVar59._8_4_ = SUB84(dVar82,0);
            auVar59._0_8_ = dVar82;
            auVar59._12_4_ = (int)((ulonglong)dVar82 >> 0x20);
            dVar81 = stack0xfffffffffffffe90 * dVar73 * -1.0 +
                     (double)local_168._0_8_ * dVar82 +
                     (double)local_168._8_8_ * dVar92 * 1.0 + (double)local_178._0_8_ * dVar47;
            dVar84 = (double)local_178._0_8_ * dVar73 * 1.0 +
                     (double)local_168._8_8_ * auVar59._8_8_ +
                     (double)local_168._0_8_ * auVar86._8_8_ * -1.0 +
                     stack0xfffffffffffffe90 * dVar47;
            dVar92 = (double)local_168._8_8_ * dVar73 * 1.0 +
                     ((dVar92 * stack0xfffffffffffffe90 * 1.0 + dVar47 * (double)local_168._0_8_) -
                     (double)local_178._0_8_ * dVar82);
            dVar82 = (double)local_168._0_8_ * dVar73 * -1.0 +
                     ((auVar86._8_8_ * (double)local_178._0_8_ * -1.0 +
                      dVar47 * (double)local_168._8_8_) - stack0xfffffffffffffe90 * auVar59._8_8_);
            dVar73 = dVar92 * dVar92 + dVar81 * dVar81;
            dVar47 = dVar82 * dVar82 + dVar84 * dVar84;
            auVar60._0_8_ = dVar73 + dVar47;
            auVar60._8_8_ = dVar73 + dVar47;
            auVar63._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar60._8_8_);
            auVar63._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar60._0_8_);
            auVar58 = sqrtpd(auVar60,auVar60);
            auVar58 = divpd(_DAT_149934d80,auVar58);
            auVar94._0_8_ = auVar58._0_8_ * dVar92;
            auVar94._8_8_ = auVar58._8_8_ * dVar82;
            local_168 = blendvpd(local_648,auVar94,auVar63);
            stack0xfffffffffffffe90 =
                 (double)((ulonglong)(dVar84 * auVar58._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar60._8_8_));
            local_178._0_8_ =
                 (ulonglong)(dVar81 * auVar58._0_8_) &
                 -(ulonglong)(9.99999993922529e-09 <= auVar60._0_8_);
          }
          dVar73 = param_10[2] - *(double *)(lVar43 + 0x10 + (longlong)pfVar27);
          dVar47 = param_10[1] - *(double *)(lVar43 + 8 + (longlong)pfVar27);
          dVar81 = *param_10 - *(double *)(lVar43 + (longlong)pfVar27);
          if (((9.999999747378752e-05 < ABS(*param_9)) || (9.999999747378752e-05 < ABS(param_9[1])))
             || (9.999999747378752e-05 < ABS(param_9[2]))) {
            if (((9.999999747378752e-05 < ABS(*param_8)) ||
                (9.999999747378752e-05 < ABS(param_8[1]))) ||
               (9.999999747378752e-05 < ABS(param_8[2]))) {
              dVar84 = *param_8;
              dVar92 = param_8[1];
              dVar82 = dVar92 * (double)local_178._0_8_ - dVar84 * stack0xfffffffffffffe90;
              dVar66 = param_8[2] * stack0xfffffffffffffe90 - dVar92 * (double)local_168._0_8_;
              dVar106 = dVar84 * (double)local_168._0_8_ - (double)local_178._0_8_ * param_8[2];
              dVar66 = dVar66 + dVar66;
              dVar106 = dVar106 + dVar106;
              dVar82 = dVar82 + dVar82;
              dVar74 = dVar82 * (double)local_168._8_8_ + param_8[2] +
                       (dVar106 * (double)local_178._0_8_ - dVar66 * stack0xfffffffffffffe90);
              dVar84 = (dVar82 * stack0xfffffffffffffe90 - dVar106 * (double)local_168._0_8_) +
                       (double)local_168._8_8_ * dVar66 + dVar84;
              dVar92 = ((double)local_168._0_8_ * dVar66 - (double)local_178._0_8_ * dVar82) +
                       (double)local_168._8_8_ * dVar106 + dVar92;
              dVar82 = dVar74 * dVar74 + dVar84 * dVar84 + dVar92 * dVar92;
              if (((dVar82 != 1.0) ||
                  (dVar66 = dVar74, dVar106 = dVar84, dVar75 = dVar92, NAN(dVar82))) &&
                 (dVar66 = DAT_14c8464f0, dVar106 = DAT_14c8464e0, dVar75 = DAT_14c8464e8,
                 9.99999993922529e-09 <= dVar82)) {
                dVar82 = 1.0 / SQRT(dVar82);
                dVar66 = dVar74 * dVar82;
                dVar106 = dVar82 * dVar84;
                dVar75 = dVar92 * dVar82;
              }
              dVar84 = dVar73 * dVar66 + dVar81 * dVar106 + dVar47 * dVar75;
              dVar73 = dVar73 - dVar66 * dVar84;
              dVar47 = dVar47 - dVar75 * dVar84;
              dVar81 = dVar81 - dVar84 * dVar106;
            }
            if ((((9.999999747378752e-05 < ABS(dVar81)) || (9.999999747378752e-05 < ABS(dVar47))) ||
                (9.999999747378752e-05 < ABS(dVar73))) &&
               (((9.999999747378752e-05 < ABS(*param_9) || (9.999999747378752e-05 < ABS(param_9[1]))
                 ) || (9.999999747378752e-05 < ABS(param_9[2]))))) {
              dVar84 = dVar73 * dVar73 + dVar81 * dVar81 + dVar47 * dVar47;
              if (((dVar84 != 1.0) ||
                  (dVar92 = dVar81, dVar82 = dVar73, dVar74 = dVar47, NAN(dVar84))) &&
                 (dVar92 = DAT_14c8464e0, dVar82 = DAT_14c8464f0, dVar74 = DAT_14c8464e8,
                 9.99999993922529e-09 <= dVar84)) {
                dVar84 = 1.0 / SQRT(dVar84);
                dVar92 = dVar81 * dVar84;
                dVar82 = dVar73 * dVar84;
                dVar74 = dVar47 * dVar84;
              }
              dVar73 = *param_9;
              dVar47 = param_9[1];
              dVar81 = dVar47 * (double)local_178._0_8_ - dVar73 * stack0xfffffffffffffe90;
              dVar66 = param_9[2] * stack0xfffffffffffffe90 - dVar47 * (double)local_168._0_8_;
              dVar106 = dVar73 * (double)local_168._0_8_ - (double)local_178._0_8_ * param_9[2];
              dVar66 = dVar66 + dVar66;
              dVar106 = dVar106 + dVar106;
              dVar81 = dVar81 + dVar81;
              dVar84 = dVar81 * (double)local_168._8_8_ + param_9[2] +
                       (dVar106 * (double)local_178._0_8_ - dVar66 * stack0xfffffffffffffe90);
              dVar73 = (dVar81 * stack0xfffffffffffffe90 - dVar106 * (double)local_168._0_8_) +
                       (double)local_168._8_8_ * dVar66 + dVar73;
              dVar47 = ((double)local_168._0_8_ * dVar66 - (double)local_178._0_8_ * dVar81) +
                       (double)local_168._8_8_ * dVar106 + dVar47;
              dVar81 = dVar84 * dVar84 + dVar73 * dVar73 + dVar47 * dVar47;
              if (((dVar81 != 1.0) ||
                  (dVar66 = dVar73, dVar106 = dVar47, dVar75 = dVar84, NAN(dVar81))) &&
                 (dVar66 = DAT_14c8464e0, dVar106 = DAT_14c8464e8, dVar75 = DAT_14c8464f0,
                 9.99999993922529e-09 <= dVar81)) {
                dVar81 = 1.0 / SQRT(dVar81);
                dVar66 = dVar81 * dVar73;
                dVar106 = dVar47 * dVar81;
                dVar75 = dVar84 * dVar81;
              }
              dVar73 = dVar75 * dVar82 + dVar66 * dVar92 + dVar106 * dVar74 + 1.0;
              if (dVar73 < 9.999999974752427e-07) {
                if ((ABS(dVar66) <= ABS(dVar106)) ||
                   (dVar92 = DAT_14c846388, dVar82 = DAT_14c846398, dVar74 = DAT_14c846390,
                   ABS(dVar66) <= ABS(dVar75))) {
                  dVar92 = -DAT_14c8463a0;
                  dVar82 = -DAT_14c8463b0;
                  dVar74 = -DAT_14c8463a8;
                }
                dVar73 = 0.0;
              }
              dVar90 = dVar66 * dVar74 - dVar92 * dVar106;
              dVar66 = dVar75 * dVar92 - dVar82 * dVar66;
              dVar84 = dVar106 * dVar82 - dVar74 * dVar75;
              dVar47 = dVar90 * dVar90 + dVar84 * dVar84;
              dVar81 = dVar73 * dVar73 + dVar66 * dVar66;
              auVar61._0_8_ = dVar47 + dVar81;
              auVar61._8_8_ = dVar47 + dVar81;
              auVar48._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar61._8_8_);
              auVar48._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar61._0_8_);
              auVar58 = sqrtpd(auVar61,auVar61);
              auVar58 = divpd(_DAT_149934d80,auVar58);
              auVar67._0_8_ = auVar58._0_8_ * dVar90;
              auVar67._8_8_ = auVar58._8_8_ * dVar73;
              dVar92 = (double)((ulonglong)(dVar84 * auVar58._0_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar61._0_8_));
              dVar82 = (double)((ulonglong)(dVar66 * auVar58._8_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar61._8_8_));
              auVar58 = blendvpd(local_648,auVar67,auVar48);
              dVar73 = auVar58._0_8_;
              dVar81 = auVar58._8_8_;
              auVar95._8_4_ = SUB84(dVar92,0);
              auVar95._0_8_ = dVar92;
              auVar95._12_4_ = (int)((ulonglong)dVar92 >> 0x20);
              auVar87._8_4_ = SUB84(dVar82,0);
              auVar87._0_8_ = dVar82;
              auVar87._12_4_ = (int)((ulonglong)dVar82 >> 0x20);
              dVar47 = stack0xfffffffffffffe90 * dVar73 * -1.0 +
                       (double)local_168._0_8_ * dVar82 +
                       (double)local_168._8_8_ * dVar92 * 1.0 + (double)local_178._0_8_ * dVar81;
              dVar84 = (double)local_178._0_8_ * dVar73 * 1.0 +
                       (double)local_168._8_8_ * auVar87._8_8_ +
                       (double)local_168._0_8_ * auVar95._8_8_ * -1.0 +
                       stack0xfffffffffffffe90 * dVar81;
              dVar92 = (double)local_168._8_8_ * dVar73 * 1.0 +
                       ((dVar92 * stack0xfffffffffffffe90 * 1.0 + dVar81 * (double)local_168._0_8_)
                       - (double)local_178._0_8_ * dVar82);
              dVar73 = (double)local_168._0_8_ * dVar73 * -1.0 +
                       ((auVar95._8_8_ * (double)local_178._0_8_ * -1.0 +
                        dVar81 * (double)local_168._8_8_) - stack0xfffffffffffffe90 * auVar87._8_8_)
              ;
              dVar81 = dVar92 * dVar92 + dVar47 * dVar47;
              dVar82 = dVar73 * dVar73 + dVar84 * dVar84;
              auVar77._0_8_ = dVar81 + dVar82;
              auVar77._8_8_ = dVar81 + dVar82;
              auVar49._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar77._8_8_);
              auVar49._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar77._0_8_);
              auVar58 = sqrtpd(auVar77,auVar77);
              auVar58 = divpd(_DAT_149934d80,auVar58);
              auVar83._0_8_ = auVar58._0_8_ * dVar92;
              auVar83._8_8_ = auVar58._8_8_ * dVar73;
              local_178._0_8_ =
                   (ulonglong)(dVar47 * auVar58._0_8_) &
                   -(ulonglong)(9.99999993922529e-09 <= auVar77._0_8_);
              register0x00001248 =
                   (double)((ulonglong)(dVar84 * auVar58._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar77._8_8_));
              local_168 = blendvpd(local_648,auVar83,auVar49);
            }
          }
          if (1.0 <= param_13) {
            lVar43 = param_11[1];
            uVar3 = *(ushort *)(*(longlong *)local_668 + lVar42 * 4);
            puVar23 = (undefined8 *)local_178;
            puVar35 = &local_4f8;
            for (lVar28 = 0xc; lVar28 != 0; lVar28 = lVar28 + -1) {
              *puVar35 = *puVar23;
              puVar23 = puVar23 + 1;
              puVar35 = puVar35 + 1;
            }
            if ((((uVar3 != 0xffff) &&
                 (*(uint *)(lVar4 + 0xc0) != (uint)uVar3 &&
                  (int)(uint)uVar3 <= (int)*(uint *)(lVar4 + 0xc0))) &&
                (lVar28 = *(longlong *)(*(longlong *)(lVar4 + 0xb8) + (ulonglong)(uint)uVar3 * 8),
                lVar28 != 0)) &&
               (((bVar2 = *(byte *)(lVar28 + 0x10), bVar2 - 1 < 2 || (bVar2 == 0x80)) ||
                ((bVar2 < 0x21 && ((0x100010010U >> ((ulonglong)bVar2 & 0x3f) & 1) != 0)))))) {
              local_680 = 0;
              local_688 = 0;
              local_690 = 0;
              local_698 = (char *)CONCAT71(local_698._1_7_,(int)lVar43 == 0 & param_14);
              FUN_140122d4e(lVar4,lVar28,&local_4f8,3);
            }
          }
          else {
            local_638._0_8_ = lVar25;
            local_658 = dVar30;
            local_628 = pfVar27;
            FUN_14915b8da(&local_4f8,(longlong)local_528 + lVar25,local_178);
            puVar23 = &local_4f8;
            puVar35 = (undefined8 *)local_178;
            for (lVar25 = 0xc; lVar25 != 0; lVar25 = lVar25 + -1) {
              *puVar35 = *puVar23;
              puVar23 = puVar23 + 1;
              puVar35 = puVar35 + 1;
            }
            lVar25 = param_11[1];
            uVar3 = *(ushort *)(*(longlong *)local_668 + lVar42 * 4);
            puVar23 = (undefined8 *)local_178;
            puVar35 = &local_4f8;
            for (lVar43 = 0xc; lVar43 != 0; lVar43 = lVar43 + -1) {
              *puVar35 = *puVar23;
              puVar23 = puVar23 + 1;
              puVar35 = puVar35 + 1;
            }
            if ((((uVar3 != 0xffff) &&
                 (*(uint *)(lVar4 + 0xc0) != (uint)uVar3 &&
                  (int)(uint)uVar3 <= (int)*(uint *)(lVar4 + 0xc0))) &&
                (lVar43 = *(longlong *)(*(longlong *)(lVar4 + 0xb8) + (ulonglong)(uint)uVar3 * 8),
                lVar43 != 0)) &&
               (((bVar2 = *(byte *)(lVar43 + 0x10), bVar2 - 1 < 2 || (bVar2 == 0x80)) ||
                ((bVar2 < 0x21 && ((0x100010010U >> ((ulonglong)bVar2 & 0x3f) & 1) != 0)))))) {
              local_680 = 0;
              local_688 = 0;
              local_690 = 0;
              local_698 = (char *)CONCAT71(local_698._1_7_,(int)lVar25 == 0 & param_14);
              FUN_140122d4e(lVar4,lVar43,&local_4f8,3);
            }
            pfVar27 = local_628;
            dVar30 = local_658;
            lVar25 = local_638._0_8_;
          }
          dVar30 = (double)((longlong)dVar30 + 1);
          uVar34 = (ulonglong)(int)param_16[0x14];
          lVar42 = lVar42 + 8;
          lVar25 = lVar25 + 0x60;
          pfVar27 = pfVar27 + 6;
        } while ((longlong)dVar30 < (longlong)uVar34);
      }
      auVar102 = _DAT_14c8464c0;
      dVar84 = DAT_14c8464b8;
      pfVar27 = DAT_14c8464b0;
      dVar81 = DAT_14c8464a8;
      dVar47 = DAT_14c8464a0;
      auVar58 = _DAT_14c846490;
      dVar73 = DAT_14c846488;
      dVar30 = DAT_14c846480;
      if (0 < (int)param_11[1]) {
        local_608 = DAT_14c8464d0;
        dStack_600 = dRam000000014c8464d8;
        local_550 = *(undefined4 *)(*(undefined8 **)local_668 + 1);
        local_558 = **(undefined8 **)local_668;
        FUN_1408130c0(lVar4,&local_538);
        if ((((uint)uStack_532 < DAT_14c87eb08 + 1U) &&
            (CONCAT44(local_530,CONCAT22(uStack_532,uStack_534)) != 0)) && ((char)local_538 != '\0')
           ) {
          local_568 = CONCAT26(uStack_532,CONCAT24(uStack_534,local_538));
          local_560 = local_530;
          uVar11 = FUN_140813180(lVar4);
          if ((((int)uVar11 < 0) || (*(int *)(lVar4 + 0xc0) <= (int)uVar11)) ||
             ((lVar25 = *(longlong *)(*(longlong *)(lVar4 + 0xb8) + (ulonglong)uVar11 * 8),
              lVar25 == 0 ||
              (((bVar2 = *(byte *)(lVar25 + 0x10), 1 < bVar2 - 1 && (bVar2 != 0x80)) &&
               ((0x20 < bVar2 || ((0x100010010U >> ((ulonglong)bVar2 & 0x3f) & 1) == 0)))))))) {
            puVar23 = &DAT_14c846480;
            puVar35 = &local_4f8;
            for (lVar25 = 0xc; lVar25 != 0; lVar25 = lVar25 + -1) {
              *puVar35 = *puVar23;
              puVar23 = puVar23 + 1;
              puVar35 = puVar35 + 1;
            }
          }
          else {
            FUN_1401571e4(lVar4,&local_4f8,lVar25,3);
          }
          dVar30 = (double)CONCAT44(local_4f8._4_4_,(uint)local_4f8);
          dVar73 = (double)CONCAT26(uStack_4ea,CONCAT24(uStack_4ec,uStack_4f0));
          local_608 = local_4a8;
          dStack_600 = dStack_4a0;
          auVar58 = local_4e8;
          auVar102 = local_4b8;
          pfVar27 = local_4c8;
          dVar84 = dStack_4c0;
          dVar47 = local_4d8;
          dVar81 = dStack_4d0;
        }
        if (0 < (int)param_16[0x14]) {
          lVar25 = 0xc;
          lVar42 = 0;
          lVar43 = 0;
          do {
            uVar3 = *(ushort *)(*(longlong *)local_668 + lVar25);
            if ((((uVar3 == 0xffff) ||
                 (*(uint *)(lVar4 + 0xc0) == (uint)uVar3 ||
                  (int)*(uint *)(lVar4 + 0xc0) < (int)(uint)uVar3)) ||
                (lVar28 = *(longlong *)(*(longlong *)(lVar4 + 0xb8) + (ulonglong)(uint)uVar3 * 8),
                lVar28 == 0)) ||
               (((bVar2 = *(byte *)(lVar28 + 0x10), 1 < bVar2 - 1 && (bVar2 != 0x80)) &&
                ((0x20 < bVar2 || ((0x100010010U >> ((ulonglong)bVar2 & 0x3f) & 1) == 0)))))) {
              puVar23 = &DAT_14c846480;
              puVar35 = &local_4f8;
              for (lVar28 = 0xc; lVar28 != 0; lVar28 = lVar28 + -1) {
                *puVar35 = *puVar23;
                puVar23 = puVar23 + 1;
                puVar35 = puVar35 + 1;
              }
            }
            else {
              FUN_1401571e4(lVar4,&local_4f8,lVar28,1);
            }
            puVar23 = &local_4f8;
            puVar35 = (undefined8 *)(*(longlong *)(param_16 + 0x22) + lVar42);
            for (lVar28 = 0xc; lVar28 != 0; lVar28 = lVar28 + -1) {
              *puVar35 = *puVar23;
              puVar23 = puVar23 + 1;
              puVar35 = puVar35 + 1;
            }
            lVar43 = lVar43 + 1;
            uVar34 = (ulonglong)(int)param_16[0x14];
            lVar42 = lVar42 + 0x60;
            lVar25 = lVar25 + 0x20;
          } while (lVar43 < (longlong)uVar34);
          if (0 < (int)param_16[0x14]) {
            if (1.0 <= param_13) {
              param_13 = 1.0;
            }
            if (param_13 <= 0.0) {
              param_13 = 0.0;
            }
            local_5a8 = (double)param_13;
            local_598._0_8_ = 1.0 - local_5a8;
            local_598._8_8_ = 0;
            lVar25 = 3;
            lVar42 = 10;
            lVar43 = 0;
            do {
              iVar20 = *(int *)(*(longlong *)local_670 + lVar43 * 4);
              puVar23 = (undefined8 *)(longlong)iVar20;
              if (iVar20 < (int)param_11[1]) {
                iVar12 = *(int *)(*(longlong *)local_678 + lVar43 * 4);
                lVar28 = (longlong)iVar12;
                if (iVar12 < (int)param_11[1]) {
                  lVar5 = *param_11;
                  pdVar15 = (double *)(lVar5 + (longlong)puVar23 * 0x30);
                  dVar82 = *pdVar15;
                  dVar74 = pdVar15[1];
                  local_5f8 = *(undefined1 (*) [16])(lVar5 + 0x10 + (longlong)puVar23 * 0x30);
                  dVar92 = local_5f8._8_8_;
                  local_648._0_8_ = dVar30;
                  local_648._8_8_ = dVar73;
                  if (iVar20 != iVar12) {
                    puVar23 = (undefined8 *)(lVar28 * 0x30);
                    lVar28 = *(longlong *)local_610;
                    fVar45 = *(float *)(lVar28 + lVar43 * 4);
                    if (fVar45 <= 1.0) {
                      if (1e-08 < fVar45) {
                        dVar30 = *(double *)(lVar5 + (longlong)puVar23);
                        dVar73 = *(double *)(lVar5 + 8 + (longlong)puVar23);
                        dVar66 = *(double *)(lVar5 + 0x10 + (longlong)puVar23);
                        dVar106 = *(double *)(lVar5 + 0x18 + (longlong)puVar23);
                        local_5e8._0_8_ = dVar73;
                        dVar75 = dVar92 * dVar106 +
                                 (double)local_5f8._0_8_ * dVar66 +
                                 dVar82 * dVar30 + dVar74 * dVar73;
                        puVar23 = &DAT_149931160;
                        dVar90 = dVar75 * (double)(&DAT_149931160)[0.0 <= dVar75];
                        dVar104 = 1.0 - (double)fVar45;
                        dVar75 = (double)(&DAT_149931160)[0.0 <= dVar75] * (double)fVar45;
                        local_638 = auVar102;
                        local_628 = pfVar27;
                        dStack_620 = dVar84;
                        local_5b8 = auVar58;
                        if (dVar90 < 0.9999) {
                          dVar73 = dVar90;
                          if (1.0 <= dVar90) {
                            dVar73 = 1.0;
                          }
                          local_5c8._0_8_ = dVar30;
                          local_658 = dVar47;
                          dStack_650 = dVar81;
                          dVar30 = acos((double)(-(ulonglong)(dVar90 < -1.0) & 0xbff0000000000000 |
                                                ~-(ulonglong)(dVar90 < -1.0) & (ulonglong)dVar73));
                          dVar73 = sin(dVar30);
                          dVar104 = sin(dVar104 * dVar30);
                          dVar104 = dVar104 * (1.0 / dVar73);
                          dVar75 = sin(dVar75 * dVar30);
                          dVar75 = dVar75 * (1.0 / dVar73);
                          dVar30 = (double)local_5c8._0_8_;
                          dVar47 = local_658;
                          dVar81 = dStack_650;
                          dVar73 = (double)local_5e8._0_8_;
                        }
                        local_5e8._0_8_ = dVar73;
                        dVar73 = dVar104 * dVar92 + dVar106 * dVar75;
                        dVar92 = (double)local_5f8._0_8_ * dVar104 + dVar66 * dVar75;
                        dVar74 = dVar74 * dVar104 + (double)local_5e8._0_8_ * dVar75;
                        dVar82 = dVar82 * dVar104 + dVar30 * dVar75;
                        dVar30 = dVar92 * dVar92 + dVar82 * dVar82;
                        dVar84 = dVar73 * dVar73 + dVar74 * dVar74;
                        auVar62._0_8_ = dVar30 + dVar84;
                        auVar62._8_8_ = dVar30 + dVar84;
                        auVar50._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar62._8_8_);
                        auVar50._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar62._0_8_);
                        auVar58 = sqrtpd(auVar62,auVar62);
                        auVar58 = divpd(_DAT_149934d80,auVar58);
                        auVar68._0_8_ = auVar58._0_8_ * dVar92;
                        auVar68._8_8_ = auVar58._8_8_ * dVar73;
                        dVar82 = (double)((ulonglong)(dVar82 * auVar58._0_8_) &
                                         -(ulonglong)(9.99999993922529e-09 <= auVar62._0_8_));
                        dVar74 = (double)((ulonglong)(dVar74 * auVar58._8_8_) &
                                         -(ulonglong)(9.99999993922529e-09 <= auVar62._8_8_));
                        auVar58 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar68,auVar50);
                        dVar30 = auVar58._0_8_;
                        dVar73 = auVar58._8_8_;
                        dVar84 = dVar30 * dVar30 + dVar82 * dVar82;
                        dVar92 = dVar73 * dVar73 + dVar74 * dVar74;
                        auVar69._0_8_ = dVar84 + dVar92;
                        auVar69._8_8_ = dVar84 + dVar92;
                        auVar51._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar69._8_8_);
                        auVar51._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar69._0_8_);
                        auVar58 = sqrtpd(auVar69,auVar69);
                        auVar58 = divpd(_DAT_149934d80,auVar58);
                        auVar78._0_8_ = auVar58._0_8_ * dVar30;
                        auVar78._8_8_ = auVar58._8_8_ * dVar73;
                        dVar82 = (double)((ulonglong)(dVar82 * auVar58._0_8_) &
                                         -(ulonglong)(9.99999993922529e-09 <= auVar69._0_8_));
                        dVar74 = (double)((ulonglong)(dVar74 * auVar58._8_8_) &
                                         -(ulonglong)(9.99999993922529e-09 <= auVar69._8_8_));
                        local_5f8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar78,auVar51);
                        auVar58 = local_5b8;
                        auVar102 = local_638;
                        pfVar27 = local_628;
                        dVar84 = dStack_620;
                      }
                    }
                    else {
                      pdVar15 = (double *)(lVar5 + (longlong)puVar23);
                      dVar82 = *pdVar15;
                      dVar74 = pdVar15[1];
                      local_5f8 = *(undefined1 (*) [16])(pdVar15 + 2);
                    }
                  }
                  lVar5 = *(longlong *)local_5d0;
                  auVar71 = *(undefined1 (*) [16])(lVar5 + -0x10 + lVar42 * 8);
                  local_5e8._0_16_ = *(undefined1 (*) [16])(lVar5 + lVar42 * 8);
                  dVar30 = local_5e8._0_8_;
                  auVar52 = minpd(auVar71,auVar102);
                  auVar8._8_8_ = dStack_600;
                  auVar8._0_8_ = local_608;
                  auVar63 = minpd(local_5e8._0_16_,auVar8);
                  auVar53._8_8_ = -(ulonglong)(auVar52._8_8_ < 0.0);
                  auVar53._0_8_ = -(ulonglong)(auVar52._0_8_ < 0.0);
                  iVar20 = movmskpd((int)puVar23,auVar53);
                  auVar64._8_8_ = -(ulonglong)(auVar63._8_8_ < 0.0);
                  auVar64._0_8_ = -(ulonglong)(auVar63._0_8_ < 0.0);
                  uVar11 = movmskpd((int)lVar28,auVar64);
                  dVar92 = auVar58._8_8_;
                  dVar73 = auVar58._0_8_;
                  dVar66 = auVar102._0_8_;
                  dVar106 = auVar102._8_8_;
                  if ((uVar11 & 0x3fffffff) == 0 && iVar20 == 0) {
                    pdVar15 = (double *)(lVar5 + -0x50 + lVar42 * 8);
                    local_578 = *pdVar15;
                    dStack_570 = pdVar15[1];
                    pdVar15 = (double *)(lVar5 + -0x40 + lVar42 * 8);
                    dVar75 = *pdVar15;
                    dVar90 = pdVar15[1];
                    pdVar15 = (double *)(lVar5 + -0x30 + lVar42 * 8);
                    dVar99 = *pdVar15 * dVar66;
                    dVar100 = pdVar15[1] * dVar106;
                    pdVar15 = (double *)(lVar5 + -0x20 + lVar42 * 8);
                    dVar101 = *pdVar15 * (double)local_608;
                    dVar103 = pdVar15[1] * dStack_600;
                    dVar85 = dVar100 * (double)local_648._0_8_ - (double)local_648._8_8_ * dVar99;
                    dVar89 = dVar101 * (double)local_648._8_8_ - dVar73 * dVar100;
                    dVar104 = dVar99 * dVar73 - (double)local_648._0_8_ * dVar101;
                    dVar105 = dVar103 * dVar92 - dVar92 * dVar103;
                    dVar89 = dVar89 + dVar89;
                    dVar104 = dVar104 + dVar104;
                    dVar85 = dVar85 + dVar85;
                    dVar105 = dVar105 + dVar105;
                    auVar96._0_8_ =
                         dVar90 * dVar73 * 1.0 +
                         (((double)local_648._0_8_ * dStack_570 * 1.0 + dVar92 * dVar75) -
                         (double)local_648._8_8_ * local_578);
                    auVar96._8_8_ =
                         dVar75 * dVar73 * -1.0 +
                         (((double)local_648._0_8_ * local_578 * -1.0 + dVar92 * dVar90) -
                         (double)local_648._8_8_ * dStack_570);
                    local_658 = dVar47 + (dVar85 * (double)local_648._8_8_ - dVar73 * dVar104) +
                                         dVar92 * dVar89 + dVar99;
                    dStack_650 = dVar81 + (dVar89 * dVar73 - dVar85 * (double)local_648._0_8_) +
                                          dVar92 * dVar104 + dVar100;
                    local_628 = (float *)((double)pfVar27 +
                                         (dVar104 * (double)local_648._0_8_ -
                                         (double)local_648._8_8_ * dVar89) +
                                         dVar92 * dVar85 + dVar101);
                    dStack_620 = dVar84 + (dVar105 * dVar92 - dVar105 * dVar92) +
                                          dVar92 * dVar105 + dVar103;
                    local_638._8_8_ = dVar106 * auVar71._8_8_;
                    local_638._0_8_ = dVar66 * auVar71._0_8_;
                    local_608 = (float *)((double)local_608 * dVar30);
                    dStack_600 = dStack_600 * local_5e8._8_8_;
                    auVar88._8_8_ =
                         (ulonglong)
                         (local_578 * dVar73 * DAT_149931160._8_8_ +
                         dVar90 * (double)local_648._8_8_ +
                         (double)local_648._0_8_ * dVar75 * -1.0 + dVar92 * dStack_570);
                    auVar88._0_8_ =
                         (ulonglong)
                         (dStack_570 * dVar73 * DAT_149931160 +
                         dVar75 * (double)local_648._8_8_ +
                         (double)local_648._0_8_ * dVar90 * 1.0 + dVar92 * local_578);
                    local_5c8 = auVar71;
                    local_5b8 = auVar58;
                    local_588 = (double)local_648._0_8_;
                    dStack_580 = dVar92;
                    local_648._0_8_ = dVar82;
                    local_648._8_8_ = dVar74;
                  }
                  else {
                    local_5e8._8_8_ = local_5e8._8_8_ * dStack_600;
                    local_5e8._0_8_ = dVar30 * (double)local_608;
                    dVar30 = (double)local_648._8_8_ + (double)local_648._8_8_;
                    dVar75 = dVar73 + dVar73;
                    dVar84 = (double)local_648._0_8_ *
                             ((double)local_648._0_8_ + (double)local_648._0_8_);
                    local_128 = (1.0 - (dVar84 + (double)local_648._8_8_ * dVar30)) *
                                (double)local_608;
                    dVar90 = ((double)local_648._0_8_ + (double)local_648._0_8_) * dVar92;
                    local_138 = (dVar30 * dVar92 + (double)local_648._0_8_ * dVar75) *
                                (double)local_608;
                    local_158 = (dVar30 * (double)local_648._0_8_ - dVar75 * dVar92) * dVar106;
                    dStack_130 = (dVar75 * (double)local_648._8_8_ - dVar90) * (double)local_608;
                    dVar104 = auVar71._0_8_ * dVar66;
                    dVar105 = auVar71._8_8_ * dVar106;
                    dStack_150 = (1.0 - (dVar73 * dVar75 + dVar84)) * dVar106;
                    local_148 = (dVar75 * (double)local_648._8_8_ + dVar90) * dVar106;
                    stack0xfffffffffffffe90 =
                         (dVar30 * (double)local_648._0_8_ + dVar75 * dVar92) * dVar66;
                    local_178._0_8_ =
                         (1.0 - (dVar73 * dVar75 + (double)local_648._8_8_ * dVar30)) * dVar66;
                    local_168._8_8_ = 0;
                    local_168._0_8_ = ((double)local_648._0_8_ * dVar75 - dVar30 * dVar92) * dVar66;
                    uStack_140 = 0;
                    uStack_120 = 0;
                    uStack_100 = 0x3ff0000000000000;
                    pdVar15 = (double *)(lVar5 + -0x50 + lVar42 * 8);
                    dVar73 = *pdVar15;
                    dVar84 = pdVar15[1];
                    dVar30 = *(double *)(lVar5 + -0x40 + lVar42 * 8);
                    pdVar15 = (double *)(lVar5 + -0x10 + lVar42 * 8);
                    local_1e8 = *pdVar15;
                    local_1d8 = pdVar15[1];
                    dStack_1b0 = *(double *)(lVar5 + lVar42 * 8);
                    dVar75 = dVar84 + dVar84;
                    dVar92 = dVar30 + dVar30;
                    dVar66 = dVar73 * (dVar73 + dVar73);
                    local_1f8 = (void *)((1.0 - (dVar30 * dVar92 + dVar84 * dVar75)) * local_1e8);
                    dStack_1d0 = (1.0 - (dVar30 * dVar92 + dVar66)) * local_1d8;
                    local_1a8 = (1.0 - (dVar66 + dVar84 * dVar75)) * dStack_1b0;
                    dVar90 = *(double *)(lVar5 + -0x50 + lVar42 * 8) * dVar92;
                    pdVar15 = (double *)(lVar5 + -0x38 + lVar42 * 8);
                    dVar30 = *pdVar15;
                    dVar66 = dVar92 * dVar30;
                    dVar106 = (dVar73 + dVar73) * *pdVar15;
                    dVar30 = dVar75 * dVar30;
                    dStack_1f0 = (dVar75 * dVar73 + dVar66) * local_1e8;
                    local_1c8 = (dVar92 * dVar84 + dVar106) * local_1d8;
                    local_1b8 = (dVar30 + dVar90) * dStack_1b0;
                    local_1e8 = (dVar90 - dVar30) * local_1e8;
                    local_1d8 = (dVar75 * dVar73 - dVar66) * local_1d8;
                    dStack_1b0 = (dVar92 * dVar84 - dVar106) * dStack_1b0;
                    uStack_1e0 = 0;
                    uStack_1c0 = 0;
                    uStack_1a0 = 0;
                    puVar23 = (undefined8 *)(lVar5 + -0x30 + lVar42 * 8);
                    local_198 = *puVar23;
                    uStack_190 = puVar23[1];
                    local_188 = *(undefined8 *)(lVar5 + -0x20 + lVar42 * 8);
                    uStack_180 = 0x3ff0000000000000;
                    local_118 = dVar47;
                    dStack_110 = dVar81;
                    local_108 = pfVar27;
                    local_648._0_8_ = dVar82;
                    local_648._8_8_ = dVar74;
                    FUN_1447fea8d(&local_4f8,&local_1f8,local_178);
                    dVar81 = (double)CONCAT44(local_4f8._4_4_,(uint)local_4f8);
                    dVar84 = (double)CONCAT26(uStack_4ea,CONCAT24(uStack_4ec,uStack_4f0));
                    local_608 = (float *)local_4e8._0_8_;
                    dVar30 = (double)local_4e8._0_8_ * (double)local_4e8._0_8_ +
                             dVar81 * dVar81 + dVar84 * dVar84;
                    local_628 = local_4c8;
                    dVar73 = (double)local_4c8 * (double)local_4c8 +
                             local_4d8 * local_4d8 + dStack_4d0 * dStack_4d0;
                    dVar47 = (double)local_4a8 * (double)local_4a8 +
                             (double)local_4b8._0_8_ * (double)local_4b8._0_8_ +
                             (double)local_4b8._8_8_ * (double)local_4b8._8_8_;
                    uVar34 = -(ulonglong)(0.0 <= dVar30 + -9.99999993922529e-09);
                    dVar30 = (double)(~uVar34 & 0x3ff0000000000000 |
                                     (ulonglong)(1.0 / SQRT(dVar30)) & uVar34);
                    local_5c8._8_8_ = dVar105;
                    local_5c8._0_8_ = dVar104;
                    uVar34 = -(ulonglong)(0.0 <= dVar73 + -9.99999993922529e-09);
                    dVar73 = (double)(~uVar34 & 0x3ff0000000000000 |
                                     (ulonglong)(1.0 / SQRT(dVar73)) & uVar34);
                    uVar34 = -(ulonglong)(0.0 <= dVar47 + -9.99999993922529e-09);
                    dVar47 = (double)(~uVar34 & 0x3ff0000000000000 |
                                     (ulonglong)(1.0 / SQRT(dVar47)) & uVar34);
                    auVar54._8_8_ = -(ulonglong)(0.0 <= dVar105);
                    auVar54._0_8_ = -(ulonglong)(0.0 <= dVar104);
                    auVar58 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar54);
                    uVar7 = local_5e8._0_8_;
                    uVar9 = local_5e8._8_8_;
                    dVar92 = (double)(~-(ulonglong)(0.0 <= (double)local_5e8._0_8_) &
                                      0xbff0000000000000 |
                                     -(ulonglong)(0.0 <= (double)local_5e8._0_8_) &
                                     0x3ff0000000000000);
                    dVar82 = auVar58._0_8_;
                    local_4f8 = dVar81 * dVar30 * dVar82;
                    dVar81 = dVar84 * dVar30 * dVar82;
                    uStack_4f0 = SUB84(dVar81,0);
                    uStack_4ec = (undefined2)((ulonglong)dVar81 >> 0x20);
                    uStack_4ea = (undefined2)((ulonglong)dVar81 >> 0x30);
                    local_4e8._0_8_ = dVar30 * (double)local_4e8._0_8_ * dVar82;
                    dVar30 = auVar58._8_8_;
                    local_4c8 = (float *)(dVar73 * (double)local_4c8 * dVar30);
                    dStack_4d0 = dStack_4d0 * dVar73 * dVar30;
                    local_4d8 = dVar30 * local_4d8 * dVar73;
                    local_4a8 = (float *)(dVar47 * (double)local_4a8 * dVar92);
                    local_4b8._8_8_ = (double)local_4b8._8_8_ * dVar47 * dVar92;
                    local_4b8._0_8_ = dVar92 * (double)local_4b8._0_8_ * dVar47;
                    FUN_14481fd10(&local_518,&local_4f8);
                    dVar30 = local_508 * local_508 + (double)local_518 * (double)local_518;
                    dVar73 = dStack_500 * dStack_500 + uStack_510 * uStack_510;
                    auVar70._0_8_ = dVar30 + dVar73;
                    auVar70._8_8_ = dVar30 + dVar73;
                    auVar55._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar70._8_8_);
                    auVar55._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar70._0_8_);
                    auVar58 = sqrtpd(auVar70,auVar70);
                    auVar58 = divpd(_DAT_149934d80,auVar58);
                    auVar79._0_8_ = auVar58._0_8_ * local_508;
                    auVar79._8_8_ = auVar58._8_8_ * dStack_500;
                    auVar96 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar79,auVar55);
                    local_658 = local_498;
                    dStack_650 = dStack_490;
                    auVar88._0_8_ =
                         (ulonglong)((double)local_518 * auVar58._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar70._0_8_);
                    auVar88._8_8_ =
                         (ulonglong)(uStack_510 * auVar58._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar70._8_8_);
                    local_628 = local_488;
                    dStack_620 = 0.0;
                    local_608 = (float *)uVar7;
                    dStack_600 = (double)uVar9;
                    local_638 = local_5c8;
                  }
                  dVar82 = auVar96._0_8_;
                  dVar74 = auVar96._8_8_;
                  dVar30 = auVar88._0_8_;
                  dVar92 = auVar88._8_8_;
                  dVar75 = (double)local_648._8_8_ * dVar82 * DAT_149931160 +
                           (double)local_5f8._0_8_ * dVar92 +
                           (double)local_5f8._8_8_ * dVar30 * 1.0 + (double)local_648._0_8_ * dVar74
                  ;
                  dVar90 = (double)local_648._0_8_ * dVar82 * DAT_149931160._8_8_ +
                           (double)local_5f8._8_8_ * dVar92 +
                           (double)local_5f8._0_8_ * dVar30 * -1.0 +
                           (double)local_648._8_8_ * dVar74;
                  dVar66 = (double)local_5f8._8_8_ * dVar82 * 1.0 +
                           ((dVar30 * (double)local_648._8_8_ * 1.0 +
                            (double)local_5f8._0_8_ * dVar74) - (double)local_648._0_8_ * dVar92);
                  dVar106 = (double)local_5f8._0_8_ * dVar82 * -1.0 +
                            ((dVar30 * (double)local_648._0_8_ * -1.0 +
                             (double)local_5f8._8_8_ * dVar74) - (double)local_648._8_8_ * dVar92);
                  dVar73 = dVar106 * dVar74 + dVar82 * dVar66 + dVar90 * dVar92 + dVar30 * dVar75;
                  uVar34 = -(ulonglong)(0.0 <= dVar73);
                  dVar30 = (double)(~uVar34 & 0xbff0000000000000 | uVar34 & 0x3ff0000000000000);
                  dVar73 = dVar73 * dVar30;
                  dVar30 = dVar30 * local_5a8;
                  local_648 = auVar88;
                  if (dVar73 < 0.9999) {
                    dVar47 = dVar73;
                    if (1.0 <= dVar73) {
                      dVar47 = 1.0;
                    }
                    dVar73 = acos((double)(-(ulonglong)(dVar73 < -1.0) & 0xbff0000000000000 |
                                          ~-(ulonglong)(dVar73 < -1.0) & (ulonglong)dVar47));
                    local_5f8._0_8_ = dVar73;
                    dVar47 = sin(dVar73);
                    dVar73 = sin((double)local_598._0_8_ * dVar73);
                    dVar73 = dVar73 * (1.0 / dVar47);
                    dVar30 = sin(dVar30 * (double)local_5f8._0_8_);
                    dVar30 = dVar30 * (1.0 / dVar47);
                  }
                  else {
                    dVar73 = (double)local_598._0_8_;
                  }
                  dVar84 = dStack_620;
                  pfVar27 = local_628;
                  auVar102 = local_638;
                  dVar81 = dStack_650;
                  dVar47 = local_658;
                  dVar74 = dVar73 * dVar74 + dVar106 * dVar30;
                  dVar82 = dVar82 * dVar73 + dVar66 * dVar30;
                  dVar66 = dVar92 * dVar73 + dVar90 * dVar30;
                  dVar92 = (double)local_648._0_8_ * dVar73 + dVar30 * dVar75;
                  dVar30 = dVar82 * dVar82 + dVar92 * dVar92;
                  dVar73 = dVar74 * dVar74 + dVar66 * dVar66;
                  auVar65._0_8_ = dVar30 + dVar73;
                  auVar65._8_8_ = dVar30 + dVar73;
                  auVar56._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar65._8_8_);
                  auVar56._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar65._0_8_);
                  auVar58 = sqrtpd(auVar65,auVar65);
                  auVar71 = divpd(_DAT_149934d80,auVar58);
                  auVar72._0_8_ = auVar71._0_8_ * dVar82;
                  auVar72._8_8_ = auVar71._8_8_ * dVar74;
                  auVar58 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar72,auVar56);
                  dVar30 = (double)((ulonglong)(dVar92 * auVar71._0_8_) &
                                   -(ulonglong)(9.99999993922529e-09 <= auVar65._0_8_));
                  dVar73 = (double)((ulonglong)(dVar66 * auVar71._8_8_) &
                                   -(ulonglong)(9.99999993922529e-09 <= auVar65._8_8_));
                  uVar3 = *(ushort *)(*(longlong *)local_668 + lVar25 * 4);
                  local_4f8._0_4_ = SUB84(dVar30,0);
                  local_4f8._4_4_ = (undefined4)((ulonglong)dVar30 >> 0x20);
                  uStack_4f0 = SUB84(dVar73,0);
                  uStack_4ec = (undefined2)((ulonglong)dVar73 >> 0x20);
                  uStack_4ea = (undefined2)((ulonglong)dVar73 >> 0x30);
                  local_4d8 = local_658;
                  dStack_4d0 = dStack_650;
                  local_4c8 = local_628;
                  dStack_4c0 = dStack_620;
                  local_4b8 = local_638;
                  local_4a8 = local_608;
                  dStack_4a0 = dStack_600;
                  local_4e8 = auVar58;
                  if ((((uVar3 != 0xffff) &&
                       (*(uint *)(lVar4 + 0xc0) != (uint)uVar3 &&
                        (int)(uint)uVar3 <= (int)*(uint *)(lVar4 + 0xc0))) &&
                      (lVar28 = *(longlong *)
                                 (*(longlong *)(lVar4 + 0xb8) + (ulonglong)(uint)uVar3 * 8),
                      lVar28 != 0)) &&
                     (((bVar2 = *(byte *)(lVar28 + 0x10), bVar2 - 1 < 2 || (bVar2 == 0x80)) ||
                      ((bVar2 < 0x21 && ((0x100010010U >> ((ulonglong)bVar2 & 0x3f) & 1) != 0))))))
                  {
                    local_680 = 0;
                    local_688 = 0;
                    local_690 = 0;
                    local_698 = (char *)CONCAT71(local_698._1_7_,param_14);
                    FUN_140122d4e(lVar4,lVar28,&local_4f8,3);
                  }
                  uVar34 = (ulonglong)(uint)param_16[0x14];
                }
              }
              lVar43 = lVar43 + 1;
              lVar25 = lVar25 + 8;
              lVar42 = lVar42 + 0xc;
            } while (lVar43 < (int)uVar34);
          }
        }
      }
      lVar25 = local_5a0;
      lVar4 = local_660;
      if ((*(longlong *)(local_5a0 + 0x58) != 0) && (*param_15 == '\x01')) {
        pcVar1 = param_15 + 0x30;
        pcVar32 = pcVar1;
        puVar23 = (undefined8 *)local_4b8;
        for (lVar42 = 0xc; lVar42 != 0; lVar42 = lVar42 + -1) {
          *puVar23 = *(undefined8 *)pcVar32;
          pcVar32 = pcVar32 + 8;
          puVar23 = puVar23 + 1;
        }
        lVar42 = 0;
        local_4f8._0_4_ = 0;
        local_4f8._4_4_ = 0;
        uStack_4f0 = CONCAT31(uStack_4f0._1_3_,2);
        local_4e8 = ZEXT816(0);
        local_4d8 = *(double *)(param_15 + 8);
        dStack_4d0 = *(double *)(param_15 + 0x10);
        local_4c8 = (float *)CONCAT44(local_4c8._4_4_,*(undefined4 *)(param_15 + 4));
        local_458 = 0;
        uStack_450 = 0;
        local_448 = 0;
        uStack_440 = 0;
        local_438 = 0;
        FUN_140b463b8(local_4e8,0x40,1);
        auVar91 = ZEXT816(0);
        do {
          FUN_149853216(lVar4,local_178,auVar91._0_8_);
          *(undefined8 *)(local_4e8._0_8_ + 0x10 + lVar42) = local_168._0_8_;
          *(undefined8 *)(local_4e8._0_8_ + lVar42) = local_178._0_8_;
          ((undefined8 *)(local_4e8._0_8_ + lVar42))[1] = stack0xfffffffffffffe90;
          auVar91._0_4_ = auVar91._0_4_ + 0.015873017;
          lVar42 = lVar42 + 0x18;
        } while (lVar42 != 0x600);
        lVar42 = *(longlong *)(lVar25 + 0x58);
        iVar20 = *(int *)(lVar42 + 0x10);
        *(uint *)(lVar42 + 0x10) = iVar20 + 1U;
        if (*(uint *)(lVar42 + 0x14) < iVar20 + 1U) {
          FUN_1490f2448((longlong *)(lVar42 + 8),iVar20);
        }
        FUN_1490eb446((longlong)iVar20 * 0xd0 + *(longlong *)(lVar42 + 8),&local_4f8);
        plVar16 = (longlong *)
                  (**(code **)(**(longlong **)(*(longlong *)(lVar4 + 8) + 0x30) + 0x18))();
        lVar4 = plVar16[1];
        if ((longlong)(int)lVar4 != 0) {
          lVar42 = *plVar16;
          lVar43 = 0;
          do {
            local_168._0_8_ = *(undefined8 *)(lVar42 + 0x10 + lVar43);
            _local_178 = *(undefined1 (*) [16])(lVar42 + lVar43);
            local_698 = param_15 + 8;
            FUN_144467456(*(undefined8 *)(lVar25 + 0x58),pcVar1,local_178,
                          *(float *)(param_15 + 4) * 6.0);
            lVar43 = lVar43 + 0x18;
          } while ((longlong)(int)lVar4 * 0x18 != lVar43);
        }
        local_698 = (char *)CONCAT44(local_698._4_4_,*(undefined4 *)(param_15 + 4));
        local_178 = *(undefined1 (*) [12])(param_16 + 10);
        FUN_144467884(*(undefined8 *)(lVar25 + 0x58),pcVar1,local_178,param_15 + 0x18);
        local_178 = *(undefined1 (*) [12])(param_16 + 10);
        local_698 = param_15 + 0x18;
        FUN_14446754c(*(undefined8 *)(lVar25 + 0x58),pcVar1,local_178,*(float *)(param_15 + 4) * 4.0
                     );
        FUN_1490de8da(&local_4f8);
      }
      if (local_528 != (int *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_14466db04:
  if ((local_f0 ^ (ulonglong)auStack_6b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_14466ad51:
  iVar12 = *piVar13;
  *piVar13 = *piVar41;
  *piVar41 = iVar12;
  iVar20 = iVar20 + -1;
  piVar19 = piVar19 + -2;
  if ((longlong)piVar29 - (longlong)piVar37 < (longlong)piVar39 - (longlong)piVar36) {
    if (piVar26 < piVar18) {
      *(int **)local_648._0_8_ = piVar26;
      *(int **)(local_648._0_8_ + 8) = piVar18;
      *(int *)(local_648._0_8_ + 0x10) = iVar20;
      local_648._0_8_ = (undefined8 *)(local_648._0_8_ + 0x18);
    }
    piVar36 = piVar13;
    if (piVar41 <= piVar13 + 1) goto LAB_14466b083;
  }
  else {
    if (piVar13 + 1 < piVar41) {
      *(int **)local_648._0_8_ = piVar13;
      *(int **)(local_648._0_8_ + 8) = piVar19;
      *(int *)(local_648._0_8_ + 0x10) = iVar20;
      local_648._0_8_ = (undefined8 *)(local_648._0_8_ + 0x18);
    }
    piVar13 = piVar26;
    piVar19 = piVar18;
    piVar29 = piVar18;
    if (piVar18 <= piVar26) goto LAB_14466b083;
  }
  iVar12 = (int)((ulonglong)((longlong)piVar29 - (longlong)piVar36) >> 2);
  uVar34 = (ulonglong)(iVar12 + 1);
  piVar18 = piVar19;
  piVar39 = piVar29;
  piVar37 = piVar36;
  if (iVar20 == 0) goto LAB_14466adfa;
  goto LAB_14466acc1;
}



// FUNCTION 14466dece FUN_14466dece body=2660 status=ok
// SIG undefined FUN_14466dece(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14466dece(longlong param_1,longlong *param_2,longlong param_3,char param_4,float param_5,
                  float param_6,undefined8 param_7,undefined8 param_8,undefined1 param_9,
                  float *param_10)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  byte bVar6;
  ushort uVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  double dVar10;
  uint uVar11;
  longlong lVar12;
  double *pdVar13;
  undefined8 *puVar14;
  double *pdVar15;
  undefined8 *puVar16;
  double *pdVar17;
  int iVar18;
  float *pfVar19;
  uint uVar20;
  float *pfVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  longlong lVar25;
  float fVar26;
  float fVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  float fVar32;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8;
  undefined1 local_1a0;
  undefined1 local_198;
  undefined1 local_190;
  float *local_188;
  float *local_180;
  longlong local_178;
  float *local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined2 uStack_14c;
  undefined2 uStack_14a;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lVar8 = *(longlong *)(param_1 + 0x1b0);
  if (((lVar8 == 0) || (*(longlong *)(param_3 + 8) == 0)) ||
     (*(longlong *)(*(longlong *)(param_3 + 8) + 0x30) == 0)) goto LAB_14466e253;
  local_188 = param_10 + 2;
  pfVar21 = param_10 + 6;
  local_180 = param_10 + 10;
  fVar26 = param_10[0xc];
  if (fVar26 == 0.0) {
    if ((int)param_2[1] < 2) goto LAB_14466e253;
    param_10[4] = 0.0;
    if ((int)param_10[5] < 0) {
      FUN_1401a2688(local_188,0);
    }
    param_10[8] = 0.0;
    local_178 = param_3;
    if ((int)param_10[9] < 0) {
      FUN_14482f6fa(pfVar21,0);
    }
    lVar22 = param_2[1];
    local_170 = pfVar21;
    if ((longlong)(int)lVar22 != 0) {
      lVar25 = *param_2;
      lVar23 = 0;
      do {
        local_160 = *(undefined4 *)(lVar25 + 8 + lVar23);
        local_168 = *(undefined8 *)(lVar25 + lVar23);
        local_158._0_4_ = (uint)local_158 & 0xffffff00;
        local_158._4_4_ = 0;
        uStack_150 = 0;
        uStack_14c = 0xffff;
        local_148 = 0xffffffff;
        FUN_144828dba(&local_158,&local_168,lVar8);
        fVar26 = param_10[0xc];
        param_10[0xc] = (float)((int)fVar26 + 1);
        if ((uint)param_10[0xd] < (uint)((int)fVar26 + 1)) {
          FUN_1492d0738(local_180,fVar26);
        }
        lVar12 = *(longlong *)local_180;
        puVar14 = (undefined8 *)(lVar12 + 0x10 + (longlong)(int)fVar26 * 0x20);
        *puVar14 = CONCAT44(uStack_144,local_148);
        puVar14[1] = uStack_140;
        puVar14 = (undefined8 *)(lVar12 + (longlong)(int)fVar26 * 0x20);
        *puVar14 = CONCAT44(local_158._4_4_,(uint)local_158);
        puVar14[1] = CONCAT26(uStack_14a,CONCAT24(uStack_14c,uStack_150));
        lVar23 = lVar23 + 0xc;
      } while ((longlong)(int)lVar22 * 0xc != lVar23);
    }
    pfVar21 = local_170;
    param_3 = local_178;
    if ((int)param_10[0xc] < 2) goto LAB_14466e253;
    FUN_149268aee(local_188,param_10[0xc],1);
    fVar26 = param_10[0xc];
    fVar27 = param_10[8];
    if ((int)fVar27 < (int)fVar26) {
      param_10[8] = fVar26;
      if ((uint)((int)param_10[9] - (int)fVar27) < (uint)((int)fVar26 - (int)fVar27)) {
        FUN_14475e4ac(pfVar21);
      }
      memset((void *)((longlong)(int)fVar27 * 4 + *(longlong *)pfVar21),0,
             (longlong)((int)fVar26 - (int)fVar27) << 2);
    }
    else {
      if ((int)fVar26 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(fVar26);
      }
      if ((int)fVar26 < (int)fVar27) {
        param_10[8] = fVar26;
        FUN_1401fef06(pfVar21);
      }
    }
    *param_10 = 0.0;
    **(undefined4 **)(param_10 + 6) = 0;
    if ((int)param_10[0xc] < 2) goto LAB_14466e253;
    lVar22 = 1;
    lVar25 = 0;
    do {
      lVar23 = *(longlong *)local_180;
      uVar7 = *(ushort *)(lVar23 + 0xc + lVar25);
      if ((((uVar7 == 0xffff) ||
           (*(uint *)(lVar8 + 0xc0) == (uint)uVar7 ||
            (int)*(uint *)(lVar8 + 0xc0) < (int)(uint)uVar7)) ||
          (lVar12 = *(longlong *)(*(longlong *)(lVar8 + 0xb8) + (ulonglong)(uint)uVar7 * 8),
          lVar12 == 0)) ||
         (((bVar6 = *(byte *)(lVar12 + 0x10), 1 < bVar6 - 1 && (bVar6 != 0x80)) &&
          ((0x20 < bVar6 || ((0x100010010U >> ((ulonglong)bVar6 & 0x3f) & 1) == 0)))))) {
        puVar14 = &DAT_14c846480;
        puVar16 = &local_158;
        for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
          *puVar16 = *puVar14;
          puVar14 = puVar14 + 1;
          puVar16 = puVar16 + 1;
        }
      }
      else {
        FUN_1401571e4(lVar8,&local_158,lVar12,3);
        lVar23 = *(longlong *)local_180;
      }
      dVar4 = local_128;
      dVar3 = dStack_130;
      dVar2 = local_138;
      uVar7 = *(ushort *)(lVar23 + 0x2c + lVar25);
      if ((((uVar7 == 0xffff) ||
           (*(uint *)(lVar8 + 0xc0) == (uint)uVar7 ||
            (int)*(uint *)(lVar8 + 0xc0) < (int)(uint)uVar7)) ||
          (lVar23 = *(longlong *)(*(longlong *)(lVar8 + 0xb8) + (ulonglong)(uint)uVar7 * 8),
          lVar23 == 0)) ||
         (((bVar6 = *(byte *)(lVar23 + 0x10), 1 < bVar6 - 1 && (bVar6 != 0x80)) &&
          ((0x20 < bVar6 || ((0x100010010U >> ((ulonglong)bVar6 & 0x3f) & 1) == 0)))))) {
        puVar14 = &DAT_14c846480;
        puVar16 = &local_158;
        for (lVar23 = 0xc; lVar23 != 0; lVar23 = lVar23 + -1) {
          *puVar16 = *puVar14;
          puVar14 = puVar14 + 1;
          puVar16 = puVar16 + 1;
        }
      }
      else {
        FUN_1401571e4(lVar8,&local_158,lVar23,3);
      }
      *(float *)(*(longlong *)(param_10 + 6) + lVar22 * 4) =
           (float)SQRT((dVar4 - local_128) * (dVar4 - local_128) +
                       (dVar2 - local_138) * (dVar2 - local_138) +
                       (dVar3 - dStack_130) * (dVar3 - dStack_130));
      *param_10 = *(float *)(*(longlong *)(param_10 + 6) + lVar22 * 4) + *param_10;
      lVar22 = lVar22 + 1;
      fVar26 = param_10[0xc];
      lVar25 = lVar25 + 0x20;
    } while (lVar22 < (int)fVar26);
  }
  if (1 < (int)fVar26) {
    if (param_5 <= 0.0) {
      param_5 = 0.0;
    }
    if (1.0 <= param_5) {
      param_5 = 1.0;
    }
    if (param_4 == '\x01') {
      if (param_6 <= 0.0) {
        param_6 = 0.0;
      }
      if (1.0 <= param_6) {
        param_6 = 1.0;
      }
      if (param_6 <= param_5) {
        param_6 = param_5;
      }
      FUN_1498532e8(param_3,&local_158,param_5);
      puVar14 = &local_158;
      puVar16 = *(undefined8 **)(param_10 + 2);
      for (lVar22 = 0xc; lVar22 != 0; lVar22 = lVar22 + -1) {
        *puVar16 = *puVar14;
        puVar14 = puVar14 + 1;
        puVar16 = puVar16 + 1;
      }
      FUN_1498532e8(param_3,&local_158,param_6);
      puVar14 = &local_158;
      puVar16 = (undefined8 *)
                ((longlong)((int)param_10[4] + -1) * 0x60 + *(longlong *)(param_10 + 2));
      for (lVar22 = 0xc; lVar22 != 0; lVar22 = lVar22 + -1) {
        *puVar16 = *puVar14;
        puVar14 = puVar14 + 1;
        puVar16 = puVar16 + 1;
      }
      if (0 < (int)param_10[8]) {
        fVar26 = 0.0;
        lVar22 = 0;
        lVar25 = 0;
        do {
          fVar26 = fVar26 + *(float *)(*(longlong *)(param_10 + 6) + lVar25 * 4);
          fVar27 = (param_6 * fVar26) / *param_10;
          FUN_1498532e8(param_3,&local_158,(1.0 - fVar27) * param_5 + fVar27 * param_6);
          puVar14 = &local_158;
          puVar16 = (undefined8 *)(*(longlong *)(param_10 + 2) + lVar22);
          for (lVar23 = 0xc; lVar23 != 0; lVar23 = lVar23 + -1) {
            *puVar16 = *puVar14;
            puVar14 = puVar14 + 1;
            puVar16 = puVar16 + 1;
          }
          lVar25 = lVar25 + 1;
          lVar22 = lVar22 + 0x60;
        } while (lVar25 < (int)param_10[8]);
      }
    }
    else if (param_4 == '\0') {
      FUN_1498532e8(param_3,&local_158,param_5);
      puVar14 = &local_158;
      puVar16 = *(undefined8 **)local_188;
      for (lVar22 = 0xc; lVar22 != 0; lVar22 = lVar22 + -1) {
        *puVar16 = *puVar14;
        puVar14 = puVar14 + 1;
        puVar16 = puVar16 + 1;
      }
      lVar22 = *(longlong *)(param_3 + 8);
      if (lVar22 == 0) {
        uVar24 = (uint)_DAT_00000050;
        fVar26 = 0.0;
      }
      else {
        uVar24 = *(uint *)(lVar22 + 0x50);
        fVar26 = (float)(int)(uVar24 - 1);
        iVar18 = (int)fVar26;
        fVar26 = (1.0 - (fVar26 - (float)(int)fVar26)) *
                 *(float *)(*(longlong *)(lVar22 + 0x58) + (longlong)iVar18 * 4) +
                 (fVar26 - (float)(int)fVar26) *
                 *(float *)(*(longlong *)(lVar22 + 0x58) +
                           (longlong)(int)((uint)(iVar18 < (int)(uVar24 - 1)) + iVar18) * 4);
      }
      if (1 < (int)param_10[8]) {
        uVar24 = uVar24 & 0xffff;
        fVar27 = (float)FUN_149853560(param_3,param_5);
        fVar32 = (float)(int)(uVar24 - 1);
        uVar20 = -uVar24;
        lVar22 = 1;
        do {
          lVar25 = *(longlong *)pfVar21;
          fVar27 = fVar27 + *(float *)(lVar25 + lVar22 * 4);
          pdVar13 = (double *)(lVar22 * 0x60 + *(longlong *)local_188);
          if ((fVar27 < fVar26) && (iVar18 = (int)(param_5 * fVar32), iVar18 < (int)uVar24)) {
            lVar23 = *(longlong *)(*(longlong *)(param_3 + 8) + 0x58);
            uVar11 = -iVar18;
            pfVar19 = (float *)(lVar23 + (longlong)iVar18 * 4);
LAB_14466e55c:
            if (*pfVar19 <= fVar27) goto code_r0x00014466e56a;
            fVar1 = *(float *)(lVar23 + (longlong)(int)~uVar11 * 4);
            param_5 = (float)(int)~uVar11 / fVar32;
            param_5 = ((float)(int)-uVar11 / fVar32 - param_5) *
                      ((fVar27 - fVar1) / (*pfVar19 - fVar1)) + param_5;
            local_178 = CONCAT44(local_178._4_4_,uVar20);
            FUN_1498532e8(param_3,fVar1,param_5);
            pdVar15 = (double *)&local_158;
            for (lVar25 = 0xc; uVar20 = (uint)local_178, lVar25 != 0; lVar25 = lVar25 + -1) {
              *pdVar13 = *pdVar15;
              pdVar15 = pdVar15 + 1;
              pdVar13 = pdVar13 + 1;
            }
            goto LAB_14466e67c;
          }
LAB_14466e575:
          pdVar15 = pdVar13 + -0xc;
          if ((int)param_10[4] < lVar22) {
            pdVar15 = (double *)&DAT_14c846480;
          }
          pdVar17 = pdVar13;
          for (lVar23 = 0xc; lVar23 != 0; lVar23 = lVar23 + -1) {
            *pdVar17 = *pdVar15;
            pdVar15 = pdVar15 + 1;
            pdVar17 = pdVar17 + 1;
          }
          dVar2 = pdVar13[2];
          dVar3 = *pdVar13;
          dVar4 = pdVar13[1];
          dVar29 = dVar2 - dVar3 * 0.0;
          dVar30 = dVar3 * 0.0 - dVar4;
          dVar10 = dVar4 * 0.0 + dVar2 * -0.0;
          dVar30 = dVar30 + dVar30;
          dVar29 = dVar29 + dVar29;
          dVar10 = dVar10 + dVar10;
          dVar5 = pdVar13[3];
          dVar28 = (double)*(float *)(lVar25 + lVar22 * 4);
          dVar31 = ((dVar2 * dVar10 - dVar30 * dVar3) + dVar5 * dVar29 + 0.0) * dVar28 + pdVar13[5];
          auVar9._8_4_ = SUB84(dVar31,0);
          auVar9._0_8_ = ((dVar4 * dVar30 - dVar29 * dVar2) + dVar5 * dVar10 + 1.0) * dVar28 +
                         pdVar13[4];
          auVar9._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
          *(undefined1 (*) [16])(pdVar13 + 4) = auVar9;
          pdVar13[6] = ((dVar3 * dVar29 - dVar10 * dVar4) + dVar5 * dVar30 + 0.0) * dVar28 +
                       pdVar13[6];
          pdVar13[7] = 0.0;
LAB_14466e67c:
          lVar22 = lVar22 + 1;
        } while (lVar22 < (int)param_10[8]);
      }
    }
    if (0 < (int)param_10[4]) {
      lVar22 = 0;
      lVar25 = 0;
      do {
        lVar23 = *(longlong *)(param_10 + 2);
        FUN_1498548a6(&local_158,(undefined8 *)(lVar23 + lVar22),param_7,param_8);
        puVar14 = &local_158;
        puVar16 = (undefined8 *)(lVar23 + lVar22);
        for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
          *puVar16 = *puVar14;
          puVar14 = puVar14 + 1;
          puVar16 = puVar16 + 1;
        }
        lVar25 = lVar25 + 1;
        lVar22 = lVar22 + 0x60;
      } while (lVar25 < (int)param_10[4]);
    }
    fVar26 = param_10[0xc];
    if (0 < (int)fVar26) {
      lVar25 = 0xc;
      lVar23 = 0;
      lVar22 = 0;
      do {
        uVar7 = *(ushort *)(*(longlong *)local_180 + lVar25);
        puVar14 = (undefined8 *)(*(longlong *)local_188 + lVar23);
        puVar16 = &local_158;
        for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
          *puVar16 = *puVar14;
          puVar14 = puVar14 + 1;
          puVar16 = puVar16 + 1;
        }
        if ((((uVar7 != 0xffff) &&
             (*(uint *)(lVar8 + 0xc0) != (uint)uVar7 &&
              (int)(uint)uVar7 <= (int)*(uint *)(lVar8 + 0xc0))) &&
            (lVar12 = *(longlong *)(*(longlong *)(lVar8 + 0xb8) + (ulonglong)(uint)uVar7 * 8),
            lVar12 != 0)) &&
           (((bVar6 = *(byte *)(lVar12 + 0x10), bVar6 - 1 < 2 || (bVar6 == 0x80)) ||
            ((bVar6 < 0x21 && ((0x100010010U >> ((ulonglong)bVar6 & 0x3f) & 1) != 0)))))) {
          local_190 = 0;
          local_198 = 0;
          local_1a0 = 0;
          local_1a8 = param_9;
          FUN_140122d4e(lVar8,lVar12,&local_158,3);
          fVar26 = param_10[0xc];
        }
        lVar22 = lVar22 + 1;
        lVar25 = lVar25 + 0x20;
        lVar23 = lVar23 + 0x60;
      } while (lVar22 < (int)fVar26);
    }
  }
LAB_14466e253:
  if ((local_f0 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x00014466e56a:
  uVar11 = uVar11 - 1;
  pfVar19 = pfVar19 + 1;
  if (uVar20 == uVar11) goto LAB_14466e575;
  goto LAB_14466e55c;
}



// FUNCTION 14466e934 FUN_14466e934 body=847 status=ok
// SIG undefined FUN_14466e934(void)

void FUN_14466e934(longlong param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong unaff_RBX;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  float fVar9;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined4 local_170;
  undefined4 local_168;
  byte local_151;
  longlong local_150;
  longlong local_148;
  undefined8 uStack_140;
  longlong local_130;
  int local_128;
  longlong local_120;
  undefined4 local_118;
  undefined **local_110;
  undefined8 local_108;
  longlong *plStack_100;
  undefined8 local_f8;
  undefined4 local_f0;
  longlong local_e8;
  undefined4 local_e0;
  longlong local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar3 = *(longlong *)(param_1 + 0x1b0);
  if ((((lVar3 != 0) && (lVar6 = *(longlong *)(param_3 + 8), lVar6 != 0)) &&
      (*(longlong *)(lVar6 + 0x30) != 0)) && (3 < (int)param_2[1])) {
    local_151 = *(byte *)(lVar6 + 0x38);
    local_88 = 0;
    uStack_80 = 0;
    local_150 = param_3;
    FUN_1407a57f6(&local_88,(int)param_2[1],1);
    if (0 < (int)param_2[1]) {
      lVar6 = 0;
      unaff_RBX = 0;
      do {
        local_f8 = *(undefined8 *)(*param_2 + lVar6);
        local_f0 = *(undefined4 *)(*param_2 + 8 + lVar6);
        uVar4 = FUN_140813180(lVar3,&local_f8);
        if (((((int)uVar4 < 0) || (*(int *)(lVar3 + 0xc0) <= (int)uVar4)) ||
            (lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0xb8) + (ulonglong)uVar4 * 8), lVar5 == 0))
           || (((bVar2 = *(byte *)(lVar5 + 0x10), 1 < bVar2 - 1 && (bVar2 != 0x80)) &&
               ((0x20 < bVar2 || ((0x100010010U >> ((ulonglong)bVar2 & 0x3f) & 1) == 0)))))) {
          plVar7 = &DAT_14c846480;
          plVar8 = &local_e8;
          for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
            *plVar8 = *plVar7;
            plVar7 = plVar7 + 1;
            plVar8 = plVar8 + 1;
          }
        }
        else {
          FUN_1401571e4(lVar3,&local_e8,lVar5,3);
        }
        plVar7 = &local_e8;
        plVar8 = (longlong *)(local_88 + lVar6 * 8);
        for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
          *plVar8 = *plVar7;
          plVar7 = plVar7 + 1;
          plVar8 = plVar8 + 1;
        }
        unaff_RBX = unaff_RBX + 1;
        lVar6 = lVar6 + 0xc;
      } while (unaff_RBX < (int)param_2[1]);
    }
    lVar3 = local_150;
    bVar2 = local_151;
    local_110 = &PTR_FUN_14beb2758;
    local_108 = 0;
    plStack_100 = (longlong *)0x0;
    local_120 = local_88;
    local_118 = (undefined4)uStack_80;
    local_178 = *(undefined4 *)(*(longlong *)(local_150 + 8) + 0x3c);
    local_168 = 0x3f800000;
    local_170 = 0x3f800000;
    FUN_1498515de(&local_110,&local_120,0x3f800001,
                  CONCAT71((int7)((ulonglong)unaff_RBX >> 8),local_151) & 0xffffffff);
    FUN_14985127a(*(undefined8 *)(lVar3 + 8),&local_130);
    local_148 = 0;
    uStack_140 = 0;
    FUN_1407a57f6(&local_148,local_128,1);
    if (0 < (longlong)local_128) {
      fVar9 = 0.0;
      lVar6 = 0;
      do {
        FUN_1498532e8(&local_110,&local_e8,fVar9);
        plVar7 = &local_e8;
        plVar8 = (longlong *)(local_148 + lVar6);
        for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
          *plVar8 = *plVar7;
          plVar7 = plVar7 + 1;
          plVar8 = plVar8 + 1;
        }
        fVar9 = fVar9 + 1.0 / (float)(int)(local_128 - (uint)(bVar2 ^ 1));
        lVar6 = lVar6 + 0x60;
      } while ((longlong)local_128 * 0x60 != lVar6);
    }
    local_e8 = local_148;
    local_e0 = (undefined4)uStack_140;
    lVar6 = *(longlong *)(lVar3 + 8);
    local_168 = *(undefined4 *)(lVar6 + 0x44);
    local_170 = *(undefined4 *)(lVar6 + 0x40);
    local_178 = *(undefined4 *)(lVar6 + 0x3c);
    FUN_1498515de(lVar3,&local_e8,*(undefined1 *)(lVar6 + 8),local_151);
    if (local_148 != 0) {
      FUN_1400020a8();
    }
    if (local_130 != 0) {
      FUN_1400020a8();
    }
    plVar7 = plStack_100;
    local_110 = &PTR_FUN_14beb2758;
    if (plStack_100 != (longlong *)0x0) {
      LOCK();
      plVar8 = plStack_100 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plStack_100)(plStack_100);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_70 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14466ec84 FUN_14466ec84 body=859 status=ok
// SIG undefined FUN_14466ec84(void)

void FUN_14466ec84(longlong param_1,undefined8 *param_2,float *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float local_c4;
  
  lVar13 = *(longlong *)(param_1 + 8);
  if (((lVar13 != 0) && (*(longlong *)(lVar13 + 0x30) != 0)) &&
     (iVar5 = *(int *)(lVar13 + 0x50), 1 < (longlong)iVar5)) {
    uVar24 = (undefined4)*param_2;
    uVar25 = (undefined4)((ulonglong)*param_2 >> 0x20);
    local_c4 = 3.4028235e+38;
    lVar13 = 0x90;
    lVar15 = 0;
    do {
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x48);
      dVar1 = *(double *)(lVar6 + -0x60 + lVar13);
      dVar19 = *(double *)(lVar6 + -0x10 + lVar13);
      dVar10 = *(double *)(lVar6 + lVar13) - dVar1;
      dVar18 = *(double *)(lVar6 + -8 + lVar13);
      dVar23 = *(double *)(lVar6 + -0x70 + lVar13);
      dVar2 = *(double *)(lVar6 + -0x68 + lVar13);
      dVar9 = dVar18 - dVar2;
      dVar12 = dVar19 - dVar23;
      dVar3 = (double)param_2[1];
      dVar4 = (double)param_2[2];
      dVar11 = dVar1 - dVar4;
      dVar22 = dVar2 - dVar3;
      dVar7 = dVar23 - (double)CONCAT44(uVar25,uVar24);
      dVar8 = dVar10 * dVar10 + dVar12 * dVar12 + dVar9 * dVar9;
      iVar16 = *(int *)(*(longlong *)(param_1 + 8) + 0x50) + -1;
      fVar17 = (float)(-(dVar11 * dVar10 + dVar7 * dVar12 + dVar9 * dVar22) / dVar8);
      iVar14 = (int)lVar15;
      if ((fVar17 <= 0.0) || (1.0 <= fVar17)) {
        dVar23 = (double)CONCAT44(uVar25,uVar24) - dVar23;
        fVar20 = (float)SQRT((dVar4 - dVar1) * (dVar4 - dVar1) +
                             (dVar3 - dVar2) * (dVar3 - dVar2) + dVar23 * dVar23);
        dVar19 = (double)CONCAT44(uVar25,uVar24) - dVar19;
        dVar3 = dVar3 - dVar18;
        dVar4 = dVar4 - *(double *)(lVar6 + lVar13);
        fVar17 = (float)SQRT(dVar4 * dVar4 + dVar3 * dVar3 + dVar19 * dVar19);
        fVar21 = (float)iVar16;
        if (fVar17 <= fVar20) {
          fVar21 = (float)(iVar14 + 1) / fVar21;
        }
        else {
          fVar21 = (float)iVar14 / fVar21;
          fVar17 = fVar20;
        }
      }
      else {
        fVar21 = (float)iVar16;
        fVar21 = ((float)(iVar14 + 1) / fVar21) * fVar17 + ((float)iVar14 / fVar21) * (1.0 - fVar17)
        ;
        dVar1 = dVar7 * dVar9 - dVar12 * dVar22;
        dVar18 = dVar11 * dVar12 - dVar10 * dVar7;
        dVar23 = dVar22 * dVar10 - dVar9 * dVar11;
        fVar17 = (float)(SQRT(dVar1 * dVar1 + dVar23 * dVar23 + dVar18 * dVar18) / SQRT(dVar8));
      }
      if (fVar17 < local_c4) {
        *param_3 = fVar21;
        uVar24 = (undefined4)*param_2;
        uVar25 = (undefined4)((ulonglong)*param_2 >> 0x20);
        local_c4 = fVar17;
      }
      lVar15 = lVar15 + 1;
      lVar13 = lVar13 + 0x60;
    } while ((longlong)iVar5 + -1 != lVar15);
  }
  return;
}



// FUNCTION 14466efe0 FUN_14466efe0 body=223 status=ok
// SIG undefined FUN_14466efe0(void)

void FUN_14466efe0(longlong param_1,float param_2,float *param_3)

{
  uint uVar1;
  float *pfVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  
  lVar4 = *(longlong *)(param_1 + 8);
  if (lVar4 == 0) {
    return;
  }
  if (*(longlong *)(lVar4 + 0x30) == 0) {
    return;
  }
  iVar3 = *(int *)(lVar4 + 0x50);
  uVar6 = *(uint *)(lVar4 + 0x60);
  if ((int)uVar6 < 1) {
    if (iVar3 < 1) goto LAB_14466f0b1;
  }
  else {
    lVar4 = *(longlong *)(lVar4 + 0x58);
    if (1.0 <= param_2) {
      param_2 = 1.0;
    }
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
    param_2 = param_2 * *(float *)(lVar4 + (longlong)(int)(uVar6 - 1) * 4);
    uVar7 = 0;
    do {
      uVar1 = (uVar6 >> 1) + uVar7;
      pfVar2 = (float *)(lVar4 + (ulonglong)uVar1 * 4);
      if (*pfVar2 <= param_2 && param_2 != *pfVar2) {
        uVar7 = uVar1 + (uVar6 & 1);
      }
      bVar5 = 1 < uVar6;
      uVar6 = uVar6 >> 1;
    } while (bVar5);
    if (iVar3 <= (int)uVar7) {
LAB_14466f0b1:
      fVar8 = 1.0;
      goto LAB_14466f0b9;
    }
    if (0 < (int)uVar7) {
      fVar8 = *(float *)(lVar4 + (ulonglong)(uVar7 - 1) * 4);
      fVar8 = (param_2 - fVar8) / (*(float *)(lVar4 + (ulonglong)uVar7 * 4) - fVar8);
      fVar8 = fVar8 * ((float)(int)uVar7 / (float)(iVar3 + -1)) +
              (1.0 - fVar8) * ((float)(int)(uVar7 - 1) / (float)(iVar3 + -1));
      goto LAB_14466f0b9;
    }
  }
  fVar8 = 0.0;
LAB_14466f0b9:
  *param_3 = fVar8;
  return;
}



// FUNCTION 14466f1f4 FUN_14466f1f4 body=760 status=ok
// SIG undefined FUN_14466f1f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14466f1f4(void)

{
  char cVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined **local_40;
  undefined8 uStack_38;
  undefined4 local_24;
  undefined *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = (undefined *)0x800000014beb24e4;
  local_24 = 0x10;
  local_18 = FUN_14577453c();
  local_14 = 1;
  FUN_146764696(&local_20);
  FUN_1446f470e(&local_20,PTR_u_bool_14c764e60,1);
  FUN_1446f470e(&local_20,PTR_u_float_14c764e68,1);
  FUN_1446f470e(&local_20,PTR_u_double_14c764e70,1);
  FUN_1446f470e(&local_20,PTR_DAT_14c764e78,1);
  FUN_1446f470e(&local_20,PTR_u_int32_14c764e80,1);
  FUN_1446f470e(&local_20,PTR_u_int64_14c764e88,1);
  FUN_1446f470e(&local_20,PTR_u_uint8_14c764e90,1);
  FUN_1446f470e(&local_20,PTR_u_uint32_14c764e98,1);
  FUN_1446f470e(&local_20,PTR_u_uint64_14c764ea0,1);
  FUN_1446f470e(&local_20,PTR_u_FName_14c764ea8,1);
  FUN_1446f470e(&local_20,PTR_u_FString_14c764eb0,1);
  FUN_1446f470e(&local_20,PTR_u_FText_14c764eb8,1);
  FUN_1446f470e(&local_20,PTR_u_TArray<bool>_14c764ec0,1);
  FUN_1446f470e(&local_20,PTR_u_TArray<float>_14c764ec8,1);
  FUN_1446f470e(&local_20,PTR_u_TArray<double>_14c764ed0,1);
  FUN_1446f470e(&local_20,PTR_u_TArray<int32>_14c764ed8,1);
  FUN_1446f470e(&local_20,PTR_u_TArray<uint32>_14c764ee0,1);
  FUN_1446f470e(&local_20,PTR_u_TArray<uint8>_14c764ee8,1);
  FUN_1446f470e(&local_20,PTR_u_TArray<FName>_14c764ef0,1);
  FUN_1446f470e(&local_20,PTR_u_TArray<FString>_14c764ef8,1);
  local_40 = &PTR_FUN_14beb2650;
  uStack_38 = 1;
  local_48 = 2;
  FUN_14282b410(L"/Script/ControlRigSpline",0,0,&PTR_FUN_14beb2670);
  local_20 = &DAT_14a19662d;
  local_18 = 4;
  local_14 = 0;
  FUN_14001a6c0(&local_20,1);
  FUN_1400b22c2(&local_20,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_20,&DAT_14cc2d4c0);
  if (cVar1 == '\0') {
    _DAT_14cc2d4c0 = 0;
    uRam000000014cc2d4c8 = 0;
  }
  if (local_20 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  local_40 = (undefined **)0x0;
  uStack_38 = 0;
  local_48 = 0x14;
  FUN_14282b410(L"/Script/ControlRigSpline",0,0,&PTR_FUN_14beb5b00);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14466f4f0 FUN_14466f4f0 body=55 status=ok
// SIG undefined FUN_14466f4f0(void)

void FUN_14466f4f0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2d6d0 == 0) {
    uVar1 = FUN_141235ed7();
    DAT_14cc2d6d0 = FUN_14171c317(FUN_1467682a8,uVar1,L"EPBIKLimitType");
  }
  return;
}



// FUNCTION 14466f527 FUN_14466f527 body=55 status=ok
// SIG undefined FUN_14466f527(void)

void FUN_14466f527(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2d700 == 0) {
    uVar1 = FUN_141235ed7();
    DAT_14cc2d700 = FUN_14171c317(FUN_146768338,uVar1,L"EPBIKRootBehavior");
  }
  return;
}



// FUNCTION 14466f55e FUN_14466f55e body=393 status=ok
// SIG undefined FUN_14466f55e(void)

void FUN_14466f55e(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  
  cVar1 = FUN_14466f6e8();
  if (cVar1 == '\0') {
    return;
  }
  if ((longlong)(int)param_1[2] != 0) {
    lVar2 = param_1[1];
    lVar3 = (longlong)(int)param_1[2] * 0xe0;
    do {
      FUN_149858f2c(lVar2);
      lVar2 = lVar2 + 0xe0;
      lVar3 = lVar3 + -0xe0;
    } while (lVar3 != 0);
  }
  if ((longlong)(int)param_1[4] != 0) {
    lVar2 = param_1[3];
    lVar3 = (longlong)(int)param_1[4] * 0x120 + lVar2;
    do {
      FUN_14985918c(lVar2);
      fVar5 = *(float *)(lVar2 + 0x10c) * *(float *)(param_2 + 8) * 100.0;
      fVar6 = 0.5;
      if (0.5 <= fVar5) {
        fVar6 = fVar5;
      }
      *(float *)(lVar2 + 0x108) = 1.0 / fVar6;
      *(longlong *)(lVar2 + 0x60) = param_2;
      lVar2 = lVar2 + 0x120;
    } while (lVar2 != lVar3);
  }
  lVar2 = param_1[6];
  if ((longlong)(int)lVar2 != 0) {
    lVar3 = param_1[5];
    lVar4 = 0;
    do {
      (**(code **)(**(longlong **)(lVar3 + lVar4) + 0x10))();
      lVar4 = lVar4 + 0x10;
    } while ((longlong)(int)lVar2 * 0x10 != lVar4);
  }
  if (*(char *)(param_2 + 0xd) == '\x01') {
    *(undefined4 *)(*(longlong *)(*param_1 + 0xb8) + 0x108) = 0;
  }
  FUN_14985da36(param_1,0);
  if ((longlong)(int)param_1[8] != 0) {
    lVar2 = param_1[7];
    lVar3 = (longlong)(int)param_1[8] * 0x120;
    do {
      FUN_14985d060(lVar2);
      lVar2 = lVar2 + 0x120;
      lVar3 = lVar3 + -0x120;
    } while (lVar3 != 0);
  }
  FUN_14985db10(param_1,param_2);
  FUN_14985db4e(param_1);
  return;
}



// FUNCTION 14466f6e8 FUN_14466f6e8 body=2202 status=ok
// SIG undefined FUN_14466f6e8(void)

ulonglong FUN_14466f6e8(double *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  double dVar10;
  ulonglong uVar11;
  longlong *plVar12;
  int iVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong *plVar17;
  undefined8 unaff_RDI;
  double *pdVar18;
  undefined1 uVar19;
  double dVar20;
  double *pdVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auStack_218 [32];
  double *local_1f8;
  double *local_1f0;
  longlong local_1e8;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined8 local_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  ulonglong local_a0;
  double dVar4;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  uVar11 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  if (*(char *)((longlong)param_1 + 0x49) != '\0') goto LAB_14466f7a0;
  *(undefined1 *)((longlong)param_1 + 0x49) = 0;
  lVar14 = (longlong)*(int *)(param_1 + 2);
  if (lVar14 != 0) {
    uVar11 = 0;
    if (*(int *)(param_1 + 8) == 0) goto LAB_14466f7a0;
    dVar10 = param_1[1];
    lVar16 = lVar14 * 0xe0;
    dVar20 = dVar10;
    do {
      if (*(char *)((longlong)dVar20 + 0xd8) == '\x01') {
        *param_1 = dVar20;
        uVar11 = (ulonglong)((int)uVar11 + 1);
      }
      dVar20 = (double)((longlong)dVar20 + 0xe0);
      lVar16 = lVar16 + -0xe0;
    } while (lVar16 != 0);
    if ((int)uVar11 < 2 && *param_1 != 0.0) {
      lVar16 = 0;
      do {
        uVar9 = *(uint *)((longlong)dVar10 + 8 + lVar16);
        if ((ulonglong)uVar9 != 0xffffffff) {
          if (((int)uVar9 < 0) || (*(int *)(param_1 + 2) <= (int)uVar9)) goto LAB_14466f79e;
          *(ulonglong *)((longlong)dVar10 + 0xc0 + lVar16) =
               (ulonglong)uVar9 * 0xe0 + (longlong)param_1[1];
        }
        lVar16 = lVar16 + 0xe0;
      } while (lVar14 * 0xe0 - lVar16 != 0);
      if ((longlong)*(int *)(param_1 + 8) != 0) {
        dVar10 = param_1[7];
        dVar20 = (double)((longlong)*(int *)(param_1 + 8) * 0x120 + (longlong)dVar10);
        do {
          lVar14 = *(longlong *)((longlong)dVar10 + 0xd8);
          *(undefined1 *)(lVar14 + 0xd9) = 1;
          for (; (lVar14 != 0 &&
                 (*(undefined1 *)(lVar14 + 0xd9) = 1, *(char *)(lVar14 + 0xd8) == '\0'));
              lVar14 = *(longlong *)(lVar14 + 0xc0)) {
          }
          dVar10 = (double)((longlong)dVar10 + 0x120);
        } while (dVar10 != dVar20);
      }
      uVar11 = (ulonglong)*(int *)(param_1 + 2);
      if (uVar11 != 0) {
        dVar10 = param_1[1];
        dVar22 = (double)(uVar11 * 0xe0 + (longlong)dVar10);
        dVar20 = dVar10;
        while( true ) {
          if ((int)uVar11 != 0) {
            lVar14 = (longlong)(int)uVar11 * 0xe0;
            do {
              if ((*(char *)((longlong)dVar10 + 0xd9) == '\x01') &&
                 (*(double *)((longlong)dVar10 + 0xc0) == dVar20)) {
                iVar13 = *(int *)((longlong)dVar20 + 0xd0);
                uVar9 = iVar13 + 1;
                *(uint *)((longlong)dVar20 + 0xd0) = uVar9;
                if (*(uint *)((longlong)dVar20 + 0xd4) < uVar9) {
                  FUN_1498624c6((longlong *)((longlong)dVar20 + 200));
                }
                *(double *)(*(longlong *)((longlong)dVar20 + 200) + (longlong)iVar13 * 8) = dVar10;
              }
              dVar10 = (double)((longlong)dVar10 + 0xe0);
              lVar14 = lVar14 + -0xe0;
            } while (lVar14 != 0);
          }
          dVar20 = (double)((longlong)dVar20 + 0xe0);
          if (dVar20 == dVar22) break;
          uVar11 = (ulonglong)*(uint *)(param_1 + 2);
          dVar10 = param_1[1];
        }
        iVar13 = *(int *)(param_1 + 2);
        if ((longlong)iVar13 != 0) {
          dVar10 = param_1[1];
          lVar14 = 0;
          do {
            uVar19 = 1;
            if (*(int *)((longlong)dVar10 + 0xd0 + lVar14) < 2) {
              uVar19 = *(undefined1 *)((longlong)dVar10 + 0xd8 + lVar14);
            }
            *(undefined1 *)((longlong)dVar10 + 0xda + lVar14) = uVar19;
            lVar14 = lVar14 + 0xe0;
          } while ((longlong)iVar13 * 0xe0 - lVar14 != 0);
          iVar13 = *(int *)(param_1 + 2);
          if ((longlong)iVar13 != 0) {
            dVar10 = param_1[1];
            lVar14 = 0;
            do {
              lVar16 = *(longlong *)((longlong)dVar10 + 0xc0 + lVar14);
              if (lVar16 == 0) {
                pdVar18 = (double *)((longlong)dVar10 + 0x30 + lVar14);
                local_1c8 = *pdVar18;
                dStack_1c0 = pdVar18[1];
                pdVar18 = (double *)((longlong)dVar10 + 0x40 + lVar14);
                local_1b8 = *pdVar18;
                dStack_1b0 = pdVar18[1];
              }
              else {
                dVar23 = *(double *)(lVar16 + 0x40) * -1.0;
                dVar24 = *(double *)(lVar16 + 0x48) * 1.0;
                pdVar18 = (double *)((longlong)dVar10 + 0x30 + lVar14);
                dVar5 = *pdVar18;
                dVar6 = pdVar18[1];
                pdVar18 = (double *)((longlong)dVar10 + 0x40 + lVar14);
                dVar7 = *pdVar18;
                dVar8 = pdVar18[1];
                dVar20 = *(double *)(lVar16 + 0x38);
                dVar22 = *(double *)(lVar16 + 0x38);
                dVar3 = *(double *)(lVar16 + 0x30);
                dVar4 = *(double *)(lVar16 + 0x30);
                local_1c8 = dVar6 * dVar23 * -1.0 +
                            ((dVar24 * dVar5 - dVar3 * dVar8 * 1.0) - dVar7 * dVar20);
                dStack_1c0 = dVar5 * dVar23 * 1.0 +
                             ((dVar24 * dVar6 - dVar4 * dVar7 * -1.0) - dVar8 * dVar22);
                local_1b8 = dVar8 * dVar23 * 1.0 +
                            dVar20 * dVar5 + (dVar24 * dVar7 - dVar3 * dVar6 * 1.0);
                dStack_1b0 = dVar7 * dVar23 * -1.0 +
                             dVar22 * dVar6 + (dVar24 * dVar8 - dVar4 * dVar5 * -1.0);
              }
              FUN_1448052ee(&local_1c8,&local_1e0);
              *(undefined8 *)((longlong)dVar10 + 0xb0 + lVar14) = local_1d0;
              puVar2 = (undefined4 *)((longlong)dVar10 + 0xa0 + lVar14);
              *puVar2 = local_1e0;
              puVar2[1] = uStack_1dc;
              puVar2[2] = uStack_1d8;
              puVar2[3] = uStack_1d4;
              lVar14 = lVar14 + 0xe0;
            } while ((longlong)iVar13 * 0xe0 - lVar14 != 0);
          }
        }
      }
      FUN_145bfb077(param_1[3],*(undefined4 *)(param_1 + 4));
      *(undefined4 *)(param_1 + 4) = 0;
      if (*(int *)((longlong)param_1 + 0x24) != 0) {
        FUN_14986254c(param_1 + 3);
      }
      if ((longlong)*(int *)(param_1 + 8) != 0) {
        dVar10 = param_1[7];
        dVar20 = (double)((longlong)*(int *)(param_1 + 8) * 0x120 + (longlong)dVar10);
        do {
          dVar22 = *(double *)((longlong)dVar10 + 0xd8);
          do {
            if (*(char *)((longlong)dVar22 + 0xd8) == '\0') {
              dVar22 = *(double *)((longlong)dVar22 + 0xc0);
            }
            if (dVar22 == 0.0) goto LAB_14466f79e;
            FUN_14986050c(param_1,dVar22);
          } while (dVar22 != *param_1);
          dVar10 = (double)((longlong)dVar10 + 0x120);
        } while (dVar10 != dVar20);
      }
      pdVar18 = (double *)param_1[3];
      uVar9 = 0;
      if ((longlong)*(int *)(param_1 + 4) != 0) {
        pdVar21 = pdVar18 + (longlong)*(int *)(param_1 + 4) * 0x24;
        do {
          dVar10 = *param_1;
          FUN_14985918c(pdVar18,uVar9);
          pdVar18[0x1a] = pdVar18[0x12];
          pdVar18[0x1b] = pdVar18[0x13];
          *(undefined4 *)(pdVar18 + 0x18) = *(undefined4 *)(pdVar18 + 0x10);
          *(undefined4 *)((longlong)pdVar18 + 0xc4) = *(undefined4 *)((longlong)pdVar18 + 0x84);
          *(undefined4 *)(pdVar18 + 0x19) = *(undefined4 *)(pdVar18 + 0x11);
          *(undefined4 *)((longlong)pdVar18 + 0xcc) = *(undefined4 *)((longlong)pdVar18 + 0x8c);
          *(undefined4 *)(pdVar18 + 0x23) = 0;
          dVar20 = *pdVar18;
          uVar9 = (uint)(dVar20 == dVar10 || dVar20 == 0.0);
          if (dVar20 != dVar10 && dVar20 != 0.0) {
            iVar13 = 1;
            do {
              *(int *)(pdVar18 + 0x23) = iVar13;
              dVar20 = *(double *)((longlong)dVar20 + 0xc0);
              if (dVar20 == 0.0) break;
              iVar13 = iVar13 + 1;
            } while (dVar20 != dVar10);
          }
          pdVar18 = pdVar18 + 0x24;
        } while (pdVar18 != pdVar21);
        uVar9 = *(uint *)(param_1 + 4);
        pdVar18 = (double *)param_1[3];
      }
      FUN_14986257c(pdVar18,uVar9);
      uVar9 = *(uint *)(param_1 + 4);
      plVar17 = (longlong *)param_1[3];
      if (1 < (int)uVar9) {
        lVar16 = (ulonglong)uVar9 * 0x120;
        lVar14 = 0;
        pdVar18 = &local_1c8;
        do {
          lVar16 = lVar16 + -0x120;
          memcpy(pdVar18,(void *)((longlong)plVar17 + lVar14),0x120);
          memcpy((void *)((longlong)plVar17 + lVar14),(void *)((longlong)plVar17 + lVar16),0x120);
          memcpy((void *)((longlong)plVar17 + lVar16),pdVar18,0x120);
          lVar14 = lVar14 + 0x120;
        } while ((ulonglong)(uVar9 >> 1) * 0x120 != lVar14);
        plVar17 = (longlong *)param_1[3];
        uVar9 = *(uint *)(param_1 + 4);
      }
      if (uVar9 != 0) {
        lVar14 = (longlong)(int)uVar9 * 0x120;
        do {
          *(longlong **)(*plVar17 + 0xb8) = plVar17;
          plVar17 = plVar17 + 0x24;
          lVar14 = lVar14 + -0x120;
        } while (lVar14 != 0);
      }
      local_1f8 = param_1 + 5;
      FUN_145bfb131(param_1[5],*(undefined4 *)(param_1 + 6));
      *(undefined4 *)(param_1 + 6) = 0;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        FUN_149862c60(local_1f8);
      }
      if ((longlong)*(int *)(param_1 + 8) != 0) {
        dVar10 = param_1[7];
        pdVar18 = (double *)((longlong)dVar10 + 0xe8);
        lVar14 = (longlong)*(int *)(param_1 + 8) * 0x120;
        do {
          dVar20 = pdVar18[-2];
          if (*(char *)((longlong)dVar20 + 0xd8) == '\0') {
            dVar20 = *(double *)((longlong)dVar20 + 0xc0);
          }
          if (dVar20 == 0.0) goto LAB_14466f79e;
          lVar16 = *(longlong *)((longlong)dVar20 + 0xb8);
          local_1e8 = lVar14;
          plVar12 = (longlong *)FUN_14001cc68(0xb0,0x10);
          plVar12[1] = (longlong)&DAT_100000001;
          *plVar12 = (longlong)&PTR_FUN_14bebb030;
          plVar17 = plVar12 + 2;
          local_1f0 = pdVar18 + -0x1d;
          FUN_14985c792(plVar17,lVar16,pdVar18 + -0x1d,pdVar18 + -0x19);
          if (plVar12 == (longlong *)0x0) {
            pdVar18[-1] = 7.90505033345994e-323;
            plVar15 = (longlong *)*pdVar18;
            pdVar21 = pdVar18;
            if (plVar15 == (longlong *)0x0) {
              *(double **)(lVar16 + 0x58) = local_1f0;
              *(undefined8 *)(lVar16 + 0x50) = 0x10;
              lVar14 = local_1e8;
            }
            else {
LAB_14466fd7e:
              lVar14 = local_1e8;
              LOCK();
              piVar1 = (int *)((longlong)plVar15 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar15 + 0x10))();
              }
              *pdVar21 = (double)plVar12;
              *(double **)(lVar16 + 0x58) = local_1f0;
              *(longlong **)(lVar16 + 0x50) = plVar17;
              if (plVar12 != (longlong *)0x0) goto LAB_14466fdb2;
            }
          }
          else {
            LOCK();
            *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
            UNLOCK();
            LOCK();
            plVar15 = plVar12 + 1;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)*plVar15 == 0) {
              (**(code **)*plVar12)(plVar12);
              LOCK();
              piVar1 = (int *)((longlong)plVar12 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar12 + 0x10))(plVar12);
              }
            }
            pdVar18[-1] = (double)plVar17;
            if ((longlong *)*pdVar18 != plVar12) {
              LOCK();
              *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
              UNLOCK();
              plVar15 = (longlong *)*pdVar18;
              if (plVar15 != (longlong *)0x0) {
                pdVar21 = (double *)((longlong)dVar10 + 0xe8);
                goto LAB_14466fd7e;
              }
              *pdVar18 = (double)plVar12;
            }
            *(double **)(lVar16 + 0x58) = local_1f0;
            *(longlong **)(lVar16 + 0x50) = plVar17;
            lVar14 = local_1e8;
LAB_14466fdb2:
            LOCK();
            *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
            UNLOCK();
          }
          iVar13 = *(int *)(param_1 + 6);
          *(uint *)(param_1 + 6) = iVar13 + 1U;
          if (*(uint *)((longlong)param_1 + 0x34) < iVar13 + 1U) {
            FUN_149862cb4(local_1f8,iVar13);
          }
          dVar20 = *local_1f8;
          *(longlong **)((longlong)dVar20 + (longlong)iVar13 * 0x10) = plVar17;
          *(longlong **)((longlong)dVar20 + 8 + (longlong)iVar13 * 0x10) = plVar12;
          if (plVar12 != (longlong *)0x0) {
            LOCK();
            plVar17 = plVar12 + 1;
            *(int *)plVar17 = (int)*plVar17 + -1;
            UNLOCK();
            if ((int)*plVar17 == 0) {
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
          dVar10 = (double)((longlong)dVar10 + 0x120);
          pdVar18 = pdVar18 + 0x24;
          lVar14 = lVar14 + -0x120;
        } while (lVar14 != 0);
      }
      if ((longlong)*(int *)(param_1 + 4) != 0) {
        plVar17 = (longlong *)param_1[3];
        lVar14 = (longlong)*(int *)(param_1 + 4) * 0x120;
        do {
          if (((*plVar17 != 0) && (lVar16 = *(longlong *)(*plVar17 + 0xc0), lVar16 != 0)) &&
             (lVar16 = *(longlong *)(lVar16 + 0xb8), lVar16 != 0)) {
            plVar12 = (longlong *)FUN_14001cc68(400,0x10);
            plVar12[1] = (longlong)&DAT_100000001;
            *plVar12 = (longlong)&PTR_FUN_14bebb050;
            FUN_1498599fc(plVar12 + 2,lVar16,plVar17);
            if (plVar12 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
              UNLOCK();
              LOCK();
              plVar15 = plVar12 + 1;
              *(int *)plVar15 = (int)*plVar15 + -1;
              UNLOCK();
              if ((int)*plVar15 == 0) {
                (**(code **)*plVar12)(plVar12);
                LOCK();
                piVar1 = (int *)((longlong)plVar12 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar12 + 0x10))(plVar12);
                }
              }
              LOCK();
              *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
              UNLOCK();
            }
            iVar13 = *(int *)(param_1 + 6);
            *(uint *)(param_1 + 6) = iVar13 + 1U;
            if (*(uint *)((longlong)param_1 + 0x34) < iVar13 + 1U) {
              FUN_149862cb4(local_1f8,iVar13);
            }
            dVar10 = *local_1f8;
            *(longlong **)((longlong)dVar10 + (longlong)iVar13 * 0x10) = plVar12 + 2;
            *(longlong **)((longlong)dVar10 + 8 + (longlong)iVar13 * 0x10) = plVar12;
            if (plVar12 != (longlong *)0x0) {
              LOCK();
              plVar15 = plVar12 + 1;
              *(int *)plVar15 = (int)*plVar15 + -1;
              UNLOCK();
              if ((int)*plVar15 == 0) {
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
          plVar17 = plVar17 + 0x24;
          lVar14 = lVar14 + -0x120;
        } while (lVar14 != 0);
        pdVar18 = (double *)0x0;
      }
      uVar11 = CONCAT71((int7)((ulonglong)pdVar18 >> 8),1);
      FUN_14985da36(param_1,1);
      *(undefined1 *)((longlong)param_1 + 0x49) = 1;
      goto LAB_14466f7a0;
    }
  }
LAB_14466f79e:
  uVar11 = 0;
LAB_14466f7a0:
  if ((local_a0 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffffff;
}



// FUNCTION 14466ff84 FUN_14466ff84 body=189 status=ok
// SIG undefined FUN_14466ff84(void)

void FUN_14466ff84(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 0x30);
  if ((longlong)iVar1 != 0) {
    lVar5 = *(longlong *)(lVar2 + 0x28);
    lVar7 = 0;
    do {
      puVar3 = *(undefined8 **)(lVar5 + lVar7);
      (**(code **)*puVar3)(puVar3,param_1[1]);
      lVar7 = lVar7 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar7);
  }
  if ((*(char *)(param_1[1] + 0xc) == '\0') && (lVar5 = (longlong)*(int *)(lVar2 + 0x30), 0 < lVar5)
     ) {
    fVar8 = (float)(param_2 + 1) / ((float)param_3 * 0.5);
    fVar9 = 1.0;
    if (fVar8 <= 1.0) {
      fVar9 = fVar8;
    }
    uVar6 = lVar5 + 1;
    lVar5 = lVar5 << 4;
    do {
      lVar5 = lVar5 + -0x10;
      plVar4 = *(longlong **)(*(longlong *)(lVar2 + 0x28) + lVar5);
      (**(code **)(*plVar4 + 8))(plVar4,fVar9);
      uVar6 = uVar6 - 1;
    } while (1 < uVar6);
  }
  return;
}



// FUNCTION 144670042 FUN_144670042 body=169 status=ok
// SIG undefined FUN_144670042(void)

void FUN_144670042(undefined8 *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x49) = 0;
  *param_1 = 0;
  FUN_145bfb077(param_1[3],*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  if (*(int *)((longlong)param_1 + 0x24) != 0) {
    FUN_14986254c(param_1 + 3);
  }
  FUN_145bfb0ae(param_1[1],*(undefined4 *)(param_1 + 2));
  *(undefined4 *)(param_1 + 2) = 0;
  if (*(int *)((longlong)param_1 + 0x14) != 0) {
    FUN_149862d5e(param_1 + 1);
  }
  FUN_145bfb131(param_1[5],*(undefined4 *)(param_1 + 6));
  *(undefined4 *)(param_1 + 6) = 0;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    FUN_149862c60(param_1 + 5);
  }
  FUN_145bfb0e5(param_1[7],*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)((longlong)param_1 + 0x44) == 0) {
    return;
  }
  FUN_149862d8e(param_1 + 7);
  return;
}



// FUNCTION 1446700ec FUN_1446700ec body=2724 status=ok
// SIG undefined FUN_1446700ec(void)

void FUN_1446700ec(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6,undefined8 param_7,undefined8 param_8,
                  byte *param_9)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  longlong lVar22;
  byte bVar23;
  uint uVar24;
  int iVar25;
  undefined4 uVar26;
  longlong lVar27;
  longlong *plVar28;
  longlong lVar29;
  longlong *plVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  ulonglong uVar33;
  int iVar34;
  longlong lVar35;
  longlong lVar36;
  byte *pbVar37;
  undefined1 auStack_1b8 [32];
  undefined4 *local_198;
  undefined1 local_190;
  undefined1 local_188;
  undefined1 local_180;
  longlong *local_170;
  byte *local_168;
  undefined4 local_15c;
  longlong *local_158;
  longlong local_150;
  byte *local_148;
  longlong *local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  longlong local_d8;
  int local_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar5 = *(longlong *)(param_1 + 0x1b0);
  local_158 = param_2;
  if (lVar5 == 0) goto LAB_144670602;
  if ((longlong)(int)param_3[1] == 0) {
    uVar24 = 0xffffffff;
  }
  else {
    uVar33 = 0xffffffff;
    lVar36 = 0;
    do {
      uVar6 = *(ulonglong *)(*param_3 + lVar36);
      uVar24 = (uint)(uVar6 >> 0x10);
      uVar24 = (int)(uVar6 >> 0x20) + (int)(uVar6 & 0xffff) +
               (int)(uVar33 >> 2) + (uint)uVar33 * 0x40 + (int)uVar6 * 0x10000 +
               (uVar24 << 0x13 | uVar24 & 0xffff) + (int)((uVar6 & 0xffff) >> 4) + 0x9e3779b9 ^
               (uint)uVar33;
      lVar36 = lVar36 + 0x90;
      uVar33 = (ulonglong)uVar24;
    } while ((longlong)(int)param_3[1] * 0x90 != lVar36);
  }
  if ((longlong)(int)param_5[1] != 0) {
    lVar36 = 0;
    do {
      uVar33 = *(ulonglong *)(*param_5 + lVar36);
      uVar9 = (uint)(uVar33 >> 0x10);
      uVar24 = (int)((uVar33 & 0xffff) >> 4) +
               (int)(uVar33 >> 0x20) + (int)(uVar33 & 0xffff) +
               (uVar24 >> 2) + uVar24 * 0x40 + (int)uVar33 * 0x10000 +
               (uVar9 << 0x13 | uVar9 & 0xffff) + 0x9e3779b9 ^ uVar24;
      lVar36 = lVar36 + 0x50;
    } while ((longlong)(int)param_5[1] * 0x50 != lVar36);
  }
  bVar23 = *(uint *)(param_9 + 4) != ~uVar24 | *param_9;
  *param_9 = bVar23;
  local_170 = param_3;
  if (bVar23 != 0) {
    if (*(int *)(param_9 + 0x14) < 0) {
      param_9[0x10] = 0;
      param_9[0x11] = 0;
      param_9[0x12] = 0;
      param_9[0x13] = 0;
      FUN_14481578e(param_9 + 8,0);
    }
    else {
      param_9[0x10] = 0;
      param_9[0x11] = 0;
      param_9[0x12] = 0;
      param_9[0x13] = 0;
    }
    local_148 = param_9 + 0x28;
    FUN_144670042();
    local_168 = param_9 + 0x18;
    iVar34 = *(int *)(param_9 + 0x24);
    param_9[0x20] = 0;
    param_9[0x21] = 0;
    param_9[0x22] = 0;
    param_9[0x23] = 0;
    if (iVar34 < 0) {
      FUN_14481578e(local_168,0);
    }
    *(undefined4 *)(param_4 + 1) = 0;
    if (*(int *)((longlong)param_4 + 0xc) < 0) {
      FUN_14481578e(param_4,0);
    }
    lVar36 = param_3[1];
    if ((longlong)(int)lVar36 == 0) goto LAB_144670602;
    lVar27 = *param_3;
    lVar35 = 0;
    iVar34 = 0;
    local_140 = param_4;
    local_138 = param_1;
    do {
      local_c8._0_4_ = CONCAT31(local_c8._1_3_,1);
      local_c8._4_4_ = (undefined4)*(undefined8 *)(lVar27 + lVar35);
      uStack_c0 = (undefined4)((ulonglong)*(undefined8 *)(lVar27 + lVar35) >> 0x20);
      iVar25 = FUN_140813180(lVar5,&local_c8);
      param_1 = local_138;
      param_4 = local_140;
      iVar34 = iVar34 + (uint)(iVar25 != -1);
      lVar35 = lVar35 + 0x90;
    } while ((longlong)(int)lVar36 * 0x90 != lVar35);
    if ((iVar34 == 0) || (*local_158 == 0)) goto LAB_144670602;
    FUN_149192502(lVar5,&local_d8,1);
    plVar30 = local_170;
    if (0 < local_d0) {
      lVar36 = 0;
      do {
        uVar26 = *(undefined4 *)(*(longlong *)(local_d8 + lVar36 * 8) + 0x1c);
        iVar34 = *(int *)(param_9 + 0x20);
        *(uint *)(param_9 + 0x20) = iVar34 + 1U;
        if (*(uint *)(param_9 + 0x24) < iVar34 + 1U) {
          FUN_1446f48e2(local_168,iVar34);
        }
        *(undefined4 *)(*(longlong *)local_168 + (longlong)iVar34 * 4) = uVar26;
        lVar36 = lVar36 + 1;
      } while (lVar36 < local_d0);
      plVar30 = local_170;
      if (0 < local_d0) {
        lVar36 = 0;
        do {
          local_150 = *(longlong *)(local_d8 + lVar36 * 8);
          local_120 = *(undefined8 *)(local_150 + 0x14);
          lVar27 = FUN_140813120(lVar5);
          local_15c = 0xffffffff;
          iVar34 = -1;
          if (lVar27 != 0) {
            lVar35 = *param_6;
            lVar22 = param_6[1];
            local_130 = lVar36;
            local_128 = lVar27;
            do {
              lVar36 = local_128;
              if ((int)lVar22 == 0) {
LAB_14467046d:
                iVar34 = *(int *)(lVar36 + 0x1c);
                plVar30 = local_170;
                lVar36 = local_130;
                goto LAB_144670485;
              }
              lVar29 = 0;
              while (*(longlong *)(lVar35 + lVar29) != *(longlong *)(lVar27 + 0x14)) {
                lVar29 = lVar29 + 8;
                lVar36 = lVar27;
                if ((longlong)(int)lVar22 * 8 == lVar29) goto LAB_14467046d;
              }
              lVar27 = FUN_140813120(lVar5);
            } while (lVar27 != 0);
            iVar34 = -1;
            plVar30 = local_170;
            lVar36 = local_130;
          }
LAB_144670485:
          if (0 < (longlong)*(int *)(param_9 + 0x20)) {
            lVar27 = 0;
            do {
              if (*(int *)(*(longlong *)local_168 + lVar27 * 4) == iVar34) {
                local_15c = (undefined4)lVar27;
                break;
              }
              lVar27 = lVar27 + 1;
            } while (*(int *)(param_9 + 0x20) != lVar27);
          }
          FUN_1401571e4(lVar5,&local_c8,local_150,2);
          local_e8 = local_98;
          local_118 = (undefined4)local_c8;
          uStack_114 = local_c8._4_4_;
          uStack_110 = uStack_c0;
          uStack_10c = uStack_bc;
          local_108 = local_b8;
          uStack_104 = uStack_b4;
          uStack_100 = uStack_b0;
          uStack_fc = uStack_ac;
          local_190 = *(longlong *)(*(longlong *)(local_d8 + lVar36 * 8) + 0x14) == *local_158;
          local_198 = &local_118;
          FUN_14986062e(local_148,local_120,local_15c,local_f8);
          lVar36 = lVar36 + 1;
        } while (lVar36 < local_d0);
      }
    }
    if ((longlong)(int)plVar30[1] != 0) {
      local_158 = (longlong *)*local_170;
      local_168 = (byte *)((longlong)(int)plVar30[1] * 0x90);
      pbVar37 = (byte *)0x0;
      do {
        uVar26 = FUN_1498606e8(local_148,*(undefined8 *)((longlong)local_158 + (longlong)pbVar37));
        iVar34 = (int)param_4[1];
        *(uint *)(param_4 + 1) = iVar34 + 1U;
        if (*(uint *)((longlong)param_4 + 0xc) < iVar34 + 1U) {
          FUN_1446f48e2(param_4,iVar34);
        }
        *(undefined4 *)(*param_4 + (longlong)iVar34 * 4) = uVar26;
        pbVar37 = pbVar37 + 0x90;
      } while (local_168 != pbVar37);
    }
    FUN_14466f6e8(local_148);
    *param_9 = 0;
    *(uint *)(param_9 + 4) = ~uVar24;
    if (local_d8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((param_9[0x71] == 1) && ((int)param_4[1] == (int)local_170[1])) {
    local_140 = param_4;
    if (0 < *(int *)(param_9 + 0x38)) {
      lVar36 = 0;
      lVar27 = 0;
      do {
        iVar34 = *(int *)(*(longlong *)(param_9 + 0x18) + lVar27 * 4);
        if (((((longlong)iVar34 < 0) || (*(int *)(lVar5 + 0xc0) <= iVar34)) ||
            (lVar35 = *(longlong *)(*(longlong *)(lVar5 + 0xb8) + (longlong)iVar34 * 8), lVar35 == 0
            )) || (((bVar23 = *(byte *)(lVar35 + 0x10), 1 < bVar23 - 1 && (bVar23 != 0x80)) &&
                   ((0x20 < bVar23 || ((0x100010010U >> ((ulonglong)bVar23 & 0x3f) & 1) == 0)))))) {
          puVar31 = &DAT_14c846480;
          puVar32 = &local_c8;
          for (lVar35 = 0xc; lVar35 != 0; lVar35 = lVar35 + -1) {
            *puVar32 = *puVar31;
            puVar31 = puVar31 + 1;
            puVar32 = puVar32 + 1;
          }
        }
        else {
          FUN_1401571e4(lVar5,&local_c8,lVar35,3);
        }
        lVar35 = *(longlong *)(param_9 + 0x30);
        puVar31 = (undefined8 *)(lVar35 + 0x10 + lVar36);
        *puVar31 = CONCAT44(uStack_a4,local_a8);
        puVar31[1] = CONCAT44(uStack_9c,uStack_a0);
        *(undefined8 *)(lVar35 + 0x20 + lVar36) = local_98;
        lVar35 = *(longlong *)(param_9 + 0x30);
        puVar31 = (undefined8 *)(lVar35 + 0x30 + lVar36);
        *puVar31 = CONCAT44(local_c8._4_4_,(undefined4)local_c8);
        puVar31[1] = CONCAT44(uStack_bc,uStack_c0);
        puVar31 = (undefined8 *)(lVar35 + 0x40 + lVar36);
        *puVar31 = CONCAT44(uStack_b4,local_b8);
        puVar31[1] = CONCAT44(uStack_ac,uStack_b0);
        lVar35 = *(longlong *)(param_9 + 0x30);
        puVar1 = (undefined4 *)(lVar35 + 0x50 + lVar36);
        *puVar1 = (undefined4)local_88;
        puVar1[1] = local_88._4_4_;
        puVar1[2] = (undefined4)uStack_80;
        puVar1[3] = uStack_80._4_4_;
        *(undefined8 *)(lVar35 + 0x60 + lVar36) = local_78;
        lVar27 = lVar27 + 1;
        lVar36 = lVar36 + 0xe0;
      } while (lVar27 < *(int *)(param_9 + 0x38));
    }
    plVar30 = local_170;
    pbVar37 = param_9 + 8;
    iVar34 = *(int *)(param_9 + 0x10);
    if (iVar34 != (int)param_5[1]) {
      iVar25 = 0;
      iVar34 = *(int *)(param_9 + 0x14);
      param_9[0x10] = 0;
      param_9[0x11] = 0;
      param_9[0x12] = 0;
      param_9[0x13] = 0;
      if (-1 < iVar34) goto LAB_144670798;
      FUN_14481578e(pbVar37,0);
      while( true ) {
        iVar25 = *(int *)(param_9 + 0x10);
LAB_144670798:
        iVar34 = (int)param_5[1];
        if (iVar34 <= iVar25) break;
        *(uint *)(param_9 + 0x10) = iVar25 + 1U;
        if (*(uint *)(param_9 + 0x14) < iVar25 + 1U) {
          FUN_1446f48e2(pbVar37,iVar25);
        }
        *(undefined4 *)(*(longlong *)(param_9 + 8) + (longlong)iVar25 * 4) = 0xffffffff;
      }
    }
    if (0 < iVar34) {
      lVar36 = 0;
      do {
        plVar28 = (longlong *)(lVar36 * 0x50 + *param_5);
        uVar24 = *(uint *)(*(longlong *)pbVar37 + lVar36 * 4);
        if (uVar24 == 0xffffffff) {
          iVar34 = -1;
          if ((longlong)*(int *)(param_9 + 0x38) != 0) {
            uVar33 = 0;
            do {
              if (*(longlong *)(*(longlong *)(param_9 + 0x30) + uVar33) == *plVar28) {
                iVar34 = (int)(uVar33 >> 5) * -0x49249249;
                break;
              }
              uVar33 = uVar33 + 0xe0;
            } while ((longlong)*(int *)(param_9 + 0x38) * 0xe0 - uVar33 != 0);
          }
          *(int *)(*(longlong *)pbVar37 + lVar36 * 4) = iVar34;
          uVar24 = *(uint *)(*(longlong *)pbVar37 + lVar36 * 4);
          if (uVar24 != 0xffffffff) goto LAB_144670848;
        }
        else {
LAB_144670848:
          if (((param_9[0x71] == 1) && (-1 < (int)uVar24)) &&
             (((int)uVar24 < *(int *)(param_9 + 0x38) &&
              (lVar27 = *(longlong *)
                         (*(longlong *)(param_9 + 0x30) + 0xb8 + (ulonglong)uVar24 * 0xe0),
              lVar27 != 0)))) {
            *(int *)(lVar27 + 8) = (int)plVar28[1];
            *(undefined4 *)(lVar27 + 0xc) = *(undefined4 *)((longlong)plVar28 + 0xc);
            *(char *)(lVar27 + 0x10) = (char)plVar28[2];
            *(undefined4 *)(lVar27 + 0x14) = *(undefined4 *)((longlong)plVar28 + 0x14);
            *(int *)(lVar27 + 0x18) = (int)plVar28[3];
            *(undefined1 *)(lVar27 + 0x1c) = *(undefined1 *)((longlong)plVar28 + 0x1c);
            *(int *)(lVar27 + 0x20) = (int)plVar28[4];
            *(undefined4 *)(lVar27 + 0x24) = *(undefined4 *)((longlong)plVar28 + 0x24);
            *(char *)(lVar27 + 0x28) = (char)plVar28[5];
            *(undefined4 *)(lVar27 + 0x2c) = *(undefined4 *)((longlong)plVar28 + 0x2c);
            *(int *)(lVar27 + 0x30) = (int)plVar28[6];
            *(undefined1 *)(lVar27 + 0x34) = *(undefined1 *)((longlong)plVar28 + 0x34);
            *(longlong *)(lVar27 + 0x38) = plVar28[8];
            *(longlong *)(lVar27 + 0x40) = plVar28[9];
            *(longlong *)(lVar27 + 0x48) = plVar28[7];
          }
        }
        lVar36 = lVar36 + 1;
      } while (lVar36 < (int)param_5[1]);
    }
    iVar34 = (int)plVar30[1];
    if (0 < iVar34) {
      lVar36 = 0x21;
      lVar27 = 0;
      do {
        lVar35 = (longlong)*(int *)(*local_140 + lVar27 * 4);
        if (lVar35 != -1) {
          lVar22 = *plVar30;
          puVar31 = (undefined8 *)(lVar22 + -0x74 + lVar36 * 4);
          uVar13 = *puVar31;
          uVar14 = puVar31[1];
          puVar31 = (undefined8 *)(lVar22 + -100 + lVar36 * 4);
          uVar15 = *puVar31;
          uVar16 = puVar31[1];
          puVar31 = (undefined8 *)(lVar22 + -0x54 + lVar36 * 4);
          uVar17 = *puVar31;
          uVar18 = puVar31[1];
          uVar3 = *(undefined8 *)(lVar22 + -0x44 + lVar36 * 4);
          uVar7 = *(undefined8 *)(lVar22 + -0x14 + lVar36 * 4);
          uVar26 = *(undefined4 *)(lVar22 + -0xc + lVar36 * 4);
          uVar4 = *(undefined4 *)(lVar22 + -8 + lVar36 * 4);
          uVar8 = *(undefined8 *)(lVar22 + -4 + lVar36 * 4);
          lVar22 = *(longlong *)(param_9 + 0x60);
          lVar35 = lVar35 * 0x120;
          lVar29 = *(longlong *)(lVar22 + 0xd8 + lVar35);
          uVar19 = *(undefined8 *)(lVar29 + 0x18);
          puVar31 = (undefined8 *)(lVar22 + 0x40 + lVar35);
          *puVar31 = *(undefined8 *)(lVar29 + 0x10);
          puVar31[1] = uVar19;
          *(undefined8 *)(lVar22 + 0x50 + lVar35) = *(undefined8 *)(lVar29 + 0x20);
          uVar19 = *(undefined8 *)(lVar29 + 0x38);
          uVar20 = *(undefined8 *)(lVar29 + 0x40);
          uVar21 = *(undefined8 *)(lVar29 + 0x48);
          puVar31 = (undefined8 *)(lVar22 + 0x60 + lVar35);
          *puVar31 = *(undefined8 *)(lVar29 + 0x30);
          puVar31[1] = uVar19;
          puVar31 = (undefined8 *)(lVar22 + 0x70 + lVar35);
          *puVar31 = uVar20;
          puVar31[1] = uVar21;
          puVar31 = (undefined8 *)(lVar22 + 0x80 + lVar35);
          *puVar31 = uVar17;
          puVar31[1] = uVar18;
          *(undefined8 *)(lVar22 + 0x90 + lVar35) = uVar3;
          puVar31 = (undefined8 *)(lVar22 + 0x80 + lVar35);
          uVar3 = puVar31[1];
          *(undefined8 *)(lVar22 + lVar35) = *puVar31;
          ((undefined8 *)(lVar22 + lVar35))[1] = uVar3;
          *(undefined8 *)(lVar22 + 0x10 + lVar35) = *(undefined8 *)(lVar22 + 0x90 + lVar35);
          puVar31 = (undefined8 *)(lVar22 + 0xa0 + lVar35);
          *puVar31 = uVar13;
          puVar31[1] = uVar14;
          puVar31 = (undefined8 *)(lVar22 + 0xb0 + lVar35);
          *puVar31 = uVar15;
          puVar31[1] = uVar16;
          puVar32 = (undefined8 *)(lVar22 + 0xa0 + lVar35);
          uVar3 = puVar32[1];
          puVar31 = (undefined8 *)(lVar22 + 0x20 + lVar35);
          *puVar31 = *puVar32;
          puVar31[1] = uVar3;
          puVar2 = (undefined4 *)(lVar22 + 0xb0 + lVar35);
          uVar10 = puVar2[1];
          uVar11 = puVar2[2];
          uVar12 = puVar2[3];
          puVar1 = (undefined4 *)(lVar22 + 0x30 + lVar35);
          *puVar1 = *puVar2;
          puVar1[1] = uVar10;
          puVar1[2] = uVar11;
          puVar1[3] = uVar12;
          *(undefined8 *)(lVar22 + 0xc0 + lVar35) = uVar7;
          *(undefined4 *)(lVar22 + 200 + lVar35) = uVar26;
          *(undefined4 *)(lVar22 + 0xcc + lVar35) = uVar4;
          *(undefined8 *)(lVar22 + 0xd0 + lVar35) = uVar8;
          iVar34 = (int)plVar30[1];
        }
        lVar27 = lVar27 + 1;
        lVar36 = lVar36 + 0x24;
      } while (lVar27 < iVar34);
    }
    local_138 = param_1;
    FUN_14466f55e(param_9 + 0x28,param_7);
    iVar34 = *(int *)(param_9 + 0x38);
    if (0 < iVar34) {
      lVar27 = 0x18;
      lVar36 = 0;
      do {
        lVar35 = *(longlong *)(param_9 + 0x30);
        puVar1 = (undefined4 *)(lVar35 + -0x50 + lVar27 * 4);
        local_a8 = *puVar1;
        uStack_a4 = puVar1[1];
        uStack_a0 = puVar1[2];
        uStack_9c = puVar1[3];
        local_98 = *(undefined8 *)(lVar35 + -0x40 + lVar27 * 4);
        puVar1 = (undefined4 *)(lVar35 + -0x30 + lVar27 * 4);
        local_c8._0_4_ = *puVar1;
        local_c8._4_4_ = puVar1[1];
        uStack_c0 = puVar1[2];
        uStack_bc = puVar1[3];
        puVar1 = (undefined4 *)(lVar35 + -0x20 + lVar27 * 4);
        local_b8 = *puVar1;
        uStack_b4 = puVar1[1];
        uStack_b0 = puVar1[2];
        uStack_ac = puVar1[3];
        puVar31 = (undefined8 *)(lVar35 + -0x10 + lVar27 * 4);
        local_88 = *puVar31;
        uStack_80 = puVar31[1];
        local_78 = *(undefined8 *)(lVar35 + lVar27 * 4);
        iVar25 = *(int *)(*(longlong *)(param_9 + 0x18) + lVar36 * 4);
        uStack_90 = 0;
        uStack_70 = 0;
        if ((((-1 < (longlong)iVar25) && (iVar25 < *(int *)(lVar5 + 0xc0))) &&
            (lVar35 = *(longlong *)(*(longlong *)(lVar5 + 0xb8) + (longlong)iVar25 * 8), lVar35 != 0
            )) && (((bVar23 = *(byte *)(lVar35 + 0x10), bVar23 - 1 < 2 || (bVar23 == 0x80)) ||
                   ((bVar23 < 0x21 && ((0x100010010U >> ((ulonglong)bVar23 & 0x3f) & 1) != 0)))))) {
          local_180 = 0;
          local_188 = 0;
          local_190 = 0;
          local_198 = (undefined4 *)((ulonglong)local_198 & 0xffffffffffffff00);
          FUN_140122d4e(lVar5,lVar35,&local_c8,3);
          iVar34 = *(int *)(param_9 + 0x38);
        }
        lVar36 = lVar36 + 1;
        lVar27 = lVar27 + 0x38;
      } while (lVar36 < iVar34);
    }
    FUN_149860dae(param_8,*(undefined8 *)(local_138 + 0x58),param_9 + 0x28);
  }
LAB_144670602:
  if ((local_60 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144670c02 FUN_144670c02 body=805 status=ok
// SIG undefined FUN_144670c02(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144670c02(void)

{
  char cVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined **local_40;
  undefined8 uStack_38;
  undefined4 local_2c;
  undefined *local_28;
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uStack_38 = 1;
  local_40 = &PTR_FUN_14beb8e50;
  local_48 = 1;
  FUN_14282b410(L"/Script/PBIK",0,0,&PTR_FUN_14beb8e70);
  uStack_38 = 1;
  local_40 = &PTR_FUN_14beb96d0;
  local_48 = 3;
  FUN_14282b410(L"/Script/PBIK",0,0,&PTR_FUN_14beb96f0);
  local_28 = (undefined *)0x800000014beb9768;
  local_2c = 4;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14676852c(&local_28);
  FUN_1446f470e(&local_28,PTR_u_bool_14c764e60,1);
  FUN_1446f470e(&local_28,PTR_u_float_14c764e68,1);
  FUN_1446f470e(&local_28,PTR_u_double_14c764e70,1);
  FUN_1446f470e(&local_28,PTR_DAT_14c764e78,1);
  FUN_1446f470e(&local_28,PTR_u_int32_14c764e80,1);
  FUN_1446f470e(&local_28,PTR_u_int64_14c764e88,1);
  FUN_1446f470e(&local_28,PTR_u_uint8_14c764e90,1);
  FUN_1446f470e(&local_28,PTR_u_uint32_14c764e98,1);
  FUN_1446f470e(&local_28,PTR_u_uint64_14c764ea0,1);
  FUN_1446f470e(&local_28,PTR_u_FName_14c764ea8,1);
  FUN_1446f470e(&local_28,PTR_u_FString_14c764eb0,1);
  FUN_1446f470e(&local_28,PTR_u_FText_14c764eb8,1);
  FUN_1446f470e(&local_28,PTR_u_TArray<bool>_14c764ec0,1);
  FUN_1446f470e(&local_28,PTR_u_TArray<float>_14c764ec8,1);
  FUN_1446f470e(&local_28,PTR_u_TArray<double>_14c764ed0,1);
  FUN_1446f470e(&local_28,PTR_u_TArray<int32>_14c764ed8,1);
  FUN_1446f470e(&local_28,PTR_u_TArray<uint32>_14c764ee0,1);
  FUN_1446f470e(&local_28,PTR_u_TArray<uint8>_14c764ee8,1);
  FUN_1446f470e(&local_28,PTR_u_TArray<FName>_14c764ef0,1);
  FUN_1446f470e(&local_28,PTR_u_TArray<FString>_14c764ef8,1);
  local_28 = &DAT_14a19662d;
  local_20 = 4;
  local_1c = 0;
  FUN_14001a6c0(&local_28,1);
  FUN_1400b22c2(&local_28,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_28,&DAT_14cc2d75c);
  if (cVar1 == '\0') {
    _DAT_14cc2d75c = 0;
    uRam000000014cc2d764 = 0;
  }
  if (local_28 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  local_40 = (undefined **)0x0;
  uStack_38 = 0;
  local_48 = 4;
  FUN_14282b410(L"/Script/PBIK",0,0,&PTR_FUN_14beba2d0);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144670f28 FUN_144670f28 body=55 status=ok
// SIG undefined FUN_144670f28(void)

void FUN_144670f28(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2d890 == 0) {
    uVar1 = FUN_140f0d032();
    DAT_14cc2d890 = FUN_14171c317(FUN_1467690e2,uVar1,L"EPinBoneType");
  }
  return;
}



// FUNCTION 144670f5f FUN_144670f5f body=55 status=ok
// SIG undefined FUN_144670f5f(void)

void FUN_144670f5f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2d8d8 == 0) {
    uVar1 = FUN_140f0d032();
    DAT_14cc2d8d8 = FUN_14171c317(FUN_146769206,uVar1,L"ERootMotionSource");
  }
  return;
}



// FUNCTION 144670f96 FUN_144670f96 body=55 status=ok
// SIG undefined FUN_144670f96(void)

void FUN_144670f96(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2d8f0 == 0) {
    uVar1 = FUN_140f0d032();
    DAT_14cc2d8f0 = FUN_14171c317(FUN_146769235,uVar1,L"ERootMotionHeightSource");
  }
  return;
}



// FUNCTION 144671012 FUN_144671012 body=1769 status=ok
// SIG undefined FUN_144671012(void)

void FUN_144671012(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  byte bVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined8 uVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  bool bVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  byte bVar26;
  undefined1 auStack_228 [32];
  code **local_208;
  undefined4 local_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  wchar_t *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  code **local_1d0;
  undefined1 *local_1c8;
  code *local_1c0;
  longlong local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  longlong lStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  longlong local_168;
  longlong *local_160;
  longlong local_158;
  code *local_150 [4];
  undefined1 local_130 [64];
  longlong local_f0;
  undefined4 local_e8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_228;
  uVar12 = param_1[5];
  if (((((uVar12 == 0) || (param_1[0x29] == 0)) || (*(int *)((longlong)param_1 + 0x1c) == 0)) ||
      ((uVar4 = *(uint *)(param_1 + 3), (int)uVar4 < 0 || (DAT_14c9647dc <= (int)uVar4)))) ||
     ((lVar21 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar21 == 0 ||
      ((*(int *)(lVar21 + 0x10) != *(int *)((longlong)param_1 + 0x1c) ||
       ((*(uint *)(lVar21 + 8) & 0x10200000) != 0)))))) goto LAB_144671096;
  plVar13 = (longlong *)*param_2;
  pcVar6 = *(code **)(*param_1 + 0x98);
  if (pcVar6 == (code *)&LAB_1400e9baa) {
    uVar12 = (ulonglong)*(uint *)((longlong)param_1 + 0xe4);
  }
  else if (pcVar6 != (code *)&LAB_1400e9bb2) {
    if (pcVar6 == (code *)&LAB_1400e9bb6) {
      uVar12 = (ulonglong)*(uint *)((longlong)param_1 + 0x44);
    }
    else {
      uVar12 = (*pcVar6)(param_1);
    }
  }
  if (((int)uVar12 != -1) && ((int)uVar12 < (int)plVar13[0xd6])) goto LAB_144671096;
  bVar11 = *(byte *)(param_1 + 2);
  if ((bVar11 & 1) == 0) {
    uVar16 = (**(code **)(*param_1 + 8))(param_1);
    cVar10 = (**(code **)(*plVar13 + 0xc0))(plVar13,uVar16,(longlong)param_1 + 0x11);
    bVar11 = (cVar10 * '\x02' | *(byte *)(param_1 + 2) & 0xfc) + 1;
    *(byte *)(param_1 + 2) = bVar11;
  }
  if (((bVar11 & 2) != 0) &&
     (cVar10 = (**(code **)(*plVar13 + 0xb8))(plVar13,*(undefined1 *)((longlong)param_1 + 0x11)),
     cVar10 == '\0')) goto LAB_144671096;
  lVar21 = param_1[0x2b];
  if (*(int *)((longlong)param_1 + 0x1c) == 0) {
LAB_14467153d:
    lVar15 = 0;
  }
  else {
    uVar4 = *(uint *)(param_1 + 3);
    lVar15 = 0;
    if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
      plVar13 = (longlong *)
                ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
      if ((plVar13 == (longlong *)0x0) ||
         (((int)plVar13[2] != *(int *)((longlong)param_1 + 0x1c) ||
          ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))) goto LAB_14467153d;
      lVar15 = *plVar13;
    }
  }
  lVar22 = *(longlong *)(lVar15 + 0x658);
  if (lVar22 == 0) {
    lVar22 = *(longlong *)(lVar15 + 0x660);
    if ((DAT_14c950c29 == 1) && (lVar22 != 0)) goto LAB_14467171d;
    if (lVar22 != 0) goto LAB_1446711ee;
LAB_14467159c:
    bVar11 = 0;
    lVar22 = 0;
  }
  else {
    if (DAT_14c950c29 == 1) {
LAB_14467171d:
      FUN_1456cec3c(lVar22);
    }
LAB_1446711ee:
    if (DAT_14cb06da8 == 0) {
      local_1d0 = local_150;
      local_150[0] = FUN_1449e2820;
      local_1c0 = FUN_14081d0ea;
      local_1c8 = &LAB_1464003b0;
      local_1d8 = &LAB_147d17bdf;
      local_1e0 = &LAB_1417edf22;
      local_1e8 = L"Engine";
      local_1f0 = 0;
      local_1f8 = 0x10000000;
      local_200 = 8;
      local_208 = (code **)CONCAT44(local_208._4_4_,0x588);
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
    }
    if ((*(int *)(*(longlong *)(lVar22 + 0x10) + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar22 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) != DAT_14cb06da8 + 0x30)) goto LAB_14467159c;
    bVar11 = 1;
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(lVar22);
    }
  }
  plVar13 = *(longlong **)(*(longlong *)(*param_2 + 0x148) + 0x658);
  if (plVar13 == (longlong *)0x0) {
    plVar13 = *(longlong **)(*(longlong *)(*param_2 + 0x148) + 0x660);
    if ((DAT_14c950c29 == 1) && (plVar13 != (longlong *)0x0)) goto LAB_14467172a;
    if (plVar13 != (longlong *)0x0) goto LAB_14467125c;
LAB_1446715d0:
    bVar26 = 0;
    plVar13 = (longlong *)0x0;
  }
  else {
    if (DAT_14c950c29 == 1) {
LAB_14467172a:
      FUN_1456cec3c(plVar13);
    }
LAB_14467125c:
    if (DAT_14cb06da8 == 0) {
      local_1d0 = local_150;
      local_150[0] = FUN_1449e2820;
      local_1c0 = FUN_14081d0ea;
      local_1c8 = &LAB_1464003b0;
      local_1d8 = &LAB_147d17bdf;
      local_1e0 = &LAB_1417edf22;
      local_1e8 = L"Engine";
      local_1f0 = 0;
      local_1f8 = 0x10000000;
      local_200 = 8;
      local_208 = (code **)CONCAT44(local_208._4_4_,0x588);
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
    }
    if ((*(int *)(plVar13[2] + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(plVar13[2] + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) !=
        DAT_14cb06da8 + 0x30)) goto LAB_1446715d0;
    bVar26 = 1;
    if ((DAT_14c950c29 & 1) != 0) {
      FUN_1456cec3c(plVar13);
    }
  }
  local_158 = param_1[5];
  lVar15 = param_1[0x29];
  if ((local_158 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_160 = plVar13;
  if ((bVar26 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(plVar13);
  }
  local_168 = lVar22;
  if ((bVar11 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar22);
  }
  cVar10 = FUN_14986733c(lVar15,&local_168,&local_160,&local_158);
  if (((int)lVar21 != 0) && (cVar10 != '\0')) {
    if ((int)param_1[0x28] == -1) {
      bVar20 = false;
    }
    else {
      bVar20 = (int)param_1[0x28] < *(int *)(*param_2 + 0x6b0);
    }
    FUN_1498673b4(param_1,local_150,bVar20);
    local_208 = local_150;
    plVar14 = (longlong *)
              FUN_1498673fe(param_1[0x29],param_1 + 0x2a,param_1 + 0x32,(int)param_1[0x3c]);
    *(undefined4 *)(param_1 + 0x3c) = 0;
    plVar1 = param_2 + 4;
    local_188 = 0;
    uStack_180 = 0;
    local_198 = 0;
    uStack_190 = 0;
    local_1a8 = 0;
    lStack_1a0 = 0;
    local_1b8 = 0;
    uStack_1b0 = 0;
    local_178 = 0;
    FUN_1417977a6(&local_1b8,plVar1);
    lVar21 = param_1[0x2d];
    if ((longlong)(int)lVar21 != 0) {
      lVar15 = param_1[0x2c];
      lVar22 = 0;
      do {
        iVar5 = *(int *)(lVar15 + lVar22);
        lVar23 = (longlong)iVar5;
        if ((-1 < lVar23) && (iVar5 < (int)uStack_1b0)) {
          puVar18 = (undefined8 *)((longlong)*(int *)(lVar15 + 4 + lVar22) * 0x60 + *plVar14);
          puVar19 = (undefined8 *)(lVar23 * 0x60 + local_1b8);
          for (lVar17 = 0xc; lVar17 != 0; lVar17 = lVar17 + -1) {
            *puVar19 = *puVar18;
            puVar18 = puVar18 + 1;
            puVar19 = puVar19 + 1;
          }
          *(undefined1 *)(lStack_1a0 + lVar23) = 1;
        }
        lVar22 = lVar22 + 8;
      } while ((longlong)(int)lVar21 * 8 != lVar22);
    }
    FUN_1474e40fa(&local_1b8,plVar1);
    lVar15 = (**(code **)(*plVar13 + 0x310))(plVar13);
    lVar21 = param_1[0x2d];
    if ((longlong)(int)lVar21 != 0) {
      lVar22 = param_1[0x2c];
      lVar23 = 0;
      do {
        iVar5 = *(int *)(lVar22 + lVar23);
        if ((-1 < (longlong)iVar5) && (iVar5 < (int)param_2[5])) {
          lVar17 = *plVar1;
          lVar24 = (longlong)iVar5 * 0x60;
          lVar25 = (longlong)*(int *)(lVar22 + 4 + lVar23) * 0x60;
          puVar2 = (undefined4 *)(*(longlong *)(lVar15 + 0x30) + 0x40 + lVar25);
          uVar7 = puVar2[1];
          uVar8 = puVar2[2];
          uVar9 = puVar2[3];
          uVar16 = *(undefined8 *)(*(longlong *)(lVar15 + 0x30) + 0x50 + lVar25);
          puVar3 = (undefined4 *)(lVar17 + 0x40 + lVar24);
          *puVar3 = *puVar2;
          puVar3[1] = uVar7;
          puVar3[2] = uVar8;
          puVar3[3] = uVar9;
          puVar18 = (undefined8 *)(lVar17 + 0x50 + lVar24);
          *puVar18 = uVar16;
          puVar18[1] = 0;
        }
        lVar23 = lVar23 + 8;
      } while ((longlong)(int)lVar21 * 8 != lVar23);
    }
    FUN_1498676ee(param_1,param_2 + 7);
    local_e8 = 0;
    if (local_f0 != 0) {
      FUN_1400020a8();
    }
    FUN_14988a0a6(local_130);
    if ((local_48 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
LAB_144671096:
  if ((char)param_2[0x13] != '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_228);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_228);
}



// FUNCTION 144671743 FUN_144671743 body=55 status=ok
// SIG undefined FUN_144671743(void)

void FUN_144671743(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2da88 == 0) {
    uVar1 = FUN_140f0d032();
    DAT_14cc2da88 = FUN_14171c317(FUN_1467691a8,uVar1,L"ERetargetSourceOrTarget");
  }
  return;
}



// FUNCTION 14467177a FUN_14467177a body=2410 status=ok
// SIG undefined FUN_14467177a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_14467177a(double *param_1,longlong *param_2,longlong *param_3,double *param_4,
                      double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double *pdVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  double *pdVar10;
  longlong lVar11;
  ulonglong uVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  undefined1 auVar25 [16];
  double dVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined1 auStack_1d8 [40];
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if ((int)param_2[1] < 2) {
    pdVar6 = &DAT_14c8464e0;
    pdVar10 = &DAT_14c8464e0;
    if ((int)param_2[1] == 1) {
      pdVar10 = (double *)*param_2;
    }
    param_4[2] = pdVar10[2];
    dVar20 = pdVar10[1];
    *param_4 = *pdVar10;
    param_4[1] = dVar20;
    if (0 < (int)param_3[1]) {
      pdVar6 = (double *)*param_3;
    }
    param_5[2] = pdVar6[2];
    dVar20 = pdVar6[1];
    *param_5 = *pdVar6;
    param_5[1] = dVar20;
    dVar20 = DAT_14c8463e8;
    param_1[2] = DAT_14c8463e0;
    param_1[3] = dVar20;
    uVar31 = DAT_14c8463d8._4_4_;
    uVar28 = (undefined4)DAT_14c8463d8;
    uVar27 = DAT_14c8463d0._4_4_;
    *(undefined4 *)param_1 = (undefined4)DAT_14c8463d0;
    *(undefined4 *)((longlong)param_1 + 4) = uVar27;
    *(undefined4 *)(param_1 + 1) = uVar28;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar31;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_c0 ^ (ulonglong)auStack_1d8);
  }
  param_4[2] = DAT_14c8464f0;
  dVar20 = DAT_14c8464e8;
  *param_4 = DAT_14c8464e0;
  param_4[1] = dVar20;
  param_5[2] = DAT_14c8464f0;
  dVar20 = DAT_14c8464e8;
  *param_5 = DAT_14c8464e0;
  param_5[1] = dVar20;
  iVar8 = (int)param_2[1];
  if (0 < iVar8) {
    lVar7 = 0x10;
    lVar11 = 0;
    do {
      lVar9 = *param_2;
      *param_4 = *(double *)(lVar9 + -0x10 + lVar7) + *param_4;
      param_4[1] = *(double *)(lVar9 + -8 + lVar7) + param_4[1];
      param_4[2] = *(double *)(lVar9 + lVar7) + param_4[2];
      lVar9 = *param_3;
      *param_5 = *(double *)(lVar9 + -0x10 + lVar7) + *param_5;
      param_5[1] = *(double *)(lVar9 + -8 + lVar7) + param_5[1];
      param_5[2] = *(double *)(lVar9 + lVar7) + param_5[2];
      lVar11 = lVar11 + 1;
      iVar8 = (int)param_2[1];
      lVar7 = lVar7 + 0x18;
    } while (lVar11 < iVar8);
  }
  dVar14 = (double)(1.0 / (float)iVar8);
  *param_4 = *param_4 * dVar14;
  param_4[1] = param_4[1] * dVar14;
  param_4[2] = param_4[2] * dVar14;
  local_180 = *param_5 * dVar14;
  *param_5 = local_180;
  local_188 = param_5[1] * dVar14;
  param_5[1] = local_188;
  dVar20 = param_5[2];
  param_5[2] = dVar14 * dVar20;
  dVar21 = DAT_14c8463e8;
  dVar4 = DAT_14c8464e8;
  dVar3 = DAT_14c8464e0;
  dVar2 = DAT_14c8464f0;
  dVar1 = DAT_14c8464e8;
  local_198 = DAT_14c8464e0;
  if ((longlong)(int)param_2[1] < 1) {
    local_1a0 = DAT_14c8464e8;
    local_178 = DAT_14c8464f0;
    local_1a8 = DAT_14c8464e0;
    local_1b0 = DAT_14c8464f0;
  }
  else {
    lVar7 = *param_2;
    local_160 = param_4[2];
    local_168 = *param_4;
    local_170 = param_4[1];
    lVar11 = *param_3;
    lVar9 = 0;
    local_1b0 = DAT_14c8464f0;
    local_1a8 = DAT_14c8464e0;
    local_158 = DAT_14c8464f0;
    local_178 = DAT_14c8464f0;
    local_150 = DAT_14c8464e8;
    local_1a0 = DAT_14c8464e8;
    local_190 = DAT_14c8464e0;
    do {
      dVar24 = *(double *)(lVar7 + 0x10 + lVar9) - local_160;
      dVar18 = *(double *)(lVar7 + lVar9) - local_168;
      dVar15 = *(double *)(lVar7 + 8 + lVar9) - local_170;
      dVar26 = dVar24 * dVar24 + dVar18 * dVar18 + dVar15 * dVar15;
      uVar27 = SUB84(DAT_14c8464e8,0);
      uVar28 = (undefined4)((ulonglong)DAT_14c8464e8 >> 0x20);
      if ((dVar26 != 1.0) || (NAN(dVar26))) {
        uVar33 = SUB84(DAT_14c8464e0,0);
        uVar34 = (undefined4)((ulonglong)DAT_14c8464e0 >> 0x20);
        uVar29 = SUB84(DAT_14c8464f0,0);
        uVar30 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
        uVar31 = uVar27;
        uVar32 = uVar28;
        if (9.99999993922529e-09 <= dVar26) {
          dVar26 = 1.0 / SQRT(dVar26);
          dVar24 = dVar24 * dVar26;
          dVar15 = dVar15 * dVar26;
          dVar18 = dVar18 * dVar26;
          goto LAB_144671ae2;
        }
      }
      else {
LAB_144671ae2:
        uVar33 = SUB84(dVar18,0);
        uVar34 = (undefined4)((ulonglong)dVar18 >> 0x20);
        uVar31 = SUB84(dVar15,0);
        uVar32 = (undefined4)((ulonglong)dVar15 >> 0x20);
        uVar29 = SUB84(dVar24,0);
        uVar30 = (undefined4)((ulonglong)dVar24 >> 0x20);
      }
      dVar15 = *(double *)(lVar11 + 0x10 + lVar9) - dVar14 * dVar20;
      dVar18 = *(double *)(lVar11 + 8 + lVar9) - local_188;
      dVar24 = *(double *)(lVar11 + lVar9) - local_180;
      dVar26 = dVar15 * dVar15 + dVar24 * dVar24 + dVar18 * dVar18;
      if ((dVar26 != 1.0) || (NAN(dVar26))) {
        dVar5 = DAT_14c8464f0;
        dVar16 = DAT_14c8464e0;
        if (9.99999993922529e-09 <= dVar26) {
          dVar26 = 1.0 / SQRT(dVar26);
          dVar15 = dVar15 * dVar26;
          dVar18 = dVar18 * dVar26;
          dVar24 = dVar24 * dVar26;
          goto LAB_144671b80;
        }
      }
      else {
LAB_144671b80:
        uVar27 = SUB84(dVar18,0);
        uVar28 = (undefined4)((ulonglong)dVar18 >> 0x20);
        dVar5 = dVar15;
        dVar16 = dVar24;
      }
      local_1b0 = local_1b0 + (double)CONCAT44(uVar34,uVar33) * dVar5;
      dVar4 = dVar4 + (double)CONCAT44(uVar34,uVar33) * (double)CONCAT44(uVar28,uVar27);
      dVar3 = dVar3 + (double)CONCAT44(uVar34,uVar33) * dVar16;
      dVar2 = dVar2 + (double)CONCAT44(uVar32,uVar31) * dVar5;
      dVar1 = dVar1 + (double)CONCAT44(uVar32,uVar31) * (double)CONCAT44(uVar28,uVar27);
      local_1a8 = local_1a8 + (double)CONCAT44(uVar32,uVar31) * dVar16;
      local_178 = local_178 + dVar5 * (double)CONCAT44(uVar30,uVar29);
      local_1a0 = local_1a0 + (double)CONCAT44(uVar28,uVar27) * (double)CONCAT44(uVar30,uVar29);
      local_198 = local_198 + (double)CONCAT44(uVar30,uVar29) * dVar16;
      lVar9 = lVar9 + 0x18;
    } while ((longlong)(int)param_2[1] * 0x18 != lVar9);
  }
  param_1[2] = DAT_14c8463e0;
  param_1[3] = dVar21;
  uVar31 = DAT_14c8463d8._4_4_;
  uVar28 = (undefined4)DAT_14c8463d8;
  uVar27 = DAT_14c8463d0._4_4_;
  *(undefined4 *)param_1 = (undefined4)DAT_14c8463d0;
  *(undefined4 *)((longlong)param_1 + 4) = uVar27;
  *(undefined4 *)(param_1 + 1) = uVar28;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar31;
  iVar8 = 0x32;
  do {
    FUN_1498609f0(&local_148,param_1);
    local_160 = local_138;
    local_180 = local_120;
    local_190 = local_100;
    local_188 = local_108;
    local_168 = local_140;
    local_170 = local_128;
    dVar14 = 1.0 / (ABS(local_f8 * local_178 + local_108 * local_198 + local_100 * local_1a0 +
                        local_118 * dVar2 + local_128 * local_1a8 + local_120 * dVar1 +
                        local_138 * local_1b0 + local_148 * dVar3 + local_140 * dVar4) +
                   9.99999993922529e-09);
    dVar21 = ((local_100 * local_178 - local_1a0 * local_f8) +
             (local_120 * dVar2 - dVar1 * local_118) + (local_140 * local_1b0 - dVar4 * local_138))
             * dVar14;
    dVar20 = ((local_f8 * local_198 - local_178 * local_108) +
             (local_118 * local_1a8 - dVar2 * local_128) +
             (local_138 * dVar3 - local_1b0 * local_148)) * dVar14;
    dVar14 = dVar14 * ((local_108 * local_1a0 - local_198 * local_100) +
                      (local_128 * dVar1 - local_1a8 * local_120) +
                      (local_148 * dVar4 - dVar3 * local_140));
    fVar13 = (float)SQRT(dVar14 * dVar14 + dVar21 * dVar21 + dVar20 * dVar20);
    if (fVar13 < 1e-08) break;
    dVar24 = (double)fVar13;
    dVar15 = 1.0 / dVar24;
    dVar24 = dVar24 * 0.5;
    dVar18 = sin(dVar24);
    dVar24 = cos(dVar24);
    dVar21 = dVar21 * dVar15 * dVar18;
    dVar20 = dVar20 * dVar15 * dVar18;
    dVar18 = dVar14 * dVar15 * dVar18;
    dVar14 = *param_1;
    dVar15 = param_1[1];
    dVar26 = param_1[2];
    dVar5 = param_1[3];
    dVar16 = dVar15 * dVar18 * -1.0 + dVar26 * dVar20 + dVar21 * dVar5 * 1.0 + dVar14 * dVar24;
    dVar17 = dVar14 * dVar18 * 1.0 + dVar5 * dVar20 + dVar21 * dVar26 * -1.0 + dVar15 * dVar24;
    dVar19 = dVar5 * dVar18 * 1.0 + ((dVar21 * dVar15 * 1.0 + dVar24 * dVar26) - dVar14 * dVar20);
    dVar20 = dVar26 * dVar18 * -1.0 + ((dVar21 * dVar14 * -1.0 + dVar24 * dVar5) - dVar15 * dVar20);
    dVar21 = dVar19 * dVar19 + dVar16 * dVar16;
    dVar14 = dVar20 * dVar20 + dVar17 * dVar17;
    auVar22._0_8_ = dVar21 + dVar14;
    auVar22._8_8_ = dVar21 + dVar14;
    uVar12 = -(ulonglong)(9.99999993922529e-09 <= auVar22._8_8_);
    auVar23 = sqrtpd(auVar22,auVar22);
    auVar23 = divpd(_DAT_149934d80,auVar23);
    auVar25._0_8_ = auVar23._0_8_ * dVar19;
    auVar25._8_8_ = auVar23._8_8_ * dVar20;
    *param_1 = (double)((ulonglong)(dVar16 * auVar23._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar22._0_8_));
    param_1[1] = (double)((ulonglong)(dVar17 * auVar23._8_8_) & uVar12);
    auVar23._8_4_ = (int)uVar12;
    auVar23._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar22._0_8_);
    auVar23._12_4_ = (int)(uVar12 >> 0x20);
    auVar23 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar25,auVar23);
    *(undefined1 (*) [16])(param_1 + 2) = auVar23;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  if ((local_c0 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1446720ea FUN_1446720ea body=605 status=ok
// SIG undefined FUN_1446720ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446720ea(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  
  param_2[2] = 0.0;
  param_3[2] = 0.0;
  dVar4 = *param_2;
  dVar3 = param_2[1];
  dVar5 = param_2[2];
  dVar9 = dVar5 * dVar5 + dVar4 * dVar4 + dVar3 * dVar3;
  dVar6 = 0.0;
  if (9.99999993922529e-09 < dVar9) {
    dVar6 = 1.0 / SQRT(dVar9);
    dVar4 = dVar4 * dVar6;
    *param_2 = dVar4;
    dVar3 = dVar3 * dVar6;
    param_2[1] = dVar3;
    dVar5 = dVar5 * dVar6;
    param_2[2] = dVar5;
    dVar6 = param_3[2];
  }
  dVar9 = *param_3;
  dVar10 = param_3[1];
  dVar1 = dVar6 * dVar6 + dVar9 * dVar9 + dVar10 * dVar10;
  if (9.99999993922529e-09 < dVar1) {
    dVar4 = 1.0 / SQRT(dVar1);
    dVar9 = dVar9 * dVar4;
    *param_3 = dVar9;
    dVar10 = dVar10 * dVar4;
    param_3[1] = dVar10;
    dVar6 = dVar6 * dVar4;
    param_3[2] = dVar6;
    dVar4 = *param_2;
    dVar3 = param_2[1];
    dVar5 = param_2[2];
  }
  dVar1 = dVar5 * dVar6 + dVar4 * dVar9 + dVar3 * dVar10 + 1.0;
  if (dVar1 < 9.999999974752427e-07) {
    if ((ABS(dVar4) <= ABS(dVar3)) || (ABS(dVar4) <= ABS(dVar5))) {
      dVar1 = 0.0;
      dVar9 = -DAT_14c8463a0;
      dVar6 = -DAT_14c8463b0;
      dVar10 = -DAT_14c8463a8;
    }
    else {
      dVar1 = 0.0;
      dVar9 = DAT_14c846388;
      dVar6 = DAT_14c846398;
      dVar10 = DAT_14c846390;
    }
  }
  *param_1 = dVar3 * dVar6 - dVar10 * dVar5;
  param_1[1] = dVar5 * dVar9 - dVar6 * dVar4;
  param_1[2] = dVar4 * dVar10 - dVar9 * dVar3;
  param_1[3] = dVar1;
  dVar4 = *param_1;
  dVar3 = param_1[1];
  dVar6 = param_1[2];
  dVar5 = param_1[3];
  dVar9 = dVar6 * dVar6 + dVar4 * dVar4;
  dVar10 = dVar5 * dVar5 + dVar3 * dVar3;
  auVar7._0_8_ = dVar9 + dVar10;
  auVar7._8_8_ = dVar9 + dVar10;
  uVar2 = -(ulonglong)(9.99999993922529e-09 <= auVar7._8_8_);
  auVar8 = sqrtpd(auVar7,auVar7);
  auVar8 = divpd(_DAT_149934d80,auVar8);
  auVar11._0_8_ = auVar8._0_8_ * dVar6;
  auVar11._8_8_ = auVar8._8_8_ * dVar5;
  *param_1 = (double)((ulonglong)(dVar4 * auVar8._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar7._0_8_));
  param_1[1] = (double)((ulonglong)(dVar3 * auVar8._8_8_) & uVar2);
  auVar8._8_4_ = (int)uVar2;
  auVar8._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar7._0_8_);
  auVar8._12_4_ = (int)(uVar2 >> 0x20);
  auVar8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar11,auVar8);
  *(undefined1 (*) [16])(param_1 + 2) = auVar8;
  return;
}



// FUNCTION 144672347 FUN_144672347 body=55 status=ok
// SIG undefined FUN_144672347(void)

void FUN_144672347(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2db58 == 0) {
    uVar1 = FUN_140f0d032();
    DAT_14cc2db58 = FUN_14171c317(FUN_146769c64,uVar1,L"ERetargetTranslationMode");
  }
  return;
}



// FUNCTION 14467237e FUN_14467237e body=55 status=ok
// SIG undefined FUN_14467237e(void)

void FUN_14467237e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2db70 == 0) {
    uVar1 = FUN_140f0d032();
    DAT_14cc2db70 = FUN_14171c317(FUN_146769c93,uVar1,L"ERetargetRotationMode");
  }
  return;
}



// FUNCTION 1446723b5 FUN_1446723b5 body=55 status=ok
// SIG undefined FUN_1446723b5(void)

void FUN_1446723b5(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2dc00 == 0) {
    uVar1 = FUN_140f0d032();
    DAT_14cc2dc00 = FUN_14171c317(FUN_146769eca,uVar1,L"EBasicAxis");
  }
  return;
}



// FUNCTION 1446723ec FUN_1446723ec body=55 status=ok
// SIG undefined FUN_1446723ec(void)

void FUN_1446723ec(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2dc18 == 0) {
    uVar1 = FUN_140f0d032();
    DAT_14cc2dc18 = FUN_14171c317(FUN_146769ef9,uVar1,L"EWarpingDirectionSource");
  }
  return;
}



// FUNCTION 144672423 FUN_144672423 body=55 status=ok
// SIG undefined FUN_144672423(void)

void FUN_144672423(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2dc48 == 0) {
    uVar1 = FUN_140f0d032();
    DAT_14cc2dc48 = FUN_14171c317(FUN_146769f90,uVar1,L"EIKRigGoalSpace");
  }
  return;
}



// FUNCTION 14467245a FUN_14467245a body=55 status=ok
// SIG undefined FUN_14467245a(void)

void FUN_14467245a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2dc60 == 0) {
    uVar1 = FUN_140f0d032();
    DAT_14cc2dc60 = FUN_14171c317(FUN_146769fbf,uVar1,L"EIKRigGoalTransformSource");
  }
  return;
}



// FUNCTION 14467261a FUN_14467261a body=12 status=ok
// SIG undefined FUN_14467261a(void)

void FUN_14467261a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144672623. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144672626 FUN_144672626 body=29 status=ok
// SIG undefined FUN_144672626(void)

undefined8 FUN_144672626(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144672696 FUN_144672696 body=29 status=ok
// SIG undefined FUN_144672696(void)

undefined8 FUN_144672696(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446726fe FUN_1446726fe body=29 status=ok
// SIG undefined FUN_1446726fe(void)

undefined8 FUN_1446726fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144672766 FUN_144672766 body=29 status=ok
// SIG undefined FUN_144672766(void)

undefined8 FUN_144672766(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144672783 FUN_144672783 body=1186 status=ok
// SIG undefined FUN_144672783(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144672783(void)

{
  char cVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined *local_58;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/IKRig",&PTR_FUN_14bebb6d0,1,&PTR_FUN_14bebb6a0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/IKRig",&PTR_FUN_14bebbe50,2,0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/IKRig",0,0,&PTR_FUN_14bebc350);
  FUN_1446f470e(&DAT_14cc2d860,L"AddIKGoals",1);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/IKRig",&PTR_FUN_14bebc850,1,0);
  uStack_68 = 1;
  ppuStack_70 = &PTR_FUN_14bebcff0;
  local_78 = 1;
  FUN_14282b410(L"/Script/IKRig",&PTR_FUN_14bebd040,1,&PTR_FUN_14bebd010);
  ppuStack_70 = &PTR_FUN_14bebd840;
  local_78 = 0;
  uStack_68 = 2;
  FUN_14282b410(L"/Script/IKRig",&PTR_FUN_14bebd880,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/IKRig",&PTR_FUN_14bebe300,1,0);
  local_58 = &DAT_14a19662d;
  uStack_50 = 4;
  uStack_4c = uStack_4c & 0xffffff00;
  FUN_14001a6c0(&local_58,1);
  FUN_1400b22c2(&local_58,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_58,&DAT_14cc2d950);
  if (cVar1 == '\0') {
    _DAT_14cc2d950 = 0;
    uRam000000014cc2d958 = 0;
  }
  if (local_58 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/IKRig",0,0,&PTR_FUN_14bebe7f0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/IKRig",0,0,&PTR_FUN_14bebedb0);
  local_58 = (undefined *)0x800000014bebedd8;
  local_44 = 5;
  uStack_50 = FUN_14577453c();
  uStack_4c = CONCAT31(uStack_4c._1_3_,1);
  FUN_146769526(&local_58);
  local_58 = (undefined *)0xbb50a0e4f6dfbb78;
  uStack_50 = 0x4018b84d;
  uStack_4c = 0x60cbaf23;
  _DAT_14cc2d9f4 = 0xf6dfbb78;
  uRam000000014cc2d9f8 = 0xbb50a0e4;
  uRam000000014cc2d9fc = 0x4018b84d;
  uRam000000014cc2da00 = 0x60cbaf23;
  FUN_141005458(&local_58,2,L"Dev-IKRig",0);
  atexit((_func_5014 *)&LAB_144671737);
  uStack_68 = 1;
  ppuStack_70 = &PTR_FUN_14bec1a70;
  local_78 = 2;
  FUN_14282b410(L"/Script/IKRig",&PTR_FUN_14bec1ae0,4,&PTR_FUN_14bec1a90);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/IKRig",&PTR_FUN_14bec1ff0,1,0);
  ppuStack_70 = &PTR_FUN_14bec4ee0;
  uStack_68 = 4;
  local_78 = 6;
  FUN_14282b410(L"/Script/IKRig",0,0,&PTR_FUN_14bec4f60);
  uStack_68 = 2;
  ppuStack_70 = &PTR_FUN_14bec5960;
  local_78 = 2;
  FUN_14282b410(L"/Script/IKRig",0,0,&PTR_FUN_14bec59a0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/IKRig",&PTR_FUN_14bec6740,2,&PTR_FUN_14bec66f0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/IKRig",&PTR_FUN_14bec6bc0,1,&PTR_FUN_14bec6b90);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/IKRig",0,0,&PTR_FUN_14bec7990);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/IKRig",&PTR_FUN_14bec7d90,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/IKRig",&PTR_FUN_14bec8980,2,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/IKRig",&PTR_FUN_14bec9490,2,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/IKRig",&PTR_FUN_14becab40,3,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/IKRig",&PTR_FUN_14becb400,2,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/IKRig",&PTR_FUN_14becbcc0,2,0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 3;
  FUN_14282b410(L"/Script/IKRig",0,0,&PTR_FUN_14becc0f0);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144672c28 FUN_144672c28 body=55 status=ok
// SIG undefined FUN_144672c28(void)

void FUN_144672c28(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2dee0 == 0) {
    uVar1 = FUN_141235f08();
    DAT_14cc2dee0 = FUN_14171c317(FUN_14676b265,uVar1,L"EFBIKBoneLimitType");
  }
  return;
}



// FUNCTION 144672c5f FUN_144672c5f body=55 status=ok
// SIG undefined FUN_144672c5f(void)

void FUN_144672c5f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2df10 == 0) {
    uVar1 = FUN_141235f08();
    DAT_14cc2df10 = FUN_14171c317(FUN_14676b2f1,uVar1,L"EPoleVectorOption");
  }
  return;
}



// FUNCTION 144672c96 FUN_144672c96 body=1587 status=ok
// SIG undefined FUN_144672c96(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144672c96(undefined8 *param_1,int param_2,float param_3)

{
  double dVar1;
  double *pdVar2;
  double *pdVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar15;
  undefined1 auVar14 [16];
  double dVar16;
  double dVar19;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  double dVar29;
  undefined1 auVar28 [16];
  double dVar30;
  undefined1 auVar31 [16];
  double dVar32;
  undefined1 auVar33 [16];
  double dVar34;
  double dVar35;
  undefined1 auVar36 [16];
  
  pdVar2 = (double *)*param_1;
  pdVar3 = (double *)param_1[1];
  dVar13 = pdVar2[2] * -1.0;
  dVar15 = pdVar2[3] * 1.0;
  dVar23 = *pdVar3;
  dVar20 = pdVar3[1];
  dVar29 = pdVar3[2];
  dVar9 = pdVar3[3];
  dVar30 = pdVar2[1];
  dVar35 = pdVar2[1];
  dVar16 = dVar20 * dVar13 * -1.0 + ((dVar15 * dVar23 - *pdVar2 * dVar9 * 1.0) - dVar29 * dVar30);
  dVar19 = dVar23 * dVar13 * 1.0 + ((dVar15 * dVar20 - *pdVar2 * dVar29 * -1.0) - dVar9 * dVar35);
  auVar18._0_8_ =
       dVar9 * dVar13 * 1.0 + dVar30 * dVar23 + (dVar15 * dVar29 - *pdVar2 * dVar20 * 1.0);
  auVar18._8_8_ =
       dVar29 * dVar13 * -1.0 + dVar35 * dVar20 + (dVar15 * dVar9 - *pdVar2 * dVar23 * -1.0);
  lVar7 = (longlong)param_2;
  dVar35 = *(double *)(&PTR_DAT_14bed14d8)[lVar7];
  dVar30 = *(double *)(&PTR_DAT_14bed14c0)[lVar7];
  dVar23 = **(double **)(&DAT_14bed14a8 + lVar7 * 8);
  dVar20 = dVar23 * dVar23 + dVar35 * dVar35 + dVar30 * dVar30;
  if (((dVar20 != 1.0) || (dVar29 = dVar35, dVar9 = dVar30, dVar13 = dVar23, NAN(dVar20))) &&
     (dVar29 = DAT_14c8464e0, dVar9 = DAT_14c8464e8, dVar13 = DAT_14c8464f0,
     9.99999993922529e-09 <= dVar20)) {
    dVar20 = 1.0 / SQRT(dVar20);
    dVar29 = dVar35 * dVar20;
    dVar9 = dVar30 * dVar20;
    dVar13 = dVar23 * dVar20;
  }
  dVar35 = dVar13 * auVar18._0_8_ + dVar29 * dVar16 + dVar19 * dVar9;
  auVar22._0_8_ = dVar13 * dVar35;
  auVar22._8_8_ = 0;
  dVar9 = dVar9 * dVar35;
  dVar35 = dVar35 * dVar29;
  dVar30 = auVar18._8_8_ * auVar18._8_8_ +
           auVar22._0_8_ * auVar22._0_8_ + dVar35 * dVar35 + dVar9 * dVar9;
  if ((dVar30 != 0.0) ||
     (uVar24 = (undefined4)DAT_14c8463d0, uVar25 = DAT_14c8463d0._4_4_,
     uVar26 = (undefined4)DAT_14c8463d8, uVar27 = DAT_14c8463d8._4_4_, auVar31 = _DAT_14c8463e0,
     NAN(dVar30))) {
    auVar22 = blendpd(auVar22,auVar18,2);
    dVar30 = auVar22._0_8_;
    dVar23 = auVar22._8_8_;
    dVar20 = dVar30 * dVar30 + dVar35 * dVar35;
    dVar29 = dVar23 * dVar23 + dVar9 * dVar9;
    auVar28._0_8_ = dVar20 + dVar29;
    auVar28._8_8_ = dVar20 + dVar29;
    auVar31._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar28._8_8_);
    auVar31._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar28._0_8_);
    auVar22 = sqrtpd(auVar28,auVar28);
    auVar22 = divpd(_DAT_149934d80,auVar22);
    auVar33._0_8_ = auVar22._0_8_ * dVar30;
    auVar33._8_8_ = auVar22._8_8_ * dVar23;
    uVar5 = (ulonglong)(dVar35 * auVar22._0_8_) &
            -(ulonglong)(9.99999993922529e-09 <= auVar28._0_8_);
    uVar6 = (ulonglong)(dVar9 * auVar22._8_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar28._8_8_)
    ;
    auVar31 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar33,auVar31);
    uVar24 = (int)uVar5;
    uVar25 = (int)(uVar5 >> 0x20);
    uVar26 = (int)uVar6;
    uVar27 = (int)(uVar6 >> 0x20);
  }
  dVar30 = auVar31._0_8_;
  dVar23 = auVar31._8_8_;
  dVar35 = dVar30 * -1.0;
  dVar29 = dVar23 * 1.0;
  dVar9 = ((dVar16 * dVar29 * 1.0 - auVar18._8_8_ * (double)CONCAT44(uVar25,uVar24)) +
          dVar19 * dVar35) - (double)CONCAT44(uVar27,uVar26) * auVar18._0_8_ * -1.0;
  dVar13 = ((dVar16 * dVar35 * -1.0 - auVar18._8_8_ * (double)CONCAT44(uVar27,uVar26)) +
           dVar19 * dVar29) - (double)CONCAT44(uVar25,uVar24) * auVar18._0_8_ * 1.0;
  dVar20 = dVar29 * auVar18._0_8_ * 1.0 +
           dVar19 * (double)CONCAT44(uVar25,uVar24) +
           (auVar18._8_8_ * dVar35 - dVar16 * (double)CONCAT44(uVar27,uVar26) * 1.0);
  dVar29 = dVar35 * auVar18._0_8_ * -1.0 +
           dVar19 * (double)CONCAT44(uVar27,uVar26) +
           (auVar18._8_8_ * dVar29 - dVar16 * (double)CONCAT44(uVar25,uVar24) * -1.0);
  dVar35 = dVar29;
  if (1.0 <= dVar29) {
    dVar35 = 1.0;
  }
  acos((double)(-(ulonglong)(dVar29 < -1.0) & 0xbff0000000000000 |
               ~-(ulonglong)(dVar29 < -1.0) & (ulonglong)dVar35));
  dVar35 = dVar23;
  if (1.0 <= dVar23) {
    dVar35 = 1.0;
  }
  dVar10 = acos((double)(-(ulonglong)(dVar23 < -1.0) & 0xbff0000000000000 |
                        ~-(ulonglong)(dVar23 < -1.0) & (ulonglong)dVar35));
  auVar18 = _DAT_149934d80;
  pdVar2 = (double *)*param_1;
  dVar35 = pdVar2[3];
  dVar23 = pdVar2[3];
  dVar15 = pdVar2[1];
  dVar16 = pdVar2[1];
  dVar1 = pdVar2[2];
  dVar19 = pdVar2[2];
  auVar17._8_8_ = dVar19;
  auVar17._0_8_ = dVar1;
  dVar32 = dVar13 * dVar1 * -1.0 + dVar20 * dVar15 + *pdVar2 * dVar29 * 1.0 + dVar35 * dVar9;
  dVar34 = dVar9 * dVar19 * 1.0 + dVar29 * dVar16 + *pdVar2 * dVar20 * -1.0 + dVar23 * dVar13;
  fVar8 = (float)(dVar10 + dVar10);
  if (param_3 <= (float)(dVar10 + dVar10)) {
    fVar8 = param_3;
  }
  dVar35 = dVar29 * dVar1 * 1.0 + ((*pdVar2 * dVar13 * 1.0 + dVar35 * dVar20) - dVar9 * dVar15);
  dVar23 = dVar20 * dVar19 * -1.0 + ((*pdVar2 * dVar9 * -1.0 + dVar23 * dVar29) - dVar13 * dVar16);
  if (fVar8 <= -param_3) {
    fVar8 = -param_3;
  }
  dVar20 = dVar30 * dVar30 + (double)CONCAT44(uVar25,uVar24) * (double)CONCAT44(uVar25,uVar24);
  dVar29 = (double)CONCAT44(uVar27,uVar26) * (double)CONCAT44(uVar27,uVar26) + 0.0;
  auVar14._0_8_ = dVar20 + dVar29;
  auVar14._8_8_ = dVar20 + dVar29;
  auVar11._8_8_ = -(ulonglong)(1e-08 <= auVar14._8_8_);
  auVar11._0_8_ = -(ulonglong)(1e-08 <= auVar14._0_8_);
  auVar22 = sqrtpd(auVar17,auVar14);
  auVar22 = divpd(_DAT_149934d80,auVar22);
  dVar20 = (double)CONCAT44(uVar27,uVar26) * auVar22._8_8_;
  auVar4._8_4_ = SUB84(dVar20,0);
  auVar4._0_8_ = (double)CONCAT44(uVar25,uVar24) * auVar22._0_8_;
  auVar4._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
  auVar31 = blendvpd(ZEXT816(0x3ff0000000000000),auVar4,auVar11);
  if ((-(ulonglong)(1e-08 <= auVar14._0_8_) & 1) == 0) {
    dVar30 = 0.0;
  }
  else {
    dVar30 = dVar30 * auVar22._0_8_;
  }
  dVar20 = sin((double)fVar8 * 0.5);
  dVar29 = cos((double)fVar8 * 0.5);
  dVar9 = dVar20 * auVar31._0_8_;
  dVar13 = auVar31._8_8_ * dVar20;
  dVar30 = dVar30 * dVar20;
  pdVar2 = (double *)param_1[1];
  *pdVar2 = dVar13 * dVar35 * -1.0 + dVar30 * dVar34 + dVar32 * dVar29 * 1.0 + dVar9 * dVar23;
  pdVar2[1] = dVar9 * dVar35 * 1.0 + dVar29 * dVar34 + dVar32 * dVar30 * -1.0 + dVar13 * dVar23;
  pdVar2[2] = dVar29 * dVar35 * 1.0 + ((dVar32 * dVar13 * 1.0 + dVar23 * dVar30) - dVar34 * dVar9);
  pdVar2[3] = dVar30 * dVar35 * -1.0 + ((dVar32 * dVar9 * -1.0 + dVar23 * dVar29) - dVar34 * dVar13)
  ;
  pdVar2 = (double *)param_1[1];
  dVar35 = *pdVar2;
  dVar30 = pdVar2[1];
  dVar23 = pdVar2[2];
  dVar20 = pdVar2[3];
  dVar29 = dVar23 * dVar23 + dVar35 * dVar35;
  dVar9 = dVar20 * dVar20 + dVar30 * dVar30;
  auVar21._0_8_ = dVar29 + dVar9;
  auVar21._8_8_ = dVar29 + dVar9;
  auVar12._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar21._8_8_);
  auVar12._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar21._0_8_);
  auVar22 = sqrtpd(auVar21,auVar21);
  auVar22 = divpd(auVar18,auVar22);
  auVar36._0_8_ = auVar22._0_8_ * dVar23;
  auVar36._8_8_ = auVar22._8_8_ * dVar20;
  auVar18 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar36,auVar12);
  *pdVar2 = (double)((ulonglong)(dVar35 * auVar22._0_8_) &
                    -(ulonglong)(9.99999993922529e-09 <= auVar21._0_8_));
  pdVar2[1] = (double)((ulonglong)(dVar30 * auVar22._8_8_) &
                      -(ulonglong)(9.99999993922529e-09 <= auVar21._8_8_));
  *(undefined1 (*) [16])(pdVar2 + 2) = auVar18;
  *(undefined1 *)param_1[2] = 1;
  return;
}



// FUNCTION 1446732ca FUN_1446732ca body=991 status=ok
// SIG undefined FUN_1446732ca(void)

void FUN_1446732ca(longlong *param_1,int param_2,undefined1 param_3,longlong param_4,
                  undefined8 param_5)

{
  float *pfVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  longlong local_90;
  undefined1 local_81;
  longlong local_80;
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar3 = (longlong *)*param_1;
  local_81 = param_3;
  local_80 = param_4;
  if (0 < (int)plVar3[1]) {
    lVar10 = (longlong)param_2;
    uVar5 = 0;
    iVar6 = 0;
    do {
      if ((longlong)*(int *)(local_80 + 0x78) != 0) {
        lVar7 = 0;
        do {
          if (uVar5 == *(uint *)(*(longlong *)(local_80 + 0x70) + lVar7)) {
            lVar7 = *plVar3;
            lVar4 = uVar5 * 0x130;
            if (0 < *(int *)(lVar7 + 0x100 + lVar4)) {
              lVar9 = 0x18;
              lVar8 = 0;
              do {
                pfVar1 = (float *)(*(longlong *)(lVar7 + 0xf8 + lVar4) + lVar9);
                if (*pfVar1 <= 1.0 && *pfVar1 != 1.0) {
                  if (*(int *)((undefined8 *)param_1[1] + 1) == 0) {
                    plVar3 = (longlong *)0x0;
                  }
                  else {
                    plVar3 = *(longlong **)param_1[1];
                  }
                  local_90 = param_1[2];
                  local_98 = local_81;
                  local_a0 = param_5;
                  local_a8 = (undefined4)lVar8;
                  (**(code **)(*plVar3 + 0x58))(plVar3,&local_78,lVar7 + lVar4);
                  lVar7 = (longlong)iVar6;
                  *(float *)(((longlong *)param_1[3])[1] * lVar7 * 4 + *(longlong *)param_1[3] +
                            lVar10 * 4) = (float)local_78;
                  *(float *)(((longlong *)param_1[3])[1] * lVar7 * 4 + *(longlong *)param_1[3] + 4 +
                            lVar10 * 4) = (float)local_70;
                  *(float *)(((longlong *)param_1[3])[1] * lVar7 * 4 + *(longlong *)param_1[3] + 8 +
                            lVar10 * 4) = (float)local_68;
                  iVar6 = iVar6 + 1;
                  plVar3 = (longlong *)*param_1;
                  lVar7 = *plVar3;
                }
                lVar8 = lVar8 + 1;
                iVar2 = *(int *)(lVar7 + 0x100 + lVar4);
                lVar9 = lVar9 + 0x20;
              } while (lVar8 < iVar2);
              if (0 < iVar2) {
                lVar9 = 0x1c;
                lVar8 = 0;
                do {
                  pfVar1 = (float *)(*(longlong *)(lVar7 + 0xf8 + lVar4) + lVar9);
                  if (*pfVar1 <= 1.0 && *pfVar1 != 1.0) {
                    if (*(int *)((undefined8 *)param_1[1] + 1) == 0) {
                      plVar3 = (longlong *)0x0;
                    }
                    else {
                      plVar3 = *(longlong **)param_1[1];
                    }
                    local_90 = param_1[2];
                    local_98 = local_81;
                    local_a0 = param_5;
                    local_a8 = (undefined4)lVar8;
                    (**(code **)(*plVar3 + 0x58))(plVar3,&local_78,lVar7 + lVar4);
                    lVar7 = (longlong)iVar6;
                    *(float *)(((longlong *)param_1[3])[1] * lVar7 * 4 + *(longlong *)param_1[3] +
                              lVar10 * 4) = (float)local_78;
                    *(float *)(((longlong *)param_1[3])[1] * lVar7 * 4 + *(longlong *)param_1[3] + 4
                              + lVar10 * 4) = (float)local_70;
                    *(float *)(((longlong *)param_1[3])[1] * lVar7 * 4 + *(longlong *)param_1[3] + 8
                              + lVar10 * 4) = (float)local_68;
                    iVar6 = iVar6 + 1;
                    plVar3 = (longlong *)*param_1;
                    lVar7 = *plVar3;
                  }
                  lVar8 = lVar8 + 1;
                  lVar9 = lVar9 + 0x20;
                } while (lVar8 < *(int *)(lVar7 + 0x100 + lVar4));
              }
            }
            goto LAB_14467366a;
          }
          lVar7 = lVar7 + 4;
        } while ((longlong)*(int *)(local_80 + 0x78) * 4 != lVar7);
      }
      lVar7 = *plVar3;
      lVar4 = uVar5 * 0x130;
      if (0 < *(int *)(lVar7 + 0x100 + lVar4)) {
        lVar8 = 0x18;
        lVar9 = 0;
        do {
          pfVar1 = (float *)(*(longlong *)(lVar7 + 0xf8 + lVar4) + lVar8);
          if (*pfVar1 <= 1.0 && *pfVar1 != 1.0) {
            lVar7 = (longlong)iVar6;
            *(undefined4 *)
             (((longlong *)param_1[3])[1] * lVar7 * 4 + *(longlong *)param_1[3] + lVar10 * 4) = 0;
            *(undefined4 *)
             (((longlong *)param_1[3])[1] * lVar7 * 4 + *(longlong *)param_1[3] + 4 + lVar10 * 4) =
                 0;
            *(undefined4 *)
             (((longlong *)param_1[3])[1] * lVar7 * 4 + *(longlong *)param_1[3] + 8 + lVar10 * 4) =
                 0;
            iVar6 = iVar6 + 1;
            plVar3 = (longlong *)*param_1;
            lVar7 = *plVar3;
          }
          lVar9 = lVar9 + 1;
          iVar2 = *(int *)(lVar7 + 0x100 + lVar4);
          lVar8 = lVar8 + 0x20;
        } while (lVar9 < iVar2);
        if (0 < iVar2) {
          lVar8 = 0x1c;
          lVar9 = 0;
          do {
            pfVar1 = (float *)(*(longlong *)(lVar7 + 0xf8 + lVar4) + lVar8);
            if (*pfVar1 <= 1.0 && *pfVar1 != 1.0) {
              lVar7 = (longlong)iVar6;
              *(undefined4 *)
               (((longlong *)param_1[3])[1] * lVar7 * 4 + *(longlong *)param_1[3] + lVar10 * 4) = 0;
              *(undefined4 *)
               (((longlong *)param_1[3])[1] * lVar7 * 4 + *(longlong *)param_1[3] + 4 + lVar10 * 4)
                   = 0;
              *(undefined4 *)
               (((longlong *)param_1[3])[1] * lVar7 * 4 + *(longlong *)param_1[3] + 8 + lVar10 * 4)
                   = 0;
              iVar6 = iVar6 + 1;
              plVar3 = (longlong *)*param_1;
              lVar7 = *plVar3;
            }
            lVar9 = lVar9 + 1;
            lVar8 = lVar8 + 0x20;
          } while (lVar9 < *(int *)(lVar7 + 0x100 + lVar4));
        }
      }
LAB_14467366a:
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < (longlong)(int)plVar3[1]);
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1446736aa FUN_1446736aa body=875 status=ok
// SIG undefined FUN_1446736aa(void)

ulonglong FUN_1446736aa(longlong *param_1,longlong *param_2,float param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  undefined8 unaff_RBX;
  undefined7 uVar14;
  ulonglong uVar13;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  int iVar21;
  float fVar22;
  double dVar23;
  undefined1 auStack_138 [32];
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  iVar7 = (int)param_2[5];
  uVar14 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if (iVar7 == 0) {
    uVar18 = 1;
    uVar20 = 0;
    iVar21 = 0;
    iVar8 = 0;
  }
  else {
    puVar12 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar12 = (uint *)(param_2 + 2);
    }
    uVar19 = *puVar12;
    if (uVar19 == 0) {
      iVar8 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar8 = iVar7 + -1;
      }
      uVar20 = 0;
      uVar18 = (ulonglong)(uint)(iVar8 >> 5);
      if (iVar8 >> 5 < 1) {
        uVar18 = uVar20;
      }
      iVar21 = 0;
      do {
        if (uVar18 == uVar20) {
          uVar13 = CONCAT71(uVar14,1);
          goto LAB_1446739bb;
        }
        iVar21 = iVar21 + 0x20;
        uVar19 = puVar12[uVar20 + 1];
        uVar20 = uVar20 + 1;
      } while (uVar19 == 0);
    }
    else {
      uVar20 = 0;
      iVar21 = 0;
    }
    uVar18 = (ulonglong)(-uVar19 & uVar19);
    uVar13 = uVar18 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar8 = (iVar21 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar8) {
      iVar8 = iVar7;
    }
  }
  uVar13 = CONCAT71(uVar14,1);
  if (iVar8 < iVar7) {
    uVar19 = 0xffffffff;
    do {
      lVar16 = *param_2;
      lVar15 = (longlong)iVar8 * 0xa0;
      if (*(char *)(lVar16 + 0x10 + lVar15) == '\x01') {
        lVar4 = *param_1;
        lVar17 = (longlong)*(int *)(lVar16 + lVar15) * 0x130;
        dVar5 = *(double *)(lVar16 + 0x28 + lVar15) - *(double *)(lVar4 + 0x40 + lVar17);
        dVar23 = *(double *)(lVar16 + 0x20 + lVar15) - *(double *)(lVar4 + 0x38 + lVar17);
        dVar6 = *(double *)(lVar16 + 0x18 + lVar15) - *(double *)(lVar4 + 0x30 + lVar17);
        fVar22 = 1.0 - *(float *)(lVar16 + 0x68 + lVar15);
        if (1.0 <= fVar22) {
          fVar22 = 1.0;
        }
        if (fVar22 <= 0.0) {
          fVar22 = 0.0;
        }
        if (ABS((float)SQRT(dVar5 * dVar5 + dVar6 * dVar6 + dVar23 * dVar23) -
                fVar22 * *(float *)(lVar16 + 0x78 + lVar15)) <= param_3) goto LAB_144673853;
LAB_1446739aa:
        uVar13 = 0;
        break;
      }
LAB_144673853:
      if (*(char *)(lVar16 + 0x30 + lVar15) == '\x01') {
        puVar2 = (undefined8 *)(lVar16 + 0x40 + lVar15);
        local_c8 = *puVar2;
        uStack_c0 = puVar2[1];
        puVar3 = (undefined4 *)(lVar16 + 0x50 + lVar15);
        local_b8 = *puVar3;
        uStack_b4 = puVar3[1];
        uStack_b0 = puVar3[2];
        uStack_ac = puVar3[3];
        lVar16 = (longlong)*(int *)(lVar16 + lVar15) * 0x130;
        puVar2 = (undefined8 *)(*param_1 + 0x10 + lVar16);
        local_e8 = *puVar2;
        uStack_e0 = puVar2[1];
        puVar3 = (undefined4 *)(*param_1 + 0x20 + lVar16);
        local_d8 = *puVar3;
        uStack_d4 = puVar3[1];
        uStack_d0 = puVar3[2];
        uStack_cc = puVar3[3];
        FUN_149893c3f(&local_100,&local_c8);
        FUN_149893c3f(&local_118,&local_e8);
        if (0.1 < ABS((float)SQRT((local_f0 - local_108) * (local_f0 - local_108) +
                                  (local_100 - local_118) * (local_100 - local_118) +
                                  (local_f8 - local_110) * (local_f8 - local_110))))
        goto LAB_1446739aa;
        iVar7 = (int)param_2[5];
      }
      uVar19 = uVar19 & ~(uint)uVar18;
      puVar12 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar12 = (uint *)(param_2 + 2);
      }
      iVar8 = (int)uVar20;
      lVar16 = (longlong)iVar8;
      uVar9 = puVar12[lVar16] & uVar19;
      if (uVar9 == 0) {
        iVar10 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar10 = iVar7 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar11 = iVar10;
        if (iVar10 < iVar8) {
          iVar11 = iVar8;
        }
        if (iVar10 <= iVar8) break;
        lVar15 = 0;
        while( true ) {
          iVar21 = iVar21 + 0x20;
          uVar9 = puVar12[lVar16 + lVar15 + 1];
          if (uVar9 != 0) break;
          lVar15 = lVar15 + 1;
          if (iVar11 - lVar16 == lVar15) goto LAB_1446739bb;
        }
        uVar20 = (ulonglong)(iVar8 + (int)lVar15 + 1);
        uVar19 = 0xffffffff;
      }
      uVar18 = (ulonglong)(-uVar9 & uVar9);
      uVar1 = uVar18 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar8 = (iVar21 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar7);
  }
LAB_1446739bb:
  if ((local_a0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return uVar13 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144673a16 FUN_144673a16 body=13771 status=ok
// SIG undefined FUN_144673a16(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144673a16(longlong param_1,char *param_2,undefined8 param_3,longlong *param_4,
                  float *param_5,byte *param_6,undefined1 param_7,char *param_8,longlong *param_9)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  longlong *plVar17;
  uint *puVar18;
  longlong lVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  longlong lVar24;
  uint *puVar25;
  longlong lVar26;
  undefined8 uVar27;
  int *piVar28;
  longlong lVar29;
  longlong lVar30;
  uint uVar31;
  longlong *plVar32;
  longlong lVar33;
  undefined4 *puVar34;
  ulonglong uVar35;
  byte *pbVar36;
  int iVar37;
  char *pcVar38;
  undefined8 *puVar39;
  undefined8 *puVar40;
  double *pdVar41;
  longlong *plVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  float fVar45;
  double dVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  double dVar57;
  double dVar58;
  float fVar59;
  double dVar60;
  undefined1 auVar61 [16];
  double dVar64;
  double dVar65;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar66;
  double dVar67;
  double dVar68;
  double dVar71;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  double dVar72;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  double dVar78;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar79 [16];
  double dVar80;
  double *pdVar81;
  undefined1 auVar82 [16];
  float fVar83;
  undefined1 auStack_4b8 [32];
  float *local_498;
  longlong *local_490;
  longlong *local_488;
  undefined *local_480;
  undefined8 local_478;
  longlong *local_470;
  double *local_468;
  double dStack_460;
  longlong *local_450;
  undefined1 local_448 [24];
  char *local_430;
  ulonglong local_428;
  longlong local_420;
  undefined1 local_418 [16];
  longlong *local_408;
  longlong *local_400;
  uint *local_3f8;
  double dStack_3f0;
  float *local_3e8;
  uint local_3dc;
  ulonglong local_3d8;
  ulonglong local_3d0;
  undefined1 local_3c8 [16];
  undefined1 local_3b8 [16];
  undefined8 local_3a8;
  uint local_3a0;
  undefined8 local_398 [12];
  undefined8 *local_338;
  uint uStack_330;
  uint uStack_32c;
  undefined8 *local_328;
  undefined8 uStack_320;
  undefined1 local_318 [48];
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  float local_2c8;
  ushort uStack_2c4;
  ushort uStack_2c2;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  double dStack_2b0;
  undefined8 *local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined8 *local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_208;
  uint local_200;
  undefined8 *local_1f8;
  int local_1f0;
  double local_1e8 [3];
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  int local_17c;
  undefined1 local_178 [16];
  double *local_168;
  double dStack_160;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  double *local_128;
  undefined8 uStack_120;
  undefined8 *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_4b8;
  lVar26 = *(longlong *)(param_1 + 0x1b0);
  if (lVar26 == 0) goto LAB_144673caf;
  local_418._0_8_ = param_3;
  local_400 = param_9 + 2;
  plVar17 = param_9 + 0xc;
  local_3e8 = (float *)(param_9 + 0xe);
  local_470 = param_9 + 0x18;
  local_3b8._0_8_ = param_1;
  local_420 = lVar26;
  if (((((uint)*(ushort *)(param_2 + 6) < DAT_14c87eb08 + 1U) && (*(longlong *)(param_2 + 4) != 0))
      && (*param_2 != '\0')) && ((int)param_9[0xf] == *(int *)((longlong)param_9 + 0xa4))) {
    iVar14 = *(int *)((longlong)param_9 + 0xc);
    local_450 = param_4;
    FUN_145d11edd(*param_9,(int)param_9[1]);
    *(undefined4 *)(param_9 + 1) = 0;
    if ((iVar14 < 0) && (*(int *)((longlong)param_9 + 0xc) != 0)) {
      FUN_14989cf62();
    }
    plVar42 = local_400;
    uVar27 = local_418._0_8_;
    if ((int)param_9[3] != *(int *)((longlong)param_9 + 0x44)) {
      FUN_14989cf92(local_400);
      FUN_14989d0dc(plVar42);
    }
    *(undefined4 *)(param_9 + 0xd) = 0;
    if (*(int *)((longlong)param_9 + 0x6c) < 0) {
      FUN_14481578e(plVar17,0);
    }
    FUN_14989d202(local_3e8);
    FUN_1414a87e6(local_470);
    uVar13 = *(uint *)(uVar27 + 8);
    lVar26 = *(longlong *)uVar27;
    iVar14 = (int)param_9[0xd];
    if (iVar14 < (int)uVar13) {
      *(uint *)(param_9 + 0xd) = uVar13;
      if ((uint)(*(int *)((longlong)param_9 + 0x6c) - iVar14) < uVar13 - iVar14) {
        FUN_1446f48e2(plVar17);
      }
      memset((void *)((longlong)iVar14 * 4 + *plVar17),0,(longlong)(int)(uVar13 - iVar14) << 2);
    }
    else {
      if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4((ulonglong)uVar13);
      }
      if ((int)uVar13 < iVar14) {
        *(uint *)(param_9 + 0xd) = uVar13;
        FUN_14479f406(plVar17);
      }
    }
    auVar63 = _DAT_149935300;
    auVar76 = _DAT_149934d80;
    param_4 = local_450;
    if (0 < (int)uVar13) {
      local_3f8 = (uint *)(param_9 + 0x1f);
      uVar35 = 0;
      dVar46 = (double)DAT_149934d90;
      dVar53 = DAT_149934d90._8_8_;
      lVar24 = local_420;
      do {
        *(undefined4 *)(*plVar17 + uVar35 * 4) = 0xffffffff;
        if ((((uint)*(ushort *)(lVar26 + 6 + uVar35 * 0x60) < DAT_14c87eb08 + 1U) &&
            (pbVar36 = (byte *)(uVar35 * 0x60 + lVar26), *(longlong *)(pbVar36 + 4) != 0)) &&
           (*pbVar36 == 1)) {
          local_3c8._0_8_ = lVar26;
          local_268 = ZEXT816(0);
          cVar11 = FUN_149893d5d(lVar24,param_2,pbVar36,local_268);
          if (cVar11 != '\0') {
            uVar43 = (ulonglong)(uint)local_268._8_4_;
            uVar21 = *(uint *)(pbVar36 + 0x2c);
            if ((int)local_268._8_4_ <= (int)*(uint *)(pbVar36 + 0x2c)) {
              uVar21 = local_268._8_4_;
            }
            local_430 = (char *)CONCAT44(local_430._4_4_,uVar21);
            local_3dc = *(uint *)(pbVar36 + 0x54);
            if ((int)local_268._8_4_ <= (int)*(uint *)(pbVar36 + 0x54)) {
              local_3dc = local_268._8_4_;
            }
            fVar45 = 0.0;
            if (0 < (int)local_268._8_4_) {
              local_408 = (longlong *)CONCAT44(local_408._4_4_,(float)(int)uVar21);
              fVar50 = (float)(int)local_3dc;
              uVar44 = 0;
              do {
                iVar37 = (int)uVar43;
                local_468 = (double *)(uVar44 * 0xc + local_268._0_8_);
                iVar14 = (int)param_9[0x19];
                iVar20 = *(int *)((longlong)param_9 + 0xf4);
                if (iVar14 != iVar20) {
                  lVar26 = *(longlong *)((longlong)local_468 + 4);
                  uVar21 = (uint)((ulonglong)lVar26 >> 0x10);
                  uVar31 = (uint)lVar26 & 0xffff;
                  puVar18 = (uint *)param_9[0x20];
                  if ((uint *)param_9[0x20] == (uint *)0x0) {
                    puVar18 = local_3f8;
                  }
                  uVar21 = puVar18[(int)param_9[0x21] - 1U &
                                   (uint)*(byte *)local_468 +
                                   ((int)((ulonglong)lVar26 >> 0x20) +
                                    ((uint)lVar26 << 0x10 | uVar31) +
                                    (uVar21 << 0x13 | uVar21 & 0xffff) + (uVar31 >> 4)) * 10];
                  if (uVar21 != 0xffffffff) {
                    do {
                      lVar24 = *local_470 + (longlong)(int)uVar21 * 0x18;
                      if ((*(longlong *)(lVar24 + 4) == lVar26) &&
                         (*(byte *)(*local_470 + (longlong)(int)uVar21 * 0x18) == *(byte *)local_468
                         )) {
                        if ((int *)(lVar24 + 0xc) != (int *)0x0 && lVar24 != 0) {
                          fVar59 = *(float *)(*param_9 + 4 +
                                             (longlong)*(int *)(lVar24 + 0xc) * 0x130);
                          goto LAB_14467559f;
                        }
                        break;
                      }
                      uVar21 = *(uint *)(lVar24 + 0x10);
                    } while (uVar21 != 0xffffffff);
                  }
                }
                local_428 = uVar44;
                local_17c = FUN_14989896e(param_9);
                lVar26 = local_420;
                pdVar41 = local_468;
                local_448._0_8_ = (longlong)local_17c * 0x130 + *param_9;
                uStack_320._0_4_ = *(undefined4 *)(local_468 + 1);
                local_328 = (undefined8 *)*local_468;
                FUN_1408130c0(local_420,&local_2c8,&local_328);
                uVar15 = FUN_140813180(lVar26,pdVar41);
                local_3d8 = CONCAT44(local_3d8._4_4_,uVar15);
                uVar16 = FUN_140813180(lVar26,&local_2c8);
                uVar15 = 0xffffffff;
                local_3d0 = CONCAT44(local_3d0._4_4_,uVar16);
                uVar27 = local_448._0_8_;
                if ((int)param_9[0x19] != *(int *)((longlong)param_9 + 0xf4)) {
                  lVar24 = CONCAT44((float)uStack_2c0,CONCAT22(uStack_2c2,uStack_2c4));
                  uVar21 = (uint)((ulonglong)lVar24 >> 0x10);
                  puVar18 = (uint *)param_9[0x20];
                  if ((uint *)param_9[0x20] == (uint *)0x0) {
                    puVar18 = local_3f8;
                  }
                  uVar21 = puVar18[(int)param_9[0x21] - 1U &
                                   ((uint)local_2c8 & 0xff) +
                                   ((int)(float)uStack_2c0 +
                                    (CONCAT22(uStack_2c2,uStack_2c4) << 0x10 | (uint)uStack_2c4) +
                                    (uVar21 << 0x13 | uVar21 & 0xffff) + (uint)(uStack_2c4 >> 4)) *
                                   10];
                  if (uVar21 != 0xffffffff) {
                    do {
                      lVar19 = *local_470 + (longlong)(int)uVar21 * 0x18;
                      if ((*(longlong *)(lVar19 + 4) == lVar24) &&
                         (*(char *)(*local_470 + (longlong)(int)uVar21 * 0x18) == local_2c8._0_1_))
                      {
                        if ((undefined4 *)(lVar19 + 0xc) != (undefined4 *)0x0 && lVar19 != 0) {
                          uVar15 = *(undefined4 *)(lVar19 + 0xc);
                        }
                        break;
                      }
                      uVar21 = *(uint *)(lVar19 + 0x10);
                    } while (uVar21 != 0xffffffff);
                  }
                }
                *(undefined4 *)local_448._0_8_ = uVar15;
                local_338 = (undefined8 *)*local_468;
                _uStack_330 = CONCAT44(uStack_32c,*(undefined4 *)(local_468 + 1));
                uVar21 = FUN_140813180(lVar26,&local_338);
                if (((((int)uVar21 < 0) || (*(int *)(lVar26 + 0xc0) <= (int)uVar21)) ||
                    (lVar24 = *(longlong *)(*(longlong *)(lVar26 + 0xb8) + (ulonglong)uVar21 * 8),
                    lVar24 == 0)) ||
                   (((bVar12 = *(byte *)(lVar24 + 0x10), 1 < bVar12 - 1 && (bVar12 != 0x80)) &&
                    ((0x20 < bVar12 || ((0x100010010U >> ((ulonglong)bVar12 & 0x3f) & 1) == 0))))))
                {
                  puVar39 = &DAT_14c846480;
                  puVar40 = (undefined8 *)local_178;
                  for (lVar26 = 0xc; lVar26 != 0; lVar26 = lVar26 + -1) {
                    *puVar40 = *puVar39;
                    puVar39 = puVar39 + 1;
                    puVar40 = puVar40 + 1;
                  }
                }
                else {
                  FUN_1401571e4(lVar26,local_178,lVar24,3);
                }
                lVar26 = local_420;
                puVar39 = (undefined8 *)local_178;
                puVar40 = (undefined8 *)(uVar27 + 0x10);
                for (lVar24 = 0xc; lVar24 != 0; lVar24 = lVar24 + -1) {
                  *puVar40 = *puVar39;
                  puVar39 = puVar39 + 1;
                  puVar40 = puVar40 + 1;
                }
                dVar58 = *(double *)(uVar27 + 0x10);
                dVar65 = *(double *)(uVar27 + 0x18);
                dVar80 = *(double *)(uVar27 + 0x20);
                dVar57 = *(double *)(uVar27 + 0x28);
                dVar67 = dVar80 * dVar80 + dVar58 * dVar58;
                dVar71 = dVar57 * dVar57 + dVar65 * dVar65;
                auVar73._0_8_ = dVar67 + dVar71;
                auVar73._8_8_ = dVar67 + dVar71;
                uVar43 = -(ulonglong)(dVar46 <= auVar73._0_8_);
                uVar44 = -(ulonglong)(dVar53 <= auVar73._8_8_);
                auVar70._8_8_ = uVar44;
                auVar70._0_8_ = uVar43;
                auVar73 = sqrtpd(auVar73,auVar73);
                auVar73 = divpd(auVar76,auVar73);
                auVar56._0_8_ = auVar73._0_8_ * dVar80;
                auVar56._8_8_ = auVar73._8_8_ * dVar57;
                auVar70 = blendvpd(auVar63,auVar56,auVar70);
                *(ulonglong *)(uVar27 + 0x10) = (ulonglong)(dVar58 * auVar73._0_8_) & uVar43;
                *(ulonglong *)(uVar27 + 0x18) = (ulonglong)(dVar65 * auVar73._8_8_) & uVar44;
                *(undefined1 (*) [16])(uVar27 + 0x20) = auVar70;
                if ((((uint)uStack_2c2 < DAT_14c87eb08 + 1U) &&
                    (CONCAT44((float)uStack_2c0,CONCAT22(uStack_2c2,uStack_2c4)) != 0)) &&
                   (local_2c8._0_1_ != '\0')) {
                  if (((((int)local_3d8 < 0) || (*(int *)(local_420 + 0xc0) <= (int)local_3d8)) ||
                      (lVar24 = *(longlong *)
                                 (*(longlong *)(local_420 + 0xb8) + (local_3d8 & 0xffffffff) * 8),
                      lVar24 == 0)) ||
                     (((bVar12 = *(byte *)(lVar24 + 0x10), 1 < bVar12 - 1 && (bVar12 != 0x80)) &&
                      ((0x20 < bVar12 || ((0x100010010U >> ((ulonglong)bVar12 & 0x3f) & 1) == 0)))))
                     ) {
                    puVar39 = &DAT_14c846480;
                    puVar40 = (undefined8 *)local_178;
                    for (lVar24 = 0xc; lVar24 != 0; lVar24 = lVar24 + -1) {
                      *puVar40 = *puVar39;
                      puVar39 = puVar39 + 1;
                      puVar40 = puVar40 + 1;
                    }
                  }
                  else {
                    FUN_1401571e4(local_420,local_178,lVar24,2);
                  }
                  uVar4 = local_158._0_8_;
                  uVar5 = local_158._8_8_;
                  uVar3 = local_148._0_8_;
                  if ((((int)local_3d0 < 0) || (*(int *)(lVar26 + 0xc0) <= (int)local_3d0)) ||
                     ((lVar24 = *(longlong *)
                                 (*(longlong *)(lVar26 + 0xb8) + (local_3d0 & 0xffffffff) * 8),
                      lVar24 == 0 ||
                      (((bVar12 = *(byte *)(lVar24 + 0x10), 1 < bVar12 - 1 && (bVar12 != 0x80)) &&
                       ((0x20 < bVar12 || ((0x100010010U >> ((ulonglong)bVar12 & 0x3f) & 1) == 0))))
                      )))) {
                    pdVar41 = (double *)&DAT_14c846480;
                    pdVar81 = local_1e8;
                    for (lVar26 = 0xc; lVar26 != 0; lVar26 = lVar26 + -1) {
                      *pdVar81 = *pdVar41;
                      pdVar41 = pdVar41 + 1;
                      pdVar81 = pdVar81 + 1;
                    }
                  }
                  else {
                    FUN_1401571e4(lVar26,local_1e8,lVar24,2);
                  }
                  *(float *)(uVar27 + 4) =
                       (float)SQRT(((double)uVar3 - (double)local_1b8._0_8_) *
                                   ((double)uVar3 - (double)local_1b8._0_8_) +
                                   ((double)uVar4 - (double)local_1c8._0_8_) *
                                   ((double)uVar4 - (double)local_1c8._0_8_) +
                                   ((double)uVar5 - (double)local_1c8._8_8_) *
                                   ((double)uVar5 - (double)local_1c8._8_8_));
                }
                pdVar41 = local_468;
                local_178._8_8_ = &local_17c;
                local_178._0_8_ = local_468;
                FUN_140fe526c(local_470,local_1e8,local_178,0);
                local_178._8_8_ = pdVar41;
                local_178._0_8_ = &local_17c;
                FUN_149898ae4(local_3e8,local_1e8);
                fVar59 = *(float *)(local_448._0_8_ + 4);
                iVar14 = (int)param_9[0x19];
                iVar20 = *(int *)((longlong)param_9 + 0xf4);
                uVar44 = local_428;
                iVar37 = local_268._8_4_;
LAB_14467559f:
                if (iVar14 != iVar20) {
                  lVar26 = *(longlong *)((longlong)local_468 + 4);
                  uVar21 = (uint)((ulonglong)lVar26 >> 0x10);
                  uVar31 = (uint)lVar26 & 0xffff;
                  puVar18 = (uint *)param_9[0x20];
                  if ((uint *)param_9[0x20] == (uint *)0x0) {
                    puVar18 = local_3f8;
                  }
                  uVar21 = puVar18[(int)param_9[0x21] - 1U &
                                   (uint)*(byte *)local_468 +
                                   ((int)((ulonglong)lVar26 >> 0x20) +
                                    ((uint)lVar26 << 0x10 | uVar31) +
                                    (uVar21 << 0x13 | uVar21 & 0xffff) + (uVar31 >> 4)) * 10];
                  if (uVar21 != 0xffffffff) {
                    do {
                      lVar24 = *local_470 + (longlong)(int)uVar21 * 0x18;
                      if ((*(longlong *)(lVar24 + 4) == lVar26) &&
                         (*(byte *)(*local_470 + (longlong)(int)uVar21 * 0x18) == *(byte *)local_468
                         )) goto LAB_144675640;
                      uVar21 = *(uint *)(lVar24 + 0x10);
                    } while (uVar21 != 0xffffffff);
                  }
                }
                lVar24 = 0;
LAB_144675640:
                iVar37 = iVar37 - (int)uVar44;
                piVar28 = (int *)(lVar24 + 0xc);
                if (lVar24 == 0) {
                  piVar28 = (int *)0x0;
                }
                fVar66 = 0.0;
                fVar83 = 0.0;
                if (iVar37 < *(int *)(pbVar36 + 0x2c)) {
                  fVar83 = *param_5 - param_5[1];
                  if (fVar83 <= 0.0) {
                    fVar83 = 0.0;
                  }
                  fVar83 = (1.0 - (float)iVar37 / local_408._0_4_) * fVar83 + param_5[1];
                }
                if (iVar37 < *(int *)(pbVar36 + 0x54)) {
                  fVar66 = param_5[2] - param_5[3];
                  if (fVar66 <= 0.0) {
                    fVar66 = 0.0;
                  }
                  fVar66 = (1.0 - (float)iVar37 / fVar50) * fVar66 + param_5[3];
                }
                fVar45 = fVar45 + fVar59;
                FUN_149898f86((longlong)*piVar28 * 0x130 + *param_9,fVar83,fVar66);
                uVar44 = uVar44 + 1;
                uVar43 = (ulonglong)(int)local_268._8_4_;
              } while ((longlong)uVar44 < (longlong)uVar43);
            }
            if ((int)param_9[0x19] != *(int *)((longlong)param_9 + 0xf4)) {
              lVar26 = *(longlong *)(pbVar36 + 4);
              uVar21 = (uint)((ulonglong)lVar26 >> 0x10);
              uVar31 = (uint)lVar26 & 0xffff;
              puVar18 = (uint *)param_9[0x20];
              if ((uint *)param_9[0x20] == (uint *)0x0) {
                puVar18 = local_3f8;
              }
              uVar21 = puVar18[(int)param_9[0x21] - 1U &
                               (uint)*pbVar36 +
                               ((int)((ulonglong)lVar26 >> 0x20) + ((uint)lVar26 << 0x10 | uVar31) +
                                (uVar21 << 0x13 | uVar21 & 0xffff) + (uVar31 >> 4)) * 10];
              if (uVar21 != 0xffffffff) {
                do {
                  lVar24 = *local_470 + (longlong)(int)uVar21 * 0x18;
                  if ((*(longlong *)(lVar24 + 4) == lVar26) &&
                     (*(byte *)(*local_470 + (longlong)(int)uVar21 * 0x18) == *pbVar36))
                  goto LAB_1446758f1;
                  uVar21 = *(uint *)(lVar24 + 0x10);
                } while (uVar21 != 0xffffffff);
              }
            }
            lVar24 = 0;
LAB_1446758f1:
            uVar21 = (uint)local_430;
            puVar34 = (undefined4 *)(lVar24 + 0xc);
            if (lVar24 == 0) {
              puVar34 = (undefined4 *)0x0;
            }
            *(undefined4 *)(*plVar17 + uVar35 * 4) = *puVar34;
            lVar26 = FUN_149899016(local_400);
            local_448._0_8_ = lVar26;
            *(float *)(lVar26 + 0x5c) = fVar45;
            if ((int)uVar21 < (int)local_3dc) {
              uVar21 = local_3dc;
            }
            if ((int)uVar21 <= (int)local_268._8_4_) {
              if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1456afac4(uVar21);
              }
              local_468 = (double *)(lVar26 + 0x70);
              *(undefined4 *)(lVar26 + 0x78) = 0;
              if (*(int *)(lVar26 + 0x7c) < (int)uVar21) {
                FUN_14481578e(local_468);
              }
              if (uVar21 != 0) {
                local_428 = (ulonglong)uVar21;
                uVar43 = 0;
                do {
                  if ((int)param_9[0x19] != *(int *)((longlong)param_9 + 0xf4)) {
                    lVar26 = *(longlong *)(local_268._0_8_ + 4 + uVar43 * 0xc);
                    uVar21 = (uint)((ulonglong)lVar26 >> 0x10);
                    uVar31 = (uint)lVar26 & 0xffff;
                    bVar12 = *(byte *)(local_268._0_8_ + uVar43 * 0xc);
                    puVar18 = (uint *)param_9[0x20];
                    if ((uint *)param_9[0x20] == (uint *)0x0) {
                      puVar18 = local_3f8;
                    }
                    uVar21 = puVar18[(int)param_9[0x21] - 1U &
                                     (uint)bVar12 +
                                     ((int)((ulonglong)lVar26 >> 0x20) +
                                      ((uint)lVar26 << 0x10 | uVar31) +
                                      (uVar21 << 0x13 | uVar21 & 0xffff) + (uVar31 >> 4)) * 10];
                    if (uVar21 != 0xffffffff) {
                      do {
                        lVar24 = *local_470 + (longlong)(int)uVar21 * 0x18;
                        if ((*(longlong *)(lVar24 + 4) == lVar26) &&
                           (*(byte *)(*local_470 + (longlong)(int)uVar21 * 0x18) == bVar12))
                        goto LAB_144675a49;
                        uVar21 = *(uint *)(lVar24 + 0x10);
                      } while (uVar21 != 0xffffffff);
                    }
                  }
                  lVar24 = 0;
LAB_144675a49:
                  puVar34 = (undefined4 *)(lVar24 + 0xc);
                  if (lVar24 == 0) {
                    puVar34 = (undefined4 *)0x0;
                  }
                  iVar14 = *(int *)(local_448._0_8_ + 0x78);
                  uVar21 = iVar14 + 1;
                  *(uint *)(local_448._0_8_ + 0x78) = uVar21;
                  if (*(uint *)(local_448._0_8_ + 0x7c) < uVar21) {
                    FUN_1446f48e2(local_468);
                  }
                  *(undefined4 *)((longlong)*local_468 + (longlong)iVar14 * 4) = *puVar34;
                  uVar43 = uVar43 + 1;
                } while (uVar43 != local_428);
              }
            }
          }
          if (local_268._0_8_ != 0) {
            FUN_1400020a8();
          }
          lVar26 = local_3c8._0_8_;
          param_4 = local_450;
          lVar24 = local_420;
          param_1 = local_3b8._0_8_;
        }
        uVar35 = uVar35 + 1;
      } while (uVar35 != uVar13);
    }
  }
  uStack_320 = (double)CONCAT44(uStack_320._4_4_,(undefined4)uStack_320);
  uStack_2c0 = (double)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0);
  local_2b8 = (double)CONCAT44(local_2b8._4_4_,(undefined4)local_2b8);
  if (*(int *)((longlong)param_9 + 0xa4) < (int)param_9[0xf]) {
    local_408 = param_9 + 0x22;
    if (0 < (int)param_4[1]) {
      local_178._8_4_ = (int)param_4[1];
      local_178._0_8_ = *param_4;
      local_490 = local_470;
      local_498 = local_3e8;
      FUN_149892665(local_178,local_408);
    }
    local_450 = param_4;
    if ((int)param_9[0x23] < 1) {
      FUN_149896b92(param_9 + 0x24);
    }
    else {
      local_1f8 = (undefined8 *)0x0;
      local_1f0 = 0;
      FUN_1446efa72(&local_1f8,0,2,0x10);
      local_1f0 = 2;
      *local_1f8 = &PTR_LAB_14bed1440;
      local_1f8[1] = local_408;
      LOCK();
      UNLOCK();
      lVar24 = DAT_14c758608 + 1;
      lVar26 = DAT_14c758608 + 1;
      if (lVar24 == 0) {
        LOCK();
        UNLOCK();
        lVar24 = DAT_14c758608 + 2;
        lVar26 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar26;
      local_1f8[2] = lVar24;
      *local_1f8 = &PTR_FUN_14bed13d0;
      local_1f8[3] = FUN_149892446;
      FUN_1498980a2(param_9 + 0x2f,&local_1f8);
      if (local_1f0 != 0) {
        if (local_1f8 == (undefined8 *)0x0) goto LAB_144673e97;
        (**(code **)*local_1f8)(local_1f8,0);
        FUN_1446efa72(&local_1f8,0,0,0x10);
        local_1f0 = 0;
      }
      if (local_1f8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
LAB_144673e97:
    auVar63 = _DAT_149935300;
    auVar76 = _DAT_149934d80;
    if (0 < (int)param_9[1]) {
      local_468 = (double *)(param_9 + 0x15);
      uVar35 = 0;
      dVar46 = (double)DAT_149934d90;
      dVar53 = DAT_149934d90._8_8_;
      do {
        lVar26 = local_420;
        if ((int)param_9[0xf] != *(int *)((longlong)param_9 + 0xa4)) {
          pdVar41 = (double *)param_9[0x16];
          if ((double *)param_9[0x16] == (double *)0x0) {
            pdVar41 = local_468;
          }
          uVar13 = *(uint *)((longlong)pdVar41 +
                            (ulonglong)((uint)uVar35 & (int)param_9[0x17] + 0x7fffffffU) * 4);
          if (uVar13 != 0xffffffff) {
            do {
              puVar18 = (uint *)(*(longlong *)local_3e8 + (longlong)(int)uVar13 * 0x18);
              if (uVar35 == *puVar18) goto LAB_144673f40;
              uVar13 = puVar18[4];
            } while (uVar13 != 0xffffffff);
          }
        }
        puVar18 = (uint *)0x0;
LAB_144673f40:
        puVar25 = puVar18 + 1;
        if (puVar18 == (uint *)0x0) {
          puVar25 = (uint *)0x0;
        }
        lVar24 = *param_9 + uVar35 * 0x130;
        local_208 = *(undefined8 *)puVar25;
        local_200 = puVar25[2];
        uVar13 = FUN_140813180(local_420,&local_208);
        if (((((int)uVar13 < 0) || (*(int *)(lVar26 + 0xc0) <= (int)uVar13)) ||
            (lVar19 = *(longlong *)(*(longlong *)(lVar26 + 0xb8) + (ulonglong)uVar13 * 8),
            lVar19 == 0)) ||
           (((bVar12 = *(byte *)(lVar19 + 0x10), 1 < bVar12 - 1 && (bVar12 != 0x80)) &&
            ((0x20 < bVar12 || ((0x100010010U >> ((ulonglong)bVar12 & 0x3f) & 1) == 0)))))) {
          puVar39 = &DAT_14c846480;
          puVar40 = (undefined8 *)local_178;
          for (lVar26 = 0xc; lVar26 != 0; lVar26 = lVar26 + -1) {
            *puVar40 = *puVar39;
            puVar39 = puVar39 + 1;
            puVar40 = puVar40 + 1;
          }
        }
        else {
          FUN_1401571e4(lVar26,local_178,lVar19,3);
        }
        puVar39 = (undefined8 *)local_178;
        puVar40 = (undefined8 *)(lVar24 + 0x10);
        for (lVar26 = 0xc; lVar26 != 0; lVar26 = lVar26 + -1) {
          *puVar40 = *puVar39;
          puVar39 = puVar39 + 1;
          puVar40 = puVar40 + 1;
        }
        dVar58 = *(double *)(lVar24 + 0x10);
        dVar65 = *(double *)(lVar24 + 0x18);
        dVar80 = *(double *)(lVar24 + 0x20);
        dVar57 = *(double *)(lVar24 + 0x28);
        dVar67 = dVar80 * dVar80 + dVar58 * dVar58;
        dVar71 = dVar57 * dVar57 + dVar65 * dVar65;
        auVar69._0_8_ = dVar67 + dVar71;
        auVar69._8_8_ = dVar67 + dVar71;
        uVar43 = -(ulonglong)(dVar46 <= auVar69._0_8_);
        uVar44 = -(ulonglong)(dVar53 <= auVar69._8_8_);
        auVar47._8_8_ = uVar44;
        auVar47._0_8_ = uVar43;
        auVar70 = sqrtpd(auVar69,auVar69);
        auVar73 = divpd(auVar76,auVar70);
        auVar74._0_8_ = auVar73._0_8_ * dVar80;
        auVar74._8_8_ = auVar73._8_8_ * dVar57;
        auVar70 = blendvpd(auVar63,auVar74,auVar47);
        *(ulonglong *)(lVar24 + 0x10) = (ulonglong)(dVar58 * auVar73._0_8_) & uVar43;
        *(ulonglong *)(lVar24 + 0x18) = (ulonglong)(dVar65 * auVar73._8_8_) & uVar44;
        *(undefined1 (*) [16])(lVar24 + 0x20) = auVar70;
        FUN_149896bd6(uVar35 * 0x130 + *param_9);
        uVar35 = uVar35 + 1;
      } while ((longlong)uVar35 < (longlong)(int)param_9[1]);
    }
    iVar14 = *(int *)(local_418._0_8_ + 8);
    plVar42 = local_400;
    if (0 < iVar14) {
      fVar45 = param_5[1];
      fVar50 = *param_5;
      if (*param_5 <= fVar45) {
        fVar50 = fVar45;
      }
      fVar59 = param_5[3];
      fVar83 = param_5[2];
      if (param_5[2] <= fVar59) {
        fVar83 = fVar59;
      }
      fVar83 = fVar83 - fVar59;
      lVar26 = 0;
      local_3c8 = ZEXT816(0x3ff0000000000000) << 0x40;
      local_428 = CONCAT44(local_428._4_4_,fVar83);
      do {
        uVar13 = *(uint *)(*plVar17 + lVar26 * 4);
        if (((longlong)(int)uVar13 != -1) && ((int)param_9[3] != *(int *)((longlong)param_9 + 0x44))
           ) {
          plVar32 = (longlong *)param_9[10];
          if ((longlong *)param_9[10] == (longlong *)0x0) {
            plVar32 = param_9 + 9;
          }
          iVar20 = *(int *)((longlong)plVar32 + (ulonglong)((int)param_9[0xb] - 1U & uVar13) * 4);
          if (iVar20 != -1) {
            do {
              lVar24 = *plVar42 + (longlong)iVar20 * 0xa0;
              if (*(uint *)(*plVar42 + (longlong)iVar20 * 0xa0) == uVar13) {
                if ((lVar24 + 0x10U & 0xffffffffffffffef) != 0) {
                  lVar29 = *(longlong *)local_418._0_8_;
                  lVar33 = lVar26 * 0x60;
                  lVar19 = *param_9;
                  lVar30 = (longlong)(int)uVar13 * 0x130;
                  dVar46 = *(double *)(lVar19 + 0x40 + lVar30);
                  local_468 = *(double **)(lVar19 + 0x30 + lVar30);
                  local_3f8 = *(uint **)(lVar19 + 0x38 + lVar30);
                  pauVar1 = (undefined1 (*) [16])(lVar19 + 0x10 + lVar30);
                  dVar67 = *(double *)*pauVar1;
                  local_178 = *pauVar1;
                  dVar53 = *(double *)(lVar19 + 0x18 + lVar30);
                  puVar39 = (undefined8 *)(lVar19 + 0x20 + lVar30);
                  pdVar41 = (double *)*puVar39;
                  dStack_160 = (double)puVar39[1];
                  dVar58 = *(double *)(lVar19 + 0x28 + lVar30);
                  dVar65 = *(double *)(lVar29 + 0x20 + lVar33);
                  dVar80 = *(double *)(lVar29 + 0x18 + lVar33);
                  dVar57 = (double)*(float *)(lVar29 + 0x28 + lVar33);
                  local_448._0_8_ = dVar46;
                  *(double *)(lVar24 + 0x18) =
                       (*(double *)(lVar29 + 0x10 + lVar33) - (double)local_468) * dVar57 +
                       (double)local_468;
                  *(double *)(lVar24 + 0x20) =
                       (dVar80 - (double)local_3f8) * dVar57 + (double)local_3f8;
                  *(double *)(lVar24 + 0x28) = (dVar65 - dVar46) * dVar57 + dVar46;
                  dVar68 = (double)*(float *)(lVar29 + 0x50 + lVar33);
                  dVar65 = *(double *)(lVar29 + 0x30 + lVar33);
                  dVar80 = *(double *)(lVar29 + 0x38 + lVar33);
                  dVar57 = *(double *)(lVar29 + 0x40 + lVar33);
                  dVar46 = *(double *)(lVar29 + 0x48 + lVar33);
                  dVar71 = dVar58 * dVar46 +
                           (double)pdVar41 * dVar57 + dVar67 * dVar65 + dVar53 * dVar80;
                  dVar60 = dVar71 * (double)(&DAT_149931160)[0.0 <= dVar71];
                  dVar52 = 1.0 - dVar68;
                  dVar68 = (double)(&DAT_149931160)[0.0 <= dVar71] * dVar68;
                  lVar19 = lVar29 + lVar33;
                  local_168 = pdVar41;
                  if (dVar60 < 0.9999) {
                    dVar46 = dVar60;
                    if (1.0 <= dVar60) {
                      dVar46 = 1.0;
                    }
                    dVar46 = acos((double)(-(ulonglong)(dVar60 < -1.0) & 0xbff0000000000000 |
                                          ~-(ulonglong)(dVar60 < -1.0) & (ulonglong)dVar46));
                    dVar65 = sin(dVar46);
                    dVar52 = sin(dVar52 * dVar46);
                    dVar52 = dVar52 * (1.0 / dVar65);
                    dVar68 = sin(dVar68 * dVar46);
                    dVar68 = dVar68 * (1.0 / dVar65);
                    dVar46 = *(double *)(lVar19 + 0x48);
                    dVar57 = *(double *)(lVar19 + 0x40);
                    dVar65 = *(double *)(lVar19 + 0x30);
                    dVar80 = *(double *)(lVar19 + 0x38);
                    fVar83 = (float)local_428;
                  }
                  dVar58 = dVar58 * dVar52 + dVar46 * dVar68;
                  dVar57 = (double)pdVar41 * dVar52 + dVar57 * dVar68;
                  dVar46 = dVar53 * dVar52 + dVar80 * dVar68;
                  dVar53 = dVar67 * dVar52 + dVar65 * dVar68;
                  dVar65 = dVar57 * dVar57 + dVar53 * dVar53;
                  dVar80 = dVar58 * dVar58 + dVar46 * dVar46;
                  auVar54._0_8_ = dVar65 + dVar80;
                  auVar54._8_8_ = dVar65 + dVar80;
                  auVar63._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar54._8_8_);
                  auVar63._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar54._0_8_);
                  auVar76 = sqrtpd(auVar54,auVar54);
                  auVar70 = divpd(_DAT_149934d80,auVar76);
                  auVar61._0_8_ = auVar70._0_8_ * dVar57;
                  auVar61._8_8_ = auVar70._8_8_ * dVar58;
                  uVar35 = (ulonglong)(dVar46 * auVar70._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar54._8_8_);
                  auVar63 = blendvpd(local_3c8,auVar61,auVar63);
                  auVar76._8_4_ = (int)uVar35;
                  auVar76._0_8_ =
                       (ulonglong)(dVar53 * auVar70._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar54._0_8_);
                  auVar76._12_4_ = (int)(uVar35 >> 0x20);
                  *(undefined1 (*) [16])(lVar24 + 0x40) = auVar76;
                  *(undefined1 (*) [16])(lVar24 + 0x50) = auVar63;
                  dVar46 = *(double *)(lVar19 + 0x20) - (double)local_448._0_8_;
                  dVar58 = *(double *)(lVar19 + 0x18) - (double)local_3f8;
                  dVar53 = *(double *)(lVar19 + 0x10) - (double)local_468;
                  *(float *)(lVar24 + 0x78) =
                       (float)SQRT(dVar46 * dVar46 + dVar53 * dVar53 + dVar58 * dVar58);
                  FUN_149893c3f(local_1e8,lVar29 + lVar33 + 0x30);
                  FUN_149893c3f(local_268,local_178);
                  *(float *)(lVar24 + 0x7c) =
                       (float)SQRT((local_1e8[2] - (double)local_258._0_8_) *
                                   (local_1e8[2] - (double)local_258._0_8_) +
                                   (local_1e8[0] - (double)local_268._0_8_) *
                                   (local_1e8[0] - (double)local_268._0_8_) +
                                   (local_1e8[1] - (double)local_268._8_8_) *
                                   (local_1e8[1] - (double)local_268._8_8_));
                  fVar59 = *(float *)(lVar19 + 0x58);
                  if (1.0 <= *(float *)(lVar19 + 0x58)) {
                    fVar59 = 1.0;
                  }
                  if (fVar59 <= 0.0) {
                    fVar59 = 0.0;
                  }
                  auVar76 = ZEXT416((uint)param_5[4]);
                  if (0.7 <= param_5[4]) {
                    auVar76 = ZEXT416(0x3f333333);
                  }
                  if (auVar76._0_4_ <= 0.0) {
                    auVar2._12_4_ = 0;
                    auVar2._0_12_ = auVar76._4_12_;
                    auVar76 = auVar2 << 0x20;
                  }
                  fVar59 = (1.0 - auVar76._0_4_) * fVar59 + auVar76._0_4_;
                  *(float *)(lVar24 + 0x60) = (fVar50 - fVar45) * fVar59 + param_5[1];
                  *(float *)(lVar24 + 100) = fVar83 * fVar59 + param_5[3];
                  *(float *)(lVar24 + 0x68) = fVar59;
                  *(float *)(lVar24 + 0x70) = fVar59;
                  *(undefined1 *)(lVar24 + 0x10) = 1;
                  *(undefined1 *)(lVar24 + 0x30) = 1;
                  iVar14 = *(int *)(local_418._0_8_ + 8);
                  param_1 = local_3b8._0_8_;
                  plVar42 = local_400;
                }
                break;
              }
              iVar20 = *(int *)(lVar24 + 0x90);
            } while (iVar20 != -1);
          }
        }
        lVar26 = lVar26 + 1;
      } while (lVar26 < iVar14);
    }
    plVar32 = param_9 + 0x31;
    iVar14 = *(int *)((longlong)param_9 + 0x194);
    FUN_145d11eb5(param_9[0x31],(int)param_9[0x32]);
    *(undefined4 *)(param_9 + 0x32) = 0;
    if ((iVar14 < 0) && (*(int *)((longlong)param_9 + 0x194) != 0)) {
      FUN_14989d536(plVar32);
    }
    cVar11 = '\x01';
    local_448._0_8_ = plVar32;
    uVar27 = local_418._0_8_;
    local_488 = plVar32;
    if ((*param_8 == '\0') && (param_8[4] == '\0')) {
      cVar11 = param_8[5];
      local_488 = (longlong *)0x0;
      if (cVar11 != '\0') {
        local_488 = plVar32;
      }
    }
    local_178._0_6_ =
         CONCAT15((local_178[5] & 0xfc) + 1,CONCAT14(*(undefined1 *)(param_5 + 8),param_5[6])) ^
         0x100000000;
    local_490 = (longlong *)CONCAT44(local_490._4_4_,param_5[5]);
    local_498 = (float *)CONCAT44(local_498._4_4_,param_5[7]);
    FUN_149896276(param_9 + 0x24,param_9,plVar42);
    auVar63 = _DAT_149935300;
    auVar76 = _DAT_149934d80;
    iVar14 = *(int *)(uVar27 + 8);
    if ((0 < iVar14 & *param_6) == 1) {
      lVar26 = 0;
      dVar46 = (double)DAT_149934d90;
      dVar53 = DAT_149934d90._8_8_;
      do {
        uVar13 = *(uint *)(*plVar17 + lVar26 * 4);
        lVar24 = (longlong)(int)uVar13;
        if ((lVar24 != -1) && ((int)param_9[3] != *(int *)((longlong)param_9 + 0x44))) {
          plVar32 = (longlong *)param_9[10];
          if ((longlong *)param_9[10] == (longlong *)0x0) {
            plVar32 = param_9 + 9;
          }
          iVar20 = *(int *)((longlong)plVar32 + (ulonglong)((int)param_9[0xb] - 1U & uVar13) * 4);
          if (iVar20 != -1) {
            do {
              lVar19 = *plVar42 + (longlong)iVar20 * 0xa0;
              if (*(uint *)(*plVar42 + (longlong)iVar20 * 0xa0) == uVar13) {
                if ((((lVar19 + 0x10U & 0xffffffffffffffef) != 0) &&
                    (*(char *)(lVar19 + 0x30) == '\x01')) &&
                   ((lVar29 = *param_9, param_6[1] != 1 ||
                    (lVar30 = lVar24 * 0x130,
                    dVar58 = *(double *)(lVar29 + 0x40 + lVar30) - *(double *)(lVar19 + 0x28),
                    dVar80 = *(double *)(lVar29 + 0x38 + lVar30) - *(double *)(lVar19 + 0x20),
                    dVar65 = *(double *)(lVar29 + 0x30 + lVar30) - *(double *)(lVar19 + 0x18),
                    dVar58 * dVar58 + dVar65 * dVar65 + dVar80 * dVar80 <=
                    (double)(param_5[5] * param_5[5]))))) {
                  dVar58 = *(double *)(lVar19 + 0x40);
                  dVar65 = *(double *)(lVar19 + 0x48);
                  dVar80 = *(double *)(lVar19 + 0x50);
                  dVar57 = *(double *)(lVar19 + 0x58);
                  dVar67 = dVar80 * dVar80 + dVar58 * dVar58;
                  dVar71 = dVar57 * dVar57 + dVar65 * dVar65;
                  auVar79._0_8_ = dVar67 + dVar71;
                  auVar79._8_8_ = dVar67 + dVar71;
                  uVar35 = -(ulonglong)(dVar46 <= auVar79._0_8_);
                  uVar43 = -(ulonglong)(dVar53 <= auVar79._8_8_);
                  auVar48._8_8_ = uVar43;
                  auVar48._0_8_ = uVar35;
                  auVar70 = sqrtpd(auVar79,auVar79);
                  auVar73 = divpd(auVar76,auVar70);
                  auVar82._0_8_ = auVar73._0_8_ * dVar80;
                  auVar82._8_8_ = auVar73._8_8_ * dVar57;
                  auVar70 = blendvpd(auVar63,auVar82,auVar48);
                  auVar75._0_8_ = (ulonglong)(dVar58 * auVar73._0_8_) & uVar35;
                  auVar75._8_8_ = (ulonglong)(dVar65 * auVar73._8_8_) & uVar43;
                  *(undefined1 (*) [16])(lVar29 + 0x10 + lVar24 * 0x130) = auVar75;
                  *(undefined1 (*) [16])(lVar29 + 0x20 + lVar24 * 0x130) = auVar70;
                  iVar14 = *(int *)(uVar27 + 8);
                }
                break;
              }
              iVar20 = *(int *)(lVar19 + 0x90);
            } while (iVar20 != -1);
          }
        }
        lVar26 = lVar26 + 1;
      } while (lVar26 < iVar14);
    }
    uStack_320 = (double)CONCAT44(uStack_320._4_4_,(undefined4)uStack_320);
    uStack_2c0 = (double)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0);
    local_2b8 = (double)CONCAT44(local_2b8._4_4_,(undefined4)local_2b8);
    if ((cVar11 != '\0') &&
       (uStack_320 = (double)CONCAT44(uStack_320._4_4_,(undefined4)uStack_320),
       uStack_2c0 = (double)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0),
       local_2b8 = (double)CONCAT44(local_2b8._4_4_,(undefined4)local_2b8),
       *(longlong *)(param_1 + 0x58) != 0)) {
      uVar35 = (ulonglong)(int)param_9[0x32];
      local_3d8 = uVar35;
      if (0 < (longlong)uVar35) {
        local_430 = param_8 + 0x10;
        local_3f8 = (uint *)(param_9 + 4);
        plVar17 = (longlong *)local_448._0_8_;
        do {
          lVar26 = uVar35 - 1;
          local_3d0 = lVar26 * 0x30;
          pdVar41 = (double *)(*plVar17 + local_3d0);
          pcVar38 = local_430;
          puVar39 = (undefined8 *)local_178;
          for (lVar24 = 0xc; lVar24 != 0; lVar24 = lVar24 + -1) {
            *puVar39 = *(undefined8 *)pcVar38;
            pcVar38 = pcVar38 + 8;
            puVar39 = puVar39 + 1;
          }
          local_3c8._0_8_ = lVar26;
          dVar46 = (double)((int)local_3d8 - (int)lVar26);
          local_148._0_8_ = (double)local_148._0_8_ * dVar46;
          local_158._0_8_ = dVar46 * (double)local_158._0_8_;
          local_158._8_8_ = (double)local_158._8_8_ * dVar46;
          local_148._8_8_ = 0;
          local_428 = uVar35;
          if ((*param_8 == '\x01') && (0 < *(int *)(pdVar41 + 1))) {
            lVar24 = 0x70;
            lVar26 = 0;
            do {
              dVar46 = *pdVar41;
              local_2c8 = 1.0;
              uStack_2c4 = 0;
              uStack_2c2 = 0x3f80;
              uStack_2c0._0_4_ = 1.0;
              uStack_2c0._4_4_ = 0x3f800000;
              if (param_8[1] == '\0') {
                fVar45 = 0.0;
                if (param_8[2] != '\0') {
                  local_2c8 = 0.0;
                  uStack_2c4 = 0;
                  uStack_2c2 = 0;
                  uStack_2c0._0_4_ = 0.0;
                  uStack_2c0._4_4_ = 0x3f800000;
                  fVar50 = *param_5 - param_5[1];
                  fVar45 = 0.0;
                  if (0.0 < fVar50) {
                    fVar45 = (*(float *)((longlong)dVar46 + 0x60 + lVar24) - param_5[1]) / fVar50;
                    if (1.0 <= fVar45) {
                      fVar45 = 1.0;
                    }
                    if (fVar45 <= 0.0) {
                      fVar45 = 0.0;
                    }
                    uStack_2c0._0_4_ = fVar45;
                  }
                }
              }
              else {
                local_2c8 = 0.0;
                uStack_2c4 = 0;
                uStack_2c2 = 0;
                uStack_2c0._0_4_ = 0.0;
                uStack_2c0._4_4_ = 0x3f800000;
                fVar50 = param_5[2] - param_5[3];
                fVar45 = 0.0;
                if (0.0 < fVar50) {
                  fVar45 = (*(float *)((longlong)dVar46 + 100 + lVar24) - param_5[3]) / fVar50;
                  if (1.0 <= fVar45) {
                    fVar45 = 1.0;
                  }
                  if (fVar45 <= 0.0) {
                    fVar45 = 0.0;
                  }
                  local_2c8 = fVar45;
                }
              }
              uStack_2c0._4_4_ = 0x3f800000;
              uStack_2c4 = 0;
              lVar19 = (longlong)*(int *)((longlong)dVar46 + -0x70 + lVar24);
              if (lVar19 != -1) {
                lVar19 = lVar19 * 0x130;
                pdVar81 = (double *)((longlong)dVar46 + 0x90 + lVar19);
                local_1e8[0] = *pdVar81;
                local_1e8[1] = pdVar81[1];
                local_1e8[2] = *(double *)((longlong)dVar46 + 0xa0 + lVar19);
                local_268 = *(undefined1 (*) [16])((longlong)dVar46 + 0x20 + lVar24);
                local_258._0_8_ = *(undefined8 *)((longlong)dVar46 + 0x30 + lVar24);
                local_490 = (longlong *)CONCAT44(local_490._4_4_,fVar45);
                local_498 = &local_2c8;
                FUN_14446764a(*(undefined8 *)(param_1 + 0x58),local_178,local_268,local_1e8);
              }
              if (param_8[3] == '\x01') {
                local_498 = (float *)((ulonglong)local_498 & 0xffffffff00000000);
                FUN_14446882c(*(undefined8 *)(param_1 + 0x58),local_178,(longlong)dVar46 + lVar24);
              }
              lVar26 = lVar26 + 1;
              lVar24 = lVar24 + 0x130;
            } while (lVar26 < *(int *)(pdVar41 + 1));
          }
          plVar42 = local_400;
          uVar35 = local_3c8._0_8_;
          if (param_8[4] == '\x01') {
            iVar14 = (int)param_9[7];
            local_468 = pdVar41;
            if (iVar14 == 0) {
              uVar35 = 1;
              auVar7._8_8_ = 0;
              auVar7._0_8_ = local_418._8_8_;
              local_418 = auVar7 << 0x40;
              iVar37 = 0;
              iVar20 = 0;
            }
            else {
              puVar18 = (uint *)param_9[6];
              if ((uint *)param_9[6] == (uint *)0x0) {
                puVar18 = local_3f8;
              }
              uVar13 = *puVar18;
              if (uVar13 == 0) {
                iVar20 = iVar14 + 0x1e;
                if (-1 < iVar14 + -1) {
                  iVar20 = iVar14 + -1;
                }
                uVar43 = 0;
                uVar35 = (ulonglong)(uint)(iVar20 >> 5);
                if (iVar20 >> 5 < 1) {
                  uVar35 = uVar43;
                }
                iVar37 = 0;
                do {
                  if (uVar35 == uVar43) goto LAB_144674d74;
                  iVar37 = iVar37 + 0x20;
                  uVar13 = puVar18[uVar43 + 1];
                  uVar43 = uVar43 + 1;
                } while (uVar13 == 0);
                local_418._0_8_ = uVar43;
              }
              else {
                auVar8._8_8_ = 0;
                auVar8._0_8_ = local_418._8_8_;
                local_418 = auVar8 << 0x40;
                iVar37 = 0;
              }
              uVar35 = (ulonglong)(-uVar13 & uVar13);
              uVar43 = uVar35 * 2 + 1;
              lVar26 = 0x3f;
              if (uVar43 != 0) {
                for (; uVar43 >> lVar26 == 0; lVar26 = lVar26 + -1) {
                }
              }
              iVar20 = (iVar37 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
              if (iVar14 <= iVar20) {
                iVar20 = iVar14;
              }
            }
            if (iVar20 < iVar14) {
              uVar13 = 0xffffffff;
              do {
                lVar26 = *plVar42;
                lVar24 = (longlong)iVar20 * 0xa0;
                uVar4 = local_3b8._0_8_;
                uVar27 = *(undefined8 *)(local_3b8._0_8_ + 0x58);
                if (*(char *)(lVar26 + 0x10 + lVar24) == '\x01') {
                  local_1e8[0] = 0.0;
                  local_1e8[1] = 0.0;
                  local_1e8[2] = 0.0;
                  uStack_1d0 = 0;
                  uStack_1cc = 0x3ff00000;
                  local_1c8 = *(undefined1 (*) [16])(lVar26 + 0x18 + lVar24);
                  local_1b8._8_8_ = 0;
                  local_1b8._0_8_ = *(ulonglong *)(lVar26 + 0x28 + lVar24);
                  local_1a8 = 0x3ff0000000000000;
                  uStack_1a0 = 0x3ff0000000000000;
                  local_198 = 0x3ff0000000000000;
                  uStack_190 = 0;
                  local_498 = (float *)CONCAT44(local_498._4_4_,*(undefined4 *)(param_8 + 0x70));
                  FUN_144467984(uVar27,local_178,local_1e8,&DAT_149e1dd24);
                  uVar27 = *(undefined8 *)(uVar4 + 0x58);
                  lVar26 = *plVar42;
                }
                local_498 = (float *)CONCAT44(local_498._4_4_,*(undefined4 *)(param_8 + 0x70));
                FUN_144467984(uVar27,local_178,
                              (longlong)*local_468 + (longlong)*(int *)(lVar26 + lVar24) * 0x130 +
                              0x70,&DAT_149e1dd14);
                auVar76 = local_418;
                uVar13 = uVar13 & ~(uint)uVar35;
                puVar18 = (uint *)param_9[6];
                if ((uint *)param_9[6] == (uint *)0x0) {
                  puVar18 = local_3f8;
                }
                iVar14 = (int)param_9[7];
                iVar20 = local_418._0_4_;
                lVar26 = (longlong)iVar20;
                uVar21 = puVar18[lVar26] & uVar13;
                plVar17 = (longlong *)local_448._0_8_;
                if (uVar21 == 0) {
                  iVar22 = iVar14 + 0x1e;
                  if (-1 < iVar14 + -1) {
                    iVar22 = iVar14 + -1;
                  }
                  iVar22 = iVar22 >> 5;
                  iVar23 = iVar22;
                  if (iVar22 < iVar20) {
                    iVar23 = iVar20;
                  }
                  if (iVar22 <= iVar20) break;
                  lVar24 = 0;
                  while( true ) {
                    iVar37 = iVar37 + 0x20;
                    uVar21 = puVar18[lVar26 + lVar24 + 1];
                    if (uVar21 != 0) break;
                    lVar24 = lVar24 + 1;
                    if (iVar23 - lVar26 == lVar24) goto LAB_144674d74;
                  }
                  local_418._4_4_ = 0;
                  local_418._0_4_ = iVar20 + (int)lVar24 + 1;
                  local_418._8_8_ = auVar76._8_8_;
                  uVar13 = 0xffffffff;
                }
                uVar35 = (ulonglong)(-uVar21 & uVar21);
                uVar43 = uVar35 * 2 + 1;
                lVar26 = 0x3f;
                if (uVar43 != 0) {
                  for (; uVar43 >> lVar26 == 0; lVar26 = lVar26 + -1) {
                  }
                }
                iVar20 = (iVar37 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
              } while (iVar20 < iVar14);
            }
LAB_144674d74:
            lVar26 = *plVar17;
            param_1 = local_3b8._0_8_;
            uVar35 = local_3c8._0_8_;
            if (0 < *(int *)(lVar26 + 0x18 + local_3d0)) {
              lVar24 = 0;
              lVar19 = 0;
              do {
                lVar30 = uVar35 * 0x30;
                lVar29 = *(longlong *)(lVar26 + 0x10 + lVar30);
                lVar26 = *(longlong *)(lVar26 + 0x20 + lVar30);
                pauVar1 = (undefined1 (*) [16])(lVar29 + 0x20 + lVar24 * 4);
                local_268 = *pauVar1;
                dVar46 = *(double *)(lVar29 + 0x30 + lVar24 * 4);
                local_1e8[1] = *(double *)(lVar29 + 0x28 + lVar24 * 4) +
                               *(double *)(lVar26 + 8 + lVar24);
                local_1e8[2] = *(double *)(lVar26 + 0x10 + lVar24) + dVar46;
                local_1e8[0] = *(double *)(lVar26 + lVar24) + *(double *)*pauVar1;
                local_258._0_8_ = dVar46;
                local_498 = (float *)&DAT_149e1dd34;
                local_490 = (longlong *)((ulonglong)local_490 & 0xffffffff00000000);
                FUN_14446764a(*(undefined8 *)(param_1 + 0x58),local_178,local_268,local_1e8);
                lVar19 = lVar19 + 1;
                lVar26 = *plVar17;
                lVar24 = lVar24 + 0x18;
              } while (lVar19 < *(int *)(lVar26 + 0x18 + lVar30));
            }
          }
        } while (1 < (longlong)local_428);
      }
      iVar14 = (int)param_9[0x23];
      if ((iVar14 != 0 & param_8[5]) == 1) {
        pdVar41 = (double *)&DAT_14c846480;
        pdVar81 = local_1e8;
        for (lVar26 = 0xc; lVar26 != 0; lVar26 = lVar26 + -1) {
          *pdVar81 = *pdVar41;
          pdVar41 = pdVar41 + 1;
          pdVar81 = pdVar81 + 1;
        }
        iVar20 = (int)local_450[1];
        if (0 < iVar20) {
          lVar26 = 0;
          plVar17 = local_450;
          auVar76 = _DAT_149938800;
          auVar63 = _DAT_1499387d0;
          do {
            plVar42 = local_450;
            lVar24 = *plVar17;
            lVar19 = lVar26 * 0xa0;
            if ((((*(char *)(lVar24 + 0xc + lVar19) == '\x01') &&
                 (pbVar36 = (byte *)(lVar24 + lVar19),
                 (uint)*(ushort *)(pbVar36 + 6) < DAT_14c87eb08 + 1U)) &&
                (lVar29 = *(longlong *)(pbVar36 + 4), lVar29 != 0)) &&
               ((bVar12 = *pbVar36, bVar12 != 0 &&
                ((int)param_9[0x19] != *(int *)((longlong)param_9 + 0xf4))))) {
              uVar13 = (uint)((ulonglong)lVar29 >> 0x10);
              uVar21 = (uint)lVar29 & 0xffff;
              plVar17 = (longlong *)param_9[0x20];
              if ((longlong *)param_9[0x20] == (longlong *)0x0) {
                plVar17 = param_9 + 0x1f;
              }
              iVar14 = *(int *)((longlong)plVar17 +
                               (ulonglong)
                               ((int)param_9[0x21] - 1U &
                               (uint)bVar12 +
                               ((int)((ulonglong)lVar29 >> 0x20) + ((uint)lVar29 << 0x10 | uVar21) +
                                (uVar13 << 0x13 | uVar13 & 0xffff) + (uVar21 >> 4)) * 10) * 4);
              plVar17 = plVar42;
              if (iVar14 != -1) {
                do {
                  lVar30 = *local_470 + (longlong)iVar14 * 0x18;
                  if ((*(longlong *)(lVar30 + 4) == lVar29) &&
                     (*(byte *)(*local_470 + (longlong)iVar14 * 0x18) == bVar12)) {
                    if ((int *)(lVar30 + 0xc) != (int *)0x0 && lVar30 != 0) {
                      puVar39 = (undefined8 *)
                                (*param_9 + (longlong)*(int *)(lVar30 + 0xc) * 0x130 + 0x10);
                      puVar40 = (undefined8 *)local_178;
                      for (lVar29 = 0xc; lVar29 != 0; lVar29 = lVar29 + -1) {
                        *puVar40 = *puVar39;
                        puVar39 = puVar39 + 1;
                        puVar40 = puVar40 + 1;
                      }
                      auVar70 = *(undefined1 (*) [16])(lVar24 + 0x88 + lVar19);
                      dVar46 = *(double *)(lVar24 + 0x98 + lVar19);
                      auVar73 = divpd(auVar70,auVar63);
                      auVar55._8_8_ = 0;
                      auVar55._0_8_ = dVar46;
                      auVar56 = divpd(auVar55,auVar63);
                      auVar73 = roundpd(auVar73,auVar73,3);
                      auVar56 = roundpd(auVar56,auVar56,3);
                      dVar57 = (auVar70._0_8_ - auVar73._0_8_ * auVar63._0_8_) * auVar76._0_8_;
                      dVar67 = (auVar70._8_8_ - auVar73._8_8_ * auVar63._8_8_) * auVar76._8_8_;
                      dVar46 = (dVar46 - auVar56._0_8_ * auVar63._0_8_) * auVar76._0_8_;
                      dVar53 = (0.0 - auVar56._8_8_ * auVar63._8_8_) * auVar76._8_8_;
                      dVar58 = sin(dVar57);
                      dVar65 = sin(dVar67);
                      dVar80 = sin(dVar46);
                      sin(dVar53);
                      dVar57 = cos(dVar57);
                      dVar67 = cos(dVar67);
                      dVar46 = cos(dVar46);
                      cos(dVar53);
                      dVar60 = -(dVar67 * dVar58 * dVar80) + dVar65 * dVar57 * dVar46;
                      dVar52 = dVar65 * dVar58 * dVar80 + dVar67 * dVar57 * dVar46;
                      dVar71 = dVar58 * dVar65 * dVar46 - dVar57 * dVar67 * dVar80;
                      dVar80 = -(dVar58 * dVar67 * dVar46) - dVar57 * dVar65 * dVar80;
                      dVar46 = (double)local_178._0_8_ * dVar60;
                      dVar53 = (double)local_178._0_8_ * dVar80;
                      dVar58 = (double)local_178._0_8_ * dVar71;
                      dVar65 = dVar71 * (double)local_178._8_8_;
                      dVar57 = dVar80 * (double)local_178._8_8_;
                      dVar67 = dVar60 * (double)local_168;
                      local_178._0_8_ =
                           dVar80 * (double)local_168 * DAT_149931160 +
                           dVar60 * (double)local_178._8_8_ +
                           (double)local_178._0_8_ * dVar52 * 1.0 + dStack_160 * dVar71;
                      local_178._8_8_ =
                           dVar71 * (double)local_168 * DAT_149931160._8_8_ +
                           dVar52 * (double)local_178._8_8_ + dVar46 * -1.0 + dStack_160 * dVar80;
                      local_168 = (double *)
                                  (dVar52 * (double)local_168 * 1.0 +
                                  ((dVar53 * 1.0 + dStack_160 * dVar60) - dVar65));
                      dStack_160 = dVar67 * -1.0 + ((dVar58 * -1.0 + dStack_160 * dVar52) - dVar57);
                      local_498 = (float *)((ulonglong)local_498 & 0xffffffff00000000);
                      FUN_14446882c(*(undefined8 *)(param_1 + 0x58),local_1e8,local_178);
                      iVar20 = (int)plVar42[1];
                      auVar76 = _DAT_149938800;
                      auVar63 = _DAT_1499387d0;
                    }
                    break;
                  }
                  iVar14 = *(int *)(lVar30 + 0x10);
                } while (iVar14 != -1);
              }
            }
            lVar26 = lVar26 + 1;
          } while (lVar26 < iVar20);
          iVar14 = (int)param_9[0x23];
        }
        if (0 < iVar14) {
          lVar26 = 0;
          lVar24 = 0;
          do {
            auVar76 = _DAT_149934d80;
            lVar19 = *local_408;
            uVar35 = (ulonglong)*(byte *)(lVar19 + 0xb0 + lVar26);
            if ((&DAT_14bed14a8)[uVar35] == '\x01') {
              auVar63 = *(undefined1 (*) [16])(lVar19 + 0x30 + lVar26);
              puVar39 = (undefined8 *)(lVar19 + 0x40 + lVar26);
              pdVar81 = (double *)*puVar39;
              dVar80 = (double)puVar39[1];
              pdVar41 = (double *)(lVar19 + 0x30 + lVar26);
              dVar53 = *pdVar41;
              dVar46 = *pdVar41;
              pdVar41 = (double *)(lVar19 + 0x38 + lVar26);
              dVar65 = *pdVar41;
              dVar58 = *pdVar41;
              puVar39 = (undefined8 *)
                        (*param_9 + (longlong)*(int *)(lVar19 + 4 + lVar26) * 0x130 + 0x10);
              puVar40 = (undefined8 *)local_268;
              for (lVar29 = 0xc; lVar29 != 0; lVar29 = lVar29 + -1) {
                *puVar40 = *puVar39;
                puVar39 = puVar39 + 1;
                puVar40 = puVar40 + 1;
              }
              local_148 = ZEXT816(0);
              local_158 = ZEXT816(0);
              local_138 = _DAT_149934d80;
              local_128 = (double *)&DAT_3ff0000000000000;
              uStack_120 = 0;
              local_178 = auVar63;
              local_168 = pdVar81;
              dStack_160 = dVar80;
              FUN_144a2c3ca(local_178,&local_2c8,local_268);
              pdVar41 = (double *)(lVar19 + 0x10 + lVar26);
              dVar57 = *pdVar41;
              dVar67 = pdVar41[1];
              pdVar41 = (double *)(lVar19 + 0x20 + lVar26);
              dVar71 = *pdVar41;
              dVar60 = pdVar41[1];
              dVar52 = (double)CONCAT26(uStack_2c2,CONCAT24(uStack_2c4,local_2c8));
              dVar68 = (double)CONCAT26(uStack_2c2,CONCAT24(uStack_2c4,local_2c8));
              dVar72 = dVar57 * uStack_2c0;
              dVar78 = dVar67 * uStack_2c0;
              dVar64 = dVar71 * local_2b8;
              dVar51 = dVar67 * local_2b8 * -1.0 +
                       dVar71 * uStack_2c0 + dVar60 * dVar52 * 1.0 + dVar57 * dStack_2b0;
              uStack_2c0 = dVar57 * local_2b8 * 1.0 +
                           dVar60 * uStack_2c0 + dVar71 * dVar68 * -1.0 + dVar67 * dStack_2b0;
              local_2b8 = dVar60 * local_2b8 * 1.0 +
                          ((dVar52 * dVar67 * 1.0 + dStack_2b0 * dVar71) - dVar72);
              dStack_2b0 = dVar64 * -1.0 + ((dVar68 * dVar57 * -1.0 + dStack_2b0 * dVar60) - dVar78)
              ;
              local_2c8 = SUB84(dVar51,0);
              uStack_2c4 = (ushort)((ulonglong)dVar51 >> 0x20);
              uStack_2c2 = (ushort)((ulonglong)dVar51 >> 0x30);
              local_498._0_4_ = 0x3f800000;
              FUN_14446882c(*(undefined8 *)(param_1 + 0x58),local_1e8,&local_2c8);
              dVar57 = local_2b8 * -1.0;
              dVar67 = dStack_2b0 * 1.0;
              dVar71 = (double)CONCAT26(uStack_2c2,CONCAT24(uStack_2c4,local_2c8));
              dVar60 = (double)CONCAT26(uStack_2c2,CONCAT24(uStack_2c4,local_2c8));
              dVar68 = (double)local_268._8_8_ * dVar57 * -1.0 +
                       (((double)local_268._0_8_ * dVar67 - dVar71 * (double)local_258._8_8_ * 1.0)
                       - (double)local_258._0_8_ * uStack_2c0);
              dVar51 = (double)local_268._0_8_ * dVar57 * 1.0 +
                       (((double)local_268._8_8_ * dVar67 - dVar60 * (double)local_258._0_8_ * -1.0)
                       - (double)local_258._8_8_ * uStack_2c0);
              dVar52 = (double)local_258._8_8_ * dVar57 * 1.0 +
                       (double)local_268._0_8_ * uStack_2c0 +
                       (dVar67 * (double)local_258._0_8_ - dVar71 * (double)local_268._8_8_ * 1.0);
              dVar57 = (double)local_258._0_8_ * dVar57 * -1.0 +
                       (double)local_268._8_8_ * uStack_2c0 +
                       (dVar67 * (double)local_258._8_8_ - dVar60 * (double)local_268._0_8_ * -1.0);
              dVar72 = (double)pdVar81 * -1.0;
              dVar80 = dVar80 * 1.0;
              dVar67 = dVar51 * dVar72 * -1.0 +
                       ((dVar80 * dVar68 - dVar53 * dVar57 * 1.0) - dVar65 * dVar52);
              dVar64 = dVar68 * dVar72 * 1.0 +
                       ((dVar80 * dVar51 - dVar46 * dVar52 * -1.0) - dVar58 * dVar57);
              dVar53 = dVar57 * dVar72 * 1.0 +
                       dVar68 * dVar65 + (dVar80 * dVar52 - dVar53 * dVar51 * 1.0);
              dVar58 = dVar52 * dVar72 * -1.0 +
                       dVar51 * dVar58 + (dVar80 * dVar57 - dVar46 * dVar68 * -1.0);
              dVar80 = dVar64 * local_2b8 * -1.0 +
                       dVar71 * dVar58 * 1.0 + dStack_2b0 * dVar67 + uStack_2c0 * dVar53;
              dVar57 = dVar67 * local_2b8 * 1.0 +
                       dVar60 * dVar53 * -1.0 + dStack_2b0 * dVar64 + uStack_2c0 * dVar58;
              dVar46 = dVar58 * local_2b8 * 1.0 +
                       ((dVar71 * dVar64 * 1.0 + dStack_2b0 * dVar53) - dVar67 * uStack_2c0);
              dVar53 = dVar53 * local_2b8 * -1.0 +
                       ((dVar60 * dVar67 * -1.0 + dStack_2b0 * dVar58) - dVar64 * uStack_2c0);
              dVar58 = dVar46 * dVar46 + dVar80 * dVar80;
              dVar65 = dVar53 * dVar53 + dVar57 * dVar57;
              auVar62._0_8_ = dVar58 + dVar65;
              auVar62._8_8_ = dVar58 + dVar65;
              auVar49._8_8_ = -(ulonglong)(1e-08 <= auVar62._8_8_);
              auVar49._0_8_ = -(ulonglong)(1e-08 <= auVar62._0_8_);
              auVar63 = sqrtpd(auVar62,auVar62);
              auVar76 = divpd(auVar76,auVar63);
              auVar77._0_8_ = auVar76._0_8_ * dVar46;
              auVar77._8_8_ = auVar76._8_8_ * dVar53;
              local_258 = blendvpd(_DAT_149935300,auVar77,auVar49);
              local_268._8_8_ =
                   (ulonglong)(dVar57 * auVar76._8_8_) & -(ulonglong)(1e-08 <= auVar62._8_8_);
              local_268._0_8_ =
                   (ulonglong)(dVar80 * auVar76._0_8_) & -(ulonglong)(1e-08 <= auVar62._0_8_);
              local_248 = local_2a8;
              uStack_240 = uStack_2a0;
              local_238 = local_298;
              uStack_230 = 0;
              local_498 = (float *)CONCAT44(local_498._4_4_,0x3f800000);
              FUN_14446882c(*(undefined8 *)(param_1 + 0x58),local_1e8,local_268);
              dVar67 = local_2b8;
              dVar57 = uStack_2c0;
              puVar18 = (uint *)CONCAT26(uStack_2c2,CONCAT24(uStack_2c4,local_2c8));
              local_3b8._8_4_ = (undefined4)local_2b8;
              local_3b8._0_8_ = uStack_2c0;
              dVar46 = (double)puVar18 * 0.0 - uStack_2c0 * 1.0;
              dVar53 = uStack_2c0 * 0.0 - local_2b8 * 0.0;
              dStack_3f0 = dStack_2b0;
              dVar58 = local_2b8 * 1.0 - (double)puVar18 * 0.0;
              dStack_460 = dStack_2b0 * 0.0 - dStack_2b0 * 0.0;
              dVar53 = dVar53 + dVar53;
              dVar58 = dVar58 + dVar58;
              dVar46 = dVar46 + dVar46;
              dStack_460 = dStack_460 + dStack_460;
              pdVar41 = (double *)
                        (dVar46 * dStack_2b0 + 0.0 +
                        (dVar58 * (double)puVar18 - dVar53 * uStack_2c0));
              dVar65 = (dVar46 * uStack_2c0 - dVar58 * local_2b8) + dStack_2b0 * dVar53 + 1.0;
              dVar80 = (local_2b8 * dVar53 - (double)puVar18 * dVar46) + dStack_2b0 * dVar58 + 0.0;
              uVar16 = (undefined4)((ulonglong)dVar80 >> 0x20);
              dVar58 = local_2b8 * 0.0;
              dVar53 = (double)puVar18 * 1.0 - uStack_2c0 * 0.0;
              dVar71 = uStack_2c0 * 0.0 - local_2b8 * 1.0;
              dVar60 = dVar58 - (double)puVar18 * 0.0;
              dVar71 = dVar71 + dVar71;
              dVar60 = dVar60 + dVar60;
              dVar53 = dVar53 + dVar53;
              local_3b8._12_4_ = local_2b8._4_4_;
              local_418._8_4_ = SUB84(dStack_2b0,0);
              local_418._0_8_ = dStack_2b0;
              local_418._12_4_ = (int)((ulonglong)dStack_2b0 >> 0x20);
              pdVar81 = (double *)
                        (dVar53 * dStack_2b0 + 0.0 +
                        (dVar60 * (double)puVar18 - dVar71 * uStack_2c0));
              dVar46 = (dVar53 * uStack_2c0 - dVar60 * local_2b8) + dStack_2b0 * dVar71 + 0.0;
              dVar53 = (local_2b8 * dVar71 - (double)puVar18 * dVar53) + dStack_2b0 * dVar60 + 1.0;
              uVar15 = (undefined4)((ulonglong)dVar53 >> 0x20);
              bVar12 = *(byte *)(lVar19 + 0x90 + lVar26);
              local_468 = pdVar41;
              local_3f8 = puVar18;
              if ((bVar12 & 1) != 0) {
                local_178._8_4_ = SUB84(dVar53,0);
                local_178._0_8_ = dVar46;
                local_178._12_4_ = uVar15;
                dStack_160 = 0.0;
                local_158._8_8_ = (double)pdVar41 * dVar46 - (double)pdVar81 * dVar65;
                local_158._0_8_ = dVar80 * (double)pdVar81 - dVar53 * (double)pdVar41;
                local_148._8_8_ = 0;
                local_148._0_8_ = dVar65 * dVar53 - dVar46 * dVar80;
                local_138._8_4_ = SUB84(dVar80,0);
                local_138._0_8_ = dVar65;
                local_138._12_4_ = uVar16;
                uStack_120 = 0;
                local_118 = local_2a8;
                uStack_110 = uStack_2a0;
                local_108 = local_298;
                local_100 = 0x3ff0000000000000;
                local_168 = pdVar81;
                local_128 = pdVar41;
                FUN_1448ac920(&local_328,local_178);
                dVar51 = dVar65 * 0.0;
                dVar60 = dVar80 * 0.0;
                dVar64 = (double)pdVar41 * 0.0;
                auVar6._8_4_ = (undefined4)uStack_320;
                auVar6._0_8_ = local_328;
                auVar6._12_4_ = uStack_320._4_4_;
                dVar71 = auVar6._8_8_;
                dVar72 = dVar51 * (double)local_328;
                local_448._8_4_ = SUB84(dVar80,0);
                local_448._0_8_ = dVar65;
                local_448._12_4_ = uVar16;
                dVar52 = dVar60 * (double)local_328;
                dVar80 = (double)local_328 * dVar64;
                dVar68 = (double)local_318._8_8_ * dVar64;
                local_328 = (undefined8 *)
                            (dVar71 * dVar64 * -1.0 +
                            (double)local_318._0_8_ * dVar60 +
                            dVar51 * (double)local_318._8_8_ * 1.0 + (double)local_328);
                uStack_320 = dVar80 * 1.0 +
                             (double)local_318._8_8_ * dVar60 +
                             dVar51 * (double)local_318._0_8_ * -1.0 + dVar71;
                dVar80 = (double)local_448._8_8_;
                local_318._8_8_ =
                     (double)local_318._0_8_ * dVar64 * -1.0 +
                     ((dVar72 * -1.0 + (double)local_318._8_8_) - dVar60 * dVar71);
                local_318._0_8_ =
                     dVar68 * 1.0 + ((dVar51 * dVar71 * 1.0 + (double)local_318._0_8_) - dVar52);
                local_2e8 = 0x403e000000000000;
                uStack_2e0 = 0x403e000000000000;
                local_2d8 = 0x403e000000000000;
                uStack_2d0 = 0;
                uVar27 = *(undefined8 *)(param_1 + 0x58);
                local_478 = (**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0x670) + 0x2f0))();
                local_480 = &DAT_149e1dd34;
                local_488 = (longlong *)((ulonglong)local_488 & 0xffffffffffffff00);
                local_490 = (longlong *)CONCAT44(local_490._4_4_,0x18);
                local_498 = (float *)((ulonglong)local_498 & 0xffffffff00000000);
                FUN_14446a7e0(uVar27,local_1e8,&local_328,(float)*(double *)(lVar19 + 0x98 + lVar26)
                             );
                bVar12 = *(byte *)(lVar19 + 0x90 + lVar26);
              }
              dVar71 = (double)puVar18 * 0.0 - local_3b8._0_8_ * 0.0;
              dVar60 = dVar57 * 1.0 - local_3b8._8_8_ * 0.0;
              dVar58 = dVar58 - (double)local_3f8 * 1.0;
              dVar60 = dVar60 + dVar60;
              dVar58 = dVar58 + dVar58;
              dVar71 = dVar71 + dVar71;
              pdVar41 = (double *)
                        (dVar71 * local_418._0_8_ + 1.0 +
                        (dVar58 * (double)puVar18 - dVar60 * local_3b8._0_8_));
              dVar57 = (dVar71 * dVar57 - dVar58 * local_3b8._8_8_) + local_418._0_8_ * dVar60 + 0.0
              ;
              dVar58 = (dVar67 * dVar60 - (double)puVar18 * dVar71) + local_418._8_8_ * dVar58 + 0.0
              ;
              uVar16 = (undefined4)((ulonglong)dVar58 >> 0x20);
              if ((bVar12 & 2) != 0) {
                local_178._8_4_ = SUB84(dVar58,0);
                local_178._0_8_ = dVar57;
                local_178._12_4_ = uVar16;
                dStack_160 = 0.0;
                local_158._8_8_ = (double)pdVar81 * dVar57 - (double)pdVar41 * dVar46;
                local_158._0_8_ = dVar53 * (double)pdVar41 - dVar58 * (double)pdVar81;
                local_148._8_8_ = 0;
                local_148._0_8_ = dVar46 * dVar58 - dVar57 * dVar53;
                local_138._8_4_ = SUB84(dVar53,0);
                local_138._0_8_ = dVar46;
                local_138._12_4_ = uVar15;
                uStack_120 = 0;
                local_118 = local_2a8;
                uStack_110 = uStack_2a0;
                local_108 = local_298;
                local_100 = 0x3ff0000000000000;
                local_168 = pdVar41;
                local_128 = pdVar81;
                FUN_1448ac920(&local_328,local_178);
                dVar46 = dVar46 * 0.0;
                dVar53 = dVar53 * 0.0;
                dVar64 = (double)pdVar81 * 0.0;
                dVar68 = dVar46 * uStack_320;
                dVar51 = dVar46 * (double)local_328;
                dVar67 = dVar53 * (double)local_328;
                dVar71 = dVar53 * uStack_320;
                dVar60 = (double)local_328 * dVar64;
                dVar52 = (double)local_318._0_8_ * dVar64;
                local_328 = (undefined8 *)
                            (uStack_320 * dVar64 * -1.0 +
                            (double)local_318._0_8_ * dVar53 +
                            dVar46 * (double)local_318._8_8_ * 1.0 + (double)local_328);
                uStack_320 = dVar60 * 1.0 +
                             (double)local_318._8_8_ * dVar53 +
                             dVar46 * (double)local_318._0_8_ * -1.0 + uStack_320;
                local_318._0_8_ =
                     (double)local_318._8_8_ * dVar64 * 1.0 +
                     ((dVar68 * 1.0 + (double)local_318._0_8_) - dVar67);
                local_318._8_8_ =
                     dVar52 * -1.0 + ((dVar51 * -1.0 + (double)local_318._8_8_) - dVar71);
                local_2e8 = 0x403e000000000000;
                uStack_2e0 = 0x403e000000000000;
                local_2d8 = 0x403e000000000000;
                uStack_2d0 = 0;
                uVar27 = *(undefined8 *)(param_1 + 0x58);
                local_478 = (**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0x680) + 0x2f0))();
                local_480 = &DAT_149e1dd14;
                local_488 = (longlong *)((ulonglong)local_488 & 0xffffffffffffff00);
                local_490 = (longlong *)CONCAT44(local_490._4_4_,0x18);
                local_498 = (float *)((ulonglong)local_498 & 0xffffffff00000000);
                FUN_14446a7e0(uVar27,local_1e8,&local_328,(float)*(double *)(lVar19 + 0xa0 + lVar26)
                             );
                bVar12 = *(byte *)(lVar19 + 0x90 + lVar26);
              }
              if ((bVar12 & 4) != 0) {
                local_178._8_4_ = SUB84(dVar80,0);
                local_178._0_8_ = dVar65;
                local_178._12_4_ = (int)((ulonglong)dVar80 >> 0x20);
                local_168 = local_468;
                dStack_160 = 0.0;
                local_158._8_8_ = (double)pdVar41 * dVar65 - (double)local_468 * dVar57;
                local_158._0_8_ = dVar58 * (double)local_468 - dVar80 * (double)pdVar41;
                local_148._8_8_ = 0;
                local_148._0_8_ = dVar57 * dVar80 - dVar65 * dVar58;
                local_138._8_4_ = SUB84(dVar58,0);
                local_138._0_8_ = dVar57;
                local_138._12_4_ = uVar16;
                uStack_120 = 0;
                local_118 = local_2a8;
                uStack_110 = uStack_2a0;
                local_108 = local_298;
                local_100 = 0x3ff0000000000000;
                local_128 = pdVar41;
                FUN_1448ac920(&local_328,local_178);
                dVar57 = dVar57 * 0.0;
                dVar58 = dVar58 * 0.0;
                dVar67 = (double)pdVar41 * 0.0;
                dVar65 = dVar57 * uStack_320;
                dVar80 = dVar57 * (double)local_328;
                dVar71 = dVar58 * (double)local_328;
                dVar60 = dVar58 * uStack_320;
                dVar46 = (double)local_328 * dVar67;
                dVar53 = (double)local_318._0_8_ * dVar67;
                local_328 = (undefined8 *)
                            (uStack_320 * dVar67 * -1.0 +
                            (double)local_318._0_8_ * dVar58 +
                            dVar57 * (double)local_318._8_8_ * 1.0 + (double)local_328);
                uStack_320 = dVar46 * 1.0 +
                             (double)local_318._8_8_ * dVar58 +
                             dVar57 * (double)local_318._0_8_ * -1.0 + uStack_320;
                local_318._0_8_ =
                     (double)local_318._8_8_ * dVar67 * 1.0 +
                     ((dVar65 * 1.0 + (double)local_318._0_8_) - dVar71);
                local_318._8_8_ =
                     dVar53 * -1.0 + ((dVar80 * -1.0 + (double)local_318._8_8_) - dVar60);
                local_2e8 = 0x403e000000000000;
                uStack_2e0 = 0x403e000000000000;
                local_2d8 = 0x403e000000000000;
                uStack_2d0 = 0;
                uVar27 = *(undefined8 *)(param_1 + 0x58);
                local_478 = (**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0x690) + 0x2f0))();
                local_480 = &DAT_149e1dd04;
                local_488 = (longlong *)((ulonglong)local_488 & 0xffffffffffffff00);
                local_490 = (longlong *)CONCAT44(local_490._4_4_,0x18);
                local_498 = (float *)((ulonglong)local_498 & 0xffffffff00000000);
                FUN_14446a7e0(uVar27,local_1e8,&local_328,(float)*(double *)(lVar19 + 0xa8 + lVar26)
                             );
              }
              lVar19 = *local_408;
              uVar35 = (ulonglong)*(byte *)(lVar19 + 0xb0 + lVar26);
            }
            if ((&DAT_14bed14ab)[uVar35] == '\x01') {
              lVar29 = *param_9;
              puVar39 = (undefined8 *)
                        (lVar29 + (longlong)*(int *)(lVar19 + 4 + lVar26) * 0x130 + 0x10);
              puVar40 = (undefined8 *)local_178;
              for (lVar30 = 0xc; lVar30 != 0; lVar30 = lVar30 + -1) {
                *puVar40 = *puVar39;
                puVar39 = puVar39 + 1;
                puVar40 = puVar40 + 1;
              }
              puVar39 = (undefined8 *)(lVar29 + (longlong)*(int *)(lVar19 + lVar26) * 0x130 + 0x10);
              puVar40 = (undefined8 *)local_268;
              for (lVar30 = 0xc; lVar30 != 0; lVar30 = lVar30 + -1) {
                *puVar40 = *puVar39;
                puVar39 = puVar39 + 1;
                puVar40 = puVar40 + 1;
              }
              lVar30 = (longlong)*(int *)(lVar19 + 8 + lVar26) * 0x130;
              puVar39 = (undefined8 *)(lVar29 + 0x30 + lVar30);
              uVar4 = *puVar39;
              uVar5 = puVar39[1];
              uVar27 = *(undefined8 *)(lVar29 + 0x40 + lVar30);
              if (*(char *)(lVar19 + 0xc + lVar26) == '\x01') {
                FUN_1498914a8(lVar19 + lVar26,&local_2c8,local_178,local_268);
              }
              else {
                local_2b8 = *(double *)(lVar19 + 0x20 + lVar26);
                puVar39 = (undefined8 *)(lVar19 + 0x10 + lVar26);
                uVar3 = *puVar39;
                uStack_2c0 = (double)puVar39[1];
                local_2c8 = (float)uVar3;
                uStack_2c4 = (ushort)((ulonglong)uVar3 >> 0x20);
                uStack_2c2 = (ushort)((ulonglong)uVar3 >> 0x30);
              }
              local_338 = (undefined8 *)0x0;
              uVar3 = local_158._0_8_;
              uVar9 = local_158._8_8_;
              uVar10 = local_148._0_8_;
              uStack_330 = 1;
              uStack_32c = 0;
              FUN_1403e3958(&local_338,0);
              uVar13 = uStack_330;
              *local_338 = uVar3;
              local_338[1] = uVar9;
              local_338[2] = uVar10;
              lVar19 = (longlong)(int)uStack_330;
              uStack_330 = uStack_330 + 1;
              if (uStack_32c < uStack_330) {
                FUN_1403e3958(&local_338,uVar13);
              }
              uVar13 = uStack_330;
              local_338[lVar19 * 3] = uVar4;
              (local_338 + lVar19 * 3)[1] = uVar5;
              local_338[lVar19 * 3 + 2] = uVar27;
              lVar19 = (longlong)(int)uStack_330;
              uStack_330 = uStack_330 + 1;
              if (uStack_32c < uStack_330) {
                FUN_1403e3958(&local_338,uVar13);
              }
              uVar13 = uStack_330;
              local_338[lVar19 * 3] = uVar4;
              (local_338 + lVar19 * 3)[1] = uVar5;
              local_338[lVar19 * 3 + 2] = uVar27;
              lVar19 = (longlong)(int)uStack_330;
              uStack_330 = uStack_330 + 1;
              uVar21 = uStack_330;
              if (uStack_32c < uStack_330) {
                FUN_1403e3958(&local_338,uVar13);
                uVar21 = uStack_330;
              }
              local_338[lVar19 * 3 + 2] = local_2b8;
              local_338[lVar19 * 3] = CONCAT26(uStack_2c2,CONCAT24(uStack_2c4,local_2c8));
              (local_338 + lVar19 * 3)[1] = uStack_2c0;
              uStack_330 = uVar21 + 1;
              uVar13 = uStack_330;
              dVar46 = uStack_320;
              if (uStack_32c < uStack_330) {
                FUN_1403e3958(&local_338,uVar21);
                uVar13 = uStack_330;
                dVar46 = uStack_320;
              }
              auVar76 = local_158;
              uStack_320._4_4_ = (undefined4)((ulonglong)dVar46 >> 0x20);
              local_338[(longlong)(int)uVar21 * 3 + 2] = local_2b8;
              local_338[(longlong)(int)uVar21 * 3] =
                   CONCAT26(uStack_2c2,CONCAT24(uStack_2c4,local_2c8));
              (local_338 + (longlong)(int)uVar21 * 3)[1] = uStack_2c0;
              uVar27 = local_148._0_8_;
              _uStack_330 = CONCAT44(uStack_32c,uVar13 + 1);
              if (uStack_32c < uVar13 + 1) {
                uStack_320 = dVar46;
                FUN_1403e3958(&local_338,uVar13);
              }
              *(undefined1 (*) [16])(local_338 + (longlong)(int)uVar13 * 3) = auVar76;
              local_338[(longlong)(int)uVar13 * 3 + 2] = uVar27;
              local_328 = local_338;
              uStack_320._0_4_ = uStack_330;
              local_498 = (float *)CONCAT44(local_498._4_4_,0x3f99999a);
              FUN_144467784(*(undefined8 *)(param_1 + 0x58),local_1e8,&local_328,&DAT_149e1dcd8);
              local_328 = local_248;
              uStack_320._0_4_ = (undefined4)uStack_240;
              uStack_320._4_4_ = (undefined4)((ulonglong)uStack_240 >> 0x20);
              local_318._0_8_ = local_238;
              local_490 = (longlong *)CONCAT44(local_490._4_4_,0x3f99999a);
              local_498 = (float *)&DAT_149e1dd34;
              FUN_14446764a(*(undefined8 *)(param_1 + 0x58),local_1e8,&local_328,&local_2c8);
              if (local_338 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
            }
            lVar24 = lVar24 + 1;
            lVar26 = lVar26 + 0xc0;
          } while (lVar24 < (int)param_9[0x23]);
        }
      }
    }
  }
  if (0 < (int)param_9[1]) {
    uVar35 = 0;
    do {
      lVar26 = local_420;
      if ((int)param_9[0xf] != *(int *)((longlong)param_9 + 0xa4)) {
        plVar17 = (longlong *)param_9[0x16];
        if ((longlong *)param_9[0x16] == (longlong *)0x0) {
          plVar17 = param_9 + 0x15;
        }
        uVar13 = *(uint *)((longlong)plVar17 +
                          (ulonglong)((uint)uVar35 & (int)param_9[0x17] + 0x7fffffffU) * 4);
        if (uVar13 != 0xffffffff) {
          do {
            puVar18 = (uint *)(*(longlong *)local_3e8 + (longlong)(int)uVar13 * 0x18);
            if (uVar35 == *puVar18) goto LAB_144673bc5;
            uVar13 = puVar18[4];
          } while (uVar13 != 0xffffffff);
        }
      }
      puVar18 = (uint *)0x0;
LAB_144673bc5:
      puVar25 = puVar18 + 1;
      if (puVar18 == (uint *)0x0) {
        puVar25 = (uint *)0x0;
      }
      puVar39 = (undefined8 *)(*param_9 + uVar35 * 0x130 + 0x10);
      puVar40 = local_398;
      for (lVar24 = 0xc; lVar24 != 0; lVar24 = lVar24 + -1) {
        *puVar40 = *puVar39;
        puVar39 = puVar39 + 1;
        puVar40 = puVar40 + 1;
      }
      local_3a0 = puVar25[2];
      local_3a8 = *(undefined8 *)puVar25;
      puVar39 = local_398;
      puVar40 = (undefined8 *)local_178;
      for (lVar24 = 0xc; lVar24 != 0; lVar24 = lVar24 + -1) {
        *puVar40 = *puVar39;
        puVar39 = puVar39 + 1;
        puVar40 = puVar40 + 1;
      }
      uVar13 = FUN_140813180(local_420,&local_3a8);
      if ((((-1 < (int)uVar13) && ((int)uVar13 < *(int *)(lVar26 + 0xc0))) &&
          (lVar24 = *(longlong *)(*(longlong *)(lVar26 + 0xb8) + (ulonglong)uVar13 * 8), lVar24 != 0
          )) && (((bVar12 = *(byte *)(lVar24 + 0x10), bVar12 - 1 < 2 || (bVar12 == 0x80)) ||
                 ((bVar12 < 0x21 && ((0x100010010U >> ((ulonglong)bVar12 & 0x3f) & 1) != 0)))))) {
        local_480 = (undefined *)((ulonglong)local_480 & 0xffffffffffffff00);
        local_488 = (longlong *)((ulonglong)local_488 & 0xffffffffffffff00);
        local_490 = (longlong *)((ulonglong)local_490 & 0xffffffffffffff00);
        local_498 = (float *)CONCAT71(local_498._1_7_,param_7);
        FUN_140122d4e(lVar26,lVar24,local_178,3);
      }
      uVar35 = uVar35 + 1;
    } while ((longlong)uVar35 < (longlong)(int)param_9[1]);
  }
LAB_144673caf:
  if ((local_f0 ^ (ulonglong)auStack_4b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14467708a FUN_14467708a body=842 status=ok
// SIG undefined FUN_14467708a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14467708a(void)

{
  char cVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **local_60;
  undefined8 uStack_58;
  undefined4 local_44;
  undefined *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = &PTR_FUN_14becf390;
  uStack_58 = 2;
  local_68 = 3;
  FUN_14282b410(L"/Script/FullBodyIK",0,0,&PTR_FUN_14becf3d0);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/FullBodyIK",0,0,&PTR_FUN_14becf7b0);
  FUN_1446f470e(&local_40,PTR_u_bool_14c764e60,1);
  FUN_1446f470e(&local_40,PTR_u_float_14c764e68,1);
  FUN_1446f470e(&local_40,PTR_u_double_14c764e70,1);
  FUN_1446f470e(&local_40,PTR_DAT_14c764e78,1);
  FUN_1446f470e(&local_40,PTR_u_int32_14c764e80,1);
  FUN_1446f470e(&local_40,PTR_u_int64_14c764e88,1);
  FUN_1446f470e(&local_40,PTR_u_uint8_14c764e90,1);
  FUN_1446f470e(&local_40,PTR_u_uint32_14c764e98,1);
  FUN_1446f470e(&local_40,PTR_u_uint64_14c764ea0,1);
  FUN_1446f470e(&local_40,PTR_u_FName_14c764ea8,1);
  FUN_1446f470e(&local_40,PTR_u_FString_14c764eb0,1);
  FUN_1446f470e(&local_40,PTR_u_FText_14c764eb8,1);
  FUN_1446f470e(&local_40,PTR_u_TArray<bool>_14c764ec0,1);
  FUN_1446f470e(&local_40,PTR_u_TArray<float>_14c764ec8,1);
  FUN_1446f470e(&local_40,PTR_u_TArray<double>_14c764ed0,1);
  FUN_1446f470e(&local_40,PTR_u_TArray<int32>_14c764ed8,1);
  FUN_1446f470e(&local_40,PTR_u_TArray<uint32>_14c764ee0,1);
  FUN_1446f470e(&local_40,PTR_u_TArray<uint8>_14c764ee8,1);
  FUN_1446f470e(&local_40,PTR_u_TArray<FName>_14c764ef0,1);
  FUN_1446f470e(&local_40,PTR_u_TArray<FString>_14c764ef8,1);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/FullBodyIK",0,0,&PTR_FUN_14becfb50);
  local_40 = (undefined *)0x800000014becfb78;
  local_44 = 10;
  local_38 = FUN_14577453c();
  local_34 = 1;
  FUN_14676b568(&local_40);
  local_40 = &DAT_14a19662d;
  local_38 = 4;
  local_34 = 0;
  FUN_14001a6c0(&local_40,1);
  FUN_1400b22c2(&local_40,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_40,&DAT_14cc2df9c);
  if (cVar1 == '\0') {
    _DAT_14cc2df9c = 0;
    uRam000000014cc2dfa4 = 0;
  }
  if (local_40 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/FullBodyIK",0,0,&PTR_FUN_14bed03e0);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446773d8 FUN_1446773d8 body=57 status=ok
// SIG undefined FUN_1446773d8(void)

void FUN_1446773d8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2e000 == 0) {
    uVar1 = FUN_14676bcfa();
    DAT_14cc2e000 = FUN_14171c317(FUN_14676bd2b,uVar1,L"EOodleNetworkEnableMode");
  }
  return;
}



// FUNCTION 144677412 FUN_144677412 body=10702 status=ok
// SIG undefined FUN_144677412(void)

void FUN_144677412(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  void *pvVar10;
  undefined4 uVar11;
  char cVar12;
  uint uVar13;
  undefined8 uVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auVar18 [16];
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auStack_1c8 [40];
  longlong *local_1a0;
  undefined1 local_198 [16];
  int local_180;
  undefined1 local_17a;
  undefined1 local_179;
  longlong local_178;
  longlong local_170;
  undefined1 local_162;
  undefined1 local_161;
  longlong local_160;
  longlong local_158;
  undefined1 local_14a;
  undefined1 local_149;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  undefined **local_128;
  undefined1 local_120 [160];
  void *local_80;
  int local_78;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_128 = &PTR_FUN_14bed1628;
  memset(local_120,0,0xa0);
  plVar15 = (longlong *)param_1[3];
  cVar12 = FUN_14989d566(param_1 + 4,&local_128);
  if ((cVar12 == '\0') && (*plVar15 != 0)) {
    local_138 = param_1[0x11] + param_1[0x10] + param_1[0x12];
    local_130 = param_1[0xc] + local_138 + param_1[0xf];
    lVar5 = param_1[7];
    local_140 = param_1[10];
    lVar16 = local_140 + param_1[8];
    lVar17 = lVar5 + local_140;
    lVar6 = param_1[9];
    local_140 = local_140 + lVar6;
    local_178 = param_1[0x15];
    lVar7 = param_1[0x16];
    lVar4 = lVar7 + local_178;
    lVar8 = param_1[0x17];
    lVar1 = lVar4 + lVar8;
    lVar2 = param_1[0x13] + lVar7;
    lVar3 = lVar2 + lVar8;
    local_148 = lVar8 + lVar7 + param_1[0x14];
    auVar18._8_4_ = (int)((ulonglong)lVar16 >> 0x20);
    auVar18._0_8_ = lVar16;
    auVar18._12_4_ = 0x45300000;
    auVar20._8_4_ = (int)((ulonglong)local_140 >> 0x20);
    auVar20._0_8_ = local_140;
    auVar20._12_4_ = 0x45300000;
    dVar19 = ((double)CONCAT44(0x43300000,(int)local_140) - 4503599627370496.0) +
             (auVar20._8_8_ - 1.9342813113834067e+25);
    auVar27._8_4_ = (int)((ulonglong)local_148 >> 0x20);
    auVar27._0_8_ = local_148;
    auVar27._12_4_ = 0x45300000;
    auVar24._8_4_ = (int)((ulonglong)lVar1 >> 0x20);
    auVar24._0_8_ = lVar1;
    auVar24._12_4_ = 0x45300000;
    dVar23 = ((double)CONCAT44(0x43300000,(int)lVar1) - 4503599627370496.0) +
             (auVar24._8_8_ - 1.9342813113834067e+25);
    local_149 = (undefined1)
                (int)((1.0 - (((double)CONCAT44(0x43300000,(int)lVar16) - 4503599627370496.0) +
                             (auVar18._8_8_ - 1.9342813113834067e+25)) / dVar19) * 100.0);
    local_14a = (undefined1)
                (int)((1.0 - (((double)CONCAT44(0x43300000,(int)local_148) - 4503599627370496.0) +
                             (auVar27._8_8_ - 1.9342813113834067e+25)) / dVar23) * 100.0);
    local_158 = lVar6 - param_1[8];
    local_160 = local_178 - param_1[0x14];
    auVar28._8_4_ = (int)((ulonglong)lVar17 >> 0x20);
    auVar28._0_8_ = lVar17;
    auVar28._12_4_ = 0x45300000;
    auVar29._8_4_ = (int)((ulonglong)lVar3 >> 0x20);
    auVar29._0_8_ = lVar3;
    auVar29._12_4_ = 0x45300000;
    local_161 = (undefined1)
                (int)((1.0 - (((double)CONCAT44(0x43300000,(int)lVar17) - 4503599627370496.0) +
                             (auVar28._8_8_ - 1.9342813113834067e+25)) / dVar19) * 100.0);
    local_162 = (undefined1)
                (int)((1.0 - (((double)CONCAT44(0x43300000,(int)lVar3) - 4503599627370496.0) +
                             (auVar29._8_8_ - 1.9342813113834067e+25)) / dVar23) * 100.0);
    local_170 = lVar6 - lVar5;
    local_178 = local_178 - param_1[0x13];
    auVar25._8_4_ = (int)((ulonglong)lVar5 >> 0x20);
    auVar25._0_8_ = lVar5;
    auVar25._12_4_ = 0x45300000;
    auVar21._8_4_ = (int)((ulonglong)lVar6 >> 0x20);
    auVar21._0_8_ = lVar6;
    auVar21._12_4_ = 0x45300000;
    auVar26._8_4_ = (int)((ulonglong)lVar2 >> 0x20);
    auVar26._0_8_ = lVar2;
    auVar26._12_4_ = 0x45300000;
    local_179 = (undefined1)
                (int)((1.0 - (((double)CONCAT44(0x43300000,(int)lVar5) - 4503599627370496.0) +
                             (auVar25._8_8_ - 1.9342813113834067e+25)) /
                             (((double)CONCAT44(0x43300000,(int)lVar6) - 4503599627370496.0) +
                             (auVar21._8_8_ - 1.9342813113834067e+25))) * 100.0);
    auVar22._8_4_ = (int)((ulonglong)lVar4 >> 0x20);
    auVar22._0_8_ = lVar4;
    auVar22._12_4_ = 0x45300000;
    local_17a = (undefined1)
                (int)((1.0 - (((double)CONCAT44(0x43300000,(int)lVar2) - 4503599627370496.0) +
                             (auVar26._8_8_ - 1.9342813113834067e+25)) /
                             (((double)CONCAT44(0x43300000,(int)lVar4) - 4503599627370496.0) +
                             (auVar22._8_8_ - 1.9342813113834067e+25))) * 100.0);
    local_180 = (int)param_1[0x18] - *(int *)((longlong)param_1 + 0xc4);
    local_1a0 = plVar15;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc2e038) {
      FUN_144b3d300(&DAT_14cc2e038);
      if (DAT_14cc2e038 == -1) {
        FUN_140056680(&DAT_14cc2e028,L"InCompressedNum");
        atexit((_func_5014 *)&LAB_144679de1);
        _Init_thread_footer(&DAT_14cc2e038);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc2e050) {
      FUN_144b3d300(&DAT_14cc2e050);
      if (DAT_14cc2e050 == -1) {
        FUN_140056680(&DAT_14cc2e040,L"InNotCompressedNum");
        atexit((_func_5014 *)&LAB_144679df2);
        _Init_thread_footer(&DAT_14cc2e050);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc2e068) {
      FUN_144b3d300(&DAT_14cc2e068);
      if (DAT_14cc2e068 == -1) {
        FUN_140056680(&DAT_14cc2e058,L"InCompressedWithOverheadLengthTotal");
        atexit((_func_5014 *)&LAB_144679e03);
        _Init_thread_footer(&DAT_14cc2e068);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc2e080) {
      FUN_144b3d300(&DAT_14cc2e080);
      if (DAT_14cc2e080 == -1) {
        FUN_140056680(&DAT_14cc2e070,L"InCompressedLengthTotal");
        atexit((_func_5014 *)&LAB_144679e14);
        _Init_thread_footer(&DAT_14cc2e080);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc2e098) {
      FUN_144b3d300(&DAT_14cc2e098);
      if (DAT_14cc2e098 == -1) {
        FUN_140056680(&DAT_14cc2e088,L"InDecompressedLengthTotal");
        atexit((_func_5014 *)&LAB_144679e25);
        _Init_thread_footer(&DAT_14cc2e098);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc2e0b0) {
      FUN_144b3d300(&DAT_14cc2e0b0);
      if (DAT_14cc2e0b0 == -1) {
        FUN_140056680(&DAT_14cc2e0a0,L"InNotCompressedLengthTotal");
        atexit((_func_5014 *)&LAB_144679e36);
        _Init_thread_footer(&DAT_14cc2e0b0);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc2e0c8) {
      FUN_144b3d300(&DAT_14cc2e0c8);
      if (DAT_14cc2e0c8 == -1) {
        FUN_140056680(&DAT_14cc2e0b8,L"OutCompressedNum");
        atexit((_func_5014 *)&LAB_144679e47);
        _Init_thread_footer(&DAT_14cc2e0c8);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc2e0e0) {
      FUN_144b3d300(&DAT_14cc2e0e0);
      if (DAT_14cc2e0e0 == -1) {
        FUN_140056680(&DAT_14cc2e0d0,L"OutNotCompressedFailedNum");
        atexit((_func_5014 *)&LAB_144679e58);
        _Init_thread_footer(&DAT_14cc2e0e0);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc2e0f8) {
      FUN_144b3d300(&DAT_14cc2e0f8);
      if (DAT_14cc2e0f8 == -1) {
        FUN_140056680(&DAT_14cc2e0e8,L"OutNotCompressedFailedAckOnlyNum");
        atexit((_func_5014 *)&LAB_144679e69);
        _Init_thread_footer(&DAT_14cc2e0f8);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc2e110) {
      FUN_144b3d300(&DAT_14cc2e110);
      if (DAT_14cc2e110 == -1) {
        FUN_140056680(&DAT_14cc2e100,L"OutNotCompressedFailedKeepAliveNum");
        atexit((_func_5014 *)&LAB_144679e7a);
        _Init_thread_footer(&DAT_14cc2e110);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc2e128) {
      FUN_144b3d300(&DAT_14cc2e128);
      if (DAT_14cc2e128 == -1) {
        FUN_140056680(&DAT_14cc2e118,L"OutNotCompressedBoundedNum");
        atexit((_func_5014 *)&LAB_144679e8b);
        _Init_thread_footer(&DAT_14cc2e128);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc2e140) {
      FUN_144b3d300(&DAT_14cc2e140);
      if (DAT_14cc2e140 == -1) {
        FUN_140056680(&DAT_14cc2e130,L"OutNotCompressedFlaggedNum");
        atexit((_func_5014 *)&LAB_144679e9c);
        _Init_thread_footer(&DAT_14cc2e140);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc2e158) {
      FUN_144b3d300(&DAT_14cc2e158);
      if (DAT_14cc2e158 == -1) {
        FUN_140056680(&DAT_14cc2e148,L"OutNotCompressedSkippedNum");
        atexit((_func_5014 *)&LAB_144679ead);
        _Init_thread_footer(&DAT_14cc2e158);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc2e170) {
      FUN_144b3d300(&DAT_14cc2e170);
      if (DAT_14cc2e170 == -1) {
        FUN_140056680(&DAT_14cc2e160,L"OutNotCompressedClientDisabledNum");
        atexit((_func_5014 *)&LAB_144679ebe);
        _Init_thread_footer(&DAT_14cc2e170);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc2e188) {
      FUN_144b3d300(&DAT_14cc2e188);
      if (DAT_14cc2e188 == -1) {
        FUN_140056680(&DAT_14cc2e178,L"OutNotCompressedTooSmallNum");
        atexit((_func_5014 *)&LAB_144679ecf);
        _Init_thread_footer(&DAT_14cc2e188);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc2e1a0) {
      FUN_144b3d300(&DAT_14cc2e1a0);
      if (DAT_14cc2e1a0 == -1) {
        FUN_140056680(&DAT_14cc2e190,L"OutCompressedWithOverheadLengthTotal");
        atexit((_func_5014 *)&LAB_144679ee0);
        _Init_thread_footer(&DAT_14cc2e1a0);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc2e1b8) {
      FUN_144b3d300(&DAT_14cc2e1b8);
      if (DAT_14cc2e1b8 == -1) {
        FUN_140056680(&DAT_14cc2e1a8,L"OutCompressedLengthTotal");
        atexit((_func_5014 *)&LAB_144679ef1);
        _Init_thread_footer(&DAT_14cc2e1b8);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc2e1d0) {
      FUN_144b3d300(&DAT_14cc2e1d0);
      if (DAT_14cc2e1d0 == -1) {
        FUN_140056680(&DAT_14cc2e1c0,L"OutBeforeCompressedLengthTotal");
        atexit((_func_5014 *)&LAB_144679f02);
        _Init_thread_footer(&DAT_14cc2e1d0);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc2e1e8) {
      FUN_144b3d300(&DAT_14cc2e1e8);
      if (DAT_14cc2e1e8 == -1) {
        FUN_140056680(&DAT_14cc2e1d8,L"OutNotCompressedFailedLengthTotal");
        atexit((_func_5014 *)&LAB_144679f13);
        _Init_thread_footer(&DAT_14cc2e1e8);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc2e200) {
      FUN_144b3d300(&DAT_14cc2e200);
      if (DAT_14cc2e200 == -1) {
        FUN_140056680(&DAT_14cc2e1f0,L"OutNotCompressedSkippedLengthTotal");
        atexit((_func_5014 *)&LAB_144679f24);
        _Init_thread_footer(&DAT_14cc2e200);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc2e218) {
      FUN_144b3d300(&DAT_14cc2e218);
      if (DAT_14cc2e218 == -1) {
        FUN_140056680(&DAT_14cc2e208,L"OutNotCompressedNumTotal");
        atexit((_func_5014 *)&LAB_144679f35);
        _Init_thread_footer(&DAT_14cc2e218);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc2e230) {
      FUN_144b3d300(&DAT_14cc2e230);
      if (DAT_14cc2e230 == -1) {
        FUN_140056680(&DAT_14cc2e220,L"OutPostLengthTotal");
        atexit((_func_5014 *)&LAB_144679f46);
        _Init_thread_footer(&DAT_14cc2e230);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc2e248) {
      FUN_144b3d300(&DAT_14cc2e248);
      if (DAT_14cc2e248 == -1) {
        FUN_140056680(&DAT_14cc2e238,L"InPostLengthTotal");
        atexit((_func_5014 *)&LAB_144679f57);
        _Init_thread_footer(&DAT_14cc2e248);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc2e260) {
      FUN_144b3d300(&DAT_14cc2e260);
      if (DAT_14cc2e260 == -1) {
        FUN_140056680(&DAT_14cc2e250,L"InSavingsPercentTotal");
        atexit((_func_5014 *)&LAB_144679f68);
        _Init_thread_footer(&DAT_14cc2e260);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc2e278) {
      FUN_144b3d300(&DAT_14cc2e278);
      if (DAT_14cc2e278 == -1) {
        FUN_140056680(&DAT_14cc2e268,L"OutSavingsPercentTotal");
        atexit((_func_5014 *)&LAB_144679f79);
        _Init_thread_footer(&DAT_14cc2e278);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc2e290) {
      FUN_144b3d300(&DAT_14cc2e290);
      if (DAT_14cc2e290 == -1) {
        FUN_140056680(&DAT_14cc2e280,L"InSavingsBytesTotal");
        atexit((_func_5014 *)&LAB_144679f8a);
        _Init_thread_footer(&DAT_14cc2e290);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc2e2a8) {
      FUN_144b3d300(&DAT_14cc2e2a8);
      if (DAT_14cc2e2a8 == -1) {
        FUN_140056680(&DAT_14cc2e298,L"OutSavingsBytesTotal");
        atexit((_func_5014 *)&LAB_144679f9b);
        _Init_thread_footer(&DAT_14cc2e2a8);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc2e2c0) {
      FUN_144b3d300(&DAT_14cc2e2c0);
      if (DAT_14cc2e2c0 == -1) {
        FUN_140056680(&DAT_14cc2e2b0,L"InSavingsWithOverheadPercentTotal");
        atexit((_func_5014 *)&LAB_144679fac);
        _Init_thread_footer(&DAT_14cc2e2c0);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc2e2d8) {
      FUN_144b3d300(&DAT_14cc2e2d8);
      if (DAT_14cc2e2d8 == -1) {
        FUN_140056680(&DAT_14cc2e2c8,L"OutSavingsWithOverheadPercentTotal");
        atexit((_func_5014 *)&LAB_144679fbd);
        _Init_thread_footer(&DAT_14cc2e2d8);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc2e2f0) {
      FUN_144b3d300(&DAT_14cc2e2f0);
      if (DAT_14cc2e2f0 == -1) {
        FUN_140056680(&DAT_14cc2e2e0,L"InSavingsWithOverheadBytesTotal");
        atexit((_func_5014 *)&LAB_144679fce);
        _Init_thread_footer(&DAT_14cc2e2f0);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc2e308) {
      FUN_144b3d300(&DAT_14cc2e308);
      if (DAT_14cc2e308 == -1) {
        FUN_140056680(&DAT_14cc2e2f8,L"OutSavingsWithOverheadBytesTotal");
        atexit((_func_5014 *)&LAB_144679fdf);
        _Init_thread_footer(&DAT_14cc2e308);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc2e320) {
      FUN_144b3d300(&DAT_14cc2e320);
      if (DAT_14cc2e320 == -1) {
        FUN_140056680(&DAT_14cc2e310,L"InAttemptedSavingsWithOverheadPercentTotal");
        atexit((_func_5014 *)&LAB_144679ff0);
        _Init_thread_footer(&DAT_14cc2e320);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc2e338) {
      FUN_144b3d300(&DAT_14cc2e338);
      if (DAT_14cc2e338 == -1) {
        FUN_140056680(&DAT_14cc2e328,L"OutAttemptedSavingsWithOverheadPercentTotal");
        atexit((_func_5014 *)&LAB_14467a001);
        _Init_thread_footer(&DAT_14cc2e338);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc2e350) {
      FUN_144b3d300(&DAT_14cc2e350);
      if (DAT_14cc2e350 == -1) {
        FUN_140056680(&DAT_14cc2e340,L"NumOodleNetworkHandlers");
        atexit((_func_5014 *)&LAB_14467a012);
        _Init_thread_footer(&DAT_14cc2e350);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc2e368) {
      FUN_144b3d300(&DAT_14cc2e368);
      if (DAT_14cc2e368 == -1) {
        FUN_140056680(&DAT_14cc2e358,L"NumOodleNetworkHandlersCompressionEnabled");
        atexit((_func_5014 *)&LAB_14467a023);
        _Init_thread_footer(&DAT_14cc2e368);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc2e380) {
      FUN_144b3d300(&DAT_14cc2e380);
      if (DAT_14cc2e380 == -1) {
        FUN_140056680(&DAT_14cc2e370,L"NumOodleNetworkHandlersCompressionDisabled");
        atexit((_func_5014 *)&LAB_14467a034);
        _Init_thread_footer(&DAT_14cc2e380);
      }
    }
    local_198 = (undefined1  [16])0x0;
    FUN_146b17e4e(0,0);
    local_198._8_4_ = 0;
    FUN_147087202(local_198,0x24);
    uVar11 = local_198._8_4_;
    lVar16 = (longlong)(int)local_198._8_4_;
    uVar13 = local_198._8_4_ + 1;
    local_198._8_4_ = uVar13;
    if ((uint)local_198._12_4_ < uVar13) {
      FUN_146b17dba(local_198,uVar11);
    }
    pvVar10 = DAT_14cc2e028;
    uVar14 = local_198._0_8_;
    local_80 = (void *)0x0;
    lVar17 = (longlong)DAT_14cc2e030;
    local_78 = DAT_14cc2e030;
    if (lVar17 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,DAT_14cc2e030,0);
      memcpy(local_80,pvVar10,lVar17 * 2);
    }
    FUN_146b17420(uVar14 + lVar16 * 0x30,&local_80,param_1 + 5);
    uVar11 = local_198._8_4_;
    lVar16 = (longlong)(int)local_198._8_4_;
    uVar13 = local_198._8_4_ + 1;
    local_198._8_4_ = uVar13;
    if ((uint)local_198._12_4_ < uVar13) {
      FUN_146b17dba(local_198,uVar11);
    }
    pvVar10 = DAT_14cc2e040;
    uVar14 = local_198._0_8_;
    local_80 = (void *)0x0;
    lVar17 = (longlong)DAT_14cc2e048;
    local_78 = DAT_14cc2e048;
    if (lVar17 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,DAT_14cc2e048,0);
      memcpy(local_80,pvVar10,lVar17 * 2);
    }
    FUN_146b17420(uVar14 + lVar16 * 0x30,&local_80,param_1 + 6);
    uVar11 = local_198._8_4_;
    lVar16 = (longlong)(int)local_198._8_4_;
    uVar13 = local_198._8_4_ + 1;
    local_198._8_4_ = uVar13;
    if ((uint)local_198._12_4_ < uVar13) {
      FUN_146b17dba(local_198,uVar11);
    }
    pvVar10 = DAT_14cc2e058;
    uVar14 = local_198._0_8_;
    local_80 = (void *)0x0;
    lVar17 = (longlong)DAT_14cc2e060;
    local_78 = DAT_14cc2e060;
    if (lVar17 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,DAT_14cc2e060,0);
      memcpy(local_80,pvVar10,lVar17 * 2);
    }
    FUN_146b17420(uVar14 + lVar16 * 0x30,&local_80,param_1 + 7);
    uVar11 = local_198._8_4_;
    lVar16 = (longlong)(int)local_198._8_4_;
    uVar13 = local_198._8_4_ + 1;
    local_198._8_4_ = uVar13;
    if ((uint)local_198._12_4_ < uVar13) {
      FUN_146b17dba(local_198,uVar11);
    }
    pvVar10 = DAT_14cc2e070;
    uVar14 = local_198._0_8_;
    local_80 = (void *)0x0;
    lVar17 = (longlong)DAT_14cc2e078;
    local_78 = DAT_14cc2e078;
    if (lVar17 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,DAT_14cc2e078,0);
      memcpy(local_80,pvVar10,lVar17 * 2);
    }
    FUN_146b17420(uVar14 + lVar16 * 0x30,&local_80,param_1 + 8);
    uVar11 = local_198._8_4_;
    lVar16 = (longlong)(int)local_198._8_4_;
    uVar13 = local_198._8_4_ + 1;
    local_198._8_4_ = uVar13;
    if ((uint)local_198._12_4_ < uVar13) {
      FUN_146b17dba(local_198,uVar11);
    }
    pvVar10 = DAT_14cc2e088;
    uVar14 = local_198._0_8_;
    local_80 = (void *)0x0;
    lVar17 = (longlong)DAT_14cc2e090;
    local_78 = DAT_14cc2e090;
    if (lVar17 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,DAT_14cc2e090,0);
      memcpy(local_80,pvVar10,lVar17 * 2);
    }
    FUN_146b17420(uVar14 + lVar16 * 0x30,&local_80,param_1 + 9);
    uVar11 = local_198._8_4_;
    lVar16 = (longlong)(int)local_198._8_4_;
    uVar13 = local_198._8_4_ + 1;
    local_198._8_4_ = uVar13;
    if ((uint)local_198._12_4_ < uVar13) {
      FUN_146b17dba(local_198,uVar11);
    }
    pvVar10 = DAT_14cc2e0a0;
    uVar14 = local_198._0_8_;
    local_80 = (void *)0x0;
    lVar17 = (longlong)DAT_14cc2e0a8;
    local_78 = DAT_14cc2e0a8;
    if (lVar17 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,DAT_14cc2e0a8,0);
      memcpy(local_80,pvVar10,lVar17 * 2);
    }
    FUN_146b17420(uVar14 + lVar16 * 0x30,&local_80,param_1 + 10);
    uVar11 = local_198._8_4_;
    lVar16 = (longlong)(int)local_198._8_4_;
    uVar13 = local_198._8_4_ + 1;
    local_198._8_4_ = uVar13;
    if ((uint)local_198._12_4_ < uVar13) {
      FUN_146b17dba(local_198,uVar11);
    }
    pvVar10 = DAT_14cc2e0b8;
    uVar14 = local_198._0_8_;
    local_80 = (void *)0x0;
    lVar17 = (longlong)DAT_14cc2e0c0;
    local_78 = DAT_14cc2e0c0;
    if (lVar17 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,DAT_14cc2e0c0,0);
      memcpy(local_80,pvVar10,lVar17 * 2);
    }
    FUN_146b17420(uVar14 + lVar16 * 0x30,&local_80,param_1 + 0xb);
    uVar11 = local_198._8_4_;
    lVar16 = (longlong)(int)local_198._8_4_;
    uVar13 = local_198._8_4_ + 1;
    local_198._8_4_ = uVar13;
    if ((uint)local_198._12_4_ < uVar13) {
      FUN_146b17dba(local_198,uVar11);
    }
    pvVar10 = DAT_14cc2e0d0;
    uVar14 = local_198._0_8_;
    local_80 = (void *)0x0;
    lVar17 = (longlong)DAT_14cc2e0d8;
    local_78 = DAT_14cc2e0d8;
    if (lVar17 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,DAT_14cc2e0d8,0);
      memcpy(local_80,pvVar10,lVar17 * 2);
    }
    FUN_146b17420(uVar14 + lVar16 * 0x30,&local_80,param_1 + 0xc);
    uVar11 = local_198._8_4_;
    lVar16 = (longlong)(int)local_198._8_4_;
    uVar13 = local_198._8_4_ + 1;
    local_198._8_4_ = uVar13;
    if ((uint)local_198._12_4_ < uVar13) {
      FUN_146b17dba(local_198,uVar11);
    }
    pvVar10 = DAT_14cc2e0e8;
    uVar14 = local_198._0_8_;
    local_80 = (void *)0x0;
    lVar17 = (longlong)DAT_14cc2e0f0;
    local_78 = DAT_14cc2e0f0;
    if (lVar17 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,DAT_14cc2e0f0,0);
      memcpy(local_80,pvVar10,lVar17 * 2);
    }
    FUN_146b17420(uVar14 + lVar16 * 0x30,&local_80,param_1 + 0xd);
    uVar11 = local_198._8_4_;
    lVar16 = (longlong)(int)local_198._8_4_;
    uVar13 = local_198._8_4_ + 1;
    local_198._8_4_ = uVar13;
    if ((uint)local_198._12_4_ < uVar13) {
      FUN_146b17dba(local_198,uVar11);
    }
    pvVar10 = DAT_14cc2e100;
    uVar14 = local_198._0_8_;
    local_80 = (void *)0x0;
    lVar17 = (longlong)DAT_14cc2e108;
    local_78 = DAT_14cc2e108;
    if (lVar17 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,DAT_14cc2e108,0);
      memcpy(local_80,pvVar10,lVar17 * 2);
    }
    FUN_146b17420(uVar14 + lVar16 * 0x30,&local_80,param_1 + 0xe);
    uVar11 = local_198._8_4_;
    lVar16 = (longlong)(int)local_198._8_4_;
    uVar13 = local_198._8_4_ + 1;
    local_198._8_4_ = uVar13;
    if ((uint)local_198._12_4_ < uVar13) {
      FUN_146b17dba(local_198,uVar11);
    }
    pvVar10 = DAT_14cc2e118;
    uVar14 = local_198._0_8_;
    local_80 = (void *)0x0;
    lVar17 = (longlong)DAT_14cc2e120;
    local_78 = DAT_14cc2e120;
    if (lVar17 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,DAT_14cc2e120,0);
      memcpy(local_80,pvVar10,lVar17 * 2);
    }
    FUN_146b17420(uVar14 + lVar16 * 0x30,&local_80,param_1 + 0xf);
    uVar11 = local_198._8_4_;
    lVar16 = (longlong)(int)local_198._8_4_;
    uVar13 = local_198._8_4_ + 1;
    local_198._8_4_ = uVar13;
    if ((uint)local_198._12_4_ < uVar13) {
      FUN_146b17dba(local_198,uVar11);
    }
    pvVar10 = DAT_14cc2e130;
    uVar14 = local_198._0_8_;
    local_80 = (void *)0x0;
    lVar17 = (longlong)DAT_14cc2e138;
    local_78 = DAT_14cc2e138;
    if (lVar17 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,DAT_14cc2e138,0);
      memcpy(local_80,pvVar10,lVar17 * 2);
    }
    FUN_146b17420(uVar14 + lVar16 * 0x30,&local_80,param_1 + 0x10);
    uVar11 = local_198._8_4_;
    lVar16 = (longlong)(int)local_198._8_4_;
    uVar13 = local_198._8_4_ + 1;
    local_198._8_4_ = uVar13;
    if ((uint)local_198._12_4_ < uVar13) {
      FUN_146b17dba(local_198,uVar11);
    }
    pvVar10 = DAT_14cc2e148;
    uVar14 = local_198._0_8_;
    local_80 = (void *)0x0;
    lVar17 = (longlong)DAT_14cc2e150;
    local_78 = DAT_14cc2e150;
    if (lVar17 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,DAT_14cc2e150,0);
      memcpy(local_80,pvVar10,lVar17 * 2);
    }
    FUN_146b17420(uVar14 + lVar16 * 0x30,&local_80,&local_138);
    uVar11 = local_198._8_4_;
    lVar16 = (longlong)(int)local_198._8_4_;
    uVar13 = local_198._8_4_ + 1;
    local_198._8_4_ = uVar13;
    if ((uint)local_198._12_4_ < uVar13) {
      FUN_146b17dba(local_198,uVar11);
    }
    pvVar10 = DAT_14cc2e160;
    uVar14 = local_198._0_8_;
    local_80 = (void *)0x0;
    lVar17 = (longlong)DAT_14cc2e168;
    local_78 = DAT_14cc2e168;
    if (lVar17 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,DAT_14cc2e168,0);
      memcpy(local_80,pvVar10,lVar17 * 2);
    }
    FUN_146b17420(uVar14 + lVar16 * 0x30,&local_80,param_1 + 0x11);
    uVar11 = local_198._8_4_;
    lVar16 = (longlong)(int)local_198._8_4_;
    uVar13 = local_198._8_4_ + 1;
    local_198._8_4_ = uVar13;
    if ((uint)local_198._12_4_ < uVar13) {
      FUN_146b17dba(local_198,uVar11);
    }
    pvVar10 = DAT_14cc2e178;
    uVar14 = local_198._0_8_;
    local_80 = (void *)0x0;
    lVar17 = (longlong)DAT_14cc2e180;
    local_78 = DAT_14cc2e180;
    if (lVar17 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,DAT_14cc2e180,0);
      memcpy(local_80,pvVar10,lVar17 * 2);
    }
    FUN_146b17420(uVar14 + lVar16 * 0x30,&local_80,param_1 + 0x12);
    uVar11 = local_198._8_4_;
    lVar16 = (longlong)(int)local_198._8_4_;
    uVar13 = local_198._8_4_ + 1;
    local_198._8_4_ = uVar13;
    if ((uint)local_198._12_4_ < uVar13) {
      FUN_146b17dba(local_198,uVar11);
    }
    pvVar10 = DAT_14cc2e190;
    uVar14 = local_198._0_8_;
    local_80 = (void *)0x0;
    lVar17 = (longlong)DAT_14cc2e198;
    local_78 = DAT_14cc2e198;
    if (lVar17 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,DAT_14cc2e198,0);
      memcpy(local_80,pvVar10,lVar17 * 2);
    }
    FUN_146b17420(uVar14 + lVar16 * 0x30,&local_80,param_1 + 0x13);
    uVar11 = local_198._8_4_;
    lVar16 = (longlong)(int)local_198._8_4_;
    uVar13 = local_198._8_4_ + 1;
    local_198._8_4_ = uVar13;
    if ((uint)local_198._12_4_ < uVar13) {
      FUN_146b17dba(local_198,uVar11);
    }
    pvVar10 = DAT_14cc2e1a8;
    uVar14 = local_198._0_8_;
    local_80 = (void *)0x0;
    lVar17 = (longlong)DAT_14cc2e1b0;
    local_78 = DAT_14cc2e1b0;
    if (lVar17 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,DAT_14cc2e1b0,0);
      memcpy(local_80,pvVar10,lVar17 * 2);
    }
    FUN_146b17420(uVar14 + lVar16 * 0x30,&local_80,param_1 + 0x14);
    uVar11 = local_198._8_4_;
    lVar16 = (longlong)(int)local_198._8_4_;
    uVar13 = local_198._8_4_ + 1;
    local_198._8_4_ = uVar13;
    if ((uint)local_198._12_4_ < uVar13) {
      FUN_146b17dba(local_198,uVar11);
    }
    pvVar10 = DAT_14cc2e1c0;
    uVar14 = local_198._0_8_;
    local_80 = (void *)0x0;
    lVar17 = (longlong)DAT_14cc2e1c8;
    local_78 = DAT_14cc2e1c8;
    if (lVar17 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,DAT_14cc2e1c8,0);
      memcpy(local_80,pvVar10,lVar17 * 2);
    }
    FUN_146b17420(uVar14 + lVar16 * 0x30,&local_80,param_1 + 0x15);
    uVar11 = local_198._8_4_;
    lVar16 = (longlong)(int)local_198._8_4_;
    uVar13 = local_198._8_4_ + 1;
    local_198._8_4_ = uVar13;
    if ((uint)local_198._12_4_ < uVar13) {
      FUN_146b17dba(local_198,uVar11);
    }
    pvVar10 = DAT_14cc2e1d8;
    uVar14 = local_198._0_8_;
    local_80 = (void *)0x0;
    lVar17 = (longlong)DAT_14cc2e1e0;
    local_78 = DAT_14cc2e1e0;
    if (lVar17 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,DAT_14cc2e1e0,0);
      memcpy(local_80,pvVar10,lVar17 * 2);
    }
    FUN_146b17420(uVar14 + lVar16 * 0x30,&local_80,param_1 + 0x16);
    uVar11 = local_198._8_4_;
    lVar16 = (longlong)(int)local_198._8_4_;
    uVar13 = local_198._8_4_ + 1;
    local_198._8_4_ = uVar13;
    if ((uint)local_198._12_4_ < uVar13) {
      FUN_146b17dba(local_198,uVar11);
    }
    pvVar10 = DAT_14cc2e1f0;
    uVar14 = local_198._0_8_;
    local_80 = (void *)0x0;
    lVar17 = (longlong)DAT_14cc2e1f8;
    local_78 = DAT_14cc2e1f8;
    if (lVar17 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,DAT_14cc2e1f8,0);
      memcpy(local_80,pvVar10,lVar17 * 2);
    }
    FUN_146b17420(uVar14 + lVar16 * 0x30,&local_80,param_1 + 0x17);
    uVar11 = local_198._8_4_;
    lVar16 = (longlong)(int)local_198._8_4_;
    uVar13 = local_198._8_4_ + 1;
    local_198._8_4_ = uVar13;
    if ((uint)local_198._12_4_ < uVar13) {
      FUN_146b17dba(local_198,uVar11);
    }
    pvVar10 = DAT_14cc2e208;
    uVar14 = local_198._0_8_;
    local_80 = (void *)0x0;
    lVar17 = (longlong)DAT_14cc2e210;
    local_78 = DAT_14cc2e210;
    if (lVar17 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,DAT_14cc2e210,0);
      memcpy(local_80,pvVar10,lVar17 * 2);
    }
    FUN_146b17420(uVar14 + lVar16 * 0x30,&local_80,&local_130);
    uVar11 = local_198._8_4_;
    lVar16 = (longlong)(int)local_198._8_4_;
    uVar13 = local_198._8_4_ + 1;
    local_198._8_4_ = uVar13;
    if ((uint)local_198._12_4_ < uVar13) {
      FUN_146b17dba(local_198,uVar11);
    }
    pvVar10 = DAT_14cc2e220;
    uVar14 = local_198._0_8_;
    local_80 = (void *)0x0;
    lVar17 = (longlong)DAT_14cc2e228;
    local_78 = DAT_14cc2e228;
    if (lVar17 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,DAT_14cc2e228,0);
      memcpy(local_80,pvVar10,lVar17 * 2);
    }
    FUN_146b17420(uVar14 + lVar16 * 0x30,&local_80,&local_148);
    uVar11 = local_198._8_4_;
    lVar16 = (longlong)(int)local_198._8_4_;
    uVar13 = local_198._8_4_ + 1;
    local_198._8_4_ = uVar13;
    if ((uint)local_198._12_4_ < uVar13) {
      FUN_146b17dba(local_198,uVar11);
    }
    pvVar10 = DAT_14cc2e238;
    uVar14 = local_198._0_8_;
    local_80 = (void *)0x0;
    lVar17 = (longlong)DAT_14cc2e240;
    local_78 = DAT_14cc2e240;
    if (lVar17 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,DAT_14cc2e240,0);
      memcpy(local_80,pvVar10,lVar17 * 2);
    }
    FUN_146b17420(uVar14 + lVar16 * 0x30,&local_80,&local_140);
    uVar11 = local_198._8_4_;
    lVar16 = (longlong)(int)local_198._8_4_;
    uVar13 = local_198._8_4_ + 1;
    local_198._8_4_ = uVar13;
    if ((uint)local_198._12_4_ < uVar13) {
      FUN_146b17dba(local_198,uVar11);
    }
    pvVar10 = DAT_14cc2e250;
    uVar14 = local_198._0_8_;
    local_80 = (void *)0x0;
    lVar17 = (longlong)DAT_14cc2e258;
    local_78 = DAT_14cc2e258;
    if (lVar17 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,DAT_14cc2e258,0);
      memcpy(local_80,pvVar10,lVar17 * 2);
    }
    FUN_14989e708(uVar14 + lVar16 * 0x30,&local_80,&local_149);
    uVar11 = local_198._8_4_;
    lVar16 = (longlong)(int)local_198._8_4_;
    uVar13 = local_198._8_4_ + 1;
    local_198._8_4_ = uVar13;
    if ((uint)local_198._12_4_ < uVar13) {
      FUN_146b17dba(local_198,uVar11);
    }
    pvVar10 = DAT_14cc2e268;
    uVar14 = local_198._0_8_;
    local_80 = (void *)0x0;
    lVar17 = (longlong)DAT_14cc2e270;
    local_78 = DAT_14cc2e270;
    if (lVar17 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,DAT_14cc2e270,0);
      memcpy(local_80,pvVar10,lVar17 * 2);
    }
    FUN_14989e708(uVar14 + lVar16 * 0x30,&local_80,&local_14a);
    uVar11 = local_198._8_4_;
    lVar16 = (longlong)(int)local_198._8_4_;
    uVar13 = local_198._8_4_ + 1;
    local_198._8_4_ = uVar13;
    if ((uint)local_198._12_4_ < uVar13) {
      FUN_146b17dba(local_198,uVar11);
    }
    pvVar10 = DAT_14cc2e280;
    uVar14 = local_198._0_8_;
    local_80 = (void *)0x0;
    lVar17 = (longlong)DAT_14cc2e288;
    local_78 = DAT_14cc2e288;
    if (lVar17 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,DAT_14cc2e288,0);
      memcpy(local_80,pvVar10,lVar17 * 2);
    }
    FUN_146b173ba(uVar14 + lVar16 * 0x30,&local_80,&local_158);
    uVar11 = local_198._8_4_;
    lVar16 = (longlong)(int)local_198._8_4_;
    uVar13 = local_198._8_4_ + 1;
    local_198._8_4_ = uVar13;
    if ((uint)local_198._12_4_ < uVar13) {
      FUN_146b17dba(local_198,uVar11);
    }
    pvVar10 = DAT_14cc2e298;
    uVar14 = local_198._0_8_;
    local_80 = (void *)0x0;
    lVar17 = (longlong)DAT_14cc2e2a0;
    local_78 = DAT_14cc2e2a0;
    if (lVar17 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,DAT_14cc2e2a0,0);
      memcpy(local_80,pvVar10,lVar17 * 2);
    }
    FUN_146b173ba(uVar14 + lVar16 * 0x30,&local_80,&local_160);
    uVar11 = local_198._8_4_;
    lVar16 = (longlong)(int)local_198._8_4_;
    uVar13 = local_198._8_4_ + 1;
    local_198._8_4_ = uVar13;
    if ((uint)local_198._12_4_ < uVar13) {
      FUN_146b17dba(local_198,uVar11);
    }
    pvVar10 = DAT_14cc2e2b0;
    uVar14 = local_198._0_8_;
    local_80 = (void *)0x0;
    lVar17 = (longlong)DAT_14cc2e2b8;
    local_78 = DAT_14cc2e2b8;
    if (lVar17 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,DAT_14cc2e2b8,0);
      memcpy(local_80,pvVar10,lVar17 * 2);
    }
    FUN_14989e708(uVar14 + lVar16 * 0x30,&local_80,&local_161);
    uVar11 = local_198._8_4_;
    lVar16 = (longlong)(int)local_198._8_4_;
    uVar13 = local_198._8_4_ + 1;
    local_198._8_4_ = uVar13;
    if ((uint)local_198._12_4_ < uVar13) {
      FUN_146b17dba(local_198,uVar11);
    }
    pvVar10 = DAT_14cc2e2c8;
    uVar14 = local_198._0_8_;
    local_80 = (void *)0x0;
    lVar17 = (longlong)DAT_14cc2e2d0;
    local_78 = DAT_14cc2e2d0;
    if (lVar17 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,DAT_14cc2e2d0,0);
      memcpy(local_80,pvVar10,lVar17 * 2);
    }
    FUN_14989e708(uVar14 + lVar16 * 0x30,&local_80,&local_162);
    uVar11 = local_198._8_4_;
    lVar16 = (longlong)(int)local_198._8_4_;
    uVar13 = local_198._8_4_ + 1;
    local_198._8_4_ = uVar13;
    if ((uint)local_198._12_4_ < uVar13) {
      FUN_146b17dba(local_198,uVar11);
    }
    pvVar10 = DAT_14cc2e2e0;
    uVar14 = local_198._0_8_;
    local_80 = (void *)0x0;
    lVar17 = (longlong)DAT_14cc2e2e8;
    local_78 = DAT_14cc2e2e8;
    if (lVar17 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,DAT_14cc2e2e8,0);
      memcpy(local_80,pvVar10,lVar17 * 2);
    }
    FUN_146b173ba(uVar14 + lVar16 * 0x30,&local_80,&local_170);
    uVar11 = local_198._8_4_;
    lVar16 = (longlong)(int)local_198._8_4_;
    uVar13 = local_198._8_4_ + 1;
    local_198._8_4_ = uVar13;
    if ((uint)local_198._12_4_ < uVar13) {
      FUN_146b17dba(local_198,uVar11);
    }
    pvVar10 = DAT_14cc2e2f8;
    uVar14 = local_198._0_8_;
    local_80 = (void *)0x0;
    lVar17 = (longlong)DAT_14cc2e300;
    local_78 = DAT_14cc2e300;
    if (lVar17 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,DAT_14cc2e300,0);
      memcpy(local_80,pvVar10,lVar17 * 2);
    }
    FUN_146b173ba(uVar14 + lVar16 * 0x30,&local_80,&local_178);
    uVar11 = local_198._8_4_;
    lVar16 = (longlong)(int)local_198._8_4_;
    uVar13 = local_198._8_4_ + 1;
    local_198._8_4_ = uVar13;
    if ((uint)local_198._12_4_ < uVar13) {
      FUN_146b17dba(local_198,uVar11);
    }
    pvVar10 = DAT_14cc2e310;
    uVar14 = local_198._0_8_;
    local_80 = (void *)0x0;
    lVar17 = (longlong)DAT_14cc2e318;
    local_78 = DAT_14cc2e318;
    if (lVar17 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,DAT_14cc2e318,0);
      memcpy(local_80,pvVar10,lVar17 * 2);
    }
    FUN_14989e708(uVar14 + lVar16 * 0x30,&local_80,&local_179);
    uVar11 = local_198._8_4_;
    lVar16 = (longlong)(int)local_198._8_4_;
    uVar13 = local_198._8_4_ + 1;
    local_198._8_4_ = uVar13;
    if ((uint)local_198._12_4_ < uVar13) {
      FUN_146b17dba(local_198,uVar11);
    }
    pvVar10 = DAT_14cc2e328;
    uVar14 = local_198._0_8_;
    local_80 = (void *)0x0;
    lVar17 = (longlong)DAT_14cc2e330;
    local_78 = DAT_14cc2e330;
    if (lVar17 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,DAT_14cc2e330,0);
      memcpy(local_80,pvVar10,lVar17 * 2);
    }
    FUN_14989e708(uVar14 + lVar16 * 0x30,&local_80,&local_17a);
    uVar11 = local_198._8_4_;
    lVar16 = (longlong)(int)local_198._8_4_;
    uVar13 = local_198._8_4_ + 1;
    local_198._8_4_ = uVar13;
    if ((uint)local_198._12_4_ < uVar13) {
      FUN_146b17dba(local_198,uVar11);
    }
    pvVar10 = DAT_14cc2e340;
    uVar14 = local_198._0_8_;
    local_80 = (void *)0x0;
    lVar17 = (longlong)DAT_14cc2e348;
    local_78 = DAT_14cc2e348;
    if (lVar17 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,DAT_14cc2e348,0);
      memcpy(local_80,pvVar10,lVar17 * 2);
    }
    FUN_146b17354(uVar14 + lVar16 * 0x30,&local_80,param_1 + 0x18);
    uVar11 = local_198._8_4_;
    lVar16 = (longlong)(int)local_198._8_4_;
    uVar13 = local_198._8_4_ + 1;
    local_198._8_4_ = uVar13;
    if ((uint)local_198._12_4_ < uVar13) {
      FUN_146b17dba(local_198,uVar11);
    }
    pvVar10 = DAT_14cc2e358;
    uVar14 = local_198._0_8_;
    local_80 = (void *)0x0;
    lVar17 = (longlong)DAT_14cc2e360;
    local_78 = DAT_14cc2e360;
    if (lVar17 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,DAT_14cc2e360,0);
      memcpy(local_80,pvVar10,lVar17 * 2);
    }
    FUN_146b17354(uVar14 + lVar16 * 0x30,&local_80,(longlong)param_1 + 0xc4);
    uVar11 = local_198._8_4_;
    lVar16 = (longlong)(int)local_198._8_4_;
    uVar13 = local_198._8_4_ + 1;
    local_198._8_4_ = uVar13;
    if ((uint)local_198._12_4_ < uVar13) {
      FUN_146b17dba(local_198,uVar11);
    }
    pvVar10 = DAT_14cc2e370;
    uVar14 = local_198._0_8_;
    local_80 = (void *)0x0;
    lVar17 = (longlong)DAT_14cc2e378;
    local_78 = DAT_14cc2e378;
    if (lVar17 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,DAT_14cc2e378,0);
      memcpy(local_80,pvVar10,lVar17 * 2);
    }
    FUN_146b17354(uVar14 + lVar16 * 0x30,&local_80,&local_180);
    lVar16 = param_1[3];
    pcVar9 = *(code **)(lVar16 + 0x110);
    if (pcVar9 != (code *)0x0) {
      plVar15 = (longlong *)(lVar16 + 0x130);
      if (*(longlong **)(lVar16 + 0x120) != (longlong *)0x0) {
        plVar15 = *(longlong **)(lVar16 + 0x120);
      }
      uVar14 = (**(code **)(*plVar15 + 8))();
      (*pcVar9)(uVar14,local_198);
    }
    plVar15 = (longlong *)*local_1a0;
    uVar14 = (**(code **)(*param_1 + 0x20))(param_1);
    FUN_140056680(&local_80,uVar14);
    (**(code **)(*plVar15 + 0x78))(plVar15,&local_80,local_198);
    if (local_80 != (void *)0x0) {
      FUN_1400020a8();
    }
    FUN_146b17e4e(local_198._0_8_,local_198._8_4_);
    if (local_198._0_8_ != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_70 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14467a045 FUN_14467a045 body=57 status=ok
// SIG undefined FUN_14467a045(void)

void FUN_14467a045(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2e390 == 0) {
    uVar1 = FUN_14676bcfa();
    DAT_14cc2e390 = FUN_14171c317(FUN_14676bd5a,uVar1,L"EOodleNetResult");
  }
  return;
}



// FUNCTION 14467a0a0 FUN_14467a0a0 body=41 status=ok
// SIG undefined FUN_14467a0a0(void)

void FUN_14467a0a0(void)

{
  DAT_14cc2e408 = 0;
  if (DAT_14cc2e400 != 0) {
    FUN_1400020a8();
  }
  FUN_14616526e();
  return;
}



// FUNCTION 14467a0c9 FUN_14467a0c9 body=69 status=ok
// SIG undefined FUN_14467a0c9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14467a0c9(void)

{
  _DAT_14cc2e410 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014467a10b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc2e418,1);
  return;
}



// FUNCTION 14467a10e FUN_14467a10e body=69 status=ok
// SIG undefined FUN_14467a10e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14467a10e(void)

{
  _DAT_14cc2e428 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014467a150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc2e430,1);
  return;
}



// FUNCTION 14467a153 FUN_14467a153 body=69 status=ok
// SIG undefined FUN_14467a153(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14467a153(void)

{
  _DAT_14cc2e440 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014467a195. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc2e448,1);
  return;
}



// FUNCTION 14467a198 FUN_14467a198 body=62 status=ok
// SIG undefined FUN_14467a198(void)

void FUN_14467a198(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14467a1d6 FUN_14467a1d6 body=178 status=ok
// SIG undefined FUN_14467a1d6(void)

undefined8 * FUN_14467a1d6(undefined8 *param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446f470e(&local_20,L"OodleNetworkHandlerComponent",1);
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0x1000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1c) = local_20;
  *param_1 = &PTR_FUN_14bed2780;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x39) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xe] = &PTR_FUN_14bed35b0;
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14467a28a FUN_14467a28a body=1354 status=ok
// SIG undefined FUN_14467a28a(void)

void FUN_14467a28a(longlong param_1)

{
  byte *pbVar1;
  longlong lVar2;
  bool bVar3;
  undefined **ppuVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_188 [32];
  undefined8 *local_168;
  undefined **local_160;
  uint local_158;
  byte local_137;
  longlong *local_108;
  longlong local_e8;
  longlong local_d0;
  int local_c0;
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  void *local_98;
  uint local_90;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  void *local_78;
  uint local_70;
  undefined **local_68;
  ulonglong uStack_60;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  FUN_14989e2fe();
  pbVar1 = (byte *)(param_1 + 0x28);
  local_168 = &DAT_14c872ce8;
  FUN_14052bb08(DAT_14c872ce0,L"OodleNetworkHandlerComponent",L"bEnableOodle",pbVar1);
  if ((*(char *)(param_1 + 0x28) == '\0') && (DAT_14cc2e458 == '\x01')) {
    *pbVar1 = 1;
  }
  local_68 = (undefined **)0x0;
  uStack_60 = 0;
  if (DAT_14cc2e000 == 0) {
    uVar8 = FUN_14676bcfa();
    DAT_14cc2e000 = FUN_14171c317(FUN_14676bd2b,uVar8,L"EOodleNetworkEnableMode");
  }
  lVar2 = DAT_14cc2e000;
  FUN_14099d55c(DAT_14cc2e438,&local_160,0);
  if (local_68 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  ppuVar4 = local_160;
  local_68 = local_160;
  uStack_60 = (ulonglong)local_158;
  if (local_158 - 2 < 0x7fffffff) {
    lVar9 = (longlong)(int)local_158;
    local_78 = (void *)0x0;
    local_70 = local_158;
    FUN_1446dd670(&local_78,local_158,0);
    memcpy(local_78,ppuVar4,lVar9 * 2);
    iVar7 = FUN_1401e9588(lVar2,&local_78,0);
    bVar3 = true;
    if ((iVar7 != -1) &&
       (lVar9 = *(longlong *)(*(longlong *)(lVar2 + 0x40) + 8 + (longlong)iVar7 * 0x10), lVar9 != -1
       )) {
      *(char *)(param_1 + 0x29) = (char)lVar9;
      bVar3 = false;
    }
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (bVar3) goto LAB_14467a409;
  }
  else {
LAB_14467a409:
    local_168 = &DAT_14c872ce8;
    cVar5 = FUN_1449da20c(DAT_14c872ce0,L"OodleNetworkHandlerComponent",L"ServerEnableMode",
                          &local_68);
    ppuVar4 = local_68;
    if (cVar5 != '\0') {
      local_88 = (void *)0x0;
      local_80 = (int)uStack_60;
      if ((longlong)(int)uStack_60 == 0) {
        local_7c = 0;
      }
      else {
        FUN_1446dd670(&local_88,uStack_60 & 0xffffffff,0);
        memcpy(local_88,ppuVar4,(longlong)(int)uStack_60 * 2);
      }
      iVar7 = FUN_1401e9588(lVar2,&local_88,0);
      if ((iVar7 != -1) &&
         (lVar9 = *(longlong *)(*(longlong *)(lVar2 + 0x40) + 8 + (longlong)iVar7 * 0x10),
         lVar9 != -1)) {
        *(char *)(param_1 + 0x29) = (char)lVar9;
      }
      if (local_88 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  FUN_14099d55c(DAT_14cc2e450,&local_160,0);
  if (local_68 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  ppuVar4 = local_160;
  local_68 = local_160;
  uStack_60 = (ulonglong)local_158;
  if (local_158 - 2 < 0x7fffffff) {
    local_98 = (void *)0x0;
    local_90 = local_158;
    FUN_1446dd670(&local_98,local_158,0);
    memcpy(local_98,ppuVar4,(longlong)(int)local_158 * 2);
    iVar7 = FUN_1401e9588(lVar2,&local_98,0);
    bVar3 = true;
    if ((iVar7 != -1) &&
       (lVar9 = *(longlong *)(*(longlong *)(lVar2 + 0x40) + 8 + (longlong)iVar7 * 0x10), lVar9 != -1
       )) {
      *(char *)(param_1 + 0x2a) = (char)lVar9;
      bVar3 = false;
    }
    if (local_98 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (!bVar3) goto LAB_14467a67e;
  }
  local_168 = &DAT_14c872ce8;
  cVar5 = FUN_1449da20c(DAT_14c872ce0,L"OodleNetworkHandlerComponent",L"ClientEnableMode",&local_68)
  ;
  ppuVar4 = local_68;
  if (cVar5 != '\0') {
    local_a8 = (void *)0x0;
    local_a0 = (int)uStack_60;
    if ((longlong)(int)uStack_60 == 0) {
      local_9c = 0;
    }
    else {
      FUN_1446dd670(&local_a8,uStack_60 & 0xffffffff,0);
      memcpy(local_a8,ppuVar4,(longlong)(int)uStack_60 * 2);
    }
    iVar7 = FUN_1401e9588(lVar2,&local_a8,0);
    if ((iVar7 != -1) &&
       (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x40) + 8 + (longlong)iVar7 * 0x10), lVar2 != -1
       )) {
      *(char *)(param_1 + 0x2a) = (char)lVar2;
    }
    if (local_a8 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14467a67e:
  bVar6 = *pbVar1;
  if ((bVar6 == 1) &&
     (*(char *)((param_1 + 0x2a) - (ulonglong)(**(char **)(param_1 + 8) == '\x01')) == '\0')) {
    FUN_14467a7d6(param_1);
    bVar6 = *(byte *)(param_1 + 0x28);
  }
  if ((bVar6 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 1;
    FUN_1447400e4(&local_160,0,1);
    local_4c = 0x3ff;
    (*(code *)local_160[0x30])(&local_160,&local_4c,0x400);
    if ((local_137 & 2) == 0) {
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + local_c0;
    }
    else {
      FUN_140033559(".\\../Plugins/Compression/OodleNetwork/Source/Private/OodleNetworkHandlerComponent.cpp"
                    ,0x23f,L"Failed to determine OodleNetworkHandlerComponent reserved packet bits."
                   );
    }
    local_160 = &PTR_FUN_149e37560;
    if (local_d0 != 0) {
      FUN_1400020a8();
    }
    local_160 = &PTR__purecall_149e35f70;
    if (local_108 != (longlong *)0x0) {
      if (*local_108 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(local_108);
    }
    if (local_e8 != 0) {
      if (*(longlong *)(local_e8 + 0x40) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(local_e8);
    }
  }
  *(undefined1 *)(param_1 + 0x1b) = 1;
  FUN_145dcbe7a(*(undefined8 *)(param_1 + 8),param_1);
  if (local_68 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14467a7d6 FUN_14467a7d6 body=1483 status=ok
// SIG undefined FUN_14467a7d6(void)

void FUN_14467a7d6(longlong param_1)

{
  bool bVar1;
  void *pvVar2;
  char cVar3;
  undefined8 uVar4;
  size_t sVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  ushort uVar13;
  ushort uVar14;
  ulonglong uVar15;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  void *local_d8;
  int local_d0;
  undefined4 local_cc;
  void *local_c8;
  int local_c0;
  undefined4 local_bc;
  void *local_b8;
  ulonglong uStack_b0;
  void *local_a8;
  ulonglong uStack_a0;
  wchar_t *local_98;
  int local_90;
  wchar_t *local_88;
  undefined8 uStack_80;
  wchar_t *local_78;
  undefined8 uStack_70;
  wchar_t *local_68;
  undefined8 uStack_60;
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_a8 = (void *)0x0;
  uStack_a0 = 0;
  local_b8 = (void *)0x0;
  uStack_b0 = 0;
  *(undefined1 *)(param_1 + 0x68) = 1;
  local_68 = (wchar_t *)0x0;
  uStack_60 = 0;
  local_78 = (wchar_t *)0x0;
  uStack_70 = 0;
  local_e8 = &DAT_14c872ce8;
  cVar3 = FUN_1449da20c(DAT_14c872ce0,L"OodleNetworkHandlerComponent",L"ServerDictionary");
  if (cVar3 != '\0') {
    local_e8 = &DAT_14c872ce8;
    cVar3 = FUN_1449da20c(DAT_14c872ce0,L"OodleNetworkHandlerComponent",L"ClientDictionary");
    pwVar6 = local_68;
    if (((cVar3 != '\0') && (0x80000000 < (int)uStack_60 + 0x7fffffffU)) &&
       (0x80000000 < (int)uStack_70 + 0x7fffffffU)) {
      uVar4 = FUN_140d6afb0();
      FUN_140056680(&local_98,uVar4);
      local_58 = local_98;
      if (local_90 == 0) {
        local_58 = L"";
      }
      uVar8 = 0;
      local_50 = 0;
      if (local_58 != (wchar_t *)0x0) {
        sVar5 = wcslen(local_58);
        local_50 = (int)sVar5;
      }
      local_48 = pwVar6;
      if (pwVar6 != (wchar_t *)0x0) {
        sVar5 = wcslen(pwVar6);
        uVar8 = (int)sVar5;
      }
      local_40 = uVar8;
      FUN_140bee87a(&local_88,&local_58,2);
      if (local_68 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      local_68 = local_88;
      uStack_60 = uStack_80;
      local_88 = (wchar_t *)0x0;
      uStack_80 = 0;
      if (local_98 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      pwVar6 = L"";
      if ((int)uStack_70 != 0) {
        pwVar6 = local_78;
      }
      uVar4 = FUN_140d6afb0();
      FUN_140056680(&local_98,uVar4);
      local_58 = L"";
      if (local_90 != 0) {
        local_58 = local_98;
      }
      uVar8 = 0;
      iVar10 = 0;
      if (local_58 != (wchar_t *)0x0) {
        sVar5 = wcslen(local_58);
        iVar10 = (int)sVar5;
      }
      local_50 = iVar10;
      local_48 = pwVar6;
      if (pwVar6 != (wchar_t *)0x0) {
        sVar5 = wcslen(pwVar6);
        uVar8 = (int)sVar5;
      }
      local_40 = uVar8;
      FUN_140bee87a(&local_88,&local_58,2);
      if (local_78 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      local_78 = local_88;
      uStack_70 = uStack_80;
      local_88 = (wchar_t *)0x0;
      uStack_80 = 0;
      if (local_98 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      FUN_1448b5552(&local_68);
      FUN_1448b5552(&local_78);
      FUN_140e4328c(&local_68);
      FUN_140e4328c(&local_78);
      uVar4 = FUN_140d6afb0();
      FUN_140056680(&local_58,uVar4);
      uVar9 = 0;
      uVar11 = (ulonglong)(local_50 - 1);
      if (local_50 == 0) {
        uVar11 = uVar9;
      }
      if (0 < (int)uVar11) {
        pwVar6 = local_58;
        if (local_50 == 0) {
          pwVar6 = L"";
        }
        pwVar7 = L"";
        if ((int)uStack_60 != 0) {
          pwVar7 = local_68;
        }
        lVar12 = 0;
        while( true ) {
          uVar13 = *(ushort *)((longlong)pwVar7 + lVar12);
          uVar9 = (ulonglong)uVar13;
          uVar14 = *(ushort *)((longlong)pwVar6 + lVar12);
          if (uVar13 != uVar14) break;
          if (uVar13 == 0) goto LAB_14467ab22;
LAB_14467aaeb:
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) goto LAB_14467ab22;
          lVar12 = lVar12 + 2;
        }
        if ((uVar14 | uVar13) < 0x80) {
          uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
          uVar15 = (ulonglong)uVar14;
          uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
          if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar15]) goto LAB_14467aaeb;
        }
        if (uVar13 != uVar14) {
          uVar9 = 0;
          goto LAB_14467abe9;
        }
LAB_14467ab22:
        uVar4 = FUN_140d6afb0();
        FUN_140056680(&local_88,uVar4);
        uVar9 = 0;
        uVar11 = (ulonglong)((int)uStack_80 - 1);
        if ((int)uStack_80 == 0) {
          uVar11 = uVar9;
        }
        if (0 < (int)uVar11) {
          pwVar6 = local_88;
          if ((int)uStack_80 == 0) {
            pwVar6 = L"";
          }
          pwVar7 = L"";
          if ((int)uStack_70 != 0) {
            pwVar7 = local_78;
          }
          lVar12 = 0;
LAB_14467ab7e:
          uVar13 = *(ushort *)((longlong)pwVar7 + lVar12);
          uVar14 = *(ushort *)((longlong)pwVar6 + lVar12);
          if (uVar13 == uVar14) {
            iVar10 = 0;
            if ((uVar13 == 0) || (uVar11 == 1)) goto LAB_14467abd0;
LAB_14467ab9b:
            uVar11 = uVar11 - 1;
            lVar12 = lVar12 + 2;
            goto LAB_14467ab7e;
          }
          if ((uVar14 | uVar13) < 0x80) {
            if ((&DAT_149e05da0)[uVar13] != (&DAT_149e05da0)[(uint)uVar14]) {
              iVar10 = (uint)(byte)(&DAT_149e05da0)[uVar13] -
                       (uint)(byte)(&DAT_149e05da0)[(uint)uVar14];
              goto LAB_14467abd0;
            }
            if (uVar11 == 1) {
              iVar10 = 0;
              goto LAB_14467abd0;
            }
            goto LAB_14467ab9b;
          }
          iVar10 = (uint)uVar13 - (uint)uVar14;
LAB_14467abd0:
          uVar9 = (ulonglong)(iVar10 == 0);
        }
        if (local_88 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
      }
LAB_14467abe9:
      if (local_58 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      if ((char)uVar9 != '\0') {
        iVar10 = (int)uStack_60 + -1;
        if ((int)uStack_60 == 0) {
          iVar10 = 0;
        }
        FUN_1402980a2(&local_a8,local_68,iVar10);
        iVar10 = (int)uStack_70 + -1;
        if ((int)uStack_70 == 0) {
          iVar10 = 0;
        }
        FUN_1402980a2(&local_b8,local_78,iVar10);
        bVar1 = true;
        goto LAB_14467ac66;
      }
    }
  }
  FUN_14020fad6(&local_a8,&DAT_149dfb77a);
  FUN_14020fad6(&local_b8,&DAT_149dfb77a);
  bVar1 = false;
LAB_14467ac66:
  if (local_78 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  pvVar2 = local_a8;
  if (bVar1) {
    local_c8 = (void *)0x0;
    lVar12 = (longlong)(int)uStack_a0;
    local_c0 = (int)uStack_a0;
    if (lVar12 == 0) {
      local_bc = 0;
    }
    else {
      FUN_1446dd670(&local_c8,uStack_a0 & 0xffffffff,0);
      memcpy(local_c8,pvVar2,lVar12 * 2);
    }
    FUN_14467ada2(param_1,&local_c8,param_1 + 0x48);
    pvVar2 = local_b8;
    local_d8 = (void *)0x0;
    lVar12 = (longlong)(int)uStack_b0;
    local_d0 = (int)uStack_b0;
    if (lVar12 == 0) {
      local_cc = 0;
    }
    else {
      FUN_1446dd670(&local_d8,uStack_b0 & 0xffffffff,0);
      memcpy(local_d8,pvVar2,lVar12 * 2);
    }
    FUN_14467ada2(param_1,&local_d8,param_1 + 0x58);
  }
  else {
    *(undefined1 *)(param_1 + 0x68) = 0;
  }
  if (local_b8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_a8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14467ada2 FUN_14467ada2 body=968 status=ok
// SIG undefined FUN_14467ada2(void)

void FUN_14467ada2(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  int iVar11;
  undefined2 *puVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  undefined8 *puVar16;
  undefined1 auStack_1c8 [32];
  undefined4 *local_1a8;
  undefined4 local_19c;
  undefined8 local_198;
  ulonglong local_190;
  undefined4 *local_188;
  longlong *local_180;
  undefined4 local_174;
  longlong local_170;
  undefined4 local_164;
  longlong local_160;
  undefined **local_158 [5];
  byte local_12f;
  longlong local_b8;
  undefined1 local_a8 [8];
  undefined4 local_a0;
  undefined4 local_9c;
  longlong *local_60;
  undefined4 **local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  iVar5 = (int)param_2[1];
  uVar10 = 0;
  iVar11 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar11 = 0;
  }
  if (0 < iVar11) {
    if (iVar5 == 0) {
      puVar12 = &DAT_149dfb77a;
    }
    else {
      puVar12 = (undefined2 *)*param_2;
    }
    lVar14 = 0;
    uVar10 = 0;
    do {
      uVar13 = ((uint)(0x19 < (ushort)puVar12[lVar14] - 0x61) * 0x20 + (uint)(ushort)puVar12[lVar14]
               ) - 0x20;
      uVar15 = (uint)(uVar10 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar10 ^ uVar13) & 0xff) * 4);
      uVar10 = (ulonglong)
               (uVar15 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar15 & 0xff ^ uVar13 >> 8 & 0xff) * 4));
      lVar14 = lVar14 + 1;
    } while (iVar11 != (int)lVar14);
  }
  iVar5 = FUN_14989e76e(uVar10,param_2);
  lVar14 = 0;
  if (iVar5 != -1) {
    lVar14 = (longlong)iVar5 * 0x28 + DAT_14cc2e3c0;
  }
  if (lVar14 == 0) {
    plVar7 = (longlong *)FUN_14054d1d4();
    if ((int)param_2[1] == 0) {
      puVar12 = &DAT_149dfb77a;
    }
    else {
      puVar12 = (undefined2 *)*param_2;
    }
    plVar7 = (longlong *)(**(code **)(*plVar7 + 0x18))(plVar7,puVar12,0);
    if (plVar7 == (longlong *)0x0) {
      FUN_140033559(".\\../Plugins/Compression/OodleNetwork/Source/Private/OodleNetworkHandlerComponent.cpp"
                    ,0x2d3,L"Incorrect DictionaryFile Provided");
      goto LAB_14467aefd;
    }
    FUN_14989de42(local_158,plVar7);
    local_160 = 0;
    local_164 = 0;
    local_170 = 0;
    local_174 = 0;
    FUN_14989dc8a(local_a8,local_158);
    local_1a8 = &local_174;
    FUN_14989dede(local_158,&local_160,&local_164,&local_170);
    if ((local_12f & 2) == 0) {
      uVar6 = FUN_144d805b0();
      uVar8 = FUN_14001cc68(uVar6,0);
      iVar5 = FUN_144d80640(uVar8,local_170,local_a0);
      if (iVar5 != 0) {
        local_190 = FUN_144d80440(local_9c);
        local_198 = FUN_14001cc68(local_190 & 0xffffffff,0);
        lVar14 = local_160;
        local_19c = local_164;
        FUN_144d80480(local_198,local_9c,local_160);
        puVar9 = (undefined4 *)FUN_14001cc68(0x38,0x10);
        *puVar9 = local_9c;
        *(longlong *)(puVar9 + 2) = lVar14;
        puVar9[4] = local_19c;
        *(undefined8 *)(puVar9 + 6) = local_198;
        puVar9[8] = (int)local_190;
        *(undefined8 *)(puVar9 + 10) = uVar8;
        puVar9[0xc] = uVar6;
        local_188 = puVar9;
        local_180 = (longlong *)FUN_14001cc68(0x18,0x10);
        local_180[1] = (longlong)&DAT_100000001;
        *local_180 = (longlong)&PTR_FUN_14bed3630;
        local_180[2] = (longlong)puVar9;
        local_60 = param_2;
        local_58 = &local_188;
        FUN_14989e84a(&local_4c);
        plVar1 = local_180;
        lVar14 = DAT_14cc2e3c0;
        if (local_180 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_180 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_180)(local_180);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
        puVar16 = (undefined8 *)(lVar14 + (longlong)local_4c * 0x28 + 0x10);
        goto LAB_14467aff4;
      }
      *(undefined1 *)(param_1 + 0x28) = 0;
      bVar4 = true;
      puVar16 = (undefined8 *)0x0;
    }
    else {
      if (local_160 != 0) {
        FUN_1400020a8();
      }
      puVar16 = (undefined8 *)0x0;
LAB_14467aff4:
      if (local_170 != 0) {
        FUN_1400020a8();
      }
      (**(code **)(*plVar7 + 0x1f8))(plVar7);
      bVar4 = false;
    }
    local_158[0] = &PTR_FUN_14bed3240;
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    FUN_14041e0ea(local_158);
    (**(code **)*plVar7)(plVar7,1);
    if (bVar4 || puVar16 == (undefined8 *)0x0) goto LAB_14467aefd;
  }
  else {
    puVar16 = (undefined8 *)(lVar14 + 0x10);
  }
  uVar8 = *puVar16;
  lVar14 = puVar16[1];
  if (lVar14 != 0) {
    LOCK();
    *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
    UNLOCK();
  }
  plVar7 = (longlong *)param_3[1];
  *param_3 = uVar8;
  param_3[1] = lVar14;
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
LAB_14467aefd:
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14467b16c FUN_14467b16c body=862 status=ok
// SIG undefined FUN_14467b16c(void)

void FUN_14467b16c(longlong param_1,longlong *param_2)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined1 auStack_a8 [32];
  undefined *local_88;
  ulonglong local_80;
  undefined1 local_78 [24];
  longlong local_60;
  longlong local_50;
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)(param_1 + 0x28) != '\x01') goto LAB_14467b380;
  plVar4 = (longlong *)*param_2;
  if ((*(byte *)((longlong)plVar4 + 0x29) & 2) == 0) {
    uVar12 = plVar4[0x15];
    if ((longlong)uVar12 < plVar4[0x14]) {
      lVar5 = param_2[2];
      bVar2 = *(byte *)(plVar4[0x12] + (longlong)(int)(uVar12 >> 3));
      plVar4[0x15] = uVar12 + 1;
      if ((bVar2 >> ((uint)uVar12 & 7) & 1) != 0) {
        cVar3 = **(char **)(param_1 + 8);
        if ((*(char *)(param_1 + 0x68) == '\0') &&
           (*(char *)((param_1 - (ulonglong)(cVar3 == '\x01')) + 0x2a) == '\x01')) {
          FUN_14467a7d6(param_1);
          if ((*(char *)(param_1 + 0x40) == '\x01') && (*(longlong *)(param_1 + 0x30) != 0)) {
            piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 0xc4);
            *piVar1 = *piVar1 + 1;
          }
        }
        lVar6 = *(longlong *)(param_1 + 0x48 + (ulonglong)(cVar3 == '\x01') * 0x10);
        if (lVar6 == 0) {
          FUN_140033559(".\\../Plugins/Compression/OodleNetwork/Source/Private/OodleNetworkHandlerComponent.cpp"
                        ,0x497,
                        L"Received compressed packet, but no dictionary is present for decompression."
                       );
          FUN_14572541c(plVar4);
          FUN_14989e400(local_78,5);
          FUN_14467be17(lVar5 + 8,local_78);
          if (local_50 != 0) {
            (**(code **)(local_50 + -0x10))(local_50 + -0x10);
          }
          if (local_60 != 0) {
            FUN_1400020a8();
          }
          FUN_1459b235e(local_78,0x70);
        }
        else {
          lVar7 = plVar4[0x14];
          lVar8 = plVar4[0x15];
          (**(code **)(*plVar4 + 0x180))(plVar4,&local_44,0x400);
          uVar10 = local_44 + 1;
          local_44 = 0;
          if ((*(byte *)((longlong)plVar4 + 0x29) & 2) == 0) {
            local_44 = uVar10;
          }
          if (local_44 == 0) goto LAB_14467b380;
          if (local_44 < 0x400) {
            uVar12 = (plVar4[0x14] - plVar4[0x15]) + 7U >> 3 & 0xffffffff;
            (**(code **)(*plVar4 + 0x170))(plVar4,&DAT_14cc2e460,uVar12);
            if ((*(byte *)((longlong)plVar4 + 0x29) & 2) == 0) {
              local_80 = (ulonglong)local_44;
              local_88 = &DAT_14cc2ec60;
              iVar9 = FUN_144d805e0(*(undefined8 *)(lVar6 + 0x28),*(undefined8 *)(lVar6 + 0x18),
                                    &DAT_14cc2e460,uVar12);
              if (iVar9 != 0) {
                FUN_14170c290(plVar4,&DAT_14cc2ec60,local_44 << 3);
                if ((*(char *)(param_1 + 0x40) == '\x01') &&
                   (lVar5 = *(longlong *)(param_1 + 0x30), lVar5 != 0)) {
                  *(longlong *)(lVar5 + 0x28) = *(longlong *)(lVar5 + 0x28) + 1;
                  *(longlong *)(lVar5 + 0x38) =
                       *(longlong *)(lVar5 + 0x38) + ((lVar7 - lVar8) + 7U >> 3 & 0xffffffff);
                  *(longlong *)(lVar5 + 0x40) = *(longlong *)(lVar5 + 0x40) + uVar12;
                  *(longlong *)(lVar5 + 0x48) = *(longlong *)(lVar5 + 0x48) + (ulonglong)local_44;
                }
                goto LAB_14467b380;
              }
              FUN_14572541c(plVar4);
              uVar11 = 2;
            }
            else {
              FUN_14572541c(plVar4);
              uVar11 = 3;
            }
            FUN_14989e400(local_78,uVar11);
            FUN_14467be17(lVar5 + 8,local_78);
            if (local_50 != 0) {
              (**(code **)(local_50 + -0x10))(local_50 + -0x10);
            }
            if (local_60 != 0) {
              FUN_1400020a8();
            }
            FUN_14572541c(plVar4);
            goto LAB_14467b380;
          }
          FUN_14572541c(plVar4);
          FUN_14989e400(local_78,4);
        }
        FUN_14467be17(lVar5 + 8,local_78);
        if (local_50 != 0) {
          (**(code **)(local_50 + -0x10))(local_50 + -0x10);
        }
        if (local_60 != 0) {
          FUN_1400020a8();
        }
        goto LAB_14467b380;
      }
    }
    else {
      FUN_1405d09b8(plVar4,1);
    }
  }
  if ((*(char *)(param_1 + 0x40) == '\x01') && (lVar5 = *(longlong *)(param_1 + 0x30), lVar5 != 0))
  {
    lVar6 = plVar4[0x14];
    lVar7 = plVar4[0x15];
    *(longlong *)(lVar5 + 0x30) = *(longlong *)(lVar5 + 0x30) + 1;
    *(longlong *)(lVar5 + 0x50) =
         *(longlong *)(lVar5 + 0x50) + ((lVar6 - lVar7) + 7U >> 3 & 0xffffffff);
  }
LAB_14467b380:
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14467b4cc FUN_14467b4cc body=835 status=ok
// SIG undefined FUN_14467b4cc(void)

void FUN_14467b4cc(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  size_t _Size;
  uint uVar6;
  ulonglong uVar7;
  byte bVar8;
  longlong lVar9;
  bool bVar10;
  bool bVar11;
  undefined1 auStack_98 [32];
  undefined *local_78;
  uint local_64;
  ulonglong local_60;
  ulonglong local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(char *)(param_1 + 0x28) != '\x01') {
LAB_14467b7be:
    if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  if (*(char *)(param_1 + 0x40) == '\x01') {
    lVar9 = *(longlong *)(param_1 + 0x30) + 0x20;
    if (*(longlong *)(param_1 + 0x30) == 0) {
      lVar9 = 0;
    }
  }
  else {
    lVar9 = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x48 + (ulonglong)(**(char **)(param_1 + 8) != '\x01') * 0x10);
  uVar7 = param_2[0x14];
  _Size = (longlong)(uVar7 + 7) >> 3;
  if (*(byte *)(param_1 + 0x68) == 0) {
    bVar11 = *(char *)((param_1 - (ulonglong)(**(char **)(param_1 + 8) == '\x01')) + 0x2a) == '\x01'
    ;
  }
  else {
    bVar11 = false;
  }
  uVar5 = (uint)_Size;
  bVar8 = (int)uVar5 < DAT_14cc2e420 & ~bVar11 & 0 < DAT_14cc2e420;
  if (lVar1 == 0) {
    if ((bVar8 != 0 || bVar11 != false) || (~*(byte *)(param_1 + 0x68) & 1) != 0)
    goto LAB_14467b6c9;
    FUN_140033559(".\\../Plugins/Compression/OodleNetwork/Source/Private/OodleNetworkHandlerComponent.cpp"
                  ,0x59c,
                  L"Tried to compress a packet, but no dictionary is present for compression.");
  }
  else {
    if (bVar8 != 0 || bVar11 != false) {
LAB_14467b6c9:
      if (lVar9 != 0) {
        *(longlong *)(lVar9 + 0x98) = *(longlong *)(lVar9 + 0x98) + (_Size & 0xffffffff);
        *(longlong *)(lVar9 + 0x68) = *(longlong *)(lVar9 + 0x68) + (ulonglong)bVar11;
        *(longlong *)(lVar9 + 0x70) = *(longlong *)(lVar9 + 0x70) + (ulonglong)bVar8;
        _Size = param_2[0x14] + 7 >> 3;
      }
      memcpy(&DAT_14cc2f460,(void *)param_2[0x12],_Size);
      (**(code **)(*param_2 + 0xa8))(param_2);
      FUN_1400748c2(param_2,0);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
    }
    uVar6 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x2c);
    if ((int)uVar7 - 1U < uVar6) {
      uVar4 = _Size & 0xffffffff;
      lVar3 = FUN_144d80460(uVar4);
      if (lVar3 < 0x801) {
        memcpy(&DAT_14cc2f460,(void *)param_2[0x12],uVar4);
        local_78 = &DAT_14cc2fc60;
        local_60 = uVar4;
        local_58 = thunk_FUN_144d813e0(*(undefined8 *)(lVar1 + 0x28),*(undefined8 *)(lVar1 + 0x18),
                                       &DAT_14cc2f460,uVar4);
        uVar2 = (uint)local_58;
        if (uVar2 <= uVar5) {
          local_64 = uVar2 * 8;
          bVar11 = local_64 <= uVar6;
          bVar10 = uVar2 < uVar5;
          (**(code **)(*param_2 + 0xa8))(param_2);
          uVar4 = CONCAT71((int7)((ulonglong)param_3 >> 8),bVar10) & 0xffffffff;
          FUN_1400748c2(param_2,CONCAT71((int7)(uVar4 >> 8),(byte)uVar4 & bVar11));
          uVar4 = local_58;
          *(bool *)(param_3 + 0xd) = bVar10 && bVar11;
          if (bVar10 && bVar11) {
            local_4c = uVar5 - 1;
            (**(code **)(*param_2 + 0x180))(param_2,&local_4c,0x400);
            uVar7 = local_58 & 0xffffffff;
            (**(code **)(*param_2 + 0x170))(param_2,&DAT_14cc2fc60,uVar7);
            if (lVar9 != 0) {
              *(longlong *)(lVar9 + 0x38) = *(longlong *)(lVar9 + 0x38) + 1;
              *(longlong *)(lVar9 + 0x78) = *(longlong *)(lVar9 + 0x78) + (param_2[0x14] + 6 >> 3);
              *(longlong *)(lVar9 + 0x80) = *(longlong *)(lVar9 + 0x80) + uVar7;
              *(longlong *)(lVar9 + 0x88) = *(longlong *)(lVar9 + 0x88) + local_60;
            }
          }
          else {
            if (lVar9 != 0) {
              *(longlong *)(lVar9 + 0x90) = *(longlong *)(lVar9 + 0x90) + local_60;
            }
            (**(code **)(*param_2 + 0x178))(param_2,&DAT_14cc2f460,uVar7 & 0xffffffff);
            if (uVar6 < local_64) {
              if (lVar9 != 0) {
                *(longlong *)(lVar9 + 0x58) = *(longlong *)(lVar9 + 0x58) + 1;
              }
            }
            else if ((lVar9 != 0) && (uVar5 <= (uint)uVar4)) {
              *(longlong *)(lVar9 + 0x40) = *(longlong *)(lVar9 + 0x40) + 1;
              if (*(char *)(param_3 + 0xc) == '\x01') {
                *(longlong *)(lVar9 + 0x50) = *(longlong *)(lVar9 + 0x50) + 1;
              }
              else if ((*(int *)(param_3 + 4) != 0) && (*(int *)(param_3 + 8) == 0)) {
                *(longlong *)(lVar9 + 0x48) = *(longlong *)(lVar9 + 0x48) + 1;
              }
            }
          }
          goto LAB_14467b7be;
        }
      }
    }
  }
  (**(code **)(*param_2 + 0xa8))(param_2);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
}


