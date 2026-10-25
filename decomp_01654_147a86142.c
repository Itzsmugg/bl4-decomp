// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147a86142 FUN_147a86142 body=391 status=ok
// SIG undefined FUN_147a86142(void)

void FUN_147a86142(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  int *piVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
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
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar4 = &local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
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
  puVar3 = &local_98;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = (**(code **)(*param_1 + 0xa0))(param_1,plVar4,puVar3);
  *param_3 = uVar2;
  if (local_38 != 0) {
    piVar1 = (int *)(local_38 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a862d0 FUN_147a862d0 body=391 status=ok
// SIG undefined FUN_147a862d0(void)

void FUN_147a862d0(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  int *piVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
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
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar4 = &local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
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
  puVar3 = &local_98;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = (**(code **)(*param_1 + 0x80))(param_1,plVar4,puVar3);
  *param_3 = uVar2;
  if (local_38 != 0) {
    piVar1 = (int *)(local_38 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a8645e FUN_147a8645e body=199 status=ok
// SIG undefined FUN_147a8645e(void)

void FUN_147a8645e(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  int *piVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
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
  plVar3 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar3 = &local_30;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = (**(code **)(*param_1 + 0x10))(param_1,plVar3);
  *param_3 = uVar2;
  if (local_30 != 0) {
    piVar1 = (int *)(local_30 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a86526 FUN_147a86526 body=193 status=ok
// SIG undefined FUN_147a86526(void)

void FUN_147a86526(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
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
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = &local_28;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x100))(param_1,plVar2);
  if (local_28 != 0) {
    piVar1 = (int *)(local_28 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a865e8 FUN_147a865e8 body=193 status=ok
// SIG undefined FUN_147a865e8(void)

void FUN_147a865e8(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
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
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = &local_28;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xf0))(param_1,plVar2);
  if (local_28 != 0) {
    piVar1 = (int *)(local_28 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a866aa FUN_147a866aa body=193 status=ok
// SIG undefined FUN_147a866aa(void)

void FUN_147a866aa(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
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
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = &local_28;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xe0))(param_1,plVar2);
  if (local_28 != 0) {
    piVar1 = (int *)(local_28 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a8676c FUN_147a8676c body=309 status=ok
// SIG undefined FUN_147a8676c(void)

void FUN_147a8676c(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
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
  plVar2 = &local_30;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x1a8))(param_1,&local_40,plVar2,local_38);
  *param_3 = local_40;
  if (local_30 != 0) {
    piVar1 = (int *)(local_30 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a868a8 FUN_147a868a8 body=309 status=ok
// SIG undefined FUN_147a868a8(void)

void FUN_147a868a8(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  int *piVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  undefined1 auStack_78 [40];
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar4 = &local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  puVar3 = local_50;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = (**(code **)(*param_1 + 0xd0))(param_1,plVar4,puVar3);
  *param_3 = uVar2;
  if (local_38 != 0) {
    piVar1 = (int *)(local_38 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a869e4 FUN_147a869e4 body=391 status=ok
// SIG undefined FUN_147a869e4(void)

void FUN_147a869e4(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  int *piVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
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
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar4 = &local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
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
  puVar3 = &local_98;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = (**(code **)(*param_1 + 0xb0))(param_1,plVar4,puVar3);
  *param_3 = uVar2;
  if (local_38 != 0) {
    piVar1 = (int *)(local_38 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a86b72 FUN_147a86b72 body=391 status=ok
// SIG undefined FUN_147a86b72(void)

void FUN_147a86b72(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  int *piVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
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
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar4 = &local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
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
  puVar3 = &local_98;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = (**(code **)(*param_1 + 0x90))(param_1,plVar4,puVar3);
  *param_3 = uVar2;
  if (local_38 != 0) {
    piVar1 = (int *)(local_38 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a86cfe FUN_147a86cfe body=121 status=ok
// SIG undefined FUN_147a86cfe(void)

ulonglong FUN_147a86cfe(longlong *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_78 [39];
  byte local_51;
  undefined1 local_50 [24];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = (**(code **)(*param_1 + 0x58))(param_1,param_2,local_50);
  if (cVar1 != '\0') {
    local_51 = 0;
    cVar1 = FUN_1434a2cf0(param_3,local_50,local_38);
    if (cVar1 != '\0') {
      uVar2 = CONCAT71((int7)((param_4 & 0xffffffff) >> 8),
                       (byte)(param_4 & 0xffffffff) ^ 1 | local_51);
      goto LAB_147a86d54;
    }
  }
  uVar2 = 0;
LAB_147a86d54:
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2 & 0xffffffffffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a86d78 FUN_147a86d78 body=392 status=ok
// SIG undefined FUN_147a86d78(void)

undefined8 FUN_147a86d78(longlong *param_1,undefined8 param_2,double *param_3,char param_4)

{
  double dVar1;
  char cVar2;
  undefined8 uVar3;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_b8 [32];
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  ulonglong local_60;
  undefined8 uVar4;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar2 = (**(code **)(*param_1 + 0x58))(param_1,param_2,&local_98);
  if (cVar2 == '\0') {
LAB_147a86e8b:
    uVar4 = 0;
  }
  else {
    dVar5 = local_88 + local_70;
    dVar6 = local_90 + local_78;
    dVar7 = local_98 + local_80;
    local_88 = local_88 - local_70;
    local_90 = local_90 - local_78;
    local_98 = local_98 - local_80;
    dVar1 = *param_3;
    if (param_4 == '\0') {
      uVar3 = 0;
      uVar4 = 0;
      if ((((dVar7 < dVar1) || (uVar4 = uVar3, param_3[3] <= local_98 && local_98 != param_3[3])) ||
          (dVar6 < param_3[1])) ||
         (((param_3[4] <= local_90 && local_90 != param_3[4] || (dVar5 < param_3[2])) ||
          (param_3[5] <= local_88 && local_88 != param_3[5])))) goto LAB_147a86e8d;
    }
    else {
      if (((local_98 <= dVar1) || (param_3[3] <= local_98)) ||
         ((local_90 <= param_3[1] || ((param_3[4] <= local_90 || (local_88 <= param_3[2]))))))
      goto LAB_147a86e8b;
      uVar4 = 0;
      uVar3 = 0;
      if (((((param_3[5] <= local_88) || (dVar7 <= dVar1)) || (param_3[3] <= dVar7)) ||
          ((uVar4 = uVar3, dVar6 <= param_3[1] || (param_3[4] <= dVar6)))) ||
         ((dVar5 <= param_3[2] || (param_3[5] <= dVar5)))) goto LAB_147a86e8d;
    }
    uVar4 = 1;
  }
LAB_147a86e8d:
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 147a86f02 FUN_147a86f02 body=82 status=ok
// SIG undefined FUN_147a86f02(void)

undefined8 * FUN_147a86f02(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  *param_1 = 0;
  lVar1 = *param_2;
  uVar2 = (ulonglong)(param_2[1] - lVar1) >> 3;
  *(int *)(param_1 + 1) = (int)uVar2;
  if ((int)uVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_147a8f72c(param_1,uVar2 & 0xffffffff);
    FUN_147a8f785(*param_1,lVar1,uVar2 & 0xffffffff);
  }
  return param_1;
}



// FUNCTION 147a86f54 FUN_147a86f54 body=134 status=ok
// SIG undefined FUN_147a86f54(void)

undefined4 FUN_147a86f54(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((longlong *)*param_2 != (longlong *)0x0) && (lVar1 = *(longlong *)*param_2, lVar1 != 0)) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
    local_20 = lVar1;
    if (lVar1 != 0) {
      uVar2 = (**(code **)(*param_1 + 0x18))(param_1,&local_20);
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + -1;
        UNLOCK();
      }
      goto LAB_147a86fbb;
    }
  }
  uVar2 = 0;
  FUN_1415b7ec4(L"InElementHandle is not a valid handle.",2,0);
LAB_147a86fbb:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a86fdc FUN_147a86fdc body=134 status=ok
// SIG undefined FUN_147a86fdc(void)

undefined4 FUN_147a86fdc(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((longlong *)*param_2 != (longlong *)0x0) && (lVar1 = *(longlong *)*param_2, lVar1 != 0)) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
    local_20 = lVar1;
    if (lVar1 != 0) {
      uVar2 = (**(code **)(*param_1 + 0x28))(param_1,&local_20);
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + -1;
        UNLOCK();
      }
      goto LAB_147a87043;
    }
  }
  uVar2 = 0;
  FUN_1415b7ec4(L"InElementHandle is not a valid handle.",2,0);
LAB_147a87043:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a87064 FUN_147a87064 body=136 status=ok
// SIG undefined FUN_147a87064(void)

undefined8 FUN_147a87064(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((longlong *)*param_2 != (longlong *)0x0) && (lVar1 = *(longlong *)*param_2, lVar1 != 0)) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
    local_20 = lVar1;
    if (lVar1 != 0) {
      uVar2 = (**(code **)(*param_1 + 0x38))(param_1,&local_20);
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + -1;
        UNLOCK();
      }
      goto LAB_147a870cc;
    }
  }
  uVar2 = 0;
  FUN_1415b7ec4(L"InElementHandle is not a valid handle.",2,0);
LAB_147a870cc:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a870ee FUN_147a870ee body=136 status=ok
// SIG undefined FUN_147a870ee(void)

undefined8 FUN_147a870ee(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((longlong *)*param_2 != (longlong *)0x0) && (lVar1 = *(longlong *)*param_2, lVar1 != 0)) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
    local_20 = lVar1;
    if (lVar1 != 0) {
      uVar2 = (**(code **)(*param_1 + 0x48))(param_1,&local_20);
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + -1;
        UNLOCK();
      }
      goto LAB_147a87156;
    }
  }
  uVar2 = 0;
  FUN_1415b7ec4(L"InElementHandle is not a valid handle.",2,0);
LAB_147a87156:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a87178 FUN_147a87178 body=134 status=ok
// SIG undefined FUN_147a87178(void)

undefined4 FUN_147a87178(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((longlong *)*param_2 != (longlong *)0x0) && (lVar1 = *(longlong *)*param_2, lVar1 != 0)) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
    local_20 = lVar1;
    if (lVar1 != 0) {
      uVar2 = (**(code **)(*param_1 + 0x58))(param_1,&local_20);
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + -1;
        UNLOCK();
      }
      goto LAB_147a871df;
    }
  }
  uVar2 = 0;
  FUN_1415b7ec4(L"InElementHandle is not a valid handle.",2,0);
LAB_147a871df:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a87200 FUN_147a87200 body=134 status=ok
// SIG undefined FUN_147a87200(void)

undefined4 FUN_147a87200(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((longlong *)*param_2 != (longlong *)0x0) && (lVar1 = *(longlong *)*param_2, lVar1 != 0)) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
    local_20 = lVar1;
    if (lVar1 != 0) {
      uVar2 = (**(code **)(*param_1 + 0x68))(param_1,&local_20);
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + -1;
        UNLOCK();
      }
      goto LAB_147a87267;
    }
  }
  uVar2 = 0;
  FUN_1415b7ec4(L"InElementHandle is not a valid handle.",2,0);
LAB_147a87267:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a87288 FUN_147a87288 body=134 status=ok
// SIG undefined FUN_147a87288(void)

undefined4 FUN_147a87288(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((longlong *)*param_2 != (longlong *)0x0) && (lVar1 = *(longlong *)*param_2, lVar1 != 0)) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
    local_20 = lVar1;
    if (lVar1 != 0) {
      uVar2 = (**(code **)(*param_1 + 0x78))(param_1,&local_20);
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + -1;
        UNLOCK();
      }
      goto LAB_147a872ef;
    }
  }
  uVar2 = 0;
  FUN_1415b7ec4(L"InElementHandle is not a valid handle.",2,0);
LAB_147a872ef:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a87310 FUN_147a87310 body=137 status=ok
// SIG undefined FUN_147a87310(void)

undefined4 FUN_147a87310(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((longlong *)*param_2 != (longlong *)0x0) && (lVar1 = *(longlong *)*param_2, lVar1 != 0)) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
    local_20 = lVar1;
    if (lVar1 != 0) {
      uVar2 = (**(code **)(*param_1 + 0x88))(param_1,&local_20);
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + -1;
        UNLOCK();
      }
      goto LAB_147a8737a;
    }
  }
  uVar2 = 0;
  FUN_1415b7ec4(L"InElementHandle is not a valid handle.",2,0);
LAB_147a8737a:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a8739a FUN_147a8739a body=137 status=ok
// SIG undefined FUN_147a8739a(void)

undefined4 FUN_147a8739a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((longlong *)*param_2 != (longlong *)0x0) && (lVar1 = *(longlong *)*param_2, lVar1 != 0)) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
    local_20 = lVar1;
    if (lVar1 != 0) {
      uVar2 = (**(code **)(*param_1 + 0x98))(param_1,&local_20);
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + -1;
        UNLOCK();
      }
      goto LAB_147a87404;
    }
  }
  uVar2 = 0;
  FUN_1415b7ec4(L"InElementHandle is not a valid handle.",2,0);
LAB_147a87404:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a87424 FUN_147a87424 body=137 status=ok
// SIG undefined FUN_147a87424(void)

undefined4 FUN_147a87424(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((longlong *)*param_2 != (longlong *)0x0) && (lVar1 = *(longlong *)*param_2, lVar1 != 0)) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
    local_20 = lVar1;
    if (lVar1 != 0) {
      uVar2 = (**(code **)(*param_1 + 0xa8))(param_1,&local_20);
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + -1;
        UNLOCK();
      }
      goto LAB_147a8748e;
    }
  }
  uVar2 = 0;
  FUN_1415b7ec4(L"InElementHandle is not a valid handle.",2,0);
LAB_147a8748e:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a874ae FUN_147a874ae body=137 status=ok
// SIG undefined FUN_147a874ae(void)

undefined4 FUN_147a874ae(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((longlong *)*param_2 != (longlong *)0x0) && (lVar1 = *(longlong *)*param_2, lVar1 != 0)) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
    local_20 = lVar1;
    if (lVar1 != 0) {
      uVar2 = (**(code **)(*param_1 + 0xb8))(param_1,&local_20);
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + -1;
        UNLOCK();
      }
      goto LAB_147a87518;
    }
  }
  uVar2 = 0;
  FUN_1415b7ec4(L"InElementHandle is not a valid handle.",2,0);
LAB_147a87518:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a87538 FUN_147a87538 body=137 status=ok
// SIG undefined FUN_147a87538(void)

undefined4 FUN_147a87538(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((longlong *)*param_2 != (longlong *)0x0) && (lVar1 = *(longlong *)*param_2, lVar1 != 0)) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
    local_20 = lVar1;
    if (lVar1 != 0) {
      uVar2 = (**(code **)(*param_1 + 200))(param_1,&local_20);
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + -1;
        UNLOCK();
      }
      goto LAB_147a875a2;
    }
  }
  uVar2 = 0;
  FUN_1415b7ec4(L"InElementHandle is not a valid handle.",2,0);
LAB_147a875a2:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a875c2 FUN_147a875c2 body=137 status=ok
// SIG undefined FUN_147a875c2(void)

undefined4 FUN_147a875c2(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((longlong *)*param_2 != (longlong *)0x0) && (lVar1 = *(longlong *)*param_2, lVar1 != 0)) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
    local_20 = lVar1;
    if (lVar1 != 0) {
      uVar2 = (**(code **)(*param_1 + 0xd8))(param_1,&local_20);
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + -1;
        UNLOCK();
      }
      goto LAB_147a8762c;
    }
  }
  uVar2 = 0;
  FUN_1415b7ec4(L"InElementHandle is not a valid handle.",2,0);
LAB_147a8762c:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a8764c FUN_147a8764c body=130 status=ok
// SIG undefined FUN_147a8764c(void)

