// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14975ef7a FUN_14975ef7a body=68 status=ok
// SIG undefined FUN_14975ef7a(void)

undefined8 * FUN_14975ef7a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be4cc30;
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14975efbe FUN_14975efbe body=38 status=ok
// SIG undefined FUN_14975efbe(void)

undefined8 FUN_14975efbe(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FMeshToOBJStringDebugDataflowNode",1);
  return param_2;
}



// FUNCTION 14975efe4 FUN_14975efe4 body=38 status=ok
// SIG undefined FUN_14975efe4(void)

undefined8 FUN_14975efe4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Convert Mesh to OBJ String",1);
  return param_2;
}



// FUNCTION 14975f00a FUN_14975f00a body=38 status=ok
// SIG undefined FUN_14975f00a(void)

undefined8 FUN_14975f00a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Development",1);
  return param_2;
}



// FUNCTION 14975f030 FUN_14975f030 body=32 status=ok
// SIG undefined FUN_14975f030(void)

undefined8 FUN_14975f030(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14975f050 FUN_14975f050 body=123 status=ok
// SIG undefined FUN_14975f050(void)

void FUN_14975f050(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24e28 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24e28 = FUN_140002ddd(FUN_146753063,uVar1,L"MeshToOBJStringDebugDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24e28,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014975f0c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14975f0cc FUN_14975f0cc body=93 status=ok
// SIG undefined FUN_14975f0cc(void)

void FUN_14975f0cc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24e28 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24e28 = FUN_140002ddd(FUN_146753063,uVar2,L"MeshToOBJStringDebugDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24e28,param_1);
  return;
}



// FUNCTION 14975f12a FUN_14975f12a body=55 status=ok
// SIG undefined FUN_14975f12a(void)

void FUN_14975f12a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24e28 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24e28 = FUN_140002ddd(FUN_146753063,uVar1,L"MeshToOBJStringDebugDataflowNode");
  }
  return;
}



// FUNCTION 14975f162 FUN_14975f162 body=233 status=ok
// SIG undefined FUN_14975f162(void)

ulonglong FUN_14975f162(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FMeshToOBJStringDebugDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14975f1fc;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14975f1fc;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14975f1fc;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14975f1fc:
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



// FUNCTION 14975f24c FUN_14975f24c body=103 status=ok
// SIG undefined FUN_14975f24c(void)

longlong FUN_14975f24c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_146fc06e2();
  lVar1 = *(longlong *)(param_2 + 0x198);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x198);
    }
  }
  *(longlong *)(param_1 + 0x198) = lVar1;
  *(undefined1 *)(param_1 + 0x1a0) = *(undefined1 *)(param_2 + 0x1a0);
  FUN_144a787a6(param_1 + 0x1a8,param_2 + 0x1a8);
  return param_1;
}



// FUNCTION 14975f2b4 FUN_14975f2b4 body=49 status=ok
// SIG undefined FUN_14975f2b4(void)

void FUN_14975f2b4(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be4cee0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  return;
}



// FUNCTION 14975f2e6 FUN_14975f2e6 body=49 status=ok
// SIG undefined FUN_14975f2e6(void)

void FUN_14975f2e6(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be4cee0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  return;
}



// FUNCTION 14975f33c FUN_14975f33c body=108 status=ok
// SIG undefined FUN_14975f33c(void)

undefined1 FUN_14975f33c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    FUN_144a787a6(param_2 + 0x198,param_3 + 0x198);
    FUN_144a787a6(param_2 + 0x1a8,param_3 + 0x1a8);
    param_2 = param_2 + 0x1b8;
    param_3 = param_3 + 0x1b8;
  }
  return 1;
}



// FUNCTION 14975f3d0 FUN_14975f3d0 body=59 status=ok
// SIG undefined FUN_14975f3d0(void)

undefined8 FUN_14975f3d0(longlong *param_1)

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



// FUNCTION 14975f41c FUN_14975f41c body=40 status=ok
// SIG undefined FUN_14975f41c(void)

void FUN_14975f41c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1b8) == '\x01') {
    FUN_14975f746(param_2);
    *(undefined1 *)(param_2 + 0x1b8) = 0;
  }
  return;
}



// FUNCTION 14975f492 FUN_14975f492 body=38 status=ok
// SIG undefined FUN_14975f492(void)

undefined8 FUN_14975f492(undefined8 param_1,int param_2)

{
  FUN_14975f746();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14975f4b8 FUN_14975f4b8 body=38 status=ok
// SIG undefined FUN_14975f4b8(void)

undefined8 FUN_14975f4b8(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FWriteStringToFile",1);
  return param_2;
}



// FUNCTION 14975f4de FUN_14975f4de body=38 status=ok
// SIG undefined FUN_14975f4de(void)

undefined8 FUN_14975f4de(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Write String to File",1);
  return param_2;
}



// FUNCTION 14975f504 FUN_14975f504 body=38 status=ok
// SIG undefined FUN_14975f504(void)

undefined8 FUN_14975f504(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Development",1);
  return param_2;
}



// FUNCTION 14975f52a FUN_14975f52a body=32 status=ok
// SIG undefined FUN_14975f52a(void)

undefined8 FUN_14975f52a(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14975f54a FUN_14975f54a body=123 status=ok
// SIG undefined FUN_14975f54a(void)

void FUN_14975f54a(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24e40 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24e40 = FUN_140002ddd(FUN_1467530f9,uVar1,L"WriteStringToFile");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24e40,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014975f5c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14975f5c6 FUN_14975f5c6 body=93 status=ok
// SIG undefined FUN_14975f5c6(void)

void FUN_14975f5c6(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24e40 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24e40 = FUN_140002ddd(FUN_1467530f9,uVar2,L"WriteStringToFile");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24e40,param_1);
  return;
}



// FUNCTION 14975f624 FUN_14975f624 body=55 status=ok
// SIG undefined FUN_14975f624(void)

void FUN_14975f624(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24e40 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24e40 = FUN_140002ddd(FUN_1467530f9,uVar1,L"WriteStringToFile");
  }
  return;
}



// FUNCTION 14975f65c FUN_14975f65c body=233 status=ok
// SIG undefined FUN_14975f65c(void)

ulonglong FUN_14975f65c(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FWriteStringToFile",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14975f6f6;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14975f6f6;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14975f6f6;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14975f6f6:
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



// FUNCTION 14975f746 FUN_14975f746 body=65 status=ok
// SIG undefined FUN_14975f746(void)

void FUN_14975f746(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be4cee0;
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 14975f788 FUN_14975f788 body=161 status=ok
// SIG undefined FUN_14975f788(void)

undefined8 * FUN_14975f788(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1405b70fe(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 0x18);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1408fdf90(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 14975f82a FUN_14975f82a body=72 status=ok
// SIG undefined FUN_14975f82a(void)

void FUN_14975f82a(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be4d180;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0x8000000000;
  return;
}



// FUNCTION 14975f872 FUN_14975f872 body=72 status=ok
// SIG undefined FUN_14975f872(void)

void FUN_14975f872(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be4d180;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0x8000000000;
  return;
}



// FUNCTION 14975f8de FUN_14975f8de body=63 status=ok
// SIG undefined FUN_14975f8de(void)

undefined1 FUN_14975f8de(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14975fcf8(param_2,param_3);
    param_3 = param_3 + 0x268;
    param_2 = param_2 + 0x268;
  }
  return 1;
}



// FUNCTION 14975f946 FUN_14975f946 body=59 status=ok
// SIG undefined FUN_14975f946(void)

undefined8 FUN_14975f946(longlong *param_1)

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



// FUNCTION 14975f992 FUN_14975f992 body=40 status=ok
// SIG undefined FUN_14975f992(void)

void FUN_14975f992(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x268) == '\x01') {
    FUN_14975fcbc(param_2);
    *(undefined1 *)(param_2 + 0x268) = 0;
  }
  return;
}



// FUNCTION 14975fa08 FUN_14975fa08 body=38 status=ok
// SIG undefined FUN_14975fa08(void)

undefined8 FUN_14975fa08(undefined8 param_1,int param_2)

{
  FUN_14975fcbc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14975fa2e FUN_14975fa2e body=38 status=ok
// SIG undefined FUN_14975fa2e(void)

undefined8 FUN_14975fa2e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FPruneInCollectionDataflowNode",1);
  return param_2;
}



// FUNCTION 14975fa54 FUN_14975fa54 body=38 status=ok
// SIG undefined FUN_14975fa54(void)

undefined8 FUN_14975fa54(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"PruneInCollection",1);
  return param_2;
}



// FUNCTION 14975fa7a FUN_14975fa7a body=38 status=ok
// SIG undefined FUN_14975fa7a(void)

undefined8 FUN_14975fa7a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Edit",1);
  return param_2;
}



// FUNCTION 14975faa0 FUN_14975faa0 body=32 status=ok
// SIG undefined FUN_14975faa0(void)

undefined8 FUN_14975faa0(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14975fac0 FUN_14975fac0 body=123 status=ok
// SIG undefined FUN_14975fac0(void)

void FUN_14975fac0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24e58 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24e58 = FUN_140002ddd(FUN_14675318f,uVar1,L"PruneInCollectionDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24e58,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014975fb38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14975fb3c FUN_14975fb3c body=93 status=ok
// SIG undefined FUN_14975fb3c(void)

void FUN_14975fb3c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24e58 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24e58 = FUN_140002ddd(FUN_14675318f,uVar2,L"PruneInCollectionDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24e58,param_1);
  return;
}



// FUNCTION 14975fb9a FUN_14975fb9a body=55 status=ok
// SIG undefined FUN_14975fb9a(void)

void FUN_14975fb9a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24e58 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24e58 = FUN_140002ddd(FUN_14675318f,uVar1,L"PruneInCollectionDataflowNode");
  }
  return;
}



// FUNCTION 14975fbd2 FUN_14975fbd2 body=233 status=ok
// SIG undefined FUN_14975fbd2(void)

