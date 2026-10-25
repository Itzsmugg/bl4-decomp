// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1465b4536 FUN_1465b4536 body=47 status=ok
// SIG undefined FUN_1465b4536(void)

longlong FUN_1465b4536(void)

{
  if (DAT_14cba2678 == 0) {
    FUN_14073dd9a(&DAT_14cba2678,&PTR_LAB_14b630ff8);
  }
  return DAT_14cba2678;
}



// FUNCTION 1465b4565 FUN_1465b4565 body=49 status=ok
// SIG undefined FUN_1465b4565(void)

longlong FUN_1465b4565(void)

{
  if (DAT_14cba26a8 == 0) {
    FUN_14073dd9a(&DAT_14cba26a8,&PTR_LAB_14b631910);
  }
  return DAT_14cba26a8;
}



// FUNCTION 1465b4596 FUN_1465b4596 body=47 status=ok
// SIG undefined FUN_1465b4596(void)

longlong FUN_1465b4596(void)

{
  if (DAT_14cba2688 == 0) {
    FUN_14000fc22(&DAT_14cba2688,&PTR_FUN_14b631618);
  }
  return DAT_14cba2688;
}



// FUNCTION 1465b45c5 FUN_1465b45c5 body=47 status=ok
// SIG undefined FUN_1465b45c5(void)

longlong FUN_1465b45c5(void)

{
  if (DAT_14cba2690 == 0) {
    FUN_14000fc22(&DAT_14cba2690,&PTR_FUN_14b631710);
  }
  return DAT_14cba2690;
}



// FUNCTION 1465b45f4 FUN_1465b45f4 body=47 status=ok
// SIG undefined FUN_1465b45f4(void)

longlong FUN_1465b45f4(void)

{
  if (DAT_14cba2698 == 0) {
    FUN_14000fc22(&DAT_14cba2698,&PTR_FUN_14b6317f8);
  }
  return DAT_14cba2698;
}



// FUNCTION 1465b4624 FUN_1465b4624 body=34 status=ok
// SIG undefined FUN_1465b4624(void)

void FUN_1465b4624(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a562a6();
  FUN_14069c8d6(uVar1,&PTR_s_GetCommandRingTarget_14b631840,3);
  return;
}



// FUNCTION 1465b4646 FUN_1465b4646 body=35 status=ok
// SIG undefined FUN_1465b4646(void)

void FUN_1465b4646(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b631950;
  return;
}



// FUNCTION 1465b466a FUN_1465b466a body=40 status=ok
// SIG undefined FUN_1465b466a(void)