void FUN_147a8764c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (((longlong *)*param_2 != (longlong *)0x0) && (lVar1 = *(longlong *)*param_2, lVar1 != 0)) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
    local_18 = lVar1;
    if (lVar1 != 0) {
      (**(code **)(*param_1 + 0xe8))(param_1,&local_18);
      if (local_18 != 0) {
        LOCK();
        *(int *)(local_18 + 0xc) = *(int *)(local_18 + 0xc) + -1;
        UNLOCK();
      }
      if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 147a876e2 FUN_147a876e2 body=130 status=ok
// SIG undefined FUN_147a876e2(void)

void FUN_147a876e2(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (((longlong *)*param_2 != (longlong *)0x0) && (lVar1 = *(longlong *)*param_2, lVar1 != 0)) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
    local_18 = lVar1;
    if (lVar1 != 0) {
      (**(code **)(*param_1 + 0xf8))(param_1,&local_18);
      if (local_18 != 0) {
        LOCK();
        *(int *)(local_18 + 0xc) = *(int *)(local_18 + 0xc) + -1;
        UNLOCK();
      }
      if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 147a87778 FUN_147a87778 body=130 status=ok
// SIG undefined FUN_147a87778(void)

void FUN_147a87778(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (((longlong *)*param_2 != (longlong *)0x0) && (lVar1 = *(longlong *)*param_2, lVar1 != 0)) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
    local_18 = lVar1;
    if (lVar1 != 0) {
      (**(code **)(*param_1 + 0x108))(param_1,&local_18);
      if (local_18 != 0) {
        LOCK();
        *(int *)(local_18 + 0xc) = *(int *)(local_18 + 0xc) + -1;
        UNLOCK();
      }
      if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 147a8780e FUN_147a8780e body=137 status=ok
// SIG undefined FUN_147a8780e(void)

undefined4 FUN_147a8780e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((longlong *)*param_2 != (longlong *)0x0) && (lVar1 = *(longlong *)*param_2, lVar1 != 0)) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
    local_20 = lVar1;
    if (lVar1 != 0) {
      uVar2 = (**(code **)(*param_1 + 0x130))(param_1,&local_20);
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + -1;
        UNLOCK();
      }
      goto LAB_147a87878;
    }
  }
  uVar2 = 0;
  FUN_1415b7ec4(L"InElementHandle is not a valid handle.",2,0);
LAB_147a87878:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a87898 FUN_147a87898 body=190 status=ok
// SIG undefined FUN_147a87898(void)

undefined4
FUN_147a87898(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((longlong *)*param_2 != (longlong *)0x0) && (lVar3 = *(longlong *)*param_2, lVar3 != 0)) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
    local_20 = lVar3;
    if (lVar3 != 0) {
      if (param_3 == 0) {
        pwVar2 = L"InWorld is null";
LAB_147a8793c:
        uVar1 = 0;
        FUN_1415b7ec4(pwVar2,2,0);
      }
      else {
        if (param_4 == 0) {
          pwVar2 = L"InSelectionSet is null";
          goto LAB_147a8793c;
        }
        local_28 = param_5;
        uVar1 = (**(code **)(*param_1 + 0x140))(param_1,&local_20);
        lVar3 = local_20;
        if (local_20 == 0) goto LAB_147a87915;
      }
      LOCK();
      *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + -1;
      UNLOCK();
      goto LAB_147a87915;
    }
  }
  uVar1 = 0;
  FUN_1415b7ec4(L"InElementHandle is not a valid handle.",2,0);
LAB_147a87915:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 147a87958 FUN_147a87958 body=137 status=ok
// SIG undefined FUN_147a87958(void)

undefined4 FUN_147a87958(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((longlong *)*param_2 != (longlong *)0x0) && (lVar1 = *(longlong *)*param_2, lVar1 != 0)) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
    local_20 = lVar1;
    if (lVar1 != 0) {
      uVar2 = (**(code **)(*param_1 + 0x158))(param_1,&local_20);
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + -1;
        UNLOCK();
      }
      goto LAB_147a879c2;
    }
  }
  uVar2 = 0;
  FUN_1415b7ec4(L"InElementHandle is not a valid handle.",2,0);
LAB_147a879c2:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a879e2 FUN_147a879e2 body=438 status=ok
// SIG undefined FUN_147a879e2(void)

longlong *
FUN_147a879e2(longlong *param_1,longlong *param_2,longlong *param_3,longlong param_4,
             undefined8 param_5)

{
  PSRWLOCK SRWLock;
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint *puVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((longlong *)*param_3 != (longlong *)0x0) && (lVar3 = *(longlong *)*param_3, lVar3 != 0)) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
    local_40 = lVar3;
    if (lVar3 != 0) {
      if (param_4 == 0) {
        FUN_1415b7ec4(L"InWorld is null",2,0);
        *param_2 = 0;
      }
      else {
        lVar3 = (**(code **)(*param_1 + 0x1d0))();
        local_58 = param_5;
        (**(code **)(*param_1 + 0x168))(param_1,&local_48,&local_40,param_4);
        puVar4 = &DAT_14c99f64c;
        if (local_48 != 0) {
          puVar4 = (uint *)(local_48 + 8);
        }
        uVar1 = *puVar4;
        if (uVar1 == DAT_14c99f64c) {
LAB_147a87a92:
          *param_2 = 0;
        }
        else {
          SRWLock = (PSRWLOCK)(lVar3 + 0x28);
          AcquireSRWLockShared(SRWLock);
          if (uVar1 < 0x1000000) {
            ReleaseSRWLockShared(SRWLock);
LAB_147a87b2e:
            FUN_1415b7ec4(L"Element type ID has not been registered to this registry!",2,0);
            goto LAB_147a87a92;
          }
          plVar2 = *(longlong **)(lVar3 + 0x30 + (ulonglong)((uVar1 >> 0x18) - 1) * 8);
          ReleaseSRWLockShared(SRWLock);
          if (plVar2 == (longlong *)0x0) goto LAB_147a87b2e;
          (**(code **)(*plVar2 + 0x20))(plVar2,&local_38,*puVar4 & 0xffffff);
          *param_2 = local_38;
          if ((local_38 != 0) && (*(int *)(local_38 + 8) == 0)) {
            FUN_1400020a8();
          }
        }
        if (local_48 != 0) {
          LOCK();
          *(int *)(local_48 + 0xc) = *(int *)(local_48 + 0xc) + -1;
          UNLOCK();
        }
        lVar3 = local_40;
        if (local_40 == 0) goto LAB_147a87acb;
      }
      LOCK();
      *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + -1;
      UNLOCK();
      goto LAB_147a87acb;
    }
  }
  FUN_1415b7ec4(L"InElementHandle is not a valid handle.",2,0);
  *param_2 = 0;
LAB_147a87acb:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147a87b9a FUN_147a87b9a body=137 status=ok
// SIG undefined FUN_147a87b9a(void)

undefined4 FUN_147a87b9a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((longlong *)*param_2 != (longlong *)0x0) && (lVar1 = *(longlong *)*param_2, lVar1 != 0)) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
    local_20 = lVar1;
    if (lVar1 != 0) {
      uVar2 = (**(code **)(*param_1 + 0x1a0))(param_1,&local_20);
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + -1;
        UNLOCK();
      }
      goto LAB_147a87c04;
    }
  }
  uVar2 = 0;
  FUN_1415b7ec4(L"InElementHandle is not a valid handle.",2,0);
LAB_147a87c04:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a87c24 FUN_147a87c24 body=387 status=ok
// SIG undefined FUN_147a87c24(void)

longlong * FUN_147a87c24(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  PSRWLOCK SRWLock;
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint *puVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((longlong *)*param_3 != (longlong *)0x0) && (lVar3 = *(longlong *)*param_3, lVar3 != 0)) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
    local_40 = lVar3;
    if (lVar3 != 0) {
      lVar3 = (**(code **)(*param_1 + 0x1d0))();
      (**(code **)(*param_1 + 0x1b0))(param_1,&local_48,&local_40,param_4);
      puVar4 = &DAT_14c99f64c;
      if (local_48 != 0) {
        puVar4 = (uint *)(local_48 + 8);
      }
      uVar1 = *puVar4;
      if (uVar1 == DAT_14c99f64c) {
LAB_147a87cb9:
        *param_2 = 0;
      }
      else {
        SRWLock = (PSRWLOCK)(lVar3 + 0x28);
        AcquireSRWLockShared(SRWLock);
        if (uVar1 < 0x1000000) {
          ReleaseSRWLockShared(SRWLock);
LAB_147a87d3b:
          FUN_1415b7ec4(L"Element type ID has not been registered to this registry!",2,0);
          goto LAB_147a87cb9;
        }
        plVar2 = *(longlong **)(lVar3 + 0x30 + (ulonglong)((uVar1 >> 0x18) - 1) * 8);
        ReleaseSRWLockShared(SRWLock);
        if (plVar2 == (longlong *)0x0) goto LAB_147a87d3b;
        (**(code **)(*plVar2 + 0x20))(plVar2,&local_38,*puVar4 & 0xffffff);
        *param_2 = local_38;
        if ((local_38 != 0) && (*(int *)(local_38 + 8) == 0)) {
          FUN_1400020a8();
        }
      }
      if (local_48 != 0) {
        LOCK();
        *(int *)(local_48 + 0xc) = *(int *)(local_48 + 0xc) + -1;
        UNLOCK();
      }
      if (local_40 != 0) {
        LOCK();
        *(int *)(local_40 + 0xc) = *(int *)(local_40 + 0xc) + -1;
        UNLOCK();
      }
      goto LAB_147a87cf6;
    }
  }
  FUN_1415b7ec4(L"InElementHandle is not a valid handle.",2,0);
  *param_2 = 0;
LAB_147a87cf6:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a87db2 FUN_147a87db2 body=48 status=ok
// SIG undefined FUN_147a87db2(void)

undefined8 FUN_147a87db2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_147a880e8(param_3);
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  thunk_FUN_146857ca8(param_2,uVar2,0);
  return param_2;
}



// FUNCTION 147a87de6 FUN_147a87de6 body=121 status=ok
// SIG undefined FUN_147a87de6(void)

