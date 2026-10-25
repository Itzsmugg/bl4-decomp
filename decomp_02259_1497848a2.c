// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1497848a2 FUN_1497848a2 body=93 status=ok
// SIG undefined FUN_1497848a2(void)

void FUN_1497848a2(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25ae0 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25ae0 = FUN_140002ddd(FUN_146757a4d,uVar2,L"AddCustomCollectionAttributeDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25ae0,param_1);
  return;
}



// FUNCTION 149784900 FUN_149784900 body=55 status=ok
// SIG undefined FUN_149784900(void)

void FUN_149784900(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25ae0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25ae0 = FUN_140002ddd(FUN_146757a4d,uVar1,L"AddCustomCollectionAttributeDataflowNode");
  }
  return;
}



// FUNCTION 149784938 FUN_149784938 body=233 status=ok
// SIG undefined FUN_149784938(void)

ulonglong FUN_149784938(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FAddCustomCollectionAttributeDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_1497849d2;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1497849d2;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_1497849d2;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_1497849d2:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 149784a22 FUN_149784a22 body=77 status=ok
// SIG undefined FUN_149784a22(void)

void FUN_149784a22(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be61e60;
  if (param_1[0x4c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4a] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 149784a70 FUN_149784a70 body=104 status=ok
// SIG undefined FUN_149784a70(void)

longlong FUN_149784a70(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  *(undefined1 *)(param_1 + 0x248) = *(undefined1 *)(param_2 + 0x248);
  FUN_144a787a6(param_1 + 0x250,param_2 + 0x250);
  FUN_144a787a6(param_1 + 0x260,param_2 + 0x260);
  *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)(param_2 + 0x270);
  return param_1;
}



// FUNCTION 149784ada FUN_149784ada body=80 status=ok
// SIG undefined FUN_149784ada(void)

void FUN_149784ada(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be62120;
  FUN_1414db454(param_2 + 0x33);
  *(undefined1 *)(param_2 + 0x49) = 0;
  FUN_1400b22c2(param_2 + 0x4a,&DAT_149e02088);
  *(undefined4 *)(param_2 + 0x4c) = 0;
  return;
}



// FUNCTION 149784b2a FUN_149784b2a body=80 status=ok
// SIG undefined FUN_149784b2a(void)

void FUN_149784b2a(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be62120;
  FUN_1414db454(param_2 + 0x33);
  *(undefined1 *)(param_2 + 0x49) = 0;
  FUN_1400b22c2(param_2 + 0x4a,&DAT_149e02088);
  *(undefined4 *)(param_2 + 0x4c) = 0;
  return;
}



// FUNCTION 149784b9e FUN_149784b9e body=132 status=ok
// SIG undefined FUN_149784b9e(void)

undefined8 FUN_149784b9e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    FUN_146ecd102(param_2 + 0x198,param_3 + 0x198);
    *(undefined1 *)(param_2 + 0x248) = *(undefined1 *)(param_3 + 0x248);
    FUN_144a787a6(param_2 + 0x250,param_3 + 0x250);
    *(undefined4 *)(param_2 + 0x260) = *(undefined4 *)(param_3 + 0x260);
    param_2 = param_2 + 0x268;
    param_3 = param_3 + 0x268;
  }
  return 1;
}



// FUNCTION 149784c4a FUN_149784c4a body=59 status=ok
// SIG undefined FUN_149784c4a(void)

undefined8 FUN_149784c4a(longlong *param_1)

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



// FUNCTION 149784c96 FUN_149784c96 body=40 status=ok
// SIG undefined FUN_149784c96(void)

void FUN_149784c96(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x268) == '\x01') {
    FUN_149784fc0(param_2);
    *(undefined1 *)(param_2 + 0x268) = 0;
  }
  return;
}



// FUNCTION 149784d0c FUN_149784d0c body=38 status=ok
// SIG undefined FUN_149784d0c(void)

undefined8 FUN_149784d0c(undefined8 param_1,int param_2)

{
  FUN_149784fc0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149784d32 FUN_149784d32 body=38 status=ok
// SIG undefined FUN_149784d32(void)

undefined8 FUN_149784d32(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FGetNumElementsInCollectionGroupDataflowNode",1);
  return param_2;
}



// FUNCTION 149784d58 FUN_149784d58 body=38 status=ok
// SIG undefined FUN_149784d58(void)

undefined8 FUN_149784d58(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GetNumElementsInCollectionGroup",1);
  return param_2;
}



// FUNCTION 149784d7e FUN_149784d7e body=38 status=ok
// SIG undefined FUN_149784d7e(void)

undefined8 FUN_149784d7e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Utilities",1);
  return param_2;
}



// FUNCTION 149784da4 FUN_149784da4 body=32 status=ok
// SIG undefined FUN_149784da4(void)

undefined8 FUN_149784da4(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149784dc4 FUN_149784dc4 body=123 status=ok
// SIG undefined FUN_149784dc4(void)

void FUN_149784dc4(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25af8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25af8 =
         FUN_140002ddd(FUN_146757ae3,uVar1,L"GetNumElementsInCollectionGroupDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25af8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149784e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149784e40 FUN_149784e40 body=93 status=ok
// SIG undefined FUN_149784e40(void)

void FUN_149784e40(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25af8 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25af8 =
         FUN_140002ddd(FUN_146757ae3,uVar2,L"GetNumElementsInCollectionGroupDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25af8,param_1);
  return;
}



// FUNCTION 149784e9e FUN_149784e9e body=55 status=ok
// SIG undefined FUN_149784e9e(void)

void FUN_149784e9e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25af8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25af8 =
         FUN_140002ddd(FUN_146757ae3,uVar1,L"GetNumElementsInCollectionGroupDataflowNode");
  }
  return;
}



// FUNCTION 149784ed6 FUN_149784ed6 body=233 status=ok
// SIG undefined FUN_149784ed6(void)

ulonglong FUN_149784ed6(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FGetNumElementsInCollectionGroupDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149784f70;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149784f70;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149784f70;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149784f70:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 149784fc0 FUN_149784fc0 body=60 status=ok
// SIG undefined FUN_149784fc0(void)

void FUN_149784fc0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be62120;
  if (param_1[0x4a] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 149785032 FUN_149785032 body=63 status=ok
// SIG undefined FUN_149785032(void)

undefined1 FUN_149785032(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1497855ce(param_2,param_3);
    param_3 = param_3 + 0x310;
    param_2 = param_2 + 0x310;
  }
  return 1;
}



// FUNCTION 14978509a FUN_14978509a body=59 status=ok
// SIG undefined FUN_14978509a(void)

undefined8 FUN_14978509a(longlong *param_1)

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



// FUNCTION 1497850e6 FUN_1497850e6 body=40 status=ok
// SIG undefined FUN_1497850e6(void)

void FUN_1497850e6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x310) == '\x01') {
    FUN_1497854c4(param_2);
    *(undefined1 *)(param_2 + 0x310) = 0;
  }
  return;
}



// FUNCTION 14978515c FUN_14978515c body=179 status=ok
// SIG undefined FUN_14978515c(void)

undefined8 * FUN_14978515c(undefined8 *param_1)

{
  FUN_146fc02b8();
  *param_1 = &PTR_FUN_14be623e0;
  FUN_1414db454(param_1 + 0x33);
  FUN_1400b22c2(param_1 + 0x49,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 0x4b,&DAT_149e02088);
  *(undefined1 *)(param_1 + 0x4d) = 0;
  FUN_1400b22c2(param_1 + 0x4e,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 0x50,&DAT_149e02088);
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
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
  return param_1;
}



// FUNCTION 149785210 FUN_149785210 body=38 status=ok
// SIG undefined FUN_149785210(void)

undefined8 FUN_149785210(undefined8 param_1,int param_2)

{
  FUN_1497854c4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149785236 FUN_149785236 body=38 status=ok
// SIG undefined FUN_149785236(void)

undefined8 FUN_149785236(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FGetCollectionAttributeDataTypedDataflowNode",1);
  return param_2;
}



// FUNCTION 14978525c FUN_14978525c body=38 status=ok
// SIG undefined FUN_14978525c(void)

undefined8 FUN_14978525c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GetCollectionAttributeDataTyped",1);
  return param_2;
}



// FUNCTION 149785282 FUN_149785282 body=38 status=ok
// SIG undefined FUN_149785282(void)

undefined8 FUN_149785282(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Utilities",1);
  return param_2;
}



// FUNCTION 1497852a8 FUN_1497852a8 body=32 status=ok
// SIG undefined FUN_1497852a8(void)

