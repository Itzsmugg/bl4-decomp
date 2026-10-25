// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145580880 FUN_145580880 body=73 status=ok
// SIG undefined FUN_145580880(void)

undefined8 FUN_145580880(longlong param_1,undefined4 param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0xef < *puVar1) && ((code *)puVar1[0x1d] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001455808b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)puVar1[0x1d])(puVar1,param_2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1455808d0 FUN_1455808d0 body=73 status=ok
// SIG undefined FUN_1455808d0(void)

undefined8 FUN_1455808d0(longlong param_1,undefined4 param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0xf7 < *puVar1) && ((code *)puVar1[0x1e] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145580909. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)puVar1[0x1e])(puVar1,param_2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 145580920 FUN_145580920 body=99 status=ok
// SIG undefined FUN_145580920(void)

bool FUN_145580920(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  ulonglong *puVar1;
  int iVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0xff < *puVar1) && ((code *)puVar1[0x1f] != (code *)0x0)) {
    iVar2 = (*(code *)puVar1[0x1f])(puVar1,param_2,param_3);
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 145580990 FUN_145580990 body=99 status=ok
// SIG undefined FUN_145580990(void)

bool FUN_145580990(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  ulonglong *puVar1;
  int iVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x107 < *puVar1) && ((code *)puVar1[0x20] != (code *)0x0)) {
    iVar2 = (*(code *)puVar1[0x20])(puVar1,param_2,param_3);
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 145580a00 FUN_145580a00 body=122 status=ok
// SIG undefined FUN_145580a00(void)

undefined8 * FUN_145580a00(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x10f < *puVar1) && ((code *)puVar1[0x21] != (code *)0x0)) {
    uVar2 = (*(code *)puVar1[0x21])(puVar1,param_3);
    FUN_1453e7440(param_2,uVar2);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 145580a80 FUN_145580a80 body=122 status=ok
// SIG undefined FUN_145580a80(void)

undefined8 * FUN_145580a80(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x117 < *puVar1) && ((code *)puVar1[0x22] != (code *)0x0)) {
    uVar2 = (*(code *)puVar1[0x22])(puVar1,param_3);
    FUN_1453e7440(param_2,uVar2);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 145580b00 FUN_145580b00 body=78 status=ok
// SIG undefined FUN_145580b00(void)

bool FUN_145580b00(longlong param_1,undefined4 param_2)

{
  ulonglong *puVar1;
  int iVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x11f < *puVar1) && ((code *)puVar1[0x23] != (code *)0x0)) {
    iVar2 = (*(code *)puVar1[0x23])(puVar1,param_2);
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 145580b50 FUN_145580b50 body=78 status=ok
// SIG undefined FUN_145580b50(void)

bool FUN_145580b50(longlong param_1,undefined4 param_2)

{
  ulonglong *puVar1;
  int iVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x127 < *puVar1) && ((code *)puVar1[0x24] != (code *)0x0)) {
    iVar2 = (*(code *)puVar1[0x24])(puVar1,param_2);
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 145580ba0 FUN_145580ba0 body=101 status=ok
// SIG undefined FUN_145580ba0(void)

bool FUN_145580ba0(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  ulonglong *puVar1;
  int iVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x12f < *puVar1) && ((code *)puVar1[0x25] != (code *)0x0)) {
    iVar2 = (*(code *)puVar1[0x25])(puVar1,param_2,param_3);
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 145580c10 FUN_145580c10 body=101 status=ok
// SIG undefined FUN_145580c10(void)

bool FUN_145580c10(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  ulonglong *puVar1;
  int iVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x137 < *puVar1) && ((code *)puVar1[0x26] != (code *)0x0)) {
    iVar2 = (*(code *)puVar1[0x26])(puVar1,param_2,param_3);
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 145580c80 FUN_145580c80 body=78 status=ok
// SIG undefined FUN_145580c80(void)

bool FUN_145580c80(longlong param_1,undefined4 param_2)

{
  ulonglong *puVar1;
  int iVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x13f < *puVar1) && ((code *)puVar1[0x27] != (code *)0x0)) {
    iVar2 = (*(code *)puVar1[0x27])(puVar1,param_2);
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 145580cd0 FUN_145580cd0 body=78 status=ok
// SIG undefined FUN_145580cd0(void)

bool FUN_145580cd0(longlong param_1,undefined4 param_2)

{
  ulonglong *puVar1;
  int iVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x147 < *puVar1) && ((code *)puVar1[0x28] != (code *)0x0)) {
    iVar2 = (*(code *)puVar1[0x28])(puVar1,param_2);
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 145580d20 FUN_145580d20 body=101 status=ok
// SIG undefined FUN_145580d20(void)

bool FUN_145580d20(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  ulonglong *puVar1;
  int iVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x14f < *puVar1) && ((code *)puVar1[0x29] != (code *)0x0)) {
    iVar2 = (*(code *)puVar1[0x29])(puVar1,param_2,param_3);
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 145580d90 FUN_145580d90 body=101 status=ok
// SIG undefined FUN_145580d90(void)

bool FUN_145580d90(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  ulonglong *puVar1;
  int iVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x157 < *puVar1) && ((code *)puVar1[0x2a] != (code *)0x0)) {
    iVar2 = (*(code *)puVar1[0x2a])(puVar1,param_2,param_3);
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 145580e00 FUN_145580e00 body=78 status=ok
// SIG undefined FUN_145580e00(void)

bool FUN_145580e00(longlong param_1,undefined4 param_2)

{
  ulonglong *puVar1;
  int iVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x15f < *puVar1) && ((code *)puVar1[0x2b] != (code *)0x0)) {
    iVar2 = (*(code *)puVar1[0x2b])(puVar1,param_2);
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 145580e50 FUN_145580e50 body=78 status=ok
// SIG undefined FUN_145580e50(void)

bool FUN_145580e50(longlong param_1,undefined4 param_2)

{
  ulonglong *puVar1;
  int iVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x167 < *puVar1) && ((code *)puVar1[0x2c] != (code *)0x0)) {
    iVar2 = (*(code *)puVar1[0x2c])(puVar1,param_2);
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 145580ea0 FUN_145580ea0 body=101 status=ok
// SIG undefined FUN_145580ea0(void)

bool FUN_145580ea0(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  ulonglong *puVar1;
  int iVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x16f < *puVar1) && ((code *)puVar1[0x2d] != (code *)0x0)) {
    iVar2 = (*(code *)puVar1[0x2d])(puVar1,param_2,param_3);
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 145580f10 FUN_145580f10 body=101 status=ok
// SIG undefined FUN_145580f10(void)

bool FUN_145580f10(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  ulonglong *puVar1;
  int iVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x177 < *puVar1) && ((code *)puVar1[0x2e] != (code *)0x0)) {
    iVar2 = (*(code *)puVar1[0x2e])(puVar1,param_2,param_3);
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 145580f80 FUN_145580f80 body=78 status=ok
// SIG undefined FUN_145580f80(void)

bool FUN_145580f80(longlong param_1,undefined4 param_2)

{
  ulonglong *puVar1;
  int iVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x17f < *puVar1) && ((code *)puVar1[0x2f] != (code *)0x0)) {
    iVar2 = (*(code *)puVar1[0x2f])(puVar1,param_2);
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 145580fd0 FUN_145580fd0 body=78 status=ok
// SIG undefined FUN_145580fd0(void)

bool FUN_145580fd0(longlong param_1,undefined4 param_2)

{
  ulonglong *puVar1;
  int iVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x187 < *puVar1) && ((code *)puVar1[0x30] != (code *)0x0)) {
    iVar2 = (*(code *)puVar1[0x30])(puVar1,param_2);
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 145581020 FUN_145581020 body=124 status=ok
// SIG undefined FUN_145581020(void)

bool FUN_145581020(longlong param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  ulonglong *puVar1;
  int iVar2;
  bool bVar3;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 400) || ((code *)puVar1[0x31] == (code *)0x0)) {
    bVar3 = false;
  }
  else {
    iVar2 = (*(code *)puVar1[0x31])(puVar1,param_2,param_3,param_4,param_5,param_6);
    bVar3 = iVar2 != 0;
  }
  return bVar3;
}



// FUNCTION 1455810a0 FUN_1455810a0 body=124 status=ok
// SIG undefined FUN_1455810a0(void)

bool FUN_1455810a0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  ulonglong *puVar1;
  int iVar2;
  bool bVar3;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0x198) || ((code *)puVar1[0x32] == (code *)0x0)) {
    bVar3 = false;
  }
  else {
    iVar2 = (*(code *)puVar1[0x32])(puVar1,param_2,param_3,param_4,param_5,param_6);
    bVar3 = iVar2 != 0;
  }
  return bVar3;
}



// FUNCTION 145581120 FUN_145581120 body=78 status=ok
// SIG undefined FUN_145581120(void)

bool FUN_145581120(longlong param_1,undefined4 param_2)

{
  ulonglong *puVar1;
  int iVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x19f < *puVar1) && ((code *)puVar1[0x33] != (code *)0x0)) {
    iVar2 = (*(code *)puVar1[0x33])(puVar1,param_2);
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 145581170 FUN_145581170 body=78 status=ok
// SIG undefined FUN_145581170(void)

bool FUN_145581170(longlong param_1,undefined4 param_2)

{
  ulonglong *puVar1;
  int iVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x1a7 < *puVar1) && ((code *)puVar1[0x34] != (code *)0x0)) {
    iVar2 = (*(code *)puVar1[0x34])(puVar1,param_2);
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 1455811c0 FUN_1455811c0 body=214 status=ok
// SIG undefined FUN_1455811c0(void)

bool FUN_1455811c0(longlong param_1,undefined4 param_2,undefined8 param_3,byte *param_4,
                  byte *param_5,byte *param_6)

{
  ulonglong *puVar1;
  int iVar2;
  uint local_res8 [2];
  uint local_28;
  uint local_24 [3];
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x1af < *puVar1) && (puVar1[0x35] != 0)) {
    local_res8[0] = (uint)*param_4;
    local_28 = (uint)*param_5;
    local_24[0] = (uint)*param_6;
    iVar2 = (*(code *)puVar1[0x35])(puVar1,param_2,param_3,local_res8,&local_28,local_24);
    *param_4 = local_res8[0] != 0;
    *param_5 = local_28 != 0;
    *param_6 = local_24[0] != 0;
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 1455812a0 FUN_1455812a0 body=214 status=ok
// SIG undefined FUN_1455812a0(void)

bool FUN_1455812a0(longlong param_1,undefined4 param_2,undefined8 param_3,byte *param_4,
                  byte *param_5,byte *param_6)

{
  ulonglong *puVar1;
  int iVar2;
  uint local_res8 [2];
  uint local_28;
  uint local_24 [3];
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x1b7 < *puVar1) && (puVar1[0x36] != 0)) {
    local_res8[0] = (uint)*param_4;
    local_28 = (uint)*param_5;
    local_24[0] = (uint)*param_6;
    iVar2 = (*(code *)puVar1[0x36])(puVar1,param_2,param_3,local_res8,&local_28,local_24);
    *param_4 = local_res8[0] != 0;
    *param_5 = local_28 != 0;
    *param_6 = local_24[0] != 0;
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 145581380 FUN_145581380 body=101 status=ok
// SIG undefined FUN_145581380(void)

bool FUN_145581380(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ulonglong *puVar1;
  int iVar2;
  bool bVar3;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0x1c0) || ((code *)puVar1[0x37] == (code *)0x0)) {
    bVar3 = false;
  }
  else {
    iVar2 = (*(code *)puVar1[0x37])(puVar1,param_2,param_3,param_4);
    bVar3 = iVar2 != 0;
  }
  return bVar3;
}



