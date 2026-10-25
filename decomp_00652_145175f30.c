// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145175f30 FUN_145175f30 body=52 status=ok
// SIG undefined FUN_145175f30(void)

undefined8 FUN_145175f30(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  FUN_14516fec0();
  if ((0x57 < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[10],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145175f56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 1;
}



// FUNCTION 145175f70 FUN_145175f70 body=54 status=ok
// SIG undefined FUN_145175f70(void)

bool FUN_145175f70(longlong param_1)

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



// FUNCTION 145175fb0 FUN_145175fb0 body=158 status=ok
// SIG undefined FUN_145175fb0(void)

undefined8 *
FUN_145175fb0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 local_30 [40];
  
  FUN_14516fec0(param_1,param_2,param_3,param_4,0);
  if ((**(ulonglong **)(param_1 + -8) < 0x68) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0xc], pcVar1 == (code *)0x0)) {
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
  }
  else {
    puVar6 = (undefined8 *)(*pcVar1)(local_30);
    uVar2 = *puVar6;
    uVar3 = puVar6[1];
    uVar4 = puVar6[2];
    uVar5 = puVar6[3];
    puVar6 = param_2 + 1;
    if (param_2 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    param_2[5] = 0;
    param_2[1] = uVar2;
    param_2[2] = uVar3;
    param_2[3] = uVar4;
    param_2[4] = uVar5;
  }
  *param_2 = &PTR_FUN_149c39750;
  return param_2;
}



// FUNCTION 145176050 FUN_145176050 body=49 status=ok
// SIG undefined FUN_145176050(void)

undefined8 FUN_145176050(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  FUN_14516fec0();
  if ((0x6f < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[0xd],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145176076. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 145176090 FUN_145176090 body=96 status=ok
// SIG undefined FUN_145176090(void)

undefined8 *
FUN_145176090(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  FUN_14516fec0();
  if ((0x77 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0xe], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_145176130(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1451760f0 FUN_1451760f0 body=64 status=ok
// SIG undefined FUN_1451760f0(void)

undefined8 * FUN_1451760f0(undefined8 *param_1,ulonglong param_2)

{
  FUN_145175af0();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -4,0x28);
  }
  return param_1 + -4;
}



// FUNCTION 145176130 FUN_145176130 body=230 status=ok
// SIG undefined FUN_145176130(void)

longlong * FUN_145176130(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

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
      FUN_1453f16e0(puVar2 + 4,1,param_3,param_4,uVar3,uVar4);
    }
    *puVar2 = DAT_14c7441d0;
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



// FUNCTION 145176220 FUN_145176220 body=48 status=ok
// SIG undefined FUN_145176220(void)

void FUN_145176220(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 1451762a0 FUN_1451762a0 body=48 status=ok
// SIG undefined FUN_1451762a0(void)

longlong FUN_1451762a0(longlong param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -8,0x10);
    return param_1 + -8;
  }
  return param_1 + -8;
}



// FUNCTION 1451762d0 FUN_1451762d0 body=40 status=ok
// SIG undefined FUN_1451762d0(void)

int FUN_1451762d0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(*(longlong *)(param_1 + -0x20) + 8);
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



// FUNCTION 145176300 FUN_145176300 body=105 status=ok
// SIG undefined FUN_145176300(void)

undefined8 FUN_145176300(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(code **)(param_1[-4] + 0x10) != (code *)0x0) {
    (**(code **)(param_1[-4] + 0x10))();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -2);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    if (param_1 + -5 != (undefined8 *)0x0) {
      FUN_1451764b0(param_1);
      *param_1 = &PTR__purecall_14ba6c6b0;
      thunk_FUN_1400020a8(param_1 + -5,0x30);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 145176370 FUN_145176370 body=34 status=ok
// SIG undefined FUN_145176370(void)

bool FUN_145176370(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*(longlong *)(param_1 + -0x20) + 0x18);
  if (pcVar1 == (code *)0x0) {
    return false;
  }
  iVar2 = (*pcVar1)();
  return iVar2 != 0;
}



// FUNCTION 1451763a0 FUN_1451763a0 body=38 status=ok
// SIG undefined FUN_1451763a0(void)

bool FUN_1451763a0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + -0x20);
  if (*(longlong *)(lVar1 + 0x18) == 0) {
    return false;
  }
  iVar2 = (**(code **)(lVar1 + 0x20))(lVar1);
  return iVar2 != 0;
}



// FUNCTION 1451763d0 FUN_1451763d0 body=86 status=ok
// SIG undefined FUN_1451763d0(void)

longlong * FUN_1451763d0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  plVar1 = param_1 + -3;
  *(undefined ***)((longlong)*(int *)(param_1[-3] + 4) + -0x18 + (longlong)param_1) =
       &PTR_LAB_149c39a08;
  *(int *)((longlong)*(int *)(*plVar1 + 4) + -0x1c + (longlong)param_1) =
       *(int *)(*plVar1 + 4) + -0x18;
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(plVar1,0x20);
  }
  return plVar1;
}



// FUNCTION 145176430 FUN_145176430 body=128 status=ok
// SIG undefined FUN_145176430(void)

longlong * FUN_145176430(longlong *param_1,int param_2)

{
  if (param_2 != 0) {
    *param_1 = (longlong)&DAT_149c39a58;
    param_1[3] = (longlong)&PTR__purecall_14ba6c6b0;
  }
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) = &PTR__purecall_149c399e0;
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) = &PTR_LAB_149c39a08;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x18;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) = &PTR_LAB_149c39a30;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x18;
  return param_1;
}



// FUNCTION 1451764b0 FUN_1451764b0 body=102 status=ok
// SIG undefined FUN_1451764b0(void)

void FUN_1451764b0(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149c39a30;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  FUN_14516fec0();
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149c39a08;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  return;
}



// FUNCTION 145176520 FUN_145176520 body=64 status=ok
// SIG undefined FUN_145176520(void)

undefined8 * FUN_145176520(undefined8 *param_1,ulonglong param_2)

{
  FUN_1451764b0();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -3,0x20);
  }
  return param_1 + -3;
}



// FUNCTION 1451765b0 FUN_1451765b0 body=112 status=ok
// SIG undefined FUN_1451765b0(void)

void FUN_1451765b0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(undefined8 **)(param_1 + 0x68) != param_2) {
    cef_string_utf16_clear(param_2 + 1);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *param_2 = *(undefined8 *)(param_1 + 8);
  param_2[1] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  param_2[2] = *(undefined8 *)(param_1 + 0x18);
  param_2[3] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  param_2[4] = *(undefined8 *)(param_1 + 0x28);
  param_2[5] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  param_2[6] = *(undefined8 *)(param_1 + 0x38);
  param_2[7] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  param_2[8] = *(undefined8 *)(param_1 + 0x48);
  param_2[9] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  param_2[10] = *(undefined8 *)(param_1 + 0x58);
  param_2[0xb] = uVar1;
  memset((void *)(param_1 + 8),0,0x60);
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}



// FUNCTION 145176620 FUN_145176620 body=27 status=ok
// SIG undefined FUN_145176620(void)

void FUN_145176620(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba6c750;
  if (param_1[0xd] == 0) {
    cef_string_utf16_clear(param_1 + 2);
    return;
  }
  return;
}



// FUNCTION 145176640 FUN_145176640 body=33 status=ok
// SIG undefined FUN_145176640(void)

void FUN_145176640(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 8))();
  }
  return;
}



// FUNCTION 145176670 FUN_145176670 body=58 status=ok
// SIG undefined FUN_145176670(void)

longlong * FUN_145176670(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + -0x10);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 1451766b0 FUN_1451766b0 body=52 status=ok
// SIG undefined FUN_1451766b0(void)

int FUN_1451766b0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  (*(code *)**(undefined8 **)
              (*(longlong *)(param_1 + 0x10) + 8 +
              (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 4)))();
  LOCK();
  piVar1 = (int *)(param_1 + 0x88);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 1451766f0 FUN_1451766f0 body=80 status=ok
// SIG undefined FUN_1451766f0(void)

undefined8 FUN_1451766f0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  (**(code **)(*(longlong *)(param_1[2] + 8 + (longlong)*(int *)(*(longlong *)(param_1[2] + 8) + 4))
              + 8))();
  LOCK();
  plVar1 = param_1 + 0x11;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*param_1 + 0x20))(param_1,1);
    return 1;
  }
  return 0;
}



// FUNCTION 145176780 FUN_145176780 body=20 status=ok
// SIG undefined FUN_145176780(void)

undefined8 * FUN_145176780(undefined8 *param_1)

{
  *param_1 = 0;
  return param_1;
}



// FUNCTION 1451767c0 FUN_1451767c0 body=42 status=ok
// SIG undefined FUN_1451767c0(void)

undefined1 FUN_1451767c0(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 8))();
  return uVar1;
}



// FUNCTION 1451767f0 FUN_1451767f0 body=42 status=ok
// SIG undefined FUN_1451767f0(void)

undefined1 FUN_1451767f0(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x10))();
  return uVar1;
}



// FUNCTION 145176820 FUN_145176820 body=42 status=ok
// SIG undefined FUN_145176820(void)

undefined1 FUN_145176820(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x18))();
  return uVar1;
}



// FUNCTION 145176850 FUN_145176850 body=43 status=ok
// SIG undefined FUN_145176850(void)

undefined8 * FUN_145176850(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 145176880 FUN_145176880 body=228 status=ok
// SIG undefined FUN_145176880(void)

undefined8 * FUN_145176880(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149c39a88;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)(param_1 + 1) = DAT_14c730228;
  param_1[3] = param_1;
  memset(param_1 + 4,0,0x68);
  param_1[5] = &LAB_1451767a0;
  param_1[6] = FUN_1451767c0;
  param_1[7] = FUN_1451767f0;
  param_1[8] = FUN_145176820;
  param_1[4] = 0x68;
  *param_1 = &PTR_FUN_149c39ab0;
  param_1[9] = FUN_145176a90;
  param_1[10] = FUN_145176b00;
  param_1[0xb] = FUN_145176b90;
  param_1[0xc] = FUN_145176c20;
  param_1[0xd] = FUN_1451770c0;
  param_1[0xe] = FUN_145177480;
  param_1[0xf] = FUN_1451775b0;
  param_1[0x10] = FUN_1451776c0;
  return param_1;
}



// FUNCTION 145176970 FUN_145176970 body=84 status=ok
// SIG undefined FUN_145176970(void)

undefined8 *
FUN_145176970(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &PTR_FUN_149c39ab0;
  FUN_14516fec0();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x90,param_3,param_4,uVar1);
  }
  return param_1;
}



// FUNCTION 1451769d0 FUN_1451769d0 body=186 status=ok
// SIG undefined FUN_1451769d0(void)

longlong * FUN_1451769d0(longlong *param_1,longlong param_2)

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
      FUN_1453f1b00(puVar2 + 4);
    }
    *puVar2 = DAT_14c7441d4;
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



// FUNCTION 145176a90 FUN_145176a90 body=111 status=ok
// SIG undefined FUN_145176a90(void)

void FUN_145176a90(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  local_res8 = 0;
  FUN_14516fec0();
  if (param_1 != 0) {
    puVar2 = (undefined8 *)FUN_145176670(&local_res8,param_1,param_3,param_4,uVar3);
    (*(code *)**(undefined8 **)*puVar2)((undefined8 *)*puVar2,param_2);
    lVar1 = CONCAT44(uStackX_c,local_res8);
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 145176b00 FUN_145176b00 body=136 status=ok
// SIG undefined FUN_145176b00(void)

void FUN_145176b00(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 local_res8 [2];
  longlong local_res18 [2];
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((param_1 != 0) && (param_2 != 0)) {
    puVar3 = (undefined8 *)FUN_145176670(local_res18,param_1);
    plVar1 = (longlong *)*puVar3;
    uVar4 = FUN_144d7a670(local_res8,param_2);
    lVar2 = *plVar1;
    (**(code **)(lVar2 + 8))(plVar1,uVar4,lVar2,param_4,uVar5);
    if (local_res18[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_res18[0] + 8 + (longlong)*(int *)(*(longlong *)(local_res18[0] + 8) + 4))
                  + 8))();
    }
  }
  return;
}



// FUNCTION 145176b90 FUN_145176b90 body=136 status=ok
// SIG undefined FUN_145176b90(void)

void FUN_145176b90(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 local_res8 [2];
  longlong local_res18 [2];
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((param_1 != 0) && (param_2 != 0)) {
    puVar3 = (undefined8 *)FUN_145176670(local_res18,param_1);
    plVar1 = (longlong *)*puVar3;
    uVar4 = FUN_144d7a670(local_res8,param_2);
    lVar2 = *plVar1;
    (**(code **)(lVar2 + 0x10))(plVar1,uVar4,lVar2,param_4,uVar5);
    if (local_res18[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_res18[0] + 8 + (longlong)*(int *)(*(longlong *)(local_res18[0] + 8) + 4))
                  + 8))();
    }
  }
  return;
}



// FUNCTION 145176c20 FUN_145176c20 body=664 status=ok
// SIG undefined FUN_145176c20(void)

undefined1
FUN_145176c20(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,longlong param_5)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined1 uVar3;
  ulonglong *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong local_res8;
  ulonglong local_198;
  longlong local_190;
  undefined **local_188;
  longlong local_180;
  char local_178;
  undefined8 local_170;
  undefined **local_168;
  undefined8 local_160 [37];
  longlong local_38;
  
  local_170 = 0xfffffffffffffffe;
  local_res8 = local_res8 & 0xffffffff00000000;
  FUN_14516fec0();
  if ((((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) ||
     ((param_4 == (longlong *)0x0 || (param_5 == 0)))) {
    uVar3 = 0;
  }
  else {
    local_res8 = 0;
    if (*param_4 != 0) {
      puVar4 = (ulonglong *)FUN_144d7a150(&local_198);
      uVar2 = *puVar4;
      if (uVar2 != 0) {
        (*(code *)**(undefined8 **)((longlong)*(int *)(*(longlong *)(uVar2 + 8) + 4) + 8 + uVar2))()
        ;
      }
      if (local_res8 != 0) {
        plVar1 = (longlong *)(local_res8 + 8);
        lVar7 = local_res8 + 8;
        local_res8 = uVar2;
        (**(code **)(*(longlong *)(*(int *)(*plVar1 + 4) + lVar7) + 8))();
        uVar2 = local_res8;
      }
      local_res8 = uVar2;
      if (local_198 != 0) {
        (**(code **)(*(longlong *)
                      (local_198 + 8 + (longlong)*(int *)(*(longlong *)(local_198 + 8) + 4)) + 8))()
        ;
      }
    }
    uVar2 = local_res8;
    local_168 = &PTR_FUN_14ba6d6f8;
    memset(local_160,0,0x128);
    local_38 = 0;
    local_160[0] = 0x128;
    FUN_145176ee0(&local_168,param_5);
    puVar5 = (undefined8 *)FUN_145176670(&local_190,param_1);
    plVar1 = (longlong *)*puVar5;
    local_188 = &PTR_FUN_14ba6d600;
    local_178 = '\0';
    local_180 = param_3;
    uVar6 = FUN_144d7a670(&local_198,param_2);
    uVar3 = (**(code **)(*plVar1 + 0x18))(plVar1,uVar6,&local_188,&local_res8,&local_168);
    local_188 = &PTR_FUN_14ba6d600;
    if (local_180 != 0) {
      if (local_178 != '\0') {
        cef_string_utf16_clear();
        thunk_FUN_1400020a8(local_180,0x18);
      }
      local_180 = 0;
      local_178 = '\0';
    }
    if (local_190 != 0) {
      (**(code **)(*(longlong *)
                    (local_190 + 8 + (longlong)*(int *)(*(longlong *)(local_190 + 8) + 4)) + 8))();
    }
    if (local_res8 == 0) {
      *param_4 = 0;
    }
    else if (local_res8 != uVar2) {
      local_198 = local_res8;
      (*(code *)**(undefined8 **)
                  (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      lVar7 = FUN_144d7a0c0(&local_198);
      *param_4 = lVar7;
    }
    FUN_145176f90(&local_168,param_5);
    local_168 = &PTR_FUN_14ba6d6f8;
    if (local_38 == 0) {
      FUN_145177060(local_160);
    }
    if (local_res8 != 0) {
      (**(code **)(*(longlong *)
                    (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)) + 8))()
      ;
    }
  }
  return uVar3;
}



// FUNCTION 145176ec0 FUN_145176ec0 body=30 status=ok
// SIG undefined FUN_145176ec0(void)

void FUN_145176ec0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba6d6f8;
  if (param_1[0x26] == 0) {
    FUN_145177060(param_1 + 1);
    return;
  }
  return;
}



// FUNCTION 145176ee0 FUN_145176ee0 body=167 status=ok
// SIG undefined FUN_145176ee0(void)

void FUN_145176ee0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (*(longlong *)(param_1 + 0x130) == 0) {
    FUN_145177060(param_1 + 8);
  }
  *(undefined8 **)(param_1 + 0x130) = param_2;
  lVar3 = 2;
  puVar2 = (undefined8 *)(param_1 + 8);
  do {
    puVar5 = param_2;
    puVar4 = puVar2;
    uVar1 = puVar5[1];
    *puVar4 = *puVar5;
    puVar4[1] = uVar1;
    uVar1 = puVar5[3];
    puVar4[2] = puVar5[2];
    puVar4[3] = uVar1;
    uVar1 = puVar5[5];
    puVar4[4] = puVar5[4];
    puVar4[5] = uVar1;
    uVar1 = puVar5[7];
    puVar4[6] = puVar5[6];
    puVar4[7] = uVar1;
    uVar1 = puVar5[9];
    puVar4[8] = puVar5[8];
    puVar4[9] = uVar1;
    uVar1 = puVar5[0xb];
    puVar4[10] = puVar5[10];
    puVar4[0xb] = uVar1;
    uVar1 = puVar5[0xd];
    puVar4[0xc] = puVar5[0xc];
    puVar4[0xd] = uVar1;
    uVar1 = puVar5[0xf];
    puVar4[0xe] = puVar5[0xe];
    puVar4[0xf] = uVar1;
    lVar3 = lVar3 + -1;
    puVar2 = puVar4 + 0x10;
    param_2 = puVar5 + 0x10;
  } while (lVar3 != 0);
  uVar1 = puVar5[0x11];
  puVar4[0x10] = puVar5[0x10];
  puVar4[0x11] = uVar1;
  uVar1 = puVar5[0x13];
  puVar4[0x12] = puVar5[0x12];
  puVar4[0x13] = uVar1;
  puVar4[0x14] = puVar5[0x14];
  return;
}



// FUNCTION 145176f90 FUN_145176f90 body=203 status=ok
// SIG undefined FUN_145176f90(void)

void FUN_145176f90(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  if (*(undefined8 **)(param_1 + 0x130) != param_2) {
    FUN_145177060(param_2);
  }
  lVar4 = 2;
  puVar2 = (undefined8 *)(param_1 + 8);
  do {
    puVar5 = param_2;
    puVar3 = puVar2;
    uVar1 = puVar3[1];
    *puVar5 = *puVar3;
    puVar5[1] = uVar1;
    uVar1 = puVar3[3];
    puVar5[2] = puVar3[2];
    puVar5[3] = uVar1;
    uVar1 = puVar3[5];
    puVar5[4] = puVar3[4];
    puVar5[5] = uVar1;
    uVar1 = puVar3[7];
    puVar5[6] = puVar3[6];
    puVar5[7] = uVar1;
    uVar1 = puVar3[9];
    puVar5[8] = puVar3[8];
    puVar5[9] = uVar1;
    uVar1 = puVar3[0xb];
    puVar5[10] = puVar3[10];
    puVar5[0xb] = uVar1;
    uVar1 = puVar3[0xd];
    puVar5[0xc] = puVar3[0xc];
    puVar5[0xd] = uVar1;
    uVar1 = puVar3[0xf];
    puVar5[0xe] = puVar3[0xe];
    puVar5[0xf] = uVar1;
    lVar4 = lVar4 + -1;
    puVar2 = puVar3 + 0x10;
    param_2 = puVar5 + 0x10;
  } while (lVar4 != 0);
  uVar1 = puVar3[0x11];
  puVar5[0x10] = puVar3[0x10];
  puVar5[0x11] = uVar1;
  uVar1 = puVar3[0x13];
  puVar5[0x12] = puVar3[0x12];
  puVar5[0x13] = uVar1;
  puVar5[0x14] = puVar3[0x14];
  memset((void *)(param_1 + 8),0,0x128);
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 8) = 0x128;
  return;
}



// FUNCTION 145177060 FUN_145177060 body=95 status=ok
// SIG undefined FUN_145177060(void)

void FUN_145177060(longlong param_1)

{
  cef_string_utf16_clear(param_1 + 0x10);
  cef_string_utf16_clear(param_1 + 0x28);
  cef_string_utf16_clear(param_1 + 0x40);
  cef_string_utf16_clear(param_1 + 0x58);
  cef_string_utf16_clear(param_1 + 0x70);
  cef_string_utf16_clear(param_1 + 0x88);
  cef_string_utf16_clear(param_1 + 0xb0);
  cef_string_utf16_clear(param_1 + 0x110);
  return;
}



// FUNCTION 1451770c0 FUN_1451770c0 body=949 status=ok
// SIG undefined FUN_1451770c0(void)

undefined1
FUN_1451770c0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,undefined4 param_5
             ,longlong param_6,int param_7,undefined8 *param_8,longlong *param_9,longlong param_10)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined1 uVar3;
  ulonglong *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong local_res8;
  longlong local_res10;
  longlong local_res18;
  ulonglong local_248;
  undefined **local_240;
  longlong local_238;
  char local_230;
  longlong local_228;
  undefined1 local_220 [8];
  undefined1 local_218 [8];
  ulonglong local_210;
  undefined1 *local_208;
  undefined **local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined8 *local_190;
  undefined8 local_188;
  longlong *local_180;
  undefined **local_178;
  undefined8 local_170 [37];
  longlong local_48;
  
  local_188 = 0xfffffffffffffffe;
  local_res8 = local_res8 & 0xffffffff00000000;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_14516fec0();
  if (((((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) || ((param_4 == 0 || (param_6 == 0))))
     || ((param_8 == (undefined8 *)0x0 || ((param_9 == (longlong *)0x0 || (param_10 == 0)))))) {
    uVar3 = 0;
  }
  else {
    memset(&local_1f0,0,0x60);
    local_190 = (undefined8 *)0x0;
    local_1f8 = &PTR_FUN_14ba6c748;
    cef_string_utf16_clear(&uStack_1e8);
    local_190 = param_8;
    local_1f0 = *param_8;
    uStack_1e8 = param_8[1];
    local_1e0 = param_8[2];
    uStack_1d8 = param_8[3];
    local_1d0 = param_8[4];
    uStack_1c8 = param_8[5];
    local_1c0 = param_8[6];
    uStack_1b8 = param_8[7];
    local_1b0 = *(undefined4 *)(param_8 + 8);
    uStack_1ac = *(undefined4 *)((longlong)param_8 + 0x44);
    uStack_1a8 = *(undefined4 *)(param_8 + 9);
    uStack_1a4 = *(undefined4 *)((longlong)param_8 + 0x4c);
    local_1a0 = *(undefined4 *)(param_8 + 10);
    uStack_19c = *(undefined4 *)((longlong)param_8 + 0x54);
    uStack_198 = *(undefined4 *)(param_8 + 0xb);
    uStack_194 = *(undefined4 *)((longlong)param_8 + 0x5c);
    local_res8 = 0;
    if (*param_9 != 0) {
      puVar4 = (ulonglong *)FUN_144d7a150(&local_248);
      uVar2 = *puVar4;
      if (uVar2 != 0) {
        (*(code *)**(undefined8 **)((longlong)*(int *)(*(longlong *)(uVar2 + 8) + 4) + 8 + uVar2))()
        ;
      }
      if (local_res8 != 0) {
        plVar1 = (longlong *)(local_res8 + 8);
        lVar9 = local_res8 + 8;
        local_res8 = uVar2;
        (**(code **)(*(longlong *)(*(int *)(*plVar1 + 4) + lVar9) + 8))();
        uVar2 = local_res8;
      }
      local_res8 = uVar2;
      param_3 = local_res18;
      if (local_248 != 0) {
        (**(code **)(*(longlong *)
                      (local_248 + 8 + (longlong)*(int *)(*(longlong *)(local_248 + 8) + 4)) + 8))()
        ;
        param_3 = local_res18;
      }
    }
    local_210 = local_res8;
    local_178 = &PTR_FUN_14ba6d6f8;
    memset(local_170,0,0x128);
    local_48 = 0;
    local_170[0] = 0x128;
    FUN_145176ee0(&local_178,param_10);
    local_180 = (longlong *)&local_248;
    local_208 = local_220;
    puVar5 = (undefined8 *)FUN_145176670(&local_228,param_1);
    plVar1 = (longlong *)*puVar5;
    local_240 = &PTR_FUN_14ba6d600;
    local_238 = param_6;
    local_230 = '\0';
    uVar6 = FUN_144d7a4e0(&local_248,param_4);
    uVar7 = FUN_144d7a4e0(local_220,param_3);
    uVar8 = FUN_144d7a670(local_218,local_res10);
    uVar3 = (**(code **)(*plVar1 + 0x20))
                      (plVar1,uVar8,uVar7,uVar6,param_5,&local_240,param_7 != 0,&local_1f8,
                       &local_res8,&local_178);
    local_240 = &PTR_FUN_14ba6d600;
    if (local_238 != 0) {
      if (local_230 != '\0') {
        cef_string_utf16_clear();
        thunk_FUN_1400020a8(local_238,0x18);
      }
      local_238 = 0;
      local_230 = '\0';
    }
    if (local_228 != 0) {
      (**(code **)(*(longlong *)
                    (local_228 + 8 + (longlong)*(int *)(*(longlong *)(local_228 + 8) + 4)) + 8))();
    }
    FUN_1451765b0(&local_1f8,param_8);
    if (local_res8 == 0) {
      *param_9 = 0;
    }
    else if (local_res8 != local_210) {
      local_248 = local_res8;
      (*(code *)**(undefined8 **)
                  (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      lVar9 = FUN_144d7a0c0(&local_248);
      *param_9 = lVar9;
    }
    FUN_145176f90(&local_178,param_10);
    local_178 = &PTR_FUN_14ba6d6f8;
    if (local_48 == 0) {
      FUN_145177060(local_170);
    }
    if (local_res8 != 0) {
      (**(code **)(*(longlong *)
                    (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)) + 8))()
      ;
    }
    local_1f8 = &PTR_FUN_14ba6c750;
    if (local_190 == (undefined8 *)0x0) {
      cef_string_utf16_clear(&uStack_1e8);
    }
  }
  return uVar3;
}



// FUNCTION 145177480 FUN_145177480 body=298 status=ok
// SIG undefined FUN_145177480(void)

undefined8 FUN_145177480(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *local_res8;
  undefined1 *local_38;
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  longlong local_20 [3];
  
  local_20[1] = 0xfffffffffffffffe;
  local_res8 = (undefined1 *)((ulonglong)local_res8 & 0xffffffff00000000);
  FUN_14516fec0();
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    uVar3 = 0;
  }
  else {
    local_res8 = local_30;
    puVar2 = (undefined8 *)FUN_145176670(local_20,param_1);
    plVar1 = (longlong *)*puVar2;
    uVar3 = FUN_144d7a4e0(local_30,param_3);
    uVar4 = FUN_144d7a670(local_28,param_2);
    (**(code **)(*plVar1 + 0x28))(plVar1,&local_38,uVar4,uVar3,param_4 != 0);
    if (local_20[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_20[0] + 8 + (longlong)*(int *)(*(longlong *)(local_20[0] + 8) + 4)) + 8))
                ();
    }
    local_res8 = local_38;
    if (local_38 != (undefined1 *)0x0) {
      (*(code *)**(undefined8 **)
                  (local_38 + (longlong)*(int *)(*(longlong *)(local_38 + 8) + 4) + 8))();
    }
    uVar3 = FUN_145173170(&local_res8);
    if (local_38 != (undefined1 *)0x0) {
      (**(code **)(*(longlong *)(local_38 + (longlong)*(int *)(*(longlong *)(local_38 + 8) + 4) + 8)
                  + 8))();
    }
  }
  return uVar3;
}



// FUNCTION 1451775b0 FUN_1451775b0 body=271 status=ok
// SIG undefined FUN_1451775b0(void)

undefined1
FUN_1451775b0(longlong param_1,longlong param_2,longlong param_3,int param_4,longlong param_5)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 local_res8 [2];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  longlong local_38 [2];
  undefined4 *local_28;
  undefined1 *local_20;
  
  local_38[1] = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) || (param_5 == 0)) {
    uVar2 = 0;
  }
  else {
    local_28 = local_res8;
    local_20 = local_48;
    puVar3 = (undefined8 *)FUN_145176670(local_38,param_1);
    plVar1 = (longlong *)*puVar3;
    uVar4 = FUN_144d7a4e0(local_res8,param_5);
    uVar5 = FUN_144d7a4e0(local_48,param_3);
    uVar6 = FUN_144d7a670(local_40,param_2);
    uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,uVar6,uVar5,param_4 != 0,uVar4);
    if (local_38[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_38[0] + 8 + (longlong)*(int *)(*(longlong *)(local_38[0] + 8) + 4)) + 8))
                ();
    }
  }
  return uVar2;
}



// FUNCTION 1451776c0 FUN_1451776c0 body=356 status=ok
// SIG undefined FUN_1451776c0(void)

undefined1
FUN_1451776c0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 local_res8 [2];
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  longlong local_68 [2];
  undefined4 *local_58;
  undefined1 *local_50;
  undefined **local_48;
  longlong local_40;
  char local_38;
  
  local_68[1] = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) || ((param_4 == 0 || (param_5 == 0))))
  {
    uVar2 = 0;
  }
  else {
    local_58 = local_res8;
    local_50 = local_78;
    puVar3 = (undefined8 *)FUN_145176670(local_68,param_1);
    plVar1 = (longlong *)*puVar3;
    uVar4 = FUN_1451769d0(local_res8,param_5);
    local_48 = &PTR_FUN_14ba6d600;
    local_38 = '\0';
    local_40 = param_4;
    uVar5 = FUN_144d7a4e0(local_78,param_3);
    uVar6 = FUN_144d7a670(local_70,param_2);
    uVar2 = (**(code **)(*plVar1 + 0x38))(plVar1,uVar6,uVar5,&local_48,uVar4);
    local_48 = &PTR_FUN_14ba6d600;
    if (local_40 != 0) {
      if (local_38 != '\0') {
        cef_string_utf16_clear();
        thunk_FUN_1400020a8(local_40,0x18);
      }
      local_40 = 0;
      local_38 = '\0';
    }
    if (local_68[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_68[0] + 8 + (longlong)*(int *)(*(longlong *)(local_68[0] + 8) + 4)) + 8))
                ();
    }
  }
  return uVar2;
}



// FUNCTION 145177830 FUN_145177830 body=48 status=ok
// SIG undefined FUN_145177830(void)

void FUN_145177830(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 145177860 FUN_145177860 body=58 status=ok
// SIG undefined FUN_145177860(void)

longlong * FUN_145177860(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + -0x10);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 1451778a0 FUN_1451778a0 body=49 status=ok
// SIG undefined FUN_1451778a0(void)

int FUN_1451778a0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  (*(code *)**(undefined8 **)
              (*(longlong *)(param_1 + 0x10) + 8 +
              (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 4)))();
  LOCK();
  piVar1 = (int *)(param_1 + 0x60);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 1451778e0 FUN_1451778e0 body=77 status=ok
// SIG undefined FUN_1451778e0(void)

undefined8 FUN_1451778e0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  (**(code **)(*(longlong *)(param_1[2] + 8 + (longlong)*(int *)(*(longlong *)(param_1[2] + 8) + 4))
              + 8))();
  LOCK();
  plVar1 = param_1 + 0xc;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*param_1 + 0x20))(param_1,1);
    return 1;
  }
  return 0;
}



// FUNCTION 145177970 FUN_145177970 body=20 status=ok
// SIG undefined FUN_145177970(void)

undefined8 * FUN_145177970(undefined8 *param_1)

{
  *param_1 = 0;
  return param_1;
}



// FUNCTION 1451779b0 FUN_1451779b0 body=42 status=ok
// SIG undefined FUN_1451779b0(void)

undefined1 FUN_1451779b0(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 8))();
  return uVar1;
}



// FUNCTION 1451779e0 FUN_1451779e0 body=42 status=ok
// SIG undefined FUN_1451779e0(void)

undefined1 FUN_1451779e0(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x10))();
  return uVar1;
}



// FUNCTION 145177a10 FUN_145177a10 body=42 status=ok
// SIG undefined FUN_145177a10(void)

undefined1 FUN_145177a10(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x18))();
  return uVar1;
}



// FUNCTION 145177a40 FUN_145177a40 body=43 status=ok
// SIG undefined FUN_145177a40(void)

undefined8 * FUN_145177a40(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 145177a70 FUN_145177a70 body=129 status=ok
// SIG undefined FUN_145177a70(void)

undefined8 * FUN_145177a70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149c39c90;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 1) = DAT_14c73022c;
  param_1[3] = param_1;
  param_1[5] = &LAB_145177990;
  param_1[6] = FUN_1451779b0;
  param_1[7] = FUN_1451779e0;
  param_1[8] = FUN_145177a10;
  param_1[4] = 0x40;
  *param_1 = &PTR_FUN_149c39cb8;
  param_1[9] = FUN_145177bc0;
  param_1[10] = FUN_145177c40;
  param_1[0xb] = FUN_145177e10;
  return param_1;
}



// FUNCTION 145177b00 FUN_145177b00 body=43 status=ok
// SIG undefined FUN_145177b00(void)

undefined8 * FUN_145177b00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 145177b30 FUN_145177b30 body=135 status=ok
// SIG undefined FUN_145177b30(void)

undefined8 * FUN_145177b30(longlong *param_1)

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
      puVar2 = (undefined8 *)FUN_1453f1f90(lVar1);
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



// FUNCTION 145177bc0 FUN_145177bc0 body=127 status=ok
// SIG undefined FUN_145177bc0(void)

void FUN_145177bc0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 local_res8 [2];
  longlong local_res18 [2];
  
  local_res8[0] = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    puVar1 = (undefined8 *)FUN_145177860(local_res18,param_1,param_3,param_4,0xfffffffffffffffe);
    puVar1 = (undefined8 *)*puVar1;
    uVar2 = FUN_144d7a930(local_res8,param_2);
    (**(code **)*puVar1)(puVar1,uVar2);
    if (local_res18[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_res18[0] + 8 + (longlong)*(int *)(*(longlong *)(local_res18[0] + 8) + 4))
                  + 8))();
    }
  }
  return;
}



// FUNCTION 145177c40 FUN_145177c40 body=449 status=ok
// SIG undefined FUN_145177c40(void)

undefined1
FUN_145177c40(longlong param_1,longlong param_2,longlong param_3,int param_4,longlong param_5,
             longlong param_6,longlong param_7)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 local_res8 [2];
  longlong local_88 [2];
  undefined **local_78;
  longlong local_70;
  char local_68;
  undefined **local_60;
  longlong local_58;
  char local_50;
  undefined **local_48;
  longlong local_40;
  char local_38;
  
  local_88[1] = 0xfffffffffffffffe;
  local_res8[0] = 0;
  if ((((param_1 == 0) || (param_2 == 0)) || (param_6 == 0)) || (param_7 == 0)) {
    uVar2 = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_145177860(local_88,param_1);
    plVar1 = (longlong *)*puVar3;
    uVar4 = FUN_14516b080(local_res8,param_6);
    local_60 = &PTR_FUN_14ba6d600;
    local_58 = 0;
    if (param_5 != 0) {
      local_58 = param_5;
    }
    local_50 = '\0';
    local_78 = &PTR_FUN_14ba6d600;
    local_70 = 0;
    if (param_3 != 0) {
      local_70 = param_3;
    }
    local_68 = '\0';
    local_48 = &PTR_FUN_14ba6d600;
    local_38 = '\0';
    local_40 = param_2;
    uVar2 = (**(code **)(*plVar1 + 8))
                      (plVar1,&local_48,&local_78,param_4 != 0,&local_60,uVar4,param_7);
    local_48 = &PTR_FUN_14ba6d600;
    if (local_40 != 0) {
      if (local_38 != '\0') {
        cef_string_utf16_clear();
        thunk_FUN_1400020a8(local_40,0x18);
      }
      local_40 = 0;
      local_38 = '\0';
    }
    local_78 = &PTR_FUN_14ba6d600;
    if (local_70 != 0) {
      if (local_68 != '\0') {
        cef_string_utf16_clear();
        thunk_FUN_1400020a8(local_70,0x18);
      }
      local_70 = 0;
      local_68 = '\0';
    }
    local_60 = &PTR_FUN_14ba6d600;
    if (local_58 != 0) {
      if (local_50 != '\0') {
        cef_string_utf16_clear();
        thunk_FUN_1400020a8(local_58,0x18);
      }
      local_58 = 0;
      local_50 = '\0';
    }
    if (local_88[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_88[0] + 8 + (longlong)*(int *)(*(longlong *)(local_88[0] + 8) + 4)) + 8))
                ();
    }
  }
  return uVar2;
}



// FUNCTION 145177e10 FUN_145177e10 body=476 status=ok
// SIG undefined FUN_145177e10(void)

undefined8
FUN_145177e10(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,int param_5,
             int param_6,longlong param_7,uint *param_8)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint local_res8 [2];
  undefined1 *local_88;
  undefined **local_80;
  longlong local_78;
  char local_70;
  undefined1 *local_68;
  longlong local_60;
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (((param_1 == 0) || (param_4 == 0)) || (param_8 == (uint *)0x0)) {
    uVar3 = 0;
  }
  else {
    local_res8[0] = (uint)(*param_8 != 0);
    local_88 = local_58;
    local_40 = local_50;
    puVar2 = (undefined8 *)FUN_145177860(&local_60,param_1);
    plVar1 = (longlong *)*puVar2;
    local_80 = &PTR_FUN_14ba6d600;
    local_78 = 0;
    if (param_7 != 0) {
      local_78 = param_7;
    }
    local_70 = '\0';
    uVar3 = FUN_14516a920(local_58,param_4);
    uVar4 = FUN_14516a830(local_50,param_3);
    uVar5 = FUN_144d7a4e0(local_48,param_2);
    (**(code **)(*plVar1 + 0x10))
              (plVar1,&local_68,uVar5,uVar4,uVar3,param_5 != 0,param_6 != 0,&local_80,local_res8);
    local_80 = &PTR_FUN_14ba6d600;
    if (local_78 != 0) {
      if (local_70 != '\0') {
        cef_string_utf16_clear();
        thunk_FUN_1400020a8(local_78,0x18);
      }
      local_78 = 0;
      local_70 = '\0';
    }
    if (local_60 != 0) {
      (**(code **)(*(longlong *)(local_60 + 8 + (longlong)*(int *)(*(longlong *)(local_60 + 8) + 4))
                  + 8))();
    }
    *param_8 = (uint)((char)local_res8[0] != '\0');
    local_88 = local_68;
    if (local_68 != (undefined1 *)0x0) {
      (*(code *)**(undefined8 **)
                  (local_68 + (longlong)*(int *)(*(longlong *)(local_68 + 8) + 4) + 8))();
    }
    uVar3 = FUN_145177b30(&local_88);
    if (local_68 != (undefined1 *)0x0) {
      (**(code **)(*(longlong *)(local_68 + (longlong)*(int *)(*(longlong *)(local_68 + 8) + 4) + 8)
                  + 8))();
    }
  }
  return uVar3;
}



// FUNCTION 145177ff0 FUN_145177ff0 body=58 status=ok
// SIG undefined FUN_145177ff0(void)

longlong * FUN_145177ff0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + -0x10);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 145178030 FUN_145178030 body=49 status=ok
// SIG undefined FUN_145178030(void)

int FUN_145178030(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  (*(code *)**(undefined8 **)
              (*(longlong *)(param_1 + 0x10) + 8 +
              (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 4)))();
  LOCK();
  piVar1 = (int *)(param_1 + 0x50);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 145178070 FUN_145178070 body=77 status=ok
// SIG undefined FUN_145178070(void)

undefined8 FUN_145178070(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  (**(code **)(*(longlong *)(param_1[2] + 8 + (longlong)*(int *)(*(longlong *)(param_1[2] + 8) + 4))
              + 8))();
  LOCK();
  plVar1 = param_1 + 10;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*param_1 + 0x20))(param_1,1);
    return 1;
  }
  return 0;
}



// FUNCTION 145178120 FUN_145178120 body=42 status=ok
// SIG undefined FUN_145178120(void)

undefined1 FUN_145178120(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 8))();
  return uVar1;
}



// FUNCTION 145178150 FUN_145178150 body=42 status=ok
// SIG undefined FUN_145178150(void)

undefined1 FUN_145178150(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x10))();
  return uVar1;
}



// FUNCTION 145178180 FUN_145178180 body=42 status=ok
// SIG undefined FUN_145178180(void)

undefined1 FUN_145178180(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x18))();
  return uVar1;
}



// FUNCTION 1451781b0 FUN_1451781b0 body=43 status=ok
// SIG undefined FUN_1451781b0(void)

undefined8 * FUN_1451781b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1451781e0 FUN_1451781e0 body=107 status=ok
// SIG undefined FUN_1451781e0(void)

undefined8 * FUN_1451781e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149c39da8;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 1) = DAT_14c730230;
  param_1[3] = param_1;
  param_1[5] = &LAB_145178100;
  param_1[6] = FUN_145178120;
  param_1[7] = FUN_145178150;
  param_1[8] = FUN_145178180;
  param_1[4] = 0x30;
  *param_1 = &PTR_FUN_149c39dd0;
  param_1[9] = FUN_1451782b0;
  return param_1;
}



// FUNCTION 145178250 FUN_145178250 body=84 status=ok
// SIG undefined FUN_145178250(void)

undefined8 *
FUN_145178250(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &PTR_FUN_149c39dd0;
  FUN_14516fec0();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58,param_3,param_4,uVar1);
  }
  return param_1;
}



// FUNCTION 1451782b0 FUN_1451782b0 body=264 status=ok
// SIG undefined FUN_1451782b0(void)

void FUN_1451782b0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined8 uVar4;
  undefined8 *local_20;
  undefined8 *puStack_18;
  longlong local_10;
  
  uVar4 = 0xfffffffffffffffe;
  local_res8 = 0;
  FUN_14516fec0();
  if (param_1 != 0) {
    local_20 = (undefined8 *)0x0;
    puStack_18 = (undefined8 *)0x0;
    local_10 = 0;
    FUN_14516e770(param_3,&local_20);
    puVar3 = (undefined8 *)FUN_145177ff0(&local_res8,param_1);
    (*(code *)**(undefined8 **)*puVar3)((undefined8 *)*puVar3,param_2,&local_20,param_4,uVar4);
    lVar1 = CONCAT44(uStackX_c,local_res8);
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
    puVar2 = puStack_18;
    puVar3 = local_20;
    if (local_20 != (undefined8 *)0x0) {
      for (; puVar3 != puVar2; puVar3 = puVar3 + 3) {
        (**(code **)*puVar3)(puVar3,0);
      }
      FUN_14516eec0(&local_20,local_20,(local_10 - (longlong)local_20) / 0x18);
    }
  }
  return;
}



// FUNCTION 1451783c0 FUN_1451783c0 body=48 status=ok
// SIG undefined FUN_1451783c0(void)

longlong FUN_1451783c0(longlong param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x10,0x18);
    return param_1 + -0x10;
  }
  return param_1 + -0x10;
}



// FUNCTION 1451783f0 FUN_1451783f0 body=40 status=ok
// SIG undefined FUN_1451783f0(void)

int FUN_1451783f0(longlong param_1)

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



// FUNCTION 145178420 FUN_145178420 body=105 status=ok
// SIG undefined FUN_145178420(void)

undefined8 FUN_145178420(undefined8 *param_1)

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
      FUN_145178600(param_1);
      *param_1 = &PTR__purecall_14ba6c6b0;
      thunk_FUN_1400020a8(param_1 + -6,0x38);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 145178490 FUN_145178490 body=34 status=ok
// SIG undefined FUN_145178490(void)

bool FUN_145178490(longlong param_1)

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



// FUNCTION 1451784c0 FUN_1451784c0 body=38 status=ok
// SIG undefined FUN_1451784c0(void)

bool FUN_1451784c0(longlong param_1)

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



// FUNCTION 1451784f0 FUN_1451784f0 body=85 status=ok
// SIG undefined FUN_1451784f0(void)

longlong FUN_1451784f0(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149c39e98;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149c39ec0;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x20,0x28);
  }
  return param_1 + -0x20;
}



// FUNCTION 145178550 FUN_145178550 body=167 status=ok
// SIG undefined FUN_145178550(void)

undefined8 * FUN_145178550(undefined8 *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &DAT_149c39f38;
    param_1[4] = &PTR__purecall_14ba6c6b0;
  }
  *param_1 = &PTR__purecall_149c39e48;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) =
       &PTR__purecall_149c39e70;
  *param_1 = &PTR__purecall_149c39e98;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149c39ec0;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_149c39ee8;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149c39f10;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  return param_1;
}



// FUNCTION 145178600 FUN_145178600 body=124 status=ok
// SIG undefined FUN_145178600(void)

void FUN_145178600(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR_FUN_149c39ee8;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149c39f10;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  FUN_14516fec0();
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149c39e98;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149c39ec0;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  return;
}



// FUNCTION 145178680 FUN_145178680 body=271 status=ok
// SIG undefined FUN_145178680(void)

undefined8 * FUN_145178680(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_res8;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0x30) || (puVar1[5] == 0)) {
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
      uVar3 = FUN_145178a50(&local_res8);
      uVar3 = (*(code *)puVar1[5])(puVar1,uVar3);
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



// FUNCTION 145178790 FUN_145178790 body=130 status=ok
// SIG undefined FUN_145178790(void)

undefined8 * FUN_145178790(longlong param_1,undefined8 *param_2,longlong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  FUN_14516fec0();
  if ((((0x37 < **(ulonglong **)(param_1 + -8)) &&
       (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[6], pcVar1 != (code *)0x0)) &&
      (*(longlong *)(param_3 + 8) != 0)) && (*(longlong *)(*(longlong *)(param_3 + 8) + 8) != 0)) {
    uVar2 = (*pcVar1)();
    FUN_145178c10(param_2,uVar2);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 145178820 FUN_145178820 body=47 status=ok
// SIG undefined FUN_145178820(void)

void FUN_145178820(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_14516fec0();
  if ((0x3f < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[7],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145178846. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// FUNCTION 145178850 FUN_145178850 body=389 status=ok
// SIG undefined FUN_145178850(void)

void FUN_145178850(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_res8 [2];
  longlong *local_res10;
  longlong *local_res18;
  longlong *local_res20;
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_res8[0] = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0x48) || (puVar1[8] == 0)) {
    lVar2 = *param_2;
    if (lVar2 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))
                ();
    }
    lVar2 = *param_3;
    if (lVar2 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))
                ();
    }
    lVar2 = *param_4;
    if (lVar2 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))
                ();
    }
  }
  else if (*param_2 == 0) {
    lVar2 = *param_3;
    if (lVar2 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))
                ();
    }
    lVar2 = *param_4;
    if (lVar2 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))
                ();
    }
  }
  else {
    if ((*param_3 != 0) && (*param_4 != 0)) {
      uVar3 = FUN_145178eb0(local_res8,param_4);
      uVar3 = FUN_145178ae0(uVar3);
      uVar4 = FUN_145178e40(local_58,param_3);
      uVar4 = FUN_145178b70(uVar4);
      uVar5 = FUN_145178dd0(local_50,param_2);
      uVar5 = FUN_145178d00(uVar5);
      (*(code *)puVar1[8])(puVar1,uVar5,uVar4,uVar3);
    }
    FUN_145178e10(param_2);
    FUN_145178e80(param_3);
    FUN_145178ef0(param_4);
  }
  return;
}



// FUNCTION 1451789e0 FUN_1451789e0 body=47 status=ok
// SIG undefined FUN_1451789e0(void)

void FUN_1451789e0(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_14516fec0();
  if ((0x4f < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[9],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145178a06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// FUNCTION 145178a10 FUN_145178a10 body=64 status=ok
// SIG undefined FUN_145178a10(void)

undefined8 * FUN_145178a10(undefined8 *param_1,ulonglong param_2)

{
  FUN_145178600();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -4,0x28);
  }
  return param_1 + -4;
}



// FUNCTION 145178a50 FUN_145178a50 body=135 status=ok
// SIG undefined FUN_145178a50(void)

undefined8 * FUN_145178a50(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*param_1 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar1 = FUN_14494321d(0x70);
    if (lVar1 == 0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2 = (undefined8 *)FUN_1453f2db0(lVar1);
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



// FUNCTION 145178ae0 FUN_145178ae0 body=135 status=ok
// SIG undefined FUN_145178ae0(void)

undefined8 * FUN_145178ae0(longlong *param_1)

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
      puVar2 = (undefined8 *)FUN_1453f3fd0(lVar1);
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



// FUNCTION 145178b70 FUN_145178b70 body=156 status=ok
// SIG undefined FUN_145178b70(void)

undefined8 FUN_145178b70(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else if (*(int *)(lVar1 + -0x10) == DAT_14c7441e4) {
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
    uVar3 = FUN_1453f42e0(*(int *)(lVar1 + -0x10),lVar1,param_3,param_4,0xfffffffffffffffe);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
  }
  return uVar3;
}



// FUNCTION 145178c10 FUN_145178c10 body=230 status=ok
// SIG undefined FUN_145178c10(void)

longlong * FUN_145178c10(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

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
      FUN_1453f4c70(puVar2 + 4,1,param_3,param_4,uVar3,uVar4);
    }
    *puVar2 = DAT_14c7441e8;
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



// FUNCTION 145178d00 FUN_145178d00 body=156 status=ok
// SIG undefined FUN_145178d00(void)

undefined8 FUN_145178d00(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else if (*(int *)(lVar1 + -0x10) == DAT_14c7441e8) {
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
    uVar3 = FUN_1453f4c00(*(int *)(lVar1 + -0x10),lVar1,param_3,param_4,0xfffffffffffffffe);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
  }
  return uVar3;
}



// FUNCTION 145178da0 FUN_145178da0 body=48 status=ok
// SIG undefined FUN_145178da0(void)

void FUN_145178da0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 145178dd0 FUN_145178dd0 body=49 status=ok
// SIG undefined FUN_145178dd0(void)

longlong * FUN_145178dd0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 145178e10 FUN_145178e10 body=48 status=ok
// SIG undefined FUN_145178e10(void)

void FUN_145178e10(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 145178e40 FUN_145178e40 body=49 status=ok
// SIG undefined FUN_145178e40(void)

longlong * FUN_145178e40(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 145178e80 FUN_145178e80 body=48 status=ok
// SIG undefined FUN_145178e80(void)

void FUN_145178e80(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 145178eb0 FUN_145178eb0 body=49 status=ok
// SIG undefined FUN_145178eb0(void)

longlong * FUN_145178eb0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 145178ef0 FUN_145178ef0 body=48 status=ok
// SIG undefined FUN_145178ef0(void)

void FUN_145178ef0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 145178f70 FUN_145178f70 body=239 status=ok
// SIG undefined FUN_145178f70(void)

void FUN_145178f70(undefined8 *param_1,longlong param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  cef_string_utf16_set(*param_1,param_1[1],param_2,param_3);
  cef_string_utf16_set(param_1[3],param_1[4],param_2 + 0x18,param_3);
  cef_string_utf16_set(param_1[6],param_1[7],param_2 + 0x30,param_3);
  cef_string_utf16_set(param_1[9],param_1[10],param_2 + 0x48,param_3);
  *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_2 + 100) = *(undefined4 *)((longlong)param_1 + 100);
  uVar1 = param_1[0xe];
  *(undefined8 *)(param_2 + 0x68) = param_1[0xd];
  *(undefined8 *)(param_2 + 0x70) = uVar1;
  uVar1 = param_1[0x10];
  *(undefined8 *)(param_2 + 0x78) = param_1[0xf];
  *(undefined8 *)(param_2 + 0x80) = uVar1;
  uVar1 = param_1[0x12];
  *(undefined8 *)(param_2 + 0x88) = param_1[0x11];
  *(undefined8 *)(param_2 + 0x90) = uVar1;
  uVar1 = param_1[0x14];
  *(undefined8 *)(param_2 + 0x98) = param_1[0x13];
  *(undefined8 *)(param_2 + 0xa0) = uVar1;
  *(undefined4 *)(param_2 + 0xa8) = *(undefined4 *)(param_1 + 0x15);
  uVar1 = *(undefined8 *)((longlong)param_1 + 0xb4);
  *(undefined8 *)(param_2 + 0xac) = *(undefined8 *)((longlong)param_1 + 0xac);
  *(undefined8 *)(param_2 + 0xb4) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_1 + 0xc4);
  *(undefined8 *)(param_2 + 0xbc) = *(undefined8 *)((longlong)param_1 + 0xbc);
  *(undefined8 *)(param_2 + 0xc4) = uVar1;
  *(undefined4 *)(param_2 + 0xcc) = *(undefined4 *)((longlong)param_1 + 0xcc);
  *(undefined4 *)(param_2 + 0xd0) = *(undefined4 *)(param_1 + 0x1a);
  return;
}



// FUNCTION 145179060 FUN_145179060 body=58 status=ok
// SIG undefined FUN_145179060(void)

longlong * FUN_145179060(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + -0x10);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 1451790a0 FUN_1451790a0 body=49 status=ok
// SIG undefined FUN_1451790a0(void)

int FUN_1451790a0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  (*(code *)**(undefined8 **)
              (*(longlong *)(param_1 + 0x10) + 8 +
              (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 4)))();
  LOCK();
  piVar1 = (int *)(param_1 + 0x50);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 1451790e0 FUN_1451790e0 body=77 status=ok
// SIG undefined FUN_1451790e0(void)

undefined8 FUN_1451790e0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  (**(code **)(*(longlong *)(param_1[2] + 8 + (longlong)*(int *)(*(longlong *)(param_1[2] + 8) + 4))
              + 8))();
  LOCK();
  plVar1 = param_1 + 10;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*param_1 + 0x20))(param_1,1);
    return 1;
  }
  return 0;
}



// FUNCTION 145179190 FUN_145179190 body=42 status=ok
// SIG undefined FUN_145179190(void)

undefined1 FUN_145179190(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 8))();
  return uVar1;
}



// FUNCTION 1451791c0 FUN_1451791c0 body=42 status=ok
// SIG undefined FUN_1451791c0(void)

undefined1 FUN_1451791c0(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x10))();
  return uVar1;
}



// FUNCTION 1451791f0 FUN_1451791f0 body=42 status=ok
// SIG undefined FUN_1451791f0(void)

undefined1 FUN_1451791f0(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x18))();
  return uVar1;
}



// FUNCTION 145179220 FUN_145179220 body=43 status=ok
// SIG undefined FUN_145179220(void)

undefined8 * FUN_145179220(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 145179250 FUN_145179250 body=107 status=ok
// SIG undefined FUN_145179250(void)

undefined8 * FUN_145179250(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149c3a120;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 1) = DAT_14c730238;
  param_1[3] = param_1;
  param_1[5] = &LAB_145179170;
  param_1[6] = FUN_145179190;
  param_1[7] = FUN_1451791c0;
  param_1[8] = FUN_1451791f0;
  param_1[4] = 0x30;
  *param_1 = &PTR_FUN_149c3a148;
  param_1[9] = FUN_145179320;
  return param_1;
}



// FUNCTION 1451792c0 FUN_1451792c0 body=84 status=ok
// SIG undefined FUN_1451792c0(void)

undefined8 *
FUN_1451792c0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &PTR_FUN_149c3a148;
  FUN_14516fec0();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58,param_3,param_4,uVar1);
  }
  return param_1;
}



// FUNCTION 145179320 FUN_145179320 body=332 status=ok
// SIG undefined FUN_145179320(void)

void FUN_145179320(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  uint *param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_188 [32];
  char *local_168;
  char local_158 [8];
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined **local_138;
  undefined1 local_130 [24];
  undefined1 local_118 [24];
  undefined1 local_100 [24];
  undefined1 local_e8 [144];
  longlong local_58;
  ulonglong local_48;
  
  local_148 = 0xfffffffffffffffe;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_150 = 0;
  FUN_14516fec0();
  if (((param_1 != 0) && (param_2 != 0)) && (param_5 != (uint *)0x0)) {
    local_138 = &PTR_FUN_14ba6c7d8;
    memset(local_130,0,0xd8);
    local_58 = 0;
    FUN_145178f70(param_2,local_130,0);
    local_158[0] = *param_5 != 0;
    puVar2 = (undefined8 *)FUN_145179060(&local_150,param_1);
    local_168 = local_158;
    (*(code *)**(undefined8 **)*puVar2)((undefined8 *)*puVar2,&local_138,param_3,param_4);
    lVar1 = CONCAT44(uStack_14c,local_150);
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
    *param_5 = (uint)(local_158[0] != '\0');
    local_138 = &PTR_FUN_14ba6c7d8;
    if (local_58 == 0) {
      cef_string_utf16_clear(local_130);
      cef_string_utf16_clear(local_118);
      cef_string_utf16_clear(local_100);
      cef_string_utf16_clear(local_e8);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_188);
}



// FUNCTION 145179480 FUN_145179480 body=58 status=ok
// SIG undefined FUN_145179480(void)

longlong * FUN_145179480(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + -0x10);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 1451794c0 FUN_1451794c0 body=49 status=ok
// SIG undefined FUN_1451794c0(void)

int FUN_1451794c0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  (*(code *)**(undefined8 **)
              (*(longlong *)(param_1 + 0x10) + 8 +
              (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 4)))();
  LOCK();
  piVar1 = (int *)(param_1 + 0x50);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 145179500 FUN_145179500 body=77 status=ok
// SIG undefined FUN_145179500(void)

undefined8 FUN_145179500(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  (**(code **)(*(longlong *)(param_1[2] + 8 + (longlong)*(int *)(*(longlong *)(param_1[2] + 8) + 4))
              + 8))();
  LOCK();
  plVar1 = param_1 + 10;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*param_1 + 0x20))(param_1,1);
    return 1;
  }
  return 0;
}



// FUNCTION 1451795b0 FUN_1451795b0 body=42 status=ok
// SIG undefined FUN_1451795b0(void)

undefined1 FUN_1451795b0(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 8))();
  return uVar1;
}



// FUNCTION 1451795e0 FUN_1451795e0 body=42 status=ok
// SIG undefined FUN_1451795e0(void)

undefined1 FUN_1451795e0(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x10))();
  return uVar1;
}



// FUNCTION 145179610 FUN_145179610 body=42 status=ok
// SIG undefined FUN_145179610(void)

undefined1 FUN_145179610(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x18))();
  return uVar1;
}



// FUNCTION 145179640 FUN_145179640 body=43 status=ok
// SIG undefined FUN_145179640(void)

undefined8 * FUN_145179640(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 145179670 FUN_145179670 body=107 status=ok
// SIG undefined FUN_145179670(void)

undefined8 * FUN_145179670(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149c3a1c0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 1) = DAT_14c73023c;
  param_1[3] = param_1;
  param_1[5] = &LAB_145179590;
  param_1[6] = FUN_1451795b0;
  param_1[7] = FUN_1451795e0;
  param_1[8] = FUN_145179610;
  param_1[4] = 0x30;
  *param_1 = &PTR_FUN_149c3a1e8;
  param_1[9] = FUN_145179740;
  return param_1;
}



// FUNCTION 1451796e0 FUN_1451796e0 body=84 status=ok
// SIG undefined FUN_1451796e0(void)

undefined8 *
FUN_1451796e0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &PTR_FUN_149c3a1e8;
  FUN_14516fec0();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58,param_3,param_4,uVar1);
  }
  return param_1;
}



// FUNCTION 145179740 FUN_145179740 body=111 status=ok
// SIG undefined FUN_145179740(void)

void FUN_145179740(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  local_res8 = 0;
  FUN_14516fec0();
  if (param_1 != 0) {
    puVar2 = (undefined8 *)FUN_145179480(&local_res8,param_1,param_3,param_4,uVar3);
    (*(code *)**(undefined8 **)*puVar2)((undefined8 *)*puVar2,param_2);
    lVar1 = CONCAT44(uStackX_c,local_res8);
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 1451797b0 FUN_1451797b0 body=58 status=ok
// SIG undefined FUN_1451797b0(void)

longlong * FUN_1451797b0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + -0x10);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 1451797f0 FUN_1451797f0 body=49 status=ok
// SIG undefined FUN_1451797f0(void)

int FUN_1451797f0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  (*(code *)**(undefined8 **)
              (*(longlong *)(param_1 + 0x10) + 8 +
              (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 4)))();
  LOCK();
  piVar1 = (int *)(param_1 + 0x50);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 145179830 FUN_145179830 body=77 status=ok
// SIG undefined FUN_145179830(void)

undefined8 FUN_145179830(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  (**(code **)(*(longlong *)(param_1[2] + 8 + (longlong)*(int *)(*(longlong *)(param_1[2] + 8) + 4))
              + 8))();
  LOCK();
  plVar1 = param_1 + 10;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*param_1 + 0x20))(param_1,1);
    return 1;
  }
  return 0;
}



// FUNCTION 1451798e0 FUN_1451798e0 body=42 status=ok
// SIG undefined FUN_1451798e0(void)

undefined1 FUN_1451798e0(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 8))();
  return uVar1;
}



// FUNCTION 145179910 FUN_145179910 body=42 status=ok
// SIG undefined FUN_145179910(void)

undefined1 FUN_145179910(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x10))();
  return uVar1;
}



// FUNCTION 145179940 FUN_145179940 body=42 status=ok
// SIG undefined FUN_145179940(void)

undefined1 FUN_145179940(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x18))();
  return uVar1;
}



// FUNCTION 145179970 FUN_145179970 body=43 status=ok
// SIG undefined FUN_145179970(void)

undefined8 * FUN_145179970(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1451799a0 FUN_1451799a0 body=107 status=ok
// SIG undefined FUN_1451799a0(void)

undefined8 * FUN_1451799a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149c3a260;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 1) = DAT_14c730240;
  param_1[3] = param_1;
  param_1[5] = &LAB_1451798c0;
  param_1[6] = FUN_1451798e0;
  param_1[7] = FUN_145179910;
  param_1[8] = FUN_145179940;
  param_1[4] = 0x30;
  *param_1 = &PTR_FUN_149c3a288;
  param_1[9] = FUN_145179a70;
  return param_1;
}



// FUNCTION 145179a10 FUN_145179a10 body=84 status=ok
// SIG undefined FUN_145179a10(void)

undefined8 *
FUN_145179a10(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &PTR_FUN_149c3a288;
  FUN_14516fec0();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58,param_3,param_4,uVar1);
  }
  return param_1;
}



// FUNCTION 145179a70 FUN_145179a70 body=114 status=ok
// SIG undefined FUN_145179a70(void)

void FUN_145179a70(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  local_res8 = 0;
  FUN_14516fec0();
  if (param_1 != 0) {
    puVar2 = (undefined8 *)FUN_1451797b0(&local_res8,param_1,param_3,param_4,uVar3);
    (*(code *)**(undefined8 **)*puVar2)((undefined8 *)*puVar2,param_2 != 0);
    lVar1 = CONCAT44(uStackX_c,local_res8);
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 145179af0 FUN_145179af0 body=122 status=ok
// SIG undefined FUN_145179af0(void)

int FUN_145179af0(longlong *param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  char *_Str;
  undefined1 local_28 [16];
  longlong local_18;
  
  FUN_145179ba0(param_1,local_28,param_2);
  if (((*(char *)(local_18 + 0x19) == '\0') &&
      (cVar1 = FUN_144b66550(param_1,param_2,local_18 + 0x20), cVar1 == '\0')) &&
     (local_18 != *param_1)) {
    _Str = (char *)(local_18 + 0x40);
    if (0xf < *(ulonglong *)(local_18 + 0x58)) {
      _Str = *(char **)_Str;
    }
    param_3 = atoi(_Str);
  }
  return param_3;
}



// FUNCTION 145179b70 FUN_145179b70 body=46 status=ok
// SIG undefined FUN_145179b70(void)

undefined1 FUN_145179b70(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  
  iVar1 = FUN_145179af0(param_1,param_2,0xffffffff);
  if (iVar1 == -1) {
    return param_3;
  }
  return iVar1 != 0;
}



// FUNCTION 145179ba0 FUN_145179ba0 body=181 status=ok
// SIG undefined FUN_145179ba0(void)

longlong * FUN_145179ba0(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  undefined8 *puVar7;
  ulonglong _Size;
  
  lVar1 = *param_1;
  *(undefined4 *)(param_2 + 1) = 0;
  param_2[2] = lVar1;
  puVar7 = *(undefined8 **)(lVar1 + 8);
  *param_2 = (longlong)puVar7;
  if (*(char *)((longlong)puVar7 + 0x19) == '\0') {
    uVar2 = param_3[2];
    uVar3 = param_3[3];
    do {
      *param_2 = (longlong)puVar7;
      _Buf2 = param_3;
      if (0xf < uVar3) {
        _Buf2 = (undefined8 *)*param_3;
      }
      _Buf1 = puVar7 + 4;
      if (0xf < (ulonglong)puVar7[7]) {
        _Buf1 = (undefined8 *)puVar7[4];
      }
      uVar4 = puVar7[6];
      _Size = uVar4;
      if (uVar2 < uVar4) {
        _Size = uVar2;
      }
      iVar5 = memcmp(_Buf1,_Buf2,_Size);
      if (iVar5 == 0) {
        if (uVar2 <= uVar4) goto LAB_145179c18;
LAB_145179c4d:
        puVar7 = (undefined8 *)puVar7[2];
        uVar6 = 0;
      }
      else {
        if (iVar5 < 0) goto LAB_145179c4d;
LAB_145179c18:
        param_2[2] = (longlong)puVar7;
        uVar6 = 1;
        puVar7 = (undefined8 *)*puVar7;
      }
      *(undefined4 *)(param_2 + 1) = uVar6;
    } while (*(char *)((longlong)puVar7 + 0x19) == '\0');
  }
  return param_2;
}



// FUNCTION 145179c60 FUN_145179c60 body=77 status=ok
// SIG undefined FUN_145179c60(void)

undefined8 * FUN_145179c60(undefined8 *param_1)

{
  FUN_144d7e190();
  *param_1 = draco::Mesh::vftable;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  return param_1;
}



// FUNCTION 145179cb0 FUN_145179cb0 body=197 status=ok
// SIG undefined FUN_145179cb0(void)

void FUN_145179cb0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  longlong local_res8;
  undefined1 local_res10 [8];
  longlong *local_res18;
  
  local_res8 = *param_3;
  *param_3 = 0;
  local_res18 = param_3;
  FUN_144d7e340(param_1,param_2,&local_res8);
  puVar6 = *(undefined4 **)(param_1 + 0xb0);
  lVar2 = *(longlong *)(param_1 + 0xa8);
  uVar1 = (longlong)puVar6 - lVar2 >> 2;
  if ((int)uVar1 <= (int)param_2) {
    uVar3 = (ulonglong)((int)param_2 + 1);
    if (uVar3 < uVar1) {
      *(ulonglong *)(param_1 + 0xb0) = lVar2 + uVar3 * 4;
    }
    else if (uVar1 < uVar3) {
      if ((ulonglong)(*(longlong *)(param_1 + 0xb8) - lVar2 >> 2) < uVar3) {
        FUN_14517a050((longlong *)(param_1 + 0xa8),uVar3,local_res10);
      }
      else {
        lVar4 = uVar3 - uVar1;
        lVar2 = lVar4;
        puVar5 = puVar6;
        if (lVar4 != 0) {
          for (; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar5 = 1;
            puVar5 = puVar5 + 1;
          }
          puVar6 = puVar6 + lVar4;
        }
        *(undefined4 **)(param_1 + 0xb0) = puVar6;
      }
    }
  }
  lVar2 = *param_3;
  if (lVar2 == 0) {
    return;
  }
  FUN_144d7df00(lVar2);
  thunk_FUN_1400020a8(lVar2,0x70);
  return;
}



// FUNCTION 145179d80 FUN_145179d80 body=95 status=ok
// SIG undefined FUN_145179d80(void)

void FUN_145179d80(longlong param_1,int param_2)

{
  void *_Src;
  void *_Dst;
  
  FUN_144d7e4c0(param_1,param_2);
  if ((-1 < param_2) &&
     (param_2 < (int)(*(longlong *)(param_1 + 0xb0) - *(longlong *)(param_1 + 0xa8) >> 2))) {
    _Dst = (void *)(*(longlong *)(param_1 + 0xa8) + (longlong)param_2 * 4);
    _Src = (void *)((longlong)_Dst + 4);
    memmove(_Dst,_Src,*(longlong *)(param_1 + 0xb0) - (longlong)_Src);
    *(longlong *)(param_1 + 0xb0) = *(longlong *)(param_1 + 0xb0) + -4;
  }
  return;
}



// FUNCTION 145179de0 FUN_145179de0 body=203 status=ok
// SIG undefined FUN_145179de0(void)

void FUN_145179de0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  FUN_144d7ec70();
  lVar5 = *(longlong *)(param_1 + 0xc0);
  lVar2 = *(longlong *)(param_1 + 200) - lVar5;
  uVar4 = 0;
  iVar1 = (int)(lVar2 >> 0x3f);
  if ((int)(lVar2 / 0xc) + iVar1 != iVar1) {
    do {
      uVar3 = (int)uVar4 + 1;
      *(undefined4 *)(lVar5 + uVar4 * 0xc) =
           *(undefined4 *)(*param_2 + (ulonglong)*(uint *)(lVar5 + uVar4 * 0xc) * 4);
      *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + uVar4 * 0xc + 4) =
           *(undefined4 *)
            (*param_2 + (ulonglong)*(uint *)(*(longlong *)(param_1 + 0xc0) + 4 + uVar4 * 0xc) * 4);
      *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + uVar4 * 0xc + 8) =
           *(undefined4 *)
            (*param_2 + (ulonglong)*(uint *)(*(longlong *)(param_1 + 0xc0) + 8 + uVar4 * 0xc) * 4);
      lVar5 = *(longlong *)(param_1 + 0xc0);
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < (uint)((*(longlong *)(param_1 + 200) - lVar5) / 0xc));
  }
  return;
}



// FUNCTION 145179eb0 deallocate body=66 status=ok
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



// FUNCTION 145179f00 FUN_145179f00 body=16 status=ok
// SIG undefined FUN_145179f00(void)

void FUN_145179f00(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 145179f20 FUN_145179f20 body=121 status=ok
// SIG undefined FUN_145179f20(void)

void FUN_145179f20(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = ((param_1[2] - lVar1) / 0xc) * 0xc;
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



// FUNCTION 145179fa0 FUN_145179fa0 body=161 status=ok
// SIG undefined FUN_145179fa0(void)

longlong FUN_145179fa0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  FUN_145179f20(param_1 + 0xc0);
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    uVar3 = *(longlong *)(param_1 + 0xb8) - lVar1 & 0xfffffffffffffffc;
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
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  FUN_144d7e200(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 14517a050 FUN_14517a050 body=365 status=ok
// SIG undefined FUN_14517a050(void)

void FUN_14517a050(longlong *param_1,ulonglong param_2)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  void *_Dst;
  ulonglong uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  
  if (0x3fffffffffffffff < param_2) {
    FUN_145179f00();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  lVar6 = param_1[1] - *param_1 >> 2;
  uVar3 = param_1[2] - *param_1 >> 2;
  if ((0x3fffffffffffffff - (uVar3 >> 1) < uVar3) ||
     ((uVar3 = (uVar3 >> 1) + uVar3, uVar4 = param_2, param_2 <= uVar3 &&
      (uVar4 = uVar3, 0x3fffffffffffffff < uVar3)))) {
LAB_14517a1b3:
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
    if (uVar4 + 0x27 <= uVar4) goto LAB_14517a1b3;
    lVar2 = FUN_14494321d();
    if (lVar2 == 0) goto LAB_14517a1ac;
    _Dst = (void *)(lVar2 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)_Dst - 8) = lVar2;
  }
  puVar5 = (undefined4 *)((longlong)_Dst + lVar6 * 4);
  lVar6 = param_2 - lVar6;
  if (lVar6 != 0) {
    for (; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar5 = 1;
      puVar5 = puVar5 + 1;
    }
  }
  memmove(_Dst,(void *)*param_1,param_1[1] - *param_1);
  lVar6 = *param_1;
  if (lVar6 != 0) {
    uVar3 = param_1[2] - lVar6 & 0xfffffffffffffffc;
    lVar2 = lVar6;
    if (0xfff < uVar3) {
      uVar3 = uVar3 + 0x27;
      lVar2 = *(longlong *)(lVar6 + -8);
      if (0x1f < (lVar6 - lVar2) - 8U) {
LAB_14517a1ac:
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



// FUNCTION 14517a1c0 FUN_14517a1c0 body=42 status=ok
// SIG undefined FUN_14517a1c0(void)

void FUN_14517a1c0(longlong *param_1)

{
  FUN_144d80090(param_1,param_1,*(undefined8 *)(*param_1 + 8));
  thunk_FUN_1400020a8(*param_1,0x58);
  return;
}



// FUNCTION 14517a1f0 FUN_14517a1f0 body=56 status=ok
// SIG undefined FUN_14517a1f0(void)

undefined8 * FUN_14517a1f0(undefined8 *param_1)

{
  *param_1 = draco::PointCloudDecoder::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  return param_1;
}



// FUNCTION 14517a230 FUN_14517a230 body=2720 status=ok
// SIG undefined FUN_14517a230(void)

void FUN_14517a230(char *param_1,longlong *param_2,int *param_3)

{
  undefined8 uVar1;
  char *_Dst;
  ulonglong uVar2;
  void *pvVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int *piVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_b8 [32];
  char *local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined2 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = 0x742064656c696146;
  uStack_60 = 0x206573726170206f;
  local_58 = 0x63617244;
  local_54 = 0x6568206f;
  local_50 = 0x72656461;
  local_4c = 0x2e;
  local_98 = param_1;
  if (param_2[1] < param_2[2] + 5) {
    local_88 = (char *)0x0;
    uStack_80 = 0;
    local_78 = 0;
    local_70 = 0;
    uVar8 = 0xffffffffffffffff;
    do {
      uVar10 = uVar8;
      uVar8 = uVar10 + 1;
    } while (*(char *)((longlong)&local_68 + uVar10 + 1) != '\0');
    if (0x7fffffffffffffff < uVar8) goto LAB_14517accf;
    if (uVar8 < 0x10) {
      local_70 = 0xf;
      local_78 = uVar8;
      memcpy(&local_88,&local_68,uVar8);
      *(undefined1 *)((longlong)&local_88 + uVar10 + 1) = 0;
      uVar8 = local_78;
      _Dst = local_88;
      uVar10 = local_70;
    }
    else {
      uVar10 = uVar8 | 0xf;
      if (uVar10 < 0x8000000000000000) {
        if (uVar10 < 0x16) {
          uVar10 = 0x16;
        }
      }
      else {
        uVar10 = 0x7fffffffffffffff;
      }
      _Dst = (char *)FUN_144b659f0(&local_88,uVar10 + 1);
      local_88 = _Dst;
      local_78 = uVar8;
      local_70 = uVar10;
      memcpy(_Dst,&local_68,uVar8);
      _Dst[uVar8] = '\0';
    }
    param_1[0] = -2;
    param_1[1] = -1;
    param_1[2] = -1;
    param_1[3] = -1;
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    param_1[0x10] = '\0';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
    param_1[0x18] = '\0';
    param_1[0x19] = '\0';
    param_1[0x1a] = '\0';
    param_1[0x1b] = '\0';
    param_1[0x1c] = '\0';
    param_1[0x1d] = '\0';
    param_1[0x1e] = '\0';
    param_1[0x1f] = '\0';
    param_1[0x20] = '\0';
    param_1[0x21] = '\0';
    param_1[0x22] = '\0';
    param_1[0x23] = '\0';
    param_1[0x24] = '\0';
    param_1[0x25] = '\0';
    param_1[0x26] = '\0';
    param_1[0x27] = '\0';
    local_98 = (char *)&local_88;
    if (0xf < uVar10) {
      local_98 = _Dst;
    }
    if (0x7fffffffffffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_146eb22ad();
    }
    param_1[0x20] = '\x0f';
    param_1[0x21] = '\0';
    param_1[0x22] = '\0';
    param_1[0x23] = '\0';
    param_1[0x24] = '\0';
    param_1[0x25] = '\0';
    param_1[0x26] = '\0';
    param_1[0x27] = '\0';
    if (uVar8 < 0x10) {
      *(ulonglong *)(param_1 + 0x18) = uVar8;
      memmove(param_1 + 8,local_98,0x10);
    }
    else {
      uVar2 = uVar8 | 0xf;
      uVar9 = 0x7fffffffffffffff;
      if ((uVar2 < 0x8000000000000000) && (uVar9 = uVar2, uVar2 < 0x16)) {
        uVar9 = 0x16;
      }
      pvVar3 = (void *)FUN_144b659f0(param_1 + 8,uVar9 + 1);
      *(void **)(param_1 + 8) = pvVar3;
      *(ulonglong *)(param_1 + 0x18) = uVar8;
      *(ulonglong *)(param_1 + 0x20) = uVar9;
      memcpy(pvVar3,local_98,uVar8 + 1);
    }
    if (uVar10 < 0x10) goto LAB_14517a51f;
    uVar8 = uVar10 + 1;
    if (0xfff < uVar8) {
      lVar4 = (longlong)_Dst - (longlong)*(char **)(_Dst + -8);
      _Dst = *(char **)(_Dst + -8);
      goto joined_r0x00014517acbc;
    }
  }
  else {
    piVar6 = (int *)(param_2[2] + *param_2);
    *param_3 = *piVar6;
    *(char *)(param_3 + 1) = (char)piVar6[1];
    lVar4 = param_2[2];
    lVar7 = lVar4 + 5;
    param_2[2] = lVar7;
    if ((*param_3 == 0x43415244) && ((char)param_3[1] == 'O')) {
      if (param_2[1] < lVar4 + 6) {
        local_88 = (char *)0x0;
        uStack_80 = 0;
        local_78 = 0;
        local_70 = 0;
        uVar8 = 0xffffffffffffffff;
        do {
          uVar10 = uVar8;
          uVar8 = uVar10 + 1;
        } while (*(char *)((longlong)&local_68 + uVar10 + 1) != '\0');
        if (0x7fffffffffffffff < uVar8) {
LAB_14517accf:
          local_70 = 0;
          local_78 = 0;
          uStack_80 = 0;
          local_88 = (char *)0x0;
                    /* WARNING: Subroutine does not return */
          FUN_146eb22ad();
        }
        if (uVar8 < 0x10) {
          local_70 = 0xf;
          local_78 = uVar8;
          memcpy(&local_88,&local_68,uVar8);
          *(undefined1 *)((longlong)&local_88 + uVar10 + 1) = 0;
          uVar8 = local_78;
          _Dst = local_88;
          uVar10 = local_70;
        }
        else {
          uVar10 = uVar8 | 0xf;
          if (uVar10 < 0x8000000000000000) {
            if (uVar10 < 0x16) {
              uVar10 = 0x16;
            }
          }
          else {
            uVar10 = 0x7fffffffffffffff;
          }
          _Dst = (char *)FUN_144b659f0(&local_88,uVar10 + 1);
          local_88 = _Dst;
          local_78 = uVar8;
          local_70 = uVar10;
          memcpy(_Dst,&local_68,uVar8);
          _Dst[uVar8] = '\0';
        }
        param_1[0] = -2;
        param_1[1] = -1;
        param_1[2] = -1;
        param_1[3] = -1;
        param_1[8] = '\0';
        param_1[9] = '\0';
        param_1[10] = '\0';
        param_1[0xb] = '\0';
        param_1[0xc] = '\0';
        param_1[0xd] = '\0';
        param_1[0xe] = '\0';
        param_1[0xf] = '\0';
        param_1[0x10] = '\0';
        param_1[0x11] = '\0';
        param_1[0x12] = '\0';
        param_1[0x13] = '\0';
        param_1[0x14] = '\0';
        param_1[0x15] = '\0';
        param_1[0x16] = '\0';
        param_1[0x17] = '\0';
        param_1[0x18] = '\0';
        param_1[0x19] = '\0';
        param_1[0x1a] = '\0';
        param_1[0x1b] = '\0';
        param_1[0x1c] = '\0';
        param_1[0x1d] = '\0';
        param_1[0x1e] = '\0';
        param_1[0x1f] = '\0';
        param_1[0x20] = '\0';
        param_1[0x21] = '\0';
        param_1[0x22] = '\0';
        param_1[0x23] = '\0';
        param_1[0x24] = '\0';
        param_1[0x25] = '\0';
        param_1[0x26] = '\0';
        param_1[0x27] = '\0';
        local_98 = (char *)&local_88;
        if (0xf < uVar10) {
          local_98 = _Dst;
        }
        if (0x7fffffffffffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_146eb22ad();
        }
        param_1[0x20] = '\x0f';
        param_1[0x21] = '\0';
        param_1[0x22] = '\0';
        param_1[0x23] = '\0';
        param_1[0x24] = '\0';
        param_1[0x25] = '\0';
        param_1[0x26] = '\0';
        param_1[0x27] = '\0';
        if (uVar8 < 0x10) {
          *(ulonglong *)(param_1 + 0x18) = uVar8;
          memmove(param_1 + 8,local_98,0x10);
        }
        else {
          uVar2 = uVar8 | 0xf;
          uVar9 = 0x7fffffffffffffff;
          if ((uVar2 < 0x8000000000000000) && (uVar9 = uVar2, uVar2 < 0x16)) {
            uVar9 = 0x16;
          }
          pvVar3 = (void *)FUN_144b659f0(param_1 + 8,uVar9 + 1);
          *(void **)(param_1 + 8) = pvVar3;
          *(ulonglong *)(param_1 + 0x18) = uVar8;
          *(ulonglong *)(param_1 + 0x20) = uVar9;
          memcpy(pvVar3,local_98,uVar8 + 1);
        }
      }
      else {
        *(undefined1 *)((longlong)param_3 + 5) = *(undefined1 *)(lVar7 + *param_2);
        param_2[2] = param_2[2] + 1;
        if (param_2[1] < param_2[2] + 1) {
          local_88 = (char *)0x0;
          uStack_80 = 0;
          local_78 = 0;
          local_70 = 0;
          uVar8 = 0xffffffffffffffff;
          do {
            uVar10 = uVar8;
            uVar8 = uVar10 + 1;
          } while (*(char *)((longlong)&local_68 + uVar10 + 1) != '\0');
          if (0x7fffffffffffffff < uVar8) goto LAB_14517accf;
          if (uVar8 < 0x10) {
            local_70 = 0xf;
            local_78 = uVar8;
            memcpy(&local_88,&local_68,uVar8);
            *(undefined1 *)((longlong)&local_88 + uVar10 + 1) = 0;
            uVar8 = local_78;
            _Dst = local_88;
            uVar10 = local_70;
          }
          else {
            uVar10 = uVar8 | 0xf;
            if (uVar10 < 0x8000000000000000) {
              if (uVar10 < 0x16) {
                uVar10 = 0x16;
              }
            }
            else {
              uVar10 = 0x7fffffffffffffff;
            }
            _Dst = (char *)FUN_144b659f0(&local_88,uVar10 + 1);
            local_88 = _Dst;
            local_78 = uVar8;
            local_70 = uVar10;
            memcpy(_Dst,&local_68,uVar8);
            _Dst[uVar8] = '\0';
          }
          param_1[0] = -2;
          param_1[1] = -1;
          param_1[2] = -1;
          param_1[3] = -1;
          param_1[8] = '\0';
          param_1[9] = '\0';
          param_1[10] = '\0';
          param_1[0xb] = '\0';
          param_1[0xc] = '\0';
          param_1[0xd] = '\0';
          param_1[0xe] = '\0';
          param_1[0xf] = '\0';
          param_1[0x10] = '\0';
          param_1[0x11] = '\0';
          param_1[0x12] = '\0';
          param_1[0x13] = '\0';
          param_1[0x14] = '\0';
          param_1[0x15] = '\0';
          param_1[0x16] = '\0';
          param_1[0x17] = '\0';
          param_1[0x18] = '\0';
          param_1[0x19] = '\0';
          param_1[0x1a] = '\0';
          param_1[0x1b] = '\0';
          param_1[0x1c] = '\0';
          param_1[0x1d] = '\0';
          param_1[0x1e] = '\0';
          param_1[0x1f] = '\0';
          param_1[0x20] = '\0';
          param_1[0x21] = '\0';
          param_1[0x22] = '\0';
          param_1[0x23] = '\0';
          param_1[0x24] = '\0';
          param_1[0x25] = '\0';
          param_1[0x26] = '\0';
          param_1[0x27] = '\0';
          local_98 = (char *)&local_88;
          if (0xf < uVar10) {
            local_98 = _Dst;
          }
          if (0x7fffffffffffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_146eb22ad();
          }
          param_1[0x20] = '\x0f';
          param_1[0x21] = '\0';
          param_1[0x22] = '\0';
          param_1[0x23] = '\0';
          param_1[0x24] = '\0';
          param_1[0x25] = '\0';
          param_1[0x26] = '\0';
          param_1[0x27] = '\0';
          if (uVar8 < 0x10) {
            *(ulonglong *)(param_1 + 0x18) = uVar8;
            memmove(param_1 + 8,local_98,0x10);
          }
          else {
            uVar2 = uVar8 | 0xf;
            uVar9 = 0x7fffffffffffffff;
            if ((uVar2 < 0x8000000000000000) && (uVar9 = uVar2, uVar2 < 0x16)) {
              uVar9 = 0x16;
            }
            pvVar3 = (void *)FUN_144b659f0(param_1 + 8,uVar9 + 1);
            *(void **)(param_1 + 8) = pvVar3;
            *(ulonglong *)(param_1 + 0x18) = uVar8;
            *(ulonglong *)(param_1 + 0x20) = uVar9;
            memcpy(pvVar3,local_98,uVar8 + 1);
          }
        }
        else {
          *(undefined1 *)((longlong)param_3 + 6) = *(undefined1 *)(param_2[2] + *param_2);
          param_2[2] = param_2[2] + 1;
          if (param_2[1] < param_2[2] + 1) {
            local_88 = (char *)0x0;
            uStack_80 = 0;
            local_78 = 0;
            local_70 = 0;
            uVar8 = 0xffffffffffffffff;
            do {
              uVar10 = uVar8;
              uVar8 = uVar10 + 1;
            } while (*(char *)((longlong)&local_68 + uVar10 + 1) != '\0');
            if (0x7fffffffffffffff < uVar8) goto LAB_14517accf;
            if (uVar8 < 0x10) {
              local_70 = 0xf;
              local_78 = uVar8;
              memcpy(&local_88,&local_68,uVar8);
              *(undefined1 *)((longlong)&local_88 + uVar10 + 1) = 0;
              uVar8 = local_78;
              _Dst = local_88;
              uVar10 = local_70;
            }
            else {
              uVar10 = uVar8 | 0xf;
              if (uVar10 < 0x8000000000000000) {
                if (uVar10 < 0x16) {
                  uVar10 = 0x16;
                }
              }
              else {
                uVar10 = 0x7fffffffffffffff;
              }
              _Dst = (char *)FUN_144b659f0(&local_88,uVar10 + 1);
              local_88 = _Dst;
              local_78 = uVar8;
              local_70 = uVar10;
              memcpy(_Dst,&local_68,uVar8);
              _Dst[uVar8] = '\0';
            }
            param_1[0] = -2;
            param_1[1] = -1;
            param_1[2] = -1;
            param_1[3] = -1;
            param_1[8] = '\0';
            param_1[9] = '\0';
            param_1[10] = '\0';
            param_1[0xb] = '\0';
            param_1[0xc] = '\0';
            param_1[0xd] = '\0';
            param_1[0xe] = '\0';
            param_1[0xf] = '\0';
            param_1[0x10] = '\0';
            param_1[0x11] = '\0';
            param_1[0x12] = '\0';
            param_1[0x13] = '\0';
            param_1[0x14] = '\0';
            param_1[0x15] = '\0';
            param_1[0x16] = '\0';
            param_1[0x17] = '\0';
            param_1[0x18] = '\0';
            param_1[0x19] = '\0';
            param_1[0x1a] = '\0';
            param_1[0x1b] = '\0';
            param_1[0x1c] = '\0';
            param_1[0x1d] = '\0';
            param_1[0x1e] = '\0';
            param_1[0x1f] = '\0';
            param_1[0x20] = '\0';
            param_1[0x21] = '\0';
            param_1[0x22] = '\0';
            param_1[0x23] = '\0';
            param_1[0x24] = '\0';
            param_1[0x25] = '\0';
            param_1[0x26] = '\0';
            param_1[0x27] = '\0';
            local_98 = (char *)&local_88;
            if (0xf < uVar10) {
              local_98 = _Dst;
            }
            if (0x7fffffffffffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
              FUN_146eb22ad();
            }
            param_1[0x20] = '\x0f';
            param_1[0x21] = '\0';
            param_1[0x22] = '\0';
            param_1[0x23] = '\0';
            param_1[0x24] = '\0';
            param_1[0x25] = '\0';
            param_1[0x26] = '\0';
            param_1[0x27] = '\0';
            if (uVar8 < 0x10) {
              *(ulonglong *)(param_1 + 0x18) = uVar8;
              memmove(param_1 + 8,local_98,0x10);
            }
            else {
              uVar2 = uVar8 | 0xf;
              uVar9 = 0x7fffffffffffffff;
              if ((uVar2 < 0x8000000000000000) && (uVar9 = uVar2, uVar2 < 0x16)) {
                uVar9 = 0x16;
              }
              pvVar3 = (void *)FUN_144b659f0(param_1 + 8,uVar9 + 1);
              *(void **)(param_1 + 8) = pvVar3;
              *(ulonglong *)(param_1 + 0x18) = uVar8;
              *(ulonglong *)(param_1 + 0x20) = uVar9;
              memcpy(pvVar3,local_98,uVar8 + 1);
            }
          }
          else {
            *(undefined1 *)((longlong)param_3 + 7) = *(undefined1 *)(param_2[2] + *param_2);
            param_2[2] = param_2[2] + 1;
            if (param_2[1] < param_2[2] + 1) {
              local_88 = (char *)0x0;
              uStack_80 = 0;
              local_78 = 0;
              local_70 = 0;
              uVar8 = 0xffffffffffffffff;
              do {
                uVar10 = uVar8;
                uVar8 = uVar10 + 1;
              } while (*(char *)((longlong)&local_68 + uVar10 + 1) != '\0');
              if (0x7fffffffffffffff < uVar8) goto LAB_14517accf;
              if (uVar8 < 0x10) {
                local_70 = 0xf;
                local_78 = uVar8;
                memcpy(&local_88,&local_68,uVar8);
                *(undefined1 *)((longlong)&local_88 + uVar10 + 1) = 0;
                uVar8 = local_78;
                _Dst = local_88;
                uVar10 = local_70;
              }
              else {
                uVar10 = uVar8 | 0xf;
                if (uVar10 < 0x8000000000000000) {
                  if (uVar10 < 0x16) {
                    uVar10 = 0x16;
                  }
                }
                else {
                  uVar10 = 0x7fffffffffffffff;
                }
                _Dst = (char *)FUN_144b659f0(&local_88,uVar10 + 1);
                local_88 = _Dst;
                local_78 = uVar8;
                local_70 = uVar10;
                memcpy(_Dst,&local_68,uVar8);
                _Dst[uVar8] = '\0';
              }
              param_1[0] = -2;
              param_1[1] = -1;
              param_1[2] = -1;
              param_1[3] = -1;
              param_1[8] = '\0';
              param_1[9] = '\0';
              param_1[10] = '\0';
              param_1[0xb] = '\0';
              param_1[0xc] = '\0';
              param_1[0xd] = '\0';
              param_1[0xe] = '\0';
              param_1[0xf] = '\0';
              param_1[0x10] = '\0';
              param_1[0x11] = '\0';
              param_1[0x12] = '\0';
              param_1[0x13] = '\0';
              param_1[0x14] = '\0';
              param_1[0x15] = '\0';
              param_1[0x16] = '\0';
              param_1[0x17] = '\0';
              param_1[0x18] = '\0';
              param_1[0x19] = '\0';
              param_1[0x1a] = '\0';
              param_1[0x1b] = '\0';
              param_1[0x1c] = '\0';
              param_1[0x1d] = '\0';
              param_1[0x1e] = '\0';
              param_1[0x1f] = '\0';
              param_1[0x20] = '\0';
              param_1[0x21] = '\0';
              param_1[0x22] = '\0';
              param_1[0x23] = '\0';
              param_1[0x24] = '\0';
              param_1[0x25] = '\0';
              param_1[0x26] = '\0';
              param_1[0x27] = '\0';
              local_98 = (char *)&local_88;
              if (0xf < uVar10) {
                local_98 = _Dst;
              }
              if (0x7fffffffffffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
                FUN_146eb22ad();
              }
              param_1[0x20] = '\x0f';
              param_1[0x21] = '\0';
              param_1[0x22] = '\0';
              param_1[0x23] = '\0';
              param_1[0x24] = '\0';
              param_1[0x25] = '\0';
              param_1[0x26] = '\0';
              param_1[0x27] = '\0';
              if (uVar8 < 0x10) {
                *(ulonglong *)(param_1 + 0x18) = uVar8;
                memmove(param_1 + 8,local_98,0x10);
              }
              else {
                uVar2 = uVar8 | 0xf;
                uVar9 = 0x7fffffffffffffff;
                if ((uVar2 < 0x8000000000000000) && (uVar9 = uVar2, uVar2 < 0x16)) {
                  uVar9 = 0x16;
                }
                pvVar3 = (void *)FUN_144b659f0(param_1 + 8,uVar9 + 1);
                *(void **)(param_1 + 8) = pvVar3;
                *(ulonglong *)(param_1 + 0x18) = uVar8;
                *(ulonglong *)(param_1 + 0x20) = uVar9;
                memcpy(pvVar3,local_98,uVar8 + 1);
              }
            }
            else {
              *(undefined1 *)(param_3 + 2) = *(undefined1 *)(param_2[2] + *param_2);
              param_2[2] = param_2[2] + 1;
              if (param_2[2] + 2 <= param_2[1]) {
                *(undefined2 *)((longlong)param_3 + 10) = *(undefined2 *)(param_2[2] + *param_2);
                param_2[2] = param_2[2] + 2;
                param_1[0] = '\0';
                param_1[1] = '\0';
                param_1[2] = '\0';
                param_1[3] = '\0';
                param_1[8] = '\0';
                param_1[9] = '\0';
                param_1[10] = '\0';
                param_1[0xb] = '\0';
                param_1[0xc] = '\0';
                param_1[0xd] = '\0';
                param_1[0xe] = '\0';
                param_1[0xf] = '\0';
                param_1[0x10] = '\0';
                param_1[0x11] = '\0';
                param_1[0x12] = '\0';
                param_1[0x13] = '\0';
                param_1[0x14] = '\0';
                param_1[0x15] = '\0';
                param_1[0x16] = '\0';
                param_1[0x17] = '\0';
                param_1[0x18] = '\0';
                param_1[0x19] = '\0';
                param_1[0x1a] = '\0';
                param_1[0x1b] = '\0';
                param_1[0x1c] = '\0';
                param_1[0x1d] = '\0';
                param_1[0x1e] = '\0';
                param_1[0x1f] = '\0';
                param_1[0x20] = '\x0f';
                param_1[0x21] = '\0';
                param_1[0x22] = '\0';
                param_1[0x23] = '\0';
                param_1[0x24] = '\0';
                param_1[0x25] = '\0';
                param_1[0x26] = '\0';
                param_1[0x27] = '\0';
                param_1[8] = '\0';
                goto LAB_14517a51f;
              }
              local_88 = (char *)0x0;
              uStack_80 = 0;
              local_78 = 0;
              local_70 = 0;
              uVar8 = 0xffffffffffffffff;
              do {
                uVar10 = uVar8;
                uVar8 = uVar10 + 1;
              } while (*(char *)((longlong)&local_68 + uVar10 + 1) != '\0');
              if (0x7fffffffffffffff < uVar8) goto LAB_14517accf;
              if (uVar8 < 0x10) {
                local_70 = 0xf;
                local_78 = uVar8;
                memcpy(&local_88,&local_68,uVar8);
                *(undefined1 *)((longlong)&local_88 + uVar10 + 1) = 0;
                uVar8 = local_78;
                _Dst = local_88;
                uVar10 = local_70;
              }
              else {
                uVar10 = uVar8 | 0xf;
                if (uVar10 < 0x8000000000000000) {
                  if (uVar10 < 0x16) {
                    uVar10 = 0x16;
                  }
                }
                else {
                  uVar10 = 0x7fffffffffffffff;
                }
                _Dst = (char *)FUN_144b659f0(&local_88,uVar10 + 1);
                local_88 = _Dst;
                local_78 = uVar8;
                local_70 = uVar10;
                memcpy(_Dst,&local_68,uVar8);
                _Dst[uVar8] = '\0';
              }
              param_1[0] = -2;
              param_1[1] = -1;
              param_1[2] = -1;
              param_1[3] = -1;
              param_1[8] = '\0';
              param_1[9] = '\0';
              param_1[10] = '\0';
              param_1[0xb] = '\0';
              param_1[0xc] = '\0';
              param_1[0xd] = '\0';
              param_1[0xe] = '\0';
              param_1[0xf] = '\0';
              param_1[0x10] = '\0';
              param_1[0x11] = '\0';
              param_1[0x12] = '\0';
              param_1[0x13] = '\0';
              param_1[0x14] = '\0';
              param_1[0x15] = '\0';
              param_1[0x16] = '\0';
              param_1[0x17] = '\0';
              param_1[0x18] = '\0';
              param_1[0x19] = '\0';
              param_1[0x1a] = '\0';
              param_1[0x1b] = '\0';
              param_1[0x1c] = '\0';
              param_1[0x1d] = '\0';
              param_1[0x1e] = '\0';
              param_1[0x1f] = '\0';
              param_1[0x20] = '\0';
              param_1[0x21] = '\0';
              param_1[0x22] = '\0';
              param_1[0x23] = '\0';
              param_1[0x24] = '\0';
              param_1[0x25] = '\0';
              param_1[0x26] = '\0';
              param_1[0x27] = '\0';
              local_98 = (char *)&local_88;
              if (0xf < uVar10) {
                local_98 = _Dst;
              }
              if (0x7fffffffffffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
                FUN_146eb22ad();
              }
              param_1[0x20] = '\x0f';
              param_1[0x21] = '\0';
              param_1[0x22] = '\0';
              param_1[0x23] = '\0';
              param_1[0x24] = '\0';
              param_1[0x25] = '\0';
              param_1[0x26] = '\0';
              param_1[0x27] = '\0';
              if (uVar8 < 0x10) {
                *(ulonglong *)(param_1 + 0x18) = uVar8;
                memmove(param_1 + 8,local_98,0x10);
              }
              else {
                uVar2 = uVar8 | 0xf;
                uVar9 = 0x7fffffffffffffff;
                if ((uVar2 < 0x8000000000000000) && (uVar9 = uVar2, uVar2 < 0x16)) {
                  uVar9 = 0x16;
                }
                pvVar3 = (void *)FUN_144b659f0(param_1 + 8,uVar9 + 1);
                *(void **)(param_1 + 8) = pvVar3;
                *(ulonglong *)(param_1 + 0x18) = uVar8;
                *(ulonglong *)(param_1 + 0x20) = uVar9;
                memcpy(pvVar3,local_98,uVar8 + 1);
              }
            }
          }
        }
      }
      if (uVar10 < 0x10) goto LAB_14517a51f;
      uVar8 = uVar10 + 1;
      if (0xfff < uVar8) {
        lVar4 = (longlong)_Dst - (longlong)*(char **)(_Dst + -8);
        _Dst = *(char **)(_Dst + -8);
joined_r0x00014517acbc:
        uVar8 = uVar10 + 0x28;
        if (0x1f < lVar4 - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
    }
    else {
      local_88 = (char *)0x0;
      uStack_80 = 0;
      _Dst = (char *)FUN_144b659f0(&local_88,0x20);
      local_78 = 0x11;
      local_70 = 0x1f;
      builtin_strncpy(_Dst,"Not a Draco file.",0x12);
      param_1[0] = -1;
      param_1[1] = -1;
      param_1[2] = -1;
      param_1[3] = -1;
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
      param_1[0x10] = '\0';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      param_1[0x14] = '\0';
      param_1[0x15] = '\0';
      param_1[0x16] = '\0';
      param_1[0x17] = '\0';
      param_1[0x18] = '\0';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
      param_1[0x20] = '\x0f';
      param_1[0x21] = '\0';
      param_1[0x22] = '\0';
      param_1[0x23] = '\0';
      param_1[0x24] = '\0';
      param_1[0x25] = '\0';
      param_1[0x26] = '\0';
      param_1[0x27] = '\0';
      local_88 = _Dst;
      puVar5 = (undefined8 *)FUN_144b659f0(param_1 + 8,0x20);
      *(undefined8 **)(param_1 + 8) = puVar5;
      param_1[0x18] = '\x11';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
      param_1[0x20] = '\x1f';
      param_1[0x21] = '\0';
      param_1[0x22] = '\0';
      param_1[0x23] = '\0';
      param_1[0x24] = '\0';
      param_1[0x25] = '\0';
      param_1[0x26] = '\0';
      param_1[0x27] = '\0';
      uVar1 = *(undefined8 *)(_Dst + 8);
      *puVar5 = *(undefined8 *)_Dst;
      puVar5[1] = uVar1;
      *(undefined2 *)(puVar5 + 2) = *(undefined2 *)(_Dst + 0x10);
      uVar8 = 0x20;
    }
  }
  thunk_FUN_1400020a8(_Dst,uVar8);
LAB_14517a51f:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
}



// FUNCTION 14517ad00 FUN_14517ad00 body=1626 status=ok
// SIG undefined FUN_14517ad00(void)

void FUN_14517ad00(longlong *param_1,int *param_2,longlong param_3,longlong param_4,longlong param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined1 auStack_88 [40];
  char *local_60;
  char *pcStack_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  undefined8 local_38;
  ushort local_2e;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_1[10] = param_3;
  param_1[8] = param_4;
  param_1[1] = param_5;
  local_38 = param_2;
  FUN_14517a230(&local_60,param_4,&local_38);
  if ((int)local_60 == 0) {
    if (0xf < local_40) {
      uVar10 = local_40 + 1;
      pcVar7 = pcStack_58;
      if (0xfff < uVar10) {
        uVar10 = local_40 + 0x28;
        pcVar7 = *(char **)(pcStack_58 + -8);
        if ((char *)0x1f < pcStack_58 + (-8 - (longlong)pcVar7)) goto LAB_14517b031;
      }
      thunk_FUN_1400020a8(pcVar7,uVar10);
    }
    uVar6 = (**(code **)(*param_1 + 8))(param_1);
    if (local_38._7_1_ == uVar6) {
      *(char *)(param_1 + 9) = local_38._5_1_;
      *(byte *)((longlong)param_1 + 0x49) = local_38._6_1_;
      if ((byte)(local_38._5_1_ - 1U) < 2) {
        if ((local_38._5_1_ != '\x02') || (local_38._6_1_ <= (byte)((local_38._7_1_ == 0) + 2U))) {
          *(ushort *)(param_1[8] + 0x32) = CONCAT11(local_38._5_1_,local_38._6_1_);
          if ((0x102 < CONCAT11((char)param_1[9],*(undefined1 *)((longlong)param_1 + 0x49))) &&
             ((local_2e & 0x8000) != 0)) {
            FUN_14517b630(param_1,&local_60);
            if ((int)local_60 != 0) {
              *param_2 = (int)local_60;
              FUN_144b65a50(param_2 + 2,&pcStack_58);
              goto LAB_14517afc0;
            }
            if (0xf < local_40) {
              uVar10 = local_40 + 1;
              pcVar7 = pcStack_58;
              if (0xfff < uVar10) {
                uVar10 = local_40 + 0x28;
                pcVar7 = *(char **)(pcStack_58 + -8);
                if ((char *)0x1f < pcStack_58 + (-8 - (longlong)pcVar7)) goto LAB_14517b031;
              }
              thunk_FUN_1400020a8(pcVar7,uVar10);
            }
          }
          cVar5 = (**(code **)(*param_1 + 0x10))(param_1);
          if (cVar5 == '\0') {
            local_60 = (char *)0x0;
            pcStack_58 = (char *)0x0;
            pcVar7 = (char *)FUN_144b659f0(&local_60,0x30);
            local_50 = 0x21;
            local_48 = 0x2f;
            builtin_strncpy(pcVar7,"Failed to initialize the decoder.",0x22);
            *param_2 = -1;
            param_2[2] = 0;
            param_2[3] = 0;
            param_2[4] = 0;
            param_2[5] = 0;
            param_2[6] = 0;
            param_2[7] = 0;
            param_2[8] = 0xf;
            param_2[9] = 0;
            local_60 = pcVar7;
            puVar9 = (undefined4 *)FUN_144b659f0(param_2 + 2,0x30);
            *(undefined4 **)(param_2 + 2) = puVar9;
            param_2[6] = 0x21;
            param_2[7] = 0;
            param_2[8] = 0x2f;
            param_2[9] = 0;
            uVar1 = *(undefined4 *)(pcVar7 + 4);
            uVar2 = *(undefined4 *)(pcVar7 + 8);
            uVar3 = *(undefined4 *)(pcVar7 + 0xc);
            *puVar9 = *(undefined4 *)pcVar7;
            puVar9[1] = uVar1;
            puVar9[2] = uVar2;
            puVar9[3] = uVar3;
            uVar4 = *(undefined8 *)(pcVar7 + 0x18);
            *(undefined8 *)(puVar9 + 4) = *(undefined8 *)(pcVar7 + 0x10);
            *(undefined8 *)(puVar9 + 6) = uVar4;
            *(undefined2 *)(puVar9 + 8) = *(undefined2 *)(pcVar7 + 0x20);
            uVar10 = 0x30;
          }
          else {
            cVar5 = (**(code **)(*param_1 + 0x20))(param_1);
            if (cVar5 == '\0') {
              local_60 = (char *)0x0;
              pcStack_58 = (char *)0x0;
              pcVar7 = (char *)FUN_144b659f0(&local_60,0x20);
              local_50 = 0x1f;
              local_48 = 0x1f;
              builtin_strncpy(pcVar7,"Failed to decode geometry data.",0x20);
              *param_2 = -1;
              param_2[2] = 0;
              param_2[3] = 0;
              param_2[4] = 0;
              param_2[5] = 0;
              param_2[6] = 0;
              param_2[7] = 0;
              param_2[8] = 0xf;
              param_2[9] = 0;
              local_60 = pcVar7;
              puVar9 = (undefined4 *)FUN_144b659f0(param_2 + 2,0x20);
              *(undefined4 **)(param_2 + 2) = puVar9;
              param_2[6] = 0x1f;
              param_2[7] = 0;
              param_2[8] = 0x1f;
              param_2[9] = 0;
              uVar1 = *(undefined4 *)(pcVar7 + 4);
              uVar2 = *(undefined4 *)(pcVar7 + 8);
              uVar3 = *(undefined4 *)(pcVar7 + 0xc);
              *puVar9 = *(undefined4 *)pcVar7;
              puVar9[1] = uVar1;
              puVar9[2] = uVar2;
              puVar9[3] = uVar3;
              uVar4 = *(undefined8 *)(pcVar7 + 0x18);
              *(undefined8 *)(puVar9 + 4) = *(undefined8 *)(pcVar7 + 0x10);
              *(undefined8 *)(puVar9 + 6) = uVar4;
              goto LAB_14517b33f;
            }
            cVar5 = (**(code **)(*param_1 + 0x28))(param_1);
            if (cVar5 != '\0') {
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
              goto LAB_14517b34c;
            }
            local_60 = (char *)0x0;
            pcStack_58 = (char *)0x0;
            pcVar7 = (char *)FUN_144b659f0(&local_60,0x30);
            local_50 = 0x22;
            local_48 = 0x2f;
            builtin_strncpy(pcVar7,"Failed to decode point attributes.",0x23);
            *param_2 = -1;
            param_2[2] = 0;
            param_2[3] = 0;
            param_2[4] = 0;
            param_2[5] = 0;
            param_2[6] = 0;
            param_2[7] = 0;
            param_2[8] = 0xf;
            param_2[9] = 0;
            local_60 = pcVar7;
            puVar9 = (undefined4 *)FUN_144b659f0(param_2 + 2,0x30);
            *(undefined4 **)(param_2 + 2) = puVar9;
            param_2[6] = 0x22;
            param_2[7] = 0;
            param_2[8] = 0x2f;
            param_2[9] = 0;
            uVar1 = *(undefined4 *)(pcVar7 + 4);
            uVar2 = *(undefined4 *)(pcVar7 + 8);
            uVar3 = *(undefined4 *)(pcVar7 + 0xc);
            *puVar9 = *(undefined4 *)pcVar7;
            puVar9[1] = uVar1;
            puVar9[2] = uVar2;
            puVar9[3] = uVar3;
            uVar4 = *(undefined8 *)(pcVar7 + 0x18);
            *(undefined8 *)(puVar9 + 4) = *(undefined8 *)(pcVar7 + 0x10);
            *(undefined8 *)(puVar9 + 6) = uVar4;
            *(undefined2 *)(puVar9 + 8) = *(undefined2 *)(pcVar7 + 0x20);
            *(char *)((longlong)puVar9 + 0x22) = pcVar7[0x22];
            uVar10 = 0x30;
          }
          goto LAB_14517b347;
        }
        local_60 = (char *)0x0;
        pcStack_58 = (char *)0x0;
        pcVar7 = (char *)FUN_144b659f0(&local_60,0x20);
        local_50 = 0x16;
        local_48 = 0x1f;
        builtin_strncpy(pcVar7,"Unknown minor version.",0x17);
        *param_2 = -5;
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[4] = 0;
        param_2[5] = 0;
        param_2[6] = 0;
        param_2[7] = 0;
        param_2[8] = 0xf;
        param_2[9] = 0;
        local_60 = pcVar7;
        puVar9 = (undefined4 *)FUN_144b659f0(param_2 + 2,0x20);
        *(undefined4 **)(param_2 + 2) = puVar9;
        param_2[6] = 0x16;
        param_2[7] = 0;
        param_2[8] = 0x1f;
        param_2[9] = 0;
        uVar1 = *(undefined4 *)(pcVar7 + 4);
        uVar2 = *(undefined4 *)(pcVar7 + 8);
        uVar3 = *(undefined4 *)(pcVar7 + 0xc);
        *puVar9 = *(undefined4 *)pcVar7;
        puVar9[1] = uVar1;
        puVar9[2] = uVar2;
        puVar9[3] = uVar3;
        puVar9[4] = *(undefined4 *)(pcVar7 + 0x10);
        *(undefined2 *)(puVar9 + 5) = *(undefined2 *)(pcVar7 + 0x14);
        *(char *)((longlong)puVar9 + 0x16) = pcVar7[0x16];
      }
      else {
        local_60 = (char *)0x0;
        pcStack_58 = (char *)0x0;
        pcVar7 = (char *)FUN_144b659f0(&local_60,0x20);
        local_50 = 0x16;
        local_48 = 0x1f;
        builtin_strncpy(pcVar7,"Unknown major version.",0x17);
        *param_2 = -5;
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[4] = 0;
        param_2[5] = 0;
        param_2[6] = 0;
        param_2[7] = 0;
        param_2[8] = 0xf;
        param_2[9] = 0;
        local_60 = pcVar7;
        puVar9 = (undefined4 *)FUN_144b659f0(param_2 + 2,0x20);
        *(undefined4 **)(param_2 + 2) = puVar9;
        param_2[6] = 0x16;
        param_2[7] = 0;
        param_2[8] = 0x1f;
        param_2[9] = 0;
        uVar1 = *(undefined4 *)(pcVar7 + 4);
        uVar2 = *(undefined4 *)(pcVar7 + 8);
        uVar3 = *(undefined4 *)(pcVar7 + 0xc);
        *puVar9 = *(undefined4 *)pcVar7;
        puVar9[1] = uVar1;
        puVar9[2] = uVar2;
        puVar9[3] = uVar3;
        puVar9[4] = *(undefined4 *)(pcVar7 + 0x10);
        *(undefined2 *)(puVar9 + 5) = *(undefined2 *)(pcVar7 + 0x14);
        *(char *)((longlong)puVar9 + 0x16) = pcVar7[0x16];
      }
LAB_14517b33f:
      uVar10 = 0x20;
    }
    else {
      local_60 = (char *)0x0;
      pcStack_58 = (char *)0x0;
      pcVar7 = (char *)FUN_144b659f0(&local_60,0x40);
      local_50 = 0x32;
      local_48 = 0x3f;
      builtin_strncpy(pcVar7,"Using incompatible decoder for the input geometry.",0x33);
      *param_2 = -1;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
      param_2[8] = 0xf;
      param_2[9] = 0;
      local_60 = pcVar7;
      puVar8 = (undefined8 *)FUN_144b659f0(param_2 + 2,0x40);
      *(undefined8 **)(param_2 + 2) = puVar8;
      param_2[6] = 0x32;
      param_2[7] = 0;
      param_2[8] = 0x3f;
      param_2[9] = 0;
      uVar4 = *(undefined8 *)(pcVar7 + 8);
      *puVar8 = *(undefined8 *)pcVar7;
      puVar8[1] = uVar4;
      uVar4 = *(undefined8 *)(pcVar7 + 0x18);
      puVar8[2] = *(undefined8 *)(pcVar7 + 0x10);
      puVar8[3] = uVar4;
      uVar1 = *(undefined4 *)(pcVar7 + 0x24);
      uVar2 = *(undefined4 *)(pcVar7 + 0x28);
      uVar3 = *(undefined4 *)(pcVar7 + 0x2c);
      *(undefined4 *)(puVar8 + 4) = *(undefined4 *)(pcVar7 + 0x20);
      *(undefined4 *)((longlong)puVar8 + 0x24) = uVar1;
      *(undefined4 *)(puVar8 + 5) = uVar2;
      *(undefined4 *)((longlong)puVar8 + 0x2c) = uVar3;
      *(undefined2 *)(puVar8 + 6) = *(undefined2 *)(pcVar7 + 0x30);
      *(char *)((longlong)puVar8 + 0x32) = pcVar7[0x32];
      uVar10 = 0x40;
    }
  }
  else {
    *param_2 = (int)local_60;
    FUN_144b65a50(param_2 + 2,&pcStack_58);
LAB_14517afc0:
    if (local_40 < 0x10) goto LAB_14517b34c;
    uVar10 = local_40 + 1;
    pcVar7 = pcStack_58;
    if (0xfff < uVar10) {
      pcVar7 = *(char **)(pcStack_58 + -8);
      uVar10 = local_40 + 0x28;
      if ((char *)0x1f < pcStack_58 + (-8 - (longlong)pcVar7)) {
LAB_14517b031:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
  }
LAB_14517b347:
  thunk_FUN_1400020a8(pcVar7,uVar10);
LAB_14517b34c:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_88);
}



// FUNCTION 14517b370 FUN_14517b370 body=57 status=ok
// SIG undefined FUN_14517b370(void)

undefined8 FUN_14517b370(longlong param_1,int param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if ((-1 < param_2) &&
     (param_2 < (int)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) -
                      *(longlong *)(*(longlong *)(param_1 + 8) + 0x10) >> 3))) {
    plVar1 = *(longlong **)
              (*(longlong *)(param_1 + 0x10) +
              (longlong)*(int *)(*(longlong *)(param_1 + 0x28) + (longlong)param_2 * 4) * 8);
                    /* WARNING: Could not recover jumptable at 0x00014517b3a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14517b3b0 FUN_14517b3b0 body=3 status=ok
// SIG undefined FUN_14517b3b0(void)

undefined1 FUN_14517b3b0(void)

{
  return 1;
}



// FUNCTION 14517b3c0 FUN_14517b3c0 body=517 status=ok
// SIG undefined FUN_14517b3c0(void)

bool FUN_14517b3c0(longlong *param_1)

{
  size_t _Size;
  byte bVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  void *_Dst;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  undefined8 *puVar12;
  longlong lVar13;
  int iVar14;
  undefined1 local_res8 [8];
  uint local_res10;
  longlong local_res18;
  
  plVar2 = (longlong *)param_1[8];
  lVar13 = plVar2[2] + 1;
  if (lVar13 <= plVar2[1]) {
    iVar11 = 0;
    bVar1 = *(byte *)(plVar2[2] + *plVar2);
    plVar2[2] = lVar13;
    uVar9 = (uint)bVar1;
    local_res10 = uVar9;
    if (bVar1 != 0) {
      do {
        cVar5 = (**(code **)(*param_1 + 0x18))(param_1,iVar11);
        if (cVar5 == '\0') {
          return false;
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < (int)uVar9);
    }
    puVar3 = (undefined8 *)param_1[3];
    for (puVar12 = (undefined8 *)param_1[2]; puVar12 != puVar3; puVar12 = puVar12 + 1) {
      cVar5 = (**(code **)(*(longlong *)*puVar12 + 8))((longlong *)*puVar12,param_1,param_1[1]);
      if (cVar5 == '\0') {
        return false;
      }
    }
    if (uVar9 != 0) {
      lVar13 = 0;
      do {
        plVar2 = *(longlong **)(param_1[2] + lVar13 * 8);
        cVar5 = (**(code **)(*plVar2 + 0x10))(plVar2,param_1[8]);
        if (cVar5 == '\0') {
          return false;
        }
        lVar13 = lVar13 + 1;
      } while (lVar13 < (longlong)(ulonglong)uVar9);
    }
    iVar11 = 0;
    if (uVar9 != 0) {
      local_res18 = 0;
      do {
        lVar13 = local_res18;
        iVar6 = (**(code **)(**(longlong **)(local_res18 + param_1[2]) + 0x28))();
        iVar14 = 0;
        if (0 < iVar6) {
          do {
            iVar7 = (**(code **)(**(longlong **)(lVar13 + param_1[2]) + 0x20))
                              (*(longlong **)(lVar13 + param_1[2]),iVar14);
            _Dst = (void *)param_1[6];
            lVar4 = param_1[5];
            uVar10 = (longlong)_Dst - lVar4 >> 2;
            if (uVar10 <= (ulonglong)(longlong)iVar7) {
              uVar8 = (ulonglong)(iVar7 + 1);
              if (uVar8 < uVar10) {
                param_1[6] = lVar4 + uVar8 * 4;
              }
              else if (uVar10 < uVar8) {
                if ((ulonglong)(param_1[7] - lVar4 >> 2) < uVar8) {
                  FUN_146c960b8(param_1 + 5,uVar8,local_res8);
                }
                else {
                  _Size = (uVar8 - uVar10) * 4;
                  memset(_Dst,0,_Size);
                  param_1[6] = (longlong)(_Size + (longlong)_Dst);
                  lVar13 = local_res18;
                }
              }
            }
            iVar14 = iVar14 + 1;
            *(int *)(param_1[5] + (longlong)iVar7 * 4) = iVar11;
          } while (iVar14 < iVar6);
        }
        local_res18 = lVar13 + 8;
        iVar11 = iVar11 + 1;
      } while (iVar11 < (int)local_res10);
    }
    cVar5 = (**(code **)(*param_1 + 0x30))(param_1);
    if (cVar5 != '\0') {
      cVar5 = (**(code **)(*param_1 + 0x38))(param_1);
      return cVar5 != '\0';
    }
  }
  return false;
}



// FUNCTION 14517b5d0 FUN_14517b5d0 body=94 status=ok
// SIG undefined FUN_14517b5d0(void)

undefined8 FUN_14517b5d0(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  while( true ) {
    if (puVar3 == puVar1) {
      return 1;
    }
    cVar2 = (**(code **)(*(longlong *)*puVar3 + 0x18))
                      ((longlong *)*puVar3,*(undefined8 *)(param_1 + 0x40));
    if (cVar2 == '\0') break;
    puVar3 = puVar3 + 1;
  }
  return 0;
}



// FUNCTION 14517b630 FUN_14517b630 body=770 status=ok
// SIG undefined FUN_14517b630(void)

void FUN_14517b630(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 *local_70 [2];
  undefined8 local_60;
  longlong *local_58;
  char *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70[0] = param_2;
  plVar5 = (longlong *)FUN_14494321d(0x38);
  plVar10 = (longlong *)0x0;
  local_58 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = 0;
    plVar5[1] = 0;
    lVar6 = FUN_14494321d(0x58);
    *(longlong *)lVar6 = lVar6;
    *(longlong *)(lVar6 + 8) = lVar6;
    *(longlong *)(lVar6 + 0x10) = lVar6;
    *(undefined2 *)(lVar6 + 0x18) = 0x101;
    *plVar5 = lVar6;
    plVar10 = plVar5 + 2;
    *plVar10 = 0;
    plVar5[3] = 0;
    local_78 = plVar10;
    lVar6 = FUN_14494321d(0x48);
    *(longlong *)lVar6 = lVar6;
    *(longlong *)(lVar6 + 8) = lVar6;
    *(longlong *)(lVar6 + 0x10) = lVar6;
    *(undefined2 *)(lVar6 + 0x18) = 0x101;
    *plVar10 = lVar6;
    plVar5[4] = 0;
    plVar5[5] = 0;
    plVar5[6] = 0;
    plVar10 = plVar5;
  }
  local_78 = plVar10;
  FUN_1453f5170(local_70);
  cVar4 = FUN_1453f5180(local_70,*(undefined8 *)(param_1 + 0x40),plVar10);
  if (cVar4 == '\0') {
    local_50 = (char *)0x0;
    uStack_48 = 0;
    pcVar7 = (char *)FUN_144b659f0(&local_50,0x20);
    local_40 = 0x1a;
    local_38 = 0x1f;
    builtin_strncpy(pcVar7,"Failed to decode metadata.",0x1b);
    *param_2 = 0xffffffff;
    *(undefined8 *)(param_2 + 2) = 0;
    *(undefined8 *)(param_2 + 4) = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 8) = 0xf;
    local_50 = pcVar7;
    puVar8 = (undefined4 *)FUN_144b659f0(param_2 + 2,0x20);
    *(undefined4 **)(param_2 + 2) = puVar8;
    *(undefined8 *)(param_2 + 6) = 0x1a;
    *(undefined8 *)(param_2 + 8) = 0x1f;
    uVar1 = *(undefined4 *)(pcVar7 + 4);
    uVar2 = *(undefined4 *)(pcVar7 + 8);
    uVar3 = *(undefined4 *)(pcVar7 + 0xc);
    *puVar8 = *(undefined4 *)pcVar7;
    puVar8[1] = uVar1;
    puVar8[2] = uVar2;
    puVar8[3] = uVar3;
    *(undefined8 *)(puVar8 + 4) = *(undefined8 *)(pcVar7 + 0x10);
    *(undefined2 *)(puVar8 + 6) = *(undefined2 *)(pcVar7 + 0x18);
    *(char *)((longlong)puVar8 + 0x1a) = pcVar7[0x1a];
    thunk_FUN_1400020a8(pcVar7,0x20);
    if (plVar10 != (longlong *)0x0) {
      FUN_144d7e090(plVar10 + 4);
      FUN_144d7ffa0(plVar10 + 2,plVar10 + 2,*(undefined8 *)(plVar10[2] + 8));
      thunk_FUN_1400020a8(plVar10[2],0x48);
      FUN_144d80090(plVar10,plVar10,*(undefined8 *)(*plVar10 + 8));
      thunk_FUN_1400020a8(*plVar10,0x58);
      thunk_FUN_1400020a8(plVar10,0x38);
    }
    goto LAB_14517b922;
  }
  puVar9 = (undefined8 *)(*(longlong *)(param_1 + 8) + 8);
  if (puVar9 == &local_60) {
LAB_14517b8a9:
    plVar5 = plVar10;
    if (plVar5 != (longlong *)0x0) {
      FUN_144d7e090(plVar5 + 4);
      FUN_144d7ffa0(plVar5 + 2,plVar5 + 2,*(undefined8 *)(plVar5[2] + 8));
      thunk_FUN_1400020a8(plVar5[2],0x48);
      FUN_144d80090(plVar5,plVar5,*(undefined8 *)(*plVar5 + 8));
      thunk_FUN_1400020a8(*plVar5,0x58);
      goto LAB_14517b8fc;
    }
  }
  else {
    plVar5 = (longlong *)*puVar9;
    *puVar9 = plVar10;
    plVar10 = (longlong *)0x0;
    if (plVar5 == (longlong *)0x0) goto LAB_14517b8a9;
    FUN_144d7e090(plVar5 + 4);
    FUN_144d7ffa0(plVar5 + 2,plVar5 + 2,*(undefined8 *)(plVar5[2] + 8));
    thunk_FUN_1400020a8(plVar5[2],0x48);
    FUN_144d80090(plVar5,plVar5,*(undefined8 *)(*plVar5 + 8));
    thunk_FUN_1400020a8(*plVar5,0x58);
LAB_14517b8fc:
    thunk_FUN_1400020a8(plVar5,0x38);
  }
  *param_2 = 0;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0xf;
  *(undefined1 *)(param_2 + 2) = 0;
LAB_14517b922:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
}



// FUNCTION 14517b950 FUN_14517b950 body=149 status=ok
// SIG undefined FUN_14517b950(void)

void FUN_14517b950(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  
  plVar6 = (longlong *)*param_1;
  if (plVar6 != (longlong *)0x0) {
    plVar1 = (longlong *)param_1[1];
    for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
      puVar2 = (undefined8 *)*plVar6;
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
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



// FUNCTION 14517b9f0 FUN_14517b9f0 body=135 status=ok
// SIG undefined FUN_14517b9f0(void)

longlong FUN_14517b9f0(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    uVar3 = *(longlong *)(param_1 + 0x38) - lVar1 & 0xfffffffffffffffc;
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
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  FUN_14517b950(param_1 + 0x10);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 14517ba80 FUN_14517ba80 body=41 status=ok
// SIG undefined FUN_14517ba80(void)

undefined8 * FUN_14517ba80(undefined8 *param_1)

{
  FUN_14517a1f0();
  param_1[0xb] = 0;
  *param_1 = draco::MeshDecoder::vftable;
  return param_1;
}



// FUNCTION 14517bab0 FUN_14517bab0 body=6 status=ok
// SIG undefined FUN_14517bab0(void)

undefined8 FUN_14517bab0(void)

{
  return 1;
}



// FUNCTION 14517bac0 FUN_14517bac0 body=37 status=ok
// SIG undefined FUN_14517bac0(void)

undefined8
FUN_14517bac0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  *(undefined8 *)(param_1 + 0x58) = param_5;
  FUN_14517ad00();
  return param_2;
}



// FUNCTION 14517baf0 FUN_14517baf0 body=3 status=ok
// SIG undefined FUN_14517baf0(void)

undefined8 FUN_14517baf0(void)

{
  return 0;
}



// FUNCTION 14517bb00 FUN_14517bb00 body=3 status=ok
// SIG undefined FUN_14517bb00(void)

undefined8 FUN_14517bb00(void)

{
  return 0;
}



// FUNCTION 14517bb10 FUN_14517bb10 body=3 status=ok
// SIG undefined FUN_14517bb10(void)

undefined8 FUN_14517bb10(void)

{
  return 0;
}



// FUNCTION 14517bb20 FUN_14517bb20 body=34 status=ok
// SIG undefined FUN_14517bb20(void)

bool FUN_14517bb20(longlong *param_1)

{
  char cVar1;
  
  if (param_1[0xb] != 0) {
    cVar1 = (**(code **)(*param_1 + 0x58))();
    return cVar1 != '\0';
  }
  return false;
}



// FUNCTION 14517bb50 FUN_14517bb50 body=52 status=ok
// SIG undefined FUN_14517bb50(void)

undefined8 FUN_14517bb50(undefined8 param_1,ulonglong param_2)

{
  FUN_144d7da80();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 14517bb90 FUN_14517bb90 body=236 status=ok
// SIG undefined FUN_14517bb90(void)

void FUN_14517bb90(longlong param_1)

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
      if (0x1f < (lVar1 - lVar4) - 8U) goto LAB_14517bc76;
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
LAB_14517bc76:
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



// FUNCTION 14517bc80 FUN_14517bc80 body=41 status=ok
// SIG undefined FUN_14517bc80(void)

undefined8 * FUN_14517bc80(undefined8 *param_1)

{
  FUN_14517ba80();
  *param_1 = draco::MeshEdgebreakerDecoder::vftable;
  param_1[0xc] = 0;
  return param_1;
}



// FUNCTION 14517bcb0 FUN_14517bcb0 body=11 status=ok
// SIG undefined FUN_14517bcb0(void)

void FUN_14517bcb0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014517bcb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x60) + 0x40))();
  return;
}



// FUNCTION 14517bcc0 FUN_14517bcc0 body=11 status=ok
// SIG undefined FUN_14517bcc0(void)

void FUN_14517bcc0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014517bcc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x60) + 0x10))();
  return;
}



// FUNCTION 14517bcd0 FUN_14517bcd0 body=11 status=ok
// SIG undefined FUN_14517bcd0(void)

void FUN_14517bcd0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014517bcd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x60) + 0x18))();
  return;
}



// FUNCTION 14517bce0 FUN_14517bce0 body=297 status=ok
// SIG undefined FUN_14517bce0(void)

bool FUN_14517bce0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong local_28;
  longlong local_20;
  longlong local_18 [2];
  
  plVar1 = *(longlong **)(param_1 + 0x40);
  lVar4 = plVar1[2] + 1;
  if (plVar1[1] < lVar4) {
    return false;
  }
  cVar3 = *(char *)(plVar1[2] + *plVar1);
  plVar1[2] = lVar4;
  plVar1 = (longlong *)(param_1 + 0x60);
  puVar7 = (undefined8 *)*plVar1;
  puVar5 = (undefined8 *)0x0;
  *plVar1 = 0;
  if (puVar7 != (undefined8 *)0x0) {
    (**(code **)*puVar7)(puVar7,1);
  }
  if (cVar3 == '\0') {
    lVar4 = FUN_14494321d(0x2d0);
    if (lVar4 != 0) {
      puVar5 = (undefined8 *)FUN_1453f84a0(lVar4);
    }
    plVar6 = &local_28;
  }
  else if (cVar3 == '\x01') {
    lVar4 = FUN_14494321d(0x318);
    if (lVar4 != 0) {
      puVar5 = (undefined8 *)FUN_1453fc3e0(lVar4);
    }
    plVar6 = &local_20;
  }
  else {
    if (cVar3 != '\x02') goto LAB_14517bdda;
    lVar4 = FUN_14494321d(0x338);
    if (lVar4 != 0) {
      puVar5 = (undefined8 *)FUN_145400330(lVar4);
    }
    plVar6 = local_18;
  }
  if (plVar1 == plVar6) {
    if (puVar5 == (undefined8 *)0x0) goto LAB_14517bdda;
    puVar7 = (undefined8 *)*puVar5;
  }
  else {
    puVar2 = (undefined8 *)*plVar1;
    *plVar1 = (longlong)puVar5;
    if (puVar2 == (undefined8 *)0x0) goto LAB_14517bdda;
    puVar7 = (undefined8 *)*puVar2;
    puVar5 = puVar2;
  }
  (*(code *)*puVar7)(puVar5,1);
LAB_14517bdda:
  plVar1 = (longlong *)*plVar1;
  if (plVar1 == (longlong *)0x0) {
    return false;
  }
  cVar3 = (**(code **)(*plVar1 + 8))(plVar1,param_1);
  return cVar3 != '\0';
}



// FUNCTION 14517be10 FUN_14517be10 body=11 status=ok
// SIG undefined FUN_14517be10(void)

void FUN_14517be10(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014517be17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x60) + 0x20))();
  return;
}



// FUNCTION 14517be20 FUN_14517be20 body=11 status=ok
// SIG undefined FUN_14517be20(void)

void FUN_14517be20(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014517be27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x60) + 0x28))();
  return;
}



// FUNCTION 14517be30 FUN_14517be30 body=11 status=ok
// SIG undefined FUN_14517be30(void)

void FUN_14517be30(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014517be37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x60) + 0x30))();
  return;
}



// FUNCTION 14517be40 FUN_14517be40 body=75 status=ok
// SIG undefined FUN_14517be40(void)

longlong FUN_14517be40(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x60);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_14517bb90(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 14517be90 FUN_14517be90 body=294 status=ok
// SIG undefined FUN_14517be90(void)

undefined8 FUN_14517be90(longlong param_1,int param_2,longlong *param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *_Dst;
  undefined1 local_res10 [8];
  longlong *local_res18;
  
  local_res18 = param_3;
  if (-1 < param_2) {
    plVar1 = (longlong *)(param_1 + 0x10);
    _Dst = *(longlong **)(param_1 + 0x18);
    lVar7 = *plVar1;
    uVar5 = (longlong)_Dst - lVar7 >> 3;
    if ((int)uVar5 <= param_2) {
      uVar2 = (longlong)param_2 + 1;
      if (uVar2 < uVar5) {
        plVar3 = (longlong *)(lVar7 + uVar2 * 8);
        for (plVar6 = plVar3; plVar6 != _Dst; plVar6 = plVar6 + 1) {
          puVar4 = (undefined8 *)*plVar6;
          if (puVar4 != (undefined8 *)0x0) {
            (**(code **)*puVar4)(puVar4,1);
          }
        }
        *(longlong **)(param_1 + 0x18) = plVar3;
      }
      else if (uVar5 < uVar2) {
        if ((ulonglong)(*(longlong *)(param_1 + 0x20) - lVar7 >> 3) < uVar2) {
          FUN_14517ce00(plVar1,uVar2,local_res10);
        }
        else {
          lVar7 = uVar2 - uVar5;
          if (lVar7 != 0) {
            memset(_Dst,0,lVar7 * 8);
            _Dst = _Dst + lVar7;
          }
          *(longlong **)(param_1 + 0x18) = _Dst;
        }
      }
    }
    plVar1 = (longlong *)(*plVar1 + (longlong)param_2 * 8);
    if (plVar1 != param_3) {
      lVar7 = *param_3;
      *param_3 = 0;
      puVar4 = (undefined8 *)*plVar1;
      *plVar1 = lVar7;
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
    puVar4 = (undefined8 *)*param_3;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,1);
    }
    return 1;
  }
  puVar4 = (undefined8 *)*param_3;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  return 0;
}



// FUNCTION 14517bfc0 deallocate body=66 status=ok
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



// FUNCTION 14517c010 FUN_14517c010 body=16 status=ok
// SIG undefined FUN_14517c010(void)

void FUN_14517c010(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 14517c050 deallocate body=66 status=ok
// SIG undefined deallocate(void)

/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl std::allocator<struct `protected: int __cdecl GSI1::readHash(unsigned
   short,long,long) __ptr64'::`2'::FileSymbolInfo>::deallocate(struct `protected: int __cdecl
   GSI1::readHash(unsigned short,long,long) __ptr64'::`2'::FileSymbolInfo * __ptr64 const,unsigned
   __int64) __ptr64
    public: void __cdecl std::allocator<struct GSISymbolEntry>::deallocate(struct GSISymbolEntry *
   __ptr64 const,unsigned __int64) __ptr64
   
   Library: Visual Studio 2019 Release */

void deallocate(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * 0xc;
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



// FUNCTION 14517c0a0 FUN_14517c0a0 body=114 status=ok
// SIG undefined FUN_14517c0a0(void)

ulonglong FUN_14517c0a0(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_2 < 0x1555555555555556) {
    param_2 = param_2 * 0xc;
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



// FUNCTION 14517c120 FUN_14517c120 body=175 status=ok
// SIG undefined FUN_14517c120(void)

void FUN_14517c120(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = ((param_1[2] - lVar1) / 0xc) * 0xc;
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
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 0xc;
  param_1[2] = param_2 + param_4 * 0xc;
  return;
}



// FUNCTION 14517c1d0 FUN_14517c1d0 body=16 status=ok
// SIG undefined FUN_14517c1d0(void)

void FUN_14517c1d0(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 14517c1f0 FUN_14517c1f0 body=33 status=ok
// SIG undefined FUN_14517c1f0(void)

undefined8 * FUN_14517c1f0(undefined8 *param_1)

{
  FUN_14517ba80();
  *param_1 = draco::MeshSequentialDecoder::vftable;
  return param_1;
}



// FUNCTION 14517c220 FUN_14517c220 body=1192 status=ok
// SIG undefined FUN_14517c220(void)

void FUN_14517c220(longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_58 [32];
  uint local_38;
  uint local_34;
  uint local_30 [2];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = *(longlong **)(param_1 + 0x40);
  lVar3 = plVar2[2];
  if (CONCAT11(*(undefined1 *)(param_1 + 0x48),*(undefined1 *)(param_1 + 0x49)) < 0x202) {
    if (plVar2[1] < lVar3 + 4) goto LAB_14517c3c8;
    local_38 = *(uint *)(lVar3 + *plVar2);
    plVar2[2] = plVar2[2] + 4;
    plVar2 = *(longlong **)(param_1 + 0x40);
    if (plVar2[1] < plVar2[2] + 4) goto LAB_14517c3c8;
    local_34 = *(uint *)(plVar2[2] + *plVar2);
    plVar2[2] = plVar2[2] + 4;
    uVar7 = (ulonglong)local_34;
  }
  else {
    if (plVar2[1] < lVar3 + 1) goto LAB_14517c3c8;
    bVar1 = *(byte *)(lVar3 + *plVar2);
    uVar6 = (uint)bVar1;
    plVar2[2] = lVar3 + 1;
    if ((char)bVar1 < '\0') {
      cVar5 = FUN_14517ccc0(2,&local_38);
      if (cVar5 == '\0') goto LAB_14517c3c8;
      local_38 = uVar6 & 0x7f | local_38 << 7;
    }
    else {
      local_38 = (uint)bVar1;
    }
    plVar2 = *(longlong **)(param_1 + 0x40);
    lVar3 = plVar2[2] + 1;
    if (plVar2[1] < lVar3) goto LAB_14517c3c8;
    bVar1 = *(byte *)(plVar2[2] + *plVar2);
    uVar7 = (ulonglong)bVar1;
    uVar6 = (uint)bVar1;
    plVar2[2] = lVar3;
    if ((char)bVar1 < '\0') {
      cVar5 = FUN_14517ccc0(2,&local_34);
      if (cVar5 == '\0') goto LAB_14517c3c8;
      uVar7 = (ulonglong)(uVar6 & 0x7f | local_34 << 7);
    }
    local_34 = (uint)uVar7;
  }
  uVar8 = (ulonglong)local_38;
  if (uVar8 < 0x55555556) {
    plVar2 = *(longlong **)(param_1 + 0x40);
    lVar3 = plVar2[2];
    if (((uVar8 <= (ulonglong)((plVar2[1] - lVar3) / 3)) && (uVar7 <= uVar8 * 3)) &&
       (lVar3 + 1 <= plVar2[1])) {
      cVar5 = *(char *)(lVar3 + *plVar2);
      plVar2[2] = lVar3 + 1;
      if (cVar5 == '\0') {
        cVar5 = FUN_14517c7c0(param_1,local_38);
        if (cVar5 == '\0') goto LAB_14517c3c8;
      }
      else if (local_34 < 0x100) {
        uVar7 = 0;
        if (local_38 != 0) {
          do {
            local_28 = 0;
            local_20 = 0;
            uVar8 = 0;
            do {
              plVar2 = *(longlong **)(param_1 + 0x40);
              lVar3 = plVar2[2] + 1;
              if (plVar2[1] < lVar3) goto LAB_14517c3c8;
              *(uint *)((longlong)&local_28 + uVar8 * 4) = (uint)*(byte *)(plVar2[2] + *plVar2);
              uVar8 = uVar8 + 1;
              plVar2[2] = lVar3;
            } while ((longlong)uVar8 < 3);
            lVar3 = *(longlong *)(param_1 + 0x58);
            puVar4 = *(undefined8 **)(lVar3 + 200);
            if (puVar4 == *(undefined8 **)(lVar3 + 0xd0)) {
              FUN_14517d000(lVar3 + 0xc0,puVar4,&local_28);
            }
            else {
              *puVar4 = local_28;
              *(undefined4 *)(puVar4 + 1) = local_20;
              *(longlong *)(lVar3 + 200) = *(longlong *)(lVar3 + 200) + 0xc;
            }
            uVar6 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar6;
          } while (uVar6 < local_38);
          *(uint *)(*(longlong *)(param_1 + 8) + 0xa0) = local_34;
          goto LAB_14517c3c8;
        }
      }
      else if (local_34 < 0x10000) {
        uVar7 = 0;
        if (local_38 != 0) {
          do {
            local_28 = 0;
            local_20 = 0;
            uVar8 = 0;
            do {
              plVar2 = *(longlong **)(param_1 + 0x40);
              lVar3 = plVar2[2] + 2;
              if (plVar2[1] < lVar3) goto LAB_14517c3c8;
              *(uint *)((longlong)&local_28 + uVar8 * 4) = (uint)*(ushort *)(plVar2[2] + *plVar2);
              uVar8 = uVar8 + 1;
              plVar2[2] = lVar3;
            } while ((longlong)uVar8 < 3);
            lVar3 = *(longlong *)(param_1 + 0x58);
            puVar4 = *(undefined8 **)(lVar3 + 200);
            if (puVar4 == *(undefined8 **)(lVar3 + 0xd0)) {
              FUN_14517d000(lVar3 + 0xc0,puVar4,&local_28);
            }
            else {
              *puVar4 = local_28;
              *(undefined4 *)(puVar4 + 1) = local_20;
              *(longlong *)(lVar3 + 200) = *(longlong *)(lVar3 + 200) + 0xc;
            }
            uVar6 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar6;
          } while (uVar6 < local_38);
          *(uint *)(*(longlong *)(param_1 + 8) + 0xa0) = local_34;
          goto LAB_14517c3c8;
        }
      }
      else if ((local_34 < 0x200000) &&
              (0x201 < CONCAT11(*(undefined1 *)(param_1 + 0x48),*(undefined1 *)(param_1 + 0x49)))) {
        uVar7 = 0;
        if (local_38 != 0) {
          do {
            local_28 = 0;
            local_20 = 0;
            uVar8 = 0;
            do {
              plVar2 = *(longlong **)(param_1 + 0x40);
              lVar3 = plVar2[2] + 1;
              if (plVar2[1] < lVar3) goto LAB_14517c3c8;
              bVar1 = *(byte *)(plVar2[2] + *plVar2);
              uVar6 = (uint)bVar1;
              plVar2[2] = lVar3;
              if ((char)bVar1 < '\0') {
                cVar5 = FUN_14517ccc0(2,local_30);
                if (cVar5 == '\0') goto LAB_14517c3c8;
                local_30[0] = uVar6 & 0x7f | local_30[0] << 7;
              }
              else {
                local_30[0] = (uint)bVar1;
              }
              *(uint *)((longlong)&local_28 + uVar8 * 4) = local_30[0];
              uVar8 = uVar8 + 1;
            } while ((longlong)uVar8 < 3);
            lVar3 = *(longlong *)(param_1 + 0x58);
            puVar4 = *(undefined8 **)(lVar3 + 200);
            if (puVar4 == *(undefined8 **)(lVar3 + 0xd0)) {
              FUN_14517d000(lVar3 + 0xc0,puVar4,&local_28);
            }
            else {
              *puVar4 = local_28;
              *(undefined4 *)(puVar4 + 1) = local_20;
              *(longlong *)(lVar3 + 200) = *(longlong *)(lVar3 + 200) + 0xc;
            }
            uVar6 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar6;
          } while (uVar6 < local_38);
          *(uint *)(*(longlong *)(param_1 + 8) + 0xa0) = local_34;
          goto LAB_14517c3c8;
        }
      }
      else {
        uVar7 = 0;
        if (local_38 != 0) {
          do {
            local_28 = 0;
            local_20 = 0;
            uVar8 = 0;
            do {
              plVar2 = *(longlong **)(param_1 + 0x40);
              lVar3 = plVar2[2] + 4;
              if (plVar2[1] < lVar3) goto LAB_14517c3c8;
              *(undefined4 *)((longlong)&local_28 + uVar8 * 4) =
                   *(undefined4 *)(plVar2[2] + *plVar2);
              uVar8 = uVar8 + 1;
              plVar2[2] = lVar3;
            } while ((longlong)uVar8 < 3);
            lVar3 = *(longlong *)(param_1 + 0x58);
            puVar4 = *(undefined8 **)(lVar3 + 200);
            if (puVar4 == *(undefined8 **)(lVar3 + 0xd0)) {
              FUN_14517d000(lVar3 + 0xc0,puVar4,&local_28);
            }
            else {
              *puVar4 = local_28;
              *(undefined4 *)(puVar4 + 1) = local_20;
              *(longlong *)(lVar3 + 200) = *(longlong *)(lVar3 + 200) + 0xc;
            }
            uVar6 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar6;
          } while (uVar6 < local_38);
        }
      }
      *(uint *)(*(longlong *)(param_1 + 8) + 0xa0) = local_34;
    }
  }
LAB_14517c3c8:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 14517c6e0 FUN_14517c6e0 body=220 status=ok
// SIG undefined FUN_14517c6e0(void)

ulonglong FUN_14517c6e0(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined8 *local_res20;
  undefined8 local_38;
  undefined8 *local_30;
  longlong local_28;
  
  bVar5 = false;
  lVar2 = FUN_14494321d(0x80);
  if (lVar2 == 0) {
    local_38 = 0;
    puVar4 = local_30;
  }
  else {
    local_28 = lVar2;
    local_res20 = (undefined8 *)FUN_14494321d(0x18);
    if (local_res20 != (undefined8 *)0x0) {
      uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xa0);
      local_res20[1] = 0;
      *local_res20 = draco::LinearSequencer::vftable;
      *(undefined4 *)(local_res20 + 2) = uVar1;
    }
    bVar5 = true;
    local_30 = (undefined8 *)0x0;
    local_38 = FUN_145409b70(lVar2,&local_res20);
    puVar4 = (undefined8 *)0x0;
  }
  local_28 = 0;
  uVar3 = FUN_14517be90(param_1,param_2,&local_38);
  if ((bVar5) && (puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)(puVar4,1);
    uVar3 = uVar3 & 0xff;
  }
  return uVar3;
}



// FUNCTION 14517c7c0 FUN_14517c7c0 body=441 status=ok
// SIG undefined FUN_14517c7c0(void)

void FUN_14517c7c0(longlong param_1,uint param_2)

{
  ulonglong _Size;
  undefined8 *puVar1;
  void *pvVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  void *pvVar6;
  void *pvVar7;
  uint uVar8;
  void *pvVar9;
  void *_Dst;
  void *pvVar10;
  void *pvVar11;
  ulonglong uVar12;
  undefined1 auStack_88 [32];
  void *local_68;
  void *pvStack_60;
  void *local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar12 = (ulonglong)(param_2 * 3);
  local_68 = (void *)0x0;
  pvStack_60 = (void *)0x0;
  pvVar10 = (void *)0x0;
  local_58 = (void *)0x0;
  if (param_2 * 3 == 0) {
    _Dst = (void *)0x0;
  }
  else {
    _Size = uVar12 * 4;
    if (_Size < 0x1000) {
      _Dst = pvVar10;
      if (uVar12 != 0) {
        _Dst = (void *)FUN_14494321d(_Size);
      }
    }
    else {
      if (_Size + 0x27 <= _Size) {
                    /* WARNING: Subroutine does not return */
        FUN_14694ac37();
      }
      lVar5 = FUN_14494321d();
      if (lVar5 == 0) goto LAB_14517c953;
      _Dst = (void *)(lVar5 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)_Dst - 8) = lVar5;
    }
    local_68 = _Dst;
    local_58 = (void *)(_Size + (longlong)_Dst);
    memset(_Dst,0,_Size);
    pvStack_60 = (void *)(_Size + (longlong)_Dst);
  }
  pvVar2 = pvStack_60;
  cVar3 = FUN_14540a820(uVar12,1,*(undefined8 *)(param_1 + 0x40),_Dst);
  if ((cVar3 != '\0') && (pvVar7 = pvVar10, pvVar9 = pvVar10, pvVar11 = pvVar10, param_2 != 0)) {
    do {
      local_50 = 0;
      local_48 = 0;
      pvVar6 = pvVar10;
      do {
        uVar8 = *(uint *)((longlong)_Dst + (longlong)pvVar11 * 4);
        pvVar11 = (void *)((longlong)pvVar11 + 1);
        uVar4 = uVar8 >> 1;
        if ((uVar8 & 1) != 0) {
          uVar4 = -uVar4;
        }
        uVar4 = (int)pvVar7 + uVar4;
        pvVar7 = (void *)(ulonglong)uVar4;
        if ((int)uVar4 < 0) goto LAB_14517c926;
        *(uint *)((longlong)&local_50 + (longlong)pvVar6 * 4) = uVar4;
        pvVar6 = (void *)((longlong)pvVar6 + 1);
      } while ((longlong)pvVar6 < 3);
      lVar5 = *(longlong *)(param_1 + 0x58);
      puVar1 = *(undefined8 **)(lVar5 + 200);
      if (puVar1 == *(undefined8 **)(lVar5 + 0xd0)) {
        FUN_14517d000(lVar5 + 0xc0,puVar1,&local_50);
      }
      else {
        *puVar1 = local_50;
        *(undefined4 *)(puVar1 + 1) = local_48;
        *(longlong *)(lVar5 + 200) = *(longlong *)(lVar5 + 200) + 0xc;
      }
      uVar8 = (int)pvVar9 + 1;
      pvVar9 = (void *)(ulonglong)uVar8;
    } while (uVar8 < param_2);
  }
LAB_14517c926:
  if (_Dst != (void *)0x0) {
    uVar12 = (longlong)pvVar2 - (longlong)_Dst & 0xfffffffffffffffc;
    pvVar10 = _Dst;
    if (0xfff < uVar12) {
      uVar12 = uVar12 + 0x27;
      pvVar10 = *(void **)((longlong)_Dst + -8);
      if (0x1f < (ulonglong)((longlong)_Dst + (-8 - (longlong)pvVar10))) {
LAB_14517c953:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(pvVar10,uVar12);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
}



// FUNCTION 14517c9a0 FUN_14517c9a0 body=52 status=ok
// SIG undefined FUN_14517c9a0(void)

undefined8 FUN_14517c9a0(undefined8 param_1,ulonglong param_2)

{
  FUN_14517bb90();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 14517c9e0 _Change_array body=135 status=ok
// SIG void _Change_array(vector<unsigned___int64,std::allocator<unsigned___int64>_> * this, __uint64 * param_1, __uint64 param_2, __uint64 param_3)

/* Library Function - Single Match
    private: void __cdecl std::vector<unsigned __int64,class std::allocator<unsigned __int64>
   >::_Change_array(unsigned __int64 * __ptr64 const,unsigned __int64,unsigned __int64) __ptr64
   
   Library: Visual Studio 2019 Release */

void __thiscall
std::vector<unsigned___int64,std::allocator<unsigned___int64>_>::_Change_array
          (vector<unsigned___int64,std::allocator<unsigned___int64>_> *this,__uint64 *param_1,
          __uint64 param_2,__uint64 param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)this;
  if (lVar1 != 0) {
    uVar3 = *(longlong *)(this + 0x10) - lVar1 & 0xfffffffffffffffc;
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
  }
  *(__uint64 **)this = param_1;
  *(__uint64 *)(this + 8) = (longlong)param_1 + param_2 * 4;
  *(__uint64 *)(this + 0x10) = (longlong)param_1 + param_3 * 4;
  return;
}



// FUNCTION 14517ca70 FUN_14517ca70 body=16 status=ok
// SIG undefined FUN_14517ca70(void)

void FUN_14517ca70(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xout_of_range("invalid vector subscript");
}



// FUNCTION 14517ca90 FUN_14517ca90 body=21 status=ok
// SIG undefined FUN_14517ca90(void)

undefined8 FUN_14517ca90(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  *(undefined1 *)(param_2 + 100) = 1;
  lVar1 = *(longlong *)(param_2 + 0x48);
  if (lVar1 != *(longlong *)(param_2 + 0x50)) {
    *(longlong *)(param_2 + 0x50) = lVar1;
  }
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}



// FUNCTION 14517cab0 FUN_14517cab0 body=227 status=ok
// SIG undefined FUN_14517cab0(void)

undefined8 FUN_14517cab0(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  void *_Dst;
  undefined1 local_res8 [8];
  
  uVar3 = (ulonglong)*(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x10) < 0) {
    return 0;
  }
  plVar1 = *(longlong **)(param_1 + 8);
  _Dst = (void *)plVar1[1];
  lVar7 = *plVar1;
  uVar5 = (longlong)_Dst - lVar7 >> 2;
  if (uVar3 < uVar5) {
    plVar1[1] = lVar7 + uVar3 * 4;
  }
  else if (uVar5 < uVar3) {
    if ((ulonglong)(plVar1[2] - lVar7 >> 2) < uVar3) {
      FUN_14517cd40(plVar1,uVar3,local_res8);
    }
    else {
      lVar7 = uVar3 - uVar5;
      if (lVar7 != 0) {
        memset(_Dst,0,lVar7 * 4);
        _Dst = (void *)((longlong)_Dst + lVar7 * 4);
      }
      plVar1[1] = (longlong)_Dst;
    }
  }
  uVar5 = 0;
  uVar3 = uVar5;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      lVar7 = **(longlong **)(param_1 + 8);
      if ((ulonglong)((*(longlong **)(param_1 + 8))[1] - lVar7 >> 2) <= uVar3) {
        FUN_14517ca70();
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return uVar4;
      }
      *(int *)(lVar7 + uVar3 * 4) = (int)uVar5;
      uVar6 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar6;
      uVar3 = uVar3 + 1;
    } while ((int)uVar6 < *(int *)(param_1 + 0x10));
  }
  return 1;
}



// FUNCTION 14517cba0 FUN_14517cba0 body=33 status=ok
// SIG undefined FUN_14517cba0(void)

undefined8 FUN_14517cba0(undefined8 param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14517cbd0 FUN_14517cbd0 body=20 status=ok
// SIG undefined FUN_14517cbd0(void)

void FUN_14517cbd0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014517cbe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 14517cbf0 FUN_14517cbf0 body=102 status=ok
// SIG undefined FUN_14517cbf0(void)

ulonglong FUN_14517cbf0(uint *param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong in_RAX;
  uint uVar5;
  
  lVar1 = param_2[2] + 1;
  if (lVar1 <= param_2[1]) {
    lVar4 = *param_2;
    bVar2 = *(byte *)(param_2[2] + lVar4);
    uVar5 = (uint)bVar2;
    param_2[2] = lVar1;
    if (-1 < (char)bVar2) {
      *param_1 = (uint)bVar2;
      return CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
    }
    in_RAX = FUN_14517ccc0(2,param_1,param_2);
    if ((char)in_RAX != '\0') {
      uVar3 = *param_1;
      *param_1 = uVar5 & 0x7f | uVar3 << 7;
      return CONCAT71((uint7)(uint3)((uVar3 << 7) >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14517cc80 FUN_14517cc80 body=59 status=ok
// SIG undefined FUN_14517cc80(void)

void FUN_14517cc80(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  return;
}



// FUNCTION 14517ccc0 FUN_14517ccc0 body=119 status=ok
// SIG undefined FUN_14517ccc0(void)

ulonglong FUN_14517ccc0(uint param_1,uint *param_2,longlong *param_3)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong in_RAX;
  
  if (param_1 < 6) {
    lVar1 = param_3[2] + 1;
    if (lVar1 <= param_3[1]) {
      lVar4 = *param_3;
      bVar2 = *(byte *)(param_3[2] + lVar4);
      param_3[2] = lVar1;
      if (-1 < (char)bVar2) {
        *param_2 = (uint)bVar2;
        return CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
      }
      in_RAX = FUN_14517ccc0(param_1 + 1,param_2);
      if ((char)in_RAX != '\0') {
        uVar3 = *param_2;
        *param_2 = bVar2 & 0x7f | uVar3 << 7;
        return CONCAT71((uint7)(uint3)((uVar3 << 7) >> 8),1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14517cd40 FUN_14517cd40 body=190 status=ok
// SIG undefined FUN_14517cd40(void)

void FUN_14517cd40(vector<unsigned___int64,std::allocator<unsigned___int64>_> *param_1,
                  ulonglong param_2)

{
  __uint64 *_Dst;
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 < 0x4000000000000000) {
    lVar4 = *(longlong *)(param_1 + 8) - *(longlong *)param_1 >> 2;
    uVar1 = *(longlong *)(param_1 + 0x10) - *(longlong *)param_1 >> 2;
    uVar2 = 0x3fffffffffffffff;
    if ((uVar1 <= 0x3fffffffffffffff - (uVar1 >> 1)) &&
       (uVar2 = (uVar1 >> 1) + uVar1, uVar2 < param_2)) {
      uVar2 = param_2;
    }
    _Dst = (__uint64 *)FUN_144d7f5e0(param_1);
    lVar3 = param_2 - lVar4;
    if (lVar3 != 0) {
      memset((void *)((longlong)_Dst + lVar4 * 4),0,lVar3 * 4);
    }
    memmove(_Dst,*(void **)param_1,*(longlong *)(param_1 + 8) - (longlong)*(void **)param_1);
    std::vector<unsigned___int64,std::allocator<unsigned___int64>_>::_Change_array
              (param_1,_Dst,param_2,uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d7f6b0();
}



// FUNCTION 14517ce00 FUN_14517ce00 body=498 status=ok
// SIG undefined FUN_14517ce00(void)

void FUN_14517ce00(longlong *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  code *pcVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  
  if (0x1fffffffffffffff < param_2) {
    FUN_14517c010();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar12 = param_1[1] - *param_1 >> 3;
  uVar7 = param_1[2] - *param_1 >> 3;
  if ((0x1fffffffffffffff - (uVar7 >> 1) < uVar7) ||
     ((uVar7 = (uVar7 >> 1) + uVar7, uVar9 = param_2, param_2 <= uVar7 &&
      (uVar9 = uVar7, 0x1fffffffffffffff < uVar7)))) {
LAB_14517cfe8:
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
    if (uVar7 + 0x27 <= uVar7) goto LAB_14517cfe8;
    lVar6 = FUN_14494321d();
    if (lVar6 == 0) goto LAB_14517cfe1;
    puVar11 = (undefined8 *)(lVar6 + 0x27U & 0xffffffffffffffe0);
    puVar11[-1] = lVar6;
  }
  lVar6 = param_2 - lVar12;
  if (lVar6 != 0) {
    memset(puVar11 + lVar12,0,lVar6 * 8);
  }
  puVar1 = (undefined8 *)param_1[1];
  puVar4 = puVar11;
  for (puVar8 = (undefined8 *)*param_1; puVar8 != puVar1; puVar8 = puVar8 + 1) {
    uVar2 = *puVar8;
    *puVar8 = 0;
    *puVar4 = uVar2;
    puVar4 = puVar4 + 1;
  }
  plVar10 = (longlong *)*param_1;
  if (plVar10 != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[1];
    for (; plVar10 != plVar3; plVar10 = plVar10 + 1) {
      puVar4 = (undefined8 *)*plVar10;
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
    lVar12 = *param_1;
    uVar7 = param_1[2] - lVar12 & 0xfffffffffffffff8;
    lVar6 = lVar12;
    if (0xfff < uVar7) {
      uVar7 = uVar7 + 0x27;
      lVar6 = *(longlong *)(lVar12 + -8);
      if (0x1f < (lVar12 - lVar6) - 8U) {
LAB_14517cfe1:
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



// FUNCTION 14517d000 FUN_14517d000 body=317 status=ok
// SIG undefined FUN_14517d000(void)

undefined8 * FUN_14517d000(longlong *param_1,void *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  void *_Src;
  code *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  void *_Dst;
  undefined8 *puVar6;
  void *_Dst_00;
  longlong lVar7;
  ulonglong uVar8;
  size_t _Size;
  
  lVar2 = *param_1;
  lVar7 = ((longlong)param_2 - lVar2) / 6 + ((longlong)param_2 - lVar2 >> 0x3f);
  lVar4 = (param_1[1] - lVar2) / 0xc;
  if (lVar4 != 0x1555555555555555) {
    uVar1 = lVar4 + 1;
    uVar5 = (param_1[2] - lVar2) / 0xc;
    uVar8 = 0x1555555555555555;
    if ((uVar5 <= 0x1555555555555555 - (uVar5 >> 1)) &&
       (uVar8 = (uVar5 >> 1) + uVar5, uVar8 < uVar1)) {
      uVar8 = uVar1;
    }
    _Dst = (void *)FUN_14517c0a0(param_1,uVar8);
    puVar6 = (undefined8 *)((longlong)_Dst + ((lVar7 >> 1) - (lVar7 >> 0x3f)) * 0xc);
    *puVar6 = *param_3;
    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_3 + 1);
    _Src = (void *)*param_1;
    if (param_2 == (void *)param_1[1]) {
      _Size = param_1[1] - (longlong)_Src;
      _Dst_00 = _Dst;
      param_2 = _Src;
    }
    else {
      memmove(_Dst,_Src,(longlong)param_2 - (longlong)_Src);
      _Dst_00 = (void *)((longlong)puVar6 + 0xc);
      _Size = param_1[1] - (longlong)param_2;
    }
    memmove(_Dst_00,param_2,_Size);
    FUN_14517c120(param_1,_Dst,uVar1,uVar8);
    return puVar6;
  }
  FUN_14517c1d0();
  pcVar3 = (code *)swi(3);
  puVar6 = (undefined8 *)(*pcVar3)();
  return puVar6;
}



// FUNCTION 14517d140 `eh_vector_constructor_iterator' body=112 status=ok
// SIG void `eh_vector_constructor_iterator'(void * param_1, __uint64 param_2, __uint64 param_3, _func_void_void_ptr * param_4, _func_void_void_ptr * param_5)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Single Match
    void __cdecl `eh vector constructor iterator'(void * __ptr64,unsigned __int64,unsigned
   __int64,void (__cdecl*)(void * __ptr64),void (__cdecl*)(void * __ptr64))
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl
_eh_vector_constructor_iterator_
          (void *param_1,__uint64 param_2,__uint64 param_3,_func_void_void_ptr *param_4,
          _func_void_void_ptr *param_5)

{
  __uint64 _Var1;
  
  for (_Var1 = 0; _Var1 != param_3; _Var1 = _Var1 + 1) {
    (*param_4)(param_1);
    param_1 = (void *)((longlong)param_1 + param_2);
  }
  return;
}



// FUNCTION 14517d1b0 `eh_vector_destructor_iterator' body=107 status=ok
// SIG void `eh_vector_destructor_iterator'(void * param_1, __uint64 param_2, __uint64 param_3, _func_void_void_ptr * param_4)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Single Match
    void __cdecl `eh vector destructor iterator'(void * __ptr64,unsigned __int64,unsigned
   __int64,void (__cdecl*)(void * __ptr64))
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl
_eh_vector_destructor_iterator_
          (void *param_1,__uint64 param_2,__uint64 param_3,_func_void_void_ptr *param_4)

{
  void *pvVar1;
  
  pvVar1 = (void *)(param_2 * param_3 + (longlong)param_1);
  while( true ) {
    if (param_3 == 0) break;
    pvVar1 = (void *)((longlong)pvVar1 - param_2);
    (*param_4)(pvVar1);
    param_3 = param_3 - 1;
  }
  return;
}



// FUNCTION 14517d21c __ArrayUnwind body=97 status=ok
// SIG void __ArrayUnwind(void * param_1, __uint64 param_2, __uint64 param_3, _func_void_void_ptr * param_4)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Single Match
    void __cdecl __ArrayUnwind(void * __ptr64,unsigned __int64,unsigned __int64,void (__cdecl*)(void
   * __ptr64))
   
   Library: Visual Studio 2019 Release */

void __cdecl
__ArrayUnwind(void *param_1,__uint64 param_2,__uint64 param_3,_func_void_void_ptr *param_4)

{
  __uint64 _Var1;
  
  for (_Var1 = 0; _Var1 != param_3; _Var1 = _Var1 + 1) {
    param_1 = (void *)((longlong)param_1 - param_2);
    (*param_4)(param_1);
  }
  return;
}



// FUNCTION 14517d280 FUN_14517d280 body=62 status=ok
// SIG undefined FUN_14517d280(void)

undefined8 * FUN_14517d280(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((longlong)param_1 + 100) = 0;
  param_1[0xd] = 0;
  return param_1;
}



// FUNCTION 14517d2c0 FUN_14517d2c0 body=643 status=ok
// SIG undefined FUN_14517d2c0(void)

void FUN_14517d2c0(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  size_t _Size;
  void *_Dst;
  longlong *local_res8;
  undefined1 local_38 [16];
  
  plVar10 = (longlong *)0x0;
  if (*(longlong *)(param_1 + 0x40) == 0) {
    local_res8 = (longlong *)FUN_14494321d(0x28);
    plVar6 = plVar10;
    if (local_res8 != (longlong *)0x0) {
      plVar6 = (longlong *)FUN_1454115b0(local_res8);
    }
    local_res8 = plVar6;
    FUN_14517d9b0(param_1 + 0x40,&local_res8);
    plVar6 = local_res8;
    if (local_res8 != (longlong *)0x0) {
      lVar7 = *local_res8;
      if (lVar7 != 0) {
        uVar9 = local_res8[2] - lVar7;
        lVar8 = lVar7;
        if (0xfff < uVar9) {
          uVar9 = uVar9 + 0x27;
          lVar8 = *(longlong *)(lVar7 + -8);
          if (0x1f < (lVar7 - lVar8) - 8U) goto LAB_14517d512;
        }
        thunk_FUN_1400020a8(lVar8,uVar9);
        *plVar6 = 0;
        plVar6[1] = 0;
        plVar6[2] = 0;
      }
      thunk_FUN_1400020a8(plVar6,0x28);
    }
    FUN_145411770(param_1,*(undefined8 *)(param_1 + 0x40),0,0);
  }
  cVar5 = FUN_1454116f0(param_1,param_2);
  if (cVar5 != '\0') {
    *(undefined1 *)(param_1 + 100) = *(undefined1 *)(param_2 + 100);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
    if ((longlong *)(param_1 + 0x48) != (longlong *)(param_2 + 0x48)) {
      lVar7 = *(longlong *)(param_2 + 0x48);
      FUN_14517da50((longlong *)(param_1 + 0x48),lVar7,*(longlong *)(param_2 + 0x50) - lVar7 >> 2);
    }
    if (*(longlong *)(param_2 + 0x68) == 0) {
      plVar10 = (longlong *)0x0;
    }
    else {
      plVar6 = (longlong *)FUN_14494321d(0x30);
      local_res8 = plVar6;
      if (plVar6 != (longlong *)0x0) {
        puVar1 = *(undefined4 **)(param_2 + 0x68);
        *(undefined4 *)plVar6 = *puVar1;
        plVar6[1] = 0;
        plVar6[2] = 0;
        plVar6[3] = 0;
        uVar9 = *(longlong *)(puVar1 + 4) - *(longlong *)(puVar1 + 2);
        if (uVar9 != 0) {
          if (0x7fffffffffffffff < uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_1470a8b12();
          }
          if (uVar9 < 0x1000) {
            _Dst = (void *)FUN_14494321d(uVar9);
          }
          else {
            if (uVar9 + 0x27 <= uVar9) {
                    /* WARNING: Subroutine does not return */
              FUN_14694ac37();
            }
            lVar7 = FUN_14494321d();
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            _Dst = (void *)(lVar7 + 0x27U & 0xffffffffffffffe0);
            *(longlong *)((longlong)_Dst - 8) = lVar7;
          }
          plVar6[1] = (longlong)_Dst;
          plVar6[2] = (longlong)_Dst;
          plVar6[3] = (longlong)_Dst + uVar9;
          _Size = *(longlong *)(puVar1 + 4) - (longlong)*(void **)(puVar1 + 2);
          memmove(_Dst,*(void **)(puVar1 + 2),_Size);
          plVar6[2] = _Size + (longlong)_Dst;
        }
        uVar2 = puVar1[9];
        uVar3 = puVar1[10];
        uVar4 = puVar1[0xb];
        *(undefined4 *)(plVar6 + 4) = puVar1[8];
        *(undefined4 *)((longlong)plVar6 + 0x24) = uVar2;
        *(undefined4 *)(plVar6 + 5) = uVar3;
        *(undefined4 *)((longlong)plVar6 + 0x2c) = uVar4;
        plVar10 = plVar6;
      }
      if ((undefined1 *)(param_1 + 0x68) == local_38) {
        if (plVar10 == (longlong *)0x0) {
          return;
        }
        lVar7 = plVar10[1];
        if (lVar7 != 0) {
          uVar9 = plVar10[3] - lVar7;
          lVar8 = lVar7;
          if (0xfff < uVar9) {
            uVar9 = uVar9 + 0x27;
            lVar8 = *(longlong *)(lVar7 + -8);
            if (0x1f < (lVar7 - lVar8) - 8U) {
LAB_14517d512:
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          thunk_FUN_1400020a8(lVar8,uVar9);
          plVar10[1] = 0;
          plVar10[2] = 0;
          plVar10[3] = 0;
        }
        thunk_FUN_1400020a8(plVar10,0x30);
        return;
      }
    }
    FUN_14517d930(param_1 + 0x68,plVar10);
  }
  return;
}



// FUNCTION 14517d550 FUN_14517d550 body=278 status=ok
// SIG undefined FUN_14517d550(void)

bool FUN_14517d550(longlong param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *local_res8;
  
  if (*(longlong *)(param_1 + 0x40) == 0) {
    local_res8 = (longlong *)FUN_14494321d(0x28);
    plVar4 = (longlong *)0x0;
    if (local_res8 != (longlong *)0x0) {
      plVar4 = (longlong *)FUN_1454115b0(local_res8);
    }
    local_res8 = plVar4;
    FUN_14517d9b0(param_1 + 0x40,&local_res8);
    plVar4 = local_res8;
    if (local_res8 != (longlong *)0x0) {
      lVar7 = *local_res8;
      if (lVar7 != 0) {
        uVar6 = local_res8[2] - lVar7;
        lVar5 = lVar7;
        if (0xfff < uVar6) {
          uVar6 = uVar6 + 0x27;
          lVar5 = *(longlong *)(lVar7 + -8);
          if (0x1f < (lVar7 - lVar5) - 8U) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        thunk_FUN_1400020a8(lVar5,uVar6);
        *plVar4 = 0;
        plVar4[1] = 0;
        plVar4[2] = 0;
      }
      thunk_FUN_1400020a8(plVar4,0x28);
    }
  }
  bVar1 = *(byte *)(param_1 + 0x18);
  iVar3 = FUN_145411540(*(undefined4 *)(param_1 + 0x1c));
  lVar7 = (longlong)(int)(iVar3 * (uint)bVar1);
  cVar2 = FUN_1454115d0(*(undefined8 *)(param_1 + 0x40),0,lVar7 * param_2);
  if (cVar2 != '\0') {
    FUN_145411770(param_1,*(undefined8 *)(param_1 + 0x40),lVar7,0);
    *(int *)(param_1 + 0x60) = (int)param_2;
  }
  return cVar2 != '\0';
}



// FUNCTION 14517d670 FUN_14517d670 body=8 status=ok
// SIG undefined FUN_14517d670(void)

void FUN_14517d670(undefined8 param_1,undefined8 param_2)

{
  FUN_14517d680(param_1,param_2,0);
  return;
}



// FUNCTION 14517d680 FUN_14517d680 body=523 status=ok
// SIG undefined FUN_14517d680(void)

undefined8 FUN_14517d680(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  switch(*(undefined4 *)(param_2 + 0x1c)) {
  case 1:
    cVar1 = *(char *)(param_2 + 0x18);
    if (cVar1 == '\x01') {
      uVar2 = FUN_14517ea20();
    }
    else if (cVar1 == '\x02') {
      uVar2 = FUN_14517ed20();
    }
    else if (cVar1 == '\x03') {
      uVar2 = FUN_14517f050();
    }
    else {
      if (cVar1 != '\x04') goto switchD_14517d6a6_caseD_7;
      uVar2 = FUN_14517f3d0();
    }
    break;
  case 2:
  case 0xb:
    cVar1 = *(char *)(param_2 + 0x18);
    if (cVar1 == '\x01') {
      uVar2 = FUN_14517f6f0();
    }
    else if (cVar1 == '\x02') {
      uVar2 = FUN_14517f9f0();
    }
    else if (cVar1 == '\x03') {
      uVar2 = FUN_14517fd20();
    }
    else {
      if (cVar1 != '\x04') goto switchD_14517d6a6_caseD_7;
      uVar2 = FUN_1451800a0();
    }
    break;
  case 3:
    cVar1 = *(char *)(param_2 + 0x18);
    if (cVar1 == '\x01') {
      uVar2 = FUN_145181100();
    }
    else if (cVar1 == '\x02') {
      uVar2 = FUN_145181430();
    }
    else if (cVar1 == '\x03') {
      uVar2 = FUN_145181770();
    }
    else {
      if (cVar1 != '\x04') goto switchD_14517d6a6_caseD_7;
      uVar2 = FUN_145181b00();
    }
    break;
  case 4:
    cVar1 = *(char *)(param_2 + 0x18);
    if (cVar1 == '\x01') {
      uVar2 = FUN_1451803c0();
    }
    else if (cVar1 == '\x02') {
      uVar2 = FUN_1451806f0();
    }
    else if (cVar1 == '\x03') {
      uVar2 = FUN_145180a30();
    }
    else {
      if (cVar1 != '\x04') goto switchD_14517d6a6_caseD_7;
      uVar2 = FUN_145180dc0();
    }
    break;
  case 5:
    cVar1 = *(char *)(param_2 + 0x18);
    if (cVar1 == '\x01') {
      uVar2 = FUN_145182c40();
    }
    else if (cVar1 == '\x02') {
      uVar2 = FUN_145182f90();
    }
    else if (cVar1 == '\x03') {
      uVar2 = FUN_1451832f0();
    }
    else {
      if (cVar1 != '\x04') goto switchD_14517d6a6_caseD_7;
      uVar2 = FUN_1451836a0();
    }
    break;
  case 6:
    cVar1 = *(char *)(param_2 + 0x18);
    if (cVar1 == '\x01') {
      uVar2 = FUN_145181e40();
    }
    else if (cVar1 == '\x02') {
      uVar2 = FUN_145182190();
    }
    else if (cVar1 == '\x03') {
      uVar2 = FUN_1451824f0();
    }
    else {
      if (cVar1 != '\x04') goto switchD_14517d6a6_caseD_7;
      uVar2 = FUN_1451828a0();
    }
    break;
  default:
    goto switchD_14517d6a6_caseD_7;
  case 9:
    cVar1 = *(char *)(param_2 + 0x18);
    if (cVar1 == '\x01') {
      uVar2 = FUN_14517dc00();
    }
    else if (cVar1 == '\x02') {
      uVar2 = FUN_14517df50();
    }
    else if (cVar1 == '\x03') {
      uVar2 = FUN_14517e2d0();
    }
    else {
      if (cVar1 != '\x04') goto switchD_14517d6a6_caseD_7;
      uVar2 = FUN_14517e680();
    }
  }
  if ((int)uVar2 == 0) {
switchD_14517d6a6_caseD_7:
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// FUNCTION 14517d8c0 FUN_14517d8c0 body=110 status=ok
// SIG undefined FUN_14517d8c0(void)

ulonglong FUN_14517d8c0(undefined8 param_1,ulonglong param_2)

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



// FUNCTION 14517d930 FUN_14517d930 body=115 status=ok
// SIG undefined FUN_14517d930(void)

void FUN_14517d930(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  lVar2 = *(longlong *)(lVar1 + 8);
  if (lVar2 != 0) {
    uVar4 = *(longlong *)(lVar1 + 0x18) - lVar2;
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
    *(undefined8 *)(lVar1 + 8) = 0;
    *(undefined8 *)(lVar1 + 0x10) = 0;
    *(undefined8 *)(lVar1 + 0x18) = 0;
  }
  thunk_FUN_1400020a8(lVar1,0x30);
  return;
}



// FUNCTION 14517d9b0 FUN_14517d9b0 body=144 status=ok
// SIG undefined FUN_14517d9b0(void)

undefined8 * FUN_14517d9b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if (param_1 != param_2) {
    uVar1 = *param_2;
    *param_2 = 0;
    plVar2 = (longlong *)*param_1;
    *param_1 = uVar1;
    if (plVar2 != (longlong *)0x0) {
      lVar3 = *plVar2;
      if (lVar3 != 0) {
        uVar5 = plVar2[2] - lVar3;
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
        *plVar2 = 0;
        plVar2[1] = 0;
        plVar2[2] = 0;
      }
      thunk_FUN_1400020a8(plVar2,0x28);
    }
  }
  return param_1;
}



// FUNCTION 14517da50 FUN_14517da50 body=415 status=ok
// SIG undefined FUN_14517da50(void)

void FUN_14517da50(undefined8 *param_1,undefined4 *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *_Dst;
  undefined4 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  puVar3 = (undefined4 *)*param_1;
  uVar4 = param_1[2] - (longlong)puVar3 >> 2;
  if (uVar4 < param_3) {
    if (0x3fffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_144d7dee0();
    }
    uVar6 = 0x3fffffffffffffff;
    if ((uVar4 <= 0x3fffffffffffffff - (uVar4 >> 1)) &&
       (uVar6 = (uVar4 >> 1) + uVar4, uVar6 < param_3)) {
      uVar6 = param_3;
    }
    if (puVar3 != (undefined4 *)0x0) {
      uVar4 = uVar4 * 4;
      puVar2 = puVar3;
      if (0xfff < uVar4) {
        puVar2 = *(undefined4 **)(puVar3 + -2);
        uVar4 = uVar4 + 0x27;
        if (0x1f < (ulonglong)((longlong)puVar3 + (-8 - (longlong)puVar2))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1400020a8(puVar2,uVar4);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    _Dst = (void *)FUN_14517d8c0(param_1,uVar6);
    *param_1 = _Dst;
    param_1[1] = _Dst;
    param_1[2] = (void *)((longlong)_Dst + uVar6 * 4);
    memmove(_Dst,param_2,param_3 * 4);
    param_1[1] = (void *)(param_3 * 4 + (longlong)_Dst);
  }
  else {
    puVar2 = (undefined4 *)param_1[1];
    uVar4 = (longlong)puVar2 - (longlong)puVar3 >> 2;
    if (uVar4 < param_3) {
      if (puVar3 != puVar2) {
        do {
          uVar1 = *param_2;
          param_2 = param_2 + 1;
          *puVar3 = uVar1;
          puVar3 = puVar3 + 1;
          puVar2 = (undefined4 *)param_1[1];
        } while (puVar3 != puVar2);
      }
      lVar5 = param_3 - uVar4;
      memmove(puVar2,param_2,lVar5 * 4);
      param_1[1] = puVar2 + lVar5;
    }
    else {
      puVar2 = puVar3 + param_3;
      for (; param_3 != 0; param_3 = param_3 - 1) {
        uVar1 = *param_2;
        param_2 = param_2 + 1;
        *puVar3 = uVar1;
        puVar3 = puVar3 + 1;
      }
      param_1[1] = puVar2;
    }
  }
  return;
}



// FUNCTION 14517dc00 FUN_14517dc00 body=808 status=ok
// SIG undefined FUN_14517dc00(void)

void FUN_14517dc00(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  void *_Dst;
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  void *pvVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auStack_e8 [32];
  uint local_c8;
  int local_c4;
  undefined8 *local_c0;
  void *local_b8;
  void *pvStack_b0;
  void *local_a8;
  undefined4 local_98 [2];
  longlong local_90;
  undefined8 local_88;
  longlong local_80 [5];
  undefined1 local_58 [16];
  uint local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar11 = 0;
  uVar6 = 0;
  local_98[0] = 0;
  local_90 = 0;
  local_88 = 0;
  local_c0 = param_2;
  local_90 = FUN_14494321d(0x18);
  *(longlong *)local_90 = local_90;
  *(longlong *)(local_90 + 8) = local_90;
  local_80[0] = 0;
  local_80[1] = 0;
  local_80[2] = 0;
  local_80[3] = 7;
  local_80[4] = 8;
  local_98[0] = 0x3f800000;
  FUN_145183c90(local_80,0x10,local_90);
  uVar4 = (ulonglong)*(uint *)(param_1 + 0xc);
  local_b8 = (void *)0x0;
  pvStack_b0 = (void *)0x0;
  local_a8 = (void *)0x0;
  if (uVar4 == 0) {
    _Dst = (void *)0x0;
  }
  else {
    _Dst = (void *)FUN_14517d8c0(&local_b8);
    pvVar9 = (void *)((longlong)_Dst + uVar4 * 4);
    local_b8 = _Dst;
    local_a8 = pvVar9;
    memset(_Dst,0,uVar4 << 2);
    param_2 = local_c0;
    pvStack_b0 = pvVar9;
  }
  uVar10 = 0;
  uVar4 = uVar11;
  uVar8 = uVar11;
  if (*(int *)(param_1 + 0xc) != 0) {
    do {
      iVar7 = (int)uVar8;
      local_c8 = *(uint *)((ulonglong)(uint)((int)uVar4 + param_3) * param_2[5] + param_2[6] +
                          *(longlong *)*param_2);
      uVar2 = local_80[3] &
              (((((ulonglong)(local_c8 >> 8 & 0xff) ^
                 ((ulonglong)(local_c8 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3) *
                 0x100000001b3 ^ (ulonglong)(local_c8 >> 0x10 & 0xff)) * 0x100000001b3 ^
               (ulonglong)(local_c8 >> 0x18)) * 0x20000000366 + 0xd6 ^ 0x444);
      lVar1 = *(longlong *)(local_80[0] + 8 + uVar2 * 0x10);
      if (lVar1 == local_90) {
LAB_14517ddc6:
        lVar1 = 0;
      }
      else {
        uVar6 = *(uint *)(lVar1 + 0x10);
        while (local_c8 != uVar6) {
          if (lVar1 == *(longlong *)(local_80[0] + uVar2 * 0x10)) goto LAB_14517ddc6;
          lVar1 = *(longlong *)(lVar1 + 8);
          uVar6 = *(uint *)(lVar1 + 0x10);
        }
      }
      lVar3 = local_90;
      if (lVar1 != 0) {
        lVar3 = lVar1;
      }
      local_c4 = iVar7;
      if (lVar3 == local_90) {
        local_48 = local_c8;
        local_44 = iVar7;
        FUN_145187770(local_98,local_58,&local_48);
        memcpy((void *)(*(longlong *)*param_1 + uVar8 * param_1[5]),&local_c8,param_1[5]);
        uVar8 = (ulonglong)(iVar7 + 1);
        iVar7 = local_c4;
      }
      else {
        iVar7 = *(int *)(lVar3 + 0x14);
      }
      uVar6 = (uint)uVar8;
      *(int *)((longlong)_Dst + uVar4 * 4) = iVar7;
      uVar5 = (int)uVar4 + 1;
      uVar10 = *(uint *)(param_1 + 0xc);
      uVar4 = (ulonglong)uVar5;
      param_2 = local_c0;
    } while (uVar5 < uVar10);
  }
  if (uVar6 != uVar10) {
    if (*(char *)((longlong)param_1 + 100) == '\0') {
      lVar1 = param_1[9];
      if ((int)(param_1[10] - lVar1 >> 2) != 0) {
        do {
          *(undefined4 *)(lVar1 + uVar11 * 4) =
               *(undefined4 *)((longlong)_Dst + (ulonglong)*(uint *)(lVar1 + uVar11 * 4) * 4);
          uVar10 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar10;
          lVar1 = param_1[9];
        } while (uVar10 < (uint)(param_1[10] - lVar1 >> 2));
      }
    }
    else {
      FUN_144d7dde0(param_1,uVar10);
      if (*(int *)(param_1 + 0xc) != 0) {
        do {
          *(undefined4 *)(param_1[9] + uVar11 * 4) = *(undefined4 *)((longlong)_Dst + uVar11 * 4);
          uVar10 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar10;
        } while (uVar10 < *(uint *)(param_1 + 0xc));
      }
    }
    *(uint *)(param_1 + 0xc) = uVar6;
  }
  if (_Dst != (void *)0x0) {
    uVar4 = ((longlong)local_a8 - (longlong)_Dst >> 2) * 4;
    pvVar9 = _Dst;
    if (0xfff < uVar4) {
      uVar4 = uVar4 + 0x27;
      pvVar9 = *(void **)((longlong)_Dst + -8);
      if (0x1f < (ulonglong)((longlong)_Dst + (-8 - (longlong)pvVar9))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(pvVar9,uVar4);
  }
  FUN_145183e30(local_98);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_e8);
}



// FUNCTION 14517df50 FUN_14517df50 body=856 status=ok
// SIG undefined FUN_14517df50(void)

void FUN_14517df50(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  void *_Dst;
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  byte *pbVar7;
  ulonglong uVar8;
  longlong lVar9;
  void *pvVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 auStack_118 [32];
  int local_f8;
  int local_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined8 *local_e8;
  void *local_e0;
  void *pvStack_d8;
  void *local_d0;
  undefined8 *local_c8;
  undefined4 local_b8 [2];
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0 [5];
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar12 = 0;
  uVar4 = 0;
  local_b8[0] = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_f4 = param_3;
  local_e8 = param_2;
  local_c8 = param_1;
  local_b0 = FUN_14494321d(0x20);
  *(longlong *)local_b0 = local_b0;
  *(longlong *)(local_b0 + 8) = local_b0;
  local_a0[0] = 0;
  local_a0[1] = 0;
  local_a0[2] = 0;
  local_a0[3] = 7;
  local_a0[4] = 8;
  local_b8[0] = 0x3f800000;
  FUN_145184150(local_a0,0x10,local_b0);
  uVar2 = (ulonglong)*(uint *)(param_1 + 0xc);
  local_e0 = (void *)0x0;
  pvStack_d8 = (void *)0x0;
  local_d0 = (void *)0x0;
  if (uVar2 == 0) {
    _Dst = (void *)0x0;
  }
  else {
    _Dst = (void *)FUN_14517d8c0(&local_e0);
    pvVar10 = (void *)((longlong)_Dst + uVar2 * 4);
    local_e0 = _Dst;
    local_d0 = pvVar10;
    memset(_Dst,0,uVar2 << 2);
    param_2 = local_e8;
    pvStack_d8 = pvVar10;
  }
  uVar11 = 0;
  uVar2 = uVar12;
  uVar6 = uVar12;
  if (*(int *)(param_1 + 0xc) != 0) {
    do {
      param_1 = local_c8;
      iVar5 = (int)uVar6;
      local_58 = *(longlong *)
                  ((ulonglong)(uint)((int)uVar2 + param_3) * param_2[5] + param_2[6] +
                  *(longlong *)*param_2);
      local_f0 = (undefined4)local_58;
      local_68._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
      uStack_ec = local_68._4_4_;
      local_60 = local_58;
      uVar8 = 0x4f;
      pbVar7 = (byte *)((longlong)&local_60 + 2);
      lVar9 = 2;
      do {
        uVar8 = (((((ulonglong)pbVar7[-2] ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                  (ulonglong)pbVar7[-1]) * 0x100000001b3 ^ (ulonglong)*pbVar7) * 0x100000001b3 ^
                (ulonglong)pbVar7[1]) * 0x20000000366 + 0xd6 ^ uVar8 + 0x3f5;
        pbVar7 = pbVar7 + 4;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      lVar9 = *(longlong *)(local_a0[0] + 8 + (local_a0[3] & uVar8) * 0x10);
      if (lVar9 == local_b0) {
LAB_14517e151:
        lVar9 = 0;
      }
      else {
        lVar1 = *(longlong *)(lVar9 + 0x10);
        while (local_58 != lVar1) {
          if (lVar9 == *(longlong *)(local_a0[0] + (local_a0[3] & uVar8) * 0x10))
          goto LAB_14517e151;
          lVar9 = *(longlong *)(lVar9 + 8);
          lVar1 = *(longlong *)(lVar9 + 0x10);
        }
      }
      lVar1 = local_b0;
      if (lVar9 != 0) {
        lVar1 = lVar9;
      }
      local_f8 = iVar5;
      local_68 = local_58;
      if (lVar1 == local_b0) {
        local_50 = local_58;
        local_48 = iVar5;
        FUN_145187af0(local_b8,local_78,&local_50);
        memcpy((void *)(*(longlong *)*param_1 + uVar6 * param_1[5]),&local_58,param_1[5]);
        uVar6 = (ulonglong)(iVar5 + 1);
        iVar5 = local_f8;
      }
      else {
        iVar5 = *(int *)(lVar1 + 0x18);
      }
      uVar4 = (uint)uVar6;
      *(int *)((longlong)_Dst + uVar2 * 4) = iVar5;
      uVar3 = (int)uVar2 + 1;
      uVar11 = *(uint *)(param_1 + 0xc);
      uVar2 = (ulonglong)uVar3;
      param_2 = local_e8;
      param_3 = local_f4;
    } while (uVar3 < uVar11);
  }
  if (uVar4 != uVar11) {
    if (*(char *)((longlong)param_1 + 100) == '\0') {
      lVar9 = param_1[9];
      if ((int)(param_1[10] - lVar9 >> 2) != 0) {
        do {
          *(undefined4 *)(lVar9 + uVar12 * 4) =
               *(undefined4 *)((longlong)_Dst + (ulonglong)*(uint *)(lVar9 + uVar12 * 4) * 4);
          uVar11 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar11;
          lVar9 = param_1[9];
        } while (uVar11 < (uint)(param_1[10] - lVar9 >> 2));
      }
    }
    else {
      FUN_144d7dde0(param_1,uVar11);
      if (*(int *)(param_1 + 0xc) != 0) {
        do {
          *(undefined4 *)(param_1[9] + uVar12 * 4) = *(undefined4 *)((longlong)_Dst + uVar12 * 4);
          uVar11 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar11;
        } while (uVar11 < *(uint *)(param_1 + 0xc));
      }
    }
    *(uint *)(param_1 + 0xc) = uVar4;
  }
  if (_Dst != (void *)0x0) {
    uVar2 = ((longlong)local_d0 - (longlong)_Dst >> 2) * 4;
    pvVar10 = _Dst;
    if (0xfff < uVar2) {
      uVar2 = uVar2 + 0x27;
      pvVar10 = *(void **)((longlong)_Dst + -8);
      if (0x1f < (ulonglong)((longlong)_Dst + (-8 - (longlong)pvVar10))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(pvVar10,uVar2);
  }
  FUN_1451842f0(local_b8);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_118);
}



// FUNCTION 14517e2d0 FUN_14517e2d0 body=905 status=ok
// SIG undefined FUN_14517e2d0(void)

void FUN_14517e2d0(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  void *_Dst;
  longlong lVar1;
  byte *pbVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  void *pvVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 auStack_128 [32];
  int local_108;
  int local_104;
  undefined8 *local_100;
  void *local_f8;
  void *pvStack_f0;
  void *local_e8;
  undefined8 *local_e0;
  longlong local_d8;
  undefined4 local_c8 [2];
  longlong local_c0;
  undefined8 local_b8;
  longlong local_b0 [5];
  undefined1 local_88 [16];
  undefined8 local_78;
  uint local_70;
  longlong local_68;
  uint local_60;
  undefined8 local_58;
  undefined4 local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar13 = 0;
  uVar5 = 0;
  local_c8[0] = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_104 = param_3;
  local_100 = param_2;
  local_e0 = param_1;
  local_c0 = FUN_14494321d(0x20);
  *(longlong *)local_c0 = local_c0;
  *(longlong *)(local_c0 + 8) = local_c0;
  local_b0[0] = 0;
  local_b0[1] = 0;
  local_b0[2] = 0;
  local_b0[3] = 7;
  local_b0[4] = 8;
  local_c8[0] = 0x3f800000;
  FUN_1451845c0(local_b0,0x10,local_c0);
  uVar3 = (ulonglong)*(uint *)(param_1 + 0xc);
  local_f8 = (void *)0x0;
  pvStack_f0 = (void *)0x0;
  local_e8 = (void *)0x0;
  if (uVar3 == 0) {
    _Dst = (void *)0x0;
  }
  else {
    _Dst = (void *)FUN_14517d8c0(&local_f8);
    pvVar11 = (void *)((longlong)_Dst + uVar3 * 4);
    local_f8 = _Dst;
    local_e8 = pvVar11;
    memset(_Dst,0,uVar3 << 2);
    param_2 = local_100;
    pvStack_f0 = pvVar11;
  }
  uVar12 = 0;
  uVar3 = uVar13;
  uVar7 = uVar13;
  if (*(int *)(param_1 + 0xc) != 0) {
    do {
      param_1 = local_e0;
      iVar6 = (int)uVar7;
      lVar10 = (ulonglong)(uint)((int)uVar3 + param_3) * param_2[5] + param_2[6];
      local_d8 = *(longlong *)*param_2;
      local_68 = *(longlong *)(local_d8 + lVar10);
      local_60 = *(uint *)(local_d8 + 8 + lVar10);
      local_78 = local_68;
      local_70 = local_60;
      uVar8 = 0x4f;
      pbVar2 = (byte *)((longlong)&local_78 + 2);
      lVar9 = 3;
      do {
        uVar8 = (((((ulonglong)pbVar2[-2] ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                  (ulonglong)pbVar2[-1]) * 0x100000001b3 ^ (ulonglong)*pbVar2) * 0x100000001b3 ^
                (ulonglong)pbVar2[1]) * 0x20000000366 + 0xd6 ^ uVar8 + 0x3f5;
        pbVar2 = pbVar2 + 4;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      lVar9 = *(longlong *)(local_b0[0] + 8 + (local_b0[3] & uVar8) * 0x10);
      if (lVar9 == local_c0) {
LAB_14517e4f3:
        lVar9 = 0;
      }
      else {
        lVar1 = local_68 - *(longlong *)(lVar9 + 0x10);
        if (lVar1 == 0) {
          lVar1 = (ulonglong)local_60 - (ulonglong)*(uint *)(lVar9 + 0x18);
        }
        while (lVar1 != 0) {
          if (lVar9 == *(longlong *)(local_b0[0] + (local_b0[3] & uVar8) * 0x10))
          goto LAB_14517e4f3;
          lVar9 = *(longlong *)(lVar9 + 8);
          lVar1 = local_68 - *(longlong *)(lVar9 + 0x10);
          if (lVar1 == 0) {
            lVar1 = (ulonglong)local_60 - (ulonglong)*(uint *)(lVar9 + 0x18);
          }
        }
      }
      lVar1 = local_c0;
      if (lVar9 != 0) {
        lVar1 = lVar9;
      }
      local_108 = iVar6;
      if (lVar1 == local_c0) {
        local_58 = *(undefined8 *)(local_d8 + lVar10);
        local_50 = *(undefined4 *)(local_d8 + 8 + lVar10);
        local_4c = iVar6;
        FUN_145187e40(local_c8,local_88,&local_58);
        memcpy((void *)(*(longlong *)*param_1 + uVar7 * param_1[5]),&local_68,param_1[5]);
        uVar7 = (ulonglong)(iVar6 + 1);
        iVar6 = local_108;
      }
      else {
        iVar6 = *(int *)(lVar1 + 0x1c);
      }
      uVar5 = (uint)uVar7;
      *(int *)((longlong)_Dst + uVar3 * 4) = iVar6;
      uVar4 = (int)uVar3 + 1;
      uVar12 = *(uint *)(param_1 + 0xc);
      uVar3 = (ulonglong)uVar4;
      param_2 = local_100;
      param_3 = local_104;
    } while (uVar4 < uVar12);
  }
  if (uVar5 != uVar12) {
    if (*(char *)((longlong)param_1 + 100) == '\0') {
      lVar9 = param_1[9];
      if ((int)(param_1[10] - lVar9 >> 2) != 0) {
        do {
          *(undefined4 *)(lVar9 + uVar13 * 4) =
               *(undefined4 *)((longlong)_Dst + (ulonglong)*(uint *)(lVar9 + uVar13 * 4) * 4);
          uVar12 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar12;
          lVar9 = param_1[9];
        } while (uVar12 < (uint)(param_1[10] - lVar9 >> 2));
      }
    }
    else {
      FUN_144d7dde0(param_1,uVar12);
      if (*(int *)(param_1 + 0xc) != 0) {
        do {
          *(undefined4 *)(param_1[9] + uVar13 * 4) = *(undefined4 *)((longlong)_Dst + uVar13 * 4);
          uVar12 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar12;
        } while (uVar12 < *(uint *)(param_1 + 0xc));
      }
    }
    *(uint *)(param_1 + 0xc) = uVar5;
  }
  if (_Dst != (void *)0x0) {
    uVar3 = ((longlong)local_e8 - (longlong)_Dst >> 2) * 4;
    pvVar11 = _Dst;
    if (0xfff < uVar3) {
      uVar3 = uVar3 + 0x27;
      pvVar11 = *(void **)((longlong)_Dst + -8);
      if (0x1f < (ulonglong)((longlong)_Dst + (-8 - (longlong)pvVar11))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(pvVar11,uVar3);
  }
  FUN_145184760(local_c8);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_128);
}



// FUNCTION 14517e680 FUN_14517e680 body=889 status=ok
// SIG undefined FUN_14517e680(void)

void FUN_14517e680(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  void *_Dst;
  longlong lVar3;
  byte *pbVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  void *pvVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 auStack_128 [32];
  int local_108;
  int local_104;
  undefined8 *local_100;
  void *local_f8;
  void *pvStack_f0;
  void *local_e8;
  undefined8 *local_e0;
  longlong local_d8;
  undefined4 local_c8 [2];
  longlong local_c0;
  undefined8 local_b8;
  longlong local_b0 [5];
  undefined1 local_88 [16];
  undefined8 local_78;
  longlong lStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int local_58;
  longlong local_50;
  longlong lStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar15 = 0;
  uVar7 = 0;
  local_c8[0] = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_104 = param_3;
  local_100 = param_2;
  local_e0 = param_1;
  local_c0 = FUN_14494321d(0x28);
  *(longlong *)local_c0 = local_c0;
  *(longlong *)(local_c0 + 8) = local_c0;
  local_b0[0] = 0;
  local_b0[1] = 0;
  local_b0[2] = 0;
  local_b0[3] = 7;
  local_b0[4] = 8;
  local_c8[0] = 0x3f800000;
  FUN_145184a30(local_b0,0x10,local_c0);
  uVar5 = (ulonglong)*(uint *)(param_1 + 0xc);
  local_f8 = (void *)0x0;
  pvStack_f0 = (void *)0x0;
  local_e8 = (void *)0x0;
  if (uVar5 == 0) {
    _Dst = (void *)0x0;
  }
  else {
    _Dst = (void *)FUN_14517d8c0(&local_f8);
    pvVar13 = (void *)((longlong)_Dst + uVar5 * 4);
    local_f8 = _Dst;
    local_e8 = pvVar13;
    memset(_Dst,0,uVar5 << 2);
    param_2 = local_100;
    pvStack_f0 = pvVar13;
  }
  uVar14 = 0;
  uVar5 = uVar15;
  uVar9 = uVar15;
  if (*(int *)(param_1 + 0xc) != 0) {
    do {
      param_1 = local_e0;
      iVar8 = (int)uVar9;
      lVar12 = (ulonglong)(uint)((int)uVar5 + param_3) * param_2[5] + param_2[6];
      local_d8 = *(longlong *)*param_2;
      plVar1 = (longlong *)(local_d8 + lVar12);
      local_50 = *plVar1;
      lStack_48 = plVar1[1];
      local_78 = local_50;
      lStack_70 = lStack_48;
      uVar10 = 0x4f;
      pbVar4 = (byte *)((longlong)&local_78 + 2);
      lVar11 = 4;
      do {
        uVar10 = (((((ulonglong)pbVar4[-2] ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)pbVar4[-1]) * 0x100000001b3 ^ (ulonglong)*pbVar4) * 0x100000001b3 ^
                 (ulonglong)pbVar4[1]) * 0x20000000366 + 0xd6 ^ uVar10 + 0x3f5;
        pbVar4 = pbVar4 + 4;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      lVar11 = *(longlong *)(local_b0[0] + 8 + (local_b0[3] & uVar10) * 0x10);
      if (lVar11 == local_c0) {
LAB_14517e893:
        lVar11 = 0;
      }
      else {
        lVar3 = local_50 - *(longlong *)(lVar11 + 0x10);
        if (lVar3 == 0) {
          lVar3 = lStack_48 - *(longlong *)(lVar11 + 0x18);
        }
        while (lVar3 != 0) {
          if (lVar11 == *(longlong *)(local_b0[0] + (local_b0[3] & uVar10) * 0x10))
          goto LAB_14517e893;
          lVar11 = *(longlong *)(lVar11 + 8);
          lVar3 = local_50 - *(longlong *)(lVar11 + 0x10);
          if (lVar3 == 0) {
            lVar3 = lStack_48 - *(longlong *)(lVar11 + 0x18);
          }
        }
      }
      lVar3 = local_c0;
      if (lVar11 != 0) {
        lVar3 = lVar11;
      }
      local_108 = iVar8;
      if (lVar3 == local_c0) {
        puVar2 = (undefined4 *)(local_d8 + lVar12);
        local_68 = *puVar2;
        uStack_64 = puVar2[1];
        uStack_60 = puVar2[2];
        uStack_5c = puVar2[3];
        local_58 = iVar8;
        FUN_1451881e0(local_c8,local_88,&local_68);
        memcpy((void *)(*(longlong *)*param_1 + uVar9 * param_1[5]),&local_50,param_1[5]);
        uVar9 = (ulonglong)(iVar8 + 1);
        iVar8 = local_108;
      }
      else {
        iVar8 = *(int *)(lVar3 + 0x20);
      }
      uVar7 = (uint)uVar9;
      *(int *)((longlong)_Dst + uVar5 * 4) = iVar8;
      uVar6 = (int)uVar5 + 1;
      uVar14 = *(uint *)(param_1 + 0xc);
      uVar5 = (ulonglong)uVar6;
      param_2 = local_100;
      param_3 = local_104;
    } while (uVar6 < uVar14);
  }
  if (uVar7 != uVar14) {
    if (*(char *)((longlong)param_1 + 100) == '\0') {
      lVar11 = param_1[9];
      if ((int)(param_1[10] - lVar11 >> 2) != 0) {
        do {
          *(undefined4 *)(lVar11 + uVar15 * 4) =
               *(undefined4 *)((longlong)_Dst + (ulonglong)*(uint *)(lVar11 + uVar15 * 4) * 4);
          uVar14 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar14;
          lVar11 = param_1[9];
        } while (uVar14 < (uint)(param_1[10] - lVar11 >> 2));
      }
    }
    else {
      FUN_144d7dde0(param_1,uVar14);
      if (*(int *)(param_1 + 0xc) != 0) {
        do {
          *(undefined4 *)(param_1[9] + uVar15 * 4) = *(undefined4 *)((longlong)_Dst + uVar15 * 4);
          uVar14 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar14;
        } while (uVar14 < *(uint *)(param_1 + 0xc));
      }
    }
    *(uint *)(param_1 + 0xc) = uVar7;
  }
  if (_Dst != (void *)0x0) {
    uVar5 = ((longlong)local_e8 - (longlong)_Dst >> 2) * 4;
    pvVar13 = _Dst;
    if (0xfff < uVar5) {
      uVar5 = uVar5 + 0x27;
      pvVar13 = *(void **)((longlong)_Dst + -8);
      if (0x1f < (ulonglong)((longlong)_Dst + (-8 - (longlong)pvVar13))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(pvVar13,uVar5);
  }
  FUN_145184bd0(local_c8);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_128);
}



// FUNCTION 14517ea20 FUN_14517ea20 body=728 status=ok
// SIG undefined FUN_14517ea20(void)

void FUN_14517ea20(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  byte bVar1;
  void *_Dst;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  void *pvVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 auStack_e8 [32];
  byte local_c8 [4];
  int local_c4;
  undefined8 *local_c0;
  void *local_b8;
  void *pvStack_b0;
  void *local_a8;
  undefined4 local_98 [2];
  longlong local_90;
  undefined8 local_88;
  longlong local_80 [5];
  undefined1 local_58 [16];
  byte local_48 [4];
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar12 = 0;
  uVar7 = 0;
  local_98[0] = 0;
  local_90 = 0;
  local_88 = 0;
  local_c0 = param_2;
  local_90 = FUN_14494321d(0x18);
  *(longlong *)local_90 = local_90;
  *(longlong *)(local_90 + 8) = local_90;
  local_80[0] = 0;
  local_80[1] = 0;
  local_80[2] = 0;
  local_80[3] = 7;
  local_80[4] = 8;
  local_98[0] = 0x3f800000;
  FUN_145184eb0(local_80,0x10,local_90);
  uVar5 = (ulonglong)*(uint *)(param_1 + 0xc);
  local_b8 = (void *)0x0;
  pvStack_b0 = (void *)0x0;
  local_a8 = (void *)0x0;
  if (uVar5 == 0) {
    _Dst = (void *)0x0;
  }
  else {
    _Dst = (void *)FUN_14517d8c0(&local_b8);
    pvVar10 = (void *)((longlong)_Dst + uVar5 * 4);
    local_b8 = _Dst;
    local_a8 = pvVar10;
    memset(_Dst,0,uVar5 << 2);
    param_2 = local_c0;
    pvStack_b0 = pvVar10;
  }
  uVar11 = 0;
  uVar5 = uVar12;
  uVar9 = uVar12;
  if (*(int *)(param_1 + 0xc) != 0) {
    do {
      iVar8 = (int)uVar9;
      local_c8[0] = *(byte *)((ulonglong)(uint)((int)uVar5 + param_3) * param_2[5] + param_2[6] +
                             *(longlong *)*param_2);
      uVar3 = local_80[3] &
              (((ulonglong)local_c8[0] ^ 0xcbf29ce484222325) * 0x20000000366 + 0xd6 ^ 0x444);
      lVar2 = *(longlong *)(local_80[0] + 8 + uVar3 * 0x10);
      if (lVar2 == local_90) {
LAB_14517eba0:
        lVar2 = 0;
      }
      else {
        bVar1 = *(byte *)(lVar2 + 0x10);
        while (local_c8[0] != bVar1) {
          if (lVar2 == *(longlong *)(local_80[0] + uVar3 * 0x10)) goto LAB_14517eba0;
          lVar2 = *(longlong *)(lVar2 + 8);
          bVar1 = *(byte *)(lVar2 + 0x10);
        }
      }
      lVar4 = local_90;
      if (lVar2 != 0) {
        lVar4 = lVar2;
      }
      local_c4 = iVar8;
      if (lVar4 == local_90) {
        local_48[0] = local_c8[0];
        local_44 = iVar8;
        FUN_1451884d0(local_98,local_58,local_48);
        memcpy((void *)(*(longlong *)*param_1 + uVar9 * param_1[5]),local_c8,param_1[5]);
        uVar9 = (ulonglong)(iVar8 + 1);
        iVar8 = local_c4;
      }
      else {
        iVar8 = *(int *)(lVar4 + 0x14);
      }
      uVar7 = (uint)uVar9;
      *(int *)((longlong)_Dst + uVar5 * 4) = iVar8;
      uVar6 = (int)uVar5 + 1;
      uVar11 = *(uint *)(param_1 + 0xc);
      uVar5 = (ulonglong)uVar6;
      param_2 = local_c0;
    } while (uVar6 < uVar11);
  }
  if (uVar7 != uVar11) {
    if (*(char *)((longlong)param_1 + 100) == '\0') {
      lVar2 = param_1[9];
      if ((int)(param_1[10] - lVar2 >> 2) != 0) {
        do {
          *(undefined4 *)(lVar2 + uVar12 * 4) =
               *(undefined4 *)((longlong)_Dst + (ulonglong)*(uint *)(lVar2 + uVar12 * 4) * 4);
          uVar11 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar11;
          lVar2 = param_1[9];
        } while (uVar11 < (uint)(param_1[10] - lVar2 >> 2));
      }
    }
    else {
      FUN_144d7dde0(param_1,uVar11);
      if (*(int *)(param_1 + 0xc) != 0) {
        do {
          *(undefined4 *)(param_1[9] + uVar12 * 4) = *(undefined4 *)((longlong)_Dst + uVar12 * 4);
          uVar11 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar11;
        } while (uVar11 < *(uint *)(param_1 + 0xc));
      }
    }
    *(uint *)(param_1 + 0xc) = uVar7;
  }
  if (_Dst != (void *)0x0) {
    uVar5 = ((longlong)local_a8 - (longlong)_Dst >> 2) * 4;
    pvVar10 = _Dst;
    if (0xfff < uVar5) {
      uVar5 = uVar5 + 0x27;
      pvVar10 = *(void **)((longlong)_Dst + -8);
      if (0x1f < (ulonglong)((longlong)_Dst + (-8 - (longlong)pvVar10))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(pvVar10,uVar5);
  }
  FUN_145185050(local_98);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_e8);
}



// FUNCTION 14517ed20 FUN_14517ed20 body=776 status=ok
// SIG undefined FUN_14517ed20(void)

void FUN_14517ed20(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  short sVar1;
  void *_Dst;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  byte *pbVar9;
  longlong lVar10;
  void *pvVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 auStack_e8 [32];
  short local_c8 [2];
  short local_c4 [2];
  int local_c0;
  int local_bc;
  undefined8 *local_b8;
  void *local_b0;
  void *pvStack_a8;
  void *local_a0;
  undefined4 local_98 [2];
  longlong local_90;
  undefined8 local_88;
  longlong local_80 [5];
  undefined1 local_58 [16];
  short local_48 [2];
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar13 = 0;
  uVar5 = 0;
  local_98[0] = 0;
  local_90 = 0;
  local_88 = 0;
  local_bc = param_3;
  local_b8 = param_2;
  local_90 = FUN_14494321d(0x18);
  *(longlong *)local_90 = local_90;
  *(longlong *)(local_90 + 8) = local_90;
  local_80[0] = 0;
  local_80[1] = 0;
  local_80[2] = 0;
  local_80[3] = 7;
  local_80[4] = 8;
  local_98[0] = 0x3f800000;
  FUN_145185350(local_80,0x10,local_90);
  uVar3 = (ulonglong)*(uint *)(param_1 + 0xc);
  local_b0 = (void *)0x0;
  pvStack_a8 = (void *)0x0;
  local_a0 = (void *)0x0;
  if (uVar3 == 0) {
    _Dst = (void *)0x0;
  }
  else {
    _Dst = (void *)FUN_14517d8c0(&local_b0);
    pvVar11 = (void *)((longlong)_Dst + uVar3 * 4);
    local_b0 = _Dst;
    local_a0 = pvVar11;
    memset(_Dst,0,uVar3 << 2);
    pvStack_a8 = pvVar11;
    param_2 = local_b8;
  }
  uVar12 = 0;
  uVar3 = uVar13;
  uVar7 = uVar13;
  if (*(int *)(param_1 + 0xc) != 0) {
    do {
      iVar6 = (int)uVar7;
      local_c0 = iVar6;
      local_c4[0] = *(short *)((ulonglong)(uint)((int)uVar3 + param_3) * param_2[5] + param_2[6] +
                              *(longlong *)*param_2);
      local_c8[0] = local_c4[0];
      uVar8 = 0x4f;
      pbVar9 = (byte *)local_c8;
      lVar10 = 2;
      do {
        uVar8 = ((ulonglong)*pbVar9 ^ 0xcbf29ce484222325) * 0x20000000366 + 0xd6 ^ uVar8 + 0x3f5;
        pbVar9 = pbVar9 + 1;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      lVar10 = *(longlong *)(local_80[0] + 8 + (local_80[3] & uVar8) * 0x10);
      if (lVar10 == local_90) {
LAB_14517eed1:
        lVar10 = 0;
      }
      else {
        sVar1 = *(short *)(lVar10 + 0x10);
        while (local_c4[0] != sVar1) {
          if (lVar10 == *(longlong *)(local_80[0] + (local_80[3] & uVar8) * 0x10))
          goto LAB_14517eed1;
          lVar10 = *(longlong *)(lVar10 + 8);
          sVar1 = *(short *)(lVar10 + 0x10);
        }
      }
      lVar2 = local_90;
      if (lVar10 != 0) {
        lVar2 = lVar10;
      }
      if (lVar2 == local_90) {
        local_48[0] = local_c4[0];
        local_44 = iVar6;
        FUN_145188780(local_98,local_58,local_48);
        memcpy((void *)(*(longlong *)*param_1 + uVar7 * param_1[5]),local_c4,param_1[5]);
        uVar7 = (ulonglong)(iVar6 + 1);
        iVar6 = local_c0;
      }
      else {
        iVar6 = *(int *)(lVar2 + 0x14);
      }
      uVar5 = (uint)uVar7;
      *(int *)((longlong)_Dst + uVar3 * 4) = iVar6;
      uVar4 = (int)uVar3 + 1;
      uVar12 = *(uint *)(param_1 + 0xc);
      uVar3 = (ulonglong)uVar4;
      param_2 = local_b8;
      param_3 = local_bc;
    } while (uVar4 < uVar12);
  }
  if (uVar5 != uVar12) {
    if (*(char *)((longlong)param_1 + 100) == '\0') {
      lVar10 = param_1[9];
      if ((int)(param_1[10] - lVar10 >> 2) != 0) {
        do {
          *(undefined4 *)(lVar10 + uVar13 * 4) =
               *(undefined4 *)((longlong)_Dst + (ulonglong)*(uint *)(lVar10 + uVar13 * 4) * 4);
          uVar12 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar12;
          lVar10 = param_1[9];
        } while (uVar12 < (uint)(param_1[10] - lVar10 >> 2));
      }
    }
    else {
      FUN_144d7dde0(param_1,uVar12);
      if (*(int *)(param_1 + 0xc) != 0) {
        do {
          *(undefined4 *)(param_1[9] + uVar13 * 4) = *(undefined4 *)((longlong)_Dst + uVar13 * 4);
          uVar12 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar12;
        } while (uVar12 < *(uint *)(param_1 + 0xc));
      }
    }
    *(uint *)(param_1 + 0xc) = uVar5;
  }
  if (_Dst != (void *)0x0) {
    uVar3 = ((longlong)local_a0 - (longlong)_Dst >> 2) * 4;
    pvVar11 = _Dst;
    if (0xfff < uVar3) {
      uVar3 = uVar3 + 0x27;
      pvVar11 = *(void **)((longlong)_Dst + -8);
      if (0x1f < (ulonglong)((longlong)_Dst + (-8 - (longlong)pvVar11))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(pvVar11,uVar3);
  }
  FUN_1451854f0(local_98);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_e8);
}



// FUNCTION 14517f050 FUN_14517f050 body=856 status=ok
// SIG undefined FUN_14517f050(void)

void FUN_14517f050(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ushort *puVar9;
  longlong lVar10;
  void *pvVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 auStack_108 [32];
  ushort local_e8;
  byte local_e6;
  undefined2 local_e4;
  byte local_e2;
  int local_e0;
  int local_dc;
  undefined8 *local_d8;
  void *local_d0;
  void *pvStack_c8;
  void *local_c0;
  undefined8 *local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined4 local_98 [2];
  longlong local_90;
  undefined8 local_88;
  longlong local_80 [5];
  undefined1 local_58 [16];
  undefined2 local_48;
  undefined1 local_46;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar13 = 0;
  uVar6 = 0;
  local_98[0] = 0;
  local_90 = 0;
  local_88 = 0;
  local_dc = param_3;
  local_d8 = param_2;
  local_b8 = param_1;
  local_90 = FUN_14494321d(0x18);
  *(longlong *)local_90 = local_90;
  *(longlong *)(local_90 + 8) = local_90;
  local_80[0] = 0;
  local_80[1] = 0;
  local_80[2] = 0;
  local_80[3] = 7;
  local_80[4] = 8;
  local_98[0] = 0x3f800000;
  FUN_145185800(local_80,0x10,local_90);
  uVar4 = (ulonglong)*(uint *)(param_1 + 0xc);
  local_d0 = (void *)0x0;
  pvStack_c8 = (void *)0x0;
  local_c0 = (void *)0x0;
  if (uVar4 == 0) {
    _Dst = (void *)0x0;
  }
  else {
    _Dst = (void *)FUN_14517d8c0(&local_d0);
    pvVar11 = (void *)((longlong)_Dst + uVar4 * 4);
    local_d0 = _Dst;
    local_c0 = pvVar11;
    memset(_Dst,0,uVar4 << 2);
    pvStack_c8 = pvVar11;
    param_2 = local_d8;
  }
  uVar12 = 0;
  uVar4 = uVar13;
  uVar8 = uVar13;
  if (*(int *)(param_1 + 0xc) != 0) {
    do {
      param_1 = local_b8;
      iVar7 = (int)uVar8;
      local_e0 = iVar7;
      local_b0 = (ulonglong)(uint)((int)uVar4 + param_3) * param_2[5] + param_2[6];
      local_a8 = *(longlong *)*param_2;
      local_e4 = *(undefined2 *)(local_a8 + local_b0);
      local_e2 = *(byte *)(local_a8 + 2 + local_b0);
      local_e8 = *(ushort *)(local_a8 + local_b0);
      local_e6 = local_e2;
      uVar3 = 0x4f;
      puVar9 = &local_e8;
      lVar10 = 3;
      do {
        uVar3 = ((ulonglong)(byte)*puVar9 ^ 0xcbf29ce484222325) * 0x20000000366 + 0xd6 ^
                uVar3 + 0x3f5;
        puVar9 = (ushort *)((longlong)puVar9 + 1);
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      lVar10 = *(longlong *)(local_80[0] + 8 + (local_80[3] & uVar3) * 0x10);
      if (lVar10 == local_90) {
LAB_14517f243:
        lVar10 = 0;
      }
      else {
        iVar2 = (uint)local_e8 - (uint)*(ushort *)(lVar10 + 0x10);
        if (iVar2 == 0) {
          iVar2 = (uint)local_e2 - (uint)*(byte *)(lVar10 + 0x12);
        }
        while (iVar2 != 0) {
          if (lVar10 == *(longlong *)(local_80[0] + (local_80[3] & uVar3) * 0x10))
          goto LAB_14517f243;
          lVar10 = *(longlong *)(lVar10 + 8);
          iVar2 = (uint)local_e8 - (uint)*(ushort *)(lVar10 + 0x10);
          if (iVar2 == 0) {
            iVar2 = (uint)local_e2 - (uint)*(byte *)(lVar10 + 0x12);
          }
        }
      }
      lVar1 = local_90;
      if (lVar10 != 0) {
        lVar1 = lVar10;
      }
      if (lVar1 == local_90) {
        local_48 = *(undefined2 *)(local_a8 + local_b0);
        local_46 = *(undefined1 *)(local_a8 + 2 + local_b0);
        local_44 = iVar7;
        FUN_145188a70(local_98,local_58,&local_48);
        memcpy((void *)(*(longlong *)*param_1 + uVar8 * param_1[5]),&local_e4,param_1[5]);
        uVar8 = (ulonglong)(iVar7 + 1);
        iVar7 = local_e0;
      }
      else {
        iVar7 = *(int *)(lVar1 + 0x14);
      }
      uVar6 = (uint)uVar8;
      *(int *)((longlong)_Dst + uVar4 * 4) = iVar7;
      uVar5 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar5;
      uVar12 = *(uint *)(param_1 + 0xc);
      param_2 = local_d8;
      param_3 = local_dc;
    } while (uVar5 < uVar12);
  }
  if (uVar6 != uVar12) {
    if (*(char *)((longlong)param_1 + 100) == '\0') {
      lVar10 = param_1[9];
      if ((int)(param_1[10] - lVar10 >> 2) != 0) {
        do {
          *(undefined4 *)(lVar10 + uVar13 * 4) =
               *(undefined4 *)((longlong)_Dst + (ulonglong)*(uint *)(lVar10 + uVar13 * 4) * 4);
          uVar12 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar12;
          lVar10 = param_1[9];
        } while (uVar12 < (uint)(param_1[10] - lVar10 >> 2));
      }
    }
    else {
      FUN_144d7dde0(param_1,uVar12);
      if (*(int *)(param_1 + 0xc) != 0) {
        do {
          *(undefined4 *)(param_1[9] + uVar13 * 4) = *(undefined4 *)((longlong)_Dst + uVar13 * 4);
          uVar12 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar12;
        } while (uVar12 < *(uint *)(param_1 + 0xc));
      }
    }
    *(uint *)(param_1 + 0xc) = uVar6;
  }
  if (_Dst != (void *)0x0) {
    uVar4 = ((longlong)local_c0 - (longlong)_Dst >> 2) * 4;
    pvVar11 = _Dst;
    if (0xfff < uVar4) {
      uVar4 = uVar4 + 0x27;
      pvVar11 = *(void **)((longlong)_Dst + -8);
      if (0x1f < (ulonglong)((longlong)_Dst + (-8 - (longlong)pvVar11))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(pvVar11,uVar4);
  }
  FUN_1451859a0(local_98);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_108);
}



// FUNCTION 14517f3d0 FUN_14517f3d0 body=760 status=ok
// SIG undefined FUN_14517f3d0(void)

void FUN_14517f3d0(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *_Dst;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  byte *pbVar9;
  longlong lVar10;
  void *pvVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 auStack_e8 [32];
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  undefined8 *local_b8;
  void *local_b0;
  void *pvStack_a8;
  void *local_a0;
  undefined4 local_98 [2];
  longlong local_90;
  undefined8 local_88;
  longlong local_80 [5];
  undefined1 local_58 [16];
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar13 = 0;
  uVar5 = 0;
  local_98[0] = 0;
  local_90 = 0;
  local_88 = 0;
  local_bc = param_3;
  local_b8 = param_2;
  local_90 = FUN_14494321d(0x18);
  *(longlong *)local_90 = local_90;
  *(longlong *)(local_90 + 8) = local_90;
  local_80[0] = 0;
  local_80[1] = 0;
  local_80[2] = 0;
  local_80[3] = 7;
  local_80[4] = 8;
  local_98[0] = 0x3f800000;
  FUN_145185ca0(local_80,0x10,local_90);
  uVar3 = (ulonglong)*(uint *)(param_1 + 0xc);
  local_b0 = (void *)0x0;
  pvStack_a8 = (void *)0x0;
  local_a0 = (void *)0x0;
  if (uVar3 == 0) {
    _Dst = (void *)0x0;
  }
  else {
    _Dst = (void *)FUN_14517d8c0(&local_b0);
    pvVar11 = (void *)((longlong)_Dst + uVar3 * 4);
    local_b0 = _Dst;
    local_a0 = pvVar11;
    memset(_Dst,0,uVar3 << 2);
    pvStack_a8 = pvVar11;
    param_2 = local_b8;
  }
  uVar12 = 0;
  uVar3 = uVar13;
  uVar7 = uVar13;
  if (*(int *)(param_1 + 0xc) != 0) {
    do {
      iVar6 = (int)uVar7;
      local_c0 = iVar6;
      local_c4 = *(int *)((ulonglong)(uint)((int)uVar3 + param_3) * param_2[5] + param_2[6] +
                         *(longlong *)*param_2);
      local_c8 = local_c4;
      uVar8 = 0x4f;
      pbVar9 = (byte *)&local_c8;
      lVar10 = 4;
      do {
        uVar8 = ((ulonglong)*pbVar9 ^ 0xcbf29ce484222325) * 0x20000000366 + 0xd6 ^ uVar8 + 0x3f5;
        pbVar9 = pbVar9 + 1;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      lVar10 = *(longlong *)(local_80[0] + 8 + (local_80[3] & uVar8) * 0x10);
      if (lVar10 == local_90) {
LAB_14517f580:
        lVar10 = 0;
      }
      else {
        iVar1 = *(int *)(lVar10 + 0x10);
        while (local_c4 != iVar1) {
          if (lVar10 == *(longlong *)(local_80[0] + (local_80[3] & uVar8) * 0x10))
          goto LAB_14517f580;
          lVar10 = *(longlong *)(lVar10 + 8);
          iVar1 = *(int *)(lVar10 + 0x10);
        }
      }
      lVar2 = local_90;
      if (lVar10 != 0) {
        lVar2 = lVar10;
      }
      if (lVar2 == local_90) {
        local_48 = local_c4;
        local_44 = iVar6;
        FUN_145188d90(local_98,local_58,&local_48);
        memcpy((void *)(*(longlong *)*param_1 + uVar7 * param_1[5]),&local_c4,param_1[5]);
        uVar7 = (ulonglong)(iVar6 + 1);
        iVar6 = local_c0;
      }
      else {
        iVar6 = *(int *)(lVar2 + 0x14);
      }
      uVar5 = (uint)uVar7;
      *(int *)((longlong)_Dst + uVar3 * 4) = iVar6;
      uVar4 = (int)uVar3 + 1;
      uVar12 = *(uint *)(param_1 + 0xc);
      uVar3 = (ulonglong)uVar4;
      param_2 = local_b8;
      param_3 = local_bc;
    } while (uVar4 < uVar12);
  }
  if (uVar5 != uVar12) {
    if (*(char *)((longlong)param_1 + 100) == '\0') {
      lVar10 = param_1[9];
      if ((int)(param_1[10] - lVar10 >> 2) != 0) {
        do {
          *(undefined4 *)(lVar10 + uVar13 * 4) =
               *(undefined4 *)((longlong)_Dst + (ulonglong)*(uint *)(lVar10 + uVar13 * 4) * 4);
          uVar12 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar12;
          lVar10 = param_1[9];
        } while (uVar12 < (uint)(param_1[10] - lVar10 >> 2));
      }
    }
    else {
      FUN_144d7dde0(param_1,uVar12);
      if (*(int *)(param_1 + 0xc) != 0) {
        do {
          *(undefined4 *)(param_1[9] + uVar13 * 4) = *(undefined4 *)((longlong)_Dst + uVar13 * 4);
          uVar12 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar12;
        } while (uVar12 < *(uint *)(param_1 + 0xc));
      }
    }
    *(uint *)(param_1 + 0xc) = uVar5;
  }
  if (_Dst != (void *)0x0) {
    uVar3 = ((longlong)local_a0 - (longlong)_Dst >> 2) * 4;
    pvVar11 = _Dst;
    if (0xfff < uVar3) {
      uVar3 = uVar3 + 0x27;
      pvVar11 = *(void **)((longlong)_Dst + -8);
      if (0x1f < (ulonglong)((longlong)_Dst + (-8 - (longlong)pvVar11))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(pvVar11,uVar3);
  }
  FUN_145185e40(local_98);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_e8);
}



// FUNCTION 14517f6f0 FUN_14517f6f0 body=728 status=ok
// SIG undefined FUN_14517f6f0(void)

void FUN_14517f6f0(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  byte bVar1;
  void *_Dst;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  void *pvVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 auStack_e8 [32];
  byte local_c8 [4];
  int local_c4;
  undefined8 *local_c0;
  void *local_b8;
  void *pvStack_b0;
  void *local_a8;
  undefined4 local_98 [2];
  longlong local_90;
  undefined8 local_88;
  longlong local_80 [5];
  undefined1 local_58 [16];
  byte local_48 [4];
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar12 = 0;
  uVar7 = 0;
  local_98[0] = 0;
  local_90 = 0;
  local_88 = 0;
  local_c0 = param_2;
  local_90 = FUN_14494321d(0x18);
  *(longlong *)local_90 = local_90;
  *(longlong *)(local_90 + 8) = local_90;
  local_80[0] = 0;
  local_80[1] = 0;
  local_80[2] = 0;
  local_80[3] = 7;
  local_80[4] = 8;
  local_98[0] = 0x3f800000;
  FUN_145184eb0(local_80,0x10,local_90);
  uVar5 = (ulonglong)*(uint *)(param_1 + 0xc);
  local_b8 = (void *)0x0;
  pvStack_b0 = (void *)0x0;
  local_a8 = (void *)0x0;
  if (uVar5 == 0) {
    _Dst = (void *)0x0;
  }
  else {
    _Dst = (void *)FUN_14517d8c0(&local_b8);
    pvVar10 = (void *)((longlong)_Dst + uVar5 * 4);
    local_b8 = _Dst;
    local_a8 = pvVar10;
    memset(_Dst,0,uVar5 << 2);
    param_2 = local_c0;
    pvStack_b0 = pvVar10;
  }
  uVar11 = 0;
  uVar5 = uVar12;
  uVar9 = uVar12;
  if (*(int *)(param_1 + 0xc) != 0) {
    do {
      iVar8 = (int)uVar9;
      local_c8[0] = *(byte *)((ulonglong)(uint)((int)uVar5 + param_3) * param_2[5] + param_2[6] +
                             *(longlong *)*param_2);
      uVar3 = local_80[3] &
              (((ulonglong)local_c8[0] ^ 0xcbf29ce484222325) * 0x20000000366 + 0xd6 ^ 0x444);
      lVar2 = *(longlong *)(local_80[0] + 8 + uVar3 * 0x10);
      if (lVar2 == local_90) {
LAB_14517f870:
        lVar2 = 0;
      }
      else {
        bVar1 = *(byte *)(lVar2 + 0x10);
        while (local_c8[0] != bVar1) {
          if (lVar2 == *(longlong *)(local_80[0] + uVar3 * 0x10)) goto LAB_14517f870;
          lVar2 = *(longlong *)(lVar2 + 8);
          bVar1 = *(byte *)(lVar2 + 0x10);
        }
      }
      lVar4 = local_90;
      if (lVar2 != 0) {
        lVar4 = lVar2;
      }
      local_c4 = iVar8;
      if (lVar4 == local_90) {
        local_48[0] = local_c8[0];
        local_44 = iVar8;
        FUN_1451884d0(local_98,local_58,local_48);
        memcpy((void *)(*(longlong *)*param_1 + uVar9 * param_1[5]),local_c8,param_1[5]);
        uVar9 = (ulonglong)(iVar8 + 1);
        iVar8 = local_c4;
      }
      else {
        iVar8 = *(int *)(lVar4 + 0x14);
      }
      uVar7 = (uint)uVar9;
      *(int *)((longlong)_Dst + uVar5 * 4) = iVar8;
      uVar6 = (int)uVar5 + 1;
      uVar11 = *(uint *)(param_1 + 0xc);
      uVar5 = (ulonglong)uVar6;
      param_2 = local_c0;
    } while (uVar6 < uVar11);
  }
  if (uVar7 != uVar11) {
    if (*(char *)((longlong)param_1 + 100) == '\0') {
      lVar2 = param_1[9];
      if ((int)(param_1[10] - lVar2 >> 2) != 0) {
        do {
          *(undefined4 *)(lVar2 + uVar12 * 4) =
               *(undefined4 *)((longlong)_Dst + (ulonglong)*(uint *)(lVar2 + uVar12 * 4) * 4);
          uVar11 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar11;
          lVar2 = param_1[9];
        } while (uVar11 < (uint)(param_1[10] - lVar2 >> 2));
      }
    }
    else {
      FUN_144d7dde0(param_1,uVar11);
      if (*(int *)(param_1 + 0xc) != 0) {
        do {
          *(undefined4 *)(param_1[9] + uVar12 * 4) = *(undefined4 *)((longlong)_Dst + uVar12 * 4);
          uVar11 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar11;
        } while (uVar11 < *(uint *)(param_1 + 0xc));
      }
    }
    *(uint *)(param_1 + 0xc) = uVar7;
  }
  if (_Dst != (void *)0x0) {
    uVar5 = ((longlong)local_a8 - (longlong)_Dst >> 2) * 4;
    pvVar10 = _Dst;
    if (0xfff < uVar5) {
      uVar5 = uVar5 + 0x27;
      pvVar10 = *(void **)((longlong)_Dst + -8);
      if (0x1f < (ulonglong)((longlong)_Dst + (-8 - (longlong)pvVar10))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(pvVar10,uVar5);
  }
  FUN_145185050(local_98);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_e8);
}



// FUNCTION 14517f9f0 FUN_14517f9f0 body=776 status=ok
// SIG undefined FUN_14517f9f0(void)

void FUN_14517f9f0(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  short sVar1;
  void *_Dst;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  byte *pbVar9;
  longlong lVar10;
  void *pvVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 auStack_e8 [32];
  short local_c8 [2];
  short local_c4 [2];
  int local_c0;
  int local_bc;
  undefined8 *local_b8;
  void *local_b0;
  void *pvStack_a8;
  void *local_a0;
  undefined4 local_98 [2];
  longlong local_90;
  undefined8 local_88;
  longlong local_80 [5];
  undefined1 local_58 [16];
  short local_48 [2];
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar13 = 0;
  uVar5 = 0;
  local_98[0] = 0;
  local_90 = 0;
  local_88 = 0;
  local_bc = param_3;
  local_b8 = param_2;
  local_90 = FUN_14494321d(0x18);
  *(longlong *)local_90 = local_90;
  *(longlong *)(local_90 + 8) = local_90;
  local_80[0] = 0;
  local_80[1] = 0;
  local_80[2] = 0;
  local_80[3] = 7;
  local_80[4] = 8;
  local_98[0] = 0x3f800000;
  FUN_145185350(local_80,0x10,local_90);
  uVar3 = (ulonglong)*(uint *)(param_1 + 0xc);
  local_b0 = (void *)0x0;
  pvStack_a8 = (void *)0x0;
  local_a0 = (void *)0x0;
  if (uVar3 == 0) {
    _Dst = (void *)0x0;
  }
  else {
    _Dst = (void *)FUN_14517d8c0(&local_b0);
    pvVar11 = (void *)((longlong)_Dst + uVar3 * 4);
    local_b0 = _Dst;
    local_a0 = pvVar11;
    memset(_Dst,0,uVar3 << 2);
    pvStack_a8 = pvVar11;
    param_2 = local_b8;
  }
  uVar12 = 0;
  uVar3 = uVar13;
  uVar7 = uVar13;
  if (*(int *)(param_1 + 0xc) != 0) {
    do {
      iVar6 = (int)uVar7;
      local_c0 = iVar6;
      local_c4[0] = *(short *)((ulonglong)(uint)((int)uVar3 + param_3) * param_2[5] + param_2[6] +
                              *(longlong *)*param_2);
      local_c8[0] = local_c4[0];
      uVar8 = 0x4f;
      pbVar9 = (byte *)local_c8;
      lVar10 = 2;
      do {
        uVar8 = ((ulonglong)*pbVar9 ^ 0xcbf29ce484222325) * 0x20000000366 + 0xd6 ^ uVar8 + 0x3f5;
        pbVar9 = pbVar9 + 1;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      lVar10 = *(longlong *)(local_80[0] + 8 + (local_80[3] & uVar8) * 0x10);
      if (lVar10 == local_90) {
LAB_14517fba1:
        lVar10 = 0;
      }
      else {
        sVar1 = *(short *)(lVar10 + 0x10);
        while (local_c4[0] != sVar1) {
          if (lVar10 == *(longlong *)(local_80[0] + (local_80[3] & uVar8) * 0x10))
          goto LAB_14517fba1;
          lVar10 = *(longlong *)(lVar10 + 8);
          sVar1 = *(short *)(lVar10 + 0x10);
        }
      }
      lVar2 = local_90;
      if (lVar10 != 0) {
        lVar2 = lVar10;
      }
      if (lVar2 == local_90) {
        local_48[0] = local_c4[0];
        local_44 = iVar6;
        FUN_145188780(local_98,local_58,local_48);
        memcpy((void *)(*(longlong *)*param_1 + uVar7 * param_1[5]),local_c4,param_1[5]);
        uVar7 = (ulonglong)(iVar6 + 1);
        iVar6 = local_c0;
      }
      else {
        iVar6 = *(int *)(lVar2 + 0x14);
      }
      uVar5 = (uint)uVar7;
      *(int *)((longlong)_Dst + uVar3 * 4) = iVar6;
      uVar4 = (int)uVar3 + 1;
      uVar12 = *(uint *)(param_1 + 0xc);
      uVar3 = (ulonglong)uVar4;
      param_2 = local_b8;
      param_3 = local_bc;
    } while (uVar4 < uVar12);
  }
  if (uVar5 != uVar12) {
    if (*(char *)((longlong)param_1 + 100) == '\0') {
      lVar10 = param_1[9];
      if ((int)(param_1[10] - lVar10 >> 2) != 0) {
        do {
          *(undefined4 *)(lVar10 + uVar13 * 4) =
               *(undefined4 *)((longlong)_Dst + (ulonglong)*(uint *)(lVar10 + uVar13 * 4) * 4);
          uVar12 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar12;
          lVar10 = param_1[9];
        } while (uVar12 < (uint)(param_1[10] - lVar10 >> 2));
      }
    }
    else {
      FUN_144d7dde0(param_1,uVar12);
      if (*(int *)(param_1 + 0xc) != 0) {
        do {
          *(undefined4 *)(param_1[9] + uVar13 * 4) = *(undefined4 *)((longlong)_Dst + uVar13 * 4);
          uVar12 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar12;
        } while (uVar12 < *(uint *)(param_1 + 0xc));
      }
    }
    *(uint *)(param_1 + 0xc) = uVar5;
  }
  if (_Dst != (void *)0x0) {
    uVar3 = ((longlong)local_a0 - (longlong)_Dst >> 2) * 4;
    pvVar11 = _Dst;
    if (0xfff < uVar3) {
      uVar3 = uVar3 + 0x27;
      pvVar11 = *(void **)((longlong)_Dst + -8);
      if (0x1f < (ulonglong)((longlong)_Dst + (-8 - (longlong)pvVar11))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(pvVar11,uVar3);
  }
  FUN_1451854f0(local_98);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_e8);
}



// FUNCTION 14517fd20 FUN_14517fd20 body=856 status=ok
// SIG undefined FUN_14517fd20(void)

void FUN_14517fd20(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ushort *puVar9;
  longlong lVar10;
  void *pvVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 auStack_108 [32];
  ushort local_e8;
  byte local_e6;
  undefined2 local_e4;
  byte local_e2;
  int local_e0;
  int local_dc;
  undefined8 *local_d8;
  void *local_d0;
  void *pvStack_c8;
  void *local_c0;
  undefined8 *local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined4 local_98 [2];
  longlong local_90;
  undefined8 local_88;
  longlong local_80 [5];
  undefined1 local_58 [16];
  undefined2 local_48;
  undefined1 local_46;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar13 = 0;
  uVar6 = 0;
  local_98[0] = 0;
  local_90 = 0;
  local_88 = 0;
  local_dc = param_3;
  local_d8 = param_2;
  local_b8 = param_1;
  local_90 = FUN_14494321d(0x18);
  *(longlong *)local_90 = local_90;
  *(longlong *)(local_90 + 8) = local_90;
  local_80[0] = 0;
  local_80[1] = 0;
  local_80[2] = 0;
  local_80[3] = 7;
  local_80[4] = 8;
  local_98[0] = 0x3f800000;
  FUN_145185800(local_80,0x10,local_90);
  uVar4 = (ulonglong)*(uint *)(param_1 + 0xc);
  local_d0 = (void *)0x0;
  pvStack_c8 = (void *)0x0;
  local_c0 = (void *)0x0;
  if (uVar4 == 0) {
    _Dst = (void *)0x0;
  }
  else {
    _Dst = (void *)FUN_14517d8c0(&local_d0);
    pvVar11 = (void *)((longlong)_Dst + uVar4 * 4);
    local_d0 = _Dst;
    local_c0 = pvVar11;
    memset(_Dst,0,uVar4 << 2);
    pvStack_c8 = pvVar11;
    param_2 = local_d8;
  }
  uVar12 = 0;
  uVar4 = uVar13;
  uVar8 = uVar13;
  if (*(int *)(param_1 + 0xc) != 0) {
    do {
      param_1 = local_b8;
      iVar7 = (int)uVar8;
      local_e0 = iVar7;
      local_b0 = (ulonglong)(uint)((int)uVar4 + param_3) * param_2[5] + param_2[6];
      local_a8 = *(longlong *)*param_2;
      local_e4 = *(undefined2 *)(local_a8 + local_b0);
      local_e2 = *(byte *)(local_a8 + 2 + local_b0);
      local_e8 = *(ushort *)(local_a8 + local_b0);
      local_e6 = local_e2;
      uVar3 = 0x4f;
      puVar9 = &local_e8;
      lVar10 = 3;
      do {
        uVar3 = ((ulonglong)(byte)*puVar9 ^ 0xcbf29ce484222325) * 0x20000000366 + 0xd6 ^
                uVar3 + 0x3f5;
        puVar9 = (ushort *)((longlong)puVar9 + 1);
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      lVar10 = *(longlong *)(local_80[0] + 8 + (local_80[3] & uVar3) * 0x10);
      if (lVar10 == local_90) {
LAB_14517ff13:
        lVar10 = 0;
      }
      else {
        iVar2 = (uint)local_e8 - (uint)*(ushort *)(lVar10 + 0x10);
        if (iVar2 == 0) {
          iVar2 = (uint)local_e2 - (uint)*(byte *)(lVar10 + 0x12);
        }
        while (iVar2 != 0) {
          if (lVar10 == *(longlong *)(local_80[0] + (local_80[3] & uVar3) * 0x10))
          goto LAB_14517ff13;
          lVar10 = *(longlong *)(lVar10 + 8);
          iVar2 = (uint)local_e8 - (uint)*(ushort *)(lVar10 + 0x10);
          if (iVar2 == 0) {
            iVar2 = (uint)local_e2 - (uint)*(byte *)(lVar10 + 0x12);
          }
        }
      }
      lVar1 = local_90;
      if (lVar10 != 0) {
        lVar1 = lVar10;
      }
      if (lVar1 == local_90) {
        local_48 = *(undefined2 *)(local_a8 + local_b0);
        local_46 = *(undefined1 *)(local_a8 + 2 + local_b0);
        local_44 = iVar7;
        FUN_145188a70(local_98,local_58,&local_48);
        memcpy((void *)(*(longlong *)*param_1 + uVar8 * param_1[5]),&local_e4,param_1[5]);
        uVar8 = (ulonglong)(iVar7 + 1);
        iVar7 = local_e0;
      }
      else {
        iVar7 = *(int *)(lVar1 + 0x14);
      }
      uVar6 = (uint)uVar8;
      *(int *)((longlong)_Dst + uVar4 * 4) = iVar7;
      uVar5 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar5;
      uVar12 = *(uint *)(param_1 + 0xc);
      param_2 = local_d8;
      param_3 = local_dc;
    } while (uVar5 < uVar12);
  }
  if (uVar6 != uVar12) {
    if (*(char *)((longlong)param_1 + 100) == '\0') {
      lVar10 = param_1[9];
      if ((int)(param_1[10] - lVar10 >> 2) != 0) {
        do {
          *(undefined4 *)(lVar10 + uVar13 * 4) =
               *(undefined4 *)((longlong)_Dst + (ulonglong)*(uint *)(lVar10 + uVar13 * 4) * 4);
          uVar12 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar12;
          lVar10 = param_1[9];
        } while (uVar12 < (uint)(param_1[10] - lVar10 >> 2));
      }
    }
    else {
      FUN_144d7dde0(param_1,uVar12);
      if (*(int *)(param_1 + 0xc) != 0) {
        do {
          *(undefined4 *)(param_1[9] + uVar13 * 4) = *(undefined4 *)((longlong)_Dst + uVar13 * 4);
          uVar12 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar12;
        } while (uVar12 < *(uint *)(param_1 + 0xc));
      }
    }
    *(uint *)(param_1 + 0xc) = uVar6;
  }
  if (_Dst != (void *)0x0) {
    uVar4 = ((longlong)local_c0 - (longlong)_Dst >> 2) * 4;
    pvVar11 = _Dst;
    if (0xfff < uVar4) {
      uVar4 = uVar4 + 0x27;
      pvVar11 = *(void **)((longlong)_Dst + -8);
      if (0x1f < (ulonglong)((longlong)_Dst + (-8 - (longlong)pvVar11))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(pvVar11,uVar4);
  }
  FUN_1451859a0(local_98);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_108);
}



// FUNCTION 1451800a0 FUN_1451800a0 body=760 status=ok
// SIG undefined FUN_1451800a0(void)

void FUN_1451800a0(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *_Dst;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  byte *pbVar9;
  longlong lVar10;
  void *pvVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 auStack_e8 [32];
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  undefined8 *local_b8;
  void *local_b0;
  void *pvStack_a8;
  void *local_a0;
  undefined4 local_98 [2];
  longlong local_90;
  undefined8 local_88;
  longlong local_80 [5];
  undefined1 local_58 [16];
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar13 = 0;
  uVar5 = 0;
  local_98[0] = 0;
  local_90 = 0;
  local_88 = 0;
  local_bc = param_3;
  local_b8 = param_2;
  local_90 = FUN_14494321d(0x18);
  *(longlong *)local_90 = local_90;
  *(longlong *)(local_90 + 8) = local_90;
  local_80[0] = 0;
  local_80[1] = 0;
  local_80[2] = 0;
  local_80[3] = 7;
  local_80[4] = 8;
  local_98[0] = 0x3f800000;
  FUN_145185ca0(local_80,0x10,local_90);
  uVar3 = (ulonglong)*(uint *)(param_1 + 0xc);
  local_b0 = (void *)0x0;
  pvStack_a8 = (void *)0x0;
  local_a0 = (void *)0x0;
  if (uVar3 == 0) {
    _Dst = (void *)0x0;
  }
  else {
    _Dst = (void *)FUN_14517d8c0(&local_b0);
    pvVar11 = (void *)((longlong)_Dst + uVar3 * 4);
    local_b0 = _Dst;
    local_a0 = pvVar11;
    memset(_Dst,0,uVar3 << 2);
    pvStack_a8 = pvVar11;
    param_2 = local_b8;
  }
  uVar12 = 0;
  uVar3 = uVar13;
  uVar7 = uVar13;
  if (*(int *)(param_1 + 0xc) != 0) {
    do {
      iVar6 = (int)uVar7;
      local_c0 = iVar6;
      local_c4 = *(int *)((ulonglong)(uint)((int)uVar3 + param_3) * param_2[5] + param_2[6] +
                         *(longlong *)*param_2);
      local_c8 = local_c4;
      uVar8 = 0x4f;
      pbVar9 = (byte *)&local_c8;
      lVar10 = 4;
      do {
        uVar8 = ((ulonglong)*pbVar9 ^ 0xcbf29ce484222325) * 0x20000000366 + 0xd6 ^ uVar8 + 0x3f5;
        pbVar9 = pbVar9 + 1;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      lVar10 = *(longlong *)(local_80[0] + 8 + (local_80[3] & uVar8) * 0x10);
      if (lVar10 == local_90) {
LAB_145180250:
        lVar10 = 0;
      }
      else {
        iVar1 = *(int *)(lVar10 + 0x10);
        while (local_c4 != iVar1) {
          if (lVar10 == *(longlong *)(local_80[0] + (local_80[3] & uVar8) * 0x10))
          goto LAB_145180250;
          lVar10 = *(longlong *)(lVar10 + 8);
          iVar1 = *(int *)(lVar10 + 0x10);
        }
      }
      lVar2 = local_90;
      if (lVar10 != 0) {
        lVar2 = lVar10;
      }
      if (lVar2 == local_90) {
        local_48 = local_c4;
        local_44 = iVar6;
        FUN_145188d90(local_98,local_58,&local_48);
        memcpy((void *)(*(longlong *)*param_1 + uVar7 * param_1[5]),&local_c4,param_1[5]);
        uVar7 = (ulonglong)(iVar6 + 1);
        iVar6 = local_c0;
      }
      else {
        iVar6 = *(int *)(lVar2 + 0x14);
      }
      uVar5 = (uint)uVar7;
      *(int *)((longlong)_Dst + uVar3 * 4) = iVar6;
      uVar4 = (int)uVar3 + 1;
      uVar12 = *(uint *)(param_1 + 0xc);
      uVar3 = (ulonglong)uVar4;
      param_2 = local_b8;
      param_3 = local_bc;
    } while (uVar4 < uVar12);
  }
  if (uVar5 != uVar12) {
    if (*(char *)((longlong)param_1 + 100) == '\0') {
      lVar10 = param_1[9];
      if ((int)(param_1[10] - lVar10 >> 2) != 0) {
        do {
          *(undefined4 *)(lVar10 + uVar13 * 4) =
               *(undefined4 *)((longlong)_Dst + (ulonglong)*(uint *)(lVar10 + uVar13 * 4) * 4);
          uVar12 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar12;
          lVar10 = param_1[9];
        } while (uVar12 < (uint)(param_1[10] - lVar10 >> 2));
      }
    }
    else {
      FUN_144d7dde0(param_1,uVar12);
      if (*(int *)(param_1 + 0xc) != 0) {
        do {
          *(undefined4 *)(param_1[9] + uVar13 * 4) = *(undefined4 *)((longlong)_Dst + uVar13 * 4);
          uVar12 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar12;
        } while (uVar12 < *(uint *)(param_1 + 0xc));
      }
    }
    *(uint *)(param_1 + 0xc) = uVar5;
  }
  if (_Dst != (void *)0x0) {
    uVar3 = ((longlong)local_a0 - (longlong)_Dst >> 2) * 4;
    pvVar11 = _Dst;
    if (0xfff < uVar3) {
      uVar3 = uVar3 + 0x27;
      pvVar11 = *(void **)((longlong)_Dst + -8);
      if (0x1f < (ulonglong)((longlong)_Dst + (-8 - (longlong)pvVar11))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(pvVar11,uVar3);
  }
  FUN_145185e40(local_98);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_e8);
}



// FUNCTION 1451803c0 FUN_1451803c0 body=776 status=ok
// SIG undefined FUN_1451803c0(void)

void FUN_1451803c0(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  ushort uVar1;
  void *_Dst;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  void *pvVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 auStack_e8 [32];
  ushort local_c8 [2];
  int local_c4;
  undefined8 *local_c0;
  void *local_b8;
  void *pvStack_b0;
  void *local_a8;
  undefined4 local_98 [2];
  longlong local_90;
  undefined8 local_88;
  longlong local_80 [5];
  undefined1 local_58 [16];
  ushort local_48 [2];
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar12 = 0;
  uVar7 = 0;
  local_98[0] = 0;
  local_90 = 0;
  local_88 = 0;
  local_c0 = param_2;
  local_90 = FUN_14494321d(0x18);
  *(longlong *)local_90 = local_90;
  *(longlong *)(local_90 + 8) = local_90;
  local_80[0] = 0;
  local_80[1] = 0;
  local_80[2] = 0;
  local_80[3] = 7;
  local_80[4] = 8;
  local_98[0] = 0x3f800000;
  FUN_145186130(local_80,0x10,local_90);
  uVar5 = (ulonglong)*(uint *)(param_1 + 0xc);
  local_b8 = (void *)0x0;
  pvStack_b0 = (void *)0x0;
  local_a8 = (void *)0x0;
  if (uVar5 == 0) {
    _Dst = (void *)0x0;
  }
  else {
    _Dst = (void *)FUN_14517d8c0(&local_b8);
    pvVar10 = (void *)((longlong)_Dst + uVar5 * 4);
    local_b8 = _Dst;
    local_a8 = pvVar10;
    memset(_Dst,0,uVar5 << 2);
    param_2 = local_c0;
    pvStack_b0 = pvVar10;
  }
  uVar11 = 0;
  uVar5 = uVar12;
  uVar9 = uVar12;
  if (*(int *)(param_1 + 0xc) != 0) {
    do {
      iVar8 = (int)uVar9;
      local_c8[0] = *(ushort *)
                     ((ulonglong)(uint)((int)uVar5 + param_3) * param_2[5] + param_2[6] +
                     *(longlong *)*param_2);
      uVar4 = local_80[3] &
              ((((ulonglong)local_c8[0] & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
               (ulonglong)(local_c8[0] >> 8)) * 0x20000000366 + 0xd6 ^ 0x444);
      lVar2 = *(longlong *)(local_80[0] + 8 + uVar4 * 0x10);
      if (lVar2 == local_90) {
LAB_145180562:
        lVar2 = 0;
      }
      else {
        uVar1 = *(ushort *)(lVar2 + 0x10);
        while (local_c8[0] != uVar1) {
          if (lVar2 == *(longlong *)(local_80[0] + uVar4 * 0x10)) goto LAB_145180562;
          lVar2 = *(longlong *)(lVar2 + 8);
          uVar1 = *(ushort *)(lVar2 + 0x10);
        }
      }
      lVar3 = local_90;
      if (lVar2 != 0) {
        lVar3 = lVar2;
      }
      local_c4 = iVar8;
      if (lVar3 == local_90) {
        local_48[0] = local_c8[0];
        local_44 = iVar8;
        FUN_145189060(local_98,local_58,local_48);
        memcpy((void *)(*(longlong *)*param_1 + uVar9 * param_1[5]),local_c8,param_1[5]);
        uVar9 = (ulonglong)(iVar8 + 1);
        iVar8 = local_c4;
      }
      else {
        iVar8 = *(int *)(lVar3 + 0x14);
      }
      uVar7 = (uint)uVar9;
      *(int *)((longlong)_Dst + uVar5 * 4) = iVar8;
      uVar6 = (int)uVar5 + 1;
      uVar11 = *(uint *)(param_1 + 0xc);
      uVar5 = (ulonglong)uVar6;
      param_2 = local_c0;
    } while (uVar6 < uVar11);
  }
  if (uVar7 != uVar11) {
    if (*(char *)((longlong)param_1 + 100) == '\0') {
      lVar2 = param_1[9];
      if ((int)(param_1[10] - lVar2 >> 2) != 0) {
        do {
          *(undefined4 *)(lVar2 + uVar12 * 4) =
               *(undefined4 *)((longlong)_Dst + (ulonglong)*(uint *)(lVar2 + uVar12 * 4) * 4);
          uVar11 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar11;
          lVar2 = param_1[9];
        } while (uVar11 < (uint)(param_1[10] - lVar2 >> 2));
      }
    }
    else {
      FUN_144d7dde0(param_1,uVar11);
      if (*(int *)(param_1 + 0xc) != 0) {
        do {
          *(undefined4 *)(param_1[9] + uVar12 * 4) = *(undefined4 *)((longlong)_Dst + uVar12 * 4);
          uVar11 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar11;
        } while (uVar11 < *(uint *)(param_1 + 0xc));
      }
    }
    *(uint *)(param_1 + 0xc) = uVar7;
  }
  if (_Dst != (void *)0x0) {
    uVar5 = ((longlong)local_a8 - (longlong)_Dst >> 2) * 4;
    pvVar10 = _Dst;
    if (0xfff < uVar5) {
      uVar5 = uVar5 + 0x27;
      pvVar10 = *(void **)((longlong)_Dst + -8);
      if (0x1f < (ulonglong)((longlong)_Dst + (-8 - (longlong)pvVar10))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(pvVar10,uVar5);
  }
  FUN_1451862d0(local_98);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_e8);
}



// FUNCTION 1451806f0 FUN_1451806f0 body=792 status=ok
// SIG undefined FUN_1451806f0(void)

void FUN_1451806f0(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *_Dst;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  byte *pbVar8;
  ulonglong uVar9;
  longlong lVar10;
  void *pvVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  undefined8 *local_c8;
  void *local_c0;
  void *pvStack_b8;
  void *local_b0;
  undefined8 *local_a8;
  undefined4 local_98 [2];
  longlong local_90;
  undefined8 local_88;
  longlong local_80 [5];
  undefined1 local_58 [16];
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar13 = 0;
  uVar5 = 0;
  local_98[0] = 0;
  local_90 = 0;
  local_88 = 0;
  local_cc = param_3;
  local_c8 = param_2;
  local_a8 = param_1;
  local_90 = FUN_14494321d(0x18);
  *(longlong *)local_90 = local_90;
  *(longlong *)(local_90 + 8) = local_90;
  local_80[0] = 0;
  local_80[1] = 0;
  local_80[2] = 0;
  local_80[3] = 7;
  local_80[4] = 8;
  local_98[0] = 0x3f800000;
  FUN_145186580(local_80,0x10,local_90);
  uVar3 = (ulonglong)*(uint *)(param_1 + 0xc);
  local_c0 = (void *)0x0;
  pvStack_b8 = (void *)0x0;
  local_b0 = (void *)0x0;
  if (uVar3 == 0) {
    _Dst = (void *)0x0;
  }
  else {
    _Dst = (void *)FUN_14517d8c0(&local_c0);
    pvVar11 = (void *)((longlong)_Dst + uVar3 * 4);
    local_c0 = _Dst;
    local_b0 = pvVar11;
    memset(_Dst,0,uVar3 << 2);
    pvStack_b8 = pvVar11;
    param_2 = local_c8;
  }
  uVar12 = 0;
  uVar3 = uVar13;
  uVar7 = uVar13;
  if (*(int *)(param_1 + 0xc) != 0) {
    do {
      param_1 = local_a8;
      iVar6 = (int)uVar7;
      local_d0 = iVar6;
      local_d4 = *(int *)((ulonglong)(uint)((int)uVar3 + param_3) * param_2[5] + param_2[6] +
                         *(longlong *)*param_2);
      local_d8 = local_d4;
      uVar9 = 0x4f;
      pbVar8 = (byte *)&local_d8;
      lVar10 = 2;
      do {
        uVar9 = (((ulonglong)*pbVar8 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)pbVar8[1]) *
                0x20000000366 + 0xd6 ^ uVar9 + 0x3f5;
        pbVar8 = pbVar8 + 2;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      lVar10 = *(longlong *)(local_80[0] + 8 + (local_80[3] & uVar9) * 0x10);
      if (lVar10 == local_90) {
LAB_1451808b7:
        lVar10 = 0;
      }
      else {
        iVar1 = *(int *)(lVar10 + 0x10);
        while (local_d4 != iVar1) {
          if (lVar10 == *(longlong *)(local_80[0] + (local_80[3] & uVar9) * 0x10))
          goto LAB_1451808b7;
          lVar10 = *(longlong *)(lVar10 + 8);
          iVar1 = *(int *)(lVar10 + 0x10);
        }
      }
      lVar2 = local_90;
      if (lVar10 != 0) {
        lVar2 = lVar10;
      }
      if (lVar2 == local_90) {
        local_48 = local_d4;
        local_44 = iVar6;
        FUN_1451893a0(local_98,local_58,&local_48);
        memcpy((void *)(*(longlong *)*param_1 + uVar7 * param_1[5]),&local_d4,param_1[5]);
        uVar7 = (ulonglong)(iVar6 + 1);
        iVar6 = local_d0;
      }
      else {
        iVar6 = *(int *)(lVar2 + 0x14);
      }
      uVar5 = (uint)uVar7;
      *(int *)((longlong)_Dst + uVar3 * 4) = iVar6;
      uVar4 = (int)uVar3 + 1;
      uVar12 = *(uint *)(param_1 + 0xc);
      uVar3 = (ulonglong)uVar4;
      param_2 = local_c8;
      param_3 = local_cc;
    } while (uVar4 < uVar12);
  }
  if (uVar5 != uVar12) {
    if (*(char *)((longlong)param_1 + 100) == '\0') {
      lVar10 = param_1[9];
      if ((int)(param_1[10] - lVar10 >> 2) != 0) {
        do {
          *(undefined4 *)(lVar10 + uVar13 * 4) =
               *(undefined4 *)((longlong)_Dst + (ulonglong)*(uint *)(lVar10 + uVar13 * 4) * 4);
          uVar12 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar12;
          lVar10 = param_1[9];
        } while (uVar12 < (uint)(param_1[10] - lVar10 >> 2));
      }
    }
    else {
      FUN_144d7dde0(param_1,uVar12);
      if (*(int *)(param_1 + 0xc) != 0) {
        do {
          *(undefined4 *)(param_1[9] + uVar13 * 4) = *(undefined4 *)((longlong)_Dst + uVar13 * 4);
          uVar12 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar12;
        } while (uVar12 < *(uint *)(param_1 + 0xc));
      }
    }
    *(uint *)(param_1 + 0xc) = uVar5;
  }
  if (_Dst != (void *)0x0) {
    uVar3 = ((longlong)local_b0 - (longlong)_Dst >> 2) * 4;
    pvVar11 = _Dst;
    if (0xfff < uVar3) {
      uVar3 = uVar3 + 0x27;
      pvVar11 = *(void **)((longlong)_Dst + -8);
      if (0x1f < (ulonglong)((longlong)_Dst + (-8 - (longlong)pvVar11))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(pvVar11,uVar3);
  }
  FUN_145186720(local_98);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_f8);
}



// FUNCTION 145180a30 FUN_145180a30 body=872 status=ok
// SIG undefined FUN_145180a30(void)

void FUN_145180a30(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  byte *pbVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  void *pvVar11;
  uint uVar12;
  undefined1 auStack_118 [32];
  int local_f8;
  int local_f4;
  undefined8 *local_f0;
  void *local_e8;
  void *pvStack_e0;
  void *local_d8;
  undefined8 *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined4 local_b8 [2];
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0 [5];
  undefined1 local_78 [16];
  undefined4 local_68;
  ushort local_64;
  undefined4 local_60;
  ushort local_5c;
  undefined4 local_58;
  undefined2 local_54;
  int local_50;
  ulonglong local_48;
  ulonglong uVar6;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar6 = 0;
  uVar7 = 0;
  local_b8[0] = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_f4 = param_3;
  local_f0 = param_2;
  local_d0 = param_1;
  local_b0 = FUN_14494321d(0x20);
  *(longlong *)local_b0 = local_b0;
  *(longlong *)(local_b0 + 8) = local_b0;
  local_a0[0] = 0;
  local_a0[1] = 0;
  local_a0[2] = 0;
  local_a0[3] = 7;
  local_a0[4] = 8;
  local_b8[0] = 0x3f800000;
  FUN_1451869f0(local_a0,0x10,local_b0);
  uVar4 = (ulonglong)*(uint *)(param_1 + 0xc);
  local_e8 = (void *)0x0;
  pvStack_e0 = (void *)0x0;
  local_d8 = (void *)0x0;
  if (uVar4 == 0) {
    _Dst = (void *)0x0;
  }
  else {
    _Dst = (void *)FUN_14517d8c0(&local_e8);
    pvVar11 = (void *)((longlong)_Dst + uVar4 * 4);
    local_e8 = _Dst;
    local_d8 = pvVar11;
    memset(_Dst,0,uVar4 << 2);
    param_2 = local_f0;
    pvStack_e0 = pvVar11;
  }
  uVar12 = 0;
  uVar4 = uVar6;
  if (*(int *)(param_1 + 0xc) != 0) {
    do {
      param_1 = local_d0;
      iVar8 = (int)uVar4;
      local_c8 = (ulonglong)(uint)((int)uVar6 + param_3) * param_2[5] + param_2[6];
      local_c0 = *(longlong *)*param_2;
      local_60 = *(undefined4 *)(local_c0 + local_c8);
      local_5c = *(ushort *)(local_c0 + 4 + local_c8);
      local_68 = *(int *)(local_c0 + local_c8);
      local_64 = local_5c;
      uVar9 = 0x4f;
      pbVar3 = (byte *)&local_68;
      lVar10 = 3;
      do {
        uVar9 = (((ulonglong)*pbVar3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)pbVar3[1]) *
                0x20000000366 + 0xd6 ^ uVar9 + 0x3f5;
        pbVar3 = pbVar3 + 2;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      lVar10 = *(longlong *)(local_a0[0] + 8 + (local_a0[3] & uVar9) * 0x10);
      if (lVar10 == local_b0) {
LAB_145180c40:
        lVar10 = 0;
      }
      else {
        iVar2 = local_68 - *(int *)(lVar10 + 0x10);
        if (iVar2 == 0) {
          iVar2 = (uint)local_5c - (uint)*(ushort *)(lVar10 + 0x14);
        }
        while (iVar2 != 0) {
          if (lVar10 == *(longlong *)(local_a0[0] + (local_a0[3] & uVar9) * 0x10))
          goto LAB_145180c40;
          lVar10 = *(longlong *)(lVar10 + 8);
          iVar2 = local_68 - *(int *)(lVar10 + 0x10);
          if (iVar2 == 0) {
            iVar2 = (uint)local_5c - (uint)*(ushort *)(lVar10 + 0x14);
          }
        }
      }
      lVar1 = local_b0;
      if (lVar10 != 0) {
        lVar1 = lVar10;
      }
      local_f8 = iVar8;
      if (lVar1 == local_b0) {
        local_58 = *(undefined4 *)(local_c0 + local_c8);
        local_54 = *(undefined2 *)(local_c0 + 4 + local_c8);
        local_50 = iVar8;
        FUN_1451896c0(local_b8,local_78,&local_58);
        memcpy((void *)(*(longlong *)*param_1 + uVar4 * param_1[5]),&local_60,param_1[5]);
        uVar4 = (ulonglong)(iVar8 + 1);
        iVar8 = local_f8;
      }
      else {
        iVar8 = *(int *)(lVar1 + 0x18);
      }
      uVar7 = (uint)uVar4;
      *(int *)((longlong)_Dst + uVar6 * 4) = iVar8;
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      uVar12 = *(uint *)(param_1 + 0xc);
      param_2 = local_f0;
      param_3 = local_f4;
    } while (uVar5 < uVar12);
  }
  uVar4 = 0;
  if (uVar7 != uVar12) {
    if (*(char *)((longlong)param_1 + 100) == '\0') {
      lVar10 = param_1[9];
      if ((int)(param_1[10] - lVar10 >> 2) != 0) {
        do {
          *(undefined4 *)(lVar10 + uVar4 * 4) =
               *(undefined4 *)((longlong)_Dst + (ulonglong)*(uint *)(lVar10 + uVar4 * 4) * 4);
          uVar12 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar12;
          lVar10 = param_1[9];
        } while (uVar12 < (uint)(param_1[10] - lVar10 >> 2));
      }
    }
    else {
      FUN_144d7dde0(param_1,uVar12);
      if (*(int *)(param_1 + 0xc) != 0) {
        do {
          *(undefined4 *)(param_1[9] + uVar4 * 4) = *(undefined4 *)((longlong)_Dst + uVar4 * 4);
          uVar12 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar12;
        } while (uVar12 < *(uint *)(param_1 + 0xc));
      }
    }
    *(uint *)(param_1 + 0xc) = uVar7;
  }
  if (_Dst != (void *)0x0) {
    uVar4 = ((longlong)local_d8 - (longlong)_Dst >> 2) * 4;
    pvVar11 = _Dst;
    if (0xfff < uVar4) {
      uVar4 = uVar4 + 0x27;
      pvVar11 = *(void **)((longlong)_Dst + -8);
      if (0x1f < (ulonglong)((longlong)_Dst + (-8 - (longlong)pvVar11))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(pvVar11,uVar4);
  }
  FUN_145186b90(local_b8);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_118);
}



// FUNCTION 145180dc0 FUN_145180dc0 body=792 status=ok
// SIG undefined FUN_145180dc0(void)

void FUN_145180dc0(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  void *_Dst;
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  byte *pbVar7;
  ulonglong uVar8;
  longlong lVar9;
  void *pvVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 auStack_108 [32];
  int local_e8;
  int local_e4;
  undefined8 *local_e0;
  void *local_d8;
  void *pvStack_d0;
  void *local_c8;
  undefined8 *local_c0;
  undefined4 local_b8 [2];
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0 [5];
  undefined1 local_78 [16];
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar12 = 0;
  uVar4 = 0;
  local_b8[0] = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_e4 = param_3;
  local_e0 = param_2;
  local_c0 = param_1;
  local_b0 = FUN_14494321d(0x20);
  *(longlong *)local_b0 = local_b0;
  *(longlong *)(local_b0 + 8) = local_b0;
  local_a0[0] = 0;
  local_a0[1] = 0;
  local_a0[2] = 0;
  local_a0[3] = 7;
  local_a0[4] = 8;
  local_b8[0] = 0x3f800000;
  FUN_145186e50(local_a0,0x10,local_b0);
  uVar2 = (ulonglong)*(uint *)(param_1 + 0xc);
  local_d8 = (void *)0x0;
  pvStack_d0 = (void *)0x0;
  local_c8 = (void *)0x0;
  if (uVar2 == 0) {
    _Dst = (void *)0x0;
  }
  else {
    _Dst = (void *)FUN_14517d8c0(&local_d8);
    pvVar10 = (void *)((longlong)_Dst + uVar2 * 4);
    local_d8 = _Dst;
    local_c8 = pvVar10;
    memset(_Dst,0,uVar2 << 2);
    param_2 = local_e0;
    pvStack_d0 = pvVar10;
  }
  uVar11 = 0;
  uVar2 = uVar12;
  uVar6 = uVar12;
  if (*(int *)(param_1 + 0xc) != 0) {
    do {
      param_1 = local_c0;
      iVar5 = (int)uVar6;
      local_60 = *(longlong *)
                  ((ulonglong)(uint)((int)uVar2 + param_3) * param_2[5] + param_2[6] +
                  *(longlong *)*param_2);
      local_68 = local_60;
      uVar8 = 0x4f;
      pbVar7 = (byte *)&local_68;
      lVar9 = 4;
      do {
        uVar8 = (((ulonglong)*pbVar7 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)pbVar7[1]) *
                0x20000000366 + 0xd6 ^ uVar8 + 0x3f5;
        pbVar7 = pbVar7 + 2;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      lVar9 = *(longlong *)(local_a0[0] + 8 + (local_a0[3] & uVar8) * 0x10);
      if (lVar9 == local_b0) {
LAB_145180f89:
        lVar9 = 0;
      }
      else {
        lVar1 = *(longlong *)(lVar9 + 0x10);
        while (local_60 != lVar1) {
          if (lVar9 == *(longlong *)(local_a0[0] + (local_a0[3] & uVar8) * 0x10))
          goto LAB_145180f89;
          lVar9 = *(longlong *)(lVar9 + 8);
          lVar1 = *(longlong *)(lVar9 + 0x10);
        }
      }
      lVar1 = local_b0;
      if (lVar9 != 0) {
        lVar1 = lVar9;
      }
      local_e8 = iVar5;
      if (lVar1 == local_b0) {
        local_58 = local_60;
        local_50 = iVar5;
        FUN_145189a20(local_b8,local_78,&local_58);
        memcpy((void *)(*(longlong *)*param_1 + uVar6 * param_1[5]),&local_60,param_1[5]);
        uVar6 = (ulonglong)(iVar5 + 1);
        iVar5 = local_e8;
      }
      else {
        iVar5 = *(int *)(lVar1 + 0x18);
      }
      uVar4 = (uint)uVar6;
      *(int *)((longlong)_Dst + uVar2 * 4) = iVar5;
      uVar3 = (int)uVar2 + 1;
      uVar11 = *(uint *)(param_1 + 0xc);
      uVar2 = (ulonglong)uVar3;
      param_2 = local_e0;
      param_3 = local_e4;
    } while (uVar3 < uVar11);
  }
  if (uVar4 != uVar11) {
    if (*(char *)((longlong)param_1 + 100) == '\0') {
      lVar9 = param_1[9];
      if ((int)(param_1[10] - lVar9 >> 2) != 0) {
        do {
          *(undefined4 *)(lVar9 + uVar12 * 4) =
               *(undefined4 *)((longlong)_Dst + (ulonglong)*(uint *)(lVar9 + uVar12 * 4) * 4);
          uVar11 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar11;
          lVar9 = param_1[9];
        } while (uVar11 < (uint)(param_1[10] - lVar9 >> 2));
      }
    }
    else {
      FUN_144d7dde0(param_1,uVar11);
      if (*(int *)(param_1 + 0xc) != 0) {
        do {
          *(undefined4 *)(param_1[9] + uVar12 * 4) = *(undefined4 *)((longlong)_Dst + uVar12 * 4);
          uVar11 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar11;
        } while (uVar11 < *(uint *)(param_1 + 0xc));
      }
    }
    *(uint *)(param_1 + 0xc) = uVar4;
  }
  if (_Dst != (void *)0x0) {
    uVar2 = ((longlong)local_c8 - (longlong)_Dst >> 2) * 4;
    pvVar10 = _Dst;
    if (0xfff < uVar2) {
      uVar2 = uVar2 + 0x27;
      pvVar10 = *(void **)((longlong)_Dst + -8);
      if (0x1f < (ulonglong)((longlong)_Dst + (-8 - (longlong)pvVar10))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(pvVar10,uVar2);
  }
  FUN_145186ff0(local_b8);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_108);
}



// FUNCTION 145181100 FUN_145181100 body=776 status=ok
// SIG undefined FUN_145181100(void)

void FUN_145181100(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  ushort uVar1;
  void *_Dst;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  void *pvVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 auStack_e8 [32];
  ushort local_c8 [2];
  int local_c4;
  undefined8 *local_c0;
  void *local_b8;
  void *pvStack_b0;
  void *local_a8;
  undefined4 local_98 [2];
  longlong local_90;
  undefined8 local_88;
  longlong local_80 [5];
  undefined1 local_58 [16];
  ushort local_48 [2];
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar12 = 0;
  uVar7 = 0;
  local_98[0] = 0;
  local_90 = 0;
  local_88 = 0;
  local_c0 = param_2;
  local_90 = FUN_14494321d(0x18);
  *(longlong *)local_90 = local_90;
  *(longlong *)(local_90 + 8) = local_90;
  local_80[0] = 0;
  local_80[1] = 0;
  local_80[2] = 0;
  local_80[3] = 7;
  local_80[4] = 8;
  local_98[0] = 0x3f800000;
  FUN_145186130(local_80,0x10,local_90);
  uVar5 = (ulonglong)*(uint *)(param_1 + 0xc);
  local_b8 = (void *)0x0;
  pvStack_b0 = (void *)0x0;
  local_a8 = (void *)0x0;
  if (uVar5 == 0) {
    _Dst = (void *)0x0;
  }
  else {
    _Dst = (void *)FUN_14517d8c0(&local_b8);
    pvVar10 = (void *)((longlong)_Dst + uVar5 * 4);
    local_b8 = _Dst;
    local_a8 = pvVar10;
    memset(_Dst,0,uVar5 << 2);
    param_2 = local_c0;
    pvStack_b0 = pvVar10;
  }
  uVar11 = 0;
  uVar5 = uVar12;
  uVar9 = uVar12;
  if (*(int *)(param_1 + 0xc) != 0) {
    do {
      iVar8 = (int)uVar9;
      local_c8[0] = *(ushort *)
                     ((ulonglong)(uint)((int)uVar5 + param_3) * param_2[5] + param_2[6] +
                     *(longlong *)*param_2);
      uVar4 = local_80[3] &
              ((((ulonglong)local_c8[0] & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
               (ulonglong)(local_c8[0] >> 8)) * 0x20000000366 + 0xd6 ^ 0x444);
      lVar2 = *(longlong *)(local_80[0] + 8 + uVar4 * 0x10);
      if (lVar2 == local_90) {
LAB_1451812a2:
        lVar2 = 0;
      }
      else {
        uVar1 = *(ushort *)(lVar2 + 0x10);
        while (local_c8[0] != uVar1) {
          if (lVar2 == *(longlong *)(local_80[0] + uVar4 * 0x10)) goto LAB_1451812a2;
          lVar2 = *(longlong *)(lVar2 + 8);
          uVar1 = *(ushort *)(lVar2 + 0x10);
        }
      }
      lVar3 = local_90;
      if (lVar2 != 0) {
        lVar3 = lVar2;
      }
      local_c4 = iVar8;
      if (lVar3 == local_90) {
        local_48[0] = local_c8[0];
        local_44 = iVar8;
        FUN_145189060(local_98,local_58,local_48);
        memcpy((void *)(*(longlong *)*param_1 + uVar9 * param_1[5]),local_c8,param_1[5]);
        uVar9 = (ulonglong)(iVar8 + 1);
        iVar8 = local_c4;
      }
      else {
        iVar8 = *(int *)(lVar3 + 0x14);
      }
      uVar7 = (uint)uVar9;
      *(int *)((longlong)_Dst + uVar5 * 4) = iVar8;
      uVar6 = (int)uVar5 + 1;
      uVar11 = *(uint *)(param_1 + 0xc);
      uVar5 = (ulonglong)uVar6;
      param_2 = local_c0;
    } while (uVar6 < uVar11);
  }
  if (uVar7 != uVar11) {
    if (*(char *)((longlong)param_1 + 100) == '\0') {
      lVar2 = param_1[9];
      if ((int)(param_1[10] - lVar2 >> 2) != 0) {
        do {
          *(undefined4 *)(lVar2 + uVar12 * 4) =
               *(undefined4 *)((longlong)_Dst + (ulonglong)*(uint *)(lVar2 + uVar12 * 4) * 4);
          uVar11 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar11;
          lVar2 = param_1[9];
        } while (uVar11 < (uint)(param_1[10] - lVar2 >> 2));
      }
    }
    else {
      FUN_144d7dde0(param_1,uVar11);
      if (*(int *)(param_1 + 0xc) != 0) {
        do {
          *(undefined4 *)(param_1[9] + uVar12 * 4) = *(undefined4 *)((longlong)_Dst + uVar12 * 4);
          uVar11 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar11;
        } while (uVar11 < *(uint *)(param_1 + 0xc));
      }
    }
    *(uint *)(param_1 + 0xc) = uVar7;
  }
  if (_Dst != (void *)0x0) {
    uVar5 = ((longlong)local_a8 - (longlong)_Dst >> 2) * 4;
    pvVar10 = _Dst;
    if (0xfff < uVar5) {
      uVar5 = uVar5 + 0x27;
      pvVar10 = *(void **)((longlong)_Dst + -8);
      if (0x1f < (ulonglong)((longlong)_Dst + (-8 - (longlong)pvVar10))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(pvVar10,uVar5);
  }
  FUN_1451862d0(local_98);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_e8);
}



// FUNCTION 145181430 FUN_145181430 body=792 status=ok
// SIG undefined FUN_145181430(void)

void FUN_145181430(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *_Dst;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  byte *pbVar8;
  ulonglong uVar9;
  longlong lVar10;
  void *pvVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  undefined8 *local_c8;
  void *local_c0;
  void *pvStack_b8;
  void *local_b0;
  undefined8 *local_a8;
  undefined4 local_98 [2];
  longlong local_90;
  undefined8 local_88;
  longlong local_80 [5];
  undefined1 local_58 [16];
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar13 = 0;
  uVar5 = 0;
  local_98[0] = 0;
  local_90 = 0;
  local_88 = 0;
  local_cc = param_3;
  local_c8 = param_2;
  local_a8 = param_1;
  local_90 = FUN_14494321d(0x18);
  *(longlong *)local_90 = local_90;
  *(longlong *)(local_90 + 8) = local_90;
  local_80[0] = 0;
  local_80[1] = 0;
  local_80[2] = 0;
  local_80[3] = 7;
  local_80[4] = 8;
  local_98[0] = 0x3f800000;
  FUN_145186580(local_80,0x10,local_90);
  uVar3 = (ulonglong)*(uint *)(param_1 + 0xc);
  local_c0 = (void *)0x0;
  pvStack_b8 = (void *)0x0;
  local_b0 = (void *)0x0;
  if (uVar3 == 0) {
    _Dst = (void *)0x0;
  }
  else {
    _Dst = (void *)FUN_14517d8c0(&local_c0);
    pvVar11 = (void *)((longlong)_Dst + uVar3 * 4);
    local_c0 = _Dst;
    local_b0 = pvVar11;
    memset(_Dst,0,uVar3 << 2);
    pvStack_b8 = pvVar11;
    param_2 = local_c8;
  }
  uVar12 = 0;
  uVar3 = uVar13;
  uVar7 = uVar13;
  if (*(int *)(param_1 + 0xc) != 0) {
    do {
      param_1 = local_a8;
      iVar6 = (int)uVar7;
      local_d0 = iVar6;
      local_d4 = *(int *)((ulonglong)(uint)((int)uVar3 + param_3) * param_2[5] + param_2[6] +
                         *(longlong *)*param_2);
      local_d8 = local_d4;
      uVar9 = 0x4f;
      pbVar8 = (byte *)&local_d8;
      lVar10 = 2;
      do {
        uVar9 = (((ulonglong)*pbVar8 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)pbVar8[1]) *
                0x20000000366 + 0xd6 ^ uVar9 + 0x3f5;
        pbVar8 = pbVar8 + 2;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      lVar10 = *(longlong *)(local_80[0] + 8 + (local_80[3] & uVar9) * 0x10);
      if (lVar10 == local_90) {
LAB_1451815f7:
        lVar10 = 0;
      }
      else {
        iVar1 = *(int *)(lVar10 + 0x10);
        while (local_d4 != iVar1) {
          if (lVar10 == *(longlong *)(local_80[0] + (local_80[3] & uVar9) * 0x10))
          goto LAB_1451815f7;
          lVar10 = *(longlong *)(lVar10 + 8);
          iVar1 = *(int *)(lVar10 + 0x10);
        }
      }
      lVar2 = local_90;
      if (lVar10 != 0) {
        lVar2 = lVar10;
      }
      if (lVar2 == local_90) {
        local_48 = local_d4;
        local_44 = iVar6;
        FUN_1451893a0(local_98,local_58,&local_48);
        memcpy((void *)(*(longlong *)*param_1 + uVar7 * param_1[5]),&local_d4,param_1[5]);
        uVar7 = (ulonglong)(iVar6 + 1);
        iVar6 = local_d0;
      }
      else {
        iVar6 = *(int *)(lVar2 + 0x14);
      }
      uVar5 = (uint)uVar7;
      *(int *)((longlong)_Dst + uVar3 * 4) = iVar6;
      uVar4 = (int)uVar3 + 1;
      uVar12 = *(uint *)(param_1 + 0xc);
      uVar3 = (ulonglong)uVar4;
      param_2 = local_c8;
      param_3 = local_cc;
    } while (uVar4 < uVar12);
  }
  if (uVar5 != uVar12) {
    if (*(char *)((longlong)param_1 + 100) == '\0') {
      lVar10 = param_1[9];
      if ((int)(param_1[10] - lVar10 >> 2) != 0) {
        do {
          *(undefined4 *)(lVar10 + uVar13 * 4) =
               *(undefined4 *)((longlong)_Dst + (ulonglong)*(uint *)(lVar10 + uVar13 * 4) * 4);
          uVar12 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar12;
          lVar10 = param_1[9];
        } while (uVar12 < (uint)(param_1[10] - lVar10 >> 2));
      }
    }
    else {
      FUN_144d7dde0(param_1,uVar12);
      if (*(int *)(param_1 + 0xc) != 0) {
        do {
          *(undefined4 *)(param_1[9] + uVar13 * 4) = *(undefined4 *)((longlong)_Dst + uVar13 * 4);
          uVar12 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar12;
        } while (uVar12 < *(uint *)(param_1 + 0xc));
      }
    }
    *(uint *)(param_1 + 0xc) = uVar5;
  }
  if (_Dst != (void *)0x0) {
    uVar3 = ((longlong)local_b0 - (longlong)_Dst >> 2) * 4;
    pvVar11 = _Dst;
    if (0xfff < uVar3) {
      uVar3 = uVar3 + 0x27;
      pvVar11 = *(void **)((longlong)_Dst + -8);
      if (0x1f < (ulonglong)((longlong)_Dst + (-8 - (longlong)pvVar11))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(pvVar11,uVar3);
  }
  FUN_145186720(local_98);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_f8);
}



// FUNCTION 145181770 FUN_145181770 body=872 status=ok
// SIG undefined FUN_145181770(void)

void FUN_145181770(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  byte *pbVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  void *pvVar11;
  uint uVar12;
  undefined1 auStack_118 [32];
  int local_f8;
  int local_f4;
  undefined8 *local_f0;
  void *local_e8;
  void *pvStack_e0;
  void *local_d8;
  undefined8 *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined4 local_b8 [2];
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0 [5];
  undefined1 local_78 [16];
  undefined4 local_68;
  ushort local_64;
  undefined4 local_60;
  ushort local_5c;
  undefined4 local_58;
  undefined2 local_54;
  int local_50;
  ulonglong local_48;
  ulonglong uVar6;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar6 = 0;
  uVar7 = 0;
  local_b8[0] = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_f4 = param_3;
  local_f0 = param_2;
  local_d0 = param_1;
  local_b0 = FUN_14494321d(0x20);
  *(longlong *)local_b0 = local_b0;
  *(longlong *)(local_b0 + 8) = local_b0;
  local_a0[0] = 0;
  local_a0[1] = 0;
  local_a0[2] = 0;
  local_a0[3] = 7;
  local_a0[4] = 8;
  local_b8[0] = 0x3f800000;
  FUN_1451869f0(local_a0,0x10,local_b0);
  uVar4 = (ulonglong)*(uint *)(param_1 + 0xc);
  local_e8 = (void *)0x0;
  pvStack_e0 = (void *)0x0;
  local_d8 = (void *)0x0;
  if (uVar4 == 0) {
    _Dst = (void *)0x0;
  }
  else {
    _Dst = (void *)FUN_14517d8c0(&local_e8);
    pvVar11 = (void *)((longlong)_Dst + uVar4 * 4);
    local_e8 = _Dst;
    local_d8 = pvVar11;
    memset(_Dst,0,uVar4 << 2);
    param_2 = local_f0;
    pvStack_e0 = pvVar11;
  }
  uVar12 = 0;
  uVar4 = uVar6;
  if (*(int *)(param_1 + 0xc) != 0) {
    do {
      param_1 = local_d0;
      iVar8 = (int)uVar4;
      local_c8 = (ulonglong)(uint)((int)uVar6 + param_3) * param_2[5] + param_2[6];
      local_c0 = *(longlong *)*param_2;
      local_60 = *(undefined4 *)(local_c0 + local_c8);
      local_5c = *(ushort *)(local_c0 + 4 + local_c8);
      local_68 = *(int *)(local_c0 + local_c8);
      local_64 = local_5c;
      uVar9 = 0x4f;
      pbVar3 = (byte *)&local_68;
      lVar10 = 3;
      do {
        uVar9 = (((ulonglong)*pbVar3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)pbVar3[1]) *
                0x20000000366 + 0xd6 ^ uVar9 + 0x3f5;
        pbVar3 = pbVar3 + 2;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      lVar10 = *(longlong *)(local_a0[0] + 8 + (local_a0[3] & uVar9) * 0x10);
      if (lVar10 == local_b0) {
LAB_145181980:
        lVar10 = 0;
      }
      else {
        iVar2 = local_68 - *(int *)(lVar10 + 0x10);
        if (iVar2 == 0) {
          iVar2 = (uint)local_5c - (uint)*(ushort *)(lVar10 + 0x14);
        }
        while (iVar2 != 0) {
          if (lVar10 == *(longlong *)(local_a0[0] + (local_a0[3] & uVar9) * 0x10))
          goto LAB_145181980;
          lVar10 = *(longlong *)(lVar10 + 8);
          iVar2 = local_68 - *(int *)(lVar10 + 0x10);
          if (iVar2 == 0) {
            iVar2 = (uint)local_5c - (uint)*(ushort *)(lVar10 + 0x14);
          }
        }
      }
      lVar1 = local_b0;
      if (lVar10 != 0) {
        lVar1 = lVar10;
      }
      local_f8 = iVar8;
      if (lVar1 == local_b0) {
        local_58 = *(undefined4 *)(local_c0 + local_c8);
        local_54 = *(undefined2 *)(local_c0 + 4 + local_c8);
        local_50 = iVar8;
        FUN_1451896c0(local_b8,local_78,&local_58);
        memcpy((void *)(*(longlong *)*param_1 + uVar4 * param_1[5]),&local_60,param_1[5]);
        uVar4 = (ulonglong)(iVar8 + 1);
        iVar8 = local_f8;
      }
      else {
        iVar8 = *(int *)(lVar1 + 0x18);
      }
      uVar7 = (uint)uVar4;
      *(int *)((longlong)_Dst + uVar6 * 4) = iVar8;
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      uVar12 = *(uint *)(param_1 + 0xc);
      param_2 = local_f0;
      param_3 = local_f4;
    } while (uVar5 < uVar12);
  }
  uVar4 = 0;
  if (uVar7 != uVar12) {
    if (*(char *)((longlong)param_1 + 100) == '\0') {
      lVar10 = param_1[9];
      if ((int)(param_1[10] - lVar10 >> 2) != 0) {
        do {
          *(undefined4 *)(lVar10 + uVar4 * 4) =
               *(undefined4 *)((longlong)_Dst + (ulonglong)*(uint *)(lVar10 + uVar4 * 4) * 4);
          uVar12 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar12;
          lVar10 = param_1[9];
        } while (uVar12 < (uint)(param_1[10] - lVar10 >> 2));
      }
    }
    else {
      FUN_144d7dde0(param_1,uVar12);
      if (*(int *)(param_1 + 0xc) != 0) {
        do {
          *(undefined4 *)(param_1[9] + uVar4 * 4) = *(undefined4 *)((longlong)_Dst + uVar4 * 4);
          uVar12 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar12;
        } while (uVar12 < *(uint *)(param_1 + 0xc));
      }
    }
    *(uint *)(param_1 + 0xc) = uVar7;
  }
  if (_Dst != (void *)0x0) {
    uVar4 = ((longlong)local_d8 - (longlong)_Dst >> 2) * 4;
    pvVar11 = _Dst;
    if (0xfff < uVar4) {
      uVar4 = uVar4 + 0x27;
      pvVar11 = *(void **)((longlong)_Dst + -8);
      if (0x1f < (ulonglong)((longlong)_Dst + (-8 - (longlong)pvVar11))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(pvVar11,uVar4);
  }
  FUN_145186b90(local_b8);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_118);
}



// FUNCTION 145181b00 FUN_145181b00 body=792 status=ok
// SIG undefined FUN_145181b00(void)

void FUN_145181b00(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  void *_Dst;
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  byte *pbVar7;
  ulonglong uVar8;
  longlong lVar9;
  void *pvVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 auStack_108 [32];
  int local_e8;
  int local_e4;
  undefined8 *local_e0;
  void *local_d8;
  void *pvStack_d0;
  void *local_c8;
  undefined8 *local_c0;
  undefined4 local_b8 [2];
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0 [5];
  undefined1 local_78 [16];
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar12 = 0;
  uVar4 = 0;
  local_b8[0] = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_e4 = param_3;
  local_e0 = param_2;
  local_c0 = param_1;
  local_b0 = FUN_14494321d(0x20);
  *(longlong *)local_b0 = local_b0;
  *(longlong *)(local_b0 + 8) = local_b0;
  local_a0[0] = 0;
  local_a0[1] = 0;
  local_a0[2] = 0;
  local_a0[3] = 7;
  local_a0[4] = 8;
  local_b8[0] = 0x3f800000;
  FUN_145186e50(local_a0,0x10,local_b0);
  uVar2 = (ulonglong)*(uint *)(param_1 + 0xc);
  local_d8 = (void *)0x0;
  pvStack_d0 = (void *)0x0;
  local_c8 = (void *)0x0;
  if (uVar2 == 0) {
    _Dst = (void *)0x0;
  }
  else {
    _Dst = (void *)FUN_14517d8c0(&local_d8);
    pvVar10 = (void *)((longlong)_Dst + uVar2 * 4);
    local_d8 = _Dst;
    local_c8 = pvVar10;
    memset(_Dst,0,uVar2 << 2);
    param_2 = local_e0;
    pvStack_d0 = pvVar10;
  }
  uVar11 = 0;
  uVar2 = uVar12;
  uVar6 = uVar12;
  if (*(int *)(param_1 + 0xc) != 0) {
    do {
      param_1 = local_c0;
      iVar5 = (int)uVar6;
      local_60 = *(longlong *)
                  ((ulonglong)(uint)((int)uVar2 + param_3) * param_2[5] + param_2[6] +
                  *(longlong *)*param_2);
      local_68 = local_60;
      uVar8 = 0x4f;
      pbVar7 = (byte *)&local_68;
      lVar9 = 4;
      do {
        uVar8 = (((ulonglong)*pbVar7 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)pbVar7[1]) *
                0x20000000366 + 0xd6 ^ uVar8 + 0x3f5;
        pbVar7 = pbVar7 + 2;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      lVar9 = *(longlong *)(local_a0[0] + 8 + (local_a0[3] & uVar8) * 0x10);
      if (lVar9 == local_b0) {
LAB_145181cc9:
        lVar9 = 0;
      }
      else {
        lVar1 = *(longlong *)(lVar9 + 0x10);
        while (local_60 != lVar1) {
          if (lVar9 == *(longlong *)(local_a0[0] + (local_a0[3] & uVar8) * 0x10))
          goto LAB_145181cc9;
          lVar9 = *(longlong *)(lVar9 + 8);
          lVar1 = *(longlong *)(lVar9 + 0x10);
        }
      }
      lVar1 = local_b0;
      if (lVar9 != 0) {
        lVar1 = lVar9;
      }
      local_e8 = iVar5;
      if (lVar1 == local_b0) {
        local_58 = local_60;
        local_50 = iVar5;
        FUN_145189a20(local_b8,local_78,&local_58);
        memcpy((void *)(*(longlong *)*param_1 + uVar6 * param_1[5]),&local_60,param_1[5]);
        uVar6 = (ulonglong)(iVar5 + 1);
        iVar5 = local_e8;
      }
      else {
        iVar5 = *(int *)(lVar1 + 0x18);
      }
      uVar4 = (uint)uVar6;
      *(int *)((longlong)_Dst + uVar2 * 4) = iVar5;
      uVar3 = (int)uVar2 + 1;
      uVar11 = *(uint *)(param_1 + 0xc);
      uVar2 = (ulonglong)uVar3;
      param_2 = local_e0;
      param_3 = local_e4;
    } while (uVar3 < uVar11);
  }
  if (uVar4 != uVar11) {
    if (*(char *)((longlong)param_1 + 100) == '\0') {
      lVar9 = param_1[9];
      if ((int)(param_1[10] - lVar9 >> 2) != 0) {
        do {
          *(undefined4 *)(lVar9 + uVar12 * 4) =
               *(undefined4 *)((longlong)_Dst + (ulonglong)*(uint *)(lVar9 + uVar12 * 4) * 4);
          uVar11 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar11;
          lVar9 = param_1[9];
        } while (uVar11 < (uint)(param_1[10] - lVar9 >> 2));
      }
    }
    else {
      FUN_144d7dde0(param_1,uVar11);
      if (*(int *)(param_1 + 0xc) != 0) {
        do {
          *(undefined4 *)(param_1[9] + uVar12 * 4) = *(undefined4 *)((longlong)_Dst + uVar12 * 4);
          uVar11 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar11;
        } while (uVar11 < *(uint *)(param_1 + 0xc));
      }
    }
    *(uint *)(param_1 + 0xc) = uVar4;
  }
  if (_Dst != (void *)0x0) {
    uVar2 = ((longlong)local_c8 - (longlong)_Dst >> 2) * 4;
    pvVar10 = _Dst;
    if (0xfff < uVar2) {
      uVar2 = uVar2 + 0x27;
      pvVar10 = *(void **)((longlong)_Dst + -8);
      if (0x1f < (ulonglong)((longlong)_Dst + (-8 - (longlong)pvVar10))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(pvVar10,uVar2);
  }
  FUN_145186ff0(local_b8);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_108);
}



// FUNCTION 145181e40 FUN_145181e40 body=808 status=ok
// SIG undefined FUN_145181e40(void)

void FUN_145181e40(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  void *_Dst;
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  void *pvVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auStack_e8 [32];
  uint local_c8;
  int local_c4;
  undefined8 *local_c0;
  void *local_b8;
  void *pvStack_b0;
  void *local_a8;
  undefined4 local_98 [2];
  longlong local_90;
  undefined8 local_88;
  longlong local_80 [5];
  undefined1 local_58 [16];
  uint local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar11 = 0;
  uVar6 = 0;
  local_98[0] = 0;
  local_90 = 0;
  local_88 = 0;
  local_c0 = param_2;
  local_90 = FUN_14494321d(0x18);
  *(longlong *)local_90 = local_90;
  *(longlong *)(local_90 + 8) = local_90;
  local_80[0] = 0;
  local_80[1] = 0;
  local_80[2] = 0;
  local_80[3] = 7;
  local_80[4] = 8;
  local_98[0] = 0x3f800000;
  FUN_145183c90(local_80,0x10,local_90);
  uVar4 = (ulonglong)*(uint *)(param_1 + 0xc);
  local_b8 = (void *)0x0;
  pvStack_b0 = (void *)0x0;
  local_a8 = (void *)0x0;
  if (uVar4 == 0) {
    _Dst = (void *)0x0;
  }
  else {
    _Dst = (void *)FUN_14517d8c0(&local_b8);
    pvVar9 = (void *)((longlong)_Dst + uVar4 * 4);
    local_b8 = _Dst;
    local_a8 = pvVar9;
    memset(_Dst,0,uVar4 << 2);
    param_2 = local_c0;
    pvStack_b0 = pvVar9;
  }
  uVar10 = 0;
  uVar4 = uVar11;
  uVar8 = uVar11;
  if (*(int *)(param_1 + 0xc) != 0) {
    do {
      iVar7 = (int)uVar8;
      local_c8 = *(uint *)((ulonglong)(uint)((int)uVar4 + param_3) * param_2[5] + param_2[6] +
                          *(longlong *)*param_2);
      uVar2 = local_80[3] &
              (((((ulonglong)(local_c8 >> 8 & 0xff) ^
                 ((ulonglong)(local_c8 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3) *
                 0x100000001b3 ^ (ulonglong)(local_c8 >> 0x10 & 0xff)) * 0x100000001b3 ^
               (ulonglong)(local_c8 >> 0x18)) * 0x20000000366 + 0xd6 ^ 0x444);
      lVar1 = *(longlong *)(local_80[0] + 8 + uVar2 * 0x10);
      if (lVar1 == local_90) {
LAB_145182001:
        lVar1 = 0;
      }
      else {
        uVar6 = *(uint *)(lVar1 + 0x10);
        while (local_c8 != uVar6) {
          if (lVar1 == *(longlong *)(local_80[0] + uVar2 * 0x10)) goto LAB_145182001;
          lVar1 = *(longlong *)(lVar1 + 8);
          uVar6 = *(uint *)(lVar1 + 0x10);
        }
      }
      lVar3 = local_90;
      if (lVar1 != 0) {
        lVar3 = lVar1;
      }
      local_c4 = iVar7;
      if (lVar3 == local_90) {
        local_48 = local_c8;
        local_44 = iVar7;
        FUN_145187770(local_98,local_58,&local_48);
        memcpy((void *)(*(longlong *)*param_1 + uVar8 * param_1[5]),&local_c8,param_1[5]);
        uVar8 = (ulonglong)(iVar7 + 1);
        iVar7 = local_c4;
      }
      else {
        iVar7 = *(int *)(lVar3 + 0x14);
      }
      uVar6 = (uint)uVar8;
      *(int *)((longlong)_Dst + uVar4 * 4) = iVar7;
      uVar5 = (int)uVar4 + 1;
      uVar10 = *(uint *)(param_1 + 0xc);
      uVar4 = (ulonglong)uVar5;
      param_2 = local_c0;
    } while (uVar5 < uVar10);
  }
  if (uVar6 != uVar10) {
    if (*(char *)((longlong)param_1 + 100) == '\0') {
      lVar1 = param_1[9];
      if ((int)(param_1[10] - lVar1 >> 2) != 0) {
        do {
          *(undefined4 *)(lVar1 + uVar11 * 4) =
               *(undefined4 *)((longlong)_Dst + (ulonglong)*(uint *)(lVar1 + uVar11 * 4) * 4);
          uVar10 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar10;
          lVar1 = param_1[9];
        } while (uVar10 < (uint)(param_1[10] - lVar1 >> 2));
      }
    }
    else {
      FUN_144d7dde0(param_1,uVar10);
      if (*(int *)(param_1 + 0xc) != 0) {
        do {
          *(undefined4 *)(param_1[9] + uVar11 * 4) = *(undefined4 *)((longlong)_Dst + uVar11 * 4);
          uVar10 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar10;
        } while (uVar10 < *(uint *)(param_1 + 0xc));
      }
    }
    *(uint *)(param_1 + 0xc) = uVar6;
  }
  if (_Dst != (void *)0x0) {
    uVar4 = ((longlong)local_a8 - (longlong)_Dst >> 2) * 4;
    pvVar9 = _Dst;
    if (0xfff < uVar4) {
      uVar4 = uVar4 + 0x27;
      pvVar9 = *(void **)((longlong)_Dst + -8);
      if (0x1f < (ulonglong)((longlong)_Dst + (-8 - (longlong)pvVar9))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(pvVar9,uVar4);
  }
  FUN_145183e30(local_98);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_e8);
}



// FUNCTION 145182190 FUN_145182190 body=824 status=ok
// SIG undefined FUN_145182190(void)

void FUN_145182190(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  void *_Dst;
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  byte *pbVar7;
  ulonglong uVar8;
  longlong lVar9;
  void *pvVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 auStack_108 [32];
  int local_e8;
  int local_e4;
  undefined8 *local_e0;
  void *local_d8;
  void *pvStack_d0;
  void *local_c8;
  undefined8 *local_c0;
  undefined4 local_b8 [2];
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0 [5];
  undefined1 local_78 [16];
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar12 = 0;
  uVar4 = 0;
  local_b8[0] = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_e4 = param_3;
  local_e0 = param_2;
  local_c0 = param_1;
  local_b0 = FUN_14494321d(0x20);
  *(longlong *)local_b0 = local_b0;
  *(longlong *)(local_b0 + 8) = local_b0;
  local_a0[0] = 0;
  local_a0[1] = 0;
  local_a0[2] = 0;
  local_a0[3] = 7;
  local_a0[4] = 8;
  local_b8[0] = 0x3f800000;
  FUN_145184150(local_a0,0x10,local_b0);
  uVar2 = (ulonglong)*(uint *)(param_1 + 0xc);
  local_d8 = (void *)0x0;
  pvStack_d0 = (void *)0x0;
  local_c8 = (void *)0x0;
  if (uVar2 == 0) {
    _Dst = (void *)0x0;
  }
  else {
    _Dst = (void *)FUN_14517d8c0(&local_d8);
    pvVar10 = (void *)((longlong)_Dst + uVar2 * 4);
    local_d8 = _Dst;
    local_c8 = pvVar10;
    memset(_Dst,0,uVar2 << 2);
    param_2 = local_e0;
    pvStack_d0 = pvVar10;
  }
  uVar11 = 0;
  uVar2 = uVar12;
  uVar6 = uVar12;
  if (*(int *)(param_1 + 0xc) != 0) {
    do {
      param_1 = local_c0;
      iVar5 = (int)uVar6;
      local_60 = *(longlong *)
                  ((ulonglong)(uint)((int)uVar2 + param_3) * param_2[5] + param_2[6] +
                  *(longlong *)*param_2);
      local_68 = local_60;
      uVar8 = 0x4f;
      pbVar7 = (byte *)((longlong)&local_68 + 2);
      lVar9 = 2;
      do {
        uVar8 = (((((ulonglong)pbVar7[-2] ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                  (ulonglong)pbVar7[-1]) * 0x100000001b3 ^ (ulonglong)*pbVar7) * 0x100000001b3 ^
                (ulonglong)pbVar7[1]) * 0x20000000366 + 0xd6 ^ uVar8 + 0x3f5;
        pbVar7 = pbVar7 + 4;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      lVar9 = *(longlong *)(local_a0[0] + 8 + (local_a0[3] & uVar8) * 0x10);
      if (lVar9 == local_b0) {
LAB_145182371:
        lVar9 = 0;
      }
      else {
        lVar1 = *(longlong *)(lVar9 + 0x10);
        while (local_60 != lVar1) {
          if (lVar9 == *(longlong *)(local_a0[0] + (local_a0[3] & uVar8) * 0x10))
          goto LAB_145182371;
          lVar9 = *(longlong *)(lVar9 + 8);
          lVar1 = *(longlong *)(lVar9 + 0x10);
        }
      }
      lVar1 = local_b0;
      if (lVar9 != 0) {
        lVar1 = lVar9;
      }
      local_e8 = iVar5;
      if (lVar1 == local_b0) {
        local_58 = local_60;
        local_50 = iVar5;
        FUN_145187af0(local_b8,local_78,&local_58);
        memcpy((void *)(*(longlong *)*param_1 + uVar6 * param_1[5]),&local_60,param_1[5]);
        uVar6 = (ulonglong)(iVar5 + 1);
        iVar5 = local_e8;
      }
      else {
        iVar5 = *(int *)(lVar1 + 0x18);
      }
      uVar4 = (uint)uVar6;
      *(int *)((longlong)_Dst + uVar2 * 4) = iVar5;
      uVar3 = (int)uVar2 + 1;
      uVar11 = *(uint *)(param_1 + 0xc);
      uVar2 = (ulonglong)uVar3;
      param_2 = local_e0;
      param_3 = local_e4;
    } while (uVar3 < uVar11);
  }
  if (uVar4 != uVar11) {
    if (*(char *)((longlong)param_1 + 100) == '\0') {
      lVar9 = param_1[9];
      if ((int)(param_1[10] - lVar9 >> 2) != 0) {
        do {
          *(undefined4 *)(lVar9 + uVar12 * 4) =
               *(undefined4 *)((longlong)_Dst + (ulonglong)*(uint *)(lVar9 + uVar12 * 4) * 4);
          uVar11 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar11;
          lVar9 = param_1[9];
        } while (uVar11 < (uint)(param_1[10] - lVar9 >> 2));
      }
    }
    else {
      FUN_144d7dde0(param_1,uVar11);
      if (*(int *)(param_1 + 0xc) != 0) {
        do {
          *(undefined4 *)(param_1[9] + uVar12 * 4) = *(undefined4 *)((longlong)_Dst + uVar12 * 4);
          uVar11 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar11;
        } while (uVar11 < *(uint *)(param_1 + 0xc));
      }
    }
    *(uint *)(param_1 + 0xc) = uVar4;
  }
  if (_Dst != (void *)0x0) {
    uVar2 = ((longlong)local_c8 - (longlong)_Dst >> 2) * 4;
    pvVar10 = _Dst;
    if (0xfff < uVar2) {
      uVar2 = uVar2 + 0x27;
      pvVar10 = *(void **)((longlong)_Dst + -8);
      if (0x1f < (ulonglong)((longlong)_Dst + (-8 - (longlong)pvVar10))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(pvVar10,uVar2);
  }
  FUN_1451842f0(local_b8);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_108);
}



// FUNCTION 1451824f0 FUN_1451824f0 body=905 status=ok
// SIG undefined FUN_1451824f0(void)

void FUN_1451824f0(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  void *_Dst;
  longlong lVar1;
  byte *pbVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  void *pvVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 auStack_128 [32];
  int local_108;
  int local_104;
  undefined8 *local_100;
  void *local_f8;
  void *pvStack_f0;
  void *local_e8;
  undefined8 *local_e0;
  longlong local_d8;
  undefined4 local_c8 [2];
  longlong local_c0;
  undefined8 local_b8;
  longlong local_b0 [5];
  undefined1 local_88 [16];
  undefined8 local_78;
  uint local_70;
  longlong local_68;
  uint local_60;
  undefined8 local_58;
  undefined4 local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar13 = 0;
  uVar5 = 0;
  local_c8[0] = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_104 = param_3;
  local_100 = param_2;
  local_e0 = param_1;
  local_c0 = FUN_14494321d(0x20);
  *(longlong *)local_c0 = local_c0;
  *(longlong *)(local_c0 + 8) = local_c0;
  local_b0[0] = 0;
  local_b0[1] = 0;
  local_b0[2] = 0;
  local_b0[3] = 7;
  local_b0[4] = 8;
  local_c8[0] = 0x3f800000;
  FUN_1451845c0(local_b0,0x10,local_c0);
  uVar3 = (ulonglong)*(uint *)(param_1 + 0xc);
  local_f8 = (void *)0x0;
  pvStack_f0 = (void *)0x0;
  local_e8 = (void *)0x0;
  if (uVar3 == 0) {
    _Dst = (void *)0x0;
  }
  else {
    _Dst = (void *)FUN_14517d8c0(&local_f8);
    pvVar11 = (void *)((longlong)_Dst + uVar3 * 4);
    local_f8 = _Dst;
    local_e8 = pvVar11;
    memset(_Dst,0,uVar3 << 2);
    param_2 = local_100;
    pvStack_f0 = pvVar11;
  }
  uVar12 = 0;
  uVar3 = uVar13;
  uVar7 = uVar13;
  if (*(int *)(param_1 + 0xc) != 0) {
    do {
      param_1 = local_e0;
      iVar6 = (int)uVar7;
      lVar10 = (ulonglong)(uint)((int)uVar3 + param_3) * param_2[5] + param_2[6];
      local_d8 = *(longlong *)*param_2;
      local_68 = *(longlong *)(local_d8 + lVar10);
      local_60 = *(uint *)(local_d8 + 8 + lVar10);
      local_78 = local_68;
      local_70 = local_60;
      uVar8 = 0x4f;
      pbVar2 = (byte *)((longlong)&local_78 + 2);
      lVar9 = 3;
      do {
        uVar8 = (((((ulonglong)pbVar2[-2] ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                  (ulonglong)pbVar2[-1]) * 0x100000001b3 ^ (ulonglong)*pbVar2) * 0x100000001b3 ^
                (ulonglong)pbVar2[1]) * 0x20000000366 + 0xd6 ^ uVar8 + 0x3f5;
        pbVar2 = pbVar2 + 4;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      lVar9 = *(longlong *)(local_b0[0] + 8 + (local_b0[3] & uVar8) * 0x10);
      if (lVar9 == local_c0) {
LAB_145182713:
        lVar9 = 0;
      }
      else {
        lVar1 = local_68 - *(longlong *)(lVar9 + 0x10);
        if (lVar1 == 0) {
          lVar1 = (ulonglong)local_60 - (ulonglong)*(uint *)(lVar9 + 0x18);
        }
        while (lVar1 != 0) {
          if (lVar9 == *(longlong *)(local_b0[0] + (local_b0[3] & uVar8) * 0x10))
          goto LAB_145182713;
          lVar9 = *(longlong *)(lVar9 + 8);
          lVar1 = local_68 - *(longlong *)(lVar9 + 0x10);
          if (lVar1 == 0) {
            lVar1 = (ulonglong)local_60 - (ulonglong)*(uint *)(lVar9 + 0x18);
          }
        }
      }
      lVar1 = local_c0;
      if (lVar9 != 0) {
        lVar1 = lVar9;
      }
      local_108 = iVar6;
      if (lVar1 == local_c0) {
        local_58 = *(undefined8 *)(local_d8 + lVar10);
        local_50 = *(undefined4 *)(local_d8 + 8 + lVar10);
        local_4c = iVar6;
        FUN_145187e40(local_c8,local_88,&local_58);
        memcpy((void *)(*(longlong *)*param_1 + uVar7 * param_1[5]),&local_68,param_1[5]);
        uVar7 = (ulonglong)(iVar6 + 1);
        iVar6 = local_108;
      }
      else {
        iVar6 = *(int *)(lVar1 + 0x1c);
      }
      uVar5 = (uint)uVar7;
      *(int *)((longlong)_Dst + uVar3 * 4) = iVar6;
      uVar4 = (int)uVar3 + 1;
      uVar12 = *(uint *)(param_1 + 0xc);
      uVar3 = (ulonglong)uVar4;
      param_2 = local_100;
      param_3 = local_104;
    } while (uVar4 < uVar12);
  }
  if (uVar5 != uVar12) {
    if (*(char *)((longlong)param_1 + 100) == '\0') {
      lVar9 = param_1[9];
      if ((int)(param_1[10] - lVar9 >> 2) != 0) {
        do {
          *(undefined4 *)(lVar9 + uVar13 * 4) =
               *(undefined4 *)((longlong)_Dst + (ulonglong)*(uint *)(lVar9 + uVar13 * 4) * 4);
          uVar12 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar12;
          lVar9 = param_1[9];
        } while (uVar12 < (uint)(param_1[10] - lVar9 >> 2));
      }
    }
    else {
      FUN_144d7dde0(param_1,uVar12);
      if (*(int *)(param_1 + 0xc) != 0) {
        do {
          *(undefined4 *)(param_1[9] + uVar13 * 4) = *(undefined4 *)((longlong)_Dst + uVar13 * 4);
          uVar12 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar12;
        } while (uVar12 < *(uint *)(param_1 + 0xc));
      }
    }
    *(uint *)(param_1 + 0xc) = uVar5;
  }
  if (_Dst != (void *)0x0) {
    uVar3 = ((longlong)local_e8 - (longlong)_Dst >> 2) * 4;
    pvVar11 = _Dst;
    if (0xfff < uVar3) {
      uVar3 = uVar3 + 0x27;
      pvVar11 = *(void **)((longlong)_Dst + -8);
      if (0x1f < (ulonglong)((longlong)_Dst + (-8 - (longlong)pvVar11))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(pvVar11,uVar3);
  }
  FUN_145184760(local_c8);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_128);
}



// FUNCTION 1451828a0 FUN_1451828a0 body=889 status=ok
// SIG undefined FUN_1451828a0(void)

void FUN_1451828a0(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  void *_Dst;
  longlong lVar3;
  byte *pbVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  void *pvVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 auStack_128 [32];
  int local_108;
  int local_104;
  undefined8 *local_100;
  void *local_f8;
  void *pvStack_f0;
  void *local_e8;
  undefined8 *local_e0;
  longlong local_d8;
  undefined4 local_c8 [2];
  longlong local_c0;
  undefined8 local_b8;
  longlong local_b0 [5];
  undefined1 local_88 [16];
  undefined8 local_78;
  longlong lStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int local_58;
  longlong local_50;
  longlong lStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar15 = 0;
  uVar7 = 0;
  local_c8[0] = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_104 = param_3;
  local_100 = param_2;
  local_e0 = param_1;
  local_c0 = FUN_14494321d(0x28);
  *(longlong *)local_c0 = local_c0;
  *(longlong *)(local_c0 + 8) = local_c0;
  local_b0[0] = 0;
  local_b0[1] = 0;
  local_b0[2] = 0;
  local_b0[3] = 7;
  local_b0[4] = 8;
  local_c8[0] = 0x3f800000;
  FUN_145184a30(local_b0,0x10,local_c0);
  uVar5 = (ulonglong)*(uint *)(param_1 + 0xc);
  local_f8 = (void *)0x0;
  pvStack_f0 = (void *)0x0;
  local_e8 = (void *)0x0;
  if (uVar5 == 0) {
    _Dst = (void *)0x0;
  }
  else {
    _Dst = (void *)FUN_14517d8c0(&local_f8);
    pvVar13 = (void *)((longlong)_Dst + uVar5 * 4);
    local_f8 = _Dst;
    local_e8 = pvVar13;
    memset(_Dst,0,uVar5 << 2);
    param_2 = local_100;
    pvStack_f0 = pvVar13;
  }
  uVar14 = 0;
  uVar5 = uVar15;
  uVar9 = uVar15;
  if (*(int *)(param_1 + 0xc) != 0) {
    do {
      param_1 = local_e0;
      iVar8 = (int)uVar9;
      lVar12 = (ulonglong)(uint)((int)uVar5 + param_3) * param_2[5] + param_2[6];
      local_d8 = *(longlong *)*param_2;
      plVar1 = (longlong *)(local_d8 + lVar12);
      local_50 = *plVar1;
      lStack_48 = plVar1[1];
      local_78 = local_50;
      lStack_70 = lStack_48;
      uVar10 = 0x4f;
      pbVar4 = (byte *)((longlong)&local_78 + 2);
      lVar11 = 4;
      do {
        uVar10 = (((((ulonglong)pbVar4[-2] ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)pbVar4[-1]) * 0x100000001b3 ^ (ulonglong)*pbVar4) * 0x100000001b3 ^
                 (ulonglong)pbVar4[1]) * 0x20000000366 + 0xd6 ^ uVar10 + 0x3f5;
        pbVar4 = pbVar4 + 4;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      lVar11 = *(longlong *)(local_b0[0] + 8 + (local_b0[3] & uVar10) * 0x10);
      if (lVar11 == local_c0) {
LAB_145182ab3:
        lVar11 = 0;
      }
      else {
        lVar3 = local_50 - *(longlong *)(lVar11 + 0x10);
        if (lVar3 == 0) {
          lVar3 = lStack_48 - *(longlong *)(lVar11 + 0x18);
        }
        while (lVar3 != 0) {
          if (lVar11 == *(longlong *)(local_b0[0] + (local_b0[3] & uVar10) * 0x10))
          goto LAB_145182ab3;
          lVar11 = *(longlong *)(lVar11 + 8);
          lVar3 = local_50 - *(longlong *)(lVar11 + 0x10);
          if (lVar3 == 0) {
            lVar3 = lStack_48 - *(longlong *)(lVar11 + 0x18);
          }
        }
      }
      lVar3 = local_c0;
      if (lVar11 != 0) {
        lVar3 = lVar11;
      }
      local_108 = iVar8;
      if (lVar3 == local_c0) {
        puVar2 = (undefined4 *)(local_d8 + lVar12);
        local_68 = *puVar2;
        uStack_64 = puVar2[1];
        uStack_60 = puVar2[2];
        uStack_5c = puVar2[3];
        local_58 = iVar8;
        FUN_1451881e0(local_c8,local_88,&local_68);
        memcpy((void *)(*(longlong *)*param_1 + uVar9 * param_1[5]),&local_50,param_1[5]);
        uVar9 = (ulonglong)(iVar8 + 1);
        iVar8 = local_108;
      }
      else {
        iVar8 = *(int *)(lVar3 + 0x20);
      }
      uVar7 = (uint)uVar9;
      *(int *)((longlong)_Dst + uVar5 * 4) = iVar8;
      uVar6 = (int)uVar5 + 1;
      uVar14 = *(uint *)(param_1 + 0xc);
      uVar5 = (ulonglong)uVar6;
      param_2 = local_100;
      param_3 = local_104;
    } while (uVar6 < uVar14);
  }
  if (uVar7 != uVar14) {
    if (*(char *)((longlong)param_1 + 100) == '\0') {
      lVar11 = param_1[9];
      if ((int)(param_1[10] - lVar11 >> 2) != 0) {
        do {
          *(undefined4 *)(lVar11 + uVar15 * 4) =
               *(undefined4 *)((longlong)_Dst + (ulonglong)*(uint *)(lVar11 + uVar15 * 4) * 4);
          uVar14 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar14;
          lVar11 = param_1[9];
        } while (uVar14 < (uint)(param_1[10] - lVar11 >> 2));
      }
    }
    else {
      FUN_144d7dde0(param_1,uVar14);
      if (*(int *)(param_1 + 0xc) != 0) {
        do {
          *(undefined4 *)(param_1[9] + uVar15 * 4) = *(undefined4 *)((longlong)_Dst + uVar15 * 4);
          uVar14 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar14;
        } while (uVar14 < *(uint *)(param_1 + 0xc));
      }
    }
    *(uint *)(param_1 + 0xc) = uVar7;
  }
  if (_Dst != (void *)0x0) {
    uVar5 = ((longlong)local_e8 - (longlong)_Dst >> 2) * 4;
    pvVar13 = _Dst;
    if (0xfff < uVar5) {
      uVar5 = uVar5 + 0x27;
      pvVar13 = *(void **)((longlong)_Dst + -8);
      if (0x1f < (ulonglong)((longlong)_Dst + (-8 - (longlong)pvVar13))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(pvVar13,uVar5);
  }
  FUN_145184bd0(local_c8);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_128);
}



// FUNCTION 145182c40 FUN_145182c40 body=808 status=ok
// SIG undefined FUN_145182c40(void)

void FUN_145182c40(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  void *_Dst;
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  void *pvVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auStack_e8 [32];
  uint local_c8;
  int local_c4;
  undefined8 *local_c0;
  void *local_b8;
  void *pvStack_b0;
  void *local_a8;
  undefined4 local_98 [2];
  longlong local_90;
  undefined8 local_88;
  longlong local_80 [5];
  undefined1 local_58 [16];
  uint local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar11 = 0;
  uVar6 = 0;
  local_98[0] = 0;
  local_90 = 0;
  local_88 = 0;
  local_c0 = param_2;
  local_90 = FUN_14494321d(0x18);
  *(longlong *)local_90 = local_90;
  *(longlong *)(local_90 + 8) = local_90;
  local_80[0] = 0;
  local_80[1] = 0;
  local_80[2] = 0;
  local_80[3] = 7;
  local_80[4] = 8;
  local_98[0] = 0x3f800000;
  FUN_145183c90(local_80,0x10,local_90);
  uVar4 = (ulonglong)*(uint *)(param_1 + 0xc);
  local_b8 = (void *)0x0;
  pvStack_b0 = (void *)0x0;
  local_a8 = (void *)0x0;
  if (uVar4 == 0) {
    _Dst = (void *)0x0;
  }
  else {
    _Dst = (void *)FUN_14517d8c0(&local_b8);
    pvVar9 = (void *)((longlong)_Dst + uVar4 * 4);
    local_b8 = _Dst;
    local_a8 = pvVar9;
    memset(_Dst,0,uVar4 << 2);
    param_2 = local_c0;
    pvStack_b0 = pvVar9;
  }
  uVar10 = 0;
  uVar4 = uVar11;
  uVar8 = uVar11;
  if (*(int *)(param_1 + 0xc) != 0) {
    do {
      iVar7 = (int)uVar8;
      local_c8 = *(uint *)((ulonglong)(uint)((int)uVar4 + param_3) * param_2[5] + param_2[6] +
                          *(longlong *)*param_2);
      uVar2 = local_80[3] &
              (((((ulonglong)(local_c8 >> 8 & 0xff) ^
                 ((ulonglong)(local_c8 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3) *
                 0x100000001b3 ^ (ulonglong)(local_c8 >> 0x10 & 0xff)) * 0x100000001b3 ^
               (ulonglong)(local_c8 >> 0x18)) * 0x20000000366 + 0xd6 ^ 0x444);
      lVar1 = *(longlong *)(local_80[0] + 8 + uVar2 * 0x10);
      if (lVar1 == local_90) {
LAB_145182e01:
        lVar1 = 0;
      }
      else {
        uVar6 = *(uint *)(lVar1 + 0x10);
        while (local_c8 != uVar6) {
          if (lVar1 == *(longlong *)(local_80[0] + uVar2 * 0x10)) goto LAB_145182e01;
          lVar1 = *(longlong *)(lVar1 + 8);
          uVar6 = *(uint *)(lVar1 + 0x10);
        }
      }
      lVar3 = local_90;
      if (lVar1 != 0) {
        lVar3 = lVar1;
      }
      local_c4 = iVar7;
      if (lVar3 == local_90) {
        local_48 = local_c8;
        local_44 = iVar7;
        FUN_145187770(local_98,local_58,&local_48);
        memcpy((void *)(*(longlong *)*param_1 + uVar8 * param_1[5]),&local_c8,param_1[5]);
        uVar8 = (ulonglong)(iVar7 + 1);
        iVar7 = local_c4;
      }
      else {
        iVar7 = *(int *)(lVar3 + 0x14);
      }
      uVar6 = (uint)uVar8;
      *(int *)((longlong)_Dst + uVar4 * 4) = iVar7;
      uVar5 = (int)uVar4 + 1;
      uVar10 = *(uint *)(param_1 + 0xc);
      uVar4 = (ulonglong)uVar5;
      param_2 = local_c0;
    } while (uVar5 < uVar10);
  }
  if (uVar6 != uVar10) {
    if (*(char *)((longlong)param_1 + 100) == '\0') {
      lVar1 = param_1[9];
      if ((int)(param_1[10] - lVar1 >> 2) != 0) {
        do {
          *(undefined4 *)(lVar1 + uVar11 * 4) =
               *(undefined4 *)((longlong)_Dst + (ulonglong)*(uint *)(lVar1 + uVar11 * 4) * 4);
          uVar10 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar10;
          lVar1 = param_1[9];
        } while (uVar10 < (uint)(param_1[10] - lVar1 >> 2));
      }
    }
    else {
      FUN_144d7dde0(param_1,uVar10);
      if (*(int *)(param_1 + 0xc) != 0) {
        do {
          *(undefined4 *)(param_1[9] + uVar11 * 4) = *(undefined4 *)((longlong)_Dst + uVar11 * 4);
          uVar10 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar10;
        } while (uVar10 < *(uint *)(param_1 + 0xc));
      }
    }
    *(uint *)(param_1 + 0xc) = uVar6;
  }
  if (_Dst != (void *)0x0) {
    uVar4 = ((longlong)local_a8 - (longlong)_Dst >> 2) * 4;
    pvVar9 = _Dst;
    if (0xfff < uVar4) {
      uVar4 = uVar4 + 0x27;
      pvVar9 = *(void **)((longlong)_Dst + -8);
      if (0x1f < (ulonglong)((longlong)_Dst + (-8 - (longlong)pvVar9))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(pvVar9,uVar4);
  }
  FUN_145183e30(local_98);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_e8);
}



// FUNCTION 145182f90 FUN_145182f90 body=824 status=ok
// SIG undefined FUN_145182f90(void)

void FUN_145182f90(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  void *_Dst;
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  byte *pbVar7;
  ulonglong uVar8;
  longlong lVar9;
  void *pvVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 auStack_108 [32];
  int local_e8;
  int local_e4;
  undefined8 *local_e0;
  void *local_d8;
  void *pvStack_d0;
  void *local_c8;
  undefined8 *local_c0;
  undefined4 local_b8 [2];
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0 [5];
  undefined1 local_78 [16];
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar12 = 0;
  uVar4 = 0;
  local_b8[0] = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_e4 = param_3;
  local_e0 = param_2;
  local_c0 = param_1;
  local_b0 = FUN_14494321d(0x20);
  *(longlong *)local_b0 = local_b0;
  *(longlong *)(local_b0 + 8) = local_b0;
  local_a0[0] = 0;
  local_a0[1] = 0;
  local_a0[2] = 0;
  local_a0[3] = 7;
  local_a0[4] = 8;
  local_b8[0] = 0x3f800000;
  FUN_145184150(local_a0,0x10,local_b0);
  uVar2 = (ulonglong)*(uint *)(param_1 + 0xc);
  local_d8 = (void *)0x0;
  pvStack_d0 = (void *)0x0;
  local_c8 = (void *)0x0;
  if (uVar2 == 0) {
    _Dst = (void *)0x0;
  }
  else {
    _Dst = (void *)FUN_14517d8c0(&local_d8);
    pvVar10 = (void *)((longlong)_Dst + uVar2 * 4);
    local_d8 = _Dst;
    local_c8 = pvVar10;
    memset(_Dst,0,uVar2 << 2);
    param_2 = local_e0;
    pvStack_d0 = pvVar10;
  }
  uVar11 = 0;
  uVar2 = uVar12;
  uVar6 = uVar12;
  if (*(int *)(param_1 + 0xc) != 0) {
    do {
      param_1 = local_c0;
      iVar5 = (int)uVar6;
      local_60 = *(longlong *)
                  ((ulonglong)(uint)((int)uVar2 + param_3) * param_2[5] + param_2[6] +
                  *(longlong *)*param_2);
      local_68 = local_60;
      uVar8 = 0x4f;
      pbVar7 = (byte *)((longlong)&local_68 + 2);
      lVar9 = 2;
      do {
        uVar8 = (((((ulonglong)pbVar7[-2] ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                  (ulonglong)pbVar7[-1]) * 0x100000001b3 ^ (ulonglong)*pbVar7) * 0x100000001b3 ^
                (ulonglong)pbVar7[1]) * 0x20000000366 + 0xd6 ^ uVar8 + 0x3f5;
        pbVar7 = pbVar7 + 4;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      lVar9 = *(longlong *)(local_a0[0] + 8 + (local_a0[3] & uVar8) * 0x10);
      if (lVar9 == local_b0) {
LAB_145183171:
        lVar9 = 0;
      }
      else {
        lVar1 = *(longlong *)(lVar9 + 0x10);
        while (local_60 != lVar1) {
          if (lVar9 == *(longlong *)(local_a0[0] + (local_a0[3] & uVar8) * 0x10))
          goto LAB_145183171;
          lVar9 = *(longlong *)(lVar9 + 8);
          lVar1 = *(longlong *)(lVar9 + 0x10);
        }
      }
      lVar1 = local_b0;
      if (lVar9 != 0) {
        lVar1 = lVar9;
      }
      local_e8 = iVar5;
      if (lVar1 == local_b0) {
        local_58 = local_60;
        local_50 = iVar5;
        FUN_145187af0(local_b8,local_78,&local_58);
        memcpy((void *)(*(longlong *)*param_1 + uVar6 * param_1[5]),&local_60,param_1[5]);
        uVar6 = (ulonglong)(iVar5 + 1);
        iVar5 = local_e8;
      }
      else {
        iVar5 = *(int *)(lVar1 + 0x18);
      }
      uVar4 = (uint)uVar6;
      *(int *)((longlong)_Dst + uVar2 * 4) = iVar5;
      uVar3 = (int)uVar2 + 1;
      uVar11 = *(uint *)(param_1 + 0xc);
      uVar2 = (ulonglong)uVar3;
      param_2 = local_e0;
      param_3 = local_e4;
    } while (uVar3 < uVar11);
  }
  if (uVar4 != uVar11) {
    if (*(char *)((longlong)param_1 + 100) == '\0') {
      lVar9 = param_1[9];
      if ((int)(param_1[10] - lVar9 >> 2) != 0) {
        do {
          *(undefined4 *)(lVar9 + uVar12 * 4) =
               *(undefined4 *)((longlong)_Dst + (ulonglong)*(uint *)(lVar9 + uVar12 * 4) * 4);
          uVar11 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar11;
          lVar9 = param_1[9];
        } while (uVar11 < (uint)(param_1[10] - lVar9 >> 2));
      }
    }
    else {
      FUN_144d7dde0(param_1,uVar11);
      if (*(int *)(param_1 + 0xc) != 0) {
        do {
          *(undefined4 *)(param_1[9] + uVar12 * 4) = *(undefined4 *)((longlong)_Dst + uVar12 * 4);
          uVar11 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar11;
        } while (uVar11 < *(uint *)(param_1 + 0xc));
      }
    }
    *(uint *)(param_1 + 0xc) = uVar4;
  }
  if (_Dst != (void *)0x0) {
    uVar2 = ((longlong)local_c8 - (longlong)_Dst >> 2) * 4;
    pvVar10 = _Dst;
    if (0xfff < uVar2) {
      uVar2 = uVar2 + 0x27;
      pvVar10 = *(void **)((longlong)_Dst + -8);
      if (0x1f < (ulonglong)((longlong)_Dst + (-8 - (longlong)pvVar10))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(pvVar10,uVar2);
  }
  FUN_1451842f0(local_b8);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_108);
}



// FUNCTION 1451832f0 FUN_1451832f0 body=905 status=ok
// SIG undefined FUN_1451832f0(void)

void FUN_1451832f0(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  void *_Dst;
  longlong lVar1;
  byte *pbVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  void *pvVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 auStack_128 [32];
  int local_108;
  int local_104;
  undefined8 *local_100;
  void *local_f8;
  void *pvStack_f0;
  void *local_e8;
  undefined8 *local_e0;
  longlong local_d8;
  undefined4 local_c8 [2];
  longlong local_c0;
  undefined8 local_b8;
  longlong local_b0 [5];
  undefined1 local_88 [16];
  undefined8 local_78;
  uint local_70;
  longlong local_68;
  uint local_60;
  undefined8 local_58;
  undefined4 local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar13 = 0;
  uVar5 = 0;
  local_c8[0] = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_104 = param_3;
  local_100 = param_2;
  local_e0 = param_1;
  local_c0 = FUN_14494321d(0x20);
  *(longlong *)local_c0 = local_c0;
  *(longlong *)(local_c0 + 8) = local_c0;
  local_b0[0] = 0;
  local_b0[1] = 0;
  local_b0[2] = 0;
  local_b0[3] = 7;
  local_b0[4] = 8;
  local_c8[0] = 0x3f800000;
  FUN_1451845c0(local_b0,0x10,local_c0);
  uVar3 = (ulonglong)*(uint *)(param_1 + 0xc);
  local_f8 = (void *)0x0;
  pvStack_f0 = (void *)0x0;
  local_e8 = (void *)0x0;
  if (uVar3 == 0) {
    _Dst = (void *)0x0;
  }
  else {
    _Dst = (void *)FUN_14517d8c0(&local_f8);
    pvVar11 = (void *)((longlong)_Dst + uVar3 * 4);
    local_f8 = _Dst;
    local_e8 = pvVar11;
    memset(_Dst,0,uVar3 << 2);
    param_2 = local_100;
    pvStack_f0 = pvVar11;
  }
  uVar12 = 0;
  uVar3 = uVar13;
  uVar7 = uVar13;
  if (*(int *)(param_1 + 0xc) != 0) {
    do {
      param_1 = local_e0;
      iVar6 = (int)uVar7;
      lVar10 = (ulonglong)(uint)((int)uVar3 + param_3) * param_2[5] + param_2[6];
      local_d8 = *(longlong *)*param_2;
      local_68 = *(longlong *)(local_d8 + lVar10);
      local_60 = *(uint *)(local_d8 + 8 + lVar10);
      local_78 = local_68;
      local_70 = local_60;
      uVar8 = 0x4f;
      pbVar2 = (byte *)((longlong)&local_78 + 2);
      lVar9 = 3;
      do {
        uVar8 = (((((ulonglong)pbVar2[-2] ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                  (ulonglong)pbVar2[-1]) * 0x100000001b3 ^ (ulonglong)*pbVar2) * 0x100000001b3 ^
                (ulonglong)pbVar2[1]) * 0x20000000366 + 0xd6 ^ uVar8 + 0x3f5;
        pbVar2 = pbVar2 + 4;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      lVar9 = *(longlong *)(local_b0[0] + 8 + (local_b0[3] & uVar8) * 0x10);
      if (lVar9 == local_c0) {
LAB_145183513:
        lVar9 = 0;
      }
      else {
        lVar1 = local_68 - *(longlong *)(lVar9 + 0x10);
        if (lVar1 == 0) {
          lVar1 = (ulonglong)local_60 - (ulonglong)*(uint *)(lVar9 + 0x18);
        }
        while (lVar1 != 0) {
          if (lVar9 == *(longlong *)(local_b0[0] + (local_b0[3] & uVar8) * 0x10))
          goto LAB_145183513;
          lVar9 = *(longlong *)(lVar9 + 8);
          lVar1 = local_68 - *(longlong *)(lVar9 + 0x10);
          if (lVar1 == 0) {
            lVar1 = (ulonglong)local_60 - (ulonglong)*(uint *)(lVar9 + 0x18);
          }
        }
      }
      lVar1 = local_c0;
      if (lVar9 != 0) {
        lVar1 = lVar9;
      }
      local_108 = iVar6;
      if (lVar1 == local_c0) {
        local_58 = *(undefined8 *)(local_d8 + lVar10);
        local_50 = *(undefined4 *)(local_d8 + 8 + lVar10);
        local_4c = iVar6;
        FUN_145187e40(local_c8,local_88,&local_58);
        memcpy((void *)(*(longlong *)*param_1 + uVar7 * param_1[5]),&local_68,param_1[5]);
        uVar7 = (ulonglong)(iVar6 + 1);
        iVar6 = local_108;
      }
      else {
        iVar6 = *(int *)(lVar1 + 0x1c);
      }
      uVar5 = (uint)uVar7;
      *(int *)((longlong)_Dst + uVar3 * 4) = iVar6;
      uVar4 = (int)uVar3 + 1;
      uVar12 = *(uint *)(param_1 + 0xc);
      uVar3 = (ulonglong)uVar4;
      param_2 = local_100;
      param_3 = local_104;
    } while (uVar4 < uVar12);
  }
  if (uVar5 != uVar12) {
    if (*(char *)((longlong)param_1 + 100) == '\0') {
      lVar9 = param_1[9];
      if ((int)(param_1[10] - lVar9 >> 2) != 0) {
        do {
          *(undefined4 *)(lVar9 + uVar13 * 4) =
               *(undefined4 *)((longlong)_Dst + (ulonglong)*(uint *)(lVar9 + uVar13 * 4) * 4);
          uVar12 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar12;
          lVar9 = param_1[9];
        } while (uVar12 < (uint)(param_1[10] - lVar9 >> 2));
      }
    }
    else {
      FUN_144d7dde0(param_1,uVar12);
      if (*(int *)(param_1 + 0xc) != 0) {
        do {
          *(undefined4 *)(param_1[9] + uVar13 * 4) = *(undefined4 *)((longlong)_Dst + uVar13 * 4);
          uVar12 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar12;
        } while (uVar12 < *(uint *)(param_1 + 0xc));
      }
    }
    *(uint *)(param_1 + 0xc) = uVar5;
  }
  if (_Dst != (void *)0x0) {
    uVar3 = ((longlong)local_e8 - (longlong)_Dst >> 2) * 4;
    pvVar11 = _Dst;
    if (0xfff < uVar3) {
      uVar3 = uVar3 + 0x27;
      pvVar11 = *(void **)((longlong)_Dst + -8);
      if (0x1f < (ulonglong)((longlong)_Dst + (-8 - (longlong)pvVar11))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(pvVar11,uVar3);
  }
  FUN_145184760(local_c8);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_128);
}



// FUNCTION 1451836a0 FUN_1451836a0 body=889 status=ok
// SIG undefined FUN_1451836a0(void)

void FUN_1451836a0(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  void *_Dst;
  longlong lVar3;
  byte *pbVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  void *pvVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 auStack_128 [32];
  int local_108;
  int local_104;
  undefined8 *local_100;
  void *local_f8;
  void *pvStack_f0;
  void *local_e8;
  undefined8 *local_e0;
  longlong local_d8;
  undefined4 local_c8 [2];
  longlong local_c0;
  undefined8 local_b8;
  longlong local_b0 [5];
  undefined1 local_88 [16];
  undefined8 local_78;
  longlong lStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int local_58;
  longlong local_50;
  longlong lStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar15 = 0;
  uVar7 = 0;
  local_c8[0] = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_104 = param_3;
  local_100 = param_2;
  local_e0 = param_1;
  local_c0 = FUN_14494321d(0x28);
  *(longlong *)local_c0 = local_c0;
  *(longlong *)(local_c0 + 8) = local_c0;
  local_b0[0] = 0;
  local_b0[1] = 0;
  local_b0[2] = 0;
  local_b0[3] = 7;
  local_b0[4] = 8;
  local_c8[0] = 0x3f800000;
  FUN_145184a30(local_b0,0x10,local_c0);
  uVar5 = (ulonglong)*(uint *)(param_1 + 0xc);
  local_f8 = (void *)0x0;
  pvStack_f0 = (void *)0x0;
  local_e8 = (void *)0x0;
  if (uVar5 == 0) {
    _Dst = (void *)0x0;
  }
  else {
    _Dst = (void *)FUN_14517d8c0(&local_f8);
    pvVar13 = (void *)((longlong)_Dst + uVar5 * 4);
    local_f8 = _Dst;
    local_e8 = pvVar13;
    memset(_Dst,0,uVar5 << 2);
    param_2 = local_100;
    pvStack_f0 = pvVar13;
  }
  uVar14 = 0;
  uVar5 = uVar15;
  uVar9 = uVar15;
  if (*(int *)(param_1 + 0xc) != 0) {
    do {
      param_1 = local_e0;
      iVar8 = (int)uVar9;
      lVar12 = (ulonglong)(uint)((int)uVar5 + param_3) * param_2[5] + param_2[6];
      local_d8 = *(longlong *)*param_2;
      plVar1 = (longlong *)(local_d8 + lVar12);
      local_50 = *plVar1;
      lStack_48 = plVar1[1];
      local_78 = local_50;
      lStack_70 = lStack_48;
      uVar10 = 0x4f;
      pbVar4 = (byte *)((longlong)&local_78 + 2);
      lVar11 = 4;
      do {
        uVar10 = (((((ulonglong)pbVar4[-2] ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)pbVar4[-1]) * 0x100000001b3 ^ (ulonglong)*pbVar4) * 0x100000001b3 ^
                 (ulonglong)pbVar4[1]) * 0x20000000366 + 0xd6 ^ uVar10 + 0x3f5;
        pbVar4 = pbVar4 + 4;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      lVar11 = *(longlong *)(local_b0[0] + 8 + (local_b0[3] & uVar10) * 0x10);
      if (lVar11 == local_c0) {
LAB_1451838b3:
        lVar11 = 0;
      }
      else {
        lVar3 = local_50 - *(longlong *)(lVar11 + 0x10);
        if (lVar3 == 0) {
          lVar3 = lStack_48 - *(longlong *)(lVar11 + 0x18);
        }
        while (lVar3 != 0) {
          if (lVar11 == *(longlong *)(local_b0[0] + (local_b0[3] & uVar10) * 0x10))
          goto LAB_1451838b3;
          lVar11 = *(longlong *)(lVar11 + 8);
          lVar3 = local_50 - *(longlong *)(lVar11 + 0x10);
          if (lVar3 == 0) {
            lVar3 = lStack_48 - *(longlong *)(lVar11 + 0x18);
          }
        }
      }
      lVar3 = local_c0;
      if (lVar11 != 0) {
        lVar3 = lVar11;
      }
      local_108 = iVar8;
      if (lVar3 == local_c0) {
        puVar2 = (undefined4 *)(local_d8 + lVar12);
        local_68 = *puVar2;
        uStack_64 = puVar2[1];
        uStack_60 = puVar2[2];
        uStack_5c = puVar2[3];
        local_58 = iVar8;
        FUN_1451881e0(local_c8,local_88,&local_68);
        memcpy((void *)(*(longlong *)*param_1 + uVar9 * param_1[5]),&local_50,param_1[5]);
        uVar9 = (ulonglong)(iVar8 + 1);
        iVar8 = local_108;
      }
      else {
        iVar8 = *(int *)(lVar3 + 0x20);
      }
      uVar7 = (uint)uVar9;
      *(int *)((longlong)_Dst + uVar5 * 4) = iVar8;
      uVar6 = (int)uVar5 + 1;
      uVar14 = *(uint *)(param_1 + 0xc);
      uVar5 = (ulonglong)uVar6;
      param_2 = local_100;
      param_3 = local_104;
    } while (uVar6 < uVar14);
  }
  if (uVar7 != uVar14) {
    if (*(char *)((longlong)param_1 + 100) == '\0') {
      lVar11 = param_1[9];
      if ((int)(param_1[10] - lVar11 >> 2) != 0) {
        do {
          *(undefined4 *)(lVar11 + uVar15 * 4) =
               *(undefined4 *)((longlong)_Dst + (ulonglong)*(uint *)(lVar11 + uVar15 * 4) * 4);
          uVar14 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar14;
          lVar11 = param_1[9];
        } while (uVar14 < (uint)(param_1[10] - lVar11 >> 2));
      }
    }
    else {
      FUN_144d7dde0(param_1,uVar14);
      if (*(int *)(param_1 + 0xc) != 0) {
        do {
          *(undefined4 *)(param_1[9] + uVar15 * 4) = *(undefined4 *)((longlong)_Dst + uVar15 * 4);
          uVar14 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar14;
        } while (uVar14 < *(uint *)(param_1 + 0xc));
      }
    }
    *(uint *)(param_1 + 0xc) = uVar7;
  }
  if (_Dst != (void *)0x0) {
    uVar5 = ((longlong)local_e8 - (longlong)_Dst >> 2) * 4;
    pvVar13 = _Dst;
    if (0xfff < uVar5) {
      uVar5 = uVar5 + 0x27;
      pvVar13 = *(void **)((longlong)_Dst + -8);
      if (0x1f < (ulonglong)((longlong)_Dst + (-8 - (longlong)pvVar13))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(pvVar13,uVar5);
  }
  FUN_145184bd0(local_c8);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_128);
}



// FUNCTION 145183a40 FUN_145183a40 body=92 status=ok
// SIG undefined FUN_145183a40(void)

void FUN_145183a40(longlong *param_1)

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



// FUNCTION 145183aa0 FUN_145183aa0 body=480 status=ok
// SIG undefined FUN_145183aa0(void)

void FUN_145183aa0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  
  for (lVar9 = 0x3f; 0xfffffffffffffffU >> lVar9 == 0; lVar9 = lVar9 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar9 & 0x3f)) < param_2) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("invalid hash bucket count");
  }
  plVar1 = *(longlong **)(param_1 + 8);
  uVar8 = param_2 - 1 | 1;
  lVar9 = 0x3f;
  if (uVar8 != 0) {
    for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
    }
  }
  lVar9 = 1L << ((char)lVar9 + 1U & 0x3f);
  FUN_145183c90(param_1 + 0x18,lVar9 * 2,plVar1);
  *(longlong *)(param_1 + 0x38) = lVar9;
  *(longlong *)(param_1 + 0x30) = lVar9 + -1;
  plVar7 = (longlong *)**(undefined8 **)(param_1 + 8);
joined_r0x000145183b12:
  do {
    while( true ) {
      while( true ) {
        if (plVar7 == plVar1) {
          return;
        }
        plVar2 = (longlong *)*plVar7;
        puVar10 = (undefined8 *)
                  ((*(ulonglong *)(param_1 + 0x30) &
                   ((((((ulonglong)*(byte *)(plVar7 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar7 + 0x11)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar7 + 0x12)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar7 + 0x13)) * 0x20000000366 + 0xd6 ^ 0x444))
                   * 0x10 + *(longlong *)(param_1 + 0x18));
        if ((longlong *)*puVar10 != plVar1) break;
        *puVar10 = plVar7;
        puVar10[1] = plVar7;
        plVar7 = plVar2;
      }
      plVar3 = (longlong *)puVar10[1];
      if ((int)plVar7[2] != (int)plVar3[2]) break;
      plVar3 = (longlong *)*plVar3;
      if (plVar3 != plVar7) {
        plVar4 = (longlong *)plVar7[1];
        *plVar4 = (longlong)plVar2;
        puVar5 = (undefined8 *)plVar2[1];
        *puVar5 = plVar3;
        puVar6 = (undefined8 *)plVar3[1];
        *puVar6 = plVar7;
        plVar3[1] = (longlong)puVar5;
        plVar2[1] = (longlong)plVar4;
        plVar7[1] = (longlong)puVar6;
      }
      puVar10[1] = plVar7;
      plVar7 = plVar2;
    }
    do {
      if ((longlong *)*puVar10 == plVar3) {
        plVar4 = (longlong *)plVar7[1];
        *plVar4 = (longlong)plVar2;
        puVar5 = (undefined8 *)plVar2[1];
        *puVar5 = plVar3;
        puVar6 = (undefined8 *)plVar3[1];
        *puVar6 = plVar7;
        plVar3[1] = (longlong)puVar5;
        plVar2[1] = (longlong)plVar4;
        plVar7[1] = (longlong)puVar6;
        *puVar10 = plVar7;
        plVar7 = plVar2;
        goto joined_r0x000145183b12;
      }
      plVar3 = (longlong *)plVar3[1];
    } while ((int)plVar7[2] != (int)plVar3[2]);
    lVar9 = *plVar3;
    plVar3 = (longlong *)plVar7[1];
    *plVar3 = (longlong)plVar2;
    plVar4 = (longlong *)plVar2[1];
    *plVar4 = lVar9;
    puVar10 = *(undefined8 **)(lVar9 + 8);
    *puVar10 = plVar7;
    *(longlong **)(lVar9 + 8) = plVar4;
    plVar2[1] = (longlong)plVar3;
    plVar7[1] = (longlong)puVar10;
    plVar7 = plVar2;
  } while( true );
}



// FUNCTION 145183c90 FUN_145183c90 body=313 status=ok
// SIG undefined FUN_145183c90(void)

void FUN_145183c90(ulonglong *param_1,ulonglong param_2,undefined8 param_3)

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
    FUN_1451876e0(*param_1,param_1[1],&local_res18);
    return;
  }
  if (0x1fffffffffffffff < param_2) {
LAB_145183dc5:
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
    if (uVar2 + 0x27 <= uVar2) goto LAB_145183dc5;
    lVar3 = FUN_14494321d();
    if (lVar3 == 0) goto LAB_145183da2;
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
LAB_145183da2:
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



// FUNCTION 145183dd0 FID_conflict:~vector<CHN*___ptr64,std::allocator<CHN*___ptr64>_> body=91 status=ok
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



// FUNCTION 145183e30 FUN_145183e30 body=163 status=ok
// SIG undefined FUN_145183e30(void)

void FUN_145183e30(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0) {
    uVar5 = *(longlong *)(param_1 + 0x28) - lVar1 & 0xfffffffffffffff8;
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
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  puVar2 = *(undefined8 **)(param_1 + 8);
  *(undefined8 *)puVar2[1] = 0;
  puVar2 = (undefined8 *)*puVar2;
  while (puVar2 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar2;
    thunk_FUN_1400020a8(puVar2,0x18);
    puVar2 = puVar3;
  }
  thunk_FUN_1400020a8(*(undefined8 *)(param_1 + 8),0x18);
  return;
}



// FUNCTION 145183ef0 FUN_145183ef0 body=91 status=ok
// SIG undefined FUN_145183ef0(void)

void FUN_145183ef0(longlong *param_1)

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



// FUNCTION 145183f50 FUN_145183f50 body=92 status=ok
// SIG undefined FUN_145183f50(void)

void FUN_145183f50(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    thunk_FUN_1400020a8(puVar1,0x20);
    puVar1 = puVar2;
  }
  thunk_FUN_1400020a8(*param_1,0x20);
  return;
}



// FUNCTION 145183fb0 FUN_145183fb0 body=401 status=ok
// SIG undefined FUN_145183fb0(void)

void FUN_145183fb0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  
  for (lVar9 = 0x3f; 0xfffffffffffffffU >> lVar9 == 0; lVar9 = lVar9 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar9 & 0x3f)) < param_2) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("invalid hash bucket count");
  }
  plVar1 = *(longlong **)(param_1 + 8);
  uVar8 = param_2 - 1 | 1;
  lVar9 = 0x3f;
  if (uVar8 != 0) {
    for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
    }
  }
  lVar9 = 1L << ((char)lVar9 + 1U & 0x3f);
  FUN_145184150(param_1 + 0x18,lVar9 * 2,plVar1);
  *(longlong *)(param_1 + 0x38) = lVar9;
  *(longlong *)(param_1 + 0x30) = lVar9 + -1;
  plVar7 = (longlong *)**(undefined8 **)(param_1 + 8);
joined_r0x000145184027:
  do {
    while( true ) {
      while( true ) {
        if (plVar7 == plVar1) {
          return;
        }
        plVar2 = (longlong *)*plVar7;
        uVar8 = FUN_145187a50(param_1,plVar7 + 2);
        puVar10 = (undefined8 *)
                  (*(longlong *)(param_1 + 0x18) + (uVar8 & *(ulonglong *)(param_1 + 0x30)) * 0x10);
        if ((longlong *)*puVar10 != plVar1) break;
        *puVar10 = plVar7;
        puVar10[1] = plVar7;
        plVar7 = plVar2;
      }
      plVar3 = (longlong *)puVar10[1];
      if (plVar7[2] != plVar3[2]) break;
      plVar3 = (longlong *)*plVar3;
      if (plVar3 != plVar7) {
        plVar4 = (longlong *)plVar7[1];
        *plVar4 = (longlong)plVar2;
        puVar5 = (undefined8 *)plVar2[1];
        *puVar5 = plVar3;
        puVar6 = (undefined8 *)plVar3[1];
        *puVar6 = plVar7;
        plVar3[1] = (longlong)puVar5;
        plVar2[1] = (longlong)plVar4;
        plVar7[1] = (longlong)puVar6;
      }
      puVar10[1] = plVar7;
      plVar7 = plVar2;
    }
    do {
      if ((longlong *)*puVar10 == plVar3) {
        plVar4 = (longlong *)plVar7[1];
        *plVar4 = (longlong)plVar2;
        puVar5 = (undefined8 *)plVar2[1];
        *puVar5 = plVar3;
        puVar6 = (undefined8 *)plVar3[1];
        *puVar6 = plVar7;
        plVar3[1] = (longlong)puVar5;
        plVar2[1] = (longlong)plVar4;
        plVar7[1] = (longlong)puVar6;
        *puVar10 = plVar7;
        plVar7 = plVar2;
        goto joined_r0x000145184027;
      }
      plVar3 = (longlong *)plVar3[1];
    } while (plVar7[2] != plVar3[2]);
    lVar9 = *plVar3;
    plVar3 = (longlong *)plVar7[1];
    *plVar3 = (longlong)plVar2;
    plVar4 = (longlong *)plVar2[1];
    *plVar4 = lVar9;
    puVar10 = *(undefined8 **)(lVar9 + 8);
    *puVar10 = plVar7;
    *(longlong **)(lVar9 + 8) = plVar4;
    plVar2[1] = (longlong)plVar3;
    plVar7[1] = (longlong)puVar10;
    plVar7 = plVar2;
  } while( true );
}



// FUNCTION 145184150 FUN_145184150 body=313 status=ok
// SIG undefined FUN_145184150(void)

void FUN_145184150(ulonglong *param_1,ulonglong param_2,undefined8 param_3)

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
    FUN_145187650(*param_1,param_1[1],&local_res18);
    return;
  }
  if (0x1fffffffffffffff < param_2) {
LAB_145184285:
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
    if (uVar2 + 0x27 <= uVar2) goto LAB_145184285;
    lVar3 = FUN_14494321d();
    if (lVar3 == 0) goto LAB_145184262;
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
LAB_145184262:
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



// FUNCTION 145184290 FID_conflict:~vector<CHN*___ptr64,std::allocator<CHN*___ptr64>_> body=91 status=ok
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



// FUNCTION 1451842f0 FUN_1451842f0 body=163 status=ok
// SIG undefined FUN_1451842f0(void)

void FUN_1451842f0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0) {
    uVar5 = *(longlong *)(param_1 + 0x28) - lVar1 & 0xfffffffffffffff8;
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
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  puVar2 = *(undefined8 **)(param_1 + 8);
  *(undefined8 *)puVar2[1] = 0;
  puVar2 = (undefined8 *)*puVar2;
  while (puVar2 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar2;
    thunk_FUN_1400020a8(puVar2,0x20);
    puVar2 = puVar3;
  }
  thunk_FUN_1400020a8(*(undefined8 *)(param_1 + 8),0x20);
  return;
}



// FUNCTION 1451843b0 FUN_1451843b0 body=92 status=ok
// SIG undefined FUN_1451843b0(void)

void FUN_1451843b0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    thunk_FUN_1400020a8(puVar1,0x20);
    puVar1 = puVar2;
  }
  thunk_FUN_1400020a8(*param_1,0x20);
  return;
}



// FUNCTION 145184410 FUN_145184410 body=424 status=ok
// SIG undefined FUN_145184410(void)

void FUN_145184410(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  
  for (lVar9 = 0x3f; 0xfffffffffffffffU >> lVar9 == 0; lVar9 = lVar9 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar9 & 0x3f)) < param_2) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("invalid hash bucket count");
  }
  plVar1 = *(longlong **)(param_1 + 8);
  uVar8 = param_2 - 1 | 1;
  lVar9 = 0x3f;
  if (uVar8 != 0) {
    for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
    }
  }
  lVar9 = 1L << ((char)lVar9 + 1U & 0x3f);
  FUN_1451845c0(param_1 + 0x18,lVar9 * 2,plVar1);
  *(longlong *)(param_1 + 0x38) = lVar9;
  *(longlong *)(param_1 + 0x30) = lVar9 + -1;
  plVar7 = (longlong *)**(undefined8 **)(param_1 + 8);
joined_r0x000145184487:
  do {
    while( true ) {
      while( true ) {
        if (plVar7 == plVar1) {
          return;
        }
        plVar2 = (longlong *)*plVar7;
        uVar8 = FUN_145187da0(param_1,plVar7 + 2);
        puVar10 = (undefined8 *)
                  (*(longlong *)(param_1 + 0x18) + (uVar8 & *(ulonglong *)(param_1 + 0x30)) * 0x10);
        if ((longlong *)*puVar10 != plVar1) break;
        *puVar10 = plVar7;
        puVar10[1] = plVar7;
        plVar7 = plVar2;
      }
      plVar3 = (longlong *)puVar10[1];
      if ((plVar7[2] != plVar3[2]) || ((int)plVar7[3] != (int)plVar3[3])) break;
      plVar3 = (longlong *)*plVar3;
      if (plVar3 != plVar7) {
        plVar4 = (longlong *)plVar7[1];
        *plVar4 = (longlong)plVar2;
        puVar5 = (undefined8 *)plVar2[1];
        *puVar5 = plVar3;
        puVar6 = (undefined8 *)plVar3[1];
        *puVar6 = plVar7;
        plVar3[1] = (longlong)puVar5;
        plVar2[1] = (longlong)plVar4;
        plVar7[1] = (longlong)puVar6;
      }
      puVar10[1] = plVar7;
      plVar7 = plVar2;
    }
    do {
      if ((longlong *)*puVar10 == plVar3) {
        plVar4 = (longlong *)plVar7[1];
        *plVar4 = (longlong)plVar2;
        puVar5 = (undefined8 *)plVar2[1];
        *puVar5 = plVar3;
        puVar6 = (undefined8 *)plVar3[1];
        *puVar6 = plVar7;
        plVar3[1] = (longlong)puVar5;
        plVar2[1] = (longlong)plVar4;
        plVar7[1] = (longlong)puVar6;
        *puVar10 = plVar7;
        plVar7 = plVar2;
        goto joined_r0x000145184487;
      }
      plVar3 = (longlong *)plVar3[1];
    } while ((plVar7[2] != plVar3[2]) || ((int)plVar7[3] != (int)plVar3[3]));
    lVar9 = *plVar3;
    plVar3 = (longlong *)plVar7[1];
    *plVar3 = (longlong)plVar2;
    plVar4 = (longlong *)plVar2[1];
    *plVar4 = lVar9;
    puVar10 = *(undefined8 **)(lVar9 + 8);
    *puVar10 = plVar7;
    *(longlong **)(lVar9 + 8) = plVar4;
    plVar2[1] = (longlong)plVar3;
    plVar7[1] = (longlong)puVar10;
    plVar7 = plVar2;
  } while( true );
}



// FUNCTION 1451845c0 FUN_1451845c0 body=313 status=ok
// SIG undefined FUN_1451845c0(void)

void FUN_1451845c0(ulonglong *param_1,ulonglong param_2,undefined8 param_3)

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
    FUN_1451875c0(*param_1,param_1[1],&local_res18);
    return;
  }
  if (0x1fffffffffffffff < param_2) {
LAB_1451846f5:
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
    if (uVar2 + 0x27 <= uVar2) goto LAB_1451846f5;
    lVar3 = FUN_14494321d();
    if (lVar3 == 0) goto LAB_1451846d2;
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
LAB_1451846d2:
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



// FUNCTION 145184700 FID_conflict:~vector<CHN*___ptr64,std::allocator<CHN*___ptr64>_> body=91 status=ok
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



// FUNCTION 145184760 FUN_145184760 body=163 status=ok
// SIG undefined FUN_145184760(void)

void FUN_145184760(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0) {
    uVar5 = *(longlong *)(param_1 + 0x28) - lVar1 & 0xfffffffffffffff8;
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
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  puVar2 = *(undefined8 **)(param_1 + 8);
  *(undefined8 *)puVar2[1] = 0;
  puVar2 = (undefined8 *)*puVar2;
  while (puVar2 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar2;
    thunk_FUN_1400020a8(puVar2,0x20);
    puVar2 = puVar3;
  }
  thunk_FUN_1400020a8(*(undefined8 *)(param_1 + 8),0x20);
  return;
}



// FUNCTION 145184820 FUN_145184820 body=92 status=ok
// SIG undefined FUN_145184820(void)

void FUN_145184820(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    thunk_FUN_1400020a8(puVar1,0x28);
    puVar1 = puVar2;
  }
  thunk_FUN_1400020a8(*param_1,0x28);
  return;
}



// FUNCTION 145184880 FUN_145184880 body=426 status=ok
// SIG undefined FUN_145184880(void)

void FUN_145184880(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  
  for (lVar9 = 0x3f; 0xfffffffffffffffU >> lVar9 == 0; lVar9 = lVar9 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar9 & 0x3f)) < param_2) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("invalid hash bucket count");
  }
  plVar1 = *(longlong **)(param_1 + 8);
  uVar8 = param_2 - 1 | 1;
  lVar9 = 0x3f;
  if (uVar8 != 0) {
    for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
    }
  }
  lVar9 = 1L << ((char)lVar9 + 1U & 0x3f);
  FUN_145184a30(param_1 + 0x18,lVar9 * 2,plVar1);
  *(longlong *)(param_1 + 0x38) = lVar9;
  *(longlong *)(param_1 + 0x30) = lVar9 + -1;
  plVar7 = (longlong *)**(undefined8 **)(param_1 + 8);
joined_r0x0001451848f7:
  do {
    while( true ) {
      while( true ) {
        if (plVar7 == plVar1) {
          return;
        }
        plVar2 = (longlong *)*plVar7;
        uVar8 = FUN_145188140(param_1,plVar7 + 2);
        puVar10 = (undefined8 *)
                  (*(longlong *)(param_1 + 0x18) + (uVar8 & *(ulonglong *)(param_1 + 0x30)) * 0x10);
        if ((longlong *)*puVar10 != plVar1) break;
        *puVar10 = plVar7;
        puVar10[1] = plVar7;
        plVar7 = plVar2;
      }
      plVar3 = (longlong *)puVar10[1];
      if ((plVar7[2] != plVar3[2]) || (plVar7[3] != plVar3[3])) break;
      plVar3 = (longlong *)*plVar3;
      if (plVar3 != plVar7) {
        plVar4 = (longlong *)plVar7[1];
        *plVar4 = (longlong)plVar2;
        puVar5 = (undefined8 *)plVar2[1];
        *puVar5 = plVar3;
        puVar6 = (undefined8 *)plVar3[1];
        *puVar6 = plVar7;
        plVar3[1] = (longlong)puVar5;
        plVar2[1] = (longlong)plVar4;
        plVar7[1] = (longlong)puVar6;
      }
      puVar10[1] = plVar7;
      plVar7 = plVar2;
    }
    do {
      if ((longlong *)*puVar10 == plVar3) {
        plVar4 = (longlong *)plVar7[1];
        *plVar4 = (longlong)plVar2;
        puVar5 = (undefined8 *)plVar2[1];
        *puVar5 = plVar3;
        puVar6 = (undefined8 *)plVar3[1];
        *puVar6 = plVar7;
        plVar3[1] = (longlong)puVar5;
        plVar2[1] = (longlong)plVar4;
        plVar7[1] = (longlong)puVar6;
        *puVar10 = plVar7;
        plVar7 = plVar2;
        goto joined_r0x0001451848f7;
      }
      plVar3 = (longlong *)plVar3[1];
    } while ((plVar7[2] != plVar3[2]) || (plVar7[3] != plVar3[3]));
    lVar9 = *plVar3;
    plVar3 = (longlong *)plVar7[1];
    *plVar3 = (longlong)plVar2;
    plVar4 = (longlong *)plVar2[1];
    *plVar4 = lVar9;
    puVar10 = *(undefined8 **)(lVar9 + 8);
    *puVar10 = plVar7;
    *(longlong **)(lVar9 + 8) = plVar4;
    plVar2[1] = (longlong)plVar3;
    plVar7[1] = (longlong)puVar10;
    plVar7 = plVar2;
  } while( true );
}



// FUNCTION 145184a30 FUN_145184a30 body=313 status=ok
// SIG undefined FUN_145184a30(void)

void FUN_145184a30(ulonglong *param_1,ulonglong param_2,undefined8 param_3)

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
    FUN_145187530(*param_1,param_1[1],&local_res18);
    return;
  }
  if (0x1fffffffffffffff < param_2) {
LAB_145184b65:
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
    if (uVar2 + 0x27 <= uVar2) goto LAB_145184b65;
    lVar3 = FUN_14494321d();
    if (lVar3 == 0) goto LAB_145184b42;
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
LAB_145184b42:
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



// FUNCTION 145184b70 FID_conflict:~vector<CHN*___ptr64,std::allocator<CHN*___ptr64>_> body=91 status=ok
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