undefined8 FUN_1465b466a(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b4692 FUN_1465b4692 body=111 status=ok
// SIG undefined FUN_1465b4692(void)

undefined8 * FUN_1465b4692(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b629880;
  param_1[5] = &PTR_LAB_14b629b80;
  param_1[6] = &PTR_LAB_14b629bb0;
  if (*(char *)((longlong)param_1 + 0xec) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xec) = 0;
  }
  if (*(char *)((longlong)param_1 + 0xdc) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xdc) = 0;
  }
  FUN_14042c3da(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b4702 FUN_1465b4702 body=74 status=ok
// SIG undefined FUN_1465b4702(void)

void FUN_1465b4702(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  lVar1 = (**(code **)(*param_1 + 0x18))();
  FUN_1400bc96c(lVar1 + 0x50,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1465b474e FUN_1465b474e body=112 status=ok
// SIG undefined FUN_1465b474e(void)

double * FUN_1465b474e(longlong *param_1,double *param_2)

{
  undefined1 auStack_48 [32];
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x10))(param_1,&local_28);
  *param_2 = local_28 * 0.5 + 0.5;
  param_2[1] = local_20 * 0.5 + 0.5;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1465b47c0 FUN_1465b47c0 body=40 status=ok
// SIG undefined FUN_1465b47c0(void)

undefined8 FUN_1465b47c0(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b47e8 FUN_1465b47e8 body=40 status=ok
// SIG undefined FUN_1465b47e8(void)

undefined8 FUN_1465b47e8(undefined8 param_1,int param_2)

{
  FUN_140ce470e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b4810 FUN_1465b4810 body=40 status=ok
// SIG undefined FUN_1465b4810(void)

undefined8 FUN_1465b4810(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b4838 FUN_1465b4838 body=40 status=ok
// SIG undefined FUN_1465b4838(void)

undefined8 FUN_1465b4838(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b4860 FUN_1465b4860 body=29 status=ok
// SIG undefined FUN_1465b4860(void)

undefined8 FUN_1465b4860(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b487e FUN_1465b487e body=29 status=ok
// SIG undefined FUN_1465b487e(void)

undefined8 FUN_1465b487e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b489c FUN_1465b489c body=29 status=ok
// SIG undefined FUN_1465b489c(void)

undefined8 FUN_1465b489c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b48ba FUN_1465b48ba body=29 status=ok
// SIG undefined FUN_1465b48ba(void)

undefined8 FUN_1465b48ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b48d8 FUN_1465b48d8 body=29 status=ok
// SIG undefined FUN_1465b48d8(void)

undefined8 FUN_1465b48d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b48f6 FUN_1465b48f6 body=29 status=ok
// SIG undefined FUN_1465b48f6(void)

undefined8 FUN_1465b48f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b4914 FUN_1465b4914 body=29 status=ok
// SIG undefined FUN_1465b4914(void)

undefined8 FUN_1465b4914(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b4932 FUN_1465b4932 body=29 status=ok
// SIG undefined FUN_1465b4932(void)

undefined8 FUN_1465b4932(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b4950 FUN_1465b4950 body=29 status=ok
// SIG undefined FUN_1465b4950(void)

undefined8 FUN_1465b4950(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b496e FUN_1465b496e body=29 status=ok
// SIG undefined FUN_1465b496e(void)

undefined8 FUN_1465b496e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b498c FUN_1465b498c body=29 status=ok
// SIG undefined FUN_1465b498c(void)

undefined8 FUN_1465b498c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b49aa FUN_1465b49aa body=58 status=ok
// SIG undefined FUN_1465b49aa(void)

void FUN_1465b49aa(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x10d8);
  FUN_140c15cec(param_2);
  *param_2 = &PTR_FUN_14b633150;
  param_2[0x219] = 0;
  param_2[0x21a] = 0;
  return;
}



// FUNCTION 1465b49e4 FUN_1465b49e4 body=40 status=ok
// SIG undefined FUN_1465b49e4(void)

undefined8 FUN_1465b49e4(undefined8 param_1,int param_2)

{
  FUN_140485912();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b4a0c FUN_1465b4a0c body=29 status=ok
// SIG undefined FUN_1465b4a0c(void)

undefined8 FUN_1465b4a0c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b4a2a FUN_1465b4a2a body=29 status=ok
// SIG undefined FUN_1465b4a2a(void)

undefined8 FUN_1465b4a2a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b4a48 FUN_1465b4a48 body=29 status=ok
// SIG undefined FUN_1465b4a48(void)

undefined8 FUN_1465b4a48(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b4a66 FUN_1465b4a66 body=29 status=ok
// SIG undefined FUN_1465b4a66(void)

undefined8 FUN_1465b4a66(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b4a84 FUN_1465b4a84 body=29 status=ok
// SIG undefined FUN_1465b4a84(void)

undefined8 FUN_1465b4a84(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b4aa2 FUN_1465b4aa2 body=29 status=ok
// SIG undefined FUN_1465b4aa2(void)

undefined8 FUN_1465b4aa2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b4ac0 FUN_1465b4ac0 body=29 status=ok
// SIG undefined FUN_1465b4ac0(void)

undefined8 FUN_1465b4ac0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b4ade FUN_1465b4ade body=29 status=ok
// SIG undefined FUN_1465b4ade(void)

undefined8 FUN_1465b4ade(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b4afc FUN_1465b4afc body=40 status=ok
// SIG undefined FUN_1465b4afc(void)

undefined8 FUN_1465b4afc(undefined8 param_1,int param_2)

{
  FUN_1458888c8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b4b24 FUN_1465b4b24 body=29 status=ok
// SIG undefined FUN_1465b4b24(void)

undefined8 FUN_1465b4b24(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b4b42 FUN_1465b4b42 body=48 status=ok
// SIG undefined FUN_1465b4b42(void)

void FUN_1465b4b42(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,400);
  FUN_145ceeb7e(param_2);
  *param_2 = &PTR_FUN_14b634350;
  return;
}



// FUNCTION 1465b4b72 FUN_1465b4b72 body=40 status=ok
// SIG undefined FUN_1465b4b72(void)

undefined8 FUN_1465b4b72(undefined8 param_1,int param_2)

{
  FUN_1458888c8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b4b9a FUN_1465b4b9a body=29 status=ok
// SIG undefined FUN_1465b4b9a(void)

undefined8 FUN_1465b4b9a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b4bb8 FUN_1465b4bb8 body=116 status=ok
// SIG undefined FUN_1465b4bb8(void)

void FUN_1465b4bb8(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x268);
  FUN_145ceeb7e(param_2);
  *param_2 = &PTR_FUN_14b6344f0;
  *(undefined1 *)(param_2 + 0x32) = 0;
  memset(param_2 + 0x33,0,0x81);
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  param_2[0x47] = 0;
  param_2[0x48] = 0;
  param_2[0x49] = 0;
  param_2[0x4a] = 0;
  param_2[0x4b] = 0;
  *(undefined4 *)(param_2 + 0x4c) = 0;
  return;
}



// FUNCTION 1465b4c2c FUN_1465b4c2c body=65 status=ok
// SIG undefined FUN_1465b4c2c(void)

undefined8 * FUN_1465b4c2c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b6344f0;
  FUN_14588898c(param_1 + 0x32);
  FUN_1458888c8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b4c6e FUN_1465b4c6e body=29 status=ok
// SIG undefined FUN_1465b4c6e(void)

undefined8 FUN_1465b4c6e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b4c8c FUN_1465b4c8c body=29 status=ok
// SIG undefined FUN_1465b4c8c(void)

undefined8 FUN_1465b4c8c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b4caa FUN_1465b4caa body=29 status=ok
// SIG undefined FUN_1465b4caa(void)

undefined8 FUN_1465b4caa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b4cc8 FUN_1465b4cc8 body=29 status=ok
// SIG undefined FUN_1465b4cc8(void)

undefined8 FUN_1465b4cc8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b4ce6 FUN_1465b4ce6 body=192 status=ok
// SIG undefined FUN_1465b4ce6(void)

void FUN_1465b4ce6(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x268);
  FUN_1411b9bf0(param_2);
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 10;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  *(undefined4 *)(param_2 + 0x11) = 10;
  memset(param_2 + 0x12,0,0x100);
  *param_2 = &PTR_FUN_14b634c30;
  *(undefined1 *)(param_2 + 0x32) = 0;
  memset(param_2 + 0x33,0,0x81);
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  param_2[0x47] = 0;
  param_2[0x48] = 0;
  param_2[0x49] = 0;
  param_2[0x4a] = 0;
  param_2[0x4b] = 0;
  *(undefined4 *)(param_2 + 0x4c) = 0;
  return;
}



// FUNCTION 1465b4da6 FUN_1465b4da6 body=65 status=ok
// SIG undefined FUN_1465b4da6(void)

undefined8 * FUN_1465b4da6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b634c30;
  FUN_14588898c(param_1 + 0x32);
  FUN_1458888c8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b4de8 FUN_1465b4de8 body=29 status=ok
// SIG undefined FUN_1465b4de8(void)

undefined8 FUN_1465b4de8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b4e06 FUN_1465b4e06 body=29 status=ok
// SIG undefined FUN_1465b4e06(void)

undefined8 FUN_1465b4e06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b4e24 FUN_1465b4e24 body=29 status=ok
// SIG undefined FUN_1465b4e24(void)

undefined8 FUN_1465b4e24(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b4e42 FUN_1465b4e42 body=29 status=ok
// SIG undefined FUN_1465b4e42(void)

undefined8 FUN_1465b4e42(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b4e60 FUN_1465b4e60 body=29 status=ok
// SIG undefined FUN_1465b4e60(void)

undefined8 FUN_1465b4e60(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b4e7e FUN_1465b4e7e body=113 status=ok
// SIG undefined FUN_1465b4e7e(void)

void FUN_1465b4e7e(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,400);
  FUN_1411b9bf0(param_2);
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 10;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  *(undefined4 *)(param_2 + 0x11) = 10;
  memset(param_2 + 0x12,0,0x100);
  *param_2 = &PTR_FUN_14b6354e0;
  return;
}



// FUNCTION 1465b4ef0 FUN_1465b4ef0 body=40 status=ok
// SIG undefined FUN_1465b4ef0(void)

undefined8 FUN_1465b4ef0(undefined8 param_1,int param_2)

{
  FUN_1458888c8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b4f18 FUN_1465b4f18 body=9 status=ok
// SIG undefined FUN_1465b4f18(void)

void FUN_1465b4f18(longlong param_1)

{
  FUN_140d2194c(param_1 + 0x10);
  return;
}



// FUNCTION 1465b4f22 FUN_1465b4f22 body=29 status=ok
// SIG undefined FUN_1465b4f22(void)

undefined8 FUN_1465b4f22(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b4f40 FUN_1465b4f40 body=55 status=ok
// SIG undefined FUN_1465b4f40(void)

void FUN_1465b4f40(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba26c8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba26c8 = FUN_140002ddd(FUN_1465b4f77,uVar1,L"GbxSkillComponent_ActionSkill_Onslaught");
  }
  return;
}



// FUNCTION 1465b4f77 FUN_1465b4f77 body=47 status=ok
// SIG undefined FUN_1465b4f77(void)

longlong FUN_1465b4f77(void)

{
  if (DAT_14cba26c0 == 0) {
    FUN_14086a14e(&DAT_14cba26c0,&PTR_FUN_14b6358c8);
  }
  return DAT_14cba26c0;
}



// FUNCTION 1465b4fa6 FUN_1465b4fa6 body=48 status=ok
// SIG undefined FUN_1465b4fa6(void)

void FUN_1465b4fa6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000168;
  *puVar1 = &PTR_FUN_14b63bc00;
  return;
}



// FUNCTION 1465b4fd6 FUN_1465b4fd6 body=55 status=ok
// SIG undefined FUN_1465b4fd6(void)

void FUN_1465b4fd6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba26e0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba26e0 =
         FUN_140002ddd(FUN_1465b500d,uVar1,L"GbxSkillComponentData_ActionSkill_Onslaught");
  }
  return;
}



// FUNCTION 1465b500d FUN_1465b500d body=47 status=ok
// SIG undefined FUN_1465b500d(void)

longlong FUN_1465b500d(void)

{
  if (DAT_14cba26d8 == 0) {
    FUN_14086a14e(&DAT_14cba26d8,&PTR_FUN_14b635988);
  }
  return DAT_14cba26d8;
}



// FUNCTION 1465b503c FUN_1465b503c body=48 status=ok
// SIG undefined FUN_1465b503c(void)

void FUN_1465b503c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000190;
  *puVar1 = &PTR_FUN_14b63bd60;
  return;
}



// FUNCTION 1465b506c FUN_1465b506c body=35 status=ok
// SIG undefined FUN_1465b506c(void)

void FUN_1465b506c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b635a90;
  return;
}



// FUNCTION 1465b508f FUN_1465b508f body=47 status=ok
// SIG undefined FUN_1465b508f(void)

longlong FUN_1465b508f(void)

{
  if (DAT_14cba26f8 == 0) {
    FUN_14073dd9a(&DAT_14cba26f8,&PTR_LAB_14b635a48);
  }
  return DAT_14cba26f8;
}



// FUNCTION 1465b50be FUN_1465b50be body=47 status=ok
// SIG undefined FUN_1465b50be(void)

longlong FUN_1465b50be(void)

{
  if (DAT_14cba2708 == 0) {
    FUN_1409ce572(&DAT_14cba2708,&PTR_FUN_14b635e20);
  }
  return DAT_14cba2708;
}



// FUNCTION 1465b50ed FUN_1465b50ed body=47 status=ok
// SIG undefined FUN_1465b50ed(void)

longlong FUN_1465b50ed(void)

{
  if (DAT_14cba2720 == 0) {
    FUN_14000fc22(&DAT_14cba2720,&PTR_FUN_14b636110);
  }
  return DAT_14cba2720;
}



// FUNCTION 1465b511c FUN_1465b511c body=55 status=ok
// SIG undefined FUN_1465b511c(void)

void FUN_1465b511c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2730 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2730 = FUN_140002ddd(FUN_1465b5153,uVar1,L"PaladinPrimeStackData");
  }
  return;
}



// FUNCTION 1465b5153 FUN_1465b5153 body=47 status=ok
// SIG undefined FUN_1465b5153(void)

longlong FUN_1465b5153(void)

{
  if (DAT_14cba2728 == 0) {
    FUN_14086a14e(&DAT_14cba2728,&PTR_FUN_14b636390);
  }
  return DAT_14cba2728;
}



// FUNCTION 1465b5182 FUN_1465b5182 body=48 status=ok
// SIG undefined FUN_1465b5182(void)

void FUN_1465b5182(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14b63bfc0;
  return;
}



// FUNCTION 1465b51b2 FUN_1465b51b2 body=55 status=ok
// SIG undefined FUN_1465b51b2(void)

void FUN_1465b51b2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2748 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2748 = FUN_140002ddd(FUN_1465b51e9,uVar1,L"GbxSkillComponent_ActionSkill_Paladin");
  }
  return;
}



// FUNCTION 1465b51e9 FUN_1465b51e9 body=49 status=ok
// SIG undefined FUN_1465b51e9(void)

longlong FUN_1465b51e9(void)

{
  if (DAT_14cba2740 == 0) {
    FUN_14086a14e(&DAT_14cba2740,&PTR_FUN_14b636440);
  }
  return DAT_14cba2740;
}



// FUNCTION 1465b521a FUN_1465b521a body=48 status=ok
// SIG undefined FUN_1465b521a(void)

void FUN_1465b521a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000180;
  *puVar1 = &PTR_FUN_14b63c120;
  return;
}



// FUNCTION 1465b524a FUN_1465b524a body=55 status=ok
// SIG undefined FUN_1465b524a(void)

void FUN_1465b524a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2760 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2760 =
         FUN_140002ddd(FUN_1465b5281,uVar1,L"GbxSkillComponent_ActionSkill_Paladin_Onslaught");
  }
  return;
}



// FUNCTION 1465b5281 FUN_1465b5281 body=47 status=ok
// SIG undefined FUN_1465b5281(void)

longlong FUN_1465b5281(void)

{
  if (DAT_14cba2758 == 0) {
    FUN_14086a14e(&DAT_14cba2758,&PTR_FUN_14b636508);
  }
  return DAT_14cba2758;
}



// FUNCTION 1465b52b0 FUN_1465b52b0 body=48 status=ok
// SIG undefined FUN_1465b52b0(void)

void FUN_1465b52b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000001b8;
  *puVar1 = &PTR_FUN_14b63c280;
  return;
}



// FUNCTION 1465b52e0 FUN_1465b52e0 body=55 status=ok
// SIG undefined FUN_1465b52e0(void)

void FUN_1465b52e0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2778 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2778 =
         FUN_140002ddd(FUN_1465b5317,uVar1,L"GbxSkillComponent_ActionSkill_Paladin_Scourge");
  }
  return;
}



// FUNCTION 1465b5317 FUN_1465b5317 body=47 status=ok
// SIG undefined FUN_1465b5317(void)

longlong FUN_1465b5317(void)

{
  if (DAT_14cba2770 == 0) {
    FUN_14086a14e(&DAT_14cba2770,&PTR_FUN_14b6365d0);
  }
  return DAT_14cba2770;
}



// FUNCTION 1465b5346 FUN_1465b5346 body=48 status=ok
// SIG undefined FUN_1465b5346(void)

void FUN_1465b5346(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000001a0;
  *puVar1 = &PTR_FUN_14b63c3e0;
  return;
}



// FUNCTION 1465b5376 FUN_1465b5376 body=55 status=ok
// SIG undefined FUN_1465b5376(void)

void FUN_1465b5376(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2790 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2790 =
         FUN_140002ddd(FUN_1465b53ad,uVar1,L"GbxSkillComponent_ActionSkill_Paladin_Warforge");
  }
  return;
}



// FUNCTION 1465b53ad FUN_1465b53ad body=47 status=ok
// SIG undefined FUN_1465b53ad(void)

longlong FUN_1465b53ad(void)

{
  if (DAT_14cba2788 == 0) {
    FUN_14086a14e(&DAT_14cba2788,&PTR_FUN_14b636698);
  }
  return DAT_14cba2788;
}



// FUNCTION 1465b53dc FUN_1465b53dc body=48 status=ok
// SIG undefined FUN_1465b53dc(void)

void FUN_1465b53dc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000001a0;
  *puVar1 = &PTR_FUN_14b63c540;
  return;
}