// FUNCTION 1455813f0 FUN_1455813f0 body=101 status=ok
// SIG undefined FUN_1455813f0(void)

bool FUN_1455813f0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ulonglong *puVar1;
  int iVar2;
  bool bVar3;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0x1c8) || ((code *)puVar1[0x38] == (code *)0x0)) {
    bVar3 = false;
  }
  else {
    iVar2 = (*(code *)puVar1[0x38])(puVar1,param_2,param_3,param_4);
    bVar3 = iVar2 != 0;
  }
  return bVar3;
}



// FUNCTION 145581460 FUN_145581460 body=101 status=ok
// SIG undefined FUN_145581460(void)

bool FUN_145581460(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  int iVar2;
  bool bVar3;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0x1d0) || ((code *)puVar1[0x39] == (code *)0x0)) {
    bVar3 = false;
  }
  else {
    iVar2 = (*(code *)puVar1[0x39])(puVar1,param_2,param_3,param_4);
    bVar3 = iVar2 != 0;
  }
  return bVar3;
}



// FUNCTION 1455814d0 FUN_1455814d0 body=101 status=ok
// SIG undefined FUN_1455814d0(void)

bool FUN_1455814d0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  int iVar2;
  bool bVar3;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0x1d8) || ((code *)puVar1[0x3a] == (code *)0x0)) {
    bVar3 = false;
  }
  else {
    iVar2 = (*(code *)puVar1[0x3a])(puVar1,param_2,param_3,param_4);
    bVar3 = iVar2 != 0;
  }
  return bVar3;
}



// FUNCTION 145581540 FUN_145581540 body=100 status=ok
// SIG undefined FUN_145581540(void)

bool FUN_145581540(longlong param_1,undefined4 param_2,longlong param_3)

{
  ulonglong *puVar1;
  int iVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x1df < *puVar1) && ((code *)puVar1[0x3b] != (code *)0x0)) {
    iVar2 = (*(code *)puVar1[0x3b])(puVar1,param_2,*(undefined8 *)(param_3 + 8));
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 1455815b0 FUN_1455815b0 body=100 status=ok
// SIG undefined FUN_1455815b0(void)

bool FUN_1455815b0(longlong param_1,undefined4 param_2,longlong param_3)

{
  ulonglong *puVar1;
  int iVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x1e7 < *puVar1) && ((code *)puVar1[0x3c] != (code *)0x0)) {
    iVar2 = (*(code *)puVar1[0x3c])(puVar1,param_2,*(undefined8 *)(param_3 + 8));
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 145581620 FUN_145581620 body=64 status=ok
// SIG undefined FUN_145581620(void)

undefined8 * FUN_145581620(undefined8 *param_1,ulonglong param_2)

{
  FUN_14557fd40();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -4,0x28);
  }
  return param_1 + -4;
}



// FUNCTION 1455816b0 FUN_1455816b0 body=48 status=ok
// SIG undefined FUN_1455816b0(void)

longlong FUN_1455816b0(longlong param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x10,0x18);
    return param_1 + -0x10;
  }
  return param_1 + -0x10;
}



// FUNCTION 1455816e0 FUN_1455816e0 body=40 status=ok
// SIG undefined FUN_1455816e0(void)

int FUN_1455816e0(longlong param_1)

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



// FUNCTION 145581710 FUN_145581710 body=105 status=ok
// SIG undefined FUN_145581710(void)

undefined8 FUN_145581710(undefined8 *param_1)

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
      FUN_1455818f0(param_1);
      *param_1 = &PTR__purecall_14ba6c6b0;
      thunk_FUN_1400020a8(param_1 + -6,0x38);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 145581780 FUN_145581780 body=34 status=ok
// SIG undefined FUN_145581780(void)

bool FUN_145581780(longlong param_1)

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



// FUNCTION 1455817b0 FUN_1455817b0 body=38 status=ok
// SIG undefined FUN_1455817b0(void)

bool FUN_1455817b0(longlong param_1)

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



// FUNCTION 1455817e0 FUN_1455817e0 body=85 status=ok
// SIG undefined FUN_1455817e0(void)

longlong FUN_1455817e0(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149dad268;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dad278;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x20,0x28);
  }
  return param_1 + -0x20;
}



// FUNCTION 145581840 FUN_145581840 body=167 status=ok
// SIG undefined FUN_145581840(void)

undefined8 * FUN_145581840(undefined8 *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &DAT_149dad2d8;
    param_1[4] = &PTR__purecall_14ba6c6b0;
  }
  *param_1 = &PTR__purecall_149dad230;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) =
       &PTR__purecall_149dad240;
  *param_1 = &PTR__purecall_149dad268;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149dad278;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_149dad2a0;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149dad2b0;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  return param_1;
}



// FUNCTION 1455818f0 FUN_1455818f0 body=124 status=ok
// SIG undefined FUN_1455818f0(void)

void FUN_1455818f0(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR_FUN_149dad2a0;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dad2b0;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  FUN_14516fec0();
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149dad268;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dad278;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  return;
}



// FUNCTION 145581970 FUN_145581970 body=70 status=ok
// SIG undefined FUN_145581970(void)

void FUN_145581970(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  ulonglong *puVar1;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x2f < *puVar1) && ((code *)puVar1[5] != (code *)0x0)) {
    (*(code *)puVar1[5])(puVar1,param_2,param_3);
  }
  return;
}



// FUNCTION 1455819c0 FUN_1455819c0 body=47 status=ok
// SIG undefined FUN_1455819c0(void)

void FUN_1455819c0(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_14516fec0();
  if ((0x37 < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[6],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001455819e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// FUNCTION 1455819f0 FUN_1455819f0 body=64 status=ok
// SIG undefined FUN_1455819f0(void)

undefined8 * FUN_1455819f0(undefined8 *param_1,ulonglong param_2)

{
  FUN_1455818f0();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -4,0x28);
  }
  return param_1 + -4;
}



// FUNCTION 145581a80 FUN_145581a80 body=48 status=ok
// SIG undefined FUN_145581a80(void)

longlong FUN_145581a80(longlong param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x10,0x18);
    return param_1 + -0x10;
  }
  return param_1 + -0x10;
}



// FUNCTION 145581ab0 FUN_145581ab0 body=40 status=ok
// SIG undefined FUN_145581ab0(void)

int FUN_145581ab0(longlong param_1)

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



// FUNCTION 145581ae0 FUN_145581ae0 body=105 status=ok
// SIG undefined FUN_145581ae0(void)

undefined8 FUN_145581ae0(undefined8 *param_1)

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
      FUN_145581cc0(param_1);
      *param_1 = &PTR__purecall_14ba6c6b0;
      thunk_FUN_1400020a8(param_1 + -6,0x38);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 145581b50 FUN_145581b50 body=34 status=ok
// SIG undefined FUN_145581b50(void)

bool FUN_145581b50(longlong param_1)

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



// FUNCTION 145581b80 FUN_145581b80 body=38 status=ok
// SIG undefined FUN_145581b80(void)

bool FUN_145581b80(longlong param_1)

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



// FUNCTION 145581bb0 FUN_145581bb0 body=85 status=ok
// SIG undefined FUN_145581bb0(void)

longlong FUN_145581bb0(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149dad340;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dad350;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x20,0x28);
  }
  return param_1 + -0x20;
}



// FUNCTION 145581c10 FUN_145581c10 body=167 status=ok
// SIG undefined FUN_145581c10(void)

undefined8 * FUN_145581c10(undefined8 *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &DAT_149dad3b0;
    param_1[4] = &PTR__purecall_14ba6c6b0;
  }
  *param_1 = &PTR__purecall_149dad308;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) =
       &PTR__purecall_149dad318;
  *param_1 = &PTR__purecall_149dad340;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149dad350;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_149dad378;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149dad388;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  return param_1;
}



// FUNCTION 145581cc0 FUN_145581cc0 body=124 status=ok
// SIG undefined FUN_145581cc0(void)

void FUN_145581cc0(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR_FUN_149dad378;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dad388;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  FUN_14516fec0();
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149dad340;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dad350;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  return;
}



// FUNCTION 145581d40 FUN_145581d40 body=131 status=ok
// SIG undefined FUN_145581d40(void)

void FUN_145581d40(longlong param_1,int param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if (((0x2f < *puVar1) && (puVar1[5] != 0)) && (-1 < param_2)) {
    lVar2 = cef_string_list_alloc();
    if (lVar2 != 0) {
      FUN_14516e860(param_3,lVar2);
    }
    (*(code *)puVar1[5])(puVar1,param_2,lVar2);
    if (lVar2 != 0) {
      cef_string_list_free(lVar2);
    }
  }
  return;
}



// FUNCTION 145581dd0 FUN_145581dd0 body=47 status=ok
// SIG undefined FUN_145581dd0(void)

void FUN_145581dd0(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_14516fec0();
  if ((0x37 < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[6],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145581df6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// FUNCTION 145581e00 FUN_145581e00 body=64 status=ok
// SIG undefined FUN_145581e00(void)

undefined8 * FUN_145581e00(undefined8 *param_1,ulonglong param_2)

{
  FUN_145581cc0();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -4,0x28);
  }
  return param_1 + -4;
}



// FUNCTION 145581e90 FUN_145581e90 body=48 status=ok
// SIG undefined FUN_145581e90(void)

longlong FUN_145581e90(longlong param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x10,0x18);
    return param_1 + -0x10;
  }
  return param_1 + -0x10;
}



// FUNCTION 145581ec0 FUN_145581ec0 body=40 status=ok
// SIG undefined FUN_145581ec0(void)

int FUN_145581ec0(longlong param_1)

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



// FUNCTION 145581ef0 FUN_145581ef0 body=105 status=ok
// SIG undefined FUN_145581ef0(void)

undefined8 FUN_145581ef0(undefined8 *param_1)

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
      FUN_1455820d0(param_1);
      *param_1 = &PTR__purecall_14ba6c6b0;
      thunk_FUN_1400020a8(param_1 + -6,0x38);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 145581f60 FUN_145581f60 body=34 status=ok
// SIG undefined FUN_145581f60(void)