undefined8 FUN_1497852a8(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 1497852c8 FUN_1497852c8 body=123 status=ok
// SIG undefined FUN_1497852c8(void)

void FUN_1497852c8(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25b10 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25b10 =
         FUN_140002ddd(FUN_146757b79,uVar1,L"GetCollectionAttributeDataTypedDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25b10,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149785340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149785344 FUN_149785344 body=93 status=ok
// SIG undefined FUN_149785344(void)

void FUN_149785344(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25b10 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25b10 =
         FUN_140002ddd(FUN_146757b79,uVar2,L"GetCollectionAttributeDataTypedDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25b10,param_1);
  return;
}



// FUNCTION 1497853a2 FUN_1497853a2 body=55 status=ok
// SIG undefined FUN_1497853a2(void)

void FUN_1497853a2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25b10 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25b10 =
         FUN_140002ddd(FUN_146757b79,uVar1,L"GetCollectionAttributeDataTypedDataflowNode");
  }
  return;
}



// FUNCTION 1497853da FUN_1497853da body=233 status=ok
// SIG undefined FUN_1497853da(void)

ulonglong FUN_1497853da(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FGetCollectionAttributeDataTypedDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149785474;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149785474;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149785474;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149785474:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1497854c4 FUN_1497854c4 body=265 status=ok
// SIG undefined FUN_1497854c4(void)

void FUN_1497854c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be623e0;
  if (param_1[0x60] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5c] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x5a],*(undefined4 *)(param_1 + 0x5b));
  if (param_1[0x5a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x58] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x56] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x50] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x49] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 1497855ce FUN_1497855ce body=263 status=ok
// SIG undefined FUN_1497855ce(void)

longlong FUN_1497855ce(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  FUN_144a787a6(param_1 + 0x248,param_2 + 0x248);
  FUN_144a787a6(param_1 + 600,param_2 + 600);
  *(undefined1 *)(param_1 + 0x268) = *(undefined1 *)(param_2 + 0x268);
  FUN_144a787a6(param_1 + 0x270,param_2 + 0x270);
  FUN_144a787a6(param_1 + 0x280,param_2 + 0x280);
  FUN_1447cd5a6(param_1 + 0x290,param_2 + 0x290);
  FUN_144a67f5c(param_1 + 0x2a0,param_2 + 0x2a0);
  FUN_1408fdf38(param_1 + 0x2b0,param_2 + 0x2b0);
  FUN_14054c6c4(param_1 + 0x2c0,param_2 + 0x2c0);
  FUN_140bee9ec(param_1 + 0x2d0,param_2 + 0x2d0);
  FUN_140de4b5e(param_1 + 0x2e0,param_2 + 0x2e0);
  FUN_1405b70a4(param_1 + 0x2f0,param_2 + 0x2f0);
  FUN_14479f9aa(param_1 + 0x300,param_2 + 0x300);
  return param_1;
}



// FUNCTION 14978570a FUN_14978570a body=63 status=ok
// SIG undefined FUN_14978570a(void)

undefined1 FUN_14978570a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149785ca6(param_2,param_3);
    param_3 = param_3 + 0x310;
    param_2 = param_2 + 0x310;
  }
  return 1;
}



// FUNCTION 149785772 FUN_149785772 body=59 status=ok
// SIG undefined FUN_149785772(void)

undefined8 FUN_149785772(longlong *param_1)

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



// FUNCTION 1497857be FUN_1497857be body=40 status=ok
// SIG undefined FUN_1497857be(void)

void FUN_1497857be(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x310) == '\x01') {
    FUN_149785b9c(param_2);
    *(undefined1 *)(param_2 + 0x310) = 0;
  }
  return;
}



// FUNCTION 149785834 FUN_149785834 body=179 status=ok
// SIG undefined FUN_149785834(void)

undefined8 * FUN_149785834(undefined8 *param_1)

{
  FUN_146fc02b8();
  *param_1 = &PTR_FUN_14be626a0;
  FUN_1414db454(param_1 + 0x33);
  FUN_1400b22c2(param_1 + 0x49,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 0x4b,&DAT_149e02088);
  *(undefined1 *)(param_1 + 0x4d) = 0;
  FUN_1400b22c2(param_1 + 0x4e,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 0x50,&DAT_149e02088);
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
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
  return param_1;
}



// FUNCTION 1497858e8 FUN_1497858e8 body=38 status=ok
// SIG undefined FUN_1497858e8(void)

undefined8 FUN_1497858e8(undefined8 param_1,int param_2)

{
  FUN_149785b9c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14978590e FUN_14978590e body=38 status=ok
// SIG undefined FUN_14978590e(void)

undefined8 FUN_14978590e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FSetCollectionAttributeDataTypedDataflowNode",1);
  return param_2;
}



// FUNCTION 149785934 FUN_149785934 body=38 status=ok
// SIG undefined FUN_149785934(void)

undefined8 FUN_149785934(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"SetCollectionAttributeDataTyped",1);
  return param_2;
}



// FUNCTION 14978595a FUN_14978595a body=38 status=ok
// SIG undefined FUN_14978595a(void)

undefined8 FUN_14978595a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Utilities",1);
  return param_2;
}



// FUNCTION 149785980 FUN_149785980 body=32 status=ok
// SIG undefined FUN_149785980(void)

undefined8 FUN_149785980(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 1497859a0 FUN_1497859a0 body=123 status=ok
// SIG undefined FUN_1497859a0(void)

void FUN_1497859a0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25b28 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25b28 =
         FUN_140002ddd(FUN_146757c0f,uVar1,L"SetCollectionAttributeDataTypedDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25b28,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149785a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149785a1c FUN_149785a1c body=93 status=ok
// SIG undefined FUN_149785a1c(void)

void FUN_149785a1c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25b28 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25b28 =
         FUN_140002ddd(FUN_146757c0f,uVar2,L"SetCollectionAttributeDataTypedDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25b28,param_1);
  return;
}



// FUNCTION 149785a7a FUN_149785a7a body=55 status=ok
// SIG undefined FUN_149785a7a(void)

void FUN_149785a7a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25b28 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25b28 =
         FUN_140002ddd(FUN_146757c0f,uVar1,L"SetCollectionAttributeDataTypedDataflowNode");
  }
  return;
}



// FUNCTION 149785ab2 FUN_149785ab2 body=233 status=ok
// SIG undefined FUN_149785ab2(void)

ulonglong FUN_149785ab2(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FSetCollectionAttributeDataTypedDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149785b4c;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149785b4c;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149785b4c;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149785b4c:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 149785b9c FUN_149785b9c body=265 status=ok
// SIG undefined FUN_149785b9c(void)

void FUN_149785b9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be626a0;
  if (param_1[0x60] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5c] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x5a],*(undefined4 *)(param_1 + 0x5b));
  if (param_1[0x5a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x58] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x56] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x50] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x49] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 149785ca6 FUN_149785ca6 body=263 status=ok
// SIG undefined FUN_149785ca6(void)

longlong FUN_149785ca6(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  FUN_144a787a6(param_1 + 0x248,param_2 + 0x248);
  FUN_144a787a6(param_1 + 600,param_2 + 600);
  *(undefined1 *)(param_1 + 0x268) = *(undefined1 *)(param_2 + 0x268);
  FUN_144a787a6(param_1 + 0x270,param_2 + 0x270);
  FUN_144a787a6(param_1 + 0x280,param_2 + 0x280);
  FUN_1447cd5a6(param_1 + 0x290,param_2 + 0x290);
  FUN_144a67f5c(param_1 + 0x2a0,param_2 + 0x2a0);
  FUN_1408fdf38(param_1 + 0x2b0,param_2 + 0x2b0);
  FUN_14054c6c4(param_1 + 0x2c0,param_2 + 0x2c0);
  FUN_140bee9ec(param_1 + 0x2d0,param_2 + 0x2d0);
  FUN_140de4b5e(param_1 + 0x2e0,param_2 + 0x2e0);
  FUN_1405b70a4(param_1 + 0x2f0,param_2 + 0x2f0);
  FUN_14479f9aa(param_1 + 0x300,param_2 + 0x300);
  return param_1;
}



// FUNCTION 149785dae FUN_149785dae body=70 status=ok
// SIG undefined FUN_149785dae(void)

void FUN_149785dae(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be62960;
  param_2[0x35] = 0;
  param_2[0x36] = 0x8000000000;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  return;
}



// FUNCTION 149785df4 FUN_149785df4 body=70 status=ok
// SIG undefined FUN_149785df4(void)

void FUN_149785df4(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be62960;
  param_2[0x35] = 0;
  param_2[0x36] = 0x8000000000;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  return;
}



// FUNCTION 149785e5e FUN_149785e5e body=63 status=ok
// SIG undefined FUN_149785e5e(void)

undefined1 FUN_149785e5e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14978627e(param_2,param_3);
    param_3 = param_3 + 0x1c8;
    param_2 = param_2 + 0x1c8;
  }
  return 1;
}



// FUNCTION 149785ec6 FUN_149785ec6 body=59 status=ok
// SIG undefined FUN_149785ec6(void)

undefined8 FUN_149785ec6(longlong *param_1)

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



// FUNCTION 149785f12 FUN_149785f12 body=40 status=ok
// SIG undefined FUN_149785f12(void)

void FUN_149785f12(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1c8) == '\x01') {
    FUN_14978623c(param_2);
    *(undefined1 *)(param_2 + 0x1c8) = 0;
  }
  return;
}



// FUNCTION 149785f88 FUN_149785f88 body=38 status=ok
// SIG undefined FUN_149785f88(void)

undefined8 FUN_149785f88(undefined8 param_1,int param_2)

{
  FUN_14978623c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149785fae FUN_149785fae body=38 status=ok
// SIG undefined FUN_149785fae(void)

undefined8 FUN_149785fae(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FSelectionToVertexListDataflowNode",1);
  return param_2;
}



// FUNCTION 149785fd4 FUN_149785fd4 body=38 status=ok
// SIG undefined FUN_149785fd4(void)

undefined8 FUN_149785fd4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"SelectionToVertexList",1);
  return param_2;
}



