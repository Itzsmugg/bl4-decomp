// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144d73d20 FUN_144d73d20 body=152 status=ok
// SIG undefined FUN_144d73d20(void)

undefined8 FUN_144d73d20(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else if (*(int *)(lVar1 + -0x10) == DAT_14c7078d0) {
    pcVar2 = *(code **)(*(longlong *)(lVar1 + -8) + 8);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)();
    }
    uVar3 = *(undefined8 *)(lVar1 + -8);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
  }
  else {
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + 8 + lVar1) + 8))
                ();
    }
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 144d73dc0 FUN_144d73dc0 body=40 status=ok
// SIG undefined FUN_144d73dc0(void)

int FUN_144d73dc0(longlong param_1)

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



// FUNCTION 144d73df0 FUN_144d73df0 body=105 status=ok
// SIG undefined FUN_144d73df0(void)

undefined8 FUN_144d73df0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(code **)(param_1[-5] + 0x10) != (code *)0x0) {
    (**(code **)(param_1[-5] + 0x10))();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -2);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    if (param_1 + -6 != (undefined8 *)0x0) {
      FUN_144d73fd0(param_1);
      *param_1 = &PTR__purecall_14ba6c6b0;
      thunk_FUN_1400020a8(param_1 + -6,0x38);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 144d73e60 FUN_144d73e60 body=34 status=ok
// SIG undefined FUN_144d73e60(void)

bool FUN_144d73e60(longlong param_1)

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



// FUNCTION 144d73e90 FUN_144d73e90 body=38 status=ok
// SIG undefined FUN_144d73e90(void)

bool FUN_144d73e90(longlong param_1)

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



// FUNCTION 144d73ec0 FUN_144d73ec0 body=85 status=ok
// SIG undefined FUN_144d73ec0(void)

longlong FUN_144d73ec0(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_1499d4718;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_1499d4800;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x20,0x28);
  }
  return param_1 + -0x20;
}



// FUNCTION 144d73f20 FUN_144d73f20 body=167 status=ok
// SIG undefined FUN_144d73f20(void)

undefined8 * FUN_144d73f20(undefined8 *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &DAT_1499d4938;
    param_1[4] = &PTR__purecall_14ba6c6b0;
  }
  *param_1 = &PTR__purecall_1499d4608;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) =
       &PTR__purecall_1499d46f0;
  *param_1 = &PTR__purecall_1499d4718;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_1499d4800;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_1499d4828;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_1499d4910;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  return param_1;
}



// FUNCTION 144d73fd0 FUN_144d73fd0 body=124 status=ok
// SIG undefined FUN_144d73fd0(void)

void FUN_144d73fd0(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR_FUN_1499d4828;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_1499d4910;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  FUN_14516fec0();
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_1499d4718;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_1499d4800;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  return;
}



// FUNCTION 144d74050 FUN_144d74050 body=54 status=ok
// SIG undefined FUN_144d74050(void)