bool FUN_145581f60(longlong param_1)

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



// FUNCTION 145581f90 FUN_145581f90 body=38 status=ok
// SIG undefined FUN_145581f90(void)

bool FUN_145581f90(longlong param_1)

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



// FUNCTION 145581fc0 FUN_145581fc0 body=85 status=ok
// SIG undefined FUN_145581fc0(void)

longlong FUN_145581fc0(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149dad410;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dad418;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x20,0x28);
  }
  return param_1 + -0x20;
}



// FUNCTION 145582020 FUN_145582020 body=167 status=ok
// SIG undefined FUN_145582020(void)

undefined8 * FUN_145582020(undefined8 *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &DAT_149dad470;
    param_1[4] = &PTR__purecall_14ba6c6b0;
  }
  *param_1 = &PTR__purecall_149dad3e0;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) =
       &PTR__purecall_149dad3e8;
  *param_1 = &PTR__purecall_149dad410;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149dad418;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_149dad440;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149dad448;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  return param_1;
}



// FUNCTION 1455820d0 FUN_1455820d0 body=124 status=ok
// SIG undefined FUN_1455820d0(void)

void FUN_1455820d0(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR_FUN_149dad440;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dad448;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  FUN_14516fec0();
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149dad410;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dad418;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  return;
}



// FUNCTION 145582150 FUN_145582150 body=75 status=ok
// SIG undefined FUN_145582150(void)

void FUN_145582150(longlong param_1,longlong param_2,undefined1 param_3)

{
  ulonglong *puVar1;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x2f < *puVar1) && ((code *)puVar1[5] != (code *)0x0)) {
    (*(code *)puVar1[5])(puVar1,*(undefined8 *)(param_2 + 8),param_3);
  }
  return;
}



// FUNCTION 1455821a0 FUN_1455821a0 body=64 status=ok
// SIG undefined FUN_1455821a0(void)

undefined8 * FUN_1455821a0(undefined8 *param_1,ulonglong param_2)

{
  FUN_1455820d0();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -4,0x28);
  }
  return param_1 + -4;
}



// FUNCTION 145582230 FUN_145582230 body=48 status=ok
// SIG undefined FUN_145582230(void)

longlong FUN_145582230(longlong param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x10,0x18);
    return param_1 + -0x10;
  }
  return param_1 + -0x10;
}



// FUNCTION 145582260 FUN_145582260 body=40 status=ok
// SIG undefined FUN_145582260(void)

int FUN_145582260(longlong param_1)

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



// FUNCTION 145582290 FUN_145582290 body=105 status=ok
// SIG undefined FUN_145582290(void)

undefined8 FUN_145582290(undefined8 *param_1)

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
      FUN_145582470(param_1);
      *param_1 = &PTR__purecall_14ba6c6b0;
      thunk_FUN_1400020a8(param_1 + -6,0x38);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 145582300 FUN_145582300 body=34 status=ok
// SIG undefined FUN_145582300(void)

bool FUN_145582300(longlong param_1)

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



// FUNCTION 145582330 FUN_145582330 body=38 status=ok
// SIG undefined FUN_145582330(void)

bool FUN_145582330(longlong param_1)

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



// FUNCTION 145582360 FUN_145582360 body=85 status=ok
// SIG undefined FUN_145582360(void)

longlong FUN_145582360(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149dad4e0;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dad4f8;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x20,0x28);
  }
  return param_1 + -0x20;
}



// FUNCTION 1455823c0 FUN_1455823c0 body=167 status=ok
// SIG undefined FUN_1455823c0(void)

undefined8 * FUN_1455823c0(undefined8 *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &DAT_149dad560;
    param_1[4] = &PTR__purecall_14ba6c6b0;
  }
  *param_1 = &PTR__purecall_149dad4a0;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) =
       &PTR__purecall_149dad4b8;
  *param_1 = &PTR__purecall_149dad4e0;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149dad4f8;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_149dad520;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149dad538;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  return param_1;
}



// FUNCTION 145582470 FUN_145582470 body=124 status=ok
// SIG undefined FUN_145582470(void)

void FUN_145582470(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR_FUN_149dad520;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dad538;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  FUN_14516fec0();
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149dad4e0;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dad4f8;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  return;
}



// FUNCTION 1455824f0 FUN_1455824f0 body=47 status=ok
// SIG undefined FUN_1455824f0(void)

void FUN_1455824f0(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_14516fec0();
  if ((0x2f < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[5],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145582516. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// FUNCTION 145582520 FUN_145582520 body=47 status=ok
// SIG undefined FUN_145582520(void)

void FUN_145582520(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_14516fec0();
  if ((0x37 < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[6],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145582546. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// FUNCTION 145582550 FUN_145582550 body=47 status=ok
// SIG undefined FUN_145582550(void)

void FUN_145582550(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_14516fec0();
  if ((0x3f < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[7],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145582576. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// FUNCTION 145582580 FUN_145582580 body=64 status=ok
// SIG undefined FUN_145582580(void)

undefined8 * FUN_145582580(undefined8 *param_1,ulonglong param_2)

{
  FUN_145582470();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -4,0x28);
  }
  return param_1 + -4;
}



// FUNCTION 145582610 FUN_145582610 body=48 status=ok
// SIG undefined FUN_145582610(void)

longlong FUN_145582610(longlong param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x10,0x18);
    return param_1 + -0x10;
  }
  return param_1 + -0x10;
}



// FUNCTION 145582640 FUN_145582640 body=40 status=ok
// SIG undefined FUN_145582640(void)

int FUN_145582640(longlong param_1)

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



// FUNCTION 145582670 FUN_145582670 body=105 status=ok
// SIG undefined FUN_145582670(void)

undefined8 FUN_145582670(undefined8 *param_1)

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
      FUN_145582850(param_1);
      *param_1 = &PTR__purecall_14ba6c6b0;
      thunk_FUN_1400020a8(param_1 + -6,0x38);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1455826e0 FUN_1455826e0 body=34 status=ok
// SIG undefined FUN_1455826e0(void)

bool FUN_1455826e0(longlong param_1)

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



// FUNCTION 145582710 FUN_145582710 body=38 status=ok
// SIG undefined FUN_145582710(void)

bool FUN_145582710(longlong param_1)

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



// FUNCTION 145582740 FUN_145582740 body=85 status=ok
// SIG undefined FUN_145582740(void)

longlong FUN_145582740(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149dad640;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dad6c8;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x20,0x28);
  }
  return param_1 + -0x20;
}



// FUNCTION 1455827a0 FUN_1455827a0 body=167 status=ok
// SIG undefined FUN_1455827a0(void)

undefined8 * FUN_1455827a0(undefined8 *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &DAT_149dad7a0;
    param_1[4] = &PTR__purecall_14ba6c6b0;
  }
  *param_1 = &PTR__purecall_149dad590;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) =
       &PTR__purecall_149dad618;
  *param_1 = &PTR__purecall_149dad640;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149dad6c8;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_149dad6f0;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149dad778;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  return param_1;
}



// FUNCTION 145582850 FUN_145582850 body=124 status=ok
// SIG undefined FUN_145582850(void)

void FUN_145582850(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR_FUN_149dad6f0;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dad778;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  FUN_14516fec0();
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149dad640;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dad6c8;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  return;
}



// FUNCTION 1455828d0 FUN_1455828d0 body=54 status=ok
// SIG undefined FUN_1455828d0(void)

bool FUN_1455828d0(longlong param_1)

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



// FUNCTION 145582910 FUN_145582910 body=54 status=ok
// SIG undefined FUN_145582910(void)

bool FUN_145582910(longlong param_1)

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



// FUNCTION 145582950 FUN_145582950 body=54 status=ok
// SIG undefined FUN_145582950(void)

bool FUN_145582950(longlong param_1)

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



// FUNCTION 145582990 FUN_145582990 body=54 status=ok
// SIG undefined FUN_145582990(void)

bool FUN_145582990(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0x47 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[8], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 1455829d0 FUN_1455829d0 body=49 status=ok
// SIG undefined FUN_1455829d0(void)

undefined8 FUN_1455829d0(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  FUN_14516fec0();
  if ((0x4f < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[9],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001455829f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 145582a10 FUN_145582a10 body=49 status=ok
// SIG undefined FUN_145582a10(void)

undefined8 FUN_145582a10(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  FUN_14516fec0();
  if ((0x57 < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[10],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145582a36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 145582a50 FUN_145582a50 body=49 status=ok
// SIG undefined FUN_145582a50(void)

undefined8 FUN_145582a50(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  FUN_14516fec0();
  if ((0x5f < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[0xb],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145582a76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 145582a90 FUN_145582a90 body=49 status=ok
// SIG undefined FUN_145582a90(void)

undefined8 FUN_145582a90(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  FUN_14516fec0();
  if ((0x67 < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[0xc],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145582ab6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 145582ad0 FUN_145582ad0 body=158 status=ok
// SIG undefined FUN_145582ad0(void)

undefined8 *
FUN_145582ad0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 local_30 [40];
  
  FUN_14516fec0(param_1,param_2,param_3,param_4,0);
  if ((**(ulonglong **)(param_1 + -8) < 0x70) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0xd], pcVar1 == (code *)0x0)) {
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



// FUNCTION 145582b70 FUN_145582b70 body=158 status=ok
// SIG undefined FUN_145582b70(void)

undefined8 *
FUN_145582b70(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 local_30 [40];
  
  FUN_14516fec0(param_1,param_2,param_3,param_4,0);
  if ((**(ulonglong **)(param_1 + -8) < 0x78) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0xe], pcVar1 == (code *)0x0)) {
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



// FUNCTION 145582c10 FUN_145582c10 body=225 status=ok
// SIG undefined FUN_145582c10(void)

undefined8 * FUN_145582c10(longlong param_1,undefined8 *param_2)

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
  if ((**(ulonglong **)(param_1 + -8) < 0x80) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0xf], pcVar1 == (code *)0x0)) {
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



// FUNCTION 145582d00 FUN_145582d00 body=55 status=ok
// SIG undefined FUN_145582d00(void)

undefined8 FUN_145582d00(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  FUN_14516fec0();
  if ((0x87 < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[0x10],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145582d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 145582d40 FUN_145582d40 body=228 status=ok
// SIG undefined FUN_145582d40(void)

undefined8 * FUN_145582d40(longlong param_1,undefined8 *param_2)

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
  if ((**(ulonglong **)(param_1 + -8) < 0x90) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x11], pcVar1 == (code *)0x0)) {
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



// FUNCTION 145582e30 FUN_145582e30 body=228 status=ok
// SIG undefined FUN_145582e30(void)

undefined8 * FUN_145582e30(longlong param_1,undefined8 *param_2)

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
  if ((**(ulonglong **)(param_1 + -8) < 0x98) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x12], pcVar1 == (code *)0x0)) {
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



// FUNCTION 145582f20 FUN_145582f20 body=228 status=ok
// SIG undefined FUN_145582f20(void)

undefined8 * FUN_145582f20(longlong param_1,undefined8 *param_2)

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
  if ((**(ulonglong **)(param_1 + -8) < 0xa0) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x13], pcVar1 == (code *)0x0)) {
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



// FUNCTION 145583010 FUN_145583010 body=228 status=ok
// SIG undefined FUN_145583010(void)

undefined8 * FUN_145583010(longlong param_1,undefined8 *param_2)

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
  if ((**(ulonglong **)(param_1 + -8) < 0xa8) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x14], pcVar1 == (code *)0x0)) {
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



// FUNCTION 145583100 FUN_145583100 body=228 status=ok
// SIG undefined FUN_145583100(void)

undefined8 * FUN_145583100(longlong param_1,undefined8 *param_2)

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



// FUNCTION 1455831f0 FUN_1455831f0 body=64 status=ok
// SIG undefined FUN_1455831f0(void)

undefined8 * FUN_1455831f0(undefined8 *param_1,ulonglong param_2)

{
  FUN_145582850();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -4,0x28);
  }
  return param_1 + -4;
}



// FUNCTION 145583280 FUN_145583280 body=48 status=ok
// SIG undefined FUN_145583280(void)

longlong FUN_145583280(longlong param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x10,0x18);
    return param_1 + -0x10;
  }
  return param_1 + -0x10;
}



// FUNCTION 1455832b0 FUN_1455832b0 body=40 status=ok
// SIG undefined FUN_1455832b0(void)

int FUN_1455832b0(longlong param_1)

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



// FUNCTION 1455832e0 FUN_1455832e0 body=105 status=ok
// SIG undefined FUN_1455832e0(void)

undefined8 FUN_1455832e0(undefined8 *param_1)

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
      FUN_1455834c0(param_1);
      *param_1 = &PTR__purecall_14ba6c6b0;
      thunk_FUN_1400020a8(param_1 + -6,0x38);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 145583350 FUN_145583350 body=34 status=ok
// SIG undefined FUN_145583350(void)

bool FUN_145583350(longlong param_1)

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



// FUNCTION 145583380 FUN_145583380 body=38 status=ok
// SIG undefined FUN_145583380(void)

bool FUN_145583380(longlong param_1)

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



// FUNCTION 1455833b0 FUN_1455833b0 body=85 status=ok
// SIG undefined FUN_1455833b0(void)

longlong FUN_1455833b0(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149dad8f0;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dad8f8;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x20,0x28);
  }
  return param_1 + -0x20;
}



// FUNCTION 145583410 FUN_145583410 body=167 status=ok
// SIG undefined FUN_145583410(void)

undefined8 * FUN_145583410(undefined8 *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &DAT_149dad950;
    param_1[4] = &PTR__purecall_14ba6c6b0;
  }
  *param_1 = &PTR__purecall_149dad8c0;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) =
       &PTR__purecall_149dad8c8;
  *param_1 = &PTR__purecall_149dad8f0;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149dad8f8;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_149dad920;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149dad928;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  return param_1;
}



// FUNCTION 1455834c0 FUN_1455834c0 body=124 status=ok
// SIG undefined FUN_1455834c0(void)

void FUN_1455834c0(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR_FUN_149dad920;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dad928;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  FUN_14516fec0();
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149dad8f0;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dad8f8;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  return;
}



// FUNCTION 145583540 FUN_145583540 body=74 status=ok
// SIG undefined FUN_145583540(void)

void FUN_145583540(longlong param_1,undefined1 param_2,longlong param_3)

{
  ulonglong *puVar1;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x2f < *puVar1) && ((code *)puVar1[5] != (code *)0x0)) {
    (*(code *)puVar1[5])(puVar1,param_2,*(undefined8 *)(param_3 + 8));
  }
  return;
}



// FUNCTION 145583590 FUN_145583590 body=64 status=ok
// SIG undefined FUN_145583590(void)

undefined8 * FUN_145583590(undefined8 *param_1,ulonglong param_2)

{
  FUN_1455834c0();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -4,0x28);
  }
  return param_1 + -4;
}



