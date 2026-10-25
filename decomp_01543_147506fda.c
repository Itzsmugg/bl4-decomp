// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147506fda FUN_147506fda body=102 status=ok
// SIG undefined FUN_147506fda(void)

undefined8 * FUN_147506fda(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_2[1];
  if ((((lVar1 != 0) && (lVar2 = FUN_146331a52(), lVar2 != 0)) &&
      (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
     (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
      lVar2 + 0x30)) {
    *param_3 = 1;
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    return param_1;
  }
  *param_3 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 147507040 FUN_147507040 body=270 status=ok
// SIG undefined FUN_147507040(void)

void FUN_147507040(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_39 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  puVar2 = &local_38;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  puVar3 = &local_39;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1475076c6(&local_50,puVar2,puVar3);
  *param_3 = local_50;
  param_3[1] = uStack_4c;
  param_3[2] = uStack_48;
  param_3[3] = uStack_44;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147507156 FUN_147507156 body=337 status=ok
// SIG undefined FUN_147507156(void)

void FUN_147507156(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  puVar1 = *(undefined8 **)(param_2 + 0x38);
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
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  local_49 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_49);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_49);
  }
  puVar3 = &local_48;
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = puVar2;
  }
  puVar2 = &local_38;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  puVar4 = &local_49;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1475072a8(puVar2,puVar3,puVar4);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475072a8 FUN_1475072a8 body=97 status=ok
// SIG undefined FUN_1475072a8(void)

void FUN_1475072a8(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    lVar3 = FUN_1463a59a2();
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      uVar4 = *param_1;
      uVar5 = param_1[1];
      uVar2 = 1;
      goto LAB_1475072eb;
    }
  }
  uVar2 = 0;
  uVar4 = 0;
  uVar5 = 0;
LAB_1475072eb:
  *param_2 = uVar4;
  param_2[1] = uVar5;
  *param_3 = uVar2;
  return;
}



// FUNCTION 14750730a FUN_14750730a body=188 status=ok
// SIG undefined FUN_14750730a(void)

void FUN_14750730a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar1 = (longlong *)FUN_14750b876(puVar2);
  if (plVar1 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1);
  }
  *param_3 = uVar3;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475073ce FUN_1475073ce body=185 status=ok
// SIG undefined FUN_1475073ce(void)

void FUN_1475073ce(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  puVar3 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar2 = (longlong *)FUN_14750b876(puVar3);
  if (plVar2 == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*plVar2 + 0x120))(plVar2);
  }
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147507488 FUN_147507488 body=193 status=ok
// SIG undefined FUN_147507488(void)

void FUN_147507488(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar1 = (longlong *)FUN_14750b876(puVar2);
  if (plVar1 == (longlong *)0x0) {
    uVar3 = 0x3f800000;
  }
  else {
    uVar3 = (**(code **)(*plVar1 + 0x1c0))(plVar1);
  }
  *param_3 = uVar3;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14750754a FUN_14750754a body=186 status=ok
// SIG undefined FUN_14750754a(void)

void FUN_14750754a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  puVar3 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar1 = (longlong *)FUN_14750b876(puVar3);
  if (plVar1 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x198))(plVar1);
  }
  *param_3 = uVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147507606 FUN_147507606 body=188 status=ok
// SIG undefined FUN_147507606(void)

void FUN_147507606(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar1 = (longlong *)FUN_14750b876(puVar2);
  if (plVar1 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*plVar1 + 0x1d0))(plVar1);
  }
  *param_3 = uVar3;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475076c6 FUN_1475076c6 body=102 status=ok
// SIG undefined FUN_1475076c6(void)

undefined8 * FUN_1475076c6(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_2[1];
  if ((((lVar1 != 0) && (lVar2 = FUN_1463a59a2(), lVar2 != 0)) &&
      (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
     (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
      lVar2 + 0x30)) {
    *param_3 = 1;
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    return param_1;
  }
  *param_3 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 147507730 FUN_147507730 body=270 status=ok
// SIG undefined FUN_147507730(void)

void FUN_147507730(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_39 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  puVar2 = &local_38;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  puVar3 = &local_39;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147507ab4(&local_50,puVar2,puVar3);
  *param_3 = local_50;
  param_3[1] = uStack_4c;
  param_3[2] = uStack_48;
  param_3[3] = uStack_44;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147507846 FUN_147507846 body=337 status=ok
// SIG undefined FUN_147507846(void)

void FUN_147507846(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  puVar1 = *(undefined8 **)(param_2 + 0x38);
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
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  local_49 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_49);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_49);
  }
  puVar3 = &local_48;
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = puVar2;
  }
  puVar2 = &local_38;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  puVar4 = &local_49;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147507998(puVar2,puVar3,puVar4);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147507998 FUN_147507998 body=97 status=ok
// SIG undefined FUN_147507998(void)

void FUN_147507998(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    lVar3 = FUN_146333d46();
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      uVar4 = *param_1;
      uVar5 = param_1[1];
      uVar2 = 1;
      goto LAB_1475079db;
    }
  }
  uVar2 = 0;
  uVar4 = 0;
  uVar5 = 0;
LAB_1475079db:
  *param_2 = uVar4;
  param_2[1] = uVar5;
  *param_3 = uVar2;
  return;
}



// FUNCTION 1475079fa FUN_1475079fa body=181 status=ok
// SIG undefined FUN_1475079fa(void)

void FUN_1475079fa(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = FUN_14750b8be(puVar2);
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(lVar1 + 0x34);
  }
  *param_3 = uVar3;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147507ab4 FUN_147507ab4 body=102 status=ok
// SIG undefined FUN_147507ab4(void)