// FUNCTION 1465b540c FUN_1465b540c body=55 status=ok
// SIG undefined FUN_1465b540c(void)

void FUN_1465b540c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba27a8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba27a8 = FUN_140002ddd(FUN_1465b5443,uVar1,L"GbxSkillComponentData_ActionSkill_Paladin");
  }
  return;
}



// FUNCTION 1465b5443 FUN_1465b5443 body=49 status=ok
// SIG undefined FUN_1465b5443(void)

longlong FUN_1465b5443(void)

{
  if (DAT_14cba27a0 == 0) {
    FUN_14086a14e(&DAT_14cba27a0,&PTR_FUN_14b636750);
  }
  return DAT_14cba27a0;
}



// FUNCTION 1465b5474 FUN_1465b5474 body=48 status=ok
// SIG undefined FUN_1465b5474(void)

void FUN_1465b5474(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000190;
  *puVar1 = &PTR_FUN_14b63c6a0;
  return;
}



// FUNCTION 1465b54a4 FUN_1465b54a4 body=55 status=ok
// SIG undefined FUN_1465b54a4(void)

void FUN_1465b54a4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba27c0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba27c0 =
         FUN_140002ddd(FUN_1465b54db,uVar1,L"GbxSkillComponentData_ActionSkill_Paladin_Onslaught");
  }
  return;
}



// FUNCTION 1465b54db FUN_1465b54db body=47 status=ok
// SIG undefined FUN_1465b54db(void)

longlong FUN_1465b54db(void)

{
  if (DAT_14cba27b8 == 0) {
    FUN_14086a14e(&DAT_14cba27b8,&PTR_FUN_14b6368c8);
  }
  return DAT_14cba27b8;
}



// FUNCTION 1465b550a FUN_1465b550a body=48 status=ok
// SIG undefined FUN_1465b550a(void)

void FUN_1465b550a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000280;
  *puVar1 = &PTR_FUN_14b63c800;
  return;
}



// FUNCTION 1465b553a FUN_1465b553a body=55 status=ok
// SIG undefined FUN_1465b553a(void)

void FUN_1465b553a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba27d8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba27d8 =
         FUN_140002ddd(FUN_1465b5571,uVar1,L"GbxSkillComponentData_ActionSkill_Paladin_Scourge");
  }
  return;
}



// FUNCTION 1465b5571 FUN_1465b5571 body=47 status=ok
// SIG undefined FUN_1465b5571(void)

longlong FUN_1465b5571(void)

{
  if (DAT_14cba27d0 == 0) {
    FUN_14086a14e(&DAT_14cba27d0,&PTR_FUN_14b6369e8);
  }
  return DAT_14cba27d0;
}



// FUNCTION 1465b55a0 FUN_1465b55a0 body=48 status=ok
// SIG undefined FUN_1465b55a0(void)

void FUN_1465b55a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000268;
  *puVar1 = &PTR_FUN_14b63c9a0;
  return;
}



// FUNCTION 1465b55d0 FUN_1465b55d0 body=55 status=ok
// SIG undefined FUN_1465b55d0(void)

void FUN_1465b55d0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba27f0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba27f0 =
         FUN_140002ddd(FUN_1465b5607,uVar1,L"GbxSkillComponentData_ActionSkill_Paladin_Warforge");
  }
  return;
}



// FUNCTION 1465b5607 FUN_1465b5607 body=47 status=ok
// SIG undefined FUN_1465b5607(void)

longlong FUN_1465b5607(void)

{
  if (DAT_14cba27e8 == 0) {
    FUN_14086a14e(&DAT_14cba27e8,&PTR_FUN_14b636b08);
  }
  return DAT_14cba27e8;
}



// FUNCTION 1465b5636 FUN_1465b5636 body=48 status=ok
// SIG undefined FUN_1465b5636(void)

void FUN_1465b5636(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000268;
  *puVar1 = &PTR_FUN_14b63cb40;
  return;
}



// FUNCTION 1465b5666 FUN_1465b5666 body=49 status=ok
// SIG undefined FUN_1465b5666(void)

longlong FUN_1465b5666(void)

{
  if (DAT_14cba2840 == 0) {
    FUN_14073dd9a(&DAT_14cba2840,&PTR_LAB_14b637270);
  }
  return DAT_14cba2840;
}



// FUNCTION 1465b5697 FUN_1465b5697 body=47 status=ok
// SIG undefined FUN_1465b5697(void)

longlong FUN_1465b5697(void)

{
  if (DAT_14cba2800 == 0) {
    FUN_14000fc22(&DAT_14cba2800,&PTR_FUN_14b636be0);
  }
  return DAT_14cba2800;
}



// FUNCTION 1465b56c6 FUN_1465b56c6 body=47 status=ok
// SIG undefined FUN_1465b56c6(void)

longlong FUN_1465b56c6(void)

{
  if (DAT_14cba2808 == 0) {
    FUN_14000fc22(&DAT_14cba2808,&PTR_FUN_14b636cb0);
  }
  return DAT_14cba2808;
}



// FUNCTION 1465b56f5 FUN_1465b56f5 body=47 status=ok
// SIG undefined FUN_1465b56f5(void)

longlong FUN_1465b56f5(void)

{
  if (DAT_14cba2810 == 0) {
    FUN_14000fc22(&DAT_14cba2810,&PTR_FUN_14b636d38);
  }
  return DAT_14cba2810;
}



// FUNCTION 1465b5724 FUN_1465b5724 body=47 status=ok
// SIG undefined FUN_1465b5724(void)

longlong FUN_1465b5724(void)