ulonglong FUN_14975fbd2(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FPruneInCollectionDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14975fc6c;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14975fc6c;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14975fc6c;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14975fc6c:
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



// FUNCTION 14975fcbc FUN_14975fcbc body=60 status=ok
// SIG undefined FUN_14975fcbc(void)

void FUN_14975fcbc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be4d180;
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 14975fcf8 FUN_14975fcf8 body=68 status=ok
// SIG undefined FUN_14975fcf8(void)

longlong FUN_14975fcf8(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x248,param_2 + 0x248);
  }
  return param_1;
}



// FUNCTION 14975fd3e FUN_14975fd3e body=91 status=ok
// SIG undefined FUN_14975fd3e(void)

void FUN_14975fd3e(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be4d4f0;
  *(undefined1 *)(param_2 + 0x33) = 1;
  FUN_1414db454(param_2 + 0x34);
  param_2[0x4c] = 0;
  param_2[0x4d] = 0x8000000000;
  param_2[0x50] = 0;
  param_2[0x51] = 0x8000000000;
  return;
}



// FUNCTION 14975fd9a FUN_14975fd9a body=91 status=ok
// SIG undefined FUN_14975fd9a(void)

void FUN_14975fd9a(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be4d4f0;
  *(undefined1 *)(param_2 + 0x33) = 1;
  FUN_1414db454(param_2 + 0x34);
  param_2[0x4c] = 0;
  param_2[0x4d] = 0x8000000000;
  param_2[0x50] = 0;
  param_2[0x51] = 0x8000000000;
  return;
}



// FUNCTION 14975fe1a FUN_14975fe1a body=63 status=ok
// SIG undefined FUN_14975fe1a(void)

undefined1 FUN_14975fe1a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149760246(param_2,param_3);
    param_3 = param_3 + 0x290;
    param_2 = param_2 + 0x290;
  }
  return 1;
}



// FUNCTION 14975fe82 FUN_14975fe82 body=59 status=ok
// SIG undefined FUN_14975fe82(void)

undefined8 FUN_14975fe82(longlong *param_1)

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



// FUNCTION 14975fece FUN_14975fece body=40 status=ok
// SIG undefined FUN_14975fece(void)

void FUN_14975fece(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x290) == '\x01') {
    FUN_1497601f8(param_2);
    *(undefined1 *)(param_2 + 0x290) = 0;
  }
  return;
}



// FUNCTION 14975ff44 FUN_14975ff44 body=38 status=ok
// SIG undefined FUN_14975ff44(void)

undefined8 FUN_14975ff44(undefined8 param_1,int param_2)

{
  FUN_1497601f8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14975ff6a FUN_14975ff6a body=38 status=ok
// SIG undefined FUN_14975ff6a(void)

undefined8 FUN_14975ff6a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FSetVisibilityInCollectionDataflowNode",1);
  return param_2;
}



// FUNCTION 14975ff90 FUN_14975ff90 body=38 status=ok
// SIG undefined FUN_14975ff90(void)

undefined8 FUN_14975ff90(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"SetVisibilityInCollection",1);
  return param_2;
}



// FUNCTION 14975ffb6 FUN_14975ffb6 body=38 status=ok
// SIG undefined FUN_14975ffb6(void)

undefined8 FUN_14975ffb6(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Edit",1);
  return param_2;
}



// FUNCTION 14975ffdc FUN_14975ffdc body=32 status=ok
// SIG undefined FUN_14975ffdc(void)

undefined8 FUN_14975ffdc(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14975fffc FUN_14975fffc body=123 status=ok
// SIG undefined FUN_14975fffc(void)

void FUN_14975fffc(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24e88 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24e88 = FUN_140002ddd(FUN_146753255,uVar1,L"SetVisibilityInCollectionDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24e88,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149760074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149760078 FUN_149760078 body=93 status=ok
// SIG undefined FUN_149760078(void)

void FUN_149760078(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24e88 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24e88 = FUN_140002ddd(FUN_146753255,uVar2,L"SetVisibilityInCollectionDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24e88,param_1);
  return;
}



// FUNCTION 1497600d6 FUN_1497600d6 body=55 status=ok
// SIG undefined FUN_1497600d6(void)

void FUN_1497600d6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24e88 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24e88 = FUN_140002ddd(FUN_146753255,uVar1,L"SetVisibilityInCollectionDataflowNode");
  }
  return;
}



// FUNCTION 14976010e FUN_14976010e body=233 status=ok
// SIG undefined FUN_14976010e(void)

ulonglong FUN_14976010e(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FSetVisibilityInCollectionDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_1497601a8;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1497601a8;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_1497601a8;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_1497601a8:
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



// FUNCTION 1497601f8 FUN_1497601f8 body=77 status=ok
// SIG undefined FUN_1497601f8(void)

void FUN_1497601f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be4d4f0;
  if (param_1[0x50] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4c] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x34);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 149760246 FUN_149760246 body=97 status=ok
// SIG undefined FUN_149760246(void)

longlong FUN_149760246(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  *(undefined1 *)(param_1 + 0x198) = *(undefined1 *)(param_2 + 0x198);
  FUN_146ecd102(param_1 + 0x1a0,param_2 + 0x1a0);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x250,param_2 + 0x250);
    FUN_144a69486(param_1 + 0x270,param_2 + 0x270);
  }
  return param_1;
}



// FUNCTION 1497602a8 FUN_1497602a8 body=72 status=ok
// SIG undefined FUN_1497602a8(void)

void FUN_1497602a8(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be4d7b0;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0x8000000000;
  return;
}



// FUNCTION 1497602f0 FUN_1497602f0 body=72 status=ok
// SIG undefined FUN_1497602f0(void)

void FUN_1497602f0(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be4d7b0;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0x8000000000;
  return;
}



// FUNCTION 14976035c FUN_14976035c body=63 status=ok
// SIG undefined FUN_14976035c(void)

undefined1 FUN_14976035c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149760776(param_2,param_3);
    param_3 = param_3 + 0x268;
    param_2 = param_2 + 0x268;
  }
  return 1;
}



// FUNCTION 1497603c4 FUN_1497603c4 body=59 status=ok
// SIG undefined FUN_1497603c4(void)

undefined8 FUN_1497603c4(longlong *param_1)

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



// FUNCTION 149760410 FUN_149760410 body=40 status=ok
// SIG undefined FUN_149760410(void)

void FUN_149760410(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x268) == '\x01') {
    FUN_14976073a(param_2);
    *(undefined1 *)(param_2 + 0x268) = 0;
  }
  return;
}



// FUNCTION 149760486 FUN_149760486 body=38 status=ok
// SIG undefined FUN_149760486(void)

undefined8 FUN_149760486(undefined8 param_1,int param_2)

{
  FUN_14976073a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497604ac FUN_1497604ac body=38 status=ok
// SIG undefined FUN_1497604ac(void)

undefined8 FUN_1497604ac(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FMergeInCollectionDataflowNode",1);
  return param_2;
}



// FUNCTION 1497604d2 FUN_1497604d2 body=38 status=ok
// SIG undefined FUN_1497604d2(void)

undefined8 FUN_1497604d2(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"MergeInCollection",1);
  return param_2;
}



// FUNCTION 1497604f8 FUN_1497604f8 body=38 status=ok
// SIG undefined FUN_1497604f8(void)

undefined8 FUN_1497604f8(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Edit",1);
  return param_2;
}



// FUNCTION 14976051e FUN_14976051e body=32 status=ok
// SIG undefined FUN_14976051e(void)

undefined8 FUN_14976051e(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14976053e FUN_14976053e body=123 status=ok
// SIG undefined FUN_14976053e(void)

void FUN_14976053e(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24ea0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24ea0 = FUN_140002ddd(FUN_1467532eb,uVar1,L"MergeInCollectionDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24ea0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001497605b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 1497605ba FUN_1497605ba body=93 status=ok
// SIG undefined FUN_1497605ba(void)

void FUN_1497605ba(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24ea0 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24ea0 = FUN_140002ddd(FUN_1467532eb,uVar2,L"MergeInCollectionDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24ea0,param_1);
  return;
}



// FUNCTION 149760618 FUN_149760618 body=55 status=ok
// SIG undefined FUN_149760618(void)

void FUN_149760618(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24ea0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24ea0 = FUN_140002ddd(FUN_1467532eb,uVar1,L"MergeInCollectionDataflowNode");
  }
  return;
}



// FUNCTION 149760650 FUN_149760650 body=233 status=ok
// SIG undefined FUN_149760650(void)

ulonglong FUN_149760650(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FMergeInCollectionDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_1497606ea;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1497606ea;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_1497606ea;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_1497606ea:
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



// FUNCTION 14976073a FUN_14976073a body=60 status=ok
// SIG undefined FUN_14976073a(void)

void FUN_14976073a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be4d7b0;
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 149760776 FUN_149760776 body=68 status=ok
// SIG undefined FUN_149760776(void)

longlong FUN_149760776(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x248,param_2 + 0x248);
  }
  return param_1;
}



// FUNCTION 1497607bc FUN_1497607bc body=97 status=ok
// SIG undefined FUN_1497607bc(void)

void FUN_1497607bc(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be4da60;
  param_2[0x33] = 0x1400000014;
  *(undefined4 *)(param_2 + 0x34) = 0xbf800000;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  *(undefined1 *)(param_2 + 0x3b) = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  return;
}



// FUNCTION 14976081e FUN_14976081e body=97 status=ok
// SIG undefined FUN_14976081e(void)

void FUN_14976081e(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be4da60;
  param_2[0x33] = 0x1400000014;
  *(undefined4 *)(param_2 + 0x34) = 0xbf800000;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  *(undefined1 *)(param_2 + 0x3b) = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  return;
}



// FUNCTION 1497608a4 FUN_1497608a4 body=116 status=ok
// SIG undefined FUN_1497608a4(void)

undefined1 FUN_1497608a4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    puVar2 = (undefined8 *)(param_3 + 0x198);
    puVar3 = (undefined8 *)(param_2 + 0x198);
    for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_1405b70a4(param_2 + 0x1e0,param_3 + 0x1e0);
    param_2 = param_2 + 0x1f0;
    param_3 = param_3 + 0x1f0;
  }
  return 1;
}



// FUNCTION 149760940 FUN_149760940 body=59 status=ok
// SIG undefined FUN_149760940(void)

undefined8 FUN_149760940(longlong *param_1)

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