// FUNCTION 145583620 FUN_145583620 body=48 status=ok
// SIG undefined FUN_145583620(void)

longlong FUN_145583620(longlong param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x10,0x18);
    return param_1 + -0x10;
  }
  return param_1 + -0x10;
}



// FUNCTION 145583650 FUN_145583650 body=40 status=ok
// SIG undefined FUN_145583650(void)

int FUN_145583650(longlong param_1)

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



// FUNCTION 145583680 FUN_145583680 body=105 status=ok
// SIG undefined FUN_145583680(void)

undefined8 FUN_145583680(undefined8 *param_1)

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
      FUN_145583860(param_1);
      *param_1 = &PTR__purecall_14ba6c6b0;
      thunk_FUN_1400020a8(param_1 + -6,0x38);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1455836f0 FUN_1455836f0 body=34 status=ok
// SIG undefined FUN_1455836f0(void)

bool FUN_1455836f0(longlong param_1)

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



// FUNCTION 145583720 FUN_145583720 body=38 status=ok
// SIG undefined FUN_145583720(void)

bool FUN_145583720(longlong param_1)

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



// FUNCTION 145583750 FUN_145583750 body=85 status=ok
// SIG undefined FUN_145583750(void)

longlong FUN_145583750(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149dad9b8;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dad9c8;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x20,0x28);
  }
  return param_1 + -0x20;
}



// FUNCTION 1455837b0 FUN_1455837b0 body=167 status=ok
// SIG undefined FUN_1455837b0(void)

undefined8 * FUN_1455837b0(undefined8 *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &DAT_149dada28;
    param_1[4] = &PTR__purecall_14ba6c6b0;
  }
  *param_1 = &PTR__purecall_149dad980;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) =
       &PTR__purecall_149dad990;
  *param_1 = &PTR__purecall_149dad9b8;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149dad9c8;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_149dad9f0;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149dada00;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  return param_1;
}



// FUNCTION 145583860 FUN_145583860 body=124 status=ok
// SIG undefined FUN_145583860(void)

void FUN_145583860(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR_FUN_149dad9f0;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dada00;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  FUN_14516fec0();
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149dad9b8;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dad9c8;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  return;
}



// FUNCTION 1455838e0 FUN_1455838e0 body=193 status=ok
// SIG undefined FUN_1455838e0(void)

void FUN_1455838e0(longlong param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4)

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
  if ((*puVar1 < 0x30) || (puVar1[5] == 0)) {
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
      uVar3 = FUN_145583a20(&local_res8);
      (*(code *)puVar1[5])(puVar1,uVar3,param_3,param_4,uVar4);
      uVar2 = *param_2;
      if (uVar2 != 0) {
        (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(uVar2 + 8) + 4) + uVar2 + 8) + 8
                    ))();
      }
    }
  }
  return;
}



// FUNCTION 1455839b0 FUN_1455839b0 body=47 status=ok
// SIG undefined FUN_1455839b0(void)

void FUN_1455839b0(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_14516fec0();
  if ((0x37 < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[6],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001455839d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// FUNCTION 1455839e0 FUN_1455839e0 body=64 status=ok
// SIG undefined FUN_1455839e0(void)

undefined8 * FUN_1455839e0(undefined8 *param_1,ulonglong param_2)

{
  FUN_145583860();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -4,0x28);
  }
  return param_1 + -4;
}



// FUNCTION 145583a20 FUN_145583a20 body=156 status=ok
// SIG undefined FUN_145583a20(void)

undefined8 FUN_145583a20(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else if (*(int *)(lVar1 + -0x10) == DAT_14c746808) {
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
    uVar3 = FUN_145583fc0(*(int *)(lVar1 + -0x10),lVar1,param_3,param_4,0xfffffffffffffffe);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
  }
  return uVar3;
}



// FUNCTION 145583b10 FUN_145583b10 body=48 status=ok
// SIG undefined FUN_145583b10(void)

longlong FUN_145583b10(longlong param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x10,0x18);
    return param_1 + -0x10;
  }
  return param_1 + -0x10;
}



// FUNCTION 145583b40 FUN_145583b40 body=40 status=ok
// SIG undefined FUN_145583b40(void)

int FUN_145583b40(longlong param_1)

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



// FUNCTION 145583b70 FUN_145583b70 body=105 status=ok
// SIG undefined FUN_145583b70(void)

undefined8 FUN_145583b70(undefined8 *param_1)

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
      FUN_145583d50(param_1);
      *param_1 = &PTR__purecall_14ba6c6b0;
      thunk_FUN_1400020a8(param_1 + -6,0x38);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 145583be0 FUN_145583be0 body=34 status=ok
// SIG undefined FUN_145583be0(void)

bool FUN_145583be0(longlong param_1)

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



// FUNCTION 145583c10 FUN_145583c10 body=38 status=ok
// SIG undefined FUN_145583c10(void)

bool FUN_145583c10(longlong param_1)

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



// FUNCTION 145583c40 FUN_145583c40 body=85 status=ok
// SIG undefined FUN_145583c40(void)

longlong FUN_145583c40(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149dadad8;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dadae0;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x20,0x28);
  }
  return param_1 + -0x20;
}



// FUNCTION 145583ca0 FUN_145583ca0 body=167 status=ok
// SIG undefined FUN_145583ca0(void)

undefined8 * FUN_145583ca0(undefined8 *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &DAT_149dadb38;
    param_1[4] = &PTR__purecall_14ba6c6b0;
  }
  *param_1 = &PTR__purecall_149dadaa8;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) =
       &PTR__purecall_149dadab0;
  *param_1 = &PTR__purecall_149dadad8;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149dadae0;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_149dadb08;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149dadb10;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  return param_1;
}



// FUNCTION 145583d50 FUN_145583d50 body=124 status=ok
// SIG undefined FUN_145583d50(void)

void FUN_145583d50(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR_FUN_149dadb08;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dadb10;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  FUN_14516fec0();
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149dadad8;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dadae0;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  return;
}



// FUNCTION 145583dd0 FUN_145583dd0 body=47 status=ok
// SIG undefined FUN_145583dd0(void)

void FUN_145583dd0(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_14516fec0();
  if ((0x2f < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[5],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145583df6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// FUNCTION 145583e00 FUN_145583e00 body=64 status=ok
// SIG undefined FUN_145583e00(void)

undefined8 * FUN_145583e00(undefined8 *param_1,ulonglong param_2)

{
  FUN_145583d50();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -4,0x28);
  }
  return param_1 + -4;
}



// FUNCTION 145583e90 FUN_145583e90 body=48 status=ok
// SIG undefined FUN_145583e90(void)

longlong FUN_145583e90(longlong param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x10,0x18);
    return param_1 + -0x10;
  }
  return param_1 + -0x10;
}



// FUNCTION 145583ec0 FUN_145583ec0 body=40 status=ok
// SIG undefined FUN_145583ec0(void)

int FUN_145583ec0(longlong param_1)

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