{
  if (DAT_14cba2818 == 0) {
    FUN_14000fc22(&DAT_14cba2818,&PTR_FUN_14b636e68);
  }
  return DAT_14cba2818;
}



// FUNCTION 1465b5753 FUN_1465b5753 body=47 status=ok
// SIG undefined FUN_1465b5753(void)

longlong FUN_1465b5753(void)

{
  if (DAT_14cba2820 == 0) {
    FUN_14000fc22(&DAT_14cba2820,&PTR_FUN_14b636f78);
  }
  return DAT_14cba2820;
}



// FUNCTION 1465b5782 FUN_1465b5782 body=47 status=ok
// SIG undefined FUN_1465b5782(void)

longlong FUN_1465b5782(void)

{
  if (DAT_14cba2828 == 0) {
    FUN_14000fc22(&DAT_14cba2828,&PTR_FUN_14b637000);
  }
  return DAT_14cba2828;
}



// FUNCTION 1465b57b1 FUN_1465b57b1 body=47 status=ok
// SIG undefined FUN_1465b57b1(void)

longlong FUN_1465b57b1(void)

{
  if (DAT_14cba2830 == 0) {
    FUN_14000fc22(&DAT_14cba2830,&PTR_FUN_14b6370d0);
  }
  return DAT_14cba2830;
}



// FUNCTION 1465b57e0 FUN_1465b57e0 body=34 status=ok
// SIG undefined FUN_1465b57e0(void)

void FUN_1465b57e0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a5638a();
  FUN_14069c8d6(uVar1,&PTR_s_AddPrimeStack_14b637110,7);
  return;
}



// FUNCTION 1465b5802 FUN_1465b5802 body=35 status=ok
// SIG undefined FUN_1465b5802(void)

void FUN_1465b5802(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b6372b0;
  return;
}



// FUNCTION 1465b5826 FUN_1465b5826 body=55 status=ok
// SIG undefined FUN_1465b5826(void)

void FUN_1465b5826(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2930 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2930 = FUN_140002ddd(FUN_1465b585d,uVar1,L"GbxSkillComponent_CharacterLock_Spec");
  }
  return;
}



// FUNCTION 1465b585d FUN_1465b585d body=47 status=ok
// SIG undefined FUN_1465b585d(void)

longlong FUN_1465b585d(void)

{
  if (DAT_14cba2928 == 0) {
    FUN_14086a14e(&DAT_14cba2928,&PTR_FUN_14b638af8);
  }
  return DAT_14cba2928;
}



// FUNCTION 1465b588c FUN_1465b588c body=48 status=ok
// SIG undefined FUN_1465b588c(void)

void FUN_1465b588c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14b63d980;
  return;
}



// FUNCTION 1465b58bc FUN_1465b58bc body=55 status=ok
// SIG undefined FUN_1465b58bc(void)

void FUN_1465b58bc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2948 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2948 =
         FUN_140002ddd(FUN_1465b58f3,uVar1,L"GbxSkillComponentDataItem_CharacterLockProfile");
  }
  return;
}



// FUNCTION 1465b58f3 FUN_1465b58f3 body=47 status=ok
// SIG undefined FUN_1465b58f3(void)

longlong FUN_1465b58f3(void)

{
  if (DAT_14cba2940 == 0) {
    FUN_14086a14e(&DAT_14cba2940,&PTR_FUN_14b638c50);
  }
  return DAT_14cba2940;
}



// FUNCTION 1465b5922 FUN_1465b5922 body=48 status=ok
// SIG undefined FUN_1465b5922(void)

void FUN_1465b5922(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000060;
  *puVar1 = &PTR_FUN_14b63dae0;
  return;
}



// FUNCTION 1465b5952 FUN_1465b5952 body=55 status=ok
// SIG undefined FUN_1465b5952(void)

void FUN_1465b5952(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2960 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2960 = FUN_140002ddd(FUN_1465b5989,uVar1,L"GbxSkillComponent_CharacterLocks");
  }
  return;
}



// FUNCTION 1465b5989 FUN_1465b5989 body=47 status=ok
// SIG undefined FUN_1465b5989(void)

longlong FUN_1465b5989(void)

{
  if (DAT_14cba2958 == 0) {
    FUN_14086a14e(&DAT_14cba2958,&PTR_FUN_14b638d40);
  }
  return DAT_14cba2958;
}



// FUNCTION 1465b59b8 FUN_1465b59b8 body=48 status=ok
// SIG undefined FUN_1465b59b8(void)

void FUN_1465b59b8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000c0;
  *puVar1 = &PTR_FUN_14b63dc50;
  return;
}



// FUNCTION 1465b59e8 FUN_1465b59e8 body=55 status=ok
// SIG undefined FUN_1465b59e8(void)

void FUN_1465b59e8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2978 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2978 = FUN_140002ddd(FUN_1465b5a1f,uVar1,L"GbxSkillComponentData_CharacterLocks");
  }
  return;
}



// FUNCTION 1465b5a1f FUN_1465b5a1f body=47 status=ok
// SIG undefined FUN_1465b5a1f(void)

longlong FUN_1465b5a1f(void)

{
  if (DAT_14cba2970 == 0) {
    FUN_14086a14e(&DAT_14cba2970,&PTR_FUN_14b638e78);
  }
  return DAT_14cba2970;
}



// FUNCTION 1465b5a4e FUN_1465b5a4e body=48 status=ok
// SIG undefined FUN_1465b5a4e(void)

void FUN_1465b5a4e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000060;
  *puVar1 = &PTR_FUN_14b63ddb0;
  return;
}



// FUNCTION 1465b5a7e FUN_1465b5a7e body=47 status=ok
// SIG undefined FUN_1465b5a7e(void)

longlong FUN_1465b5a7e(void)

{
  if (DAT_14cba29a0 == 0) {
    FUN_14073dd9a(&DAT_14cba29a0,&PTR_LAB_14b639120);
  }
  return DAT_14cba29a0;
}



// FUNCTION 1465b5aad FUN_1465b5aad body=47 status=ok
// SIG undefined FUN_1465b5aad(void)

longlong FUN_1465b5aad(void)

{
  if (DAT_14cba2988 == 0) {
    FUN_14000fc22(&DAT_14cba2988,&PTR_FUN_14b638ef8);
  }
  return DAT_14cba2988;
}



// FUNCTION 1465b5adc FUN_1465b5adc body=47 status=ok
// SIG undefined FUN_1465b5adc(void)

longlong FUN_1465b5adc(void)

{
  if (DAT_14cba2990 == 0) {
    FUN_14000fc22(&DAT_14cba2990,&PTR_FUN_14b639018);
  }
  return DAT_14cba2990;
}



// FUNCTION 1465b5b0c FUN_1465b5b0c body=34 status=ok
// SIG undefined FUN_1465b5b0c(void)

void FUN_1465b5b0c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a5646e();
  FUN_14069c8d6(uVar1,&PTR_s_ClearLocks_14b639060,2);
  return;
}



// FUNCTION 1465b5b2e FUN_1465b5b2e body=35 status=ok
// SIG undefined FUN_1465b5b2e(void)

void FUN_1465b5b2e(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b639160;
  return;
}



// FUNCTION 1465b5b52 FUN_1465b5b52 body=55 status=ok
// SIG undefined FUN_1465b5b52(void)

void FUN_1465b5b52(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba29b8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba29b8 = FUN_140002ddd(FUN_1465b5b89,uVar1,L"GbxSkillComponentCharacterLockData");
  }
  return;
}



// FUNCTION 1465b5b89 FUN_1465b5b89 body=47 status=ok
// SIG undefined FUN_1465b5b89(void)

longlong FUN_1465b5b89(void)

{
  if (DAT_14cba29b0 == 0) {
    FUN_14086a14e(&DAT_14cba29b0,&PTR_FUN_14b639d70);
  }
  return DAT_14cba29b0;
}



// FUNCTION 1465b5bb8 FUN_1465b5bb8 body=48 status=ok
// SIG undefined FUN_1465b5bb8(void)

void FUN_1465b5bb8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x40000000c;
  *puVar1 = &PTR_FUN_14b63df40;
  return;
}



// FUNCTION 1465b5be8 FUN_1465b5be8 body=55 status=ok
// SIG undefined FUN_1465b5be8(void)

void FUN_1465b5be8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba29d0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba29d0 = FUN_140002ddd(FUN_1465b5c1f,uVar1,L"GbxSkillComponentData_CharacterLockItemEx");
  }
  return;
}



// FUNCTION 1465b5c1f FUN_1465b5c1f body=47 status=ok
// SIG undefined FUN_1465b5c1f(void)

longlong FUN_1465b5c1f(void)

{
  if (DAT_14cba29c8 == 0) {
    FUN_14086a14e(&DAT_14cba29c8,&PTR_FUN_14b639e80);
  }
  return DAT_14cba29c8;
}



// FUNCTION 1465b5c4e FUN_1465b5c4e body=48 status=ok
// SIG undefined FUN_1465b5c4e(void)