// FUNCTION 14976098c FUN_14976098c body=67 status=ok
// SIG undefined FUN_14976098c(void)

void FUN_14976098c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x3e) == '\x01') {
    *param_2 = &PTR_FUN_14be4da60;
    if (param_2[0x3c] != 0) {
      FUN_1400020a8();
    }
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x3e) = 0;
  }
  return;
}



// FUNCTION 149760a1e FUN_149760a1e body=68 status=ok
// SIG undefined FUN_149760a1e(void)

undefined8 * FUN_149760a1e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be4da60;
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149760a62 FUN_149760a62 body=38 status=ok
// SIG undefined FUN_149760a62(void)

undefined8 FUN_149760a62(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FUniformScatterPointsDataflowNode",1);
  return param_2;
}



// FUNCTION 149760a88 FUN_149760a88 body=38 status=ok
// SIG undefined FUN_149760a88(void)

undefined8 FUN_149760a88(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"UniformScatterPoints",1);
  return param_2;
}



// FUNCTION 149760aae FUN_149760aae body=38 status=ok
// SIG undefined FUN_149760aae(void)

undefined8 FUN_149760aae(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Generators|Point",1);
  return param_2;
}



// FUNCTION 149760ad4 FUN_149760ad4 body=32 status=ok
// SIG undefined FUN_149760ad4(void)

undefined8 FUN_149760ad4(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149760af4 FUN_149760af4 body=123 status=ok
// SIG undefined FUN_149760af4(void)

void FUN_149760af4(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24ec8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24ec8 = FUN_140002ddd(FUN_146753381,uVar1,L"UniformScatterPointsDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24ec8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149760b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149760b70 FUN_149760b70 body=93 status=ok
// SIG undefined FUN_149760b70(void)

void FUN_149760b70(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24ec8 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24ec8 = FUN_140002ddd(FUN_146753381,uVar2,L"UniformScatterPointsDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24ec8,param_1);
  return;
}



// FUNCTION 149760bce FUN_149760bce body=55 status=ok
// SIG undefined FUN_149760bce(void)

void FUN_149760bce(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24ec8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24ec8 = FUN_140002ddd(FUN_146753381,uVar1,L"UniformScatterPointsDataflowNode");
  }
  return;
}



// FUNCTION 149760c06 FUN_149760c06 body=233 status=ok
// SIG undefined FUN_149760c06(void)

ulonglong FUN_149760c06(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FUniformScatterPointsDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149760ca0;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149760ca0;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149760ca0;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149760ca0:
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



// FUNCTION 149760cf2 FUN_149760cf2 body=97 status=ok
// SIG undefined FUN_149760cf2(void)

void FUN_149760cf2(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be4dd20;
  param_2[0x33] = 0x1400000014;
  *(undefined4 *)(param_2 + 0x34) = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  *(undefined1 *)(param_2 + 0x3b) = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  return;
}



// FUNCTION 149760d54 FUN_149760d54 body=97 status=ok
// SIG undefined FUN_149760d54(void)

void FUN_149760d54(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be4dd20;
  param_2[0x33] = 0x1400000014;
  *(undefined4 *)(param_2 + 0x34) = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  *(undefined1 *)(param_2 + 0x3b) = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  return;
}



// FUNCTION 149760dda FUN_149760dda body=116 status=ok
// SIG undefined FUN_149760dda(void)

undefined1 FUN_149760dda(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    puVar2 = (undefined8 *)(param_3 + 0x198);
    puVar3 = (undefined8 *)(param_2 + 0x198);
    for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_1405b70a4(param_2 + 0x1e0,param_3 + 0x1e0);
    param_2 = param_2 + 0x1f0;
    param_3 = param_3 + 0x1f0;
  }
  return 1;
}



// FUNCTION 149760e76 FUN_149760e76 body=59 status=ok
// SIG undefined FUN_149760e76(void)

undefined8 FUN_149760e76(longlong *param_1)

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



// FUNCTION 149760ec2 FUN_149760ec2 body=67 status=ok
// SIG undefined FUN_149760ec2(void)

void FUN_149760ec2(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x3e) == '\x01') {
    *param_2 = &PTR_FUN_14be4dd20;
    if (param_2[0x3c] != 0) {
      FUN_1400020a8();
    }
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x3e) = 0;
  }
  return;
}



// FUNCTION 149760f54 FUN_149760f54 body=68 status=ok
// SIG undefined FUN_149760f54(void)

undefined8 * FUN_149760f54(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be4dd20;
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149760f98 FUN_149760f98 body=38 status=ok
// SIG undefined FUN_149760f98(void)

undefined8 FUN_149760f98(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FUniformScatterPointsDataflowNode_v2",1);
  return param_2;
}



// FUNCTION 149760fbe FUN_149760fbe body=38 status=ok
// SIG undefined FUN_149760fbe(void)

undefined8 FUN_149760fbe(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"UniformScatterPoints",1);
  return param_2;
}



// FUNCTION 149760fe4 FUN_149760fe4 body=38 status=ok
// SIG undefined FUN_149760fe4(void)

undefined8 FUN_149760fe4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Generators|Point",1);
  return param_2;
}



// FUNCTION 14976100a FUN_14976100a body=32 status=ok
// SIG undefined FUN_14976100a(void)

undefined8 FUN_14976100a(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14976102a FUN_14976102a body=123 status=ok
// SIG undefined FUN_14976102a(void)

void FUN_14976102a(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24ee0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24ee0 = FUN_140002ddd(FUN_146753417,uVar1,L"UniformScatterPointsDataflowNode_v2");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24ee0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001497610a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 1497610a6 FUN_1497610a6 body=93 status=ok
// SIG undefined FUN_1497610a6(void)

void FUN_1497610a6(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24ee0 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24ee0 = FUN_140002ddd(FUN_146753417,uVar2,L"UniformScatterPointsDataflowNode_v2");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24ee0,param_1);
  return;
}



// FUNCTION 149761104 FUN_149761104 body=55 status=ok
// SIG undefined FUN_149761104(void)

void FUN_149761104(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24ee0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24ee0 = FUN_140002ddd(FUN_146753417,uVar1,L"UniformScatterPointsDataflowNode_v2");
  }
  return;
}



// FUNCTION 14976113c FUN_14976113c body=233 status=ok
// SIG undefined FUN_14976113c(void)

ulonglong FUN_14976113c(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FUniformScatterPointsDataflowNode_v2",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_1497611d6;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1497611d6;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_1497611d6;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_1497611d6:
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



// FUNCTION 149761228 FUN_149761228 body=126 status=ok
// SIG undefined FUN_149761228(void)

void FUN_149761228(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be4dfc0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0x3ff0000000000000;
  param_2[0x39] = 0x542480000;
  *(undefined4 *)(param_2 + 0x3a) = 5;
  *(undefined8 *)((longlong)param_2 + 0x1d4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1dc) = 0xbf800000;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  return;
}



// FUNCTION 1497612a6 FUN_1497612a6 body=126 status=ok
// SIG undefined FUN_1497612a6(void)

void FUN_1497612a6(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be4dfc0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0x3ff0000000000000;
  param_2[0x39] = 0x542480000;
  *(undefined4 *)(param_2 + 0x3a) = 5;
  *(undefined8 *)((longlong)param_2 + 0x1d4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1dc) = 0xbf800000;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  return;
}



// FUNCTION 149761348 FUN_149761348 body=116 status=ok
// SIG undefined FUN_149761348(void)

undefined1 FUN_149761348(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    puVar2 = (undefined8 *)(param_3 + 0x198);
    puVar3 = (undefined8 *)(param_2 + 0x198);
    for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_1405b70a4(param_2 + 0x1e0,param_3 + 0x1e0);
    param_2 = param_2 + 0x1f0;
    param_3 = param_3 + 0x1f0;
  }
  return 1;
}



// FUNCTION 1497613e4 FUN_1497613e4 body=59 status=ok
// SIG undefined FUN_1497613e4(void)

undefined8 FUN_1497613e4(longlong *param_1)

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



// FUNCTION 149761430 FUN_149761430 body=67 status=ok
// SIG undefined FUN_149761430(void)

void FUN_149761430(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x3e) == '\x01') {
    *param_2 = &PTR_FUN_14be4dfc0;
    if (param_2[0x3c] != 0) {
      FUN_1400020a8();
    }
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x3e) = 0;
  }
  return;
}



// FUNCTION 1497614c2 FUN_1497614c2 body=68 status=ok
// SIG undefined FUN_1497614c2(void)

undefined8 * FUN_1497614c2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be4dfc0;
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149761506 FUN_149761506 body=38 status=ok
// SIG undefined FUN_149761506(void)

undefined8 FUN_149761506(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FRadialScatterPointsDataflowNode",1);
  return param_2;
}



// FUNCTION 14976152c FUN_14976152c body=38 status=ok
// SIG undefined FUN_14976152c(void)

undefined8 FUN_14976152c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"RadialScatterPoints",1);
  return param_2;
}



// FUNCTION 149761552 FUN_149761552 body=38 status=ok
// SIG undefined FUN_149761552(void)

undefined8 FUN_149761552(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Generators|Point",1);
  return param_2;
}



// FUNCTION 149761578 FUN_149761578 body=32 status=ok
// SIG undefined FUN_149761578(void)