// FUNCTION 149785ffa FUN_149785ffa body=38 status=ok
// SIG undefined FUN_149785ffa(void)

undefined8 FUN_149785ffa(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Selection|Utility",1);
  return param_2;
}



// FUNCTION 149786020 FUN_149786020 body=32 status=ok
// SIG undefined FUN_149786020(void)

undefined8 FUN_149786020(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149786040 FUN_149786040 body=123 status=ok
// SIG undefined FUN_149786040(void)

void FUN_149786040(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25b40 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25b40 = FUN_140002ddd(FUN_146757ca5,uVar1,L"SelectionToVertexListDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25b40,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001497860b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 1497860bc FUN_1497860bc body=93 status=ok
// SIG undefined FUN_1497860bc(void)

void FUN_1497860bc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25b40 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25b40 = FUN_140002ddd(FUN_146757ca5,uVar2,L"SelectionToVertexListDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25b40,param_1);
  return;
}



// FUNCTION 14978611a FUN_14978611a body=55 status=ok
// SIG undefined FUN_14978611a(void)

void FUN_14978611a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25b40 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25b40 = FUN_140002ddd(FUN_146757ca5,uVar1,L"SelectionToVertexListDataflowNode");
  }
  return;
}



// FUNCTION 149786152 FUN_149786152 body=233 status=ok
// SIG undefined FUN_149786152(void)

ulonglong FUN_149786152(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FSelectionToVertexListDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_1497861ec;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1497861ec;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_1497861ec;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_1497861ec:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14978623c FUN_14978623c body=65 status=ok
// SIG undefined FUN_14978623c(void)

void FUN_14978623c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be62960;
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 14978627e FUN_14978627e body=69 status=ok
// SIG undefined FUN_14978627e(void)

longlong FUN_14978627e(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x198,param_2 + 0x198);
  }
  FUN_14054c6c4(param_1 + 0x1b8,param_2 + 0x1b8);
  return param_1;
}



// FUNCTION 1497862c4 FUN_1497862c4 body=100 status=ok
// SIG undefined FUN_1497862c4(void)

void FUN_1497862c4(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be62c20;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x34;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x40;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x4c;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 149786328 FUN_149786328 body=100 status=ok
// SIG undefined FUN_149786328(void)

void FUN_149786328(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be62c20;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x34;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x40;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x4c;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 1497863b0 FUN_1497863b0 body=91 status=ok
// SIG undefined FUN_1497863b0(void)

undefined8 FUN_1497863b0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    memcpy((void *)(param_2 + 0x1a0),(void *)(param_3 + 0x1a0),0x120);
    param_2 = param_2 + 0x2c0;
    param_3 = param_3 + 0x2c0;
  }
  return 1;
}



// FUNCTION 149786434 FUN_149786434 body=59 status=ok
// SIG undefined FUN_149786434(void)

undefined8 FUN_149786434(longlong *param_1)

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



// FUNCTION 149786480 FUN_149786480 body=40 status=ok
// SIG undefined FUN_149786480(void)

void FUN_149786480(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2c0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x2c0) = 0;
  }
  return;
}



// FUNCTION 1497864f6 FUN_1497864f6 body=38 status=ok
// SIG undefined FUN_1497864f6(void)

undefined8 FUN_1497864f6(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14978651c FUN_14978651c body=38 status=ok
// SIG undefined FUN_14978651c(void)

undefined8 FUN_14978651c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FMultiplyTransformDataflowNode",1);
  return param_2;
}



// FUNCTION 149786542 FUN_149786542 body=38 status=ok
// SIG undefined FUN_149786542(void)

undefined8 FUN_149786542(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"MultiplyTransform",1);
  return param_2;
}



// FUNCTION 149786568 FUN_149786568 body=38 status=ok
// SIG undefined FUN_149786568(void)

undefined8 FUN_149786568(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Transform",1);
  return param_2;
}



// FUNCTION 14978658e FUN_14978658e body=32 status=ok
// SIG undefined FUN_14978658e(void)

undefined8 FUN_14978658e(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 1497865ae FUN_1497865ae body=123 status=ok
// SIG undefined FUN_1497865ae(void)

void FUN_1497865ae(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25b58 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25b58 = FUN_140002ddd(FUN_146757d3b,uVar1,L"MultiplyTransformDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25b58,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149786626. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14978662a FUN_14978662a body=93 status=ok
// SIG undefined FUN_14978662a(void)

void FUN_14978662a(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25b58 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25b58 = FUN_140002ddd(FUN_146757d3b,uVar2,L"MultiplyTransformDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25b58,param_1);
  return;
}



// FUNCTION 149786688 FUN_149786688 body=55 status=ok
// SIG undefined FUN_149786688(void)

void FUN_149786688(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25b58 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25b58 = FUN_140002ddd(FUN_146757d3b,uVar1,L"MultiplyTransformDataflowNode");
  }
  return;
}



// FUNCTION 1497866c0 FUN_1497866c0 body=233 status=ok
// SIG undefined FUN_1497866c0(void)

ulonglong FUN_1497866c0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FMultiplyTransformDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14978675a;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14978675a;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14978675a;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14978675a:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1497867ac FUN_1497867ac body=82 status=ok
// SIG undefined FUN_1497867ac(void)

void FUN_1497867ac(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be62ed0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x34;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x40;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 1497867fe FUN_1497867fe body=82 status=ok
// SIG undefined FUN_1497867fe(void)

void FUN_1497867fe(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be62ed0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x34;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x40;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 149786874 FUN_149786874 body=91 status=ok
// SIG undefined FUN_149786874(void)

undefined8 FUN_149786874(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    memcpy((void *)(param_2 + 0x1a0),(void *)(param_3 + 0x1a0),0xc0);
    param_2 = param_2 + 0x260;
    param_3 = param_3 + 0x260;
  }
  return 1;
}



// FUNCTION 1497868f8 FUN_1497868f8 body=59 status=ok
// SIG undefined FUN_1497868f8(void)

undefined8 FUN_1497868f8(longlong *param_1)

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



// FUNCTION 149786944 FUN_149786944 body=40 status=ok
// SIG undefined FUN_149786944(void)

void FUN_149786944(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x260) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x260) = 0;
  }
  return;
}



// FUNCTION 1497869ba FUN_1497869ba body=38 status=ok
// SIG undefined FUN_1497869ba(void)

undefined8 FUN_1497869ba(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497869e0 FUN_1497869e0 body=38 status=ok
// SIG undefined FUN_1497869e0(void)

undefined8 FUN_1497869e0(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FInvertTransformDataflowNode",1);
  return param_2;
}



// FUNCTION 149786a06 FUN_149786a06 body=38 status=ok
// SIG undefined FUN_149786a06(void)

undefined8 FUN_149786a06(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"InvertTransform",1);
  return param_2;
}



// FUNCTION 149786a2c FUN_149786a2c body=38 status=ok
// SIG undefined FUN_149786a2c(void)

undefined8 FUN_149786a2c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Transform",1);
  return param_2;
}



// FUNCTION 149786a52 FUN_149786a52 body=32 status=ok
// SIG undefined FUN_149786a52(void)

undefined8 FUN_149786a52(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149786a72 FUN_149786a72 body=123 status=ok
// SIG undefined FUN_149786a72(void)

void FUN_149786a72(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25b70 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25b70 = FUN_140002ddd(FUN_146757dd1,uVar1,L"InvertTransformDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25b70,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149786aea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149786aee FUN_149786aee body=93 status=ok
// SIG undefined FUN_149786aee(void)

void FUN_149786aee(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25b70 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25b70 = FUN_140002ddd(FUN_146757dd1,uVar2,L"InvertTransformDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25b70,param_1);
  return;
}



// FUNCTION 149786b4c FUN_149786b4c body=55 status=ok
// SIG undefined FUN_149786b4c(void)

void FUN_149786b4c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25b70 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25b70 = FUN_140002ddd(FUN_146757dd1,uVar1,L"InvertTransformDataflowNode");
  }
  return;
}



// FUNCTION 149786b84 FUN_149786b84 body=233 status=ok
// SIG undefined FUN_149786b84(void)

ulonglong FUN_149786b84(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FInvertTransformDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149786c1e;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149786c1e;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149786c1e;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149786c1e:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 149786c70 FUN_149786c70 body=60 status=ok
// SIG undefined FUN_149786c70(void)

void FUN_149786c70(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be63160;
  *(undefined4 *)((longlong)param_2 + 0x1a4) = 0;
  param_2[0x33] = 0;
  *(undefined1 *)(param_2 + 0x34) = 0;
  return;
}



// FUNCTION 149786cac FUN_149786cac body=60 status=ok
// SIG undefined FUN_149786cac(void)

void FUN_149786cac(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be63160;
  *(undefined4 *)((longlong)param_2 + 0x1a4) = 0;
  param_2[0x33] = 0;
  *(undefined1 *)(param_2 + 0x34) = 0;
  return;
}



// FUNCTION 149786d0c FUN_149786d0c body=76 status=ok
// SIG undefined FUN_149786d0c(void)

undefined1 FUN_149786d0c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    param_2 = param_2 + 0x1a8;
    param_3 = param_3 + 0x1a8;
  }
  return 1;
}



// FUNCTION 149786d80 FUN_149786d80 body=59 status=ok
// SIG undefined FUN_149786d80(void)

undefined8 FUN_149786d80(longlong *param_1)

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



// FUNCTION 149786dcc FUN_149786dcc body=40 status=ok
// SIG undefined FUN_149786dcc(void)

void FUN_149786dcc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 149786e42 FUN_149786e42 body=38 status=ok
// SIG undefined FUN_149786e42(void)

undefined8 FUN_149786e42(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149786e68 FUN_149786e68 body=38 status=ok
// SIG undefined FUN_149786e68(void)

undefined8 FUN_149786e68(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FBranchFloatDataflowNode",1);
  return param_2;
}



// FUNCTION 149786e8e FUN_149786e8e body=38 status=ok
// SIG undefined FUN_149786e8e(void)

undefined8 FUN_149786e8e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"BranchFloat",1);
  return param_2;
}