void FUN_1465b5c4e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14b63e0b0;
  return;
}



// FUNCTION 1465b5c7e FUN_1465b5c7e body=55 status=ok
// SIG undefined FUN_1465b5c7e(void)

void FUN_1465b5c7e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba29e8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba29e8 = FUN_140002ddd(FUN_1465b5cb5,uVar1,L"GbxSkillComponent_CharacterLocksEx");
  }
  return;
}



// FUNCTION 1465b5cb5 FUN_1465b5cb5 body=47 status=ok
// SIG undefined FUN_1465b5cb5(void)

longlong FUN_1465b5cb5(void)

{
  if (DAT_14cba29e0 == 0) {
    FUN_14086a14e(&DAT_14cba29e0,&PTR_FUN_14b639f28);
  }
  return DAT_14cba29e0;
}



// FUNCTION 1465b5ce4 FUN_1465b5ce4 body=48 status=ok
// SIG undefined FUN_1465b5ce4(void)

void FUN_1465b5ce4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000a8;
  *puVar1 = &PTR_FUN_14b63e220;
  return;
}



// FUNCTION 1465b5d14 FUN_1465b5d14 body=55 status=ok
// SIG undefined FUN_1465b5d14(void)

void FUN_1465b5d14(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2a00 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2a00 = FUN_140002ddd(FUN_1465b5d4b,uVar1,L"GbxSkillComponentData_CharacterLocksEx");
  }
  return;
}



// FUNCTION 1465b5d4b FUN_1465b5d4b body=47 status=ok
// SIG undefined FUN_1465b5d4b(void)

longlong FUN_1465b5d4b(void)

{
  if (DAT_14cba29f8 == 0) {
    FUN_14086a14e(&DAT_14cba29f8,&PTR_FUN_14b63a068);
  }
  return DAT_14cba29f8;
}



// FUNCTION 1465b5d7a FUN_1465b5d7a body=48 status=ok
// SIG undefined FUN_1465b5d7a(void)

void FUN_1465b5d7a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14b63e380;
  return;
}



// FUNCTION 1465b5daa FUN_1465b5daa body=47 status=ok
// SIG undefined FUN_1465b5daa(void)

longlong FUN_1465b5daa(void)

{
  if (DAT_14cba2a10 == 0) {
    FUN_14000fc22(&DAT_14cba2a10,&PTR_FUN_14b63a2a0);
  }
  return DAT_14cba2a10;
}



// FUNCTION 1465b5dd9 FUN_1465b5dd9 body=47 status=ok
// SIG undefined FUN_1465b5dd9(void)

longlong FUN_1465b5dd9(void)

{
  if (DAT_14cba2a18 == 0) {
    FUN_14086a14e(&DAT_14cba2a18,&PTR_FUN_14b63a3c0);
  }
  return DAT_14cba2a18;
}



// FUNCTION 1465b5e08 FUN_1465b5e08 body=48 status=ok
// SIG undefined FUN_1465b5e08(void)

void FUN_1465b5e08(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000f8;
  *puVar1 = &PTR_FUN_14b63e520;
  return;
}



// FUNCTION 1465b5e38 FUN_1465b5e38 body=55 status=ok
// SIG undefined FUN_1465b5e38(void)

void FUN_1465b5e38(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2a38 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2a38 = FUN_140002ddd(FUN_1465b5e6f,uVar1,L"GbxSkillComponentData_Charges");
  }
  return;
}



// FUNCTION 1465b5e6f FUN_1465b5e6f body=47 status=ok
// SIG undefined FUN_1465b5e6f(void)

longlong FUN_1465b5e6f(void)

{
  if (DAT_14cba2a30 == 0) {
    FUN_14086a14e(&DAT_14cba2a30,&PTR_FUN_14b63a5c0);
  }
  return DAT_14cba2a30;
}



// FUNCTION 1465b5e9e FUN_1465b5e9e body=48 status=ok
// SIG undefined FUN_1465b5e9e(void)

void FUN_1465b5e9e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000b8;
  *puVar1 = &PTR_FUN_14b63e680;
  return;
}



// FUNCTION 1465b5ece FUN_1465b5ece body=49 status=ok
// SIG undefined FUN_1465b5ece(void)

longlong FUN_1465b5ece(void)

{
  if (DAT_14cba2a90 == 0) {
    FUN_14073dd9a(&DAT_14cba2a90,&PTR_LAB_14b63ae80);
  }
  return DAT_14cba2a90;
}



// FUNCTION 1465b5eff FUN_1465b5eff body=47 status=ok
// SIG undefined FUN_1465b5eff(void)

longlong FUN_1465b5eff(void)

{
  if (DAT_14cba2a48 == 0) {
    FUN_14000fc22(&DAT_14cba2a48,&PTR_FUN_14b63a680);
  }
  return DAT_14cba2a48;
}



// FUNCTION 1465b5f2e FUN_1465b5f2e body=47 status=ok
// SIG undefined FUN_1465b5f2e(void)

longlong FUN_1465b5f2e(void)

{
  if (DAT_14cba2a50 == 0) {
    FUN_14000fc22(&DAT_14cba2a50,&PTR_FUN_14b63a768);
  }
  return DAT_14cba2a50;
}



// FUNCTION 1465b5f5d FUN_1465b5f5d body=47 status=ok
// SIG undefined FUN_1465b5f5d(void)

longlong FUN_1465b5f5d(void)

{
  if (DAT_14cba2a58 == 0) {
    FUN_14000fc22(&DAT_14cba2a58,&PTR_FUN_14b63a830);
  }
  return DAT_14cba2a58;
}



// FUNCTION 1465b5f8c FUN_1465b5f8c body=47 status=ok
// SIG undefined FUN_1465b5f8c(void)

longlong FUN_1465b5f8c(void)

{
  if (DAT_14cba2a60 == 0) {
    FUN_14000fc22(&DAT_14cba2a60,&PTR_FUN_14b63a900);
  }
  return DAT_14cba2a60;
}



// FUNCTION 1465b5fbb FUN_1465b5fbb body=47 status=ok
// SIG undefined FUN_1465b5fbb(void)

longlong FUN_1465b5fbb(void)

{
  if (DAT_14cba2a68 == 0) {
    FUN_14000fc22(&DAT_14cba2a68,&PTR_FUN_14b63a9d0);
  }
  return DAT_14cba2a68;
}



// FUNCTION 1465b5fea FUN_1465b5fea body=47 status=ok
// SIG undefined FUN_1465b5fea(void)

longlong FUN_1465b5fea(void)

{
  if (DAT_14cba2a70 == 0) {
    FUN_14000fc22(&DAT_14cba2a70,&PTR_FUN_14b63aaa0);
  }
  return DAT_14cba2a70;
}



// FUNCTION 1465b6019 FUN_1465b6019 body=47 status=ok
// SIG undefined FUN_1465b6019(void)

longlong FUN_1465b6019(void)

{
  if (DAT_14cba2a78 == 0) {
    FUN_14000fc22(&DAT_14cba2a78,&PTR_FUN_14b63ab70);
  }
  return DAT_14cba2a78;
}



// FUNCTION 1465b6048 FUN_1465b6048 body=47 status=ok
// SIG undefined FUN_1465b6048(void)

longlong FUN_1465b6048(void)

{
  if (DAT_14cba2a80 == 0) {
    FUN_14000fc22(&DAT_14cba2a80,&PTR_FUN_14b63acd0);
  }
  return DAT_14cba2a80;
}



// FUNCTION 1465b6078 FUN_1465b6078 body=34 status=ok
// SIG undefined FUN_1465b6078(void)

void FUN_1465b6078(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a56552();
  FUN_14069c8d6(uVar1,&PTR_s_AddCharges_14b63ad10,8);
  return;
}



// FUNCTION 1465b609a FUN_1465b609a body=35 status=ok
// SIG undefined FUN_1465b609a(void)

void FUN_1465b609a(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b63aec0;
  return;
}



// FUNCTION 1465b60bd FUN_1465b60bd body=47 status=ok
// SIG undefined FUN_1465b60bd(void)

longlong FUN_1465b60bd(void)

{
  if (DAT_14cba2aa0 == 0) {
    FUN_14000fc22(&DAT_14cba2aa0,&PTR_FUN_14b63b410);
  }
  return DAT_14cba2aa0;
}



// FUNCTION 1465b60ec FUN_1465b60ec body=55 status=ok
// SIG undefined FUN_1465b60ec(void)

void FUN_1465b60ec(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2ab0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2ab0 =
         FUN_140002ddd(FUN_1465b6123,uVar1,
                       L"GbxSkillComponentData_DelegateData_AppliedElementalEffect");
  }
  return;
}



// FUNCTION 1465b6123 FUN_1465b6123 body=47 status=ok
// SIG undefined FUN_1465b6123(void)

longlong FUN_1465b6123(void)