bool FUN_144d74050(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0x2f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[5], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 144d74090 FUN_144d74090 body=54 status=ok
// SIG undefined FUN_144d74090(void)

bool FUN_144d74090(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0x37 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[6], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 144d740d0 FUN_144d740d0 body=54 status=ok
// SIG undefined FUN_144d740d0(void)

bool FUN_144d740d0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0x3f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[7], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 144d74110 FUN_144d74110 body=202 status=ok
// SIG undefined FUN_144d74110(void)

ulonglong FUN_144d74110(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong local_res8;
  ulonglong *local_res10;
  
  local_res8 = local_res8 & 0xffffffff00000000;
  local_res10 = param_2;
  uVar4 = FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0x48) || (puVar1[8] == 0)) {
    uVar2 = *param_2;
    if (uVar2 != 0) {
      uVar4 = (**(code **)(*(longlong *)
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
      uVar5 = FUN_144d73d20(&local_res8);
      iVar3 = (*(code *)puVar1[8])(puVar1,uVar5);
      uVar4 = *param_2;
      if (uVar4 != 0) {
        (**(code **)(*(longlong *)(uVar4 + 8 + (longlong)*(int *)(*(longlong *)(uVar4 + 8) + 4)) + 8
                    ))();
      }
      return (ulonglong)(iVar3 != 0);
    }
    uVar4 = 0;
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 144d741e0 FUN_144d741e0 body=202 status=ok
// SIG undefined FUN_144d741e0(void)

ulonglong FUN_144d741e0(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong local_res8;
  ulonglong *local_res10;
  
  local_res8 = local_res8 & 0xffffffff00000000;
  local_res10 = param_2;
  uVar4 = FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0x50) || (puVar1[9] == 0)) {
    uVar2 = *param_2;
    if (uVar2 != 0) {
      uVar4 = (**(code **)(*(longlong *)
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
      uVar5 = FUN_144d73d20(&local_res8);
      iVar3 = (*(code *)puVar1[9])(puVar1,uVar5);
      uVar4 = *param_2;
      if (uVar4 != 0) {
        (**(code **)(*(longlong *)(uVar4 + 8 + (longlong)*(int *)(*(longlong *)(uVar4 + 8) + 4)) + 8
                    ))();
      }
      return (ulonglong)(iVar3 != 0);
    }
    uVar4 = 0;
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 144d742b0 FUN_144d742b0 body=119 status=ok
// SIG undefined FUN_144d742b0(void)

undefined8 * FUN_144d742b0(longlong param_1,undefined8 *param_2,undefined1 param_3)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x57 < *puVar1) && ((code *)puVar1[10] != (code *)0x0)) {
    uVar2 = (*(code *)puVar1[10])(puVar1,param_3);
    FUN_144d73c30(param_2,uVar2);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144d74330 FUN_144d74330 body=49 status=ok
// SIG undefined FUN_144d74330(void)

undefined8 FUN_144d74330(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  FUN_14516fec0();
  if ((0x5f < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[0xb],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000144d74356. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 144d74370 FUN_144d74370 body=54 status=ok
// SIG undefined FUN_144d74370(void)

bool FUN_144d74370(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0x67 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0xc], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 144d743b0 FUN_144d743b0 body=95 status=ok
// SIG undefined FUN_144d743b0(void)

bool FUN_144d743b0(longlong param_1,longlong param_2)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((((0x6f < **(ulonglong **)(param_1 + -8)) &&
       (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0xd], pcVar1 != (code *)0x0)) &&
      (*(longlong *)(param_2 + 8) != 0)) && (*(longlong *)(*(longlong *)(param_2 + 8) + 8) != 0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 144d74410 FUN_144d74410 body=157 status=ok
// SIG undefined FUN_144d74410(void)

bool FUN_144d74410(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  int iVar2;
  longlong lVar3;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x77 < *puVar1) && (puVar1[0xe] != 0)) {
    lVar3 = cef_string_list_alloc();
    if (lVar3 != 0) {
      FUN_14516e860(param_2,lVar3);
    }
    iVar2 = (*(code *)puVar1[0xe])(puVar1,lVar3);
    if (lVar3 != 0) {
      FUN_144d739a0(param_2);
      FUN_14516e770(lVar3,param_2);
      cef_string_list_free(lVar3);
    }
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 144d744b0 FUN_144d744b0 body=98 status=ok
// SIG undefined FUN_144d744b0(void)

bool FUN_144d744b0(longlong param_1,longlong param_2)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((((0x7f < **(ulonglong **)(param_1 + -8)) &&
       (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0xf], pcVar1 != (code *)0x0)) &&
      (*(longlong *)(param_2 + 8) != 0)) && (*(longlong *)(*(longlong *)(param_2 + 8) + 8) != 0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 144d74520 FUN_144d74520 body=96 status=ok
// SIG undefined FUN_144d74520(void)

undefined8 FUN_144d74520(longlong param_1,longlong param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  FUN_14516fec0();
  if ((((0x87 < **(ulonglong **)(param_1 + -8)) &&
       (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[0x10],
       UNRECOVERED_JUMPTABLE != (code *)0x0)) && (*(longlong *)(param_2 + 8) != 0)) &&
     (*(longlong *)(*(longlong *)(param_2 + 8) + 8) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000144d74570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 144d74580 FUN_144d74580 body=136 status=ok
// SIG undefined FUN_144d74580(void)

undefined8 * FUN_144d74580(longlong param_1,undefined8 *param_2,longlong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  FUN_14516fec0();
  if ((((0x8f < **(ulonglong **)(param_1 + -8)) &&
       (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x11], pcVar1 != (code *)0x0)) &&
      (*(longlong *)(param_3 + 8) != 0)) && (*(longlong *)(*(longlong *)(param_3 + 8) + 8) != 0)) {
    uVar2 = (*pcVar1)();
    FUN_144d737e0(param_2,uVar2);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144d74610 FUN_144d74610 body=101 status=ok
// SIG undefined FUN_144d74610(void)

bool FUN_144d74610(longlong param_1,longlong param_2)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((((0x97 < **(ulonglong **)(param_1 + -8)) &&
       (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x12], pcVar1 != (code *)0x0)) &&
      (*(longlong *)(param_2 + 8) != 0)) && (*(longlong *)(*(longlong *)(param_2 + 8) + 8) != 0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 144d74680 FUN_144d74680 body=96 status=ok
// SIG undefined FUN_144d74680(void)

undefined8 FUN_144d74680(longlong param_1,longlong param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  FUN_14516fec0();
  if ((((0x9f < **(ulonglong **)(param_1 + -8)) &&
       (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[0x13],
       UNRECOVERED_JUMPTABLE != (code *)0x0)) && (*(longlong *)(param_2 + 8) != 0)) &&
     (*(longlong *)(*(longlong *)(param_2 + 8) + 8) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000144d746d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 144d746e0 FUN_144d746e0 body=97 status=ok
// SIG undefined FUN_144d746e0(void)

undefined8 FUN_144d746e0(longlong param_1,longlong param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  FUN_14516fec0();
  if ((((0xa7 < **(ulonglong **)(param_1 + -8)) &&
       (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[0x14],
       UNRECOVERED_JUMPTABLE != (code *)0x0)) && (*(longlong *)(param_2 + 8) != 0)) &&
     (*(longlong *)(*(longlong *)(param_2 + 8) + 8) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000144d74730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 144d74750 FUN_144d74750 body=266 status=ok
// SIG undefined FUN_144d74750(void)

undefined8 * FUN_144d74750(longlong param_1,undefined8 *param_2,longlong param_3)

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
  FUN_14516fec0();
  if ((**(ulonglong **)(param_1 + -8) < 0xb0) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x15], pcVar1 == (code *)0x0)) {
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    if ((*(longlong *)(param_3 + 8) != 0) && (*(longlong *)(*(longlong *)(param_3 + 8) + 8) != 0)) {
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
      if (puVar2 == (undefined8 *)0x0) {
        return param_2;
      }
      if (local_18 == '\0') {
        return param_2;
      }
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
      return param_2;
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14ba6d600;
  return param_2;
}



// FUNCTION 144d74860 FUN_144d74860 body=136 status=ok
// SIG undefined FUN_144d74860(void)

undefined8 * FUN_144d74860(longlong param_1,undefined8 *param_2,longlong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  FUN_14516fec0();
  if ((((0xb7 < **(ulonglong **)(param_1 + -8)) &&
       (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x16], pcVar1 != (code *)0x0)) &&
      (*(longlong *)(param_3 + 8) != 0)) && (*(longlong *)(*(longlong *)(param_3 + 8) + 8) != 0)) {
    uVar2 = (*pcVar1)();
    FUN_144d736f0(param_2,uVar2);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144d748f0 FUN_144d748f0 body=136 status=ok
// SIG undefined FUN_144d748f0(void)

undefined8 * FUN_144d748f0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  FUN_14516fec0();
  if ((((0xbf < **(ulonglong **)(param_1 + -8)) &&
       (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x17], pcVar1 != (code *)0x0)) &&
      (*(longlong *)(param_3 + 8) != 0)) && (*(longlong *)(*(longlong *)(param_3 + 8) + 8) != 0)) {
    uVar2 = (*pcVar1)();
    FUN_144d73c30(param_2,uVar2);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144d74980 FUN_144d74980 body=136 status=ok
// SIG undefined FUN_144d74980(void)

undefined8 * FUN_144d74980(longlong param_1,undefined8 *param_2,longlong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  FUN_14516fec0();
  if ((((199 < **(ulonglong **)(param_1 + -8)) &&
       (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x18], pcVar1 != (code *)0x0)) &&
      (*(longlong *)(param_3 + 8) != 0)) && (*(longlong *)(*(longlong *)(param_3 + 8) + 8) != 0)) {
    uVar2 = (*pcVar1)();
    FUN_144d75160(param_2,uVar2);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144d74a10 FUN_144d74a10 body=242 status=ok
// SIG undefined FUN_144d74a10(void)

ulonglong FUN_144d74a10(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined4 local_res8 [2];
  undefined8 uVar7;
  
  uVar7 = 0xfffffffffffffffe;
  local_res8[0] = 0;
  uVar5 = FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0xd0) || (puVar1[0x19] == 0)) {
    lVar3 = *param_3;
    if (lVar3 != 0) {
      uVar5 = (**(code **)(*(longlong *)
                            ((longlong)*(int *)(*(longlong *)(lVar3 + 8) + 4) + lVar3 + 8) + 8))();
    }
  }
  else {
    uVar5 = *(ulonglong *)(param_2 + 8);
    if ((uVar5 == 0) || (*(longlong *)(uVar5 + 8) == 0)) {
      lVar3 = *param_3;
      if (lVar3 != 0) {
        uVar5 = (**(code **)(*(longlong *)
                              ((longlong)*(int *)(*(longlong *)(lVar3 + 8) + 4) + lVar3 + 8) + 8))()
        ;
      }
    }
    else {
      if (*param_3 != 0) {
        uVar6 = FUN_144d75360(local_res8,param_3);
        uVar2 = *(undefined8 *)(param_2 + 8);
        uVar6 = FUN_144d738d0(uVar6);
        iVar4 = (*(code *)puVar1[0x19])(puVar1,uVar2,uVar6,param_4,uVar7);
        FUN_144d73a30(param_3);
        return (ulonglong)(iVar4 != 0);
      }
      uVar5 = FUN_144d73a30(param_3);
    }
  }
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 144d74b10 FUN_144d74b10 body=101 status=ok
// SIG undefined FUN_144d74b10(void)

bool FUN_144d74b10(longlong param_1,longlong param_2)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((((0xd7 < **(ulonglong **)(param_1 + -8)) &&
       (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x1a], pcVar1 != (code *)0x0)) &&
      (*(longlong *)(param_2 + 8) != 0)) && (*(longlong *)(*(longlong *)(param_2 + 8) + 8) != 0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 144d74b80 FUN_144d74b80 body=124 status=ok
// SIG undefined FUN_144d74b80(void)

bool FUN_144d74b80(longlong param_1,longlong param_2,undefined1 param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  int iVar3;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((((0xdf < *puVar1) && ((code *)puVar1[0x1b] != (code *)0x0)) &&
      (lVar2 = *(longlong *)(param_2 + 8), lVar2 != 0)) && (*(longlong *)(lVar2 + 8) != 0)) {
    iVar3 = (*(code *)puVar1[0x1b])(puVar1,lVar2,param_3);
    return iVar3 != 0;
  }
  return false;
}



// FUNCTION 144d74c00 FUN_144d74c00 body=122 status=ok
// SIG undefined FUN_144d74c00(void)

bool FUN_144d74c00(longlong param_1,longlong param_2,undefined4 param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  int iVar3;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((((0xe7 < *puVar1) && ((code *)puVar1[0x1c] != (code *)0x0)) &&
      (lVar2 = *(longlong *)(param_2 + 8), lVar2 != 0)) && (*(longlong *)(lVar2 + 8) != 0)) {
    iVar3 = (*(code *)puVar1[0x1c])(puVar1,lVar2,param_3);
    return iVar3 != 0;
  }
  return false;
}



// FUNCTION 144d74c80 FUN_144d74c80 body=122 status=ok
// SIG undefined FUN_144d74c80(void)

bool FUN_144d74c80(longlong param_1,longlong param_2,undefined4 param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  int iVar3;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((((0xef < *puVar1) && ((code *)puVar1[0x1d] != (code *)0x0)) &&
      (lVar2 = *(longlong *)(param_2 + 8), lVar2 != 0)) && (*(longlong *)(lVar2 + 8) != 0)) {
    iVar3 = (*(code *)puVar1[0x1d])(puVar1,lVar2,param_3);
    return iVar3 != 0;
  }
  return false;
}



// FUNCTION 144d74d00 FUN_144d74d00 body=123 status=ok
// SIG undefined FUN_144d74d00(void)

bool FUN_144d74d00(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  int iVar3;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((((0xf7 < *puVar1) && ((code *)puVar1[0x1e] != (code *)0x0)) &&
      (lVar2 = *(longlong *)(param_2 + 8), lVar2 != 0)) && (*(longlong *)(lVar2 + 8) != 0)) {
    iVar3 = (*(code *)puVar1[0x1e])(puVar1,lVar2,*(undefined8 *)(param_3 + 8));
    return iVar3 != 0;
  }
  return false;
}



// FUNCTION 144d74d80 FUN_144d74d80 body=242 status=ok
// SIG undefined FUN_144d74d80(void)

ulonglong FUN_144d74d80(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined4 local_res8 [2];
  undefined8 uVar7;
  
  uVar7 = 0xfffffffffffffffe;
  local_res8[0] = 0;
  uVar5 = FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0x100) || (puVar1[0x1f] == 0)) {
    lVar3 = *param_3;
    if (lVar3 != 0) {
      uVar5 = (**(code **)(*(longlong *)
                            ((longlong)*(int *)(*(longlong *)(lVar3 + 8) + 4) + lVar3 + 8) + 8))();
    }
  }
  else {
    uVar5 = *(ulonglong *)(param_2 + 8);
    if ((uVar5 == 0) || (*(longlong *)(uVar5 + 8) == 0)) {
      lVar3 = *param_3;
      if (lVar3 != 0) {
        uVar5 = (**(code **)(*(longlong *)
                              ((longlong)*(int *)(*(longlong *)(lVar3 + 8) + 4) + lVar3 + 8) + 8))()
        ;
      }
    }
    else {
      if (*param_3 != 0) {
        uVar6 = FUN_144d753a0(local_res8,param_3);
        uVar2 = *(undefined8 *)(param_2 + 8);
        uVar6 = FUN_144d750c0(uVar6);
        iVar4 = (*(code *)puVar1[0x1f])(puVar1,uVar2,uVar6,param_4,uVar7);
        FUN_144d73a00(param_3);
        return (ulonglong)(iVar4 != 0);
      }
      uVar5 = FUN_144d73a00(param_3);
    }
  }
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 144d74e80 FUN_144d74e80 body=242 status=ok
// SIG undefined FUN_144d74e80(void)

ulonglong FUN_144d74e80(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined4 local_res8 [2];
  undefined8 uVar7;
  
  uVar7 = 0xfffffffffffffffe;
  local_res8[0] = 0;
  uVar5 = FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0x108) || (puVar1[0x20] == 0)) {
    lVar3 = *param_3;
    if (lVar3 != 0) {
      uVar5 = (**(code **)(*(longlong *)
                            ((longlong)*(int *)(*(longlong *)(lVar3 + 8) + 4) + lVar3 + 8) + 8))();
    }
  }
  else {
    uVar5 = *(ulonglong *)(param_2 + 8);
    if ((uVar5 == 0) || (*(longlong *)(uVar5 + 8) == 0)) {
      lVar3 = *param_3;
      if (lVar3 != 0) {
        uVar5 = (**(code **)(*(longlong *)
                              ((longlong)*(int *)(*(longlong *)(lVar3 + 8) + 4) + lVar3 + 8) + 8))()
        ;
      }
    }
    else {
      if (*param_3 != 0) {
        uVar6 = FUN_144d752f0(local_res8,param_3);
        uVar2 = *(undefined8 *)(param_2 + 8);
        uVar6 = FUN_144d73d20(uVar6);
        iVar4 = (*(code *)puVar1[0x20])(puVar1,uVar2,uVar6,param_4,uVar7);
        FUN_144d75330(param_3);
        return (ulonglong)(iVar4 != 0);
      }
      uVar5 = FUN_144d75330(param_3);
    }
  }
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 144d74f80 FUN_144d74f80 body=242 status=ok
// SIG undefined FUN_144d74f80(void)

ulonglong FUN_144d74f80(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined4 local_res8 [2];
  undefined8 uVar7;
  
  uVar7 = 0xfffffffffffffffe;
  local_res8[0] = 0;
  uVar5 = FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0x110) || (puVar1[0x21] == 0)) {
    lVar3 = *param_3;
    if (lVar3 != 0) {
      uVar5 = (**(code **)(*(longlong *)
                            ((longlong)*(int *)(*(longlong *)(lVar3 + 8) + 4) + lVar3 + 8) + 8))();
    }
  }
  else {
    uVar5 = *(ulonglong *)(param_2 + 8);
    if ((uVar5 == 0) || (*(longlong *)(uVar5 + 8) == 0)) {
      lVar3 = *param_3;
      if (lVar3 != 0) {
        uVar5 = (**(code **)(*(longlong *)
                              ((longlong)*(int *)(*(longlong *)(lVar3 + 8) + 4) + lVar3 + 8) + 8))()
        ;
      }
    }
    else {
      if (*param_3 != 0) {
        uVar6 = FUN_144d753e0(local_res8,param_3);
        uVar2 = *(undefined8 *)(param_2 + 8);
        uVar6 = FUN_144d75250(uVar6);
        iVar4 = (*(code *)puVar1[0x21])(puVar1,uVar2,uVar6,param_4,uVar7);
        FUN_144d75420(param_3);
        return (ulonglong)(iVar4 != 0);
      }
      uVar5 = FUN_144d75420(param_3);
    }
  }
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 144d75080 FUN_144d75080 body=64 status=ok
// SIG undefined FUN_144d75080(void)

undefined8 * FUN_144d75080(undefined8 *param_1,ulonglong param_2)

{
  FUN_144d73fd0();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -4,0x28);
  }
  return param_1 + -4;
}



// FUNCTION 144d750c0 FUN_144d750c0 body=156 status=ok
// SIG undefined FUN_144d750c0(void)

undefined8 FUN_144d750c0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else if (*(int *)(lVar1 + -0x10) == DAT_14c7301ec) {
    pcVar2 = *(code **)(*(longlong *)(lVar1 + -8) + 8);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)();
    }
    uVar3 = *(undefined8 *)(lVar1 + -8);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
  }
  else {
    uVar3 = FUN_14516b2d0(*(int *)(lVar1 + -0x10),lVar1,param_3,param_4,0xfffffffffffffffe);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
  }
  return uVar3;
}



// FUNCTION 144d75160 FUN_144d75160 body=230 status=ok
// SIG undefined FUN_144d75160(void)

longlong * FUN_144d75160(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

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
      FUN_144d75670(puVar2 + 4,1,param_3,param_4,uVar3,uVar4);
    }
    *puVar2 = DAT_14c7078d4;
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



// FUNCTION 144d75250 FUN_144d75250 body=156 status=ok
// SIG undefined FUN_144d75250(void)

undefined8 FUN_144d75250(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else if (*(int *)(lVar1 + -0x10) == DAT_14c7078d4) {
    pcVar2 = *(code **)(*(longlong *)(lVar1 + -8) + 8);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)();
    }
    uVar3 = *(undefined8 *)(lVar1 + -8);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
  }
  else {
    uVar3 = FUN_144d75600(*(int *)(lVar1 + -0x10),lVar1,param_3,param_4,0xfffffffffffffffe);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
  }
  return uVar3;
}



// FUNCTION 144d752f0 FUN_144d752f0 body=49 status=ok
// SIG undefined FUN_144d752f0(void)

longlong * FUN_144d752f0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 144d75330 FUN_144d75330 body=48 status=ok
// SIG undefined FUN_144d75330(void)

void FUN_144d75330(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 144d75360 FUN_144d75360 body=49 status=ok
// SIG undefined FUN_144d75360(void)

longlong * FUN_144d75360(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 144d753a0 FUN_144d753a0 body=49 status=ok
// SIG undefined FUN_144d753a0(void)

longlong * FUN_144d753a0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 144d753e0 FUN_144d753e0 body=49 status=ok
// SIG undefined FUN_144d753e0(void)

longlong * FUN_144d753e0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 144d75420 FUN_144d75420 body=48 status=ok
// SIG undefined FUN_144d75420(void)

void FUN_144d75420(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 144d754a0 FUN_144d754a0 body=47 status=ok
// SIG undefined FUN_144d754a0(void)

undefined8
FUN_144d754a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  FUN_14516fec0();
  uVar1 = cef_list_value_create();
  FUN_144d75160(param_1,uVar1,param_3,param_4,uVar2);
  return param_1;
}



// FUNCTION 144d754d0 FUN_144d754d0 body=48 status=ok
// SIG undefined FUN_144d754d0(void)

longlong FUN_144d754d0(longlong param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x10,0x18);
    return param_1 + -0x10;
  }
  return param_1 + -0x10;
}



// FUNCTION 144d75500 FUN_144d75500 body=40 status=ok
// SIG undefined FUN_144d75500(void)

int FUN_144d75500(longlong param_1)

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



// FUNCTION 144d75530 FUN_144d75530 body=105 status=ok
// SIG undefined FUN_144d75530(void)

undefined8 FUN_144d75530(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(code **)(param_1[-5] + 0x10) != (code *)0x0) {
    (**(code **)(param_1[-5] + 0x10))();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -2);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    if (param_1 + -6 != (undefined8 *)0x0) {
      FUN_144d75720(param_1);
      *param_1 = &PTR__purecall_14ba6c6b0;
      thunk_FUN_1400020a8(param_1 + -6,0x38);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 144d755a0 FUN_144d755a0 body=34 status=ok
// SIG undefined FUN_144d755a0(void)

bool FUN_144d755a0(longlong param_1)

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



// FUNCTION 144d755d0 FUN_144d755d0 body=38 status=ok
// SIG undefined FUN_144d755d0(void)

bool FUN_144d755d0(longlong param_1)

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



// FUNCTION 144d75600 FUN_144d75600 body=11 status=ok
// SIG undefined FUN_144d75600(void)

undefined8 FUN_144d75600(void)

{
  return 0;
}



// FUNCTION 144d75610 FUN_144d75610 body=85 status=ok
// SIG undefined FUN_144d75610(void)

longlong FUN_144d75610(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_1499d4ca0;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_1499d4d80;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x20,0x28);
  }
  return param_1 + -0x20;
}



// FUNCTION 144d75670 FUN_144d75670 body=167 status=ok
// SIG undefined FUN_144d75670(void)

undefined8 * FUN_144d75670(undefined8 *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &DAT_1499d4eb0;
    param_1[4] = &PTR__purecall_14ba6c6b0;
  }
  *param_1 = &PTR__purecall_1499d4b98;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) =
       &PTR__purecall_1499d4c78;
  *param_1 = &PTR__purecall_1499d4ca0;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_1499d4d80;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_1499d4da8;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_1499d4e88;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  return param_1;
}



// FUNCTION 144d75720 FUN_144d75720 body=124 status=ok
// SIG undefined FUN_144d75720(void)

void FUN_144d75720(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR_FUN_1499d4da8;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_1499d4e88;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  FUN_14516fec0();
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_1499d4ca0;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_1499d4d80;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  return;
}



// FUNCTION 144d757a0 FUN_144d757a0 body=54 status=ok
// SIG undefined FUN_144d757a0(void)

bool FUN_144d757a0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0x2f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[5], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 144d757e0 FUN_144d757e0 body=54 status=ok
// SIG undefined FUN_144d757e0(void)

bool FUN_144d757e0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0x37 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[6], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 144d75820 FUN_144d75820 body=54 status=ok
// SIG undefined FUN_144d75820(void)

bool FUN_144d75820(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0x3f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[7], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 144d75860 FUN_144d75860 body=202 status=ok
// SIG undefined FUN_144d75860(void)

ulonglong FUN_144d75860(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong local_res8;
  ulonglong *local_res10;
  
  local_res8 = local_res8 & 0xffffffff00000000;
  local_res10 = param_2;
  uVar4 = FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0x48) || (puVar1[8] == 0)) {
    uVar2 = *param_2;
    if (uVar2 != 0) {
      uVar4 = (**(code **)(*(longlong *)
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
      uVar5 = FUN_144d75250(&local_res8);
      iVar3 = (*(code *)puVar1[8])(puVar1,uVar5);
      uVar4 = *param_2;
      if (uVar4 != 0) {
        (**(code **)(*(longlong *)(uVar4 + 8 + (longlong)*(int *)(*(longlong *)(uVar4 + 8) + 4)) + 8
                    ))();
      }
      return (ulonglong)(iVar3 != 0);
    }
    uVar4 = 0;
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 144d75930 FUN_144d75930 body=202 status=ok
// SIG undefined FUN_144d75930(void)

ulonglong FUN_144d75930(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong local_res8;
  ulonglong *local_res10;
  
  local_res8 = local_res8 & 0xffffffff00000000;
  local_res10 = param_2;
  uVar4 = FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0x50) || (puVar1[9] == 0)) {
    uVar2 = *param_2;
    if (uVar2 != 0) {
      uVar4 = (**(code **)(*(longlong *)
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
      uVar5 = FUN_144d75250(&local_res8);
      iVar3 = (*(code *)puVar1[9])(puVar1,uVar5);
      uVar4 = *param_2;
      if (uVar4 != 0) {
        (**(code **)(*(longlong *)(uVar4 + 8 + (longlong)*(int *)(*(longlong *)(uVar4 + 8) + 4)) + 8
                    ))();
      }
      return (ulonglong)(iVar3 != 0);
    }
    uVar4 = 0;
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 144d75a00 FUN_144d75a00 body=96 status=ok
// SIG undefined FUN_144d75a00(void)

undefined8 *
FUN_144d75a00(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  FUN_14516fec0();
  if ((0x57 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[10], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_144d75160(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144d75a60 FUN_144d75a60 body=74 status=ok
// SIG undefined FUN_144d75a60(void)

bool FUN_144d75a60(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  int iVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x5f < *puVar1) && ((code *)puVar1[0xb] != (code *)0x0)) {
    iVar2 = (*(code *)puVar1[0xb])(puVar1,param_2);
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 144d75ab0 FUN_144d75ab0 body=49 status=ok
// SIG undefined FUN_144d75ab0(void)

undefined8 FUN_144d75ab0(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  FUN_14516fec0();
  if ((0x67 < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[0xc],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000144d75ad6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 144d75af0 FUN_144d75af0 body=54 status=ok
// SIG undefined FUN_144d75af0(void)

bool FUN_144d75af0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0x6f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0xd], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 144d75b30 FUN_144d75b30 body=74 status=ok
// SIG undefined FUN_144d75b30(void)

bool FUN_144d75b30(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  int iVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x77 < *puVar1) && ((code *)puVar1[0xe] != (code *)0x0)) {
    iVar2 = (*(code *)puVar1[0xe])(puVar1,param_2);
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 144d75b80 FUN_144d75b80 body=72 status=ok
// SIG undefined FUN_144d75b80(void)

undefined8 FUN_144d75b80(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x7f < *puVar1) && ((code *)puVar1[0xf] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000144d75bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)puVar1[0xf])(puVar1,param_2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 144d75bd0 FUN_144d75bd0 body=123 status=ok
// SIG undefined FUN_144d75bd0(void)

undefined8 * FUN_144d75bd0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x87 < *puVar1) && ((code *)puVar1[0x10] != (code *)0x0)) {
    uVar2 = (*(code *)puVar1[0x10])(puVar1,param_3);
    FUN_144d737e0(param_2,uVar2);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144d75c50 FUN_144d75c50 body=80 status=ok
// SIG undefined FUN_144d75c50(void)

bool FUN_144d75c50(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  int iVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x8f < *puVar1) && ((code *)puVar1[0x11] != (code *)0x0)) {
    iVar2 = (*(code *)puVar1[0x11])(puVar1,param_2);
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 144d75ca0 FUN_144d75ca0 body=75 status=ok
// SIG undefined FUN_144d75ca0(void)

undefined8 FUN_144d75ca0(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x97 < *puVar1) && ((code *)puVar1[0x12] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000144d75cdb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)puVar1[0x12])(puVar1,param_2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 144d75cf0 FUN_144d75cf0 body=76 status=ok
// SIG undefined FUN_144d75cf0(void)

undefined8 FUN_144d75cf0(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x9f < *puVar1) && ((code *)puVar1[0x13] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000144d75d2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)puVar1[0x13])(puVar1,param_2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 144d75d40 FUN_144d75d40 body=244 status=ok
// SIG undefined FUN_144d75d40(void)

undefined8 * FUN_144d75d40(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
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
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0xa8) || ((code *)puVar1[0x14] == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*(code *)puVar1[0x14])(puVar1,param_3);
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



// FUNCTION 144d75e40 FUN_144d75e40 body=123 status=ok
// SIG undefined FUN_144d75e40(void)

undefined8 * FUN_144d75e40(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0xaf < *puVar1) && ((code *)puVar1[0x15] != (code *)0x0)) {
    uVar2 = (*(code *)puVar1[0x15])(puVar1,param_3);
    FUN_144d736f0(param_2,uVar2);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144d75ec0 FUN_144d75ec0 body=123 status=ok
// SIG undefined FUN_144d75ec0(void)

undefined8 * FUN_144d75ec0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0xb7 < *puVar1) && ((code *)puVar1[0x16] != (code *)0x0)) {
    uVar2 = (*(code *)puVar1[0x16])(puVar1,param_3);
    FUN_144d73c30(param_2,uVar2);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144d75f40 FUN_144d75f40 body=123 status=ok
// SIG undefined FUN_144d75f40(void)

undefined8 * FUN_144d75f40(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0xbf < *puVar1) && ((code *)puVar1[0x17] != (code *)0x0)) {
    uVar2 = (*(code *)puVar1[0x17])(puVar1,param_3);
    FUN_144d75160(param_2,uVar2);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144d75fc0 FUN_144d75fc0 body=227 status=ok
// SIG undefined FUN_144d75fc0(void)

ulonglong FUN_144d75fc0(longlong param_1,undefined8 param_2,ulonglong *param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong local_res8;
  undefined8 uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  local_res8 = local_res8 & 0xffffffff00000000;
  uVar4 = FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 200) || (puVar1[0x18] == 0)) {
    uVar2 = *param_3;
    if (uVar2 != 0) {
      uVar4 = (**(code **)(*(longlong *)
                            ((longlong)*(int *)(*(longlong *)(uVar2 + 8) + 4) + uVar2 + 8) + 8))();
    }
  }
  else {
    local_res8 = *param_3;
    if (local_res8 != 0) {
      if (local_res8 != 0) {
        (*(code *)**(undefined8 **)
                    (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      }
      uVar5 = FUN_144d738d0(&local_res8);
      iVar3 = (*(code *)puVar1[0x18])(puVar1,param_2,uVar5,param_4,uVar6);
      uVar4 = *param_3;
      if (uVar4 != 0) {
        (**(code **)(*(longlong *)(uVar4 + 8 + (longlong)*(int *)(*(longlong *)(uVar4 + 8) + 4)) + 8
                    ))();
      }
      return (ulonglong)(iVar3 != 0);
    }
    uVar4 = 0;
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 144d760b0 FUN_144d760b0 body=80 status=ok
// SIG undefined FUN_144d760b0(void)

bool FUN_144d760b0(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  int iVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0xcf < *puVar1) && ((code *)puVar1[0x19] != (code *)0x0)) {
    iVar2 = (*(code *)puVar1[0x19])(puVar1,param_2);
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 144d76100 FUN_144d76100 body=103 status=ok
// SIG undefined FUN_144d76100(void)

bool FUN_144d76100(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  ulonglong *puVar1;
  int iVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0xd7 < *puVar1) && ((code *)puVar1[0x1a] != (code *)0x0)) {
    iVar2 = (*(code *)puVar1[0x1a])(puVar1,param_2,param_3);
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 144d76170 FUN_144d76170 body=101 status=ok
// SIG undefined FUN_144d76170(void)

bool FUN_144d76170(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  ulonglong *puVar1;
  int iVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0xdf < *puVar1) && ((code *)puVar1[0x1b] != (code *)0x0)) {
    iVar2 = (*(code *)puVar1[0x1b])(puVar1,param_2,param_3);
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 144d761e0 FUN_144d761e0 body=101 status=ok
// SIG undefined FUN_144d761e0(void)

bool FUN_144d761e0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  ulonglong *puVar1;
  int iVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0xe7 < *puVar1) && ((code *)puVar1[0x1c] != (code *)0x0)) {
    iVar2 = (*(code *)puVar1[0x1c])(puVar1,param_2,param_3);
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 144d76250 FUN_144d76250 body=102 status=ok
// SIG undefined FUN_144d76250(void)

bool FUN_144d76250(longlong param_1,undefined8 param_2,longlong param_3)

{
  ulonglong *puVar1;
  int iVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0xef < *puVar1) && ((code *)puVar1[0x1d] != (code *)0x0)) {
    iVar2 = (*(code *)puVar1[0x1d])(puVar1,param_2,*(undefined8 *)(param_3 + 8));
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 144d762c0 FUN_144d762c0 body=227 status=ok
// SIG undefined FUN_144d762c0(void)

ulonglong FUN_144d762c0(longlong param_1,undefined8 param_2,ulonglong *param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong local_res8;
  undefined8 uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  local_res8 = local_res8 & 0xffffffff00000000;
  uVar4 = FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0xf8) || (puVar1[0x1e] == 0)) {
    uVar2 = *param_3;
    if (uVar2 != 0) {
      uVar4 = (**(code **)(*(longlong *)
                            ((longlong)*(int *)(*(longlong *)(uVar2 + 8) + 4) + uVar2 + 8) + 8))();
    }
  }
  else {
    local_res8 = *param_3;
    if (local_res8 != 0) {
      if (local_res8 != 0) {
        (*(code *)**(undefined8 **)
                    (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      }
      uVar5 = FUN_144d750c0(&local_res8);
      iVar3 = (*(code *)puVar1[0x1e])(puVar1,param_2,uVar5,param_4,uVar6);
      uVar4 = *param_3;
      if (uVar4 != 0) {
        (**(code **)(*(longlong *)(uVar4 + 8 + (longlong)*(int *)(*(longlong *)(uVar4 + 8) + 4)) + 8
                    ))();
      }
      return (ulonglong)(iVar3 != 0);
    }
    uVar4 = 0;
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 144d763b0 FUN_144d763b0 body=227 status=ok
// SIG undefined FUN_144d763b0(void)

ulonglong FUN_144d763b0(longlong param_1,undefined8 param_2,ulonglong *param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong local_res8;
  undefined8 uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  local_res8 = local_res8 & 0xffffffff00000000;
  uVar4 = FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0x100) || (puVar1[0x1f] == 0)) {
    uVar2 = *param_3;
    if (uVar2 != 0) {
      uVar4 = (**(code **)(*(longlong *)
                            ((longlong)*(int *)(*(longlong *)(uVar2 + 8) + 4) + uVar2 + 8) + 8))();
    }
  }
  else {
    local_res8 = *param_3;
    if (local_res8 != 0) {
      if (local_res8 != 0) {
        (*(code *)**(undefined8 **)
                    (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      }
      uVar5 = FUN_144d73d20(&local_res8);
      iVar3 = (*(code *)puVar1[0x1f])(puVar1,param_2,uVar5,param_4,uVar6);
      uVar4 = *param_3;
      if (uVar4 != 0) {
        (**(code **)(*(longlong *)(uVar4 + 8 + (longlong)*(int *)(*(longlong *)(uVar4 + 8) + 4)) + 8
                    ))();
      }
      return (ulonglong)(iVar3 != 0);
    }
    uVar4 = 0;
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 144d764a0 FUN_144d764a0 body=227 status=ok
// SIG undefined FUN_144d764a0(void)

ulonglong FUN_144d764a0(longlong param_1,undefined8 param_2,ulonglong *param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong local_res8;
  undefined8 uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  local_res8 = local_res8 & 0xffffffff00000000;
  uVar4 = FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0x108) || (puVar1[0x20] == 0)) {
    uVar2 = *param_3;
    if (uVar2 != 0) {
      uVar4 = (**(code **)(*(longlong *)
                            ((longlong)*(int *)(*(longlong *)(uVar2 + 8) + 4) + uVar2 + 8) + 8))();
    }
  }
  else {
    local_res8 = *param_3;
    if (local_res8 != 0) {
      if (local_res8 != 0) {
        (*(code *)**(undefined8 **)
                    (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      }
      uVar5 = FUN_144d75250(&local_res8);
      iVar3 = (*(code *)puVar1[0x20])(puVar1,param_2,uVar5,param_4,uVar6);
      uVar4 = *param_3;
      if (uVar4 != 0) {
        (**(code **)(*(longlong *)(uVar4 + 8 + (longlong)*(int *)(*(longlong *)(uVar4 + 8) + 4)) + 8
                    ))();
      }
      return (ulonglong)(iVar3 != 0);
    }
    uVar4 = 0;
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 144d76590 FUN_144d76590 body=64 status=ok
// SIG undefined FUN_144d76590(void)

undefined8 * FUN_144d76590(undefined8 *param_1,ulonglong param_2)

{
  FUN_144d75720();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -4,0x28);
  }
  return param_1 + -4;
}



// FUNCTION 144d76620 FUN_144d76620 body=3 status=ok
// SIG undefined FUN_144d76620(void)

void FUN_144d76620(void)

{
  return;
}



// FUNCTION 144d76630 FUN_144d76630 body=42 status=ok
// SIG undefined FUN_144d76630(void)

undefined8
FUN_144d76630(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = cef_post_data_create();
  FUN_144d76690(param_1,uVar1,param_3,param_4,uVar2);
  return param_1;
}



// FUNCTION 144d76660 FUN_144d76660 body=48 status=ok
// SIG undefined FUN_144d76660(void)

longlong FUN_144d76660(longlong param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x10,0x18);
    return param_1 + -0x10;
  }
  return param_1 + -0x10;
}



// FUNCTION 144d76690 FUN_144d76690 body=230 status=ok
// SIG undefined FUN_144d76690(void)

longlong * FUN_144d76690(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

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
      FUN_144d76940(puVar2 + 4,1,param_3,param_4,uVar3,uVar4);
    }
    *puVar2 = DAT_14c7078d8;
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



// FUNCTION 144d76780 FUN_144d76780 body=40 status=ok
// SIG undefined FUN_144d76780(void)

int FUN_144d76780(longlong param_1)

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



// FUNCTION 144d767b0 FUN_144d767b0 body=181 status=ok
// SIG undefined FUN_144d767b0(void)

undefined8 FUN_144d767b0(undefined8 *param_1)

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
      param_1[-4] = &PTR_FUN_1499d50b8;
      *(undefined ***)((longlong)*(int *)(param_1[-3] + 4) + 0x18 + (longlong)puVar3) =
           &PTR_LAB_1499d50f0;
      *(int *)((longlong)*(int *)(param_1[-3] + 4) + 0x14 + (longlong)puVar3) =
           *(int *)(param_1[-3] + 4) + -0x18;
      param_1[-4] = &PTR__purecall_1499d5058;
      *(undefined ***)((longlong)*(int *)(param_1[-3] + 4) + 0x18 + (longlong)puVar3) =
           &PTR_LAB_1499d5090;
      *(int *)((longlong)*(int *)(param_1[-3] + 4) + 0x14 + (longlong)puVar3) =
           *(int *)(param_1[-3] + 4) + -0x18;
      *param_1 = &PTR__purecall_14ba6c6b0;
      thunk_FUN_1400020a8(puVar3,0x38);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 144d76870 FUN_144d76870 body=34 status=ok
// SIG undefined FUN_144d76870(void)

bool FUN_144d76870(longlong param_1)

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



// FUNCTION 144d768a0 FUN_144d768a0 body=38 status=ok
// SIG undefined FUN_144d768a0(void)

bool FUN_144d768a0(longlong param_1)

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



// FUNCTION 144d768d0 FUN_144d768d0 body=11 status=ok
// SIG undefined FUN_144d768d0(void)

undefined8 FUN_144d768d0(void)

{
  return 0;
}



// FUNCTION 144d768e0 FUN_144d768e0 body=85 status=ok
// SIG undefined FUN_144d768e0(void)

longlong FUN_144d768e0(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_1499d5058;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_1499d5090;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x20,0x28);
  }
  return param_1 + -0x20;
}



// FUNCTION 144d76940 FUN_144d76940 body=167 status=ok
// SIG undefined FUN_144d76940(void)

undefined8 * FUN_144d76940(undefined8 *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &DAT_1499d5118;
    param_1[4] = &PTR__purecall_14ba6c6b0;
  }
  *param_1 = &PTR__purecall_1499d4ff8;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) =
       &PTR__purecall_1499d5030;
  *param_1 = &PTR__purecall_1499d5058;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_1499d5090;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_1499d50b8;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_1499d50f0;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  return param_1;
}



// FUNCTION 144d769f0 FUN_144d769f0 body=42 status=ok
// SIG undefined FUN_144d769f0(void)

bool FUN_144d769f0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((0x2f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[5], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 144d76a20 FUN_144d76a20 body=42 status=ok
// SIG undefined FUN_144d76a20(void)

bool FUN_144d76a20(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((0x37 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[6], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 144d76a70 FUN_144d76a70 body=398 status=ok
// SIG undefined FUN_144d76a70(void)

void FUN_144d76a70(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  void *_Dst;
  void **ppvVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  void *local_res8;
  void *local_res18 [2];
  undefined8 uVar8;
  
  uVar8 = 0xfffffffffffffffe;
  pvVar5 = (void *)0x0;
  local_res8 = (void *)((ulonglong)local_res8 & 0xffffffff00000000);
  puVar1 = (ulonglong *)param_1[-1];
  if ((0x47 < *puVar1) && (puVar1[8] != 0)) {
    pvVar6 = (void *)(param_2[1] - *param_2 >> 3);
    local_res18[0] = pvVar6;
    local_res8 = (void *)(**(code **)(*param_1 + 0x10))();
    ppvVar4 = local_res18;
    if (pvVar6 <= local_res8) {
      ppvVar4 = &local_res8;
    }
    local_res8 = *ppvVar4;
    _Dst = pvVar5;
    if (local_res8 != (void *)0x0) {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_res8;
      uVar3 = SUB168(ZEXT816(8) * auVar2,0);
      if (SUB168(ZEXT816(8) * auVar2,8) != 0) {
        uVar3 = 0xffffffffffffffff;
      }
      _Dst = (void *)FUN_144a7d36f(uVar3);
      if ((_Dst != (void *)0x0) &&
         (memset(_Dst,0,(longlong)local_res8 * 8), pvVar7 = pvVar5, pvVar6 != (void *)0x0)) {
        do {
          local_res18[0] = *(void **)(*param_2 + (longlong)pvVar7 * 8);
          if (local_res18[0] != (void *)0x0) {
            (*(code *)**(undefined8 **)
                        ((longlong)local_res18[0] +
                        (longlong)*(int *)(*(longlong *)((longlong)local_res18[0] + 8) + 4) + 8))();
          }
          uVar3 = FUN_144d76f40(local_res18);
          *(undefined8 *)((longlong)_Dst + (longlong)pvVar7 * 8) = uVar3;
          pvVar7 = (void *)((longlong)pvVar7 + 1);
        } while (pvVar7 < pvVar6);
      }
    }
    (*(code *)puVar1[8])(puVar1,&local_res8,_Dst,param_4,uVar8);
    FUN_144d771f0(param_2);
    if ((local_res8 != (void *)0x0) && (_Dst != (void *)0x0)) {
      if (local_res8 != (void *)0x0) {
        do {
          uVar8 = FUN_144d76e50(local_res18,*(undefined8 *)((longlong)_Dst + (longlong)pvVar5 * 8));
          FUN_144d77110(param_2,uVar8);
          if (local_res18[0] != (void *)0x0) {
            (**(code **)(*(longlong *)
                          ((longlong)local_res18[0] +
                          (longlong)*(int *)(*(longlong *)((longlong)local_res18[0] + 8) + 4) + 8) +
                        8))();
          }
          pvVar5 = (void *)((longlong)pvVar5 + 1);
        } while (pvVar5 < local_res8);
      }
      thunk_FUN_1400020a8(_Dst);
    }
  }
  return;
}



// FUNCTION 144d76c00 FUN_144d76c00 body=196 status=ok
// SIG undefined FUN_144d76c00(void)

ulonglong FUN_144d76c00(longlong param_1,ulonglong *param_2)

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
  if ((*puVar1 < 0x50) || (puVar1[9] == 0)) {
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
      uVar4 = FUN_144d76f40(&local_res8);
      iVar3 = (*(code *)puVar1[9])(puVar1,uVar4);
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



// FUNCTION 144d76cd0 FUN_144d76cd0 body=196 status=ok
// SIG undefined FUN_144d76cd0(void)

ulonglong FUN_144d76cd0(longlong param_1,ulonglong *param_2)

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
  if ((*puVar1 < 0x58) || (puVar1[10] == 0)) {
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
      uVar4 = FUN_144d76f40(&local_res8);
      iVar3 = (*(code *)puVar1[10])(puVar1,uVar4);
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



// FUNCTION 144d76dc0 FUN_144d76dc0 body=143 status=ok
// SIG undefined FUN_144d76dc0(void)

undefined8 * FUN_144d76dc0(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -4;
  *puVar1 = &PTR_FUN_1499d50b8;
  *(undefined ***)((longlong)*(int *)(param_1[-3] + 4) + -0x18 + (longlong)param_1) =
       &PTR_LAB_1499d50f0;
  *(int *)((longlong)*(int *)(param_1[-3] + 4) + -0x1c + (longlong)param_1) =
       *(int *)(param_1[-3] + 4) + -0x18;
  *puVar1 = &PTR__purecall_1499d5058;
  *(undefined ***)((longlong)*(int *)(param_1[-3] + 4) + -0x18 + (longlong)param_1) =
       &PTR_LAB_1499d5090;
  *(int *)((longlong)*(int *)(param_1[-3] + 4) + -0x1c + (longlong)param_1) =
       *(int *)(param_1[-3] + 4) + -0x18;
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(puVar1,0x28);
  }
  return puVar1;
}



// FUNCTION 144d76e50 FUN_144d76e50 body=230 status=ok
// SIG undefined FUN_144d76e50(void)

longlong * FUN_144d76e50(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

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
      FUN_144d776f0(puVar2 + 4,1,param_3,param_4,uVar3,uVar4);
    }
    *puVar2 = DAT_14c7078dc;
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



// FUNCTION 144d76f40 FUN_144d76f40 body=156 status=ok
// SIG undefined FUN_144d76f40(void)

undefined8 FUN_144d76f40(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else if (*(int *)(lVar1 + -0x10) == DAT_14c7078dc) {
    pcVar2 = *(code **)(*(longlong *)(lVar1 + -8) + 8);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)();
    }
    uVar3 = *(undefined8 *)(lVar1 + -8);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
  }
  else {
    uVar3 = FUN_144d77680(*(int *)(lVar1 + -0x10),lVar1,param_3,param_4,0xfffffffffffffffe);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
  }
  return uVar3;
}



// FUNCTION 144d76fe0 FUN_144d76fe0 body=48 status=ok
// SIG undefined FUN_144d76fe0(void)

void FUN_144d76fe0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 144d77010 FUN_144d77010 body=109 status=ok
// SIG undefined FUN_144d77010(void)

void FUN_144d77010(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  
  if (0x1fffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  uVar1 = param_2;
  if (0xfff < param_3 * 8) {
    if ((param_2 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar1 = *(ulonglong *)(param_2 - 8);
    if (param_2 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    if (param_2 - uVar1 < 8) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    if (0x27 < param_2 - uVar1) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1400020a8(uVar1);
  return;
}



// FUNCTION 144d77090 FUN_144d77090 body=124 status=ok
// SIG undefined FUN_144d77090(void)

ulonglong FUN_144d77090(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    if (0x1fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      std::_Xbad_alloc();
    }
    param_2 = param_2 * 8;
    if (0xfff < param_2) {
      if (param_2 + 0x27 <= param_2) {
                    /* WARNING: Subroutine does not return */
        std::_Xbad_alloc();
      }
      lVar1 = FUN_14494321d(param_2 + 0x27);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar2 - 8) = lVar1;
      return uVar2;
    }
    uVar2 = FUN_14494321d();
    if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  return uVar2;
}



// FUNCTION 144d77110 FUN_144d77110 body=212 status=ok
// SIG undefined FUN_144d77110(void)

void FUN_144d77110(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)param_1[1];
  if ((param_2 < plVar1) && (plVar2 = (longlong *)*param_1, plVar2 <= param_2)) {
    if (plVar1 == (longlong *)param_1[2]) {
      FUN_144d77340(param_1,1,param_3,param_4,0xfffffffffffffffe);
    }
    if ((longlong *)param_1[1] != (longlong *)0x0) {
      lVar3 = *(longlong *)(*param_1 + ((longlong)param_2 - (longlong)plVar2 >> 3) * 8);
      *(longlong *)param_1[1] = lVar3;
      if (lVar3 != 0) {
        (*(code *)**(undefined8 **)((longlong)*(int *)(*(longlong *)(lVar3 + 8) + 4) + lVar3 + 8))()
        ;
      }
    }
  }
  else {
    if (plVar1 == (longlong *)param_1[2]) {
      FUN_144d77340(param_1,1,param_3,param_4,0xfffffffffffffffe);
    }
    if ((longlong *)param_1[1] != (longlong *)0x0) {
      lVar3 = *param_2;
      *(longlong *)param_1[1] = lVar3;
      if (lVar3 != 0) {
        (*(code *)**(undefined8 **)((longlong)*(int *)(*(longlong *)(lVar3 + 8) + 4) + lVar3 + 8))()
        ;
      }
    }
  }
  param_1[1] = param_1[1] + 8;
  return;
}



// FUNCTION 144d771f0 FUN_144d771f0 body=108 status=ok
// SIG undefined FUN_144d771f0(void)

void FUN_144d771f0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar1 = (longlong *)param_1[1];
  plVar3 = (longlong *)*param_1;
  if (plVar3 == plVar1) {
    param_1[1] = (longlong)plVar3;
  }
  else {
    do {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8
                    ))();
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar1);
    param_1[1] = *param_1;
  }
  return;
}



// FUNCTION 144d77260 FUN_144d77260 body=217 status=ok
// SIG undefined FUN_144d77260(void)

void FUN_144d77260(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8;
  undefined8 uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  lVar3 = FUN_144d77090();
  FUN_144d77400(*param_1,param_1[1],lVar3,param_1,0,local_res8,uVar6);
  plVar1 = (longlong *)param_1[1];
  plVar4 = (longlong *)*param_1;
  lVar5 = (longlong)plVar1 - (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
      lVar2 = *plVar4;
      if (lVar2 != 0) {
        (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8
                    ))();
      }
    }
    FUN_144d77010(param_1,*param_1,param_1[2] - *param_1 >> 3);
  }
  param_1[2] = lVar3 + param_2 * 8;
  param_1[1] = lVar3 + (lVar5 >> 3) * 8;
  *param_1 = lVar3;
  return;
}



// FUNCTION 144d77340 FUN_144d77340 body=129 status=ok
// SIG undefined FUN_144d77340(void)

void FUN_144d77340(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_2 <= (ulonglong)(param_1[2] - param_1[1] >> 3)) {
    return;
  }
  lVar2 = param_1[1] - *param_1 >> 3;
  if (0x1fffffffffffffffU - lVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  param_2 = param_2 + lVar2;
  uVar3 = param_1[2] - *param_1 >> 3;
  uVar1 = 0;
  if (uVar3 <= 0x1fffffffffffffff - (uVar3 >> 1)) {
    uVar1 = (uVar3 >> 1) + uVar3;
  }
  if (param_2 <= uVar1) {
    param_2 = uVar1;
  }
  FUN_144d77260(param_1,param_2);
  return;
}



// FUNCTION 144d773d0 FUN_144d773d0 body=48 status=ok
// SIG undefined FUN_144d773d0(void)

void FUN_144d773d0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 144d77400 FUN_144d77400 body=127 status=ok
// SIG undefined FUN_144d77400(void)

longlong * FUN_144d77400(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (longlong *)0x0) {
      lVar1 = *param_1;
      *param_3 = lVar1;
      if (lVar1 != 0) {
        (*(code *)**(undefined8 **)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8))()
        ;
      }
    }
    param_3 = param_3 + 1;
  }
  return param_3;
}



// FUNCTION 144d774d0 FUN_144d774d0 body=42 status=ok
// SIG undefined FUN_144d774d0(void)

undefined8
FUN_144d774d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = cef_post_data_element_create();
  FUN_144d76e50(param_1,uVar1,param_3,param_4,uVar2);
  return param_1;
}



// FUNCTION 144d77500 FUN_144d77500 body=48 status=ok
// SIG undefined FUN_144d77500(void)

longlong FUN_144d77500(longlong param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x10,0x18);
    return param_1 + -0x10;
  }
  return param_1 + -0x10;
}



// FUNCTION 144d77530 FUN_144d77530 body=40 status=ok
// SIG undefined FUN_144d77530(void)

int FUN_144d77530(longlong param_1)

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



// FUNCTION 144d77560 FUN_144d77560 body=181 status=ok
// SIG undefined FUN_144d77560(void)

undefined8 FUN_144d77560(undefined8 *param_1)

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
      param_1[-4] = &PTR_FUN_1499d53d0;
      *(undefined ***)((longlong)*(int *)(param_1[-3] + 4) + 0x18 + (longlong)puVar3) =
           &PTR_LAB_1499d5410;
      *(int *)((longlong)*(int *)(param_1[-3] + 4) + 0x14 + (longlong)puVar3) =
           *(int *)(param_1[-3] + 4) + -0x18;
      param_1[-4] = &PTR__purecall_1499d5368;
      *(undefined ***)((longlong)*(int *)(param_1[-3] + 4) + 0x18 + (longlong)puVar3) =
           &PTR_LAB_1499d53a8;
      *(int *)((longlong)*(int *)(param_1[-3] + 4) + 0x14 + (longlong)puVar3) =
           *(int *)(param_1[-3] + 4) + -0x18;
      *param_1 = &PTR__purecall_14ba6c6b0;
      thunk_FUN_1400020a8(puVar3,0x38);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 144d77620 FUN_144d77620 body=34 status=ok
// SIG undefined FUN_144d77620(void)

bool FUN_144d77620(longlong param_1)

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



// FUNCTION 144d77650 FUN_144d77650 body=38 status=ok
// SIG undefined FUN_144d77650(void)

bool FUN_144d77650(longlong param_1)

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



// FUNCTION 144d77680 FUN_144d77680 body=11 status=ok
// SIG undefined FUN_144d77680(void)

undefined8 FUN_144d77680(void)

{
  return 0;
}



// FUNCTION 144d77690 FUN_144d77690 body=85 status=ok
// SIG undefined FUN_144d77690(void)

longlong FUN_144d77690(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_1499d5368;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_1499d53a8;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x20,0x28);
  }
  return param_1 + -0x20;
}



// FUNCTION 144d776f0 FUN_144d776f0 body=167 status=ok
// SIG undefined FUN_144d776f0(void)

undefined8 * FUN_144d776f0(undefined8 *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &DAT_1499d5438;
    param_1[4] = &PTR__purecall_14ba6c6b0;
  }
  *param_1 = &PTR__purecall_1499d5300;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) =
       &PTR__purecall_1499d5340;
  *param_1 = &PTR__purecall_1499d5368;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_1499d53a8;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_1499d53d0;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_1499d5410;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  return param_1;
}



// FUNCTION 144d777a0 FUN_144d777a0 body=42 status=ok
// SIG undefined FUN_144d777a0(void)

bool FUN_144d777a0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((0x2f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[5], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 144d77870 FUN_144d77870 body=214 status=ok
// SIG undefined FUN_144d77870(void)

undefined8 * FUN_144d77870(longlong param_1,undefined8 *param_2)

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
  if ((**(ulonglong **)(param_1 + -8) < 0x58) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[10], pcVar1 == (code *)0x0)) {
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



// FUNCTION 144d779a0 FUN_144d779a0 body=143 status=ok
// SIG undefined FUN_144d779a0(void)

undefined8 * FUN_144d779a0(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -4;
  *puVar1 = &PTR_FUN_1499d53d0;
  *(undefined ***)((longlong)*(int *)(param_1[-3] + 4) + -0x18 + (longlong)param_1) =
       &PTR_LAB_1499d5410;
  *(int *)((longlong)*(int *)(param_1[-3] + 4) + -0x1c + (longlong)param_1) =
       *(int *)(param_1[-3] + 4) + -0x18;
  *puVar1 = &PTR__purecall_1499d5368;
  *(undefined ***)((longlong)*(int *)(param_1[-3] + 4) + -0x18 + (longlong)param_1) =
       &PTR_LAB_1499d53a8;
  *(int *)((longlong)*(int *)(param_1[-3] + 4) + -0x1c + (longlong)param_1) =
       *(int *)(param_1[-3] + 4) + -0x18;
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(puVar1,0x28);
  }
  return puVar1;
}



// FUNCTION 144d77a80 FUN_144d77a80 body=96 status=ok
// SIG undefined FUN_144d77a80(void)

undefined8 *
FUN_144d77a80(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  FUN_14516fec0();
  if ((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(*(longlong *)(param_2 + 8) + 8) != 0)) {
    uVar1 = cef_process_message_create();
    FUN_144d77b10(param_1,uVar1,param_3,param_4,uVar2);
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 144d77ae0 FUN_144d77ae0 body=48 status=ok
// SIG undefined FUN_144d77ae0(void)

longlong FUN_144d77ae0(longlong param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x10,0x18);
    return param_1 + -0x10;
  }
  return param_1 + -0x10;
}



// FUNCTION 144d77b10 FUN_144d77b10 body=230 status=ok
// SIG undefined FUN_144d77b10(void)

longlong * FUN_144d77b10(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

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
      FUN_144d77d70(puVar2 + 4,1,param_3,param_4,uVar3,uVar4);
    }
    *puVar2 = DAT_14c7078e0;
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



// FUNCTION 144d77c00 FUN_144d77c00 body=40 status=ok
// SIG undefined FUN_144d77c00(void)

int FUN_144d77c00(longlong param_1)

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



// FUNCTION 144d77c30 FUN_144d77c30 body=105 status=ok
// SIG undefined FUN_144d77c30(void)

undefined8 FUN_144d77c30(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(code **)(param_1[-5] + 0x10) != (code *)0x0) {
    (**(code **)(param_1[-5] + 0x10))();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -2);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    if (param_1 + -6 != (undefined8 *)0x0) {
      FUN_144d77e20(param_1);
      *param_1 = &PTR__purecall_14ba6c6b0;
      thunk_FUN_1400020a8(param_1 + -6,0x38);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 144d77ca0 FUN_144d77ca0 body=34 status=ok
// SIG undefined FUN_144d77ca0(void)

bool FUN_144d77ca0(longlong param_1)

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



// FUNCTION 144d77cd0 FUN_144d77cd0 body=38 status=ok
// SIG undefined FUN_144d77cd0(void)

bool FUN_144d77cd0(longlong param_1)

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



// FUNCTION 144d77d00 FUN_144d77d00 body=11 status=ok
// SIG undefined FUN_144d77d00(void)

undefined8 FUN_144d77d00(void)

{
  return 0;
}



// FUNCTION 144d77d10 FUN_144d77d10 body=85 status=ok
// SIG undefined FUN_144d77d10(void)

longlong FUN_144d77d10(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_1499d54b8;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_1499d54e0;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x20,0x28);
  }
  return param_1 + -0x20;
}



// FUNCTION 144d77d70 FUN_144d77d70 body=167 status=ok
// SIG undefined FUN_144d77d70(void)

undefined8 * FUN_144d77d70(undefined8 *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &DAT_1499d5558;
    param_1[4] = &PTR__purecall_14ba6c6b0;
  }
  *param_1 = &PTR__purecall_1499d5468;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) =
       &PTR__purecall_1499d5490;
  *param_1 = &PTR__purecall_1499d54b8;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_1499d54e0;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_1499d5508;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_1499d5530;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  return param_1;
}



// FUNCTION 144d77e20 FUN_144d77e20 body=124 status=ok
// SIG undefined FUN_144d77e20(void)

void FUN_144d77e20(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR_FUN_1499d5508;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_1499d5530;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  FUN_14516fec0();
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_1499d54b8;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_1499d54e0;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  return;
}



// FUNCTION 144d77ea0 FUN_144d77ea0 body=54 status=ok
// SIG undefined FUN_144d77ea0(void)

bool FUN_144d77ea0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0x2f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[5], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 144d77ee0 FUN_144d77ee0 body=54 status=ok
// SIG undefined FUN_144d77ee0(void)

bool FUN_144d77ee0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0x37 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[6], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 144d77f20 FUN_144d77f20 body=96 status=ok
// SIG undefined FUN_144d77f20(void)

undefined8 *
FUN_144d77f20(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  FUN_14516fec0();
  if ((0x3f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[7], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_144d77b10(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144d77f80 FUN_144d77f80 body=222 status=ok
// SIG undefined FUN_144d77f80(void)

undefined8 * FUN_144d77f80(longlong param_1,undefined8 *param_2)

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
  FUN_14516fec0();
  if ((**(ulonglong **)(param_1 + -8) < 0x48) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[8], pcVar1 == (code *)0x0)) {
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



// FUNCTION 144d78060 FUN_144d78060 body=96 status=ok
// SIG undefined FUN_144d78060(void)

undefined8 *
FUN_144d78060(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  FUN_14516fec0();
  if ((0x4f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[9], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_144d75160(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144d780c0 FUN_144d780c0 body=64 status=ok
// SIG undefined FUN_144d780c0(void)

undefined8 * FUN_144d780c0(undefined8 *param_1,ulonglong param_2)

{
  FUN_144d77e20();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -4,0x28);
  }
  return param_1 + -4;
}



// FUNCTION 144d78100 FUN_144d78100 body=48 status=ok
// SIG undefined FUN_144d78100(void)

void FUN_144d78100(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 144d78180 FUN_144d78180 body=48 status=ok
// SIG undefined FUN_144d78180(void)

void FUN_144d78180(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 144d781b0 FUN_144d781b0 body=33 status=ok
// SIG undefined FUN_144d781b0(void)

void FUN_144d781b0(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 8))();
  }
  return;
}



// FUNCTION 144d781e0 FUN_144d781e0 body=427 status=ok
// SIG undefined FUN_144d781e0(void)

longlong FUN_144d781e0(longlong param_1,longlong param_2,longlong *param_3,longlong param_4,
                      longlong param_5,longlong *param_6,longlong *param_7)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong local_res8;
  longlong local_res10;
  longlong *local_res18;
  longlong local_res20;
  
  local_res8 = param_1;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_14516fec0();
  plVar3 = param_7;
  lVar8 = param_5 + 8;
  if (param_5 == 0) {
    lVar8 = 0;
  }
  lVar4 = param_2 + 8;
  if (param_2 == 0) {
    lVar4 = 0;
  }
  local_res8 = *param_7;
  if (local_res8 != 0) {
    (*(code *)**(undefined8 **)
                (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
  }
  uVar5 = FUN_144d7aa20(&local_res8);
  plVar2 = param_6;
  local_res10 = *param_6;
  if (local_res10 != 0) {
    (*(code *)**(undefined8 **)
                (local_res10 + 8 + (longlong)*(int *)(*(longlong *)(local_res10 + 8) + 4)))();
  }
  uVar6 = FUN_144d73d20(&local_res10);
  param_5 = *param_3;
  if (param_5 != 0) {
    (*(code *)**(undefined8 **)(param_5 + 8 + (longlong)*(int *)(*(longlong *)(param_5 + 8) + 4)))()
    ;
  }
  uVar1 = *(undefined8 *)(local_res20 + 8);
  uVar7 = FUN_144d7a0c0(&param_5);
  uVar5 = cef_browser_host_create_browser_sync(lVar4,uVar7,uVar1,lVar8,uVar6,uVar5);
  FUN_144d7a4e0(param_1,uVar5);
  lVar8 = *param_3;
  if (lVar8 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar8 + 8) + 4) + lVar8 + 8) + 8))()
    ;
  }
  lVar8 = *plVar2;
  if (lVar8 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar8 + 8) + 4) + lVar8 + 8) + 8))()
    ;
  }
  lVar8 = *plVar3;
  if (lVar8 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar8 + 8) + 4) + lVar8 + 8) + 8))()
    ;
  }
  return param_1;
}