undefined8 * FUN_147507ab4(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_2[1];
  if ((((lVar1 != 0) && (lVar2 = FUN_146333d46(), lVar2 != 0)) &&
      (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
     (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
      lVar2 + 0x30)) {
    *param_3 = 1;
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    return param_1;
  }
  *param_3 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 147507b86 FUN_147507b86 body=59 status=ok
// SIG undefined FUN_147507b86(void)

undefined8 FUN_147507b86(longlong *param_1)

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



// FUNCTION 147507c94 FUN_147507c94 body=59 status=ok
// SIG undefined FUN_147507c94(void)

undefined8 FUN_147507c94(longlong *param_1)

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



// FUNCTION 147507da2 FUN_147507da2 body=59 status=ok
// SIG undefined FUN_147507da2(void)

undefined8 FUN_147507da2(longlong *param_1)

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



// FUNCTION 147507eb0 FUN_147507eb0 body=59 status=ok
// SIG undefined FUN_147507eb0(void)

undefined8 FUN_147507eb0(longlong *param_1)

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



// FUNCTION 147507f86 FUN_147507f86 body=54 status=ok
// SIG undefined FUN_147507f86(void)

undefined1 FUN_147507f86(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a67f5c(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 147507fe4 FUN_147507fe4 body=59 status=ok
// SIG undefined FUN_147507fe4(void)

undefined8 FUN_147507fe4(longlong *param_1)

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



// FUNCTION 14750802a FUN_14750802a body=37 status=ok
// SIG undefined FUN_14750802a(void)

void FUN_14750802a(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 147508192 FUN_147508192 body=137 status=ok
// SIG undefined FUN_147508192(void)

undefined8 FUN_147508192(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a67f5c(param_2,param_3);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    *(undefined1 *)(param_2 + 0x14) = *(undefined1 *)(param_3 + 0x14);
    *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(param_3 + 0x80);
    *(undefined2 *)(param_2 + 0x84) = *(undefined2 *)(param_3 + 0x84);
    FUN_14093c00e(param_2 + 0x88,param_3 + 0x88);
    *(undefined2 *)(param_2 + 0x98) = *(undefined2 *)(param_3 + 0x98);
    param_2 = param_2 + 0xa0;
    param_3 = param_3 + 0xa0;
  }
  return 1;
}



// FUNCTION 147508244 FUN_147508244 body=59 status=ok
// SIG undefined FUN_147508244(void)

undefined8 FUN_147508244(longlong *param_1)

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



// FUNCTION 147508290 FUN_147508290 body=38 status=ok
// SIG undefined FUN_147508290(void)

void FUN_147508290(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_14179beac(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 1475083fa FUN_1475083fa body=59 status=ok
// SIG undefined FUN_1475083fa(void)

undefined8 FUN_1475083fa(longlong *param_1)

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



// FUNCTION 147508508 FUN_147508508 body=59 status=ok
// SIG undefined FUN_147508508(void)

undefined8 FUN_147508508(longlong *param_1)

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



// FUNCTION 147508616 FUN_147508616 body=59 status=ok
// SIG undefined FUN_147508616(void)

undefined8 FUN_147508616(longlong *param_1)

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



// FUNCTION 147508724 FUN_147508724 body=59 status=ok
// SIG undefined FUN_147508724(void)

undefined8 FUN_147508724(longlong *param_1)

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



// FUNCTION 1475087c6 FUN_1475087c6 body=71 status=ok
// SIG undefined FUN_1475087c6(void)

undefined8 * FUN_1475087c6(void)

{
  DWORD DVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar2 = 0;
  puVar2[1] = 0;
  DVar1 = GetCurrentThreadId();
  *(DWORD *)(puVar2 + 1) = DVar1;
  *puVar2 = &PTR_FUN_14a44d4c0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  return puVar2;
}



// FUNCTION 14750880e FUN_14750880e body=38 status=ok
// SIG undefined FUN_14750880e(void)

undefined8 FUN_14750880e(undefined8 param_1,int param_2)

{
  FUN_14750887e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147508834 FUN_147508834 body=74 status=ok
// SIG undefined FUN_147508834(void)

undefined8 * FUN_147508834(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14a44d4c8;
  puVar1 = TlsGetValue(DAT_14c760fd0);
  if (puVar1 == param_1) {
    TlsSetValue(DAT_14c760fd0,(LPVOID)0x0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14750887e FUN_14750887e body=85 status=ok
// SIG undefined FUN_14750887e(void)

void FUN_14750887e(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14a44d4c0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a44d4c8;
  puVar1 = TlsGetValue(DAT_14c760fd0);
  if (puVar1 != param_1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001475088cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsSetValue(DAT_14c760fd0,(LPVOID)0x0);
  return;
}



// FUNCTION 1475088d4 FUN_1475088d4 body=132 status=ok
// SIG undefined FUN_1475088d4(void)

void FUN_1475088d4(longlong param_1,int param_2)

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



// FUNCTION 14750895a FUN_14750895a body=62 status=ok
// SIG undefined FUN_14750895a(void)

void FUN_14750895a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147508998(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 147508998 FUN_147508998 body=93 status=ok
// SIG undefined FUN_147508998(void)

ulonglong FUN_147508998(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 1475089f6 FUN_1475089f6 body=71 status=ok
// SIG undefined FUN_1475089f6(void)

longlong FUN_1475089f6(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((((*param_1 != 0) && (lVar1 = param_1[1], lVar1 != 0)) &&
      (lVar2 = FUN_146330dac(), lVar2 != 0)) &&
     ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38) &&
      (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
       lVar2 + 0x30)))) {
    return *param_1;
  }
  return 0;
}



// FUNCTION 147508a3e FUN_147508a3e body=71 status=ok
// SIG undefined FUN_147508a3e(void)

longlong FUN_147508a3e(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((((*param_1 != 0) && (lVar1 = param_1[1], lVar1 != 0)) &&
      (lVar2 = FUN_1417b54d8(), lVar2 != 0)) &&
     ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38) &&
      (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
       lVar2 + 0x30)))) {
    return *param_1;
  }
  return 0;
}



// FUNCTION 147508a86 FUN_147508a86 body=63 status=ok
// SIG undefined FUN_147508a86(void)

undefined8 FUN_147508a86(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((*(longlong *)(param_1 + 0x38) != 0) &&
     ((*(uint *)(*(longlong *)(param_1 + 0x38) + 8) >> 0x1e & 1) == 0)) {
    uVar2 = FUN_1402e44f4();
    cVar1 = FUN_144a7ca96((undefined8 *)(param_1 + 0x38),uVar2);
    if (cVar1 != '\0') {
      return *(undefined8 *)(param_1 + 0x38);
    }
  }
  return 0;
}



// FUNCTION 147508ac6 FUN_147508ac6 body=71 status=ok
// SIG undefined FUN_147508ac6(void)

longlong FUN_147508ac6(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((((*param_1 != 0) && (lVar1 = param_1[1], lVar1 != 0)) &&
      (lVar2 = FUN_146330ed8(), lVar2 != 0)) &&
     ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38) &&
      (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
       lVar2 + 0x30)))) {
    return *param_1;
  }
  return 0;
}



// FUNCTION 147508b0e FUN_147508b0e body=71 status=ok
// SIG undefined FUN_147508b0e(void)

longlong FUN_147508b0e(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((((*param_1 != 0) && (lVar1 = param_1[1], lVar1 != 0)) &&
      (lVar2 = FUN_146331096(), lVar2 != 0)) &&
     ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38) &&
      (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
       lVar2 + 0x30)))) {
    return *param_1;
  }
  return 0;
}



// FUNCTION 147508b56 FUN_147508b56 body=385 status=ok
// SIG undefined FUN_147508b56(void)

void FUN_147508b56(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  uVar4 = ((int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) + uVar2;
  if (uVar2 < uVar4) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_147508cda(param_1,uVar4);
    iVar3 = 1;
    if (3 < uVar4) {
      uVar2 = (uVar4 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar3)) {
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_1408cb1a2(param_1);
    }
  }
  plVar1 = param_2 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar3 = (int)param_2[5];
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = param_2;
  if ((iStack_44 != iVar3) || (uStack_50 != plVar1)) {
    do {
      local_58 = *local_80 + (longlong)iStack_64 * 0x14;
      uStack_50 = (longlong *)(*local_80 + (longlong)iStack_64 * 0x14 + 8);
      FUN_144a405ac(param_1,local_34,&local_58,0);
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != param_2 ||
             ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || iStack_64 != iVar3));
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147508cda FUN_147508cda body=426 status=ok
// SIG undefined FUN_147508cda(void)

void FUN_147508cda(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar8 = param_2 - iVar1;
  if (uVar8 != 0 && iVar1 <= (int)param_2) {
    uVar6 = (ulonglong)param_2;
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar6);
    }
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_1401ad22e(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_140171ad2(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar6 * 0x14 + -0x10);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x14) = iVar9 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar6 = uVar6 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar9 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -5;
      } while ((longlong)iVar11 < (longlong)uVar6);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar8;
      if (param_2 != 0) {
        plVar7 = param_1 + 2;
        uVar12 = uVar8 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar7,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar8 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar7;
        }
        if (uVar8 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar7 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar8) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar8);
      FUN_1447c6044(param_1 + 2,uVar3,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 147508e86 FUN_147508e86 body=29 status=ok
// SIG undefined FUN_147508e86(void)

undefined8 FUN_147508e86(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147508ebe FUN_147508ebe body=29 status=ok
// SIG undefined FUN_147508ebe(void)

bool FUN_147508ebe(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147508edc FUN_147508edc body=26 status=ok
// SIG undefined FUN_147508edc(void)

bool FUN_147508edc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147508ef6 FUN_147508ef6 body=24 status=ok
// SIG undefined FUN_147508ef6(void)

bool FUN_147508ef6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147508f1a FUN_147508f1a body=60 status=ok
// SIG undefined FUN_147508f1a(void)

void FUN_147508f1a(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x28);
  *puVar2 = &PTR_LAB_14a44d540;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14a44d4d0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 147508f56 FUN_147508f56 body=60 status=ok
// SIG undefined FUN_147508f56(void)

void FUN_147508f56(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x28);
  *puVar2 = &PTR_LAB_14a44d540;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14a44d4d0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 147508f92 FUN_147508f92 body=97 status=ok
// SIG undefined FUN_147508f92(void)

void FUN_147508f92(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  EnterCriticalSection(param_2);
  puVar2 = (undefined8 *)FUN_144a72ab6(0x28,param_2 + 1);
  *puVar2 = &PTR_LAB_14a44d540;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14a44d4d0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147508ff4 FUN_147508ff4 body=48 status=ok
// SIG undefined FUN_147508ff4(void)

void FUN_147508ff4(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147509021. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 147509024 FUN_147509024 body=151 status=ok
// SIG undefined FUN_147509024(void)

bool FUN_147509024(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_38);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475090be FUN_1475090be body=93 status=ok
// SIG undefined FUN_1475090be(void)

void FUN_1475090be(undefined8 param_1,longlong param_2,longlong param_3)

{
  if (((param_2 != 0) && (param_3 != 0)) &&
     (SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x7fffffffffffffff)) / SEXT816(param_3),0) < param_2)) {
    FUN_14001cc68(0xffffffffffffffff,0x10);
  }
  FUN_140eb7caa(param_1,param_3 * param_2,param_2,param_3);
  return;
}



// FUNCTION 14750911c FUN_14750911c body=239 status=ok
// SIG undefined FUN_14750911c(void)

void FUN_14750911c(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = param_1[1];
  lVar2 = param_2[2];
  local_68 = param_2[1];
  local_78 = 0;
  uStack_70 = 0;
  local_60 = lVar2;
  local_58 = lVar1;
  local_38 = lVar2;
  FUN_140eb83c2(&local_58,&local_68,&local_38,1);
  local_50 = local_68 * local_58;
  local_48 = local_58 * local_60;
  local_98 = *param_2;
  local_88 = param_2[3];
  local_80 = &local_78;
  local_90 = 1;
  FUN_140eb9374(lVar1,lVar2,*param_1,param_1[3]);
  FUN_1400020a8(local_78);
  FUN_1400020a8(uStack_70);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14750920c FUN_14750920c body=188 status=ok
// SIG undefined FUN_14750920c(void)

void FUN_14750920c(int param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14caabc00) && (FUN_144b3d300(&DAT_14caabc00), DAT_14caabc00 == -1)) {
    FUN_1457c02e6(&DAT_14caabbe8);
    _Init_thread_footer(&DAT_14caabc00);
  }
  if (param_1 == 0) {
    puVar1 = &DAT_14caabbf8;
    puVar2 = &DAT_14caabbf0;
    puVar3 = &DAT_14caabbe8;
    puVar4 = param_4;
    puVar5 = param_2;
    puVar6 = param_3;
  }
  else {
    if (param_1 != 1) {
      return;
    }
    puVar4 = &DAT_14caabbf8;
    puVar6 = &DAT_14caabbf0;
    puVar5 = &DAT_14caabbe8;
    puVar1 = param_4;
    puVar2 = param_3;
    puVar3 = param_2;
  }
  *puVar5 = *puVar3;
  *puVar6 = *puVar2;
  *puVar4 = *puVar1;
  return;
}



// FUNCTION 1475092c8 FUN_1475092c8 body=460 status=ok
// SIG undefined FUN_1475092c8(void)

/* WARNING: Removing unreachable block (ram,0x0001475092dd) */

void FUN_1475092c8(int *param_1,int *param_2,int *param_3)

{
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  byte abStack_18 [8];
  ulonglong local_10;
  
  puVar1 = (undefined4 *)cpuid_cache_tlb_info(2);
  local_28 = *puVar1;
  local_24 = puVar1[1];
  local_1c = puVar1[2];
  local_20 = puVar1[3];
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar4 = 0;
  *param_3 = 0;
  *param_2 = 0;
  *param_1 = 0;
  bVar2 = false;
LAB_147509316:
  lVar5 = lVar4 + -0xe;
  do {
    switch(abStack_18[lVar5]) {
    case 10:
    case 0x66:
      *param_1 = 8;
      break;
    case 0xc:
    case 0x10:
    case 0x15:
    case 0x60:
    case 0x67:
      *param_1 = 0x10;
      break;
    case 0xe:
      *param_1 = 0x18;
      break;
    case 0x1a:
      *param_2 = 0x60;
      break;
    case 0x22:
      *param_3 = 0x200;
      break;
    case 0x23:
      *param_3 = 0x400;
      break;
    case 0x25:
    case 0x88:
      *param_3 = 0x800;
      break;
    case 0x29:
    case 0x46:
    case 0x89:
      goto switchD_147509332_caseD_29;
    case 0x2c:
    case 0x30:
    case 0x68:
      *param_1 = 0x20;
      break;
    case 0x39:
    case 0x3b:
    case 0x41:
    case 0x79:
    case 0x81:
      *param_2 = 0x80;
      break;
    case 0x3a:
      *param_2 = 0xc0;
      break;
    case 0x3c:
    case 0x42:
    case 0x7a:
    case 0x7e:
    case 0x82:
      *param_2 = 0x100;
      break;
    case 0x3d:
      *param_2 = 0x180;
      break;
    case 0x3e:
    case 0x43:
    case 0x7b:
    case 0x7f:
    case 0x80:
    case 0x83:
    case 0x86:
      *param_2 = 0x200;
      break;
    case 0x40:
      *param_2 = 0;
      break;
    case 0x44:
    case 0x78:
    case 0x7c:
    case 0x84:
    case 0x87:
      *param_2 = 0x400;
      break;
    case 0x45:
    case 0x7d:
    case 0x85:
      *param_2 = 0x800;
      break;
    case 0x47:
    case 0x4b:
    case 0x8a:
      *param_3 = 0x2000;
      break;
    case 0x48:
      *param_2 = 0xc00;
      break;
    case 0x49:
      if (*param_2 == 0) goto LAB_147509475;
switchD_147509332_caseD_29:
      *param_3 = 0x1000;
      break;
    case 0x4a:
      *param_3 = 0x1800;
      break;
    case 0x4c:
      *param_3 = 0x3000;
      break;
    case 0x4d:
      *param_3 = 0x4000;
      break;
    case 0x4e:
      *param_2 = 0x1800;
      break;
    case 0x8d:
      *param_3 = 0xc00;
    }
    lVar5 = lVar5 + 1;
    if (lVar5 == 0) {
      if (!bVar2) goto LAB_14750944c;
      iVar3 = *param_3;
      goto LAB_147509440;
    }
  } while( true );
LAB_147509475:
  iVar3 = 0x1000;
  *param_2 = 0x1000;
  *param_3 = 0x1000;
  lVar4 = lVar5 + 0xf;
  bVar2 = true;
  if (lVar5 == -1) {
LAB_147509440:
    if (*param_2 == iVar3) {
      *param_3 = 0;
    }
LAB_14750944c:
    *param_1 = *param_1 << 10;
    *param_2 = *param_2 << 10;
    *param_3 = *param_3 << 10;
    if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  goto LAB_147509316;
}



// FUNCTION 147509496 FUN_147509496 body=202 status=ok
// SIG undefined FUN_147509496(void)

void FUN_147509496(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 auStack_b8 [47];
  undefined1 local_89;
  undefined8 *local_88;
  undefined8 **local_80;
  undefined1 *local_78;
  undefined8 *local_70;
  undefined8 local_68 [2];
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((longlong)param_3[1] < 1) || (0x13 < (longlong)(param_3[1] + param_1[1] + param_1[2]))) {
    local_50 = (undefined8 *)CONCAT44(local_50._4_4_,0xbf800000);
    FUN_147509562();
  }
  else {
    local_80 = &local_50;
    local_40 = *param_2;
    local_30 = param_2[3];
    local_28 = *param_3;
    local_18 = param_3[3];
    local_10 = param_2[2];
    local_68[0] = *param_1;
    local_88 = local_68;
    local_58 = param_1[3];
    local_78 = &local_89;
    local_70 = param_1;
    local_50 = param_2;
    local_48 = param_3;
    FUN_14750972a(&local_88);
  }
  if ((local_8 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147509562 FUN_147509562 body=454 status=ok
// SIG undefined FUN_147509562(void)

void FUN_147509562(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 *local_b0;
  undefined8 *puStack_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  longlong lStack_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  puVar2 = (undefined8 *)param_2[2];
  if (((puVar2 != (undefined8 *)0x0) && (param_2[1] != 0)) && (param_3[2] != 0)) {
    local_60 = (undefined8 *)param_1[2];
    if (local_60 == (undefined8 *)&DAT_00000001) {
      local_78 = *param_1;
      uStack_70 = param_1[1];
      local_58 = (undefined8 *)0x0;
      lStack_50 = 0;
      local_48 = param_1[3];
      local_b0 = (undefined8 *)*param_3;
      puStack_a8 = (undefined8 *)param_3[1];
      local_90 = (undefined8 *)0x0;
      uStack_88 = 0;
      local_80 = param_3[3];
      local_98 = param_3;
      local_60 = param_1;
      FUN_14750995a(&local_78,param_2);
    }
    else {
      local_68 = (undefined8 *)param_1[1];
      if (local_68 == (undefined8 *)&DAT_00000001) {
        local_78 = *param_1;
        local_58 = (undefined8 *)0x0;
        lStack_50 = 0;
        local_48 = 1;
        local_b0 = (undefined8 *)*param_2;
        local_90 = (undefined8 *)0x0;
        uStack_88 = 0;
        local_80 = 1;
        local_a0 = puVar2;
        local_98 = param_2;
        local_68 = local_60;
        local_60 = param_1;
        FUN_147509a4c(&local_78,&local_b0,param_3);
      }
      else {
        uVar1 = *param_4;
        local_78 = 0;
        uStack_70 = 0;
        local_58 = puVar2;
        FUN_14750ac12(&local_58,&local_68,&local_60,1);
        lStack_50 = (longlong)local_68 * (longlong)local_58;
        local_48 = (longlong)local_58 * (longlong)local_60;
        local_c8 = param_3[2];
        local_98 = (undefined8 *)CONCAT44(local_98._4_4_,uVar1);
        local_90 = &local_78;
        local_c0 = 0;
        local_b0 = param_2;
        puStack_a8 = param_3;
        local_a0 = param_1;
        FUN_14750af92(&local_b0,0,param_2[1],0);
        FUN_1400020a8(local_78);
        FUN_1400020a8(uStack_70);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14750972a FUN_14750972a body=412 status=ok
// SIG undefined FUN_14750972a(void)

void FUN_14750972a(longlong *param_1)

{
  float *pfVar1;
  float fVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  ulonglong *puVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  float *pfVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  puVar7 = (ulonglong *)param_1[3];
  if ((*puVar7 & 3) == 0) {
    uVar3 = puVar7[2];
    if (0 < (longlong)uVar3) {
      uVar4 = puVar7[1];
      uVar16 = (ulonglong)(-(int)puVar7[3] & 3);
      uVar17 = (ulonglong)(-((uint)(*puVar7 >> 2) & 0x3fffffff) & 3);
      if ((longlong)uVar4 <= (longlong)uVar17) {
        uVar17 = uVar4;
      }
      lVar11 = 0;
      uVar12 = 0;
      do {
        if (0 < (longlong)uVar17) {
          uVar10 = 0;
          do {
            FUN_1475098c6(param_1,uVar10,uVar12);
            uVar10 = uVar10 + 1;
          } while (uVar17 != uVar10);
        }
        uVar10 = uVar4 - uVar17 & 0xfffffffffffffffc;
        lVar9 = uVar10 + uVar17;
        if (0 < (longlong)uVar10) {
          lVar8 = uVar17 * 4;
          uVar10 = uVar17;
          do {
            lVar13 = param_1[1];
            if (*(longlong *)(lVar13 + 0x40) < 1) {
              fVar18 = 0.0;
              fVar19 = 0.0;
              fVar20 = 0.0;
              fVar21 = 0.0;
            }
            else {
              pfVar14 = (float *)(*(longlong *)(lVar13 + 0x10) + lVar8);
              fVar18 = 0.0;
              fVar19 = 0.0;
              fVar20 = 0.0;
              fVar21 = 0.0;
              lVar15 = 0;
              do {
                fVar2 = *(float *)(*(longlong *)(lVar13 + 0x38) * lVar11 +
                                   *(longlong *)(lVar13 + 0x28) + lVar15 * 4);
                fVar18 = fVar18 + *pfVar14 * fVar2;
                fVar19 = fVar19 + pfVar14[1] * fVar2;
                fVar20 = fVar20 + pfVar14[2] * fVar2;
                fVar21 = fVar21 + pfVar14[3] * fVar2;
                lVar15 = lVar15 + 1;
                pfVar14 = pfVar14 + *(longlong *)(lVar13 + 0x20);
              } while (*(longlong *)(lVar13 + 0x40) != lVar15);
            }
            lVar13 = ((longlong *)*param_1)[2] * uVar12 * 4 + *(longlong *)*param_1;
            pfVar14 = (float *)(lVar13 + uVar10 * 4);
            fVar2 = pfVar14[1];
            fVar5 = pfVar14[2];
            fVar6 = pfVar14[3];
            pfVar1 = (float *)(lVar13 + uVar10 * 4);
            *pfVar1 = *pfVar14 - fVar18;
            pfVar1[1] = fVar2 - fVar19;
            pfVar1[2] = fVar5 - fVar20;
            pfVar1[3] = fVar6 - fVar21;
            uVar10 = uVar10 + 4;
            lVar8 = lVar8 + 0x10;
          } while ((longlong)uVar10 < lVar9);
        }
        for (; lVar9 < (longlong)uVar4; lVar9 = lVar9 + 1) {
          FUN_1475098c6(param_1,lVar9,uVar12);
        }
        uVar10 = uVar17 + uVar16;
        uVar17 = uVar17 + uVar16 + 3;
        if (-1 < (longlong)uVar10) {
          uVar17 = uVar10;
        }
        uVar17 = uVar10 - (uVar17 & 0xfffffffffffffffc);
        if ((longlong)uVar4 < (longlong)uVar17) {
          uVar17 = uVar4;
        }
        uVar12 = uVar12 + 1;
        lVar11 = lVar11 + 4;
      } while (uVar12 != uVar3);
    }
  }
  else if (0 < (longlong)puVar7[2]) {
    lVar11 = 0;
    do {
      if (0 < (longlong)puVar7[1]) {
        lVar9 = 0;
        do {
          FUN_1475098c6(param_1,lVar9,lVar11);
          lVar9 = lVar9 + 1;
          puVar7 = (ulonglong *)param_1[3];
        } while (lVar9 < (longlong)puVar7[1]);
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < (longlong)puVar7[2]);
  }
  return;
}



// FUNCTION 1475098c6 FUN_1475098c6 body=148 status=ok
// SIG undefined FUN_1475098c6(void)

void FUN_1475098c6(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  
  plVar1 = (longlong *)((longlong *)param_1[1])[1];
  lVar5 = plVar1[1];
  if (lVar5 == 0) {
    fVar8 = 0.0;
  }
  else {
    plVar2 = *(longlong **)param_1[1];
    lVar4 = *plVar2;
    pfVar7 = (float *)(plVar1[3] * param_3 * 4 + *plVar1);
    fVar8 = *pfVar7 * *(float *)(lVar4 + param_2 * 4);
    if (1 < lVar5) {
      lVar3 = plVar2[3];
      pfVar6 = (float *)(lVar4 + param_2 * 4 + lVar3 * 4);
      lVar4 = 1;
      do {
        fVar8 = fVar8 + pfVar7[lVar4] * *pfVar6;
        lVar4 = lVar4 + 1;
        pfVar6 = pfVar6 + lVar3;
      } while (lVar5 != lVar4);
    }
  }
  lVar5 = param_3 * ((longlong *)*param_1)[2] * 4 + *(longlong *)*param_1;
  *(float *)(lVar5 + param_2 * 4) = *(float *)(lVar5 + param_2 * 4) - fVar8;
  return;
}



// FUNCTION 14750995a FUN_14750995a body=240 status=ok
// SIG undefined FUN_14750995a(void)

void FUN_14750995a(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,float *param_4)

{
  longlong lVar1;
  float *pfVar2;
  longlong lVar3;
  float fVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  float local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2[1] == 1) {
    lVar1 = param_3[1];
    if (lVar1 == 0) {
      fVar4 = 0.0;
    }
    else {
      pfVar2 = (float *)*param_2;
      fVar4 = *(float *)*param_3 * *pfVar2;
      if (1 < lVar1) {
        lVar3 = 1;
        do {
          pfVar2 = pfVar2 + param_2[3];
          fVar4 = fVar4 + ((float *)*param_3)[lVar3] * *pfVar2;
          lVar3 = lVar3 + 1;
        } while (lVar1 != lVar3);
      }
    }
    *(float *)*param_1 = *param_4 * fVar4 + *(float *)*param_1;
  }
  else {
    local_20 = *param_3;
    local_38 = *param_4;
    local_48 = *param_1;
    local_18 = 1;
    local_30 = *param_2;
    local_28 = param_2[3];
    local_40 = 1;
    FUN_147509b58(param_2[1],param_2[2]);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147509a4c FUN_147509a4c body=267 status=ok
// SIG undefined FUN_147509a4c(void)

void FUN_147509a4c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,float *param_4)

{
  longlong lVar1;
  float *pfVar2;
  longlong lVar3;
  float fVar4;
  undefined1 auStack_b8 [40];
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
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
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_3[2] == 1) {
    lVar1 = param_3[1];
    if (lVar1 == 0) {
      fVar4 = 0.0;
    }
    else {
      pfVar2 = (float *)*param_2;
      fVar4 = *(float *)*param_3 * *pfVar2;
      if (1 < lVar1) {
        lVar3 = 1;
        do {
          pfVar2 = pfVar2 + *(longlong *)(param_2[3] + 0x18);
          fVar4 = fVar4 + ((float *)*param_3)[lVar3] * *pfVar2;
          lVar3 = lVar3 + 1;
        } while (lVar1 != lVar3);
      }
    }
    *(float *)*param_1 = *param_4 * fVar4 + *(float *)*param_1;
  }
  else {
    local_58 = param_2[6];
    local_88 = *param_2;
    uStack_80 = param_2[1];
    local_78 = param_2[2];
    uStack_70 = param_2[3];
    local_68 = param_2[4];
    uStack_60 = param_2[5];
    local_18 = param_1[6];
    local_48 = *(undefined4 *)param_1;
    uStack_44 = *(undefined4 *)((longlong)param_1 + 4);
    uStack_40 = *(undefined4 *)(param_1 + 1);
    uStack_3c = *(undefined4 *)((longlong)param_1 + 0xc);
    local_38 = *(undefined4 *)(param_1 + 2);
    uStack_34 = *(undefined4 *)((longlong)param_1 + 0x14);
    uStack_30 = *(undefined4 *)(param_1 + 3);
    uStack_2c = *(undefined4 *)((longlong)param_1 + 0x1c);
    local_28 = *(undefined4 *)(param_1 + 4);
    uStack_24 = *(undefined4 *)((longlong)param_1 + 0x24);
    uStack_20 = *(undefined4 *)(param_1 + 5);
    uStack_1c = *(undefined4 *)((longlong)param_1 + 0x2c);
    local_90 = param_3;
    FUN_14750a0ea(&local_90,&local_88,&local_48);
  }
  if ((local_8 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147509b58 FUN_147509b58 body=1426 status=ok
// SIG undefined FUN_147509b58(void)

void FUN_147509b58(ulonglong param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  longlong param_5,undefined8 param_6,float param_7)

{
  longlong lVar1;
  ulonglong uVar2;
  float *pfVar3;
  float fVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
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
  float fVar18;
  float fVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  float *pfVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  
  lVar5 = param_3[1];
  uVar2 = lVar5 * 4;
  lVar24 = 4;
  if (uVar2 < 32000) {
    lVar24 = 0x10;
  }
  if (param_2 < 0x80) {
    lVar24 = param_2;
  }
  if (0 < param_2) {
    lVar26 = *param_3;
    pfVar20 = (float *)(lVar26 + 0x70);
    lVar28 = 0;
    lVar25 = 0;
    do {
      lVar1 = lVar25 + lVar24;
      lVar31 = lVar1;
      if (param_2 < lVar1) {
        lVar31 = param_2;
      }
      if ((longlong)param_1 < 0x20) {
        uVar23 = 0;
      }
      else {
        uVar23 = 0;
        pfVar22 = pfVar20;
        do {
          pfVar21 = (float *)(lVar28 * param_4[1] + *param_4);
          fVar60 = 0.0;
          fVar61 = 0.0;
          fVar62 = 0.0;
          fVar63 = 0.0;
          fVar56 = 0.0;
          fVar57 = 0.0;
          fVar58 = 0.0;
          fVar59 = 0.0;
          fVar52 = 0.0;
          fVar53 = 0.0;
          fVar54 = 0.0;
          fVar55 = 0.0;
          fVar48 = 0.0;
          fVar49 = 0.0;
          fVar50 = 0.0;
          fVar51 = 0.0;
          fVar44 = 0.0;
          fVar45 = 0.0;
          fVar46 = 0.0;
          fVar47 = 0.0;
          fVar40 = 0.0;
          fVar41 = 0.0;
          fVar42 = 0.0;
          fVar43 = 0.0;
          fVar36 = 0.0;
          fVar37 = 0.0;
          fVar38 = 0.0;
          fVar39 = 0.0;
          fVar32 = 0.0;
          fVar33 = 0.0;
          fVar34 = 0.0;
          fVar35 = 0.0;
          pfVar27 = pfVar22;
          lVar29 = lVar25;
          do {
            fVar4 = *pfVar21;
            fVar60 = fVar60 + pfVar27[-0x1c] * fVar4;
            fVar61 = fVar61 + pfVar27[-0x1b] * fVar4;
            fVar62 = fVar62 + pfVar27[-0x1a] * fVar4;
            fVar63 = fVar63 + pfVar27[-0x19] * fVar4;
            fVar56 = fVar56 + pfVar27[-0x18] * fVar4;
            fVar57 = fVar57 + pfVar27[-0x17] * fVar4;
            fVar58 = fVar58 + pfVar27[-0x16] * fVar4;
            fVar59 = fVar59 + pfVar27[-0x15] * fVar4;
            fVar52 = fVar52 + pfVar27[-0x14] * fVar4;
            fVar53 = fVar53 + pfVar27[-0x13] * fVar4;
            fVar54 = fVar54 + pfVar27[-0x12] * fVar4;
            fVar55 = fVar55 + pfVar27[-0x11] * fVar4;
            fVar48 = fVar48 + pfVar27[-0x10] * fVar4;
            fVar49 = fVar49 + pfVar27[-0xf] * fVar4;
            fVar50 = fVar50 + pfVar27[-0xe] * fVar4;
            fVar51 = fVar51 + pfVar27[-0xd] * fVar4;
            fVar44 = fVar44 + pfVar27[-0xc] * fVar4;
            fVar45 = fVar45 + pfVar27[-0xb] * fVar4;
            fVar46 = fVar46 + pfVar27[-10] * fVar4;
            fVar47 = fVar47 + pfVar27[-9] * fVar4;
            fVar40 = fVar40 + pfVar27[-8] * fVar4;
            fVar41 = fVar41 + pfVar27[-7] * fVar4;
            fVar42 = fVar42 + pfVar27[-6] * fVar4;
            fVar43 = fVar43 + pfVar27[-5] * fVar4;
            fVar36 = fVar36 + pfVar27[-4] * fVar4;
            fVar37 = fVar37 + pfVar27[-3] * fVar4;
            fVar38 = fVar38 + pfVar27[-2] * fVar4;
            fVar39 = fVar39 + pfVar27[-1] * fVar4;
            fVar32 = fVar32 + *pfVar27 * fVar4;
            fVar33 = fVar33 + pfVar27[1] * fVar4;
            fVar34 = fVar34 + pfVar27[2] * fVar4;
            fVar35 = fVar35 + pfVar27[3] * fVar4;
            lVar29 = lVar29 + 1;
            pfVar27 = pfVar27 + lVar5;
            pfVar21 = pfVar21 + param_4[1];
          } while (lVar29 < lVar31);
          pfVar27 = (float *)(param_5 + uVar23 * 4);
          fVar4 = pfVar27[1];
          fVar6 = pfVar27[2];
          fVar7 = pfVar27[3];
          pfVar21 = (float *)(param_5 + 0x10 + uVar23 * 4);
          fVar8 = *pfVar21;
          fVar9 = pfVar21[1];
          fVar10 = pfVar21[2];
          fVar11 = pfVar21[3];
          pfVar21 = (float *)(param_5 + 0x20 + uVar23 * 4);
          fVar12 = *pfVar21;
          fVar13 = pfVar21[1];
          fVar14 = pfVar21[2];
          fVar15 = pfVar21[3];
          pfVar21 = (float *)(param_5 + 0x30 + uVar23 * 4);
          fVar16 = *pfVar21;
          fVar17 = pfVar21[1];
          fVar18 = pfVar21[2];
          fVar19 = pfVar21[3];
          pfVar21 = (float *)(param_5 + uVar23 * 4);
          *pfVar21 = *pfVar27 + fVar60 * param_7;
          pfVar21[1] = fVar4 + fVar61 * param_7;
          pfVar21[2] = fVar6 + fVar62 * param_7;
          pfVar21[3] = fVar7 + fVar63 * param_7;
          pfVar27 = (float *)(param_5 + 0x10 + uVar23 * 4);
          *pfVar27 = fVar56 * param_7 + fVar8;
          pfVar27[1] = fVar57 * param_7 + fVar9;
          pfVar27[2] = fVar58 * param_7 + fVar10;
          pfVar27[3] = fVar59 * param_7 + fVar11;
          pfVar27 = (float *)(param_5 + 0x20 + uVar23 * 4);
          *pfVar27 = fVar52 * param_7 + fVar12;
          pfVar27[1] = fVar53 * param_7 + fVar13;
          pfVar27[2] = fVar54 * param_7 + fVar14;
          pfVar27[3] = fVar55 * param_7 + fVar15;
          pfVar27 = (float *)(param_5 + 0x30 + uVar23 * 4);
          *pfVar27 = fVar48 * param_7 + fVar16;
          pfVar27[1] = fVar49 * param_7 + fVar17;
          pfVar27[2] = fVar50 * param_7 + fVar18;
          pfVar27[3] = fVar51 * param_7 + fVar19;
          pfVar27 = (float *)(param_5 + 0x40 + uVar23 * 4);
          fVar48 = pfVar27[1];
          fVar49 = pfVar27[2];
          fVar50 = pfVar27[3];
          pfVar21 = (float *)(param_5 + 0x40 + uVar23 * 4);
          *pfVar21 = fVar44 * param_7 + *pfVar27;
          pfVar21[1] = fVar45 * param_7 + fVar48;
          pfVar21[2] = fVar46 * param_7 + fVar49;
          pfVar21[3] = fVar47 * param_7 + fVar50;
          pfVar27 = (float *)(param_5 + 0x50 + uVar23 * 4);
          fVar44 = pfVar27[1];
          fVar45 = pfVar27[2];
          fVar46 = pfVar27[3];
          pfVar21 = (float *)(param_5 + 0x50 + uVar23 * 4);
          *pfVar21 = fVar40 * param_7 + *pfVar27;
          pfVar21[1] = fVar41 * param_7 + fVar44;
          pfVar21[2] = fVar42 * param_7 + fVar45;
          pfVar21[3] = fVar43 * param_7 + fVar46;
          pfVar27 = (float *)(param_5 + 0x60 + uVar23 * 4);
          fVar40 = pfVar27[1];
          fVar41 = pfVar27[2];
          fVar42 = pfVar27[3];
          pfVar21 = (float *)(param_5 + 0x60 + uVar23 * 4);
          *pfVar21 = fVar36 * param_7 + *pfVar27;
          pfVar21[1] = fVar37 * param_7 + fVar40;
          pfVar21[2] = fVar38 * param_7 + fVar41;
          pfVar21[3] = fVar39 * param_7 + fVar42;
          pfVar27 = (float *)(param_5 + 0x70 + uVar23 * 4);
          fVar36 = pfVar27[1];
          fVar37 = pfVar27[2];
          fVar38 = pfVar27[3];
          pfVar21 = (float *)(param_5 + 0x70 + uVar23 * 4);
          *pfVar21 = fVar32 * param_7 + *pfVar27;
          pfVar21[1] = fVar33 * param_7 + fVar36;
          pfVar21[2] = fVar34 * param_7 + fVar37;
          pfVar21[3] = fVar35 * param_7 + fVar38;
          uVar23 = uVar23 + 0x20;
          pfVar22 = pfVar22 + 0x20;
        } while ((longlong)uVar23 < (longlong)(param_1 - 0x1f));
      }
      if ((longlong)uVar23 < (longlong)(param_1 - 0xf)) {
        pfVar27 = (float *)(param_4[1] * lVar28 + *param_4);
        pfVar22 = (float *)(lVar26 + uVar23 * 4);
        fVar44 = 0.0;
        fVar45 = 0.0;
        fVar46 = 0.0;
        fVar47 = 0.0;
        fVar40 = 0.0;
        fVar41 = 0.0;
        fVar42 = 0.0;
        fVar43 = 0.0;
        fVar36 = 0.0;
        fVar37 = 0.0;
        fVar38 = 0.0;
        fVar39 = 0.0;
        fVar32 = 0.0;
        fVar33 = 0.0;
        fVar34 = 0.0;
        fVar35 = 0.0;
        lVar29 = lVar25;
        do {
          fVar48 = *pfVar27;
          fVar44 = fVar44 + *pfVar22 * fVar48;
          fVar45 = fVar45 + pfVar22[1] * fVar48;
          fVar46 = fVar46 + pfVar22[2] * fVar48;
          fVar47 = fVar47 + pfVar22[3] * fVar48;
          fVar40 = fVar40 + pfVar22[4] * fVar48;
          fVar41 = fVar41 + pfVar22[5] * fVar48;
          fVar42 = fVar42 + pfVar22[6] * fVar48;
          fVar43 = fVar43 + pfVar22[7] * fVar48;
          fVar36 = fVar36 + pfVar22[8] * fVar48;
          fVar37 = fVar37 + pfVar22[9] * fVar48;
          fVar38 = fVar38 + pfVar22[10] * fVar48;
          fVar39 = fVar39 + pfVar22[0xb] * fVar48;
          fVar32 = fVar32 + pfVar22[0xc] * fVar48;
          fVar33 = fVar33 + pfVar22[0xd] * fVar48;
          fVar34 = fVar34 + pfVar22[0xe] * fVar48;
          fVar35 = fVar35 + pfVar22[0xf] * fVar48;
          lVar29 = lVar29 + 1;
          pfVar27 = pfVar27 + param_4[1];
          pfVar22 = pfVar22 + lVar5;
        } while (lVar29 < lVar31);
        pfVar22 = (float *)(param_5 + uVar23 * 4);
        fVar48 = pfVar22[1];
        fVar49 = pfVar22[2];
        fVar50 = pfVar22[3];
        pfVar27 = (float *)(param_5 + 0x10 + uVar23 * 4);
        fVar51 = *pfVar27;
        fVar52 = pfVar27[1];
        fVar53 = pfVar27[2];
        fVar54 = pfVar27[3];
        pfVar27 = (float *)(param_5 + 0x20 + uVar23 * 4);
        fVar55 = *pfVar27;
        fVar56 = pfVar27[1];
        fVar57 = pfVar27[2];
        fVar58 = pfVar27[3];
        pfVar27 = (float *)(param_5 + 0x30 + uVar23 * 4);
        fVar59 = *pfVar27;
        fVar60 = pfVar27[1];
        fVar61 = pfVar27[2];
        fVar62 = pfVar27[3];
        pfVar27 = (float *)(param_5 + uVar23 * 4);
        *pfVar27 = *pfVar22 + fVar44 * param_7;
        pfVar27[1] = fVar48 + fVar45 * param_7;
        pfVar27[2] = fVar49 + fVar46 * param_7;
        pfVar27[3] = fVar50 + fVar47 * param_7;
        pfVar22 = (float *)(param_5 + 0x10 + uVar23 * 4);
        *pfVar22 = fVar40 * param_7 + fVar51;
        pfVar22[1] = fVar41 * param_7 + fVar52;
        pfVar22[2] = fVar42 * param_7 + fVar53;
        pfVar22[3] = fVar43 * param_7 + fVar54;
        pfVar22 = (float *)(param_5 + 0x20 + uVar23 * 4);
        *pfVar22 = fVar36 * param_7 + fVar55;
        pfVar22[1] = fVar37 * param_7 + fVar56;
        pfVar22[2] = fVar38 * param_7 + fVar57;
        pfVar22[3] = fVar39 * param_7 + fVar58;
        pfVar22 = (float *)(param_5 + 0x30 + uVar23 * 4);
        *pfVar22 = fVar32 * param_7 + fVar59;
        pfVar22[1] = fVar33 * param_7 + fVar60;
        pfVar22[2] = fVar34 * param_7 + fVar61;
        pfVar22[3] = fVar35 * param_7 + fVar62;
        uVar23 = uVar23 | 0x10;
      }
      if ((longlong)uVar23 < (longlong)(param_1 - 0xb)) {
        lVar29 = uVar23 * 4;
        pfVar22 = (float *)(param_4[1] * lVar28 + *param_4);
        fVar40 = 0.0;
        fVar41 = 0.0;
        fVar42 = 0.0;
        fVar43 = 0.0;
        fVar36 = 0.0;
        fVar37 = 0.0;
        fVar38 = 0.0;
        fVar39 = 0.0;
        fVar32 = 0.0;
        fVar33 = 0.0;
        fVar34 = 0.0;
        fVar35 = 0.0;
        lVar30 = lVar25;
        do {
          fVar44 = *pfVar22;
          pfVar27 = (float *)(lVar26 + lVar29);
          pfVar21 = (float *)(lVar26 + 0x10 + lVar29);
          pfVar3 = (float *)(lVar26 + 0x20 + lVar29);
          fVar40 = fVar40 + *pfVar27 * fVar44;
          fVar41 = fVar41 + pfVar27[1] * fVar44;
          fVar42 = fVar42 + pfVar27[2] * fVar44;
          fVar43 = fVar43 + pfVar27[3] * fVar44;
          fVar36 = fVar36 + *pfVar21 * fVar44;
          fVar37 = fVar37 + pfVar21[1] * fVar44;
          fVar38 = fVar38 + pfVar21[2] * fVar44;
          fVar39 = fVar39 + pfVar21[3] * fVar44;
          fVar32 = fVar32 + *pfVar3 * fVar44;
          fVar33 = fVar33 + pfVar3[1] * fVar44;
          fVar34 = fVar34 + pfVar3[2] * fVar44;
          fVar35 = fVar35 + pfVar3[3] * fVar44;
          lVar30 = lVar30 + 1;
          lVar29 = lVar29 + uVar2;
          pfVar22 = pfVar22 + param_4[1];
        } while (lVar30 < lVar31);
        pfVar22 = (float *)(param_5 + uVar23 * 4);
        fVar44 = pfVar22[1];
        fVar45 = pfVar22[2];
        fVar46 = pfVar22[3];
        pfVar27 = (float *)(param_5 + 0x10 + uVar23 * 4);
        fVar47 = *pfVar27;
        fVar48 = pfVar27[1];
        fVar49 = pfVar27[2];
        fVar50 = pfVar27[3];
        pfVar27 = (float *)(param_5 + 0x20 + uVar23 * 4);
        fVar51 = *pfVar27;
        fVar52 = pfVar27[1];
        fVar53 = pfVar27[2];
        fVar54 = pfVar27[3];
        pfVar27 = (float *)(param_5 + uVar23 * 4);
        *pfVar27 = *pfVar22 + fVar40 * param_7;
        pfVar27[1] = fVar44 + fVar41 * param_7;
        pfVar27[2] = fVar45 + fVar42 * param_7;
        pfVar27[3] = fVar46 + fVar43 * param_7;
        pfVar22 = (float *)(param_5 + 0x10 + uVar23 * 4);
        *pfVar22 = fVar36 * param_7 + fVar47;
        pfVar22[1] = fVar37 * param_7 + fVar48;
        pfVar22[2] = fVar38 * param_7 + fVar49;
        pfVar22[3] = fVar39 * param_7 + fVar50;
        pfVar22 = (float *)(param_5 + 0x20 + uVar23 * 4);
        *pfVar22 = fVar32 * param_7 + fVar51;
        pfVar22[1] = fVar33 * param_7 + fVar52;
        pfVar22[2] = fVar34 * param_7 + fVar53;
        pfVar22[3] = fVar35 * param_7 + fVar54;
        uVar23 = uVar23 + 0xc;
      }
      if ((longlong)uVar23 < (longlong)(param_1 - 7)) {
        lVar29 = uVar23 * 4;
        pfVar22 = (float *)(param_4[1] * lVar28 + *param_4);
        fVar32 = 0.0;
        fVar33 = 0.0;
        fVar34 = 0.0;
        fVar35 = 0.0;
        fVar36 = 0.0;
        fVar37 = 0.0;
        fVar38 = 0.0;
        fVar39 = 0.0;
        lVar30 = lVar25;
        do {
          fVar40 = *pfVar22;
          pfVar27 = (float *)(lVar26 + lVar29);
          pfVar21 = (float *)(lVar26 + 0x10 + lVar29);
          fVar36 = fVar36 + *pfVar27 * fVar40;
          fVar37 = fVar37 + pfVar27[1] * fVar40;
          fVar38 = fVar38 + pfVar27[2] * fVar40;
          fVar39 = fVar39 + pfVar27[3] * fVar40;
          fVar32 = fVar32 + *pfVar21 * fVar40;
          fVar33 = fVar33 + pfVar21[1] * fVar40;
          fVar34 = fVar34 + pfVar21[2] * fVar40;
          fVar35 = fVar35 + pfVar21[3] * fVar40;
          lVar30 = lVar30 + 1;
          lVar29 = lVar29 + uVar2;
          pfVar22 = pfVar22 + param_4[1];
        } while (lVar30 < lVar31);
        pfVar22 = (float *)(param_5 + uVar23 * 4);
        fVar40 = pfVar22[1];
        fVar41 = pfVar22[2];
        fVar42 = pfVar22[3];
        pfVar27 = (float *)(param_5 + 0x10 + uVar23 * 4);
        fVar43 = *pfVar27;
        fVar44 = pfVar27[1];
        fVar45 = pfVar27[2];
        fVar46 = pfVar27[3];
        pfVar27 = (float *)(param_5 + uVar23 * 4);
        *pfVar27 = *pfVar22 + fVar36 * param_7;
        pfVar27[1] = fVar40 + fVar37 * param_7;
        pfVar27[2] = fVar41 + fVar38 * param_7;
        pfVar27[3] = fVar42 + fVar39 * param_7;
        pfVar22 = (float *)(param_5 + 0x10 + uVar23 * 4);
        *pfVar22 = fVar32 * param_7 + fVar43;
        pfVar22[1] = fVar33 * param_7 + fVar44;
        pfVar22[2] = fVar34 * param_7 + fVar45;
        pfVar22[3] = fVar35 * param_7 + fVar46;
        uVar23 = uVar23 + 8;
      }
      if ((longlong)uVar23 < (longlong)(param_1 - 3)) {
        pfVar27 = (float *)(param_4[1] * lVar28 + *param_4);
        pfVar22 = (float *)(lVar26 + uVar23 * 4);
        fVar32 = 0.0;
        fVar33 = 0.0;
        fVar34 = 0.0;
        fVar35 = 0.0;
        lVar29 = lVar25;
        do {
          fVar36 = *pfVar27;
          fVar32 = fVar32 + *pfVar22 * fVar36;
          fVar33 = fVar33 + pfVar22[1] * fVar36;
          fVar34 = fVar34 + pfVar22[2] * fVar36;
          fVar35 = fVar35 + pfVar22[3] * fVar36;
          lVar29 = lVar29 + 1;
          pfVar22 = pfVar22 + lVar5;
          pfVar27 = pfVar27 + param_4[1];
        } while (lVar29 < lVar31);
        pfVar22 = (float *)(param_5 + uVar23 * 4);
        fVar36 = pfVar22[1];
        fVar37 = pfVar22[2];
        fVar38 = pfVar22[3];
        pfVar27 = (float *)(param_5 + uVar23 * 4);
        *pfVar27 = fVar32 * param_7 + *pfVar22;
        pfVar27[1] = fVar33 * param_7 + fVar36;
        pfVar27[2] = fVar34 * param_7 + fVar37;
        pfVar27[3] = fVar35 * param_7 + fVar38;
        uVar23 = uVar23 + 4;
      }
      if ((longlong)uVar23 < (longlong)param_1) {
        pfVar22 = (float *)(lVar26 + uVar23 * 4);
        do {
          pfVar21 = (float *)(lVar28 * param_4[1] + *param_4);
          fVar32 = 0.0;
          lVar29 = lVar25;
          pfVar27 = pfVar22;
          do {
            fVar32 = fVar32 + *pfVar27 * *pfVar21;
            lVar29 = lVar29 + 1;
            pfVar27 = pfVar27 + lVar5;
            pfVar21 = pfVar21 + param_4[1];
          } while (lVar29 < lVar31);
          *(float *)(param_5 + uVar23 * 4) = fVar32 * param_7 + *(float *)(param_5 + uVar23 * 4);
          uVar23 = uVar23 + 1;
          pfVar22 = pfVar22 + 1;
        } while (uVar23 != param_1);
      }
      pfVar20 = pfVar20 + lVar5 * lVar24;
      lVar28 = lVar28 + lVar24 * 4;
      lVar26 = lVar26 + lVar5 * lVar24 * 4;
      lVar25 = lVar1;
    } while (lVar1 < param_2);
  }
  return;
}



// FUNCTION 14750a0ea FUN_14750a0ea body=388 status=ok
// SIG undefined FUN_14750a0ea(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14750a0ea(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  undefined4 *puVar14;
  undefined1 auStack_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 local_68;
  ulonglong local_60;
  undefined1 local_48 [8];
  
  local_60 = DAT_14c707940 ^ (ulonglong)local_48;
  puVar3 = (undefined8 *)*param_1;
  puVar14 = (undefined4 *)*param_2;
  uVar4 = param_2[2];
  lVar5 = param_2[3];
  uVar2 = *param_4;
  if (uVar4 >> 0x3e != 0) {
    FUN_14001cc68(0xffffffffffffffff,0x10);
  }
  uVar1 = uVar4 * 4;
  if (uVar1 < 0x20001) {
    lVar10 = -(uVar1 + 0x1e & 0xfffffffffffffff0);
    puVar13 = auStack_88 + lVar10;
    puVar11 = auStack_88 + lVar10;
  }
  else {
    puVar11 = (undefined1 *)FUN_14001cc68(uVar1,0x10);
    puVar13 = auStack_88;
    if (puVar11 == (undefined1 *)0x0) {
      FUN_14001cc68(0xffffffffffffffff,0x10);
      puVar13 = auStack_88;
      puVar11 = (undefined1 *)0x0;
    }
  }
  if (0 < (longlong)uVar4) {
    lVar5 = *(longlong *)(lVar5 + 0x18);
    uVar12 = 0;
    do {
      *(undefined4 *)(puVar11 + uVar12 * 4) = *puVar14;
      uVar12 = uVar12 + 1;
      puVar14 = puVar14 + lVar5;
    } while (uVar4 != uVar12);
  }
  uVar6 = *param_3;
  uVar7 = *(undefined8 *)(param_3[3] + 0x18);
  local_68 = 1;
  local_80 = *puVar3;
  local_78 = puVar3[3];
  uVar8 = puVar3[1];
  uVar9 = puVar3[2];
  local_70 = puVar11;
  *(undefined4 *)(puVar13 + -0x10) = uVar2;
  *(undefined8 *)(puVar13 + -0x18) = uVar7;
  *(undefined8 *)(puVar13 + -0x20) = uVar6;
  *(undefined8 *)(puVar13 + -0x48) = 0x14750a1e2;
  FUN_14750a274(uVar9,uVar8);
  if (0x20000 < uVar1) {
    *(undefined8 *)(puVar13 + -0x28) = 0x14750a1fb;
    FUN_1400020a8(puVar11);
  }
  if ((local_60 ^ (ulonglong)local_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar13 + -0x28) = &UNK_14750a26e;
  FUN_144d8e3a0();
}



// FUNCTION 14750a274 FUN_14750a274 body=2462 status=ok
// SIG undefined FUN_14750a274(void)

void FUN_14750a274(ulonglong param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  longlong param_5,longlong param_6,float param_7)

{
  float *pfVar1;
  ulonglong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  float *pfVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  ulonglong local_128;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  
  lVar8 = *param_3;
  lVar17 = param_3[1];
  uVar2 = lVar17 * 4;
  if ((longlong)param_1 < 8 || 32000 < uVar2) {
    uVar9 = 0;
  }
  else {
    lVar11 = lVar17 * 0x20;
    local_130 = lVar17 * 0x1c + lVar8;
    local_138 = lVar8 + lVar17 * 0x18;
    local_140 = lVar8 + lVar17 * 0x14;
    local_e8 = lVar17 * 0x10 + lVar8;
    local_f0 = lVar8 + lVar17 * 0xc;
    local_f8 = lVar8 + lVar17 * 8;
    local_100 = lVar8 + uVar2;
    uVar9 = 0;
    lVar15 = lVar8;
    do {
      if (param_2 < 4) {
        fVar47 = 0.0;
        fVar48 = 0.0;
        fVar49 = 0.0;
        fVar50 = 0.0;
        fVar43 = 0.0;
        fVar44 = 0.0;
        fVar45 = 0.0;
        fVar46 = 0.0;
        fVar39 = 0.0;
        fVar40 = 0.0;
        fVar41 = 0.0;
        fVar42 = 0.0;
        fVar35 = 0.0;
        fVar36 = 0.0;
        fVar37 = 0.0;
        fVar38 = 0.0;
        fVar31 = 0.0;
        fVar32 = 0.0;
        fVar33 = 0.0;
        fVar34 = 0.0;
        fVar27 = 0.0;
        fVar28 = 0.0;
        fVar29 = 0.0;
        fVar30 = 0.0;
        fVar23 = 0.0;
        fVar24 = 0.0;
        fVar25 = 0.0;
        fVar26 = 0.0;
        fVar19 = 0.0;
        fVar20 = 0.0;
        fVar21 = 0.0;
        fVar22 = 0.0;
        lVar18 = 0;
      }
      else {
        fVar19 = 0.0;
        fVar20 = 0.0;
        fVar21 = 0.0;
        fVar22 = 0.0;
        fVar23 = 0.0;
        fVar24 = 0.0;
        fVar25 = 0.0;
        fVar26 = 0.0;
        fVar27 = 0.0;
        fVar28 = 0.0;
        fVar29 = 0.0;
        fVar30 = 0.0;
        fVar31 = 0.0;
        fVar32 = 0.0;
        fVar33 = 0.0;
        fVar34 = 0.0;
        fVar35 = 0.0;
        fVar36 = 0.0;
        fVar37 = 0.0;
        fVar38 = 0.0;
        fVar39 = 0.0;
        fVar40 = 0.0;
        fVar41 = 0.0;
        fVar42 = 0.0;
        fVar43 = 0.0;
        fVar44 = 0.0;
        fVar45 = 0.0;
        fVar46 = 0.0;
        fVar47 = 0.0;
        fVar48 = 0.0;
        fVar49 = 0.0;
        fVar50 = 0.0;
        lVar14 = 0;
        do {
          pfVar13 = (float *)(*param_4 + lVar14 * 4);
          fVar3 = *pfVar13;
          fVar4 = pfVar13[1];
          fVar5 = pfVar13[2];
          fVar6 = pfVar13[3];
          pfVar13 = (float *)(lVar15 + lVar14 * 4);
          fVar19 = fVar19 + *pfVar13 * fVar3;
          fVar20 = fVar20 + pfVar13[1] * fVar4;
          fVar21 = fVar21 + pfVar13[2] * fVar5;
          fVar22 = fVar22 + pfVar13[3] * fVar6;
          pfVar1 = pfVar13 + lVar17;
          fVar23 = fVar23 + *pfVar1 * fVar3;
          fVar24 = fVar24 + pfVar1[1] * fVar4;
          fVar25 = fVar25 + pfVar1[2] * fVar5;
          fVar26 = fVar26 + pfVar1[3] * fVar6;
          pfVar1 = pfVar13 + lVar17 * 2;
          fVar27 = fVar27 + *pfVar1 * fVar3;
          fVar28 = fVar28 + pfVar1[1] * fVar4;
          fVar29 = fVar29 + pfVar1[2] * fVar5;
          fVar30 = fVar30 + pfVar1[3] * fVar6;
          pfVar1 = pfVar13 + lVar17 * 3;
          fVar31 = fVar31 + *pfVar1 * fVar3;
          fVar32 = fVar32 + pfVar1[1] * fVar4;
          fVar33 = fVar33 + pfVar1[2] * fVar5;
          fVar34 = fVar34 + pfVar1[3] * fVar6;
          pfVar1 = pfVar13 + lVar17 * 4;
          fVar35 = fVar35 + *pfVar1 * fVar3;
          fVar36 = fVar36 + pfVar1[1] * fVar4;
          fVar37 = fVar37 + pfVar1[2] * fVar5;
          fVar38 = fVar38 + pfVar1[3] * fVar6;
          pfVar1 = pfVar13 + lVar17 * 5;
          fVar39 = fVar39 + *pfVar1 * fVar3;
          fVar40 = fVar40 + pfVar1[1] * fVar4;
          fVar41 = fVar41 + pfVar1[2] * fVar5;
          fVar42 = fVar42 + pfVar1[3] * fVar6;
          pfVar1 = pfVar13 + lVar17 * 6;
          pfVar13 = pfVar13 + lVar17 * 7;
          fVar43 = fVar43 + *pfVar1 * fVar3;
          fVar44 = fVar44 + pfVar1[1] * fVar4;
          fVar45 = fVar45 + pfVar1[2] * fVar5;
          fVar46 = fVar46 + pfVar1[3] * fVar6;
          fVar47 = fVar47 + *pfVar13 * fVar3;
          fVar48 = fVar48 + pfVar13[1] * fVar4;
          fVar49 = fVar49 + pfVar13[2] * fVar5;
          fVar50 = fVar50 + pfVar13[3] * fVar6;
          lVar18 = lVar14 + 4;
          lVar10 = lVar14 + 8;
          lVar14 = lVar18;
        } while (lVar10 <= param_2);
      }
      fVar19 = fVar21 + fVar19 + fVar22 + fVar20;
      fVar20 = fVar25 + fVar23 + fVar26 + fVar24;
      fVar21 = fVar29 + fVar27 + fVar30 + fVar28;
      fVar22 = fVar33 + fVar31 + fVar34 + fVar32;
      fVar23 = fVar37 + fVar35 + fVar38 + fVar36;
      fVar24 = fVar41 + fVar39 + fVar42 + fVar40;
      fVar25 = fVar45 + fVar43 + fVar46 + fVar44;
      fVar26 = fVar49 + fVar47 + fVar50 + fVar48;
      if (lVar18 < param_2) {
        lVar14 = 0;
        do {
          fVar27 = *(float *)(lVar18 * 4 + *param_4 + lVar14 * 4);
          fVar19 = fVar19 + *(float *)(lVar15 + lVar18 * 4 + lVar14 * 4) * fVar27;
          fVar20 = fVar20 + *(float *)(local_100 + lVar18 * 4 + lVar14 * 4) * fVar27;
          fVar21 = fVar21 + *(float *)(local_f8 + lVar18 * 4 + lVar14 * 4) * fVar27;
          fVar22 = fVar22 + *(float *)(local_f0 + lVar18 * 4 + lVar14 * 4) * fVar27;
          fVar23 = fVar23 + *(float *)(local_e8 + lVar18 * 4 + lVar14 * 4) * fVar27;
          fVar24 = fVar24 + *(float *)(local_140 + lVar18 * 4 + lVar14 * 4) * fVar27;
          fVar25 = fVar25 + *(float *)(local_138 + lVar18 * 4 + lVar14 * 4) * fVar27;
          fVar26 = fVar26 + fVar27 * *(float *)(local_130 + lVar18 * 4 + lVar14 * 4);
          lVar14 = lVar14 + 1;
        } while (param_2 - lVar18 != lVar14);
      }
      local_128 = uVar9 | 7;
      *(float *)(param_5 + uVar9 * param_6 * 4) =
           fVar19 * param_7 + *(float *)(param_5 + uVar9 * param_6 * 4);
      lVar14 = (uVar9 | 1) * param_6;
      *(float *)(param_5 + lVar14 * 4) = fVar20 * param_7 + *(float *)(param_5 + lVar14 * 4);
      lVar14 = (uVar9 | 2) * param_6;
      *(float *)(param_5 + lVar14 * 4) = fVar21 * param_7 + *(float *)(param_5 + lVar14 * 4);
      lVar14 = (uVar9 | 3) * param_6;
      *(float *)(param_5 + lVar14 * 4) = fVar22 * param_7 + *(float *)(param_5 + lVar14 * 4);
      lVar14 = (uVar9 | 4) * param_6;
      *(float *)(param_5 + lVar14 * 4) = fVar23 * param_7 + *(float *)(param_5 + lVar14 * 4);
      lVar14 = (uVar9 | 5) * param_6;
      *(float *)(param_5 + lVar14 * 4) = fVar24 * param_7 + *(float *)(param_5 + lVar14 * 4);
      lVar14 = (uVar9 | 6) * param_6;
      *(float *)(param_5 + lVar14 * 4) = fVar25 * param_7 + *(float *)(param_5 + lVar14 * 4);
      *(float *)(param_5 + local_128 * param_6 * 4) =
           fVar26 * param_7 + *(float *)(param_5 + local_128 * param_6 * 4);
      uVar9 = uVar9 + 8;
      lVar15 = lVar15 + lVar11;
      local_130 = local_130 + lVar11;
      local_138 = local_138 + lVar11;
      local_140 = local_140 + lVar11;
      local_e8 = local_e8 + lVar11;
      local_f0 = local_f0 + lVar11;
      local_f8 = local_f8 + lVar11;
      local_100 = local_100 + lVar11;
    } while ((longlong)uVar9 < (longlong)(param_1 - 7));
  }
  if ((longlong)uVar9 < (longlong)(param_1 - 3)) {
    lVar15 = lVar8 + (uVar9 + 3) * lVar17 * 4;
    lVar10 = lVar17 * 0x10;
    lVar11 = lVar8 + (uVar9 + 2) * lVar17 * 4;
    lVar14 = lVar8 + (uVar9 + 1) * lVar17 * 4;
    lVar18 = lVar8 + uVar9 * lVar17 * 4;
    do {
      if (param_2 < 4) {
        fVar31 = 0.0;
        fVar32 = 0.0;
        fVar33 = 0.0;
        fVar34 = 0.0;
        fVar27 = 0.0;
        fVar28 = 0.0;
        fVar29 = 0.0;
        fVar30 = 0.0;
        fVar23 = 0.0;
        fVar24 = 0.0;
        fVar25 = 0.0;
        fVar26 = 0.0;
        fVar19 = 0.0;
        fVar20 = 0.0;
        fVar21 = 0.0;
        fVar22 = 0.0;
        lVar16 = 0;
      }
      else {
        fVar19 = 0.0;
        fVar20 = 0.0;
        fVar21 = 0.0;
        fVar22 = 0.0;
        fVar23 = 0.0;
        fVar24 = 0.0;
        fVar25 = 0.0;
        fVar26 = 0.0;
        fVar27 = 0.0;
        fVar28 = 0.0;
        fVar29 = 0.0;
        fVar30 = 0.0;
        fVar31 = 0.0;
        fVar32 = 0.0;
        fVar33 = 0.0;
        fVar34 = 0.0;
        lVar12 = 0;
        do {
          pfVar13 = (float *)(*param_4 + lVar12 * 4);
          fVar35 = *pfVar13;
          fVar36 = pfVar13[1];
          fVar37 = pfVar13[2];
          fVar38 = pfVar13[3];
          pfVar13 = (float *)(lVar18 + lVar12 * 4);
          fVar19 = fVar19 + *pfVar13 * fVar35;
          fVar20 = fVar20 + pfVar13[1] * fVar36;
          fVar21 = fVar21 + pfVar13[2] * fVar37;
          fVar22 = fVar22 + pfVar13[3] * fVar38;
          pfVar13 = (float *)(lVar14 + lVar12 * 4);
          fVar23 = fVar23 + *pfVar13 * fVar35;
          fVar24 = fVar24 + pfVar13[1] * fVar36;
          fVar25 = fVar25 + pfVar13[2] * fVar37;
          fVar26 = fVar26 + pfVar13[3] * fVar38;
          pfVar13 = (float *)(lVar11 + lVar12 * 4);
          fVar27 = fVar27 + *pfVar13 * fVar35;
          fVar28 = fVar28 + pfVar13[1] * fVar36;
          fVar29 = fVar29 + pfVar13[2] * fVar37;
          fVar30 = fVar30 + pfVar13[3] * fVar38;
          pfVar13 = (float *)(lVar15 + lVar12 * 4);
          fVar31 = fVar31 + *pfVar13 * fVar35;
          fVar32 = fVar32 + pfVar13[1] * fVar36;
          fVar33 = fVar33 + pfVar13[2] * fVar37;
          fVar34 = fVar34 + pfVar13[3] * fVar38;
          lVar16 = lVar12 + 4;
          lVar7 = lVar12 + 8;
          lVar12 = lVar16;
        } while (lVar7 <= param_2);
      }
      fVar19 = fVar21 + fVar19 + fVar22 + fVar20;
      fVar20 = fVar25 + fVar23 + fVar26 + fVar24;
      fVar21 = fVar29 + fVar27 + fVar30 + fVar28;
      fVar22 = fVar33 + fVar31 + fVar34 + fVar32;
      if (lVar16 < param_2) {
        lVar12 = 0;
        do {
          fVar23 = *(float *)(lVar16 * 4 + *param_4 + lVar12 * 4);
          fVar19 = fVar19 + *(float *)(lVar18 + lVar16 * 4 + lVar12 * 4) * fVar23;
          fVar20 = fVar20 + *(float *)(lVar14 + lVar16 * 4 + lVar12 * 4) * fVar23;
          fVar21 = fVar21 + *(float *)(lVar11 + lVar16 * 4 + lVar12 * 4) * fVar23;
          fVar22 = fVar22 + fVar23 * *(float *)(lVar15 + lVar16 * 4 + lVar12 * 4);
          lVar12 = lVar12 + 1;
        } while (param_2 - lVar16 != lVar12);
      }
      *(float *)(param_5 + uVar9 * param_6 * 4) =
           fVar19 * param_7 + *(float *)(param_5 + uVar9 * param_6 * 4);
      lVar12 = (uVar9 + 1) * param_6;
      *(float *)(param_5 + lVar12 * 4) = fVar20 * param_7 + *(float *)(param_5 + lVar12 * 4);
      lVar12 = (uVar9 + 2) * param_6;
      *(float *)(param_5 + lVar12 * 4) = fVar21 * param_7 + *(float *)(param_5 + lVar12 * 4);
      lVar12 = (uVar9 + 3) * param_6;
      *(float *)(param_5 + lVar12 * 4) = fVar22 * param_7 + *(float *)(param_5 + lVar12 * 4);
      uVar9 = uVar9 + 4;
      lVar15 = lVar15 + lVar10;
      lVar11 = lVar11 + lVar10;
      lVar14 = lVar14 + lVar10;
      lVar18 = lVar18 + lVar10;
    } while ((longlong)uVar9 < (longlong)(param_1 - 3));
  }
  if ((longlong)uVar9 < (longlong)(param_1 - 1)) {
    lVar15 = lVar8 + (uVar9 + 1) * lVar17 * 4;
    lVar11 = lVar8 + uVar9 * lVar17 * 4;
    do {
      if (param_2 < 4) {
        fVar19 = 0.0;
        fVar20 = 0.0;
        fVar21 = 0.0;
        fVar22 = 0.0;
        fVar23 = 0.0;
        fVar24 = 0.0;
        fVar25 = 0.0;
        fVar26 = 0.0;
        lVar18 = 0;
      }
      else {
        fVar23 = 0.0;
        fVar24 = 0.0;
        fVar25 = 0.0;
        fVar26 = 0.0;
        fVar19 = 0.0;
        fVar20 = 0.0;
        fVar21 = 0.0;
        fVar22 = 0.0;
        lVar14 = 0;
        do {
          pfVar13 = (float *)(*param_4 + lVar14 * 4);
          pfVar1 = (float *)(lVar11 + lVar14 * 4);
          fVar19 = fVar19 + *pfVar1 * *pfVar13;
          fVar20 = fVar20 + pfVar1[1] * pfVar13[1];
          fVar21 = fVar21 + pfVar1[2] * pfVar13[2];
          fVar22 = fVar22 + pfVar1[3] * pfVar13[3];
          pfVar1 = (float *)(lVar15 + lVar14 * 4);
          fVar23 = fVar23 + *pfVar1 * *pfVar13;
          fVar24 = fVar24 + pfVar1[1] * pfVar13[1];
          fVar25 = fVar25 + pfVar1[2] * pfVar13[2];
          fVar26 = fVar26 + pfVar1[3] * pfVar13[3];
          lVar18 = lVar14 + 4;
          lVar10 = lVar14 + 8;
          lVar14 = lVar18;
        } while (lVar10 <= param_2);
      }
      fVar19 = fVar21 + fVar19 + fVar22 + fVar20;
      fVar20 = fVar25 + fVar23 + fVar26 + fVar24;
      if (lVar18 < param_2) {
        do {
          fVar21 = *(float *)(*param_4 + lVar18 * 4);
          fVar19 = fVar19 + *(float *)(lVar11 + lVar18 * 4) * fVar21;
          fVar20 = fVar20 + fVar21 * *(float *)(lVar15 + lVar18 * 4);
          lVar18 = lVar18 + 1;
        } while (param_2 != lVar18);
      }
      *(float *)(param_5 + uVar9 * param_6 * 4) =
           fVar19 * param_7 + *(float *)(param_5 + uVar9 * param_6 * 4);
      lVar14 = (uVar9 + 1) * param_6;
      *(float *)(param_5 + lVar14 * 4) = fVar20 * param_7 + *(float *)(param_5 + lVar14 * 4);
      uVar9 = uVar9 + 2;
      lVar15 = lVar15 + lVar17 * 8;
      lVar11 = lVar11 + lVar17 * 8;
    } while ((longlong)uVar9 < (longlong)(param_1 - 1));
  }
  if ((longlong)uVar9 < (longlong)param_1) {
    lVar8 = lVar8 + lVar17 * uVar9 * 4;
    do {
      if (param_2 < 4) {
        fVar19 = 0.0;
        fVar20 = 0.0;
        fVar21 = 0.0;
        fVar22 = 0.0;
        lVar15 = 0;
      }
      else {
        fVar19 = 0.0;
        fVar20 = 0.0;
        fVar21 = 0.0;
        fVar22 = 0.0;
        lVar17 = 0;
        do {
          pfVar13 = (float *)(*param_4 + lVar17 * 4);
          pfVar1 = (float *)(lVar8 + lVar17 * 4);
          fVar19 = fVar19 + *pfVar1 * *pfVar13;
          fVar20 = fVar20 + pfVar1[1] * pfVar13[1];
          fVar21 = fVar21 + pfVar1[2] * pfVar13[2];
          fVar22 = fVar22 + pfVar1[3] * pfVar13[3];
          lVar15 = lVar17 + 4;
          lVar11 = lVar17 + 8;
          lVar17 = lVar15;
        } while (lVar11 <= param_2);
      }
      fVar19 = fVar21 + fVar19 + fVar22 + fVar20;
      if (lVar15 < param_2) {
        do {
          fVar19 = fVar19 + *(float *)(lVar8 + lVar15 * 4) * *(float *)(*param_4 + lVar15 * 4);
          lVar15 = lVar15 + 1;
        } while (param_2 != lVar15);
      }
      *(float *)(param_5 + uVar9 * param_6 * 4) =
           fVar19 * param_7 + *(float *)(param_5 + uVar9 * param_6 * 4);
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + uVar2;
    } while (uVar9 != param_1);
  }
  return;
}



// FUNCTION 14750ac12 FUN_14750ac12 body=894 status=ok
// SIG undefined FUN_14750ac12(void)

void FUN_14750ac12(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3,longlong param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14750920c(0,&local_30,&local_38,&local_40);
  if (param_4 < 2) {
    uVar6 = *param_2;
    uVar3 = *param_3;
    if ((longlong)*param_3 < (longlong)uVar6) {
      uVar3 = uVar6;
    }
    uVar5 = *param_1;
    if ((longlong)uVar3 < (longlong)uVar5) {
      uVar3 = uVar5;
    }
    if ((longlong)uVar3 < 0x30) goto LAB_14750ae31;
    uVar7 = (longlong)(local_30 - 0x80) / 0x30 & 0xfffffffffffffff8;
    uVar3 = 1;
    if (1 < (longlong)uVar7) {
      uVar3 = uVar7;
    }
    uVar7 = uVar5;
    if ((longlong)uVar3 < (longlong)uVar5) {
      uVar7 = uVar3;
      if (uVar5 % uVar3 != 0) {
        uVar7 = uVar3 + ((longlong)(~(uVar5 % uVar3) + uVar3) / (longlong)((uVar5 / uVar3) * 8 + 8))
                        * -8;
      }
      *param_1 = uVar7;
      uVar6 = *param_2;
    }
    uVar8 = (local_30 - 0x80) - uVar7 * 4 * uVar6;
    if ((longlong)uVar8 < (longlong)(uVar7 * 0x10)) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar3 << 4;
      uVar8 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x480000)) / auVar1,0);
    }
    else {
      uVar8 = uVar8 / (uVar7 * 4);
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar7 * 8;
    uVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x180000)) / auVar2,0);
    if ((longlong)uVar8 < (longlong)uVar3) {
      uVar3 = uVar8;
    }
    uVar3 = uVar3 & 0xfffffffffffffffc;
    uVar8 = *param_3;
    if ((longlong)uVar3 < (longlong)uVar8) {
      if ((longlong)uVar8 % (longlong)uVar3 != 0) {
        uVar3 = uVar3 + ((longlong)(uVar3 - (longlong)uVar8 % (longlong)uVar3) /
                        (((longlong)uVar8 / (longlong)uVar3) * 4 + 4)) * -4;
      }
      *param_3 = uVar3;
      goto LAB_14750ae31;
    }
    if (uVar5 != uVar7) goto LAB_14750ae31;
    uVar7 = uVar8 * uVar5 * 4;
    uVar3 = uVar6;
    if ((((0x400 < (longlong)uVar7) && (local_30 = 0x180000, uVar7 < 0x8001)) && (local_40 != 0)) &&
       (local_30 = local_38, uVar3 = 0x240, (longlong)uVar6 < 0x240)) {
      uVar3 = uVar6;
    }
    local_30 = local_30 / (uVar5 * 0xc);
    if ((longlong)uVar3 < (longlong)local_30) {
      local_30 = uVar3;
    }
    if ((longlong)local_30 < 9) {
      if (local_30 == 0) goto LAB_14750ae31;
    }
    else {
      local_30 = local_30 & 0x7ffffffffffffff8;
    }
    if ((longlong)uVar6 % (longlong)local_30 != 0) {
      local_30 = local_30 +
                 ((longlong)(local_30 - (longlong)uVar6 % (longlong)local_30) /
                 (((longlong)uVar6 / (longlong)local_30) * 8 + 8)) * -8;
    }
  }
  else {
    uVar6 = (longlong)(local_30 - 0x80) / 0x30;
    if (0x13f < (longlong)uVar6) {
      uVar6 = 0x140;
    }
    uVar3 = 8;
    if (8 < (longlong)uVar6) {
      uVar3 = uVar6;
    }
    uVar6 = *param_1;
    if ((longlong)uVar3 < (longlong)uVar6) {
      uVar6 = uVar3 & 0x7ffffffffffffff8;
      *param_1 = uVar6;
    }
    uVar3 = (local_38 - local_30) / (uVar6 << 4);
    uVar6 = *param_3;
    lVar4 = (longlong)(uVar6 + param_4 + -1) / param_4;
    if (lVar4 < (longlong)uVar3) {
      uVar5 = lVar4 + 6;
      if (-1 < (longlong)(lVar4 + 3U)) {
        uVar5 = lVar4 + 3U;
      }
      uVar3 = uVar5 & 0xfffffffffffffffc;
      if ((longlong)uVar6 <= (longlong)(uVar5 & 0xfffffffffffffffc)) {
        uVar3 = uVar6;
      }
    }
    else {
      uVar6 = uVar3 + 3;
      if (-1 < (longlong)uVar3) {
        uVar6 = uVar3;
      }
      uVar3 = uVar6 & 0xfffffffffffffffc;
    }
    *param_3 = uVar3;
    if (local_40 - local_38 == 0 || local_40 < (longlong)local_38) goto LAB_14750ae31;
    local_30 = (local_40 - local_38) / (*param_1 * param_4 * 4);
    uVar6 = *param_2;
    param_4 = (longlong)(param_4 + -1 + uVar6) / param_4;
    if ((longlong)local_30 < 8 || param_4 <= (longlong)local_30) {
      uVar3 = param_4 + 0xe;
      if (-1 < (longlong)(param_4 + 7U)) {
        uVar3 = param_4 + 7U;
      }
      uVar5 = uVar3 & 0xfffffffffffffff8;
      if ((longlong)uVar6 <= (longlong)(uVar3 & 0xfffffffffffffff8)) {
        uVar5 = uVar6;
      }
      *param_2 = uVar5;
      goto LAB_14750ae31;
    }
    local_30 = local_30 & 0x7ffffffffffffff8;
  }
  *param_2 = local_30;
LAB_14750ae31:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14750af92 FUN_14750af92 body=189 status=ok
// SIG undefined FUN_14750af92(void)

void FUN_14750af92(longlong *param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  longlong param_5,undefined8 param_6)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar1 = (longlong *)param_1[1];
  if (param_5 == -1) {
    param_5 = plVar1[2];
  }
  lVar2 = ((longlong *)param_1[2])[3];
  plVar3 = (longlong *)*param_1;
  FUN_14750b050(param_3,param_5,plVar3[2],param_2 * 4 + *plVar3,plVar3[3],
                param_4 * plVar1[3] * 4 + *plVar1,plVar1[3],
                lVar2 * param_4 * 4 + *(longlong *)param_1[2] + param_2 * 4,1,lVar2,(int)param_1[3],
                param_1[4],param_6);
  return;
}



// FUNCTION 14750b050 FUN_14750b050 body=1255 status=ok
// SIG undefined FUN_14750b050(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14750b050(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6,longlong param_7,longlong param_8,
                  undefined8 param_9,longlong param_10,undefined4 param_11,longlong *param_12)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  ulonglong local_108;
  ulonglong local_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
  longlong local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  byte local_8a;
  byte local_89;
  longlong local_88;
  longlong local_80;
  undefined1 local_73;
  undefined1 local_72;
  undefined1 local_71;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)&local_d8;
  local_a0 = param_12[4];
  lVar4 = param_12[2];
  lVar12 = param_12[3];
  local_c8 = param_1;
  if (lVar4 < param_1) {
    local_c8 = lVar4;
  }
  local_a8 = param_2;
  if (lVar12 < param_2) {
    local_a8 = lVar12;
  }
  uVar10 = local_c8 * local_a0;
  local_110 = param_4;
  local_98 = param_2;
  if (uVar10 >> 0x3e != 0) {
    FUN_14001cc68(0xffffffffffffffff,0x10);
  }
  plVar8 = &local_158;
  uVar5 = local_a8 * local_a0;
  local_d8 = (undefined1 *)*param_12;
  uVar10 = uVar10 * 4;
  if (local_d8 == (undefined1 *)0x0) {
    if (uVar10 < 0x20001) {
      lVar9 = -(uVar10 + 0x1e & 0xfffffffffffffff0);
      plVar8 = (longlong *)((longlong)&local_158 + lVar9);
      local_d8 = (undefined1 *)((longlong)&local_158 + lVar9);
    }
    else {
      local_d8 = (undefined1 *)FUN_14001cc68(uVar10,0x10);
      plVar8 = &local_158;
      if (local_d8 == (undefined1 *)0x0) {
        FUN_14001cc68(0xffffffffffffffff,0x10);
        plVar8 = &local_158;
        local_d8 = (undefined1 *)0x0;
      }
    }
  }
  local_f8 = (undefined1 *)0x0;
  if (*param_12 == 0) {
    local_f8 = local_d8;
  }
  if (0x3fffffffffffffff < uVar5) {
    *(undefined8 *)((longlong)plVar8 + -0x28) = 0x14750b13e;
    FUN_14001cc68(0xffffffffffffffff,0x10);
  }
  lVar9 = local_98;
  local_e0 = (undefined1 *)param_12[1];
  uVar5 = uVar5 * 4;
  if (local_e0 == (undefined1 *)0x0) {
    if (uVar5 < 0x20001) {
      *(undefined8 *)((longlong)plVar8 + -8) = 0x14750b491;
      lVar1 = -(uVar5 + 0x1e & 0xfffffffffffffff0);
      local_e0 = (undefined1 *)((longlong)plVar8 + lVar1);
      plVar8 = (longlong *)((longlong)plVar8 + lVar1);
    }
    else {
      *(undefined8 *)((longlong)plVar8 + -0x28) = 0x14750b507;
      local_e0 = (undefined1 *)FUN_14001cc68(uVar5,0x10);
      lVar9 = local_98;
      if (local_e0 == (undefined1 *)0x0) {
        *(undefined8 *)((longlong)plVar8 + -0x28) = 0x14750b52d;
        FUN_14001cc68(0xffffffffffffffff,0x10);
        local_e0 = (undefined1 *)0x0;
        lVar9 = local_98;
      }
    }
  }
  lVar1 = local_98;
  local_f0 = (undefined1 *)0x0;
  if (param_12[1] == 0) {
    local_f0 = local_e0;
  }
  local_108 = uVar10;
  local_100 = uVar5;
  if (0 < param_1) {
    local_d0 = param_8;
    local_89 = (local_a0 != param_3 || param_1 <= lVar4) || lVar12 < lVar9;
    local_118 = local_c8 * 4;
    local_158 = param_10 * local_a8 * 4;
    local_130 = local_a0 * 4;
    local_150 = param_7 * local_a8 * 4;
    local_128 = 0;
    puVar7 = local_d8;
    local_138 = param_3;
    local_120 = param_1;
    do {
      lVar4 = local_c8 + local_128;
      local_b8 = local_120;
      if (lVar4 < local_120) {
        local_b8 = lVar4;
      }
      if (0 < param_3) {
        local_b8 = local_b8 - local_128;
        local_140 = local_110 + local_128 * 4;
        local_8a = local_128 == 0 | local_89;
        local_b0 = param_6;
        local_148 = 0;
        local_128 = lVar4;
        do {
          lVar4 = local_a0 + local_148;
          if (lVar4 < param_3) {
            param_3 = lVar4;
          }
          param_3 = param_3 - local_148;
          local_88 = local_140 + local_148 * param_5 * 4;
          local_80 = param_5;
          local_148 = lVar4;
          *(undefined8 *)((longlong)plVar8 + -0x18) = 0;
          *(undefined8 *)((longlong)plVar8 + -0x10) = 0;
          *(longlong *)((longlong)plVar8 + -0x20) = local_b8;
          local_e8 = param_3;
          *(undefined8 *)((longlong)plVar8 + -0x48) = 0x14750b2a9;
          FUN_140eba42a(&local_71,puVar7,&local_88,param_3);
          if (0 < lVar1) {
            lVar9 = 0;
            local_c0 = local_b0;
            lVar11 = 0;
            lVar4 = local_d0;
            lVar12 = local_a8;
            do {
              puVar7 = local_e0;
              lVar6 = lVar12;
              if (lVar1 < lVar12) {
                lVar6 = lVar1;
              }
              if (local_8a != 0) {
                local_88 = local_c0;
                local_80 = param_7;
                *(undefined8 *)((longlong)plVar8 + -0x18) = 0;
                *(undefined8 *)((longlong)plVar8 + -0x10) = 0;
                *(longlong *)((longlong)plVar8 + -0x20) = lVar6 + lVar9;
                lVar2 = local_e8;
                *(undefined8 *)((longlong)plVar8 + -0x48) = 0x14750b3a4;
                FUN_14750b53c(&local_72,puVar7,&local_88,lVar2);
              }
              lVar2 = local_a8;
              puVar3 = local_e0;
              lVar11 = lVar11 + local_a8;
              local_80 = param_10;
              local_88 = lVar4;
              *(undefined8 *)((longlong)plVar8 + -0x10) = 0;
              *(undefined8 *)((longlong)plVar8 + -8) = 0;
              *(undefined8 *)((longlong)plVar8 + -0x18) = 0xffffffffffffffff;
              *(undefined8 *)((longlong)plVar8 + -0x20) = 0xffffffffffffffff;
              *(undefined4 *)((longlong)plVar8 + -0x28) = param_11;
              *(longlong *)((longlong)plVar8 + -0x30) = lVar6 + lVar9;
              *(longlong *)((longlong)plVar8 + -0x38) = local_e8;
              *(longlong *)((longlong)plVar8 + -0x40) = local_b8;
              puVar7 = local_d8;
              *(undefined8 *)((longlong)plVar8 + -0x68) = 0x14750b34a;
              FUN_140ebb53c(&local_73,&local_88,puVar7,puVar3);
              lVar4 = lVar4 + local_158;
              local_c0 = local_c0 + local_150;
              lVar12 = lVar12 + lVar2;
              lVar9 = lVar9 - lVar2;
            } while (lVar11 < lVar1);
          }
          local_b0 = local_b0 + local_130;
          param_3 = local_138;
          lVar4 = local_128;
        } while (local_148 < local_138);
      }
      local_128 = lVar4;
      local_d0 = local_d0 + local_118;
    } while (local_128 < local_120);
  }
  puVar7 = local_f0;
  if (0x20000 < local_100) {
    *(undefined8 *)((longlong)plVar8 + -0x28) = 0x14750b3fe;
    FUN_1400020a8(puVar7);
  }
  puVar7 = local_f8;
  if (0x20000 < local_108) {
    *(undefined8 *)((longlong)plVar8 + -0x28) = 0x14750b419;
    FUN_1400020a8(puVar7);
  }
  if ((local_70 ^ (ulonglong)&local_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((longlong)plVar8 + -0x28) = &UNK_14750b455;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14750b53c FUN_14750b53c body=557 status=ok
// SIG undefined FUN_14750b53c(void)

void FUN_14750b53c(undefined8 param_1,longlong param_2,longlong *param_3,ulonglong param_4,
                  ulonglong param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
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
  undefined4 uVar19;
  undefined4 uVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  
  uVar23 = param_5 + 3;
  if (-1 < (longlong)param_5) {
    uVar23 = param_5;
  }
  uVar26 = uVar23 & 0xfffffffffffffffc;
  uVar25 = param_4 + 3;
  if (-1 < (longlong)param_4) {
    uVar25 = param_4;
  }
  if ((longlong)param_5 < 4) {
    lVar28 = 0;
  }
  else {
    lVar22 = 0xc;
    lVar31 = 8;
    lVar32 = 4;
    lVar29 = 0;
    lVar30 = 0;
    lVar28 = 0;
    do {
      lVar4 = *param_3;
      lVar5 = param_3[1];
      if ((longlong)param_4 < 4) {
        lVar27 = 0;
      }
      else {
        lVar27 = 0;
        do {
          puVar1 = (undefined4 *)(lVar5 * lVar29 + lVar4 + lVar27 * 4);
          uVar6 = puVar1[1];
          uVar7 = puVar1[2];
          uVar8 = puVar1[3];
          puVar2 = (undefined4 *)(lVar5 * lVar32 + lVar4 + lVar27 * 4);
          uVar9 = *puVar2;
          uVar10 = puVar2[1];
          uVar11 = puVar2[2];
          uVar12 = puVar2[3];
          puVar2 = (undefined4 *)(lVar5 * lVar31 + lVar4 + lVar27 * 4);
          uVar13 = *puVar2;
          uVar14 = puVar2[1];
          uVar15 = puVar2[2];
          uVar16 = puVar2[3];
          puVar2 = (undefined4 *)(lVar5 * lVar22 + lVar4 + lVar27 * 4);
          uVar17 = *puVar2;
          uVar18 = puVar2[1];
          uVar19 = puVar2[2];
          uVar20 = puVar2[3];
          puVar2 = (undefined4 *)(param_2 + lVar28 * 4);
          *puVar2 = *puVar1;
          puVar2[1] = uVar9;
          puVar2[2] = uVar13;
          puVar2[3] = uVar17;
          puVar1 = (undefined4 *)(param_2 + 0x10 + lVar28 * 4);
          *puVar1 = uVar6;
          puVar1[1] = uVar10;
          puVar1[2] = uVar14;
          puVar1[3] = uVar18;
          puVar1 = (undefined4 *)(param_2 + 0x20 + lVar28 * 4);
          *puVar1 = uVar7;
          puVar1[1] = uVar11;
          puVar1[2] = uVar15;
          puVar1[3] = uVar19;
          puVar1 = (undefined4 *)(param_2 + 0x30 + lVar28 * 4);
          *puVar1 = uVar8;
          puVar1[1] = uVar12;
          puVar1[2] = uVar16;
          puVar1[3] = uVar20;
          lVar28 = lVar28 + 0x10;
          lVar27 = lVar27 + 4;
        } while (lVar27 < (longlong)(uVar25 & 0xfffffffffffffffc));
      }
      lVar21 = param_4 - lVar27;
      if (lVar21 != 0 && lVar27 <= (longlong)param_4) {
        lVar3 = param_2 + 0xc + lVar28 * 4;
        lVar24 = 0;
        do {
          *(undefined4 *)(lVar3 + -0xc + lVar24 * 4) =
               *(undefined4 *)(lVar5 * lVar29 + lVar27 * 4 + lVar4 + lVar24);
          *(undefined4 *)(lVar3 + -8 + lVar24 * 4) =
               *(undefined4 *)(lVar5 * lVar32 + lVar27 * 4 + lVar4 + lVar24);
          *(undefined4 *)(lVar3 + -4 + lVar24 * 4) =
               *(undefined4 *)(lVar5 * lVar31 + lVar27 * 4 + lVar4 + lVar24);
          *(undefined4 *)(lVar3 + lVar24 * 4) =
               *(undefined4 *)(lVar5 * lVar22 + lVar27 * 4 + lVar4 + lVar24);
          lVar24 = lVar24 + 4;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar28 = lVar28 + lVar24;
      }
      lVar30 = lVar30 + 4;
      lVar22 = lVar22 + 0x10;
      lVar31 = lVar31 + 0x10;
      lVar32 = lVar32 + 0x10;
      lVar29 = lVar29 + 0x10;
    } while (lVar30 < (longlong)uVar26);
  }
  if ((longlong)uVar26 < (longlong)param_5) {
    lVar22 = ((longlong)uVar23 >> 2) << 4;
    do {
      if (0 < (longlong)param_4) {
        lVar29 = param_3[1];
        lVar30 = *param_3;
        uVar23 = 0;
        do {
          *(undefined4 *)(param_2 + lVar28 * 4 + uVar23 * 4) =
               *(undefined4 *)(lVar29 * lVar22 + lVar30 + uVar23 * 4);
          uVar23 = uVar23 + 1;
        } while (param_4 != uVar23);
        lVar28 = lVar28 + uVar23;
      }
      uVar26 = uVar26 + 1;
      lVar22 = lVar22 + 4;
    } while (uVar26 != param_5);
  }
  return;
}



// FUNCTION 14750b76a FUN_14750b76a body=110 status=ok
// SIG undefined FUN_14750b76a(void)

void FUN_14750b76a(longlong *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  
  if (-1 < param_3) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_3) {
      FUN_140eb7228(param_1,param_3);
    }
    for (; param_3 != 0; param_3 = param_3 + -1) {
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_14481013a(param_1,iVar1);
      }
      *(undefined4 *)(*param_1 + (longlong)iVar1 * 4) = *param_2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_3);
}



// FUNCTION 14750b7da FUN_14750b7da body=84 status=ok
// SIG undefined FUN_14750b7da(void)

void FUN_14750b7da(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  if ((((longlong)(iVar2 - iVar1) & 0x3ffffffffffff000U) != 0) || (iVar1 * 3 < iVar2 * 2)) {
    if ((iVar2 != iVar1) && (iVar1 == 0 || 0x40 < iVar2 - iVar1)) {
      *(int *)(param_1 + 0xc) = iVar1;
      FUN_1432b3f1e(param_1,iVar1,iVar1,4);
      return;
    }
  }
  return;
}



// FUNCTION 14750b82e FUN_14750b82e body=71 status=ok
// SIG undefined FUN_14750b82e(void)

longlong FUN_14750b82e(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((((*param_1 != 0) && (lVar1 = param_1[1], lVar1 != 0)) &&
      (lVar2 = FUN_146331a52(), lVar2 != 0)) &&
     ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38) &&
      (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
       lVar2 + 0x30)))) {
    return *param_1;
  }
  return 0;
}



// FUNCTION 14750b876 FUN_14750b876 body=71 status=ok
// SIG undefined FUN_14750b876(void)

longlong FUN_14750b876(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((((*param_1 != 0) && (lVar1 = param_1[1], lVar1 != 0)) &&
      (lVar2 = FUN_1463a59a2(), lVar2 != 0)) &&
     ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38) &&
      (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
       lVar2 + 0x30)))) {
    return *param_1;
  }
  return 0;
}