{
  if (DAT_14cba2aa8 == 0) {
    FUN_14086a14e(&DAT_14cba2aa8,&PTR_FUN_14b63b5c0);
  }
  return DAT_14cba2aa8;
}



// FUNCTION 1465b6152 FUN_1465b6152 body=48 status=ok
// SIG undefined FUN_1465b6152(void)

void FUN_1465b6152(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14b63e810;
  return;
}



// FUNCTION 1465b6182 FUN_1465b6182 body=47 status=ok
// SIG undefined FUN_1465b6182(void)

longlong FUN_1465b6182(void)

{
  if (DAT_14cba2c40 == 0) {
    FUN_14000fc22(&DAT_14cba2c40,&PTR_FUN_14b63b6b0);
  }
  return DAT_14cba2c40;
}



// FUNCTION 1465b61b2 FUN_1465b61b2 body=55 status=ok
// SIG undefined FUN_1465b61b2(void)

void FUN_1465b61b2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2c50 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2c50 =
         FUN_140002ddd(FUN_1465b61e9,uVar1,L"GbxSkillComponentData_DelegateData_CausedFreeze");
  }
  return;
}



// FUNCTION 1465b61e9 FUN_1465b61e9 body=47 status=ok
// SIG undefined FUN_1465b61e9(void)

longlong FUN_1465b61e9(void)

{
  if (DAT_14cba2c48 == 0) {
    FUN_14086a14e(&DAT_14cba2c48,&PTR_FUN_14b63b780);
  }
  return DAT_14cba2c48;
}



// FUNCTION 1465b6218 FUN_1465b6218 body=48 status=ok
// SIG undefined FUN_1465b6218(void)

void FUN_1465b6218(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14b63e990;
  return;
}



// FUNCTION 1465b6248 FUN_1465b6248 body=47 status=ok
// SIG undefined FUN_1465b6248(void)

longlong FUN_1465b6248(void)

{
  if (DAT_14cba2c60 == 0) {
    FUN_14000fc22(&DAT_14cba2c60,&PTR_FUN_14b63b8e0);
  }
  return DAT_14cba2c60;
}



// FUNCTION 1465b6278 FUN_1465b6278 body=55 status=ok
// SIG undefined FUN_1465b6278(void)

void FUN_1465b6278(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2c70 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2c70 =
         FUN_140002ddd(FUN_1465b62af,uVar1,L"GbxSkillComponentData_DelegateData_CausedPlayerDeath");
  }
  return;
}



// FUNCTION 1465b62af FUN_1465b62af body=47 status=ok
// SIG undefined FUN_1465b62af(void)

longlong FUN_1465b62af(void)

{
  if (DAT_14cba2c68 == 0) {
    FUN_14086a14e(&DAT_14cba2c68,&PTR_FUN_14b63b9c0);
  }
  return DAT_14cba2c68;
}



// FUNCTION 1465b62de FUN_1465b62de body=48 status=ok
// SIG undefined FUN_1465b62de(void)

void FUN_1465b62de(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14b63eb10;
  return;
}



// FUNCTION 1465b630e FUN_1465b630e body=47 status=ok
// SIG undefined FUN_1465b630e(void)

longlong FUN_1465b630e(void)

{
  if (DAT_14cba2c80 == 0) {
    FUN_14000fc22(&DAT_14cba2c80,&PTR_FUN_14b63bac0);
  }
  return DAT_14cba2c80;
}



// FUNCTION 1465b633e FUN_1465b633e body=55 status=ok
// SIG undefined FUN_1465b633e(void)

void FUN_1465b633e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2c90 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2c90 =
         FUN_140002ddd(FUN_1465b6375,uVar1,L"GbxSkillComponentData_DelegateData_CharacterDied");
  }
  return;
}



// FUNCTION 1465b6375 FUN_1465b6375 body=47 status=ok
// SIG undefined FUN_1465b6375(void)

longlong FUN_1465b6375(void)

{
  if (DAT_14cba2c88 == 0) {
    FUN_14086a14e(&DAT_14cba2c88,&PTR_FUN_14b63bb98);
  }
  return DAT_14cba2c88;
}



// FUNCTION 1465b63a4 FUN_1465b63a4 body=48 status=ok
// SIG undefined FUN_1465b63a4(void)

void FUN_1465b63a4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14b63ec90;
  return;
}



// FUNCTION 1465b63d4 FUN_1465b63d4 body=40 status=ok
// SIG undefined FUN_1465b63d4(void)