// FUNCTION 149786eb4 FUN_149786eb4 body=38 status=ok
// SIG undefined FUN_149786eb4(void)

undefined8 FUN_149786eb4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Utilities|FlowControl",1);
  return param_2;
}



// FUNCTION 149786eda FUN_149786eda body=32 status=ok
// SIG undefined FUN_149786eda(void)

undefined8 FUN_149786eda(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149786efa FUN_149786efa body=123 status=ok
// SIG undefined FUN_149786efa(void)

void FUN_149786efa(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25b88 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25b88 = FUN_140002ddd(FUN_146757e67,uVar1,L"BranchFloatDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25b88,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149786f72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149786f76 FUN_149786f76 body=93 status=ok
// SIG undefined FUN_149786f76(void)

void FUN_149786f76(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25b88 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25b88 = FUN_140002ddd(FUN_146757e67,uVar2,L"BranchFloatDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25b88,param_1);
  return;
}



// FUNCTION 149786fd4 FUN_149786fd4 body=55 status=ok
// SIG undefined FUN_149786fd4(void)

void FUN_149786fd4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25b88 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25b88 = FUN_140002ddd(FUN_146757e67,uVar1,L"BranchFloatDataflowNode");
  }
  return;
}



// FUNCTION 14978700c FUN_14978700c body=233 status=ok
// SIG undefined FUN_14978700c(void)

ulonglong FUN_14978700c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FBranchFloatDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_1497870a6;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1497870a6;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_1497870a6;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_1497870a6:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1497870f8 FUN_1497870f8 body=60 status=ok
// SIG undefined FUN_1497870f8(void)

void FUN_1497870f8(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be63400;
  *(undefined4 *)((longlong)param_2 + 0x1a4) = 0;
  param_2[0x33] = 0;
  *(undefined1 *)(param_2 + 0x34) = 0;
  return;
}



// FUNCTION 149787134 FUN_149787134 body=60 status=ok
// SIG undefined FUN_149787134(void)

void FUN_149787134(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be63400;
  *(undefined4 *)((longlong)param_2 + 0x1a4) = 0;
  param_2[0x33] = 0;
  *(undefined1 *)(param_2 + 0x34) = 0;
  return;
}



// FUNCTION 149787194 FUN_149787194 body=76 status=ok
// SIG undefined FUN_149787194(void)

undefined1 FUN_149787194(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    param_2 = param_2 + 0x1a8;
    param_3 = param_3 + 0x1a8;
  }
  return 1;
}



// FUNCTION 149787208 FUN_149787208 body=59 status=ok
// SIG undefined FUN_149787208(void)

undefined8 FUN_149787208(longlong *param_1)

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



// FUNCTION 149787254 FUN_149787254 body=40 status=ok
// SIG undefined FUN_149787254(void)

void FUN_149787254(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 1497872ca FUN_1497872ca body=38 status=ok
// SIG undefined FUN_1497872ca(void)

undefined8 FUN_1497872ca(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497872f0 FUN_1497872f0 body=38 status=ok
// SIG undefined FUN_1497872f0(void)

undefined8 FUN_1497872f0(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FBranchIntDataflowNode",1);
  return param_2;
}



// FUNCTION 149787316 FUN_149787316 body=38 status=ok
// SIG undefined FUN_149787316(void)

undefined8 FUN_149787316(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"BranchInt",1);
  return param_2;
}



// FUNCTION 14978733c FUN_14978733c body=38 status=ok
// SIG undefined FUN_14978733c(void)

undefined8 FUN_14978733c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Utilities|FlowControl",1);
  return param_2;
}



// FUNCTION 149787362 FUN_149787362 body=32 status=ok
// SIG undefined FUN_149787362(void)

undefined8 FUN_149787362(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149787382 FUN_149787382 body=123 status=ok
// SIG undefined FUN_149787382(void)

void FUN_149787382(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25ba0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25ba0 = FUN_140002ddd(FUN_146757efd,uVar1,L"BranchIntDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25ba0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001497873fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 1497873fe FUN_1497873fe body=93 status=ok
// SIG undefined FUN_1497873fe(void)

void FUN_1497873fe(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25ba0 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25ba0 = FUN_140002ddd(FUN_146757efd,uVar2,L"BranchIntDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25ba0,param_1);
  return;
}



// FUNCTION 14978745c FUN_14978745c body=55 status=ok
// SIG undefined FUN_14978745c(void)

void FUN_14978745c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25ba0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25ba0 = FUN_140002ddd(FUN_146757efd,uVar1,L"BranchIntDataflowNode");
  }
  return;
}



// FUNCTION 149787494 FUN_149787494 body=233 status=ok
// SIG undefined FUN_149787494(void)

ulonglong FUN_149787494(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FBranchIntDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14978752e;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14978752e;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14978752e;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14978752e:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 149787580 FUN_149787580 body=104 status=ok
// SIG undefined FUN_149787580(void)

void FUN_149787580(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_149fbb570;
  FUN_1446ddc76(param_2 + 0x33,&DAT_149e59cc2,1);
  FUN_1400b22c2(param_2 + 0x34,&DAT_149dfd150);
  *(undefined1 *)(param_2 + 0x36) = 0;
  *param_2 = &PTR_FUN_14be63910;
  param_2[0x37] = 0;
  return;
}



// FUNCTION 1497875e8 FUN_1497875e8 body=104 status=ok
// SIG undefined FUN_1497875e8(void)

void FUN_1497875e8(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_149fbb570;
  FUN_1446ddc76(param_2 + 0x33,&DAT_149e59cc2,1);
  FUN_1400b22c2(param_2 + 0x34,&DAT_149dfd150);
  *(undefined1 *)(param_2 + 0x36) = 0;
  *param_2 = &PTR_FUN_14be63910;
  param_2[0x37] = 0;
  return;
}



// FUNCTION 149787674 FUN_149787674 body=125 status=ok
// SIG undefined FUN_149787674(void)

undefined8 FUN_149787674(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    *(undefined8 *)(param_2 + 0x198) = *(undefined8 *)(param_3 + 0x198);
    FUN_144a787a6(param_2 + 0x1a0,param_3 + 0x1a0);
    *(undefined1 *)(param_2 + 0x1b0) = *(undefined1 *)(param_3 + 0x1b0);
    *(undefined8 *)(param_2 + 0x1b8) = *(undefined8 *)(param_3 + 0x1b8);
    param_2 = param_2 + 0x1c0;
    param_3 = param_3 + 0x1c0;
  }
  return 1;
}



// FUNCTION 14978771a FUN_14978771a body=59 status=ok
// SIG undefined FUN_14978771a(void)

undefined8 FUN_14978771a(longlong *param_1)

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



// FUNCTION 149787766 FUN_149787766 body=67 status=ok
// SIG undefined FUN_149787766(void)

void FUN_149787766(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    *param_2 = &PTR_FUN_149fbb570;
    if (param_2[0x34] != 0) {
      FUN_1400020a8();
    }
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 1497877f8 FUN_1497877f8 body=68 status=ok
// SIG undefined FUN_1497877f8(void)

undefined8 * FUN_1497877f8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149fbb570;
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14978783c FUN_14978783c body=38 status=ok
// SIG undefined FUN_14978783c(void)

undefined8 FUN_14978783c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FGetFloatOverrideFromAssetDataflowNode",1);
  return param_2;
}



// FUNCTION 149787862 FUN_149787862 body=38 status=ok
// SIG undefined FUN_149787862(void)

undefined8 FUN_149787862(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GetFloatOverrideFromAsset",1);
  return param_2;
}



// FUNCTION 149787888 FUN_149787888 body=38 status=ok
// SIG undefined FUN_149787888(void)

undefined8 FUN_149787888(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Overrides",1);
  return param_2;
}



// FUNCTION 1497878ae FUN_1497878ae body=32 status=ok
// SIG undefined FUN_1497878ae(void)

undefined8 FUN_1497878ae(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 1497878ce FUN_1497878ce body=123 status=ok
// SIG undefined FUN_1497878ce(void)

void FUN_1497878ce(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25bc0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25bc0 = FUN_140002ddd(FUN_146758055,uVar1,L"GetFloatOverrideFromAssetDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25bc0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149787946. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14978794a FUN_14978794a body=93 status=ok
// SIG undefined FUN_14978794a(void)

void FUN_14978794a(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25bc0 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25bc0 = FUN_140002ddd(FUN_146758055,uVar2,L"GetFloatOverrideFromAssetDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25bc0,param_1);
  return;
}



// FUNCTION 1497879a8 FUN_1497879a8 body=55 status=ok
// SIG undefined FUN_1497879a8(void)

void FUN_1497879a8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25bc0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25bc0 = FUN_140002ddd(FUN_146758055,uVar1,L"GetFloatOverrideFromAssetDataflowNode");
  }
  return;
}



// FUNCTION 1497879e0 FUN_1497879e0 body=233 status=ok
// SIG undefined FUN_1497879e0(void)

ulonglong FUN_1497879e0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FGetFloatOverrideFromAssetDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149787a7a;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149787a7a;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149787a7a;
  }
  uVar2 = FUN_146fd899a(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149787a7a:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 149787acc FUN_149787acc body=104 status=ok
// SIG undefined FUN_149787acc(void)

void FUN_149787acc(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_149fbb570;
  FUN_1446ddc76(param_2 + 0x33,&DAT_149e59cc2,1);
  FUN_1400b22c2(param_2 + 0x34,&DAT_149dfd150);
  *(undefined1 *)(param_2 + 0x36) = 0;
  *param_2 = &PTR_FUN_14be63be0;
  param_2[0x37] = 0;
  return;
}



// FUNCTION 149787b34 FUN_149787b34 body=104 status=ok
// SIG undefined FUN_149787b34(void)

void FUN_149787b34(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_149fbb570;
  FUN_1446ddc76(param_2 + 0x33,&DAT_149e59cc2,1);
  FUN_1400b22c2(param_2 + 0x34,&DAT_149dfd150);
  *(undefined1 *)(param_2 + 0x36) = 0;
  *param_2 = &PTR_FUN_14be63be0;
  param_2[0x37] = 0;
  return;
}



// FUNCTION 149787bc0 FUN_149787bc0 body=125 status=ok
// SIG undefined FUN_149787bc0(void)

undefined8 FUN_149787bc0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    *(undefined8 *)(param_2 + 0x198) = *(undefined8 *)(param_3 + 0x198);
    FUN_144a787a6(param_2 + 0x1a0,param_3 + 0x1a0);
    *(undefined1 *)(param_2 + 0x1b0) = *(undefined1 *)(param_3 + 0x1b0);
    *(undefined8 *)(param_2 + 0x1b8) = *(undefined8 *)(param_3 + 0x1b8);
    param_2 = param_2 + 0x1c0;
    param_3 = param_3 + 0x1c0;
  }
  return 1;
}



// FUNCTION 149787c66 FUN_149787c66 body=59 status=ok
// SIG undefined FUN_149787c66(void)

undefined8 FUN_149787c66(longlong *param_1)

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



// FUNCTION 149787cb2 FUN_149787cb2 body=67 status=ok
// SIG undefined FUN_149787cb2(void)

void FUN_149787cb2(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    *param_2 = &PTR_FUN_149fbb570;
    if (param_2[0x34] != 0) {
      FUN_1400020a8();
    }
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 149787d44 FUN_149787d44 body=68 status=ok
// SIG undefined FUN_149787d44(void)

undefined8 * FUN_149787d44(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149fbb570;
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149787d88 FUN_149787d88 body=38 status=ok
// SIG undefined FUN_149787d88(void)

undefined8 FUN_149787d88(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FGetIntOverrideFromAssetDataflowNode",1);
  return param_2;
}



// FUNCTION 149787dae FUN_149787dae body=38 status=ok
// SIG undefined FUN_149787dae(void)

undefined8 FUN_149787dae(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GetIntOverrideFromAsset",1);
  return param_2;
}



// FUNCTION 149787dd4 FUN_149787dd4 body=38 status=ok
// SIG undefined FUN_149787dd4(void)

undefined8 FUN_149787dd4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Overrides",1);
  return param_2;
}



// FUNCTION 149787dfa FUN_149787dfa body=32 status=ok
// SIG undefined FUN_149787dfa(void)

undefined8 FUN_149787dfa(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149787e1a FUN_149787e1a body=123 status=ok
// SIG undefined FUN_149787e1a(void)

void FUN_149787e1a(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25bd8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25bd8 = FUN_140002ddd(FUN_1467580eb,uVar1,L"GetIntOverrideFromAssetDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25bd8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149787e92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149787e96 FUN_149787e96 body=93 status=ok
// SIG undefined FUN_149787e96(void)

void FUN_149787e96(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25bd8 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25bd8 = FUN_140002ddd(FUN_1467580eb,uVar2,L"GetIntOverrideFromAssetDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25bd8,param_1);
  return;
}



// FUNCTION 149787ef4 FUN_149787ef4 body=55 status=ok
// SIG undefined FUN_149787ef4(void)

void FUN_149787ef4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25bd8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25bd8 = FUN_140002ddd(FUN_1467580eb,uVar1,L"GetIntOverrideFromAssetDataflowNode");
  }
  return;
}



// FUNCTION 149787f2c FUN_149787f2c body=233 status=ok
// SIG undefined FUN_149787f2c(void)

ulonglong FUN_149787f2c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FGetIntOverrideFromAssetDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149787fc6;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149787fc6;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149787fc6;
  }
  uVar2 = FUN_146fd899a(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149787fc6:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 149788018 FUN_149788018 body=102 status=ok
// SIG undefined FUN_149788018(void)

void FUN_149788018(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_149fbb570;
  FUN_1446ddc76(param_2 + 0x33,&DAT_149e59cc2,1);
  FUN_1400b22c2(param_2 + 0x34,&DAT_149dfd150);
  *(undefined1 *)(param_2 + 0x36) = 0;
  *param_2 = &PTR_FUN_14be63e90;
  *(undefined2 *)(param_2 + 0x37) = 0;
  return;
}



// FUNCTION 14978807e FUN_14978807e body=102 status=ok
// SIG undefined FUN_14978807e(void)

void FUN_14978807e(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_149fbb570;
  FUN_1446ddc76(param_2 + 0x33,&DAT_149e59cc2,1);
  FUN_1400b22c2(param_2 + 0x34,&DAT_149dfd150);
  *(undefined1 *)(param_2 + 0x36) = 0;
  *param_2 = &PTR_FUN_14be63e90;
  *(undefined2 *)(param_2 + 0x37) = 0;
  return;
}



// FUNCTION 149788108 FUN_149788108 body=125 status=ok
// SIG undefined FUN_149788108(void)

undefined8 FUN_149788108(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    *(undefined8 *)(param_2 + 0x198) = *(undefined8 *)(param_3 + 0x198);
    FUN_144a787a6(param_2 + 0x1a0,param_3 + 0x1a0);
    *(undefined1 *)(param_2 + 0x1b0) = *(undefined1 *)(param_3 + 0x1b0);
    *(undefined2 *)(param_2 + 0x1b8) = *(undefined2 *)(param_3 + 0x1b8);
    param_2 = param_2 + 0x1c0;
    param_3 = param_3 + 0x1c0;
  }
  return 1;
}



// FUNCTION 1497881ae FUN_1497881ae body=59 status=ok
// SIG undefined FUN_1497881ae(void)

undefined8 FUN_1497881ae(longlong *param_1)

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



// FUNCTION 1497881fa FUN_1497881fa body=67 status=ok
// SIG undefined FUN_1497881fa(void)

void FUN_1497881fa(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    *param_2 = &PTR_FUN_149fbb570;
    if (param_2[0x34] != 0) {
      FUN_1400020a8();
    }
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 14978828c FUN_14978828c body=68 status=ok
// SIG undefined FUN_14978828c(void)

undefined8 * FUN_14978828c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149fbb570;
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497882d0 FUN_1497882d0 body=38 status=ok
// SIG undefined FUN_1497882d0(void)

undefined8 FUN_1497882d0(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FGetBoolOverrideFromAssetDataflowNode",1);
  return param_2;
}



// FUNCTION 1497882f6 FUN_1497882f6 body=38 status=ok
// SIG undefined FUN_1497882f6(void)

undefined8 FUN_1497882f6(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GetBoolOverrideFromAsset",1);
  return param_2;
}



// FUNCTION 14978831c FUN_14978831c body=38 status=ok
// SIG undefined FUN_14978831c(void)

undefined8 FUN_14978831c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Overrides",1);
  return param_2;
}



// FUNCTION 149788342 FUN_149788342 body=32 status=ok
// SIG undefined FUN_149788342(void)

undefined8 FUN_149788342(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149788362 FUN_149788362 body=123 status=ok
// SIG undefined FUN_149788362(void)

void FUN_149788362(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25bf0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25bf0 = FUN_140002ddd(FUN_146758181,uVar1,L"GetBoolOverrideFromAssetDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25bf0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001497883da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 1497883de FUN_1497883de body=93 status=ok
// SIG undefined FUN_1497883de(void)

void FUN_1497883de(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25bf0 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25bf0 = FUN_140002ddd(FUN_146758181,uVar2,L"GetBoolOverrideFromAssetDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25bf0,param_1);
  return;
}



// FUNCTION 14978843c FUN_14978843c body=55 status=ok
// SIG undefined FUN_14978843c(void)

void FUN_14978843c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25bf0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25bf0 = FUN_140002ddd(FUN_146758181,uVar1,L"GetBoolOverrideFromAssetDataflowNode");
  }
  return;
}



// FUNCTION 149788474 FUN_149788474 body=233 status=ok
// SIG undefined FUN_149788474(void)

ulonglong FUN_149788474(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FGetBoolOverrideFromAssetDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14978850e;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14978850e;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14978850e;
  }
  uVar2 = FUN_146fd899a(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14978850e:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 149788594 FUN_149788594 body=63 status=ok
// SIG undefined FUN_149788594(void)

undefined1 FUN_149788594(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149788a3c(param_2,param_3);
    param_3 = param_3 + 0x1d8;
    param_2 = param_2 + 0x1d8;
  }
  return 1;
}



// FUNCTION 1497885fc FUN_1497885fc body=59 status=ok
// SIG undefined FUN_1497885fc(void)

undefined8 FUN_1497885fc(longlong *param_1)

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



// FUNCTION 149788648 FUN_149788648 body=40 status=ok
// SIG undefined FUN_149788648(void)

void FUN_149788648(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1d8) == '\x01') {
    FUN_1497889e0(param_2);
    *(undefined1 *)(param_2 + 0x1d8) = 0;
  }
  return;
}



// FUNCTION 1497886be FUN_1497886be body=110 status=ok
// SIG undefined FUN_1497886be(void)

undefined8 * FUN_1497886be(undefined8 *param_1)

{
  FUN_146fc02b8();
  *param_1 = &PTR_FUN_149fbb570;
  FUN_1446ddc76(param_1 + 0x33,&DAT_149e59cc2,1);
  FUN_1400b22c2(param_1 + 0x34,&DAT_149dfd150);
  *(undefined1 *)(param_1 + 0x36) = 0;
  *param_1 = &PTR_FUN_14be64140;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  return param_1;
}



// FUNCTION 14978872c FUN_14978872c body=38 status=ok
// SIG undefined FUN_14978872c(void)

undefined8 FUN_14978872c(undefined8 param_1,int param_2)

{
  FUN_1497889e0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149788752 FUN_149788752 body=38 status=ok
// SIG undefined FUN_149788752(void)

undefined8 FUN_149788752(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FGetStringOverrideFromAssetDataflowNode",1);
  return param_2;
}



// FUNCTION 149788778 FUN_149788778 body=38 status=ok
// SIG undefined FUN_149788778(void)

undefined8 FUN_149788778(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GetStringOverrideFromAsset",1);
  return param_2;
}



// FUNCTION 14978879e FUN_14978879e body=38 status=ok
// SIG undefined FUN_14978879e(void)

undefined8 FUN_14978879e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Overrides",1);
  return param_2;
}



// FUNCTION 1497887c4 FUN_1497887c4 body=32 status=ok
// SIG undefined FUN_1497887c4(void)

undefined8 FUN_1497887c4(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 1497887e4 FUN_1497887e4 body=123 status=ok
// SIG undefined FUN_1497887e4(void)

void FUN_1497887e4(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25c08 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25c08 = FUN_140002ddd(FUN_146758217,uVar1,L"GetStringOverrideFromAssetDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25c08,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014978885c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149788860 FUN_149788860 body=93 status=ok
// SIG undefined FUN_149788860(void)

void FUN_149788860(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25c08 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25c08 = FUN_140002ddd(FUN_146758217,uVar2,L"GetStringOverrideFromAssetDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25c08,param_1);
  return;
}



// FUNCTION 1497888be FUN_1497888be body=55 status=ok
// SIG undefined FUN_1497888be(void)

void FUN_1497888be(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25c08 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25c08 = FUN_140002ddd(FUN_146758217,uVar1,L"GetStringOverrideFromAssetDataflowNode");
  }
  return;
}



// FUNCTION 1497888f6 FUN_1497888f6 body=233 status=ok
// SIG undefined FUN_1497888f6(void)

ulonglong FUN_1497888f6(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FGetStringOverrideFromAssetDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149788990;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149788990;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149788990;
  }
  uVar2 = FUN_146fd899a(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149788990:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1497889e0 FUN_1497889e0 body=92 status=ok
// SIG undefined FUN_1497889e0(void)

void FUN_1497889e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be64140;
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_149fbb570;
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 149788a3c FUN_149788a3c body=107 status=ok
// SIG undefined FUN_149788a3c(void)

longlong FUN_149788a3c(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_2 + 0x198);
  FUN_144a787a6(param_1 + 0x1a0,param_2 + 0x1a0);
  *(undefined1 *)(param_1 + 0x1b0) = *(undefined1 *)(param_2 + 0x1b0);
  FUN_144a787a6(param_1 + 0x1b8,param_2 + 0x1b8);
  FUN_144a787a6(param_1 + 0x1c8,param_2 + 0x1c8);
  return param_1;
}



// FUNCTION 149788aa8 FUN_149788aa8 body=93 status=ok
// SIG undefined FUN_149788aa8(void)

void FUN_149788aa8(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be64400;
  param_2[0x33] = 0;
  param_2[0x34] = &DAT_41200000;
  *(undefined4 *)(param_2 + 0x35) = 0x41200000;
  *(undefined8 *)((longlong)param_2 + 0x1ac) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1b4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1bc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1cc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1d4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1dc) = 0;
  return;
}



// FUNCTION 149788b06 FUN_149788b06 body=93 status=ok
// SIG undefined FUN_149788b06(void)

void FUN_149788b06(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be64400;
  param_2[0x33] = 0;
  param_2[0x34] = &DAT_41200000;
  *(undefined4 *)(param_2 + 0x35) = 0x41200000;
  *(undefined8 *)((longlong)param_2 + 0x1ac) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1b4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1bc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1cc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1d4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1dc) = 0;
  return;
}



// FUNCTION 149788b88 FUN_149788b88 body=63 status=ok
// SIG undefined FUN_149788b88(void)

undefined1 FUN_149788b88(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149788fb8(param_2,param_3);
    param_3 = param_3 + 0x1e8;
    param_2 = param_2 + 0x1e8;
  }
  return 1;
}



// FUNCTION 149788bf0 FUN_149788bf0 body=59 status=ok
// SIG undefined FUN_149788bf0(void)

undefined8 FUN_149788bf0(longlong *param_1)

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



// FUNCTION 149788c3c FUN_149788c3c body=40 status=ok
// SIG undefined FUN_149788c3c(void)

void FUN_149788c3c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1e8) == '\x01') {
    FUN_149788f66(param_2);
    *(undefined1 *)(param_2 + 0x1e8) = 0;
  }
  return;
}



// FUNCTION 149788cb2 FUN_149788cb2 body=38 status=ok
// SIG undefined FUN_149788cb2(void)

undefined8 FUN_149788cb2(undefined8 param_1,int param_2)

{
  FUN_149788f66();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149788cd8 FUN_149788cd8 body=38 status=ok
// SIG undefined FUN_149788cd8(void)

undefined8 FUN_149788cd8(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FUniformPointSamplingDataflowNode",1);
  return param_2;
}



// FUNCTION 149788cfe FUN_149788cfe body=38 status=ok
// SIG undefined FUN_149788cfe(void)

undefined8 FUN_149788cfe(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"UniformPointSampling",1);
  return param_2;
}



// FUNCTION 149788d24 FUN_149788d24 body=38 status=ok
// SIG undefined FUN_149788d24(void)

undefined8 FUN_149788d24(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"PointSampling",1);
  return param_2;
}



// FUNCTION 149788d4a FUN_149788d4a body=32 status=ok
// SIG undefined FUN_149788d4a(void)

undefined8 FUN_149788d4a(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149788d6a FUN_149788d6a body=123 status=ok
// SIG undefined FUN_149788d6a(void)

void FUN_149788d6a(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25c20 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25c20 = FUN_140002ddd(FUN_1467582ad,uVar1,L"UniformPointSamplingDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25c20,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149788de2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149788de6 FUN_149788de6 body=93 status=ok
// SIG undefined FUN_149788de6(void)

void FUN_149788de6(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25c20 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25c20 = FUN_140002ddd(FUN_1467582ad,uVar2,L"UniformPointSamplingDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25c20,param_1);
  return;
}



// FUNCTION 149788e44 FUN_149788e44 body=55 status=ok
// SIG undefined FUN_149788e44(void)

void FUN_149788e44(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25c20 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25c20 = FUN_140002ddd(FUN_1467582ad,uVar1,L"UniformPointSamplingDataflowNode");
  }
  return;
}



// FUNCTION 149788e7c FUN_149788e7c body=233 status=ok
// SIG undefined FUN_149788e7c(void)

ulonglong FUN_149788e7c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FUniformPointSamplingDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149788f16;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149788f16;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149788f16;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149788f16:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 149788f66 FUN_149788f66 body=82 status=ok
// SIG undefined FUN_149788f66(void)

void FUN_149788f66(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be64400;
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 149788fb8 FUN_149788fb8 body=148 status=ok
// SIG undefined FUN_149788fb8(void)

longlong FUN_149788fb8(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  FUN_146fc06e2();
  lVar4 = *(longlong *)(param_2 + 0x198);
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = *(longlong *)(param_2 + 0x198);
    }
  }
  *(longlong *)(param_1 + 0x198) = lVar4;
  uVar1 = *(undefined4 *)(param_2 + 0x1a4);
  uVar2 = *(undefined4 *)(param_2 + 0x1a8);
  uVar3 = *(undefined4 *)(param_2 + 0x1ac);
  *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_2 + 0x1a0);
  *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  *(undefined4 *)(param_1 + 0x1a8) = uVar2;
  *(undefined4 *)(param_1 + 0x1ac) = uVar3;
  FUN_1405b70a4(param_1 + 0x1b0,param_2 + 0x1b0);
  FUN_14054c6c4(param_1 + 0x1c0,param_2 + 0x1c0);
  FUN_1405b70a4(param_1 + 0x1d0,param_2 + 0x1d0);
  *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_2 + 0x1e0);
  return param_1;
}



// FUNCTION 14978904e FUN_14978904e body=125 status=ok
// SIG undefined FUN_14978904e(void)

void FUN_14978904e(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be646c0;
  param_2[0x33] = 0;
  param_2[0x34] = &DAT_41200000;
  param_2[0x35] = &DAT_41200000;
  *(undefined4 *)(param_2 + 0x36) = 0x41200000;
  *(undefined1 *)((longlong)param_2 + 0x1b4) = 0;
  *(undefined4 *)(param_2 + 0x37) = 0x40000000;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  *(undefined4 *)(param_2 + 0x40) = 0;
  return;
}



// FUNCTION 1497890cc FUN_1497890cc body=125 status=ok
// SIG undefined FUN_1497890cc(void)

void FUN_1497890cc(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be646c0;
  param_2[0x33] = 0;
  param_2[0x34] = &DAT_41200000;
  param_2[0x35] = &DAT_41200000;
  *(undefined4 *)(param_2 + 0x36) = 0x41200000;
  *(undefined1 *)((longlong)param_2 + 0x1b4) = 0;
  *(undefined4 *)(param_2 + 0x37) = 0x40000000;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  *(undefined4 *)(param_2 + 0x40) = 0;
  return;
}



// FUNCTION 14978916e FUN_14978916e body=63 status=ok
// SIG undefined FUN_14978916e(void)

undefined1 FUN_14978916e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1497895b0(param_2,param_3);
    param_3 = param_3 + 0x208;
    param_2 = param_2 + 0x208;
  }
  return 1;
}



