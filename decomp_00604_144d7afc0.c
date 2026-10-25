// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144d7afc0 FUN_144d7afc0 body=11 status=ok
// SIG undefined FUN_144d7afc0(void)

undefined8 FUN_144d7afc0(void)

{
  return 0;
}



// FUNCTION 144d7afd0 FUN_144d7afd0 body=85 status=ok
// SIG undefined FUN_144d7afd0(void)

longlong FUN_144d7afd0(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_1499d62a8;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_1499d6368;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x20,0x28);
  }
  return param_1 + -0x20;
}



// FUNCTION 144d7b030 FUN_144d7b030 body=167 status=ok
// SIG undefined FUN_144d7b030(void)

undefined8 * FUN_144d7b030(undefined8 *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &DAT_1499d6478;
    param_1[4] = &PTR__purecall_14ba6c6b0;
  }
  *param_1 = &PTR__purecall_1499d61c0;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) =
       &PTR__purecall_1499d6280;
  *param_1 = &PTR__purecall_1499d62a8;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_1499d6368;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_1499d6390;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_1499d6450;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  return param_1;
}



// FUNCTION 144d7b0e0 FUN_144d7b0e0 body=196 status=ok
// SIG undefined FUN_144d7b0e0(void)

ulonglong FUN_144d7b0e0(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong in_RAX;
  undefined8 uVar4;
  ulonglong local_res8;
  ulonglong *local_res10;
  
  local_res8 = local_res8 & 0xffffffff00000000;
  puVar1 = *(ulonglong **)(param_1 + -8);
  local_res10 = param_2;
  if ((*puVar1 < 0x30) || (puVar1[5] == 0)) {
    uVar2 = *param_2;
    if (uVar2 != 0) {
      in_RAX = (**(code **)(*(longlong *)
                             ((longlong)*(int *)(*(longlong *)(uVar2 + 8) + 4) + uVar2 + 8) + 8))();
    }
  }
  else {
    local_res8 = *param_2;
    if (local_res8 != 0) {
      if (local_res8 != 0) {
        (*(code *)**(undefined8 **)
                    (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      }
      uVar4 = FUN_144d7aa20(&local_res8);
      iVar3 = (*(code *)puVar1[5])(puVar1,uVar4);
      uVar2 = *param_2;
      if (uVar2 != 0) {
        (**(code **)(*(longlong *)(uVar2 + 8 + (longlong)*(int *)(*(longlong *)(uVar2 + 8) + 4)) + 8
                    ))();
      }
      return (ulonglong)(iVar3 != 0);
    }
    in_RAX = 0;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 144d7b1b0 FUN_144d7b1b0 body=196 status=ok
// SIG undefined FUN_144d7b1b0(void)

ulonglong FUN_144d7b1b0(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong in_RAX;
  undefined8 uVar4;
  ulonglong local_res8;
  ulonglong *local_res10;
  
  local_res8 = local_res8 & 0xffffffff00000000;
  puVar1 = *(ulonglong **)(param_1 + -8);
  local_res10 = param_2;
  if ((*puVar1 < 0x38) || (puVar1[6] == 0)) {
    uVar2 = *param_2;
    if (uVar2 != 0) {
      in_RAX = (**(code **)(*(longlong *)
                             ((longlong)*(int *)(*(longlong *)(uVar2 + 8) + 4) + uVar2 + 8) + 8))();
    }
  }
  else {
    local_res8 = *param_2;
    if (local_res8 != 0) {
      if (local_res8 != 0) {
        (*(code *)**(undefined8 **)
                    (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      }
      uVar4 = FUN_144d7aa20(&local_res8);
      iVar3 = (*(code *)puVar1[6])(puVar1,uVar4);
      uVar2 = *param_2;
      if (uVar2 != 0) {
        (**(code **)(*(longlong *)(uVar2 + 8 + (longlong)*(int *)(*(longlong *)(uVar2 + 8) + 4)) + 8
                    ))();
      }
      return (ulonglong)(iVar3 != 0);
    }
    in_RAX = 0;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 144d7b280 FUN_144d7b280 body=42 status=ok
// SIG undefined FUN_144d7b280(void)

bool FUN_144d7b280(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((0x3f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[7], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 144d7b2b0 FUN_144d7b2b0 body=68 status=ok
// SIG undefined FUN_144d7b2b0(void)

undefined8 *
FUN_144d7b2b0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((0x47 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[8], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_144d7c1a0(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144d7b300 FUN_144d7b300 body=214 status=ok
// SIG undefined FUN_144d7b300(void)

undefined8 * FUN_144d7b300(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  if ((**(ulonglong **)(param_1 + -8) < 0x50) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[9], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 144d7b3e0 FUN_144d7b3e0 body=205 status=ok
// SIG undefined FUN_144d7b3e0(void)

undefined8 * FUN_144d7b3e0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_res8;
  
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0x58) || (puVar1[10] == 0)) {
    *param_2 = 0;
    lVar2 = *param_3;
    if (lVar2 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))
                ();
    }
  }
  else {
    local_res8 = *param_3;
    if (local_res8 != 0) {
      (*(code *)**(undefined8 **)
                  (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
    }
    uVar3 = FUN_144d73540(&local_res8);
    uVar3 = (*(code *)puVar1[10])(puVar1,uVar3);
    FUN_144d7c2f0(param_2,uVar3);
    lVar2 = *param_3;
    if (lVar2 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))
                ();
    }
  }
  return param_2;
}



// FUNCTION 144d7b4b0 FUN_144d7b4b0 body=268 status=ok
// SIG undefined FUN_144d7b4b0(void)

ulonglong FUN_144d7b4b0(longlong param_1,longlong param_2,longlong param_3,ulonglong *param_4)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong in_RAX;
  undefined8 uVar6;
  ulonglong local_res8;
  undefined8 uVar7;
  
  uVar7 = 0xfffffffffffffffe;
  local_res8 = local_res8 & 0xffffffff00000000;
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0x60) || (puVar1[0xb] == 0)) {
    uVar4 = *param_4;
    if (uVar4 != 0) {
      in_RAX = (**(code **)(*(longlong *)
                             ((longlong)*(int *)(*(longlong *)(uVar4 + 8) + 4) + uVar4 + 8) + 8))();
    }
  }
  else {
    in_RAX = *(ulonglong *)(param_2 + 8);
    if ((in_RAX != 0) && (*(longlong *)(in_RAX + 8) != 0)) {
      local_res8 = *param_4;
      if (local_res8 != 0) {
        (*(code *)**(undefined8 **)
                    (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      }
      uVar2 = *(undefined8 *)(param_3 + 8);
      uVar3 = *(undefined8 *)(param_2 + 8);
      uVar6 = FUN_144d735d0(&local_res8);
      iVar5 = (*(code *)puVar1[0xb])(puVar1,uVar3,uVar2,uVar6,uVar7);
      uVar4 = *param_4;
      if (uVar4 != 0) {
        (**(code **)(*(longlong *)(uVar4 + 8 + (longlong)*(int *)(*(longlong *)(uVar4 + 8) + 4)) + 8
                    ))();
      }
      return (ulonglong)(iVar5 != 0);
    }
    uVar4 = *param_4;
    if (uVar4 != 0) {
      in_RAX = (**(code **)(*(longlong *)
                             ((longlong)*(int *)(*(longlong *)(uVar4 + 8) + 4) + uVar4 + 8) + 8))();
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 144d7b5c0 FUN_144d7b5c0 body=42 status=ok
// SIG undefined FUN_144d7b5c0(void)

bool FUN_144d7b5c0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((0x67 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0xc], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 144d7b610 FUN_144d7b610 body=66 status=ok
// SIG undefined FUN_144d7b610(void)

bool FUN_144d7b610(longlong param_1,longlong param_2)

{
  code *pcVar1;
  int iVar2;
  
  if ((((0x77 < **(ulonglong **)(param_1 + -8)) &&
       (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0xe], pcVar1 != (code *)0x0)) &&
      (*(longlong *)(param_2 + 8) != 0)) && (*(longlong *)(*(longlong *)(param_2 + 8) + 8) != 0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 144d7b660 FUN_144d7b660 body=100 status=ok
// SIG undefined FUN_144d7b660(void)

undefined8 * FUN_144d7b660(longlong param_1,undefined8 *param_2,longlong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if ((**(ulonglong **)(param_1 + -8) < 0x80) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0xf], pcVar1 == (code *)0x0)) {
    *param_2 = 0;
    return param_2;
  }
  if ((*(longlong *)(param_3 + 8) != 0) && (*(longlong *)(*(longlong *)(param_3 + 8) + 8) != 0)) {
    uVar2 = (*pcVar1)();
    FUN_144d737e0(param_2,uVar2);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144d7b6d0 FUN_144d7b6d0 body=78 status=ok
// SIG undefined FUN_144d7b6d0(void)

undefined8 *
FUN_144d7b6d0(longlong param_1,undefined8 *param_2,undefined1 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x87 < *puVar1) && ((code *)puVar1[0x10] != (code *)0x0)) {
    uVar2 = (*(code *)puVar1[0x10])(puVar1,param_3,param_3,param_4,0);
    FUN_144d73c30(param_2,uVar2);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144d7b720 FUN_144d7b720 body=72 status=ok
// SIG undefined FUN_144d7b720(void)

bool FUN_144d7b720(longlong param_1,longlong param_2)

{
  code *pcVar1;
  int iVar2;
  
  if ((((0x8f < **(ulonglong **)(param_1 + -8)) &&
       (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x11], pcVar1 != (code *)0x0)) &&
      (*(longlong *)(param_2 + 8) != 0)) && (*(longlong *)(*(longlong *)(param_2 + 8) + 8) != 0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 144d7b770 FUN_144d7b770 body=299 status=ok
// SIG undefined FUN_144d7b770(void)

ulonglong FUN_144d7b770(longlong param_1,longlong param_2,ulonglong *param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong in_RAX;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong local_res8;
  undefined8 uVar7;
  ulonglong *puVar8;
  
  uVar7 = 0xfffffffffffffffe;
  local_res8 = local_res8 & 0xffffffff00000000;
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0x98) || (puVar1[0x12] == 0)) {
    uVar3 = *param_3;
    if (uVar3 != 0) {
      in_RAX = (**(code **)(*(longlong *)
                             ((longlong)*(int *)(*(longlong *)(uVar3 + 8) + 4) + uVar3 + 8) + 8))();
    }
  }
  else {
    in_RAX = *(ulonglong *)(param_2 + 8);
    if ((in_RAX != 0) && (*(longlong *)(in_RAX + 8) != 0)) {
      puVar8 = &local_res8;
      local_res8 = *param_3;
      if (local_res8 != 0) {
        (*(code *)**(undefined8 **)
                    (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      }
      uVar2 = *(undefined8 *)(param_2 + 8);
      uVar5 = FUN_144d7ad10(param_4);
      uVar6 = FUN_144d738d0(&local_res8);
      iVar4 = (*(code *)puVar1[0x12])(puVar1,uVar2,uVar6,uVar5,uVar7,puVar8);
      uVar3 = *param_3;
      if (uVar3 != 0) {
        (**(code **)(*(longlong *)(uVar3 + 8 + (longlong)*(int *)(*(longlong *)(uVar3 + 8) + 4)) + 8
                    ))();
      }
      return (ulonglong)(iVar4 != 0);
    }
    uVar3 = *param_3;
    if (uVar3 != 0) {
      in_RAX = (**(code **)(*(longlong *)
                             ((longlong)*(int *)(*(longlong *)(uVar3 + 8) + 4) + uVar3 + 8) + 8))();
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 144d7b8a0 FUN_144d7b8a0 body=179 status=ok
// SIG undefined FUN_144d7b8a0(void)

void FUN_144d7b8a0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_res8;
  longlong *local_res10;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  puVar1 = *(ulonglong **)(param_1 + -8);
  local_res10 = param_2;
  if ((*puVar1 < 0xa0) || (puVar1[0x13] == 0)) {
    lVar2 = *param_2;
    if (lVar2 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))
                ();
    }
  }
  else {
    local_res8 = *param_2;
    if (local_res8 != 0) {
      (*(code *)**(undefined8 **)
                  (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
    }
    uVar3 = FUN_144d73540(&local_res8);
    (*(code *)puVar1[0x13])(puVar1,uVar3,param_3,param_4,uVar4);
    lVar2 = *param_2;
    if (lVar2 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 144d7b960 FUN_144d7b960 body=179 status=ok
// SIG undefined FUN_144d7b960(void)

void FUN_144d7b960(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_res8;
  longlong *local_res10;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  puVar1 = *(ulonglong **)(param_1 + -8);
  local_res10 = param_2;
  if ((*puVar1 < 0xa8) || (puVar1[0x14] == 0)) {
    lVar2 = *param_2;
    if (lVar2 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))
                ();
    }
  }
  else {
    local_res8 = *param_2;
    if (local_res8 != 0) {
      (*(code *)**(undefined8 **)
                  (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
    }
    uVar3 = FUN_144d73540(&local_res8);
    (*(code *)puVar1[0x14])(puVar1,uVar3,param_3,param_4,uVar4);
    lVar2 = *param_2;
    if (lVar2 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 144d7ba20 FUN_144d7ba20 body=179 status=ok
// SIG undefined FUN_144d7ba20(void)

void FUN_144d7ba20(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_res8;
  longlong *local_res10;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  puVar1 = *(ulonglong **)(param_1 + -8);
  local_res10 = param_2;
  if ((*puVar1 < 0xb0) || (puVar1[0x15] == 0)) {
    lVar2 = *param_2;
    if (lVar2 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))
                ();
    }
  }
  else {
    local_res8 = *param_2;
    if (local_res8 != 0) {
      (*(code *)**(undefined8 **)
                  (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
    }
    uVar3 = FUN_144d73540(&local_res8);
    (*(code *)puVar1[0x15])(puVar1,uVar3,param_3,param_4,uVar4);
    lVar2 = *param_2;
    if (lVar2 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 144d7bae0 FUN_144d7bae0 body=217 status=ok
// SIG undefined FUN_144d7bae0(void)

void FUN_144d7bae0(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0xb8) || (puVar1[0x16] == 0)) {
    lVar3 = *param_3;
    if (lVar3 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar3 + 8) + 4) + lVar3 + 8) + 8))
                ();
    }
  }
  else if ((*(longlong *)(param_2 + 8) == 0) || (*(longlong *)(*(longlong *)(param_2 + 8) + 8) == 0)
          ) {
    lVar3 = *param_3;
    if (lVar3 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar3 + 8) + 4) + lVar3 + 8) + 8))
                ();
    }
  }
  else {
    if (*param_3 != 0) {
      uVar4 = FUN_144d7c530(local_res8,param_3,param_3,param_4,0xfffffffffffffffe);
      uVar2 = *(undefined8 *)(param_2 + 8);
      uVar4 = FUN_144d7c260(uVar4);
      (*(code *)puVar1[0x16])(puVar1,uVar2,uVar4);
    }
    FUN_144d7c570(param_3);
  }
  return;
}



// FUNCTION 144d7bbc0 FUN_144d7bbc0 body=409 status=ok
// SIG undefined FUN_144d7bbc0(void)

void FUN_144d7bbc0(longlong param_1,longlong param_2,longlong *param_3,ulonglong *param_4)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong local_res8 [2];
  longlong *local_res18;
  ulonglong *local_res20;
  longlong local_38 [2];
  
  local_38[1] = 0xfffffffffffffffe;
  local_res8[0] = local_res8[0] & 0xffffffff00000000;
  puVar1 = *(ulonglong **)(param_1 + -8);
  local_res18 = param_3;
  local_res20 = param_4;
  if ((*puVar1 < 0xc0) || (puVar1[0x17] == 0)) {
    lVar3 = *param_3;
    if (lVar3 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar3 + 8) + 4) + lVar3 + 8) + 8))
                ();
    }
    uVar4 = *param_4;
    if (uVar4 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(uVar4 + 8) + 4) + uVar4 + 8) + 8))
                ();
    }
  }
  else if ((*(longlong *)(param_2 + 8) == 0) || (*(longlong *)(*(longlong *)(param_2 + 8) + 8) == 0)
          ) {
    lVar3 = *param_3;
    if (lVar3 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar3 + 8) + 4) + lVar3 + 8) + 8))
                ();
    }
    uVar4 = *param_4;
    if (uVar4 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(uVar4 + 8) + 4) + uVar4 + 8) + 8))
                ();
    }
  }
  else {
    local_res8[0] = *param_4;
    if (local_res8[0] != 0) {
      (*(code *)**(undefined8 **)
                  (local_res8[0] + 8 + (longlong)*(int *)(*(longlong *)(local_res8[0] + 8) + 4)))();
    }
    uVar5 = FUN_144d7c080(local_res8);
    local_38[0] = *param_3;
    if (local_38[0] != 0) {
      (*(code *)**(undefined8 **)
                  (local_38[0] + 8 + (longlong)*(int *)(*(longlong *)(local_38[0] + 8) + 4)))();
    }
    uVar2 = *(undefined8 *)(param_2 + 8);
    uVar6 = FUN_144d73d20(local_38);
    (*(code *)puVar1[0x17])(puVar1,uVar2,uVar6,uVar5);
    lVar3 = *param_3;
    if (lVar3 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar3 + 8) + 4) + lVar3 + 8) + 8))
                ();
    }
    uVar4 = *param_4;
    if (uVar4 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(uVar4 + 8) + 4) + uVar4 + 8) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 144d7bd60 FUN_144d7bd60 body=72 status=ok
// SIG undefined FUN_144d7bd60(void)

bool FUN_144d7bd60(longlong param_1,longlong param_2)

{
  code *pcVar1;
  int iVar2;
  
  if ((((199 < **(ulonglong **)(param_1 + -8)) &&
       (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x18], pcVar1 != (code *)0x0)) &&
      (*(longlong *)(param_2 + 8) != 0)) && (*(longlong *)(*(longlong *)(param_2 + 8) + 8) != 0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 144d7bdb0 FUN_144d7bdb0 body=72 status=ok
// SIG undefined FUN_144d7bdb0(void)

bool FUN_144d7bdb0(longlong param_1,longlong param_2)

{
  code *pcVar1;
  int iVar2;
  
  if ((((0xcf < **(ulonglong **)(param_1 + -8)) &&
       (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x19], pcVar1 != (code *)0x0)) &&
      (*(longlong *)(param_2 + 8) != 0)) && (*(longlong *)(*(longlong *)(param_2 + 8) + 8) != 0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 144d7be00 FUN_144d7be00 body=153 status=ok
// SIG undefined FUN_144d7be00(void)

bool FUN_144d7be00(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  int iVar2;
  longlong lVar3;
  
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0xd7 < *puVar1) && (puVar1[0x1a] != 0)) {
    lVar3 = cef_string_list_alloc();
    if (lVar3 != 0) {
      FUN_14516e860(param_2,lVar3);
    }
    iVar2 = (*(code *)puVar1[0x1a])(puVar1,lVar3);
    if (lVar3 != 0) {
      FUN_144d739a0(param_2);
      FUN_14516e770(lVar3,param_2);
      cef_string_list_free(lVar3);
    }
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 144d7bea0 FUN_144d7bea0 body=103 status=ok
// SIG undefined FUN_144d7bea0(void)

undefined8 * FUN_144d7bea0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if ((**(ulonglong **)(param_1 + -8) < 0xe0) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x1b], pcVar1 == (code *)0x0)) {
    *param_2 = 0;
    return param_2;
  }
  if ((*(longlong *)(param_3 + 8) != 0) && (*(longlong *)(*(longlong *)(param_3 + 8) + 8) != 0)) {
    uVar2 = (*pcVar1)();
    FUN_144d7a670(param_2,uVar2);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144d7bf10 FUN_144d7bf10 body=214 status=ok
// SIG undefined FUN_144d7bf10(void)

undefined8 * FUN_144d7bf10(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_res8;
  
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0xe8) || (puVar1[0x1c] == 0)) {
    *param_2 = 0;
    lVar2 = *param_3;
    if (lVar2 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))
                ();
    }
  }
  else {
    local_res8 = *param_3;
    if (local_res8 != 0) {
      (*(code *)**(undefined8 **)
                  (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
    }
    uVar3 = FUN_144d73540(&local_res8);
    uVar3 = (*(code *)puVar1[0x1c])(puVar1,uVar3);
    FUN_144d7c3e0(param_2,uVar3);
    lVar2 = *param_3;
    if (lVar2 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))
                ();
    }
  }
  return param_2;
}



// FUNCTION 144d7bff0 FUN_144d7bff0 body=143 status=ok
// SIG undefined FUN_144d7bff0(void)

undefined8 * FUN_144d7bff0(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -4;
  *puVar1 = &PTR_FUN_1499d6390;
  *(undefined ***)((longlong)*(int *)(param_1[-3] + 4) + -0x18 + (longlong)param_1) =
       &PTR_LAB_1499d6450;
  *(int *)((longlong)*(int *)(param_1[-3] + 4) + -0x1c + (longlong)param_1) =
       *(int *)(param_1[-3] + 4) + -0x18;
  *puVar1 = &PTR__purecall_1499d62a8;
  *(undefined ***)((longlong)*(int *)(param_1[-3] + 4) + -0x18 + (longlong)param_1) =
       &PTR_LAB_1499d6368;
  *(int *)((longlong)*(int *)(param_1[-3] + 4) + -0x1c + (longlong)param_1) =
       *(int *)(param_1[-3] + 4) + -0x18;
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(puVar1,0x28);
  }
  return puVar1;
}



// FUNCTION 144d7c080 FUN_144d7c080 body=135 status=ok
// SIG undefined FUN_144d7c080(void)

undefined8 * FUN_144d7c080(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*param_1 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar1 = FUN_14494321d(0x90);
    if (lVar1 == 0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2 = (undefined8 *)FUN_145176880(lVar1);
    }
    puVar2[2] = *param_1;
    (**(code **)*puVar2)(puVar2);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
    puVar2 = puVar2 + 4;
  }
  return puVar2;
}



// FUNCTION 144d7c110 FUN_144d7c110 body=135 status=ok
// SIG undefined FUN_144d7c110(void)

undefined8 * FUN_144d7c110(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*param_1 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar1 = FUN_14494321d(0x68);
    if (lVar1 == 0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2 = (undefined8 *)FUN_145177a70(lVar1);
    }
    puVar2[2] = *param_1;
    (**(code **)*puVar2)(puVar2);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
    puVar2 = puVar2 + 4;
  }
  return puVar2;
}



// FUNCTION 144d7c1a0 FUN_144d7c1a0 body=188 status=ok
// SIG undefined FUN_144d7c1a0(void)

longlong * FUN_144d7c1a0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else if (*(int *)(param_2 + -0x18) == DAT_14c73022c) {
    lVar1 = *(longlong *)(param_2 + -0x10);
    if (lVar1 != 0) {
      (*(code *)**(undefined8 **)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + 8 + lVar1))();
    }
    (**(code **)(**(longlong **)(param_2 + -8) + 8))();
    *param_1 = lVar1;
    if (lVar1 != 0) {
      (*(code *)**(undefined8 **)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + 8 + lVar1))();
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + 8 + lVar1) + 8))
                ();
    }
  }
  else {
    FUN_145177970(param_1,*(int *)(param_2 + -0x18),param_2,param_4,0,0xfffffffffffffffe);
  }
  return param_1;
}



// FUNCTION 144d7c260 FUN_144d7c260 body=135 status=ok
// SIG undefined FUN_144d7c260(void)

undefined8 * FUN_144d7c260(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*param_1 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar1 = FUN_14494321d(0x58);
    if (lVar1 == 0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2 = (undefined8 *)FUN_1451781e0(lVar1);
    }
    puVar2[2] = *param_1;
    (**(code **)*puVar2)(puVar2);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
    puVar2 = puVar2 + 4;
  }
  return puVar2;
}



// FUNCTION 144d7c2f0 FUN_144d7c2f0 body=230 status=ok
// SIG undefined FUN_144d7c2f0(void)

longlong * FUN_144d7c2f0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  uVar3 = 0;
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_14494321d(0x38);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      FUN_144d7c8d0(puVar2 + 4,1,param_3,param_4,uVar3,uVar4);
    }
    *puVar2 = DAT_14c7078ec;
    *(longlong *)(puVar2 + 2) = param_2;
    puVar1 = puVar2 + 4;
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1))();
    }
    if (*(code **)(*(longlong *)(puVar2 + 2) + 0x10) != (code *)0x0) {
      (**(code **)(*(longlong *)(puVar2 + 2) + 0x10))();
    }
    *param_1 = (longlong)puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1))();
      (**(code **)(*(longlong *)
                    ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1) + 8))
                ();
    }
  }
  return param_1;
}



// FUNCTION 144d7c3e0 FUN_144d7c3e0 body=230 status=ok
// SIG undefined FUN_144d7c3e0(void)

longlong * FUN_144d7c3e0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  uVar3 = 0;
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_14494321d(0x38);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      FUN_145178550(puVar2 + 4,1,param_3,param_4,uVar3,uVar4);
    }
    *puVar2 = DAT_14c730234;
    *(longlong *)(puVar2 + 2) = param_2;
    puVar1 = puVar2 + 4;
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1))();
    }
    if (*(code **)(*(longlong *)(puVar2 + 2) + 0x10) != (code *)0x0) {
      (**(code **)(*(longlong *)(puVar2 + 2) + 0x10))();
    }
    *param_1 = (longlong)puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1))();
      (**(code **)(*(longlong *)
                    ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1) + 8))
                ();
    }
  }
  return param_1;
}



// FUNCTION 144d7c4d0 FUN_144d7c4d0 body=48 status=ok
// SIG undefined FUN_144d7c4d0(void)

void FUN_144d7c4d0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 144d7c500 FUN_144d7c500 body=48 status=ok
// SIG undefined FUN_144d7c500(void)

void FUN_144d7c500(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 144d7c530 FUN_144d7c530 body=49 status=ok
// SIG undefined FUN_144d7c530(void)

longlong * FUN_144d7c530(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 144d7c570 FUN_144d7c570 body=48 status=ok
// SIG undefined FUN_144d7c570(void)

void FUN_144d7c570(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 144d7c5a0 FUN_144d7c5a0 body=48 status=ok
// SIG undefined FUN_144d7c5a0(void)

void FUN_144d7c5a0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 144d7c5d0 FUN_144d7c5d0 body=48 status=ok
// SIG undefined FUN_144d7c5d0(void)

void FUN_144d7c5d0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 144d7c650 FUN_144d7c650 body=150 status=ok
// SIG undefined FUN_144d7c650(void)

undefined8 FUN_144d7c650(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_res8;
  longlong *local_res10;
  
  local_res8 = *param_2;
  local_res10 = param_2;
  if (local_res8 != 0) {
    (*(code *)**(undefined8 **)
                (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
  }
  uVar2 = FUN_144d73540(&local_res8);
  uVar2 = cef_cookie_manager_get_global_manager(uVar2);
  FUN_144d7c2f0(param_1,uVar2);
  lVar1 = *param_2;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return param_1;
}



// FUNCTION 144d7c6f0 FUN_144d7c6f0 body=48 status=ok
// SIG undefined FUN_144d7c6f0(void)

longlong FUN_144d7c6f0(longlong param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x10,0x18);
    return param_1 + -0x10;
  }
  return param_1 + -0x10;
}



// FUNCTION 144d7c720 FUN_144d7c720 body=40 status=ok
// SIG undefined FUN_144d7c720(void)

int FUN_144d7c720(longlong param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(*(longlong *)(param_1 + -0x28) + 8);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -0x10);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 144d7c750 FUN_144d7c750 body=181 status=ok
// SIG undefined FUN_144d7c750(void)

undefined8 FUN_144d7c750(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if (*(code **)(param_1[-5] + 0x10) != (code *)0x0) {
    (**(code **)(param_1[-5] + 0x10))();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -2);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    puVar3 = param_1 + -6;
    if (puVar3 != (undefined8 *)0x0) {
      param_1[-4] = &PTR_FUN_1499d68e0;
      *(undefined ***)((longlong)*(int *)(param_1[-3] + 4) + 0x18 + (longlong)puVar3) =
           &PTR_LAB_1499d6908;
      *(int *)((longlong)*(int *)(param_1[-3] + 4) + 0x14 + (longlong)puVar3) =
           *(int *)(param_1[-3] + 4) + -0x18;
      param_1[-4] = &PTR__purecall_1499d6890;
      *(undefined ***)((longlong)*(int *)(param_1[-3] + 4) + 0x18 + (longlong)puVar3) =
           &PTR_LAB_1499d68b8;
      *(int *)((longlong)*(int *)(param_1[-3] + 4) + 0x14 + (longlong)puVar3) =
           *(int *)(param_1[-3] + 4) + -0x18;
      *param_1 = &PTR__purecall_14ba6c6b0;
      thunk_FUN_1400020a8(puVar3,0x38);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 144d7c810 FUN_144d7c810 body=34 status=ok
// SIG undefined FUN_144d7c810(void)

bool FUN_144d7c810(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*(longlong *)(param_1 + -0x28) + 0x18);
  if (pcVar1 == (code *)0x0) {
    return false;
  }
  iVar2 = (*pcVar1)();
  return iVar2 != 0;
}



// FUNCTION 144d7c840 FUN_144d7c840 body=38 status=ok
// SIG undefined FUN_144d7c840(void)

bool FUN_144d7c840(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + -0x28);
  if (*(longlong *)(lVar1 + 0x18) == 0) {
    return false;
  }
  iVar2 = (**(code **)(lVar1 + 0x20))(lVar1);
  return iVar2 != 0;
}



// FUNCTION 144d7c870 FUN_144d7c870 body=85 status=ok
// SIG undefined FUN_144d7c870(void)

longlong FUN_144d7c870(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_1499d6890;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_1499d68b8;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x20,0x28);
  }
  return param_1 + -0x20;
}



// FUNCTION 144d7c8d0 FUN_144d7c8d0 body=167 status=ok
// SIG undefined FUN_144d7c8d0(void)

undefined8 * FUN_144d7c8d0(undefined8 *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &DAT_1499d6930;
    param_1[4] = &PTR__purecall_14ba6c6b0;
  }
  *param_1 = &PTR__purecall_1499d6840;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) =
       &PTR__purecall_1499d6868;
  *param_1 = &PTR__purecall_1499d6890;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_1499d68b8;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_1499d68e0;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_1499d6908;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  return param_1;
}



// FUNCTION 144d7c980 FUN_144d7c980 body=196 status=ok
// SIG undefined FUN_144d7c980(void)

ulonglong FUN_144d7c980(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong in_RAX;
  undefined8 uVar4;
  ulonglong local_res8;
  ulonglong *local_res10;
  
  local_res8 = local_res8 & 0xffffffff00000000;
  puVar1 = *(ulonglong **)(param_1 + -8);
  local_res10 = param_2;
  if ((*puVar1 < 0x30) || (puVar1[5] == 0)) {
    uVar2 = *param_2;
    if (uVar2 != 0) {
      in_RAX = (**(code **)(*(longlong *)
                             ((longlong)*(int *)(*(longlong *)(uVar2 + 8) + 4) + uVar2 + 8) + 8))();
    }
  }
  else {
    local_res8 = *param_2;
    if (local_res8 != 0) {
      if (local_res8 != 0) {
        (*(code *)**(undefined8 **)
                    (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      }
      uVar4 = FUN_144d7ce70(&local_res8);
      iVar3 = (*(code *)puVar1[5])(puVar1,uVar4);
      uVar2 = *param_2;
      if (uVar2 != 0) {
        (**(code **)(*(longlong *)(uVar2 + 8 + (longlong)*(int *)(*(longlong *)(uVar2 + 8) + 4)) + 8
                    ))();
      }
      return (ulonglong)(iVar3 != 0);
    }
    in_RAX = 0;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 144d7ca50 FUN_144d7ca50 body=233 status=ok
// SIG undefined FUN_144d7ca50(void)

ulonglong FUN_144d7ca50(longlong param_1,longlong param_2,ulonglong param_3,longlong *param_4)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  ulonglong in_RAX;
  undefined8 uVar5;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0x38) || (puVar1[6] == 0)) {
    lVar3 = *param_4;
    if (lVar3 != 0) {
      in_RAX = (**(code **)(*(longlong *)
                             ((longlong)*(int *)(*(longlong *)(lVar3 + 8) + 4) + lVar3 + 8) + 8))();
    }
  }
  else {
    in_RAX = *(ulonglong *)(param_2 + 8);
    if ((in_RAX == 0) || (*(longlong *)(in_RAX + 8) == 0)) {
      lVar3 = *param_4;
      if (lVar3 != 0) {
        in_RAX = (**(code **)(*(longlong *)
                               ((longlong)*(int *)(*(longlong *)(lVar3 + 8) + 4) + lVar3 + 8) + 8))
                           ();
      }
    }
    else {
      if (*param_4 != 0) {
        uVar5 = FUN_144d7d020(local_res8,param_4,param_3,param_4,0xfffffffffffffffe);
        uVar2 = *(undefined8 *)(param_2 + 8);
        uVar5 = FUN_144d7ce70(uVar5);
        iVar4 = (*(code *)puVar1[6])(puVar1,uVar2,param_3 & 0xff,uVar5);
        FUN_144d7d060(param_4);
        return (ulonglong)(iVar4 != 0);
      }
      in_RAX = FUN_144d7d060(param_4);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 144d7cb40 FUN_144d7cb40 body=267 status=ok
// SIG undefined FUN_144d7cb40(void)

ulonglong FUN_144d7cb40(longlong param_1,longlong param_2,longlong param_3,ulonglong *param_4)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong in_RAX;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong local_res8;
  undefined8 uVar7;
  
  uVar7 = 0xfffffffffffffffe;
  local_res8 = local_res8 & 0xffffffff00000000;
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0x40) || (puVar1[7] == 0)) {
    uVar3 = *param_4;
    if (uVar3 != 0) {
      in_RAX = (**(code **)(*(longlong *)
                             ((longlong)*(int *)(*(longlong *)(uVar3 + 8) + 4) + uVar3 + 8) + 8))();
    }
  }
  else {
    in_RAX = *(ulonglong *)(param_2 + 8);
    if ((in_RAX != 0) && (*(longlong *)(in_RAX + 8) != 0)) {
      lVar6 = param_3 + 8;
      if (param_3 == 0) {
        lVar6 = 0;
      }
      local_res8 = *param_4;
      if (local_res8 != 0) {
        (*(code *)**(undefined8 **)
                    (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      }
      uVar2 = *(undefined8 *)(param_2 + 8);
      uVar5 = FUN_144d7cf90(&local_res8);
      iVar4 = (*(code *)puVar1[7])(puVar1,uVar2,lVar6,uVar5,uVar7);
      uVar3 = *param_4;
      if (uVar3 != 0) {
        (**(code **)(*(longlong *)(uVar3 + 8 + (longlong)*(int *)(*(longlong *)(uVar3 + 8) + 4)) + 8
                    ))();
      }
      return (ulonglong)(iVar4 != 0);
    }
    uVar3 = *param_4;
    if (uVar3 != 0) {
      in_RAX = (**(code **)(*(longlong *)
                             ((longlong)*(int *)(*(longlong *)(uVar3 + 8) + 4) + uVar3 + 8) + 8))();
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 144d7cc50 FUN_144d7cc50 body=204 status=ok
// SIG undefined FUN_144d7cc50(void)

ulonglong FUN_144d7cc50(longlong param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong in_RAX;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong local_res8;
  undefined8 uVar8;
  
  uVar8 = 0xfffffffffffffffe;
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0x48) || (puVar1[8] == 0)) {
    lVar4 = *param_4;
    if (lVar4 != 0) {
      in_RAX = (**(code **)(*(longlong *)
                             ((longlong)*(int *)(*(longlong *)(lVar4 + 8) + 4) + lVar4 + 8) + 8))();
    }
    uVar7 = in_RAX & 0xffffffffffffff00;
  }
  else {
    local_res8 = *param_4;
    if (local_res8 != 0) {
      (*(code *)**(undefined8 **)
                  (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
    }
    uVar2 = *(undefined8 *)(param_3 + 8);
    uVar3 = *(undefined8 *)(param_2 + 8);
    uVar6 = FUN_144d7cf00(&local_res8);
    iVar5 = (*(code *)puVar1[8])(puVar1,uVar3,uVar2,uVar6,uVar8);
    lVar4 = *param_4;
    if (lVar4 != 0) {
      (**(code **)(*(longlong *)(lVar4 + 8 + (longlong)*(int *)(*(longlong *)(lVar4 + 8) + 4)) + 8))
                ();
    }
    uVar7 = (ulonglong)(iVar5 != 0);
  }
  return uVar7;
}



// FUNCTION 144d7cd20 FUN_144d7cd20 body=181 status=ok
// SIG undefined FUN_144d7cd20(void)

ulonglong FUN_144d7cd20(longlong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  int iVar3;
  ulonglong in_RAX;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong local_res8;
  longlong *local_res10;
  
  puVar1 = *(ulonglong **)(param_1 + -8);
  local_res10 = param_2;
  if ((*puVar1 < 0x50) || (puVar1[9] == 0)) {
    lVar2 = *param_2;
    if (lVar2 != 0) {
      in_RAX = (**(code **)(*(longlong *)
                             ((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))();
    }
    uVar5 = in_RAX & 0xffffffffffffff00;
  }
  else {
    local_res8 = *param_2;
    if (local_res8 != 0) {
      (*(code *)**(undefined8 **)
                  (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
    }
    uVar4 = FUN_144d73540(&local_res8);
    iVar3 = (*(code *)puVar1[9])(puVar1,uVar4);
    lVar2 = *param_2;
    if (lVar2 != 0) {
      (**(code **)(*(longlong *)(lVar2 + 8 + (longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4)) + 8))
                ();
    }
    uVar5 = (ulonglong)(iVar3 != 0);
  }
  return uVar5;
}



// FUNCTION 144d7cde0 FUN_144d7cde0 body=143 status=ok
// SIG undefined FUN_144d7cde0(void)

undefined8 * FUN_144d7cde0(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -4;
  *puVar1 = &PTR_FUN_1499d68e0;
  *(undefined ***)((longlong)*(int *)(param_1[-3] + 4) + -0x18 + (longlong)param_1) =
       &PTR_LAB_1499d6908;
  *(int *)((longlong)*(int *)(param_1[-3] + 4) + -0x1c + (longlong)param_1) =
       *(int *)(param_1[-3] + 4) + -0x18;
  *puVar1 = &PTR__purecall_1499d6890;
  *(undefined ***)((longlong)*(int *)(param_1[-3] + 4) + -0x18 + (longlong)param_1) =
       &PTR_LAB_1499d68b8;
  *(int *)((longlong)*(int *)(param_1[-3] + 4) + -0x1c + (longlong)param_1) =
       *(int *)(param_1[-3] + 4) + -0x18;
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(puVar1,0x28);
  }
  return puVar1;
}



// FUNCTION 144d7ce70 FUN_144d7ce70 body=135 status=ok
// SIG undefined FUN_144d7ce70(void)

undefined8 * FUN_144d7ce70(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*param_1 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar1 = FUN_14494321d(0x58);
    if (lVar1 == 0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2 = (undefined8 *)FUN_145179250(lVar1);
    }
    puVar2[2] = *param_1;
    (**(code **)*puVar2)(puVar2);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
    puVar2 = puVar2 + 4;
  }
  return puVar2;
}



// FUNCTION 144d7cf00 FUN_144d7cf00 body=135 status=ok
// SIG undefined FUN_144d7cf00(void)

undefined8 * FUN_144d7cf00(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*param_1 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar1 = FUN_14494321d(0x58);
    if (lVar1 == 0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2 = (undefined8 *)FUN_145179670(lVar1);
    }
    puVar2[2] = *param_1;
    (**(code **)*puVar2)(puVar2);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
    puVar2 = puVar2 + 4;
  }
  return puVar2;
}



// FUNCTION 144d7cf90 FUN_144d7cf90 body=135 status=ok
// SIG undefined FUN_144d7cf90(void)

undefined8 * FUN_144d7cf90(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*param_1 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar1 = FUN_14494321d(0x58);
    if (lVar1 == 0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2 = (undefined8 *)FUN_1451799a0(lVar1);
    }
    puVar2[2] = *param_1;
    (**(code **)*puVar2)(puVar2);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
    puVar2 = puVar2 + 4;
  }
  return puVar2;
}



// FUNCTION 144d7d020 FUN_144d7d020 body=49 status=ok
// SIG undefined FUN_144d7d020(void)

longlong * FUN_144d7d020(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 144d7d060 FUN_144d7d060 body=48 status=ok
// SIG undefined FUN_144d7d060(void)

void FUN_144d7d060(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 144d7d090 FUN_144d7d090 body=48 status=ok
// SIG undefined FUN_144d7d090(void)

void FUN_144d7d090(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 144d7d0c0 FUN_144d7d0c0 body=48 status=ok
// SIG undefined FUN_144d7d0c0(void)

void FUN_144d7d0c0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 144d7d140 FUN_144d7d140 body=36 status=ok
// SIG undefined FUN_144d7d140(void)

undefined8 * FUN_144d7d140(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined2 *)((longlong)param_1 + 0x32) = 0;
  return param_1;
}



// FUNCTION 144d7d170 FUN_144d7d170 body=16 status=ok
// SIG undefined FUN_144d7d170(void)

void FUN_144d7d170(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  return;
}



// FUNCTION 144d7d180 FUN_144d7d180 body=21 status=ok
// SIG undefined FUN_144d7d180(void)

void FUN_144d7d180(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined2 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined2 *)((longlong)param_1 + 0x32) = param_4;
  param_1[2] = 0;
  return;
}



// FUNCTION 144d7d1a0 FUN_144d7d1a0 body=187 status=ok
// SIG undefined FUN_144d7d1a0(void)

ulonglong FUN_144d7d1a0(longlong *param_1,char param_2,ulonglong *param_3)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  
  if (param_2 != '\0') {
    lVar3 = param_1[2];
    uVar2 = 0x202;
    if (*(ushort *)((longlong)param_1 + 0x32) < 0x202) {
      uVar2 = lVar3 + 8;
      if (param_1[1] < (longlong)uVar2) {
LAB_144d7d254:
        return uVar2 & 0xffffffffffffff00;
      }
      *param_3 = *(ulonglong *)(lVar3 + *param_1);
      param_1[2] = param_1[2] + 8;
    }
    else {
      if (param_1[1] < lVar3 + 1) goto LAB_144d7d254;
      bVar1 = *(byte *)(lVar3 + *param_1);
      uVar4 = (uint)bVar1;
      param_1[2] = lVar3 + 1;
      if ((char)bVar1 < '\0') {
        uVar2 = FUN_144d7d290(2,param_3);
        if ((char)uVar2 == '\0') goto LAB_144d7d254;
        *param_3 = (ulonglong)(uVar4 & 0x7f) | *param_3 << 7;
      }
      else {
        *param_3 = (ulonglong)bVar1;
      }
    }
  }
  lVar3 = (param_1[1] - param_1[2]) + *param_1 + param_1[2];
  *(undefined1 *)(param_1 + 6) = 1;
  param_1[4] = lVar3;
  param_1[5] = 0;
  param_1[3] = *param_1 + param_1[2];
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}



// FUNCTION 144d7d260 FUN_144d7d260 body=21 status=ok
// SIG undefined FUN_144d7d260(void)

void FUN_144d7d260(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(longlong *)(param_1 + 0x10) =
       *(longlong *)(param_1 + 0x10) + (*(longlong *)(param_1 + 0x28) + 7U >> 3);
  return;
}



// FUNCTION 144d7d280 FUN_144d7d280 body=3 status=ok
// SIG undefined FUN_144d7d280(void)

void FUN_144d7d280(void)

{
  return;
}



// FUNCTION 144d7d290 FUN_144d7d290 body=125 status=ok
// SIG undefined FUN_144d7d290(void)

ulonglong FUN_144d7d290(uint param_1,ulonglong *param_2,longlong *param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong in_RAX;
  
  if (param_1 < 0xb) {
    lVar1 = param_3[2] + 1;
    if (lVar1 <= param_3[1]) {
      lVar3 = *param_3;
      bVar2 = *(byte *)(param_3[2] + lVar3);
      param_3[2] = lVar1;
      if (-1 < (char)bVar2) {
        *param_2 = (ulonglong)bVar2;
        return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
      }
      in_RAX = FUN_144d7d290(param_1 + 1,param_2);
      if ((char)in_RAX != '\0') {
        uVar4 = *param_2;
        *param_2 = (ulonglong)(bVar2 & 0x7f) | uVar4 << 7;
        return CONCAT71((int7)((uVar4 << 7) >> 8),1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 144d7d320 FUN_144d7d320 body=96 status=ok
// SIG undefined FUN_144d7d320(void)

void FUN_144d7d320(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(ulonglong *)(param_1 + 0x20);
  if (0xf < uVar1) {
    lVar2 = *(longlong *)(param_1 + 8);
    uVar4 = uVar1 + 1;
    lVar3 = lVar2;
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(lVar2 + -8);
      uVar4 = uVar1 + 0x28;
      if (0x1f < (lVar2 - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar3,uVar4);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0xf;
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 144d7d390 FUN_144d7d390 body=574 status=ok
// SIG undefined FUN_144d7d390(void)

void FUN_144d7d390(int *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_d8 [32];
  int *local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  char *local_70;
  ulonglong auStack_68 [4];
  undefined4 local_48;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong uStack_28;
  undefined1 local_20 [7];
  byte local_19;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a8 = *param_2;
  uStack_a0 = param_2[1];
  local_98 = param_2[2];
  uStack_90 = param_2[3];
  local_88 = param_2[4];
  uStack_80 = param_2[5];
  local_78 = param_2[6];
  local_b8 = param_1;
  FUN_14517a230(&local_70,&local_a8,local_20);
  if ((int)local_70 == 0) {
    if (0xf < auStack_68[3]) {
      uVar4 = auStack_68[3] + 1;
      uVar5 = auStack_68[0];
      if (0xfff < uVar4) {
        uVar4 = auStack_68[3] + 0x28;
        uVar5 = *(ulonglong *)(auStack_68[0] - 8);
        if (0x1f < (auStack_68[0] - uVar5) - 8) goto LAB_144d7d487;
      }
      thunk_FUN_1400020a8(uVar5,uVar4);
    }
    if (local_19 < 2) {
      *param_1 = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[8] = 0xf;
      param_1[9] = 0;
      *(undefined1 *)(param_1 + 2) = 0;
      param_1[10] = (uint)local_19;
    }
    else {
      local_70 = (char *)0x0;
      auStack_68[0] = 0;
      pcVar2 = (char *)FUN_144b659f0(&local_70,0x20);
      auStack_68[1] = 0x1a;
      auStack_68[2] = 0x1f;
      builtin_strncpy(pcVar2,"Unsupported geometry type.",0x1b);
      local_48 = 0xffffffff;
      local_40 = (undefined8 *)0x0;
      uStack_38 = 0;
      local_70 = pcVar2;
      local_40 = (undefined8 *)FUN_144b659f0(&local_40,0x20);
      local_30 = 0x1a;
      uStack_28 = 0x1f;
      uVar1 = *(undefined8 *)(pcVar2 + 8);
      *local_40 = *(undefined8 *)pcVar2;
      local_40[1] = uVar1;
      local_40[2] = *(undefined8 *)(pcVar2 + 0x10);
      *(undefined2 *)(local_40 + 3) = *(undefined2 *)(pcVar2 + 0x18);
      *(char *)((longlong)local_40 + 0x1a) = pcVar2[0x1a];
      *param_1 = -1;
      FUN_144b65a50(param_1 + 2,&local_40);
      if (0xf < uStack_28) {
        uVar5 = uStack_28 + 1;
        puVar3 = local_40;
        if (0xfff < uVar5) {
          uVar5 = uStack_28 + 0x28;
          puVar3 = (undefined8 *)local_40[-1];
          if (0x1f < (ulonglong)((longlong)local_40 + (-8 - (longlong)puVar3))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        thunk_FUN_1400020a8(puVar3,uVar5);
      }
      thunk_FUN_1400020a8(pcVar2,0x20);
    }
  }
  else {
    *param_1 = (int)local_70;
    FUN_144b65a50(param_1 + 2,auStack_68);
    if (0xf < auStack_68[3]) {
      uVar4 = auStack_68[3] + 1;
      uVar5 = auStack_68[0];
      if (0xfff < uVar4) {
        uVar4 = auStack_68[3] + 0x28;
        uVar5 = *(ulonglong *)(auStack_68[0] - 8);
        if (0x1f < (auStack_68[0] - uVar5) - 8) {
LAB_144d7d487:
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1400020a8(uVar5,uVar4);
    }
    auStack_68[2] = 0;
    auStack_68[3] = 0xf;
    auStack_68[0] = auStack_68[0] & 0xffffffffffffff00;
  }
  FUN_144d7d280(&uStack_90);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_d8);
}



// FUNCTION 144d7d5f0 FUN_144d7d5f0 body=320 status=ok
// SIG undefined FUN_144d7d5f0(void)

void FUN_144d7d5f0(undefined8 param_1,int *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_98 [32];
  int *local_78;
  int local_60 [2];
  longlong local_58 [3];
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar1 = (undefined8 *)0x0;
  local_78 = param_2;
  local_78 = (int *)FUN_14494321d(0xd8);
  if (local_78 != (int *)0x0) {
    puVar1 = (undefined8 *)FUN_145179c60(local_78);
  }
  local_78 = (int *)puVar1;
  FUN_144d7d740(param_1,local_60,param_3,puVar1);
  if (local_60[0] == 0) {
    if (0xf < local_40) {
      uVar3 = local_40 + 1;
      lVar2 = local_58[0];
      if (0xfff < uVar3) {
        uVar3 = local_40 + 0x28;
        lVar2 = *(longlong *)(local_58[0] + -8);
        if (0x1f < (local_58[0] - lVar2) - 8U) goto LAB_144d7d6f7;
      }
      thunk_FUN_1400020a8(lVar2,uVar3);
    }
    *param_2 = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[8] = 0xf;
    param_2[9] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    *(undefined8 **)(param_2 + 10) = puVar1;
  }
  else {
    *param_2 = local_60[0];
    FUN_144b65a50(param_2 + 2,local_58);
    param_2[10] = 0;
    param_2[0xb] = 0;
    if (0xf < local_40) {
      uVar3 = local_40 + 1;
      lVar2 = local_58[0];
      if (0xfff < uVar3) {
        uVar3 = local_40 + 0x28;
        lVar2 = *(longlong *)(local_58[0] + -8);
        if (0x1f < (local_58[0] - lVar2) - 8U) {
LAB_144d7d6f7:
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1400020a8(lVar2,uVar3);
    }
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_98);
}



// FUNCTION 144d7d740 FUN_144d7d740 body=812 status=ok
// SIG undefined FUN_144d7d740(void)

void FUN_144d7d740(undefined8 param_1,int *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int *piVar2;
  char *pcVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  int *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 local_b0 [7];
  char local_a9;
  undefined1 local_a8;
  char *local_a0;
  ulonglong uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  int local_78 [2];
  undefined1 local_70 [32];
  int *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_e8 = *param_3;
  uStack_e0 = param_3[1];
  local_d8 = param_3[2];
  uStack_d0 = param_3[3];
  local_c8 = param_3[4];
  uStack_c0 = param_3[5];
  local_b8 = param_3[6];
  local_f0 = param_2;
  FUN_14517a230(&local_a0,&local_e8,local_b0);
  if ((int)local_a0 == 0) {
    if (0xf < uStack_80) {
      uVar6 = uStack_80 + 1;
      uVar5 = uStack_98;
      if (0xfff < uVar6) {
        uVar6 = uStack_80 + 0x28;
        uVar5 = *(ulonglong *)(uStack_98 - 8);
        if (0x1f < (uStack_98 - uVar5) - 8) goto LAB_144d7d848;
      }
      thunk_FUN_1400020a8(uVar5,uVar6);
    }
    if (local_a9 == '\x01') {
      FUN_144d7dba0(local_78,local_a8);
      piVar2 = local_50;
      if (local_78[0] == 0) {
        local_50 = (int *)0x0;
        local_f0 = piVar2;
        local_108 = param_4;
        FUN_14517bac0(piVar2,&local_a0,param_1,param_3);
        if ((int)local_a0 == 0) {
          if (0xf < uStack_80) {
            uVar6 = uStack_80 + 1;
            uVar5 = uStack_98;
            if (0xfff < uVar6) {
              uVar6 = uStack_80 + 0x28;
              uVar5 = *(ulonglong *)(uStack_98 - 8);
              if (0x1f < (uStack_98 - uVar5) - 8) goto LAB_144d7da13;
            }
            thunk_FUN_1400020a8(uVar5,uVar6);
          }
          *param_2 = 0;
          param_2[2] = 0;
          param_2[3] = 0;
          param_2[4] = 0;
          param_2[5] = 0;
          param_2[6] = 0;
          param_2[7] = 0;
          param_2[8] = 0xf;
          param_2[9] = 0;
          *(undefined1 *)(param_2 + 2) = 0;
        }
        else {
          *param_2 = (int)local_a0;
          FUN_144b65a50(param_2 + 2,&uStack_98);
          if (0xf < uStack_80) {
            uVar6 = uStack_80 + 1;
            uVar5 = uStack_98;
            if (0xfff < uVar6) {
              uVar6 = uStack_80 + 0x28;
              uVar5 = *(ulonglong *)(uStack_98 - 8);
              if (0x1f < (uStack_98 - uVar5) - 8) {
LAB_144d7da13:
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            thunk_FUN_1400020a8(uVar5,uVar6);
          }
          local_88 = 0;
          uStack_80 = 0xf;
          uStack_98 = uStack_98 & 0xffffffffffffff00;
        }
        if (piVar2 != (int *)0x0) {
          (*(code *)**(undefined8 **)piVar2)(piVar2,1);
        }
      }
      else {
        local_a0 = (char *)CONCAT44(local_a0._4_4_,local_78[0]);
        FUN_144b65a50(&uStack_98,local_70);
        *param_2 = (int)local_a0;
        *(ulonglong *)(param_2 + 2) = uStack_98;
        *(undefined8 *)(param_2 + 4) = local_90;
        param_2[6] = (int)local_88;
        param_2[7] = local_88._4_4_;
        param_2[8] = (int)uStack_80;
        param_2[9] = uStack_80._4_4_;
        if (local_50 != (int *)0x0) {
          (*(code *)**(undefined8 **)local_50)(local_50,1);
        }
      }
      FUN_144d7d320(local_78);
    }
    else {
      local_a0 = (char *)0x0;
      uStack_98 = 0;
      pcVar3 = (char *)FUN_144b659f0(&local_a0,0x20);
      local_90 = 0x14;
      local_88 = 0x1f;
      builtin_strncpy(pcVar3,"Input is not a mesh.",0x15);
      *param_2 = -1;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
      param_2[8] = 0xf;
      param_2[9] = 0;
      local_a0 = pcVar3;
      puVar4 = (undefined8 *)FUN_144b659f0(param_2 + 2,0x20);
      *(undefined8 **)(param_2 + 2) = puVar4;
      param_2[6] = 0x14;
      param_2[7] = 0;
      param_2[8] = 0x1f;
      param_2[9] = 0;
      uVar1 = *(undefined8 *)(pcVar3 + 8);
      *puVar4 = *(undefined8 *)pcVar3;
      puVar4[1] = uVar1;
      *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(pcVar3 + 0x10);
      *(char *)((longlong)puVar4 + 0x14) = pcVar3[0x14];
      thunk_FUN_1400020a8(pcVar3,0x20);
    }
  }
  else {
    *param_2 = (int)local_a0;
    FUN_144b65a50(param_2 + 2,&uStack_98);
    if (0xf < uStack_80) {
      uVar6 = uStack_80 + 1;
      uVar5 = uStack_98;
      if (0xfff < uVar6) {
        uVar6 = uStack_80 + 0x28;
        uVar5 = *(ulonglong *)(uStack_98 - 8);
        if (0x1f < (uStack_98 - uVar5) - 8) {
LAB_144d7d848:
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1400020a8(uVar5,uVar6);
    }
    local_88 = 0;
    uStack_80 = 0xf;
    uStack_98 = uStack_98 & 0xffffffffffffff00;
  }
  FUN_144d7d280(&uStack_d0);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_128);
}



// FUNCTION 144d7da80 FUN_144d7da80 body=236 status=ok
// SIG undefined FUN_144d7da80(void)

void FUN_144d7da80(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    uVar5 = *(longlong *)(param_1 + 0x38) - lVar1 & 0xfffffffffffffffc;
    lVar4 = lVar1;
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(lVar1 + -8);
      uVar5 = uVar5 + 0x27;
      if (0x1f < (lVar1 - lVar4) - 8U) goto LAB_144d7db66;
    }
    thunk_FUN_1400020a8(lVar4,uVar5);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  plVar6 = *(longlong **)(param_1 + 0x10);
  if (plVar6 != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_1 + 0x18);
    for (; plVar6 != plVar2; plVar6 = plVar6 + 1) {
      puVar3 = (undefined8 *)*plVar6;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    lVar1 = *(longlong *)(param_1 + 0x10);
    uVar5 = *(longlong *)(param_1 + 0x20) - lVar1 & 0xfffffffffffffff8;
    lVar4 = lVar1;
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(lVar1 + -8);
      uVar5 = uVar5 + 0x27;
      if (0x1f < (lVar1 - lVar4) - 8U) {
LAB_144d7db66:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar4,uVar5);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}



// FUNCTION 144d7db70 FUN_144d7db70 body=3 status=ok
// SIG undefined FUN_144d7db70(void)

undefined8 FUN_144d7db70(void)

{
  return 0;
}



// FUNCTION 144d7db80 FUN_144d7db80 body=3 status=ok
// SIG undefined FUN_144d7db80(void)

undefined1 FUN_144d7db80(void)

{
  return 1;
}



// FUNCTION 144d7db90 FUN_144d7db90 body=3 status=ok
// SIG undefined FUN_144d7db90(void)

undefined1 FUN_144d7db90(void)

{
  return 1;
}



// FUNCTION 144d7dba0 FUN_144d7dba0 body=433 status=ok
// SIG undefined FUN_144d7dba0(void)

void FUN_144d7dba0(undefined4 *param_1,char param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  undefined4 local_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong uStack_38;
  char *local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = 0;
  local_68 = param_1;
  if (param_2 == '\0') {
    local_68 = (undefined4 *)FUN_14494321d(0x60);
    if (local_68 != (undefined4 *)0x0) {
      uVar1 = FUN_14517c1f0(local_68);
    }
  }
  else {
    if (param_2 != '\x01') {
      local_30 = (char *)0x0;
      uStack_28 = 0;
      pcVar2 = (char *)FUN_144b659f0(&local_30,0x20);
      local_20 = 0x1c;
      local_18 = 0x1f;
      builtin_strncpy(pcVar2,"Unsupported encoding method.",0x1d);
      local_58 = 0xffffffff;
      local_50 = (undefined8 *)0x0;
      uStack_48 = 0;
      local_30 = pcVar2;
      local_50 = (undefined8 *)FUN_144b659f0(&local_50,0x20);
      local_40 = 0x1c;
      uStack_38 = 0x1f;
      uVar1 = *(undefined8 *)(pcVar2 + 8);
      *local_50 = *(undefined8 *)pcVar2;
      local_50[1] = uVar1;
      local_50[2] = *(undefined8 *)(pcVar2 + 0x10);
      *(undefined4 *)(local_50 + 3) = *(undefined4 *)(pcVar2 + 0x18);
      *(char *)((longlong)local_50 + 0x1c) = pcVar2[0x1c];
      *param_1 = 0xffffffff;
      FUN_144b65a50(param_1 + 2,&local_50);
      *(undefined8 *)(param_1 + 10) = 0;
      if (0xf < uStack_38) {
        uVar4 = uStack_38 + 1;
        puVar3 = local_50;
        if (0xfff < uVar4) {
          uVar4 = uStack_38 + 0x28;
          puVar3 = (undefined8 *)local_50[-1];
          if (0x1f < (ulonglong)((longlong)local_50 + (-8 - (longlong)puVar3))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        thunk_FUN_1400020a8(puVar3,uVar4);
      }
      thunk_FUN_1400020a8(pcVar2,0x20);
      goto LAB_144d7dd42;
    }
    local_68 = (undefined4 *)FUN_14494321d(0x68);
    if (local_68 != (undefined4 *)0x0) {
      uVar1 = FUN_14517bc80(local_68);
    }
  }
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0xf;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 10) = uVar1;
LAB_144d7dd42:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_88);
}



// FUNCTION 144d7dd90 FUN_144d7dd90 body=41 status=ok
// SIG undefined FUN_144d7dd90(void)

void FUN_144d7dd90(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_144d7d320(param_1);
  return;
}



// FUNCTION 144d7dde0 FUN_144d7dde0 body=172 status=ok
// SIG undefined FUN_144d7dde0(void)

void FUN_144d7dde0(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  void *_Dst;
  
  *(undefined1 *)(param_1 + 100) = 0;
  _Dst = *(void **)(param_1 + 0x50);
  lVar2 = *(longlong *)(param_1 + 0x48);
  uVar1 = (longlong)_Dst - lVar2 >> 2;
  if (param_2 < uVar1) {
    *(ulonglong *)(param_1 + 0x50) = lVar2 + param_2 * 4;
    return;
  }
  if (uVar1 < param_2) {
    if ((ulonglong)(*(longlong *)(param_1 + 0x58) - lVar2 >> 2) < param_2) {
      FUN_144d801a0((longlong *)(param_1 + 0x48),param_2,&DAT_1499d6bd4);
      return;
    }
    lVar2 = param_2 - uVar1;
    if (lVar2 != 0) {
      memset(_Dst,-1,lVar2 * 4);
      _Dst = (void *)((longlong)_Dst + lVar2 * 4);
    }
    *(void **)(param_1 + 0x50) = _Dst;
  }
  return;
}



// FUNCTION 144d7de90 deallocate body=66 status=ok
// SIG undefined deallocate(void)

/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl std::allocator<struct `void __cdecl
   phmap::container_internal::Deallocate<4,class std::allocator<unsigned long> >(class
   std::allocator<unsigned long> * __ptr64,void * __ptr64,unsigned
   __int64)'::`2'::M>::deallocate(struct `void __cdecl phmap::container_internal::Deallocate<4,class
   std::allocator<unsigned long> >(class std::allocator<unsigned long> * __ptr64,void *
   __ptr64,unsigned __int64)'::`2'::M * __ptr64 const,unsigned __int64) __ptr64
    public: void __cdecl std::allocator<struct `void __cdecl
   phmap::container_internal::Deallocate<4,class std::allocator<struct std::pair<unsigned long const
   ,unsigned long> > >(class std::allocator<struct std::pair<unsigned long const ,unsigned long> > *
   __ptr64,void * __ptr64,unsigned __int64)'::`2'::M>::deallocate(struct `void __cdecl
   phmap::container_internal::Deallocate<4,class std::allocator<struct std::pair<unsigned long const
   ,unsigned long> > >(class std::allocator<struct std::pair<unsigned long const ,unsigned long> > *
   __ptr64,void * __ptr64,unsigned __int64)'::`2'::M * __ptr64 const,unsigned __int64) __ptr64
    public: static void __cdecl phmap::allocator_traits<class std::allocator<struct `void __cdecl
   phmap::container_internal::Deallocate<4,class std::allocator<unsigned long> >(class
   std::allocator<unsigned long> * __ptr64,void * __ptr64,unsigned __int64)'::`2'::M>
   >::deallocate(class std::allocator<struct `void __cdecl
   phmap::container_internal::Deallocate<4,class std::allocator<unsigned long> >(class
   std::allocator<unsigned long> * __ptr64,void * __ptr64,unsigned __int64)'::`2'::M> &
   __ptr64,struct `void __cdecl phmap::container_internal::Deallocate<4,class
   std::allocator<unsigned long> >(class std::allocator<unsigned long> * __ptr64,void *
   __ptr64,unsigned __int64)'::`2'::M * __ptr64,unsigned __int64)
   
   Library: Visual Studio 2019 Release */

void deallocate(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * 4;
  lVar1 = param_2;
  if (0xfff < uVar2) {
    lVar1 = *(longlong *)(param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if (0x1f < (param_2 - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1400020a8(lVar1,uVar2);
  return;
}



// FUNCTION 144d7dee0 FUN_144d7dee0 body=16 status=ok
// SIG undefined FUN_144d7dee0(void)

void FUN_144d7dee0(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 144d7df00 FUN_144d7df00 body=290 status=ok
// SIG undefined FUN_144d7df00(void)

void FUN_144d7df00(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x68);
  if (lVar1 != 0) {
    lVar4 = *(longlong *)(lVar1 + 8);
    if (lVar4 != 0) {
      uVar5 = *(longlong *)(lVar1 + 0x18) - lVar4;
      lVar3 = lVar4;
      if (0xfff < uVar5) {
        lVar3 = *(longlong *)(lVar4 + -8);
        uVar5 = uVar5 + 0x27;
        if (0x1f < (lVar4 - lVar3) - 8U) goto LAB_144d7e01c;
      }
      thunk_FUN_1400020a8(lVar3,uVar5);
      *(undefined8 *)(lVar1 + 8) = 0;
      *(undefined8 *)(lVar1 + 0x10) = 0;
      *(undefined8 *)(lVar1 + 0x18) = 0;
    }
    thunk_FUN_1400020a8(lVar1,0x30);
  }
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    uVar5 = *(longlong *)(param_1 + 0x58) - lVar1 & 0xfffffffffffffffc;
    lVar4 = lVar1;
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(lVar1 + -8);
      uVar5 = uVar5 + 0x27;
      if (0x1f < (lVar1 - lVar4) - 8U) goto LAB_144d7e01c;
    }
    thunk_FUN_1400020a8(lVar4,uVar5);
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  plVar2 = *(longlong **)(param_1 + 0x40);
  if (plVar2 != (longlong *)0x0) {
    lVar1 = *plVar2;
    if (lVar1 != 0) {
      uVar5 = plVar2[2] - lVar1;
      lVar4 = lVar1;
      if (0xfff < uVar5) {
        lVar4 = *(longlong *)(lVar1 + -8);
        uVar5 = uVar5 + 0x27;
        if (0x1f < (lVar1 - lVar4) - 8U) {
LAB_144d7e01c:
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1400020a8(lVar4,uVar5);
      *plVar2 = 0;
      plVar2[1] = 0;
      plVar2[2] = 0;
    }
    thunk_FUN_1400020a8(plVar2,0x28);
  }
  return;
}



// FUNCTION 144d7e030 FUN_144d7e030 body=42 status=ok
// SIG undefined FUN_144d7e030(void)

void FUN_144d7e030(longlong *param_1)

{
  FUN_144d80090(param_1,param_1,*(undefined8 *)(*param_1 + 8));
  thunk_FUN_1400020a8(*param_1,0x58);
  return;
}



// FUNCTION 144d7e060 FUN_144d7e060 body=42 status=ok
// SIG undefined FUN_144d7e060(void)

void FUN_144d7e060(longlong *param_1)

{
  FUN_144d7ffa0(param_1,param_1,*(undefined8 *)(*param_1 + 8));
  thunk_FUN_1400020a8(*param_1,0x48);
  return;
}



// FUNCTION 144d7e090 FUN_144d7e090 body=244 status=ok
// SIG undefined FUN_144d7e090(void)

void FUN_144d7e090(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  
  plVar6 = (longlong *)*param_1;
  if (plVar6 != (longlong *)0x0) {
    plVar1 = (longlong *)param_1[1];
    for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
      plVar2 = (longlong *)*plVar6;
      if (plVar2 != (longlong *)0x0) {
        FUN_144d7ffa0(plVar2 + 2,plVar2 + 2,*(undefined8 *)(plVar2[2] + 8));
        thunk_FUN_1400020a8(plVar2[2],0x48);
        FUN_144d80090(plVar2,plVar2,*(undefined8 *)(*plVar2 + 8));
        thunk_FUN_1400020a8(*plVar2,0x58);
        thunk_FUN_1400020a8(plVar2,0x28);
      }
    }
    lVar3 = *param_1;
    uVar5 = param_1[2] - lVar3 & 0xfffffffffffffff8;
    lVar4 = lVar3;
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(lVar3 + -8);
      uVar5 = uVar5 + 0x27;
      if (0x1f < (lVar3 - lVar4) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar4,uVar5);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 144d7e190 FUN_144d7e190 body=101 status=ok
// SIG undefined FUN_144d7e190(void)

undefined8 * FUN_144d7e190(undefined8 *param_1)

{
  *param_1 = draco::PointCloud::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  _eh_vector_constructor_iterator_
            (param_1 + 5,0x18,5,(_func_void_void_ptr *)&LAB_144d7efd0,FUN_144b73500);
  *(undefined4 *)(param_1 + 0x14) = 0;
  return param_1;
}



// FUNCTION 144d7e200 FUN_144d7e200 body=57 status=ok
// SIG undefined FUN_144d7e200(void)

void FUN_144d7e200(longlong param_1)

{
  _eh_vector_destructor_iterator_((void *)(param_1 + 0x28),0x18,5,FUN_144b73500);
  FUN_144d7eef0(param_1 + 0x10);
  FUN_144d7ee20(param_1 + 8);
  return;
}



// FUNCTION 144d7e240 FUN_144d7e240 body=50 status=ok
// SIG undefined FUN_144d7e240(void)

undefined4 FUN_144d7e240(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (((param_2 != -1) && (param_2 < 5)) &&
     (puVar1 = *(undefined4 **)(param_1 + 0x28 + (longlong)param_2 * 0x18),
     0 < (int)(*(longlong *)(param_1 + 0x30 + (longlong)param_2 * 0x18) - (longlong)puVar1 >> 2))) {
    return *puVar1;
  }
  return 0xffffffff;
}



// FUNCTION 144d7e280 FUN_144d7e280 body=54 status=ok
// SIG undefined FUN_144d7e280(void)

undefined8 FUN_144d7e280(longlong param_1,int param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  uVar2 = 0;
  uVar3 = *(longlong *)(param_1 + 0x18) - lVar1 >> 3;
  if (uVar3 != 0) {
    do {
      if (*(int *)(*(longlong *)(lVar1 + uVar2 * 8) + 0x3c) == param_2) {
        if ((int)uVar2 == -1) {
          return 0;
        }
        return *(undefined8 *)(lVar1 + (longlong)(int)uVar2 * 8);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return 0;
}



// FUNCTION 144d7e2c0 FUN_144d7e2c0 body=116 status=ok
// SIG undefined FUN_144d7e2c0(void)

int FUN_144d7e2c0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_res8;
  longlong *local_res10;
  
  local_res8 = *param_2;
  *param_2 = 0;
  local_res10 = param_2;
  (**(code **)(*param_1 + 8))(param_1,param_1[3] - param_1[2] >> 3,&local_res8);
  lVar1 = param_1[3];
  lVar2 = param_1[2];
  lVar3 = *param_2;
  if (lVar3 != 0) {
    FUN_144d7df00(lVar3);
    thunk_FUN_1400020a8(lVar3,0x70);
  }
  return (int)(lVar1 - lVar2 >> 3) + -1;
}



// FUNCTION 144d7e340 FUN_144d7e340 body=377 status=ok
// SIG undefined FUN_144d7e340(void)

void FUN_144d7e340(longlong param_1,int param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 local_res8 [8];
  int local_res10 [2];
  longlong *local_res18;
  
  plVar7 = *(longlong **)(param_1 + 0x18);
  lVar4 = *(longlong *)(param_1 + 0x10);
  uVar8 = (longlong)plVar7 - lVar4 >> 3;
  local_res10[0] = param_2;
  local_res18 = param_3;
  if ((int)uVar8 <= param_2) {
    uVar5 = (ulonglong)(param_2 + 1);
    if (uVar5 < uVar8) {
      plVar1 = (longlong *)(lVar4 + uVar5 * 8);
      for (plVar6 = plVar1; plVar6 != plVar7; plVar6 = plVar6 + 1) {
        lVar4 = *plVar6;
        if (lVar4 != 0) {
          FUN_144d7df00(lVar4);
          thunk_FUN_1400020a8(lVar4,0x70);
        }
      }
      *(longlong **)(param_1 + 0x18) = plVar1;
    }
    else if (uVar8 < uVar5) {
      if ((ulonglong)(*(longlong *)(param_1 + 0x20) - lVar4 >> 3) < uVar5) {
        FUN_144d7fda0(param_1 + 0x10,uVar5,local_res8);
      }
      else {
        lVar4 = uVar5 - uVar8;
        if (lVar4 != 0) {
          memset(plVar7,0,lVar4 * 8);
          plVar7 = plVar7 + lVar4;
        }
        *(longlong **)(param_1 + 0x18) = plVar7;
      }
    }
  }
  if (*(int *)(*param_3 + 0x38) < 5) {
    lVar4 = (longlong)*(int *)(*param_3 + 0x38) * 0x18 + 0x28 + param_1;
    piVar2 = *(int **)(lVar4 + 8);
    if (piVar2 == *(int **)(lVar4 + 0x10)) {
      FUN_14694bab6(lVar4,piVar2,local_res10);
    }
    else {
      *piVar2 = param_2;
      *(longlong *)(lVar4 + 8) = *(longlong *)(lVar4 + 8) + 4;
    }
  }
  *(int *)(*param_3 + 0x3c) = param_2;
  plVar7 = (longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)param_2 * 8);
  if (plVar7 != param_3) {
    lVar4 = *param_3;
    *param_3 = 0;
    lVar3 = *plVar7;
    *plVar7 = lVar4;
    if (lVar3 != 0) {
      FUN_144d7df00(lVar3);
      thunk_FUN_1400020a8(lVar3,0x70);
    }
  }
  lVar4 = *param_3;
  if (lVar4 != 0) {
    FUN_144d7df00(lVar4);
    thunk_FUN_1400020a8(lVar4,0x70);
  }
  return;
}



// FUNCTION 144d7e4c0 FUN_144d7e4c0 body=928 status=ok
// SIG undefined FUN_144d7e4c0(void)

void FUN_144d7e4c0(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  void *_Dst;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  
  if (-1 < param_2) {
    uVar12 = (ulonglong)param_2;
    lVar6 = *(longlong *)(param_1 + 0x10);
    if (uVar12 < (ulonglong)(*(longlong *)(param_1 + 0x18) - lVar6 >> 3)) {
      lVar3 = *(longlong *)(lVar6 + uVar12 * 8);
      uVar8 = 0;
      plVar7 = (longlong *)(lVar6 + uVar12 * 8);
      iVar1 = *(int *)(lVar3 + 0x38);
      plVar11 = *(longlong **)(param_1 + 0x18);
      iVar2 = *(int *)(lVar3 + 0x3c);
      plVar4 = plVar7;
      while (plVar4 = plVar4 + 1, plVar4 != plVar11) {
        if (plVar7 != plVar4) {
          lVar6 = *plVar4;
          *plVar4 = 0;
          lVar3 = *plVar7;
          *plVar7 = lVar6;
          if (lVar3 != 0) {
            FUN_144d7df00(lVar3);
            thunk_FUN_1400020a8(lVar3,0x70);
          }
        }
        plVar7 = plVar7 + 1;
      }
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x18) + -8);
      if (lVar6 != 0) {
        FUN_144d7df00(lVar6);
        thunk_FUN_1400020a8(lVar6,0x70);
      }
      *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + -8;
      lVar6 = *(longlong *)(param_1 + 8);
      if ((lVar6 != 0) && (-1 < iVar2)) {
        plVar7 = *(longlong **)(lVar6 + 0x20);
        if (*(longlong **)(lVar6 + 0x20) != *(longlong **)(lVar6 + 0x28)) {
LAB_144d7e5c2:
          plVar11 = plVar7 + 1;
          if (*(int *)(*plVar7 + 0x20) != iVar2) goto code_r0x000144d7e5ce;
          plVar4 = *(longlong **)(lVar6 + 0x28);
          for (; plVar11 != plVar4; plVar11 = plVar11 + 1) {
            if (plVar7 != plVar11) {
              lVar3 = *plVar11;
              *plVar11 = 0;
              plVar5 = (longlong *)*plVar7;
              *plVar7 = lVar3;
              if (plVar5 != (longlong *)0x0) {
                FUN_144d7ffa0(plVar5 + 2,plVar5 + 2,*(undefined8 *)(plVar5[2] + 8));
                thunk_FUN_1400020a8(plVar5[2],0x48);
                FUN_144d80090(plVar5,plVar5,*(undefined8 *)(*plVar5 + 8));
                thunk_FUN_1400020a8(*plVar5,0x58);
                thunk_FUN_1400020a8(plVar5,0x28);
              }
            }
            plVar7 = plVar7 + 1;
          }
          FUN_144d7f730(lVar6 + 0x20,*(longlong *)(lVar6 + 0x28) + -8);
          *(longlong *)(lVar6 + 0x28) = *(longlong *)(lVar6 + 0x28) + -8;
        }
      }
LAB_144d7e687:
      if (iVar1 < 5) {
        lVar6 = (longlong)iVar1 + 2;
        plVar7 = (longlong *)(param_1 + lVar6 * 0x18);
        _Dst = (void *)FUN_144d8e120(*(undefined8 *)(param_1 + 0x28 + (longlong)iVar1 * 0x18),
                                     *(undefined8 *)(param_1 + lVar6 * 0x18),param_2);
        if (_Dst != (void *)*plVar7) {
          memmove(_Dst,(void *)((longlong)_Dst + 4),*plVar7 - ((longlong)_Dst + 4));
          *plVar7 = *plVar7 + -4;
        }
      }
      lVar6 = *(longlong *)(param_1 + 0x28);
      uVar12 = uVar8;
      uVar10 = uVar8;
      if (*(longlong *)(param_1 + 0x30) - lVar6 >> 2 != 0) {
        do {
          if (param_2 < *(int *)(uVar12 + lVar6)) {
            *(int *)(uVar12 + lVar6) = *(int *)(uVar12 + lVar6) + -1;
          }
          lVar6 = *(longlong *)(param_1 + 0x28);
          uVar9 = (int)uVar10 + 1;
          uVar12 = uVar12 + 4;
          uVar10 = (ulonglong)uVar9;
        } while ((ulonglong)(longlong)(int)uVar9 <
                 (ulonglong)(*(longlong *)(param_1 + 0x30) - lVar6 >> 2));
      }
      lVar6 = *(longlong *)(param_1 + 0x40);
      uVar12 = uVar8;
      uVar10 = uVar8;
      if (*(longlong *)(param_1 + 0x48) - lVar6 >> 2 != 0) {
        do {
          if (param_2 < *(int *)(uVar12 + lVar6)) {
            *(int *)(uVar12 + lVar6) = *(int *)(uVar12 + lVar6) + -1;
          }
          lVar6 = *(longlong *)(param_1 + 0x40);
          uVar9 = (int)uVar10 + 1;
          uVar12 = uVar12 + 4;
          uVar10 = (ulonglong)uVar9;
        } while ((ulonglong)(longlong)(int)uVar9 <
                 (ulonglong)(*(longlong *)(param_1 + 0x48) - lVar6 >> 2));
      }
      lVar6 = *(longlong *)(param_1 + 0x58);
      uVar12 = uVar8;
      uVar10 = uVar8;
      if (*(longlong *)(param_1 + 0x60) - lVar6 >> 2 != 0) {
        do {
          if (param_2 < *(int *)(uVar12 + lVar6)) {
            *(int *)(uVar12 + lVar6) = *(int *)(uVar12 + lVar6) + -1;
          }
          lVar6 = *(longlong *)(param_1 + 0x58);
          uVar9 = (int)uVar10 + 1;
          uVar12 = uVar12 + 4;
          uVar10 = (ulonglong)uVar9;
        } while ((ulonglong)(longlong)(int)uVar9 <
                 (ulonglong)(*(longlong *)(param_1 + 0x60) - lVar6 >> 2));
      }
      lVar6 = *(longlong *)(param_1 + 0x70);
      uVar12 = uVar8;
      uVar10 = uVar8;
      if (*(longlong *)(param_1 + 0x78) - lVar6 >> 2 != 0) {
        do {
          if (param_2 < *(int *)(uVar12 + lVar6)) {
            *(int *)(uVar12 + lVar6) = *(int *)(uVar12 + lVar6) + -1;
          }
          lVar6 = *(longlong *)(param_1 + 0x70);
          uVar9 = (int)uVar10 + 1;
          uVar12 = uVar12 + 4;
          uVar10 = (ulonglong)uVar9;
        } while ((ulonglong)(longlong)(int)uVar9 <
                 (ulonglong)(*(longlong *)(param_1 + 0x78) - lVar6 >> 2));
      }
      lVar6 = *(longlong *)(param_1 + 0x88);
      uVar12 = uVar8;
      if (*(longlong *)(param_1 + 0x90) - lVar6 >> 2 != 0) {
        do {
          if (param_2 < *(int *)(uVar12 + lVar6)) {
            *(int *)(uVar12 + lVar6) = *(int *)(uVar12 + lVar6) + -1;
          }
          lVar6 = *(longlong *)(param_1 + 0x88);
          uVar9 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar9;
          uVar12 = uVar12 + 4;
        } while ((ulonglong)(longlong)(int)uVar9 <
                 (ulonglong)(*(longlong *)(param_1 + 0x90) - lVar6 >> 2));
      }
    }
  }
  return;
code_r0x000144d7e5ce:
  plVar7 = plVar11;
  if (plVar11 == *(longlong **)(lVar6 + 0x28)) goto LAB_144d7e687;
  goto LAB_144d7e5c2;
}



// FUNCTION 144d7e860 FUN_144d7e860 body=127 status=ok
// SIG undefined FUN_144d7e860(void)

undefined8 FUN_144d7e860(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0xa0) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    iVar3 = 0;
    if (0 < (int)(*(longlong *)(param_1 + 0x18) - lVar2 >> 3)) {
      lVar4 = 0;
      do {
        iVar1 = FUN_14517d670(*(undefined8 *)(lVar4 + lVar2),*(undefined8 *)(lVar4 + lVar2));
        if (iVar1 == 0) {
          return 0;
        }
        lVar2 = *(longlong *)(param_1 + 0x10);
        iVar3 = iVar3 + 1;
        lVar4 = lVar4 + 8;
      } while (iVar3 < (int)(*(longlong *)(param_1 + 0x18) - lVar2 >> 3));
    }
  }
  return 1;
}



// FUNCTION 144d7e8e0 FUN_144d7e8e0 body=910 status=ok
// SIG undefined FUN_144d7e8e0(void)

void FUN_144d7e8e0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  void *pvVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  uint local_res8 [2];
  uint local_res10;
  uint local_res14;
  undefined8 local_c8;
  uint *puStack_c0;
  uint *local_b8;
  void *local_b0;
  void *pvStack_a8;
  void *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  ulonglong local_88;
  longlong local_80;
  ulonglong local_78;
  longlong local_70 [5];
  undefined1 local_48 [16];
  
  uVar13 = *(uint *)(param_1 + 0x14);
  local_c8._0_4_ = SUB84(param_1,0);
  local_c8._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
  local_98 = (undefined4)local_c8;
  uStack_94 = local_c8._4_4_;
  uStack_90 = (undefined4)local_c8;
  uStack_8c = local_c8._4_4_;
  local_b8 = (uint *)((ulonglong)local_b8 & 0xffffffff00000000);
  local_80 = 0;
  local_78 = 0;
  local_c8 = param_1;
  puStack_c0 = (uint *)param_1;
  local_88 = (ulonglong)local_b8;
  local_80 = FUN_14494321d(0x18);
  *(longlong *)local_80 = local_80;
  *(longlong *)(local_80 + 8) = local_80;
  local_70[0] = 0;
  local_70[1] = 0;
  local_70[2] = 0;
  local_70[3] = 7;
  local_70[4] = 8;
  local_88 = CONCAT44(local_88._4_4_,0x3f800000);
  FUN_144d7f330(local_70,0x10,local_80);
  fVar14 = ceilf((float)local_78 / (float)local_88);
  lVar5 = 0;
  if ((9.223372e+18 <= fVar14) && (fVar14 = fVar14 - 9.223372e+18, fVar14 < 9.223372e+18)) {
    lVar5 = -0x8000000000000000;
  }
  uVar9 = (longlong)fVar14 + lVar5;
  if ((ulonglong)((longlong)fVar14 + lVar5) < (ulonglong)uVar13) {
    uVar9 = (ulonglong)uVar13;
  }
  if ((ulonglong)local_70[4] < uVar9) {
    FUN_144d7f0e0(&local_98);
  }
  uVar13 = 0;
  uVar9 = (ulonglong)*(uint *)(param_1 + 0x14);
  local_b0 = (void *)0x0;
  pvStack_a8 = (void *)0x0;
  local_a0 = (void *)0x0;
  if (uVar9 != 0) {
    local_b0 = (void *)FUN_144d7f5e0(&local_b0);
    pvVar8 = (void *)((longlong)local_b0 + uVar9 * 4);
    local_a0 = pvVar8;
    memset(local_b0,0,uVar9 << 2);
    pvStack_a8 = pvVar8;
  }
  local_c8 = (longlong *)0x0;
  puStack_c0 = (uint *)0x0;
  local_b8 = (uint *)0x0;
  uVar9 = 0;
  local_res8[0] = 0;
  uVar4 = 0;
  uVar12 = 0;
  if ((int)param_1[0x14] != 0) {
    do {
      uVar6 = FUN_144d7f890(&local_98,local_res8);
      lVar5 = *(longlong *)(local_70[0] + 8 + (local_70[3] & uVar6) * 0x10);
      uVar4 = (uint)uVar9;
      if (lVar5 == local_80) {
        lVar5 = 0;
      }
      else {
        lVar3 = CONCAT44(uStack_8c,uStack_90);
        while( true ) {
          iVar11 = 0;
          lVar1 = *(longlong *)(lVar3 + 0x10);
          if ((int)(*(longlong *)(lVar3 + 0x18) - lVar1 >> 3) < 1) break;
          lVar10 = 0;
          while( true ) {
            lVar2 = *(longlong *)(lVar10 + lVar1);
            uVar13 = uVar4;
            uVar7 = *(uint *)(lVar5 + 0x10);
            if (*(char *)(lVar2 + 100) == '\0') {
              uVar13 = *(uint *)(*(longlong *)(lVar2 + 0x48) + uVar9 * 4);
              uVar7 = *(uint *)(*(longlong *)(lVar2 + 0x48) + (ulonglong)*(uint *)(lVar5 + 0x10) * 4
                               );
            }
            if (uVar13 != uVar7) break;
            iVar11 = iVar11 + 1;
            lVar10 = lVar10 + 8;
            if ((int)(*(longlong *)(lVar3 + 0x18) - lVar1 >> 3) <= iVar11) goto LAB_144d7eb0d;
          }
          if (lVar5 == *(longlong *)(local_70[0] + (local_70[3] & uVar6) * 0x10)) {
            lVar5 = 0;
            break;
          }
          lVar5 = *(longlong *)(lVar5 + 8);
        }
      }
LAB_144d7eb0d:
      if ((lVar5 == 0) || (lVar5 == local_80)) {
        local_res10 = uVar4;
        local_res14 = uVar12;
        FUN_144d7f9a0(&local_98,local_48,&local_res10);
        uVar13 = uVar12 + 1;
        *(uint *)((longlong)local_b0 + uVar9 * 4) = uVar12;
        if (puStack_c0 == local_b8) {
          FUN_144d7fc60(&local_c8,puStack_c0,local_res8);
        }
        else {
          *puStack_c0 = uVar4;
          puStack_c0 = puStack_c0 + 1;
        }
      }
      else {
        *(undefined4 *)((longlong)local_b0 + uVar9 * 4) = *(undefined4 *)(lVar5 + 0x14);
        uVar13 = uVar12;
      }
      local_res8[0] = uVar4 + 1;
      uVar9 = (ulonglong)local_res8[0];
      uVar4 = *(uint *)(param_1 + 0x14);
      uVar12 = uVar13;
    } while (local_res8[0] < uVar4);
  }
  if (uVar13 != uVar4) {
    (**(code **)(*param_1 + 0x28))(param_1,&local_b0,&local_c8);
    *(uint *)(param_1 + 0x14) = uVar13;
  }
  if (local_c8 != (longlong *)0x0) {
    uVar9 = ((longlong)local_b8 - (longlong)local_c8 >> 2) * 4;
    lVar5 = (longlong)local_c8;
    if (0xfff < uVar9) {
      uVar9 = uVar9 + 0x27;
      lVar5 = *(longlong *)((longlong)local_c8 + -8);
      if (0x1f < ((longlong)local_c8 - lVar5) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar5,uVar9);
    local_c8 = (longlong *)0x0;
    puStack_c0 = (uint *)0x0;
    local_b8 = (uint *)0x0;
  }
  if (local_b0 != (void *)0x0) {
    uVar9 = ((longlong)local_a0 - (longlong)local_b0 >> 2) * 4;
    pvVar8 = local_b0;
    if (0xfff < uVar9) {
      uVar9 = uVar9 + 0x27;
      pvVar8 = *(void **)((longlong)local_b0 + -8);
      if (0x1f < (ulonglong)((longlong)local_b0 + (-8 - (longlong)pvVar8))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(pvVar8,uVar9);
    local_b0 = (void *)0x0;
    pvStack_a8 = (void *)0x0;
    local_a0 = (void *)0x0;
  }
  FUN_144d7f4d0(&local_98);
  return;
}



// FUNCTION 144d7ec70 FUN_144d7ec70 body=420 status=ok
// SIG undefined FUN_144d7ec70(void)

void FUN_144d7ec70(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint *puVar6;
  longlong lVar7;
  void *_Dst;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  
  puVar3 = (uint *)param_3[1];
  uVar14 = 0;
  iVar12 = 0;
  uVar10 = uVar14;
  for (puVar6 = (uint *)*param_3; puVar6 != puVar3; puVar6 = puVar6 + 1) {
    uVar13 = *puVar6;
    lVar4 = (ulonglong)uVar13 * 4;
    uVar2 = *(uint *)(lVar4 + *param_2);
    if ((uint)uVar10 <= uVar2) {
      lVar7 = *(longlong *)(param_1 + 0x10);
      if (0 < (int)(*(longlong *)(param_1 + 0x18) - lVar7 >> 3)) {
        uVar10 = uVar14;
        uVar8 = uVar14;
        do {
          plVar1 = (longlong *)(*(longlong *)(uVar10 + lVar7) + 0x48);
          uVar9 = uVar13;
          if (*(char *)(*(longlong *)(uVar10 + lVar7) + 100) == '\0') {
            uVar9 = *(uint *)(lVar4 + *plVar1);
          }
          uVar11 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar11;
          uVar10 = uVar10 + 8;
          *(uint *)((ulonglong)uVar2 * 4 + *plVar1) = uVar9;
          lVar7 = *(longlong *)(param_1 + 0x10);
        } while ((int)uVar11 < (int)(*(longlong *)(param_1 + 0x18) - lVar7 >> 3));
      }
      uVar10 = (ulonglong)(uVar2 + 1);
    }
    iVar12 = (int)uVar10;
  }
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (0 < (int)(*(longlong *)(param_1 + 0x18) - lVar4 >> 3)) {
    uVar8 = (ulonglong)iVar12;
    uVar10 = uVar14;
    do {
      lVar4 = *(longlong *)(uVar10 + lVar4);
      *(undefined1 *)(lVar4 + 100) = 0;
      _Dst = *(void **)(lVar4 + 0x50);
      lVar7 = *(longlong *)(lVar4 + 0x48);
      uVar5 = (longlong)_Dst - lVar7 >> 2;
      if (uVar8 < uVar5) {
        *(ulonglong *)(lVar4 + 0x50) = lVar7 + uVar8 * 4;
      }
      else if (uVar5 < uVar8) {
        if ((ulonglong)(*(longlong *)(lVar4 + 0x58) - lVar7 >> 2) < uVar8) {
          FUN_144d801a0((longlong *)(lVar4 + 0x48),uVar8,&DAT_1499d6bd4);
        }
        else {
          lVar7 = uVar8 - uVar5;
          if (lVar7 != 0) {
            memset(_Dst,-1,lVar7 * 4);
            _Dst = (void *)((longlong)_Dst + lVar7 * 4);
          }
          *(void **)(lVar4 + 0x50) = _Dst;
        }
      }
      lVar4 = *(longlong *)(param_1 + 0x10);
      uVar13 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar13;
      uVar10 = uVar10 + 8;
    } while ((int)uVar13 < (int)(*(longlong *)(param_1 + 0x18) - lVar4 >> 3));
  }
  return;
}



// FUNCTION 144d7ee20 FUN_144d7ee20 body=118 status=ok
// SIG undefined FUN_144d7ee20(void)

void FUN_144d7ee20(longlong *param_1)

{
  param_1 = (longlong *)*param_1;
  if (param_1 != (longlong *)0x0) {
    FUN_144d7e090(param_1 + 4);
    FUN_144d7ffa0(param_1 + 2,param_1 + 2,*(undefined8 *)(param_1[2] + 8));
    thunk_FUN_1400020a8(param_1[2],0x48);
    FUN_144d80090(param_1,param_1,*(undefined8 *)(*param_1 + 8));
    thunk_FUN_1400020a8(*param_1,0x58);
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return;
}



// FUNCTION 144d7eea0 deallocate body=66 status=ok
// SIG undefined deallocate(void)

/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl std::_Parallelism_allocator<unsigned __int64>::deallocate(unsigned __int64
   * __ptr64 const,unsigned __int64) __ptr64
    public: void __cdecl std::allocator<struct CHN * __ptr64>::deallocate(struct CHN * __ptr64 *
   __ptr64 const,unsigned __int64) __ptr64
    public: void __cdecl std::allocator<struct `void __cdecl
   phmap::container_internal::Deallocate<8,class std::allocator<struct std::pair<unsigned long const
   ,struct TPI1::PRECEX * __ptr64> > >(class std::allocator<struct std::pair<unsigned long const
   ,struct TPI1::PRECEX * __ptr64> > * __ptr64,void * __ptr64,unsigned
   __int64)'::`2'::M>::deallocate(struct `void __cdecl phmap::container_internal::Deallocate<8,class
   std::allocator<struct std::pair<unsigned long const ,struct TPI1::PRECEX * __ptr64> > >(class
   std::allocator<struct std::pair<unsigned long const ,struct TPI1::PRECEX * __ptr64> > *
   __ptr64,void * __ptr64,unsigned __int64)'::`2'::M * __ptr64 const,unsigned __int64) __ptr64
    public: void __cdecl std::allocator<struct `void __cdecl
   phmap::container_internal::Deallocate<8,class std::allocator<struct std::pair<unsigned long const
   ,struct TYPTYPE * __ptr64> > >(class std::allocator<struct std::pair<unsigned long const ,struct
   TYPTYPE * __ptr64> > * __ptr64,void * __ptr64,unsigned __int64)'::`2'::M>::deallocate(struct
   `void __cdecl phmap::container_internal::Deallocate<8,class std::allocator<struct
   std::pair<unsigned long const ,struct TYPTYPE * __ptr64> > >(class std::allocator<struct
   std::pair<unsigned long const ,struct TYPTYPE * __ptr64> > * __ptr64,void * __ptr64,unsigned
   __int64)'::`2'::M * __ptr64 const,unsigned __int64) __ptr64
     16 names - too many to list
   
   Library: Visual Studio 2019 Release */

void deallocate(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * 8;
  lVar1 = param_2;
  if (0xfff < uVar2) {
    lVar1 = *(longlong *)(param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if (0x1f < (param_2 - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1400020a8(lVar1,uVar2);
  return;
}



// FUNCTION 144d7eef0 FUN_144d7eef0 body=178 status=ok
// SIG undefined FUN_144d7eef0(void)

void FUN_144d7eef0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)*param_1;
  if (plVar5 != (longlong *)0x0) {
    plVar1 = (longlong *)param_1[1];
    for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
      lVar2 = *plVar5;
      if (lVar2 != 0) {
        FUN_144d7df00(lVar2);
        thunk_FUN_1400020a8(lVar2,0x70);
      }
    }
    lVar2 = *param_1;
    uVar4 = param_1[2] - lVar2 & 0xfffffffffffffff8;
    lVar3 = lVar2;
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(lVar2 + -8);
      uVar4 = uVar4 + 0x27;
      if (0x1f < (lVar2 - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar3,uVar4);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 144d7efb0 FUN_144d7efb0 body=16 status=ok
// SIG undefined FUN_144d7efb0(void)

void FUN_144d7efb0(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 144d7eff0 FUN_144d7eff0 body=91 status=ok
// SIG undefined FUN_144d7eff0(void)

longlong FUN_144d7eff0(longlong param_1,uint param_2)

{
  _eh_vector_destructor_iterator_((void *)(param_1 + 0x28),0x18,5,FUN_144b73500);
  FUN_144d7eef0(param_1 + 0x10);
  FUN_144d7ee20(param_1 + 8);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 144d7f050 FUN_144d7f050 body=46 status=ok
// SIG undefined FUN_144d7f050(void)

void FUN_144d7f050(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_144d7df00(lVar1);
    thunk_FUN_1400020a8(lVar1,0x70);
    return;
  }
  return;
}



// FUNCTION 144d7f080 FUN_144d7f080 body=92 status=ok
// SIG undefined FUN_144d7f080(void)

void FUN_144d7f080(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    thunk_FUN_1400020a8(puVar1,0x18);
    puVar1 = puVar2;
  }
  thunk_FUN_1400020a8(*param_1,0x18);
  return;
}



// FUNCTION 144d7f0e0 FUN_144d7f0e0 body=586 status=ok
// SIG undefined FUN_144d7f0e0(void)

void FUN_144d7f0e0(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  int iVar16;
  
  for (lVar12 = 0x3f; 0xfffffffffffffffU >> lVar12 == 0; lVar12 = lVar12 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar12 & 0x3f)) < param_2) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("invalid hash bucket count");
  }
  plVar2 = *(longlong **)(param_1 + 0x18);
  uVar10 = param_2 - 1 | 1;
  lVar12 = 0x3f;
  if (uVar10 != 0) {
    for (; uVar10 >> lVar12 == 0; lVar12 = lVar12 + -1) {
    }
  }
  lVar12 = 1L << ((char)lVar12 + 1U & 0x3f);
  FUN_144d7f330(param_1 + 0x28,lVar12 * 2,plVar2);
  *(longlong *)(param_1 + 0x48) = lVar12;
  *(longlong *)(param_1 + 0x40) = lVar12 + -1;
  plVar8 = (longlong *)**(undefined8 **)(param_1 + 0x18);
joined_r0x000144d7f15f:
  do {
    if (plVar8 == plVar2) {
      return;
    }
    plVar3 = (longlong *)*plVar8;
    uVar10 = FUN_144d7f890(param_1,plVar8 + 2);
    puVar15 = (undefined8 *)
              (*(longlong *)(param_1 + 0x28) + (uVar10 & *(ulonglong *)(param_1 + 0x40)) * 0x10);
    if ((longlong *)*puVar15 == plVar2) {
      *puVar15 = plVar8;
    }
    else {
      iVar13 = 0;
      plVar4 = (longlong *)puVar15[1];
      uVar1 = *(uint *)(plVar8 + 2);
      plVar5 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x10);
      iVar16 = (int)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) - (longlong)plVar5 >> 3);
      if (0 < iVar16) {
        plVar14 = plVar5;
        do {
          uVar9 = uVar1;
          uVar11 = *(uint *)(plVar4 + 2);
          if (*(char *)(*plVar14 + 100) == '\0') {
            lVar12 = *(longlong *)(*plVar14 + 0x48);
            uVar9 = *(uint *)(lVar12 + (ulonglong)uVar1 * 4);
            uVar11 = *(uint *)(lVar12 + (ulonglong)*(uint *)(plVar4 + 2) * 4);
          }
          if (uVar9 != uVar11) goto joined_r0x000144d7f278;
          iVar13 = iVar13 + 1;
          plVar14 = plVar14 + 1;
        } while (iVar13 < iVar16);
      }
      plVar4 = (longlong *)*plVar4;
      if (plVar4 != plVar8) {
        plVar5 = (longlong *)plVar8[1];
        *plVar5 = (longlong)plVar3;
        puVar6 = (undefined8 *)plVar3[1];
        *puVar6 = plVar4;
        puVar7 = (undefined8 *)plVar4[1];
        *puVar7 = plVar8;
        plVar4[1] = (longlong)puVar6;
        plVar3[1] = (longlong)plVar5;
        plVar8[1] = (longlong)puVar7;
      }
    }
    puVar15[1] = plVar8;
    plVar8 = plVar3;
  } while( true );
joined_r0x000144d7f278:
  while ((longlong *)*puVar15 != plVar4) {
    plVar4 = (longlong *)plVar4[1];
    iVar13 = 0;
    plVar14 = plVar5;
    while( true ) {
      uVar9 = uVar1;
      uVar11 = *(uint *)(plVar4 + 2);
      if (*(char *)(*plVar14 + 100) == '\0') {
        lVar12 = *(longlong *)(*plVar14 + 0x48);
        uVar9 = *(uint *)(lVar12 + (ulonglong)uVar1 * 4);
        uVar11 = *(uint *)(lVar12 + (ulonglong)*(uint *)(plVar4 + 2) * 4);
      }
      if (uVar9 != uVar11) break;
      iVar13 = iVar13 + 1;
      plVar14 = plVar14 + 1;
      if (iVar16 <= iVar13) {
        lVar12 = *plVar4;
        plVar5 = (longlong *)plVar8[1];
        *plVar5 = (longlong)plVar3;
        plVar4 = (longlong *)plVar3[1];
        *plVar4 = lVar12;
        puVar15 = *(undefined8 **)(lVar12 + 8);
        *puVar15 = plVar8;
        *(longlong **)(lVar12 + 8) = plVar4;
        plVar3[1] = (longlong)plVar5;
        plVar8[1] = (longlong)puVar15;
        plVar8 = plVar3;
        goto joined_r0x000144d7f15f;
      }
    }
  }
  plVar5 = (longlong *)plVar8[1];
  *plVar5 = (longlong)plVar3;
  puVar6 = (undefined8 *)plVar3[1];
  *puVar6 = plVar4;
  puVar7 = (undefined8 *)plVar4[1];
  *puVar7 = plVar8;
  plVar4[1] = (longlong)puVar6;
  plVar3[1] = (longlong)plVar5;
  plVar8[1] = (longlong)puVar7;
  *puVar15 = plVar8;
  plVar8 = plVar3;
  goto joined_r0x000144d7f15f;
}



// FUNCTION 144d7f330 FUN_144d7f330 body=313 status=ok
// SIG undefined FUN_144d7f330(void)

void FUN_144d7f330(ulonglong *param_1,ulonglong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 local_res18;
  
  local_res18 = param_3;
  if (param_2 <= (ulonglong)((longlong)(param_1[1] - *param_1) >> 3)) {
    FUN_144d7f800(*param_1,param_1[1],&local_res18);
    return;
  }
  if (0x1fffffffffffffff < param_2) {
LAB_144d7f465:
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  uVar2 = param_2 * 8;
  if (uVar2 < 0x1000) {
    if (uVar2 == 0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      puVar6 = (undefined8 *)FUN_14494321d(uVar2);
    }
  }
  else {
    if (uVar2 + 0x27 <= uVar2) goto LAB_144d7f465;
    lVar3 = FUN_14494321d();
    if (lVar3 == 0) goto LAB_144d7f442;
    puVar6 = (undefined8 *)(lVar3 + 0x27U & 0xffffffffffffffe0);
    puVar6[-1] = lVar3;
  }
  uVar2 = *param_1;
  lVar3 = (longlong)(param_1[2] - uVar2) >> 3;
  if (lVar3 != 0) {
    uVar5 = lVar3 * 8;
    uVar4 = uVar2;
    if (0xfff < uVar5) {
      uVar4 = *(ulonglong *)(uVar2 - 8);
      uVar5 = uVar5 + 0x27;
      if (0x1f < (uVar2 - uVar4) - 8) {
LAB_144d7f442:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(uVar4,uVar5);
  }
  puVar1 = puVar6 + param_2;
  *param_1 = (ulonglong)puVar6;
  param_1[1] = (ulonglong)puVar1;
  param_1[2] = (ulonglong)puVar1;
  for (; puVar6 != puVar1; puVar6 = puVar6 + 1) {
    *puVar6 = param_3;
  }
  return;
}



// FUNCTION 144d7f470 FID_conflict:~vector<CHN*___ptr64,std::allocator<CHN*___ptr64>_> body=91 status=ok
// SIG undefined FID_conflict:~vector<CHN*___ptr64,std::allocator<CHN*___ptr64>_>(void)

/* Library Function - Multiple Matches With Different Base Names
    public: __cdecl std::priority_queue<unsigned __int64,class std::vector<unsigned __int64,struct
   std::_Parallelism_allocator<unsigned __int64> >,struct std::greater<void>
   >::~priority_queue<unsigned __int64,class std::vector<unsigned __int64,struct
   std::_Parallelism_allocator<unsigned __int64> >,struct std::greater<void> >(void) __ptr64
    public: __cdecl std::vector<struct CHN * __ptr64,class std::allocator<struct CHN * __ptr64>
   >::~vector<struct CHN * __ptr64,class std::allocator<struct CHN * __ptr64> >(void) __ptr64
    public: __cdecl std::vector<unsigned __int64,struct std::_Parallelism_allocator<unsigned
   __int64> >::~vector<unsigned __int64,struct std::_Parallelism_allocator<unsigned __int64> >(void)
   __ptr64
    public: __cdecl std::vector<unsigned __int64,class std::allocator<unsigned __int64>
   >::~vector<unsigned __int64,class std::allocator<unsigned __int64> >(void) __ptr64
     7 names - too many to list
   
   Library: Visual Studio 2019 Release */

void FID_conflict__vector<CHN*___ptr64,std::allocator<CHN*___ptr64>_>(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = param_1[2] - lVar1 & 0xfffffffffffffff8;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 144d7f4d0 FUN_144d7f4d0 body=163 status=ok
// SIG undefined FUN_144d7f4d0(void)

void FUN_144d7f4d0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    uVar5 = *(longlong *)(param_1 + 0x38) - lVar1 & 0xfffffffffffffff8;
    lVar4 = lVar1;
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(lVar1 + -8);
      uVar5 = uVar5 + 0x27;
      if (0x1f < (lVar1 - lVar4) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar4,uVar5);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  *(undefined8 *)puVar2[1] = 0;
  puVar2 = (undefined8 *)*puVar2;
  while (puVar2 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar2;
    thunk_FUN_1400020a8(puVar2,0x18);
    puVar2 = puVar3;
  }
  thunk_FUN_1400020a8(*(undefined8 *)(param_1 + 0x18),0x18);
  return;
}



// FUNCTION 144d7f590 deallocate body=66 status=ok
// SIG undefined deallocate(void)

/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl std::allocator<struct `void __cdecl
   phmap::container_internal::Deallocate<4,class std::allocator<unsigned long> >(class
   std::allocator<unsigned long> * __ptr64,void * __ptr64,unsigned
   __int64)'::`2'::M>::deallocate(struct `void __cdecl phmap::container_internal::Deallocate<4,class
   std::allocator<unsigned long> >(class std::allocator<unsigned long> * __ptr64,void *
   __ptr64,unsigned __int64)'::`2'::M * __ptr64 const,unsigned __int64) __ptr64
    public: void __cdecl std::allocator<struct `void __cdecl
   phmap::container_internal::Deallocate<4,class std::allocator<struct std::pair<unsigned long const
   ,unsigned long> > >(class std::allocator<struct std::pair<unsigned long const ,unsigned long> > *
   __ptr64,void * __ptr64,unsigned __int64)'::`2'::M>::deallocate(struct `void __cdecl
   phmap::container_internal::Deallocate<4,class std::allocator<struct std::pair<unsigned long const
   ,unsigned long> > >(class std::allocator<struct std::pair<unsigned long const ,unsigned long> > *
   __ptr64,void * __ptr64,unsigned __int64)'::`2'::M * __ptr64 const,unsigned __int64) __ptr64
    public: static void __cdecl phmap::allocator_traits<class std::allocator<struct `void __cdecl
   phmap::container_internal::Deallocate<4,class std::allocator<unsigned long> >(class
   std::allocator<unsigned long> * __ptr64,void * __ptr64,unsigned __int64)'::`2'::M>
   >::deallocate(class std::allocator<struct `void __cdecl
   phmap::container_internal::Deallocate<4,class std::allocator<unsigned long> >(class
   std::allocator<unsigned long> * __ptr64,void * __ptr64,unsigned __int64)'::`2'::M> &
   __ptr64,struct `void __cdecl phmap::container_internal::Deallocate<4,class
   std::allocator<unsigned long> >(class std::allocator<unsigned long> * __ptr64,void *
   __ptr64,unsigned __int64)'::`2'::M * __ptr64,unsigned __int64)
   
   Library: Visual Studio 2019 Release */

void deallocate(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * 4;
  lVar1 = param_2;
  if (0xfff < uVar2) {
    lVar1 = *(longlong *)(param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if (0x1f < (param_2 - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1400020a8(lVar1,uVar2);
  return;
}



// FUNCTION 144d7f5e0 FUN_144d7f5e0 body=110 status=ok
// SIG undefined FUN_144d7f5e0(void)

ulonglong FUN_144d7f5e0(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_2 < 0x4000000000000000) {
    param_2 = param_2 * 4;
    if (param_2 < 0x1000) {
      if (param_2 != 0) {
        uVar2 = FUN_14494321d();
        return uVar2;
      }
      return 0;
    }
    if (param_2 < param_2 + 0x27) {
      lVar1 = FUN_14494321d(param_2 + 0x27);
      if (lVar1 != 0) {
        uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar2 - 8) = lVar1;
        return uVar2;
      }
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_14694ac37();
}



// FUNCTION 144d7f650 FUN_144d7f650 body=91 status=ok
// SIG undefined FUN_144d7f650(void)

void FUN_144d7f650(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = param_1[2] - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 144d7f6b0 FUN_144d7f6b0 body=16 status=ok
// SIG undefined FUN_144d7f6b0(void)

void FUN_144d7f6b0(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 144d7f6d0 FUN_144d7f6d0 body=91 status=ok
// SIG undefined FUN_144d7f6d0(void)

void FUN_144d7f6d0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = param_1[2] - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 144d7f730 FUN_144d7f730 body=109 status=ok
// SIG undefined FUN_144d7f730(void)

void FUN_144d7f730(undefined8 param_1,longlong *param_2)

{
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    FUN_144d7ffa0(param_2 + 2,param_2 + 2,*(undefined8 *)(param_2[2] + 8));
    thunk_FUN_1400020a8(param_2[2],0x48);
    FUN_144d80090(param_2,param_2,*(undefined8 *)(*param_2 + 8));
    thunk_FUN_1400020a8(*param_2,0x58);
    thunk_FUN_1400020a8(param_2,0x28);
  }
  return;
}



// FUNCTION 144d7f7a0 FUN_144d7f7a0 body=86 status=ok
// SIG undefined FUN_144d7f7a0(void)

void FUN_144d7f7a0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      FUN_144d7df00(lVar1);
      thunk_FUN_1400020a8(lVar1,0x70);
    }
  }
  return;
}



// FUNCTION 144d7f800 FUN_144d7f800 body=132 status=ok
// SIG undefined FUN_144d7f800(void)

void FUN_144d7f800(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  
  uVar3 = (ulonglong)((longlong)param_2 + (7 - (longlong)param_1)) >> 3;
  if (param_2 < param_1) {
    uVar3 = 0;
  }
  if ((uVar3 != 0) && (1 < uVar3)) {
    uVar1 = *param_3;
    if ((param_3 < param_1) || (param_1 + (uVar3 - 1) < param_3)) {
      puVar4 = param_1;
      for (uVar2 = uVar3 & 0x1ffffffffffffffe; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
      }
      param_1 = param_1 + (uVar3 & 0xfffffffffffffffe);
    }
  }
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}



// FUNCTION 144d7f890 FUN_144d7f890 body=272 status=ok
// SIG undefined FUN_144d7f890(void)

uint FUN_144d7f890(longlong *param_1,uint *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  uint uVar3;
  uint local_res8;
  
  uVar3 = 0;
  local_res8 = 0;
  plVar2 = *(longlong **)(*param_1 + 0x10);
  uVar1 = *(longlong *)(*param_1 + 0x18) - (longlong)plVar2 >> 3;
  if (0 < (int)uVar1) {
    uVar1 = uVar1 & 0xffffffff;
    do {
      uVar3 = *param_2;
      if (*(char *)(*plVar2 + 100) == '\0') {
        uVar3 = *(uint *)(*(longlong *)(*plVar2 + 0x48) + (ulonglong)*param_2 * 4);
      }
      plVar2 = plVar2 + 1;
      uVar3 = ((((local_res8 & 0xff ^ 0x84222325) * 0x1b3 ^ local_res8 >> 8 & 0xff) * 0x1b3 ^
               local_res8 >> 0x10 & 0xff) * 0x1b3 ^ local_res8 >> 0x18) * 0x366 ^
              ((((uVar3 & 0xff ^ 0x84222325) * 0x1b3 ^ uVar3 >> 8 & 0xff) * 0x1b3 ^
               uVar3 >> 0x10 & 0xff) * 0x1b3 ^ uVar3 >> 0x18) * 0x6cc;
      uVar1 = uVar1 - 1;
      local_res8 = uVar3;
    } while (uVar1 != 0);
  }
  return uVar3;
}



// FUNCTION 144d7f9a0 FUN_144d7f9a0 body=698 status=ok
// SIG undefined FUN_144d7f9a0(void)

longlong * FUN_144d7f9a0(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  int iVar13;
  undefined8 *puVar14;
  int iVar15;
  float fVar16;
  undefined8 *local_58;
  longlong lStack_50;
  longlong *local_48;
  undefined8 *local_40;
  
  uVar4 = FUN_144d7f890(param_1,param_3);
  FUN_144d80330(param_1,&local_58,param_3,uVar4);
  if (lStack_50 != 0) {
    *param_2 = lStack_50;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (*(longlong *)(param_1 + 0x20) == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("unordered_map/set too long");
  }
  local_40 = (undefined8 *)0x0;
  local_48 = (longlong *)(param_1 + 0x18);
  puVar5 = (undefined8 *)FUN_14494321d(0x18);
  *(undefined4 *)(puVar5 + 2) = *param_3;
  *(undefined4 *)((longlong)puVar5 + 0x14) = param_3[1];
  fVar16 = (float)(*(longlong *)(param_1 + 0x20) + 1);
  uVar6 = *(ulonglong *)(param_1 + 0x48);
  if (*(float *)(param_1 + 0x10) < fVar16 / (float)uVar6) {
    local_40 = puVar5;
    fVar16 = ceilf(fVar16 / *(float *)(param_1 + 0x10));
    lVar8 = 0;
    if ((9.223372e+18 <= fVar16) && (fVar16 = fVar16 - 9.223372e+18, fVar16 < 9.223372e+18)) {
      lVar8 = -0x8000000000000000;
    }
    uVar9 = 8;
    if (8 < (ulonglong)((longlong)fVar16 + lVar8)) {
      uVar9 = (longlong)fVar16 + lVar8;
    }
    uVar11 = uVar6;
    if ((uVar6 < uVar9) && ((0x1ff < uVar6 || (uVar11 = uVar6 * 8, uVar6 * 8 < uVar9)))) {
      uVar11 = uVar9;
    }
    FUN_144d7f0e0(param_1,uVar11);
    uVar6 = *(ulonglong *)(param_1 + 0x40) & uVar4;
    puVar14 = *(undefined8 **)(*(longlong *)(param_1 + 0x28) + 8 + uVar6 * 0x10);
    local_58 = *(undefined8 **)(param_1 + 0x18);
    if (puVar14 != local_58) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x10);
      uVar3 = *(uint *)(puVar14 + 2);
      iVar13 = (int)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) - (longlong)plVar1 >> 3);
      if (iVar13 < 1) {
LAB_144d7fb92:
        local_58 = (undefined8 *)*puVar14;
      }
      else {
        while( true ) {
          iVar15 = 0;
          plVar12 = plVar1;
          while( true ) {
            uVar7 = uVar3;
            uVar10 = *(uint *)(puVar5 + 2);
            if (*(char *)(*plVar12 + 100) == '\0') {
              lVar8 = *(longlong *)(*plVar12 + 0x48);
              uVar7 = *(uint *)(lVar8 + (ulonglong)uVar3 * 4);
              uVar10 = *(uint *)(lVar8 + (ulonglong)*(uint *)(puVar5 + 2) * 4);
            }
            if (uVar10 != uVar7) break;
            iVar15 = iVar15 + 1;
            plVar12 = plVar12 + 1;
            if (iVar13 <= iVar15) goto LAB_144d7fb92;
          }
          local_58 = puVar14;
          if (puVar14 == *(undefined8 **)(*(longlong *)(param_1 + 0x28) + uVar6 * 0x10)) break;
          puVar14 = (undefined8 *)puVar14[1];
          uVar3 = *(uint *)(puVar14 + 2);
        }
      }
    }
  }
  puVar14 = (undefined8 *)local_58[1];
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 1;
  *puVar5 = local_58;
  puVar5[1] = puVar14;
  *puVar14 = puVar5;
  local_58[1] = puVar5;
  lVar8 = *(longlong *)(param_1 + 0x28);
  uVar4 = *(ulonglong *)(param_1 + 0x40) & uVar4;
  puVar2 = *(undefined8 **)(lVar8 + uVar4 * 0x10);
  if (puVar2 == *(undefined8 **)(param_1 + 0x18)) {
    *(undefined8 **)(lVar8 + uVar4 * 0x10) = puVar5;
  }
  else {
    if (puVar2 == local_58) {
      *(undefined8 **)(lVar8 + uVar4 * 0x10) = puVar5;
      goto LAB_144d7fc2b;
    }
    if (*(undefined8 **)(lVar8 + 8 + uVar4 * 0x10) != puVar14) goto LAB_144d7fc2b;
  }
  *(undefined8 **)(lVar8 + 8 + uVar4 * 0x10) = puVar5;
LAB_144d7fc2b:
  *param_2 = (longlong)puVar5;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



// FUNCTION 144d7fc60 FUN_144d7fc60 body=307 status=ok
// SIG undefined FUN_144d7fc60(void)

undefined4 * FUN_144d7fc60(longlong *param_1,void *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  undefined4 *_Dst;
  ulonglong uVar5;
  undefined4 *_Dst_00;
  ulonglong uVar6;
  size_t _Size;
  
  lVar3 = *param_1;
  lVar4 = param_1[1] - lVar3 >> 2;
  if (lVar4 == 0x3fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_144d7f6b0();
  }
  uVar1 = lVar4 + 1;
  uVar5 = param_1[2] - lVar3 >> 2;
  uVar6 = 0x3fffffffffffffff;
  if ((uVar5 <= 0x3fffffffffffffff - (uVar5 >> 1)) && (uVar6 = (uVar5 >> 1) + uVar5, uVar6 < uVar1))
  {
    uVar6 = uVar1;
  }
  _Dst = (undefined4 *)FUN_144d7f5e0(param_1,uVar6);
  puVar2 = _Dst + ((longlong)param_2 - lVar3 >> 2);
  *puVar2 = *param_3;
  _Src = (void *)*param_1;
  if (param_2 == (void *)param_1[1]) {
    _Size = param_1[1] - (longlong)_Src;
    _Dst_00 = _Dst;
    param_2 = _Src;
  }
  else {
    memmove(_Dst,_Src,(longlong)param_2 - (longlong)_Src);
    _Dst_00 = puVar2 + 1;
    _Size = param_1[1] - (longlong)param_2;
  }
  memmove(_Dst_00,param_2,_Size);
  lVar3 = *param_1;
  if (lVar3 != 0) {
    uVar5 = param_1[2] - lVar3 & 0xfffffffffffffffc;
    lVar4 = lVar3;
    if (0xfff < uVar5) {
      uVar5 = uVar5 + 0x27;
      lVar4 = *(longlong *)(lVar3 + -8);
      if (0x1f < (lVar3 - lVar4) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar4,uVar5);
  }
  *param_1 = (longlong)_Dst;
  param_1[1] = (longlong)(_Dst + uVar1);
  param_1[2] = (longlong)(_Dst + uVar6);
  return puVar2;
}



// FUNCTION 144d7fda0 FUN_144d7fda0 body=509 status=ok
// SIG undefined FUN_144d7fda0(void)

void FUN_144d7fda0(longlong *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  code *pcVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  
  if (0x1fffffffffffffff < param_2) {
    FUN_144d7efb0();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar12 = param_1[1] - *param_1 >> 3;
  uVar7 = param_1[2] - *param_1 >> 3;
  if ((0x1fffffffffffffff - (uVar7 >> 1) < uVar7) ||
     ((uVar7 = (uVar7 >> 1) + uVar7, uVar9 = param_2, param_2 <= uVar7 &&
      (uVar9 = uVar7, 0x1fffffffffffffff < uVar7)))) {
LAB_144d7ff93:
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  uVar7 = uVar9 * 8;
  if (uVar7 < 0x1000) {
    if (uVar7 == 0) {
      puVar11 = (undefined8 *)0x0;
    }
    else {
      puVar11 = (undefined8 *)FUN_14494321d(uVar7);
    }
  }
  else {
    if (uVar7 + 0x27 <= uVar7) goto LAB_144d7ff93;
    lVar6 = FUN_14494321d();
    if (lVar6 == 0) goto LAB_144d7ff8c;
    puVar11 = (undefined8 *)(lVar6 + 0x27U & 0xffffffffffffffe0);
    puVar11[-1] = lVar6;
  }
  lVar6 = param_2 - lVar12;
  if (lVar6 != 0) {
    memset(puVar11 + lVar12,0,lVar6 * 8);
  }
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = puVar11;
  for (puVar8 = (undefined8 *)*param_1; puVar8 != puVar2; puVar8 = puVar8 + 1) {
    uVar3 = *puVar8;
    *puVar8 = 0;
    *puVar1 = uVar3;
    puVar1 = puVar1 + 1;
  }
  plVar10 = (longlong *)*param_1;
  if (plVar10 != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[1];
    for (; plVar10 != plVar4; plVar10 = plVar10 + 1) {
      lVar12 = *plVar10;
      if (lVar12 != 0) {
        FUN_144d7df00(lVar12);
        thunk_FUN_1400020a8(lVar12,0x70);
      }
    }
    lVar12 = *param_1;
    uVar7 = param_1[2] - lVar12 & 0xfffffffffffffff8;
    lVar6 = lVar12;
    if (0xfff < uVar7) {
      uVar7 = uVar7 + 0x27;
      lVar6 = *(longlong *)(lVar12 + -8);
      if (0x1f < (lVar12 - lVar6) - 8U) {
LAB_144d7ff8c:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar6,uVar7);
  }
  *param_1 = (longlong)puVar11;
  param_1[1] = (longlong)(puVar11 + param_2);
  param_1[2] = (longlong)(puVar11 + uVar9);
  return;
}



// FUNCTION 144d7ffa0 FUN_144d7ffa0 body=232 status=ok
// SIG undefined FUN_144d7ffa0(void)

void FUN_144d7ffa0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  do {
    if (cVar1 != '\0') {
      return;
    }
    FUN_144d7ffa0(param_1,param_2,param_3[2]);
    plVar2 = (longlong *)*param_3;
    lVar3 = param_3[8];
    if (lVar3 != 0) {
      FUN_144d7e060(lVar3 + 0x10);
      FUN_144d7e030(lVar3);
      thunk_FUN_1400020a8(lVar3,0x20);
    }
    uVar4 = param_3[7];
    if (0xf < uVar4) {
      lVar3 = param_3[4];
      uVar6 = uVar4 + 1;
      lVar5 = lVar3;
      if (0xfff < uVar6) {
        lVar5 = *(longlong *)(lVar3 + -8);
        uVar6 = uVar4 + 0x28;
        if (0x1f < (lVar3 - lVar5) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1400020a8(lVar5,uVar6);
    }
    param_3[6] = 0;
    param_3[7] = 0xf;
    *(undefined1 *)(param_3 + 4) = 0;
    thunk_FUN_1400020a8(param_3,0x48);
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
    param_3 = plVar2;
  } while( true );
}



// FUNCTION 144d80090 FUN_144d80090 body=265 status=ok
// SIG undefined FUN_144d80090(void)

void FUN_144d80090(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  do {
    if (cVar1 != '\0') {
      return;
    }
    FUN_144d80090(param_1,param_2,param_3[2]);
    plVar2 = (longlong *)*param_3;
    lVar3 = param_3[8];
    if (lVar3 != 0) {
      uVar5 = param_3[10] - lVar3;
      lVar4 = lVar3;
      if (0xfff < uVar5) {
        lVar4 = *(longlong *)(lVar3 + -8);
        uVar5 = uVar5 + 0x27;
        if (0x1f < (lVar3 - lVar4) - 8U) goto LAB_144d80193;
      }
      thunk_FUN_1400020a8(lVar4,uVar5);
      param_3[8] = 0;
      param_3[9] = 0;
      param_3[10] = 0;
    }
    uVar5 = param_3[7];
    if (0xf < uVar5) {
      lVar3 = param_3[4];
      uVar6 = uVar5 + 1;
      lVar4 = lVar3;
      if (0xfff < uVar6) {
        lVar4 = *(longlong *)(lVar3 + -8);
        uVar6 = uVar5 + 0x28;
        if (0x1f < (lVar3 - lVar4) - 8U) {
LAB_144d80193:
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1400020a8(lVar4,uVar6);
    }
    param_3[6] = 0;
    param_3[7] = 0xf;
    *(undefined1 *)(param_3 + 4) = 0;
    thunk_FUN_1400020a8(param_3,0x58);
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
    param_3 = plVar2;
  } while( true );
}



// FUNCTION 144d801a0 FUN_144d801a0 body=383 status=ok
// SIG undefined FUN_144d801a0(void)

void FUN_144d801a0(longlong *param_1,ulonglong param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  void *_Dst;
  ulonglong uVar4;
  longlong lVar5;
  
  if (0x3fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_144d7dee0();
  }
  lVar5 = param_1[1] - *param_1 >> 2;
  uVar3 = param_1[2] - *param_1 >> 2;
  if ((0x3fffffffffffffff - (uVar3 >> 1) < uVar3) ||
     ((uVar3 = (uVar3 >> 1) + uVar3, uVar4 = param_2, param_2 <= uVar3 &&
      (uVar4 = uVar3, 0x3fffffffffffffff < uVar3)))) {
LAB_144d80316:
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  uVar4 = uVar4 * 4;
  if (uVar4 < 0x1000) {
    if (uVar4 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = (void *)FUN_14494321d(uVar4);
    }
  }
  else {
    if (uVar4 + 0x27 <= uVar4) goto LAB_144d80316;
    lVar2 = FUN_14494321d();
    if (lVar2 == 0) goto LAB_144d8030f;
    _Dst = (void *)(lVar2 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)_Dst - 8) = lVar2;
  }
  puVar1 = (undefined4 *)((longlong)_Dst + lVar5 * 4);
  for (lVar5 = param_2 - lVar5; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar1 = *param_3;
    puVar1 = puVar1 + 1;
  }
  memmove(_Dst,(void *)*param_1,param_1[1] - *param_1);
  lVar5 = *param_1;
  if (lVar5 != 0) {
    uVar3 = param_1[2] - lVar5 & 0xfffffffffffffffc;
    lVar2 = lVar5;
    if (0xfff < uVar3) {
      uVar3 = uVar3 + 0x27;
      lVar2 = *(longlong *)(lVar5 + -8);
      if (0x1f < (lVar5 - lVar2) - 8U) {
LAB_144d8030f:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
  }
  *param_1 = (longlong)_Dst;
  param_1[1] = (longlong)((longlong)_Dst + param_2 * 4);
  param_1[2] = (longlong)(uVar4 + (longlong)_Dst);
  return;
}



// FUNCTION 144d80330 FUN_144d80330 body=204 status=ok
// SIG undefined FUN_144d80330(void)

longlong * FUN_144d80330(longlong param_1,longlong *param_2,uint *param_3,ulonglong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  
  puVar8 = (undefined8 *)
           ((param_4 & *(ulonglong *)(param_1 + 0x40)) * 0x10 + *(longlong *)(param_1 + 0x28));
  plVar5 = (longlong *)puVar8[1];
  if (plVar5 == *(longlong **)(param_1 + 0x18)) {
    *param_2 = (longlong)*(longlong **)(param_1 + 0x18);
    param_2[1] = 0;
    return param_2;
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x10);
  iVar6 = (int)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) - (longlong)plVar1 >> 3);
  if (iVar6 < 1) {
LAB_144d803c2:
    *param_2 = *plVar5;
    param_2[1] = (longlong)plVar5;
  }
  else {
    while( true ) {
      iVar7 = 0;
      plVar9 = plVar1;
      while( true ) {
        uVar3 = *param_3;
        uVar4 = *(uint *)(plVar5 + 2);
        if (*(char *)(*plVar9 + 100) == '\0') {
          lVar2 = *(longlong *)(*plVar9 + 0x48);
          uVar3 = *(uint *)(lVar2 + (ulonglong)*param_3 * 4);
          uVar4 = *(uint *)(lVar2 + (ulonglong)*(uint *)(plVar5 + 2) * 4);
        }
        if (uVar3 != uVar4) break;
        iVar7 = iVar7 + 1;
        plVar9 = plVar9 + 1;
        if (iVar6 <= iVar7) goto LAB_144d803c2;
      }
      if (plVar5 == (longlong *)*puVar8) break;
      plVar5 = (longlong *)plVar5[1];
    }
    *param_2 = (longlong)plVar5;
    param_2[1] = 0;
  }
  return param_2;
}



// FUNCTION 144d80440 FUN_144d80440 body=17 status=ok
// SIG undefined FUN_144d80440(void)

longlong FUN_144d80440(byte param_1)

{
  return (1L << (param_1 & 0x3f)) * 8 + 0x20;
}



// FUNCTION 144d80460 FUN_144d80460 body=5 status=ok
// SIG undefined FUN_144d80460(void)

longlong FUN_144d80460(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 144d80480 FUN_144d80480 body=299 status=ok
// SIG undefined FUN_144d80480(void)

void FUN_144d80480(longlong *param_1,byte param_2,longlong param_3,int param_4)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  
  if (0x1000000 < param_4) {
    FUN_14518a000();
    if (PTR_FUN_14c730270 != (undefined *)0x0) {
      (*(code *)PTR_FUN_14c730270)
                (0,"v:\\devel\\projects\\oodle2\\network\\oodlestaticlzp.cpp",0x3e4,
                 "OODLE ERROR : window_size larger than OODLENETWORK1_MAX_DICTIONARY_SIZE ; clamping!\n"
                );
    }
    FUN_14518a020();
    param_4 = 0x1000000;
  }
  *param_1 = param_3;
  uVar6 = (1 << (param_2 & 0x1f)) - 1;
  *(uint *)(param_1 + 2) = uVar6;
  param_1[1] = param_4 + param_3;
  FUN_14518a1c0(param_1 + 3,(1L << (param_2 & 0x3f)) << 3);
  uVar3 = 4;
  if (4 < param_4 + -0x100) {
    puVar8 = (undefined1 *)(param_3 + 4);
    do {
      uVar4 = *(uint *)(puVar8 + -3);
      uVar1 = *puVar8;
      uVar7 = (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
      uVar4 = uVar7 * -0x61c8864f;
      uVar2 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8;
      uVar5 = (ulonglong)(uVar2 & uVar6);
      uVar4 = *(uint *)(param_1 + uVar5 + 3);
      if ((uVar4 & 0xffffff) == 0) {
LAB_144d8056a:
        *(uint *)(param_1 + uVar5 + 3) = (uVar4 ^ uVar3) & 0xffffff ^ uVar4;
        *(undefined1 *)((longlong)param_1 + uVar5 * 8 + 0x1b) = uVar1;
        *(uint *)((longlong)param_1 + uVar5 * 8 + 0x1c) = uVar7;
      }
      else {
        uVar5 = (ulonglong)(uVar2 + 1 & uVar6);
        uVar4 = *(uint *)(param_1 + uVar5 + 3);
        if ((uVar4 & 0xffffff) == 0) goto LAB_144d8056a;
      }
      uVar3 = uVar3 + 1;
      puVar8 = puVar8 + 1;
    } while ((int)uVar3 < param_4 + -0x100);
  }
  return;
}



// FUNCTION 144d805b0 FUN_144d805b0 body=6 status=ok
// SIG undefined FUN_144d805b0(void)

undefined8 FUN_144d805b0(void)

{
  return 0x2eb400;
}



// FUNCTION 144d805c0 thunk_FUN_144d813e0 body=5 status=ok
// SIG undefined thunk_FUN_144d813e0(void)

size_t thunk_FUN_144d813e0(longlong param_1,longlong *param_2,uint *param_3,size_t param_4,
                          undefined2 *param_5)

{
  ulonglong *puVar1;
  longlong lVar2;
  int iVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  size_t sVar9;
  char *pcVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  byte *pbVar15;
  ulonglong *puVar16;
  ulonglong *puVar17;
  uint uVar18;
  ulonglong *puVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  uint uVar23;
  uint *puVar24;
  bool bVar25;
  ulonglong uStack_80;
  uint uStack_58;
  uint uStack_54;
  uint *puStack_50;
  
  if (6 < (longlong)param_4) {
    if ((longlong)param_4 < 0x4001) {
      FUN_14518a030(&uStack_58,param_5);
      lVar7 = param_1 + 0x2c2000;
      uVar6 = *(uint *)(param_2 + 2);
      puVar1 = (ulonglong *)((longlong)param_3 + param_4);
      lVar8 = *param_2;
      lVar2 = param_2[1];
      uVar13 = (ulonglong)(byte)*param_3;
      uVar18 = (uint)*(ushort *)(lVar7 + uVar13 * 2);
      uVar20 = (uStack_54 >> 0xc) * (*(ushort *)(param_1 + 0x2c2002 + uVar13 * 2) - uVar18);
      uVar18 = (uStack_54 >> 0xc) * uVar18 + uStack_58;
      if (uVar18 < uStack_58) {
        pcVar10 = (char *)((longlong)puStack_50 + -1);
        cVar5 = *pcVar10;
        while (cVar5 == -1) {
          *pcVar10 = '\0';
          pcVar10 = pcVar10 + -1;
          cVar5 = *pcVar10;
        }
        *pcVar10 = cVar5 + '\x01';
      }
      for (; uVar20 < 0x1000000; uVar20 = uVar20 << 8) {
        *(char *)puStack_50 = (char)(uVar18 >> 0x18);
        puStack_50 = (uint *)((longlong)puStack_50 + 1);
        uVar18 = uVar18 << 8;
      }
      lVar11 = uVar13 * 0x250 + lVar7;
      uVar13 = (ulonglong)*(byte *)((longlong)param_3 + 1);
      uVar23 = (uint)*(ushort *)(lVar11 + uVar13 * 2);
      uVar21 = (uVar20 >> 0xc) * (*(ushort *)(lVar11 + 2 + uVar13 * 2) - uVar23);
      uVar20 = (uVar20 >> 0xc) * uVar23 + uVar18;
      if (uVar20 < uVar18) {
        pcVar10 = (char *)((longlong)puStack_50 + -1);
        cVar5 = *(char *)((longlong)puStack_50 + -1);
        while (cVar5 == -1) {
          *pcVar10 = '\0';
          pcVar10 = pcVar10 + -1;
          cVar5 = *pcVar10;
        }
        *pcVar10 = cVar5 + '\x01';
      }
      for (; uVar21 < 0x1000000; uVar21 = uVar21 << 8) {
        *(char *)puStack_50 = (char)(uVar20 >> 0x18);
        puStack_50 = (uint *)((longlong)puStack_50 + 1);
        uVar20 = uVar20 << 8;
      }
      uStack_80 = (ulonglong)*(byte *)((longlong)param_3 + 2);
      lVar11 = lVar7 + uVar13 * 0x250;
      uVar18 = (uint)*(ushort *)(lVar11 + uStack_80 * 2);
      uStack_54 = (uVar21 >> 0xc) * (*(ushort *)(lVar11 + 2 + uStack_80 * 2) - uVar18);
      uStack_58 = (uVar21 >> 0xc) * uVar18 + uVar20;
      puVar22 = puStack_50;
      if (uStack_58 < uVar20) {
        pcVar10 = (char *)((longlong)puStack_50 + -1);
        cVar5 = *(char *)((longlong)puStack_50 + -1);
        while (cVar5 == -1) {
          *pcVar10 = '\0';
          pcVar10 = pcVar10 + -1;
          cVar5 = *pcVar10;
        }
        *pcVar10 = cVar5 + '\x01';
      }
      for (; uStack_54 < 0x1000000; uStack_54 = uStack_54 << 8) {
        *(char *)puVar22 = (char)(uStack_58 >> 0x18);
        uStack_58 = uStack_58 << 8;
        puVar22 = (uint *)((longlong)puVar22 + 1);
      }
      uVar20 = *param_3;
      puVar17 = (ulonglong *)((longlong)param_3 + 3);
      uVar18 = (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 | uVar20 << 0x18;
      uVar20 = uVar18 * -0x61c8864f;
      uVar20 = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8;
      uVar13 = (ulonglong)(uVar20 & uVar6);
      puVar24 = (uint *)(param_2 + uVar13 + 3);
      if (*(uint *)((longlong)param_2 + uVar13 * 8 + 0x1c) != uVar18) {
        uVar13 = (ulonglong)(uVar20 + 1 & uVar6);
        puVar24 = (uint *)0x0;
        if (*(uint *)((longlong)param_2 + uVar13 * 8 + 0x1c) == uVar18) {
          puVar24 = (uint *)(param_2 + uVar13 + 3);
        }
      }
      puStack_50 = puVar22;
      if (puVar17 < (ulonglong *)((longlong)puVar1 - 1U)) {
        do {
          if ((uint *)((longlong)param_5 + (param_4 - 2)) <= puVar22) goto LAB_144d81e7f;
          uVar13 = (ulonglong)(byte)*puVar17;
          uVar20 = (uint)(byte)*puVar17;
          uVar4 = (undefined1)(uStack_58 >> 0x18);
          if (puVar24 == (uint *)0x0) {
            uVar21 = uVar18 | uVar20;
            puVar17 = (ulonglong *)((longlong)puVar17 + 1);
            uVar18 = uVar21 * 0x100;
            if (uStack_54 < 0x1000000) {
              if (uStack_54 < 0x10000) {
                *puVar22 = uStack_58 >> 0x18 | (uStack_58 & 0xff0000) >> 8 |
                           (uStack_58 & 0xff00) << 8 | uStack_58 << 0x18;
                puVar22 = (uint *)((longlong)puStack_50 + 2);
                uStack_58 = uStack_58 << 0x10;
                uStack_54 = uStack_54 << 0x10;
                puStack_50 = puVar22;
              }
              else {
                *(undefined1 *)puVar22 = uVar4;
                puVar22 = (uint *)((longlong)puStack_50 + 1);
                uStack_58 = uStack_58 << 8;
                uStack_54 = uStack_54 << 8;
                puStack_50 = puVar22;
              }
            }
            uVar21 = uVar21 * 0x3779b100;
            uVar21 = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8;
            uVar14 = (ulonglong)(uVar21 & uVar6);
            puVar24 = (uint *)(param_2 + uVar14 + 3);
            if (*(uint *)((longlong)param_2 + uVar14 * 8 + 0x1c) != uVar18) {
              uVar14 = (ulonglong)(uVar21 + 1 & uVar6);
              puVar24 = (uint *)0x0;
              if (*(uint *)((longlong)param_2 + uVar14 * 8 + 0x1c) == uVar18) {
                puVar24 = (uint *)(param_2 + uVar14 + 3);
              }
            }
            uVar21 = uStack_54 >> 0xc;
            lVar11 = (longlong)(int)uStack_80 * 0x128 + (longlong)(int)uVar20;
            uVar20 = (uint)*(ushort *)(lVar7 + lVar11 * 2);
            uStack_54 = uVar21 * (*(ushort *)(param_1 + 0x2c2002 + lVar11 * 2) - uVar20);
            uVar20 = uVar21 * uVar20 + uStack_58;
            bVar25 = uVar20 < uStack_58;
            uStack_80 = uVar13;
            uStack_58 = uVar20;
            if (bVar25) {
              pcVar10 = (char *)((longlong)puVar22 + -1);
              cVar5 = *(char *)((longlong)puVar22 + -1);
              while (cVar5 == -1) {
                *pcVar10 = '\0';
                pcVar10 = pcVar10 + -1;
                cVar5 = *pcVar10;
              }
              *pcVar10 = cVar5 + '\x01';
              puVar22 = puStack_50;
            }
          }
          else {
            puVar16 = (ulonglong *)(lVar8 + (ulonglong)(*puVar24 & 0xffffff));
            uVar21 = *puVar24 >> 0x18;
            uVar23 = ((int)uStack_80 << 8 | uVar21) * -0x61c8864f;
            uVar23 = uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 & 0xfff;
            if (uStack_54 < 0x1000000) {
              if (uStack_54 < 0x10000) {
                *puVar22 = uStack_58 >> 0x18 | (uStack_58 & 0xff0000) >> 8 |
                           (uStack_58 & 0xff00) << 8 | uStack_58 << 0x18;
                puVar22 = (uint *)((longlong)puStack_50 + 2);
                uStack_58 = uStack_58 << 0x10;
                uStack_54 = uStack_54 << 0x10;
                puStack_50 = puVar22;
              }
              else {
                *(undefined1 *)puVar22 = uVar4;
                puVar22 = (uint *)((longlong)puStack_50 + 1);
                uStack_58 = uStack_58 << 8;
                uStack_54 = uStack_54 << 8;
                puStack_50 = puVar22;
              }
            }
            if ((uVar20 == uVar21) &&
               (pbVar15 = (byte *)((longlong)puVar17 + 1),
               *pbVar15 == *(byte *)((longlong)puVar16 + 1))) {
              puVar19 = puVar17 + 2;
              if (puVar19 < puVar1) {
                if (*puVar17 == *puVar16) {
                  if (puVar17[1] == puVar16[1]) {
                    uVar13 = 0x10;
                    lVar12 = lVar2 - (longlong)puVar16;
                    lVar11 = (longlong)puVar1 - (longlong)puVar17;
                    if (lVar12 <= (longlong)puVar1 - (longlong)puVar17) {
                      lVar11 = lVar12;
                    }
                    if (0x10 < lVar11) {
                      do {
                        if ((byte)*puVar19 !=
                            *(byte *)(((longlong)puVar16 - (longlong)puVar17) + (longlong)puVar19))
                        break;
                        uVar13 = uVar13 + 1;
                        puVar19 = (ulonglong *)((longlong)puVar19 + 1);
                      } while ((longlong)uVar13 < lVar11);
                    }
                  }
                  else {
                    uVar14 = puVar16[1] ^ puVar17[1];
                    uVar13 = 0;
                    if (uVar14 != 0) {
                      for (; (uVar14 >> uVar13 & 1) == 0; uVar13 = uVar13 + 1) {
                      }
                    }
                    uVar13 = (ulonglong)(((uint)(uVar13 >> 3) & 0x1fffffff) + 8);
                  }
                }
                else {
                  uVar14 = *puVar16 ^ *puVar17;
                  uVar13 = 0;
                  if (uVar14 != 0) {
                    for (; (uVar14 >> uVar13 & 1) == 0; uVar13 = uVar13 + 1) {
                    }
                  }
                  uVar13 = uVar13 >> 3;
                }
              }
              else {
                lVar12 = lVar2 - (longlong)puVar16;
                uVar13 = 1;
                lVar11 = (longlong)puVar1 - (longlong)puVar17;
                if (lVar12 <= (longlong)puVar1 - (longlong)puVar17) {
                  lVar11 = lVar12;
                }
                if (1 < lVar11) {
                  do {
                    if (*pbVar15 != pbVar15[(longlong)puVar16 - (longlong)puVar17]) break;
                    uVar13 = uVar13 + 1;
                    pbVar15 = pbVar15 + 1;
                  } while ((longlong)uVar13 < lVar11);
                }
              }
              puVar17 = (ulonglong *)((longlong)puVar17 + uVar13);
              if (puVar17 < puVar1) {
                uVar20 = *(uint *)((longlong)puVar17 + -3);
                uStack_80 = (ulonglong)*(byte *)((longlong)puVar17 + -1);
                uVar18 = (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 | uVar20 << 0x18;
                uVar20 = uVar18 * -0x61c8864f;
                uVar20 = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8;
                uVar14 = (ulonglong)(uVar20 & uVar6);
                puVar24 = (uint *)(param_2 + uVar14 + 3);
                if (*(uint *)((longlong)param_2 + uVar14 * 8 + 0x1c) != uVar18) {
                  uVar14 = (ulonglong)(uVar20 + 1 & uVar6);
                  puVar24 = (uint *)0x0;
                  if (*(uint *)((longlong)param_2 + uVar14 * 8 + 0x1c) == uVar18) {
                    puVar24 = (uint *)(param_2 + uVar14 + 3);
                  }
                }
              }
              lVar11 = (ulonglong)uVar23 * 0x161;
              uVar20 = uStack_54 >> 0xc;
              if ((longlong)uVar13 < 0xe) {
                lVar11 = (int)uVar13 + lVar11;
                uVar21 = (uint)*(ushort *)(param_1 + 0x1fc + lVar11 * 2);
                uStack_54 = uVar20 * (*(ushort *)(param_1 + 0x1fe + lVar11 * 2) - uVar21);
                uVar20 = uVar20 * uVar21 + uStack_58;
                bVar25 = uVar20 < uStack_58;
                uStack_58 = uVar20;
                if (bVar25) {
                  pcVar10 = (char *)((longlong)puVar22 + -1);
                  cVar5 = *(char *)((longlong)puVar22 + -1);
                  while (cVar5 == -1) {
                    *pcVar10 = '\0';
                    pcVar10 = pcVar10 + -1;
                    cVar5 = *pcVar10;
                  }
                  goto LAB_144d81adf;
                }
              }
              else {
                uVar21 = (int)uVar13 - 0xc;
                iVar3 = 0x1f;
                if (uVar21 != 0) {
                  for (; uVar21 >> iVar3 == 0; iVar3 = iVar3 + -1) {
                  }
                }
                lVar11 = (iVar3 + 0x10b) + lVar11;
                uVar23 = (uint)*(ushort *)(param_1 + lVar11 * 2);
                uStack_54 = uVar20 * (*(ushort *)(param_1 + 2 + lVar11 * 2) - uVar23);
                uVar20 = uVar20 * uVar23 + uStack_58;
                if (uVar20 < uStack_58) {
                  pcVar10 = (char *)((longlong)puVar22 + -1);
                  cVar5 = *(char *)((longlong)puVar22 + -1);
                  while (cVar5 == -1) {
                    *pcVar10 = '\0';
                    pcVar10 = pcVar10 + -1;
                    cVar5 = *pcVar10;
                  }
                  *pcVar10 = cVar5 + '\x01';
                  puVar22 = puStack_50;
                }
                if (uStack_54 < 0x1000000) {
                  if (uStack_54 < 0x10000) {
                    *puVar22 = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 |
                               uVar20 * 0x1000000;
                    puVar22 = (uint *)((longlong)puStack_50 + 2);
                    uVar20 = uVar20 * 0x10000;
                    uStack_54 = uStack_54 * 0x10000;
                    puStack_50 = puVar22;
                  }
                  else {
                    *(char *)puVar22 = (char)(uVar20 >> 0x18);
                    puVar22 = (uint *)((longlong)puStack_50 + 1);
                    uVar20 = uVar20 * 0x100;
                    uStack_54 = uStack_54 * 0x100;
                    puStack_50 = puVar22;
                  }
                }
                uStack_54 = uStack_54 >> ((byte)iVar3 & 0x1f);
                uStack_58 = uStack_54 * (uVar21 - (1 << ((byte)iVar3 & 0x1f))) + uVar20;
                if (uStack_58 < uVar20) {
                  pcVar10 = (char *)((longlong)puVar22 + -1);
                  cVar5 = *(char *)((longlong)puVar22 + -1);
                  while (cVar5 == -1) {
                    *pcVar10 = '\0';
                    pcVar10 = pcVar10 + -1;
                    cVar5 = *pcVar10;
                  }
                  *pcVar10 = cVar5 + '\x01';
                  puVar22 = puStack_50;
                }
                for (; uStack_54 < 0x1000000; uStack_54 = uStack_54 << 8) {
                  *(char *)puVar22 = (char)(uStack_58 >> 0x18);
                  puStack_50 = (uint *)((longlong)puStack_50 + 1);
                  uStack_58 = uStack_58 << 8;
                  puVar22 = puStack_50;
                }
              }
            }
            else {
              uVar20 = uVar18 | uVar20;
              puVar17 = (ulonglong *)((longlong)puVar17 + 1);
              uVar18 = uVar20 * 0x100;
              uVar20 = uVar20 * 0x3779b100;
              uVar20 = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8;
              uVar14 = (ulonglong)(uVar20 & uVar6);
              puVar24 = (uint *)(param_2 + uVar14 + 3);
              if (*(uint *)((longlong)param_2 + uVar14 * 8 + 0x1c) != uVar18) {
                uVar14 = (ulonglong)(uVar20 + 1 & uVar6);
                puVar24 = (uint *)0x0;
                if (*(uint *)((longlong)param_2 + uVar14 * 8 + 0x1c) == uVar18) {
                  puVar24 = (uint *)(param_2 + uVar14 + 3);
                }
              }
              uVar21 = uStack_54 >> 0xc;
              lVar11 = (ulonglong)uVar23 * 0x161 + uVar13;
              uVar20 = (uint)*(ushort *)(param_1 + lVar11 * 2);
              uStack_54 = uVar21 * (*(ushort *)(param_1 + 2 + lVar11 * 2) - uVar20);
              uVar20 = uVar21 * uVar20 + uStack_58;
              bVar25 = uVar20 < uStack_58;
              uStack_80 = uVar13;
              uStack_58 = uVar20;
              if (bVar25) {
                pcVar10 = (char *)((longlong)puVar22 + -1);
                cVar5 = *(char *)((longlong)puVar22 + -1);
                while (cVar5 == -1) {
                  *pcVar10 = '\0';
                  pcVar10 = pcVar10 + -1;
                  cVar5 = *pcVar10;
                }
LAB_144d81adf:
                *pcVar10 = cVar5 + '\x01';
                puVar22 = puStack_50;
              }
            }
          }
        } while (puVar17 < (ulonglong *)((longlong)puVar1 - 1U));
      }
      if (uStack_54 < 0x1000000) {
        if (uStack_54 < 0x10000) {
          *puVar22 = uStack_58 >> 0x18 | (uStack_58 & 0xff0000) >> 8 | (uStack_58 & 0xff00) << 8 |
                     uStack_58 << 0x18;
          puVar22 = (uint *)((longlong)puStack_50 + 2);
          uStack_58 = uStack_58 << 0x10;
          uStack_54 = uStack_54 << 0x10;
          puStack_50 = puVar22;
        }
        else {
          *(char *)puVar22 = (char)(uStack_58 >> 0x18);
          puVar22 = (uint *)((longlong)puStack_50 + 1);
          uStack_58 = uStack_58 << 8;
          uStack_54 = uStack_54 << 8;
          puStack_50 = puVar22;
        }
      }
      while (puVar17 < puVar1) {
        uVar13 = *puVar17;
        pbVar15 = (byte *)((longlong)puVar17 + -1);
        puVar17 = (ulonglong *)((longlong)puVar17 + 1);
        lVar8 = lVar7 + (ulonglong)*pbVar15 * 0x250;
        uVar20 = uStack_54 >> 0xc;
        uVar6 = (uint)*(ushort *)(lVar8 + (ulonglong)(byte)uVar13 * 2);
        uStack_54 = uVar20 * (*(ushort *)(lVar8 + 2 + (ulonglong)(byte)uVar13 * 2) - uVar6);
        uVar6 = uVar20 * uVar6 + uStack_58;
        bVar25 = uVar6 < uStack_58;
        uStack_58 = uVar6;
        if (bVar25) {
          pcVar10 = (char *)((longlong)puVar22 + -1);
          cVar5 = *(char *)((longlong)puVar22 + -1);
          while (cVar5 == -1) {
            *pcVar10 = '\0';
            pcVar10 = pcVar10 + -1;
            cVar5 = *pcVar10;
          }
          *pcVar10 = cVar5 + '\x01';
          puVar22 = puStack_50;
        }
        for (; uStack_54 < 0x1000000; uStack_54 = uStack_54 << 8) {
          *(char *)puVar22 = (char)(uStack_58 >> 0x18);
          puStack_50 = (uint *)((longlong)puStack_50 + 1);
          uStack_58 = uStack_58 << 8;
          puVar22 = puStack_50;
        }
      }
      sVar9 = FUN_14518a0c0(&uStack_58);
    }
    else {
      lVar7 = FUN_144d813e0(param_1,param_2,param_3,0x4000,param_5 + 1);
      *param_5 = (short)lVar7;
      lVar8 = FUN_144d813e0(param_1,param_2,param_3 + 0x1000,param_4 - 0x4000,
                            lVar7 + (longlong)(param_5 + 1));
      sVar9 = lVar8 + 2 + lVar7;
    }
    if ((longlong)sVar9 < (longlong)param_4) {
      return sVar9;
    }
  }
LAB_144d81e7f:
  memcpy(param_5,param_3,param_4);
  return param_4;
}



// FUNCTION 144d805e0 FUN_144d805e0 body=73 status=ok
// SIG undefined FUN_144d805e0(void)

bool FUN_144d805e0(void)

{
  longlong lVar1;
  longlong in_R9;
  longlong in_stack_00000030;
  
  if (((0 < in_stack_00000030) && (0 < in_R9)) && (in_R9 <= in_stack_00000030)) {
    lVar1 = FUN_144d81ec0();
    return lVar1 == in_R9;
  }
  return false;
}



// FUNCTION 144d80640 FUN_144d80640 body=1235 status=ok
// SIG undefined FUN_144d80640(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144d80640(longlong param_1,uint *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  int *piVar18;
  uint uVar19;
  uint *puVar20;
  ulonglong *puVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  undefined1 auStack_11d8 [32];
  uint local_11b8;
  longlong local_11a8;
  uint *local_11a0;
  ulonglong local_1198;
  longlong local_1190;
  int local_1188 [284];
  int local_d18 [284];
  int local_8a8 [284];
  undefined8 local_438 [128];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_11d8;
  puVar20 = param_2 + 1;
  local_11a0 = (uint *)((longlong)param_2 + (ulonglong)*param_2 + 4);
  if (local_11a0 == puVar20 || (longlong)local_11a0 - (longlong)puVar20 < 0) {
    uVar26 = 0;
  }
  else {
    uVar26 = (ulonglong)(byte)*puVar20;
  }
  puVar21 = (ulonglong *)((longlong)param_2 + 5);
  lVar25 = (longlong)local_11a0 - (longlong)puVar21;
  if (lVar25 < 8) {
    if (lVar25 < 1) {
      uVar17 = 0;
    }
    else {
      uVar17 = (ulonglong)*(byte *)puVar21;
    }
    if (lVar25 == 1 || lVar25 + -1 < 0) {
      uVar23 = 0;
    }
    else {
      uVar23 = (ulonglong)*(byte *)((longlong)param_2 + 6);
    }
    if (lVar25 == 2 || lVar25 + -2 < 0) {
      uVar27 = 0;
    }
    else {
      uVar27 = (ulonglong)*(byte *)((longlong)param_2 + 7);
    }
    if (lVar25 == 3 || lVar25 + -3 < 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = (ulonglong)(byte)param_2[2];
    }
    lVar25 = (longlong)local_11a0 - ((longlong)param_2 + 9);
    if (lVar25 < 1) {
      uVar24 = 0;
    }
    else {
      uVar24 = (ulonglong)*(byte *)((longlong)param_2 + 9);
    }
    if (lVar25 == 1 || lVar25 + -1 < 0) {
      uVar28 = 0;
    }
    else {
      uVar28 = (ulonglong)*(byte *)((longlong)param_2 + 10);
    }
    if (lVar25 == 2 || lVar25 + -2 < 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = (ulonglong)*(byte *)((longlong)param_2 + 0xb);
    }
    uVar17 = ((((((uVar17 << 8 | uVar23) << 8 | uVar27) << 8 | uVar14) << 8 | uVar24) << 8 | uVar28)
              << 8 | uVar15) << 8;
  }
  else {
    uVar17 = *puVar21;
    uVar17 = (uVar17 & 0xff000000000000) >> 0x28 | (uVar17 & 0xff0000000000) >> 0x18 |
             (uVar17 & 0xff00000000) >> 8 | (uVar17 & 0xff000000) << 8 | (uVar17 & 0xff0000) << 0x18
             | (uVar17 & 0xff00) << 0x28 | uVar17 << 0x38;
  }
  local_11a8 = (longlong)param_2 + 0xb;
  local_1198 = uVar26 << 0x38 | uVar17 >> 8;
  local_1190 = 7;
  local_11b8 = CONCAT31(local_11b8._1_3_,1);
  iVar11 = FUN_14518b520(&local_11a8,0xc,0x119,local_8a8);
  if (iVar11 != 0) {
    iVar11 = 0;
    do {
      local_1190 = local_1190 + 5;
      local_11b8 = local_11b8 & 0xffffff00;
      uVar22 = (uint)(local_1198 >> 0x3b) * 2 + 2;
      local_1198 = local_1198 << 5;
      iVar12 = FUN_14518b520(&local_11a8,0xc,0x119,local_d18);
      if (iVar12 == 0) goto LAB_144d80aec;
      lVar25 = 0;
      do {
        if (*(int *)((longlong)local_d18 + lVar25) == 0) {
          iVar12 = 0;
        }
        else {
          uVar19 = *(int *)((longlong)local_d18 + lVar25) + 1;
          iVar12 = (((int)uVar19 >> 1) + 1) * uVar22 - (uVar22 >> 1);
          if ((uVar19 & 1) != 0) {
            iVar12 = -iVar12;
          }
        }
        iVar12 = iVar12 + *(int *)((longlong)local_8a8 + lVar25);
        if (iVar12 < 1) {
          iVar12 = 1;
        }
        *(int *)((longlong)local_d18 + lVar25) = iVar12;
        lVar25 = lVar25 + 4;
      } while (lVar25 < 0x464);
      uVar13 = thunk_FUN_1454117a0(local_d18,0x119);
      local_11b8 = 0x119;
      if (param_3 < 6) {
        FUN_14518a1e0();
      }
      else {
        FUN_14518aa60(local_1188,0x1000,local_d18,uVar13);
      }
      FUN_144d80b40((longlong)iVar11 * 0x2c2 + param_1,local_1188);
      iVar11 = iVar11 + 1;
    } while (iVar11 < 0x1000);
    lVar25 = 8;
    puVar16 = local_438;
    piVar18 = local_8a8;
    do {
      uVar7 = *(undefined8 *)(piVar18 + 2);
      uVar8 = *(undefined8 *)(piVar18 + 4);
      uVar9 = *(undefined8 *)(piVar18 + 6);
      *puVar16 = *(undefined8 *)piVar18;
      puVar16[1] = uVar7;
      uVar7 = *(undefined8 *)(piVar18 + 8);
      uVar10 = *(undefined8 *)(piVar18 + 10);
      puVar16[2] = uVar8;
      puVar16[3] = uVar9;
      uVar8 = *(undefined8 *)(piVar18 + 0xc);
      uVar9 = *(undefined8 *)(piVar18 + 0xe);
      puVar16[4] = uVar7;
      puVar16[5] = uVar10;
      uVar7 = *(undefined8 *)(piVar18 + 0x10);
      uVar10 = *(undefined8 *)(piVar18 + 0x12);
      puVar16[6] = uVar8;
      puVar16[7] = uVar9;
      uVar8 = *(undefined8 *)(piVar18 + 0x14);
      uVar9 = *(undefined8 *)(piVar18 + 0x16);
      puVar16[8] = uVar7;
      puVar16[9] = uVar10;
      iVar11 = piVar18[0x18];
      iVar12 = piVar18[0x19];
      iVar1 = piVar18[0x1a];
      iVar2 = piVar18[0x1b];
      puVar16[10] = uVar8;
      puVar16[0xb] = uVar9;
      iVar3 = piVar18[0x1c];
      iVar4 = piVar18[0x1d];
      iVar5 = piVar18[0x1e];
      iVar6 = piVar18[0x1f];
      *(int *)(puVar16 + 0xc) = iVar11;
      *(int *)((longlong)puVar16 + 100) = iVar12;
      *(int *)(puVar16 + 0xd) = iVar1;
      *(int *)((longlong)puVar16 + 0x6c) = iVar2;
      *(int *)(puVar16 + 0xe) = iVar3;
      *(int *)((longlong)puVar16 + 0x74) = iVar4;
      *(int *)(puVar16 + 0xf) = iVar5;
      *(int *)((longlong)puVar16 + 0x7c) = iVar6;
      lVar25 = lVar25 + -1;
      puVar16 = puVar16 + 0x10;
      piVar18 = piVar18 + 0x20;
    } while (lVar25 != 0);
    uVar13 = thunk_FUN_1454117a0(local_438,0x100);
    local_11b8 = 0x100;
    if (param_3 < 6) {
      FUN_14518a1e0();
    }
    else {
      FUN_14518aa60(local_8a8,0x1000,local_438,uVar13);
    }
    iVar11 = 0;
    do {
      local_1190 = local_1190 + 5;
      local_11b8 = local_11b8 & 0xffffff00;
      uVar22 = (uint)(local_1198 >> 0x3b) * 2 + 2;
      local_1198 = local_1198 << 5;
      iVar12 = FUN_14518b520(&local_11a8,0xc,0x100,local_1188);
      if (iVar12 == 0) break;
      lVar25 = 0;
      do {
        if (*(int *)((longlong)local_1188 + lVar25) == 0) {
          iVar12 = 0;
        }
        else {
          uVar19 = *(int *)((longlong)local_1188 + lVar25) + 1;
          iVar12 = (((int)uVar19 >> 1) + 1) * uVar22 - (uVar22 >> 1);
          if ((uVar19 & 1) != 0) {
            iVar12 = -iVar12;
          }
        }
        iVar12 = *(int *)((longlong)local_8a8 + lVar25) + iVar12;
        if (iVar12 < 1) {
          iVar12 = 1;
        }
        *(int *)((longlong)local_1188 + lVar25) = iVar12;
        lVar25 = lVar25 + 4;
      } while (lVar25 < 0x400);
      uVar13 = thunk_FUN_1454117a0(local_1188,0x100);
      local_11b8 = 0x100;
      if (param_3 < 6) {
        FUN_14518a1e0();
      }
      else {
        FUN_14518aa60(local_d18,0x1000,local_1188,uVar13);
      }
      FUN_144d80f20(param_1 + 0x2c2000 + (longlong)iVar11 * 0x250,local_d18);
      iVar11 = iVar11 + 1;
    } while (iVar11 < 0x100);
  }
LAB_144d80aec:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_11d8);
}



// FUNCTION 144d80b30 FUN_144d80b30 body=3 status=ok
// SIG undefined FUN_144d80b30(void)

void FUN_144d80b30(void)

{
  return;
}



// FUNCTION 144d80b40 FUN_144d80b40 body=966 status=ok
// SIG undefined FUN_144d80b40(void)

void FUN_144d80b40(undefined2 *param_1,longlong param_2)

{
  ushort uVar1;
  code *pcVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  
  uVar6 = 0;
  *param_1 = 0;
  uVar4 = uVar6;
  do {
    param_1[uVar4 + 1] = *(short *)(param_2 + uVar4 * 4) + param_1[uVar4];
    uVar4 = uVar4 + 1;
  } while ((longlong)uVar4 < 0x119);
  if ((param_1[0x119] != 0x1000) &&
     (iVar3 = FUN_145189fe0("v:\\devel\\projects\\oodle2\\network\\arith_o0.inl",0x35e,
                            "oo2net::O0ArithCoderJump_Const<unsigned short,unsigned short,281,12>::set_from_histo_normalized"
                            ,"m_cumprobs[t_alphabet] == c_sum"), iVar3 != 0)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(undefined4 *)(param_1 + 0x11a) = 0x10011001;
  param_1[0x120] = 0x1001;
  puVar7 = param_1 + 0x122;
  *(undefined4 *)(param_1 + 0x11c) = 0x10011001;
  *(undefined4 *)(param_1 + 0x11e) = 0x10011001;
  iVar3 = 0x80;
  uVar4 = uVar6;
  do {
    uVar1 = param_1[(longlong)(int)uVar6 + 1];
    while (iVar5 = (int)uVar6, (int)(uint)uVar1 <= (int)uVar4 * 0x40) {
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar1 = param_1[(longlong)iVar5 + 2];
    }
    puVar7[-1] = (short)uVar6;
    uVar1 = param_1[(longlong)iVar5 + 1];
    while (iVar5 = (int)uVar6, (int)(uint)uVar1 <= iVar3 + -0x40) {
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar1 = param_1[(longlong)iVar5 + 2];
    }
    *puVar7 = (short)uVar6;
    uVar1 = param_1[(longlong)iVar5 + 1];
    while (iVar5 = (int)uVar6, (int)(uint)uVar1 <= iVar3) {
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar1 = param_1[(longlong)iVar5 + 2];
    }
    puVar7[1] = (short)uVar6;
    uVar1 = param_1[(longlong)iVar5 + 1];
    while (iVar5 = (int)uVar6, (int)(uint)uVar1 <= iVar3 + 0x40) {
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar1 = param_1[(longlong)iVar5 + 2];
    }
    puVar7[2] = (short)uVar6;
    uVar1 = param_1[(longlong)iVar5 + 1];
    while (iVar5 = (int)uVar6, (int)(uint)uVar1 <= iVar3 + 0x80) {
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar1 = param_1[(longlong)iVar5 + 2];
    }
    puVar7[3] = (short)uVar6;
    uVar1 = param_1[(longlong)iVar5 + 1];
    while (iVar5 = (int)uVar6, (int)(uint)uVar1 <= iVar3 + 0xc0) {
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar1 = param_1[(longlong)iVar5 + 2];
    }
    puVar7[4] = (short)uVar6;
    uVar1 = param_1[(longlong)iVar5 + 1];
    while (iVar5 = (int)uVar6, (int)(uint)uVar1 <= iVar3 + 0x100) {
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar1 = param_1[(longlong)iVar5 + 2];
    }
    puVar7[5] = (short)uVar6;
    uVar1 = param_1[(longlong)iVar5 + 1];
    while (iVar5 = (int)uVar6, (int)(uint)uVar1 <= iVar3 + 0x140) {
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar1 = param_1[(longlong)iVar5 + 2];
    }
    puVar7[6] = (short)uVar6;
    uVar1 = param_1[(longlong)iVar5 + 1];
    while (iVar5 = (int)uVar6, (int)(uint)uVar1 <= iVar3 + 0x180) {
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar1 = param_1[(longlong)iVar5 + 2];
    }
    puVar7[7] = (short)uVar6;
    uVar1 = param_1[(longlong)iVar5 + 1];
    while (iVar5 = (int)uVar6, (int)(uint)uVar1 <= iVar3 + 0x1c0) {
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar1 = param_1[(longlong)iVar5 + 2];
    }
    puVar7[8] = (short)uVar6;
    uVar1 = param_1[(longlong)iVar5 + 1];
    while (iVar5 = (int)uVar6, (int)(uint)uVar1 <= iVar3 + 0x200) {
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar1 = param_1[(longlong)iVar5 + 2];
    }
    puVar7[9] = (short)uVar6;
    uVar1 = param_1[(longlong)iVar5 + 1];
    while (iVar5 = (int)uVar6, (int)(uint)uVar1 <= iVar3 + 0x240) {
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar1 = param_1[(longlong)iVar5 + 2];
    }
    puVar7[10] = (short)uVar6;
    uVar1 = param_1[(longlong)iVar5 + 1];
    while (iVar5 = (int)uVar6, (int)(uint)uVar1 <= iVar3 + 0x280) {
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar1 = param_1[(longlong)iVar5 + 2];
    }
    puVar7[0xb] = (short)uVar6;
    uVar1 = param_1[(longlong)iVar5 + 1];
    while (iVar5 = (int)uVar6, (int)(uint)uVar1 <= iVar3 + 0x2c0) {
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar1 = param_1[(longlong)iVar5 + 2];
    }
    puVar7[0xc] = (short)uVar6;
    uVar1 = param_1[(longlong)iVar5 + 1];
    while (iVar5 = (int)uVar6, (int)(uint)uVar1 <= iVar3 + 0x300) {
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar1 = param_1[(longlong)iVar5 + 2];
    }
    puVar7[0xd] = (short)uVar6;
    uVar1 = param_1[(longlong)iVar5 + 1];
    while ((int)(uint)uVar1 <= iVar3 + 0x340) {
      iVar5 = (int)uVar6;
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar1 = param_1[(longlong)iVar5 + 2];
    }
    puVar7[0xe] = (short)uVar6;
    uVar4 = (ulonglong)((int)uVar4 + 0x10);
    puVar7 = puVar7 + 0x10;
    iVar3 = iVar3 + 0x400;
  } while (iVar3 < 0x1080);
  return;
}



// FUNCTION 144d80f20 FUN_144d80f20 body=997 status=ok
// SIG undefined FUN_144d80f20(void)

void FUN_144d80f20(undefined2 *param_1,longlong param_2)

{
  ushort uVar1;
  code *pcVar2;
  short sVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  int iVar7;
  longlong lVar8;
  undefined1 *puVar9;
  int iVar10;
  
  iVar7 = 0;
  *param_1 = 0;
  lVar8 = 0x40;
  psVar5 = param_1 + 2;
  psVar6 = (short *)(param_2 + 8);
  do {
    sVar3 = psVar6[-4];
    psVar5[-1] = psVar5[-2] + sVar3;
    sVar3 = psVar5[-2] + sVar3 + psVar6[-2];
    *psVar5 = sVar3;
    sVar3 = sVar3 + *psVar6;
    psVar5[1] = sVar3;
    psVar5[2] = sVar3 + psVar6[2];
    lVar8 = lVar8 + -1;
    psVar5 = psVar5 + 4;
    psVar6 = psVar6 + 8;
  } while (lVar8 != 0);
  if ((param_1[0x100] != 0x1000) &&
     (iVar4 = FUN_145189fe0("v:\\devel\\projects\\oodle2\\network\\arith_o0.inl",0x35e,
                            "oo2net::O0ArithCoderJump_Const<unsigned short,unsigned char,256,12>::set_from_histo_normalized"
                            ,"m_cumprobs[t_alphabet] == c_sum"), iVar4 != 0)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(undefined4 *)(param_1 + 0x101) = 0x10011001;
  param_1[0x107] = 0x1001;
  puVar9 = (undefined1 *)((longlong)param_1 + 0x211);
  *(undefined4 *)(param_1 + 0x103) = 0x10011001;
  iVar10 = 0;
  *(undefined4 *)(param_1 + 0x105) = 0x10011001;
  iVar4 = 0x80;
  do {
    uVar1 = param_1[(longlong)iVar7 + 1];
    while ((int)(uint)uVar1 <= iVar10 * 0x40) {
      lVar8 = (longlong)iVar7;
      iVar7 = iVar7 + 1;
      uVar1 = param_1[lVar8 + 2];
    }
    puVar9[-1] = (char)iVar7;
    uVar1 = param_1[(longlong)iVar7 + 1];
    while ((int)(uint)uVar1 <= iVar4 + -0x40) {
      lVar8 = (longlong)iVar7;
      iVar7 = iVar7 + 1;
      uVar1 = param_1[lVar8 + 2];
    }
    *puVar9 = (char)iVar7;
    uVar1 = param_1[(longlong)iVar7 + 1];
    while ((int)(uint)uVar1 <= iVar4) {
      lVar8 = (longlong)iVar7;
      iVar7 = iVar7 + 1;
      uVar1 = param_1[lVar8 + 2];
    }
    puVar9[1] = (char)iVar7;
    uVar1 = param_1[(longlong)iVar7 + 1];
    while ((int)(uint)uVar1 <= iVar4 + 0x40) {
      lVar8 = (longlong)iVar7;
      iVar7 = iVar7 + 1;
      uVar1 = param_1[lVar8 + 2];
    }
    puVar9[2] = (char)iVar7;
    uVar1 = param_1[(longlong)iVar7 + 1];
    while ((int)(uint)uVar1 <= iVar4 + 0x80) {
      lVar8 = (longlong)iVar7;
      iVar7 = iVar7 + 1;
      uVar1 = param_1[lVar8 + 2];
    }
    puVar9[3] = (char)iVar7;
    uVar1 = param_1[(longlong)iVar7 + 1];
    while ((int)(uint)uVar1 <= iVar4 + 0xc0) {
      lVar8 = (longlong)iVar7;
      iVar7 = iVar7 + 1;
      uVar1 = param_1[lVar8 + 2];
    }
    puVar9[4] = (char)iVar7;
    uVar1 = param_1[(longlong)iVar7 + 1];
    while ((int)(uint)uVar1 <= iVar4 + 0x100) {
      lVar8 = (longlong)iVar7;
      iVar7 = iVar7 + 1;
      uVar1 = param_1[lVar8 + 2];
    }
    puVar9[5] = (char)iVar7;
    uVar1 = param_1[(longlong)iVar7 + 1];
    while ((int)(uint)uVar1 <= iVar4 + 0x140) {
      lVar8 = (longlong)iVar7;
      iVar7 = iVar7 + 1;
      uVar1 = param_1[lVar8 + 2];
    }
    puVar9[6] = (char)iVar7;
    uVar1 = param_1[(longlong)iVar7 + 1];
    while ((int)(uint)uVar1 <= iVar4 + 0x180) {
      lVar8 = (longlong)iVar7;
      iVar7 = iVar7 + 1;
      uVar1 = param_1[lVar8 + 2];
    }
    puVar9[7] = (char)iVar7;
    uVar1 = param_1[(longlong)iVar7 + 1];
    while ((int)(uint)uVar1 <= iVar4 + 0x1c0) {
      lVar8 = (longlong)iVar7;
      iVar7 = iVar7 + 1;
      uVar1 = param_1[lVar8 + 2];
    }
    puVar9[8] = (char)iVar7;
    uVar1 = param_1[(longlong)iVar7 + 1];
    while ((int)(uint)uVar1 <= iVar4 + 0x200) {
      lVar8 = (longlong)iVar7;
      iVar7 = iVar7 + 1;
      uVar1 = param_1[lVar8 + 2];
    }
    puVar9[9] = (char)iVar7;
    uVar1 = param_1[(longlong)iVar7 + 1];
    while ((int)(uint)uVar1 <= iVar4 + 0x240) {
      lVar8 = (longlong)iVar7;
      iVar7 = iVar7 + 1;
      uVar1 = param_1[lVar8 + 2];
    }
    puVar9[10] = (char)iVar7;
    uVar1 = param_1[(longlong)iVar7 + 1];
    while ((int)(uint)uVar1 <= iVar4 + 0x280) {
      lVar8 = (longlong)iVar7;
      iVar7 = iVar7 + 1;
      uVar1 = param_1[lVar8 + 2];
    }
    puVar9[0xb] = (char)iVar7;
    uVar1 = param_1[(longlong)iVar7 + 1];
    while ((int)(uint)uVar1 <= iVar4 + 0x2c0) {
      lVar8 = (longlong)iVar7;
      iVar7 = iVar7 + 1;
      uVar1 = param_1[lVar8 + 2];
    }
    puVar9[0xc] = (char)iVar7;
    uVar1 = param_1[(longlong)iVar7 + 1];
    while ((int)(uint)uVar1 <= iVar4 + 0x300) {
      lVar8 = (longlong)iVar7;
      iVar7 = iVar7 + 1;
      uVar1 = param_1[lVar8 + 2];
    }
    puVar9[0xd] = (char)iVar7;
    uVar1 = param_1[(longlong)iVar7 + 1];
    while ((int)(uint)uVar1 <= iVar4 + 0x340) {
      lVar8 = (longlong)iVar7;
      iVar7 = iVar7 + 1;
      uVar1 = param_1[lVar8 + 2];
    }
    puVar9[0xe] = (char)iVar7;
    iVar10 = iVar10 + 0x10;
    puVar9 = puVar9 + 0x10;
    iVar4 = iVar4 + 0x400;
  } while (iVar4 < 0x1080);
  return;
}



// FUNCTION 144d81320 FUN_144d81320 body=174 status=ok
// SIG undefined FUN_144d81320(void)

int FUN_144d81320(longlong param_1,uint *param_2)

{
  ushort *puVar1;
  longlong lVar2;
  short *psVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  
  param_2[1] = param_2[1] >> 0xc;
  uVar6 = *param_2 / param_2[1] & 0xfff;
  bVar4 = *(byte *)((ulonglong)(uVar6 >> 6) + 0x210 + param_1);
  uVar10 = (ulonglong)bVar4;
  uVar8 = (uint)bVar4;
  sVar7 = (short)uVar6;
  lVar2 = param_1 + 0x10 + uVar10 * 2;
  uVar5 = *(ushort *)(param_1 + 0x10 + uVar10 * 2);
  while (uVar5 <= uVar6) {
    puVar1 = (ushort *)(lVar2 + 0x10);
    lVar2 = lVar2 + 0x10;
    uVar8 = (int)uVar10 + 8;
    uVar10 = (ulonglong)uVar8;
    uVar5 = *puVar1;
  }
  psVar3 = (short *)(param_1 + 2 + (longlong)(int)uVar8 * 2);
  auVar11._0_2_ = -(ushort)(sVar7 < *psVar3);
  auVar11._2_2_ = -(ushort)(sVar7 < psVar3[1]);
  auVar11._4_2_ = -(ushort)(sVar7 < psVar3[2]);
  auVar11._6_2_ = -(ushort)(sVar7 < psVar3[3]);
  auVar11._8_2_ = -(ushort)(sVar7 < psVar3[4]);
  auVar11._10_2_ = -(ushort)(sVar7 < psVar3[5]);
  auVar11._12_2_ = -(ushort)(sVar7 < psVar3[6]);
  auVar11._14_2_ = -(ushort)(sVar7 < psVar3[7]);
  uVar5 = (ushort)(SUB161(auVar11 >> 7,0) & 1) | (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar11 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar11 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar11 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar11 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar11 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar11 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar11 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar11 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar11 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar11 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar11 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar11 >> 0x6f,0) & 1) << 0xd |
          (ushort)((byte)(auVar11._14_2_ >> 7) & 1) << 0xe | auVar11._14_2_ & 0x8000;
  uVar6 = 0;
  if (uVar5 != 0) {
    for (; (uVar5 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
    }
  }
  iVar9 = uVar8 + (uVar6 >> 1);
  uVar8 = param_2[1];
  uVar6 = (uint)*(ushort *)(param_1 + (longlong)iVar9 * 2);
  param_2[1] = (*(ushort *)(param_1 + 2 + (longlong)iVar9 * 2) - uVar6) * param_2[1];
  *param_2 = *param_2 - uVar8 * uVar6;
  return iVar9;
}



// FUNCTION 144d813e0 FUN_144d813e0 body=2757 status=ok
// SIG undefined FUN_144d813e0(void)

size_t FUN_144d813e0(longlong param_1,longlong *param_2,uint *param_3,size_t param_4,
                    undefined2 *param_5)

{
  ulonglong *puVar1;
  longlong lVar2;
  int iVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  size_t sVar9;
  char *pcVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  byte *pbVar15;
  ulonglong *puVar16;
  ulonglong *puVar17;
  uint uVar18;
  ulonglong *puVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  uint uVar23;
  uint *puVar24;
  bool bVar25;
  ulonglong local_80;
  uint local_58;
  uint local_54;
  uint *local_50;
  
  if (6 < (longlong)param_4) {
    if ((longlong)param_4 < 0x4001) {
      FUN_14518a030(&local_58,param_5);
      lVar7 = param_1 + 0x2c2000;
      uVar6 = *(uint *)(param_2 + 2);
      puVar1 = (ulonglong *)((longlong)param_3 + param_4);
      lVar8 = *param_2;
      lVar2 = param_2[1];
      uVar13 = (ulonglong)(byte)*param_3;
      uVar18 = (uint)*(ushort *)(lVar7 + uVar13 * 2);
      uVar20 = (local_54 >> 0xc) * (*(ushort *)(param_1 + 0x2c2002 + uVar13 * 2) - uVar18);
      uVar18 = (local_54 >> 0xc) * uVar18 + local_58;
      if (uVar18 < local_58) {
        pcVar10 = (char *)((longlong)local_50 + -1);
        cVar5 = *pcVar10;
        while (cVar5 == -1) {
          *pcVar10 = '\0';
          pcVar10 = pcVar10 + -1;
          cVar5 = *pcVar10;
        }
        *pcVar10 = cVar5 + '\x01';
      }
      for (; uVar20 < 0x1000000; uVar20 = uVar20 << 8) {
        *(char *)local_50 = (char)(uVar18 >> 0x18);
        local_50 = (uint *)((longlong)local_50 + 1);
        uVar18 = uVar18 << 8;
      }
      lVar11 = uVar13 * 0x250 + lVar7;
      uVar13 = (ulonglong)*(byte *)((longlong)param_3 + 1);
      uVar23 = (uint)*(ushort *)(lVar11 + uVar13 * 2);
      uVar21 = (uVar20 >> 0xc) * (*(ushort *)(lVar11 + 2 + uVar13 * 2) - uVar23);
      uVar20 = (uVar20 >> 0xc) * uVar23 + uVar18;
      if (uVar20 < uVar18) {
        pcVar10 = (char *)((longlong)local_50 + -1);
        cVar5 = *(char *)((longlong)local_50 + -1);
        while (cVar5 == -1) {
          *pcVar10 = '\0';
          pcVar10 = pcVar10 + -1;
          cVar5 = *pcVar10;
        }
        *pcVar10 = cVar5 + '\x01';
      }
      for (; uVar21 < 0x1000000; uVar21 = uVar21 << 8) {
        *(char *)local_50 = (char)(uVar20 >> 0x18);
        local_50 = (uint *)((longlong)local_50 + 1);
        uVar20 = uVar20 << 8;
      }
      local_80 = (ulonglong)*(byte *)((longlong)param_3 + 2);
      lVar11 = lVar7 + uVar13 * 0x250;
      uVar18 = (uint)*(ushort *)(lVar11 + local_80 * 2);
      local_54 = (uVar21 >> 0xc) * (*(ushort *)(lVar11 + 2 + local_80 * 2) - uVar18);
      local_58 = (uVar21 >> 0xc) * uVar18 + uVar20;
      puVar22 = local_50;
      if (local_58 < uVar20) {
        pcVar10 = (char *)((longlong)local_50 + -1);
        cVar5 = *(char *)((longlong)local_50 + -1);
        while (cVar5 == -1) {
          *pcVar10 = '\0';
          pcVar10 = pcVar10 + -1;
          cVar5 = *pcVar10;
        }
        *pcVar10 = cVar5 + '\x01';
      }
      for (; local_54 < 0x1000000; local_54 = local_54 << 8) {
        *(char *)puVar22 = (char)(local_58 >> 0x18);
        local_58 = local_58 << 8;
        puVar22 = (uint *)((longlong)puVar22 + 1);
      }
      uVar20 = *param_3;
      puVar17 = (ulonglong *)((longlong)param_3 + 3);
      uVar18 = (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 | uVar20 << 0x18;
      uVar20 = uVar18 * -0x61c8864f;
      uVar20 = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8;
      uVar13 = (ulonglong)(uVar20 & uVar6);
      puVar24 = (uint *)(param_2 + uVar13 + 3);
      if (*(uint *)((longlong)param_2 + uVar13 * 8 + 0x1c) != uVar18) {
        uVar13 = (ulonglong)(uVar20 + 1 & uVar6);
        puVar24 = (uint *)0x0;
        if (*(uint *)((longlong)param_2 + uVar13 * 8 + 0x1c) == uVar18) {
          puVar24 = (uint *)(param_2 + uVar13 + 3);
        }
      }
      local_50 = puVar22;
      if (puVar17 < (ulonglong *)((longlong)puVar1 - 1U)) {
        do {
          if ((uint *)((longlong)param_5 + (param_4 - 2)) <= puVar22) goto LAB_144d81e7f;
          uVar13 = (ulonglong)(byte)*puVar17;
          uVar20 = (uint)(byte)*puVar17;
          uVar4 = (undefined1)(local_58 >> 0x18);
          if (puVar24 == (uint *)0x0) {
            uVar21 = uVar18 | uVar20;
            puVar17 = (ulonglong *)((longlong)puVar17 + 1);
            uVar18 = uVar21 * 0x100;
            if (local_54 < 0x1000000) {
              if (local_54 < 0x10000) {
                *puVar22 = local_58 >> 0x18 | (local_58 & 0xff0000) >> 8 | (local_58 & 0xff00) << 8
                           | local_58 << 0x18;
                puVar22 = (uint *)((longlong)local_50 + 2);
                local_58 = local_58 << 0x10;
                local_54 = local_54 << 0x10;
                local_50 = puVar22;
              }
              else {
                *(undefined1 *)puVar22 = uVar4;
                puVar22 = (uint *)((longlong)local_50 + 1);
                local_58 = local_58 << 8;
                local_54 = local_54 << 8;
                local_50 = puVar22;
              }
            }
            uVar21 = uVar21 * 0x3779b100;
            uVar21 = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8;
            uVar14 = (ulonglong)(uVar21 & uVar6);
            puVar24 = (uint *)(param_2 + uVar14 + 3);
            if (*(uint *)((longlong)param_2 + uVar14 * 8 + 0x1c) != uVar18) {
              uVar14 = (ulonglong)(uVar21 + 1 & uVar6);
              puVar24 = (uint *)0x0;
              if (*(uint *)((longlong)param_2 + uVar14 * 8 + 0x1c) == uVar18) {
                puVar24 = (uint *)(param_2 + uVar14 + 3);
              }
            }
            uVar21 = local_54 >> 0xc;
            lVar11 = (longlong)(int)local_80 * 0x128 + (longlong)(int)uVar20;
            uVar20 = (uint)*(ushort *)(lVar7 + lVar11 * 2);
            local_54 = uVar21 * (*(ushort *)(param_1 + 0x2c2002 + lVar11 * 2) - uVar20);
            uVar20 = uVar21 * uVar20 + local_58;
            bVar25 = uVar20 < local_58;
            local_80 = uVar13;
            local_58 = uVar20;
            if (bVar25) {
              pcVar10 = (char *)((longlong)puVar22 + -1);
              cVar5 = *(char *)((longlong)puVar22 + -1);
              while (cVar5 == -1) {
                *pcVar10 = '\0';
                pcVar10 = pcVar10 + -1;
                cVar5 = *pcVar10;
              }
              *pcVar10 = cVar5 + '\x01';
              puVar22 = local_50;
            }
          }
          else {
            puVar16 = (ulonglong *)(lVar8 + (ulonglong)(*puVar24 & 0xffffff));
            uVar21 = *puVar24 >> 0x18;
            uVar23 = ((int)local_80 << 8 | uVar21) * -0x61c8864f;
            uVar23 = uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 & 0xfff;
            if (local_54 < 0x1000000) {
              if (local_54 < 0x10000) {
                *puVar22 = local_58 >> 0x18 | (local_58 & 0xff0000) >> 8 | (local_58 & 0xff00) << 8
                           | local_58 << 0x18;
                puVar22 = (uint *)((longlong)local_50 + 2);
                local_58 = local_58 << 0x10;
                local_54 = local_54 << 0x10;
                local_50 = puVar22;
              }
              else {
                *(undefined1 *)puVar22 = uVar4;
                puVar22 = (uint *)((longlong)local_50 + 1);
                local_58 = local_58 << 8;
                local_54 = local_54 << 8;
                local_50 = puVar22;
              }
            }
            if ((uVar20 == uVar21) &&
               (pbVar15 = (byte *)((longlong)puVar17 + 1),
               *pbVar15 == *(byte *)((longlong)puVar16 + 1))) {
              puVar19 = puVar17 + 2;
              if (puVar19 < puVar1) {
                if (*puVar17 == *puVar16) {
                  if (puVar17[1] == puVar16[1]) {
                    uVar13 = 0x10;
                    lVar12 = lVar2 - (longlong)puVar16;
                    lVar11 = (longlong)puVar1 - (longlong)puVar17;
                    if (lVar12 <= (longlong)puVar1 - (longlong)puVar17) {
                      lVar11 = lVar12;
                    }
                    if (0x10 < lVar11) {
                      do {
                        if ((byte)*puVar19 !=
                            *(byte *)(((longlong)puVar16 - (longlong)puVar17) + (longlong)puVar19))
                        break;
                        uVar13 = uVar13 + 1;
                        puVar19 = (ulonglong *)((longlong)puVar19 + 1);
                      } while ((longlong)uVar13 < lVar11);
                    }
                  }
                  else {
                    uVar14 = puVar16[1] ^ puVar17[1];
                    uVar13 = 0;
                    if (uVar14 != 0) {
                      for (; (uVar14 >> uVar13 & 1) == 0; uVar13 = uVar13 + 1) {
                      }
                    }
                    uVar13 = (ulonglong)(((uint)(uVar13 >> 3) & 0x1fffffff) + 8);
                  }
                }
                else {
                  uVar14 = *puVar16 ^ *puVar17;
                  uVar13 = 0;
                  if (uVar14 != 0) {
                    for (; (uVar14 >> uVar13 & 1) == 0; uVar13 = uVar13 + 1) {
                    }
                  }
                  uVar13 = uVar13 >> 3;
                }
              }
              else {
                lVar12 = lVar2 - (longlong)puVar16;
                uVar13 = 1;
                lVar11 = (longlong)puVar1 - (longlong)puVar17;
                if (lVar12 <= (longlong)puVar1 - (longlong)puVar17) {
                  lVar11 = lVar12;
                }
                if (1 < lVar11) {
                  do {
                    if (*pbVar15 != pbVar15[(longlong)puVar16 - (longlong)puVar17]) break;
                    uVar13 = uVar13 + 1;
                    pbVar15 = pbVar15 + 1;
                  } while ((longlong)uVar13 < lVar11);
                }
              }
              puVar17 = (ulonglong *)((longlong)puVar17 + uVar13);
              if (puVar17 < puVar1) {
                uVar20 = *(uint *)((longlong)puVar17 + -3);
                local_80 = (ulonglong)*(byte *)((longlong)puVar17 + -1);
                uVar18 = (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 | uVar20 << 0x18;
                uVar20 = uVar18 * -0x61c8864f;
                uVar20 = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8;
                uVar14 = (ulonglong)(uVar20 & uVar6);
                puVar24 = (uint *)(param_2 + uVar14 + 3);
                if (*(uint *)((longlong)param_2 + uVar14 * 8 + 0x1c) != uVar18) {
                  uVar14 = (ulonglong)(uVar20 + 1 & uVar6);
                  puVar24 = (uint *)0x0;
                  if (*(uint *)((longlong)param_2 + uVar14 * 8 + 0x1c) == uVar18) {
                    puVar24 = (uint *)(param_2 + uVar14 + 3);
                  }
                }
              }
              lVar11 = (ulonglong)uVar23 * 0x161;
              uVar20 = local_54 >> 0xc;
              if ((longlong)uVar13 < 0xe) {
                lVar11 = (int)uVar13 + lVar11;
                uVar21 = (uint)*(ushort *)(param_1 + 0x1fc + lVar11 * 2);
                local_54 = uVar20 * (*(ushort *)(param_1 + 0x1fe + lVar11 * 2) - uVar21);
                uVar20 = uVar20 * uVar21 + local_58;
                bVar25 = uVar20 < local_58;
                local_58 = uVar20;
                if (bVar25) {
                  pcVar10 = (char *)((longlong)puVar22 + -1);
                  cVar5 = *(char *)((longlong)puVar22 + -1);
                  while (cVar5 == -1) {
                    *pcVar10 = '\0';
                    pcVar10 = pcVar10 + -1;
                    cVar5 = *pcVar10;
                  }
                  goto LAB_144d81adf;
                }
              }
              else {
                uVar21 = (int)uVar13 - 0xc;
                iVar3 = 0x1f;
                if (uVar21 != 0) {
                  for (; uVar21 >> iVar3 == 0; iVar3 = iVar3 + -1) {
                  }
                }
                lVar11 = (iVar3 + 0x10b) + lVar11;
                uVar23 = (uint)*(ushort *)(param_1 + lVar11 * 2);
                local_54 = uVar20 * (*(ushort *)(param_1 + 2 + lVar11 * 2) - uVar23);
                uVar20 = uVar20 * uVar23 + local_58;
                if (uVar20 < local_58) {
                  pcVar10 = (char *)((longlong)puVar22 + -1);
                  cVar5 = *(char *)((longlong)puVar22 + -1);
                  while (cVar5 == -1) {
                    *pcVar10 = '\0';
                    pcVar10 = pcVar10 + -1;
                    cVar5 = *pcVar10;
                  }
                  *pcVar10 = cVar5 + '\x01';
                  puVar22 = local_50;
                }
                if (local_54 < 0x1000000) {
                  if (local_54 < 0x10000) {
                    *puVar22 = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 |
                               uVar20 * 0x1000000;
                    puVar22 = (uint *)((longlong)local_50 + 2);
                    uVar20 = uVar20 * 0x10000;
                    local_54 = local_54 * 0x10000;
                    local_50 = puVar22;
                  }
                  else {
                    *(char *)puVar22 = (char)(uVar20 >> 0x18);
                    puVar22 = (uint *)((longlong)local_50 + 1);
                    uVar20 = uVar20 * 0x100;
                    local_54 = local_54 * 0x100;
                    local_50 = puVar22;
                  }
                }
                local_54 = local_54 >> ((byte)iVar3 & 0x1f);
                local_58 = local_54 * (uVar21 - (1 << ((byte)iVar3 & 0x1f))) + uVar20;
                if (local_58 < uVar20) {
                  pcVar10 = (char *)((longlong)puVar22 + -1);
                  cVar5 = *(char *)((longlong)puVar22 + -1);
                  while (cVar5 == -1) {
                    *pcVar10 = '\0';
                    pcVar10 = pcVar10 + -1;
                    cVar5 = *pcVar10;
                  }
                  *pcVar10 = cVar5 + '\x01';
                  puVar22 = local_50;
                }
                for (; local_54 < 0x1000000; local_54 = local_54 << 8) {
                  *(char *)puVar22 = (char)(local_58 >> 0x18);
                  local_50 = (uint *)((longlong)local_50 + 1);
                  local_58 = local_58 << 8;
                  puVar22 = local_50;
                }
              }
            }
            else {
              uVar20 = uVar18 | uVar20;
              puVar17 = (ulonglong *)((longlong)puVar17 + 1);
              uVar18 = uVar20 * 0x100;
              uVar20 = uVar20 * 0x3779b100;
              uVar20 = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8;
              uVar14 = (ulonglong)(uVar20 & uVar6);
              puVar24 = (uint *)(param_2 + uVar14 + 3);
              if (*(uint *)((longlong)param_2 + uVar14 * 8 + 0x1c) != uVar18) {
                uVar14 = (ulonglong)(uVar20 + 1 & uVar6);
                puVar24 = (uint *)0x0;
                if (*(uint *)((longlong)param_2 + uVar14 * 8 + 0x1c) == uVar18) {
                  puVar24 = (uint *)(param_2 + uVar14 + 3);
                }
              }
              uVar21 = local_54 >> 0xc;
              lVar11 = (ulonglong)uVar23 * 0x161 + uVar13;
              uVar20 = (uint)*(ushort *)(param_1 + lVar11 * 2);
              local_54 = uVar21 * (*(ushort *)(param_1 + 2 + lVar11 * 2) - uVar20);
              uVar20 = uVar21 * uVar20 + local_58;
              bVar25 = uVar20 < local_58;
              local_80 = uVar13;
              local_58 = uVar20;
              if (bVar25) {
                pcVar10 = (char *)((longlong)puVar22 + -1);
                cVar5 = *(char *)((longlong)puVar22 + -1);
                while (cVar5 == -1) {
                  *pcVar10 = '\0';
                  pcVar10 = pcVar10 + -1;
                  cVar5 = *pcVar10;
                }
LAB_144d81adf:
                *pcVar10 = cVar5 + '\x01';
                puVar22 = local_50;
              }
            }
          }
        } while (puVar17 < (ulonglong *)((longlong)puVar1 - 1U));
      }
      if (local_54 < 0x1000000) {
        if (local_54 < 0x10000) {
          *puVar22 = local_58 >> 0x18 | (local_58 & 0xff0000) >> 8 | (local_58 & 0xff00) << 8 |
                     local_58 << 0x18;
          puVar22 = (uint *)((longlong)local_50 + 2);
          local_58 = local_58 << 0x10;
          local_54 = local_54 << 0x10;
          local_50 = puVar22;
        }
        else {
          *(char *)puVar22 = (char)(local_58 >> 0x18);
          puVar22 = (uint *)((longlong)local_50 + 1);
          local_58 = local_58 << 8;
          local_54 = local_54 << 8;
          local_50 = puVar22;
        }
      }
      while (puVar17 < puVar1) {
        uVar13 = *puVar17;
        pbVar15 = (byte *)((longlong)puVar17 + -1);
        puVar17 = (ulonglong *)((longlong)puVar17 + 1);
        lVar8 = lVar7 + (ulonglong)*pbVar15 * 0x250;
        uVar20 = local_54 >> 0xc;
        uVar6 = (uint)*(ushort *)(lVar8 + (ulonglong)(byte)uVar13 * 2);
        local_54 = uVar20 * (*(ushort *)(lVar8 + 2 + (ulonglong)(byte)uVar13 * 2) - uVar6);
        uVar6 = uVar20 * uVar6 + local_58;
        bVar25 = uVar6 < local_58;
        local_58 = uVar6;
        if (bVar25) {
          pcVar10 = (char *)((longlong)puVar22 + -1);
          cVar5 = *(char *)((longlong)puVar22 + -1);
          while (cVar5 == -1) {
            *pcVar10 = '\0';
            pcVar10 = pcVar10 + -1;
            cVar5 = *pcVar10;
          }
          *pcVar10 = cVar5 + '\x01';
          puVar22 = local_50;
        }
        for (; local_54 < 0x1000000; local_54 = local_54 << 8) {
          *(char *)puVar22 = (char)(local_58 >> 0x18);
          local_50 = (uint *)((longlong)local_50 + 1);
          local_58 = local_58 << 8;
          puVar22 = local_50;
        }
      }
      sVar9 = FUN_14518a0c0(&local_58);
    }
    else {
      lVar7 = FUN_144d813e0(param_1,param_2,param_3,0x4000,param_5 + 1);
      *param_5 = (short)lVar7;
      lVar8 = FUN_144d813e0(param_1,param_2,param_3 + 0x1000,param_4 - 0x4000,
                            lVar7 + (longlong)(param_5 + 1));
      sVar9 = lVar8 + 2 + lVar7;
    }
    if ((longlong)sVar9 < (longlong)param_4) {
      return sVar9;
    }
  }
LAB_144d81e7f:
  memcpy(param_5,param_3,param_4);
  return param_4;
}



// FUNCTION 144d81ec0 FUN_144d81ec0 body=1845 status=ok
// SIG undefined FUN_144d81ec0(void)

size_t FUN_144d81ec0(longlong param_1,longlong *param_2,ushort *param_3,size_t param_4,char *param_5
                    ,size_t param_6)

{
  char *pcVar1;
  ushort *puVar2;
  char *pcVar3;
  ushort *puVar4;
  short *psVar5;
  byte bVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  size_t sVar12;
  ulonglong uVar13;
  short sVar14;
  longlong lVar15;
  char *pcVar16;
  char *pcVar17;
  ulonglong uVar18;
  byte *pbVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  byte *pbVar24;
  longlong lVar25;
  longlong lVar26;
  uint *puVar27;
  longlong lVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  uint local_48;
  uint local_44;
  byte *local_40;
  
  if (((longlong)param_6 < 7) || ((longlong)param_6 <= (longlong)param_4)) {
    if (param_4 == param_6) {
      memcpy(param_5,param_3,param_6);
      return param_6;
    }
  }
  else {
    if ((longlong)param_6 < 0x4001) {
      pbVar19 = (byte *)(param_4 + 5 + (longlong)param_3);
      FUN_14518a050(&local_48,param_3);
      lVar26 = *param_2;
      lVar11 = param_1 + 0x2c2000;
      uVar8 = 0;
      uVar23 = *(uint *)(param_2 + 2);
      uVar18 = param_2[1];
      pcVar3 = param_5 + param_6;
      pcVar1 = pcVar3 + -1;
      iVar20 = 0;
      do {
        while (pcVar16 = param_5, local_44 < 0x1000000) {
          local_44 = local_44 << 8;
          if (pbVar19 <= local_40) {
            return 0;
          }
          bVar6 = *local_40;
          local_40 = local_40 + 1;
          local_48 = (uint)bVar6 | local_48 << 8;
          param_5 = pcVar16;
        }
        uVar8 = FUN_144d81320((longlong)(int)uVar8 * 0x250 + lVar11,&local_48);
        if (0xff < (int)uVar8) {
          return 0xffffffffffffffff;
        }
        iVar20 = iVar20 + 1;
        *pcVar16 = (char)uVar8;
        param_5 = pcVar16 + 1;
      } while (iVar20 < 3);
      uVar21 = *(uint *)(pcVar16 + -2);
      uVar21 = (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 | uVar21 << 0x18;
      while( true ) {
        uVar10 = (ulonglong)local_48;
        pbVar24 = local_40;
        pcVar16 = param_5;
        while( true ) {
          while( true ) {
            while (iVar20 = (int)uVar10, local_44 < 0x1000000) {
              local_44 = local_44 << 8;
              if (pbVar19 <= pbVar24) {
                return 0;
              }
              local_40 = pbVar24 + 1;
              uVar10 = (ulonglong)((uint)*pbVar24 | iVar20 << 8);
              pbVar24 = local_40;
            }
            uVar9 = uVar21 * -0x61c8864f;
            uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8;
            uVar13 = (ulonglong)(uVar9 & uVar23);
            if (((*(uint *)((longlong)param_2 + uVar13 * 8 + 0x1c) == uVar21) ||
                (uVar13 = (ulonglong)(uVar9 + 1 & uVar23),
                *(uint *)((longlong)param_2 + uVar13 * 8 + 0x1c) == uVar21)) &&
               (puVar27 = (uint *)(param_2 + uVar13 + 3), puVar27 != (uint *)0x0)) break;
            uVar22 = local_44 >> 0xc;
            lVar28 = (longlong)(int)uVar8 * 0x250 + lVar11;
            uVar9 = (uint)(uVar10 / uVar22) & 0xfff;
            bVar6 = *(byte *)((ulonglong)(uVar9 >> 6) + 0x210 + lVar28);
            uVar10 = (ulonglong)bVar6;
            uVar8 = (uint)bVar6;
            sVar14 = (short)uVar9;
            puVar4 = (ushort *)(lVar28 + (uVar10 + 8) * 2);
            uVar7 = *puVar4;
            while (uVar7 <= uVar9) {
              puVar2 = puVar4 + 8;
              puVar4 = puVar4 + 8;
              uVar8 = (int)uVar10 + 8;
              uVar10 = (ulonglong)uVar8;
              uVar7 = *puVar2;
            }
            psVar5 = (short *)(lVar28 + 2 + (longlong)(int)uVar8 * 2);
            auVar30._0_2_ = -(ushort)(sVar14 < *psVar5);
            auVar30._2_2_ = -(ushort)(sVar14 < psVar5[1]);
            auVar30._4_2_ = -(ushort)(sVar14 < psVar5[2]);
            auVar30._6_2_ = -(ushort)(sVar14 < psVar5[3]);
            auVar30._8_2_ = -(ushort)(sVar14 < psVar5[4]);
            auVar30._10_2_ = -(ushort)(sVar14 < psVar5[5]);
            auVar30._12_2_ = -(ushort)(sVar14 < psVar5[6]);
            auVar30._14_2_ = -(ushort)(sVar14 < psVar5[7]);
            uVar7 = (ushort)(SUB161(auVar30 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                    (ushort)((byte)(auVar30._14_2_ >> 7) & 1) << 0xe | auVar30._14_2_ & 0x8000;
            uVar9 = 0;
            if (uVar7 != 0) {
              for (; (uVar7 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
              }
            }
            uVar8 = uVar8 + (uVar9 >> 1);
            uVar7 = *(ushort *)(lVar28 + (longlong)(int)uVar8 * 2);
            local_44 = uVar22 * ((uint)*(ushort *)(lVar28 + 2 + (longlong)(int)uVar8 * 2) -
                                (uint)uVar7);
            local_48 = iVar20 - uVar7 * uVar22;
            *pcVar16 = (char)uVar8;
            if (pcVar1 <= pcVar16 + 1) goto LAB_144d82475;
            uVar10 = (ulonglong)local_48;
            uVar21 = (uVar21 | uVar8) << 8;
            pbVar24 = local_40;
            pcVar16 = pcVar16 + 1;
          }
          uVar22 = local_44 >> 0xc;
          uVar8 = ((uint)*(byte *)((longlong)puVar27 + 3) | uVar8 << 8) * -0x61c8864f;
          uVar9 = (uint)(uVar10 / uVar22) & 0xfff;
          lVar28 = (ulonglong)(uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 & 0xfff) * 0x2c2 + param_1;
          uVar7 = *(ushort *)(lVar28 + 0x242 + (ulonglong)(uVar9 >> 6) * 2);
          uVar10 = (ulonglong)uVar7;
          uVar8 = (uint)uVar7;
          sVar14 = (short)uVar9;
          puVar4 = (ushort *)(lVar28 + (uVar10 + 8) * 2);
          uVar7 = *puVar4;
          while (uVar7 <= uVar9) {
            puVar2 = puVar4 + 8;
            puVar4 = puVar4 + 8;
            uVar8 = (int)uVar10 + 8;
            uVar10 = (ulonglong)uVar8;
            uVar7 = *puVar2;
          }
          psVar5 = (short *)(lVar28 + 2 + (longlong)(int)uVar8 * 2);
          auVar29._0_2_ = -(ushort)(sVar14 < *psVar5);
          auVar29._2_2_ = -(ushort)(sVar14 < psVar5[1]);
          auVar29._4_2_ = -(ushort)(sVar14 < psVar5[2]);
          auVar29._6_2_ = -(ushort)(sVar14 < psVar5[3]);
          auVar29._8_2_ = -(ushort)(sVar14 < psVar5[4]);
          auVar29._10_2_ = -(ushort)(sVar14 < psVar5[5]);
          auVar29._12_2_ = -(ushort)(sVar14 < psVar5[6]);
          auVar29._14_2_ = -(ushort)(sVar14 < psVar5[7]);
          uVar7 = (ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                  (ushort)((byte)(auVar29._14_2_ >> 7) & 1) << 0xe | auVar29._14_2_ & 0x8000;
          uVar9 = 0;
          if (uVar7 != 0) {
            for (; (uVar7 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
            }
          }
          uVar8 = uVar8 + (uVar9 >> 1);
          uVar7 = *(ushort *)(lVar28 + (longlong)(int)uVar8 * 2);
          local_44 = uVar22 * ((uint)*(ushort *)(lVar28 + 2 + (longlong)(int)uVar8 * 2) -
                              (uint)uVar7);
          local_48 = iVar20 - uVar7 * uVar22;
          if ((int)uVar8 < 0x100) break;
          lVar28 = (ulonglong)(*puVar27 & 0xffffff) + lVar26;
          if ((int)uVar8 < 0x10c) {
            lVar25 = (longlong)(int)(uVar8 - 0xfe);
            if (pcVar3 < pcVar16 + lVar25) {
              return 0;
            }
            if (0 < lVar25) {
              pcVar17 = pcVar16;
              lVar15 = lVar25;
              do {
                *pcVar17 = pcVar17[lVar28 - (longlong)pcVar16];
                pcVar17 = pcVar17 + 1;
                lVar15 = lVar15 + -1;
                pbVar24 = local_40;
              } while (lVar15 != 0);
            }
            uVar10 = (ulonglong)local_48;
            pcVar17 = pcVar16 + lVar25;
            if (pcVar1 <= pcVar17) goto LAB_144d82481;
            uVar21 = *(uint *)(pcVar17 + -3);
            uVar8 = (uint)(byte)pcVar17[-1];
            uVar21 = (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 | uVar21 << 0x18;
            pcVar16 = pcVar17;
          }
          else {
            while (local_44 < 0x1000000) {
              local_44 = local_44 << 8;
              if (pbVar19 <= pbVar24) {
                return 0;
              }
              bVar6 = *pbVar24;
              pbVar24 = pbVar24 + 1;
              local_48 = (uint)bVar6 | local_48 << 8;
              local_40 = pbVar24;
            }
            local_44 = local_44 >> ((char)uVar8 - 0xbU & 0x1f);
            lVar25 = (longlong)*(int *)(&DAT_1499d6c50 + (longlong)(int)(uVar8 - 0x10c) * 4) +
                     (ulonglong)local_48 / (ulonglong)local_44;
            pcVar17 = pcVar16 + lVar25;
            local_48 = local_48 - local_44 * (int)((ulonglong)local_48 / (ulonglong)local_44);
            if (pcVar3 < pcVar17) {
              return 0;
            }
            if (uVar18 < (ulonglong)(lVar25 + lVar28)) {
              return 0;
            }
            if (0 < lVar25) {
              lVar28 = lVar28 - (longlong)pcVar16;
              do {
                *pcVar16 = pcVar16[lVar28];
                pcVar16 = pcVar16 + 1;
                lVar25 = lVar25 + -1;
                pbVar24 = local_40;
              } while (lVar25 != 0);
            }
            uVar10 = (ulonglong)local_48;
            if (pcVar1 <= pcVar17) goto LAB_144d82481;
            uVar21 = *(uint *)(pcVar17 + -3);
            uVar8 = (uint)(byte)pcVar17[-1];
            uVar21 = (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 | uVar21 << 0x18;
            pcVar16 = pcVar17;
          }
        }
        *pcVar16 = (char)uVar8;
        param_5 = pcVar16 + 1;
        if (pcVar1 <= param_5) break;
        uVar21 = (uVar21 | uVar8) << 8;
      }
LAB_144d82475:
      pcVar17 = pcVar16 + 1;
      uVar10 = (ulonglong)local_48;
      pbVar24 = local_40;
LAB_144d82481:
      if (pcVar17 < pcVar3) {
        while( true ) {
          while (local_44 < 0x1000000) {
            local_44 = local_44 << 8;
            if (pbVar19 <= pbVar24) {
              return 0;
            }
            local_40 = pbVar24 + 1;
            uVar10 = (ulonglong)((uint)*pbVar24 | (int)uVar10 << 8);
            pbVar24 = local_40;
          }
          uVar21 = local_44 >> 0xc;
          lVar26 = (ulonglong)(byte)pcVar17[-1] * 0x250 + lVar11;
          uVar8 = (uint)(uVar10 / uVar21) & 0xfff;
          bVar6 = *(byte *)((ulonglong)(uVar8 >> 6) + 0x210 + lVar26);
          uVar18 = (ulonglong)bVar6;
          uVar23 = (uint)bVar6;
          sVar14 = (short)uVar8;
          puVar4 = (ushort *)(lVar26 + (uVar18 + 8) * 2);
          uVar7 = *puVar4;
          while (uVar7 <= uVar8) {
            puVar2 = puVar4 + 8;
            puVar4 = puVar4 + 8;
            uVar23 = (int)uVar18 + 8;
            uVar18 = (ulonglong)uVar23;
            uVar7 = *puVar2;
          }
          psVar5 = (short *)(lVar26 + 2 + (longlong)(int)uVar23 * 2);
          auVar31._0_2_ = -(ushort)(sVar14 < *psVar5);
          auVar31._2_2_ = -(ushort)(sVar14 < psVar5[1]);
          auVar31._4_2_ = -(ushort)(sVar14 < psVar5[2]);
          auVar31._6_2_ = -(ushort)(sVar14 < psVar5[3]);
          auVar31._8_2_ = -(ushort)(sVar14 < psVar5[4]);
          auVar31._10_2_ = -(ushort)(sVar14 < psVar5[5]);
          auVar31._12_2_ = -(ushort)(sVar14 < psVar5[6]);
          auVar31._14_2_ = -(ushort)(sVar14 < psVar5[7]);
          uVar7 = (ushort)(SUB161(auVar31 >> 7,0) & 1) | (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
                  (ushort)((byte)(auVar31._14_2_ >> 7) & 1) << 0xe | auVar31._14_2_ & 0x8000;
          uVar8 = 0;
          if (uVar7 != 0) {
            for (; (uVar7 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
            }
          }
          iVar20 = uVar23 + (uVar8 >> 1);
          uVar7 = *(ushort *)(lVar26 + (longlong)iVar20 * 2);
          local_44 = uVar21 * ((uint)*(ushort *)(lVar26 + 2 + (longlong)iVar20 * 2) - (uint)uVar7);
          local_48 = (int)uVar10 - uVar7 * uVar21;
          if (0xff < iVar20) {
            return 0xffffffffffffffff;
          }
          *pcVar17 = (char)iVar20;
          pcVar17 = pcVar17 + 1;
          if (pcVar3 <= pcVar17) break;
          uVar10 = (ulonglong)local_48;
          pbVar24 = local_40;
        }
      }
      sVar12 = FUN_14518a180(&local_48);
      return sVar12;
    }
    if (2 < (longlong)param_4) {
      uVar18 = (ulonglong)*param_3;
      if (((longlong)uVar18 < (longlong)(param_4 - 2)) &&
         (uVar10 = FUN_144d81ec0(param_1,param_2,param_3 + 1,*param_3,param_5,0x4000),
         uVar10 == uVar18)) {
        lVar11 = FUN_144d81ec0(param_1,param_2,uVar18 + (longlong)(param_3 + 1),
                               (param_4 - 2) - uVar18,param_5 + 0x4000,param_6 - 0x4000);
        return lVar11 + 2 + uVar10;
      }
    }
  }
  return 0xffffffffffffffff;
}



// FUNCTION 144d82600 FUN_144d82600 body=284 status=ok
// SIG undefined FUN_144d82600(void)

int FUN_144d82600(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,uint param_4,
                 int param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_5 == 0xc) {
    if ((param_1 != (undefined8 *)0x0) && (param_2 != (undefined8 *)0x0)) {
      if (*(int *)(param_2 + 1) != 5) {
        *(undefined4 *)(param_1 + 2) = 3;
        return 3;
      }
      if (((((param_4 >> 0x10 & 1) == 0) || ((*(uint *)((longlong)param_2 + 0xc) & 0x40000) != 0))
          && (((param_4 >> 0x11 & 1) == 0 || ((*(uint *)((longlong)param_2 + 0xc) & 0x80000) != 0)))
          ) && ((((param_4 >> 0x12 & 1) == 0 ||
                 ((*(uint *)((longlong)param_2 + 0xc) & 0x100000) != 0)) &&
                ((*(byte *)((longlong)param_2 + 0xc) & 1) != 0)))) {
        uVar2 = 0;
        *param_1 = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[1] = param_2;
        *param_1 = *param_2;
        *(uint *)(param_1 + 4) = param_4;
        param_1[5] = param_3;
        iVar1 = (*(code *)param_2[2])(param_1,0);
        if (iVar1 != 0) {
          if ((undefined8 *)param_1[6] != (undefined8 *)0x0) {
            uVar2 = *(undefined8 *)param_1[6];
          }
          param_1[3] = uVar2;
          FUN_144d827c0(param_1);
        }
        *(int *)(param_1 + 2) = iVar1;
        return iVar1;
      }
      *(undefined4 *)(param_1 + 2) = 4;
      return 4;
    }
    iVar1 = 8;
  }
  else {
    iVar1 = 3;
  }
  if (param_1 == (undefined8 *)0x0) {
    return iVar1;
  }
  *(int *)(param_1 + 2) = iVar1;
  return iVar1;
}



// FUNCTION 144d82720 FUN_144d82720 body=101 status=ok
// SIG undefined FUN_144d82720(void)

void FUN_144d82720(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      if (param_3 == 0) {
LAB_144d82750:
        if ((*(longlong *)(param_1 + 8) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
          uVar1 = (**(code **)(*(longlong *)(param_1 + 8) + 0x38))();
          *(undefined4 *)(param_1 + 0x10) = uVar1;
          return;
        }
        *(undefined4 *)(param_1 + 0x10) = 1;
        return;
      }
    }
    else if (param_3 != 0) goto LAB_144d82750;
  }
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x10) = 8;
  }
  return;
}



// FUNCTION 144d82790 FUN_144d82790 body=35 status=ok
// SIG undefined FUN_144d82790(void)

undefined8 FUN_144d82790(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if ((((param_1 != 0) && (param_2 != 0)) && (*(longlong *)(param_1 + 8) != 0)) &&
     (*(longlong *)(param_1 + 0x30) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000144d827ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(longlong *)(param_1 + 8) + 0x40))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 144d827c0 FUN_144d827c0 body=80 status=ok
// SIG undefined FUN_144d827c0(void)

undefined4 FUN_144d827c0(undefined8 *param_1)

{
  if (param_1 == (undefined8 *)0x0) {
    return 8;
  }
  if ((param_1[1] != 0) && (param_1[6] != 0)) {
    (**(code **)(param_1[1] + 0x18))();
    param_1[1] = 0;
    *param_1 = 0;
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    return 0;
  }
  *(undefined4 *)(param_1 + 2) = 1;
  return 1;
}



// FUNCTION 144d82810 FUN_144d82810 body=149 status=ok
// SIG undefined FUN_144d82810(void)

void FUN_144d82810(int *param_1,int param_2,longlong param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined8 local_res20;
  
  *param_1 = param_2;
  param_1[1] = 0;
  local_res20 = param_4;
  if (param_3 != 0) {
    param_1[1] = 1;
    puVar1 = (ulonglong *)FUN_144737586();
    __stdio_common_vsprintf(*puVar1 | 2,param_1 + 2,0x4f,param_3,0,&local_res20);
    *(undefined1 *)((longlong)param_1 + 0x57) = 0;
  }
  if (param_1[0x16] == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  longjmp((_JBTYPE *)(param_1 + 0x18),*param_1);
}



// FUNCTION 144d828b0 FUN_144d828b0 body=166 status=ok
// SIG undefined FUN_144d828b0(void)

undefined8 FUN_144d828b0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  FUN_14518d0e0();
  FUN_14518d370();
  FUN_14518e6a0();
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar2 = FUN_14518efb0(1,0x330);
    if (lVar2 == 0) {
      return 2;
    }
    *(longlong *)(param_1 + 0x30) = lVar2;
    *(undefined4 *)(lVar2 + 8) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(lVar2 + 0xe4) = 0x10;
    *(undefined8 *)(lVar2 + 0x110) = 0;
    *(undefined8 *)(lVar2 + 0x118) = 0;
    puVar1 = *(undefined8 **)(param_1 + 0x28);
    if (puVar1 != (undefined8 *)0x0) {
      *(undefined8 *)(lVar2 + 0xd8) = *puVar1;
      *(undefined4 *)(lVar2 + 0xe0) = *(undefined4 *)(puVar1 + 1);
      *(undefined8 **)(param_1 + 0x28) = (undefined8 *)(lVar2 + 0xd8);
    }
    lVar2 = *(longlong *)(param_1 + 0x30);
    *(undefined4 *)(lVar2 + 700) = 0;
    *(uint *)(lVar2 + 0x2b8) = *(uint *)(lVar2 + 8) & 0x40000;
  }
  return 0;
}



// FUNCTION 144d82960 FUN_144d82960 body=37 status=ok
// SIG undefined FUN_144d82960(void)

undefined8 FUN_144d82960(longlong param_1)

{
  FUN_14518f640(param_1 + 0x1b0);
  FUN_14518f040(param_1);
  return 0;
}



// FUNCTION 144d82990 FUN_144d82990 body=26 status=ok
// SIG undefined FUN_144d82990(void)

void FUN_144d82990(void)

{
  FUN_144d83740();
  return;
}



// FUNCTION 144d829d0 FUN_144d829d0 body=2116 status=ok
// SIG undefined FUN_144d829d0(void)

void FUN_144d829d0(ulonglong *param_1,ulonglong param_2,int param_3,ulonglong param_4,int param_5)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ulonglong *puVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  int local_a8;
  ulonglong *local_a0;
  ulonglong local_98;
  undefined4 local_90;
  longlong local_88;
  int local_80;
  int local_7c;
  int local_78;
  uint local_74;
  ulonglong local_70;
  int local_68;
  int local_64;
  int local_60;
  ulonglong *local_58;
  longlong local_50;
  ulonglong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar15 = 0;
  iVar8 = 0;
  local_80 = 0;
  local_a0 = param_1;
  if ((((int)param_1[0x57] == 0) && (param_2 == 0)) && (param_3 == 0)) goto LAB_144d83208;
  local_a8 = 0;
  if (*(int *)((longlong)param_1 + 700) == 0) {
    param_1[0x58] = 0;
    param_1[0x59] = 0;
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    param_1[0x5d] = 0;
    param_1[0x5e] = 0;
    param_1[0x5f] = 0;
    param_1[0x60] = 0;
    param_1[0x61] = 0;
    param_1[0x62] = 0;
    param_1[99] = 0;
    param_1[100] = 0;
    *(undefined4 *)(param_1 + 0x65) = 0;
  }
  iVar2 = (int)param_1[0x57];
  if (iVar2 == 0) {
LAB_144d82aca:
    if ((param_2 == 0) && (param_3 == 0)) {
LAB_144d82ad4:
      local_90 = 0;
    }
    else {
      if (iVar2 == 0) {
        param_1[0x58] = param_2;
        *(int *)(param_1 + 0x61) = param_3;
        *(undefined4 *)((longlong)param_1 + 700) = 1;
      }
LAB_144d82af9:
      local_90 = 1;
      iVar8 = 1;
    }
  }
  else {
    if ((param_2 == 0) && (param_3 == 0)) {
      if (iVar2 == 0) goto LAB_144d82aca;
      goto LAB_144d82af9;
    }
    param_1[(ulonglong)*(uint *)((longlong)param_1 + 700) + 0x58] = param_2;
    *(int *)((longlong)param_1 + (ulonglong)*(uint *)((longlong)param_1 + 700) * 4 + 0x308) =
         param_3;
    *(int *)((longlong)param_1 + 700) = *(int *)((longlong)param_1 + 700) + 1;
    if (*(uint *)((longlong)param_1 + 700) < 10) goto LAB_144d82ad4;
    *(undefined4 *)((longlong)param_1 + 700) = 0;
    iVar8 = -1;
    local_a8 = 8;
    local_90 = 0xffffffff;
  }
  if (iVar8 < 1) goto LAB_144d83208;
  local_7c = (int)param_1[0x1d];
  local_78 = *(int *)((longlong)param_1 + 0xec);
  local_b8 = param_1[0x23];
  local_a8 = FUN_144d83740(param_1[0x58],(int)param_1[0x61],(longlong)param_1 + 0xe4,param_1[0x22]);
  if ((local_a8 == 5) && ((int)local_a0[0x1e] == 0)) {
    local_a8 = 0;
  }
  if ((*(int *)((longlong)local_a0 + 0xf4) == 0) && ((int)local_a0[0x1e] == 0)) {
    local_a8 = 5;
  }
  if ((*(int *)((longlong)local_a0 + 0xec) != local_78) || ((int)local_a0[0x1d] != local_7c)) {
    local_80 = 1;
  }
  if ((local_a8 == 0) && ((int)local_a0[0x1f] != 0)) {
    local_58 = local_a0 + 0x36;
    local_70 = *local_58;
    local_50 = local_70 + 0x1440;
    iVar8 = __intrinsic_setjmp(local_70 + 0x14a0);
    uVar11 = local_70;
    if (iVar8 != 0) {
      FUN_14518f640(local_58);
      memset(local_58,0,0x100);
      FUN_1425b0090();
      goto LAB_144d83208;
    }
    *(undefined4 *)(local_70 + 0x1498) = 1;
    *(int *)(local_70 + 0x3954) = (int)local_a0[0x1b];
    FUN_1451900a0(local_70);
    uVar12 = local_70;
    local_68 = *(int *)(uVar11 + 0x3950);
    if (local_68 != 0) {
      FUN_145190360(local_70,*(undefined4 *)(local_50 + 0x760),*(undefined4 *)(local_50 + 0xc24));
    }
    *(undefined4 *)(local_a0 + 0x1f) = 0;
    *(undefined4 *)(uVar12 + 0x1498) = 0;
  }
  if (local_a8 == 0) {
    if (*(int *)((longlong)local_a0 + 0xf4) == 0) {
      local_40 = (undefined4)local_a0[0x1d];
      local_3c = *(undefined4 *)((longlong)local_a0 + 0xec);
      local_38 = 9;
      local_30 = (undefined4)local_a0[0x1b];
      local_2c = (uint)local_a0[1] & 0x20000;
      if ((*(int *)((longlong)local_a0 + 0xfc) == 0) && ((local_a0[1] & 0x10000) != 0)) {
        *(undefined4 *)(local_a0 + 0x20) = 0xb;
        *(undefined8 *)((longlong)local_a0 + 0x104) = 4;
      }
      local_a8 = FUN_14518f570(local_a0 + 0x36,&local_40);
      if (local_a8 == 0) {
        *(undefined4 *)((longlong)local_a0 + 0xf4) = 1;
      }
      goto LAB_144d82d16;
    }
LAB_144d82d1f:
    *(ulonglong *)(local_a0[0x36] + 0x3a00) = local_a0[0x22];
    *(ulonglong *)(local_a0[0x36] + 0x3a08) = local_a0[0x23];
  }
  else {
LAB_144d82d16:
    if (*(int *)((longlong)local_a0 + 0xf4) != 0) goto LAB_144d82d1f;
  }
  if (local_a8 == 0) {
    uVar11 = local_a0[0x36];
    local_88 = uVar11 + 0x1440;
    local_98 = uVar11;
    if (local_80 != 0) {
      *(int *)(uVar11 + 0x1ba0) = (int)local_a0[0x1d];
      *(undefined4 *)(uVar11 + 0x1ba4) = *(undefined4 *)((longlong)local_a0 + 0xec);
      local_48 = uVar11;
      iVar8 = __intrinsic_setjmp(uVar11 + 0x14a0,auStack_d8);
      lVar1 = local_88;
      if (iVar8 != 0) {
        *(undefined4 *)(local_98 + 0x1498) = 0;
        local_a0[0x1d] = 0;
        FUN_1425b0090();
        goto LAB_144d83208;
      }
      *(undefined4 *)(local_98 + 0x1498) = 1;
      if (*(int *)(local_88 + 0x760) < 1) {
        *(int *)(local_88 + 0x760) = local_7c;
        FUN_144d82810(local_88,7,"Invalid frame width");
      }
      if (*(int *)(lVar1 + 0x764) < 1) {
        *(int *)(local_88 + 0x764) = local_78;
        FUN_144d82810(local_88,7,"Invalid frame height");
      }
      lVar1 = local_88;
      uVar12 = local_98;
      local_64 = *(int *)(local_98 + 0x3950);
      if (local_64 != 0) {
        FUN_145190800(local_98,*(undefined4 *)(local_88 + 0xc24));
      }
      iVar8 = FUN_14518eba0(lVar1,*(undefined4 *)(lVar1 + 0x760),*(undefined4 *)(lVar1 + 0x764));
      if (iVar8 != 0) {
        FUN_144d82810(lVar1,2,"Failed to allocate frame buffers");
      }
      local_74 = 0;
      puVar10 = (undefined8 *)(((longlong)*(int *)(lVar1 + 0xa14) + 0xc) * 0xa0 + lVar1);
      uVar6 = puVar10[1];
      *(undefined8 *)(local_48 + 0xde0) = *puVar10;
      *(undefined8 *)(local_48 + 0xde8) = uVar6;
      uVar6 = puVar10[3];
      *(undefined8 *)(local_48 + 0xdf0) = puVar10[2];
      *(undefined8 *)(local_48 + 0xdf8) = uVar6;
      uVar6 = puVar10[5];
      *(undefined8 *)(local_48 + 0xe00) = puVar10[4];
      *(undefined8 *)(local_48 + 0xe08) = uVar6;
      uVar6 = puVar10[7];
      *(undefined8 *)(local_48 + 0xe10) = puVar10[6];
      *(undefined8 *)(local_48 + 0xe18) = uVar6;
      uVar6 = puVar10[9];
      *(undefined8 *)(local_48 + 0xe20) = puVar10[8];
      *(undefined8 *)(local_48 + 0xe28) = uVar6;
      uVar6 = puVar10[0xb];
      *(undefined8 *)(local_48 + 0xe30) = puVar10[10];
      *(undefined8 *)(local_48 + 0xe38) = uVar6;
      uVar6 = puVar10[0xd];
      *(undefined8 *)(local_48 + 0xe40) = puVar10[0xc];
      *(undefined8 *)(local_48 + 0xe48) = uVar6;
      uVar6 = puVar10[0xf];
      *(undefined8 *)(local_48 + 0xe50) = puVar10[0xe];
      *(undefined8 *)(local_48 + 0xe58) = uVar6;
      uVar6 = puVar10[0x11];
      *(undefined8 *)(local_48 + 0xe60) = puVar10[0x10];
      *(undefined8 *)(local_48 + 0xe68) = uVar6;
      uVar6 = puVar10[0x13];
      *(undefined8 *)(local_48 + 0xe70) = puVar10[0x12];
      *(undefined8 *)(local_48 + 0xe78) = uVar6;
      puVar10 = (undefined8 *)(((longlong)*(int *)(lVar1 + 0xa10) + 0xc) * 0xa0 + lVar1);
      uVar6 = puVar10[1];
      *(undefined8 *)(local_48 + 0xe80) = *puVar10;
      *(undefined8 *)(local_48 + 0xe88) = uVar6;
      uVar6 = puVar10[3];
      *(undefined8 *)(local_48 + 0xe90) = puVar10[2];
      *(undefined8 *)(local_48 + 0xe98) = uVar6;
      uVar6 = puVar10[5];
      *(undefined8 *)(local_48 + 0xea0) = puVar10[4];
      *(undefined8 *)(local_48 + 0xea8) = uVar6;
      uVar6 = puVar10[7];
      *(undefined8 *)(local_48 + 0xeb0) = puVar10[6];
      *(undefined8 *)(local_48 + 0xeb8) = uVar6;
      uVar6 = puVar10[9];
      *(undefined8 *)(local_48 + 0xec0) = puVar10[8];
      *(undefined8 *)(local_48 + 0xec8) = uVar6;
      uVar6 = puVar10[0xb];
      *(undefined8 *)(local_48 + 0xed0) = puVar10[10];
      *(undefined8 *)(local_48 + 0xed8) = uVar6;
      uVar6 = puVar10[0xd];
      *(undefined8 *)(local_48 + 0xee0) = puVar10[0xc];
      *(undefined8 *)(local_48 + 0xee8) = uVar6;
      uVar6 = puVar10[0xf];
      *(undefined8 *)(local_48 + 0xef0) = puVar10[0xe];
      *(undefined8 *)(local_48 + 0xef8) = uVar6;
      uVar3 = *(undefined4 *)((longlong)puVar10 + 0x84);
      uVar4 = *(undefined4 *)(puVar10 + 0x11);
      uVar5 = *(undefined4 *)((longlong)puVar10 + 0x8c);
      *(undefined4 *)(local_48 + 0xf00) = *(undefined4 *)(puVar10 + 0x10);
      *(undefined4 *)(local_48 + 0xf04) = uVar3;
      *(undefined4 *)(local_48 + 0xf08) = uVar4;
      *(undefined4 *)(local_48 + 0xf0c) = uVar5;
      uVar6 = puVar10[0x13];
      *(undefined8 *)(local_48 + 0xf10) = puVar10[0x12];
      *(undefined8 *)(local_48 + 0xf18) = uVar6;
      uVar11 = uVar15;
      uVar9 = local_74;
      if (0 < *(int *)(uVar12 + 0x3960)) {
        do {
          lVar14 = (longlong)(int)uVar11 * 0x1420;
          puVar13 = (undefined8 *)(*(longlong *)(uVar12 + 0x39b0) + 0xe80 + lVar14);
          puVar10 = (undefined8 *)(((longlong)*(int *)(lVar1 + 0xa10) + 0xc) * 0xa0 + lVar1);
          uVar6 = puVar10[1];
          *puVar13 = *puVar10;
          puVar13[1] = uVar6;
          uVar6 = puVar10[3];
          puVar13[2] = puVar10[2];
          puVar13[3] = uVar6;
          uVar6 = puVar10[5];
          puVar13[4] = puVar10[4];
          puVar13[5] = uVar6;
          uVar6 = puVar10[7];
          puVar13[6] = puVar10[6];
          puVar13[7] = uVar6;
          uVar6 = puVar10[9];
          puVar13[8] = puVar10[8];
          puVar13[9] = uVar6;
          uVar6 = puVar10[0xb];
          puVar13[10] = puVar10[10];
          puVar13[0xb] = uVar6;
          uVar6 = puVar10[0xd];
          puVar13[0xc] = puVar10[0xc];
          puVar13[0xd] = uVar6;
          uVar6 = puVar10[0xf];
          puVar13[0xe] = puVar10[0xe];
          puVar13[0xf] = uVar6;
          uVar3 = *(undefined4 *)((longlong)puVar10 + 0x84);
          uVar4 = *(undefined4 *)(puVar10 + 0x11);
          uVar5 = *(undefined4 *)((longlong)puVar10 + 0x8c);
          *(undefined4 *)(puVar13 + 0x10) = *(undefined4 *)(puVar10 + 0x10);
          *(undefined4 *)((longlong)puVar13 + 0x84) = uVar3;
          *(undefined4 *)(puVar13 + 0x11) = uVar4;
          *(undefined4 *)((longlong)puVar13 + 0x8c) = uVar5;
          uVar3 = *(undefined4 *)((longlong)puVar10 + 0x94);
          uVar4 = *(undefined4 *)(puVar10 + 0x13);
          uVar5 = *(undefined4 *)((longlong)puVar10 + 0x9c);
          *(undefined4 *)(puVar13 + 0x12) = *(undefined4 *)(puVar10 + 0x12);
          *(undefined4 *)((longlong)puVar13 + 0x94) = uVar3;
          *(undefined4 *)(puVar13 + 0x13) = uVar4;
          *(undefined4 *)((longlong)puVar13 + 0x9c) = uVar5;
          FUN_14518e770(*(longlong *)(uVar12 + 0x39b0) + lVar14);
          uVar9 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar9;
        } while ((int)uVar9 < *(int *)(uVar12 + 0x3960));
      }
      local_74 = uVar9;
      FUN_14518e770(uVar12);
      uVar11 = local_98;
      local_60 = *(int *)(uVar12 + 0x3950);
      if (local_60 != 0) {
        FUN_145190360(local_98,*(undefined4 *)(local_88 + 0x760),0);
      }
      *(undefined4 *)(uVar11 + 0x1498) = 0;
      *(undefined4 *)(uVar11 + 0x1e40) = 0;
    }
    iVar8 = __intrinsic_setjmp(uVar11 + 0x14a0,auStack_d8);
    uVar11 = local_98;
    puVar7 = local_a0;
    if (iVar8 == 0) {
      *(undefined4 *)(local_98 + 0x1498) = 1;
      uVar12 = local_a0[0x58];
      *(ulonglong *)(local_98 + 0x38d8) = local_a0[0x57];
      *(ulonglong *)(local_98 + 0x38e0) = uVar12;
      uVar12 = local_a0[0x5a];
      *(ulonglong *)(local_98 + 0x38e8) = local_a0[0x59];
      *(ulonglong *)(local_98 + 0x38f0) = uVar12;
      uVar12 = local_a0[0x5c];
      *(ulonglong *)(local_98 + 0x38f8) = local_a0[0x5b];
      *(ulonglong *)(local_98 + 0x3900) = uVar12;
      uVar12 = local_a0[0x5e];
      *(ulonglong *)(local_98 + 0x3908) = local_a0[0x5d];
      *(ulonglong *)(local_98 + 0x3910) = uVar12;
      uVar12 = local_a0[0x60];
      *(ulonglong *)(&DAT_00003918 + local_98) = local_a0[0x5f];
      *(ulonglong *)(local_98 + 0x3920) = uVar12;
      uVar12 = local_a0[0x62];
      *(ulonglong *)(local_98 + 0x3928) = local_a0[0x61];
      *(ulonglong *)(local_98 + 0x3930) = uVar12;
      uVar3 = *(undefined4 *)((longlong)local_a0 + 0x31c);
      uVar12 = local_a0[100];
      uVar4 = *(undefined4 *)((longlong)local_a0 + 0x324);
      *(int *)(local_98 + 0x3938) = (int)local_a0[99];
      *(undefined4 *)(local_98 + 0x393c) = uVar3;
      *(int *)(local_98 + 0x3940) = (int)uVar12;
      *(undefined4 *)(local_98 + 0x3944) = uVar4;
      *(ulonglong *)(local_98 + 0x3948) = local_a0[0x65];
      *(undefined4 *)(local_98 + 0x3a10) = 0;
      local_a0[0x56] = param_4;
      iVar8 = FUN_14518f060(local_98,(longlong)param_5);
      if ((iVar8 != 0) && (local_a8 = *(int *)(uVar11 + 0x1440), local_a8 != 0)) {
        uVar12 = uVar11 + 0x1448;
        if (*(int *)(uVar11 + 0x1444) == 0) {
          uVar12 = uVar15;
        }
        *puVar7 = uVar12;
      }
      *(undefined4 *)((longlong)puVar7 + 700) = 0;
    }
    else {
      FUN_1425b0090();
      *(undefined4 *)((longlong)*(int *)(local_88 + 0xa14) * 0xa0 + 0x814 + local_88) = 1;
      lVar1 = local_88 + (longlong)*(int *)(local_88 + 0xa10) * 4;
      iVar8 = *(int *)(lVar1 + 0xa00);
      if (0 < iVar8) {
        *(int *)(lVar1 + 0xa00) = iVar8 + -1;
      }
      *(undefined4 *)(local_88 + 0x58) = 0;
      if (*(int *)(local_98 + 0x3a10) != 0) {
        local_a0[0x1d] = 0;
        *(undefined4 *)(local_a0 + 0x1f) = 1;
      }
      local_a8 = *(int *)(local_98 + 0x1440);
      if (local_a8 != 0) {
        uVar11 = local_98 + 0x1448;
        if (*(int *)(local_98 + 0x1444) == 0) {
          uVar11 = uVar15;
        }
        *local_a0 = uVar11;
      }
    }
  }
LAB_144d83208:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_d8);
}



// FUNCTION 144d83230 FUN_144d83230 body=377 status=ok
// SIG undefined FUN_144d83230(void)

void FUN_144d83230(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  int local_d4;
  undefined4 local_c8;
  undefined4 local_b4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 local_38;
  ulonglong uStack_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((*param_2 == 0) && (*(longlong *)(param_1 + 0x1b0) != 0)) {
    local_e0 = 0;
    local_e8 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    local_20 = 0;
    if ((*(uint *)(param_1 + 8) & 0x10000) != 0) {
      local_38 = *(undefined8 *)(param_1 + 0x100);
      uStack_30 = (ulonglong)*(uint *)(param_1 + 0x108);
    }
    local_f8 = &local_38;
    iVar1 = FUN_14518f2d0(*(longlong *)(param_1 + 0x1b0),&local_d8,&local_e0,&local_e8);
    if (iVar1 == 0) {
      *(int *)(param_1 + 0x144) = local_d4;
      *(int *)(param_1 + 0x13c) = local_d4;
      *(undefined4 *)(param_1 + 0x120) = 0x102;
      *(uint *)(param_1 + 0x130) = local_d4 + 0x4fU & 0xfffffff0;
      *(undefined4 *)(param_1 + 0x140) = local_d8;
      *(undefined4 *)(param_1 + 0x138) = local_d8;
      *(undefined8 *)(param_1 + 0x150) = local_a0;
      *(undefined8 *)(param_1 + 0x158) = local_98;
      *(undefined4 *)(param_1 + 0x174) = local_b4;
      *(undefined4 *)(param_1 + 0x178) = local_b4;
      *(undefined8 *)(param_1 + 0x160) = local_90;
      *(undefined4 *)(param_1 + 300) = local_c8;
      *(undefined4 *)(param_1 + 0x148) = 1;
      *(undefined4 *)(param_1 + 0x14c) = 1;
      *(undefined8 *)(param_1 + 0x168) = 0;
      *(undefined4 *)(param_1 + 0x170) = local_c8;
      *(undefined4 *)(param_1 + 0x17c) = local_c8;
      *(undefined4 *)(param_1 + 0x134) = 8;
      *(undefined4 *)(param_1 + 0x180) = 0xc;
      *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_1 + 0x2b0);
      *(undefined8 *)(param_1 + 400) = local_80;
      *(undefined8 *)(param_1 + 0x198) = 0;
      *param_2 = param_1 + 0x120;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_118);
}



// FUNCTION 144d833c0 FUN_144d833c0 body=182 status=ok
// SIG undefined FUN_144d833c0(void)

undefined8 FUN_144d833c0(longlong param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  undefined4 local_84;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  uint local_40;
  
  puVar1 = (undefined4 *)*param_2;
  if (puVar1 != (undefined4 *)0x0) {
    local_a4 = puVar1[9];
    local_a8 = puVar1[8];
    local_98 = puVar1[0x16];
    local_70 = *(undefined8 *)(puVar1 + 0xe);
    local_68 = *(undefined8 *)(puVar1 + 0x10);
    local_90 = local_a4 + 1U >> 1;
    local_60 = *(undefined8 *)(puVar1 + 0x12);
    local_40 = (uint)(local_98 - local_a8) >> 1;
    local_94 = local_a8 + 1U >> 1;
    local_84 = puVar1[0x17];
    local_a0 = local_a8;
    local_9c = local_a4;
    local_8c = local_94;
    local_88 = local_90;
    uVar2 = FUN_14518f450(*(undefined8 *)(param_1 + 0x1b0),*puVar1,&local_a8);
    return uVar2;
  }
  return 8;
}



// FUNCTION 144d83480 FUN_144d83480 body=182 status=ok
// SIG undefined FUN_144d83480(void)

undefined8 FUN_144d83480(longlong param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  undefined4 local_84;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  uint local_40;
  
  puVar1 = (undefined4 *)*param_2;
  if (puVar1 != (undefined4 *)0x0) {
    local_a4 = puVar1[9];
    local_a8 = puVar1[8];
    local_98 = puVar1[0x16];
    local_70 = *(undefined8 *)(puVar1 + 0xe);
    local_68 = *(undefined8 *)(puVar1 + 0x10);
    local_90 = local_a4 + 1U >> 1;
    local_60 = *(undefined8 *)(puVar1 + 0x12);
    local_40 = (uint)(local_98 - local_a8) >> 1;
    local_94 = local_a8 + 1U >> 1;
    local_84 = puVar1[0x17];
    local_a0 = local_a8;
    local_9c = local_a4;
    local_8c = local_94;
    local_88 = local_90;
    uVar2 = FUN_14518f3a0(*(undefined8 *)(param_1 + 0x1b0),*puVar1,&local_a8);
    return uVar2;
  }
  return 8;
}



// FUNCTION 144d83540 FUN_144d83540 body=59 status=ok
// SIG undefined FUN_144d83540(void)

undefined4 FUN_144d83540(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)*param_2;
  if (puVar1 == (undefined4 *)0x0) {
    return 8;
  }
  if (*(longlong *)(param_1 + 0x1b0) == 0) {
    return 7;
  }
  uVar2 = FUN_14518f560();
  *puVar1 = uVar2;
  return 0;
}



// FUNCTION 144d83600 FUN_144d83600 body=172 status=ok
// SIG undefined FUN_144d83600(void)

undefined8 FUN_144d83600(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  puVar1 = (uint *)*param_2;
  if (puVar1 == (uint *)0x0) {
    return 8;
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x1b0) + 0x1440;
    iVar2 = FUN_14518f340(lVar5,3);
    iVar3 = FUN_14518f340(lVar5,2);
    iVar4 = FUN_14518f340(lVar5,1);
    *puVar1 = (uint)(iVar4 != 0) | -(uint)(iVar3 != 0) & 2 | -(uint)(iVar2 != 0) & 4;
    return 0;
  }
  return 7;
}



// FUNCTION 144d83730 FUN_144d83730 body=8 status=ok
// SIG undefined FUN_144d83730(void)

undefined ** FUN_144d83730(void)

{
  return &PTR_s_WebM_Project_VP8_Decoder_v1_13_1_1499d6f20;
}



// FUNCTION 144d83740 FUN_144d83740 body=222 status=ok
// SIG undefined FUN_144d83740(void)

void FUN_144d83740(byte *param_1,uint param_2,longlong param_3,code *param_4,undefined8 param_5)

{
  ulonglong uVar1;
  undefined1 auStack_58 [32];
  byte local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 < param_1 + param_2) {
    if (param_4 != (code *)0x0) {
      uVar1 = 10;
      if (param_2 < 0xb) {
        uVar1 = (ulonglong)param_2;
      }
      (*param_4)(param_5,param_1,local_38,uVar1);
      param_1 = local_38;
    }
    *(undefined4 *)(param_3 + 0xc) = 0;
    if ((((9 < param_2) && ((*param_1 & 1) == 0)) &&
        (*(undefined4 *)(param_3 + 0xc) = 1, param_1[3] == 0x9d)) &&
       ((param_1[4] == 1 && (param_1[5] == 0x2a)))) {
      *(uint *)(param_3 + 4) = *(ushort *)(param_1 + 6) & 0x3fff;
      *(uint *)(param_3 + 8) = *(ushort *)(param_1 + 8) & 0x3fff;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 144d83830 FUN_144d83830 body=120 status=ok
// SIG undefined FUN_144d83830(void)

undefined4 FUN_144d83830(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar2 = FUN_14518efb0(1,0x200);
    if (lVar2 == 0) {
      return 2;
    }
    *(longlong *)(param_1 + 0x30) = lVar2;
    *(undefined4 *)(lVar2 + 8) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(lVar2 + 0xe4) = 0x10;
    *(undefined4 *)(lVar2 + 0x1b4) = 0;
    puVar1 = *(undefined8 **)(param_1 + 0x28);
    if (puVar1 != (undefined8 *)0x0) {
      *(undefined8 *)(lVar2 + 0xd8) = *puVar1;
      *(undefined4 *)(lVar2 + 0xe0) = *(undefined4 *)(puVar1 + 1);
      *(undefined8 **)(param_1 + 0x28) = (undefined8 *)(lVar2 + 0xd8);
    }
  }
  return 0;
}



// FUNCTION 144d838b0 FUN_144d838b0 body=90 status=ok
// SIG undefined FUN_144d838b0(void)

undefined8 FUN_144d838b0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_14519c9a0();
  }
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    FUN_145192550();
    FUN_1451927d0(*(longlong *)(param_1 + 0x1d0) + 0xa98);
  }
  FUN_14518f040(*(undefined8 *)(param_1 + 0x1d0));
  FUN_14518f040(param_1);
  return 0;
}



// FUNCTION 144d83910 FUN_144d83910 body=29 status=ok
// SIG undefined FUN_144d83910(void)

void FUN_144d83910(void)

{
  FUN_144d842f0();
  return;
}



// FUNCTION 144d83950 FUN_144d83950 body=962 status=ok
// SIG undefined FUN_144d83950(void)

void FUN_144d83950(undefined8 *param_1,char *param_2,uint param_3,undefined8 param_4,int param_5)

{
  uint uVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  char *pcVar8;
  longlong *plVar9;
  uint *puVar10;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 local_80;
  char local_78 [4];
  int local_74;
  char *local_70;
  char *local_68;
  uint local_60 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = param_2;
  if ((param_2 == (char *)0x0) && (param_3 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0x1b4) = 1;
    goto LAB_144d83d05;
  }
  iVar7 = 0;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0;
  if (param_1[0x1f] == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1bc) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x39) = 1;
    lVar5 = FUN_14518efb0(1,0xaa8);
    param_1[0x3a] = lVar5;
    if (lVar5 == 0) goto LAB_144d83d05;
    lVar5 = FUN_14519c740(lVar5);
    param_1[0x1f] = lVar5;
    if (lVar5 == 0) {
      *param_1 = "Failed to allocate decoder";
      goto LAB_144d83d05;
    }
    *(undefined4 *)(lVar5 + 0x4f80) = *(undefined4 *)(param_1 + 0x1b);
    *(undefined4 *)(param_1[0x1f] + 0x4f84) = *(undefined4 *)(param_1 + 0x37);
    if (1 < *(uint *)(param_1 + 0x3f)) {
      *param_1 = "row_mt out of range [0..1]";
      goto LAB_144d83d05;
    }
    *(uint *)(param_1[0x1f] + 0x4f90) = *(uint *)(param_1 + 0x3f);
    if (1 < *(uint *)((longlong)param_1 + 0x1fc)) {
      *param_1 = "lpf_opt out of range [0..1]";
      goto LAB_144d83d05;
    }
    *(uint *)(param_1[0x1f] + 0x4f94) = *(uint *)((longlong)param_1 + 0x1fc);
    if ((*(int *)(param_1 + 0x21) == 0) && ((*(uint *)(param_1 + 1) & 0x10000) != 0)) {
      *(undefined4 *)((longlong)param_1 + 0x10c) = 3;
      param_1[0x22] = 4;
    }
    lVar5 = param_1[0x1f];
    plVar2 = *(longlong **)(lVar5 + 0x48a0);
    *(undefined4 *)(lVar5 + 0x688) = 0xffffffff;
    *(undefined4 *)(lVar5 + 0x4898) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(lVar5 + 0x489c) = *(undefined4 *)((longlong)param_1 + 0x1c4);
    if ((param_1[0x3c] == 0) || (param_1[0x3d] == 0)) {
      plVar2[1] = (longlong)FUN_145192850;
      plVar9 = plVar2 + 0x153;
      plVar2[2] = (longlong)&LAB_145192940;
      iVar4 = FUN_145192720(plVar9);
      if (iVar4 == 0) goto LAB_144d83b1f;
      bVar3 = true;
      FUN_144d82810(lVar5 + 0x290,2,"Failed to initialize internal frame buffers");
    }
    else {
      plVar2[1] = param_1[0x3c];
      plVar2[2] = param_1[0x3d];
      plVar9 = (longlong *)param_1[0x3b];
LAB_144d83b1f:
      *plVar2 = (longlong)plVar9;
      bVar3 = false;
    }
    if (bVar3) goto LAB_144d83d05;
  }
  local_80 = param_1[0x24];
  local_88 = param_1[0x23];
  iVar4 = FUN_14519c5d0(param_2,(ulonglong)param_3,local_60,&local_74);
  if (iVar4 == 0) {
    if ((*(int *)(param_1 + 0x3e) != 0) && (*(int *)((longlong)param_1 + 500) < local_74 + -1)) {
      local_74 = *(int *)((longlong)param_1 + 500) + 1;
    }
    pcVar8 = param_2 + param_3;
    if (local_74 < 1) {
      if (local_70 < pcVar8) {
        do {
          local_88 = (longlong)param_5;
          iVar7 = FUN_144d84510(param_1,&local_70,(int)pcVar8 - (int)local_70,param_4);
          if ((iVar7 != 0) || (pcVar8 <= local_70)) break;
          do {
            if ((code *)param_1[0x23] == (code *)0x0) {
              cVar6 = *local_70;
            }
            else {
              (*(code *)param_1[0x23])(param_1[0x24],local_70,local_78,1);
              cVar6 = local_78[0];
            }
          } while ((cVar6 == '\0') && (local_70 = local_70 + 1, local_70 < pcVar8));
        } while (local_70 < pcVar8);
      }
    }
    else {
      puVar10 = local_60;
      do {
        local_68 = local_70;
        if (local_70 < param_2) {
LAB_144d83c38:
          *param_1 = "Invalid frame size in index";
          break;
        }
        uVar1 = *puVar10;
        if ((uint)((int)pcVar8 - (int)local_70) < uVar1) goto LAB_144d83c38;
        local_88 = (longlong)param_5;
        iVar4 = FUN_144d84510(param_1,&local_68,uVar1,param_4);
        if (iVar4 != 0) break;
        iVar7 = iVar7 + 1;
        local_70 = local_70 + uVar1;
        puVar10 = puVar10 + 1;
      } while (iVar7 < local_74);
    }
  }
LAB_144d83d05:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_a8);
}



// FUNCTION 144d83d30 FUN_144d83d30 body=255 status=ok
// SIG undefined FUN_144d83d30(void)

void FUN_144d83d30(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [160];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    local_28 = 0;
    local_20 = 0;
    if ((*(uint *)(param_1 + 8) & 0x10000) != 0) {
      local_28 = *(undefined8 *)(param_1 + 0x10c);
      local_20 = *(undefined4 *)(param_1 + 0x114);
    }
    iVar3 = FUN_14519c3b0(*(longlong *)(param_1 + 0xf8),local_c8,&local_28);
    if (iVar3 == 0) {
      lVar1 = *(longlong *)(param_1 + 0xf8);
      lVar2 = *(longlong *)(lVar1 + 0x48a0);
      *(undefined4 *)(param_1 + 0x1bc) = *(undefined4 *)(lVar1 + 0x688);
      if (*(int *)(param_1 + 0x1c8) == 0) {
        FUN_14519d4b0(param_1 + 0x128,local_c8,*(undefined8 *)(param_1 + 0x100));
        *(undefined8 *)(param_1 + 0x1a8) =
             *(undefined8 *)((longlong)*(int *)(lVar1 + 0x688) * 0xe0 + 0x50 + lVar2);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_e8);
}



// FUNCTION 144d83e90 FUN_144d83e90 body=137 status=ok
// SIG undefined FUN_144d83e90(void)

undefined8 FUN_144d83e90(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 local_a8 [160];
  
  piVar2 = (int *)*param_2;
  if (piVar2 == (int *)0x0) {
    return 8;
  }
  FUN_14519d600(piVar2 + 2,local_a8);
  iVar1 = *piVar2;
  if (iVar1 != 1) {
    if (iVar1 == 2) {
      uVar3 = 2;
      goto LAB_144d83eda;
    }
    if (iVar1 == 4) {
      uVar3 = 4;
      goto LAB_144d83eda;
    }
  }
  uVar3 = 1;
LAB_144d83eda:
  uVar3 = FUN_14519c500(*(longlong *)(param_1 + 0xf8) + 0x290,uVar3,local_a8);
  return uVar3;
}



// FUNCTION 144d83f20 FUN_144d83f20 body=96 status=ok
// SIG undefined FUN_144d83f20(void)

undefined8 FUN_144d83f20(longlong param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined1 local_a8 [160];
  
  puVar1 = (undefined4 *)*param_2;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_14519d600(puVar1 + 2,local_a8);
    uVar2 = FUN_14519c450(*(undefined8 *)(param_1 + 0xf8),*puVar1,local_a8);
    return uVar2;
  }
  return 8;
}



// FUNCTION 144d83f80 FUN_144d83f80 body=107 status=ok
// SIG undefined FUN_144d83f80(void)

undefined8 FUN_144d83f80(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (*param_2 == 0) {
    return 8;
  }
  lVar1 = *(longlong *)(param_1 + 0xf8);
  if ((((lVar1 != 0) && (*(uint *)(lVar1 + 0x68c) < 0xc)) && (*(int *)(lVar1 + 0x290) == 0)) &&
     (lVar1 = *(longlong *)(lVar1 + 0x48a0) + 0x58 + (longlong)(int)*(uint *)(lVar1 + 0x68c) * 0xe0,
     lVar1 != 0)) {
    FUN_14519d4b0(*param_2 + 8,lVar1,0);
    return 0;
  }
  return 1;
}



// FUNCTION 144d84260 FUN_144d84260 body=8 status=ok
// SIG undefined FUN_144d84260(void)

undefined ** FUN_144d84260(void)

{
  return &PTR_s_WebM_Project_VP9_Decoder_v1_13_1_1499d7150;
}



// FUNCTION 144d84270 FUN_144d84270 body=126 status=ok
// SIG undefined FUN_144d84270(void)

undefined8 FUN_144d84270(int param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  plVar1 = (longlong *)(param_2 + 0x10);
  if (1 < param_1) {
    *plVar1 = *plVar1 + 1;
  }
  iVar3 = FUN_145191fe0(param_2,3);
  if (iVar3 == 7) {
    if ((param_1 - 1U & 0xfffffffd) != 0) {
      return 0;
    }
    *plVar1 = *plVar1 + 1;
  }
  else {
    lVar2 = *plVar1;
    *plVar1 = lVar2 + 1;
    if ((param_1 - 1U & 0xfffffffd) == 0) {
      *plVar1 = lVar2 + 4;
      return 1;
    }
  }
  return 1;
}



// FUNCTION 144d842f0 FUN_144d842f0 body=528 status=ok
// SIG undefined FUN_144d842f0(void)

void FUN_144d842f0(undefined1 *param_1,uint param_2,longlong param_3,int *param_4,code *param_5,
                  undefined8 param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  undefined1 *local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  int local_70;
  int *local_68;
  undefined1 local_60 [16];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar4 = 0;
  local_68 = param_4;
  if (param_1 + param_2 <= param_1) goto LAB_144d84472;
  *(undefined8 *)(param_3 + 8) = 0;
  *(undefined4 *)(param_3 + 4) = 0;
  uVar1 = param_2;
  if (param_5 != (code *)0x0) {
    uVar1 = 0xb;
    if (param_2 < 0xc) {
      uVar1 = param_2;
    }
    (*param_5)(param_6,param_1,local_60,uVar1);
    param_1 = local_60;
  }
  if (uVar1 == 0) goto LAB_144d84472;
  lVar5 = 2;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_90 = param_1 + uVar1;
  local_98 = param_1;
  iVar2 = FUN_145191fe0(&local_98,2);
  iVar3 = FUN_145192dc0(&local_98);
  if ((iVar2 != 2) || (3 < iVar3)) goto LAB_144d84472;
  iVar2 = FUN_145191f80(&local_98);
  if (iVar2 != 0) {
    if ((iVar3 < 3) || (1 < uVar1)) {
      FUN_145191fe0(&local_98,3);
    }
    goto LAB_144d84472;
  }
  if (uVar1 < 10) goto LAB_144d84472;
  iVar2 = FUN_145191f80(&local_98);
  *(uint *)(param_3 + 0xc) = (uint)(iVar2 == 0);
  local_70 = FUN_145191f80(&local_98);
  iVar2 = FUN_145191f80(&local_98);
  if (*(int *)(param_3 + 0xc) == 0) {
    if (local_70 == 0) {
      iVar4 = FUN_145191f80(&local_98);
      if (iVar2 != 0) {
        lVar5 = 0;
      }
      local_88 = local_88 + lVar5;
      if (iVar4 != 0) {
        iVar2 = FUN_145192d20(&local_98);
        if ((iVar2 == 0) ||
           ((0 < iVar3 && ((iVar2 = FUN_144d84270(iVar3,&local_98), iVar2 == 0 || (uVar1 < 0xb))))))
        goto LAB_144d84472;
        local_88 = local_88 + 8;
        goto LAB_144d844ea;
      }
    }
  }
  else {
    iVar2 = FUN_145192d20(&local_98);
    if ((iVar2 == 0) || (iVar2 = FUN_144d84270(iVar3,&local_98), iVar2 == 0)) goto LAB_144d84472;
LAB_144d844ea:
    FUN_145192d70(&local_98,param_3 + 4,param_3 + 8);
  }
  if (local_68 != (int *)0x0) {
    *local_68 = iVar4;
  }
LAB_144d84472:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_b8);
}



// FUNCTION 144d84510 FUN_144d84510 body=364 status=ok
// SIG undefined FUN_144d84510(void)

ulonglong FUN_144d84510(longlong *param_1,undefined8 *param_2,undefined4 param_3,longlong param_4)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int local_res8 [2];
  
  if (*(int *)((longlong)param_1 + 0xec) == 0) {
    local_res8[0] = 0;
    uVar3 = FUN_144d842f0(*param_2,param_3,(longlong)param_1 + 0xe4,local_res8,param_1[0x23],
                          param_1[0x24]);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    if (((int)param_1[0x1e] == 0) && (local_res8[0] == 0)) {
      return 1;
    }
  }
  param_1[0x20] = param_4;
  *(longlong *)(param_1[0x1f] + 0x4f70) = param_1[0x23];
  *(longlong *)(param_1[0x1f] + 0x4f78) = param_1[0x24];
  iVar2 = FUN_14519be20(param_1[0x1f],param_3,param_2);
  if (iVar2 == 0) {
    if ((((int)param_1[0x39] == 1) && (lVar1 = param_1[0x1f], *(int *)(lVar1 + 0x4f88) == 0)) &&
       ((*(char *)(lVar1 + 0x6a4) != '\0' || (*(int *)(lVar1 + 0x694) == 0)))) {
      *(undefined4 *)(param_1 + 0x39) = 0;
    }
    uVar3 = 0;
  }
  else {
    *(undefined4 *)(*(longlong *)(param_1[0x1f] + 0x48c8) + 0xd4) = 1;
    *(undefined4 *)(param_1[0x1f] + 0x4f88) = 1;
    lVar1 = param_1[0x1f];
    *(undefined4 *)(param_1 + 0x39) = 1;
    if (*(int *)(lVar1 + 0x290) != 0) {
      lVar4 = lVar1 + 0x298;
      if (*(int *)(lVar1 + 0x294) == 0) {
        lVar4 = 0;
      }
      *param_1 = lVar4;
    }
    uVar3 = (ulonglong)*(uint *)(lVar1 + 0x290);
  }
  return uVar3;
}



// FUNCTION 144d84680 FUN_144d84680 body=225 status=ok
// SIG undefined FUN_144d84680(void)

longlong FUN_144d84680(longlong *param_1,longlong param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  byte local_res8 [8];
  longlong local_res20;
  longlong local_18 [2];
  
  if ((param_1 != (longlong *)0x0) && (-1 < param_2)) {
    iVar2 = (**(code **)(*param_1 + 8))(param_1,local_18,&local_res20);
    if (-1 < iVar2) {
      if ((local_18[0] < 0) || (local_res20 <= local_18[0])) {
        *param_3 = 1;
        if (local_res20 <= param_2) {
          return param_2;
        }
        iVar2 = (**(code **)*param_1)(param_1,param_2,1,local_res8);
        if (iVar2 != 0) {
          return (longlong)iVar2;
        }
        if (local_res8[0] != 0) {
          bVar1 = 0x80;
          if (-1 < (char)local_res8[0]) {
            do {
              *param_3 = *param_3 + 1;
              bVar1 = bVar1 >> 1;
            } while ((local_res8[0] & bVar1) == 0);
          }
          return 0;
        }
      }
    }
  }
  return -2;
}



// FUNCTION 144d84770 FUN_144d84770 body=258 status=ok
// SIG undefined FUN_144d84770(void)

ulonglong FUN_144d84770(undefined8 *param_1,longlong param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  byte local_res8 [8];
  
  if ((param_1 != (undefined8 *)0x0) && (-1 < param_2)) {
    *param_3 = 1;
    iVar2 = (**(code **)*param_1)(param_1,param_2,1,local_res8);
    if (iVar2 < 0) {
      return (longlong)iVar2;
    }
    if (0 < iVar2) {
      return 0xfffffffffffffffd;
    }
    if (local_res8[0] != 0) {
      bVar1 = 0x80;
      if (-1 < (char)local_res8[0]) {
        do {
          *param_3 = *param_3 + 1;
          bVar1 = bVar1 >> 1;
        } while ((local_res8[0] & bVar1) == 0);
      }
      iVar2 = 1;
      uVar4 = (longlong)(int)~(uint)bVar1 & (ulonglong)local_res8[0];
      if (1 < *param_3) {
        do {
          param_2 = param_2 + 1;
          iVar3 = (**(code **)*param_1)(param_1,param_2,1,local_res8);
          if (iVar3 < 0) {
            *param_3 = 1;
            return (longlong)iVar3;
          }
          if (0 < iVar3) {
            *param_3 = 1;
            return 0xfffffffffffffffd;
          }
          iVar2 = iVar2 + 1;
          uVar4 = uVar4 << 8 | (ulonglong)local_res8[0];
        } while (iVar2 < *param_3);
      }
      return uVar4;
    }
  }
  return 0xfffffffffffffffe;
}



// FUNCTION 144d84880 FUN_144d84880 body=260 status=ok
// SIG undefined FUN_144d84880(void)

ulonglong FUN_144d84880(undefined8 *param_1,longlong param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  byte local_res8 [8];
  
  if ((param_1 != (undefined8 *)0x0) && (-1 < param_2)) {
    local_res8[0] = 0;
    iVar1 = (**(code **)*param_1)(param_1,param_2,1,local_res8);
    if (-1 < iVar1) {
      if (0 < iVar1) {
        return 0xfffffffffffffffd;
      }
      if (local_res8[0] != 0) {
        iVar1 = 0;
        do {
          if (((uint)local_res8[0] & 0x80 >> ((byte)iVar1 & 0x1f)) != 0) {
            iVar1 = iVar1 + 1;
            iVar4 = 1;
            uVar3 = (ulonglong)local_res8[0];
            if (1 < iVar1) {
              do {
                iVar2 = (**(code **)*param_1)(param_1,iVar4 + param_2,1,local_res8);
                if (iVar2 < 0) {
                  return 0xfffffffffffffffe;
                }
                if (0 < iVar2) {
                  return 0xfffffffffffffffd;
                }
                iVar4 = iVar4 + 1;
                uVar3 = uVar3 << 8 | (ulonglong)local_res8[0];
              } while (iVar4 < iVar1);
            }
            *param_3 = iVar1;
            return uVar3;
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < 4);
      }
    }
  }
  return 0xfffffffffffffffe;
}



// FUNCTION 144d84990 FUN_144d84990 body=155 status=ok
// SIG undefined FUN_144d84990(void)

ulonglong FUN_144d84990(undefined8 *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  byte local_res8 [8];
  
  if (((param_1 != (undefined8 *)0x0) && (-1 < param_2)) && (param_3 - 1U < 8)) {
    uVar2 = 0;
    uVar3 = uVar2;
    if (0 < param_3) {
      do {
        iVar1 = (**(code **)*param_1)(param_1,param_2,1,local_res8);
        if (iVar1 < 0) {
          return (longlong)iVar1;
        }
        param_2 = param_2 + 1;
        uVar3 = uVar3 + 1;
        uVar2 = uVar2 << 8 | (ulonglong)local_res8[0];
      } while ((longlong)uVar3 < param_3);
    }
    return uVar2;
  }
  return 0xfffffffffffffffe;
}



// FUNCTION 144d84a30 FUN_144d84a30 body=255 status=ok
// SIG undefined FUN_144d84a30(void)

void FUN_144d84a30(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4)

{
  byte *pbVar1;
  short sVar2;
  int iVar3;
  float fVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  double local_38;
  byte local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((param_1 != (undefined8 *)0x0) && (-1 < param_2)) &&
      ((param_3 - 4U & 0xfffffffffffffffb) == 0)) &&
     (iVar3 = (**(code **)*param_1)(param_1,param_2,param_3,local_30), -1 < iVar3)) {
    lVar5 = 1;
    if ((int)param_3 == 4) {
      fVar4 = (float)(uint)local_30[0];
      do {
        pbVar1 = local_30 + lVar5;
        lVar5 = lVar5 + 1;
        fVar4 = (float)((uint)*pbVar1 | (int)fVar4 << 8);
      } while (lVar5 < 4);
      local_38 = (double)fVar4;
    }
    else {
      local_38 = (double)(ulonglong)local_30[0];
      do {
        pbVar1 = local_30 + lVar5;
        lVar5 = lVar5 + 1;
        local_38 = (double)((ulonglong)*pbVar1 | (longlong)local_38 << 8);
      } while (lVar5 < 8);
    }
    *param_4 = local_38;
    sVar2 = _dtest(&local_38);
    if (sVar2 != 1) {
      local_38 = *param_4;
      _dtest(&local_38);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 144d84b40 FUN_144d84b40 body=213 status=ok
// SIG undefined FUN_144d84b40(void)

undefined8 FUN_144d84b40(undefined8 *param_1,longlong param_2,longlong param_3,ulonglong *param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  int iVar3;
  char local_res8 [8];
  byte local_28 [16];
  
  if (((param_1 != (undefined8 *)0x0) && (-1 < param_2)) && (param_3 - 1U < 8)) {
    local_res8[0] = '\0';
    uVar1 = (**(code **)*param_1)(param_1,param_2,1,local_res8);
    if (-1 < (int)uVar1) {
      uVar2 = (ulonglong)local_res8[0];
      iVar3 = 1;
      if (1 < param_3) {
        do {
          param_2 = param_2 + 1;
          uVar1 = (**(code **)*param_1)(param_1,param_2,1,local_28);
          if ((int)uVar1 < 0) {
            return uVar1;
          }
          iVar3 = iVar3 + 1;
          uVar2 = uVar2 << 8 | (ulonglong)local_28[0];
        } while (iVar3 < param_3);
      }
      *param_4 = uVar2;
      uVar1 = 0;
    }
    return uVar1;
  }
  return 0xfffffffe;
}



// FUNCTION 144d84c20 FUN_144d84c20 body=200 status=ok
// SIG undefined FUN_144d84c20(void)

int FUN_144d84c20(undefined8 *param_1,undefined8 param_2,ulonglong param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  
  thunk_FUN_1400020a8(*param_4);
  *param_4 = 0;
  if (param_3 < 0x1312d01) {
    iVar2 = (int)param_3 + 1;
    if ((iVar2 == 0) || (0x80000000 < (ulonglong)(longlong)iVar2)) {
      *param_4 = 0;
    }
    else {
      lVar1 = FUN_148d808d2((longlong)iVar2,&DAT_149c3b839);
      *param_4 = lVar1;
      if (lVar1 != 0) {
        iVar2 = (**(code **)*param_1)(param_1,param_2,param_3 & 0xffffffff,lVar1);
        if (iVar2 == 0) {
          *(undefined1 *)((longlong)(int)param_3 + *param_4) = 0;
          return 0;
        }
        thunk_FUN_1400020a8(*param_4);
        *param_4 = 0;
        return iVar2;
      }
    }
  }
  return -2;
}



// FUNCTION 144d84cf0 FUN_144d84cf0 body=192 status=ok
// SIG undefined FUN_144d84cf0(void)

undefined8
FUN_144d84cf0(undefined8 param_1,longlong *param_2,longlong param_3,longlong *param_4,
             longlong *param_5)

{
  longlong lVar1;
  int local_res18 [2];
  
  if ((param_3 < 0) || (*param_2 < param_3)) {
    lVar1 = FUN_144d84880(param_1,*param_2,local_res18);
    *param_4 = lVar1;
    if (-1 < lVar1) {
      *param_2 = *param_2 + (longlong)local_res18[0];
      if ((param_3 < 0) || (*param_2 < param_3)) {
        lVar1 = FUN_144d84770(param_1,*param_2,local_res18);
        *param_5 = lVar1;
        if (((-1 < lVar1) &&
            ((local_res18[0] - 1U < 8 &&
             ((ulonglong)(*param_2 + (longlong)local_res18[0]) < 0x8000000000000000)))) &&
           ((*param_2 = *param_2 + (longlong)local_res18[0], param_3 < 0 || (*param_2 <= param_3))))
        {
          return 0;
        }
      }
    }
  }
  return 0xfffffffe;
}



// FUNCTION 144d84db0 FUN_144d84db0 body=59 status=ok
// SIG undefined FUN_144d84db0(void)

undefined8 * FUN_144d84db0(undefined8 *param_1)

{
  param_1[4] = 0;
  *param_1 = 1;
  param_1[1] = 1;
  param_1[2] = 4;
  param_1[3] = 8;
  param_1[5] = 1;
  param_1[6] = 1;
  return param_1;
}



// FUNCTION 144d84df0 FUN_144d84df0 body=9 status=ok
// SIG undefined FUN_144d84df0(void)

void FUN_144d84df0(longlong param_1)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_1 + 0x20));
  return;
}



// FUNCTION 144d84e00 FUN_144d84e00 body=834 status=ok
// SIG undefined FUN_144d84e00(void)

longlong FUN_144d84e00(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char local_res10 [8];
  int local_res20;
  undefined4 uStackX_24;
  longlong local_38;
  longlong local_30;
  longlong local_28 [2];
  
  if (param_2 == (longlong *)0x0) {
    return -2;
  }
  iVar2 = (**(code **)(*param_2 + 8))(param_2,&local_30,&local_38);
  if (iVar2 < 0) {
    return (longlong)iVar2;
  }
  *param_3 = 0;
  local_res10[0] = '\0';
  lVar4 = local_38;
  if (0x3ff < local_38) {
    lVar4 = 0x400;
  }
  if (0 < lVar4) {
    do {
      iVar2 = (**(code **)*param_2)(param_2,*param_3,1,local_res10);
      if (iVar2 < 0) goto LAB_144d8509f;
      if (0 < iVar2) goto LAB_144d84efe;
    } while ((local_res10[0] != '\x1a') && (*param_3 = *param_3 + 1, *param_3 < lVar4));
  }
  local_res20 = 0;
  lVar4 = FUN_144d84880(param_2,*param_3,&local_res20);
  if (lVar4 == -3) {
LAB_144d84efe:
    lVar4 = -3;
  }
  else {
    if ((local_res20 == 4) && (lVar4 == 0x1a45dfa3)) {
      *param_3 = *param_3 + 4;
      lVar4 = FUN_144d84680(param_2,*param_3,&local_res20);
      if (-1 < lVar4) {
        if (0 < lVar4) goto LAB_144d84efe;
        lVar4 = (longlong)local_res20;
        if ((local_res20 - 1U < 8) && ((local_30 < 0 || (lVar4 <= local_30 - *param_3)))) {
          if (local_38 - *param_3 < lVar4) {
            return *param_3 + lVar4;
          }
          lVar4 = FUN_144d84770(param_2,*param_3,&local_res20);
          if (lVar4 < 0) {
            return lVar4;
          }
          *param_3 = *param_3 + (longlong)local_res20;
          lVar1 = *param_3;
          if ((local_30 < 0) || (lVar4 <= local_30 - lVar1)) {
            if (local_38 - lVar1 < lVar4) {
              return lVar1 + lVar4;
            }
            lVar1 = lVar1 + lVar4;
            FUN_144d85150(param_1);
            lVar4 = *param_3;
            if (lVar4 < lVar1) {
              do {
                iVar2 = FUN_144d84cf0(param_2,param_3,lVar1,local_28,&local_res20);
                if (iVar2 < 0) {
LAB_144d8509f:
                  return (longlong)iVar2;
                }
                lVar4 = CONCAT44(uStackX_24,local_res20);
                if (lVar4 == 0) goto LAB_144d85125;
                if (local_28[0] == 0x4286) {
                  lVar3 = FUN_144d84990(param_2,*param_3,lVar4);
                  *param_1 = lVar3;
LAB_144d850dc:
                  if (lVar3 < 1) goto LAB_144d85125;
                }
                else {
                  if (local_28[0] == 0x42f7) {
                    lVar3 = FUN_144d84990(param_2,*param_3,lVar4);
                    param_1[1] = lVar3;
                    goto LAB_144d850dc;
                  }
                  if (local_28[0] == 0x42f2) {
                    lVar3 = FUN_144d84990(param_2,*param_3,lVar4);
                    param_1[2] = lVar3;
                    goto LAB_144d850dc;
                  }
                  if (local_28[0] == 0x42f3) {
                    lVar3 = FUN_144d84990(param_2,*param_3,lVar4);
                    param_1[3] = lVar3;
                    goto LAB_144d850dc;
                  }
                  if (local_28[0] != 0x4282) {
                    if (local_28[0] == 0x4287) {
                      lVar3 = FUN_144d84990(param_2,*param_3,lVar4);
                      param_1[5] = lVar3;
                    }
                    else {
                      if (local_28[0] != 0x4285) goto LAB_144d850e1;
                      lVar3 = FUN_144d84990(param_2,*param_3,lVar4);
                      param_1[6] = lVar3;
                    }
                    goto LAB_144d850dc;
                  }
                  if (param_1[4] != 0) goto LAB_144d85125;
                  iVar2 = FUN_144d84c20(param_2,*param_3,lVar4,param_1 + 4);
                  if (iVar2 != 0) goto LAB_144d8509f;
                }
LAB_144d850e1:
                *param_3 = *param_3 + lVar4;
              } while (*param_3 < lVar1);
              lVar4 = *param_3;
            }
            if ((((lVar4 == lVar1) && (param_1[4] != 0)) && (0 < param_1[6])) &&
               (((0 < param_1[5] && (param_1[2] - 1U < 4)) && (param_1[3] - 1U < 8)))) {
              return 0;
            }
          }
        }
      }
    }
LAB_144d85125:
    lVar4 = -2;
  }
  return lVar4;
}



// FUNCTION 144d85150 FUN_144d85150 body=84 status=ok
// SIG undefined FUN_144d85150(void)

void FUN_144d85150(undefined8 *param_1)

{
  *param_1 = 1;
  param_1[1] = 1;
  param_1[2] = 4;
  param_1[3] = 8;
  if (param_1[4] != 0) {
    thunk_FUN_1400020a8();
    param_1[4] = 0;
  }
  param_1[6] = 1;
  param_1[5] = 1;
  return;
}



// FUNCTION 144d851b0 FUN_144d851b0 body=1426 status=ok
// SIG undefined FUN_144d851b0(void)

undefined8 FUN_144d851b0(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  byte bVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  byte bVar10;
  longlong *plVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  int iVar19;
  byte local_res10 [8];
  uint local_res18 [2];
  ulonglong local_res20;
  
  if (param_2 == (longlong *)0x0) {
    return 0xffffffffffffffff;
  }
  if ((undefined8 *)*param_2 == (undefined8 *)0x0) {
    return 0xffffffffffffffff;
  }
  puVar1 = *(undefined8 **)*param_2;
  lVar9 = *param_1;
  lVar15 = param_1[1] + lVar9;
  lVar5 = FUN_144d84770(puVar1,lVar9,local_res18);
  param_1[2] = lVar5;
  if ((((lVar5 < 1) || (lVar9 = lVar9 + (int)local_res18[0], lVar15 < lVar9)) ||
      (lVar15 - lVar9 < 2)) ||
     (((iVar4 = FUN_144d84b40(puVar1,lVar9,2,&local_res20), iVar4 != 0 ||
       ((longlong)local_res20 < -0x8000)) || (0x7fff < (longlong)local_res20)))) {
    return 0xfffffffe;
  }
  *(short *)(param_1 + 3) = (short)local_res20;
  lVar5 = lVar9 + 2;
  if (lVar15 == lVar5 || lVar15 - lVar5 < 0) {
    return 0xfffffffe;
  }
  iVar4 = (**(code **)*puVar1)(puVar1,lVar5,1,(longlong)param_1 + 0x1a);
  if (iVar4 != 0) {
    return 0xfffffffe;
  }
  lVar5 = lVar9 + 3;
  bVar3 = *(byte *)((longlong)param_1 + 0x1a) >> 1;
  bVar10 = bVar3 & 3;
  if ((bVar3 & 3) == 0) {
    if (lVar5 <= lVar15) {
      *(undefined4 *)(param_1 + 5) = 1;
      uVar6 = SUB168(ZEXT816(0x10) * ZEXT816(1),0);
      if (SUB168(ZEXT816(0x10) * ZEXT816(1),8) != 0) {
        uVar6 = 0xffffffffffffffff;
      }
      plVar7 = (longlong *)FUN_148d808d2(uVar6,&DAT_149c3b839);
      param_1[4] = (longlong)plVar7;
      if (plVar7 == (longlong *)0x0) {
        return 0xffffffff;
      }
      *plVar7 = lVar5;
      if ((lVar15 - lVar5) - 1U < 0x7fffffff) {
        *(int *)(plVar7 + 1) = (int)(lVar15 - lVar5);
        return 0;
      }
    }
    return 0xfffffffe;
  }
  if (lVar15 <= lVar5) {
    return 0xfffffffe;
  }
  iVar4 = (**(code **)*puVar1)(puVar1,lVar5,1,local_res10);
  if (iVar4 != 0) {
    return 0xfffffffe;
  }
  lVar9 = lVar9 + 4;
  if (lVar15 < lVar9) {
    return 0xfffffffe;
  }
  *(uint *)(param_1 + 5) = local_res10[0] + 1;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (longlong)(int)(local_res10[0] + 1);
  uVar6 = SUB168(ZEXT816(0x10) * auVar2,0);
  if (SUB168(ZEXT816(0x10) * auVar2,8) != 0) {
    uVar6 = 0xffffffffffffffff;
  }
  plVar7 = (longlong *)FUN_148d808d2(uVar6,&DAT_149c3b839);
  param_1[4] = (longlong)plVar7;
  if (plVar7 == (longlong *)0x0) {
    return 0xffffffff;
  }
  if (bVar10 == 1) {
    uVar17 = *(uint *)(param_1 + 5);
    uVar18 = (ulonglong)(int)uVar17;
    plVar11 = plVar7 + uVar18 * 2;
    local_res20 = 0;
    while (uVar13 = 0, 1 < (int)uVar17) {
      do {
        if (lVar15 <= lVar9) {
          return 0xfffffffe;
        }
        iVar4 = (**(code **)*puVar1)(puVar1,lVar9,1,local_res18);
        if (iVar4 != 0) {
          return 0xfffffffe;
        }
        lVar9 = lVar9 + 1;
        uVar12 = (int)uVar13 + (local_res18[0] & 0xff);
        uVar13 = (ulonglong)uVar12;
      } while ((char)local_res18[0] == -1);
      if (plVar11 <= plVar7 + 2) {
        return 0xfffffffe;
      }
      *plVar7 = 0;
      if ((int)uVar12 < 1) {
        return 0xfffffffe;
      }
      uVar17 = (int)uVar18 - 1;
      uVar18 = (ulonglong)uVar17;
      *(uint *)(plVar7 + 1) = uVar12;
      local_res20 = local_res20 + (longlong)(int)uVar12;
      plVar7 = plVar7 + 2;
    }
    if (plVar11 <= plVar7) {
      return 0xfffffffe;
    }
    if (lVar15 < lVar9) {
      return 0xfffffffe;
    }
    if (plVar7 + 2 != plVar11) {
      return 0xfffffffe;
    }
    *plVar7 = 0;
    if (lVar15 - lVar9 < (longlong)local_res20) {
      return 0xfffffffe;
    }
    lVar5 = (lVar15 - lVar9) - local_res20;
    if (0x7ffffffe < lVar5 - 1U) {
      return 0xfffffffe;
    }
    *(int *)(plVar7 + 1) = (int)lVar5;
    plVar7 = (longlong *)param_1[4];
    while (plVar7 != plVar11) {
      lVar5 = (int)plVar7[1] + lVar9;
      if (lVar15 < lVar5) {
        return 0xfffffffe;
      }
      *plVar7 = lVar9;
      plVar7 = plVar7 + 2;
      lVar9 = lVar5;
    }
  }
  else if (bVar10 == 2) {
    if (lVar15 <= lVar9) {
      return 0xfffffffe;
    }
    lVar16 = (longlong)(int)param_1[5];
    lVar5 = (lVar15 - lVar9) / lVar16;
    if ((lVar15 - lVar9) % lVar16 != 0) {
      return 0xfffffffe;
    }
    if (0x7ffffffe < lVar5 - 1U) {
      return 0xfffffffe;
    }
    plVar11 = plVar7 + lVar16 * 2;
    for (; plVar7 != plVar11; plVar7 = plVar7 + 2) {
      if (lVar15 < lVar5 + lVar9) {
        return 0xfffffffe;
      }
      *plVar7 = lVar9;
      *(int *)(plVar7 + 1) = (int)lVar5;
      lVar9 = lVar5 + lVar9;
    }
  }
  else {
    if (lVar15 <= lVar9) {
      return 0xfffffffe;
    }
    iVar4 = (int)param_1[5];
    lVar5 = FUN_144d84770(puVar1,lVar9,local_res18);
    if (lVar5 < 1) {
      return 0xfffffffe;
    }
    if (0x7fffffff < lVar5) {
      return 0xfffffffe;
    }
    lVar9 = lVar9 + (int)local_res18[0];
    if (lVar15 < lVar9) {
      return 0xfffffffe;
    }
    if (lVar15 < lVar5 + lVar9) {
      return 0xfffffffe;
    }
    plVar7 = (longlong *)param_1[4];
    plVar11 = plVar7 + (longlong)(int)param_1[5] * 2;
    lVar16 = (longlong)(int)lVar5;
    *plVar7 = 0;
    *(int *)(plVar7 + 1) = (int)lVar5;
    while (iVar4 = iVar4 + -1, 1 < iVar4) {
      if (lVar15 <= lVar9) {
        return 0xfffffffe;
      }
      if (plVar11 <= plVar7) {
        return 0xfffffffe;
      }
      plVar14 = plVar7 + 2;
      if ((int)plVar7[1] != lVar5) {
        return 0xfffffffe;
      }
      if (plVar11 <= plVar14) {
        return 0xfffffffe;
      }
      *plVar14 = 0;
      lVar8 = FUN_144d84770(puVar1,lVar9,local_res18);
      if (lVar8 < 0) {
        return 0xfffffffe;
      }
      lVar9 = lVar9 + (int)local_res18[0];
      if (lVar15 < lVar9) {
        return 0xfffffffe;
      }
      lVar5 = lVar5 + 1 + (lVar8 - (1L << ((char)local_res18[0] * '\a' - 1U & 0x3f)));
      if (lVar5 < 1) {
        return 0xfffffffe;
      }
      if (0x7fffffff < lVar5) {
        return 0xfffffffe;
      }
      iVar19 = (int)lVar5;
      *(int *)(plVar7 + 3) = iVar19;
      if (0x7fffffffffffffff - (longlong)iVar19 < lVar16) {
        return 0xfffffffe;
      }
      lVar16 = lVar16 + iVar19;
      plVar7 = plVar14;
    }
    if (0 < iVar4) {
      if (lVar15 < lVar9) {
        return 0xfffffffe;
      }
      if (plVar11 <= plVar7) {
        return 0xfffffffe;
      }
      if ((int)plVar7[1] != lVar5) {
        return 0xfffffffe;
      }
      if (plVar11 <= plVar7 + 2) {
        return 0xfffffffe;
      }
      if (plVar7 + 4 != plVar11) {
        return 0xfffffffe;
      }
      plVar7[2] = 0;
      if (lVar15 - lVar9 < lVar16) {
        return 0xfffffffe;
      }
      lVar16 = (lVar15 - lVar9) - lVar16;
      if (0x7ffffffe < lVar16 - 1U) {
        return 0xfffffffe;
      }
      *(int *)(plVar7 + 3) = (int)lVar16;
    }
    plVar7 = (longlong *)param_1[4];
    while (plVar7 != plVar11) {
      lVar5 = (int)plVar7[1] + lVar9;
      if (lVar15 < lVar5) {
        return 0xfffffffe;
      }
      *plVar7 = lVar9;
      plVar7 = plVar7 + 2;
      lVar9 = lVar5;
    }
  }
  if (lVar9 != lVar15) {
    return 0xfffffffe;
  }
  return 0;
}



// FUNCTION 144d85750 FUN_144d85750 body=5 status=ok
// SIG undefined FUN_144d85750(void)

undefined8 FUN_144d85750(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



// FUNCTION 144d85760 FUN_144d85760 body=124 status=ok
// SIG undefined FUN_144d85760(void)

longlong FUN_144d85760(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  
  if (param_2 == 0) {
    return (longlong)*(short *)(param_1 + 0x18);
  }
  iVar1 = FUN_144d8b180(param_2,local_res18,local_res10);
  lVar2 = (longlong)iVar1;
  if (-1 < iVar1) {
    lVar2 = *(longlong *)(param_2 + 0x28);
  }
  if ((-1 < lVar2) && ((longlong)*(short *)(param_1 + 0x18) <= 0x7fffffffffffffff - lVar2)) {
    return *(short *)(param_1 + 0x18) + lVar2;
  }
  return -1;
}



// FUNCTION 144d857e0 FUN_144d857e0 body=76 status=ok
// SIG undefined FUN_144d857e0(void)

longlong FUN_144d857e0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  
  lVar3 = FUN_144d85760();
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x78) + 0x28);
  if ((lVar3 != 0) &&
     (auVar2._8_8_ = 0, auVar2._0_8_ = SUB168(SEXT816(0x7fffffffffffffff),8),
     SUB168((auVar2 << 0x40 | ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar3),0) < lVar1)) {
    return -1;
  }
  return lVar1 * lVar3;
}



// FUNCTION 144d85830 FUN_144d85830 body=4 status=ok
// SIG undefined FUN_144d85830(void)

undefined4 FUN_144d85830(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



// FUNCTION 144d85840 FUN_144d85840 body=22 status=ok
// SIG undefined FUN_144d85840(void)

void FUN_144d85840(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000144d85853. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_2)(param_2,*param_1,*(undefined4 *)(param_1 + 1),param_3);
  return;
}



// FUNCTION 144d85860 FUN_144d85860 body=12 status=ok
// SIG undefined FUN_144d85860(void)

longlong FUN_144d85860(longlong param_1,int param_2)

{
  return (longlong)param_2 * 0x10 + *(longlong *)(param_1 + 0x20);
}



// FUNCTION 144d85870 FUN_144d85870 body=43 status=ok
// SIG undefined FUN_144d85870(void)

undefined8 * FUN_144d85870(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = mkvparser::BlockEntry::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 144d858a0 FUN_144d858a0 body=6 status=ok
// SIG undefined FUN_144d858a0(void)

undefined8 FUN_144d858a0(void)

{
  return 1;
}



// FUNCTION 144d858b0 FUN_144d858b0 body=5 status=ok
// SIG undefined FUN_144d858b0(void)

longlong FUN_144d858b0(longlong param_1)

{
  return param_1 + 0x18;
}



// FUNCTION 144d858c0 FUN_144d858c0 body=66 status=ok
// SIG undefined FUN_144d858c0(void)

undefined8 * FUN_144d858c0(undefined8 *param_1,ulonglong param_2)

{
  thunk_FUN_1400020a8(param_1[7]);
  *param_1 = mkvparser::BlockEntry::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 144d85910 FUN_144d85910 body=76 status=ok
// SIG undefined FUN_144d85910(void)

undefined8 FUN_144d85910(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144d851b0(param_1 + 0x18,*(undefined8 *)(param_1 + 8));
  if ((int)uVar1 == 0) {
    if ((0 < *(longlong *)(param_1 + 0x50)) && (*(longlong *)(param_1 + 0x58) < 1)) {
      *(byte *)(param_1 + 0x32) = *(byte *)(param_1 + 0x32) | 0x80;
      return uVar1;
    }
    *(byte *)(param_1 + 0x32) = *(byte *)(param_1 + 0x32) & 0x7f;
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 144d85960 FUN_144d85960 body=6 status=ok
// SIG undefined FUN_144d85960(void)

undefined8 FUN_144d85960(void)

{
  return 2;
}



// FUNCTION 144d85970 FUN_144d85970 body=5 status=ok
// SIG undefined FUN_144d85970(void)

longlong FUN_144d85970(longlong param_1)

{
  return param_1 + 0x18;
}



// FUNCTION 144d85980 FUN_144d85980 body=66 status=ok
// SIG undefined FUN_144d85980(void)

undefined8 * FUN_144d85980(undefined8 *param_1,ulonglong param_2)

{
  thunk_FUN_1400020a8(param_1[7]);
  *param_1 = mkvparser::BlockEntry::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 144d859d0 FUN_144d859d0 body=183 status=ok
// SIG undefined FUN_144d859d0(void)

void FUN_144d859d0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)*param_1;
  plVar1 = (longlong *)param_1[1];
  while (plVar3 != plVar1) {
    lVar2 = *plVar3;
    plVar3 = plVar3 + 1;
    if (lVar2 != 0) {
      thunk_FUN_1400020a8(*(undefined8 *)(lVar2 + 8));
      thunk_FUN_1400020a8(lVar2,0x18);
    }
  }
  thunk_FUN_1400020a8(*param_1);
  plVar3 = (longlong *)param_1[2];
  plVar1 = (longlong *)param_1[3];
  while (plVar3 != plVar1) {
    lVar2 = *plVar3;
    plVar3 = plVar3 + 1;
    if (lVar2 != 0) {
      thunk_FUN_1400020a8(*(undefined8 *)(lVar2 + 8));
      thunk_FUN_1400020a8(*(undefined8 *)(lVar2 + 0x18));
      thunk_FUN_1400020a8(*(undefined8 *)(lVar2 + 0x28));
      thunk_FUN_1400020a8(lVar2,0x50);
    }
  }
  thunk_FUN_1400020a8(param_1[2]);
  return;
}



// FUNCTION 144d85a90 FUN_144d85a90 body=369 status=ok
// SIG undefined FUN_144d85a90(void)

undefined8
FUN_144d85a90(undefined8 param_1,longlong param_2,longlong param_3,undefined8 *param_4,
             longlong *param_5)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int local_res10 [2];
  
  param_3 = param_2 + param_3;
  bVar1 = false;
  if (param_2 < param_3) {
    do {
      lVar3 = FUN_144d84880(param_4,param_2,local_res10);
      if (lVar3 < 0) {
        return 0xfffffffe;
      }
      param_2 = param_2 + local_res10[0];
      if ((-1 < param_3) && (param_3 <= param_2)) {
        return 0xfffffffe;
      }
      uVar4 = FUN_144d84770(param_4,param_2,local_res10);
      if ((longlong)uVar4 < 0) {
        return 0xfffffffe;
      }
      if (7 < local_res10[0] - 1U) {
        return 0xfffffffe;
      }
      uVar5 = param_2 + local_res10[0];
      if (0x7fffffffffffffff < uVar5) {
        return 0xfffffffe;
      }
      if ((-1 < param_3) && (param_3 < (longlong)uVar5)) {
        return 0xfffffffe;
      }
      if (lVar3 == 0x4254) {
        lVar3 = FUN_144d84990(param_4,uVar5,uVar4);
        if (lVar3 < 0) {
          return 0xfffffffe;
        }
        *param_5 = lVar3;
        bVar1 = true;
      }
      else if (lVar3 == 0x4255) {
        if ((longlong)uVar4 < 1) {
          return 0xfffffffe;
        }
        if ((0x80000000 < uVar4) || (lVar3 = FUN_148d808d2(uVar4,&DAT_149c3b839), lVar3 == 0)) {
          return 0xffffffff;
        }
        iVar2 = (**(code **)*param_4)(param_4,uVar5,uVar4 & 0xffffffff,lVar3);
        if (iVar2 != 0) {
          thunk_FUN_1400020a8(lVar3);
          return 0;
        }
        param_5[1] = lVar3;
        param_5[2] = uVar4;
      }
      param_2 = uVar5 + uVar4;
      if (param_3 < param_2) {
        return 0xfffffffe;
      }
    } while (param_2 < param_3);
    if (bVar1) {
      return 0;
    }
  }
  return 0xfffffffe;
}



// FUNCTION 144d85c10 FUN_144d85c10 body=243 status=ok
// SIG undefined FUN_144d85c10(void)

undefined8
FUN_144d85c10(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  int local_res10 [2];
  
  param_3 = param_2 + param_3;
  do {
    if (param_3 <= param_2) {
      return 0;
    }
    lVar1 = FUN_144d84880(param_4,param_2,local_res10);
    if (lVar1 < 0) {
      return 0xfffffffe;
    }
    param_2 = param_2 + local_res10[0];
    if ((-1 < param_3) && (param_3 <= param_2)) {
      return 0xfffffffe;
    }
    lVar2 = FUN_144d84770(param_4,param_2,local_res10);
    if (lVar2 < 0) {
      return 0xfffffffe;
    }
    if (7 < local_res10[0] - 1U) {
      return 0xfffffffe;
    }
    uVar3 = param_2 + local_res10[0];
    if (0x7fffffffffffffff < uVar3) {
      return 0xfffffffe;
    }
    if ((-1 < param_3) && (param_3 < (longlong)uVar3)) {
      return 0xfffffffe;
    }
    if (lVar1 == 0x47e8) {
      lVar1 = FUN_144d84990(param_4,uVar3,lVar2);
      *param_5 = lVar1;
      if (lVar1 != 1) {
        return 0xfffffffe;
      }
    }
    param_2 = uVar3 + lVar2;
  } while (param_2 <= param_3);
  return 0xfffffffe;
}



// FUNCTION 144d85d10 FUN_144d85d10 body=1005 status=ok
// SIG undefined FUN_144d85d10(void)

int FUN_144d85d10(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int local_res10 [2];
  undefined8 *local_res18;
  
  uVar12 = 0;
  param_3 = param_2 + param_3;
  lVar9 = param_2;
  uVar11 = uVar12;
  if (param_2 < param_3) {
    do {
      lVar5 = FUN_144d84880(param_4,lVar9,local_res10);
      if (lVar5 < 0) {
        return -2;
      }
      lVar9 = lVar9 + local_res10[0];
      if ((-1 < param_3) && (param_3 <= lVar9)) {
        return -2;
      }
      lVar6 = FUN_144d84770(param_4,lVar9,local_res10);
      if (lVar6 < 0) {
        return -2;
      }
      if (7 < local_res10[0] - 1U) {
        return -2;
      }
      uVar10 = lVar9 + local_res10[0];
      if (0x7fffffffffffffff < uVar10) {
        return -2;
      }
      if ((-1 < param_3) && (param_3 < (longlong)uVar10)) {
        return -2;
      }
      iVar4 = (int)uVar12 + 1;
      if (lVar5 != 0x5034) {
        iVar4 = (int)uVar12;
      }
      uVar12 = (ulonglong)iVar4;
      iVar3 = (int)uVar11 + 1;
      if (lVar5 != 0x5035) {
        iVar3 = (int)uVar11;
      }
      lVar9 = uVar10 + lVar6;
      if (param_3 < lVar9) {
        return -2;
      }
      uVar11 = (longlong)iVar3;
    } while (lVar9 < param_3);
    if (iVar4 < 1) {
      if (iVar3 < 1) {
        return -1;
      }
    }
    else {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar12;
      uVar7 = SUB168(ZEXT816(8) * auVar1,0);
      if (SUB168(ZEXT816(8) * auVar1,8) != 0) {
        uVar7 = 0xffffffffffffffff;
      }
      lVar9 = FUN_148d808d2(uVar7,&DAT_149c3b839);
      *param_1 = lVar9;
      if (lVar9 == 0) {
        return -1;
      }
      param_1[1] = lVar9;
      if (iVar3 < 1) goto LAB_144d85e90;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (longlong)iVar3;
    uVar7 = SUB168(ZEXT816(8) * auVar2,0);
    if (SUB168(ZEXT816(8) * auVar2,8) != 0) {
      uVar7 = 0xffffffffffffffff;
    }
    lVar9 = FUN_148d808d2(uVar7,&DAT_149c3b839);
    param_1[2] = lVar9;
    if (lVar9 != 0) {
      param_1[3] = lVar9;
LAB_144d85e90:
      do {
        if ((((((-1 < param_3) && (param_3 <= param_2)) ||
              (lVar9 = FUN_144d84880(param_4,param_2,local_res10), lVar9 < 0)) ||
             ((param_2 = param_2 + local_res10[0], -1 < param_3 && (param_3 <= param_2)))) ||
            ((lVar5 = FUN_144d84770(param_4,param_2,local_res10), lVar5 < 0 ||
             ((7 < local_res10[0] - 1U ||
              (uVar11 = param_2 + local_res10[0], 0x7fffffffffffffff < uVar11)))))) ||
           ((-1 < param_3 && (param_3 < (longlong)uVar11)))) {
          return -2;
        }
        if (lVar9 == 0x5031) {
          lVar9 = FUN_144d84990(param_4,uVar11,lVar5);
          param_1[4] = lVar9;
        }
        else if (lVar9 == 0x5032) {
          lVar9 = FUN_144d84990(param_4,uVar11,lVar5);
          param_1[5] = lVar9;
          if (lVar9 == 0) {
            return -1;
          }
        }
        else if (lVar9 == 0x5033) {
          lVar9 = FUN_144d84990(param_4,uVar11,lVar5);
          param_1[6] = lVar9;
        }
        else if (lVar9 == 0x5034) {
          puVar8 = (undefined8 *)FUN_148d808c0(0x18,&DAT_149c3b839);
          if (puVar8 == (undefined8 *)0x0) {
            return -1;
          }
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8[2] = 0;
          local_res18 = puVar8;
          iVar4 = FUN_144d85a90(param_1,uVar11,lVar5,param_4,puVar8);
          if (iVar4 != 0) {
            thunk_FUN_1400020a8(puVar8[1]);
            thunk_FUN_1400020a8(puVar8,0x18);
            return iVar4;
          }
          *(undefined8 **)param_1[1] = puVar8;
          param_1[1] = param_1[1] + 8;
        }
        else if (lVar9 == 0x5035) {
          puVar8 = (undefined8 *)FUN_148d808c0(0x50,&DAT_149c3b839);
          if (puVar8 == (undefined8 *)0x0) {
            return -1;
          }
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8[2] = 0;
          puVar8[3] = 0;
          puVar8[4] = 0;
          puVar8[5] = 0;
          puVar8[6] = 0;
          puVar8[7] = 0;
          puVar8[8] = 0;
          puVar8[9] = 1;
          local_res18 = puVar8;
          iVar4 = FUN_144d86100(param_1,uVar11,lVar5,param_4,puVar8);
          if (iVar4 != 0) {
            thunk_FUN_1400020a8(puVar8[1]);
            thunk_FUN_1400020a8(puVar8[3]);
            thunk_FUN_1400020a8(puVar8[5]);
            thunk_FUN_1400020a8(puVar8,0x50);
            return iVar4;
          }
          *(undefined8 **)param_1[3] = puVar8;
          param_1[3] = param_1[3] + 8;
        }
        param_2 = uVar11 + lVar5;
        if (param_3 < param_2) {
          return -2;
        }
      } while (param_2 < param_3);
      if (param_2 == param_3) {
        return 0;
      }
      return -2;
    }
    thunk_FUN_1400020a8(*param_1);
  }
  return -1;
}



// FUNCTION 144d86100 FUN_144d86100 body=716 status=ok
// SIG undefined FUN_144d86100(void)

undefined8
FUN_144d86100(undefined8 param_1,longlong param_2,longlong param_3,undefined8 *param_4,
             longlong *param_5)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int local_res10 [2];
  
  param_3 = param_2 + param_3;
  do {
    if (param_3 <= param_2) {
      return 0;
    }
    lVar2 = FUN_144d84880(param_4,param_2,local_res10);
    if (lVar2 < 0) {
      return 0xfffffffe;
    }
    param_2 = param_2 + local_res10[0];
    if ((-1 < param_3) && (param_3 <= param_2)) {
      return 0xfffffffe;
    }
    uVar3 = FUN_144d84770(param_4,param_2,local_res10);
    if ((longlong)uVar3 < 0) {
      return 0xfffffffe;
    }
    if (7 < local_res10[0] - 1U) {
      return 0xfffffffe;
    }
    uVar5 = param_2 + local_res10[0];
    if (0x7fffffffffffffff < uVar5) {
      return 0xfffffffe;
    }
    if ((-1 < param_3) && (param_3 < (longlong)uVar5)) {
      return 0xfffffffe;
    }
    if (lVar2 == 0x47e1) {
      lVar2 = FUN_144d84990(param_4,uVar5,uVar3);
      *param_5 = lVar2;
      if (lVar2 != 5) {
        return 0xfffffffe;
      }
    }
    else if (lVar2 == 0x47e2) {
      thunk_FUN_1400020a8(param_5[1]);
      param_5[1] = 0;
      param_5[2] = 0;
      if ((longlong)uVar3 < 1) {
        return 0xfffffffe;
      }
      if ((0x80000000 < uVar3) || (lVar2 = FUN_148d808d2(uVar3,&DAT_149c3b839), lVar2 == 0)) {
        return 0xffffffff;
      }
      iVar1 = (**(code **)*param_4)(param_4,uVar5,uVar3 & 0xffffffff,lVar2);
      if (iVar1 != 0) {
LAB_144d863bd:
        thunk_FUN_1400020a8(lVar2);
        return 0;
      }
      param_5[1] = lVar2;
      param_5[2] = uVar3;
    }
    else if (lVar2 == 0x47e3) {
      thunk_FUN_1400020a8(param_5[3]);
      param_5[3] = 0;
      param_5[4] = 0;
      if ((longlong)uVar3 < 1) {
        return 0xfffffffe;
      }
      if (0x80000000 < uVar3) {
        return 0xffffffff;
      }
      lVar2 = FUN_148d808d2(uVar3,&DAT_149c3b839);
      if (lVar2 == 0) {
        return 0xffffffff;
      }
      iVar1 = (**(code **)*param_4)(param_4,uVar5,uVar3 & 0xffffffff,lVar2);
      if (iVar1 != 0) goto LAB_144d863bd;
      param_5[3] = lVar2;
      param_5[4] = uVar3;
    }
    else if (lVar2 == 0x47e4) {
      thunk_FUN_1400020a8(param_5[5]);
      param_5[5] = 0;
      param_5[6] = 0;
      if ((longlong)uVar3 < 1) {
        return 0xfffffffe;
      }
      if (0x80000000 < uVar3) {
        return 0xffffffff;
      }
      lVar2 = FUN_148d808d2(uVar3,&DAT_149c3b839);
      if (lVar2 == 0) {
        return 0xffffffff;
      }
      iVar1 = (**(code **)*param_4)(param_4,uVar5,uVar3 & 0xffffffff,lVar2);
      if (iVar1 != 0) goto LAB_144d863bd;
      param_5[5] = lVar2;
      param_5[6] = uVar3;
    }
    else if (lVar2 == 0x47e5) {
      lVar2 = FUN_144d84990(param_4,uVar5,uVar3);
      param_5[7] = lVar2;
    }
    else if (lVar2 == 0x47e6) {
      lVar2 = FUN_144d84990(param_4,uVar5,uVar3);
      param_5[8] = lVar2;
    }
    else if ((lVar2 == 0x47e7) &&
            (uVar4 = FUN_144d85c10(param_1,uVar5,uVar3,param_4,param_5 + 9), (int)uVar4 != 0)) {
      return uVar4;
    }
    param_2 = uVar5 + uVar3;
    if (param_3 < param_2) {
      return 0xfffffffe;
    }
  } while( true );
}



// FUNCTION 144d863d0 FUN_144d863d0 body=272 status=ok
// SIG undefined FUN_144d863d0(void)

int FUN_144d863d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 longlong *param_5)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (*param_5 == 0) {
    puVar2 = (undefined8 *)FUN_148d808c0(0xb8,&DAT_149c3b839);
    if (puVar2 == (undefined8 *)0x0) {
      iVar1 = -1;
    }
    else {
      puVar2[1] = param_1;
      puVar2[2] = param_3;
      puVar2[3] = param_4;
      *puVar2 = mkvparser::Track::vftable;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[8] = 0;
      puVar2[9] = 0;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      puVar2[0xe] = 0;
      *(undefined1 *)(puVar2 + 0xf) = 0;
      puVar2[0x13] = 0;
      puVar2[0x12] = mkvparser::Track::EOSBlock::vftable;
      *(undefined4 *)(puVar2 + 0x14) = 0x80000000;
      puVar2[0x15] = 0;
      puVar2[0x16] = 0;
      iVar1 = FUN_144d866d0(param_2);
      if (iVar1 == 0) {
        *param_5 = (longlong)puVar2;
        iVar1 = 0;
      }
      else {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



// FUNCTION 144d864e0 FUN_144d864e0 body=290 status=ok
// SIG undefined FUN_144d864e0(void)

void FUN_144d864e0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  *param_1 = mkvparser::Track::vftable;
  thunk_FUN_1400020a8(param_1[9]);
  param_1[9] = 0;
  thunk_FUN_1400020a8(param_1[10]);
  param_1[10] = 0;
  thunk_FUN_1400020a8(param_1[0xb]);
  param_1[0xb] = 0;
  thunk_FUN_1400020a8(param_1[0xd]);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  thunk_FUN_1400020a8(param_1[0xc]);
  param_1[0xc] = 0;
  plVar3 = (longlong *)param_1[0x15];
  plVar1 = (longlong *)param_1[0x16];
  while (plVar3 != plVar1) {
    lVar2 = *plVar3;
    plVar3 = plVar3 + 1;
    if (lVar2 != 0) {
      FUN_144d859d0(lVar2);
      thunk_FUN_1400020a8(lVar2,0x38);
    }
  }
  thunk_FUN_1400020a8(param_1[0x15]);
  param_1[0x12] = mkvparser::BlockEntry::vftable;
  thunk_FUN_1400020a8(param_1[9]);
  param_1[9] = 0;
  thunk_FUN_1400020a8(param_1[10]);
  param_1[10] = 0;
  thunk_FUN_1400020a8(param_1[0xb]);
  param_1[0xb] = 0;
  thunk_FUN_1400020a8(param_1[0xd]);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  thunk_FUN_1400020a8(param_1[0xc]);
  param_1[0xc] = 0;
  return;
}



// FUNCTION 144d86610 FUN_144d86610 body=4 status=ok
// SIG undefined FUN_144d86610(void)

undefined4 FUN_144d86610(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



// FUNCTION 144d86620 FUN_144d86620 body=4 status=ok
// SIG undefined FUN_144d86620(void)

undefined4 FUN_144d86620(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}



// FUNCTION 144d86630 FUN_144d86630 body=5 status=ok
// SIG undefined FUN_144d86630(void)

undefined8 FUN_144d86630(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



// FUNCTION 144d86640 FUN_144d86640 body=5 status=ok
// SIG undefined FUN_144d86640(void)

undefined8 FUN_144d86640(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



// FUNCTION 144d86650 FUN_144d86650 body=5 status=ok
// SIG undefined FUN_144d86650(void)

undefined8 FUN_144d86650(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



// FUNCTION 144d86660 FUN_144d86660 body=12 status=ok
// SIG undefined FUN_144d86660(void)

undefined8 FUN_144d86660(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x70);
  return *(undefined8 *)(param_1 + 0x68);
}



// FUNCTION 144d86670 FUN_144d86670 body=95 status=ok
// SIG undefined FUN_144d86670(void)

void FUN_144d86670(longlong param_1)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_1 + 0x28));
  *(undefined8 *)(param_1 + 0x28) = 0;
  thunk_FUN_1400020a8(*(undefined8 *)(param_1 + 0x30));
  *(undefined8 *)(param_1 + 0x30) = 0;
  thunk_FUN_1400020a8(*(undefined8 *)(param_1 + 0x38));
  *(undefined8 *)(param_1 + 0x38) = 0;
  thunk_FUN_1400020a8(*(undefined8 *)(param_1 + 0x48));
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  thunk_FUN_1400020a8(*(undefined8 *)(param_1 + 0x40));
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}



// FUNCTION 144d866d0 FUN_144d866d0 body=290 status=ok
// SIG undefined FUN_144d866d0(void)

undefined8 FUN_144d866d0(undefined4 *param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  void *_Dst;
  
  if (param_2 != param_1) {
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 4);
    *(undefined8 *)(param_2 + 6) = *(undefined8 *)(param_1 + 6);
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_1 + 2);
    *(undefined1 *)(param_2 + 0x16) = *(undefined1 *)(param_1 + 0x16);
    uVar2 = param_1[0x18];
    uVar3 = param_1[0x19];
    uVar4 = param_1[0x1a];
    uVar5 = param_1[0x1b];
    param_2[0x18] = uVar2;
    param_2[0x19] = uVar3;
    param_2[0x1a] = uVar4;
    param_2[0x1b] = uVar5;
    uVar6 = FUN_144d86800(uVar2,0x28,param_2);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    uVar6 = FUN_144d86800(param_1,0x30,param_2);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    uVar6 = FUN_144d86800(param_1,0x38,param_2);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    uVar6 = FUN_144d86800(param_1,0x40,param_2);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    uVar1 = *(ulonglong *)(param_1 + 0x14);
    if (uVar1 != 0) {
      if (((*(longlong *)(param_1 + 0x12) == 0) || (*(longlong *)(param_2 + 0x12) != 0)) ||
         (*(longlong *)(param_2 + 0x14) != 0)) {
        return 0xffffffff;
      }
      if (uVar1 == 0) {
        _Dst = (void *)0x0;
      }
      else if (uVar1 < 0x80000001) {
        _Dst = (void *)FUN_148d808d2(uVar1,&DAT_149c3b839);
      }
      else {
        _Dst = (void *)0x0;
      }
      *(void **)(param_2 + 0x12) = _Dst;
      if (_Dst == (void *)0x0) {
        return 0xffffffff;
      }
      memcpy(_Dst,*(void **)(param_1 + 0x12),*(size_t *)(param_1 + 0x14));
      *(undefined8 *)(param_2 + 0x14) = *(undefined8 *)(param_1 + 0x14);
    }
  }
  return 0;
}



// FUNCTION 144d86800 FUN_144d86800 body=208 status=ok
// SIG undefined FUN_144d86800(void)

undefined4 FUN_144d86800(longlong param_1,int param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar4;
  char *pcVar5;
  longlong lVar6;
  longlong lVar3;
  
  if (param_2 == -1) {
    return 0xffffffff;
  }
  lVar6 = (longlong)param_2;
  if (*(longlong *)(lVar6 + param_3) != 0) {
    return 0xffffffff;
  }
  pcVar5 = *(char **)(lVar6 + param_1);
  if (pcVar5 != (char *)0x0) {
    lVar2 = -1;
    do {
      lVar3 = lVar2;
      lVar2 = lVar3 + 1;
    } while (pcVar5[lVar2] != '\0');
    uVar4 = lVar3 + 2;
    if ((uVar4 == 0) || (0x80000000 < uVar4)) {
      *(undefined8 *)(lVar6 + param_3) = 0;
      return 0xffffffff;
    }
    lVar2 = FUN_148d808d2(uVar4,&DAT_149c3b839);
    *(longlong *)(lVar6 + param_3) = lVar2;
    if (lVar2 == 0) {
      return 0xffffffff;
    }
    lVar2 = lVar2 - (longlong)pcVar5;
    do {
      cVar1 = *pcVar5;
      pcVar5[lVar2] = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
  }
  return 0;
}



// FUNCTION 144d868d0 FUN_144d868d0 body=448 status=ok
// SIG undefined FUN_144d868d0(void)

undefined1 * FUN_144d868d0(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  bool bVar8;
  longlong local_res8;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_38 [16];
  
  lVar4 = param_1[1];
  if ((*(undefined8 **)(lVar4 + 0xa0) == (undefined8 *)0x0) || (*(int *)(lVar4 + 0xa8) < 1)) {
    plVar5 = (longlong *)(lVar4 + 0x20);
  }
  else {
    plVar5 = (longlong *)**(undefined8 **)(lVar4 + 0xa0);
  }
  iVar6 = 0;
joined_r0x000144d86912:
  if (plVar5 != (longlong *)0x0) {
    if (*plVar5 != 0) {
      if (*(int *)((longlong)plVar5 + 0x3c) < 1) {
        puVar3 = (undefined1 *)FUN_144d8b580(plVar5,local_res20,&local_res8);
        if ((int)puVar3 < 0) {
          *param_2 = 0;
          return puVar3;
        }
        if (0 < *(int *)((longlong)plVar5 + 0x3c)) goto LAB_144d86954;
        *param_2 = 0;
      }
      else {
LAB_144d86954:
        lVar4 = *(longlong *)plVar5[6];
        *param_2 = lVar4;
        if (lVar4 != 0) {
          do {
            lVar4 = (**(code **)(*(longlong *)*param_2 + 8))();
            if ((*(longlong *)(lVar4 + 0x10) == (longlong)*(int *)((longlong)param_1 + 0x24)) &&
               (cVar2 = (**(code **)(*param_1 + 8))(param_1,*param_2), cVar2 != '\0')) {
              return (undefined1 *)0x0;
            }
            uVar7 = (longlong)*(int *)(*param_2 + 0x10) + 1;
            if ((ulonglong)(longlong)*(int *)((longlong)plVar5 + 0x3c) <= uVar7) {
              puVar3 = (undefined1 *)FUN_144d8b580(plVar5,local_38,local_res18);
              if ((int)puVar3 < 0) {
                return puVar3;
              }
              if (0 < (int)puVar3) goto LAB_144d869c7;
            }
            lVar4 = *(longlong *)(plVar5[6] + uVar7 * 8);
            if (lVar4 == 0) goto LAB_144d869c7;
            *param_2 = lVar4;
          } while( true );
        }
      }
      goto LAB_144d869ce;
    }
    puVar1 = (undefined8 *)param_1[1];
    if ((longlong)puVar1[3] < 0) {
      iVar6 = (**(code **)(*(longlong *)*puVar1 + 8))((longlong *)*puVar1,&local_res8,local_res18);
      if (iVar6 < 0) goto LAB_144d869e6;
      if (local_res8 < 0) goto LAB_144d86a77;
      bVar8 = SBORROW8(puVar1[0xc],local_res8);
      local_res8 = puVar1[0xc] - local_res8;
    }
    else {
      local_res8 = puVar1[3] + puVar1[2];
      bVar8 = SBORROW8(puVar1[0xc],local_res8);
      local_res8 = puVar1[0xc] - local_res8;
    }
    if (bVar8 != local_res8 < 0) {
LAB_144d86a77:
      *param_2 = 0;
      return &DAT_fffffffd;
    }
  }
LAB_144d869e6:
  *param_2 = (longlong)(param_1 + 0x12);
  return (undefined1 *)0x1;
LAB_144d869c7:
  iVar6 = iVar6 + 1;
  if (99 < iVar6) goto LAB_144d869e6;
LAB_144d869ce:
  plVar5 = (longlong *)FUN_144d8ce60(param_1[1],plVar5);
  goto joined_r0x000144d86912;
}



// FUNCTION 144d86a90 FUN_144d86a90 body=49 status=ok
// SIG undefined FUN_144d86a90(void)

undefined8 FUN_144d86a90(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_2 + 8))(param_2);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x10) == (longlong)*(int *)(param_1 + 0x24))) {
    return 1;
  }
  return 0;
}



// FUNCTION 144d86ad0 FUN_144d86ad0 body=546 status=ok
// SIG undefined FUN_144d86ad0(void)

undefined8 FUN_144d86ad0(longlong *param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 local_res20 [8];
  undefined1 local_30 [8];
  
  uVar7 = FUN_144d868d0(param_1,param_3);
  if (-1 < (int)uVar7) {
    iVar5 = (**(code **)(*(longlong *)*param_3 + 0x10))();
    if (iVar5 != 0) {
      plVar2 = (longlong *)((longlong *)*param_3)[1];
      uVar7 = (**(code **)(*(longlong *)*param_3 + 8))();
      lVar8 = FUN_144d85760(uVar7,plVar2);
      lVar9 = *(longlong *)(*(longlong *)(*plVar2 + 0x78) + 0x28);
      if ((lVar8 == 0) ||
         (auVar3._8_8_ = 0, auVar3._0_8_ = SUB168(SEXT816(0x7fffffffffffffff),8),
         lVar9 <= SUB168((auVar3 << 0x40 | ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar8),0))) {
        lVar9 = lVar9 * lVar8;
      }
      else {
        lVar9 = -1;
      }
      if (lVar9 < param_2) {
        lVar9 = *(longlong *)(param_1[1] + 0xa0);
        uVar1 = lVar9 + (longlong)(int)plVar2[2] * 8;
        uVar11 = lVar9 + (longlong)*(int *)(param_1[1] + 0xa8) * 8;
        uVar13 = uVar1;
        if (uVar1 < uVar11) {
          do {
            lVar9 = (longlong)(uVar11 - uVar13) >> 3;
            if (lVar9 < 0) {
              lVar9 = lVar9 + 1;
            }
            plVar2 = *(longlong **)(uVar13 + (lVar9 >> 1) * 8);
            uVar12 = uVar13 + (lVar9 >> 1) * 8;
            iVar5 = FUN_144d8b180(plVar2,local_30,local_res20);
            lVar9 = (longlong)iVar5;
            if (-1 < iVar5) {
              lVar9 = plVar2[5];
            }
            if (-1 < lVar9) {
              lVar9 = *(longlong *)(*(longlong *)(*plVar2 + 0x78) + 0x28) * plVar2[5];
            }
            if (lVar9 <= param_2) {
              uVar13 = uVar12 + 8;
              uVar12 = uVar11;
            }
            uVar11 = uVar12;
          } while (uVar13 < uVar12);
joined_r0x000144d86c05:
          do {
            if (uVar13 <= uVar1) goto LAB_144d86cc1;
            plVar2 = *(longlong **)(uVar13 - 8);
            uVar13 = uVar13 - 8;
            plVar10 = param_1 + 0x12;
            if (*plVar2 != 0) {
              iVar5 = 0;
              lVar9 = 0;
LAB_144d86c30:
              if (*(int *)((longlong)plVar2 + 0x3c) <= iVar5) {
                iVar6 = FUN_144d8b580(plVar2,local_30,local_res20);
                plVar10 = param_1 + 0x12;
                if (0 < iVar6) goto LAB_144d86ca1;
                if (iVar6 < 0) {
                  *param_3 = 0;
                  goto joined_r0x000144d86c05;
                }
              }
              plVar10 = *(longlong **)(lVar9 + plVar2[6]);
              lVar8 = (**(code **)(*plVar10 + 8))(plVar10);
              if (*(longlong *)(lVar8 + 0x10) == (longlong)*(int *)((longlong)param_1 + 0x24)) {
                cVar4 = (**(code **)(*param_1 + 8))(param_1,plVar10);
                if (cVar4 != '\0') goto LAB_144d86ca1;
                iVar5 = iVar5 + 1;
                lVar9 = lVar9 + 8;
              }
              else {
                iVar5 = iVar5 + 1;
                lVar9 = lVar9 + 8;
              }
              goto LAB_144d86c30;
            }
LAB_144d86ca1:
            *param_3 = (longlong)plVar10;
          } while ((plVar10 == (longlong *)0x0) ||
                  (iVar5 = (**(code **)(*plVar10 + 0x10))(plVar10), iVar5 == 0));
        }
        else {
LAB_144d86cc1:
          *param_3 = (longlong)(param_1 + 0x12);
        }
      }
    }
    uVar7 = 0;
  }
  return uVar7;
}



// FUNCTION 144d86d00 FUN_144d86d00 body=666 status=ok
// SIG undefined FUN_144d86d00(void)

ulonglong FUN_144d86d00(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int local_res10 [2];
  undefined8 *local_res18;
  
  param_3 = param_2 + param_3;
  uVar11 = 0;
  uVar1 = **(undefined8 **)(param_1 + 8);
  lVar9 = param_2;
  if (param_2 < param_3) {
    do {
      lVar5 = FUN_144d84880(uVar1,lVar9,local_res10);
      if (lVar5 < 0) {
        return 0xfffffffe;
      }
      lVar9 = lVar9 + local_res10[0];
      if ((-1 < param_3) && (param_3 <= lVar9)) {
        return 0xfffffffe;
      }
      lVar6 = FUN_144d84770(uVar1,lVar9,local_res10);
      if (lVar6 < 0) {
        return 0xfffffffe;
      }
      if (7 < local_res10[0] - 1U) {
        return 0xfffffffe;
      }
      uVar10 = lVar9 + local_res10[0];
      if (0x7fffffffffffffff < uVar10) {
        return 0xfffffffe;
      }
      if ((-1 < param_3) && (param_3 < (longlong)uVar10)) {
        return 0xfffffffe;
      }
      iVar3 = (int)uVar11 + 1;
      if (lVar5 != 0x6240) {
        iVar3 = (int)uVar11;
      }
      lVar9 = uVar10 + lVar6;
      uVar11 = (ulonglong)iVar3;
      if (param_3 < lVar9) {
        return 0xfffffffe;
      }
    } while (lVar9 < param_3);
    if (0 < iVar3) {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar11;
      uVar7 = SUB168(ZEXT816(8) * auVar2,0);
      if (SUB168(ZEXT816(8) * auVar2,8) != 0) {
        uVar7 = 0xffffffffffffffff;
      }
      lVar9 = FUN_148d808d2(uVar7,&DAT_149c3b839);
      *(longlong *)(param_1 + 0xa8) = lVar9;
      if (lVar9 == 0) {
        return 0xffffffff;
      }
      *(longlong *)(param_1 + 0xb0) = lVar9;
      do {
        if ((((((-1 < param_3) && (param_3 <= param_2)) ||
              (lVar9 = FUN_144d84880(uVar1,param_2,local_res10), lVar9 < 0)) ||
             ((param_2 = param_2 + local_res10[0], -1 < param_3 && (param_3 <= param_2)))) ||
            ((lVar5 = FUN_144d84770(uVar1,param_2,local_res10), lVar5 < 0 ||
             ((7 < local_res10[0] - 1U ||
              (uVar11 = param_2 + local_res10[0], 0x7fffffffffffffff < uVar11)))))) ||
           ((-1 < param_3 && (param_3 < (longlong)uVar11)))) {
          return 0xfffffffe;
        }
        if (lVar9 == 0x6240) {
          puVar8 = (undefined8 *)FUN_148d808c0(0x38,&DAT_149c3b839);
          if (puVar8 == (undefined8 *)0x0) {
            return 0xffffffff;
          }
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8[2] = 0;
          puVar8[3] = 0;
          puVar8[4] = 0;
          puVar8[5] = 1;
          puVar8[6] = 0;
          local_res18 = puVar8;
          uVar4 = FUN_144d85d10(puVar8,uVar11,lVar5,uVar1);
          if (uVar4 != 0) {
            FUN_144d859d0(puVar8);
            thunk_FUN_1400020a8(puVar8,0x38);
            return (ulonglong)uVar4;
          }
          **(undefined8 **)(param_1 + 0xb0) = puVar8;
          *(longlong *)(param_1 + 0xb0) = *(longlong *)(param_1 + 0xb0) + 8;
        }
        param_2 = uVar11 + lVar5;
        if (param_3 < param_2) {
          return 0xfffffffe;
        }
      } while (param_2 < param_3);
      if (param_2 != param_3) {
        return 0xfffffffe;
      }
      return 0;
    }
  }
  return 0xffffffffffffffff;
}



// FUNCTION 144d86fa0 FUN_144d86fa0 body=3 status=ok
// SIG undefined FUN_144d86fa0(void)

undefined8 FUN_144d86fa0(void)

{
  return 0;
}



// FUNCTION 144d86fb0 FUN_144d86fb0 body=3 status=ok
// SIG undefined FUN_144d86fb0(void)

undefined8 FUN_144d86fb0(void)

{
  return 0;
}



// FUNCTION 144d86fc0 FUN_144d86fc0 body=43 status=ok
// SIG undefined FUN_144d86fc0(void)

undefined8 * FUN_144d86fc0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = mkvparser::BlockEntry::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 144d86ff0 FUN_144d86ff0 body=52 status=ok
// SIG undefined FUN_144d86ff0(void)

undefined8 FUN_144d86ff0(undefined8 param_1,ulonglong param_2)

{
  FUN_144d864e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 144d87030 FUN_144d87030 body=227 status=ok
// SIG undefined FUN_144d87030(void)

undefined4
FUN_144d87030(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4,longlong *param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  float *pfVar4;
  double local_res8;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*param_5 == 0) {
    puVar3 = (undefined8 *)FUN_14494321d(8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = 0;
    }
    *param_5 = (longlong)puVar3;
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
  }
  pfVar4 = (float *)*param_5;
  if (param_4 == '\0') {
    pfVar4 = pfVar4 + 1;
  }
  local_res8 = 0.0;
  iVar1 = FUN_144d84a30(param_1,param_2,param_3,&local_res8);
  if ((((iVar1 < 0) || (local_res8 < 0.0)) || (1.0 < local_res8)) ||
     ((0.0 < local_res8 && (local_res8 < 1.1754943508222875e-38)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    *pfVar4 = (float)local_res8;
  }
  return uVar2;
}



// FUNCTION 144d87120 FUN_144d87120 body=898 status=ok
// SIG undefined FUN_144d87120(void)

ulonglong FUN_144d87120(longlong param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  bool bVar8;
  float fVar9;
  undefined8 *local_res8;
  double local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  
  local_a8 = 0xfffffffffffffffe;
  if ((param_1 == 0) || (*param_4 != 0)) {
    uVar7 = (ulonglong)param_4 & 0xffffffffffffff00;
  }
  else {
    local_res8 = (undefined8 *)FUN_14494321d(0x28);
    if (local_res8 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      *local_res8 = 0;
      local_res8[1] = 0;
      local_res8[2] = 0;
      local_res8[3] = 0;
      *(undefined4 *)(local_res8 + 4) = 0x7f7fffff;
      *(undefined4 *)((longlong)local_res8 + 0x24) = 0x7f7fffff;
      puVar6 = local_res8;
    }
    local_b0 = puVar6;
    if (puVar6 != (undefined8 *)0x0) {
      param_3 = param_2 + param_3;
      while( true ) {
        if (param_3 <= param_2) {
          *param_4 = (longlong)puVar6;
          uVar7 = 1;
          puVar6 = (undefined8 *)0x0;
          goto LAB_144d87449;
        }
        if (((-1 < param_3) && (param_3 <= param_2)) ||
           (lVar3 = FUN_144d84880(param_1,param_2,&local_res8), lVar3 < 0)) break;
        param_2 = param_2 + (int)local_res8;
        if (((-1 < param_3) && (param_3 <= param_2)) ||
           (lVar4 = FUN_144d84770(param_1,param_2,&local_res8), lVar4 < 0)) break;
        if (((7 < (int)local_res8 - 1U) ||
            (uVar7 = param_2 + (int)local_res8, 0x7fffffffffffffff < uVar7)) ||
           ((-1 < param_3 && (param_3 < (longlong)uVar7)))) break;
        if (lVar3 == 0x55d9) {
          local_b8 = 0.0;
          iVar2 = FUN_144d84a30(param_1,uVar7,lVar4,&local_b8);
          if (((local_b8 < -3.4028234663852886e+38) || (3.4028234663852886e+38 < local_b8)) ||
             ((0.0 < local_b8 && (local_b8 < 1.1754943508222875e-38)))) break;
          fVar9 = (float)local_b8;
          *(float *)(puVar6 + 4) = fVar9;
          if (((iVar2 < 0) || (fVar9 < 0.0)) || (9999.99 < fVar9)) break;
        }
        else if (lVar3 == 0x55da) {
          local_b8 = 0.0;
          iVar2 = FUN_144d84a30(param_1,uVar7,lVar4,&local_b8);
          if (((local_b8 < -3.4028234663852886e+38) || (3.4028234663852886e+38 < local_b8)) ||
             ((0.0 < local_b8 && (local_b8 < 1.1754943508222875e-38)))) break;
          fVar9 = (float)local_b8;
          *(float *)((longlong)puVar6 + 0x24) = fVar9;
          if (((iVar2 < 0) || (fVar9 < 0.0)) || (999.9999 < fVar9)) break;
        }
        else {
          switch(lVar3) {
          case 0x55d1:
          case 0x55d2:
            bVar8 = lVar3 == 0x55d1;
            puVar5 = puVar6;
            break;
          case 0x55d3:
          case 0x55d4:
            bVar8 = lVar3 == 0x55d3;
            puVar5 = puVar6 + 1;
            break;
          case 0x55d5:
          case 0x55d6:
            bVar8 = lVar3 == 0x55d5;
            puVar5 = puVar6 + 2;
            break;
          case 0x55d7:
          case 0x55d8:
            bVar8 = lVar3 == 0x55d7;
            puVar5 = puVar6 + 3;
            break;
          default:
            goto switchD_144d873d8_default;
          }
          cVar1 = FUN_144d87030(param_1,uVar7,lVar4,bVar8,puVar5);
          if (cVar1 == '\0') break;
        }
        param_2 = uVar7 + lVar4;
        if (param_3 < param_2) break;
      }
    }
switchD_144d873d8_default:
    uVar7 = 0;
LAB_144d87449:
    if (puVar6 != (undefined8 *)0x0) {
      FUN_144d8da20(&local_b0,puVar6);
    }
  }
  return uVar7;
}



// FUNCTION 144d874d0 FUN_144d874d0 body=148 status=ok
// SIG undefined FUN_144d874d0(void)

void FUN_144d874d0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x68);
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      thunk_FUN_1400020a8(*plVar1,8);
    }
    if (plVar1[1] != 0) {
      thunk_FUN_1400020a8(plVar1[1],8);
    }
    if (plVar1[2] != 0) {
      thunk_FUN_1400020a8(plVar1[2],8);
    }
    if (plVar1[3] != 0) {
      thunk_FUN_1400020a8(plVar1[3],8);
    }
    thunk_FUN_1400020a8(plVar1,0x28);
    *(undefined8 *)(param_1 + 0x68) = 0;
    return;
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}



// FUNCTION 144d87570 FUN_144d87570 body=956 status=ok
// SIG undefined FUN_144d87570(void)

/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_144d87570(longlong param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  char cVar1;
  ulonglong in_RAX;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *local_res8;
  undefined8 uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  if ((param_1 == 0) || (*param_4 != 0)) {
    uVar5 = in_RAX & 0xffffffffffffff00;
  }
  else {
    plVar2 = (longlong *)FUN_14494321d(0x70);
    local_res8 = plVar2;
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = 0x7fffffffffffffff;
      plVar2[1] = 0x7fffffffffffffff;
      plVar2[2] = 0x7fffffffffffffff;
      plVar2[3] = 0x7fffffffffffffff;
      plVar2[4] = 0x7fffffffffffffff;
      plVar2[5] = 0x7fffffffffffffff;
      plVar2[6] = 0x7fffffffffffffff;
      plVar2[7] = 0x7fffffffffffffff;
      plVar2[8] = 0x7fffffffffffffff;
      plVar2[9] = 0x7fffffffffffffff;
      plVar2[10] = 0x7fffffffffffffff;
      plVar2[0xb] = 0x7fffffffffffffff;
      plVar2[0xc] = 0x7fffffffffffffff;
      plVar2[0xd] = 0;
      param_3 = param_2 + param_3;
      while( true ) {
        if (param_3 <= param_2) {
          *param_4 = (longlong)plVar2;
          uVar5 = 1;
          plVar2 = (longlong *)0x0;
          goto LAB_144d878ed;
        }
        lVar3 = FUN_144d84880(param_1,param_2,&local_res8);
        if (lVar3 < 0) break;
        param_2 = param_2 + (int)local_res8;
        if (((-1 < param_3) && (param_3 <= param_2)) ||
           (lVar4 = FUN_144d84770(param_1,param_2,&local_res8), lVar4 < 0)) break;
        if (((7 < (int)local_res8 - 1U) ||
            (uVar5 = param_2 + (int)local_res8, 0x7fffffffffffffff < uVar5)) ||
           ((-1 < param_3 && (param_3 < (longlong)uVar5)))) break;
        if (lVar3 == 0x55b1) {
          lVar3 = FUN_144d84990(param_1,uVar5,lVar4);
          *plVar2 = lVar3;
joined_r0x000144d878ae:
          if (lVar3 < 0) break;
        }
        else {
          if (lVar3 == 0x55b2) {
            lVar3 = FUN_144d84990(param_1,uVar5,lVar4);
            plVar2[1] = lVar3;
            goto joined_r0x000144d878ae;
          }
          if (lVar3 == 0x55b3) {
            lVar3 = FUN_144d84990(param_1,uVar5,lVar4);
            plVar2[2] = lVar3;
            goto joined_r0x000144d878ae;
          }
          if (lVar3 == 0x55b4) {
            lVar3 = FUN_144d84990(param_1,uVar5,lVar4);
            plVar2[3] = lVar3;
            goto joined_r0x000144d878ae;
          }
          if (lVar3 == 0x55b5) {
            lVar3 = FUN_144d84990(param_1,uVar5,lVar4);
            plVar2[4] = lVar3;
            goto joined_r0x000144d878ae;
          }
          if (lVar3 == 0x55b6) {
            lVar3 = FUN_144d84990(param_1,uVar5,lVar4);
            plVar2[5] = lVar3;
            goto joined_r0x000144d878ae;
          }
          if (lVar3 == 0x55b7) {
            lVar3 = FUN_144d84990(param_1,uVar5,lVar4);
            plVar2[6] = lVar3;
            goto joined_r0x000144d878ae;
          }
          if (lVar3 == 0x55b8) {
            lVar3 = FUN_144d84990(param_1,uVar5,lVar4);
            plVar2[7] = lVar3;
            goto joined_r0x000144d878ae;
          }
          if (lVar3 == 0x55b9) {
            lVar3 = FUN_144d84990(param_1,uVar5,lVar4);
            plVar2[8] = lVar3;
            goto joined_r0x000144d878ae;
          }
          if (lVar3 == 0x55ba) {
            lVar3 = FUN_144d84990(param_1,uVar5,lVar4);
            plVar2[9] = lVar3;
            goto joined_r0x000144d878ae;
          }
          if (lVar3 == 0x55bb) {
            lVar3 = FUN_144d84990(param_1,uVar5,lVar4);
            plVar2[10] = lVar3;
            goto joined_r0x000144d878ae;
          }
          if (lVar3 == 0x55bc) {
            lVar3 = FUN_144d84990(param_1,uVar5,lVar4);
            plVar2[0xb] = lVar3;
            goto joined_r0x000144d878ae;
          }
          if (lVar3 == 0x55bd) {
            lVar3 = FUN_144d84990(param_1,uVar5,lVar4);
            plVar2[0xc] = lVar3;
            goto joined_r0x000144d878ae;
          }
          if ((lVar3 != 0x55d0) ||
             (cVar1 = FUN_144d87120(param_1,uVar5,lVar4,plVar2 + 0xd,uVar6), cVar1 == '\0')) break;
        }
        param_2 = uVar5 + lVar4;
        if (param_3 < param_2) break;
      }
    }
    uVar5 = 0;
LAB_144d878ed:
    if (plVar2 != (longlong *)0x0) {
      FUN_144d874d0(plVar2);
      thunk_FUN_1400020a8(plVar2,0x70);
    }
  }
  return uVar5;
}



// FUNCTION 144d87930 FUN_144d87930 body=742 status=ok
// SIG undefined FUN_144d87930(void)

BADSPACEBASE *
FUN_144d87930(undefined8 *param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *local_res8;
  double local_88;
  undefined8 local_80;
  undefined4 *local_78;
  
  local_80 = 0xfffffffffffffffe;
  if ((param_1 != (undefined8 *)0x0) && (*param_4 == 0)) {
    local_res8 = (undefined4 *)FUN_14494321d(0x28);
    if (local_res8 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      *local_res8 = 0xffffffff;
      *(undefined8 *)(local_res8 + 2) = 0;
      *(undefined8 *)(local_res8 + 4) = 0;
      local_res8[6] = 0x7f7fffff;
      local_res8[7] = 0x7f7fffff;
      local_res8[8] = 0x7f7fffff;
      puVar4 = local_res8;
    }
    local_78 = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      param_3 = param_2 + param_3;
      do {
        if (param_3 <= param_2) {
          *param_4 = (longlong)puVar4;
          register0x00000020 = (BADSPACEBASE *)&DAT_00000001;
          puVar4 = (undefined4 *)0x0;
          goto LAB_144d87bbe;
        }
        lVar2 = FUN_144d84880(param_1,param_2,&local_res8);
        if (lVar2 < 0) break;
        param_2 = param_2 + (int)local_res8;
        if (((-1 < param_3) && (param_3 <= param_2)) ||
           (uVar3 = FUN_144d84770(param_1,param_2,&local_res8), (longlong)uVar3 < 0)) break;
        if (((7 < (int)local_res8 - 1U) ||
            (uVar5 = param_2 + (int)local_res8, 0x7fffffffffffffff < uVar5)) ||
           ((-1 < param_3 && (param_3 < (longlong)uVar5)))) break;
        if (lVar2 == 0x7671) {
          lVar2 = FUN_144d84990(param_1,uVar5,uVar3);
          if (lVar2 < 0) break;
          *puVar4 = (int)lVar2;
        }
        else if (lVar2 == 0x7672) {
          if (((uVar3 == 0) || (0x80000000 < uVar3)) ||
             (lVar2 = FUN_148d808d2(uVar3,&DAT_149c3b839), lVar2 == 0)) break;
          iVar1 = (**(code **)*param_1)(param_1,uVar5,uVar3 & 0xffffffff,lVar2);
          if (iVar1 != 0) {
            thunk_FUN_1400020a8(lVar2);
            break;
          }
          *(longlong *)(puVar4 + 2) = lVar2;
          *(ulonglong *)(puVar4 + 4) = uVar3;
        }
        else {
          local_88 = 0.0;
          iVar1 = FUN_144d84a30(param_1,uVar5,uVar3,&local_88);
          if (((iVar1 < 0) || (local_88 < -3.4028234663852886e+38)) ||
             ((3.4028234663852886e+38 < local_88 ||
              ((0.0 < local_88 && (local_88 < 1.1754943508222875e-38)))))) break;
          if (lVar2 == 0x7673) {
            puVar4[6] = (float)local_88;
          }
          else if (lVar2 == 0x7674) {
            puVar4[7] = (float)local_88;
          }
          else {
            if (lVar2 != 0x7675) break;
            puVar4[8] = (float)local_88;
          }
        }
        param_2 = uVar5 + uVar3;
      } while (param_2 <= param_3);
    }
    register0x00000020 = (BADSPACEBASE *)0x0;
LAB_144d87bbe:
    if (puVar4 != (undefined4 *)0x0) {
      thunk_FUN_1400020a8(*(undefined8 *)(puVar4 + 2));
      thunk_FUN_1400020a8(puVar4,0x28);
    }
  }
  return register0x00000020;
}



// FUNCTION 144d87c20 FUN_144d87c20 body=130 status=ok
// SIG undefined FUN_144d87c20(void)

undefined8 *
FUN_144d87c20(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x12] = mkvparser::Track::EOSBlock::vftable;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  *param_1 = mkvparser::VideoTrack::vftable;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  return param_1;
}



// FUNCTION 144d87cb0 FUN_144d87cb0 body=108 status=ok
// SIG undefined FUN_144d87cb0(void)

void FUN_144d87cb0(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[0x1e];
  *param_1 = mkvparser::VideoTrack::vftable;
  if (lVar1 != 0) {
    FUN_144d874d0(lVar1);
    thunk_FUN_1400020a8(lVar1,0x70);
  }
  lVar1 = param_1[0x1f];
  if (lVar1 != 0) {
    thunk_FUN_1400020a8(*(undefined8 *)(lVar1 + 8));
    thunk_FUN_1400020a8(lVar1,0x28);
  }
  FUN_144d864e0(param_1);
  return;
}



// FUNCTION 144d87d20 FUN_144d87d20 body=1033 status=ok
// SIG undefined FUN_144d87d20(void)

/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_144d87d20(undefined8 *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                       longlong *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int local_a8 [2];
  longlong local_a0;
  double local_98;
  undefined8 local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  
  if ((*param_5 != 0) || (*param_2 != 1)) {
    return 0xffffffff;
  }
  lVar10 = *(longlong *)(param_2 + 0x18);
  lVar7 = 0;
  uVar1 = *param_1;
  lVar12 = *(longlong *)(param_2 + 0x1a) + lVar10;
  local_98 = 0.0;
  uVar13 = 0;
  uVar14 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_90 = 0;
  local_a0 = 0;
  uVar2 = local_90;
  lVar5 = local_a0;
  do {
    local_a0 = lVar5;
    local_90 = uVar2;
    if (lVar12 <= lVar10) {
      if (lVar10 != lVar12) {
        return 0xfffffffe;
      }
      local_a0 = FUN_148d808c0(0x100,&DAT_149c3b839);
      if ((local_a0 != 0) &&
         (puVar9 = (undefined8 *)FUN_144d87c20(local_a0,param_1,param_3,param_4),
         puVar9 != (undefined8 *)0x0)) {
        uVar4 = FUN_144d866d0(param_2,puVar9 + 4);
        if (uVar4 == 0) {
          puVar9[0x18] = local_88;
          puVar9[0x19] = local_80;
          puVar9[0x1a] = local_78;
          puVar9[0x1b] = local_70;
          puVar9[0x1c] = local_68;
          puVar9[0x1d] = CONCAT44(uVar14,uVar13);
          puVar9[0x17] = lVar7;
          puVar9[0x1e] = uVar2;
          puVar9[0x1f] = lVar5;
          *param_5 = (longlong)puVar9;
          return 0;
        }
        (**(code **)*puVar9)(puVar9,1);
        return (ulonglong)uVar4;
      }
      return 0xffffffff;
    }
    lVar5 = FUN_144d84880(uVar1,lVar10,local_a8);
    if (lVar5 < 0) {
      return 0xfffffffe;
    }
    lVar10 = lVar10 + local_a8[0];
    if ((-1 < lVar12) && (lVar12 <= lVar10)) {
      return 0xfffffffe;
    }
    lVar6 = FUN_144d84770(uVar1,lVar10,local_a8);
    if (lVar6 < 0) {
      return 0xfffffffe;
    }
    if (7 < local_a8[0] - 1U) {
      return 0xfffffffe;
    }
    uVar11 = lVar10 + local_a8[0];
    if (0x7fffffffffffffff < uVar11) {
      return 0xfffffffe;
    }
    if ((-1 < lVar12) && (lVar12 < (longlong)uVar11)) {
      return 0xfffffffe;
    }
    if (lVar5 == 0xb0) {
      lVar7 = FUN_144d84990(uVar1,uVar11,lVar6);
      lVar10 = lVar7;
joined_r0x000144d87f14:
      if (lVar10 < 1) {
        return 0xfffffffe;
      }
    }
    else {
      if (lVar5 == 0xba) {
        local_88 = FUN_144d84990(uVar1,uVar11,lVar6);
        lVar10 = local_88;
        goto joined_r0x000144d87f14;
      }
      if (lVar5 == 0x54b0) {
        local_80 = FUN_144d84990(uVar1,uVar11,lVar6);
        lVar10 = local_80;
        goto joined_r0x000144d87f14;
      }
      if (lVar5 == 0x54ba) {
        local_78 = FUN_144d84990(uVar1,uVar11,lVar6);
        lVar10 = local_78;
        goto joined_r0x000144d87f14;
      }
      if (lVar5 == 0x54b2) {
        local_70 = FUN_144d84990(uVar1,uVar11,lVar6);
        lVar10 = local_70;
joined_r0x000144d87f68:
        if (lVar10 < 0) {
          return 0xfffffffe;
        }
      }
      else {
        if (lVar5 == 0x53b8) {
          local_68 = FUN_144d84990(uVar1,uVar11,lVar6);
          lVar10 = local_68;
          goto joined_r0x000144d87f68;
        }
        if (lVar5 == 0x2383e3) {
          uVar8 = FUN_144d84a30(uVar1,uVar11,lVar6,&local_98);
          if ((int)uVar8 < 0) {
            return uVar8;
          }
          uVar13 = SUB84(local_98,0);
          uVar14 = (undefined4)((ulonglong)local_98 >> 0x20);
          if (local_98 <= 0.0) {
            return 0xfffffffe;
          }
        }
        else {
          if (lVar5 == 0x55b0) {
            cVar3 = FUN_144d87570(uVar1,uVar11,lVar6,&local_90);
          }
          else {
            if (lVar5 != 0x7670) goto LAB_144d87fe0;
            cVar3 = FUN_144d87930(uVar1,uVar11,lVar6,&local_a0);
          }
          if (cVar3 == '\0') {
            return 0xfffffffe;
          }
        }
      }
    }
LAB_144d87fe0:
    lVar10 = uVar11 + lVar6;
    uVar2 = local_90;
    lVar5 = local_a0;
    if (lVar12 < lVar10) {
      return 0xfffffffe;
    }
  } while( true );
}



// FUNCTION 144d88130 FUN_144d88130 body=8 status=ok
// SIG undefined FUN_144d88130(void)

undefined8 FUN_144d88130(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



// FUNCTION 144d88140 FUN_144d88140 body=8 status=ok
// SIG undefined FUN_144d88140(void)

undefined8 FUN_144d88140(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



// FUNCTION 144d88150 FUN_144d88150 body=9 status=ok
// SIG undefined FUN_144d88150(void)

undefined8 FUN_144d88150(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



// FUNCTION 144d88160 FUN_144d88160 body=81 status=ok
// SIG undefined FUN_144d88160(void)

undefined8 FUN_144d88160(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_2 + 8))(param_2);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x10) == (longlong)*(int *)(param_1 + 0x24))) {
    lVar1 = (**(code **)(*param_2 + 8))(param_2);
    if (0x7f < *(byte *)(lVar1 + 0x1a)) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144d881c0 FUN_144d881c0 body=448 status=ok
// SIG undefined FUN_144d881c0(void)

undefined8 FUN_144d881c0(longlong param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 local_res20 [8];
  undefined1 local_38 [16];
  
  uVar4 = FUN_144d868d0(param_1,param_3);
  if (-1 < (int)uVar4) {
    iVar3 = (**(code **)(*(longlong *)*param_3 + 0x10))();
    if (iVar3 != 0) {
      plVar6 = (longlong *)((longlong *)*param_3)[1];
      uVar4 = (**(code **)(*(longlong *)*param_3 + 8))();
      lVar5 = FUN_144d85760(uVar4,plVar6);
      lVar7 = *(longlong *)(*(longlong *)(*plVar6 + 0x78) + 0x28);
      if ((lVar5 == 0) ||
         (auVar2._8_8_ = 0, auVar2._0_8_ = SUB168(SEXT816(0x7fffffffffffffff),8),
         lVar7 <= SUB168((auVar2 << 0x40 | ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar5),0))) {
        lVar7 = lVar7 * lVar5;
      }
      else {
        lVar7 = -1;
      }
      if (lVar7 < param_2) {
        lVar7 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xa0);
        uVar1 = lVar7 + (longlong)(int)plVar6[2] * 8;
        uVar9 = lVar7 + (longlong)*(int *)(*(longlong *)(param_1 + 8) + 0xa8) * 8;
        uVar8 = uVar1;
        if (uVar1 < uVar9) {
          do {
            lVar7 = (longlong)(uVar9 - uVar8) >> 3;
            if (lVar7 < 0) {
              lVar7 = lVar7 + 1;
            }
            plVar6 = *(longlong **)(uVar8 + (lVar7 >> 1) * 8);
            uVar10 = uVar8 + (lVar7 >> 1) * 8;
            iVar3 = FUN_144d8b180(plVar6,local_38,local_res20);
            lVar7 = (longlong)iVar3;
            if (-1 < iVar3) {
              lVar7 = plVar6[5];
            }
            if (-1 < lVar7) {
              lVar7 = *(longlong *)(*(longlong *)(*plVar6 + 0x78) + 0x28) * plVar6[5];
            }
            if (lVar7 <= param_2) {
              uVar8 = uVar10 + 8;
              uVar10 = uVar9;
            }
            uVar9 = uVar10;
          } while (uVar8 < uVar10);
        }
        plVar6 = (longlong *)FUN_144d8ac60(*(undefined8 *)(uVar8 - 8),param_1,param_2);
        *param_3 = (longlong)plVar6;
        uVar9 = uVar8;
        if (plVar6 == (longlong *)0x0) goto joined_r0x000144d8832c;
        iVar3 = (**(code **)(*plVar6 + 0x10))(plVar6);
        while (uVar9 = uVar8, iVar3 == 0) {
joined_r0x000144d8832c:
          do {
            uVar8 = uVar9 - 8;
            if (uVar8 == uVar1) {
              *param_3 = param_1 + 0x90;
              goto LAB_144d88373;
            }
            plVar6 = (longlong *)FUN_144d8ac60(*(undefined8 *)(uVar9 - 0x10),param_1,param_2);
            *param_3 = (longlong)plVar6;
            uVar9 = uVar8;
          } while (plVar6 == (longlong *)0x0);
          iVar3 = (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
LAB_144d88373:
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 144d88380 FUN_144d88380 body=52 status=ok
// SIG undefined FUN_144d88380(void)

undefined8 FUN_144d88380(undefined8 param_1,ulonglong param_2)

{
  FUN_144d87cb0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 144d883c0 FUN_144d883c0 body=722 status=ok
// SIG undefined FUN_144d883c0(void)

ulonglong FUN_144d883c0(undefined8 *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                       longlong *param_5)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int local_68 [2];
  double local_60 [5];
  
  if ((*param_5 != 0) || (*param_2 != 2)) {
    return 0xffffffff;
  }
  lVar7 = *(longlong *)(param_2 + 0x18);
  lVar9 = *(longlong *)(param_2 + 0x1a) + lVar7;
  lVar10 = 0;
  uVar1 = *param_1;
  lVar11 = 1;
  uVar12 = 0;
  uVar13 = 0x40bf4000;
  local_60[0] = 8000.0;
  do {
    if (lVar9 <= lVar7) {
      if (lVar7 != lVar9) {
        return 0xfffffffe;
      }
      puVar6 = (undefined8 *)FUN_148d808c0(0xd0,&DAT_149c3b839);
      if (puVar6 != (undefined8 *)0x0) {
        puVar6[1] = param_1;
        puVar6[2] = param_3;
        puVar6[3] = param_4;
        puVar6[5] = 0;
        puVar6[6] = 0;
        puVar6[7] = 0;
        puVar6[8] = 0;
        puVar6[9] = 0;
        puVar6[10] = 0;
        puVar6[0xb] = 0;
        puVar6[0xc] = 0;
        puVar6[0xd] = 0;
        puVar6[0xe] = 0;
        *(undefined1 *)(puVar6 + 0xf) = 0;
        puVar6[0x12] = mkvparser::Track::EOSBlock::vftable;
        puVar6[0x13] = 0;
        *(undefined4 *)(puVar6 + 0x14) = 0x80000000;
        puVar6[0x15] = 0;
        puVar6[0x16] = 0;
        *puVar6 = mkvparser::AudioTrack::vftable;
        uVar2 = FUN_144d866d0(param_2);
        if (uVar2 == 0) {
          puVar6[0x17] = CONCAT44(uVar13,uVar12);
          puVar6[0x18] = lVar11;
          puVar6[0x19] = lVar10;
          *param_5 = (longlong)puVar6;
          return 0;
        }
        (**(code **)*puVar6)(puVar6,1);
        return (ulonglong)uVar2;
      }
      return 0xffffffff;
    }
    lVar3 = FUN_144d84880(uVar1,lVar7,local_68);
    if (lVar3 < 0) {
      return 0xfffffffe;
    }
    lVar7 = lVar7 + local_68[0];
    if ((-1 < lVar9) && (lVar9 <= lVar7)) {
      return 0xfffffffe;
    }
    lVar4 = FUN_144d84770(uVar1,lVar7,local_68);
    if (lVar4 < 0) {
      return 0xfffffffe;
    }
    if (7 < local_68[0] - 1U) {
      return 0xfffffffe;
    }
    uVar8 = lVar7 + local_68[0];
    if (0x7fffffffffffffff < uVar8) {
      return 0xfffffffe;
    }
    if ((-1 < lVar9) && (lVar9 < (longlong)uVar8)) {
      return 0xfffffffe;
    }
    if (lVar3 == 0xb5) {
      uVar5 = FUN_144d84a30(uVar1,uVar8,lVar4,local_60);
      if ((int)uVar5 < 0) {
        return uVar5;
      }
      uVar12 = SUB84(local_60[0],0);
      uVar13 = (undefined4)((ulonglong)local_60[0] >> 0x20);
      if (local_60[0] <= 0.0) {
        return 0xfffffffe;
      }
    }
    else {
      if (lVar3 == 0x9f) {
        lVar7 = FUN_144d84990(uVar1,uVar8,lVar4);
        lVar11 = lVar7;
      }
      else {
        if (lVar3 != 0x6264) goto LAB_144d88550;
        lVar7 = FUN_144d84990(uVar1,uVar8,lVar4);
        lVar10 = lVar7;
      }
      if (lVar7 < 1) {
        return 0xfffffffe;
      }
    }
LAB_144d88550:
    lVar7 = uVar8 + lVar4;
    if (lVar9 < lVar7) {
      return 0xfffffffe;
    }
  } while( true );
}



// FUNCTION 144d886a0 FUN_144d886a0 body=9 status=ok
// SIG undefined FUN_144d886a0(void)

undefined8 FUN_144d886a0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



// FUNCTION 144d886b0 FUN_144d886b0 body=8 status=ok
// SIG undefined FUN_144d886b0(void)

undefined8 FUN_144d886b0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



// FUNCTION 144d886c0 FUN_144d886c0 body=8 status=ok
// SIG undefined FUN_144d886c0(void)

undefined8 FUN_144d886c0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



// FUNCTION 144d886d0 FUN_144d886d0 body=52 status=ok
// SIG undefined FUN_144d886d0(void)

undefined8 FUN_144d886d0(undefined8 param_1,ulonglong param_2)

{
  FUN_144d864e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 144d88710 FUN_144d88710 body=592 status=ok
// SIG undefined FUN_144d88710(void)

undefined8 FUN_144d88710(undefined8 *param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int local_res8 [2];
  
  uVar12 = param_1[1];
  uVar13 = param_1[2] + uVar12;
  uVar2 = *(undefined8 *)*param_1;
  iVar5 = 0;
  while( true ) {
    if ((longlong)uVar13 <= (longlong)uVar12) {
      if (uVar12 != uVar13) {
        return 0xfffffffe;
      }
      if (iVar5 < 1) {
        return 0;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (longlong)iVar5;
      uVar10 = SUB168(ZEXT816(8) * auVar4,0);
      if (SUB168(ZEXT816(8) * auVar4,8) != 0) {
        uVar10 = 0xffffffffffffffff;
      }
      lVar8 = FUN_148d808d2(uVar10,&DAT_149c3b839);
      param_1[5] = lVar8;
      if (lVar8 == 0) {
        return 0xffffffff;
      }
      param_1[6] = lVar8;
      uVar12 = param_1[1];
      while( true ) {
        uVar6 = uVar12;
        if ((longlong)uVar13 <= (longlong)uVar6) {
          if (uVar6 != uVar13) {
            return 0xfffffffe;
          }
          return 0;
        }
        lVar8 = FUN_144d84880(uVar2,uVar6,local_res8);
        if (lVar8 < 0) {
          return 0xfffffffe;
        }
        lVar11 = uVar6 + (longlong)local_res8[0];
        if ((-1 < (longlong)uVar13) && ((longlong)uVar13 <= lVar11)) {
          return 0xfffffffe;
        }
        lVar9 = FUN_144d84770(uVar2,lVar11,local_res8);
        if (lVar9 < 0) {
          return 0xfffffffe;
        }
        if (7 < local_res8[0] - 1U) break;
        uVar12 = lVar11 + local_res8[0];
        if (0x7fffffffffffffff < uVar12) {
          return 0xfffffffe;
        }
        if ((-1 < (longlong)uVar13) && ((longlong)uVar13 < (longlong)uVar12)) {
          return 0xfffffffe;
        }
        if (lVar9 != 0) {
          uVar1 = lVar9 + uVar12;
          if (lVar8 == 0xae) {
            plVar3 = (longlong *)param_1[6];
            *plVar3 = 0;
            uVar10 = FUN_144d88990(param_1,uVar12,lVar9,uVar6,uVar1 - uVar6,plVar3);
            if ((int)uVar10 != 0) {
              return uVar10;
            }
            if (*plVar3 != 0) {
              param_1[6] = param_1[6] + 8;
            }
          }
          uVar12 = uVar1;
          if ((longlong)uVar13 < (longlong)uVar1) {
            return 0xfffffffe;
          }
        }
      }
      return 0xfffffffe;
    }
    lVar8 = FUN_144d84880(uVar2,uVar12,local_res8);
    if (lVar8 < 0) {
      return 0xfffffffe;
    }
    lVar11 = uVar12 + (longlong)local_res8[0];
    if ((-1 < (longlong)uVar13) && ((longlong)uVar13 <= lVar11)) {
      return 0xfffffffe;
    }
    lVar9 = FUN_144d84770(uVar2,lVar11,local_res8);
    if (lVar9 < 0) {
      return 0xfffffffe;
    }
    if (7 < local_res8[0] - 1U) {
      return 0xfffffffe;
    }
    uVar12 = lVar11 + local_res8[0];
    if (0x7fffffffffffffff < uVar12) {
      return 0xfffffffe;
    }
    if ((-1 < (longlong)uVar13) && ((longlong)uVar13 < (longlong)uVar12)) break;
    if (lVar9 != 0) {
      uVar12 = uVar12 + lVar9;
      iVar7 = iVar5 + 1;
      if (lVar8 != 0xae) {
        iVar7 = iVar5;
      }
      iVar5 = iVar7;
      if ((longlong)uVar13 < (longlong)uVar12) {
        return 0xfffffffe;
      }
    }
  }
  return 0xfffffffe;
}



// FUNCTION 144d88960 FUN_144d88960 body=13 status=ok
// SIG undefined FUN_144d88960(void)

longlong FUN_144d88960(longlong param_1)

{
  return *(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28) >> 3;
}



// FUNCTION 144d88970 FUN_144d88970 body=29 status=ok
// SIG undefined FUN_144d88970(void)

undefined8 FUN_144d88970(longlong param_1,uint param_2)

{
  if ((uint)(*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28) >> 3) <= param_2) {
    return 0;
  }
  return *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (ulonglong)param_2 * 8);
}



// FUNCTION 144d88990 FUN_144d88990 body=1555 status=ok
// SIG undefined FUN_144d88990(void)

void FUN_144d88990(undefined8 *param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong *param_6)

{
  undefined8 *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  undefined8 extraout_XMM0_Qa_09;
  undefined8 extraout_XMM0_Qa_10;
  undefined8 extraout_XMM0_Qa_11;
  undefined8 uVar20;
  undefined8 extraout_XMM0_Qa_12;
  undefined8 extraout_XMM0_Qa_13;
  undefined1 auStack_168 [32];
  longlong *local_148;
  ulonglong local_138;
  ulonglong local_130;
  byte local_128 [8];
  ulonglong local_120;
  undefined8 uStack_118;
  longlong local_110;
  int local_108 [2];
  ulonglong local_100;
  ulonglong uStack_f8;
  ulonglong local_f0;
  ulonglong uStack_e8;
  undefined8 *local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  ulonglong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong lStack_70;
  ulonglong local_68;
  undefined1 local_60;
  ulonglong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_c8 = 0xfffffffffffffffe;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_d8 = param_6;
  local_e0 = param_1;
  local_d0 = param_4;
  if (*param_6 == 0) {
    puVar1 = *(undefined8 **)*param_1;
    param_3 = param_2 + param_3;
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    lStack_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    uVar20 = 0xffffffffffffffff;
    local_f0 = 0xffffffffffffffff;
    uStack_e8 = 0xffffffffffffffff;
    local_100 = 0xffffffffffffffff;
    uStack_f8 = 0xffffffffffffffff;
    local_120 = 0xffffffffffffffff;
    uStack_118 = 0xffffffffffffffff;
    local_130 = 1;
    local_110 = param_3;
    if (param_2 < param_3) {
      local_138 = 0xffffffffffffffff;
      local_120 = 0xffffffffffffffff;
LAB_144d88a7b:
      lVar11 = FUN_144d84880(puVar1,param_2,local_108);
      uVar20 = extraout_XMM0_Qa;
      if (((lVar11 < 0) ||
          ((((param_2 = param_2 + local_108[0], -1 < param_3 && (param_3 <= param_2)) ||
            (uVar12 = FUN_144d84770(puVar1,param_2,local_108), uVar20 = extraout_XMM0_Qa_00,
            (longlong)uVar12 < 0)) ||
           ((7 < local_108[0] - 1U || (uVar16 = param_2 + local_108[0], 0x7fffffffffffffff < uVar16)
            ))))) || ((-1 < param_3 && (param_3 < (longlong)uVar16)))) goto LAB_144d88f68;
      uVar3 = local_138;
      uVar4 = local_120;
      uVar5 = local_100;
      uVar6 = uStack_f8;
      uVar7 = uVar16;
      uVar8 = uVar12;
      lVar13 = local_a8;
      lVar14 = lStack_70;
      uVar9 = local_68;
      if (((lVar11 != 0xe0) &&
          (uVar5 = uVar16, uVar6 = uVar12, uVar7 = local_f0, uVar8 = uStack_e8, lVar11 != 0xe1)) &&
         (uVar3 = uVar12, uVar4 = uVar16, uVar5 = local_100, uVar6 = uStack_f8, lVar11 != 0x6d80)) {
        if (lVar11 == 0x73c5) {
          if (8 < (longlong)uVar12) goto LAB_144d88f68;
          local_b0 = 0;
          uVar17 = local_b0;
          param_3 = local_110;
          for (uVar19 = uVar16; uVar3 = local_138, uVar4 = local_120, local_110 = param_3,
              uVar5 = local_100, uVar6 = uStack_f8, uVar7 = local_f0, uVar8 = uStack_e8,
              local_b0 = uVar17, lVar13 = local_a8, lVar14 = lStack_70, uVar9 = local_68,
              uVar19 != uVar12 + uVar16; uVar19 = uVar19 + 1) {
            iVar10 = (**(code **)*puVar1)(puVar1,uVar19,1,local_128);
            uVar20 = extraout_XMM0_Qa_01;
            if (iVar10 != 0) goto LAB_144d88f68;
            uVar17 = uVar17 << 8 | (ulonglong)local_128[0];
            param_3 = local_110;
          }
        }
        else if (lVar11 == 0xd7) {
          lVar11 = FUN_144d84990(puVar1,uVar16,uVar12);
          uVar20 = extraout_XMM0_Qa_02;
          if (0x7e < lVar11 - 1U) goto LAB_144d88f68;
          local_b8 = CONCAT44((int)lVar11,(int)local_b8);
          uVar3 = local_138;
          uVar4 = local_120;
          uVar5 = local_100;
          uVar6 = uStack_f8;
          uVar7 = local_f0;
          uVar8 = uStack_e8;
          lVar13 = local_a8;
          lVar14 = lStack_70;
          uVar9 = local_68;
        }
        else if (lVar11 == 0x83) {
          lVar11 = FUN_144d84990(puVar1,uVar16,uVar12);
          uVar20 = extraout_XMM0_Qa_03;
          if (0xfd < lVar11 - 1U) goto LAB_144d88f68;
          local_b8 = CONCAT44(local_b8._4_4_,(int)lVar11);
          uVar3 = local_138;
          uVar4 = local_120;
          uVar5 = local_100;
          uVar6 = uStack_f8;
          uVar7 = local_f0;
          uVar8 = uStack_e8;
          lVar13 = local_a8;
          lVar14 = lStack_70;
          uVar9 = local_68;
        }
        else {
          if (lVar11 == 0x536e) {
            puVar18 = &local_90;
          }
          else {
            if (lVar11 != 0x22b59c) {
              if (lVar11 == 0x23e383) {
                lVar13 = FUN_144d84990(puVar1,uVar16,uVar12);
                uVar20 = extraout_XMM0_Qa_05;
                uVar3 = local_138;
                uVar4 = local_120;
                uVar5 = local_100;
                uVar6 = uStack_f8;
                uVar7 = local_f0;
                uVar8 = uStack_e8;
                lVar14 = lStack_70;
                uVar9 = local_68;
                if (lVar13 < 0) goto LAB_144d88f68;
              }
              else {
                if (lVar11 == 0x86) {
                  puVar18 = &uStack_80;
                  goto LAB_144d88c2b;
                }
                if (lVar11 == 0x9c) {
                  local_130 = FUN_144d84990(puVar1,uVar16,uVar12);
                  uVar20 = extraout_XMM0_Qa_06;
                  uVar3 = local_138;
                  uVar4 = local_120;
                  uVar5 = local_100;
                  uVar6 = uStack_f8;
                  uVar7 = local_f0;
                  uVar8 = uStack_e8;
                  lVar13 = local_a8;
                  lVar14 = lStack_70;
                  uVar9 = local_68;
                  if (1 < local_130) goto LAB_144d88f68;
                }
                else if (lVar11 == 0x63a2) {
                  uVar20 = thunk_FUN_1400020a8(lStack_70);
                  lStack_70 = 0;
                  local_68 = 0;
                  uVar3 = local_138;
                  uVar4 = local_120;
                  uVar5 = local_100;
                  uVar6 = uStack_f8;
                  uVar7 = local_f0;
                  uVar8 = uStack_e8;
                  lVar13 = local_a8;
                  lVar14 = lStack_70;
                  uVar9 = local_68;
                  if (uVar12 == 0) goto LAB_144d88d91;
                  if ((0x80000000 < uVar12) ||
                     (lVar14 = FUN_148d808d2(uVar12,&DAT_149c3b839), uVar20 = extraout_XMM0_Qa_07,
                     lVar14 == 0)) goto LAB_144d88f68;
                  iVar10 = (**(code **)*puVar1)(puVar1,uVar16,uVar12 & 0xffffffff,lVar14);
                  uVar20 = extraout_XMM0_Qa_08;
                  uVar3 = local_138;
                  uVar4 = local_120;
                  uVar5 = local_100;
                  uVar6 = uStack_f8;
                  uVar7 = local_f0;
                  uVar8 = uStack_e8;
                  lVar13 = local_a8;
                  uVar9 = uVar12;
                  if (iVar10 != 0) {
                    uVar20 = thunk_FUN_1400020a8(lVar14);
                    goto LAB_144d88f68;
                  }
                }
                else {
                  if (lVar11 == 0x258688) {
                    puVar18 = &local_78;
                    goto LAB_144d88c2b;
                  }
                  if (lVar11 == 0x56aa) {
                    local_a0 = FUN_144d84990(puVar1,uVar16,uVar12);
                    uVar20 = extraout_XMM0_Qa_09;
                    uVar3 = local_138;
                    uVar4 = local_120;
                    uVar5 = local_100;
                    uVar6 = uStack_f8;
                    uVar7 = local_f0;
                    uVar8 = uStack_e8;
                    lVar13 = local_a8;
                    lVar14 = lStack_70;
                    uVar9 = local_68;
                  }
                  else {
                    uVar3 = local_138;
                    uVar4 = local_120;
                    if (lVar11 == 0x56bb) {
                      local_98 = FUN_144d84990(puVar1,uVar16,uVar12);
                      uVar20 = extraout_XMM0_Qa_10;
                      uVar3 = local_138;
                      uVar4 = local_120;
                      uVar5 = local_100;
                      uVar6 = uStack_f8;
                      uVar7 = local_f0;
                      uVar8 = uStack_e8;
                      lVar13 = local_a8;
                      lVar14 = lStack_70;
                      uVar9 = local_68;
                    }
                  }
                }
              }
              goto LAB_144d88d91;
            }
            puVar18 = &local_88;
          }
LAB_144d88c2b:
          iVar10 = FUN_144d84c20(puVar1,uVar16,uVar12,puVar18);
          uVar20 = extraout_XMM0_Qa_04;
          uVar3 = local_138;
          uVar4 = local_120;
          uVar5 = local_100;
          uVar6 = uStack_f8;
          uVar7 = local_f0;
          uVar8 = uStack_e8;
          lVar13 = local_a8;
          lVar14 = lStack_70;
          uVar9 = local_68;
          if (iVar10 != 0) goto LAB_144d88f68;
        }
      }
LAB_144d88d91:
      local_68 = uVar9;
      lStack_70 = lVar14;
      local_a8 = lVar13;
      uStack_e8 = uVar8;
      local_f0 = uVar7;
      uStack_f8 = uVar6;
      local_100 = uVar5;
      local_120 = uVar4;
      local_138 = uVar3;
      param_2 = uVar16 + uVar12;
      if (param_3 < param_2) goto LAB_144d88f68;
      uVar12 = local_138;
      if (param_3 <= param_2) goto LAB_144d88ddb;
      goto LAB_144d88a7b;
    }
    uVar12 = 0xffffffffffffffff;
LAB_144d88ddb:
    plVar2 = local_d8;
    uVar16 = local_120;
    if ((param_2 == param_3) && (0 < local_b8._4_4_)) {
      plVar15 = (longlong *)local_e0[5];
      do {
        if (plVar15 == (longlong *)local_e0[6]) {
          if (0 < (int)local_b8) {
            local_60 = 0 < (longlong)local_130;
            if ((int)local_b8 == 1) {
              if ((-1 < (longlong)local_f0) && ((longlong)local_100 < 0)) {
                local_110 = 0;
                local_148 = &local_110;
                local_58 = local_f0;
                uStack_50 = uStack_e8;
                iVar10 = FUN_144d87d20(*local_e0,&local_b8,local_d0,param_5);
                uVar20 = extraout_XMM0_Qa_11;
                if ((iVar10 == 0) && (*plVar2 = local_110, -1 < (longlong)uVar16)) {
                  uVar20 = FUN_144d86d00(local_110,uVar16,uVar12);
                }
              }
            }
            else if ((int)local_b8 == 2) {
              if ((-1 < (longlong)local_100) && ((longlong)local_f0 < 0)) {
                local_110 = 0;
                local_148 = &local_110;
                local_58 = local_100;
                uStack_50 = uStack_f8;
                iVar10 = FUN_144d883c0(*local_e0,&local_b8,local_d0,param_5);
                uVar20 = extraout_XMM0_Qa_12;
                if ((iVar10 == 0) && (*plVar2 = local_110, -1 < (longlong)uVar16)) {
                  uVar20 = FUN_144d86d00(local_110,uVar16,uVar12);
                }
              }
            }
            else if ((((longlong)local_100 < 0) && ((longlong)local_f0 < 0)) &&
                    (((int)local_b8 != 0x21 || ((longlong)local_120 < 0)))) {
              local_58 = 0xffffffffffffffff;
              uStack_50 = 0;
              local_110 = 0;
              local_148 = &local_110;
              iVar10 = FUN_144d863d0(*local_e0,&local_b8,local_d0,param_5);
              uVar20 = extraout_XMM0_Qa_13;
              if (iVar10 == 0) {
                *plVar2 = local_110;
              }
            }
          }
          break;
        }
        lVar11 = *plVar15;
        plVar15 = plVar15 + 1;
      } while ((lVar11 == 0) || (local_b8._4_4_ != *(int *)(lVar11 + 0x24)));
    }
LAB_144d88f68:
    thunk_FUN_1400020a8(uVar20);
    thunk_FUN_1400020a8(local_88);
    thunk_FUN_1400020a8(uStack_80);
    thunk_FUN_1400020a8(lStack_70);
    thunk_FUN_1400020a8(local_78);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_168);
}



// FUNCTION 144d88fc0 FUN_144d88fc0 body=258 status=ok
// SIG undefined FUN_144d88fc0(void)

void FUN_144d88fc0(longlong param_1)

{
  __uint64 *p_Var1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  
  iVar2 = *(int *)(param_1 + 0x34);
  while (0 < iVar2) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
    plVar4 = (longlong *)((longlong)*(int *)(param_1 + 0x34) * 0x10 + *(longlong *)(param_1 + 0x28))
    ;
    iVar2 = *(int *)((longlong)plVar4 + 0xc);
    while (0 < iVar2) {
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + -1;
      FUN_144d893b0((longlong)*(int *)((longlong)plVar4 + 0xc) * 0x30 + *plVar4);
      iVar2 = *(int *)((longlong)plVar4 + 0xc);
    }
    pvVar3 = (void *)*plVar4;
    if (pvVar3 != (void *)0x0) {
      p_Var1 = (__uint64 *)((longlong)pvVar3 + -8);
      _eh_vector_destructor_iterator_(pvVar3,0x30,*p_Var1,(_func_void_void_ptr *)&DAT_144d893a0);
      thunk_FUN_1400020a8(p_Var1,*p_Var1 * 0x30 + 8);
    }
    *plVar4 = 0;
    *(undefined4 *)(plVar4 + 1) = 0;
    iVar2 = *(int *)(param_1 + 0x34);
  }
  pvVar3 = *(void **)(param_1 + 0x28);
  if (pvVar3 != (void *)0x0) {
    p_Var1 = (__uint64 *)((longlong)pvVar3 + -8);
    _eh_vector_destructor_iterator_(pvVar3,0x10,*p_Var1,(_func_void_void_ptr *)&DAT_144d897b0);
    thunk_FUN_1400020a8(p_Var1,*p_Var1 * 0x10 + 8);
  }
  return;
}



// FUNCTION 144d890d0 FUN_144d890d0 body=349 status=ok
// SIG undefined FUN_144d890d0(void)

undefined8 FUN_144d890d0(undefined8 *param_1)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int local_res8 [2];
  
  uVar8 = param_1[1];
  uVar9 = param_1[2] + uVar8;
  uVar1 = *(undefined8 *)*param_1;
  while( true ) {
    if ((longlong)uVar9 <= (longlong)uVar8) {
      if (uVar8 != uVar9) {
        return 0xfffffffe;
      }
      return 0;
    }
    lVar3 = FUN_144d84880(uVar1,uVar8,local_res8);
    if (lVar3 < 0) {
      return 0xfffffffe;
    }
    lVar7 = uVar8 + (longlong)local_res8[0];
    if ((-1 < (longlong)uVar9) && ((longlong)uVar9 <= lVar7)) {
      return 0xfffffffe;
    }
    lVar4 = FUN_144d84770(uVar1,lVar7,local_res8);
    if (lVar4 < 0) {
      return 0xfffffffe;
    }
    if (7 < local_res8[0] - 1U) break;
    uVar8 = lVar7 + local_res8[0];
    if (0x7fffffffffffffff < uVar8) {
      return 0xfffffffe;
    }
    if ((-1 < (longlong)uVar9) && ((longlong)uVar9 < (longlong)uVar8)) {
      return 0xfffffffe;
    }
    if (lVar4 != 0) {
      if (lVar3 == 0x45b9) {
        cVar2 = FUN_144d89aa0(param_1);
        if (cVar2 == '\0') {
          return 0xffffffff;
        }
        puVar6 = (undefined8 *)((longlong)*(int *)((longlong)param_1 + 0x34) * 0x10 + param_1[5]);
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        *puVar6 = 0;
        puVar6[1] = 0;
        uVar5 = FUN_144d897c0(puVar6,*(undefined8 *)*param_1,uVar8,lVar4);
        if ((int)uVar5 < 0) {
          return uVar5;
        }
      }
      uVar8 = uVar8 + lVar4;
      if ((longlong)uVar9 < (longlong)uVar8) {
        return 0xfffffffe;
      }
    }
  }
  return 0xfffffffe;
}



// FUNCTION 144d89250 FUN_144d89250 body=306 status=ok
// SIG undefined FUN_144d89250(void)

undefined8 FUN_144d89250(longlong param_1,undefined8 param_2,ulonglong param_3,longlong param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int local_res18 [4];
  
  uVar1 = param_3 + param_4;
  do {
    do {
      if ((longlong)uVar1 <= (longlong)param_3) {
        if (param_3 != uVar1) {
          return 0xfffffffe;
        }
        return 0;
      }
      lVar2 = FUN_144d84880(param_2,param_3,local_res18);
      if (lVar2 < 0) {
        return 0xfffffffe;
      }
      lVar5 = param_3 + (longlong)local_res18[0];
      if ((-1 < (longlong)uVar1) && ((longlong)uVar1 <= lVar5)) {
        return 0xfffffffe;
      }
      lVar3 = FUN_144d84770(param_2,lVar5,local_res18);
      if (lVar3 < 0) {
        return 0xfffffffe;
      }
      if (7 < local_res18[0] - 1U) {
        return 0xfffffffe;
      }
      param_3 = lVar5 + local_res18[0];
      if (0x7fffffffffffffff < param_3) {
        return 0xfffffffe;
      }
      if ((-1 < (longlong)uVar1) && ((longlong)uVar1 < (longlong)param_3)) {
        return 0xfffffffe;
      }
    } while (lVar3 == 0);
    lVar5 = param_1;
    if (lVar2 == 0x85) {
LAB_144d89334:
      uVar4 = FUN_144d84c20(param_2,param_3,lVar3,lVar5);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
    }
    else {
      if (lVar2 == 0x437c) {
        lVar5 = param_1 + 8;
        goto LAB_144d89334;
      }
      if (lVar2 == 0x437e) {
        lVar5 = param_1 + 0x10;
        goto LAB_144d89334;
      }
    }
    param_3 = param_3 + lVar3;
    if ((longlong)uVar1 < (longlong)param_3) {
      return 0xfffffffe;
    }
  } while( true );
}



// FUNCTION 144d893b0 FUN_144d893b0 body=189 status=ok
// SIG undefined FUN_144d893b0(void)

void FUN_144d893b0(undefined8 *param_1)

{
  __uint64 *p_Var1;
  undefined8 *puVar2;
  int iVar3;
  void *pvVar4;
  
  thunk_FUN_1400020a8(*param_1);
  *param_1 = 0;
  iVar3 = *(int *)((longlong)param_1 + 0x2c);
  while (0 < iVar3) {
    *(int *)((longlong)param_1 + 0x2c) = *(int *)((longlong)param_1 + 0x2c) + -1;
    puVar2 = (undefined8 *)(param_1[4] + (longlong)*(int *)((longlong)param_1 + 0x2c) * 0x18);
    thunk_FUN_1400020a8(*puVar2);
    *puVar2 = 0;
    thunk_FUN_1400020a8(puVar2[1]);
    puVar2[1] = 0;
    thunk_FUN_1400020a8(puVar2[2]);
    puVar2[2] = 0;
    iVar3 = *(int *)((longlong)param_1 + 0x2c);
  }
  pvVar4 = (void *)param_1[4];
  if (pvVar4 != (void *)0x0) {
    p_Var1 = (__uint64 *)((longlong)pvVar4 + -8);
    _eh_vector_destructor_iterator_(pvVar4,0x18,*p_Var1,(_func_void_void_ptr *)&DAT_144d89240);
    thunk_FUN_1400020a8(p_Var1,*p_Var1 * 0x18 + 8);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[4] = 0;
  return;
}



// FUNCTION 144d89470 FUN_144d89470 body=490 status=ok
// SIG undefined FUN_144d89470(void)

longlong FUN_144d89470(longlong param_1,undefined8 param_2,ulonglong param_3,longlong param_4)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int local_res18 [2];
  undefined8 local_res20;
  
  uVar1 = param_3 + param_4;
  do {
    do {
      if ((longlong)uVar1 <= (longlong)param_3) {
        if (param_3 != uVar1) {
          return 0xfffffffe;
        }
        return 0;
      }
      lVar5 = FUN_144d84880(param_2,param_3,local_res18);
      if (lVar5 < 0) {
        return 0xfffffffe;
      }
      lVar7 = param_3 + (longlong)local_res18[0];
      if ((-1 < (longlong)uVar1) && ((longlong)uVar1 <= lVar7)) {
        return 0xfffffffe;
      }
      lVar6 = FUN_144d84770(param_2,lVar7,local_res18);
      if (lVar6 < 0) {
        return 0xfffffffe;
      }
      if (7 < local_res18[0] - 1U) {
        return 0xfffffffe;
      }
      param_3 = lVar7 + local_res18[0];
      if (0x7fffffffffffffff < param_3) {
        return 0xfffffffe;
      }
      if ((-1 < (longlong)uVar1) && ((longlong)uVar1 < (longlong)param_3)) {
        return 0xfffffffe;
      }
    } while (lVar6 == 0);
    if (lVar5 == 0x80) {
      cVar3 = FUN_144d89660(param_1);
      if (cVar3 == '\0') {
        return 0xffffffff;
      }
      puVar2 = (undefined8 *)
               (*(longlong *)(param_1 + 0x20) + (longlong)*(int *)(param_1 + 0x2c) * 0x18);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      lVar5 = FUN_144d89250(puVar2,param_2,param_3,lVar6);
      iVar4 = (int)lVar5;
joined_r0x000144d895a4:
      if (iVar4 < 0) {
        return lVar5;
      }
    }
    else {
      if (lVar5 == 0x5654) {
        lVar5 = FUN_144d84c20(param_2,param_3,lVar6,param_1);
        iVar4 = (int)lVar5;
        goto joined_r0x000144d895a4;
      }
      if (lVar5 == 0x73c4) {
        lVar5 = FUN_144d84b40(param_2,param_3,lVar6,&local_res20);
        if ((int)lVar5 < 0) {
          return lVar5;
        }
        *(undefined8 *)(param_1 + 8) = local_res20;
      }
      else if (lVar5 == 0x91) {
        lVar5 = FUN_144d84990(param_2,param_3,lVar6);
        if (lVar5 < 0) {
          return lVar5;
        }
        *(longlong *)(param_1 + 0x10) = lVar5;
      }
      else if (lVar5 == 0x92) {
        lVar5 = FUN_144d84990(param_2,param_3,lVar6);
        if (lVar5 < 0) {
          return lVar5;
        }
        *(longlong *)(param_1 + 0x18) = lVar5;
      }
    }
    param_3 = param_3 + lVar6;
    if ((longlong)uVar1 < (longlong)param_3) {
      return 0xfffffffe;
    }
  } while( true );
}



// FUNCTION 144d89660 FUN_144d89660 body=320 status=ok
// SIG undefined FUN_144d89660(void)

undefined8 FUN_144d89660(longlong param_1)

{
  __uint64 *p_Var1;
  int iVar2;
  void *pvVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  uint uVar9;
  ulonglong *puVar10;
  int iVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 <= *(int *)(param_1 + 0x2c)) {
    iVar11 = 1;
    if (iVar2 != 0) {
      iVar11 = iVar2 * 2;
    }
    uVar13 = (ulonglong)iVar11;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar13;
    uVar5 = SUB168(ZEXT816(0x18) * auVar4,0);
    if (SUB168(ZEXT816(0x18) * auVar4,8) != 0) {
      uVar5 = 0xffffffffffffffff;
    }
    lVar6 = uVar5 + 8;
    if (0xfffffffffffffff7 < uVar5) {
      lVar6 = -1;
    }
    puVar7 = (ulonglong *)FUN_148d808d2(lVar6,&DAT_149c3b839);
    puVar10 = (ulonglong *)0x0;
    puVar12 = puVar10;
    if (puVar7 != (ulonglong *)0x0) {
      *puVar7 = uVar13;
      _eh_vector_constructor_iterator_
                (puVar7 + 1,0x18,uVar13,(_func_void_void_ptr *)&LAB_144d89230,
                 (_func_void_void_ptr *)&DAT_144d89240);
      puVar12 = puVar7 + 1;
    }
    if (puVar12 == (ulonglong *)0x0) {
      return 0;
    }
    if (0 < *(int *)(param_1 + 0x2c)) {
      puVar7 = puVar12 + 2;
      do {
        puVar8 = (ulonglong *)
                 ((longlong)puVar7 + *(longlong *)(param_1 + 0x20) + (-0x10 - (longlong)puVar12));
        puVar7[-2] = *puVar8;
        puVar7[-1] = puVar8[1];
        *puVar7 = puVar8[2];
        uVar9 = (int)puVar10 + 1;
        puVar10 = (ulonglong *)(ulonglong)uVar9;
        puVar7 = puVar7 + 3;
      } while ((int)uVar9 < *(int *)(param_1 + 0x2c));
    }
    pvVar3 = *(void **)(param_1 + 0x20);
    if (pvVar3 != (void *)0x0) {
      p_Var1 = (__uint64 *)((longlong)pvVar3 + -8);
      _eh_vector_destructor_iterator_(pvVar3,0x18,*p_Var1,(_func_void_void_ptr *)&DAT_144d89240);
      thunk_FUN_1400020a8(p_Var1,*p_Var1 * 0x18 + 8);
    }
    *(ulonglong **)(param_1 + 0x20) = puVar12;
    *(int *)(param_1 + 0x28) = iVar11;
  }
  return 1;
}



// FUNCTION 144d897c0 FUN_144d897c0 body=360 status=ok
// SIG undefined FUN_144d897c0(void)

undefined8 FUN_144d897c0(longlong *param_1,undefined8 param_2,ulonglong param_3,longlong param_4)

{
  ulonglong uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int local_res18 [2];
  
  uVar1 = param_3 + param_4;
  while( true ) {
    if ((longlong)uVar1 <= (longlong)param_3) {
      if (param_3 != uVar1) {
        return 0xfffffffe;
      }
      return 0;
    }
    lVar3 = FUN_144d84880(param_2,param_3,local_res18);
    if (lVar3 < 0) {
      return 0xfffffffe;
    }
    lVar7 = param_3 + (longlong)local_res18[0];
    if ((-1 < (longlong)uVar1) && ((longlong)uVar1 <= lVar7)) {
      return 0xfffffffe;
    }
    lVar4 = FUN_144d84770(param_2,lVar7,local_res18);
    if (lVar4 < 0) {
      return 0xfffffffe;
    }
    if (7 < local_res18[0] - 1U) break;
    param_3 = lVar7 + local_res18[0];
    if (0x7fffffffffffffff < param_3) {
      return 0xfffffffe;
    }
    if ((-1 < (longlong)uVar1) && ((longlong)uVar1 < (longlong)param_3)) {
      return 0xfffffffe;
    }
    if (lVar4 != 0) {
      if (lVar3 == 0xb6) {
        cVar2 = FUN_144d89930(param_1);
        if (cVar2 == '\0') {
          return 0xffffffff;
        }
        puVar6 = (undefined8 *)((longlong)*(int *)((longlong)param_1 + 0xc) * 0x30 + *param_1);
        *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0xffffffffffffffff;
        puVar6[3] = 0xffffffffffffffff;
        puVar6[4] = 0;
        puVar6[5] = 0;
        uVar5 = FUN_144d89470(puVar6,param_2,param_3,lVar4);
        if ((int)uVar5 < 0) {
          return uVar5;
        }
      }
      param_3 = param_3 + lVar4;
      if ((longlong)uVar1 < (longlong)param_3) {
        return 0xfffffffe;
      }
    }
  }
  return 0xfffffffe;
}



// FUNCTION 144d89930 FUN_144d89930 body=363 status=ok
// SIG undefined FUN_144d89930(void)

undefined8 FUN_144d89930(longlong *param_1)

{
  __uint64 *p_Var1;
  int iVar2;
  void *pvVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  uint uVar9;
  ulonglong *puVar10;
  int iVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  
  iVar2 = (int)param_1[1];
  if (iVar2 <= *(int *)((longlong)param_1 + 0xc)) {
    iVar11 = 1;
    if (iVar2 != 0) {
      iVar11 = iVar2 * 2;
    }
    uVar13 = (ulonglong)iVar11;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar13;
    uVar5 = SUB168(ZEXT816(0x30) * auVar4,0);
    if (SUB168(ZEXT816(0x30) * auVar4,8) != 0) {
      uVar5 = 0xffffffffffffffff;
    }
    lVar6 = uVar5 + 8;
    if (0xfffffffffffffff7 < uVar5) {
      lVar6 = -1;
    }
    puVar7 = (ulonglong *)FUN_148d808d2(lVar6,&DAT_149c3b839);
    puVar10 = (ulonglong *)0x0;
    puVar12 = puVar10;
    if (puVar7 != (ulonglong *)0x0) {
      *puVar7 = uVar13;
      _eh_vector_constructor_iterator_
                (puVar7 + 1,0x30,uVar13,(_func_void_void_ptr *)&LAB_144d89390,
                 (_func_void_void_ptr *)&DAT_144d893a0);
      puVar12 = puVar7 + 1;
    }
    if (puVar12 == (ulonglong *)0x0) {
      return 0;
    }
    if (0 < *(int *)((longlong)param_1 + 0xc)) {
      puVar7 = puVar12 + 2;
      do {
        puVar8 = (ulonglong *)((longlong)puVar7 + *param_1 + (-0x10 - (longlong)puVar12));
        puVar7[-2] = *puVar8;
        puVar7[-1] = puVar8[1];
        *puVar7 = puVar8[2];
        puVar7[1] = puVar8[3];
        puVar7[2] = puVar8[4];
        *(int *)(puVar7 + 3) = (int)puVar8[5];
        *(undefined4 *)((longlong)puVar7 + 0x1c) = *(undefined4 *)((longlong)puVar8 + 0x2c);
        uVar9 = (int)puVar10 + 1;
        puVar10 = (ulonglong *)(ulonglong)uVar9;
        puVar7 = puVar7 + 6;
      } while ((int)uVar9 < *(int *)((longlong)param_1 + 0xc));
    }
    pvVar3 = (void *)*param_1;
    if (pvVar3 != (void *)0x0) {
      p_Var1 = (__uint64 *)((longlong)pvVar3 + -8);
      _eh_vector_destructor_iterator_(pvVar3,0x30,*p_Var1,(_func_void_void_ptr *)&DAT_144d893a0);
      thunk_FUN_1400020a8(p_Var1,*p_Var1 * 0x30 + 8);
    }
    *param_1 = (longlong)puVar12;
    *(int *)(param_1 + 1) = iVar11;
  }
  return 1;
}



// FUNCTION 144d89aa0 FUN_144d89aa0 body=314 status=ok
// SIG undefined FUN_144d89aa0(void)

undefined8 FUN_144d89aa0(longlong param_1)

{
  __uint64 *p_Var1;
  int iVar2;
  void *pvVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  longlong lVar6;
  ulonglong *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulonglong *puVar10;
  int iVar11;
  ulonglong *puVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  
  iVar2 = *(int *)(param_1 + 0x30);
  if (iVar2 <= *(int *)(param_1 + 0x34)) {
    iVar11 = 1;
    if (iVar2 != 0) {
      iVar11 = iVar2 * 2;
    }
    uVar14 = (ulonglong)iVar11;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar14;
    uVar5 = SUB168(ZEXT816(0x10) * auVar4,0);
    if (SUB168(ZEXT816(0x10) * auVar4,8) != 0) {
      uVar5 = 0xffffffffffffffff;
    }
    lVar6 = uVar5 + 8;
    if (0xfffffffffffffff7 < uVar5) {
      lVar6 = -1;
    }
    puVar7 = (ulonglong *)FUN_148d808d2(lVar6,&DAT_149c3b839);
    puVar10 = (ulonglong *)0x0;
    puVar12 = puVar10;
    if (puVar7 != (ulonglong *)0x0) {
      *puVar7 = uVar14;
      _eh_vector_constructor_iterator_
                (puVar7 + 1,0x10,uVar14,(_func_void_void_ptr *)&LAB_144d897a0,
                 (_func_void_void_ptr *)&DAT_144d897b0);
      puVar12 = puVar7 + 1;
    }
    if (puVar12 == (ulonglong *)0x0) {
      return 0;
    }
    if (0 < *(int *)(param_1 + 0x34)) {
      puVar13 = (undefined4 *)((longlong)puVar12 + 0xc);
      do {
        puVar8 = (undefined8 *)
                 ((longlong)puVar13 + *(longlong *)(param_1 + 0x28) + (-0xc - (longlong)puVar12));
        *(undefined8 *)(puVar13 + -3) = *puVar8;
        puVar13[-1] = *(undefined4 *)(puVar8 + 1);
        *puVar13 = *(undefined4 *)((longlong)puVar8 + 0xc);
        uVar9 = (int)puVar10 + 1;
        puVar10 = (ulonglong *)(ulonglong)uVar9;
        puVar13 = puVar13 + 4;
      } while ((int)uVar9 < *(int *)(param_1 + 0x34));
    }
    pvVar3 = *(void **)(param_1 + 0x28);
    if (pvVar3 != (void *)0x0) {
      p_Var1 = (__uint64 *)((longlong)pvVar3 + -8);
      _eh_vector_destructor_iterator_(pvVar3,0x10,*p_Var1,(_func_void_void_ptr *)&DAT_144d897b0);
      thunk_FUN_1400020a8(p_Var1,*p_Var1 * 0x10 + 8);
    }
    *(ulonglong **)(param_1 + 0x28) = puVar12;
    *(int *)(param_1 + 0x30) = iVar11;
  }
  return 1;
}



// FUNCTION 144d89be0 FUN_144d89be0 body=119 status=ok
// SIG undefined FUN_144d89be0(void)

void FUN_144d89be0(longlong param_1)

{
  __uint64 *p_Var1;
  int iVar2;
  void *pvVar3;
  
  iVar2 = *(int *)(param_1 + 0x34);
  while (0 < iVar2) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
    FUN_144d89f20((longlong)*(int *)(param_1 + 0x34) * 0x10 + *(longlong *)(param_1 + 0x28));
    iVar2 = *(int *)(param_1 + 0x34);
  }
  pvVar3 = *(void **)(param_1 + 0x28);
  if (pvVar3 != (void *)0x0) {
    p_Var1 = (__uint64 *)((longlong)pvVar3 + -8);
    _eh_vector_destructor_iterator_(pvVar3,0x10,*p_Var1,(_func_void_void_ptr *)&DAT_144d89f10);
    thunk_FUN_1400020a8(p_Var1,*p_Var1 * 0x10 + 8);
  }
  return;
}



// FUNCTION 144d89c60 FUN_144d89c60 body=349 status=ok
// SIG undefined FUN_144d89c60(void)

undefined8 FUN_144d89c60(undefined8 *param_1)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int local_res8 [2];
  
  uVar8 = param_1[1];
  uVar9 = param_1[2] + uVar8;
  uVar1 = *(undefined8 *)*param_1;
  while( true ) {
    if ((longlong)uVar9 <= (longlong)uVar8) {
      if (uVar8 != uVar9) {
        return 0xfffffffe;
      }
      return 0;
    }
    lVar3 = FUN_144d84880(uVar1,uVar8,local_res8);
    if (lVar3 < 0) {
      return 0xfffffffe;
    }
    lVar7 = uVar8 + (longlong)local_res8[0];
    if ((-1 < (longlong)uVar9) && ((longlong)uVar9 <= lVar7)) {
      return 0xfffffffe;
    }
    lVar4 = FUN_144d84770(uVar1,lVar7,local_res8);
    if (lVar4 < 0) {
      return 0xfffffffe;
    }
    if (7 < local_res8[0] - 1U) break;
    uVar8 = lVar7 + local_res8[0];
    if (0x7fffffffffffffff < uVar8) {
      return 0xfffffffe;
    }
    if ((-1 < (longlong)uVar9) && ((longlong)uVar9 < (longlong)uVar8)) {
      return 0xfffffffe;
    }
    if (lVar4 != 0) {
      if (lVar3 == 0x7373) {
        cVar2 = FUN_144d8a260(param_1);
        if (cVar2 == '\0') {
          return 0xffffffff;
        }
        puVar6 = (undefined8 *)((longlong)*(int *)((longlong)param_1 + 0x34) * 0x10 + param_1[5]);
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        *puVar6 = 0;
        puVar6[1] = 0;
        uVar5 = FUN_144d89fd0(puVar6,*(undefined8 *)*param_1,uVar8,lVar4);
        if ((int)uVar5 < 0) {
          return uVar5;
        }
      }
      uVar8 = uVar8 + lVar4;
      if ((longlong)uVar9 < (longlong)uVar8) {
        return 0xfffffffe;
      }
    }
  }
  return 0xfffffffe;
}



// FUNCTION 144d89de0 FUN_144d89de0 body=283 status=ok
// SIG undefined FUN_144d89de0(void)

undefined8 FUN_144d89de0(longlong param_1,undefined8 param_2,ulonglong param_3,longlong param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int local_res18 [4];
  
  uVar1 = param_3 + param_4;
  do {
    do {
      if ((longlong)uVar1 <= (longlong)param_3) {
        if (param_3 != uVar1) {
          return 0xfffffffe;
        }
        return 0;
      }
      lVar2 = FUN_144d84880(param_2,param_3,local_res18);
      if (lVar2 < 0) {
        return 0xfffffffe;
      }
      lVar5 = param_3 + (longlong)local_res18[0];
      if ((-1 < (longlong)uVar1) && ((longlong)uVar1 <= lVar5)) {
        return 0xfffffffe;
      }
      lVar3 = FUN_144d84770(param_2,lVar5,local_res18);
      if (lVar3 < 0) {
        return 0xfffffffe;
      }
      if (7 < local_res18[0] - 1U) {
        return 0xfffffffe;
      }
      param_3 = lVar5 + local_res18[0];
      if (0x7fffffffffffffff < param_3) {
        return 0xfffffffe;
      }
      if ((-1 < (longlong)uVar1) && ((longlong)uVar1 < (longlong)param_3)) {
        return 0xfffffffe;
      }
    } while (lVar3 == 0);
    lVar5 = param_1;
    if (lVar2 == 0x45a3) {
LAB_144d89ead:
      uVar4 = FUN_144d84c20(param_2,param_3,lVar3,lVar5);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
    }
    else if (lVar2 == 0x4487) {
      lVar5 = param_1 + 8;
      goto LAB_144d89ead;
    }
    param_3 = param_3 + lVar3;
    if ((longlong)uVar1 < (longlong)param_3) {
      return 0xfffffffe;
    }
  } while( true );
}



// FUNCTION 144d89f20 FUN_144d89f20 body=165 status=ok
// SIG undefined FUN_144d89f20(void)

void FUN_144d89f20(longlong *param_1)

{
  __uint64 *p_Var1;
  int iVar2;
  void *pvVar3;
  undefined8 *puVar4;
  
  iVar2 = *(int *)((longlong)param_1 + 0xc);
  while (0 < iVar2) {
    *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + -1;
    puVar4 = (undefined8 *)((longlong)*(int *)((longlong)param_1 + 0xc) * 0x10 + *param_1);
    thunk_FUN_1400020a8(*puVar4);
    *puVar4 = 0;
    thunk_FUN_1400020a8(puVar4[1]);
    puVar4[1] = 0;
    iVar2 = *(int *)((longlong)param_1 + 0xc);
  }
  pvVar3 = (void *)*param_1;
  if (pvVar3 != (void *)0x0) {
    p_Var1 = (__uint64 *)((longlong)pvVar3 + -8);
    _eh_vector_destructor_iterator_(pvVar3,0x10,*p_Var1,(_func_void_void_ptr *)&DAT_144d89dd0);
    thunk_FUN_1400020a8(p_Var1,*p_Var1 * 0x10 + 8);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}



// FUNCTION 144d89fd0 FUN_144d89fd0 body=329 status=ok
// SIG undefined FUN_144d89fd0(void)

undefined8 FUN_144d89fd0(longlong *param_1,undefined8 param_2,ulonglong param_3,longlong param_4)

{
  ulonglong uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int local_res18 [2];
  
  uVar1 = param_3 + param_4;
  while( true ) {
    if ((longlong)uVar1 <= (longlong)param_3) {
      if (param_3 != uVar1) {
        return 0xfffffffe;
      }
      return 0;
    }
    lVar3 = FUN_144d84880(param_2,param_3,local_res18);
    if (lVar3 < 0) {
      return 0xfffffffe;
    }
    lVar7 = param_3 + (longlong)local_res18[0];
    if ((-1 < (longlong)uVar1) && ((longlong)uVar1 <= lVar7)) {
      return 0xfffffffe;
    }
    lVar4 = FUN_144d84770(param_2,lVar7,local_res18);
    if (lVar4 < 0) {
      return 0xfffffffe;
    }
    if (7 < local_res18[0] - 1U) break;
    param_3 = lVar7 + local_res18[0];
    if (0x7fffffffffffffff < param_3) {
      return 0xfffffffe;
    }
    if ((-1 < (longlong)uVar1) && ((longlong)uVar1 < (longlong)param_3)) {
      return 0xfffffffe;
    }
    if (lVar4 != 0) {
      if (lVar3 == 0x67c8) {
        cVar2 = FUN_144d8a120(param_1);
        if (cVar2 == '\0') {
          return 0xffffffff;
        }
        puVar6 = (undefined8 *)((longlong)*(int *)((longlong)param_1 + 0xc) * 0x10 + *param_1);
        *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
        *puVar6 = 0;
        puVar6[1] = 0;
        uVar5 = FUN_144d89de0(puVar6,param_2,param_3,lVar4);
        if ((int)uVar5 < 0) {
          return uVar5;
        }
      }
      param_3 = param_3 + lVar4;
      if ((longlong)uVar1 < (longlong)param_3) {
        return 0xfffffffe;
      }
    }
  }
  return 0xfffffffe;
}