// FUNCTION 144d78390 FUN_144d78390 body=48 status=ok
// SIG undefined FUN_144d78390(void)

longlong FUN_144d78390(longlong param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x10,0x18);
    return param_1 + -0x10;
  }
  return param_1 + -0x10;
}



// FUNCTION 144d783c0 FUN_144d783c0 body=48 status=ok
// SIG undefined FUN_144d783c0(void)

void FUN_144d783c0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 144d783f0 FUN_144d783f0 body=40 status=ok
// SIG undefined FUN_144d783f0(void)

int FUN_144d783f0(longlong param_1)

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



// FUNCTION 144d78420 FUN_144d78420 body=105 status=ok
// SIG undefined FUN_144d78420(void)

undefined8 FUN_144d78420(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(code **)(param_1[-5] + 0x10) != (code *)0x0) {
    (**(code **)(param_1[-5] + 0x10))();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -2);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    if (param_1 + -6 != (undefined8 *)0x0) {
      FUN_144d78600(param_1);
      *param_1 = &PTR__purecall_14ba6c6b0;
      thunk_FUN_1400020a8(param_1 + -6,0x38);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 144d78490 FUN_144d78490 body=34 status=ok
// SIG undefined FUN_144d78490(void)

bool FUN_144d78490(longlong param_1)

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



// FUNCTION 144d784c0 FUN_144d784c0 body=38 status=ok
// SIG undefined FUN_144d784c0(void)

bool FUN_144d784c0(longlong param_1)

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



// FUNCTION 144d784f0 FUN_144d784f0 body=85 status=ok
// SIG undefined FUN_144d784f0(void)

longlong FUN_144d784f0(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_1499d5808;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_1499d59e8;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x20,0x28);
  }
  return param_1 + -0x20;
}