// FUNCTION 14750b8be FUN_14750b8be body=71 status=ok
// SIG undefined FUN_14750b8be(void)

longlong FUN_14750b8be(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((((*param_1 != 0) && (lVar1 = param_1[1], lVar1 != 0)) &&
      (lVar2 = FUN_146333d46(), lVar2 != 0)) &&
     ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38) &&
      (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
       lVar2 + 0x30)))) {
    return *param_1;
  }
  return 0;
}



// FUNCTION 14750b906 FUN_14750b906 body=159 status=ok
// SIG undefined FUN_14750b906(void)

void FUN_14750b906(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_14750b9a6(param_1,local_21);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14750b9a6 FUN_14750b9a6 body=104 status=ok
// SIG undefined FUN_14750b9a6(void)

undefined8 FUN_14750b9a6(longlong param_1,byte param_2)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    lVar3 = param_1 + 0x68;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x70);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x78) - 1U & (uint)param_2) * 4);
    if (iVar2 != -1) {
      do {
        pbVar1 = (byte *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar2 * 0x18);
        if (*pbVar1 == param_2) {
          if (pbVar1 + 8 != (byte *)0x0 && pbVar1 != (byte *)0x0) {
            return *(undefined8 *)(pbVar1 + 8);
          }
          return 0;
        }
        iVar2 = *(int *)(pbVar1 + 0x10);
      } while (iVar2 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14750ba12 FUN_14750ba12 body=103 status=ok
// SIG undefined FUN_14750ba12(void)

void FUN_14750ba12(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145a669e0();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(local_18);
  }
  FUN_147511d1c(param_1 + 0x1160,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14750ba7a FUN_14750ba7a body=128 status=ok
// SIG undefined FUN_14750ba7a(void)

undefined8 * FUN_14750ba7a(undefined8 *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  if (DAT_14cb0d2b0 != 0) {
    lVar1 = FUN_14750ba12();
    if (lVar1 != 0) {
      FUN_14750bafc(lVar1,&local_30,param_2);
      *param_1 = local_30;
      if (local_28 != 0) {
        param_1[1] = local_28;
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14750bafc FUN_14750bafc body=143 status=ok
// SIG undefined FUN_14750bafc(void)

void FUN_14750bafc(longlong param_1,undefined8 *param_2,byte param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (*(int *)(param_1 + 0x88) != *(int *)(param_1 + 0xb4)) {
    lVar2 = param_1 + 0xb8;
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      lVar2 = *(longlong *)(param_1 + 0xc0);
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 200) - 1U & (uint)param_3) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x80) + (longlong)iVar1 * 0x20;
        if (*(byte *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar1 * 0x20) == param_3) {
          if ((lVar2 + 8U & 0xfffffffffffffff7) != 0) {
            *param_2 = *(undefined8 *)(lVar2 + 8);
            lVar2 = *(longlong *)(lVar2 + 0x10);
            param_2[1] = lVar2;
            if (lVar2 == 0) {
              return;
            }
            LOCK();
            *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
            UNLOCK();
            return;
          }
          break;
        }
        iVar1 = *(int *)(lVar2 + 0x18);
      } while (iVar1 != -1);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



// FUNCTION 14750bb8b FUN_14750bb8b body=175 status=ok
// SIG undefined FUN_14750bb8b(void)

undefined8 FUN_14750bb8b(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  FUN_144a5c54a(local_b8,param_2);
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14750bc40 FUN_14750bc40 body=295 status=ok
// SIG undefined FUN_14750bc40(void)

void FUN_14750bc40(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  sbyte sVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  float local_24;
  int local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_24 = 0.5;
  if (0.5 <= *(float *)(param_2 + 6)) {
    local_24 = *(float *)(param_2 + 6);
  }
  uVar1 = (int)ROUND(local_24 * 3.0 + local_24 * 3.0 + 0.5) >> 1;
  sVar2 = (0x3f < (int)uVar1) + 1;
  local_20 = (uint)(0x3f < (int)uVar1) * 2 + 2;
  if ((int)uVar1 < 10) {
    local_20 = 0;
    sVar2 = 0;
  }
  else {
    local_24 = local_24 / (float)local_20;
  }
  uVar1 = uVar1 >> sVar2 | 1;
  if (0xfe < (int)uVar1) {
    uVar1 = 0xff;
  }
  local_28 = 3;
  if (3 < (int)uVar1) {
    local_28 = uVar1;
  }
  local_88 = 0;
  local_70 = 1;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_18 = 0;
  uStack_10 = 0;
  uStack_80 = *param_2;
  local_48 = param_2[1];
  local_40 = param_2[2];
  local_78 = param_2[3];
  local_38 = param_2[4];
  local_30 = param_2[5];
  FUN_1432b9dc7(param_1,&local_88);
  if ((local_8 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14750bd68 FUN_14750bd68 body=394 status=ok
// SIG undefined FUN_14750bd68(void)

undefined8 * FUN_14750bd68(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 0x30) != 0) || (cVar4 = FUN_144a61b4f(), cVar4 == '\0'))
  goto LAB_14750bd96;
  plVar5 = (longlong *)FUN_14001cc68(0x40,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14a452130;
  plVar6 = plVar5 + 2;
  plVar5[5] = 0;
  plVar5[6] = 0;
  plVar5[3] = 0;
  plVar5[4] = 0;
  plVar5[7] = 0;
  plVar5[2] = (longlong)&PTR_FUN_14a452150;
  plVar5[6] = 0x4120000041200000;
  FUN_144a78564(plVar5 + 7);
  local_38 = plVar6;
  local_30 = plVar5;
  FUN_147512b40(&local_38,plVar6);
  if (plVar5 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x30) = 0x10;
    plVar6 = *(longlong **)(param_1 + 0x38);
    if (plVar6 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x38) = 0;
LAB_14750be7f:
      LOCK();
      plVar5 = plVar6 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x00014750beac:
        if (iVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x30) = plVar6;
    plVar6 = *(longlong **)(param_1 + 0x38);
    if (plVar5 == plVar6) {
      LOCK();
      plVar6 = plVar5 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar6 = plVar5;
        goto joined_r0x00014750beac;
      }
    }
    else {
      *(longlong **)(param_1 + 0x38) = plVar5;
      if (plVar6 != (longlong *)0x0) goto LAB_14750be7f;
    }
  }
  plVar6 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_30 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  FUN_14485c47a(*(longlong *)(param_1 + 0x30) + 0x18,param_1);
LAB_14750bd96:
  *param_2 = *(undefined8 *)(param_1 + 0x30);
  lVar3 = *(longlong *)(param_1 + 0x38);
  param_2[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14750bf08 FUN_14750bf08 body=426 status=ok
// SIG undefined FUN_14750bf08(void)

void FUN_14750bf08(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  undefined8 *local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  longlong *local_68;
  longlong *local_60;
  undefined2 local_58;
  undefined8 local_50;
  undefined8 *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = &PTR_FUN_14a44e810;
  plVar1 = param_1 + 3;
  local_48 = param_1 + 5;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    FUN_1449c0562(&local_50);
  }
  local_78 = local_40;
  iStack_74 = iStack_3c;
  local_70 = local_38;
  local_6c = local_34;
  local_88 = local_50;
  local_80 = local_48;
  local_58 = 0;
  local_90 = plVar1;
  local_68 = plVar1;
  local_60 = plVar1;
  if (iStack_3c < *(int *)(local_48 + 3)) {
    do {
      lVar4 = *(longlong *)(*local_90 + 8 + (longlong)iStack_74 * 0x18);
      if (lVar4 != 0) {
        if (*(undefined8 **)(lVar4 + 0x20) != (undefined8 *)0x0) {
          **(undefined8 **)(lVar4 + 0x20) = 0;
        }
        plVar5 = *(longlong **)(lVar4 + 0x28);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar5 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar3 = (int *)((longlong)plVar5 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        FUN_1400020a8(lVar4);
      }
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (iStack_74 < *(int *)(local_80 + 3));
    if (((local_58 & 1) != 0) && (local_58._1_1_ == '\x01')) {
      FUN_147512cb0(local_60,(int)local_60[1] - *(int *)((longlong)local_60 + 0x34));
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_147510a78(plVar1);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14750c0c4 FUN_14750c0c4 body=446 status=ok
// SIG undefined FUN_14750c0c4(void)

float * FUN_14750c0c4(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  longlong lVar6;
  float *pfVar7;
  float fVar8;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined8 *local_88;
  float *local_80;
  undefined8 *local_78;
  float **local_70;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + 0x18);
  local_88 = (undefined8 *)0x0;
  FUN_14485c47a(&local_88);
  local_78 = local_88;
  iVar5 = FUN_147512eaa(plVar1,(uint)((ulonglong)local_88 >> 0x20) ^ (uint)local_88);
  if (((iVar5 == -1) || (lVar6 = (longlong)iVar5 * 0x18 + *plVar1, lVar6 == 0)) ||
     (pfVar7 = *(float **)(lVar6 + 8), pfVar7 == (float *)0x0)) {
    fVar8 = (float)(**(code **)(**(longlong **)(param_1 + 8) + 0x358))();
    dVar3 = (double)fVar8 * *(double *)(param_3 + 0x20);
    fVar8 = (float)(**(code **)(**(longlong **)(param_1 + 8) + 0x350))();
    dVar2 = *(double *)(param_3 + 0x18);
    dVar4 = (double)fVar8 * dVar2;
    local_80 = (float *)FUN_14001cc68(0x30,0x10);
    local_80[8] = 0.0;
    local_80[9] = 0.0;
    local_80[10] = 0.0;
    local_80[0xb] = 0.0;
    *(longlong *)(local_80 + 4) = param_1;
    *(ulonglong *)(local_80 + 6) =
         (ulonglong)(longlong)ROUND(dVar4 + dVar4 + 0.5) >> 1 & 0xffffffff |
         ((longlong)ROUND(dVar3 + dVar3 + 0.5) & 0xfffffffffffffffeU) << 0x1f;
    dVar3 = *(double *)(param_3 + 0x10);
    *local_80 = (float)*(double *)(param_3 + 8);
    local_80[1] = (float)dVar3;
    dVar3 = *(double *)(param_3 + 0x20);
    local_80[2] = (float)dVar2;
    local_80[3] = (float)dVar3;
    local_90 = 0;
    FUN_14485c47a(&local_90,param_2);
    local_78 = &local_90;
    local_70 = &local_80;
    FUN_147512f64(plVar1,local_64);
    pfVar7 = local_80;
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return pfVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14750c284 FUN_14750c284 body=54 status=ok
// SIG undefined FUN_14750c284(void)

void FUN_14750c284(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xf8);
  return;
}



// FUNCTION 14750c2be FUN_14750c2be body=54 status=ok
// SIG undefined FUN_14750c2be(void)

void FUN_14750c2be(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14750c2f8 FUN_14750c2f8 body=233 status=ok
// SIG undefined FUN_14750c2f8(void)

longlong FUN_14750c2f8(longlong param_1,longlong param_2)

{
  FUN_1472ea2b4();
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  FUN_1474409b8(param_1 + 0x104,*(undefined8 *)(param_2 + 0x28),L"ShaderParams",0);
  FUN_1474409b8(param_1 + 0x10a,*(undefined8 *)(param_2 + 0x28),L"ShaderParams2",0);
  FUN_1474409b8(param_1 + 0xf8,*(undefined8 *)(param_2 + 0x28),L"GammaAndAlphaValues",0);
  FUN_1474409b8(param_1 + 0xfe,*(undefined8 *)(param_2 + 0x28),L"DrawFlags",0);
  FUN_147440a6c(param_1 + 0x114,*(undefined8 *)(param_2 + 0x28),L"ElementTexture",0);
  FUN_147440a6c(param_1 + 0x110,*(undefined8 *)(param_2 + 0x28),L"ElementTextureSampler",0);
  return param_1;
}



// FUNCTION 14750c3e2 FUN_14750c3e2 body=87 status=ok
// SIG undefined FUN_14750c3e2(void)

void FUN_14750c3e2(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  uint *puVar1;
  uint uVar2;
  
  FUN_142ca4114(param_2,*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 0x110),*param_4,
                param_3);
  if (*param_4 != 0) {
    LOCK();
    puVar1 = (uint *)(*param_4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 14750c43a FUN_14750c43a body=54 status=ok
// SIG undefined FUN_14750c43a(void)

void FUN_14750c43a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xf8);
  return;
}



// FUNCTION 14750c478 FUN_14750c478 body=39 status=ok
// SIG undefined FUN_14750c478(void)

void FUN_14750c478(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xf8,0x10);
  FUN_1472ea2b4(uVar1,param_1);
  return;
}



// FUNCTION 14750c4a0 FUN_14750c4a0 body=31 status=ok
// SIG undefined FUN_14750c4a0(void)

void FUN_14750c4a0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xf8,0x10);
  FUN_1472ea222(uVar1);
  return;
}



// FUNCTION 14750c4c0 FUN_14750c4c0 body=54 status=ok
// SIG undefined FUN_14750c4c0(void)

void FUN_14750c4c0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xf8);
  return;
}



// FUNCTION 14750c4fe FUN_14750c4fe body=39 status=ok
// SIG undefined FUN_14750c4fe(void)

void FUN_14750c4fe(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xf8,0x10);
  FUN_1472ea2b4(uVar1,param_1);
  return;
}



// FUNCTION 14750c526 FUN_14750c526 body=31 status=ok
// SIG undefined FUN_14750c526(void)

void FUN_14750c526(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xf8,0x10);
  FUN_1472ea222(uVar1);
  return;
}



// FUNCTION 14750c546 FUN_14750c546 body=54 status=ok
// SIG undefined FUN_14750c546(void)

void FUN_14750c546(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14750c584 FUN_14750c584 body=39 status=ok
// SIG undefined FUN_14750c584(void)

void FUN_14750c584(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14750c2f8(uVar1,param_1);
  return;
}



// FUNCTION 14750c5ac FUN_14750c5ac body=57 status=ok
// SIG undefined FUN_14750c5ac(void)

longlong FUN_14750c5ac(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0x100) = 0;
  *(undefined8 *)(lVar1 + 0x108) = 0;
  *(undefined8 *)(lVar1 + 0x110) = 0;
  return lVar1;
}



// FUNCTION 14750c5e6 FUN_14750c5e6 body=54 status=ok
// SIG undefined FUN_14750c5e6(void)

void FUN_14750c5e6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14750c624 FUN_14750c624 body=39 status=ok
// SIG undefined FUN_14750c624(void)

void FUN_14750c624(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14750c2f8(uVar1,param_1);
  return;
}



// FUNCTION 14750c64c FUN_14750c64c body=57 status=ok
// SIG undefined FUN_14750c64c(void)

longlong FUN_14750c64c(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0x100) = 0;
  *(undefined8 *)(lVar1 + 0x108) = 0;
  *(undefined8 *)(lVar1 + 0x110) = 0;
  return lVar1;
}



// FUNCTION 14750c686 FUN_14750c686 body=54 status=ok
// SIG undefined FUN_14750c686(void)

void FUN_14750c686(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14750c6c4 FUN_14750c6c4 body=39 status=ok
// SIG undefined FUN_14750c6c4(void)

void FUN_14750c6c4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14750c2f8(uVar1,param_1);
  return;
}



// FUNCTION 14750c6ec FUN_14750c6ec body=57 status=ok
// SIG undefined FUN_14750c6ec(void)

longlong FUN_14750c6ec(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0x100) = 0;
  *(undefined8 *)(lVar1 + 0x108) = 0;
  *(undefined8 *)(lVar1 + 0x110) = 0;
  return lVar1;
}



// FUNCTION 14750c726 FUN_14750c726 body=54 status=ok
// SIG undefined FUN_14750c726(void)

void FUN_14750c726(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14750c764 FUN_14750c764 body=39 status=ok
// SIG undefined FUN_14750c764(void)

void FUN_14750c764(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14750c2f8(uVar1,param_1);
  return;
}



// FUNCTION 14750c78c FUN_14750c78c body=57 status=ok
// SIG undefined FUN_14750c78c(void)

longlong FUN_14750c78c(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0x100) = 0;
  *(undefined8 *)(lVar1 + 0x108) = 0;
  *(undefined8 *)(lVar1 + 0x110) = 0;
  return lVar1;
}



// FUNCTION 14750c7c6 FUN_14750c7c6 body=54 status=ok
// SIG undefined FUN_14750c7c6(void)

void FUN_14750c7c6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14750c804 FUN_14750c804 body=39 status=ok
// SIG undefined FUN_14750c804(void)

void FUN_14750c804(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14750c2f8(uVar1,param_1);
  return;
}



// FUNCTION 14750c82c FUN_14750c82c body=57 status=ok
// SIG undefined FUN_14750c82c(void)

longlong FUN_14750c82c(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0x100) = 0;
  *(undefined8 *)(lVar1 + 0x108) = 0;
  *(undefined8 *)(lVar1 + 0x110) = 0;
  return lVar1;
}



// FUNCTION 14750c866 FUN_14750c866 body=54 status=ok
// SIG undefined FUN_14750c866(void)

void FUN_14750c866(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14750c8a4 FUN_14750c8a4 body=39 status=ok
// SIG undefined FUN_14750c8a4(void)

void FUN_14750c8a4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14750c2f8(uVar1,param_1);
  return;
}



// FUNCTION 14750c8cc FUN_14750c8cc body=57 status=ok
// SIG undefined FUN_14750c8cc(void)

longlong FUN_14750c8cc(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0x100) = 0;
  *(undefined8 *)(lVar1 + 0x108) = 0;
  *(undefined8 *)(lVar1 + 0x110) = 0;
  return lVar1;
}



// FUNCTION 14750c906 FUN_14750c906 body=54 status=ok
// SIG undefined FUN_14750c906(void)

void FUN_14750c906(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14750c944 FUN_14750c944 body=39 status=ok
// SIG undefined FUN_14750c944(void)

void FUN_14750c944(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14750c2f8(uVar1,param_1);
  return;
}



// FUNCTION 14750c96c FUN_14750c96c body=57 status=ok
// SIG undefined FUN_14750c96c(void)

longlong FUN_14750c96c(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0x100) = 0;
  *(undefined8 *)(lVar1 + 0x108) = 0;
  *(undefined8 *)(lVar1 + 0x110) = 0;
  return lVar1;
}



// FUNCTION 14750c9a6 FUN_14750c9a6 body=54 status=ok
// SIG undefined FUN_14750c9a6(void)

void FUN_14750c9a6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14750c9e4 FUN_14750c9e4 body=39 status=ok
// SIG undefined FUN_14750c9e4(void)

void FUN_14750c9e4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14750c2f8(uVar1,param_1);
  return;
}