// FUNCTION 145583ef0 FUN_145583ef0 body=105 status=ok
// SIG undefined FUN_145583ef0(void)

undefined8 FUN_145583ef0(undefined8 *param_1)

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
      FUN_1455840e0(param_1);
      *param_1 = &PTR__purecall_14ba6c6b0;
      thunk_FUN_1400020a8(param_1 + -6,0x38);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 145583f60 FUN_145583f60 body=34 status=ok
// SIG undefined FUN_145583f60(void)

bool FUN_145583f60(longlong param_1)

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



// FUNCTION 145583f90 FUN_145583f90 body=38 status=ok
// SIG undefined FUN_145583f90(void)

bool FUN_145583f90(longlong param_1)

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



// FUNCTION 145583fc0 FUN_145583fc0 body=11 status=ok
// SIG undefined FUN_145583fc0(void)

undefined8 FUN_145583fc0(void)

{
  return 0;
}



// FUNCTION 145583fd0 FUN_145583fd0 body=85 status=ok
// SIG undefined FUN_145583fd0(void)

longlong FUN_145583fd0(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149dadc40;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dadcf0;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x20,0x28);
  }
  return param_1 + -0x20;
}



// FUNCTION 145584030 FUN_145584030 body=167 status=ok
// SIG undefined FUN_145584030(void)

undefined8 * FUN_145584030(undefined8 *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &DAT_149daddf0;
    param_1[4] = &PTR__purecall_14ba6c6b0;
  }
  *param_1 = &PTR__purecall_149dadb68;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) =
       &PTR__purecall_149dadc18;
  *param_1 = &PTR__purecall_149dadc40;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149dadcf0;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_149dadd18;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149daddc8;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  return param_1;
}



// FUNCTION 1455840e0 FUN_1455840e0 body=124 status=ok
// SIG undefined FUN_1455840e0(void)

void FUN_1455840e0(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR_FUN_149dadd18;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149daddc8;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  FUN_14516fec0();
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149dadc40;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dadcf0;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  return;
}



// FUNCTION 145584160 FUN_145584160 body=54 status=ok
// SIG undefined FUN_145584160(void)

bool FUN_145584160(longlong param_1)

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



// FUNCTION 1455841a0 FUN_1455841a0 body=54 status=ok
// SIG undefined FUN_1455841a0(void)

bool FUN_1455841a0(longlong param_1)

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



// FUNCTION 1455841e0 FUN_1455841e0 body=57 status=ok
// SIG undefined FUN_1455841e0(void)

void FUN_1455841e0(longlong param_1,undefined1 param_2)

{
  ulonglong *puVar1;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x3f < *puVar1) && ((code *)puVar1[7] != (code *)0x0)) {
    (*(code *)puVar1[7])(puVar1,param_2);
  }
  return;
}



// FUNCTION 145584220 FUN_145584220 body=54 status=ok
// SIG undefined FUN_145584220(void)

bool FUN_145584220(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0x47 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[8], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 145584260 FUN_145584260 body=109 status=ok
// SIG undefined FUN_145584260(void)

void FUN_145584260(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x4f < *puVar1) && ((code *)puVar1[9] != (code *)0x0)) {
    lVar3 = param_3 + 8;
    if (param_3 == 0) {
      lVar3 = 0;
    }
    lVar2 = param_2 + 8;
    if (param_2 == 0) {
      lVar2 = 0;
    }
    (*(code *)puVar1[9])(puVar1,lVar2,lVar3,param_4);
  }
  return;
}



// FUNCTION 1455842d0 FUN_1455842d0 body=57 status=ok
// SIG undefined FUN_1455842d0(void)

void FUN_1455842d0(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x57 < *puVar1) && ((code *)puVar1[10] != (code *)0x0)) {
    (*(code *)puVar1[10])(puVar1,*(undefined8 *)(param_2 + 8));
  }
  return;
}



// FUNCTION 145584310 FUN_145584310 body=222 status=ok
// SIG undefined FUN_145584310(void)

undefined8 * FUN_145584310(longlong param_1,undefined8 *param_2)

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
  if ((**(ulonglong **)(param_1 + -8) < 0x60) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0xb], pcVar1 == (code *)0x0)) {
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



// FUNCTION 1455843f0 FUN_1455843f0 body=54 status=ok
// SIG undefined FUN_1455843f0(void)

void FUN_1455843f0(longlong param_1,undefined4 param_2)

{
  ulonglong *puVar1;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x67 < *puVar1) && ((code *)puVar1[0xc] != (code *)0x0)) {
    (*(code *)puVar1[0xc])(puVar1,param_2);
  }
  return;
}



// FUNCTION 145584430 FUN_145584430 body=49 status=ok
// SIG undefined FUN_145584430(void)

undefined8 FUN_145584430(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  FUN_14516fec0();
  if ((0x6f < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[0xd],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145584456. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 145584470 FUN_145584470 body=222 status=ok
// SIG undefined FUN_145584470(void)

void FUN_145584470(longlong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  puVar8 = (undefined8 *)0x0;
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x77 < *puVar1) && (puVar1[0xe] != 0)) {
    lVar6 = (param_2[1] - *param_2) / 6 + (param_2[1] - *param_2 >> 0x3f);
    puVar9 = (undefined8 *)((lVar6 >> 2) - (lVar6 >> 0x3f));
    puVar4 = puVar8;
    if (puVar9 != (undefined8 *)0x0) {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = puVar9;
      uVar3 = SUB168(ZEXT816(8) * auVar2,0);
      if (SUB168(ZEXT816(8) * auVar2,8) != 0) {
        uVar3 = 0xffffffffffffffff;
      }
      puVar4 = (undefined8 *)FUN_144a7d36f(uVar3);
      if ((puVar4 != (undefined8 *)0x0) &&
         (puVar7 = puVar8, puVar10 = puVar8, puVar9 != (undefined8 *)0x0)) {
        do {
          puVar5 = (undefined8 *)(*param_2 + (longlong)puVar7 + 8);
          if (*param_2 + (longlong)puVar7 == 0) {
            puVar5 = puVar8;
          }
          puVar4[(longlong)puVar10] = *puVar5;
          puVar10 = (undefined8 *)((longlong)puVar10 + 1);
          puVar7 = puVar7 + 3;
        } while (puVar10 < puVar9);
      }
    }
    (*(code *)puVar1[0xe])(puVar1,puVar9,puVar4);
    if (puVar4 != (undefined8 *)0x0) {
      thunk_FUN_1400020a8(puVar4);
    }
  }
  return;
}



// FUNCTION 145584550 FUN_145584550 body=52 status=ok
// SIG undefined FUN_145584550(void)

undefined8 FUN_145584550(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  FUN_14516fec0();
  if ((0x7f < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[0xf],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145584579. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 145584590 FUN_145584590 body=438 status=ok
// SIG undefined FUN_145584590(void)

void FUN_145584590(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 *_Dst;
  undefined8 *puVar4;
  undefined8 **ppuVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *local_res8;
  undefined8 *local_res18;
  undefined8 uVar11;
  undefined **local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  uVar11 = 0xfffffffffffffffe;
  puVar9 = (undefined8 *)0x0;
  local_res8 = (undefined8 *)((ulonglong)local_res8 & 0xffffffff00000000);
  FUN_14516fec0();
  puVar1 = (ulonglong *)param_1[-1];
  if ((0x87 < *puVar1) && (puVar1[0x10] != 0)) {
    lVar6 = (param_2[1] - *param_2) / 6 + (param_2[1] - *param_2 >> 0x3f);
    puVar8 = (undefined8 *)((lVar6 >> 2) - (lVar6 >> 0x3f));
    local_res18 = puVar8;
    local_res8 = (undefined8 *)(**(code **)(*param_1 + 0x50))(param_1);
    ppuVar5 = &local_res18;
    if (puVar8 <= local_res8) {
      ppuVar5 = &local_res8;
    }
    local_res8 = *ppuVar5;
    _Dst = puVar9;
    if (local_res8 != (undefined8 *)0x0) {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_res8;
      uVar3 = SUB168(ZEXT816(8) * auVar2,0);
      if (SUB168(ZEXT816(8) * auVar2,8) != 0) {
        uVar3 = 0xffffffffffffffff;
      }
      _Dst = (undefined8 *)FUN_144a7d36f(uVar3);
      if ((_Dst != (undefined8 *)0x0) &&
         (memset(_Dst,0,(longlong)local_res8 * 8), puVar7 = puVar9, puVar10 = puVar9,
         puVar8 != (undefined8 *)0x0)) {
        do {
          puVar4 = (undefined8 *)(*param_2 + (longlong)puVar10 + 8);
          if (*param_2 + (longlong)puVar10 == 0) {
            puVar4 = puVar9;
          }
          _Dst[(longlong)puVar7] = *puVar4;
          puVar7 = (undefined8 *)((longlong)puVar7 + 1);
          puVar10 = puVar10 + 3;
        } while (puVar7 < puVar8);
      }
    }
    (*(code *)puVar1[0x10])(puVar1,&local_res8,_Dst,param_4,uVar11);
    puVar8 = (undefined8 *)param_2[1];
    for (puVar7 = (undefined8 *)*param_2; puVar7 != puVar8; puVar7 = puVar7 + 3) {
      (**(code **)*puVar7)(puVar7,0);
    }
    param_2[1] = *param_2;
    if ((local_res8 != (undefined8 *)0x0) && (_Dst != (undefined8 *)0x0)) {
      if (local_res8 != (undefined8 *)0x0) {
        do {
          local_20 = 0;
          local_28 = _Dst[(longlong)puVar9];
          local_30 = &PTR_FUN_14ba6cae8;
          FUN_145584b10(param_2,&local_30);
          puVar9 = (undefined8 *)((longlong)puVar9 + 1);
        } while (puVar9 < local_res8);
      }
      thunk_FUN_1400020a8(_Dst);
    }
  }
  return;
}



// FUNCTION 145584750 FUN_145584750 body=63 status=ok
// SIG undefined FUN_145584750(void)

void FUN_145584750(longlong param_1,undefined1 param_2)

{
  ulonglong *puVar1;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x8f < *puVar1) && ((code *)puVar1[0x11] != (code *)0x0)) {
    (*(code *)puVar1[0x11])(puVar1,param_2);
  }
  return;
}



// FUNCTION 145584790 FUN_145584790 body=60 status=ok
// SIG undefined FUN_145584790(void)

bool FUN_145584790(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0x97 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x12], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 1455847d0 FUN_1455847d0 body=63 status=ok
// SIG undefined FUN_1455847d0(void)

void FUN_1455847d0(longlong param_1,undefined1 param_2)

{
  ulonglong *puVar1;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x9f < *puVar1) && ((code *)puVar1[0x13] != (code *)0x0)) {
    (*(code *)puVar1[0x13])(puVar1,param_2);
  }
  return;
}



