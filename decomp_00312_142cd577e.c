// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142cd577e FUN_142cd577e body=158 status=ok
// SIG undefined FUN_142cd577e(void)

int FUN_142cd577e(undefined8 *param_1)

{
  undefined8 uVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_1[2];
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_1 + 1);
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_1;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_144aae0d2(&local_40,local_38);
    memcpy(local_40,_Src,lVar2 << 3);
  }
  FUN_142cc6ac8(uVar1,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return *(int *)(param_1[2] + 0x58) << 4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd581e FUN_142cd581e body=118 status=ok
// SIG undefined FUN_142cd581e(void)

undefined8 * FUN_142cd581e(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a240dc0;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_144aae0d2(puVar1,iVar2);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 3);
  }
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 142cd589a FUN_142cd589a body=12 status=ok
// SIG undefined FUN_142cd589a(void)

void FUN_142cd589a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142cd58a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142cd58a6 FUN_142cd58a6 body=57 status=ok
// SIG undefined FUN_142cd58a6(void)

undefined8 * FUN_142cd58a6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a240dc0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cd58e0 FUN_142cd58e0 body=155 status=ok
// SIG undefined FUN_142cd58e0(void)

undefined4 FUN_142cd58e0(undefined8 *param_1)

{
  undefined8 uVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_1[2];
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_1 + 1);
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_1;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_144aae0d2(&local_40,local_38);
    memcpy(local_40,_Src,lVar2 << 3);
  }
  FUN_142cc6ac8(uVar1,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return *(undefined4 *)(param_1[2] + 0x28);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd597c FUN_142cd597c body=118 status=ok
// SIG undefined FUN_142cd597c(void)

undefined8 * FUN_142cd597c(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a240de0;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_144aae0d2(puVar1,iVar2);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 3);
  }
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 142cd59f8 FUN_142cd59f8 body=12 status=ok
// SIG undefined FUN_142cd59f8(void)

void FUN_142cd59f8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142cd5a01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142cd5a04 FUN_142cd5a04 body=57 status=ok
// SIG undefined FUN_142cd5a04(void)

undefined8 * FUN_142cd5a04(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a240de0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cd5a3e FUN_142cd5a3e body=156 status=ok
// SIG undefined FUN_142cd5a3e(void)

undefined8 FUN_142cd5a3e(undefined8 *param_1)

{
  undefined8 uVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_1[2];
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_1 + 1);
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_1;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_144aae0d2(&local_40,local_38);
    memcpy(local_40,_Src,lVar2 << 3);
  }
  FUN_142cc6ac8(uVar1,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return *(undefined8 *)(param_1[2] + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd5adc FUN_142cd5adc body=118 status=ok
// SIG undefined FUN_142cd5adc(void)

undefined8 * FUN_142cd5adc(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a240e00;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_144aae0d2(puVar1,iVar2);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 3);
  }
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 142cd5b58 FUN_142cd5b58 body=12 status=ok
// SIG undefined FUN_142cd5b58(void)

void FUN_142cd5b58(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142cd5b61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142cd5b64 FUN_142cd5b64 body=57 status=ok
// SIG undefined FUN_142cd5b64(void)

undefined8 * FUN_142cd5b64(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a240e00;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cd5b9e FUN_142cd5b9e body=158 status=ok
// SIG undefined FUN_142cd5b9e(void)

int FUN_142cd5b9e(undefined8 *param_1)

{
  undefined8 uVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_1[2];
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_1 + 1);
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_1;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_144aae0d2(&local_40,local_38);
    memcpy(local_40,_Src,lVar2 << 3);
  }
  FUN_142cc6ac8(uVar1,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return *(int *)(param_1[2] + 0x28) << 2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd5c3e FUN_142cd5c3e body=118 status=ok
// SIG undefined FUN_142cd5c3e(void)

undefined8 * FUN_142cd5c3e(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a240e20;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_144aae0d2(puVar1,iVar2);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 3);
  }
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 142cd5cba FUN_142cd5cba body=12 status=ok
// SIG undefined FUN_142cd5cba(void)

void FUN_142cd5cba(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142cd5cc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142cd5cc6 FUN_142cd5cc6 body=57 status=ok
// SIG undefined FUN_142cd5cc6(void)

undefined8 * FUN_142cd5cc6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a240e20;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cd5d00 FUN_142cd5d00 body=158 status=ok
// SIG undefined FUN_142cd5d00(void)

undefined4 FUN_142cd5d00(undefined8 *param_1)

{
  undefined8 uVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_1[2];
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_1 + 1);
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_1;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_144aae0d2(&local_40,local_38);
    memcpy(local_40,_Src,lVar2 << 3);
  }
  FUN_142cc6ac8(uVar1,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return *(undefined4 *)(param_1[2] + 0xb8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd5da0 FUN_142cd5da0 body=118 status=ok
// SIG undefined FUN_142cd5da0(void)

undefined8 * FUN_142cd5da0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a240e40;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_144aae0d2(puVar1,iVar2);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 3);
  }
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 142cd5e1c FUN_142cd5e1c body=12 status=ok
// SIG undefined FUN_142cd5e1c(void)

void FUN_142cd5e1c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142cd5e25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142cd5e28 FUN_142cd5e28 body=57 status=ok
// SIG undefined FUN_142cd5e28(void)

undefined8 * FUN_142cd5e28(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a240e40;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cd5e62 FUN_142cd5e62 body=159 status=ok
// SIG undefined FUN_142cd5e62(void)

undefined8 FUN_142cd5e62(undefined8 *param_1)

{
  undefined8 uVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_1[2];
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_1 + 1);
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_1;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_144aae0d2(&local_40,local_38);
    memcpy(local_40,_Src,lVar2 << 3);
  }
  FUN_142cc6ac8(uVar1,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return *(undefined8 *)(param_1[2] + 0xb0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd5f02 FUN_142cd5f02 body=118 status=ok
// SIG undefined FUN_142cd5f02(void)

undefined8 * FUN_142cd5f02(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a240e60;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_144aae0d2(puVar1,iVar2);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 3);
  }
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 142cd5f7e FUN_142cd5f7e body=12 status=ok
// SIG undefined FUN_142cd5f7e(void)

void FUN_142cd5f7e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142cd5f87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142cd5f8a FUN_142cd5f8a body=57 status=ok
// SIG undefined FUN_142cd5f8a(void)

undefined8 * FUN_142cd5f8a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a240e60;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cd5fc4 FUN_142cd5fc4 body=164 status=ok
// SIG undefined FUN_142cd5fc4(void)

int FUN_142cd5fc4(undefined8 *param_1)

{
  undefined8 uVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_1[2];
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_1 + 1);
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_1;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_144aae0d2(&local_40,local_38);
    memcpy(local_40,_Src,lVar2 << 3);
  }
  FUN_142cc6ac8(uVar1,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return *(int *)(param_1[2] + 0xb8) * 0x28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd606a FUN_142cd606a body=118 status=ok
// SIG undefined FUN_142cd606a(void)

undefined8 * FUN_142cd606a(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a240e80;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_144aae0d2(puVar1,iVar2);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 3);
  }
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 142cd60e6 FUN_142cd60e6 body=12 status=ok
// SIG undefined FUN_142cd60e6(void)

void FUN_142cd60e6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142cd60ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142cd60f2 FUN_142cd60f2 body=57 status=ok
// SIG undefined FUN_142cd60f2(void)

undefined8 * FUN_142cd60f2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a240e80;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cd612c FUN_142cd612c body=158 status=ok
// SIG undefined FUN_142cd612c(void)

int FUN_142cd612c(undefined8 *param_1)

{
  undefined8 uVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_1[2];
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_1 + 1);
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_1;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_144aae0d2(&local_40,local_38);
    memcpy(local_40,_Src,lVar2 << 3);
  }
  FUN_142cc6ac8(uVar1,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return *(int *)(param_1[2] + 0x38) * 5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd61cc FUN_142cd61cc body=118 status=ok
// SIG undefined FUN_142cd61cc(void)

undefined8 * FUN_142cd61cc(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a240ea0;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_144aae0d2(puVar1,iVar2);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 3);
  }
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 142cd6254 FUN_142cd6254 body=57 status=ok
// SIG undefined FUN_142cd6254(void)

undefined8 * FUN_142cd6254(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a240ea0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cd628e FUN_142cd628e body=156 status=ok
// SIG undefined FUN_142cd628e(void)

undefined8 FUN_142cd628e(undefined8 *param_1)

{
  undefined8 uVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_1[2];
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_1 + 1);
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_1;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_144aae0d2(&local_40,local_38);
    memcpy(local_40,_Src,lVar2 << 3);
  }
  FUN_142cc6ac8(uVar1,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return *(undefined8 *)(param_1[2] + 0x30);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd632c FUN_142cd632c body=118 status=ok
// SIG undefined FUN_142cd632c(void)

undefined8 * FUN_142cd632c(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a240ec0;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_144aae0d2(puVar1,iVar2);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 3);
  }
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 142cd63a8 FUN_142cd63a8 body=12 status=ok
// SIG undefined FUN_142cd63a8(void)

void FUN_142cd63a8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142cd63b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142cd63b4 FUN_142cd63b4 body=57 status=ok
// SIG undefined FUN_142cd63b4(void)

undefined8 * FUN_142cd63b4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a240ec0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cd63ee FUN_142cd63ee body=163 status=ok
// SIG undefined FUN_142cd63ee(void)

longlong FUN_142cd63ee(undefined8 *param_1)

{
  undefined8 uVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_1[2];
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_1 + 1);
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_1;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_144aae0d2(&local_40,local_38);
    memcpy(local_40,_Src,lVar2 << 3);
  }
  FUN_142cc6ac8(uVar1,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return (longlong)(*(int *)(param_1[2] + 0x38) * 0x14);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd6492 FUN_142cd6492 body=118 status=ok
// SIG undefined FUN_142cd6492(void)

undefined8 * FUN_142cd6492(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a240ee0;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_144aae0d2(puVar1,iVar2);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 3);
  }
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 142cd650e FUN_142cd650e body=12 status=ok
// SIG undefined FUN_142cd650e(void)

void FUN_142cd650e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142cd6517. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142cd651a FUN_142cd651a body=57 status=ok
// SIG undefined FUN_142cd651a(void)

undefined8 * FUN_142cd651a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a240ee0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cd6554 FUN_142cd6554 body=155 status=ok
// SIG undefined FUN_142cd6554(void)

undefined4 FUN_142cd6554(undefined8 *param_1)

{
  undefined8 uVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_1[2];
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_1 + 1);
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_1;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_144aae0d2(&local_40,local_38);
    memcpy(local_40,_Src,lVar2 << 3);
  }
  FUN_142cc6ac8(uVar1,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return *(undefined4 *)(param_1[2] + 0x38);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd65f0 FUN_142cd65f0 body=118 status=ok
// SIG undefined FUN_142cd65f0(void)

undefined8 * FUN_142cd65f0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a240f00;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_144aae0d2(puVar1,iVar2);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 3);
  }
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 142cd6678 FUN_142cd6678 body=57 status=ok
// SIG undefined FUN_142cd6678(void)

undefined8 * FUN_142cd6678(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a240f00;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cd66b2 FUN_142cd66b2 body=155 status=ok
// SIG undefined FUN_142cd66b2(void)

undefined4 FUN_142cd66b2(undefined8 *param_1)

{
  undefined8 uVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_1[2];
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_1 + 1);
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_1;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_144aae0d2(&local_40,local_38);
    memcpy(local_40,_Src,lVar2 << 3);
  }
  FUN_142cc6ac8(uVar1,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return *(undefined4 *)(param_1[2] + 0x68);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd674e FUN_142cd674e body=118 status=ok
// SIG undefined FUN_142cd674e(void)

undefined8 * FUN_142cd674e(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a240f20;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_144aae0d2(puVar1,iVar2);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 3);
  }
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 142cd67d6 FUN_142cd67d6 body=57 status=ok
// SIG undefined FUN_142cd67d6(void)

undefined8 * FUN_142cd67d6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a240f20;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cd6810 FUN_142cd6810 body=156 status=ok
// SIG undefined FUN_142cd6810(void)

undefined8 FUN_142cd6810(undefined8 *param_1)

{
  undefined8 uVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_1[2];
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_1 + 1);
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_1;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_144aae0d2(&local_40,local_38);
    memcpy(local_40,_Src,lVar2 << 3);
  }
  FUN_142cc6ac8(uVar1,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return *(undefined8 *)(param_1[2] + 0x60);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd68ae FUN_142cd68ae body=118 status=ok
// SIG undefined FUN_142cd68ae(void)

undefined8 * FUN_142cd68ae(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a240f40;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_144aae0d2(puVar1,iVar2);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 3);
  }
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 142cd692a FUN_142cd692a body=12 status=ok
// SIG undefined FUN_142cd692a(void)

void FUN_142cd692a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142cd6933. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142cd6936 FUN_142cd6936 body=57 status=ok
// SIG undefined FUN_142cd6936(void)

undefined8 * FUN_142cd6936(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a240f40;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cd6970 FUN_142cd6970 body=158 status=ok
// SIG undefined FUN_142cd6970(void)

int FUN_142cd6970(undefined8 *param_1)

{
  undefined8 uVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_1[2];
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_1 + 1);
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_1;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_144aae0d2(&local_40,local_38);
    memcpy(local_40,_Src,lVar2 << 3);
  }
  FUN_142cc6ac8(uVar1,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return *(int *)(param_1[2] + 0x68) << 2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd6a10 FUN_142cd6a10 body=118 status=ok
// SIG undefined FUN_142cd6a10(void)

undefined8 * FUN_142cd6a10(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a240f60;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_144aae0d2(puVar1,iVar2);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 3);
  }
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 142cd6a8c FUN_142cd6a8c body=12 status=ok
// SIG undefined FUN_142cd6a8c(void)

void FUN_142cd6a8c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142cd6a95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142cd6a98 FUN_142cd6a98 body=57 status=ok
// SIG undefined FUN_142cd6a98(void)

undefined8 * FUN_142cd6a98(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a240f60;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cd6ad2 FUN_142cd6ad2 body=200 status=ok
// SIG undefined FUN_142cd6ad2(void)

int FUN_142cd6ad2(undefined8 *param_1)

{
  undefined8 uVar1;
  void *_Src;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_1[2];
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_1 + 1);
  lVar4 = (longlong)local_38;
  _Src = (void *)*param_1;
  if (lVar4 == 0) {
    local_34 = 0;
  }
  else {
    FUN_144aae0d2(&local_40,local_38);
    memcpy(local_40,_Src,lVar4 << 3);
  }
  FUN_142cc6ac8(uVar1,&local_40);
  iVar2 = *(int *)(param_1[2] + 0xc4);
  uVar3 = (ulonglong)*(ushort *)(param_1[2] + 0xc0);
  if ((&DAT_14ca814b8)[uVar3 * 0xf] == 1) {
    iVar2 = iVar2 + ((uint)(&DAT_14ca814d8)[uVar3 * 0xf] >> 2 & 0x400);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd6b9c FUN_142cd6b9c body=118 status=ok
// SIG undefined FUN_142cd6b9c(void)

undefined8 * FUN_142cd6b9c(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a240f80;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_144aae0d2(puVar1,iVar2);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 3);
  }
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 142cd6c24 FUN_142cd6c24 body=57 status=ok
// SIG undefined FUN_142cd6c24(void)

undefined8 * FUN_142cd6c24(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a240f80;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cd6c5e FUN_142cd6c5e body=171 status=ok
// SIG undefined FUN_142cd6c5e(void)

undefined4 FUN_142cd6c5e(undefined8 *param_1)

{
  undefined8 uVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_1[2];
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_1 + 1);
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_1;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_144aae0d2(&local_40,local_38);
    memcpy(local_40,_Src,lVar2 << 3);
  }
  FUN_142cc6ac8(uVar1,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return *(undefined4 *)
            (*(longlong *)(param_1[2] + 0xa0) + 8 + (longlong)*(int *)(param_1 + 3) * 0x10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd6d0a FUN_142cd6d0a body=144 status=ok
// SIG undefined FUN_142cd6d0a(void)

undefined8 * FUN_142cd6d0a(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar3;
  *puVar3 = &PTR_FUN_14a240fa0;
  puVar1 = puVar3 + 1;
  puVar3[1] = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(puVar3 + 2) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x14) = 0;
  }
  else {
    FUN_144aae0d2(puVar1,iVar2);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 3);
  }
  *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar3[3] = *(undefined8 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 142cd6da0 FUN_142cd6da0 body=29 status=ok
// SIG undefined FUN_142cd6da0(void)

void FUN_142cd6da0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142cd6dbe FUN_142cd6dbe body=57 status=ok
// SIG undefined FUN_142cd6dbe(void)

undefined8 * FUN_142cd6dbe(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a240fa0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cd6df8 FUN_142cd6df8 body=171 status=ok
// SIG undefined FUN_142cd6df8(void)

undefined8 FUN_142cd6df8(undefined8 *param_1)

{
  undefined8 uVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_1[2];
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_1 + 1);
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_1;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_144aae0d2(&local_40,local_38);
    memcpy(local_40,_Src,lVar2 << 3);
  }
  FUN_142cc6ac8(uVar1,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return *(undefined8 *)
            (*(longlong *)(param_1[2] + 0xa0) + (longlong)*(int *)(param_1 + 3) * 0x10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd6ea4 FUN_142cd6ea4 body=144 status=ok
// SIG undefined FUN_142cd6ea4(void)

undefined8 * FUN_142cd6ea4(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar3;
  *puVar3 = &PTR_FUN_14a240fc0;
  puVar1 = puVar3 + 1;
  puVar3[1] = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(puVar3 + 2) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x14) = 0;
  }
  else {
    FUN_144aae0d2(puVar1,iVar2);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 3);
  }
  *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar3[3] = *(undefined8 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 142cd6f3a FUN_142cd6f3a body=29 status=ok
// SIG undefined FUN_142cd6f3a(void)

void FUN_142cd6f3a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142cd6f58 FUN_142cd6f58 body=57 status=ok
// SIG undefined FUN_142cd6f58(void)

undefined8 * FUN_142cd6f58(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a240fc0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cd6f92 FUN_142cd6f92 body=174 status=ok
// SIG undefined FUN_142cd6f92(void)

int FUN_142cd6f92(undefined8 *param_1)

{
  undefined8 uVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_1[2];
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_1 + 1);
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_1;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_144aae0d2(&local_40,local_38);
    memcpy(local_40,_Src,lVar2 << 3);
  }
  FUN_142cc6ac8(uVar1,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return *(int *)(*(longlong *)(param_1[2] + 0xa0) + 8 + (longlong)*(int *)(param_1 + 3) * 0x10)
           << 2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd7042 FUN_142cd7042 body=144 status=ok
// SIG undefined FUN_142cd7042(void)

undefined8 * FUN_142cd7042(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar3;
  *puVar3 = &PTR_FUN_14a240fe0;
  puVar1 = puVar3 + 1;
  puVar3[1] = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(puVar3 + 2) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x14) = 0;
  }
  else {
    FUN_144aae0d2(puVar1,iVar2);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 3);
  }
  *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar3[3] = *(undefined8 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 142cd70d8 FUN_142cd70d8 body=29 status=ok
// SIG undefined FUN_142cd70d8(void)

void FUN_142cd70d8(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142cd70f6 FUN_142cd70f6 body=57 status=ok
// SIG undefined FUN_142cd70f6(void)

undefined8 * FUN_142cd70f6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a240fe0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cd7130 FUN_142cd7130 body=171 status=ok
// SIG undefined FUN_142cd7130(void)

undefined4 FUN_142cd7130(undefined8 *param_1)

{
  undefined8 uVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_1[2];
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_1 + 1);
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_1;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_144aae0d2(&local_40,local_38);
    memcpy(local_40,_Src,lVar2 << 3);
  }
  FUN_142cc6ac8(uVar1,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return *(undefined4 *)
            (*(longlong *)(param_1[2] + 0x90) + 8 + (longlong)*(int *)(param_1 + 3) * 0x38);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd71dc FUN_142cd71dc body=144 status=ok
// SIG undefined FUN_142cd71dc(void)

undefined8 * FUN_142cd71dc(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar3;
  *puVar3 = &PTR_FUN_14a241000;
  puVar1 = puVar3 + 1;
  puVar3[1] = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(puVar3 + 2) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x14) = 0;
  }
  else {
    FUN_144aae0d2(puVar1,iVar2);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 3);
  }
  *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar3[3] = *(undefined8 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 142cd7272 FUN_142cd7272 body=29 status=ok
// SIG undefined FUN_142cd7272(void)

void FUN_142cd7272(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142cd7290 FUN_142cd7290 body=57 status=ok
// SIG undefined FUN_142cd7290(void)

undefined8 * FUN_142cd7290(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a241000;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cd72ca FUN_142cd72ca body=171 status=ok
// SIG undefined FUN_142cd72ca(void)

undefined8 FUN_142cd72ca(undefined8 *param_1)

{
  undefined8 uVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_1[2];
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_1 + 1);
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_1;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_144aae0d2(&local_40,local_38);
    memcpy(local_40,_Src,lVar2 << 3);
  }
  FUN_142cc6ac8(uVar1,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return *(undefined8 *)
            (*(longlong *)(param_1[2] + 0x90) + (longlong)*(int *)(param_1 + 3) * 0x38);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd7376 FUN_142cd7376 body=144 status=ok
// SIG undefined FUN_142cd7376(void)

undefined8 * FUN_142cd7376(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar3;
  *puVar3 = &PTR_FUN_14a241020;
  puVar1 = puVar3 + 1;
  puVar3[1] = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(puVar3 + 2) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x14) = 0;
  }
  else {
    FUN_144aae0d2(puVar1,iVar2);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 3);
  }
  *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar3[3] = *(undefined8 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 142cd740c FUN_142cd740c body=29 status=ok
// SIG undefined FUN_142cd740c(void)

void FUN_142cd740c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142cd742a FUN_142cd742a body=57 status=ok
// SIG undefined FUN_142cd742a(void)

undefined8 * FUN_142cd742a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a241020;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cd7464 FUN_142cd7464 body=176 status=ok
// SIG undefined FUN_142cd7464(void)

longlong FUN_142cd7464(undefined8 *param_1)

{
  undefined8 uVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_1[2];
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_1 + 1);
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_1;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_144aae0d2(&local_40,local_38);
    memcpy(local_40,_Src,lVar2 << 3);
  }
  FUN_142cc6ac8(uVar1,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return (longlong)
           (*(int *)(*(longlong *)(param_1[2] + 0x90) + 8 + (longlong)*(int *)(param_1 + 3) * 0x38)
           << 2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd7516 FUN_142cd7516 body=144 status=ok
// SIG undefined FUN_142cd7516(void)

undefined8 * FUN_142cd7516(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar3;
  *puVar3 = &PTR_FUN_14a241040;
  puVar1 = puVar3 + 1;
  puVar3[1] = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(puVar3 + 2) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x14) = 0;
  }
  else {
    FUN_144aae0d2(puVar1,iVar2);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 3);
  }
  *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar3[3] = *(undefined8 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 142cd75ac FUN_142cd75ac body=29 status=ok
// SIG undefined FUN_142cd75ac(void)

void FUN_142cd75ac(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142cd75ca FUN_142cd75ca body=57 status=ok
// SIG undefined FUN_142cd75ca(void)

undefined8 * FUN_142cd75ca(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a241040;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cd7604 FUN_142cd7604 body=171 status=ok
// SIG undefined FUN_142cd7604(void)

undefined4 FUN_142cd7604(undefined8 *param_1)

{
  undefined8 uVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_1[2];
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_1 + 1);
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_1;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_144aae0d2(&local_40,local_38);
    memcpy(local_40,_Src,lVar2 << 3);
  }
  FUN_142cc6ac8(uVar1,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return *(undefined4 *)
            (*(longlong *)(param_1[2] + 0x90) + 0x18 + (longlong)*(int *)(param_1 + 3) * 0x38);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd76b0 FUN_142cd76b0 body=144 status=ok
// SIG undefined FUN_142cd76b0(void)

undefined8 * FUN_142cd76b0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar3;
  *puVar3 = &PTR_FUN_14a241060;
  puVar1 = puVar3 + 1;
  puVar3[1] = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(puVar3 + 2) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x14) = 0;
  }
  else {
    FUN_144aae0d2(puVar1,iVar2);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 3);
  }
  *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar3[3] = *(undefined8 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 142cd7746 FUN_142cd7746 body=29 status=ok
// SIG undefined FUN_142cd7746(void)

void FUN_142cd7746(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142cd7764 FUN_142cd7764 body=57 status=ok
// SIG undefined FUN_142cd7764(void)

undefined8 * FUN_142cd7764(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a241060;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cd779e FUN_142cd779e body=172 status=ok
// SIG undefined FUN_142cd779e(void)

undefined8 FUN_142cd779e(undefined8 *param_1)

{
  undefined8 uVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_1[2];
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_1 + 1);
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_1;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_144aae0d2(&local_40,local_38);
    memcpy(local_40,_Src,lVar2 << 3);
  }
  FUN_142cc6ac8(uVar1,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return *(undefined8 *)
            (*(longlong *)(param_1[2] + 0x90) + 0x10 + (longlong)*(int *)(param_1 + 3) * 0x38);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd784c FUN_142cd784c body=144 status=ok
// SIG undefined FUN_142cd784c(void)

undefined8 * FUN_142cd784c(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar3;
  *puVar3 = &PTR_FUN_14a241080;
  puVar1 = puVar3 + 1;
  puVar3[1] = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(puVar3 + 2) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x14) = 0;
  }
  else {
    FUN_144aae0d2(puVar1,iVar2);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 3);
  }
  *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar3[3] = *(undefined8 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 142cd78e2 FUN_142cd78e2 body=29 status=ok
// SIG undefined FUN_142cd78e2(void)

void FUN_142cd78e2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142cd7900 FUN_142cd7900 body=57 status=ok
// SIG undefined FUN_142cd7900(void)

undefined8 * FUN_142cd7900(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a241080;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cd793a FUN_142cd793a body=176 status=ok
// SIG undefined FUN_142cd793a(void)

longlong FUN_142cd793a(undefined8 *param_1)

{
  undefined8 uVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_1[2];
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_1 + 1);
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_1;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_144aae0d2(&local_40,local_38);
    memcpy(local_40,_Src,lVar2 << 3);
  }
  FUN_142cc6ac8(uVar1,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return (longlong)
           (*(int *)(*(longlong *)(param_1[2] + 0x90) + 0x18 +
                    (longlong)*(int *)(param_1 + 3) * 0x38) << 3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd79ec FUN_142cd79ec body=144 status=ok
// SIG undefined FUN_142cd79ec(void)

undefined8 * FUN_142cd79ec(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar3;
  *puVar3 = &PTR_FUN_14a2410a0;
  puVar1 = puVar3 + 1;
  puVar3[1] = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(puVar3 + 2) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x14) = 0;
  }
  else {
    FUN_144aae0d2(puVar1,iVar2);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 3);
  }
  *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar3[3] = *(undefined8 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 142cd7a82 FUN_142cd7a82 body=29 status=ok
// SIG undefined FUN_142cd7a82(void)

void FUN_142cd7a82(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142cd7aa0 FUN_142cd7aa0 body=57 status=ok
// SIG undefined FUN_142cd7aa0(void)

undefined8 * FUN_142cd7aa0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a2410a0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cd7ada FUN_142cd7ada body=559 status=ok
// SIG undefined FUN_142cd7ada(void)

void FUN_142cd7ada(longlong param_1,ulonglong *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int *_Src;
  undefined1 *_Src_00;
  undefined8 *puVar5;
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  undefined1 local_c8 [8];
  int local_c0;
  int local_b8;
  int iStack_b4;
  int local_b0;
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
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,&local_b8);
  puVar5 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar5 + 0x11;
  if ((undefined8 *)param_2[1] < puVar2) {
    FUN_140023dd8(param_2,0x90);
    puVar5 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar5 + 0x11;
  }
  *param_2 = (ulonglong)puVar2;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar5;
  param_2[6] = (ulonglong)(puVar5 + 1);
  puVar5[1] = 0;
  *puVar5 = &PTR_FUN_14a1fb978;
  puVar5[3] = 0;
  *(int *)(puVar5 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar5 + 0x24) = 8;
  }
  else {
    _Src = &local_b8;
    if ((int *)CONCAT44(uStack_ac,local_b0) != (int *)0x0) {
      _Src = (int *)CONCAT44(uStack_ac,local_b0);
    }
    FUN_1446fe144(puVar5 + 2,local_a8,0);
    puVar2 = (undefined8 *)puVar5[3];
    if ((undefined8 *)puVar5[3] == (undefined8 *)0x0) {
      puVar2 = puVar5 + 2;
    }
    memcpy(puVar2,_Src,(longlong)local_a8);
  }
  puVar5[0xd] = 0;
  *(int *)(puVar5 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar5 + 0x74) = 8;
  }
  else {
    _Src_00 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      _Src_00 = local_a0;
    }
    FUN_1446fe1b8(puVar5 + 5,local_58,0);
    puVar2 = (undefined8 *)puVar5[0xd];
    if ((undefined8 *)puVar5[0xd] == (undefined8 *)0x0) {
      puVar2 = puVar5 + 5;
    }
    memcpy(puVar2,_Src_00,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar5 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar5 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar5 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar5 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (CONCAT44(uStack_ac,local_b0) != 0) {
    FUN_1400020a8();
  }
  pcVar1 = *(code **)(param_1 + 0x1e0);
  plVar4 = (longlong *)(param_1 + 0x200);
  if (*(longlong **)(param_1 + 0x1f0) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x1f0);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(&local_b8,uVar3);
  if (((0 < local_b8) && (0 < iStack_b4)) && (0 < local_b0)) {
    local_d8 = local_c8;
    local_c0 = local_b0;
    FUN_144aad62b(param_2,param_1 + 0x1d0,*(undefined8 *)(param_1 + 0x1c0),
                  *(undefined8 *)(param_1 + 0x1c8));
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd7d0a FUN_142cd7d0a body=279 status=ok
// SIG undefined FUN_142cd7d0a(void)

int * FUN_142cd7d0a(int *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  void *_Src;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_2[2];
  local_48 = (void *)0x0;
  local_40 = *(int *)(param_2 + 1);
  lVar4 = (longlong)local_40;
  _Src = (void *)*param_2;
  if (lVar4 == 0) {
    local_3c = 0;
  }
  else {
    FUN_144aae0d2(&local_48,local_40);
    memcpy(local_48,_Src,lVar4 << 3);
  }
  FUN_142cc6ac8(uVar1,&local_48);
  iVar2 = *(int *)(*(longlong *)(param_2[2] + 0x90) + 8 + (longlong)*(int *)(param_2 + 3) * 0x38);
  *param_1 = iVar2;
  *(undefined1 **)(param_1 + 1) = &DAT_100000001;
  iVar3 = 1;
  if (DAT_14ca84f24 < iVar2) {
    iVar3 = iVar2 + 0xfe;
    if (-1 < iVar2 + 0x7f) {
      iVar3 = iVar2 + 0x7f;
    }
    iVar3 = iVar3 >> 7;
    param_1[1] = iVar3;
    *param_1 = 0x80;
  }
  if (DAT_14ca84f28 < iVar3) {
    iVar2 = iVar3 + 0xfe;
    if (-1 < iVar3 + 0x7f) {
      iVar2 = iVar3 + 0x7f;
    }
    param_1[2] = iVar2 >> 7;
    param_1[1] = 0x80;
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd7e22 FUN_142cd7e22 body=144 status=ok
// SIG undefined FUN_142cd7e22(void)

undefined8 * FUN_142cd7e22(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar3;
  *puVar3 = &PTR_FUN_14a2410e0;
  puVar1 = puVar3 + 1;
  puVar3[1] = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(puVar3 + 2) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x14) = 0;
  }
  else {
    FUN_144aae0d2(puVar1,iVar2);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 3);
  }
  *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar3[3] = *(undefined8 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 142cd7eb8 FUN_142cd7eb8 body=29 status=ok
// SIG undefined FUN_142cd7eb8(void)

void FUN_142cd7eb8(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142cd7ed6 FUN_142cd7ed6 body=57 status=ok
// SIG undefined FUN_142cd7ed6(void)

undefined8 * FUN_142cd7ed6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a2410e0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cd7f10 FUN_142cd7f10 body=164 status=ok
// SIG undefined FUN_142cd7f10(void)

int FUN_142cd7f10(undefined8 *param_1)

{
  undefined8 uVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_1[2];
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_1 + 1);
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_1;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_144aae0d2(&local_40,local_38);
    memcpy(local_40,_Src,lVar2 << 3);
  }
  FUN_142cc6ac8(uVar1,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return *(int *)(param_1[2] + 300) + (uint)(*(int *)(param_1[2] + 300) == 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd7fb6 FUN_142cd7fb6 body=118 status=ok
// SIG undefined FUN_142cd7fb6(void)

undefined8 * FUN_142cd7fb6(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a241100;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_144aae0d2(puVar1,iVar2);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 3);
  }
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 142cd8032 FUN_142cd8032 body=12 status=ok
// SIG undefined FUN_142cd8032(void)

void FUN_142cd8032(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142cd803b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142cd803e FUN_142cd803e body=57 status=ok
// SIG undefined FUN_142cd803e(void)

undefined8 * FUN_142cd803e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a241100;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cd8078 FUN_142cd8078 body=143 status=ok
// SIG undefined FUN_142cd8078(void)

undefined8 FUN_142cd8078(undefined8 *param_1)

{
  undefined8 uVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = param_1[2];
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_1 + 1);
  lVar2 = (longlong)local_30;
  _Src = (void *)*param_1;
  if (lVar2 == 0) {
    local_2c = 0;
  }
  else {
    FUN_144aae0d2(&local_38,local_30);
    memcpy(local_38,_Src,lVar2 << 3);
  }
  FUN_142cc6ac8(uVar1,&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd8108 FUN_142cd8108 body=118 status=ok
// SIG undefined FUN_142cd8108(void)

undefined8 * FUN_142cd8108(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a241120;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_144aae0d2(puVar1,iVar2);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 3);
  }
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 142cd8184 FUN_142cd8184 body=12 status=ok
// SIG undefined FUN_142cd8184(void)

void FUN_142cd8184(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142cd818d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142cd8190 FUN_142cd8190 body=57 status=ok
// SIG undefined FUN_142cd8190(void)

undefined8 * FUN_142cd8190(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a241120;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cd81ca FUN_142cd81ca body=143 status=ok
// SIG undefined FUN_142cd81ca(void)

undefined8 FUN_142cd81ca(undefined8 *param_1)

{
  undefined8 uVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = param_1[2];
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_1 + 1);
  lVar2 = (longlong)local_30;
  _Src = (void *)*param_1;
  if (lVar2 == 0) {
    local_2c = 0;
  }
  else {
    FUN_144aae0d2(&local_38,local_30);
    memcpy(local_38,_Src,lVar2 << 3);
  }
  FUN_142cc6ac8(uVar1,&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd825a FUN_142cd825a body=118 status=ok
// SIG undefined FUN_142cd825a(void)

undefined8 * FUN_142cd825a(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a241140;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_144aae0d2(puVar1,iVar2);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 3);
  }
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 142cd82d6 FUN_142cd82d6 body=12 status=ok
// SIG undefined FUN_142cd82d6(void)

void FUN_142cd82d6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142cd82df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142cd82e2 FUN_142cd82e2 body=57 status=ok
// SIG undefined FUN_142cd82e2(void)

undefined8 * FUN_142cd82e2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a241140;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cd831c FUN_142cd831c body=559 status=ok
// SIG undefined FUN_142cd831c(void)

void FUN_142cd831c(longlong param_1,ulonglong *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int *_Src;
  undefined1 *_Src_00;
  undefined8 *puVar5;
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  undefined1 local_c8 [8];
  int local_c0;
  int local_b8;
  int iStack_b4;
  int local_b0;
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
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,&local_b8);
  puVar5 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar5 + 0x11;
  if ((undefined8 *)param_2[1] < puVar2) {
    FUN_140023dd8(param_2,0x90);
    puVar5 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar5 + 0x11;
  }
  *param_2 = (ulonglong)puVar2;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar5;
  param_2[6] = (ulonglong)(puVar5 + 1);
  puVar5[1] = 0;
  *puVar5 = &PTR_FUN_14a1fb978;
  puVar5[3] = 0;
  *(int *)(puVar5 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar5 + 0x24) = 8;
  }
  else {
    _Src = &local_b8;
    if ((int *)CONCAT44(uStack_ac,local_b0) != (int *)0x0) {
      _Src = (int *)CONCAT44(uStack_ac,local_b0);
    }
    FUN_1446fe144(puVar5 + 2,local_a8,0);
    puVar2 = (undefined8 *)puVar5[3];
    if ((undefined8 *)puVar5[3] == (undefined8 *)0x0) {
      puVar2 = puVar5 + 2;
    }
    memcpy(puVar2,_Src,(longlong)local_a8);
  }
  puVar5[0xd] = 0;
  *(int *)(puVar5 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar5 + 0x74) = 8;
  }
  else {
    _Src_00 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      _Src_00 = local_a0;
    }
    FUN_1446fe1b8(puVar5 + 5,local_58,0);
    puVar2 = (undefined8 *)puVar5[0xd];
    if ((undefined8 *)puVar5[0xd] == (undefined8 *)0x0) {
      puVar2 = puVar5 + 5;
    }
    memcpy(puVar2,_Src_00,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar5 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar5 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar5 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar5 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (CONCAT44(uStack_ac,local_b0) != 0) {
    FUN_1400020a8();
  }
  pcVar1 = *(code **)(param_1 + 0x1e0);
  plVar4 = (longlong *)(param_1 + 0x200);
  if (*(longlong **)(param_1 + 0x1f0) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x1f0);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(&local_b8,uVar3);
  if (((0 < local_b8) && (0 < iStack_b4)) && (0 < local_b0)) {
    local_d8 = local_c8;
    local_c0 = local_b0;
    FUN_144aad9b8(param_2,param_1 + 0x1d0,*(undefined8 *)(param_1 + 0x1c0),
                  *(undefined8 *)(param_1 + 0x1c8));
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd85d4 FUN_142cd85d4 body=12 status=ok
// SIG undefined FUN_142cd85d4(void)

void FUN_142cd85d4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142cd85dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142cd85e0 FUN_142cd85e0 body=29 status=ok
// SIG undefined FUN_142cd85e0(void)

undefined8 FUN_142cd85e0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cd85fe FUN_142cd85fe body=158 status=ok
// SIG undefined FUN_142cd85fe(void)

undefined4 FUN_142cd85fe(undefined8 *param_1)

{
  undefined8 uVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_1[2];
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_1 + 1);
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_1;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_144aae0d2(&local_40,local_38);
    memcpy(local_40,_Src,lVar2 << 3);
  }
  FUN_142cc6ac8(uVar1,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return *(undefined4 *)(param_1[2] + 0x88);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd869e FUN_142cd869e body=118 status=ok
// SIG undefined FUN_142cd869e(void)

undefined8 * FUN_142cd869e(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a2411a0;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_144aae0d2(puVar1,iVar2);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 3);
  }
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 142cd871a FUN_142cd871a body=12 status=ok
// SIG undefined FUN_142cd871a(void)

void FUN_142cd871a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142cd8723. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142cd8726 FUN_142cd8726 body=57 status=ok
// SIG undefined FUN_142cd8726(void)

undefined8 * FUN_142cd8726(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a2411a0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cd8760 FUN_142cd8760 body=159 status=ok
// SIG undefined FUN_142cd8760(void)

undefined8 FUN_142cd8760(undefined8 *param_1)

{
  undefined8 uVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_1[2];
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_1 + 1);
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_1;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_144aae0d2(&local_40,local_38);
    memcpy(local_40,_Src,lVar2 << 3);
  }
  FUN_142cc6ac8(uVar1,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return *(undefined8 *)(param_1[2] + 0x80);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd8800 FUN_142cd8800 body=118 status=ok
// SIG undefined FUN_142cd8800(void)

undefined8 * FUN_142cd8800(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a2411c0;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_144aae0d2(puVar1,iVar2);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 3);
  }
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 142cd887c FUN_142cd887c body=12 status=ok
// SIG undefined FUN_142cd887c(void)

void FUN_142cd887c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142cd8885. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142cd8888 FUN_142cd8888 body=57 status=ok
// SIG undefined FUN_142cd8888(void)

undefined8 * FUN_142cd8888(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a2411c0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cd88c2 FUN_142cd88c2 body=161 status=ok
// SIG undefined FUN_142cd88c2(void)

int FUN_142cd88c2(undefined8 *param_1)

{
  undefined8 uVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_1[2];
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_1 + 1);
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_1;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_144aae0d2(&local_40,local_38);
    memcpy(local_40,_Src,lVar2 << 3);
  }
  FUN_142cc6ac8(uVar1,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return *(int *)(param_1[2] + 0x88) << 2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd8964 FUN_142cd8964 body=118 status=ok
// SIG undefined FUN_142cd8964(void)

undefined8 * FUN_142cd8964(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a2411e0;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_144aae0d2(puVar1,iVar2);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 3);
  }
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 142cd89e0 FUN_142cd89e0 body=12 status=ok
// SIG undefined FUN_142cd89e0(void)

void FUN_142cd89e0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142cd89e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142cd89ec FUN_142cd89ec body=57 status=ok
// SIG undefined FUN_142cd89ec(void)

undefined8 * FUN_142cd89ec(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a2411e0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cd8a26 FUN_142cd8a26 body=559 status=ok
// SIG undefined FUN_142cd8a26(void)

void FUN_142cd8a26(longlong param_1,ulonglong *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int *_Src;
  undefined1 *_Src_00;
  undefined8 *puVar5;
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  undefined1 local_c8 [8];
  int local_c0;
  int local_b8;
  int iStack_b4;
  int local_b0;
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
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,&local_b8);
  puVar5 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar5 + 0x11;
  if ((undefined8 *)param_2[1] < puVar2) {
    FUN_140023dd8(param_2,0x90);
    puVar5 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar5 + 0x11;
  }
  *param_2 = (ulonglong)puVar2;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar5;
  param_2[6] = (ulonglong)(puVar5 + 1);
  puVar5[1] = 0;
  *puVar5 = &PTR_FUN_14a1fb978;
  puVar5[3] = 0;
  *(int *)(puVar5 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar5 + 0x24) = 8;
  }
  else {
    _Src = &local_b8;
    if ((int *)CONCAT44(uStack_ac,local_b0) != (int *)0x0) {
      _Src = (int *)CONCAT44(uStack_ac,local_b0);
    }
    FUN_1446fe144(puVar5 + 2,local_a8,0);
    puVar2 = (undefined8 *)puVar5[3];
    if ((undefined8 *)puVar5[3] == (undefined8 *)0x0) {
      puVar2 = puVar5 + 2;
    }
    memcpy(puVar2,_Src,(longlong)local_a8);
  }
  puVar5[0xd] = 0;
  *(int *)(puVar5 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar5 + 0x74) = 8;
  }
  else {
    _Src_00 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      _Src_00 = local_a0;
    }
    FUN_1446fe1b8(puVar5 + 5,local_58,0);
    puVar2 = (undefined8 *)puVar5[0xd];
    if ((undefined8 *)puVar5[0xd] == (undefined8 *)0x0) {
      puVar2 = puVar5 + 5;
    }
    memcpy(puVar2,_Src_00,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar5 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar5 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar5 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar5 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (CONCAT44(uStack_ac,local_b0) != 0) {
    FUN_1400020a8();
  }
  pcVar1 = *(code **)(param_1 + 0x1e0);
  plVar4 = (longlong *)(param_1 + 0x200);
  if (*(longlong **)(param_1 + 0x1f0) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x1f0);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(&local_b8,uVar3);
  if (((0 < local_b8) && (0 < iStack_b4)) && (0 < local_b0)) {
    local_d8 = local_c8;
    local_c0 = local_b0;
    FUN_144aadd45(param_2,param_1 + 0x1d0,*(undefined8 *)(param_1 + 0x1c0),
                  *(undefined8 *)(param_1 + 0x1c8));
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd8cde FUN_142cd8cde body=12 status=ok
// SIG undefined FUN_142cd8cde(void)

void FUN_142cd8cde(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142cd8ce7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142cd8cea FUN_142cd8cea body=29 status=ok
// SIG undefined FUN_142cd8cea(void)

undefined8 FUN_142cd8cea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cd8d08 FUN_142cd8d08 body=88 status=ok
// SIG undefined FUN_142cd8d08(void)

undefined8 * FUN_142cd8d08(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a241250;
  if (param_1[0x3c] != 0) {
    plVar1 = param_1 + 0x40;
    if ((longlong *)param_1[0x3e] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x3e];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cd8d60 FUN_142cd8d60 body=622 status=ok
// SIG undefined FUN_142cd8d60(void)

void FUN_142cd8d60(longlong param_1,ulonglong *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined1 *_Src;
  int *_Src_00;
  undefined1 auStack_e8 [32];
  int *local_c8;
  int local_c0;
  int local_bc;
  int local_b8;
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
  puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar8 + 0x11;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x90);
    puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar8 + 0x11;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar8;
  param_2[6] = (ulonglong)(puVar8 + 1);
  puVar8[1] = 0;
  *puVar8 = &PTR_FUN_14a1fb978;
  puVar8[3] = 0;
  *(int *)(puVar8 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar8 + 0x24) = 8;
  }
  else {
    _Src_00 = (int *)CONCAT44(uStack_b4,local_b8);
    if ((int *)CONCAT44(uStack_b4,local_b8) == (int *)0x0) {
      _Src_00 = &local_c0;
    }
    FUN_1446fe144(puVar8 + 2,local_b0,0);
    puVar5 = (undefined8 *)puVar8[3];
    if ((undefined8 *)puVar8[3] == (undefined8 *)0x0) {
      puVar5 = puVar8 + 2;
    }
    memcpy(puVar5,_Src_00,(longlong)local_b0);
  }
  puVar8[0xd] = 0;
  *(int *)(puVar8 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar8 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar8 + 5,local_60,0);
    puVar5 = (undefined8 *)puVar8[0xd];
    if ((undefined8 *)puVar8[0xd] == (undefined8 *)0x0) {
      puVar5 = puVar8 + 5;
    }
    memcpy(puVar5,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar8 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar8 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar8 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar8 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  pcVar1 = *(code **)(param_1 + 0x1e0);
  plVar7 = (longlong *)(param_1 + 0x200);
  if (*(longlong **)(param_1 + 0x1f0) != (longlong *)0x0) {
    plVar7 = *(longlong **)(param_1 + 0x1f0);
  }
  uVar6 = (**(code **)(*plVar7 + 8))();
  iVar2 = (*pcVar1)(uVar6);
  *(int *)(*(longlong *)(param_1 + 0x1c8) + 8) = iVar2;
  iVar3 = iVar2 + 0x7e;
  if (-1 < iVar2 + 0x3f) {
    iVar3 = iVar2 + 0x3f;
  }
  iVar3 = iVar3 >> 6;
  iVar2 = 1;
  if (DAT_14ca84f24 < iVar3) {
    iVar4 = iVar3 + 0xfe;
    if (-1 < iVar3 + 0x7f) {
      iVar4 = iVar3 + 0x7f;
    }
    iVar4 = iVar4 >> 7;
    iVar3 = 0x80;
  }
  else {
    iVar4 = 1;
  }
  if (DAT_14ca84f28 < iVar4) {
    iVar2 = iVar4 + 0xfe;
    if (-1 < iVar4 + 0x7f) {
      iVar2 = iVar4 + 0x7f;
    }
    iVar2 = iVar2 >> 7;
    iVar4 = 0x80;
  }
  if (((0 < iVar3) && (0 < iVar4)) && (0 < iVar2)) {
    local_c8 = &local_c0;
    local_c0 = iVar3;
    local_bc = iVar4;
    local_b8 = iVar2;
    FUN_144aae204(param_2,param_1 + 0x1d0,*(undefined8 *)(param_1 + 0x1c0),
                  *(undefined8 *)(param_1 + 0x1c8));
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd8fd0 FUN_142cd8fd0 body=481 status=ok
// SIG undefined FUN_142cd8fd0(void)

void FUN_142cd8fd0(longlong param_1,ulonglong *param_2)

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
  FUN_144aae204(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cd91b2 FUN_142cd91b2 body=10119 status=ok
// SIG undefined FUN_142cd91b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cd91b2(void)

{
  char cVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined8 local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1400b22c2(&local_58,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_58,&DAT_14c9e1eb4);
  if (cVar1 == '\0') {
    _DAT_14c9e1eb4 = 0;
    uRam000000014c9e1ebc = 0;
  }
  if (local_58 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  local_50 = FUN_145cccfc4;
  local_58 = &DAT_14152059c;
  FUN_14142a670(&DAT_14c9e1f50,&local_58);
  local_50 = FUN_145e53b82;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9e2078,&local_58);
  local_50 = FUN_145f910d2;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9e21a0,&local_58);
  local_50 = FUN_145e540ec;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9e22c8,&local_58);
  local_50 = FUN_145f2c758;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9e23f0,&local_58);
  local_50 = FUN_145e843a6;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9e2518,&local_58);
  local_58._0_4_ = 1;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14c9e2528,L"r.HeterogeneousVolumes.FrustumGrid",&local_58,
                L"Enables a frustum voxel grid (Default = 1)");
  atexit(FUN_142cace2f);
  local_58._0_4_ = 0x40800000;
  local_68 = 0x20;
  FUN_140a6b41e(&DAT_14c9e2540,L"r.HeterogeneousVolumes.FrustumGrid.ShadingRate",&local_58,
                L"The voxel tessellation rate, in pixel-space (Default = 4.0)");
  atexit(FUN_142cace74);
  local_58._0_4_ = 0x3f800000;
  local_68 = 0x20;
  FUN_140a6b41e(&DAT_14c9e2558,L"r.HeterogeneousVolumes.FrustumGrid.NearPlaneDistance",&local_58,
                L"Sets near-plane distance for the frustum grid (Default = 1.0)\n");
  atexit(FUN_142caceb9);
  local_58._0_4_ = 0xbf800000;
  local_68 = 0x20;
  FUN_140a6b41e(&DAT_14c9e2570,L"r.HeterogeneousVolumes.FrustumGrid.FarPlaneDistance",&local_58,
                L"Sets far-plane distance for the frustum grid (Default = -1.0)\n");
  atexit(FUN_142cacefe);
  local_58._0_4_ = 0x200;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14c9e2588,L"r.HeterogeneousVolumes.FrustumGrid.DepthSliceCount",&local_58,
                L"The number of depth slices (Default = 512)");
  atexit(FUN_142cacf43);
  local_58._0_4_ = 0x80;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14c9e25a0,L"r.HeterogeneousVolumes.FrustumGrid.MaxBottomLevelMemoryInMegabytes"
                ,&local_58,L"The minimum voxel size (Default = 128)");
  atexit(FUN_142cacf88);
  local_58._0_4_ = 1;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14c9e25b8,L"r.HeterogeneousVolumes.OrthoGrid",&local_58,
                L"Enables an ortho voxel grid (Default = 1)");
  atexit(FUN_142cacfcd);
  local_58._0_4_ = 0x40800000;
  local_68 = 0x20;
  FUN_140a6b41e(&DAT_14c9e25d0,L"r.HeterogeneousVolumes.OrthoGrid.ShadingRate",&local_58,
                L"The voxelization rate (Default = 4.0)");
  atexit(FUN_142cad012);
  local_58._0_4_ = 1;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14c9e25e8,L"r.HeterogeneousVolumes.OrthoGrid.VoxelizationMode",&local_58,
                L"Voxelization mode (Default = 1)\n0: Screen-space voxel size (legacy behavior)\n1: World-space voxel size\n"
               );
  atexit(FUN_142cad057);
  local_58._0_4_ = 0x80;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14c9e2600,L"r.HeterogeneousVolumes.OrthoGrid.MaxBottomLevelMemoryInMegabytes",
                &local_58,L"The minimum voxel size (Default = 128)");
  atexit(FUN_142cad09c);
  local_58._0_4_ = 1;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14c9e2618,L"r.HeterogeneousVolumes.Debug.MarchingMode",&local_58,
                L"The marching mode (Default = 0)\n0: Ray Marching (dt=StepSize)\n1: Naive DDA\n2: Optimized DDA\n3: Optimized DDA w/ bitmask\n"
               );
  atexit(FUN_142cad0e1);
  local_58._0_4_ = 1;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14c9e2630,L"r.HeterogeneousVolumes.Tessellation.Jitter",&local_58,
                L"Enables jittering when tessellating the acceleration grids (Default = 1)");
  atexit(FUN_142cad126);
  local_58._0_4_ = 4;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14c9e2648,L"r.HeterogeneousVolumes.Tessellation.BottomLevelGrid.Resolution",
                &local_58,L"Determines intra-tile bottom-level grid resolution (Default = 4)");
  atexit(FUN_142cad16b);
  local_58._0_4_ = 0;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14c9e2660,L"r.HeterogeneousVolumes.Tessellation.BottomLevelGrid.VoxelHashing",
                &local_58,L"Enables bottom-level voxel hashing for deduplication (Default = 0)\n");
  atexit(FUN_142cad1b0);
  local_58._0_4_ = 0x3dcccccd;
  local_68 = 0x20;
  FUN_140a6b41e(&DAT_14c9e2678,L"r.HeterogeneousVolumes.Tessellation.MinimumVoxelSizeInFrustum",
                &local_58,L"The minimum voxel size (Default = 0.1)");
  atexit(FUN_142cad1f5);
  local_58._0_4_ = 0x42c80000;
  local_68 = 0x20;
  FUN_140a6b41e(&DAT_14c9e2690,L"r.HeterogeneousVolumes.Tessellation.MinimumVoxelSizeOutsideFrustum"
                ,&local_58,L"The minimum voxel size (Default = 100.0)");
  atexit(FUN_142cad23a);
  local_58._0_4_ = 0x40;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14c9e26a8,
                L"r.HeterogeneousVolumes.Tessellation.BottomLevelGrid.VoxelHashingMemoryInMegabytes"
                ,&local_58,L"Enables bottom-level voxel hashing for deduplication (Default = 64)\n")
  ;
  atexit(FUN_142cad27f);
  local_58._0_4_ = 1;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14c9e26c0,
                L"r.HeterogeneousVolumes.Tessellation.BottomLevelGrid.HomogeneousAggregation",
                &local_58,L"Enables bottom-level voxel homogeneous aggregation (Default = 1)\n");
  atexit(FUN_142cad2c4);
  local_58._0_4_ = 0x3a83126f;
  local_68 = 0x20;
  FUN_140a6b41e(&DAT_14c9e26d8,
                L"r.HeterogeneousVolumes.Tessellation.BottomLevelGrid.HomogeneousAggregationThreshold"
                ,&local_58,
                L"Threshold for bottom-level voxel homogeneous aggregation (Default = 1.0e-3)\n");
  atexit(FUN_142cad309);
  local_58._0_4_ = 1;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14c9e26f0,L"r.HeterogeneousVolumes.Tessellation.IndirectionGrid",&local_58,
                L"Enables lazy allocation of bottom-level memory (Default = 1)\n");
  atexit(FUN_142cad34e);
  local_58._0_4_ = 4;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14c9e2708,L"r.HeterogeneousVolumes.Tessellation.IndirectionGrid.Resolution",
                &local_58,L"Determines intra-tile indirection grid resolution (Default = 4)");
  atexit(FUN_142cad393);
  local_58._0_4_ = 1;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14c9e2720,L"r.HeterogeneousVolumes.Tessellation.FarPlaneAutoTransition",
                &local_58,
                L"Enables auto transitioning of far-plane distance, based on projected minimum voxel size (Default = 1)\n"
               );
  atexit(FUN_142cad3d8);
  local_58._0_4_ = 0;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14c9e2738,L"r.HeterogeneousVolumes.Tessellation.TopLevelBitmask",&local_58,
                L"Enables top-level bitmask to accelerate grid traversal (Default = 0)\n");
  atexit(FUN_142cad41d);
  local_58._0_4_ = 1;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14c9e2750,L"r.HeterogeneousVolumes.Tessellation.MajorantGrid",&local_58,
                L"Enables building majorant grids to accelerate volume tracking (Default = 0)\n");
  atexit(FUN_142cad462);
  local_58._0_4_ = 0;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14c9e2768,L"r.HeterogeneousVolumes.Tessellation.MajorantGrid.Max",&local_58,
                L"Enables building majorant grids to accelerate volume tracking (Default = 0)\n");
  atexit(FUN_142cad4a7);
  local_58._0_4_ = 2;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14c9e2780,L"r.HeterogeneousVolumes.Shadows.CameraDownsampleFactor",&local_58,
                L"Controls downsample factor for camera volumetric shadow map (default = 2)");
  atexit(FUN_142cad4ec);
  local_58._0_4_ = 0x200;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14c9e2798,L"r.HeterogeneousVolumes.Shadows.Resolution",&local_58,
                L"Resolution when building volumetric shadow map (Default = 512)\n");
  atexit(FUN_142cad531);
  local_58._0_4_ = 0x40000000;
  local_68 = 0x20;
  FUN_140a6b41e(&DAT_14c9e27b0,L"r.HeterogeneousVolumes.Shadows.StepSize",&local_58,
                L"Ray marching step size when building volumetric shadow map (Default = 2.0)\n");
  atexit(FUN_142cad576);
  local_58._0_4_ = 8;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14c9e27c8,L"r.HeterogeneousVolumes.Shadows.MaxSampleCount",&local_58,
                L"Maximum sample count when building volumetric shadow map (Default = 8)\n");
  atexit(FUN_142cad5bb);
  local_58._0_4_ = 0;
  local_68 = 0x20;
  FUN_140a6b41e(&DAT_14c9e27e0,L"r.HeterogeneousVolumes.Shadows.AbsoluteErrorThreshold",&local_58,
                L"Absolute error threshold for volume shadow compression (Default = 0.0)\n");
  atexit(FUN_142cad600);
  local_58._0_4_ = 0x3d4ccccd;
  local_68 = 0x20;
  FUN_140a6b41e(&DAT_14c9e27f8,L"r.HeterogeneousVolumes.Shadows.RelativeErrorThreshold",&local_58,
                L"Relative error threshold for volume shadow compression (Default = 0.05)\n");
  atexit(FUN_142cad645);
  local_58._0_4_ = 1;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14c9e2810,L"r.HeterogeneousVolumes.Shadows.UseAVSMCompression",&local_58,
                L"Enables AVSM compression (Default = 1)\n");
  atexit(FUN_142cad68a);
  local_58._0_4_ = 0;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14c9e2828,L"r.HeterogeneousVolumes.Shadows.DebugTweak",&local_58,
                L"Debug tweak value (Default = 0)\n");
  atexit(FUN_142cad6cf);
  local_58._0_4_ = 0x3f800000;
  local_68 = 0x20;
  FUN_140a6b41e(&DAT_14c9e2840,L"r.HeterogeneousVolumes.Shadows.ShadingRate",&local_58,
                L"Shading rate (in-frustum) for computing shadows (Default = 1.0)\n");
  atexit(FUN_142cad714);
  local_58._0_4_ = 2;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14c9e2858,L"r.HeterogeneousVolumes.Shadows.OutOfFrustumShadingRate",&local_58,
                L"Shading rate (out-of-frustum) for computing shadows (Default = 2.0)\n");
  atexit(FUN_142cad759);
  local_58 = (undefined *)((ulonglong)local_58._4_4_ << 0x20);
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14c9e2870,L"r.HeterogeneousVolumes.Shadows.Jitter",&local_58,
                L"Enables jittering when constructing shadows (Default = 0)\n");
  atexit(FUN_142cad79e);
  local_50 = FUN_1404256ca;
  local_58 = &DAT_14152059c;
  FUN_14142a670(&DAT_14c9e2910,&local_58);
  local_50 = FUN_1403f28ae;
  local_58 = &DAT_14152059c;
  FUN_14142a670(&DAT_14c9e29a8,&local_58);
  local_50 = FUN_144a8b0f8;
  local_58 = &DAT_14152059c;
  FUN_14142a670(&DAT_14c9e2a40,&local_58);
  local_50 = FUN_145f4760e;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9e2b68,&local_58);
  local_50 = FUN_1460895f4;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14c9e2c90,&local_58);
  local_50 = FUN_145f47c04;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9e2db8,&local_58);
  local_50 = FUN_145f481fa;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9e2ee0,&local_58);
  local_50 = FUN_145f14558;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9e3008,&local_58);
  local_50 = FUN_145e54656;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9e3130,&local_58);
  local_50 = FUN_14608985e;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14c9e3258,&local_58);
  local_50 = FUN_145e54bc0;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9e3380,&local_58);
  local_50 = FUN_145e84916;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9e34a8,&local_58);
  local_50 = FUN_145e5512a;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9e35d0,&local_58);
  local_50 = FUN_145ed3efa;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9e36f8,&local_58);
  local_50 = FUN_145f487f0;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9e3820,&local_58);
  local_50 = FUN_145f48de6;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9e3948,&local_58);
  local_50 = FUN_145e70240;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9e3a70,&local_58);
  local_50 = FUN_145f03a14;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9e3b98,&local_58);
  local_58._0_4_ = 0x100;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14c9e3ba8,L"r.IESAtlas.Resolution",&local_58,
                L"Resolution for storing IES textures.\n");
  atexit(FUN_142cbd380);
  local_58._0_4_ = 0x20;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14c9e3bc0,L"r.IESAtlas.MaxProfileCount",&local_58,
                L"The maximum number of IES profiles which can be stored.\n");
  atexit(FUN_142cbd3c5);
  local_58._0_4_ = 0;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14c9e3bd8,L"r.IESAtlas.Debug",&local_58,L"Enable IES atlas debug information.")
  ;
  atexit(FUN_142cbd40a);
  local_58 = (undefined *)((ulonglong)local_58._4_4_ << 0x20);
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14c9e3bf0,L"r.IESAtlas.ForceUpdate",&local_58,
                L"Force IES atlas to update very frame.");
  atexit(FUN_142cbd44f);
  FUN_1462d456e();
  DAT_14c9e3c10 = &PTR_FUN_14a240ac0;
  FUN_1462d45f6();
  atexit(FUN_142cbd494);
  local_50 = FUN_145f14b48;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9e3d88,&local_58);
  local_50 = FUN_145f2cd4c;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9e3eb0,&local_58);
  local_50 = FUN_145e55694;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9e3fd8,&local_58);
  local_50 = FUN_145f2d340;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9e4110,&local_58);
  local_50 = FUN_145f04002;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9e4238,&local_58);
  local_50 = FUN_145f69374;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9e4360,&local_58);
  DAT_14c9e4370 = 0x3fb504f3;
  _DAT_14c9e4374 = 0x3eb17217;
  local_68 = 0x20;
  FUN_141471170(&DAT_14c9e4380,L"r.Cache.DrawLightingSamples",&DAT_14c9e4378,
                L"Whether to draw indirect lighting sample points as generated by Lightmass.\n0 is off (default), 1 is on"
               );
  atexit(FUN_142cbdac1);
  local_68 = 0x20;
  FUN_141471170(&DAT_14c9e4398,L"r.Cache.DrawDirectionalShadowing",&DAT_14c9e4390,
                L"Whether to draw direct shadowing sample points as generated by Lightmass.\n0 is off (default), 1 is on"
               );
  atexit(FUN_142cbdb06);
  local_68 = 0x20;
  FUN_141471170(&DAT_14c9e43b0,L"r.Cache.DrawInterpolationPoints",&DAT_14c9e43a8,
                L"Whether to draw positions that indirect lighting is interpolated at when they are updated, which are stored in the cache.\nProbably need \'r.CacheUpdateEveryFrame 1\' as well to be useful, otherwise points will flicker as they update.\n0 is off (default), 1 is on"
               );
  atexit(FUN_142cbdb4b);
  local_68 = 0x20;
  FUN_141471170(&DAT_14c9e43c8,L"r.Cache.UpdateEveryFrame",&DAT_14c9e43c0,
                L"Whether to update indirect lighting cache allocations every frame, even if they would have been cached.  0 is off (default), 1 is on"
               );
  atexit(FUN_142cbdb90);
  local_68 = 0x20;
  FUN_1415c789c(&DAT_14c9e43d8,L"r.Cache.SampleTransitionSpeed",&DAT_14c760418,
                L"When using single sample lighting, controls the speed of the transition between two point samples (fade over time)."
               );
  atexit(FUN_142cbdbd5);
  local_68 = 0x20;
  FUN_141471170(&DAT_14c9e43e8,L"r.Cache.ReduceSHRinging",&DAT_14c76041c,
                L"Whether to modify indirect lighting cache SH samples to reduce ringing.  0 is off, 1 is on (default)"
               );
  atexit(FUN_142cbdc1a);
  local_68 = 0x20;
  FUN_141471170(&DAT_14c9e43f8,L"r.IndirectLightingCache",&DAT_14c760420,
                L"Whether to use the indirect lighting cache on dynamic objects.  0 is off, 1 is on (default)"
               );
  atexit(FUN_142cbdc5f);
  local_68 = 0x20;
  FUN_141471170(&DAT_14c9e4408,L"r.Cache.QueryNodeLevel",&DAT_14c760424,
                L"Level of the lighting sample octree whose node\'s extents should be the target size for queries into the octree.\nPrimitive blocks will be broken up into multiple octree queries if they are larger than this.0 is the root, 12 is the leaf level"
               );
  atexit(FUN_142cbdca4);
  local_68 = 0x20;
  FUN_141471170(&DAT_14c9e4418,L"r.Cache.LimitQuerySize",&DAT_14c760428,
                L"0 is off, 1 is on (default)");
  atexit(FUN_142cbdce9);
  local_68 = 4;
  FUN_141471170(&DAT_14c9e4428,L"r.Cache.LightingCacheMovableObjectAllocationSize",&DAT_14c76042c,
                L"Resolution of the interpolation sample volume used to light a dynamic object.  \nValues of 1 or 2 will result in a single interpolation sample per object which does not provide continuous lighting under movement, so interpolation is done over time.  \nValues of 3 or more support the necessary padding to provide continuous results under movement."
               );
  atexit(FUN_142cbdd2e);
  local_68 = 4;
  FUN_141471170(&DAT_14c9e4438,L"r.Cache.LightingCacheDimension",&DAT_14c760430,
                L"Dimensions of the lighting cache.  This should be a multiple of r.LightingCacheMovableObjectAllocationSize for least waste."
               );
  atexit(FUN_142cbdd73);
  local_60 = 0x200;
  local_68 = 0;
  FUN_1412c7f16(&DAT_14c9e4448,L"TaskGraph.TaskPriorities.UpdateCachePrimitivesTask",
                L"Task and thread priority for FUpdateCachePrimitivesTask.",0x400);
  atexit(FUN_142cbddb8);
  local_58 = (undefined *)((ulonglong)local_58 & 0xffffffff00000000);
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14c9e4500,L"r.DynamicGlobalIlluminationMethod",&local_58,
                L"0 - None.  Global Illumination can be baked into Lightmaps but no technique will be used for Dynamic Global Illumination.\n1 - Lumen.  Use Lumen Global Illumination for all lights, emissive materials casting light and SkyLight Occlusion.  Requires \'Generate Mesh Distance Fields\' enabled for Software Ray Tracing and \'Support Hardware Ray Tracing\' enabled for Hardware Ray Tracing.\n2 - SSGI.  Standalone Screen Space Global Illumination.  Low cost, but limited by screen space information.\n3 - Plugin.  Use a plugin for Global Illumination."
               );
  atexit(FUN_142cbf77f);
  local_58._0_4_ = 2;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14c9e4518,L"r.ReflectionMethod",&local_58,
                L"0 - None.  Reflections can come from placed Reflection Captures, Planar Reflections and Skylight but no global reflection method will be used.\n1 - Lumen.  Use Lumen Reflections, which supports Screen / Software / Hardware Ray Tracing together and integrates with Lumen Global Illumination for rough reflections and Global Illumination seen in reflections.\n2 - SSR.  Standalone Screen Space Reflections.  Low cost, but limited by screen space information.\n"
               );
  atexit(FUN_142cbf7c4);
  local_58._0_4_ = 1;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14c9e4530,L"r.DiffuseIndirect.HalfRes",&local_58,L"TODO(Guillaume)");
  atexit(FUN_142cbf809);
  local_58._0_4_ = 6;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14c9e4548,L"r.DiffuseIndirect.RayPerPixel",&local_58,L"TODO(Guillaume)");
  atexit(FUN_142cbf84e);
  local_58._0_4_ = 1;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14c9e4560,L"r.DiffuseIndirect.Denoiser",&local_58,
                L"Denoising options (default = 1)");
  atexit(FUN_142cbf893);
  local_58._0_4_ = 0;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14c9e4578,L"r.SSR.ExperimentalDenoiser",&local_58,
                L"Replace SSR\'s TAA pass with denoiser.");
  atexit(FUN_142cbf8d8);
  local_58._0_4_ = 0x3f800000;
  local_68 = 0x20;
  FUN_140a6b41e(&DAT_14c9e4590,L"r.SkySpecularOcclusionStrength",&local_58,
                L"Strength of skylight specular occlusion from DFAO (default is 1.0)");
  atexit(FUN_142cbf91d);
  local_58._0_4_ = 1;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14c9e45a8,L"r.ReflectionCapture.EnableDeferredReflectionsAndSkyLighting",
                &local_58,
                L"Whether to evaluate deferred reflections and sky contribution when rendering reflection captures."
               );
  atexit(FUN_142cbf962);
  local_58 = (undefined *)CONCAT44(local_58._4_4_,8);
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14c9e45c0,L"r.Lumen.ProbeHierarchy.SamplePerPixel",&local_58,
                L"Number of sample to do per full res pixel.");
  atexit(FUN_142cbf9a7);
  local_58._0_1_ = 1;
  local_68 = 0x20;
  FUN_140bd5914(&DAT_14c9e45d8,L"r.DiffuseIndirectOffUseDepthBoundsAO",&local_58,
                L"Use depth bounds when we apply the AO when DiffuseIndirect is disabled.");
  atexit(FUN_142cbf9ec);
  local_58 = (undefined *)((ulonglong)local_58._1_7_ << 8);
  local_68 = 0x20;
  FUN_140bd5914(&DAT_14c9e45f0,L"r.DiffuseIndirectForceCopyPass",&local_58,
                L"Forces use of copy pass instead of dual source blend. (for debugging)");
  atexit(FUN_142cbfa31);
  local_50 = FUN_141594b78;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9e4720,&local_58);
  local_50 = FUN_14159c82a;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9e4848,&local_58);
  local_50 = FUN_14156a154;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9e4970,&local_58);
  local_50 = FUN_144a89262;
  local_58 = &DAT_14152059c;
  FUN_14142a670(&DAT_14c9e4a08,&local_58);
  _DAT_14c9e4a20 = 0x3fe71125e0000000;
  _DAT_14c9e4a28 = 0xbfdc3012a0000000;
  _DAT_14c9e4a30 = 0xbfe1201500000000;
  _DAT_14c9e4a38 = 0xbfe0696dc0000000;
  _DAT_14c9e4a40 = 0x3fe269d720000000;
  _DAT_14c9e4a48 = 0x3fe462de00000000;
  _DAT_14c9e4a50 = 0x3fda3b7dc0000000;
  _DAT_14c9e4a58 = 0xbfe18db6c0000000;
  _DAT_14c9e4a60 = 0x3fe7520100000000;
  _DAT_14c9e4a68 = 0x3fb9a1f160000000;
  _DAT_14c9e4a70 = 0x3feee539e0000000;
  _DAT_14c9e4a78 = 0x3fcec74c00000000;
  _DAT_14c9e4a80 = 0x3fe3544e20000000;
  _DAT_14c9e4a88 = 0xbfcf9e92e0000000;
  _DAT_14c9e4a90 = 0x3fe83f1800000000;
  _DAT_14c9e4a98 = 0xbfd8194300000000;
  _DAT_14c9e4aa0 = 0xbfec324d00000000;
  _DAT_14c9e4aa8 = 0xbfd24e2c00000000;
  _DAT_14c9e4ab0 = 0x3fd4e4cbe0000000;
  _DAT_14c9e4ab8 = 0xbfebef39a0000000;
  _DAT_14c9e4ac0 = 0x3fd7328000000000;
  _DAT_14c9e4ac8 = 0x3fdb5b2340000000;
  _DAT_14c9e4ad0 = 0x3fece7bb00000000;
  _DAT_14c9e4ad8 = 0x3fa2f1a000000000;
  _DAT_14c9e4ae0 = 0x3fcd3fe6a0000000;
  _DAT_14c9e4ae8 = 0x3feb967040000000;
  _DAT_14c9e4af0 = 0x3fdcf1de00000000;
  _DAT_14c9e4af8 = 0xbfdd5a9680000000;
  _DAT_14c9e4b00 = 0x3fc1c3e0c0000000;
  _DAT_14c9e4b08 = 0x3fec163200000000;
  _DAT_14c9e4b10 = 0x3fec180d00000000;
  _DAT_14c9e4b18 = 0xbfae65df40000000;
  _DAT_14c9e4b20 = 0xbfde67c200000000;
  _DAT_14c9e4b28 = 0xbfc13de540000000;
  _DAT_14c9e4b30 = 0xbfe41e3800000000;
  _DAT_14c9e4b38 = 0x3fe8824500000000;
  _DAT_14c9e4b40 = 0xbfed825da0000000;
  _DAT_14c9e4b48 = 0x3fd1fb6b00000000;
  _DAT_14c9e4b50 = 0x3fd1037e00000000;
  _DAT_14c9e4b58 = 0x3fe33718c0000000;
  _DAT_14c9e4b60 = 0x3fe644b580000000;
  _DAT_14c9e4b68 = 0x3fd935ec00000000;
  _DAT_14c9e4b70 = 0xbfd95c1bc0000000;
  _DAT_14c9e4b78 = 0x3fdaa87d60000000;
  _DAT_14c9e4b80 = 0xbfea2ee100000000;
  _DAT_14c9e4b88 = 0xbfb01c7340000000;
  _DAT_14c9e4b90 = 0xbfe9db8920000000;
  _DAT_14c9e4b98 = 0x3fe2be6b00000000;
  _DAT_14c9e4ba0 = 0x3fed328660000000;
  _DAT_14c9e4ba8 = 0x3fd066c800000000;
  _DAT_14c9e4bb0 = 0x3fd46bf600000000;
  _DAT_14c9e4bb8 = 0xbfaaf22ea0000000;
  _DAT_14c9e4bc0 = 0xbfe40b63a0000000;
  _DAT_14c9e4bc8 = 0xbfe8e32c00000000;
  _DAT_14c9e4bd0 = 0xbfe2724100000000;
  _DAT_14c9e4bd8 = 0x3fea111020000000;
  _DAT_14c9e4be0 = 0x3fb084d800000000;
  _DAT_14c9e4be8 = 0x3fefd266c0000000;
  _DAT_14c9e4bf0 = 0x3fb30d29e0000000;
  _DAT_14c9e4bf8 = 0xbfb3181800000000;
  _DAT_14c9e4c00 = 0xbfe7998b00000000;
  _DAT_14c9e4c08 = 0x3fd1673700000000;
  _DAT_14c9e4c10 = 0x3fe3c83a00000000;
  _DAT_14c9e4c18 = 0x3f7ad2af00000000;
  _DAT_14c9e4c20 = 0x3f9fdf10e0000000;
  _DAT_14c9e4c28 = 0xbfeffbdb00000000;
  _DAT_14c9e4c30 = 0xbfe9d61580000000;
  _DAT_14c9e4c38 = 0xbfc7b74500000000;
  _DAT_14c9e4c40 = 0x3fe1ed0200000000;
  _DAT_14c9e4c48 = 0xbfb32f52e0000000;
  _DAT_14c9e4c50 = 0xbfd27a8760000000;
  _DAT_14c9e4c58 = 0xbfee8b0c00000000;
  _DAT_14c9e4c60 = 0xbfe700ed60000000;
  _DAT_14c9e4c68 = 0x3fe08b0d80000000;
  _DAT_14c9e4c70 = 0xbfddbe2000000000;
  _DAT_14c9e4c78 = 0x3fd7544880000000;
  _DAT_14c9e4c80 = 0xbfa8e09440000000;
  _DAT_14c9e4c88 = 0x3fedc1f700000000;
  _DAT_14c9e4c90 = 0xbfc329b200000000;
  _DAT_14c9e4c98 = 0x3fee21b8e0000000;
  _DAT_14c9e4ca0 = 0xbfd34cf200000000;
  _DAT_14c9e4ca8 = 0xbfec407680000000;
  _DAT_14c9e4cb0 = 0xbfcc2c7460000000;
  _DAT_14c9e4cb8 = 0xbfda8cce00000000;
  _DAT_14c9e4cc0 = 0xbfb5036fe0000000;
  _DAT_14c9e4cc8 = 0x3fe6eb9980000000;
  _DAT_14c9e4cd0 = 0xbfe62cf800000000;
  _DAT_14c9e4cd8 = 0x3fe61d2a40000000;
  _DAT_14c9e4ce0 = 0xbfe0b7e440000000;
  _DAT_14c9e4ce8 = 0x3fdff78c00000000;
  _DAT_14c9e4cf0 = 0xbfe10ba260000000;
  _DAT_14c9e4cf8 = 0xbfde4c6480000000;
  _DAT_14c9e4d00 = 0x3fe672ed00000000;
  _DAT_14c9e4d08 = 0x3fd2a7f400000000;
  _DAT_14c9e4d10 = 0x3fd01b6440000000;
  _DAT_14c9e4d18 = 0x3fed882600000000;
  _DAT_14c9e4d20 = 0xbfb1c9f200000000;
  _DAT_14c9e4d28 = 0xbfa3946c80000000;
  _DAT_14c9e4d30 = 0x3fefe63100000000;
  _DAT_14c9e4d38 = 0x3fea0cb6e0000000;
  _DAT_14c9e4d40 = 0xbfe21dcf40000000;
  _DAT_14c9e4d48 = 0xbfc0980000000000;
  _DAT_14c9e4d50 = 0xbfe1029320000000;
  _DAT_14c9e4d58 = 0xbfbfa5ce40000000;
  _DAT_14c9e4d60 = 0x3fead07800000000;
  _DAT_14c9e4d68 = 0xbfefb31c80000000;
  _DAT_14c9e4d70 = 0x3fbba8a040000000;
  _DAT_14c9e4d78 = 0xbfb56f4000000000;
  _DAT_14c9e4d80 = 0xbfe7f4f600000000;
  _DAT_14c9e4d88 = 0xbfd3bda980000000;
  _DAT_14c9e4d90 = 0xbfe2c75e00000000;
  _DAT_14c9e4d98 = 0x3fed3b7780000000;
  _DAT_14c9e4da0 = 0xbfd9f87460000000;
  _DAT_14c9e4da8 = 0x3f9d9c2000000000;
  _DAT_14c9e4db0 = 0x3fe006b900000000;
  _DAT_14c9e4db8 = 0x3fe1665340000000;
  _DAT_14c9e4dc0 = 0x3fe58cd700000000;
  _DAT_14c9e4dc8 = 0x3fea3a9980000000;
  _DAT_14c9e4dd0 = 0x3fd109e800000000;
  _DAT_14c9e4dd8 = 0xbfe03b4b00000000;
  _DAT_14c9e4de0 = 0x3fedaf0a00000000;
  _DAT_14c9e4de8 = 0x3fd7375000000000;
  _DAT_14c9e4df0 = 0xbfb6cf1000000000;
  _DAT_14c9e4df8 = 0xbfdb1bfd20000000;
  _DAT_14c9e4e00 = 0x3fe3d27d40000000;
  _DAT_14c9e4e08 = 0xbfe5269200000000;
  _DAT_14c9e4e10 = 0xbfe7791860000000;
  _DAT_14c9e4e18 = 0x3fe345d960000000;
  _DAT_14c9e4e20 = 0x3fd4282400000000;
  _DAT_14c9e4e28 = 0xbfdb5e5d40000000;
  _DAT_14c9e4e30 = 0xbfe5f7b6c0000000;
  _DAT_14c9e4e38 = 0xbfe2d1b800000000;
  _DAT_14c9e4e40 = 0x3fd5330ee0000000;
  _DAT_14c9e4e48 = 0xbfe1c028c0000000;
  _DAT_14c9e4e50 = 0xbfe86cb300000000;
  _DAT_14c9e4e58 = 0xbfdd6c2120000000;
  _DAT_14c9e4e60 = 0x3fe9cd8c20000000;
  _DAT_14c9e4e68 = 0xbfd7d0ac00000000;
  _DAT_14c9e4e70 = 0x3fe558fc80000000;
  _DAT_14c9e4e78 = 0x3fce35f080000000;
  _DAT_14c9e4e80 = 0x3fe69c4d00000000;
  _DAT_14c9e4e88 = 0x3fe56817e0000000;
  _DAT_14c9e4e90 = 0xbfe5548fc0000000;
  _DAT_14c9e4e98 = 0xbfd50cc600000000;
  _DAT_14c9e4ea0 = 0xbfe9e1ee00000000;
  _DAT_14c9e4ea8 = 0x3fe1830be0000000;
  _DAT_14c9e4eb0 = 0xbfcb8c1000000000;
  _DAT_14c9e4eb8 = 0xbfee07f040000000;
  _DAT_14c9e4ec0 = 0x3fbfddbf20000000;
  _DAT_14c9e4ec8 = 0xbfd49e1e00000000;
  _DAT_14c9e4ed0 = 0x3fe860d2c0000000;
  _DAT_14c9e4ed8 = 0x3fe451dbc0000000;
  _DAT_14c9e4ee0 = 0xbfc0666800000000;
  _DAT_14c9e4ee8 = 0xbfd4ad07e0000000;
  _DAT_14c9e4ef0 = 0xbfc91d8680000000;
  _DAT_14c9e4ef8 = 0xbfeda04500000000;
  _DAT_14c9e4f00 = 0x3fe53827c0000000;
  _DAT_14c9e4f08 = 0x3fe79cca60000000;
  _DAT_14c9e4f10 = 0x3fc0185400000000;
  _DAT_14c9e4f18 = 0xbfc9d6b260000000;
  _DAT_14c9e4f20 = 0x3fea96e880000000;
  _DAT_14c9e4f28 = 0x3fe0976100000000;
  _DAT_14c9e4f30 = 0x3fe1165be0000000;
  _DAT_14c9e4f38 = 0x3feaa6e420000000;
  _DAT_14c9e4f40 = 0xbfc2a1ec00000000;
  _DAT_14c9e4f48 = 0x3fcdc62d20000000;
  _DAT_14c9e4f50 = 0xbfe7ac9500000000;
  _DAT_14c9e4f58 = 0x3fe433c300000000;
  _DAT_14c9e4f60 = 0x3fae2f1a40000000;
  _DAT_14c9e4f68 = 0xbfe9d3f6e0000000;
  _DAT_14c9e4f70 = 0xbfe2cc3b00000000;
  _DAT_14c9e4f78 = 0x3fd8f3aec0000000;
  _DAT_14c9e4f80 = 0xbfecb1b3a0000000;
  _DAT_14c9e4f88 = 0xbfcad4f800000000;
  _DAT_14c9e4f90 = 0x3fd1d995e0000000;
  _DAT_14c9e4f98 = 0xbfeea587c0000000;
  _DAT_14c9e4fa0 = 0x3fb21f0800000000;
  _DAT_14c9e4fa8 = 0x3fdfd55d20000000;
  _DAT_14c9e4fb0 = 0x3fe4f90340000000;
  _DAT_14c9e4fb8 = 0xbfe2302100000000;
  _DAT_14c9e4fc0 = 0x3fcf506ea0000000;
  _DAT_14c9e4fc8 = 0x3fe635c020000000;
  _DAT_14c9e4fd0 = 0x3fe5aa9700000000;
  _DAT_14c9e4fd8 = 0x3fe0092800000000;
  _DAT_14c9e4fe0 = 0xbfd219d220000000;
  _DAT_14c9e4fe8 = 0xbfea2be300000000;
  _DAT_14c9e4ff0 = 0xbfc68811e0000000;
  _DAT_14c9e4ff8 = 0xbfde2699a0000000;
  _DAT_14c9e5000 = 0xbfeba8a000000000;
  _DAT_14c9e5008 = 0xbfef1ea040000000;
  _DAT_14c9e5010 = 0xbfc4fcb3c0000000;
  _DAT_14c9e5018 = 0xbfc52e5c00000000;
  _DAT_14c9e5020 = 0xbfb2e08540000000;
  _DAT_14c9e5028 = 0x3fe0019480000000;
  _DAT_14c9e5030 = 0xbfeb9bcd00000000;
  _DAT_14c9e5038 = 0x3fd4f4dce0000000;
  _DAT_14c9e5040 = 0x3febde8300000000;
  _DAT_14c9e5048 = 0xbfd7740e00000000;
  _DAT_14c9e5050 = 0xbfd4033460000000;
  _DAT_14c9e5058 = 0x3fb3b14200000000;
  _DAT_14c9e5060 = 0xbfee4ba400000000;
  _DAT_14c9e5068 = 0x3f8dd59640000000;
  _DAT_14c9e5070 = 0xbfefed7ce0000000;
  _DAT_14c9e5078 = 0xbfb0caa800000000;
  _DAT_14c9e5080 = 0xbfc4bd0960000000;
  _DAT_14c9e5088 = 0xbfed6a3b20000000;
  _DAT_14c9e5090 = 0x3fd6f7c000000000;
  _DAT_14c9e5098 = 0xbfe9356040000000;
  _DAT_14c9e50a0 = 0xbfe2552940000000;
  _DAT_14c9e50a8 = 0x3fccf7b400000000;
  _DAT_14c9e50b0 = 0x3fc618a440000000;
  _DAT_14c9e50b8 = 0xbfcebd60a0000000;
  _DAT_14c9e50c0 = 0xbfee918200000000;
  _DAT_14c9e50c8 = 0xbfc7e4f2c0000000;
  _DAT_14c9e50d0 = 0x3fe192efe0000000;
  _DAT_14c9e50d8 = 0x3fea111200000000;
  _DAT_14c9e50e0 = 0xbfe9894660000000;
  _DAT_14c9e50e8 = 0xbfdebaed20000000;
  _DAT_14c9e50f0 = 0xbfd74ed400000000;
  _DAT_14c9e50f8 = 0xbfe23333e0000000;
  _DAT_14c9e5100 = 0xbfde541540000000;
  _DAT_14c9e5108 = 0xbfe5834f00000000;
  _DAT_14c9e5110 = 0xbfe4d1c400000000;
  _DAT_14c9e5118 = 0xbfe71078a0000000;
  _DAT_14c9e5120 = 0xbfce9e0c00000000;
  _DAT_14c9e5128 = 0xbfe0166c40000000;
  _DAT_14c9e5130 = 0x3fe9378280000000;
  _DAT_14c9e5138 = 0x3fd6bdfa00000000;
  _DAT_14c9e5140 = 0xbfe04345c0000000;
  _DAT_14c9e5148 = 0xbfeb7fe480000000;
  _DAT_14c9e5150 = 0x3fad0b1000000000;
  _DAT_14c9e5158 = 0xbfe9c19ac0000000;
  _DAT_14c9e5160 = 0xbfe25bdc00000000;
  _DAT_14c9e5168 = 0xbfc36b3800000000;
  _DAT_14c9e5170 = 0x3fe4243200000000;
  _DAT_14c9e5178 = 0xbfe8a4e640000000;
  _DAT_14c9e5180 = 0x3fba85b800000000;
  _DAT_14c9e5188 = 0x3fd3954880000000;
  _DAT_14c9e5190 = 0x3fedfe6c20000000;
  _DAT_14c9e5198 = 0xbfc55a2c00000000;
  _DAT_14c9e51a0 = 0xbfdc7dbb00000000;
  _DAT_14c9e51a8 = 0xbfe9ff8500000000;
  _DAT_14c9e51b0 = 0x3fd818ba00000000;
  _DAT_14c9e51b8 = 0x3fc8c7c9a0000000;
  _DAT_14c9e51c0 = 0xbfccbf4d60000000;
  _DAT_14c9e51c8 = 0x3fee8f9900000000;
  _DAT_14c9e51d0 = 0x3fd0169cc0000000;
  _DAT_14c9e51d8 = 0xbfeb5abd40000000;
  _DAT_14c9e51e0 = 0xbfdd0dae00000000;
  _DAT_14c9e51e8 = 0xbf8d8f2640000000;
  _DAT_14c9e51f0 = 0xbfdbbb3e00000000;
  _DAT_14c9e51f8 = 0x3fecd61400000000;
  _DAT_14c9e5200 = 0x3fe120c620000000;
  _DAT_14c9e5208 = 0x3fc2a83be0000000;
  _DAT_14c9e5210 = 0xbfea9fed00000000;
  _DAT_14c9e5218 = 0x3fe969b8e0000000;
  _DAT_14c9e5220 = 0x3fdf4c5220000000;
  _DAT_14c9e5228 = 0x3fd7170c00000000;
  _DAT_14c9e5230 = 0xbfe782ed00000000;
  _DAT_14c9e5238 = 0xbf4e34dd40000000;
  _DAT_14c9e5240 = 0xbfe5b51900000000;
  _DAT_14c9e5248 = 0xbfeefff1e0000000;
  _DAT_14c9e5250 = 0xbfcd234ee0000000;
  _DAT_14c9e5258 = 0x3fb93c0800000000;
  _DAT_14c9e5260 = 0xbfd43a9b40000000;
  _DAT_14c9e5268 = 0xbfd0446820000000;
  _DAT_14c9e5270 = 0x3fed3fe900000000;
  _DAT_14c9e5278 = 0x3fe3f9b480000000;
  _DAT_14c9e5280 = 0x3fe6faaec0000000;
  _DAT_14c9e5288 = 0xbfd3b10200000000;
  _DAT_14c9e5290 = 0x3f96b59d20000000;
  _DAT_14c9e5298 = 0x3fd5d66300000000;
  _DAT_14c9e52a0 = 0x3fee123b00000000;
  _DAT_14c9e52a8 = 0x3feef40e20000000;
  _DAT_14c9e52b0 = 0xbf969448a0000000;
  _DAT_14c9e52b8 = 0x3fd02c5600000000;
  _DAT_14c9e52c0 = 0x3fea6af860000000;
  _DAT_14c9e52c8 = 0xbfc757c8c0000000;
  _DAT_14c9e52d0 = 0x3fe116d700000000;
  _DAT_14c9e52d8 = 0xbfdf85dde0000000;
  _DAT_14c9e52e0 = 0x3fd88ec600000000;
  _DAT_14c9e52e8 = 0x3fe8ff0200000000;
  _DAT_14c9e52f0 = 0xbfd3a47aa0000000;
  _DAT_14c9e52f8 = 0x3fee478700000000;
  _DAT_14c9e5300 = 0x3fba2b7800000000;
  _DAT_14c9e5308 = 0x3faf5f4600000000;
  _DAT_14c9e5310 = 0x3fd7c4bf40000000;
  _DAT_14c9e5318 = 0xbfeda58600000000;
  local_58._0_4_ = 1;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14c9e5320,L"r.CullInstances",&local_58,L"CullInstances.");
  atexit(FUN_142cc59d4);
  local_58 = (undefined *)((ulonglong)local_58._4_4_ << 0x20);
  local_68 = 0x120;
  FUN_14078dbce(&DAT_14c9e5338,L"r.InstanceCulling.OcclusionCull",&local_58,
                L"Whether to do per instance occlusion culling for GPU instance culling.");
  atexit(FUN_142cc5a19);
  local_68 = 0x20;
  FUN_141471170(&DAT_14c9e5350,L"r.InstanceCulling.ForceInstanceCulling",&DAT_14c9e5360,
                L"Whether to force per instance occlusion culling.");
  atexit(FUN_142cc5a5e);
  local_68 = 0x20;
  FUN_141471170(&DAT_14c9e5368,L"r.InstanceCulling.AllowInstanceOrderPreservation",&DAT_14c760434,
                L"Whether or not to allow instances to preserve instance draw order using GPU compaction."
               );
  atexit(FUN_142cc5aa3);
  FUN_1411e592c(&DAT_14c9e5378,L"InstanceCullingUbSlot");
  local_50 = FUN_1449865da;
  local_58 = &DAT_14152059c;
  FUN_14142a670(&DAT_14c9e5408,&local_58);
  FUN_1411e592c(&DAT_14c9e5418,L"BatchedPrimitive");
  local_50 = FUN_144a92736;
  local_58 = &DAT_14152059c;
  FUN_14142a670(&DAT_14c9e54a8,&local_58);
  local_50 = FUN_1401afb40;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9e55e0,&local_58);
  local_50 = FUN_1401b1298;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9e5708,&local_58);
  local_50 = FUN_1471be3de;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9e5830,&local_58);
  local_50 = FUN_1471be726;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9e5958,&local_58);
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cdb93c FUN_142cdb93c body=69 status=ok
// SIG undefined FUN_142cdb93c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cdb93c(void)

{
  _DAT_14c9e7578 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cdb97e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e7580,1);
  return;
}



// FUNCTION 142cdb982 FUN_142cdb982 body=88 status=ok
// SIG undefined FUN_142cdb982(void)

void FUN_142cdb982(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  
  FUN_1402d7a48();
  if ((((*(char *)(param_3 + 0x37c) == '\x01') && (DAT_14c760438 != 0)) &&
      (*(int *)(param_3 + 0x234 + (ulonglong)*(byte *)(param_3 + 0x300) * 4) != 0)) &&
     (*(int *)(param_1 + 0x48) != 0)) {
    uVar1 = FUN_142cc6b68(param_2,param_3,param_1);
    *(undefined8 *)(param_1 + 0x38) = uVar1;
  }
  return;
}



// FUNCTION 142cdb9da FUN_142cdb9da body=69 status=ok
// SIG undefined FUN_142cdb9da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cdb9da(void)

{
  _DAT_14c9e7588 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cdba1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e7590,1);
  return;
}



// FUNCTION 142cdba1f FUN_142cdba1f body=69 status=ok
// SIG undefined FUN_142cdba1f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cdba1f(void)

{
  _DAT_14c9e75a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cdba61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e75a8,1);
  return;
}



// FUNCTION 142cdba88 FUN_142cdba88 body=47 status=ok
// SIG undefined FUN_142cdba88(void)

void FUN_142cdba88(void)

{
  DAT_14c9e7928 = &PTR_FUN_14a2479c0;
  FUN_144725486(&DAT_14c9e7928);
  FUN_1462d69ee(&DAT_14c9e7928);
  return;
}



// FUNCTION 142cdbab8 FUN_142cdbab8 body=8185 status=ok
// SIG undefined FUN_142cdbab8(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff28 : 0x000142cdc4c8 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_142cdbab8(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  char cVar12;
  int iVar13;
  undefined ***pppuVar14;
  longlong *plVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined4 uVar19;
  undefined8 *puVar20;
  uint uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  byte bVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_338 [32];
  code **local_318;
  undefined2 *local_310;
  byte local_301;
  ulonglong *local_300;
  longlong local_2f8;
  int local_2ec;
  undefined8 *local_2e8;
  undefined8 *local_2e0;
  undefined8 *local_2d8;
  uint local_2cc;
  undefined8 *local_2c8;
  longlong *local_2c0;
  undefined8 *local_2b8;
  ulonglong local_2b0;
  int local_2a4;
  int local_2a0;
  int local_29c;
  longlong local_298;
  undefined8 *local_290;
  ulonglong local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined4 local_250;
  code *local_238;
  undefined ***local_228;
  undefined **local_218;
  undefined8 *local_210;
  code *local_1f8;
  longlong *local_1e8 [2];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  code *local_1b8 [2];
  longlong *local_1a8 [2];
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  code *local_178 [2];
  longlong *local_168 [2];
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  code *local_138;
  undefined4 local_130;
  longlong *local_128 [2];
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined2 local_b8;
  undefined1 uStack_b6;
  undefined1 uStack_b5;
  int iStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_338;
  lVar17 = 0x39;
  bVar8 = false;
  do {
    uVar21 = (&DAT_14c873430)[lVar17 * 0xc];
    if ((uVar21 & 0x600000) == 0x600000) break;
    lVar17 = 0x1c;
    bVar6 = !bVar8;
    bVar8 = true;
  } while (bVar6);
  iVar13 = 0;
  iVar9 = 0;
  if (((*(byte *)((longlong)&DAT_14ca814d0 +
                 (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_4 + 0x3090) * 2) *
                 0x3c + 6) & 2) != 0) &&
     (plVar15 = *(longlong **)(param_4 + 0x10), plVar15 != (longlong *)0x0)) {
    if (*(code **)(*plVar15 + 0x58) == (code *)&LAB_144b15db2) {
      iVar10 = (int)plVar15[4];
    }
    else {
      iVar10 = (**(code **)(*plVar15 + 0x58))();
    }
    if (((((iVar10 != 0) &&
          (iVar13 = iVar9,
          *(longlong *)(*(longlong *)(*(longlong *)(param_4 + 8) + 0x348) + 0x1c0) != 0)) &&
         ((uVar21 & 0x600000) == 0x600000)) &&
        ((*(longlong *)(param_4 + 0x136f0) != 0 && (*(int *)(DAT_14c9e7598 + 4) != 0)))) &&
       (iVar9 = FUN_1471d050a(param_1), iVar9 != 0)) {
      local_301 = 1 < *(int *)(param_1 + 0x20);
      local_2d8 = (undefined8 *)0x0;
      if (0 < DAT_14c76043c) {
        local_2d8 = (undefined8 *)(param_4 + 0x51c0);
      }
      iVar13 = *(int *)(param_3 + 0x234 + (ulonglong)*(byte *)(param_3 + 0x300) * 4);
      puVar1 = (ulonglong *)(param_2 + 0x70);
      local_2e8 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar11 = local_2e8 + 0xb;
      local_300 = puVar1;
      local_2ec = iVar9;
      if (*(undefined8 **)(param_2 + 0x78) < puVar11) {
        FUN_140023dd8(puVar1,0x68);
        local_2e8 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
        puVar11 = local_2e8 + 0xb;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar11;
      *local_2e8 = &PTR_FUN_14a247b58;
      *(undefined2 *)(local_2e8 + 1) = 0;
      local_2e8[2] = param_4;
      *(int *)(local_2e8 + 3) = iVar13;
      *(undefined1 *)((longlong)local_2e8 + 0x1c) = 2;
      local_2e8[4] = local_2d8;
      local_2e8[5] = 0;
      local_2e8[6] = 0;
      local_2e8[7] = DAT_14c9a5298;
      *(undefined4 *)(local_2e8 + 8) = DAT_14c9a52a0;
      local_2c0 = (longlong *)(param_2 + 0x98);
      local_2e8[9] = 0;
      local_2e8[10] = 0;
      iVar9 = *(int *)(param_2 + 0xa0);
      *(uint *)(param_2 + 0xa0) = iVar9 + 1U;
      if (*(uint *)(param_2 + 0xa4) < iVar9 + 1U) {
        FUN_1448cfae8(local_2c0,iVar9);
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar9 * 8) = local_2e8;
      local_2e8 = local_2e8 + 1;
      local_280 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_4 + 8) + 0x348) + 0x1c0);
      local_298 = *(longlong *)(param_4 + 0x136f0);
      local_29c = *(int *)(local_298 + 0x84);
      local_2a0 = *(int *)(local_298 + 0x88);
      FUN_1449b4134(param_3,&local_278,param_2);
      puVar1 = local_300;
      local_2b0 = (ulonglong)*(uint *)(param_4 + 0x3104);
      local_2e0 = (undefined8 *)CONCAT44(local_2e0._4_4_,*(undefined4 *)(param_4 + 0x30f8));
      local_2a4 = *(int *)(param_4 + 0x30fc);
      local_2cc = *(int *)(param_4 + 0x3100);
      bVar8 = false;
      iVar9 = 0x39;
      do {
        iVar10 = iVar9;
        uVar21 = *(uint *)((longlong)&DAT_14c873430 + (ulonglong)(uint)(iVar10 * 0x30)) & 0x600000;
        if (bVar8) break;
        bVar8 = true;
        iVar9 = 0x1c;
      } while (uVar21 != 0x600000);
      iVar9 = 0;
      if (uVar21 == 0x600000) {
        iVar9 = iVar10;
      }
      lVar17 = *(longlong *)(param_1 + 0x10);
      if (lVar17 == 0) {
        uVar21 = *(uint *)((longlong)&DAT_14c873428 + (ulonglong)(uint)(iVar9 * 0x30));
        uVar16 = iVar13 + 0x7e;
        if (-1 < (int)(iVar13 + 0x3fU)) {
          uVar16 = iVar13 + 0x3fU;
        }
        if (DAT_14ca84e48 <= uVar21) {
          uVar21 = DAT_14ca84e48;
        }
        iVar10 = uVar21 + (uVar21 == 0);
        uStack_b0 = 0x4109;
        uVar21 = uVar16 & 0xffffffc0;
        if (DAT_14ca84e48 <= (uVar16 & 0xffffffc0)) {
          uVar21 = DAT_14ca84e48;
        }
        local_a8 = (longlong *)0x0;
        iStack_b4 = uVar21 + (uVar21 == 0);
        local_b8 = (undefined2)iVar10;
        uStack_b6 = (undefined1)((uint)iVar10 >> 0x10);
        uStack_b5 = (undefined1)((uint)iVar10 >> 0x18);
        uVar25 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
        uVar26 = uVar25 + 0x150;
        if (*(ulonglong *)(param_2 + 0x78) < uVar26) {
          FUN_140023dd8(local_300,0x160);
          uVar25 = *puVar1 + 0xf & 0xfffffffffffffff0;
          uVar26 = uVar25 + 0x150;
        }
        *(ulonglong *)(param_2 + 0x70) = uVar26;
        FUN_1456bd266(uVar25,L"FInstanceCullingOcclusionQueryRenderer_VisibleInstanceMask",&local_b8
                      ,0);
        iVar10 = *(int *)(param_2 + 400);
        *(uint *)(param_2 + 400) = iVar10 + 1U;
        if (*(uint *)(param_2 + 0x194) < iVar10 + 1U) {
          FUN_144737178(param_2 + 0x188,iVar10);
        }
        puVar1 = local_300;
        *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar10 * 8) = uVar25;
        *(int *)(uVar25 + 0x7c) = *(int *)(param_2 + 400) + -1;
        *(ulonglong *)(param_1 + 0x10) = uVar25;
        *(char *)(param_1 + 8) = (char)iVar9;
        *(int *)(param_1 + 0x28) = iVar13;
        puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar11 = puVar22 + 8;
        if (*(undefined8 **)(param_2 + 0x78) < puVar11) {
          FUN_140023dd8(local_300,0x48);
          puVar22 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar22 + 8;
        }
        *(undefined8 **)(param_2 + 0x70) = puVar11;
        puVar22[1] = *(undefined8 *)(uVar25 + 8);
        puVar22[2] = 0;
        *(undefined1 *)(puVar22 + 3) = 2;
        *(undefined8 *)((longlong)puVar22 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(puVar22 + 5) = 0;
        *puVar22 = &PTR_FUN_14a1fb3e8;
        *(undefined2 *)(puVar22 + 6) = 0x30;
        *(undefined1 *)((longlong)puVar22 + 0x32) = 0;
        puVar22[7] = uVar25;
        iVar13 = *(int *)(param_2 + 0x1a0);
        *(uint *)(param_2 + 0x1a0) = iVar13 + 1U;
        if (*(uint *)(param_2 + 0x1a4) < iVar13 + 1U) {
          FUN_1447568fc(param_2 + 0x198,iVar13);
        }
        *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar13 * 8) = puVar22;
        *(int *)((longlong)puVar22 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
        FUN_1405bfba3(param_2,puVar22,0xffffffff,2);
        lVar17 = *(longlong *)(param_1 + 0x10);
      }
      puVar1 = local_300;
      local_2c8 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar11 = local_2c8 + 8;
      if (*(undefined8 **)(param_2 + 0x78) < puVar11) {
        FUN_140023dd8(local_300,0x48);
        local_2c8 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar11 = local_2c8 + 8;
      }
      local_2f8 = param_2 + 0x198;
      *(undefined8 **)(param_2 + 0x70) = puVar11;
      local_2c8[1] = *(undefined8 *)(lVar17 + 8);
      local_2c8[2] = 0;
      *(undefined1 *)(local_2c8 + 3) = 2;
      *(undefined8 *)((longlong)local_2c8 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(local_2c8 + 5) = 0;
      *local_2c8 = &PTR_FUN_14a1fb3e8;
      *(char *)(local_2c8 + 6) = (char)iVar9;
      *(undefined2 *)((longlong)local_2c8 + 0x31) = 0;
      local_2c8[7] = lVar17;
      iVar13 = *(int *)(param_2 + 0x1a0);
      *(uint *)(param_2 + 0x1a0) = iVar13 + 1U;
      if (*(uint *)(param_2 + 0x1a4) < iVar13 + 1U) {
        FUN_1447568fc(local_2f8,iVar13);
      }
      puVar1 = local_300;
      *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar13 * 8) = local_2c8;
      *(int *)((longlong)local_2c8 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
      local_a8 = (longlong *)0x0;
      uVar21 = 0x14;
      if (DAT_14ca84e48 < 0x14) {
        uVar21 = DAT_14ca84e48;
      }
      iVar13 = uVar21 + (uVar21 == 0);
      local_b8 = (undefined2)iVar13;
      uStack_b6 = (undefined1)((uint)iVar13 >> 0x10);
      uStack_b5 = (undefined1)((uint)iVar13 >> 0x18);
      iStack_b4 = 1;
      uStack_b0 = 0x4189;
      uVar25 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
      uVar26 = uVar25 + 0x150;
      if (*(ulonglong *)(param_2 + 0x78) < uVar26) {
        FUN_140023dd8(local_300,0x160);
        uVar25 = *puVar1 + 0xf & 0xfffffffffffffff0;
        uVar26 = uVar25 + 0x150;
      }
      lVar17 = param_2 + 0x188;
      *(ulonglong *)(param_2 + 0x70) = uVar26;
      FUN_1456bd266(uVar25,L"FInstanceCullingOcclusionQueryRenderer_IndirectArgsBuffer",&local_b8,0)
      ;
      iVar13 = *(int *)(param_2 + 400);
      *(uint *)(param_2 + 400) = iVar13 + 1U;
      if (*(uint *)(param_2 + 0x194) < iVar13 + 1U) {
        FUN_144737178(lVar17,iVar13);
      }
      puVar1 = local_300;
      *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar13 * 8) = uVar25;
      *(int *)(uVar25 + 0x7c) = *(int *)(param_2 + 400) + -1;
      puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar22 + 8;
      if (*(undefined8 **)(param_2 + 0x78) < puVar11) {
        FUN_140023dd8(local_300,0x48);
        puVar22 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar22 + 8;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar11;
      puVar22[1] = *(undefined8 *)(uVar25 + 8);
      puVar22[2] = 0;
      *(undefined1 *)(puVar22 + 3) = 2;
      *(undefined8 *)((longlong)puVar22 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar22 + 5) = 0;
      *puVar22 = &PTR_FUN_14a1fb3e8;
      *(undefined2 *)(puVar22 + 6) = 0x1c;
      *(undefined1 *)((longlong)puVar22 + 0x32) = 0;
      puVar22[7] = uVar25;
      iVar13 = *(int *)(param_2 + 0x1a0);
      *(uint *)(param_2 + 0x1a0) = iVar13 + 1U;
      local_288 = uVar25;
      if (*(uint *)(param_2 + 0x1a4) < iVar13 + 1U) {
        FUN_1447568fc(local_2f8,iVar13);
      }
      puVar1 = local_300;
      *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar13 * 8) = puVar22;
      *(int *)((longlong)puVar22 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
      local_2b8 = (undefined8 *)lVar17;
      if (local_2d8 == (undefined8 *)0x0) {
        local_e8 = (longlong *)0x0;
        local_d8 = &PTR_LAB_14a245f40;
        uStack_d0 = local_2e8;
        local_f8 = FUN_1471d3abe;
        local_138 = (code *)&DAT_100000004;
        local_130 = 0x4109;
        local_128[0] = (longlong *)0x0;
        uVar26 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
        uVar25 = uVar26 + 0x150;
        if (*(ulonglong *)(param_2 + 0x78) < uVar25) {
          FUN_140023dd8(local_300,0x160);
          uVar26 = *puVar1 + 0xf & 0xfffffffffffffff0;
          uVar25 = uVar26 + 0x150;
        }
        *(ulonglong *)(param_2 + 0x70) = uVar25;
        FUN_1456bd266(uVar26,L"FInstanceCullingOcclusionQueryRenderer_SetupInstanceIdBuffer",
                      &local_138,0);
        lVar2 = *(longlong *)(uVar26 + 0xf0);
        local_a8 = *(longlong **)(uVar26 + 0x100);
        uStack_a0 = *(undefined8 *)(uVar26 + 0x108);
        local_98 = *(undefined ***)(uVar26 + 0x110);
        uStack_90 = *(undefined8 **)(uVar26 + 0x118);
        local_88 = *(undefined8 *)(uVar26 + 0x120);
        uStack_80 = *(undefined8 *)(uVar26 + 0x128);
        uVar5 = local_88;
        uVar7 = uStack_80;
        uVar3 = uStack_a0;
        local_b8 = (undefined2)lVar2;
        uStack_b6 = (undefined1)((ulonglong)lVar2 >> 0x10);
        uStack_b5 = (undefined1)((ulonglong)lVar2 >> 0x18);
        iStack_b4 = (int)((ulonglong)lVar2 >> 0x20);
        uStack_b0 = (undefined4)*(undefined8 *)(uVar26 + 0xf8);
        uStack_ac = (undefined4)((ulonglong)*(undefined8 *)(uVar26 + 0xf8) >> 0x20);
        *(ulonglong *)(uVar26 + 0x120) = CONCAT44(uStack_c4,local_c8);
        *(ulonglong *)(uVar26 + 0x128) = CONCAT44(uStack_bc,uStack_c0);
        *(undefined ***)(uVar26 + 0x110) = local_d8;
        *(undefined8 **)(uVar26 + 0x118) = uStack_d0;
        *(longlong **)(uVar26 + 0x100) = local_e8;
        *(ulonglong *)(uVar26 + 0x108) = CONCAT44(uStack_dc,uStack_e0);
        *(code **)(uVar26 + 0xf0) = local_f8;
        *(ulonglong *)(uVar26 + 0xf8) = CONCAT44(uStack_ec,uStack_f0);
        uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
        local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
        uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
        local_c8 = (undefined4)local_88;
        uStack_c4 = local_88._4_4_;
        uStack_c0 = (undefined4)uStack_80;
        uStack_bc = uStack_80._4_4_;
        local_d8 = local_98;
        uStack_d0 = uStack_90;
        local_e8 = local_a8;
        uStack_e0 = (undefined4)uStack_a0;
        uStack_dc = uStack_a0._4_4_;
        local_f8 = (code *)lVar2;
        uStack_f0 = uStack_b0;
        uStack_ec = uStack_ac;
        iVar13 = *(int *)(param_2 + 400);
        *(uint *)(param_2 + 400) = iVar13 + 1U;
        uStack_a0 = uVar3;
        local_88 = uVar5;
        uStack_80 = uVar7;
        if (*(uint *)(param_2 + 0x194) < iVar13 + 1U) {
          FUN_144737178(lVar17,iVar13);
        }
        *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar13 * 8) = uVar26;
        *(int *)(uVar26 + 0x7c) = *(int *)(param_2 + 400) + -1;
        iVar13 = *(int *)(param_2 + 0x2d0);
        *(uint *)(param_2 + 0x2d0) = iVar13 + 1U;
        if (*(uint *)(param_2 + 0x2d4) < iVar13 + 1U) {
          FUN_144737178((longlong *)(param_2 + 0x2c8),iVar13);
        }
        *(ulonglong *)(*(longlong *)(param_2 + 0x2c8) + (longlong)iVar13 * 8) = uVar26;
        if (local_f8 != (code *)0x0) {
          plVar15 = local_e8;
          if (local_e8 == (longlong *)0x0) {
            plVar15 = &local_d8;
          }
          (**(code **)(*plVar15 + 0x10))();
        }
        local_a8 = (longlong *)0x0;
        local_98 = &PTR_LAB_14a245f60;
        uStack_90 = local_2e8;
        local_b8 = 0x3b22;
        uStack_b6 = 0x1d;
        uStack_b5 = 0x47;
        iStack_b4 = 1;
        local_e8 = (longlong *)0x0;
        local_d8 = &PTR_LAB_14a245f80;
        uStack_d0 = local_2e8;
        local_f8 = FUN_1471d3b8a;
        iVar13 = *(int *)(param_2 + 0x590);
        *(uint *)(param_2 + 0x590) = iVar13 + 1U;
        if (*(uint *)(param_2 + 0x594) < iVar13 + 1U) {
          FUN_144775ac8((longlong *)(param_2 + 0x588),iVar13);
        }
        lVar2 = *(longlong *)(param_2 + 0x588);
        lVar18 = (longlong)iVar13 * 0x120;
        lVar17 = lVar2 + lVar18;
        *(undefined2 *)(lVar2 + lVar18) = 1;
        *(ulonglong *)(lVar2 + 8 + lVar18) = uVar26;
        puVar11 = (undefined8 *)(lVar2 + 0x10 + lVar18);
        *puVar11 = 0;
        puVar11[1] = 0;
        *(code **)(lVar2 + 0x20 + lVar18) = local_f8;
        *(longlong **)(lVar2 + 0x30 + lVar18) = local_e8;
        local_e8 = (longlong *)0x0;
        puVar11 = (undefined8 *)(lVar2 + 0x50 + lVar18);
        *puVar11 = CONCAT44(uStack_c4,local_c8);
        puVar11[1] = CONCAT44(uStack_bc,uStack_c0);
        puVar11 = (undefined8 *)(lVar2 + 0x40 + lVar18);
        *puVar11 = local_d8;
        puVar11[1] = uStack_d0;
        if (*(longlong *)(lVar2 + 0x20 + lVar18) != 0) {
          local_f8 = (code *)0x0;
        }
        *(ulonglong *)(lVar17 + 0x60) =
             CONCAT44(iStack_b4,CONCAT13(uStack_b5,CONCAT12(uStack_b6,local_b8)));
        *(longlong **)(lVar17 + 0x70) = local_a8;
        local_a8 = (longlong *)0x0;
        *(undefined4 *)(lVar17 + 0x90) = (undefined4)local_88;
        *(undefined4 *)(lVar17 + 0x94) = local_88._4_4_;
        *(undefined4 *)(lVar17 + 0x98) = (undefined4)uStack_80;
        *(undefined4 *)(lVar17 + 0x9c) = uStack_80._4_4_;
        *(undefined4 *)(lVar17 + 0x80) = (undefined4)local_98;
        *(undefined4 *)(lVar17 + 0x84) = local_98._4_4_;
        *(undefined4 *)(lVar17 + 0x88) = (undefined4)uStack_90;
        *(undefined4 *)(lVar17 + 0x8c) = uStack_90._4_4_;
        if (*(longlong *)(lVar17 + 0x60) != 0) {
          local_b8 = 0;
          uStack_b6 = 0;
          uStack_b5 = 0;
          iStack_b4 = 0;
        }
        *(undefined8 *)(lVar17 + 0xa0) = 0;
        *(undefined8 *)(lVar17 + 0xb0) = 0;
        *(undefined8 *)(lVar17 + 0xe0) = 0;
        *(undefined8 *)(lVar17 + 0xf0) = 0;
        *(byte *)(uVar26 + 0x24) = *(byte *)(uVar26 + 0x24) | 0x80;
        if (local_f8 != (code *)0x0) {
          (*(code *)local_d8[2])();
        }
        if (CONCAT44(iStack_b4,CONCAT13(uStack_b5,CONCAT12(uStack_b6,local_b8))) != 0) {
          plVar15 = &local_98;
          if (local_a8 != (longlong *)0x0) {
            plVar15 = local_a8;
          }
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
      else {
        local_310 = (undefined2 *)0x0;
        local_318 = (code **)((ulonglong)local_318 & 0xffffffff00000000);
        uVar26 = FUN_14489a2c5(param_2,&DAT_14ca63c48,&DAT_14ca63c78,4);
      }
      puVar1 = local_300;
      puVar24 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar24 + 9;
      if (*(undefined8 **)(param_2 + 0x78) < puVar11) {
        FUN_140023dd8(local_300,0x50);
        puVar24 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar24 + 9;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar11;
      puVar24[1] = *(undefined8 *)(uVar26 + 8);
      puVar24[2] = 0;
      *(undefined1 *)(puVar24 + 3) = 3;
      *(undefined8 *)((longlong)puVar24 + 0x1c) = 0xffffffffffffffff;
      *puVar24 = &PTR_FUN_14a1fb168;
      *(undefined1 *)(puVar24 + 5) = 0x1c;
      *(undefined8 *)((longlong)puVar24 + 0x2c) = 0xffffffff00000000;
      puVar24[7] = 0;
      puVar24[8] = uVar26;
      iVar13 = *(int *)(param_2 + 0x1a0);
      *(uint *)(param_2 + 0x1a0) = iVar13 + 1U;
      if (*(uint *)(param_2 + 0x1a4) < iVar13 + 1U) {
        FUN_1447568fc(local_2f8,iVar13);
      }
      puVar1 = local_300;
      *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar13 * 8) = puVar24;
      *(int *)((longlong)puVar24 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
      local_e8 = (longlong *)0x0;
      local_d8 = &PTR_LAB_14a245fa0;
      uStack_d0 = local_2e8;
      local_f8 = FUN_1471d3bf0;
      local_138 = (code *)&DAT_100000004;
      local_130 = 0x4109;
      local_128[0] = (longlong *)0x0;
      uVar25 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
      uVar26 = uVar25 + 0x150;
      if (*(ulonglong *)(param_2 + 0x78) < uVar26) {
        FUN_140023dd8(local_300,0x160);
        uVar25 = *puVar1 + 0xf & 0xfffffffffffffff0;
        uVar26 = uVar25 + 0x150;
      }
      *(ulonglong *)(param_2 + 0x70) = uVar26;
      FUN_1456bd266(uVar25,L"FInstanceCullingOcclusionQueryRenderer_InstanceIdBuffer",&local_138,0);
      pcVar4 = *(code **)(uVar25 + 0xf0);
      local_a8 = *(longlong **)(uVar25 + 0x100);
      uStack_a0 = *(undefined8 *)(uVar25 + 0x108);
      local_98 = *(undefined ***)(uVar25 + 0x110);
      uStack_90 = *(undefined8 **)(uVar25 + 0x118);
      local_88 = *(undefined8 *)(uVar25 + 0x120);
      uStack_80 = *(undefined8 *)(uVar25 + 0x128);
      uVar5 = local_88;
      uVar7 = uStack_80;
      uVar3 = uStack_a0;
      local_b8 = SUB82(pcVar4,0);
      uStack_b6 = (undefined1)((ulonglong)pcVar4 >> 0x10);
      uStack_b5 = (undefined1)((ulonglong)pcVar4 >> 0x18);
      iStack_b4 = (int)((ulonglong)pcVar4 >> 0x20);
      uStack_b0 = (undefined4)*(undefined8 *)(uVar25 + 0xf8);
      uStack_ac = (undefined4)((ulonglong)*(undefined8 *)(uVar25 + 0xf8) >> 0x20);
      *(ulonglong *)(uVar25 + 0x120) = CONCAT44(uStack_c4,local_c8);
      *(ulonglong *)(uVar25 + 0x128) = CONCAT44(uStack_bc,uStack_c0);
      *(undefined ***)(uVar25 + 0x110) = local_d8;
      *(undefined8 **)(uVar25 + 0x118) = uStack_d0;
      *(longlong **)(uVar25 + 0x100) = local_e8;
      *(ulonglong *)(uVar25 + 0x108) = CONCAT44(uStack_dc,uStack_e0);
      *(code **)(uVar25 + 0xf0) = local_f8;
      *(ulonglong *)(uVar25 + 0xf8) = CONCAT44(uStack_ec,uStack_f0);
      uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
      local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
      uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
      local_c8 = (undefined4)local_88;
      uStack_c4 = local_88._4_4_;
      uStack_c0 = (undefined4)uStack_80;
      uStack_bc = uStack_80._4_4_;
      local_d8 = local_98;
      uStack_d0 = uStack_90;
      local_e8 = local_a8;
      uStack_e0 = (undefined4)uStack_a0;
      uStack_dc = uStack_a0._4_4_;
      local_f8 = pcVar4;
      uStack_f0 = uStack_b0;
      uStack_ec = uStack_ac;
      iVar13 = *(int *)(param_2 + 400);
      *(uint *)(param_2 + 400) = iVar13 + 1U;
      uStack_a0 = uVar3;
      local_88 = uVar5;
      uStack_80 = uVar7;
      if (*(uint *)(param_2 + 0x194) < iVar13 + 1U) {
        FUN_144737178(local_2b8,iVar13);
      }
      *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar13 * 8) = uVar25;
      *(int *)(uVar25 + 0x7c) = *(int *)(param_2 + 400) + -1;
      iVar13 = *(int *)(param_2 + 0x2d0);
      *(uint *)(param_2 + 0x2d0) = iVar13 + 1U;
      if (*(uint *)(param_2 + 0x2d4) < iVar13 + 1U) {
        FUN_144737178((longlong *)(param_2 + 0x2c8),iVar13);
      }
      *(ulonglong *)(*(longlong *)(param_2 + 0x2c8) + (longlong)iVar13 * 8) = uVar25;
      if (local_f8 != (code *)0x0) {
        plVar15 = local_e8;
        if (local_e8 == (longlong *)0x0) {
          plVar15 = &local_d8;
        }
        (**(code **)(*plVar15 + 0x10))();
      }
      puVar1 = local_300;
      puVar20 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar20 + 8;
      if (*(undefined8 **)(param_2 + 0x78) < puVar11) {
        FUN_140023dd8(local_300,0x48);
        puVar20 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar20 + 8;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar11;
      puVar20[1] = *(undefined8 *)(uVar25 + 8);
      puVar20[2] = 0;
      *(undefined1 *)(puVar20 + 3) = 2;
      *(undefined8 *)((longlong)puVar20 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar20 + 5) = 0;
      *puVar20 = &PTR_FUN_14a1fb3e8;
      *(undefined2 *)(puVar20 + 6) = 0x1c;
      *(undefined1 *)((longlong)puVar20 + 0x32) = 0;
      puVar20[7] = uVar25;
      iVar13 = *(int *)(param_2 + 0x1a0);
      *(uint *)(param_2 + 0x1a0) = iVar13 + 1U;
      if (*(uint *)(param_2 + 0x1a4) < iVar13 + 1U) {
        FUN_1447568fc(local_2f8,iVar13);
      }
      puVar1 = local_300;
      *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar13 * 8) = puVar20;
      *(int *)((longlong)puVar20 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
      puVar23 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar23 + 9;
      if (*(undefined8 **)(param_2 + 0x78) < puVar11) {
        FUN_140023dd8(local_300,0x50);
        puVar23 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar23 + 9;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar11;
      puVar23[1] = *(undefined8 *)(uVar25 + 8);
      puVar23[2] = 0;
      *(undefined1 *)(puVar23 + 3) = 3;
      *(undefined8 *)((longlong)puVar23 + 0x1c) = 0xffffffffffffffff;
      *puVar23 = &PTR_FUN_14a1fb168;
      *(undefined1 *)(puVar23 + 5) = 0x1c;
      *(undefined8 *)((longlong)puVar23 + 0x2c) = 0xffffffff00000000;
      puVar23[7] = 0;
      puVar23[8] = uVar25;
      iVar13 = *(int *)(param_2 + 0x1a0);
      *(uint *)(param_2 + 0x1a0) = iVar13 + 1U;
      local_2b8 = puVar24;
      if (*(uint *)(param_2 + 0x1a4) < iVar13 + 1U) {
        FUN_1447568fc(local_2f8,iVar13);
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar13 * 8) = puVar23;
      *(int *)((longlong)puVar23 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
      FUN_1405bfba3(param_2,puVar22,0,2);
      puVar1 = local_300;
      puVar24 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar11 = puVar24 + 0x16;
      if (*(undefined8 **)(param_2 + 0x78) < puVar11) {
        FUN_140023dd8(local_300,0xc0);
        puVar24 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
        puVar11 = puVar24 + 0x16;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar11;
      *puVar24 = &PTR_FUN_14a247b60;
      puVar24[2] = 0;
      puVar24[3] = 0;
      puVar24[4] = 0;
      puVar24[6] = 0;
      puVar24[7] = 0;
      puVar24[8] = 0;
      puVar24[9] = 0;
      puVar24[10] = 0;
      *(undefined1 *)(puVar24 + 0xb) = 1;
      puVar24[0xc] = 0;
      puVar24[0xd] = 0;
      puVar24[0x10] = 0;
      puVar24[0x11] = 0;
      iVar13 = *(int *)(param_2 + 0xa0);
      *(uint *)(param_2 + 0xa0) = iVar13 + 1U;
      if (*(uint *)(param_2 + 0xa4) < iVar13 + 1U) {
        FUN_1448cfae8(local_2c0,iVar13);
      }
      local_2b0 = (ulonglong)(uint)((int)local_2b0 - local_2a4);
      local_2cc = local_2cc - (int)local_2e0;
      local_2e0 = puVar24 + 2;
      *(undefined8 **)(*local_2c0 + (longlong)iVar13 * 8) = puVar24;
      local_290 = puVar23;
      if (local_2d8 == (undefined8 *)0x0) {
        bVar27 = 0;
      }
      else {
        local_228 = (undefined ***)0x0;
        local_218 = &PTR_FUN_14a246020;
        local_210 = local_2e8;
        local_238 = FUN_142cf4692;
        local_f8 = FUN_142cf4692;
        local_e8 = (longlong *)0x0;
        local_d8 = &PTR_FUN_14a246020;
        uStack_d0 = local_2e8;
        local_b8 = 0;
        uStack_b6 = 0;
        uStack_b5 = 0;
        iStack_b4 = 0;
        local_a8 = (longlong *)0x0;
        local_2d8 = puVar22;
        local_a8 = (longlong *)FUN_14001cc68(0x50,0x10);
        *local_a8 = (longlong)&PTR_FUN_14a245fc0;
        local_a8[2] = (longlong)local_f8;
        local_a8[4] = (longlong)local_e8;
        local_e8 = (longlong *)0x0;
        *(undefined4 *)(local_a8 + 8) = local_c8;
        *(undefined4 *)((longlong)local_a8 + 0x44) = uStack_c4;
        *(undefined4 *)(local_a8 + 9) = uStack_c0;
        *(undefined4 *)((longlong)local_a8 + 0x4c) = uStack_bc;
        *(undefined4 *)(local_a8 + 6) = (undefined4)local_d8;
        *(undefined4 *)((longlong)local_a8 + 0x34) = local_d8._4_4_;
        *(undefined4 *)(local_a8 + 7) = (undefined4)uStack_d0;
        *(undefined4 *)((longlong)local_a8 + 0x3c) = uStack_d0._4_4_;
        if (local_f8 != (code *)0x0) {
          local_f8 = (code *)0x0;
        }
        if (local_a8 != (longlong *)&DAT_fffffffffffffff0) {
          local_b8 = 0x3c54;
          uStack_b6 = 0x1d;
          uStack_b5 = 0x47;
          iStack_b4 = 1;
        }
        local_178[0] = local_238;
        local_168[0] = (longlong *)0x0;
        if (local_238 != (code *)0x0) {
          pppuVar14 = local_228;
          if (local_228 == (undefined ***)0x0) {
            pppuVar14 = &local_218;
          }
          (*(code *)**pppuVar14)((undefined4)local_d8,local_168);
        }
        local_138 = (code *)0x0;
        local_128[0] = (longlong *)0x0;
        local_128[0] = (longlong *)FUN_14001cc68(0x50,0x10);
        *local_128[0] = (longlong)&PTR_FUN_14a245fe0;
        local_128[0][2] = (longlong)local_178[0];
        local_128[0][4] = (longlong)local_168[0];
        local_168[0] = (longlong *)0x0;
        *(undefined4 *)(local_128[0] + 8) = local_148;
        *(undefined4 *)((longlong)local_128[0] + 0x44) = uStack_144;
        *(undefined4 *)(local_128[0] + 9) = uStack_140;
        *(undefined4 *)((longlong)local_128[0] + 0x4c) = uStack_13c;
        *(undefined4 *)(local_128[0] + 6) = local_158;
        *(undefined4 *)((longlong)local_128[0] + 0x34) = uStack_154;
        *(undefined4 *)(local_128[0] + 7) = uStack_150;
        *(undefined4 *)((longlong)local_128[0] + 0x3c) = uStack_14c;
        if (local_178[0] != (code *)0x0) {
          local_178[0] = (code *)0x0;
        }
        if (local_128[0] != (longlong *)&DAT_fffffffffffffff0) {
          local_138 = FUN_1471d3d80;
        }
        local_1f8 = local_238;
        local_1e8[0] = (longlong *)0x0;
        if (local_238 != (code *)0x0) {
          pppuVar14 = local_228;
          if (local_228 == (undefined ***)0x0) {
            pppuVar14 = &local_218;
          }
          (*(code *)**pppuVar14)(local_158,local_1e8);
        }
        local_1b8[0] = (code *)0x0;
        local_1a8[0] = (longlong *)0x0;
        local_1a8[0] = (longlong *)FUN_14001cc68(0x50,0x10);
        *local_1a8[0] = (longlong)&PTR_FUN_14a246000;
        local_1a8[0][2] = (longlong)local_1f8;
        local_1a8[0][4] = (longlong)local_1e8[0];
        local_1e8[0] = (longlong *)0x0;
        *(undefined4 *)(local_1a8[0] + 8) = local_1c8;
        *(undefined4 *)((longlong)local_1a8[0] + 0x44) = uStack_1c4;
        *(undefined4 *)(local_1a8[0] + 9) = uStack_1c0;
        *(undefined4 *)((longlong)local_1a8[0] + 0x4c) = uStack_1bc;
        *(undefined4 *)(local_1a8[0] + 6) = (undefined4)local_1d8;
        *(undefined4 *)((longlong)local_1a8[0] + 0x34) = local_1d8._4_4_;
        *(undefined4 *)(local_1a8[0] + 7) = (undefined4)uStack_1d0;
        *(undefined4 *)((longlong)local_1a8[0] + 0x3c) = uStack_1d0._4_4_;
        if (local_1f8 != (code *)0x0) {
          local_1f8 = (code *)0x0;
        }
        if (local_1a8[0] != (longlong *)&DAT_fffffffffffffff0) {
          local_1b8[0] = FUN_1471d3e82;
        }
        local_310 = &local_b8;
        local_318 = &local_138;
        lVar17 = FUN_144ada887(param_2,L"InstanceCullingLoadBalancer.Batches",4,local_1b8);
        if (local_1b8[0] != (code *)0x0) {
          plVar15 = local_1a8[0];
          if (local_1a8[0] == (longlong *)0x0) {
            plVar15 = (longlong *)&local_198;
          }
          (**(code **)(*plVar15 + 0x10))();
        }
        if (local_1f8 != (code *)0x0) {
          plVar15 = local_1e8[0];
          if (local_1e8[0] == (longlong *)0x0) {
            plVar15 = &local_1d8;
          }
          (**(code **)(*plVar15 + 0x10))();
        }
        if (local_138 != (code *)0x0) {
          plVar15 = local_128[0];
          if (local_128[0] == (longlong *)0x0) {
            plVar15 = (longlong *)&local_118;
          }
          (**(code **)(*plVar15 + 0x10))();
        }
        if (local_178[0] != (code *)0x0) {
          plVar15 = local_168[0];
          if (local_168[0] == (longlong *)0x0) {
            plVar15 = (longlong *)&local_158;
          }
          (**(code **)(*plVar15 + 0x10))();
        }
        if (CONCAT44(iStack_b4,CONCAT13(uStack_b5,CONCAT12(uStack_b6,local_b8))) != 0) {
          plVar15 = local_a8;
          if (local_a8 == (longlong *)0x0) {
            plVar15 = &local_98;
          }
          (**(code **)(*plVar15 + 0x10))();
        }
        if (local_f8 != (code *)0x0) {
          plVar15 = local_e8;
          if (local_e8 == (longlong *)0x0) {
            plVar15 = &local_d8;
          }
          (**(code **)(*plVar15 + 0x10))();
        }
        if (local_238 != (code *)0x0) {
          pppuVar14 = &local_218;
          if (local_228 != (undefined ***)0x0) {
            pppuVar14 = local_228;
          }
          (*(code *)(*pppuVar14)[2])(pppuVar14);
        }
        puVar1 = local_300;
        cVar12 = *(char *)(lVar17 + 0x68);
        puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar11 = puVar22 + 9;
        if (*(undefined8 **)(param_2 + 0x78) < puVar11) {
          FUN_140023dd8(local_300,0x50);
          puVar22 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar22 + 9;
        }
        *(undefined8 **)(param_2 + 0x70) = puVar11;
        puVar22[1] = *(undefined8 *)(lVar17 + 8);
        puVar22[2] = 0;
        *(undefined1 *)(puVar22 + 3) = 3;
        *(undefined8 *)((longlong)puVar22 + 0x1c) = 0xffffffffffffffff;
        *puVar22 = &PTR_FUN_14a1fb168;
        *(byte *)(puVar22 + 5) = cVar12 >> 7 & 0x1c;
        *(undefined2 *)((longlong)puVar22 + 0x29) = local_b8;
        *(undefined1 *)((longlong)puVar22 + 0x2b) = uStack_b6;
        *(undefined8 *)((longlong)puVar22 + 0x2c) = 0xffffffff00000000;
        puVar22[7] = 0;
        puVar22[8] = lVar17;
        iVar13 = *(int *)(param_2 + 0x1a0);
        *(uint *)(param_2 + 0x1a0) = iVar13 + 1U;
        if (*(uint *)(param_2 + 0x1a4) < iVar13 + 1U) {
          FUN_1447568fc(local_2f8,iVar13);
        }
        puVar11 = local_2e8;
        *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar13 * 8) = puVar22;
        *(int *)((longlong)puVar22 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
        puVar24[0xc] = puVar22;
        local_1e8[0] = (longlong *)0x0;
        local_1d8 = &PTR_FUN_14a2460a0;
        uStack_1d0 = local_2e8;
        local_1f8 = FUN_142cf46f8;
        local_b8 = 0;
        uStack_b6 = 0;
        uStack_b5 = 0;
        iStack_b4 = 0;
        local_a8 = (longlong *)0x0;
        local_a8 = (longlong *)FUN_14001cc68(0x50,0x10);
        *local_a8 = (longlong)&PTR_FUN_14a246040;
        local_a8[2] = (longlong)FUN_142cf46f8;
        local_a8[4] = 0;
        local_a8[6] = (longlong)&PTR_FUN_14a2460a0;
        local_a8[7] = (longlong)puVar11;
        if (local_a8 + 2 != (longlong *)0x0) {
          local_b8 = 0x3f84;
          uStack_b6 = 0x1d;
          uStack_b5 = 0x47;
          iStack_b4 = 1;
        }
        local_138 = local_1f8;
        local_128[0] = (longlong *)0x0;
        if (local_1f8 != (code *)0x0) {
          plVar15 = local_1e8[0];
          if (local_1e8[0] == (longlong *)0x0) {
            plVar15 = &local_1d8;
          }
          (**(code **)*plVar15)(plVar15,local_128);
        }
        local_f8 = (code *)0x0;
        local_e8 = (longlong *)0x0;
        local_e8 = (longlong *)FUN_14001cc68(0x50,0x10);
        *local_e8 = (longlong)&PTR_FUN_14a246060;
        local_e8[2] = (longlong)local_138;
        local_e8[4] = (longlong)local_128[0];
        local_128[0] = (longlong *)0x0;
        *(undefined4 *)(local_e8 + 8) = local_108;
        *(undefined4 *)((longlong)local_e8 + 0x44) = uStack_104;
        *(undefined4 *)(local_e8 + 9) = uStack_100;
        *(undefined4 *)((longlong)local_e8 + 0x4c) = uStack_fc;
        *(undefined4 *)(local_e8 + 6) = local_118;
        *(undefined4 *)((longlong)local_e8 + 0x34) = uStack_114;
        *(undefined4 *)(local_e8 + 7) = uStack_110;
        *(undefined4 *)((longlong)local_e8 + 0x3c) = uStack_10c;
        if (local_138 != (code *)0x0) {
          local_138 = (code *)0x0;
        }
        if (local_e8 != (longlong *)&DAT_fffffffffffffff0) {
          local_f8 = FUN_1471d40b0;
        }
        local_1b8[0] = local_1f8;
        local_1a8[0] = (longlong *)0x0;
        if (local_1f8 != (code *)0x0) {
          plVar15 = local_1e8[0];
          if (local_1e8[0] == (longlong *)0x0) {
            plVar15 = &local_1d8;
          }
          (**(code **)*plVar15)(local_118,local_1a8);
        }
        local_178[0] = (code *)0x0;
        local_168[0] = (longlong *)0x0;
        local_168[0] = (longlong *)FUN_14001cc68(0x50,0x10);
        *local_168[0] = (longlong)&PTR_FUN_14a246080;
        local_168[0][2] = (longlong)local_1b8[0];
        local_168[0][4] = (longlong)local_1a8[0];
        local_1a8[0] = (longlong *)0x0;
        *(undefined4 *)(local_168[0] + 8) = local_188;
        *(undefined4 *)((longlong)local_168[0] + 0x44) = uStack_184;
        *(undefined4 *)(local_168[0] + 9) = uStack_180;
        *(undefined4 *)((longlong)local_168[0] + 0x4c) = uStack_17c;
        *(undefined4 *)(local_168[0] + 6) = local_198;
        *(undefined4 *)((longlong)local_168[0] + 0x34) = uStack_194;
        *(undefined4 *)(local_168[0] + 7) = uStack_190;
        *(undefined4 *)((longlong)local_168[0] + 0x3c) = uStack_18c;
        if (local_1b8[0] != (code *)0x0) {
          local_1b8[0] = (code *)0x0;
        }
        if (local_168[0] != (longlong *)&DAT_fffffffffffffff0) {
          local_178[0] = FUN_1471d41b2;
        }
        local_310 = &local_b8;
        local_318 = (code **)&local_f8;
        lVar17 = FUN_144ada887(param_2,L"InstanceCullingLoadBalancer.Items",8,local_178);
        if (local_178[0] != (code *)0x0) {
          plVar15 = (longlong *)&local_158;
          if (local_168[0] != (longlong *)0x0) {
            plVar15 = local_168[0];
          }
          (**(code **)(*plVar15 + 0x10))();
        }
        if (local_1b8[0] != (code *)0x0) {
          plVar15 = local_1a8[0];
          if (local_1a8[0] == (longlong *)0x0) {
            plVar15 = (longlong *)&local_198;
          }
          (**(code **)(*plVar15 + 0x10))();
        }
        if (local_f8 != (code *)0x0) {
          plVar15 = &local_d8;
          if (local_e8 != (longlong *)0x0) {
            plVar15 = local_e8;
          }
          (**(code **)(*plVar15 + 0x10))();
        }
        if (local_138 != (code *)0x0) {
          plVar15 = local_128[0];
          if (local_128[0] == (longlong *)0x0) {
            plVar15 = (longlong *)&local_118;
          }
          (**(code **)(*plVar15 + 0x10))();
        }
        if (CONCAT44(iStack_b4,CONCAT13(uStack_b5,CONCAT12(uStack_b6,local_b8))) != 0) {
          plVar15 = local_a8;
          if (local_a8 == (longlong *)0x0) {
            plVar15 = &local_98;
          }
          (**(code **)(*plVar15 + 0x10))();
        }
        if (local_1f8 != (code *)0x0) {
          plVar15 = &local_1d8;
          if (local_1e8[0] != (longlong *)0x0) {
            plVar15 = local_1e8[0];
          }
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
        puVar1 = local_300;
        cVar12 = *(char *)(lVar17 + 0x68);
        puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar11 = puVar22 + 9;
        if (*(undefined8 **)(param_2 + 0x78) < puVar11) {
          FUN_140023dd8(local_300,0x50);
          puVar22 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar22 + 9;
        }
        *(undefined8 **)(param_2 + 0x70) = puVar11;
        puVar22[1] = *(undefined8 *)(lVar17 + 8);
        puVar22[2] = 0;
        *(undefined1 *)(puVar22 + 3) = 3;
        *(undefined8 *)((longlong)puVar22 + 0x1c) = 0xffffffffffffffff;
        *puVar22 = &PTR_FUN_14a1fb168;
        *(byte *)(puVar22 + 5) = cVar12 >> 7 & 0x1c;
        *(undefined2 *)((longlong)puVar22 + 0x29) = local_b8;
        *(undefined1 *)((longlong)puVar22 + 0x2b) = uStack_b6;
        *(undefined8 *)((longlong)puVar22 + 0x2c) = 0xffffffff00000000;
        puVar22[7] = 0;
        puVar22[8] = lVar17;
        iVar13 = *(int *)(param_2 + 0x1a0);
        *(uint *)(param_2 + 0x1a0) = iVar13 + 1U;
        if (*(uint *)(param_2 + 0x1a4) < iVar13 + 1U) {
          FUN_1447568fc(local_2f8,iVar13);
        }
        *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar13 * 8) = puVar22;
        *(int *)((longlong)puVar22 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
        puVar24[0xd] = puVar22;
        bVar27 = 2;
        puVar22 = local_2d8;
      }
      puVar24[2] = puVar22;
      puVar24[3] = puVar20;
      puVar24[4] = local_2c8;
      lVar17 = FUN_1447e4f80();
      cVar12 = '\x02';
      if (*(char *)(lVar17 + 0x41) != '\x03') {
        cVar12 = *(char *)(lVar17 + 0x41);
      }
      puVar24[10] = *(undefined8 *)(param_4 + 0x18);
      *(char *)(puVar24 + 0xb) = cVar12;
      puVar24[0x10] = local_298;
      puVar24[0x11] = DAT_14c9c0d80;
      fVar28 = (float)local_2a0;
      fVar29 = (float)local_29c;
      *(float *)(puVar24 + 0x12) = fVar29;
      *(float *)((longlong)puVar24 + 0x94) = fVar28;
      uVar26 = (ulonglong)local_2cc | local_2b0 << 0x20;
      puVar24[0x13] = uVar26;
      *(undefined4 *)(puVar24 + 0x14) = 0x3f800000;
      *(undefined4 *)(puVar24 + 5) = local_250;
      puVar24[6] = local_278;
      puVar24[7] = local_270;
      puVar24[8] = local_268;
      *(undefined4 *)((longlong)puVar24 + 0xa4) = 0;
      puVar24[9] = local_2b8;
      *(int *)(puVar24 + 0x15) = local_2ec;
      uVar3 = *(undefined8 *)(param_4 + 0x13818);
      bVar27 = bVar27 | local_301;
      FUN_145e84e86();
      FUN_1448e935e(uVar3,&local_b8,&DAT_14c9e7618,bVar27);
      FUN_145e84e86();
      uVar3 = CONCAT44(iStack_b4,CONCAT13(uStack_b5,CONCAT12(uStack_b6,local_b8)));
      uVar5 = CONCAT44(uStack_ac,uStack_b0);
      FUN_145e850f4();
      local_b8 = 0;
      uStack_b6 = 0;
      uStack_b5 = 0;
      iStack_b4 = 0;
      uStack_b0 = 0;
      uStack_ac = 0;
      FUN_1448f70da(uVar3,&DAT_14c9e9c68,local_2e0,&local_b8);
      FUN_145e850f4();
      FUN_140069376(param_2);
      puVar1 = local_300;
      uVar19 = 2;
      if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
         ((DAT_14c760ddc == 2 && ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))))) {
        uVar19 = 4;
      }
      puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar22 + 0x3b;
      if (*(undefined8 **)(param_2 + 0x78) < puVar11) {
        FUN_140023dd8(local_300,0x1e0);
        puVar22 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar22 + 0x3b;
      }
      *local_300 = (ulonglong)puVar11;
      local_b8 = SUB82(local_2e0,0);
      uStack_b6 = (undefined1)((ulonglong)local_2e0 >> 0x10);
      uStack_b5 = (undefined1)((ulonglong)local_2e0 >> 0x18);
      iStack_b4 = (int)((ulonglong)local_2e0 >> 0x20);
      uStack_b0 = (undefined4)DAT_14c9e9cb0;
      uStack_ac = (undefined4)((ulonglong)DAT_14c9e9cb0 >> 0x20);
      if (DAT_14c9e9cb0 != 0) {
        LOCK();
        *(int *)(DAT_14c9e9cb0 + 8) = *(int *)(DAT_14c9e9cb0 + 8) + 1;
        UNLOCK();
      }
      local_a8 = (longlong *)&DAT_14c9e9c68;
      local_318 = (code **)CONCAT71(local_318._1_7_,2);
      FUN_140068f1a(puVar22,&local_f8,&local_b8,uVar19);
      puVar11 = local_2e8;
      *puVar22 = &PTR_FUN_14a247b70;
      puVar22[0x37] = local_2e0;
      puVar22[0x38] = local_2e8;
      puVar22[0x39] = uVar3;
      puVar22[0x3a] = uVar5;
      iVar13 = *(int *)(param_2 + 0x170);
      *(uint *)(param_2 + 0x170) = iVar13 + 1U;
      if (*(uint *)(param_2 + 0x174) < iVar13 + 1U) {
        FUN_14470e57a(param_2 + 0x168,iVar13);
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar13 * 8) = puVar22;
      *(int *)((longlong)puVar22 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
      FUN_140069100(param_2,puVar22);
      puVar1 = local_300;
      puVar24 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar22 = puVar24 + 0x34;
      if (*(undefined8 **)(param_2 + 0x78) < puVar22) {
        FUN_140023dd8(local_300,0x1b0);
        puVar24 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
        puVar22 = puVar24 + 0x34;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar22;
      *puVar24 = &PTR_FUN_14a247b88;
      puVar22 = puVar24 + 2;
      FUN_1471d8d00(puVar22);
      iVar13 = *(int *)(param_2 + 0xa0);
      *(uint *)(param_2 + 0xa0) = iVar13 + 1U;
      if (*(uint *)(param_2 + 0xa4) < iVar13 + 1U) {
        FUN_1448cfae8(local_2c0,iVar13);
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar13 * 8) = puVar24;
      puVar24[2] = local_288;
      *(undefined4 *)(puVar24 + 3) = 4;
      lVar17 = FUN_1447e4f80();
      cVar12 = '\x02';
      if (*(char *)(lVar17 + 0x41) != '\x03') {
        cVar12 = *(char *)(lVar17 + 0x41);
      }
      puVar24[10] = *(undefined8 *)(param_4 + 0x18);
      *(char *)(puVar24 + 0xb) = cVar12;
      puVar24[0xc] = local_298;
      puVar24[0xd] = DAT_14c9c0d80;
      *(float *)(puVar24 + 0xe) = fVar29;
      *(float *)((longlong)puVar24 + 0x74) = fVar28;
      puVar24[0xf] = uVar26;
      *(undefined4 *)(puVar24 + 0x10) = 0x3f800000;
      *(undefined4 *)(puVar24 + 4) = local_250;
      puVar24[5] = local_278;
      puVar24[6] = local_270;
      puVar24[7] = local_268;
      puVar24[8] = local_290;
      *(int *)((longlong)puVar24 + 0x84) = local_2ec;
      puVar24[9] = local_2c8;
      puVar24[0x12] = local_2c8;
      puVar24[0x2c] = local_280;
      puVar24[0x2d] = 0;
      *(undefined2 *)(puVar24 + 0x2e) = 1;
      *(undefined4 *)((longlong)puVar24 + 0x174) = 1;
      FUN_1471d8db0();
      FUN_140069376(param_2);
      puVar1 = local_300;
      puVar20 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar24 = puVar20 + 0x3b;
      if (*(undefined8 **)(param_2 + 0x78) < puVar24) {
        FUN_140023dd8(local_300,0x1e0);
        puVar20 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar24 = puVar20 + 0x3b;
      }
      *local_300 = (ulonglong)puVar24;
      local_b8 = SUB82(puVar22,0);
      uStack_b6 = (undefined1)((ulonglong)puVar22 >> 0x10);
      uStack_b5 = (undefined1)((ulonglong)puVar22 >> 0x18);
      iStack_b4 = (int)((ulonglong)puVar22 >> 0x20);
      uStack_b0 = (undefined4)DAT_14c9eb040;
      uStack_ac = (undefined4)((ulonglong)DAT_14c9eb040 >> 0x20);
      if (DAT_14c9eb040 != 0) {
        LOCK();
        *(int *)(DAT_14c9eb040 + 8) = *(int *)(DAT_14c9eb040 + 8) + 1;
        UNLOCK();
      }
      local_a8 = (longlong *)&DAT_14c9eaff8;
      local_318 = (code **)CONCAT71(local_318._1_7_,2);
      FUN_140068f1a(puVar20,&local_138,&local_b8,0x11);
      iVar13 = local_2ec;
      *puVar20 = &PTR_FUN_14a247b90;
      puVar20[0x37] = puVar22;
      puVar20[0x38] = puVar11;
      *(byte *)(puVar20 + 0x39) = local_301;
      uVar19 = (undefined4)local_f8;
      *(undefined4 *)((longlong)puVar20 + 0x1c9) = uVar19;
      *(undefined4 *)((longlong)puVar20 + 0x1cc) = local_f8._3_4_;
      puVar20[0x3a] = param_4;
      iVar9 = *(int *)(param_2 + 0x170);
      *(uint *)(param_2 + 0x170) = iVar9 + 1U;
      if (*(uint *)(param_2 + 0x174) < iVar9 + 1U) {
        FUN_14470e57a(param_2 + 0x168,iVar9);
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar9 * 8) = puVar20;
      *(int *)((longlong)puVar20 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
      FUN_140069100(param_2,puVar20);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar13;
}



// FUNCTION 142cddab2 FUN_142cddab2 body=96 status=ok
// SIG undefined FUN_142cddab2(void)

void FUN_142cddab2(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_144827a6e(param_2,lVar1,param_1);
    *(undefined4 *)(lVar1 + 0x58) = 0x70;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) == 0) {
    return;
  }
  FUN_14480809c(param_1 + 0x18,0);
  return;
}



// FUNCTION 142cddb2a FUN_142cddb2a body=69 status=ok
// SIG undefined FUN_142cddb2a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cddb2a(void)

{
  _DAT_14c9e7ba0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cddb6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e7ba8,1);
  return;
}



// FUNCTION 142cddb6f FUN_142cddb6f body=69 status=ok
// SIG undefined FUN_142cddb6f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cddb6f(void)

{
  _DAT_14c9e7bb8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cddbb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e7bc0,1);
  return;
}



// FUNCTION 142cddbb4 FUN_142cddbb4 body=69 status=ok
// SIG undefined FUN_142cddbb4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cddbb4(void)

{
  _DAT_14c9e7bd0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cddbf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e7bd8,1);
  return;
}



// FUNCTION 142cddbf9 FUN_142cddbf9 body=69 status=ok
// SIG undefined FUN_142cddbf9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cddbf9(void)

{
  _DAT_14c9e7be8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cddc3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e7bf0,1);
  return;
}



// FUNCTION 142cddc3e FUN_142cddc3e body=69 status=ok
// SIG undefined FUN_142cddc3e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cddc3e(void)

{
  _DAT_14c9e7c00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cddc80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e7c08,1);
  return;
}



// FUNCTION 142cddc83 FUN_142cddc83 body=69 status=ok
// SIG undefined FUN_142cddc83(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cddc83(void)

{
  _DAT_14c9e7c10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cddcc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e7c18,1);
  return;
}



// FUNCTION 142cddcc8 FUN_142cddcc8 body=69 status=ok
// SIG undefined FUN_142cddcc8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cddcc8(void)

{
  _DAT_14c9e7c20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cddd0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e7c28,1);
  return;
}



// FUNCTION 142cddd0d FUN_142cddd0d body=69 status=ok
// SIG undefined FUN_142cddd0d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cddd0d(void)

{
  _DAT_14c9e7c30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cddd4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e7c38,1);
  return;
}



// FUNCTION 142cddd72 FUN_142cddd72 body=4106 status=ok
// SIG undefined FUN_142cddd72(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cddd72(longlong param_1,longlong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar6;
  byte bVar8;
  byte bVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  int iVar20;
  uint uVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong extraout_RAX;
  longlong lVar24;
  longlong lVar25;
  undefined8 *puVar26;
  undefined8 uVar27;
  longlong lVar28;
  float fVar29;
  int iVar30;
  undefined8 *puVar31;
  longlong lVar32;
  longlong lVar33;
  ulonglong uVar34;
  wchar_t *pwVar35;
  wchar_t *pwVar36;
  undefined8 *puVar37;
  longlong lVar38;
  uint uVar39;
  float fVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar46;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  float fVar52;
  float fVar53;
  double dVar54;
  double dVar55;
  undefined1 auStack_228 [32];
  wchar_t *local_208;
  undefined1 local_200 [16];
  char *local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e0;
  undefined8 **local_1d8;
  undefined1 local_1d0;
  undefined8 local_1c8;
  undefined1 local_1c0;
  longlong local_1b0;
  ulonglong *local_1a8;
  uint local_19c;
  longlong local_198;
  int local_18c;
  longlong *local_188;
  longlong *local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  longlong *local_160;
  ulonglong local_158;
  ulonglong local_150;
  undefined8 *local_148;
  longlong local_140;
  longlong local_138;
  undefined8 local_130;
  undefined8 *local_128;
  longlong local_120;
  undefined *puStack_118;
  undefined4 local_110;
  uint local_10c;
  undefined4 local_108;
  int local_104;
  int local_100;
  undefined4 local_fc;
  undefined2 local_f8;
  undefined1 local_f6;
  undefined1 local_f5;
  undefined2 local_f4;
  ulonglong local_f0;
  double dVar5;
  double dVar7;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_228;
  if (*(char *)(param_1 + 8) == '\x01') {
    uVar21 = *(uint *)(param_1 + 0xd0);
    uVar39 = *(uint *)(param_1 + 0xd4);
    local_1b0 = param_1;
    iVar20 = FUN_14322684b();
    local_110 = DAT_14ca83a40;
    local_f5 = 0x25;
    if (iVar20 == 0) {
      local_f5 = 0x47;
    }
    local_120 = _DAT_14ca83a30;
    puStack_118 = (undefined *)_DAT_14ca83a38;
    local_10c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_f6 = 0;
    local_128 = (undefined8 *)0x20009;
    local_f4 = 0xff00;
    local_fc = 0x10001;
    local_f8 = 0x101;
    local_108 = 0;
    iVar30 = (int)(longlong)((float)uVar39 * (float)uVar21);
    iVar20 = DAT_14ca84e40;
    if (iVar30 < DAT_14ca84e40) {
      iVar20 = iVar30;
    }
    local_104 = 1;
    if (1 < iVar20) {
      local_104 = iVar20;
    }
    puVar1 = (ulonglong *)(param_2 + 0x70);
    uVar34 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar23 = uVar34 + 0x120;
    local_1a8 = puVar1;
    local_100 = local_104;
    if (*(ulonglong *)(param_2 + 0x78) < uVar23) {
      FUN_140023dd8(puVar1,0x128);
      uVar34 = *puVar1 + 7 & 0xfffffffffffffff8;
      uVar23 = uVar34 + 0x120;
    }
    *(ulonglong *)(param_2 + 0x70) = uVar23;
    FUN_1456bbb8c(uVar34,L"LightFunction.Atlas",&local_128,1);
    iVar20 = *(int *)(param_2 + 0x180);
    *(uint *)(param_2 + 0x180) = iVar20 + 1U;
    if (*(uint *)(param_2 + 0x184) < iVar20 + 1U) {
      FUN_14472c0f6(param_2 + 0x178,iVar20);
    }
    puVar1 = local_1a8;
    *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar20 * 8) = uVar34;
    *(int *)(uVar34 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
    *(ulonglong *)(local_1b0 + 0x10) = uVar34;
    puVar31 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar26 = puVar31 + 0x22;
    local_198 = param_2;
    if (*(undefined8 **)(param_2 + 0x78) < puVar26) {
      FUN_140023dd8(local_1a8,0x120);
      puVar31 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar26 = puVar31 + 0x22;
    }
    *local_1a8 = (ulonglong)puVar26;
    *puVar31 = &PTR_FUN_14a247cb8;
    lVar22 = 0x22;
    do {
      *(undefined1 (*) [16])((longlong)puVar31 + lVar22 + -0x12) = (undefined1  [16])0x0;
      *(undefined4 *)((longlong)puVar31 + lVar22 + -2) = 0xffff0000;
      lVar22 = lVar22 + 0x18;
    } while (lVar22 != 0xe2);
    *(undefined4 *)((longlong)puVar31 + 0xe4) = 0;
    *(undefined1 (*) [16])(puVar31 + 0x1a) = (undefined1  [16])0x0;
    *(undefined2 *)(puVar31 + 0x1c) = 0;
    *(undefined4 *)(puVar31 + 0x1d) = 0xffffffff;
    *(undefined4 *)((longlong)puVar31 + 0xec) = 0xffffffff;
    *(undefined4 *)(puVar31 + 0x1e) = 0xffffffff;
    *(undefined4 *)((longlong)puVar31 + 0xf4) = 0xffffffff;
    *(undefined4 *)(puVar31 + 0x1f) = 0;
    *(undefined2 *)((longlong)puVar31 + 0xfc) = 0;
    puVar31[0x20] = 0;
    local_188 = (longlong *)(local_198 + 0x98);
    iVar20 = *(int *)(local_198 + 0xa0);
    *(uint *)(local_198 + 0xa0) = iVar20 + 1U;
    if (*(uint *)(local_198 + 0xa4) < iVar20 + 1U) {
      FUN_1448cfae8(local_188,iVar20);
    }
    *(undefined8 **)(*local_188 + (longlong)iVar20 * 8) = puVar31;
    puVar31[2] = *(undefined8 *)(local_1b0 + 0x10);
    puVar31[3] = 0;
    *(undefined4 *)(puVar31 + 4) = 0xffff0000;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9eb190) && (FUN_144b3d300(&DAT_14c9eb190), DAT_14c9eb190 == -1)) {
      FUN_145fddc0c(&local_128);
      local_1c0 = 0;
      local_1d0 = 0;
      local_1f0 = "Unknown";
      local_200 = (undefined1  [16])0x0;
      local_208 = L"FLightFunctionAtlasRenderParameters";
      local_1c8 = 0;
      local_1e0 = 0x100;
      local_1e8 = 0x2c8;
      local_1d8 = &local_128;
      FUN_140b49562(&DAT_14c9eb110,0,1);
      if (local_128 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cf9e1a);
      _Init_thread_footer(&DAT_14c9eb190);
    }
    lVar22 = local_198;
    FUN_140069376(local_198);
    puVar1 = local_1a8;
    puVar37 = (undefined8 *)(*(longlong *)(lVar22 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar26 = puVar37 + 0x3a;
    if (*(undefined8 **)(lVar22 + 0x78) < puVar26) {
      FUN_140023dd8(local_1a8,0x1d8);
      puVar37 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar26 = puVar37 + 0x3a;
    }
    *local_1a8 = (ulonglong)puVar26;
    local_120 = DAT_14c9eb158;
    if (DAT_14c9eb158 != 0) {
      LOCK();
      *(int *)(DAT_14c9eb158 + 8) = *(int *)(DAT_14c9eb158 + 8) + 1;
      UNLOCK();
    }
    puStack_118 = &DAT_14c9eb110;
    local_208 = (wchar_t *)CONCAT71(local_208._1_7_,2);
    local_128 = puVar31 + 2;
    FUN_140068f1a(puVar37,&local_130,&local_128,1);
    *puVar37 = &PTR_FUN_14a247cc0;
    puVar37[0x37] = puVar31 + 2;
    puVar37[0x38] = param_3;
    puVar37[0x39] = local_1b0;
    iVar20 = *(int *)(lVar22 + 0x170);
    *(uint *)(lVar22 + 0x170) = iVar20 + 1U;
    if (*(uint *)(lVar22 + 0x174) < iVar20 + 1U) {
      FUN_14470e57a(lVar22 + 0x168,iVar20);
    }
    *(undefined8 **)(*(longlong *)(lVar22 + 0x168) + (longlong)iVar20 * 8) = puVar37;
    *(int *)((longlong)puVar37 + 0x2c) = *(int *)(lVar22 + 0x170) + -1;
    FUN_140069100(lVar22,puVar37);
    if ((int)param_3[1] != 0) {
      local_178 = lVar22 + 0x198;
      local_170 = local_1b0 + 0xb0;
      local_180 = (longlong *)(local_1b0 + 0xc0);
      local_168 = lVar22 + 0x1a8;
      local_19c = 0;
      local_160 = param_3;
      do {
        puVar1 = local_1a8;
        lVar25 = *param_3;
        puVar31 = (undefined8 *)(*(longlong *)(lVar22 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar26 = puVar31 + 6;
        if (*(undefined8 **)(lVar22 + 0x78) < puVar26) {
          FUN_140023dd8(local_1a8,0x40);
          puVar31 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
          puVar26 = puVar31 + 6;
        }
        *(undefined8 **)(lVar22 + 0x70) = puVar26;
        *puVar31 = &PTR_FUN_14a247cb0;
        puVar31[2] = 0;
        puVar31[3] = 0;
        puVar31[4] = 0;
        iVar20 = *(int *)(lVar22 + 0xa0);
        *(uint *)(lVar22 + 0xa0) = iVar20 + 1U;
        if (*(uint *)(lVar22 + 0xa4) < iVar20 + 1U) {
          FUN_1448cfae8(local_188,iVar20);
        }
        puVar1 = local_1a8;
        *(undefined8 **)(*(longlong *)(lVar22 + 0x98) + (longlong)iVar20 * 8) = puVar31;
        puVar31[2] = *(undefined8 *)(local_1b0 + 0x10);
        puVar31[4] = DAT_14c9c0de0;
        *(float *)(puVar31 + 5) =
             ((float)*(uint *)(local_1b0 + 0xd4) + -1.0) /
             ((float)*(uint *)(local_1b0 + 0xd0) * (float)*(uint *)(local_1b0 + 0xd4));
        uVar21 = *(int *)(local_1b0 + 0x98) + 0x1fU >> 5;
        local_150 = (ulonglong)uVar21;
        uVar21 = uVar21 * 0xa00;
        uVar34 = (ulonglong)uVar21;
        pwVar36 = (wchar_t *)(*(longlong *)(lVar22 + 0x70) + 0xfU & 0xfffffffffffffff0);
        uVar23 = (longlong)pwVar36 + uVar34;
        local_148 = puVar31;
        if (*(ulonglong *)(lVar22 + 0x78) < uVar23) {
          FUN_140023dd8(local_1a8,uVar21 | 0x10);
          pwVar36 = (wchar_t *)(*puVar1 + 0xf & 0xfffffffffffffff0);
          uVar23 = (longlong)pwVar36 + uVar34;
        }
        *local_1a8 = uVar23;
        local_158 = uVar34;
        if ((longlong)*(int *)(local_1b0 + 0x98) != 0) {
          lVar22 = *(longlong *)(local_1b0 + 0x90);
          lVar25 = lVar25 + (longlong)(int)local_19c * 0x13c10;
          lVar33 = (longlong)*(int *)(local_1b0 + 0x98) << 4;
          lVar38 = 0;
          uVar23 = 0;
          lVar32 = local_1b0;
          local_140 = lVar22;
          local_138 = lVar33;
          do {
            lVar24 = *(longlong *)(lVar22 + lVar38);
            iVar20 = (int)uVar23;
            if (lVar24 == 0) {
              *(undefined1 **)(pwVar36 + uVar23 * 0x28) = &DAT_3f8000003f800000;
              (pwVar36 + uVar23 * 0x28 + 4)[0] = L'\0';
              (pwVar36 + uVar23 * 0x28 + 4)[1] = L'㾀';
              fVar40 = 0.0;
            }
            else {
              lVar10 = *(longlong *)(lVar24 + 0x28);
              dVar41 = 1.0 / *(double *)(lVar10 + 0x1a0);
              dVar42 = 1.0 / *(double *)(lVar10 + 0x1a8);
              dVar47 = 1.0 / *(double *)(lVar10 + 0x1b0);
              dVar2 = *(double *)(lVar10 + 0x50);
              dVar3 = *(double *)(lVar10 + 0x60);
              dVar4 = *(double *)(lVar10 + 0x58);
              dVar5 = *(double *)(lVar10 + 0x58);
              dVar6 = *(double *)(lVar10 + 0x68);
              dVar7 = *(double *)(lVar10 + 0x68);
              dVar13 = dVar6 * 0.0 + dVar3 * 0.0 + dVar4 * 0.0 + dVar2 * dVar47;
              dVar14 = dVar7 * 0.0 + dVar3 * 0.0 + dVar42 * dVar5 + dVar2 * 0.0;
              dVar17 = dVar6 * 0.0 + dVar3 * dVar41 + dVar4 * 0.0 + dVar2 * 0.0;
              dVar18 = dVar7 * 1.0 + dVar3 * 0.0 + dVar5 * 0.0 + dVar2 * 0.0;
              dVar2 = *(double *)(lVar10 + 0x70);
              dVar3 = *(double *)(lVar10 + 0x78);
              dVar5 = *(double *)(lVar10 + 0x78);
              dVar4 = *(double *)(lVar10 + 0x80);
              dVar6 = *(double *)(lVar10 + 0x88);
              dVar7 = *(double *)(lVar10 + 0x88);
              dVar48 = dVar6 * 0.0 + dVar4 * 0.0 + dVar3 * 0.0 + dVar2 * dVar47;
              dVar49 = dVar7 * 0.0 + dVar4 * 0.0 + dVar42 * dVar5 + dVar2 * 0.0;
              dVar11 = dVar6 * 0.0 + dVar4 * dVar41 + dVar3 * 0.0 + dVar2 * 0.0;
              dVar12 = dVar7 * 1.0 + dVar4 * 0.0 + dVar5 * 0.0 + dVar2 * 0.0;
              dVar2 = *(double *)(lVar10 + 0x90);
              dVar5 = *(double *)(lVar10 + 0x98);
              dVar3 = *(double *)(lVar10 + 0x98);
              dVar4 = *(double *)(lVar10 + 0xa0);
              dVar6 = *(double *)(lVar10 + 0xa8);
              dVar7 = *(double *)(lVar10 + 0xa8);
              dVar15 = dVar6 * 0.0 + dVar4 * 0.0 + dVar5 * 0.0 + dVar2 * dVar47;
              dVar16 = dVar7 * 0.0 + dVar4 * 0.0 + dVar42 * dVar3 + dVar2 * 0.0;
              dVar50 = dVar6 * 0.0 + dVar4 * dVar41 + dVar5 * 0.0 + dVar2 * 0.0;
              dVar51 = dVar7 * 1.0 + dVar4 * 0.0 + dVar3 * 0.0 + dVar2 * 0.0;
              dVar2 = *(double *)(lVar10 + 0xb0);
              dVar3 = *(double *)(lVar10 + 0xb8);
              dVar5 = *(double *)(lVar10 + 0xb8);
              dVar4 = *(double *)(lVar10 + 0xc0);
              dVar6 = *(double *)(lVar10 + 200);
              dVar7 = *(double *)(lVar10 + 200);
              dVar47 = dVar6 * 0.0 + dVar4 * 0.0 + dVar3 * 0.0 + dVar2 * dVar47;
              dVar42 = dVar7 * 0.0 + dVar4 * 0.0 + dVar42 * dVar5 + dVar2 * 0.0;
              dVar43 = dVar6 * 0.0 + dVar4 * dVar41 + dVar3 * 0.0 + dVar2 * 0.0;
              dVar46 = dVar7 * 1.0 + dVar4 * 0.0 + dVar5 * 0.0 + dVar2 * 0.0;
              dVar54 = -*(double *)(lVar25 + 0x1030);
              dVar55 = -*(double *)(lVar25 + 0x1030);
              dVar2 = *(double *)(lVar25 + 0x1038);
              dVar3 = *(double *)(lVar25 + 0x1038);
              dVar5 = *(double *)(lVar25 + 0x1040);
              dVar4 = *(double *)(lVar25 + 0x1040);
              bVar8 = *(byte *)(lVar22 + 8 + lVar38);
              dVar41 = dVar47 * 0.0;
              dVar19 = dVar42 * 0.0;
              dVar6 = dVar43 * 0.0;
              dVar7 = dVar46 * 0.0;
              *(float *)(pwVar36 + uVar23 * 0x28 + 8) =
                   (float)(dVar13 + dVar48 * 0.0 + dVar15 * 0.0 + dVar41);
              *(float *)(pwVar36 + uVar23 * 0x28 + 10) =
                   (float)(dVar14 + dVar49 * 0.0 + dVar16 * 0.0 + dVar19);
              *(float *)(pwVar36 + uVar23 * 0x28 + 0xc) =
                   (float)(dVar17 + dVar11 * 0.0 + dVar50 * 0.0 + dVar6);
              *(float *)(pwVar36 + uVar23 * 0x28 + 0xe) =
                   (float)(dVar18 + dVar12 * 0.0 + dVar51 * 0.0 + dVar7);
              *(float *)(pwVar36 + uVar23 * 0x28 + 0x10) =
                   (float)(dVar13 * 0.0 + dVar48 + dVar15 * 0.0 + dVar41);
              *(float *)(pwVar36 + uVar23 * 0x28 + 0x12) =
                   (float)(dVar14 * 0.0 + dVar49 + dVar16 * 0.0 + dVar19);
              *(float *)(pwVar36 + uVar23 * 0x28 + 0x14) =
                   (float)(dVar17 * 0.0 + dVar11 + dVar50 * 0.0 + dVar6);
              *(float *)(pwVar36 + uVar23 * 0x28 + 0x16) =
                   (float)(dVar18 * 0.0 + dVar12 + dVar51 * 0.0 + dVar7);
              *(float *)(pwVar36 + uVar23 * 0x28 + 0x18) =
                   (float)(dVar13 * 0.0 + dVar48 * 0.0 + dVar15 + dVar41);
              *(float *)(pwVar36 + uVar23 * 0x28 + 0x1a) =
                   (float)(dVar14 * 0.0 + dVar49 * 0.0 + dVar16 + dVar19);
              *(float *)(pwVar36 + uVar23 * 0x28 + 0x1c) =
                   (float)(dVar17 * 0.0 + dVar11 * 0.0 + dVar50 + dVar6);
              *(float *)(pwVar36 + uVar23 * 0x28 + 0x1e) =
                   (float)(dVar18 * 0.0 + dVar12 * 0.0 + dVar51 + dVar7);
              *(float *)(pwVar36 + uVar23 * 0x28 + 0x20) =
                   (float)(((dVar13 * dVar54 - dVar48 * dVar2) - dVar15 * dVar5) + dVar47);
              *(float *)(pwVar36 + uVar23 * 0x28 + 0x22) =
                   (float)(((dVar14 * dVar55 - dVar49 * dVar3) - dVar16 * dVar4) + dVar42);
              *(float *)(pwVar36 + uVar23 * 0x28 + 0x24) =
                   (float)(((dVar54 * dVar17 - dVar11 * dVar2) - dVar50 * dVar5) + dVar43);
              *(float *)(pwVar36 + uVar23 * 0x28 + 0x26) =
                   (float)(((dVar55 * dVar18 - dVar12 * dVar3) - dVar51 * dVar4) + dVar46);
              uVar21 = *(uint *)(lVar10 + 0x1bc);
              fVar29 = (float)(uVar21 & DAT_1499319a0);
              if ((uint)fVar29 < 0x47800000) {
                if ((uint)fVar29 < 0x38800000) {
                  fVar29 = fVar29 + 0.5;
                }
                else {
                  fVar29 = (float)((int)fVar29 + 0x8000fff + (uint)(((uint)fVar29 >> 0xd & 1) != 0)
                                  >> 0xd);
                }
              }
              else {
                fVar29 = (float)((0x7f800000 < (uint)fVar29 | 0x3e) << 9);
              }
              bVar9 = *(byte *)(lVar10 + 0x1e8);
              lVar28 = (ulonglong)bVar8 * 0x20;
              fVar53 = *(float *)(*(longlong *)(lVar32 + 0x80) + 0x18 + lVar28) * 65536.0;
              fVar52 = *(float *)(*(longlong *)(lVar32 + 0x80) + 0x1c + lVar28) * 65536.0;
              if (bVar9 == 3) {
                lVar24 = *(longlong *)(lVar24 + 0x28);
                uVar39 = -(uint)(0.0 < *(float *)(lVar24 + 0x2d4));
                fVar40 = (float)(~uVar39 & 0xbf800000 | (uint)*(float *)(lVar24 + 0x2d4) & uVar39);
              }
              else {
                fVar40 = -1.0;
                if (bVar9 == 2) {
                  local_18c = iVar20;
                  fVar40 = (float)(**(code **)(**(longlong **)(lVar24 + 0x28) + 0x20))();
                  fVar40 = tanf(fVar40);
                  lVar24 = extraout_RAX;
                  lVar32 = local_1b0;
                  lVar33 = local_138;
                  lVar22 = local_140;
                  iVar20 = local_18c;
                }
              }
              pwVar35 = pwVar36 + uVar23 * 0x28;
              uVar21 = movmskps((int)lVar24,ZEXT416(uVar21));
              auVar44 = ZEXT416((uint)fVar53 & 0x80000000) | _DAT_14a241e40;
              auVar44._0_4_ = auVar44._0_4_ + fVar53;
              auVar44 = roundss(auVar44,auVar44,0xb);
              auVar45 = ZEXT416((uint)fVar52 & 0x80000000) | _DAT_14a241e40;
              auVar45._0_4_ = auVar45._0_4_ + fVar52;
              auVar45 = roundss(auVar45,auVar45,0xb);
              *(undefined4 *)pwVar35 = *(undefined4 *)(lVar10 + 0x1b8);
              *(uint *)(pwVar35 + 2) =
                   (uVar21 & 1) << 0x17 | ((uint)fVar29 & 0xffff) << 8 | (uint)bVar9;
              *(uint *)(pwVar35 + 4) =
                   (int)(longlong)auVar45._0_4_ << 0x10 | (uint)(longlong)auVar44._0_4_;
            }
            *(float *)(pwVar36 + uVar23 * 0x28 + 6) = fVar40;
            uVar23 = (ulonglong)(iVar20 + 1);
            lVar38 = lVar38 + 0x10;
          } while (lVar33 != lVar38);
        }
        lVar22 = local_198;
        local_200[8] = 1;
        local_200._0_8_ = local_158;
        local_208 = pwVar36;
        lVar25 = FUN_144942e63(local_198,L"LightFunctionAtlasLightInfoData",0x10,
                               (int)local_150 * 0xa0);
        puVar1 = local_1a8;
        *(longlong *)(local_1b0 + 0x18) = lVar25;
        puVar31 = (undefined8 *)(*(longlong *)(lVar22 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar26 = puVar31 + 9;
        if (*(undefined8 **)(lVar22 + 0x78) < puVar26) {
          FUN_140023dd8(local_1a8,0x50);
          puVar31 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar26 = puVar31 + 9;
        }
        puVar37 = local_148;
        param_3 = local_160;
        *(undefined8 **)(lVar22 + 0x70) = puVar26;
        puVar31[1] = *(undefined8 *)(lVar25 + 8);
        puVar31[2] = 0;
        *(undefined1 *)(puVar31 + 3) = 3;
        *(undefined8 *)((longlong)puVar31 + 0x1c) = 0xffffffffffffffff;
        *puVar31 = &PTR_FUN_14a1fb168;
        *(undefined1 *)(puVar31 + 5) = 1;
        *(undefined8 *)((longlong)puVar31 + 0x2c) = 0xffffffff00000000;
        puVar31[7] = 0;
        puVar31[8] = lVar25;
        iVar20 = *(int *)(lVar22 + 0x1a0);
        *(uint *)(lVar22 + 0x1a0) = iVar20 + 1U;
        if (*(uint *)(lVar22 + 0x1a4) < iVar20 + 1U) {
          FUN_1447568fc(local_178,iVar20);
        }
        *(undefined8 **)(*(longlong *)(lVar22 + 0x198) + (longlong)iVar20 * 8) = puVar31;
        *(int *)((longlong)puVar31 + 0x1c) = *(int *)(lVar22 + 0x1a0) + -1;
        puVar37[3] = puVar31;
        iVar20 = *(int *)(local_1b0 + 0xb8);
        *(uint *)(local_1b0 + 0xb8) = iVar20 + 1U;
        if (*(uint *)(local_1b0 + 0xbc) < iVar20 + 1U) {
          FUN_1471d913e(local_170,iVar20);
        }
        local_128 = puVar37 + 2;
        *(undefined8 **)(*(longlong *)(local_1b0 + 0xb0) + (longlong)iVar20 * 8) = local_128;
        FUN_1449863e6();
        local_130 = DAT_14c9e7c58;
        uVar27 = FUN_1403e615a(local_168,local_1a8,&local_128,&local_130);
        iVar20 = *(int *)(local_1b0 + 200);
        *(uint *)(local_1b0 + 200) = iVar20 + 1U;
        if (*(uint *)(local_1b0 + 0xcc) < iVar20 + 1U) {
          FUN_1471d91c4(local_180,iVar20);
        }
        *(undefined8 *)(*local_180 + (longlong)iVar20 * 8) = uVar27;
        local_19c = local_19c + 1;
      } while (local_19c < *(uint *)(param_3 + 1));
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142cdedaa FUN_142cdedaa body=109 status=ok
// SIG undefined FUN_142cdedaa(void)

void FUN_142cdedaa(float *param_1,longlong param_2,longlong param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  
  if (*(int *)(param_3 + 0x30) == 0) {
    param_1[2] = DAT_14c846338;
    *(undefined8 *)param_1 = DAT_14c846330;
    return;
  }
  lVar5 = *(longlong *)(param_3 + 0x28);
  dVar1 = *(double *)(lVar5 + 0x140);
  dVar2 = *(double *)(lVar5 + 0x138);
  dVar3 = *(double *)(param_2 + 0xb58);
  dVar4 = *(double *)(param_2 + 0xb50);
  *param_1 = (float)(*(double *)(lVar5 + 0x130) - *(double *)(param_2 + 0xb48));
  param_1[1] = (float)(dVar2 - dVar4);
  param_1[2] = (float)(dVar1 - dVar3);
  return;
}



// FUNCTION 142cdee44 FUN_142cdee44 body=1792 status=ok
// SIG undefined FUN_142cdee44(void)

ulonglong FUN_142cdee44(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                       undefined8 param_5,longlong *param_6,undefined1 param_7,undefined1 param_8,
                       char param_9)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  undefined8 *puVar5;
  char cVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_218 [32];
  undefined1 local_1f8;
  longlong local_1f0;
  ulonglong *local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  int local_1cc;
  longlong *local_1c8;
  undefined8 *local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  undefined8 *local_1a0;
  undefined1 local_191;
  undefined8 *local_190;
  longlong local_188;
  undefined *local_180;
  undefined8 local_178 [27];
  undefined4 auStack_a0 [12];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_178[0xc] = 0;
  local_178[0xd] = 0;
  local_178[10] = 0;
  local_178[0xb] = 0;
  local_178[8] = 0;
  local_178[9] = 0;
  local_178[6] = 0;
  local_178[7] = 0;
  local_178[4] = 0;
  local_178[5] = 0;
  local_178[2] = 0;
  local_178[3] = 0;
  local_178[0] = 0;
  local_178[1] = 0;
  uVar13 = 0;
  if (param_6 != (longlong *)0x0) {
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 8) + 8);
    local_1f0 = param_2;
    local_1e0 = param_1;
    local_1d8 = param_4;
    local_1b8 = param_3;
    do {
      plVar7 = (longlong *)(**(code **)(*param_6 + 0x30))(param_6);
      if ((plVar7 != (longlong *)0x0) &&
         (cVar6 = (**(code **)(*plVar7 + 0xd8))(plVar7), cVar6 != '\0')) {
        memset(local_178 + 0xe,0,0x98);
        FUN_145df9fd2();
        local_178[(ulonglong)DAT_14c9e7ed8 + 0xf] = &DAT_14c9e7e90;
        auStack_a0[DAT_14c9e7ed8] = 0;
        FUN_145f002c6();
        local_178[(ulonglong)DAT_14c9e8000 + 0xf] = &DAT_14c9e7fb8;
        auStack_a0[DAT_14c9e8000] = 0;
        cVar6 = FUN_14007744c(plVar7,local_178 + 0xe,0,local_178);
        if (cVar6 != '\0') {
          uVar13 = 1;
          if (0 < *(int *)(local_1e0 + 0x3f0)) {
            local_1a8 = *(undefined8 *)(local_1d8 + 0x28);
            local_1e8 = (ulonglong *)(local_1f0 + 0x70);
            local_1c8 = (longlong *)(local_1f0 + 0x98);
            local_1b0 = local_1f0 + 0x168;
            lVar17 = 0;
            lVar10 = local_1f0;
            lVar9 = local_1d8;
            lVar14 = local_1e0;
            do {
              lVar16 = *(longlong *)(lVar14 + 1000);
              puVar3 = *(ulonglong **)(lVar10 + 0x18);
              iVar2 = *(int *)(lVar16 + 0x1de0 + lVar17 * 0x13c10);
              iVar15 = *(int *)((longlong)puVar3 + 0x17c);
              if (iVar15 != iVar2) {
                *(int *)((longlong)puVar3 + 0x17c) = iVar2;
                puVar8 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
                puVar12 = puVar8 + 3;
                if ((undefined8 *)puVar3[1] < puVar12) {
                  FUN_140023dd8(puVar3,0x20);
                  uVar13 = CONCAT71((int7)((ulonglong)lVar9 >> 8),1);
                  puVar8 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
                  puVar12 = puVar8 + 3;
                  lVar10 = local_1f0;
                  lVar14 = local_1e0;
                }
                *puVar3 = (ulonglong)puVar12;
                *(int *)(puVar3 + 0xc) = (int)puVar3[0xc] + 1;
                *(undefined8 **)puVar3[6] = puVar8;
                puVar3[6] = (ulonglong)(puVar8 + 1);
                uVar1 = *(undefined4 *)((longlong)puVar3 + 0x17c);
                puVar8[1] = 0;
                *puVar8 = &PTR_FUN_14a1fb2c0;
                *(undefined4 *)(puVar8 + 2) = uVar1;
              }
              puVar4 = local_1e8;
              lVar16 = lVar16 + lVar17 * 0x13c10;
              if ((*(byte *)(*(longlong *)(lVar16 + 0x3780) + 0x40 +
                            (longlong)*(int *)(lVar9 + 0x34) * 0x78) & 1) != 0) {
                puVar8 = (undefined8 *)(*(longlong *)(lVar10 + 0x70) + 0xfU & 0xfffffffffffffff0);
                puVar12 = puVar8 + 0x26;
                local_1cc = iVar15;
                if (*(undefined8 **)(lVar10 + 0x78) < puVar12) {
                  FUN_140023dd8(local_1e8,0x140);
                  puVar8 = (undefined8 *)(*puVar4 + 0xf & 0xfffffffffffffff0);
                  puVar12 = puVar8 + 0x26;
                  lVar10 = local_1f0;
                }
                *local_1e8 = (ulonglong)puVar12;
                *puVar8 = &PTR_FUN_14a247d20;
                local_1a0 = puVar8 + 2;
                puVar8[2] = 0;
                *(undefined1 *)(puVar8 + 3) = 1;
                puVar8[4] = 0;
                lVar9 = 0x42;
                do {
                  puVar12 = (undefined8 *)((longlong)puVar8 + lVar9 + -0x12);
                  *puVar12 = 0;
                  puVar12[1] = 0;
                  *(undefined4 *)((longlong)puVar8 + lVar9 + -2) = 0xffff0000;
                  lVar9 = lVar9 + 0x18;
                } while (lVar9 != 0x102);
                *(undefined4 *)((longlong)puVar8 + 0x104) = 0;
                puVar8[0x1e] = 0;
                puVar8[0x1f] = 0;
                *(undefined2 *)(puVar8 + 0x20) = 0;
                *(undefined4 *)(puVar8 + 0x21) = 0xffffffff;
                *(undefined4 *)((longlong)puVar8 + 0x10c) = 0xffffffff;
                *(undefined4 *)(puVar8 + 0x22) = 0xffffffff;
                *(undefined4 *)((longlong)puVar8 + 0x114) = 0xffffffff;
                *(undefined4 *)(puVar8 + 0x23) = 0;
                *(undefined2 *)((longlong)puVar8 + 0x11c) = 0;
                puVar8[0x24] = 0;
                iVar2 = *(int *)(lVar10 + 0xa0);
                *(uint *)(lVar10 + 0xa0) = iVar2 + 1U;
                if (*(uint *)(lVar10 + 0xa4) < iVar2 + 1U) {
                  FUN_1448cfae8(local_1c8,iVar2);
                }
                *(undefined8 **)(*local_1c8 + (longlong)iVar2 * 8) = puVar8;
                uVar11 = *(undefined8 *)(local_1b8 + 0x198);
                lVar10 = FUN_14482e3b2();
                cVar6 = *(char *)(lVar10 + 0x41);
                if (cVar6 == '\x03') {
                  cVar6 = '\x02';
                }
                puVar8[2] = uVar11;
                *(char *)(puVar8 + 3) = cVar6;
                lVar10 = *(longlong *)(lVar16 + 0x11a38);
                if ((*(byte *)(lVar16 + 0x11a08) & lVar10 != 0) == 0) {
                  lVar10 = FUN_14476842e(local_1f0,&DAT_14ca63ba8,L"DepthDummy",2);
                }
                puVar8[4] = lVar10;
                puVar8[6] = param_5;
                puVar8[7] = 0;
                *(undefined1 *)(puVar8 + 8) = param_7;
                *(undefined1 *)((longlong)puVar8 + 0x41) = 0;
                *(undefined2 *)((longlong)puVar8 + 0x42) = 0xffff;
                puVar8[0x1e] = *(undefined8 *)(local_1b8 + 0x1c0);
                puVar8[0x1f] = 0;
                *(undefined2 *)(puVar8 + 0x20) = 0x101;
                *(undefined4 *)((longlong)puVar8 + 0x104) = 0x21;
                local_1f8 = 0;
                uVar11 = FUN_1401c8e48(&DAT_14ca63c98,local_1f0,lVar16,6);
                puVar8[0x24] = uVar11;
                if (param_9 != '\0') {
                  puVar8[0x1e] = *(undefined8 *)(lVar16 + 0x11a38);
                  puVar8[0x1f] = 0;
                  *(undefined2 *)(puVar8 + 0x20) = 0x101;
                  *(undefined4 *)((longlong)puVar8 + 0x104) = 0x21;
                }
                puVar12 = local_178;
                puVar8 = local_178 + 0xe;
                for (lVar10 = 0xe; lVar10 != 0; lVar10 = lVar10 + -1) {
                  *puVar8 = *puVar12;
                  puVar12 = puVar12 + 1;
                  puVar8 = puVar8 + 1;
                }
                FUN_1471d9294();
                lVar10 = local_1f0;
                FUN_140069376(local_1f0);
                puVar4 = local_1e8;
                puVar8 = (undefined8 *)(*(longlong *)(lVar10 + 0x70) + 7U & 0xfffffffffffffff8);
                puVar12 = puVar8 + 0x4c;
                if (*(undefined8 **)(lVar10 + 0x78) < puVar12) {
                  FUN_140023dd8(local_1e8,0x268);
                  puVar8 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
                  puVar12 = puVar8 + 0x4c;
                }
                puVar5 = local_1a0;
                lVar10 = local_1d8;
                *local_1e8 = (ulonglong)puVar12;
                local_190 = local_1a0;
                local_188 = DAT_14c9eb240;
                if (DAT_14c9eb240 != 0) {
                  LOCK();
                  *(int *)(DAT_14c9eb240 + 8) = *(int *)(DAT_14c9eb240 + 8) + 1;
                  UNLOCK();
                }
                local_180 = &DAT_14c9eb1f8;
                local_1f8 = 2;
                local_1c0 = puVar8;
                FUN_140068f1a(puVar8,&local_191,&local_190,1);
                *local_1c0 = &PTR_FUN_14a247d60;
                local_1c0[0x37] = lVar16;
                local_1c0[0x38] = puVar5;
                local_1c0[0x39] = lVar10;
                local_1c0[0x3a] = local_1a8;
                local_1c0[0x3b] = param_6;
                local_1c0[0x3c] = plVar7;
                puVar12 = local_178 + 0xe;
                puVar8 = local_1c0 + 0x3d;
                for (lVar10 = 0xe; lVar10 != 0; lVar10 = lVar10 + -1) {
                  *puVar8 = *puVar12;
                  puVar12 = puVar12 + 1;
                  puVar8 = puVar8 + 1;
                }
                *(undefined1 *)(local_1c0 + 0x4b) = param_7;
                *(undefined1 *)((longlong)local_1c0 + 0x259) = param_8;
                *(undefined1 *)((longlong)local_1c0 + 0x25a) = 0;
                *(char *)((longlong)local_1c0 + 0x25b) = param_9;
                iVar2 = *(int *)(local_1f0 + 0x170);
                *(uint *)(local_1f0 + 0x170) = iVar2 + 1U;
                if (*(uint *)(local_1f0 + 0x174) < iVar2 + 1U) {
                  FUN_14470e57a(local_1b0,iVar2);
                }
                *(undefined8 **)(*(longlong *)(local_1f0 + 0x168) + (longlong)iVar2 * 8) = local_1c0
                ;
                *(int *)((longlong)local_1c0 + 0x2c) = *(int *)(local_1f0 + 0x170) + -1;
                FUN_140069100();
                lVar10 = local_1f0;
                lVar9 = local_1d8;
                lVar14 = local_1e0;
                iVar15 = local_1cc;
              }
              if (*(int *)((longlong)puVar3 + 0x17c) != iVar15) {
                *(int *)((longlong)puVar3 + 0x17c) = iVar15;
                puVar8 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
                puVar12 = puVar8 + 3;
                if ((undefined8 *)puVar3[1] < puVar12) {
                  FUN_140023dd8(puVar3,0x20);
                  puVar8 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
                  puVar12 = puVar8 + 3;
                  lVar10 = local_1f0;
                  lVar14 = local_1e0;
                }
                *puVar3 = (ulonglong)puVar12;
                *(int *)(puVar3 + 0xc) = (int)puVar3[0xc] + 1;
                *(undefined8 **)puVar3[6] = puVar8;
                puVar3[6] = (ulonglong)(puVar8 + 1);
                uVar1 = *(undefined4 *)((longlong)puVar3 + 0x17c);
                puVar8[1] = 0;
                *puVar8 = &PTR_FUN_14a1fb2c0;
                *(undefined4 *)(puVar8 + 2) = uVar1;
              }
              lVar17 = lVar17 + 1;
            } while (lVar17 < *(int *)(lVar14 + 0x3f0));
          }
          goto LAB_142cdf505;
        }
      }
      param_6 = (longlong *)(**(code **)(*param_6 + 0x38))(param_6,uVar1);
    } while (param_6 != (longlong *)0x0);
    uVar13 = 0;
  }
LAB_142cdf505:
  if ((local_70 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13 & 0xffffffff;
}



// FUNCTION 142cdf545 FUN_142cdf545 body=69 status=ok
// SIG undefined FUN_142cdf545(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cdf545(void)

{
  _DAT_14c9e80a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cdf587. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e80b0,1);
  return;
}



// FUNCTION 142cdf58a FUN_142cdf58a body=69 status=ok
// SIG undefined FUN_142cdf58a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cdf58a(void)

{
  _DAT_14c9e80b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cdf5cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e80c0,1);
  return;
}



// FUNCTION 142cdf5cf FUN_142cdf5cf body=69 status=ok
// SIG undefined FUN_142cdf5cf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cdf5cf(void)

{
  _DAT_14c9e80d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cdf611. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e80d8,1);
  return;
}



// FUNCTION 142cdf614 FUN_142cdf614 body=69 status=ok
// SIG undefined FUN_142cdf614(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cdf614(void)

{
  _DAT_14c9e80e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cdf656. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e80e8,1);
  return;
}



// FUNCTION 142cdf659 FUN_142cdf659 body=69 status=ok
// SIG undefined FUN_142cdf659(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cdf659(void)

{
  _DAT_14c9e80f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cdf69b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e80f8,1);
  return;
}



// FUNCTION 142cdf69e FUN_142cdf69e body=69 status=ok
// SIG undefined FUN_142cdf69e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cdf69e(void)

{
  _DAT_14c9e8100 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cdf6e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e8108,1);
  return;
}



// FUNCTION 142cdf6e3 FUN_142cdf6e3 body=69 status=ok
// SIG undefined FUN_142cdf6e3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cdf6e3(void)

{
  _DAT_14c9e8110 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cdf725. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e8118,1);
  return;
}



// FUNCTION 142cdf728 FUN_142cdf728 body=69 status=ok
// SIG undefined FUN_142cdf728(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cdf728(void)

{
  _DAT_14c9e8120 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cdf76a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e8128,1);
  return;
}



// FUNCTION 142cdf76d FUN_142cdf76d body=69 status=ok
// SIG undefined FUN_142cdf76d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cdf76d(void)

{
  _DAT_14c9e8130 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cdf7af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e8138,1);
  return;
}



// FUNCTION 142cdf7b2 FUN_142cdf7b2 body=69 status=ok
// SIG undefined FUN_142cdf7b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cdf7b2(void)

{
  _DAT_14c9e8140 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cdf7f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e8148,1);
  return;
}



// FUNCTION 142cdf7f7 FUN_142cdf7f7 body=69 status=ok
// SIG undefined FUN_142cdf7f7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cdf7f7(void)

{
  _DAT_14c9e8158 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cdf839. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e8160,1);
  return;
}



// FUNCTION 142cdf83c FUN_142cdf83c body=69 status=ok
// SIG undefined FUN_142cdf83c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cdf83c(void)

{
  _DAT_14c9e8170 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cdf87e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e8178,1);
  return;
}



// FUNCTION 142cdf881 FUN_142cdf881 body=69 status=ok
// SIG undefined FUN_142cdf881(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cdf881(void)

{
  _DAT_14c9e8188 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cdf8c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e8190,1);
  return;
}



// FUNCTION 142cdf8c6 FUN_142cdf8c6 body=69 status=ok
// SIG undefined FUN_142cdf8c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cdf8c6(void)

{
  _DAT_14c9e81a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cdf908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e81a8,1);
  return;
}



// FUNCTION 142cdf92b FUN_142cdf92b body=5266 status=ok
// SIG undefined FUN_142cdf92b(void)

undefined8 *
FUN_142cdf92b(undefined8 *param_1,longlong param_2,longlong param_3,int *param_4,undefined4 param_5,
             undefined4 param_6,int param_7,undefined8 *param_8,undefined4 param_9,
             undefined4 param_10,undefined8 *param_11,undefined4 param_12,undefined4 param_13,
             undefined4 param_14,undefined4 param_15,char param_16,byte param_17,undefined8 param_18
             ,undefined8 param_19,undefined8 param_20,byte param_21,byte param_22,longlong param_23,
             longlong param_24,int param_25)

{
  ulonglong *puVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined8 *puVar15;
  ulonglong uVar17;
  uint uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  int iVar21;
  ulonglong uVar22;
  char *pcVar23;
  ulonglong uVar24;
  undefined8 *puVar25;
  bool bVar26;
  bool bVar27;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  ulonglong *local_e0;
  longlong local_d8;
  undefined8 *local_d0;
  longlong local_c8;
  int local_bc;
  int local_b8;
  int local_b4;
  ulonglong local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  int *local_80;
  undefined8 *local_78;
  undefined1 local_69;
  int local_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined *local_58;
  ulonglong local_48;
  undefined6 uVar16;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar13 = DAT_14c760460 * param_7;
  uVar18 = 0x1000000;
  if (uVar13 < 0x1000000) {
    uVar18 = uVar13;
  }
  if (param_21 == 0) {
    uVar18 = uVar13;
  }
  local_90 = (ulonglong)uVar18;
  iVar2 = param_25 + -1;
  local_b4 = (param_4[2] + iVar2) / param_25;
  local_b8 = (param_4[1] + iVar2) / param_25;
  local_bc = (iVar2 + *param_4) / param_25;
  uStack_60 = 0x10109;
  uVar10 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar10 = DAT_14ca84e48;
  }
  local_58 = (undefined *)0x0;
  local_68 = uVar10 + (uVar10 == 0);
  uVar10 = DAT_14ca84e48;
  if (uVar18 * 2 < DAT_14ca84e48) {
    uVar10 = uVar18 * 2;
  }
  iStack_64 = uVar10 + (uVar10 == 0);
  puVar1 = (ulonglong *)(param_2 + 0x70);
  uVar24 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar6 = uVar24 + 0x150;
  local_e0 = puVar1;
  local_c8 = param_3;
  local_80 = param_4;
  if (*(ulonglong *)(param_2 + 0x78) < uVar6) {
    FUN_140023dd8(puVar1,0x160);
    uVar24 = *puVar1 + 0xf & 0xfffffffffffffff0;
    uVar6 = uVar24 + 0x150;
  }
  lVar7 = param_2 + 0x188;
  *(ulonglong *)(param_2 + 0x70) = uVar6;
  local_78 = param_1;
  FUN_1456bd266(uVar24,L"CulledLightLinks",&local_68,0);
  iVar2 = *(int *)(param_2 + 400);
  *(uint *)(param_2 + 400) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x194) < iVar2 + 1U) {
    FUN_144737178(lVar7,iVar2);
  }
  puVar1 = local_e0;
  *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar2 * 8) = uVar24;
  *(int *)(uVar24 + 0x7c) = *(int *)(param_2 + 400) + -1;
  local_58 = (undefined *)0x0;
  uVar18 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar18 = DAT_14ca84e48;
  }
  local_68 = uVar18 + (uVar18 == 0);
  iStack_64 = 1;
  uStack_60 = 0x10109;
  uVar17 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar6 = uVar17 + 0x150;
  if (*(ulonglong *)(param_2 + 0x78) < uVar6) {
    FUN_140023dd8(local_e0,0x160);
    uVar17 = *puVar1 + 0xf & 0xfffffffffffffff0;
    uVar6 = uVar17 + 0x150;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar6;
  FUN_1456bd266(uVar17,L"NextCulledLightLink",&local_68,0);
  iVar2 = *(int *)(param_2 + 400);
  *(uint *)(param_2 + 400) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x194) < iVar2 + 1U) {
    FUN_144737178(lVar7,iVar2);
  }
  puVar1 = local_e0;
  *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar2 * 8) = uVar17;
  *(int *)(uVar17 + 0x7c) = *(int *)(param_2 + 400) + -1;
  uVar18 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar18 = DAT_14ca84e48;
  }
  local_58 = (undefined *)0x0;
  local_68 = uVar18 + (uVar18 == 0);
  iStack_64 = 1;
  uStack_60 = 0x10109;
  uVar22 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar6 = uVar22 + 0x150;
  local_b0 = uVar17;
  if (*(ulonglong *)(param_2 + 0x78) < uVar6) {
    FUN_140023dd8(local_e0,0x160);
    uVar22 = *puVar1 + 0xf & 0xfffffffffffffff0;
    uVar6 = uVar22 + 0x150;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar6;
  FUN_1456bd266(uVar22,L"NextCulledLightData",&local_68,0);
  iVar2 = *(int *)(param_2 + 400);
  *(uint *)(param_2 + 400) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x194) < iVar2 + 1U) {
    FUN_144737178(lVar7,iVar2);
  }
  puVar1 = local_e0;
  *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar2 * 8) = uVar22;
  *(int *)(uVar22 + 0x7c) = *(int *)(param_2 + 400) + -1;
  cVar9 = *(char *)(uVar22 + 0x68);
  local_a8 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar8 = local_a8 + 8;
  if (*(undefined8 **)(param_2 + 0x78) < puVar8) {
    FUN_140023dd8(local_e0,0x48);
    local_a8 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar8 = local_a8 + 8;
  }
  local_d8 = param_2 + 0x198;
  *(undefined8 **)(param_2 + 0x70) = puVar8;
  local_a8[1] = *(undefined8 *)(uVar22 + 8);
  local_a8[2] = 0;
  *(undefined1 *)(local_a8 + 3) = 2;
  *(undefined8 *)((longlong)local_a8 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(local_a8 + 5) = 0;
  *local_a8 = &PTR_FUN_14a1fb3e8;
  *(byte *)(local_a8 + 6) = cVar9 >> 7 & 0x1c;
  *(undefined2 *)((longlong)local_a8 + 0x31) = 0;
  local_a8[7] = uVar22;
  iVar2 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar2 + 1U;
  local_d0 = (undefined8 *)lVar7;
  if (*(uint *)(param_2 + 0x1a4) < iVar2 + 1U) {
    FUN_1447568fc(local_d8,iVar2);
  }
  puVar1 = local_e0;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar2 * 8) = local_a8;
  *(int *)((longlong)local_a8 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  uVar18 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar18 = DAT_14ca84e48;
  }
  local_68 = uVar18 + (uVar18 == 0);
  uStack_60 = 0x10109;
  uVar18 = param_7 * DAT_14c76047c;
  if (DAT_14ca84e48 <= (uint)(param_7 * DAT_14c76047c)) {
    uVar18 = DAT_14ca84e48;
  }
  local_58 = (undefined *)0x0;
  iStack_64 = uVar18 + (uVar18 == 0);
  uVar17 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar6 = uVar17 + 0x150;
  if (*(ulonglong *)(param_2 + 0x78) < uVar6) {
    FUN_140023dd8(local_e0,0x160);
    uVar17 = *puVar1 + 0xf & 0xfffffffffffffff0;
    uVar6 = uVar17 + 0x150;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar6;
  FUN_1456bd266(uVar17,L"NumCulledLightsGrid",&local_68,0);
  iVar2 = *(int *)(param_2 + 400);
  *(uint *)(param_2 + 400) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x194) < iVar2 + 1U) {
    FUN_144737178(local_d0,iVar2);
  }
  puVar1 = local_e0;
  *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar2 * 8) = uVar17;
  *(int *)(uVar17 + 0x7c) = *(int *)(param_2 + 400) + -1;
  cVar9 = *(char *)(uVar17 + 0x68);
  puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar19 + 8;
  local_98 = uVar24;
  if (*(undefined8 **)(param_2 + 0x78) < puVar8) {
    FUN_140023dd8(local_e0,0x48);
    puVar19 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar19 + 8;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar8;
  puVar19[1] = *(undefined8 *)(uVar17 + 8);
  puVar19[2] = 0;
  *(undefined1 *)(puVar19 + 3) = 2;
  *(undefined8 *)((longlong)puVar19 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar19 + 5) = 0;
  *puVar19 = &PTR_FUN_14a1fb3e8;
  *(byte *)(puVar19 + 6) = cVar9 >> 7 & 0x1c;
  *(undefined2 *)((longlong)puVar19 + 0x31) = 0;
  puVar19[7] = uVar17;
  iVar2 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar2 + 1U) {
    FUN_1447568fc(local_d8,iVar2);
  }
  puVar1 = local_e0;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar2 * 8) = puVar19;
  *(int *)((longlong)puVar19 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  local_88 = uVar17;
  if (param_16 == '\0') {
    uVar18 = 4;
    if (DAT_14ca84e48 < 4) {
      uVar18 = DAT_14ca84e48;
    }
    local_68 = uVar18 + (uVar18 == 0);
    uStack_60 = 0x10109;
    uVar18 = DAT_14ca84e48;
    if (uVar13 < DAT_14ca84e48) {
      uVar18 = uVar13;
    }
    local_58 = (undefined *)0x0;
    iStack_64 = uVar18 + (uVar18 == 0);
    uVar24 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar6 = uVar24 + 0x150;
    if (*(ulonglong *)(param_2 + 0x78) < uVar6) {
      FUN_140023dd8(local_e0,0x160);
      uVar24 = *puVar1 + 0xf & 0xfffffffffffffff0;
      uVar6 = uVar24 + 0x150;
    }
    *(ulonglong *)(param_2 + 0x70) = uVar6;
    FUN_1456bd266(uVar24,L"CulledLightDataGrid",&local_68,0);
    iVar2 = *(int *)(param_2 + 400);
    *(uint *)(param_2 + 400) = iVar2 + 1U;
    if (*(uint *)(param_2 + 0x194) < iVar2 + 1U) {
      FUN_144737178(local_d0,iVar2);
    }
    puVar1 = local_e0;
    *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar2 * 8) = uVar24;
    *(int *)(uVar24 + 0x7c) = *(int *)(param_2 + 400) + -1;
    cVar9 = *(char *)(uVar24 + 0x68);
    puVar20 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar20 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar8) {
      FUN_140023dd8(local_e0,0x50);
      puVar20 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar20 + 9;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar8;
    puVar20[1] = *(undefined8 *)(uVar24 + 8);
    puVar20[2] = 0;
    *(undefined1 *)(puVar20 + 3) = 3;
    *(undefined8 *)((longlong)puVar20 + 0x1c) = 0xffffffffffffffff;
    *puVar20 = &PTR_FUN_14a1fb168;
    *(byte *)(puVar20 + 5) = cVar9 >> 7 & 0x1c;
    *(undefined8 *)((longlong)puVar20 + 0x2c) = 0xffffffff00000000;
    puVar20[7] = 0;
    puVar20[8] = uVar24;
    iVar2 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar2 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar2 + 1U) {
      FUN_1447568fc(local_d8,iVar2);
    }
    puVar1 = local_e0;
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar2 * 8) = puVar20;
    *(int *)((longlong)puVar20 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    cVar9 = *(char *)(uVar24 + 0x68);
    puVar25 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar25 + 8;
    if (*(undefined8 **)(param_2 + 0x78) < puVar8) {
      FUN_140023dd8(local_e0,0x48);
      puVar25 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar25 + 8;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar8;
    puVar25[1] = *(undefined8 *)(uVar24 + 8);
    puVar25[2] = 0;
    *(undefined1 *)(puVar25 + 3) = 2;
    *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar25 + 5) = 0;
    *puVar25 = &PTR_FUN_14a1fb3e8;
    *(byte *)(puVar25 + 6) = cVar9 >> 7 & 0x1c;
    *(undefined2 *)((longlong)puVar25 + 0x31) = 0;
  }
  else {
    local_68 = 2 - (uint)(DAT_14ca84e48 < 2);
    uStack_60 = 0x4109;
    uVar18 = DAT_14ca84e48;
    if (uVar13 < DAT_14ca84e48) {
      uVar18 = uVar13;
    }
    local_58 = (undefined *)0x0;
    iStack_64 = uVar18 + (uVar18 == 0);
    uVar24 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar6 = uVar24 + 0x150;
    if (*(ulonglong *)(param_2 + 0x78) < uVar6) {
      FUN_140023dd8(local_e0,0x160);
      uVar24 = *puVar1 + 0xf & 0xfffffffffffffff0;
      uVar6 = uVar24 + 0x150;
    }
    *(ulonglong *)(param_2 + 0x70) = uVar6;
    FUN_1456bd266(uVar24,L"CulledLightDataGrid",&local_68,0);
    iVar2 = *(int *)(param_2 + 400);
    *(uint *)(param_2 + 400) = iVar2 + 1U;
    if (*(uint *)(param_2 + 0x194) < iVar2 + 1U) {
      FUN_144737178(local_d0,iVar2);
    }
    puVar1 = local_e0;
    *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar2 * 8) = uVar24;
    *(int *)(uVar24 + 0x7c) = *(int *)(param_2 + 400) + -1;
    puVar20 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar20 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar8) {
      FUN_140023dd8(local_e0,0x50);
      puVar20 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar20 + 9;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar8;
    puVar20[1] = *(undefined8 *)(uVar24 + 8);
    puVar20[2] = 0;
    *(undefined1 *)(puVar20 + 3) = 3;
    *(undefined8 *)((longlong)puVar20 + 0x1c) = 0xffffffffffffffff;
    *puVar20 = &PTR_FUN_14a1fb168;
    *(undefined1 *)(puVar20 + 5) = 0x20;
    *(undefined8 *)((longlong)puVar20 + 0x2c) = 0xffffffff00000000;
    puVar20[7] = 0;
    puVar20[8] = uVar24;
    iVar2 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar2 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar2 + 1U) {
      FUN_1447568fc(local_d8,iVar2);
    }
    puVar1 = local_e0;
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar2 * 8) = puVar20;
    *(int *)((longlong)puVar20 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    puVar25 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar25 + 8;
    if (*(undefined8 **)(param_2 + 0x78) < puVar8) {
      FUN_140023dd8(local_e0,0x48);
      puVar25 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar25 + 8;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar8;
    puVar25[1] = *(undefined8 *)(uVar24 + 8);
    puVar25[2] = 0;
    *(undefined1 *)(puVar25 + 3) = 2;
    *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar25 + 5) = 0;
    *puVar25 = &PTR_FUN_14a1fb3e8;
    *(undefined2 *)(puVar25 + 6) = 0x20;
    *(undefined1 *)((longlong)puVar25 + 0x32) = 0;
  }
  puVar25[7] = uVar24;
  iVar2 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar2 + 1U) {
    FUN_1447568fc(local_d8,iVar2);
  }
  puVar1 = local_e0;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar2 * 8) = puVar25;
  *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar8 = puVar12 + 0x2a;
  if (*(undefined8 **)(param_2 + 0x78) < puVar8) {
    FUN_140023dd8(local_e0,0x160);
    puVar12 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar8 = puVar12 + 0x2a;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar8;
  *puVar12 = &PTR_FUN_14a247de0;
  puVar12[2] = 0;
  *(undefined1 *)(puVar12 + 3) = 1;
  puVar12[4] = 0;
  *(undefined1 *)(puVar12 + 5) = 1;
  puVar12[6] = 0;
  *(undefined1 *)(puVar12 + 7) = 1;
  puVar12[8] = 0;
  puVar12[9] = 0;
  puVar12[10] = 0;
  puVar12[0xb] = 0;
  puVar12[0xc] = 0;
  puVar12[0xd] = 0;
  puVar12[0xe] = 0;
  puVar12[0xf] = 0;
  puVar12[0x10] = 0;
  puVar12[0x1c] = 0;
  puVar12[0x1d] = 0;
  puVar12[0x1e] = 0;
  puVar12[0x26] = 0;
  puVar12[0x27] = 0;
  puVar12[0x28] = 0;
  puVar12[0x29] = 0;
  iVar2 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar2 + 1U) {
    FUN_1448cfae8((longlong *)(param_2 + 0x98),iVar2);
  }
  puVar8 = puVar12 + 2;
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar2 * 8) = puVar12;
  lVar7 = FUN_1447e4f80();
  cVar9 = '\x02';
  if (*(char *)(lVar7 + 0x41) != '\x03') {
    cVar9 = *(char *)(lVar7 + 0x41);
  }
  puVar12[6] = *(undefined8 *)(local_c8 + 0x18);
  *(char *)(puVar12 + 7) = cVar9;
  local_d0 = puVar8;
  if ((&DAT_14ca814b8)
      [(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(local_c8 + 0x3090) * 2) * 0xf] ==
      1) {
    puVar8 = puVar12 + 4;
    pcVar23 = (char *)(puVar12 + 5);
    puVar15 = (undefined8 *)(local_c8 + 0x13718);
    lVar7 = FUN_145d59ed4();
  }
  else {
    pcVar23 = (char *)(puVar12 + 3);
    puVar15 = (undefined8 *)(local_c8 + 0x13710);
    lVar7 = FUN_144a888ee();
  }
  puVar1 = local_e0;
  cVar9 = '\x02';
  if (*(char *)(lVar7 + 0x41) != '\x03') {
    cVar9 = *(char *)(lVar7 + 0x41);
  }
  *puVar8 = *puVar15;
  *pcVar23 = cVar9;
  puVar12[8] = puVar19;
  puVar12[9] = puVar25;
  puVar12[10] = puVar25;
  cVar9 = *(char *)(local_b0 + 0x68);
  puVar25 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar25 + 8;
  if (*(undefined8 **)(param_2 + 0x78) < puVar8) {
    FUN_140023dd8(local_e0,0x48);
    puVar25 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar25 + 8;
  }
  uVar6 = local_98;
  *(undefined8 **)(param_2 + 0x70) = puVar8;
  puVar25[1] = *(undefined8 *)(local_b0 + 8);
  puVar25[2] = 0;
  *(undefined1 *)(puVar25 + 3) = 2;
  *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar25 + 5) = 0;
  *puVar25 = &PTR_FUN_14a1fb3e8;
  *(byte *)(puVar25 + 6) = cVar9 >> 7 & 0x1c;
  *(undefined2 *)((longlong)puVar25 + 0x31) = 0;
  puVar25[7] = local_b0;
  iVar2 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar2 + 1U) {
    FUN_1447568fc(local_d8,iVar2);
  }
  puVar1 = local_e0;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar2 * 8) = puVar25;
  *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  puVar12[0xb] = puVar25;
  puVar12[0xc] = local_a8;
  cVar9 = *(char *)(uVar6 + 0x68);
  puVar25 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar25 + 8;
  if (*(undefined8 **)(param_2 + 0x78) < puVar8) {
    FUN_140023dd8(local_e0,0x48);
    puVar25 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar25 + 8;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar8;
  puVar25[1] = *(undefined8 *)(uVar6 + 8);
  puVar25[2] = 0;
  *(undefined1 *)(puVar25 + 3) = 2;
  *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar25 + 5) = 0;
  *puVar25 = &PTR_FUN_14a1fb3e8;
  *(byte *)(puVar25 + 6) = cVar9 >> 7 & 0x1c;
  *(undefined2 *)((longlong)puVar25 + 0x31) = 0;
  puVar25[7] = uVar6;
  iVar2 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar2 + 1U) {
    FUN_1447568fc(local_d8,iVar2);
  }
  piVar4 = local_80;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar2 * 8) = puVar25;
  *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  puVar12[0xd] = puVar25;
  puVar12[0x12] = *(undefined8 *)local_80;
  *(int *)(puVar12 + 0x13) = local_80[2];
  puVar12[0x14] = *param_8;
  *(undefined4 *)(puVar12 + 0x15) = *(undefined4 *)(param_8 + 1);
  *(undefined4 *)((longlong)puVar12 + 0x9c) = param_14;
  *(undefined4 *)((longlong)puVar12 + 0xac) = param_13;
  *(int *)((longlong)puVar12 + 0xb4) = DAT_14c760460;
  *(int *)(puVar12 + 0x17) = (int)local_90;
  *(int *)(puVar12 + 0x16) = local_80[1] * *local_80 * local_80[2];
  *(undefined4 *)((longlong)puVar12 + 0xbc) = param_5;
  *(undefined4 *)((longlong)puVar12 + 0xc4) = param_6;
  *(undefined4 *)(puVar12 + 0x19) = param_9;
  *(undefined4 *)((longlong)puVar12 + 0xcc) = param_10;
  puVar12[0x1a] = *param_11;
  *(undefined4 *)(puVar12 + 0x1b) = *(undefined4 *)(param_11 + 1);
  *(undefined4 *)((longlong)puVar12 + 0xdc) = param_12;
  *(undefined4 *)(puVar12 + 0x18) = param_15;
  puVar12[0x1c] = param_23;
  puVar12[0x1d] = param_24;
  puVar12[0x1e] = param_24;
  *(int *)(puVar12 + 0x20) = local_bc;
  *(int *)((longlong)puVar12 + 0x104) = local_b8;
  *(int *)(puVar12 + 0x21) = local_b4;
  *(int *)((longlong)puVar12 + 0x10c) = local_b8 * local_b4 * local_bc;
  *(int *)(puVar12 + 0x22) = param_25;
  puVar12[0xe] = param_18;
  puVar12[0xf] = param_19;
  puVar12[0x10] = param_20;
  puVar12[0x28] = *(undefined8 *)(local_c8 + 0x136f0);
  puVar12[0x29] = DAT_14c9c0d80;
  uVar3 = *(undefined8 *)(local_c8 + 0x137c8);
  *(float *)(puVar12 + 0x23) = (float)(int)uVar3;
  *(float *)((longlong)puVar12 + 0x11c) = (float)(int)((ulonglong)uVar3 >> 0x20);
  iVar2 = *(int *)(local_c8 + 0x3104);
  iVar11 = *(int *)(local_c8 + 0x30fc);
  *(float *)(puVar12 + 0x24) = (float)(*(int *)(local_c8 + 0x3100) - *(int *)(local_c8 + 0x30f8));
  *(float *)((longlong)puVar12 + 0x124) = (float)(iVar2 - iVar11);
  iVar2 = *(int *)(local_c8 + 0x3100);
  iVar11 = *(int *)(local_c8 + 0x3104);
  iVar5 = *(int *)(local_c8 + 0x30fc);
  iVar21 = *(int *)(local_c8 + 0x30f8);
  puVar12[0x26] = 0;
  puVar12[0x27] = CONCAT44(iVar11 - iVar5,iVar2 - iVar21);
  bVar26 = DAT_14c760464 != 0;
  bVar27 = DAT_14c760458 != 0;
  lVar7 = *(longlong *)(local_c8 + 0x136f0);
  uVar3 = *(undefined8 *)(local_c8 + 0x13818);
  FUN_141594e82();
  FUN_1448e935e(uVar3,&local_68,&DAT_14c9e82b0,
                (((uint)param_21 * 0x10 + (uint)param_17 * 2 | (uint)param_22 << 5) +
                 (uint)(param_24 != 0 && param_23 != 0) * 8 | (uint)bVar26) +
                (uint)(lVar7 != 0 && bVar27) * 4);
  FUN_141594e82();
  uVar3 = CONCAT44(iStack_64,local_68);
  local_c8 = CONCAT44(uStack_5c,uStack_60);
  FUN_1405bfba3(param_2,puVar12[0xb],0,2);
  FUN_1405bfba3(param_2,local_a8,0,2);
  FUN_1405bfba3(param_2,puVar19,0,2);
  if (param_21 == 0) {
    iVar5 = (int)(piVar4[2] + (uint)(param_22 ^ 1) * 2 + 1) / (int)((uint)(param_22 ^ 1) * 2 + 2);
    iVar2 = piVar4[1] + 3;
    iVar11 = piVar4[1] + 6;
    if (-1 < iVar2) {
      iVar11 = iVar2;
    }
    iVar11 = iVar11 >> 2;
    iVar2 = *piVar4 + 3;
    iVar21 = *piVar4 + 6;
    if (-1 < iVar2) {
      iVar21 = iVar2;
    }
    iVar21 = iVar21 >> 2;
  }
  else {
    iVar21 = *piVar4;
    iVar11 = piVar4[1];
    iVar5 = piVar4[2];
  }
  FUN_141594fa4();
  local_68 = 0;
  iStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  FUN_1448f70da(uVar3,&DAT_14c9ea0f8,local_d0);
  FUN_140069376(param_2);
  puVar1 = local_e0;
  uVar16 = (undefined6)((ulonglong)piVar4 >> 0x10);
  uVar14 = (undefined4)CONCAT62(uVar16,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar14 = (undefined4)CONCAT62(uVar16,4);
  }
  puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar19 + 0x3d;
  local_a0 = puVar20;
  if (*(undefined8 **)(param_2 + 0x78) < puVar8) {
    FUN_140023dd8(local_e0,0x1f0);
    puVar19 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar19 + 0x3d;
  }
  *local_e0 = (ulonglong)puVar8;
  local_68 = (int)local_d0;
  iStack_64 = (int)((ulonglong)local_d0 >> 0x20);
  uStack_60 = (undefined4)DAT_14c9ea140;
  uStack_5c = (undefined4)((ulonglong)DAT_14c9ea140 >> 0x20);
  if (DAT_14c9ea140 != 0) {
    LOCK();
    *(int *)(DAT_14c9ea140 + 8) = *(int *)(DAT_14c9ea140 + 8) + 1;
    UNLOCK();
  }
  local_58 = &DAT_14c9ea0f8;
  local_e8 = 2;
  FUN_140068f1a(puVar19,&local_69,&local_68,uVar14);
  *puVar19 = &PTR_FUN_14a247df0;
  puVar19[0x37] = &DAT_14c9ea0f8;
  puVar19[0x38] = local_d0;
  puVar19[0x39] = uVar3;
  puVar19[0x3a] = local_c8;
  *(int *)(puVar19 + 0x3b) = iVar21;
  *(int *)((longlong)puVar19 + 0x1dc) = iVar11;
  *(int *)(puVar19 + 0x3c) = iVar5;
  iVar2 = *(int *)(param_2 + 0x170);
  *(uint *)(param_2 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_2 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar2 * 8) = puVar19;
  *(int *)((longlong)puVar19 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
  FUN_140069100(param_2,puVar19);
  puVar19 = local_78;
  uVar6 = local_88;
  puVar1 = local_e0;
  local_78[1] = 0;
  *local_78 = local_a0;
  cVar9 = *(char *)(local_88 + 0x68);
  puVar20 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar20 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar8) {
    FUN_140023dd8(local_e0,0x50);
    puVar20 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar20 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar8;
  puVar20[1] = *(undefined8 *)(uVar6 + 8);
  puVar20[2] = 0;
  *(undefined1 *)(puVar20 + 3) = 3;
  *(undefined8 *)((longlong)puVar20 + 0x1c) = 0xffffffffffffffff;
  *puVar20 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar20 + 5) = cVar9 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar20 + 0x2c) = 0xffffffff00000000;
  puVar20[7] = 0;
  puVar20[8] = uVar6;
  iVar2 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar2 + 1U) {
    FUN_1447568fc(local_d8,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar2 * 8) = puVar20;
  *(int *)((longlong)puVar20 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  puVar19[1] = puVar20;
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar19;
}



// FUNCTION 142ce0dbe FUN_142ce0dbe body=20517 status=ok
// SIG undefined FUN_142ce0dbe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_142ce0dbe(longlong param_1,undefined8 *param_2,longlong param_3,char param_4,uint *param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  float fVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uVar16;
  void *_Src;
  ulonglong uVar17;
  char cVar18;
  byte bVar19;
  int iVar20;
  uint uVar21;
  float fVar22;
  uint uVar23;
  uint uVar24;
  longlong lVar25;
  longlong lVar26;
  undefined *puVar27;
  int iVar28;
  uint uVar29;
  longlong lVar30;
  undefined8 *puVar31;
  float fVar32;
  uint uVar33;
  undefined8 *puVar34;
  longlong lVar35;
  float *pfVar36;
  longlong lVar37;
  int *piVar38;
  uint uVar39;
  ulonglong uVar40;
  undefined8 *puVar41;
  uint uVar42;
  uint uVar43;
  longlong lVar44;
  float fVar45;
  undefined4 uVar46;
  int iVar47;
  longlong lVar48;
  uint uVar49;
  uint uVar50;
  longlong lVar51;
  undefined4 uVar52;
  float *pfVar53;
  uint uVar54;
  int iVar55;
  ulonglong uVar56;
  double *pdVar57;
  undefined8 *puVar58;
  bool bVar59;
  bool bVar60;
  float fVar61;
  uint *puVar62;
  double dVar63;
  undefined8 extraout_XMM0_Qa;
  uint *puVar68;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar71;
  float fVar72;
  double dVar73;
  double dVar74;
  double dVar75;
  double dVar76;
  double dVar77;
  undefined1 auVar78 [16];
  double dVar79;
  double dVar80;
  double dVar81;
  double dVar82;
  double dVar83;
  double dVar84;
  float fVar85;
  double dVar86;
  double dVar87;
  double dVar88;
  double dVar89;
  double dVar90;
  uint *puVar91;
  undefined8 *puVar92;
  double dVar93;
  double dVar94;
  undefined1 auStack_618 [32];
  undefined8 *local_5f8;
  float *local_5f0;
  int local_5e8;
  undefined8 *local_5e0;
  undefined4 local_5d8;
  int local_5d0;
  double *local_5c8;
  undefined4 local_5c0;
  undefined4 local_5b8;
  undefined4 local_5b0;
  undefined4 local_5a8;
  undefined1 local_5a0;
  byte local_598;
  undefined8 *local_590;
  undefined8 *local_588;
  undefined8 *local_580;
  undefined1 local_578;
  undefined1 local_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined4 local_558;
  byte local_549;
  undefined1 local_548 [8];
  double dStack_540;
  longlong local_530;
  longlong local_528;
  undefined8 *local_520;
  undefined4 local_518;
  undefined4 uStack_514;
  double dStack_510;
  undefined4 local_500;
  float local_4fc;
  char local_4f6;
  char local_4f5;
  float local_4f4;
  undefined4 local_4f0;
  undefined4 local_4ec;
  undefined1 local_4e8 [16];
  undefined8 local_4d8;
  undefined8 *puStack_4d0;
  undefined8 local_4c8;
  double dStack_4c0;
  longlong *local_4b8;
  longlong local_4b0;
  uint *local_4a8;
  uint *puStack_4a0;
  longlong local_490;
  longlong local_488;
  float local_480;
  int local_47c;
  undefined8 local_478;
  double dStack_470;
  undefined1 local_468 [16];
  longlong local_458;
  longlong local_450;
  double local_448;
  undefined8 uStack_440;
  double local_438;
  uint *puStack_430;
  int local_420;
  uint local_41c;
  longlong local_418;
  longlong *local_410;
  int *local_408;
  longlong local_400;
  double local_3f8;
  double dStack_3f0;
  float *local_3e8;
  undefined8 uStack_3e0;
  undefined8 *local_3d8;
  undefined8 *local_3d0;
  undefined8 *local_3c8;
  undefined8 *local_3c0;
  undefined8 *local_3b8;
  undefined8 *local_3b0;
  longlong local_3a8;
  ulonglong local_3a0;
  double local_398;
  ulonglong local_390;
  undefined1 local_388 [16];
  double local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  double local_318;
  undefined8 uStack_310;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined8 local_2f0;
  undefined4 local_2e8;
  double local_2e0;
  undefined4 local_2d8;
  int local_2d4;
  int local_2d0;
  int local_2cc;
  undefined8 local_2c8;
  undefined4 local_2c0;
  double local_2b8;
  undefined4 local_2b0;
  int *local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  double local_288;
  undefined4 local_280;
  undefined4 uStack_27c;
  double local_278;
  float local_270;
  float local_26c;
  float fStack_268;
  float fStack_264;
  float local_260;
  float local_25c;
  float local_258;
  float fStack_254;
  float local_250;
  float local_24c;
  float local_248;
  undefined8 local_244;
  float local_23c;
  uint local_238;
  undefined8 local_234;
  uint local_22c;
  uint local_228;
  float local_224;
  float local_220;
  uint local_21c;
  uint local_218;
  uint local_214;
  uint local_210;
  float local_20c;
  float local_208;
  undefined4 local_204;
  undefined4 local_200;
  float local_1fc;
  undefined *local_1f8;
  undefined8 uStack_1f0;
  undefined *local_1e8;
  undefined8 uStack_1e0;
  undefined *local_1d8;
  undefined8 uStack_1d0;
  void *local_1c8;
  undefined8 uStack_1c0;
  undefined *local_1b8;
  undefined8 uStack_1b0;
  float local_1a4;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  double local_188;
  float fStack_180;
  undefined4 uStack_17c;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  undefined8 *local_118;
  undefined8 local_108;
  ulonglong local_f0;
  undefined1 auVar64 [16];
  undefined1 auVar67 [12];
  undefined8 extraout_XMM0_Qb_00;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_618;
  *param_2 = 0;
  lVar25 = (ulonglong)*(ushort *)(param_1 + 0x8a8) * 0x3c;
  local_4f0 = 0;
  if ((*(longlong *)(&DAT_14ca814b0 + lVar25) != DAT_14ca838f8) &&
     (*(longlong *)(&DAT_14ca814b0 + lVar25) != DAT_14ca81490)) {
    local_4f0 = (undefined4)
                CONCAT71((int7)((ulonglong)lVar25 >> 8),
                         (&DAT_14ca814b8)[(ulonglong)*(ushort *)(param_1 + 0x8a8) * 0xf] != 1);
  }
  local_4f5 = DAT_14c760e18;
  local_530 = param_3;
  local_528 = param_1;
  local_4f6 = param_4;
  local_3d8 = param_2;
  local_549 = FUN_143226589(*(undefined4 *)(param_1 + 0x8a4));
  if (DAT_14c760a84 == -1) {
    FUN_145fdab76(&local_198,L"FRDGSystemTextures",L".\\Runtime/Renderer/Private/SystemTextures.cpp"
                  ,0x66);
    DAT_14c760a84 = FUN_145d12cf0(&local_198);
    if (CONCAT44(local_198._4_4_,(float)local_198) != 0) {
      FUN_1400020a8();
    }
  }
  if ((DAT_14c760a84 < *(int *)(local_530 + 0x130)) &&
     (local_418 = *(longlong *)(*(longlong *)(local_530 + 0x128) + (longlong)DAT_14c760a84 * 8),
     local_418 != 0)) {
    local_418 = local_418 + 8;
  }
  else {
    local_418 = 0;
  }
  if (0 < *(int *)(local_528 + 0x3f0)) {
    local_4b8 = (longlong *)(local_530 + 0x70);
    local_410 = (longlong *)(local_530 + 0x98);
    local_41c = (uint)local_549;
    local_450 = local_530 + 0x198;
    local_3a0 = 0x100000000;
    if ((char)local_4f0 != '\0') {
      local_3a0 = 0x10000;
    }
    local_458 = local_528 + 0x98;
    local_3a8 = local_530 + 0x1a8;
    lVar25 = 0;
    do {
      plVar4 = local_4b8;
      lVar51 = *(longlong *)(local_528 + 1000);
      *(undefined8 *)(lVar51 + 0x13788 + lVar25 * 0x13c10) = 0;
      puVar34 = (undefined8 *)(*(longlong *)(local_530 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar92 = puVar34 + 0x58;
      local_400 = lVar25;
      if (*(undefined8 **)(local_530 + 0x78) < puVar92) {
        FUN_140023dd8(local_4b8,0x2d0);
        puVar34 = (undefined8 *)(*plVar4 + 0xfU & 0xfffffffffffffff0);
        puVar92 = puVar34 + 0x58;
      }
      lVar35 = local_530;
      *(undefined8 **)(local_530 + 0x70) = puVar92;
      *puVar34 = &PTR_FUN_14a247dd0;
      puVar34[0x38] = 0;
      puVar34[0x39] = 0x3f80000000000000;
      puVar34[0x36] = 0;
      puVar34[0x37] = 0x3f80000000000000;
      puVar34[0x3c] = 0;
      puVar34[0x3d] = 0x3f80000000000000;
      puVar34[0x3a] = 0;
      puVar34[0x3b] = 0x3f80000000000000;
      local_408 = (int *)(puVar34 + 2);
      memset(local_408,0,0x2b0);
      puVar34[0x51] = DAT_14c9c0d80;
      puVar34[0x52] = *(undefined8 *)(DAT_14ca94dc8 + 0x10);
      puVar34[0x53] = DAT_14c9c0de0;
      iVar28 = *(int *)(lVar35 + 0xa0);
      *(uint *)(lVar35 + 0xa0) = iVar28 + 1U;
      local_520 = puVar34;
      if (*(uint *)(lVar35 + 0xa4) < iVar28 + 1U) {
        FUN_1448cfae8(local_410,iVar28);
      }
      lVar51 = lVar51 + lVar25 * 0x13c10;
      *(undefined8 **)(*local_410 + (longlong)iVar28 * 8) = local_520;
      local_520[0x50] = *(undefined8 *)(local_418 + 8);
      local_520[0x52] = *(undefined8 *)(DAT_14ca94dc8 + 0x10);
      local_1b8 = (undefined *)0x0;
      uStack_1b0 = 0;
      local_1c8 = (void *)0x0;
      uStack_1c0 = 0;
      local_1d8 = (undefined *)0x0;
      uStack_1d0 = 0;
      local_1e8 = (undefined *)0x0;
      uStack_1e0 = 0;
      local_1f8 = (undefined *)0x0;
      uStack_1f0 = 0;
      if (*(longlong **)(lVar51 + 0x30d8) == (longlong *)0x0) {
        fVar61 = 0.0;
      }
      else {
        fVar61 = (float)(**(code **)(**(longlong **)(lVar51 + 0x30d8) + 0x88))();
      }
      local_500 = 0;
      iVar28 = 0;
      local_490 = 0;
      fVar22 = 1000.0;
      uVar52 = 0;
      uVar46 = 0;
      local_4b0 = lVar51;
      if (local_4f6 != '\0') {
        uVar21 = *param_5;
        local_490 = (longlong)(int)uVar21;
        local_4fc = fVar61;
        if (0 < local_490) {
          FUN_14176687a(&local_1b8,uVar21);
          if ((int)uStack_1c0._4_4_ < (int)uVar21) {
            FUN_1447a0e40(&local_1c8,uVar21);
          }
          if ((int)uStack_1d0._4_4_ < (int)uVar21) {
            FUN_1402ecfea(&local_1d8,uVar21);
          }
          if ((int)uStack_1e0._4_4_ < (int)uVar21) {
            FUN_1402ecfea(&local_1e8,uVar21);
          }
          iVar28 = uVar21 * 4;
          if (iVar28 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar28);
          }
          if ((int)uStack_1f0._4_4_ < iVar28) {
            FUN_1402ecfea(&local_1f8);
          }
          uVar40 = (ulonglong)uVar21;
          lVar25 = 0x10;
          do {
            uVar56 = (ulonglong)*(int *)(*(longlong *)(param_5 + 0x12) + lVar25);
            iVar28 = (uint)uStack_1b0;
            iVar20 = (uint)uStack_1b0 + 1;
            uStack_1b0 = CONCAT44(uStack_1b0._4_4_,iVar20);
            if (uStack_1b0._4_4_ == iVar28) {
              FUN_1401c4fbe(&local_1b8);
              iVar20 = (uint)uStack_1b0;
            }
            uVar17 = uStack_1c0;
            pfVar53 = (float *)(local_1b8 + (longlong)(iVar20 + -1) * 0xa0);
            lVar35 = (longlong)(int)uStack_1c0;
            uVar21 = (int)uStack_1c0 + 1;
            uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uVar21);
            puVar92 = local_4d8;
            if (uStack_1c0._4_4_ < uVar21) {
              FUN_144a78748(&local_1c8,uVar17 & 0xffffffff);
              puVar92 = local_4d8;
            }
            local_4d8._4_4_ = (undefined4)((ulonglong)puVar92 >> 0x20);
            *(undefined4 *)((longlong)local_1c8 + lVar35 * 4) = 0xffffffff;
            pfVar36 = (float *)(uVar56 * 0x28 + *(longlong *)(param_5 + 6));
            if (param_5[8] != param_5[0xc]) {
              iVar28 = 0;
              if (*(int *)(*(longlong *)(param_5 + 0xe) + 4 + uVar56 * 8) != 0) {
                iVar28 = (int)local_400;
              }
              uVar56 = (ulonglong)
                       (iVar28 + (*(uint *)(*(longlong *)(param_5 + 0xe) + uVar56 * 8) & 0x7fffffff)
                       );
            }
            pdVar57 = (double *)(uVar56 * 0x18 + *(longlong *)(param_5 + 10));
            dVar63 = *(double *)(lVar51 + 0x1040);
            dVar74 = pdVar57[2];
            dVar76 = *(double *)(lVar51 + 0x1030);
            dVar80 = *(double *)(lVar51 + 0x1038);
            dVar83 = *pdVar57;
            dVar75 = pdVar57[1];
            fVar61 = pfVar36[6];
            fVar22 = (float)((uint)fVar61 & DAT_1499319a0);
            if ((uint)fVar22 < 0x47800000) {
              if ((uint)fVar22 < 0x38800000) {
                fVar32 = fVar22 + 0.5;
              }
              else {
                fVar32 = (float)((int)fVar22 + 0x8000fff + (uint)(((uint)fVar22 >> 0xd & 1) != 0) >>
                                0xd);
                fVar22 = fVar32;
              }
            }
            else {
              fVar32 = (float)((0x7f800000 < (uint)fVar22 | 0x3e) << 9);
            }
            fVar71 = pfVar36[7];
            fVar85 = pfVar36[8];
            fVar72 = *pfVar36;
            fVar45 = pfVar36[2];
            local_4d8._0_4_ = pfVar36[5];
            fVar3 = pfVar36[1];
            if (*(longlong **)(lVar51 + 0x30d8) != (longlong *)0x0) {
              local_518._0_2_ = SUB42(fVar72,0);
              local_518._2_2_ = (ushort)((uint)fVar72 >> 0x10);
              local_548._0_4_ = pfVar36[1];
              fVar22 = (float)(**(code **)(**(longlong **)(lVar51 + 0x30d8) + 0x88))();
              puVar92 = (undefined8 *)CONCAT44(local_4d8._4_4_,(float)local_4d8);
              fVar72 = (float)CONCAT22(local_518._2_2_,(undefined2)local_518);
              fVar3 = (float)local_548._0_4_;
            }
            iVar28 = movmskps(fVar22,ZEXT416((uint)fVar61));
            fVar61 = fVar71 * 1023.0;
            if (1023.0 <= fVar71 * 1023.0) {
              fVar61 = 1023.0;
            }
            if (fVar61 <= 0.0) {
              fVar61 = 0.0;
            }
            fVar22 = fVar85 * 1023.0;
            if (1023.0 <= fVar85 * 1023.0) {
              fVar22 = 1023.0;
            }
            if (fVar22 <= 0.0) {
              fVar22 = 0.0;
            }
            local_4d8 = puVar92;
            local_198._0_4_ = (float)FUN_1404d3c6e();
            uStack_190._0_4_ = fVar45 * (float)local_198;
            local_198._4_4_ = fVar3 * (float)local_198;
            local_198._0_4_ = fVar72 * (float)local_198;
            FUN_142cf4791(&local_288,&local_198);
            uVar56 = uStack_1d0;
            fVar71 = pfVar36[3];
            if (fVar71 <= 0.0001) {
              fVar71 = 0.0001;
            }
            *pfVar53 = (float)(dVar76 + dVar83);
            pfVar53[1] = (float)(dVar80 + dVar75);
            pfVar53[2] = (float)(dVar63 + dVar74);
            pfVar53[3] = 1.0 / fVar71;
            fVar71 = pfVar36[4];
            *(double *)(pfVar53 + 4) = local_288;
            pfVar53[6] = -1.0;
            pfVar53[7] = fVar71;
            pfVar53[8] = 1.0;
            pfVar53[9] = 0.0;
            pfVar53[10] = 0.0;
            pfVar53[0xb] = 2.51113e-42;
            pfVar53[0xc] = -2.0;
            pfVar53[0xd] = 1.0;
            pfVar53[0xe] = 0.0;
            pfVar53[0xf] = (float)((int)fVar32 << 0x10 | iVar28 << 0x1f);
            pfVar53[0x10] = 1.0;
            pfVar53[0x11] = 0.0;
            pfVar53[0x12] = 0.0;
            pfVar53[0x13] = (float)((int)(longlong)fVar22 << 10 | (uint)(longlong)fVar61);
            pfVar53[0x14] = 0.0;
            pfVar53[0x15] = 0.0;
            pfVar53[0x16] = 6.88766e-41;
            pfVar53[0x17] = 0.0;
            pfVar53[0x18] = 0.0;
            pfVar53[0x19] = 0.0;
            pfVar53[0x1a] = 0.0;
            pfVar53[0x1b] = 0.0;
            pfVar53[0x1c] = 0.0;
            pfVar53[0x1d] = 0.0;
            pfVar53[0x1e] = 0.0;
            pfVar53[0x1f] = 0.0;
            pfVar53[0x20] = 0.0;
            pfVar53[0x21] = 0.0;
            pfVar53[0x22] = 0.0;
            pfVar53[0x23] = 0.0;
            pfVar53[0x24] = 0.0;
            pfVar53[0x25] = 0.0;
            pfVar53[0x26] = 0.0;
            pfVar53[0x27] = 0.0;
            fVar61 = pfVar36[3];
            dVar63 = pdVar57[2];
            dVar74 = *pdVar57;
            dVar76 = pdVar57[1];
            dVar81 = *(double *)(lVar51 + 0x9b0);
            dVar84 = *(double *)(lVar51 + 0x9b8);
            dVar89 = *(double *)(lVar51 + 0x9d0);
            dVar73 = *(double *)(lVar51 + 0x9d8);
            auVar78 = *(undefined1 (*) [16])(lVar51 + 0x9f0);
            dVar87 = *(double *)(lVar51 + 0xa10);
            dVar93 = *(double *)(lVar51 + 0xa18);
            dVar80 = *(double *)(lVar51 + 0x9c0);
            dVar83 = *(double *)(lVar51 + 0x9e0);
            dVar75 = *(double *)(lVar51 + 0xa00);
            dVar77 = *(double *)(lVar51 + 0xa20);
            lVar35 = (longlong)(int)uStack_1d0;
            uVar21 = (int)uStack_1d0 + 1;
            uStack_1d0 = CONCAT44(uStack_1d0._4_4_,uVar21);
            if (uStack_1d0._4_4_ < uVar21) {
              FUN_1447e493a(&local_1d8,uVar56 & 0xffffffff);
            }
            uVar56 = uStack_1e0;
            lVar35 = lVar35 * 0x10;
            *(float *)(local_1d8 + lVar35) =
                 (float)(dVar87 + dVar63 * auVar78._0_8_ + dVar76 * dVar89 + dVar81 * dVar74);
            *(float *)(local_1d8 + lVar35 + 4) =
                 (float)(dVar93 + dVar63 * auVar78._8_8_ + dVar76 * dVar73 + dVar84 * dVar74);
            *(float *)(local_1d8 + lVar35 + 8) =
                 (float)(dVar75 * dVar63 + dVar83 * dVar76 + dVar80 * dVar74 + dVar77);
            *(float *)(local_1d8 + lVar35 + 0xc) = fVar61;
            lVar35 = (longlong)(int)uStack_1e0;
            uVar21 = (int)uStack_1e0 + 1;
            uStack_1e0 = CONCAT44(uStack_1e0._4_4_,uVar21);
            if (uStack_1e0._4_4_ < uVar21) {
              FUN_1447e493a(&local_1e8,uVar56 & 0xffffffff);
            }
            uVar56 = uStack_1f0;
            fVar61 = local_4fc;
            *(undefined8 *)(local_1e8 + lVar35 * 0x10) = 0;
            *(undefined8 *)((longlong)(local_1e8 + lVar35 * 0x10) + 8) = 0;
            iVar28 = (int)uStack_1f0;
            lVar35 = (longlong)(int)uStack_1f0;
            uStack_1f0 = CONCAT44(uStack_1f0._4_4_,(int)uStack_1f0 + 4);
            if (uStack_1f0._4_4_ - iVar28 < 4) {
              FUN_1447e493a(&local_1f8,uVar56 & 0xffffffff);
            }
            lVar35 = lVar35 * 0x10;
            *(undefined8 *)(local_1f8 + lVar35 + 0x30) = 0;
            *(undefined8 *)((longlong)(local_1f8 + lVar35 + 0x30) + 8) = 0;
            *(undefined8 *)(local_1f8 + lVar35 + 0x20) = 0;
            *(undefined8 *)((longlong)(local_1f8 + lVar35 + 0x20) + 8) = 0;
            *(undefined8 *)(local_1f8 + lVar35 + 0x10) = 0;
            *(undefined8 *)((longlong)(local_1f8 + lVar35 + 0x10) + 8) = 0;
            *(undefined8 *)(local_1f8 + lVar35) = 0;
            *(undefined8 *)((longlong)(local_1f8 + lVar35) + 8) = 0;
            lVar25 = lVar25 + 0x18;
            uVar40 = uVar40 - 1;
          } while (uVar40 != 0);
        }
        uVar21 = param_5[0x14];
        iVar28 = (int)local_490;
        if (iVar28 < (int)uVar21) {
          local_3c8 = local_520 + 0x36;
          local_3b0 = local_520 + 10;
          local_3d0 = local_520 + 0x16;
          local_3b8 = local_520 + 0x44;
          local_3c0 = local_520 + 0x46;
          local_47c = -1;
          local_480 = 0.0;
          local_548._0_4_ = 0x7fffffff;
          local_500 = 0;
          fVar22 = 1000.0;
          local_518._0_2_ = (undefined2)local_490;
          local_518._2_2_ = (ushort)((ulonglong)local_490 >> 0x10);
          local_4ec = 0;
          lVar25 = local_490;
          do {
            lVar35 = *(longlong *)(param_5 + 0x12);
            lVar37 = *(longlong *)(lVar35 + 8 + lVar25 * 0x18);
            plVar4 = *(longlong **)(lVar37 + 0x28);
            cVar18 = FUN_1400bd22a(lVar37,lVar51,0);
            if (cVar18 != '\0') {
              (**(code **)(*plVar4 + 0x78))(plVar4,&local_288,local_41c);
              cVar18 = (**(code **)(*plVar4 + 0x30))(plVar4);
              if (cVar18 != '\0') {
                local_25c = 0.0;
              }
              if (*(char *)(lVar51 + 0x23eb) == '\x01') {
                fVar32 = *(float *)(plVar4 + 0x2a);
                local_26c = local_26c * fVar32;
                fStack_268 = fStack_268 * fVar32;
                fStack_264 = fStack_264 * fVar32;
                local_260 = fVar32 * local_260;
              }
              local_4a8 = (uint *)(lVar35 + lVar25 * 0x18);
              lVar35 = *(longlong *)(lVar37 + 0x28);
              local_4d8._0_4_ = (float)lVar37;
              uVar52 = (float)local_4d8;
              local_4d8._4_4_ = (undefined4)((ulonglong)lVar37 >> 0x20);
              piVar38 = (int *)(lVar35 + 400);
              if ((*(byte *)(lVar35 + 0x1d0) & 8) == 0) {
                piVar38 = (int *)(lVar37 + 0xe0);
              }
              iVar28 = *piVar38;
              local_4e8._0_4_ = 0xffffffff;
              iVar20 = -1;
              if (local_4f5 != '\0') {
                iVar20 = *(int *)(lVar35 + 0x18c);
              }
              lVar48 = (ulonglong)(iVar28 == 0) << 4;
              local_4c8._0_4_ =
                   (float)((uint)(iVar28 == 2) << 6 | (uint)(iVar28 == 1) << 5 |
                           ((*local_4a8 & 4) << 0x11 | (uint)(iVar20 == 0)) +
                           (uint)(iVar20 == 1) * 2 + (uint)(iVar20 == 2) * 4 +
                           (uint)(iVar20 == 3) * 8 | (uint)(iVar28 == 0) << 4 |
                           (*(byte *)(lVar35 + 0x1d0) & 0x10) << 0xe | (uint)(iVar28 == 3) << 7 |
                           (uint)*(byte *)(lVar35 + 0x1e9) << 8 |
                          (*(byte *)(lVar35 + 0x1d3) & 4) << 0x1a |
                          (uint)*(byte *)(lVar35 + 0x1d6) << 0x14 |
                          (uint)*(byte *)(lVar35 + 0x1e8) << 0x10);
              local_488 = lVar25;
              if ((*(byte *)(local_528 + 0xeb) & 4) == 0) {
                bVar60 = false;
LAB_142ce1ab2:
                switch(*local_4a8 & 3) {
                case 0:
                  goto switchD_142ce1ac3_caseD_0;
                case 1:
switchD_142ce1ac3_caseD_1:
                  bVar19 = *(byte *)(local_528 + 0xe4) & 0x40;
                  break;
                case 2:
switchD_142ce1ac3_caseD_2:
                  bVar19 = *(byte *)(local_528 + 0xe4) & 0x80;
                  break;
                case 3:
switchD_142ce1ac3_caseD_3:
                  bVar19 = *(byte *)(local_528 + 0xe5) & 1;
                }
                if (bVar19 == 0) goto LAB_142ce2645;
                uVar46 = (undefined4)lVar48;
                lVar25 = *(longlong *)(lVar51 + 0x3108);
                if (lVar25 == 0) {
                  iVar28 = -1;
                }
                else {
                  plVar2 = (longlong *)(lVar25 + 0x1cb8);
                  uVar40 = (ulonglong)local_1a0 >> 0x20;
                  local_1a0 = (longlong *)CONCAT44((int)uVar40,0xffffffff);
                  uVar21 = *(uint *)(lVar37 + 0x34);
                  iVar20 = *(int *)(lVar25 + 0x1cc0);
                  iVar55 = *(int *)(lVar25 + 0x1cec);
                  if (iVar20 != iVar55) {
                    lVar35 = lVar25 + 0x1cf0;
                    if (*(longlong *)(lVar25 + 0x1cf8) != 0) {
                      lVar35 = *(longlong *)(lVar25 + 0x1cf8);
                    }
                    iVar28 = *(int *)(lVar35 + (ulonglong)(*(int *)(lVar25 + 0x1d00) - 1U & uVar21)
                                               * 4);
                    if (iVar28 != -1) {
                      do {
                        lVar48 = (longlong)iVar28 * 0x10;
                        lVar35 = *plVar2 + lVar48;
                        if (*(uint *)(*plVar2 + lVar48) == uVar21) {
                          if (lVar35 != 0) goto LAB_142ce2759;
                          break;
                        }
                        iVar28 = *(int *)(lVar35 + 8);
                      } while (iVar28 != -1);
                    }
                  }
                  uStack_190 = &local_1a0;
                  local_5f8 = (undefined8 *)0x0;
                  local_198 = (uint *)(lVar37 + 0x34);
                  FUN_140bb6ae0(plVar2,&local_2a8,uVar21,&local_198);
                  lVar35 = *plVar2 + (longlong)(int)local_2a8 * 0x10;
                  lVar25 = *(longlong *)(lVar51 + 0x3108);
                  uVar21 = *(uint *)(lVar37 + 0x34);
                  iVar20 = *(int *)(lVar25 + 0x1cc0);
                  iVar55 = *(int *)(lVar25 + 0x1cec);
LAB_142ce2759:
                  uVar46 = (undefined4)lVar48;
                  iVar28 = *(int *)(lVar35 + 4);
                  if (iVar20 != iVar55) {
                    lVar35 = lVar25 + 0x1cf0;
                    if (*(longlong *)(lVar25 + 0x1cf8) != 0) {
                      lVar35 = *(longlong *)(lVar25 + 0x1cf8);
                    }
                    iVar20 = *(int *)(lVar35 + (ulonglong)(*(int *)(lVar25 + 0x1d00) - 1U & uVar21)
                                               * 4);
                    if (iVar20 != -1) {
                      do {
                        lVar35 = *(longlong *)(lVar25 + 0x1cb8) + (longlong)iVar20 * 0x10;
                        if (*(uint *)(*(longlong *)(lVar25 + 0x1cb8) + (longlong)iVar20 * 0x10) ==
                            uVar21) goto LAB_142ce27b2;
                        iVar20 = *(int *)(lVar35 + 8);
                      } while (iVar20 != -1);
                    }
                  }
                  lVar35 = 0;
LAB_142ce27b2:
                  *(uint *)(lVar35 + 4) = (uint)uStack_1b0;
                }
                iVar20 = (uint)uStack_1b0;
                uVar21 = (uint)uStack_1b0 + 1;
                uStack_1b0 = CONCAT44(uStack_1b0._4_4_,uVar21);
                if (uStack_1b0._4_4_ == iVar20) {
                  FUN_1401c4fbe(&local_1b8);
                  uVar21 = (uint)uStack_1b0;
                }
                uVar40 = uStack_1c0;
                pfVar53 = (float *)(local_1b8 + (longlong)(int)(uVar21 - 1) * 0xa0);
                iVar20 = (int)uStack_1c0;
                lVar25 = (longlong)(int)uStack_1c0;
                uVar23 = (int)uStack_1c0 + 1;
                uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uVar23);
                local_4f4 = fVar22;
                if (uStack_1c0._4_4_ < uVar23) {
                  FUN_144a78748(&local_1c8,uVar40 & 0xffffffff);
                }
                *(undefined4 *)((longlong)local_1c8 + lVar25 * 4) = *(undefined4 *)(lVar37 + 0x34);
                uVar29 = CONCAT22(local_518._2_2_,(undefined2)local_518);
                uVar23 = uVar21;
                if ((int)uVar21 <= (int)uVar29) {
                  uVar23 = uVar29;
                }
                if ((*local_4a8 & 0x40) != 0) {
                  uVar23 = uVar29;
                }
                local_420 = uVar21 - 1;
                if (local_548._0_4_ != 0x7fffffff) {
                  local_420 = local_548._0_4_;
                }
                if (-1 < (char)*local_4a8) {
                  local_420 = local_548._0_4_;
                }
                (**(code **)(*plVar4 + 0x10))(plVar4,&local_198);
                dVar76 = local_188 - *(double *)(lVar51 + 0x1058);
                dVar83 = (double)uStack_190 - *(double *)(lVar51 + 0x1050);
                dVar80 = (double)local_198 - *(double *)(lVar51 + 0x1048);
                dVar74 = (double)DAT_14c760a04 / (double)CONCAT44(uStack_17c,fStack_180);
                dVar63 = 0.00019999999494757503;
                if (dVar74 <= 0.00019999999494757503) {
                  dVar63 = dVar74;
                }
                dVar63 = (double)*(float *)(lVar51 + 0x23c8) * dVar63;
                fVar22 = (float)(**(code **)(*plVar4 + 0x100))(plVar4);
                fVar85 = DAT_14c760a08 * fVar22;
                fVar32 = (float)(**(code **)(*plVar4 + 0x108))(plVar4);
                fVar71 = (float)(dVar76 * dVar76 + dVar80 * dVar80 + dVar83 * dVar83);
                fVar22 = (float)(~-(uint)(0.0 < fVar22) & 0x3f800000 |
                                (uint)((fVar85 - SQRT(fVar71)) / fVar32) & -(uint)(0.0 < fVar22));
                auVar70 = ZEXT416((uint)fVar22);
                dVar63 = (double)fVar71 * dVar63 * dVar63;
                uVar40 = (ulonglong)dVar63 >> 0x20;
                auVar78._0_4_ = (float)dVar63 * -6.0 + 6.0;
                auVar78._4_8_ = uVar40;
                auVar78._12_4_ = 0;
                if (1.0 <= auVar78._0_4_) {
                  auVar78._12_4_ = 0;
                  auVar78._0_4_ = 1.0;
                }
                if (auVar78._0_4_ <= 0.0) {
                  auVar6._12_4_ = 0;
                  auVar6._0_12_ = auVar78._4_12_;
                  auVar78 = auVar6 << 0x20;
                }
                if (1.0 <= fVar22) {
                  auVar70 = ZEXT416(0x3f800000);
                }
                if (auVar70._0_4_ <= 0.0) {
                  auVar7._12_4_ = 0;
                  auVar7._0_12_ = auVar70._4_12_;
                  auVar70 = auVar7 << 0x20;
                }
                fVar22 = auVar70._0_4_ * auVar78._0_4_;
                local_26c = local_26c * fVar22;
                fStack_268 = fStack_268 * fVar22;
                fStack_264 = fStack_264 * fVar22;
                local_260 = fVar22 * local_260;
                fVar22 = 1.0;
                if (0.0 < fVar61) {
                  fVar22 = -local_1fc;
                  fVar61 = logf(fVar61);
                  fVar22 = expf(fVar61 * fVar22);
                }
                local_26c = local_26c * fVar22;
                fStack_268 = fStack_268 * fVar22;
                fStack_264 = fStack_264 * fVar22;
                local_260 = local_260 * fVar22;
                if ((*(byte *)((longlong)plVar4 + 0x22c) & 2) == 0) {
                  pfVar53[0x23] = 0.0;
                  pfVar53[0x24] = 0.0;
                  pfVar53[0x25] = 0.0;
                  pfVar53[0x26] = 0.0;
                  pfVar53[0x20] = 0.0;
                  pfVar53[0x21] = 0.0;
                  pfVar53[0x22] = 0.0;
                  pfVar53[0x23] = 0.0;
                  pfVar53[0x1c] = 0.0;
                  pfVar53[0x1d] = 0.0;
                  pfVar53[0x1e] = 0.0;
                  pfVar53[0x1f] = 0.0;
                  pfVar53[0x18] = 0.0;
                  pfVar53[0x19] = 0.0;
                  pfVar53[0x1a] = 0.0;
                  pfVar53[0x1b] = 0.0;
                  fVar61 = 0.0;
                }
                else {
                  dVar63 = (double)plVar4[0x46];
                  dVar74 = (double)plVar4[0x47];
                  dVar76 = (double)plVar4[0x48];
                  dVar80 = (double)plVar4[0x49];
                  dVar83 = *(double *)(lVar51 + 0x1040);
                  dVar75 = (double)plVar4[0x4c];
                  dVar77 = *(double *)(lVar51 + 0x1038);
                  dVar81 = (double)plVar4[0x4b];
                  local_438 = (double)plVar4[0x50];
                  local_478 = (double)plVar4[0x51];
                  dVar84 = (double)plVar4[0x52];
                  local_518._0_2_ = SUB82(dVar84,0);
                  local_518._2_2_ = (ushort)((ulonglong)dVar84 >> 0x10);
                  uStack_514 = (undefined4)((ulonglong)dVar84 >> 0x20);
                  dVar89 = -1.0 / (1.0 - (double)plVar4[0x4f] / dVar84);
                  local_548 = (undefined1  [8])dVar89;
                  dVar73 = -1.0 / (1.0 - (double)plVar4[0x4e] / local_478);
                  local_468._0_8_ = dVar73;
                  local_448 = -1.0 / (1.0 - (double)plVar4[0x4d] / local_438);
                  pfVar53[0x18] = (float)(*(double *)(lVar51 + 0x1030) + (double)plVar4[0x4a]);
                  pfVar53[0x19] = (float)(dVar77 + dVar81);
                  pfVar53[0x1a] = (float)(dVar83 + dVar75);
                  dVar93 = dVar63 * -0.0 + dVar76;
                  dVar77 = dVar74 * 0.0 + dVar76 * -0.0;
                  dVar93 = dVar93 + dVar93;
                  dVar77 = dVar77 + dVar77;
                  dVar81 = dVar63 + dVar74 * -0.0;
                  dVar87 = dVar74 * -0.0 + dVar63 * 0.0;
                  dVar83 = dVar63 * 0.0 - dVar74;
                  dVar83 = dVar83 + dVar83;
                  dVar75 = 1.0 / local_438;
                  pfVar53[0x1b] = -1.0;
                  pfVar53[0x1c] =
                       (float)(dVar75 * ((dVar74 * dVar83 - dVar93 * dVar76) + dVar80 * dVar77 + 1.0
                                        ));
                  pfVar53[0x1d] =
                       (float)(((dVar76 * dVar77 - dVar83 * dVar63) + dVar80 * dVar93 + 0.0) *
                              dVar75);
                  pfVar53[0x1e] =
                       (float)(((dVar63 * dVar93 - dVar77 * dVar74) + dVar83 * dVar80 + 0.0) *
                              dVar75);
                  pfVar53[0x1f] = (float)local_448;
                  dVar75 = dVar63 * -0.0 + dVar76 * 0.0;
                  dVar77 = dVar74 * 0.0 - dVar76;
                  dVar75 = dVar75 + dVar75;
                  dVar77 = dVar77 + dVar77;
                  dVar81 = dVar81 + dVar81;
                  dVar83 = 1.0 / local_478;
                  pfVar53[0x20] =
                       (float)(dVar83 * ((dVar74 * dVar81 - dVar75 * dVar76) + dVar80 * dVar77 + 0.0
                                        ));
                  pfVar53[0x21] =
                       (float)(((dVar76 * dVar77 - dVar81 * dVar63) + dVar80 * dVar75 + 1.0) *
                              dVar83);
                  pfVar53[0x22] =
                       (float)(((dVar63 * dVar75 - dVar77 * dVar74) + dVar80 * dVar81 + 0.0) *
                              dVar83);
                  pfVar53[0x23] = (float)dVar73;
                  dVar83 = dVar76 * 0.0 - dVar63;
                  dVar75 = dVar76 * -0.0 + dVar74;
                  dVar87 = dVar87 + dVar87;
                  dVar83 = dVar83 + dVar83;
                  dVar75 = dVar75 + dVar75;
                  dVar84 = 1.0 / dVar84;
                  pfVar53[0x24] =
                       (float)(dVar84 * ((dVar74 * dVar87 - dVar83 * dVar76) + dVar80 * dVar75 + 0.0
                                        ));
                  pfVar53[0x25] =
                       (float)(((dVar76 * dVar75 - dVar87 * dVar63) + dVar80 * dVar83 + 0.0) *
                              dVar84);
                  pfVar53[0x26] =
                       (float)(((dVar63 * dVar83 - dVar75 * dVar74) + dVar80 * dVar87 + 1.0) *
                              dVar84);
                  fVar61 = (float)dVar89;
                }
                pfVar53[0x27] = fVar61;
                fVar61 = *(float *)((longlong)plVar4 + 0x154);
                iVar55 = (int)*(undefined8 *)(local_528 + 8);
                cVar18 = FUN_144abb888(lVar51,lVar37,
                                       (longlong)*(int *)(lVar37 + 0x34) * 0x68 +
                                       *(longlong *)(local_528 + 0x4d8));
                local_478._0_4_ = *(float *)(lVar37 + 0x34);
                dVar63 = *(double *)(lVar51 + 0x1038);
                dVar74 = (double)CONCAT44(uStack_27c,local_280);
                uVar21 = DAT_1499319a0;
                fVar22 = (float)(local_228 & uVar21);
                if ((uint)fVar22 < 0x47800000) {
                  if ((uint)fVar22 < 0x38800000) {
                    local_548._0_4_ = fVar22 + 0.5;
                  }
                  else {
                    local_548._0_4_ =
                         (int)fVar22 + 0x8000fff + (uint)(((uint)fVar22 >> 0xd & 1) != 0) >> 0xd;
                  }
                }
                else {
                  iVar55 = (0x7f800000 < (uint)fVar22 | 0x3e) << 9;
                  local_548._0_4_ = iVar55;
                }
                fVar22 = 0.0;
                if (cVar18 == '\0') {
                  fVar22 = ABS(fVar61);
                }
                if ((uint)fVar22 < 0x47800000) {
                  if ((uint)fVar22 < 0x38800000) {
                    fVar32 = fVar22 + 0.5;
                  }
                  else {
                    fVar22 = (float)((int)fVar22 + 0x8000fff +
                                     (uint)(((uint)fVar22 >> 0xd & 1) != 0) >> 0xd);
                    fVar32 = fVar22;
                  }
                }
                else {
                  fVar32 = (float)((0x7f800000 < (uint)fVar22 | 0x3e) << 9);
                }
                uVar29 = (uint)fVar61 & 0x80000000;
                if (cVar18 != '\0') {
                  uVar29 = 0;
                }
                fVar61 = (float)(local_238 & uVar21);
                if ((uint)fVar61 < 0x47800000) {
                  if ((uint)fVar61 < 0x38800000) {
                    fVar61 = fVar61 + 0.5;
                  }
                  else {
                    fVar61 = (float)((int)fVar61 + 0x8000fff +
                                     (uint)(((uint)fVar61 >> 0xd & 1) != 0) >> 0xd);
                  }
                }
                else {
                  fVar61 = (float)((0x7f800000 < (uint)fVar61 | 0x3e) << 9);
                }
                fVar71 = (float)(local_22c & uVar21);
                if ((uint)fVar71 < 0x47800000) {
                  if ((uint)fVar71 < 0x38800000) {
                    local_468._0_4_ = fVar71 + 0.5;
                  }
                  else {
                    local_468._0_4_ =
                         (int)fVar71 + 0x8000fff + (uint)(((uint)fVar71 >> 0xd & 1) != 0) >> 0xd;
                  }
                }
                else {
                  fVar22 = (float)((0x7f800000 < (uint)fVar71 | 0x3e) << 9);
                  local_468._0_4_ = fVar22;
                }
                fVar71 = (float)(local_21c & uVar21);
                if ((uint)fVar71 < 0x47800000) {
                  if ((uint)fVar71 < 0x38800000) {
                    local_518 = fVar71 + 0.5;
                  }
                  else {
                    uVar24 = (int)fVar71 + 0x8000fff + (uint)(((uint)fVar71 >> 0xd & 1) != 0);
                    local_518._0_2_ = (undefined2)(uVar24 >> 0xd);
                    local_518._2_2_ = (ushort)(uVar24 >> 0x1d);
                    local_518 = (float)CONCAT22(local_518._2_2_,(undefined2)local_518);
                  }
                }
                else {
                  fVar22 = (float)((0x7f800000 < (uint)fVar71 | 0x3e) << 9);
                  local_518 = fVar22;
                }
                fVar71 = (float)(local_218 & uVar21);
                if ((uint)fVar71 < 0x47800000) {
                  if ((uint)fVar71 < 0x38800000) {
                    local_438 = (double)CONCAT44(local_438._4_4_,fVar71 + 0.5);
                  }
                  else {
                    local_438 = (double)CONCAT44(local_438._4_4_,
                                                 (int)fVar71 + 0x8000fff +
                                                 (uint)(((uint)fVar71 >> 0xd & 1) != 0) >> 0xd);
                  }
                }
                else {
                  fVar22 = (float)((0x7f800000 < (uint)fVar71 | 0x3e) << 9);
                  local_438 = (double)CONCAT44(local_438._4_4_,fVar22);
                }
                fVar71 = (float)(local_214 & uVar21);
                if ((uint)fVar71 < 0x47800000) {
                  if ((uint)fVar71 < 0x38800000) {
                    fVar71 = fVar71 + 0.5;
                  }
                  else {
                    fVar71 = (float)((int)fVar71 + 0x8000fff +
                                     (uint)(((uint)fVar71 >> 0xd & 1) != 0) >> 0xd);
                  }
                }
                else {
                  fVar71 = (float)((0x7f800000 < (uint)fVar71 | 0x3e) << 9);
                }
                fVar85 = (float)(local_210 & uVar21);
                if ((uint)fVar85 < 0x47800000) {
                  if ((uint)fVar85 < 0x38800000) {
                    local_448 = (double)CONCAT44(local_448._4_4_,fVar85 + 0.5);
                  }
                  else {
                    local_448 = (double)CONCAT44(local_448._4_4_,
                                                 (int)fVar85 + 0x8000fff +
                                                 (uint)(((uint)fVar85 >> 0xd & 1) != 0) >> 0xd);
                  }
                }
                else {
                  fVar22 = (float)((0x7f800000 < (uint)fVar85 | 0x3e) << 9);
                  local_448 = (double)CONCAT44(local_448._4_4_,fVar22);
                }
                fVar85 = (float)((uint)local_220 & uVar21);
                local_4d8._4_4_ = 0;
                if ((uint)fVar85 < 0x47800000) {
                  if ((uint)fVar85 < 0x38800000) {
                    fVar45 = fVar85 + 0.5;
                  }
                  else {
                    fVar85 = (float)((int)fVar85 + 0x8000fff +
                                     (uint)(((uint)fVar85 >> 0xd & 1) != 0) >> 0xd);
                    fVar45 = fVar85;
                  }
                }
                else {
                  fVar45 = (float)((0x7f800000 < (uint)fVar85 | 0x3e) << 9);
                }
                uVar54 = movmskps(iVar20,ZEXT416(local_228));
                uVar24 = movmskps(uVar52,ZEXT416(local_238));
                iVar55 = movmskps(iVar55,ZEXT416(local_22c));
                uVar42 = movmskps(iVar28,ZEXT416(local_21c));
                iVar20 = movmskps(fVar85,ZEXT416(local_218));
                uVar21 = movmskps(fVar22,ZEXT416(local_214));
                iVar47 = movmskps(uVar46,ZEXT416(local_210));
                dVar76 = *(double *)(lVar51 + 0x1030) + local_288;
                fVar22 = local_224;
                if (1.0 <= local_224) {
                  fVar22 = 1.0;
                }
                if (fVar22 <= 0.0) {
                  fVar22 = 0.0;
                }
                dVar80 = *(double *)(lVar51 + 0x1040) + local_278;
                uVar33 = (uint)(ushort)local_548._0_2_;
                local_548._0_4_ = (int)fVar32 << 0x10 | (uVar54 & 1) << 0xf | uVar29 | uVar33;
                uVar29 = movmskps(uVar33,ZEXT416((uint)local_220));
                fVar32 = local_20c;
                if (63.0 <= local_20c) {
                  fVar32 = 63.0;
                }
                if (fVar32 <= 0.0) {
                  fVar32 = 0.0;
                }
                fVar85 = local_24c * 1023.0;
                if (1023.0 <= fVar85) {
                  fVar85 = 1023.0;
                }
                if (fVar85 <= 0.0) {
                  fVar85 = 0.0;
                }
                local_3f8 = (double)(longlong)fVar85;
                fVar85 = local_248 * 1023.0;
                if (1023.0 <= fVar85) {
                  fVar85 = 1023.0;
                }
                if (fVar85 <= 0.0) {
                  fVar85 = 0.0;
                }
                fVar72 = (local_208 + 1.0) * 0.0009775171 * 1023.0;
                if (1023.0 <= fVar72) {
                  fVar72 = 1023.0;
                }
                if (fVar72 <= 0.0) {
                  fVar72 = 0.0;
                }
                local_198._0_4_ = local_26c;
                uVar49 = local_468._0_4_ << 0x10;
                uVar43 = (uint)local_518 & 0xffff;
                uVar39 = local_438._0_4_ << 0x10;
                uVar50 = local_448._0_4_ << 0x10;
                uVar33 = (int)(longlong)fVar85 << 10 | local_3f8._0_4_;
                local_198._4_4_ = fStack_268;
                uStack_190._0_4_ = fStack_264;
                local_4d8._0_4_ = (float)iVar28;
                local_3e8 = pfVar53;
                local_390 = (ulonglong)uVar23;
                FUN_142cf4791(&local_2a8,&local_198);
                uVar54 = local_4e8._0_4_ * 0x10000 + 0x10000;
                uVar23 = (int)(float)local_4d8 + 1U & 0xffff;
                if ((int)local_4e8._0_4_ < 0) {
                  uVar54 = 0;
                }
                if ((int)(float)local_4d8 < 0) {
                  uVar23 = 0;
                }
                *local_3e8 = (float)dVar76;
                local_3e8[1] = (float)(dVar63 + dVar74);
                local_3e8[2] = (float)dVar80;
                local_3e8[3] = local_270;
                *(int **)(local_3e8 + 4) = local_2a8;
                local_3e8[6] = (float)(int)(float)local_478;
                local_3e8[7] = local_25c;
                *(ulonglong *)(local_3e8 + 8) = CONCAT44(fStack_254,local_258);
                local_3e8[10] = local_250;
                local_3e8[0xb] = (float)local_4c8;
                *(undefined8 *)(local_3e8 + 0xc) = local_234;
                local_3e8[0xe] =
                     (float)(uVar49 | iVar55 << 0x1f | (uVar24 & 1) << 0xf | (uint)fVar61 & 0xffff);
                local_3e8[0xf] = (float)local_548._0_4_;
                *(undefined8 *)(local_3e8 + 0x10) = local_244;
                local_3e8[0x12] = local_23c;
                local_3e8[0x13] = (float)((int)(longlong)fVar72 << 0x14 | uVar33);
                local_3e8[0x14] = (float)(uVar39 | iVar20 << 0x1f | (uVar42 & 1) << 0xf | uVar43);
                local_3e8[0x15] =
                     (float)(uVar50 | iVar47 << 0x1f | (uVar21 & 1) << 0xf | (uint)fVar71 & 0xffff);
                local_3e8[0x16] =
                     (float)((int)(longlong)fVar32 << 0x1a |
                            (int)(longlong)(fVar22 * 1023.0) << 0x10 |
                            (uint)fVar45 & 0xffff | (uVar29 & 1) << 0xf);
                local_3e8[0x17] = (float)(uVar23 | uVar54);
                auVar78 = ZEXT416(0);
                *(undefined1 (*) [16])(local_3e8 + 0x18) = auVar78;
                *(undefined1 (*) [16])(local_3e8 + 0x1c) = auVar78;
                *(undefined1 (*) [16])(local_3e8 + 0x20) = auVar78;
                *(undefined1 (*) [16])(local_3e8 + 0x24) = auVar78;
                (**(code **)(*plVar4 + 0x10))(plVar4,&local_2a8);
                uVar40 = uStack_1d0;
                dVar87 = local_278;
                dVar73 = local_288;
                lVar51 = local_4b0;
                _local_548 = *(undefined1 (*) [16])(local_4b0 + 0x9b0);
                dVar83 = *(double *)(local_4b0 + 0x9d0);
                dVar75 = *(double *)(local_4b0 + 0x9d8);
                dVar77 = *(double *)(local_4b0 + 0x9f0);
                dVar81 = *(double *)(local_4b0 + 0x9f8);
                dVar84 = *(double *)(local_4b0 + 0xa10);
                dVar89 = *(double *)(local_4b0 + 0xa18);
                dVar63 = *(double *)(local_4b0 + 0xa20);
                dVar74 = *(double *)(local_4b0 + 0x9c0);
                dVar76 = *(double *)(local_4b0 + 0x9e0);
                dVar80 = *(double *)(local_4b0 + 0xa00);
                local_518._0_2_ = SUB82(dVar63,0);
                local_518._2_2_ = (ushort)((ulonglong)dVar63 >> 0x10);
                uStack_514 = (undefined4)((ulonglong)dVar63 >> 0x20);
                local_398 = local_298 * dVar80 + local_2a0 * dVar76 + (double)local_2a8 * dVar74 +
                            dVar63 + local_290;
                dVar63 = (double)CONCAT44(uStack_27c,local_280);
                local_4d8 = (undefined8 *)(double)local_250;
                puStack_4d0 = (undefined8 *)0x0;
                local_4e8._8_8_ = 0;
                local_4e8._0_8_ = (double)fStack_254;
                local_4c8 = (double)local_258;
                dStack_4c0 = 0.0;
                fVar61 = 1.0 / local_270;
                lVar25 = (longlong)(int)uStack_1d0;
                uVar21 = (int)uStack_1d0 + 1;
                uStack_1d0 = CONCAT44(uStack_1d0._4_4_,uVar21);
                if (uStack_1d0._4_4_ < uVar21) {
                  FUN_1447e493a(&local_1d8,uVar40 & 0xffffffff);
                }
                dVar93 = (double)CONCAT44(uStack_514,CONCAT22(local_518._2_2_,(undefined2)local_518)
                                         );
                lVar25 = lVar25 * 0x10;
                *(float *)(local_1d8 + lVar25) =
                     (float)(dVar87 * dVar77 + dVar63 * dVar83 + dVar73 * (double)local_548 + dVar84
                            );
                *(float *)(local_1d8 + lVar25 + 4) =
                     (float)(dVar87 * dVar81 + dVar63 * dVar75 + dVar73 * dStack_540 + dVar89);
                *(float *)(local_1d8 + lVar25 + 8) =
                     (float)(dVar87 * dVar80 + dVar63 * dVar76 + dVar73 * dVar74 + dVar93);
                *(float *)(local_1d8 + lVar25 + 0xc) = fVar61;
                uVar52 = (undefined4)local_390;
                if (local_549 == 0) {
                  bVar19 = (**(code **)(*plVar4 + 0x38))(plVar4);
                  bVar60 = false;
                  if ((bVar19 != 0) && (0.5 < local_220)) {
                    bVar60 = 0.034899496 < local_224;
                    bVar19 = 1;
                  }
                }
                else {
                  bVar19 = 0;
                  bVar60 = false;
                }
                fVar61 = 0.0;
                if ((*local_4a8 & 3) == 2) {
                  fVar22 = (float)(**(code **)(*plVar4 + 0x20))(plVar4);
                  if (fVar22 < 1.5700114) {
                    fVar61 = tanf(fVar22);
                  }
                }
                uVar21 = (**(code **)(*plVar4 + 0x48))(plVar4);
                uVar40 = uStack_1e0;
                lVar35 = (longlong)(int)uStack_1e0;
                uVar23 = (int)uStack_1e0 + 1;
                uStack_1e0 = CONCAT44(uStack_1e0._4_4_,uVar23);
                if (uStack_1e0._4_4_ < uVar23) {
                  FUN_1447e493a(&local_1e8,uVar40 & 0xffffffff);
                }
                uVar40 = uStack_1f0;
                lVar25 = local_488;
                uVar46 = local_4ec;
                lVar35 = lVar35 * 0x10;
                *(float *)(local_1e8 + lVar35) =
                     (float)(dVar84 * 0.0 +
                            dVar77 * (double)local_4d8 +
                            dVar83 * (double)local_4e8._0_8_ + (double)local_548 * local_4c8);
                *(float *)(local_1e8 + lVar35 + 4) =
                     (float)(dVar89 * 0.0 +
                            dVar81 * (double)local_4d8 +
                            dVar75 * (double)local_4e8._0_8_ + dStack_540 * local_4c8);
                *(float *)(local_1e8 + lVar35 + 8) =
                     (float)(dVar80 * (double)local_4d8 +
                             dVar76 * (double)local_4e8._0_8_ + dVar74 * local_4c8 + dVar93 * 0.0);
                *(uint *)(local_1e8 + lVar35 + 0xc) =
                     ((uint)bVar19 + (uint)bVar60 * 2 | (uint)fVar61 & 0xfffffff8) +
                     (uVar21 & 0xff) * 4;
                if (bVar60 == false) {
                  iVar28 = (int)uStack_1f0;
                  lVar35 = (longlong)(int)uStack_1f0;
                  uStack_1f0 = CONCAT44(uStack_1f0._4_4_,(int)uStack_1f0 + 4);
                  if (uStack_1f0._4_4_ - iVar28 < 4) {
                    FUN_1447e493a(&local_1f8,uVar40 & 0xffffffff);
                  }
                  lVar35 = lVar35 * 0x10;
                  *(undefined8 *)(local_1f8 + lVar35 + 0x30) = 0;
                  *(undefined8 *)((longlong)(local_1f8 + lVar35 + 0x30) + 8) = 0;
                  *(undefined8 *)(local_1f8 + lVar35 + 0x20) = 0;
                  *(undefined8 *)((longlong)(local_1f8 + lVar35 + 0x20) + 8) = 0;
                  *(undefined8 *)(local_1f8 + lVar35 + 0x10) = 0;
                  *(undefined8 *)((longlong)(local_1f8 + lVar35 + 0x10) + 8) = 0;
                  *(undefined8 *)(local_1f8 + lVar35) = 0;
                  *(undefined8 *)((longlong)(local_1f8 + lVar35) + 8) = 0;
                  fVar61 = local_4fc;
                }
                else {
                  local_118 = (undefined8 *)0x0;
                  local_108 = 0x400000000;
                  fVar61 = *(float *)(plVar4 + 0x57);
                  if (88.0 <= fVar61) {
                    fVar61 = 88.0;
                  }
                  if (fVar61 <= 0.0) {
                    fVar61 = 0.0;
                  }
                  local_5f0 = &local_1a4;
                  local_5f8 = &local_1a0;
                  local_548._0_4_ = fVar61 * 0.017453292;
                  FUN_143489c89();
                  fVar22 = (float)local_1a0;
                  fVar61 = *(float *)(plVar4 + 0x56);
                  fVar71 = fVar61 * 0.5;
                  dVar75 = (double)fVar71;
                  fVar32 = *(float *)((longlong)plVar4 + 0x2b4) * -0.5;
                  dVar83 = (double)fVar32;
                  dVar77 = (double)local_1a4;
                  dVar80 = (double)(*(float *)((longlong)plVar4 + 0x2b4) * 0.5) - dVar83;
                  dVar89 = (double)(fVar32 - (float)local_1a0) - dVar83;
                  dVar74 = (double)(fVar71 + (float)local_1a0) - dVar75;
                  dVar84 = dVar74 * 0.0 - dVar77 * (dVar75 - dVar75);
                  dVar63 = dVar80 * dVar77;
                  dVar81 = dVar89 * -0.0 + dVar63;
                  dVar74 = (dVar75 - dVar75) * dVar89 - dVar74 * dVar80;
                  dVar76 = dVar84 * dVar84 + dVar74 * dVar74 + dVar81 * dVar81;
                  if (((dVar76 != 1.0) ||
                      (dVar87 = dVar81, dVar73 = dVar74, dVar93 = dVar84, NAN(dVar76))) &&
                     (dVar87 = DAT_14c8464e8, dVar73 = DAT_14c8464e0, dVar93 = DAT_14c8464f0,
                     9.99999993922529e-09 <= dVar76)) {
                    dVar76 = 1.0 / SQRT(dVar76);
                    dVar87 = dVar81 * dVar76;
                    dVar73 = dVar74 * dVar76;
                    dVar93 = dVar84 * dVar76;
                  }
                  lVar25 = (longlong)(int)(uint)local_108;
                  uVar21 = (uint)local_108 + 1;
                  if (local_108._4_4_ < uVar21) {
                    uVar40 = local_108 & 0xffffffff;
                    local_518._0_2_ = SUB82(dVar63,0);
                    local_518._2_2_ = (ushort)((ulonglong)dVar63 >> 0x10);
                    uStack_514 = (undefined4)((ulonglong)dVar63 >> 0x20);
                    local_108._0_4_ = uVar21;
                    FUN_1471d6c5e(&local_198,uVar40);
                    dVar63 = (double)CONCAT44(uStack_514,
                                              CONCAT22(local_518._2_2_,(undefined2)local_518));
                    uVar21 = (uint)local_108;
                  }
                  local_108._0_4_ = uVar21;
                  fVar61 = fVar61 * -0.5;
                  dVar74 = (double)fVar61;
                  puVar92 = local_118;
                  if (local_118 == (undefined8 *)0x0) {
                    puVar92 = &local_198;
                  }
                  puVar92[lVar25 * 4] = dVar73;
                  puVar92[lVar25 * 4 + 1] = dVar87;
                  puVar92[lVar25 * 4 + 2] = dVar93;
                  puVar92[lVar25 * 4 + 3] = dVar83 * dVar93 + dVar73 * 0.0 + dVar75 * dVar87;
                  uVar21 = (uint)local_108;
                  dVar76 = (double)(fVar61 - fVar22) - dVar74;
                  dVar75 = dVar77 * (dVar74 - dVar74) + dVar76 * -0.0;
                  dVar63 = dVar89 * 0.0 - dVar63;
                  dVar80 = dVar76 * dVar80 - (dVar74 - dVar74) * dVar89;
                  dVar76 = dVar75 * dVar75 + dVar80 * dVar80 + dVar63 * dVar63;
                  if (((dVar76 != 1.0) ||
                      (dVar77 = dVar63, dVar81 = dVar75, dVar84 = dVar80, NAN(dVar76))) &&
                     (dVar77 = DAT_14c8464e8, dVar81 = DAT_14c8464f0, dVar84 = DAT_14c8464e0,
                     9.99999993922529e-09 <= dVar76)) {
                    dVar76 = 1.0 / SQRT(dVar76);
                    dVar77 = dVar63 * dVar76;
                    dVar81 = dVar75 * dVar76;
                    dVar84 = dVar80 * dVar76;
                  }
                  lVar25 = (longlong)(int)(uint)local_108;
                  local_108._0_4_ = (uint)local_108 + 1;
                  if (local_108._4_4_ < (uint)local_108) {
                    FUN_1471d6c5e(&local_198,uVar21);
                  }
                  puVar92 = local_118;
                  if (local_118 == (undefined8 *)0x0) {
                    puVar92 = &local_198;
                  }
                  puVar92[lVar25 * 4] = dVar84;
                  puVar92[lVar25 * 4 + 1] = dVar77;
                  puVar92[lVar25 * 4 + 2] = dVar81;
                  puVar92[lVar25 * 4 + 3] = dVar83 * dVar81 + dVar84 * 0.0 + dVar74 * dVar77;
                  local_5f0 = &local_1a4;
                  local_5f8 = &local_1a0;
                  FUN_143489c89();
                  uVar21 = (uint)local_108;
                  fVar32 = (float)local_1a0;
                  fVar22 = *(float *)((longlong)plVar4 + 0x2b4);
                  fVar71 = fVar22 * 0.5;
                  dVar75 = (double)fVar71;
                  fVar85 = *(float *)(plVar4 + 0x56) * 0.5;
                  dVar63 = (double)fVar85;
                  dVar80 = (double)local_1a4;
                  fVar61 = *(float *)(plVar4 + 0x56) * -0.5;
                  dVar83 = (double)fVar61;
                  dVar74 = (double)(fVar71 + (float)local_1a0) - dVar75;
                  dVar81 = (double)(fVar61 - (float)local_1a0) - dVar83;
                  dVar76 = dVar80 * (dVar63 - dVar83) + dVar81 * -0.0;
                  dVar77 = dVar74 * 0.0 - (dVar75 - dVar75) * dVar80;
                  dVar81 = dVar81 * (dVar75 - dVar75) - (dVar63 - dVar83) * dVar74;
                  dVar74 = dVar76 * dVar76 + dVar81 * dVar81 + dVar77 * dVar77;
                  if (((dVar74 != 1.0) ||
                      (dVar84 = dVar76, dVar89 = dVar81, dVar73 = dVar77, NAN(dVar74))) &&
                     (dVar84 = DAT_14c8464f0, dVar89 = DAT_14c8464e0, dVar73 = DAT_14c8464e8,
                     9.99999993922529e-09 <= dVar74)) {
                    dVar74 = 1.0 / SQRT(dVar74);
                    dVar84 = dVar76 * dVar74;
                    dVar89 = dVar81 * dVar74;
                    dVar73 = dVar77 * dVar74;
                  }
                  lVar25 = (longlong)(int)(uint)local_108;
                  local_108._0_4_ = (uint)local_108 + 1;
                  if (local_108._4_4_ < (uint)local_108) {
                    FUN_1471d6c5e(&local_198,uVar21);
                  }
                  fVar61 = local_4fc;
                  fVar22 = fVar22 * -0.5;
                  dVar74 = (double)fVar22;
                  puVar92 = local_118;
                  if (local_118 == (undefined8 *)0x0) {
                    puVar92 = &local_198;
                  }
                  puVar92[lVar25 * 4] = dVar89;
                  puVar92[lVar25 * 4 + 1] = dVar73;
                  puVar92[lVar25 * 4 + 2] = dVar84;
                  puVar92[lVar25 * 4 + 3] = dVar75 * dVar84 + dVar89 * 0.0 + dVar73 * dVar83;
                  uVar21 = (uint)local_108;
                  dVar76 = (double)(fVar85 + fVar32) - dVar63;
                  dVar75 = dVar80 * (dVar83 - dVar63) + dVar76 * -0.0;
                  dVar77 = (double)(fVar22 - fVar32) - dVar74;
                  dVar81 = dVar77 * 0.0 + -dVar80 * (dVar74 - dVar74);
                  dVar80 = (dVar74 - dVar74) * dVar76 - (dVar83 - dVar63) * dVar77;
                  dVar76 = dVar75 * dVar75 + dVar80 * dVar80 + dVar81 * dVar81;
                  if (((dVar76 != 1.0) ||
                      (dVar83 = dVar81, dVar77 = dVar80, dVar84 = dVar75, NAN(dVar76))) &&
                     (dVar83 = DAT_14c8464e8, dVar77 = DAT_14c8464e0, dVar84 = DAT_14c8464f0,
                     9.99999993922529e-09 <= dVar76)) {
                    dVar76 = 1.0 / SQRT(dVar76);
                    dVar83 = dVar81 * dVar76;
                    dVar77 = dVar80 * dVar76;
                    dVar84 = dVar75 * dVar76;
                  }
                  lVar25 = (longlong)(int)(uint)local_108;
                  local_108._0_4_ = (uint)local_108 + 1;
                  if (local_108._4_4_ < (uint)local_108) {
                    FUN_1471d6c5e(&local_198,uVar21);
                  }
                  puVar92 = local_118;
                  if (local_118 == (undefined8 *)0x0) {
                    puVar92 = &local_198;
                  }
                  puVar92[lVar25 * 4] = dVar77;
                  puVar92[lVar25 * 4 + 1] = dVar83;
                  puVar92[lVar25 * 4 + 2] = dVar84;
                  puVar92[lVar25 * 4 + 3] = dVar74 * dVar84 + dVar77 * 0.0 + dVar63 * dVar83;
                  puVar92 = local_118;
                  if (local_118 == (undefined8 *)0x0) {
                    puVar92 = &local_198;
                  }
                  lVar25 = (longlong)(int)(uint)local_108;
                  if (lVar25 != 0) {
                    lVar35 = 0;
                    do {
                      uVar40 = uStack_1f0;
                      local_358 = *(double *)(lVar51 + 0x9b0);
                      dStack_350 = *(double *)(lVar51 + 0x9b8);
                      local_348 = *(double *)(lVar51 + 0x9c0);
                      dStack_340 = *(double *)(lVar51 + 0x9c8);
                      dVar89 = *(double *)(lVar51 + 0x9d0);
                      dVar73 = *(double *)(lVar51 + 0x9d8);
                      local_338 = *(double *)(lVar51 + 0x9e0);
                      dStack_330 = *(double *)(lVar51 + 0x9e8);
                      local_328 = *(double *)(lVar51 + 0x9f0);
                      dStack_320 = *(double *)(lVar51 + 0x9f8);
                      local_3f8 = *(double *)(lVar51 + 0xa00);
                      dStack_3f0 = *(double *)(lVar51 + 0xa08);
                      dVar87 = *(double *)(lVar51 + 0xa10);
                      dVar93 = *(double *)(lVar51 + 0xa18);
                      dVar8 = *(double *)(lVar51 + 0xa20);
                      dVar9 = *(double *)(lVar51 + 0xa28);
                      dVar74 = (double)plVar4[0x1a];
                      dVar63 = (double)plVar4[0x1a];
                      dVar76 = (double)plVar4[0x1b];
                      dVar80 = (double)plVar4[0x1b];
                      dVar83 = (double)plVar4[0x1c];
                      dVar75 = (double)plVar4[0x1c];
                      dVar81 = (double)plVar4[0x1d];
                      dVar77 = (double)plVar4[0x1d];
                      dVar84 = dVar87 * dVar81 +
                               local_328 * dVar83 + dVar89 * dVar76 + local_358 * dVar74;
                      local_368 = dVar93 * dVar77 +
                                  dStack_320 * dVar75 + dVar73 * dVar80 + dStack_350 * dVar63;
                      local_478 = dVar81 * dVar8 +
                                  dVar83 * local_3f8 + dVar76 * local_338 + dVar74 * local_348;
                      dStack_470 = dVar77 * dVar9 +
                                   dVar75 * dStack_3f0 + dVar80 * dStack_330 + dVar63 * dStack_340;
                      dVar74 = (double)plVar4[0x1e];
                      dVar63 = (double)plVar4[0x1e];
                      dVar80 = (double)plVar4[0x1f];
                      dVar76 = (double)plVar4[0x1f];
                      dVar75 = (double)plVar4[0x20];
                      dVar83 = (double)plVar4[0x20];
                      dVar81 = (double)plVar4[0x21];
                      dVar77 = (double)plVar4[0x21];
                      local_4d8 = (undefined8 *)
                                  (dVar87 * dVar81 +
                                  local_328 * dVar75 + dVar89 * dVar80 + local_358 * dVar74);
                      puStack_4d0 = (undefined8 *)
                                    (dVar93 * dVar77 +
                                    dStack_320 * dVar83 + dVar73 * dVar76 + dStack_350 * dVar63);
                      dVar94 = dVar81 * dVar8 +
                               dVar75 * local_3f8 + dVar80 * local_338 + dVar74 * local_348;
                      dStack_510 = dVar77 * dVar9 +
                                   dVar83 * dStack_3f0 + dVar76 * dStack_330 + dVar63 * dStack_340;
                      dVar63 = (double)plVar4[0x22];
                      dVar74 = (double)plVar4[0x22];
                      dVar76 = (double)plVar4[0x23];
                      dVar80 = (double)plVar4[0x23];
                      dVar75 = (double)plVar4[0x24];
                      dVar83 = (double)plVar4[0x24];
                      dVar77 = (double)plVar4[0x25];
                      dVar81 = (double)plVar4[0x25];
                      dVar90 = dVar87 * dVar77 +
                               local_328 * dVar75 + dVar89 * dVar76 + local_358 * dVar63;
                      puVar91 = (uint *)(dVar93 * dVar81 +
                                        dStack_320 * dVar83 + dVar73 * dVar80 + dStack_350 * dVar74)
                      ;
                      local_4c8 = dVar77 * dVar8 +
                                  dVar75 * local_3f8 + dVar76 * local_338 + dVar63 * local_348;
                      dStack_4c0 = dVar81 * dVar9 +
                                   dVar83 * dStack_3f0 + dVar80 * dStack_330 + dVar74 * dStack_340;
                      local_518._0_2_ = SUB82(dVar94,0);
                      local_518._2_2_ = (ushort)((ulonglong)dVar94 >> 0x10);
                      uStack_514 = (undefined4)((ulonglong)dVar94 >> 0x20);
                      unique0x10001514 = SUB84(local_368,0);
                      local_548 = (undefined1  [8])dVar84;
                      unique0x10001518 = (int)((ulonglong)local_368 >> 0x20);
                      local_4e8._8_8_ = puStack_4d0;
                      local_4e8._0_8_ = puStack_4d0;
                      local_3e8 = *(float **)((longlong)puVar92 + lVar35);
                      local_448 = *(double *)((longlong)puVar92 + lVar35 + 8);
                      local_318 = *(double *)((longlong)puVar92 + lVar35 + 0x10);
                      dVar83 = local_318 * (local_368 * dVar94 - (double)puStack_4d0 * local_478) +
                               local_448 * ((double)puVar91 * local_478 - local_368 * local_4c8) +
                               (double)local_3e8 *
                               ((double)puStack_4d0 * local_4c8 - (double)puVar91 * dVar94) + 0.0;
                      dVar75 = local_318 * (local_478 * (double)local_4d8 - dVar94 * dVar84) +
                               local_448 * (local_4c8 * dVar84 - local_478 * dVar90) +
                               (double)local_3e8 * (dVar94 * dVar90 - local_4c8 * (double)local_4d8)
                               + 0.0;
                      uStack_440 = 0;
                      uStack_3e0 = 0;
                      uStack_310 = 0;
                      dVar63 = 0.0;
                      dVar80 = ((double)local_4d8 * (double)puVar91 - dVar90 * (double)puStack_4d0)
                               * (double)local_3e8 +
                               (dVar90 * local_368 - dVar84 * (double)puVar91) * local_448 +
                               (dVar84 * (double)puStack_4d0 - (double)local_4d8 * local_368) *
                               local_318 + 0.0;
                      dVar76 = dVar80 * dVar80 + dVar83 * dVar83 + dVar75 * dVar75;
                      local_378 = 0.0;
                      dVar74 = 0.0;
                      puVar34 = (undefined8 *)0x0;
                      dStack_370 = 0.0;
                      if (9.99999993922529e-09 < dVar76) {
                        dVar63 = 1.0 / SQRT(dVar76);
                        dVar74 = dVar80 * dVar63;
                        local_378 = dVar75 * dVar63;
                        dVar63 = dVar63 * dVar83;
                        puVar34 = puStack_4d0;
                        dStack_370 = dVar75;
                      }
                      local_388._8_4_ = (int)puVar34;
                      local_388._0_8_ = dVar74;
                      local_388._12_4_ = (int)((ulonglong)puVar34 >> 0x20);
                      dVar80 = (double)plVar4[0x26];
                      dVar76 = (double)plVar4[0x26];
                      dVar83 = (double)plVar4[0x27];
                      dVar75 = (double)plVar4[0x27];
                      dVar77 = (double)plVar4[0x28];
                      dVar81 = (double)plVar4[0x28];
                      dVar79 = (double)plVar4[0x29];
                      dVar82 = (double)plVar4[0x29];
                      dVar89 = dVar87 * dVar79 +
                               local_328 * dVar77 + dVar89 * dVar83 + local_358 * dVar80;
                      dVar73 = dVar93 * dVar82 +
                               dStack_320 * dVar81 + dVar73 * dVar75 + dStack_350 * dVar76;
                      dVar80 = dVar8 * dVar79 +
                               local_3f8 * dVar77 + local_338 * dVar83 + local_348 * dVar80;
                      dVar76 = dVar9 * dVar82 +
                               dStack_3f0 * dVar81 + dStack_330 * dVar75 + dStack_340 * dVar76;
                      dVar77 = local_4c8 * dVar76 - dVar80 * dStack_4c0;
                      dVar75 = dVar94 * dVar76 - dVar80 * dStack_510;
                      dVar81 = dVar94 * dStack_4c0 - local_4c8 * dStack_510;
                      local_468._8_4_ = SUB84(dVar76,0);
                      local_468._0_8_ = dVar80;
                      local_468._12_4_ = (int)((ulonglong)dVar76 >> 0x20);
                      dVar76 = dVar76 * local_478 - dVar80 * dStack_470;
                      dVar80 = dStack_4c0 * local_478 - local_4c8 * dStack_470;
                      dVar83 = dStack_510 * local_478 - dStack_470 * dVar94;
                      dVar80 = ((dVar73 * dVar83 +
                                (dVar75 * local_368 - dVar76 * (double)puStack_4d0)) * dVar90 +
                               ((dVar73 * dVar81 +
                                ((double)puStack_4d0 * dVar77 - dVar75 * (double)puVar91)) * dVar84
                               - (dVar73 * dVar80 + (dVar77 * local_368 - dVar76 * (double)puVar91))
                                 * (double)local_4d8)) -
                               (dVar83 * (double)puVar91 +
                               (dVar81 * local_368 - dVar80 * (double)puStack_4d0)) * dVar89;
                      dVar76 = local_378;
                      if (dVar80 < 0.0) {
                        dVar74 = -dVar74;
                        dVar76 = -local_378;
                      }
                      uVar56 = -(ulonglong)(dVar80 < 0.0);
                      dVar80 = (double)(~uVar56 & (ulonglong)dVar63 | (ulonglong)-dVar63 & uVar56);
                      dVar63 = *(double *)((longlong)puVar92 + lVar35 + 0x18);
                      lVar37 = (longlong)(int)uStack_1f0;
                      uVar21 = (int)uStack_1f0 + 1;
                      uStack_1f0 = CONCAT44(uStack_1f0._4_4_,uVar21);
                      local_4a8 = puVar91;
                      puStack_4a0 = puVar91;
                      local_438 = dVar90;
                      puStack_430 = puVar91;
                      dStack_360 = local_368;
                      if (uStack_1f0._4_4_ < uVar21) {
                        FUN_1447e493a(&local_1f8,uVar40 & 0xffffffff);
                      }
                      dVar83 = local_318 * dVar63;
                      dVar75 = local_448 * dVar63;
                      dVar63 = (double)local_3e8 * dVar63;
                      lVar37 = lVar37 * 0x10;
                      *(float *)(local_1f8 + lVar37) = (float)dVar80;
                      *(float *)(local_1f8 + lVar37 + 4) = (float)dVar76;
                      *(float *)(local_1f8 + lVar37 + 8) = (float)dVar74;
                      *(float *)(local_1f8 + lVar37 + 0xc) =
                           -(float)(((double)local_468._0_8_ +
                                    local_478 * dVar63 +
                                    (double)CONCAT44(uStack_514,
                                                     CONCAT22(local_518._2_2_,(undefined2)local_518)
                                                    ) * dVar75 + local_4c8 * dVar83) * dVar74 +
                                   (dVar89 + dVar90 * dVar83 +
                                             (double)local_4d8 * dVar75 + (double)local_548 * dVar63
                                   ) * dVar80 +
                                   (dVar73 + (double)puVar91 * dVar83 +
                                             (double)puStack_4d0 * dVar75 + dStack_540 * dVar63) *
                                   dVar76);
                      lVar35 = lVar35 + 0x20;
                      fVar61 = local_4fc;
                    } while (lVar25 * 0x20 != lVar35);
                  }
                  lVar25 = local_488;
                  uVar46 = local_4ec;
                  if (local_118 != (undefined8 *)0x0) {
                    FUN_1400020a8();
                    lVar25 = local_488;
                    uVar46 = local_4ec;
                  }
                }
                fVar22 = local_4f4;
                if (local_4f4 <= (float)local_398) {
                  fVar22 = (float)local_398;
                }
                local_500 = CONCAT31((int3)((uint)local_500 >> 8),(byte)local_500 | bVar19);
                bVar19 = (**(code **)(*plVar4 + 0x48))(plVar4);
                local_4ec = CONCAT31((int3)((uint)uVar46 >> 8),(byte)uVar46 | bVar19);
                iVar28 = local_420;
              }
              else {
                iVar28 = *(int *)(lVar37 + 0x34);
                if ((longlong)iVar28 < 0) {
                  bVar60 = false;
                  goto LAB_142ce1ab2;
                }
                if (*(int *)(local_528 + 0x4e0) <= iVar28) {
                  bVar60 = false;
                  goto LAB_142ce1ab2;
                }
                lVar44 = (longlong)iVar28 * 0x68;
                lVar35 = *(longlong *)(local_528 + 0x4d8) + lVar44;
                if (*(int *)(*(longlong *)(local_528 + 0x4d8) + 0x58 + lVar44) == 0) {
                  local_4e8._0_4_ = *(undefined4 *)(lVar35 + 0x60);
                  bVar60 = true;
                  goto LAB_142ce1ab2;
                }
                FUN_1400d7ed0(lVar35,&local_198);
                plVar2 = (longlong *)CONCAT44(uStack_190._4_4_,(float)uStack_190);
                local_4e8._0_4_ =
                     *(undefined4 *)(CONCAT44(local_198._4_4_,(float)local_198) + 0x2b40);
                if (plVar2 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = plVar2 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*plVar2)(plVar2);
                    LOCK();
                    piVar38 = (int *)((longlong)plVar2 + 0xc);
                    *piVar38 = *piVar38 + -1;
                    UNLOCK();
                    if (*piVar38 == 0) {
                      (**(code **)(*plVar2 + 0x10))(plVar2);
                    }
                  }
                }
                bVar60 = true;
                switch(*local_4a8 & 3) {
                case 1:
                  goto switchD_142ce1ac3_caseD_1;
                case 2:
                  goto switchD_142ce1ac3_caseD_2;
                case 3:
                  goto switchD_142ce1ac3_caseD_3;
                }
switchD_142ce1ac3_caseD_0:
                if ((&DAT_14ca814b8)
                    [(ulonglong)
                     *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(lVar51 + 0x3090) * 2) * 0xf] !=
                    1) {
                  fVar32 = fStack_264 * fStack_264 + local_26c * local_26c + fStack_268 * fStack_268
                  ;
                  iVar20 = (**(code **)(*plVar4 + 0x88))(plVar4);
                  puVar92 = local_520;
                  if ((local_47c < iVar20) || ((iVar20 == local_47c && (local_480 < fVar32)))) {
                    *(longlong **)(lVar51 + 0x13788) = plVar4;
                    *(undefined4 *)(local_520 + 3) = 1;
                    local_520[0xe] = CONCAT44(fStack_268,local_26c);
                    *(float *)(local_520 + 0xf) = fStack_264;
                    *(undefined4 *)((longlong)local_520 + 0x7c) =
                         *(undefined4 *)((longlong)plVar4 + 0x154);
                    fVar71 = *(float *)((longlong)plVar4 + 0x174);
                    if (1.0 <= *(float *)((longlong)plVar4 + 0x174)) {
                      fVar71 = 1.0;
                    }
                    if (fVar71 <= 0.0) {
                      fVar71 = 0.0;
                    }
                    *(float *)(local_520 + 0x10) = fVar71;
                    fVar71 = *(float *)(plVar4 + 0x2f);
                    if (1.0 <= fVar71) {
                      fVar71 = 1.0;
                    }
                    if (fVar71 <= 0.0) {
                      fVar71 = 0.0;
                    }
                    *(float *)((longlong)local_520 + 0x84) = fVar71;
                    *local_3b0 = CONCAT44(fStack_254,local_258);
                    *(float *)(local_3b0 + 1) = local_250;
                    *(uint *)((longlong)local_520 + 0x5c) = local_238;
                    *(uint *)(local_520 + 0xc) = local_22c;
                    *(float *)(local_520 + 0x11) = (float)local_4c8;
                    *(undefined4 *)((longlong)local_520 + 0x9c) = 0xffffffff;
                    *(undefined4 *)((longlong)local_520 + 0x274) = local_204;
                    *(undefined4 *)(local_520 + 0x4f) = local_200;
                    if (((*(byte *)(lVar37 + 0xe4) & 1) == 0) ||
                       (bVar59 = true, DAT_14c760480 <= *(int *)(lVar37 + 0xf8))) {
                      bVar59 = (*(byte *)(*(longlong *)(lVar37 + 0x28) + 0x1d0) & 8) == 0;
                    }
                    local_5f8 = (undefined8 *)
                                CONCAT44(local_5f8._4_4_,*(undefined4 *)(lVar51 + 0x4f8));
                    local_4f4 = fVar22;
                    (**(code **)(*plVar4 + 0x80))
                              (plVar4,&local_2a8,*(undefined4 *)(lVar51 + 0x3090),bVar59);
                    *(float *)(puVar92 + 0x12) = (float)local_2a0;
                    *(float *)((longlong)puVar92 + 0x94) = (float)(-(double)local_2a8 * local_2a0);
                    auVar70._0_8_ = *(ulonglong *)(lVar51 + 0x1040) ^ 0x8000000000000000;
                    auVar70._8_8_ = 0x8000000000000000;
                    auVar78 = blendpd(auVar70,_DAT_149935300,2);
                    puVar91 = (uint *)-*(double *)(lVar51 + 0x1038);
                    puVar92 = (undefined8 *)-*(double *)(lVar51 + 0x1030);
                    dVar63 = auVar78._0_8_;
                    local_4d8 = (undefined8 *)CONCAT44(local_4d8._4_4_,(float)local_4d8);
                    if (bVar60) {
                      lVar25 = *(longlong *)(local_528 + 0x4d8);
                      lVar35 = (longlong)*(int *)(lVar37 + 0x34) * 0x68;
                      *(undefined4 *)((longlong)local_520 + 0x9c) = local_4e8._0_4_;
                      *(undefined4 *)(local_520 + 0x13) = 0;
                      local_520[0x14] = 0x7f7fffff7f7fffff;
                      local_520[0x15] = 0x7f7fffff7f7fffff;
                      lVar48 = (longlong)*(int *)(lVar25 + 8 + lVar35);
                      local_4d8 = (undefined8 *)CONCAT44(local_4d8._4_4_,(float)local_4d8);
                      if (lVar48 != 0) {
                        lVar25 = *(longlong *)(lVar25 + lVar35);
                        auVar69._8_8_ = dVar63;
                        auVar69._0_8_ = dVar63;
                        lVar35 = 0;
                        puVar62 = puVar91;
                        puVar68 = puVar91;
                        puStack_4d0 = puVar92;
                        local_4d8 = puVar92;
                        do {
                          lVar44 = *(longlong *)(lVar25 + lVar35);
                          lVar26 = *(longlong *)(lVar44 + 0x38);
                          if (lVar26 == lVar51 || lVar26 == 0) {
LAB_142ce1dd2:
                            if ((*(byte *)(lVar44 + 0x998) & 3) == 0) {
                              uVar21 = *(uint *)(lVar44 + 0x944);
                              if (((((~*(uint *)(lVar44 + 0x990) & 0x90) == 0 && -1 < (int)uVar21)
                                   && (*(int *)(lVar44 + 0x99c) == -1)) &&
                                  (*(longlong *)(lVar44 + 0xb50) == 0)) &&
                                 (uVar40 = (ulonglong)uVar21,
                                 (uVar21 < 4 & (byte)*(uint *)(lVar44 + 0x990)) == 1)) {
                                local_4e8 = auVar69;
                                local_4a8 = puVar62;
                                puStack_4a0 = puVar68;
                                FUN_14030f5be(lVar44,&local_198,local_3c8 + uVar40 * 2,0);
                                dVar74 = (double)CONCAT44(local_198._4_4_,(float)local_198);
                                dVar76 = (double)CONCAT44(uStack_190._4_4_,(float)uStack_190);
                                dVar80 = (double)CONCAT44(uStack_17c,fStack_180);
                                dStack_4c0 = (double)CONCAT44(uStack_14c,uStack_150);
                                local_4c8._0_4_ = SUB84(local_158,0);
                                local_4c8._4_4_ = (undefined4)((ulonglong)local_158 >> 0x20);
                                dVar77 = local_138 * 0.0;
                                dVar81 = dStack_130 * 0.0;
                                dVar83 = local_128 * 0.0;
                                dVar75 = dStack_120 * 0.0;
                                *(int *)(local_520 + 0x13) = *(int *)(local_520 + 0x13) + 1;
                                lVar26 = uVar40 * 0x40;
                                *(float *)(local_3d0 + uVar40 * 8) =
                                     (float)(dVar74 + local_178 * 0.0 + local_158 * 0.0 + dVar77);
                                *(float *)((longlong)local_3d0 + lVar26 + 4) =
                                     (float)(dVar76 + dStack_170 * 0.0 + dStack_4c0 * 0.0 + dVar81);
                                *(float *)(local_3d0 + uVar40 * 8 + 1) =
                                     (float)(local_188 + local_168 * 0.0 + local_148 * 0.0 + dVar83)
                                ;
                                *(float *)((longlong)local_3d0 + lVar26 + 0xc) =
                                     (float)(dVar80 + dStack_160 * 0.0 + dStack_140 * 0.0 + dVar75);
                                *(float *)(local_3d0 + uVar40 * 8 + 2) =
                                     (float)(dVar74 * 0.0 + local_178 + local_158 * 0.0 + dVar77);
                                *(float *)((longlong)local_3d0 + lVar26 + 0x14) =
                                     (float)(dVar76 * 0.0 + dStack_170 + dStack_4c0 * 0.0 + dVar81);
                                *(float *)(local_3d0 + uVar40 * 8 + 3) =
                                     (float)(local_188 * 0.0 + local_168 + local_148 * 0.0 + dVar83)
                                ;
                                *(float *)((longlong)local_3d0 + lVar26 + 0x1c) =
                                     (float)(dVar80 * 0.0 + dStack_160 + dStack_140 * 0.0 + dVar75);
                                *(float *)(local_3d0 + uVar40 * 8 + 4) =
                                     (float)(dVar74 * 0.0 + local_178 * 0.0 + local_158 + dVar77);
                                *(float *)((longlong)local_3d0 + lVar26 + 0x24) =
                                     (float)(dVar76 * 0.0 + dStack_170 * 0.0 + dStack_4c0 + dVar81);
                                *(float *)(local_3d0 + uVar40 * 8 + 5) =
                                     (float)(local_188 * 0.0 + local_168 * 0.0 + local_148 + dVar83)
                                ;
                                *(float *)((longlong)local_3d0 + lVar26 + 0x2c) =
                                     (float)(dVar80 * 0.0 + dStack_160 * 0.0 + dStack_140 + dVar75);
                                *(float *)(local_3d0 + uVar40 * 8 + 6) =
                                     (float)(local_158 * (double)local_4e8._0_8_ +
                                             local_178 * (double)local_4a8 +
                                             dVar74 * (double)local_4d8 + local_138);
                                *(float *)((longlong)local_3d0 + lVar26 + 0x34) =
                                     (float)(dStack_4c0 * (double)local_4e8._8_8_ +
                                             dStack_170 * (double)puStack_4a0 +
                                             dVar76 * (double)puStack_4d0 + dStack_130);
                                *(float *)(local_3d0 + uVar40 * 8 + 7) =
                                     (float)(local_148 * (double)local_4e8._0_8_ +
                                             local_168 * (double)local_4a8 +
                                             local_188 * (double)local_4d8 + local_128);
                                *(float *)((longlong)local_3d0 + lVar26 + 0x3c) =
                                     (float)(dStack_140 * (double)local_4e8._8_8_ +
                                             dStack_160 * (double)puStack_4a0 +
                                             dVar80 * (double)puStack_4d0 + dStack_120);
                                *(undefined4 *)((longlong)local_520 + uVar40 * 4 + 0xa0) =
                                     *(undefined4 *)(lVar44 + 0x6e4);
                                auVar69 = local_4e8;
                                puVar62 = local_4a8;
                                puVar68 = puStack_4a0;
                                fVar61 = local_4fc;
                                if (uVar40 == 0) {
                                  local_1a0 = *(longlong **)(lVar44 + 0x28);
                                  if (local_1a0 != (longlong *)0x0) {
                                    (**(code **)(*local_1a0 + 0x30))();
                                  }
                                  lVar26 = FUN_14473c272(local_530,&local_1a0,0);
                                  puVar34 = local_520;
                                  local_520[0x50] = lVar26;
                                  if (local_1a0 != (longlong *)0x0) {
                                    (**(code **)(*local_1a0 + 0x38))();
                                    lVar26 = puVar34[0x50];
                                  }
                                  *(undefined4 *)(puVar34 + 0x40) = *(undefined4 *)(lVar44 + 0x10d8)
                                  ;
                                  iVar28 = (int)*(undefined8 *)(lVar26 + 0x84);
                                  iVar55 = (int)((ulonglong)*(undefined8 *)(lVar26 + 0x84) >> 0x20);
                                  *(float *)(puVar34 + 0x3e) = (float)iVar28;
                                  *(float *)((longlong)puVar34 + 500) = (float)iVar55;
                                  *(float *)(puVar34 + 0x3f) = 1.0 / (float)iVar28;
                                  *(float *)((longlong)puVar34 + 0x1fc) = 1.0 / (float)iVar55;
                                  auVar69 = local_4e8;
                                  puVar62 = local_4a8;
                                  puVar68 = puStack_4a0;
                                  fVar61 = local_4fc;
                                }
                              }
                            }
                          }
                          else {
                            lVar5 = *(longlong *)(lVar51 + 8);
                            lVar30 = lVar51;
                            if (lVar5 != 0) {
                              iVar28 = *(int *)(lVar51 + 0x1dd8);
                              if ((-1 < (longlong)iVar28) && (iVar28 < *(int *)(lVar5 + 0x10))) {
                                lVar30 = *(longlong *)
                                          (*(longlong *)(lVar5 + 8) + (longlong)iVar28 * 8);
                              }
                            }
                            if (lVar26 == lVar30) goto LAB_142ce1dd2;
                          }
                          lVar35 = lVar35 + 8;
                        } while (lVar48 * 8 != lVar35);
                      }
                    }
                    lVar25 = local_488;
                    lVar35 = *(longlong *)(*(longlong *)(lVar37 + 0x28) + 0x198);
                    if (((*(byte *)(lVar37 + 0xe4) & 1) == 0) ||
                       (bVar60 = true, DAT_14c760480 <= *(int *)(lVar37 + 0xf8))) {
                      bVar60 = (*(byte *)(*(longlong *)(lVar37 + 0x28) + 0x1d0) & 8) == 0;
                    }
                    if (((lVar35 == 0) || (!bVar60)) ||
                       (lVar37 = *(longlong *)(lVar35 + 0x48), lVar37 == 0)) {
LAB_142ce2526:
                      *(undefined4 *)((longlong)local_520 + 0x204) = 0;
LAB_142ce2538:
                      *local_3b8 = 0;
                      local_3b8[1] = 0;
                      uVar16 = _DAT_14c846288;
                      local_3c0[6] = _DAT_14c846280;
                      local_3c0[7] = uVar16;
                      uVar16 = _DAT_14c846278;
                      local_3c0[4] = _DAT_14c846270;
                      local_3c0[5] = uVar16;
                      uVar16 = _DAT_14c846268;
                      local_3c0[2] = _DAT_14c846260;
                      local_3c0[3] = uVar16;
                      uVar16 = DAT_14c846258;
                      *local_3c0 = _DAT_14c846250;
                      local_3c0[1] = uVar16;
                      lVar35 = DAT_14ca94e18;
                    }
                    else {
                      lVar48 = 0;
                      do {
                        lVar44 = 0;
                        do {
                          iVar28 = _finite(*(double *)(lVar37 + lVar44 * 8));
                          if (iVar28 == 0) goto LAB_142ce2526;
                          lVar44 = lVar44 + 1;
                        } while (lVar44 != 4);
                        lVar48 = lVar48 + 1;
                        lVar37 = lVar37 + 0x20;
                      } while (lVar48 != 4);
                      bVar60 = *(longlong *)(lVar35 + 0x10) == 0;
                      *(uint *)((longlong)local_520 + 0x204) = (uint)!bVar60;
                      if (bVar60) goto LAB_142ce2538;
                      pdVar57 = *(double **)(lVar35 + 0x48);
                      dVar74 = *pdVar57;
                      dVar76 = pdVar57[1];
                      dVar80 = pdVar57[2];
                      dVar83 = pdVar57[3];
                      dVar75 = pdVar57[4];
                      dVar77 = pdVar57[5];
                      dVar81 = pdVar57[6];
                      dVar84 = pdVar57[7];
                      dVar89 = pdVar57[8];
                      dVar73 = pdVar57[9];
                      dVar87 = pdVar57[10];
                      dVar93 = pdVar57[0xb];
                      dVar8 = pdVar57[0xc];
                      dVar9 = pdVar57[0xd];
                      dVar90 = pdVar57[0xe];
                      dVar94 = pdVar57[0xf];
                      dVar86 = dVar8 * 0.0;
                      dVar88 = dVar9 * 0.0;
                      dVar79 = dVar90 * 0.0;
                      dVar82 = dVar94 * 0.0;
                      iVar28 = *(int *)((longlong)pdVar57 + 0x84);
                      iVar55 = *(int *)(pdVar57 + 0x10);
                      *(float *)(local_520 + 0x44) = (float)iVar55;
                      *(float *)((longlong)local_520 + 0x224) = (float)iVar28;
                      *(float *)(local_520 + 0x45) = 1.0 / (float)iVar55;
                      *(float *)((longlong)local_520 + 0x22c) = 1.0 / (float)iVar28;
                      *(float *)(local_520 + 0x46) =
                           (float)(dVar74 + dVar75 * 0.0 + dVar89 * 0.0 + dVar86);
                      *(float *)((longlong)local_520 + 0x234) =
                           (float)(dVar76 + dVar77 * 0.0 + dVar73 * 0.0 + dVar88);
                      *(float *)(local_520 + 0x47) =
                           (float)(dVar80 + dVar81 * 0.0 + dVar87 * 0.0 + dVar79);
                      *(float *)((longlong)local_520 + 0x23c) =
                           (float)(dVar83 + dVar84 * 0.0 + dVar93 * 0.0 + dVar82);
                      *(float *)(local_520 + 0x48) =
                           (float)(dVar74 * 0.0 + dVar75 + dVar89 * 0.0 + dVar86);
                      *(float *)((longlong)local_520 + 0x244) =
                           (float)(dVar76 * 0.0 + dVar77 + dVar73 * 0.0 + dVar88);
                      *(float *)(local_520 + 0x49) =
                           (float)(dVar80 * 0.0 + dVar81 + dVar87 * 0.0 + dVar79);
                      *(float *)((longlong)local_520 + 0x24c) =
                           (float)(dVar83 * 0.0 + dVar84 + dVar93 * 0.0 + dVar82);
                      *(float *)(local_520 + 0x4a) =
                           (float)(dVar74 * 0.0 + dVar75 * 0.0 + dVar89 + dVar86);
                      *(float *)((longlong)local_520 + 0x254) =
                           (float)(dVar76 * 0.0 + dVar77 * 0.0 + dVar73 + dVar88);
                      *(float *)(local_520 + 0x4b) =
                           (float)(dVar80 * 0.0 + dVar81 * 0.0 + dVar87 + dVar79);
                      *(float *)((longlong)local_520 + 0x25c) =
                           (float)(dVar83 * 0.0 + dVar84 * 0.0 + dVar93 + dVar82);
                      *(float *)(local_520 + 0x4c) =
                           (float)(dVar89 * dVar63 +
                                   dVar75 * (double)puVar91 + dVar74 * (double)puVar92 + dVar8);
                      *(float *)((longlong)local_520 + 0x264) =
                           (float)(dVar73 * dVar63 +
                                   dVar77 * (double)puVar91 + dVar76 * (double)puVar92 + dVar9);
                      *(float *)(local_520 + 0x4d) =
                           (float)(dVar63 * dVar87 +
                                   (double)puVar91 * dVar81 + (double)puVar92 * dVar80 + dVar90);
                      *(float *)((longlong)local_520 + 0x26c) =
                           (float)(dVar63 * dVar93 +
                                   (double)puVar91 * dVar84 + (double)puVar92 * dVar83 + dVar94);
                      fVar61 = local_4fc;
                    }
                    uVar52 = CONCAT22(local_518._2_2_,(undefined2)local_518);
                    local_520[0x52] = *(undefined8 *)(lVar35 + 0x10);
                    iVar28 = local_548._0_4_;
                    fVar22 = local_4f4;
                    local_480 = fVar32;
                    local_47c = iVar20;
                    goto LAB_142ce488e;
                  }
                }
LAB_142ce2645:
                uVar52 = CONCAT22(local_518._2_2_,(undefined2)local_518);
                iVar28 = local_548._0_4_;
              }
LAB_142ce488e:
              uVar21 = param_5[0x14];
              local_548._0_4_ = iVar28;
              local_518._0_2_ = (undefined2)uVar52;
              local_518._2_2_ = (ushort)((uint)uVar52 >> 0x10);
            }
            lVar25 = lVar25 + 1;
          } while (lVar25 < (int)uVar21);
          iVar28 = CONCAT22(local_518._2_2_,(undefined2)local_518);
          uVar52 = local_4ec;
          uVar46 = local_548._0_4_;
        }
        else {
          uVar46 = 0x7fffffff;
          uVar52 = 0;
          local_500 = 0;
          fVar22 = 1000.0;
        }
      }
      puVar27 = local_1b8;
      local_518._0_2_ = (undefined2)iVar28;
      local_518._2_2_ = (ushort)((uint)iVar28 >> 0x10);
      local_548._0_4_ = uVar46;
      iVar28 = (uint)uStack_1b0;
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c9ebba0) {
        FUN_144b3d300(&DAT_14c9ebba0);
        if (DAT_14c9ebba0 == -1) {
          _DAT_14c9ebb90 = 0;
          uRam000000014c9ebb98 = 0x3f80000000000000;
          _Init_thread_footer(&DAT_14c9ebba0);
        }
      }
      uVar40 = (ulonglong)iVar28;
      uVar56 = uVar40 * 0xa0 >> 4;
      if ((int)uVar56 == 0) {
        local_5f8 = (undefined8 *)&DAT_14c9ebb90;
        local_5e8 = CONCAT31(local_5e8._1_3_,1);
        local_5f0 = (float *)0x10;
        uVar56 = 1;
      }
      else {
        local_5f0 = (float *)((longlong)((uVar40 << 0x21) * 5) >> 0x1c);
        local_5f8 = (undefined8 *)puVar27;
        local_5e8 = (uint)local_5e8._1_3_ << 8;
      }
      lVar25 = FUN_144942e63(local_530,L"ForwardLocalLightBuffer",0x10,uVar56);
      _Src = local_1c8;
      iVar20 = (int)uStack_1c0;
      lVar35 = (longlong)(int)uStack_1c0;
      *(int *)(lVar51 + 0x13798) = (int)uStack_1c0;
      if ((int)uStack_1c0 == 0 && *(int *)(lVar51 + 0x1379c) == 0) {
        *(undefined4 *)(lVar51 + 0x1379c) = 0;
      }
      else {
        FUN_144a06ca8((undefined8 *)(lVar51 + 0x13790),uStack_1c0 & 0xffffffff);
        if (iVar20 != 0) {
          memcpy(*(void **)(lVar51 + 0x13790),_Src,lVar35 << 2);
        }
      }
      plVar4 = local_4b8;
      *(byte *)(lVar51 + 0x137b0) = (byte)local_500 & 1;
      *(byte *)(lVar51 + 0x137b1) = (byte)uVar52 & 1;
      iVar20 = (int)((*(int *)(lVar51 + 0x3104) + (DAT_14c76044c - 1)) - *(int *)(lVar51 + 0x30fc))
               / (int)DAT_14c76044c;
      iVar55 = (int)(((DAT_14c76044c - 1) + *(int *)(lVar51 + 0x3100)) - *(int *)(lVar51 + 0x30f8))
               / (int)DAT_14c76044c;
      cVar18 = *(char *)(lVar25 + 0x68);
      puVar34 = (undefined8 *)(*(longlong *)(local_530 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar92 = puVar34 + 9;
      if (*(undefined8 **)(local_530 + 0x78) < puVar92) {
        FUN_140023dd8(local_4b8,0x50);
        puVar34 = (undefined8 *)(*plVar4 + 7U & 0xfffffffffffffff8);
        puVar92 = puVar34 + 9;
      }
      *(undefined8 **)(local_530 + 0x70) = puVar92;
      puVar34[1] = *(undefined8 *)(lVar25 + 8);
      puVar34[2] = 0;
      *(undefined1 *)(puVar34 + 3) = 3;
      *(undefined8 *)((longlong)puVar34 + 0x1c) = 0xffffffffffffffff;
      *puVar34 = &PTR_FUN_14a1fb168;
      *(byte *)(puVar34 + 5) = cVar18 >> 7 & 0x1c;
      *(undefined8 *)((longlong)puVar34 + 0x2c) = 0xffffffff00000000;
      puVar34[7] = 0;
      puVar34[8] = lVar25;
      iVar47 = *(int *)(local_530 + 0x1a0);
      *(uint *)(local_530 + 0x1a0) = iVar47 + 1U;
      if (*(uint *)(local_530 + 0x1a4) < iVar47 + 1U) {
        FUN_1447568fc(local_450,iVar47);
      }
      puVar92 = local_520;
      *(undefined8 **)(*(longlong *)(local_530 + 0x198) + (longlong)iVar47 * 8) = puVar34;
      *(int *)((longlong)puVar34 + 0x1c) = *(int *)(local_530 + 0x1a0) + -1;
      local_520[0x54] = puVar34;
      *(int *)(local_520 + 2) = iVar28;
      *(int *)((longlong)local_520 + 0x14) = *(int *)(lVar51 + 0x13704) + *(int *)(lVar51 + 0x13700)
      ;
      iVar47 = DAT_14c760450;
      *(int *)((longlong)local_520 + 0x1c) = iVar55 * iVar20 * DAT_14c760450;
      *(int *)(local_520 + 4) = iVar55;
      *(int *)((longlong)local_520 + 0x24) = iVar20;
      *(int *)(local_520 + 5) = iVar47;
      iVar20 = iVar28;
      if (DAT_14c760464 == 0) {
        iVar20 = DAT_14c760460;
      }
      *(int *)((longlong)local_520 + 0x2c) = iVar20;
      iVar20 = 0x1f;
      if (DAT_14c76044c != 0) {
        for (; DAT_14c76044c >> iVar20 == 0; iVar20 = iVar20 + -1) {
        }
      }
      if (DAT_14c76044c == 0) {
        iVar20 = 0;
      }
      *(int *)(local_520 + 6) = iVar20;
      *(int *)(local_520 + 0x41) = (int)local_490;
      *(uint *)((longlong)local_520 + 0x20c) = CONCAT22(local_518._2_2_,(undefined2)local_518);
      if ((int)local_548._0_4_ < iVar28) {
        iVar28 = local_548._0_4_;
      }
      *(int *)(local_520 + 0x42) = iVar28;
      *(undefined4 *)(local_520 + 0x4e) = 1;
      fVar61 = (float)(~-(uint)(DAT_14c76046c <= 0.0) & (uint)(DAT_14c76046c * 100000.0) |
                      -(uint)(DAT_14c76046c <= 0.0) & 0x484ccccd);
      if (fVar22 <= *(float *)(lVar51 + 0x13708)) {
        fVar22 = *(float *)(lVar51 + 0x13708);
      }
      if (fVar61 <= fVar22) {
        fVar22 = fVar61;
      }
      dVar74 = (double)*(float *)(lVar51 + 0x2170) + 9.5;
      dVar63 = (double)exp2((double)(iVar47 + -1) / 4.05);
      uVar56 = uStack_1d0;
      puVar27 = local_1d8;
      dVar63 = ((double)(fVar22 + 10.0) - dVar63 * dVar74) / ((double)(fVar22 + 10.0) - dVar74);
      *(float *)(puVar92 + 8) = (float)((1.0 - dVar63) / dVar74);
      *(float *)((longlong)puVar92 + 0x44) = (float)dVar63;
      *(undefined4 *)(puVar92 + 9) = 0x4081999a;
      if ((local_3a0 < uVar40) && (DAT_14c9e8370 == '\0')) {
        DAT_14c9e8370 = '\x01';
      }
      iVar28 = (int)uStack_1d0;
      lVar25 = (longlong)(int)uStack_1d0;
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c9ebba0) {
        FUN_144b3d300(&DAT_14c9ebba0);
        if (DAT_14c9ebba0 == -1) {
          _DAT_14c9ebb90 = 0;
          uRam000000014c9ebb98 = 0x3f80000000000000;
          _Init_thread_footer(&DAT_14c9ebba0);
        }
      }
      if (iVar28 == 0) {
        local_5f8 = (undefined8 *)&DAT_14c9ebb90;
        local_5e8 = CONCAT31(local_5e8._1_3_,1);
        local_5f0 = (float *)0x10;
        uVar56 = 1;
      }
      else {
        local_5f0 = (float *)(lVar25 << 4);
        local_5f8 = (undefined8 *)puVar27;
        local_5e8 = (uint)local_5e8._1_3_ << 8;
        uVar56 = uVar56 & 0xffffffff;
      }
      lVar25 = FUN_144942e63(local_530,L"ViewSpacePosAndRadiusData",0x10,uVar56);
      uVar40 = uStack_1e0;
      puVar27 = local_1e8;
      iVar28 = (int)uStack_1e0;
      lVar35 = (longlong)(int)uStack_1e0;
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c9ebba0) {
        FUN_144b3d300(&DAT_14c9ebba0);
        if (DAT_14c9ebba0 == -1) {
          _DAT_14c9ebb90 = 0;
          uRam000000014c9ebb98 = 0x3f80000000000000;
          _Init_thread_footer(&DAT_14c9ebba0);
        }
      }
      if (iVar28 == 0) {
        local_5f8 = (undefined8 *)&DAT_14c9ebb90;
        local_5e8 = CONCAT31(local_5e8._1_3_,1);
        local_5f0 = (float *)0x10;
        uVar40 = 1;
      }
      else {
        local_5f0 = (float *)(lVar35 << 4);
        local_5f8 = (undefined8 *)puVar27;
        local_5e8 = (uint)local_5e8._1_3_ << 8;
        uVar40 = uVar40 & 0xffffffff;
      }
      lVar35 = FUN_144942e63(local_530,L"ViewSpaceDirAndPreprocAngleData",0x10,uVar40);
      uVar40 = uStack_1f0;
      puVar27 = local_1f8;
      iVar28 = (int)uStack_1f0;
      lVar37 = (longlong)(int)uStack_1f0;
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c9ebba0) {
        FUN_144b3d300(&DAT_14c9ebba0);
        if (DAT_14c9ebba0 == -1) {
          _DAT_14c9ebb90 = 0;
          uRam000000014c9ebb98 = 0x3f80000000000000;
          _Init_thread_footer(&DAT_14c9ebba0);
        }
      }
      lVar48 = local_530;
      if (iVar28 == 0) {
        local_5f8 = (undefined8 *)&DAT_14c9ebb90;
        local_5e8 = CONCAT31(local_5e8._1_3_,1);
        local_5f0 = (float *)0x10;
        uVar40 = 1;
      }
      else {
        local_5f0 = (float *)(lVar37 << 4);
        local_5f8 = (undefined8 *)puVar27;
        local_5e8 = (uint)local_5e8._1_3_ << 8;
        uVar40 = uVar40 & 0xffffffff;
      }
      lVar37 = FUN_144942e63(local_530,L"ViewSpaceRectPlanesData",0x10,uVar40);
      plVar4 = local_4b8;
      cVar18 = *(char *)(lVar25 + 0x68);
      puVar41 = (undefined8 *)(*(longlong *)(lVar48 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar34 = puVar41 + 9;
      if (*(undefined8 **)(lVar48 + 0x78) < puVar34) {
        FUN_140023dd8(local_4b8,0x50);
        puVar41 = (undefined8 *)(*plVar4 + 7U & 0xfffffffffffffff8);
        puVar34 = puVar41 + 9;
        lVar48 = local_530;
      }
      *(undefined8 **)(lVar48 + 0x70) = puVar34;
      puVar41[1] = *(undefined8 *)(lVar25 + 8);
      puVar41[2] = 0;
      *(undefined1 *)(puVar41 + 3) = 3;
      *(undefined8 *)((longlong)puVar41 + 0x1c) = 0xffffffffffffffff;
      *puVar41 = &PTR_FUN_14a1fb168;
      *(byte *)(puVar41 + 5) = cVar18 >> 7 & 0x1c;
      *(undefined8 *)((longlong)puVar41 + 0x2c) = 0xffffffff00000000;
      puVar41[7] = 0;
      puVar41[8] = lVar25;
      iVar28 = *(int *)(lVar48 + 0x1a0);
      *(uint *)(lVar48 + 0x1a0) = iVar28 + 1U;
      if (*(uint *)(lVar48 + 0x1a4) < iVar28 + 1U) {
        FUN_1447568fc(local_450,iVar28);
        lVar48 = local_530;
      }
      plVar4 = local_4b8;
      *(undefined8 **)(*(longlong *)(lVar48 + 0x198) + (longlong)iVar28 * 8) = puVar41;
      *(int *)((longlong)puVar41 + 0x1c) = *(int *)(lVar48 + 0x1a0) + -1;
      cVar18 = *(char *)(lVar35 + 0x68);
      puVar58 = (undefined8 *)(*(longlong *)(lVar48 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar34 = puVar58 + 9;
      if (*(undefined8 **)(lVar48 + 0x78) < puVar34) {
        FUN_140023dd8(local_4b8,0x50);
        puVar58 = (undefined8 *)(*plVar4 + 7U & 0xfffffffffffffff8);
        puVar34 = puVar58 + 9;
        lVar48 = local_530;
      }
      *(undefined8 **)(lVar48 + 0x70) = puVar34;
      puVar58[1] = *(undefined8 *)(lVar35 + 8);
      puVar58[2] = 0;
      *(undefined1 *)(puVar58 + 3) = 3;
      *(undefined8 *)((longlong)puVar58 + 0x1c) = 0xffffffffffffffff;
      *puVar58 = &PTR_FUN_14a1fb168;
      *(byte *)(puVar58 + 5) = cVar18 >> 7 & 0x1c;
      *(undefined8 *)((longlong)puVar58 + 0x2c) = 0xffffffff00000000;
      puVar58[7] = 0;
      puVar58[8] = lVar35;
      iVar28 = *(int *)(lVar48 + 0x1a0);
      *(uint *)(lVar48 + 0x1a0) = iVar28 + 1U;
      if (*(uint *)(lVar48 + 0x1a4) < iVar28 + 1U) {
        FUN_1447568fc(local_450,iVar28);
        lVar48 = local_530;
      }
      plVar4 = local_4b8;
      *(undefined8 **)(*(longlong *)(lVar48 + 0x198) + (longlong)iVar28 * 8) = puVar58;
      *(int *)((longlong)puVar58 + 0x1c) = *(int *)(lVar48 + 0x1a0) + -1;
      cVar18 = *(char *)(lVar37 + 0x68);
      puVar31 = (undefined8 *)(*(longlong *)(lVar48 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar34 = puVar31 + 9;
      if (*(undefined8 **)(lVar48 + 0x78) < puVar34) {
        FUN_140023dd8(local_4b8,0x50);
        puVar31 = (undefined8 *)(*plVar4 + 7U & 0xfffffffffffffff8);
        puVar34 = puVar31 + 9;
        lVar48 = local_530;
      }
      *(undefined8 **)(lVar48 + 0x70) = puVar34;
      puVar31[1] = *(undefined8 *)(lVar37 + 8);
      puVar31[2] = 0;
      *(undefined1 *)(puVar31 + 3) = 3;
      *(undefined8 *)((longlong)puVar31 + 0x1c) = 0xffffffffffffffff;
      *puVar31 = &PTR_FUN_14a1fb168;
      *(byte *)(puVar31 + 5) = cVar18 >> 7 & 0x1c;
      *(undefined8 *)((longlong)puVar31 + 0x2c) = 0xffffffff00000000;
      puVar31[7] = 0;
      puVar31[8] = lVar37;
      iVar28 = *(int *)(lVar48 + 0x1a0);
      *(uint *)(lVar48 + 0x1a0) = iVar28 + 1U;
      if (*(uint *)(lVar48 + 0x1a4) < iVar28 + 1U) {
        FUN_1447568fc(local_450,iVar28);
        lVar48 = local_530;
      }
      *(undefined8 **)(*(longlong *)(lVar48 + 0x198) + (longlong)iVar28 * 8) = puVar31;
      *(int *)((longlong)puVar31 + 0x1c) = *(int *)(lVar48 + 0x1a0) + -1;
      puVar27 = (undefined *)(*(longlong *)(lVar51 + 8) + 0x1b8);
      if (*(char *)(*(longlong *)(lVar51 + 8) + 0xd0) == '\0') {
        puVar27 = &DAT_14cb05410;
      }
      iVar20 = ((int)(DAT_14c76044c + (int)*(undefined8 *)(puVar27 + 0x10) + -1) /
               (int)DAT_14c76044c) *
               ((int)((int)((ulonglong)*(undefined8 *)(puVar27 + 0x10) >> 0x20) + DAT_14c76044c + -1
                     ) / (int)DAT_14c76044c) * DAT_14c760450;
      iVar28 = 0;
      auVar67 = stack0xfffffffffffffabc;
      auVar10._12_4_ = 0;
      auVar10._0_12_ = stack0xfffffffffffffabc;
      _local_548 = auVar10 << 0x20;
      if ((((*(byte *)(**(longlong **)(local_528 + 0xa0) + 0x2954) & 1) != 0) &&
          (auVar11._12_4_ = 0, auVar11._0_12_ = auVar67, _local_548 = auVar11 << 0x20,
          *(int *)(DAT_14ca046e8 + 4) != 0)) &&
         (auVar12._12_4_ = 0, auVar12._0_12_ = auVar67, _local_548 = auVar12 << 0x20,
         *(int *)(local_528 + 0xe4) < 0)) {
        piVar38 = (int *)(*(longlong *)(local_528 + 0xd8) + 8);
        if (*(longlong *)(local_528 + 0xd8) == 0) {
          piVar38 = &DAT_14c760db4;
        }
        auVar13._12_4_ = 0;
        auVar13._0_12_ = auVar67;
        _local_548 = auVar13 << 0x20;
        if ((3 < (int)(&DAT_14ca814b8)
                      [(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*piVar38 * 2) * 0xf]) &&
           (auVar14._12_4_ = 0, auVar14._0_12_ = auVar67, _local_548 = auVar14 << 0x20,
           ((&DAT_14ca814cd)[(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*piVar38 * 2) * 0x3c]
           & 3) != 0)) {
          cVar18 = FUN_1472390ef(local_458);
          if (cVar18 == '\0') {
            cVar18 = FUN_1472390cb(local_458);
            auVar15._12_4_ = 0;
            auVar15._0_12_ = stack0xfffffffffffffabc;
            _local_548 = auVar15 << 0x20;
            if (cVar18 == '\0') goto LAB_142ce5320;
          }
          local_548._0_4_ = 3;
        }
      }
LAB_142ce5320:
      local_280 = DAT_14c846338;
      local_288 = DAT_14c846330;
      cVar18 = FUN_141786b06(local_528);
      auVar64._8_8_ = extraout_XMM0_Qb;
      auVar64._0_8_ = extraout_XMM0_Qa;
      auVar67 = auVar64._4_12_;
      lVar25 = 0;
      if (cVar18 != '\0') {
        iVar28 = 0;
        if ((*(byte *)(**(longlong **)(local_528 + 0xa0) + 0x2954) & 1) != 0) {
          if ((*(int *)(DAT_14ca046e8 + 4) != 0) && (*(int *)(local_528 + 0xe4) < 0)) {
            piVar38 = (int *)(*(longlong *)(local_528 + 0xd8) + 8);
            if (*(longlong *)(local_528 + 0xd8) == 0) {
              piVar38 = &DAT_14c760db4;
            }
            if ((3 < (int)(&DAT_14ca814b8)
                          [(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*piVar38 * 2) * 0xf])
               && (((&DAT_14ca814cd)
                    [(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*piVar38 * 2) * 0x3c] & 3) !=
                   0)) {
              cVar18 = FUN_1472390ef(local_458);
              lVar51 = local_4b0;
              puVar92 = local_520;
              iVar28 = 0;
              if (cVar18 == '\0') {
                cVar18 = FUN_1472390cb(local_458);
                if (cVar18 == '\0') goto LAB_142ce536c;
              }
              iVar28 = (uint)(*(int *)(DAT_14ca04970 + 4) != 0) * 3;
              goto LAB_142ce536c;
            }
          }
          iVar28 = 0;
          puVar92 = local_520;
          lVar51 = local_4b0;
        }
LAB_142ce536c:
        iVar28 = iVar28 + 1;
        iVar55 = DAT_14c760ae0;
        if (DAT_14c760ae0 < 2) {
          iVar55 = 1;
        }
        local_548._0_4_ = iVar55 * iVar28;
        auVar65._0_8_ = FUN_140551d73(lVar51,&local_198);
        auVar65._8_8_ = extraout_XMM0_Qb_00;
        auVar67 = auVar65._4_12_;
        local_280 = uStack_150;
        local_288 = local_158;
        lVar25 = (longlong)fStack_180;
      }
      local_4d8 = puVar92 + 8;
      iVar20 = iVar20 * 2;
      local_518._0_2_ = (undefined2)lVar25;
      local_518._2_2_ = (ushort)((ulonglong)lVar25 >> 0x10);
      uStack_514 = (undefined4)((ulonglong)lVar25 >> 0x20);
      if ((*(char *)(DAT_14c9e8168 + 1) == '\x01') && (*(int *)(DAT_14c9e8180 + 4) < *local_408)) {
        iVar55 = *(int *)(DAT_14c9e8198 + 4);
        if (3 < iVar55) {
          iVar55 = 4;
        }
        if (iVar55 < 2) {
          iVar55 = 1;
        }
        auVar66._0_4_ = (float)iVar55;
        auVar66._4_12_ = auVar67;
        fVar61 = (float)exp2f(auVar66._0_8_);
        iVar47 = (int)(longlong)fVar61;
        iVar55 = iVar47 + -1;
        local_2cc = (*(int *)(puVar92 + 5) + iVar55) / iVar47;
        local_2d0 = (*(int *)((longlong)puVar92 + 0x24) + iVar55) / iVar47;
        local_2d4 = (iVar55 + *(int *)(puVar92 + 4)) / iVar47;
        local_598 = DAT_14c76045c != 0 & (byte)local_500;
        local_5a8 = *(undefined4 *)(puVar92 + 0x42);
        local_5b8 = *(undefined4 *)(puVar92 + 2);
        local_5b0 = *(undefined4 *)((longlong)puVar92 + 0x14);
        local_2b0 = local_280;
        local_2b8 = local_288;
        local_2c0 = *(undefined4 *)(local_4d8 + 1);
        local_2c8 = *local_4d8;
        uVar21 = DAT_14c76044c * iVar47;
        iVar55 = 0x1f;
        if (uVar21 != 0) {
          for (; uVar21 >> iVar55 == 0; iVar55 = iVar55 + -1) {
          }
        }
        if (uVar21 == 0) {
          iVar55 = 0;
        }
        local_568 = 0;
        uStack_560 = 0;
        local_5a0 = (undefined1)local_4f0;
        local_5c0 = CONCAT22(local_518._2_2_,(undefined2)local_518);
        local_5c8 = &local_2b8;
        local_5d8 = local_548._0_4_;
        local_5e0 = &local_2c8;
        local_4e8._0_8_ = (longlong)fVar61;
        local_5f0 = (float *)CONCAT44(local_5f0._4_4_,iVar47);
        local_5f8 = (undefined8 *)CONCAT44(local_5f8._4_4_,iVar55);
        local_558 = 1;
        local_570 = 0;
        local_578 = 1;
        local_5e8 = iVar20;
        local_5d0 = iVar28;
        local_590 = puVar41;
        local_588 = puVar58;
        local_580 = puVar31;
        local_4c8._0_4_ = (float)local_5b8;
        FUN_142cdf92b(&local_198,local_530,lVar51);
        local_478._0_4_ = (float)local_198;
        local_478._4_4_ = local_198._4_4_;
        local_4c8._0_4_ = (float)uStack_190;
        local_4c8._4_4_ = uStack_190._4_4_;
      }
      else {
        local_4e8._0_8_ = 1;
        local_4c8._0_4_ = 0.0;
        local_4c8._4_4_ = 0;
        local_478._0_4_ = 0.0;
        local_478._4_4_ = 0.0;
      }
      iVar55 = *(int *)(DAT_14c9e8150 + 4);
      local_4a8 = (uint *)CONCAT44(local_4a8._4_4_,iVar20);
      local_578 = iVar55 == 1 || DAT_14ca84f14 < 0x21 && iVar55 == 2;
      local_570 = iVar55 != 1 && (DAT_14ca84f14 < 0x21 && iVar55 == 2);
      local_598 = (byte)local_500 & DAT_14c76045c != 0;
      local_5a8 = *(undefined4 *)(puVar92 + 0x42);
      local_5b8 = *(undefined4 *)(puVar92 + 2);
      local_5b0 = *(undefined4 *)((longlong)puVar92 + 0x14);
      local_2d8 = local_280;
      local_2e0 = local_288;
      local_2f0 = *local_4d8;
      local_2e8 = *(undefined4 *)(local_4d8 + 1);
      local_300 = puVar92[4];
      local_2f8 = *(undefined4 *)(puVar92 + 5);
      local_558 = local_4e8._0_4_;
      uStack_560 = CONCAT44(local_478._4_4_,(float)local_478);
      local_568 = CONCAT44(local_4c8._4_4_,(float)local_4c8);
      local_5c0 = CONCAT22(local_518._2_2_,(undefined2)local_518);
      local_5a0 = (undefined1)local_4f0;
      local_5c8 = &local_2e0;
      local_5d8 = local_548._0_4_;
      local_5e0 = &local_2f0;
      local_5f8 = (undefined8 *)CONCAT44(local_5f8._4_4_,*(undefined4 *)(puVar92 + 6));
      local_5f0 = (float *)CONCAT44(local_5f0._4_4_,1);
      local_5e8 = iVar20;
      local_5d0 = iVar28;
      local_590 = puVar41;
      local_588 = puVar58;
      local_580 = puVar31;
      FUN_142cdf92b(&local_198,local_530,lVar51,&local_300);
      puVar92[0x56] = CONCAT44(local_198._4_4_,(float)local_198);
      puVar92[0x57] = CONCAT44(local_198._4_4_,(float)local_198);
      puVar92[0x55] = CONCAT44(uStack_190._4_4_,(float)uStack_190);
      local_2a8 = local_408;
      FUN_144a12b9e();
      local_1a0 = DAT_14c9e81c8;
      lVar25 = FUN_14068aa6a(local_3a8,local_4b8,&local_2a8,&local_1a0);
      *(longlong *)(lVar51 + 0x13780) = lVar25;
      *(undefined8 *)(lVar51 + 0x13778) = *(undefined8 *)(lVar25 + 0x40);
      FUN_1402ec508(&local_1f8);
      FUN_1402ec508(&local_1e8);
      FUN_1402ec508(&local_1d8);
      FUN_140020148(&local_1c8);
      if (local_1b8 != (undefined *)0x0) {
        piVar38 = (int *)(local_1b8 + (-8 - (ulonglong)*(uint *)(local_1b8 + -8)));
        LOCK();
        *piVar38 = *piVar38 + -1;
        UNLOCK();
        if (*piVar38 == 0) {
          if (*(longlong *)(piVar38 + 0x10) - (longlong)piVar38 == 0x10000) {
            lVar25 = DAT_14c872d30;
            if (DAT_14c872d30 == 0) {
              lVar25 = FUN_145bdc178();
            }
            FUN_140028df4(lVar25,piVar38);
          }
          else {
            FUN_144705e74(piVar38);
          }
        }
      }
      lVar25 = local_400 + 1;
    } while (lVar25 < *(int *)(local_528 + 0x3f0));
  }
  if ((local_f0 ^ (ulonglong)auStack_618) == DAT_14c707940) {
    return local_3d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ce5de4 FUN_142ce5de4 body=1223 status=ok
// SIG undefined FUN_142ce5de4(void)

undefined8 *
FUN_142ce5de4(longlong param_1,undefined8 *param_2,undefined8 param_3,char param_4,
             undefined8 param_5)

{
  ushort uVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  undefined1 uVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  byte bVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  byte bVar19;
  longlong lVar20;
  byte bVar21;
  bool bVar22;
  bool bVar23;
  
  *param_2 = 0;
  if (param_4 == '\0') {
    lVar10 = FUN_14068a8e1(param_3,*(undefined2 *)(param_1 + 0x8a8));
    iVar15 = *(int *)(param_1 + 0x3f0);
    if ((longlong)iVar15 == 0) {
      return param_2;
    }
    lVar20 = *(longlong *)(param_1 + 1000);
    lVar17 = 0;
    do {
      *(longlong *)(lVar20 + 0x13780 + lVar17) = lVar10;
      *(undefined8 *)(lVar20 + 0x13778 + lVar17) = *(undefined8 *)(lVar10 + 0x40);
      lVar17 = lVar17 + 0x13c10;
    } while ((longlong)iVar15 * 0x13c10 - lVar17 != 0);
    return param_2;
  }
  if (*(int *)(param_1 + 0x3f0) < 1) {
    bVar19 = 0;
    bVar2 = false;
    bVar21 = 0;
  }
  else {
    lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    lVar20 = 0;
    bVar21 = 0;
    bVar2 = false;
    bVar19 = 0;
    do {
      lVar17 = *(longlong *)(param_1 + 1000) + lVar20 * 0x13c10;
      bVar4 = 1;
      if ((*(byte *)(*(longlong *)(param_1 + 1000) + 0x125b1 + lVar20 * 0x13c10) & 1) == 0) {
        cVar3 = FUN_141786b06(param_1);
        bVar4 = 1;
        if ((cVar3 == '\0') && ((*(byte *)(lVar17 + 0x125b1) & 0x40) == 0)) {
          cVar3 = FUN_141785f30(*(undefined8 *)(param_1 + 8),param_1 + 0xe0);
          bVar4 = 1;
          if ((cVar3 == '\0') && (DAT_14c9e80c8 < 1)) {
            bVar4 = FUN_1400838d1(*(undefined8 *)(param_1 + 8),param_1 + 0x98);
          }
        }
      }
      lVar8 = (longlong)*(int *)(param_1 + 0x410);
      lVar18 = -1;
      if (0 < lVar8) {
        lVar16 = 0;
        do {
          lVar18 = lVar16;
          if (*(longlong *)(*(longlong *)(param_1 + 0x408) + lVar16 * 8) == lVar17) break;
          lVar16 = lVar16 + 1;
          lVar18 = -1;
        } while (lVar8 != lVar16);
      }
      lVar16 = *(longlong *)(param_1 + 0xe58);
      if (*(longlong *)(param_1 + 0xe58) == 0) {
        lVar16 = param_1 + 0xe38;
      }
      bVar22 = true;
      if (*(int *)(lVar16 + (longlong)(int)lVar18 * 0x20) != 2) {
        iVar15 = -1;
        if (0 < *(int *)(param_1 + 0x410)) {
          lVar18 = 0;
          do {
            if (*(longlong *)(*(longlong *)(param_1 + 0x408) + lVar18 * 8) == lVar17) {
              iVar15 = (int)lVar18;
              break;
            }
            lVar18 = lVar18 + 1;
          } while (lVar8 != lVar18);
        }
        bVar22 = *(int *)(lVar16 + 0xc + (longlong)iVar15 * 0x20) == 2;
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14ca97070) && (FUN_144b3d300(&DAT_14ca97070), DAT_14ca97070 == -1))
      {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar9 = (longlong *)
                 (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Raytracing.Enable",1);
        if (plVar9 == (longlong *)0x0) {
          DAT_14ca97068 = 0;
        }
        else {
          DAT_14ca97068 = (**(code **)(*plVar9 + 0x68))(plVar9);
        }
        _Init_thread_footer(&DAT_14ca97070);
      }
      lVar18 = DAT_14ca97068;
      bVar23 = true;
      cVar3 = DAT_14ca96da8;
      if (DAT_14ca97068 != 0 && DAT_14ca96da8 == '\x02') {
        iVar15 = *(int *)(lVar10 + 0xc60);
        if (iVar15 == 0x40000002) {
          cVar3 = '\x02';
          uVar13 = 0;
        }
        else {
          bVar23 = true;
          cVar3 = '\x02';
          if ((DAT_14c86a9f8 == '\x01') && (iVar15 != 2)) {
            if (iVar15 == 1) {
              DVar6 = FUN_140ad26c0();
              DVar7 = GetCurrentThreadId();
              bVar23 = DVar6 == DVar7;
              cVar3 = DAT_14ca96da8;
            }
            else {
              bVar23 = false;
            }
          }
          uVar13 = (ulonglong)(bVar23 ^ 1);
        }
        bVar23 = *(int *)(lVar18 + uVar13 * 4) != 0;
      }
      bVar12 = 0;
      if ((bVar23) && (bVar12 = 0, cVar3 != '\0')) {
        if (*(char *)(lVar17 + 0x3098) == '\x01') {
          bVar12 = 1;
          if (*(char *)(lVar17 + 0x23e8) == '\x01') {
            bVar12 = *(byte *)(lVar17 + 0x23ea);
          }
        }
        else {
          bVar12 = 0;
        }
      }
      bVar19 = bVar19 | bVar12;
      bVar21 = bVar21 | bVar4;
      bVar2 = (bool)(bVar2 | bVar22);
      lVar20 = lVar20 + 1;
    } while (lVar20 < *(int *)(param_1 + 0x3f0));
  }
  if (DAT_14c760468 != 0) {
    uVar1 = *(ushort *)(param_1 + 0x8a8);
    puVar14 = &DAT_14ca96aa8;
    if (DAT_14ca96af8 != (undefined4 *)0x0) {
      puVar14 = DAT_14ca96af8;
    }
    if (((uint)puVar14[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) != 0) {
      bVar21 = 2 < (int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] | bVar21;
    }
    uVar5 = 1;
    if (((bVar21 | bVar19) & 1) != 0) goto LAB_142ce61ad;
    if (DAT_14c9b6948 != 0) {
      bVar2 = (bool)(2 < *(int *)(*(longlong *)(param_1 + 8) + 8) | bVar2);
    }
    if ((bVar2) || (*(char *)(param_1 + 0x7b4) != '\0')) goto LAB_142ce61ad;
    if ((*(byte *)(**(longlong **)(param_1 + 0xa0) + 0x2954) & 1) != 0) {
      uVar5 = 0;
      if ((*(int *)(DAT_14ca046e8 + 4) == 0) || (-1 < *(int *)(param_1 + 0xe4))) goto LAB_142ce61ad;
      piVar11 = &DAT_14c760db4;
      if (*(longlong *)(param_1 + 0xd8) != 0) {
        piVar11 = (int *)(*(longlong *)(param_1 + 0xd8) + 8);
      }
      if ((3 < (int)(&DAT_14ca814b8)
                    [(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*piVar11 * 2) * 0xf]) &&
         (((&DAT_14ca814cd)[(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*piVar11 * 2) * 0x3c]
          & 3) != 0)) {
        cVar3 = FUN_1472390ef(param_1 + 0x98);
        uVar5 = 1;
        if (cVar3 == '\0') {
          uVar5 = FUN_1472390cb(param_1 + 0x98);
        }
        goto LAB_142ce61ad;
      }
    }
  }
  uVar5 = 0;
LAB_142ce61ad:
  *(undefined1 *)(param_1 + 0xe98) = uVar5;
  FUN_142ce0dbe(param_1,param_2,param_3,uVar5,param_5);
  return param_2;
}



// FUNCTION 142ce62ac FUN_142ce62ac body=2757 status=ok
// SIG undefined FUN_142ce62ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ce62ac(longlong param_1,longlong param_2,longlong param_3,undefined8 *param_4,
                  longlong *param_5)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  undefined8 *puVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  bool bVar24;
  bool bVar25;
  undefined1 auStack_1e8 [32];
  wchar_t *local_1c8;
  undefined1 local_1c0 [16];
  char *local_1b0;
  uint local_1a8;
  undefined4 local_1a0;
  undefined1 *local_198;
  undefined1 local_190;
  undefined8 local_188;
  undefined1 local_180;
  undefined4 local_170;
  uint local_16c;
  longlong local_168;
  longlong local_160;
  ulonglong local_158;
  wchar_t *local_150;
  wchar_t *local_148;
  longlong local_140;
  uint *local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 *local_120;
  undefined8 local_118;
  undefined4 local_110;
  wchar_t *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  uint local_dc;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined2 local_c8;
  undefined1 local_c6;
  undefined2 local_c5;
  undefined1 local_c3;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  uint local_a4;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined1 local_90;
  undefined1 local_8f;
  undefined1 local_8e;
  undefined2 local_8d;
  undefined1 local_8b;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  if ((longlong)*(int *)(param_1 + 0x3f0) == 0) {
    local_170 = 0;
  }
  else {
    lVar7 = param_3;
    lVar23 = 0;
    do {
      cVar3 = *(char *)(lVar23 + *(longlong *)(param_1 + 1000) + 0x11a08);
      local_170 = (undefined4)CONCAT71((int7)((ulonglong)lVar7 >> 8),cVar3);
      if (cVar3 != '\0') break;
      lVar7 = lVar23 + 0x13c10;
      bVar24 = (longlong)*(int *)(param_1 + 0x3f0) * 0x13c10 + -0x13c10 != lVar23;
      lVar23 = lVar7;
    } while (bVar24);
  }
  local_158 = *(ulonglong *)(param_3 + 0x1c0);
  lVar7 = *(longlong *)(param_1 + 8);
  iVar4 = *(int *)(lVar7 + 0x3578);
  local_168 = param_3;
  local_120 = param_4;
  if (iVar4 == 0) {
    uVar21 = 1;
    uVar17 = 0;
    iVar18 = 0;
    iVar11 = 0;
  }
  else {
    puVar9 = *(uint **)(lVar7 + 0x3570);
    if (*(uint **)(lVar7 + 0x3570) == (uint *)0x0) {
      puVar9 = (uint *)(lVar7 + 0x3560);
    }
    uVar19 = *puVar9;
    if (uVar19 == 0) {
      iVar11 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar11 = iVar4 + -1;
      }
      uVar17 = 0;
      uVar21 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar21 = uVar17;
      }
      iVar18 = 0;
      do {
        if (uVar21 == uVar17) goto LAB_142ce6c72;
        iVar18 = iVar18 + 0x20;
        uVar19 = puVar9[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar19 == 0);
    }
    else {
      uVar17 = 0;
      iVar18 = 0;
    }
    uVar21 = (ulonglong)(-uVar19 & uVar19);
    uVar1 = uVar21 * 2 + 1;
    lVar23 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    iVar11 = (iVar18 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar11) {
      iVar11 = iVar4;
    }
  }
  if (iVar11 < iVar4) {
    local_128 = param_1 + 1000;
    puVar9 = (uint *)(lVar7 + 0x3560);
    if (*(uint **)(lVar7 + 0x3570) != (uint *)0x0) {
      puVar9 = *(uint **)(lVar7 + 0x3570);
    }
    iVar14 = iVar4 + 0x1e;
    if (-1 < iVar4 + -1) {
      iVar14 = iVar4 + -1;
    }
    iVar14 = iVar14 >> 5;
    uVar19 = 0xffffffff;
    bVar24 = false;
    do {
      lVar23 = *(longlong *)(*(longlong *)(lVar7 + 0x3550) + 0x30 + (longlong)iVar11 * 0x40);
      lVar20 = (longlong)*(int *)(lVar23 + 0x34) * 0x68;
      bVar25 = true;
      if ((*(int *)(*(longlong *)(param_1 + 0x4d8) + 0x18 + lVar20) < 1) &&
         (*(int *)(lVar20 + *(longlong *)(param_1 + 0x4d8) + 0x28) < 1)) {
        bVar25 = *(longlong *)(*(longlong *)(lVar23 + 0x28) + 0x1c0) != 0;
      }
      bVar24 = (bool)(bVar24 | bVar25);
      uVar19 = uVar19 & ~(uint)uVar21;
      iVar11 = (int)uVar17;
      lVar23 = (longlong)iVar11;
      uVar12 = puVar9[lVar23] & uVar19;
      if (uVar12 == 0) {
        iVar13 = iVar14;
        if (iVar14 < iVar11) {
          iVar13 = iVar11;
        }
        if (iVar14 <= iVar11) break;
        lVar20 = 0;
        while( true ) {
          iVar18 = iVar18 + 0x20;
          uVar12 = puVar9[lVar23 + lVar20 + 1];
          if (uVar12 != 0) break;
          lVar20 = lVar20 + 1;
          if (iVar13 - lVar23 == lVar20) goto LAB_142ce64f6;
        }
        uVar17 = (ulonglong)(iVar11 + (int)lVar20 + 1);
        uVar19 = 0xffffffff;
      }
      uVar21 = (ulonglong)(-uVar12 & uVar12);
      uVar1 = uVar21 * 2 + 1;
      lVar23 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      iVar11 = (iVar18 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
    } while (iVar11 < iVar4);
LAB_142ce64f6:
    local_160 = param_1;
    local_140 = param_2;
    if (bVar24) {
      local_78._0_4_ = DAT_14ca84d40;
      local_88._0_8_ = _DAT_14ca84d30;
      local_88._8_8_ = uRam000000014ca84d38;
      uVar5 = *(undefined8 *)(param_3 + 0x20);
      uVar19 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
      local_8f = *(undefined1 *)(local_158 + 0x91);
      local_8e = 0;
      local_c0 = 9;
      local_8d = 2;
      local_94 = 0x10001;
      local_90 = 1;
      local_b8 = _DAT_14ca84d30;
      uStack_b0 = uRam000000014ca84d38;
      local_a8 = DAT_14ca84d40;
      local_a0 = 0;
      local_8b = 0xff;
      local_1c0._0_8_ = DAT_14ca4af10;
      local_1c8 = L"ShadowMaskTexture";
      local_a4 = uVar19;
      local_9c = uVar5;
      FUN_14004160a(&local_108,param_2,&local_c0,L"ShadowMaskTextureMS");
      pwVar6 = local_108;
      local_130 = local_100;
      if ((char)local_170 == '\0') {
        local_150 = (wchar_t *)0x0;
      }
      else {
        local_c6 = 0;
        local_f8 = 9;
        local_c5 = 2;
        local_cc = 0x10001;
        local_c8 = 0x101;
        local_f0 = local_88._0_8_;
        uStack_e8 = local_88._8_8_;
        local_e0 = local_78._0_4_;
        local_d8 = 0;
        local_c3 = 0xff;
        local_1c0._0_8_ = DAT_14ca4af10;
        local_1c8 = L"ShadowMaskSubPixelTexture";
        local_dc = uVar19;
        local_d4 = uVar5;
        FUN_14004160a(&local_108,param_2,&local_f8,L"ShadowMaskSubPixelTextureMS");
        local_78 = (undefined1  [16])0x0;
        local_88 = (undefined1  [16])0x0;
        local_68 = 0;
        local_60 = 1;
        local_58 = 1;
        FUN_1401a4871(param_2,pwVar6,local_88);
        local_150 = local_108;
      }
      local_78 = (undefined1  [16])0x0;
      local_88 = (undefined1  [16])0x0;
      local_68 = 0;
      local_60 = 1;
      local_58 = 1;
      FUN_1401a4871(param_2,local_108);
      lVar7 = *(longlong *)(param_1 + 8);
      iVar4 = *(int *)(lVar7 + 0x3578);
      local_148 = pwVar6;
      if (iVar4 == 0) {
        uVar21 = 1;
        uVar17 = 0;
        iVar11 = 0;
        iVar18 = 0;
      }
      else {
        puVar9 = *(uint **)(lVar7 + 0x3570);
        if (*(uint **)(lVar7 + 0x3570) == (uint *)0x0) {
          puVar9 = (uint *)(lVar7 + 0x3560);
        }
        uVar19 = *puVar9;
        if (uVar19 == 0) {
          iVar11 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar11 = iVar4 + -1;
          }
          uVar17 = 0;
          uVar21 = (ulonglong)(uint)(iVar11 >> 5);
          if (iVar11 >> 5 < 1) {
            uVar21 = uVar17;
          }
          iVar11 = 0;
          do {
            if (uVar21 == uVar17) goto LAB_142ce6a33;
            iVar11 = iVar11 + 0x20;
            uVar19 = puVar9[uVar17 + 1];
            uVar17 = uVar17 + 1;
          } while (uVar19 == 0);
        }
        else {
          uVar17 = 0;
          iVar11 = 0;
        }
        uVar21 = (ulonglong)(-uVar19 & uVar19);
        uVar1 = uVar21 * 2 + 1;
        lVar23 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar23 == 0; lVar23 = lVar23 + -1) {
          }
        }
        iVar18 = (iVar11 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar18) {
          iVar18 = iVar4;
        }
      }
      if (iVar18 < iVar4) {
        uVar19 = 0xffffffff;
        local_138 = (uint *)(lVar7 + 0x3560);
        do {
          pwVar6 = local_148;
          local_160 = CONCAT44(local_160._4_4_,iVar11);
          lVar23 = *(longlong *)(*(longlong *)(lVar7 + 0x3550) + 0x30 + (longlong)iVar18 * 0x40);
          lVar20 = *(longlong *)(param_1 + 0x4d8);
          lVar22 = (longlong)*(int *)(lVar23 + 0x34) * 0x68;
          local_16c = uVar19;
          local_158 = uVar17;
          if (0 < *(int *)(lVar20 + 0x18 + lVar22)) {
            local_1c8 = local_150;
            local_1c0[8] = 1;
            local_1c0._0_8_ = lVar23;
            FUN_143058204(param_1,param_2,local_168,local_148);
            if ((char)local_170 != '\0') {
              local_88._0_12_ = *(undefined1 (*) [12])(param_1 + 0x4d8);
              local_1c0._0_8_ = pwVar6;
              local_1c8 = (wchar_t *)CONCAT71(local_1c8._1_7_,1);
              FUN_14717f20e(param_2,local_128,lVar23,local_88);
            }
          }
          lVar20 = lVar20 + lVar22;
          local_118 = *(undefined8 *)(lVar20 + 0x20);
          local_110 = *(undefined4 *)(lVar20 + 0x28);
          local_1c8 = (wchar_t *)&local_118;
          local_1c0[0] = 1;
          FUN_142b80e4e(param_1,param_2,lVar23,pwVar6);
          puVar9 = local_138;
          uVar17 = local_158;
          uVar19 = local_16c;
          lVar20 = *(longlong *)(lVar23 + 0x28);
          if ((*(byte *)(lVar20 + 0x1d0) & 8) == 0) {
            uVar12 = *(uint *)(lVar23 + 0xe0);
          }
          else {
            uVar12 = *(uint *)(lVar20 + 400);
          }
          if (((-1 < (int)uVar12) && (uVar12 < 4)) && ((*(byte *)(param_1 + 0xea) & 8) != 0)) {
            local_1b0 = (char *)CONCAT71(local_1b0._1_7_,1);
            local_1c0[8] = 1;
            local_1c0._0_8_ = *(undefined8 *)(lVar20 + 0x1c0);
            local_1c8 = local_148;
            local_1a8 = local_1a8 & 0xffffff00;
            FUN_142cdee44(param_1,param_2,local_168,lVar23);
          }
          uVar19 = uVar19 & ~(uint)uVar21;
          puVar10 = *(uint **)(lVar7 + 0x3570);
          if (*(uint **)(lVar7 + 0x3570) == (uint *)0x0) {
            puVar10 = puVar9;
          }
          iVar4 = *(int *)(lVar7 + 0x3578);
          iVar18 = (int)uVar17;
          lVar23 = (longlong)iVar18;
          uVar12 = puVar10[lVar23] & uVar19;
          iVar11 = (int)local_160;
          if (uVar12 == 0) {
            iVar14 = iVar4 + 0x1e;
            if (-1 < iVar4 + -1) {
              iVar14 = iVar4 + -1;
            }
            iVar14 = iVar14 >> 5;
            iVar13 = iVar14;
            if (iVar14 < iVar18) {
              iVar13 = iVar18;
            }
            if (iVar14 <= iVar18) break;
            lVar20 = 0;
            while( true ) {
              iVar11 = iVar11 + 0x20;
              uVar12 = puVar10[lVar20 + lVar23 + 1];
              if (uVar12 != 0) break;
              lVar20 = lVar20 + 1;
              if (iVar13 - lVar23 == lVar20) goto LAB_142ce6a33;
            }
            uVar17 = (ulonglong)(iVar18 + (int)lVar20 + 1);
            uVar19 = 0xffffffff;
          }
          uVar21 = (ulonglong)(-uVar12 & uVar12);
          uVar1 = uVar21 * 2 + 1;
          lVar23 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar23 == 0; lVar23 = lVar23 + -1) {
            }
          }
          iVar18 = (iVar11 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
        } while (iVar18 < iVar4);
      }
LAB_142ce6a33:
      puVar2 = (ulonglong *)(param_2 + 0x70);
      puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar8 = puVar15 + 0x22;
      if (*(undefined8 **)(param_2 + 0x78) < puVar8) {
        FUN_140023dd8(puVar2,0x120);
        puVar15 = (undefined8 *)(*puVar2 + 0xf & 0xfffffffffffffff0);
        puVar8 = puVar15 + 0x22;
      }
      *puVar2 = (ulonglong)puVar8;
      *puVar15 = &PTR_FUN_14a1fbd30;
      lVar7 = 0x22;
      do {
        *(undefined1 (*) [16])((longlong)puVar15 + lVar7 + -0x12) = (undefined1  [16])0x0;
        *(undefined4 *)((longlong)puVar15 + lVar7 + -2) = 0xffff0000;
        lVar7 = lVar7 + 0x18;
      } while (lVar7 != 0xe2);
      *(undefined4 *)((longlong)puVar15 + 0xe4) = 0;
      *(undefined1 (*) [16])(puVar15 + 0x1a) = (undefined1  [16])0x0;
      *(undefined2 *)(puVar15 + 0x1c) = 0;
      *(undefined4 *)(puVar15 + 0x1d) = 0xffffffff;
      *(undefined4 *)((longlong)puVar15 + 0xec) = 0xffffffff;
      *(undefined4 *)(puVar15 + 0x1e) = 0xffffffff;
      *(undefined4 *)((longlong)puVar15 + 0xf4) = 0xffffffff;
      *(undefined4 *)(puVar15 + 0x1f) = 0;
      *(undefined2 *)((longlong)puVar15 + 0xfc) = 0;
      puVar15[0x20] = 0;
      iVar4 = *(int *)(param_2 + 0xa0);
      *(uint *)(param_2 + 0xa0) = iVar4 + 1U;
      if (*(uint *)(param_2 + 0xa4) < iVar4 + 1U) {
        FUN_1448cfae8((longlong *)(param_2 + 0x98),iVar4);
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar4 * 8) = puVar15;
      puVar15[2] = local_148;
      puVar15[3] = local_130;
      *(undefined4 *)(puVar15 + 4) = 0xffff0001;
      *local_120 = local_130;
      if ((char)local_170 != '\0') {
        *param_5 = (longlong)local_150;
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c9c1080) && (FUN_144b3d300(&DAT_14c9c1080), DAT_14c9c1080 == -1))
      {
        FUN_145fddb1e(local_88);
        local_180 = 0;
        local_190 = 0;
        local_1b0 = "Unknown";
        local_1c0 = (undefined1  [16])0x0;
        local_1c8 = L"FRenderTargetParameters";
        local_188 = 0;
        local_1a0 = 0x100;
        local_1a8 = 0x7af;
        local_198 = local_88;
        FUN_140b49562(&DAT_14c9c1000,0,1);
        if (local_88._0_8_ != 0) {
          FUN_1400020a8();
        }
        atexit((_func_5014 *)&LAB_142cf50f1);
        _Init_thread_footer(&DAT_14c9c1080);
        param_2 = local_140;
      }
      FUN_140069376(param_2);
      puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar16 + 0x38;
      if (*(undefined8 **)(param_2 + 0x78) < puVar8) {
        FUN_140023dd8(puVar2,0x1c8);
        puVar16 = (undefined8 *)(*puVar2 + 7 & 0xfffffffffffffff8);
        puVar8 = puVar16 + 0x38;
      }
      *puVar2 = (ulonglong)puVar8;
      local_88._8_8_ = DAT_14c9c1048;
      local_88._0_8_ = puVar15 + 2;
      if (DAT_14c9c1048 != 0) {
        LOCK();
        *(int *)(DAT_14c9c1048 + 8) = *(int *)(DAT_14c9c1048 + 8) + 1;
        UNLOCK();
      }
      local_78._0_8_ = &DAT_14c9c1000;
      local_1c8 = (wchar_t *)CONCAT71(local_1c8._1_7_,2);
      FUN_140068f1a(puVar16,&local_108,local_88,1);
      *puVar16 = &PTR_FUN_14a247e10;
      iVar4 = *(int *)(param_2 + 0x170);
      *(uint *)(param_2 + 0x170) = iVar4 + 1U;
      if (*(uint *)(param_2 + 0x174) < iVar4 + 1U) {
        FUN_14470e57a(param_2 + 0x168,iVar4);
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar4 * 8) = puVar16;
      *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
      FUN_140069100(param_2,puVar16);
    }
  }
LAB_142ce6c72:
  if ((local_48 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ce6d7e FUN_142ce6d7e body=661 status=ok
// SIG undefined FUN_142ce6d7e(void)

undefined8 *
FUN_142ce6d7e(undefined8 *param_1,longlong param_2,longlong param_3,undefined8 *param_4,
             longlong param_5)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  int *piVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 *local_68;
  undefined1 local_59;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar6 = *(longlong *)(*(longlong *)(param_3 + 8) + 0x40);
  piVar4 = &DAT_14c760db4;
  if (lVar6 != 0) {
    piVar4 = (int *)(lVar6 + 8);
  }
  if ((*(longlong *)
        (&DAT_14ca814b0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*piVar4 * 2) * 0x3c) !=
       DAT_14ca80038) ||
     ((*(byte *)((longlong)&DAT_14ca814d0 +
                (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*piVar4 * 2) * 0x3c + 3) & 1) != 0
     )) {
    DAT_14ca4d100 = 1;
    DAT_14ca4d330 = DAT_14ca4d330 + 0x80;
    DAT_14ca4d32c = DAT_14ca4d32c + 0x80;
    uVar2 = *(undefined8 *)(param_3 + 0x13818);
    FUN_145f79e22();
    FUN_1448e935e(uVar2,local_58,&DAT_14c9e83e0,0);
    FUN_145f79e22();
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar5 = puVar7 + 0x2e;
    if (*(undefined8 **)(param_2 + 0x78) < puVar5) {
      FUN_140023dd8((longlong *)(param_2 + 0x70),0x180);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar5 = puVar7 + 0x2e;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar5;
    *puVar7 = &PTR_FUN_14a247e28;
    local_68 = param_1;
    FUN_1471d9dc6(puVar7 + 2);
    iVar1 = *(int *)(param_2 + 0xa0);
    *(uint *)(param_2 + 0xa0) = iVar1 + 1U;
    if (*(uint *)(param_2 + 0xa4) < iVar1 + 1U) {
      FUN_1448cfae8(param_2 + 0x98,iVar1);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar1 * 8) = puVar7;
    lVar6 = FUN_1447e4f80();
    cVar3 = *(char *)(lVar6 + 0x41);
    if (cVar3 == '\x03') {
      cVar3 = '\x02';
    }
    puVar7[2] = *(undefined8 *)(param_3 + 0x18);
    *(char *)(puVar7 + 3) = cVar3;
    uVar2 = *(undefined8 *)(param_3 + 0x13780);
    FUN_144a12b9e();
    cVar3 = DAT_14c9e81f1;
    if (DAT_14c9e81f1 == '\x03') {
      cVar3 = '\x02';
    }
    puVar7[4] = uVar2;
    *(char *)(puVar7 + 5) = cVar3;
    FUN_1472ea582(param_2,param_3 + 0x13870,puVar7 + 6);
    if (param_5 == 0) {
      param_5 = FUN_14476842e(param_2,&DAT_14ca63ba0,L"MaxFP16Depth",2);
    }
    param_1 = local_68;
    puVar7[0xb] = param_5;
    lVar6 = DAT_14ca63c28;
    if (DAT_14ca63c28 == 0) {
      lVar6 = DAT_14ca63b20;
    }
    puVar7[10] = *(undefined8 *)(lVar6 + 8);
    puVar7[0xe] = *param_4;
    puVar7[0xf] = 0;
    *(undefined4 *)(puVar7 + 0x10) = 0xffff0001;
    *(undefined4 *)(puVar7 + 0xc) = DAT_14c9e80c8;
    *(undefined4 *)((longlong)puVar7 + 100) = DAT_14c760454;
    local_80 = param_4 + 1;
    local_78 = DAT_14c9e7560;
    local_88 = puVar7 + 2;
    FUN_1471d0e64(param_2,*(undefined8 *)(param_3 + 0x13818),&local_59,local_58);
  }
  *param_1 = *param_4;
  param_1[1] = param_4[1];
  param_1[2] = param_4[2];
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ce708d FUN_142ce708d body=351 status=ok
// SIG undefined FUN_142ce708d(void)

void FUN_142ce708d(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint *puVar4;
  uint uVar5;
  
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_142ce70d0;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar4 = (uint *)*puVar1;
LAB_142ce70d0:
    puVar3 = (undefined8 *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar5 = puVar4[0x12];
    if (puVar3 + 0x10 <= puVar4 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
      LOCK();
      uVar2 = *puVar4;
      *puVar4 = *puVar4 + uVar5 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar5) != 0xffffffff) break;
      puVar4 = (uint *)*puVar1;
      *puVar4 = 0xffffffff;
      *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
      puVar4[0x12] = 0;
      *puVar1 = puVar4;
      puVar3 = (undefined8 *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
      uVar5 = 0;
      if (puVar3 + 0x10 <= puVar4 + 0x4000) {
        uVar5 = 1;
        goto LAB_142ce714c;
      }
    }
  }
  uVar5 = uVar5 + 1;
LAB_142ce714c:
  *(undefined8 **)(puVar4 + 0x10) = puVar3 + 0x11;
  puVar4[0x12] = uVar5;
  *(int *)(puVar3 + -1) = ((int)puVar3 + -8) - (int)puVar4;
  *(undefined4 *)((longlong)puVar3 + -4) = 0x80;
  *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(&DAT_14ca11f70 + (ulonglong)(2 < param_1) * 0xe8);
  *(undefined2 *)(puVar3 + 2) = 0x1414;
  puVar3[3] = param_2;
  *(int *)(puVar3 + 4) = param_1;
  puVar3[5] = param_3;
  puVar3[6] = param_4;
  *(undefined1 *)(puVar3 + 7) = 0x3a;
  *puVar3 = &PTR_FUN_14a2447c0;
  *(undefined4 *)(puVar3 + 10) = 0x11;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  puVar3[8] = DAT_14c9c0d50;
  puVar3[9] = DAT_14c9c0ea0;
  *(undefined4 *)(puVar3 + 0xf) = 0;
  return;
}



// FUNCTION 142ce7256 FUN_142ce7256 body=2333 status=ok
// SIG undefined FUN_142ce7256(void)

void FUN_142ce7256(undefined4 *param_1,longlong param_2,float *param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_238 [32];
  undefined1 *local_218;
  undefined4 *local_210;
  int *local_208;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined1 local_184 [12];
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 local_160;
  undefined4 local_158;
  int local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 local_128;
  undefined4 local_120;
  undefined1 local_118 [24];
  undefined8 local_100;
  undefined4 local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_238;
  lVar1 = *(longlong *)(param_2 + 0x388);
  local_120 = *(undefined4 *)(lVar1 + 0x54);
  local_128 = *(undefined8 *)(lVar1 + 0x4c);
  local_148 = *param_1;
  uStack_144 = param_1[1];
  uStack_140 = param_1[2];
  uStack_13c = param_1[3];
  local_138 = *(undefined8 *)(param_1 + 4);
  FUN_147caf515(local_118,&local_148,lVar1 + 0x10);
  local_158 = *(undefined4 *)(lVar1 + 0x54);
  local_160 = *(undefined8 *)(lVar1 + 0x4c);
  local_208 = &local_150;
  local_210 = &local_14c;
  local_218 = local_184;
  FUN_147caf645(local_118,&local_160,*(undefined8 *)(lVar1 + 0x60),lVar1 + 0x310);
  lVar1 = *(longlong *)(*(longlong *)(lVar1 + 800) + (longlong)local_150 * 8);
  local_218 = (undefined1 *)CONCAT44(local_218._4_4_,*(undefined4 *)(lVar1 + 0x90));
  FUN_147caf73e(&local_178,local_118,local_184,local_14c);
  local_188 = *(undefined4 *)(lVar1 + 0x9c);
  local_190 = *(undefined8 *)(lVar1 + 0x94);
  FUN_1471d182a(&local_f0,&local_178,&local_190,*(undefined8 *)(lVar1 + 0xa8));
  fVar2 = local_ec;
  fVar4 = local_f0;
  local_1fc = local_e8;
  local_f8 = *(undefined4 *)(lVar1 + 0x9c);
  local_100 = *(undefined8 *)(lVar1 + 0x94);
  FUN_1471d1c03(&local_f0,&local_178,&local_100,*(undefined8 *)(lVar1 + 0x118));
  local_1cc = (local_e4 + local_e4 + -1.0) * fVar4 * 3.8729792;
  local_1d0 = (local_f0 + local_f0 + -1.0) * fVar4 * 3.8729792;
  local_1d4 = (local_ec + local_ec + -1.0) * fVar4 * 4.472139;
  local_1d8 = (local_e8 + local_e8 + -1.0) * fVar4 * 3.8729792;
  local_f8 = *(undefined4 *)(lVar1 + 0x9c);
  local_100 = *(undefined8 *)(lVar1 + 0x94);
  FUN_1471d1c03(&local_f0,&local_178,&local_100,*(undefined8 *)(lVar1 + 0xe0));
  fVar10 = local_ec + local_ec;
  local_200 = fVar4;
  local_1dc = (local_e4 + local_e4 + -1.0) * fVar4 * 3.8729792;
  local_1f0 = (local_f0 + local_f0 + -1.0) * fVar4 * 1.7320514;
  local_1f4 = (local_e8 + local_e8 + -1.0) * fVar4 * 1.7320514;
  local_f8 = *(undefined4 *)(lVar1 + 0x9c);
  local_100 = *(undefined8 *)(lVar1 + 0x94);
  FUN_1471d1c03(&local_f0,&local_178,&local_100,*(undefined8 *)(lVar1 + 0x188));
  local_1e0 = (local_e4 + local_e4 + -1.0) * fVar2 * 3.8729792;
  local_1e4 = (local_f0 + local_f0 + -1.0) * fVar2 * 3.8729792;
  local_1e8 = (local_ec + local_ec + -1.0) * fVar2 * 4.472139;
  local_1ec = (local_e8 + local_e8 + -1.0) * fVar2 * 3.8729792;
  local_f8 = *(undefined4 *)(lVar1 + 0x9c);
  local_100 = *(undefined8 *)(lVar1 + 0x94);
  FUN_1471d1c03(&local_f0,&local_178,&local_100,*(undefined8 *)(lVar1 + 0x150));
  fVar11 = local_e4 + local_e4;
  fVar6 = local_f0 + local_f0;
  fVar9 = local_ec + local_ec;
  fVar7 = local_e8 + local_e8;
  local_1f8 = fVar2;
  local_f8 = *(undefined4 *)(lVar1 + 0x9c);
  local_100 = *(undefined8 *)(lVar1 + 0x94);
  FUN_1471d1c03(&local_f0,&local_178,&local_100,*(undefined8 *)(lVar1 + 0x1f8));
  fVar3 = local_1fc;
  fVar12 = (local_e4 + local_e4 + -1.0) * local_1fc;
  fVar13 = (local_f0 + local_f0 + -1.0) * local_1fc;
  fVar8 = (local_ec + local_ec + -1.0) * local_1fc;
  fVar5 = (local_e8 + local_e8 + -1.0) * local_1fc;
  local_f8 = *(undefined4 *)(lVar1 + 0x9c);
  local_100 = *(undefined8 *)(lVar1 + 0x94);
  FUN_1471d1c03(&local_f0,&local_178,&local_100,*(undefined8 *)(lVar1 + 0x1c0));
  *param_3 = local_200 * 0.31830987;
  param_3[1] = local_1f4 * 0.31830987;
  param_3[2] = (fVar10 + -1.0) * fVar4 * 1.7320514 * 0.31830987;
  param_3[3] = local_1f0 * 0.31830987;
  param_3[4] = local_1f8 * 0.31830987;
  param_3[5] = (fVar7 + -1.0) * fVar2 * 1.7320514 * 0.31830987;
  param_3[6] = (fVar9 + -1.0) * fVar2 * 1.7320514 * 0.31830987;
  param_3[7] = (fVar6 + -1.0) * fVar2 * 1.7320514 * 0.31830987;
  param_3[8] = fVar3 * 0.31830987;
  param_3[9] = (local_e8 + local_e8 + -1.0) * fVar3 * 1.7320514 * 0.31830987;
  param_3[10] = (local_ec + local_ec + -1.0) * fVar3 * 1.7320514 * 0.31830987;
  param_3[0xb] = (local_f0 + local_f0 + -1.0) * fVar3 * 1.7320514 * 0.31830987;
  param_3[0xc] = local_1dc * 0.31830987;
  param_3[0xd] = local_1d8 * 0.31830987;
  param_3[0xe] = local_1d4 * 0.31830987;
  param_3[0xf] = local_1d0 * 0.31830987;
  param_3[0x10] = (fVar11 + -1.0) * fVar2 * 3.8729792 * 0.31830987;
  param_3[0x11] = local_1ec * 0.31830987;
  param_3[0x12] = local_1e8 * 0.31830987;
  param_3[0x13] = local_1e4 * 0.31830987;
  param_3[0x14] = (local_e4 + local_e4 + -1.0) * fVar3 * 3.8729792 * 0.31830987;
  param_3[0x15] = fVar5 * 3.8729792 * 0.31830987;
  param_3[0x16] = fVar8 * 4.472139 * 0.31830987;
  param_3[0x17] = fVar13 * 3.8729792 * 0.31830987;
  param_3[0x18] = local_1cc * 0.31830987;
  param_3[0x19] = local_1e0 * 0.31830987;
  param_3[0x1a] = fVar12 * 3.8729792 * 0.31830987;
  param_3[0x1b] = 0.0;
  param_3[0x1c] = local_200 * 0.28209478;
  param_3[0x1d] = local_1f8 * 0.28209478;
  param_3[0x1e] = fVar3 * 0.28209478;
  param_3[0x1f] = 0.28209478;
  if (*(int *)(lVar1 + 0x238) < 1) {
    param_3[0x20] = 0.0;
    param_3[0x22] = 1.0;
    fVar3 = 1.0;
    local_ec = 0.0;
  }
  else {
    local_198 = *(undefined4 *)(lVar1 + 0x9c);
    local_1a0 = *(undefined8 *)(lVar1 + 0x94);
    local_1b8 = local_178;
    uStack_1b4 = uStack_174;
    uStack_1b0 = uStack_170;
    uStack_1ac = uStack_16c;
    local_1a8 = local_168;
    FUN_1471d1c03(&local_f0,&local_1b8,&local_1a0,*(undefined8 *)(lVar1 + 0x230));
    fVar3 = SQRT(local_e8 * local_e8 + local_f0 * local_f0 + local_ec * local_ec);
    fVar4 = fVar3;
    if (fVar3 <= 0.0001) {
      fVar4 = 0.0001;
    }
    fVar4 = 1.0 / fVar4;
    local_ec = local_ec * fVar4;
    param_3[0x20] = local_e8 * fVar4;
    param_3[0x22] = fVar4 * local_f0;
  }
  param_3[0x21] = local_ec;
  param_3[0x23] = fVar3;
  local_1c0 = *(undefined4 *)(lVar1 + 0x9c);
  local_1c8 = *(undefined8 *)(lVar1 + 0x94);
  FUN_1471d1fc9(&local_f0,&local_178,&local_1c8,*(undefined8 *)(lVar1 + 0x268));
  param_3[0x24] = local_f0;
  if ((local_e0 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ce7b74 FUN_142ce7b74 body=47 status=ok
// SIG undefined FUN_142ce7b74(void)

void FUN_142ce7b74(void)

{
  DAT_14c9e90f0 = &PTR_FUN_14a247ef0;
  FUN_144725486(&DAT_14c9e90f0);
  FUN_1462d6ba0(&DAT_14c9e90f0);
  return;
}



// FUNCTION 142ce7ba3 FUN_142ce7ba3 body=47 status=ok
// SIG undefined FUN_142ce7ba3(void)

void FUN_142ce7ba3(void)

{
  DAT_14c9e9118 = &PTR_FUN_14a247f50;
  FUN_144725486(&DAT_14c9e9118);
  FUN_1462d6c68(&DAT_14c9e9118);
  return;
}



// FUNCTION 142ce7bde FUN_142ce7bde body=69 status=ok
// SIG undefined FUN_142ce7bde(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ce7bde(void)

{
  _DAT_14c9e9398 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ce7c20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e93a0,1);
  return;
}



// FUNCTION 142ce7c23 FUN_142ce7c23 body=69 status=ok
// SIG undefined FUN_142ce7c23(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ce7c23(void)

{
  _DAT_14c9e93a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ce7c65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e93b0,1);
  return;
}



// FUNCTION 142ce7c68 FUN_142ce7c68 body=69 status=ok
// SIG undefined FUN_142ce7c68(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ce7c68(void)

{
  _DAT_14c9e93b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ce7caa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e93c0,1);
  return;
}



// FUNCTION 142ce7cad FUN_142ce7cad body=69 status=ok
// SIG undefined FUN_142ce7cad(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ce7cad(void)

{
  _DAT_14c9e93d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ce7cef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e93d8,1);
  return;
}



// FUNCTION 142ce7cf2 FUN_142ce7cf2 body=69 status=ok
// SIG undefined FUN_142ce7cf2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ce7cf2(void)

{
  _DAT_14c9e93e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ce7d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e93e8,1);
  return;
}



// FUNCTION 142ce7d37 FUN_142ce7d37 body=69 status=ok
// SIG undefined FUN_142ce7d37(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ce7d37(void)

{
  _DAT_14c9e93f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ce7d79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e9400,1);
  return;
}



// FUNCTION 142ce7d7c FUN_142ce7d7c body=69 status=ok
// SIG undefined FUN_142ce7d7c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ce7d7c(void)

{
  _DAT_14c9e9410 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ce7dbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e9418,1);
  return;
}



// FUNCTION 142ce7dc1 FUN_142ce7dc1 body=69 status=ok
// SIG undefined FUN_142ce7dc1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ce7dc1(void)

{
  _DAT_14c9e9428 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ce7e03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e9430,1);
  return;
}



// FUNCTION 142ce7e06 FUN_142ce7e06 body=69 status=ok
// SIG undefined FUN_142ce7e06(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ce7e06(void)

{
  _DAT_14c9e9440 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ce7e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e9448,1);
  return;
}



// FUNCTION 142ce7e4b FUN_142ce7e4b body=69 status=ok
// SIG undefined FUN_142ce7e4b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ce7e4b(void)

{
  _DAT_14c9e9458 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ce7e8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e9460,1);
  return;
}



// FUNCTION 142ce7e90 FUN_142ce7e90 body=69 status=ok
// SIG undefined FUN_142ce7e90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ce7e90(void)

{
  _DAT_14c9e9470 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ce7ed2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e9478,1);
  return;
}



// FUNCTION 142ce7ed5 FUN_142ce7ed5 body=69 status=ok
// SIG undefined FUN_142ce7ed5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ce7ed5(void)

{
  _DAT_14c9e9488 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ce7f17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e9490,1);
  return;
}



// FUNCTION 142ce7f1a FUN_142ce7f1a body=69 status=ok
// SIG undefined FUN_142ce7f1a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ce7f1a(void)

{
  _DAT_14c9e94a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ce7f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e94a8,1);
  return;
}



// FUNCTION 142ce7f5f FUN_142ce7f5f body=69 status=ok
// SIG undefined FUN_142ce7f5f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ce7f5f(void)

{
  _DAT_14c9e94b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ce7fa1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e94c0,1);
  return;
}



// FUNCTION 142ce7fa4 FUN_142ce7fa4 body=69 status=ok
// SIG undefined FUN_142ce7fa4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ce7fa4(void)

{
  _DAT_14c9e94d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ce7fe6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e94d8,1);
  return;
}



// FUNCTION 142ce7fe9 FUN_142ce7fe9 body=69 status=ok
// SIG undefined FUN_142ce7fe9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ce7fe9(void)

{
  _DAT_14c9e94e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ce802b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e94f0,1);
  return;
}



// FUNCTION 142ce802e FUN_142ce802e body=69 status=ok
// SIG undefined FUN_142ce802e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ce802e(void)

{
  _DAT_14c9e9500 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ce8070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e9508,1);
  return;
}



// FUNCTION 142ce8073 FUN_142ce8073 body=69 status=ok
// SIG undefined FUN_142ce8073(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ce8073(void)

{
  _DAT_14c9e9518 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ce80b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e9520,1);
  return;
}



// FUNCTION 142ce80b8 FUN_142ce80b8 body=69 status=ok
// SIG undefined FUN_142ce80b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ce80b8(void)

{
  _DAT_14c9e9530 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ce80fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9e9538,1);
  return;
}



// FUNCTION 142ce80fd FUN_142ce80fd body=47 status=ok
// SIG undefined FUN_142ce80fd(void)

void FUN_142ce80fd(void)

{
  DAT_14c9e9548 = &PTR_FUN_14a247fb0;
  FUN_144725486(&DAT_14c9e9548);
  FUN_14003f39a(&DAT_14c9e9548);
  return;
}



// FUNCTION 142ce812c FUN_142ce812c body=240 status=ok
// SIG undefined FUN_142ce812c(void)

void FUN_142ce812c(void)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  DAT_14c9e9568 = &PTR_FUN_14a248010;
  FUN_144725486(&DAT_14c9e9568);
  lVar4 = DAT_14c9e9578;
  DAT_14c9e9568 = &PTR_FUN_14a38cff0;
  if (DAT_14c9e9578 != 0) {
    LOCK();
    puVar1 = (uint *)(DAT_14c9e9578 + 8);
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
  DAT_14c9e9568 = &PTR_FUN_14a38cd70;
  DAT_14c9e9576 = 2;
  if ((DAT_14c9e9570 != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  return;
}



// FUNCTION 142ce821c FUN_142ce821c body=304 status=ok
// SIG undefined FUN_142ce821c(void)

void FUN_142ce821c(ulonglong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  uVar1 = DAT_14c9e9590;
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 5;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x30);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 5;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fb5a8;
  *(undefined4 *)(puVar4 + 2) = 0;
  puVar4[3] = uVar1;
  *(undefined4 *)(puVar4 + 4) = 0;
  iVar3 = DAT_14c9e95c8;
  uVar1 = DAT_14c9e95c0;
  uVar2 = DAT_14c9e9598;
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 6;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x38);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 6;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_FUN_14a1fb5b0;
  puVar4[2] = uVar1;
  puVar4[3] = 0;
  *(undefined4 *)(puVar4 + 4) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x24) = 0;
  *(int *)(puVar4 + 5) = iVar3 / 3;
  *(undefined4 *)((longlong)puVar4 + 0x2c) = param_2;
  return;
}



// FUNCTION 142ce834c FUN_142ce834c body=240 status=ok
// SIG undefined FUN_142ce834c(void)

void FUN_142ce834c(void)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  DAT_14c9e9580 = &PTR_FUN_14a248080;
  FUN_144725486(&DAT_14c9e9580);
  lVar4 = DAT_14c9e9590;
  DAT_14c9e9580 = &PTR_FUN_14a38cff0;
  if (DAT_14c9e9590 != 0) {
    LOCK();
    puVar1 = (uint *)(DAT_14c9e9590 + 8);
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
  DAT_14c9e9580 = &PTR_FUN_14a38cd70;
  DAT_14c9e958e = 2;
  if ((DAT_14c9e9588 != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  return;
}



// FUNCTION 142ce843c FUN_142ce843c body=240 status=ok
// SIG undefined FUN_142ce843c(void)

void FUN_142ce843c(void)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  DAT_14c9e95d0 = &PTR_FUN_14a2480f0;
  FUN_144725486(&DAT_14c9e95d0);
  lVar4 = DAT_14c9e95e0;
  DAT_14c9e95d0 = &PTR_FUN_14a38cff0;
  if (DAT_14c9e95e0 != 0) {
    LOCK();
    puVar1 = (uint *)(DAT_14c9e95e0 + 8);
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
  DAT_14c9e95d0 = &PTR_FUN_14a38cd70;
  DAT_14c9e95de = 2;
  if ((DAT_14c9e95d8 != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  return;
}



// FUNCTION 142ce852c FUN_142ce852c body=47 status=ok
// SIG undefined FUN_142ce852c(void)

void FUN_142ce852c(void)

{
  DAT_14c9e95b0 = &PTR_FUN_14a248120;
  FUN_144725486(&DAT_14c9e95b0);
  FUN_14003f39a(&DAT_14c9e95b0);
  return;
}



// FUNCTION 142ce855b FUN_142ce855b body=240 status=ok
// SIG undefined FUN_142ce855b(void)

void FUN_142ce855b(void)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  DAT_14c9ebd60 = &PTR_FUN_14a248190;
  FUN_144725486(&DAT_14c9ebd60);
  lVar4 = DAT_14c9ebd70;
  DAT_14c9ebd60 = &PTR_FUN_14a38cff0;
  if (DAT_14c9ebd70 != 0) {
    LOCK();
    puVar1 = (uint *)(DAT_14c9ebd70 + 8);
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
  DAT_14c9ebd60 = &PTR_FUN_14a38cd70;
  DAT_14c9ebd6e = 2;
  if ((DAT_14c9ebd68 != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  return;
}



// FUNCTION 142ce864b FUN_142ce864b body=47 status=ok
// SIG undefined FUN_142ce864b(void)

void FUN_142ce864b(void)

{
  DAT_14c9ebd40 = &PTR_FUN_14a2481c0;
  FUN_144725486(&DAT_14c9ebd40);
  FUN_14003f39a(&DAT_14c9ebd40);
  return;
}



// FUNCTION 142ce86ce FUN_142ce86ce body=11 status=ok
// SIG undefined FUN_142ce86ce(void)

bool FUN_142ce86ce(void)

{
  return DAT_14c760474 == 1;
}



// FUNCTION 142ce86da FUN_142ce86da body=4755 status=ok
// SIG undefined FUN_142ce86da(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_142ce86da(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  longlong *plVar7;
  float *pfVar8;
  undefined4 uVar9;
  float *pfVar10;
  longlong lVar11;
  byte bVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  longlong **pplVar18;
  void *pvVar19;
  longlong lVar20;
  float *pfVar21;
  undefined4 *puVar22;
  longlong lVar23;
  undefined1 uVar24;
  int iVar25;
  float *pfVar26;
  int iVar27;
  uint uVar28;
  float *pfVar29;
  longlong lVar30;
  uint uVar31;
  longlong lVar32;
  float *pfVar33;
  ulonglong uVar34;
  int iVar35;
  int iVar36;
  uint *puVar37;
  ulonglong uVar38;
  float *pfVar39;
  ulonglong uVar40;
  float fVar41;
  ulonglong uVar42;
  float *pfVar43;
  longlong *plVar44;
  longlong lVar45;
  float *pfVar46;
  float *pfVar47;
  bool bVar48;
  float fVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  float fVar53;
  undefined1 auStack_438 [40];
  longlong *local_410;
  longlong *local_408;
  uint *local_400;
  undefined4 local_3f4;
  int local_3f0;
  int local_3ec;
  longlong *local_3e8;
  longlong local_3e0;
  ulonglong local_3d8;
  longlong local_3d0;
  ulonglong local_3c8;
  ulonglong local_3c0;
  longlong local_3b8;
  ulonglong local_3b0;
  longlong *local_3a8;
  undefined8 uStack_3a0;
  longlong *local_398;
  longlong *local_390;
  undefined4 local_388 [190];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_438;
  lVar45 = *(longlong *)(param_1 + 8);
  puVar37 = (uint *)(lVar45 + 0x3560);
  iVar35 = *(int *)(lVar45 + 0x3578);
  if (iVar35 == 0) {
    uVar42 = 0;
    uVar34 = 1;
    iVar27 = 0;
    iVar13 = 0;
  }
  else {
    puVar17 = *(uint **)(lVar45 + 0x3570);
    if (*(uint **)(lVar45 + 0x3570) == (uint *)0x0) {
      puVar17 = puVar37;
    }
    uVar28 = *puVar17;
    if (uVar28 == 0) {
      iVar13 = iVar35 + 0x1e;
      if (-1 < iVar35 + -1) {
        iVar13 = iVar35 + -1;
      }
      uVar42 = 0;
      uVar34 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar34 = uVar42;
      }
      iVar27 = 0;
      do {
        if (uVar34 == uVar42) goto LAB_142ce88f8;
        iVar27 = iVar27 + 0x20;
        uVar28 = puVar17[uVar42 + 1];
        uVar42 = uVar42 + 1;
      } while (uVar28 == 0);
    }
    else {
      uVar42 = 0;
      iVar27 = 0;
    }
    uVar34 = (ulonglong)(-uVar28 & uVar28);
    uVar40 = uVar34 * 2 + 1;
    lVar32 = 0x3f;
    if (uVar40 != 0) {
      for (; uVar40 >> lVar32 == 0; lVar32 = lVar32 + -1) {
      }
    }
    iVar13 = (iVar27 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
    if (iVar35 <= iVar13) {
      iVar13 = iVar35;
    }
  }
  if (iVar13 < iVar35) {
    local_3e8 = (longlong *)(param_1 + 0x7e8);
    uVar28 = 0xffffffff;
    do {
      lVar32 = *(longlong *)(*(longlong *)(lVar45 + 0x3550) + 0x30 + (longlong)iVar13 * 0x40);
      lVar20 = *(longlong *)(lVar32 + 0x28);
      if ((*(longlong *)(lVar20 + 0x1c0) == 0) || (*(char *)(param_1 + 2000) != '\x01')) {
        *(undefined1 *)(lVar20 + 0x1d6) = 0;
      }
      else {
        iVar35 = *(int *)(param_1 + 0x7f0);
        *(uint *)(param_1 + 0x7f0) = iVar35 + 1U;
        if (*(uint *)(param_1 + 0x7f4) < iVar35 + 1U) {
          local_400 = puVar37;
          FUN_1417663b4(local_3e8,iVar35);
          puVar37 = local_400;
        }
        *(longlong *)(*local_3e8 + (longlong)iVar35 * 8) = lVar32;
      }
      uVar28 = uVar28 & ~(uint)uVar34;
      puVar17 = *(uint **)(lVar45 + 0x3570);
      if (*(uint **)(lVar45 + 0x3570) == (uint *)0x0) {
        puVar17 = puVar37;
      }
      iVar35 = *(int *)(lVar45 + 0x3578);
      iVar13 = (int)uVar42;
      lVar32 = (longlong)iVar13;
      uVar14 = puVar17[lVar32] & uVar28;
      if (uVar14 == 0) {
        iVar15 = iVar35 + 0x1e;
        if (-1 < iVar35 + -1) {
          iVar15 = iVar35 + -1;
        }
        iVar15 = iVar15 >> 5;
        iVar36 = iVar15;
        if (iVar15 < iVar13) {
          iVar36 = iVar13;
        }
        if (iVar15 <= iVar13) break;
        lVar20 = 0;
        while( true ) {
          iVar27 = iVar27 + 0x20;
          uVar14 = puVar17[lVar32 + lVar20 + 1];
          if (uVar14 != 0) break;
          lVar20 = lVar20 + 1;
          if (iVar36 - lVar32 == lVar20) goto LAB_142ce88f8;
        }
        uVar42 = (ulonglong)(iVar13 + (int)lVar20 + 1);
        uVar28 = 0xffffffff;
      }
      uVar34 = (ulonglong)(-uVar14 & uVar14);
      uVar40 = uVar34 * 2 + 1;
      lVar32 = 0x3f;
      if (uVar40 != 0) {
        for (; uVar40 >> lVar32 == 0; lVar32 = lVar32 + -1) {
        }
      }
      iVar13 = (iVar27 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
    } while (iVar13 < iVar35);
  }
LAB_142ce88f8:
  if ((*(char *)(param_1 + 2000) == '\x01') && (uVar28 = *(uint *)(param_1 + 0x3f0), uVar28 != 0)) {
    local_3f4 = *(undefined4 *)(*(longlong *)(param_1 + 1000) + 0x3090);
    local_3a8 = (longlong *)0x0;
    uStack_3a0 = 0;
    iVar35 = *(int *)(param_1 + 0x7f0);
    if (-1 < iVar35) {
      if (iVar35 != 0) {
        FUN_142cf8ae4(&local_3a8);
        fVar49 = *(float *)(param_1 + 0x7f0);
        if (fVar49 != 0.0) {
          lVar45 = *(longlong *)(param_1 + 1000);
          dVar3 = *(double *)(lVar45 + 0x1048);
          dVar4 = *(double *)(lVar45 + 0x1050);
          dVar5 = *(double *)(lVar45 + 0x1058);
          uVar14 = 2;
          if (2 < uVar28) {
            uVar14 = uVar28;
          }
          fVar41 = 0.0;
          do {
            lVar45 = *(longlong *)
                      (*(longlong *)(*(longlong *)(param_1 + 0x7e8) + (longlong)(int)fVar41 * 8) +
                      0x28);
            if (*(char *)(lVar45 + 0x1e8) == '\0') {
              lVar45 = (longlong)(int)uStack_3a0;
              uVar16 = (int)uStack_3a0 + 1;
              uStack_3a0 = CONCAT44(uStack_3a0._4_4_,uVar16);
              if (uStack_3a0._4_4_ < uVar16) {
                FUN_142cf8c14(&local_3a8);
              }
              pfVar10 = (float *)(local_3a8 + lVar45);
              *pfVar10 = 0.0;
            }
            else {
              dVar50 = dVar5 - *(double *)(lVar45 + 0x30);
              dVar51 = dVar4 - *(double *)(lVar45 + 0x28);
              dVar52 = dVar3 - *(double *)(lVar45 + 0x20);
              fVar53 = (float)(dVar50 * dVar50 + dVar52 * dVar52 + dVar51 * dVar51);
              if (uVar28 != 1) {
                lVar32 = *(longlong *)(param_1 + 1000);
                uVar16 = 1;
                do {
                  lVar20 = (longlong)(int)uVar16 * 0x13c10;
                  dVar50 = *(double *)(lVar32 + 0x1058 + lVar20) - *(double *)(lVar45 + 0x30);
                  dVar52 = *(double *)(lVar32 + 0x1050 + lVar20) - *(double *)(lVar45 + 0x28);
                  dVar51 = *(double *)(lVar32 + 0x1048 + lVar20) - *(double *)(lVar45 + 0x20);
                  dVar50 = dVar50 * dVar50 + dVar51 * dVar51 + dVar52 * dVar52;
                  if (dVar50 <= (double)fVar53) {
                    fVar53 = (float)dVar50;
                  }
                  uVar16 = uVar16 + 1;
                } while (uVar14 != uVar16);
              }
              lVar45 = (longlong)(int)uStack_3a0;
              uVar16 = (int)uStack_3a0 + 1;
              uStack_3a0 = CONCAT44(uStack_3a0._4_4_,uVar16);
              if (uStack_3a0._4_4_ < uVar16) {
                FUN_142cf8c14(&local_3a8);
              }
              pfVar10 = (float *)(local_3a8 + lVar45);
              *pfVar10 = fVar53;
            }
            pfVar10[1] = fVar41;
            fVar41 = (float)((int)fVar41 + 1);
          } while (fVar41 != fVar49);
        }
      }
      plVar44 = local_3a8;
      iVar35 = (int)uStack_3a0;
      lVar45 = (longlong)(int)uStack_3a0;
      if (1 < lVar45) {
        memset(local_388,0,0x2f0);
        local_398 = plVar44;
        local_390 = plVar44 + lVar45 + -1;
        fVar49 = logf((float)iVar35);
        local_388[0] = (int)(longlong)(fVar49 + fVar49);
        pplVar18 = &local_398;
        do {
          pfVar21 = (float *)*pplVar18;
          pfVar26 = (float *)pplVar18[1];
          iVar35 = *(int *)(pplVar18 + 2);
          iVar13 = (int)((ulonglong)((longlong)pfVar26 - (longlong)pfVar21) >> 3);
          uVar42 = (ulonglong)(iVar13 + 1);
          pfVar10 = pfVar26;
          pfVar46 = pfVar21;
          if (iVar35 != 0) {
LAB_142ce8b84:
            pfVar29 = pfVar21;
            if (8 < (int)(uint)uVar42) {
              uVar42 = (ulonglong)((uint)uVar42 >> 1);
              uVar6 = *(undefined8 *)(pfVar29 + uVar42 * 2);
              *(undefined8 *)(pfVar29 + uVar42 * 2) = *(undefined8 *)pfVar29;
              *(undefined8 *)pfVar29 = uVar6;
              pfVar39 = pfVar10 + 2;
              pfVar21 = pfVar29;
              do {
                pfVar8 = pfVar21 + 2;
                pfVar33 = pfVar21 + 2;
                do {
                  pfVar47 = pfVar33;
                  pfVar21 = pfVar8;
                  if (pfVar10 < pfVar21) break;
                  pfVar8 = pfVar21 + 2;
                  pfVar33 = pfVar47 + 2;
                } while (*pfVar21 < *pfVar29 || *pfVar21 == *pfVar29);
                pfVar8 = pfVar39 + -4;
                do {
                  pfVar33 = pfVar39;
                  pfVar43 = pfVar8;
                  pfVar39 = pfVar33 + -2;
                  if (pfVar39 <= pfVar29) break;
                  pfVar8 = pfVar43 + -2;
                } while (*pfVar29 < *pfVar39 || *pfVar29 == *pfVar39);
                if (pfVar39 < pfVar21) goto LAB_142ce8c09;
                uVar6 = *(undefined8 *)pfVar21;
                *(undefined8 *)pfVar21 = *(undefined8 *)pfVar39;
                *(undefined8 *)pfVar39 = uVar6;
              } while( true );
            }
            for (; pfVar26 = pfVar29, pfVar21 = pfVar29, pfVar29 < pfVar10; pfVar10 = pfVar10 + -2)
            {
              while (pfVar46 = pfVar26, pfVar21 = pfVar21 + 2, pfVar21 <= pfVar10) {
                pfVar26 = pfVar21;
                if (*pfVar21 < *pfVar46 || *pfVar21 == *pfVar46) {
                  pfVar26 = pfVar46;
                }
              }
              uVar6 = *(undefined8 *)pfVar46;
              *(undefined8 *)pfVar46 = *(undefined8 *)pfVar10;
              *(undefined8 *)pfVar10 = uVar6;
            }
            goto LAB_142ce8e25;
          }
LAB_142ce8c9d:
          iVar35 = (int)uVar42;
          if (iVar35 != 0) {
            iVar13 = (iVar13 - (iVar13 + -1 >> 0x1f)) + -1 >> 1;
            iVar27 = iVar13;
joined_r0x000142ce8cc4:
            do {
              iVar15 = iVar13 * 2 + 1;
              if (iVar15 < iVar35) {
                iVar36 = iVar13 * 2 + 2;
                if ((iVar36 < iVar35) &&
                   (pfVar21[(longlong)iVar15 * 2] < pfVar21[(longlong)iVar36 * 2] ||
                    pfVar21[(longlong)iVar15 * 2] == pfVar21[(longlong)iVar36 * 2])) {
                  iVar15 = iVar36;
                }
                lVar45 = (longlong)iVar13;
                fVar49 = (float)*(undefined8 *)(pfVar21 + (longlong)iVar15 * 2);
                if (pfVar21[lVar45 * 2] <= fVar49 && fVar49 != pfVar21[lVar45 * 2]) {
                  uVar6 = *(undefined8 *)(pfVar21 + lVar45 * 2);
                  *(undefined8 *)(pfVar21 + lVar45 * 2) =
                       *(undefined8 *)(pfVar21 + (longlong)iVar15 * 2);
                  *(undefined8 *)(pfVar21 + (longlong)iVar15 * 2) = uVar6;
                  iVar13 = iVar15;
                  goto joined_r0x000142ce8cc4;
                }
              }
              bVar48 = iVar27 != 0;
              iVar13 = iVar27 + -1;
              iVar27 = iVar13;
            } while (bVar48);
            if (1 < iVar35) {
              uVar6 = *(undefined8 *)pfVar21;
              *(undefined8 *)pfVar21 = *(undefined8 *)(pfVar21 + uVar42 * 2 + -2);
              *(undefined8 *)(pfVar21 + uVar42 * 2 + -2) = uVar6;
              if (iVar35 != 2) {
                do {
                  uVar42 = uVar42 - 1;
                  iVar35 = 0;
                  iVar27 = 1;
                  iVar13 = 0;
                  do {
                    iVar35 = iVar35 + 2;
                    iVar15 = iVar27;
                    if (((longlong)iVar35 < (longlong)uVar42) &&
                       (pfVar21[(longlong)iVar27 * 2] < pfVar21[(longlong)iVar35 * 2] ||
                        pfVar21[(longlong)iVar27 * 2] == pfVar21[(longlong)iVar35 * 2])) {
                      iVar15 = iVar35;
                    }
                    lVar45 = (longlong)iVar13;
                    fVar49 = (float)*(undefined8 *)(pfVar21 + (longlong)iVar15 * 2);
                    if (fVar49 < pfVar21[lVar45 * 2] || fVar49 == pfVar21[lVar45 * 2]) break;
                    uVar6 = *(undefined8 *)(pfVar21 + lVar45 * 2);
                    *(undefined8 *)(pfVar21 + lVar45 * 2) =
                         *(undefined8 *)(pfVar21 + (longlong)iVar15 * 2);
                    *(undefined8 *)(pfVar21 + (longlong)iVar15 * 2) = uVar6;
                    iVar35 = iVar15 * 2;
                    iVar27 = iVar15 * 2 + 1;
                    iVar13 = iVar15;
                  } while ((longlong)iVar27 < (longlong)uVar42);
                  uVar6 = *(undefined8 *)pfVar21;
                  *(undefined8 *)pfVar21 = *(undefined8 *)(pfVar21 + uVar42 * 2 + -2);
                  *(undefined8 *)(pfVar21 + uVar42 * 2 + -2) = uVar6;
                } while (2 < uVar42);
              }
            }
          }
LAB_142ce8e25:
          pplVar18 = pplVar18 + -3;
        } while (&local_398 <= pplVar18);
      }
      local_3c8 = (ulonglong)*(uint *)(param_1 + 0x89c);
      fVar49 = (float)*(uint *)(param_1 + 0x898);
      uVar42 = (ulonglong)(fVar49 * fVar49);
      lVar45 = param_1 + 0x848;
      *(undefined4 *)(param_1 + 0x850) = 0;
      if (*(int *)(param_1 + 0x854) < 0) {
        FUN_141766516(lVar45,0);
      }
      uVar28 = (uint)uVar42;
      if ((int)uVar28 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar42 & 0xffffffff);
      }
      if (*(int *)(param_1 + 0x854) < (int)uVar28) {
        FUN_141766516(lVar45,uVar42 & 0xffffffff);
      }
      local_408 = (longlong *)(param_1 + 0x858);
      *(undefined4 *)(param_1 + 0x860) = 0;
      if (*(int *)(param_1 + 0x864) < 0) {
        FUN_1417665ea(local_408,0);
      }
      iVar35 = (int)uStack_3a0;
      if (-1 < (int)uStack_3a0) {
        if (*(int *)(param_1 + 0x864) < (int)uStack_3a0) {
          FUN_1417665ea(local_408);
        }
        local_410 = (longlong *)(param_1 + 0x7f8);
        iVar35 = *(int *)(param_1 + 0x800);
        iVar13 = iVar35;
        if (iVar35 != *(int *)(param_1 + 0x82c)) {
          lVar32 = param_1 + 0x830;
          if (*(longlong *)(param_1 + 0x838) != 0) {
            lVar32 = *(longlong *)(param_1 + 0x838);
          }
          iVar13 = *(int *)(param_1 + 0x840);
          iVar27 = iVar13 + 3;
          if (-1 < iVar13) {
            iVar27 = iVar13;
          }
          if (iVar35 - *(int *)(param_1 + 0x82c) < iVar27 >> 2) {
            iVar35 = *(int *)(param_1 + 0x820);
            if (iVar35 != 0) {
              puVar37 = *(uint **)(param_1 + 0x818);
              if (*(uint **)(param_1 + 0x818) == (uint *)0x0) {
                puVar37 = (uint *)(param_1 + 0x808);
              }
              uVar14 = *puVar37;
              if (uVar14 == 0) {
                iVar13 = iVar35 + 0x1e;
                if (-1 < iVar35 + -1) {
                  iVar13 = iVar35 + -1;
                }
                uVar34 = 0;
                uVar40 = (ulonglong)(uint)(iVar13 >> 5);
                if (iVar13 >> 5 < 1) {
                  uVar40 = uVar34;
                }
                iVar13 = 0;
                do {
                  if (uVar40 == uVar34) goto LAB_142ce9721;
                  iVar13 = iVar13 + 0x20;
                  uVar14 = puVar37[uVar34 + 1];
                  uVar34 = uVar34 + 1;
                } while (uVar14 == 0);
              }
              else {
                uVar34 = 0;
                iVar13 = 0;
              }
              uVar38 = (ulonglong)(-uVar14 & uVar14);
              uVar40 = uVar38 * 2 + 1;
              lVar20 = 0x3f;
              if (uVar40 != 0) {
                for (; uVar40 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                }
              }
              iVar27 = (iVar13 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
              if (iVar27 < iVar35) {
                uVar14 = 0xffffffff;
                do {
                  *(undefined4 *)
                   (lVar32 + (longlong)
                             *(int *)(*(longlong *)(param_1 + 0x7f8) + 0xc + (longlong)iVar27 * 0x10
                                     ) * 4) = 0xffffffff;
                  uVar14 = ~(uint)uVar38 & uVar14;
                  puVar37 = *(uint **)(param_1 + 0x818);
                  if (*(uint **)(param_1 + 0x818) == (uint *)0x0) {
                    puVar37 = (uint *)(param_1 + 0x808);
                  }
                  iVar15 = *(int *)(param_1 + 0x820);
                  iVar27 = (int)uVar34;
                  lVar20 = (longlong)iVar27;
                  uVar16 = puVar37[lVar20] & uVar14;
                  if (uVar16 == 0) {
                    iVar36 = iVar15 + 0x1e;
                    if (-1 < iVar15 + -1) {
                      iVar36 = iVar15 + -1;
                    }
                    iVar36 = iVar36 >> 5;
                    iVar13 = iVar13 + 0x20;
                    iVar25 = iVar36;
                    if (iVar36 < iVar27) {
                      iVar25 = iVar27;
                    }
                    if (iVar27 < iVar36) {
                      lVar11 = 0;
                      do {
                        uVar16 = puVar37[lVar20 + lVar11 + 1];
                        if (uVar16 != 0) {
                          uVar34 = (ulonglong)(iVar27 + (int)lVar11 + 1);
                          uVar14 = 0xffffffff;
                          goto LAB_142ce9934;
                        }
                        iVar13 = iVar13 + 0x20;
                        lVar11 = lVar11 + 1;
                      } while (iVar25 - lVar20 != lVar11);
                      uVar14 = 0xffffffff;
                      lVar20 = (longlong)iVar25;
                    }
                    uVar34 = lVar20 + 1U & 0xffffffff;
                    iVar27 = iVar15;
                  }
                  else {
LAB_142ce9934:
                    uVar38 = (ulonglong)(-uVar16 & uVar16);
                    uVar40 = uVar38 * 2 + 1;
                    lVar20 = 0x3f;
                    if (uVar40 != 0) {
                      for (; uVar40 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                      }
                    }
                    iVar27 = (iVar13 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
                    if (iVar15 <= iVar27) {
                      iVar27 = iVar15;
                    }
                  }
                } while (iVar27 != iVar35);
              }
            }
          }
          else if (0 < iVar13) {
            lVar20 = 0;
            do {
              *(undefined4 *)(lVar32 + lVar20 * 4) = 0xffffffff;
              lVar20 = lVar20 + 1;
            } while (lVar20 < *(int *)(param_1 + 0x840));
          }
LAB_142ce9721:
          iVar13 = 0;
          *(undefined4 *)(param_1 + 0x800) = 0;
          iVar35 = 0;
          if (*(int *)(param_1 + 0x804) < 0) {
            FUN_14472eb64(local_410);
            iVar35 = *(int *)(param_1 + 0x800);
          }
          *(undefined8 *)(param_1 + 0x828) = 0xffffffff;
          *(undefined4 *)(param_1 + 0x820) = 0;
        }
        if ((uint)(iVar35 - iVar13) < uVar28) {
          uVar14 = uVar28 - iVar35;
          if (uVar14 != 0 && iVar35 <= (int)uVar28) {
            iVar13 = *(int *)(param_1 + 0x804);
            iVar27 = iVar35;
            if (iVar13 < (int)uVar28) {
              FUN_14472eb64(local_410);
              iVar27 = *(int *)(param_1 + 0x800);
              iVar13 = *(int *)(param_1 + 0x804);
            }
            *(uint *)(param_1 + 0x800) = iVar27 + uVar14;
            if ((uint)(iVar13 - iVar27) < uVar14) {
              FUN_144869a3c(local_410);
            }
            if (iVar27 < (int)uVar28) {
              lVar32 = *local_410;
              uVar34 = uVar42 & 0xffffffff;
              iVar13 = *(int *)(param_1 + 0x82c);
              puVar22 = (undefined4 *)(uVar34 * 0x10 + lVar32 + -0xc);
              do {
                iVar15 = (int)uVar34;
                if (iVar13 != 0) {
                  *(int *)(lVar32 + (longlong)*(int *)(param_1 + 0x828) * 0x10) = iVar15 + -1;
                }
                puVar22[-1] = 0xffffffff;
                if (*(int *)(param_1 + 0x82c) < 1) {
                  uVar9 = 0xffffffff;
                }
                else {
                  uVar9 = *(undefined4 *)(param_1 + 0x828);
                }
                uVar34 = uVar34 - 1;
                *puVar22 = uVar9;
                *(int *)(param_1 + 0x828) = iVar15 + -1;
                iVar13 = *(int *)(param_1 + 0x82c) + 1;
                *(int *)(param_1 + 0x82c) = iVar13;
                puVar22 = puVar22 + -4;
              } while ((longlong)iVar27 < (longlong)uVar34);
            }
            if (iVar35 == 0) {
              *(uint *)(param_1 + 0x820) = uVar14;
              uVar16 = uVar14 + 0x1f >> 5;
              if (*(int *)(param_1 + 0x824) + 0x1fU >> 5 < uVar16) {
                if ((0x80 < uVar14) || (*(longlong *)(param_1 + 0x818) != 0)) {
                  uVar31 = 0;
                  if (0x80 < uVar14) {
                    uVar31 = uVar16;
                  }
                  FUN_1446efa72(param_1 + 0x818,0,uVar31,4);
                }
                *(uint *)(param_1 + 0x824) = uVar14 + 0x1f & 0xffffffe0;
              }
              pvVar19 = *(void **)(param_1 + 0x818);
              if (*(void **)(param_1 + 0x818) == (void *)0x0) {
                pvVar19 = (void *)(param_1 + 0x808);
              }
              if (uVar14 < 0x101) {
                uVar16 = uVar16 + (uVar16 == 0);
              }
              memset(pvVar19,0,(ulonglong)(uVar16 << 2));
              iVar35 = *(int *)(param_1 + 0x820);
              iVar13 = iVar35 + 0x1f;
              if (-1 < iVar35) {
                iVar13 = iVar35;
              }
              if (iVar35 % 0x20 != 0) {
                pvVar19 = (void *)(param_1 + 0x808);
                if (*(void **)(param_1 + 0x818) != (void *)0x0) {
                  pvVar19 = *(void **)(param_1 + 0x818);
                }
                bVar12 = -(char)(iVar35 % 0x20);
                *(uint *)((longlong)pvVar19 + (longlong)(iVar13 >> 5) * 4) =
                     (uint)(*(int *)((longlong)pvVar19 + (longlong)(iVar13 >> 5) * 4) <<
                           (bVar12 & 0x1f)) >> (bVar12 & 0x1f);
              }
            }
            else if (-1 < (int)uVar14) {
              uVar9 = FUN_144a54ea4(param_1 + 0x808,uVar14);
              FUN_1447c6044(param_1 + 0x808,uVar9,uVar14,0);
            }
          }
          iVar35 = 1;
          if (3 < uVar28) {
            uVar28 = (uVar28 | 1) + 0xe;
            iVar35 = 0x1f;
            if (uVar28 != 0) {
              for (; uVar28 >> iVar35 == 0; iVar35 = iVar35 + -1) {
              }
            }
            iVar35 = 1 << ((byte)iVar35 & 0x1f);
          }
          if ((*(int *)(param_1 + 0x840) == 0) || (*(int *)(param_1 + 0x840) < iVar35)) {
            *(int *)(param_1 + 0x840) = iVar35;
            FUN_144aaec6a(local_410);
          }
        }
        iVar35 = *(int *)(param_1 + 0x860);
        *(uint *)(param_1 + 0x860) = iVar35 + 1U;
        if (*(uint *)(param_1 + 0x864) < iVar35 + 1U) {
          FUN_1417661f0(local_408,iVar35);
        }
        puVar1 = (undefined8 *)(*local_408 + (longlong)iVar35 * 0x10);
        *puVar1 = 0;
        puVar1[1] = 0;
        if ((longlong)(int)uStack_3a0 != 0) {
          fVar41 = (float)(longlong)local_3c8;
          iVar35 = *(int *)(DAT_14c9e7bf8 + 4);
          local_3e8 = local_3a8 + (int)uStack_3a0;
          local_3d0 = param_1 + 0x830;
          local_3e0 = param_1 + 0x808;
          local_400 = (uint *)&DAT_00000001;
          local_3c0 = 0;
          local_3f0 = 0;
          plVar44 = local_3a8;
          uVar9 = local_3f4;
          local_3ec = iVar35;
          local_3b8 = lVar45;
          local_3b0 = uVar42;
          do {
            lVar45 = *(longlong *)
                      (*(longlong *)(param_1 + 0x7e8) +
                      (longlong)*(int *)((longlong)plVar44 + 4) * 8);
            lVar32 = *(longlong *)(lVar45 + 0x28);
            lVar20 = *(longlong *)(lVar32 + 0x1c0);
            if (iVar35 < 0) {
              if (lVar20 != 0) goto LAB_142ce91eb;
LAB_142ce9292:
              uVar24 = 0;
            }
            else {
              uVar24 = 0;
              if (((int)local_400 < iVar35) && (lVar20 != 0)) {
LAB_142ce91eb:
                lVar11 = FUN_14485b2b4(lVar20,uVar9);
                if (*(longlong *)(lVar11 + 0x18) == 0) goto LAB_142ce9292;
                uVar24 = 0;
                uVar28 = 0;
                if ((*(byte *)(*(longlong *)(*(longlong *)(lVar11 + 0x18) + 0x28) + 0x247) & 0x10)
                    != 0) {
                  plVar7 = *(longlong **)(*(longlong *)(lVar45 + 0x28) + 0x1c0);
                  if (plVar7 != (longlong *)0x0) {
                    lVar11 = (**(code **)(*plVar7 + 0x40))();
                    uVar28 = *(uint *)(lVar11 + 0xc);
                  }
                  iVar13 = *(int *)(param_1 + 0x800);
                  iVar35 = *(int *)(param_1 + 0x82c);
                  if (iVar13 != iVar35) {
                    lVar11 = *(longlong *)(param_1 + 0x838);
                    if (*(longlong *)(param_1 + 0x838) == 0) {
                      lVar11 = local_3d0;
                    }
                    iVar27 = *(int *)(lVar11 + (ulonglong)(*(int *)(param_1 + 0x840) - 1U & uVar28)
                                               * 4);
                    if (iVar27 != -1) {
                      do {
                        lVar11 = *local_410 + (longlong)iVar27 * 0x10;
                        if (uVar28 == *(uint *)(*local_410 + (longlong)iVar27 * 0x10)) {
                          if (lVar11 != 0) {
                            local_3d8 = (ulonglong)
                                        CONCAT31((int3)((uint)iVar35 >> 8),
                                                 *(undefined1 *)(lVar11 + 4));
                            iVar35 = *(int *)(param_1 + 0x860);
                            *(uint *)(param_1 + 0x860) = iVar35 + 1U;
                            if (iVar35 + 1U <= *(uint *)(param_1 + 0x864)) goto LAB_142ce9527;
                            goto LAB_142ce951a;
                          }
                          break;
                        }
                        iVar27 = *(int *)(lVar11 + 8);
                      } while (iVar27 != -1);
                    }
                  }
                  if ((uint)(iVar13 - iVar35) < (uint)local_3b0) {
                    local_3d8 = (ulonglong)*(uint *)(param_1 + 0x850);
                    if (iVar35 == 0) {
                      *(int *)(param_1 + 0x800) = iVar13 + 1;
                      if (*(int *)(param_1 + 0x804) == iVar13) {
                        FUN_144869a3c(local_410,iVar13);
                      }
                      lVar30 = (longlong)iVar13;
                      iVar35 = FUN_144a54ea4(local_3e0,1);
                      lVar11 = *(longlong *)(param_1 + 0x818);
                      if (*(longlong *)(param_1 + 0x818) == 0) {
                        lVar11 = local_3e0;
                      }
                      iVar27 = iVar35 + 0x1f;
                      if (-1 < iVar35) {
                        iVar27 = iVar35;
                      }
                      bVar12 = (byte)iVar35 & 0x1f;
                      puVar37 = (uint *)(lVar11 + (longlong)(iVar27 >> 5) * 4);
                      *puVar37 = *puVar37 & (-2 << bVar12 | 0xfffffffeU >> 0x20 - bVar12);
                    }
                    else {
                      iVar13 = *(int *)(param_1 + 0x828);
                      lVar30 = (longlong)iVar13;
                      iVar27 = *(int *)(*(longlong *)(param_1 + 0x7f8) + 4 + lVar30 * 0x10);
                      *(int *)(param_1 + 0x828) = iVar27;
                      *(int *)(param_1 + 0x82c) = iVar35 + -1;
                      if (iVar35 + -1 != 0) {
                        *(undefined4 *)(*(longlong *)(param_1 + 0x7f8) + (longlong)iVar27 * 0x10) =
                             0xffffffff;
                      }
                    }
                    lVar11 = *(longlong *)(param_1 + 0x818);
                    if (*(longlong *)(param_1 + 0x818) == 0) {
                      lVar11 = local_3e0;
                    }
                    iVar35 = iVar13 + 0x1f;
                    if (-1 < iVar13) {
                      iVar35 = iVar13;
                    }
                    puVar37 = (uint *)(lVar11 + (longlong)(iVar35 >> 5) * 4);
                    *puVar37 = *puVar37 | 1 << ((byte)iVar13 & 0x1f);
                    lVar11 = *(longlong *)(param_1 + 0x7f8);
                    lVar30 = lVar30 * 0x10;
                    uVar42 = local_3d8 << 0x20 | (ulonglong)uVar28;
                    *(ulonglong *)(lVar11 + lVar30) = uVar42;
                    *(undefined4 *)(lVar11 + 8 + lVar30) = 0xffffffff;
                    uVar14 = *(int *)(param_1 + 0x800) - *(int *)(param_1 + 0x82c);
                    if ((uVar14 != 0) && (uVar14 != 1)) {
                      lVar23 = *(longlong *)(param_1 + 0x838);
                      if (*(longlong *)(param_1 + 0x838) == 0) {
                        lVar23 = local_3d0;
                      }
                      iVar35 = *(int *)(lVar23 + (ulonglong)
                                                 (*(int *)(param_1 + 0x840) - 1U & uVar28) * 4);
                      if (iVar35 != -1) {
                        do {
                          puVar2 = (ulonglong *)(*local_410 + (longlong)iVar35 * 0x10);
                          if (*(uint *)(*local_410 + (longlong)iVar35 * 0x10) == uVar28) {
                            *puVar2 = uVar42;
                            FUN_1471d4796(local_410,iVar13);
                            goto LAB_142ce9437;
                          }
                          iVar35 = (int)puVar2[1];
                        } while (iVar35 != -1);
                      }
                    }
                    if (uVar14 < 4) {
                      iVar35 = 1;
                    }
                    else {
                      uVar42 = (ulonglong)(uVar14 & 0xfffffffe) + 0xf;
                      lVar23 = 0x3f;
                      if (uVar42 != 0) {
                        for (; uVar42 >> lVar23 == 0; lVar23 = lVar23 + -1) {
                        }
                      }
                      iVar35 = 1 << ((byte)lVar23 & 0x1f);
                    }
                    if (((int)uVar14 < 1) || (iVar35 <= *(int *)(param_1 + 0x840))) {
                      uVar28 = *(int *)(param_1 + 0x840) - 1U & uVar28;
                      *(uint *)(lVar11 + lVar30 + 0xc) = uVar28;
                      lVar23 = *(longlong *)(param_1 + 0x838);
                      if (*(longlong *)(param_1 + 0x838) == 0) {
                        lVar23 = local_3d0;
                      }
                      *(undefined4 *)(lVar11 + lVar30 + 8) =
                           *(undefined4 *)
                            (lVar23 + ((longlong)*(int *)(param_1 + 0x840) - 1U &
                                      (longlong)(int)uVar28) * 4);
                      lVar11 = *(longlong *)(param_1 + 0x838);
                      if (*(longlong *)(param_1 + 0x838) == 0) {
                        lVar11 = local_3d0;
                      }
                      *(int *)(lVar11 + ((longlong)*(int *)(param_1 + 0x840) - 1U &
                                        (longlong)(int)uVar28) * 4) = iVar13;
                    }
                    else {
                      *(int *)(param_1 + 0x840) = iVar35;
                      FUN_144aaec6a(local_410);
                    }
LAB_142ce9437:
                    uVar9 = local_3f4;
                    iVar35 = *(int *)(param_1 + 0x850);
                    *(uint *)(param_1 + 0x850) = iVar35 + 1U;
                    if (*(uint *)(param_1 + 0x854) < iVar35 + 1U) {
                      FUN_1471d4808(local_3b8,iVar35);
                    }
                    lVar11 = *(longlong *)(param_1 + 0x848);
                    lVar30 = (longlong)iVar35 * 0x20;
                    iVar27 = (int)local_3c8;
                    iVar13 = local_3f0 * iVar27;
                    iVar35 = (int)local_3c0 * iVar27;
                    *(ulonglong *)(lVar11 + 8 + lVar30) = CONCAT44(iVar13,iVar35);
                    *(ulonglong *)(lVar11 + 0x10 + lVar30) =
                         CONCAT44(iVar13 + iVar27,iVar35 + iVar27);
                    *(float *)(lVar11 + 0x18 + lVar30) = ((float)iVar35 + 0.5) / (fVar41 * fVar49);
                    uVar28 = (int)local_3c0 + 1;
                    fVar53 = (float)uVar28;
                    *(float *)(lVar11 + 0x1c + lVar30) = ((float)iVar13 + 0.5) / (fVar41 * fVar49);
                    local_3f0 = local_3f0 + (uint)(fVar49 == fVar53);
                    *(longlong *)(lVar11 + lVar30) = lVar20;
                    local_3c0 = 0;
                    if (fVar49 != fVar53) {
                      local_3c0 = (ulonglong)uVar28;
                    }
                    if (NAN(fVar49) || NAN(fVar53)) {
                      local_3c0 = (ulonglong)uVar28;
                    }
                    iVar35 = *(int *)(param_1 + 0x860);
                    *(uint *)(param_1 + 0x860) = iVar35 + 1U;
                    if (*(uint *)(param_1 + 0x864) < iVar35 + 1U) {
LAB_142ce951a:
                      FUN_1417661f0(local_408,iVar35);
                    }
LAB_142ce9527:
                    lVar20 = *local_408;
                    lVar11 = (longlong)iVar35 * 0x10;
                    *(undefined8 *)(lVar20 + 8 + lVar11) = 0;
                    *(longlong *)(lVar20 + lVar11) = lVar45;
                    *(char *)(lVar20 + 8 + lVar11) = (char)local_3d8;
                    uVar24 = SUB81(local_400,0);
                    local_400 = (uint *)(ulonglong)((int)local_400 + 1);
                    iVar35 = local_3ec;
                  }
                  else {
                    uVar24 = 0;
                    iVar35 = local_3ec;
                  }
                }
              }
            }
            *(undefined1 *)(lVar32 + 0x1d6) = uVar24;
            plVar44 = plVar44 + 1;
          } while (plVar44 != local_3e8);
        }
        if (local_3a8 != (longlong *)0x0) {
          FUN_1400020a8(local_3a8);
        }
        goto LAB_142ce9677;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar35);
  }
LAB_142ce9677:
  if ((local_90 ^ (ulonglong)auStack_438) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_142ce8c09:
  uVar6 = *(undefined8 *)pfVar29;
  *(undefined8 *)pfVar29 = *(undefined8 *)pfVar39;
  *(undefined8 *)pfVar39 = uVar6;
  iVar35 = iVar35 + -1;
  pfVar33 = pfVar33 + -4;
  if ((longlong)pfVar43 - (longlong)pfVar46 < (longlong)pfVar26 - (longlong)pfVar47) {
    if (pfVar21 < pfVar10) {
      *pplVar18 = (longlong *)pfVar21;
      pplVar18[1] = (longlong *)pfVar10;
      *(int *)(pplVar18 + 2) = iVar35;
      pplVar18 = pplVar18 + 3;
    }
    pfVar21 = pfVar29;
    pfVar26 = pfVar43;
    if (pfVar39 <= pfVar29 + 2) goto LAB_142ce8e25;
  }
  else {
    if (pfVar29 + 2 < pfVar39) {
      *pplVar18 = (longlong *)pfVar29;
      pplVar18[1] = (longlong *)pfVar33;
      *(int *)(pplVar18 + 2) = iVar35;
      pplVar18 = pplVar18 + 3;
    }
    pfVar29 = pfVar47;
    pfVar33 = pfVar10;
    pfVar26 = pfVar10;
    if (pfVar10 <= pfVar21) goto LAB_142ce8e25;
  }
  iVar13 = (int)((ulonglong)((longlong)pfVar26 - (longlong)pfVar29) >> 3);
  uVar42 = (ulonglong)(iVar13 + 1);
  pfVar10 = pfVar33;
  pfVar46 = pfVar29;
  if (iVar35 == 0) goto LAB_142ce8c9d;
  goto LAB_142ce8b84;
}



// FUNCTION 142ce996e FUN_142ce996e body=4063 status=ok
// SIG undefined FUN_142ce996e(void)

void FUN_142ce996e(longlong *param_1,uint *param_2,byte param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  uint *puVar13;
  longlong *plVar14;
  int *piVar15;
  longlong *plVar16;
  uint *puVar17;
  byte bVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong *plVar21;
  longlong *plVar22;
  longlong lVar23;
  longlong *plVar24;
  longlong lVar25;
  int iVar26;
  longlong *plVar27;
  longlong lVar28;
  longlong *plVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  longlong *plVar32;
  ulonglong uVar33;
  int iVar34;
  longlong lVar35;
  longlong *plVar36;
  longlong lVar37;
  longlong *plVar38;
  ulonglong uVar39;
  bool bVar40;
  byte bVar41;
  float fVar42;
  undefined1 auStack_438 [47];
  byte local_409;
  longlong *local_408;
  uint *local_400;
  int local_3f4;
  uint *local_3f0;
  uint local_3e4;
  longlong *local_3e0;
  longlong local_3d8;
  ulonglong local_3d0;
  longlong local_3c8;
  longlong *local_3c0;
  undefined8 local_3b8;
  longlong local_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  longlong local_398;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  longlong local_388;
  undefined8 uStack_380;
  longlong local_378;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_438;
  local_409 = param_3;
  cVar3 = (**(code **)(*param_1 + 0x50))();
  local_408 = param_1;
  if (cVar3 != '\0') {
    local_388 = 0;
    uStack_380 = 0;
    iVar26 = (int)param_1[0x7e];
    if (0 < iVar26) {
      param_1 = param_1 + 0x13;
      lVar23 = 0;
      do {
        iVar34 = *(int *)(local_408[0x7d] + 0x3260 + lVar23 * 0x13c10);
        if (0 < iVar34) {
          lVar28 = local_408[0x7d] + lVar23 * 0x13c10;
          lVar25 = 0;
          do {
            uVar39 = uStack_380;
            lVar1 = *(longlong *)(*(longlong *)(lVar28 + 0x3258) + lVar25 * 8);
            lVar35 = (longlong)(int)uStack_380;
            if (lVar35 != 0) {
              uVar20 = 0;
              do {
                if (*(longlong *)(local_388 + uVar20) == lVar1) {
                  if ((int)(~uVar20 >> 3) != 0) goto LAB_142ce9aa6;
                  break;
                }
                uVar20 = uVar20 + 8;
              } while (lVar35 * 8 - uVar20 != 0);
            }
            uVar6 = (int)uStack_380 + 1;
            uStack_380 = CONCAT44(uStack_380._4_4_,uVar6);
            if (uStack_380._4_4_ < uVar6) {
              local_3e0 = param_1;
              FUN_1401baee0(&local_388,uVar39 & 0xffffffff);
              param_1 = local_3e0;
            }
            *(longlong *)(local_388 + lVar35 * 8) = lVar1;
            iVar34 = *(int *)(lVar28 + 0x3260);
LAB_142ce9aa6:
            lVar25 = lVar25 + 1;
          } while (lVar25 < iVar34);
          iVar26 = (int)local_408[0x7e];
        }
        lVar23 = lVar23 + 1;
      } while (lVar23 < iVar26);
      if (0 < (int)uStack_380) {
        lVar23 = 0;
        do {
          plVar16 = *(longlong **)(*(longlong *)(local_388 + lVar23 * 8) + 8);
          (**(code **)(*plVar16 + 0xd0))(plVar16,param_1,param_2 + 6);
          lVar23 = lVar23 + 1;
        } while (lVar23 < (int)uStack_380);
      }
    }
    FUN_140046324(&local_388);
  }
  plVar16 = local_408;
  uVar6 = (*(int *)(local_408[1] + 0x3558) - *(int *)(local_408[1] + 0x3584)) + param_2[8];
  if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar6);
  }
  local_3f0 = param_2 + 0x12;
  param_2[0x14] = 0;
  if (param_2[0x15] != uVar6) {
    FUN_1402d0ef4(local_3f0);
  }
  lVar23 = plVar16[1];
  local_3e0 = (longlong *)CONCAT44(local_3e0._4_4_,*(undefined4 *)(lVar23 + 0x520c));
  uVar39 = 0;
  local_3b8 = 0;
  if ((*(byte *)((longlong)plVar16 + 0xeb) & 4) != 0) {
    uVar12 = FUN_144ab8e82();
    local_3b8 = CONCAT71((int7)((ulonglong)uVar12 >> 8),(int)uVar12 != 0);
    lVar23 = plVar16[1];
  }
  puVar17 = (uint *)(lVar23 + 0x3560);
  iVar26 = *(int *)(lVar23 + 0x3578);
  if (iVar26 == 0) {
    uVar20 = 1;
    iVar34 = 0;
    iVar7 = 0;
  }
  else {
    puVar13 = *(uint **)(lVar23 + 0x3570);
    if (*(uint **)(lVar23 + 0x3570) == (uint *)0x0) {
      puVar13 = puVar17;
    }
    uVar6 = *puVar13;
    if (uVar6 == 0) {
      iVar34 = iVar26 + 0x1e;
      if (-1 < iVar26 + -1) {
        iVar34 = iVar26 + -1;
      }
      uVar39 = 0;
      uVar20 = (ulonglong)(uint)(iVar34 >> 5);
      if (iVar34 >> 5 < 1) {
        uVar20 = uVar39;
      }
      iVar34 = 0;
      do {
        if (uVar20 == uVar39) goto LAB_142cea2c6;
        iVar34 = iVar34 + 0x20;
        uVar6 = puVar13[uVar39 + 1];
        uVar39 = uVar39 + 1;
      } while (uVar6 == 0);
    }
    else {
      uVar39 = 0;
      iVar34 = 0;
    }
    uVar20 = (ulonglong)(-uVar6 & uVar6);
    uVar30 = uVar20 * 2 + 1;
    lVar28 = 0x3f;
    if (uVar30 != 0) {
      for (; uVar30 >> lVar28 == 0; lVar28 = lVar28 + -1) {
      }
    }
    iVar7 = (iVar34 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
    if (iVar26 <= iVar7) {
      iVar7 = iVar26;
    }
  }
  if (iVar26 <= iVar7) {
LAB_142cea2c6:
    if (0 < (int)param_2[8]) {
      iVar26 = 0;
      do {
        lVar23 = (longlong)(int)param_2[0x14];
        uVar6 = param_2[0x14] + 1;
        param_2[0x14] = uVar6;
        if (param_2[0x15] < uVar6) {
          FUN_1471db584(local_3f0);
        }
        lVar28 = *(longlong *)(param_2 + 0x12);
        *(undefined8 *)(lVar28 + 8 + lVar23 * 0x18) = 0;
        *(int *)(lVar28 + 0x10 + lVar23 * 0x18) = iVar26;
        *(undefined1 *)(lVar28 + 0x14 + lVar23 * 0x18) = 0;
        *(undefined4 *)(lVar28 + lVar23 * 0x18) = 1;
        iVar26 = iVar26 + 1;
      } while (iVar26 < (int)param_2[8]);
    }
    uVar6 = param_2[0x14];
    if (1 < (longlong)(int)uVar6) {
      lVar23 = *(longlong *)local_3f0;
      memset(&local_378,0,0x2f0);
      uStack_380 = (lVar23 + (longlong)(int)uVar6 * 0x18) - 0x18;
      local_388 = lVar23;
      fVar42 = logf((float)(int)uVar6);
      local_378 = CONCAT44(local_378._4_4_,(int)(longlong)(fVar42 + fVar42));
      plVar16 = &local_388;
      do {
        plVar22 = (longlong *)*plVar16;
        plVar27 = (longlong *)plVar16[1];
        iVar26 = (int)plVar16[2];
        iVar34 = (int)((ulonglong)((longlong)plVar27 - (longlong)plVar22) >> 3) * -0x55555555;
        uVar6 = iVar34 + 1;
        plVar24 = plVar22;
        plVar14 = plVar27;
        if (iVar26 != 0) {
LAB_142cea3aa:
          if (8 < (int)uVar6) {
            uVar39 = (ulonglong)(uVar6 >> 1);
            lVar23 = plVar22[uVar39 * 3 + 2];
            lVar28 = plVar22[uVar39 * 3];
            lVar25 = (plVar22 + uVar39 * 3)[1];
            plVar22[uVar39 * 3 + 2] = plVar22[2];
            lVar1 = plVar22[1];
            plVar22[uVar39 * 3] = *plVar22;
            (plVar22 + uVar39 * 3)[1] = lVar1;
            plVar22[2] = lVar23;
            *plVar22 = lVar28;
            plVar22[1] = lVar25;
            plVar32 = plVar14 + 3;
            plVar21 = plVar22;
            do {
              plVar2 = plVar21 + 3;
              plVar29 = plVar21 + 3;
              do {
                plVar38 = plVar29;
                plVar21 = plVar2;
                if (plVar14 < plVar21) break;
                plVar2 = plVar21 + 3;
                plVar29 = plVar38 + 3;
              } while ((int)*plVar21 <= (int)*plVar22);
              plVar2 = plVar32 + -6;
              do {
                plVar29 = plVar32;
                plVar36 = plVar2;
                plVar32 = plVar29 + -3;
                if (plVar32 <= plVar22) break;
                plVar2 = plVar36 + -3;
              } while ((int)*plVar22 <= (int)*plVar32);
              if (plVar32 < plVar21) goto LAB_142cea498;
              lVar23 = plVar21[2];
              lVar28 = *plVar21;
              lVar25 = plVar21[1];
              plVar21[2] = plVar29[-1];
              lVar1 = plVar29[-2];
              *plVar21 = *plVar32;
              plVar21[1] = lVar1;
              plVar29[-1] = lVar23;
              *plVar32 = lVar28;
              plVar29[-2] = lVar25;
            } while( true );
          }
          if (plVar22 < plVar14) {
            do {
              plVar27 = plVar22;
              if (plVar22 + 3 <= plVar14) {
                plVar24 = plVar22 + 3;
                iVar26 = (int)*plVar22;
                do {
                  iVar34 = (int)*plVar24;
                  iVar7 = iVar26;
                  if (iVar26 <= iVar34) {
                    iVar7 = iVar34;
                  }
                  if (iVar26 < iVar34) {
                    plVar27 = plVar24;
                  }
                  plVar24 = plVar24 + 3;
                  iVar26 = iVar7;
                } while (plVar24 <= plVar14);
              }
              local_398 = plVar27[2];
              lVar23 = *plVar27;
              uVar39 = plVar27[1];
              plVar27[2] = plVar14[2];
              lVar28 = plVar14[1];
              *plVar27 = *plVar14;
              plVar27[1] = lVar28;
              plVar14[2] = local_398;
              local_3a8._0_4_ = (int)lVar23;
              local_3a8._4_4_ = (int)((ulonglong)lVar23 >> 0x20);
              uStack_3a0._0_4_ = (int)uVar39;
              uStack_3a0._4_4_ = (int)(uVar39 >> 0x20);
              *(int *)plVar14 = (int)local_3a8;
              *(int *)((longlong)plVar14 + 4) = local_3a8._4_4_;
              *(int *)(plVar14 + 1) = (int)uStack_3a0;
              *(int *)((longlong)plVar14 + 0xc) = uStack_3a0._4_4_;
              plVar14 = plVar14 + -3;
              local_3a8 = lVar23;
              uStack_3a0 = uVar39;
            } while (plVar22 < plVar14);
          }
          goto LAB_142cea825;
        }
LAB_142cea56a:
        if (uVar6 != 0) {
          iVar26 = (iVar34 - (iVar34 + -1 >> 0x1f)) + -1 >> 1;
          iVar34 = iVar26;
joined_r0x000142cea591:
          do {
            iVar7 = iVar26 * 2 + 1;
            if (iVar7 < (int)uVar6) {
              iVar10 = iVar26 * 2 + 2;
              if ((iVar10 < (int)uVar6) &&
                 ((int)plVar22[(longlong)iVar7 * 3] <= (int)plVar22[(longlong)iVar10 * 3])) {
                iVar7 = iVar10;
              }
              if ((int)plVar22[(longlong)iVar26 * 3] < (int)plVar22[(longlong)iVar7 * 3]) {
                plVar14 = plVar22 + (longlong)iVar26 * 3;
                plVar27 = plVar22 + (longlong)iVar7 * 3;
                local_398 = plVar14[2];
                lVar23 = *plVar14;
                uVar39 = plVar14[1];
                plVar14[2] = plVar27[2];
                lVar28 = plVar27[1];
                *plVar14 = *plVar27;
                plVar14[1] = lVar28;
                plVar27[2] = local_398;
                local_3a8._0_4_ = (int)lVar23;
                local_3a8._4_4_ = (int)((ulonglong)lVar23 >> 0x20);
                uStack_3a0._0_4_ = (int)uVar39;
                uStack_3a0._4_4_ = (int)(uVar39 >> 0x20);
                *(int *)plVar27 = (int)local_3a8;
                *(int *)((longlong)plVar27 + 4) = local_3a8._4_4_;
                *(int *)(plVar27 + 1) = (int)uStack_3a0;
                *(int *)((longlong)plVar27 + 0xc) = uStack_3a0._4_4_;
                iVar26 = iVar7;
                local_3a8 = lVar23;
                uStack_3a0 = uVar39;
                goto joined_r0x000142cea591;
              }
            }
            bVar40 = iVar34 != 0;
            iVar26 = iVar34 + -1;
            iVar34 = iVar26;
          } while (bVar40);
          if (1 < (int)uVar6) {
            uVar20 = (ulonglong)uVar6 - 1;
            local_398 = plVar22[2];
            lVar23 = *plVar22;
            uVar39 = plVar22[1];
            plVar22[2] = plVar22[uVar20 * 3 + 2];
            lVar28 = (plVar22 + uVar20 * 3)[1];
            *plVar22 = plVar22[uVar20 * 3];
            plVar22[1] = lVar28;
            plVar22[uVar20 * 3 + 2] = local_398;
            local_3a8._0_4_ = (int)lVar23;
            local_3a8._4_4_ = (int)((ulonglong)lVar23 >> 0x20);
            uStack_3a0._0_4_ = (int)uVar39;
            uStack_3a0._4_4_ = (int)(uVar39 >> 0x20);
            plVar14 = plVar22 + uVar20 * 3;
            *(int *)plVar14 = (int)local_3a8;
            *(int *)((longlong)plVar14 + 4) = local_3a8._4_4_;
            *(int *)(plVar14 + 1) = (int)uStack_3a0;
            *(int *)((longlong)plVar14 + 0xc) = uStack_3a0._4_4_;
            local_3a8 = lVar23;
            uStack_3a0 = uVar39;
            if (uVar6 != 2) {
              do {
                iVar26 = 0;
                iVar7 = 1;
                iVar34 = 0;
                do {
                  iVar26 = iVar26 + 2;
                  iVar10 = iVar7;
                  if (((longlong)iVar26 < (longlong)uVar20) &&
                     ((int)plVar22[(longlong)iVar7 * 3] <= (int)plVar22[(longlong)iVar26 * 3])) {
                    iVar10 = iVar26;
                  }
                  if ((int)plVar22[(longlong)iVar10 * 3] <= (int)plVar22[(longlong)iVar34 * 3])
                  break;
                  plVar14 = plVar22 + (longlong)iVar34 * 3;
                  plVar27 = plVar22 + (longlong)iVar10 * 3;
                  lVar23 = plVar14[2];
                  lVar28 = *plVar14;
                  lVar25 = plVar14[1];
                  plVar14[2] = plVar27[2];
                  lVar1 = plVar27[1];
                  *plVar14 = *plVar27;
                  plVar14[1] = lVar1;
                  plVar27[2] = lVar23;
                  *plVar27 = lVar28;
                  plVar27[1] = lVar25;
                  iVar26 = iVar10 * 2;
                  iVar7 = iVar10 * 2 + 1;
                  iVar34 = iVar10;
                } while ((longlong)iVar7 < (longlong)uVar20);
                uVar39 = uVar20 - 1;
                local_398 = plVar22[2];
                lVar23 = *plVar22;
                uVar30 = plVar22[1];
                plVar22[2] = plVar22[uVar39 * 3 + 2];
                lVar28 = (plVar22 + uVar39 * 3)[1];
                *plVar22 = plVar22[uVar39 * 3];
                plVar22[1] = lVar28;
                plVar22[uVar39 * 3 + 2] = local_398;
                local_3a8._0_4_ = (int)lVar23;
                local_3a8._4_4_ = (int)((ulonglong)lVar23 >> 0x20);
                uStack_3a0._0_4_ = (int)uVar30;
                uStack_3a0._4_4_ = (int)(uVar30 >> 0x20);
                plVar14 = plVar22 + uVar39 * 3;
                *(int *)plVar14 = (int)local_3a8;
                *(int *)((longlong)plVar14 + 4) = local_3a8._4_4_;
                *(int *)(plVar14 + 1) = (int)uStack_3a0;
                *(int *)((longlong)plVar14 + 0xc) = uStack_3a0._4_4_;
                bVar40 = 2 < uVar20;
                uVar20 = uVar39;
                local_3a8 = lVar23;
                uStack_3a0 = uVar30;
              } while (bVar40);
            }
          }
        }
LAB_142cea825:
        plVar16 = plVar16 + -3;
      } while (&local_388 <= plVar16);
      uVar6 = param_2[0x14];
    }
    *param_2 = uVar6;
    param_2[1] = uVar6;
    param_2[2] = uVar6;
    param_2[3] = uVar6;
    if (0 < (int)uVar6) {
      puVar17 = *(uint **)local_3f0;
      uVar39 = 0;
      uVar30 = (ulonglong)uVar6;
      uVar20 = (ulonglong)uVar6;
      uVar33 = (ulonglong)uVar6;
      uVar31 = (ulonglong)uVar6;
      do {
        uVar9 = *puVar17;
        bVar41 = (uVar9 & 4) == 0;
        if ((((ulonglong)local_3e0 & 2) != 0) && ((uVar9 & 4) != 0)) {
          bVar41 = (byte)puVar17[5];
        }
        uVar19 = (uint)uVar39;
        uVar8 = uVar9;
        if (((char)uVar9 < '\0') && ((uint)uVar30 == uVar6)) {
          param_2[3] = uVar19;
          uVar8 = *puVar17;
          uVar30 = uVar39 & 0xffffffff;
        }
        if (((uVar8 & 0x20) != 0) && ((uint)uVar20 == uVar6)) {
          *param_2 = uVar19;
          uVar8 = *puVar17;
          uVar20 = uVar39 & 0xffffffff;
        }
        if (((uVar8 & 0x40) != 0) && ((uint)uVar33 == uVar6)) {
          param_2[1] = uVar19;
          uVar33 = uVar39 & 0xffffffff;
        }
        if (((((uVar9 & 0x18) == 0 & bVar41) == 0) && ((*puVar17 & 0xc0) == 0x40)) &&
           ((uint)uVar31 == uVar6)) {
          param_2[2] = uVar19;
          uVar31 = uVar39 & 0xffffffff;
        }
        uVar39 = uVar39 + 1;
        puVar17 = puVar17 + 6;
      } while (uVar6 != uVar39);
      if ((int)(uint)uVar30 < (int)uVar31) {
        param_2[2] = (uint)uVar30;
      }
    }
    if ((local_80 ^ (ulonglong)auStack_438) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  local_3c0 = plVar16 + 0x13;
  uVar6 = 0xffffffff;
  local_409 = local_409 ^ 1;
  local_400 = puVar17;
  local_3d8 = lVar23;
LAB_142ce9c70:
  lVar28 = *(longlong *)(*(longlong *)(lVar23 + 0x3550) + 0x30 + (longlong)iVar7 * 0x40);
  lVar25 = *(longlong *)(lVar28 + 0x28);
  if (((*(float *)(lVar25 + 0x40) * *(float *)(lVar25 + 0x40) < 1e-05) &&
      (*(float *)(lVar25 + 0x44) * *(float *)(lVar25 + 0x44) < 1e-05)) &&
     (*(float *)(lVar25 + 0x48) * *(float *)(lVar25 + 0x48) < 1e-05)) goto LAB_142ce9f00;
  bVar41 = *(byte *)(lVar25 + 0x1d0);
  if ((bVar41 & 4) == 0) {
LAB_142ce9ca7:
    lVar25 = plVar16[0x7e];
    if (0 < (longlong)(int)lVar25) {
      lVar37 = *(longlong *)(lVar23 + 0x3550) + (longlong)iVar7 * 0x40;
      lVar1 = plVar16[0x7d];
      lVar35 = 0;
      local_3f4 = iVar34;
      local_3e4 = uVar6;
      local_3d0 = uVar39;
      do {
        cVar3 = FUN_1400bd22a(lVar28,lVar1 + lVar35,0);
        if (cVar3 != '\0') {
          uVar6 = param_2[0x14];
          param_2[0x14] = uVar6 + 1;
          if (param_2[0x15] < uVar6 + 1) {
            FUN_1471db584(local_3f0,uVar6);
          }
          plVar16 = local_408;
          puVar17 = (uint *)(*(longlong *)local_3f0 + (longlong)(int)uVar6 * 0x18);
          *(longlong *)(puVar17 + 2) = lVar28;
          puVar17[4] = 0xffffffff;
          *(undefined1 *)(puVar17 + 5) = 0;
          *puVar17 = 0x20;
          uVar6 = *(uint *)(lVar37 + 0x38) & 3 | 0x20;
          *puVar17 = uVar6;
          uVar9 = 0;
          if ((char)local_3b8 != '\0') {
            bVar41 = FUN_144b17e5a(local_408,lVar28);
            uVar9 = (uint)bVar41 << 4;
            uVar6 = *puVar17;
          }
          *puVar17 = uVar6 & 0xffffffef | uVar9;
          uVar6 = 0;
          if (((*(byte *)((longlong)plVar16 + 0xea) & 8) == 0) ||
             (lVar23 = *(longlong *)(*(longlong *)(lVar28 + 0x28) + 0x1c0), uVar6 = 0, lVar23 == 0))
          goto LAB_142ce9dc3;
          plVar14 = (longlong *)FUN_14485b2b4(lVar23,*(undefined4 *)(plVar16[1] + 8));
          cVar3 = (**(code **)(*plVar14 + 0xd8))(plVar14);
          uVar6 = 0;
          if (cVar3 == '\0') goto LAB_142ce9dc3;
          (**(code **)(**(longlong **)(lVar28 + 0x28) + 0x10))();
          iVar26 = (int)plVar16[0x7e];
          uVar6 = 0;
          if (iVar26 < 1) goto LAB_142ce9dc3;
          lVar23 = 0;
          lVar25 = 0;
          goto LAB_142cea051;
        }
        lVar35 = lVar35 + 0x13c10;
        plVar16 = local_408;
        lVar23 = local_3d8;
        puVar17 = local_400;
        uVar39 = local_3d0;
        iVar34 = local_3f4;
        uVar6 = local_3e4;
      } while ((longlong)(int)lVar25 * 0x13c10 - lVar35 != 0);
    }
  }
  else {
    plVar16 = local_408;
    if ((*(byte *)(lVar28 + 0xe4) & 1) == 0) {
      if ((bVar41 & 8) != 0) goto LAB_142ce9ca7;
    }
    else if (((bVar41 & 8) != 0) && (DAT_14c760480 <= *(int *)(lVar28 + 0xf8))) goto LAB_142ce9ca7;
  }
  goto LAB_142ce9f00;
LAB_142cea051:
  do {
    lVar1 = plVar16[0x7d];
    if (*(char *)(*(longlong *)(lVar28 + 0x28) + 0x1e8) == '\0') {
      local_378 = *(longlong *)(lVar1 + 0x1058 + lVar23);
      plVar14 = (longlong *)(lVar1 + 0x1048 + lVar23);
      local_388 = *plVar14;
      uStack_380 = plVar14[1];
    }
    local_3c8 = lVar25;
    if ((*(byte *)(*(longlong *)(lVar1 + 0x3780 + lVar23) + 0x40 +
                  (longlong)*(int *)(lVar28 + 0x34) * 0x78) & 1) != 0) {
      local_398 = local_378;
      uStack_390 = uStack_370;
      uStack_38c = uStack_36c;
      local_3a8 = local_388;
      uStack_3a0 = uStack_380;
      local_3b0 = lVar23;
      fVar42 = (float)FUN_140426670(lVar1 + lVar23,&local_3a8);
      if (0.00390625 < fVar42) {
        uVar6 = 4;
        break;
      }
      iVar26 = (int)plVar16[0x7e];
      lVar23 = local_3b0;
    }
    lVar25 = local_3c8 + 1;
    lVar23 = lVar23 + 0x13c10;
  } while (lVar25 < iVar26);
LAB_142ce9dc3:
  uVar9 = *puVar17;
  *puVar17 = uVar9 & 0xfffffffb | uVar6;
  if (((*(byte *)(plVar16[0x7d] + 0x125b0 + lVar35) & 0x80) != 0) ||
     (uVar8 = 0, *(char *)(*(longlong *)(lVar28 + 0x28) + 0x1e9) != '\x01')) {
    uVar8 = 8;
  }
  uVar8 = uVar9 & 0xfffffff3 | uVar6 | uVar8;
  *puVar17 = uVar8;
  lVar23 = *(longlong *)(lVar28 + 0x28);
  if (((lVar23 == 0) || (*(char *)(lVar23 + 0x1e8) == '\0')) || (*(longlong *)(lVar23 + 0x1c0) == 0)
     ) {
    bVar41 = 0;
  }
  else {
    lVar23 = FUN_14485b2b4(*(longlong *)(lVar23 + 0x1c0),*(undefined4 *)((longlong)plVar16 + 0x8a4))
    ;
    if (*(longlong *)(lVar23 + 0x18) == 0) {
      bVar41 = 0;
    }
    else {
      bVar41 = (*(byte *)(*(longlong *)(*(longlong *)(lVar23 + 0x18) + 0x28) + 0x247) & 0x10) >> 4;
    }
    uVar8 = *puVar17;
  }
  *(byte *)(puVar17 + 5) = bVar41;
  *puVar17 = uVar8 | 0x20;
  uVar6 = *(uint *)(lVar37 + 0x38);
  if ((((uVar6 & 3) != 0) && ((*(byte *)(*(longlong *)plVar16[0x14] + 0x2954) & 1) != 0)) &&
     ((*(int *)(DAT_14ca046e8 + 4) != 0 && (*(int *)((longlong)plVar16 + 0xe4) < 0)))) {
    piVar15 = (int *)(plVar16[0x1b] + 8);
    if (plVar16[0x1b] == 0) {
      piVar15 = &DAT_14c760db4;
    }
    if ((3 < (int)(&DAT_14ca814b8)
                  [(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*piVar15 * 2) * 0xf]) &&
       (((&DAT_14ca814cd)[(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*piVar15 * 2) * 0x3c] &
        3) != 0)) {
      cVar3 = *(char *)(lVar37 + 0x3c);
      cVar4 = FUN_1472390ef(local_3c0);
      cVar5 = '\x01';
      if (cVar4 == '\0') {
        cVar5 = FUN_1472390cb(local_3c0);
      }
      plVar16 = local_408;
      if (cVar5 == '\x01' && (uVar6 >> 8 & 1) != 0) {
        bVar40 = cVar3 == '\x02';
        if (cVar3 == '\0') {
          bVar40 = DAT_14ca04a20 == 1;
        }
        bVar41 = 1;
        if ((bVar40) ||
           ((lVar23 = *(longlong *)local_408[0x14], *(char *)(lVar23 + 0x3098) == '\x01' &&
            ((*(char *)(lVar23 + 0x23e8) != '\x01' || (*(char *)(lVar23 + 0x23ea) != '\0'))))))
        goto LAB_142ce9e53;
      }
    }
  }
  bVar41 = 0;
LAB_142ce9e53:
  uVar6 = *puVar17;
  bVar18 = 1;
  if ((((local_409 & (byte)uVar6 >> 4) == 0) &&
      ((((uVar6 & 4) == 0 || ((((ulonglong)local_3e0 & 2) != 0 && ((char)puVar17[5] == '\x01')))) &&
       ((*(byte *)(lVar37 + 0x38) & 3) != 0)))) &&
     ((fVar42 = *(float *)(*(longlong *)(lVar28 + 0x28) + 0x168), fVar42 == 0.0 && (!NAN(fVar42)))))
  {
    bVar18 = bVar41;
  }
  if ((~uVar6 & 3) == 0) {
    *(undefined1 *)(param_2 + 4) = 1;
    uVar6 = *puVar17;
  }
  if ((uVar6 & 8) != 0) {
    *(undefined1 *)((longlong)param_2 + 0x12) = 1;
    uVar6 = *puVar17;
  }
  if ((uVar6 & 4) != 0) {
    *(undefined1 *)((longlong)param_2 + 0x11) = 1;
    uVar6 = *puVar17;
  }
  *puVar17 = (uint)bVar41 << 7 | (uint)bVar18 << 6 | uVar6 & 0xffffff3f;
  iVar26 = *(int *)(local_3d8 + 0x3578);
  lVar23 = local_3d8;
  puVar17 = local_400;
  uVar39 = local_3d0;
  iVar34 = local_3f4;
  uVar6 = local_3e4;
LAB_142ce9f00:
  uVar6 = uVar6 & ~(uint)uVar20;
  puVar13 = *(uint **)(lVar23 + 0x3570);
  if (*(uint **)(lVar23 + 0x3570) == (uint *)0x0) {
    puVar13 = puVar17;
  }
  iVar7 = (int)uVar39;
  lVar28 = (longlong)iVar7;
  uVar9 = puVar13[lVar28] & uVar6;
  if (uVar9 == 0) {
    iVar10 = iVar26 + 0x1e;
    if (-1 < iVar26 + -1) {
      iVar10 = iVar26 + -1;
    }
    iVar10 = iVar10 >> 5;
    iVar11 = iVar10;
    if (iVar10 < iVar7) {
      iVar11 = iVar7;
    }
    if (iVar10 <= iVar7) goto LAB_142cea2c6;
    lVar25 = 0;
    while( true ) {
      iVar34 = iVar34 + 0x20;
      uVar9 = puVar13[lVar28 + lVar25 + 1];
      if (uVar9 != 0) break;
      lVar25 = lVar25 + 1;
      if (iVar11 - lVar28 == lVar25) goto LAB_142cea2c6;
    }
    uVar39 = (ulonglong)(iVar7 + (int)lVar25 + 1);
    uVar6 = 0xffffffff;
  }
  uVar20 = (ulonglong)(-uVar9 & uVar9);
  uVar30 = uVar20 * 2 + 1;
  lVar28 = 0x3f;
  if (uVar30 != 0) {
    for (; uVar30 >> lVar28 == 0; lVar28 = lVar28 + -1) {
    }
  }
  iVar7 = (iVar34 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
  if (iVar26 <= iVar7) goto LAB_142cea2c6;
  goto LAB_142ce9c70;
LAB_142cea498:
  local_398 = plVar22[2];
  lVar23 = *plVar22;
  uVar39 = plVar22[1];
  plVar22[2] = plVar29[-1];
  lVar28 = plVar29[-2];
  *plVar22 = *plVar32;
  plVar22[1] = lVar28;
  plVar29[-1] = local_398;
  local_3a8._0_4_ = (int)lVar23;
  local_3a8._4_4_ = (int)((ulonglong)lVar23 >> 0x20);
  uStack_3a0._0_4_ = (int)uVar39;
  uStack_3a0._4_4_ = (int)(uVar39 >> 0x20);
  *(int *)plVar32 = (int)local_3a8;
  *(int *)((longlong)plVar29 + -0x14) = local_3a8._4_4_;
  *(int *)(plVar29 + -2) = (int)uStack_3a0;
  *(int *)((longlong)plVar29 + -0xc) = uStack_3a0._4_4_;
  iVar26 = iVar26 + -1;
  plVar29 = plVar29 + -6;
  local_3a8 = lVar23;
  uStack_3a0 = uVar39;
  if ((longlong)plVar36 - (longlong)plVar24 < (longlong)plVar27 - (longlong)plVar38) {
    if (plVar21 < plVar14) {
      *plVar16 = (longlong)plVar21;
      plVar16[1] = (longlong)plVar14;
      *(int *)(plVar16 + 2) = iVar26;
      plVar16 = plVar16 + 3;
    }
    plVar38 = plVar22;
    plVar27 = plVar36;
    if (plVar32 <= plVar22 + 3) goto LAB_142cea825;
  }
  else {
    if (plVar22 + 3 < plVar32) {
      *plVar16 = (longlong)plVar22;
      plVar16[1] = (longlong)plVar29;
      *(int *)(plVar16 + 2) = iVar26;
      plVar16 = plVar16 + 3;
    }
    plVar22 = plVar21;
    plVar29 = plVar14;
    plVar27 = plVar14;
    if (plVar14 <= plVar21) goto LAB_142cea825;
  }
  iVar34 = (int)((ulonglong)((longlong)plVar27 - (longlong)plVar38) >> 3) * -0x55555555;
  uVar6 = iVar34 + 1;
  plVar24 = plVar38;
  plVar14 = plVar29;
  if (iVar26 == 0) goto LAB_142cea56a;
  goto LAB_142cea3aa;
}



// FUNCTION 142cea950 FUN_142cea950 body=6242 status=ok
// SIG undefined FUN_142cea950(void)

void FUN_142cea950(uint *param_1,longlong param_2,uint *param_3,uint *param_4,undefined8 *param_5,
                  int *param_6)

{
  undefined4 *puVar1;
  longlong lVar2;
  ulonglong *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  byte bVar10;
  byte bVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  DWORD DVar15;
  DWORD DVar16;
  int iVar17;
  undefined4 uVar18;
  undefined8 *puVar19;
  longlong lVar20;
  ulonglong uVar21;
  int *piVar22;
  void *pvVar23;
  longlong lVar24;
  int iVar25;
  int iVar26;
  byte bVar27;
  uint *puVar28;
  longlong lVar29;
  uint uVar30;
  uint *puVar31;
  uint uVar32;
  uint *puVar33;
  longlong *plVar34;
  undefined8 *puVar35;
  ulonglong uVar36;
  uint *puVar37;
  int iVar38;
  uint uVar39;
  uint *puVar40;
  int iVar41;
  ulonglong uVar42;
  int iVar43;
  uint uVar44;
  int *piVar45;
  undefined4 *puVar46;
  longlong lVar47;
  longlong lVar48;
  uint *puVar49;
  bool bVar50;
  undefined1 auStack_248 [32];
  uint *local_228;
  uint *puStack_220;
  undefined8 local_218;
  undefined8 *local_210;
  undefined1 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  uint *local_1e0;
  uint *local_1d8;
  uint *local_1d0;
  uint *local_1c8;
  longlong local_1c0;
  uint *local_1b8;
  uint *local_1b0;
  ulonglong local_1a8;
  longlong *local_1a0;
  uint *local_198;
  undefined8 *local_190;
  uint *local_188;
  longlong local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  longlong *local_168;
  uint *local_160;
  byte *local_158;
  byte *local_150;
  undefined8 *local_148;
  undefined8 *local_140;
  uint *local_138;
  longlong local_130;
  undefined8 *local_128;
  undefined1 *local_120;
  undefined8 *local_118;
  int *local_110;
  undefined8 *local_108;
  undefined8 *local_100;
  int *local_f8;
  int *local_f0;
  uint *local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 local_c1;
  int local_c0;
  int local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  int local_8c;
  longlong local_88;
  uint local_80;
  undefined8 local_78;
  int local_6c;
  uint local_68;
  byte local_62;
  byte local_61;
  ulonglong local_60;
  
  piVar22 = param_6;
  puVar19 = param_5;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_248;
  uVar30 = param_1[0xfc];
  if ((longlong)(int)uVar30 == 0) {
    local_61 = 0;
  }
  else {
    lVar47 = 0;
    do {
      local_61 = *(byte *)(*(longlong *)(param_1 + 0xfa) + 0x11a08 + lVar47);
      if (local_61 != 0) break;
      bVar50 = (longlong)(int)uVar30 * 0x13c10 + -0x13c10 != lVar47;
      lVar47 = lVar47 + 0x13c10;
    } while (bVar50);
  }
  local_62 = *(byte *)(*(longlong *)(param_1 + 2) + 0x520c) >> 1 & 1;
  lVar47 = (longlong)*param_6;
  local_68 = param_6[2];
  local_1a8 = (ulonglong)local_68;
  local_6c = param_6[3];
  local_78 = 0;
  local_1c8 = param_3;
  local_1c0 = param_2;
  if (0 < (int)uVar30 && local_61 == 1) {
    local_78 = FUN_142c60a4f(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0xfa) + 0x13818));
  }
  lVar48 = DAT_14ca97170;
  local_188 = *(uint **)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  uVar30 = local_188[0x318];
  local_190 = puVar19;
  if (((uVar30 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar30 == 2)) {
    uVar21 = 0;
  }
  else if (uVar30 == 1) {
    DVar15 = FUN_140ad26c0();
    DVar16 = GetCurrentThreadId();
    uVar21 = (ulonglong)(DVar15 != DVar16);
  }
  else {
    uVar21 = 1;
  }
  puVar33 = param_1 + 0xfa;
  if (0 < *(int *)(lVar48 + uVar21 * 4)) {
    FUN_14309a826(local_1c0,puVar33,local_1c8);
  }
  lVar48 = local_1c0;
  local_1d8 = (uint *)(piVar22 + 6);
  local_1a0 = (longlong *)(piVar22 + 0x12);
  local_1e0 = param_1;
  local_1b8 = param_4;
  local_198 = puVar33;
  if ((DAT_14c760a88 != 0) && (DAT_14ca84e15 == '\x01')) {
    local_180 = lVar47;
    if (piVar22[8] < 1) {
      local_80 = param_1[0xfc];
    }
    else {
      puVar35 = (undefined8 *)(*(longlong *)(local_1c0 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar19 = puVar35 + 3;
      if (*(undefined8 **)(local_1c0 + 0x78) < puVar19) {
        plVar34 = (longlong *)(local_1c0 + 0x70);
        FUN_140023dd8(plVar34,0x28);
        puVar35 = (undefined8 *)(*plVar34 + 0xfU & 0xfffffffffffffff0);
        puVar19 = puVar35 + 3;
      }
      *(undefined8 **)(lVar48 + 0x70) = puVar19;
      *puVar35 = &PTR_FUN_14a2481f0;
      puVar35[1] = 0;
      puVar35[2] = 0;
      iVar17 = *(int *)(lVar48 + 0xa0);
      *(uint *)(lVar48 + 0xa0) = iVar17 + 1U;
      if (*(uint *)(lVar48 + 0xa4) < iVar17 + 1U) {
        FUN_1448cfae8((longlong *)(lVar48 + 0x98),iVar17);
      }
      piVar45 = param_6;
      puVar33 = (uint *)(puVar35 + 1);
      *(undefined8 **)(*(longlong *)(lVar48 + 0x98) + (longlong)iVar17 * 8) = puVar35;
      uVar30 = param_1[0xfc];
      iVar17 = *(int *)(puVar35 + 2);
      local_1d0 = puVar33;
      if (iVar17 < (int)uVar30) {
        *(uint *)(puVar35 + 2) = uVar30;
        if ((uint)(*(int *)((longlong)puVar35 + 0x14) - iVar17) < uVar30 - iVar17) {
          FUN_1406f86da(puVar33,iVar17);
        }
        FUN_142cfb4c9((longlong)iVar17 * 0x30 + *(longlong *)puVar33,uVar30 - iVar17);
        piVar45 = piVar22;
      }
      else {
        if ((int)uVar30 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(uVar30);
        }
        param_1 = local_1e0;
        if ((int)uVar30 < iVar17) {
          FUN_1471db5da(puVar33,uVar30,iVar17 - uVar30);
          FUN_1471db640(puVar33);
        }
      }
      uVar30 = param_1[0xfc];
      uVar21 = (ulonglong)uVar30;
      iVar17 = piVar45[8];
      if (0 < iVar17) {
        local_1b0 = (uint *)(*(longlong *)local_1d0 + 0x10);
        lVar47 = 0;
        do {
          if (0 < (int)uVar30) {
            uVar36 = 0;
            puVar33 = local_1b0;
            do {
              if (piVar45[8] == piVar45[0xc]) {
                puVar19 = (undefined8 *)(*(longlong *)(piVar45 + 10) + lVar47 * 0x18);
              }
              else {
                iVar17 = 0;
                if (*(int *)(*(longlong *)(piVar45 + 0xe) + 4 + lVar47 * 8) != 0) {
                  iVar17 = (int)uVar36;
                }
                puVar19 = (undefined8 *)
                          ((ulonglong)
                           (iVar17 + (*(uint *)(*(longlong *)(piVar45 + 0xe) + lVar47 * 8) &
                                     0x7fffffff)) * 0x18 + *(longlong *)(piVar45 + 10));
              }
              local_168 = (longlong *)puVar19[2];
              local_178 = (uint *)*puVar19;
              uStack_170 = (int *)puVar19[1];
              puVar46 = (undefined4 *)(*(longlong *)local_1d8 + lVar47 * 0x28);
              uVar44 = puVar33[-2];
              lVar48 = (longlong)(int)uVar44;
              puVar33[-2] = uVar44 + 1;
              if (puVar33[-1] < uVar44 + 1) {
                FUN_1417662f8(puVar33 + -4,uVar44);
              }
              lVar2 = *(longlong *)(puVar33 + -4);
              *(undefined8 *)(lVar2 + 0x20 + lVar48 * 0x28) = *(undefined8 *)(puVar46 + 8);
              uVar18 = *puVar46;
              uVar4 = puVar46[1];
              uVar5 = puVar46[2];
              uVar6 = puVar46[3];
              uVar7 = puVar46[5];
              uVar8 = puVar46[6];
              uVar9 = puVar46[7];
              puVar1 = (undefined4 *)(lVar2 + 0x10 + lVar48 * 0x28);
              *puVar1 = puVar46[4];
              puVar1[1] = uVar7;
              puVar1[2] = uVar8;
              puVar1[3] = uVar9;
              puVar46 = (undefined4 *)(lVar2 + lVar48 * 0x28);
              *puVar46 = uVar18;
              puVar46[1] = uVar4;
              puVar46[2] = uVar5;
              puVar46[3] = uVar6;
              uVar44 = puVar33[2];
              puVar33[2] = uVar44 + 1;
              if (puVar33[3] < uVar44 + 1) {
                FUN_141766356(puVar33,uVar44);
              }
              lVar48 = *(longlong *)puVar33;
              *(longlong **)(lVar48 + 0x10 + (longlong)(int)uVar44 * 0x18) = local_168;
              puVar46 = (undefined4 *)(lVar48 + (longlong)(int)uVar44 * 0x18);
              *puVar46 = (undefined4)local_178;
              puVar46[1] = local_178._4_4_;
              puVar46[2] = (undefined4)uStack_170;
              puVar46[3] = uStack_170._4_4_;
              uVar36 = uVar36 + 1;
              puVar33 = puVar33 + 0xc;
              piVar45 = param_6;
            } while (uVar21 != uVar36);
            iVar17 = param_6[8];
          }
          lVar47 = lVar47 + 1;
        } while (lVar47 < iVar17);
        uVar21 = (ulonglong)local_1e0[0xfc];
        param_1 = local_1e0;
      }
      local_80 = (uint)uVar21;
      if (0 < (int)local_80) {
        lVar47 = 0;
        lVar48 = 0;
        uVar36 = 0;
        do {
          uVar30 = (uint)uVar21;
          lVar2 = *(longlong *)local_1d0;
          if (0 < *(int *)(lVar2 + 8 + lVar47)) {
            lVar20 = *(longlong *)local_198;
            puVar3 = *(ulonglong **)(local_1c0 + 0x18);
            iVar17 = *(int *)(lVar20 + 0x1de0 + lVar48);
            iVar41 = *(int *)((longlong)puVar3 + 0x17c);
            if (iVar41 != iVar17) {
              *(int *)((longlong)puVar3 + 0x17c) = iVar17;
              puVar35 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
              puVar19 = puVar35 + 3;
              if ((undefined8 *)puVar3[1] < puVar19) {
                FUN_140023dd8(puVar3,0x20);
                puVar35 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
                puVar19 = puVar35 + 3;
              }
              *puVar3 = (ulonglong)puVar19;
              *(int *)(puVar3 + 0xc) = (int)puVar3[0xc] + 1;
              *(undefined8 **)puVar3[6] = puVar35;
              puVar3[6] = (ulonglong)(puVar35 + 1);
              uVar18 = *(undefined4 *)((longlong)puVar3 + 0x17c);
              puVar35[1] = 0;
              *puVar35 = &PTR_FUN_14a1fb2c0;
              *(undefined4 *)(puVar35 + 2) = uVar18;
              uVar30 = local_1e0[0xfc];
            }
            puStack_220 = (uint *)(lVar2 + lVar47);
            local_228 = local_1b8;
            FUN_1430af891(local_1c0,lVar20 + lVar48,uVar36 & 0xffffffff,uVar30);
            if (*(int *)((longlong)puVar3 + 0x17c) != iVar41) {
              *(int *)((longlong)puVar3 + 0x17c) = iVar41;
              puVar35 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
              puVar19 = puVar35 + 3;
              if ((undefined8 *)puVar3[1] < puVar19) {
                FUN_140023dd8(puVar3,0x20);
                puVar35 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
                puVar19 = puVar35 + 3;
              }
              *puVar3 = (ulonglong)puVar19;
              *(int *)(puVar3 + 0xc) = (int)puVar3[0xc] + 1;
              *(undefined8 **)puVar3[6] = puVar35;
              puVar3[6] = (ulonglong)(puVar35 + 1);
              uVar18 = *(undefined4 *)((longlong)puVar3 + 0x17c);
              puVar35[1] = 0;
              *puVar35 = &PTR_FUN_14a1fb2c0;
              *(undefined4 *)(puVar35 + 2) = uVar18;
            }
          }
          uVar36 = uVar36 + 1;
          local_80 = local_1e0[0xfc];
          uVar21 = (ulonglong)(int)local_80;
          lVar48 = lVar48 + 0x13c10;
          lVar47 = lVar47 + 0x30;
          param_1 = local_1e0;
        } while ((longlong)uVar36 < (longlong)uVar21);
      }
    }
    local_88 = *(longlong *)(param_1 + 0xfa);
    FUN_1401be114(&local_178,local_1c0);
    puVar33 = local_1b8;
    if ((int)local_180 < param_6[0x14]) {
      local_1d0 = local_1e0 + 0x26;
      lVar47 = local_180 * 0x18 + 8;
      lVar48 = local_180;
      do {
        local_1b0 = *(uint **)(*local_1a0 + lVar47);
        lVar2 = *(longlong *)(local_1b0 + 10);
        uVar18 = *(undefined4 *)(*local_1a0 + -8 + lVar47);
        bVar10 = FUN_144aaa900(CONCAT71((int7)((ulonglong)local_1b0 >> 8),1),3,local_1d0);
        if (*(char *)(lVar2 + 0x1d2) == '\x02') {
LAB_142ceb0dc:
          bVar50 = true;
          if ((ulonglong)*(byte *)(lVar2 + 0x1e8) < 4) {
            bVar50 = *(int *)(*(longlong *)(&PTR_DAT_14a249150)[*(byte *)(lVar2 + 0x1e8)] + 4) != 0;
          }
          bVar27 = bVar10 & bVar50;
          puVar33 = local_1b8;
        }
        else {
          if (*(longlong **)(DAT_14cb0d2b0 + 0xfd0) == (longlong *)0x0) {
            uVar21 = 0;
          }
          else {
            uVar30 = (**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0xfd0) + 8))();
            uVar21 = (ulonglong)uVar30;
          }
          bVar27 = 0;
          bVar11 = FUN_144b0f89b(0,0x9b);
          cVar12 = FUN_144aaa900(CONCAT71((int7)(uVar21 >> 8),
                                          ((byte)uVar21 & bVar11 ^ 1) &
                                          0 < *(int *)(DAT_14c9e93c8 + 4)),3,local_1d0);
          if (cVar12 != '\0') {
            if (*(char *)(lVar2 + 0x1d2) == '\x01') goto LAB_142ceb0dc;
            bVar27 = 0;
          }
        }
        if (((*(char *)(lVar2 + 0x1e8) == '\0') ||
            ((*(byte *)(**(longlong **)(local_1e0 + 0x28) + 0x2954) & 1) == 0)) ||
           ((*(int *)(DAT_14ca046e8 + 4) == 0 || (-1 < (int)local_1e0[0x39])))) {
LAB_142ceb052:
          bVar10 = 1;
        }
        else {
          piVar22 = (int *)(*(longlong *)(local_1e0 + 0x36) + 8);
          if (*(longlong *)(local_1e0 + 0x36) == 0) {
            piVar22 = &DAT_14c760db4;
          }
          if (((int)(&DAT_14ca814b8)
                    [(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*piVar22 * 2) * 0xf] < 4) ||
             (((&DAT_14ca814cd)
               [(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*piVar22 * 2) * 0x3c] & 3) == 0))
          goto LAB_142ceb052;
          bVar10 = *(byte *)(lVar2 + 0x1d4);
          cVar12 = *(char *)(lVar2 + 0x1d5);
          cVar13 = FUN_1472390ef(local_1d0);
          cVar14 = '\x01';
          if (cVar13 == '\0') {
            cVar14 = FUN_1472390cb(local_1d0);
          }
          puVar33 = local_1b8;
          if (cVar14 != '\x01' || (bVar10 & 2) == 0) goto LAB_142ceb052;
          bVar50 = cVar12 == '\x02';
          if (cVar12 == '\0') {
            bVar50 = DAT_14ca04a20 == 1;
          }
          if (bVar50) {
LAB_142ceb1f5:
            bVar10 = 0;
          }
          else {
            lVar2 = **(longlong **)(local_1e0 + 0x28);
            if (*(char *)(lVar2 + 0x3098) != '\x01') goto LAB_142ceb052;
            if (*(char *)(lVar2 + 0x23e8) != '\x01') goto LAB_142ceb1f5;
            if (*(char *)(lVar2 + 0x23ea) == '\0') goto LAB_142ceb052;
            bVar10 = 0;
          }
        }
        local_218 = &local_178;
        local_228 = local_1b0;
        puStack_220 = (uint *)CONCAT71(puStack_220._1_7_,(bVar27 ^ 1) & bVar10 & (byte)uVar18 >> 4);
        FUN_1447cf60e(local_1e0,local_1c0,local_1c8);
        lVar48 = lVar48 + 1;
        lVar47 = lVar47 + 0x18;
      } while (lVar48 < param_6[0x14]);
    }
    piVar22 = param_6;
    if (0 < (int)local_1e0[0xfc]) {
      lVar47 = 0;
      uVar21 = 0;
      do {
        lVar48 = *(longlong *)local_198;
        puVar3 = *(ulonglong **)(local_1c0 + 0x18);
        iVar17 = *(int *)(lVar48 + 0x1de0 + lVar47);
        iVar41 = *(int *)((longlong)puVar3 + 0x17c);
        if (iVar41 != iVar17) {
          *(int *)((longlong)puVar3 + 0x17c) = iVar17;
          puVar35 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
          puVar19 = puVar35 + 3;
          if ((undefined8 *)puVar3[1] < puVar19) {
            FUN_140023dd8(puVar3,0x20);
            puVar35 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
            puVar19 = puVar35 + 3;
          }
          *puVar3 = (ulonglong)puVar19;
          *(int *)(puVar3 + 0xc) = (int)puVar3[0xc] + 1;
          *(undefined8 **)puVar3[6] = puVar35;
          puVar3[6] = (ulonglong)(puVar35 + 1);
          uVar18 = *(undefined4 *)((longlong)puVar3 + 0x17c);
          puVar35[1] = 0;
          *puVar35 = &PTR_FUN_14a1fb2c0;
          *(undefined4 *)(puVar35 + 2) = uVar18;
        }
        local_218 = &local_178;
        local_228 = local_1e0;
        puStack_220 = puVar33;
        FUN_1430ad801(local_1c0,lVar48 + lVar47,uVar21 & 0xffffffff);
        if (*(int *)((longlong)puVar3 + 0x17c) != iVar41) {
          *(int *)((longlong)puVar3 + 0x17c) = iVar41;
          puVar35 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
          puVar19 = puVar35 + 3;
          if ((undefined8 *)puVar3[1] < puVar19) {
            FUN_140023dd8(puVar3,0x20);
            puVar35 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
            puVar19 = puVar35 + 3;
          }
          *puVar3 = (ulonglong)puVar19;
          *(int *)(puVar3 + 0xc) = (int)puVar3[0xc] + 1;
          *(undefined8 **)puVar3[6] = puVar35;
          puVar3[6] = (ulonglong)(puVar35 + 1);
          uVar18 = *(undefined4 *)((longlong)puVar3 + 0x17c);
          puVar35[1] = 0;
          *puVar35 = &PTR_FUN_14a1fb2c0;
          *(undefined4 *)(puVar35 + 2) = uVar18;
        }
        uVar21 = uVar21 + 1;
        lVar47 = lVar47 + 0x13c10;
        piVar22 = param_6;
      } while ((longlong)uVar21 < (longlong)(int)local_1e0[0xfc]);
    }
  }
  puVar49 = local_198;
  lVar47 = local_1c0;
  puVar33 = local_1e0;
  FUN_14307e510(*(longlong *)(local_1e0 + 0x1f0),local_1c0);
  local_1b0 = (uint *)CONCAT44(local_1b0._4_4_,*piVar22);
  if (((DAT_14c9b6948 == 0) || (*(int *)(*(longlong *)(puVar33 + 2) + 8) < 3)) ||
     ((char)puVar33[0x3a6] != '\x01')) {
    if (0 < piVar22[8]) {
      uVar30 = puVar33[0xfc];
      if ((int)uVar30 < 1) goto LAB_142ceb980;
      local_1d0 = local_188 + 0x318;
      lVar48 = 0;
      uVar21 = 0;
      do {
        lVar20 = DAT_14ca97170;
        lVar2 = *(longlong *)puVar49;
        uVar44 = *local_1d0;
        if (((uVar44 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar44 == 2)) {
          uVar36 = 0;
        }
        else if (uVar44 == 1) {
          DVar15 = FUN_140ad26c0();
          DVar16 = GetCurrentThreadId();
          uVar36 = (ulonglong)(DVar15 != DVar16);
        }
        else {
          uVar36 = 1;
        }
        lVar29 = DAT_14ca97170;
        lVar24 = lVar48 + lVar2;
        if (*(int *)(lVar20 + uVar36 * 4) < 1) {
          puStack_220 = local_1d8;
          local_228 = local_1c8;
          local_218 = (undefined8 *)CONCAT44(local_218._4_4_,9);
        }
        else {
          uVar44 = *local_1d0;
          if (((uVar44 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar44 == 2)) {
            uVar36 = 0;
          }
          else if (uVar44 == 1) {
            DVar15 = FUN_140ad26c0();
            DVar16 = GetCurrentThreadId();
            uVar36 = (ulonglong)(DVar15 != DVar16);
          }
          else {
            uVar36 = 1;
          }
          puVar33 = local_1c8;
          if ((0 < *(int *)(lVar29 + uVar36 * 4)) &&
             ((*(byte *)(lVar2 + 0x11830 + lVar48) & 1) != 0)) {
            puStack_220 = local_1d8;
            local_228 = local_1c8;
            local_218 = (undefined8 *)CONCAT44(local_218._4_4_,3);
            FUN_142cf13cc(lVar47,lVar24,uVar21 & 0xffffffff,uVar30);
          }
          puVar49 = local_1d8;
          puStack_220 = local_1d8;
          local_228 = puVar33;
          local_218._0_4_ = 2;
          FUN_142cf13cc(lVar47,lVar24,uVar21 & 0xffffffff,uVar30);
          puStack_220 = puVar49;
          local_228 = puVar33;
          local_218._0_4_ = 1;
          FUN_142cf13cc(lVar47,lVar24,uVar21 & 0xffffffff,uVar30);
          puStack_220 = puVar49;
          local_228 = puVar33;
          local_218 = (undefined8 *)((ulonglong)local_218._4_4_ << 0x20);
        }
        FUN_142cf13cc(lVar47,lVar24);
        uVar21 = uVar21 + 1;
        lVar48 = lVar48 + 0x13c10;
        puVar49 = local_198;
        puVar33 = local_1e0;
      } while (uVar30 != uVar21);
    }
  }
  else {
    local_1b0 = (uint *)CONCAT44(local_1b0._4_4_,piVar22[1]);
    local_228 = (uint *)**(longlong **)(puVar33 + 0x1f0);
    puStack_220 = (uint *)(*(longlong **)(puVar33 + 0x1f0))[1];
    local_218 = local_190;
    FUN_142b85316(puVar33,lVar47);
  }
  puVar37 = (uint *)(longlong)(int)puVar33[0xfc];
  if (0 < (longlong)puVar37) {
    local_1d0 = (uint *)(longlong)(int)local_1b0;
    local_180 = (longlong)local_1d0 * 3;
    local_190 = (undefined8 *)((longlong)local_1d0 * 0x18 + 0x14);
    puVar28 = (uint *)0x0;
    local_188 = puVar37;
    do {
      puVar3 = *(ulonglong **)(local_1c0 + 0x18);
      iVar17 = *(int *)(*(longlong *)puVar49 + 0x1de0 + (longlong)puVar28 * 0x13c10);
      iVar41 = *(int *)((longlong)puVar3 + 0x17c);
      if (iVar41 != iVar17) {
        *(int *)((longlong)puVar3 + 0x17c) = iVar17;
        puVar35 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
        puVar19 = puVar35 + 3;
        if ((undefined8 *)puVar3[1] < puVar19) {
          FUN_140023dd8(puVar3,0x20);
          puVar35 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
          puVar19 = puVar35 + 3;
        }
        *puVar3 = (ulonglong)puVar19;
        *(int *)(puVar3 + 0xc) = (int)puVar3[0xc] + 1;
        *(undefined8 **)puVar3[6] = puVar35;
        puVar3[6] = (ulonglong)(puVar35 + 1);
        uVar18 = *(undefined4 *)((longlong)puVar3 + 0x17c);
        puVar35[1] = 0;
        *puVar35 = &PTR_FUN_14a1fb2c0;
        *(undefined4 *)(puVar35 + 2) = uVar18;
      }
      plVar34 = local_1a0;
      lVar47 = local_1c0;
      puVar33 = local_1e0;
      uVar21 = local_1a8;
      if ((int)local_1b0 < (int)local_1a8) {
        local_1a8 = CONCAT44(local_1a8._4_4_,iVar41);
        puVar19 = local_190;
        puVar49 = local_1d0;
        local_1d8 = puVar28;
        do {
          local_228 = *(uint **)(*plVar34 + -0xc + (longlong)puVar19);
          local_208 = *(undefined1 *)(*plVar34 + (longlong)puVar19);
          local_200 = 0;
          uStack_1f8 = 0;
          local_218 = param_5;
          local_1f0 = CONCAT44(local_1f0._4_4_,0xffffffff);
          local_210 = (undefined8 *)((ulonglong)local_210 & 0xffffffffffffff00);
          puStack_220 = (uint *)0x0;
          FUN_142cec1b4(lVar47,*(longlong *)(puVar33 + 2));
          puVar49 = (uint *)((longlong)puVar49 + 1);
          uVar21 = (ulonglong)(int)local_68;
          puVar19 = puVar19 + 3;
        } while ((longlong)puVar49 < (longlong)uVar21);
        puVar28 = local_1d8;
        puVar49 = local_198;
        puVar37 = local_188;
        iVar41 = (int)local_1a8;
      }
      local_1a8 = uVar21;
      if (*(int *)((longlong)puVar3 + 0x17c) != iVar41) {
        *(int *)((longlong)puVar3 + 0x17c) = iVar41;
        puVar35 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
        puVar19 = puVar35 + 3;
        if ((undefined8 *)puVar3[1] < puVar19) {
          FUN_140023dd8(puVar3,0x20);
          puVar35 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
          puVar19 = puVar35 + 3;
        }
        *puVar3 = (ulonglong)puVar19;
        *(int *)(puVar3 + 0xc) = (int)puVar3[0xc] + 1;
        *(undefined8 **)puVar3[6] = puVar35;
        puVar3[6] = (ulonglong)(puVar35 + 1);
        uVar18 = *(undefined4 *)((longlong)puVar3 + 0x17c);
        puVar35[1] = 0;
        *puVar35 = &PTR_FUN_14a1fb2c0;
        *(undefined4 *)(puVar35 + 2) = uVar18;
      }
      plVar34 = local_1a0;
      lVar47 = local_1c0;
      puVar33 = local_1e0;
      puVar28 = (uint *)((longlong)puVar28 + 1);
    } while (puVar28 != puVar37);
    if (((local_61 & 1) != 0) &&
       (puVar37 = (uint *)(longlong)(int)local_1e0[0xfc], 0 < (longlong)puVar37)) {
      local_190 = (undefined8 *)(local_180 * 8 + 0x14);
      puVar28 = (uint *)0x0;
      local_188 = puVar37;
      do {
        lVar48 = *(longlong *)puVar49;
        puVar40 = puVar28;
        uVar21 = local_1a8;
        if (*(char *)(lVar48 + 0x11a08 + (longlong)puVar28 * 0x13c10) == '\x01') {
          if ((int)local_1b0 < (int)local_1a8) {
            puVar31 = local_1d0;
            puVar19 = local_190;
            local_1d8 = puVar28;
            do {
              local_228 = *(uint **)(*plVar34 + -0xc + (longlong)puVar19);
              uStack_1f8 = 0;
              local_1f0 = 0;
              local_200 = CONCAT71(local_200._1_7_,*(undefined1 *)(*plVar34 + (longlong)puVar19));
              local_218 = param_5;
              local_1e8 = 0xffffffff;
              local_208 = 0;
              puStack_220 = (uint *)0x0;
              local_210 = &local_78;
              FUN_142ced0bc(puVar33,lVar47,lVar48 + (longlong)puVar28 * 0x13c10);
              puVar31 = (uint *)((longlong)puVar31 + 1);
              puVar19 = puVar19 + 3;
              puVar37 = local_188;
              puVar49 = local_198;
              puVar40 = local_1d8;
              uVar21 = (longlong)(int)local_68;
            } while ((longlong)puVar31 < (longlong)(int)local_68);
          }
        }
        local_1a8 = uVar21;
        puVar28 = (uint *)((longlong)puVar40 + 1);
      } while (puVar28 != puVar37);
    }
  }
LAB_142ceb980:
  iVar17 = *(int *)(DAT_14c9e93f0 + 4);
  local_8c = iVar17;
  local_98 = FUN_141508108();
  puVar37 = local_1c8;
  if (iVar17 != 1) {
    local_98 = DAT_14ca4cb10;
  }
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  iVar41 = *(int *)(DAT_14c9e9408 + 4);
  iVar43 = 4;
  if (iVar41 < 4) {
    iVar43 = iVar41;
  }
  local_bc = 1;
  if (1 < iVar43) {
    local_bc = iVar43;
  }
  local_c0 = *(int *)(DAT_14c9e9420 + 4);
  plVar34 = local_1a0;
  local_138 = local_1c8;
  local_e8 = local_1b8;
  if (local_c0 < 2 && (iVar41 < 2 || iVar17 == 0)) {
    local_c1 = 0;
  }
  else {
    local_c1 = puVar33[0xfc] == 1;
    if ((bool)local_c1) {
      lVar47 = *(longlong *)puVar49;
      uVar30 = local_6c - (int)local_1a8;
      puVar49 = local_1b8;
      if ((*(byte *)(lVar47 + 0x125b0) & 1) == 0) {
        lVar2 = *(longlong *)(lVar47 + 0x3108);
        lVar48 = lVar2 + 0x16a8;
        iVar17 = *(int *)(lVar2 + 0x16f0);
        if (iVar17 < 2) {
          lVar20 = lVar2 + 0x16e0;
          if (*(longlong *)(lVar2 + 0x16e8) != 0) {
            lVar20 = *(longlong *)(lVar2 + 0x16e8);
          }
          iVar41 = iVar17 + 3;
          if (-1 < iVar17) {
            iVar41 = iVar17;
          }
          if (*(int *)(lVar2 + 0x16b0) - *(int *)(lVar2 + 0x16dc) < iVar41 >> 2) {
            iVar17 = *(int *)(lVar2 + 0x16d0);
            if (iVar17 != 0) {
              local_1d8 = (uint *)(lVar2 + 0x16b8);
              puVar33 = *(uint **)(lVar2 + 0x16c8);
              if (*(uint **)(lVar2 + 0x16c8) == (uint *)0x0) {
                puVar33 = local_1d8;
              }
              uVar44 = *puVar33;
              if (uVar44 == 0) {
                iVar41 = iVar17 + 0x1e;
                if (-1 < iVar17 + -1) {
                  iVar41 = iVar17 + -1;
                }
                uVar21 = 0;
                uVar36 = (ulonglong)(uint)(iVar41 >> 5);
                if (iVar41 >> 5 < 1) {
                  uVar36 = uVar21;
                }
                iVar41 = 0;
                do {
                  if (uVar36 == uVar21) goto LAB_142cebabf;
                  iVar41 = iVar41 + 0x20;
                  uVar44 = puVar33[uVar21 + 1];
                  uVar21 = uVar21 + 1;
                } while (uVar44 == 0);
              }
              else {
                uVar21 = 0;
                iVar41 = 0;
              }
              uVar42 = (ulonglong)(-uVar44 & uVar44);
              uVar36 = uVar42 * 2 + 1;
              lVar24 = 0x3f;
              if (uVar36 != 0) {
                for (; uVar36 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                }
              }
              iVar43 = (iVar41 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
              if (iVar43 < iVar17) {
                uVar44 = 0xffffffff;
                do {
                  *(undefined4 *)
                   (lVar20 + (longlong)
                             *(int *)(*(longlong *)(lVar2 + 0x16a8) + 0x1c + (longlong)iVar43 * 0x20
                                     ) * 4) = 0xffffffff;
                  uVar44 = ~(uint)uVar42 & uVar44;
                  puVar33 = *(uint **)(lVar2 + 0x16c8);
                  if (*(uint **)(lVar2 + 0x16c8) == (uint *)0x0) {
                    puVar33 = local_1d8;
                  }
                  iVar38 = *(int *)(lVar2 + 0x16d0);
                  iVar43 = (int)uVar21;
                  lVar24 = (longlong)iVar43;
                  uVar32 = puVar33[lVar24] & uVar44;
                  if (uVar32 == 0) {
                    iVar25 = iVar38 + 0x1e;
                    if (-1 < iVar38 + -1) {
                      iVar25 = iVar38 + -1;
                    }
                    iVar25 = iVar25 >> 5;
                    iVar41 = iVar41 + 0x20;
                    iVar26 = iVar25;
                    if (iVar25 < iVar43) {
                      iVar26 = iVar43;
                    }
                    if (iVar43 < iVar25) {
                      lVar29 = 0;
                      do {
                        uVar32 = puVar33[lVar24 + lVar29 + 1];
                        if (uVar32 != 0) {
                          uVar21 = (ulonglong)(iVar43 + (int)lVar29 + 1);
                          uVar44 = 0xffffffff;
                          goto LAB_142cec09d;
                        }
                        iVar41 = iVar41 + 0x20;
                        lVar29 = lVar29 + 1;
                      } while (iVar26 - lVar24 != lVar29);
                      uVar44 = 0xffffffff;
                      lVar24 = (longlong)iVar26;
                    }
                    uVar21 = lVar24 + 1U & 0xffffffff;
                    iVar43 = iVar38;
                  }
                  else {
LAB_142cec09d:
                    uVar42 = (ulonglong)(-uVar32 & uVar32);
                    uVar36 = uVar42 * 2 + 1;
                    lVar24 = 0x3f;
                    if (uVar36 != 0) {
                      for (; uVar36 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                      }
                    }
                    iVar43 = (iVar41 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
                    if (iVar38 <= iVar43) {
                      iVar43 = iVar38;
                    }
                  }
                } while (iVar43 != iVar17);
              }
            }
          }
          else if (iVar17 == 1) {
            lVar24 = 0;
            do {
              *(undefined4 *)(lVar20 + lVar24 * 4) = 0xffffffff;
              lVar24 = lVar24 + 1;
            } while (lVar24 < *(int *)(lVar2 + 0x16f0));
          }
LAB_142cebabf:
          FUN_144882d66(lVar48);
        }
        else {
          FUN_144882d66(lVar48);
          *(undefined4 *)(lVar2 + 0x16f0) = 1;
          FUN_144aaf21e(lVar48);
        }
        puVar49 = local_1b8;
        lVar48 = *(longlong *)(lVar47 + 0x3108);
        iVar17 = *(int *)(lVar48 + 0x16b0);
        if ((uint)(iVar17 - *(int *)(lVar48 + 0x16dc)) < uVar30) {
          if ((int)uVar30 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456acd4b((longlong)(int)uVar30);
          }
          local_1d8 = (uint *)(lVar48 + 0x16a8);
          uVar44 = uVar30 - iVar17;
          if (uVar44 != 0 && iVar17 <= (int)uVar30) {
            iVar41 = *(int *)(lVar48 + 0x16b4);
            iVar43 = iVar17;
            if (iVar41 < (int)uVar30) {
              FUN_1446f4a44(local_1d8);
              iVar43 = *(int *)(lVar48 + 0x16b0);
              iVar41 = *(int *)(lVar48 + 0x16b4);
            }
            *(uint *)(lVar48 + 0x16b0) = iVar43 + uVar44;
            if ((uint)(iVar41 - iVar43) < uVar44) {
              FUN_1447711aa(local_1d8);
            }
            puVar37 = local_1c8;
            if (iVar43 < (int)uVar30) {
              lVar2 = *(longlong *)local_1d8;
              uVar21 = (ulonglong)uVar30;
              iVar41 = *(int *)(lVar48 + 0x16dc);
              puVar46 = (undefined4 *)(uVar21 * 0x20 + lVar2 + -0x1c);
              do {
                iVar38 = (int)uVar21;
                if (iVar41 != 0) {
                  *(int *)(lVar2 + (longlong)*(int *)(lVar48 + 0x16d8) * 0x20) = iVar38 + -1;
                }
                puVar46[-1] = 0xffffffff;
                if (*(int *)(lVar48 + 0x16dc) < 1) {
                  uVar18 = 0xffffffff;
                }
                else {
                  uVar18 = *(undefined4 *)(lVar48 + 0x16d8);
                }
                uVar21 = uVar21 - 1;
                *puVar46 = uVar18;
                *(int *)(lVar48 + 0x16d8) = iVar38 + -1;
                iVar41 = *(int *)(lVar48 + 0x16dc) + 1;
                *(int *)(lVar48 + 0x16dc) = iVar41;
                puVar46 = puVar46 + -8;
              } while ((longlong)iVar43 < (longlong)uVar21);
            }
            if (iVar17 == 0) {
              *(uint *)(lVar48 + 0x16d0) = uVar44;
              uVar32 = uVar44 + 0x1f >> 5;
              if (*(int *)(lVar48 + 0x16d4) + 0x1fU >> 5 < uVar32) {
                if ((0x80 < uVar44) || (*(longlong *)(lVar48 + 0x16c8) != 0)) {
                  uVar39 = 0;
                  if (0x80 < uVar44) {
                    uVar39 = uVar32;
                  }
                  FUN_1446efa72(lVar48 + 0x16c8,0,uVar39,4);
                }
                *(uint *)(lVar48 + 0x16d4) = uVar44 + 0x1f & 0xffffffe0;
                puVar49 = local_1b8;
              }
              pvVar23 = *(void **)(lVar48 + 0x16c8);
              if (*(void **)(lVar48 + 0x16c8) == (void *)0x0) {
                pvVar23 = (void *)(lVar48 + 0x16b8);
              }
              if (uVar44 < 0x101) {
                uVar32 = uVar32 + (uVar32 == 0);
              }
              memset(pvVar23,0,(ulonglong)(uVar32 << 2));
              iVar17 = *(int *)(lVar48 + 0x16d0);
              iVar41 = iVar17 + 0x1f;
              if (-1 < iVar17) {
                iVar41 = iVar17;
              }
              puVar37 = local_1c8;
              if (iVar17 % 0x20 != 0) {
                pvVar23 = (void *)(lVar48 + 0x16b8);
                if (*(void **)(lVar48 + 0x16c8) != (void *)0x0) {
                  pvVar23 = *(void **)(lVar48 + 0x16c8);
                }
                bVar10 = -(char)(iVar17 % 0x20);
                *(uint *)((longlong)pvVar23 + (longlong)(iVar41 >> 5) * 4) =
                     (uint)(*(int *)((longlong)pvVar23 + (longlong)(iVar41 >> 5) * 4) <<
                           (bVar10 & 0x1f)) >> (bVar10 & 0x1f);
              }
            }
            else if (-1 < (int)uVar44) {
              uVar18 = FUN_144a54ea4(lVar48 + 0x16b8,uVar44);
              FUN_1447c6044(lVar48 + 0x16b8,uVar18,uVar44,0);
            }
          }
          iVar17 = 1;
          if (3 < uVar30) {
            uVar44 = (uVar30 | 1) + 0xe;
            iVar17 = 0x1f;
            if (uVar44 != 0) {
              for (; uVar44 >> iVar17 == 0; iVar17 = iVar17 + -1) {
              }
            }
            iVar17 = 1 << ((byte)iVar17 & 0x1f);
          }
          if ((*(int *)(lVar48 + 0x16f0) == 0) || (*(int *)(lVar48 + 0x16f0) < iVar17)) {
            *(int *)(lVar48 + 0x16f0) = iVar17;
            FUN_144aaf21e(local_1d8);
          }
        }
      }
      FUN_140243082(&local_a8,uVar30);
      FUN_140243082(&local_a8,uVar30);
      plVar34 = local_1a0;
      puVar33 = local_1e0;
      local_138 = puVar37;
      local_e8 = puVar49;
      if (*(char *)(lVar47 + 0x11a08) == '\x01') {
        FUN_140243082(&local_b8,uVar30);
      }
    }
  }
  local_148 = &local_d0;
  local_d0 = 0;
  local_140 = &local_d8;
  local_d8 = 0;
  local_178 = &local_68;
  uStack_170 = &local_6c;
  local_158 = &local_62;
  local_150 = &local_61;
  local_130 = local_1c0;
  local_128 = &local_98;
  local_120 = &local_c1;
  local_118 = &local_a8;
  local_110 = &local_8c;
  local_108 = &param_5;
  local_100 = &local_b8;
  local_f8 = &local_bc;
  local_f0 = &local_c0;
  local_e0 = &local_78;
  local_168 = plVar34;
  local_160 = puVar33;
  FUN_142ceda30(&local_178,0);
  if (local_61 == 1) {
    FUN_142ceda30(&local_178,1);
  }
  FUN_142cfb4e0(&local_b8);
  FUN_142cfb4e0(&local_a8);
  if ((local_60 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142cec1b4 FUN_142cec1b4 body=3846 status=ok
// SIG undefined FUN_142cec1b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cec1b4(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined4 *param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  byte param_9,undefined8 param_10,longlong param_11,int param_12)

{
  ulonglong *puVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  longlong *plVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  DWORD DVar10;
  DWORD DVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined *puVar18;
  longlong lVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  float fVar33;
  undefined1 auStack_418 [32];
  undefined4 *local_3f8;
  undefined8 *local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined1 local_3c0;
  undefined8 local_3b8;
  longlong local_3b0;
  int local_3a8;
  byte local_391;
  uint local_390;
  uint local_38c;
  ulonglong local_388;
  longlong local_380;
  ulonglong local_378;
  undefined8 *local_370;
  longlong *local_368;
  undefined8 *local_360;
  undefined8 local_358;
  ulonglong local_350;
  undefined1 local_348 [32];
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_418;
  local_380 = param_1;
  cVar6 = FUN_1400bd22a(param_5,param_3,0);
  if (cVar6 != '\0') {
    plVar5 = *(longlong **)(param_5 + 10);
    local_358 = param_2;
    if ((*(byte *)(*(longlong *)(param_3 + 8) + 0x52) & 4) == 0) {
      local_388 = local_388 & 0xffffffff00000000;
    }
    else {
      if (plVar5[0x39] == 0) {
        lVar13 = 0;
      }
      else {
        lVar13 = FUN_1447b4020();
      }
      local_388 = CONCAT44(local_388._4_4_,(int)CONCAT71((int7)((ulonglong)lVar13 >> 8),lVar13 != 0)
                          );
    }
    local_378 = (ulonglong)*(byte *)(plVar5 + 0x3a);
    (**(code **)(*plVar5 + 0x10))(plVar5,local_348);
    local_38c = CONCAT31(local_38c._1_3_,(char)plVar5[0x3d]);
    local_368 = plVar5;
    cVar6 = FUN_144b0ddff(param_3);
    lVar13 = DAT_14ca97170;
    local_350 = 0;
    local_390 = 0;
    if (cVar6 != '\0') {
      iVar25 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (((iVar25 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar25 == 2)) {
        uVar16 = 0;
      }
      else if (iVar25 == 1) {
        DVar10 = FUN_140ad26c0();
        DVar11 = GetCurrentThreadId();
        uVar16 = (ulonglong)(DVar10 != DVar11);
      }
      else {
        uVar16 = 1;
      }
      local_390 = (uint)(*(int *)(lVar13 + uVar16 * 4) < 1);
    }
    if (*(int *)(param_3 + 0x3d48) != 0) {
      bVar7 = FUN_140919df9(4,*(undefined2 *)
                               (&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x3090) * 2));
      local_350 = (ulonglong)bVar7;
    }
    puVar1 = (ulonglong *)(local_380 + 0x70);
    puVar20 = (undefined8 *)(*(longlong *)(local_380 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar12 = puVar20 + 0x74;
    local_391 = param_11 != 0;
    if (*(undefined8 **)(local_380 + 0x78) < puVar12) {
      FUN_140023dd8(puVar1,0x3b0);
      puVar20 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar12 = puVar20 + 0x74;
    }
    uVar14 = local_358;
    local_391 = local_391 & param_12 != -1;
    *puVar1 = (ulonglong)puVar12;
    *puVar20 = &PTR_FUN_14a247768;
    local_370 = puVar20 + 2;
    puVar20[2] = 0;
    *(undefined1 *)(puVar20 + 3) = 1;
    puVar20[4] = 0;
    *(undefined1 *)(puVar20 + 5) = 1;
    puVar20[6] = 0;
    *(undefined1 *)(puVar20 + 7) = 1;
    puVar20[0x18] = 0;
    *(undefined1 (*) [16])(puVar20 + 8) = (undefined1  [16])0x0;
    puVar20[10] = 0;
    *(undefined1 (*) [16])(puVar20 + 0x15) = (undefined1  [16])0x0;
    *(undefined1 *)(puVar20 + 0x19) = 1;
    *(undefined4 *)(puVar20 + 0x1c) = 0;
    *(undefined4 *)((longlong)puVar20 + 0xe4) = 0;
    *(undefined4 *)(puVar20 + 0x1d) = 0;
    *(undefined4 *)((longlong)puVar20 + 0xec) = 0x3f800000;
    *(undefined1 (*) [16])(puVar20 + 0x1e) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar20 + 0x20) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar20 + 0x22) = (undefined1  [16])0x0;
    puVar20[0x24] = 0;
    *(undefined1 *)(puVar20 + 0x25) = 1;
    puVar20[0x26] = 0;
    *(undefined1 *)(puVar20 + 0x27) = 1;
    puVar20[0x28] = 0;
    *(undefined1 *)(puVar20 + 0x29) = 1;
    puVar20[0x2a] = 0;
    *(undefined1 *)(puVar20 + 0x2b) = 1;
    *(undefined1 (*) [16])(puVar20 + 0x2d) = (undefined1  [16])0x0;
    *(undefined1 *)(puVar20 + 0x2f) = 1;
    lVar13 = 0x180;
    do {
      *(undefined1 (*) [16])((longlong)puVar20 + lVar13) = (undefined1  [16])0x0;
      *(undefined4 *)((longlong)puVar20 + lVar13 + 0x10) = 0xffff0000;
      lVar13 = lVar13 + 0x18;
    } while (lVar13 != 0x240);
    *(undefined4 *)((longlong)puVar20 + 0x254) = 0;
    *(undefined1 (*) [16])(puVar20 + 0x48) = (undefined1  [16])0x0;
    *(undefined2 *)(puVar20 + 0x4a) = 0;
    *(undefined4 *)(puVar20 + 0x4b) = 0xffffffff;
    *(undefined4 *)((longlong)puVar20 + 0x25c) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x4c) = 0xffffffff;
    *(undefined4 *)((longlong)puVar20 + 0x264) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x4d) = 0;
    *(undefined2 *)((longlong)puVar20 + 0x26c) = 0;
    puVar20[0x4e] = 0;
    puVar20[0x50] = 0;
    *(undefined1 *)(puVar20 + 0x51) = 1;
    *(undefined4 *)(puVar20 + 0x52) = 0;
    *(undefined4 *)((longlong)puVar20 + 0x294) = 0;
    *(undefined4 *)(puVar20 + 0x53) = 0;
    *(undefined4 *)((longlong)puVar20 + 0x29c) = 0x3f800000;
    *(undefined4 *)(puVar20 + 0x54) = 0;
    *(undefined4 *)((longlong)puVar20 + 0x2a4) = 0;
    *(undefined4 *)(puVar20 + 0x55) = 0;
    *(undefined4 *)((longlong)puVar20 + 0x2ac) = 0x3f800000;
    *(undefined4 *)(puVar20 + 0x56) = 0;
    *(undefined4 *)((longlong)puVar20 + 0x2b4) = 0;
    *(undefined4 *)(puVar20 + 0x57) = 0;
    *(undefined4 *)((longlong)puVar20 + 700) = 0x3f800000;
    *(undefined4 *)(puVar20 + 0x58) = 0;
    *(undefined4 *)((longlong)puVar20 + 0x2c4) = 0;
    *(undefined4 *)(puVar20 + 0x59) = 0;
    *(undefined4 *)((longlong)puVar20 + 0x2cc) = 0x3f800000;
    *(undefined4 *)(puVar20 + 0x5a) = 0;
    *(undefined4 *)((longlong)puVar20 + 0x2d4) = 0;
    *(undefined4 *)(puVar20 + 0x5b) = 0;
    *(undefined4 *)((longlong)puVar20 + 0x2dc) = 0x3f800000;
    puVar20[100] = 0;
    puVar20[0x66] = 0;
    *(undefined4 *)(puVar20 + 0x67) = 4;
    puVar20[0x68] = 0;
    puVar20[0x6a] = 0;
    *(undefined4 *)(puVar20 + 0x6b) = 4;
    puVar20[0x6c] = 0;
    puVar20[0x6e] = 0;
    *(undefined4 *)(puVar20 + 0x6f) = 4;
    puVar20[0x70] = 0;
    puVar20[0x72] = 0;
    *(undefined4 *)(puVar20 + 0x73) = 4;
    iVar25 = *(int *)(local_380 + 0xa0);
    *(uint *)(local_380 + 0xa0) = iVar25 + 1U;
    if (*(uint *)(local_380 + 0xa4) < iVar25 + 1U) {
      FUN_1448cfae8(local_380 + 0x98,iVar25);
    }
    *(undefined8 **)(*(longlong *)(local_380 + 0x98) + (longlong)iVar25 * 8) = puVar20;
    local_3d8 = *(undefined8 *)(param_3 + 0x11a00);
    local_3e8 = *(undefined8 *)(param_4 + 0x1c0);
    local_3e0 = *(undefined8 *)(param_4 + 0x198);
    local_3f0 = *(undefined8 **)(param_4 + 0x1b0);
    local_3a8 = param_12;
    local_3b0 = param_11;
    local_3b8 = param_10;
    local_3c0 = param_8;
    local_3c8 = param_7;
    local_3d0 = param_6;
    local_3f8 = param_5;
    FUN_142cf09d2(&local_2e8,local_380,uVar14);
    puVar12 = local_370;
    memcpy(local_370,&local_2e8,0x270);
    if ((char)local_38c == '\0') {
      puVar18 = &DAT_14cb05410;
      if (*(char *)(*(longlong *)(param_3 + 8) + 0xd0) != '\0') {
        puVar18 = (undefined *)(*(longlong *)(param_3 + 8) + 0x1b8);
      }
      iVar25 = *(int *)(param_3 + 0x30fc);
      iVar4 = *(int *)(param_3 + 0x30f8);
      fVar28 = (float)(*(int *)(param_3 + 0x3104) - iVar25);
      fVar33 = (float)(*(int *)(param_3 + 0x3100) - iVar4);
      fVar27 = 1.0 / (float)(int)((ulonglong)*(undefined8 *)(puVar18 + 0x10) >> 0x20);
      fVar30 = 1.0 / (float)(int)*(undefined8 *)(puVar18 + 0x10);
      fVar31 = 1.0 / fVar28;
      fVar26 = 1.0 / fVar33;
      puVar20[0x50] = 0;
      *(undefined1 *)(puVar20 + 0x51) = 1;
      *(float *)(puVar20 + 0x52) = fVar33;
      *(float *)((longlong)puVar20 + 0x294) = fVar28;
      puVar20[0x53] = 0;
      *(float *)(puVar20 + 0x54) = fVar33;
      *(float *)((longlong)puVar20 + 0x2a4) = fVar28;
      *(float *)(puVar20 + 0x55) = (float)iVar4;
      *(float *)((longlong)puVar20 + 0x2ac) = (float)iVar25;
      puVar20[0x5a] = 0;
      puVar20[0x58] = 0;
      puVar20[0x59] = 0;
      uVar14 = _DAT_14c846288;
      puVar20[0x62] = _DAT_14c846280;
      puVar20[99] = uVar14;
      uVar14 = _DAT_14c846278;
      puVar20[0x60] = _DAT_14c846270;
      puVar20[0x61] = uVar14;
      uVar14 = _DAT_14c846268;
      puVar20[0x5e] = _DAT_14c846260;
      puVar20[0x5f] = uVar14;
      uVar14 = DAT_14c846258;
      puVar20[0x5c] = _DAT_14c846250;
      puVar20[0x5d] = uVar14;
      uVar29 = 0;
      uVar32 = 0;
    }
    else {
      FUN_144b11afc(&local_2e8,param_3,param_5);
      local_328 = local_2c8;
      uStack_320 = uStack_2c0;
      local_318 = local_2b8;
      uStack_310 = uStack_2b0;
      local_308 = local_2a8;
      uStack_300 = uStack_2a0;
      local_2f8 = local_298;
      uStack_2f0 = uStack_290;
      puVar20[0x50] = 0;
      *(undefined1 *)(puVar20 + 0x51) = 1;
      puVar20[0x54] = 0;
      puVar20[0x55] = 0;
      puVar20[0x52] = 0;
      puVar20[0x53] = 0;
      puVar20[0x58] = CONCAT44(uStack_2e4,local_2e8);
      puVar20[0x59] = CONCAT44(uStack_2dc,uStack_2e0);
      puVar20[0x5a] = local_2d8;
      puVar20[0x5c] = local_2c8;
      puVar20[0x5d] = uStack_2c0;
      puVar20[0x5e] = local_2b8;
      puVar20[0x5f] = uStack_2b0;
      puVar20[0x60] = local_2a8;
      puVar20[0x61] = uStack_2a0;
      puVar20[0x62] = local_298;
      puVar20[99] = uStack_290;
      fVar26 = 1.0;
      fVar31 = 1.0;
      fVar30 = 1.0;
      fVar27 = 1.0;
      uVar29 = uStack_2d0;
      uVar32 = uStack_2cc;
    }
    *(float *)(puVar20 + 0x56) = fVar26;
    *(float *)((longlong)puVar20 + 0x2b4) = fVar31;
    *(float *)(puVar20 + 0x57) = fVar30;
    *(float *)((longlong)puVar20 + 700) = fVar27;
    *(undefined4 *)(puVar20 + 0x5b) = uVar29;
    *(undefined4 *)((longlong)puVar20 + 0x2dc) = uVar32;
    lVar15 = DAT_14ca97170;
    lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar25 = *(int *)(lVar13 + 0xc60);
    if (((iVar25 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar25 == 2)) {
      uVar16 = 0;
    }
    else if (iVar25 == 1) {
      DVar10 = FUN_140ad26c0();
      DVar11 = GetCurrentThreadId();
      uVar16 = (ulonglong)(DVar10 != DVar11);
    }
    else {
      uVar16 = 1;
    }
    lVar19 = local_380;
    if (0 < *(int *)(lVar15 + uVar16 * 4)) {
      local_360 = puVar20 + 0x70;
      FUN_14309a1a8(&local_2e8,local_380,param_3,1);
      puVar20[0x66] = local_2d8;
      puVar20[0x67] = CONCAT44(uStack_2cc,uStack_2d0);
      *(undefined4 *)(puVar20 + 100) = local_2e8;
      *(undefined4 *)((longlong)puVar20 + 0x324) = uStack_2e4;
      *(undefined4 *)(puVar20 + 0x65) = uStack_2e0;
      *(undefined4 *)((longlong)puVar20 + 0x32c) = uStack_2dc;
      FUN_14309a1a8(&local_2e8,lVar19,param_3,0);
      puVar20[0x6a] = local_2d8;
      puVar20[0x6b] = CONCAT44(uStack_2cc,uStack_2d0);
      *(undefined4 *)(puVar20 + 0x68) = local_2e8;
      *(undefined4 *)((longlong)puVar20 + 0x344) = uStack_2e4;
      *(undefined4 *)(puVar20 + 0x69) = uStack_2e0;
      *(undefined4 *)((longlong)puVar20 + 0x34c) = uStack_2dc;
      FUN_14309a1a8(&local_2e8,lVar19,param_3,2);
      puVar12 = local_370;
      puVar20[0x6e] = local_2d8;
      puVar20[0x6f] = CONCAT44(uStack_2cc,uStack_2d0);
      *(undefined4 *)(puVar20 + 0x6c) = local_2e8;
      *(undefined4 *)((longlong)puVar20 + 0x364) = uStack_2e4;
      *(undefined4 *)(puVar20 + 0x6d) = uStack_2e0;
      *(undefined4 *)((longlong)puVar20 + 0x36c) = uStack_2dc;
      FUN_14309a1a8(&local_2e8,lVar19,param_3);
      local_360[2] = local_2d8;
      local_360[3] = CONCAT44(uStack_2cc,uStack_2d0);
      *(undefined4 *)local_360 = local_2e8;
      *(undefined4 *)((longlong)local_360 + 4) = uStack_2e4;
      *(undefined4 *)(local_360 + 1) = uStack_2e0;
      *(undefined4 *)((longlong)local_360 + 0xc) = uStack_2dc;
    }
    if (((param_5 != (undefined4 *)0x0) && (lVar15 = *(longlong *)(param_3 + 0x3108), lVar15 != 0))
       && (*(int *)(lVar15 + 0x1c70) != *(int *)(lVar15 + 0x1c9c))) {
      lVar19 = lVar15 + 0x1ca0;
      if (*(longlong *)(lVar15 + 0x1ca8) != 0) {
        lVar19 = *(longlong *)(lVar15 + 0x1ca8);
      }
      uVar24 = *(uint *)(lVar19 + (ulonglong)(*(int *)(lVar15 + 0x1cb0) - 1U & param_5[0xd]) * 4);
      if (uVar24 != 0xffffffff) {
        do {
          puVar3 = (uint *)(*(longlong *)(lVar15 + 0x1c68) + (longlong)(int)uVar24 * 0x18);
          puVar12 = local_370;
          if (*puVar3 == param_5[0xd]) {
            if (puVar3 + 2 != (uint *)0x0 && puVar3 != (uint *)0x0) {
              uVar14 = *(undefined8 *)(puVar3 + 2);
              goto LAB_142ceca19;
            }
            break;
          }
          uVar24 = puVar3[4];
        } while (uVar24 != 0xffffffff);
      }
    }
    uVar14 = FUN_1448f5828(local_380);
LAB_142ceca19:
    lVar15 = FUN_144a8b0f8();
    plVar5 = local_368;
    cVar6 = '\x02';
    if (*(char *)(lVar15 + 0x41) != '\x03') {
      cVar6 = *(char *)(lVar15 + 0x41);
    }
    puVar20[0x2e] = uVar14;
    *(char *)(puVar20 + 0x2f) = cVar6;
    local_360 = (undefined8 *)0x0;
    if (((*(longlong *)(param_3 + 0x11f90) != 0) &&
        ((*(byte *)(*(longlong *)(param_3 + 0x11f90) + 0xc) & 2) != 0)) &&
       (*(char *)(*(longlong *)(param_5 + 10) + 0x1d6) != '\0')) {
      local_360 = (undefined8 *)
                  (ulonglong)
                  ((uint)(*(longlong *)(*(longlong *)(param_5 + 10) + 0x1c0) != 0 & param_9) * 2);
    }
    piVar2 = (int *)(lVar13 + 0xc60);
    uVar24 = *(uint *)(param_3 + 0x125b0) & 0x80;
    if ((char)local_38c == '\0') {
      bVar7 = FUN_1400bb1e9(local_358,param_3,param_5);
      uVar8 = (uint)(*(int *)(puVar20 + 0x1a) != 0);
      uVar22 = (uint)bVar7 * 2;
      iVar25 = 0;
      uVar16 = 0;
      uVar23 = 0;
      uVar9 = local_390;
    }
    else {
      uVar8 = (**(code **)(*local_368 + 0x38))(local_368);
      cVar6 = (**(code **)(*plVar5 + 0x38))();
      uVar16 = 0;
      if (cVar6 != '\0') {
        bVar7 = (**(code **)(*plVar5 + 0x48))();
        uVar16 = (ulonglong)bVar7;
      }
      uVar9 = 0;
      if ((char)local_390 != '\0') {
        uVar9 = (**(code **)(**(longlong **)(param_5 + 10) + 0x38))();
        uVar9 = uVar9 ^ 1;
      }
      uVar22 = 0;
      iVar25 = (uVar8 & 0xff) + 1;
      uVar23 = (uint)(byte)local_388;
      uVar8 = 0;
    }
    lVar13 = DAT_14ca97170;
    uVar21 = local_378 >> 7 & 0x1ffffff;
    iVar4 = *piVar2;
    if (((iVar4 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar4 == 2)) {
      uVar17 = 0;
    }
    else if (iVar4 == 1) {
      local_368 = (longlong *)CONCAT44(local_368._4_4_,iVar25);
      local_390 = uVar9;
      local_38c = uVar8;
      local_388 = (ulonglong)uVar24;
      local_378 = uVar21;
      DVar10 = FUN_140ad26c0();
      DVar11 = GetCurrentThreadId();
      uVar24 = (uint)local_388;
      uVar17 = (ulonglong)(DVar10 != DVar11);
      uVar21 = local_378;
      iVar25 = (uint)local_368;
      uVar8 = local_38c;
      uVar9 = local_390;
    }
    else {
      uVar17 = 1;
    }
    lVar15 = DAT_14ca97170;
    if (*(int *)(lVar13 + uVar17 * 4) < 1) {
      FUN_144a9a040(*(undefined8 *)(param_3 + 0x13818),&local_2e8,
                    ((int)uVar16 +
                    ((int)local_360 +
                     (uVar24 >> 6 |
                     ((int)local_350 + ((uint)local_391 * 0x10 + (uVar9 & 0xff) * 2 | uVar8) * 4 |
                     uVar22) * 0x10 + (uint)(byte)uVar21 * 4) * 4 | uVar23) * 2) * 3 + iVar25);
      local_3e8 = CONCAT44(local_3e8._4_4_,9);
      lVar13 = local_380;
      uVar14 = local_358;
      local_3f0 = puVar12;
    }
    else {
      iVar4 = *piVar2;
      local_38c = uVar8;
      if (((iVar4 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar4 == 2)) {
        uVar17 = 0;
      }
      else if (iVar4 == 1) {
        local_390 = uVar9;
        local_388 = uVar16;
        local_378 = uVar21;
        DVar10 = FUN_140ad26c0();
        DVar11 = GetCurrentThreadId();
        uVar17 = (ulonglong)(DVar10 != DVar11);
        uVar21 = local_378;
        uVar16 = local_388;
        uVar9 = local_390;
      }
      else {
        uVar17 = 1;
      }
      lVar13 = local_380;
      if ((*(int *)(lVar15 + uVar17 * 4) < 1) || ((*(byte *)(param_3 + 0x11830) & 1) == 0)) {
        uVar9 = (uint)(byte)((char)uVar9 * '\x02');
        uVar8 = (int)uVar21 << 2;
        uVar14 = local_358;
      }
      else {
        uVar8 = (uint)(byte)((char)uVar9 * '\x02');
        local_368 = (longlong *)CONCAT44(local_368._4_4_,uVar8);
        uVar9 = (int)uVar21 * 4 & 0xff;
        local_378 = (ulonglong)uVar9;
        local_390 = uVar22;
        local_388 = uVar16;
        FUN_144a9a040(*(undefined8 *)(param_3 + 0x13818),&local_2e8,
                      ((int)uVar16 +
                       ((int)local_360 +
                        (((int)local_350 + (((uint)local_391 << 4 | uVar8) + local_38c) * 4 | uVar22
                         ) << 4 | uVar9 | uVar24 >> 6) * 4 | uVar23) * 2 | 0x1800) * 3 + iVar25);
        uVar14 = local_358;
        local_3f0 = local_370;
        local_3e8 = CONCAT44(local_3e8._4_4_,3);
        local_3f8 = &local_2e8;
        FUN_142cf50fd(lVar13,local_358,param_3,param_5);
        uVar8 = (uint)local_378;
        puVar12 = local_370;
        uVar16 = local_388;
        uVar9 = (uint)local_368;
        uVar22 = local_390;
      }
      uVar24 = (int)uVar16 +
               ((int)local_360 +
                ((((int)local_350 + (((uint)local_391 << 4 | uVar9) + local_38c) * 4 | uVar22) << 4
                 | uVar8) + (uVar24 >> 6)) * 4 | uVar23) * 2;
      FUN_144a9a040(*(undefined8 *)(param_3 + 0x13818),&local_2e8,(uVar24 | 0x1000) * 3 + iVar25);
      local_3e8._0_4_ = 2;
      local_3f8 = &local_2e8;
      local_3f0 = puVar12;
      FUN_142cf50fd(lVar13,uVar14,param_3,param_5);
      FUN_144a9a040(*(undefined8 *)(param_3 + 0x13818),&local_2e8,(uVar24 | 0x800) * 3 + iVar25);
      local_3e8._0_4_ = 1;
      local_3f8 = &local_2e8;
      local_3f0 = puVar12;
      FUN_142cf50fd(lVar13,uVar14,param_3,param_5);
      FUN_144a9a040(*(undefined8 *)(param_3 + 0x13818),&local_2e8,uVar24 * 3 + iVar25);
      local_3e8 = (ulonglong)local_3e8._4_4_ << 0x20;
      local_3f0 = puVar12;
    }
    local_3f8 = &local_2e8;
    FUN_142cf50fd(lVar13,uVar14,param_3,param_5);
  }
  if ((local_70 ^ (ulonglong)auStack_418) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142ced0bc FUN_142ced0bc body=2419 status=ok
// SIG undefined FUN_142ced0bc(void)

void FUN_142ced0bc(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6,undefined8 param_7,longlong *param_8,
                  char param_9,byte param_10,undefined8 param_11,longlong param_12,int param_13)

{
  ulonglong *puVar1;
  int iVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  uint *puVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined1 auStack_398 [32];
  longlong local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  longlong local_350;
  undefined8 local_348;
  undefined1 local_340;
  undefined8 local_338;
  longlong local_330;
  int local_328;
  byte local_319;
  int local_318;
  uint local_314;
  undefined8 *local_310;
  undefined8 *local_308;
  ulonglong local_300;
  undefined8 *local_2f8;
  int local_2ec;
  ulonglong *local_2e8;
  undefined8 *local_2e0;
  ulonglong *local_2d8;
  undefined1 local_2c9;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 *local_2b8;
  longlong local_2b0;
  undefined *local_2a8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_398;
  if (*(char *)(param_3 + 0x11a08) == '\x01') {
    cVar5 = FUN_1400bd22a(param_5,param_3,0);
    if ((cVar5 != '\0') && (*(longlong *)(param_3 + 0x11b60) != 0)) {
      puVar3 = *(ulonglong **)(param_2 + 0x18);
      local_2ec = *(int *)((longlong)puVar3 + 0x17c);
      if (local_2ec != *(int *)(param_3 + 0x1de0)) {
        *(int *)((longlong)puVar3 + 0x17c) = *(int *)(param_3 + 0x1de0);
        puVar8 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
        puVar10 = puVar8 + 3;
        if ((undefined8 *)puVar3[1] < puVar10) {
          FUN_140023dd8(puVar3,0x20);
          puVar8 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
          puVar10 = puVar8 + 3;
        }
        *puVar3 = (ulonglong)puVar10;
        *(int *)(puVar3 + 0xc) = (int)puVar3[0xc] + 1;
        *(undefined8 **)puVar3[6] = puVar8;
        puVar3[6] = (ulonglong)(puVar8 + 1);
        uVar15 = *(undefined4 *)((longlong)puVar3 + 0x17c);
        puVar8[1] = 0;
        *puVar8 = &PTR_FUN_14a1fb2c0;
        *(undefined4 *)(puVar8 + 2) = uVar15;
      }
      local_308 = (undefined8 *)
                  CONCAT71(local_308._1_7_,*(undefined1 *)(*(longlong *)(param_5 + 0x28) + 0x1e8));
      puVar1 = (ulonglong *)(param_2 + 0x70);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar10 = puVar8 + 0x52;
      local_2d8 = puVar3;
      if (*(undefined8 **)(param_2 + 0x78) < puVar10) {
        FUN_140023dd8(puVar1,0x2a0);
        puVar8 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
        puVar10 = puVar8 + 0x52;
      }
      local_319 = param_12 != 0 && param_13 != -1;
      *puVar1 = (ulonglong)puVar10;
      *puVar8 = &PTR_FUN_14a248320;
      local_2e0 = puVar8 + 2;
      puVar8[2] = 0;
      *(undefined1 *)(puVar8 + 3) = 1;
      local_2f8 = puVar8 + 4;
      puVar8[4] = 0;
      *(undefined1 *)(puVar8 + 5) = 1;
      puVar8[6] = 0;
      *(undefined1 *)(puVar8 + 7) = 1;
      puVar8[8] = 0;
      *(undefined1 *)(puVar8 + 9) = 1;
      puVar8[0x1a] = 0;
      *(undefined1 (*) [16])(puVar8 + 10) = (undefined1  [16])0x0;
      puVar8[0xc] = 0;
      *(undefined1 (*) [16])(puVar8 + 0x17) = (undefined1  [16])0x0;
      *(undefined1 *)(puVar8 + 0x1b) = 1;
      local_310 = puVar8 + 0x1e;
      *(undefined4 *)(puVar8 + 0x1e) = 0;
      *(undefined4 *)((longlong)puVar8 + 0xf4) = 0;
      *(undefined4 *)(puVar8 + 0x1f) = 0;
      *(undefined4 *)((longlong)puVar8 + 0xfc) = 0x3f800000;
      *(undefined1 (*) [16])(puVar8 + 0x20) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar8 + 0x22) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar8 + 0x24) = (undefined1  [16])0x0;
      puVar8[0x26] = 0;
      *(undefined1 *)(puVar8 + 0x27) = 1;
      puVar8[0x28] = 0;
      *(undefined1 *)(puVar8 + 0x29) = 1;
      puVar8[0x2a] = 0;
      *(undefined1 *)(puVar8 + 0x2b) = 1;
      puVar8[0x2c] = 0;
      *(undefined1 *)(puVar8 + 0x2d) = 1;
      *(undefined1 (*) [16])(puVar8 + 0x2f) = (undefined1  [16])0x0;
      *(undefined1 *)(puVar8 + 0x31) = 1;
      lVar9 = 400;
      do {
        *(undefined1 (*) [16])((longlong)puVar8 + lVar9) = (undefined1  [16])0x0;
        *(undefined4 *)((longlong)puVar8 + lVar9 + 0x10) = 0xffff0000;
        lVar9 = lVar9 + 0x18;
      } while (lVar9 != 0x250);
      *(undefined4 *)((longlong)puVar8 + 0x264) = 0;
      *(undefined1 (*) [16])(puVar8 + 0x4a) = (undefined1  [16])0x0;
      *(undefined2 *)(puVar8 + 0x4c) = 0;
      *(undefined4 *)(puVar8 + 0x4d) = 0xffffffff;
      *(undefined4 *)((longlong)puVar8 + 0x26c) = 0xffffffff;
      *(undefined4 *)(puVar8 + 0x4e) = 0xffffffff;
      *(undefined4 *)((longlong)puVar8 + 0x274) = 0xffffffff;
      *(undefined4 *)(puVar8 + 0x4f) = 0;
      *(undefined2 *)((longlong)puVar8 + 0x27c) = 0;
      puVar8[0x50] = 0;
      iVar2 = *(int *)(param_2 + 0xa0);
      *(uint *)(param_2 + 0xa0) = iVar2 + 1U;
      local_2e8 = puVar1;
      if (*(uint *)(param_2 + 0xa4) < iVar2 + 1U) {
        FUN_1448cfae8(param_2 + 0x98,iVar2);
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar2 * 8) = puVar8;
      uVar4 = *(undefined8 *)(param_3 + 0x11a00);
      lVar9 = FUN_144a81af4();
      cVar5 = '\x02';
      if (*(char *)(lVar9 + 0x41) != '\x03') {
        cVar5 = *(char *)(lVar9 + 0x41);
      }
      puVar8[2] = uVar4;
      *(char *)(puVar8 + 3) = cVar5;
      local_358 = *(undefined8 *)(param_3 + 0x11a00);
      local_368 = *(undefined8 *)(param_4 + 0x1c0);
      local_360 = *(undefined8 *)(param_4 + 0x198);
      local_370 = *(undefined8 *)(param_4 + 0x1b0);
      local_340 = (char)local_308 == '\0';
      local_328 = param_13;
      local_330 = param_12;
      local_338 = param_11;
      local_348 = param_7;
      local_350 = param_6;
      local_378 = param_5;
      FUN_142cf09d2(&local_2b8,param_2,*(undefined8 *)(param_1 + 8),param_3);
      memcpy(local_2f8,&local_2b8,0x270);
      puVar3 = local_2e8;
      local_2f8 = *(undefined8 **)(param_3 + 0x11b58);
      lVar9 = *param_8;
      puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar10 = puVar14 + 9;
      if (*(undefined8 **)(param_2 + 0x78) < puVar10) {
        FUN_140023dd8(local_2e8);
        puVar14 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
        puVar10 = puVar14 + 9;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar10;
      puVar14[1] = *(undefined8 *)(lVar9 + 8);
      uVar15 = 0;
      puVar14[2] = 0;
      *(undefined1 *)(puVar14 + 3) = 3;
      *(undefined8 *)((longlong)puVar14 + 0x1c) = 0xffffffffffffffff;
      *puVar14 = &PTR_FUN_14a1fb168;
      *(undefined1 *)(puVar14 + 5) = 0x1c;
      *(undefined8 *)((longlong)puVar14 + 0x2c) = 0xffffffff00000000;
      puVar14[7] = 0;
      puVar14[8] = lVar9;
      iVar2 = *(int *)(param_2 + 0x1a0);
      uVar7 = iVar2 + 1;
      *(uint *)(param_2 + 0x1a0) = uVar7;
      if (*(uint *)(param_2 + 0x1a4) < uVar7) {
        FUN_1447568fc(param_2 + 0x198);
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar2 * 8) = puVar14;
      *(int *)((longlong)puVar14 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
      puVar8[0x24] = puVar14;
      if (*param_8 != 0) {
        uVar15 = *(undefined4 *)(*param_8 + 100);
      }
      *(undefined4 *)((longlong)puVar8 + 0xe4) = uVar15;
      puVar8[0x1e] = &DAT_3f8000003f800000;
      puVar8[0x1f] = &DAT_3f8000003f800000;
      *(undefined4 *)((longlong)puVar8 + 0x174) = *(undefined4 *)(param_5 + 0x34);
      if (param_6 != 0) {
        puVar8[0x25] = param_6;
        *(undefined4 *)(puVar8 + 0x1d) = 1;
      }
      if (param_9 != '\0') {
        *local_310 = 0;
        local_310[1] = 0;
        if ((*(byte *)(*(longlong *)(param_5 + 0x28) + 0x1d0) & 8) == 0) {
          puVar12 = (uint *)(param_5 + 0xe0);
        }
        else {
          puVar12 = (uint *)(*(longlong *)(param_5 + 0x28) + 400);
        }
        uVar7 = 3;
        if ((int)*puVar12 < 3) {
          uVar7 = *puVar12;
        }
        uVar16 = 0;
        if (0 < (int)uVar7) {
          uVar16 = uVar7;
        }
        *(undefined4 *)((longlong)local_310 + (ulonglong)uVar16 * 4) = 0x3f800000;
      }
      puVar8[0x32] = *(undefined8 *)(param_3 + 0x11b60);
      local_310 = (undefined8 *)0x0;
      puVar8[0x33] = 0;
      *(undefined4 *)(puVar8 + 0x34) = 0xffff0001;
      puVar8[0x35] = 0;
      puVar8[0x36] = 0;
      *(undefined4 *)(puVar8 + 0x37) = 0xffff0000;
      *(undefined8 *)((longlong)puVar8 + 0x1bc) = 0;
      *(undefined8 *)((longlong)puVar8 + 0x1c4) = 0;
      *(undefined8 *)((longlong)puVar8 + 0x1ca) = 0;
      *(undefined2 *)((longlong)puVar8 + 0x1d2) = 0xffff;
      *(undefined4 *)((longlong)puVar8 + 0x1d4) = 0;
      *(undefined4 *)((longlong)puVar8 + 0x264) = 0;
      puVar8[0x4a] = 0;
      puVar8[0x4b] = 0;
      *(undefined2 *)(puVar8 + 0x4c) = 0;
      if (((*(longlong *)(param_3 + 0x11f90) != 0) &&
          ((*(byte *)(*(longlong *)(param_3 + 0x11f90) + 0xc) & 2) != 0)) &&
         (*(char *)(*(longlong *)(param_5 + 0x28) + 0x1d6) != '\0')) {
        local_310 = (undefined8 *)
                    (ulonglong)
                    ((uint)(*(longlong *)(*(longlong *)(param_5 + 0x28) + 0x1c0) != 0 & param_10) *
                    2);
      }
      uVar7 = *(uint *)(param_3 + 0x125b0);
      if ((char)local_308 == '\0') {
        bVar6 = FUN_1400bb1e9(*(undefined8 *)(param_1 + 8),param_3,param_5);
        uVar16 = (uint)(*(int *)(puVar8 + 0x1c) != 0);
        uVar13 = (uint)bVar6 << 5;
        local_314 = 0;
        local_300 = 0;
        local_318 = 0;
      }
      else {
        plVar11 = *(longlong **)(param_5 + 0x28);
        if ((*(byte *)(*(longlong *)(param_3 + 8) + 0x52) & 4) == 0) {
          local_314 = 0;
        }
        else {
          local_314 = 0;
          if (plVar11[0x39] != 0) {
            lVar9 = FUN_1447b4020(plVar11[0x39]);
            local_314 = (uint)(lVar9 != 0);
            plVar11 = *(longlong **)(param_5 + 0x28);
          }
        }
        bVar6 = (**(code **)(*plVar11 + 0x38))();
        cVar5 = (**(code **)(**(longlong **)(param_5 + 0x28) + 0x38))();
        local_318 = bVar6 + 1;
        if (cVar5 == '\0') {
          local_300 = 0;
        }
        else {
          bVar6 = (**(code **)(**(longlong **)(param_5 + 0x28) + 0x48))();
          local_300 = (ulonglong)bVar6;
        }
        uVar16 = 0;
        uVar13 = 0;
      }
      uVar4 = *(undefined8 *)(param_3 + 0x13818);
      FUN_1415a8118();
      FUN_1448e935e(uVar4,&local_2b8,&DAT_14c9e9780,0);
      FUN_1415a8118();
      lVar9 = local_2b0;
      local_308 = local_2b8;
      FUN_144a9a040(*(undefined8 *)(param_3 + 0x13818),&local_2c8,
                    ((int)local_300 +
                     ((int)local_310 +
                      (uVar7 >> 6 & 2 | (uint)local_319 << 10 | uVar16 << 6 | uVar13) * 4 |
                     local_314) * 2 | 0xc0) * 3 + local_318);
      FUN_1471db860();
      FUN_140069376(param_2);
      puVar3 = local_2e8;
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar10 = puVar8 + 0x3e;
      if (*(undefined8 **)(param_2 + 0x78) < puVar10) {
        FUN_140023dd8(local_2e8,0x1f8);
        puVar8 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
        puVar10 = puVar8 + 0x3e;
      }
      puVar1 = local_2d8;
      puVar14 = local_2e0;
      *puVar3 = (ulonglong)puVar10;
      local_2b8 = local_2e0;
      local_2b0 = DAT_14c9eb958;
      if (DAT_14c9eb958 != 0) {
        LOCK();
        *(int *)(DAT_14c9eb958 + 8) = *(int *)(DAT_14c9eb958 + 8) + 1;
        UNLOCK();
      }
      local_2a8 = &DAT_14c9eb910;
      local_378 = CONCAT71(local_378._1_7_,2);
      FUN_140068f1a(puVar8,&local_2c9,&local_2b8,1);
      *puVar8 = &PTR_FUN_14a248330;
      puVar8[0x37] = param_1;
      puVar8[0x38] = local_308;
      puVar8[0x39] = lVar9;
      puVar8[0x3a] = local_2c8;
      puVar8[0x3b] = uStack_2c0;
      puVar8[0x3c] = puVar14;
      puVar8[0x3d] = local_2f8;
      iVar2 = *(int *)(param_2 + 0x170);
      *(uint *)(param_2 + 0x170) = iVar2 + 1U;
      if (*(uint *)(param_2 + 0x174) < iVar2 + 1U) {
        FUN_14470e57a(param_2 + 0x168,iVar2);
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar2 * 8) = puVar8;
      *(int *)((longlong)puVar8 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
      FUN_140069100(param_2,puVar8);
      if (*(int *)((longlong)puVar1 + 0x17c) != local_2ec) {
        *(int *)((longlong)puVar1 + 0x17c) = local_2ec;
        puVar8 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar10 = puVar8 + 3;
        if ((undefined8 *)puVar1[1] < puVar10) {
          FUN_140023dd8(puVar1,0x20);
          puVar8 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar10 = puVar8 + 3;
        }
        *puVar1 = (ulonglong)puVar10;
        *(int *)(puVar1 + 0xc) = (int)puVar1[0xc] + 1;
        *(undefined8 **)puVar1[6] = puVar8;
        puVar1[6] = (ulonglong)(puVar8 + 1);
        uVar15 = *(undefined4 *)((longlong)puVar1 + 0x17c);
        puVar8[1] = 0;
        *puVar8 = &PTR_FUN_14a1fb2c0;
        *(undefined4 *)(puVar8 + 2) = uVar15;
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_398) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ceda30 FUN_142ceda30 body=12053 status=ok
// SIG undefined FUN_142ceda30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ceda30(undefined8 *param_1,byte param_2)

{
  byte *pbVar1;
  int *piVar2;
  undefined1 uVar3;
  int iVar4;
  ulonglong *puVar5;
  byte bVar6;
  char cVar7;
  byte bVar8;
  char cVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined7 uVar22;
  longlong lVar15;
  uint ****ppppuVar16;
  uint ******ppppppuVar17;
  undefined8 *puVar18;
  longlong lVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  uint ******ppppppuVar23;
  uint *******pppppppuVar24;
  uint *****pppppuVar25;
  uint *******pppppppuVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  uint uVar29;
  uint uVar30;
  uint *******pppppppuVar31;
  ulonglong uVar32;
  undefined8 *puVar33;
  uint *****pppppuVar34;
  int iVar35;
  uint *******pppppppuVar36;
  uint *******pppppppuVar37;
  byte bVar38;
  uint ****ppppuVar39;
  bool bVar40;
  bool bVar41;
  float fVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined4 uVar47;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar48 [16];
  undefined1 auStack_328 [32];
  uint ******local_308;
  uint ******local_300;
  uint ******local_2f8;
  uint ******local_2f0;
  undefined8 *local_2e8;
  uint ****local_2e0;
  uint ******local_2d8;
  uint ****local_2d0;
  uint local_2c8;
  uint ******local_2c0;
  byte local_2b5;
  uint local_2b4;
  undefined8 *local_2b0;
  undefined8 *local_2a8;
  uint local_29c;
  uint ****local_298;
  uint ******local_290;
  uint ******local_288;
  uint local_27c;
  uint *****local_278;
  uint ******local_270;
  undefined8 local_268;
  undefined4 local_25c;
  uint ******local_258;
  undefined8 local_250;
  uint ******local_248;
  uint local_23c;
  uint ****local_238;
  uint *****local_230;
  uint ******local_228;
  uint ******local_220;
  ulonglong local_218;
  uint ******local_210;
  uint *****local_208;
  undefined4 local_1fc;
  undefined8 *local_1f8;
  undefined8 local_1f0;
  int *local_1e8;
  longlong *local_1e0;
  uint *****local_1d8;
  undefined1 local_1d0 [8];
  uint *****local_1c8;
  uint ******ppppppuStack_1c0;
  undefined4 local_1b8;
  undefined8 uStack_178;
  undefined4 auStack_170 [2];
  uint ******local_168;
  uint *****local_160;
  uint ******ppppppuStack_158;
  undefined8 local_150;
  undefined4 local_148;
  int iStack_144;
  int local_140;
  undefined4 local_13c;
  undefined2 uStack_138;
  undefined1 uStack_136;
  undefined1 uStack_135;
  undefined1 uStack_134;
  undefined1 local_133;
  longlong local_128;
  longlong local_108;
  uint ******local_e8;
  uint *****local_e0;
  uint ******ppppppuStack_d8;
  undefined4 local_d0;
  uint local_cc;
  undefined4 local_c8;
  int local_c4;
  int local_c0;
  undefined4 local_bc;
  undefined2 local_b8;
  undefined1 local_b6;
  undefined2 local_b5;
  undefined1 local_b3;
  uint local_a0 [3];
  byte local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_328;
  pppppuVar25 = (uint *****)(longlong)*(int *)*param_1;
  local_2b5 = param_2;
  if (*(int *)*param_1 < *(int *)param_1[1]) {
    pppppppuVar36 = (uint *******)param_1[3];
    local_258 = (uint ******)(pppppppuVar36 + 0x13);
    local_220 = (uint ******)(pppppppuVar36 + 0x7d);
    auVar48 = pmovsxbd(unaff_XMM8,0x1010101);
    local_2c0 = (uint ******)pppppppuVar36;
    local_2b0 = param_1;
    do {
      puVar18 = local_2b0;
      lVar15 = *(longlong *)local_2b0[2];
      local_290 = *(uint *******)(lVar15 + 8 + (longlong)pppppuVar25 * 0x18);
      ppppppuVar17 = (uint ******)local_290[5];
      local_230 = (uint *****)
                  (pppppppuVar36[0x9b] + (longlong)(int)*(uint *)((longlong)local_290 + 0x34) * 0xd)
      ;
      local_238 = (uint ****)pppppuVar25;
      uVar11 = FUN_144aaa900(1,3,local_258);
      uVar28 = (ulonglong)uVar11;
      if (*(char *)((longlong)ppppppuVar17 + 0x1d2) == '\x02') {
LAB_142cf076f:
        bVar41 = true;
        if ((ulonglong)*(byte *)(ppppppuVar17 + 0x3d) < 4) {
          bVar41 = *(int *)(*(longlong *)(&PTR_DAT_14a249150)[*(byte *)(ppppppuVar17 + 0x3d)] + 4)
                   != 0;
        }
        uVar11 = CONCAT31((int3)(uVar11 >> 8),(byte)uVar11 & bVar41);
        uVar28 = (ulonglong)uVar11;
        uVar27 = (ulonglong)uVar11;
        puVar18 = local_2b0;
      }
      else {
        if (*(longlong **)(DAT_14cb0d2b0 + 0xfd0) == (longlong *)0x0) {
          uVar13 = 0;
        }
        else {
          uVar29 = (**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0xfd0) + 8))();
          uVar13 = (ulonglong)uVar29;
        }
        uVar27 = 0;
        bVar6 = FUN_144b0f89b(0,0x9b);
        cVar7 = FUN_144aaa900(CONCAT71((int7)(uVar13 >> 8),
                                       ((byte)uVar13 & bVar6 ^ 1) & 0 < *(int *)(DAT_14c9e93c8 + 4))
                              ,3,local_258);
        if (cVar7 != '\0') {
          if (*(char *)((longlong)ppppppuVar17 + 0x1d2) == '\x01') goto LAB_142cf076f;
          uVar27 = 0;
        }
      }
      if ((((*(char *)(ppppppuVar17 + 0x3d) == '\0') ||
           ((*(byte *)((longlong)*local_2c0[0x14] + 0x2954) & 1) == 0)) ||
          (*(int *)(DAT_14ca046e8 + 4) == 0)) || (-1 < (int)*(uint *)((longlong)local_2c0 + 0xe4)))
      {
LAB_142cedbb9:
        bVar6 = 1;
      }
      else {
        ppppppuVar23 = (uint ******)(local_2c0[0x1b] + 1);
        if ((uint ******)local_2c0[0x1b] == (uint ******)0x0) {
          ppppppuVar23 = (uint ******)&DAT_14c760db4;
        }
        if (((int)(&DAT_14ca814b8)
                  [(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)ppppppuVar23 * 2) * 0xf
                  ] < 4) ||
           (((&DAT_14ca814cd)
             [(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)ppppppuVar23 * 2) * 0x3c] &
            3) == 0)) goto LAB_142cedbb9;
        bVar6 = *(byte *)((longlong)ppppppuVar17 + 0x1d4);
        cVar7 = *(char *)((longlong)ppppppuVar17 + 0x1d5);
        uVar28 = CONCAT71((int7)(uVar28 >> 8),cVar7);
        cVar9 = FUN_1472390ef(local_258);
        cVar10 = '\x01';
        if (cVar9 == '\0') {
          cVar10 = FUN_1472390cb(local_258);
        }
        puVar18 = local_2b0;
        if (cVar10 != '\x01' || (bVar6 & 2) == 0) goto LAB_142cedbb9;
        bVar41 = cVar7 == '\x02';
        if (cVar7 == '\0') {
          bVar41 = DAT_14ca04a20 == 1;
        }
        if (bVar41) {
LAB_142cf088c:
          bVar6 = 0;
        }
        else {
          pppppuVar34 = (uint *****)*local_2c0[0x14];
          if (*(char *)(pppppuVar34 + 0x613) != '\x01') goto LAB_142cedbb9;
          if (*(char *)(pppppuVar34 + 0x47d) != '\x01') goto LAB_142cf088c;
          if (*(char *)((longlong)pppppuVar34 + 0x23ea) == '\0') goto LAB_142cedbb9;
          bVar6 = 0;
        }
      }
      local_228 = (uint ******)(lVar15 + (longlong)pppppuVar25 * 0x18);
      uVar11 = *(uint *)local_228;
      if ((uVar11 & 4) == 0) {
        uVar28 = 0;
      }
      else {
        uVar22 = (undefined7)(uVar28 >> 8);
        uVar28 = CONCAT71(uVar22,1);
        if (*(char *)puVar18[4] == '\x01') {
          uVar28 = CONCAT71(uVar22,*(byte *)((longlong)local_228 + 0x14)) ^ 1;
        }
      }
      uVar29 = (uVar11 & 0x10) >> 4;
      bVar8 = (byte)uVar27;
      uVar22 = (undefined7)(uVar27 >> 8);
      if ((uVar11 & 0x10) == 0) {
        if ((*(byte *)puVar18[5] & 1) != 0) {
          uVar13 = 0;
          goto LAB_142cedc1f;
        }
LAB_142cedc3b:
        uVar13 = 0;
        local_23c = 0;
        uVar47 = 0;
      }
      else {
        if ((*(byte *)puVar18[5] & 1) == 0) goto LAB_142cedc3b;
        uVar13 = CONCAT71((int7)((ulonglong)puVar18 >> 8),
                          *(undefined1 *)((longlong)ppppppuVar17 + 0x1d1)) & 0xffffffffffffff02;
        uVar13 = CONCAT71((int7)(uVar13 >> 8),(byte)uVar13 >> 1);
LAB_142cedc1f:
        uVar47 = (undefined4)CONCAT71(uVar22,bVar8 & bVar6 | local_2b5);
        local_23c = uVar29;
      }
      bVar38 = bVar8 & bVar6;
      uVar27 = CONCAT71(uVar22,bVar38);
      pppppppuVar36 = (uint *******)local_2c0;
      if ((bVar38 & local_2b5) == 0) {
        local_25c = uVar47;
        if ((((byte)uVar11 >> 4 | (byte)uVar28) & 1) == 0) {
          local_250 = 0;
          local_268 = 0;
          pppppppuVar37 = (uint *******)0x0;
          pppppppuVar24 = (uint *******)0x0;
          local_2a8 = (undefined8 *)0x0;
          puVar18 = local_2b0;
        }
        else {
          if (((*(int *)(DAT_14c9e94c8 + 4) == 0) ||
              (((~(bVar6 & ~bVar8 & (uint *****)*local_2c0[0xf8] != (uint *****)0x0) | (byte)uVar28)
               & 1) != 0)) || (local_250 = 0, (uVar11 & 3) == 0)) {
            local_250 = 0;
            local_268 = 0;
          }
          else {
            local_268 = 0;
            if (*(int *)(local_230 + 0xc) != -1) {
              uVar14 = (ulonglong)*(int *)(local_230 + 1);
              if (0 < (longlong)uVar14) {
                bVar41 = false;
                uVar32 = 1;
                do {
                  ppppuVar16 = (uint ****)(*local_230)[uVar32 - 1];
                  if (((((ulonglong)ppppuVar16[0x132] & 1) != 0) &&
                      (*(int *)((longlong)ppppuVar16 + 0x99c) == -1)) &&
                     (ppppuVar16[0x16a] == (uint ***)0x0)) break;
                  bVar41 = uVar14 <= uVar32;
                  bVar40 = uVar32 != uVar14;
                  uVar32 = uVar32 + 1;
                } while (bVar40);
                if (!bVar41) {
                  local_250 = 0;
                  local_268 = 0;
                  goto LAB_142cedcca;
                }
              }
              uVar22 = (undefined7)((ulonglong)DAT_14c9e9540 >> 8);
              local_268 = CONCAT71(uVar22,0 < *(int *)(DAT_14c9e9540 + 4));
              local_250 = CONCAT71(uVar22,1);
            }
          }
LAB_142cedcca:
          local_208 = (uint *****)ppppppuVar17;
          if ((*(longlong *)local_2b0[6] == 0) || (*(longlong *)local_2b0[7] == 0)) {
            pppppppuVar36 = (uint *******)(DAT_14ca4af10 | 9);
            local_1b8 = DAT_14ca84d40;
            local_1c8 = (uint *****)_DAT_14ca84d30;
            ppppppuStack_1c0 = (uint ******)pppppppuRam000000014ca84d38;
            uVar30 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
            local_2b4 = (uint)uVar13;
            local_2a8 = (undefined8 *)CONCAT71(local_2a8._1_7_,bVar38);
            iVar35 = (int)*(undefined8 *)(local_2b0[8] + 0x20);
            iVar12 = (int)((ulonglong)*(undefined8 *)(local_2b0[8] + 0x20) >> 0x20);
            local_27c = uVar29;
            if (*(longlong *)local_2b0[6] == 0 && (char)local_250 == '\0') {
              lVar15 = local_2b0[9];
              uStack_134 = 0;
              local_13c = 0x10001;
              uStack_138 = 0x101;
              uStack_136 = 0;
              uStack_135 = 2;
              iStack_144 = DAT_14ca84e40;
              if (iVar35 < DAT_14ca84e40) {
                iStack_144 = iVar35;
              }
              if (iStack_144 < 2) {
                iStack_144 = 1;
              }
              local_140 = DAT_14ca84e40;
              if (iVar12 < DAT_14ca84e40) {
                local_140 = iVar12;
              }
              local_160 = (uint *****)_DAT_14ca84d30;
              ppppppuStack_158 = (uint ******)pppppppuRam000000014ca84d38;
              local_148 = 0;
              local_133 = 0xff;
              local_150 = (uint ******)CONCAT44(uVar30,DAT_14ca84d40);
              if (local_140 < 2) {
                local_140 = 1;
              }
              uVar27 = *(longlong *)(lVar15 + 0x70) + 7U & 0xfffffffffffffff8;
              uVar13 = uVar27 + 0x120;
              local_168 = (uint ******)pppppppuVar36;
              if (*(ulonglong *)(lVar15 + 0x78) < uVar13) {
                FUN_140023dd8((longlong *)(lVar15 + 0x70),0x128);
                uVar27 = *(longlong *)(lVar15 + 0x70) + 7U & 0xfffffffffffffff8;
                uVar13 = uVar27 + 0x120;
              }
              *(ulonglong *)(lVar15 + 0x70) = uVar13;
              FUN_1456bbb8c(uVar27,L"ShadowMaskTexture",&local_168,0);
              iVar4 = *(int *)(lVar15 + 0x180);
              *(uint *)(lVar15 + 0x180) = iVar4 + 1U;
              if (*(uint *)(lVar15 + 0x184) < iVar4 + 1U) {
                FUN_14472c0f6(lVar15 + 0x178,iVar4);
              }
              *(ulonglong *)(*(longlong *)(lVar15 + 0x178) + (longlong)iVar4 * 8) = uVar27;
              *(int *)(uVar27 + 0x9c) = *(int *)(lVar15 + 0x180) + -1;
              *(ulonglong *)local_2b0[6] = uVar27;
              uVar13 = (ulonglong)local_2b4;
              uVar27 = (ulonglong)local_2a8 & 0xff;
            }
            uVar29 = local_27c;
            if (((char)local_25c == '\x01' && (char)local_268 == '\0') &&
                *(longlong *)local_2b0[7] == 0) {
              lVar15 = local_2b0[9];
              uStack_134 = 0;
              local_13c = 0x10001;
              uStack_138 = 0x101;
              uStack_136 = 0;
              uStack_135 = 2;
              iStack_144 = DAT_14ca84e40;
              if (iVar35 < DAT_14ca84e40) {
                iStack_144 = iVar35;
              }
              if (iStack_144 < 2) {
                iStack_144 = 1;
              }
              local_140 = DAT_14ca84e40;
              if (iVar12 < DAT_14ca84e40) {
                local_140 = iVar12;
              }
              local_160 = local_1c8;
              ppppppuStack_158 = ppppppuStack_1c0;
              local_148 = 0;
              local_133 = 0xff;
              local_150 = (uint ******)CONCAT44(uVar30,local_1b8);
              if (local_140 < 2) {
                local_140 = 1;
              }
              uVar27 = *(longlong *)(lVar15 + 0x70) + 7U & 0xfffffffffffffff8;
              uVar13 = uVar27 + 0x120;
              local_168 = (uint ******)pppppppuVar36;
              if (*(ulonglong *)(lVar15 + 0x78) < uVar13) {
                FUN_140023dd8((longlong *)(lVar15 + 0x70),0x128);
                uVar27 = *(longlong *)(lVar15 + 0x70) + 7U & 0xfffffffffffffff8;
                uVar13 = uVar27 + 0x120;
              }
              *(ulonglong *)(lVar15 + 0x70) = uVar13;
              FUN_1456bbb8c(uVar27,L"ShadowMaskSubPixelTexture",&local_168,0);
              iVar12 = *(int *)(lVar15 + 0x180);
              *(uint *)(lVar15 + 0x180) = iVar12 + 1U;
              if (*(uint *)(lVar15 + 0x184) < iVar12 + 1U) {
                FUN_14472c0f6(lVar15 + 0x178,iVar12);
              }
              *(ulonglong *)(*(longlong *)(lVar15 + 0x178) + (longlong)iVar12 * 8) = uVar27;
              *(int *)(uVar27 + 0x9c) = *(int *)(lVar15 + 0x180) + -1;
              *(ulonglong *)local_2b0[7] = uVar27;
              uVar13 = (ulonglong)local_2b4;
              uVar27 = (ulonglong)local_2a8 & 0xff;
              uVar29 = local_27c;
            }
          }
          puVar18 = local_2b0;
          cVar7 = (char)uVar27;
          uVar30 = (uint)uVar13;
          if ((char)local_250 == '\0') {
            pppppppuVar24 = *(uint ********)local_2b0[6];
          }
          else {
            pppppppuVar24 = (uint *******)0x0;
          }
          if ((char)local_268 == '\0') {
            pppppppuVar37 = *(uint ********)local_2b0[7];
          }
          else {
            pppppppuVar37 = (uint *******)0x0;
          }
          if ((uVar11 & 0x10) == 0) {
            local_2a8 = (undefined8 *)0x0;
            pppppppuVar36 = (uint *******)local_2c0;
          }
          else {
            local_1d0._4_4_ = DAT_14c760478;
            if (DAT_14c760478 < 0) {
              local_1d0._4_4_ = *(undefined4 *)(local_208 + 0x44);
            }
            pppppppuVar31 = (uint *******)*local_220;
            ppppppuVar17 = (uint ******)local_290[5];
            bVar6 = *(byte *)(ppppppuVar17 + 0x3d);
            if (bVar6 == 0) {
              fVar42 = (float)(*(code *)(*ppppppuVar17)[10])();
LAB_142cee179:
              bVar41 = true;
              if (0.0 < fVar42) {
LAB_142cee180:
                iVar12 = (**(code **)(**(longlong **)puVar18[10] + 0x10))
                                   (*(longlong **)puVar18[10],pppppppuVar31,local_290,local_1d0 + 4)
                ;
                bVar41 = iVar12 == 2;
              }
            }
            else {
              if (bVar6 < 3) {
                fVar42 = (float)(*(code *)(*ppppppuVar17)[5])();
                goto LAB_142cee179;
              }
              bVar41 = true;
              if (bVar6 == 3) goto LAB_142cee180;
            }
            pppppppuVar36 = (uint *******)local_2c0;
            local_248 = (uint ******)pppppppuVar24;
            if (((cVar7 != '\0') && ((bVar41 & *(byte *)puVar18[0xb]) == 1)) &&
               ((((ulonglong)*local_228 & 0x10) != 0 &&
                (((int)((longlong *)puVar18[0xc])[1] == 0 ||
                 (*(longlong *)
                   (*(longlong *)puVar18[0xc] +
                   ((longlong)local_238 - (longlong)*(int *)*puVar18) * 8) == 0)))))) {
              lVar15 = 0x10;
              do {
                *(undefined8 *)((longlong)&uStack_178 + lVar15) = 0;
                *(undefined4 *)((longlong)auStack_170 + lVar15) = 1;
                *(undefined1 (*) [16])((longlong)&local_168 + lVar15) = (undefined1  [16])0x0;
                lVar15 = lVar15 + 0x20;
              } while (lVar15 != 0x90);
              FUN_1448e94e7(&local_1c8,puVar18[9]);
              local_1f8 = (undefined8 *)puVar18[10];
              local_1f0 = puVar18[9];
              local_1e0 = (longlong *)puVar18[0xc];
              local_1e8 = (int *)*puVar18;
              pppppppuVar36 = (uint *******)local_2c0;
              if ((longlong)local_238 < (longlong)*(int *)puVar18[1]) {
                local_218 = local_218 & 0xffffffff00000000;
                local_29c = (uint)uVar28;
                local_2a8 = (undefined8 *)CONCAT71(local_2a8._1_7_,cVar7);
                pppppuVar25 = (uint *****)local_238;
                local_2b4 = uVar30;
                local_288 = (uint ******)pppppppuVar31;
                local_27c = uVar29;
                do {
                  if ((*(byte *)(*(longlong *)puVar18[2] + (longlong)pppppuVar25 * 0x18) & 0x10) !=
                      0) {
                    pppppppuVar36 =
                         *(uint ********)
                          (*(longlong *)puVar18[2] + 8 + (longlong)pppppuVar25 * 0x18);
                    ppppppuVar17 = pppppppuVar36[5];
                    local_298 = (uint ****)pppppuVar25;
                    bVar6 = FUN_144aaa900(CONCAT71((int7)((ulonglong)((longlong)pppppuVar25 * 3) >>
                                                         8),1),3,local_258);
                    if (*(char *)((longlong)ppppppuVar17 + 0x1d2) == '\x02') {
LAB_142cee3f4:
                      bVar41 = true;
                      if ((ulonglong)*(byte *)(ppppppuVar17 + 0x3d) < 4) {
                        bVar41 = *(int *)(*(longlong *)
                                           (&PTR_DAT_14a249150)[*(byte *)(ppppppuVar17 + 0x3d)] + 4)
                                 != 0;
                      }
                      bVar38 = bVar6 & bVar41;
                    }
                    else {
                      if (*(longlong **)(DAT_14cb0d2b0 + 0xfd0) == (longlong *)0x0) {
                        uVar28 = 0;
                      }
                      else {
                        uVar11 = (**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0xfd0) + 8))();
                        uVar28 = (ulonglong)uVar11;
                      }
                      bVar38 = 0;
                      bVar8 = FUN_144b0f89b(0,0x9b);
                      cVar7 = FUN_144aaa900(CONCAT71((int7)(uVar28 >> 8),
                                                     ((byte)uVar28 & bVar8 ^ 1) &
                                                     0 < *(int *)(DAT_14c9e93c8 + 4)),3,local_258);
                      if (cVar7 != '\0') {
                        if (*(char *)((longlong)ppppppuVar17 + 0x1d2) == '\x01') goto LAB_142cee3f4;
                        bVar38 = 0;
                      }
                    }
                    if ((((*(char *)(ppppppuVar17 + 0x3d) == '\0') ||
                         ((*(byte *)((longlong)*local_2c0[0x14] + 0x2954) & 1) == 0)) ||
                        (*(int *)(DAT_14ca046e8 + 4) == 0)) ||
                       (-1 < (int)*(uint *)((longlong)local_2c0 + 0xe4))) {
LAB_142cee3aa:
                      if (bVar38 == 0) {
LAB_142cee3b2:
                        uVar28 = (ulonglong)local_29c;
                        uVar13 = (ulonglong)local_2b4;
                        uVar27 = (ulonglong)local_2a8 & 0xff;
                        pppppuVar25 = (uint *****)local_298;
                        pppppppuVar36 = (uint *******)local_2c0;
                        puVar18 = local_2b0;
                        pppppppuVar31 = (uint *******)local_288;
                        goto LAB_142ceedd4;
                      }
LAB_142cee5c1:
                      pppppppuVar31 = (uint *******)local_288;
                      uVar11 = local_29c;
                      puVar21 = local_2a8;
                      puVar18 = local_2b0;
                      uVar30 = local_2b4;
                      ppppppuVar17 = pppppppuVar36[5];
                      bVar6 = *(byte *)(ppppppuVar17 + 0x3d);
                      local_270 = (uint ******)pppppppuVar36;
                      if (bVar6 == 0) {
                        fVar42 = (float)(*(code *)(*ppppppuVar17)[10])();
LAB_142cee609:
                        if (0.0 < fVar42) goto LAB_142cee60e;
LAB_142cee620:
                        pppppppuVar24 = (uint *******)0x0;
                      }
                      else {
                        if (bVar6 < 3) {
                          fVar42 = (float)(*(code *)(*ppppppuVar17)[5])();
                          goto LAB_142cee609;
                        }
                        if (bVar6 != 3) goto LAB_142cee620;
LAB_142cee60e:
                        pppppppuVar24 =
                             (uint *******)
                             CONCAT71((int7)((ulonglong)pppppppuVar24 >> 8),0 < *(int *)puVar18[0xd]
                                     );
                      }
                      local_1d0._0_4_ = DAT_14c760478;
                      if (DAT_14c760478 < 0) {
                        local_1d0._0_4_ = *(undefined4 *)(local_270[5] + 0x44);
                      }
                      uVar47 = 0;
                      if ((char)pppppppuVar24 != '\0') {
                        iVar12 = (**(code **)(**(longlong **)puVar18[10] + 0x10))
                                           (*(longlong **)puVar18[10],pppppppuVar31,local_270,
                                            local_1d0);
                        uVar47 = 2;
                        if (iVar12 != 2) goto LAB_142ceed51;
                      }
                      local_210 = (uint ******)CONCAT44(local_210._4_4_,(int)pppppppuVar24);
                      local_d0 = DAT_14ca83a40;
                      local_e0 = (uint *****)_DAT_14ca83a30;
                      ppppppuStack_d8 = (uint ******)_DAT_14ca83a38;
                      iVar12 = (int)*(undefined8 *)(puVar18[8] + 0x20);
                      local_c4 = DAT_14ca84e40;
                      if (iVar12 < DAT_14ca84e40) {
                        local_c4 = iVar12;
                      }
                      if (local_c4 < 2) {
                        local_c4 = 1;
                      }
                      iVar12 = (int)((ulonglong)*(undefined8 *)(puVar18[8] + 0x20) >> 0x20);
                      local_c0 = DAT_14ca84e40;
                      if (iVar12 < DAT_14ca84e40) {
                        local_c0 = iVar12;
                      }
                      lVar15 = puVar18[9];
                      local_cc = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
                      local_b6 = 0;
                      local_e8 = (uint ******)0x20009;
                      local_b5 = 10;
                      local_bc = 0x10001;
                      local_b8 = 0x101;
                      local_c8 = 0;
                      local_b3 = 0xff;
                      if (local_c0 < 2) {
                        local_c0 = 1;
                      }
                      ppppppuVar23 = (uint ******)
                                     (*(longlong *)(lVar15 + 0x70) + 7U & 0xfffffffffffffff8);
                      ppppppuVar17 = ppppppuVar23 + 0x24;
                      local_1fc = uVar47;
                      if (*(uint *******)(lVar15 + 0x78) < ppppppuVar17) {
                        FUN_140023dd8((longlong *)(lVar15 + 0x70),0x128);
                        ppppppuVar23 = (uint ******)
                                       (*(longlong *)(lVar15 + 0x70) + 7U & 0xfffffffffffffff8);
                        ppppppuVar17 = ppppppuVar23 + 0x24;
                      }
                      *(uint *******)(lVar15 + 0x70) = ppppppuVar17;
                      FUN_1456bbb8c(ppppppuVar23,L"RayTracingOcclusion",&local_e8,0);
                      iVar12 = *(int *)(lVar15 + 0x180);
                      *(uint *)(lVar15 + 0x180) = iVar12 + 1U;
                      if (*(uint *)(lVar15 + 0x184) < iVar12 + 1U) {
                        FUN_14472c0f6(lVar15 + 0x178,iVar12);
                      }
                      *(uint *******)(*(longlong *)(lVar15 + 0x178) + (longlong)iVar12 * 8) =
                           ppppppuVar23;
                      *(int *)((longlong)ppppppuVar23 + 0x9c) = *(int *)(lVar15 + 0x180) + -1;
                      local_d0 = DAT_14ca83a40;
                      local_e0 = (uint *****)_DAT_14ca83a30;
                      ppppppuStack_d8 = (uint ******)_DAT_14ca83a38;
                      iVar12 = (int)*(undefined8 *)(puVar18[8] + 0x20);
                      local_c4 = DAT_14ca84e40;
                      if (iVar12 < DAT_14ca84e40) {
                        local_c4 = iVar12;
                      }
                      if (local_c4 < 2) {
                        local_c4 = 1;
                      }
                      iVar12 = (int)((ulonglong)*(undefined8 *)(puVar18[8] + 0x20) >> 0x20);
                      local_c0 = DAT_14ca84e40;
                      if (iVar12 < DAT_14ca84e40) {
                        local_c0 = iVar12;
                      }
                      lVar15 = puVar18[9];
                      local_cc = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
                      local_b6 = 0;
                      local_e8 = (uint ******)0x20009;
                      local_b5 = 0x15;
                      local_bc = 0x10001;
                      local_b8 = 0x101;
                      local_c8 = 0;
                      local_b3 = 0xff;
                      if (local_c0 < 2) {
                        local_c0 = 1;
                      }
                      ppppuVar39 = (uint ****)
                                   (*(longlong *)(lVar15 + 0x70) + 7U & 0xfffffffffffffff8);
                      ppppuVar16 = ppppuVar39 + 0x24;
                      local_278 = (uint *****)ppppppuVar23;
                      if (*(uint *****)(lVar15 + 0x78) < ppppuVar16) {
                        FUN_140023dd8((longlong *)(lVar15 + 0x70),0x128);
                        ppppuVar39 = (uint ****)
                                     (*(longlong *)(lVar15 + 0x70) + 7U & 0xfffffffffffffff8);
                        ppppuVar16 = ppppuVar39 + 0x24;
                      }
                      *(uint *****)(lVar15 + 0x70) = ppppuVar16;
                      FUN_1456bbb8c(ppppuVar39,L"RayTracingOcclusionDistance",&local_e8,0);
                      iVar12 = *(int *)(lVar15 + 0x180);
                      *(uint *)(lVar15 + 0x180) = iVar12 + 1U;
                      if (*(uint *)(lVar15 + 0x184) < iVar12 + 1U) {
                        FUN_14472c0f6(lVar15 + 0x178,iVar12);
                      }
                      *(uint *****)(*(longlong *)(lVar15 + 0x178) + (longlong)iVar12 * 8) =
                           ppppuVar39;
                      *(int *)((longlong)ppppuVar39 + 0x9c) = *(int *)(lVar15 + 0x180) + -1;
                      if (*(char *)puVar18[5] == '\x01') {
                        local_d0 = DAT_14ca83a40;
                        local_e0 = (uint *****)_DAT_14ca83a30;
                        ppppppuStack_d8 = (uint ******)_DAT_14ca83a38;
                        iVar12 = (int)*(undefined8 *)(puVar18[8] + 0x20);
                        local_c4 = DAT_14ca84e40;
                        if (iVar12 < DAT_14ca84e40) {
                          local_c4 = iVar12;
                        }
                        if (local_c4 < 2) {
                          local_c4 = 1;
                        }
                        iVar12 = (int)((ulonglong)*(undefined8 *)(puVar18[8] + 0x20) >> 0x20);
                        local_c0 = DAT_14ca84e40;
                        if (iVar12 < DAT_14ca84e40) {
                          local_c0 = iVar12;
                        }
                        lVar15 = puVar18[9];
                        local_cc = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
                        local_b6 = 0;
                        local_e8 = (uint ******)0x20009;
                        local_b5 = 10;
                        local_bc = 0x10001;
                        local_b8 = 0x101;
                        local_c8 = 0;
                        local_b3 = 0xff;
                        if (local_c0 < 2) {
                          local_c0 = 1;
                        }
                        ppppppuVar23 = (uint ******)
                                       (*(longlong *)(lVar15 + 0x70) + 7U & 0xfffffffffffffff8);
                        ppppppuVar17 = ppppppuVar23 + 0x24;
                        if (*(uint *******)(lVar15 + 0x78) < ppppppuVar17) {
                          FUN_140023dd8((longlong *)(lVar15 + 0x70),0x128);
                          ppppppuVar23 = (uint ******)
                                         (*(longlong *)(lVar15 + 0x70) + 7U & 0xfffffffffffffff8);
                          ppppppuVar17 = ppppppuVar23 + 0x24;
                        }
                        *(uint *******)(lVar15 + 0x70) = ppppppuVar17;
                        FUN_1456bbb8c(ppppppuVar23,L"SubPixelRayTracingOcclusion",&local_e8,0);
                        iVar12 = *(int *)(lVar15 + 0x180);
                        *(uint *)(lVar15 + 0x180) = iVar12 + 1U;
                        if (*(uint *)(lVar15 + 0x184) < iVar12 + 1U) {
                          FUN_14472c0f6(lVar15 + 0x178,iVar12);
                        }
                        *(uint *******)(*(longlong *)(lVar15 + 0x178) + (longlong)iVar12 * 8) =
                             ppppppuVar23;
                        *(int *)((longlong)ppppppuVar23 + 0x9c) = *(int *)(lVar15 + 0x180) + -1;
                        lVar15 = puVar18[9];
                        bVar6 = *(byte *)((longlong)ppppppuVar23 + 0x94);
                        pppppppuVar36 =
                             (uint *******)(*(longlong *)(lVar15 + 0x70) + 7U & 0xfffffffffffffff8);
                        pppppppuVar24 = pppppppuVar36 + 9;
                        if (*(uint ********)(lVar15 + 0x78) < pppppppuVar24) {
                          FUN_140023dd8((longlong *)(lVar15 + 0x70),0x50);
                          pppppppuVar36 =
                               (uint *******)
                               (*(longlong *)(lVar15 + 0x70) + 7U & 0xfffffffffffffff8);
                          pppppppuVar24 = pppppppuVar36 + 9;
                        }
                        *(uint ********)(lVar15 + 0x70) = pppppppuVar24;
                        pppppppuVar36[1] = (uint ******)ppppppuVar23[1];
                        pppppppuVar36[2] = (uint ******)0x0;
                        *(byte *)(pppppppuVar36 + 3) = 0;
                        ((uint *)((longlong)pppppppuVar36 + 0x1c))[0] = 0xffffffff;
                        ((uint *)((longlong)pppppppuVar36 + 0x1c))[1] = 0xffffffff;
                        *(byte *)(pppppppuVar36 + 5) = 0;
                        *pppppppuVar36 = (uint ******)&PTR_FUN_14a1fb948;
                        *(byte *)(pppppppuVar36 + 6) = bVar6;
                        *(byte *)(pppppppuVar36 + 7) = 0;
                        pbVar1 = (byte *)((longlong)pppppppuVar36 + 0x31);
                        pbVar1[0] = 0;
                        pbVar1[1] = 0;
                        pbVar1[2] = 0;
                        pbVar1[3] = 0;
                        ((byte *)((longlong)pppppppuVar36 + 0x35))[0] = 0;
                        ((byte *)((longlong)pppppppuVar36 + 0x35))[1] = 0;
                        pppppppuVar36[8] = ppppppuVar23;
                        iVar12 = *(int *)(lVar15 + 0x1a0);
                        *(uint *)(lVar15 + 0x1a0) = iVar12 + 1U;
                        local_1d8 = (uint *****)ppppppuVar23;
                        if (*(uint *)(lVar15 + 0x1a4) < iVar12 + 1U) {
                          FUN_1447568fc(lVar15 + 0x198,iVar12);
                        }
                        *(uint ********)(*(longlong *)(lVar15 + 0x198) + (longlong)iVar12 * 8) =
                             pppppppuVar36;
                        *(uint *)((longlong)pppppppuVar36 + 0x1c) = *(int *)(lVar15 + 0x1a0) - 1;
                      }
                      else {
                        pppppppuVar36 = (uint *******)0x0;
                        local_1d8 = (uint *****)0x0;
                      }
                      lVar15 = puVar18[9];
                      uVar3 = *(undefined1 *)((longlong)local_278 + 0x94);
                      puVar21 = (undefined8 *)
                                (*(longlong *)(lVar15 + 0x70) + 7U & 0xfffffffffffffff8);
                      puVar18 = puVar21 + 9;
                      if (*(undefined8 **)(lVar15 + 0x78) < puVar18) {
                        FUN_140023dd8((longlong *)(lVar15 + 0x70),0x50);
                        puVar21 = (undefined8 *)
                                  (*(longlong *)(lVar15 + 0x70) + 7U & 0xfffffffffffffff8);
                        puVar18 = puVar21 + 9;
                      }
                      *(undefined8 **)(lVar15 + 0x70) = puVar18;
                      puVar21[1] = local_278[1];
                      puVar21[2] = 0;
                      *(undefined1 *)(puVar21 + 3) = 0;
                      *(undefined8 *)((longlong)puVar21 + 0x1c) = 0xffffffffffffffff;
                      *(undefined1 *)(puVar21 + 5) = 0;
                      *puVar21 = &PTR_FUN_14a1fb948;
                      *(undefined1 *)(puVar21 + 6) = uVar3;
                      *(undefined1 *)(puVar21 + 7) = 0;
                      *(undefined4 *)((longlong)puVar21 + 0x31) = 0;
                      *(undefined2 *)((longlong)puVar21 + 0x35) = 0;
                      puVar21[8] = local_278;
                      iVar12 = *(int *)(lVar15 + 0x1a0);
                      *(uint *)(lVar15 + 0x1a0) = iVar12 + 1U;
                      if (*(uint *)(lVar15 + 0x1a4) < iVar12 + 1U) {
                        FUN_1447568fc(lVar15 + 0x198,iVar12);
                      }
                      *(undefined8 **)(*(longlong *)(lVar15 + 0x198) + (longlong)iVar12 * 8) =
                           puVar21;
                      *(int *)((longlong)puVar21 + 0x1c) = *(int *)(lVar15 + 0x1a0) + -1;
                      lVar15 = local_2b0[9];
                      uVar3 = *(undefined1 *)((longlong)ppppuVar39 + 0x94);
                      pppppuVar34 = (uint *****)
                                    (*(longlong *)(lVar15 + 0x70) + 7U & 0xfffffffffffffff8);
                      pppppuVar25 = pppppuVar34 + 9;
                      if (*(uint ******)(lVar15 + 0x78) < pppppuVar25) {
                        FUN_140023dd8((longlong *)(lVar15 + 0x70),0x50);
                        pppppuVar34 = (uint *****)
                                      (*(longlong *)(lVar15 + 0x70) + 7U & 0xfffffffffffffff8);
                        pppppuVar25 = pppppuVar34 + 9;
                      }
                      *(uint ******)(lVar15 + 0x70) = pppppuVar25;
                      pppppuVar34[1] = (uint ****)ppppuVar39[1];
                      pppppuVar34[2] = (uint ****)0x0;
                      *(undefined1 *)(pppppuVar34 + 3) = 0;
                      *(undefined8 *)((longlong)pppppuVar34 + 0x1c) = 0xffffffffffffffff;
                      *(undefined1 *)(pppppuVar34 + 5) = 0;
                      *pppppuVar34 = (uint ****)&PTR_FUN_14a1fb948;
                      *(undefined1 *)(pppppuVar34 + 6) = uVar3;
                      *(undefined1 *)(pppppuVar34 + 7) = 0;
                      *(undefined4 *)((longlong)pppppuVar34 + 0x31) = 0;
                      *(undefined2 *)((longlong)pppppuVar34 + 0x35) = 0;
                      pppppuVar34[8] = ppppuVar39;
                      iVar12 = *(int *)(lVar15 + 0x1a0);
                      *(uint *)(lVar15 + 0x1a0) = iVar12 + 1U;
                      if (*(uint *)(lVar15 + 0x1a4) < iVar12 + 1U) {
                        FUN_1447568fc(lVar15 + 0x198,iVar12);
                      }
                      pppppppuVar24 = (uint *******)local_270;
                      pppppppuVar31 = (uint *******)local_288;
                      puVar18 = local_2b0;
                      *(uint ******)(*(longlong *)(lVar15 + 0x198) + (longlong)iVar12 * 8) =
                           pppppuVar34;
                      *(int *)((longlong)pppppuVar34 + 0x1c) = *(int *)(lVar15 + 0x1a0) + -1;
                      local_2f0 = *(uint *******)local_2b0[0xe];
                      local_2f8 = (uint ******)CONCAT44(local_2f8._4_4_,local_1fc);
                      local_300 = (uint ******)local_1d0;
                      local_308 = local_270;
                      local_2e8 = puVar21;
                      local_2e0 = (uint ****)pppppuVar34;
                      local_2d8 = (uint ******)pppppppuVar36;
                      FUN_142f7cbc0(local_2c0,local_2b0[9],&local_1c8,local_288);
                      uVar29 = local_27c;
                      if (*(byte *)(pppppppuVar31 + 0x2341) == 1) {
                        *(uint ******)
                         (*(longlong *)puVar18[0xf] +
                         ((longlong)local_298 - (longlong)*(int *)*puVar18) * 8) = local_1d8;
                      }
                      if ((char)local_210 != '\0') {
                        iVar12 = 1;
                        lVar15 = 0;
LAB_142ceed0b:
                        if ((&local_168)[lVar15] != (uint ******)0x0) goto code_r0x000142ceed16;
                        (&local_168)[lVar15] = (uint ******)pppppppuVar24;
                        *(undefined4 *)(&local_160 + lVar15) = local_1d0._4_4_;
                        (&ppppppuStack_158)[lVar15] = (uint ******)local_278;
                        (&local_150)[lVar15] = ppppuVar39;
                        *(int *)((longlong)local_a0 + lVar15) = (int)local_298;
                        if (*(int *)puVar18[0x10] == iVar12) {
                          lVar15 = -(ulonglong)(CONCAT44(iStack_144,local_148) == 0);
                          uVar47 = (undefined4)lVar15;
                          auVar44._4_4_ = uVar47;
                          auVar44._0_4_ = -(uint)((uint *******)local_168 == (uint *******)0x0);
                          auVar44._8_4_ = uVar47;
                          auVar44._12_4_ = (int)((ulonglong)lVar15 >> 0x20);
                          auVar44 = ~auVar44 & auVar48;
                          iVar12 = (int)-(ulonglong)(local_108 == 0);
                          auVar45._0_4_ = (auVar44._0_4_ - (uint)(local_128 == 0)) + 1;
                          auVar45._4_4_ = iVar12 + auVar44._4_4_ + 1;
                          auVar45._8_4_ = iVar12 + auVar44._8_4_ + 1;
                          auVar45._12_4_ =
                               (int)(-(ulonglong)(local_108 == 0) >> 0x20) + auVar44._12_4_ + 1;
                          auVar44 = phaddd(auVar45,auVar45);
                          uVar11 = auVar44._0_4_;
                          lVar15 = 0;
                          do {
                            *(undefined8 *)((longlong)&local_e8 + lVar15) = 0;
                            lVar15 = lVar15 + 0x10;
                          } while (lVar15 != 0x40);
                          local_2f0 = (uint ******)&local_e8;
                          local_2f8 = (uint ******)CONCAT44(local_2f8._4_4_,uVar11);
                          local_300 = (uint ******)&local_168;
                          local_308 = &local_1c8;
                          (**(code **)(*(longlong *)*local_1f8 + 0x18))
                                    ((longlong *)*local_1f8,local_1f0,pppppppuVar31,
                                     pppppppuVar31 + 0x24b8);
                          uVar28 = (ulonglong)local_29c;
                          cVar7 = (char)local_2a8;
                          pppppppuVar36 = (uint *******)local_2c0;
                          uVar30 = local_2b4;
                          if (uVar11 != 0) {
                            lVar15 = 0;
                            do {
                              *(undefined8 *)
                               (*local_1e0 +
                               ((longlong)*(int *)((longlong)local_a0 + lVar15) -
                               (longlong)*local_1e8) * 8) =
                                   *(undefined8 *)((longlong)&local_e8 + lVar15 * 4);
                              (&local_168)[lVar15] = (uint ******)0x0;
                              lVar15 = lVar15 + 4;
                            } while ((ulonglong)uVar11 << 2 != lVar15);
                          }
                          break;
                        }
                        goto LAB_142ceeda1;
                      }
                      *(uint ******)
                       (*(longlong *)puVar18[0xc] +
                       ((longlong)local_298 - (longlong)*(int *)*puVar18) * 8) = local_278;
LAB_142ceeda1:
                      iVar12 = (int)local_218 + 1;
                      local_218 = CONCAT44(local_218._4_4_,iVar12);
                      uVar28 = (ulonglong)local_29c;
                      uVar13 = (ulonglong)local_2b4;
                      uVar27 = (ulonglong)local_2a8 & 0xff;
                      cVar7 = (char)local_2a8;
                      pppppuVar25 = (uint *****)local_298;
                      pppppppuVar36 = (uint *******)local_2c0;
                      uVar30 = local_2b4;
                      if (iVar12 == *(int *)puVar18[0x11]) break;
                    }
                    else {
                      ppppppuVar23 = (uint ******)(local_2c0[0x1b] + 1);
                      if ((uint ******)local_2c0[0x1b] == (uint ******)0x0) {
                        ppppppuVar23 = (uint ******)&DAT_14c760db4;
                      }
                      if (((int)(&DAT_14ca814b8)
                                [(ulonglong)
                                 *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)ppppppuVar23 * 2) *
                                 0xf] < 4) ||
                         (((&DAT_14ca814cd)
                           [(ulonglong)
                            *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)ppppppuVar23 * 2) * 0x3c]
                          & 3) == 0)) goto LAB_142cee3aa;
                      bVar6 = *(byte *)((longlong)ppppppuVar17 + 0x1d4);
                      cVar7 = *(char *)((longlong)ppppppuVar17 + 0x1d5);
                      pppppppuVar24 =
                           (uint *******)CONCAT71((int7)((ulonglong)pppppppuVar24 >> 8),cVar7);
                      local_270 = (uint ******)pppppppuVar36;
                      cVar9 = FUN_1472390ef(local_258);
                      cVar10 = '\x01';
                      if (cVar9 == '\0') {
                        cVar10 = FUN_1472390cb(local_258);
                      }
                      pppppppuVar36 = (uint *******)local_270;
                      if (cVar10 != '\x01' || (bVar6 & 2) == 0) goto LAB_142cee3aa;
                      bVar41 = cVar7 == '\x02';
                      if (cVar7 == '\0') {
                        bVar41 = DAT_14ca04a20 == 1;
                      }
                      puVar18 = local_2b0;
                      pppppppuVar31 = (uint *******)local_288;
                      uVar11 = local_29c;
                      uVar30 = local_2b4;
                      puVar21 = local_2a8;
                      if (!bVar41) {
                        pppppuVar25 = (uint *****)*local_2c0[0x14];
                        if (*(char *)(pppppuVar25 + 0x613) != '\x01') goto LAB_142cee3aa;
                        if ((*(char *)(pppppuVar25 + 0x47d) != '\x01') ||
                           (*(char *)((longlong)pppppuVar25 + 0x23ea) != '\0')) goto LAB_142ceed51;
                        if (bVar38 != 1) goto LAB_142cee3b2;
                        goto LAB_142cee5c1;
                      }
LAB_142ceed51:
                      uVar27 = (ulonglong)puVar21 & 0xff;
                      uVar13 = (ulonglong)uVar30;
                      uVar28 = (ulonglong)uVar11;
                      pppppuVar25 = (uint *****)local_298;
                      pppppppuVar36 = (uint *******)local_2c0;
                    }
                  }
LAB_142ceedd4:
                  cVar7 = (char)uVar27;
                  uVar30 = (uint)uVar13;
                  pppppuVar25 = (uint *****)((longlong)pppppuVar25 + 1);
                } while ((longlong)pppppuVar25 < (longlong)*(int *)puVar18[1]);
              }
              if ((uint *******)local_168 != (uint *******)0x0) {
                lVar15 = -(ulonglong)(CONCAT44(iStack_144,local_148) == 0);
                uVar47 = (undefined4)lVar15;
                auVar43._4_4_ = uVar47;
                auVar43._0_4_ = -(uint)((uint *******)local_168 == (uint *******)0x0);
                auVar43._8_4_ = uVar47;
                auVar43._12_4_ = (int)((ulonglong)lVar15 >> 0x20);
                auVar44 = ~auVar43 & auVar48;
                iVar12 = (int)-(ulonglong)(local_108 == 0);
                auVar46._0_4_ = (auVar44._0_4_ - (uint)(local_128 == 0)) + 1;
                auVar46._4_4_ = iVar12 + auVar44._4_4_ + 1;
                auVar46._8_4_ = iVar12 + auVar44._8_4_ + 1;
                auVar46._12_4_ = (int)(-(ulonglong)(local_108 == 0) >> 0x20) + auVar44._12_4_ + 1;
                auVar44 = phaddd(auVar46,auVar46);
                uVar11 = auVar44._0_4_;
                lVar15 = 0;
                do {
                  *(undefined8 *)((longlong)&local_e8 + lVar15) = 0;
                  lVar15 = lVar15 + 0x10;
                } while (lVar15 != 0x40);
                local_2f0 = (uint ******)&local_e8;
                local_2f8 = (uint ******)CONCAT44(local_2f8._4_4_,uVar11);
                local_300 = (uint ******)&local_168;
                local_308 = &local_1c8;
                (**(code **)(*(longlong *)*local_1f8 + 0x18))
                          ((longlong *)*local_1f8,local_1f0,pppppppuVar31,pppppppuVar31 + 0x24b8);
                pppppppuVar36 = (uint *******)local_2c0;
                if (uVar11 != 0) {
                  lVar15 = 0;
                  do {
                    *(undefined8 *)
                     (*local_1e0 +
                     ((longlong)*(int *)((longlong)local_a0 + lVar15) - (longlong)*local_1e8) * 8) =
                         *(undefined8 *)((longlong)&local_e8 + lVar15 * 4);
                    (&local_168)[lVar15] = (uint ******)0x0;
                    lVar15 = lVar15 + 4;
                  } while ((ulonglong)uVar11 << 2 != lVar15);
                }
              }
            }
            ppppppuVar17 = local_248;
            if (0 < (int)((longlong *)puVar18[0xc])[1]) {
              lVar19 = (longlong)(int)local_238 - (longlong)*(int *)*puVar18;
              lVar15 = *(longlong *)puVar18[0xc];
              pppppppuVar24 = *(uint ********)(lVar15 + lVar19 * 8);
              if (pppppppuVar24 != (uint *******)0x0) {
                *(undefined8 *)(lVar15 + lVar19 * 8) = 0;
                if (((char)local_25c != '\0') &&
                   ((uint)lVar19 < *(uint *)((longlong *)puVar18[0xf] + 1))) {
                  lVar15 = *(longlong *)puVar18[0xf];
                  pppppppuVar37 = *(uint ********)(lVar15 + lVar19 * 8);
                  *(undefined8 *)(lVar15 + lVar19 * 8) = 0;
                }
                local_2a8 = (undefined8 *)CONCAT71((int7)((ulonglong)lVar19 >> 8),1);
                if ((char)uVar30 != '\0') {
                  local_168 = pppppppuVar36[0x9b];
                  local_160 = (uint *****)CONCAT44(local_160._4_4_,*(uint *)(pppppppuVar36 + 0x9c));
                  local_308 = (uint ******)pppppppuVar24;
                  FUN_14717f2c4(puVar18[9],local_220,local_290,&local_168);
                  pppppppuVar36 = (uint *******)local_2c0;
                }
                goto LAB_142ceff53;
              }
            }
            if (cVar7 == '\0') {
              local_168 = local_228;
              local_160 = (uint *****)puVar18[9];
              local_150 = (uint ******)local_208;
              ppppppuStack_158 = (uint ******)pppppppuVar36;
              if ((uint *******)local_248 != (uint *******)0x0) {
                FUN_142cf48d2(&local_168,local_248);
              }
              if (pppppppuVar37 != (uint *******)0x0) {
                FUN_142cf48d2(&local_168,pppppppuVar37);
              }
              pppppppuVar36 = (uint *******)local_2c0;
              local_300 = ppppppuVar17;
              local_308 = local_290;
              local_2f8 = (uint ******)pppppppuVar37;
              uVar20 = FUN_143058bbe(local_2c0,puVar18[9],puVar18[8],puVar18[0x12]);
              local_2a8 = (undefined8 *)CONCAT71((int7)((ulonglong)uVar20 >> 8),1);
              pppppppuVar24 = (uint *******)local_248;
            }
            else {
              local_29c = (uint)uVar28;
              local_2b4 = uVar30;
              FUN_1448e94e7(&local_1c8,puVar18[9],*(undefined8 *)(puVar18[8] + 0x198));
              local_160 = (uint *****)_DAT_14ca83a30;
              ppppppuStack_158 = (uint ******)_DAT_14ca83a38;
              iVar12 = (int)*(undefined8 *)(puVar18[8] + 0x20);
              iStack_144 = DAT_14ca84e40;
              if (iVar12 < DAT_14ca84e40) {
                iStack_144 = iVar12;
              }
              if (iStack_144 < 2) {
                iStack_144 = 1;
              }
              iVar12 = (int)((ulonglong)*(undefined8 *)(puVar18[8] + 0x20) >> 0x20);
              local_140 = DAT_14ca84e40;
              if (iVar12 < DAT_14ca84e40) {
                local_140 = iVar12;
              }
              lVar15 = puVar18[9];
              uStack_136 = 0;
              local_168 = (uint ******)0x20009;
              uStack_135 = 10;
              uStack_134 = 0;
              local_13c = 0x10001;
              uStack_138 = 0x101;
              local_148 = 0;
              local_133 = 0xff;
              local_150 = (uint ******)CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40)
              ;
              if (local_140 < 2) {
                local_140 = 1;
              }
              pppppppuVar31 = (uint *******)(*(longlong *)(lVar15 + 0x70) + 7U & 0xfffffffffffffff8)
              ;
              pppppppuVar36 = pppppppuVar31 + 0x24;
              if (*(uint ********)(lVar15 + 0x78) < pppppppuVar36) {
                FUN_140023dd8((longlong *)(lVar15 + 0x70),0x128);
                pppppppuVar31 =
                     (uint *******)(*(longlong *)(lVar15 + 0x70) + 7U & 0xfffffffffffffff8);
                pppppppuVar36 = pppppppuVar31 + 0x24;
              }
              *(uint ********)(lVar15 + 0x70) = pppppppuVar36;
              FUN_1456bbb8c(pppppppuVar31,L"RayTracingOcclusion",&local_168,0);
              iVar12 = *(int *)(lVar15 + 0x180);
              *(uint *)(lVar15 + 0x180) = iVar12 + 1U;
              if (*(uint *)(lVar15 + 0x184) < iVar12 + 1U) {
                FUN_14472c0f6(lVar15 + 0x178,iVar12);
              }
              *(uint ********)(*(longlong *)(lVar15 + 0x178) + (longlong)iVar12 * 8) = pppppppuVar31
              ;
              *(uint *)((longlong)pppppppuVar31 + 0x9c) = *(int *)(lVar15 + 0x180) - 1;
              local_160 = (uint *****)_DAT_14ca83a30;
              ppppppuStack_158 = (uint ******)_DAT_14ca83a38;
              iVar12 = (int)*(undefined8 *)(puVar18[8] + 0x20);
              iStack_144 = DAT_14ca84e40;
              if (iVar12 < DAT_14ca84e40) {
                iStack_144 = iVar12;
              }
              if (iStack_144 < 2) {
                iStack_144 = 1;
              }
              iVar12 = (int)((ulonglong)*(undefined8 *)(puVar18[8] + 0x20) >> 0x20);
              local_140 = DAT_14ca84e40;
              if (iVar12 < DAT_14ca84e40) {
                local_140 = iVar12;
              }
              lVar15 = puVar18[9];
              uStack_136 = 0;
              local_168 = (uint ******)0x20009;
              uStack_135 = 0x15;
              uStack_134 = 0;
              local_13c = 0x10001;
              uStack_138 = 0x101;
              local_148 = 0;
              local_133 = 0xff;
              local_150 = (uint ******)CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40)
              ;
              if (local_140 < 2) {
                local_140 = 1;
              }
              ppppppuVar23 = (uint ******)(*(longlong *)(lVar15 + 0x70) + 7U & 0xfffffffffffffff8);
              ppppppuVar17 = ppppppuVar23 + 0x24;
              if (*(uint *******)(lVar15 + 0x78) < ppppppuVar17) {
                FUN_140023dd8((longlong *)(lVar15 + 0x70),0x128);
                ppppppuVar23 = (uint ******)(*(longlong *)(lVar15 + 0x70) + 7U & 0xfffffffffffffff8)
                ;
                ppppppuVar17 = ppppppuVar23 + 0x24;
              }
              *(uint *******)(lVar15 + 0x70) = ppppppuVar17;
              FUN_1456bbb8c(ppppppuVar23,L"RayTracingOcclusionDistance",&local_168,0);
              iVar12 = *(int *)(lVar15 + 0x180);
              *(uint *)(lVar15 + 0x180) = iVar12 + 1U;
              if (*(uint *)(lVar15 + 0x184) < iVar12 + 1U) {
                FUN_14472c0f6(lVar15 + 0x178,iVar12);
              }
              *(uint *******)(*(longlong *)(lVar15 + 0x178) + (longlong)iVar12 * 8) = ppppppuVar23;
              *(int *)((longlong)ppppppuVar23 + 0x9c) = *(int *)(lVar15 + 0x180) + -1;
              lVar15 = puVar18[9];
              bVar6 = *(byte *)((longlong)pppppppuVar31 + 0x94);
              puVar33 = (undefined8 *)(*(longlong *)(lVar15 + 0x70) + 7U & 0xfffffffffffffff8);
              puVar21 = puVar33 + 9;
              local_278 = (uint *****)ppppppuVar23;
              if (*(undefined8 **)(lVar15 + 0x78) < puVar21) {
                FUN_140023dd8((longlong *)(lVar15 + 0x70),0x50);
                puVar33 = (undefined8 *)(*(longlong *)(lVar15 + 0x70) + 7U & 0xfffffffffffffff8);
                puVar21 = puVar33 + 9;
              }
              *(undefined8 **)(lVar15 + 0x70) = puVar21;
              puVar33[1] = pppppppuVar31[1];
              puVar33[2] = 0;
              *(undefined1 *)(puVar33 + 3) = 0;
              *(undefined8 *)((longlong)puVar33 + 0x1c) = 0xffffffffffffffff;
              *(undefined1 *)(puVar33 + 5) = 0;
              *puVar33 = &PTR_FUN_14a1fb948;
              *(byte *)(puVar33 + 6) = bVar6;
              *(undefined1 *)(puVar33 + 7) = 0;
              *(undefined4 *)((longlong)puVar33 + 0x31) = 0;
              *(undefined2 *)((longlong)puVar33 + 0x35) = 0;
              puVar33[8] = pppppppuVar31;
              iVar12 = *(int *)(lVar15 + 0x1a0);
              *(uint *)(lVar15 + 0x1a0) = iVar12 + 1U;
              local_2a8 = puVar33;
              if (*(uint *)(lVar15 + 0x1a4) < iVar12 + 1U) {
                FUN_1447568fc(lVar15 + 0x198,iVar12);
              }
              *(undefined8 **)(*(longlong *)(lVar15 + 0x198) + (longlong)iVar12 * 8) = local_2a8;
              *(int *)((longlong)local_2a8 + 0x1c) = *(int *)(lVar15 + 0x1a0) + -1;
              lVar15 = puVar18[9];
              uVar3 = *(undefined1 *)((longlong)local_278 + 0x94);
              pppppuVar34 = (uint *****)(*(longlong *)(lVar15 + 0x70) + 7U & 0xfffffffffffffff8);
              pppppuVar25 = pppppuVar34 + 9;
              if (*(uint ******)(lVar15 + 0x78) < pppppuVar25) {
                FUN_140023dd8((longlong *)(lVar15 + 0x70),0x50);
                pppppuVar34 = (uint *****)(*(longlong *)(lVar15 + 0x70) + 7U & 0xfffffffffffffff8);
                pppppuVar25 = pppppuVar34 + 9;
              }
              *(uint ******)(lVar15 + 0x70) = pppppuVar25;
              pppppuVar34[1] = local_278[1];
              pppppuVar34[2] = (uint ****)0x0;
              *(undefined1 *)(pppppuVar34 + 3) = 0;
              *(undefined8 *)((longlong)pppppuVar34 + 0x1c) = 0xffffffffffffffff;
              *(undefined1 *)(pppppuVar34 + 5) = 0;
              *pppppuVar34 = (uint ****)&PTR_FUN_14a1fb948;
              *(undefined1 *)(pppppuVar34 + 6) = uVar3;
              *(undefined1 *)(pppppuVar34 + 7) = 0;
              *(undefined4 *)((longlong)pppppuVar34 + 0x31) = 0;
              *(undefined2 *)((longlong)pppppuVar34 + 0x35) = 0;
              pppppuVar34[8] = (uint ****)local_278;
              iVar12 = *(int *)(lVar15 + 0x1a0);
              *(uint *)(lVar15 + 0x1a0) = iVar12 + 1U;
              local_298 = (uint ****)pppppuVar34;
              if (*(uint *)(lVar15 + 0x1a4) < iVar12 + 1U) {
                FUN_1447568fc(lVar15 + 0x198,iVar12);
              }
              *(uint *****)(*(longlong *)(lVar15 + 0x198) + (longlong)iVar12 * 8) = local_298;
              *(int *)((longlong)local_298 + 0x1c) = *(int *)(lVar15 + 0x1a0) + -1;
              if ((char)local_25c == '\0') {
                local_270 = (uint ******)0x0;
                local_288 = (uint ******)0x0;
              }
              else {
                local_160 = (uint *****)_DAT_14ca83a30;
                ppppppuStack_158 = (uint ******)_DAT_14ca83a38;
                iVar12 = (int)*(undefined8 *)(puVar18[8] + 0x20);
                iStack_144 = DAT_14ca84e40;
                if (iVar12 < DAT_14ca84e40) {
                  iStack_144 = iVar12;
                }
                if (iStack_144 < 2) {
                  iStack_144 = 1;
                }
                iVar12 = (int)((ulonglong)*(undefined8 *)(puVar18[8] + 0x20) >> 0x20);
                local_140 = DAT_14ca84e40;
                if (iVar12 < DAT_14ca84e40) {
                  local_140 = iVar12;
                }
                lVar15 = puVar18[9];
                uStack_136 = 0;
                local_168 = (uint ******)0x20009;
                uStack_135 = 10;
                uStack_134 = 0;
                local_13c = 0x10001;
                uStack_138 = 0x101;
                local_148 = 0;
                local_133 = 0xff;
                local_150 = (uint ******)
                            CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
                if (local_140 < 2) {
                  local_140 = 1;
                }
                pppppppuVar24 =
                     (uint *******)(*(longlong *)(lVar15 + 0x70) + 7U & 0xfffffffffffffff8);
                pppppppuVar36 = pppppppuVar24 + 0x24;
                if (*(uint ********)(lVar15 + 0x78) < pppppppuVar36) {
                  FUN_140023dd8((longlong *)(lVar15 + 0x70),0x128);
                  pppppppuVar24 =
                       (uint *******)(*(longlong *)(lVar15 + 0x70) + 7U & 0xfffffffffffffff8);
                  pppppppuVar36 = pppppppuVar24 + 0x24;
                }
                *(uint ********)(lVar15 + 0x70) = pppppppuVar36;
                FUN_1456bbb8c(pppppppuVar24,L"SubPixelRayTracingOcclusion",&local_168,0);
                iVar12 = *(int *)(lVar15 + 0x180);
                *(uint *)(lVar15 + 0x180) = iVar12 + 1U;
                if (*(uint *)(lVar15 + 0x184) < iVar12 + 1U) {
                  FUN_14472c0f6(lVar15 + 0x178,iVar12);
                }
                *(uint ********)(*(longlong *)(lVar15 + 0x178) + (longlong)iVar12 * 8) =
                     pppppppuVar24;
                *(uint *)((longlong)pppppppuVar24 + 0x9c) = *(int *)(lVar15 + 0x180) - 1;
                lVar15 = puVar18[9];
                bVar6 = *(byte *)((longlong)pppppppuVar24 + 0x94);
                pppppppuVar26 =
                     (uint *******)(*(longlong *)(lVar15 + 0x70) + 7U & 0xfffffffffffffff8);
                pppppppuVar36 = pppppppuVar26 + 9;
                if (*(uint ********)(lVar15 + 0x78) < pppppppuVar36) {
                  FUN_140023dd8((longlong *)(lVar15 + 0x70),0x50);
                  pppppppuVar26 =
                       (uint *******)(*(longlong *)(lVar15 + 0x70) + 7U & 0xfffffffffffffff8);
                  pppppppuVar36 = pppppppuVar26 + 9;
                }
                *(uint ********)(lVar15 + 0x70) = pppppppuVar36;
                pppppppuVar26[1] = pppppppuVar24[1];
                pppppppuVar26[2] = (uint ******)0x0;
                *(byte *)(pppppppuVar26 + 3) = 0;
                ((uint *)((longlong)pppppppuVar26 + 0x1c))[0] = 0xffffffff;
                ((uint *)((longlong)pppppppuVar26 + 0x1c))[1] = 0xffffffff;
                *(byte *)(pppppppuVar26 + 5) = 0;
                *pppppppuVar26 = (uint ******)&PTR_FUN_14a1fb948;
                *(byte *)(pppppppuVar26 + 6) = bVar6;
                *(byte *)(pppppppuVar26 + 7) = 0;
                pbVar1 = (byte *)((longlong)pppppppuVar26 + 0x31);
                pbVar1[0] = 0;
                pbVar1[1] = 0;
                pbVar1[2] = 0;
                pbVar1[3] = 0;
                ((byte *)((longlong)pppppppuVar26 + 0x35))[0] = 0;
                ((byte *)((longlong)pppppppuVar26 + 0x35))[1] = 0;
                pppppppuVar26[8] = (uint ******)pppppppuVar24;
                iVar12 = *(int *)(lVar15 + 0x1a0);
                *(uint *)(lVar15 + 0x1a0) = iVar12 + 1U;
                local_288 = (uint ******)pppppppuVar24;
                if (*(uint *)(lVar15 + 0x1a4) < iVar12 + 1U) {
                  FUN_1447568fc(lVar15 + 0x198,iVar12);
                }
                *(uint ********)(*(longlong *)(lVar15 + 0x198) + (longlong)iVar12 * 8) =
                     pppppppuVar26;
                *(uint *)((longlong)pppppppuVar26 + 0x1c) = *(int *)(lVar15 + 0x1a0) - 1;
                local_270 = (uint ******)pppppppuVar26;
              }
              local_160 = (uint *****)_DAT_14ca83a30;
              ppppppuStack_158 = (uint ******)_DAT_14ca83a38;
              iVar12 = (int)*(undefined8 *)(puVar18[8] + 0x20);
              iStack_144 = DAT_14ca84e40;
              if (iVar12 < DAT_14ca84e40) {
                iStack_144 = iVar12;
              }
              if (iStack_144 < 2) {
                iStack_144 = 1;
              }
              iVar12 = (int)((ulonglong)*(undefined8 *)(puVar18[8] + 0x20) >> 0x20);
              local_140 = DAT_14ca84e40;
              if (iVar12 < DAT_14ca84e40) {
                local_140 = iVar12;
              }
              lVar15 = puVar18[9];
              uStack_136 = 0;
              local_168 = (uint ******)0x20009;
              uStack_135 = 10;
              uStack_134 = 0;
              local_13c = 0x10001;
              uStack_138 = 0x101;
              local_148 = 0;
              local_133 = 0xff;
              local_150 = (uint ******)CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40)
              ;
              if (local_140 < 2) {
                local_140 = 1;
              }
              pppppppuVar24 = (uint *******)(*(longlong *)(lVar15 + 0x70) + 7U & 0xfffffffffffffff8)
              ;
              pppppppuVar36 = pppppppuVar24 + 0x24;
              if (*(uint ********)(lVar15 + 0x78) < pppppppuVar36) {
                FUN_140023dd8((longlong *)(lVar15 + 0x70),0x128);
                pppppppuVar24 =
                     (uint *******)(*(longlong *)(lVar15 + 0x70) + 7U & 0xfffffffffffffff8);
                pppppppuVar36 = pppppppuVar24 + 0x24;
              }
              *(uint ********)(lVar15 + 0x70) = pppppppuVar36;
              local_27c = uVar29;
              FUN_1456bbb8c(pppppppuVar24,L"RayTracingOcclusionTile",&local_168,0);
              iVar12 = *(int *)(lVar15 + 0x180);
              *(uint *)(lVar15 + 0x180) = iVar12 + 1U;
              if (*(uint *)(lVar15 + 0x184) < iVar12 + 1U) {
                FUN_14472c0f6(lVar15 + 0x178,iVar12);
              }
              *(uint ********)(*(longlong *)(lVar15 + 0x178) + (longlong)iVar12 * 8) = pppppppuVar24
              ;
              *(uint *)((longlong)pppppppuVar24 + 0x9c) = *(int *)(lVar15 + 0x180) - 1;
              uVar28 = (ulonglong)(int)*(uint *)(local_2c0 + 0x7e);
              if (uVar28 == 0) {
                puVar21 = (undefined8 *)0x0;
                pppppppuVar24 = (uint *******)local_248;
              }
              else {
                pppppppuVar36 = (uint *******)local_2c0[0x7d];
                local_248 = (uint ******)(pppppppuVar36 + uVar28 * 0x2782);
                local_218 = uVar28;
                local_210 = (uint ******)pppppppuVar24;
                do {
                  puVar5 = *(ulonglong **)(puVar18[9] + 0x18);
                  uVar11 = *(uint *)((longlong)puVar5 + 0x17c);
                  if (uVar11 != *(uint *)(pppppppuVar36 + 0x3bc)) {
                    *(uint *)((longlong)puVar5 + 0x17c) = *(uint *)(pppppppuVar36 + 0x3bc);
                    puVar33 = (undefined8 *)(*puVar5 + 7 & 0xfffffffffffffff8);
                    puVar21 = puVar33 + 3;
                    if ((undefined8 *)puVar5[1] < puVar21) {
                      FUN_140023dd8(puVar5,0x20);
                      puVar33 = (undefined8 *)(*puVar5 + 7 & 0xfffffffffffffff8);
                      puVar21 = puVar33 + 3;
                    }
                    *puVar5 = (ulonglong)puVar21;
                    *(int *)(puVar5 + 0xc) = (int)puVar5[0xc] + 1;
                    *(undefined8 **)puVar5[6] = puVar33;
                    puVar5[6] = (ulonglong)(puVar33 + 1);
                    uVar47 = *(undefined4 *)((longlong)puVar5 + 0x17c);
                    puVar33[1] = 0;
                    *puVar33 = &PTR_FUN_14a1fb2c0;
                    *(undefined4 *)(puVar33 + 2) = uVar47;
                  }
                  local_1d0._4_4_ = DAT_14c760478;
                  if (DAT_14c760478 < 0) {
                    local_1d0._4_4_ = *(undefined4 *)(local_208 + 0x44);
                  }
                  iVar12 = 0;
                  if (*(int *)puVar18[0xd] != 0) {
                    ppppppuVar17 = (uint ******)local_290[5];
                    bVar6 = *(byte *)(ppppppuVar17 + 0x3d);
                    if (bVar6 == 0) {
                      fVar42 = (float)(*(code *)(*ppppppuVar17)[10])();
LAB_142cefc3f:
                      if (fVar42 <= 0.0) goto LAB_142cefc72;
                    }
                    else {
                      if (bVar6 < 3) {
                        fVar42 = (float)(*(code *)(*ppppppuVar17)[5])();
                        goto LAB_142cefc3f;
                      }
                      iVar12 = 0;
                      if (bVar6 != 3) goto LAB_142cefc72;
                    }
                    iVar12 = (**(code **)(**(longlong **)puVar18[10] + 0x10))
                                       (*(longlong **)puVar18[10],pppppppuVar36,local_290,
                                        local_1d0 + 4);
                  }
LAB_142cefc72:
                  local_2f0 = *(uint *******)puVar18[0xe];
                  local_2d8 = local_270;
                  local_2e0 = local_298;
                  local_2e8 = local_2a8;
                  local_2f8 = (uint ******)CONCAT44(local_2f8._4_4_,iVar12);
                  local_300 = (uint ******)(local_1d0 + 4);
                  local_308 = local_290;
                  puVar21 = (undefined8 *)
                            FUN_142f7cbc0(local_2c0,puVar18[9],&local_1c8,pppppppuVar36);
                  pppppppuVar24 = pppppppuVar31;
                  if (iVar12 != 0) {
                    lVar15 = 0x10;
                    do {
                      *(undefined8 *)((longlong)&uStack_178 + lVar15) = 0;
                      *(undefined4 *)((longlong)auStack_170 + lVar15) = 1;
                      *(undefined1 (*) [16])((longlong)&local_168 + lVar15) = (undefined1  [16])0x0;
                      lVar15 = lVar15 + 0x20;
                    } while (lVar15 != 0x90);
                    lVar15 = 0;
                    do {
                      *(undefined8 *)((longlong)&local_e8 + lVar15) = 0;
                      lVar15 = lVar15 + 0x10;
                    } while (lVar15 != 0x40);
                    local_150 = (uint ******)local_278;
                    local_168 = local_290;
                    local_160 = (uint *****)CONCAT44(local_160._4_4_,local_1d0._4_4_);
                    local_2f0 = (uint ******)&local_e8;
                    local_300 = (uint ******)&local_168;
                    local_308 = &local_1c8;
                    local_2f8 = (uint ******)CONCAT44(local_2f8._4_4_,1);
                    ppppppuStack_158 = (uint ******)pppppppuVar31;
                    puVar21 = (undefined8 *)
                              (**(code **)(**(longlong **)puVar18[10] + 0x18))
                                        (*(longlong **)puVar18[10],puVar18[9],pppppppuVar36,
                                         pppppppuVar36 + 0x24b8);
                    ppppppuVar17 = local_210;
                    pppppppuVar24 = (uint *******)local_e8;
                    if (0 < (int)local_218) {
                      local_308 = pppppppuVar36[0x61f];
                      local_a0[0] = *(uint *)(pppppppuVar36 + 0x612);
                      local_a0[1] = *(uint *)((longlong)pppppppuVar36 + 0x1dd4);
                      local_a0[2] = *(uint *)((longlong)pppppppuVar36 + 0x3094);
                      local_94 = *(byte *)((longlong)pppppppuVar36 + 0x1de6);
                      local_300 = (uint ******)
                                  CONCAT44(*(uint *)((longlong)pppppppuVar36 + 0x3104) -
                                           *(uint *)((longlong)pppppppuVar36 + 0x30fc),
                                           *(uint *)(pppppppuVar36 + 0x620) -
                                           *(uint *)(pppppppuVar36 + 0x61f));
                      local_2f8 = local_308;
                      local_2f0 = local_300;
                      puVar21 = (undefined8 *)FUN_143017f0c(puVar18[9],local_a0,local_e8,local_210);
                      pppppppuVar24 = (uint *******)ppppppuVar17;
                    }
                  }
                  if (*(byte *)(pppppppuVar36 + 0x2341) != 0) {
                    pppppppuVar37 = (uint *******)local_288;
                  }
                  if (*(uint *)((longlong)puVar5 + 0x17c) != uVar11) {
                    *(uint *)((longlong)puVar5 + 0x17c) = uVar11;
                    puVar21 = (undefined8 *)(*puVar5 + 7 & 0xfffffffffffffff8);
                    puVar33 = puVar21 + 3;
                    if ((undefined8 *)puVar5[1] < puVar33) {
                      FUN_140023dd8(puVar5,0x20);
                      puVar21 = (undefined8 *)(*puVar5 + 7 & 0xfffffffffffffff8);
                      puVar33 = puVar21 + 3;
                    }
                    *puVar5 = (ulonglong)puVar33;
                    *(int *)(puVar5 + 0xc) = (int)puVar5[0xc] + 1;
                    *(undefined8 **)puVar5[6] = puVar21;
                    puVar5[6] = (ulonglong)(puVar21 + 1);
                    uVar47 = *(undefined4 *)((longlong)puVar5 + 0x17c);
                    puVar21[1] = 0;
                    *puVar21 = &PTR_FUN_14a1fb2c0;
                    *(undefined4 *)(puVar21 + 2) = uVar47;
                  }
                  pppppppuVar36 = pppppppuVar36 + 0x2782;
                } while (pppppppuVar36 != (uint *******)local_248);
              }
              if ((char)local_2b4 != '\0') {
                local_168 = (uint ******)local_2c0[0x9b];
                local_160 = (uint *****)CONCAT44(local_160._4_4_,*(uint *)(local_2c0 + 0x9c));
                local_308 = (uint ******)((ulonglong)local_308 & 0xffffffffffffff00);
                local_300 = (uint ******)pppppppuVar24;
                puVar21 = (undefined8 *)FUN_14717f20e(puVar18[9],local_220,local_290,&local_168);
              }
              local_2a8 = (undefined8 *)CONCAT71((int7)((ulonglong)puVar21 >> 8),1);
              uVar28 = (ulonglong)local_29c;
              pppppppuVar36 = (uint *******)local_2c0;
              uVar29 = local_27c;
            }
          }
        }
LAB_142ceff53:
        bVar6 = local_2b5;
        local_248 = (uint ******)pppppppuVar24;
        if ((char)uVar28 != '\0') {
          if ((*(byte *)((longlong)pppppppuVar36 + 0xea) & 8) == 0) {
            bVar8 = 0;
          }
          else {
            local_300 = (uint ******)local_290[5][0x38];
            local_2e8 = (undefined8 *)((ulonglong)local_2e8 & 0xffffffffffffff00);
            local_2f0 = (uint ******)((ulonglong)local_2f0 & 0xffffffffffffff00);
            local_2f8 = (uint ******)CONCAT71(local_2f8._1_7_,(char)uVar29);
            local_308 = (uint ******)pppppppuVar24;
            bVar8 = FUN_142cdee44(pppppppuVar36,puVar18[9]);
            pppppppuVar36 = (uint *******)local_2c0;
          }
          local_2a8 = (undefined8 *)
                      CONCAT71((int7)((ulonglong)local_2a8 >> 8),(byte)local_2a8 | bVar8);
          if ((((bVar8 != 0) && (0 < *(int *)(DAT_14c9e94b0 + 4))) &&
              (pppppppuVar37 != (uint *******)0x0)) &&
             ((*(byte *)((longlong)pppppppuVar36 + 0xea) & 8) != 0)) {
            local_300 = (uint ******)local_290[5][0x38];
            local_2f8 = (uint ******)CONCAT71(local_2f8._1_7_,(char)uVar29);
            local_2e8 = (undefined8 *)CONCAT71(local_2e8._1_7_,1);
            local_2f0 = (uint ******)((ulonglong)local_2f0 & 0xffffffffffffff00);
            local_308 = (uint ******)pppppppuVar37;
            FUN_142cdee44(pppppppuVar36,puVar18[9]);
            pppppppuVar36 = (uint *******)local_2c0;
          }
        }
        if ((char)local_2a8 == '\0') {
          pppppppuVar37 = (uint *******)0x0;
        }
        local_288 = (uint ******)pppppppuVar37;
        if ((bVar6 == 0) &&
           (local_298 = (uint ****)(longlong)(int)*(uint *)(pppppppuVar36 + 0x7e),
           0 < (longlong)local_298)) {
          lVar15 = 0;
          pppppuVar25 = (uint *****)0x0;
          do {
            ppppppuVar17 = (uint ******)*local_220;
            uVar11 = 0xffffffff;
            if ((char)local_250 != '\0') {
              if (*(int *)(local_230 + 0xb) == 0) {
                uVar11 = *(uint *)(local_230 + 0xc);
              }
              else {
                FUN_1400d7ed0(local_230,&local_168);
                pppppuVar34 = local_160;
                uVar11 = *(uint *)(local_168 + 0x568);
                pppppppuVar36 = (uint *******)local_2c0;
                if ((uint ******)local_160 != (uint ******)0x0) {
                  LOCK();
                  ppppppuVar23 = (uint ******)(local_160 + 1);
                  *(int *)ppppppuVar23 = *(int *)ppppppuVar23 + -1;
                  UNLOCK();
                  if (*(int *)ppppppuVar23 == 0) {
                    (*(code *)**local_160)(local_160);
                    LOCK();
                    piVar2 = (int *)((longlong)pppppuVar34 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    pppppppuVar36 = (uint *******)local_2c0;
                    if (*piVar2 == 0) {
                      (*(code *)(*pppppuVar34)[2])(pppppuVar34);
                      pppppppuVar36 = (uint *******)local_2c0;
                    }
                  }
                }
              }
            }
            puVar5 = *(ulonglong **)(local_2b0[9] + 0x18);
            iVar12 = *(int *)((longlong)ppppppuVar17 + lVar15 + 0x1de0);
            iVar35 = *(int *)((longlong)puVar5 + 0x17c);
            if (iVar35 != iVar12) {
              *(int *)((longlong)puVar5 + 0x17c) = iVar12;
              puVar21 = (undefined8 *)(*puVar5 + 7 & 0xfffffffffffffff8);
              puVar18 = puVar21 + 3;
              if ((undefined8 *)puVar5[1] < puVar18) {
                FUN_140023dd8(puVar5,0x20);
                puVar21 = (undefined8 *)(*puVar5 + 7 & 0xfffffffffffffff8);
                puVar18 = puVar21 + 3;
                pppppppuVar36 = (uint *******)local_2c0;
              }
              *puVar5 = (ulonglong)puVar18;
              *(int *)(puVar5 + 0xc) = (int)puVar5[0xc] + 1;
              *(undefined8 **)puVar5[6] = puVar21;
              puVar5[6] = (ulonglong)(puVar21 + 1);
              uVar47 = *(undefined4 *)((longlong)puVar5 + 0x17c);
              puVar21[1] = 0;
              *puVar21 = &PTR_FUN_14a1fb2c0;
              *(undefined4 *)(puVar21 + 2) = uVar47;
            }
            local_2d8 = (uint ******)*pppppppuVar36[0xf8];
            if (*(uint *)(pppppppuVar36 + 0xf4) == 0) {
              local_2e0 = (uint ****)0x0;
            }
            else {
              iVar12 = *(uint *)(pppppppuVar36 + 0xf4) - 1;
              if ((int)pppppuVar25 < iVar12) {
                iVar12 = (int)pppppuVar25;
              }
              local_2e0 = (uint ****)pppppppuVar36[0xf3][iVar12];
            }
            local_300 = (uint ******)(uint *******)0x0;
            if (uVar11 == 0xffffffff) {
              local_300 = local_248;
            }
            if ((char)local_2a8 == '\0') {
              local_300 = (uint ******)0x0;
            }
            local_2f8 = *(uint *******)local_2b0[0xe];
            local_2d0 = (uint ****)CONCAT44(local_2d0._4_4_,uVar11);
            local_2e8 = (undefined8 *)
                        CONCAT71(local_2e8._1_7_,*(byte *)((longlong)local_228 + 0x14));
            local_308 = local_290;
            local_2f0 = (uint ******)CONCAT71(local_2f0._1_7_,1);
            FUN_142cec1b4(local_2b0[9],pppppppuVar36[1],(longlong)ppppppuVar17 + lVar15,local_2b0[8]
                         );
            if (*(int *)((longlong)puVar5 + 0x17c) != iVar35) {
              *(int *)((longlong)puVar5 + 0x17c) = iVar35;
              puVar21 = (undefined8 *)(*puVar5 + 7 & 0xfffffffffffffff8);
              puVar18 = puVar21 + 3;
              if ((undefined8 *)puVar5[1] < puVar18) {
                FUN_140023dd8(puVar5,0x20);
                puVar21 = (undefined8 *)(*puVar5 + 7 & 0xfffffffffffffff8);
                puVar18 = puVar21 + 3;
              }
              *puVar5 = (ulonglong)puVar18;
              *(int *)(puVar5 + 0xc) = (int)puVar5[0xc] + 1;
              *(undefined8 **)puVar5[6] = puVar21;
              puVar5[6] = (ulonglong)(puVar21 + 1);
              uVar47 = *(undefined4 *)((longlong)puVar5 + 0x17c);
              puVar21[1] = 0;
              *puVar21 = &PTR_FUN_14a1fb2c0;
              *(undefined4 *)(puVar21 + 2) = uVar47;
            }
            pppppuVar25 = (uint *****)((longlong)pppppuVar25 + 1);
            lVar15 = lVar15 + 0x13c10;
            pppppppuVar36 = (uint *******)local_2c0;
          } while ((uint *****)local_298 != pppppuVar25);
        }
        if (((char)local_25c != '\0') &&
           (uVar11 = *(uint *)(pppppppuVar36 + 0x7e), 0 < (longlong)(int)uVar11)) {
          lVar15 = 0;
          uVar28 = 0;
          do {
            if (*(char *)((longlong)*local_220 + lVar15 + 0x11a08) == '\x01') {
              lVar19 = (longlong)*local_220 + lVar15;
              if ((char)local_268 == '\0') {
                uVar29 = 0xffffffff;
                bVar41 = false;
LAB_142cf02c1:
                pppppppuVar24 = (uint *******)local_288;
                local_168 = (uint ******)0x0;
                if ((char)local_23c != '\0') {
                  local_300 = local_288;
                  local_308 = (uint ******)((ulonglong)local_308 & 0xffffffffffffff00);
                  local_168 = (uint ******)
                              FUN_142c6147b(local_2b0[9],lVar19,uVar28 & 0xffffffff,local_290);
                  pppppppuVar36 = (uint *******)local_2c0;
                  goto LAB_142cf0301;
                }
                pppppppuVar24 = (uint *******)0x0;
LAB_142cf0312:
                local_168 = *(uint *******)local_2b0[0x13];
              }
              else {
                if (*(int *)(local_230 + 0xb) == 0) {
                  uVar29 = *(uint *)(local_230 + 0xc);
                }
                else {
                  FUN_1400d7ed0(local_230,&local_168);
                  pppppuVar25 = local_160;
                  uVar29 = *(uint *)(local_168 + 0x568);
                  pppppppuVar36 = (uint *******)local_2c0;
                  if ((uint ******)local_160 != (uint ******)0x0) {
                    LOCK();
                    ppppppuVar17 = (uint ******)(local_160 + 1);
                    *(int *)ppppppuVar17 = *(int *)ppppppuVar17 + -1;
                    UNLOCK();
                    if (*(int *)ppppppuVar17 == 0) {
                      (*(code *)**local_160)();
                      LOCK();
                      piVar2 = (int *)((longlong)pppppuVar25 + 0xc);
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      pppppppuVar36 = (uint *******)local_2c0;
                      if (*piVar2 == 0) {
                        (*(code *)(*pppppuVar25)[2])();
                        pppppppuVar36 = (uint *******)local_2c0;
                      }
                    }
                  }
                }
                bVar41 = uVar29 != 0xffffffff;
                if (((byte)local_23c & bVar41) != 1) goto LAB_142cf02c1;
                local_168 = (uint ******)pppppppuVar36[0xf8][2];
                bVar41 = true;
                pppppppuVar24 = (uint *******)0x0;
LAB_142cf0301:
                if ((uint *******)local_168 == (uint *******)0x0) goto LAB_142cf0312;
              }
              local_2d0 = (uint ****)pppppppuVar36[0xf8][1];
              if (*(uint *)(pppppppuVar36 + 0xf4) == 0) {
                local_2d8 = (uint ******)0x0;
              }
              else {
                iVar12 = *(uint *)(pppppppuVar36 + 0xf4) - 1;
                if ((int)uVar28 < iVar12) {
                  iVar12 = (int)uVar28;
                }
                local_2d8 = (uint ******)pppppppuVar36[0xf3][iVar12];
              }
              local_2f8 = *(uint *******)local_2b0[0xe];
              if (bVar41) {
                pppppppuVar24 = (uint *******)0x0;
              }
              local_2e0 = (uint ****)CONCAT71(local_2e0._1_7_,*(byte *)((longlong)local_228 + 0x14))
              ;
              local_2f0 = (uint ******)&local_168;
              local_308 = local_290;
              local_2e8 = (undefined8 *)((ulonglong)local_2e8 & 0xffffffffffffff00);
              local_300 = (uint ******)pppppppuVar24;
              local_2c8 = uVar29;
              FUN_142ced0bc(pppppppuVar36,local_2b0[9],lVar19,local_2b0[8]);
            }
            uVar28 = uVar28 + 1;
            lVar15 = lVar15 + 0x13c10;
          } while ((longlong)(int)uVar11 != uVar28);
        }
      }
      pppppuVar25 = (uint *****)((longlong)local_238 + 1);
    } while ((longlong)pppppuVar25 < (longlong)*(int *)local_2b0[1]);
  }
  if ((local_90 ^ (ulonglong)auStack_328) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000142ceed16:
  lVar15 = lVar15 + 4;
  iVar12 = iVar12 + 1;
  if (lVar15 == 0x10) goto LAB_142ceeda1;
  goto LAB_142ceed0b;
}



// FUNCTION 142cf0946 FUN_142cf0946 body=140 status=ok
// SIG undefined FUN_142cf0946(void)

undefined4 FUN_142cf0946(longlong param_1,char param_2,char param_3,uint param_4)

{
  undefined4 uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  
  if (param_3 == '\0') {
    puVar3 = &DAT_14c9c0d58;
    if (param_2 != '\0') {
      puVar3 = &DAT_14c9c0de8;
    }
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(puVar3 + 0x10);
    if (9 < param_4) {
      return 0;
    }
    if ((0x20fU >> (param_4 & 0x1f) & 1) == 0) {
      return 0;
    }
    ppuVar2 = &PTR_DAT_14a249170;
  }
  else {
    puVar3 = &DAT_14c9c0de8;
    if (param_2 != '\0') {
      puVar3 = &DAT_14c9c0d58;
    }
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(puVar3 + 0x10);
    if (9 < param_4) {
      return 0;
    }
    if ((0x20fU >> (param_4 & 0x1f) & 1) == 0) {
      return 0;
    }
    ppuVar2 = &PTR_DAT_14a2491e8;
  }
  uVar1 = *(undefined4 *)(&DAT_14a2491c0 + (longlong)(int)param_4 * 4);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)ppuVar2[(int)param_4];
  return uVar1;
}



// FUNCTION 142cf09d2 FUN_142cf09d2 body=2067 status=ok
// SIG undefined FUN_142cf09d2(void)

undefined8 *
FUN_142cf09d2(undefined8 *param_1,longlong param_2,longlong *param_3,longlong param_4,
             undefined8 param_5,undefined8 param_6,longlong param_7,undefined8 param_8,
             undefined8 param_9,longlong param_10,longlong param_11,char param_12,
             undefined8 param_13,longlong param_14,undefined4 param_15)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined1 auStack_1d8 [32];
  undefined8 *local_1b8;
  longlong *local_1a8;
  longlong *local_1a0;
  longlong local_198;
  longlong local_190;
  longlong *local_188;
  undefined8 local_180;
  undefined8 local_178;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[0x16] = 0;
  *(undefined1 (*) [16])(param_1 + 6) = (undefined1  [16])0x0;
  param_1[8] = 0;
  *(undefined1 (*) [16])(param_1 + 0x13) = (undefined1  [16])0x0;
  *(undefined1 *)(param_1 + 0x17) = 1;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0x3f80000000000000;
  *(undefined1 (*) [16])(param_1 + 0x1c) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x1e) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x20) = (undefined1  [16])0x0;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x23) = 1;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0x25) = 1;
  param_1[0x26] = 0;
  *(undefined1 *)(param_1 + 0x27) = 1;
  param_1[0x28] = 0;
  *(undefined1 *)(param_1 + 0x29) = 1;
  *(undefined1 (*) [16])(param_1 + 0x2b) = (undefined1  [16])0x0;
  *(undefined1 *)(param_1 + 0x2d) = 1;
  local_188 = param_1 + 0x2b;
  lVar8 = 0x170;
  do {
    *(undefined1 (*) [16])((longlong)param_1 + lVar8) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)param_1 + lVar8 + 0x10) = 0xffff0000;
    lVar8 = lVar8 + 0x18;
  } while (lVar8 != 0x230);
  *(undefined4 *)((longlong)param_1 + 0x244) = 0;
  *(undefined1 (*) [16])(param_1 + 0x46) = (undefined1  [16])0x0;
  *(undefined2 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x49) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x24c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x254) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  *(undefined2 *)((longlong)param_1 + 0x25c) = 0;
  param_1[0x4c] = 0;
  local_1a8 = param_3;
  local_190 = param_4;
  local_198 = FUN_14476842e(param_2,&DAT_14ca63b20,L"WhiteDummy",2);
  lVar8 = FUN_144aba046(&DAT_14ca63b10,param_2,4,0);
  plVar1 = (longlong *)(param_2 + 0x70);
  puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 9;
  local_1a0 = plVar1;
  if (*(undefined8 **)(param_2 + 0x78) < puVar13) {
    FUN_140023dd8(plVar1,0x50);
    puVar16 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar13 = puVar16 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar13;
  puVar16[1] = *(undefined8 *)(lVar8 + 8);
  puVar16[2] = 0;
  *(undefined1 *)(puVar16 + 3) = 3;
  *(undefined8 *)((longlong)puVar16 + 0x1c) = 0xffffffffffffffff;
  *puVar16 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar16 + 5) = 0x1c;
  *(undefined8 *)((longlong)puVar16 + 0x2c) = 0xffffffff00000000;
  puVar16[7] = 0;
  puVar16[8] = lVar8;
  iVar2 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar2 + 1U) {
    FUN_1447568fc(param_2 + 0x198,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar2 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  if (param_12 == '\0') {
    lVar8 = 0;
  }
  else {
    lVar8 = (**(code **)(*local_1a8 + 0x338))();
  }
  lVar9 = FUN_14482e3b2();
  cVar5 = *(char *)(lVar9 + 0x41);
  if (cVar5 == '\x03') {
    cVar5 = '\x02';
  }
  *param_1 = param_8;
  *(char *)(param_1 + 1) = cVar5;
  lVar10 = FUN_144a81af4();
  lVar9 = local_190;
  cVar5 = *(char *)(lVar10 + 0x41);
  if (cVar5 == '\x03') {
    cVar5 = '\x02';
  }
  param_1[2] = param_9;
  *(char *)(param_1 + 3) = cVar5;
  uVar11 = *(undefined8 *)(local_190 + 0x13780);
  FUN_144a12b9e();
  cVar5 = DAT_14c9e81f1;
  if (DAT_14c9e81f1 == '\x03') {
    cVar5 = '\x02';
  }
  param_1[0x16] = uVar11;
  *(char *)(param_1 + 0x17) = cVar5;
  uVar11 = *(undefined8 *)(lVar9 + 0x118d0);
  lVar10 = FUN_144a2c9be();
  cVar5 = *(char *)(lVar10 + 0x41);
  if (cVar5 == '\x03') {
    cVar5 = '\x02';
  }
  param_1[4] = uVar11;
  *(char *)(param_1 + 5) = cVar5;
  if (param_11 == 0) {
    param_11 = local_198;
  }
  param_1[0x1e] = param_11;
  param_1[0x1f] = DAT_14c9c0d80;
  if (lVar8 == 0) {
    uVar11 = FUN_14476842e(param_2,&DAT_14ca63b20,L"WhiteDummy",2);
    uVar12 = FUN_14476842e(param_2,&DAT_14ca63ba8,L"DepthDummy",2);
    uVar14 = uVar12;
  }
  else {
    uVar11 = *(undefined8 *)(lVar9 + 0x13748);
    uVar12 = *(undefined8 *)(lVar9 + 0x13758);
    uVar14 = *(undefined8 *)(lVar9 + 0x13760);
  }
  param_1[6] = uVar12;
  param_1[7] = uVar14;
  param_1[8] = uVar11;
  local_1b8 = param_1 + 10;
  uVar11 = param_5;
  bVar4 = FUN_144abb559(param_2,local_1a8,lVar9,param_5);
  if (param_10 == 0) {
    param_10 = local_198;
  }
  *(uint *)(param_1 + 0x18) = (uint)bVar4;
  param_1[0x1c] = param_10;
  param_1[0x1d] = DAT_14c9c0eb8;
  lVar8 = FUN_1447e4f80();
  plVar1 = local_1a0;
  cVar5 = '\x02';
  if (*(char *)(lVar8 + 0x41) != '\x03') {
    cVar5 = *(char *)(lVar8 + 0x41);
  }
  param_1[0x22] = *(undefined8 *)(lVar9 + 0x18);
  *(char *)(param_1 + 0x23) = cVar5;
  puVar17 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar13 = puVar17 + 0x24;
  if (*(undefined8 **)(param_2 + 0x78) < puVar13) {
    FUN_140023dd8(local_1a0,0x130);
    puVar17 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
    puVar13 = puVar17 + 0x24;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar13;
  *puVar17 = &PTR_FUN_14a249050;
  puVar17[2] = 0;
  puVar17[3] = 0x3f80000000000000;
  puVar17[0x12] = 0;
  puVar17[0x13] = 0x3f80000000000000;
  puVar17[0x14] = 0;
  puVar17[0x15] = 0x3f80000000000000;
  puVar17[0x16] = 0;
  puVar17[0x17] = 0x3f80000000000000;
  puVar17[0x18] = 0;
  puVar17[0x19] = 0x3f80000000000000;
  iVar2 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar2 + 1U) {
    FUN_1448cfae8((longlong *)(param_2 + 0x98),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar2 * 8) = puVar17;
  if (*(longlong *)(lVar9 + 0x11f90) == 0) {
    uVar11 = 0;
  }
  else {
    uVar15 = CONCAT71((int7)((ulonglong)uVar11 >> 8),
                      *(undefined1 *)(*(longlong *)(lVar9 + 0x11f90) + 0xc)) & 0xffffffffffffff02;
    uVar11 = CONCAT71((int7)(uVar15 >> 8),(byte)uVar15 >> 1);
  }
  local_1b8 = (undefined8 *)((ulonglong)local_1b8 & 0xffffffff00000000);
  FUN_1449e488f(&local_178,lVar9,param_5,uVar11);
  memcpy(puVar17 + 2,&local_178,0x108);
  local_178 = puVar17 + 2;
  FUN_1449dab10();
  local_180 = DAT_14c9e9318;
  uVar11 = FUN_144aaeec8(param_2 + 0x1a8,local_1a0,&local_178);
  FUN_1449dab10();
  cVar5 = DAT_14c9e9341;
  if (DAT_14c9e9341 == '\x03') {
    cVar5 = '\x02';
  }
  param_1[0x24] = uVar11;
  *(char *)(param_1 + 0x25) = cVar5;
  param_1[0x21] = local_198;
  param_1[0x20] = puVar16;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x1a] = &DAT_3f8000003f800000;
  param_1[0x1b] = &DAT_3f8000003f800000;
  lVar8 = FUN_144938434();
  cVar5 = *(char *)(lVar8 + 0x41);
  if (cVar5 == '\x03') {
    cVar5 = '\x02';
  }
  param_1[0x28] = param_13;
  *(char *)(param_1 + 0x29) = cVar5;
  *(undefined4 *)(param_1 + 0x2a) = param_15;
  if (param_14 == 0) {
    param_14 = FUN_14476842e(param_2,&DAT_14ca63c00,L"ZeroUIntDummy",2);
  }
  *local_188 = param_14;
  if (*(longlong **)(lVar9 + 0x11f90) == (longlong *)0x0) {
    lVar8 = 0;
  }
  else {
    lVar8 = **(longlong **)(lVar9 + 0x11f90);
  }
  if ((*(char *)(lVar8 + 8) == '\x01') && (*(uint *)(lVar9 + 0x11f98) < *(uint *)(lVar8 + 200))) {
    uVar11 = *(undefined8 *)
              (*(longlong *)(lVar8 + 0xc0) + (longlong)(int)*(uint *)(lVar9 + 0x11f98) * 8);
  }
  else {
    uVar11 = FUN_1403e60c2(lVar8,param_2);
  }
  FUN_1449863e6();
  cVar5 = '\x02';
  if (DAT_14c9e7c81 != '\x03') {
    cVar5 = DAT_14c9e7c81;
  }
  param_1[0x26] = uVar11;
  *(char *)(param_1 + 0x27) = cVar5;
  uVar3 = (undefined4)local_178;
  *(undefined4 *)((longlong)param_1 + 0x13c) = local_178._3_4_;
  *(undefined4 *)((longlong)param_1 + 0x139) = uVar3;
  param_1[0x2e] = param_6;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xffff0001;
  lVar9 = DAT_14ca97170;
  lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar2 = *(int *)(lVar8 + 0xc60);
  if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
    uVar15 = 0;
  }
  else if (iVar2 == 1) {
    DVar6 = FUN_140ad26c0();
    DVar7 = GetCurrentThreadId();
    uVar15 = (ulonglong)(DVar6 != DVar7);
  }
  else {
    uVar15 = 1;
  }
  lVar10 = DAT_14ca971d0;
  if (0 < *(int *)(lVar9 + uVar15 * 4)) {
    iVar2 = *(int *)(lVar8 + 0xc60);
    if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
      uVar15 = 0;
    }
    else if (iVar2 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar15 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar15 = 1;
    }
    if (0 < *(int *)(lVar10 + uVar15 * 4)) {
      cVar5 = FUN_144b1cdc5(*(undefined2 *)
                             (&DAT_14ca85070 + (longlong)*(int *)(local_190 + 0x3090) * 2));
      if (cVar5 != '\0') {
        param_1[0x31] = local_1a8[0xa3e];
        param_1[0x32] = 0;
        *(undefined4 *)(param_1 + 0x33) = 0xffff0001;
        param_1[0x34] = local_1a8[0xa3d];
        param_1[0x35] = 0;
        *(undefined4 *)(param_1 + 0x36) = 0xffff0001;
      }
    }
  }
  if (param_7 != 0) {
    param_1[0x46] = param_7;
    param_1[0x47] = 0;
    *(undefined2 *)(param_1 + 0x48) = 0x101;
    *(undefined4 *)((longlong)param_1 + 0x244) = 0x21;
  }
  if ((local_60 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cf11e6 FUN_142cf11e6 body=485 status=ok
// SIG undefined FUN_142cf11e6(void)

void FUN_142cf11e6(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_108 [32];
  longlong local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 *local_d0;
  undefined1 local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  ulonglong local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_78 = (ulonglong)*(int *)(param_1 + 0x3f0);
  local_98 = param_2;
  local_88 = param_1;
  local_70 = param_3;
  if (0 < (longlong)local_78) {
    local_90 = (longlong)*(int *)(param_4 + 8);
    local_80 = local_90 * 0x18;
    uVar8 = 0;
    do {
      if (*(char *)(*(longlong *)(local_88 + 1000) + 0x11a08 + uVar8 * 0x13c10) == '\x01') {
        lVar6 = *(longlong *)(local_88 + 1000) + uVar8 * 0x13c10;
        uVar4 = FUN_142c60a4f(local_98,*(undefined8 *)(lVar6 + 0x13818));
        iVar3 = *(int *)(param_4 + 0x50);
        lVar5 = local_80;
        lVar7 = local_90;
        if ((int)local_90 < iVar3) {
          do {
            lVar1 = *(longlong *)(param_4 + 0x48);
            lVar2 = *(longlong *)(lVar1 + 8 + lVar5);
            if (*(longlong *)(lVar2 + 0x28) != 0) {
              local_68 = uVar4;
              if ((*(byte *)(lVar1 + lVar5) & 0x10) != 0) {
                local_e0 = param_5;
                local_e8 = CONCAT71(local_e8._1_7_,1);
                local_68 = FUN_142c6147b(local_98,lVar6,uVar8 & 0xffffffff,lVar2);
              }
              local_c0 = *(undefined1 *)(lVar1 + 0x14 + lVar5);
              local_b8 = 0;
              uStack_b0 = 0;
              local_d0 = &local_68;
              local_d8 = param_6;
              local_e0 = param_5;
              local_a8 = 0xffffffff;
              local_c8 = 1;
              local_e8 = lVar2;
              FUN_142ced0bc(local_88,local_98,lVar6,local_70);
              iVar3 = *(int *)(param_4 + 0x50);
            }
            lVar7 = lVar7 + 1;
            lVar5 = lVar5 + 0x18;
          } while (lVar7 < iVar3);
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != local_78);
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142cf13cc FUN_142cf13cc body=3937 status=ok
// SIG undefined FUN_142cf13cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cf13cc(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  longlong param_5,longlong *param_6,int param_7)

{
  ulonglong *puVar1;
  longlong *plVar2;
  undefined *puVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 auStack_578 [32];
  wchar_t *local_558;
  wchar_t *local_550;
  ulonglong uStack_548;
  char *local_540;
  code *local_538;
  code *local_530;
  undefined8 **local_528;
  undefined1 *local_520;
  undefined1 *local_518;
  undefined1 *local_510;
  undefined4 local_508;
  undefined *local_500;
  ulonglong *local_4f0;
  undefined8 *local_4e8;
  undefined4 local_4e0;
  undefined4 local_4dc;
  longlong local_4d8;
  longlong *local_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  double local_4b8;
  double dStack_4b0;
  double local_4a8;
  undefined8 local_4a0;
  undefined8 *local_498;
  longlong local_490;
  undefined *local_488;
  char local_480;
  undefined8 local_478;
  char local_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  wchar_t local_448 [36];
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3e8;
  undefined1 local_3e0;
  undefined4 local_3d8;
  undefined8 local_3d4;
  undefined1 *local_3c8;
  undefined1 *puStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 *local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  char local_380;
  undefined8 local_378;
  char local_370;
  undefined8 local_368;
  undefined1 local_360;
  undefined8 local_358;
  undefined1 local_350;
  undefined8 local_340;
  undefined8 uStack_338;
  char local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined4 local_318;
  undefined1 local_268 [16];
  undefined2 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 local_240;
  undefined2 local_23c;
  undefined8 local_238;
  undefined8 local_228;
  undefined1 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined1 *local_1f8;
  undefined1 *puStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 *local_188;
  undefined8 local_180;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_578;
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar10 = puVar13 + 100;
  local_4e0 = param_3;
  local_4dc = param_4;
  if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
    FUN_140023dd8(puVar1,0x330);
    puVar13 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar10 = puVar13 + 100;
  }
  *puVar1 = (ulonglong)puVar10;
  *puVar13 = &PTR_FUN_14a2478d8;
  local_4e8 = puVar13 + 2;
  puVar13[2] = 0;
  *(undefined1 *)(puVar13 + 3) = 1;
  puVar13[4] = 0;
  *(undefined1 *)(puVar13 + 5) = 1;
  puVar13[6] = 0;
  *(undefined1 *)(puVar13 + 7) = 1;
  puVar13[0x18] = 0;
  *(undefined1 (*) [16])(puVar13 + 8) = (undefined1  [16])0x0;
  puVar13[10] = 0;
  *(undefined1 (*) [16])(puVar13 + 0x15) = (undefined1  [16])0x0;
  *(undefined1 *)(puVar13 + 0x19) = 1;
  puVar13[0x1c] = 0;
  puVar13[0x1d] = 0x3f80000000000000;
  *(undefined1 (*) [16])(puVar13 + 0x1e) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar13 + 0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar13 + 0x22) = (undefined1  [16])0x0;
  puVar13[0x24] = 0;
  *(undefined1 *)(puVar13 + 0x25) = 1;
  puVar13[0x26] = 0;
  *(undefined1 *)(puVar13 + 0x27) = 1;
  puVar13[0x28] = 0;
  *(undefined1 *)(puVar13 + 0x29) = 1;
  puVar13[0x2a] = 0;
  *(undefined1 *)(puVar13 + 0x2b) = 1;
  *(undefined1 (*) [16])(puVar13 + 0x2d) = (undefined1  [16])0x0;
  *(undefined1 *)(puVar13 + 0x2f) = 1;
  lVar7 = 0x180;
  do {
    *(undefined1 (*) [16])((longlong)puVar13 + lVar7) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)puVar13 + lVar7 + 0x10) = 0xffff0000;
    lVar7 = lVar7 + 0x18;
  } while (lVar7 != 0x240);
  *(undefined4 *)((longlong)puVar13 + 0x254) = 0;
  puVar13[0x48] = 0;
  puVar13[0x49] = 0;
  *(undefined2 *)(puVar13 + 0x4a) = 0;
  *(undefined4 *)(puVar13 + 0x4b) = 0xffffffff;
  *(undefined4 *)((longlong)puVar13 + 0x25c) = 0xffffffff;
  *(undefined4 *)(puVar13 + 0x4c) = 0xffffffff;
  *(undefined4 *)((longlong)puVar13 + 0x264) = 0xffffffff;
  *(undefined4 *)(puVar13 + 0x4d) = 0;
  *(undefined2 *)((longlong)puVar13 + 0x26c) = 0;
  puVar13[0x4e] = 0;
  puVar13[0x50] = 0;
  *(undefined1 *)(puVar13 + 0x51) = 1;
  puVar13[0x52] = 0;
  puVar13[0x53] = 0x3f80000000000000;
  puVar13[0x54] = 0;
  puVar13[0x55] = 0x3f80000000000000;
  puVar13[0x56] = 0;
  puVar13[0x57] = 0x3f80000000000000;
  puVar13[0x58] = 0;
  puVar13[0x59] = 0x3f80000000000000;
  puVar13[0x5a] = 0;
  puVar13[0x5b] = 0x3f80000000000000;
  plVar2 = (longlong *)(param_1 + 0x98);
  iVar6 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar6 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar6 + 1U) {
    FUN_1448cfae8(plVar2,iVar6);
  }
  *(undefined8 **)(*plVar2 + (longlong)iVar6 * 8) = puVar13;
  local_4a8 = 0.0;
  local_4b8 = 0.0;
  dStack_4b0 = 0.0;
  local_4d8 = *param_6;
  local_498 = (undefined8 *)0x0;
  local_490 = CONCAT71(local_490._1_7_,1);
  local_488 = (undefined *)0x0;
  local_480 = 1;
  local_478 = 0;
  local_470 = 1;
  local_3e8 = 0;
  local_468 = 0;
  uStack_460 = 0;
  local_458 = 0;
  local_400 = 0;
  uStack_3f8 = 0;
  local_3e0 = 1;
  local_3c8 = (undefined1 *)0x0;
  puStack_3c0 = (undefined1 *)0x3f80000000000000;
  local_3b8 = 0;
  uStack_3b0 = 0;
  local_3a8 = 0;
  uStack_3a0 = 0;
  local_398 = (undefined8 *)0x0;
  uStack_390 = 0;
  local_388 = 0;
  local_380 = 1;
  local_378 = 0;
  local_370 = 1;
  local_368 = 0;
  local_360 = 1;
  local_358 = 0;
  local_350 = 1;
  local_340 = 0;
  uStack_338 = 0;
  local_330 = 1;
  lVar7 = 0x170;
  do {
    *(undefined8 *)((longlong)&local_498 + lVar7) = 0;
    *(undefined8 *)((longlong)&local_490 + lVar7) = 0;
    *(undefined4 *)((longlong)&local_488 + lVar7) = 0xffff0000;
    lVar7 = lVar7 + 0x18;
  } while (lVar7 != 0x230);
  local_254 = 0;
  local_268 = (undefined1  [16])0x0;
  local_258 = 0;
  local_250 = 0xffffffff;
  uStack_24c = 0xffffffff;
  uStack_248 = 0xffffffff;
  uStack_244 = 0xffffffff;
  local_240 = 0;
  local_23c = 0;
  local_238 = 0;
  local_228 = 0;
  local_220 = 1;
  local_218 = 0;
  uStack_210 = 0x3f80000000000000;
  local_208 = 0;
  uStack_200 = 0x3f80000000000000;
  local_1f8 = (undefined1 *)0x0;
  puStack_1f0 = (undefined1 *)0x3f80000000000000;
  local_1e8 = 0;
  uStack_1e0 = 0x3f80000000000000;
  local_1d8 = 0;
  uStack_1d0 = 0x3f80000000000000;
  uVar8 = FUN_14476842e(param_1,&DAT_14ca63b20,L"WhiteDummy",2);
  lVar7 = FUN_144aba046(&DAT_14ca63b10,param_1,4,0);
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar13 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
    FUN_140023dd8(puVar1,0x50);
    puVar13 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar13 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar10;
  puVar13[1] = *(undefined8 *)(lVar7 + 8);
  puVar13[2] = 0;
  *(undefined1 *)(puVar13 + 3) = 3;
  *(undefined8 *)((longlong)puVar13 + 0x1c) = 0xffffffffffffffff;
  *puVar13 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar13 + 5) = 0x1c;
  *(undefined8 *)((longlong)puVar13 + 0x2c) = 0xffffffff00000000;
  puVar13[7] = 0;
  puVar13[8] = lVar7;
  iVar6 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar6 + 1U;
  local_4f0 = puVar1;
  local_4d0 = plVar2;
  if (*(uint *)(param_1 + 0x1a4) < iVar6 + 1U) {
    FUN_1447568fc(param_1 + 0x198,iVar6);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar6 * 8) = puVar13;
  *(int *)((longlong)puVar13 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar10 = *(undefined8 **)(param_5 + 0x198);
  lVar7 = FUN_14482e3b2();
  cVar4 = *(char *)(lVar7 + 0x41);
  if (*(char *)(lVar7 + 0x41) == '\x03') {
    cVar4 = '\x02';
  }
  local_490 = CONCAT71(local_490._1_7_,cVar4);
  puVar3 = *(undefined **)(param_2 + 0x11a00);
  local_498 = puVar10;
  lVar7 = FUN_144a81af4();
  local_480 = *(char *)(lVar7 + 0x41);
  if (local_480 == '\x03') {
    local_480 = '\x02';
  }
  uVar9 = *(undefined8 *)(param_2 + 0x118d0);
  local_488 = puVar3;
  lVar7 = FUN_144a2c9be();
  local_470 = *(char *)(lVar7 + 0x41);
  if (local_470 == '\x03') {
    local_470 = '\x02';
  }
  uStack_3a0 = DAT_14c9c0d80;
  local_478 = uVar9;
  local_3a8 = uVar8;
  uVar9 = FUN_14476842e(param_1,&DAT_14ca63b20,L"WhiteDummy",2);
  local_468 = FUN_14476842e(param_1,&DAT_14ca63ba8,L"DepthDummy",2);
  local_3d8 = 0;
  local_558 = local_448;
  uStack_460 = local_468;
  local_458 = uVar9;
  FUN_144abb559(param_1,0,param_2,0);
  uStack_3b0 = DAT_14c9c0eb8;
  local_3b8 = uVar8;
  lVar7 = FUN_1447e4f80();
  puVar1 = local_4f0;
  local_380 = *(char *)(lVar7 + 0x41);
  if (local_380 == '\x03') {
    local_380 = '\x02';
  }
  local_388 = *(undefined8 *)(param_2 + 0x18);
  puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar10 = puVar14 + 0x24;
  if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
    FUN_140023dd8(local_4f0,0x130);
    puVar14 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar10 = puVar14 + 0x24;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar10;
  *puVar14 = &PTR_FUN_14a249050;
  puVar14[2] = 0;
  puVar14[3] = 0x3f80000000000000;
  puVar14[0x12] = 0;
  puVar14[0x13] = 0x3f80000000000000;
  puVar14[0x14] = 0;
  puVar14[0x15] = 0x3f80000000000000;
  puVar14[0x16] = 0;
  puVar14[0x17] = 0x3f80000000000000;
  puVar14[0x18] = 0;
  puVar14[0x19] = 0x3f80000000000000;
  iVar6 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar6 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar6 + 1U) {
    FUN_1448cfae8(local_4d0,iVar6);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar6 * 8) = puVar14;
  FUN_1404d3a5c(&local_188,param_2,local_4d8,&local_4b8);
  memcpy(puVar14 + 2,&local_188,0x108);
  local_188 = puVar14 + 2;
  FUN_1449dab10();
  local_4a0 = DAT_14c9e9318;
  uVar9 = FUN_144aaeec8(param_1 + 0x1a8,local_4f0,&local_188);
  FUN_1449dab10();
  local_370 = DAT_14c9e9341;
  if (DAT_14c9e9341 == '\x03') {
    local_370 = '\x02';
  }
  uVar12 = 0;
  local_3d4 = 0;
  local_3c8 = &DAT_3f8000003f800000;
  puStack_3c0 = &DAT_3f8000003f800000;
  local_328 = *(undefined8 *)(param_5 + 0x1b0);
  local_320 = 0;
  local_318 = 0xffff0001;
  if (*(ulonglong *)(param_5 + 0x1c0) != 0) {
    local_268._8_8_ = 0;
    local_268._0_8_ = *(ulonglong *)(param_5 + 0x1c0);
    local_258 = 0x101;
    local_254 = 0x21;
  }
  local_398 = puVar13;
  uStack_390 = uVar8;
  local_378 = uVar9;
  uVar8 = FUN_1448f5828(param_1);
  lVar7 = FUN_144a8b0f8();
  local_330 = '\x02';
  if (*(char *)(lVar7 + 0x41) != '\x03') {
    local_330 = *(char *)(lVar7 + 0x41);
  }
  local_1c8 = _DAT_14c846250;
  uStack_1c0 = DAT_14c846258;
  local_1b8 = _DAT_14c846260;
  uStack_1b0 = _DAT_14c846268;
  local_1a8 = _DAT_14c846270;
  uStack_1a0 = _DAT_14c846278;
  local_198 = _DAT_14c846280;
  uStack_190 = _DAT_14c846288;
  local_228 = 0;
  local_220 = 1;
  local_208 = 0;
  uStack_200 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_1f8 = &DAT_3f8000003f800000;
  puStack_1f0 = &DAT_3f8000003f800000;
  local_1e8 = CONCAT44((float)(dStack_4b0 + *(double *)(param_2 + 0x1038)),
                       (float)(local_4b8 + *(double *)(param_2 + 0x1030)));
  uStack_1e0 = CONCAT44(*(float *)(local_4d8 + 0xc) / 0.9659258,
                        (float)(local_4a8 + *(double *)(param_2 + 0x1040)));
  local_1d8 = 0;
  uStack_1d0 = 0;
  uStack_338 = uVar8;
  memcpy(local_4e8,&local_498,0x310);
  if (*(int *)(param_2 + 0x3d48) != 0) {
    bVar5 = FUN_140919df9(4,*(undefined2 *)
                             (&DAT_14ca85070 + (longlong)*(int *)(param_2 + 0x3090) * 2));
    uVar12 = (uint)bVar5;
  }
  uVar11 = 0;
  if (param_7 != 9) {
    uVar11 = param_7 << 4;
  }
  FUN_144a9a040(*(undefined8 *)(param_2 + 0x13818),&local_4c8,(uVar11 | uVar12) * 0x180 + 1);
  uVar8 = *(undefined8 *)(param_2 + 0x13818);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9e9700) && (FUN_144b3d300(&DAT_14c9e9700), DAT_14c9e9700 == -1)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9eba78) && (FUN_144b3d300(&DAT_14c9eba78), DAT_14c9eba78 == -1)) {
      FUN_145d4bcae(&local_498);
      local_510 = (undefined1 *)((ulonglong)local_510 & 0xffffffffffffff00);
      local_520 = (undefined1 *)((ulonglong)local_520 & 0xffffffffffffff00);
      local_540 = "Unknown";
      local_550 = (wchar_t *)0x0;
      uStack_548 = 0;
      local_558 = L"FParameters";
      local_518 = (undefined1 *)0x0;
      local_530 = (code *)CONCAT44(local_530._4_4_,0xa0);
      local_538 = (code *)CONCAT44(local_538._4_4_,0x133);
      local_528 = &local_498;
      FUN_140b49562(&DAT_14c9eb9f8,0,1);
      if (local_498 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cf487d);
      _Init_thread_footer(&DAT_14c9eba78);
    }
    FUN_145d4bb64();
    local_500 = &DAT_14c9eb9f8;
    local_510 = &LAB_14712ac08;
    local_518 = &LAB_14712ac0c;
    local_520 = &LAB_1471d2aa4;
    local_528 = (undefined8 **)&LAB_1471d2aa8;
    local_530 = FUN_1471d2ae4;
    local_538 = FUN_1471d2b3e;
    local_550 = L"VertexMain";
    local_558 = L"/Engine/Private/DeferredLightVertexShaders.usf";
    local_508 = 0xe0;
    local_540 = (char *)CONCAT44(local_540._4_4_,2);
    uStack_548 = uStack_548 & 0xffffffff00000000;
    FUN_140db5666(&DAT_14c9e9658,0,&DAT_14c9e95f0,L"FDeferredLightVS");
    _DAT_14c9e9658 = FGlobalShaderType::vftable;
    atexit((_func_5014 *)&LAB_142ce867a);
    _Init_thread_footer(&DAT_14c9e9700);
  }
  FUN_1448e935e(uVar8,&local_188,&DAT_14c9e9658,1);
  iVar6 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110);
  if (iVar6 < DAT_14c9e9700) {
    FUN_144b3d300(&DAT_14c9e9700);
    iVar6 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110);
    if (DAT_14c9e9700 == -1) {
      if ((iVar6 < DAT_14c9eba78) && (FUN_144b3d300(&DAT_14c9eba78), DAT_14c9eba78 == -1)) {
        FUN_145d4bcae(&local_498);
        local_510 = (undefined1 *)((ulonglong)local_510 & 0xffffffffffffff00);
        local_520 = (undefined1 *)((ulonglong)local_520 & 0xffffffffffffff00);
        local_540 = "Unknown";
        local_550 = (wchar_t *)0x0;
        uStack_548 = 0;
        local_558 = L"FParameters";
        local_518 = (undefined1 *)0x0;
        local_530 = (code *)CONCAT44(local_530._4_4_,0xa0);
        local_538 = (code *)CONCAT44(local_538._4_4_,0x133);
        local_528 = &local_498;
        FUN_140b49562(&DAT_14c9eb9f8,0,1);
        if (local_498 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        atexit((_func_5014 *)&LAB_142cf487d);
        _Init_thread_footer(&DAT_14c9eba78);
      }
      FUN_145d4bb64();
      local_500 = &DAT_14c9eb9f8;
      local_510 = &LAB_14712ac08;
      local_518 = &LAB_14712ac0c;
      local_520 = &LAB_1471d2aa4;
      local_528 = (undefined8 **)&LAB_1471d2aa8;
      local_530 = FUN_1471d2ae4;
      local_538 = FUN_1471d2b3e;
      local_550 = L"VertexMain";
      local_558 = L"/Engine/Private/DeferredLightVertexShaders.usf";
      local_508 = 0xe0;
      local_540 = (char *)CONCAT44(local_540._4_4_,2);
      uStack_548 = uStack_548 & 0xffffffff00000000;
      FUN_140db5666(&DAT_14c9e9658,0,&DAT_14c9e95f0,L"FDeferredLightVS");
      _DAT_14c9e9658 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142ce867a);
      _Init_thread_footer(&DAT_14c9e9700);
      iVar6 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110);
    }
  }
  puVar10 = local_188;
  if ((iVar6 < DAT_14c9eaac8) && (FUN_144b3d300(&DAT_14c9eaac8), DAT_14c9eaac8 == -1)) {
    FUN_145e091a2(&local_498);
    local_510 = (undefined1 *)((ulonglong)local_510 & 0xffffffffffffff00);
    local_520 = (undefined1 *)((ulonglong)local_520 & 0xffffffffffffff00);
    local_540 = "Unknown";
    local_550 = (wchar_t *)0x0;
    uStack_548 = 0;
    local_558 = L"FSimpleLightsStandardDeferredParameters";
    local_518 = (undefined1 *)0x0;
    local_530 = (code *)CONCAT44(local_530._4_4_,0x310);
    local_538 = (code *)CONCAT44(local_538._4_4_,0xc21);
    local_528 = &local_498;
    FUN_140b49562(&DAT_14c9eaa48,0,1);
    if (local_498 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    atexit((_func_5014 *)&LAB_142cf7fd7);
    _Init_thread_footer(&DAT_14c9eaac8);
  }
  FUN_140069376(param_1);
  puVar1 = local_4f0;
  puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar14 + 0x40;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(local_4f0,0x208);
    puVar14 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar14 + 0x40;
  }
  *puVar1 = (ulonglong)puVar13;
  local_498 = local_4e8;
  local_490 = DAT_14c9eaa90;
  if (DAT_14c9eaa90 != 0) {
    LOCK();
    *(int *)(DAT_14c9eaa90 + 8) = *(int *)(DAT_14c9eaa90 + 8) + 1;
    UNLOCK();
  }
  local_488 = &DAT_14c9eaa48;
  local_558 = (wchar_t *)CONCAT71(local_558._1_7_,2);
  FUN_140068f1a(puVar14,&local_188,&local_498,1);
  *puVar14 = &PTR_FUN_14a2478e0;
  puVar14[0x37] = param_2;
  puVar14[0x38] = param_6;
  *(undefined4 *)(puVar14 + 0x39) = local_4e0;
  *(undefined4 *)((longlong)puVar14 + 0x1cc) = local_4dc;
  puVar14[0x3a] = local_4e8;
  puVar14[0x3b] = local_4c8;
  puVar14[0x3c] = uStack_4c0;
  puVar14[0x3d] = puVar10;
  puVar14[0x3e] = local_180;
  *(int *)(puVar14 + 0x3f) = param_7;
  iVar6 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar6 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar6 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar6);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar6 * 8) = puVar14;
  *(int *)((longlong)puVar14 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar14);
  if ((local_70 ^ (ulonglong)auStack_578) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142cf233a FUN_142cf233a body=3098 status=ok
// SIG undefined FUN_142cf233a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142cf233a(longlong param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined8 uVar4;
  ulonglong *puVar5;
  undefined8 *puVar6;
  undefined1 uVar7;
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  bool bVar21;
  undefined1 auStack_1d8 [32];
  wchar_t *local_1b8;
  wchar_t *local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a0;
  code *local_198;
  code *local_190;
  undefined1 *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined1 *local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined1 local_151;
  ulonglong *local_150;
  int local_148;
  undefined4 local_144;
  undefined4 local_140;
  int local_13c;
  longlong *local_138;
  longlong local_130;
  longlong *local_128;
  longlong local_120;
  undefined8 *local_118;
  undefined8 *local_110;
  longlong local_108;
  longlong local_100;
  ulonglong local_f8;
  longlong local_f0;
  undefined8 local_e8;
  longlong local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b7;
  undefined2 local_b6;
  undefined1 local_b4;
  undefined4 local_b3;
  undefined3 uStack_af;
  undefined2 local_ac;
  undefined1 local_aa;
  undefined8 *local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  uint local_8c;
  undefined4 local_88;
  int local_84;
  int local_80;
  undefined4 local_7c;
  undefined2 local_78;
  undefined1 local_76;
  undefined2 local_75;
  undefined1 local_73;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if ((longlong)*(int *)(param_1 + 0x3f0) < 1) {
    bVar21 = false;
  }
  else {
    lVar14 = 0;
    bVar3 = false;
    do {
      bVar21 = true;
      if (!bVar3) {
        if ((*(byte *)(*(longlong *)(param_1 + 1000) + 0x125b0 + lVar14 * 0x13c10) & 0x80) == 0) {
          lVar18 = *(longlong *)(param_1 + 1000) + lVar14 * 0x13c10;
          lVar19 = (longlong)*(int *)(param_1 + 0x410);
          lVar17 = -1;
          if (0 < lVar19) {
            lVar16 = 0;
            do {
              lVar17 = lVar16;
              if (*(longlong *)(*(longlong *)(param_1 + 0x408) + lVar16 * 8) == lVar18) break;
              lVar16 = lVar16 + 1;
              lVar17 = -1;
            } while (lVar19 != lVar16);
          }
          lVar16 = *(longlong *)(param_1 + 0xe58);
          if (*(longlong *)(param_1 + 0xe58) == 0) {
            lVar16 = param_1 + 0xe38;
          }
          if (*(int *)(lVar16 + (longlong)(int)lVar17 * 0x20) != 2) {
            iVar9 = -1;
            if (0 < *(int *)(param_1 + 0x410)) {
              lVar17 = 0;
              do {
                if (*(longlong *)(*(longlong *)(param_1 + 0x408) + lVar17 * 8) == lVar18) {
                  iVar9 = (int)lVar17;
                  break;
                }
                lVar17 = lVar17 + 1;
              } while (lVar19 != lVar17);
            }
            bVar21 = *(int *)(lVar16 + 0xc + (longlong)iVar9 * 0x20) == 2;
          }
        }
      }
      lVar14 = lVar14 + 1;
      bVar3 = bVar21;
    } while (lVar14 != *(int *)(param_1 + 0x3f0));
  }
  local_138 = param_4;
  local_130 = param_3;
  if ((longlong)*(int *)(param_1 + 0xa8) < 1) {
LAB_142cf2ed1:
    uVar20 = 0;
  }
  else {
    uVar20 = 0;
    lVar14 = 0;
    do {
      if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + lVar14 * 8) + 0x30c8) == '\0') {
        if (!bVar21) goto LAB_142cf2ed1;
        uVar12 = *(undefined8 *)(*(longlong *)(param_3 + 0x38) + 0x84);
        local_90 = DAT_14ca85098;
        uStack_a0 = CONCAT44(DAT_14ca8508c,DAT_14ca85088);
        uStack_98 = (undefined *)CONCAT44(DAT_14ca85094,DAT_14ca85090);
        local_8c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
        local_76 = 0;
        local_a8 = (undefined8 *)&DAT_00000009;
        local_75 = 0x39;
        local_7c = 0x10001;
        local_78 = 0x101;
        local_88 = 0;
        local_73 = 0xff;
        iVar9 = (int)uVar12;
        local_84 = DAT_14ca84e40;
        if (iVar9 < DAT_14ca84e40) {
          local_84 = iVar9;
        }
        if (local_84 < 2) {
          local_84 = 1;
        }
        iVar9 = (int)((ulonglong)uVar12 >> 0x20);
        local_80 = DAT_14ca84e40;
        if (iVar9 < DAT_14ca84e40) {
          local_80 = iVar9;
        }
        if (local_80 < 2) {
          local_80 = 1;
        }
        puVar1 = (ulonglong *)(param_2 + 0x70);
        uVar20 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
        uVar10 = uVar20 + 0x120;
        local_150 = puVar1;
        if (*(ulonglong *)(param_2 + 0x78) < uVar10) {
          FUN_140023dd8(puVar1,0x128);
          uVar20 = *puVar1 + 7 & 0xfffffffffffffff8;
          uVar10 = uVar20 + 0x120;
        }
        *(ulonglong *)(param_2 + 0x70) = uVar10;
        FUN_1456bbb8c(uVar20,L"LightingChannels",&local_a8,0);
        iVar9 = *(int *)(param_2 + 0x180);
        *(uint *)(param_2 + 0x180) = iVar9 + 1U;
        if (*(uint *)(param_2 + 0x184) < iVar9 + 1U) {
          FUN_14472c0f6(param_2 + 0x178,iVar9);
        }
        *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar9 * 8) = uVar20;
        *(int *)(uVar20 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
        lVar14 = (longlong)*(int *)(param_1 + 0x3f0);
        if (0 < lVar14) {
          local_148 = (int)local_138[1];
          local_128 = (longlong *)(param_2 + 0x98);
          local_108 = param_2 + 0x168;
          lVar17 = 0;
          local_100 = lVar14;
          local_f8 = uVar20;
          local_f0 = param_1;
          do {
            lVar18 = *(longlong *)(param_1 + 1000);
            puVar1 = *(ulonglong **)(param_2 + 0x18);
            iVar9 = *(int *)(lVar18 + 0x1de0 + lVar17 * 0x13c10);
            local_13c = *(int *)((longlong)puVar1 + 0x17c);
            local_120 = lVar17;
            if (local_13c != iVar9) {
              *(int *)((longlong)puVar1 + 0x17c) = iVar9;
              puVar11 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
              puVar13 = puVar11 + 3;
              if ((undefined8 *)puVar1[1] < puVar13) {
                FUN_140023dd8(puVar1,0x20);
                puVar11 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                puVar13 = puVar11 + 3;
              }
              *puVar1 = (ulonglong)puVar13;
              *(int *)(puVar1 + 0xc) = (int)puVar1[0xc] + 1;
              *(undefined8 **)puVar1[6] = puVar11;
              puVar1[6] = (ulonglong)(puVar11 + 1);
              uVar2 = *(undefined4 *)((longlong)puVar1 + 0x17c);
              puVar11[1] = 0;
              *puVar11 = &PTR_FUN_14a1fb2c0;
              *(undefined4 *)(puVar11 + 2) = uVar2;
            }
            puVar5 = local_150;
            puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
            puVar13 = puVar11 + 0x26;
            if (*(undefined8 **)(param_2 + 0x78) < puVar13) {
              FUN_140023dd8(local_150,0x140);
              puVar11 = (undefined8 *)(*puVar5 + 0xf & 0xfffffffffffffff0);
              puVar13 = puVar11 + 0x26;
            }
            lVar18 = lVar18 + lVar17 * 0x13c10;
            *local_150 = (ulonglong)puVar13;
            *puVar11 = &PTR_FUN_14a2483c8;
            puVar11[2] = 0;
            *(undefined1 *)(puVar11 + 3) = 1;
            puVar11[4] = 0;
            puVar11[5] = 0;
            lVar17 = 0x42;
            do {
              puVar13 = (undefined8 *)((longlong)puVar11 + lVar17 + -0x12);
              *puVar13 = 0;
              puVar13[1] = 0;
              *(undefined4 *)((longlong)puVar11 + lVar17 + -2) = 0xffff0000;
              lVar17 = lVar17 + 0x18;
            } while (lVar17 != 0x102);
            *(undefined4 *)((longlong)puVar11 + 0x104) = 0;
            puVar11[0x1e] = 0;
            puVar11[0x1f] = 0;
            *(undefined2 *)(puVar11 + 0x20) = 0;
            *(undefined4 *)(puVar11 + 0x21) = 0xffffffff;
            *(undefined4 *)((longlong)puVar11 + 0x10c) = 0xffffffff;
            *(undefined4 *)(puVar11 + 0x22) = 0xffffffff;
            *(undefined4 *)((longlong)puVar11 + 0x114) = 0xffffffff;
            *(undefined4 *)(puVar11 + 0x23) = 0;
            *(undefined2 *)((longlong)puVar11 + 0x11c) = 0;
            puVar11[0x24] = 0;
            iVar9 = *(int *)(param_2 + 0xa0);
            *(uint *)(param_2 + 0xa0) = iVar9 + 1U;
            if (*(uint *)(param_2 + 0xa4) < iVar9 + 1U) {
              FUN_1448cfae8(local_128,iVar9);
            }
            *(undefined8 **)(*local_128 + (longlong)iVar9 * 8) = puVar11;
            if ((**(longlong **)(*(longlong *)(lVar18 + 8) + 8) == lVar18) ||
               (uVar7 = 1, *(char *)(*(longlong *)(lVar18 + 8) + 0xcc) == '\x01')) {
              uVar7 = 0;
            }
            puVar11[6] = uVar20;
            puVar11[7] = 0;
            *(undefined1 *)(puVar11 + 8) = uVar7;
            *(undefined1 *)((longlong)puVar11 + 0x41) = 0;
            *(undefined2 *)((longlong)puVar11 + 0x42) = 0xffff;
            puVar11[4] = local_130;
            if (local_148 == (int)lVar14) {
              uVar12 = *(undefined8 *)(*local_138 + local_120 * 8);
            }
            else {
              uVar12 = 0;
            }
            puVar11[5] = uVar12;
            lVar14 = FUN_1447e4f80();
            cVar8 = *(char *)(lVar14 + 0x41);
            if (*(char *)(lVar14 + 0x41) == '\x03') {
              cVar8 = '\x02';
            }
            puVar11[2] = *(undefined8 *)(lVar18 + 0x18);
            *(char *)(puVar11 + 3) = cVar8;
            local_c0 = *(undefined8 *)(lVar18 + 0x30f8);
            local_c8 = *(undefined8 *)(lVar18 + 0x3100);
            local_d0 = *(undefined8 *)(uVar20 + 0x84);
            lVar14 = puVar11[5];
            uVar12 = *(undefined8 *)(lVar18 + 0x13818);
            FUN_141576ea4();
            FUN_1448e935e(uVar12,&local_a8,&DAT_14c9e9af8,lVar14 != 0);
            FUN_141576ea4();
            local_118 = local_a8;
            local_d8 = uStack_a0;
            local_e0 = (longlong)*(int *)(lVar18 + 0x3090);
            local_140 = *(undefined4 *)(lVar18 + 0x1dd4);
            local_144 = *(undefined4 *)(lVar18 + 0x3094);
            local_151 = (&DAT_00001de6)[lVar18];
            uVar12 = *(undefined8 *)
                      (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + local_e0 * 2) * 8);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14ca4b780) && (FUN_144b3d300(&DAT_14ca4b780), DAT_14ca4b780 == -1))
            {
              FUN_145e1a792();
              local_170 = &LAB_14712ac08;
              local_178 = &LAB_14712ac0c;
              local_180 = &LAB_1472e3912;
              local_188 = &LAB_1472e3916;
              local_190 = FUN_1472e391a;
              local_198 = FUN_1472e3942;
              local_1b0 = L"ScreenPassVS";
              local_1b8 = L"/Engine/Private/ScreenPass.usf";
              local_160 = 0;
              local_168 = 0xe0;
              local_1a0 = 1;
              local_1a8 = 0;
              FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
              _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
              atexit((_func_5014 *)&LAB_1430179ee);
              _Init_thread_footer(&DAT_14ca4b780);
            }
            local_110 = puVar11 + 2;
            FUN_1448e935e(uVar12,&local_a8,&DAT_14ca4b6d8,0);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14ca4b780) && (FUN_144b3d300(&DAT_14ca4b780), DAT_14ca4b780 == -1))
            {
              FUN_145e1a792();
              local_170 = &LAB_14712ac08;
              local_178 = &LAB_14712ac0c;
              local_180 = &LAB_1472e3912;
              local_188 = &LAB_1472e3916;
              local_190 = FUN_1472e391a;
              local_198 = FUN_1472e3942;
              local_1b0 = L"ScreenPassVS";
              local_1b8 = L"/Engine/Private/ScreenPass.usf";
              local_160 = 0;
              local_168 = 0xe0;
              local_1a0 = 1;
              local_1a8 = 0;
              FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
              _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
              atexit((_func_5014 *)&LAB_1430179ee);
              _Init_thread_footer(&DAT_14ca4b780);
            }
            lVar14 = uStack_a0;
            puVar6 = local_a8;
            uVar12 = DAT_14c9c0d98;
            local_e8 = DAT_14c9c0d50;
            FUN_141576fc6();
            puVar11 = local_110;
            local_a8 = (undefined8 *)0x0;
            uStack_a0 = 0;
            FUN_1448f70da(local_118,&DAT_14c9eaad0,local_110,&local_a8);
            uVar4 = DAT_14ca94df8;
            local_ac = local_b6;
            local_aa = local_b4;
            FUN_141576fc6();
            FUN_140069376(param_2);
            puVar5 = local_150;
            puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar13 = puVar15 + 0x4b;
            if (*(undefined8 **)(param_2 + 0x78) < puVar13) {
              FUN_140023dd8(local_150,0x260);
              puVar15 = (undefined8 *)(*puVar5 + 7 & 0xfffffffffffffff8);
              puVar13 = puVar15 + 0x4b;
            }
            *local_150 = (ulonglong)puVar13;
            local_a8 = puVar11;
            uStack_a0 = DAT_14c9eab18;
            if (DAT_14c9eab18 != 0) {
              LOCK();
              *(int *)(DAT_14c9eab18 + 8) = *(int *)(DAT_14c9eab18 + 8) + 1;
              UNLOCK();
            }
            uStack_98 = &DAT_14c9eaad0;
            local_1b8 = (wchar_t *)CONCAT71(local_1b8._1_7_,2);
            FUN_140068f1a(puVar15,&local_b7,&local_a8,1);
            *puVar15 = &PTR_FUN_14a2483d0;
            *(int *)(puVar15 + 0x37) = (int)local_e0;
            *(undefined4 *)((longlong)puVar15 + 0x1bc) = local_140;
            *(undefined4 *)(puVar15 + 0x38) = local_144;
            *(undefined1 *)((longlong)puVar15 + 0x1c4) = local_151;
            *(undefined2 *)((longlong)puVar15 + 0x1c5) = local_ac;
            *(undefined1 *)((longlong)puVar15 + 0x1c7) = local_aa;
            puVar15[0x39] = local_d0;
            puVar15[0x3a] = local_c0;
            puVar15[0x3b] = local_c8;
            puVar15[0x3c] = local_d0;
            puVar15[0x3d] = local_c0;
            puVar15[0x3e] = local_c8;
            puVar15[0x3f] = puVar6;
            puVar15[0x40] = lVar14;
            puVar15[0x41] = local_118;
            puVar15[0x42] = local_d8;
            puVar15[0x43] = local_e8;
            puVar15[0x44] = uVar12;
            puVar15[0x45] = uVar4;
            *(undefined1 *)(puVar15 + 0x46) = 0;
            *(uint *)((longlong)puVar15 + 0x234) = CONCAT31(uStack_af,local_b3._3_1_);
            *(undefined4 *)((longlong)puVar15 + 0x231) = local_b3;
            puVar15[0x47] = local_118;
            puVar15[0x48] = local_d8;
            puVar15[0x49] = local_110;
            *(undefined1 *)(puVar15 + 0x4a) = 0;
            iVar9 = *(int *)(param_2 + 0x170);
            *(uint *)(param_2 + 0x170) = iVar9 + 1U;
            if (*(uint *)(param_2 + 0x174) < iVar9 + 1U) {
              FUN_14470e57a(local_108,iVar9);
            }
            *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar9 * 8) = puVar15;
            *(int *)((longlong)puVar15 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
            FUN_140069100(param_2,puVar15);
            param_1 = local_f0;
            uVar20 = local_f8;
            lVar14 = local_100;
            if (*(int *)((longlong)puVar1 + 0x17c) != local_13c) {
              *(int *)((longlong)puVar1 + 0x17c) = local_13c;
              puVar11 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
              puVar13 = puVar11 + 3;
              if ((undefined8 *)puVar1[1] < puVar13) {
                FUN_140023dd8(puVar1,0x20);
                puVar11 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                puVar13 = puVar11 + 3;
              }
              *puVar1 = (ulonglong)puVar13;
              *(int *)(puVar1 + 0xc) = (int)puVar1[0xc] + 1;
              *(undefined8 **)puVar1[6] = puVar11;
              puVar1[6] = (ulonglong)(puVar11 + 1);
              uVar2 = *(undefined4 *)((longlong)puVar1 + 0x17c);
              puVar11[1] = 0;
              *puVar11 = &PTR_FUN_14a1fb2c0;
              *(undefined4 *)(puVar11 + 2) = uVar2;
            }
            lVar17 = local_120 + 1;
          } while (lVar17 != lVar14);
        }
        break;
      }
      lVar14 = lVar14 + 1;
    } while (*(int *)(param_1 + 0xa8) != lVar14);
  }
  if ((local_70 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar20;
}



// FUNCTION 142cf2f55 FUN_142cf2f55 body=4689 status=ok
// SIG undefined FUN_142cf2f55(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cf2f55(longlong param_1,uint param_2,longlong *param_3)

{
  undefined2 *puVar1;
  int iVar2;
  wchar_t *_Str1;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  int *piVar18;
  undefined1 uVar19;
  int *piVar20;
  undefined1 uVar21;
  undefined8 *puVar22;
  longlong lVar23;
  uint uVar24;
  undefined1 uVar25;
  undefined2 uVar26;
  bool bVar27;
  undefined1 auStack_378 [32];
  wchar_t *local_358;
  wchar_t *local_350;
  ulonglong uStack_348;
  char *local_340;
  code *local_338;
  code *local_330;
  undefined2 *local_328;
  undefined1 *local_320;
  undefined1 *local_318;
  undefined1 *local_310;
  undefined4 local_308;
  undefined *local_300;
  undefined1 local_2ed;
  DWORD local_2ec;
  int *local_2e8;
  undefined8 local_2e0;
  undefined4 local_2d4;
  int local_2d0;
  uint local_2cc;
  int *local_2c8;
  ulonglong local_2c0;
  longlong local_2b8;
  longlong *local_2b0;
  longlong local_2a8;
  longlong local_2a0;
  longlong local_298;
  longlong local_290;
  undefined2 local_288;
  undefined2 uStack_286;
  undefined4 uStack_284;
  undefined4 local_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  uint local_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined8 local_198 [8];
  undefined1 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined4 local_140;
  undefined8 local_138;
  longlong lStack_130;
  longlong local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  int local_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [6];
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined4 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_378;
  uVar14 = (ulonglong)*(ushort *)(param_1 + 0xc);
  local_2e0 = *(undefined8 *)(&DAT_14ca8c1f0 + uVar14 * 8);
  local_2b8 = param_1;
  FUN_1471d2c7e();
  _Str1 = DAT_14c9e98c0;
  puVar22 = &DAT_14ca98540;
  do {
    puVar22 = (undefined8 *)*puVar22;
    if (puVar22 == (undefined8 *)0x0) {
      lVar23 = 0;
      break;
    }
    lVar23 = puVar22[2];
    iVar5 = wcscmp(_Str1,*(wchar_t **)(lVar23 + 0x18));
  } while (iVar5 != 0);
  if (*(int *)(lVar23 + 8) != 0) {
    lVar23 = 0;
  }
  if (0 < *(int *)(lVar23 + 0x50)) {
    local_2cc = param_2 & 0x7fffffff;
    piVar18 = &DAT_14ca814b8 + uVar14 * 0xf;
    piVar20 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    uVar24 = 0;
    uVar9 = local_2e0;
    local_2e8 = piVar20;
    local_2c8 = piVar18;
    local_2c0 = uVar14;
    local_2b0 = param_3;
    do {
      uVar26 = (undefined2)uVar14;
      local_280 = 0;
      uStack_27c = (undefined4)*(undefined8 *)(lVar23 + 0x20);
      uStack_278 = (undefined4)((ulonglong)*(undefined8 *)(lVar23 + 0x20) >> 0x20);
      local_288 = uVar26;
      uStack_284 = uVar24;
      cVar4 = FUN_144a21736(lVar23,&local_288);
      if (cVar4 != '\0') {
        local_280 = 0;
        uStack_27c = (undefined4)*(undefined8 *)(lVar23 + 0x20);
        uStack_278 = (undefined4)((ulonglong)*(undefined8 *)(lVar23 + 0x20) >> 0x20);
        if ((((*piVar18 != 1) ||
             ((local_288 = uVar26, uStack_284 = uVar24, *(byte *)(lVar23 + 0x48) < 6 &&
              ((0x29U >> (*(byte *)(lVar23 + 0x48) & 0x1f) & 1) != 0)))) &&
            (local_288 = uVar26, uStack_284 = uVar24,
            cVar4 = (**(code **)(lVar23 + 0x70))(&local_288), cVar4 == '\0')) &&
           (FUN_1448e935e(uVar9,&local_2a8,lVar23,uVar24), local_2a8 != 0)) {
          lVar8 = *(longlong *)
                   (*(longlong *)(*(longlong *)(local_2a0 + 8) + 0x50) +
                   (longlong)*(int *)(local_2a8 + 0xd4) * 8);
          if (lVar8 == 0) {
            lVar8 = FUN_1400bafc2(*(longlong *)(local_2a0 + 8),(longlong)*(int *)(local_2a8 + 0xd4),
                                  0);
          }
          lVar10 = DAT_14ca97170;
          if (lVar8 != 0) {
            iVar5 = *piVar20;
            if (((iVar5 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar5 == 2)) {
              uVar14 = 0;
            }
            else if (iVar5 == 1) {
              DVar6 = FUN_140ad26c0();
              DVar7 = GetCurrentThreadId();
              uVar14 = (ulonglong)(DVar6 != DVar7);
            }
            else {
              uVar14 = 1;
            }
            lVar15 = DAT_14ca97170;
            iVar5 = *(int *)(lVar10 + uVar14 * 4);
            if (iVar5 < 1) {
              uVar17 = 9;
            }
            else {
              uVar17 = uVar24 / 0x1800 & 3;
            }
            local_e8 = 0;
            local_f8 = 0;
            uStack_f0 = 0;
            local_108 = 0;
            uStack_100 = 0;
            local_118 = 0;
            uStack_110 = 0;
            local_128 = 0;
            uStack_120 = 0;
            local_138 = 0;
            lStack_130 = 0;
            uStack_9c = 0;
            uStack_98 = 0;
            uStack_97 = 0;
            uStack_90 = 0;
            uStack_ac = 0;
            uStack_a8 = 0;
            uStack_a4 = 0;
            uStack_a0 = 0;
            local_bc = 0;
            uStack_b8 = 0;
            uStack_b4 = 0;
            uStack_b0 = 0;
            local_cc = 0;
            uStack_c8 = 0;
            uStack_c4 = 0;
            uStack_c0 = 0;
            local_dc = 0;
            uStack_d8 = 0;
            uStack_d4 = 0;
            uStack_d0 = 0;
            _local_78 = 0;
            local_88 = 0;
            uStack_80 = 0;
            local_70 = 1;
            local_68 = 0;
            local_1a0 = 0;
            local_1a8 = 0;
            uStack_1a4 = 0;
            local_198[6] = 0;
            local_198[7] = 0;
            local_198[4] = 0;
            local_198[5] = 0;
            local_198[2] = 0;
            local_198[3] = 0;
            local_198[0] = 0;
            local_198[1] = 0;
            local_158 = 0;
            local_150 = 0;
            uStack_148 = 0;
            local_140 = 1;
            if (((ulonglong)uVar24 / 0xc0 & 1) == 0) {
              local_e0 = 0;
              iVar2 = *piVar20;
              if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
                uVar14 = 0;
              }
              else if (iVar2 == 1) {
                local_2ec = FUN_140ad26c0();
                DVar6 = GetCurrentThreadId();
                uVar14 = (ulonglong)(local_2ec != DVar6);
              }
              else {
                uVar14 = 1;
              }
              lVar10 = DAT_14ca971d0;
              uVar9 = DAT_14c9c0ee8;
              if (0 < *(int *)(lVar15 + uVar14 * 4)) {
                iVar2 = *piVar20;
                if (iVar2 == 0x40000002) {
                  uVar14 = 0;
                }
                else {
                  bVar27 = true;
                  if ((DAT_14c86a9f8 == '\x01') && (iVar2 != 2)) {
                    if (iVar2 == 1) {
                      DVar6 = FUN_140ad26c0();
                      DVar7 = GetCurrentThreadId();
                      bVar27 = DVar6 == DVar7;
                    }
                    else {
                      bVar27 = false;
                    }
                  }
                  uVar14 = (ulonglong)(bVar27 ^ 1);
                }
                puVar13 = &DAT_14c9c0ed8;
                if (0 < *(int *)(lVar10 + uVar14 * 4)) {
                  puVar13 = &DAT_14c9c0ec0;
                }
                uVar9 = *(undefined8 *)(puVar13 + 0x10);
                piVar20 = local_2e8;
              }
              local_108 = uVar9;
              if ((uVar24 / 3) * 3 == uVar24) {
                local_78 = (undefined1  [6])CONCAT15(0,local_78._0_5_);
                uStack_100 = DAT_14c9c0db0;
                local_f8 = DAT_14c9c0d98;
                local_138 = DAT_14ca94df8;
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14c9e9700) &&
                   (FUN_144b3d300(&DAT_14c9e9700), DAT_14c9e9700 == -1)) {
                  if ((*(int *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x110) < DAT_14c9eba78) &&
                     (FUN_144b3d300(&DAT_14c9eba78), DAT_14c9eba78 == -1)) {
                    FUN_145d4bcae(&local_288);
                    local_310 = (undefined1 *)((ulonglong)local_310 & 0xffffffffffffff00);
                    local_320 = (undefined1 *)((ulonglong)local_320 & 0xffffffffffffff00);
                    local_340 = "Unknown";
                    local_350 = (wchar_t *)0x0;
                    uStack_348 = 0;
                    local_358 = L"FParameters";
                    local_318 = (undefined1 *)0x0;
                    local_330 = (code *)CONCAT44(local_330._4_4_,0xa0);
                    local_338 = (code *)CONCAT44(local_338._4_4_,0x133);
                    local_328 = &local_288;
                    FUN_140b49562(&DAT_14c9eb9f8,0,1);
                    if (CONCAT44(uStack_284,CONCAT22(uStack_286,local_288)) != 0) {
                      FUN_1400020a8();
                    }
                    atexit((_func_5014 *)&LAB_142cf487d);
                    _Init_thread_footer(&DAT_14c9eba78);
                  }
                  FUN_145d4bb64();
                  local_300 = &DAT_14c9eb9f8;
                  local_310 = &LAB_14712ac08;
                  local_318 = &LAB_14712ac0c;
                  local_320 = &LAB_1471d2aa4;
                  local_328 = (undefined2 *)&LAB_1471d2aa8;
                  local_330 = FUN_1471d2ae4;
                  local_338 = FUN_1471d2b3e;
                  local_350 = L"VertexMain";
                  local_358 = L"/Engine/Private/DeferredLightVertexShaders.usf";
                  local_308 = 0xe0;
                  local_340 = (char *)CONCAT44(local_340._4_4_,2);
                  uStack_348 = uStack_348 & 0xffffffff00000000;
                  FUN_140db5666(&DAT_14c9e9658,0,&DAT_14c9e95f0,L"FDeferredLightVS");
                  _DAT_14c9e9658 = FGlobalShaderType::vftable;
                  atexit((_func_5014 *)&LAB_142ce867a);
                  _Init_thread_footer(&DAT_14c9e9700);
                  piVar20 = local_2e8;
                }
                uVar9 = local_2e0;
                FUN_1448e935e(local_2e0,&local_298,&DAT_14c9e9658,0);
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14c9e9700) &&
                   (FUN_144b3d300(&DAT_14c9e9700), DAT_14c9e9700 == -1)) {
                  if ((*(int *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x110) < DAT_14c9eba78) &&
                     (FUN_144b3d300(&DAT_14c9eba78), DAT_14c9eba78 == -1)) {
                    FUN_145d4bcae(&local_288);
                    local_310 = (undefined1 *)((ulonglong)local_310 & 0xffffffffffffff00);
                    local_320 = (undefined1 *)((ulonglong)local_320 & 0xffffffffffffff00);
                    local_340 = "Unknown";
                    local_350 = (wchar_t *)0x0;
                    uStack_348 = 0;
                    local_358 = L"FParameters";
                    local_318 = (undefined1 *)0x0;
                    local_330 = (code *)CONCAT44(local_330._4_4_,0xa0);
                    local_338 = (code *)CONCAT44(local_338._4_4_,0x133);
                    local_328 = &local_288;
                    FUN_140b49562(&DAT_14c9eb9f8,0,1);
                    if (CONCAT44(uStack_284,CONCAT22(uStack_286,local_288)) != 0) {
                      FUN_1400020a8();
                    }
                    atexit((_func_5014 *)&LAB_142cf487d);
                    _Init_thread_footer(&DAT_14c9eba78);
                  }
                  FUN_145d4bb64();
                  local_300 = &DAT_14c9eb9f8;
                  local_310 = &LAB_14712ac08;
                  local_318 = &LAB_14712ac0c;
                  local_320 = &LAB_1471d2aa4;
                  local_328 = (undefined2 *)&LAB_1471d2aa8;
                  local_330 = FUN_1471d2ae4;
                  local_338 = FUN_1471d2b3e;
                  local_350 = L"VertexMain";
                  local_358 = L"/Engine/Private/DeferredLightVertexShaders.usf";
                  local_308 = 0xe0;
                  local_340 = (char *)CONCAT44(local_340._4_4_,2);
                  uStack_348 = uStack_348 & 0xffffffff00000000;
                  FUN_140db5666(&DAT_14c9e9658,0,&DAT_14c9e95f0,L"FDeferredLightVS");
                  _DAT_14c9e9658 = FGlobalShaderType::vftable;
                  atexit((_func_5014 *)&LAB_142ce867a);
                  _Init_thread_footer(&DAT_14c9e9700);
                  piVar20 = local_2e8;
                  uVar9 = local_2e0;
                }
                lVar15 = local_290;
                lVar10 = local_298;
                uVar11 = FUN_1415d23c0();
                FUN_1448e935e(uVar9,&local_288,uVar11,2);
                FUN_1415d23c0();
                if (iVar5 < 1) {
                  if (lVar10 != 0) {
                    lVar15 = *(longlong *)(lVar15 + 8);
                    iVar5 = *(int *)(lVar10 + 0xd4);
                    goto LAB_142cf33b1;
                  }
                }
                else {
                  lVar10 = CONCAT44(uStack_284,CONCAT22(uStack_286,local_288));
                  if (lVar10 != 0) {
                    lVar15 = CONCAT44(uStack_27c,local_280);
                    goto LAB_142cf33a6;
                  }
                }
LAB_142cf361a:
                lVar10 = 0;
              }
              else {
                local_78 = (undefined1  [6])
                           CONCAT15(DAT_14c760470 != 0 & DAT_14ca84e1e,local_78._0_5_);
                uStack_100 = DAT_14c9c0df8;
                if ((0x20fU >> uVar17 & 1) != 0) {
                  local_f8 = *(undefined8 *)(&PTR_DAT_14a2491e8)[uVar17];
                }
                local_138 = DAT_14ca968c0;
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14c9e9700) &&
                   (FUN_144b3d300(&DAT_14c9e9700), DAT_14c9e9700 == -1)) {
                  if ((*(int *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x110) < DAT_14c9eba78) &&
                     (FUN_144b3d300(&DAT_14c9eba78), DAT_14c9eba78 == -1)) {
                    FUN_145d4bcae(&local_288);
                    local_310 = (undefined1 *)((ulonglong)local_310 & 0xffffffffffffff00);
                    local_320 = (undefined1 *)((ulonglong)local_320 & 0xffffffffffffff00);
                    local_340 = "Unknown";
                    local_350 = (wchar_t *)0x0;
                    uStack_348 = 0;
                    local_358 = L"FParameters";
                    local_318 = (undefined1 *)0x0;
                    local_330 = (code *)CONCAT44(local_330._4_4_,0xa0);
                    local_338 = (code *)CONCAT44(local_338._4_4_,0x133);
                    local_328 = &local_288;
                    FUN_140b49562(&DAT_14c9eb9f8,0,1);
                    if (CONCAT44(uStack_284,CONCAT22(uStack_286,local_288)) != 0) {
                      FUN_1400020a8();
                    }
                    atexit((_func_5014 *)&LAB_142cf487d);
                    _Init_thread_footer(&DAT_14c9eba78);
                  }
                  FUN_145d4bb64();
                  local_300 = &DAT_14c9eb9f8;
                  local_310 = &LAB_14712ac08;
                  local_318 = &LAB_14712ac0c;
                  local_320 = &LAB_1471d2aa4;
                  local_328 = (undefined2 *)&LAB_1471d2aa8;
                  local_330 = FUN_1471d2ae4;
                  local_338 = FUN_1471d2b3e;
                  local_350 = L"VertexMain";
                  local_358 = L"/Engine/Private/DeferredLightVertexShaders.usf";
                  local_308 = 0xe0;
                  local_340 = (char *)CONCAT44(local_340._4_4_,2);
                  uStack_348 = uStack_348 & 0xffffffff00000000;
                  FUN_140db5666(&DAT_14c9e9658,0,&DAT_14c9e95f0,L"FDeferredLightVS");
                  _DAT_14c9e9658 = FGlobalShaderType::vftable;
                  atexit((_func_5014 *)&LAB_142ce867a);
                  _Init_thread_footer(&DAT_14c9e9700);
                  piVar20 = local_2e8;
                }
                FUN_1448e935e(local_2e0,&local_298,&DAT_14c9e9658,1);
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14c9e9700) &&
                   (FUN_144b3d300(&DAT_14c9e9700), DAT_14c9e9700 == -1)) {
                  if ((*(int *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x110) < DAT_14c9eba78) &&
                     (FUN_144b3d300(&DAT_14c9eba78), DAT_14c9eba78 == -1)) {
                    FUN_145d4bcae(&local_288);
                    local_310 = (undefined1 *)((ulonglong)local_310 & 0xffffffffffffff00);
                    local_320 = (undefined1 *)((ulonglong)local_320 & 0xffffffffffffff00);
                    local_340 = "Unknown";
                    local_350 = (wchar_t *)0x0;
                    uStack_348 = 0;
                    local_358 = L"FParameters";
                    local_318 = (undefined1 *)0x0;
                    local_330 = (code *)CONCAT44(local_330._4_4_,0xa0);
                    local_338 = (code *)CONCAT44(local_338._4_4_,0x133);
                    local_328 = &local_288;
                    FUN_140b49562(&DAT_14c9eb9f8,0,1);
                    if (CONCAT44(uStack_284,CONCAT22(uStack_286,local_288)) != 0) {
                      FUN_1400020a8();
                    }
                    atexit((_func_5014 *)&LAB_142cf487d);
                    _Init_thread_footer(&DAT_14c9eba78);
                  }
                  FUN_145d4bb64();
                  local_300 = &DAT_14c9eb9f8;
                  local_310 = &LAB_14712ac08;
                  local_318 = &LAB_14712ac0c;
                  local_320 = &LAB_1471d2aa4;
                  local_328 = (undefined2 *)&LAB_1471d2aa8;
                  local_330 = FUN_1471d2ae4;
                  local_338 = FUN_1471d2b3e;
                  local_350 = L"VertexMain";
                  local_358 = L"/Engine/Private/DeferredLightVertexShaders.usf";
                  local_308 = 0xe0;
                  local_340 = (char *)CONCAT44(local_340._4_4_,2);
                  uStack_348 = uStack_348 & 0xffffffff00000000;
                  FUN_140db5666(&DAT_14c9e9658,0,&DAT_14c9e95f0,L"FDeferredLightVS");
                  _DAT_14c9e9658 = FGlobalShaderType::vftable;
                  atexit((_func_5014 *)&LAB_142ce867a);
                  _Init_thread_footer(&DAT_14c9e9700);
                  piVar20 = local_2e8;
                }
                lVar10 = local_298;
                lVar15 = local_290;
                if (local_298 == 0) goto LAB_142cf361a;
LAB_142cf33a6:
                lVar15 = *(longlong *)(lVar15 + 8);
                iVar5 = *(int *)(lVar10 + 0xd4);
LAB_142cf33b1:
                lVar10 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + (longlong)iVar5 * 8);
                if (lVar10 == 0) {
                  lVar10 = FUN_1400bafc2(lVar15,(longlong)iVar5,1);
                }
              }
              lVar15 = DAT_14ca97170;
              uVar9 = *(undefined8 *)(local_2b8 + 0x30);
              lStack_130 = lVar10;
              local_128 = lVar8;
              *(undefined1 *)((longlong)&uStack_1a4 + (ulonglong)local_1a8) =
                   *(undefined1 *)(local_2b8 + 0x2c);
              local_198[local_1a8] = uVar9;
              local_2d0 = local_1a8 + 1;
              iVar5 = *piVar20;
              local_1a8 = local_2d0;
              if (((iVar5 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar5 == 2)) {
                uVar14 = 0;
              }
              else if (iVar5 == 1) {
                DVar6 = FUN_140ad26c0();
                DVar7 = GetCurrentThreadId();
                uVar14 = (ulonglong)(DVar6 != DVar7);
              }
              else {
                uVar14 = 1;
              }
              lVar8 = DAT_14ca971d0;
              if (0 < *(int *)(lVar15 + uVar14 * 4)) {
                iVar5 = *piVar20;
                if (iVar5 == 0x40000002) {
                  uVar12 = 0;
                }
                else {
                  bVar27 = true;
                  if ((DAT_14c86a9f8 == '\x01') && (iVar5 != 2)) {
                    if (iVar5 == 1) {
                      DVar6 = FUN_140ad26c0();
                      DVar7 = GetCurrentThreadId();
                      bVar27 = DVar6 == DVar7;
                    }
                    else {
                      bVar27 = false;
                    }
                  }
                  uVar12 = (ulonglong)(bVar27 ^ 1);
                }
                uVar14 = local_2c0;
                piVar18 = local_2c8;
                uVar9 = local_2e0;
                piVar20 = local_2e8;
                if ((0 < *(int *)(lVar8 + uVar12 * 4)) &&
                   (cVar4 = FUN_144b1cdc5(local_2c0 & 0xffffffff), cVar4 != '\0'))
                goto LAB_142cf30e0;
              }
              local_150 = *(undefined8 *)(local_2b8 + 0x38);
              local_158 = 0xb;
              local_2ed = ((uint)local_150 >> 0xc & 1) == 0;
              uStack_148 = CONCAT62(0x210001,CONCAT11(local_2ed,1));
              uStack_148 = CONCAT44(0x21,CONCAT13(local_2ed,(undefined3)uStack_148));
              local_2ec = CONCAT31(local_2ec._1_3_,0xb);
              local_2d4 = 0x21;
              uVar17 = local_2d0;
              uVar19 = 1;
              uVar25 = 1;
              uVar21 = local_2ed;
            }
            else {
              local_108 = DAT_14c9d57e8;
              local_e0 = 0;
              local_138 = DAT_14ca968c0;
              _local_78 = 0;
              uStack_100 = DAT_14c9c0db0;
              local_f8 = DAT_14c9c0d98;
              uStack_1a4 = 0x1a;
              local_198[0] = 0x20009;
              local_1a8 = 1;
              FUN_1415a8118();
              FUN_1448e935e(local_2e0,&local_288,&DAT_14c9e9780,0);
              FUN_1415a8118();
              lVar10 = CONCAT44(uStack_284,CONCAT22(uStack_286,local_288));
              if (lVar10 == 0) {
                lVar10 = 0;
              }
              else {
                lVar15 = *(longlong *)(CONCAT44(uStack_27c,local_280) + 8);
                lVar16 = (longlong)*(int *)(lVar10 + 0xd4);
                lVar10 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
                if (lVar10 == 0) {
                  lVar10 = FUN_1400bafc2(lVar15,lVar16,1);
                }
              }
              local_2ec = CONCAT31(local_2ec._1_3_,local_158);
              local_2ed = uStack_148._1_1_;
              local_2d4 = uStack_148._4_4_;
              uVar17 = local_1a8;
              uVar19 = (undefined1)uStack_148;
              uVar25 = uStack_148._2_1_;
              uVar21 = uStack_148._3_1_;
              lStack_130 = lVar10;
              local_128 = lVar8;
            }
            uVar9 = local_150;
            local_68 = (**(code **)(*DAT_14ca83900 + 0x2f8))(DAT_14ca83900,&local_138);
            uStack_d8 = uStack_1a4;
            uStack_d4 = local_1a0;
            uStack_a0 = (undefined4)local_198[6];
            uStack_9c = (undefined4)((ulonglong)local_198[6] >> 0x20);
            uStack_98 = (undefined1)local_198[7];
            uStack_97 = (undefined7)((ulonglong)local_198[7] >> 8);
            uStack_b0 = (undefined4)local_198[4];
            uStack_ac = (undefined4)((ulonglong)local_198[4] >> 0x20);
            uStack_a8 = (undefined4)local_198[5];
            uStack_a4 = (undefined4)((ulonglong)local_198[5] >> 0x20);
            uStack_c0 = (undefined4)local_198[2];
            local_bc = (undefined4)((ulonglong)local_198[2] >> 0x20);
            uStack_b8 = (undefined4)local_198[3];
            uStack_b4 = (undefined4)((ulonglong)local_198[3] >> 0x20);
            uStack_d0 = (undefined4)local_198[0];
            local_cc = (undefined4)((ulonglong)local_198[0] >> 0x20);
            uStack_c8 = (undefined4)local_198[1];
            uStack_c4 = (undefined4)((ulonglong)local_198[1] >> 0x20);
            _local_78 = CONCAT62(stack0xffffffffffffff8a,(undefined2)local_140);
            uStack_90 = (undefined1)local_2ec;
            uStack_80 = CONCAT44(local_2d4,
                                 CONCAT13(uVar21,CONCAT12(uVar25,CONCAT11(local_2ed,uVar19))));
            _local_78 = CONCAT17(local_140._3_1_,CONCAT16(local_140._2_1_,local_78));
            local_dc = uVar17;
            local_88 = uVar9;
            memcpy((void *)((longlong)&uStack_284 + 2),&local_138,0xd8);
            plVar3 = local_2b0;
            iVar5 = (int)local_2b0[1];
            *(uint *)(local_2b0 + 1) = iVar5 + 1U;
            if (*(uint *)((longlong)local_2b0 + 0xc) < iVar5 + 1U) {
              FUN_14069191a(local_2b0,iVar5);
            }
            puVar1 = (undefined2 *)(*plVar3 + (longlong)iVar5 * 0x130);
            *puVar1 = 0x100;
            memcpy(puVar1 + 1,&local_288,0xde);
            *(undefined8 *)(puVar1 + 0x88) = 0;
            *(undefined8 *)(puVar1 + 0x8c) = 0x300000000;
            *(uint *)(puVar1 + 0x90) = local_2cc;
            *(undefined8 *)(puVar1 + 0x94) = 0;
            piVar18 = local_2c8;
            piVar20 = local_2e8;
            uVar9 = local_2e0;
            uVar14 = local_2c0;
          }
        }
      }
LAB_142cf30e0:
      uVar24 = uVar24 + 1;
    } while ((int)uVar24 < *(int *)(lVar23 + 0x50));
  }
  if ((local_60 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142cf422c FUN_142cf422c body=105 status=ok
// SIG undefined FUN_142cf422c(void)

longlong FUN_142cf422c(longlong param_1,int param_2)

{
  longlong lVar1;
  int *piVar2;
  
  if (param_1 != 0 && param_2 != 0) {
    piVar2 = (int *)((param_1 + -8) - (ulonglong)*(uint *)(param_1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
      }
      else {
        FUN_144705e74(piVar2);
      }
    }
  }
  return param_1;
}



// FUNCTION 142cf42ba FUN_142cf42ba body=935 status=ok
// SIG undefined FUN_142cf42ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cf42ba(char *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  longlong *plVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  
  if (*param_1 == '\0') {
    *param_1 = '\x01';
    lVar12 = *(longlong *)(param_1 + 8);
    bVar1 = param_1[0x14];
    lVar4 = *(longlong *)(lVar12 + 0x4bd0 + (ulonglong)bVar1 * 0x390);
    if (lVar4 != 0) {
      uVar8 = 0xff;
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60) == 0x10) {
        uVar8 = DAT_14c7585d4;
      }
      FUN_1447832fa(lVar4,uVar8);
    }
    if (*(longlong *)(param_1 + 0x18) == 0) {
      lVar12 = (ulonglong)bVar1 * 0x390 + lVar12;
      lVar4 = (**(code **)(**(longlong **)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x40) +
                          0x3e0))();
      if ((longlong)*(int *)(lVar12 + 0x48c0) == 0) {
        iVar3 = 0;
      }
      else {
        plVar7 = *(longlong **)(lVar12 + 0x48b8);
        lVar11 = (longlong)*(int *)(lVar12 + 0x48c0) * 0x48;
        iVar3 = 0;
        do {
          if ((((*(byte *)(plVar7 + 8) & 4) != 0 && (*(byte *)(plVar7 + 7) & 2) == 0) &&
              ((~*(uint *)(plVar7 + 3) & 0x7fffffff) != 0)) && ((int)plVar7[6] == 0)) {
            lVar14 = 0xf4;
            plVar13 = plVar7;
            if ((*(byte *)(plVar7 + 8) & 0x20) != 0) {
              plVar13 = (longlong *)
                        ((longlong)*(int *)((longlong)plVar7 + 0x14) * 8 +
                        *(longlong *)(lVar4 + 0x3330));
              lVar14 = 0x208;
            }
            iVar3 = iVar3 + *(int *)(*plVar13 + lVar14);
          }
          plVar7 = plVar7 + 9;
          lVar11 = lVar11 + -0x48;
        } while (lVar11 != 0);
      }
      *(int *)(param_1 + 0x28) = iVar3;
      uVar10 = iVar3 + 0x3fU;
      if ((int)(iVar3 + 0x3fU) < 0) {
        uVar10 = iVar3 + 0x7eU;
      }
      iVar6 = (int)uVar10 >> 6;
      *(int *)(param_1 + 0x30) = iVar6;
      *(undefined1 **)(param_1 + 0x34) = &DAT_100000001;
      if (iVar6 <= DAT_14ca84f24) {
        *(int *)(param_1 + 0x2c) = iVar6 << 6;
        if (0x7e < iVar3 + 0x7eU) {
          if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x13bb0) == 0) {
            uVar10 = 0;
          }
          else {
            uVar10 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x13bb0) + 0x3a0);
          }
          FUN_14017c08a(param_1 + 0x40,iVar6 << 6,1);
          piVar5 = *(int **)(param_1 + 0x40);
          if ((longlong)*(int *)(lVar12 + 0x48c0) != 0) {
            plVar13 = *(longlong **)(lVar12 + 0x48b8);
            plVar7 = plVar13 + (longlong)*(int *)(lVar12 + 0x48c0) * 9;
            do {
              if ((((*(byte *)(plVar13 + 8) & 4) != 0 && (*(byte *)(plVar13 + 7) & 2) == 0) &&
                  (uVar2 = *(uint *)(plVar13 + 3), (~uVar2 & 0x7fffffff) != 0)) &&
                 ((int)plVar13[6] == 0)) {
                lVar12 = 0xf4;
                plVar15 = plVar13;
                if ((*(byte *)(plVar13 + 8) & 0x20) != 0) {
                  plVar15 = (longlong *)
                            ((longlong)*(int *)((longlong)plVar13 + 0x14) * 8 +
                            *(longlong *)(lVar4 + 0x3330));
                  lVar12 = 0x208;
                }
                iVar3 = *(int *)(*plVar15 + lVar12);
                if (iVar3 != 0) {
                  iVar6 = ((int)uVar2 >> 0x1f & uVar10) + ((int)(uVar2 * 2) >> 1);
                  do {
                    *piVar5 = iVar6;
                    piVar5 = piVar5 + 1;
                    iVar6 = iVar6 + 1;
                    iVar3 = iVar3 + -1;
                  } while (iVar3 != 0);
                }
              }
              plVar13 = plVar13 + 9;
            } while (plVar13 != plVar7);
          }
          for (iVar3 = *(int *)(param_1 + 0x28); iVar3 < *(int *)(param_1 + 0x2c); iVar3 = iVar3 + 1
              ) {
            *piVar5 = 0;
            piVar5 = piVar5 + 1;
          }
          param_1[1] = '\x01';
        }
      }
    }
    else {
      lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x118);
      *(longlong *)(param_1 + 0x20) = lVar12;
      param_1[1] = lVar12 != 0;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c9e9e38) && (FUN_144b3d300(&DAT_14c9e9e38), DAT_14c9e9e38 == -1))
      {
        _DAT_14c9e9e20 = 0;
        uRam000000014c9e9e28 = 0;
        DAT_14c9e9e10 = 0;
        uRam000000014c9e9e18 = 0;
        DAT_14c9e9e00 = 0;
        _DAT_14c9e9e08 = 0;
        _DAT_14c9e9e30 = 0;
        atexit(FUN_142cf4661);
        _Init_thread_footer(&DAT_14c9e9e38);
      }
      if (param_1[1] == '\0') {
        *(undefined8 **)(param_1 + 0x20) = &DAT_14c9e9e00;
      }
      param_1[0x2c] = '@';
      param_1[0x2d] = '\0';
      param_1[0x2e] = '\0';
      param_1[0x2f] = '\0';
      FUN_1402d2c96(param_1 + 0x40,0x40,1);
      plVar7 = *(longlong **)(param_1 + 0x20);
      uVar10 = *(uint *)((longlong)plVar7 + 0x24);
      if (uVar10 != 0) {
        iVar3 = *(int *)((longlong)plVar7 + 0x2c);
        iVar6 = (int)plVar7[1];
        *(uint *)(plVar7 + 1) = iVar6 + 1U;
        if (*(uint *)((longlong)plVar7 + 0xc) < iVar6 + 1U) {
          FUN_144757b64(plVar7,iVar6);
        }
        *(uint *)(*plVar7 + (longlong)iVar6 * 4) = uVar10 & 0x7f | iVar3 << 7;
        *(undefined4 *)((longlong)plVar7 + 0x24) = 0;
        plVar7 = *(longlong **)(param_1 + 0x20);
      }
      iVar3 = (int)plVar7[1];
      iVar6 = 1;
      if (DAT_14ca84f24 < iVar3) {
        iVar9 = iVar3 + 0xfe;
        if (-1 < iVar3 + 0x7f) {
          iVar9 = iVar3 + 0x7f;
        }
        iVar9 = iVar9 >> 7;
        iVar3 = 0x80;
      }
      else {
        iVar9 = 1;
      }
      if (DAT_14ca84f28 < iVar9) {
        iVar6 = iVar9 + 0xfe;
        if (-1 < iVar9 + 0x7f) {
          iVar6 = iVar9 + 0x7f;
        }
        iVar6 = iVar6 >> 7;
        iVar9 = 0x80;
      }
      *(int *)(param_1 + 0x2c) = iVar3 * iVar9 * iVar6 * 0x40;
    }
  }
  return;
}



// FUNCTION 142cf4661 FUN_142cf4661 body=48 status=ok
// SIG undefined FUN_142cf4661(void)

void FUN_142cf4661(void)

{
  if (DAT_14c9e9e10 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c9e9e00 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142cf4692 FUN_142cf4692 body=29 status=ok
// SIG undefined FUN_142cf4692(void)

undefined8 FUN_142cf4692(longlong *param_1)

{
  FUN_142cf42ba(*param_1);
  return *(undefined8 *)(*param_1 + 0x20);
}



// FUNCTION 142cf46b0 FUN_142cf46b0 body=24 status=ok
// SIG undefined FUN_142cf46b0(void)

longlong FUN_142cf46b0(longlong param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a246020;
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 8);
  return param_2 + 0x18;
}



// FUNCTION 142cf46ce FUN_142cf46ce body=12 status=ok
// SIG undefined FUN_142cf46ce(void)

void FUN_142cf46ce(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf46d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142cf46da FUN_142cf46da body=29 status=ok
// SIG undefined FUN_142cf46da(void)

undefined8 FUN_142cf46da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cf46f8 FUN_142cf46f8 body=33 status=ok
// SIG undefined FUN_142cf46f8(void)

longlong FUN_142cf46f8(longlong *param_1)

{
  FUN_142cf42ba(*param_1);
  return *(longlong *)(*param_1 + 0x20) + 0x10;
}



// FUNCTION 142cf471a FUN_142cf471a body=24 status=ok
// SIG undefined FUN_142cf471a(void)

longlong FUN_142cf471a(longlong param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a2460a0;
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 8);
  return param_2 + 0x18;
}



// FUNCTION 142cf4738 FUN_142cf4738 body=12 status=ok
// SIG undefined FUN_142cf4738(void)

void FUN_142cf4738(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4741. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142cf4744 FUN_142cf4744 body=29 status=ok
// SIG undefined FUN_142cf4744(void)

undefined8 FUN_142cf4744(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cf4791 FUN_142cf4791 body=188 status=ok
// SIG undefined FUN_142cf4791(void)

void FUN_142cf4791(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
  fVar5 = DAT_14c846338;
  fVar6 = DAT_14c846330._4_4_;
  fVar7 = (float)DAT_14c846330;
  if (1e-08 < fVar4) {
    fVar7 = 1.0 / fVar4;
    fVar5 = fVar3 * fVar7;
    fVar6 = fVar2 * fVar7;
    fVar7 = fVar1 * fVar7;
  }
  *param_1 = fVar4 / 1023.0;
  param_1[1] = (float)(((uint)(longlong)(fVar5 * 1023.0) & 0x3ff) << 0x14 |
                      ((uint)(longlong)(fVar6 * 1023.0) & 0x3ff) << 10 |
                      (uint)(longlong)(fVar7 * 1023.0) & 0x3ff);
  return;
}



// FUNCTION 142cf48d2 FUN_142cf48d2 body=899 status=ok
// SIG undefined FUN_142cf48d2(void)

void FUN_142cf48d2(undefined8 *param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  undefined1 local_e0 [16];
  char *local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined1 *local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined1 local_89;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((*(int *)(DAT_14c9e9438 + 4) == 0) || ((*(byte *)*param_1 & 3) == 0)) {
    local_78 = (undefined1  [16])0x0;
    local_88 = (undefined1  [16])0x0;
    local_68 = 0;
    local_60 = 1;
    local_58 = 1;
    FUN_1401a4871(param_1[1],param_2);
  }
  else {
    uVar3 = param_1[2];
    lVar4 = param_1[1];
    puVar1 = (ulonglong *)(lVar4 + 0x70);
    puVar9 = (undefined8 *)(*(longlong *)(lVar4 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar7 = puVar9 + 0x22;
    if (*(undefined8 **)(lVar4 + 0x78) < puVar7) {
      FUN_140023dd8(puVar1,0x120);
      puVar9 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar7 = puVar9 + 0x22;
    }
    *puVar1 = (ulonglong)puVar7;
    *puVar9 = &PTR_FUN_14a1fbd30;
    lVar6 = 0x22;
    do {
      *(undefined1 (*) [16])((longlong)puVar9 + lVar6 + -0x12) = (undefined1  [16])0x0;
      *(undefined4 *)((longlong)puVar9 + lVar6 + -2) = 0xffff0000;
      lVar6 = lVar6 + 0x18;
    } while (lVar6 != 0xe2);
    *(undefined4 *)((longlong)puVar9 + 0xe4) = 0;
    *(undefined1 (*) [16])(puVar9 + 0x1a) = (undefined1  [16])0x0;
    *(undefined2 *)(puVar9 + 0x1c) = 0;
    *(undefined4 *)(puVar9 + 0x1d) = 0xffffffff;
    *(undefined4 *)((longlong)puVar9 + 0xec) = 0xffffffff;
    *(undefined4 *)(puVar9 + 0x1e) = 0xffffffff;
    *(undefined4 *)((longlong)puVar9 + 0xf4) = 0xffffffff;
    *(undefined4 *)(puVar9 + 0x1f) = 0;
    *(undefined2 *)((longlong)puVar9 + 0xfc) = 0;
    puVar9[0x20] = 0;
    iVar2 = *(int *)(lVar4 + 0xa0);
    *(uint *)(lVar4 + 0xa0) = iVar2 + 1U;
    if (*(uint *)(lVar4 + 0xa4) < iVar2 + 1U) {
      FUN_1448cfae8((longlong *)(lVar4 + 0x98),iVar2);
    }
    *(undefined8 **)(*(longlong *)(lVar4 + 0x98) + (longlong)iVar2 * 8) = puVar9;
    puVar9[2] = param_2;
    puVar9[3] = 0;
    *(undefined4 *)(puVar9 + 4) = 0xffff0000;
    lVar4 = param_1[1];
    uVar5 = param_1[3];
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c9c1080) {
      FUN_144b3d300(&DAT_14c9c1080);
      if (DAT_14c9c1080 == -1) {
        FUN_145fddb1e(local_88);
        local_a0 = 0;
        local_b0 = 0;
        local_d0 = "Unknown";
        local_e0 = (undefined1  [16])0x0;
        local_e8 = L"FRenderTargetParameters";
        local_a8 = 0;
        local_c0 = 0x100;
        local_c8 = 0x7af;
        local_b8 = local_88;
        FUN_140b49562(&DAT_14c9c1000,0,1);
        if (local_88._0_8_ != 0) {
          FUN_1400020a8();
        }
        atexit((_func_5014 *)&LAB_142cf50f1);
        _Init_thread_footer(&DAT_14c9c1080);
      }
    }
    FUN_140069376(lVar4);
    puVar1 = (ulonglong *)(lVar4 + 0x70);
    puVar8 = (undefined8 *)(*(longlong *)(lVar4 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 0x39;
    if (*(undefined8 **)(lVar4 + 0x78) < puVar7) {
      FUN_140023dd8(puVar1,0x1d0);
      puVar8 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar7 = puVar8 + 0x39;
    }
    *puVar1 = (ulonglong)puVar7;
    local_88._8_8_ = DAT_14c9c1048;
    local_88._0_8_ = puVar9 + 2;
    if (DAT_14c9c1048 != 0) {
      LOCK();
      *(int *)(DAT_14c9c1048 + 8) = *(int *)(DAT_14c9c1048 + 8) + 1;
      UNLOCK();
    }
    local_78._0_8_ = &DAT_14c9c1000;
    local_e8 = (wchar_t *)CONCAT71(local_e8._1_7_,2);
    FUN_140068f1a(puVar8,&local_89,local_88,1);
    *puVar8 = &PTR_FUN_14a247710;
    puVar8[0x37] = uVar3;
    puVar8[0x38] = uVar5;
    iVar2 = *(int *)(lVar4 + 0x170);
    *(uint *)(lVar4 + 0x170) = iVar2 + 1U;
    if (*(uint *)(lVar4 + 0x174) < iVar2 + 1U) {
      FUN_14470e57a(lVar4 + 0x168,iVar2);
    }
    *(undefined8 **)(*(longlong *)(lVar4 + 0x168) + (longlong)iVar2 * 8) = puVar8;
    *(int *)((longlong)puVar8 + 0x2c) = *(int *)(lVar4 + 0x170) + -1;
    FUN_140069100(lVar4,puVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cf4c56 FUN_142cf4c56 body=38 status=ok
// SIG undefined FUN_142cf4c56(void)

undefined8 FUN_142cf4c56(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cf4c7c FUN_142cf4c7c body=1140 status=ok
// SIG undefined FUN_142cf4c7c(void)

void FUN_142cf4c7c(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 *_Src;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_158 [32];
  undefined1 local_138;
  undefined4 local_130;
  undefined1 local_128;
  undefined4 local_120;
  longlong local_110;
  int local_104;
  longlong local_100;
  undefined1 *local_f8;
  undefined1 *puStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  int local_d8;
  undefined1 local_d0 [64];
  undefined1 *local_90;
  int local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_110 = param_1;
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
  *(int *)(puVar10 + 4) = local_d8;
  if ((longlong)local_d8 == 0) {
    *(undefined4 *)((longlong)puVar10 + 0x24) = 8;
  }
  else {
    puVar7 = &local_e8;
    if (uStack_e0 != (undefined8 *)0x0) {
      puVar7 = uStack_e0;
    }
    FUN_1446fe144(puVar10 + 2,local_d8,0);
    puVar8 = (undefined8 *)puVar10[3];
    if ((undefined8 *)puVar10[3] == (undefined8 *)0x0) {
      puVar8 = puVar10 + 2;
    }
    memcpy(puVar8,puVar7,(longlong)local_d8);
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
  if (uStack_e0 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (0 < *(int *)(*(longlong *)(local_110 + 0x1b8) + 0x3f0)) {
    lVar13 = 0;
    lVar9 = 0;
    local_100 = *(longlong *)(local_110 + 0x1b8);
    do {
      lVar3 = *(longlong *)(local_100 + 1000);
      iVar1 = *(int *)(lVar3 + 0x1de0 + lVar13);
      local_104 = *(int *)((longlong)param_2 + 0x17c);
      if (local_104 != iVar1) {
        *(int *)((longlong)param_2 + 0x17c) = iVar1;
        puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar7 = puVar10 + 3;
        if ((undefined8 *)param_2[1] < puVar7) {
          FUN_140023dd8(param_2,0x20);
          puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar7 = puVar10 + 3;
        }
        *param_2 = (ulonglong)puVar7;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar10;
        param_2[6] = (ulonglong)(puVar10 + 1);
        uVar2 = *(undefined4 *)((longlong)param_2 + 0x17c);
        puVar10[1] = 0;
        *puVar10 = &PTR_FUN_14a1fb2c0;
        *(undefined4 *)(puVar10 + 2) = uVar2;
      }
      local_e8 = 0;
      uStack_e0 = (undefined8 *)0x0;
      lVar11 = lVar3 + lVar13 + 0x30f8;
      cVar6 = (**(code **)(**(longlong **)(local_110 + 0x1c0) + 0xe0))
                        (*(longlong **)(local_110 + 0x1c0),&local_e8,lVar3 + lVar13,lVar11);
      if (cVar6 == '\0') {
        uVar12 = *(ulonglong *)(lVar3 + 0x30f8 + lVar13);
        puVar7 = *(undefined8 **)(lVar3 + 0x3100 + lVar13);
        local_e8 = uVar12;
        uStack_e0 = puVar7;
      }
      else {
        uVar12 = local_e8 & 0xffffffff;
        puVar7 = (undefined8 *)((ulonglong)uStack_e0 & 0xffffffff);
      }
      uVar4 = local_e8;
      if ((int)uVar12 < (int)puVar7) {
        iVar1 = local_e8._4_4_;
        iVar5 = uStack_e0._4_4_;
        if (uStack_e0._4_4_ <= local_e8._4_4_) goto LAB_142cf5001;
        puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar10 = puVar8 + 5;
        if ((undefined8 *)param_2[1] < puVar10) {
          FUN_140023dd8(param_2,0x30);
          puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar10 = puVar8 + 5;
        }
        *param_2 = (ulonglong)puVar10;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar8;
        param_2[6] = (ulonglong)(puVar8 + 1);
        puVar8[1] = 0;
        *puVar8 = &PTR_LAB_14a1e7fc8;
        *(float *)(puVar8 + 2) = (float)(int)uVar12;
        *(float *)((longlong)puVar8 + 0x14) = (float)iVar1;
        *(undefined4 *)(puVar8 + 3) = 0;
        *(float *)((longlong)puVar8 + 0x1c) = (float)(int)puVar7;
        *(float *)(puVar8 + 4) = (float)iVar5;
        *(undefined4 *)((longlong)puVar8 + 0x24) = 0x3f800000;
        local_f8 = &DAT_3f8000003f800000;
        puStack_f0 = &DAT_3f8000003f800000;
        local_120 = 0;
        local_128 = 0;
        local_130 = 0;
        local_138 = 0;
        FUN_140d1dede(param_2,CONCAT71((uint7)(uint3)(uVar4 >> 0x28),1),1,&local_f8);
      }
      else {
LAB_142cf5001:
        (**(code **)(**(longlong **)(local_110 + 0x1c0) + 0xe0))
                  (*(longlong **)(local_110 + 0x1c0),&local_e8,lVar3 + lVar13,lVar11);
      }
      if (*(int *)((longlong)param_2 + 0x17c) != local_104) {
        *(int *)((longlong)param_2 + 0x17c) = local_104;
        puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar7 = puVar10 + 3;
        if ((undefined8 *)param_2[1] < puVar7) {
          FUN_140023dd8(param_2,0x20);
          puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar7 = puVar10 + 3;
        }
        *param_2 = (ulonglong)puVar7;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar10;
        param_2[6] = (ulonglong)(puVar10 + 1);
        uVar2 = *(undefined4 *)((longlong)param_2 + 0x17c);
        puVar10[1] = 0;
        *puVar10 = &PTR_FUN_14a1fb2c0;
        *(undefined4 *)(puVar10 + 2) = uVar2;
      }
      lVar9 = lVar9 + 1;
      lVar13 = lVar13 + 0x13c10;
    } while (lVar9 < *(int *)(local_100 + 0x3f0));
  }
  if ((local_70 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cf50fd FUN_142cf50fd body=722 status=ok
// SIG undefined FUN_142cf50fd(void)

void FUN_142cf50fd(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 *param_5,longlong param_6,undefined4 param_7)

{
  ulonglong *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_138 [32];
  wchar_t *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  char *local_100;
  undefined4 local_f8;
  undefined4 local_f0;
  longlong *local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined1 local_b9;
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
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  longlong local_60;
  longlong local_58;
  undefined *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  plVar4 = *(longlong **)(param_4 + 0x28);
  local_c8 = param_3;
  (**(code **)(*plVar4 + 0x10))(plVar4,&local_80);
  bVar2 = *(byte *)(plVar4 + 0x3d);
  local_98 = *param_5;
  uStack_90 = param_5[1];
  local_b8 = local_80;
  uStack_b4 = uStack_7c;
  uStack_b0 = uStack_78;
  uStack_ac = uStack_74;
  local_a8 = local_70;
  uStack_a4 = uStack_6c;
  uStack_a0 = uStack_68;
  uStack_9c = uStack_64;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ea9b8) {
    FUN_144b3d300(&DAT_14c9ea9b8);
    if (DAT_14c9ea9b8 == -1) {
      FUN_145d57680(&local_60);
      local_d0 = 0;
      local_e0 = 0;
      local_100 = "Unknown";
      local_110 = 0;
      uStack_108 = 0;
      local_118 = L"FRenderLightParameters";
      local_d8 = 0;
      local_f0 = 0x390;
      local_f8 = 0xa95;
      local_e8 = &local_60;
      FUN_140b49562(&DAT_14c9ea938,0,1);
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cf6fe8);
      _Init_thread_footer(&DAT_14c9ea9b8);
    }
  }
  FUN_140069376(param_1);
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar6 + 0x42;
  if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
    FUN_140023dd8(puVar1,0x218);
    puVar6 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar6 + 0x42;
  }
  *puVar1 = (ulonglong)puVar5;
  local_60 = param_6;
  local_58 = DAT_14c9ea980;
  if (DAT_14c9ea980 != 0) {
    LOCK();
    *(int *)(DAT_14c9ea980 + 8) = *(int *)(DAT_14c9ea980 + 8) + 1;
    UNLOCK();
  }
  local_50 = &DAT_14c9ea938;
  local_118 = (wchar_t *)CONCAT71(local_118._1_7_,2);
  FUN_140068f1a(puVar6,&local_b9,&local_60,1);
  *puVar6 = &PTR_FUN_14a247770;
  puVar6[0x37] = param_2;
  puVar6[0x38] = local_c8;
  puVar6[0x39] = local_98;
  puVar6[0x3a] = uStack_90;
  puVar6[0x3b] = param_4;
  puVar6[0x3c] = param_6;
  *(undefined4 *)(puVar6 + 0x3f) = local_a8;
  *(undefined4 *)((longlong)puVar6 + 0x1fc) = uStack_a4;
  *(undefined4 *)(puVar6 + 0x40) = uStack_a0;
  *(undefined4 *)((longlong)puVar6 + 0x204) = uStack_9c;
  *(undefined4 *)(puVar6 + 0x3d) = local_b8;
  *(undefined4 *)((longlong)puVar6 + 0x1ec) = uStack_b4;
  *(undefined4 *)(puVar6 + 0x3e) = uStack_b0;
  *(undefined4 *)((longlong)puVar6 + 500) = uStack_ac;
  *(uint *)(puVar6 + 0x41) = (uint)bVar2;
  *(undefined4 *)((longlong)puVar6 + 0x20c) = param_7;
  iVar3 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar3 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar3 * 8) = puVar6;
  *(int *)((longlong)puVar6 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar6);
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cf53d0 FUN_142cf53d0 body=38 status=ok
// SIG undefined FUN_142cf53d0(void)

undefined8 FUN_142cf53d0(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cf53f6 FUN_142cf53f6 body=7153 status=ok
// SIG undefined FUN_142cf53f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cf53f6(longlong param_1,ulonglong *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  int *piVar11;
  int *piVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  DWORD DVar15;
  DWORD DVar16;
  undefined8 *puVar17;
  longlong lVar18;
  undefined8 uVar19;
  longlong lVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  undefined *puVar24;
  int iVar25;
  longlong lVar26;
  longlong lVar27;
  undefined8 unaff_RBP;
  undefined7 uVar29;
  int **ppiVar28;
  undefined4 uVar30;
  int iVar31;
  undefined8 *puVar32;
  int *piVar33;
  bool bVar34;
  float fVar35;
  double dVar36;
  float fVar37;
  undefined1 auStack_378 [32];
  int **local_358;
  wchar_t *local_350;
  ulonglong uStack_348;
  char *local_340;
  code *local_338;
  code *local_330;
  int **local_328;
  int **local_320;
  undefined1 *local_318;
  undefined1 *local_310;
  undefined4 local_308;
  undefined *local_300;
  int *local_2f0;
  longlong local_2e8;
  longlong local_2e0;
  int *local_2d8;
  longlong local_2d0;
  int *local_2c8;
  char local_2c0;
  undefined7 uStack_2bf;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 local_288 [12];
  int *local_228;
  longlong local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  uint local_1ac;
  longlong local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  int local_140;
  undefined4 uStack_13c;
  int iStack_138;
  undefined8 uStack_134;
  undefined8 uStack_12c;
  undefined8 uStack_124;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined8 local_10c;
  undefined5 uStack_104;
  undefined3 uStack_ff;
  undefined5 uStack_fc;
  undefined8 uStack_f7;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [8];
  uint local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_378;
  FUN_144b1c6fa(param_1 + 0x10,&local_198);
  puVar32 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar17 = puVar32 + 0x11;
  if ((undefined8 *)param_2[1] < puVar17) {
    FUN_140023dd8(param_2,0x90);
    puVar32 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar17 = puVar32 + 0x11;
  }
  *param_2 = (ulonglong)puVar17;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar32;
  param_2[6] = (ulonglong)(puVar32 + 1);
  puVar32[1] = 0;
  *puVar32 = &PTR_FUN_14a1fb978;
  puVar32[3] = 0;
  *(int *)(puVar32 + 4) = (int)local_188;
  if ((longlong)(int)local_188 == 0) {
    *(undefined4 *)((longlong)puVar32 + 0x24) = 8;
  }
  else {
    puVar17 = &local_198;
    if (uStack_190 != (undefined8 *)0x0) {
      puVar17 = uStack_190;
    }
    FUN_1446fe144(puVar32 + 2,(int)local_188,0);
    puVar22 = (undefined8 *)puVar32[3];
    if ((undefined8 *)puVar32[3] == (undefined8 *)0x0) {
      puVar22 = puVar32 + 2;
    }
    memcpy(puVar22,puVar17,(longlong)(int)local_188);
  }
  puVar32[0xd] = 0;
  puVar17 = (undefined8 *)CONCAT44(uStack_13c,local_140);
  *(int *)(puVar32 + 0xe) = iStack_138;
  if ((longlong)iStack_138 == 0) {
    *(undefined4 *)((longlong)puVar32 + 0x74) = 8;
  }
  else {
    if (puVar17 == (undefined8 *)0x0) {
      puVar17 = &uStack_180;
    }
    FUN_1446fe1b8(puVar32 + 5,iStack_138,0);
    puVar22 = (undefined8 *)puVar32[0xd];
    if ((undefined8 *)puVar32[0xd] == (undefined8 *)0x0) {
      puVar22 = puVar32 + 5;
    }
    memcpy(puVar22,puVar17,(longlong)iStack_138 << 3);
    puVar17 = (undefined8 *)CONCAT44(uStack_13c,local_140);
  }
  *(undefined4 *)(puVar32 + 0xf) = uStack_134._4_4_;
  *(undefined4 *)((longlong)puVar32 + 0x7c) = (undefined4)uStack_12c;
  *(undefined4 *)(puVar32 + 0x10) = uStack_12c._4_4_;
  *(undefined4 *)((longlong)puVar32 + 0x84) = (undefined4)uStack_124;
  if (puVar17 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar17);
  }
  if (uStack_190 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  local_2e8 = CONCAT44(local_2e8._4_4_,*(undefined4 *)(param_1 + 0x20c));
  local_148 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_198 = 0;
  uStack_190 = (undefined8 *)0x0;
  uStack_13c = 0;
  iStack_138 = 0;
  uStack_134 = 0;
  uStack_12c = 0;
  uStack_124 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  uStack_104 = 0;
  uStack_ff = 0;
  uStack_fc = 0;
  uStack_f7 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = (undefined1  [8])0x0;
  local_d0 = 1;
  local_c8 = 0;
  FUN_144b0e33a(param_2);
  lVar20 = DAT_14ca97170;
  lVar18 = *(longlong *)(param_1 + 0x1c0);
  dVar7 = *(double *)(lVar18 + 0x1058) - *(double *)(param_1 + 0x1f8);
  dVar6 = *(double *)(lVar18 + 0x1050) - *(double *)(param_1 + 0x1f0);
  dVar4 = *(double *)(lVar18 + 0x1048) - *(double *)(param_1 + 0x1e8);
  dVar5 = *(double *)(param_1 + 0x200) * 1.0499999523162842 +
          (double)(*(float *)(lVar18 + 0x2170) + *(float *)(lVar18 + 0x2170));
  uVar29 = (undefined7)((ulonglong)puVar17 >> 8);
  uVar13 = (undefined4)CONCAT71(uVar29,1);
  if (dVar5 * dVar5 <= dVar7 * dVar7 + dVar4 * dVar4 + dVar6 * dVar6) {
    uVar13 = (undefined4)
             CONCAT71(uVar29,1.0 < *(double *)(lVar18 + 0x8a8) || *(double *)(lVar18 + 0x8a8) == 1.0
                     );
  }
  iVar25 = *(int *)(param_1 + 0x208);
  uVar30 = *(undefined4 *)(param_1 + 0x20c);
  uVar1 = *(undefined1 *)(lVar18 + 0x2398);
  local_140 = 0;
  lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar31 = *(int *)(lVar18 + 0xc60);
  if (((iVar31 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar31 == 2)) {
    uVar23 = 0;
  }
  else if (iVar31 == 1) {
    uVar14 = FUN_140ad26c0();
    local_2f0 = (int *)CONCAT44(local_2f0._4_4_,uVar14);
    DVar15 = GetCurrentThreadId();
    uVar23 = (ulonglong)((DWORD)local_2f0 != DVar15);
  }
  else {
    uVar23 = 1;
  }
  lVar26 = DAT_14ca971d0;
  piVar33 = (int *)(lVar18 + 0xc60);
  uVar21 = DAT_14c9c0ee8;
  if (0 < *(int *)(lVar20 + uVar23 * 4)) {
    iVar31 = *piVar33;
    local_2f0 = piVar33;
    if (iVar31 == 0x40000002) {
      uVar23 = 0;
    }
    else {
      bVar34 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar31 != 2)) {
        if (iVar31 == 1) {
          DVar15 = FUN_140ad26c0();
          DVar16 = GetCurrentThreadId();
          bVar34 = DVar15 == DVar16;
        }
        else {
          bVar34 = false;
        }
      }
      uVar23 = (ulonglong)(bVar34 ^ 1);
    }
    puVar24 = &DAT_14c9c0ed8;
    if (0 < *(int *)(lVar26 + uVar23 * 4)) {
      puVar24 = &DAT_14c9c0ec0;
    }
    uVar21 = *(undefined8 *)(puVar24 + 0x10);
    piVar33 = local_2f0;
  }
  local_168 = uVar21;
  if (iVar25 == 0) {
    local_d8[5] = 0;
    uStack_160 = DAT_14c9c0db0;
    local_158 = DAT_14c9c0d98;
    uVar13 = 0;
    local_198 = DAT_14ca94df8;
  }
  else {
    local_d8[5] = DAT_14c760470 != 0 & DAT_14ca84e1e;
    uVar13 = FUN_142cf0946(&local_198,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar1) & 0xffffffff
                           ,uVar13,uVar30);
    local_198 = DAT_14ca968c0;
  }
  lVar18 = *(longlong *)(param_1 + 0x1c0);
  iVar25 = *(int *)(lVar18 + 0x3104);
  iVar31 = *(int *)(lVar18 + 0x3100);
  iVar2 = *(int *)(lVar18 + 0x30fc);
  iVar3 = *(int *)(lVar18 + 0x30f8);
  puVar32 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar17 = puVar32 + 5;
  if ((undefined8 *)param_2[1] < puVar17) {
    FUN_140023dd8(param_2,0x30);
    puVar32 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar17 = puVar32 + 5;
  }
  *param_2 = (ulonglong)puVar17;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar32;
  param_2[6] = (ulonglong)(puVar32 + 1);
  puVar32[1] = 0;
  *puVar32 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar32 + 2) = (float)iVar3;
  *(float *)((longlong)puVar32 + 0x14) = (float)iVar2;
  *(undefined4 *)(puVar32 + 3) = 0;
  *(float *)((longlong)puVar32 + 0x1c) = (float)iVar31;
  *(float *)(puVar32 + 4) = (float)iVar25;
  *(undefined4 *)((longlong)puVar32 + 0x24) = 0x3f800000;
  uVar21 = *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0x13818);
  if (*(int *)(param_1 + 0x208) != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9e9700) && (FUN_144b3d300(&DAT_14c9e9700), DAT_14c9e9700 == -1)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c9eba78) && (FUN_144b3d300(&DAT_14c9eba78), DAT_14c9eba78 == -1))
      {
        FUN_145d4bcae(&local_2c8);
        local_310 = (undefined1 *)((ulonglong)local_310 & 0xffffffffffffff00);
        local_320 = (int **)((ulonglong)local_320 & 0xffffffffffffff00);
        local_340 = "Unknown";
        local_350 = (wchar_t *)0x0;
        uStack_348 = 0;
        local_358 = (int **)0x14a1fb178;
        local_318 = (undefined1 *)0x0;
        local_330 = (code *)CONCAT44(local_330._4_4_,0xa0);
        local_338 = (code *)CONCAT44(local_338._4_4_,0x133);
        local_328 = &local_2c8;
        FUN_140b49562(&DAT_14c9eb9f8,0,1);
        if (local_2c8 != (int *)0x0) {
          FUN_1400020a8();
        }
        atexit((_func_5014 *)&LAB_142cf487d);
        _Init_thread_footer(&DAT_14c9eba78);
      }
      FUN_145d4bb64();
      local_300 = &DAT_14c9eb9f8;
      local_310 = &LAB_14712ac08;
      local_318 = &LAB_14712ac0c;
      local_320 = (int **)&LAB_1471d2aa4;
      local_328 = (int **)&LAB_1471d2aa8;
      local_330 = FUN_1471d2ae4;
      local_338 = FUN_1471d2b3e;
      local_350 = L"VertexMain";
      local_358 = (int **)0x14a245bda;
      local_308 = 0xe0;
      local_340 = (char *)CONCAT44(local_340._4_4_,2);
      uStack_348 = uStack_348 & 0xffffffff00000000;
      FUN_140db5666(&DAT_14c9e9658,0,&DAT_14c9e95f0,L"FDeferredLightVS");
      _DAT_14c9e9658 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142ce867a);
      _Init_thread_footer(&DAT_14c9e9700);
    }
    FUN_1448e935e(uVar21,&local_228,&DAT_14c9e9658,1);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9e9700) && (FUN_144b3d300(&DAT_14c9e9700), DAT_14c9e9700 == -1)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c9eba78) && (FUN_144b3d300(&DAT_14c9eba78), DAT_14c9eba78 == -1))
      {
        FUN_145d4bcae(&local_2c8);
        local_310 = (undefined1 *)((ulonglong)local_310 & 0xffffffffffffff00);
        local_320 = (int **)((ulonglong)local_320 & 0xffffffffffffff00);
        local_340 = "Unknown";
        local_350 = (wchar_t *)0x0;
        uStack_348 = 0;
        local_358 = (int **)0x14a1fb178;
        local_318 = (undefined1 *)0x0;
        local_330 = (code *)CONCAT44(local_330._4_4_,0xa0);
        local_338 = (code *)CONCAT44(local_338._4_4_,0x133);
        local_328 = &local_2c8;
        FUN_140b49562(&DAT_14c9eb9f8,0,1);
        if (local_2c8 != (int *)0x0) {
          FUN_1400020a8();
        }
        atexit((_func_5014 *)&LAB_142cf487d);
        _Init_thread_footer(&DAT_14c9eba78);
      }
      FUN_145d4bb64();
      local_300 = &DAT_14c9eb9f8;
      local_310 = &LAB_14712ac08;
      local_318 = &LAB_14712ac0c;
      local_320 = (int **)&LAB_1471d2aa4;
      local_328 = (int **)&LAB_1471d2aa8;
      local_330 = FUN_1471d2ae4;
      local_338 = FUN_1471d2b3e;
      local_350 = L"VertexMain";
      local_358 = (int **)0x14a245bda;
      local_308 = 0xe0;
      local_340 = (char *)CONCAT44(local_340._4_4_,2);
      uStack_348 = uStack_348 & 0xffffffff00000000;
      FUN_140db5666(&DAT_14c9e9658,0,&DAT_14c9e95f0,L"FDeferredLightVS");
      _DAT_14c9e9658 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142ce867a);
      _Init_thread_footer(&DAT_14c9e9700);
    }
    piVar33 = local_228;
    if (local_228 == (int *)0x0) {
      lVar18 = 0;
    }
    else {
      lVar18 = *(longlong *)
                (*(longlong *)(*(longlong *)(local_220 + 8) + 0x50) + (longlong)local_228[0x35] * 8)
      ;
      if (lVar18 == 0) {
        lVar18 = FUN_1400bafc2(*(longlong *)(local_220 + 8),(longlong)local_228[0x35],1);
      }
    }
    uStack_190 = (undefined8 *)lVar18;
    if (*(longlong *)(param_1 + 0x1c8) == 0) {
      lVar18 = 0;
    }
    else {
      lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
      lVar26 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
      lVar18 = *(longlong *)(*(longlong *)(lVar20 + 0x50) + lVar26 * 8);
      if (lVar18 == 0) {
        lVar18 = FUN_1400bafc2(lVar20,lVar26,1);
      }
    }
    local_188 = lVar18;
    lVar18 = FUN_140028f18(param_2);
    if ((lVar18 != 0) && ((local_d0 & 0x10000000) == 0)) {
      *(undefined4 *)(param_2 + 0x35) = (undefined4)local_178;
      *(undefined4 *)((longlong)param_2 + 0x1ac) = local_178._4_4_;
      *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_170;
      *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_170._4_4_;
      *(int *)(param_2 + 0x33) = (int)local_188;
      *(undefined4 *)((longlong)param_2 + 0x19c) = local_188._4_4_;
      *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_180;
      *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_180._4_4_;
      *(undefined4 *)(param_2 + 0x31) = (undefined4)local_198;
      *(undefined4 *)((longlong)param_2 + 0x18c) = local_198._4_4_;
      *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_190;
      *(undefined4 *)((longlong)param_2 + 0x194) = uStack_190._4_4_;
      puVar32 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar17 = puVar32 + 4;
      if ((undefined8 *)param_2[1] < puVar17) {
        FUN_140023dd8(param_2,0x28);
        puVar32 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar17 = puVar32 + 4;
      }
      *param_2 = (ulonglong)puVar17;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar32;
      param_2[6] = (ulonglong)(puVar32 + 1);
      puVar32[1] = 0;
      *puVar32 = &PTR_LAB_14a37d348;
      puVar32[2] = lVar18;
      *(undefined4 *)(puVar32 + 3) = uVar13;
      *(undefined1 *)((longlong)puVar32 + 0x1c) = 1;
    }
    uVar21 = *(undefined8 *)(param_1 + 0x1e0);
    if (*(longlong *)(param_1 + 0x1c8) == 0) {
      lVar18 = 0;
    }
    else {
      lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
      lVar26 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
      lVar18 = *(longlong *)(*(longlong *)(lVar20 + 0x50) + lVar26 * 8);
      if (lVar18 == 0) {
        lVar18 = FUN_1400bafc2(lVar20,lVar26,1);
      }
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9ea8a8) && (FUN_144b3d300(&DAT_14c9ea8a8), DAT_14c9ea8a8 == -1)) {
      FUN_141544322(&local_2c8);
      local_310 = (undefined1 *)((ulonglong)local_310 & 0xffffffffffffff00);
      local_320 = (int **)((ulonglong)local_320 & 0xffffffffffffff00);
      local_340 = "Unknown";
      local_350 = (wchar_t *)0x0;
      uStack_348 = 0;
      local_358 = (int **)0x14a1fb178;
      local_318 = (undefined1 *)0x0;
      local_330 = (code *)CONCAT44(local_330._4_4_,0x270);
      local_338 = (code *)CONCAT44(local_338._4_4_,0x38c);
      local_328 = &local_2c8;
      FUN_140b49562(&DAT_14c9ea828,0,1);
      if (local_2c8 != (int *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cf48ad);
      _Init_thread_footer(&DAT_14c9ea8a8);
    }
    local_358 = (int **)uVar21;
    FUN_1449cc26b(param_2,lVar18,*(undefined8 *)(param_1 + 0x1c8),&DAT_14c9ea828);
    lVar18 = *(longlong *)(param_1 + 0x1c0);
    uVar21 = *(undefined8 *)(param_1 + 0x1d8);
    lVar20 = FUN_1447e4f80();
    local_2c0 = '\x02';
    if (*(char *)(lVar20 + 0x41) != '\x03') {
      local_2c0 = *(char *)(lVar20 + 0x41);
    }
    local_2c8 = *(int **)(lVar18 + 0x18);
    FUN_144b11afc(&local_228,lVar18,uVar21);
    ppiVar28 = &local_228;
    puVar17 = local_288;
    for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
      *puVar17 = *ppiVar28;
      ppiVar28 = ppiVar28 + 1;
      puVar17 = puVar17 + 1;
    }
    local_2b8 = 0;
    uStack_2b0 = 0;
    local_2a8 = 0;
    uStack_2a0 = 0;
    local_298 = 0x3f800000;
    uStack_294 = 0x3f800000;
    uStack_290 = 0x3f800000;
    uStack_28c = 0x3f800000;
    if (piVar33 == (int *)0x0) {
      lVar18 = 0;
    }
    else {
      lVar18 = *(longlong *)
                (*(longlong *)(*(longlong *)(local_220 + 8) + 0x50) + (longlong)piVar33[0x35] * 8);
      if (lVar18 == 0) {
        lVar18 = FUN_1400bafc2(*(longlong *)(local_220 + 8),(longlong)piVar33[0x35],1);
      }
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9eba78) && (FUN_144b3d300(&DAT_14c9eba78), DAT_14c9eba78 == -1)) {
      FUN_145d4bcae(&local_228);
      local_310 = (undefined1 *)((ulonglong)local_310 & 0xffffffffffffff00);
      local_320 = (int **)((ulonglong)local_320 & 0xffffffffffffff00);
      local_340 = "Unknown";
      local_350 = (wchar_t *)0x0;
      uStack_348 = 0;
      local_358 = (int **)0x14a1fb178;
      local_318 = (undefined1 *)0x0;
      local_330 = (code *)CONCAT44(local_330._4_4_,0xa0);
      local_338 = (code *)CONCAT44(local_338._4_4_,0x133);
      local_328 = &local_228;
      FUN_140b49562(&DAT_14c9eb9f8,0,1);
      if (local_228 != (int *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cf487d);
      _Init_thread_footer(&DAT_14c9eba78);
    }
    local_358 = &local_2c8;
    FUN_1449cc26b(param_2,lVar18,piVar33,&DAT_14c9eb9f8);
    if (local_d8[5] == '\x01') {
      lVar18 = *(longlong *)(param_1 + 0x1c0);
      dVar4 = *(double *)(param_1 + 0x200);
      dVar7 = *(double *)(lVar18 + 0xa00) * dVar4;
      dVar9 = *(double *)(lVar18 + 0x9e0) * dVar4;
      dVar4 = dVar4 * *(double *)(lVar18 + 0x9c0);
      dVar5 = *(double *)(param_1 + 0x1f8) + dVar7;
      dVar36 = dVar9 + *(double *)(param_1 + 0x1f0);
      dVar10 = dVar4 + *(double *)(param_1 + 0x1e8);
      dVar6 = dVar5 * *(double *)(lVar18 + 0xb08) +
              dVar36 * *(double *)(lVar18 + 0xae8) + dVar10 * *(double *)(lVar18 + 0xac8) +
              *(double *)(lVar18 + 0xb28);
      dVar7 = *(double *)(param_1 + 0x1f8) - dVar7;
      dVar9 = *(double *)(param_1 + 0x1f0) - dVar9;
      dVar4 = *(double *)(param_1 + 0x1e8) - dVar4;
      dVar8 = dVar7 * *(double *)(lVar18 + 0xb08) +
              dVar9 * *(double *)(lVar18 + 0xae8) + dVar4 * *(double *)(lVar18 + 0xac8) +
              *(double *)(lVar18 + 0xb28);
      fVar37 = 1.0;
      if (0.0 <= dVar8) {
        fVar37 = (float)((dVar7 * *(double *)(lVar18 + 0xb00) +
                          dVar9 * *(double *)(lVar18 + 0xae0) + dVar4 * *(double *)(lVar18 + 0xac0)
                         + *(double *)(lVar18 + 0xb20)) / dVar8);
      }
      fVar35 = 1.0;
      if (0.0 <= dVar6) {
        fVar35 = (float)((dVar5 * *(double *)(lVar18 + 0xb00) +
                          dVar36 * *(double *)(lVar18 + 0xae0) +
                          dVar10 * *(double *)(lVar18 + 0xac0) + *(double *)(lVar18 + 0xb20)) /
                        dVar6);
      }
      if (1.0 <= fVar37) {
        fVar37 = 1.0;
      }
      if (fVar37 <= 0.0) {
        fVar37 = 0.0;
      }
      if (1.0 <= fVar35) {
        fVar35 = 1.0;
      }
      if (fVar35 <= 0.0) {
        fVar35 = 0.0;
      }
      bVar34 = fVar35 < fVar37;
      if (fVar37 <= fVar35) {
        fVar37 = 1.0;
      }
      puVar32 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar17 = puVar32 + 3;
      if ((undefined8 *)param_2[1] < puVar17) {
        FUN_140023dd8(param_2,0x20);
        puVar32 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar17 = puVar32 + 3;
      }
      *param_2 = (ulonglong)puVar17;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar32;
      param_2[6] = (ulonglong)(puVar32 + 1);
      puVar32[1] = 0;
      *puVar32 = &PTR_LAB_14a1fbb10;
      *(uint *)(puVar32 + 2) = -(uint)bVar34 & (uint)fVar35;
      *(float *)((longlong)puVar32 + 0x14) = fVar37;
    }
    uVar21 = DAT_14c9e9578;
    iVar25 = *(int *)(param_1 + 0x208);
    if (iVar25 != 3) {
      if (iVar25 == 2) {
        puVar32 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar17 = puVar32 + 5;
        if ((undefined8 *)param_2[1] < puVar17) {
          FUN_140023dd8(param_2,0x30);
          puVar32 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar17 = puVar32 + 5;
        }
        *param_2 = (ulonglong)puVar17;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar32;
        param_2[6] = (ulonglong)(puVar32 + 1);
        puVar32[1] = 0;
        *puVar32 = &PTR_LAB_14a1fb5a8;
        *(undefined4 *)(puVar32 + 2) = 0;
        puVar32[3] = uVar21;
        *(undefined4 *)(puVar32 + 4) = 0;
        iVar25 = DAT_14c9e9560;
        uVar21 = DAT_14c9e9558;
        puVar32 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar17 = puVar32 + 6;
        if ((undefined8 *)param_2[1] < puVar17) {
          FUN_140023dd8(param_2,0x38);
          puVar32 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar17 = puVar32 + 6;
        }
        *param_2 = (ulonglong)puVar17;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar32;
        param_2[6] = (ulonglong)(puVar32 + 1);
        puVar32[1] = 0;
        *puVar32 = &PTR_FUN_14a1fb5b0;
        puVar32[2] = uVar21;
        *(undefined4 *)(puVar32 + 3) = 0;
        *(undefined4 *)((longlong)puVar32 + 0x1c) = 0;
        *(undefined4 *)(puVar32 + 4) = 0x1b0;
        *(undefined4 *)((longlong)puVar32 + 0x24) = 0;
        *(int *)(puVar32 + 5) = iVar25 / 3;
        *(undefined4 *)((longlong)puVar32 + 0x2c) = 1;
        goto LAB_142cf6375;
      }
      if (iVar25 != 1) goto LAB_142cf6375;
    }
    FUN_142ce821c(param_2,1);
    goto LAB_142cf6375;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9e9700) && (FUN_144b3d300(&DAT_14c9e9700), DAT_14c9e9700 == -1)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9eba78) && (FUN_144b3d300(&DAT_14c9eba78), DAT_14c9eba78 == -1)) {
      FUN_145d4bcae(&local_2c8);
      local_310 = (undefined1 *)((ulonglong)local_310 & 0xffffffffffffff00);
      local_320 = (int **)((ulonglong)local_320 & 0xffffffffffffff00);
      local_340 = "Unknown";
      local_350 = (wchar_t *)0x0;
      uStack_348 = 0;
      local_358 = (int **)0x14a1fb178;
      local_318 = (undefined1 *)0x0;
      local_330 = (code *)CONCAT44(local_330._4_4_,0xa0);
      local_338 = (code *)CONCAT44(local_338._4_4_,0x133);
      local_328 = &local_2c8;
      FUN_140b49562(&DAT_14c9eb9f8,0,1);
      if (local_2c8 != (int *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cf487d);
      _Init_thread_footer(&DAT_14c9eba78);
    }
    FUN_145d4bb64();
    local_300 = &DAT_14c9eb9f8;
    local_310 = &LAB_14712ac08;
    local_318 = &LAB_14712ac0c;
    local_320 = (int **)&LAB_1471d2aa4;
    local_328 = (int **)&LAB_1471d2aa8;
    local_330 = FUN_1471d2ae4;
    local_338 = FUN_1471d2b3e;
    local_350 = L"VertexMain";
    local_358 = (int **)0x14a245bda;
    local_308 = 0xe0;
    local_340 = (char *)CONCAT44(local_340._4_4_,2);
    uStack_348 = uStack_348 & 0xffffffff00000000;
    FUN_140db5666(&DAT_14c9e9658,0,&DAT_14c9e95f0,L"FDeferredLightVS");
    _DAT_14c9e9658 = FGlobalShaderType::vftable;
    atexit((_func_5014 *)&LAB_142ce867a);
    _Init_thread_footer(&DAT_14c9e9700);
  }
  FUN_1448e935e(uVar21,&local_228,&DAT_14c9e9658,0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9e9700) && (FUN_144b3d300(&DAT_14c9e9700), DAT_14c9e9700 == -1)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9eba78) && (FUN_144b3d300(&DAT_14c9eba78), DAT_14c9eba78 == -1)) {
      FUN_145d4bcae(&local_2c8);
      local_310 = (undefined1 *)((ulonglong)local_310 & 0xffffffffffffff00);
      local_320 = (int **)((ulonglong)local_320 & 0xffffffffffffff00);
      local_340 = "Unknown";
      local_350 = (wchar_t *)0x0;
      uStack_348 = 0;
      local_358 = (int **)0x14a1fb178;
      local_318 = (undefined1 *)0x0;
      local_330 = (code *)CONCAT44(local_330._4_4_,0xa0);
      local_338 = (code *)CONCAT44(local_338._4_4_,0x133);
      local_328 = &local_2c8;
      FUN_140b49562(&DAT_14c9eb9f8,0,1);
      if (local_2c8 != (int *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cf487d);
      _Init_thread_footer(&DAT_14c9eba78);
    }
    FUN_145d4bb64();
    local_300 = &DAT_14c9eb9f8;
    local_310 = &LAB_14712ac08;
    local_318 = &LAB_14712ac0c;
    local_320 = (int **)&LAB_1471d2aa4;
    local_328 = (int **)&LAB_1471d2aa8;
    local_330 = FUN_1471d2ae4;
    local_338 = FUN_1471d2b3e;
    local_350 = L"VertexMain";
    local_358 = (int **)0x14a245bda;
    local_308 = 0xe0;
    local_340 = (char *)CONCAT44(local_340._4_4_,2);
    uStack_348 = uStack_348 & 0xffffffff00000000;
    FUN_140db5666(&DAT_14c9e9658,0,&DAT_14c9e95f0,L"FDeferredLightVS");
    _DAT_14c9e9658 = FGlobalShaderType::vftable;
    atexit((_func_5014 *)&LAB_142ce867a);
    _Init_thread_footer(&DAT_14c9e9700);
  }
  piVar12 = local_228;
  uVar21 = *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0x13818);
  uVar19 = FUN_1415d23c0();
  FUN_1448e935e(uVar21,&local_2c8);
  FUN_1415d23c0();
  piVar11 = local_2c8;
  local_2e0 = CONCAT71(uStack_2bf,local_2c0);
  if ((int)local_2e8 == 9) {
    if (piVar12 == (int *)0x0) goto LAB_142cf5f3d;
    lVar18 = *(longlong *)(local_220 + 8);
    iVar25 = piVar12[0x35];
LAB_142cf5e49:
    lVar18 = *(longlong *)(*(longlong *)(lVar18 + 0x50) + (longlong)iVar25 * 8);
    if (lVar18 == 0) {
      uVar19 = CONCAT71((int7)((ulonglong)uVar19 >> 8),1);
      lVar18 = FUN_1400bafc2();
    }
  }
  else {
    if (local_2c8 != (int *)0x0) {
      lVar18 = *(longlong *)(local_2e0 + 8);
      iVar25 = local_2c8[0x35];
      goto LAB_142cf5e49;
    }
LAB_142cf5f3d:
    lVar18 = 0;
  }
  uVar30 = (undefined4)uVar19;
  local_2e8 = local_220;
  local_2f0 = piVar11;
  uStack_190 = (undefined8 *)lVar18;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = *(longlong *)
              (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8) + 0x50) +
              (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4) * 8);
    if (lVar18 == 0) {
      uVar30 = (undefined4)CONCAT71((int7)((ulonglong)uVar19 >> 8),1);
      lVar18 = FUN_1400bafc2();
    }
  }
  local_188 = lVar18;
  lVar18 = FUN_140028f18();
  if ((lVar18 != 0) && ((local_d0 & 0x10000000) == 0)) {
    *(undefined4 *)(param_2 + 0x35) = (undefined4)local_178;
    *(undefined4 *)((longlong)param_2 + 0x1ac) = local_178._4_4_;
    *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_170;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_170._4_4_;
    *(int *)(param_2 + 0x33) = (int)local_188;
    *(undefined4 *)((longlong)param_2 + 0x19c) = local_188._4_4_;
    *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_180;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_180._4_4_;
    *(undefined4 *)(param_2 + 0x31) = (undefined4)local_198;
    *(undefined4 *)((longlong)param_2 + 0x18c) = local_198._4_4_;
    *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_190;
    *(undefined4 *)((longlong)param_2 + 0x194) = uStack_190._4_4_;
    puVar32 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar17 = puVar32 + 4;
    if ((undefined8 *)param_2[1] < puVar17) {
      FUN_140023dd8(param_2,0x28);
      puVar32 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar17 = puVar32 + 4;
    }
    *param_2 = (ulonglong)puVar17;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar32;
    param_2[6] = (ulonglong)(puVar32 + 1);
    puVar32[1] = 0;
    *puVar32 = &PTR_LAB_14a37d348;
    puVar32[2] = lVar18;
    *(undefined4 *)(puVar32 + 3) = uVar13;
    *(undefined1 *)((longlong)puVar32 + 0x1c) = 1;
  }
  lVar20 = local_2e8;
  lVar18 = DAT_14ca97170;
  local_218 = 0;
  uStack_210 = 0x3f80000000000000;
  local_208 = 0;
  uStack_200 = 0x3f80000000000000;
  uVar23 = 0;
  local_1b8 = 0;
  local_1a8 = 0;
  local_1a0 = 4;
  iVar25 = *piVar33;
  if (iVar25 != 0x40000002) {
    if ((DAT_14c86a9f8 == '\x01') && (iVar25 != 2)) {
      if (iVar25 == 1) {
        DVar15 = FUN_140ad26c0();
        DVar16 = GetCurrentThreadId();
        uVar23 = (ulonglong)(DVar15 != DVar16);
      }
      else {
        uVar23 = 1;
      }
    }
    else {
      uVar23 = 0;
    }
  }
  if (0 < *(int *)(lVar18 + uVar23 * 4)) {
    local_1ac = *(uint *)(param_1 + 0x20c);
    lVar18 = *(longlong *)(param_1 + 0x1c0);
    if ((ulonglong)local_1ac == 9) {
      local_1b8 = 0;
      local_1a8 = 0;
      local_1b0 = uVar30;
    }
    else {
      local_1b8 = *(undefined8 *)(lVar18 + 0x11850);
      local_1b0 = *(undefined4 *)(lVar18 + 0x11860 + (ulonglong)local_1ac * 4);
      local_1ac = *(uint *)(lVar18 + 0x1183c);
      local_1a8 = *(longlong *)(lVar18 + 0x11888);
    }
    local_140 = (uint)DAT_14ca84e08 * 5;
    lVar18 = *(longlong *)(lVar18 + 0x3110);
    local_228 = *(int **)(lVar18 + 0xaf0);
    local_218 = *(undefined8 *)(lVar18 + 0xb00);
    uStack_210 = *(undefined8 *)(lVar18 + 0xb08);
    local_208 = *(undefined8 *)(lVar18 + 0xb30);
    uStack_200 = *(undefined8 *)(lVar18 + 0xb38);
    local_1f8 = *(undefined4 *)(lVar18 + 0x340);
    uStack_1f4 = *(undefined4 *)(lVar18 + 0x344);
    uStack_1f0 = *(undefined4 *)(lVar18 + 0x348);
    uStack_1ec = *(undefined4 *)(lVar18 + 0x34c);
    local_1e8 = *(undefined8 *)(lVar18 + 0x350);
    uStack_1e0 = *(undefined8 *)(lVar18 + 0x358);
    local_1d8 = *(undefined8 *)(lVar18 + 0x360);
    uStack_1d0 = *(undefined8 *)(lVar18 + 0x368);
    local_1c8 = *(undefined8 *)(lVar18 + 0x370);
    uStack_1c0 = *(undefined8 *)(lVar18 + 0x378);
    local_1a0 = 4;
  }
  uVar21 = *(undefined8 *)(param_1 + 0x1e0);
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar18 = 0;
  }
  else {
    lVar26 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar27 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar18 = *(longlong *)(*(longlong *)(lVar26 + 0x50) + lVar27 * 8);
    if (lVar18 == 0) {
      lVar18 = FUN_1400bafc2(lVar26,lVar27,1);
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9ea8a8) && (FUN_144b3d300(&DAT_14c9ea8a8), DAT_14c9ea8a8 == -1)) {
    FUN_141544322(&local_2c8);
    local_310 = (undefined1 *)((ulonglong)local_310 & 0xffffffffffffff00);
    local_320 = (int **)((ulonglong)local_320 & 0xffffffffffffff00);
    local_340 = "Unknown";
    local_350 = (wchar_t *)0x0;
    uStack_348 = 0;
    local_358 = (int **)0x14a1fb178;
    local_318 = (undefined1 *)0x0;
    local_330 = (code *)CONCAT44(local_330._4_4_,0x270);
    local_338 = (code *)CONCAT44(local_338._4_4_,0x38c);
    local_328 = &local_2c8;
    FUN_140b49562(&DAT_14c9ea828,0,1);
    if (local_2c8 != (int *)0x0) {
      FUN_1400020a8();
    }
    atexit((_func_5014 *)&LAB_142cf48ad);
    _Init_thread_footer(&DAT_14c9ea8a8);
    lVar20 = local_2e8;
  }
  local_358 = (int **)uVar21;
  FUN_1449cc26b(param_2,lVar18,*(undefined8 *)(param_1 + 0x1c8),&DAT_14c9ea828);
  piVar33 = local_2f0;
  if (*(int *)(param_1 + 0x20c) == 9) {
    FUN_1417660a0(&local_2c8,*(undefined8 *)(param_1 + 0x1c0),1);
    if (piVar12 == (int *)0x0) {
      lVar18 = 0;
    }
    else {
      lVar18 = *(longlong *)
                (*(longlong *)(*(longlong *)(lVar20 + 8) + 0x50) + (longlong)piVar12[0x35] * 8);
      if (lVar18 == 0) {
        lVar18 = FUN_1400bafc2(*(longlong *)(lVar20 + 8),(longlong)piVar12[0x35],1);
      }
    }
    local_2d0 = lVar20;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9eba78) && (FUN_144b3d300(&DAT_14c9eba78), DAT_14c9eba78 == -1)) {
      FUN_145d4bcae(&local_2d8);
      local_310 = (undefined1 *)((ulonglong)local_310 & 0xffffffffffffff00);
      local_320 = (int **)((ulonglong)local_320 & 0xffffffffffffff00);
      local_340 = "Unknown";
      local_350 = (wchar_t *)0x0;
      uStack_348 = 0;
      local_358 = (int **)0x14a1fb178;
      local_318 = (undefined1 *)0x0;
      local_330 = (code *)CONCAT44(local_330._4_4_,0xa0);
      local_338 = (code *)CONCAT44(local_338._4_4_,0x133);
      local_328 = &local_2d8;
      FUN_140b49562(&DAT_14c9eb9f8,0,1);
      if (local_2d8 != (int *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cf487d);
      _Init_thread_footer(&DAT_14c9eba78);
      local_2d0 = local_2e8;
    }
    local_358 = &local_2c8;
    FUN_1449cc26b(param_2,lVar18,piVar12,&DAT_14c9eb9f8);
    local_320 = &local_2d8;
    local_2d8 = piVar12;
    lVar18 = *(longlong *)(param_1 + 0x1c0);
    puVar24 = &DAT_14cb05410;
    if (*(char *)(*(longlong *)(lVar18 + 8) + 0xd0) != '\0') {
      puVar24 = (undefined *)(*(longlong *)(lVar18 + 8) + 0x1b8);
    }
    iVar25 = *(int *)(lVar18 + 0x3104) - *(int *)(lVar18 + 0x30fc);
    fVar37 = (float)iVar25;
    iVar31 = *(int *)(lVar18 + 0x3100) - *(int *)(lVar18 + 0x30f8);
    local_328 = *(int ***)(puVar24 + 0x10);
    local_330 = (code *)CONCAT44(iVar25,iVar31);
    local_310 = (undefined1 *)CONCAT44(local_310._4_4_,1);
    local_318 = (undefined1 *)CONCAT44(local_318._4_4_,1);
    local_338 = (code *)CONCAT44(local_338._4_4_,fVar37);
    local_340 = (char *)CONCAT44(local_340._4_4_,(float)iVar31);
    uStack_348 = CONCAT44(uStack_348._4_4_,(float)*(int *)(lVar18 + 0x30fc));
    local_350 = (wchar_t *)CONCAT44(local_350._4_4_,(float)*(int *)(lVar18 + 0x30f8));
    local_358 = (int **)CONCAT44(local_358._4_4_,fVar37);
    FUN_140094833(param_2,0,0);
  }
  else {
    if (local_2f0 == (int *)0x0) {
      lVar18 = 0;
    }
    else {
      lVar18 = *(longlong *)
                (*(longlong *)(*(longlong *)(local_2e0 + 8) + 0x50) + (longlong)local_2f0[0x35] * 8)
      ;
      if (lVar18 == 0) {
        lVar18 = FUN_1400bafc2(*(longlong *)(local_2e0 + 8),(longlong)local_2f0[0x35],1);
      }
    }
    uVar21 = FUN_145cf4068();
    local_358 = &local_228;
    FUN_1449cc26b(param_2,lVar18,piVar33,uVar21);
    iVar25 = *(int *)(param_1 + 0x20c);
    uVar21 = *(undefined8 *)(local_1a8 + 0x10);
    puVar32 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar17 = puVar32 + 4;
    if ((undefined8 *)param_2[1] < puVar17) {
      FUN_140023dd8(param_2,0x28);
      puVar32 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar17 = puVar32 + 4;
    }
    *param_2 = (ulonglong)puVar17;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar32;
    param_2[6] = (ulonglong)(puVar32 + 1);
    puVar32[1] = 0;
    *puVar32 = &PTR_LAB_14a1e78c8;
    puVar32[2] = uVar21;
    *(int *)(puVar32 + 3) = iVar25 << 4;
  }
LAB_142cf6375:
  if ((local_c0 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142cf7000 FUN_142cf7000 body=31 status=ok
// SIG undefined FUN_142cf7000(void)

undefined8 FUN_142cf7000(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cf7020 FUN_142cf7020 body=38 status=ok
// SIG undefined FUN_142cf7020(void)

undefined8 FUN_142cf7020(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cf7046 FUN_142cf7046 body=3466 status=ok
// SIG undefined FUN_142cf7046(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cf7046(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float fVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  byte bVar10;
  short sVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  undefined4 uVar25;
  int iVar26;
  int iVar27;
  undefined8 *puVar28;
  longlong lVar29;
  longlong *plVar30;
  longlong *plVar31;
  longlong *plVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  longlong lVar35;
  longlong lVar36;
  longlong *plVar37;
  undefined1 *_Src;
  longlong lVar38;
  longlong lVar39;
  undefined8 *puVar40;
  short *psVar41;
  double *pdVar42;
  bool bVar43;
  undefined1 auStack_418 [32];
  wchar_t *local_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  char *local_3e0;
  undefined4 local_3d8;
  undefined4 local_3d0;
  longlong *local_3c8;
  undefined1 local_3c0;
  undefined8 local_3b8;
  undefined1 local_3b0;
  longlong local_3a0;
  ulonglong *local_398;
  longlong local_390;
  longlong local_388 [2];
  longlong local_378;
  char local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  float local_338;
  float local_334;
  float local_330;
  float local_32c;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  longlong local_2d8;
  longlong *local_2d0;
  int local_2c8;
  undefined1 local_2c0 [64];
  undefined1 *local_280;
  int local_278;
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_16c;
  undefined8 uStack_164;
  undefined8 local_15c;
  undefined8 uStack_154;
  undefined8 local_14c;
  undefined8 uStack_144;
  undefined8 local_13c;
  undefined5 uStack_134;
  undefined3 uStack_12f;
  undefined5 uStack_12c;
  undefined8 uStack_127;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  uint local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_418;
  FUN_144b1c6fa(param_1 + 0x10,&local_2d8);
  puVar40 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar28 = puVar40 + 0x11;
  if ((undefined8 *)param_2[1] < puVar28) {
    FUN_140023dd8(param_2,0x90);
    puVar40 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar28 = puVar40 + 0x11;
  }
  *param_2 = (ulonglong)puVar28;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar40;
  param_2[6] = (ulonglong)(puVar40 + 1);
  puVar40[1] = 0;
  *puVar40 = &PTR_FUN_14a1fb978;
  puVar40[3] = 0;
  *(int *)(puVar40 + 4) = local_2c8;
  if ((longlong)local_2c8 == 0) {
    *(undefined4 *)((longlong)puVar40 + 0x24) = 8;
  }
  else {
    plVar30 = &local_2d8;
    if (local_2d0 != (longlong *)0x0) {
      plVar30 = local_2d0;
    }
    FUN_1446fe144(puVar40 + 2,local_2c8,0);
    puVar28 = (undefined8 *)puVar40[3];
    if ((undefined8 *)puVar40[3] == (undefined8 *)0x0) {
      puVar28 = puVar40 + 2;
    }
    memcpy(puVar28,plVar30,(longlong)local_2c8);
  }
  puVar40[0xd] = 0;
  *(int *)(puVar40 + 0xe) = local_278;
  if ((longlong)local_278 == 0) {
    *(undefined4 *)((longlong)puVar40 + 0x74) = 8;
  }
  else {
    _Src = local_280;
    if (local_280 == (undefined1 *)0x0) {
      _Src = local_2c0;
    }
    FUN_1446fe1b8(puVar40 + 5,local_278,0);
    puVar28 = (undefined8 *)puVar40[0xd];
    if ((undefined8 *)puVar40[0xd] == (undefined8 *)0x0) {
      puVar28 = puVar40 + 5;
    }
    memcpy(puVar28,_Src,(longlong)local_278 << 3);
  }
  *(undefined4 *)(puVar40 + 0xf) = local_270;
  *(undefined4 *)((longlong)puVar40 + 0x7c) = uStack_26c;
  *(undefined4 *)(puVar40 + 0x10) = uStack_268;
  *(undefined4 *)((longlong)puVar40 + 0x84) = uStack_264;
  if (local_280 != (undefined1 *)0x0) {
    FUN_1400020a8(local_280);
  }
  if (local_2d0 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  local_178 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_16c = 0;
  uStack_164 = 0;
  local_15c = 0;
  uStack_154 = 0;
  local_14c = 0;
  uStack_144 = 0;
  local_13c = 0;
  uStack_134 = 0;
  uStack_12f = 0;
  uStack_12c = 0;
  uStack_127 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  local_100 = 1;
  local_f8 = 0;
  FUN_144b0e33a(param_2,&local_1c8);
  local_198 = DAT_14c9c0ee8;
  local_170 = 0;
  FUN_14365da46(L"DeferredLightGlobalPSOCollector");
  plVar30 = *(longlong **)(param_1 + 0x1c0);
  uVar34 = (ulonglong)*(uint *)(plVar30 + 1);
  if (0 < (int)*(uint *)(plVar30 + 1)) {
    local_398 = param_2 + 0x31;
    lVar38 = 0;
    do {
      lVar29 = lVar38;
      if ((int)uVar34 != (int)plVar30[3]) {
        iVar26 = 0;
        if (*(int *)(plVar30[4] + 4 + lVar38 * 8) != 0) {
          iVar26 = *(int *)(param_1 + 0x1c8);
        }
        lVar29 = (longlong)iVar26 + (ulonglong)(*(uint *)(plVar30[4] + lVar38 * 8) & 0x7fffffff);
      }
      pdVar42 = (double *)(lVar29 * 0x18 + plVar30[2]);
      lVar39 = lVar38 * 0x28 + *plVar30;
      lVar29 = *(longlong *)(param_1 + 0x1b8);
      iVar26 = *(int *)(lVar29 + 0x3104);
      iVar27 = *(int *)(lVar29 + 0x3100);
      fVar5 = *(float *)(lVar39 + 0xc);
      iVar12 = *(int *)(lVar29 + 0x30fc);
      dVar7 = *pdVar42;
      iVar13 = *(int *)(lVar29 + 0x30f8);
      dVar8 = pdVar42[1];
      dVar9 = pdVar42[2];
      puVar40 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar28 = puVar40 + 5;
      if ((undefined8 *)param_2[1] < puVar28) {
        FUN_140023dd8(param_2,0x30);
        puVar40 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar28 = puVar40 + 5;
      }
      *param_2 = (ulonglong)puVar28;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar40;
      param_2[6] = (ulonglong)(puVar40 + 1);
      puVar40[1] = 0;
      *puVar40 = &PTR_LAB_14a1e7fc8;
      *(float *)(puVar40 + 2) = (float)iVar13;
      *(float *)((longlong)puVar40 + 0x14) = (float)iVar12;
      *(undefined4 *)(puVar40 + 3) = 0;
      *(float *)((longlong)puVar40 + 0x1c) = (float)iVar27;
      *(float *)(puVar40 + 4) = (float)iVar26;
      *(undefined4 *)((longlong)puVar40 + 0x24) = 0x3f800000;
      lVar29 = *(longlong *)(param_1 + 0x1b8);
      dVar18 = *(double *)(lVar29 + 0x1058) - dVar9;
      dVar17 = *(double *)(lVar29 + 0x1050) - dVar8;
      dVar16 = *(double *)(lVar29 + 0x1048) - dVar7;
      dVar15 = (double)fVar5 * 1.0499999523162842 +
               (double)(*(float *)(lVar29 + 0x2170) + *(float *)(lVar29 + 0x2170));
      bVar43 = true;
      if (dVar15 * dVar15 <= dVar18 * dVar18 + dVar16 * dVar16 + dVar17 * dVar17) {
        bVar43 = 1.0 < *(double *)(lVar29 + 0x8a8) || *(double *)(lVar29 + 0x8a8) == 1.0;
      }
      uVar25 = FUN_142cf0946(&local_1c8,*(undefined1 *)(lVar29 + 0x2398),bVar43,
                             *(undefined4 *)(param_1 + 0x1f8));
      local_1c8 = DAT_14ca968c0;
      if (*(longlong *)(param_1 + 0x1e8) == 0) {
        lVar29 = 0;
      }
      else {
        lVar36 = *(longlong *)(*(longlong *)(param_1 + 0x1f0) + 8);
        lVar35 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1e8) + 0xd4);
        lVar29 = *(longlong *)(*(longlong *)(lVar36 + 0x50) + lVar35 * 8);
        if (lVar29 == 0) {
          lVar29 = FUN_1400bafc2(lVar36,lVar35,1);
        }
      }
      uStack_1c0 = lVar29;
      if (*(longlong *)(param_1 + 0x1d8) == 0) {
        lVar29 = 0;
      }
      else {
        lVar36 = *(longlong *)(*(longlong *)(param_1 + 0x1e0) + 8);
        lVar35 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d8) + 0xd4);
        lVar29 = *(longlong *)(*(longlong *)(lVar36 + 0x50) + lVar35 * 8);
        if (lVar29 == 0) {
          lVar29 = FUN_1400bafc2(lVar36,lVar35,1);
        }
      }
      local_1b8 = lVar29;
      lVar29 = FUN_140028f18(param_2,&local_1c8);
      if ((lVar29 != 0) && ((local_100 & 0x10000000) == 0)) {
        *(undefined4 *)(local_398 + 4) = (undefined4)local_1a8;
        *(undefined4 *)((longlong)local_398 + 0x24) = local_1a8._4_4_;
        *(undefined4 *)(local_398 + 5) = (undefined4)uStack_1a0;
        *(undefined4 *)((longlong)local_398 + 0x2c) = uStack_1a0._4_4_;
        *(undefined4 *)(local_398 + 2) = (undefined4)local_1b8;
        *(undefined4 *)((longlong)local_398 + 0x14) = local_1b8._4_4_;
        *(undefined4 *)(local_398 + 3) = (undefined4)uStack_1b0;
        *(undefined4 *)((longlong)local_398 + 0x1c) = uStack_1b0._4_4_;
        *(undefined4 *)local_398 = (undefined4)local_1c8;
        *(undefined4 *)((longlong)local_398 + 4) = local_1c8._4_4_;
        *(undefined4 *)(local_398 + 1) = (undefined4)uStack_1c0;
        *(undefined4 *)((longlong)local_398 + 0xc) = uStack_1c0._4_4_;
        puVar40 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar28 = puVar40 + 4;
        if ((undefined8 *)param_2[1] < puVar28) {
          FUN_140023dd8(param_2,0x28);
          puVar40 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar28 = puVar40 + 4;
        }
        *param_2 = (ulonglong)puVar28;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar40;
        param_2[6] = (ulonglong)(puVar40 + 1);
        puVar40[1] = 0;
        *puVar40 = &PTR_LAB_14a37d348;
        puVar40[2] = lVar29;
        *(undefined4 *)(puVar40 + 3) = uVar25;
        *(undefined1 *)((longlong)puVar40 + 0x1c) = 1;
      }
      FUN_1404d3a5c(&local_2d8,*(undefined8 *)(param_1 + 0x1b8),lVar39,pdVar42);
      uVar14 = *(undefined8 *)(param_1 + 0x1d0);
      if (*(longlong *)(param_1 + 0x1d8) == 0) {
        lVar29 = 0;
      }
      else {
        lVar39 = *(longlong *)(*(longlong *)(param_1 + 0x1e0) + 8);
        lVar36 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d8) + 0xd4);
        lVar29 = *(longlong *)(*(longlong *)(lVar39 + 0x50) + lVar36 * 8);
        if (lVar29 == 0) {
          lVar29 = FUN_1400bafc2(lVar39,lVar36,1);
        }
      }
      local_390 = lVar29;
      plVar30 = (longlong *)FUN_144821ef4(param_2);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c9ea8a8) && (FUN_144b3d300(&DAT_14c9ea8a8), DAT_14c9ea8a8 == -1))
      {
        FUN_141544322(&local_378);
        local_3b0 = 0;
        local_3c0 = 0;
        local_3e0 = "Unknown";
        local_3f0 = 0;
        uStack_3e8 = 0;
        local_3f8 = L"FParameters";
        local_3b8 = 0;
        local_3d0 = 0x270;
        local_3d8 = 0x38c;
        local_3c8 = &local_378;
        FUN_140b49562(&DAT_14c9ea828,0,1);
        if (local_378 != 0) {
          FUN_1400020a8();
        }
        atexit((_func_5014 *)&LAB_142cf48ad);
        _Init_thread_footer(&DAT_14c9ea8a8);
      }
      if ((byte)((*(byte *)(*(longlong *)(param_1 + 0x1d8) + 0xd0) & 0xe) - 6) < 4) {
        FUN_143236b9c(plVar30,*(longlong *)(param_1 + 0x1d8),&DAT_14c9ea828,uVar14);
      }
      else {
        FUN_1446fe2ba();
      }
      lVar29 = *(longlong *)(param_1 + 0x1d8);
      FUN_1449dab10();
      uVar34 = *(ulonglong *)(lVar29 + 0xa0);
      uVar33 = lVar29 + 0xa0 + ((longlong)uVar34 >> 0x18);
      if ((uVar34 & 1) == 0) {
        uVar33 = uVar34;
      }
      if (0 < (longlong)*(int *)(lVar29 + 0xa8)) {
        lVar39 = 0;
        do {
          if (*(longlong *)(uVar33 + lVar39 * 4) == DAT_14c9e9328) {
            uVar34 = *(ulonglong *)(lVar29 + 0xb0);
            if ((uVar34 & 1) != 0) {
              uVar34 = ((longlong)uVar34 >> 0x18) + lVar29 + 0xb0;
            }
            psVar41 = (short *)(uVar34 + lVar39);
            goto LAB_142cf7746;
          }
          lVar39 = lVar39 + 2;
        } while ((longlong)*(int *)(lVar29 + 0xa8) * 2 != lVar39);
      }
      psVar41 = &DAT_14c9c45cc;
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c9c45d0) {
        FUN_144b3d300(&DAT_14c9c45d0);
        psVar41 = &DAT_14c9c45cc;
        if (DAT_14c9c45d0 == -1) {
          DAT_14c9c45cc = 0xffff;
          _Init_thread_footer(&DAT_14c9c45d0);
          psVar41 = &DAT_14c9c45cc;
        }
      }
LAB_142cf7746:
      if (*psVar41 != -1) {
        FUN_1449dab10();
        local_3f0 = CONCAT44(local_3f0._4_4_,1);
        local_3f8 = (wchar_t *)((ulonglong)local_3f8 & 0xffffffff00000000);
        (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_378,&local_2d8,DAT_14c9e9348);
        lVar29 = local_378;
        sVar11 = *psVar41;
        if (sVar11 != -1) {
          lVar36 = *plVar30;
          puVar1 = (ulonglong *)(lVar36 + 0x60);
          lVar39 = (longlong)(int)plVar30[6] + 1;
          plVar37 = *(longlong **)(lVar36 + 0x60);
          if ((longlong)(int)plVar30[6] == 0) {
            plVar37 = (longlong *)((longlong)plVar37 + 7U & 0xfffffffffffffff8);
            plVar32 = plVar37 + 2;
            plVar31 = plVar37;
            if (*(longlong **)(lVar36 + 0x68) < plVar32) {
              FUN_140023dd8(puVar1,0x18);
              plVar37 = (longlong *)(*puVar1 + 7 & 0xfffffffffffffff8);
              plVar32 = plVar37 + 2;
              plVar31 = plVar37;
            }
LAB_142cf77e9:
            *puVar1 = (ulonglong)plVar32;
          }
          else {
            plVar32 = plVar37 + 2;
            if (plVar32 <= *(longlong **)(lVar36 + 0x68)) {
              plVar31 = (longlong *)plVar30[5];
              goto LAB_142cf77e9;
            }
            plVar31 = (longlong *)((longlong)plVar37 + 7U & 0xfffffffffffffff8);
            plVar37 = plVar31 + lVar39 * 2;
            if (*(longlong **)(lVar36 + 0x68) < plVar37) {
              local_3a0 = lVar39 * 0x10;
              FUN_140023dd8(puVar1,(uint)(lVar39 * 0x10) | 8);
              plVar31 = (longlong *)(*puVar1 + 7 & 0xfffffffffffffff8);
              plVar37 = (longlong *)(local_3a0 + (longlong)plVar31);
            }
            *puVar1 = (ulonglong)plVar37;
            plVar37 = plVar31;
            if (0 < (int)plVar30[6]) {
              lVar36 = 0;
              lVar35 = 0;
              do {
                puVar3 = (undefined4 *)(plVar30[5] + lVar36);
                uVar25 = puVar3[1];
                uVar19 = puVar3[2];
                uVar20 = puVar3[3];
                puVar4 = (undefined4 *)((longlong)plVar31 + lVar36);
                *puVar4 = *puVar3;
                puVar4[1] = uVar25;
                puVar4[2] = uVar19;
                puVar4[3] = uVar20;
                lVar35 = lVar35 + 1;
                lVar36 = lVar36 + 0x10;
              } while (lVar35 < (int)plVar30[6]);
              plVar37 = (longlong *)(lVar36 + (longlong)plVar31);
            }
          }
          *plVar37 = lVar29;
          *(short *)(plVar37 + 1) = sVar11;
          *(undefined1 *)((longlong)plVar37 + 10) = 4;
          plVar30[5] = (longlong)plVar31;
          *(int *)(plVar30 + 6) = (int)lVar39;
        }
        lVar29 = local_378;
        if (local_378 != 0) {
          LOCK();
          puVar2 = (uint *)(local_378 + 8);
          uVar6 = *puVar2;
          *puVar2 = *puVar2 - 1;
          UNLOCK();
          if ((uVar6 & 0x3fffffff) == 1) {
            puVar2 = (uint *)(local_378 + 8);
            LOCK();
            uVar6 = *puVar2;
            *puVar2 = *puVar2 | 0x40000000;
            UNLOCK();
            if ((uVar6 >> 0x1e & 1) == 0) {
              bVar10 = *(byte *)(local_378 + 0xd);
              plVar31 = (longlong *)FUN_14001cc68(0x10,8);
              plVar31[1] = lVar29;
              plVar37 = DAT_14ca843c0;
              plVar32 = DAT_14ca843c8;
              if ((bVar10 & 2) == 0) {
                do {
                  *plVar31 = (longlong)plVar37;
                  LOCK();
                  bVar43 = plVar37 != DAT_14ca843c0;
                  plVar32 = plVar31;
                  if (bVar43) {
                    plVar37 = DAT_14ca843c0;
                    plVar32 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar32;
                  UNLOCK();
                } while (bVar43);
              }
              else {
                do {
                  *plVar31 = (longlong)plVar32;
                  LOCK();
                  bVar43 = plVar32 != DAT_14ca843c8;
                  plVar37 = plVar31;
                  if (bVar43) {
                    plVar32 = DAT_14ca843c8;
                    plVar37 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar37;
                  UNLOCK();
                } while (bVar43);
              }
            }
          }
        }
      }
      iVar26 = (int)plVar30[6] + (int)plVar30[4];
      iVar27 = iVar26 + (int)plVar30[8];
      if (iVar27 != 0 && SCARRY4(iVar26,(int)plVar30[8]) == iVar27 < 0) {
        puVar40 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar28 = puVar40 + 0xb;
        if ((undefined8 *)param_2[1] < puVar28) {
          FUN_140023dd8(param_2,0x60);
          puVar40 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar28 = puVar40 + 0xb;
        }
        *param_2 = (ulonglong)puVar28;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar40;
        param_2[6] = (ulonglong)(puVar40 + 1);
        lVar29 = plVar30[7];
        lVar21 = plVar30[8];
        lVar39 = plVar30[5];
        lVar22 = plVar30[6];
        lVar36 = plVar30[3];
        lVar23 = plVar30[4];
        lVar35 = plVar30[1];
        lVar24 = plVar30[2];
        puVar40[1] = 0;
        *puVar40 = &PTR_FUN_14a1e7fd8;
        puVar40[2] = local_390;
        puVar40[3] = lVar35;
        *(int *)(puVar40 + 4) = (int)lVar24;
        puVar40[5] = lVar36;
        *(int *)(puVar40 + 6) = (int)lVar23;
        puVar40[7] = lVar39;
        *(int *)(puVar40 + 8) = (int)lVar22;
        puVar40[9] = lVar29;
        *(int *)(puVar40 + 10) = (int)lVar21;
        plVar30[1] = 0;
        *(undefined4 *)(plVar30 + 2) = 0;
        plVar30[3] = 0;
        *(undefined4 *)(plVar30 + 4) = 0;
        plVar30[5] = 0;
        *(undefined4 *)(plVar30 + 6) = 0;
        plVar30[7] = 0;
        *(undefined4 *)(plVar30 + 8) = 0;
      }
      lVar29 = *(longlong *)(param_1 + 0x1b8);
      dVar15 = *(double *)(lVar29 + 0x1030);
      dVar16 = *(double *)(lVar29 + 0x1038);
      dVar17 = *(double *)(lVar29 + 0x1040);
      local_368 = 0;
      uStack_360 = 0x3f80000000000000;
      local_358 = 0;
      uStack_350 = 0x3f80000000000000;
      local_328 = 0;
      uStack_320 = 0x3f80000000000000;
      lVar39 = FUN_1447e4f80();
      local_370 = *(char *)(lVar39 + 0x41);
      if (*(char *)(lVar39 + 0x41) == '\x03') {
        local_370 = '\x02';
      }
      local_378 = *(longlong *)(lVar29 + 0x18);
      local_338 = (float)(dVar7 + dVar15);
      local_334 = (float)(dVar8 + dVar16);
      local_330 = (float)(dVar9 + dVar17);
      local_32c = fVar5 / 0.9659258;
      local_2e8 = _DAT_14c846280;
      uStack_2e0 = _DAT_14c846288;
      local_2f8 = _DAT_14c846270;
      uStack_2f0 = _DAT_14c846278;
      local_308 = _DAT_14c846260;
      uStack_300 = _DAT_14c846268;
      local_318 = DAT_14c846250;
      uStack_314 = DAT_14c846254;
      uStack_310 = (undefined4)DAT_14c846258;
      uStack_30c = DAT_14c846258._4_4_;
      local_328 = 0;
      uStack_320 = 0;
      local_358 = 0;
      uStack_350 = 0;
      local_368 = 0;
      uStack_360 = 0;
      local_348 = 0x3f800000;
      uStack_344 = 0x3f800000;
      uStack_340 = 0x3f800000;
      uStack_33c = 0x3f800000;
      if (*(longlong *)(param_1 + 0x1e8) == 0) {
        lVar29 = 0;
      }
      else {
        lVar39 = *(longlong *)(*(longlong *)(param_1 + 0x1f0) + 8);
        lVar36 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1e8) + 0xd4);
        lVar29 = *(longlong *)(*(longlong *)(lVar39 + 0x50) + lVar36 * 8);
        if (lVar29 == 0) {
          lVar29 = FUN_1400bafc2(lVar39,lVar36,1);
        }
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c9eba78) && (FUN_144b3d300(&DAT_14c9eba78), DAT_14c9eba78 == -1))
      {
        FUN_145d4bcae(local_388);
        local_3b0 = 0;
        local_3c0 = 0;
        local_3e0 = "Unknown";
        local_3f0 = 0;
        uStack_3e8 = 0;
        local_3f8 = L"FParameters";
        local_3b8 = 0;
        local_3d0 = 0xa0;
        local_3d8 = 0x133;
        local_3c8 = local_388;
        FUN_140b49562(&DAT_14c9eb9f8,0,1);
        if (local_388[0] != 0) {
          FUN_1400020a8();
        }
        atexit((_func_5014 *)&LAB_142cf487d);
        _Init_thread_footer(&DAT_14c9eba78);
      }
      local_3f8 = (wchar_t *)&local_378;
      FUN_1449cc26b(param_2,lVar29,*(undefined8 *)(param_1 + 0x1e8),&DAT_14c9eb9f8);
      FUN_142ce821c(param_2,1);
      lVar38 = lVar38 + 1;
      plVar30 = *(longlong **)(param_1 + 0x1c0);
      uVar34 = (ulonglong)(int)plVar30[1];
    } while (lVar38 < (longlong)uVar34);
  }
  if ((local_f0 ^ (ulonglong)auStack_418) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142cf7dd1 FUN_142cf7dd1 body=517 status=ok
// SIG undefined FUN_142cf7dd1(void)

void FUN_142cf7dd1(longlong *param_1,short *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  byte bVar7;
  short sVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_2 == -1) goto LAB_142cf7f00;
  FUN_1449dab10();
  local_50 = 1;
  local_58 = 0;
  (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_40,param_3,DAT_14c9e9348);
  lVar12 = local_40;
  sVar8 = *param_2;
  if (sVar8 != -1) {
    lVar16 = *param_1;
    puVar1 = (ulonglong *)(lVar16 + 0x60);
    lVar2 = (longlong)(int)param_1[6] + 1;
    plVar13 = *(longlong **)(lVar16 + 0x60);
    if ((longlong)(int)param_1[6] == 0) {
      plVar13 = (longlong *)((longlong)plVar13 + 7U & 0xfffffffffffffff8);
      plVar15 = plVar13 + 2;
      plVar14 = plVar13;
      if (*(longlong **)(lVar16 + 0x68) < plVar15) {
        FUN_140023dd8(puVar1,0x18);
        plVar13 = (longlong *)(*puVar1 + 7 & 0xfffffffffffffff8);
        plVar15 = plVar13 + 2;
        plVar14 = plVar13;
      }
LAB_142cf7e8a:
      *puVar1 = (ulonglong)plVar15;
    }
    else {
      plVar15 = plVar13 + 2;
      if (plVar15 <= *(longlong **)(lVar16 + 0x68)) {
        plVar14 = (longlong *)param_1[5];
        goto LAB_142cf7e8a;
      }
      plVar14 = (longlong *)((longlong)plVar13 + 7U & 0xfffffffffffffff8);
      plVar13 = plVar14 + lVar2 * 2;
      if (*(longlong **)(lVar16 + 0x68) < plVar13) {
        FUN_140023dd8(puVar1,(int)lVar2 * 0x10 | 8);
        plVar14 = (longlong *)(*puVar1 + 7 & 0xfffffffffffffff8);
        plVar13 = plVar14 + lVar2 * 2;
      }
      *puVar1 = (ulonglong)plVar13;
      plVar13 = plVar14;
      if (0 < (int)param_1[6]) {
        lVar16 = 0;
        lVar17 = 0;
        do {
          puVar4 = (undefined4 *)(param_1[5] + lVar16);
          uVar9 = puVar4[1];
          uVar10 = puVar4[2];
          uVar11 = puVar4[3];
          puVar5 = (undefined4 *)((longlong)plVar14 + lVar16);
          *puVar5 = *puVar4;
          puVar5[1] = uVar9;
          puVar5[2] = uVar10;
          puVar5[3] = uVar11;
          lVar17 = lVar17 + 1;
          lVar16 = lVar16 + 0x10;
        } while (lVar17 < (int)param_1[6]);
        plVar13 = (longlong *)(lVar16 + (longlong)plVar14);
      }
    }
    *plVar13 = lVar12;
    *(short *)(plVar13 + 1) = sVar8;
    *(undefined1 *)((longlong)plVar13 + 10) = 4;
    param_1[5] = (longlong)plVar14;
    *(int *)(param_1 + 6) = (int)lVar2;
  }
  if (local_40 != 0) {
    LOCK();
    puVar3 = (uint *)(local_40 + 8);
    uVar6 = *puVar3;
    *puVar3 = *puVar3 - 1;
    UNLOCK();
    if ((uVar6 & 0x3fffffff) == 1) {
      puVar3 = (uint *)(local_40 + 8);
      LOCK();
      uVar6 = *puVar3;
      *puVar3 = *puVar3 | 0x40000000;
      UNLOCK();
      if ((uVar6 >> 0x1e & 1) == 0) {
        bVar7 = *(byte *)(local_40 + 0xd);
        plVar14 = (longlong *)FUN_14001cc68(0x10,8);
        plVar14[1] = local_40;
        plVar13 = DAT_14ca843c0;
        plVar15 = DAT_14ca843c8;
        if ((bVar7 & 2) == 0) {
          do {
            *plVar14 = (longlong)plVar13;
            LOCK();
            bVar18 = plVar13 != DAT_14ca843c0;
            plVar15 = plVar14;
            if (bVar18) {
              plVar13 = DAT_14ca843c0;
              plVar15 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar15;
            UNLOCK();
          } while (bVar18);
        }
        else {
          do {
            *plVar14 = (longlong)plVar15;
            LOCK();
            bVar18 = plVar15 != DAT_14ca843c8;
            plVar13 = plVar14;
            if (bVar18) {
              plVar15 = DAT_14ca843c8;
              plVar13 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar13;
            UNLOCK();
          } while (bVar18);
        }
      }
    }
  }
LAB_142cf7f00:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142cf7ff8 FUN_142cf7ff8 body=38 status=ok
// SIG undefined FUN_142cf7ff8(void)

undefined8 FUN_142cf7ff8(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cf801e FUN_142cf801e body=670 status=ok
// SIG undefined FUN_142cf801e(void)

void FUN_142cf801e(longlong param_1,ulonglong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int *_Src;
  undefined1 *_Src_00;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_e8 [40];
  int local_c0;
  int local_bc;
  int local_b8;
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
  puVar5 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar5 + 0x11;
  if ((undefined8 *)param_2[1] < puVar4) {
    FUN_140023dd8(param_2,0x90);
    puVar5 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar5 + 0x11;
  }
  *param_2 = (ulonglong)puVar4;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar5;
  param_2[6] = (ulonglong)(puVar5 + 1);
  puVar5[1] = 0;
  *puVar5 = &PTR_FUN_14a1fb978;
  puVar5[3] = 0;
  *(int *)(puVar5 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar5 + 0x24) = 8;
  }
  else {
    _Src = &local_c0;
    if ((int *)CONCAT44(uStack_b4,local_b8) != (int *)0x0) {
      _Src = (int *)CONCAT44(uStack_b4,local_b8);
    }
    FUN_1446fe144(puVar5 + 2,local_b0,0);
    puVar4 = (undefined8 *)puVar5[3];
    if ((undefined8 *)puVar5[3] == (undefined8 *)0x0) {
      puVar4 = puVar5 + 2;
    }
    memcpy(puVar4,_Src,(longlong)local_b0);
  }
  puVar5[0xd] = 0;
  *(int *)(puVar5 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar5 + 0x74) = 8;
  }
  else {
    _Src_00 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src_00 = local_a8;
    }
    FUN_1446fe1b8(puVar5 + 5,local_60,0);
    puVar4 = (undefined8 *)puVar5[0xd];
    if ((undefined8 *)puVar5[0xd] == (undefined8 *)0x0) {
      puVar4 = puVar5 + 5;
    }
    memcpy(puVar4,_Src_00,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar5 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar5 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar5 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar5 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(*(longlong *)(param_1 + 0x1c0) + 1) == '\x01') {
    *(undefined4 *)(*(longlong *)(param_1 + 0x1b8) + 0x94) =
         *(undefined4 *)(*(longlong *)(param_1 + 0x1c0) + 0x28);
    lVar1 = *(longlong *)(param_1 + 0x1c0);
    lVar2 = *(longlong *)(lVar1 + 0x20);
    if (lVar2 == 0) {
      iVar7 = *(int *)(lVar1 + 0x30);
      iVar6 = *(int *)(lVar1 + 0x34);
      iVar8 = *(int *)(lVar1 + 0x38);
    }
    else {
      *(undefined4 *)(*(longlong *)(param_1 + 0x1b8) + 0x60) = *(undefined4 *)(lVar2 + 8);
      *(undefined4 *)(*(longlong *)(param_1 + 0x1b8) + 100) = *(undefined4 *)(lVar2 + 0x18);
      iVar7 = *(int *)(lVar2 + 8);
      iVar8 = 1;
      if (DAT_14ca84f24 < iVar7) {
        iVar6 = iVar7 + 0xfe;
        if (-1 < iVar7 + 0x7f) {
          iVar6 = iVar7 + 0x7f;
        }
        iVar6 = iVar6 >> 7;
        iVar7 = 0x80;
      }
      else {
        iVar6 = 1;
      }
      if (DAT_14ca84f28 < iVar6) {
        iVar8 = iVar6 + 0xfe;
        if (-1 < iVar6 + 0x7f) {
          iVar8 = iVar6 + 0x7f;
        }
        iVar8 = iVar8 >> 7;
        iVar6 = 0x80;
      }
    }
    uVar3 = *(undefined8 *)(param_1 + 0x1b8);
    FUN_145e850f4();
    local_c0 = iVar7;
    local_bc = iVar6;
    local_b8 = iVar8;
    FUN_1471d8af1(param_2,param_1 + 0x1c8,uVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cf82bd FUN_142cf82bd body=229 status=ok
// SIG undefined FUN_142cf82bd(void)

void FUN_142cf82bd(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14c9e9c68,param_3);
  return;
}



// FUNCTION 142cf83a2 FUN_142cf83a2 body=81 status=ok
// SIG undefined FUN_142cf83a2(void)

void FUN_142cf83a2(undefined8 param_1,longlong *param_2)

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
  FUN_1471d8b89(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142cf83f4 FUN_142cf83f4 body=38 status=ok
// SIG undefined FUN_142cf83f4(void)

undefined8 FUN_142cf83f4(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cf841a FUN_142cf841a body=1724 status=ok
// SIG undefined FUN_142cf841a(void)

void FUN_142cf841a(longlong param_1,ulonglong *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  size_t _Size;
  longlong lVar16;
  undefined1 auStack_1a8 [32];
  longlong *local_188;
  undefined8 *local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined8 uStack_104;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined5 uStack_d4;
  undefined3 uStack_cf;
  undefined5 uStack_cc;
  undefined8 uStack_c7;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  uint local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_144b1c6fa(param_1 + 0x10,&local_168);
  puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar15 + 0x11;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x90);
    puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar15 + 0x11;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar15;
  param_2[6] = (ulonglong)(puVar15 + 1);
  puVar15[1] = 0;
  *puVar15 = &PTR_FUN_14a1fb978;
  puVar15[3] = 0;
  _Size = (size_t)(int)local_158;
  *(int *)(puVar15 + 4) = (int)local_158;
  if (_Size == 0) {
    *(undefined4 *)((longlong)puVar15 + 0x24) = 8;
  }
  else {
    puVar12 = &local_168;
    if (uStack_160 != (undefined8 *)0x0) {
      puVar12 = uStack_160;
    }
    FUN_1446fe144(puVar15 + 2,local_158 & 0xffffffff,0);
    puVar11 = (undefined8 *)puVar15[3];
    if ((undefined8 *)puVar15[3] == (undefined8 *)0x0) {
      puVar11 = puVar15 + 2;
    }
    memcpy(puVar11,puVar12,_Size);
  }
  puVar15[0xd] = 0;
  lVar16 = (longlong)iStack_108;
  puVar12 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  *(int *)(puVar15 + 0xe) = iStack_108;
  if (lVar16 == 0) {
    *(undefined4 *)((longlong)puVar15 + 0x74) = 8;
  }
  else {
    if (puVar12 == (undefined8 *)0x0) {
      puVar12 = &uStack_150;
    }
    FUN_1446fe1b8(puVar15 + 5,iStack_108,0);
    puVar11 = (undefined8 *)puVar15[0xd];
    if ((undefined8 *)puVar15[0xd] == (undefined8 *)0x0) {
      puVar11 = puVar15 + 5;
    }
    memcpy(puVar11,puVar12,lVar16 << 3);
    puVar12 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  }
  *(undefined4 *)(puVar15 + 0xf) = uStack_104._4_4_;
  *(undefined4 *)((longlong)puVar15 + 0x7c) = (undefined4)uStack_fc;
  *(undefined4 *)(puVar15 + 0x10) = uStack_fc._4_4_;
  *(undefined4 *)((longlong)puVar15 + 0x84) = (undefined4)uStack_f4;
  if (puVar12 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar12);
  }
  if (uStack_160 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (*(char *)(*(longlong *)(param_1 + 0x1c0) + 1) == '\x01') {
    uVar1 = *(undefined1 *)(param_1 + 0x1c8);
    plVar6 = *(longlong **)(param_1 + 0x1b8);
    lVar16 = *(longlong *)(param_1 + 0x1d0);
    uVar7 = *(undefined8 *)(lVar16 + 0x13818);
    FUN_145f2d934();
    FUN_1448e935e(uVar7,&local_168,&DAT_14c9e7740,uVar1);
    FUN_145f2d934();
    puVar15 = uStack_160;
    lVar9 = local_168;
    uVar7 = *(undefined8 *)(lVar16 + 0x13818);
    FUN_145f91534();
    FUN_1448e935e(uVar7,&local_168,&DAT_14c9e7868,0);
    FUN_145f91534();
    lVar10 = local_168;
    local_180 = uStack_160;
    local_118 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_168 = 0;
    uStack_160 = (undefined8 *)0x0;
    uStack_10c = 0;
    iStack_108 = 0;
    uStack_104 = 0;
    uStack_fc = 0;
    uStack_f4 = 0;
    local_ec = 0;
    uStack_e4 = 0;
    local_dc = 0;
    uStack_d4 = 0;
    uStack_cf = 0;
    uStack_cc = 0;
    uStack_c7 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    local_a0 = 1;
    local_98 = 0;
    FUN_144b0e33a(param_2,&local_168);
    iVar2 = *(int *)(lVar16 + 0x3104);
    iVar3 = *(int *)(lVar16 + 0x3100);
    iVar4 = *(int *)(lVar16 + 0x30fc);
    iVar5 = *(int *)(lVar16 + 0x30f8);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar11 + 5;
    if ((undefined8 *)param_2[1] < puVar12) {
      FUN_140023dd8(param_2,0x30);
      puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar12 = puVar11 + 5;
    }
    *param_2 = (ulonglong)puVar12;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar11;
    param_2[6] = (ulonglong)(puVar11 + 1);
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_14a1e7fc8;
    *(float *)(puVar11 + 2) = (float)iVar5;
    *(float *)((longlong)puVar11 + 0x14) = (float)iVar4;
    *(undefined4 *)(puVar11 + 3) = 0;
    *(float *)((longlong)puVar11 + 0x1c) = (float)iVar3;
    *(float *)(puVar11 + 4) = (float)iVar2;
    *(undefined4 *)((longlong)puVar11 + 0x24) = 0x3f800000;
    local_168 = DAT_14c9e7948;
    if (lVar9 == 0) {
      puVar12 = (undefined8 *)0x0;
    }
    else {
      lVar16 = puVar15[1];
      puVar12 = *(undefined8 **)
                 (*(longlong *)(lVar16 + 0x50) + (longlong)*(int *)(lVar9 + 0xd4) * 8);
      if (puVar12 == (undefined8 *)0x0) {
        puVar12 = (undefined8 *)FUN_1400bafc2(lVar16,(longlong)*(int *)(lVar9 + 0xd4),1);
      }
    }
    uStack_160 = puVar12;
    if (lVar10 == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = *(ulonglong *)
                (*(longlong *)(local_180[1] + 0x50) + (longlong)*(int *)(lVar10 + 0xd4) * 8);
      if (uVar13 == 0) {
        uVar13 = FUN_1400bafc2(local_180[1],(longlong)*(int *)(lVar10 + 0xd4),1);
      }
    }
    local_128 = DAT_14c9c0d38;
    local_138 = DAT_14c9c0d50;
    uStack_130 = DAT_14c9c0d68;
    local_110 = 0;
    local_158 = uVar13;
    lVar16 = FUN_140028f18(param_2);
    if ((lVar16 != 0) && ((local_a0 & 0x10000000) == 0)) {
      *(undefined4 *)(param_2 + 0x35) = (undefined4)local_148;
      *(undefined4 *)((longlong)param_2 + 0x1ac) = local_148._4_4_;
      *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_140;
      *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_140._4_4_;
      *(int *)(param_2 + 0x33) = (int)local_158;
      *(undefined4 *)((longlong)param_2 + 0x19c) = local_158._4_4_;
      *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_150;
      *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_150._4_4_;
      *(undefined4 *)(param_2 + 0x31) = (undefined4)local_168;
      *(undefined4 *)((longlong)param_2 + 0x18c) = local_168._4_4_;
      *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_160;
      *(undefined4 *)((longlong)param_2 + 0x194) = uStack_160._4_4_;
      puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar12 = puVar11 + 4;
      if ((undefined8 *)param_2[1] < puVar12) {
        FUN_140023dd8(param_2,0x28);
        puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar12 = puVar11 + 4;
      }
      *param_2 = (ulonglong)puVar12;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar11;
      param_2[6] = (ulonglong)(puVar11 + 1);
      puVar11[1] = 0;
      *puVar11 = &PTR_LAB_14a37d348;
      puVar11[2] = lVar16;
      *(undefined4 *)(puVar11 + 3) = 0;
      *(undefined1 *)((longlong)puVar11 + 0x1c) = 1;
    }
    FUN_145f2dba2();
    local_178 = 0;
    uStack_170 = 0;
    FUN_1448f70da(lVar9,&DAT_14c9e9cf0,plVar6,&local_178);
    FUN_145f917a2();
    local_178 = 0;
    uStack_170 = 0;
    FUN_1448f70da(lVar10,&DAT_14c9e9d78,plVar6 + 0x10,&local_178);
    if (lVar9 == 0) {
      lVar14 = 0;
    }
    else {
      lVar16 = puVar15[1];
      lVar14 = *(longlong *)(*(longlong *)(lVar16 + 0x50) + (longlong)*(int *)(lVar9 + 0xd4) * 8);
      if (lVar14 == 0) {
        lVar14 = FUN_1400bafc2(lVar16,(longlong)*(int *)(lVar9 + 0xd4),1);
      }
    }
    FUN_145f2dba2();
    local_188 = plVar6;
    FUN_1449cc26b(param_2,lVar14,lVar9,&DAT_14c9e9cf0);
    if (lVar10 == 0) {
      lVar16 = 0;
    }
    else {
      lVar16 = *(longlong *)
                (*(longlong *)(local_180[1] + 0x50) + (longlong)*(int *)(lVar10 + 0xd4) * 8);
      if (lVar16 == 0) {
        lVar16 = FUN_1400bafc2(local_180[1],(longlong)*(int *)(lVar10 + 0xd4),1);
      }
    }
    FUN_145f917a2();
    local_188 = plVar6 + 0x10;
    FUN_1449cc26b(param_2,lVar16,lVar10,&DAT_14c9e9d78);
    uVar7 = DAT_14c9e7940;
    puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar15 + 5;
    if ((undefined8 *)param_2[1] < puVar12) {
      FUN_140023dd8(param_2,0x30);
      puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar12 = puVar15 + 5;
    }
    *param_2 = (ulonglong)puVar12;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar15;
    param_2[6] = (ulonglong)(puVar15 + 1);
    puVar15[1] = 0;
    *puVar15 = &PTR_LAB_14a1fb5a8;
    *(undefined4 *)(puVar15 + 2) = 0;
    puVar15[3] = uVar7;
    *(undefined4 *)(puVar15 + 4) = 0;
    uVar8 = DAT_14c9e7938;
    uVar7 = *(undefined8 *)(*plVar6 + 0x10);
    puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar15 + 5;
    if ((undefined8 *)param_2[1] < puVar12) {
      FUN_140023dd8(param_2,0x30);
      puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar12 = puVar15 + 5;
    }
    *param_2 = (ulonglong)puVar12;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar15;
    param_2[6] = (ulonglong)(puVar15 + 1);
    puVar15[1] = 0;
    *puVar15 = &PTR_FUN_14a20cb88;
    puVar15[2] = uVar8;
    puVar15[3] = uVar7;
    puVar15[4] = 0xffffffff00000000;
  }
  if ((local_90 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cf8ae4 FUN_142cf8ae4 body=304 status=ok
// SIG undefined FUN_142cf8ae4(void)

void FUN_142cf8ae4(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar3 = (ulonglong)param_2 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar4 = uVar3 + 0xf;
      if (param_2 < 0xfff) {
        uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
      }
      else {
        if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
          uVar5 = 0x32;
          if (0x32 < bVar2) {
            uVar5 = (ulonglong)bVar2;
          }
          uVar6 = 0x32 - (ulonglong)bVar2;
          do {
            uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_142cf8b45;
            lVar1 = uVar5 + 1 + uVar6;
            uVar6 = uVar6 - 1;
          } while (lVar1 != 0x33);
        }
        uVar3 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar3 = (ulonglong)DAT_14c841df8;
        }
        uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
      }
    }
    else {
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
    }
  }
LAB_142cf8b45:
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar3 >> 3)) {
    uVar4 = uVar3 >> 3 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,4);
  }
  return;
}



// FUNCTION 142cf8c14 FUN_142cf8c14 body=346 status=ok
// SIG undefined FUN_142cf8c14(void)

void FUN_142cf8c14(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_142cf8ca6;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_142cf8ca6:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 142cf8d6e FUN_142cf8d6e body=31 status=ok
// SIG undefined FUN_142cf8d6e(void)

undefined8 FUN_142cf8d6e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cf8d8e FUN_142cf8d8e body=31 status=ok
// SIG undefined FUN_142cf8d8e(void)

undefined8 FUN_142cf8d8e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cf8dae FUN_142cf8dae body=38 status=ok
// SIG undefined FUN_142cf8dae(void)

undefined8 FUN_142cf8dae(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cf8dd4 FUN_142cf8dd4 body=4165 status=ok
// SIG undefined FUN_142cf8dd4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cf8dd4(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulonglong *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  code *pcVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  ulonglong uVar18;
  longlong *plVar19;
  longlong *plVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong lVar25;
  uint uVar26;
  ulonglong uVar27;
  undefined8 *puVar28;
  size_t _Size;
  longlong lVar29;
  longlong lVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auStack_288 [32];
  wchar_t *local_268;
  wchar_t *local_260;
  ulonglong uStack_258;
  char *local_250;
  code *local_248;
  code *local_240;
  longlong *local_238;
  longlong *local_230;
  undefined1 *local_228;
  undefined1 *local_220;
  undefined4 local_218;
  undefined8 local_210;
  longlong local_200;
  longlong local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  ulonglong *local_1e0;
  longlong *local_1d8;
  code *local_1d0;
  longlong *local_1c8;
  longlong *local_1c0;
  longlong local_1b8;
  longlong lStack_1b0;
  float local_1a8;
  float fStack_1a4;
  float local_1a0;
  float fStack_19c;
  float local_198;
  float local_194;
  undefined8 local_188;
  char local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  int iStack_118;
  undefined8 uStack_114;
  undefined8 uStack_10c;
  undefined8 uStack_104;
  undefined8 local_fc;
  undefined8 uStack_f4;
  undefined8 uStack_ec;
  undefined5 uStack_e4;
  undefined3 local_df;
  undefined5 uStack_dc;
  undefined8 uStack_d7;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  uint local_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_288;
  FUN_144b1c6fa(param_1 + 0x10,&local_178);
  puVar28 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar28 + 0x11;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x90);
    puVar28 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar28 + 0x11;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar28;
  param_2[6] = (ulonglong)(puVar28 + 1);
  puVar28[1] = 0;
  *puVar28 = &PTR_FUN_14a1fb978;
  puVar28[3] = 0;
  _Size = (size_t)(int)local_168;
  *(int *)(puVar28 + 4) = (int)local_168;
  if (_Size == 0) {
    *(undefined4 *)((longlong)puVar28 + 0x24) = 8;
  }
  else {
    puVar12 = &local_178;
    if (uStack_170 != (undefined8 *)0x0) {
      puVar12 = uStack_170;
    }
    FUN_1446fe144(puVar28 + 2,local_168 & 0xffffffff,0);
    puVar16 = (undefined8 *)puVar28[3];
    if ((undefined8 *)puVar28[3] == (undefined8 *)0x0) {
      puVar16 = puVar28 + 2;
    }
    memcpy(puVar16,puVar12,_Size);
  }
  puVar28[0xd] = 0;
  lVar29 = (longlong)iStack_118;
  puVar12 = (undefined8 *)CONCAT44(uStack_11c,local_120);
  *(int *)(puVar28 + 0xe) = iStack_118;
  if (lVar29 == 0) {
    *(undefined4 *)((longlong)puVar28 + 0x74) = 8;
  }
  else {
    if (puVar12 == (undefined8 *)0x0) {
      puVar12 = &uStack_160;
    }
    FUN_1446fe1b8(puVar28 + 5,iStack_118,0);
    puVar16 = (undefined8 *)puVar28[0xd];
    if ((undefined8 *)puVar28[0xd] == (undefined8 *)0x0) {
      puVar16 = puVar28 + 5;
    }
    memcpy(puVar16,puVar12,lVar29 << 3);
    puVar12 = (undefined8 *)CONCAT44(uStack_11c,local_120);
  }
  *(undefined4 *)(puVar28 + 0xf) = uStack_114._4_4_;
  *(undefined4 *)((longlong)puVar28 + 0x7c) = (undefined4)uStack_10c;
  *(undefined4 *)(puVar28 + 0x10) = uStack_10c._4_4_;
  *(undefined4 *)((longlong)puVar28 + 0x84) = (undefined4)uStack_104;
  if (puVar12 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar12);
  }
  if (uStack_170 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  lVar29 = *(longlong *)(param_1 + 0x1c8);
  if ((longlong)*(int *)(lVar29 + 0x88) == 0) {
LAB_142cf9dc1:
    if ((local_a0 ^ (ulonglong)auStack_288) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  lVar15 = **(longlong **)(param_1 + 0x1c0);
  plVar20 = *(longlong **)(lVar29 + 0x80);
  local_1c8 = plVar20 + (longlong)*(int *)(lVar29 + 0x88) * 4;
  uVar26 = *(uint *)(lVar29 + 0xd4);
  uVar21 = (ulonglong)((float)*(uint *)(lVar29 + 0xd0) * (float)uVar26);
  uVar18 = uVar21 & 0xffffffff;
  fVar32 = (float)uVar18;
  fVar34 = 1.0 / (float)uVar26;
  fVar33 = 1.0 / (float)(uVar26 - 1);
  local_1d0 = (code *)(uVar21 << 0x20 | uVar18);
  local_1d8 = (longlong *)CONCAT44(uVar26,uVar26);
  local_1e0 = param_2 + 0x31;
  local_1e8 = lVar15 + 0x18;
  local_1f8 = lVar15;
LAB_142cf9077:
  local_1c0 = (longlong *)*plVar20;
  if (local_1c0 != (longlong *)0x0) {
    lVar29 = FUN_1449cbe5c(local_1c0,*(undefined4 *)(lVar15 + 0x3090),&local_1c0);
    puVar28 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar28 + 5;
    if ((undefined8 *)param_2[1] < puVar12) {
      FUN_140023dd8(param_2,0x30);
      puVar28 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar12 = puVar28 + 5;
    }
    *param_2 = (ulonglong)puVar12;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar28;
    param_2[6] = (ulonglong)(puVar28 + 1);
    puVar28[1] = 0;
    puVar28[2] = 0;
    *puVar28 = &PTR_LAB_14a1e7fc8;
    *(undefined4 *)(puVar28 + 3) = 0;
    *(float *)((longlong)puVar28 + 0x1c) = fVar32;
    *(float *)(puVar28 + 4) = fVar32;
    *(undefined4 *)((longlong)puVar28 + 0x24) = 0x3f800000;
    local_128 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_178 = 0;
    uStack_170 = (undefined8 *)0x0;
    uStack_dc = 0;
    uStack_d7 = 0;
    uStack_ec = 0;
    uStack_e4 = 0;
    local_df = 0;
    local_fc = 0;
    uStack_f4 = 0;
    uStack_10c = 0;
    uStack_104 = 0;
    uStack_11c = 0;
    iStack_118 = 0;
    uStack_114 = 0;
    local_b8 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b0 = 1;
    local_a8 = 0;
    FUN_144b0e33a(param_2,&local_178);
    uStack_140 = DAT_14c9c0db0;
    local_148 = DAT_14c9c0d50;
    local_138 = DAT_14c9c0d98;
    local_120 = 0;
    lVar29 = *(longlong *)(lVar29 + 0x18);
    uVar5 = *(undefined8 *)(lVar15 + 0x13818);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca4b780) && (FUN_144b3d300(&DAT_14ca4b780), DAT_14ca4b780 == -1)) {
      FUN_145e1a792();
      local_220 = &LAB_14712ac08;
      local_228 = &LAB_14712ac0c;
      local_230 = (longlong *)&LAB_1472e3912;
      local_238 = (longlong *)&LAB_1472e3916;
      local_240 = FUN_1472e391a;
      local_248 = FUN_1472e3942;
      local_260 = L"ScreenPassVS";
      local_268 = L"/Engine/Private/ScreenPass.usf";
      local_210 = 0;
      local_218 = 0xe0;
      local_250 = (char *)CONCAT44(local_250._4_4_,1);
      uStack_258 = uStack_258 & 0xffffffff00000000;
      FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
      _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430179ee);
      _Init_thread_footer(&DAT_14ca4b780);
    }
    FUN_1448e935e(uVar5,&local_1a8,&DAT_14ca4b6d8,0);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca4b780) && (FUN_144b3d300(&DAT_14ca4b780), DAT_14ca4b780 == -1)) {
      FUN_145e1a792();
      local_220 = &LAB_14712ac08;
      local_228 = &LAB_14712ac0c;
      local_230 = (longlong *)&LAB_1472e3912;
      local_238 = (longlong *)&LAB_1472e3916;
      local_240 = FUN_1472e391a;
      local_248 = FUN_1472e3942;
      local_260 = L"ScreenPassVS";
      local_268 = L"/Engine/Private/ScreenPass.usf";
      local_210 = 0;
      local_218 = 0xe0;
      local_250 = (char *)CONCAT44(local_250._4_4_,1);
      uStack_258 = uStack_258 & 0xffffffff00000000;
      FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
      _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430179ee);
      _Init_thread_footer(&DAT_14ca4b780);
    }
    local_200 = CONCAT44(fStack_1a4,local_1a8);
    local_1f0 = CONCAT44(fStack_19c,local_1a0);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9e7de8) && (FUN_144b3d300(&DAT_14c9e7de8), DAT_14c9e7de8 == -1)) {
      FUN_14607e984();
      local_220 = &LAB_14712ac08;
      local_228 = &LAB_14712ac0c;
      local_230 = (longlong *)&LAB_1471d0786;
      local_238 = (longlong *)&LAB_142cddd5e;
      local_240 = FUN_1471d078a;
      local_248 = FUN_1471d07e4;
      local_260 = L"Main";
      local_268 = L"/Engine/Private/LightFunctionAtlas/LightFunctionAtlasRender.usf";
      local_210 = 0;
      local_218 = 0xf8;
      local_250 = (char *)CONCAT44(local_250._4_4_,1);
      uStack_258 = CONCAT44(uStack_258._4_4_,3);
      FUN_140db5666(&DAT_14c9e7d40,1,&DAT_14c9e7cd8,L"FLightFunctionAtlasSlotPS");
      _DAT_14c9e7d40 = &PTR_FUN_14a203b98;
      atexit((_func_5014 *)&LAB_142cddd66);
      _Init_thread_footer(&DAT_14c9e7de8);
    }
    puVar6 = *(ulonglong **)(lVar29 + 0x28);
    uVar18 = puVar6[3];
    if ((uVar18 & 1) != 0) {
      uVar18 = (longlong)puVar6 + ((longlong)uVar18 >> 0x18) + 0x18;
    }
    uVar21 = puVar6[5];
    if ((uVar21 & 1) != 0) {
      uVar21 = (longlong)puVar6 + ((longlong)uVar21 >> 0x18) + 0x28;
    }
    uVar24 = puVar6[1];
    if ((uVar24 & 1) != 0) {
      uVar24 = (longlong)puVar6 + ((longlong)uVar24 >> 0x18) + 8;
    }
    uVar27 = *puVar6;
    if ((uVar27 & 1) != 0) {
      uVar27 = ((longlong)uVar27 >> 0x18) + (longlong)puVar6;
    }
    lVar30 = ((ulonglong)(DAT_14c9e7d68 * -0x622015f714c7d297) >> 0x2f ^
             DAT_14c9e7d68 * -0x622015f714c7d297) * -0x622015f714c7d297;
    uVar26 = *(uint *)(uVar27 + (ulonglong)
                                ((uint)puVar6[2] &
                                 ((uint)((ulonglong)lVar30 >> 0x2f) ^ (uint)lVar30) * 0x2d69 &
                                0xffff) * 4);
    if (uVar26 != 0xffffffff) {
      do {
        uVar27 = (ulonglong)uVar26;
        if ((*(longlong *)(uVar18 + uVar27 * 8) == DAT_14c9e7d68) &&
           (*(int *)(uVar21 + uVar27 * 4) == 0)) {
          uVar18 = puVar6[7];
          if ((uVar18 & 1) != 0) {
            uVar18 = (longlong)(puVar6 + 7) + ((longlong)uVar18 >> 0x18);
          }
          uVar24 = *(ulonglong *)(uVar18 + (longlong)(int)uVar26 * 8);
          if ((uVar24 & 1) != 0) {
            uVar24 = ((longlong)uVar24 >> 0x18) + uVar18 + (longlong)(int)uVar26 * 8;
          }
          goto LAB_142cf936f;
        }
        uVar26 = *(uint *)(uVar24 + uVar27 * 4);
      } while (uVar26 != 0xffffffff);
    }
    uVar24 = 0;
LAB_142cf936f:
    local_178 = DAT_14ca94df8;
    if (local_200 == 0) {
      puVar12 = (undefined8 *)0x0;
    }
    else {
      puVar12 = *(undefined8 **)
                 (*(longlong *)(*(longlong *)(local_1f0 + 8) + 0x50) +
                 (longlong)*(int *)(local_200 + 0xd4) * 8);
      if (puVar12 == (undefined8 *)0x0) {
        puVar12 = (undefined8 *)
                  FUN_1400bafc2(*(longlong *)(local_1f0 + 8),(longlong)*(int *)(local_200 + 0xd4),
                                CONCAT71((int7)(uVar21 >> 8),1));
      }
    }
    uStack_170 = puVar12;
    if (uVar24 == 0) {
      uVar18 = 0;
    }
    else {
      uVar18 = *(ulonglong *)
                (*(longlong *)(*(longlong *)(lVar29 + 8) + 0x50) +
                (longlong)*(int *)(uVar24 + 0xd4) * 8);
      if (uVar18 == 0) {
        uVar18 = FUN_1400bafc2(*(longlong *)(lVar29 + 8),(longlong)*(int *)(uVar24 + 0xd4),1);
      }
    }
    local_168 = uVar18;
    lVar30 = FUN_140028f18(param_2,&local_178);
    if ((lVar30 != 0) && ((local_b0 & 0x10000000) == 0)) {
      *(undefined4 *)(local_1e0 + 4) = (undefined4)local_158;
      *(undefined4 *)((longlong)local_1e0 + 0x24) = local_158._4_4_;
      *(undefined4 *)(local_1e0 + 5) = (undefined4)uStack_150;
      *(undefined4 *)((longlong)local_1e0 + 0x2c) = uStack_150._4_4_;
      *(int *)(local_1e0 + 2) = (int)local_168;
      *(undefined4 *)((longlong)local_1e0 + 0x14) = local_168._4_4_;
      *(undefined4 *)(local_1e0 + 3) = (undefined4)uStack_160;
      *(undefined4 *)((longlong)local_1e0 + 0x1c) = uStack_160._4_4_;
      *(undefined4 *)local_1e0 = (undefined4)local_178;
      *(undefined4 *)((longlong)local_1e0 + 4) = local_178._4_4_;
      *(undefined4 *)(local_1e0 + 1) = (undefined4)uStack_170;
      *(undefined4 *)((longlong)local_1e0 + 0xc) = uStack_170._4_4_;
      puVar28 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar12 = puVar28 + 4;
      if ((undefined8 *)param_2[1] < puVar12) {
        FUN_140023dd8(param_2,0x28);
        puVar28 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar12 = puVar28 + 4;
      }
      *param_2 = (ulonglong)puVar12;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar28;
      param_2[6] = (ulonglong)(puVar28 + 1);
      puVar28[1] = 0;
      *puVar28 = &PTR_LAB_14a37d348;
      puVar28[2] = lVar30;
      *(undefined4 *)(puVar28 + 3) = 0;
      *(undefined1 *)((longlong)puVar28 + 0x1c) = 1;
    }
    fStack_19c = (float)*(int *)((longlong)plVar20 + 0xc) + 0.5;
    local_1a0 = (float)(int)plVar20[1] + 0.5;
    local_1a8 = fVar33;
    fStack_1a4 = fVar33;
    local_198 = fVar34;
    local_194 = fVar34;
    lVar30 = FUN_144a8f66a();
    local_180 = *(char *)(lVar30 + 0x41);
    if (*(char *)(lVar30 + 0x41) == '\x03') {
      local_180 = '\x02';
    }
    local_188 = DAT_14cb055b0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9e9fd0) && (FUN_144b3d300(&DAT_14c9e9fd0), DAT_14c9e9fd0 == -1)) {
      FUN_14607b538(&local_1b8);
      local_220 = (undefined1 *)((ulonglong)local_220 & 0xffffffffffffff00);
      local_230 = (longlong *)((ulonglong)local_230 & 0xffffffffffffff00);
      local_250 = "Unknown";
      local_260 = (wchar_t *)0x0;
      uStack_258 = 0;
      local_268 = L"FParameters";
      local_228 = (undefined1 *)0x0;
      local_240 = (code *)CONCAT44(local_240._4_4_,0x30);
      local_248 = (code *)CONCAT44(local_248._4_4_,0xa1);
      local_238 = &local_1b8;
      FUN_140b49562(&DAT_14c9e9f50,0,1);
      if (local_1b8 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cf4779);
      _Init_thread_footer(&DAT_14c9e9fd0);
      lVar15 = local_1f8;
    }
    local_1b8 = 0;
    lStack_1b0 = 0;
    FUN_1448f70da(uVar24,&DAT_14c9e9f50,&local_1a8,&local_1b8);
    if (uVar24 == 0) {
      lVar30 = 0;
    }
    else {
      lVar30 = *(longlong *)
                (*(longlong *)(*(longlong *)(lVar29 + 8) + 0x50) +
                (longlong)*(int *)(uVar24 + 0xd4) * 8);
      if (lVar30 == 0) {
        lVar30 = FUN_1400bafc2(*(longlong *)(lVar29 + 8),(longlong)*(int *)(uVar24 + 0xd4),1);
      }
    }
    lVar29 = FUN_144821ef4(param_2);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9e9fd0) && (FUN_144b3d300(&DAT_14c9e9fd0), DAT_14c9e9fd0 == -1)) {
      FUN_14607b538(&local_1b8);
      local_220 = (undefined1 *)((ulonglong)local_220 & 0xffffffffffffff00);
      local_230 = (longlong *)((ulonglong)local_230 & 0xffffffffffffff00);
      local_250 = "Unknown";
      local_260 = (wchar_t *)0x0;
      uStack_258 = 0;
      local_268 = L"FParameters";
      local_228 = (undefined1 *)0x0;
      local_240 = (code *)CONCAT44(local_240._4_4_,0x30);
      local_248 = (code *)CONCAT44(local_248._4_4_,0xa1);
      local_238 = &local_1b8;
      FUN_140b49562(&DAT_14c9e9f50,0,1);
      if (local_1b8 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cf4779);
      _Init_thread_footer(&DAT_14c9e9fd0);
      lVar15 = local_1f8;
    }
    if ((byte)((*(byte *)(uVar24 + 0xd0) & 0xe) - 6) < 4) {
      FUN_143236b9c(lVar29,uVar24);
    }
    else {
      FUN_1446fe2ba();
    }
    plVar14 = local_1c0;
    iVar10 = *(int *)(lVar15 + 0x3090);
    pcVar13 = *(code **)(*local_1c0 + 0x30);
    plVar19 = local_1c0;
    if (pcVar13 != FUN_1449da0d6) {
      plVar17 = local_1c0;
      if (pcVar13 != FUN_14477ada4) goto LAB_142cf9bb9;
      lVar15 = FUN_14477ada4(local_1c0,iVar10);
      lVar25 = lVar15;
      goto joined_r0x000142cf9719;
    }
    do {
      plVar17 = (longlong *)plVar19[0x19];
      if (plVar17 == (longlong *)0x0) goto LAB_142cf9bc3;
      lVar25 = plVar19[0x1a];
      if ((*(byte *)(lVar25 + 0x150) & 1) != 0) {
        if ((longlong)*(int *)(lVar25 + 0x2d0) < 1) goto LAB_142cf9bc3;
        lVar23 = 0;
        lVar22 = 0;
        goto LAB_142cf96e2;
      }
      pcVar13 = *(code **)(*plVar17 + 0x30);
      plVar19 = plVar17;
    } while (pcVar13 == FUN_1449da0d6);
    if (pcVar13 != FUN_14477ada4) {
LAB_142cf9bb9:
      lVar15 = (*pcVar13)(plVar17,iVar10);
      lVar25 = lVar15;
      goto joined_r0x000142cf9719;
    }
    plVar19 = (longlong *)plVar17[0x19];
    if (*(code **)(*plVar19 + 0x350) != FUN_14478329a) {
      lVar15 = (**(code **)(*plVar19 + 0x350))(plVar19,iVar10,0x1449da004);
      goto LAB_142cf970a;
    }
    if (0 < (longlong)(int)plVar19[0x4b]) {
      lVar22 = 0;
      lVar25 = 0;
      do {
        lVar15 = *(longlong *)(plVar19[0x4a] + lVar22 * 8);
        if (*(int *)(lVar15 + 0x24) == iVar10) {
          if (*(char *)(lVar15 + 0x20) == '\x04') {
            lVar25 = lVar15;
          }
          if (*(char *)(lVar15 + 0x20) == DAT_14cb0cc00) break;
        }
        lVar22 = lVar22 + 1;
        lVar15 = lVar25;
      } while ((int)plVar19[0x4b] != lVar22);
      goto LAB_142cf970a;
    }
    goto LAB_142cf9bc3;
  }
  goto LAB_142cf9d8c;
LAB_142cf96e2:
  do {
    lVar15 = *(longlong *)(*(longlong *)(lVar25 + 0x2c8) + lVar23 * 8);
    if (*(int *)(lVar15 + 0x24) == iVar10) {
      if (*(char *)(lVar15 + 0x20) == '\x04') {
        lVar22 = lVar15;
      }
      if (*(char *)(lVar15 + 0x20) == DAT_14cb0cc00) break;
    }
    lVar23 = lVar23 + 1;
    lVar15 = lVar22;
  } while (*(int *)(lVar25 + 0x2d0) != lVar23);
LAB_142cf970a:
  if (lVar15 != 0) {
    lVar25 = *(longlong *)(lVar15 + 0x18);
joined_r0x000142cf9719:
    if (lVar25 != 0) goto LAB_142cf9be7;
  }
LAB_142cf9bc3:
  do {
    do {
      plVar14 = (longlong *)(**(code **)(*plVar14 + 0x38))(plVar14,iVar10);
      lVar15 = (**(code **)(*plVar14 + 0x30))(plVar14,iVar10);
    } while (lVar15 == 0);
LAB_142cf9be7:
    lVar25 = local_1f8;
  } while ((*(byte *)(lVar15 + 0x28) & 0x10) == 0);
  FUN_144ab89ca(uVar24,lVar29,local_1f8,local_1e8);
  local_268 = *(wchar_t **)(*(longlong *)(lVar25 + 8) + 0x40);
  FUN_14303dd62(uVar24,lVar29,plVar14);
  iVar10 = *(int *)(lVar29 + 0x30) + *(int *)(lVar29 + 0x20);
  iVar11 = iVar10 + *(int *)(lVar29 + 0x40);
  if (iVar11 != 0 && SCARRY4(iVar10,*(int *)(lVar29 + 0x40)) == iVar11 < 0) {
    puVar28 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar28 + 0xb;
    if ((undefined8 *)param_2[1] < puVar12) {
      FUN_140023dd8(param_2,0x60);
      puVar28 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar12 = puVar28 + 0xb;
    }
    *param_2 = (ulonglong)puVar12;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar28;
    param_2[6] = (ulonglong)(puVar28 + 1);
    uVar5 = *(undefined8 *)(lVar29 + 0x38);
    uVar1 = *(undefined4 *)(lVar29 + 0x40);
    uVar7 = *(undefined8 *)(lVar29 + 0x28);
    uVar2 = *(undefined4 *)(lVar29 + 0x30);
    uVar8 = *(undefined8 *)(lVar29 + 0x18);
    uVar3 = *(undefined4 *)(lVar29 + 0x20);
    uVar9 = *(undefined8 *)(lVar29 + 8);
    uVar4 = *(undefined4 *)(lVar29 + 0x10);
    puVar28[1] = 0;
    *puVar28 = &PTR_FUN_14a1e7fd8;
    puVar28[2] = lVar30;
    puVar28[3] = uVar9;
    *(undefined4 *)(puVar28 + 4) = uVar4;
    puVar28[5] = uVar8;
    *(undefined4 *)(puVar28 + 6) = uVar3;
    puVar28[7] = uVar7;
    *(undefined4 *)(puVar28 + 8) = uVar2;
    puVar28[9] = uVar5;
    *(undefined4 *)(puVar28 + 10) = uVar1;
    *(undefined8 *)(lVar29 + 8) = 0;
    *(undefined4 *)(lVar29 + 0x10) = 0;
    *(undefined8 *)(lVar29 + 0x18) = 0;
    *(undefined4 *)(lVar29 + 0x20) = 0;
    *(undefined8 *)(lVar29 + 0x28) = 0;
    *(undefined4 *)(lVar29 + 0x30) = 0;
    *(undefined8 *)(lVar29 + 0x38) = 0;
    *(undefined4 *)(lVar29 + 0x40) = 0;
  }
  fVar31 = (float)(*(int *)((longlong)plVar20 + 0x14) - *(int *)((longlong)plVar20 + 0xc));
  local_1b8 = local_200;
  lStack_1b0 = local_1f0;
  local_230 = &local_1b8;
  local_238 = local_1d8;
  local_240 = local_1d0;
  local_248 = (code *)CONCAT44(local_248._4_4_,fVar31);
  local_250 = (char *)CONCAT44(local_250._4_4_,(float)((int)plVar20[2] - (int)plVar20[1]));
  uStack_258 = CONCAT44(uStack_258._4_4_,(float)*(int *)((longlong)plVar20 + 0xc));
  local_260 = (wchar_t *)CONCAT44(local_260._4_4_,(float)(int)plVar20[1]);
  local_268 = (wchar_t *)CONCAT44(local_268._4_4_,fVar31);
  local_220 = (undefined1 *)CONCAT44(local_220._4_4_,1);
  local_228 = (undefined1 *)((ulonglong)local_228 & 0xffffffff00000000);
  FUN_140094833(param_2);
  lVar15 = local_1f8;
LAB_142cf9d8c:
  plVar20 = plVar20 + 4;
  if (plVar20 == local_1c8) goto LAB_142cf9dc1;
  goto LAB_142cf9077;
}



// FUNCTION 142cf9e26 FUN_142cf9e26 body=38 status=ok
// SIG undefined FUN_142cf9e26(void)

undefined8 FUN_142cf9e26(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cf9e4c FUN_142cf9e4c body=2363 status=ok
// SIG undefined FUN_142cf9e4c(void)

void FUN_142cf9e4c(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  size_t _Size;
  longlong lVar15;
  double dVar16;
  undefined1 auStack_238 [32];
  ulonglong local_218;
  ulonglong local_210;
  ulonglong local_208;
  ulonglong local_200;
  float *local_1f8;
  longlong local_1f0;
  undefined8 *local_1e8;
  undefined8 local_1d8 [2];
  longlong local_1c8;
  longlong lStack_1c0;
  longlong local_1b8;
  longlong lStack_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  double local_198;
  double local_190;
  float local_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  double local_168;
  double local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  ulonglong local_138;
  ulonglong uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined8 uStack_f4;
  undefined8 uStack_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined8 local_cc;
  undefined5 uStack_c4;
  undefined3 uStack_bf;
  undefined5 uStack_bc;
  undefined8 uStack_b7;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  uint local_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_238;
  FUN_144b1c6fa(param_1 + 0x10,&local_158);
  puVar14 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar10 = puVar14 + 0x11;
  if ((undefined8 *)param_2[1] < puVar10) {
    FUN_140023dd8(param_2,0x90);
    puVar14 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar14 + 0x11;
  }
  *param_2 = (ulonglong)puVar10;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar14;
  param_2[6] = (ulonglong)(puVar14 + 1);
  puVar14[1] = 0;
  *puVar14 = &PTR_FUN_14a1fb978;
  puVar14[3] = 0;
  _Size = (size_t)(int)local_148;
  *(int *)(puVar14 + 4) = (int)local_148;
  if (_Size == 0) {
    *(undefined4 *)((longlong)puVar14 + 0x24) = 8;
  }
  else {
    puVar10 = &local_158;
    if (uStack_150 != (undefined8 *)0x0) {
      puVar10 = uStack_150;
    }
    FUN_1446fe144(puVar14 + 2,local_148 & 0xffffffff,0);
    puVar12 = (undefined8 *)puVar14[3];
    if ((undefined8 *)puVar14[3] == (undefined8 *)0x0) {
      puVar12 = puVar14 + 2;
    }
    memcpy(puVar12,puVar10,_Size);
  }
  puVar14[0xd] = 0;
  lVar15 = (longlong)iStack_f8;
  puVar10 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  *(int *)(puVar14 + 0xe) = iStack_f8;
  if (lVar15 == 0) {
    *(undefined4 *)((longlong)puVar14 + 0x74) = 8;
  }
  else {
    if (puVar10 == (undefined8 *)0x0) {
      puVar10 = &uStack_140;
    }
    FUN_1446fe1b8(puVar14 + 5,iStack_f8,0);
    puVar12 = (undefined8 *)puVar14[0xd];
    if ((undefined8 *)puVar14[0xd] == (undefined8 *)0x0) {
      puVar12 = puVar14 + 5;
    }
    memcpy(puVar12,puVar10,lVar15 << 3);
    puVar10 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  }
  *(undefined4 *)(puVar14 + 0xf) = uStack_f4._4_4_;
  *(undefined4 *)((longlong)puVar14 + 0x7c) = (undefined4)uStack_ec;
  *(undefined4 *)(puVar14 + 0x10) = uStack_ec._4_4_;
  *(undefined4 *)((longlong)puVar14 + 0x84) = (undefined4)uStack_e4;
  if (puVar10 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar10);
  }
  if (uStack_150 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(**(longlong **)(param_1 + 0x1d0) + 0x10))(*(longlong **)(param_1 + 0x1d0),&local_178)
  ;
  lVar15 = *(longlong *)(param_1 + 0x1b8);
  if (*(char *)(*(longlong *)(param_1 + 0x1d0) + 0x1e8) == '\0') {
    local_168 = *(double *)(lVar15 + 0x1058);
    local_178 = *(double *)(lVar15 + 0x1048);
    uStack_170 = *(double *)(lVar15 + 0x1050);
  }
  local_1a8 = (undefined4)local_178;
  uStack_1a4 = local_178._4_4_;
  uStack_1a0 = (undefined4)uStack_170;
  uStack_19c = uStack_170._4_4_;
  local_198 = local_168;
  local_190 = local_160;
  local_17c = (float)FUN_140426670();
  if (0.00390625 <= local_17c) {
    lVar15 = *(longlong *)(param_1 + 0x1b8);
    iVar1 = *(int *)(lVar15 + 0x3104);
    iVar2 = *(int *)(lVar15 + 0x3100);
    iVar3 = *(int *)(lVar15 + 0x30fc);
    iVar4 = *(int *)(lVar15 + 0x30f8);
    puVar14 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar14 + 5;
    if ((undefined8 *)param_2[1] < puVar10) {
      FUN_140023dd8(param_2,0x30);
      puVar14 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar10 = puVar14 + 5;
    }
    *param_2 = (ulonglong)puVar10;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar14;
    param_2[6] = (ulonglong)(puVar14 + 1);
    puVar14[1] = 0;
    *puVar14 = &PTR_LAB_14a1e7fc8;
    *(float *)(puVar14 + 2) = (float)iVar4;
    *(float *)((longlong)puVar14 + 0x14) = (float)iVar3;
    *(undefined4 *)(puVar14 + 3) = 0;
    *(float *)((longlong)puVar14 + 0x1c) = (float)iVar2;
    *(float *)(puVar14 + 4) = (float)iVar1;
    *(undefined4 *)((longlong)puVar14 + 0x24) = 0x3f800000;
    local_1b8 = 0;
    lStack_1b0 = 0;
    local_1c8 = 0;
    lStack_1c0 = 0;
    lVar15 = *(longlong *)(param_1 + 0x1f8);
    if (lVar15 != 0) {
      lStack_1b0 = *(longlong *)(param_1 + 0x1e8);
      local_1b8 = lVar15;
    }
    lVar9 = lStack_1b0;
    if (*(longlong *)(param_1 + 0x210) != 0) {
      lStack_1c0 = *(longlong *)(param_1 + 0x1e8);
      local_1c8 = *(longlong *)(param_1 + 0x210);
    }
    local_118 = 0;
    uStack_110 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_158 = 0;
    uStack_150 = (undefined8 *)0x0;
    puVar10 = (undefined8 *)0x0;
    local_108 = 0;
    uStack_fc = 0;
    iStack_f8 = 0;
    uStack_f4 = 0;
    uStack_ec = 0;
    uStack_e4 = 0;
    local_dc = 0;
    uStack_d4 = 0;
    local_cc = 0;
    uStack_c4 = 0;
    uStack_bf = 0;
    uStack_bc = 0;
    uStack_b7 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    local_90 = 1;
    local_88 = 0;
    FUN_144b0e33a(param_2,&local_158);
    local_158 = DAT_14ca968c0;
    if (lVar15 != 0) {
      puVar10 = *(undefined8 **)
                 (*(longlong *)(*(longlong *)(lVar9 + 8) + 0x50) +
                 (longlong)*(int *)(lVar15 + 0xd4) * 8);
      if (puVar10 == (undefined8 *)0x0) {
        puVar10 = (undefined8 *)
                  FUN_1400bafc2(*(longlong *)(lVar9 + 8),(longlong)*(int *)(lVar15 + 0xd4),1);
      }
    }
    uStack_150 = puVar10;
    if (local_1c8 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(ulonglong *)
                (*(longlong *)(*(longlong *)(lStack_1c0 + 8) + 0x50) +
                (longlong)*(int *)(local_1c8 + 0xd4) * 8);
      if (uVar11 == 0) {
        uVar11 = FUN_1400bafc2(*(longlong *)(lStack_1c0 + 8),(longlong)*(int *)(local_1c8 + 0xd4),1)
        ;
      }
    }
    local_118 = DAT_14c9c0d98;
    local_100 = 0;
    local_128 = DAT_14c9c0d50;
    if ((*(char *)(param_1 + 600) == '\x01') &&
       (local_128 = DAT_14c9e9bd0, *(char *)(param_1 + 0x25a) != '\x01')) {
      lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 0x28);
      if ((*(byte *)(lVar15 + 0x1d0) & 8) == 0) {
        puVar13 = (undefined4 *)(*(longlong *)(param_1 + 0x1c8) + 0xe0);
      }
      else {
        puVar13 = (undefined4 *)(lVar15 + 400);
      }
      local_128 = DAT_14ca54790;
      if (*(char *)(param_1 + 0x259) != '\0') {
        switch(*puVar13) {
        case 0:
          local_128 = DAT_14c9dc468;
          break;
        case 1:
          local_128 = DAT_14c9dc480;
          break;
        case 2:
          local_128 = DAT_14c9dc498;
          break;
        case 3:
          local_128 = DAT_14c9dc4b0;
          break;
        default:
          local_128 = 0;
        }
      }
    }
    lVar15 = *(longlong *)(param_1 + 0x1b8);
    dVar16 = *(double *)(lVar15 + 0x1058) - local_168;
    dVar8 = *(double *)(lVar15 + 0x1050) - uStack_170;
    dVar6 = *(double *)(lVar15 + 0x1048) - local_178;
    dVar7 = local_160 * 1.0499999523162842 +
            (double)(*(float *)(lVar15 + 0x2170) + *(float *)(lVar15 + 0x2170));
    if (dVar7 * dVar7 <= dVar16 * dVar16 + dVar6 * dVar6 + dVar8 * dVar8) {
      local_118 = DAT_14c9c0d38;
      puVar14 = &DAT_14c9c0d68;
      puVar10 = &DAT_14c9c0df8;
    }
    else {
      puVar14 = &DAT_14c9c0df8;
      puVar10 = &DAT_14c9c0d68;
    }
    if (*(char *)(lVar15 + 0x2398) == '\0') {
      puVar10 = puVar14;
    }
    uStack_120 = *puVar10;
    local_218 = 0;
    local_148 = uVar11;
    (**(code **)(**(longlong **)(param_1 + 0x1d0) + 0xe8))
              (*(longlong **)(param_1 + 0x1d0),param_2,lVar15,lVar15 + 0x30f8);
    if (*(char *)(param_1 + 0x25b) == '\x01') {
      lVar15 = *(longlong *)(param_1 + 0x1b8);
      FUN_147180620(local_1d8,lVar15,lVar15 + 0x30f8,lVar15 + 0x11b70);
      local_218 = 0;
      (**(code **)(**(longlong **)(param_1 + 0x1d0) + 0xe8))
                (*(longlong **)(param_1 + 0x1d0),param_2,*(undefined8 *)(param_1 + 0x1b8),local_1d8)
      ;
    }
    lVar15 = FUN_140028f18(param_2,&local_158);
    if ((lVar15 != 0) && ((local_90 & 0x10000000) == 0)) {
      param_2[0x35] = local_138;
      param_2[0x36] = uStack_130;
      *(int *)(param_2 + 0x33) = (int)local_148;
      *(undefined4 *)((longlong)param_2 + 0x19c) = local_148._4_4_;
      *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_140;
      *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_140._4_4_;
      *(undefined4 *)(param_2 + 0x31) = (undefined4)local_158;
      *(undefined4 *)((longlong)param_2 + 0x18c) = local_158._4_4_;
      *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_150;
      *(undefined4 *)((longlong)param_2 + 0x194) = uStack_150._4_4_;
      puVar14 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar10 = puVar14 + 4;
      if ((undefined8 *)param_2[1] < puVar10) {
        FUN_140023dd8(param_2,0x28);
        puVar14 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar10 = puVar14 + 4;
      }
      *param_2 = (ulonglong)puVar10;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar14;
      param_2[6] = (ulonglong)(puVar14 + 1);
      puVar14[1] = 0;
      *puVar14 = &PTR_LAB_14a37d348;
      puVar14[2] = lVar15;
      *(undefined4 *)(puVar14 + 3) = 0;
      *(undefined1 *)((longlong)puVar14 + 0x1c) = 1;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x1b8);
    if (local_1b8 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = *(longlong *)
                (*(longlong *)(*(longlong *)(lStack_1b0 + 8) + 0x50) +
                (longlong)*(int *)(local_1b8 + 0xd4) * 8);
      if (lVar15 == 0) {
        lVar15 = FUN_1400bafc2(*(longlong *)(lStack_1b0 + 8),(longlong)*(int *)(local_1b8 + 0xd4),1)
        ;
      }
    }
    local_218 = param_1 + 0x1c8U;
    FUN_1471d9397(param_2,&local_1b8,lVar15,uVar5);
    local_1d8[0] = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1c0) + 0x10) + 0x10);
    local_200 = param_1 + 0x25a;
    uVar5 = *(undefined8 *)(param_1 + 0x1b8);
    local_208 = *(ulonglong *)(param_1 + 0x1e0);
    local_210 = param_1 + 0x1d8;
    if (local_1c8 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = *(longlong *)
                (*(longlong *)(*(longlong *)(lStack_1c0 + 8) + 0x50) +
                (longlong)*(int *)(local_1c8 + 0xd4) * 8);
      if (lVar15 == 0) {
        lVar15 = FUN_1400bafc2(*(longlong *)(lStack_1c0 + 8),(longlong)*(int *)(local_1c8 + 0xd4),1)
        ;
      }
    }
    local_1e8 = local_1d8;
    local_1f8 = &local_17c;
    local_218 = param_1 + 0x1c8U;
    local_1f0 = param_1 + 0x25b;
    FUN_1471d959f(param_2,&local_1c8,lVar15,uVar5);
    FUN_142ce821c(param_2,1);
  }
  else if (*(char *)(param_1 + 600) == '\0') {
    local_218 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x1d0) + 0xe8))
              (*(longlong **)(param_1 + 0x1d0),param_2,*(longlong *)(param_1 + 0x1b8),
               *(longlong *)(param_1 + 0x1b8) + 0x30f8);
    local_200 = local_200 & 0xffffffff00000000;
    local_208 = local_208 & 0xffffffffffffff00;
    local_210 = local_210 & 0xffffffff00000000;
    local_218 = local_218 & 0xffffffffffffff00;
    FUN_140d1dede(param_2,1,1,&DAT_149e1e2f8);
  }
  puVar14 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar10 = puVar14 + 5;
  if ((undefined8 *)param_2[1] < puVar10) {
    FUN_140023dd8(param_2,0x30);
    puVar14 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar14 + 5;
  }
  *param_2 = (ulonglong)puVar10;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar14;
  param_2[6] = (ulonglong)(puVar14 + 1);
  puVar14[1] = 0;
  *puVar14 = &PTR_FUN_14a20cb90;
  *(undefined1 *)(puVar14 + 2) = 0;
  *(undefined8 *)((longlong)puVar14 + 0x14) = 0;
  *(undefined8 *)((longlong)puVar14 + 0x1c) = 0;
  if ((local_80 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142cfa794 FUN_142cfa794 body=31 status=ok
// SIG undefined FUN_142cfa794(void)

undefined8 FUN_142cfa794(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cfa7b4 FUN_142cfa7b4 body=31 status=ok
// SIG undefined FUN_142cfa7b4(void)

undefined8 FUN_142cfa7b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