// FUNCTION 144d78550 FUN_144d78550 body=167 status=ok
// SIG undefined FUN_144d78550(void)

undefined8 * FUN_144d78550(undefined8 *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &DAT_1499d5c18;
    param_1[4] = &PTR__purecall_14ba6c6b0;
  }
  *param_1 = &PTR__purecall_1499d5600;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) =
       &PTR__purecall_1499d57e0;
  *param_1 = &PTR__purecall_1499d5808;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_1499d59e8;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_1499d5a10;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_1499d5bf0;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  return param_1;
}



// FUNCTION 144d78600 FUN_144d78600 body=124 status=ok
// SIG undefined FUN_144d78600(void)

void FUN_144d78600(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR_FUN_1499d5a10;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_1499d5bf0;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  FUN_14516fec0();
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_1499d5808;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_1499d59e8;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  return;
}



// FUNCTION 144d78680 FUN_144d78680 body=96 status=ok
// SIG undefined FUN_144d78680(void)

undefined8 *
FUN_144d78680(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  FUN_14516fec0();
  if ((0x2f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[5], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_144d7a4e0(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144d786e0 FUN_144d786e0 body=57 status=ok
// SIG undefined FUN_144d786e0(void)

void FUN_144d786e0(longlong param_1,undefined1 param_2)

{
  ulonglong *puVar1;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x37 < *puVar1) && ((code *)puVar1[6] != (code *)0x0)) {
    (*(code *)puVar1[6])(puVar1,param_2);
  }
  return;
}



// FUNCTION 144d78720 FUN_144d78720 body=54 status=ok
// SIG undefined FUN_144d78720(void)

bool FUN_144d78720(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0x3f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[7], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 144d78760 FUN_144d78760 body=57 status=ok
// SIG undefined FUN_144d78760(void)

void FUN_144d78760(longlong param_1,undefined1 param_2)

{
  ulonglong *puVar1;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x47 < *puVar1) && ((code *)puVar1[8] != (code *)0x0)) {
    (*(code *)puVar1[8])(puVar1,param_2);
  }
  return;
}



// FUNCTION 144d787a0 FUN_144d787a0 body=49 status=ok
// SIG undefined FUN_144d787a0(void)

undefined8 FUN_144d787a0(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  FUN_14516fec0();
  if ((0x4f < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[9],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000144d787c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 144d787e0 FUN_144d787e0 body=49 status=ok
// SIG undefined FUN_144d787e0(void)

undefined8 FUN_144d787e0(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  FUN_14516fec0();
  if ((0x57 < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[10],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000144d78806. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 144d78820 FUN_144d78820 body=54 status=ok
// SIG undefined FUN_144d78820(void)

bool FUN_144d78820(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0x5f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0xb], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 144d78860 FUN_144d78860 body=96 status=ok
// SIG undefined FUN_144d78860(void)

undefined8 *
FUN_144d78860(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  FUN_14516fec0();
  if ((0x67 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0xc], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_144d7a150(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144d788c0 FUN_144d788c0 body=96 status=ok
// SIG undefined FUN_144d788c0(void)

undefined8 *
FUN_144d788c0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  FUN_14516fec0();
  if ((0x6f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0xd], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_144d7a930(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144d78920 FUN_144d78920 body=50 status=ok
// SIG undefined FUN_144d78920(void)

undefined8 FUN_144d78920(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  FUN_14516fec0();
  if ((0x77 < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[0xe],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000144d78946. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 144d78960 FUN_144d78960 body=60 status=ok
// SIG undefined FUN_144d78960(void)

void FUN_144d78960(longlong param_1,undefined4 param_2)

{
  ulonglong *puVar1;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x7f < *puVar1) && ((code *)puVar1[0xf] != (code *)0x0)) {
    (*(code *)puVar1[0xf])(puVar1,param_2);
  }
  return;
}



// FUNCTION 144d789a0 FUN_144d789a0 body=348 status=ok
// SIG undefined FUN_144d789a0(void)

void FUN_144d789a0(longlong param_1,undefined4 param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,int param_6,longlong *param_7)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0x88) || (puVar1[0x10] == 0)) {
    lVar4 = *param_7;
    if (lVar4 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar4 + 8) + 4) + lVar4 + 8) + 8))
                ();
    }
  }
  else if (param_6 < 0) {
    lVar4 = *param_7;
    if (lVar4 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar4 + 8) + 4) + lVar4 + 8) + 8))
                ();
    }
  }
  else {
    if (*param_7 != 0) {
      lVar4 = cef_string_list_alloc();
      if (lVar4 != 0) {
        FUN_14516e860(param_5,lVar4);
      }
      uVar5 = FUN_144d7aaf0(local_res8,param_7);
      uVar2 = *(undefined8 *)(param_4 + 8);
      uVar3 = *(undefined8 *)(param_3 + 8);
      uVar5 = FUN_144d7a450(uVar5);
      (*(code *)puVar1[0x10])(puVar1,param_2,uVar3,uVar2,lVar4,param_6,uVar5);
      if (lVar4 != 0) {
        cef_string_list_free(lVar4);
      }
    }
    FUN_144d7ab30(param_7);
  }
  return;
}