// FUNCTION 145584810 FUN_145584810 body=60 status=ok
// SIG undefined FUN_145584810(void)

bool FUN_145584810(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0xa7 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x14], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 145584850 FUN_145584850 body=60 status=ok
// SIG undefined FUN_145584850(void)

void FUN_145584850(longlong param_1,undefined4 param_2)

{
  ulonglong *puVar1;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0xaf < *puVar1) && ((code *)puVar1[0x15] != (code *)0x0)) {
    (*(code *)puVar1[0x15])(puVar1,param_2);
  }
  return;
}



// FUNCTION 145584890 FUN_145584890 body=55 status=ok
// SIG undefined FUN_145584890(void)

undefined8 FUN_145584890(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  FUN_14516fec0();
  if ((0xb7 < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[0x16],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001455848bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 1455848d0 FUN_1455848d0 body=60 status=ok
// SIG undefined FUN_1455848d0(void)

void FUN_1455848d0(longlong param_1,undefined4 param_2)

{
  ulonglong *puVar1;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0xbf < *puVar1) && ((code *)puVar1[0x17] != (code *)0x0)) {
    (*(code *)puVar1[0x17])(puVar1,param_2);
  }
  return;
}



// FUNCTION 145584910 FUN_145584910 body=55 status=ok
// SIG undefined FUN_145584910(void)

undefined8 FUN_145584910(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  FUN_14516fec0();
  if ((199 < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[0x18],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014558493c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 145584950 FUN_145584950 body=60 status=ok
// SIG undefined FUN_145584950(void)

void FUN_145584950(longlong param_1,undefined4 param_2)

{
  ulonglong *puVar1;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0xcf < *puVar1) && ((code *)puVar1[0x19] != (code *)0x0)) {
    (*(code *)puVar1[0x19])(puVar1,param_2);
  }
  return;
}



// FUNCTION 145584990 FUN_145584990 body=56 status=ok
// SIG undefined FUN_145584990(void)

undefined8 FUN_145584990(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  FUN_14516fec0();
  if ((0xd7 < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[0x1a],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001455849bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0xffffffff;
}



// FUNCTION 1455849d0 FUN_1455849d0 body=64 status=ok
// SIG undefined FUN_1455849d0(void)

undefined8 * FUN_1455849d0(undefined8 *param_1,ulonglong param_2)

{
  FUN_1455840e0();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -4,0x28);
  }
  return param_1 + -4;
}



// FUNCTION 145584a10 FUN_145584a10 body=109 status=ok
// SIG undefined FUN_145584a10(void)

void FUN_145584a10(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  
  if (0xaaaaaaaaaaaaaaa < param_3) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  uVar1 = param_2;
  if (0xfff < param_3 * 0x18) {
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



// FUNCTION 145584a90 FUN_145584a90 body=124 status=ok
// SIG undefined FUN_145584a90(void)

ulonglong FUN_145584a90(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    if (0xaaaaaaaaaaaaaaa < param_2) {
                    /* WARNING: Subroutine does not return */
      std::_Xbad_alloc();
    }
    param_2 = param_2 * 0x18;
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



// FUNCTION 145584b10 FUN_145584b10 body=226 status=ok
// SIG undefined FUN_145584b10(void)

void FUN_145584b10(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  uVar1 = param_1[1];
  if ((param_2 < uVar1) && (*param_1 <= param_2)) {
    lVar4 = param_2 - *param_1;
    lVar4 = lVar4 / 6 + (lVar4 >> 0x3f);
    if (uVar1 == param_1[2]) {
      FUN_145584d00(param_1);
    }
    param_2 = *param_1 + ((lVar4 >> 2) - (lVar4 >> 0x3f)) * 0x18;
    puVar3 = (undefined8 *)param_1[1];
    if (puVar3 == (undefined8 *)0x0) goto LAB_145584be2;
    *puVar3 = &PTR_FUN_14ba6caf0;
    puVar3[1] = 0;
  }
  else {
    if (uVar1 == param_1[2]) {
      FUN_145584d00(param_1);
    }
    puVar3 = (undefined8 *)param_1[1];
    if (puVar3 == (undefined8 *)0x0) goto LAB_145584be2;
    *puVar3 = &PTR_FUN_14ba6caf0;
    puVar3[1] = 0;
  }
  puVar3[2] = 0;
  puVar2 = (undefined8 *)(param_2 + 8);
  if (param_2 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  puVar3[1] = *puVar2;
  *puVar3 = &PTR_FUN_14ba6cae8;
LAB_145584be2:
  param_1[1] = param_1[1] + 0x18;
  return;
}



// FUNCTION 145584c00 FUN_145584c00 body=244 status=ok
// SIG undefined FUN_145584c00(void)

void FUN_145584c00(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar2 = FUN_145584a90();
  FUN_145584dd0(*param_1,param_1[1],lVar2,param_1);
  puVar4 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  lVar3 = (longlong)puVar1 - (longlong)puVar4;
  lVar3 = lVar3 / 6 + (lVar3 >> 0x3f);
  if (puVar4 != (undefined8 *)0x0) {
    for (; puVar4 != puVar1; puVar4 = puVar4 + 3) {
      (**(code **)*puVar4)(puVar4,0);
    }
    FUN_145584a10(param_1,*param_1,(param_1[2] - *param_1) / 0x18);
  }
  param_1[2] = lVar2 + param_2 * 0x18;
  param_1[1] = lVar2 + ((lVar3 >> 2) - (lVar3 >> 0x3f)) * 0x18;
  *param_1 = lVar2;
  return;
}



// FUNCTION 145584d00 FUN_145584d00 body=199 status=ok
// SIG undefined FUN_145584d00(void)

void FUN_145584d00(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_2 <= (ulonglong)((param_1[2] - param_1[1]) / 0x18)) {
    return;
  }
  lVar1 = (param_1[1] - *param_1) / 0x18;
  if (0xaaaaaaaaaaaaaaaU - lVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  param_2 = lVar1 + param_2;
  uVar2 = (param_1[2] - *param_1) / 0x18;
  uVar3 = 0;
  if (uVar2 <= 0xaaaaaaaaaaaaaaa - (uVar2 >> 1)) {
    uVar3 = (uVar2 >> 1) + uVar2;
  }
  if (param_2 <= uVar3) {
    param_2 = uVar3;
  }
  FUN_145584c00(param_1,param_2);
  return;
}



// FUNCTION 145584dd0 FUN_145584dd0 body=126 status=ok
// SIG undefined FUN_145584dd0(void)

undefined8 * FUN_145584dd0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_1 != param_2) {
    puVar2 = param_3 + 1;
    param_1 = param_1 - (longlong)param_3;
    do {
      if (param_3 != (undefined8 *)0x0) {
        *param_3 = &PTR_FUN_14ba6caf0;
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar1 = (undefined8 *)((longlong)puVar2 + param_1);
        if (param_1 + -8 + (longlong)puVar2 == 0) {
          puVar1 = (undefined8 *)0x0;
        }
        *puVar2 = *puVar1;
        *param_3 = &PTR_FUN_14ba6cae8;
      }
      puVar2 = puVar2 + 3;
      param_3 = param_3 + 3;
    } while (param_1 + -8 + (longlong)puVar2 != param_2);
  }
  return param_3;
}



// FUNCTION 145584ea0 FUN_145584ea0 body=262 status=ok
// SIG undefined FUN_145584ea0(void)

void FUN_145584ea0(undefined4 *param_1)

{
  undefined8 ***pppuVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 **local_30 [3];
  ulonglong local_18;
  ulonglong local_10;
  
  local_38 = 0xfffffffffffffffe;
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144d72f00(param_1 + 2,local_30);
  pppuVar1 = local_30;
  if (0xf < local_18) {
    pppuVar1 = (undefined8 ***)local_30[0];
  }
  cef_log(*(undefined8 *)(param_1 + 0x3c),param_1[0x3e],*param_1,pppuVar1);
  if (0xf < local_18) {
    pppuVar1 = (undefined8 ***)local_30[0];
    if (0xfff < local_18 + 1) {
      if (((ulonglong)local_30[0] & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      pppuVar1 = (undefined8 ***)local_30[0][-1];
      if (local_30[0] <= pppuVar1) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if ((ulonglong)((longlong)local_30[0] - (longlong)pppuVar1) < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < (ulonglong)((longlong)local_30[0] - (longlong)pppuVar1)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(pppuVar1);
  }
  SetLastError(param_1[0x3f]);
  FUN_144d72e80(param_1 + 0x24);
  *(code **)(param_1 + 0x24) = _vftable__exref;
  *(code **)(param_1 + 0x24) = _vftable__exref;
  std::ios_base::_Ios_base_dtor((ios_base *)(param_1 + 0x24));
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_58);
}



// FUNCTION 145584fc0 FUN_145584fc0 body=58 status=ok
// SIG undefined FUN_145584fc0(void)

longlong * FUN_145584fc0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + -0x10);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 145585000 FUN_145585000 body=49 status=ok
// SIG undefined FUN_145585000(void)

int FUN_145585000(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  (*(code *)**(undefined8 **)
              (*(longlong *)(param_1 + 0x10) + 8 +
              (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 4)))();
  LOCK();
  piVar1 = (int *)(param_1 + 0x58);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 145585040 FUN_145585040 body=77 status=ok
// SIG undefined FUN_145585040(void)

undefined8 FUN_145585040(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  (**(code **)(*(longlong *)(param_1[2] + 8 + (longlong)*(int *)(*(longlong *)(param_1[2] + 8) + 4))
              + 8))();
  LOCK();
  plVar1 = param_1 + 0xb;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*param_1 + 0x20))(param_1,1);
    return 1;
  }
  return 0;
}



// FUNCTION 1455850f0 FUN_1455850f0 body=42 status=ok
// SIG undefined FUN_1455850f0(void)

undefined1 FUN_1455850f0(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 8))();
  return uVar1;
}



// FUNCTION 145585120 FUN_145585120 body=42 status=ok
// SIG undefined FUN_145585120(void)

undefined1 FUN_145585120(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x10))();
  return uVar1;
}



// FUNCTION 145585150 FUN_145585150 body=42 status=ok
// SIG undefined FUN_145585150(void)

undefined1 FUN_145585150(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x18))();
  return uVar1;
}



// FUNCTION 145585180 FUN_145585180 body=43 status=ok
// SIG undefined FUN_145585180(void)

undefined8 * FUN_145585180(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1455851b0 FUN_1455851b0 body=118 status=ok
// SIG undefined FUN_1455851b0(void)

undefined8 * FUN_1455851b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149dade98;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)(param_1 + 1) = DAT_14c74680c;
  param_1[3] = param_1;
  param_1[5] = &LAB_1455850d0;
  param_1[6] = FUN_1455850f0;
  param_1[7] = FUN_145585120;
  param_1[8] = FUN_145585150;
  param_1[4] = 0x38;
  *param_1 = &PTR_FUN_149dadec0;
  param_1[9] = FUN_145585290;
  param_1[10] = FUN_145585320;
  return param_1;
}