undefined8 FUN_149761578(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149761598 FUN_149761598 body=123 status=ok
// SIG undefined FUN_149761598(void)

void FUN_149761598(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24ef8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24ef8 = FUN_140002ddd(FUN_1467534ad,uVar1,L"RadialScatterPointsDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24ef8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149761610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149761614 FUN_149761614 body=93 status=ok
// SIG undefined FUN_149761614(void)

void FUN_149761614(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24ef8 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24ef8 = FUN_140002ddd(FUN_1467534ad,uVar2,L"RadialScatterPointsDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24ef8,param_1);
  return;
}



// FUNCTION 149761672 FUN_149761672 body=55 status=ok
// SIG undefined FUN_149761672(void)

void FUN_149761672(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24ef8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24ef8 = FUN_140002ddd(FUN_1467534ad,uVar1,L"RadialScatterPointsDataflowNode");
  }
  return;
}



// FUNCTION 1497616aa FUN_1497616aa body=233 status=ok
// SIG undefined FUN_1497616aa(void)

ulonglong FUN_1497616aa(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FRadialScatterPointsDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149761744;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149761744;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149761744;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149761744:
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



// FUNCTION 1497617ca FUN_1497617ca body=114 status=ok
// SIG undefined FUN_1497617ca(void)

undefined8 FUN_1497617ca(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    memcpy((void *)(param_2 + 0x198),(void *)(param_3 + 0x198),0x98);
    FUN_1405b70a4(param_2 + 0x230,param_3 + 0x230);
    param_2 = param_2 + 0x240;
    param_3 = param_3 + 0x240;
  }
  return 1;
}



// FUNCTION 149761864 FUN_149761864 body=59 status=ok
// SIG undefined FUN_149761864(void)

undefined8 FUN_149761864(longlong *param_1)

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



// FUNCTION 1497618b0 FUN_1497618b0 body=67 status=ok
// SIG undefined FUN_1497618b0(void)

void FUN_1497618b0(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    *param_2 = &PTR_FUN_14be4e270;
    if (param_2[0x46] != 0) {
      FUN_1400020a8();
    }
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 149761942 FUN_149761942 body=175 status=ok
// SIG undefined FUN_149761942(void)

undefined8 * FUN_149761942(undefined8 *param_1)

{
  FUN_146fc02b8();
  *param_1 = &PTR_FUN_14be4e270;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0x3ff0000000000000;
  param_1[0x40] = 0x500000000;
  param_1[0x41] = 0;
  param_1[0x42] = 0x542480000;
  param_1[0x43] = &DAT_3f8000003f800000;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  return param_1;
}



// FUNCTION 1497619f2 FUN_1497619f2 body=68 status=ok
// SIG undefined FUN_1497619f2(void)

undefined8 * FUN_1497619f2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be4e270;
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149761a36 FUN_149761a36 body=38 status=ok
// SIG undefined FUN_149761a36(void)

undefined8 FUN_149761a36(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FRadialScatterPointsDataflowNode_v2",1);
  return param_2;
}



// FUNCTION 149761a5c FUN_149761a5c body=38 status=ok
// SIG undefined FUN_149761a5c(void)

undefined8 FUN_149761a5c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"RadialScatterPoints",1);
  return param_2;
}



// FUNCTION 149761a82 FUN_149761a82 body=38 status=ok
// SIG undefined FUN_149761a82(void)

undefined8 FUN_149761a82(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Generators|Point",1);
  return param_2;
}



// FUNCTION 149761aa8 FUN_149761aa8 body=32 status=ok
// SIG undefined FUN_149761aa8(void)

undefined8 FUN_149761aa8(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149761ac8 FUN_149761ac8 body=123 status=ok
// SIG undefined FUN_149761ac8(void)

void FUN_149761ac8(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24f10 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24f10 = FUN_140002ddd(FUN_146753543,uVar1,L"RadialScatterPointsDataflowNode_v2");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24f10,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149761b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149761b44 FUN_149761b44 body=93 status=ok
// SIG undefined FUN_149761b44(void)

void FUN_149761b44(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24f10 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24f10 = FUN_140002ddd(FUN_146753543,uVar2,L"RadialScatterPointsDataflowNode_v2");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24f10,param_1);
  return;
}



// FUNCTION 149761ba2 FUN_149761ba2 body=55 status=ok
// SIG undefined FUN_149761ba2(void)

void FUN_149761ba2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24f10 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24f10 = FUN_140002ddd(FUN_146753543,uVar1,L"RadialScatterPointsDataflowNode_v2");
  }
  return;
}



// FUNCTION 149761bda FUN_149761bda body=233 status=ok
// SIG undefined FUN_149761bda(void)

ulonglong FUN_149761bda(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FRadialScatterPointsDataflowNode_v2",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149761c74;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149761c74;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149761c74;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149761c74:
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



// FUNCTION 149761cc6 FUN_149761cc6 body=104 status=ok
// SIG undefined FUN_149761cc6(void)

void FUN_149761cc6(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be4e510;
  param_2[0x33] = 0x500000005;
  *(undefined4 *)(param_2 + 0x34) = 5;
  *(undefined8 *)((longlong)param_2 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1ac) = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  *(undefined1 *)(param_2 + 0x3d) = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  return;
}



// FUNCTION 149761d2e FUN_149761d2e body=104 status=ok
// SIG undefined FUN_149761d2e(void)

void FUN_149761d2e(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be4e510;
  param_2[0x33] = 0x500000005;
  *(undefined4 *)(param_2 + 0x34) = 5;
  *(undefined8 *)((longlong)param_2 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1ac) = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  *(undefined1 *)(param_2 + 0x3d) = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  return;
}



// FUNCTION 149761dba FUN_149761dba body=116 status=ok
// SIG undefined FUN_149761dba(void)

undefined1 FUN_149761dba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    puVar2 = (undefined8 *)(param_3 + 0x198);
    puVar3 = (undefined8 *)(param_2 + 0x198);
    for (lVar1 = 0xb; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_1405b70a4(param_2 + 0x1f0,param_3 + 0x1f0);
    param_2 = param_2 + 0x200;
    param_3 = param_3 + 0x200;
  }
  return 1;
}



// FUNCTION 149761e56 FUN_149761e56 body=59 status=ok
// SIG undefined FUN_149761e56(void)

undefined8 FUN_149761e56(longlong *param_1)

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



// FUNCTION 149761ea2 FUN_149761ea2 body=67 status=ok
// SIG undefined FUN_149761ea2(void)

void FUN_149761ea2(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    *param_2 = &PTR_FUN_14be4e510;
    if (param_2[0x3e] != 0) {
      FUN_1400020a8();
    }
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 149761f34 FUN_149761f34 body=68 status=ok
// SIG undefined FUN_149761f34(void)

undefined8 * FUN_149761f34(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be4e510;
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149761f78 FUN_149761f78 body=38 status=ok
// SIG undefined FUN_149761f78(void)

undefined8 FUN_149761f78(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FGridScatterPointsDataflowNode",1);
  return param_2;
}



// FUNCTION 149761f9e FUN_149761f9e body=38 status=ok
// SIG undefined FUN_149761f9e(void)

undefined8 FUN_149761f9e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GridScatterPoints",1);
  return param_2;
}



// FUNCTION 149761fc4 FUN_149761fc4 body=38 status=ok
// SIG undefined FUN_149761fc4(void)

undefined8 FUN_149761fc4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Generators|Point",1);
  return param_2;
}



// FUNCTION 149761fea FUN_149761fea body=32 status=ok
// SIG undefined FUN_149761fea(void)

undefined8 FUN_149761fea(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14976200a FUN_14976200a body=123 status=ok
// SIG undefined FUN_14976200a(void)

void FUN_14976200a(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24f28 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24f28 = FUN_140002ddd(FUN_1467535d9,uVar1,L"GridScatterPointsDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24f28,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149762082. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149762086 FUN_149762086 body=93 status=ok
// SIG undefined FUN_149762086(void)

void FUN_149762086(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24f28 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24f28 = FUN_140002ddd(FUN_1467535d9,uVar2,L"GridScatterPointsDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24f28,param_1);
  return;
}



// FUNCTION 1497620e4 FUN_1497620e4 body=55 status=ok
// SIG undefined FUN_1497620e4(void)

void FUN_1497620e4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24f28 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24f28 = FUN_140002ddd(FUN_1467535d9,uVar1,L"GridScatterPointsDataflowNode");
  }
  return;
}



// FUNCTION 14976211c FUN_14976211c body=233 status=ok
// SIG undefined FUN_14976211c(void)

ulonglong FUN_14976211c(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FGridScatterPointsDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_1497621b6;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1497621b6;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_1497621b6;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_1497621b6:
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



// FUNCTION 14976223c FUN_14976223c body=63 status=ok
// SIG undefined FUN_14976223c(void)

undefined1 FUN_14976223c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14976270c(param_2,param_3);
    param_3 = param_3 + 0x2a8;
    param_2 = param_2 + 0x2a8;
  }
  return 1;
}



// FUNCTION 1497622a4 FUN_1497622a4 body=59 status=ok
// SIG undefined FUN_1497622a4(void)

undefined8 FUN_1497622a4(longlong *param_1)

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



// FUNCTION 1497622f0 FUN_1497622f0 body=40 status=ok
// SIG undefined FUN_1497622f0(void)

void FUN_1497622f0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2a8) == '\x01') {
    FUN_1497626be(param_2);
    *(undefined1 *)(param_2 + 0x2a8) = 0;
  }
  return;
}



// FUNCTION 149762366 FUN_149762366 body=164 status=ok
// SIG undefined FUN_149762366(void)

undefined8 * FUN_149762366(undefined8 *param_1)

{
  FUN_146fc02b8();
  *param_1 = &PTR_FUN_14be4e7c0;
  FUN_1414db454(param_1 + 0x33);
  param_1[0x4d] = 0;
  param_1[0x4e] = 0x8000000000;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4f] = 0x3f800000bf800000;
  *(undefined1 *)(param_1 + 0x50) = 1;
  *(undefined8 *)((longlong)param_1 + 0x284) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28c) = 0x3f0000003dcccccd;
  *(undefined8 *)((longlong)param_1 + 0x294) = 0x440000000;
  *(undefined4 *)((longlong)param_1 + 0x29c) = 0x41200000;
  *(undefined1 *)(param_1 + 0x54) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2a4) = 0x42480000;
  return param_1;
}



// FUNCTION 14976240a FUN_14976240a body=38 status=ok
// SIG undefined FUN_14976240a(void)

undefined8 FUN_14976240a(undefined8 param_1,int param_2)

{
  FUN_1497626be();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149762430 FUN_149762430 body=38 status=ok
// SIG undefined FUN_149762430(void)

undefined8 FUN_149762430(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FVoronoiFractureDataflowNode",1);
  return param_2;
}



// FUNCTION 149762456 FUN_149762456 body=38 status=ok
// SIG undefined FUN_149762456(void)

undefined8 FUN_149762456(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"VoronoiFracture",1);
  return param_2;
}



// FUNCTION 14976247c FUN_14976247c body=38 status=ok
// SIG undefined FUN_14976247c(void)

