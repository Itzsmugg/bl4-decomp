// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14786fc43 FUN_14786fc43 body=52 status=ok
// SIG undefined FUN_14786fc43(void)

void FUN_14786fc43(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14786fc78(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 14786fc78 FUN_14786fc78 body=93 status=ok
// SIG undefined FUN_14786fc78(void)

undefined8 * FUN_14786fc78(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  uVar2 = param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_14580e690(param_1 + 1,iVar1,0);
    FUN_14580e635(param_1[1],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 14786fd36 FUN_14786fd36 body=59 status=ok
// SIG undefined FUN_14786fd36(void)

undefined8 FUN_14786fd36(longlong *param_1)

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



// FUNCTION 14786fd7c FUN_14786fd7c body=32 status=ok
// SIG undefined FUN_14786fd7c(void)

void FUN_14786fd7c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_144760f98(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 14786fe2e FUN_14786fe2e body=68 status=ok
// SIG undefined FUN_14786fe2e(void)

undefined8 FUN_14786fe2e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1406fa324(param_2,param_3);
    *(undefined2 *)(param_2 + 0x10) = *(undefined2 *)(param_3 + 0x10);
    *(undefined1 *)(param_2 + 0x12) = *(undefined1 *)(param_3 + 0x12);
    param_2 = param_2 + 0x18;
    param_3 = param_3 + 0x18;
  }
  return 1;
}



// FUNCTION 14786fe9e FUN_14786fe9e body=59 status=ok
// SIG undefined FUN_14786fe9e(void)

undefined8 FUN_14786fe9e(longlong *param_1)

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



// FUNCTION 14786fee4 FUN_14786fee4 body=37 status=ok
// SIG undefined FUN_14786fee4(void)

void FUN_14786fee4(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[3] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 14786ff82 FUN_14786ff82 body=68 status=ok
// SIG undefined FUN_14786ff82(void)

undefined8 FUN_14786ff82(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0xc0);
      lVar1 = lVar1 + 0xc0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14786ffee FUN_14786ffee body=59 status=ok
// SIG undefined FUN_14786ffee(void)

undefined8 FUN_14786ffee(longlong *param_1)

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



// FUNCTION 147870126 FUN_147870126 body=59 status=ok
// SIG undefined FUN_147870126(void)

undefined8 FUN_147870126(longlong *param_1)

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



// FUNCTION 147870258 FUN_147870258 body=59 status=ok
// SIG undefined FUN_147870258(void)

undefined8 FUN_147870258(longlong *param_1)

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



// FUNCTION 14787032c FUN_14787032c body=39 status=ok
// SIG undefined FUN_14787032c(void)

undefined8 FUN_14787032c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      lVar1 = lVar1 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14787037c FUN_14787037c body=59 status=ok
// SIG undefined FUN_14787037c(void)

undefined8 FUN_14787037c(longlong *param_1)

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



// FUNCTION 147870486 FUN_147870486 body=59 status=ok
// SIG undefined FUN_147870486(void)

undefined8 FUN_147870486(longlong *param_1)

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



// FUNCTION 147870574 FUN_147870574 body=59 status=ok
// SIG undefined FUN_147870574(void)

undefined8 FUN_147870574(longlong *param_1)

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



// FUNCTION 14787064a FUN_14787064a body=83 status=ok
// SIG undefined FUN_14787064a(void)

undefined1 FUN_14787064a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar10);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      uVar7 = puVar1[5];
      uVar8 = puVar1[6];
      uVar9 = puVar1[7];
      puVar2 = (undefined4 *)(param_2 + lVar10);
      puVar2[4] = puVar1[4];
      puVar2[5] = uVar7;
      puVar2[6] = uVar8;
      puVar2[7] = uVar9;
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      FUN_144721cf4();
      lVar10 = lVar10 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1478706c6 FUN_1478706c6 body=59 status=ok
// SIG undefined FUN_1478706c6(void)

undefined8 FUN_1478706c6(longlong *param_1)

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



// FUNCTION 14787070c FUN_14787070c body=38 status=ok
// SIG undefined FUN_14787070c(void)

void FUN_14787070c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    if (*(longlong *)(param_2 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1478707f4 FUN_1478707f4 body=59 status=ok
// SIG undefined FUN_1478707f4(void)

undefined8 FUN_1478707f4(longlong *param_1)

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



// FUNCTION 1478708bc FUN_1478708bc body=88 status=ok
// SIG undefined FUN_1478708bc(void)

void FUN_1478708bc(longlong *param_1)

{
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_140e9b975(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147870914 FUN_147870914 body=75 status=ok
// SIG undefined FUN_147870914(void)

void FUN_147870914(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_1412c1f6e(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787098a FUN_14787098a body=75 status=ok
// SIG undefined FUN_14787098a(void)

void FUN_14787098a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_143528ea8(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147870a0e FUN_147870a0e body=318 status=ok
// SIG undefined FUN_147870a0e(void)

void FUN_147870a0e(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [44];
  int local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  longlong lStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  lStack_38 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  puVar2 = &local_68;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  local_6c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x170))(param_1,puVar2,local_6c != 0);
  *param_3 = uVar1;
  if (lStack_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147870b5a FUN_147870b5a body=249 status=ok
// SIG undefined FUN_147870b5a(void)

void FUN_147870b5a(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [44];
  int local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  uVar1 = (**(code **)(*param_1 + 0x78))(param_1,local_28,local_2c != 0);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147870c5a FUN_147870c5a body=249 status=ok
// SIG undefined FUN_147870c5a(void)

void FUN_147870c5a(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_58 [44];
  int local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  uVar1 = (**(code **)(*param_1 + 0x70))(param_1,local_28,local_2c != 0);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147870d60 FUN_147870d60 body=371 status=ok
// SIG undefined FUN_147870d60(void)

void FUN_147870d60(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [40];
  int local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined2 local_30;
  undefined1 local_2e;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0x303;
  local_2e = 3;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_3c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_40 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar3 = &local_38;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = (**(code **)(*param_1 + 0xb8))(param_1,puVar3,local_3c,local_40 != 0);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147870ed8 FUN_147870ed8 body=159 status=ok
// SIG undefined FUN_147870ed8(void)

void FUN_147870ed8(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x30))(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147870f88 FUN_147870f88 body=490 status=ok
// SIG undefined FUN_147870f88(void)

void FUN_147870f88(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_e8 [44];
  int local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  longlong lStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  longlong lStack_48;
  undefined8 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0xffffffff;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  lStack_48 = 0;
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  puVar2 = &local_78;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0xffffffff;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  lStack_88 = 0;
  local_80 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  puVar3 = &local_b8;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x1a8))(param_1,puVar2,puVar3,local_bc != 0);
  *param_3 = uVar1;
  if (lStack_88 != 0) {
    FUN_1400020a8();
  }
  if (lStack_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147871180 FUN_147871180 body=405 status=ok
// SIG undefined FUN_147871180(void)

void FUN_147871180(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_78 [36];
  int local_54;
  undefined8 local_50;
  undefined2 local_48;
  undefined1 local_46;
  undefined8 local_40;
  undefined2 local_38;
  undefined1 local_36;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = 0;
  local_38 = 0x303;
  local_36 = 3;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_50 = 0;
  local_48 = 0x303;
  local_46 = 3;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  local_54 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  puVar4 = &local_50;
  if (puVar3 != (undefined8 *)0x0) {
    puVar4 = puVar3;
  }
  puVar3 = &local_40;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = (**(code **)(*param_1 + 0xc0))(param_1,puVar3,puVar4,local_54 != 0);
  *param_3 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787131c FUN_14787131c body=332 status=ok
// SIG undefined FUN_14787131c(void)

void FUN_14787131c(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  int local_28;
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
  FUN_144a7add4();
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
  (**(code **)(*param_1 + 0x148))(param_1,local_20,local_21,local_28 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787146a FUN_14787146a body=126 status=ok
// SIG undefined FUN_14787146a(void)

void FUN_14787146a(longlong *param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x18))(param_1,&local_28);
  if (DAT_14c950c29 == '\x01') {
    if (local_28 == 0) {
      local_28 = 0;
    }
    else {
      FUN_14689c22e();
    }
  }
  *param_3 = local_28;
  param_3[1] = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478714f0 FUN_1478714f0 body=342 status=ok
// SIG undefined FUN_1478714f0(void)

void FUN_1478714f0(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  int local_30;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x80))(param_1,local_28,local_2c,local_30 != 0);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787164e FUN_14787164e body=283 status=ok
// SIG undefined FUN_14787164e(void)

void FUN_14787164e(longlong *param_1,longlong param_2)

{
  longlong **pplVar1;
  undefined1 auStack_58 [36];
  int local_34;
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a5dc74(local_30);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  pplVar1 = local_30;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar1 = *(longlong ***)(param_2 + 0x38);
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
  (**(code **)(*param_1 + 0x28))(param_1,pplVar1,local_34 != 0);
  if (local_30[0] != (longlong *)0x0) {
    (**(code **)(*local_30[0] + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787176e FUN_14787176e body=169 status=ok
// SIG undefined FUN_14787176e(void)

void FUN_14787176e(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x188))(param_1,local_24 != 0);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787181e FUN_14787181e body=277 status=ok
// SIG undefined FUN_14787181e(void)

void FUN_14787181e(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [36];
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
  puVar3 = &local_30;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = (**(code **)(*param_1 + 0x180))(param_1,puVar3,local_34 != 0);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147871938 FUN_147871938 body=162 status=ok
// SIG undefined FUN_147871938(void)

void FUN_147871938(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x90))(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478719e2 FUN_1478719e2 body=240 status=ok
// SIG undefined FUN_1478719e2(void)

void FUN_1478719e2(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  int local_20;
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
  (**(code **)(*param_1 + 0xd0))(param_1,local_19,local_20 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147871ae0 FUN_147871ae0 body=318 status=ok
// SIG undefined FUN_147871ae0(void)

void FUN_147871ae0(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [44];
  int local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  longlong lStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  lStack_38 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  puVar2 = &local_68;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  local_6c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x178))(param_1,puVar2,local_6c != 0);
  *param_3 = uVar1;
  if (lStack_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147871c2c FUN_147871c2c body=401 status=ok
// SIG undefined FUN_147871c2c(void)

void FUN_147871c2c(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [40];
  int local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  longlong lStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  lStack_38 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  puVar2 = &local_68;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x1a0))(param_1,puVar2,local_6c,local_70 != 0);
  *param_3 = uVar1;
  if (lStack_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147871dca FUN_147871dca body=260 status=ok
// SIG undefined FUN_147871dca(void)

void FUN_147871dca(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [44];
  int local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  uVar1 = (**(code **)(*param_1 + 0x88))(param_1,local_28,local_2c != 0);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147871edc FUN_147871edc body=289 status=ok
// SIG undefined FUN_147871edc(void)

void FUN_147871edc(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [44];
  int local_3c;
  undefined8 local_38;
  undefined2 local_30;
  undefined1 local_2e;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0x303;
  local_2e = 3;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  puVar3 = &local_38;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = (**(code **)(*param_1 + 200))(param_1,puVar3,local_3c != 0);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787200a FUN_14787200a body=372 status=ok
// SIG undefined FUN_14787200a(void)

void FUN_14787200a(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [40];
  int local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined2 local_30;
  undefined1 local_2e;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0x303;
  local_2e = 3;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
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
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar3 = &local_38;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = (**(code **)(*param_1 + 0x128))(param_1,puVar3,local_3c,local_40 != 0);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787218c FUN_14787218c body=372 status=ok
// SIG undefined FUN_14787218c(void)

void FUN_14787218c(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [40];
  int local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined2 local_30;
  undefined1 local_2e;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0x303;
  local_2e = 3;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
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
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar3 = &local_38;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = (**(code **)(*param_1 + 0xf8))(param_1,puVar3,local_3c,local_40 != 0);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787230e FUN_14787230e body=405 status=ok
// SIG undefined FUN_14787230e(void)

void FUN_14787230e(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_78 [36];
  int local_54;
  undefined8 local_50;
  undefined2 local_48;
  undefined1 local_46;
  undefined8 local_40;
  undefined2 local_38;
  undefined1 local_36;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = 0;
  local_38 = 0x303;
  local_36 = 3;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_50 = 0;
  local_48 = 0x303;
  local_46 = 3;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  local_54 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  puVar4 = &local_50;
  if (puVar3 != (undefined8 *)0x0) {
    puVar4 = puVar3;
  }
  puVar3 = &local_40;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = (**(code **)(*param_1 + 0x100))(param_1,puVar3,puVar4,local_54 != 0);
  *param_3 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478724aa FUN_1478724aa body=418 status=ok
// SIG undefined FUN_1478724aa(void)

void FUN_1478724aa(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x60))(param_1,local_1c,local_20,local_24);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147872654 FUN_147872654 body=415 status=ok
// SIG undefined FUN_147872654(void)

void FUN_147872654(longlong *param_1,longlong param_2)

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
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_1446dcc8c();
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
  (**(code **)(*param_1 + 0x58))(param_1,local_1c,local_20,local_24);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478727fa FUN_1478727fa body=415 status=ok
// SIG undefined FUN_1478727fa(void)

void FUN_1478727fa(longlong *param_1,longlong param_2)

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
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_1446dcc8c();
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
  (**(code **)(*param_1 + 0x48))(param_1,local_1c,local_20,local_24);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478729a0 FUN_1478729a0 body=418 status=ok
// SIG undefined FUN_1478729a0(void)

void FUN_1478729a0(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x50))(param_1,local_1c,local_20,local_24);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147872b50 FUN_147872b50 body=458 status=ok
// SIG undefined FUN_147872b50(void)

void FUN_147872b50(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined2 local_30;
  undefined1 local_2e;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  local_30 = 0x303;
  local_2e = 3;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
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
  local_44 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_44 != 0;
  puVar3 = &local_38;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  uVar2 = (**(code **)(*param_1 + 0x118))(param_1,puVar3,local_3c,local_40);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147872d28 FUN_147872d28 body=624 status=ok
// SIG undefined FUN_147872d28(void)

void FUN_147872d28(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined1 local_90;
  int local_7c;
  longlong local_78 [7];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_40 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_78[4] = 0;
  local_78[5] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78 + 4);
  }
  plVar3 = local_78 + 4;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_78[2] = 0;
  local_78[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78 + 2);
  }
  plVar4 = local_78 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
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
  plVar2 = local_78;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_90 = local_7c != 0;
  local_98 = plVar2;
  uVar1 = (**(code **)(*param_1 + 0x98))(param_1,local_40,plVar3,plVar4);
  *param_3 = uVar1;
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_78[2] != 0) {
    FUN_1400020a8();
  }
  if (local_78[4] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147872fa6 FUN_147872fa6 body=372 status=ok
// SIG undefined FUN_147872fa6(void)

void FUN_147872fa6(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined2 local_30;
  undefined1 local_2e;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  local_30 = 0x303;
  local_2e = 3;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  puVar3 = &local_38;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_48;
  uStack_64 = uStack_44;
  uStack_60 = uStack_40;
  uStack_5c = uStack_3c;
  uVar2 = (**(code **)(*param_1 + 0x108))(param_1,puVar3,&local_68,local_4c != 0);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147873128 FUN_147873128 body=390 status=ok
// SIG undefined FUN_147873128(void)

void FUN_147873128(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_78 [44];
  int local_4c;
  longlong local_48 [3];
  undefined2 local_30;
  undefined1 local_2e;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48[2] = 0;
  local_30 = 0x303;
  local_2e = 3;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
  }
  plVar2 = local_48 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
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
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x110))(param_1,plVar2,local_48,local_4c != 0);
  *param_3 = uVar1;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478732c2 FUN_1478732c2 body=460 status=ok
// SIG undefined FUN_1478732c2(void)

void FUN_1478732c2(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  int local_4c;
  int local_48;
  undefined1 local_41;
  undefined8 local_40;
  undefined2 local_38;
  undefined1 local_36;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = 0;
  local_38 = 0x303;
  local_36 = 3;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_41 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_41);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_41);
  }
  local_48 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  iVar2 = local_48;
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_4c != 0;
  puVar4 = &local_40;
  if (puVar1 != (undefined8 *)0x0) {
    puVar4 = puVar1;
  }
  uVar3 = (**(code **)(*param_1 + 0xd8))(param_1,puVar4,local_41,iVar2 != 0);
  *param_3 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787349c FUN_14787349c body=371 status=ok
// SIG undefined FUN_14787349c(void)

void FUN_14787349c(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [40];
  int local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined2 local_30;
  undefined1 local_2e;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0x303;
  local_2e = 3;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_3c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_40 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar3 = &local_38;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = (**(code **)(*param_1 + 0xe0))(param_1,puVar3,local_3c,local_40 != 0);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787361c FUN_14787361c body=410 status=ok
// SIG undefined FUN_14787361c(void)

void FUN_14787361c(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_88 [40];
  int local_60;
  undefined2 local_5c;
  undefined1 local_5a;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined2 local_38;
  undefined1 local_36;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = 0;
  local_38 = 0x303;
  local_36 = 3;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_5c = 0;
  local_5a = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  puVar2 = *(undefined2 **)(param_2 + 0x38);
  local_60 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  puVar5 = &local_5c;
  if (puVar2 != (undefined2 *)0x0) {
    puVar5 = puVar2;
  }
  puVar4 = &local_40;
  if (puVar1 != (undefined8 *)0x0) {
    puVar4 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar3 = (**(code **)(*param_1 + 0x120))(param_1,puVar4,puVar5,local_60 != 0);
  *param_3 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478737c4 FUN_1478737c4 body=410 status=ok
// SIG undefined FUN_1478737c4(void)

void FUN_1478737c4(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 auStack_88 [44];
  int local_5c;
  longlong local_58 [3];
  undefined8 local_40;
  undefined2 local_38;
  undefined1 local_36;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = 0;
  local_38 = 0x303;
  local_36 = 3;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar2 = &local_40;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
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
  plVar3 = local_58;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_5c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x130))(param_1,puVar2,plVar3,local_5c != 0);
  *param_3 = uVar1;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147873966 FUN_147873966 body=248 status=ok
// SIG undefined FUN_147873966(void)

void FUN_147873966(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0x10000ea60;
  FUN_1446dcc8c();
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
  (**(code **)(*param_1 + 0x68))(param_1,local_20,local_24 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147873a60 FUN_147873a60 body=199 status=ok
// SIG undefined FUN_147873a60(void)

void FUN_147873a60(longlong *param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140be4ae0();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_28;
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  local_30 = uStack_20;
  (**(code **)(*param_1 + 0x10))(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147873b2e FUN_147873b2e body=240 status=ok
// SIG undefined FUN_147873b2e(void)

void FUN_147873b2e(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  int local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_1446dcc8c();
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
  (**(code **)(*param_1 + 0x38))(param_1,local_1c,local_20 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147873c26 FUN_147873c26 body=242 status=ok
// SIG undefined FUN_147873c26(void)

void FUN_147873c26(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x40))(param_1,local_1c,local_20 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147873d26 FUN_147873d26 body=569 status=ok
// SIG undefined FUN_147873d26(void)

void FUN_147873d26(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  int local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_44;
  undefined8 local_40;
  undefined2 local_38;
  undefined1 local_36;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_40 = 0;
  local_38 = 0x303;
  local_36 = 3;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_44 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0x3ff00000;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_64 = 0x3ff00000;
  uStack_60 = 0;
  uStack_5c = 0x3ff00000;
  local_58 = 0x3ff0000000000000;
  uStack_50 = 0;
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
  local_ac = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_ac);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_ac);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_b8 = local_ac != 0;
  puVar4 = &local_a8;
  if (puVar3 != (undefined8 *)0x0) {
    puVar4 = puVar3;
  }
  puVar3 = &local_40;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  uVar2 = (**(code **)(*param_1 + 0xf0))(param_1,puVar3,local_44,puVar4);
  *param_3 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147873f6c FUN_147873f6c body=529 status=ok
// SIG undefined FUN_147873f6c(void)

void FUN_147873f6c(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  int local_6c;
  longlong local_68 [5];
  undefined2 local_40;
  undefined1 local_3e;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68[4] = 0;
  local_40 = 0x303;
  local_3e = 3;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68 + 4);
  }
  plVar3 = local_68 + 4;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_68[2] = 0;
  local_68[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68 + 2);
  }
  plVar4 = local_68 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
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
  local_6c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = local_6c != 0;
  uVar1 = (**(code **)(*param_1 + 0xe8))(param_1,plVar3,plVar4,plVar2);
  *param_3 = uVar1;
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147874184 FUN_147874184 body=332 status=ok
// SIG undefined FUN_147874184(void)

void FUN_147874184(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  int local_28;
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
  FUN_144a7add4();
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
  (**(code **)(*param_1 + 0x140))(param_1,local_20,local_21,local_28 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478742d4 FUN_1478742d4 body=42 status=ok
// SIG undefined FUN_1478742d4(void)

void FUN_1478742d4(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x148))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1478742fe FUN_1478742fe body=46 status=ok
// SIG undefined FUN_1478742fe(void)

void FUN_1478742fe(longlong *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x30))();
  FUN_14787432c(param_3,uVar1);
  return;
}



// FUNCTION 14787432c FUN_14787432c body=95 status=ok
// SIG undefined FUN_14787432c(void)

undefined8 * FUN_14787432c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145c273db(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14787751c(param_1,iVar1);
      FUN_14787757e(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14787438c FUN_14787438c body=214 status=ok
// SIG undefined FUN_14787438c(void)

void FUN_14787438c(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = (**(code **)(*param_1 + 0x60))(param_1,local_24);
  FUN_140de4b5e(param_3,lVar1);
  FUN_14785c646(param_3 + 0x10,lVar1 + 0x10);
  FUN_140de4b5e(param_3 + 0x20,lVar1 + 0x20);
  *(undefined8 *)(param_3 + 0x30) = *(undefined8 *)(lVar1 + 0x30);
  *(undefined4 *)(param_3 + 0x38) = *(undefined4 *)(lVar1 + 0x38);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147874464 FUN_147874464 body=216 status=ok
// SIG undefined FUN_147874464(void)

void FUN_147874464(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
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
  lVar1 = (**(code **)(*param_1 + 0x68))(param_1,local_28);
  FUN_140de4b5e(param_3,lVar1);
  FUN_14785c646(param_3 + 0x10,lVar1 + 0x10);
  FUN_140de4b5e(param_3 + 0x20,lVar1 + 0x20);
  *(undefined8 *)(param_3 + 0x30) = *(undefined8 *)(lVar1 + 0x30);
  *(undefined4 *)(param_3 + 0x38) = *(undefined4 *)(lVar1 + 0x38);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787453e FUN_14787453e body=216 status=ok
// SIG undefined FUN_14787453e(void)

void FUN_14787453e(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_38 = 0xffffffff;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar2 = &local_68;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x80))(param_1,puVar2);
  *param_3 = uVar1;
  FUN_1478571f4(&local_68);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147874618 FUN_147874618 body=167 status=ok
// SIG undefined FUN_147874618(void)

void FUN_147874618(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
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
  uVar1 = (**(code **)(*param_1 + 0x88))(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478746c0 FUN_1478746c0 body=184 status=ok
// SIG undefined FUN_1478746c0(void)

void FUN_1478746c0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
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
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xa8))(param_1,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787477a FUN_14787477a body=89 status=ok
// SIG undefined FUN_14787477a(void)

void FUN_14787477a(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x28))(param_1,&local_20);
  *param_3 = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478747d4 FUN_1478747d4 body=41 status=ok
// SIG undefined FUN_1478747d4(void)

void FUN_1478747d4(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0xc0))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1478747fe FUN_1478747fe body=38 status=ok
// SIG undefined FUN_1478747fe(void)

void FUN_1478747fe(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x18))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147874824 FUN_147874824 body=38 status=ok
// SIG undefined FUN_147874824(void)

void FUN_147874824(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x20))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14787484a FUN_14787484a body=41 status=ok
// SIG undefined FUN_14787484a(void)

void FUN_14787484a(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0xb8))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147874874 FUN_147874874 body=41 status=ok
// SIG undefined FUN_147874874(void)

void FUN_147874874(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0xa0))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14787489e FUN_14787489e body=40 status=ok
// SIG undefined FUN_14787489e(void)

void FUN_14787489e(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x10))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1478748cc FUN_1478748cc body=165 status=ok
// SIG undefined FUN_1478748cc(void)

void FUN_1478748cc(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x90))(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147874978 FUN_147874978 body=180 status=ok
// SIG undefined FUN_147874978(void)

void FUN_147874978(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x98))(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147874a40 FUN_147874a40 body=48 status=ok
// SIG undefined FUN_147874a40(void)

longlong FUN_147874a40(longlong param_1,int param_2)

{
  param_1 = param_1 + -200;
  FUN_14074f0b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147874a78 FUN_147874a78 body=48 status=ok
// SIG undefined FUN_147874a78(void)

longlong FUN_147874a78(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xd0;
  FUN_14074f0b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147874ab0 FUN_147874ab0 body=48 status=ok
// SIG undefined FUN_147874ab0(void)

longlong FUN_147874ab0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xd8;
  FUN_14074f0b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147874ae8 FUN_147874ae8 body=48 status=ok
// SIG undefined FUN_147874ae8(void)

longlong FUN_147874ae8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xe0;
  FUN_14074f0b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147874b56 FUN_147874b56 body=45 status=ok
// SIG undefined FUN_147874b56(void)

longlong FUN_147874b56(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140899bb4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147874b84 FUN_147874b84 body=48 status=ok
// SIG undefined FUN_147874b84(void)

longlong FUN_147874b84(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_140899bb4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147874bb4 FUN_147874bb4 body=48 status=ok
// SIG undefined FUN_147874bb4(void)

longlong FUN_147874bb4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_140899bb4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147874be4 FUN_147874be4 body=48 status=ok
// SIG undefined FUN_147874be4(void)

longlong FUN_147874be4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_140899bb4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147874c14 FUN_147874c14 body=45 status=ok
// SIG undefined FUN_147874c14(void)

longlong FUN_147874c14(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006df30(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147874c42 FUN_147874c42 body=48 status=ok
// SIG undefined FUN_147874c42(void)

longlong FUN_147874c42(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14006df30(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147874c72 FUN_147874c72 body=48 status=ok
// SIG undefined FUN_147874c72(void)

longlong FUN_147874c72(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14006df30(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147874ca2 FUN_147874ca2 body=48 status=ok
// SIG undefined FUN_147874ca2(void)

longlong FUN_147874ca2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14006df30(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147874d3e FUN_147874d3e body=59 status=ok
// SIG undefined FUN_147874d3e(void)

undefined8 FUN_147874d3e(longlong *param_1)

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



// FUNCTION 147874e5c FUN_147874e5c body=54 status=ok
// SIG undefined FUN_147874e5c(void)

undefined1 FUN_147874e5c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147874f70(param_2,param_3);
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return 1;
}



// FUNCTION 147874eba FUN_147874eba body=59 status=ok
// SIG undefined FUN_147874eba(void)

undefined8 FUN_147874eba(longlong *param_1)

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



// FUNCTION 147874f00 FUN_147874f00 body=33 status=ok
// SIG undefined FUN_147874f00(void)

void FUN_147874f00(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_1417ad27e(param_2 + 0x18);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 147874f70 FUN_147874f70 body=82 status=ok
// SIG undefined FUN_147874f70(void)

undefined4 * FUN_147874f70(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  param_1[4] = param_2[4];
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1417ad2bc(param_1 + 6,param_2 + 6);
  lVar4 = *(longlong *)(param_2 + 0x18);
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_14689c22e();
      lVar4 = *(longlong *)(param_2 + 0x18);
    }
  }
  *(longlong *)(param_1 + 0x18) = lVar4;
  return param_1;
}



// FUNCTION 147875046 FUN_147875046 body=59 status=ok
// SIG undefined FUN_147875046(void)

undefined8 FUN_147875046(longlong *param_1)

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



// FUNCTION 14787517a FUN_14787517a body=59 status=ok
// SIG undefined FUN_14787517a(void)

undefined8 FUN_14787517a(longlong *param_1)

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



// FUNCTION 1478752a6 FUN_1478752a6 body=59 status=ok
// SIG undefined FUN_1478752a6(void)

undefined8 FUN_1478752a6(longlong *param_1)

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



// FUNCTION 147875374 FUN_147875374 body=54 status=ok
// SIG undefined FUN_147875374(void)

undefined1 FUN_147875374(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14787548c(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1478753d2 FUN_1478753d2 body=59 status=ok
// SIG undefined FUN_1478753d2(void)

undefined8 FUN_1478753d2(longlong *param_1)

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



// FUNCTION 147875418 FUN_147875418 body=37 status=ok
// SIG undefined FUN_147875418(void)

void FUN_147875418(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 14787548c FUN_14787548c body=89 status=ok
// SIG undefined FUN_14787548c(void)

undefined8 * FUN_14787548c(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1478754e6(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x24);
      }
    }
  }
  return param_1;
}



// FUNCTION 1478754e6 FUN_1478754e6 body=115 status=ok
// SIG undefined FUN_1478754e6(void)

void FUN_1478754e6(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x24,4);
    iVar2 = (int)(uVar1 / 0x24);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x24,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1478755ce FUN_1478755ce body=59 status=ok
// SIG undefined FUN_1478755ce(void)

undefined8 FUN_1478755ce(longlong *param_1)

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



// FUNCTION 1478756b6 FUN_1478756b6 body=54 status=ok
// SIG undefined FUN_1478756b6(void)

undefined1 FUN_1478756b6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1478757c8(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 147875714 FUN_147875714 body=59 status=ok
// SIG undefined FUN_147875714(void)

undefined8 FUN_147875714(longlong *param_1)

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



// FUNCTION 14787575a FUN_14787575a body=32 status=ok
// SIG undefined FUN_14787575a(void)

void FUN_14787575a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1478708bc(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1478757c8 FUN_1478757c8 body=69 status=ok
// SIG undefined FUN_1478757c8(void)

longlong FUN_1478757c8(longlong param_1,longlong param_2)

{
  FUN_14787580e();
  FUN_14787586c(param_1 + 0x10,param_2 + 0x10);
  FUN_1406fa324(param_1 + 0x20,param_2 + 0x20);
  FUN_1478758c4(param_1 + 0x30,param_2 + 0x30);
  return param_1;
}



// FUNCTION 14787580e FUN_14787580e body=93 status=ok
// SIG undefined FUN_14787580e(void)

undefined8 * FUN_14787580e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140e9b975(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147875920(param_1,iVar1);
      FUN_147875982(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14787586c FUN_14787586c body=88 status=ok
// SIG undefined FUN_14787586c(void)

undefined8 * FUN_14787586c(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1478759fa(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 6);
      }
    }
  }
  return param_1;
}



// FUNCTION 1478758c4 FUN_1478758c4 body=92 status=ok
// SIG undefined FUN_1478758c4(void)

undefined8 * FUN_1478758c4(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147875a5c(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x1c);
      }
    }
  }
  return param_1;
}



// FUNCTION 147875920 FUN_147875920 body=98 status=ok
// SIG undefined FUN_147875920(void)

void FUN_147875920(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147875982 FUN_147875982 body=120 status=ok
// SIG undefined FUN_147875982(void)

void FUN_147875982(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  int *piVar2;
  
  if (param_3 != 0) {
    piVar2 = (int *)(param_2 + 8);
    do {
      *param_1 = 0;
      iVar1 = *piVar2;
      _Src = *(void **)(piVar2 + -2);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1478754e6(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x24);
      }
      param_1 = param_1 + 2;
      piVar2 = piVar2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1478759fa FUN_1478759fa body=98 status=ok
// SIG undefined FUN_1478759fa(void)

void FUN_1478759fa(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 6,8);
    iVar1 = (int)(uVar2 >> 6);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x40,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147875a5c FUN_147875a5c body=121 status=ok
// SIG undefined FUN_147875a5c(void)

void FUN_147875a5c(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x1c,4);
    iVar2 = (int)(uVar1 / 0x1c);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x1c,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147875b46 FUN_147875b46 body=133 status=ok
// SIG undefined FUN_147875b46(void)

undefined1 FUN_147875b46(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
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
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  byte bVar19;
  longlong lVar20;
  longlong lVar21;
  
  if (param_4 != 0) {
    lVar21 = 0;
    bVar19 = DAT_14c950c29;
    do {
      lVar20 = *(longlong *)(param_3 + lVar21);
      if ((bVar19 & 1) != 0) {
        if (lVar20 == 0) {
          lVar20 = 0;
        }
        else {
          FUN_14689c22e();
          lVar20 = *(longlong *)(param_3 + lVar21);
          bVar19 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar21);
      *plVar1 = lVar20;
      puVar2 = (undefined4 *)(param_3 + 8 + lVar21);
      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      uVar6 = puVar2[3];
      puVar3 = (undefined4 *)(param_3 + 0x18 + lVar21);
      uVar7 = *puVar3;
      uVar8 = puVar3[1];
      uVar9 = puVar3[2];
      uVar10 = puVar3[3];
      puVar3 = (undefined4 *)(param_3 + 0x28 + lVar21);
      uVar11 = *puVar3;
      uVar12 = puVar3[1];
      uVar13 = puVar3[2];
      uVar14 = puVar3[3];
      puVar3 = (undefined4 *)(param_3 + 0x38 + lVar21);
      uVar15 = *puVar3;
      uVar16 = puVar3[1];
      uVar17 = puVar3[2];
      uVar18 = puVar3[3];
      *(undefined4 *)(plVar1 + 1) = *puVar2;
      *(undefined4 *)((longlong)plVar1 + 0xc) = uVar4;
      *(undefined4 *)(plVar1 + 2) = uVar5;
      *(undefined4 *)((longlong)plVar1 + 0x14) = uVar6;
      *(undefined4 *)(plVar1 + 3) = uVar7;
      *(undefined4 *)((longlong)plVar1 + 0x1c) = uVar8;
      *(undefined4 *)(plVar1 + 4) = uVar9;
      *(undefined4 *)((longlong)plVar1 + 0x24) = uVar10;
      *(undefined4 *)(plVar1 + 5) = uVar11;
      *(undefined4 *)((longlong)plVar1 + 0x2c) = uVar12;
      *(undefined4 *)(plVar1 + 6) = uVar13;
      *(undefined4 *)((longlong)plVar1 + 0x34) = uVar14;
      *(undefined4 *)(plVar1 + 7) = uVar15;
      *(undefined4 *)((longlong)plVar1 + 0x3c) = uVar16;
      *(undefined4 *)(plVar1 + 8) = uVar17;
      *(undefined4 *)((longlong)plVar1 + 0x44) = uVar18;
      lVar21 = lVar21 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147875bf4 FUN_147875bf4 body=59 status=ok
// SIG undefined FUN_147875bf4(void)

undefined8 FUN_147875bf4(longlong *param_1)

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



// FUNCTION 147875c96 FUN_147875c96 body=36 status=ok
// SIG undefined FUN_147875c96(void)

void FUN_147875c96(undefined8 param_1,longlong param_2)

{
  FUN_14109baa4(param_2);
  FUN_14109baa4(param_2 + 0x88);
  return;
}



// FUNCTION 147875cba FUN_147875cba body=36 status=ok
// SIG undefined FUN_147875cba(void)

void FUN_147875cba(undefined8 param_1,longlong param_2)

{
  FUN_14109baa4(param_2);
  FUN_14109baa4(param_2 + 0x88);
  return;
}



// FUNCTION 147875cfc FUN_147875cfc body=85 status=ok
// SIG undefined FUN_147875cfc(void)

undefined1 FUN_147875cfc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14115e0ba(param_2,param_3);
    FUN_14115e0ba(param_2 + 0x88,param_3 + 0x88);
    param_2 = param_2 + 0x110;
    param_3 = param_3 + 0x110;
  }
  return 1;
}



// FUNCTION 147875d7a FUN_147875d7a body=59 status=ok
// SIG undefined FUN_147875d7a(void)

undefined8 FUN_147875d7a(longlong *param_1)

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



// FUNCTION 147875dc6 FUN_147875dc6 body=40 status=ok
// SIG undefined FUN_147875dc6(void)

void FUN_147875dc6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x110) == '\x01') {
    FUN_145dcd502(param_2);
    *(undefined1 *)(param_2 + 0x110) = 0;
  }
  return;
}



// FUNCTION 147875eec FUN_147875eec body=59 status=ok
// SIG undefined FUN_147875eec(void)

undefined8 FUN_147875eec(longlong *param_1)

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



// FUNCTION 1478760a8 FUN_1478760a8 body=59 status=ok
// SIG undefined FUN_1478760a8(void)

undefined8 FUN_1478760a8(longlong *param_1)

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



// FUNCTION 14787614a FUN_14787614a body=48 status=ok
// SIG undefined FUN_14787614a(void)

void FUN_14787614a(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x210);
  FUN_147b06662(param_2);
  *param_2 = &PTR_FUN_14a6314b0;
  return;
}



// FUNCTION 14787617a FUN_14787617a body=32 status=ok
// SIG undefined FUN_14787617a(void)

void FUN_14787617a(undefined8 param_1,undefined8 *param_2)

{
  FUN_147b06662(param_2);
  *param_2 = &PTR_FUN_14a6314b0;
  return;
}



// FUNCTION 1478761be FUN_1478761be body=63 status=ok
// SIG undefined FUN_1478761be(void)

undefined1 FUN_1478761be(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147876328(param_2,param_3);
    param_3 = param_3 + 0x210;
    param_2 = param_2 + 0x210;
  }
  return 1;
}



// FUNCTION 147876226 FUN_147876226 body=81 status=ok
// SIG undefined FUN_147876226(void)

int FUN_147876226(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  iVar1 = (int)param_2[1];
  if (iVar1 == 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    iVar1 = (int)param_2[1];
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147876288 FUN_147876288 body=38 status=ok
// SIG undefined FUN_147876288(void)

void FUN_147876288(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x210) == '\x01') {
    FUN_147b06730(param_2);
    *(undefined1 *)(param_2 + 0x210) = 0;
  }
  return;
}



// FUNCTION 1478762fc FUN_1478762fc body=43 status=ok
// SIG undefined FUN_1478762fc(void)

undefined8 FUN_1478762fc(undefined8 param_1,int param_2)

{
  FUN_147b06730();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x210);
  }
  return param_1;
}



// FUNCTION 147876328 FUN_147876328 body=152 status=ok
// SIG undefined FUN_147876328(void)

longlong FUN_147876328(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_1478763c0();
  lVar1 = *(longlong *)(param_2 + 0x1e0);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_14689c22e();
      lVar1 = *(longlong *)(param_2 + 0x1e0);
    }
  }
  *(longlong *)(param_1 + 0x1e0) = lVar1;
  FUN_140c99494(param_1 + 0x1e8,param_2 + 0x1e8);
  lVar1 = *(longlong *)(param_2 + 0x1f8);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_14689c22e();
      lVar1 = *(longlong *)(param_2 + 0x1f8);
    }
  }
  *(longlong *)(param_1 + 0x1f8) = lVar1;
  FUN_147876444(param_1 + 0x200,param_2 + 0x200);
  return param_1;
}



// FUNCTION 1478763c0 FUN_1478763c0 body=132 status=ok
// SIG undefined FUN_1478763c0(void)

longlong FUN_1478763c0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  lVar6 = *(longlong *)(param_2 + 0x10);
  if (DAT_14c950c29 == '\x01') {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_14689c22e();
      lVar6 = *(longlong *)(param_2 + 0x10);
    }
  }
  *(longlong *)(param_1 + 0x10) = lVar6;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)(param_2 + 0x1f);
  FUN_1400f437c(param_1 + 0x28,param_2 + 0x28);
  uVar1 = *(undefined8 *)(param_2 + 0x1b8);
  uVar2 = *(undefined8 *)(param_2 + 0x1c0);
  uVar3 = *(undefined8 *)(param_2 + 0x1c8);
  uVar4 = *(undefined8 *)(param_2 + 0x1cc);
  uVar5 = *(undefined8 *)(param_2 + 0x1d4);
  *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(param_2 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1b8) = uVar1;
  *(undefined8 *)(param_1 + 0x1c0) = uVar2;
  *(undefined8 *)(param_1 + 0x1c8) = uVar3;
  *(undefined8 *)(param_1 + 0x1cc) = uVar4;
  *(undefined8 *)(param_1 + 0x1d4) = uVar5;
  return param_1;
}



// FUNCTION 147876444 FUN_147876444 body=79 status=ok
// SIG undefined FUN_147876444(void)

undefined8 * FUN_147876444(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1478767a2(param_1,iVar1);
      FUN_147876804(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147876494 FUN_147876494 body=90 status=ok
// SIG undefined FUN_147876494(void)

void FUN_147876494(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar1 = FUN_144a3809e((longlong)param_2,1);
    iVar2 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar2 = iVar1;
    }
  }
  if (param_3 < iVar2) {
    FUN_1446f8d3c(param_1,0,iVar2,1,1);
    param_3 = iVar2;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1478764ee FUN_1478764ee body=111 status=ok
// SIG undefined FUN_1478764ee(void)

void FUN_1478764ee(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x38,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x38,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14787655d FUN_14787655d body=142 status=ok
// SIG undefined FUN_14787655d(void)

void FUN_14787655d(longlong param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  
  if (param_3 != 0) {
    puVar9 = (undefined8 *)(param_1 + 0x28);
    do {
      *(undefined4 *)(puVar9 + -5) = *param_2;
      uVar2 = param_2[3];
      uVar3 = param_2[4];
      uVar4 = param_2[5];
      uVar5 = param_2[6];
      uVar6 = param_2[7];
      uVar7 = param_2[8];
      uVar8 = param_2[9];
      *(undefined4 *)(puVar9 + -4) = param_2[2];
      *(undefined4 *)((longlong)puVar9 + -0x1c) = uVar2;
      *(undefined4 *)(puVar9 + -3) = uVar3;
      *(undefined4 *)((longlong)puVar9 + -0x14) = uVar4;
      *(undefined4 *)(puVar9 + -2) = uVar5;
      *(undefined4 *)((longlong)puVar9 + -0xc) = uVar6;
      *(undefined4 *)(puVar9 + -1) = uVar7;
      *(undefined4 *)((longlong)puVar9 + -4) = uVar8;
      *puVar9 = 0;
      iVar1 = param_2[0xc];
      _Src = *(void **)(param_2 + 10);
      *(int *)(puVar9 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
      }
      else {
        FUN_1447ce8be(puVar9,iVar1,0);
        memcpy((void *)*puVar9,_Src,(longlong)iVar1 * 0xc);
      }
      param_2 = param_2 + 0xe;
      puVar9 = puVar9 + 7;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1478765ec FUN_1478765ec body=130 status=ok
// SIG undefined FUN_1478765ec(void)

void FUN_1478765ec(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147876670 FUN_147876670 body=304 status=ok
// SIG undefined FUN_147876670(void)

void FUN_147876670(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar4 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar5 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
        if (uStack_50._4_4_ < uVar5) {
          FUN_1447a71f6(&local_58,uVar4 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
        FUN_1449db362(&local_68);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  FUN_144a3e8f2(param_1,&local_58);
  FUN_144760e21(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478767a2 FUN_1478767a2 body=98 status=ok
// SIG undefined FUN_1478767a2(void)

void FUN_1478767a2(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147876804 FUN_147876804 body=78 status=ok
// SIG undefined FUN_147876804(void)

void FUN_147876804(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_14689c22e();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 147876864 FUN_147876864 body=54 status=ok
// SIG undefined FUN_147876864(void)

void FUN_147876864(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x200) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x100) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1478768b0 FUN_1478768b0 body=333 status=ok
// SIG undefined FUN_1478768b0(void)

undefined8 FUN_1478768b0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  void *_Dst;
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
  longlong lVar15;
  
  if (param_4 != 0) {
    lVar15 = 0;
    do {
      lVar1 = param_3 + lVar15;
      lVar2 = param_2 + lVar15;
      puVar3 = (undefined8 *)(param_3 + lVar15);
      _Dst = (void *)(param_2 + 0x10 + lVar15);
      *(undefined2 *)((longlong)_Dst + -8) = *(undefined2 *)(puVar3 + 1);
      *(undefined8 *)((longlong)_Dst + -0x10) = *puVar3;
      memcpy(_Dst,puVar3 + 2,0xc0);
      uVar4 = *(undefined4 *)((longlong)puVar3 + 0xd4);
      uVar5 = *(undefined4 *)(puVar3 + 0x1b);
      uVar6 = *(undefined4 *)((longlong)puVar3 + 0xdc);
      uVar7 = *(undefined4 *)(puVar3 + 0x1c);
      uVar8 = *(undefined4 *)((longlong)puVar3 + 0xe4);
      uVar9 = *(undefined4 *)(puVar3 + 0x1d);
      uVar10 = *(undefined4 *)((longlong)puVar3 + 0xec);
      uVar11 = *(undefined4 *)(puVar3 + 0x1e);
      uVar12 = *(undefined4 *)((longlong)puVar3 + 0xf4);
      uVar13 = *(undefined4 *)(puVar3 + 0x1f);
      uVar14 = *(undefined4 *)((longlong)puVar3 + 0xfc);
      *(undefined4 *)((longlong)_Dst + 0xc0) = *(undefined4 *)(puVar3 + 0x1a);
      *(undefined4 *)((longlong)_Dst + 0xc4) = uVar4;
      *(undefined4 *)((longlong)_Dst + 200) = uVar5;
      *(undefined4 *)((longlong)_Dst + 0xcc) = uVar6;
      *(undefined4 *)((longlong)_Dst + 0xd0) = uVar7;
      *(undefined4 *)((longlong)_Dst + 0xd4) = uVar8;
      *(undefined4 *)((longlong)_Dst + 0xd8) = uVar9;
      *(undefined4 *)((longlong)_Dst + 0xdc) = uVar10;
      *(undefined4 *)((longlong)_Dst + 0xe0) = uVar11;
      *(undefined4 *)((longlong)_Dst + 0xe4) = uVar12;
      *(undefined4 *)((longlong)_Dst + 0xe8) = uVar13;
      *(undefined4 *)((longlong)_Dst + 0xec) = uVar14;
      FUN_140820a14(lVar2 + 0x100,lVar1 + 0x100);
      memcpy((void *)(lVar2 + 0x110),(void *)(lVar1 + 0x110),0xbe);
      uVar4 = *(undefined4 *)((longlong)puVar3 + 0x1d4);
      uVar5 = *(undefined4 *)(puVar3 + 0x3b);
      uVar6 = *(undefined4 *)((longlong)puVar3 + 0x1dc);
      uVar7 = *(undefined4 *)(puVar3 + 0x3c);
      uVar8 = *(undefined4 *)((longlong)puVar3 + 0x1e4);
      uVar9 = *(undefined4 *)(puVar3 + 0x3d);
      uVar10 = *(undefined4 *)((longlong)puVar3 + 0x1ec);
      uVar11 = *(undefined4 *)(puVar3 + 0x3e);
      uVar12 = *(undefined4 *)((longlong)puVar3 + 500);
      uVar13 = *(undefined4 *)(puVar3 + 0x3f);
      uVar14 = *(undefined4 *)((longlong)puVar3 + 0x1fc);
      *(undefined4 *)((longlong)_Dst + 0x1c0) = *(undefined4 *)(puVar3 + 0x3a);
      *(undefined4 *)((longlong)_Dst + 0x1c4) = uVar4;
      *(undefined4 *)((longlong)_Dst + 0x1c8) = uVar5;
      *(undefined4 *)((longlong)_Dst + 0x1cc) = uVar6;
      *(undefined4 *)((longlong)_Dst + 0x1d0) = uVar7;
      *(undefined4 *)((longlong)_Dst + 0x1d4) = uVar8;
      *(undefined4 *)((longlong)_Dst + 0x1d8) = uVar9;
      *(undefined4 *)((longlong)_Dst + 0x1dc) = uVar10;
      *(undefined4 *)((longlong)_Dst + 0x1e0) = uVar11;
      *(undefined4 *)((longlong)_Dst + 0x1e4) = uVar12;
      *(undefined4 *)((longlong)_Dst + 0x1e8) = uVar13;
      *(undefined4 *)((longlong)_Dst + 0x1ec) = uVar14;
      FUN_140820a14(lVar2 + 0x200,lVar1 + 0x200);
      *(undefined1 *)((longlong)_Dst + 0x200) = *(undefined1 *)(puVar3 + 0x42);
      memcpy((void *)(lVar2 + 0x218),(void *)(lVar1 + 0x218),0x134);
      lVar15 = lVar15 + 0x350;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147876a26 FUN_147876a26 body=59 status=ok
// SIG undefined FUN_147876a26(void)

undefined8 FUN_147876a26(longlong *param_1)

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



// FUNCTION 147876aca FUN_147876aca body=64 status=ok
// SIG undefined FUN_147876aca(void)

void FUN_147876aca(longlong param_1)

{
  if (*(char *)(param_1 + 0x350) == '\x01') {
    if (*(longlong *)(param_1 + 0x200) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x100) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x350) = 0;
  }
  return;
}



// FUNCTION 147876b62 FUN_147876b62 body=94 status=ok
// SIG undefined FUN_147876b62(void)

undefined8 FUN_147876b62(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140de4b5e(param_2,param_3);
    FUN_14785c646(param_2 + 0x10,param_3 + 0x10);
    FUN_140de4b5e(param_2 + 0x20,param_3 + 0x20);
    *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_3 + 0x30);
    *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_3 + 0x38);
    param_2 = param_2 + 0x40;
    param_3 = param_3 + 0x40;
  }
  return 1;
}



// FUNCTION 147876be8 FUN_147876be8 body=59 status=ok
// SIG undefined FUN_147876be8(void)

undefined8 FUN_147876be8(longlong *param_1)

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



// FUNCTION 147876c2e FUN_147876c2e body=34 status=ok
// SIG undefined FUN_147876c2e(void)

void FUN_147876c2e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1478571f4(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147876cd6 FUN_147876cd6 body=87 status=ok
// SIG undefined FUN_147876cd6(void)

undefined1 FUN_147876cd6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147859e32(param_2,param_3);
    FUN_147876e0c(param_2 + 0x10,param_3 + 0x10);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 147876d56 FUN_147876d56 body=59 status=ok
// SIG undefined FUN_147876d56(void)

undefined8 FUN_147876d56(longlong *param_1)

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



// FUNCTION 147876d9c FUN_147876d9c body=34 status=ok
// SIG undefined FUN_147876d9c(void)

void FUN_147876d9c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_145c27440(param_2);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 147876e0c FUN_147876e0c body=95 status=ok
// SIG undefined FUN_147876e0c(void)

undefined8 * FUN_147876e0c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145c27487(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147876e6c(param_1,iVar1);
      FUN_147876ede(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147876e6c FUN_147876e6c body=114 status=ok
// SIG undefined FUN_147876e6c(void)

void FUN_147876e6c(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x4c0,8);
    iVar2 = (int)(uVar1 / 0x4c0);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x4c0,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147876ede FUN_147876ede body=60 status=ok
// SIG undefined FUN_147876ede(void)

void FUN_147876ede(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_147876f1a(param_1,param_2);
    param_1 = param_1 + 0x4c0;
    param_2 = param_2 + 0x4c0;
  }
  return;
}



// FUNCTION 147876f1a FUN_147876f1a body=195 status=ok
// SIG undefined FUN_147876f1a(void)

undefined8 * FUN_147876f1a(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  param_1[2] = param_2[2];
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  lVar1 = 0x20;
  do {
    FUN_140501b78((longlong)param_1 + lVar1,(longlong)param_2 + lVar1);
    lVar1 = lVar1 + 0x80;
  } while (lVar1 != 0x1a0);
  *(undefined4 *)(param_1 + 0x35) = *(undefined4 *)(param_2 + 0x35);
  param_1[0x34] = param_2[0x34];
  lVar1 = 0x1b0;
  do {
    FUN_140501b78((longlong)param_1 + lVar1,(longlong)param_2 + lVar1);
    lVar1 = lVar1 + 0x80;
  } while (lVar1 != 0x330);
  *(undefined4 *)(param_1 + 0x67) = *(undefined4 *)(param_2 + 0x67);
  param_1[0x66] = param_2[0x66];
  lVar1 = 0x340;
  do {
    FUN_140501b78((longlong)param_1 + lVar1,(longlong)param_2 + lVar1);
    lVar1 = lVar1 + 0x80;
  } while (lVar1 != 0x4c0);
  return param_1;
}



// FUNCTION 147876fde FUN_147876fde body=127 status=ok
// SIG undefined FUN_147876fde(void)

void FUN_147876fde(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xe8);
  *(undefined4 *)((longlong)param_2 + 0x10) = 0xffffffff;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_2 + 0x98) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa0) = 0;
  *(undefined ***)((longlong)param_2 + 0x40) = &PTR_FUN_14a631c50;
  *(undefined8 *)((longlong)param_2 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_2 + 200) = 0;
  *(undefined8 *)((longlong)param_2 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xd1) = 0;
  *(undefined8 *)((longlong)param_2 + 0xd9) = 0;
  return;
}



// FUNCTION 1478770d8 FUN_1478770d8 body=43 status=ok
// SIG undefined FUN_1478770d8(void)

void FUN_1478770d8(undefined8 param_1,longlong param_2)

{
  FUN_1478772b8(param_2 + 0x40);
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14787711a FUN_14787711a body=75 status=ok
// SIG undefined FUN_14787711a(void)

undefined1 FUN_14787711a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14785ac90(param_2,param_3);
    FUN_147877340(param_2 + 0x40,param_3 + 0x40);
    param_2 = param_2 + 0xf0;
    param_3 = param_3 + 0xf0;
  }
  return 1;
}



// FUNCTION 14787718e FUN_14787718e body=59 status=ok
// SIG undefined FUN_14787718e(void)

undefined8 FUN_14787718e(longlong *param_1)

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



// FUNCTION 1478771da FUN_1478771da body=55 status=ok
// SIG undefined FUN_1478771da(void)

void FUN_1478771da(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    FUN_1478772b8(param_2 + 0x40);
    if (*(longlong *)(param_2 + 0x30) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 147877260 FUN_147877260 body=43 status=ok
// SIG undefined FUN_147877260(void)

undefined8 FUN_147877260(undefined8 param_1,int param_2)

{
  FUN_1478772b8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 147877290 FUN_147877290 body=39 status=ok
// SIG undefined FUN_147877290(void)

void FUN_147877290(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xb0,0x10);
  FUN_1478b06ba(uVar1,param_1);
  return;
}



// FUNCTION 1478772b8 FUN_1478772b8 body=88 status=ok
// SIG undefined FUN_1478772b8(void)

void FUN_1478772b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a631c50;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_147877310(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 1);
  return;
}



// FUNCTION 147877310 FUN_147877310 body=47 status=ok
// SIG undefined FUN_147877310(void)

void FUN_147877310(longlong param_1,int param_2)

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



// FUNCTION 147877340 FUN_147877340 body=118 status=ok
// SIG undefined FUN_147877340(void)

longlong FUN_147877340(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  FUN_1478773b6(param_1 + 0x68,param_2 + 0x68);
  uVar1 = *(undefined4 *)(param_2 + 0x7c);
  uVar2 = *(undefined4 *)(param_2 + 0x80);
  uVar3 = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x7c) = uVar1;
  *(undefined4 *)(param_1 + 0x80) = uVar2;
  *(undefined4 *)(param_1 + 0x84) = uVar3;
  FUN_144a787a6(param_1 + 0x88,param_2 + 0x88);
  lVar5 = *(longlong *)(param_2 + 0x98);
  if (DAT_14c950c29 == '\x01') {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_14689c22e();
      lVar5 = *(longlong *)(param_2 + 0x98);
    }
  }
  *(longlong *)(param_1 + 0x98) = lVar5;
  uVar4 = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xa8) = uVar4;
  return param_1;
}



// FUNCTION 1478773b6 FUN_1478773b6 body=95 status=ok
// SIG undefined FUN_1478773b6(void)

undefined8 * FUN_1478773b6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_147877310(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147877416(param_1,iVar1);
      FUN_147877489(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147877416 FUN_147877416 body=115 status=ok
// SIG undefined FUN_147877416(void)

void FUN_147877416(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147877489 FUN_147877489 body=145 status=ok
// SIG undefined FUN_147877489(void)

void FUN_147877489(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined4 *)(param_1 + lVar2) = *(undefined4 *)(param_2 + lVar2);
      *(undefined8 *)(param_1 + 8 + lVar2) = 0;
      iVar1 = *(int *)(param_2 + 0x10 + lVar2);
      _Src = *(void **)(param_2 + 8 + lVar2);
      *(int *)(param_1 + 0x10 + lVar2) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x14 + lVar2) = 0;
      }
      else {
        FUN_1447a127e(param_1 + 8 + lVar2,iVar1,0);
        memcpy(*(void **)(param_1 + 8 + lVar2),_Src,(longlong)iVar1);
      }
      lVar2 = lVar2 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14787751c FUN_14787751c body=98 status=ok
// SIG undefined FUN_14787751c(void)

void FUN_14787751c(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 6,8);
    iVar1 = (int)(uVar2 >> 6);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x40,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14787757e FUN_14787757e body=66 status=ok
// SIG undefined FUN_14787757e(void)

void FUN_14787757e(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1478775c0(param_1,param_2);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    param_1 = param_1 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return;
}



// FUNCTION 1478775c0 FUN_1478775c0 body=241 status=ok
// SIG undefined FUN_1478775c0(void)

undefined8 * FUN_1478775c0(undefined8 *param_1,undefined8 *param_2)

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
    FUN_140c0b9de(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 0xc);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_146ed5568(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 << 4);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_140c0b9de(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 * 0xc);
  }
  return param_1;
}



// FUNCTION 1478776ce FUN_1478776ce body=338 status=ok
// SIG undefined FUN_1478776ce(void)

void FUN_1478776ce(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_b8 [44];
  int local_8c;
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
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
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
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_8c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_8c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_8c);
  }
  puVar3 = &local_88;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = (**(code **)(*param_1 + 0xaf8))(param_1,puVar3,local_8c != 0);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147877834 FUN_147877834 body=560 status=ok
// SIG undefined FUN_147877834(void)

void FUN_147877834(longlong *param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_70;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  int local_54;
  int local_50;
  int local_4c;
  longlong local_48 [3];
  
  local_48[2] = DAT_14c707940 ^ (ulonglong)auStack_98;
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
  plVar3 = local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  iVar2 = local_4c;
  local_50 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  iVar1 = local_50;
  local_54 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = local_54 != 0;
  local_78 = iVar1 != 0;
  (**(code **)(*param_1 + 0xb00))(param_1,&local_68,plVar3,iVar2 != 0);
  if (&local_68 == param_3) {
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_68;
    local_68 = 0;
    *(undefined4 *)(param_3 + 1) = local_60;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_5c;
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[2] ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147877a66 FUN_147877a66 body=241 status=ok
// SIG undefined FUN_147877a66(void)

void FUN_147877a66(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
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
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
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
  puVar2 = &local_88;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0xaf8))(param_1,puVar2,1);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147877b70 FUN_147877b70 body=718 status=ok
// SIG undefined FUN_147877b70(void)

void FUN_147877b70(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined1 local_d0;
  undefined1 local_c8;
  int local_b4;
  int local_b0;
  int local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_3c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_40 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0x3ff00000;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_64 = 0x3ff00000;
  uStack_60 = 0;
  uStack_5c = 0x3ff00000;
  local_58 = 0x3ff0000000000000;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_ac = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_ac);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_ac);
  }
  iVar3 = local_ac;
  local_b0 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b0);
  }
  iVar2 = local_b0;
  local_b4 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b4);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_c8 = local_b4 != 0;
  puVar5 = &local_a8;
  if (puVar1 != (undefined8 *)0x0) {
    puVar5 = puVar1;
  }
  local_d0 = iVar2 != 0;
  local_d8 = iVar3 != 0;
  uVar4 = (**(code **)(*param_1 + 0xb58))(param_1,local_3c,local_40,puVar5);
  *param_3 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147877e58 FUN_147877e58 body=557 status=ok
// SIG undefined FUN_147877e58(void)

void FUN_147877e58(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  longlong *plVar4;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_70;
  int local_64;
  int local_60;
  int local_5c;
  longlong local_58 [3];
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_3c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
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
  plVar4 = local_58;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_5c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  iVar2 = local_5c;
  local_60 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  iVar1 = local_60;
  local_64 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_64);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = local_64 != 0;
  local_78 = iVar1 != 0;
  uVar3 = (**(code **)(*param_1 + 0xb48))(param_1,local_3c,plVar4,iVar2 != 0);
  *param_3 = uVar3;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478780a0 FUN_1478780a0 body=289 status=ok
// SIG undefined FUN_1478780a0(void)

void FUN_1478780a0(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar2 = *(undefined4 **)(param_2 + 0x38);
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
  puVar1 = &local_2c;
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = puVar2;
  }
  puVar2 = &local_30;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *puVar1 = *(undefined4 *)(param_1 + 0x7cc);
  *puVar2 = *(undefined4 *)(param_1 + 2000);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478781c2 FUN_1478781c2 body=37 status=ok
// SIG undefined FUN_1478781c2(void)

void FUN_1478781c2(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147af9036();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1478781ee FUN_1478781ee body=343 status=ok
// SIG undefined FUN_1478781ee(void)

void FUN_1478781ee(longlong *param_1,longlong param_2,longlong *param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined4 local_70;
  undefined4 local_6c;
  int local_64;
  undefined1 local_60 [48];
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  puVar1 = local_60;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xb90))(param_1,&local_78,puVar1,local_64 != 0);
  if (&local_78 == param_3) {
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_78;
    *(undefined4 *)(param_3 + 1) = local_70;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_6c;
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787834c FUN_14787834c body=430 status=ok
// SIG undefined FUN_14787834c(void)

void FUN_14787834c(longlong *param_1,longlong param_2,longlong *param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar1 = local_40;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
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
  local_48 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_48 != 0;
  (**(code **)(*param_1 + 0xb88))(param_1,&local_58,puVar1,local_44);
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
    *(undefined4 *)(param_3 + 1) = local_50;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_4c;
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147878508 FUN_147878508 body=427 status=ok
// SIG undefined FUN_147878508(void)

void FUN_147878508(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_c8 [44];
  int local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0x3ff00000;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_54 = 0x3ff00000;
  uStack_50 = 0;
  uStack_4c = 0x3ff00000;
  local_48 = 0x3ff0000000000000;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_9c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_9c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_9c);
  }
  puVar3 = &local_98;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_1410499a6(param_1,local_2c,puVar3,local_9c != 0);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478786d8 FUN_1478786d8 body=161 status=ok
// SIG undefined FUN_1478786d8(void)

void FUN_1478786d8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147af903e(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147878780 FUN_147878780 body=165 status=ok
// SIG undefined FUN_147878780(void)

void FUN_147878780(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0xb68))(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787882c FUN_14787882c body=193 status=ok
// SIG undefined FUN_14787882c(void)

void FUN_14787882c(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  uVar1 = (**(code **)(*param_1 + 0xb78))(param_1,plVar2);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478788ee FUN_1478788ee body=235 status=ok
// SIG undefined FUN_1478788ee(void)

void FUN_1478788ee(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
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
  local_20 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140ea0802(param_1,local_1c,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478789e6 FUN_1478789e6 body=426 status=ok
// SIG undefined FUN_1478789e6(void)

void FUN_1478789e6(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a7452c();
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
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_30 != 0;
  uVar1 = (**(code **)(*param_1 + 0xb10))(param_1,local_24,local_28,local_2c);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147878b92 FUN_147878b92 body=156 status=ok
// SIG undefined FUN_147878b92(void)

void FUN_147878b92(undefined8 param_1,longlong param_2)

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
  FUN_147b00b92(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147878c30 FUN_147878c30 body=158 status=ok
// SIG undefined FUN_147878c30(void)

void FUN_147878c30(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0xb18))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147878ce8 FUN_147878ce8 body=619 status=ok
// SIG undefined FUN_147878ce8(void)

void FUN_147878ce8(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined1 local_c0;
  int local_b4;
  int local_b0;
  int local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_3c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0x3ff00000;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_64 = 0x3ff00000;
  uStack_60 = 0;
  uStack_5c = 0x3ff00000;
  local_58 = 0x3ff0000000000000;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_ac = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_ac);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_ac);
  }
  iVar3 = local_ac;
  local_b0 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b0);
  }
  iVar2 = local_b0;
  local_b4 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b4);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_c0 = local_b4 != 0;
  puVar5 = &local_a8;
  if (puVar1 != (undefined8 *)0x0) {
    puVar5 = puVar1;
  }
  local_c8 = iVar2 != 0;
  uVar4 = (**(code **)(*param_1 + 0xb30))(param_1,local_3c,puVar5,iVar3 != 0);
  *param_3 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147878f70 FUN_147878f70 body=75 status=ok
// SIG undefined FUN_147878f70(void)

void FUN_147878f70(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_14353687c(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147878fce FUN_147878fce body=193 status=ok
// SIG undefined FUN_147878fce(void)

void FUN_147878fce(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_30 = local_28;
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  uVar1 = (**(code **)(*param_1 + 0x28))(param_1,&local_30);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147879090 FUN_147879090 body=194 status=ok
// SIG undefined FUN_147879090(void)

void FUN_147879090(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_30 = local_28;
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  uVar1 = (**(code **)(*param_1 + 0x18))(param_1,&local_30);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787915a FUN_14787915a body=193 status=ok
// SIG undefined FUN_14787915a(void)

void FUN_14787915a(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_30 = local_28;
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  uVar1 = (**(code **)(*param_1 + 0x20))(param_1,&local_30);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147879258 FUN_147879258 body=955 status=ok
// SIG undefined FUN_147879258(void)

void FUN_147879258(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  longlong *local_70;
  longlong *local_68 [2];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  undefined1 local_2d;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_2d = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2d);
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
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_40 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  local_48 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = iVar1 != 0;
  local_70 = local_58;
  local_78 = local_48;
  local_80 = local_44;
  local_88 = local_40;
  local_90 = local_3c;
  FUN_147b84fba(local_68,local_2c,local_2d,iVar2 != 0);
  FUN_140008f88(param_3,local_68);
  if (local_68[0] != (longlong *)0x0) {
    (**(code **)(*local_68[0] + 0x10))();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147879620 FUN_147879620 body=955 status=ok
// SIG undefined FUN_147879620(void)

void FUN_147879620(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  longlong *local_70;
  longlong *local_68 [2];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  undefined1 local_2d;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_2d = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2d);
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
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_40 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  local_48 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = iVar1 != 0;
  local_70 = local_58;
  local_78 = local_48;
  local_80 = local_44;
  local_88 = local_40;
  local_90 = local_3c;
  FUN_147b84ec8(local_68,local_2c,local_2d,iVar2 != 0);
  FUN_140008f88(param_3,local_68);
  if (local_68[0] != (longlong *)0x0) {
    (**(code **)(*local_68[0] + 0x10))();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478799dc FUN_1478799dc body=288 status=ok
// SIG undefined FUN_1478799dc(void)

void FUN_1478799dc(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  longlong *local_48 [2];
  longlong local_38 [3];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
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
  FUN_147b84e4a(local_48,local_1c,local_38);
  FUN_140008f88(param_3,local_48);
  if (local_48[0] != (longlong *)0x0) {
    (**(code **)(*local_48[0] + 0x10))();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147879afe FUN_147879afe body=290 status=ok
// SIG undefined FUN_147879afe(void)

void FUN_147879afe(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [40];
  longlong *local_40 [2];
  undefined1 local_29;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  puVar1 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  local_29 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b851ae(local_40,puVar1,local_29);
  FUN_140008f88(param_3,local_40);
  if (local_40[0] != (longlong *)0x0) {
    (**(code **)(*local_40[0] + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147879c22 FUN_147879c22 body=369 status=ok
// SIG undefined FUN_147879c22(void)

void FUN_147879c22(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [40];
  longlong *local_40 [2];
  undefined1 local_2a;
  undefined1 local_29;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  puVar1 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  local_29 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  local_2a = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2a);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2a);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b852de(local_40,puVar1,local_29,local_2a);
  FUN_140008f88(param_3,local_40);
  if (local_40[0] != (longlong *)0x0) {
    (**(code **)(*local_40[0] + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147879d9a FUN_147879d9a body=711 status=ok
// SIG undefined FUN_147879d9a(void)

void FUN_147879d9a(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  longlong *local_50 [2];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  undefined1 local_29;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_28 = 0;
  FUN_144a83f76();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_29 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
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
  iVar1 = local_30;
  local_34 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_38 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_40 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_40;
  local_68 = local_3c;
  local_70 = local_38;
  local_78 = local_34;
  FUN_147b855ca(local_50,local_28,local_29,iVar1 != 0);
  FUN_140008f88(param_3,local_50);
  if (local_50[0] != (longlong *)0x0) {
    (**(code **)(*local_50[0] + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787a06e FUN_14787a06e body=805 status=ok
// SIG undefined FUN_14787a06e(void)

void FUN_14787a06e(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  longlong *local_58 [2];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  undefined1 local_2d;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_2d = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2d);
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
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_40 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  local_48 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = iVar1 != 0;
  local_68 = local_48;
  local_70 = local_44;
  local_78 = local_40;
  local_80 = local_3c;
  FUN_147b850b8(local_58,local_2c,local_2d,iVar2 != 0);
  FUN_140008f88(param_3,local_58);
  if (local_58[0] != (longlong *)0x0) {
    (**(code **)(*local_58[0] + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787a394 FUN_14787a394 body=290 status=ok
// SIG undefined FUN_14787a394(void)

void FUN_14787a394(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [40];
  longlong *local_40 [2];
  undefined1 local_29;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  puVar1 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  local_29 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b85428(local_40,puVar1,local_29);
  FUN_140008f88(param_3,local_40);
  if (local_40[0] != (longlong *)0x0) {
    (**(code **)(*local_40[0] + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787a4b8 FUN_14787a4b8 body=202 status=ok
// SIG undefined FUN_14787a4b8(void)

void FUN_14787a4b8(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  longlong *local_30 [2];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  puVar1 = &local_20;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b85558(local_30,puVar1);
  FUN_140008f88(param_3,local_30);
  if (local_30[0] != (longlong *)0x0) {
    (**(code **)(*local_30[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787a584 FUN_14787a584 body=387 status=ok
// SIG undefined FUN_14787a584(void)

void FUN_14787a584(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined1 auStack_78 [40];
  longlong *local_50 [2];
  undefined1 local_39;
  longlong local_38 [4];
  
  local_38[3] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38[2] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  plVar1 = local_38 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
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
  local_39 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b8525c(local_50,plVar1,local_38,local_39);
  FUN_140008f88(param_3,local_50);
  if (local_50[0] != (longlong *)0x0) {
    (**(code **)(*local_50[0] + 0x10))();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[3] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787a708 FUN_14787a708 body=469 status=ok
// SIG undefined FUN_14787a708(void)

void FUN_14787a708(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  longlong *local_50 [2];
  undefined1 local_3a;
  undefined1 local_39;
  longlong local_38 [4];
  
  local_38[3] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38[2] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  plVar1 = local_38 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
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
  local_39 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  local_3a = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3a);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3a);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_3a;
  FUN_147b8539a(local_50,plVar1,local_38,local_39);
  FUN_140008f88(param_3,local_50);
  if (local_50[0] != (longlong *)0x0) {
    (**(code **)(*local_50[0] + 0x10))();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[3] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787a8de FUN_14787a8de body=387 status=ok
// SIG undefined FUN_14787a8de(void)

void FUN_14787a8de(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined1 auStack_78 [40];
  longlong *local_50 [2];
  undefined1 local_39;
  longlong local_38 [4];
  
  local_38[3] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38[2] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  plVar1 = local_38 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
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
  local_39 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b854d6(local_50,plVar1,local_38,local_39);
  FUN_140008f88(param_3,local_50);
  if (local_50[0] != (longlong *)0x0) {
    (**(code **)(*local_50[0] + 0x10))();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[3] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787aa66 FUN_14787aa66 body=188 status=ok
// SIG undefined FUN_14787aa66(void)

void FUN_14787aa66(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  longlong *local_30 [2];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_147b84a62(local_30,local_1c != 0);
  FUN_140008f88(param_3,local_30);
  if (local_30[0] != (longlong *)0x0) {
    (**(code **)(*local_30[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787ab24 FUN_14787ab24 body=181 status=ok
// SIG undefined FUN_14787ab24(void)

void FUN_14787ab24(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  longlong *local_30 [2];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_147b84b52(local_30,local_19);
  FUN_140008f88(param_3,local_30);
  if (local_30[0] != (longlong *)0x0) {
    (**(code **)(*local_30[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787abda FUN_14787abda body=188 status=ok
// SIG undefined FUN_14787abda(void)

void FUN_14787abda(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong *local_38 [2];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  local_48 = local_28;
  uStack_44 = uStack_24;
  uStack_40 = uStack_20;
  uStack_3c = uStack_1c;
  FUN_147b844a2(local_38);
  FUN_140008f88(param_3,local_38);
  if (local_38[0] != (longlong *)0x0) {
    (**(code **)(*local_38[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787aca4 FUN_14787aca4 body=806 status=ok
// SIG undefined FUN_14787aca4(void)

void FUN_14787aca4(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  longlong *local_60 [2];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  undefined1 local_31;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_30 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_31 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_31);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_31);
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
  iVar1 = local_3c;
  local_40 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  local_48 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = iVar1 != 0;
  local_68 = local_4c;
  local_70 = local_48;
  local_78 = local_44;
  local_80 = local_40;
  FUN_147b84d54(local_60,local_30,local_31,iVar2 != 0);
  FUN_140008f88(param_3,local_60);
  if (local_60[0] != (longlong *)0x0) {
    (**(code **)(*local_60[0] + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787afd8 FUN_14787afd8 body=541 status=ok
// SIG undefined FUN_14787afd8(void)

void FUN_14787afd8(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  longlong *local_50 [2];
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = 0;
  FUN_144a83f76();
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
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_40 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_40;
  local_68 = local_3c;
  FUN_147b84c94(local_50,local_30,iVar2 != 0,iVar1 != 0);
  FUN_140008f88(param_3,local_50);
  if (local_50[0] != (longlong *)0x0) {
    (**(code **)(*local_50[0] + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787b202 FUN_14787b202 body=539 status=ok
// SIG undefined FUN_14787b202(void)

void FUN_14787b202(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  longlong *local_50 [2];
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_2c = 0;
  FUN_144a7452c();
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
  iVar2 = local_30;
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  iVar1 = local_34;
  local_38 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_3c;
  local_68 = local_38;
  FUN_147b84bd6(local_50,local_2c,iVar2 != 0,iVar1 != 0);
  FUN_140008f88(param_3,local_50);
  if (local_50[0] != (longlong *)0x0) {
    (**(code **)(*local_50[0] + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787b41e FUN_14787b41e body=186 status=ok
// SIG undefined FUN_14787b41e(void)

void FUN_14787b41e(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  longlong *local_30 [2];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b847fa(local_30,local_20);
  FUN_140008f88(param_3,local_30);
  if (local_30[0] != (longlong *)0x0) {
    (**(code **)(*local_30[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787b4da FUN_14787b4da body=186 status=ok
// SIG undefined FUN_14787b4da(void)

void FUN_14787b4da(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  longlong *local_30 [2];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b84410(local_30,local_20);
  FUN_140008f88(param_3,local_30);
  if (local_30[0] != (longlong *)0x0) {
    (**(code **)(*local_30[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787b596 FUN_14787b596 body=197 status=ok
// SIG undefined FUN_14787b596(void)

void FUN_14787b596(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong *local_40 [2];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_30;
  uStack_54 = uStack_2c;
  uStack_50 = uStack_28;
  uStack_4c = uStack_24;
  local_48 = local_20;
  FUN_147b83e3a(local_40);
  FUN_140008f88(param_3,local_40);
  if (local_40[0] != (longlong *)0x0) {
    (**(code **)(*local_40[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787b65c FUN_14787b65c body=203 status=ok
// SIG undefined FUN_14787b65c(void)

void FUN_14787b65c(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  longlong *local_38 [2];
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
  FUN_147b8479e(local_38,local_28);
  FUN_140008f88(param_3,local_38);
  if (local_38[0] != (longlong *)0x0) {
    (**(code **)(*local_38[0] + 0x10))();
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



// FUNCTION 14787b728 FUN_14787b728 body=267 status=ok
// SIG undefined FUN_14787b728(void)

void FUN_14787b728(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong **pplVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144a5dc74(local_30);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  pplVar1 = local_30;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar1 = *(longlong ***)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b84744(&local_40,pplVar1);
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
  if (local_30[0] != (longlong *)0x0) {
    (**(code **)(*local_30[0] + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787b834 FUN_14787b834 body=263 status=ok
// SIG undefined FUN_14787b834(void)

void FUN_14787b834(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_a8 [32];
  longlong *local_88 [2];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0x3ff00000;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_34 = 0x3ff00000;
  uStack_30 = 0;
  uStack_2c = 0x3ff00000;
  local_28 = 0x3ff0000000000000;
  uStack_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  puVar1 = &local_78;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b84078(local_88,puVar1);
  FUN_140008f88(param_3,local_88);
  if (local_88[0] != (longlong *)0x0) {
    (**(code **)(*local_88[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787b93c FUN_14787b93c body=188 status=ok
// SIG undefined FUN_14787b93c(void)

void FUN_14787b93c(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong *local_38 [2];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  local_48 = local_28;
  uStack_44 = uStack_24;
  uStack_40 = uStack_20;
  uStack_3c = uStack_1c;
  FUN_147b83c62(local_38);
  FUN_140008f88(param_3,local_38);
  if (local_38[0] != (longlong *)0x0) {
    (**(code **)(*local_38[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787b9fa FUN_14787b9fa body=197 status=ok
// SIG undefined FUN_14787b9fa(void)

void FUN_14787b9fa(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong *local_40 [2];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_30;
  uStack_54 = uStack_2c;
  uStack_50 = uStack_28;
  uStack_4c = uStack_24;
  local_48 = local_20;
  FUN_147b83a24(local_40);
  FUN_140008f88(param_3,local_40);
  if (local_40[0] != (longlong *)0x0) {
    (**(code **)(*local_40[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787bacc FUN_14787bacc body=321 status=ok
// SIG undefined FUN_14787bacc(void)

void FUN_14787bacc(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong **pplVar2;
  longlong **pplVar3;
  undefined1 auStack_78 [40];
  longlong *local_50 [2];
  longlong *local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_144a5dc74(local_40);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  pplVar2 = local_40;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar2 = *(longlong ***)(param_2 + 0x38);
  }
  FUN_144a5dc74(local_50);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  pplVar3 = local_50;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar3 = *(longlong ***)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = thunk_FUN_1467d167a(pplVar2,pplVar3);
  *param_3 = uVar1;
  if (local_50[0] != (longlong *)0x0) {
    (**(code **)(*local_50[0] + 0x10))();
  }
  if (local_40[0] != (longlong *)0x0) {
    (**(code **)(*local_40[0] + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787bc14 FUN_14787bc14 body=321 status=ok
// SIG undefined FUN_14787bc14(void)

void FUN_14787bc14(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong **pplVar2;
  longlong **pplVar3;
  undefined1 auStack_78 [40];
  longlong *local_50 [2];
  longlong *local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_144a5dc74(local_40);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  pplVar2 = local_40;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar2 = *(longlong ***)(param_2 + 0x38);
  }
  FUN_144a5dc74(local_50);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  pplVar3 = local_50;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar3 = *(longlong ***)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147b84a36(pplVar2,pplVar3);
  *param_3 = uVar1;
  if (local_50[0] != (longlong *)0x0) {
    (**(code **)(*local_50[0] + 0x10))();
  }
  if (local_40[0] != (longlong *)0x0) {
    (**(code **)(*local_40[0] + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787bd5c FUN_14787bd5c body=487 status=ok
// SIG undefined FUN_14787bd5c(void)

void FUN_14787bd5c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong **pplVar2;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  longlong *local_58 [2];
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
  FUN_144a5dc74(local_58);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  pplVar2 = local_58;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar2 = *(longlong ***)(param_2 + 0x38);
  }
  local_68[0] = 0;
  local_68[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147b8497a(local_48 + 2,local_48,pplVar2,local_68);
  *param_3 = uVar1;
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[0] != (longlong *)0x0) {
    (**(code **)(*local_58[0] + 0x10))();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787bf44 FUN_14787bf44 body=406 status=ok
// SIG undefined FUN_14787bf44(void)

void FUN_14787bf44(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  undefined8 local_68;
  int local_60;
  undefined4 local_5c;
  longlong *local_58 [2];
  longlong local_48;
  ulonglong uStack_40;
  longlong *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144a5dc74(&local_38);
  FUN_144a4a07e();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48 = 0;
  uStack_40 = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  uVar2 = uStack_40;
  lVar1 = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = 0;
  local_60 = (int)uStack_40;
  if ((int)uStack_40 == 0) {
    local_5c = 0;
  }
  else {
    FUN_14787eaa8(&local_68,uStack_40 & 0xffffffff);
    FUN_14787eb12(local_68,lVar1,uVar2 & 0xffffffff);
  }
  local_78 = local_38;
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 8))();
  }
  local_70 = local_30;
  FUN_147b856b0(local_58,&local_78,&local_68);
  FUN_140008f88(param_3,local_58);
  if (local_58[0] != (longlong *)0x0) {
    (**(code **)(*local_58[0] + 0x10))();
  }
  FUN_1467de9d3(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787c0dc FUN_14787c0dc body=107 status=ok
// SIG undefined FUN_14787c0dc(void)

void FUN_14787c0dc(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b84948(local_28);
  FUN_140008f88(param_3,local_28);
  if (local_28[0] != (longlong *)0x0) {
    (**(code **)(*local_28[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787c14e FUN_14787c14e body=437 status=ok
// SIG undefined FUN_14787c14e(void)

void FUN_14787c14e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined4 local_60;
  longlong local_58 [4];
  longlong *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_144a5dc74(&local_38);
  FUN_144a4a07e();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_58[2] = 0;
  local_58[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 2);
  }
  plVar2 = local_58 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
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
  plVar3 = local_58;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_38;
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 8))();
  }
  local_60 = local_30;
  uVar1 = FUN_147b8580e(&local_68,plVar2,plVar3);
  *param_3 = uVar1;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787c304 FUN_14787c304 body=279 status=ok
// SIG undefined FUN_14787c304(void)

void FUN_14787c304(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_68 [32];
  longlong *local_48;
  undefined4 local_40;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144a5dc74(&local_28);
  FUN_144a4a07e();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_28;
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  local_40 = local_20;
  FUN_147b858aa(&local_38);
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
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787c424 FUN_14787c424 body=396 status=ok
// SIG undefined FUN_14787c424(void)

void FUN_14787c424(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  longlong **pplVar3;
  undefined1 auStack_118 [32];
  longlong *local_f8 [2];
  undefined1 local_e1;
  undefined1 local_e0 [176];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_14787c5b2(local_e0);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_e0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_e0);
  }
  puVar2 = local_e0;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  local_e1 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e1);
  }
  puVar1 = &local_e1;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  FUN_144a5dc74(local_f8);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_f8);
  }
  pplVar3 = local_f8;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar3 = *(longlong ***)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b858da(puVar2,puVar1,pplVar3);
  if (local_f8[0] != (longlong *)0x0) {
    (**(code **)(*local_f8[0] + 0x10))();
  }
  FUN_1467da0e0(local_e0);
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787c5b2 FUN_14787c5b2 body=98 status=ok
// SIG undefined FUN_14787c5b2(void)

longlong FUN_14787c5b2(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x98) = 0;
  FUN_144a5dc74(param_1 + 0xa0);
  return param_1;
}



// FUNCTION 14787c614 FUN_14787c614 body=203 status=ok
// SIG undefined FUN_14787c614(void)

void FUN_14787c614(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  longlong *local_38 [2];
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
  FUN_147b84860(local_38,local_28);
  FUN_140008f88(param_3,local_38);
  if (local_38[0] != (longlong *)0x0) {
    (**(code **)(*local_38[0] + 0x10))();
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



// FUNCTION 14787c6e6 FUN_14787c6e6 body=321 status=ok
// SIG undefined FUN_14787c6e6(void)

void FUN_14787c6e6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong **pplVar2;
  longlong **pplVar3;
  undefined1 auStack_78 [40];
  longlong *local_50 [2];
  longlong *local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_144a5dc74(local_40);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  pplVar2 = local_40;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar2 = *(longlong ***)(param_2 + 0x38);
  }
  FUN_144a5dc74(local_50);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  pplVar3 = local_50;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar3 = *(longlong ***)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147b84a3e(pplVar2,pplVar3);
  *param_3 = uVar1;
  if (local_50[0] != (longlong *)0x0) {
    (**(code **)(*local_50[0] + 0x10))();
  }
  if (local_40[0] != (longlong *)0x0) {
    (**(code **)(*local_40[0] + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787c82e FUN_14787c82e body=321 status=ok
// SIG undefined FUN_14787c82e(void)

void FUN_14787c82e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong **pplVar2;
  longlong **pplVar3;
  undefined1 auStack_78 [40];
  longlong *local_50 [2];
  longlong *local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_144a5dc74(local_40);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  pplVar2 = local_40;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar2 = *(longlong ***)(param_2 + 0x38);
  }
  FUN_144a5dc74(local_50);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  pplVar3 = local_50;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar3 = *(longlong ***)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147b84a4e(pplVar2,pplVar3);
  *param_3 = uVar1;
  if (local_50[0] != (longlong *)0x0) {
    (**(code **)(*local_50[0] + 0x10))();
  }
  if (local_40[0] != (longlong *)0x0) {
    (**(code **)(*local_40[0] + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787c970 FUN_14787c970 body=225 status=ok
// SIG undefined FUN_14787c970(void)

void FUN_14787c970(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_108 [40];
  longlong *local_e0 [2];
  undefined1 local_d0 [176];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_14787c5b2(local_d0);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_d0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_d0);
  }
  puVar1 = local_d0;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b858f2(local_e0,puVar1);
  FUN_140008f88(param_3,local_e0);
  if (local_e0[0] != (longlong *)0x0) {
    (**(code **)(*local_e0[0] + 0x10))();
  }
  FUN_1467da0e0(local_d0);
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787ca58 FUN_14787ca58 body=426 status=ok
// SIG undefined FUN_14787ca58(void)

void FUN_14787ca58(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined4 local_60;
  longlong local_58 [3];
  undefined8 local_40;
  longlong *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_144a5dc74(&local_38);
  FUN_144a4a07e();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar2 = &local_40;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
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
  plVar3 = local_58;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_38;
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 8))();
  }
  local_60 = local_30;
  uVar1 = FUN_147b857e6(&local_68,puVar2,plVar3);
  *param_3 = uVar1;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787cc04 FUN_14787cc04 body=290 status=ok
// SIG undefined FUN_14787cc04(void)

void FUN_14787cc04(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  longlong *local_48 [2];
  longlong local_38 [3];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
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
  FUN_147b85770(local_48,local_20,local_38);
  FUN_140008f88(param_3,local_48);
  if (local_48[0] != (longlong *)0x0) {
    (**(code **)(*local_48[0] + 0x10))();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787cd2e FUN_14787cd2e body=188 status=ok
// SIG undefined FUN_14787cd2e(void)

void FUN_14787cd2e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong **pplVar2;
  undefined1 auStack_58 [40];
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a5dc74(local_30);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  pplVar2 = local_30;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar2 = *(longlong ***)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = thunk_FUN_142760c04(pplVar2);
  *param_3 = uVar1;
  if (local_30[0] != (longlong *)0x0) {
    (**(code **)(*local_30[0] + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787cdf2 FUN_14787cdf2 body=188 status=ok
// SIG undefined FUN_14787cdf2(void)

void FUN_14787cdf2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong **pplVar2;
  undefined1 auStack_58 [40];
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a5dc74(local_30);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  pplVar2 = local_30;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar2 = *(longlong ***)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = thunk_FUN_144a7c5f6(pplVar2);
  *param_3 = uVar1;
  if (local_30[0] != (longlong *)0x0) {
    (**(code **)(*local_30[0] + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787ceb6 FUN_14787ceb6 body=188 status=ok
// SIG undefined FUN_14787ceb6(void)

void FUN_14787ceb6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong **pplVar2;
  undefined1 auStack_58 [40];
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a5dc74(local_30);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  pplVar2 = local_30;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar2 = *(longlong ***)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = thunk_FUN_1417036c0(pplVar2);
  *param_3 = uVar1;
  if (local_30[0] != (longlong *)0x0) {
    (**(code **)(*local_30[0] + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787cf7a FUN_14787cf7a body=188 status=ok
// SIG undefined FUN_14787cf7a(void)

void FUN_14787cf7a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong **pplVar2;
  undefined1 auStack_58 [40];
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a5dc74(local_30);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  pplVar2 = local_30;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar2 = *(longlong ***)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = thunk_FUN_142760c0c(pplVar2);
  *param_3 = uVar1;
  if (local_30[0] != (longlong *)0x0) {
    (**(code **)(*local_30[0] + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787d038 FUN_14787d038 body=226 status=ok
// SIG undefined FUN_14787d038(void)

void FUN_14787d038(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong **pplVar1;
  undefined1 auStack_68 [40];
  longlong *local_40 [2];
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144a5dc74(local_30);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  pplVar1 = local_30;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar1 = *(longlong ***)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b848ce(local_40,pplVar1);
  FUN_140008f88(param_3,local_40);
  if (local_40[0] != (longlong *)0x0) {
    (**(code **)(*local_40[0] + 0x10))();
  }
  if (local_30[0] != (longlong *)0x0) {
    (**(code **)(*local_30[0] + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787d11c FUN_14787d11c body=226 status=ok
// SIG undefined FUN_14787d11c(void)

void FUN_14787d11c(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong **pplVar1;
  undefined1 auStack_68 [40];
  longlong *local_40 [2];
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144a5dc74(local_30);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  pplVar1 = local_30;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar1 = *(longlong ***)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b848ea(local_40,pplVar1);
  FUN_140008f88(param_3,local_40);
  if (local_40[0] != (longlong *)0x0) {
    (**(code **)(*local_40[0] + 0x10))();
  }
  if (local_30[0] != (longlong *)0x0) {
    (**(code **)(*local_30[0] + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787d200 FUN_14787d200 body=226 status=ok
// SIG undefined FUN_14787d200(void)

void FUN_14787d200(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong **pplVar1;
  undefined1 auStack_68 [40];
  longlong *local_40 [2];
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144a5dc74(local_30);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  pplVar1 = local_30;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar1 = *(longlong ***)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b84906(local_40,pplVar1);
  FUN_140008f88(param_3,local_40);
  if (local_40[0] != (longlong *)0x0) {
    (**(code **)(*local_40[0] + 0x10))();
  }
  if (local_30[0] != (longlong *)0x0) {
    (**(code **)(*local_30[0] + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787d2e4 FUN_14787d2e4 body=226 status=ok
// SIG undefined FUN_14787d2e4(void)

void FUN_14787d2e4(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong **pplVar1;
  undefined1 auStack_68 [40];
  longlong *local_40 [2];
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144a5dc74(local_30);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  pplVar1 = local_30;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar1 = *(longlong ***)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b84932(local_40,pplVar1);
  FUN_140008f88(param_3,local_40);
  if (local_40[0] != (longlong *)0x0) {
    (**(code **)(*local_40[0] + 0x10))();
  }
  if (local_30[0] != (longlong *)0x0) {
    (**(code **)(*local_30[0] + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787d3c8 FUN_14787d3c8 body=226 status=ok
// SIG undefined FUN_14787d3c8(void)

void FUN_14787d3c8(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong **pplVar1;
  undefined1 auStack_68 [40];
  longlong *local_40 [2];
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144a5dc74(local_30);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  pplVar1 = local_30;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar1 = *(longlong ***)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b8491c(local_40,pplVar1);
  FUN_140008f88(param_3,local_40);
  if (local_40[0] != (longlong *)0x0) {
    (**(code **)(*local_40[0] + 0x10))();
  }
  if (local_30[0] != (longlong *)0x0) {
    (**(code **)(*local_30[0] + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787d51a FUN_14787d51a body=70 status=ok
// SIG undefined FUN_14787d51a(void)

void FUN_14787d51a(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_147a9b912(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787d5c8 FUN_14787d5c8 body=23 status=ok
// SIG undefined FUN_14787d5c8(void)

void FUN_14787d5c8(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = &DAT_14c846400;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  return;
}



// FUNCTION 14787d5e0 FUN_14787d5e0 body=23 status=ok
// SIG undefined FUN_14787d5e0(void)

void FUN_14787d5e0(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = &DAT_14c846400;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  return;
}



// FUNCTION 14787d610 FUN_14787d610 body=39 status=ok
// SIG undefined FUN_14787d610(void)

undefined8 FUN_14787d610(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14787d660 FUN_14787d660 body=59 status=ok
// SIG undefined FUN_14787d660(void)

undefined8 FUN_14787d660(longlong *param_1)

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



// FUNCTION 14787d77a FUN_14787d77a body=59 status=ok
// SIG undefined FUN_14787d77a(void)

undefined8 FUN_14787d77a(longlong *param_1)

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