// FUNCTION 144d78b00 FUN_144d78b00 body=83 status=ok
// SIG undefined FUN_144d78b00(void)

void FUN_144d78b00(longlong param_1,longlong param_2)

{
  code *pcVar1;
  
  FUN_14516fec0();
  if ((((0x8f < **(ulonglong **)(param_1 + -8)) &&
       (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x11], pcVar1 != (code *)0x0)) &&
      (*(longlong *)(param_2 + 8) != 0)) && (*(longlong *)(*(longlong *)(param_2 + 8) + 8) != 0)) {
    (*pcVar1)();
  }
  return;
}



// FUNCTION 144d78b60 FUN_144d78b60 body=296 status=ok
// SIG undefined FUN_144d78b60(void)

void FUN_144d78b60(longlong param_1,longlong param_2,undefined1 param_3,undefined4 param_4,
                  undefined1 param_5,longlong *param_6)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 local_res8 [2];
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0x98) || (puVar1[0x12] == 0)) {
    lVar3 = *param_6;
    if (lVar3 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar3 + 8) + 4) + lVar3 + 8) + 8))
                ();
    }
  }
  else if ((*(longlong *)(param_2 + 8) == 0) || (*(longlong *)(*(longlong *)(param_2 + 8) + 8) == 0)
          ) {
    lVar3 = *param_6;
    if (lVar3 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar3 + 8) + 4) + lVar3 + 8) + 8))
                ();
    }
  }
  else {
    if (*param_6 != 0) {
      uVar4 = FUN_144d7ab60(local_res8,param_6);
      uVar2 = *(undefined8 *)(param_2 + 8);
      uVar4 = FUN_144d7a2a0(uVar4);
      (*(code *)puVar1[0x12])(puVar1,uVar2,param_3,param_4,param_5,uVar4,uVar5);
    }
    FUN_144d7aba0(param_6);
  }
  return;
}