undefined8 FUN_14976247c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Fracture",1);
  return param_2;
}



// FUNCTION 1497624a2 FUN_1497624a2 body=32 status=ok
// SIG undefined FUN_1497624a2(void)

undefined8 FUN_1497624a2(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 1497624c2 FUN_1497624c2 body=123 status=ok
// SIG undefined FUN_1497624c2(void)

void FUN_1497624c2(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24f40 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24f40 = FUN_140002ddd(FUN_14675366f,uVar1,L"VoronoiFractureDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24f40,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014976253a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14976253e FUN_14976253e body=93 status=ok
// SIG undefined FUN_14976253e(void)

void FUN_14976253e(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24f40 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24f40 = FUN_140002ddd(FUN_14675366f,uVar2,L"VoronoiFractureDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24f40,param_1);
  return;
}



// FUNCTION 14976259c FUN_14976259c body=55 status=ok
// SIG undefined FUN_14976259c(void)

void FUN_14976259c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24f40 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24f40 = FUN_140002ddd(FUN_14675366f,uVar1,L"VoronoiFractureDataflowNode");
  }
  return;
}



// FUNCTION 1497625d4 FUN_1497625d4 body=233 status=ok
// SIG undefined FUN_1497625d4(void)

ulonglong FUN_1497625d4(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FVoronoiFractureDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14976266e;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14976266e;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14976266e;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14976266e:
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



// FUNCTION 1497626be FUN_1497626be body=77 status=ok
// SIG undefined FUN_1497626be(void)

void FUN_1497626be(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be4e7c0;
  if (param_1[0x4d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x49] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 14976270c FUN_14976270c body=125 status=ok
// SIG undefined FUN_14976270c(void)

longlong FUN_14976270c(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  FUN_1405b70a4(param_1 + 0x248,param_2 + 0x248);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 600,param_2 + 600);
  }
  uVar1 = *(undefined8 *)(param_2 + 0x278);
  uVar2 = *(undefined8 *)(param_2 + 0x280);
  uVar3 = *(undefined8 *)(param_2 + 0x288);
  uVar4 = *(undefined8 *)(param_2 + 0x290);
  uVar5 = *(undefined8 *)(param_2 + 0x2a0);
  *(undefined8 *)(param_1 + 0x298) = *(undefined8 *)(param_2 + 0x298);
  *(undefined8 *)(param_1 + 0x2a0) = uVar5;
  *(undefined8 *)(param_1 + 0x288) = uVar3;
  *(undefined8 *)(param_1 + 0x290) = uVar4;
  *(undefined8 *)(param_1 + 0x278) = uVar1;
  *(undefined8 *)(param_1 + 0x280) = uVar2;
  return param_1;
}



// FUNCTION 1497627be FUN_1497627be body=63 status=ok
// SIG undefined FUN_1497627be(void)

undefined1 FUN_1497627be(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149762cc4(param_2,param_3);
    param_3 = param_3 + 0x330;
    param_2 = param_2 + 0x330;
  }
  return 1;
}



// FUNCTION 149762826 FUN_149762826 body=59 status=ok
// SIG undefined FUN_149762826(void)

undefined8 FUN_149762826(longlong *param_1)

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



// FUNCTION 149762872 FUN_149762872 body=40 status=ok
// SIG undefined FUN_149762872(void)

void FUN_149762872(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x330) == '\x01') {
    FUN_149762c66(param_2);
    *(undefined1 *)(param_2 + 0x330) = 0;
  }
  return;
}



// FUNCTION 1497628e8 FUN_1497628e8 body=202 status=ok
// SIG undefined FUN_1497628e8(void)

undefined8 * FUN_1497628e8(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_146fc02b8();
  *param_1 = &PTR_FUN_14be4ea60;
  FUN_1414db454(param_1 + 0x33);
  param_1[0x4d] = 0;
  param_1[0x4e] = 0x8000000000;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x50;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x5c] = 0x3f80000000000000;
  *(undefined1 *)(param_1 + 0x5d) = 1;
  *(undefined8 *)((longlong)param_1 + 0x2ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f4) = 0x3f0000003dcccccd;
  *(undefined8 *)((longlong)param_1 + 0x2fc) = 0x440000000;
  *(undefined4 *)((longlong)param_1 + 0x304) = 0x41200000;
  *(undefined1 *)(param_1 + 0x61) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30c) = 0x42480000;
  param_1[100] = 0;
  param_1[0x65] = 0x8000000000;
  return param_1;
}



// FUNCTION 1497629b2 FUN_1497629b2 body=38 status=ok
// SIG undefined FUN_1497629b2(void)

undefined8 FUN_1497629b2(undefined8 param_1,int param_2)

{
  FUN_149762c66();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497629d8 FUN_1497629d8 body=38 status=ok
// SIG undefined FUN_1497629d8(void)

undefined8 FUN_1497629d8(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FVoronoiFractureDataflowNode_v2",1);
  return param_2;
}



// FUNCTION 1497629fe FUN_1497629fe body=38 status=ok
// SIG undefined FUN_1497629fe(void)

undefined8 FUN_1497629fe(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"VoronoiFracture",1);
  return param_2;
}



// FUNCTION 149762a24 FUN_149762a24 body=38 status=ok
// SIG undefined FUN_149762a24(void)

undefined8 FUN_149762a24(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Fracture",1);
  return param_2;
}



// FUNCTION 149762a4a FUN_149762a4a body=32 status=ok
// SIG undefined FUN_149762a4a(void)

undefined8 FUN_149762a4a(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149762a6a FUN_149762a6a body=123 status=ok
// SIG undefined FUN_149762a6a(void)

void FUN_149762a6a(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24f58 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24f58 = FUN_140002ddd(FUN_146753705,uVar1,L"VoronoiFractureDataflowNode_v2");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24f58,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149762ae2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149762ae6 FUN_149762ae6 body=93 status=ok
// SIG undefined FUN_149762ae6(void)

void FUN_149762ae6(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24f58 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24f58 = FUN_140002ddd(FUN_146753705,uVar2,L"VoronoiFractureDataflowNode_v2");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24f58,param_1);
  return;
}



// FUNCTION 149762b44 FUN_149762b44 body=55 status=ok
// SIG undefined FUN_149762b44(void)

void FUN_149762b44(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24f58 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24f58 = FUN_140002ddd(FUN_146753705,uVar1,L"VoronoiFractureDataflowNode_v2");
  }
  return;
}



// FUNCTION 149762b7c FUN_149762b7c body=233 status=ok
// SIG undefined FUN_149762b7c(void)

ulonglong FUN_149762b7c(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FVoronoiFractureDataflowNode_v2",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149762c16;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149762c16;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149762c16;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149762c16:
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



// FUNCTION 149762c66 FUN_149762c66 body=94 status=ok
// SIG undefined FUN_149762c66(void)

void FUN_149762c66(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be4ea60;
  if (param_1[100] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x49] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 149762cc4 FUN_149762cc4 body=153 status=ok
// SIG undefined FUN_149762cc4(void)

longlong FUN_149762cc4(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  FUN_1405b70a4(param_1 + 0x248,param_2 + 0x248);
  if (param_1 == param_2) {
    memcpy((void *)(param_1 + 0x280),(void *)(param_2 + 0x280),0x90);
  }
  else {
    FUN_144a69486(param_1 + 600,param_2 + 600);
    memcpy((void *)(param_1 + 0x280),(void *)(param_2 + 0x280),0x90);
    FUN_144a69486(param_1 + 0x310,param_2 + 0x310);
  }
  return param_1;
}



// FUNCTION 149762d92 FUN_149762d92 body=63 status=ok
// SIG undefined FUN_149762d92(void)

undefined1 FUN_149762d92(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14976325e(param_2,param_3);
    param_3 = param_3 + 0x2d0;
    param_2 = param_2 + 0x2d0;
  }
  return 1;
}



// FUNCTION 149762dfa FUN_149762dfa body=59 status=ok
// SIG undefined FUN_149762dfa(void)

undefined8 FUN_149762dfa(longlong *param_1)

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



// FUNCTION 149762e46 FUN_149762e46 body=40 status=ok
// SIG undefined FUN_149762e46(void)

void FUN_149762e46(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2d0) == '\x01') {
    FUN_149763222(param_2);
    *(undefined1 *)(param_2 + 0x2d0) = 0;
  }
  return;
}



// FUNCTION 149762ebc FUN_149762ebc body=178 status=ok
// SIG undefined FUN_149762ebc(void)

undefined8 * FUN_149762ebc(undefined8 *param_1)

{
  FUN_146fc02b8();
  *param_1 = &PTR_FUN_14be4ecf0;
  FUN_1414db454(param_1 + 0x33);
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x29c) = 0x100000080;
  *(undefined8 *)((longlong)param_1 + 0x2a4) = 0xbf800000;
  *(undefined8 *)((longlong)param_1 + 0x2ac) = 0x3dcccccd00000000;
  *(undefined8 *)((longlong)param_1 + 0x2b4) = 0x400000003f000000;
  *(undefined8 *)((longlong)param_1 + 700) = 0x4120000000000004;
  *(undefined1 *)((longlong)param_1 + 0x2c4) = 0;
  *(undefined4 *)(param_1 + 0x59) = 0x42480000;
  return param_1;
}



// FUNCTION 149762f6e FUN_149762f6e body=38 status=ok
// SIG undefined FUN_149762f6e(void)

undefined8 FUN_149762f6e(undefined8 param_1,int param_2)

{
  FUN_149763222();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149762f94 FUN_149762f94 body=38 status=ok
// SIG undefined FUN_149762f94(void)

undefined8 FUN_149762f94(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FPlaneCutterDataflowNode",1);
  return param_2;
}



// FUNCTION 149762fba FUN_149762fba body=38 status=ok
// SIG undefined FUN_149762fba(void)

undefined8 FUN_149762fba(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"PlaneCutter",1);
  return param_2;
}



// FUNCTION 149762fe0 FUN_149762fe0 body=38 status=ok
// SIG undefined FUN_149762fe0(void)

undefined8 FUN_149762fe0(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Fracture",1);
  return param_2;
}