void FUN_147a87de6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)FUN_147a880e8(param_2);
  if ((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) {
    local_30 = *(undefined8 *)(*plVar1 + 0x10);
    FUN_1401a700c(&local_24,0x69);
    FUN_147a87eda(param_3,local_24,&local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a87e60 FUN_147a87e60 body=121 status=ok
// SIG undefined FUN_147a87e60(void)

void FUN_147a87e60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)FUN_147a880e8(param_2);
  if ((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) {
    local_30 = *(undefined8 *)(*plVar1 + 0x10);
    FUN_1401a700c(&local_24,0x69);
    FUN_147a88044(param_3,local_24,&local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a87eda FUN_147a87eda body=361 status=ok
// SIG undefined FUN_147a87eda(void)

void FUN_147a87eda(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar8 = (ulonglong)uVar1;
  lVar3 = *(longlong *)(param_1 + 8);
  uVar9 = 0;
  if (0 < (int)uVar1) {
    do {
      uVar6 = (int)(uVar8 >> 1) + (int)uVar9;
      lVar11 = (ulonglong)uVar6 * 0x10;
      iVar5 = *(int *)(lVar3 + lVar11) - (int)param_2;
      if (iVar5 == 0) {
        iVar5 = *(int *)(lVar3 + 4 + lVar11);
      }
      uVar10 = (uint)uVar8;
      if (iVar5 < 0) {
        uVar9 = (ulonglong)(uVar6 + (uVar10 & 1));
      }
      uVar8 = uVar8 >> 1;
    } while (1 < uVar10);
  }
  local_30 = param_2;
  if ((int)uVar9 < (int)uVar1) {
    lVar11 = uVar9 * 0x10;
    iVar5 = (int)param_2 - *(int *)(lVar3 + lVar11);
    if (iVar5 == 0) {
      iVar5 = -*(int *)(lVar3 + 4 + lVar11);
    }
    if ((-1 < iVar5) && (plVar7 = (longlong *)(lVar3 + lVar11 + 8), plVar7 != (longlong *)0x0))
    goto LAB_147a87f7e;
  }
  plVar7 = (longlong *)FUN_1470569d0(param_1 + 8,&local_30);
LAB_147a87f7e:
  plVar4 = (longlong *)*plVar7;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)FUN_14001cc68(0x60,0x10);
    *plVar4 = (longlong)&PTR_FUN_14a8caf00;
    lVar3 = FUN_144a797b2();
    plVar4[1] = *(longlong *)(lVar3 + 0x18);
    plVar4[6] = 0;
    *(undefined4 *)(plVar4 + 7) = 0;
    plVar4[2] = 0;
    plVar4[3] = 0;
    *(undefined8 *)((longlong)plVar4 + 0x3c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)plVar4 + 0x44) = 0;
    plVar4[10] = 0;
    *(undefined4 *)(plVar4 + 0xb) = 0;
    puVar2 = (undefined8 *)*plVar7;
    *plVar7 = (longlong)plVar4;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
      plVar4 = (longlong *)*plVar7;
    }
  }
  lVar3 = FUN_144a797b2();
  (**(code **)(*plVar4 + 0x18))(plVar4,param_3,*(undefined8 *)(lVar3 + 0x18));
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a88044 FUN_147a88044 body=164 status=ok
// SIG undefined FUN_147a88044(void)

void FUN_147a88044(longlong param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  longlong *plVar2;
  bool bVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  lVar5 = *(longlong *)(param_1 + 8);
  uVar11 = 0;
  if (0 < (int)uVar1) {
    uVar8 = (ulonglong)uVar1;
    uVar9 = uVar1;
    do {
      uVar8 = uVar8 >> 1;
      uVar10 = (uint)uVar8 + uVar11;
      lVar6 = (ulonglong)uVar10 * 0x10;
      iVar7 = *(int *)(lVar5 + lVar6) - param_2;
      if (iVar7 == 0) {
        iVar7 = *(int *)(lVar5 + 4 + lVar6);
      }
      if (iVar7 < 0) {
        uVar11 = uVar10 + (uVar9 & 1);
      }
      bVar3 = 1 < uVar9;
      uVar9 = (uint)uVar8;
    } while (bVar3);
  }
  if ((int)uVar11 < (int)uVar1) {
    lVar6 = (ulonglong)uVar11 * 0x10;
    param_2 = param_2 - *(int *)(lVar5 + lVar6);
    if (param_2 == 0) {
      param_2 = -*(int *)(lVar5 + 4 + lVar6);
    }
    if ((-1 < param_2) && (puVar4 = (undefined8 *)(lVar5 + lVar6 + 8), puVar4 != (undefined8 *)0x0))
    {
      plVar2 = (longlong *)*puVar4;
      lVar5 = FUN_144a797b2();
                    /* WARNING: Could not recover jumptable at 0x000147a880dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x20))(plVar2,param_3,*(undefined8 *)(lVar5 + 0x18));
      return;
    }
  }
  return;
}



// FUNCTION 147a880e8 FUN_147a880e8 body=281 status=ok
// SIG undefined FUN_147a880e8(void)

undefined8 FUN_147a880e8(longlong *param_1)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  undefined1 local_48 [8];
  undefined2 *local_40;
  int local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_1 == 0) {
    FUN_1415b7ec4(L"Element handle data is null!",2,0);
  }
  else {
    if (DAT_14cad7f28 == *(char *)(*param_1 + 0xb)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
    }
    FUN_147a8dc62(local_48);
    FUN_1400021e4(local_48,&local_40);
    local_58 = &DAT_149dfb77a;
    if (local_38 != 0) {
      local_58 = local_40;
    }
    puVar1 = &DAT_14c99f64c;
    if (*param_1 != 0) {
      puVar1 = (undefined4 *)(*param_1 + 8);
    }
    FUN_140002266(&local_30,L"Element handle data type is \'%d\', but \'%d\' (%s) was requested!",
                  *(undefined1 *)((longlong)puVar1 + 3),DAT_14cad7f28);
    puVar2 = &DAT_149dfb77a;
    if (local_28 != 0) {
      puVar2 = local_30;
    }
    FUN_1415b7ec4(puVar2,2,0);
    if (local_30 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a88218 FUN_147a88218 body=29 status=ok
// SIG undefined FUN_147a88218(void)

undefined8 FUN_147a88218(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_147a880e8(param_2);
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  return uVar2;
}



// FUNCTION 147a8823e FUN_147a8823e body=205 status=ok
// SIG undefined FUN_147a8823e(void)

undefined8 * FUN_147a8823e(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147a8830c(&local_30,param_3);
  if (((local_30 == 0) || (local_28 == -1)) || (local_20 == 0)) {
LAB_147a882b1:
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 6) = 0xffffffff;
    param_2[0xc] = 0;
    param_2[0xd] = 0x200000000;
    *(undefined8 *)((longlong)param_2 + 0x34) = 0;
    *(undefined8 *)((longlong)param_2 + 0x3c) = 0;
    *(undefined8 *)((longlong)param_2 + 0x44) = 0;
    *(undefined8 *)((longlong)param_2 + 0x4c) = 0;
    *(undefined4 *)((longlong)param_2 + 0x54) = 0;
  }
  else {
    lVar1 = *(longlong *)(local_30 + 0x660);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e(lVar1);
    }
    else if (lVar1 == 0) goto LAB_147a882b1;
    thunk_FUN_146857ca8(param_2,lVar1,0);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a8830c FUN_147a8830c body=131 status=ok
// SIG undefined FUN_147a8830c(void)

undefined4 * FUN_147a8830c(undefined4 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_147a88400(param_2);
  if (lVar1 == 0) {
    local_28 = 0;
    uStack_20 = 0xffffffff;
  }
  else {
    FUN_147a813c8();
    FUN_147a8852c(&local_28,lVar1);
  }
  uVar2 = FUN_147a81428(&local_28);
  *param_1 = (undefined4)local_28;
  param_1[1] = local_28._4_4_;
  param_1[2] = (undefined4)uStack_20;
  param_1[3] = uStack_20._4_4_;
  *(undefined8 *)(param_1 + 4) = uVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a88390 FUN_147a88390 body=112 status=ok
// SIG undefined FUN_147a88390(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147a88390(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad7fa8) {
    FUN_144b3d300(&DAT_14cad7fa8);
    if (DAT_14cad7fa8 == -1) {
      DAT_14cad7f90 = 0;
      _DAT_14cad7f98 = 0;
      _DAT_14cad7fa0 = 2;
      atexit(FUN_1434dac20);
      _Init_thread_footer(&DAT_14cad7fa8);
      return;
    }
  }
  return;
}



// FUNCTION 147a88400 FUN_147a88400 body=281 status=ok
// SIG undefined FUN_147a88400(void)

undefined8 FUN_147a88400(longlong *param_1)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  undefined1 local_48 [8];
  undefined2 *local_40;
  int local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_1 == 0) {
    FUN_1415b7ec4(L"Element handle data is null!",2,0);
  }
  else {
    if (DAT_14cad7f78 == *(char *)(*param_1 + 0xb)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
    }
    FUN_147a8f17e(local_48);
    FUN_1400021e4(local_48,&local_40);
    local_58 = &DAT_149dfb77a;
    if (local_38 != 0) {
      local_58 = local_40;
    }
    puVar1 = &DAT_14c99f64c;
    if (*param_1 != 0) {
      puVar1 = (undefined4 *)(*param_1 + 8);
    }
    FUN_140002266(&local_30,L"Element handle data type is \'%d\', but \'%d\' (%s) was requested!",
                  *(undefined1 *)((longlong)puVar1 + 3),DAT_14cad7f78);
    puVar2 = &DAT_149dfb77a;
    if (local_28 != 0) {
      puVar2 = local_30;
    }
    FUN_1415b7ec4(puVar2,2,0);
    if (local_30 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a8852c FUN_147a8852c body=466 status=ok
// SIG undefined FUN_147a8852c(void)

ulonglong * FUN_147a8852c(ulonglong *param_1,ulonglong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  undefined *puVar10;
  longlong lVar11;
  
  if ((*param_2 != 0) && (param_2[1] != 0)) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cad7ff0);
    if (DAT_14cad8020 != DAT_14cad804c) {
      uVar4 = *param_2;
      uVar8 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
      uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
      puVar10 = &DAT_14cad8050;
      if (DAT_14cad8058 != (undefined *)0x0) {
        puVar10 = DAT_14cad8058;
      }
      iVar9 = *(int *)(puVar10 + (ulonglong)(DAT_14cad8060 - 1U & (uVar8 >> 0x10 ^ uVar8)) * 4);
      while (iVar9 != -1) {
        lVar11 = DAT_14cad8018 + (longlong)iVar9 * 0x20;
        if (*(ulonglong *)(DAT_14cad8018 + (longlong)iVar9 * 0x20) == uVar4) {
          if (lVar11 != 0) {
            lVar5 = *(longlong *)(lVar11 + 8);
            plVar6 = *(longlong **)(lVar11 + 0x10);
            if (plVar6 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
              UNLOCK();
            }
            bVar7 = true;
            if ((lVar5 == 0) || (*(int *)(lVar5 + 0x68) == *(int *)(lVar5 + 0x94)))
            goto LAB_147a8862d;
            uVar4 = param_2[1];
            lVar11 = lVar5 + 0x98;
            if (*(longlong *)(lVar5 + 0xa0) != 0) {
              lVar11 = *(longlong *)(lVar5 + 0xa0);
            }
            iVar9 = *(int *)(lVar11 + (ulonglong)
                                      (*(int *)(lVar5 + 0xa8) - 1U &
                                      (int)uVar4 + (int)(uVar4 >> 0x20) * 0x17) * 4);
            if (iVar9 == -1) goto LAB_147a8862d;
            goto LAB_147a886b8;
          }
          break;
        }
        iVar9 = *(int *)(lVar11 + 0x18);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cad7ff0);
  }
  goto LAB_147a8856f;
  while (iVar9 = (int)puVar3[2], iVar9 != -1) {
LAB_147a886b8:
    puVar3 = (ulonglong *)(*(longlong *)(lVar5 + 0x60) + (longlong)iVar9 * 0x18);
    if (*puVar3 == uVar4) {
      if (puVar3 + 1 != (ulonglong *)0x0 && puVar3 != (ulonglong *)0x0) {
        *param_1 = *param_2;
        *(int *)(param_1 + 1) = (int)puVar3[1];
        bVar7 = false;
      }
      break;
    }
  }
LAB_147a8862d:
  if (plVar6 != (longlong *)0x0) {
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
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cad7ff0);
  if (!bVar7) {
    return param_1;
  }
LAB_147a8856f:
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  return param_1;
}



// FUNCTION 147a88702 FUN_147a88702 body=74 status=ok
// SIG undefined FUN_147a88702(void)

undefined8 * FUN_147a88702(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_147a8830c(local_28,param_3);
  *param_2 = 0;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a88752 FUN_147a88752 body=206 status=ok
// SIG undefined FUN_147a88752(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147a88752(void)

{
  _DAT_14cad7fe0 = &PTR_LAB_149e668b0;
  _DAT_14cad7fe8 = 0;
  FUN_1405bceb4(&DAT_14cad7fe0);
  _DAT_14cad7fe0 = &PTR_FUN_14a8c9410;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cad7ff0);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cad7ff0,4000);
  _DAT_14cad8038 = 0;
  _DAT_14cad8040 = 0x8000000000;
  uRam000000014cad8048 = 0xffffffff;
  DAT_14cad8018 = 0;
  _DAT_14cad8020 = 0;
  DAT_14cad8058 = 0;
  DAT_14cad8060 = 0;
  _DAT_14cad8068 = 0;
  uRam000000014cad8070 = 0;
  _DAT_14cad8078 = 2;
  _DAT_14cad807c = 0;
  uRam000000014cad8084 = 0;
  _DAT_14cad808c = 0x200000000;
  _DAT_14cad8094 = 0;
  uRam000000014cad809c = 0;
  _DAT_14cad80a4 = 0;
  _DAT_14cad80a8 = 2;
  _DAT_14cad80b0 = 0;
  return;
}



// FUNCTION 147a88820 FUN_147a88820 body=223 status=ok
// SIG undefined FUN_147a88820(void)

void FUN_147a88820(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a8c9410;
  if (param_1[0x1a] != 0) {
    FUN_14480f766(&DAT_14cae4f38);
    param_1[0x1a] = 0;
  }
  FUN_144760e21(param_1[0x17],*(undefined4 *)(param_1 + 0x18));
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_147a8b55a(param_1 + 7);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  *param_1 = &PTR_LAB_149e668b0;
  FUN_14019e1de(param_1);
  return;
}



// FUNCTION 147a88906 FUN_147a88906 body=120 status=ok
// SIG undefined FUN_147a88906(void)

void FUN_147a88906(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong *local_38;
  int local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147a8830c(&local_38);
  if (((local_38 != (longlong *)0x0) && (local_30 != -1)) && (local_28 != 0)) {
    local_48 = *param_3;
    uStack_44 = param_3[1];
    uStack_40 = param_3[2];
    uStack_3c = param_3[3];
    (**(code **)(*local_38 + 0xb20))(local_38,local_30,&local_48,param_4);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a88980 FUN_147a88980 body=133 status=ok
// SIG undefined FUN_147a88980(void)

void FUN_147a88980(void)

{
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147a8830c(&local_58);
  if (((local_58 != 0) && (local_50 != -1)) && (local_48 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a88a2a FUN_147a88a2a body=165 status=ok
// SIG undefined FUN_147a88a2a(void)

ulonglong FUN_147a88a2a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147a8830c(&local_48);
  if (local_38 != (longlong *)0x0 && (local_40 != -1 && local_48 != 0)) {
    cVar1 = FUN_147061af2(param_1,param_2,param_3,param_4);
    if (cVar1 != '\0') {
      uVar2 = CONCAT71((int7)((ulonglong)param_4 >> 8),1);
      (**(code **)(*local_38 + 0x58))(local_38,&local_48,1);
      goto LAB_147a88aab;
    }
  }
  uVar2 = 0;
LAB_147a88aab:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a88ad0 FUN_147a88ad0 body=162 status=ok
// SIG undefined FUN_147a88ad0(void)

undefined8
FUN_147a88ad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147a8830c(&local_48);
  if (local_38 != (longlong *)0x0 && (local_40 != -1 && local_48 != 0)) {
    cVar1 = FUN_147061b62(param_1,param_2,param_3,param_4);
    if (cVar1 != '\0') {
      (**(code **)(*local_38 + 0x58))(local_38,&local_48,0);
      uVar2 = 1;
      goto LAB_147a88b50;
    }
  }
  uVar2 = 0;
LAB_147a88b50:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a88b78 FUN_147a88b78 body=108 status=ok
// SIG undefined FUN_147a88b78(void)

undefined8 FUN_147a88b78(void)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_147a8830c(&local_28);
  if (local_18 == (longlong *)0x0 || (local_20 == -1 || local_28 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*local_18 + 0x20))(local_18,&local_28);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a88be6 FUN_147a88be6 body=99 status=ok
// SIG undefined FUN_147a88be6(void)

undefined8 FUN_147a88be6(void)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_147a8830c(&local_28);
  if (((local_28 != 0) && (local_20 != -1)) && (local_18 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a88c5c FUN_147a88c5c body=111 status=ok
// SIG undefined FUN_147a88c5c(void)

undefined8 FUN_147a88c5c(void)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_147a8830c(&local_28);
  if ((((local_28 != 0) && (local_20 != -1)) && (local_18 != 0)) &&
     (*(longlong *)(local_28 + 0xa8) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a88cda FUN_147a88cda body=111 status=ok
// SIG undefined FUN_147a88cda(void)

longlong FUN_147a88cda(void)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_147a8830c(&local_28);
  lVar1 = 0;
  if ((((local_28 != 0) && (local_20 != -1)) && (local_18 != 0)) &&
     (lVar1 = *(longlong *)(local_28 + 0xb0), lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a88d58 FUN_147a88d58 body=386 status=ok
// SIG undefined FUN_147a88d58(void)

ulonglong FUN_147a88d58(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 unaff_RBX;
  undefined1 auStack_108 [40];
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
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
  longlong local_48;
  int local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_147a8830c(&local_48);
  if (local_38 == (longlong *)0x0 || (local_40 == -1 || local_48 == 0)) goto LAB_147a88e8c;
  lVar1 = *(longlong *)(local_48 + 0x660);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e(lVar1);
LAB_147a88dd5:
    FUN_144b2ab52(lVar1,&local_a8);
    param_3[6] = local_78;
    param_3[4] = local_88;
    param_3[5] = uStack_80;
    param_3[2] = CONCAT44(uStack_94,local_98);
    param_3[3] = CONCAT44(uStack_8c,uStack_90);
    *param_3 = local_a8;
    param_3[1] = uStack_a0;
  }
  else {
    if (lVar1 != 0) goto LAB_147a88dd5;
    param_3[4] = 0;
    param_3[5] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    *param_3 = 0;
    param_3[1] = 0;
    param_3[6] = 0;
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
  (**(code **)(*local_38 + 0x30))(local_38,&local_48,&local_a8,1);
  FUN_144a80a4c(param_3,&local_e0,&local_a8);
  param_3[6] = local_b0;
  param_3[4] = local_c0;
  param_3[5] = uStack_b8;
  param_3[2] = local_d0;
  param_3[3] = uStack_c8;
  *(undefined4 *)param_3 = local_e0;
  *(undefined4 *)((longlong)param_3 + 4) = uStack_dc;
  *(undefined4 *)(param_3 + 1) = uStack_d8;
  *(undefined4 *)((longlong)param_3 + 0xc) = uStack_d4;
LAB_147a88e8c:
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),
                    local_38 != (longlong *)0x0 && (local_40 != -1 && local_48 != 0)) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a88edc FUN_147a88edc body=116 status=ok
// SIG undefined FUN_147a88edc(void)

undefined8 FUN_147a88edc(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147a8830c(&local_30);
  if (local_20 == (longlong *)0x0 || (local_28 == -1 || local_30 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*local_20 + 0x28))(local_20,&local_30,param_3);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a88f52 FUN_147a88f52 body=119 status=ok
// SIG undefined FUN_147a88f52(void)

undefined8 FUN_147a88f52(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147a8830c(&local_30);
  if (local_20 == (longlong *)0x0 || (local_28 == -1 || local_30 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*local_20 + 0x30))(local_20,&local_30,param_3,1);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a88fca FUN_147a88fca body=129 status=ok
// SIG undefined FUN_147a88fca(void)

undefined8 FUN_147a88fca(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40;
  longlong local_30;
  int local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147a8830c(&local_30);
  if (local_20 == (longlong *)0x0 || (local_28 == -1 || local_30 == 0)) {
    uVar1 = 0;
  }
  else {
    local_40 = 0;
    local_48 = 1;
    uVar1 = (**(code **)(*local_20 + 0x38))(local_20,&local_30,param_3,1);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a8904c FUN_147a8904c body=119 status=ok
// SIG undefined FUN_147a8904c(void)

undefined8 FUN_147a8904c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147a8830c(&local_30);
  if (local_20 == (longlong *)0x0 || (local_28 == -1 || local_30 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*local_20 + 0x30))(local_20,&local_30,param_3,0);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a890c4 FUN_147a890c4 body=129 status=ok
// SIG undefined FUN_147a890c4(void)

undefined8 FUN_147a890c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40;
  longlong local_30;
  int local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147a8830c(&local_30);
  if (local_20 == (longlong *)0x0 || (local_28 == -1 || local_30 == 0)) {
    uVar1 = 0;
  }
  else {
    local_40 = 0;
    local_48 = 1;
    uVar1 = (**(code **)(*local_20 + 0x38))(local_20,&local_30,param_3,0);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a89146 FUN_147a89146 body=104 status=ok
// SIG undefined FUN_147a89146(void)

void FUN_147a89146(void)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_147a8830c(&local_28);
  if (local_18 != (longlong *)0x0 && (local_20 != -1 && local_28 != 0)) {
    (**(code **)(*local_18 + 0x40))(local_18,&local_28);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a891b0 FUN_147a891b0 body=104 status=ok
// SIG undefined FUN_147a891b0(void)

void FUN_147a891b0(void)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_147a8830c(&local_28);
  if (local_18 != (longlong *)0x0 && (local_20 != -1 && local_28 != 0)) {
    (**(code **)(*local_18 + 0x48))(local_18,&local_28);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a8921a FUN_147a8921a body=104 status=ok
// SIG undefined FUN_147a8921a(void)

void FUN_147a8921a(void)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_147a8830c(&local_28);
  if (local_18 != (longlong *)0x0 && (local_20 != -1 && local_28 != 0)) {
    (**(code **)(*local_18 + 0x50))(local_18,&local_28);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a89284 FUN_147a89284 body=268 status=ok
// SIG undefined FUN_147a89284(void)

undefined8 *
FUN_147a89284(undefined8 param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
             undefined8 *param_5)

{
  code *pcVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong **pplVar6;
  undefined1 auStack_78 [40];
  longlong *local_50 [2];
  longlong *local_40 [2];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*(char *)((longlong)param_4 + 0x29) != '\x01') || (param_4[4] == 0)) ||
     ((*(byte *)(param_4[4] + 0x10) & 0x10) != 0)) {
    pcVar1 = (code *)*param_5;
    plVar5 = param_5 + 4;
    if ((longlong *)param_5[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_5[2];
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar1)(uVar4,param_3,param_4);
    if (cVar3 != '\0') {
      if (*param_4 == 0) {
        local_30 = 0;
        lVar2 = *param_3;
        if (lVar2 != 0) {
          LOCK();
          *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
          UNLOCK();
          local_30 = lVar2;
        }
        local_50[0] = &local_30;
        pplVar6 = local_50;
      }
      else {
        FUN_14705f56e(*param_4,&local_30,param_3,(char)param_4[1]);
        pplVar6 = local_40;
        local_40[0] = &local_30;
      }
      pplVar6[1] = (longlong *)&local_28;
      FUN_147a86f02(param_2);
      if (local_30 != 0) {
        LOCK();
        *(int *)(local_30 + 0xc) = *(int *)(local_30 + 0xc) + -1;
        UNLOCK();
      }
      if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
}



// FUNCTION 147a89392 FUN_147a89392 body=8 status=ok
// SIG undefined FUN_147a89392(void)

undefined8 FUN_147a89392(void)

{
  return DAT_14cad8288;
}



// FUNCTION 147a8939c FUN_147a8939c body=29 status=ok
// SIG undefined FUN_147a8939c(void)

undefined8 FUN_147a8939c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a893ba FUN_147a893ba body=38 status=ok
// SIG undefined FUN_147a893ba(void)

undefined8 FUN_147a893ba(undefined8 param_1,int param_2)

{
  FUN_140a27244();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a893ec FUN_147a893ec body=45 status=ok
// SIG undefined FUN_147a893ec(void)

longlong FUN_147a893ec(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a89420 FUN_147a89420 body=45 status=ok
// SIG undefined FUN_147a89420(void)

longlong FUN_147a89420(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a89454 FUN_147a89454 body=45 status=ok
// SIG undefined FUN_147a89454(void)

longlong FUN_147a89454(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a89494 FUN_147a89494 body=45 status=ok
// SIG undefined FUN_147a89494(void)

longlong FUN_147a89494(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a894c8 FUN_147a894c8 body=45 status=ok
// SIG undefined FUN_147a894c8(void)

longlong FUN_147a894c8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a89532 FUN_147a89532 body=45 status=ok
// SIG undefined FUN_147a89532(void)

longlong FUN_147a89532(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a8957c FUN_147a8957c body=84 status=ok
// SIG undefined FUN_147a8957c(void)

void FUN_147a8957c(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_10 = 1;
  local_28 = param_5;
  local_18 = param_2;
  (**(code **)(*param_1 + 0x148))(param_1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a895da FUN_147a895da body=169 status=ok
// SIG undefined FUN_147a895da(void)

undefined8 *
FUN_147a895da(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 **local_48;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = &local_28;
  local_28 = (undefined8 *)0x0;
  uStack_20 = 0;
  local_30 = 1;
  local_38 = param_3;
  (**(code **)(*param_1 + 0x170))(0,&local_38,param_4,param_5);
  if ((int)uStack_20 < 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = *local_28;
    *local_28 = 0;
  }
  *param_2 = uVar1;
  FUN_147057811(local_28,(int)uStack_20);
  if (local_28 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a8968a FUN_147a8968a body=74 status=ok
// SIG undefined FUN_147a8968a(void)

void FUN_147a8968a(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = 1;
  local_18 = param_2;
  (**(code **)(*param_1 + 0x188))(param_1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a896f2 FUN_147a896f2 body=45 status=ok
// SIG undefined FUN_147a896f2(void)

longlong FUN_147a896f2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a89726 FUN_147a89726 body=45 status=ok
// SIG undefined FUN_147a89726(void)

longlong FUN_147a89726(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a8975a FUN_147a8975a body=45 status=ok
// SIG undefined FUN_147a8975a(void)

longlong FUN_147a8975a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a8978e FUN_147a8978e body=45 status=ok
// SIG undefined FUN_147a8978e(void)

longlong FUN_147a8978e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a897c2 FUN_147a897c2 body=45 status=ok
// SIG undefined FUN_147a897c2(void)

longlong FUN_147a897c2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a897f6 FUN_147a897f6 body=21 status=ok
// SIG undefined FUN_147a897f6(void)

undefined1
FUN_147a897f6(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_4 = *param_3;
    param_3 = param_3 + 1;
    param_4 = param_4 + 1;
  }
  return 1;
}



// FUNCTION 147a8980c FUN_147a8980c body=45 status=ok
// SIG undefined FUN_147a8980c(void)

longlong FUN_147a8980c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1414ce292(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a8983a FUN_147a8983a body=45 status=ok
// SIG undefined FUN_147a8983a(void)

longlong FUN_147a8983a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a8986e FUN_147a8986e body=45 status=ok
// SIG undefined FUN_147a8986e(void)

longlong FUN_147a8986e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a898a2 FUN_147a898a2 body=45 status=ok
// SIG undefined FUN_147a898a2(void)

longlong FUN_147a898a2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a898d6 FUN_147a898d6 body=45 status=ok
// SIG undefined FUN_147a898d6(void)

longlong FUN_147a898d6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a8990a FUN_147a8990a body=45 status=ok
// SIG undefined FUN_147a8990a(void)

longlong FUN_147a8990a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a8993e FUN_147a8993e body=45 status=ok
// SIG undefined FUN_147a8993e(void)

longlong FUN_147a8993e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a89974 FUN_147a89974 body=38 status=ok
// SIG undefined FUN_147a89974(void)

undefined8 FUN_147a89974(undefined8 param_1,int param_2)

{
  FUN_147a88820();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a8999a FUN_147a8999a body=32 status=ok
// SIG undefined FUN_147a8999a(void)

undefined8 FUN_147a8999a(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FSMInstanceElementIdMap");
  return param_2;
}



// FUNCTION 147a899ba FUN_147a899ba body=45 status=ok
// SIG undefined FUN_147a899ba(void)

longlong FUN_147a899ba(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a899ee FUN_147a899ee body=45 status=ok
// SIG undefined FUN_147a899ee(void)

longlong FUN_147a899ee(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a89a22 FUN_147a89a22 body=45 status=ok
// SIG undefined FUN_147a89a22(void)

longlong FUN_147a89a22(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a89a72 FUN_147a89a72 body=59 status=ok
// SIG undefined FUN_147a89a72(void)

void FUN_147a89a72(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  (**(code **)(*(longlong *)(param_1 + 8) + 0x20))(puVar1);
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000147a89aa2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 147a89abe FUN_147a89abe body=59 status=ok
// SIG undefined FUN_147a89abe(void)

void FUN_147a89abe(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  (**(code **)(*(longlong *)(param_1 + 8) + 0x20))(puVar1);
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000147a89aee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 147a89b0a FUN_147a89b0a body=59 status=ok
// SIG undefined FUN_147a89b0a(void)

void FUN_147a89b0a(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  (**(code **)(*(longlong *)(param_1 + 8) + 0x20))(puVar1);
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000147a89b3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 147a89b56 FUN_147a89b56 body=59 status=ok
// SIG undefined FUN_147a89b56(void)

void FUN_147a89b56(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  (**(code **)(*(longlong *)(param_1 + 8) + 0x20))(puVar1);
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000147a89b86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 147a89b92 FUN_147a89b92 body=69 status=ok
// SIG undefined FUN_147a89b92(void)

void FUN_147a89b92(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *puVar2 = &PTR_FUN_14a8ca3f0;
    puVar2[1] = uVar1;
    puVar2[2] = param_2;
    *(undefined8 **)(param_2 + 0x180) = puVar2;
  }
  return;
}



// FUNCTION 147a89bd8 FUN_147a89bd8 body=26 status=ok
// SIG undefined FUN_147a89bd8(void)

undefined8 FUN_147a89bd8(longlong param_1,undefined8 param_2)

{
  FUN_147a7dd7a(*(undefined8 *)(param_1 + 8));
  return param_2;
}



// FUNCTION 147a89bf2 FUN_147a89bf2 body=33 status=ok
// SIG undefined FUN_147a89bf2(void)

undefined8 FUN_147a89bf2(longlong param_1,undefined8 param_2)

{
  FUN_1417c53aa(param_2,*(longlong *)(param_1 + 8) + 0x78);
  return param_2;
}



// FUNCTION 147a89c14 FUN_147a89c14 body=99 status=ok
// SIG undefined FUN_147a89c14(void)

longlong FUN_147a89c14(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0x1000000000;
  FUN_1448b6aaa(param_2,DAT_14ca8b9f8);
  for (puVar1 = DAT_14ca8ba00; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
    lVar2 = *(longlong *)(param_2 + 0x40);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      lVar2 = param_2;
    }
    *(undefined4 *)(lVar2 + (longlong)*(int *)(puVar1[2] + 100) * 4) =
         *(undefined4 *)(puVar1[2] + 0x44);
  }
  return param_2;
}



// FUNCTION 147a89c7c FUN_147a89c7c body=85 status=ok
// SIG undefined FUN_147a89c7c(void)

void FUN_147a89c7c(longlong *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)(*param_1 + 0x120);
  FUN_14571aecb(_Dst);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + 4);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (ulonglong)param_2 * 0x48),(longlong)iVar2 * 0x48);
    iVar1 = (int)param_1[1];
  }
  *(uint *)(param_1 + 1) = iVar1 - param_2;
  return;
}



// FUNCTION 147a89cd2 FUN_147a89cd2 body=62 status=ok
// SIG undefined FUN_147a89cd2(void)

void FUN_147a89cd2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147a89d10(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x48,8);
  }
  return;
}



// FUNCTION 147a89d10 FUN_147a89d10 body=112 status=ok
// SIG undefined FUN_147a89d10(void)

ulonglong FUN_147a89d10(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x48) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147a89d4a;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x48,8);
      param_2 = param_2 / 0x48;
    }
  }
LAB_147a89d4a:
  return param_2 & 0xffffffff;
}



// FUNCTION 147a89d8a FUN_147a89d8a body=91 status=ok
// SIG undefined FUN_147a89d8a(void)

void FUN_147a89d8a(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14571ad58(0xa8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14571ad58(param_1 + 0x15);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147a89ddb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 147a89de6 FUN_147a89de6 body=229 status=ok
// SIG undefined FUN_147a89de6(void)

void FUN_147a89de6(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar7;
  undefined1 in_XMM1 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar6 [16];
  
  lVar2 = *param_1;
  FUN_1456d7b38(lVar2);
  if ((longlong)*(int *)(lVar2 + 0x138) != 0) {
    uVar1 = (longlong)*(int *)(lVar2 + 0x138) * 0x48 - 0x48;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar1;
    uVar5 = SUB164(auVar8 * ZEXT816(0xe38e38e38e38e38f),8);
    uVar7 = (undefined4)(uVar1 / 0x120000000);
    auVar6._0_8_ = CONCAT44(uVar7,uVar5);
    auVar6._8_4_ = uVar5;
    auVar6._12_4_ = uVar7;
    puVar4 = (undefined8 *)(*(longlong *)(lVar2 + 0x130) + 0x88);
    uVar3 = 0;
    auVar8 = pmovsxbq(in_XMM1,0x100);
    do {
      if ((bool)(~((longlong)(auVar6._0_8_ >> 6 | 0x8000000000000000) <
                  (longlong)(uVar3 ^ 0x8000000000000000)) & 1)) {
        puVar4[-9] = 0xffffffffffffffff;
      }
      auVar9._8_4_ = (int)uVar3;
      auVar9._0_8_ = uVar3;
      auVar9._12_4_ = (int)(uVar3 >> 0x20);
      if ((longlong)((auVar9._8_8_ | auVar8._8_8_) ^ 0x8000000000000000) <=
          (longlong)(auVar6._8_8_ >> 6 | 0x8000000000000000)) {
        *puVar4 = 0xffffffffffffffff;
      }
      uVar3 = uVar3 + 2;
      puVar4 = puVar4 + 0x12;
    } while ((uVar1 / 0x48 + 2 & 0xfffffffffffffffe) != uVar3);
  }
  return;
}



// FUNCTION 147a89ed6 FUN_147a89ed6 body=12 status=ok
// SIG undefined FUN_147a89ed6(void)

void FUN_147a89ed6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000147a89edf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 147a89ee2 FUN_147a89ee2 body=29 status=ok
// SIG undefined FUN_147a89ee2(void)

undefined8 FUN_147a89ee2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a89f00 FUN_147a89f00 body=29 status=ok
// SIG undefined FUN_147a89f00(void)

undefined8 FUN_147a89f00(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a89f1e FUN_147a89f1e body=73 status=ok
// SIG undefined FUN_147a89f1e(void)

longlong FUN_147a89f1e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_1417c53aa(param_2,*(longlong *)(param_1 + 8) + 0x78);
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x4f) & 2) == 0) {
    lVar1 = *(longlong *)(param_2 + 0x40);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      lVar1 = param_2;
    }
    *(undefined4 *)(lVar1 + (longlong)DAT_14cad82fc * 4) = 0x3f800000;
  }
  return param_2;
}



// FUNCTION 147a89f68 FUN_147a89f68 body=56 status=ok
// SIG undefined FUN_147a89f68(void)

void FUN_147a89f68(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_14a8ca3f0;
  puVar2[1] = uVar1;
  puVar2[2] = param_2;
  return;
}



// FUNCTION 147a89fa0 FUN_147a89fa0 body=66 status=ok
// SIG undefined FUN_147a89fa0(void)

longlong FUN_147a89fa0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_147a7dd7a(*(undefined8 *)(param_1 + 8));
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x4f) & 2) == 0) {
    lVar1 = *(longlong *)(param_2 + 0x40);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      lVar1 = param_2;
    }
    *(undefined4 *)(lVar1 + (longlong)DAT_14cad82fc * 4) = 0x3f800000;
  }
  return param_2;
}



// FUNCTION 147a89fe2 FUN_147a89fe2 body=1111 status=ok
// SIG undefined FUN_147a89fe2(void)

void FUN_147a89fe2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  undefined1 local_d1;
  longlong local_d0;
  longlong local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  longlong *local_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  cVar3 = FUN_14742af83();
  if (cVar3 != '\0') {
    FUN_14741ba9e();
    local_c0 = (longlong *)0x0;
    local_b8 = 0x1000000000;
    FUN_145cb8022(&local_d0,DAT_14ca8b9f8,1);
    local_d1 = 0;
    FUN_147a8a43a(&local_d0);
    for (puVar2 = DAT_14ca8ba00; puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)*puVar2) {
      plVar7 = local_c0;
      if (local_c0 == (longlong *)0x0) {
        plVar7 = &local_d0;
      }
      *(bool *)((longlong)plVar7 + (longlong)*(int *)(puVar2[2] + 100)) =
           0.0 < *(float *)(puVar2[2] + 0x4c);
    }
    thunk_FUN_14742af90(&local_d0);
    if (local_c0 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  fVar10 = (float)((double)DAT_14ca9a350 * DAT_14c83f420 * 1000.0);
  fVar12 = (float)((double)DAT_14ca9a358 * DAT_14c83f420 * 1000.0);
  if (DAT_14ca84e01 == '\x01') {
    bVar9 = *(int *)(DAT_14cad79d8 + 4) == 1;
    *(bool *)(param_1 + 0x144) = bVar9;
    if (bVar9) {
      if (*(longlong *)(param_1 + 0x128) == 0) {
        plVar7 = (longlong *)(param_1 + 0x128);
        FUN_1456ef0d1(&local_d0,2,0xffffffff);
        if (plVar7 != &local_d0) {
          lVar6 = *plVar7;
          *plVar7 = local_d0;
          local_d0 = 0;
          if (lVar6 == 0) goto LAB_147a8a35a;
          LOCK();
          puVar1 = (uint *)(lVar6 + 8);
          uVar4 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar4 & 0x3fffffff) == 1) {
            FUN_144a54812();
          }
        }
        if (local_d0 != 0) {
          LOCK();
          puVar1 = (uint *)(local_d0 + 8);
          uVar4 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar4 & 0x3fffffff) == 1) {
            FUN_144a54812();
          }
        }
      }
LAB_147a8a35a:
      FUN_14571af3c(param_1,0);
      FUN_147a8a480(param_1);
      plVar7 = (longlong *)
               (*(longlong *)(param_1 + 0x130) + (longlong)*(int *)(param_1 + 0x140) * 0x48);
      local_e8 = (longlong *)CONCAT44(local_e8._4_4_,fVar12);
      lVar6 = FUN_147a7d878(param_1,param_3,param_4,fVar10);
      plVar7[8] = lVar6;
      (**(code **)(**(longlong **)(param_1 + 0x128) + 8))(*(longlong **)(param_1 + 0x128),&local_d0)
      ;
      if (plVar7 != &local_d0) {
        lVar6 = *plVar7;
        *plVar7 = local_d0;
        local_d0 = 0;
        if (lVar6 != 0) {
          LOCK();
          puVar1 = (uint *)(lVar6 + 8);
          uVar4 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar4 & 0x3fffffff) == 1) {
            FUN_144a54812();
          }
        }
      }
      plVar7[1] = local_c8;
      FUN_1449cc82a();
      (**(code **)(*DAT_14ca83900 + 0x2b0))(DAT_14ca83900,param_2,*plVar7);
      goto LAB_147a8a2e9;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x144) = 0;
  }
  uVar4 = (**(code **)(*DAT_14ca83900 + 0x330))(DAT_14ca83900,0);
  fVar11 = (float)((double)uVar4 * DAT_14c83f420 * 1000.0);
  local_e8 = (longlong *)CONCAT44(local_e8._4_4_,fVar12);
  uVar5 = FUN_147a7d878(param_1,param_3,param_4,fVar10);
  lVar6 = FUN_14742b1c2();
  local_90 = (longlong *)0x0;
  local_88 = 0x1000000000;
  FUN_1448b6aaa(&local_d0,DAT_14ca8b9f8);
  for (puVar2 = DAT_14ca8ba00; puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)*puVar2) {
    lVar8 = *(longlong *)(lVar6 + 0x80);
    if (*(longlong *)(lVar6 + 0x80) == 0) {
      lVar8 = lVar6;
    }
    plVar7 = local_90;
    if (local_90 == (longlong *)0x0) {
      plVar7 = &local_d0;
    }
    *(float *)((longlong)plVar7 + (longlong)*(int *)(puVar2[2] + 100) * 4) =
         (float)*(ulonglong *)(lVar8 + (longlong)*(int *)(puVar2[2] + 100) * 8) / 1000.0;
  }
  plVar7 = local_90;
  if (local_90 == (longlong *)0x0) {
    plVar7 = &local_d0;
  }
  *(float *)((longlong)plVar7 + (longlong)DAT_14cad82fc * 4) = fVar11;
  local_e8 = &local_d0;
  FUN_147a7dc7a(param_1,uVar5,fVar11,fVar11);
  FUN_140ed6060(param_1);
  *(undefined4 *)(param_1 + 0x140) = 0;
  if (local_90 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_147a8a2e9:
  if ((local_80 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a8a43a FUN_147a8a43a body=69 status=ok
// SIG undefined FUN_147a8a43a(void)

void FUN_147a8a43a(longlong param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145cb8022(param_1,DAT_14ca8b9f8,1);
  if (0 < *(int *)(param_1 + 0x18)) {
    uVar1 = *param_2;
    lVar2 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 0x10);
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar3 = param_1;
      }
      *(undefined1 *)(lVar3 + lVar2) = uVar1;
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x18));
  }
  return;
}



// FUNCTION 147a8a480 FUN_147a8a480 body=379 status=ok
// SIG undefined FUN_147a8a480(void)

void FUN_147a8a480(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (0 < (longlong)*(int *)(param_1 + 0x138)) {
    plVar4 = *(longlong **)(param_1 + 0x130);
    uVar3 = 0;
    do {
      if (*plVar4 == 0) {
        *(int *)(param_1 + 0x140) = (int)uVar3;
        goto LAB_147a8a4d0;
      }
      uVar3 = uVar3 + 1;
      plVar4 = plVar4 + 9;
    } while ((longlong)*(int *)(param_1 + 0x138) != uVar3);
  }
  uVar3 = (ulonglong)*(uint *)(param_1 + 0x140);
LAB_147a8a4d0:
  if ((int)uVar3 == -1) {
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    FUN_1456d7864(&local_88);
    iVar1 = *(int *)(param_1 + 0x138);
    lVar5 = (longlong)iVar1;
    *(uint *)(param_1 + 0x138) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x13c) < iVar1 + 1U) {
      FUN_1456d79e0((undefined8 *)(param_1 + 0x130),iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x130);
    *(undefined8 *)(lVar2 + lVar5 * 0x48) = local_88;
    local_88 = 0;
    *(undefined8 *)(lVar2 + 8 + lVar5 * 0x48) = uStack_80;
    *(undefined8 *)(lVar2 + 0x10 + lVar5 * 0x48) = local_78;
    local_78 = 0;
    *(undefined8 *)(lVar2 + 0x18 + lVar5 * 0x48) = uStack_70;
    *(undefined8 *)(lVar2 + 0x20 + lVar5 * 0x48) = local_68;
    local_68 = 0;
    *(undefined8 *)(lVar2 + 0x28 + lVar5 * 0x48) = uStack_60;
    *(undefined8 *)(lVar2 + 0x30 + lVar5 * 0x48) = local_58;
    local_58 = 0;
    *(undefined8 *)(lVar2 + 0x38 + lVar5 * 0x48) = uStack_50;
    *(undefined8 *)(lVar2 + 0x40 + lVar5 * 0x48) = local_48;
    *(int *)(param_1 + 0x140) = iVar1;
    FUN_1449cc82a(&local_58);
    FUN_1449cc82a(&local_68);
    FUN_1449cc82a(&local_78);
    FUN_1449cc82a(&local_88);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a8a61c FUN_147a8a61c body=12 status=ok
// SIG undefined FUN_147a8a61c(void)

void FUN_147a8a61c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000147a8a625. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 147a8a628 FUN_147a8a628 body=29 status=ok
// SIG undefined FUN_147a8a628(void)

undefined8 FUN_147a8a628(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a8a646 FUN_147a8a646 body=142 status=ok
// SIG undefined FUN_147a8a646(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147a8a646(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_147a89fe2(_DAT_000000b0,&DAT_14ca85100,_DAT_000000a8,_DAT_000000ac);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_147a89fe2(param_1[0x16],&DAT_14ca85100,*(undefined4 *)(param_1 + 0x15),
                *(undefined4 *)((longlong)param_1 + 0xac));
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147a8a6ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 147a8a6d4 FUN_147a8a6d4 body=286 status=ok
// SIG undefined FUN_147a8a6d4(void)

void FUN_147a8a6d4(longlong param_1,undefined8 param_2,char param_3)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x144) == '\x01') {
    lVar3 = (longlong)*(int *)(param_1 + 0x140) * 0x48 + *(longlong *)(param_1 + 0x130);
    if (param_3 == '\x03') {
      plVar4 = (longlong *)(lVar3 + 0x30);
    }
    else if (param_3 == '\x02') {
      plVar4 = (longlong *)(lVar3 + 0x20);
    }
    else if (param_3 == '\x01') {
      plVar4 = (longlong *)(lVar3 + 0x10);
    }
    else {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)(**(longlong **)(param_1 + 0x128) + 8))(*(longlong **)(param_1 + 0x128),&local_40);
    if (plVar4 != &local_40) {
      lVar3 = *plVar4;
      *plVar4 = local_40;
      local_40 = 0;
      if (lVar3 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar3 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
    plVar4[1] = local_38;
    FUN_1449cc82a();
    (**(code **)(*DAT_14ca83900 + 0x2b0))(DAT_14ca83900,param_2,*plVar4);
  }
  if (param_3 == '\x03') {
    *(undefined4 *)(param_1 + 0x140) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x144) = 0;
    thunk_FUN_14742b0ba();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a8a80e FUN_147a8a80e body=12 status=ok
// SIG undefined FUN_147a8a80e(void)

void FUN_147a8a80e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000147a8a817. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 147a8a81a FUN_147a8a81a body=29 status=ok
// SIG undefined FUN_147a8a81a(void)

undefined8 FUN_147a8a81a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a8a838 FUN_147a8a838 body=123 status=ok
// SIG undefined FUN_147a8a838(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147a8a838(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_147a8a6d4(_DAT_000000a8,&DAT_14ca85100,DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_147a8a6d4(param_1[0x15],&DAT_14ca85100,*(undefined1 *)(param_1 + 0x16));
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147a8a8a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 147a8a8e4 FUN_147a8a8e4 body=54 status=ok
// SIG undefined FUN_147a8a8e4(void)

undefined1 FUN_147a8a8e4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147a8a9e2(param_2,param_3);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 147a8a942 FUN_147a8a942 body=59 status=ok
// SIG undefined FUN_147a8a942(void)

undefined8 FUN_147a8a942(longlong *param_1)

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



// FUNCTION 147a8a9e2 FUN_147a8a9e2 body=99 status=ok
// SIG undefined FUN_147a8a9e2(void)

longlong * FUN_147a8a9e2(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_14689c22e();
      lVar2 = *param_2;
    }
  }
  bVar1 = DAT_14c950c29;
  *param_1 = lVar2;
  lVar2 = param_2[1];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_14689c22e();
      lVar2 = param_2[1];
    }
  }
  param_1[1] = lVar2;
  lVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar2;
  return param_1;
}



// FUNCTION 147a8aa8e FUN_147a8aa8e body=59 status=ok
// SIG undefined FUN_147a8aa8e(void)

undefined8 FUN_147a8aa8e(longlong *param_1)

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



// FUNCTION 147a8abc6 FUN_147a8abc6 body=46 status=ok
// SIG undefined FUN_147a8abc6(void)

void FUN_147a8abc6(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x70) = 0;
  if (*(longlong *)(param_2 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_147a8b084(param_2 + 0x28);
  return;
}



// FUNCTION 147a8ac0a FUN_147a8ac0a body=54 status=ok
// SIG undefined FUN_147a8ac0a(void)

undefined1 FUN_147a8ac0a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147a8ad34(param_2,param_3);
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return 1;
}



// FUNCTION 147a8ac68 FUN_147a8ac68 body=59 status=ok
// SIG undefined FUN_147a8ac68(void)

undefined8 FUN_147a8ac68(longlong *param_1)

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



// FUNCTION 147a8acae FUN_147a8acae body=56 status=ok
// SIG undefined FUN_147a8acae(void)

void FUN_147a8acae(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    *(undefined4 *)(param_2 + 0x70) = 0;
    if (*(longlong *)(param_2 + 0x68) != 0) {
      FUN_1400020a8();
    }
    FUN_147a8b084(param_2 + 0x28);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 147a8ad34 FUN_147a8ad34 body=86 status=ok
// SIG undefined FUN_147a8ad34(void)

longlong * FUN_147a8ad34(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar7 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      FUN_14689c22e();
      lVar7 = *param_2;
    }
  }
  *param_1 = lVar7;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xc);
  lVar7 = param_2[2];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
  lVar5 = param_2[3];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
  lVar6 = param_2[4];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
  *(int *)(param_1 + 2) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(int *)(param_1 + 3) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  *(int *)(param_1 + 4) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar4;
  FUN_147a8ad8a(param_1 + 5,param_2 + 5);
  return param_1;
}



// FUNCTION 147a8ad8a FUN_147a8ad8a body=122 status=ok
// SIG undefined FUN_147a8ad8a(void)

longlong FUN_147a8ad8a(longlong param_1,longlong param_2)

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
    FUN_147a8ae04(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147a8ae04 FUN_147a8ae04 body=259 status=ok
// SIG undefined FUN_147a8ae04(void)

longlong * FUN_147a8ae04(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_147a8af08(param_1,(ulonglong)uVar1);
    lVar6 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar6 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar6) < uVar1) {
      FUN_1401284dc(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      puVar11 = (undefined4 *)*param_1;
      puVar9 = (undefined8 *)(*param_2 + 0x30);
      uVar10 = 0;
      do {
        plVar7 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar7 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar7 + (uVar10 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar10 & 0x1f) &
            1) == 0) {
          *puVar11 = *(undefined4 *)(puVar9 + -6);
          puVar11[1] = *(undefined4 *)((longlong)puVar9 + -0x2c);
        }
        else {
          uVar2 = *(undefined4 *)(puVar9 + -6);
          uVar3 = *(undefined4 *)((longlong)puVar9 + -0x2c);
          uVar4 = *(undefined4 *)(puVar9 + -5);
          uVar5 = *(undefined4 *)((longlong)puVar9 + -0x24);
          *puVar11 = uVar2;
          puVar11[1] = uVar3;
          puVar11[2] = uVar4;
          puVar11[3] = uVar5;
          lVar6 = puVar9[-4];
          *(longlong *)(puVar11 + 4) = lVar6;
          *(undefined8 *)(puVar11 + 8) = 0;
          if (lVar6 != 0) {
            puVar8 = (undefined8 *)puVar9[-2];
            if ((undefined8 *)puVar9[-2] == (undefined8 *)0x0) {
              puVar8 = puVar9;
            }
            (**(code **)*puVar8)(uVar2,puVar11 + 8);
          }
          *(undefined8 *)(puVar11 + 0x14) = puVar9[4];
        }
        uVar10 = uVar10 + 1;
        puVar9 = puVar9 + 0xc;
        puVar11 = puVar11 + 0x18;
      } while (uVar1 != uVar10);
    }
  }
  return param_1;
}



// FUNCTION 147a8af08 FUN_147a8af08 body=377 status=ok
// SIG undefined FUN_147a8af08(void)

void FUN_147a8af08(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
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
      if (*(longlong *)(*local_70 + 0x10 + (longlong)iStack_54 * 0x60) != 0) {
        lVar4 = *local_70 + (longlong)iStack_54 * 0x60;
        plVar2 = *(longlong **)(lVar4 + 0x20);
        plVar5 = (longlong *)(lVar4 + 0x30);
        if (plVar2 != (longlong *)0x0) {
          plVar5 = plVar2;
        }
        (**(code **)(*plVar5 + 0x10))();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_1401283f4(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar6 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar6 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar3 = 0x80;
      if (0x80 < (int)uVar6) {
        uVar3 = uVar6;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar3;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147a8b084 FUN_147a8b084 body=54 status=ok
// SIG undefined FUN_147a8b084(void)

void FUN_147a8b084(longlong *param_1)

{
  FUN_147a8af08(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147a8b0ba FUN_147a8b0ba body=98 status=ok
// SIG undefined FUN_147a8b0ba(void)

undefined8 * FUN_147a8b0ba(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_14a8ca920;
  lVar2 = 0x7f8;
  do {
    puVar1 = *(undefined8 **)((longlong)param_1 + lVar2);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    lVar2 = lVar2 + -8;
  } while (lVar2 != 8);
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a8b11c FUN_147a8b11c body=52 status=ok
// SIG undefined FUN_147a8b11c(void)

void FUN_147a8b11c(longlong *param_1)

{
  FUN_147a8b150();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147a8b150 FUN_147a8b150 body=337 status=ok
// SIG undefined FUN_147a8b150(void)

void FUN_147a8b150(longlong *param_1)

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
      lVar3 = (longlong)iStack_5c * 0x20;
      FUN_147057811(*(undefined8 *)(lVar2 + 8 + lVar3),*(undefined4 *)(lVar2 + 0x10 + lVar3));
      if (*(longlong *)(lVar2 + 8 + lVar3) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
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
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a8b2a2 FUN_147a8b2a2 body=54 status=ok
// SIG undefined FUN_147a8b2a2(void)

void FUN_147a8b2a2(longlong *param_1)

{
  FUN_147a8b2d8(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147a8b2d8 FUN_147a8b2d8 body=355 status=ok
// SIG undefined FUN_147a8b2d8(void)

void FUN_147a8b2d8(longlong *param_1,int param_2)

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
      if (*(longlong *)(*local_70 + (longlong)iStack_54 * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_1446f4a44(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar3 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
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
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147a8b4b8 FUN_147a8b4b8 body=59 status=ok
// SIG undefined FUN_147a8b4b8(void)

undefined8 FUN_147a8b4b8(longlong *param_1)

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



// FUNCTION 147a8b55a FUN_147a8b55a body=52 status=ok
// SIG undefined FUN_147a8b55a(void)

void FUN_147a8b55a(longlong *param_1)

{
  FUN_147a8b58e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147a8b58e FUN_147a8b58e body=343 status=ok
// SIG undefined FUN_147a8b58e(void)

void FUN_147a8b58e(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
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
      plVar4 = *(longlong **)(*local_70 + 0x10 + (longlong)iStack_54 * 0x20);
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
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
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
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a8b6e6 FUN_147a8b6e6 body=122 status=ok
// SIG undefined FUN_147a8b6e6(void)

longlong FUN_147a8b6e6(longlong param_1,longlong param_2)

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
    FUN_147a8b760(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147a8b760 FUN_147a8b760 body=119 status=ok
// SIG undefined FUN_147a8b760(void)

undefined8 * FUN_147a8b760(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14043224c(param_1,uVar1);
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



// FUNCTION 147a8b7d7 FUN_147a8b7d7 body=117 status=ok
// SIG undefined FUN_147a8b7d7(void)

void FUN_147a8b7d7(float param_1,float *param_2,undefined4 param_3,float *param_4,float param_5,
                  float *param_6,char param_7,float *param_8)

{
  float fVar1;
  
  if (param_7 == '\0') {
    fVar1 = 0.0001;
    if (0.0001 <= param_5 - param_1) {
      fVar1 = param_5 - param_1;
    }
    fVar1 = ((*param_6 - *param_4) + (*param_4 - *param_2)) / fVar1;
  }
  else {
    fVar1 = (float)FUN_1467f8d78(*param_2,param_1,*param_4,param_3,*param_6,param_5);
  }
  *param_8 = fVar1;
  return;
}



// FUNCTION 147a8b84c FUN_147a8b84c body=63 status=ok
// SIG undefined FUN_147a8b84c(void)

void FUN_147a8b84c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147a8b88c(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x14,4);
  }
  return;
}



// FUNCTION 147a8b88c FUN_147a8b88c body=117 status=ok
// SIG undefined FUN_147a8b88c(void)

ulonglong FUN_147a8b88c(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x14) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x14,4);
      uVar1 = uVar1 / 0x14;
    }
  }
  return uVar1;
}



// FUNCTION 147a8b902 FUN_147a8b902 body=132 status=ok
// SIG undefined FUN_147a8b902(void)

void FUN_147a8b902(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147a8b987 FUN_147a8b987 body=302 status=ok
// SIG undefined FUN_147a8b987(void)

void FUN_147a8b987(undefined8 param_1,double *param_2,undefined8 param_3,double *param_4,
                  float param_5,double *param_6,char param_7,double *param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  float fVar7;
  
  if (param_7 == '\0') {
    dVar1 = param_4[1];
    dVar2 = param_6[1];
    dVar3 = param_2[1];
    param_5 = param_5 - (float)param_1;
    fVar7 = 0.0001;
    if (0.0001 <= param_5) {
      fVar7 = param_5;
    }
    *param_8 = ((*param_6 - *param_4) + (*param_4 - *param_2)) * (1.0 / (double)fVar7);
    param_8[1] = (1.0 / (double)fVar7) * ((dVar2 - dVar1) + (dVar1 - dVar3));
  }
  else {
    lVar5 = -0x400000000;
    lVar4 = 0;
    do {
      lVar5 = lVar5 + 0x400000000;
      uVar6 = FUN_1467f8d78(*(undefined4 *)((longlong)param_2 + lVar4),param_1,
                            *(undefined4 *)((longlong)param_4 + lVar4),param_3,
                            *(undefined4 *)((longlong)param_6 + lVar4),param_5);
      *(undefined4 *)((longlong)param_8 + lVar4) = uVar6;
      lVar4 = lVar4 + 4;
    } while ((uint)((ulonglong)lVar5 >> 0x22) < 3);
  }
  return;
}



// FUNCTION 147a8bab6 FUN_147a8bab6 body=62 status=ok
// SIG undefined FUN_147a8bab6(void)

void FUN_147a8bab6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147a8baf4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x40,8);
  }
  return;
}



// FUNCTION 147a8baf4 FUN_147a8baf4 body=93 status=ok
// SIG undefined FUN_147a8baf4(void)

ulonglong FUN_147a8baf4(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 6,8);
      uVar1 = uVar1 >> 6;
    }
  }
  return uVar1;
}



// FUNCTION 147a8bb52 FUN_147a8bb52 body=62 status=ok
// SIG undefined FUN_147a8bb52(void)

void FUN_147a8bb52(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147a8bb90(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x58,8);
  }
  return;
}



// FUNCTION 147a8bb90 FUN_147a8bb90 body=104 status=ok
// SIG undefined FUN_147a8bb90(void)

ulonglong FUN_147a8bb90(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x58) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147a8bbc6;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x58,8);
      param_2 = param_2 / 0x58;
    }
  }
LAB_147a8bbc6:
  return param_2 & 0xffffffff;
}



// FUNCTION 147a8bbf8 FUN_147a8bbf8 body=147 status=ok
// SIG undefined FUN_147a8bbf8(void)

void FUN_147a8bbf8(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xa0,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xa0)) {
      uVar5 = uVar4 / 0xa0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xa0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147a8bc8c FUN_147a8bc8c body=407 status=ok
// SIG undefined FUN_147a8bc8c(void)

void FUN_147a8bc8c(undefined8 param_1,longlong param_2,undefined4 param_3,longlong param_4,
                  float param_5,longlong param_6,char param_7,double *param_8)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  float fVar4;
  double dVar5;
  undefined1 auStack_a8 [32];
  double *local_88;
  float local_80;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_74 = 0;
  if (param_7 == '\0') {
    local_88 = param_8;
    FUN_147a8be24(param_2,param_4,param_6,&local_74);
    param_5 = param_5 - (float)param_1;
    fVar4 = 0.0001;
    if (0.0001 <= param_5) {
      fVar4 = param_5;
    }
    dVar5 = (double)(1.0 / fVar4);
    *param_8 = *param_8 * dVar5;
    param_8[1] = param_8[1] * dVar5;
    param_8[2] = param_8[2] * dVar5;
    param_8[3] = param_8[3] * dVar5;
    param_8[4] = param_8[4] * dVar5;
    param_8[5] = dVar5 * param_8[5];
  }
  else {
    lVar2 = -0x400000000;
    lVar1 = 0;
    do {
      lVar2 = lVar2 + 0x400000000;
      local_80 = param_5;
      local_88 = (double *)CONCAT44(local_88._4_4_,*(undefined4 *)(param_6 + lVar1));
      uVar3 = FUN_1467f8d78(*(undefined4 *)(param_2 + lVar1),param_1,
                            *(undefined4 *)(param_4 + lVar1),param_3);
      *(undefined4 *)((longlong)param_8 + lVar1) = uVar3;
      lVar1 = lVar1 + 4;
    } while ((uint)((ulonglong)lVar2 >> 0x22) < 0xb);
  }
  if ((local_70 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a8be24 FUN_147a8be24 body=315 status=ok
// SIG undefined FUN_147a8be24(void)

void FUN_147a8be24(double *param_1,double *param_2,double *param_3,float *param_4,double *param_5)

{
  double dVar1;
  double dVar2;
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
  
  dVar1 = param_2[5];
  dVar2 = param_3[5];
  dVar3 = param_1[5];
  dVar4 = param_2[4];
  dVar5 = param_3[4];
  dVar6 = param_1[4];
  dVar7 = param_2[3];
  dVar8 = param_3[3];
  dVar9 = param_1[3];
  dVar10 = param_2[2];
  dVar11 = param_3[2];
  dVar12 = param_1[2];
  dVar13 = param_2[1];
  dVar14 = param_3[1];
  dVar15 = param_1[1];
  dVar16 = (double)(1.0 - *param_4);
  *param_5 = ((*param_3 - *param_2) + (*param_2 - *param_1)) * dVar16;
  param_5[1] = ((dVar14 - dVar13) + (dVar13 - dVar15)) * dVar16;
  param_5[2] = ((dVar11 - dVar10) + (dVar10 - dVar12)) * dVar16;
  param_5[3] = ((dVar8 - dVar7) + (dVar7 - dVar9)) * dVar16;
  param_5[4] = ((dVar5 - dVar4) + (dVar4 - dVar6)) * dVar16;
  param_5[5] = ((dVar2 - dVar1) + (dVar1 - dVar3)) * dVar16;
  return;
}



// FUNCTION 147a8bf60 FUN_147a8bf60 body=62 status=ok
// SIG undefined FUN_147a8bf60(void)

void FUN_147a8bf60(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147a8bf9e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xa0,8);
  }
  return;
}



// FUNCTION 147a8bf9e FUN_147a8bf9e body=112 status=ok
// SIG undefined FUN_147a8bf9e(void)

ulonglong FUN_147a8bf9e(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xa0) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147a8bfd8;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0xa0,8);
      param_2 = param_2 / 0xa0;
    }
  }
LAB_147a8bfd8:
  return param_2 & 0xffffffff;
}



// FUNCTION 147a8c00e FUN_147a8c00e body=38 status=ok
// SIG undefined FUN_147a8c00e(void)

undefined8 FUN_147a8c00e(undefined8 param_1,int param_2)

{
  FUN_1460211be();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a8c034 FUN_147a8c034 body=48 status=ok
// SIG undefined FUN_147a8c034(void)

longlong FUN_147a8c034(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x438;
  FUN_1460211be(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a8c068 FUN_147a8c068 body=48 status=ok
// SIG undefined FUN_147a8c068(void)

longlong FUN_147a8c068(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x448;
  FUN_1460211be(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a8c098 FUN_147a8c098 body=38 status=ok
// SIG undefined FUN_147a8c098(void)

undefined8 FUN_147a8c098(undefined8 param_1,int param_2)

{
  FUN_1415be26c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a8c0be FUN_147a8c0be body=48 status=ok
// SIG undefined FUN_147a8c0be(void)

void FUN_147a8c0be(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 147a8c0ee FUN_147a8c0ee body=38 status=ok
// SIG undefined FUN_147a8c0ee(void)

undefined8 FUN_147a8c0ee(undefined8 param_1,int param_2)

{
  FUN_146021232();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a8c114 FUN_147a8c114 body=48 status=ok
// SIG undefined FUN_147a8c114(void)

longlong FUN_147a8c114(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x438;
  FUN_146021232(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a8c148 FUN_147a8c148 body=48 status=ok
// SIG undefined FUN_147a8c148(void)

longlong FUN_147a8c148(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x448;
  FUN_146021232(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a8c178 FUN_147a8c178 body=38 status=ok
// SIG undefined FUN_147a8c178(void)

undefined8 FUN_147a8c178(undefined8 param_1,int param_2)

{
  FUN_1415be2fe();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a8c19e FUN_147a8c19e body=48 status=ok
// SIG undefined FUN_147a8c19e(void)

void FUN_147a8c19e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 147a8c1ce FUN_147a8c1ce body=110 status=ok
// SIG undefined FUN_147a8c1ce(void)

void FUN_147a8c1ce(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x10;
    if (0x10 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x4c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 2,0);
      iVar2 = (int)(uVar3 >> 2);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar5;
    FUN_147a8c23e(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147a8c23e FUN_147a8c23e body=132 status=ok
// SIG undefined FUN_147a8c23e(void)

void FUN_147a8c23e(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,4);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,4);
  return;
}



// FUNCTION 147a8c2c2 FUN_147a8c2c2 body=52 status=ok
// SIG undefined FUN_147a8c2c2(void)

void FUN_147a8c2c2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147a8c2f6(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
  if (iVar1 == *(int *)(param_1 + 0x4c)) {
    return;
  }
  *(int *)(param_1 + 0x4c) = iVar1;
  FUN_147a8c23e(param_1,*(undefined4 *)(param_1 + 0x48),iVar1);
  return;
}



// FUNCTION 147a8c2f6 FUN_147a8c2f6 body=108 status=ok
// SIG undefined FUN_147a8c2f6(void)

ulonglong FUN_147a8c2f6(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 0x10;
  if (0x10 < param_1) {
    iVar2 = param_2 - param_1;
    if (((longlong)iVar2 & 0x3ffffffffffff000U) == 0) {
      if (iVar2 < 0x41 || (int)(param_2 * 2) <= (int)(param_1 * 3)) {
        return (ulonglong)param_2;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_2;
    }
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 2,0);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 147a8c362 FUN_147a8c362 body=48 status=ok
// SIG undefined FUN_147a8c362(void)

void FUN_147a8c362(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xb8,8);
  }
  return;
}



// FUNCTION 147a8c392 FUN_147a8c392 body=80 status=ok
// SIG undefined FUN_147a8c392(void)

void FUN_147a8c392(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 2,0);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 2)) {
    uVar2 = uVar1 >> 2 & 0xffffffff;
  }
  if ((int)uVar2 == *(int *)(param_1 + 0x4c)) {
    return;
  }
  *(int *)(param_1 + 0x4c) = (int)uVar2;
  FUN_1478dddba(param_1,*(undefined4 *)(param_1 + 0x48),uVar2,4);
  return;
}



// FUNCTION 147a8c3e2 FUN_147a8c3e2 body=41 status=ok
// SIG undefined FUN_147a8c3e2(void)

void FUN_147a8c3e2(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_147a7dbac(param_1);
    param_1 = param_1 + 0xb8;
  }
  return;
}



// FUNCTION 147a8c40c FUN_147a8c40c body=149 status=ok
// SIG undefined FUN_147a8c40c(void)

void FUN_147a8c40c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xb8,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xb8)) {
      uVar5 = uVar4 / 0xb8 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xb8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147a8c4a2 FUN_147a8c4a2 body=98 status=ok
// SIG undefined FUN_147a8c4a2(void)

void FUN_147a8c4a2(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0xb8 + *param_1);
  FUN_1456d7c02(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0xb8 + (longlong)_Dst),(longlong)iVar2 * 0xb8);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 147a8c504 FUN_147a8c504 body=62 status=ok
// SIG undefined FUN_147a8c504(void)

void FUN_147a8c504(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147a8c542(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xb8,8);
  }
  return;
}



// FUNCTION 147a8c542 FUN_147a8c542 body=113 status=ok
// SIG undefined FUN_147a8c542(void)

ulonglong FUN_147a8c542(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xb8) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147a8c57b;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0xb8,8);
      param_2 = param_2 / 0xb8;
    }
  }
LAB_147a8c57b:
  return param_2 & 0xffffffff;
}



// FUNCTION 147a8c5b4 FUN_147a8c5b4 body=117 status=ok
// SIG undefined FUN_147a8c5b4(void)

void FUN_147a8c5b4(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xb8,8);
    iVar2 = (int)(uVar1 / 0xb8);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xb8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147a8c629 FUN_147a8c629 body=97 status=ok
// SIG undefined FUN_147a8c629(void)

void FUN_147a8c629(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_3 != 0) {
    param_1 = param_1 + 0x68;
    param_2 = param_2 + 0x68;
    do {
      *(undefined8 *)(param_1 + -0x58) = *(undefined8 *)(param_2 + -0x58);
      uVar1 = *(undefined4 *)(param_2 + -100);
      uVar2 = *(undefined4 *)(param_2 + -0x60);
      uVar3 = *(undefined4 *)(param_2 + -0x5c);
      *(undefined4 *)(param_1 + -0x68) = *(undefined4 *)(param_2 + -0x68);
      *(undefined4 *)(param_1 + -100) = uVar1;
      *(undefined4 *)(param_1 + -0x60) = uVar2;
      *(undefined4 *)(param_1 + -0x5c) = uVar3;
      FUN_1417c53aa(param_1 + -0x50,param_2 + -0x50);
      FUN_1417c53aa(param_1,param_2);
      param_1 = param_1 + 0xb8;
      param_2 = param_2 + 0xb8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147a8c68a FUN_147a8c68a body=52 status=ok
// SIG undefined FUN_147a8c68a(void)

void FUN_147a8c68a(longlong *param_1)

{
  FUN_147a8c6be();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147a8c6be FUN_147a8c6be body=89 status=ok
// SIG undefined FUN_147a8c6be(void)

void FUN_147a8c6be(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 147a8c718 FUN_147a8c718 body=312 status=ok
// SIG undefined FUN_147a8c718(void)

undefined4 * FUN_147a8c718(longlong param_1,undefined4 *param_2,ulonglong *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147a8c852(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_147a8c938(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
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
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0xc) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_147a8ca26(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a8c852 FUN_147a8c852 body=229 status=ok
// SIG undefined FUN_147a8c852(void)

int * FUN_147a8c852(longlong *param_1,int *param_2)

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
      FUN_1446efaca(param_1,iVar6);
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



// FUNCTION 147a8c938 FUN_147a8c938 body=124 status=ok
// SIG undefined FUN_147a8c938(void)

undefined8 FUN_147a8c938(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        plVar1 = (longlong *)(*param_1 + (longlong)iVar2 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x10) == *param_3) {
          *plVar1 = *param_3;
          FUN_147a8c9b4(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 147a8c9b4 FUN_147a8c9b4 body=114 status=ok
// SIG undefined FUN_147a8c9b4(void)

void FUN_147a8c9b4(longlong *param_1,int param_2)

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



// FUNCTION 147a8ca26 FUN_147a8ca26 body=477 status=ok
// SIG undefined FUN_147a8ca26(void)

void FUN_147a8ca26(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
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
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
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
        lVar6 = (longlong)iVar4 * 0x10;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0xc + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 8 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 147a8cc04 FUN_147a8cc04 body=132 status=ok
// SIG undefined FUN_147a8cc04(void)

void FUN_147a8cc04(longlong param_1,int param_2)

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



// FUNCTION 147a8cc8a FUN_147a8cc8a body=164 status=ok
// SIG undefined FUN_147a8cc8a(void)

void FUN_147a8cc8a(longlong *param_1,undefined8 param_2)

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
        goto LAB_147a8cd0a;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_147a8cd0a:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 147a8cd2e FUN_147a8cd2e body=132 status=ok
// SIG undefined FUN_147a8cd2e(void)

void FUN_147a8cd2e(longlong param_1,int param_2)

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



// FUNCTION 147a8cdb4 FUN_147a8cdb4 body=201 status=ok
// SIG undefined FUN_147a8cdb4(void)

void FUN_147a8cdb4(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar3 = (longlong)(int)uVar1;
  if (lVar3 != 0) {
    plVar2 = (longlong *)*param_1;
    uVar4 = 0;
    bVar10 = *plVar2 == *(longlong *)*param_2;
    uVar7 = 0;
    do {
      uVar5 = uVar7 + 1;
      if ((int)(uVar7 + 1) < (int)uVar1) {
        uVar5 = uVar1;
      }
      uVar8 = uVar7;
      uVar6 = (ulonglong)uVar7;
      do {
        uVar6 = uVar6 + 1;
        uVar9 = uVar5;
        if (lVar3 <= (longlong)uVar6) break;
        uVar8 = uVar8 + 1;
        uVar9 = uVar8;
      } while (bVar10 == (plVar2[uVar6] == *(longlong *)*param_2));
      if (bVar10 == false) {
        if (uVar4 != uVar7) {
          memmove(plVar2 + (int)uVar4,plVar2 + uVar7,(longlong)(int)(uVar9 - uVar7) << 3);
        }
        uVar4 = uVar4 + (uVar9 - uVar7);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      uVar7 = uVar9;
    } while ((longlong)uVar6 < lVar3);
    *(uint *)(param_1 + 1) = uVar4;
  }
  return;
}



// FUNCTION 147a8ce7e FUN_147a8ce7e body=89 status=ok
// SIG undefined FUN_147a8ce7e(void)

void FUN_147a8ce7e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 8,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 3)) {
    uVar3 = uVar1 >> 3 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,8,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 147a8ced8 FUN_147a8ced8 body=120 status=ok
// SIG undefined FUN_147a8ced8(void)

undefined8 * FUN_147a8ced8(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad8250) {
    FUN_144b3d300(&DAT_14cad8250);
    if (DAT_14cad8250 == -1) {
      FUN_1446ddc76(&DAT_14cad8248,"FActorElementData",1);
      _Init_thread_footer(&DAT_14cad8250);
    }
  }
  *param_1 = DAT_14cad8248;
  return param_1;
}



// FUNCTION 147a8cf50 FUN_147a8cf50 body=120 status=ok
// SIG undefined FUN_147a8cf50(void)

undefined8 * FUN_147a8cf50(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad8260) {
    FUN_144b3d300(&DAT_14cad8260);
    if (DAT_14cad8260 == -1) {
      FUN_1446ddc76(&DAT_14cad8258,"FComponentElementData",1);
      _Init_thread_footer(&DAT_14cad8260);
    }
  }
  *param_1 = DAT_14cad8258;
  return param_1;
}



// FUNCTION 147a8cfd8 FUN_147a8cfd8 body=167 status=ok
// SIG undefined FUN_147a8cfd8(void)

void FUN_147a8cfd8(longlong param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  
  FUN_147a8d4dc(param_1 + 0x58);
  if (param_4 != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa8));
    iVar1 = *(int *)(param_1 + 0xd8);
    *(uint *)(param_1 + 0xd8) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0xdc) < iVar1 + 1U) {
      FUN_147a8d61a((longlong *)(param_1 + 0xd0),iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0xd0);
    *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x10) = param_2;
    *(undefined8 *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x000147a8d050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa8));
    return;
  }
  FUN_147a8d462(param_1 + 0x28,param_2);
  return;
}



// FUNCTION 147a8d080 FUN_147a8d080 body=97 status=ok
// SIG undefined FUN_147a8d080(void)

longlong FUN_147a8d080(longlong param_1,int param_2)

{
  longlong lVar1;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x28));
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)(param_2 / 0x2aa) * 8);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x28));
  return (longlong)(param_2 % 0x2aa) * 0x18 + lVar1;
}



// FUNCTION 147a8d0e2 FUN_147a8d0e2 body=26 status=ok
// SIG undefined FUN_147a8d0e2(void)

undefined8 FUN_147a8d0e2(longlong param_1,undefined8 param_2)

{
  FUN_147a8d6a0(param_1 + 0x28);
  return param_2;
}



// FUNCTION 147a8d10c FUN_147a8d10c body=25 status=ok
// SIG undefined FUN_147a8d10c(void)

undefined8 FUN_147a8d10c(undefined8 param_1,undefined8 param_2)

{
  FUN_147a8dc62(param_2);
  return param_2;
}



// FUNCTION 147a8d128 FUN_147a8d128 body=46 status=ok
// SIG undefined FUN_147a8d128(void)

undefined8 * FUN_147a8d128(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a8cace0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a8d164 FUN_147a8d164 body=42 status=ok
// SIG undefined FUN_147a8d164(void)

undefined8 FUN_147a8d164(longlong param_1,undefined8 param_2)

{
  FUN_140002266(param_2,L"ID: %d",*(uint *)(param_1 + 8) & 0xffffff);
  return param_2;
}



// FUNCTION 147a8d18e FUN_147a8d18e body=46 status=ok
// SIG undefined FUN_147a8d18e(void)

undefined8 * FUN_147a8d18e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a8cace0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a8d1d4 FUN_147a8d1d4 body=259 status=ok
// SIG undefined FUN_147a8d1d4(void)

undefined8 FUN_147a8d1d4(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    FUN_140056680(&local_28,L"null");
  }
  else {
    FUN_144750a86(*(longlong *)(param_1 + 0x10),&local_28,0,0);
  }
  if (local_20 < 2) {
    FUN_140002266(param_2,L"ID: %d",*(uint *)(param_1 + 8) & 0xffffff);
  }
  else {
    FUN_140002266(&local_38,L"ID: %d",*(uint *)(param_1 + 8) & 0xffffff);
    puVar2 = &DAT_149dfb77a;
    if (local_30 != 0) {
      puVar2 = local_38;
    }
    puVar1 = &DAT_149dfb77a;
    if (local_20 != 0) {
      puVar1 = local_28;
    }
    FUN_140002266(param_2,L"%s - %s",puVar1,puVar2);
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a8d2d8 FUN_147a8d2d8 body=61 status=ok
// SIG undefined FUN_147a8d2d8(void)

void FUN_147a8d2d8(longlong *param_1)

{
  int *piVar1;
  
  *(undefined8 *)*param_1 = 0;
  if (*param_1 != 0) {
    piVar1 = (int *)(*param_1 + 8);
    *piVar1 = *piVar1 + -1;
    if ((*param_1 != 0) && (*(int *)(*param_1 + 8) == 0)) {
      FUN_1400020a8();
    }
  }
  *param_1 = 0;
  return;
}



// FUNCTION 147a8d316 FUN_147a8d316 body=143 status=ok
// SIG undefined FUN_147a8d316(void)

longlong FUN_147a8d316(PSRWLOCK param_1,int param_2,uint *param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  
  AcquireSRWLockExclusive(param_1);
  iVar2 = *(int *)&param_1[5].Ptr;
  if ((longlong)iVar2 < 1) {
    uVar3 = FUN_147a8d3a6(param_1 + 1);
  }
  else {
    uVar3 = *(uint *)((longlong)param_1[4].Ptr + (longlong)iVar2 * 4 + -4);
    *(int *)&param_1[5].Ptr = iVar2 + -1;
  }
  *param_3 = uVar3;
  lVar1 = *(longlong *)((longlong)param_1[1].Ptr + (longlong)((int)uVar3 / 0x2aa) * 8) +
          (ulonglong)(uint)((int)uVar3 % 0x2aa) * 0x18;
  *(uint *)(lVar1 + 8) = uVar3 & 0xffffff | param_2 << 0x18;
  ReleaseSRWLockExclusive(param_1);
  return lVar1;
}



// FUNCTION 147a8d3a6 FUN_147a8d3a6 body=187 status=ok
// SIG undefined FUN_147a8d3a6(void)

int FUN_147a8d3a6(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  iVar7 = (int)param_1[1];
  iVar2 = (int)param_1[2];
  iVar4 = (iVar2 + 0x2aa) / 0x2aa;
  *(int *)(param_1 + 2) = iVar2 + 1;
  if (iVar7 < iVar4) {
    do {
      lVar5 = FUN_14001cc68(0x3ff0,0x10);
      lVar6 = 0x10;
      do {
        puVar1 = (undefined8 *)(lVar5 + -8 + lVar6);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined ***)(lVar5 + -0x10 + lVar6) = &PTR_FUN_14a8cad10;
        lVar6 = lVar6 + 0x18;
      } while (lVar6 != 0x4000);
      iVar3 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
        FUN_1456bd870(param_1,iVar3);
      }
      *(longlong *)(*param_1 + (longlong)iVar3 * 8) = lVar5;
      iVar7 = iVar7 + 1;
    } while (iVar7 != iVar4);
  }
  return iVar2;
}



// FUNCTION 147a8d462 FUN_147a8d462 body=121 status=ok
// SIG undefined FUN_147a8d462(void)

void FUN_147a8d462(PSRWLOCK param_1,int param_2)

{
  int iVar1;
  
  AcquireSRWLockExclusive(param_1);
  (**(code **)(*(longlong *)
                (*(longlong *)((longlong)param_1[1].Ptr + (longlong)(param_2 / 0x2aa) * 8) +
                (ulonglong)(uint)(param_2 % 0x2aa) * 0x18) + 8))();
  iVar1 = *(int *)&param_1[5].Ptr;
  *(uint *)&param_1[5].Ptr = iVar1 + 1U;
  if (*(uint *)((longlong)&param_1[5].Ptr + 4) < iVar1 + 1U) {
    FUN_1446f48e2(param_1 + 4,iVar1);
  }
  *(int *)((longlong)param_1[4].Ptr + (longlong)iVar1 * 4) = param_2;
  ReleaseSRWLockExclusive(param_1);
  return;
}



// FUNCTION 147a8d4dc FUN_147a8d4dc body=81 status=ok
// SIG undefined FUN_147a8d4dc(void)

void FUN_147a8d4dc(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_147a8d52e(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 147a8d52e FUN_147a8d52e body=121 status=ok
// SIG undefined FUN_147a8d52e(void)

void FUN_147a8d52e(longlong *param_1,int param_2)

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
  FUN_147a8d2d8(*param_1 + (longlong)param_2 * 0x18 + 8);
  FUN_147a8d5a8(param_1,param_2);
  return;
}



// FUNCTION 147a8d5a8 FUN_147a8d5a8 body=114 status=ok
// SIG undefined FUN_147a8d5a8(void)

void FUN_147a8d5a8(longlong *param_1,int param_2)

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



// FUNCTION 147a8d61a FUN_147a8d61a body=132 status=ok
// SIG undefined FUN_147a8d61a(void)

void FUN_147a8d61a(longlong param_1,int param_2)

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



// FUNCTION 147a8d6a0 FUN_147a8d6a0 body=316 status=ok
// SIG undefined FUN_147a8d6a0(void)

longlong * FUN_147a8d6a0(PSRWLOCK param_1,longlong *param_2,uint param_3)

{
  uint *puVar1;
  longlong lVar2;
  PSRWLOCK pRVar3;
  uint uVar4;
  undefined1 auStack_78 [44];
  uint local_4c;
  uint *local_48;
  longlong local_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_4c = param_3;
  if (*(int *)&param_1[7].Ptr != *(int *)((longlong)&param_1[0xc].Ptr + 4)) {
    pRVar3 = param_1 + 0xd;
    if (param_1[0xe].Ptr != (PSRWLOCK)0x0) {
      pRVar3 = param_1[0xe].Ptr;
    }
    uVar4 = *(uint *)((longlong)&pRVar3->Ptr +
                     (ulonglong)(*(int *)&param_1[0xf].Ptr - 1U & param_3) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar1 = (uint *)((longlong)param_1[6].Ptr + (longlong)(int)uVar4 * 0x18);
        if (*puVar1 == param_3) {
          if ((puVar1 != (uint *)0x0) && (puVar1 + 2 != (uint *)0x0)) {
            lVar2 = *(longlong *)(puVar1 + 2);
            *param_2 = lVar2;
            if (lVar2 != 0) {
              *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
            }
            goto LAB_147a8d7b7;
          }
          break;
        }
        uVar4 = puVar1[4];
      } while (uVar4 != 0xffffffff);
    }
  }
  AcquireSRWLockShared(param_1);
  local_40 = (ulonglong)(uint)((int)param_3 % 0x2aa) * 0x18 +
             *(longlong *)((longlong)param_1[1].Ptr + (longlong)((int)param_3 / 0x2aa) * 8);
  local_48 = &local_4c;
  FUN_147a8d7de(param_1 + 6,&local_34,param_3);
  lVar2 = *(longlong *)((longlong)param_1[6].Ptr + (longlong)local_34 * 0x18 + 8);
  *param_2 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  ReleaseSRWLockShared(param_1);
LAB_147a8d7b7:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a8d7de FUN_147a8d7de body=311 status=ok
// SIG undefined FUN_147a8d7de(void)

undefined4 * FUN_147a8d7de(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  undefined4 local_40 [2];
  undefined4 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147a8d916(param_1,local_40);
  uVar1 = param_4[1];
  *local_38 = *(undefined4 *)*param_4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar4 = uVar1;
  *(undefined4 *)(puVar4 + 1) = 0;
  *(undefined8 **)(local_38 + 2) = puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar4 + 1) = 1;
  }
  local_38[4] = 0xffffffff;
  cVar2 = FUN_147a8d9fc(param_1,param_3,local_38);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar3) {
      uVar5 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      local_38[5] = param_3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_38[4] = *(undefined4 *)
                     (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4
                     );
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_40[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_147a8da8e(param_1);
    }
  }
  *param_2 = local_40[0];
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a8d916 FUN_147a8d916 body=230 status=ok
// SIG undefined FUN_147a8d916(void)

int * FUN_147a8d916(longlong *param_1,int *param_2)

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



// FUNCTION 147a8d9fc FUN_147a8d9fc body=146 status=ok
// SIG undefined FUN_147a8d9fc(void)

undefined8 FUN_147a8d9fc(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
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
        piVar1 = (int *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*piVar1 == *param_3) {
          FUN_147a8d2d8(piVar1 + 2);
          iVar2 = param_3[1];
          iVar3 = param_3[2];
          iVar4 = param_3[3];
          *piVar1 = *param_3;
          piVar1[1] = iVar2;
          piVar1[2] = iVar3;
          piVar1[3] = iVar4;
          FUN_147a8d5a8(param_1,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = piVar1[4];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 147a8da8e FUN_147a8da8e body=419 status=ok
// SIG undefined FUN_147a8da8e(void)

void FUN_147a8da8e(longlong *param_1)

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



// FUNCTION 147a8dc32 FUN_147a8dc32 body=48 status=ok
// SIG undefined FUN_147a8dc32(void)

void FUN_147a8dc32(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 147a8dc62 FUN_147a8dc62 body=120 status=ok
// SIG undefined FUN_147a8dc62(void)

undefined8 * FUN_147a8dc62(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad8270) {
    FUN_144b3d300(&DAT_14cad8270);
    if (DAT_14cad8270 == -1) {
      FUN_1446ddc76(&DAT_14cad8268,"FObjectElementData",1);
      _Init_thread_footer(&DAT_14cad8270);
    }
  }
  *param_1 = DAT_14cad8268;
  return param_1;
}



// FUNCTION 147a8dcea FUN_147a8dcea body=167 status=ok
// SIG undefined FUN_147a8dcea(void)

void FUN_147a8dcea(longlong param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  
  FUN_147a8d4dc(param_1 + 0x58);
  if (param_4 != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa8));
    iVar1 = *(int *)(param_1 + 0xd8);
    *(uint *)(param_1 + 0xd8) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0xdc) < iVar1 + 1U) {
      FUN_147a8d61a((longlong *)(param_1 + 0xd0),iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0xd0);
    *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x10) = param_2;
    *(undefined8 *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x000147a8dd62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa8));
    return;
  }
  FUN_147a8e0ee(param_1 + 0x28,param_2);
  return;
}



// FUNCTION 147a8dd92 FUN_147a8dd92 body=97 status=ok
// SIG undefined FUN_147a8dd92(void)

longlong FUN_147a8dd92(longlong param_1,int param_2)

{
  longlong lVar1;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x28));
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)(param_2 / 0x2aa) * 8);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x28));
  return (longlong)(param_2 % 0x2aa) * 0x18 + lVar1;
}



// FUNCTION 147a8ddf4 FUN_147a8ddf4 body=26 status=ok
// SIG undefined FUN_147a8ddf4(void)

undefined8 FUN_147a8ddf4(longlong param_1,undefined8 param_2)

{
  FUN_147a8e168(param_1 + 0x28);
  return param_2;
}



// FUNCTION 147a8de1e FUN_147a8de1e body=25 status=ok
// SIG undefined FUN_147a8de1e(void)

undefined8 FUN_147a8de1e(undefined8 param_1,undefined8 param_2)

{
  FUN_147a8ced8(param_2);
  return param_2;
}



// FUNCTION 147a8de38 FUN_147a8de38 body=46 status=ok
// SIG undefined FUN_147a8de38(void)

undefined8 * FUN_147a8de38(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a8cace0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a8de7e FUN_147a8de7e body=226 status=ok
// SIG undefined FUN_147a8de7e(void)

undefined8 FUN_147a8de7e(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147a8df61(&local_30,param_1 + 0x10);
  if (local_28 < 2) {
    FUN_140002266(param_2,L"ID: %d",*(uint *)(param_1 + 8) & 0xffffff);
  }
  else {
    FUN_140002266(&local_40,L"ID: %d",*(uint *)(param_1 + 8) & 0xffffff);
    puVar2 = &DAT_149dfb77a;
    if (local_38 != 0) {
      puVar2 = local_40;
    }
    puVar1 = &DAT_149dfb77a;
    if (local_28 != 0) {
      puVar1 = local_30;
    }
    FUN_140002266(param_2,L"%s - %s",puVar1,puVar2);
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a8df61 FUN_147a8df61 body=65 status=ok
// SIG undefined FUN_147a8df61(void)

undefined8 FUN_147a8df61(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if ((lVar1 == 0) || ((*(uint *)(lVar1 + 8) >> 0x1e & 1) != 0)) {
    FUN_140056680(param_1,L"null");
  }
  else {
    FUN_144750a86(lVar1,param_1,0,0);
  }
  return param_1;
}



// FUNCTION 147a8dfa2 FUN_147a8dfa2 body=143 status=ok
// SIG undefined FUN_147a8dfa2(void)

longlong FUN_147a8dfa2(PSRWLOCK param_1,int param_2,uint *param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  
  AcquireSRWLockExclusive(param_1);
  iVar2 = *(int *)&param_1[5].Ptr;
  if ((longlong)iVar2 < 1) {
    uVar3 = FUN_147a8e032(param_1 + 1);
  }
  else {
    uVar3 = *(uint *)((longlong)param_1[4].Ptr + (longlong)iVar2 * 4 + -4);
    *(int *)&param_1[5].Ptr = iVar2 + -1;
  }
  *param_3 = uVar3;
  lVar1 = *(longlong *)((longlong)param_1[1].Ptr + (longlong)((int)uVar3 / 0x2aa) * 8) +
          (ulonglong)(uint)((int)uVar3 % 0x2aa) * 0x18;
  *(uint *)(lVar1 + 8) = uVar3 & 0xffffff | param_2 << 0x18;
  ReleaseSRWLockExclusive(param_1);
  return lVar1;
}



// FUNCTION 147a8e032 FUN_147a8e032 body=187 status=ok
// SIG undefined FUN_147a8e032(void)

int FUN_147a8e032(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  iVar7 = (int)param_1[1];
  iVar2 = (int)param_1[2];
  iVar4 = (iVar2 + 0x2aa) / 0x2aa;
  *(int *)(param_1 + 2) = iVar2 + 1;
  if (iVar7 < iVar4) {
    do {
      lVar5 = FUN_14001cc68(0x3ff0,0x10);
      lVar6 = 0x10;
      do {
        puVar1 = (undefined8 *)(lVar5 + -8 + lVar6);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined ***)(lVar5 + -0x10 + lVar6) = &PTR_FUN_14a8cadb0;
        lVar6 = lVar6 + 0x18;
      } while (lVar6 != 0x4000);
      iVar3 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
        FUN_1456bd870(param_1,iVar3);
      }
      *(longlong *)(*param_1 + (longlong)iVar3 * 8) = lVar5;
      iVar7 = iVar7 + 1;
    } while (iVar7 != iVar4);
  }
  return iVar2;
}



// FUNCTION 147a8e0ee FUN_147a8e0ee body=121 status=ok
// SIG undefined FUN_147a8e0ee(void)

void FUN_147a8e0ee(PSRWLOCK param_1,int param_2)

{
  int iVar1;
  
  AcquireSRWLockExclusive(param_1);
  (**(code **)(*(longlong *)
                (*(longlong *)((longlong)param_1[1].Ptr + (longlong)(param_2 / 0x2aa) * 8) +
                (ulonglong)(uint)(param_2 % 0x2aa) * 0x18) + 8))();
  iVar1 = *(int *)&param_1[5].Ptr;
  *(uint *)&param_1[5].Ptr = iVar1 + 1U;
  if (*(uint *)((longlong)&param_1[5].Ptr + 4) < iVar1 + 1U) {
    FUN_1446f48e2(param_1 + 4,iVar1);
  }
  *(int *)((longlong)param_1[4].Ptr + (longlong)iVar1 * 4) = param_2;
  ReleaseSRWLockExclusive(param_1);
  return;
}



// FUNCTION 147a8e168 FUN_147a8e168 body=316 status=ok
// SIG undefined FUN_147a8e168(void)

longlong * FUN_147a8e168(PSRWLOCK param_1,longlong *param_2,uint param_3)

{
  uint *puVar1;
  longlong lVar2;
  PSRWLOCK pRVar3;
  uint uVar4;
  undefined1 auStack_78 [44];
  uint local_4c;
  uint *local_48;
  longlong local_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_4c = param_3;
  if (*(int *)&param_1[7].Ptr != *(int *)((longlong)&param_1[0xc].Ptr + 4)) {
    pRVar3 = param_1 + 0xd;
    if (param_1[0xe].Ptr != (PSRWLOCK)0x0) {
      pRVar3 = param_1[0xe].Ptr;
    }
    uVar4 = *(uint *)((longlong)&pRVar3->Ptr +
                     (ulonglong)(*(int *)&param_1[0xf].Ptr - 1U & param_3) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar1 = (uint *)((longlong)param_1[6].Ptr + (longlong)(int)uVar4 * 0x18);
        if (*puVar1 == param_3) {
          if ((puVar1 != (uint *)0x0) && (puVar1 + 2 != (uint *)0x0)) {
            lVar2 = *(longlong *)(puVar1 + 2);
            *param_2 = lVar2;
            if (lVar2 != 0) {
              *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
            }
            goto LAB_147a8e27f;
          }
          break;
        }
        uVar4 = puVar1[4];
      } while (uVar4 != 0xffffffff);
    }
  }
  AcquireSRWLockShared(param_1);
  local_40 = (ulonglong)(uint)((int)param_3 % 0x2aa) * 0x18 +
             *(longlong *)((longlong)param_1[1].Ptr + (longlong)((int)param_3 / 0x2aa) * 8);
  local_48 = &local_4c;
  FUN_147a8e2a6(param_1 + 6,&local_34,param_3);
  lVar2 = *(longlong *)((longlong)param_1[6].Ptr + (longlong)local_34 * 0x18 + 8);
  *param_2 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  ReleaseSRWLockShared(param_1);
LAB_147a8e27f:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a8e2a6 FUN_147a8e2a6 body=311 status=ok
// SIG undefined FUN_147a8e2a6(void)

undefined4 * FUN_147a8e2a6(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  undefined4 local_40 [2];
  undefined4 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147a8d916(param_1,local_40);
  uVar1 = param_4[1];
  *local_38 = *(undefined4 *)*param_4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar4 = uVar1;
  *(undefined4 *)(puVar4 + 1) = 0;
  *(undefined8 **)(local_38 + 2) = puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar4 + 1) = 1;
  }
  local_38[4] = 0xffffffff;
  cVar2 = FUN_147a8d9fc(param_1,param_3,local_38);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar3) {
      uVar5 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      local_38[5] = param_3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_38[4] = *(undefined4 *)
                     (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4
                     );
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_40[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_147a8da8e(param_1);
    }
  }
  *param_2 = local_40[0];
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a8e3ee FUN_147a8e3ee body=167 status=ok
// SIG undefined FUN_147a8e3ee(void)

void FUN_147a8e3ee(longlong param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  
  FUN_147a8d4dc(param_1 + 0x58);
  if (param_4 != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa8));
    iVar1 = *(int *)(param_1 + 0xd8);
    *(uint *)(param_1 + 0xd8) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0xdc) < iVar1 + 1U) {
      FUN_147a8d61a((longlong *)(param_1 + 0xd0),iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0xd0);
    *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x10) = param_2;
    *(undefined8 *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x000147a8e466. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa8));
    return;
  }
  FUN_147a8e7d2(param_1 + 0x28,param_2);
  return;
}



// FUNCTION 147a8e496 FUN_147a8e496 body=97 status=ok
// SIG undefined FUN_147a8e496(void)

longlong FUN_147a8e496(longlong param_1,int param_2)

{
  longlong lVar1;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x28));
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)(param_2 / 0x2aa) * 8);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x28));
  return (longlong)(param_2 % 0x2aa) * 0x18 + lVar1;
}



// FUNCTION 147a8e4f8 FUN_147a8e4f8 body=26 status=ok
// SIG undefined FUN_147a8e4f8(void)

undefined8 FUN_147a8e4f8(longlong param_1,undefined8 param_2)

{
  FUN_147a8e84c(param_1 + 0x28);
  return param_2;
}



// FUNCTION 147a8e522 FUN_147a8e522 body=25 status=ok
// SIG undefined FUN_147a8e522(void)

undefined8 FUN_147a8e522(undefined8 param_1,undefined8 param_2)

{
  FUN_147a8cf50(param_2);
  return param_2;
}



// FUNCTION 147a8e53c FUN_147a8e53c body=46 status=ok
// SIG undefined FUN_147a8e53c(void)

undefined8 * FUN_147a8e53c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a8cace0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a8e582 FUN_147a8e582 body=259 status=ok
// SIG undefined FUN_147a8e582(void)

undefined8 FUN_147a8e582(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    FUN_140056680(&local_28,L"null");
  }
  else {
    FUN_144750a86(*(longlong *)(param_1 + 0x10),&local_28,0,0);
  }
  if (local_20 < 2) {
    FUN_140002266(param_2,L"ID: %d",*(uint *)(param_1 + 8) & 0xffffff);
  }
  else {
    FUN_140002266(&local_38,L"ID: %d",*(uint *)(param_1 + 8) & 0xffffff);
    puVar2 = &DAT_149dfb77a;
    if (local_30 != 0) {
      puVar2 = local_38;
    }
    puVar1 = &DAT_149dfb77a;
    if (local_20 != 0) {
      puVar1 = local_28;
    }
    FUN_140002266(param_2,L"%s - %s",puVar1,puVar2);
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a8e686 FUN_147a8e686 body=143 status=ok
// SIG undefined FUN_147a8e686(void)

longlong FUN_147a8e686(PSRWLOCK param_1,int param_2,uint *param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  
  AcquireSRWLockExclusive(param_1);
  iVar2 = *(int *)&param_1[5].Ptr;
  if ((longlong)iVar2 < 1) {
    uVar3 = FUN_147a8e716(param_1 + 1);
  }
  else {
    uVar3 = *(uint *)((longlong)param_1[4].Ptr + (longlong)iVar2 * 4 + -4);
    *(int *)&param_1[5].Ptr = iVar2 + -1;
  }
  *param_3 = uVar3;
  lVar1 = *(longlong *)((longlong)param_1[1].Ptr + (longlong)((int)uVar3 / 0x2aa) * 8) +
          (ulonglong)(uint)((int)uVar3 % 0x2aa) * 0x18;
  *(uint *)(lVar1 + 8) = uVar3 & 0xffffff | param_2 << 0x18;
  ReleaseSRWLockExclusive(param_1);
  return lVar1;
}



// FUNCTION 147a8e716 FUN_147a8e716 body=187 status=ok
// SIG undefined FUN_147a8e716(void)

int FUN_147a8e716(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  iVar7 = (int)param_1[1];
  iVar2 = (int)param_1[2];
  iVar4 = (iVar2 + 0x2aa) / 0x2aa;
  *(int *)(param_1 + 2) = iVar2 + 1;
  if (iVar7 < iVar4) {
    do {
      lVar5 = FUN_14001cc68(0x3ff0,0x10);
      lVar6 = 0x10;
      do {
        puVar1 = (undefined8 *)(lVar5 + -8 + lVar6);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined ***)(lVar5 + -0x10 + lVar6) = &PTR_FUN_14a8cae20;
        lVar6 = lVar6 + 0x18;
      } while (lVar6 != 0x4000);
      iVar3 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
        FUN_1456bd870(param_1,iVar3);
      }
      *(longlong *)(*param_1 + (longlong)iVar3 * 8) = lVar5;
      iVar7 = iVar7 + 1;
    } while (iVar7 != iVar4);
  }
  return iVar2;
}



// FUNCTION 147a8e7d2 FUN_147a8e7d2 body=121 status=ok
// SIG undefined FUN_147a8e7d2(void)

void FUN_147a8e7d2(PSRWLOCK param_1,int param_2)

{
  int iVar1;
  
  AcquireSRWLockExclusive(param_1);
  (**(code **)(*(longlong *)
                (*(longlong *)((longlong)param_1[1].Ptr + (longlong)(param_2 / 0x2aa) * 8) +
                (ulonglong)(uint)(param_2 % 0x2aa) * 0x18) + 8))();
  iVar1 = *(int *)&param_1[5].Ptr;
  *(uint *)&param_1[5].Ptr = iVar1 + 1U;
  if (*(uint *)((longlong)&param_1[5].Ptr + 4) < iVar1 + 1U) {
    FUN_1446f48e2(param_1 + 4,iVar1);
  }
  *(int *)((longlong)param_1[4].Ptr + (longlong)iVar1 * 4) = param_2;
  ReleaseSRWLockExclusive(param_1);
  return;
}



// FUNCTION 147a8e84c FUN_147a8e84c body=316 status=ok
// SIG undefined FUN_147a8e84c(void)

longlong * FUN_147a8e84c(PSRWLOCK param_1,longlong *param_2,uint param_3)

{
  uint *puVar1;
  longlong lVar2;
  PSRWLOCK pRVar3;
  uint uVar4;
  undefined1 auStack_78 [44];
  uint local_4c;
  uint *local_48;
  longlong local_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_4c = param_3;
  if (*(int *)&param_1[7].Ptr != *(int *)((longlong)&param_1[0xc].Ptr + 4)) {
    pRVar3 = param_1 + 0xd;
    if (param_1[0xe].Ptr != (PSRWLOCK)0x0) {
      pRVar3 = param_1[0xe].Ptr;
    }
    uVar4 = *(uint *)((longlong)&pRVar3->Ptr +
                     (ulonglong)(*(int *)&param_1[0xf].Ptr - 1U & param_3) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar1 = (uint *)((longlong)param_1[6].Ptr + (longlong)(int)uVar4 * 0x18);
        if (*puVar1 == param_3) {
          if ((puVar1 != (uint *)0x0) && (puVar1 + 2 != (uint *)0x0)) {
            lVar2 = *(longlong *)(puVar1 + 2);
            *param_2 = lVar2;
            if (lVar2 != 0) {
              *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
            }
            goto LAB_147a8e963;
          }
          break;
        }
        uVar4 = puVar1[4];
      } while (uVar4 != 0xffffffff);
    }
  }
  AcquireSRWLockShared(param_1);
  local_40 = (ulonglong)(uint)((int)param_3 % 0x2aa) * 0x18 +
             *(longlong *)((longlong)param_1[1].Ptr + (longlong)((int)param_3 / 0x2aa) * 8);
  local_48 = &local_4c;
  FUN_147a8e98a(param_1 + 6,&local_34,param_3);
  lVar2 = *(longlong *)((longlong)param_1[6].Ptr + (longlong)local_34 * 0x18 + 8);
  *param_2 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  ReleaseSRWLockShared(param_1);
LAB_147a8e963:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a8e98a FUN_147a8e98a body=311 status=ok
// SIG undefined FUN_147a8e98a(void)

undefined4 * FUN_147a8e98a(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  undefined4 local_40 [2];
  undefined4 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147a8d916(param_1,local_40);
  uVar1 = param_4[1];
  *local_38 = *(undefined4 *)*param_4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar4 = uVar1;
  *(undefined4 *)(puVar4 + 1) = 0;
  *(undefined8 **)(local_38 + 2) = puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar4 + 1) = 1;
  }
  local_38[4] = 0xffffffff;
  cVar2 = FUN_147a8d9fc(param_1,param_3,local_38);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar3) {
      uVar5 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      local_38[5] = param_3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_38[4] = *(undefined4 *)
                     (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4
                     );
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_40[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_147a8da8e(param_1);
    }
  }
  *param_2 = local_40[0];
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a8ead2 FUN_147a8ead2 body=167 status=ok
// SIG undefined FUN_147a8ead2(void)

void FUN_147a8ead2(longlong param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  
  FUN_147a8d4dc(param_1 + 0x58);
  if (param_4 != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa8));
    iVar1 = *(int *)(param_1 + 0xd8);
    *(uint *)(param_1 + 0xd8) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0xdc) < iVar1 + 1U) {
      FUN_147a8d61a((longlong *)(param_1 + 0xd0),iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0xd0);
    *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x10) = param_2;
    *(undefined8 *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x000147a8eb4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa8));
    return;
  }
  FUN_147a8eea4(param_1 + 0x28,param_2);
  return;
}



// FUNCTION 147a8eb7a FUN_147a8eb7a body=86 status=ok
// SIG undefined FUN_147a8eb7a(void)

longlong FUN_147a8eb7a(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x28));
  iVar2 = param_2 + 0x1ff;
  if (-1 < param_2) {
    iVar2 = param_2;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)(iVar2 >> 9) * 8);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x28));
  return (longlong)(param_2 % 0x200) * 0x20 + lVar1;
}



// FUNCTION 147a8ebd0 FUN_147a8ebd0 body=26 status=ok
// SIG undefined FUN_147a8ebd0(void)

undefined8 FUN_147a8ebd0(longlong param_1,undefined8 param_2)

{
  FUN_147a8ef18(param_1 + 0x28);
  return param_2;
}