// FUNCTION 1497891d6 FUN_1497891d6 body=59 status=ok
// SIG undefined FUN_1497891d6(void)

undefined8 FUN_1497891d6(longlong *param_1)

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



// FUNCTION 149789222 FUN_149789222 body=40 status=ok
// SIG undefined FUN_149789222(void)

void FUN_149789222(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x208) == '\x01') {
    FUN_14978954c(param_2);
    *(undefined1 *)(param_2 + 0x208) = 0;
  }
  return;
}



// FUNCTION 149789298 FUN_149789298 body=38 status=ok
// SIG undefined FUN_149789298(void)

undefined8 FUN_149789298(undefined8 param_1,int param_2)

{
  FUN_14978954c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497892be FUN_1497892be body=38 status=ok
// SIG undefined FUN_1497892be(void)

undefined8 FUN_1497892be(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FNonUniformPointSamplingDataflowNode",1);
  return param_2;
}



// FUNCTION 1497892e4 FUN_1497892e4 body=38 status=ok
// SIG undefined FUN_1497892e4(void)

undefined8 FUN_1497892e4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"NonUniformPointSampling",1);
  return param_2;
}



// FUNCTION 14978930a FUN_14978930a body=38 status=ok
// SIG undefined FUN_14978930a(void)

undefined8 FUN_14978930a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"PointSampling",1);
  return param_2;
}