// FUNCTION 149763006 FUN_149763006 body=32 status=ok
// SIG undefined FUN_149763006(void)

undefined8 FUN_149763006(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149763026 FUN_149763026 body=123 status=ok
// SIG undefined FUN_149763026(void)

void FUN_149763026(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24f70 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24f70 = FUN_140002ddd(FUN_14675379b,uVar1,L"PlaneCutterDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24f70,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014976309e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 1497630a2 FUN_1497630a2 body=93 status=ok
// SIG undefined FUN_1497630a2(void)

void FUN_1497630a2(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24f70 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24f70 = FUN_140002ddd(FUN_14675379b,uVar2,L"PlaneCutterDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24f70,param_1);
  return;
}



// FUNCTION 149763100 FUN_149763100 body=55 status=ok
// SIG undefined FUN_149763100(void)

void FUN_149763100(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24f70 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24f70 = FUN_140002ddd(FUN_14675379b,uVar1,L"PlaneCutterDataflowNode");
  }
  return;
}



// FUNCTION 149763138 FUN_149763138 body=233 status=ok
// SIG undefined FUN_149763138(void)

ulonglong FUN_149763138(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FPlaneCutterDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_1497631d2;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1497631d2;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_1497631d2;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_1497631d2:
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



// FUNCTION 149763222 FUN_149763222 body=60 status=ok
// SIG undefined FUN_149763222(void)

void FUN_149763222(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be4ecf0;
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 14976325e FUN_14976325e body=164 status=ok
// SIG undefined FUN_14976325e(void)

longlong FUN_14976325e(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  uVar1 = *(undefined4 *)(param_2 + 0x24c);
  uVar2 = *(undefined4 *)(param_2 + 0x250);
  uVar3 = *(undefined4 *)(param_2 + 0x254);
  uVar4 = *(undefined4 *)(param_2 + 600);
  uVar5 = *(undefined4 *)(param_2 + 0x25c);
  uVar6 = *(undefined4 *)(param_2 + 0x260);
  uVar7 = *(undefined4 *)(param_2 + 0x264);
  uVar8 = *(undefined4 *)(param_2 + 0x268);
  uVar9 = *(undefined4 *)(param_2 + 0x26c);
  uVar10 = *(undefined4 *)(param_2 + 0x270);
  uVar11 = *(undefined4 *)(param_2 + 0x274);
  *(undefined4 *)(param_1 + 0x248) = *(undefined4 *)(param_2 + 0x248);
  *(undefined4 *)(param_1 + 0x24c) = uVar1;
  *(undefined4 *)(param_1 + 0x250) = uVar2;
  *(undefined4 *)(param_1 + 0x254) = uVar3;
  *(undefined4 *)(param_1 + 600) = uVar4;
  *(undefined4 *)(param_1 + 0x25c) = uVar5;
  *(undefined4 *)(param_1 + 0x260) = uVar6;
  *(undefined4 *)(param_1 + 0x264) = uVar7;
  *(undefined4 *)(param_1 + 0x268) = uVar8;
  *(undefined4 *)(param_1 + 0x26c) = uVar9;
  *(undefined4 *)(param_1 + 0x270) = uVar10;
  *(undefined4 *)(param_1 + 0x274) = uVar11;
  *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(param_2 + 0x278);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x280,param_2 + 0x280);
  }
  uVar12 = *(undefined8 *)(param_2 + 0x2a0);
  uVar13 = *(undefined8 *)(param_2 + 0x2a8);
  uVar14 = *(undefined8 *)(param_2 + 0x2b0);
  uVar15 = *(undefined8 *)(param_2 + 0x2b8);
  uVar16 = *(undefined8 *)(param_2 + 0x2c4);
  *(undefined8 *)(param_1 + 700) = *(undefined8 *)(param_2 + 700);
  *(undefined8 *)(param_1 + 0x2c4) = uVar16;
  *(undefined8 *)(param_1 + 0x2b0) = uVar14;
  *(undefined8 *)(param_1 + 0x2b8) = uVar15;
  *(undefined8 *)(param_1 + 0x2a0) = uVar12;
  *(undefined8 *)(param_1 + 0x2a8) = uVar13;
  return param_1;
}



// FUNCTION 149763338 FUN_149763338 body=63 status=ok
// SIG undefined FUN_149763338(void)

undefined1 FUN_149763338(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149763846(param_2,param_3);
    param_3 = param_3 + 0x360;
    param_2 = param_2 + 0x360;
  }
  return 1;
}



// FUNCTION 1497633a0 FUN_1497633a0 body=59 status=ok
// SIG undefined FUN_1497633a0(void)

undefined8 FUN_1497633a0(longlong *param_1)

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



// FUNCTION 1497633ec FUN_1497633ec body=40 status=ok
// SIG undefined FUN_1497633ec(void)

void FUN_1497633ec(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x360) == '\x01') {
    FUN_1497637f8(param_2);
    *(undefined1 *)(param_2 + 0x360) = 0;
  }
  return;
}



// FUNCTION 149763462 FUN_149763462 body=225 status=ok
// SIG undefined FUN_149763462(void)

undefined8 * FUN_149763462(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_146fc02b8();
  *param_1 = &PTR_FUN_14be4ef90;
  FUN_1414db454(param_1 + 0x33);
  param_1[0x52] = 0;
  param_1[0x53] = 0x8000000000;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x54;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x60] = 1;
  *(undefined4 *)(param_1 + 0x61) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x30c) = 1;
  param_1[0x62] = 0;
  param_1[99] = 0x3f0000003dcccccd;
  param_1[100] = 0x440000000;
  *(undefined4 *)(param_1 + 0x65) = 0x41200000;
  *(undefined1 *)((longlong)param_1 + 0x32c) = 0;
  *(undefined4 *)(param_1 + 0x66) = 0x42480000;
  param_1[0x69] = 0;
  param_1[0x6a] = 0x8000000000;
  return param_1;
}



// FUNCTION 149763544 FUN_149763544 body=38 status=ok
// SIG undefined FUN_149763544(void)

undefined8 FUN_149763544(undefined8 param_1,int param_2)

{
  FUN_1497637f8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14976356a FUN_14976356a body=38 status=ok
// SIG undefined FUN_14976356a(void)

undefined8 FUN_14976356a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FPlaneCutterDataflowNode_v2",1);
  return param_2;
}



// FUNCTION 149763590 FUN_149763590 body=38 status=ok
// SIG undefined FUN_149763590(void)

undefined8 FUN_149763590(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"PlaneCutter",1);
  return param_2;
}



// FUNCTION 1497635b6 FUN_1497635b6 body=38 status=ok
// SIG undefined FUN_1497635b6(void)

undefined8 FUN_1497635b6(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Fracture",1);
  return param_2;
}



// FUNCTION 1497635dc FUN_1497635dc body=32 status=ok
// SIG undefined FUN_1497635dc(void)

undefined8 FUN_1497635dc(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 1497635fc FUN_1497635fc body=123 status=ok
// SIG undefined FUN_1497635fc(void)

void FUN_1497635fc(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24f88 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24f88 = FUN_140002ddd(FUN_146753831,uVar1,L"PlaneCutterDataflowNode_v2");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24f88,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149763674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149763678 FUN_149763678 body=93 status=ok
// SIG undefined FUN_149763678(void)

void FUN_149763678(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24f88 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24f88 = FUN_140002ddd(FUN_146753831,uVar2,L"PlaneCutterDataflowNode_v2");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24f88,param_1);
  return;
}



// FUNCTION 1497636d6 FUN_1497636d6 body=55 status=ok
// SIG undefined FUN_1497636d6(void)

void FUN_1497636d6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24f88 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24f88 = FUN_140002ddd(FUN_146753831,uVar1,L"PlaneCutterDataflowNode_v2");
  }
  return;
}



// FUNCTION 14976370e FUN_14976370e body=233 status=ok
// SIG undefined FUN_14976370e(void)