// FUNCTION 14750ca0c FUN_14750ca0c body=57 status=ok
// SIG undefined FUN_14750ca0c(void)

longlong FUN_14750ca0c(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0x100) = 0;
  *(undefined8 *)(lVar1 + 0x108) = 0;
  *(undefined8 *)(lVar1 + 0x110) = 0;
  return lVar1;
}



// FUNCTION 14750ca46 FUN_14750ca46 body=150 status=ok
// SIG undefined FUN_14750ca46(void)

longlong * FUN_14750ca46(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *puVar1 = 0;
  puVar1[1] = &DAT_3f8000003f800000;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *param_1 = (longlong)puVar1;
  lVar2 = FUN_14001cc68(0x58,0x10);
  local_20 = 0;
  FUN_147d28de0(lVar2,&local_20,0,0);
  param_1[1] = lVar2;
  *(longlong *)(*param_1 + 0x10) = lVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14750cade FUN_14750cade body=120 status=ok
// SIG undefined FUN_14750cade(void)

void FUN_14750cade(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    if (*(undefined8 **)(lVar3 + 0x20) != (undefined8 *)0x0) {
      **(undefined8 **)(lVar3 + 0x20) = 0;
    }
    plVar4 = *(longlong **)(lVar3 + 0x28);
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
    FUN_1400020a8(lVar3);
  }
  plVar4 = (longlong *)param_1[1];
  if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014750cb4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x28))(plVar4,1);
    return;
  }
  return;
}



