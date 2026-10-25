// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147e9a50c FUN_147e9a50c body=131 status=ok
// SIG undefined FUN_147e9a50c(void)

void FUN_147e9a50c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14abc7d30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e9a590 FUN_147e9a590 body=39 status=ok
// SIG undefined FUN_147e9a590(void)

void FUN_147e9a590(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147e9a5b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 147e9a5b8 FUN_147e9a5b8 body=134 status=ok
// SIG undefined FUN_147e9a5b8(void)

bool FUN_147e9a5b8(longlong param_1)

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
    FUN_1400841de(param_1 + 0x18,&local_28);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e9a63f FUN_147e9a63f body=61 status=ok
// SIG undefined FUN_147e9a63f(void)

void FUN_147e9a63f(undefined8 param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_1447cd2ec(param_1,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e9a67e FUN_147e9a67e body=233 status=ok
// SIG undefined FUN_147e9a67e(void)

void FUN_147e9a67e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [43];
  undefined1 local_1d;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_1d = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1d);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ecce08(param_1,local_1c,local_1d);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e9a7a4 FUN_147e9a7a4 body=55 status=ok
// SIG undefined FUN_147e9a7a4(void)

void FUN_147e9a7a4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1e1b0 == 0) {
    uVar1 = FUN_140d9472b();
    DAT_14cb1e1b0 = FUN_14171c317(FUN_146425f50,uVar1,L"EAIRequestPriority");
  }
  return;
}



// FUNCTION 147e9a7db FUN_147e9a7db body=55 status=ok
// SIG undefined FUN_147e9a7db(void)

void FUN_147e9a7db(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1e1c8 == 0) {
    uVar1 = FUN_140d9472b();
    DAT_14cb1e1c8 = FUN_14171c317(FUN_146425f81,uVar1,L"EAILockSource");
  }
  return;
}



// FUNCTION 147e9a81a FUN_147e9a81a body=55 status=ok
// SIG undefined FUN_147e9a81a(void)

void FUN_147e9a81a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1e380 == 0) {
    uVar1 = FUN_140d9472b();
    DAT_14cb1e380 = FUN_14171c317(FUN_1464263de,uVar1,L"EEnvQueryRunMode");
  }
  return;
}



// FUNCTION 147e9a851 FUN_147e9a851 body=55 status=ok
// SIG undefined FUN_147e9a851(void)

void FUN_147e9a851(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1e3f8 == 0) {
    uVar1 = FUN_140d9472b();
    DAT_14cb1e3f8 = FUN_14171c317(FUN_1464264cb,uVar1,L"EEnvOverlapShape");
  }
  return;
}



// FUNCTION 147e9a8d2 FUN_147e9a8d2 body=78 status=ok
// SIG undefined FUN_147e9a8d2(void)

void FUN_147e9a8d2(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_3;
  uStack_1c = param_3[1];
  uStack_18 = param_3[2];
  uStack_14 = param_3[3];
  local_10 = *(undefined8 *)(param_3 + 4);
  local_28 = param_2;
  FUN_1447cd2ec(local_20,&local_28);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e9a922 FUN_147e9a922 body=108 status=ok
// SIG undefined FUN_147e9a922(void)

void FUN_147e9a922(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_3;
  uStack_2c = param_3[1];
  uStack_28 = param_3[2];
  uStack_24 = param_3[3];
  local_20 = *(undefined8 *)(param_3 + 4);
  local_38 = param_2;
  uVar1 = FUN_14477b072(local_30,DAT_14cb1e518);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_38);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e9a9a4 FUN_147e9a9a4 body=268 status=ok
// SIG undefined FUN_147e9a9a4(void)

void FUN_147e9a9a4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined2 local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  local_28 = 0xffff;
  local_24 = 0;
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
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar3 = &local_30;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_147ecb26a(puVar3,local_38);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e9aab2 FUN_147e9aab2 body=308 status=ok
// SIG undefined FUN_147e9aab2(void)

void FUN_147e9aab2(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined2 local_38;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  local_38 = 0xffff;
  local_30 = 0;
  local_28 = FUN_1446f8646();
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_28);
  }
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
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar3 = &local_40;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = thunk_FUN_147eca652(puVar3,local_48);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e9abe8 FUN_147e9abe8 body=65 status=ok
// SIG undefined FUN_147e9abe8(void)

undefined8 * FUN_147e9abe8(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0xffff;
  param_1[2] = 0;
  lVar1 = FUN_1446f8646();
  param_1[3] = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_1;
}



// FUNCTION 147e9ac2a FUN_147e9ac2a body=305 status=ok
// SIG undefined FUN_147e9ac2a(void)

void FUN_147e9ac2a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined2 local_40;
  undefined1 local_3c;
  undefined8 local_38;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  local_40 = 0xffff;
  local_3c = 0;
  local_38 = 0;
  FUN_140056680(local_30,&DAT_149dfb77a);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar2 = &local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147ecb27e(puVar2,local_50);
  *param_3 = uVar1;
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e9ad5c FUN_147e9ad5c body=273 status=ok
// SIG undefined FUN_147e9ad5c(void)

void FUN_147e9ad5c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined2 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  local_28 = 0xffff;
  local_24 = 0;
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
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar2 = &local_30;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar3 = FUN_147ecb28c(puVar2,local_38);
  *param_3 = uVar3;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e9ae6e FUN_147e9ae6e body=271 status=ok
// SIG undefined FUN_147e9ae6e(void)

void FUN_147e9ae6e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined2 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  local_28 = 0xffff;
  local_24 = 0;
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
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar3 = &local_30;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_147ecb29c(puVar3,local_38);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e9af7e FUN_147e9af7e body=281 status=ok
// SIG undefined FUN_147e9af7e(void)

void FUN_147e9af7e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_34;
  undefined2 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_34 = 0;
  local_2c = 0xffff;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar2 = &local_34;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ecb2aa(&local_48,puVar2,local_40);
  *param_3 = local_48;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e9b098 FUN_147e9b098 body=308 status=ok
// SIG undefined FUN_147e9b098(void)

void FUN_147e9b098(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined2 local_38;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  local_38 = 0xffff;
  local_30 = 0;
  local_28 = FUN_1446f8646();
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_28);
  }
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
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar3 = &local_40;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = thunk_FUN_147eca988(puVar3,local_48);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e9b1ce FUN_147e9b1ce body=65 status=ok
// SIG undefined FUN_147e9b1ce(void)

undefined8 * FUN_147e9b1ce(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0xffff;
  param_1[2] = 0;
  lVar1 = FUN_1446f8646();
  param_1[3] = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_1;
}



// FUNCTION 147e9b210 FUN_147e9b210 body=311 status=ok
// SIG undefined FUN_147e9b210(void)