// FUNCTION 149789330 FUN_149789330 body=32 status=ok
// SIG undefined FUN_149789330(void)

undefined8 FUN_149789330(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149789350 FUN_149789350 body=123 status=ok
// SIG undefined FUN_149789350(void)

void FUN_149789350(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25c38 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25c38 = FUN_140002ddd(FUN_146758343,uVar1,L"NonUniformPointSamplingDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25c38,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001497893c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 1497893cc FUN_1497893cc body=93 status=ok
// SIG undefined FUN_1497893cc(void)

void FUN_1497893cc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25c38 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25c38 = FUN_140002ddd(FUN_146758343,uVar2,L"NonUniformPointSamplingDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25c38,param_1);
  return;
}



// FUNCTION 14978942a FUN_14978942a body=55 status=ok
// SIG undefined FUN_14978942a(void)

void FUN_14978942a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25c38 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25c38 = FUN_140002ddd(FUN_146758343,uVar1,L"NonUniformPointSamplingDataflowNode");
  }
  return;
}



// FUNCTION 149789462 FUN_149789462 body=233 status=ok
// SIG undefined FUN_149789462(void)

ulonglong FUN_149789462(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FNonUniformPointSamplingDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_1497894fc;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1497894fc;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_1497894fc;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_1497894fc:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14978954c FUN_14978954c body=99 status=ok
// SIG undefined FUN_14978954c(void)

void FUN_14978954c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be646c0;
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 1497895b0 FUN_1497895b0 body=182 status=ok
// SIG undefined FUN_1497895b0(void)

longlong FUN_1497895b0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
  FUN_146fc06e2();
  lVar8 = *(longlong *)(param_2 + 0x198);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = *(longlong *)(param_2 + 0x198);
    }
  }
  *(longlong *)(param_1 + 0x198) = lVar8;
  uVar1 = *(undefined4 *)(param_2 + 0x1a4);
  uVar2 = *(undefined4 *)(param_2 + 0x1a8);
  uVar3 = *(undefined4 *)(param_2 + 0x1ac);
  uVar4 = *(undefined4 *)(param_2 + 0x1ac);
  uVar5 = *(undefined4 *)(param_2 + 0x1b0);
  uVar6 = *(undefined4 *)(param_2 + 0x1b4);
  uVar7 = *(undefined4 *)(param_2 + 0x1b8);
  *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_2 + 0x1a0);
  *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  *(undefined4 *)(param_1 + 0x1a8) = uVar2;
  *(undefined4 *)(param_1 + 0x1ac) = uVar3;
  *(undefined4 *)(param_1 + 0x1ac) = uVar4;
  *(undefined4 *)(param_1 + 0x1b0) = uVar5;
  *(undefined4 *)(param_1 + 0x1b4) = uVar6;
  *(undefined4 *)(param_1 + 0x1b8) = uVar7;
  FUN_1405b70a4(param_1 + 0x1c0,param_2 + 0x1c0);
  FUN_144a67f5c(param_1 + 0x1d0,param_2 + 0x1d0);
  FUN_14054c6c4(param_1 + 0x1e0,param_2 + 0x1e0);
  FUN_1405b70a4(param_1 + 0x1f0,param_2 + 0x1f0);
  *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_2 + 0x200);
  return param_1;
}