// FUNCTION 14750cb56 FUN_14750cb56 body=161 status=ok
// SIG undefined FUN_14750cb56(void)

undefined8 FUN_14750cb56(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caac910) {
    FUN_144b3d300(&DAT_14caac910);
    if (DAT_14caac910 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14caac908 =
           (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.HDR.UI.Level",1);
      _Init_thread_footer(&DAT_14caac910);
    }
  }
  if (DAT_14caac908 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014750cb8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*DAT_14caac908 + 0xb8))();
    return uVar1;
  }
  return 0x3f800000;
}



// FUNCTION 14750cbf7 FUN_14750cbf7 body=161 status=ok
// SIG undefined FUN_14750cbf7(void)

undefined8 FUN_14750cbf7(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caac920) {
    FUN_144b3d300(&DAT_14caac920);
    if (DAT_14caac920 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14caac918 =
           (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.HDR.UI.Luminance",1);
      _Init_thread_footer(&DAT_14caac920);
    }
  }
  if (DAT_14caac918 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014750cc2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*DAT_14caac918 + 0xb8))();
    return uVar1;
  }
  return 0x43960000;
}



// FUNCTION 14750cc98 FUN_14750cc98 body=42 status=ok
// SIG undefined FUN_14750cc98(void)

void FUN_14750cc98(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14750ccca FUN_14750ccca body=96 status=ok
// SIG undefined FUN_14750ccca(void)

undefined8 FUN_14750ccca(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f5c030();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cab0210,1);
  return uVar3;
}