ulonglong FUN_14976370e(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FPlaneCutterDataflowNode_v2",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_1497637a8;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1497637a8;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_1497637a8;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_1497637a8:
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



// FUNCTION 1497637f8 FUN_1497637f8 body=77 status=ok
// SIG undefined FUN_1497637f8(void)

void FUN_1497637f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be4ef90;
  if (param_1[0x69] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 149763846 FUN_149763846 body=192 status=ok
// SIG undefined FUN_149763846(void)

longlong FUN_149763846(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  uVar1 = *(undefined4 *)(param_2 + 0x24c);
  uVar2 = *(undefined4 *)(param_2 + 0x250);
  uVar3 = *(undefined4 *)(param_2 + 0x254);
  uVar4 = *(undefined4 *)(param_2 + 600);
  uVar5 = *(undefined4 *)(param_2 + 0x25c);
  uVar6 = *(undefined4 *)(param_2 + 0x260);
  uVar7 = *(undefined4 *)(param_2 + 0x264);
  uVar8 = *(undefined4 *)(param_2 + 0x268);
  uVar9 = *(undefined4 *)(param_2 + 0x26c);
  uVar10 = *(undefined4 *)(param_2 + 0x270);
  uVar11 = *(undefined4 *)(param_2 + 0x274);
  *(undefined4 *)(param_1 + 0x248) = *(undefined4 *)(param_2 + 0x248);
  *(undefined4 *)(param_1 + 0x24c) = uVar1;
  *(undefined4 *)(param_1 + 0x250) = uVar2;
  *(undefined4 *)(param_1 + 0x254) = uVar3;
  *(undefined4 *)(param_1 + 600) = uVar4;
  *(undefined4 *)(param_1 + 0x25c) = uVar5;
  *(undefined4 *)(param_1 + 0x260) = uVar6;
  *(undefined4 *)(param_1 + 0x264) = uVar7;
  *(undefined4 *)(param_1 + 0x268) = uVar8;
  *(undefined4 *)(param_1 + 0x26c) = uVar9;
  *(undefined4 *)(param_1 + 0x270) = uVar10;
  *(undefined4 *)(param_1 + 0x274) = uVar11;
  *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(param_2 + 0x278);
  if (param_1 == param_2) {
    memcpy((void *)(param_1 + 0x2a0),(void *)(param_2 + 0x2a0),0x94);
  }
  else {
    FUN_144a69486(param_1 + 0x280,param_2 + 0x280);
    memcpy((void *)(param_1 + 0x2a0),(void *)(param_2 + 0x2a0),0x94);
    FUN_144a69486(param_1 + 0x338,param_2 + 0x338);
  }
  return param_1;
}



// FUNCTION 149763908 FUN_149763908 body=85 status=ok
// SIG undefined FUN_149763908(void)

void FUN_149763908(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be4f220;
  FUN_1414db454(param_2 + 0x33);
  *(undefined4 *)(param_2 + 0x49) = 0x3f800000;
  param_2[0x4a] = 0x3ff0000000000000;
  param_2[0x4b] = 0x3ff0000000000000;
  param_2[0x4c] = 0x3ff0000000000000;
  return;
}



// FUNCTION 14976395e FUN_14976395e body=85 status=ok
// SIG undefined FUN_14976395e(void)

void FUN_14976395e(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be4f220;
  FUN_1414db454(param_2 + 0x33);
  *(undefined4 *)(param_2 + 0x49) = 0x3f800000;
  param_2[0x4a] = 0x3ff0000000000000;
  param_2[0x4b] = 0x3ff0000000000000;
  param_2[0x4c] = 0x3ff0000000000000;
  return;
}



// FUNCTION 1497639d8 FUN_1497639d8 body=113 status=ok
// SIG undefined FUN_1497639d8(void)

undefined1 FUN_1497639d8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    FUN_146ecd102(param_2 + 0x198,param_3 + 0x198);
    uVar1 = *(undefined4 *)(param_3 + 0x24c);
    uVar2 = *(undefined4 *)(param_3 + 0x250);
    uVar3 = *(undefined4 *)(param_3 + 0x254);
    uVar4 = *(undefined4 *)(param_3 + 600);
    uVar5 = *(undefined4 *)(param_3 + 0x25c);
    uVar6 = *(undefined4 *)(param_3 + 0x260);
    uVar7 = *(undefined4 *)(param_3 + 0x264);
    *(undefined4 *)(param_2 + 0x248) = *(undefined4 *)(param_3 + 0x248);
    *(undefined4 *)(param_2 + 0x24c) = uVar1;
    *(undefined4 *)(param_2 + 0x250) = uVar2;
    *(undefined4 *)(param_2 + 0x254) = uVar3;
    *(undefined4 *)(param_2 + 600) = uVar4;
    *(undefined4 *)(param_2 + 0x25c) = uVar5;
    *(undefined4 *)(param_2 + 0x260) = uVar6;
    *(undefined4 *)(param_2 + 0x264) = uVar7;
    param_2 = param_2 + 0x268;
    param_3 = param_3 + 0x268;
  }
  return 1;
}



// FUNCTION 149763a72 FUN_149763a72 body=59 status=ok
// SIG undefined FUN_149763a72(void)

undefined8 FUN_149763a72(longlong *param_1)

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



// FUNCTION 149763abe FUN_149763abe body=62 status=ok
// SIG undefined FUN_149763abe(void)

void FUN_149763abe(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x4d) == '\x01') {
    *param_2 = &PTR_FUN_14be4f220;
    FUN_14054b30a(param_2 + 0x33);
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x4d) = 0;
  }
  return;
}



// FUNCTION 149763b4a FUN_149763b4a body=63 status=ok
// SIG undefined FUN_149763b4a(void)

undefined8 * FUN_149763b4a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be4f220;
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149763b8a FUN_149763b8a body=38 status=ok
// SIG undefined FUN_149763b8a(void)

undefined8 FUN_149763b8a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FExplodedViewDataflowNode",1);
  return param_2;
}



// FUNCTION 149763bb0 FUN_149763bb0 body=38 status=ok
// SIG undefined FUN_149763bb0(void)

undefined8 FUN_149763bb0(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"ExplodedView",1);
  return param_2;
}



// FUNCTION 149763bd6 FUN_149763bd6 body=38 status=ok
// SIG undefined FUN_149763bd6(void)

undefined8 FUN_149763bd6(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Fracture|Utilities",1);
  return param_2;
}



// FUNCTION 149763bfc FUN_149763bfc body=32 status=ok
// SIG undefined FUN_149763bfc(void)

undefined8 FUN_149763bfc(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149763c1c FUN_149763c1c body=123 status=ok
// SIG undefined FUN_149763c1c(void)

void FUN_149763c1c(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24fa0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24fa0 = FUN_140002ddd(FUN_1467538c7,uVar1,L"ExplodedViewDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24fa0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149763c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149763c98 FUN_149763c98 body=93 status=ok
// SIG undefined FUN_149763c98(void)

void FUN_149763c98(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24fa0 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24fa0 = FUN_140002ddd(FUN_1467538c7,uVar2,L"ExplodedViewDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24fa0,param_1);
  return;
}



// FUNCTION 149763cf6 FUN_149763cf6 body=55 status=ok
// SIG undefined FUN_149763cf6(void)

void FUN_149763cf6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24fa0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24fa0 = FUN_140002ddd(FUN_1467538c7,uVar1,L"ExplodedViewDataflowNode");
  }
  return;
}



// FUNCTION 149763d2e FUN_149763d2e body=233 status=ok
// SIG undefined FUN_149763d2e(void)

ulonglong FUN_149763d2e(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FExplodedViewDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149763dc8;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149763dc8;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149763dc8;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149763dc8:
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



// FUNCTION 149763e18 FUN_149763e18 body=323 status=ok
// SIG undefined FUN_149763e18(void)

undefined8 * FUN_149763e18(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1400b22c2(local_80,"SurfaceRender");
  FUN_1446ddc76(&local_88,"FGeometryCollection",1);
  FUN_1446ddc76(&local_48,"Collection",1);
  local_98 = (undefined8 *)0x0;
  local_90 = 1;
  FUN_1401b309e(&local_98,1,0);
  *local_98 = local_48;
  FUN_1496fe870(&local_70,local_80,local_88,&local_98);
  *(undefined4 *)(param_2 + 1) = 1;
  FUN_1496fcee0(param_2,0);
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = 0;
  *puVar1 = local_70;
  local_70 = 0;
  *(undefined4 *)(puVar1 + 1) = (undefined4)local_68;
  *(undefined4 *)((longlong)puVar1 + 0xc) = local_68._4_4_;
  local_68 = 0;
  puVar1[2] = local_60;
  puVar1[3] = 0;
  puVar1[3] = local_58;
  local_58 = 0;
  *(undefined4 *)(puVar1 + 4) = (undefined4)local_50;
  *(undefined4 *)((longlong)puVar1 + 0x24) = local_50._4_4_;
  local_50 = 0;
  if (local_98 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149763f92 FUN_149763f92 body=63 status=ok
// SIG undefined FUN_149763f92(void)

undefined1 FUN_149763f92(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149764490(param_2,param_3);
    param_3 = param_3 + 0x308;
    param_2 = param_2 + 0x308;
  }
  return 1;
}



// FUNCTION 149763ffa FUN_149763ffa body=59 status=ok
// SIG undefined FUN_149763ffa(void)

undefined8 FUN_149763ffa(longlong *param_1)

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



// FUNCTION 149764046 FUN_149764046 body=40 status=ok
// SIG undefined FUN_149764046(void)

void FUN_149764046(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x308) == '\x01') {
    FUN_149764442(param_2);
    *(undefined1 *)(param_2 + 0x308) = 0;
  }
  return;
}



// FUNCTION 1497640bc FUN_1497640bc body=209 status=ok
// SIG undefined FUN_1497640bc(void)

undefined8 * FUN_1497640bc(undefined8 *param_1)

{
  FUN_146fc02b8();
  *param_1 = &PTR_FUN_14be4f4c0;
  FUN_1414db454(param_1 + 0x33);
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x29c) = 0x300000080;
  *(undefined1 **)((longlong)param_1 + 0x2a4) = &DAT_100000003;
  *(undefined8 *)((longlong)param_1 + 0x2ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b4) = 0x3f80000000000000;
  *(undefined1 *)((longlong)param_1 + 700) = 1;
  param_1[0x58] = 0;
  param_1[0x59] = 0x3f0000003dcccccd;
  param_1[0x5a] = 0x440000000;
  *(undefined4 *)(param_1 + 0x5b) = 0x41200000;
  *(undefined1 *)((longlong)param_1 + 0x2dc) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x42480000;
  param_1[0x5f] = 0;
  param_1[0x60] = 0x8000000000;
  return param_1;
}



// FUNCTION 14976418e FUN_14976418e body=38 status=ok
// SIG undefined FUN_14976418e(void)

undefined8 FUN_14976418e(undefined8 param_1,int param_2)

{
  FUN_149764442();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497641b4 FUN_1497641b4 body=38 status=ok
// SIG undefined FUN_1497641b4(void)

undefined8 FUN_1497641b4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FSliceCutterDataflowNode",1);
  return param_2;
}



// FUNCTION 1497641da FUN_1497641da body=38 status=ok
// SIG undefined FUN_1497641da(void)

undefined8 FUN_1497641da(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"SliceCutter",1);
  return param_2;
}



// FUNCTION 149764200 FUN_149764200 body=38 status=ok
// SIG undefined FUN_149764200(void)

undefined8 FUN_149764200(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Fracture",1);
  return param_2;
}



// FUNCTION 149764226 FUN_149764226 body=32 status=ok
// SIG undefined FUN_149764226(void)