// FUNCTION 14978969c FUN_14978969c body=63 status=ok
// SIG undefined FUN_14978969c(void)

undefined1 FUN_14978969c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149789b7c(param_2,param_3);
    param_3 = param_3 + 0x218;
    param_2 = param_2 + 0x218;
  }
  return 1;
}



// FUNCTION 149789704 FUN_149789704 body=59 status=ok
// SIG undefined FUN_149789704(void)

undefined8 FUN_149789704(longlong *param_1)

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



// FUNCTION 149789750 FUN_149789750 body=40 status=ok
// SIG undefined FUN_149789750(void)

void FUN_149789750(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x218) == '\x01') {
    FUN_149789b08(param_2);
    *(undefined1 *)(param_2 + 0x218) = 0;
  }
  return;
}



// FUNCTION 1497897c6 FUN_1497897c6 body=141 status=ok
// SIG undefined FUN_1497897c6(void)

undefined8 * FUN_1497897c6(undefined8 *param_1)

{
  FUN_146fc02b8();
  *param_1 = &PTR_FUN_14be64970;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = &DAT_41200000;
  param_1[0x37] = &DAT_41200000;
  *(undefined4 *)(param_1 + 0x38) = 0x41200000;
  *(undefined1 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined4 *)(param_1 + 0x39) = 0x40000000;
  *(undefined2 *)((longlong)param_1 + 0x1cc) = 2;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  return param_1;
}



// FUNCTION 149789854 FUN_149789854 body=38 status=ok
// SIG undefined FUN_149789854(void)

undefined8 FUN_149789854(undefined8 param_1,int param_2)

{
  FUN_149789b08();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14978987a FUN_14978987a body=38 status=ok
// SIG undefined FUN_14978987a(void)

undefined8 FUN_14978987a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FVertexWeightedPointSamplingDataflowNode",1);
  return param_2;
}



// FUNCTION 1497898a0 FUN_1497898a0 body=38 status=ok
// SIG undefined FUN_1497898a0(void)

undefined8 FUN_1497898a0(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"VertexWeightedPointSampling",1);
  return param_2;
}



// FUNCTION 1497898c6 FUN_1497898c6 body=38 status=ok
// SIG undefined FUN_1497898c6(void)

undefined8 FUN_1497898c6(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"PointSampling",1);
  return param_2;
}



// FUNCTION 1497898ec FUN_1497898ec body=32 status=ok
// SIG undefined FUN_1497898ec(void)