// FUNCTION 145585230 FUN_145585230 body=84 status=ok
// SIG undefined FUN_145585230(void)

undefined8 *
FUN_145585230(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &PTR_FUN_149dadec0;
  FUN_14516fec0();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x60,param_3,param_4,uVar1);
  }
  return param_1;
}



// FUNCTION 145585290 FUN_145585290 body=135 status=ok
// SIG undefined FUN_145585290(void)

void FUN_145585290(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 local_res8 [2];
  longlong local_res18 [2];
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((param_1 != 0) && (param_2 != 0)) {
    puVar2 = (undefined8 *)FUN_145584fc0(local_res18,param_1);
    puVar2 = (undefined8 *)*puVar2;
    uVar3 = FUN_144d737e0(local_res8,param_2);
    puVar1 = (undefined8 *)*puVar2;
    (*(code *)*puVar1)(puVar2,uVar3,puVar1,param_4,uVar4);
    if (local_res18[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_res18[0] + 8 + (longlong)*(int *)(*(longlong *)(local_res18[0] + 8) + 4))
                  + 8))();
    }
  }
  return;
}



// FUNCTION 145585320 FUN_145585320 body=136 status=ok
// SIG undefined FUN_145585320(void)

void FUN_145585320(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

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
    puVar3 = (undefined8 *)FUN_145584fc0(local_res18,param_1);
    plVar1 = (longlong *)*puVar3;
    uVar4 = FUN_144d737e0(local_res8,param_2);
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



// FUNCTION 1455853b0 FUN_1455853b0 body=48 status=ok
// SIG undefined FUN_1455853b0(void)

longlong FUN_1455853b0(longlong param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x10,0x18);
    return param_1 + -0x10;
  }
  return param_1 + -0x10;
}



// FUNCTION 1455853e0 FUN_1455853e0 body=40 status=ok
// SIG undefined FUN_1455853e0(void)

int FUN_1455853e0(longlong param_1)

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



// FUNCTION 145585410 FUN_145585410 body=105 status=ok
// SIG undefined FUN_145585410(void)

undefined8 FUN_145585410(undefined8 *param_1)

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
      FUN_1455855f0(param_1);
      *param_1 = &PTR__purecall_14ba6c6b0;
      thunk_FUN_1400020a8(param_1 + -6,0x38);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 145585480 FUN_145585480 body=34 status=ok
// SIG undefined FUN_145585480(void)

bool FUN_145585480(longlong param_1)

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



// FUNCTION 1455854b0 FUN_1455854b0 body=38 status=ok
// SIG undefined FUN_1455854b0(void)

bool FUN_1455854b0(longlong param_1)

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



// FUNCTION 1455854e0 FUN_1455854e0 body=85 status=ok
// SIG undefined FUN_1455854e0(void)

longlong FUN_1455854e0(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149dadf98;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dadfa8;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x20,0x28);
  }
  return param_1 + -0x20;
}



// FUNCTION 145585540 FUN_145585540 body=167 status=ok
// SIG undefined FUN_145585540(void)

undefined8 * FUN_145585540(undefined8 *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &DAT_149dae008;
    param_1[4] = &PTR__purecall_14ba6c6b0;
  }
  *param_1 = &PTR__purecall_149dadf60;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) =
       &PTR__purecall_149dadf70;
  *param_1 = &PTR__purecall_149dadf98;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149dadfa8;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_149dadfd0;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149dadfe0;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  return param_1;
}



// FUNCTION 1455855f0 FUN_1455855f0 body=124 status=ok
// SIG undefined FUN_1455855f0(void)

void FUN_1455855f0(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR_FUN_149dadfd0;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dadfe0;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  FUN_14516fec0();
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149dadf98;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dadfa8;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  return;
}



// FUNCTION 145585670 FUN_145585670 body=57 status=ok
// SIG undefined FUN_145585670(void)

void FUN_145585670(longlong param_1,undefined1 param_2)

{
  ulonglong *puVar1;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x2f < *puVar1) && ((code *)puVar1[5] != (code *)0x0)) {
    (*(code *)puVar1[5])(puVar1,param_2);
  }
  return;
}



// FUNCTION 1455856b0 FUN_1455856b0 body=47 status=ok
// SIG undefined FUN_1455856b0(void)

void FUN_1455856b0(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_14516fec0();
  if ((0x37 < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[6],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001455856d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// FUNCTION 1455856e0 FUN_1455856e0 body=64 status=ok
// SIG undefined FUN_1455856e0(void)

undefined8 * FUN_1455856e0(undefined8 *param_1,ulonglong param_2)

{
  FUN_1455855f0();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -4,0x28);
  }
  return param_1 + -4;
}



// FUNCTION 145585770 FUN_145585770 body=48 status=ok
// SIG undefined FUN_145585770(void)

longlong FUN_145585770(longlong param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x10,0x18);
    return param_1 + -0x10;
  }
  return param_1 + -0x10;
}



// FUNCTION 1455857a0 FUN_1455857a0 body=40 status=ok
// SIG undefined FUN_1455857a0(void)

int FUN_1455857a0(longlong param_1)

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



// FUNCTION 1455857d0 FUN_1455857d0 body=105 status=ok
// SIG undefined FUN_1455857d0(void)

undefined8 FUN_1455857d0(undefined8 *param_1)

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
      FUN_1455859b0(param_1);
      *param_1 = &PTR__purecall_14ba6c6b0;
      thunk_FUN_1400020a8(param_1 + -6,0x38);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 145585840 FUN_145585840 body=34 status=ok
// SIG undefined FUN_145585840(void)

bool FUN_145585840(longlong param_1)

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



// FUNCTION 145585870 FUN_145585870 body=38 status=ok
// SIG undefined FUN_145585870(void)

bool FUN_145585870(longlong param_1)

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



// FUNCTION 1455858a0 FUN_1455858a0 body=85 status=ok
// SIG undefined FUN_1455858a0(void)

longlong FUN_1455858a0(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149dae068;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dae070;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x20,0x28);
  }
  return param_1 + -0x20;
}



// FUNCTION 145585900 FUN_145585900 body=167 status=ok
// SIG undefined FUN_145585900(void)

undefined8 * FUN_145585900(undefined8 *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &DAT_149dae0c8;
    param_1[4] = &PTR__purecall_14ba6c6b0;
  }
  *param_1 = &PTR__purecall_149dae038;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) =
       &PTR__purecall_149dae040;
  *param_1 = &PTR__purecall_149dae068;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149dae070;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_149dae098;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149dae0a0;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  return param_1;
}



// FUNCTION 1455859b0 FUN_1455859b0 body=124 status=ok
// SIG undefined FUN_1455859b0(void)

void FUN_1455859b0(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR_FUN_149dae098;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dae0a0;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  FUN_14516fec0();
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149dae068;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dae070;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  return;
}



// FUNCTION 145585a30 FUN_145585a30 body=178 status=ok
// SIG undefined FUN_145585a30(void)

void FUN_145585a30(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_res8;
  longlong *local_res10;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  local_res10 = param_2;
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0x30) || (puVar1[5] == 0)) {
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
    uVar3 = FUN_145585b30(&local_res8);
    (*(code *)puVar1[5])(puVar1,uVar3,param_3,param_4,uVar4);
    lVar2 = *param_2;
    if (lVar2 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 145585af0 FUN_145585af0 body=64 status=ok
// SIG undefined FUN_145585af0(void)

undefined8 * FUN_145585af0(undefined8 *param_1,ulonglong param_2)

{
  FUN_1455859b0();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -4,0x28);
  }
  return param_1 + -4;
}



// FUNCTION 145585b30 FUN_145585b30 body=156 status=ok
// SIG undefined FUN_145585b30(void)

undefined8 FUN_145585b30(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else if (*(int *)(lVar1 + -0x10) == DAT_14c74681c) {
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
    uVar3 = FUN_145586140(*(int *)(lVar1 + -0x10),lVar1,param_3,param_4,0xfffffffffffffffe);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
  }
  return uVar3;
}



// FUNCTION 145585c20 FUN_145585c20 body=48 status=ok
// SIG undefined FUN_145585c20(void)

longlong FUN_145585c20(longlong param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x10,0x18);
    return param_1 + -0x10;
  }
  return param_1 + -0x10;
}



// FUNCTION 145585c50 FUN_145585c50 body=40 status=ok
// SIG undefined FUN_145585c50(void)

int FUN_145585c50(longlong param_1)

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



// FUNCTION 145585c80 FUN_145585c80 body=105 status=ok
// SIG undefined FUN_145585c80(void)

undefined8 FUN_145585c80(undefined8 *param_1)

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
      FUN_145585e60(param_1);
      *param_1 = &PTR__purecall_14ba6c6b0;
      thunk_FUN_1400020a8(param_1 + -6,0x38);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 145585cf0 FUN_145585cf0 body=34 status=ok
// SIG undefined FUN_145585cf0(void)

bool FUN_145585cf0(longlong param_1)

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



// FUNCTION 145585d20 FUN_145585d20 body=38 status=ok
// SIG undefined FUN_145585d20(void)

bool FUN_145585d20(longlong param_1)

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



// FUNCTION 145585d50 FUN_145585d50 body=85 status=ok
// SIG undefined FUN_145585d50(void)

longlong FUN_145585d50(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149dae180;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dae190;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x20,0x28);
  }
  return param_1 + -0x20;
}



// FUNCTION 145585db0 FUN_145585db0 body=167 status=ok
// SIG undefined FUN_145585db0(void)

undefined8 * FUN_145585db0(undefined8 *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &DAT_149dae1f0;
    param_1[4] = &PTR__purecall_14ba6c6b0;
  }
  *param_1 = &PTR__purecall_149dae148;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) =
       &PTR__purecall_149dae158;
  *param_1 = &PTR__purecall_149dae180;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149dae190;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_149dae1b8;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149dae1c8;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  return param_1;
}



// FUNCTION 145585e60 FUN_145585e60 body=124 status=ok
// SIG undefined FUN_145585e60(void)

void FUN_145585e60(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR_FUN_149dae1b8;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dae1c8;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  FUN_14516fec0();
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149dae180;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dae190;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  return;
}



// FUNCTION 145585ee0 FUN_145585ee0 body=49 status=ok
// SIG undefined FUN_145585ee0(void)