// FUNCTION 144d78c90 FUN_144d78c90 body=53 status=ok
// SIG undefined FUN_144d78c90(void)

void FUN_144d78c90(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_14516fec0();
  if ((0x9f < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[0x13],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000144d78cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// FUNCTION 144d78cd0 FUN_144d78cd0 body=300 status=ok
// SIG undefined FUN_144d78cd0(void)

void FUN_144d78cd0(longlong param_1,longlong param_2,longlong param_3,ulonglong *param_4)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong local_res8;
  undefined8 uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  local_res8 = local_res8 & 0xffffffff00000000;
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0xa8) || (puVar1[0x14] == 0)) {
    uVar3 = *param_4;
    if (uVar3 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(uVar3 + 8) + 4) + uVar3 + 8) + 8))
                ();
    }
  }
  else if ((*(longlong *)(param_2 + 8) == 0) || (*(longlong *)(*(longlong *)(param_2 + 8) + 8) == 0)
          ) {
    uVar3 = *param_4;
    if (uVar3 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(uVar3 + 8) + 4) + uVar3 + 8) + 8))
                ();
    }
  }
  else {
    lVar5 = param_3 + 8;
    if (param_3 == 0) {
      lVar5 = 0;
    }
    local_res8 = *param_4;
    if (local_res8 != 0) {
      (*(code *)**(undefined8 **)
                  (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
    }
    uVar2 = *(undefined8 *)(param_2 + 8);
    uVar4 = FUN_144d7a3c0(&local_res8);
    (*(code *)puVar1[0x14])(puVar1,uVar2,lVar5,uVar4,uVar6);
    uVar3 = *param_4;
    if (uVar3 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(uVar3 + 8) + 4) + uVar3 + 8) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 144d78e00 FUN_144d78e00 body=134 status=ok
// SIG undefined FUN_144d78e00(void)

void FUN_144d78e00(longlong param_1,undefined4 param_2,longlong param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  ulonglong *puVar1;
  longlong lVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((((0xaf < *puVar1) && ((code *)puVar1[0x15] != (code *)0x0)) &&
      (lVar2 = *(longlong *)(param_3 + 8), lVar2 != 0)) && (*(longlong *)(lVar2 + 8) != 0)) {
    (*(code *)puVar1[0x15])(puVar1,param_2,lVar2,param_4,param_5,param_6);
  }
  return;
}



// FUNCTION 144d78e90 FUN_144d78e90 body=63 status=ok
// SIG undefined FUN_144d78e90(void)

void FUN_144d78e90(longlong param_1,undefined1 param_2)

{
  ulonglong *puVar1;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0xb7 < *puVar1) && ((code *)puVar1[0x16] != (code *)0x0)) {
    (*(code *)puVar1[0x16])(puVar1,param_2);
  }
  return;
}



// FUNCTION 144d78ed0 FUN_144d78ed0 body=267 status=ok
// SIG undefined FUN_144d78ed0(void)

void FUN_144d78ed0(longlong param_1,longlong param_2,longlong *param_3,longlong param_4,
                  longlong param_5)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_res8;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0xc0) || (puVar1[0x17] == 0)) {
    lVar5 = *param_3;
    if (lVar5 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar5 + 8) + 4) + lVar5 + 8) + 8))
                ();
    }
  }
  else {
    lVar3 = 0;
    lVar5 = param_5 + 8;
    if (param_5 == 0) {
      lVar5 = lVar3;
    }
    lVar6 = param_4 + 8;
    if (param_4 == 0) {
      lVar6 = lVar3;
    }
    lVar4 = param_2 + 8;
    if (param_2 == 0) {
      lVar4 = lVar3;
    }
    local_res8 = *param_3;
    if (local_res8 != 0) {
      (*(code *)**(undefined8 **)
                  (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
    }
    uVar2 = FUN_144d7a0c0(&local_res8);
    (*(code *)puVar1[0x17])(puVar1,lVar4,uVar2,lVar6,lVar5);
    lVar5 = *param_3;
    if (lVar5 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar5 + 8) + 4) + lVar5 + 8) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 144d78fe0 FUN_144d78fe0 body=53 status=ok
// SIG undefined FUN_144d78fe0(void)

void FUN_144d78fe0(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_14516fec0();
  if ((199 < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[0x18],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000144d7900c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// FUNCTION 144d79020 FUN_144d79020 body=60 status=ok
// SIG undefined FUN_144d79020(void)

bool FUN_144d79020(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0xcf < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x19], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 144d79060 FUN_144d79060 body=114 status=ok
// SIG undefined FUN_144d79060(void)

bool FUN_144d79060(longlong param_1,longlong param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  int iVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if (((0xd7 < *puVar1) && ((code *)puVar1[0x1a] != (code *)0x0)) && (param_2 != 0)) {
    iVar2 = (*(code *)puVar1[0x1a])(puVar1,param_2,param_3);
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 144d790e0 FUN_144d790e0 body=288 status=ok
// SIG undefined FUN_144d790e0(void)

undefined4 FUN_144d790e0(longlong param_1,undefined4 param_2,longlong param_3,ulonglong *param_4)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulonglong local_res8;
  undefined8 uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  local_res8 = local_res8 & 0xffffffff00000000;
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0xe0) || (puVar1[0x1b] == 0)) {
    uVar3 = *param_4;
    if (uVar3 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(uVar3 + 8) + 4) + uVar3 + 8) + 8))
                ();
    }
  }
  else {
    if ((*(longlong *)(param_3 + 8) != 0) && (*(longlong *)(*(longlong *)(param_3 + 8) + 8) != 0)) {
      local_res8 = *param_4;
      if (local_res8 != 0) {
        (*(code *)**(undefined8 **)
                    (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      }
      uVar2 = *(undefined8 *)(param_3 + 8);
      uVar5 = FUN_144d73d20(&local_res8);
      uVar4 = (*(code *)puVar1[0x1b])(puVar1,param_2,uVar2,uVar5,uVar6);
      uVar3 = *param_4;
      if (uVar3 == 0) {
        return uVar4;
      }
      (**(code **)(*(longlong *)(uVar3 + 8 + (longlong)*(int *)(*(longlong *)(uVar3 + 8) + 4)) + 8))
                ();
      return uVar4;
    }
    uVar3 = *param_4;
    if (uVar3 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(uVar3 + 8) + 4) + uVar3 + 8) + 8))
                ();
    }
  }
  return 0;
}



// FUNCTION 144d79200 FUN_144d79200 body=280 status=ok
// SIG undefined FUN_144d79200(void)

undefined8 * FUN_144d79200(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_res8;
  
  FUN_14516fec0();
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
    if (local_res8 == 0) {
      *param_2 = 0;
      lVar2 = *param_3;
      if (lVar2 != 0) {
        (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8
                    ))();
      }
    }
    else {
      if (local_res8 != 0) {
        (*(code *)**(undefined8 **)
                    (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      }
      uVar3 = FUN_144d7a210(&local_res8);
      uVar3 = (*(code *)puVar1[0x1c])(puVar1,uVar3);
      FUN_144d7a820(param_2,uVar3);
      lVar2 = *param_3;
      if (lVar2 != 0) {
        (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8
                    ))();
      }
    }
  }
  return param_2;
}



// FUNCTION 144d79320 FUN_144d79320 body=217 status=ok
// SIG undefined FUN_144d79320(void)