undefined8 FUN_1497898ec(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14978990c FUN_14978990c body=123 status=ok
// SIG undefined FUN_14978990c(void)

void FUN_14978990c(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25c50 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25c50 = FUN_140002ddd(FUN_1467583d9,uVar1,L"VertexWeightedPointSamplingDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25c50,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149789984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149789988 FUN_149789988 body=93 status=ok
// SIG undefined FUN_149789988(void)

void FUN_149789988(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25c50 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25c50 = FUN_140002ddd(FUN_1467583d9,uVar2,L"VertexWeightedPointSamplingDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25c50,param_1);
  return;
}



// FUNCTION 1497899e6 FUN_1497899e6 body=55 status=ok
// SIG undefined FUN_1497899e6(void)

void FUN_1497899e6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25c50 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25c50 = FUN_140002ddd(FUN_1467583d9,uVar1,L"VertexWeightedPointSamplingDataflowNode");
  }
  return;
}



// FUNCTION 149789a1e FUN_149789a1e body=233 status=ok
// SIG undefined FUN_149789a1e(void)

ulonglong FUN_149789a1e(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FVertexWeightedPointSamplingDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149789ab8;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149789ab8;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149789ab8;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149789ab8:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 149789b08 FUN_149789b08 body=116 status=ok
// SIG undefined FUN_149789b08(void)

void FUN_149789b08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be64970;
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 149789b7c FUN_149789b7c body=203 status=ok
// SIG undefined FUN_149789b7c(void)

longlong FUN_149789b7c(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
  FUN_146fc06e2();
  lVar8 = *(longlong *)(param_2 + 0x198);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = *(longlong *)(param_2 + 0x198);
    }
  }
  *(longlong *)(param_1 + 0x198) = lVar8;
  FUN_144a67f5c(param_1 + 0x1a0,param_2 + 0x1a0);
  uVar1 = *(undefined4 *)(param_2 + 0x1b4);
  uVar2 = *(undefined4 *)(param_2 + 0x1b8);
  uVar3 = *(undefined4 *)(param_2 + 0x1bc);
  uVar4 = *(undefined4 *)(param_2 + 0x1be);
  uVar5 = *(undefined4 *)(param_2 + 0x1c2);
  uVar6 = *(undefined4 *)(param_2 + 0x1c6);
  uVar7 = *(undefined4 *)(param_2 + 0x1ca);
  *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_2 + 0x1b0);
  *(undefined4 *)(param_1 + 0x1b4) = uVar1;
  *(undefined4 *)(param_1 + 0x1b8) = uVar2;
  *(undefined4 *)(param_1 + 0x1bc) = uVar3;
  *(undefined4 *)(param_1 + 0x1be) = uVar4;
  *(undefined4 *)(param_1 + 0x1c2) = uVar5;
  *(undefined4 *)(param_1 + 0x1c6) = uVar6;
  *(undefined4 *)(param_1 + 0x1ca) = uVar7;
  FUN_1405b70a4(param_1 + 0x1d0,param_2 + 0x1d0);
  FUN_144a67f5c(param_1 + 0x1e0,param_2 + 0x1e0);
  FUN_14054c6c4(param_1 + 0x1f0,param_2 + 0x1f0);
  FUN_1405b70a4(param_1 + 0x200,param_2 + 0x200);
  *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_2 + 0x210);
  return param_1;
}



// FUNCTION 149789c48 FUN_149789c48 body=72 status=ok
// SIG undefined FUN_149789c48(void)

void FUN_149789c48(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be64c30;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0x8000000000;
  return;
}



// FUNCTION 149789c90 FUN_149789c90 body=72 status=ok
// SIG undefined FUN_149789c90(void)

void FUN_149789c90(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be64c30;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0x8000000000;
  return;
}



// FUNCTION 149789cfc FUN_149789cfc body=63 status=ok
// SIG undefined FUN_149789cfc(void)

undefined1 FUN_149789cfc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14978a116(param_2,param_3);
    param_3 = param_3 + 0x268;
    param_2 = param_2 + 0x268;
  }
  return 1;
}



// FUNCTION 149789d64 FUN_149789d64 body=59 status=ok
// SIG undefined FUN_149789d64(void)

undefined8 FUN_149789d64(longlong *param_1)

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



// FUNCTION 149789db0 FUN_149789db0 body=40 status=ok
// SIG undefined FUN_149789db0(void)

void FUN_149789db0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x268) == '\x01') {
    FUN_14978a0da(param_2);
    *(undefined1 *)(param_2 + 0x268) = 0;
  }
  return;
}



// FUNCTION 149789e26 FUN_149789e26 body=38 status=ok
// SIG undefined FUN_149789e26(void)

undefined8 FUN_149789e26(undefined8 param_1,int param_2)

{
  FUN_14978a0da();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149789e4c FUN_149789e4c body=38 status=ok
// SIG undefined FUN_149789e4c(void)

undefined8 FUN_149789e4c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FCollectionTransformSelectionAllDataflowNode",1);
  return param_2;
}



// FUNCTION 149789e72 FUN_149789e72 body=38 status=ok
// SIG undefined FUN_149789e72(void)

undefined8 FUN_149789e72(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"CollectionTransformSelectAll",1);
  return param_2;
}



// FUNCTION 149789e98 FUN_149789e98 body=38 status=ok
// SIG undefined FUN_149789e98(void)

undefined8 FUN_149789e98(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Selection|Transform",1);
  return param_2;
}



// FUNCTION 149789ebe FUN_149789ebe body=32 status=ok
// SIG undefined FUN_149789ebe(void)

undefined8 FUN_149789ebe(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149789ede FUN_149789ede body=123 status=ok
// SIG undefined FUN_149789ede(void)

void FUN_149789ede(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25c68 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25c68 =
         FUN_140002ddd(FUN_14675846f,uVar1,L"CollectionTransformSelectionAllDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25c68,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149789f56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149789f5a FUN_149789f5a body=93 status=ok
// SIG undefined FUN_149789f5a(void)

void FUN_149789f5a(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25c68 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25c68 =
         FUN_140002ddd(FUN_14675846f,uVar2,L"CollectionTransformSelectionAllDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25c68,param_1);
  return;
}



// FUNCTION 149789fb8 FUN_149789fb8 body=55 status=ok
// SIG undefined FUN_149789fb8(void)

void FUN_149789fb8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25c68 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25c68 =
         FUN_140002ddd(FUN_14675846f,uVar1,L"CollectionTransformSelectionAllDataflowNode");
  }
  return;
}



// FUNCTION 149789ff0 FUN_149789ff0 body=233 status=ok
// SIG undefined FUN_149789ff0(void)

ulonglong FUN_149789ff0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FCollectionTransformSelectionAllDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14978a08a;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14978a08a;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14978a08a;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14978a08a:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14978a0da FUN_14978a0da body=60 status=ok
// SIG undefined FUN_14978a0da(void)

void FUN_14978a0da(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be64c30;
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 14978a116 FUN_14978a116 body=68 status=ok
// SIG undefined FUN_14978a116(void)

longlong FUN_14978a116(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x248,param_2 + 0x248);
  }
  return param_1;
}



// FUNCTION 14978a15c FUN_14978a15c body=93 status=ok
// SIG undefined FUN_14978a15c(void)

void FUN_14978a15c(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be65010;
  *(undefined1 *)(param_2 + 0x33) = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0x8000000000;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0x8000000000;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0x8000000000;
  return;
}



// FUNCTION 14978a1ba FUN_14978a1ba body=93 status=ok
// SIG undefined FUN_14978a1ba(void)

void FUN_14978a1ba(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be65010;
  *(undefined1 *)(param_2 + 0x33) = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0x8000000000;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0x8000000000;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0x8000000000;
  return;
}



// FUNCTION 14978a23c FUN_14978a23c body=63 status=ok
// SIG undefined FUN_14978a23c(void)

undefined1 FUN_14978a23c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14978a66c(param_2,param_3);
    param_3 = param_3 + 0x200;
    param_2 = param_2 + 0x200;
  }
  return 1;
}



// FUNCTION 14978a2a4 FUN_14978a2a4 body=59 status=ok
// SIG undefined FUN_14978a2a4(void)

undefined8 FUN_14978a2a4(longlong *param_1)

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



// FUNCTION 14978a2f0 FUN_14978a2f0 body=40 status=ok
// SIG undefined FUN_14978a2f0(void)

void FUN_14978a2f0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x200) == '\x01') {
    FUN_14978a61a(param_2);
    *(undefined1 *)(param_2 + 0x200) = 0;
  }
  return;
}



// FUNCTION 14978a366 FUN_14978a366 body=38 status=ok
// SIG undefined FUN_14978a366(void)

undefined8 FUN_14978a366(undefined8 param_1,int param_2)

{
  FUN_14978a61a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14978a38c FUN_14978a38c body=38 status=ok
// SIG undefined FUN_14978a38c(void)

undefined8 FUN_14978a38c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FCollectionTransformSelectionSetOperationDataflowNode",1);
  return param_2;
}



// FUNCTION 14978a3b2 FUN_14978a3b2 body=38 status=ok
// SIG undefined FUN_14978a3b2(void)

undefined8 FUN_14978a3b2(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"CollectionTransformSelectionSetOperation",1);
  return param_2;
}