undefined8 FUN_145585ee0(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  FUN_14516fec0();
  if ((0x2f < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[5],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145585f06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 145585f20 FUN_145585f20 body=96 status=ok
// SIG undefined FUN_145585f20(void)

undefined8 *
FUN_145585f20(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  FUN_14516fec0();
  if ((0x37 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[6], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_1453ef790(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 145585f80 FUN_145585f80 body=64 status=ok
// SIG undefined FUN_145585f80(void)

undefined8 * FUN_145585f80(undefined8 *param_1,ulonglong param_2)

{
  FUN_145585e60();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -4,0x28);
  }
  return param_1 + -4;
}



// FUNCTION 145586010 FUN_145586010 body=48 status=ok
// SIG undefined FUN_145586010(void)

longlong FUN_145586010(longlong param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x10,0x18);
    return param_1 + -0x10;
  }
  return param_1 + -0x10;
}



// FUNCTION 145586040 FUN_145586040 body=40 status=ok
// SIG undefined FUN_145586040(void)

int FUN_145586040(longlong param_1)

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



// FUNCTION 145586070 FUN_145586070 body=105 status=ok
// SIG undefined FUN_145586070(void)

undefined8 FUN_145586070(undefined8 *param_1)

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
      FUN_145586260(param_1);
      *param_1 = &PTR__purecall_14ba6c6b0;
      thunk_FUN_1400020a8(param_1 + -6,0x38);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1455860e0 FUN_1455860e0 body=34 status=ok
// SIG undefined FUN_1455860e0(void)

bool FUN_1455860e0(longlong param_1)

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



// FUNCTION 145586110 FUN_145586110 body=38 status=ok
// SIG undefined FUN_145586110(void)

bool FUN_145586110(longlong param_1)

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



// FUNCTION 145586140 FUN_145586140 body=11 status=ok
// SIG undefined FUN_145586140(void)

undefined8 FUN_145586140(void)

{
  return 0;
}



// FUNCTION 145586150 FUN_145586150 body=85 status=ok
// SIG undefined FUN_145586150(void)

longlong FUN_145586150(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149dae298;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dae2e8;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x20,0x28);
  }
  return param_1 + -0x20;
}



// FUNCTION 1455861b0 FUN_1455861b0 body=167 status=ok
// SIG undefined FUN_1455861b0(void)

undefined8 * FUN_1455861b0(undefined8 *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &DAT_149dae388;
    param_1[4] = &PTR__purecall_14ba6c6b0;
  }
  *param_1 = &PTR__purecall_149dae220;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) =
       &PTR__purecall_149dae270;
  *param_1 = &PTR__purecall_149dae298;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149dae2e8;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_149dae310;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149dae360;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  return param_1;
}



// FUNCTION 145586260 FUN_145586260 body=124 status=ok
// SIG undefined FUN_145586260(void)

void FUN_145586260(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR_FUN_149dae310;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dae360;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  FUN_14516fec0();
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149dae298;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dae2e8;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  return;
}



// FUNCTION 1455862e0 FUN_1455862e0 body=96 status=ok
// SIG undefined FUN_1455862e0(void)

undefined8 *
FUN_1455862e0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  FUN_14516fec0();
  if ((0x2f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[5], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_1455869c0(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 145586340 FUN_145586340 body=96 status=ok
// SIG undefined FUN_145586340(void)

undefined8 *
FUN_145586340(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  FUN_14516fec0();
  if ((0x37 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[6], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_1455869c0(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1455863a0 FUN_1455863a0 body=96 status=ok
// SIG undefined FUN_1455863a0(void)

undefined8 *
FUN_1455863a0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  FUN_14516fec0();
  if ((0x3f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[7], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_144d736f0(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 145586400 FUN_145586400 body=158 status=ok
// SIG undefined FUN_145586400(void)

undefined8 *
FUN_145586400(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 local_30 [40];
  
  FUN_14516fec0(param_1,param_2,param_3,param_4,0);
  if ((**(ulonglong **)(param_1 + -8) < 0x48) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[8], pcVar1 == (code *)0x0)) {
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



// FUNCTION 1455864a0 FUN_1455864a0 body=158 status=ok
// SIG undefined FUN_1455864a0(void)

undefined8 *
FUN_1455864a0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 local_30 [40];
  
  FUN_14516fec0(param_1,param_2,param_3,param_4,0);
  if ((**(ulonglong **)(param_1 + -8) < 0x50) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[9], pcVar1 == (code *)0x0)) {
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



// FUNCTION 145586540 FUN_145586540 body=96 status=ok
// SIG undefined FUN_145586540(void)

undefined8 *
FUN_145586540(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  FUN_14516fec0();
  if ((0x57 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[10], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_144d736f0(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1455865a0 FUN_1455865a0 body=96 status=ok
// SIG undefined FUN_1455865a0(void)

undefined8 *
FUN_1455865a0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  FUN_14516fec0();
  if ((0x5f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0xb], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_144d736f0(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 145586600 FUN_145586600 body=49 status=ok
// SIG undefined FUN_145586600(void)

undefined8 FUN_145586600(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  FUN_14516fec0();
  if ((0x67 < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[0xc],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145586626. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 145586640 FUN_145586640 body=414 status=ok
// SIG undefined FUN_145586640(void)

void FUN_145586640(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_14516fec0();
  puVar1 = (ulonglong *)param_1[-1];
  if ((0x6f < *puVar1) && (puVar1[0xd] != 0)) {
    pvVar6 = (void *)(param_2[1] - *param_2 >> 3);
    local_res18[0] = pvVar6;
    local_res8 = (void *)(**(code **)(*param_1 + 0x38))(param_1);
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
          uVar3 = FUN_144d750c0(local_res18);
          *(undefined8 *)((longlong)_Dst + (longlong)pvVar7 * 8) = uVar3;
          pvVar7 = (void *)((longlong)pvVar7 + 1);
        } while (pvVar7 < pvVar6);
      }
    }
    (*(code *)puVar1[0xd])(puVar1,&local_res8,_Dst,param_4,uVar8);
    FUN_145586cc0(param_2);
    if ((local_res8 != (void *)0x0) && (_Dst != (void *)0x0)) {
      if (local_res8 != (void *)0x0) {
        do {
          uVar8 = FUN_144d736f0(local_res18,*(undefined8 *)((longlong)_Dst + (longlong)pvVar5 * 8));
          FUN_145586be0(param_2,uVar8);
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



// FUNCTION 1455867e0 FUN_1455867e0 body=414 status=ok
// SIG undefined FUN_1455867e0(void)

void FUN_1455867e0(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_14516fec0();
  puVar1 = (ulonglong *)param_1[-1];
  if ((0x77 < *puVar1) && (puVar1[0xe] != 0)) {
    pvVar6 = (void *)(param_2[1] - *param_2 >> 3);
    local_res18[0] = pvVar6;
    local_res8 = (void *)(**(code **)(*param_1 + 0x38))(param_1);
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
          uVar3 = FUN_144d750c0(local_res18);
          *(undefined8 *)((longlong)_Dst + (longlong)pvVar7 * 8) = uVar3;
          pvVar7 = (void *)((longlong)pvVar7 + 1);
        } while (pvVar7 < pvVar6);
      }
    }
    (*(code *)puVar1[0xe])(puVar1,&local_res8,_Dst,param_4,uVar8);
    FUN_145586cc0(param_2);
    if ((local_res8 != (void *)0x0) && (_Dst != (void *)0x0)) {
      if (local_res8 != (void *)0x0) {
        do {
          uVar8 = FUN_144d736f0(local_res18,*(undefined8 *)((longlong)_Dst + (longlong)pvVar5 * 8));
          FUN_145586be0(param_2,uVar8);
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



// FUNCTION 145586980 FUN_145586980 body=64 status=ok
// SIG undefined FUN_145586980(void)

undefined8 * FUN_145586980(undefined8 *param_1,ulonglong param_2)

{
  FUN_145586260();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -4,0x28);
  }
  return param_1 + -4;
}



// FUNCTION 1455869c0 FUN_1455869c0 body=230 status=ok
// SIG undefined FUN_1455869c0(void)

longlong * FUN_1455869c0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

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
      FUN_1455fe670(puVar2 + 4,1,param_3,param_4,uVar3,uVar4);
    }
    *puVar2 = DAT_14c748004;
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



// FUNCTION 145586ab0 FUN_145586ab0 body=48 status=ok
// SIG undefined FUN_145586ab0(void)

void FUN_145586ab0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 145586ae0 FUN_145586ae0 body=109 status=ok
// SIG undefined FUN_145586ae0(void)

void FUN_145586ae0(undefined8 param_1,ulonglong param_2,ulonglong param_3)

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



// FUNCTION 145586b60 FUN_145586b60 body=124 status=ok
// SIG undefined FUN_145586b60(void)

ulonglong FUN_145586b60(undefined8 param_1,ulonglong param_2)

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



// FUNCTION 145586be0 FUN_145586be0 body=212 status=ok
// SIG undefined FUN_145586be0(void)

void FUN_145586be0(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)param_1[1];
  if ((param_2 < plVar1) && (plVar2 = (longlong *)*param_1, plVar2 <= param_2)) {
    if (plVar1 == (longlong *)param_1[2]) {
      FUN_145586e10(param_1,1,param_3,param_4,0xfffffffffffffffe);
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
      FUN_145586e10(param_1,1,param_3,param_4,0xfffffffffffffffe);
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



// FUNCTION 145586cc0 FUN_145586cc0 body=108 status=ok
// SIG undefined FUN_145586cc0(void)

void FUN_145586cc0(longlong *param_1)

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



// FUNCTION 145586d30 FUN_145586d30 body=217 status=ok
// SIG undefined FUN_145586d30(void)

void FUN_145586d30(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8;
  undefined8 uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  lVar3 = FUN_145586b60();
  FUN_145586ea0(*param_1,param_1[1],lVar3,param_1,0,local_res8,uVar6);
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
    FUN_145586ae0(param_1,*param_1,param_1[2] - *param_1 >> 3);
  }
  param_1[2] = lVar3 + param_2 * 8;
  param_1[1] = lVar3 + (lVar5 >> 3) * 8;
  *param_1 = lVar3;
  return;
}



// FUNCTION 145586e10 FUN_145586e10 body=129 status=ok
// SIG undefined FUN_145586e10(void)

void FUN_145586e10(longlong *param_1,ulonglong param_2)

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
  FUN_145586d30(param_1,param_2);
  return;
}



// FUNCTION 145586ea0 FUN_145586ea0 body=127 status=ok
// SIG undefined FUN_145586ea0(void)

longlong * FUN_145586ea0(longlong *param_1,longlong *param_2,longlong *param_3)

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



// FUNCTION 145586f70 FUN_145586f70 body=11 status=ok
// SIG undefined FUN_145586f70(void)

undefined8 FUN_145586f70(void)

{
  return 0;
}



// FUNCTION 145586f80 FUN_145586f80 body=58 status=ok
// SIG undefined FUN_145586f80(void)

longlong * FUN_145586f80(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + -0x10);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 145586fc0 FUN_145586fc0 body=49 status=ok
// SIG undefined FUN_145586fc0(void)

int FUN_145586fc0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  (*(code *)**(undefined8 **)
              (*(longlong *)(param_1 + 0x10) + 8 +
              (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 4)))();
  LOCK();
  piVar1 = (int *)(param_1 + 0x58);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}