undefined8 FUN_1465b63d4(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b63fc FUN_1465b63fc body=40 status=ok
// SIG undefined FUN_1465b63fc(void)

undefined8 FUN_1465b63fc(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b6424 FUN_1465b6424 body=40 status=ok
// SIG undefined FUN_1465b6424(void)

undefined8 FUN_1465b6424(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b644c FUN_1465b644c body=40 status=ok
// SIG undefined FUN_1465b644c(void)

undefined8 FUN_1465b644c(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b6474 FUN_1465b6474 body=29 status=ok
// SIG undefined FUN_1465b6474(void)

undefined8 FUN_1465b6474(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b6492 FUN_1465b6492 body=29 status=ok
// SIG undefined FUN_1465b6492(void)

undefined8 FUN_1465b6492(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b64b0 FUN_1465b64b0 body=29 status=ok
// SIG undefined FUN_1465b64b0(void)

undefined8 FUN_1465b64b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b64ce FUN_1465b64ce body=29 status=ok
// SIG undefined FUN_1465b64ce(void)

undefined8 FUN_1465b64ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b64ec FUN_1465b64ec body=29 status=ok
// SIG undefined FUN_1465b64ec(void)

undefined8 FUN_1465b64ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b650a FUN_1465b650a body=29 status=ok
// SIG undefined FUN_1465b650a(void)

undefined8 FUN_1465b650a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b6528 FUN_1465b6528 body=29 status=ok
// SIG undefined FUN_1465b6528(void)

undefined8 FUN_1465b6528(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b6546 FUN_1465b6546 body=29 status=ok
// SIG undefined FUN_1465b6546(void)

undefined8 FUN_1465b6546(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b6564 FUN_1465b6564 body=29 status=ok
// SIG undefined FUN_1465b6564(void)

undefined8 FUN_1465b6564(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b6582 FUN_1465b6582 body=29 status=ok
// SIG undefined FUN_1465b6582(void)

undefined8 FUN_1465b6582(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b65a0 FUN_1465b65a0 body=116 status=ok
// SIG undefined FUN_1465b65a0(void)

void FUN_1465b65a0(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x268);
  FUN_145c9269c(param_2);
  *param_2 = &PTR_FUN_14b63cb00;
  *(undefined1 *)(param_2 + 0x32) = 0;
  memset(param_2 + 0x33,0,0x81);
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  param_2[0x47] = 0;
  param_2[0x48] = 0;
  param_2[0x49] = 0;
  param_2[0x4a] = 0;
  param_2[0x4b] = 0;
  *(undefined4 *)(param_2 + 0x4c) = 0;
  return;
}



// FUNCTION 1465b6614 FUN_1465b6614 body=65 status=ok
// SIG undefined FUN_1465b6614(void)

undefined8 * FUN_1465b6614(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b63cb00;
  FUN_14588898c(param_1 + 0x32);
  FUN_1458888c8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b6656 FUN_1465b6656 body=29 status=ok
// SIG undefined FUN_1465b6656(void)

undefined8 FUN_1465b6656(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b6674 FUN_1465b6674 body=116 status=ok
// SIG undefined FUN_1465b6674(void)

void FUN_1465b6674(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x268);
  FUN_145c9269c(param_2);
  *param_2 = &PTR_FUN_14b63cca0;
  *(undefined1 *)(param_2 + 0x32) = 0;
  memset(param_2 + 0x33,0,0x81);
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  param_2[0x47] = 0;
  param_2[0x48] = 0;
  param_2[0x49] = 0;
  param_2[0x4a] = 0;
  param_2[0x4b] = 0;
  *(undefined4 *)(param_2 + 0x4c) = 0;
  return;
}



// FUNCTION 1465b66e8 FUN_1465b66e8 body=65 status=ok
// SIG undefined FUN_1465b66e8(void)

undefined8 * FUN_1465b66e8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b63cca0;
  FUN_14588898c(param_1 + 0x32);
  FUN_1458888c8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b672a FUN_1465b672a body=29 status=ok
// SIG undefined FUN_1465b672a(void)

undefined8 FUN_1465b672a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b6748 FUN_1465b6748 body=29 status=ok
// SIG undefined FUN_1465b6748(void)

undefined8 FUN_1465b6748(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b6766 FUN_1465b6766 body=29 status=ok
// SIG undefined FUN_1465b6766(void)

undefined8 FUN_1465b6766(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b6784 FUN_1465b6784 body=29 status=ok
// SIG undefined FUN_1465b6784(void)

undefined8 FUN_1465b6784(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b67a2 FUN_1465b67a2 body=29 status=ok
// SIG undefined FUN_1465b67a2(void)

undefined8 FUN_1465b67a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b67c0 FUN_1465b67c0 body=29 status=ok
// SIG undefined FUN_1465b67c0(void)

undefined8 FUN_1465b67c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b67de FUN_1465b67de body=29 status=ok
// SIG undefined FUN_1465b67de(void)

undefined8 FUN_1465b67de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b6802 FUN_1465b6802 body=29 status=ok
// SIG undefined FUN_1465b6802(void)

undefined8 FUN_1465b6802(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b6820 FUN_1465b6820 body=29 status=ok
// SIG undefined FUN_1465b6820(void)

undefined8 FUN_1465b6820(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b683e FUN_1465b683e body=147 status=ok
// SIG undefined FUN_1465b683e(void)

undefined8 * FUN_1465b683e(undefined8 *param_1)

{
  FUN_1413ea01e();
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x59) = 0;
  *(undefined8 *)((longlong)param_1 + 0x61) = 0;
  *param_1 = &PTR_FUN_14b63f570;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 2;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xdc) = 0xff;
  FUN_1412df474(param_1 + 0x1c);
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  *(undefined2 *)(param_1 + 0x1e) = 0;
  return param_1;
}



// FUNCTION 1465b68d2 FUN_1465b68d2 body=29 status=ok
// SIG undefined FUN_1465b68d2(void)

undefined8 FUN_1465b68d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b68f0 FUN_1465b68f0 body=40 status=ok
// SIG undefined FUN_1465b68f0(void)

undefined8 FUN_1465b68f0(undefined8 param_1,int param_2)

{
  FUN_144a659aa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b6918 FUN_1465b6918 body=29 status=ok
// SIG undefined FUN_1465b6918(void)

undefined8 FUN_1465b6918(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b6936 FUN_1465b6936 body=40 status=ok
// SIG undefined FUN_1465b6936(void)

undefined8 FUN_1465b6936(undefined8 param_1,int param_2)

{
  FUN_144a659aa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b695e FUN_1465b695e body=29 status=ok
// SIG undefined FUN_1465b695e(void)

undefined8 FUN_1465b695e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b697c FUN_1465b697c body=40 status=ok
// SIG undefined FUN_1465b697c(void)

undefined8 FUN_1465b697c(undefined8 param_1,int param_2)

{
  FUN_144a659aa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b69a4 FUN_1465b69a4 body=29 status=ok
// SIG undefined FUN_1465b69a4(void)

undefined8 FUN_1465b69a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b69c2 FUN_1465b69c2 body=29 status=ok
// SIG undefined FUN_1465b69c2(void)

undefined8 FUN_1465b69c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465b69df FUN_1465b69df body=47 status=ok
// SIG undefined FUN_1465b69df(void)

longlong FUN_1465b69df(void)

{
  if (DAT_14cba2ca0 == 0) {
    FUN_14000fc22(&DAT_14cba2ca0,&PTR_FUN_14b63f670);
  }
  return DAT_14cba2ca0;
}



// FUNCTION 1465b6a0e FUN_1465b6a0e body=55 status=ok
// SIG undefined FUN_1465b6a0e(void)

void FUN_1465b6a0e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2cb0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2cb0 =
         FUN_140002ddd(FUN_1465b6a45,uVar1,L"GbxSkillComponentData_DelegateData_CharacterDowned");
  }
  return;
}



// FUNCTION 1465b6a45 FUN_1465b6a45 body=47 status=ok
// SIG undefined FUN_1465b6a45(void)

longlong FUN_1465b6a45(void)

{
  if (DAT_14cba2ca8 == 0) {
    FUN_14086a14e(&DAT_14cba2ca8,&PTR_FUN_14b63f750);
  }
  return DAT_14cba2ca8;
}



// FUNCTION 1465b6a74 FUN_1465b6a74 body=48 status=ok
// SIG undefined FUN_1465b6a74(void)

void FUN_1465b6a74(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14b645030;
  return;
}



// FUNCTION 1465b6aa4 FUN_1465b6aa4 body=47 status=ok
// SIG undefined FUN_1465b6aa4(void)

longlong FUN_1465b6aa4(void)

{
  if (DAT_14cba2cc0 == 0) {
    FUN_14000fc22(&DAT_14cba2cc0,&PTR_FUN_14b63f838);
  }
  return DAT_14cba2cc0;
}



// FUNCTION 1465b6ad4 FUN_1465b6ad4 body=55 status=ok
// SIG undefined FUN_1465b6ad4(void)

void FUN_1465b6ad4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2cd0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2cd0 =
         FUN_140002ddd(FUN_1465b6b0b,uVar1,L"GbxSkillComponentData_DelegateData_CharacterLevelUp");
  }
  return;
}



// FUNCTION 1465b6b0b FUN_1465b6b0b body=47 status=ok
// SIG undefined FUN_1465b6b0b(void)

longlong FUN_1465b6b0b(void)

{
  if (DAT_14cba2cc8 == 0) {
    FUN_14086a14e(&DAT_14cba2cc8,&PTR_FUN_14b63f918);
  }
  return DAT_14cba2cc8;
}



// FUNCTION 1465b6b3a FUN_1465b6b3a body=48 status=ok
// SIG undefined FUN_1465b6b3a(void)

void FUN_1465b6b3a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14b6451b0;
  return;
}



// FUNCTION 1465b6b6a FUN_1465b6b6a body=47 status=ok
// SIG undefined FUN_1465b6b6a(void)

longlong FUN_1465b6b6a(void)

{
  if (DAT_14cba2ce0 == 0) {
    FUN_14000fc22(&DAT_14cba2ce0,&PTR_FUN_14b63fa10);
  }
  return DAT_14cba2ce0;
}



// FUNCTION 1465b6b9a FUN_1465b6b9a body=55 status=ok
// SIG undefined FUN_1465b6b9a(void)

void FUN_1465b6b9a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2cf0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2cf0 =
         FUN_140002ddd(FUN_1465b6bd1,uVar1,L"GbxSkillComponentData_DelegateData_CharacterMoving");
  }
  return;
}



// FUNCTION 1465b6bd1 FUN_1465b6bd1 body=47 status=ok
// SIG undefined FUN_1465b6bd1(void)

longlong FUN_1465b6bd1(void)

{
  if (DAT_14cba2ce8 == 0) {
    FUN_14086a14e(&DAT_14cba2ce8,&PTR_FUN_14b63faf0);
  }
  return DAT_14cba2ce8;
}



// FUNCTION 1465b6c00 FUN_1465b6c00 body=48 status=ok
// SIG undefined FUN_1465b6c00(void)

void FUN_1465b6c00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14b645330;
  return;
}



// FUNCTION 1465b6c30 FUN_1465b6c30 body=47 status=ok
// SIG undefined FUN_1465b6c30(void)

longlong FUN_1465b6c30(void)

{
  if (DAT_14cba2d00 == 0) {
    FUN_14000fc22(&DAT_14cba2d00,&PTR_FUN_14b63fbf8);
  }
  return DAT_14cba2d00;
}



// FUNCTION 1465b6c60 FUN_1465b6c60 body=55 status=ok
// SIG undefined FUN_1465b6c60(void)

void FUN_1465b6c60(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2d10 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2d10 =
         FUN_140002ddd(FUN_1465b6c97,uVar1,L"GbxSkillComponentData_DelegateData_CharacterRespawned")
    ;
  }
  return;
}



// FUNCTION 1465b6c97 FUN_1465b6c97 body=47 status=ok
// SIG undefined FUN_1465b6c97(void)

longlong FUN_1465b6c97(void)

{
  if (DAT_14cba2d08 == 0) {
    FUN_14086a14e(&DAT_14cba2d08,&PTR_FUN_14b63fce0);
  }
  return DAT_14cba2d08;
}



// FUNCTION 1465b6cc6 FUN_1465b6cc6 body=48 status=ok
// SIG undefined FUN_1465b6cc6(void)

void FUN_1465b6cc6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14b6454b0;
  return;
}



// FUNCTION 1465b6cf6 FUN_1465b6cf6 body=47 status=ok
// SIG undefined FUN_1465b6cf6(void)

longlong FUN_1465b6cf6(void)

{
  if (DAT_14cba2d20 == 0) {
    FUN_14000fc22(&DAT_14cba2d20,&PTR_FUN_14b63fde8);
  }
  return DAT_14cba2d20;
}



// FUNCTION 1465b6d26 FUN_1465b6d26 body=55 status=ok
// SIG undefined FUN_1465b6d26(void)

void FUN_1465b6d26(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2d30 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2d30 =
         FUN_140002ddd(FUN_1465b6d5d,uVar1,L"GbxSkillComponentData_DelegateData_CharacterRevived");
  }
  return;
}



// FUNCTION 1465b6d5d FUN_1465b6d5d body=47 status=ok
// SIG undefined FUN_1465b6d5d(void)

longlong FUN_1465b6d5d(void)

{
  if (DAT_14cba2d28 == 0) {
    FUN_14086a14e(&DAT_14cba2d28,&PTR_FUN_14b63ffa0);
  }
  return DAT_14cba2d28;
}



// FUNCTION 1465b6d8c FUN_1465b6d8c body=48 status=ok
// SIG undefined FUN_1465b6d8c(void)

void FUN_1465b6d8c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14b645630;
  return;
}



// FUNCTION 1465b6dbc FUN_1465b6dbc body=47 status=ok
// SIG undefined FUN_1465b6dbc(void)

longlong FUN_1465b6dbc(void)

{
  if (DAT_14cba2d60 == 0) {
    FUN_14000fc22(&DAT_14cba2d60,&PTR_FUN_14b640300);
  }
  return DAT_14cba2d60;
}



// FUNCTION 1465b6dec FUN_1465b6dec body=55 status=ok
// SIG undefined FUN_1465b6dec(void)

void FUN_1465b6dec(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2d70 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2d70 =
         FUN_140002ddd(FUN_1465b6e23,uVar1,L"GbxSkillComponentData_DelegateData_EndedWeaponReload");
  }
  return;
}



// FUNCTION 1465b6e23 FUN_1465b6e23 body=47 status=ok
// SIG undefined FUN_1465b6e23(void)

longlong FUN_1465b6e23(void)

{
  if (DAT_14cba2d68 == 0) {
    FUN_14086a14e(&DAT_14cba2d68,&PTR_FUN_14b6403e0);
  }
  return DAT_14cba2d68;
}



// FUNCTION 1465b6e52 FUN_1465b6e52 body=48 status=ok
// SIG undefined FUN_1465b6e52(void)

void FUN_1465b6e52(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14b645930;
  return;
}



// FUNCTION 1465b6e82 FUN_1465b6e82 body=47 status=ok
// SIG undefined FUN_1465b6e82(void)

longlong FUN_1465b6e82(void)

{
  if (DAT_14cba2d80 == 0) {
    FUN_14000fc22(&DAT_14cba2d80,&PTR_FUN_14b640558);
  }
  return DAT_14cba2d80;
}



// FUNCTION 1465b6eb2 FUN_1465b6eb2 body=55 status=ok
// SIG undefined FUN_1465b6eb2(void)

void FUN_1465b6eb2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2d90 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2d90 =
         FUN_140002ddd(FUN_1465b6ee9,uVar1,L"GbxSkillComponentData_DelegateData_KillSkillTrigger");
  }
  return;
}



// FUNCTION 1465b6ee9 FUN_1465b6ee9 body=47 status=ok
// SIG undefined FUN_1465b6ee9(void)

longlong FUN_1465b6ee9(void)

{
  if (DAT_14cba2d88 == 0) {
    FUN_14086a14e(&DAT_14cba2d88,&PTR_FUN_14b640638);
  }
  return DAT_14cba2d88;
}



// FUNCTION 1465b6f18 FUN_1465b6f18 body=48 status=ok
// SIG undefined FUN_1465b6f18(void)

void FUN_1465b6f18(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14b645ab0;
  return;
}



// FUNCTION 1465b6f48 FUN_1465b6f48 body=47 status=ok
// SIG undefined FUN_1465b6f48(void)

longlong FUN_1465b6f48(void)

{
  if (DAT_14cba2da0 == 0) {
    FUN_14000fc22(&DAT_14cba2da0,&PTR_FUN_14b640830);
  }
  return DAT_14cba2da0;
}



// FUNCTION 1465b6f77 FUN_1465b6f77 body=47 status=ok
// SIG undefined FUN_1465b6f77(void)

longlong FUN_1465b6f77(void)

{
  if (DAT_14cba2da8 == 0) {
    FUN_1409ce572(&DAT_14cba2da8,&PTR_FUN_14b6408c0);
  }
  return DAT_14cba2da8;
}



// FUNCTION 1465b6fa6 FUN_1465b6fa6 body=55 status=ok
// SIG undefined FUN_1465b6fa6(void)

void FUN_1465b6fa6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2dc8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2dc8 = FUN_140002ddd(FUN_1465b6fdd,uVar1,L"GbxSkillComponentData_DelegateData_Ping");
  }
  return;
}