void FUN_147e9b210(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined2 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = DAT_14c846508;
  local_38 = DAT_14c8464f8;
  uStack_30 = DAT_14c846500;
  local_48 = 0;
  local_40 = 0xffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  puVar2 = &local_48;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ecb318(&local_68,puVar2,local_50);
  *(undefined8 *)(param_3 + 4) = local_58;
  *param_3 = local_68;
  param_3[1] = uStack_64;
  param_3[2] = uStack_60;
  param_3[3] = uStack_5c;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e9b348 FUN_147e9b348 body=369 status=ok
// SIG undefined FUN_147e9b348(void)

void FUN_147e9b348(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined2 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = 0;
  local_38 = 0xffff;
  local_30 = 0;
  uStack_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar1 = &local_40;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ecb2f6(&local_58,puVar1,local_48);
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
    local_58 = 0;
    *(undefined4 *)(param_3 + 1) = local_50;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_4c;
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e9b4ba FUN_147e9b4ba body=378 status=ok
// SIG undefined FUN_147e9b4ba(void)

void FUN_147e9b4ba(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong lStack_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined2 local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  local_40 = 0xffff;
  FUN_141215e22(local_38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar1 = &local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ecb3a0(&local_68,puVar1,local_50);
  if (&local_68 != param_3) {
    FUN_1401f9f5c(param_3);
    if ((local_68 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_68);
    }
    *param_3 = local_68;
    param_3[1] = lStack_60;
    local_68 = 0;
    lStack_60 = 0;
  }
  FUN_1401f9f5c(&local_68);
  FUN_1401f9f5c(local_38);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e9b636 FUN_147e9b636 body=311 status=ok
// SIG undefined FUN_147e9b636(void)

void FUN_147e9b636(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined2 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = DAT_14c8464f0;
  local_38 = DAT_14c8464e0;
  uStack_30 = DAT_14c8464e8;
  local_48 = 0;
  local_40 = 0xffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  puVar2 = &local_48;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ecb35c(&local_68,puVar2,local_50);
  *(undefined8 *)(param_3 + 4) = local_58;
  *param_3 = local_68;
  param_3[1] = uStack_64;
  param_3[2] = uStack_60;
  param_3[3] = uStack_5c;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e9b772 FUN_147e9b772 body=49 status=ok
// SIG undefined FUN_147e9b772(void)

longlong * FUN_147e9b772(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_145b64698();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 147e9b81a FUN_147e9b81a body=59 status=ok
// SIG undefined FUN_147e9b81a(void)

undefined8 FUN_147e9b81a(longlong *param_1)

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



// FUNCTION 147e9b8cc FUN_147e9b8cc body=56 status=ok
// SIG undefined FUN_147e9b8cc(void)

void FUN_147e9b8cc(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 0x40);
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
                    /* WARNING: Could not recover jumptable at 0x000147e9b8f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147e9b91a FUN_147e9b91a body=54 status=ok
// SIG undefined FUN_147e9b91a(void)

undefined1 FUN_147e9b91a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147e9ba4c(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 147e9b978 FUN_147e9b978 body=59 status=ok
// SIG undefined FUN_147e9b978(void)

undefined8 FUN_147e9b978(longlong *param_1)

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



// FUNCTION 147e9b9be FUN_147e9b9be body=64 status=ok
// SIG undefined FUN_147e9b9be(void)

void FUN_147e9b9be(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x50) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 0x40);
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
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 147e9ba4c FUN_147e9ba4c body=158 status=ok
// SIG undefined FUN_147e9ba4c(void)

undefined8 * FUN_147e9ba4c(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
  *param_1 = *param_2;
  param_1[3] = param_2[3];
  uVar5 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar6 = *(undefined4 *)(param_2 + 2);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar5;
  *(undefined4 *)(param_1 + 2) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar7;
  lVar8 = param_2[4];
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = param_2[4];
    }
  }
  param_1[4] = lVar8;
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar6 = *(undefined4 *)(param_2 + 6);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x34);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar5;
  *(undefined4 *)(param_1 + 6) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar7;
  uVar3 = param_2[7];
  lVar8 = param_2[8];
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_1[8];
  param_1[7] = uVar3;
  param_1[8] = lVar8;
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
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  return param_1;
}



// FUNCTION 147e9bb5c FUN_147e9bb5c body=59 status=ok
// SIG undefined FUN_147e9bb5c(void)

undefined8 FUN_147e9bb5c(longlong *param_1)

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



// FUNCTION 147e9bc82 FUN_147e9bc82 body=59 status=ok
// SIG undefined FUN_147e9bc82(void)

undefined8 FUN_147e9bc82(longlong *param_1)

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



// FUNCTION 147e9bd54 FUN_147e9bd54 body=54 status=ok
// SIG undefined FUN_147e9bd54(void)

undefined1 FUN_147e9bd54(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147e9be52(param_2,param_3);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 147e9bdb2 FUN_147e9bdb2 body=59 status=ok
// SIG undefined FUN_147e9bdb2(void)

undefined8 FUN_147e9bdb2(longlong *param_1)

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



// FUNCTION 147e9be52 FUN_147e9be52 body=133 status=ok
// SIG undefined FUN_147e9be52(void)

longlong * FUN_147e9be52(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
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
      FUN_1456cec3c();
      lVar2 = param_2[1];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[1] = lVar2;
  lVar2 = param_2[2];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[2];
    }
  }
  param_1[2] = lVar2;
  *(char *)(param_1 + 3) = (char)param_2[3];
  return param_1;
}



// FUNCTION 147e9bf00 FUN_147e9bf00 body=138 status=ok
// SIG undefined FUN_147e9bf00(void)

undefined1 FUN_147e9bf00(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
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
  byte bVar15;
  longlong lVar16;
  longlong lVar17;
  
  if (param_4 != 0) {
    lVar17 = 0;
    bVar15 = DAT_14c950c29;
    do {
      *(undefined4 *)(param_2 + lVar17) = *(undefined4 *)(param_3 + lVar17);
      lVar16 = *(longlong *)(param_3 + 8 + lVar17);
      if ((bVar15 & 1) != 0) {
        if (lVar16 == 0) {
          lVar16 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar16 = *(longlong *)(param_3 + 8 + lVar17);
          bVar15 = DAT_14c950c29;
        }
      }
      lVar1 = param_2 + lVar17;
      *(longlong *)(lVar1 + 8) = lVar16;
      puVar2 = (undefined4 *)(param_3 + 0x10 + lVar17);
      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      uVar6 = puVar2[3];
      puVar3 = (undefined4 *)(param_3 + 0x20 + lVar17);
      uVar7 = *puVar3;
      uVar8 = puVar3[1];
      uVar9 = puVar3[2];
      uVar10 = puVar3[3];
      puVar3 = (undefined4 *)(param_3 + 0x29 + lVar17);
      uVar11 = *puVar3;
      uVar12 = puVar3[1];
      uVar13 = puVar3[2];
      uVar14 = puVar3[3];
      *(undefined4 *)(lVar1 + 0x10) = *puVar2;
      *(undefined4 *)(lVar1 + 0x14) = uVar4;
      *(undefined4 *)(lVar1 + 0x18) = uVar5;
      *(undefined4 *)(lVar1 + 0x1c) = uVar6;
      *(undefined4 *)(lVar1 + 0x20) = uVar7;
      *(undefined4 *)(lVar1 + 0x24) = uVar8;
      *(undefined4 *)(lVar1 + 0x28) = uVar9;
      *(undefined4 *)(lVar1 + 0x2c) = uVar10;
      *(undefined4 *)(lVar1 + 0x29) = uVar11;
      *(undefined4 *)(lVar1 + 0x2d) = uVar12;
      *(undefined4 *)(lVar1 + 0x31) = uVar13;
      *(undefined4 *)(lVar1 + 0x35) = uVar14;
      lVar17 = lVar17 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147e9bfb2 FUN_147e9bfb2 body=59 status=ok
// SIG undefined FUN_147e9bfb2(void)

undefined8 FUN_147e9bfb2(longlong *param_1)

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



// FUNCTION 147e9c13e FUN_147e9c13e body=59 status=ok
// SIG undefined FUN_147e9c13e(void)

undefined8 FUN_147e9c13e(longlong *param_1)

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



// FUNCTION 147e9c208 FUN_147e9c208 body=47 status=ok
// SIG undefined FUN_147e9c208(void)

void FUN_147e9c208(undefined8 param_1,longlong *param_2)

{
  if (param_2[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147e9c24e FUN_147e9c24e body=54 status=ok
// SIG undefined FUN_147e9c24e(void)

undefined1 FUN_147e9c24e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147e9c348(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 147e9c2ac FUN_147e9c2ac body=59 status=ok
// SIG undefined FUN_147e9c2ac(void)

undefined8 FUN_147e9c2ac(longlong *param_1)

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



// FUNCTION 147e9c348 FUN_147e9c348 body=89 status=ok
// SIG undefined FUN_147e9c348(void)

longlong FUN_147e9c348(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_147e9c3a2();
  lVar2 = *(longlong *)(param_2 + 0x10);
  if (DAT_14c950c29 == '\x01') {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 0x10);
    }
  }
  *(longlong *)(param_1 + 0x10) = lVar2;
  FUN_1447a122a(param_1 + 0x18,param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  return param_1;
}



// FUNCTION 147e9c3a2 FUN_147e9c3a2 body=88 status=ok
// SIG undefined FUN_147e9c3a2(void)

undefined8 * FUN_147e9c3a2(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147e9c3fa(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 147e9c3fa FUN_147e9c3fa body=98 status=ok
// SIG undefined FUN_147e9c3fa(void)

void FUN_147e9c3fa(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147e9c45e FUN_147e9c45e body=51 status=ok
// SIG undefined FUN_147e9c45e(void)

void FUN_147e9c45e(longlong *param_1)

{
  if ((char)param_1[8] == '\x01') {
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 147e9c512 FUN_147e9c512 body=75 status=ok
// SIG undefined FUN_147e9c512(void)

undefined1 FUN_147e9c512(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      FUN_147e9c640();
      lVar6 = lVar6 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147e9c586 FUN_147e9c586 body=59 status=ok
// SIG undefined FUN_147e9c586(void)

undefined8 FUN_147e9c586(longlong *param_1)

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



// FUNCTION 147e9c5cc FUN_147e9c5cc body=38 status=ok
// SIG undefined FUN_147e9c5cc(void)

void FUN_147e9c5cc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 147e9c640 FUN_147e9c640 body=82 status=ok
// SIG undefined FUN_147e9c640(void)

longlong FUN_147e9c640(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_147e9c692();
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  lVar1 = *(longlong *)(param_2 + 0x18);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x18);
    }
  }
  *(longlong *)(param_1 + 0x18) = lVar1;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
  return param_1;
}



// FUNCTION 147e9c692 FUN_147e9c692 body=79 status=ok
// SIG undefined FUN_147e9c692(void)

undefined8 * FUN_147e9c692(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147e9c6e2(param_1,iVar1);
      FUN_147e9c744(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147e9c6e2 FUN_147e9c6e2 body=98 status=ok
// SIG undefined FUN_147e9c6e2(void)

void FUN_147e9c6e2(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147e9c744 FUN_147e9c744 body=82 status=ok
// SIG undefined FUN_147e9c744(void)

void FUN_147e9c744(longlong param_1,longlong param_2,int param_3)

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
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 147e9c7c6 FUN_147e9c7c6 body=54 status=ok
// SIG undefined FUN_147e9c7c6(void)

undefined1 FUN_147e9c7c6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147e9c8da(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 147e9c824 FUN_147e9c824 body=59 status=ok
// SIG undefined FUN_147e9c824(void)

undefined8 FUN_147e9c824(longlong *param_1)

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



// FUNCTION 147e9c86a FUN_147e9c86a body=34 status=ok
// SIG undefined FUN_147e9c86a(void)

void FUN_147e9c86a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_14597ae4c(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 147e9c8da FUN_147e9c8da body=92 status=ok
// SIG undefined FUN_147e9c8da(void)

longlong * FUN_147e9c8da(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *param_2;
    }
  }
  *param_1 = lVar1;
  FUN_147e9c936(param_1 + 1,param_2 + 1);
  FUN_147e9c640(param_1 + 3,param_2 + 3);
  *(int *)(param_1 + 8) = (int)param_2[8];
  *(undefined1 *)((longlong)param_1 + 0x44) = *(undefined1 *)((longlong)param_2 + 0x44);
  return param_1;
}



// FUNCTION 147e9c936 FUN_147e9c936 body=95 status=ok
// SIG undefined FUN_147e9c936(void)

undefined8 * FUN_147e9c936(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14597ae89(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147e9c996(param_1,iVar1);
      FUN_147e9ca05(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147e9c996 FUN_147e9c996 body=111 status=ok
// SIG undefined FUN_147e9c996(void)

void FUN_147e9c996(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147e9ca05 FUN_147e9ca05 body=68 status=ok
// SIG undefined FUN_147e9ca05(void)

void FUN_147e9ca05(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_3 != 0) {
    param_1 = param_1 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      uVar1 = *(undefined4 *)(param_2 + -0xc);
      uVar2 = *(undefined4 *)(param_2 + -8);
      uVar3 = *(undefined4 *)(param_2 + -4);
      *(undefined4 *)(param_1 + -0x10) = *(undefined4 *)(param_2 + -0x10);
      *(undefined4 *)(param_1 + -0xc) = uVar1;
      *(undefined4 *)(param_1 + -8) = uVar2;
      *(undefined4 *)(param_1 + -4) = uVar3;
      FUN_147e9ca4a(param_1,param_2);
      param_1 = param_1 + 0x38;
      param_2 = param_2 + 0x38;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147e9ca4a FUN_147e9ca4a body=135 status=ok
// SIG undefined FUN_147e9ca4a(void)

undefined8 * FUN_147e9ca4a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_147e9c6e2(param_1,iVar1,0);
    FUN_147e9c744(*param_1,uVar2,iVar1);
  }
  param_1[2] = param_2[2];
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined1 *)((longlong)param_1 + 0x24) = *(undefined1 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  return param_1;
}



// FUNCTION 147e9cb36 FUN_147e9cb36 body=65 status=ok
// SIG undefined FUN_147e9cb36(void)

undefined1 FUN_147e9cb36(longlong *param_1,undefined1 *param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return *param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e9cc4a FUN_147e9cc4a body=64 status=ok
// SIG undefined FUN_147e9cc4a(void)

undefined4 FUN_147e9cc4a(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return *param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e9cd62 FUN_147e9cd62 body=72 status=ok
// SIG undefined FUN_147e9cd62(void)

void FUN_147e9cd62(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_144a78877(*param_2,param_2[1]);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e9ce7e FUN_147e9ce7e body=74 status=ok
// SIG undefined FUN_147e9ce7e(void)

undefined4 FUN_147e9ce7e(longlong *param_1,undefined2 *param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return CONCAT22(*param_2,param_2[1]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e9cf9c FUN_147e9cf9c body=64 status=ok
// SIG undefined FUN_147e9cf9c(void)

undefined4 FUN_147e9cf9c(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return *param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e9d0cc FUN_147e9d0cc body=59 status=ok
// SIG undefined FUN_147e9d0cc(void)

undefined8 FUN_147e9d0cc(longlong *param_1)

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



// FUNCTION 147e9d1f2 FUN_147e9d1f2 body=59 status=ok
// SIG undefined FUN_147e9d1f2(void)

undefined8 FUN_147e9d1f2(longlong *param_1)

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



// FUNCTION 147e9d2c6 FUN_147e9d2c6 body=54 status=ok
// SIG undefined FUN_147e9d2c6(void)

undefined1 FUN_147e9d2c6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147e9d3ee(param_2,param_3);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 147e9d328 FUN_147e9d328 body=96 status=ok
// SIG undefined FUN_147e9d328(void)

uint FUN_147e9d328(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,&local_28);
  local_28 = 0;
  FUN_14485c47a(&local_28,*(undefined8 *)(param_2 + 0x10));
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28._4_4_ ^ (uint)local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e9d3ee FUN_147e9d3ee body=106 status=ok
// SIG undefined FUN_147e9d3ee(void)

undefined8 * FUN_147e9d3ee(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  lVar2 = param_2[2];
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[2];
    }
  }
  bVar1 = DAT_14c950c29;
  param_1[2] = lVar2;
  lVar2 = param_2[3];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[3];
    }
  }
  param_1[3] = lVar2;
  return param_1;
}



// FUNCTION 147e9d4ca FUN_147e9d4ca body=54 status=ok
// SIG undefined FUN_147e9d4ca(void)

undefined1 FUN_147e9d4ca(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147e9d5e6(param_2,param_3);
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return 1;
}



// FUNCTION 147e9d52c FUN_147e9d52c body=59 status=ok
// SIG undefined FUN_147e9d52c(void)

undefined8 FUN_147e9d52c(longlong *param_1)

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



// FUNCTION 147e9d572 FUN_147e9d572 body=38 status=ok
// SIG undefined FUN_147e9d572(void)

void FUN_147e9d572(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 147e9d5e6 FUN_147e9d5e6 body=91 status=ok
// SIG undefined FUN_147e9d5e6(void)

undefined8 * FUN_147e9d5e6(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  *(undefined1 *)((longlong)param_1 + 0xc) = *(undefined1 *)((longlong)param_2 + 0xc);
  lVar1 = param_2[2];
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = param_2[2];
    }
  }
  param_1[2] = lVar1;
  FUN_144a787a6(param_1 + 3,param_2 + 3);
  return param_1;
}



// FUNCTION 147e9d6ce FUN_147e9d6ce body=59 status=ok
// SIG undefined FUN_147e9d6ce(void)

undefined8 FUN_147e9d6ce(longlong *param_1)

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



// FUNCTION 147e9d7fc FUN_147e9d7fc body=59 status=ok
// SIG undefined FUN_147e9d7fc(void)

undefined8 FUN_147e9d7fc(longlong *param_1)

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



// FUNCTION 147e9d928 FUN_147e9d928 body=59 status=ok
// SIG undefined FUN_147e9d928(void)

undefined8 FUN_147e9d928(longlong *param_1)

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



// FUNCTION 147e9da1a FUN_147e9da1a body=78 status=ok
// SIG undefined FUN_147e9da1a(void)

undefined8 FUN_147e9da1a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      lVar1 = param_2 + 0x10 + lVar2;
      *(undefined4 *)(lVar1 + -8) = *(undefined4 *)((undefined8 *)(param_3 + lVar2) + 1);
      *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(param_3 + lVar2);
      FUN_144a787a6();
      lVar2 = lVar2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147e9da94 FUN_147e9da94 body=59 status=ok
// SIG undefined FUN_147e9da94(void)

undefined8 FUN_147e9da94(longlong *param_1)

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



// FUNCTION 147e9dada FUN_147e9dada body=38 status=ok
// SIG undefined FUN_147e9dada(void)

void FUN_147e9dada(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 147e9db82 FUN_147e9db82 body=54 status=ok
// SIG undefined FUN_147e9db82(void)

undefined1 FUN_147e9db82(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147e9dcaa(param_2,param_3);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 147e9dbe4 FUN_147e9dbe4 body=96 status=ok
// SIG undefined FUN_147e9dbe4(void)

uint FUN_147e9dbe4(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,&local_28);
  local_28 = 0;
  FUN_14485c47a(&local_28,*(undefined8 *)(param_2 + 0x10));
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28._4_4_ ^ (uint)local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e9dcaa FUN_147e9dcaa body=106 status=ok
// SIG undefined FUN_147e9dcaa(void)

undefined8 * FUN_147e9dcaa(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  lVar2 = param_2[2];
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[2];
    }
  }
  bVar1 = DAT_14c950c29;
  param_1[2] = lVar2;
  lVar2 = param_2[3];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[3];
    }
  }
  param_1[3] = lVar2;
  return param_1;
}



// FUNCTION 147e9dd16 FUN_147e9dd16 body=101 status=ok
// SIG undefined FUN_147e9dd16(void)

void FUN_147e9dd16(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  uVar3 = DAT_14c846508;
  uVar2 = DAT_14c846500;
  uVar1 = DAT_14c8464f8;
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = DAT_14c8464f8;
  uStack_20 = DAT_14c846500;
  local_18 = DAT_14c846508;
  *param_2 = 0;
  *(undefined2 *)(param_2 + 1) = 0xffff;
  local_28._0_4_ = (undefined4)uVar1;
  local_28._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_20._0_4_ = (undefined4)uVar2;
  uStack_20._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  *(undefined4 *)(param_2 + 2) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_28._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_20._4_4_;
  param_2[4] = uVar3;
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
  local_28 = uVar1;
  uStack_20 = uVar2;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e9dd7c FUN_147e9dd7c body=101 status=ok
// SIG undefined FUN_147e9dd7c(void)

void FUN_147e9dd7c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  uVar3 = DAT_14c846508;
  uVar2 = DAT_14c846500;
  uVar1 = DAT_14c8464f8;
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = DAT_14c8464f8;
  uStack_20 = DAT_14c846500;
  local_18 = DAT_14c846508;
  *param_2 = 0;
  *(undefined2 *)(param_2 + 1) = 0xffff;
  local_28._0_4_ = (undefined4)uVar1;
  local_28._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_20._0_4_ = (undefined4)uVar2;
  uStack_20._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  *(undefined4 *)(param_2 + 2) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_28._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_20._4_4_;
  param_2[4] = uVar3;
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
  local_28 = uVar1;
  uStack_20 = uVar2;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e9de58 FUN_147e9de58 body=59 status=ok
// SIG undefined FUN_147e9de58(void)

undefined8 FUN_147e9de58(longlong *param_1)

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



// FUNCTION 147e9defa FUN_147e9defa body=101 status=ok
// SIG undefined FUN_147e9defa(void)

void FUN_147e9defa(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  uVar3 = DAT_14c8464f0;
  uVar2 = DAT_14c8464e8;
  uVar1 = DAT_14c8464e0;
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = DAT_14c8464e0;
  uStack_20 = DAT_14c8464e8;
  local_18 = DAT_14c8464f0;
  *param_2 = 0;
  *(undefined2 *)(param_2 + 1) = 0xffff;
  local_28._0_4_ = (undefined4)uVar1;
  local_28._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_20._0_4_ = (undefined4)uVar2;
  uStack_20._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  *(undefined4 *)(param_2 + 2) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_28._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_20._4_4_;
  param_2[4] = uVar3;
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
  local_28 = uVar1;
  uStack_20 = uVar2;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e9df60 FUN_147e9df60 body=101 status=ok
// SIG undefined FUN_147e9df60(void)

void FUN_147e9df60(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  uVar3 = DAT_14c8464f0;
  uVar2 = DAT_14c8464e8;
  uVar1 = DAT_14c8464e0;
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = DAT_14c8464e0;
  uStack_20 = DAT_14c8464e8;
  local_18 = DAT_14c8464f0;
  *param_2 = 0;
  *(undefined2 *)(param_2 + 1) = 0xffff;
  local_28._0_4_ = (undefined4)uVar1;
  local_28._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_20._0_4_ = (undefined4)uVar2;
  uStack_20._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  *(undefined4 *)(param_2 + 2) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_28._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_20._4_4_;
  param_2[4] = uVar3;
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
  local_28 = uVar1;
  uStack_20 = uVar2;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e9e03c FUN_147e9e03c body=59 status=ok
// SIG undefined FUN_147e9e03c(void)

undefined8 FUN_147e9e03c(longlong *param_1)

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



// FUNCTION 147e9e12e FUN_147e9e12e body=77 status=ok
// SIG undefined FUN_147e9e12e(void)

undefined8 FUN_147e9e12e(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 1);
    *param_2 = *param_3;
    if (param_2 != param_3) {
      FUN_1401fa0f0(param_2 + 2,param_3[2],param_3[3]);
    }
    param_3 = param_3 + 4;
    param_2 = param_2 + 4;
  }
  return 1;
}



// FUNCTION 147e9e1a8 FUN_147e9e1a8 body=59 status=ok
// SIG undefined FUN_147e9e1a8(void)

undefined8 FUN_147e9e1a8(longlong *param_1)

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



// FUNCTION 147e9e1ee FUN_147e9e1ee body=33 status=ok
// SIG undefined FUN_147e9e1ee(void)

void FUN_147e9e1ee(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_1401f9f5c(param_2 + 0x10);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 147e9e260 FUN_147e9e260 body=261 status=ok
// SIG undefined FUN_147e9e260(void)

void FUN_147e9e260(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
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
    FUN_1456cec3c();
  }
  uVar1 = FUN_147e9e366(local_20,&local_30);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e9e366 FUN_147e9e366 body=153 status=ok
// SIG undefined FUN_147e9e366(void)

undefined8 FUN_147e9e366(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if ((lVar1 != 0) && (lVar4 = *param_2, lVar4 != 0)) {
    lVar2 = FUN_1410df250();
    if ((lVar2 != 0) &&
       (((*(int *)(lVar2 + 0x38) <= *(int *)(lVar4 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30)) && (lVar4 = *param_2, lVar4 != 0)))) {
      lVar2 = FUN_1410df250();
      if (((lVar2 == 0) || (*(int *)(lVar4 + 0x38) < *(int *)(lVar2 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30)) {
        lVar4 = 0;
      }
      else {
        lVar4 = *param_2;
      }
      uVar3 = FUN_147e9eb7b(lVar1,lVar4);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 147e9e400 FUN_147e9e400 body=155 status=ok
// SIG undefined FUN_147e9e400(void)

void FUN_147e9e400(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x2b0))(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e9e4d8 FUN_147e9e4d8 body=202 status=ok
// SIG undefined FUN_147e9e4d8(void)

ulonglong FUN_147e9e4d8(longlong *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x84);
  if (param_2 != 0 && uVar1 != 1) {
    return (ulonglong)uVar1;
  }
  if ((int)uVar1 < 2) {
    *(undefined4 *)((longlong)param_1 + 0x84) = 2;
  }
  iVar2 = 4;
  if (param_1[5] != 0) {
    iVar3 = FUN_147e9e4d8(param_1[5],param_2);
    iVar2 = 4;
    if (iVar3 != 1) {
      iVar2 = iVar3;
    }
  }
  if (param_2 == 0) {
    (**(code **)(*param_1 + 0x2e8))(param_1,0);
  }
  else {
    uVar4 = 2;
    if (iVar2 - 2U < 2) goto LAB_147e9e561;
    if (iVar2 == 4) {
      if ((*(byte *)(param_1 + 0x10) & 0x20) == 0) {
        uVar4 = (**(code **)(*param_1 + 0x2e8))(param_1,1);
      }
      goto LAB_147e9e561;
    }
  }
  uVar4 = 4;
LAB_147e9e561:
  iVar2 = (int)uVar4;
  if ((*(int *)((longlong)param_1 + 0x84) < iVar2) &&
     (*(int *)((longlong)param_1 + 0x84) = iVar2, iVar2 == 4)) {
    FUN_147e9e5c2(param_1,3);
    uVar4 = 4;
  }
  return uVar4;
}



// FUNCTION 147e9e5a2 FUN_147e9e5a2 body=32 status=ok
// SIG undefined FUN_147e9e5a2(void)

undefined8 FUN_147e9e5a2(longlong param_1)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 0x38) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x110), lVar1 != 0)) {
    return *(undefined8 *)(lVar1 + 0x3c0);
  }
  return 0;
}



// FUNCTION 147e9e5c2 FUN_147e9e5c2 body=87 status=ok
// SIG undefined FUN_147e9e5c2(void)

void FUN_147e9e5c2(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if ((lVar1 != 0) && ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)) {
    FUN_147e9e61a(lVar1,param_1,param_2);
  }
  if ((*(int *)(param_1 + 0x70) != 0) &&
     (plVar2 = *(longlong **)(param_1 + 0x68), plVar2 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000147e9e601. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x60))(plVar2,param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 147e9e61a FUN_147e9e61a body=289 status=ok
// SIG undefined FUN_147e9e61a(void)

bool FUN_147e9e61a(longlong *param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar3 = *(int *)((longlong)param_1 + 0x144);
  *(int *)((longlong)param_1 + 0x144) = iVar3 + 1;
  local_50 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  uStack_44 = *(undefined4 *)(param_2 + 0x60);
  plVar1 = param_1 + 0x25;
  local_48 = param_3;
  local_40 = iVar3;
  iVar3 = FUN_147e9feea(plVar1);
  if (iVar3 == -1) {
    iVar2 = (int)param_1[0x26];
    *(uint *)(param_1 + 0x26) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0x134) < iVar2 + 1U) {
      FUN_147eb50ae(plVar1,iVar2);
    }
    plVar1 = (longlong *)(*plVar1 + (longlong)iVar2 * 0x18);
    *plVar1 = param_2;
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    *(int *)(plVar1 + 2) = local_40;
    plVar1[1] = CONCAT44(uStack_44,local_48);
    if ((int)param_1[0x26] == 1) {
      (**(code **)(*param_1 + 0x3b0))(param_1,1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return iVar3 == -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e9e73c FUN_147e9e73c body=66 status=ok
// SIG undefined FUN_147e9e73c(void)

void FUN_147e9e73c(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x5c);
  FUN_14589f218(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x5c) != 0)) {
    FUN_147eb4d2c(param_1 + 0x50);
    return;
  }
  return;
}



// FUNCTION 147e9e77e FUN_147e9e77e body=153 status=ok
// SIG undefined FUN_147e9e77e(void)

void FUN_147e9e77e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_2 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(param_1 + 0x38) = param_2;
    if (param_2 == 0) {
      return;
    }
  }
  else {
    FUN_1456cec3c(param_2);
    *(longlong *)(param_1 + 0x38) = param_2;
  }
  if ((*(longlong *)(param_2 + 0x110) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x110) + 0x3c0), lVar2 != 0)) {
    lVar1 = FUN_14104c5c4();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) {
      lVar2 = FUN_147e9e818(lVar2);
      if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar2);
      }
      *(longlong *)(param_1 + 0x48) = lVar2;
    }
  }
  return;
}



// FUNCTION 147e9e818 FUN_147e9e818 body=102 status=ok
// SIG undefined FUN_147e9e818(void)

void FUN_147e9e818(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1458bbebc();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  (**(code **)(*param_1 + 0x598))(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e9e880 FUN_147e9e880 body=56 status=ok
// SIG undefined FUN_147e9e880(void)

void FUN_147e9e880(longlong param_1,byte param_2)

{
  if ((1 < param_2) && (*(uint *)(param_1 + 0x88) != (uint)param_2)) {
    *(uint *)(param_1 + 0x88) = (uint)param_2;
  }
  FUN_147e9e73c(param_1);
  FUN_147e9e5c2(param_1,4);
  return;
}



// FUNCTION 147e9e8b8 FUN_147e9e8b8 body=112 status=ok
// SIG undefined FUN_147e9e8b8(void)

undefined8 FUN_147e9e8b8(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((*(int *)((longlong)param_1 + 0x84) == 0) || ((*(byte *)(param_1 + 0x10) & 0x20) == 0)) {
    cVar1 = (**(code **)(*param_1 + 0x2c0))(param_1);
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0x2d0))(param_1);
  }
  uVar2 = 1;
  if (cVar1 == '\0') {
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 0x80;
    if ((int)param_1[0x11] != 3) {
      *(undefined4 *)(param_1 + 0x11) = 3;
    }
    FUN_147e9e5c2(param_1,1);
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 147e9e944 FUN_147e9e944 body=72 status=ok
// SIG undefined FUN_147e9e944(void)

undefined8 FUN_147e9e944(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar1 = *(int *)(param_1 + 0x84) - 3;
  if (uVar1 < 2) {
    uVar2 = 0;
  }
  else {
    *(byte *)(param_1 + 0x80) = *(byte *)(param_1 + 0x80) | 0x20;
    if (*(longlong **)(param_1 + 0x28) == (longlong *)0x0) {
      uVar2 = CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
    }
    else {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2c8))();
      uVar3 = CONCAT71((int7)((ulonglong)uVar2 >> 8),*(undefined1 *)(param_1 + 0x80)) &
              0xffffffffffffff20;
      uVar2 = CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 >> 5);
    }
  }
  return uVar2;
}



// FUNCTION 147e9e98c FUN_147e9e98c body=69 status=ok
// SIG undefined FUN_147e9e98c(void)

bool FUN_147e9e98c(longlong param_1)

{
  bool bVar1;
  
  if ((*(uint *)(param_1 + 0x80) & 0x20) == 0) {
    bVar1 = false;
  }
  else if (*(longlong **)(param_1 + 0x28) == (longlong *)0x0) {
    *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) & 0xffffffdf;
    bVar1 = true;
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2d0))();
    bVar1 = (*(byte *)(param_1 + 0x80) & 0x20) == 0;
  }
  return bVar1;
}



// FUNCTION 147e9e9e0 FUN_147e9e9e0 body=109 status=ok
// SIG undefined FUN_147e9e9e0(void)

undefined8 FUN_147e9e9e0(undefined8 param_1,longlong param_2,undefined4 param_3,longlong param_4)

{
  undefined8 uVar1;
  
  if ((*(int *)(param_2 + 0x84) != 0) && (*(int *)(param_2 + 0x88) < 2)) {
    return 0;
  }
  *(undefined4 *)(param_2 + 0x60) = param_3;
  FUN_147e9e77e(param_2,param_1);
  if ((param_4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_4);
  }
  *(longlong *)(param_2 + 0x40) = param_4;
  uVar1 = FUN_147e9e61a(param_1,param_2,5);
  return uVar1;
}



// FUNCTION 147e9ea4e FUN_147e9ea4e body=287 status=ok
// SIG undefined FUN_147e9ea4e(void)

void FUN_147e9ea4e(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [32];
  undefined8 **local_78;
  undefined8 *local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  FUN_1446efa72(&local_68,0,3,0x10);
  puVar3 = local_68;
  local_60 = 3;
  *local_68 = &PTR_LAB_14abe5500;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14abe5490;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_1);
  puVar3[4] = &LAB_147e9eb6e;
  local_78 = &local_68;
  FUN_147ecd61c(&local_58,*(undefined8 *)(param_1 + 0x48),param_2,param_3);
  iVar1 = *(int *)(param_1 + 0x58);
  *(uint *)(param_1 + 0x58) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x5c) < iVar1 + 1U) {
    FUN_147eb4ff8((longlong *)(param_1 + 0x50),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x50);
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 0x10) = local_58;
  *(undefined8 *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = uStack_50;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1449db362(&local_68);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e9eb7b FUN_147e9eb7b body=175 status=ok
// SIG undefined FUN_147e9eb7b(void)

undefined8 FUN_147e9eb7b(undefined8 param_1,undefined8 param_2)

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



// FUNCTION 147e9ec2c FUN_147e9ec2c body=75 status=ok
// SIG undefined FUN_147e9ec2c(void)

undefined8 FUN_147e9ec2c(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18);
  FUN_1400021e4();
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e9ec78 FUN_147e9ec78 body=194 status=ok
// SIG undefined FUN_147e9ec78(void)

void FUN_147e9ec78(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  lVar1 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  iVar2 = 0;
  if (local_28 != 0) {
    iVar2 = FUN_147e9e4d8(local_28,1);
    if (iVar2 == 0) {
      FUN_147e9fd0e(param_1,lVar1);
      iVar2 = 0;
    }
  }
  *param_3 = (char)iVar2;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e9ed3c FUN_147e9ed3c body=166 status=ok
// SIG undefined FUN_147e9ed3c(void)

void FUN_147e9ed3c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
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
  if (local_20 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_147e9e4d8(local_20,0);
  }
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e9edea FUN_147e9edea body=303 status=ok
// SIG undefined FUN_147e9edea(void)

void FUN_147e9edea(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  undefined8 local_28;
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
  local_28 = 0;
  FUN_1446f4b16();
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147e9ef1a(local_20,local_28,local_29);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e9ef1a FUN_147e9ef1a body=81 status=ok
// SIG undefined FUN_147e9ef1a(void)

undefined8 FUN_147e9ef1a(longlong param_1,longlong param_2,undefined1 param_3)

{
  longlong lVar1;
  
  if (((param_2 != 0 && param_1 != 0) && (*(longlong *)(param_1 + 0x3c0) != 0)) &&
     (lVar1 = FUN_147e9ff7e(), lVar1 != 0)) {
    FUN_147e9e9e0(lVar1,param_2,param_3,0);
    return 1;
  }
  return 0;
}



// FUNCTION 147e9ef72 FUN_147e9ef72 body=349 status=ok
// SIG undefined FUN_147e9ef72(void)

void FUN_147e9ef72(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_29;
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
  local_29 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
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
  if (local_28 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_147e9e9e0(param_1,local_28,local_29,local_38);
  }
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e9f0d4 FUN_147e9f0d4 body=167 status=ok
// SIG undefined FUN_147e9f0d4(void)

void FUN_147e9f0d4(longlong *param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)*param_1;
  if (plVar4 != (longlong *)0x0) {
    if (((*(byte *)(plVar4 + 0x10) & 0x20) == 0) && (*(int *)((longlong)plVar4 + 0x84) != 0)) {
      (**(code **)(*plVar4 + 0x2c8))(plVar4,param_2);
      plVar4 = (longlong *)*param_1;
    }
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(param_2);
    }
    bVar1 = DAT_14c950c29;
    plVar4[5] = param_2;
    lVar3 = *param_1;
    if ((bVar1 & 1) != 0) {
      if (lVar3 == 0) {
        lVar3 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar3 = *param_1;
      }
    }
    *(longlong *)(param_2 + 0x30) = lVar3;
  }
  if (DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  *param_1 = param_2;
  iVar2 = 0;
  lVar3 = param_2;
  do {
    *(int *)(param_2 + 0x8c) = iVar2;
    lVar3 = *(longlong *)(lVar3 + 0x30);
    iVar2 = iVar2 + 1;
  } while (lVar3 != 0);
  return;
}



// FUNCTION 147e9f17c FUN_147e9f17c body=216 status=ok
// SIG undefined FUN_147e9f17c(void)

void FUN_147e9f17c(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar5 = param_1;
  do {
    lVar1 = *plVar5;
    if (lVar1 == 0) break;
    plVar5 = (longlong *)(lVar1 + 0x30);
  } while (lVar1 != param_2);
  if (lVar1 == param_2) {
    plVar5 = (longlong *)*param_1;
    plVar2 = *(longlong **)(param_2 + 0x30);
    if (plVar5 != (longlong *)0x0 && plVar5 != plVar2) {
      do {
        plVar3 = (longlong *)plVar5[6];
        if ((*(int *)((longlong)plVar5 + 0x84) == 1) && ((int)plVar5[0x11] < 2)) {
          FUN_147e9e4d8(plVar5,0);
        }
        if ((*(uint *)(plVar5 + 0x10) & 0x88) != 0x80) {
          (**(code **)(*plVar5 + 0x2d8))(plVar5);
        }
        plVar4 = (longlong *)plVar5[6];
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x2e0))(plVar4,plVar5,(int)plVar5[0x11]);
        }
      } while ((plVar3 != plVar2) && (plVar5 = plVar3, plVar3 != (longlong *)0x0));
    }
    if ((plVar2 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(plVar2);
    }
    *param_1 = (longlong)plVar2;
  }
  return;
}



// FUNCTION 147e9f254 FUN_147e9f254 body=95 status=ok
// SIG undefined FUN_147e9f254(void)

void FUN_147e9f254(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x110);
  if (((lVar1 != 0) && ((*(byte *)(lVar1 + 0x65) & 2) == 0)) &&
     ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)) {
    lVar1 = 0;
    do {
      for (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x118) + lVar1 * 8); lVar2 != 0;
          lVar2 = *(longlong *)(lVar2 + 0x30)) {
        FUN_147e9e4d8(lVar2,0);
      }
      lVar1 = lVar1 + 1;
    } while (lVar1 != 5);
  }
  FUN_1448b6576(param_1);
  return;
}



// FUNCTION 147e9f2b4 FUN_147e9f2b4 body=2058 status=ok
// SIG undefined FUN_147e9f2b4(void)

void FUN_147e9f2b4(longlong *param_1,undefined4 param_2)

{
  ulonglong uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  int iVar25;
  longlong lVar26;
  longlong lVar27;
  bool bVar28;
  float fVar29;
  undefined1 auStack_398 [32];
  longlong local_378;
  longlong local_370;
  undefined4 local_368 [188];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_398;
  FUN_144a7e84a();
  if (param_1[0x22] == 0) {
    FUN_147e9fac0(param_1);
  }
  plVar6 = param_1 + 0x25;
  iVar22 = (int)param_1[0x26];
  if (1 < (longlong)iVar22) {
    lVar26 = *plVar6;
    memset(local_368,0,0x2f0);
    local_370 = lVar26 + (longlong)iVar22 * 0x18 + -0x18;
    local_378 = lVar26;
    fVar29 = logf((float)iVar22);
    local_368[0] = (int)(longlong)(fVar29 + fVar29);
    plVar12 = &local_378;
    do {
      puVar15 = (undefined8 *)*plVar12;
      puVar23 = (undefined8 *)plVar12[1];
      iVar22 = (int)plVar12[2];
      iVar25 = (int)((ulonglong)((longlong)puVar23 - (longlong)puVar15) >> 3) * -0x55555555;
      uVar18 = (ulonglong)(iVar25 + 1);
      if (iVar22 != 0) {
LAB_147e9f38b:
        if (8 < (int)(uint)uVar18) {
          uVar18 = (ulonglong)((uint)uVar18 >> 1);
          uVar5 = puVar15[uVar18 * 3 + 2];
          uVar8 = puVar15[uVar18 * 3];
          uVar9 = (puVar15 + uVar18 * 3)[1];
          puVar15[uVar18 * 3 + 2] = puVar15[2];
          uVar10 = puVar15[1];
          puVar15[uVar18 * 3] = *puVar15;
          (puVar15 + uVar18 * 3)[1] = uVar10;
          puVar15[2] = uVar5;
          *puVar15 = uVar8;
          puVar15[1] = uVar9;
          puVar14 = puVar15;
          puVar16 = puVar23 + 3;
          do {
            puVar14 = puVar14 + 3;
            if (puVar14 <= puVar23) {
              while (*(int *)((longlong)puVar14 + 0xc) <= *(int *)((longlong)puVar15 + 0xc)) {
                if (((*(int *)((longlong)puVar15 + 0xc) == *(int *)((longlong)puVar14 + 0xc)) &&
                    ((*(int *)(puVar15 + 1) < *(int *)(puVar14 + 1) ||
                     ((*(int *)(puVar15 + 1) == *(int *)(puVar14 + 1) &&
                      (*(uint *)(puVar15 + 2) < *(uint *)(puVar14 + 2))))))) ||
                   (puVar14 = puVar14 + 3, puVar23 < puVar14)) break;
              }
            }
            puVar17 = puVar16 + -3;
            if (puVar15 < puVar17) {
              puVar11 = puVar16;
              do {
                puVar24 = puVar17;
                puVar16 = puVar11;
                puVar17 = puVar24;
                if (*(int *)((longlong)puVar16 - 0xc) < *(int *)((longlong)puVar15 + 0xc))
                goto LAB_147e9f479;
                if (*(int *)((longlong)puVar16 - 0xc) == *(int *)((longlong)puVar15 + 0xc)) {
                  if (*(int *)(puVar16 + -2) < *(int *)(puVar15 + 1)) goto LAB_147e9f479;
                  if ((*(int *)(puVar16 + -2) == *(int *)(puVar15 + 1)) &&
                     (*(uint *)(puVar16 + -1) < *(uint *)(puVar15 + 2))) {
                    puVar17 = puVar16 + -3;
                    goto LAB_147e9f479;
                  }
                }
                puVar11 = puVar16 + -3;
                puVar17 = puVar24 + -3;
              } while (puVar15 < puVar16 + -6);
              puVar17 = puVar16 + -6;
              puVar16 = puVar24;
            }
LAB_147e9f479:
            if (puVar17 < puVar14) goto LAB_147e9f4ca;
            uVar5 = puVar14[2];
            uVar8 = *puVar14;
            uVar9 = puVar14[1];
            puVar14[2] = puVar17[2];
            uVar10 = puVar17[1];
            *puVar14 = *puVar17;
            puVar14[1] = uVar10;
            puVar17[2] = uVar5;
            *puVar17 = uVar8;
            puVar17[1] = uVar9;
            puVar16 = puVar17;
          } while( true );
        }
        for (; puVar14 = puVar15, puVar16 = puVar15, puVar15 < puVar23; puVar23 = puVar23 + -3) {
          while (puVar17 = puVar16 + 3, puVar17 <= puVar23) {
            piVar2 = (int *)((longlong)puVar16 + 0x24);
            puVar16 = puVar17;
            if ((*(int *)((longlong)puVar14 + 0xc) < *piVar2) ||
               ((*(int *)((longlong)puVar14 + 0xc) == *piVar2 &&
                ((*(int *)(puVar14 + 1) < *(int *)(puVar17 + 1) ||
                 ((*(int *)(puVar14 + 1) == *(int *)(puVar17 + 1) &&
                  (*(uint *)(puVar14 + 2) < *(uint *)(puVar17 + 2))))))))) {
              puVar14 = puVar17;
            }
          }
          local_68 = puVar14[2];
          local_78 = *puVar14;
          uStack_70 = puVar14[1];
          uVar8 = local_78;
          uVar9 = uStack_70;
          puVar14[2] = puVar23[2];
          uVar5 = puVar23[1];
          *puVar14 = *puVar23;
          puVar14[1] = uVar5;
          puVar23[2] = local_68;
          local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
          uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
          *(undefined4 *)puVar23 = (undefined4)local_78;
          *(undefined4 *)((longlong)puVar23 + 4) = local_78._4_4_;
          *(undefined4 *)(puVar23 + 1) = (undefined4)uStack_70;
          *(undefined4 *)((longlong)puVar23 + 0xc) = uStack_70._4_4_;
          local_78 = uVar8;
          uStack_70 = uVar9;
        }
        goto LAB_147e9f928;
      }
LAB_147e9f58e:
      iVar22 = (int)uVar18;
      if (iVar22 != 0) {
        iVar25 = (iVar25 - (iVar25 + -1 >> 0x1f)) + -1 >> 1;
        iVar20 = iVar25;
joined_r0x000147e9f5b4:
        do {
          iVar21 = iVar25 * 2 + 1;
          if (iVar21 < iVar22) {
            iVar19 = iVar25 * 2 + 2;
            if (iVar19 < iVar22) {
              lVar26 = (longlong)iVar19;
              lVar27 = (longlong)iVar21;
              iVar3 = *(int *)((longlong)puVar15 + lVar27 * 0x18 + 0xc);
              iVar4 = *(int *)((longlong)puVar15 + lVar26 * 0x18 + 0xc);
              if ((iVar4 < iVar3) ||
                 ((iVar4 == iVar3 &&
                  ((*(int *)(puVar15 + lVar26 * 3 + 1) < *(int *)(puVar15 + lVar27 * 3 + 1) ||
                   ((*(int *)(puVar15 + lVar26 * 3 + 1) == *(int *)(puVar15 + lVar27 * 3 + 1) &&
                    (*(uint *)(puVar15 + lVar26 * 3 + 2) < *(uint *)(puVar15 + lVar27 * 3 + 2)))))))
                 )) goto LAB_147e9f5f6;
            }
            else {
LAB_147e9f5f6:
              lVar26 = (longlong)iVar21;
              iVar19 = iVar21;
            }
            puVar23 = puVar15 + (longlong)iVar25 * 3;
            puVar14 = puVar15 + lVar26 * 3;
            if ((*(int *)((longlong)puVar23 + 0xc) < *(int *)((longlong)puVar14 + 0xc)) ||
               ((*(int *)((longlong)puVar23 + 0xc) == *(int *)((longlong)puVar14 + 0xc) &&
                ((*(int *)(puVar23 + 1) < *(int *)(puVar14 + 1) ||
                 ((*(int *)(puVar23 + 1) == *(int *)(puVar14 + 1) &&
                  (*(uint *)(puVar23 + 2) < *(uint *)(puVar14 + 2))))))))) {
              local_68 = puVar23[2];
              local_78 = *puVar23;
              uStack_70 = puVar23[1];
              uVar8 = local_78;
              uVar9 = uStack_70;
              puVar23[2] = puVar14[2];
              uVar5 = puVar14[1];
              *puVar23 = *puVar14;
              puVar23[1] = uVar5;
              puVar14[2] = local_68;
              local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
              uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
              *(undefined4 *)puVar14 = (undefined4)local_78;
              *(undefined4 *)((longlong)puVar14 + 4) = local_78._4_4_;
              *(undefined4 *)(puVar14 + 1) = (undefined4)uStack_70;
              *(undefined4 *)((longlong)puVar14 + 0xc) = uStack_70._4_4_;
              iVar25 = iVar19;
              local_78 = uVar8;
              uStack_70 = uVar9;
              goto joined_r0x000147e9f5b4;
            }
          }
          bVar28 = iVar20 != 0;
          iVar25 = iVar20 + -1;
          iVar20 = iVar25;
        } while (bVar28);
        if (1 < iVar22) {
          uVar18 = uVar18 - 1;
          local_68 = puVar15[2];
          local_78 = *puVar15;
          uStack_70 = puVar15[1];
          uVar8 = local_78;
          uVar9 = uStack_70;
          puVar15[2] = puVar15[uVar18 * 3 + 2];
          uVar5 = (puVar15 + uVar18 * 3)[1];
          *puVar15 = puVar15[uVar18 * 3];
          puVar15[1] = uVar5;
          puVar15[uVar18 * 3 + 2] = local_68;
          local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
          uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
          puVar23 = puVar15 + uVar18 * 3;
          *(undefined4 *)puVar23 = (undefined4)local_78;
          *(undefined4 *)((longlong)puVar23 + 4) = local_78._4_4_;
          *(undefined4 *)(puVar23 + 1) = (undefined4)uStack_70;
          *(undefined4 *)((longlong)puVar23 + 0xc) = uStack_70._4_4_;
          local_78 = uVar8;
          uStack_70 = uVar9;
          if (iVar22 != 2) {
            do {
              iVar25 = 0;
              iVar22 = 1;
              iVar20 = 0;
              do {
                iVar21 = iVar25 + 2;
                lVar26 = (longlong)iVar21;
                if (lVar26 < (longlong)uVar18) {
                  lVar27 = (longlong)iVar22;
                  iVar25 = *(int *)((longlong)puVar15 + lVar27 * 0x18 + 0xc);
                  iVar19 = *(int *)((longlong)puVar15 + lVar26 * 0x18 + 0xc);
                  if ((iVar19 < iVar25) ||
                     ((iVar19 == iVar25 &&
                      ((*(int *)(puVar15 + lVar26 * 3 + 1) < *(int *)(puVar15 + lVar27 * 3 + 1) ||
                       ((*(int *)(puVar15 + lVar26 * 3 + 1) == *(int *)(puVar15 + lVar27 * 3 + 1) &&
                        (*(uint *)(puVar15 + lVar26 * 3 + 2) < *(uint *)(puVar15 + lVar27 * 3 + 2)))
                       )))))) goto LAB_147e9f766;
                }
                else {
LAB_147e9f766:
                  lVar26 = (longlong)iVar22;
                  iVar21 = iVar22;
                }
                puVar23 = puVar15 + (longlong)iVar20 * 3;
                puVar14 = puVar15 + lVar26 * 3;
                if ((*(int *)((longlong)puVar14 + 0xc) <= *(int *)((longlong)puVar23 + 0xc)) &&
                   ((*(int *)((longlong)puVar23 + 0xc) != *(int *)((longlong)puVar14 + 0xc) ||
                    ((*(int *)(puVar14 + 1) <= *(int *)(puVar23 + 1) &&
                     ((*(int *)(puVar23 + 1) != *(int *)(puVar14 + 1) ||
                      (*(uint *)(puVar14 + 2) <= *(uint *)(puVar23 + 2))))))))) break;
                uVar5 = puVar23[2];
                uVar8 = *puVar23;
                uVar9 = puVar23[1];
                puVar23[2] = puVar14[2];
                uVar10 = puVar14[1];
                *puVar23 = *puVar14;
                puVar23[1] = uVar10;
                puVar14[2] = uVar5;
                *puVar14 = uVar8;
                puVar14[1] = uVar9;
                iVar25 = iVar21 * 2;
                iVar22 = iVar21 * 2 + 1;
                iVar20 = iVar21;
              } while ((longlong)iVar22 < (longlong)uVar18);
              uVar1 = uVar18 - 1;
              local_68 = puVar15[2];
              local_78 = *puVar15;
              uStack_70 = puVar15[1];
              uVar8 = local_78;
              uVar9 = uStack_70;
              puVar15[2] = puVar15[uVar1 * 3 + 2];
              uVar5 = (puVar15 + uVar1 * 3)[1];
              *puVar15 = puVar15[uVar1 * 3];
              puVar15[1] = uVar5;
              puVar15[uVar1 * 3 + 2] = local_68;
              local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
              uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
              puVar23 = puVar15 + uVar1 * 3;
              *(undefined4 *)puVar23 = (undefined4)local_78;
              *(undefined4 *)((longlong)puVar23 + 4) = local_78._4_4_;
              *(undefined4 *)(puVar23 + 1) = (undefined4)uStack_70;
              *(undefined4 *)((longlong)puVar23 + 0xc) = uStack_70._4_4_;
              bVar28 = 2 < uVar18;
              uVar18 = uVar1;
              local_78 = uVar8;
              uStack_70 = uVar9;
            } while (bVar28);
          }
        }
      }
LAB_147e9f928:
      plVar12 = plVar12 + -3;
    } while (&local_378 <= plVar12);
    iVar22 = (int)param_1[0x26];
  }
  if (0 < iVar22) {
    lVar27 = 0xc;
    lVar26 = 0;
    do {
      lVar13 = *plVar6;
      lVar7 = *(longlong *)(lVar13 + -0xc + lVar27);
      if (lVar7 == 0) goto switchD_147e9fa34_default;
      switch(*(undefined4 *)(lVar13 + -4 + lVar27)) {
      case 1:
      case 3:
      case 4:
        lVar13 = (longlong)*(int *)(lVar13 + lVar27) * 8 + param_1[0x23];
        goto LAB_147e9fa45;
      case 2:
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar7);
        }
        iVar22 = *(int *)(lVar13 + lVar27);
        FUN_147e9e4d8(lVar7,0);
        lVar13 = (longlong)iVar22 * 8 + param_1[0x23];
LAB_147e9fa45:
        FUN_147e9f17c(lVar13);
        break;
      case 5:
        FUN_147e9f0d4((longlong)*(int *)(lVar13 + lVar27) * 8 + param_1[0x23],lVar7);
      }
switchD_147e9fa34_default:
      lVar26 = lVar26 + 1;
      lVar27 = lVar27 + 0x18;
    } while (lVar26 < (int)param_1[0x26]);
    *(undefined4 *)(param_1 + 0x26) = 0;
    if (*(int *)((longlong)param_1 + 0x134) < 0) {
      FUN_147eb507e(plVar6);
    }
    FUN_147e9fb5a(param_1);
  }
  plVar6 = (longlong *)param_1[0x27];
  if ((plVar6 != (longlong *)0x0) &&
     ((plVar12 = (longlong *)plVar6[5], (longlong *)plVar6[5] != (longlong *)0x0 ||
      (plVar12 = plVar6, (*(uint *)(plVar6 + 0x10) & 0x30) == 0x10)))) {
    (**(code **)(*plVar12 + 0x2b8))(plVar12,param_2);
  }
  if (((int)param_1[0x26] == 0) &&
     ((param_1[0x27] == 0 || ((*(byte *)(param_1[0x27] + 0x80) & 0x10) == 0)))) {
    (**(code **)(*param_1 + 0x3b0))(param_1,0);
  }
  if ((local_60 ^ (ulonglong)auStack_398) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_147e9f4ca:
  local_68 = puVar15[2];
  local_78 = *puVar15;
  uStack_70 = puVar15[1];
  uVar8 = local_78;
  uVar9 = uStack_70;
  puVar15[2] = puVar17[2];
  uVar5 = puVar17[1];
  *puVar15 = *puVar17;
  puVar15[1] = uVar5;
  puVar17[2] = local_68;
  local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  *(undefined4 *)puVar17 = (undefined4)local_78;
  *(undefined4 *)((longlong)puVar17 + 4) = local_78._4_4_;
  *(undefined4 *)(puVar17 + 1) = (undefined4)uStack_70;
  *(undefined4 *)((longlong)puVar17 + 0xc) = uStack_70._4_4_;
  iVar22 = iVar22 + -1;
  puVar16 = puVar16 + -6;
  local_78 = uVar8;
  uStack_70 = uVar9;
  if ((longlong)puVar16 - (longlong)puVar15 < (longlong)puVar23 - (longlong)puVar14) {
    if (puVar14 < puVar23) {
      *plVar12 = (longlong)puVar14;
      plVar12[1] = (longlong)puVar23;
      *(int *)(plVar12 + 2) = iVar22;
      plVar12 = plVar12 + 3;
    }
    if (puVar17 <= puVar15 + 3) goto LAB_147e9f928;
  }
  else {
    if (puVar15 + 3 < puVar17) {
      *plVar12 = (longlong)puVar15;
      plVar12[1] = (longlong)puVar16;
      *(int *)(plVar12 + 2) = iVar22;
      plVar12 = plVar12 + 3;
    }
    puVar16 = puVar23;
    puVar15 = puVar14;
    if (puVar23 <= puVar14) goto LAB_147e9f928;
  }
  iVar25 = (int)((ulonglong)((longlong)puVar16 - (longlong)puVar15) >> 3) * -0x55555555;
  uVar18 = (ulonglong)(iVar25 + 1);
  puVar23 = puVar16;
  if (iVar22 == 0) goto LAB_147e9f58e;
  goto LAB_147e9f38b;
}



// FUNCTION 147e9fac0 FUN_147e9fac0 body=153 status=ok
// SIG undefined FUN_147e9fac0(void)

void FUN_147e9fac0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x110) != 0) {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0xa8);
  if (lVar2 == 0) {
    return;
  }
  lVar1 = FUN_144a7cbb2();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
      lVar1 + 0x30)) {
    *(undefined8 *)(param_1 + 0x110) = 0;
    lVar1 = FUN_14490fee6();
    if (*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) {
      return;
    }
    if (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        != lVar1 + 0x30) {
      return;
    }
    lVar2 = *(longlong *)(lVar2 + 0x3d0);
    if (lVar2 == 0) goto LAB_147e9fb46;
  }
  if (DAT_14c950c29 != '\0') {
    FUN_1456cec3c(lVar2);
  }
LAB_147e9fb46:
  *(longlong *)(param_1 + 0x110) = lVar2;
  return;
}



// FUNCTION 147e9fb5a FUN_147e9fb5a body=234 status=ok
// SIG undefined FUN_147e9fb5a(void)

void FUN_147e9fb5a(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  
  lVar4 = 0x20;
  do {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x118) + lVar4);
    if (lVar4 == 0) break;
    lVar4 = lVar4 + -8;
  } while (plVar1 == (longlong *)0x0);
  plVar2 = *(longlong **)(param_1 + 0x138);
  if (plVar2 == plVar1) {
    if (plVar1 == (longlong *)0x0) {
LAB_147e9fc26:
      FUN_147e9fc44(param_1);
      return;
    }
    if (1 < (int)plVar2[0x11]) {
      FUN_147e9e8b8();
      return;
    }
  }
  else {
    if ((((plVar2 != (longlong *)0x0) && ((int)plVar2[0x11] == 1)) &&
        ((*(byte *)(plVar2 + 0x10) & 0x20) == 0)) && (*(int *)((longlong)plVar2 + 0x84) == 1)) {
      (**(code **)(*plVar2 + 0x2c8))(plVar2,plVar1);
    }
    if ((plVar1 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
      *(longlong **)(param_1 + 0x138) = plVar1;
      if (plVar1 == (longlong *)0x0) goto LAB_147e9fc26;
    }
    else {
      FUN_1456cec3c(plVar1);
      *(longlong **)(param_1 + 0x138) = plVar1;
    }
    cVar3 = FUN_147e9e8b8(plVar1);
    if (cVar3 == '\0') {
      *(undefined8 *)(param_1 + 0x138) = 0;
    }
    else if ((*(longlong *)(param_1 + 0x138) == 0) ||
            (*(int *)(*(longlong *)(param_1 + 0x138) + 0x60) != 1)) goto LAB_147e9fc26;
  }
  return;
}



// FUNCTION 147e9fc44 FUN_147e9fc44 body=202 status=ok
// SIG undefined FUN_147e9fc44(void)

void FUN_147e9fc44(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  if ((*(longlong *)(param_1 + 0x110) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x110) + 0x3c0) != 0)) {
    plVar2 = (longlong *)FUN_147e9e818();
    if (plVar2 != (longlong *)0x0) {
      if ((*(longlong *)(param_1 + 0x138) == 0) ||
         (*(int *)(*(longlong *)(param_1 + 0x138) + 0x60) < 2)) {
        if ((*(uint *)(param_1 + 0x140) & 1) != 0) {
          *(uint *)(param_1 + 0x140) = *(uint *)(param_1 + 0x140) & 0xfffffffe;
          (**(code **)(plVar2[0x22] + 0x18))(plVar2 + 0x22,2);
          cVar1 = (**(code **)(plVar2[0x22] + 0x28))(plVar2 + 0x22);
          if (cVar1 != '\0') {
            FUN_147ecdd54(plVar2);
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x000147e9fd07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar2 + 0x488))(plVar2);
          return;
        }
      }
      else {
        (**(code **)(plVar2[0x22] + 0x10))(plVar2 + 0x22,2);
        *(byte *)(param_1 + 0x140) = *(byte *)(param_1 + 0x140) | 1;
      }
    }
  }
  return;
}



// FUNCTION 147e9fd0e FUN_147e9fd0e body=174 status=ok
// SIG undefined FUN_147e9fd0e(void)

void FUN_147e9fd0e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  uVar3 = *(uint *)(param_1 + 0x130);
  uVar4 = (ulonglong)(int)uVar3;
  if (0 < (longlong)uVar4) {
    iVar6 = -uVar3;
    lVar7 = uVar4 * 0x18;
    do {
      lVar7 = lVar7 + -0x18;
      lVar1 = *(longlong *)(param_1 + 0x128);
      if (*(longlong *)(lVar1 + lVar7) == param_2) {
        if (uVar4 != uVar3) {
          iVar5 = uVar3 + iVar6;
          if (0 < iVar5) {
            iVar5 = 1;
          }
          memmove((void *)(lVar1 + lVar7),(void *)(lVar1 + (longlong)(int)(uVar3 - iVar5) * 0x18),
                  (longlong)iVar5 * 0x18);
          uVar3 = *(uint *)(param_1 + 0x130);
        }
        uVar3 = uVar3 - 1;
        *(uint *)(param_1 + 0x130) = uVar3;
      }
      iVar6 = iVar6 + 1;
      bVar2 = 1 < uVar4;
      uVar4 = uVar4 - 1;
    } while (bVar2);
  }
  return;
}



// FUNCTION 147e9fdbc FUN_147e9fdbc body=301 status=ok
// SIG undefined FUN_147e9fdbc(void)

int FUN_147e9fdbc(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  if (param_3 == 5) {
    iVar6 = 0;
    iVar7 = 0;
    do {
      iVar4 = FUN_147e9fdbc(param_1,param_2,iVar7);
      iVar6 = iVar6 + iVar4;
      iVar7 = iVar7 + 1;
    } while (iVar7 != 5);
  }
  else {
    iVar6 = 0;
    for (lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x118) + (longlong)param_3 * 8); lVar8 != 0;
        lVar8 = *(longlong *)(lVar8 + 0x30)) {
      if (*(longlong *)(lVar8 + 0x40) == param_2) {
        FUN_147e9e61a(param_1,lVar8,2);
        iVar6 = iVar6 + 1;
      }
    }
    uVar5 = *(uint *)(param_1 + 0x130);
    uVar9 = (ulonglong)(int)uVar5;
    if (0 < (longlong)uVar9) {
      iVar7 = -uVar5;
      lVar8 = uVar9 * 0x18;
      do {
        lVar8 = lVar8 + -0x18;
        lVar1 = *(longlong *)(param_1 + 0x128);
        if ((*(int *)(lVar1 + 0xc + lVar8) == param_3) && (*(int *)(lVar1 + 8 + lVar8) == 5)) {
          lVar2 = *(longlong *)(lVar1 + lVar8);
          if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x40) == param_2)) {
            if (uVar9 != uVar5) {
              iVar4 = uVar5 + iVar7;
              if (0 < iVar4) {
                iVar4 = 1;
              }
              memmove((longlong *)(lVar1 + lVar8),
                      (void *)(lVar1 + (longlong)(int)(uVar5 - iVar4) * 0x18),(longlong)iVar4 * 0x18
                     );
              uVar5 = *(uint *)(param_1 + 0x130);
            }
            uVar5 = uVar5 - 1;
            *(uint *)(param_1 + 0x130) = uVar5;
            iVar6 = iVar6 + 1;
          }
        }
        iVar7 = iVar7 + 1;
        bVar3 = 1 < uVar9;
        uVar9 = uVar9 - 1;
      } while (bVar3);
    }
  }
  return iVar6;
}



// FUNCTION 147e9feea FUN_147e9feea body=148 status=ok
// SIG undefined FUN_147e9feea(void)

int FUN_147e9feea(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong uVar5;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_1;
    uVar5 = 0;
    bVar4 = DAT_14c950c29;
    do {
      lVar2 = *param_2;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (((*(longlong *)(lVar1 + uVar5) == lVar2) &&
          (*(int *)(lVar1 + 8 + uVar5) == (int)param_2[1])) &&
         (*(int *)(lVar1 + 0xc + uVar5) == *(int *)((longlong)param_2 + 0xc))) {
        return (int)(uVar5 >> 3) * -0x55555555;
      }
      uVar5 = uVar5 + 0x18;
    } while ((longlong)(int)lVar3 * 0x18 != uVar5);
  }
  return -1;
}



// FUNCTION 147e9ff7e FUN_147e9ff7e body=102 status=ok
// SIG undefined FUN_147e9ff7e(void)

void FUN_147e9ff7e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14587dd72();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  (**(code **)(*param_1 + 0x598))(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e9ffea FUN_147e9ffea body=120 status=ok
// SIG undefined FUN_147e9ffea(void)

void FUN_147e9ffea(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1[7] == 0) {
    local_28 = 0;
  }
  else {
    local_28 = *(undefined8 *)(param_1[7] + 0x110);
  }
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cb1e8d8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ea0064 FUN_147ea0064 body=152 status=ok
// SIG undefined FUN_147ea0064(void)

undefined8 FUN_147ea0064(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xdf;
  iVar1 = *(int *)((longlong)param_1 + 0x84);
  *(undefined1 **)((longlong)param_1 + 0x84) = &DAT_100000001;
  if (iVar1 == 0) {
    if (param_1[7] == 0) {
      local_20 = 0;
    }
    else {
      local_20 = *(undefined8 *)(param_1[7] + 0x110);
    }
    uVar2 = FUN_14477b072(param_1,DAT_14cb1e8c8);
    (**(code **)(*param_1 + 0x248))(param_1,uVar2,&local_20);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ea00fe FUN_147ea00fe body=169 status=ok
// SIG undefined FUN_147ea00fe(void)

undefined8 FUN_147ea00fe(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)((longlong)param_1 + 0x84) - 3U < 2) {
LAB_147ea0121:
    uVar1 = 0;
  }
  else {
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 0x20;
    if ((longlong *)param_1[5] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[5] + 0x2c8))();
      if ((*(byte *)(param_1 + 0x10) & 0x20) == 0) goto LAB_147ea0121;
    }
    if (param_1[7] == 0) {
      local_20 = 0;
    }
    else {
      local_20 = *(undefined8 *)(param_1[7] + 0x110);
    }
    uVar1 = FUN_14477b072(param_1,DAT_14cb1e8a8);
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
    uVar1 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ea01a8 FUN_147ea01a8 body=172 status=ok
// SIG undefined FUN_147ea01a8(void)

undefined8 FUN_147ea01a8(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(uint *)(param_1 + 0x10) & 0x20) == 0) {
LAB_147ea01c7:
    uVar1 = 0;
  }
  else {
    if ((longlong *)param_1[5] == (longlong *)0x0) {
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xffffffdf;
    }
    else {
      (**(code **)(*(longlong *)param_1[5] + 0x2d0))();
      if ((*(byte *)(param_1 + 0x10) & 0x20) != 0) goto LAB_147ea01c7;
    }
    if (param_1[7] == 0) {
      local_20 = 0;
    }
    else {
      local_20 = *(undefined8 *)(param_1[7] + 0x110);
    }
    uVar1 = FUN_14477b072(param_1,DAT_14cb1e8b8);
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
    uVar1 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 147ea0256 FUN_147ea0256 body=118 status=ok
// SIG undefined FUN_147ea0256(void)

void FUN_147ea0256(longlong *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1[7] == 0) {
    local_28 = 0;
  }
  else {
    local_28 = *(undefined8 *)(param_1[7] + 0x110);
  }
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cb1e898);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ea0328 FUN_147ea0328 body=524 status=ok
// SIG undefined FUN_147ea0328(void)

undefined8 FUN_147ea0328(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined4 local_a0;
  undefined8 *local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (((param_1[7] != 0) && (lVar1 = *(longlong *)(param_1[7] + 0x110), lVar1 != 0)) &&
     (lVar1 = *(longlong *)(lVar1 + 0x3c0), lVar1 != 0)) {
    lVar5 = FUN_14104c5c4();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) {
      if ((*(byte *)(param_1 + 0x18) & 4) == 0) {
LAB_147ea04b9:
        iVar4 = (**(code **)(*param_1 + 0x300))(param_1,lVar1);
        if (iVar4 == 1) {
          (**(code **)(*param_1 + 0x2b0))(param_1,2);
        }
        else {
          if (iVar4 != 2) goto LAB_147ea038e;
          puVar8 = &DAT_14cb1eff8;
          if (*(longlong *)(lVar1 + 0x468) != 0) {
            puVar8 = (undefined4 *)(*(longlong *)(lVar1 + 0x468) + 0x338);
          }
          *(undefined4 *)(param_1 + 0xf) = *puVar8;
          FUN_147e9ea4e(param_1,DAT_14cb1fce0);
          FUN_147e9ea4e(param_1,DAT_14cb1fcc8,DAT_14cb1efa4);
        }
      }
      else {
        cVar3 = (**(code **)(*(longlong *)(lVar1 + 0x390) + 0x40))(lVar1 + 0x390);
        if (cVar3 == '\0') goto LAB_147ea04b9;
        uVar6 = FUN_1401b4c98(lVar1);
        local_98 = (undefined8 *)0x0;
        local_90 = 0;
        FUN_1446efa72(&local_98,0,3,0x10);
        puVar2 = local_98;
        local_90 = 3;
        *local_98 = &PTR_LAB_14a1c8830;
        uVar7 = FUN_144a3f946();
        puVar2[2] = uVar7;
        *puVar2 = &PTR_FUN_14abe5570;
        puVar2[3] = 0;
        FUN_14485c47a(puVar2 + 3,param_1);
        puVar2[4] = FUN_147ea091c;
        local_88 = 0;
        local_80 = 0;
        FUN_14487d8d8(&local_88,&local_98);
        local_48 = 1;
        local_a0 = 0xbf800000;
        local_a8 = 0;
        FUN_1406f3fee(uVar6,param_1 + 0x1c,&local_88,0x3dcccccd);
        (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
        FUN_1449db362(&local_98);
      }
      uVar6 = 1;
      goto LAB_147ea0390;
    }
  }
LAB_147ea038e:
  uVar6 = 0;
LAB_147ea0390:
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ea0536 FUN_147ea0536 body=720 status=ok
// SIG undefined FUN_147ea0536(void)

undefined1 FUN_147ea0536(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  uint uVar7;
  double *pdVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  uint uVar11;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [4];
  undefined1 local_8c;
  undefined8 local_88;
  double local_80;
  double dStack_78;
  double local_70;
  longlong local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = 0;
  local_70 = DAT_14cb1e7c0;
  local_80 = DAT_14cb1e7b0;
  dStack_78 = DAT_14cb1e7b8;
  local_58 = 0x7f7fffff;
  local_54 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uVar7 = *(uint *)(param_1 + 0xc0);
  lVar4 = *(longlong *)(param_1 + 0xb8);
  if ((lVar4 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar4);
  }
  iVar3 = (uVar7 & 0xc) + (uVar7 & 0x10) * 4;
  if ((lVar4 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar4);
  }
  local_5c = *(undefined4 *)(param_1 + 0xb0);
  uVar7 = (*(uint *)(param_1 + 0xc0) & 1) << 10 | (*(uint *)(param_1 + 0xc0) & 2) << 7;
  uVar11 = uVar7 + iVar3;
  local_60 = uVar7 + iVar3 + 0x210;
  local_68 = lVar4;
  if (*(longlong *)(param_1 + 0x90) == 0) {
    uVar10 = 0;
    uVar9 = 0;
    if ((((*(double *)(param_1 + 0x98) <= -DAT_14cb1e7b0) ||
         (DAT_14cb1e7b0 <= *(double *)(param_1 + 0x98))) ||
        (*(double *)(param_1 + 0xa0) <= -DAT_14cb1e7b8)) ||
       (((uVar10 = uVar9, DAT_14cb1e7b8 <= *(double *)(param_1 + 0xa0) ||
         (*(double *)(param_1 + 0xa8) <= -DAT_14cb1e7c0)) ||
        (DAT_14cb1e7c0 <= *(double *)(param_1 + 0xa8))))) goto LAB_147ea06a1;
    cVar6 = FUN_147ea08b2(param_2,(double *)(param_1 + 0x98));
    local_80 = *(double *)(param_1 + 0x98);
    dStack_78 = *(double *)(param_1 + 0xa0);
    local_70 = *(double *)(param_1 + 0xa8);
    local_60 = uVar11 | 0x211;
  }
  else {
    cVar6 = FUN_147ea0808(param_2);
    if ((*(byte *)(param_1 + 0xc0) & 0x20) == 0) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x1c8);
      if (lVar4 == 0) {
        pdVar8 = (double *)&DAT_14c8464e0;
        local_70 = DAT_14c8464f0;
      }
      else {
        pdVar8 = (double *)(lVar4 + 0x260);
        local_70 = *(double *)(lVar4 + 0x270);
      }
      local_80 = *pdVar8;
      dStack_78 = pdVar8[1];
      local_60 = uVar11 | 0x211;
    }
    else {
      FUN_14485c47a(&local_88);
      local_60 = local_60 | 3;
    }
  }
  uVar10 = 1;
  if (cVar6 == '\0') {
    (**(code **)(*param_2 + 0x7a8))(param_2,local_90,&local_88,0);
    uVar10 = local_8c;
  }
LAB_147ea06a1:
  plVar5 = (longlong *)CONCAT44(uStack_44,uStack_48);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 147ea0808 FUN_147ea0808 body=109 status=ok
// SIG undefined FUN_147ea0808(void)

undefined4 FUN_147ea0808(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 1;
  uVar1 = FUN_147efaa92(*(undefined8 *)(param_1 + 0x468),param_2,3,param_3);
  if ((char)uVar1 != '\0') {
    FUN_147ef8328(*(undefined8 *)(param_1 + 0x468),local_1c,0,0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ea0876 FUN_147ea0876 body=29 status=ok
// SIG undefined FUN_147ea0876(void)

void FUN_147ea0876(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    FUN_14485c47a();
    *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 3;
  }
  return;
}



// FUNCTION 147ea0894 FUN_147ea0894 body=29 status=ok
// SIG undefined FUN_147ea0894(void)

void FUN_147ea0894(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if ((*(uint *)(param_1 + 0x28) & 1) == 0) {
    *(undefined8 *)(param_1 + 0x18) = param_2[2];
    uVar1 = param_2[1];
    *(undefined8 *)(param_1 + 8) = *param_2;
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 1;
  }
  return;
}



// FUNCTION 147ea08b2 FUN_147ea08b2 body=104 status=ok
// SIG undefined FUN_147ea08b2(void)

undefined4 FUN_147ea08b2(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [44];
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_147efa850(*(undefined8 *)(param_1 + 0x468),param_2,3,param_3);
  if ((char)uVar1 != '\0') {
    FUN_147ef8328(*(undefined8 *)(param_1 + 0x468),local_1c,0,0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ea091c FUN_147ea091c body=46 status=ok
// SIG undefined FUN_147ea091c(void)

void FUN_147ea091c(longlong *param_1)

{
  char cVar1;
  
  cVar1 = FUN_147ea0328();
  if (cVar1 != '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000147ea0947. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2b0))(param_1,3);
  return;
}



// FUNCTION 147ea094a FUN_147ea094a body=219 status=ok
// SIG undefined FUN_147ea094a(void)

ulonglong FUN_147ea094a(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 unaff_RSI;
  ulonglong uVar6;
  
  if (1 < *(int *)(param_1 + 0x84) - 3U) {
    *(byte *)(param_1 + 0x80) = *(byte *)(param_1 + 0x80) | 0x20;
    if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2c8))();
      if ((*(byte *)(param_1 + 0x80) & 0x20) == 0) goto LAB_147ea095f;
    }
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if (((*(longlong *)(param_1 + 0x38) == 0) ||
        (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x110), lVar3 == 0)) ||
       (lVar3 = *(longlong *)(lVar3 + 0x3c0), lVar3 == 0)) goto LAB_147ea0961;
    lVar5 = FUN_14104c5c4();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        != lVar5 + 0x30)) goto LAB_147ea0961;
    plVar4 = *(longlong **)(lVar3 + 0x468);
    if (plVar4 != (longlong *)0x0) {
      iVar1 = *(int *)(param_1 + 0x78);
      iVar2 = (int)plVar4[0x67];
      if ((iVar1 != -1 && iVar2 != -1) && (((iVar2 == 0 || (iVar1 == 0)) || (iVar2 == iVar1)))) {
        (**(code **)(*plVar4 + 0x4a0))(plVar4,iVar1,0);
        goto LAB_147ea0961;
      }
    }
  }
LAB_147ea095f:
  uVar6 = 0;
LAB_147ea0961:
  return uVar6 & 0xffffffff;
}



// FUNCTION 147ea0a26 FUN_147ea0a26 body=76 status=ok
// SIG undefined FUN_147ea0a26(void)

undefined8 FUN_147ea0a26(longlong param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x468);
  if (((plVar2 != (longlong *)0x0) && (iVar1 = (int)plVar2[0x67], param_2 != -1 && iVar1 != -1)) &&
     ((iVar1 == 0 || ((param_2 == 0 || (iVar1 == param_2)))))) {
    (**(code **)(*plVar2 + 0x4a0))(plVar2,param_2,0);
    return 1;
  }
  return 0;
}



// FUNCTION 147ea0a72 FUN_147ea0a72 body=239 status=ok
// SIG undefined FUN_147ea0a72(void)

undefined8 FUN_147ea0a72(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  lVar3 = *(longlong *)(param_1 + 0x90);
  if (((lVar3 == 0) ||
      (((*(byte *)(lVar3 + 0x65) & 2) == 0 && ((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0)))) &&
     ((*(uint *)(param_1 + 0x80) & 0x20) != 0)) {
    if (*(longlong **)(param_1 + 0x28) == (longlong *)0x0) {
      *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) & 0xffffffdf;
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2d0))();
      if ((*(byte *)(param_1 + 0x80) & 0x20) != 0) {
        return 0;
      }
    }
    if (((*(longlong *)(param_1 + 0x38) != 0) &&
        (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x110), lVar3 != 0)) &&
       (lVar3 = *(longlong *)(lVar3 + 0x3c0), lVar3 != 0)) {
      lVar5 = FUN_14104c5c4();
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
           ) == lVar5 + 0x30)) {
        plVar4 = *(longlong **)(lVar3 + 0x468);
        if (((plVar4 != (longlong *)0x0) &&
            ((iVar1 = (int)plVar4[0x67], iVar1 != -1 &&
             (iVar2 = *(int *)(param_1 + 0x78), iVar2 != -1)))) &&
           ((iVar1 == 0 || ((iVar2 == 0 || (iVar1 == iVar2)))))) {
          (**(code **)(*plVar4 + 0x4a8))();
          return 1;
        }
        FUN_147e9e73c(param_1);
        uVar6 = FUN_147ea0328(param_1);
        return uVar6;
      }
    }
  }
  return 0;
}



// FUNCTION 147ea0b62 FUN_147ea0b62 body=73 status=ok
// SIG undefined FUN_147ea0b62(void)

undefined8 FUN_147ea0b62(longlong param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x468);
  if (((plVar2 != (longlong *)0x0) && (iVar1 = (int)plVar2[0x67], param_2 != -1 && iVar1 != -1)) &&
     ((iVar1 == 0 || ((param_2 == 0 || (iVar1 == param_2)))))) {
    (**(code **)(*plVar2 + 0x4a8))();
    return 1;
  }
  return 0;
}



// FUNCTION 147ea0bac FUN_147ea0bac body=139 status=ok
// SIG undefined FUN_147ea0bac(void)

undefined8 FUN_147ea0bac(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  FUN_145cb75e0();
  FUN_145cb7506(param_1);
  if (((*(longlong *)(param_1 + 0x38) != 0) &&
      (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x110), lVar1 != 0)) &&
     (lVar1 = *(longlong *)(lVar1 + 0x3c0), lVar1 != 0)) {
    lVar3 = FUN_14104c5c4();
    if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
         == lVar3 + 0x30)) && (plVar2 = *(longlong **)(lVar1 + 0x468), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x498))(plVar2,param_1,0x10,*(undefined4 *)(param_1 + 0x78),0);
    }
  }
  return 4;
}



// FUNCTION 147ea0c76 FUN_147ea0c76 body=26 status=ok
// SIG undefined FUN_147ea0c76(void)

void FUN_147ea0c76(undefined8 param_1)

{
  FUN_145cb75e0();
  FUN_145cb7506(param_1);
  return;
}



// FUNCTION 147ea0c90 FUN_147ea0c90 body=222 status=ok
// SIG undefined FUN_147ea0c90(void)

void FUN_147ea0c90(longlong *param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  
  lVar1 = param_1[7];
  if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x110) != 0)) &&
     (*(longlong *)(*(longlong *)(lVar1 + 0x110) + 0x3c0) != 0)) {
    if (((*(byte *)(param_1 + 0x18) & 0x40) != 0) && (lVar2 = param_1[5], lVar2 != 0)) {
      iVar4 = FUN_147e9e4d8(lVar2,1);
      if (iVar4 == 0) {
        FUN_147e9fd0e(lVar1,lVar2);
      }
    }
    if (param_3 == 4) {
      FUN_147ea0d6e(param_1);
      return;
    }
    if ((param_2 != 0 && (param_3 & 0xfffffffe) == 2) && ((*(byte *)(param_2 + 0x98) & 4) != 0)) {
      cVar3 = (**(code **)(*param_1 + 0x2f8))(param_1);
      if (cVar3 == '\0') {
        lVar1 = param_1[7];
        iVar4 = FUN_147e9e4d8(param_1,1);
        if (iVar4 == 0) {
          FUN_147e9fd0e(lVar1,param_1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 147ea0d6e FUN_147ea0d6e body=510 status=ok
// SIG undefined FUN_147ea0d6e(void)

void FUN_147ea0d6e(longlong *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 *local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_1[0x19] != 0) {
    if (((param_1[7] != 0) && (lVar4 = *(longlong *)(param_1[7] + 0x110), lVar4 != 0)) &&
       (lVar4 = *(longlong *)(lVar4 + 0x3c0), lVar4 != 0)) {
      lVar3 = FUN_14104c5c4();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        cVar2 = (**(code **)(*(longlong *)(lVar4 + 0x390) + 0x40))(lVar4 + 0x390);
        if (cVar2 != '\0') {
          lVar4 = (**(code **)(*param_1 + 0x180))(param_1);
          if (lVar4 != 0) {
            uVar5 = (**(code **)(*param_1 + 0x180))(param_1);
            uVar5 = FUN_144a88394(uVar5);
            local_98 = (undefined8 *)0x0;
            local_90 = 0;
            FUN_1446efa72(&local_98,0,3,0x10);
            puVar1 = local_98;
            local_90 = 3;
            *local_98 = &PTR_LAB_14a1c8830;
            uVar6 = FUN_144a3f946();
            puVar1[2] = uVar6;
            *puVar1 = &PTR_FUN_14abe5570;
            puVar1[3] = 0;
            FUN_14485c47a(puVar1 + 3,param_1);
            puVar1[4] = FUN_147ea0d6e;
            local_88 = 0;
            local_80 = 0;
            FUN_14487d8d8(&local_88,&local_98);
            local_48 = 1;
            local_b0 = 0xbf800000;
            local_b8 = 0;
            FUN_1406f3fee(uVar5,param_1 + 0x1d,&local_88,0x3e800000);
            (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
            FUN_1449db362(&local_98);
          }
          goto LAB_147ea0df4;
        }
      }
    }
    lVar4 = FUN_14479d2ce(param_1[0x19] + 0x9c);
    if (lVar4 != 0) {
      local_a8 = param_1[0x19];
      local_a0 = param_1[0x1a];
      if (local_a0 != 0) {
        LOCK();
        *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
        UNLOCK();
      }
      FUN_147e73f18(lVar4,&local_a8,1);
    }
  }
LAB_147ea0df4:
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ea0f9c FUN_147ea0f9c body=263 status=ok
// SIG undefined FUN_147ea0f9c(void)

undefined8 FUN_147ea0f9c(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = param_1[0x12];
  if (lVar3 == 0) {
    (**(code **)(*param_1 + 0x2b0))(param_1,3);
    return 0;
  }
  iVar1 = *(int *)((longlong)param_1 + 0xa4);
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x2b0))(param_1,2);
    return 1;
  }
  if (0 < iVar1) {
    *(int *)((longlong)param_1 + 0xa4) = iVar1 + -1;
  }
  lVar5 = lVar3;
  if ((int)param_1[0x15] == 0) {
    lVar5 = 0;
    lVar3 = FUN_14092e7b3(lVar3,param_1,0,0xffffffff,0,0,0xfff00007);
    if (lVar3 == 0) goto LAB_147ea0fdf;
    lVar4 = FUN_1410df250();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (lVar5 = lVar3,
       *(longlong *)
        (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
       != lVar4 + 0x30)) {
      lVar5 = 0;
      goto LAB_147ea0fdf;
    }
  }
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(lVar5);
  }
LAB_147ea0fdf:
  param_1[0x13] = lVar5;
  if (param_1[7] == 0) {
    return 0;
  }
  uVar2 = FUN_147e9e9e0(param_1[7],lVar5,(int)param_1[0xc],param_1[8]);
  return uVar2;
}



// FUNCTION 147ea10a4 FUN_147ea10a4 body=77 status=ok
// SIG undefined FUN_147ea10a4(void)

undefined8 FUN_147ea10a4(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(uint *)(param_1 + 0x80) & 0x20) == 0) {
    return 0;
  }
  if (*(longlong **)(param_1 + 0x28) == (longlong *)0x0) {
    *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) & 0xffffffdf;
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2d0))();
    if ((*(byte *)(param_1 + 0x80) & 0x20) != 0) {
      return 0;
    }
  }
  uVar1 = FUN_147ea0f9c(param_1);
  return uVar1;
}



// FUNCTION 147ea10f2 FUN_147ea10f2 body=85 status=ok
// SIG undefined FUN_147ea10f2(void)

void FUN_147ea10f2(longlong *param_1,longlong param_2,int param_3)

{
  if (param_1[0x13] != param_2) goto LAB_147ea1107;
  if (param_3 == 3) {
    if ((char)param_1[0x14] == '\x01') goto LAB_147ea113d;
  }
  else if (param_3 == 2) {
LAB_147ea113d:
    FUN_147ea0f9c(param_1);
    goto LAB_147ea1107;
  }
  (**(code **)(*param_1 + 0x2b0))(param_1,3);
LAB_147ea1107:
  *(undefined8 *)(param_2 + 0x30) = 0;
  param_1[5] = 0;
  return;
}



// FUNCTION 147ea114c FUN_147ea114c body=126 status=ok
// SIG undefined FUN_147ea114c(void)

void FUN_147ea114c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  
  *(undefined1 **)(param_1 + 0x84) = &DAT_100000001;
  *(byte *)(param_1 + 0x80) = *(byte *)(param_1 + 0x80) & 0xdf;
  iVar1 = *(int *)(param_1 + 0x98);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x90);
    lVar4 = 0;
    bVar3 = DAT_14c950c29;
    do {
      if ((*(longlong *)(lVar2 + lVar4) != 0 & bVar3) == 1) {
        FUN_1456cec3c();
        bVar3 = DAT_14c950c29;
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  FUN_147ea11ca(param_1);
  return;
}



// FUNCTION 147ea11ca FUN_147ea11ca body=251 status=ok
// SIG undefined FUN_147ea11ca(void)

undefined8 FUN_147ea11ca(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x16);
  if (*(uint *)(param_1 + 0x13) <= uVar1) {
    (**(code **)(*param_1 + 0x2b0))(param_1,2);
    return 1;
  }
  lVar2 = *(longlong *)(param_1[0x12] + (longlong)(int)uVar1 * 8);
  if (*(int *)((longlong)param_1 + 0xb4) == 0) {
    lVar2 = FUN_14092e7b3(lVar2,param_1,0,0xffffffff,0,0,0xfff00007);
    if (lVar2 != 0) {
      lVar3 = FUN_1410df250();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        uVar1 = *(uint *)(param_1 + 0x16);
        goto LAB_147ea11f8;
      }
    }
    *(int *)(param_1 + 0x16) = (int)param_1[0x16] + 1;
    lVar2 = 0;
  }
  else {
LAB_147ea11f8:
    *(uint *)(param_1 + 0x16) = uVar1 + 1;
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
  }
  param_1[0x15] = lVar2;
  if (param_1[7] == 0) {
    return 0;
  }
  uVar4 = FUN_147e9e9e0(param_1[7],lVar2,(int)param_1[0xc],param_1[8]);
  return uVar4;
}



// FUNCTION 147ea12c6 FUN_147ea12c6 body=77 status=ok
// SIG undefined FUN_147ea12c6(void)

undefined8 FUN_147ea12c6(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(uint *)(param_1 + 0x80) & 0x20) == 0) {
    return 0;
  }
  if (*(longlong **)(param_1 + 0x28) == (longlong *)0x0) {
    *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) & 0xffffffdf;
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2d0))();
    if ((*(byte *)(param_1 + 0x80) & 0x20) != 0) {
      return 0;
    }
  }
  uVar1 = FUN_147ea11ca(param_1);
  return uVar1;
}



// FUNCTION 147ea1314 FUN_147ea1314 body=94 status=ok
// SIG undefined FUN_147ea1314(void)

void FUN_147ea1314(longlong *param_1,longlong param_2,int param_3)

{
  if (param_1[0x15] == param_2) {
    if ((param_3 == 2) || ((param_3 == 3 && ((char)param_1[0x14] == '\x01')))) {
      if (*(int *)((longlong)param_1 + 0x84) == 1) {
        FUN_147ea11ca(param_1);
      }
    }
    else {
      (**(code **)(*param_1 + 0x2b0))(param_1,3);
    }
  }
  *(undefined8 *)(param_2 + 0x30) = 0;
  param_1[5] = 0;
  return;
}



// FUNCTION 147ea1376 FUN_147ea1376 body=367 status=ok
// SIG undefined FUN_147ea1376(void)

undefined8 FUN_147ea1376(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  undefined8 *local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  byte local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *(undefined1 **)((longlong)param_1 + 0x84) = &DAT_100000001;
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xdf;
  if (0.0 <= *(float *)(param_1 + 0x12)) {
    uVar3 = (**(code **)(*param_1 + 0x180))();
    uVar3 = FUN_144a88394(uVar3);
    lVar1 = param_1[0x12];
    local_b8 = (undefined8 *)0x0;
    local_b0 = 0;
    FUN_1446efa72(&local_b8,0,3,0x10);
    puVar2 = local_b8;
    local_b0 = 3;
    *local_b8 = &PTR_LAB_14a1c8830;
    uVar4 = FUN_144a3f946();
    puVar2[2] = uVar4;
    *puVar2 = &PTR_FUN_14abe55e0;
    puVar2[3] = 0;
    FUN_14485c47a(puVar2 + 3,param_1);
    puVar2[4] = &LAB_147ea14e6;
    local_a8 = 0;
    local_a0 = 0;
    FUN_14487d8d8(&local_a8,&local_b8);
    local_68 = 1;
    local_c0 = 0xbf800000;
    local_c8 = 0;
    FUN_1406f3fee(uVar3,param_1 + 0x13,&local_a8,(int)lVar1);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_68])(&local_a8);
    FUN_1449db362(&local_b8);
  }
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ea14f6 FUN_147ea14f6 body=48 status=ok
// SIG undefined FUN_147ea14f6(void)

undefined8 FUN_147ea14f6(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x180))();
  uVar1 = FUN_144a88394(uVar1);
  FUN_147d74288(uVar1,param_1[0x13]);
  return 1;
}



// FUNCTION 147ea1526 FUN_147ea1526 body=48 status=ok
// SIG undefined FUN_147ea1526(void)

undefined8 FUN_147ea1526(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x180))();
  uVar1 = FUN_144a88394(uVar1);
  FUN_147d7457e(uVar1,param_1[0x13]);
  return 1;
}



// FUNCTION 147ea1556 FUN_147ea1556 body=82 status=ok
// SIG undefined FUN_147ea1556(void)

undefined8 FUN_147ea1556(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x180))();
  uVar1 = FUN_144a88394(uVar1);
  param_1 = param_1 + 0x13;
  lVar2 = FUN_144a61814(uVar1,param_1);
  if (lVar2 != 0) {
    FUN_1405a424c(uVar1,*param_1);
  }
  *param_1 = 0;
  return 4;
}



// FUNCTION 147ea15a8 FUN_147ea15a8 body=185 status=ok
// SIG undefined FUN_147ea15a8(void)

void FUN_147ea15a8(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
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
  local_28 = local_20;
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  FUN_147ea1662(param_1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ea1662 FUN_147ea1662 body=251 status=ok
// SIG undefined FUN_147ea1662(void)

void FUN_147ea1662(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x490) == 0) goto LAB_147ea1684;
  uVar2 = FUN_145cc80f6(param_2);
  if ((*(ushort *)(param_1 + 0x448) >> (uVar2 & 0x1f) & 1) != 0) goto LAB_147ea1684;
  *(ushort *)(param_1 + 0x448) = *(ushort *)(param_1 + 0x448) | (ushort)(1 << ((byte)uVar2 & 0x1f));
  lVar4 = *param_2;
  if (lVar4 == 0) {
LAB_147ea16fd:
    lVar4 = 0;
  }
  else {
    lVar3 = FUN_14588585a();
    if (((lVar3 == 0) || (*(int *)(lVar4 + 0x38) < *(int *)(lVar3 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
        lVar3 + 0x30)) goto LAB_147ea16fd;
    lVar4 = *param_2;
  }
  uVar1 = *(undefined8 *)(lVar4 + 0x18);
  local_30 = *param_2;
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  lVar4 = FUN_147e984ba(param_1 + 0x430,&local_30,0xc0,uVar1);
  if (lVar4 != 0) {
    FUN_147e956ca(*(undefined8 *)(param_1 + 0x490),lVar4);
  }
LAB_147ea1684:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ea1796 FUN_147ea1796 body=96 status=ok
// SIG undefined FUN_147ea1796(void)

void FUN_147ea1796(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ea17f8(param_1,&local_30);
  *(undefined8 *)(param_3 + 4) = local_20;
  *param_3 = local_30;
  param_3[1] = uStack_2c;
  param_3[2] = uStack_28;
  param_3[3] = uStack_24;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ea17f8 FUN_147ea17f8 body=288 status=ok
// SIG undefined FUN_147ea17f8(void)

double * FUN_147ea17f8(longlong *param_1,double *param_2)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  param_2[2] = DAT_14cb1e7c0;
  dVar2 = DAT_14cb1e7b8;
  *param_2 = DAT_14cb1e7b0;
  param_2[1] = dVar2;
  lVar5 = (longlong)(int)param_1[0x8b];
  if (0 < lVar5) {
    uVar6 = lVar5 + 1;
    lVar5 = lVar5 << 5;
    do {
      lVar5 = lVar5 + -0x20;
      lVar3 = param_1[0x8a];
      lVar4 = FUN_14479d2ce(lVar3 + lVar5);
      if (lVar4 != 0) {
        (**(code **)(*param_1 + 0x808))(param_1,param_2,lVar4);
        return param_2;
      }
      dVar2 = *(double *)(lVar3 + 8 + lVar5);
      if ((((-DAT_14cb1e7b0 < dVar2) && (dVar2 < DAT_14cb1e7b0)) &&
          (dVar2 = *(double *)(lVar3 + 0x10 + lVar5), -DAT_14cb1e7b8 < dVar2)) &&
         (((dVar2 < DAT_14cb1e7b8 &&
           (dVar2 = *(double *)(lVar3 + 0x18 + lVar5), -DAT_14cb1e7c0 < dVar2)) &&
          (dVar2 < DAT_14cb1e7c0)))) {
        param_2[2] = *(double *)(lVar3 + 0x18 + lVar5);
        pdVar1 = (double *)(lVar3 + 8 + lVar5);
        dVar2 = pdVar1[1];
        *param_2 = *pdVar1;
        param_2[1] = dVar2;
        return param_2;
      }
      uVar6 = uVar6 - 1;
    } while (1 < uVar6);
  }
  return param_2;
}



// FUNCTION 147ea1918 FUN_147ea1918 body=187 status=ok
// SIG undefined FUN_147ea1918(void)

void FUN_147ea1918(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  (**(code **)(*param_1 + 0x808))(param_1,&local_40,local_28);
  *(undefined8 *)(param_3 + 4) = local_30;
  *param_3 = local_40;
  param_3[1] = uStack_3c;
  param_3[2] = uStack_38;
  param_3[3] = uStack_34;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ea19d4 FUN_147ea19d4 body=38 status=ok
// SIG undefined FUN_147ea19d4(void)

void FUN_147ea19d4(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147ea19fa();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147ea19fa FUN_147ea19fa body=263 status=ok
// SIG undefined FUN_147ea19fa(void)

longlong FUN_147ea19fa(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0x458);
  if ((int)uVar3 < 1) {
    lVar1 = 0;
  }
  else {
    lVar2 = (ulonglong)(uVar3 - 1) * 0x20 + *(longlong *)(param_1 + 0x450);
    lVar1 = FUN_14479d2ce(lVar2);
    while (lVar1 == 0) {
      if ((((*(double *)(lVar2 + 8) <= -DAT_14cb1e7b0) || (DAT_14cb1e7b0 <= *(double *)(lVar2 + 8)))
          || (*(double *)(lVar2 + 0x10) <= -DAT_14cb1e7b8)) ||
         (DAT_14cb1e7b8 <= *(double *)(lVar2 + 0x10))) {
        if (uVar3 < 2) {
          return 0;
        }
      }
      else {
        if (uVar3 < 2) {
          return 0;
        }
        if (-DAT_14cb1e7c0 < *(double *)(lVar2 + 0x18) && *(double *)(lVar2 + 0x18) < DAT_14cb1e7c0)
        {
          return 0;
        }
      }
      lVar2 = (ulonglong)(uVar3 - 2) * 0x20 + *(longlong *)(param_1 + 0x450);
      lVar1 = FUN_14479d2ce(lVar2);
      uVar3 = uVar3 - 1;
    }
  }
  return lVar1;
}



// FUNCTION 147ea1b02 FUN_147ea1b02 body=139 status=ok
// SIG undefined FUN_147ea1b02(void)

void FUN_147ea1b02(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x468) == 0) {
    local_18 = DAT_14c8464f0;
    local_28 = DAT_14c8464e0;
    uStack_20 = DAT_14c8464e8;
  }
  else {
    FUN_14797c16e(*(longlong *)(param_1 + 0x468) + 0x1d0,&local_28);
  }
  *(undefined8 *)(param_3 + 4) = local_18;
  *param_3 = (undefined4)local_28;
  param_3[1] = local_28._4_4_;
  param_3[2] = (undefined4)uStack_20;
  param_3[3] = uStack_20._4_4_;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ea1c34 FUN_147ea1c34 body=171 status=ok
// SIG undefined FUN_147ea1c34(void)

void FUN_147ea1c34(longlong *param_1,longlong param_2)

{
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = local_40;
  local_38 = local_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  (**(code **)(*param_1 + 0x820))(param_1,&local_38,2);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ea1ce0 FUN_147ea1ce0 body=163 status=ok
// SIG undefined FUN_147ea1ce0(void)

void FUN_147ea1ce0(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x828))(param_1,local_20,2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ea1d9c FUN_147ea1d9c body=698 status=ok
// SIG undefined FUN_147ea1d9c(void)

void FUN_147ea1d9c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined1 local_90;
  longlong *local_88;
  undefined1 local_80;
  longlong local_70;
  int local_64;
  longlong local_60;
  int local_58;
  int local_54;
  int local_50;
  undefined4 local_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  local_50 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  iVar4 = local_50;
  local_54 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  iVar3 = local_54;
  local_58 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  iVar2 = local_58;
  local_60 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
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
  iVar1 = local_64;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = local_60;
  if ((local_60 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  local_90 = iVar2 != 0;
  local_80 = iVar1 != 0;
  local_98 = iVar3 != 0;
  local_88 = &local_70;
  uVar5 = FUN_147ea2058(param_1,local_48,local_4c,iVar4 != 0);
  *param_3 = uVar5;
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ea2058 FUN_147ea2058 body=541 status=ok
// SIG undefined FUN_147ea2058(void)

undefined1
FUN_147ea2058(longlong *param_1,undefined8 param_2,undefined4 param_3,byte param_4,byte param_5,
             byte param_6,longlong *param_7,byte param_8)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  byte local_b9;
  undefined1 local_b8 [4];
  undefined1 local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong local_90;
  uint local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar5 = (longlong *)param_1[0x8d];
  local_b9 = param_4;
  if ((plVar5 != (longlong *)0x0) && (*(char *)((longlong)plVar5 + 0x2a4) != '\0')) {
    local_c8 = 1;
    (**(code **)(*plVar5 + 0x498))(plVar5,param_1,0x180,DAT_14cb1effc);
  }
  local_b0 = 0;
  FUN_14485c47a(&local_b0,param_2);
  local_98 = DAT_14cb1e7c0;
  local_a8 = DAT_14cb1e7b0;
  uStack_a0 = DAT_14cb1e7b8;
  local_80 = 0x7f7fffff;
  local_7c = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  lVar3 = *param_7;
  if ((((lVar3 == 0) || (lVar4 = FUN_14118cf76(), lVar4 == 0)) ||
      (*(int *)(lVar3 + 0x38) < *(int *)(lVar4 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
      lVar4 + 0x30)) {
    plVar5 = param_1 + 0x93;
  }
  else {
    plVar5 = param_1 + 0x93;
    if (*param_7 != 0) {
      plVar5 = param_7;
    }
  }
  lVar3 = *plVar5;
  if ((DAT_14c950c29 == 1) && (lVar3 != 0)) {
    FUN_1456cec3c(lVar3);
  }
  if (((DAT_14c950c29 & 1) != 0) && (lVar3 != 0)) {
    FUN_1456cec3c(lVar3);
  }
  local_88 = (uint)param_6 << 10 | (uint)local_b9 << 8 |
             (local_88 & 0xfffff800) + (uint)param_8 * 8 + (uint)param_5 * 4 + 0x253;
  local_90 = lVar3;
  local_84 = param_3;
  (**(code **)(*param_1 + 0x7a8))(param_1,local_b8,&local_b0,0);
  plVar5 = (longlong *)CONCAT44(uStack_6c,uStack_70);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_b4;
}



// FUNCTION 147ea2294 FUN_147ea2294 body=833 status=ok
// SIG undefined FUN_147ea2294(void)

void FUN_147ea2294(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 uVar7;
  undefined1 *puVar8;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined1 local_c0;
  undefined1 local_b8;
  longlong *local_b0;
  undefined1 local_a8;
  undefined1 *local_98;
  longlong local_90;
  int local_84;
  longlong local_80;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  undefined4 local_64;
  undefined1 local_60 [24];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  local_98 = param_3;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_64 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_64);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  local_68 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  iVar6 = local_68;
  local_6c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  iVar5 = local_6c;
  local_70 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  iVar4 = local_70;
  local_74 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_74);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_74);
  }
  iVar3 = local_74;
  local_80 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  local_84 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_84);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_84);
  }
  iVar2 = local_84;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_90 = local_80;
  if ((local_80 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  puVar8 = local_60;
  if (puVar1 != (undefined1 *)0x0) {
    puVar8 = puVar1;
  }
  local_b8 = iVar3 != 0;
  local_c0 = iVar4 != 0;
  local_a8 = iVar2 != 0;
  local_c8 = iVar5 != 0;
  local_b0 = &local_90;
  uVar7 = FUN_147ea25d6(param_1,puVar8,local_64,iVar6 != 0);
  *local_98 = uVar7;
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ea25d6 FUN_147ea25d6 body=519 status=ok
// SIG undefined FUN_147ea25d6(void)

undefined1
FUN_147ea25d6(longlong *param_1,undefined8 *param_2,undefined4 param_3,uint param_4,byte param_5,
             byte param_6,byte param_7,longlong *param_8,byte param_9)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined1 local_b8 [4];
  undefined1 local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong local_90;
  uint local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar5 = (longlong *)param_1[0x8d];
  if ((plVar5 != (longlong *)0x0) && (*(char *)((longlong)plVar5 + 0x2a4) != '\0')) {
    local_c8 = 1;
    (**(code **)(*plVar5 + 0x498))(plVar5,param_1,0x180,DAT_14cb1effc);
  }
  local_b0 = 0;
  local_a8 = *param_2;
  uStack_a0 = param_2[1];
  local_98 = param_2[2];
  local_80 = 0x7f7fffff;
  local_7c = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  lVar3 = *param_8;
  if ((((lVar3 == 0) || (lVar4 = FUN_14118cf76(), lVar4 == 0)) ||
      (*(int *)(lVar3 + 0x38) < *(int *)(lVar4 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
      lVar4 + 0x30)) {
    plVar5 = param_1 + 0x93;
  }
  else {
    plVar5 = param_1 + 0x93;
    if (*param_8 != 0) {
      plVar5 = param_8;
    }
  }
  lVar3 = *plVar5;
  if ((DAT_14c950c29 == 1) && (lVar3 != 0)) {
    FUN_1456cec3c(lVar3);
  }
  if (((DAT_14c950c29 & 1) != 0) && (lVar3 != 0)) {
    FUN_1456cec3c(lVar3);
  }
  local_88 = (uint)param_7 << 10 | (param_4 & 0xff) << 8 |
             (uint)param_6 * 0x40 + (uint)param_5 * 4 + (uint)param_9 * 8 + 0x211;
  local_90 = lVar3;
  local_84 = param_3;
  (**(code **)(*param_1 + 0x7a8))(param_1,local_b8,&local_b0,0);
  plVar5 = (longlong *)CONCAT44(uStack_6c,uStack_70);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_b4;
}



// FUNCTION 147ea27de FUN_147ea27de body=239 status=ok
// SIG undefined FUN_147ea27de(void)

void FUN_147ea27de(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined2 local_1c;
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1a = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1a);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1a);
  }
  local_1c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x838))(param_1,local_1a,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ea28d4 FUN_147ea28d4 body=167 status=ok
// SIG undefined FUN_147ea28d4(void)

void FUN_147ea28d4(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = (**(code **)(*param_1 + 0x7e0))(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ea2980 FUN_147ea2980 body=168 status=ok
// SIG undefined FUN_147ea2980(void)

void FUN_147ea2980(longlong param_1,longlong param_2)

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
  if (*(longlong *)(param_1 + 0x468) != 0) {
    FUN_147efc298(*(longlong *)(param_1 + 0x468),local_1c != 0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ea2a2a FUN_147ea2a2a body=179 status=ok
// SIG undefined FUN_147ea2a2a(void)

void FUN_147ea2a2a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
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
  lVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  *(longlong *)(param_1 + 0x468) = lVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ea2ade FUN_147ea2ade body=185 status=ok
// SIG undefined FUN_147ea2ade(void)

void FUN_147ea2ade(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
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
  local_28 = local_20;
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  FUN_147ea2b98(param_1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ea2b98 FUN_147ea2b98 body=161 status=ok
// SIG undefined FUN_147ea2b98(void)

void FUN_147ea2b98(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x490) == 0) {
    return;
  }
  uVar2 = FUN_145cc80f6(param_2);
  if ((*(ushort *)(param_1 + 0x448) >> (uVar2 & 0x1f) & 1) != 0) {
    *(ushort *)(param_1 + 0x448) =
         *(ushort *)(param_1 + 0x448) & ~(ushort)(1 << ((byte)uVar2 & 0x1f));
    uVar1 = *(undefined8 *)(param_1 + 0x490);
    lVar4 = *param_2;
    if ((((lVar4 == 0) || (lVar3 = FUN_14588585a(), lVar3 == 0)) ||
        (*(int *)(lVar4 + 0x38) < *(int *)(lVar3 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
        lVar3 + 0x30)) {
      lVar4 = 0;
    }
    else {
      lVar4 = *param_2;
    }
    lVar4 = FUN_147e97934(uVar1,*(undefined8 *)(lVar4 + 0x18));
    if (lVar4 == 0) {
      return;
    }
    FUN_147e95552(lVar4);
    return;
  }
  return;
}



// FUNCTION 147ea2c40 FUN_147ea2c40 body=283 status=ok
// SIG undefined FUN_147ea2c40(void)

void FUN_147ea2c40(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
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
  plVar2 = &local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147ea2d5c(param_1,local_30,plVar2);
  *param_3 = uVar1;
  if ((DAT_14c950c29 == '\x01') && (*plVar2 != 0)) {
    FUN_1456cec3c();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ea2d5c FUN_147ea2d5c body=289 status=ok
// SIG undefined FUN_147ea2d5c(void)

undefined8 FUN_147ea2d5c(longlong *param_1,longlong param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  uVar1 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = uVar1;
  if (param_2 == 0) goto LAB_147ea2d7c;
  lVar2 = FUN_147ea2fb2();
  if ((lVar2 == 0) || (DAT_14c950c29 == '\0')) {
    param_1[0x91] = lVar2;
    if (lVar2 != 0) goto LAB_147ea2dcb;
    FUN_1446f470e(&local_30,L"BlackboardComponent",1);
    lVar2 = FUN_147ea51c2(param_1,local_30);
    if ((lVar2 == 0) || (DAT_14c950c29 == '\0')) {
      param_1[0x91] = lVar2;
      if (lVar2 != 0) goto LAB_147ea2e4d;
    }
    else {
      FUN_1456cec3c(lVar2);
      param_1[0x91] = lVar2;
LAB_147ea2e4d:
      (**(code **)(*param_1 + 0x800))(param_1,lVar2,param_2);
      FUN_140b506a4(param_1[0x91]);
    }
  }
  else {
    FUN_1456cec3c(lVar2);
    param_1[0x91] = lVar2;
LAB_147ea2dcb:
    if ((*(longlong *)(lVar2 + 0x120) == 0) || (*(longlong *)(lVar2 + 0x120) != param_2)) {
      (**(code **)(*param_1 + 0x800))(param_1,lVar2,param_2);
    }
  }
  uVar1 = param_1[0x91];
  *param_3 = uVar1;
LAB_147ea2d7c:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return CONCAT71((int7)(uVar1 >> 8),param_2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ea2ec8 FUN_147ea2ec8 body=53 status=ok
// SIG undefined FUN_147ea2ec8(void)

void FUN_147ea2ec8(longlong *param_1,undefined4 param_2)

{
  FUN_1448e423c();
                    /* WARNING: Could not recover jumptable at 0x000147ea2efa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x818))(param_1,param_2,1);
  return;
}



// FUNCTION 147ea2efe FUN_147ea2efe body=179 status=ok
// SIG undefined FUN_147ea2efe(void)

void FUN_147ea2efe(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  FUN_145ac42b8();
  if (((param_1 != (longlong *)0x0) && ((*(uint *)(param_1 + 0x8c) & 0x20) != 0)) &&
     ((*(uint *)(param_1 + 1) >> 0x1e & 1) == 0)) {
    iVar1 = FUN_14487fd02(param_1);
    if (iVar1 != 3) {
      (**(code **)(*param_1 + 0x708))(param_1);
    }
  }
  if (param_1[0x8e] == 0) {
    lVar2 = FUN_147e9e818(param_1);
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    param_1[0x8e] = lVar2;
  }
  if (param_1[0x91] == 0) {
    lVar2 = FUN_147ea2fb2(param_1);
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    param_1[0x91] = lVar2;
  }
  return;
}



// FUNCTION 147ea2fb2 FUN_147ea2fb2 body=102 status=ok
// SIG undefined FUN_147ea2fb2(void)

void FUN_147ea2fb2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14585daf2();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  (**(code **)(*param_1 + 0x598))(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ea301a FUN_147ea301a body=86 status=ok
// SIG undefined FUN_147ea301a(void)

void FUN_147ea301a(longlong param_1)

{
  longlong lVar1;
  
  FUN_140206818();
  if ((*(longlong *)(param_1 + 0x478) == 0) ||
     ((*(uint *)(*(longlong *)(param_1 + 0x478) + 8) >> 0x1e & 1) != 0)) {
    lVar1 = FUN_147ea3070(param_1);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x478) = lVar1;
  }
  return;
}



// FUNCTION 147ea3070 FUN_147ea3070 body=102 status=ok
// SIG undefined FUN_147ea3070(void)

void FUN_147ea3070(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_141235cd6();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  (**(code **)(*param_1 + 0x598))(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ea30d8 FUN_147ea30d8 body=61 status=ok
// SIG undefined FUN_147ea30d8(void)

void FUN_147ea30d8(longlong param_1)

{
  longlong *plVar1;
  
  FUN_147a36648();
  plVar1 = *(longlong **)(param_1 + 0x468);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x498))(plVar1,param_1,0x110,DAT_14cb1effc,0);
  }
  return;
}



// FUNCTION 147ea3116 FUN_147ea3116 body=324 status=ok
// SIG undefined FUN_147ea3116(void)

void FUN_147ea3116(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48 [2];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = param_5;
  FUN_147a36978();
  FUN_1401a700c(local_48,0x1c2);
  if ((longlong)(int)param_3[1] != 0) {
    lVar2 = 0;
    do {
      if (*(ulonglong *)(*param_3 + lVar2) == (local_48[0] & 0xffffffff)) {
        plVar1 = *(longlong **)(param_1 + 0x468);
        if (plVar1 != (longlong *)0x0) {
          local_68 = param_5;
          (**(code **)(*plVar1 + 0x4f8))(plVar1,param_2,param_3,param_4);
        }
        lVar2 = FUN_147ea19fa(param_1);
        if (lVar2 != 0) {
          local_34 = 0;
          local_48[0] = *(ulonglong *)(lVar2 + 0x18);
          FUN_1400021e4(local_48,&local_58);
          puVar3 = local_58;
          if (local_50 == 0) {
            puVar3 = &DAT_149dfb77a;
          }
          FUN_140002266(local_48,L"      Focus %s",puVar3);
          FUN_147d8f316(param_2 + 0xa8,local_48,&local_34);
          if (local_48[0] != 0) {
            FUN_1400020a8();
          }
          if (local_58 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
        break;
      }
      lVar2 = lVar2 + 8;
    } while ((longlong)(int)param_3[1] * 8 != lVar2);
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ea325c FUN_147ea325c body=95 status=ok
// SIG undefined FUN_147ea325c(void)

void FUN_147ea325c(longlong *param_1,undefined8 *param_2,uint param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  (**(code **)(*param_1 + 0x830))(param_1,param_3);
  param_3 = param_3 & 0xff;
  if ((int)param_1[0x8b] <= (int)param_3) {
    FUN_147ea32bc(param_1 + 0x8a,param_3 + 1);
  }
  lVar2 = param_1[0x8a];
  *(undefined8 *)(lVar2 + 0x18 + (ulonglong)(param_3 << 5)) = param_2[2];
  uVar3 = param_2[1];
  puVar1 = (undefined8 *)(lVar2 + 8 + (ulonglong)(param_3 << 5));
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  return;
}



// FUNCTION 147ea32bc FUN_147ea32bc body=98 status=ok
// SIG undefined FUN_147ea32bc(void)

void FUN_147ea32bc(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_147eb58de(param_1,iVar1);
    }
    FUN_147eb58b4((longlong)iVar1 * 0x20 + *param_1,param_2 - iVar1);
    return;
  }
  if (iVar1 <= param_2) {
    return;
  }
  *(int *)(param_1 + 1) = param_2;
  FUN_147eb5964(param_1);
  return;
}



// FUNCTION 147ea331e FUN_147ea331e body=116 status=ok
// SIG undefined FUN_147ea331e(void)

undefined8 * FUN_147ea331e(longlong *param_1,undefined8 *param_2,uint param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  param_2[2] = DAT_14cb1e7c0;
  uVar4 = DAT_14cb1e7b8._4_4_;
  uVar3 = (undefined4)DAT_14cb1e7b8;
  uVar2 = DAT_14cb1e7b0._4_4_;
  *(undefined4 *)param_2 = (undefined4)DAT_14cb1e7b0;
  *(undefined4 *)((longlong)param_2 + 4) = uVar2;
  *(undefined4 *)(param_2 + 1) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar4;
  if ((int)(param_3 & 0xff) < (int)param_1[0x8b]) {
    lVar6 = (ulonglong)((param_3 & 0xff) << 5) + param_1[0x8a];
    lVar5 = FUN_14479d2ce(lVar6);
    if (lVar5 == 0) {
      param_2[2] = *(undefined8 *)(lVar6 + 0x18);
      uVar1 = *(undefined8 *)(lVar6 + 0x10);
      *param_2 = *(undefined8 *)(lVar6 + 8);
      param_2[1] = uVar1;
    }
    else {
      (**(code **)(*param_1 + 0x808))(param_1,param_2,lVar5);
    }
  }
  return param_2;
}



// FUNCTION 147ea33e8 FUN_147ea33e8 body=104 status=ok
// SIG undefined FUN_147ea33e8(void)

void FUN_147ea33e8(longlong *param_1,longlong param_2,uint param_3)

{
  (**(code **)(*param_1 + 0x830))(param_1,param_3);
  if (param_2 != 0) {
    param_3 = param_3 & 0xff;
    if ((int)param_1[0x8b] <= (int)param_3) {
      FUN_147ea32bc(param_1 + 0x8a,param_3 + 1);
    }
    FUN_14485c47a((ulonglong)(param_3 << 5) + param_1[0x8a],param_2);
    return;
  }
  return;
}



// FUNCTION 147ea34c2 FUN_147ea34c2 body=1419 status=ok
// SIG undefined FUN_147ea34c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147ea34c2(longlong *param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  double dVar10;
  longlong lVar11;
  longlong lVar12;
  double *pdVar13;
  undefined4 uVar14;
  uint uVar15;
  double *pdVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auStack_138 [32];
  double local_118;
  double dStack_110;
  double local_108;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  ulonglong local_70;
  longlong *plVar16;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_138;
  plVar1 = (longlong *)param_1[0x7a];
  if (plVar1 == (longlong *)0x0) goto LAB_147ea3514;
  (**(code **)(*param_1 + 0x680))(param_1,&local_c8);
  plVar16 = param_1;
  dVar10 = (double)FUN_147ea17f8(param_1,&local_e0);
  uVar14 = SUB84(plVar16,0);
  if (((((local_e0 <= -DAT_14cb1e7b0) || (DAT_14cb1e7b0 <= local_e0)) ||
       (local_d8 <= -DAT_14cb1e7b8)) ||
      ((DAT_14cb1e7b8 <= local_d8 || (local_d0 <= -DAT_14cb1e7c0)))) || (DAT_14cb1e7c0 <= local_d0))
  {
    if ((*(byte *)(param_1 + 0x8c) & 0x40) != 0) {
      lVar11 = plVar1[0x39];
      if (lVar11 == 0) {
        local_78 = DAT_14c846508;
        local_c8 = DAT_14c8464f8;
        dStack_c0 = DAT_14c846500;
      }
      else {
        dVar30 = *(double *)(lVar11 + 0x240);
        dVar31 = *(double *)(lVar11 + 0x248);
        dVar18 = *(double *)(lVar11 + 0x250);
        dVar2 = *(double *)(lVar11 + 600);
        pdVar13 = *(double **)(lVar11 + 0x228);
        local_a8 = dVar30;
        dStack_a0 = dVar31;
        local_98 = dVar18;
        dStack_90 = dVar2;
        if (pdVar13 == (double *)0x0) {
          uVar14 = 0x40;
          pdVar13 = (double *)FUN_14001cc68(0x40,0x10);
          dVar10 = DAT_14c8463d8;
          *pdVar13 = DAT_14c8463d0;
          pdVar13[1] = dVar10;
          dVar10 = DAT_14c8463e8;
          pdVar13[2] = DAT_14c8463e0;
          pdVar13[3] = dVar10;
          dVar10 = DAT_14c846500;
          pdVar13[4] = DAT_14c8464f8;
          pdVar13[5] = dVar10;
          dVar10 = DAT_14c846508;
          pdVar13[6] = DAT_14c846508;
          *(double **)(lVar11 + 0x228) = pdVar13;
        }
        auVar26._8_4_ = (int)-(ulonglong)(dVar31 != pdVar13[1]);
        auVar26._0_8_ = -(ulonglong)(dVar30 != *pdVar13);
        auVar26._12_4_ = (int)(-(ulonglong)(dVar31 != pdVar13[1]) >> 0x20);
        iVar9 = movmskpd(SUB84(dVar10,0),auVar26);
        auVar27._8_4_ = (int)-(ulonglong)(dVar2 != pdVar13[3]);
        auVar27._0_8_ = -(ulonglong)(dVar18 != pdVar13[2]);
        auVar27._12_4_ = (int)(-(ulonglong)(dVar2 != pdVar13[3]) >> 0x20);
        uVar7 = movmskpd(uVar14,auVar27);
        if ((uVar7 & 0x3fffffff) != 0 || iVar9 != 0) {
          pdVar13[2] = local_98;
          pdVar13[3] = dStack_90;
          *pdVar13 = local_a8;
          pdVar13[1] = dStack_a0;
          FUN_1448052ee(&local_a8,&local_88);
          pdVar13[6] = local_78;
          pdVar13[4] = local_88;
          pdVar13[5] = dStack_80;
        }
        local_78 = pdVar13[6];
        local_c8 = pdVar13[4];
        dStack_c0 = pdVar13[5];
      }
      local_b8 = local_78;
      local_88 = local_c8;
      dStack_80 = dStack_c0;
    }
  }
  else {
    (**(code **)(*plVar1 + 0x718))(plVar1,&local_f8);
    local_78 = local_d0 - local_e8;
    dStack_80 = local_d8 - local_f0;
    local_88 = local_e0 - local_f8;
    FUN_144a79a9c(&local_88,&local_a8);
    local_b8 = local_98;
    local_c8 = local_a8;
    dStack_c0 = dStack_a0;
  }
  if ((local_c8 != 0.0) || (NAN(local_c8))) {
    lVar11 = FUN_147ea19fa(param_1);
    if (lVar11 != 0) {
      lVar12 = FUN_144a7cbb2();
      if ((*(int *)(lVar12 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar12 + 0x38) * 8) == lVar12 + 0x30)) goto LAB_147ea376f;
    }
    local_c8 = 0.0;
  }
LAB_147ea376f:
  dVar10 = (double)(**(code **)(*param_1 + 0x688))(param_1,&local_c8,1);
  uVar8 = SUB84(dVar10,0);
  uVar14 = SUB84(param_1,0);
  if (param_3 != '\0') {
    lVar11 = plVar1[0x39];
    dVar30 = DAT_14c8464f8;
    dVar31 = DAT_14c846500;
    dVar18 = DAT_14c846508;
    if (lVar11 != 0) {
      dVar30 = *(double *)(lVar11 + 0x240);
      dVar31 = *(double *)(lVar11 + 0x248);
      dVar18 = *(double *)(lVar11 + 0x250);
      dVar2 = *(double *)(lVar11 + 600);
      pdVar13 = *(double **)(lVar11 + 0x228);
      local_a8 = dVar30;
      dStack_a0 = dVar31;
      local_98 = dVar18;
      dStack_90 = dVar2;
      if (pdVar13 == (double *)0x0) {
        uVar14 = 0x40;
        pdVar13 = (double *)FUN_14001cc68(0x40,0x10);
        dVar10 = DAT_14c8463d8;
        *pdVar13 = DAT_14c8463d0;
        pdVar13[1] = dVar10;
        dVar10 = DAT_14c8463e8;
        pdVar13[2] = DAT_14c8463e0;
        pdVar13[3] = dVar10;
        dVar10 = DAT_14c846500;
        pdVar13[4] = DAT_14c8464f8;
        pdVar13[5] = dVar10;
        dVar10 = DAT_14c846508;
        pdVar13[6] = DAT_14c846508;
        *(double **)(lVar11 + 0x228) = pdVar13;
      }
      auVar5._8_4_ = (int)-(ulonglong)(dVar31 != pdVar13[1]);
      auVar5._0_8_ = -(ulonglong)(dVar30 != *pdVar13);
      auVar5._12_4_ = (int)(-(ulonglong)(dVar31 != pdVar13[1]) >> 0x20);
      uVar7 = movmskpd(SUB84(dVar10,0),auVar5);
      auVar6._8_4_ = (int)-(ulonglong)(dVar2 != pdVar13[3]);
      auVar6._0_8_ = -(ulonglong)(dVar18 != pdVar13[2]);
      auVar6._12_4_ = (int)(-(ulonglong)(dVar2 != pdVar13[3]) >> 0x20);
      uVar15 = movmskpd(uVar14,auVar6);
      uVar14 = 0;
      dVar10 = (double)(ulonglong)uVar7;
      if ((uVar15 & 0x3fffffff) != 0 || uVar7 != 0) {
        pdVar17 = &local_a8;
        pdVar13[2] = local_98;
        pdVar13[3] = dStack_90;
        *pdVar13 = local_a8;
        pdVar13[1] = dStack_a0;
        FUN_1448052ee(pdVar17,&local_88);
        uVar14 = SUB84(pdVar17,0);
        pdVar13[6] = local_78;
        pdVar13[4] = local_88;
        pdVar13[5] = dStack_80;
        dVar10 = local_78;
      }
      uVar8 = SUB84(dVar10,0);
      dVar30 = pdVar13[4];
      dVar31 = pdVar13[5];
      dVar18 = pdVar13[6];
    }
    dVar10 = (double)DAT_1499387d0;
    dVar2 = DAT_1499387d0._8_8_;
    auVar25._8_8_ = dVar31 - dStack_c0;
    auVar25._0_8_ = dVar30 - local_c8;
    auVar26 = divpd(auVar25,_DAT_1499387d0);
    auVar19._0_8_ = (dVar18 - local_b8) / 360.0;
    auVar19._8_8_ = 0;
    auVar27 = roundpd(auVar26,auVar26,3);
    auVar26 = roundpd(auVar19,auVar19,3);
    auVar33._0_8_ = (dVar18 - local_b8) - auVar26._0_8_ * dVar10;
    auVar33._8_8_ = 0.0 - auVar26._8_8_ * dVar2;
    dVar30 = (dVar30 - local_c8) - auVar27._0_8_ * dVar10;
    dVar31 = (dVar31 - dStack_c0) - auVar27._8_8_ * dVar2;
    auVar32._0_8_ = dVar30 + dVar10;
    auVar32._8_8_ = dVar31 + dVar2;
    auVar29._0_8_ = dVar10 + auVar33._0_8_;
    auVar29._8_8_ = dVar2 + auVar33._8_8_;
    auVar20._8_8_ = -(ulonglong)(0.0 <= dVar31);
    auVar20._0_8_ = -(ulonglong)(0.0 <= dVar30);
    auVar3._8_8_ = dVar31;
    auVar3._0_8_ = dVar30;
    auVar27 = blendvpd(auVar32,auVar3,auVar20);
    auVar21._8_8_ = -(ulonglong)(0.0 <= auVar33._8_8_);
    auVar21._0_8_ = -(ulonglong)(0.0 <= auVar33._0_8_);
    auVar26 = blendvpd(auVar29,auVar33,auVar21);
    auVar34._0_8_ = auVar27._0_8_ + -360.0;
    auVar34._8_8_ = auVar27._8_8_ + -360.0;
    auVar22._8_8_ = -(ulonglong)(180.0 < auVar27._8_8_);
    auVar22._0_8_ = -(ulonglong)(180.0 < auVar27._0_8_);
    auVar27 = blendvpd(auVar27,auVar34,auVar22);
    auVar23._8_8_ = -(ulonglong)(180.0 < auVar26._8_8_);
    auVar23._0_8_ = -(ulonglong)(180.0 < auVar26._0_8_);
    auVar4._8_8_ = auVar26._8_8_ + -360.0;
    auVar4._0_8_ = auVar26._0_8_ + -360.0;
    auVar26 = blendvpd(auVar26,auVar4,auVar23);
    auVar28._8_8_ = -(ulonglong)(0.0010000000474974513 < ABS(auVar27._8_8_));
    auVar28._0_8_ = -(ulonglong)(0.0010000000474974513 < ABS(auVar27._0_8_));
    iVar9 = movmskpd(uVar8,auVar28);
    auVar24._8_8_ = -(ulonglong)(0.0010000000474974513 < ABS(auVar26._8_8_));
    auVar24._0_8_ = -(ulonglong)(0.0010000000474974513 < ABS(auVar26._0_8_));
    uVar7 = movmskpd(uVar14,auVar24);
    if ((uVar7 & 0x3fffffff) != 0 || iVar9 != 0) {
      local_108 = local_b8;
      local_118 = local_c8;
      dStack_110 = dStack_c0;
      (**(code **)(*plVar1 + 0x730))(plVar1);
    }
  }
LAB_147ea3514:
  if ((local_70 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ea3a4e FUN_147ea3a4e body=549 status=ok
// SIG undefined FUN_147ea3a4e(void)

void FUN_147ea3a4e(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((((param_2 != 0) && ((*(uint *)(param_2 + 8) >> 0x1e & 1) != 0)) ||
      (FUN_1434a29fc(param_1,param_2), param_2 == 0)) || (param_1[0x7a] == 0)) goto LAB_147ea3bd8;
  if ((longlong *)param_1[0x8d] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x8d] + 0x478))();
  }
  if ((*(byte *)(param_1 + 0x8c) & 0x20) != 0) {
    FUN_1401a700c(&local_40,0x140);
    (**(code **)(*param_1 + 0x678))(param_1,local_40 & 0xffffffff);
  }
  lVar3 = param_1[0x92];
  if (lVar3 == 0) {
    lVar3 = FUN_147e95614(param_2);
    if (lVar3 == 0) {
      FUN_1446f470e(&local_48,L"GameplayTasksComponent",1);
      lVar3 = FUN_147ea3c74(param_2,local_48);
      FUN_140b506a4(lVar3);
    }
    if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar3);
      param_1[0x92] = lVar3;
      goto LAB_147ea3af0;
    }
    param_1[0x92] = lVar3;
    if (lVar3 != 0) goto LAB_147ea3af0;
  }
  else {
LAB_147ea3af0:
    FUN_1446f470e(&local_50,L"OnGameplayTaskResourcesClaimed",1);
    if ((longlong)*(int *)(lVar3 + 0x170) != 0) {
      lVar2 = *(longlong *)(lVar3 + 0x168);
      lVar3 = (longlong)*(int *)(lVar3 + 0x170) << 4;
      do {
        if (((param_1 != (longlong *)0x0) && (*(longlong *)(lVar2 + 8) == local_50)) &&
           (plVar1 = (longlong *)FUN_1409ca440(lVar2), plVar1 == param_1)) {
          if (lVar2 != 0) goto LAB_147ea3b96;
          break;
        }
        lVar2 = lVar2 + 0x10;
        lVar3 = lVar3 + -0x10;
      } while (lVar3 != 0);
    }
    lVar3 = param_1[0x92];
    FUN_147ea3d2c(&local_58);
    local_40 = 0;
    FUN_14485c47a(&local_40,param_1);
    local_38 = local_58;
    FUN_14113f0c0(&local_40);
    FUN_14053c012(lVar3 + 0x168,&local_40);
  }
LAB_147ea3b96:
  if ((param_1[0x91] != 0) && (*(longlong *)(param_1[0x91] + 0x120) != 0)) {
    (**(code **)(*param_1 + 0x800))(param_1);
  }
  if (((*(byte *)(param_1 + 0x8c) & 1) != 0) && ((longlong *)param_1[0x8e] != (longlong *)0x0)) {
    (**(code **)(*(longlong *)param_1[0x8e] + 0x480))();
  }
LAB_147ea3bd8:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ea3c74 FUN_147ea3c74 body=183 status=ok
// SIG undefined FUN_147ea3c74(void)

undefined8 FUN_147ea3c74(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_1459939b6();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
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



// FUNCTION 147ea3d2c FUN_147ea3d2c body=201 status=ok
// SIG undefined FUN_147ea3d2c(void)

undefined8 * FUN_147ea3d2c(undefined8 *param_1)

{
  undefined1 auStack_78 [32];
  wchar_t local_58 [36];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb1efa0) {
    FUN_144b3d300(&DAT_14cb1efa0);
    if (DAT_14cb1efa0 == -1) {
      builtin_wcsncpy(local_58 + 0x10,L"sourcesClaimed",0xf);
      builtin_wcsncpy(local_58 + 8,L"ayTaskRe",8);
      builtin_wcsncpy(local_58,L"OnGamepl",8);
      FUN_1446f470e(&DAT_14cb1ef98,local_58,1);
      _Init_thread_footer(&DAT_14cb1efa0);
    }
  }
  *param_1 = DAT_14cb1ef98;
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ea3df6 FUN_147ea3df6 body=8 status=ok
// SIG undefined FUN_147ea3df6(void)

undefined8 FUN_147ea3df6(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x120);
}



// FUNCTION 147ea3dfe FUN_147ea3dfe body=193 status=ok
// SIG undefined FUN_147ea3dfe(void)

void FUN_147ea3dfe(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = param_1[0x7a];
  FUN_147a3660c();
  if ((longlong *)param_1[0x8d] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x8d] + 0x480))();
  }
  if ((*(byte *)(param_1 + 0x8c) & 2) != 0) {
    (**(code **)(*param_1 + 0x7e8))(param_1);
  }
  lVar2 = param_1[0x92];
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0xa8) == lVar1)) {
    FUN_147ea3d2c(&local_30);
    FUN_1409ca370(lVar2 + 0x168,param_1,local_30);
    FUN_144a7b126(lVar2 + 0x168,&local_21,1);
    param_1[0x92] = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ea3ec0 FUN_147ea3ec0 body=131 status=ok
// SIG undefined FUN_147ea3ec0(void)

void FUN_147ea3ec0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  short sVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  FUN_141201b58();
  lVar1 = *(longlong *)(param_1 + 0x488);
  if (lVar1 != 0) {
    for (lVar2 = *(longlong *)(lVar1 + 0x120); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
      if (0 < (longlong)*(int *)(lVar2 + 0x40)) {
        lVar5 = 0;
        uVar4 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar2 + 0x38) + lVar5) == DAT_14cb1e828) {
            sVar3 = (short)uVar4 + *(short *)(lVar2 + 0x4c);
            if (sVar3 == -1) {
              return;
            }
            FUN_147ea3f44(lVar1,CONCAT62((int6)(uVar4 >> 0x10),sVar3),
                          *(undefined8 *)(param_1 + 0x3d0));
            return;
          }
          uVar4 = (ulonglong)((int)uVar4 + 1);
          lVar5 = lVar5 + 0x18;
        } while ((longlong)*(int *)(lVar2 + 0x40) * 0x18 != lVar5);
      }
    }
  }
  return;
}



// FUNCTION 147ea3f44 FUN_147ea3f44 body=1006 status=ok
// SIG undefined FUN_147ea3f44(void)

ulonglong FUN_147ea3f44(longlong param_1,uint param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  ushort uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined1 auStack_178 [40];
  longlong local_150;
  longlong local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  longlong local_128;
  undefined1 local_118 [192];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar6 = *(longlong *)(param_1 + 0x120);
  uVar8 = (ushort)param_2;
  if (uVar8 != 0xffff && lVar6 != 0) {
    do {
      if (*(ushort *)(lVar6 + 0x4c) <= uVar8) {
        uVar9 = (ulonglong)uVar8;
        plVar11 = (longlong *)
                  ((uVar9 - *(ushort *)(lVar6 + 0x4c)) * 0x18 + *(longlong *)(lVar6 + 0x38));
        if (((plVar11 != (longlong *)0x0) && (plVar11[1] != 0)) &&
           (lVar6 = *(longlong *)(plVar11[1] + 0x10), lVar4 = FUN_1412dbfa6(), lVar6 == lVar4)) {
          if ((*(int *)(param_1 + 0x130) == 0) ||
             (*(int *)(param_1 + 0x140) <= (int)(param_2 & 0xffff))) {
            lVar6 = 0;
          }
          else {
            lVar6 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x138) + uVar9 * 2) +
                    *(longlong *)(param_1 + 0x128);
          }
          uVar10 = (ulonglong)((uint)*(byte *)(plVar11[1] + 0x2b) * 2 & 4);
          lVar6 = lVar6 + uVar10;
          if (lVar6 != 0) {
            local_130 = 0;
            FUN_14485c47a(&local_130,param_3);
            cVar3 = FUN_147eb1c84(lVar6,&local_130);
            uVar7 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
            if (cVar3 == '\0') goto LAB_147ea3f88;
            FUN_147ead268(param_1,param_2);
            lVar6 = *(longlong *)(param_1 + 0x120);
            if ((lVar6 == 0) || ((*(uint *)(lVar6 + 0x48) & 1) == 0)) goto LAB_147ea3f88;
            goto LAB_147ea4092;
          }
        }
        break;
      }
      lVar6 = *(longlong *)(lVar6 + 0x30);
    } while (lVar6 != 0);
  }
  uVar7 = 0;
  goto LAB_147ea3f88;
  while (lVar6 = *(longlong *)(lVar6 + 0x30), lVar6 != 0) {
LAB_147ea4092:
    if (*(ushort *)(lVar6 + 0x4c) <= uVar8) {
      lVar6 = (uVar9 - *(ushort *)(lVar6 + 0x4c)) * 0x18 + *(longlong *)(lVar6 + 0x38);
      if ((lVar6 != 0) && ((*(byte *)(lVar6 + 0x10) & 1) != 0)) {
        lVar6 = *(longlong *)(param_1 + 0xb0);
        if (((lVar6 == 0) && (lVar6 = FUN_1448abda6(param_1), lVar6 == 0)) ||
           (lVar6 = *(longlong *)(lVar6 + 0x180), lVar6 == 0)) {
LAB_147ea410d:
          lVar6 = 0;
        }
        else {
          lVar4 = FUN_1413f6fa8();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar4 + 0x38) * 8) != lVar4 + 0x30)) goto LAB_147ea410d;
        }
        FUN_147ea5824(&local_130,lVar6 + 0x140,*(undefined8 *)(param_1 + 0x120));
        if (local_50 <= (int)local_130) goto LAB_147ea42f0;
        goto LAB_147ea4148;
      }
      break;
    }
  }
  goto LAB_147ea3f88;
LAB_147ea4148:
  do {
    puVar5 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      puVar5 = local_118;
    }
    if ((longlong)*(int *)(puVar5 + (longlong)(int)local_130 * 0x18 + 0x10) == -1) break;
    local_150 = FUN_14479d2ce(**(longlong **)(puVar5 + (longlong)(int)local_130 * 0x18) +
                              (longlong)*(int *)(puVar5 + (longlong)(int)local_130 * 0x18 + 0x10) *
                              0x18 + 8);
    if (((local_150 != 0) && (cVar3 = FUN_147eaca28(param_1,local_150), cVar3 != '\0')) &&
       (lVar6 = *(longlong *)(local_150 + 0x120), lVar6 != 0)) {
      do {
        if (0 < (longlong)*(int *)(lVar6 + 0x40)) {
          lVar4 = 0;
          uVar9 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar6 + 0x38) + lVar4) == *plVar11) {
              uVar8 = (short)uVar9 + *(short *)(lVar6 + 0x4c);
              if (uVar8 != 0xffff) {
                if ((*(int *)(local_150 + 0x130) == 0) ||
                   (*(int *)(local_150 + 0x140) <= (int)(uint)uVar8)) {
                  local_148 = 0;
                }
                else {
                  local_148 = (ulonglong)
                              *(ushort *)(*(longlong *)(local_150 + 0x138) + (ulonglong)uVar8 * 2) +
                              *(longlong *)(local_150 + 0x128);
                }
                local_148 = local_148 + uVar10;
                local_138 = 0;
                FUN_14485c47a(&local_138,param_3);
                FUN_147eb1c84(local_148,&local_138);
                FUN_147ead268(local_150,CONCAT62((int6)(uVar9 >> 0x10),uVar8));
              }
              goto LAB_147ea4197;
            }
            uVar9 = (ulonglong)((int)uVar9 + 1);
            lVar4 = lVar4 + 0x18;
          } while ((longlong)*(int *)(lVar6 + 0x40) * 0x18 != lVar4);
        }
        lVar6 = *(longlong *)(lVar6 + 0x30);
      } while (lVar6 != 0);
    }
LAB_147ea4197:
    puVar5 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      puVar5 = local_118;
    }
    puVar1 = (undefined8 *)(puVar5 + (longlong)(int)local_130 * 0x18);
    do {
      iVar2 = *(int *)((longlong)puVar1 + 0x14);
      *(int *)(puVar1 + 2) = iVar2;
      if ((longlong)iVar2 == -1) break;
      local_140 = puVar1[1];
      lVar6 = (longlong)iVar2 * 0x18;
      *(undefined4 *)((longlong)puVar1 + 0x14) =
           *(undefined4 *)(*(longlong *)*puVar1 + 0x10 + lVar6);
      local_138 = *(undefined8 *)(*(longlong *)*puVar1 + lVar6);
      cVar3 = FUN_147eb47ee(&local_138,&local_140);
    } while (cVar3 == '\0');
    FUN_147ea5a08(&local_130);
  } while ((int)local_130 < local_50);
LAB_147ea42f0:
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_128 != 0) {
    FUN_1400020a8();
  }
LAB_147ea3f88:
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 147ea4334 FUN_147ea4334 body=96 status=ok
// SIG undefined FUN_147ea4334(void)

undefined8 * FUN_147ea4334(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  FUN_14485c47a();
  param_1[3] = DAT_14cb1e7c0;
  uVar1 = DAT_14cb1e7b8;
  param_1[1] = DAT_14cb1e7b0;
  param_1[2] = uVar1;
  param_1[4] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff800 | 0x35f;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x7f7fffffbf800000;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  return param_1;
}



// FUNCTION 147ea448a FUN_147ea448a body=132 status=ok
// SIG undefined FUN_147ea448a(void)

void FUN_147ea448a(undefined8 *param_1,void *param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar1 + param_3;
  if (*(int *)((longlong)param_1 + 0xc) - uVar1 < param_3) {
    FUN_147e81d28(param_1,uVar1);
  }
  memmove((void *)((longlong)(int)param_3 * 0x30 + (longlong)*param_1),(void *)*param_1,
          (ulonglong)uVar1 * 0x30);
  if (param_3 != 0) {
    memcpy((void *)*param_1,param_2,(longlong)(int)param_3 * 0x30);
    return;
  }
  return;
}



// FUNCTION 147ea450e FUN_147ea450e body=227 status=ok
// SIG undefined FUN_147ea450e(void)

undefined4
FUN_147ea450e(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_5;
  local_30 = param_5[1];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  if (param_4 == 0) {
    local_48 = FUN_147e791d4(param_1,0);
  }
  else {
    local_48 = (**(code **)(*param_1 + 0x340))(param_1,param_4,param_2,&DAT_14c8464e0);
  }
  local_40 = &local_38;
  uVar4 = FUN_143836e36(param_1,param_2,param_3,&DAT_14c8464e0);
  plVar3 = (longlong *)param_5[1];
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
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ea45f2 FUN_147ea45f2 body=1306 status=ok
// SIG undefined FUN_147ea45f2(void)

undefined8 FUN_147ea45f2(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined1 (*pauVar14) [16];
  undefined4 uVar15;
  float fVar16;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Db;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auStack_208 [32];
  undefined1 *local_1e8;
  double *local_1e0;
  undefined8 *local_1d8;
  undefined8 local_1d0;
  undefined1 local_1c8;
  double local_1b8;
  longlong *local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double local_190;
  double local_188;
  longlong local_f0;
  double local_e8;
  longlong *local_e0;
  double local_d8;
  undefined1 local_c8 [16];
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  lVar10 = FUN_1447210f0();
  if ((lVar10 != 0) && (plVar13 = *(longlong **)(lVar10 + 0x168), plVar13 != (longlong *)0x0)) {
    lVar10 = FUN_1409035a4();
    if ((*(int *)(lVar10 + 0x38) <= *(int *)(plVar13[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar13[2] + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
        lVar10 + 0x30)) {
      if ((*(byte *)(param_2 + 0x28) & 4) == 0) {
        lVar10 = plVar13[6];
      }
      else {
        (**(code **)(*(longlong *)(param_1 + 0x390) + 0x18))(param_1 + 0x390,&local_198);
        uVar12 = (**(code **)(*(longlong *)(param_1 + 0x390) + 0x10))(param_1 + 0x390);
        lVar10 = (**(code **)(*plVar13 + 0x340))(plVar13,uVar12,&local_198,&DAT_14c8464e0);
      }
      if (lVar10 != 0) {
        local_b8 = *(double *)(param_2 + 0x18);
        local_c8 = *(undefined1 (*) [16])(param_2 + 8);
        if ((*(byte *)(param_2 + 0x28) & 2) != 0) {
          lVar11 = FUN_14479d2ce(param_2);
          if (lVar11 != 0) {
            uVar12 = FUN_145958f2a();
            plVar13 = (longlong *)FUN_144718840(lVar11,uVar12);
            if (plVar13 != (longlong *)0x0) {
              (**(code **)(*plVar13 + 0x28))(plVar13,&local_198,param_1);
              (**(code **)(*plVar13 + 0x18))(plVar13,&local_e8);
              if ((*(byte *)(param_2 + 0x28) & 2) == 0) {
                lVar11 = 0;
              }
              else {
                lVar11 = FUN_14479d2ce(param_2);
              }
              lVar11 = *(longlong *)(lVar11 + 0x1c8);
              if (lVar11 == 0) {
                uVar15 = 0;
                uVar17 = 0;
                dVar18 = 0.0;
                dVar20 = 0.0;
                dVar21 = 1.0;
              }
              else {
                auVar2 = *(undefined1 (*) [16])(lVar11 + 0x240);
                uVar15 = auVar2._0_4_;
                uVar17 = auVar2._4_4_;
                dVar18 = auVar2._8_8_;
                dVar20 = *(double *)(lVar11 + 0x250);
                dVar21 = *(double *)(lVar11 + 600);
              }
              dVar5 = (double)CONCAT44(uVar17,uVar15) + (double)CONCAT44(uVar17,uVar15);
              dVar6 = dVar18 + dVar18;
              dVar19 = dVar20 + dVar20;
              dVar22 = (double)CONCAT44(uVar17,uVar15) * dVar5;
              dVar8 = (double)CONCAT44(uVar17,uVar15) * dVar6;
              dVar4 = (double)CONCAT44(uVar17,uVar15) * dVar19;
              dVar5 = dVar5 * dVar21;
              dVar7 = local_188 * (dVar18 * dVar19 - dVar5) +
                      local_190 * (1.0 - (dVar20 * dVar19 + dVar22)) +
                      local_198 * (dVar21 * dVar19 + dVar8) + (double)local_e0;
              local_b8 = (dVar4 - dVar6 * dVar21) * local_198 +
                         (dVar5 + dVar18 * dVar19) * local_190 +
                         (1.0 - (dVar18 * dVar6 + dVar22)) * local_188 + local_d8;
              local_c8._8_4_ = SUB84(dVar7,0);
              local_c8._0_8_ =
                   local_188 * (dVar4 + dVar6 * dVar21) +
                   local_190 * (dVar8 - dVar21 * dVar19) +
                   local_198 * (1.0 - (dVar20 * dVar19 + dVar18 * dVar6)) + local_e8;
              local_c8._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
              goto LAB_147ea47ff;
            }
          }
          if ((*(byte *)(param_2 + 0x28) & 2) == 0) {
            lVar11 = 0;
          }
          else {
            lVar11 = FUN_14479d2ce(param_2);
          }
          lVar11 = *(longlong *)(lVar11 + 0x1c8);
          if (lVar11 == 0) {
            pauVar14 = (undefined1 (*) [16])&DAT_14c8464e0;
            uVar15 = (undefined4)DAT_14c8464f0;
            uVar17 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
          }
          else {
            uVar15 = (undefined4)*(undefined8 *)(lVar11 + 0x270);
            uVar17 = (undefined4)((ulonglong)*(undefined8 *)(lVar11 + 0x270) >> 0x20);
            pauVar14 = (undefined1 (*) [16])(lVar11 + 0x260);
          }
          local_b8 = (double)CONCAT44(uVar17,uVar15);
          local_c8 = *pauVar14;
        }
LAB_147ea47ff:
        local_f0 = *(longlong *)(param_2 + 0x20);
        if ((local_f0 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_147e6f964(&local_e8,lVar10,param_1,&local_f0);
        local_1a8 = 0;
        uStack_1a0 = 0;
        local_1b8 = local_e8;
        local_1b0 = local_e0;
        if (local_e0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
          UNLOCK();
        }
        local_1d0 = 0x7fefffffffffffff;
        local_1d8 = &local_1a8;
        local_1e0 = &local_1b8;
        local_1e8 = local_c8;
        local_1c8 = 1;
        FUN_147e6fd34(&local_198,param_1 + 0x390,lVar10,param_3);
        FUN_147ea4c0e(param_4,&local_198);
        FUN_147e70c18(&local_198);
        uVar9 = *(uint *)(param_2 + 0x28) >> 3 & 1;
        uVar3 = *(uint *)(param_4 + 0x54);
        *(uint *)(param_4 + 0x54) = uVar3 & 0xfffffffe | uVar9;
        *(uint *)(param_4 + 0x54) = uVar3 & 0xfffffffc | uVar9 | *(uint *)(param_2 + 0x28) >> 3 & 2;
        if ((*(byte *)(param_2 + 0x28) & 0x20) != 0) {
          fVar16 = (float)(**(code **)(**(longlong **)((longlong)local_e8 + 0x10) + 0x48))();
          local_1e8 = (undefined1 *)(double)*(float *)(param_2 + 0x34);
          FUN_147e70400(param_4 + 8,param_4 + 0x20,(double)fVar16,(double)*(float *)(param_2 + 0x30)
                       );
          *(ulonglong *)(param_4 + 0x48) = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
        }
        plVar13 = *(longlong **)(param_1 + 0x468);
        if (plVar13 != (longlong *)0x0) {
          (**(code **)(*plVar13 + 0x518))(plVar13,param_4);
        }
        if (local_e0 != (longlong *)0x0) {
          LOCK();
          plVar13 = local_e0 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
            (**(code **)*local_e0)(local_e0);
            LOCK();
            piVar1 = (int *)((longlong)local_e0 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_e0 + 0x10))(local_e0);
            }
          }
        }
        uVar12 = 1;
        goto LAB_147ea469e;
      }
    }
  }
  uVar12 = 0;
LAB_147ea469e:
  if ((local_b0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12;
}



// FUNCTION 147ea4b0e FUN_147ea4b0e body=171 status=ok
// SIG undefined FUN_147ea4b0e(void)

undefined4 *
FUN_147ea4b0e(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0x468);
  uVar4 = DAT_14cb1eff8;
  if (plVar3 != (longlong *)0x0) {
    local_38 = *param_4;
    local_30 = param_4[1];
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar3 + 0x490))(plVar3,&local_24,param_3,&local_38);
    uVar4 = local_24;
  }
  *param_2 = uVar4;
  plVar3 = (longlong *)param_4[1];
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147ea4bba FUN_147ea4bba body=51 status=ok
// SIG undefined FUN_147ea4bba(void)

void FUN_147ea4bba(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x468);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x498))(plVar1,param_1,0x140,DAT_14cb1effc,0);
  }
  return;
}



// FUNCTION 147ea4c0e FUN_147ea4c0e body=133 status=ok
// SIG undefined FUN_147ea4c0e(void)

longlong FUN_147ea4c0e(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  FUN_147eb4350();
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  if (param_1 != param_2) {
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_2 + 0x60) = 0;
    plVar2 = *(longlong **)(param_2 + 0x68);
    plVar3 = *(longlong **)(param_1 + 0x68);
    if (plVar2 != plVar3) {
      *(undefined8 *)(param_2 + 0x68) = 0;
      *(longlong **)(param_1 + 0x68) = plVar2;
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
    }
  }
  FUN_145e476ec(param_1 + 0x70,param_2 + 0x70);
  return param_1;
}



// FUNCTION 147ea4c94 FUN_147ea4c94 body=107 status=ok
// SIG undefined FUN_147ea4c94(void)

void FUN_147ea4c94(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*(longlong *)(param_1 + 0x390) + 0x18))(param_1 + 0x390,local_40);
  FUN_147ea45f2(param_1,param_2,local_40,param_3);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ea4d00 FUN_147ea4d00 body=200 status=ok
// SIG undefined FUN_147ea4d00(void)

undefined4 *
FUN_147ea4d00(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = DAT_14cb1eff8;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  (**(code **)(*param_1 + 0x7b8))(0,param_3,param_4,&local_38);
  if (local_38 != 0) {
    local_48 = local_38;
    local_40 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
      UNLOCK();
    }
    (**(code **)(*param_1 + 0x7b0))(param_1,param_2,param_3,&local_48);
  }
  plVar3 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ea4dfa FUN_147ea4dfa body=105 status=ok
// SIG undefined FUN_147ea4dfa(void)

void FUN_147ea4dfa(longlong *param_1,undefined4 param_2,longlong param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = *(undefined1 *)(param_3 + 2);
  local_28 = param_2;
  FUN_1447cd2ec(param_1 + 0x94);
  (**(code **)(*param_1 + 2000))(param_1,param_2,*(undefined1 *)(param_3 + 2));
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ea4e66 FUN_147ea4e66 body=298 status=ok
// SIG undefined FUN_147ea4e66(void)

undefined8 FUN_147ea4e66(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == 0) {
LAB_147ea4e81:
    uVar5 = 0;
    goto LAB_147ea4e83;
  }
  lVar4 = *(longlong *)(param_2 + 0x38);
  if (lVar4 != 0) {
    if (*(longlong **)(param_1 + 0x488) != (longlong *)0x0) {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x488) + 0x478))();
      if (cVar2 != '\0') goto LAB_147ea4eb5;
      lVar4 = *(longlong *)(param_2 + 0x38);
    }
    cVar2 = FUN_147ea2d5c(param_1,lVar4,local_28);
    if (cVar2 == '\0') goto LAB_147ea4e81;
  }
LAB_147ea4eb5:
  if (*(longlong *)(param_1 + 0x470) == 0) {
LAB_147ea4ef5:
    FUN_1446f470e(&local_30,L"BTComponent",1);
    lVar4 = FUN_147ea4f91(param_1,local_30);
    FUN_140b506a4(lVar4);
  }
  else {
    lVar3 = FUN_14113c790();
    lVar4 = *(longlong *)(param_1 + 0x470);
    if ((((lVar4 == 0) || (lVar3 == 0)) || (lVar1 = *(longlong *)(lVar4 + 0x10), lVar1 == 0)) ||
       ((*(int *)(lVar1 + 0x38) < *(int *)(lVar3 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
         lVar3 + 0x30)))) goto LAB_147ea4ef5;
  }
  if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar4);
  }
  *(longlong *)(param_1 + 0x470) = lVar4;
  FUN_147ea504a(lVar4,param_2);
  uVar5 = 1;
LAB_147ea4e83:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 147ea4f91 FUN_147ea4f91 body=183 status=ok
// SIG undefined FUN_147ea4f91(void)

undefined8 FUN_147ea4f91(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_14113c790();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
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



// FUNCTION 147ea504a FUN_147ea504a body=126 status=ok
// SIG undefined FUN_147ea504a(void)

void FUN_147ea504a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(int *)(param_1 + 0x170) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)
             (*(longlong *)(param_1 + 0x178) +
             (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x168) + 0x40) * 0x38);
  }
  if (((lVar1 == param_2) && (*(int *)(param_1 + 0x170) != 0)) &&
     ((*(byte *)(param_1 + 0x2da) & 0x10) != 0)) {
    return;
  }
  FUN_143846294(param_1,0);
  *(longlong *)(param_1 + 0x228) = param_2;
  *(undefined4 *)(param_1 + 0x230) = 1;
  *(byte *)(param_1 + 0x234) = *(byte *)(param_1 + 0x234) | 1;
  FUN_147ea69ca(param_1);
  return;
}



// FUNCTION 147ea50e0 FUN_147ea50e0 body=225 status=ok
// SIG undefined FUN_147ea50e0(void)

undefined4 FUN_147ea50e0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  short sVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = FUN_143845aae(param_2,param_3);
  lVar3 = param_3;
  if ((char)uVar2 != '\0') {
    do {
      if (0 < (longlong)*(int *)(lVar3 + 0x40)) {
        lVar7 = 0;
        uVar6 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar3 + 0x38) + lVar7) == DAT_14cb1e828) {
            sVar5 = (short)uVar6 + *(short *)(lVar3 + 0x4c);
            if (sVar5 != -1) {
              FUN_147ea3f44(param_2,CONCAT62((int6)(uVar6 >> 0x10),sVar5),param_1[0x7a]);
            }
            goto LAB_147ea515e;
          }
          uVar6 = (ulonglong)((int)uVar6 + 1);
          lVar7 = lVar7 + 0x18;
        } while ((longlong)*(int *)(lVar3 + 0x40) * 0x18 != lVar7);
      }
      plVar1 = (longlong *)(lVar3 + 0x30);
      lVar3 = *plVar1;
    } while (*plVar1 != 0);
LAB_147ea515e:
    local_40 = param_2;
    local_38 = param_3;
    uVar4 = FUN_14477b072(param_1,DAT_14cb1ea00);
    (**(code **)(*param_1 + 0x248))(param_1,uVar4,&local_40);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 147ea51c2 FUN_147ea51c2 body=183 status=ok
// SIG undefined FUN_147ea51c2(void)

undefined8 FUN_147ea51c2(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_14585daf2();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
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



// FUNCTION 147ea52ee FUN_147ea52ee body=19 status=ok
// SIG undefined FUN_147ea52ee(void)

undefined8 FUN_147ea52ee(longlong param_1,longlong param_2,undefined4 param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x480);
  if (lVar1 == 0) {
    return 0;
  }
  if ((*(int *)(param_2 + 0x84) != 0) && (*(int *)(param_2 + 0x88) < 2)) {
    return 0;
  }
  *(undefined4 *)(param_2 + 0x60) = param_3;
  FUN_147e9e77e(param_2,lVar1);
  if ((param_4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_4);
  }
  *(longlong *)(param_2 + 0x40) = param_4;
  uVar2 = FUN_147e9e61a(lVar1,param_2,5);
  return uVar2;
}



// FUNCTION 147ea5302 FUN_147ea5302 body=75 status=ok
// SIG undefined FUN_147ea5302(void)

undefined8 FUN_147ea5302(longlong param_1,undefined8 param_2)

{
  char cVar1;
  wchar_t *pwVar2;
  
  if (*(longlong **)(param_1 + 0x470) == (longlong *)0x0) {
    pwVar2 = L"/Engine/EngineResources/AICON-Red.AICON-Red";
  }
  else {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x470) + 0x4b0))();
    pwVar2 = L"/Engine/EngineResources/AICON-Red.AICON-Red";
    if (cVar1 != '\0') {
      pwVar2 = L"/Engine/EngineResources/AICON-Green.AICON-Green";
    }
  }
  FUN_140056680(param_2,pwVar2);
  return param_2;
}



// FUNCTION 147ea534e FUN_147ea534e body=119 status=ok
// SIG undefined FUN_147ea534e(void)

void FUN_147ea534e(longlong param_1,uint param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x470) != 0) {
    uVar1 = FUN_147ea53c6();
    lVar2 = 0x10;
    if ((((param_2 & 0xffff) >> (uVar1 & 0x1f) & 1) != 0) ||
       (lVar2 = 0x18, (1 << ((byte)uVar1 & 0x1f) & param_3 & 0xffff) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000147ea53b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x470) + 0x110) + lVar2))
                (*(longlong *)(param_1 + 0x470) + 0x110,1);
      return;
    }
  }
  return;
}



// FUNCTION 147ea53c6 FUN_147ea53c6 body=73 status=ok
// SIG undefined FUN_147ea53c6(void)

int FUN_147ea53c6(void)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)FUN_145b6095a();
  lVar3 = plVar2[0x22];
  if (lVar3 == 0) {
    (**(code **)(*plVar2 + 1000))(plVar2);
    lVar3 = plVar2[0x22];
  }
  iVar1 = *(int *)(lVar3 + 0x28);
  if (iVar1 == -1 && (*(uint *)(lVar3 + 0x30) & 1) == 0) {
    iVar1 = CONCAT31((int3)((uint)iVar1 >> 8),*(undefined1 *)(lVar3 + 0x2c));
  }
  return iVar1;
}



// FUNCTION 147ea541b FUN_147ea541b body=291 status=ok
// SIG undefined FUN_147ea541b(void)

bool FUN_147ea541b(double *param_1,double *param_2,float param_3,float param_4,float param_5,
                  float param_6,double *param_7)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  if (ABS(param_4) <= 1e-08) {
    dVar4 = *param_1;
    dVar2 = param_1[1];
    dVar3 = param_1[2];
  }
  else {
    dVar2 = (double)param_4;
    dVar3 = param_1[2] - param_2[2] * dVar2;
    dVar4 = *param_1 - dVar2 * *param_2;
    dVar2 = param_1[1] - param_2[1] * dVar2;
  }
  dVar3 = param_7[2] - dVar3;
  dVar4 = *param_7 - dVar4;
  dVar2 = param_7[1] - dVar2;
  dVar5 = dVar3 * dVar3 + dVar4 * dVar4 + dVar2 * dVar2;
  bVar1 = false;
  if (((dVar5 <= (double)param_6) && ((double)param_5 <= dVar5)) &&
     (bVar1 = true, 9.99999993922529e-09 <= dVar5)) {
    dVar5 = 1.0 / SQRT(dVar5);
    bVar1 = (double)param_3 <
            dVar3 * dVar5 * param_2[2] + dVar4 * dVar5 * *param_2 + dVar2 * dVar5 * param_2[1];
  }
  return bVar1;
}



// FUNCTION 147ea553e FUN_147ea553e body=71 status=ok
// SIG undefined FUN_147ea553e(void)

undefined1 * FUN_147ea553e(undefined1 *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    uVar1 = FUN_145a74f10();
    plVar2 = (longlong *)FUN_144718840(param_2,uVar1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2,param_1);
      return param_1;
    }
  }
  *param_1 = DAT_14cb1f000;
  return param_1;
}



// FUNCTION 147ea5586 FUN_147ea5586 body=83 status=ok
// SIG undefined FUN_147ea5586(void)

undefined8 FUN_147ea5586(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_145a74f10();
    plVar2 = (longlong *)FUN_144718840(param_1,uVar1);
    if (param_2 != 0 && plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147ea55d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*plVar2 + 0x20))(plVar2,param_2,*(code **)(*plVar2 + 0x20));
      return uVar1;
    }
  }
  return 1;
}



// FUNCTION 147ea567c FUN_147ea567c body=196 status=ok
// SIG undefined FUN_147ea567c(void)

undefined8 FUN_147ea567c(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_3 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  FUN_144a5c54a(local_b8,param_2);
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
  local_a8 = param_3;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ea575c FUN_147ea575c body=199 status=ok
// SIG undefined FUN_147ea575c(void)

void FUN_147ea575c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar2 = FUN_144a7757c();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         == lVar2 + 0x30)) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
      plVar3 = (longlong *)FUN_140fe13cc(*(longlong *)(lVar1 + 0x1f0),0);
      if (plVar3 != (longlong *)0x0) {
        FUN_140056680(local_40,
                      L"log lognavigation verbose | log logpathfollowing verbose | log LogCharacter verbose | log LogBehaviorTree verbose | log LogPawnAction verbose|"
                     );
        (**(code **)(*plVar3 + 0xd40))(plVar3,local_30,local_40,1);
        if (local_30[0] != 0) {
          FUN_1400020a8();
        }
        if (local_40[0] != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ea5824 FUN_147ea5824 body=482 status=ok
// SIG undefined FUN_147ea5824(void)

undefined4 * FUN_147ea5824(undefined4 *param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined4 *local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x36) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0x800000000;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  if (param_3 != 0) {
    local_70 = (longlong *)(param_1 + 2);
    local_68 = param_1 + 6;
    iVar5 = 0;
    lVar7 = param_3;
    do {
      iVar5 = iVar5 + 1;
      lVar7 = *(longlong *)(lVar7 + 0x30);
    } while (lVar7 != 0);
    FUN_147eb5e98(local_70,iVar5);
    local_60 = param_2 + 7;
    do {
      local_50 = 0;
      FUN_14485c47a(&local_50,param_3);
      iVar5 = param_1[4];
      param_1[4] = iVar5 + 1U;
      if ((uint)param_1[5] < iVar5 + 1U) {
        FUN_147eb5ef2(local_70,iVar5);
      }
      uVar2 = local_50;
      *(undefined8 *)(*local_70 + (longlong)iVar5 * 8) = local_50;
      if ((int)param_2[9] == 0) {
LAB_147ea597e:
        iVar8 = -1;
        iVar5 = -1;
      }
      else {
        plVar6 = (longlong *)param_2[8];
        if ((longlong *)param_2[8] == (longlong *)0x0) {
          plVar6 = local_60;
        }
        iVar5 = *(int *)((longlong)plVar6 +
                        (longlong)
                        (int)((int)param_2[9] - 1U &
                             ((uint)((ulonglong)local_50 >> 0x20) ^ (uint)local_50)) * 4);
        do {
          iVar8 = iVar5;
          if (iVar8 == -1) goto LAB_147ea597e;
          iVar5 = *(int *)(*param_2 + 0x10 + (longlong)iVar8 * 0x18);
          local_50 = *(undefined8 *)(*param_2 + (longlong)iVar8 * 0x18);
          local_58 = uVar2;
          cVar3 = FUN_147eb47ee(&local_50,&local_58);
        } while (cVar3 == '\0');
      }
      iVar1 = param_1[0x38];
      lVar7 = (longlong)iVar1;
      param_1[0x38] = iVar1 + 1U;
      if ((uint)param_1[0x39] < iVar1 + 1U) {
        FUN_147eb5f78(local_68,iVar1);
      }
      puVar4 = *(undefined4 **)(param_1 + 0x36);
      if (*(undefined4 **)(param_1 + 0x36) == (undefined4 *)0x0) {
        puVar4 = local_68;
      }
      *(longlong **)(puVar4 + lVar7 * 6) = param_2;
      *(undefined8 *)(puVar4 + lVar7 * 6 + 2) = uVar2;
      puVar4[lVar7 * 6 + 4] = iVar8;
      puVar4[lVar7 * 6 + 5] = iVar5;
      param_3 = *(longlong *)(param_3 + 0x30);
    } while (param_3 != 0);
  }
  FUN_147ea5a08(param_1);
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147ea5a08 FUN_147ea5a08 body=88 status=ok
// SIG undefined FUN_147ea5a08(void)

void FUN_147ea5a08(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  bool bVar5;
  
  piVar3 = param_1 + 6;
  if (*(int **)(param_1 + 0x36) != (int *)0x0) {
    piVar3 = *(int **)(param_1 + 0x36);
  }
  iVar2 = *param_1;
  lVar4 = (longlong)iVar2;
  if (piVar3[lVar4 * 6 + 4] == -1) {
    iVar1 = param_1[0x38] + -1;
    if (param_1[0x38] + -1 < iVar2) {
      iVar1 = iVar2;
    }
    piVar3 = piVar3 + lVar4 * 6 + 10;
    lVar4 = iVar1 - lVar4;
    do {
      iVar2 = iVar2 + 1;
      bVar5 = lVar4 == 0;
      lVar4 = lVar4 + -1;
      if (bVar5) {
        return;
      }
      *param_1 = iVar2;
      iVar1 = *piVar3;
      piVar3 = piVar3 + 6;
    } while (iVar1 == -1);
  }
  return;
}



// FUNCTION 147ea5a60 FUN_147ea5a60 body=227 status=ok
// SIG undefined FUN_147ea5a60(void)

void FUN_147ea5a60(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = 0;
  FUN_14485c47a(&local_60,param_3);
  local_68 = 0;
  FUN_14485c47a(&local_68,param_2);
  FUN_147ea5b44(param_1 + 0x140,local_68,local_60);
  local_70 = 0;
  FUN_14485c47a(&local_70,param_3);
  local_78 = 0;
  FUN_14485c47a(&local_78,param_2);
  local_58 = &local_78;
  local_50 = &local_70;
  FUN_147eb60ce(param_1 + 0x140,local_44);
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FUN_147ea5a60(param_1,*(longlong *)(param_2 + 0x30),param_3);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ea5b44 FUN_147ea5b44 body=290 status=ok
// SIG undefined FUN_147ea5b44(void)

void FUN_147ea5b44(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = param_3;
  if ((int)param_1[9] != 0) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 +
                    (longlong)
                    (int)((int)param_1[9] - 1U &
                         ((uint)((ulonglong)param_2 >> 0x20) ^ (uint)param_2)) * 4);
    do {
      if (iVar4 == -1) goto LAB_147ea5be8;
      lVar2 = (longlong)iVar4;
      iVar4 = *(int *)(*param_1 + 0x10 + lVar2 * 0x18);
      local_48 = *(undefined8 *)(*param_1 + lVar2 * 0x18);
      local_50 = param_2;
      cVar1 = FUN_147eb47ee(&local_48,&local_50);
    } while (cVar1 == '\0');
    cVar1 = FUN_147eb6098(*param_1 + lVar2 * 0x18 + 8,&local_58);
    if (cVar1 == '\0') {
      do {
        if (iVar4 == -1) break;
        lVar2 = (longlong)iVar4;
        iVar4 = *(int *)(*param_1 + 0x10 + lVar2 * 0x18);
        local_48 = *(undefined8 *)(*param_1 + lVar2 * 0x18);
        local_50 = param_2;
        cVar1 = FUN_147eb47ee(&local_48,&local_50);
      } while ((cVar1 == '\0') ||
              (cVar1 = FUN_147eb6098(*param_1 + lVar2 * 0x18 + 8,&local_58), cVar1 == '\0'));
    }
  }
LAB_147ea5be8:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ea5c68 FUN_147ea5c68 body=215 status=ok
// SIG undefined FUN_147ea5c68(void)

void FUN_147ea5c68(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  FUN_14485c47a(&local_48,param_3);
  local_50 = 0;
  FUN_14485c47a(&local_50,param_2);
  FUN_147ea5b44(param_1 + 0x140,local_50,local_48);
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FUN_147ea5c68(param_1,*(longlong *)(param_2 + 0x30),param_3);
  }
  local_58 = 0;
  FUN_14485c47a(&local_58,param_3);
  local_60 = 0;
  FUN_14485c47a(&local_60,param_2);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_147ea5d40(param_1 + 0x140);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88,local_60,local_58);
}



// FUNCTION 147ea5d40 FUN_147ea5d40 body=314 status=ok
// SIG undefined FUN_147ea5d40(void)

void FUN_147ea5d40(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = param_3;
  if ((int)param_1[9] != 0) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar4 +
                    (longlong)
                    (int)((int)param_1[9] - 1U &
                         ((uint)((ulonglong)param_2 >> 0x20) ^ (uint)param_2)) * 4);
    do {
      iVar5 = iVar1;
      if (iVar5 == -1) goto LAB_147ea5e53;
      lVar3 = (longlong)iVar5;
      iVar1 = *(int *)(*param_1 + 0x10 + lVar3 * 0x18);
      local_50 = *(undefined8 *)(*param_1 + lVar3 * 0x18);
      local_58 = param_2;
      cVar2 = FUN_147eb47ee(&local_50,&local_58);
    } while (cVar2 == '\0');
    cVar2 = FUN_147eb6098(*param_1 + lVar3 * 0x18 + 8,&local_60);
    if (cVar2 == '\0') {
      do {
        do {
          iVar5 = iVar1;
          if (iVar5 == -1) goto LAB_147ea5e53;
          lVar3 = (longlong)iVar5;
          iVar1 = *(int *)(*param_1 + 0x10 + lVar3 * 0x18);
          local_50 = *(undefined8 *)(*param_1 + lVar3 * 0x18);
          local_58 = param_2;
          cVar2 = FUN_147eb47ee(&local_50,&local_58);
        } while (cVar2 == '\0');
        cVar2 = FUN_147eb6098(*param_1 + lVar3 * 0x18 + 8,&local_60);
      } while (cVar2 == '\0');
    }
    FUN_147eb6470(param_1,iVar5);
  }
LAB_147ea5e53:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ea5e7c FUN_147ea5e7c body=36 status=ok
// SIG undefined FUN_147ea5e7c(void)

void FUN_147ea5e7c(longlong *param_1,byte param_2)

{
  if (*(char *)((longlong)param_1 + 0x12) == '\x01') {
    *(char *)(*param_1 + (ulonglong)param_2) = *(char *)(*param_1 + (ulonglong)param_2) + '\x01';
  }
  *(ushort *)(param_1 + 2) = *(ushort *)(param_1 + 2) | (ushort)(1 << (param_2 & 0x1f));
  return;
}



// FUNCTION 147ea5ea0 FUN_147ea5ea0 body=48 status=ok
// SIG undefined FUN_147ea5ea0(void)

void FUN_147ea5ea0(longlong *param_1,byte param_2)

{
  char *pcVar1;
  
  if ((*(char *)((longlong)param_1 + 0x12) != '\x01') ||
     (pcVar1 = (char *)(*param_1 + (ulonglong)param_2), *pcVar1 = *pcVar1 + -1,
     *(char *)(*param_1 + (ulonglong)param_2) == '\0')) {
    *(ushort *)(param_1 + 2) =
         *(ushort *)(param_1 + 2) &
         ((ushort)(-2 << (param_2 & 0x1f)) | (ushort)(0xfffffffe >> 0x20 - (param_2 & 0x1f)));
  }
  return;
}



// FUNCTION 147ea5ed0 FUN_147ea5ed0 body=91 status=ok
// SIG undefined FUN_147ea5ed0(void)

void FUN_147ea5ed0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_144893a1c(param_1,0);
  }
  if (*(char *)((longlong)param_1 + 0x12) == '\x01') {
    iVar1 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar1 + 0x10;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < 0x10) {
      FUN_1447403be(param_1,iVar1);
    }
    lVar2 = *param_1;
    *(undefined8 *)(lVar2 + iVar1) = 0;
    ((undefined8 *)(lVar2 + iVar1))[1] = 0;
  }
  return;
}



// FUNCTION 147ea5f2c FUN_147ea5f2c body=329 status=ok
// SIG undefined FUN_147ea5f2c(void)

undefined8 * FUN_147ea5f2c(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  int local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb1ead0) {
    FUN_144b3d300(&DAT_14cb1ead0);
    if (DAT_14cb1ead0 == -1) {
      DAT_14cb1eac8 = FUN_147e9a7a4();
      _Init_thread_footer(&DAT_14cb1ead0);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  lVar3 = 0;
  do {
    if ((*(ushort *)(param_1 + 0x10) != 0) &&
       ((*(ushort *)(param_1 + 0x10) >> ((uint)lVar3 & 0x1f) & 1) != 0)) {
      FUN_1401cfad2(DAT_14cb1eac8,&local_68,lVar3);
      puVar2 = &DAT_149dfb77a;
      if (local_60 != 0) {
        puVar2 = local_68;
      }
      FUN_140002266(&local_58,L"%s, ",puVar2);
      iVar1 = local_50 + -1;
      if (local_50 == 0) {
        iVar1 = 0;
      }
      FUN_1400020e8(param_2,local_58,iVar1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      if (local_68 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 5);
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ea6086 FUN_147ea6086 body=311 status=ok
// SIG undefined FUN_147ea6086(void)

void FUN_147ea6086(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  int local_28;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_147ea61be(param_1,local_20,local_24,local_28 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ea61be FUN_147ea61be body=337 status=ok
// SIG undefined FUN_147ea61be(void)

void FUN_147ea61be(longlong param_1,longlong param_2,float param_3,char param_4)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  double *pdVar5;
  uint uVar6;
  undefined1 auStack_68 [32];
  double local_48;
  longlong local_40;
  longlong *local_38;
  double *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_2;
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x290) != *(int *)(param_1 + 700)) {
      uVar1 = (uint)((ulonglong)param_2 >> 0x10);
      uVar6 = (uint)param_2 & 0xffff;
      lVar4 = param_1 + 0x2c0;
      if (*(longlong *)(param_1 + 0x2c8) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x2c8);
      }
      iVar2 = *(int *)(lVar4 + (ulonglong)
                               (*(int *)(param_1 + 0x2d0) - 1U &
                               (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar6) +
                               (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar6 >> 4)) * 4);
      if (iVar2 != -1) {
        do {
          plVar3 = (longlong *)(*(longlong *)(param_1 + 0x288) + (longlong)iVar2 * 0x18);
          if (*plVar3 == param_2) goto LAB_147ea61fb;
          iVar2 = (int)plVar3[2];
        } while (iVar2 != -1);
      }
    }
    plVar3 = (longlong *)0x0;
LAB_147ea61fb:
    pdVar5 = (double *)(plVar3 + 1);
    if (plVar3 == (longlong *)0x0) {
      pdVar5 = (double *)0x0;
    }
    if ((pdVar5 == (double *)0x0) || (param_4 == '\0')) {
      lVar4 = *(longlong *)(param_1 + 0xb0);
      if (lVar4 == 0) {
        lVar4 = FUN_1448abda6();
      }
      local_48 = (double)param_3 + *(double *)(lVar4 + 0x6d0);
      local_30 = &local_48;
      local_38 = &local_40;
      FUN_147eb75e4((longlong *)(param_1 + 0x288),local_24);
    }
    else {
      *pdVar5 = (double)param_3 + *pdVar5;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ea6310 FUN_147ea6310 body=165 status=ok
// SIG undefined FUN_147ea6310(void)

void FUN_147ea6310(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
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
  uVar1 = FUN_147ea63b6(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ea63b6 FUN_147ea63b6 body=163 status=ok
// SIG undefined FUN_147ea63b6(void)

longlong FUN_147ea63b6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x290) != *(int *)(param_1 + 700)) {
    uVar2 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    lVar3 = param_1 + 0x2c0;
    if (*(longlong *)(param_1 + 0x2c8) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x2c8);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x2d0) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) +
                             ((int)param_2 << 0x10 | (uint)(ushort)param_2) +
                             (uVar2 << 0x13 | uVar2) + (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x288) + (longlong)iVar4 * 0x18);
        if (*plVar1 == param_2) {
          if (plVar1 == (longlong *)0x0) {
            return 0;
          }
          return plVar1[1];
        }
        iVar4 = (int)plVar1[2];
      } while (iVar4 != -1);
    }
  }
  return 0;
}



// FUNCTION 147ea645a FUN_147ea645a body=242 status=ok
// SIG undefined FUN_147ea645a(void)

void FUN_147ea645a(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
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
  (**(code **)(*param_1 + 0x4e0))(param_1,local_20,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ea6550 FUN_147ea6550 body=163 status=ok
// SIG undefined FUN_147ea6550(void)

void FUN_147ea6550(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0xb0);
  if (lVar2 == 0) {
    lVar2 = FUN_1448abda6(param_1);
  }
  lVar2 = FUN_147ea65f4(lVar2);
  if (lVar2 != 0) {
    FUN_147ea663c(lVar2,param_1);
  }
  if ((*(byte *)(param_1 + 0x211) & 8) == 0) {
    FUN_147ea66a4(param_1);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x220);
    *(uint *)(param_1 + 0x220) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x224) < iVar1 + 1U) {
      FUN_147eb653a((longlong *)(param_1 + 0x218),iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x218);
    lVar3 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar2 + lVar3) = 0;
    *(undefined4 *)(lVar2 + 8 + lVar3) = 0;
    *(undefined2 *)(lVar2 + 0xc + lVar3) = 0x800;
  }
  FUN_140674fee(param_1);
  return;
}



// FUNCTION 147ea65f4 FUN_147ea65f4 body=71 status=ok
// SIG undefined FUN_147ea65f4(void)

undefined8 FUN_147ea65f4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_1 != 0) && (lVar1 = *(longlong *)(param_1 + 0x180), lVar1 != 0)) {
    lVar2 = FUN_1413f6fa8();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return *(undefined8 *)(lVar1 + 0x108);
    }
  }
  return 0;
}



// FUNCTION 147ea663c FUN_147ea663c body=103 status=ok
// SIG undefined FUN_147ea663c(void)

void FUN_147ea663c(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  local_18 = &local_20;
  FUN_147eb834a(param_1 + 0x40);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ea66a4 FUN_147ea66a4 body=417 status=ok
// SIG undefined FUN_147ea66a4(void)

void FUN_147ea66a4(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  undefined8 local_98 [2];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(int *)(param_1 + 0x170) != 0) && (FUN_143846294(param_1,1), *(int *)(param_1 + 0x170) != 0)
     ) {
    iVar2 = *(int *)(param_1 + 0x174);
    FUN_145cde789(*(undefined8 *)(param_1 + 0x168));
    *(undefined4 *)(param_1 + 0x170) = 0;
    if ((iVar2 < 0) && (*(int *)(param_1 + 0x174) != 0)) {
      FUN_147eb65c0(param_1 + 0x168);
    }
  }
  local_50 = 0;
  local_48 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  iVar2 = *(int *)(param_1 + 0x180);
  if (0 < iVar2) {
    lVar4 = 0x20;
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x178);
      if (*(int *)(lVar1 + 8 + lVar4) != 0) {
        FUN_1447a122a(&local_68,lVar4 + lVar1);
        local_58 = (undefined1)lVar3;
        local_98[0] = *(undefined8 *)(lVar1 + -0x18 + lVar4);
        FUN_147ea718a(local_98,param_1,0);
        iVar2 = *(int *)(param_1 + 0x180);
      }
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0x38;
    } while (lVar3 < iVar2);
  }
  iVar2 = *(int *)(param_1 + 0x184);
  FUN_145cde89a(*(undefined8 *)(param_1 + 0x178));
  *(undefined4 *)(param_1 + 0x180) = 0;
  if ((iVar2 < 0) && (*(int *)(param_1 + 0x184) != 0)) {
    FUN_147eb686c((longlong *)(param_1 + 0x178));
  }
  if (*(int *)(param_1 + 0x194) < 0) {
    *(undefined4 *)(param_1 + 400) = 0;
    FUN_147eb689c(param_1 + 0x188);
  }
  else {
    *(undefined4 *)(param_1 + 400) = 0;
  }
  FUN_143848b6a(local_98);
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ea6846 FUN_147ea6846 body=44 status=ok
// SIG undefined FUN_147ea6846(void)

void FUN_147ea6846(undefined8 param_1,undefined4 param_2)

{
  if ((char)param_2 != '\0') {
    FUN_147ea6872(param_1,0);
  }
  FUN_1407a7646(param_1,param_2);
  return;
}



// FUNCTION 147ea6872 FUN_147ea6872 body=194 status=ok
// SIG undefined FUN_147ea6872(void)

void FUN_147ea6872(longlong *param_1,float param_2)

{
  float fVar1;
  char cVar2;
  longlong lVar3;
  float fVar4;
  
  if ((*(byte *)((longlong)param_1 + 0x2da) & 4) != 0) {
    param_2 = 0.0;
  }
  *(float *)((longlong)param_1 + 0x2ec) = param_2;
  cVar2 = (**(code **)(*param_1 + 0x3b8))(param_1);
  if ((param_2 != 3.4028235e+38) || (NAN(param_2))) {
    if (cVar2 == '\0') {
      (**(code **)(*param_1 + 0x3b0))(param_1,1);
    }
    fVar1 = *(float *)((longlong)param_1 + 0x2ec);
    fVar4 = fVar1;
    if (((char)param_1[0x5d] == '\0') && (fVar4 = 0.0001, 0.0001 <= fVar1)) {
      fVar4 = fVar1;
    }
    FUN_1479b780a(param_1,fVar4);
  }
  else if (cVar2 != '\0') {
    (**(code **)(*param_1 + 0x3b0))(param_1,0);
  }
  lVar3 = param_1[0x16];
  if ((lVar3 == 0) && (lVar3 = FUN_1448abda6(param_1), lVar3 == 0)) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar3 + 0x6d0);
  }
  param_1[0x5f] = lVar3;
  return;
}



// FUNCTION 147ea6934 FUN_147ea6934 body=87 status=ok
// SIG undefined FUN_147ea6934(void)

void FUN_147ea6934(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x3b8))();
  FUN_14493be0a(param_1,param_2);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x3b8))(param_1);
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 0x5d) = 0;
      FUN_147ea6872(param_1,0);
      return;
    }
  }
  return;
}



// FUNCTION 147ea69ca FUN_147ea69ca body=311 status=ok
// SIG undefined FUN_147ea69ca(void)

void FUN_147ea69ca(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1 + 0x211) & 2) == 0) {
    FUN_143846294(param_1,0);
    if ((*(byte *)(param_1 + 0x2da) & 2) == 0) {
      FUN_147ea66a4(param_1);
      *(byte *)(param_1 + 0x2da) =
           *(byte *)(param_1 + 0x2da) & 0xee | *(int *)(param_1 + 0x230) == 1 | 0x10;
      lVar2 = *(longlong *)(param_1 + 0xb0);
      if (lVar2 == 0) {
        lVar2 = FUN_1448abda6(param_1);
      }
      lVar2 = FUN_147ea65f4(lVar2);
      if (lVar2 != 0) {
        local_28 = param_1;
        if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(param_1);
        }
        FUN_147eb8206(lVar2 + 0x40,&local_28);
      }
      FUN_1438465cc(param_1,*(undefined8 *)(param_1 + 0x228));
      *(byte *)(param_1 + 0x234) = *(byte *)(param_1 + 0x234) & 0xfe;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x220);
    *(uint *)(param_1 + 0x220) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x224) < iVar1 + 1U) {
      FUN_147eb653a((longlong *)(param_1 + 0x218),iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x218);
    lVar3 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar2 + lVar3) = 0;
    *(undefined4 *)(lVar2 + 8 + lVar3) = 0;
    *(undefined2 *)(lVar2 + 0xc + lVar3) = 0x200;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ea6b08 FUN_147ea6b08 body=111 status=ok
// SIG undefined FUN_147ea6b08(void)

void FUN_147ea6b08(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x2da) & 0x10) == 0) {
    if (*(longlong *)(param_1 + 0x228) != 0) {
      *(byte *)(param_1 + 0x234) = *(byte *)(param_1 + 0x234) | 1;
      FUN_147ea69ca();
      return;
    }
  }
  else if ((*(byte *)(param_1 + 0x2da) & 8) == 0) {
    if (*(int *)(param_1 + 0x170) != 0) {
      FUN_143846b9a(param_1,**(undefined8 **)(param_1 + 0x168),0,**(undefined8 **)(param_1 + 0x168),
                    0xffffffff,2,0);
    }
  }
  else {
    *(byte *)(param_1 + 0x234) = *(byte *)(param_1 + 0x234) | 1;
  }
  return;
}



// FUNCTION 147ea6b9c FUN_147ea6b9c body=208 status=ok
// SIG undefined FUN_147ea6b9c(void)

int FUN_147ea6b9c(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = FUN_147ecdd7e();
  if ((*(byte *)(param_1 + 0x2da) & 0x20) != 0) {
    *(byte *)(param_1 + 0x2da) = *(byte *)(param_1 + 0x2da) & 0xdf;
    FUN_147ea6872(param_1,0);
    if (iVar2 == 1) {
      lVar1 = *(longlong *)(param_1 + 0x118);
      if (lVar1 != 0) {
        *(byte *)(lVar1 + 0x210) = *(byte *)(lVar1 + 0x210) & 0xfe;
        *(undefined4 *)(lVar1 + 0x208) = 0;
        if (*(int *)(lVar1 + 0x20c) != 0) {
          FUN_147eb94f2(lVar1 + 0x200);
        }
      }
    }
    else if (iVar2 == 0) {
      if (*(longlong *)(param_1 + 0x118) != 0) {
        FUN_147ea6c6c();
      }
      if ((*(longlong *)(param_1 + 0x1f0) != 0) ||
         (((*(longlong *)(param_1 + 0x200) != 0 | (byte)*(uint *)(param_1 + 0x208)) &
          (*(uint *)(param_1 + 0x208) & 3) == 1) != 0)) {
        FUN_147ea6872(param_1,0);
        *(byte *)(param_1 + 0x2da) = *(byte *)(param_1 + 0x2da) | 4;
      }
    }
  }
  return iVar2;
}



// FUNCTION 147ea6c6c FUN_147ea6c6c body=108 status=ok
// SIG undefined FUN_147ea6c6c(void)

void FUN_147ea6c6c(longlong param_1)

{
  longlong lVar1;
  
  *(byte *)(param_1 + 0x210) = *(byte *)(param_1 + 0x210) & 0xfe;
  if (0 < *(int *)(param_1 + 0x208)) {
    lVar1 = 0;
    do {
      FUN_147ead268(param_1,*(undefined2 *)(*(longlong *)(param_1 + 0x200) + lVar1 * 2));
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 0x208));
  }
  *(undefined4 *)(param_1 + 0x208) = 0;
  if (*(int *)(param_1 + 0x20c) == 0) {
    return;
  }
  FUN_147eb94f2(param_1 + 0x200);
  return;
}



// FUNCTION 147ea6cfe FUN_147ea6cfe body=163 status=ok
// SIG undefined FUN_147ea6cfe(void)

void FUN_147ea6cfe(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_68 [36];
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (0 < *(int *)(param_1 + 0x28)) {
    iVar3 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x20);
      lVar4 = (longlong)iVar3 * 0x10;
      lVar2 = *(longlong *)(lVar1 + lVar4);
      local_44 = iVar3;
      (*(code *)*param_2)(param_2[1],lVar1 + lVar4,&local_44);
      iVar3 = (iVar3 - (uint)(*(longlong *)(lVar1 + lVar4) != lVar2 ||
                             (*(int *)(param_1 + 0x28) <= iVar3 || iVar3 < 0))) + 1;
    } while (iVar3 < *(int *)(param_1 + 0x28));
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


