// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148f28cbc FUN_148f28cbc body=347 status=ok
// SIG undefined FUN_148f28cbc(void)

void FUN_148f28cbc(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 local_40;
  undefined4 local_38;
  undefined1 local_29;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  local_28 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_29 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  puVar2 = &local_24;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = *puVar2;
  local_38 = local_28;
  local_40 = local_29;
  FUN_148f2c59a(param_1 + 0x40,*(undefined4 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x2c),
                *(undefined8 *)(param_1 + 0x34));
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f28e18 FUN_148f28e18 body=226 status=ok
// SIG undefined FUN_148f28e18(void)

void FUN_148f28e18(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined1 local_50 [40];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = 0;
  lStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_58 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar1 = &local_78;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_141133e44(local_50,puVar1);
  FUN_148f2c784(param_1 + 0x40,*(undefined4 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x34),
                local_50);
  if (lStack_60 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f28efe FUN_148f28efe body=470 status=ok
// SIG undefined FUN_148f28efe(void)

void FUN_148f28efe(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [43];
  undefined1 local_6d;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong lStack_50;
  undefined8 local_48;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_3c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  puVar3 = &local_3c;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)(param_2 + 0x38);
  }
  local_58 = 0;
  lStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_48 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
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
  local_6d = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6d);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = CONCAT71((int7)((ulonglong)param_2 >> 8),local_6d);
  FUN_141133e44(local_98,&local_68);
  uVar1 = FUN_148f290d6(param_1,puVar3,local_98,uVar2 & 0xffffffff);
  *param_3 = uVar1;
  if (lStack_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f290d6 FUN_148f290d6 body=153 status=ok
// SIG undefined FUN_148f290d6(void)

undefined8 FUN_148f290d6(longlong param_1,undefined4 *param_2,longlong param_3,undefined1 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined1 local_40;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *param_2;
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  local_38 = *(undefined8 *)(param_1 + 0x38);
  local_30 = *(longlong *)(param_1 + 0x40);
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 0xc) = *(int *)(local_30 + 0xc) + 1;
    UNLOCK();
  }
  local_20 = *(undefined4 *)(param_1 + 0x50);
  local_28 = *(undefined8 *)(param_1 + 0x48);
  local_48 = param_3;
  local_40 = param_4;
  uVar3 = FUN_148f2c8ce(&local_38,uVar2,uVar3,uVar1);
  if (*(longlong *)(param_3 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f29170 FUN_148f29170 body=143 status=ok
// SIG undefined FUN_148f29170(void)

void FUN_148f29170(longlong *param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_28);
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



// FUNCTION 148f29200 FUN_148f29200 body=270 status=ok
// SIG undefined FUN_148f29200(void)

void FUN_148f29200(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2a8))(param_1,&local_48,plVar1);
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f29310 FUN_148f29310 body=160 status=ok
// SIG undefined FUN_148f29310(void)

void FUN_148f29310(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x2b0))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f293b4 FUN_148f293b4 body=45 status=ok
// SIG undefined FUN_148f293b4(void)

undefined8 FUN_148f293b4(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  FUN_148f2cbd4(param_1 + 0x40,param_2,*(undefined4 *)(param_1 + 0x28),
                *(undefined8 *)(param_1 + 0x2c),param_3);
  return param_2;
}



// FUNCTION 148f293e2 FUN_148f293e2 body=116 status=ok
// SIG undefined FUN_148f293e2(void)

undefined8 FUN_148f293e2(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  local_30 = *(undefined8 *)(param_1 + 0x40);
  local_28 = *(longlong *)(param_1 + 0x48);
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 0xc) = *(int *)(local_28 + 0xc) + 1;
    UNLOCK();
  }
  local_18 = *(undefined4 *)(param_1 + 0x58);
  local_20 = *(undefined8 *)(param_1 + 0x50);
  FUN_148f2ccce(param_2,&local_30,uVar1,uVar2);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f29458 FUN_148f29458 body=126 status=ok
// SIG undefined FUN_148f29458(void)

undefined8 FUN_148f29458(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  local_30 = *(undefined8 *)(param_1 + 0x40);
  local_28 = *(longlong *)(param_1 + 0x48);
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 0xc) = *(int *)(local_28 + 0xc) + 1;
    UNLOCK();
  }
  local_18 = *(undefined4 *)(param_1 + 0x58);
  local_20 = *(undefined8 *)(param_1 + 0x50);
  local_38 = param_3;
  FUN_148f2ceee(param_2,&local_30,uVar1,uVar2);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f294d8 FUN_148f294d8 body=102 status=ok
// SIG undefined FUN_148f294d8(void)

void FUN_148f294d8(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(undefined8 *)(param_1 + 0x40);
  local_20 = *(longlong *)(param_1 + 0x48);
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
    UNLOCK();
  }
  local_10 = *(undefined4 *)(param_1 + 0x58);
  local_18 = *(undefined8 *)(param_1 + 0x50);
  FUN_148f2d0f0(&local_28);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f29540 FUN_148f29540 body=45 status=ok
// SIG undefined FUN_148f29540(void)

undefined8 FUN_148f29540(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  FUN_148f2d1a0(param_1 + 0x40,param_2,*(undefined4 *)(param_1 + 0x28),
                *(undefined8 *)(param_1 + 0x2c),param_3);
  return param_2;
}



// FUNCTION 148f2956e FUN_148f2956e body=116 status=ok
// SIG undefined FUN_148f2956e(void)

undefined8 FUN_148f2956e(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  local_30 = *(undefined8 *)(param_1 + 0x40);
  local_28 = *(longlong *)(param_1 + 0x48);
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 0xc) = *(int *)(local_28 + 0xc) + 1;
    UNLOCK();
  }
  local_18 = *(undefined4 *)(param_1 + 0x58);
  local_20 = *(undefined8 *)(param_1 + 0x50);
  FUN_148f2d29a(param_2,&local_30,uVar1,uVar2);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f295e4 FUN_148f295e4 body=126 status=ok
// SIG undefined FUN_148f295e4(void)

undefined8 FUN_148f295e4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  local_30 = *(undefined8 *)(param_1 + 0x40);
  local_28 = *(longlong *)(param_1 + 0x48);
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 0xc) = *(int *)(local_28 + 0xc) + 1;
    UNLOCK();
  }
  local_18 = *(undefined4 *)(param_1 + 0x58);
  local_20 = *(undefined8 *)(param_1 + 0x50);
  local_38 = param_3;
  FUN_148f2d434(param_2,&local_30,uVar1,uVar2);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f29664 FUN_148f29664 body=102 status=ok
// SIG undefined FUN_148f29664(void)

void FUN_148f29664(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(undefined8 *)(param_1 + 0x40);
  local_20 = *(longlong *)(param_1 + 0x48);
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
    UNLOCK();
  }
  local_10 = *(undefined4 *)(param_1 + 0x58);
  local_18 = *(undefined8 *)(param_1 + 0x50);
  FUN_148f2d636(&local_28);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f296cc FUN_148f296cc body=45 status=ok
// SIG undefined FUN_148f296cc(void)

undefined8 FUN_148f296cc(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  FUN_148f2d6e6(param_1 + 0x40,param_2,*(undefined4 *)(param_1 + 0x28),
                *(undefined8 *)(param_1 + 0x2c),param_3);
  return param_2;
}



// FUNCTION 148f296fa FUN_148f296fa body=116 status=ok
// SIG undefined FUN_148f296fa(void)

undefined8 FUN_148f296fa(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  local_30 = *(undefined8 *)(param_1 + 0x40);
  local_28 = *(longlong *)(param_1 + 0x48);
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 0xc) = *(int *)(local_28 + 0xc) + 1;
    UNLOCK();
  }
  local_18 = *(undefined4 *)(param_1 + 0x58);
  local_20 = *(undefined8 *)(param_1 + 0x50);
  FUN_148f2d7e0(param_2,&local_30,uVar1,uVar2);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f29770 FUN_148f29770 body=126 status=ok
// SIG undefined FUN_148f29770(void)

undefined8 FUN_148f29770(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  local_30 = *(undefined8 *)(param_1 + 0x40);
  local_28 = *(longlong *)(param_1 + 0x48);
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 0xc) = *(int *)(local_28 + 0xc) + 1;
    UNLOCK();
  }
  local_18 = *(undefined4 *)(param_1 + 0x58);
  local_20 = *(undefined8 *)(param_1 + 0x50);
  local_38 = param_3;
  FUN_148f2d97a(param_2,&local_30,uVar1,uVar2);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f297f0 FUN_148f297f0 body=102 status=ok
// SIG undefined FUN_148f297f0(void)

void FUN_148f297f0(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(undefined8 *)(param_1 + 0x40);
  local_20 = *(longlong *)(param_1 + 0x48);
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
    UNLOCK();
  }
  local_10 = *(undefined4 *)(param_1 + 0x58);
  local_18 = *(undefined8 *)(param_1 + 0x50);
  FUN_148f2db7c(&local_28);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f29858 FUN_148f29858 body=55 status=ok
// SIG undefined FUN_148f29858(void)

undefined8 * FUN_148f29858(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("..\\Plugins\\MovieScene\\SequencerScripting\\Source\\SequencerScripting/Private/KeysAndChannels\\MovieSceneScriptingChannel.h"
                ,0x1a,L"Pure virtual not implemented (%s)",L"UMovieSceneScriptingKey::GetTime");
  *param_2 = 0;
  return param_2;
}



// FUNCTION 148f29890 FUN_148f29890 body=54 status=ok
// SIG undefined FUN_148f29890(void)

undefined8 * FUN_148f29890(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("..\\Plugins\\MovieScene\\SequencerScripting\\Source\\SequencerScripting/Private/KeysAndChannels\\MovieSceneScriptingChannel.h"
                ,0x2d,L"Pure virtual not implemented (%s)",L"UMovieSceneScriptingChannel::GetKeys");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 148f298c6 FUN_148f298c6 body=54 status=ok
// SIG undefined FUN_148f298c6(void)

undefined8 * FUN_148f298c6(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("..\\Plugins\\MovieScene\\SequencerScripting\\Source\\SequencerScripting/Private/KeysAndChannels\\MovieSceneScriptingChannel.h"
                ,0x35,L"Pure virtual not implemented (%s)",
                L"UMovieSceneScriptingChannel::GetKeysByIndex");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 148f298fc FUN_148f298fc body=45 status=ok
// SIG undefined FUN_148f298fc(void)

undefined8 FUN_148f298fc(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  FUN_148f2dc2c(param_1 + 0x40,param_2,*(undefined4 *)(param_1 + 0x28),
                *(undefined8 *)(param_1 + 0x2c),param_3);
  return param_2;
}



// FUNCTION 148f2992a FUN_148f2992a body=116 status=ok
// SIG undefined FUN_148f2992a(void)

undefined8 FUN_148f2992a(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  local_30 = *(undefined8 *)(param_1 + 0x38);
  local_28 = *(longlong *)(param_1 + 0x40);
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 0xc) = *(int *)(local_28 + 0xc) + 1;
    UNLOCK();
  }
  local_18 = *(undefined4 *)(param_1 + 0x50);
  local_20 = *(undefined8 *)(param_1 + 0x48);
  FUN_148f2dd26(param_2,&local_30,uVar2,uVar1);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f299a0 FUN_148f299a0 body=126 status=ok
// SIG undefined FUN_148f299a0(void)

undefined8 FUN_148f299a0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  local_30 = *(undefined8 *)(param_1 + 0x38);
  local_28 = *(longlong *)(param_1 + 0x40);
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 0xc) = *(int *)(local_28 + 0xc) + 1;
    UNLOCK();
  }
  local_18 = *(undefined4 *)(param_1 + 0x50);
  local_20 = *(undefined8 *)(param_1 + 0x48);
  local_38 = param_3;
  FUN_148f2dec0(param_2,&local_30,uVar2,uVar1);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f29a20 FUN_148f29a20 body=102 status=ok
// SIG undefined FUN_148f29a20(void)

void FUN_148f29a20(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(undefined8 *)(param_1 + 0x38);
  local_20 = *(longlong *)(param_1 + 0x40);
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
    UNLOCK();
  }
  local_10 = *(undefined4 *)(param_1 + 0x50);
  local_18 = *(undefined8 *)(param_1 + 0x48);
  FUN_148f2e0c2(&local_28);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f29a88 FUN_148f29a88 body=45 status=ok
// SIG undefined FUN_148f29a88(void)

undefined8 FUN_148f29a88(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  FUN_148f2e172(param_1 + 0x40,param_2,*(undefined4 *)(param_1 + 0x28),
                *(undefined8 *)(param_1 + 0x2c),param_3);
  return param_2;
}



// FUNCTION 148f29ab6 FUN_148f29ab6 body=116 status=ok
// SIG undefined FUN_148f29ab6(void)

undefined8 FUN_148f29ab6(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  local_30 = *(undefined8 *)(param_1 + 0x38);
  local_28 = *(longlong *)(param_1 + 0x40);
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 0xc) = *(int *)(local_28 + 0xc) + 1;
    UNLOCK();
  }
  local_18 = *(undefined4 *)(param_1 + 0x50);
  local_20 = *(undefined8 *)(param_1 + 0x48);
  FUN_148f2e26c(param_2,&local_30,uVar2,uVar1);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f29b2c FUN_148f29b2c body=126 status=ok
// SIG undefined FUN_148f29b2c(void)

undefined8 FUN_148f29b2c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  local_30 = *(undefined8 *)(param_1 + 0x38);
  local_28 = *(longlong *)(param_1 + 0x40);
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 0xc) = *(int *)(local_28 + 0xc) + 1;
    UNLOCK();
  }
  local_18 = *(undefined4 *)(param_1 + 0x50);
  local_20 = *(undefined8 *)(param_1 + 0x48);
  local_38 = param_3;
  FUN_148f2e406(param_2,&local_30,uVar2,uVar1);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f29bac FUN_148f29bac body=102 status=ok
// SIG undefined FUN_148f29bac(void)

void FUN_148f29bac(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(undefined8 *)(param_1 + 0x38);
  local_20 = *(longlong *)(param_1 + 0x40);
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
    UNLOCK();
  }
  local_10 = *(undefined4 *)(param_1 + 0x50);
  local_18 = *(undefined8 *)(param_1 + 0x48);
  FUN_148f2e608(&local_28);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f29c14 FUN_148f29c14 body=101 status=ok
// SIG undefined FUN_148f29c14(void)

undefined8 * FUN_148f29c14(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = DAT_14cbf2348;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0xffffffff;
  param_2[3] = 0;
  param_2[4] = 0;
  lVar2 = FUN_147526316();
  if (lVar2 == 0) {
    pwVar3 = 
    L"Invalid ChannelHandle for MovieSceneScriptingKey, failed to get value. Did you forget to create the key through the channel?"
    ;
  }
  else {
    cVar1 = FUN_148f29c79(lVar2,param_3,param_2);
    if (cVar1 != '\0') {
      return param_2;
    }
    pwVar3 = 
    L"Invalid KeyIndex for MovieSceneScriptingKey, failed to get value. Did you forget to create the key through the channel?"
    ;
  }
  FUN_1415b7ec4(pwVar3,2,0);
  return param_2;
}



// FUNCTION 148f29c79 FUN_148f29c79 body=160 status=ok
// SIG undefined FUN_148f29c79(void)

bool FUN_148f29c79(longlong param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x98);
  local_30 = (longlong *)(param_1 + 0x88);
  iVar9 = FUN_14752433e(local_48,param_2);
  if (iVar9 != -1) {
    lVar3 = *local_30;
    lVar10 = (longlong)iVar9;
    *(undefined8 *)(param_3 + 8) = *(undefined8 *)(lVar3 + 0x20 + lVar10 * 0x28);
    puVar1 = (undefined4 *)(lVar3 + lVar10 * 0x28);
    uVar4 = *puVar1;
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    puVar2 = (undefined8 *)(lVar3 + 0x10 + lVar10 * 0x28);
    uVar8 = puVar2[1];
    *(undefined8 *)(param_3 + 4) = *puVar2;
    *(undefined8 *)(param_3 + 6) = uVar8;
    *param_3 = uVar4;
    param_3[1] = uVar5;
    param_3[2] = uVar6;
    param_3[3] = uVar7;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar9 != -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f29d1a FUN_148f29d1a body=454 status=ok
// SIG undefined FUN_148f29d1a(void)

void FUN_148f29d1a(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,char param_6,float param_7)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  float fVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  int local_78;
  float local_74;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = param_4;
  local_68 = param_3;
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_a8);
  }
  if (0.99999994 <= param_7) {
    param_7 = 0.99999994;
  }
  if ((param_6 != '\x01') || (param_7 <= 0.0)) {
    if (param_6 == '\0') {
      uVar3 = FUN_14479d2ce(&local_68);
      FUN_148f42fe8(&local_80,uVar3);
      uVar3 = FUN_14479d2ce(&local_68);
      FUN_148f41546(&local_88,uVar3);
      fVar4 = (float)(-(uint)(0.0 < param_7) & (uint)(param_7 + 0.5 + -0.5));
      if (0.99999994 <= fVar4) {
        fVar4 = 0.99999994;
      }
      if (fVar4 <= 0.0) {
        fVar4 = 0.0;
      }
      FUN_144a808d5(&local_78,CONCAT44(fVar4,param_5),local_88,local_80);
      param_5 = (uint)(0.5 <= local_74) + local_78;
    }
  }
  else {
    FUN_1415b7ec4(L"SetTime called with a SubFrame specified for a Tick Resolution type time! SubFrames are only allowed for Display Rate types, ignoring..."
                  ,2,0);
  }
  lVar2 = FUN_147526316(param_1);
  if (lVar2 == 0) {
    FUN_1415b7ec4(L"Invalid ChannelHandle for MovieSceneScriptingKey, failed to set Time.",2,0);
  }
  else {
    cVar1 = FUN_144729dda(&local_70);
    if (cVar1 != '\0') {
      FUN_14479d2ce(&local_70);
    }
    FUN_147525d6e(lVar2,param_2,param_5);
  }
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f29f04 FUN_148f29f04 body=145 status=ok
// SIG undefined FUN_148f29f04(void)