void FUN_144d79320(longlong param_1,ulonglong *param_2,undefined1 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong local_res8;
  ulonglong *local_res10;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  local_res8 = local_res8 & 0xffffffff00000000;
  local_res10 = param_2;
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0xf0) || (puVar1[0x1d] == 0)) {
    uVar2 = *param_2;
    if (uVar2 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(uVar2 + 8) + 4) + uVar2 + 8) + 8))
                ();
    }
  }
  else {
    local_res8 = *param_2;
    if (local_res8 != 0) {
      if (local_res8 != 0) {
        (*(code *)**(undefined8 **)
                    (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      }
      uVar3 = FUN_144d7a330(&local_res8);
      (*(code *)puVar1[0x1d])(puVar1,uVar3,param_3,param_4,uVar4);
      uVar2 = *param_2;
      if (uVar2 != 0) {
        (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(uVar2 + 8) + 4) + uVar2 + 8) + 8
                    ))();
      }
    }
  }
  return;
}



// FUNCTION 144d79400 FUN_144d79400 body=83 status=ok
// SIG undefined FUN_144d79400(void)

void FUN_144d79400(longlong param_1,longlong param_2)

{
  code *pcVar1;
  
  FUN_14516fec0();
  if ((((0xf7 < **(ulonglong **)(param_1 + -8)) &&
       (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x1e], pcVar1 != (code *)0x0)) &&
      (*(longlong *)(param_2 + 8) != 0)) && (*(longlong *)(*(longlong *)(param_2 + 8) + 8) != 0)) {
    (*pcVar1)();
  }
  return;
}



// FUNCTION 144d79460 FUN_144d79460 body=83 status=ok
// SIG undefined FUN_144d79460(void)

void FUN_144d79460(longlong param_1,longlong param_2)

{
  code *pcVar1;
  
  FUN_14516fec0();
  if ((((0xff < **(ulonglong **)(param_1 + -8)) &&
       (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x1f], pcVar1 != (code *)0x0)) &&
      (*(longlong *)(param_2 + 8) != 0)) && (*(longlong *)(*(longlong *)(param_2 + 8) + 8) != 0)) {
    (*pcVar1)();
  }
  return;
}



// FUNCTION 144d794c0 FUN_144d794c0 body=60 status=ok
// SIG undefined FUN_144d794c0(void)

bool FUN_144d794c0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0x107 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x20], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 144d79500 FUN_144d79500 body=53 status=ok
// SIG undefined FUN_144d79500(void)

void FUN_144d79500(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_14516fec0();
  if ((0x10f < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[0x21],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000144d7952c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// FUNCTION 144d79540 FUN_144d79540 body=63 status=ok
// SIG undefined FUN_144d79540(void)

void FUN_144d79540(longlong param_1,undefined1 param_2)

{
  ulonglong *puVar1;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x117 < *puVar1) && ((code *)puVar1[0x22] != (code *)0x0)) {
    (*(code *)puVar1[0x22])(puVar1,param_2);
  }
  return;
}



// FUNCTION 144d79580 FUN_144d79580 body=53 status=ok
// SIG undefined FUN_144d79580(void)

void FUN_144d79580(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_14516fec0();
  if ((0x11f < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[0x23],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000144d795ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// FUNCTION 144d795c0 FUN_144d795c0 body=60 status=ok
// SIG undefined FUN_144d795c0(void)

void FUN_144d795c0(longlong param_1,undefined4 param_2)

{
  ulonglong *puVar1;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x127 < *puVar1) && ((code *)puVar1[0x24] != (code *)0x0)) {
    (*(code *)puVar1[0x24])(puVar1,param_2);
  }
  return;
}



// FUNCTION 144d79600 FUN_144d79600 body=53 status=ok
// SIG undefined FUN_144d79600(void)

void FUN_144d79600(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_14516fec0();
  if ((0x12f < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[0x25],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000144d7962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// FUNCTION 144d79640 FUN_144d79640 body=73 status=ok
// SIG undefined FUN_144d79640(void)

void FUN_144d79640(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x137 < *puVar1) && ((code *)puVar1[0x26] != (code *)0x0)) {
    lVar2 = param_2 + 8;
    if (param_2 == 0) {
      lVar2 = 0;
    }
    (*(code *)puVar1[0x26])(puVar1,lVar2);
  }
  return;
}



// FUNCTION 144d79690 FUN_144d79690 body=115 status=ok
// SIG undefined FUN_144d79690(void)

void FUN_144d79690(longlong param_1,longlong param_2,undefined4 param_3,undefined1 param_4,
                  undefined4 param_5)

{
  ulonglong *puVar1;
  longlong lVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x13f < *puVar1) && ((code *)puVar1[0x27] != (code *)0x0)) {
    lVar2 = param_2 + 8;
    if (param_2 == 0) {
      lVar2 = 0;
    }
    (*(code *)puVar1[0x27])(puVar1,lVar2,param_3,param_4,param_5);
  }
  return;
}



// FUNCTION 144d79710 FUN_144d79710 body=91 status=ok
// SIG undefined FUN_144d79710(void)

void FUN_144d79710(longlong param_1,longlong param_2,undefined1 param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x147 < *puVar1) && ((code *)puVar1[0x28] != (code *)0x0)) {
    lVar2 = param_2 + 8;
    if (param_2 == 0) {
      lVar2 = 0;
    }
    (*(code *)puVar1[0x28])(puVar1,lVar2,param_3);
  }
  return;
}



// FUNCTION 144d79770 FUN_144d79770 body=105 status=ok
// SIG undefined FUN_144d79770(void)

void FUN_144d79770(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x14f < *puVar1) && ((code *)puVar1[0x29] != (code *)0x0)) {
    lVar2 = param_2 + 8;
    if (param_2 == 0) {
      lVar2 = 0;
    }
    (*(code *)puVar1[0x29])(puVar1,lVar2,param_3,param_4);
  }
  return;
}



// FUNCTION 144d797e0 FUN_144d797e0 body=73 status=ok
// SIG undefined FUN_144d797e0(void)

void FUN_144d797e0(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x157 < *puVar1) && ((code *)puVar1[0x2a] != (code *)0x0)) {
    lVar2 = param_2 + 8;
    if (param_2 == 0) {
      lVar2 = 0;
    }
    (*(code *)puVar1[0x2a])(puVar1,lVar2);
  }
  return;
}



// FUNCTION 144d79830 FUN_144d79830 body=63 status=ok
// SIG undefined FUN_144d79830(void)

void FUN_144d79830(longlong param_1,undefined1 param_2)

{
  ulonglong *puVar1;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x15f < *puVar1) && ((code *)puVar1[0x2b] != (code *)0x0)) {
    (*(code *)puVar1[0x2b])(puVar1,param_2);
  }
  return;
}



// FUNCTION 144d79870 FUN_144d79870 body=53 status=ok
// SIG undefined FUN_144d79870(void)

void FUN_144d79870(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_14516fec0();
  if ((0x167 < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[0x2c],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000144d7989c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// FUNCTION 144d798b0 FUN_144d798b0 body=53 status=ok
// SIG undefined FUN_144d798b0(void)

void FUN_144d798b0(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_14516fec0();
  if ((0x16f < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[0x2d],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000144d798dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// FUNCTION 144d798f0 FUN_144d798f0 body=55 status=ok
// SIG undefined FUN_144d798f0(void)

undefined8 FUN_144d798f0(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  FUN_14516fec0();
  if ((0x177 < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[0x2e],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000144d7991c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 144d79930 FUN_144d79930 body=60 status=ok
// SIG undefined FUN_144d79930(void)

void FUN_144d79930(longlong param_1,undefined4 param_2)

{
  ulonglong *puVar1;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x17f < *puVar1) && ((code *)puVar1[0x2f] != (code *)0x0)) {
    (*(code *)puVar1[0x2f])(puVar1,param_2);
  }
  return;
}



// FUNCTION 144d79970 FUN_144d79970 body=316 status=ok
// SIG undefined FUN_144d79970(void)

void FUN_144d79970(longlong param_1,longlong param_2,longlong *param_3,longlong param_4,
                  longlong param_5)

{
  ulonglong *puVar1;
  undefined1 auVar2 [16];
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  
  puVar13 = (undefined4 *)0x0;
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x187 < *puVar1) && (puVar1[0x30] != 0)) {
    uVar3 = (param_3[1] - *param_3) / 0x28;
    puVar9 = puVar13;
    if (uVar3 != 0) {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar3;
      uVar8 = SUB168(ZEXT816(0x18) * auVar2,0);
      if (SUB168(ZEXT816(0x18) * auVar2,8) != 0) {
        uVar8 = 0xffffffffffffffff;
      }
      puVar9 = (undefined4 *)FUN_144a7d36f(uVar8);
      puVar12 = puVar9;
      puVar10 = puVar13;
      uVar7 = uVar3;
      if (puVar9 != (undefined4 *)0x0) {
        for (; uVar7 != 0; uVar7 = uVar7 - 1) {
          puVar11 = (undefined4 *)(*param_3 + (longlong)puVar10 + 8);
          if (*param_3 + (longlong)puVar10 == 0) {
            puVar11 = puVar13;
          }
          uVar4 = puVar11[1];
          uVar5 = puVar11[2];
          uVar6 = puVar11[3];
          *puVar12 = *puVar11;
          puVar12[1] = uVar4;
          puVar12[2] = uVar5;
          puVar12[3] = uVar6;
          *(undefined8 *)(puVar12 + 4) = *(undefined8 *)(puVar11 + 4);
          puVar12 = puVar12 + 6;
          puVar10 = puVar10 + 10;
        }
      }
    }
    puVar12 = (undefined4 *)(param_5 + 8);
    if (param_5 == 0) {
      puVar12 = puVar13;
    }
    puVar10 = (undefined4 *)(param_4 + 8);
    if (param_4 == 0) {
      puVar10 = puVar13;
    }
    (*(code *)puVar1[0x30])(puVar1,*(undefined8 *)(param_2 + 8),uVar3,puVar9,puVar10,puVar12);
    if (puVar9 != (undefined4 *)0x0) {
      thunk_FUN_1400020a8(puVar9);
    }
  }
  return;
}



// FUNCTION 144d79ab0 FUN_144d79ab0 body=105 status=ok
// SIG undefined FUN_144d79ab0(void)

void FUN_144d79ab0(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((399 < *puVar1) && ((code *)puVar1[0x31] != (code *)0x0)) {
    lVar2 = param_3 + 8;
    if (param_3 == 0) {
      lVar2 = 0;
    }
    (*(code *)puVar1[0x31])(puVar1,*(undefined8 *)(param_2 + 8),lVar2,param_4);
  }
  return;
}



// FUNCTION 144d79b20 FUN_144d79b20 body=63 status=ok
// SIG undefined FUN_144d79b20(void)

void FUN_144d79b20(longlong param_1,undefined1 param_2)

{
  ulonglong *puVar1;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x197 < *puVar1) && ((code *)puVar1[0x32] != (code *)0x0)) {
    (*(code *)puVar1[0x32])(puVar1,param_2);
  }
  return;
}



// FUNCTION 144d79b60 FUN_144d79b60 body=53 status=ok
// SIG undefined FUN_144d79b60(void)

void FUN_144d79b60(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_14516fec0();
  if ((0x19f < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[0x33],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000144d79b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// FUNCTION 144d79ba0 FUN_144d79ba0 body=239 status=ok
// SIG undefined FUN_144d79ba0(void)

void FUN_144d79ba0(longlong param_1,ulonglong *param_2,longlong param_3,undefined4 param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong local_res8;
  ulonglong *local_res10;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  local_res8 = local_res8 & 0xffffffff00000000;
  local_res10 = param_2;
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0x1a8) || (puVar1[0x34] == 0)) {
    uVar2 = *param_2;
    if (uVar2 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(uVar2 + 8) + 4) + uVar2 + 8) + 8))
                ();
    }
  }
  else {
    local_res8 = *param_2;
    if (local_res8 != 0) {
      lVar4 = param_3 + 8;
      if (param_3 == 0) {
        lVar4 = 0;
      }
      if (local_res8 != 0) {
        (*(code *)**(undefined8 **)
                    (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      }
      uVar3 = FUN_144d7a5d0(&local_res8);
      (*(code *)puVar1[0x34])(puVar1,uVar3,lVar4,param_4,uVar5);
      uVar2 = *param_2;
      if (uVar2 != 0) {
        (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(uVar2 + 8) + 4) + uVar2 + 8) + 8
                    ))();
      }
    }
  }
  return;
}



// FUNCTION 144d79c90 FUN_144d79c90 body=89 status=ok
// SIG undefined FUN_144d79c90(void)

void FUN_144d79c90(longlong param_1,longlong param_2,undefined4 param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x1af < *puVar1) && ((code *)puVar1[0x35] != (code *)0x0)) {
    lVar2 = param_2 + 8;
    if (param_2 == 0) {
      lVar2 = 0;
    }
    (*(code *)puVar1[0x35])(puVar1,lVar2,param_3);
  }
  return;
}



// FUNCTION 144d79cf0 FUN_144d79cf0 body=53 status=ok
// SIG undefined FUN_144d79cf0(void)

void FUN_144d79cf0(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_14516fec0();
  if ((0x1b7 < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[0x36],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000144d79d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// FUNCTION 144d79d30 FUN_144d79d30 body=73 status=ok
// SIG undefined FUN_144d79d30(void)

void FUN_144d79d30(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x1bf < *puVar1) && ((code *)puVar1[0x37] != (code *)0x0)) {
    lVar2 = param_2 + 8;
    if (param_2 == 0) {
      lVar2 = 0;
    }
    (*(code *)puVar1[0x37])(puVar1,lVar2);
  }
  return;
}



// FUNCTION 144d79d80 FUN_144d79d80 body=92 status=ok
// SIG undefined FUN_144d79d80(void)

void FUN_144d79d80(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ulonglong *puVar1;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x1c7 < *puVar1) && ((code *)puVar1[0x38] != (code *)0x0)) {
    (*(code *)puVar1[0x38])(puVar1,param_2,param_3,param_4);
  }
  return;
}



// FUNCTION 144d79de0 FUN_144d79de0 body=53 status=ok
// SIG undefined FUN_144d79de0(void)