// FUNCTION 1465b6fdd FUN_1465b6fdd body=47 status=ok
// SIG undefined FUN_1465b6fdd(void)

longlong FUN_1465b6fdd(void)

{
  if (DAT_14cba2dc0 == 0) {
    FUN_14086a14e(&DAT_14cba2dc0,&PTR_FUN_14b640a08);
  }
  return DAT_14cba2dc0;
}



// FUNCTION 1465b700c FUN_1465b700c body=48 status=ok
// SIG undefined FUN_1465b700c(void)

void FUN_1465b700c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14b645ca0;
  return;
}



// FUNCTION 1465b703c FUN_1465b703c body=47 status=ok
// SIG undefined FUN_1465b703c(void)

longlong FUN_1465b703c(void)

{
  if (DAT_14cba2dd8 == 0) {
    FUN_14000fc22(&DAT_14cba2dd8,&PTR_FUN_14b640ad0);
  }
  return DAT_14cba2dd8;
}



// FUNCTION 1465b706c FUN_1465b706c body=55 status=ok
// SIG undefined FUN_1465b706c(void)

void FUN_1465b706c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2de8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2de8 =
         FUN_140002ddd(FUN_1465b70a3,uVar1,
                       L"GbxSkillComponentData_DelegateData_RepairKitCooldownEnded");
  }
  return;
}



// FUNCTION 1465b70a3 FUN_1465b70a3 body=47 status=ok
// SIG undefined FUN_1465b70a3(void)

longlong FUN_1465b70a3(void)

{
  if (DAT_14cba2de0 == 0) {
    FUN_14086a14e(&DAT_14cba2de0,&PTR_FUN_14b640bc0);
  }
  return DAT_14cba2de0;
}



// FUNCTION 1465b70d2 FUN_1465b70d2 body=48 status=ok
// SIG undefined FUN_1465b70d2(void)

void FUN_1465b70d2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14b645e20;
  return;
}



// FUNCTION 1465b7102 FUN_1465b7102 body=47 status=ok
// SIG undefined FUN_1465b7102(void)

longlong FUN_1465b7102(void)

{
  if (DAT_14cba2df8 == 0) {
    FUN_14000fc22(&DAT_14cba2df8,&PTR_FUN_14b640c70);
  }
  return DAT_14cba2df8;
}



// FUNCTION 1465b7132 FUN_1465b7132 body=55 status=ok
// SIG undefined FUN_1465b7132(void)

void FUN_1465b7132(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2e08 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2e08 =
         FUN_140002ddd(FUN_1465b7169,uVar1,
                       L"GbxSkillComponentData_DelegateData_RepairKitHealingEnded");
  }
  return;
}



// FUNCTION 1465b7169 FUN_1465b7169 body=47 status=ok
// SIG undefined FUN_1465b7169(void)

longlong FUN_1465b7169(void)

{
  if (DAT_14cba2e00 == 0) {
    FUN_14086a14e(&DAT_14cba2e00,&PTR_FUN_14b640d60);
  }
  return DAT_14cba2e00;
}



// FUNCTION 1465b7198 FUN_1465b7198 body=48 status=ok
// SIG undefined FUN_1465b7198(void)

void FUN_1465b7198(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14b645fa0;
  return;
}



// FUNCTION 1465b71c8 FUN_1465b71c8 body=47 status=ok
// SIG undefined FUN_1465b71c8(void)

longlong FUN_1465b71c8(void)

{
  if (DAT_14cba2e18 == 0) {
    FUN_14000fc22(&DAT_14cba2e18,&PTR_FUN_14b640e10);
  }
  return DAT_14cba2e18;
}



// FUNCTION 1465b71f8 FUN_1465b71f8 body=55 status=ok
// SIG undefined FUN_1465b71f8(void)

void FUN_1465b71f8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2e28 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2e28 =
         FUN_140002ddd(FUN_1465b722f,uVar1,
                       L"GbxSkillComponentData_DelegateData_RepairKitHealingStarted");
  }
  return;
}



// FUNCTION 1465b722f FUN_1465b722f body=47 status=ok
// SIG undefined FUN_1465b722f(void)

longlong FUN_1465b722f(void)

{
  if (DAT_14cba2e20 == 0) {
    FUN_14086a14e(&DAT_14cba2e20,&PTR_FUN_14b640f08);
  }
  return DAT_14cba2e20;
}



// FUNCTION 1465b725e FUN_1465b725e body=48 status=ok
// SIG undefined FUN_1465b725e(void)

void FUN_1465b725e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14b646120;
  return;
}



// FUNCTION 1465b728e FUN_1465b728e body=47 status=ok
// SIG undefined FUN_1465b728e(void)

longlong FUN_1465b728e(void)

{
  if (DAT_14cba2e38 == 0) {
    FUN_14000fc22(&DAT_14cba2e38,&PTR_FUN_14b641048);
  }
  return DAT_14cba2e38;
}