void FUN_148f29f04(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_3;
  lVar2 = FUN_147526316();
  if (lVar2 != 0) {
    cVar1 = FUN_144729dda(&local_28);
    if (cVar1 != '\0') {
      FUN_14479d2ce(&local_28);
    }
    cVar1 = FUN_148f29faa(lVar2,param_2,param_4);
    if (cVar1 != '\0') {
      if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
}



// FUNCTION 148f29faa FUN_148f29faa body=160 status=ok
// SIG undefined FUN_148f29faa(void)

bool FUN_148f29faa(longlong param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x98);
  local_30 = (longlong *)(param_1 + 0x88);
  iVar9 = FUN_14752433e(local_48,param_2);
  if (iVar9 != -1) {
    lVar3 = *local_30;
    lVar10 = (longlong)iVar9;
    *(undefined8 *)(lVar3 + 0x20 + lVar10 * 0x28) = *(undefined8 *)(param_3 + 8);
    uVar4 = *param_3;
    uVar5 = param_3[1];
    uVar6 = param_3[2];
    uVar7 = param_3[3];
    uVar8 = *(undefined8 *)(param_3 + 6);
    puVar2 = (undefined8 *)(lVar3 + 0x10 + lVar10 * 0x28);
    *puVar2 = *(undefined8 *)(param_3 + 4);
    puVar2[1] = uVar8;
    puVar1 = (undefined4 *)(lVar3 + lVar10 * 0x28);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar9 != -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2a04c FUN_148f2a04c body=406 status=ok
// SIG undefined FUN_148f2a04c(void)

longlong FUN_148f2a04c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4,
                      undefined8 param_5,char param_6)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  int local_58;
  float local_54;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = param_3;
  local_48 = param_2;
  lVar4 = FUN_147526316();
  if (lVar4 == 0) {
    lVar6 = 0;
    FUN_1415b7ec4(L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to add key.",2,0);
  }
  else {
    uVar5 = FUN_1409ffe1d();
    lVar6 = FUN_148f2a1e3(uVar5);
    if (param_6 == '\0') {
      uVar5 = FUN_14479d2ce(&local_48);
      FUN_148f42fe8(&local_60,uVar5);
      uVar5 = FUN_14479d2ce(&local_48);
      FUN_148f41546(&local_68,uVar5);
      FUN_144a808d5(&local_58,param_4,local_68,local_60);
      param_4 = (uint)(0.5 <= local_54) + local_58;
    }
    cVar3 = FUN_144729dda(&local_50);
    if (cVar3 != '\0') {
      FUN_14479d2ce(&local_50);
    }
    FUN_148f2a278(&local_58,lVar4,param_4,param_5);
    *(int *)(lVar6 + 0x28) = local_58;
    uVar5 = *param_1;
    lVar4 = param_1[1];
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
      UNLOCK();
    }
    plVar2 = *(longlong **)(lVar6 + 0x48);
    *(undefined8 *)(lVar6 + 0x40) = uVar5;
    *(longlong *)(lVar6 + 0x48) = lVar4;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    *(undefined4 *)(lVar6 + 0x58) = *(undefined4 *)(param_1 + 3);
    *(undefined8 *)(lVar6 + 0x50) = param_1[2];
    *(undefined8 *)(lVar6 + 0x34) = local_50;
    *(undefined8 *)(lVar6 + 0x2c) = local_48;
  }
  plVar2 = (longlong *)param_1[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2a1e3 FUN_148f2a1e3 body=148 status=ok
// SIG undefined FUN_148f2a1e3(void)

undefined8 FUN_148f2a1e3(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145999ccc();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2a278 FUN_148f2a278 body=222 status=ok
// SIG undefined FUN_148f2a278(void)

undefined4 *
FUN_148f2a278(undefined4 *param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140861d3c(local_58,param_2,param_2 + 0x50,param_2 + 0x98);
  local_40 = param_2 + 0x88;
  iVar1 = FUN_147525ee8(local_58,param_3,0);
  FUN_147a3fc60(param_1);
  if (iVar1 == -1) {
    uVar2 = FUN_14764a6ae(local_58,param_3,param_4);
    FUN_147524308(local_58,&local_5c,uVar2);
    *param_1 = local_5c;
  }
  else {
    FUN_147524308(local_58,&local_5c,iVar1);
    *param_1 = local_5c;
    FUN_148f29faa(param_2,local_5c,param_4);
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2a358 FUN_148f2a358 body=176 status=ok
// SIG undefined FUN_148f2a358(void)

void FUN_148f2a358(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  longlong lVar9;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  lVar9 = FUN_147526316();
  if (lVar9 == 0) {
    FUN_1415b7ec4(L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to set default value."
                  ,2,0);
  }
  else {
    cVar8 = FUN_144729dda(&local_28);
    if (cVar8 != '\0') {
      FUN_14479d2ce(&local_28);
    }
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    uVar6 = *(undefined8 *)(param_3 + 4);
    uVar7 = *(undefined8 *)(param_3 + 6);
    *(undefined8 *)(lVar9 + 0x80) = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)(lVar9 + 0x70) = uVar6;
    *(undefined8 *)(lVar9 + 0x78) = uVar7;
    *(undefined4 *)(lVar9 + 0x60) = uVar2;
    *(undefined4 *)(lVar9 + 100) = uVar3;
    *(undefined4 *)(lVar9 + 0x68) = uVar4;
    *(undefined4 *)(lVar9 + 0x6c) = uVar5;
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2a41a FUN_148f2a41a body=144 status=ok
// SIG undefined FUN_148f2a41a(void)

undefined8 FUN_148f2a41a(undefined8 param_1,ulonglong param_2)

{
  int iVar1;
  longlong *plVar2;
  wchar_t *pwVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = (longlong *)FUN_147526316();
  if (plVar2 == (longlong *)0x0) {
    pwVar3 = 
    L"Invalid ChannelHandle for MovieSceneScriptingKey, failed to get value. Did you forget to create the key through the channel?"
    ;
  }
  else {
    (**(code **)(*plVar2 + 0x90))(plVar2,local_38);
    iVar1 = FUN_14752433e(local_38,param_2 & 0xffffffff);
    if (iVar1 != -1) {
      uVar4 = CONCAT71((int7)((param_2 & 0xffffffff) >> 8),
                       *(undefined1 *)(*local_20 + (longlong)iVar1));
      goto LAB_148f2a482;
    }
    pwVar3 = 
    L"Invalid KeyIndex for MovieSceneScriptingKey, failed to get value. Did you forget to create the key through the channel?"
    ;
  }
  uVar4 = 0;
  FUN_1415b7ec4(pwVar3,2,0);
LAB_148f2a482:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2a4ac FUN_148f2a4ac body=454 status=ok
// SIG undefined FUN_148f2a4ac(void)

void FUN_148f2a4ac(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,char param_6,float param_7)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  float fVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  int local_78;
  float local_74;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = param_4;
  local_68 = param_3;
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_a8);
  }
  if (0.99999994 <= param_7) {
    param_7 = 0.99999994;
  }
  if ((param_6 != '\x01') || (param_7 <= 0.0)) {
    if (param_6 == '\0') {
      uVar3 = FUN_14479d2ce(&local_68);
      FUN_148f42fe8(&local_80,uVar3);
      uVar3 = FUN_14479d2ce(&local_68);
      FUN_148f41546(&local_88,uVar3);
      fVar4 = (float)(-(uint)(0.0 < param_7) & (uint)(param_7 + 0.5 + -0.5));
      if (0.99999994 <= fVar4) {
        fVar4 = 0.99999994;
      }
      if (fVar4 <= 0.0) {
        fVar4 = 0.0;
      }
      FUN_144a808d5(&local_78,CONCAT44(fVar4,param_5),local_88,local_80);
      param_5 = (uint)(0.5 <= local_74) + local_78;
    }
  }
  else {
    FUN_1415b7ec4(L"SetTime called with a SubFrame specified for a Tick Resolution type time! SubFrames are only allowed for Display Rate types, ignoring..."
                  ,2,0);
  }
  lVar2 = FUN_147526316(param_1);
  if (lVar2 == 0) {
    FUN_1415b7ec4(L"Invalid ChannelHandle for MovieSceneScriptingKey, failed to set Time.",2,0);
  }
  else {
    cVar1 = FUN_144729dda(&local_70);
    if (cVar1 != '\0') {
      FUN_14479d2ce(&local_70);
    }
    FUN_147525d6e(lVar2,param_2,param_5);
  }
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2a696 FUN_148f2a696 body=190 status=ok
// SIG undefined FUN_148f2a696(void)

void FUN_148f2a696(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined1 param_4)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined1 local_48 [24];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = param_3;
  plVar3 = (longlong *)FUN_147526316();
  if (plVar3 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
  }
  cVar1 = FUN_144729dda(&local_50);
  if (cVar1 != '\0') {
    FUN_14479d2ce(&local_50);
  }
  (**(code **)(*plVar3 + 0x90))(plVar3,local_48);
  iVar2 = FUN_14752433e(local_48,param_2);
  if (iVar2 == -1) {
    FUN_1415b7ec4(L"Invalid KeyIndex for MovieSceneScriptingKey, failed to set value. Did you forget to create the key through the channel?"
                  ,2,0);
  }
  else {
    *(undefined1 *)(*local_30 + (longlong)iVar2) = param_4;
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2a76c FUN_148f2a76c body=406 status=ok
// SIG undefined FUN_148f2a76c(void)

longlong FUN_148f2a76c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4,
                      undefined8 param_5,char param_6)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  int local_58;
  float local_54;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = param_3;
  local_48 = param_2;
  lVar4 = FUN_147526316();
  if (lVar4 == 0) {
    lVar6 = 0;
    FUN_1415b7ec4(L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to add key.",2,0);
  }
  else {
    uVar5 = FUN_1409ffe1d();
    lVar6 = FUN_148f2a903(uVar5);
    if (param_6 == '\0') {
      uVar5 = FUN_14479d2ce(&local_48);
      FUN_148f42fe8(&local_60,uVar5);
      uVar5 = FUN_14479d2ce(&local_48);
      FUN_148f41546(&local_68,uVar5);
      FUN_144a808d5(&local_58,param_4,local_68,local_60);
      param_4 = (uint)(0.5 <= local_54) + local_58;
    }
    cVar3 = FUN_144729dda(&local_50);
    if (cVar3 != '\0') {
      FUN_14479d2ce(&local_50);
    }
    FUN_148f2a998(&local_58,lVar4,param_4,param_5);
    *(int *)(lVar6 + 0x28) = local_58;
    uVar5 = *param_1;
    lVar4 = param_1[1];
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
      UNLOCK();
    }
    plVar2 = *(longlong **)(lVar6 + 0x48);
    *(undefined8 *)(lVar6 + 0x40) = uVar5;
    *(longlong *)(lVar6 + 0x48) = lVar4;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    *(undefined4 *)(lVar6 + 0x58) = *(undefined4 *)(param_1 + 3);
    *(undefined8 *)(lVar6 + 0x50) = param_1[2];
    *(undefined8 *)(lVar6 + 0x34) = local_50;
    *(undefined8 *)(lVar6 + 0x2c) = local_48;
  }
  plVar2 = (longlong *)param_1[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2a903 FUN_148f2a903 body=148 status=ok
// SIG undefined FUN_148f2a903(void)

undefined8 FUN_148f2a903(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145999db8();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2a998 FUN_148f2a998 body=246 status=ok
// SIG undefined FUN_148f2a998(void)

undefined4 *
FUN_148f2a998(undefined4 *param_1,longlong *param_2,undefined4 param_3,undefined1 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78 [32];
  undefined4 local_58 [6];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (**(code **)(*param_2 + 0x90))(param_2,local_78);
  iVar1 = FUN_147525ee8(local_78,param_3,0);
  FUN_147a3fc60(param_1);
  if (iVar1 == -1) {
    uVar2 = FUN_14753e556(local_78,param_3,*param_4);
    FUN_147524308(local_78,local_58,uVar2);
    *param_1 = local_58[0];
  }
  else {
    FUN_147524308(local_78,local_58,iVar1);
    *param_1 = local_58[0];
    (**(code **)(*param_2 + 0x90))(param_2,local_58);
    iVar1 = FUN_14752433e(local_58,local_58[0]);
    if (iVar1 != -1) {
      *(undefined1 *)(*local_40 + (longlong)iVar1) = *param_4;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2aa90 FUN_148f2aa90 body=201 status=ok
// SIG undefined FUN_148f2aa90(void)

byte * FUN_148f2aa90(byte *param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [40];
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = *param_1 & 0xfc;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0x60;
  param_1[0xd] = 0xea;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 1;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  local_38 = param_3;
  plVar2 = (longlong *)FUN_147526316(param_2);
  if (plVar2 == (longlong *)0x0) {
    FUN_1415b7ec4(L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get effective range."
                  ,2,0);
  }
  else {
    uVar3 = FUN_14479d2ce(&local_38);
    FUN_148f42fe8(&local_40,uVar3);
    (**(code **)(*plVar2 + 0x40))(plVar2,local_50);
    FUN_148f2ab5a(param_1,local_50,local_40);
  }
  plVar2 = *(longlong **)(param_2 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2ab5a FUN_148f2ab5a body=140 status=ok
// SIG undefined FUN_148f2ab5a(void)

void FUN_148f2ab5a(byte *param_1,ulonglong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)(param_1 + 0xc) = param_3;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar5 = uVar1 & 0xff;
  uVar4 = uVar2 & 0xff;
  *param_1 = (uVar4 != 2) * '\x02' | uVar5 != 2 | *param_1 & 0xfc;
  if (uVar5 != 2) {
    *(int *)(param_1 + 4) =
         (int)(uVar1 >> 0x20) + *(int *)(&DAT_14a46e5f8 + (ulonglong)(uVar5 == 0) * 4);
  }
  iVar3 = (int)uVar4;
  if (iVar3 != 2) {
    *(int *)(param_1 + 8) =
         (int)(uVar2 >> 0x20) + *(int *)(&DAT_14a46e600 + (ulonglong)(iVar3 == 1) * 4);
  }
  return;
}



// FUNCTION 148f2abe6 FUN_148f2abe6 body=593 status=ok
// SIG undefined FUN_148f2abe6(void)

longlong *
FUN_148f2abe6(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  wchar_t *pwVar8;
  int iVar9;
  undefined1 auVar10 [16];
  float fVar11;
  undefined1 auStack_e8 [32];
  undefined4 local_c8 [2];
  int local_c0;
  float local_bc;
  char local_b8 [4];
  int iStack_b4;
  char local_b0;
  undefined7 uStack_af;
  int iStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  int local_98;
  float local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *param_1 = 0;
  param_1[1] = 0;
  local_a0 = param_3;
  plVar6 = (longlong *)FUN_147526316(param_2);
  if (plVar6 == (longlong *)0x0) {
    pwVar8 = L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to evaluate keys.";
  }
  else {
    uVar7 = FUN_14479d2ce(&local_a0);
    FUN_148f42fe8(&local_a8,uVar7);
    FUN_148f2ae38(param_4,local_b8,local_a8);
    if ((local_b8[0] != '\x02') && (local_b0 != '\x02')) {
      FUN_144a808d5(&local_c0,1,param_5,local_a8);
      iVar9 = iStack_b4 + *(int *)(&DAT_14a46e5f8 + (ulonglong)(local_b8[0] == '\0') * 4);
      iVar2 = *(int *)(&DAT_14a46e600 + (ulonglong)(local_b0 == '\x01') * 4);
      fVar11 = 0.0;
      while( true ) {
        uVar7 = local_a8;
        if ((iStack_ac + iVar2 <= iVar9) && ((iVar9 != iStack_ac + iVar2 || (0.0 <= fVar11))))
        break;
        FUN_144a808d5(&local_98,CONCAT44(fVar11,iVar9),local_a8,param_5);
        FUN_144a808d5(local_c8,(uint)(0.5 <= local_94) + local_98,param_5,uVar7);
        uVar5 = local_c8[0];
        iVar3 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
          FUN_1401c3474(param_1,iVar3);
        }
        lVar4 = *param_1;
        *(undefined1 *)(lVar4 + iVar3) = 0;
        (**(code **)(*plVar6 + 0x98))(plVar6,uVar5,lVar4 + iVar3);
        fVar11 = fVar11 + local_bc;
        iVar9 = iVar9 + local_c0 + ((int)ROUND(fVar11 + fVar11 + -0.5) >> 1);
        auVar10 = roundss(ZEXT816(0),ZEXT416((uint)fVar11),9);
        fVar11 = fVar11 - auVar10._0_4_;
      }
      goto LAB_148f2ac56;
    }
    pwVar8 = L"Unbounded range passed to evaluate keys.";
  }
  FUN_1415b7ec4(pwVar8,2,0);
LAB_148f2ac56:
  plVar6 = *(longlong **)(param_2 + 8);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  if ((local_90 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2ae38 FUN_148f2ae38 body=164 status=ok
// SIG undefined FUN_148f2ae38(void)

longlong * FUN_148f2ae38(byte *param_1,longlong *param_2,undefined8 param_3)

{
  byte bVar1;
  undefined1 auStack_58 [40];
  uint local_30 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined1 *)param_2 = 2;
  *(undefined4 *)((longlong)param_2 + 4) = 0;
  *(undefined1 *)(param_2 + 1) = 2;
  *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  bVar1 = *param_1;
  if ((bVar1 & 1) != 0) {
    FUN_144a808d5(local_30,*(undefined4 *)(param_1 + 4),*(undefined8 *)(param_1 + 0xc),param_3);
    *param_2 = ((ulonglong)local_30[0] << 0x20) + 1;
    bVar1 = *param_1;
  }
  if ((bVar1 & 2) != 0) {
    FUN_144a808d5(local_30,*(undefined4 *)(param_1 + 8),*(undefined8 *)(param_1 + 0xc),param_3);
    param_2[1] = (ulonglong)local_30[0] << 0x20;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2aede FUN_148f2aede body=99 status=ok
// SIG undefined FUN_148f2aede(void)

undefined1 * FUN_148f2aede(undefined1 *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 uVar4;
  
  lVar3 = FUN_147526316(param_2);
  if (lVar3 == 0) {
    uVar4 = 0;
    FUN_1415b7ec4(L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get default value."
                  ,2,0);
  }
  else if (*(char *)(lVar3 + 0x69) == '\x01') {
    *param_1 = *(undefined1 *)(lVar3 + 0x68);
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  param_1[1] = uVar4;
  plVar2 = *(longlong **)(param_2 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  return param_1;
}



// FUNCTION 148f2af42 FUN_148f2af42 body=149 status=ok
// SIG undefined FUN_148f2af42(void)

void FUN_148f2af42(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  lVar3 = FUN_147526316();
  if (lVar3 == 0) {
    FUN_1415b7ec4(L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to remove default value."
                  ,2,0);
  }
  else {
    cVar2 = FUN_144729dda(&local_20);
    if (cVar2 != '\0') {
      FUN_14479d2ce(&local_20);
    }
    *(undefined1 *)(lVar3 + 0x69) = 0;
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
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



// FUNCTION 148f2afe8 FUN_148f2afe8 body=159 status=ok
// SIG undefined FUN_148f2afe8(void)

void FUN_148f2afe8(longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  int *piVar1;
  undefined1 uVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  lVar4 = FUN_147526316();
  if (lVar4 == 0) {
    FUN_1415b7ec4(L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to set default value."
                  ,2,0);
  }
  else {
    cVar3 = FUN_144729dda(&local_28);
    if (cVar3 != '\0') {
      FUN_14479d2ce(&local_28);
    }
    uVar2 = *param_3;
    *(undefined1 *)(lVar4 + 0x69) = 1;
    *(undefined1 *)(lVar4 + 0x68) = uVar2;
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2b09a FUN_148f2b09a body=114 status=ok
// SIG undefined FUN_148f2b09a(void)

undefined1 FUN_148f2b09a(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  undefined1 auStack_38 [39];
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_11 = 0;
  lVar2 = FUN_147526316();
  if (lVar2 == 0) {
    pwVar3 = 
    L"Invalid ChannelHandle for MovieSceneScriptingKey, failed to get value. Did you forget to create the key through the channel?"
    ;
  }
  else {
    cVar1 = FUN_148f2b10d(lVar2,param_2,&local_11);
    if (cVar1 != '\0') goto LAB_148f2b0d0;
    pwVar3 = 
    L"Invalid KeyIndex for MovieSceneScriptingKey, failed to get value. Did you forget to create the key through the channel?"
    ;
  }
  FUN_1415b7ec4(pwVar3,2,0);
LAB_148f2b0d0:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return local_11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2b10d FUN_148f2b10d body=133 status=ok
// SIG undefined FUN_148f2b10d(void)

bool FUN_148f2b10d(longlong param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140861d3c(local_48,param_1,param_1 + 0x58,param_1 + 0x88);
  local_30 = (longlong *)(param_1 + 0x70);
  iVar1 = FUN_14752433e(local_48,param_2);
  if (iVar1 != -1) {
    *param_3 = *(undefined1 *)(*local_30 + (longlong)iVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar1 != -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2b194 FUN_148f2b194 body=454 status=ok
// SIG undefined FUN_148f2b194(void)

void FUN_148f2b194(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,char param_6,float param_7)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  float fVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  int local_78;
  float local_74;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = param_4;
  local_68 = param_3;
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_a8);
  }
  if (0.99999994 <= param_7) {
    param_7 = 0.99999994;
  }
  if ((param_6 != '\x01') || (param_7 <= 0.0)) {
    if (param_6 == '\0') {
      uVar3 = FUN_14479d2ce(&local_68);
      FUN_148f42fe8(&local_80,uVar3);
      uVar3 = FUN_14479d2ce(&local_68);
      FUN_148f41546(&local_88,uVar3);
      fVar4 = (float)(-(uint)(0.0 < param_7) & (uint)(param_7 + 0.5 + -0.5));
      if (0.99999994 <= fVar4) {
        fVar4 = 0.99999994;
      }
      if (fVar4 <= 0.0) {
        fVar4 = 0.0;
      }
      FUN_144a808d5(&local_78,CONCAT44(fVar4,param_5),local_88,local_80);
      param_5 = (uint)(0.5 <= local_74) + local_78;
    }
  }
  else {
    FUN_1415b7ec4(L"SetTime called with a SubFrame specified for a Tick Resolution type time! SubFrames are only allowed for Display Rate types, ignoring..."
                  ,2,0);
  }
  lVar2 = FUN_147526316(param_1);
  if (lVar2 == 0) {
    FUN_1415b7ec4(L"Invalid ChannelHandle for MovieSceneScriptingKey, failed to set Time.",2,0);
  }
  else {
    cVar1 = FUN_144729dda(&local_70);
    if (cVar1 != '\0') {
      FUN_14479d2ce(&local_70);
    }
    FUN_147525d6e(lVar2,param_2,param_5);
  }
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2b37e FUN_148f2b37e body=147 status=ok
// SIG undefined FUN_148f2b37e(void)

void FUN_148f2b37e(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined1 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = param_4;
  local_20 = param_3;
  lVar2 = FUN_147526316();
  if (lVar2 != 0) {
    cVar1 = FUN_144729dda(&local_20);
    if (cVar1 != '\0') {
      FUN_14479d2ce(&local_20);
    }
    cVar1 = FUN_148f2b425(lVar2,param_2,&local_21);
    if (cVar1 != '\0') {
      if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 148f2b425 FUN_148f2b425 body=134 status=ok
// SIG undefined FUN_148f2b425(void)

bool FUN_148f2b425(longlong param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140861d3c(local_48,param_1,param_1 + 0x58,param_1 + 0x88);
  local_30 = (longlong *)(param_1 + 0x70);
  iVar1 = FUN_14752433e(local_48,param_2);
  if (iVar1 != -1) {
    *(undefined1 *)(*local_30 + (longlong)iVar1) = *param_3;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar1 != -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2b4ac FUN_148f2b4ac body=406 status=ok
// SIG undefined FUN_148f2b4ac(void)

longlong FUN_148f2b4ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4,
                      undefined8 param_5,char param_6)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  int local_58;
  float local_54;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = param_3;
  local_48 = param_2;
  lVar4 = FUN_147526316();
  if (lVar4 == 0) {
    lVar6 = 0;
    FUN_1415b7ec4(L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to add key.",2,0);
  }
  else {
    uVar5 = FUN_1409ffe1d();
    lVar6 = FUN_148f2b643(uVar5);
    if (param_6 == '\0') {
      uVar5 = FUN_14479d2ce(&local_48);
      FUN_148f42fe8(&local_60,uVar5);
      uVar5 = FUN_14479d2ce(&local_48);
      FUN_148f41546(&local_68,uVar5);
      FUN_144a808d5(&local_58,param_4,local_68,local_60);
      param_4 = (uint)(0.5 <= local_54) + local_58;
    }
    cVar3 = FUN_144729dda(&local_50);
    if (cVar3 != '\0') {
      FUN_14479d2ce(&local_50);
    }
    FUN_148f2b6d8(&local_58,lVar4,param_4,param_5);
    *(int *)(lVar6 + 0x28) = local_58;
    uVar5 = *param_1;
    lVar4 = param_1[1];
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
      UNLOCK();
    }
    plVar2 = *(longlong **)(lVar6 + 0x48);
    *(undefined8 *)(lVar6 + 0x40) = uVar5;
    *(longlong *)(lVar6 + 0x48) = lVar4;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    *(undefined4 *)(lVar6 + 0x58) = *(undefined4 *)(param_1 + 3);
    *(undefined8 *)(lVar6 + 0x50) = param_1[2];
    *(undefined8 *)(lVar6 + 0x34) = local_50;
    *(undefined8 *)(lVar6 + 0x2c) = local_48;
  }
  plVar2 = (longlong *)param_1[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2b643 FUN_148f2b643 body=148 status=ok
// SIG undefined FUN_148f2b643(void)

undefined8 FUN_148f2b643(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145999ea4();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2b6d8 FUN_148f2b6d8 body=219 status=ok
// SIG undefined FUN_148f2b6d8(void)

undefined4 *
FUN_148f2b6d8(undefined4 *param_1,longlong param_2,undefined4 param_3,undefined1 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140861d3c(local_58,param_2,param_2 + 0x58,param_2 + 0x88);
  local_40 = param_2 + 0x70;
  iVar1 = FUN_147525ee8(local_58,param_3,0);
  FUN_147a3fc60(param_1);
  if (iVar1 == -1) {
    uVar2 = FUN_14753ea0c(local_58,param_3,*param_4);
    FUN_147524308(local_58,&local_5c,uVar2);
    *param_1 = local_5c;
  }
  else {
    FUN_147524308(local_58,&local_5c,iVar1);
    *param_1 = local_5c;
    FUN_148f2b425(param_2,local_5c,param_4);
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2b7b4 FUN_148f2b7b4 body=99 status=ok
// SIG undefined FUN_148f2b7b4(void)

undefined1 * FUN_148f2b7b4(undefined1 *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 uVar4;
  
  lVar3 = FUN_147526316(param_2);
  if (lVar3 == 0) {
    uVar4 = 0;
    FUN_1415b7ec4(L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get default value."
                  ,2,0);
  }
  else if (*(char *)(lVar3 + 0x69) == '\x01') {
    *param_1 = *(undefined1 *)(lVar3 + 0x68);
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  param_1[1] = uVar4;
  plVar2 = *(longlong **)(param_2 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  return param_1;
}



// FUNCTION 148f2b818 FUN_148f2b818 body=149 status=ok
// SIG undefined FUN_148f2b818(void)

void FUN_148f2b818(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  lVar3 = FUN_147526316();
  if (lVar3 == 0) {
    FUN_1415b7ec4(L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to remove default value."
                  ,2,0);
  }
  else {
    cVar2 = FUN_144729dda(&local_20);
    if (cVar2 != '\0') {
      FUN_14479d2ce(&local_20);
    }
    *(undefined1 *)(lVar3 + 0x69) = 0;
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
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



// FUNCTION 148f2b8be FUN_148f2b8be body=159 status=ok
// SIG undefined FUN_148f2b8be(void)

void FUN_148f2b8be(longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  int *piVar1;
  undefined1 uVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  lVar4 = FUN_147526316();
  if (lVar4 == 0) {
    FUN_1415b7ec4(L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to set default value."
                  ,2,0);
  }
  else {
    cVar3 = FUN_144729dda(&local_28);
    if (cVar3 != '\0') {
      FUN_14479d2ce(&local_28);
    }
    uVar2 = *param_3;
    *(undefined1 *)(lVar4 + 0x69) = 1;
    *(undefined1 *)(lVar4 + 0x68) = uVar2;
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2b970 FUN_148f2b970 body=92 status=ok
// SIG undefined FUN_148f2b970(void)

undefined8 * FUN_148f2b970(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 2;
  lVar2 = FUN_147526316();
  if (lVar2 == 0) {
    pwVar3 = 
    L"Invalid ChannelHandle for MovieSceneScriptingKey, failed to get value. Did you forget to create the key through the channel?"
    ;
  }
  else {
    cVar1 = FUN_148f2b9cc(lVar2,param_3,param_2);
    if (cVar1 != '\0') {
      return param_2;
    }
    pwVar3 = 
    L"Invalid KeyIndex for MovieSceneScriptingKey, failed to get value. Did you forget to create the key through the channel?"
    ;
  }
  FUN_1415b7ec4(pwVar3,2,0);
  return param_2;
}



// FUNCTION 148f2b9cc FUN_148f2b9cc body=148 status=ok
// SIG undefined FUN_148f2b9cc(void)

bool FUN_148f2b9cc(longlong param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140861d3c(local_48,param_1,param_1 + 0x58,param_1 + 0x88);
  local_30 = (longlong *)(param_1 + 0x68);
  iVar8 = FUN_14752433e(local_48,param_2);
  if (iVar8 != -1) {
    puVar1 = (undefined4 *)(*local_30 + (longlong)iVar8 * 0x20);
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    puVar2 = (undefined8 *)(*local_30 + 0x10 + (longlong)iVar8 * 0x20);
    uVar7 = puVar2[1];
    *(undefined8 *)(param_3 + 4) = *puVar2;
    *(undefined8 *)(param_3 + 6) = uVar7;
    *param_3 = uVar3;
    param_3[1] = uVar4;
    param_3[2] = uVar5;
    param_3[3] = uVar6;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar8 != -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2ba62 FUN_148f2ba62 body=145 status=ok
// SIG undefined FUN_148f2ba62(void)

void FUN_148f2ba62(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_3;
  lVar2 = FUN_147526316();
  if (lVar2 != 0) {
    cVar1 = FUN_144729dda(&local_28);
    if (cVar1 != '\0') {
      FUN_14479d2ce(&local_28);
    }
    cVar1 = FUN_148f2bb08(lVar2,param_2,param_4);
    if (cVar1 != '\0') {
      if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
}



// FUNCTION 148f2bb08 FUN_148f2bb08 body=148 status=ok
// SIG undefined FUN_148f2bb08(void)

bool FUN_148f2bb08(longlong param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140861d3c(local_48,param_1,param_1 + 0x58,param_1 + 0x88);
  local_30 = (longlong *)(param_1 + 0x68);
  iVar9 = FUN_14752433e(local_48,param_2);
  if (iVar9 != -1) {
    lVar3 = *local_30;
    uVar4 = *param_3;
    uVar5 = param_3[1];
    uVar6 = param_3[2];
    uVar7 = param_3[3];
    uVar8 = *(undefined8 *)(param_3 + 6);
    puVar2 = (undefined8 *)(lVar3 + 0x10 + (longlong)iVar9 * 0x20);
    *puVar2 = *(undefined8 *)(param_3 + 4);
    puVar2[1] = uVar8;
    puVar1 = (undefined4 *)(lVar3 + (longlong)iVar9 * 0x20);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar9 != -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2bb9e FUN_148f2bb9e body=454 status=ok
// SIG undefined FUN_148f2bb9e(void)

void FUN_148f2bb9e(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,char param_6,float param_7)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  float fVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  int local_78;
  float local_74;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = param_4;
  local_68 = param_3;
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_a8);
  }
  if (0.99999994 <= param_7) {
    param_7 = 0.99999994;
  }
  if ((param_6 != '\x01') || (param_7 <= 0.0)) {
    if (param_6 == '\0') {
      uVar3 = FUN_14479d2ce(&local_68);
      FUN_148f42fe8(&local_80,uVar3);
      uVar3 = FUN_14479d2ce(&local_68);
      FUN_148f41546(&local_88,uVar3);
      fVar4 = (float)(-(uint)(0.0 < param_7) & (uint)(param_7 + 0.5 + -0.5));
      if (0.99999994 <= fVar4) {
        fVar4 = 0.99999994;
      }
      if (fVar4 <= 0.0) {
        fVar4 = 0.0;
      }
      FUN_144a808d5(&local_78,CONCAT44(fVar4,param_5),local_88,local_80);
      param_5 = (uint)(0.5 <= local_74) + local_78;
    }
  }
  else {
    FUN_1415b7ec4(L"SetTime called with a SubFrame specified for a Tick Resolution type time! SubFrames are only allowed for Display Rate types, ignoring..."
                  ,2,0);
  }
  lVar2 = FUN_147526316(param_1);
  if (lVar2 == 0) {
    FUN_1415b7ec4(L"Invalid ChannelHandle for MovieSceneScriptingKey, failed to set Time.",2,0);
  }
  else {
    cVar1 = FUN_144729dda(&local_70);
    if (cVar1 != '\0') {
      FUN_14479d2ce(&local_70);
    }
    FUN_147525d6e(lVar2,param_2,param_5);
  }
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2bd88 FUN_148f2bd88 body=420 status=ok
// SIG undefined FUN_148f2bd88(void)

longlong FUN_148f2bd88(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4,
                      undefined8 *param_5,char param_6,undefined1 param_7)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined8 local_68;
  undefined8 local_60;
  int local_58;
  float local_54;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_50 = param_3;
  local_48 = param_2;
  lVar4 = FUN_147526316();
  if (lVar4 == 0) {
    lVar6 = 0;
    FUN_1415b7ec4(L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to add key.",2,0);
  }
  else {
    uVar5 = FUN_1409ffe1d();
    lVar6 = FUN_148f2bf2d(uVar5);
    if (param_6 == '\0') {
      uVar5 = FUN_14479d2ce(&local_48);
      FUN_148f42fe8(&local_60,uVar5);
      uVar5 = FUN_14479d2ce(&local_48);
      FUN_148f41546(&local_68,uVar5);
      FUN_144a808d5(&local_58,param_4,local_68,local_60);
      param_4 = (uint)(0.5 <= local_54) + local_58;
    }
    cVar3 = FUN_144729dda(&local_50);
    if (cVar3 != '\0') {
      FUN_14479d2ce(&local_50);
    }
    local_78 = param_7;
    FUN_14752d487(&local_58,lVar4,param_4,*param_5);
    *(int *)(lVar6 + 0x28) = local_58;
    uVar5 = *param_1;
    lVar4 = param_1[1];
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
      UNLOCK();
    }
    plVar2 = *(longlong **)(lVar6 + 0x48);
    *(undefined8 *)(lVar6 + 0x40) = uVar5;
    *(longlong *)(lVar6 + 0x48) = lVar4;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    *(undefined4 *)(lVar6 + 0x58) = *(undefined4 *)(param_1 + 3);
    *(undefined8 *)(lVar6 + 0x50) = param_1[2];
    *(undefined8 *)(lVar6 + 0x34) = local_50;
    *(undefined8 *)(lVar6 + 0x2c) = local_48;
  }
  plVar2 = (longlong *)param_1[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2bf2d FUN_148f2bf2d body=148 status=ok
// SIG undefined FUN_148f2bf2d(void)

undefined8 FUN_148f2bf2d(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145999f90();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2bfc2 FUN_148f2bfc2 body=201 status=ok
// SIG undefined FUN_148f2bfc2(void)

byte * FUN_148f2bfc2(byte *param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [40];
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = *param_1 & 0xfc;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0x60;
  param_1[0xd] = 0xea;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 1;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  local_38 = param_3;
  plVar2 = (longlong *)FUN_147526316(param_2);
  if (plVar2 == (longlong *)0x0) {
    FUN_1415b7ec4(L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get effective range."
                  ,2,0);
  }
  else {
    uVar3 = FUN_14479d2ce(&local_38);
    FUN_148f42fe8(&local_40,uVar3);
    (**(code **)(*plVar2 + 0x40))(plVar2,local_50);
    FUN_148f2ab5a(param_1,local_50,local_40);
  }
  plVar2 = *(longlong **)(param_2 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2c08c FUN_148f2c08c body=592 status=ok
// SIG undefined FUN_148f2c08c(void)

longlong *
FUN_148f2c08c(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  wchar_t *pwVar8;
  int iVar9;
  undefined1 auVar10 [16];
  float fVar11;
  undefined1 auStack_e8 [32];
  undefined4 local_c8 [2];
  int local_c0;
  float local_bc;
  char local_b8 [4];
  int iStack_b4;
  char local_b0;
  undefined7 uStack_af;
  int iStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  int local_98;
  float local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *param_1 = 0;
  param_1[1] = 0;
  local_a0 = param_3;
  lVar6 = FUN_147526316(param_2);
  if (lVar6 == 0) {
    pwVar8 = L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to evaluate keys.";
  }
  else {
    uVar7 = FUN_14479d2ce(&local_a0);
    FUN_148f42fe8(&local_a8,uVar7);
    FUN_148f2ae38(param_4,local_b8,local_a8);
    if ((local_b8[0] != '\x02') && (local_b0 != '\x02')) {
      FUN_144a808d5(&local_c0,1,param_5,local_a8);
      iVar9 = iStack_b4 + *(int *)(&DAT_14a46e5f8 + (ulonglong)(local_b8[0] == '\0') * 4);
      iVar2 = *(int *)(&DAT_14a46e600 + (ulonglong)(local_b0 == '\x01') * 4);
      fVar11 = 0.0;
      while( true ) {
        uVar7 = local_a8;
        if ((iStack_ac + iVar2 <= iVar9) && ((iVar9 != iStack_ac + iVar2 || (0.0 <= fVar11))))
        break;
        FUN_144a808d5(&local_98,CONCAT44(fVar11,iVar9),local_a8,param_5);
        FUN_144a808d5(local_c8,(uint)(0.5 <= local_94) + local_98,param_5,uVar7);
        uVar5 = local_c8[0];
        iVar3 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
          FUN_144941252(param_1,iVar3);
        }
        *(undefined8 *)(*param_1 + (longlong)iVar3 * 8) = 0;
        FUN_140108b92(lVar6,uVar5);
        fVar11 = fVar11 + local_bc;
        iVar9 = iVar9 + local_c0 + ((int)ROUND(fVar11 + fVar11 + -0.5) >> 1);
        auVar10 = roundss(ZEXT816(0),ZEXT416((uint)fVar11),9);
        fVar11 = fVar11 - auVar10._0_4_;
      }
      goto LAB_148f2c0fc;
    }
    pwVar8 = L"Unbounded range passed to evaluate keys.";
  }
  FUN_1415b7ec4(pwVar8,2,0);
LAB_148f2c0fc:
  plVar4 = *(longlong **)(param_2 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  if ((local_90 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2c2de FUN_148f2c2de body=106 status=ok
// SIG undefined FUN_148f2c2de(void)

undefined8 * FUN_148f2c2de(undefined8 *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 uVar4;
  
  lVar3 = FUN_147526316(param_2);
  if (lVar3 == 0) {
    uVar4 = 0;
    FUN_1415b7ec4(L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get default value."
                  ,2,0);
  }
  else if (*(char *)(lVar3 + 0x80) == '\x01') {
    *param_1 = *(undefined8 *)(lVar3 + 0x78);
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  *(undefined1 *)(param_1 + 1) = uVar4;
  plVar2 = *(longlong **)(param_2 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  return param_1;
}



// FUNCTION 148f2c348 FUN_148f2c348 body=152 status=ok
// SIG undefined FUN_148f2c348(void)

void FUN_148f2c348(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  lVar3 = FUN_147526316();
  if (lVar3 == 0) {
    FUN_1415b7ec4(L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to remove default value."
                  ,2,0);
  }
  else {
    cVar2 = FUN_144729dda(&local_20);
    if (cVar2 != '\0') {
      FUN_14479d2ce(&local_20);
    }
    *(undefined1 *)(lVar3 + 0x80) = 0;
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
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



// FUNCTION 148f2c3f2 FUN_148f2c3f2 body=166 status=ok
// SIG undefined FUN_148f2c3f2(void)

void FUN_148f2c3f2(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  lVar4 = FUN_147526316();
  if (lVar4 == 0) {
    FUN_1415b7ec4(L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to set default value."
                  ,2,0);
  }
  else {
    cVar3 = FUN_144729dda(&local_28);
    if (cVar3 != '\0') {
      FUN_14479d2ce(&local_28);
    }
    uVar2 = *param_3;
    *(undefined1 *)(lVar4 + 0x80) = 1;
    *(undefined8 *)(lVar4 + 0x78) = uVar2;
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2c4aa FUN_148f2c4aa body=93 status=ok
// SIG undefined FUN_148f2c4aa(void)

undefined8 * FUN_148f2c4aa(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[4] = 0;
  lVar2 = FUN_147526316();
  if (lVar2 == 0) {
    pwVar3 = 
    L"Invalid ChannelHandle for MovieSceneScriptingKey, failed to get value. Did you forget to create the key through the channel?"
    ;
  }
  else {
    cVar1 = FUN_148f2c507(lVar2,param_3,param_2);
    if (cVar1 != '\0') {
      return param_2;
    }
    pwVar3 = 
    L"Invalid KeyIndex for MovieSceneScriptingKey, failed to get value. Did you forget to create the key through the channel?"
    ;
  }
  FUN_1415b7ec4(pwVar3,2,0);
  return param_2;
}



// FUNCTION 148f2c507 FUN_148f2c507 body=145 status=ok
// SIG undefined FUN_148f2c507(void)

bool FUN_148f2c507(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x70);
  local_30 = (longlong *)(param_1 + 0x60);
  iVar1 = FUN_14752433e(local_48,param_2);
  if (iVar1 != -1) {
    FUN_1475ae880(param_3,(longlong)iVar1 * 0x28 + *local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar1 != -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2c59a FUN_148f2c59a body=454 status=ok
// SIG undefined FUN_148f2c59a(void)

void FUN_148f2c59a(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,char param_6,float param_7)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  float fVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  int local_78;
  float local_74;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = param_4;
  local_68 = param_3;
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_a8);
  }
  if (0.99999994 <= param_7) {
    param_7 = 0.99999994;
  }
  if ((param_6 != '\x01') || (param_7 <= 0.0)) {
    if (param_6 == '\0') {
      uVar3 = FUN_14479d2ce(&local_68);
      FUN_148f42fe8(&local_80,uVar3);
      uVar3 = FUN_14479d2ce(&local_68);
      FUN_148f41546(&local_88,uVar3);
      fVar4 = (float)(-(uint)(0.0 < param_7) & (uint)(param_7 + 0.5 + -0.5));
      if (0.99999994 <= fVar4) {
        fVar4 = 0.99999994;
      }
      if (fVar4 <= 0.0) {
        fVar4 = 0.0;
      }
      FUN_144a808d5(&local_78,CONCAT44(fVar4,param_5),local_88,local_80);
      param_5 = (uint)(0.5 <= local_74) + local_78;
    }
  }
  else {
    FUN_1415b7ec4(L"SetTime called with a SubFrame specified for a Tick Resolution type time! SubFrames are only allowed for Display Rate types, ignoring..."
                  ,2,0);
  }
  lVar2 = FUN_147526316(param_1);
  if (lVar2 == 0) {
    FUN_1415b7ec4(L"Invalid ChannelHandle for MovieSceneScriptingKey, failed to set Time.",2,0);
  }
  else {
    cVar1 = FUN_144729dda(&local_70);
    if (cVar1 != '\0') {
      FUN_14479d2ce(&local_70);
    }
    FUN_147525d6e(lVar2,param_2,param_5);
  }
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2c784 FUN_148f2c784 body=167 status=ok
// SIG undefined FUN_148f2c784(void)

void FUN_148f2c784(undefined8 param_1,undefined4 param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_3;
  lVar2 = FUN_147526316();
  if (lVar2 == 0) {
    pwVar3 = 
    L"Invalid ChannelHandle for MovieSceneScriptingKey, failed to set value. Did you forget to create the key through the channel?"
    ;
  }
  else {
    cVar1 = FUN_144729dda(&local_28);
    if (cVar1 != '\0') {
      FUN_14479d2ce(&local_28);
    }
    cVar1 = FUN_148f2c83b(lVar2,param_2,param_4);
    if (cVar1 != '\0') goto LAB_148f2c7bf;
    pwVar3 = 
    L"Invalid KeyIndex for MovieSceneScriptingKey, failed to set value. Did you forget to create the key through the channel?"
    ;
  }
  FUN_1415b7ec4(pwVar3,2,0);
LAB_148f2c7bf:
  if (*(longlong *)(param_4 + 0x18) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2c83b FUN_148f2c83b body=145 status=ok
// SIG undefined FUN_148f2c83b(void)

bool FUN_148f2c83b(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x70);
  local_30 = (longlong *)(param_1 + 0x60);
  iVar1 = FUN_14752433e(local_48,param_2);
  if (iVar1 != -1) {
    FUN_1475ae880((longlong)iVar1 * 0x28 + *local_30,param_3);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar1 != -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2c8ce FUN_148f2c8ce body=406 status=ok
// SIG undefined FUN_148f2c8ce(void)

longlong FUN_148f2c8ce(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4,
                      undefined8 param_5,char param_6)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  int local_58;
  float local_54;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = param_3;
  local_48 = param_2;
  lVar4 = FUN_147526316();
  if (lVar4 == 0) {
    lVar6 = 0;
    FUN_1415b7ec4(L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to add key.",2,0);
  }
  else {
    uVar5 = FUN_1409ffe1d();
    lVar6 = FUN_148f2ca65(uVar5);
    if (param_6 == '\0') {
      uVar5 = FUN_14479d2ce(&local_48);
      FUN_148f42fe8(&local_60,uVar5);
      uVar5 = FUN_14479d2ce(&local_48);
      FUN_148f41546(&local_68,uVar5);
      FUN_144a808d5(&local_58,param_4,local_68,local_60);
      param_4 = (uint)(0.5 <= local_54) + local_58;
    }
    cVar3 = FUN_144729dda(&local_50);
    if (cVar3 != '\0') {
      FUN_14479d2ce(&local_50);
    }
    FUN_148f2cafa(&local_58,lVar4,param_4,param_5);
    *(int *)(lVar6 + 0x28) = local_58;
    uVar5 = *param_1;
    lVar4 = param_1[1];
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
      UNLOCK();
    }
    plVar2 = *(longlong **)(lVar6 + 0x48);
    *(undefined8 *)(lVar6 + 0x40) = uVar5;
    *(longlong *)(lVar6 + 0x48) = lVar4;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    *(undefined4 *)(lVar6 + 0x58) = *(undefined4 *)(param_1 + 3);
    *(undefined8 *)(lVar6 + 0x50) = param_1[2];
    *(undefined8 *)(lVar6 + 0x34) = local_50;
    *(undefined8 *)(lVar6 + 0x2c) = local_48;
  }
  plVar2 = (longlong *)param_1[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2ca65 FUN_148f2ca65 body=148 status=ok
// SIG undefined FUN_148f2ca65(void)

undefined8 FUN_148f2ca65(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_14599a07c();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2cafa FUN_148f2cafa body=216 status=ok
// SIG undefined FUN_148f2cafa(void)

undefined4 *
FUN_148f2cafa(undefined4 *param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140861d3c(local_58,param_2,param_2 + 0x50,param_2 + 0x70);
  local_40 = param_2 + 0x60;
  iVar1 = FUN_147525ee8(local_58,param_3,0);
  FUN_147a3fc60(param_1);
  if (iVar1 == -1) {
    uVar2 = FUN_1475b2436(local_58,param_3,param_4);
    FUN_147524308(local_58,&local_5c,uVar2);
    *param_1 = local_5c;
  }
  else {
    FUN_147524308(local_58,&local_5c,iVar1);
    *param_1 = local_5c;
    FUN_148f2c83b(param_2,local_5c,param_4);
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2cbd4 FUN_148f2cbd4 body=248 status=ok
// SIG undefined FUN_148f2cbd4(void)

undefined8 *
FUN_148f2cbd4(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             char param_5)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = param_4;
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    pwVar4 = L"GetTime called with an invalid owning sequence.";
  }
  else {
    lVar2 = FUN_147526316(param_1);
    if (lVar2 != 0) {
      local_2c = 0;
      FUN_147525d0e(lVar2,param_3);
      if (param_5 == '\0') {
        uVar3 = FUN_14479d2ce(&local_28);
        FUN_148f41546(&local_38,uVar3);
        uVar3 = FUN_14479d2ce(&local_28);
        FUN_148f42fe8(&local_40,uVar3);
        FUN_144a808d5(param_2,local_2c,local_40,local_38);
      }
      else {
        *(undefined4 *)param_2 = local_2c;
        *(undefined4 *)((longlong)param_2 + 4) = 0;
      }
      goto LAB_148f2cc59;
    }
    pwVar4 = L"Invalid ChannelHandle for MovieSceneScriptingKey, failed to retrieve Time.";
  }
  FUN_1415b7ec4(pwVar4,2,0);
  *param_2 = 0;
LAB_148f2cc59:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2ccce FUN_148f2ccce body=408 status=ok
// SIG undefined FUN_148f2ccce(void)

longlong *
FUN_148f2ccce(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [4];
  undefined4 local_94;
  undefined1 local_90;
  undefined4 local_8c;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = 0;
  param_1[1] = 0;
  plVar4 = (longlong *)FUN_147526316(param_2);
  if (plVar4 == (longlong *)0x0) {
    FUN_1415b7ec4(L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get keys.",2,0);
  }
  else {
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98[0] = 2;
    local_94 = 0;
    local_90 = 2;
    local_8c = 0;
    (**(code **)(*plVar4 + 8))(plVar4,local_98,&local_78);
    if (0 < (int)uStack_70) {
      lVar7 = 0;
      do {
        uVar5 = FUN_1409ffe1d();
        lVar6 = FUN_148f2a1e3(uVar5);
        *(undefined4 *)(lVar6 + 0x28) = *(undefined4 *)(local_88 + lVar7 * 4);
        uVar5 = *param_2;
        lVar3 = param_2[1];
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
          UNLOCK();
        }
        plVar4 = *(longlong **)(lVar6 + 0x48);
        *(undefined8 *)(lVar6 + 0x40) = uVar5;
        *(longlong *)(lVar6 + 0x48) = lVar3;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))();
          }
        }
        *(undefined4 *)(lVar6 + 0x58) = *(undefined4 *)(param_2 + 3);
        *(undefined8 *)(lVar6 + 0x50) = param_2[2];
        *(undefined8 *)(lVar6 + 0x2c) = param_3;
        *(undefined8 *)(lVar6 + 0x34) = param_4;
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_148f2ce68(param_1,iVar2);
        }
        *(longlong *)(*param_1 + (longlong)iVar2 * 8) = lVar6;
        lVar7 = lVar7 + 1;
      } while (lVar7 < (int)uStack_70);
    }
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148f2ce68 FUN_148f2ce68 body=132 status=ok
// SIG undefined FUN_148f2ce68(void)

void FUN_148f2ce68(longlong param_1,int param_2)

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



// FUNCTION 148f2ceee FUN_148f2ceee body=512 status=ok
// SIG undefined FUN_148f2ceee(void)

longlong *
FUN_148f2ceee(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_d8 [40];
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined4 local_94;
  undefined1 local_90;
  undefined4 local_8c;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_1 = 0;
  param_1[1] = 0;
  local_a8 = param_3;
  local_a0 = param_4;
  plVar6 = (longlong *)FUN_147526316(param_2);
  if (plVar6 == (longlong *)0x0) {
    FUN_1415b7ec4(L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get keys.",2,0);
  }
  else {
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 2;
    local_94 = 0;
    local_90 = 2;
    local_8c = 0;
    (**(code **)(*plVar6 + 8))(plVar6);
    lVar5 = param_5[1];
    if ((longlong)(int)lVar5 != 0) {
      lVar3 = *param_5;
      local_b0 = param_2 + 2;
      lVar9 = 0;
      do {
        iVar2 = *(int *)(lVar3 + lVar9);
        if (((longlong)iVar2 < 0) || ((int)uStack_70 <= iVar2)) {
          FUN_1415b7ec4(L"Invalid index for MovieSceneScriptingChannel, failed to get keys by index."
                        ,2,0);
        }
        else {
          uVar7 = FUN_1409ffe1d();
          lVar8 = FUN_148f2a1e3(uVar7);
          *(undefined4 *)(lVar8 + 0x28) = *(undefined4 *)(local_88 + (longlong)iVar2 * 4);
          uVar7 = *param_2;
          lVar4 = param_2[1];
          if (lVar4 != 0) {
            LOCK();
            *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
            UNLOCK();
          }
          plVar6 = *(longlong **)(lVar8 + 0x48);
          *(undefined8 *)(lVar8 + 0x40) = uVar7;
          *(longlong *)(lVar8 + 0x48) = lVar4;
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar6 + 0x10))();
            }
          }
          *(undefined4 *)(lVar8 + 0x58) = *(undefined4 *)(local_b0 + 1);
          *(undefined8 *)(lVar8 + 0x50) = *local_b0;
          *(undefined8 *)(lVar8 + 0x2c) = local_a8;
          *(undefined8 *)(lVar8 + 0x34) = local_a0;
          iVar2 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
            FUN_148f2ce68(param_1,iVar2);
          }
          *(longlong *)(*param_1 + (longlong)iVar2 * 8) = lVar8;
        }
        lVar9 = lVar9 + 4;
      } while ((longlong)(int)lVar5 * 4 != lVar9);
    }
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  plVar6 = (longlong *)param_2[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148f2d0f0 FUN_148f2d0f0 body=175 status=ok
// SIG undefined FUN_148f2d0f0(void)

void FUN_148f2d0f0(longlong param_1,longlong param_2)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    plVar3 = (longlong *)FUN_147526316(param_1);
    if (plVar3 == (longlong *)0x0) {
      FUN_1415b7ec4(L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to remove key.",2
                    ,0);
    }
    else {
      cVar2 = FUN_144729dda(param_2 + 0x34);
      if (cVar2 != '\0') {
        FUN_14479d2ce(param_2 + 0x34);
      }
      local_38 = param_2 + 0x28;
      local_30 = 1;
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
  }
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2d1a0 FUN_148f2d1a0 body=248 status=ok
// SIG undefined FUN_148f2d1a0(void)

undefined8 *
FUN_148f2d1a0(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             char param_5)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = param_4;
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    pwVar4 = L"GetTime called with an invalid owning sequence.";
  }
  else {
    lVar2 = FUN_147526316(param_1);
    if (lVar2 != 0) {
      local_2c = 0;
      FUN_147525d0e(lVar2,param_3);
      if (param_5 == '\0') {
        uVar3 = FUN_14479d2ce(&local_28);
        FUN_148f41546(&local_38,uVar3);
        uVar3 = FUN_14479d2ce(&local_28);
        FUN_148f42fe8(&local_40,uVar3);
        FUN_144a808d5(param_2,local_2c,local_40,local_38);
      }
      else {
        *(undefined4 *)param_2 = local_2c;
        *(undefined4 *)((longlong)param_2 + 4) = 0;
      }
      goto LAB_148f2d225;
    }
    pwVar4 = L"Invalid ChannelHandle for MovieSceneScriptingKey, failed to retrieve Time.";
  }
  FUN_1415b7ec4(pwVar4,2,0);
  *param_2 = 0;
LAB_148f2d225:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2d29a FUN_148f2d29a body=408 status=ok
// SIG undefined FUN_148f2d29a(void)

longlong *
FUN_148f2d29a(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [4];
  undefined4 local_94;
  undefined1 local_90;
  undefined4 local_8c;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = 0;
  param_1[1] = 0;
  plVar4 = (longlong *)FUN_147526316(param_2);
  if (plVar4 == (longlong *)0x0) {
    FUN_1415b7ec4(L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get keys.",2,0);
  }
  else {
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98[0] = 2;
    local_94 = 0;
    local_90 = 2;
    local_8c = 0;
    (**(code **)(*plVar4 + 8))(plVar4,local_98,&local_78);
    if (0 < (int)uStack_70) {
      lVar7 = 0;
      do {
        uVar5 = FUN_1409ffe1d();
        lVar6 = FUN_148f2a903(uVar5);
        *(undefined4 *)(lVar6 + 0x28) = *(undefined4 *)(local_88 + lVar7 * 4);
        uVar5 = *param_2;
        lVar3 = param_2[1];
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
          UNLOCK();
        }
        plVar4 = *(longlong **)(lVar6 + 0x48);
        *(undefined8 *)(lVar6 + 0x40) = uVar5;
        *(longlong *)(lVar6 + 0x48) = lVar3;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))();
          }
        }
        *(undefined4 *)(lVar6 + 0x58) = *(undefined4 *)(param_2 + 3);
        *(undefined8 *)(lVar6 + 0x50) = param_2[2];
        *(undefined8 *)(lVar6 + 0x2c) = param_3;
        *(undefined8 *)(lVar6 + 0x34) = param_4;
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_148f2ce68(param_1,iVar2);
        }
        *(longlong *)(*param_1 + (longlong)iVar2 * 8) = lVar6;
        lVar7 = lVar7 + 1;
      } while (lVar7 < (int)uStack_70);
    }
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148f2d434 FUN_148f2d434 body=512 status=ok
// SIG undefined FUN_148f2d434(void)

longlong *
FUN_148f2d434(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_d8 [40];
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined4 local_94;
  undefined1 local_90;
  undefined4 local_8c;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_1 = 0;
  param_1[1] = 0;
  local_a8 = param_3;
  local_a0 = param_4;
  plVar6 = (longlong *)FUN_147526316(param_2);
  if (plVar6 == (longlong *)0x0) {
    FUN_1415b7ec4(L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get keys.",2,0);
  }
  else {
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 2;
    local_94 = 0;
    local_90 = 2;
    local_8c = 0;
    (**(code **)(*plVar6 + 8))(plVar6);
    lVar5 = param_5[1];
    if ((longlong)(int)lVar5 != 0) {
      lVar3 = *param_5;
      local_b0 = param_2 + 2;
      lVar9 = 0;
      do {
        iVar2 = *(int *)(lVar3 + lVar9);
        if (((longlong)iVar2 < 0) || ((int)uStack_70 <= iVar2)) {
          FUN_1415b7ec4(L"Invalid index for MovieSceneScriptingChannel, failed to get keys by index."
                        ,2,0);
        }
        else {
          uVar7 = FUN_1409ffe1d();
          lVar8 = FUN_148f2a903(uVar7);
          *(undefined4 *)(lVar8 + 0x28) = *(undefined4 *)(local_88 + (longlong)iVar2 * 4);
          uVar7 = *param_2;
          lVar4 = param_2[1];
          if (lVar4 != 0) {
            LOCK();
            *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
            UNLOCK();
          }
          plVar6 = *(longlong **)(lVar8 + 0x48);
          *(undefined8 *)(lVar8 + 0x40) = uVar7;
          *(longlong *)(lVar8 + 0x48) = lVar4;
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar6 + 0x10))();
            }
          }
          *(undefined4 *)(lVar8 + 0x58) = *(undefined4 *)(local_b0 + 1);
          *(undefined8 *)(lVar8 + 0x50) = *local_b0;
          *(undefined8 *)(lVar8 + 0x2c) = local_a8;
          *(undefined8 *)(lVar8 + 0x34) = local_a0;
          iVar2 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
            FUN_148f2ce68(param_1,iVar2);
          }
          *(longlong *)(*param_1 + (longlong)iVar2 * 8) = lVar8;
        }
        lVar9 = lVar9 + 4;
      } while ((longlong)(int)lVar5 * 4 != lVar9);
    }
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  plVar6 = (longlong *)param_2[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148f2d636 FUN_148f2d636 body=175 status=ok
// SIG undefined FUN_148f2d636(void)

void FUN_148f2d636(longlong param_1,longlong param_2)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    plVar3 = (longlong *)FUN_147526316(param_1);
    if (plVar3 == (longlong *)0x0) {
      FUN_1415b7ec4(L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to remove key.",2
                    ,0);
    }
    else {
      cVar2 = FUN_144729dda(param_2 + 0x34);
      if (cVar2 != '\0') {
        FUN_14479d2ce(param_2 + 0x34);
      }
      local_38 = param_2 + 0x28;
      local_30 = 1;
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
  }
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2d6e6 FUN_148f2d6e6 body=248 status=ok
// SIG undefined FUN_148f2d6e6(void)

undefined8 *
FUN_148f2d6e6(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             char param_5)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = param_4;
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    pwVar4 = L"GetTime called with an invalid owning sequence.";
  }
  else {
    lVar2 = FUN_147526316(param_1);
    if (lVar2 != 0) {
      local_2c = 0;
      FUN_147525d0e(lVar2,param_3);
      if (param_5 == '\0') {
        uVar3 = FUN_14479d2ce(&local_28);
        FUN_148f41546(&local_38,uVar3);
        uVar3 = FUN_14479d2ce(&local_28);
        FUN_148f42fe8(&local_40,uVar3);
        FUN_144a808d5(param_2,local_2c,local_40,local_38);
      }
      else {
        *(undefined4 *)param_2 = local_2c;
        *(undefined4 *)((longlong)param_2 + 4) = 0;
      }
      goto LAB_148f2d76b;
    }
    pwVar4 = L"Invalid ChannelHandle for MovieSceneScriptingKey, failed to retrieve Time.";
  }
  FUN_1415b7ec4(pwVar4,2,0);
  *param_2 = 0;
LAB_148f2d76b:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2d7e0 FUN_148f2d7e0 body=408 status=ok
// SIG undefined FUN_148f2d7e0(void)

longlong *
FUN_148f2d7e0(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [4];
  undefined4 local_94;
  undefined1 local_90;
  undefined4 local_8c;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = 0;
  param_1[1] = 0;
  plVar4 = (longlong *)FUN_147526316(param_2);
  if (plVar4 == (longlong *)0x0) {
    FUN_1415b7ec4(L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get keys.",2,0);
  }
  else {
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98[0] = 2;
    local_94 = 0;
    local_90 = 2;
    local_8c = 0;
    (**(code **)(*plVar4 + 8))(plVar4,local_98,&local_78);
    if (0 < (int)uStack_70) {
      lVar7 = 0;
      do {
        uVar5 = FUN_1409ffe1d();
        lVar6 = FUN_148f2b643(uVar5);
        *(undefined4 *)(lVar6 + 0x28) = *(undefined4 *)(local_88 + lVar7 * 4);
        uVar5 = *param_2;
        lVar3 = param_2[1];
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
          UNLOCK();
        }
        plVar4 = *(longlong **)(lVar6 + 0x48);
        *(undefined8 *)(lVar6 + 0x40) = uVar5;
        *(longlong *)(lVar6 + 0x48) = lVar3;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))();
          }
        }
        *(undefined4 *)(lVar6 + 0x58) = *(undefined4 *)(param_2 + 3);
        *(undefined8 *)(lVar6 + 0x50) = param_2[2];
        *(undefined8 *)(lVar6 + 0x2c) = param_3;
        *(undefined8 *)(lVar6 + 0x34) = param_4;
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_148f2ce68(param_1,iVar2);
        }
        *(longlong *)(*param_1 + (longlong)iVar2 * 8) = lVar6;
        lVar7 = lVar7 + 1;
      } while (lVar7 < (int)uStack_70);
    }
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148f2d97a FUN_148f2d97a body=512 status=ok
// SIG undefined FUN_148f2d97a(void)

longlong *
FUN_148f2d97a(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_d8 [40];
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined4 local_94;
  undefined1 local_90;
  undefined4 local_8c;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_1 = 0;
  param_1[1] = 0;
  local_a8 = param_3;
  local_a0 = param_4;
  plVar6 = (longlong *)FUN_147526316(param_2);
  if (plVar6 == (longlong *)0x0) {
    FUN_1415b7ec4(L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get keys.",2,0);
  }
  else {
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 2;
    local_94 = 0;
    local_90 = 2;
    local_8c = 0;
    (**(code **)(*plVar6 + 8))(plVar6);
    lVar5 = param_5[1];
    if ((longlong)(int)lVar5 != 0) {
      lVar3 = *param_5;
      local_b0 = param_2 + 2;
      lVar9 = 0;
      do {
        iVar2 = *(int *)(lVar3 + lVar9);
        if (((longlong)iVar2 < 0) || ((int)uStack_70 <= iVar2)) {
          FUN_1415b7ec4(L"Invalid index for MovieSceneScriptingChannel, failed to get keys by index."
                        ,2,0);
        }
        else {
          uVar7 = FUN_1409ffe1d();
          lVar8 = FUN_148f2b643(uVar7);
          *(undefined4 *)(lVar8 + 0x28) = *(undefined4 *)(local_88 + (longlong)iVar2 * 4);
          uVar7 = *param_2;
          lVar4 = param_2[1];
          if (lVar4 != 0) {
            LOCK();
            *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
            UNLOCK();
          }
          plVar6 = *(longlong **)(lVar8 + 0x48);
          *(undefined8 *)(lVar8 + 0x40) = uVar7;
          *(longlong *)(lVar8 + 0x48) = lVar4;
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar6 + 0x10))();
            }
          }
          *(undefined4 *)(lVar8 + 0x58) = *(undefined4 *)(local_b0 + 1);
          *(undefined8 *)(lVar8 + 0x50) = *local_b0;
          *(undefined8 *)(lVar8 + 0x2c) = local_a8;
          *(undefined8 *)(lVar8 + 0x34) = local_a0;
          iVar2 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
            FUN_148f2ce68(param_1,iVar2);
          }
          *(longlong *)(*param_1 + (longlong)iVar2 * 8) = lVar8;
        }
        lVar9 = lVar9 + 4;
      } while ((longlong)(int)lVar5 * 4 != lVar9);
    }
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  plVar6 = (longlong *)param_2[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148f2db7c FUN_148f2db7c body=175 status=ok
// SIG undefined FUN_148f2db7c(void)

void FUN_148f2db7c(longlong param_1,longlong param_2)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    plVar3 = (longlong *)FUN_147526316(param_1);
    if (plVar3 == (longlong *)0x0) {
      FUN_1415b7ec4(L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to remove key.",2
                    ,0);
    }
    else {
      cVar2 = FUN_144729dda(param_2 + 0x34);
      if (cVar2 != '\0') {
        FUN_14479d2ce(param_2 + 0x34);
      }
      local_38 = param_2 + 0x28;
      local_30 = 1;
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
  }
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2dc2c FUN_148f2dc2c body=248 status=ok
// SIG undefined FUN_148f2dc2c(void)

undefined8 *
FUN_148f2dc2c(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             char param_5)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = param_4;
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    pwVar4 = L"GetTime called with an invalid owning sequence.";
  }
  else {
    lVar2 = FUN_147526316(param_1);
    if (lVar2 != 0) {
      local_2c = 0;
      FUN_147525d0e(lVar2,param_3);
      if (param_5 == '\0') {
        uVar3 = FUN_14479d2ce(&local_28);
        FUN_148f41546(&local_38,uVar3);
        uVar3 = FUN_14479d2ce(&local_28);
        FUN_148f42fe8(&local_40,uVar3);
        FUN_144a808d5(param_2,local_2c,local_40,local_38);
      }
      else {
        *(undefined4 *)param_2 = local_2c;
        *(undefined4 *)((longlong)param_2 + 4) = 0;
      }
      goto LAB_148f2dcb1;
    }
    pwVar4 = L"Invalid ChannelHandle for MovieSceneScriptingKey, failed to retrieve Time.";
  }
  FUN_1415b7ec4(pwVar4,2,0);
  *param_2 = 0;
LAB_148f2dcb1:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2dd26 FUN_148f2dd26 body=408 status=ok
// SIG undefined FUN_148f2dd26(void)

longlong *
FUN_148f2dd26(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [4];
  undefined4 local_94;
  undefined1 local_90;
  undefined4 local_8c;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = 0;
  param_1[1] = 0;
  plVar4 = (longlong *)FUN_147526316(param_2);
  if (plVar4 == (longlong *)0x0) {
    FUN_1415b7ec4(L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get keys.",2,0);
  }
  else {
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98[0] = 2;
    local_94 = 0;
    local_90 = 2;
    local_8c = 0;
    (**(code **)(*plVar4 + 8))(plVar4,local_98,&local_78);
    if (0 < (int)uStack_70) {
      lVar7 = 0;
      do {
        uVar5 = FUN_1409ffe1d();
        lVar6 = FUN_148f2bf2d(uVar5);
        *(undefined4 *)(lVar6 + 0x28) = *(undefined4 *)(local_88 + lVar7 * 4);
        uVar5 = *param_2;
        lVar3 = param_2[1];
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
          UNLOCK();
        }
        plVar4 = *(longlong **)(lVar6 + 0x48);
        *(undefined8 *)(lVar6 + 0x40) = uVar5;
        *(longlong *)(lVar6 + 0x48) = lVar3;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))();
          }
        }
        *(undefined4 *)(lVar6 + 0x58) = *(undefined4 *)(param_2 + 3);
        *(undefined8 *)(lVar6 + 0x50) = param_2[2];
        *(undefined8 *)(lVar6 + 0x2c) = param_3;
        *(undefined8 *)(lVar6 + 0x34) = param_4;
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_148f2ce68(param_1,iVar2);
        }
        *(longlong *)(*param_1 + (longlong)iVar2 * 8) = lVar6;
        lVar7 = lVar7 + 1;
      } while (lVar7 < (int)uStack_70);
    }
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148f2dec0 FUN_148f2dec0 body=512 status=ok
// SIG undefined FUN_148f2dec0(void)

longlong *
FUN_148f2dec0(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_d8 [40];
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined4 local_94;
  undefined1 local_90;
  undefined4 local_8c;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_1 = 0;
  param_1[1] = 0;
  local_a8 = param_3;
  local_a0 = param_4;
  plVar6 = (longlong *)FUN_147526316(param_2);
  if (plVar6 == (longlong *)0x0) {
    FUN_1415b7ec4(L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get keys.",2,0);
  }
  else {
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 2;
    local_94 = 0;
    local_90 = 2;
    local_8c = 0;
    (**(code **)(*plVar6 + 8))(plVar6);
    lVar5 = param_5[1];
    if ((longlong)(int)lVar5 != 0) {
      lVar3 = *param_5;
      local_b0 = param_2 + 2;
      lVar9 = 0;
      do {
        iVar2 = *(int *)(lVar3 + lVar9);
        if (((longlong)iVar2 < 0) || ((int)uStack_70 <= iVar2)) {
          FUN_1415b7ec4(L"Invalid index for MovieSceneScriptingChannel, failed to get keys by index."
                        ,2,0);
        }
        else {
          uVar7 = FUN_1409ffe1d();
          lVar8 = FUN_148f2bf2d(uVar7);
          *(undefined4 *)(lVar8 + 0x28) = *(undefined4 *)(local_88 + (longlong)iVar2 * 4);
          uVar7 = *param_2;
          lVar4 = param_2[1];
          if (lVar4 != 0) {
            LOCK();
            *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
            UNLOCK();
          }
          plVar6 = *(longlong **)(lVar8 + 0x48);
          *(undefined8 *)(lVar8 + 0x40) = uVar7;
          *(longlong *)(lVar8 + 0x48) = lVar4;
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar6 + 0x10))();
            }
          }
          *(undefined4 *)(lVar8 + 0x58) = *(undefined4 *)(local_b0 + 1);
          *(undefined8 *)(lVar8 + 0x50) = *local_b0;
          *(undefined8 *)(lVar8 + 0x2c) = local_a8;
          *(undefined8 *)(lVar8 + 0x34) = local_a0;
          iVar2 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
            FUN_148f2ce68(param_1,iVar2);
          }
          *(longlong *)(*param_1 + (longlong)iVar2 * 8) = lVar8;
        }
        lVar9 = lVar9 + 4;
      } while ((longlong)(int)lVar5 * 4 != lVar9);
    }
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  plVar6 = (longlong *)param_2[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148f2e0c2 FUN_148f2e0c2 body=175 status=ok
// SIG undefined FUN_148f2e0c2(void)

void FUN_148f2e0c2(longlong param_1,longlong param_2)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    plVar3 = (longlong *)FUN_147526316(param_1);
    if (plVar3 == (longlong *)0x0) {
      FUN_1415b7ec4(L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to remove key.",2
                    ,0);
    }
    else {
      cVar2 = FUN_144729dda(param_2 + 0x34);
      if (cVar2 != '\0') {
        FUN_14479d2ce(param_2 + 0x34);
      }
      local_38 = param_2 + 0x28;
      local_30 = 1;
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
  }
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2e172 FUN_148f2e172 body=248 status=ok
// SIG undefined FUN_148f2e172(void)

undefined8 *
FUN_148f2e172(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             char param_5)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = param_4;
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    pwVar4 = L"GetTime called with an invalid owning sequence.";
  }
  else {
    lVar2 = FUN_147526316(param_1);
    if (lVar2 != 0) {
      local_2c = 0;
      FUN_147525d0e(lVar2,param_3);
      if (param_5 == '\0') {
        uVar3 = FUN_14479d2ce(&local_28);
        FUN_148f41546(&local_38,uVar3);
        uVar3 = FUN_14479d2ce(&local_28);
        FUN_148f42fe8(&local_40,uVar3);
        FUN_144a808d5(param_2,local_2c,local_40,local_38);
      }
      else {
        *(undefined4 *)param_2 = local_2c;
        *(undefined4 *)((longlong)param_2 + 4) = 0;
      }
      goto LAB_148f2e1f7;
    }
    pwVar4 = L"Invalid ChannelHandle for MovieSceneScriptingKey, failed to retrieve Time.";
  }
  FUN_1415b7ec4(pwVar4,2,0);
  *param_2 = 0;
LAB_148f2e1f7:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2e26c FUN_148f2e26c body=408 status=ok
// SIG undefined FUN_148f2e26c(void)

longlong *
FUN_148f2e26c(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [4];
  undefined4 local_94;
  undefined1 local_90;
  undefined4 local_8c;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = 0;
  param_1[1] = 0;
  plVar4 = (longlong *)FUN_147526316(param_2);
  if (plVar4 == (longlong *)0x0) {
    FUN_1415b7ec4(L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get keys.",2,0);
  }
  else {
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98[0] = 2;
    local_94 = 0;
    local_90 = 2;
    local_8c = 0;
    (**(code **)(*plVar4 + 8))(plVar4,local_98,&local_78);
    if (0 < (int)uStack_70) {
      lVar7 = 0;
      do {
        uVar5 = FUN_1409ffe1d();
        lVar6 = FUN_148f2ca65(uVar5);
        *(undefined4 *)(lVar6 + 0x28) = *(undefined4 *)(local_88 + lVar7 * 4);
        uVar5 = *param_2;
        lVar3 = param_2[1];
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
          UNLOCK();
        }
        plVar4 = *(longlong **)(lVar6 + 0x48);
        *(undefined8 *)(lVar6 + 0x40) = uVar5;
        *(longlong *)(lVar6 + 0x48) = lVar3;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))();
          }
        }
        *(undefined4 *)(lVar6 + 0x58) = *(undefined4 *)(param_2 + 3);
        *(undefined8 *)(lVar6 + 0x50) = param_2[2];
        *(undefined8 *)(lVar6 + 0x2c) = param_3;
        *(undefined8 *)(lVar6 + 0x34) = param_4;
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_148f2ce68(param_1,iVar2);
        }
        *(longlong *)(*param_1 + (longlong)iVar2 * 8) = lVar6;
        lVar7 = lVar7 + 1;
      } while (lVar7 < (int)uStack_70);
    }
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148f2e406 FUN_148f2e406 body=512 status=ok
// SIG undefined FUN_148f2e406(void)

longlong *
FUN_148f2e406(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_d8 [40];
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined4 local_94;
  undefined1 local_90;
  undefined4 local_8c;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_1 = 0;
  param_1[1] = 0;
  local_a8 = param_3;
  local_a0 = param_4;
  plVar6 = (longlong *)FUN_147526316(param_2);
  if (plVar6 == (longlong *)0x0) {
    FUN_1415b7ec4(L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get keys.",2,0);
  }
  else {
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 2;
    local_94 = 0;
    local_90 = 2;
    local_8c = 0;
    (**(code **)(*plVar6 + 8))(plVar6);
    lVar5 = param_5[1];
    if ((longlong)(int)lVar5 != 0) {
      lVar3 = *param_5;
      local_b0 = param_2 + 2;
      lVar9 = 0;
      do {
        iVar2 = *(int *)(lVar3 + lVar9);
        if (((longlong)iVar2 < 0) || ((int)uStack_70 <= iVar2)) {
          FUN_1415b7ec4(L"Invalid index for MovieSceneScriptingChannel, failed to get keys by index."
                        ,2,0);
        }
        else {
          uVar7 = FUN_1409ffe1d();
          lVar8 = FUN_148f2ca65(uVar7);
          *(undefined4 *)(lVar8 + 0x28) = *(undefined4 *)(local_88 + (longlong)iVar2 * 4);
          uVar7 = *param_2;
          lVar4 = param_2[1];
          if (lVar4 != 0) {
            LOCK();
            *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
            UNLOCK();
          }
          plVar6 = *(longlong **)(lVar8 + 0x48);
          *(undefined8 *)(lVar8 + 0x40) = uVar7;
          *(longlong *)(lVar8 + 0x48) = lVar4;
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar6 + 0x10))();
            }
          }
          *(undefined4 *)(lVar8 + 0x58) = *(undefined4 *)(local_b0 + 1);
          *(undefined8 *)(lVar8 + 0x50) = *local_b0;
          *(undefined8 *)(lVar8 + 0x2c) = local_a8;
          *(undefined8 *)(lVar8 + 0x34) = local_a0;
          iVar2 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
            FUN_148f2ce68(param_1,iVar2);
          }
          *(longlong *)(*param_1 + (longlong)iVar2 * 8) = lVar8;
        }
        lVar9 = lVar9 + 4;
      } while ((longlong)(int)lVar5 * 4 != lVar9);
    }
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  plVar6 = (longlong *)param_2[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148f2e608 FUN_148f2e608 body=175 status=ok
// SIG undefined FUN_148f2e608(void)

void FUN_148f2e608(longlong param_1,longlong param_2)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    plVar3 = (longlong *)FUN_147526316(param_1);
    if (plVar3 == (longlong *)0x0) {
      FUN_1415b7ec4(L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to remove key.",2
                    ,0);
    }
    else {
      cVar2 = FUN_144729dda(param_2 + 0x34);
      if (cVar2 != '\0') {
        FUN_14479d2ce(param_2 + 0x34);
      }
      local_38 = param_2 + 0x28;
      local_30 = 1;
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
  }
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2e6b8 FUN_148f2e6b8 body=43 status=ok
// SIG undefined FUN_148f2e6b8(void)

void FUN_148f2e6b8(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2e0))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148f2e6e4 FUN_148f2e6e4 body=43 status=ok
// SIG undefined FUN_148f2e6e4(void)

void FUN_148f2e6e4(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x310))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148f2e710 FUN_148f2e710 body=41 status=ok
// SIG undefined FUN_148f2e710(void)

void FUN_148f2e710(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2c0))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148f2e73a FUN_148f2e73a body=43 status=ok
// SIG undefined FUN_148f2e73a(void)

void FUN_148f2e73a(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2f0))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148f2e766 FUN_148f2e766 body=43 status=ok
// SIG undefined FUN_148f2e766(void)

void FUN_148f2e766(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 800))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148f2e792 FUN_148f2e792 body=41 status=ok
// SIG undefined FUN_148f2e792(void)

void FUN_148f2e792(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2d0))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148f2e7bc FUN_148f2e7bc body=41 status=ok
// SIG undefined FUN_148f2e7bc(void)

void FUN_148f2e7bc(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x300))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148f2e7e6 FUN_148f2e7e6 body=175 status=ok
// SIG undefined FUN_148f2e7e6(void)

void FUN_148f2e7e6(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_21 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_30,local_21);
  *param_3 = local_30;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2e896 FUN_148f2e896 body=43 status=ok
// SIG undefined FUN_148f2e896(void)

void FUN_148f2e896(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2b0))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148f2e8c2 FUN_148f2e8c2 body=160 status=ok
// SIG undefined FUN_148f2e8c2(void)

void FUN_148f2e8c2(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x2e8))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2e964 FUN_148f2e964 body=160 status=ok
// SIG undefined FUN_148f2e964(void)

void FUN_148f2e964(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x318))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2ea06 FUN_148f2ea06 body=156 status=ok
// SIG undefined FUN_148f2ea06(void)

void FUN_148f2ea06(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x2c8))(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2eaa4 FUN_148f2eaa4 body=160 status=ok
// SIG undefined FUN_148f2eaa4(void)

void FUN_148f2eaa4(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x2f8))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2eb46 FUN_148f2eb46 body=160 status=ok
// SIG undefined FUN_148f2eb46(void)

void FUN_148f2eb46(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x328))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2ebe8 FUN_148f2ebe8 body=156 status=ok
// SIG undefined FUN_148f2ebe8(void)

void FUN_148f2ebe8(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x2d8))(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2ec86 FUN_148f2ec86 body=156 status=ok
// SIG undefined FUN_148f2ec86(void)

void FUN_148f2ec86(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x308))(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2ed24 FUN_148f2ed24 body=343 status=ok
// SIG undefined FUN_148f2ed24(void)

void FUN_148f2ed24(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  local_28 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_29 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  puVar2 = &local_24;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2a8))(param_1,puVar2,local_28,local_29);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2ee7c FUN_148f2ee7c body=160 status=ok
// SIG undefined FUN_148f2ee7c(void)

void FUN_148f2ee7c(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x2b8))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2ef28 FUN_148f2ef28 body=473 status=ok
// SIG undefined FUN_148f2ef28(void)

void FUN_148f2ef28(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_36;
  undefined1 local_35;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  local_30 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_35 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_35);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_35);
  }
  local_36 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_36);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_36);
  }
  puVar3 = &local_2c;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_36;
  uVar2 = FUN_148f2f102(param_1,puVar3,local_30,local_35);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2f102 FUN_148f2f102 body=302 status=ok
// SIG undefined FUN_148f2f102(void)

void FUN_148f2f102(longlong param_1,undefined4 *param_2,float param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_c8 [32];
  double *local_a8;
  undefined1 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78;
  double local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  float local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_44 = param_3;
  lVar4 = FUN_147526316(param_1 + 0x40);
  local_a0 = param_4;
  if (lVar4 == 0) {
    local_70 = (double)param_3;
    uVar1 = *param_2;
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    local_90 = *(undefined8 *)(param_1 + 0x60);
    local_88 = *(longlong *)(param_1 + 0x68);
    if (local_88 != 0) {
      LOCK();
      *(int *)(local_88 + 0xc) = *(int *)(local_88 + 0xc) + 1;
      UNLOCK();
    }
    local_78 = *(undefined4 *)(param_1 + 0x78);
    local_80 = *(undefined8 *)(param_1 + 0x70);
    local_98 = param_5;
    local_a8 = &local_70;
    FUN_148f33d16(&local_90,uVar2,uVar3,uVar1);
  }
  else {
    uVar1 = *param_2;
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    local_68 = *(undefined8 *)(param_1 + 0x40);
    local_60 = *(longlong *)(param_1 + 0x48);
    if (local_60 != 0) {
      LOCK();
      *(int *)(local_60 + 0xc) = *(int *)(local_60 + 0xc) + 1;
      UNLOCK();
    }
    local_50 = *(undefined4 *)(param_1 + 0x58);
    local_58 = *(undefined8 *)(param_1 + 0x50);
    local_98 = param_5;
    local_a8 = (double *)&local_44;
    FUN_148f33b70(&local_68,uVar2,uVar3,uVar1);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2f232 FUN_148f2f232 body=94 status=ok
// SIG undefined FUN_148f2f232(void)

void FUN_148f2f232(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148f2f292(param_1,&local_2c);
  param_3[4] = local_1c;
  *param_3 = local_2c;
  param_3[1] = uStack_28;
  param_3[2] = uStack_24;
  param_3[3] = uStack_20;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2f292 FUN_148f2f292 body=187 status=ok
// SIG undefined FUN_148f2f292(void)

undefined8 FUN_148f2f292(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = FUN_147526316(param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  if (lVar2 == 0) {
    local_58 = *(undefined8 *)(param_1 + 0x60);
    local_50 = *(longlong *)(param_1 + 0x68);
    if (local_50 != 0) {
      LOCK();
      *(int *)(local_50 + 0xc) = *(int *)(local_50 + 0xc) + 1;
      UNLOCK();
    }
    local_40 = *(undefined4 *)(param_1 + 0x78);
    local_48 = *(undefined8 *)(param_1 + 0x70);
    FUN_148f340b0(param_2);
  }
  else {
    local_38 = *(undefined8 *)(param_1 + 0x40);
    local_30 = *(longlong *)(param_1 + 0x48);
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 0xc) = *(int *)(local_30 + 0xc) + 1;
      UNLOCK();
    }
    local_20 = *(undefined4 *)(param_1 + 0x58);
    local_28 = *(undefined8 *)(param_1 + 0x50);
    FUN_148f33fe6(param_2,&local_38,uVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2f34e FUN_148f2f34e body=333 status=ok
// SIG undefined FUN_148f2f34e(void)

void FUN_148f2f34e(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_88 [32];
  uint local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  uint local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_34 = local_34 & 0xffffff00;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 60000;
  uStack_24 = 1;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_40 = 0x10000ea60;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_34;
  uStack_64 = uStack_30;
  uStack_60 = uStack_2c;
  uStack_5c = uStack_28;
  local_58 = uStack_24;
  FUN_148f2f49c(param_1,&local_50,&local_68,local_40);
  if (&local_50 == param_3) {
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_50;
    *(undefined4 *)(param_3 + 1) = local_48;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_44;
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2f49c FUN_148f2f49c body=410 status=ok
// SIG undefined FUN_148f2f49c(void)

longlong * FUN_148f2f49c(longlong param_1,longlong *param_2,undefined4 *param_3,undefined8 param_4)

{
  double dVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  longlong local_88;
  int local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar4 = FUN_147526316(param_1 + 0x40);
  local_d8 = param_4;
  if (lVar4 == 0) {
    local_a8 = *param_3;
    uStack_a4 = param_3[1];
    uStack_a0 = param_3[2];
    uStack_9c = param_3[3];
    local_98 = param_3[4];
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    local_c8 = *(undefined8 *)(param_1 + 0x60);
    local_c0 = *(longlong *)(param_1 + 0x68);
    if (local_c0 != 0) {
      LOCK();
      *(int *)(local_c0 + 0xc) = *(int *)(local_c0 + 0xc) + 1;
      UNLOCK();
    }
    local_b0 = *(undefined4 *)(param_1 + 0x78);
    local_b8 = *(undefined8 *)(param_1 + 0x70);
    FUN_148f343cc(&local_88,&local_c8,uVar3,&local_a8);
    lVar4 = local_88;
    *param_2 = 0;
    param_2[1] = 0;
    if ((longlong)local_80 != 0) {
      lVar5 = 0;
      do {
        dVar1 = *(double *)(lVar4 + lVar5);
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_14475e4ac(param_2,iVar2);
        }
        *(float *)(*param_2 + (longlong)iVar2 * 4) = (float)dVar1;
        lVar5 = lVar5 + 8;
      } while ((longlong)local_80 * 8 != lVar5);
    }
    if (local_88 != 0) {
      FUN_1400020a8(local_88);
    }
  }
  else {
    local_48 = param_3[4];
    local_58 = *param_3;
    uStack_54 = param_3[1];
    uStack_50 = param_3[2];
    uStack_4c = param_3[3];
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    local_78 = *(undefined8 *)(param_1 + 0x40);
    local_70 = *(longlong *)(param_1 + 0x48);
    if (local_70 != 0) {
      LOCK();
      *(int *)(local_70 + 0xc) = *(int *)(local_70 + 0xc) + 1;
      UNLOCK();
    }
    local_60 = *(undefined4 *)(param_1 + 0x58);
    local_68 = *(undefined8 *)(param_1 + 0x50);
    FUN_148f3417a(param_2,&local_78,uVar3,&local_58);
  }
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148f2f638 FUN_148f2f638 body=39 status=ok
// SIG undefined FUN_148f2f638(void)

void FUN_148f2f638(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148f2f660();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148f2f660 FUN_148f2f660 body=220 status=ok
// SIG undefined FUN_148f2f660(void)

void FUN_148f2f660(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  float local_20;
  undefined4 uStack_1c;
  char local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = FUN_147526316(param_1 + 0x40);
  if (lVar1 == 0) {
    local_60 = *(undefined8 *)(param_1 + 0x60);
    local_58 = *(longlong *)(param_1 + 0x68);
    if (local_58 != 0) {
      LOCK();
      *(int *)(local_58 + 0xc) = *(int *)(local_58 + 0xc) + 1;
      UNLOCK();
    }
    local_48 = *(undefined4 *)(param_1 + 0x78);
    local_50 = *(undefined8 *)(param_1 + 0x70);
    FUN_148f34686(&local_20);
    if (local_18 != '\0') {
      local_20 = (float)(double)CONCAT44(uStack_1c,local_20);
      goto LAB_148f2f715;
    }
  }
  else {
    local_40 = *(undefined8 *)(param_1 + 0x40);
    local_38 = *(longlong *)(param_1 + 0x48);
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 0xc) = *(int *)(local_38 + 0xc) + 1;
      UNLOCK();
    }
    local_28 = *(undefined4 *)(param_1 + 0x58);
    local_30 = *(undefined8 *)(param_1 + 0x50);
    FUN_148f3461e(&local_20);
    if ((char)uStack_1c != '\0') goto LAB_148f2f715;
  }
  local_20 = 0.0;
LAB_148f2f715:
  if ((local_10 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20);
  }
  return;
}



// FUNCTION 148f2f73e FUN_148f2f73e body=143 status=ok
// SIG undefined FUN_148f2f73e(void)

void FUN_148f2f73e(longlong *param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_28);
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



// FUNCTION 148f2f7ce FUN_148f2f7ce body=270 status=ok
// SIG undefined FUN_148f2f7ce(void)

void FUN_148f2f7ce(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2a8))(param_1,&local_48,plVar1);
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2f8de FUN_148f2f8de body=37 status=ok
// SIG undefined FUN_148f2f8de(void)

void FUN_148f2f8de(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148f2f904();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148f2f904 FUN_148f2f904 body=81 status=ok
// SIG undefined FUN_148f2f904(void)

undefined8 FUN_148f2f904(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = param_1 + 0x40;
  lVar1 = FUN_147526316(lVar4);
  if (lVar1 == 0) {
    lVar4 = param_1 + 0x60;
    lVar1 = FUN_147526316(lVar4);
    if (lVar1 == 0) {
      return 0;
    }
  }
  plVar2 = (longlong *)FUN_147526316(lVar4);
                    /* WARNING: Could not recover jumptable at 0x000148f2f932. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*plVar2 + 0x48))(plVar2);
  return uVar3;
}



// FUNCTION 148f2f956 FUN_148f2f956 body=37 status=ok
// SIG undefined FUN_148f2f956(void)

void FUN_148f2f956(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148f2f97c();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148f2f97c FUN_148f2f97c body=72 status=ok
// SIG undefined FUN_148f2f97c(void)

undefined1 FUN_148f2f97c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_147526316(param_1 + 0x40);
  if ((lVar1 == 0) && (lVar1 = FUN_147526316(param_1 + 0x60), lVar1 == 0)) {
    FUN_1415b7ec4(L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get post-infinity extrapolation."
                  ,2,0);
    return 5;
  }
  return *(undefined1 *)(lVar1 + 0x51);
}



// FUNCTION 148f2f9c4 FUN_148f2f9c4 body=37 status=ok
// SIG undefined FUN_148f2f9c4(void)

void FUN_148f2f9c4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148f2f9ea();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148f2f9ea FUN_148f2f9ea body=72 status=ok
// SIG undefined FUN_148f2f9ea(void)

undefined1 FUN_148f2f9ea(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_147526316(param_1 + 0x40);
  if ((lVar1 == 0) && (lVar1 = FUN_147526316(param_1 + 0x60), lVar1 == 0)) {
    FUN_1415b7ec4(L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get pre-infinity extrapolation."
                  ,2,0);
    return 5;
  }
  return *(undefined1 *)(lVar1 + 0x50);
}



// FUNCTION 148f2fa36 FUN_148f2fa36 body=37 status=ok
// SIG undefined FUN_148f2fa36(void)

void FUN_148f2fa36(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148f2fa5c();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148f2fa5c FUN_148f2fa5c body=197 status=ok
// SIG undefined FUN_148f2fa5c(void)

undefined1 FUN_148f2fa5c(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_20 [4];
  undefined1 local_1c;
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = FUN_147526316(param_1 + 0x40);
  if (lVar1 == 0) {
    local_60 = *(undefined8 *)(param_1 + 0x60);
    local_58 = *(longlong *)(param_1 + 0x68);
    if (local_58 != 0) {
      LOCK();
      *(int *)(local_58 + 0xc) = *(int *)(local_58 + 0xc) + 1;
      UNLOCK();
    }
    local_48 = *(undefined4 *)(param_1 + 0x78);
    local_50 = *(undefined8 *)(param_1 + 0x70);
    FUN_148f34686(local_20);
  }
  else {
    local_40 = *(undefined8 *)(param_1 + 0x40);
    local_38 = *(longlong *)(param_1 + 0x48);
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 0xc) = *(int *)(local_38 + 0xc) + 1;
      UNLOCK();
    }
    local_28 = *(undefined4 *)(param_1 + 0x58);
    local_30 = *(undefined8 *)(param_1 + 0x50);
    FUN_148f3461e(local_20);
    local_18 = local_1c;
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2fb38 FUN_148f2fb38 body=173 status=ok
// SIG undefined FUN_148f2fb38(void)

void FUN_148f2fb38(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = FUN_147526316(param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  if (lVar2 == 0) {
    local_50 = *(undefined8 *)(param_1 + 0x60);
    local_48 = *(longlong *)(param_1 + 0x68);
    if (local_48 != 0) {
      LOCK();
      *(int *)(local_48 + 0xc) = *(int *)(local_48 + 0xc) + 1;
      UNLOCK();
    }
    local_38 = *(undefined4 *)(param_1 + 0x78);
    local_40 = *(undefined8 *)(param_1 + 0x70);
    FUN_148f3477c();
  }
  else {
    local_30 = *(undefined8 *)(param_1 + 0x40);
    local_28 = *(longlong *)(param_1 + 0x48);
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 0xc) = *(int *)(local_28 + 0xc) + 1;
      UNLOCK();
    }
    local_18 = *(undefined4 *)(param_1 + 0x58);
    local_20 = *(undefined8 *)(param_1 + 0x50);
    FUN_148f346f0(&local_30,uVar1);
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2fbe6 FUN_148f2fbe6 body=160 status=ok
// SIG undefined FUN_148f2fbe6(void)

void FUN_148f2fbe6(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x2b0))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2fc88 FUN_148f2fc88 body=156 status=ok
// SIG undefined FUN_148f2fc88(void)

void FUN_148f2fc88(undefined8 param_1,longlong param_2)

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
  FUN_148f2fd26(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2fd26 FUN_148f2fd26 body=228 status=ok
// SIG undefined FUN_148f2fd26(void)

void FUN_148f2fd26(longlong param_1,float param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  double local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  float local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_24 = param_2;
  lVar2 = FUN_147526316(param_1 + 0x40);
  if (lVar2 == 0) {
    local_50 = (double)param_2;
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    local_70 = *(undefined8 *)(param_1 + 0x60);
    local_68 = *(longlong *)(param_1 + 0x68);
    if (local_68 != 0) {
      LOCK();
      *(int *)(local_68 + 0xc) = *(int *)(local_68 + 0xc) + 1;
      UNLOCK();
    }
    local_58 = *(undefined4 *)(param_1 + 0x78);
    local_60 = *(undefined8 *)(param_1 + 0x70);
    FUN_148f348a6(&local_70,uVar1,&local_50);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    local_48 = *(undefined8 *)(param_1 + 0x40);
    local_40 = *(longlong *)(param_1 + 0x48);
    if (local_40 != 0) {
      LOCK();
      *(int *)(local_40 + 0xc) = *(int *)(local_40 + 0xc) + 1;
      UNLOCK();
    }
    local_30 = *(undefined4 *)(param_1 + 0x58);
    local_38 = *(undefined8 *)(param_1 + 0x50);
    FUN_148f3480c(&local_48,uVar1,&local_24);
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2fe0c FUN_148f2fe0c body=152 status=ok
// SIG undefined FUN_148f2fe0c(void)

void FUN_148f2fe0c(undefined8 param_1,longlong param_2)

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
  FUN_148f2fea6(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2fea6 FUN_148f2fea6 body=76 status=ok
// SIG undefined FUN_148f2fea6(void)

void FUN_148f2fea6(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_147526316(param_1 + 0x40);
  if (lVar1 == 0) {
    lVar1 = FUN_147526316(param_1 + 0x60);
    if (lVar1 == 0) {
      FUN_1415b7ec4(L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to set post-infinity extrapolation."
                    ,2,0);
      return;
    }
  }
  *(undefined1 *)(lVar1 + 0x51) = param_2;
  return;
}



// FUNCTION 148f2fef2 FUN_148f2fef2 body=152 status=ok
// SIG undefined FUN_148f2fef2(void)

void FUN_148f2fef2(undefined8 param_1,longlong param_2)

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
  FUN_148f2ff8c(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2ff8c FUN_148f2ff8c body=76 status=ok
// SIG undefined FUN_148f2ff8c(void)

void FUN_148f2ff8c(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_147526316(param_1 + 0x40);
  if (lVar1 == 0) {
    lVar1 = FUN_147526316(param_1 + 0x60);
    if (lVar1 == 0) {
      FUN_1415b7ec4(L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to set pre-infinity extrapolation."
                    ,2,0);
      return;
    }
  }
  *(undefined1 *)(lVar1 + 0x50) = param_2;
  return;
}



// FUNCTION 148f2ffdc FUN_148f2ffdc body=175 status=ok
// SIG undefined FUN_148f2ffdc(void)

void FUN_148f2ffdc(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_21 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_30,local_21);
  *param_3 = local_30;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f3008c FUN_148f3008c body=44 status=ok
// SIG undefined FUN_148f3008c(void)

void FUN_148f3008c(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148f34944(param_1 + 0x40,*(undefined4 *)(param_1 + 0x28));
  *param_3 = uVar1;
  return;
}



// FUNCTION 148f300b8 FUN_148f300b8 body=347 status=ok
// SIG undefined FUN_148f300b8(void)

void FUN_148f300b8(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 local_40;
  undefined4 local_38;
  undefined1 local_29;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  local_28 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_29 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  puVar2 = &local_24;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = *puVar2;
  local_38 = local_28;
  local_40 = local_29;
  FUN_148f34a40(param_1 + 0x40,*(undefined4 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x2c),
                *(undefined8 *)(param_1 + 0x34));
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f30214 FUN_148f30214 body=163 status=ok
// SIG undefined FUN_148f30214(void)

void FUN_148f30214(longlong param_1,longlong param_2)

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
  FUN_148f34bea(param_1 + 0x40,*(undefined4 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x34),
                local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f302bc FUN_148f302bc body=397 status=ok
// SIG undefined FUN_148f302bc(void)

void FUN_148f302bc(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_58 [35];
  undefined1 local_35;
  undefined4 local_34;
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
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  local_30 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_35 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_35);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_35);
  }
  puVar3 = &local_2c;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_148f3044a(param_1,puVar3,local_30,local_35);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f3044a FUN_148f3044a body=136 status=ok
// SIG undefined FUN_148f3044a(void)

void FUN_148f3044a(longlong param_1,undefined4 *param_2,undefined4 param_3,undefined1 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  undefined1 local_40;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *param_2;
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  local_30 = *(undefined8 *)(param_1 + 0x38);
  local_28 = *(longlong *)(param_1 + 0x40);
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 0xc) = *(int *)(local_28 + 0xc) + 1;
    UNLOCK();
  }
  local_18 = *(undefined4 *)(param_1 + 0x50);
  local_20 = *(undefined8 *)(param_1 + 0x48);
  local_48 = &local_c;
  local_40 = param_4;
  local_c = param_3;
  FUN_148f34d20(&local_30,uVar3,uVar2,uVar1);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f304d4 FUN_148f304d4 body=407 status=ok
// SIG undefined FUN_148f304d4(void)

void FUN_148f304d4(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  uint local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  uint local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_6c = local_6c & 0xffffff00;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 60000;
  uStack_5c = 1;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  local_78 = 0x10000ea60;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = uStack_5c;
  local_38 = local_6c;
  uStack_34 = uStack_68;
  uStack_30 = uStack_64;
  uStack_2c = uStack_60;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  local_58 = *(undefined8 *)(param_1 + 0x38);
  local_50 = *(longlong *)(param_1 + 0x40);
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 0xc) = *(int *)(local_50 + 0xc) + 1;
    UNLOCK();
  }
  local_40 = *(undefined4 *)(param_1 + 0x50);
  local_48 = *(undefined8 *)(param_1 + 0x48);
  local_98 = local_78;
  FUN_148f35028(&local_88,&local_58,uVar1,&local_38);
  if (&local_88 == param_3) {
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_88;
    *(undefined4 *)(param_3 + 1) = local_80;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_7c;
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f3066c FUN_148f3066c body=37 status=ok
// SIG undefined FUN_148f3066c(void)

void FUN_148f3066c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148f30692();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148f30692 FUN_148f30692 body=119 status=ok
// SIG undefined FUN_148f30692(void)

undefined4 FUN_148f30692(longlong param_1)

{
  undefined4 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_18;
  char local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *(undefined8 *)(param_1 + 0x38);
  local_30 = *(longlong *)(param_1 + 0x40);
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 0xc) = *(int *)(local_30 + 0xc) + 1;
    UNLOCK();
  }
  local_20 = *(undefined4 *)(param_1 + 0x50);
  local_28 = *(undefined8 *)(param_1 + 0x48);
  FUN_148f3527a(&local_18);
  uVar1 = 0;
  if (local_14 != '\0') {
    uVar1 = local_18;
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f3070e FUN_148f3070e body=44 status=ok
// SIG undefined FUN_148f3070e(void)

void FUN_148f3070e(longlong param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = FUN_147526316(param_1 + 0x38);
  *param_3 = *(undefined1 *)(lVar1 + 0x52);
  return;
}



// FUNCTION 148f3073a FUN_148f3073a body=143 status=ok
// SIG undefined FUN_148f3073a(void)

void FUN_148f3073a(longlong *param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_28);
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



// FUNCTION 148f307ca FUN_148f307ca body=270 status=ok
// SIG undefined FUN_148f307ca(void)

void FUN_148f307ca(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2a8))(param_1,&local_48,plVar1);
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f308da FUN_148f308da body=75 status=ok
// SIG undefined FUN_148f308da(void)

void FUN_148f308da(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar2 = FUN_147526316(param_1 + 0x38);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    plVar3 = (longlong *)FUN_147526316(param_1 + 0x38);
    uVar1 = (**(code **)(*plVar3 + 0x48))(plVar3);
  }
  *param_3 = uVar1;
  return;
}



// FUNCTION 148f3092a FUN_148f3092a body=133 status=ok
// SIG undefined FUN_148f3092a(void)

void FUN_148f3092a(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_20 [4];
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_40 = *(undefined8 *)(param_1 + 0x38);
  local_38 = *(longlong *)(param_1 + 0x40);
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 0xc) = *(int *)(local_38 + 0xc) + 1;
    UNLOCK();
  }
  local_28 = *(undefined4 *)(param_1 + 0x50);
  local_30 = *(undefined8 *)(param_1 + 0x48);
  FUN_148f3527a(local_20);
  *param_3 = local_1c;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f309b0 FUN_148f309b0 body=122 status=ok
// SIG undefined FUN_148f309b0(void)

void FUN_148f309b0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  local_20 = *(longlong *)(param_1 + 0x40);
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
    UNLOCK();
  }
  local_10 = *(undefined4 *)(param_1 + 0x50);
  local_18 = *(undefined8 *)(param_1 + 0x48);
  FUN_148f352de(&local_28,uVar1);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f30a2c FUN_148f30a2c body=160 status=ok
// SIG undefined FUN_148f30a2c(void)

void FUN_148f30a2c(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x2b0))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f30ace FUN_148f30ace body=154 status=ok
// SIG undefined FUN_148f30ace(void)

void FUN_148f30ace(undefined8 param_1,longlong param_2)

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
  FUN_148f30b6a(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f30b6a FUN_148f30b6a body=115 status=ok
// SIG undefined FUN_148f30b6a(void)

void FUN_148f30b6a(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  local_28 = *(longlong *)(param_1 + 0x40);
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 0xc) = *(int *)(local_28 + 0xc) + 1;
    UNLOCK();
  }
  local_18 = *(undefined4 *)(param_1 + 0x50);
  local_20 = *(undefined8 *)(param_1 + 0x48);
  local_c = param_2;
  FUN_148f3536a(&local_30,uVar1,&local_c);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f30be2 FUN_148f30be2 body=166 status=ok
// SIG undefined FUN_148f30be2(void)

void FUN_148f30be2(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
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
  lVar2 = FUN_147526316(param_1 + 0x38);
  *(bool *)(lVar2 + 0x52) = iVar1 != 0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f30c8c FUN_148f30c8c body=175 status=ok
// SIG undefined FUN_148f30c8c(void)

void FUN_148f30c8c(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_21 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_30,local_21);
  *param_3 = local_30;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f30d3c FUN_148f30d3c body=38 status=ok
// SIG undefined FUN_148f30d3c(void)

void FUN_148f30d3c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148f30d62();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148f30d62 FUN_148f30d62 body=99 status=ok
// SIG undefined FUN_148f30d62(void)

undefined8 FUN_148f30d62(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148f35400(param_1 + 0x40,local_48,*(undefined4 *)(param_1 + 0x28));
  uVar1 = FUN_140cc2254(local_48);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f30dc6 FUN_148f30dc6 body=347 status=ok
// SIG undefined FUN_148f30dc6(void)

void FUN_148f30dc6(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 local_40;
  undefined4 local_38;
  undefined1 local_29;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  local_28 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_29 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  puVar2 = &local_24;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = *puVar2;
  local_38 = local_28;
  local_40 = local_29;
  FUN_148f3550a(param_1 + 0x40,*(undefined4 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x2c),
                *(undefined8 *)(param_1 + 0x34));
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f30f22 FUN_148f30f22 body=156 status=ok
// SIG undefined FUN_148f30f22(void)

void FUN_148f30f22(undefined8 param_1,longlong param_2)

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
  FUN_148f30fc0(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f30fc0 FUN_148f30fc0 body=136 status=ok
// SIG undefined FUN_148f30fc0(void)

void FUN_148f30fc0(longlong param_1)

{
  undefined1 auStack_a8 [32];
  undefined1 local_88 [48];
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_147531c08(local_58);
  FUN_14753c5f8(local_88,local_58);
  FUN_148f356b4(param_1 + 0x40,*(undefined4 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x34),
                local_88);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f3104c FUN_148f3104c body=380 status=ok
// SIG undefined FUN_148f3104c(void)

void FUN_148f3104c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [35];
  undefined1 local_35;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
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
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_35 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_35);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_35);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148f311ca(param_1,local_24,local_30,local_35);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f311ca FUN_148f311ca body=184 status=ok
// SIG undefined FUN_148f311ca(void)

undefined8 FUN_148f311ca(longlong param_1,undefined4 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  undefined1 local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_147531c08(local_58,param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  local_78 = *(undefined8 *)(param_1 + 0x40);
  local_70 = *(longlong *)(param_1 + 0x48);
  if (local_70 != 0) {
    LOCK();
    *(int *)(local_70 + 0xc) = *(int *)(local_70 + 0xc) + 1;
    UNLOCK();
  }
  local_60 = *(undefined4 *)(param_1 + 0x58);
  local_68 = *(undefined8 *)(param_1 + 0x50);
  local_88 = local_58;
  local_80 = param_4;
  uVar2 = FUN_148f357e4(&local_78,uVar2,uVar1,param_2);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f31284 FUN_148f31284 body=38 status=ok
// SIG undefined FUN_148f31284(void)

void FUN_148f31284(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148f312aa();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148f312aa FUN_148f312aa body=133 status=ok
// SIG undefined FUN_148f312aa(void)

undefined8 FUN_148f312aa(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_147526316(param_1 + 0x40);
  if (lVar1 == 0) {
    uVar2 = 0;
    FUN_1415b7ec4(L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get default value."
                  ,2,0);
  }
  else {
    FUN_14753c5f8(local_48,lVar1 + 0x78);
    uVar2 = FUN_140cc2254(local_48);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f31330 FUN_148f31330 body=143 status=ok
// SIG undefined FUN_148f31330(void)

void FUN_148f31330(longlong *param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_28);
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



// FUNCTION 148f313c0 FUN_148f313c0 body=270 status=ok
// SIG undefined FUN_148f313c0(void)

void FUN_148f313c0(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2a8))(param_1,&local_48,plVar1);
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f314d4 FUN_148f314d4 body=41 status=ok
// SIG undefined FUN_148f314d4(void)

void FUN_148f314d4(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = FUN_148f312aa();
  *(bool *)param_3 = lVar1 != 0;
  return;
}



// FUNCTION 148f31514 FUN_148f31514 body=89 status=ok
// SIG undefined FUN_148f31514(void)

void FUN_148f31514(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = FUN_144729dda(param_1 + 0x38);
  if (cVar1 != '\0') {
    FUN_14479d2ce(param_1 + 0x38);
  }
  plVar2 = (longlong *)FUN_147526316(param_1 + 0x40);
  if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148f31552. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x68))(plVar2);
    return;
  }
  FUN_1415b7ec4(L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to remove default value."
                ,2,0);
  return;
}



// FUNCTION 148f3156e FUN_148f3156e body=160 status=ok
// SIG undefined FUN_148f3156e(void)

void FUN_148f3156e(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x2b0))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f31610 FUN_148f31610 body=156 status=ok
// SIG undefined FUN_148f31610(void)

void FUN_148f31610(undefined8 param_1,longlong param_2)

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
  FUN_148f316ae(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f316ae FUN_148f316ae body=64 status=ok
// SIG undefined FUN_148f316ae(void)

void FUN_148f316ae(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_147526316(param_1 + 0x40);
  if (lVar1 != 0) {
    FUN_147531c1c(lVar1 + 0x78,param_2);
    return;
  }
  FUN_1415b7ec4(L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to set default value."
                ,2,0);
  return;
}



// FUNCTION 148f316f2 FUN_148f316f2 body=175 status=ok
// SIG undefined FUN_148f316f2(void)

void FUN_148f316f2(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_21 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_30,local_21);
  *param_3 = local_30;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f317a2 FUN_148f317a2 body=147 status=ok
// SIG undefined FUN_148f317a2(void)

void FUN_148f317a2(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148f35aec(param_1 + 0x40,&local_28,*(undefined4 *)(param_1 + 0x28));
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



// FUNCTION 148f31836 FUN_148f31836 body=347 status=ok
// SIG undefined FUN_148f31836(void)

void FUN_148f31836(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 local_40;
  undefined4 local_38;
  undefined1 local_29;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  local_28 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_29 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  puVar2 = &local_24;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = *puVar2;
  local_38 = local_28;
  local_40 = local_29;
  FUN_148f35be0(param_1 + 0x40,*(undefined4 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x2c),
                *(undefined8 *)(param_1 + 0x34));
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f31992 FUN_148f31992 body=171 status=ok
// SIG undefined FUN_148f31992(void)

void FUN_148f31992(undefined8 param_1,longlong param_2)

{
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
  FUN_148f31a3e(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f31a3e FUN_148f31a3e body=150 status=ok
// SIG undefined FUN_148f31a3e(void)

void FUN_148f31a3e(longlong param_1,undefined8 *param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_2 + 1);
  lVar1 = (longlong)local_30;
  _Src = (void *)*param_2;
  if (lVar1 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar1 * 2);
  }
  FUN_148f35d8a(param_1 + 0x40,*(undefined4 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x34),
                &local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f31ad8 FUN_148f31ad8 body=504 status=ok
// SIG undefined FUN_148f31ad8(void)

void FUN_148f31ad8(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  void *_Src;
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined8 unaff_RBP;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_98 [40];
  void *local_70;
  int local_68;
  undefined4 local_64;
  undefined1 local_5d;
  undefined4 local_5c;
  void *local_58;
  ulonglong uStack_50;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_44 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  puVar2 = &local_44;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  local_58 = (void *)0x0;
  uStack_50 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_5c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  local_5d = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5d);
  }
  _Src = local_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),local_5d);
  local_70 = (void *)0x0;
  lVar4 = (longlong)(int)uStack_50;
  local_68 = (int)uStack_50;
  if (lVar4 == 0) {
    local_64 = 0;
  }
  else {
    FUN_1446dd670(&local_70,uStack_50 & 0xffffffff,0);
    memcpy(local_70,_Src,lVar4 * 2);
  }
  uVar1 = FUN_148f31cd2(param_1,puVar2,&local_70,uVar3 & 0xffffffff);
  *param_3 = uVar1;
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f31cd2 FUN_148f31cd2 body=152 status=ok
// SIG undefined FUN_148f31cd2(void)

undefined8 FUN_148f31cd2(longlong param_1,undefined4 *param_2,longlong *param_3,undefined1 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *param_2;
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  local_38 = *(undefined8 *)(param_1 + 0x38);
  local_30 = *(longlong *)(param_1 + 0x40);
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 0xc) = *(int *)(local_30 + 0xc) + 1;
    UNLOCK();
  }
  local_20 = *(undefined4 *)(param_1 + 0x50);
  local_28 = *(undefined8 *)(param_1 + 0x48);
  local_48 = param_3;
  local_40 = param_4;
  uVar3 = FUN_148f35ec4(&local_38,uVar2,uVar3,uVar1);
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f31d6c FUN_148f31d6c body=139 status=ok
// SIG undefined FUN_148f31d6c(void)

void FUN_148f31d6c(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148f31df8(param_1,&local_28);
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



// FUNCTION 148f31df8 FUN_148f31df8 body=220 status=ok
// SIG undefined FUN_148f31df8(void)

undefined8 * FUN_148f31df8(longlong param_1,undefined8 *param_2)

{
  void *_Src;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  void *local_30;
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = *(undefined8 *)(param_1 + 0x38);
  local_48 = *(longlong *)(param_1 + 0x40);
  if (local_48 != 0) {
    LOCK();
    *(int *)(local_48 + 0xc) = *(int *)(local_48 + 0xc) + 1;
    UNLOCK();
  }
  local_38 = *(undefined4 *)(param_1 + 0x50);
  local_40 = *(undefined8 *)(param_1 + 0x48);
  FUN_148f361cc(&local_30);
  _Src = local_30;
  if (local_24 == -1) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = 0;
    *(int *)(param_2 + 1) = local_28;
    if ((longlong)local_28 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_2,local_28,0);
      memcpy((void *)*param_2,_Src,(longlong)local_28 * 2);
      if (local_24 == -1) goto LAB_148f31eaa;
    }
    if (local_30 != (void *)0x0) {
      FUN_1400020a8(local_30);
    }
  }
LAB_148f31eaa:
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148f31ed6 FUN_148f31ed6 body=143 status=ok
// SIG undefined FUN_148f31ed6(void)

void FUN_148f31ed6(longlong *param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_28);
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



// FUNCTION 148f31f66 FUN_148f31f66 body=270 status=ok
// SIG undefined FUN_148f31f66(void)

void FUN_148f31f66(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2a8))(param_1,&local_48,plVar1);
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f3207a FUN_148f3207a body=37 status=ok
// SIG undefined FUN_148f3207a(void)

void FUN_148f3207a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148f320a0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148f320a0 FUN_148f320a0 body=136 status=ok
// SIG undefined FUN_148f320a0(void)

bool FUN_148f320a0(longlong param_1)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  longlong local_20;
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *(undefined8 *)(param_1 + 0x38);
  local_38 = *(longlong *)(param_1 + 0x40);
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 0xc) = *(int *)(local_38 + 0xc) + 1;
    UNLOCK();
  }
  local_28 = *(undefined4 *)(param_1 + 0x50);
  local_30 = *(undefined8 *)(param_1 + 0x48);
  FUN_148f361cc(&local_20);
  if ((local_14 != -1) && (local_20 != 0)) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return local_14 != -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f3212a FUN_148f3212a body=122 status=ok
// SIG undefined FUN_148f3212a(void)

void FUN_148f3212a(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  local_20 = *(longlong *)(param_1 + 0x40);
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
    UNLOCK();
  }
  local_10 = *(undefined4 *)(param_1 + 0x50);
  local_18 = *(undefined8 *)(param_1 + 0x48);
  FUN_148f36418(&local_28,uVar1);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f321a6 FUN_148f321a6 body=160 status=ok
// SIG undefined FUN_148f321a6(void)

void FUN_148f321a6(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x2b0))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f32248 FUN_148f32248 body=249 status=ok
// SIG undefined FUN_148f32248(void)

void FUN_148f32248(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
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
  _Src = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = (void *)0x0;
  lVar1 = (longlong)(int)uStack_30;
  local_40 = (int)uStack_30;
  if (lVar1 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,uStack_30 & 0xffffffff,0);
    memcpy(local_48,_Src,lVar1 * 2);
  }
  FUN_148f32342(param_1,&local_48);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f32342 FUN_148f32342 body=127 status=ok
// SIG undefined FUN_148f32342(void)

void FUN_148f32342(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  local_28 = *(longlong *)(param_1 + 0x40);
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 0xc) = *(int *)(local_28 + 0xc) + 1;
    UNLOCK();
  }
  local_18 = *(undefined4 *)(param_1 + 0x50);
  local_20 = *(undefined8 *)(param_1 + 0x48);
  FUN_148f364a8(&local_30,uVar1,param_2);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f323ce FUN_148f323ce body=55 status=ok
// SIG undefined FUN_148f323ce(void)

undefined8 * FUN_148f323ce(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("..\\Plugins\\MovieScene\\SequencerScripting\\Source\\SequencerScripting/Private/KeysAndChannels/MovieSceneScriptingFloat.h"
                ,0x21,L"Pure virtual not implemented (%s)",L"UMovieSceneScriptingFloatKey::GetTime")
  ;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 148f32406 FUN_148f32406 body=41 status=ok
// SIG undefined FUN_148f32406(void)

void FUN_148f32406(void)

{
  FUN_140033559("..\\Plugins\\MovieScene\\SequencerScripting\\Source\\SequencerScripting/Private/KeysAndChannels/MovieSceneScriptingFloat.h"
                ,0x2a,L"Pure virtual not implemented (%s)",L"UMovieSceneScriptingFloatKey::SetTime")
  ;
  return;
}



// FUNCTION 148f32430 FUN_148f32430 body=43 status=ok
// SIG undefined FUN_148f32430(void)

undefined8 FUN_148f32430(void)

{
  FUN_140033559("..\\Plugins\\MovieScene\\SequencerScripting\\Source\\SequencerScripting/Private/KeysAndChannels/MovieSceneScriptingFloat.h"
                ,0x31,L"Pure virtual not implemented (%s)",L"UMovieSceneScriptingFloatKey::GetValue"
               );
  return 0;
}



// FUNCTION 148f3245c FUN_148f3245c body=41 status=ok
// SIG undefined FUN_148f3245c(void)

void FUN_148f3245c(void)

{
  FUN_140033559("..\\Plugins\\MovieScene\\SequencerScripting\\Source\\SequencerScripting/Private/KeysAndChannels/MovieSceneScriptingFloat.h"
                ,0x38,L"Pure virtual not implemented (%s)",L"UMovieSceneScriptingFloatKey::SetValue"
               );
  return;
}



// FUNCTION 148f32486 FUN_148f32486 body=45 status=ok
// SIG undefined FUN_148f32486(void)

undefined8 FUN_148f32486(void)

{
  FUN_140033559("..\\Plugins\\MovieScene\\SequencerScripting\\Source\\SequencerScripting/Private/KeysAndChannels/MovieSceneScriptingFloat.h"
                ,0x3f,L"Pure virtual not implemented (%s)",
                L"UMovieSceneScriptingFloatKey::GetInterpolationMode");
  return 3;
}



// FUNCTION 148f324b4 FUN_148f324b4 body=41 status=ok
// SIG undefined FUN_148f324b4(void)

void FUN_148f324b4(void)

{
  FUN_140033559("..\\Plugins\\MovieScene\\SequencerScripting\\Source\\SequencerScripting/Private/KeysAndChannels/MovieSceneScriptingFloat.h"
                ,0x46,L"Pure virtual not implemented (%s)",
                L"UMovieSceneScriptingFloatKey::SetInterpolationMode");
  return;
}



// FUNCTION 148f324de FUN_148f324de body=45 status=ok
// SIG undefined FUN_148f324de(void)

undefined8 FUN_148f324de(void)

{
  FUN_140033559("..\\Plugins\\MovieScene\\SequencerScripting\\Source\\SequencerScripting/Private/KeysAndChannels/MovieSceneScriptingFloat.h"
                ,0x4d,L"Pure virtual not implemented (%s)",
                L"UMovieSceneScriptingFloatKey::GetTangentMode");
  return 3;
}



// FUNCTION 148f3250c FUN_148f3250c body=41 status=ok
// SIG undefined FUN_148f3250c(void)

void FUN_148f3250c(void)

{
  FUN_140033559("..\\Plugins\\MovieScene\\SequencerScripting\\Source\\SequencerScripting/Private/KeysAndChannels/MovieSceneScriptingFloat.h"
                ,0x54,L"Pure virtual not implemented (%s)",
                L"UMovieSceneScriptingFloatKey::SetTangentMode");
  return;
}



// FUNCTION 148f32536 FUN_148f32536 body=43 status=ok
// SIG undefined FUN_148f32536(void)

undefined8 FUN_148f32536(void)

{
  FUN_140033559("..\\Plugins\\MovieScene\\SequencerScripting\\Source\\SequencerScripting/Private/KeysAndChannels/MovieSceneScriptingFloat.h"
                ,0x5b,L"Pure virtual not implemented (%s)",
                L"UMovieSceneScriptingFloatKey::GetArriveTangent");
  return 0;
}



// FUNCTION 148f32562 FUN_148f32562 body=41 status=ok
// SIG undefined FUN_148f32562(void)

void FUN_148f32562(void)

{
  FUN_140033559("..\\Plugins\\MovieScene\\SequencerScripting\\Source\\SequencerScripting/Private/KeysAndChannels/MovieSceneScriptingFloat.h"
                ,0x62,L"Pure virtual not implemented (%s)",
                L"UMovieSceneScriptingFloatKey::SetArriveTangent");
  return;
}



// FUNCTION 148f3258c FUN_148f3258c body=43 status=ok
// SIG undefined FUN_148f3258c(void)

undefined8 FUN_148f3258c(void)

{
  FUN_140033559("..\\Plugins\\MovieScene\\SequencerScripting\\Source\\SequencerScripting/Private/KeysAndChannels/MovieSceneScriptingFloat.h"
                ,0x69,L"Pure virtual not implemented (%s)",
                L"UMovieSceneScriptingFloatKey::GetLeaveTangent");
  return 0;
}



// FUNCTION 148f325b8 FUN_148f325b8 body=41 status=ok
// SIG undefined FUN_148f325b8(void)

void FUN_148f325b8(void)

{
  FUN_140033559("..\\Plugins\\MovieScene\\SequencerScripting\\Source\\SequencerScripting/Private/KeysAndChannels/MovieSceneScriptingFloat.h"
                ,0x70,L"Pure virtual not implemented (%s)",
                L"UMovieSceneScriptingFloatKey::SetLeaveTangent");
  return;
}



// FUNCTION 148f325e2 FUN_148f325e2 body=42 status=ok
// SIG undefined FUN_148f325e2(void)

undefined8 FUN_148f325e2(void)

{
  FUN_140033559("..\\Plugins\\MovieScene\\SequencerScripting\\Source\\SequencerScripting/Private/KeysAndChannels/MovieSceneScriptingFloat.h"
                ,0x77,L"Pure virtual not implemented (%s)",
                L"UMovieSceneScriptingFloatKey::GetTangentWeightMode");
  return 0;
}



// FUNCTION 148f3260c FUN_148f3260c body=41 status=ok
// SIG undefined FUN_148f3260c(void)

void FUN_148f3260c(void)

{
  FUN_140033559("..\\Plugins\\MovieScene\\SequencerScripting\\Source\\SequencerScripting/Private/KeysAndChannels/MovieSceneScriptingFloat.h"
                ,0x7e,L"Pure virtual not implemented (%s)",
                L"UMovieSceneScriptingFloatKey::SetTangentWeightMode");
  return;
}



// FUNCTION 148f32636 FUN_148f32636 body=43 status=ok
// SIG undefined FUN_148f32636(void)

undefined8 FUN_148f32636(void)

{
  FUN_140033559("..\\Plugins\\MovieScene\\SequencerScripting\\Source\\SequencerScripting/Private/KeysAndChannels/MovieSceneScriptingFloat.h"
                ,0x85,L"Pure virtual not implemented (%s)",
                L"UMovieSceneScriptingFloatKey::GetArriveTangentWeight");
  return 0;
}



// FUNCTION 148f32662 FUN_148f32662 body=41 status=ok
// SIG undefined FUN_148f32662(void)

void FUN_148f32662(void)

{
  FUN_140033559("..\\Plugins\\MovieScene\\SequencerScripting\\Source\\SequencerScripting/Private/KeysAndChannels/MovieSceneScriptingFloat.h"
                ,0x8c,L"Pure virtual not implemented (%s)",
                L"UMovieSceneScriptingFloatKey::SetArriveTangentWeight");
  return;
}



// FUNCTION 148f3268c FUN_148f3268c body=43 status=ok
// SIG undefined FUN_148f3268c(void)

undefined8 FUN_148f3268c(void)

{
  FUN_140033559("..\\Plugins\\MovieScene\\SequencerScripting\\Source\\SequencerScripting/Private/KeysAndChannels/MovieSceneScriptingFloat.h"
                ,0x93,L"Pure virtual not implemented (%s)",
                L"UMovieSceneScriptingFloatKey::GetLeaveTangentWeight");
  return 0;
}



// FUNCTION 148f326b8 FUN_148f326b8 body=41 status=ok
// SIG undefined FUN_148f326b8(void)

void FUN_148f326b8(void)

{
  FUN_140033559("..\\Plugins\\MovieScene\\SequencerScripting\\Source\\SequencerScripting/Private/KeysAndChannels/MovieSceneScriptingFloat.h"
                ,0x9a,L"Pure virtual not implemented (%s)",
                L"UMovieSceneScriptingFloatKey::SetLeaveTangentWeight");
  return;
}



// FUNCTION 148f326e2 FUN_148f326e2 body=45 status=ok
// SIG undefined FUN_148f326e2(void)

undefined8 FUN_148f326e2(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  FUN_148f36722(param_1 + 0x40,param_2,*(undefined4 *)(param_1 + 0x28),
                *(undefined8 *)(param_1 + 0x2c),param_3);
  return param_2;
}



// FUNCTION 148f32710 FUN_148f32710 body=55 status=ok
// SIG undefined FUN_148f32710(void)

void FUN_148f32710(longlong param_1,undefined4 *param_2,undefined4 param_3,undefined1 param_4)

{
  FUN_148f3681c(param_1 + 0x40,*(undefined4 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x2c),
                *(undefined8 *)(param_1 + 0x34),*param_2,param_4,param_3);
  return;
}



// FUNCTION 148f32748 FUN_148f32748 body=73 status=ok
// SIG undefined FUN_148f32748(void)

void FUN_148f32748(longlong param_1)

{
  undefined1 auStack_58 [44];
  undefined4 local_2c [7];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148f369c6(param_1 + 0x40,local_2c,*(undefined4 *)(param_1 + 0x28));
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_2c[0]);
}



// FUNCTION 148f32792 FUN_148f32792 body=114 status=ok
// SIG undefined FUN_148f32792(void)

void FUN_148f32792(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_78 [44];
  undefined4 local_4c [7];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148f369c6(param_1 + 0x40,local_4c,*(undefined4 *)(param_1 + 0x28));
  local_4c[0] = param_2;
  FUN_148f36ac4(param_1 + 0x40,*(undefined4 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x34),
                local_4c);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f32806 FUN_148f32806 body=73 status=ok
// SIG undefined FUN_148f32806(void)

undefined1 FUN_148f32806(longlong param_1)

{
  undefined1 auStack_58 [44];
  undefined1 local_2c [24];
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148f369c6(param_1 + 0x40,local_2c,*(undefined4 *)(param_1 + 0x28));
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f32850 FUN_148f32850 body=107 status=ok
// SIG undefined FUN_148f32850(void)

void FUN_148f32850(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_68 [36];
  undefined1 local_44 [24];
  undefined1 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148f369c6(param_1 + 0x40,local_44,*(undefined4 *)(param_1 + 0x28));
  local_2c = param_2;
  FUN_148f36ac4(param_1 + 0x40,*(undefined4 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x34),
                local_44);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f328bc FUN_148f328bc body=73 status=ok
// SIG undefined FUN_148f328bc(void)

undefined1 FUN_148f328bc(longlong param_1)

{
  undefined1 auStack_58 [44];
  undefined1 local_2c [25];
  undefined1 local_13;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148f369c6(param_1 + 0x40,local_2c,*(undefined4 *)(param_1 + 0x28));
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f32906 FUN_148f32906 body=107 status=ok
// SIG undefined FUN_148f32906(void)

void FUN_148f32906(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_68 [36];
  undefined1 local_44 [25];
  undefined1 local_2b;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148f369c6(param_1 + 0x40,local_44,*(undefined4 *)(param_1 + 0x28));
  local_2b = param_2;
  FUN_148f36ac4(param_1 + 0x40,*(undefined4 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x34),
                local_44);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f32972 FUN_148f32972 body=74 status=ok
// SIG undefined FUN_148f32972(void)

void FUN_148f32972(longlong param_1)

{
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  undefined4 local_28;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148f369c6(param_1 + 0x40,local_2c,*(undefined4 *)(param_1 + 0x28));
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28);
}



// FUNCTION 148f329be FUN_148f329be body=115 status=ok
// SIG undefined FUN_148f329be(void)

void FUN_148f329be(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_78 [44];
  undefined1 local_4c [4];
  undefined4 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148f369c6(param_1 + 0x40,local_4c,*(undefined4 *)(param_1 + 0x28));
  local_48 = param_2;
  FUN_148f36ac4(param_1 + 0x40,*(undefined4 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x34),
                local_4c);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f32a32 FUN_148f32a32 body=74 status=ok
// SIG undefined FUN_148f32a32(void)

void FUN_148f32a32(longlong param_1)

{
  undefined1 auStack_58 [44];
  undefined1 local_2c [8];
  undefined4 local_24;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148f369c6(param_1 + 0x40,local_2c,*(undefined4 *)(param_1 + 0x28));
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_24);
}



// FUNCTION 148f32a7e FUN_148f32a7e body=115 status=ok
// SIG undefined FUN_148f32a7e(void)

void FUN_148f32a7e(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_78 [44];
  undefined1 local_4c [8];
  undefined4 local_44;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148f369c6(param_1 + 0x40,local_4c,*(undefined4 *)(param_1 + 0x28));
  local_44 = param_2;
  FUN_148f36ac4(param_1 + 0x40,*(undefined4 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x34),
                local_4c);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f32af2 FUN_148f32af2 body=73 status=ok
// SIG undefined FUN_148f32af2(void)

undefined1 FUN_148f32af2(longlong param_1)

{
  undefined1 auStack_58 [44];
  undefined1 local_2c [20];
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148f369c6(param_1 + 0x40,local_2c,*(undefined4 *)(param_1 + 0x28));
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f32b3c FUN_148f32b3c body=107 status=ok
// SIG undefined FUN_148f32b3c(void)

void FUN_148f32b3c(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_68 [36];
  undefined1 local_44 [20];
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148f369c6(param_1 + 0x40,local_44,*(undefined4 *)(param_1 + 0x28));
  local_30 = param_2;
  FUN_148f36ac4(param_1 + 0x40,*(undefined4 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x34),
                local_44);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f32ba8 FUN_148f32ba8 body=74 status=ok
// SIG undefined FUN_148f32ba8(void)

void FUN_148f32ba8(longlong param_1)

{
  undefined1 auStack_58 [44];
  undefined1 local_2c [12];
  undefined4 local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148f369c6(param_1 + 0x40,local_2c,*(undefined4 *)(param_1 + 0x28));
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20);
}



// FUNCTION 148f32bf4 FUN_148f32bf4 body=115 status=ok
// SIG undefined FUN_148f32bf4(void)

void FUN_148f32bf4(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_78 [44];
  undefined1 local_4c [12];
  undefined4 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148f369c6(param_1 + 0x40,local_4c,*(undefined4 *)(param_1 + 0x28));
  local_40 = param_2;
  FUN_148f36ac4(param_1 + 0x40,*(undefined4 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x34),
                local_4c);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f32c68 FUN_148f32c68 body=74 status=ok
// SIG undefined FUN_148f32c68(void)

void FUN_148f32c68(longlong param_1)

{
  undefined1 auStack_58 [44];
  undefined1 local_2c [16];
  undefined4 local_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148f369c6(param_1 + 0x40,local_2c,*(undefined4 *)(param_1 + 0x28));
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_1c);
}



// FUNCTION 148f32cb4 FUN_148f32cb4 body=115 status=ok
// SIG undefined FUN_148f32cb4(void)

void FUN_148f32cb4(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_78 [44];
  undefined1 local_4c [16];
  undefined4 local_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148f369c6(param_1 + 0x40,local_4c,*(undefined4 *)(param_1 + 0x28));
  local_3c = param_2;
  FUN_148f36ac4(param_1 + 0x40,*(undefined4 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x34),
                local_4c);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f32d28 FUN_148f32d28 body=45 status=ok
// SIG undefined FUN_148f32d28(void)

undefined8 FUN_148f32d28(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  FUN_148f2dc2c(param_1 + 0x40,param_2,*(undefined4 *)(param_1 + 0x28),
                *(undefined8 *)(param_1 + 0x2c),param_3);
  return param_2;
}



// FUNCTION 148f32d56 FUN_148f32d56 body=55 status=ok
// SIG undefined FUN_148f32d56(void)

void FUN_148f32d56(longlong param_1,undefined4 *param_2,undefined4 param_3,undefined1 param_4)

{
  FUN_148f2bb9e(param_1 + 0x40,*(undefined4 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x2c),
                *(undefined8 *)(param_1 + 0x34),*param_2,param_4,param_3);
  return;
}



// FUNCTION 148f32d8e FUN_148f32d8e body=73 status=ok
// SIG undefined FUN_148f32d8e(void)

void FUN_148f32d8e(longlong param_1)

{
  undefined1 auStack_58 [40];
  double local_30 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148f2b970(param_1 + 0x40,local_30,*(undefined4 *)(param_1 + 0x28));
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0((float)local_30[0]);
}



// FUNCTION 148f32dd8 FUN_148f32dd8 body=142 status=ok
// SIG undefined FUN_148f32dd8(void)

void FUN_148f32dd8(longlong param_1,float param_2)

{
  undefined1 auStack_98 [32];
  double local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  double local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_148f2b970(param_1 + 0x40,&local_50,*(undefined4 *)(param_1 + 0x28));
  local_50 = (double)param_2;
  local_68 = local_40;
  uStack_60 = uStack_38;
  uStack_70 = uStack_48;
  uStack_6c = uStack_44;
  local_78 = local_50;
  FUN_148f2ba62(param_1 + 0x40,*(undefined4 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x34));
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f32e68 FUN_148f32e68 body=73 status=ok
// SIG undefined FUN_148f32e68(void)

undefined1 FUN_148f32e68(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined1 local_30 [28];
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148f2b970(param_1 + 0x40,local_30,*(undefined4 *)(param_1 + 0x28));
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f32eb2 FUN_148f32eb2 body=159 status=ok
// SIG undefined FUN_148f32eb2(void)

void FUN_148f32eb2(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined2 local_4b;
  undefined1 local_49;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined2 local_2b;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_148f2b970(param_1 + 0x40,&local_48,*(undefined4 *)(param_1 + 0x28));
  local_68 = local_48;
  uStack_64 = uStack_44;
  uStack_60 = uStack_40;
  uStack_5c = uStack_3c;
  local_58 = local_38;
  local_50 = local_30;
  local_4b = local_2b;
  local_49 = local_29;
  local_4c = param_2;
  local_2c = param_2;
  FUN_148f2ba62(param_1 + 0x40,*(undefined4 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x34));
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f32f52 FUN_148f32f52 body=73 status=ok
// SIG undefined FUN_148f32f52(void)

undefined1 FUN_148f32f52(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined1 local_30 [29];
  undefined1 local_13;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148f2b970(param_1 + 0x40,local_30,*(undefined4 *)(param_1 + 0x28));
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f32f9c FUN_148f32f9c body=159 status=ok
// SIG undefined FUN_148f32f9c(void)

void FUN_148f32f9c(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined2 local_4a;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined2 local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_148f2b970(param_1 + 0x40,&local_48,*(undefined4 *)(param_1 + 0x28));
  local_68 = local_48;
  uStack_64 = uStack_44;
  uStack_60 = uStack_40;
  uStack_5c = uStack_3c;
  local_58 = local_38;
  local_50 = local_30;
  local_4c = local_2c;
  local_4a = local_2a;
  local_4b = param_2;
  local_2b = param_2;
  FUN_148f2ba62(param_1 + 0x40,*(undefined4 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x34));
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f3303c FUN_148f3303c body=74 status=ok
// SIG undefined FUN_148f3303c(void)

void FUN_148f3303c(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  undefined4 local_28;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148f2b970(param_1 + 0x40,local_30,*(undefined4 *)(param_1 + 0x28));
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28);
}



// FUNCTION 148f33088 FUN_148f33088 body=139 status=ok
// SIG undefined FUN_148f33088(void)

void FUN_148f33088(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_148f2b970(param_1 + 0x40,&local_50,*(undefined4 *)(param_1 + 0x28));
  local_68 = local_40;
  uStack_60 = uStack_38;
  local_78 = local_50;
  uStack_74 = uStack_4c;
  uStack_6c = uStack_44;
  uStack_70 = param_2;
  uStack_48 = param_2;
  FUN_148f2ba62(param_1 + 0x40,*(undefined4 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x34));
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f33114 FUN_148f33114 body=74 status=ok
// SIG undefined FUN_148f33114(void)

void FUN_148f33114(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined1 local_30 [12];
  undefined4 local_24;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148f2b970(param_1 + 0x40,local_30,*(undefined4 *)(param_1 + 0x28));
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_24);
}



// FUNCTION 148f33160 FUN_148f33160 body=139 status=ok
// SIG undefined FUN_148f33160(void)

void FUN_148f33160(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_148f2b970(param_1 + 0x40,&local_50,*(undefined4 *)(param_1 + 0x28));
  local_68 = local_40;
  uStack_60 = uStack_38;
  local_78 = local_50;
  uStack_74 = uStack_4c;
  uStack_70 = uStack_48;
  uStack_6c = param_2;
  uStack_44 = param_2;
  FUN_148f2ba62(param_1 + 0x40,*(undefined4 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x34));
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f331ec FUN_148f331ec body=73 status=ok
// SIG undefined FUN_148f331ec(void)

undefined1 FUN_148f331ec(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined1 local_30 [24];
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148f2b970(param_1 + 0x40,local_30,*(undefined4 *)(param_1 + 0x28));
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