void FUN_144d79de0(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_14516fec0();
  if ((0x1cf < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[0x39],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000144d79e0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// FUNCTION 144d79e20 FUN_144d79e20 body=102 status=ok
// SIG undefined FUN_144d79e20(void)

undefined8 *
FUN_144d79e20(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  FUN_14516fec0();
  if ((0x1d7 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x3a], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_144d7a730(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144d79e90 FUN_144d79e90 body=60 status=ok
// SIG undefined FUN_144d79e90(void)

void FUN_144d79e90(longlong param_1,undefined4 param_2)

{
  ulonglong *puVar1;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x1df < *puVar1) && ((code *)puVar1[0x3b] != (code *)0x0)) {
    (*(code *)puVar1[0x3b])(puVar1,param_2);
  }
  return;
}



// FUNCTION 144d79ed0 FUN_144d79ed0 body=113 status=ok
// SIG undefined FUN_144d79ed0(void)

void FUN_144d79ed0(longlong param_1,undefined1 param_2,longlong param_3,longlong param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x1e7 < *puVar1) && ((code *)puVar1[0x3c] != (code *)0x0)) {
    lVar3 = param_4 + 8;
    if (param_4 == 0) {
      lVar3 = 0;
    }
    lVar2 = param_3 + 8;
    if (param_3 == 0) {
      lVar2 = 0;
    }
    (*(code *)puVar1[0x3c])(puVar1,param_2,lVar2,lVar3);
  }
  return;
}



// FUNCTION 144d79f50 FUN_144d79f50 body=102 status=ok
// SIG undefined FUN_144d79f50(void)

undefined8 *
FUN_144d79f50(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  FUN_14516fec0();
  if ((0x1ef < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x3d], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_144d7a670(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144d79fc0 FUN_144d79fc0 body=60 status=ok
// SIG undefined FUN_144d79fc0(void)

bool FUN_144d79fc0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0x1f7 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x3e], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 144d7a000 FUN_144d7a000 body=63 status=ok
// SIG undefined FUN_144d7a000(void)

void FUN_144d7a000(longlong param_1,undefined1 param_2)

{
  ulonglong *puVar1;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x1ff < *puVar1) && ((code *)puVar1[0x3f] != (code *)0x0)) {
    (*(code *)puVar1[0x3f])(puVar1,param_2);
  }
  return;
}



// FUNCTION 144d7a040 FUN_144d7a040 body=60 status=ok
// SIG undefined FUN_144d7a040(void)

bool FUN_144d7a040(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0x207 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x40], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 144d7a080 FUN_144d7a080 body=64 status=ok
// SIG undefined FUN_144d7a080(void)

undefined8 * FUN_144d7a080(undefined8 *param_1,ulonglong param_2)

{
  FUN_144d78600();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -4,0x28);
  }
  return param_1 + -4;
}



// FUNCTION 144d7a0c0 FUN_144d7a0c0 body=135 status=ok
// SIG undefined FUN_144d7a0c0(void)

undefined8 * FUN_144d7a0c0(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*param_1 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar1 = FUN_14494321d(0xd0);
    if (lVar1 == 0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2 = (undefined8 *)FUN_1451703b0(lVar1);
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



// FUNCTION 144d7a150 FUN_144d7a150 body=188 status=ok
// SIG undefined FUN_144d7a150(void)

longlong * FUN_144d7a150(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else if (*(int *)(param_2 + -0x18) == DAT_14c7301fc) {
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
    FUN_1451702b0(param_1,*(int *)(param_2 + -0x18),param_2,param_4,0,0xfffffffffffffffe);
  }
  return param_1;
}



// FUNCTION 144d7a210 FUN_144d7a210 body=135 status=ok
// SIG undefined FUN_144d7a210(void)

undefined8 * FUN_144d7a210(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*param_1 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar1 = FUN_14494321d(0x78);
    if (lVar1 == 0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2 = (undefined8 *)FUN_145171bf0(lVar1);
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



// FUNCTION 144d7a2a0 FUN_144d7a2a0 body=135 status=ok
// SIG undefined FUN_144d7a2a0(void)

undefined8 * FUN_144d7a2a0(longlong *param_1)

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
      puVar2 = (undefined8 *)FUN_1451722c0(lVar1);
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



// FUNCTION 144d7a330 FUN_144d7a330 body=135 status=ok
// SIG undefined FUN_144d7a330(void)

undefined8 * FUN_144d7a330(longlong *param_1)

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
      puVar2 = (undefined8 *)FUN_1451727a0(lVar1);
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



// FUNCTION 144d7a3c0 FUN_144d7a3c0 body=135 status=ok
// SIG undefined FUN_144d7a3c0(void)

undefined8 * FUN_144d7a3c0(longlong *param_1)

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
      puVar2 = (undefined8 *)FUN_145172b20(lVar1);
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



// FUNCTION 144d7a450 FUN_144d7a450 body=135 status=ok
// SIG undefined FUN_144d7a450(void)

undefined8 * FUN_144d7a450(longlong *param_1)

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
      puVar2 = (undefined8 *)FUN_145172ed0(lVar1);
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



// FUNCTION 144d7a4e0 FUN_144d7a4e0 body=230 status=ok
// SIG undefined FUN_144d7a4e0(void)

longlong * FUN_144d7a4e0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

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
      FUN_145173370(puVar2 + 4,1,param_3,param_4,uVar3,uVar4);
    }
    *puVar2 = DAT_14c730214;
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



// FUNCTION 144d7a5d0 FUN_144d7a5d0 body=156 status=ok
// SIG undefined FUN_144d7a5d0(void)

undefined8 FUN_144d7a5d0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else if (*(int *)(lVar1 + -0x10) == DAT_14c730218) {
    pcVar2 = *(code **)(*(longlong *)(lVar1 + -8) + 8);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)();
    }
    uVar3 = *(undefined8 *)(lVar1 + -8);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
  }
  else {
    uVar3 = FUN_145174210(*(int *)(lVar1 + -0x10),lVar1,param_3,param_4,0xfffffffffffffffe);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
  }
  return uVar3;
}



// FUNCTION 144d7a670 FUN_144d7a670 body=186 status=ok
// SIG undefined FUN_144d7a670(void)

longlong * FUN_144d7a670(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_14494321d(0x20);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      FUN_145175320(puVar2 + 4);
    }
    *puVar2 = DAT_14c73021c;
    *(longlong *)(puVar2 + 2) = param_2;
    plVar1 = (longlong *)(puVar2 + 4);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)*plVar1)(plVar1);
    }
    if (*(code **)(*(longlong *)(puVar2 + 2) + 0x10) != (code *)0x0) {
      (**(code **)(*(longlong *)(puVar2 + 2) + 0x10))();
    }
    *param_1 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)*plVar1)(plVar1);
      (**(code **)(*plVar1 + 8))(plVar1);
    }
  }
  return param_1;
}



// FUNCTION 144d7a730 FUN_144d7a730 body=230 status=ok
// SIG undefined FUN_144d7a730(void)

longlong * FUN_144d7a730(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

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
      FUN_145175a40(puVar2 + 4,1,param_3,param_4,uVar3,uVar4);
    }
    *puVar2 = DAT_14c730220;
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



// FUNCTION 144d7a820 FUN_144d7a820 body=215 status=ok
// SIG undefined FUN_144d7a820(void)

longlong * FUN_144d7a820(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  uVar3 = 0;
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_14494321d(0x30);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      FUN_145176430(puVar2 + 4,1,param_3,param_4,uVar3,uVar4);
    }
    *puVar2 = DAT_14c730224;
    *(longlong *)(puVar2 + 2) = param_2;
    plVar1 = (longlong *)(puVar2 + 4);
    if (plVar1 != (longlong *)0x0) {
      (*(code *)**(undefined8 **)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1))();
    }
    if (*(code **)(*(longlong *)(puVar2 + 2) + 0x10) != (code *)0x0) {
      (**(code **)(*(longlong *)(puVar2 + 2) + 0x10))();
    }
    *param_1 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (*(code *)**(undefined8 **)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1))();
      (**(code **)(*(longlong *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1) + 8))();
    }
  }
  return param_1;
}



// FUNCTION 144d7a900 FUN_144d7a900 body=48 status=ok
// SIG undefined FUN_144d7a900(void)

void FUN_144d7a900(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 144d7a930 FUN_144d7a930 body=230 status=ok
// SIG undefined FUN_144d7a930(void)

longlong * FUN_144d7a930(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

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
      FUN_144d7b030(puVar2 + 4,1,param_3,param_4,uVar3,uVar4);
    }
    *puVar2 = DAT_14c7078e8;
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



// FUNCTION 144d7aa20 FUN_144d7aa20 body=156 status=ok
// SIG undefined FUN_144d7aa20(void)

undefined8 FUN_144d7aa20(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else if (*(int *)(lVar1 + -0x10) == DAT_14c7078e8) {
    pcVar2 = *(code **)(*(longlong *)(lVar1 + -8) + 8);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)();
    }
    uVar3 = *(undefined8 *)(lVar1 + -8);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
  }
  else {
    uVar3 = FUN_144d7afc0(*(int *)(lVar1 + -0x10),lVar1,param_3,param_4,0xfffffffffffffffe);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
  }
  return uVar3;
}



// FUNCTION 144d7aac0 FUN_144d7aac0 body=48 status=ok
// SIG undefined FUN_144d7aac0(void)

void FUN_144d7aac0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 144d7aaf0 FUN_144d7aaf0 body=49 status=ok
// SIG undefined FUN_144d7aaf0(void)

longlong * FUN_144d7aaf0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 144d7ab30 FUN_144d7ab30 body=48 status=ok
// SIG undefined FUN_144d7ab30(void)

void FUN_144d7ab30(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 144d7ab60 FUN_144d7ab60 body=49 status=ok
// SIG undefined FUN_144d7ab60(void)

longlong * FUN_144d7ab60(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 144d7aba0 FUN_144d7aba0 body=48 status=ok
// SIG undefined FUN_144d7aba0(void)

void FUN_144d7aba0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 144d7abd0 FUN_144d7abd0 body=48 status=ok
// SIG undefined FUN_144d7abd0(void)

void FUN_144d7abd0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 144d7ac00 FUN_144d7ac00 body=43 status=ok
// SIG undefined FUN_144d7ac00(void)

void FUN_144d7ac00(longlong *param_1)

{
  param_1 = (longlong *)*param_1;
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) + 8))();
  }
  return;
}



// FUNCTION 144d7ac30 FUN_144d7ac30 body=48 status=ok
// SIG undefined FUN_144d7ac30(void)

void FUN_144d7ac30(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 144d7ac60 FUN_144d7ac60 body=48 status=ok
// SIG undefined FUN_144d7ac60(void)

void FUN_144d7ac60(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 144d7ac90 FUN_144d7ac90 body=48 status=ok
// SIG undefined FUN_144d7ac90(void)

void FUN_144d7ac90(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 144d7ad10 FUN_144d7ad10 body=67 status=ok
// SIG undefined FUN_144d7ad10(void)

undefined8 FUN_144d7ad10(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    puVar1 = (undefined8 *)FUN_14494321d();
    *(undefined8 **)(param_1 + 8) = puVar1;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined1 *)(param_1 + 0x10) = 1;
    return *(undefined8 *)(param_1 + 8);
  }
  return *(undefined8 *)(param_1 + 8);
}



// FUNCTION 144d7ad60 FUN_144d7ad60 body=42 status=ok
// SIG undefined FUN_144d7ad60(void)

undefined8
FUN_144d7ad60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = cef_request_context_get_global_context();
  FUN_144d7a930(param_1,uVar1,param_3,param_4,uVar2);
  return param_1;
}



// FUNCTION 144d7ad90 FUN_144d7ad90 body=172 status=ok
// SIG undefined FUN_144d7ad90(void)

undefined8 FUN_144d7ad90(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong local_res8;
  
  lVar2 = param_2 + 8;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  local_res8 = *param_3;
  if (local_res8 != 0) {
    (*(code *)**(undefined8 **)
                (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
  }
  uVar1 = FUN_144d7c110(&local_res8);
  uVar1 = cef_request_context_create_context(lVar2,uVar1);
  FUN_144d7a930(param_1,uVar1);
  lVar2 = *param_3;
  if (lVar2 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))()
    ;
  }
  return param_1;
}



// FUNCTION 144d7ae40 FUN_144d7ae40 body=48 status=ok
// SIG undefined FUN_144d7ae40(void)

longlong FUN_144d7ae40(longlong param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x10,0x18);
    return param_1 + -0x10;
  }
  return param_1 + -0x10;
}



// FUNCTION 144d7ae70 FUN_144d7ae70 body=40 status=ok
// SIG undefined FUN_144d7ae70(void)

int FUN_144d7ae70(longlong param_1)

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



// FUNCTION 144d7aea0 FUN_144d7aea0 body=181 status=ok
// SIG undefined FUN_144d7aea0(void)

undefined8 FUN_144d7aea0(undefined8 *param_1)

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
      param_1[-4] = &PTR_FUN_1499d6390;
      *(undefined ***)((longlong)*(int *)(param_1[-3] + 4) + 0x18 + (longlong)puVar3) =
           &PTR_LAB_1499d6450;
      *(int *)((longlong)*(int *)(param_1[-3] + 4) + 0x14 + (longlong)puVar3) =
           *(int *)(param_1[-3] + 4) + -0x18;
      param_1[-4] = &PTR__purecall_1499d62a8;
      *(undefined ***)((longlong)*(int *)(param_1[-3] + 4) + 0x18 + (longlong)puVar3) =
           &PTR_LAB_1499d6368;
      *(int *)((longlong)*(int *)(param_1[-3] + 4) + 0x14 + (longlong)puVar3) =
           *(int *)(param_1[-3] + 4) + -0x18;
      *param_1 = &PTR__purecall_14ba6c6b0;
      thunk_FUN_1400020a8(puVar3,0x38);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 144d7af60 FUN_144d7af60 body=34 status=ok
// SIG undefined FUN_144d7af60(void)

bool FUN_144d7af60(longlong param_1)

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



// FUNCTION 144d7af90 FUN_144d7af90 body=38 status=ok
// SIG undefined FUN_144d7af90(void)

bool FUN_144d7af90(longlong param_1)

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