undefined8 FUN_149764226(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149764246 FUN_149764246 body=123 status=ok
// SIG undefined FUN_149764246(void)

void FUN_149764246(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24fb8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24fb8 = FUN_140002ddd(FUN_14675395d,uVar1,L"SliceCutterDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24fb8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001497642be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 1497642c2 FUN_1497642c2 body=93 status=ok
// SIG undefined FUN_1497642c2(void)

void FUN_1497642c2(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24fb8 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24fb8 = FUN_140002ddd(FUN_14675395d,uVar2,L"SliceCutterDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24fb8,param_1);
  return;
}



// FUNCTION 149764320 FUN_149764320 body=55 status=ok
// SIG undefined FUN_149764320(void)

void FUN_149764320(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24fb8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24fb8 = FUN_140002ddd(FUN_14675395d,uVar1,L"SliceCutterDataflowNode");
  }
  return;
}



// FUNCTION 149764358 FUN_149764358 body=233 status=ok
// SIG undefined FUN_149764358(void)

ulonglong FUN_149764358(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FSliceCutterDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_1497643f2;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1497643f2;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_1497643f2;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_1497643f2:
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



// FUNCTION 149764442 FUN_149764442 body=77 status=ok
// SIG undefined FUN_149764442(void)

void FUN_149764442(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be4f4c0;
  if (param_1[0x5f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 149764490 FUN_149764490 body=218 status=ok
// SIG undefined FUN_149764490(void)

longlong FUN_149764490(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  uVar1 = *(undefined4 *)(param_2 + 0x24c);
  uVar2 = *(undefined4 *)(param_2 + 0x250);
  uVar3 = *(undefined4 *)(param_2 + 0x254);
  uVar4 = *(undefined4 *)(param_2 + 600);
  uVar5 = *(undefined4 *)(param_2 + 0x25c);
  uVar6 = *(undefined4 *)(param_2 + 0x260);
  uVar7 = *(undefined4 *)(param_2 + 0x264);
  uVar8 = *(undefined4 *)(param_2 + 0x268);
  uVar9 = *(undefined4 *)(param_2 + 0x26c);
  uVar10 = *(undefined4 *)(param_2 + 0x270);
  uVar11 = *(undefined4 *)(param_2 + 0x274);
  *(undefined4 *)(param_1 + 0x248) = *(undefined4 *)(param_2 + 0x248);
  *(undefined4 *)(param_1 + 0x24c) = uVar1;
  *(undefined4 *)(param_1 + 0x250) = uVar2;
  *(undefined4 *)(param_1 + 0x254) = uVar3;
  *(undefined4 *)(param_1 + 600) = uVar4;
  *(undefined4 *)(param_1 + 0x25c) = uVar5;
  *(undefined4 *)(param_1 + 0x260) = uVar6;
  *(undefined4 *)(param_1 + 0x264) = uVar7;
  *(undefined4 *)(param_1 + 0x268) = uVar8;
  *(undefined4 *)(param_1 + 0x26c) = uVar9;
  *(undefined4 *)(param_1 + 0x270) = uVar10;
  *(undefined4 *)(param_1 + 0x274) = uVar11;
  *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(param_2 + 0x278);
  if (param_1 == param_2) {
    puVar13 = (undefined8 *)(param_2 + 0x2a0);
    puVar14 = (undefined8 *)(param_1 + 0x2a0);
    for (lVar12 = 8; lVar12 != 0; lVar12 = lVar12 + -1) {
      *puVar14 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar14 = puVar14 + 1;
    }
    *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(param_2 + 0x2e0);
  }
  else {
    FUN_144a69486(param_1 + 0x280,param_2 + 0x280);
    puVar13 = (undefined8 *)(param_2 + 0x2a0);
    puVar14 = (undefined8 *)(param_1 + 0x2a0);
    for (lVar12 = 8; lVar12 != 0; lVar12 = lVar12 + -1) {
      *puVar14 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar14 = puVar14 + 1;
    }
    *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(param_2 + 0x2e0);
    FUN_144a69486(param_1 + 0x2e8,param_2 + 0x2e8);
  }
  return param_1;
}



// FUNCTION 1497645a0 FUN_1497645a0 body=63 status=ok
// SIG undefined FUN_1497645a0(void)

undefined1 FUN_1497645a0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149764ab6(param_2,param_3);
    param_3 = param_3 + 0x360;
    param_2 = param_2 + 0x360;
  }
  return 1;
}



// FUNCTION 149764608 FUN_149764608 body=59 status=ok
// SIG undefined FUN_149764608(void)

undefined8 FUN_149764608(longlong *param_1)

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



// FUNCTION 149764654 FUN_149764654 body=40 status=ok
// SIG undefined FUN_149764654(void)

void FUN_149764654(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x360) == '\x01') {
    FUN_149764a68(param_2);
    *(undefined1 *)(param_2 + 0x360) = 0;
  }
  return;
}



// FUNCTION 1497646ca FUN_1497646ca body=234 status=ok
// SIG undefined FUN_1497646ca(void)

undefined8 * FUN_1497646ca(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_146fc02b8();
  *param_1 = &PTR_FUN_14be4f760;
  FUN_1414db454(param_1 + 0x33);
  param_1[0x52] = 0;
  param_1[0x53] = 0x8000000000;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x54;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x304) = 0x4264000043420000;
  *(undefined8 *)((longlong)param_1 + 0x30c) = 0x42b80000;
  *(undefined4 *)((longlong)param_1 + 0x314) = 0x3f800000;
  *(undefined1 *)(param_1 + 99) = 1;
  *(undefined8 *)((longlong)param_1 + 0x31c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x324) = 0x3f0000003dcccccd;
  *(undefined8 *)((longlong)param_1 + 0x32c) = 0x440000000;
  *(undefined4 *)((longlong)param_1 + 0x334) = 0x41200000;
  *(undefined1 *)(param_1 + 0x67) = 0;
  *(undefined4 *)((longlong)param_1 + 0x33c) = 0x42480000;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0x8000000000;
  return param_1;
}



// FUNCTION 1497647b4 FUN_1497647b4 body=38 status=ok
// SIG undefined FUN_1497647b4(void)

undefined8 FUN_1497647b4(undefined8 param_1,int param_2)

{
  FUN_149764a68();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497647da FUN_1497647da body=38 status=ok
// SIG undefined FUN_1497647da(void)

undefined8 FUN_1497647da(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FBrickCutterDataflowNode",1);
  return param_2;
}



// FUNCTION 149764800 FUN_149764800 body=38 status=ok
// SIG undefined FUN_149764800(void)

undefined8 FUN_149764800(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"BrickCutter",1);
  return param_2;
}



// FUNCTION 149764826 FUN_149764826 body=38 status=ok
// SIG undefined FUN_149764826(void)

undefined8 FUN_149764826(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Fracture",1);
  return param_2;
}



// FUNCTION 14976484c FUN_14976484c body=32 status=ok
// SIG undefined FUN_14976484c(void)

undefined8 FUN_14976484c(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14976486c FUN_14976486c body=123 status=ok
// SIG undefined FUN_14976486c(void)

void FUN_14976486c(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24fd0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24fd0 = FUN_140002ddd(FUN_1467539f3,uVar1,L"BrickCutterDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24fd0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001497648e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 1497648e8 FUN_1497648e8 body=93 status=ok
// SIG undefined FUN_1497648e8(void)

void FUN_1497648e8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24fd0 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24fd0 = FUN_140002ddd(FUN_1467539f3,uVar2,L"BrickCutterDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24fd0,param_1);
  return;
}



// FUNCTION 149764946 FUN_149764946 body=55 status=ok
// SIG undefined FUN_149764946(void)

void FUN_149764946(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24fd0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24fd0 = FUN_140002ddd(FUN_1467539f3,uVar1,L"BrickCutterDataflowNode");
  }
  return;
}



// FUNCTION 14976497e FUN_14976497e body=233 status=ok
// SIG undefined FUN_14976497e(void)

ulonglong FUN_14976497e(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FBrickCutterDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149764a18;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149764a18;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149764a18;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149764a18:
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



// FUNCTION 149764a68 FUN_149764a68 body=77 status=ok
// SIG undefined FUN_149764a68(void)

void FUN_149764a68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be4f760;
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 149764ab6 FUN_149764ab6 body=192 status=ok
// SIG undefined FUN_149764ab6(void)

longlong FUN_149764ab6(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  uVar1 = *(undefined4 *)(param_2 + 0x24c);
  uVar2 = *(undefined4 *)(param_2 + 0x250);
  uVar3 = *(undefined4 *)(param_2 + 0x254);
  uVar4 = *(undefined4 *)(param_2 + 600);
  uVar5 = *(undefined4 *)(param_2 + 0x25c);
  uVar6 = *(undefined4 *)(param_2 + 0x260);
  uVar7 = *(undefined4 *)(param_2 + 0x264);
  uVar8 = *(undefined4 *)(param_2 + 0x268);
  uVar9 = *(undefined4 *)(param_2 + 0x26c);
  uVar10 = *(undefined4 *)(param_2 + 0x270);
  uVar11 = *(undefined4 *)(param_2 + 0x274);
  *(undefined4 *)(param_1 + 0x248) = *(undefined4 *)(param_2 + 0x248);
  *(undefined4 *)(param_1 + 0x24c) = uVar1;
  *(undefined4 *)(param_1 + 0x250) = uVar2;
  *(undefined4 *)(param_1 + 0x254) = uVar3;
  *(undefined4 *)(param_1 + 600) = uVar4;
  *(undefined4 *)(param_1 + 0x25c) = uVar5;
  *(undefined4 *)(param_1 + 0x260) = uVar6;
  *(undefined4 *)(param_1 + 0x264) = uVar7;
  *(undefined4 *)(param_1 + 0x268) = uVar8;
  *(undefined4 *)(param_1 + 0x26c) = uVar9;
  *(undefined4 *)(param_1 + 0x270) = uVar10;
  *(undefined4 *)(param_1 + 0x274) = uVar11;
  *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(param_2 + 0x278);
  if (param_1 == param_2) {
    memcpy((void *)(param_1 + 0x2a0),(void *)(param_2 + 0x2a0),0xa0);
  }
  else {
    FUN_144a69486(param_1 + 0x280,param_2 + 0x280);
    memcpy((void *)(param_1 + 0x2a0),(void *)(param_2 + 0x2a0),0xa0);
    FUN_144a69486(param_1 + 0x340,param_2 + 0x340);
  }
  return param_1;
}



// FUNCTION 149764bac FUN_149764bac body=63 status=ok
// SIG undefined FUN_149764bac(void)

undefined1 FUN_149764bac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1497650dc(param_2,param_3);
    param_3 = param_3 + 0x370;
    param_2 = param_2 + 0x370;
  }
  return 1;
}



// FUNCTION 149764c14 FUN_149764c14 body=59 status=ok
// SIG undefined FUN_149764c14(void)

undefined8 FUN_149764c14(longlong *param_1)

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