// FUNCTION 14750cd2a FUN_14750cd2a body=52 status=ok
// SIG undefined FUN_14750cd2a(void)

void FUN_14750cd2a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14750cd5e FUN_14750cd5e body=42 status=ok
// SIG undefined FUN_14750cd5e(void)

void FUN_14750cd5e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14750cd94 FUN_14750cd94 body=96 status=ok
// SIG undefined FUN_14750cd94(void)

undefined8 FUN_14750cd94(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f0c38c();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cab0298,1);
  return uVar3;
}



// FUNCTION 14750cdf4 FUN_14750cdf4 body=52 status=ok
// SIG undefined FUN_14750cdf4(void)

void FUN_14750cdf4(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14750ce28 FUN_14750ce28 body=42 status=ok
// SIG undefined FUN_14750ce28(void)

void FUN_14750ce28(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14750ce5e FUN_14750ce5e body=96 status=ok
// SIG undefined FUN_14750ce5e(void)

undefined8 FUN_14750ce5e(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145efed08();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cab0320,1);
  return uVar3;
}



// FUNCTION 14750cebe FUN_14750cebe body=52 status=ok
// SIG undefined FUN_14750cebe(void)

void FUN_14750cebe(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14750cef2 FUN_14750cef2 body=42 status=ok
// SIG undefined FUN_14750cef2(void)

void FUN_14750cef2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14750cf28 FUN_14750cf28 body=96 status=ok
// SIG undefined FUN_14750cf28(void)

undefined8 FUN_14750cf28(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f372ea();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cab03a8,1);
  return uVar3;
}



// FUNCTION 14750cf88 FUN_14750cf88 body=52 status=ok
// SIG undefined FUN_14750cf88(void)

void FUN_14750cf88(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14750cfbc FUN_14750cfbc body=42 status=ok
// SIG undefined FUN_14750cfbc(void)

void FUN_14750cfbc(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14750cff2 FUN_14750cff2 body=96 status=ok
// SIG undefined FUN_14750cff2(void)

undefined8 FUN_14750cff2(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f378de();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cab0430,1);
  return uVar3;
}



// FUNCTION 14750d052 FUN_14750d052 body=52 status=ok
// SIG undefined FUN_14750d052(void)

void FUN_14750d052(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14750d08e FUN_14750d08e body=58 status=ok
// SIG undefined FUN_14750d08e(void)

void FUN_14750d08e(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1461614d6(param_2,param_3,DAT_14cb0d284);
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014750d0c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0x50))();
  return;
}



// FUNCTION 14750d0c8 FUN_14750d0c8 body=111 status=ok
// SIG undefined FUN_14750d0c8(void)

void FUN_14750d0c8(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  
  iVar4 = (**(code **)(**(longlong **)(*param_2 + 0x510) + 0x68))();
  if (iVar4 == 0) {
    FUN_1461614d6(DAT_14cb0d27c,DAT_14cb0d280,DAT_14cb0d284);
    DAT_14cb0d288 = 1;
  }
  plVar3 = (longlong *)param_2[1];
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
                    /* WARNING: Could not recover jumptable at 0x00014750d133. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14750d1fc FUN_14750d1fc body=294 status=ok
// SIG undefined FUN_14750d1fc(void)

bool FUN_14750d1fc(void)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14caacfb8) && (FUN_144b3d300(&DAT_14caacfb8), DAT_14caacfb8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.HDR.UI.CompositeMode",1);
    if (plVar5 == (longlong *)0x0) {
      DAT_14caacfb0 = 0;
    }
    else {
      DAT_14caacfb0 = (**(code **)(*plVar5 + 0x68))(plVar5);
    }
    _Init_thread_footer(&DAT_14caacfb8);
  }
  if (((DAT_14ca84f23 == '\x01') &&
      (cVar2 = FUN_1431eab23(*(undefined2 *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2)),
      cVar2 != '\0')) &&
     (bVar3 = FUN_145825f98(*(undefined2 *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2)),
     lVar1 = DAT_14caacfb0, (DAT_14caacfb0 != 0 & bVar3) == 1)) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar4 = 0;
    }
    else {
      bVar3 = FUN_144a61b4f();
      uVar4 = (ulonglong)(bVar3 ^ 1);
    }
    return *(int *)(lVar1 + uVar4 * 4) != 0;
  }
  return false;
}



// FUNCTION 14750d322 FUN_14750d322 body=42 status=ok
// SIG undefined FUN_14750d322(void)

void FUN_14750d322(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14750d354 FUN_14750d354 body=96 status=ok
// SIG undefined FUN_14750d354(void)

undefined8 FUN_14750d354(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145dad8a2();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cab04b8,1);
  return uVar3;
}



// FUNCTION 14750d3b4 FUN_14750d3b4 body=52 status=ok
// SIG undefined FUN_14750d3b4(void)

void FUN_14750d3b4(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14750d3e8 FUN_14750d3e8 body=42 status=ok
// SIG undefined FUN_14750d3e8(void)

void FUN_14750d3e8(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14750d41a FUN_14750d41a body=96 status=ok
// SIG undefined FUN_14750d41a(void)

undefined8 FUN_14750d41a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145ea3cba();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cab05c8,1);
  return uVar3;
}



// FUNCTION 14750d47a FUN_14750d47a body=52 status=ok
// SIG undefined FUN_14750d47a(void)

void FUN_14750d47a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14750d4ae FUN_14750d4ae body=208 status=ok
// SIG undefined FUN_14750d4ae(void)

void FUN_14750d4ae(undefined8 param_1,undefined4 *param_2,longlong *param_3,longlong *param_4)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong lStack_20;
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = *param_3;
  local_30 = *param_4;
  local_18 = true;
  if ((((*(int *)(local_48 + 0x84) == *(int *)(local_30 + 0x84)) &&
       (*(int *)(local_48 + 0x88) == *(int *)(local_30 + 0x88))) &&
      ((int)param_3[1] == (int)param_4[1])) &&
     ((*(int *)((longlong)param_3 + 0xc) == *(int *)((longlong)param_4 + 0xc) &&
      ((int)param_3[2] == (int)param_4[2])))) {
    local_18 = *(int *)((longlong)param_3 + 0x14) != *(int *)((longlong)param_4 + 0x14);
  }
  local_28 = param_4[1];
  lStack_20 = param_4[2];
  local_40 = param_3[1];
  local_38 = param_3[2];
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  local_68 = 1;
  FUN_14301884d(local_58,&local_58,&local_48);
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14750d57f FUN_14750d57f body=177 status=ok
// SIG undefined FUN_14750d57f(void)

void FUN_14750d57f(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145ea3cba();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14cab05c8,param_4);
  local_78 = &DAT_14cab05c8;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_147514432(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14750d7ce FUN_14750d7ce body=274 status=ok
// SIG undefined FUN_14750d7ce(void)

longlong FUN_14750d7ce(longlong param_1,byte param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined2 *puVar5;
  longlong lVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x6c)) {
    lVar6 = param_1 + 0x70;
    if (*(longlong *)(param_1 + 0x78) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x78);
    }
    iVar7 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x80) - 1U & (uint)param_2) * 4);
    if (iVar7 != -1) {
      do {
        lVar6 = *(longlong *)(param_1 + 0x38) + (longlong)iVar7 * 0x40;
        if (*(byte *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar7 * 0x40) == param_2)
        goto LAB_14750d7de;
        iVar7 = *(int *)(lVar6 + 0x38);
      } while (iVar7 != -1);
    }
  }
  lVar6 = 0;
LAB_14750d7de:
  if ((*(byte *)(lVar6 + 8) & 1) != 0) {
    if (*(longlong *)(lVar6 + 0x28) != 0) {
      return *(longlong *)(lVar6 + 0x28);
    }
    if ((*(byte *)(lVar6 + 0x30) & 1) == 0) {
      if (*(int *)(lVar6 + 0x20) == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      else {
        puVar5 = *(undefined2 **)(lVar6 + 0x18);
      }
      uVar2 = FUN_144a805b8();
      lVar3 = FUN_1412ecd05(uVar2,0,puVar5,0,0,0,1,0);
      if (lVar3 != 0) {
        uVar1 = *(uint *)(lVar3 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar4 = 0;
        }
        FUN_1447f71cc(lVar4,0x40000000);
        if (DAT_14c950c29 == '\x01') {
          FUN_14689c22e(lVar3);
        }
        *(longlong *)(lVar6 + 0x28) = lVar3;
      }
      *(byte *)(lVar6 + 0x30) = *(byte *)(lVar6 + 0x30) | 1;
      return lVar3;
    }
  }
  return 0;
}



// FUNCTION 14750d8e0 FUN_14750d8e0 body=86 status=ok
// SIG undefined FUN_14750d8e0(void)

undefined8 FUN_14750d8e0(longlong param_1,byte param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x6c)) {
    lVar2 = param_1 + 0x70;
    if (*(longlong *)(param_1 + 0x78) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x78);
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x80) - 1U & (uint)param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x38) + (longlong)iVar1 * 0x40;
        if (*(byte *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar1 * 0x40) == param_2)
        goto LAB_14750d8ea;
        iVar1 = *(int *)(lVar2 + 0x38);
      } while (iVar1 != -1);
    }
  }
  lVar2 = 0;
LAB_14750d8ea:
  return *(undefined8 *)(lVar2 + 0x28);
}



// FUNCTION 14750d936 FUN_14750d936 body=469 status=ok
// SIG undefined FUN_14750d936(void)

undefined8 * FUN_14750d936(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_44 = 0;
  local_48 = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_40 = param_3;
  FUN_14750eb5c(*(longlong *)(param_1 + 0x2c0) + 0x98,&local_68);
  if (local_68 == (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x2c0);
    FUN_1400021e4(&local_40,&local_78);
    local_88 = &local_48;
    local_80 = local_58;
    cVar4 = (**(code **)(*plVar3 + 0x28))(plVar3,&local_40,&local_78,&local_44);
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (cVar4 != '\0') {
      local_88 = (undefined4 *)CONCAT44(local_88._4_4_,local_48);
      local_80 = local_58;
      FUN_1432c02ca(*(undefined8 *)(param_1 + 0x2c0),&local_78,local_40,local_44);
      plVar1 = local_60;
      plVar3 = local_70;
      local_68 = local_78;
      local_78 = (longlong *)0x0;
      if (local_70 == local_60) {
LAB_14750dad0:
        plVar3 = local_70;
        if (local_70 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_70 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_70)(local_70);
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
      else {
        local_70 = (longlong *)0x0;
        local_60 = plVar3;
        if (plVar1 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar1 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar1)(plVar1);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
          goto LAB_14750dad0;
        }
      }
      if (local_68 != (longlong *)0x0) goto LAB_14750d990;
    }
    *param_2 = 0;
  }
  else {
LAB_14750d990:
    *param_2 = *(undefined8 *)(*local_68 + 0x18);
  }
  plVar3 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14750db0c FUN_14750db0c body=324 status=ok
// SIG undefined FUN_14750db0c(void)

ulonglong FUN_14750db0c(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                       undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14750eb5c(*(longlong *)(param_1 + 0x2c0) + 0x98,&local_48,param_2);
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (local_48 != 0) goto LAB_14750db57;
  local_60 = param_5;
  local_68 = param_4;
  FUN_1432c02ca(*(undefined8 *)(param_1 + 0x2c0),&local_58,param_2,param_3);
  plVar1 = local_40;
  plVar3 = local_50;
  local_48 = local_58;
  local_58 = 0;
  if (local_50 == local_40) {
LAB_14750dc21:
    plVar3 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_50)(local_50);
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
  else {
    local_50 = (longlong *)0x0;
    local_40 = plVar3;
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar1 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar1)(plVar1);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
      goto LAB_14750dc21;
    }
  }
  uVar4 = CONCAT71((int7)((ulonglong)&local_58 >> 8),local_48 != 0);
LAB_14750db57:
  plVar3 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 14750dc52 FUN_14750dc52 body=368 status=ok
// SIG undefined FUN_14750dc52(void)

ulonglong FUN_14750dc52(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 unaff_RBX;
  ulonglong uVar6;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14750eb5c(*(longlong *)(param_1 + 0x2c0) + 0x98,&local_40,param_2);
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (local_40 != 0) goto LAB_14750dc99;
  uVar5 = *(undefined8 *)(param_1 + 0x2c0);
  local_60 = *param_3;
  local_58 = param_3[1];
  if (local_58 != 0) {
    LOCK();
    *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
    UNLOCK();
  }
  FUN_1432c042a(uVar5,&local_50,param_2,&local_60);
  plVar1 = local_38;
  plVar4 = local_48;
  local_40 = local_50;
  local_50 = 0;
  if (local_48 == local_38) {
LAB_14750dd93:
    plVar4 = local_48;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_48 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_48)(local_48);
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
  else {
    local_48 = (longlong *)0x0;
    local_38 = plVar4;
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar1 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar1)(plVar1);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
      goto LAB_14750dd93;
    }
  }
  uVar6 = CONCAT71((int7)((ulonglong)plVar1 >> 8),local_40 != 0);
LAB_14750dc99:
  plVar4 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = (longlong *)param_3[1];
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
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 14750ddc4 FUN_14750ddc4 body=116 status=ok
// SIG undefined FUN_14750ddc4(void)

ulonglong FUN_14750ddc4(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong unaff_RDI;
  
  if (param_2 != 0) {
    lVar1 = FUN_144a7937e();
    if (*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) {
      unaff_RDI = CONCAT71((int7)(unaff_RDI >> 8),1);
      if (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30) goto LAB_14750de2f;
    }
    uVar2 = FUN_145a7309e();
    lVar1 = FUN_144718840(param_2,uVar2);
    unaff_RDI = CONCAT71((int7)(unaff_RDI >> 8),1);
    if (lVar1 != 0) goto LAB_14750de2f;
    lVar1 = FUN_1402d2740();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_14750de2f;
  }
  unaff_RDI = 0;
LAB_14750de2f:
  return unaff_RDI & 0xffffffff;
}



// FUNCTION 14750de38 FUN_14750de38 body=151 status=ok
// SIG undefined FUN_14750de38(void)

void FUN_14750de38(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if (*param_2 != 0) {
    param_1 = param_1 + (ulonglong)*(byte *)(param_1 + 0x2b0) * 0x10;
    iVar3 = *(int *)(param_1 + 0x2e8);
    *(uint *)(param_1 + 0x2e8) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x2ec) < iVar3 + 1U) {
      FUN_147514bac((longlong *)(param_1 + 0x2e0),iVar3);
    }
    lVar4 = *(longlong *)(param_1 + 0x2e0);
    *(longlong *)(lVar4 + (longlong)iVar3 * 0x10) = *param_2;
    lVar5 = param_2[1];
    *(longlong *)(lVar4 + 8 + (longlong)iVar3 * 0x10) = lVar5;
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
  }
  plVar6 = (longlong *)param_2[1];
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
                    /* WARNING: Could not recover jumptable at 0x00014750deb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14750dedc FUN_14750dedc body=47 status=ok
// SIG undefined FUN_14750dedc(void)

void FUN_14750dedc(undefined8 param_1)

{
  FUN_1415a4f06();
  FUN_14080c2b4();
  FUN_1410bdeec(param_1);
  FUN_14585bf76(param_1);
  FUN_14584b054(param_1);
  return;
}



// FUNCTION 14750df0c FUN_14750df0c body=38 status=ok
// SIG undefined FUN_14750df0c(void)

void FUN_14750df0c(longlong param_1,undefined8 param_2)

{
  FUN_144a61b4f();
  FUN_1432c145e(*(undefined8 *)(param_1 + 0x2c0),param_2);
  return;
}



// FUNCTION 14750df64 FUN_14750df64 body=176 status=ok
// SIG undefined FUN_14750df64(void)

longlong FUN_14750df64(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = FUN_14001cc68(0x58,0x10);
  local_58 = &local_38;
  local_38 = 0;
  uStack_30 = 0;
  uVar4 = 2;
  if (*(char *)(param_1 + 0x340) != '\0') {
    uVar4 = 0x25;
  }
  local_48 = 1;
  local_50 = 0x100;
  FUN_1415e0d68(lVar2,param_2,param_3,uVar4);
  lVar1 = lVar2 + 0x20;
  lVar3 = lVar2 + 0x10;
  if (lVar2 == 0) {
    lVar3 = 0;
    lVar1 = 0;
  }
  FUN_140308182(lVar1,0);
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 14750e01a FUN_14750e01a body=81 status=ok
// SIG undefined FUN_14750e01a(void)

void FUN_14750e01a(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = FUN_144a5d717();
  if (cVar1 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014750e060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x18))(param_2);
    return;
  }
  plVar2 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2);
  (**(code **)(*plVar2 + 0x20))(plVar2);
  if (param_2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014750e055. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_2)(param_2,1);
    return;
  }
  return;
}



// FUNCTION 14750e090 FUN_14750e090 body=68 status=ok
// SIG undefined FUN_14750e090(void)

void FUN_14750e090(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x318);
  *(uint *)(param_1 + 0x318) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x31c) < iVar1 + 1U) {
    FUN_147514c32((longlong *)(param_1 + 0x310),iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x310) + (longlong)iVar1 * 8) = param_2;
  return;
}



// FUNCTION 14750e0d8 FUN_14750e0d8 body=299 status=ok
// SIG undefined FUN_14750e0d8(void)

void FUN_14750e0d8(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined4 local_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  int iStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar2 = (longlong *)(param_1 + 0x120);
  lVar3 = param_1 + 0x130;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  uStack_30 = 0;
  uStack_40 = lVar3;
  if (*(int *)(param_1 + 0x148) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_48);
    iVar7 = *(int *)(param_1 + 0x148);
  }
  uStack_50 = CONCAT44(uStack_2c,uStack_30);
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_68 = (undefined4)local_48;
  uStack_64 = local_48._4_4_;
  uStack_60 = (undefined4)uStack_40;
  uStack_5c = uStack_40._4_4_;
  local_70 = plVar2;
  if ((iStack_34 != iVar7) || (uStack_40 != lVar3)) {
    do {
      lVar5 = *(longlong *)(*local_70 + 8 + (longlong)iStack_54 * 0x18);
      lVar6 = *(longlong *)(lVar5 + 0x10);
      if (lVar6 != 0) {
        *(undefined8 *)(lVar5 + 0x10) = 0;
        LOCK();
        puVar1 = (uint *)(lVar6 + 8);
        uVar4 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar4 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
      local_58 = local_58 & ~uStack_64;
      FUN_1449c0562(&local_68);
    } while (local_70 != plVar2 || (CONCAT44(uStack_5c,uStack_60) != lVar3 || iStack_54 != iVar7));
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14750e2c6 FUN_14750e2c6 body=167 status=ok
// SIG undefined FUN_14750e2c6(void)

void FUN_14750e2c6(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_14750e36e(param_1,local_21);
  FUN_14750e3c4(param_3,uVar1);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14750e36e FUN_14750e36e body=86 status=ok
// SIG undefined FUN_14750e36e(void)

longlong FUN_14750e36e(longlong param_1,byte param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x6c)) {
    lVar2 = param_1 + 0x70;
    if (*(longlong *)(param_1 + 0x78) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x78);
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x80) - 1U & (uint)param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x38) + (longlong)iVar1 * 0x40;
        if (*(byte *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar1 * 0x40) == param_2)
        goto LAB_14750e378;
        iVar1 = *(int *)(lVar2 + 0x38);
      } while (iVar1 != -1);
    }
  }
  lVar2 = 0;
LAB_14750e378:
  return lVar2 + 8;
}



// FUNCTION 14750e3c4 FUN_14750e3c4 body=134 status=ok
// SIG undefined FUN_14750e3c4(void)

byte * FUN_14750e3c4(byte *param_1,byte *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_1 & 0xfe | *param_2 & 1;
  lVar1 = *(longlong *)(param_2 + 8);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_14689c22e();
      lVar1 = *(longlong *)(param_2 + 8);
    }
  }
  *(longlong *)(param_1 + 8) = lVar1;
  FUN_144a787a6(param_1 + 0x10,param_2 + 0x10);
  lVar1 = *(longlong *)(param_2 + 0x20);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_14689c22e();
      lVar1 = *(longlong *)(param_2 + 0x20);
    }
  }
  *(longlong *)(param_1 + 0x20) = lVar1;
  param_1[0x28] = param_1[0x28] & 0xfe | param_2[0x28] & 1;
  return param_1;
}



// FUNCTION 14750e44a FUN_14750e44a body=167 status=ok
// SIG undefined FUN_14750e44a(void)

void FUN_14750e44a(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_14128687a(param_1,local_21);
  FUN_14750e3c4(param_3,uVar1);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14750e4f6 FUN_14750e4f6 body=62 status=ok
// SIG undefined FUN_14750e4f6(void)

void FUN_14750e4f6(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x20) + 0x240);
  if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x248) <= param_3) {
    FUN_1402d99b4(plVar1,param_3 + 1);
  }
  *(undefined8 *)(*plVar1 + (longlong)param_3 * 8) = param_2;
  return;
}



// FUNCTION 14750e558 FUN_14750e558 body=103 status=ok
// SIG undefined FUN_14750e558(void)

undefined4 * FUN_14750e558(undefined4 *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1460a3f84();
  FUN_1448e935e(param_2,&local_30,&DAT_14caadf20,0);
  FUN_1460a3f84();
  *param_1 = local_30;
  param_1[1] = uStack_2c;
  param_1[2] = uStack_28;
  param_1[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14750e5c0 FUN_14750e5c0 body=103 status=ok
// SIG undefined FUN_14750e5c0(void)

undefined4 * FUN_14750e5c0(undefined4 *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1460a5574();
  FUN_1448e935e(param_2,&local_30,&DAT_14caae988,0);
  FUN_1460a5574();
  *param_1 = local_30;
  param_1[1] = uStack_2c;
  param_1[2] = uStack_28;
  param_1[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14750e628 FUN_14750e628 body=103 status=ok
// SIG undefined FUN_14750e628(void)

undefined4 * FUN_14750e628(undefined4 *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1460a3d14();
  FUN_1448e935e(param_2,&local_30,&DAT_14caaddf8,0);
  FUN_1460a3d14();
  *param_1 = local_30;
  param_1[1] = uStack_2c;
  param_1[2] = uStack_28;
  param_1[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14750e690 FUN_14750e690 body=103 status=ok
// SIG undefined FUN_14750e690(void)

undefined4 * FUN_14750e690(undefined4 *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1460a5304();
  FUN_1448e935e(param_2,&local_30,&DAT_14caae860,0);
  FUN_1460a5304();
  *param_1 = local_30;
  param_1[1] = uStack_2c;
  param_1[2] = uStack_28;
  param_1[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14750e6f8 FUN_14750e6f8 body=103 status=ok
// SIG undefined FUN_14750e6f8(void)

undefined4 * FUN_14750e6f8(undefined4 *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1460a4e24();
  FUN_1448e935e(param_2,&local_30,&DAT_14caae610,0);
  FUN_1460a4e24();
  *param_1 = local_30;
  param_1[1] = uStack_2c;
  param_1[2] = uStack_28;
  param_1[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14750e760 FUN_14750e760 body=103 status=ok
// SIG undefined FUN_14750e760(void)

undefined4 * FUN_14750e760(undefined4 *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1460a5a54();
  FUN_1448e935e(param_2,&local_30,&DAT_14caaebd8,0);
  FUN_1460a5a54();
  *param_1 = local_30;
  param_1[1] = uStack_2c;
  param_1[2] = uStack_28;
  param_1[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14750e7c8 FUN_14750e7c8 body=103 status=ok
// SIG undefined FUN_14750e7c8(void)

undefined4 * FUN_14750e7c8(undefined4 *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1460a4bb4();
  FUN_1448e935e(param_2,&local_30,&DAT_14caae4e8,0);
  FUN_1460a4bb4();
  *param_1 = local_30;
  param_1[1] = uStack_2c;
  param_1[2] = uStack_28;
  param_1[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14750e830 FUN_14750e830 body=103 status=ok
// SIG undefined FUN_14750e830(void)

undefined4 * FUN_14750e830(undefined4 *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1460a57e4();
  FUN_1448e935e(param_2,&local_30,&DAT_14caaeab0,0);
  FUN_1460a57e4();
  *param_1 = local_30;
  param_1[1] = uStack_2c;
  param_1[2] = uStack_28;
  param_1[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14750e898 FUN_14750e898 body=103 status=ok
// SIG undefined FUN_14750e898(void)

undefined4 * FUN_14750e898(undefined4 *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1460a46d4();
  FUN_1448e935e(param_2,&local_30,&DAT_14caae298,0);
  FUN_1460a46d4();
  *param_1 = local_30;
  param_1[1] = uStack_2c;
  param_1[2] = uStack_28;
  param_1[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14750e900 FUN_14750e900 body=103 status=ok
// SIG undefined FUN_14750e900(void)

undefined4 * FUN_14750e900(undefined4 *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1460a5cc4();
  FUN_1448e935e(param_2,&local_30,&DAT_14caaf078,0);
  FUN_1460a5cc4();
  *param_1 = local_30;
  param_1[1] = uStack_2c;
  param_1[2] = uStack_28;
  param_1[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14750e968 FUN_14750e968 body=103 status=ok
// SIG undefined FUN_14750e968(void)

undefined4 * FUN_14750e968(undefined4 *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1460a4464();
  FUN_1448e935e(param_2,&local_30,&DAT_14caae170,0);
  FUN_1460a4464();
  *param_1 = local_30;
  param_1[1] = uStack_2c;
  param_1[2] = uStack_28;
  param_1[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14750e9d0 FUN_14750e9d0 body=394 status=ok
// SIG undefined FUN_14750e9d0(void)

void FUN_14750e9d0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined2 local_94;
  undefined4 local_90;
  undefined2 local_8c;
  undefined4 local_88;
  undefined2 local_84;
  undefined4 local_80;
  undefined2 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [24];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)FUN_147d6e916(param_3);
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,0,*(undefined1 *)(param_3 + 0x46));
  local_78 = 0;
  uStack_70 = 0;
  (**(code **)(*plVar1 + 0x38))(plVar1,local_58);
  (**(code **)(*plVar1 + 0x40))(plVar1,local_68,0);
  if ((*(uint *)(param_1 + 0xe0) & 0xff0000) != 0) {
    FUN_147511800(param_2,uVar2,*(uint *)(param_1 + 0xe0) & 0xffff);
  }
  if ((*(uint *)(param_1 + 0xe4) & 0xff0000) != 0) {
    FUN_147510ba8(param_2,*(undefined8 *)(param_3 + 0x18),*(uint *)(param_1 + 0xe4) & 0xffff);
  }
  uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,0);
  if ((*(uint *)(param_1 + 0xe8) & 0xff0000) != 0) {
    FUN_147510b06(param_2,uVar2,*(uint *)(param_1 + 0xe8) & 0xffff);
  }
  local_7c = *(undefined2 *)(param_1 + 0xf0);
  local_80 = *(undefined4 *)(param_1 + 0xec);
  FUN_1475116fa(param_2,&local_80,local_58);
  local_84 = *(undefined2 *)(param_1 + 0xf6);
  local_88 = *(undefined4 *)(param_1 + 0xf2);
  FUN_1475116fa(param_2,&local_88,local_48);
  local_8c = *(undefined2 *)(param_1 + 0xfc);
  local_90 = *(undefined4 *)(param_1 + 0xf8);
  FUN_1475116fa(param_2,&local_90,local_68);
  local_94 = *(undefined2 *)(param_1 + 0x10e);
  local_98 = *(undefined4 *)(param_1 + 0x10a);
  FUN_144b127e6(param_2,&local_98,&local_78);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14750eb5c FUN_14750eb5c body=165 status=ok
// SIG undefined FUN_14750eb5c(void)

void FUN_14750eb5c(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) +
                    ((int)param_3 << 0x10 | (uint)(ushort)param_3) + (uVar2 << 0x13 | uVar2) +
                    (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *param_1 + (longlong)iVar3 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x20) == param_3) {
          if (lVar1 != 0) {
            *param_2 = *(undefined8 *)(lVar1 + 8);
            lVar1 = *(longlong *)(lVar1 + 0x10);
            param_2[1] = lVar1;
            if (lVar1 == 0) {
              return;
            }
            LOCK();
            *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
            UNLOCK();
            return;
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x18);
      } while (iVar3 != -1);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



// FUNCTION 14750ec02 FUN_14750ec02 body=178 status=ok
// SIG undefined FUN_14750ec02(void)

undefined8 * FUN_14750ec02(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  FUN_14485c47a(&local_30,param_3);
  local_28 = local_30;
  iVar1 = FUN_14751563e((longlong *)(param_1 + 0xf0),
                        (uint)((ulonglong)local_30 >> 0x20) ^ (uint)local_30);
  if ((iVar1 == -1) || (lVar2 = (longlong)iVar1 * 0x20 + *(longlong *)(param_1 + 0xf0), lVar2 == 0))
  {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  *param_2 = *(undefined8 *)(lVar2 + 8);
  lVar2 = *(longlong *)(lVar2 + 0x10);
  param_2[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14750ecb6 FUN_14750ecb6 body=192 status=ok
// SIG undefined FUN_14750ecb6(void)

void FUN_14750ecb6(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_3;
  local_40 = (longlong *)param_3[1];
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  local_30 = &local_38;
  local_28 = &local_48;
  local_38 = param_2;
  FUN_1475156f8(param_1,local_1c);
  plVar3 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = (longlong *)param_3[1];
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
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14750ed78 FUN_14750ed78 body=239 status=ok
// SIG undefined FUN_14750ed78(void)

void FUN_14750ed78(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    local_48 = *param_3;
    local_40 = (longlong *)param_3[1];
    if (local_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
    }
    local_50 = 0;
    FUN_14485c47a(&local_50);
    local_30 = &local_48;
    local_38 = &local_50;
    FUN_147515fce(param_1 + 0xf0,local_24);
    plVar3 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_40)(local_40);
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
  plVar3 = (longlong *)param_3[1];
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
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14750ee68 FUN_14750ee68 body=51 status=ok
// SIG undefined FUN_14750ee68(void)

void FUN_14750ee68(longlong param_1)

{
  FUN_14080c2b4();
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  FUN_145974bae(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014750ee94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  return;
}



// FUNCTION 14750eef2 FUN_14750eef2 body=42 status=ok
// SIG undefined FUN_14750eef2(void)

void FUN_14750eef2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14750ef20 FUN_14750ef20 body=42 status=ok
// SIG undefined FUN_14750ef20(void)

void FUN_14750ef20(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14750ef56 FUN_14750ef56 body=39 status=ok
// SIG undefined FUN_14750ef56(void)

void FUN_14750ef56(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar1,param_1);
  return;
}



// FUNCTION 14750ef7e FUN_14750ef7e body=52 status=ok
// SIG undefined FUN_14750ef7e(void)

void FUN_14750ef7e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14750efb2 FUN_14750efb2 body=42 status=ok
// SIG undefined FUN_14750efb2(void)

void FUN_14750efb2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14750efe8 FUN_14750efe8 body=39 status=ok
// SIG undefined FUN_14750efe8(void)

void FUN_14750efe8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1475118ce(uVar1,param_1);
  return;
}



// FUNCTION 14750f010 FUN_14750f010 body=75 status=ok
// SIG undefined FUN_14750f010(void)

longlong FUN_14750f010(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0x100) = 0;
  *(undefined8 *)(lVar1 + 0x108) = 0;
  *(undefined8 *)(lVar1 + 0x10e) = 0;
  return lVar1;
}



// FUNCTION 14750f05c FUN_14750f05c body=42 status=ok
// SIG undefined FUN_14750f05c(void)

void FUN_14750f05c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14750f092 FUN_14750f092 body=96 status=ok
// SIG undefined FUN_14750f092(void)

undefined8 FUN_14750f092(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f93ab2();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cab0660,1);
  return uVar3;
}



// FUNCTION 14750f0f2 FUN_14750f0f2 body=52 status=ok
// SIG undefined FUN_14750f0f2(void)

void FUN_14750f0f2(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14750f126 FUN_14750f126 body=42 status=ok
// SIG undefined FUN_14750f126(void)

void FUN_14750f126(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14750f15c FUN_14750f15c body=96 status=ok
// SIG undefined FUN_14750f15c(void)

undefined8 FUN_14750f15c(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_14604711e();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cab0a20,1);
  return uVar3;
}



// FUNCTION 14750f1bc FUN_14750f1bc body=52 status=ok
// SIG undefined FUN_14750f1bc(void)

void FUN_14750f1bc(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14750f1f0 FUN_14750f1f0 body=42 status=ok
// SIG undefined FUN_14750f1f0(void)

void FUN_14750f1f0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x120);
  return;
}



// FUNCTION 14750f226 FUN_14750f226 body=93 status=ok
// SIG undefined FUN_14750f226(void)

longlong FUN_14750f226(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x120,0x10);
  FUN_1475118ce(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0x118) = 0;
  *(undefined2 *)(lVar1 + 0x11c) = 0;
  FUN_1474409b8(lVar1 + 0x118,*(undefined8 *)(param_1 + 0x28),L"BatchColor",0);
  return lVar1;
}



// FUNCTION 14750f284 FUN_14750f284 body=94 status=ok
// SIG undefined FUN_14750f284(void)

longlong FUN_14750f284(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x120,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0x100) = 0;
  *(undefined8 *)(lVar1 + 0x108) = 0;
  *(undefined8 *)(lVar1 + 0x10e) = 0;
  *(undefined4 *)(lVar1 + 0x118) = 0;
  *(undefined2 *)(lVar1 + 0x11c) = 0;
  return lVar1;
}



// FUNCTION 14750f2e2 FUN_14750f2e2 body=42 status=ok
// SIG undefined FUN_14750f2e2(void)

void FUN_14750f2e2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14750f318 FUN_14750f318 body=39 status=ok
// SIG undefined FUN_14750f318(void)

void FUN_14750f318(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1475118ce(uVar1,param_1);
  return;
}



// FUNCTION 14750f340 FUN_14750f340 body=75 status=ok
// SIG undefined FUN_14750f340(void)

longlong FUN_14750f340(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0x100) = 0;
  *(undefined8 *)(lVar1 + 0x108) = 0;
  *(undefined8 *)(lVar1 + 0x10e) = 0;
  return lVar1;
}



// FUNCTION 14750f38c FUN_14750f38c body=42 status=ok
// SIG undefined FUN_14750f38c(void)

void FUN_14750f38c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14750f3c2 FUN_14750f3c2 body=39 status=ok
// SIG undefined FUN_14750f3c2(void)

void FUN_14750f3c2(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1475118ce(uVar1,param_1);
  return;
}



// FUNCTION 14750f3ea FUN_14750f3ea body=75 status=ok
// SIG undefined FUN_14750f3ea(void)

longlong FUN_14750f3ea(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0x100) = 0;
  *(undefined8 *)(lVar1 + 0x108) = 0;
  *(undefined8 *)(lVar1 + 0x10e) = 0;
  return lVar1;
}



// FUNCTION 14750f436 FUN_14750f436 body=42 status=ok
// SIG undefined FUN_14750f436(void)

void FUN_14750f436(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14750f46c FUN_14750f46c body=39 status=ok
// SIG undefined FUN_14750f46c(void)

void FUN_14750f46c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1475118ce(uVar1,param_1);
  return;
}



// FUNCTION 14750f494 FUN_14750f494 body=75 status=ok
// SIG undefined FUN_14750f494(void)

longlong FUN_14750f494(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0x100) = 0;
  *(undefined8 *)(lVar1 + 0x108) = 0;
  *(undefined8 *)(lVar1 + 0x10e) = 0;
  return lVar1;
}



// FUNCTION 14750f4e0 FUN_14750f4e0 body=42 status=ok
// SIG undefined FUN_14750f4e0(void)

void FUN_14750f4e0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14750f516 FUN_14750f516 body=39 status=ok
// SIG undefined FUN_14750f516(void)

void FUN_14750f516(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1475118ce(uVar1,param_1);
  return;
}



// FUNCTION 14750f53e FUN_14750f53e body=75 status=ok
// SIG undefined FUN_14750f53e(void)

longlong FUN_14750f53e(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0x100) = 0;
  *(undefined8 *)(lVar1 + 0x108) = 0;
  *(undefined8 *)(lVar1 + 0x10e) = 0;
  return lVar1;
}



// FUNCTION 14750f58a FUN_14750f58a body=42 status=ok
// SIG undefined FUN_14750f58a(void)

void FUN_14750f58a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14750f5c0 FUN_14750f5c0 body=39 status=ok
// SIG undefined FUN_14750f5c0(void)

void FUN_14750f5c0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1475118ce(uVar1,param_1);
  return;
}



// FUNCTION 14750f5e8 FUN_14750f5e8 body=75 status=ok
// SIG undefined FUN_14750f5e8(void)

longlong FUN_14750f5e8(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0x100) = 0;
  *(undefined8 *)(lVar1 + 0x108) = 0;
  *(undefined8 *)(lVar1 + 0x10e) = 0;
  return lVar1;
}



// FUNCTION 14750f634 FUN_14750f634 body=42 status=ok
// SIG undefined FUN_14750f634(void)

void FUN_14750f634(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14750f66a FUN_14750f66a body=39 status=ok
// SIG undefined FUN_14750f66a(void)

void FUN_14750f66a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1475118ce(uVar1,param_1);
  return;
}



// FUNCTION 14750f692 FUN_14750f692 body=75 status=ok
// SIG undefined FUN_14750f692(void)

longlong FUN_14750f692(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0x100) = 0;
  *(undefined8 *)(lVar1 + 0x108) = 0;
  *(undefined8 *)(lVar1 + 0x10e) = 0;
  return lVar1;
}



// FUNCTION 14750f6de FUN_14750f6de body=42 status=ok
// SIG undefined FUN_14750f6de(void)

void FUN_14750f6de(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14750f714 FUN_14750f714 body=39 status=ok
// SIG undefined FUN_14750f714(void)

void FUN_14750f714(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1475118ce(uVar1,param_1);
  return;
}



// FUNCTION 14750f73c FUN_14750f73c body=75 status=ok
// SIG undefined FUN_14750f73c(void)

longlong FUN_14750f73c(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0x100) = 0;
  *(undefined8 *)(lVar1 + 0x108) = 0;
  *(undefined8 *)(lVar1 + 0x10e) = 0;
  return lVar1;
}



// FUNCTION 14750f788 FUN_14750f788 body=42 status=ok
// SIG undefined FUN_14750f788(void)

void FUN_14750f788(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14750f7be FUN_14750f7be body=39 status=ok
// SIG undefined FUN_14750f7be(void)

void FUN_14750f7be(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1475118ce(uVar1,param_1);
  return;
}



// FUNCTION 14750f7e6 FUN_14750f7e6 body=75 status=ok
// SIG undefined FUN_14750f7e6(void)

longlong FUN_14750f7e6(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0x100) = 0;
  *(undefined8 *)(lVar1 + 0x108) = 0;
  *(undefined8 *)(lVar1 + 0x10e) = 0;
  return lVar1;
}



// FUNCTION 14750f832 FUN_14750f832 body=42 status=ok
// SIG undefined FUN_14750f832(void)

void FUN_14750f832(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14750f868 FUN_14750f868 body=39 status=ok
// SIG undefined FUN_14750f868(void)

void FUN_14750f868(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1475118ce(uVar1,param_1);
  return;
}



// FUNCTION 14750f890 FUN_14750f890 body=75 status=ok
// SIG undefined FUN_14750f890(void)

longlong FUN_14750f890(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0x100) = 0;
  *(undefined8 *)(lVar1 + 0x108) = 0;
  *(undefined8 *)(lVar1 + 0x10e) = 0;
  return lVar1;
}



// FUNCTION 14750f8dc FUN_14750f8dc body=42 status=ok
// SIG undefined FUN_14750f8dc(void)

void FUN_14750f8dc(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14750f912 FUN_14750f912 body=39 status=ok
// SIG undefined FUN_14750f912(void)

void FUN_14750f912(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1475118ce(uVar1,param_1);
  return;
}



// FUNCTION 14750f93a FUN_14750f93a body=75 status=ok
// SIG undefined FUN_14750f93a(void)

longlong FUN_14750f93a(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0x100) = 0;
  *(undefined8 *)(lVar1 + 0x108) = 0;
  *(undefined8 *)(lVar1 + 0x10e) = 0;
  return lVar1;
}



// FUNCTION 14750f986 FUN_14750f986 body=42 status=ok
// SIG undefined FUN_14750f986(void)

void FUN_14750f986(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14750f9bc FUN_14750f9bc body=39 status=ok
// SIG undefined FUN_14750f9bc(void)

void FUN_14750f9bc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1475118ce(uVar1,param_1);
  return;
}



// FUNCTION 14750f9e4 FUN_14750f9e4 body=75 status=ok
// SIG undefined FUN_14750f9e4(void)

longlong FUN_14750f9e4(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0x100) = 0;
  *(undefined8 *)(lVar1 + 0x108) = 0;
  *(undefined8 *)(lVar1 + 0x10e) = 0;
  return lVar1;
}



// FUNCTION 14750fa30 FUN_14750fa30 body=42 status=ok
// SIG undefined FUN_14750fa30(void)

void FUN_14750fa30(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14750fa66 FUN_14750fa66 body=39 status=ok
// SIG undefined FUN_14750fa66(void)

void FUN_14750fa66(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1475118ce(uVar1,param_1);
  return;
}



// FUNCTION 14750fa8e FUN_14750fa8e body=75 status=ok
// SIG undefined FUN_14750fa8e(void)

longlong FUN_14750fa8e(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0x100) = 0;
  *(undefined8 *)(lVar1 + 0x108) = 0;
  *(undefined8 *)(lVar1 + 0x10e) = 0;
  return lVar1;
}



// FUNCTION 14750fada FUN_14750fada body=42 status=ok
// SIG undefined FUN_14750fada(void)

void FUN_14750fada(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14750fb10 FUN_14750fb10 body=39 status=ok
// SIG undefined FUN_14750fb10(void)

void FUN_14750fb10(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1475118ce(uVar1,param_1);
  return;
}



// FUNCTION 14750fb38 FUN_14750fb38 body=75 status=ok
// SIG undefined FUN_14750fb38(void)

longlong FUN_14750fb38(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0x100) = 0;
  *(undefined8 *)(lVar1 + 0x108) = 0;
  *(undefined8 *)(lVar1 + 0x10e) = 0;
  return lVar1;
}



// FUNCTION 14750fb84 FUN_14750fb84 body=42 status=ok
// SIG undefined FUN_14750fb84(void)

void FUN_14750fb84(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14750fbba FUN_14750fbba body=39 status=ok
// SIG undefined FUN_14750fbba(void)

void FUN_14750fbba(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1475118ce(uVar1,param_1);
  return;
}



// FUNCTION 14750fbe2 FUN_14750fbe2 body=75 status=ok
// SIG undefined FUN_14750fbe2(void)

longlong FUN_14750fbe2(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0x100) = 0;
  *(undefined8 *)(lVar1 + 0x108) = 0;
  *(undefined8 *)(lVar1 + 0x10e) = 0;
  return lVar1;
}



// FUNCTION 14750fc2e FUN_14750fc2e body=42 status=ok
// SIG undefined FUN_14750fc2e(void)

void FUN_14750fc2e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14750fc64 FUN_14750fc64 body=39 status=ok
// SIG undefined FUN_14750fc64(void)

void FUN_14750fc64(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1475118ce(uVar1,param_1);
  return;
}



// FUNCTION 14750fc8c FUN_14750fc8c body=75 status=ok
// SIG undefined FUN_14750fc8c(void)

longlong FUN_14750fc8c(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0x100) = 0;
  *(undefined8 *)(lVar1 + 0x108) = 0;
  *(undefined8 *)(lVar1 + 0x10e) = 0;
  return lVar1;
}



// FUNCTION 14750fcd8 FUN_14750fcd8 body=42 status=ok
// SIG undefined FUN_14750fcd8(void)

void FUN_14750fcd8(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14750fd0e FUN_14750fd0e body=39 status=ok
// SIG undefined FUN_14750fd0e(void)

void FUN_14750fd0e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1475118ce(uVar1,param_1);
  return;
}



// FUNCTION 14750fd36 FUN_14750fd36 body=75 status=ok
// SIG undefined FUN_14750fd36(void)

longlong FUN_14750fd36(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0x100) = 0;
  *(undefined8 *)(lVar1 + 0x108) = 0;
  *(undefined8 *)(lVar1 + 0x10e) = 0;
  return lVar1;
}



// FUNCTION 14750fd82 FUN_14750fd82 body=42 status=ok
// SIG undefined FUN_14750fd82(void)

void FUN_14750fd82(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14750fdb8 FUN_14750fdb8 body=39 status=ok
// SIG undefined FUN_14750fdb8(void)

void FUN_14750fdb8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1475118ce(uVar1,param_1);
  return;
}



// FUNCTION 14750fde0 FUN_14750fde0 body=75 status=ok
// SIG undefined FUN_14750fde0(void)

longlong FUN_14750fde0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0x100) = 0;
  *(undefined8 *)(lVar1 + 0x108) = 0;
  *(undefined8 *)(lVar1 + 0x10e) = 0;
  return lVar1;
}


