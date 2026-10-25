// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14865fe4c FUN_14865fe4c body=25 status=ok
// SIG undefined FUN_14865fe4c(void)

undefined8 FUN_14865fe4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14865fe66(param_3);
  return param_2;
}



// FUNCTION 14865fe66 FUN_14865fe66 body=256 status=ok
// SIG undefined FUN_14865fe66(void)

undefined8 FUN_14865fe66(float *param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] == 0.0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  if (DAT_14cb59340 == 0) {
    uVar2 = FUN_140325e72();
    DAT_14cb59340 = FUN_140002ddd(FUN_1464c61bb,uVar2,L"GbxAnimNode_BlendListByIntRange");
  }
  local_48 = *(undefined8 *)(DAT_14cb59340 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = local_58;
  if (local_50 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14865ff68 FUN_14865ff68 body=108 status=ok
// SIG undefined FUN_14865ff68(void)

longlong FUN_14865ff68(longlong param_1,longlong param_2)

{
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  FUN_1404306dc(param_1 + 0x18,param_2 + 0x18);
  FUN_1408cbbee(param_1 + 0x28,param_2 + 0x28);
  FUN_140472cde(param_1 + 0x38,param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  FUN_14865ffd4(param_1 + 0x58,param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  return param_1;
}



// FUNCTION 14865ffd4 FUN_14865ffd4 body=88 status=ok
// SIG undefined FUN_14865ffd4(void)

undefined8 * FUN_14865ffd4(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14866002c(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 14866002c FUN_14866002c body=98 status=ok
// SIG undefined FUN_14866002c(void)

void FUN_14866002c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148660090 FUN_148660090 body=58 status=ok
// SIG undefined FUN_148660090(void)

void FUN_148660090(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xb0);
  FUN_1474c556e(param_2);
  *param_2 = &PTR_FUN_14b0a1f40;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  return;
}



// FUNCTION 1486600ca FUN_1486600ca body=42 status=ok
// SIG undefined FUN_1486600ca(void)

void FUN_1486600ca(undefined8 param_1,undefined8 *param_2)

{
  FUN_1474c556e(param_2);
  *param_2 = &PTR_FUN_14b0a1f40;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  return;
}



// FUNCTION 148660118 FUN_148660118 body=100 status=ok
// SIG undefined FUN_148660118(void)

undefined8 FUN_148660118(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14179807a(param_2,param_3);
    *(undefined4 *)(param_2 + 0x98) = *(undefined4 *)(param_3 + 0x98);
    *(undefined1 *)(param_2 + 0x9c) = *(undefined1 *)(param_3 + 0x9c);
    uVar1 = *(undefined4 *)(param_3 + 0xa4);
    uVar2 = *(undefined4 *)(param_3 + 0xa8);
    uVar3 = *(undefined4 *)(param_3 + 0xac);
    *(undefined4 *)(param_2 + 0xa0) = *(undefined4 *)(param_3 + 0xa0);
    *(undefined4 *)(param_2 + 0xa4) = uVar1;
    *(undefined4 *)(param_2 + 0xa8) = uVar2;
    *(undefined4 *)(param_2 + 0xac) = uVar3;
    param_2 = param_2 + 0xb0;
    param_3 = param_3 + 0xb0;
  }
  return 1;
}



// FUNCTION 1486601a4 FUN_1486601a4 body=59 status=ok
// SIG undefined FUN_1486601a4(void)

undefined8 FUN_1486601a4(longlong *param_1)

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



// FUNCTION 1486601f0 FUN_1486601f0 body=38 status=ok
// SIG undefined FUN_1486601f0(void)

void FUN_1486601f0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    FUN_140f5e6f8(param_2);
    *(undefined1 *)(param_2 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 148660264 FUN_148660264 body=38 status=ok
// SIG undefined FUN_148660264(void)

undefined8 FUN_148660264(undefined8 param_1,int param_2)

{
  FUN_140f5e6f8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14866028a FUN_14866028a body=55 status=ok
// SIG undefined FUN_14866028a(void)

void FUN_14866028a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb59358 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb59358 = FUN_140002ddd(FUN_1464c6251,uVar1,L"GbxAnimNode_BlendSpaceEvaluator");
  }
  return;
}



// FUNCTION 1486602c2 FUN_1486602c2 body=143 status=ok
// SIG undefined FUN_1486602c2(void)

void FUN_1486602c2(undefined8 param_1,undefined8 *param_2)

{
  FUN_141315ec0(param_2);
  *param_2 = &PTR_FUN_14b0a5020;
  *(undefined1 *)(param_2 + 0x13) = 0;
  param_2[0x14] = 0x47efffffe0000000;
  param_2[0x15] = 0x47efffffe0000000;
  param_2[0x16] = 0x47efffffe0000000;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  *(undefined4 *)(param_2 + 0x1a) = 0x3f800000;
  *(undefined2 *)(param_2 + 0x1b) = 0x101;
  *(undefined4 *)((longlong)param_2 + 0xdc) = 0;
  *(undefined1 *)(param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0xe4) = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  *(undefined1 *)(param_2 + 0x20) = 0;
  return;
}



// FUNCTION 148660390 FUN_148660390 body=59 status=ok
// SIG undefined FUN_148660390(void)

undefined8 FUN_148660390(longlong *param_1)

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



// FUNCTION 1486603dc FUN_1486603dc body=38 status=ok
// SIG undefined FUN_1486603dc(void)

void FUN_1486603dc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x108) == '\x01') {
    FUN_140f5e6f8(param_2);
    *(undefined1 *)(param_2 + 0x108) = 0;
  }
  return;
}



// FUNCTION 148660450 FUN_148660450 body=55 status=ok
// SIG undefined FUN_148660450(void)

void FUN_148660450(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb59380 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb59380 = FUN_140002ddd(FUN_1464c62e7,uVar1,L"GbxAnimNode_BlendSpacePlayer");
  }
  return;
}



// FUNCTION 148660528 FUN_148660528 body=91 status=ok
// SIG undefined FUN_148660528(void)

undefined8 FUN_148660528(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
    do {
      *(undefined2 *)(param_2 + -0x58) = *(undefined2 *)(param_3 + -0x58);
      *(undefined8 *)(param_2 + -0x60) = *(undefined8 *)(param_3 + -0x60);
      FUN_140cae46a(param_2 + -0x50,param_3 + -0x50);
      FUN_144756208(param_2,param_3);
      param_3 = param_3 + 0x78;
      param_2 = param_2 + 0x78;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486605ac FUN_1486605ac body=59 status=ok
// SIG undefined FUN_1486605ac(void)

undefined8 FUN_1486605ac(longlong *param_1)

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



// FUNCTION 1486605f2 FUN_1486605f2 body=34 status=ok
// SIG undefined FUN_1486605f2(void)

void FUN_1486605f2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_1486606c4(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 148660662 FUN_148660662 body=38 status=ok
// SIG undefined FUN_148660662(void)

undefined8 FUN_148660662(undefined8 param_1,int param_2)

{
  FUN_1486606c4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148660688 FUN_148660688 body=55 status=ok
// SIG undefined FUN_148660688(void)

void FUN_148660688(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb59398 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb59398 = FUN_140002ddd(FUN_1464c637d,uVar1,L"GbxAnimNode_CopyParentTransforms");
  }
  return;
}



// FUNCTION 1486606c4 FUN_1486606c4 body=70 status=ok
// SIG undefined FUN_1486606c4(void)

void FUN_1486606c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0a2410;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(param_1 + 3);
  return;
}



// FUNCTION 14866070c FUN_14866070c body=53 status=ok
// SIG undefined FUN_14866070c(void)

void FUN_14866070c(undefined8 param_1,undefined8 *param_2)

{
  FUN_145c1d338(param_2);
  *param_2 = &PTR_FUN_14b0a2660;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  param_2[0x2f] = 0;
  return;
}



// FUNCTION 148660780 FUN_148660780 body=59 status=ok
// SIG undefined FUN_148660780(void)

undefined8 FUN_148660780(longlong *param_1)

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



// FUNCTION 1486607cc FUN_1486607cc body=40 status=ok
// SIG undefined FUN_1486607cc(void)

void FUN_1486607cc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x180) == '\x01') {
    FUN_145956d24(param_2);
    *(undefined1 *)(param_2 + 0x180) = 0;
  }
  return;
}



// FUNCTION 148660842 FUN_148660842 body=57 status=ok
// SIG undefined FUN_148660842(void)

void FUN_148660842(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb593b0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb593b0 = FUN_140002ddd(FUN_1464c6413,uVar1,L"GbxAnimNode_CopyPoseFromMesh");
  }
  return;
}



// FUNCTION 1486608c6 FUN_1486608c6 body=59 status=ok
// SIG undefined FUN_1486608c6(void)

undefined8 FUN_1486608c6(longlong *param_1)

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



// FUNCTION 148660912 FUN_148660912 body=38 status=ok
// SIG undefined FUN_148660912(void)

void FUN_148660912(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x370) == '\x01') {
    FUN_148660988(param_2);
    *(undefined1 *)(param_2 + 0x370) = 0;
  }
  return;
}



// FUNCTION 148660988 FUN_148660988 body=71 status=ok
// SIG undefined FUN_148660988(void)

void FUN_148660988(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0a28b0;
  if (*(char *)(param_1 + 0x68) == '\x01') {
    *(undefined1 *)(param_1 + 0x68) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x314) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x314) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x30c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x30c) = 0;
    FUN_141798144();
    return;
  }
  *param_1 = &PTR_FUN_14a42e670;
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x1f) == '\x01') {
    if (param_1[0x19] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x1f) = 0;
  }
  if (*(char *)((longlong)param_1 + 100) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 100) = 0;
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148660aac FUN_148660aac body=59 status=ok
// SIG undefined FUN_148660aac(void)

undefined8 FUN_148660aac(longlong *param_1)

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



// FUNCTION 148660af8 FUN_148660af8 body=38 status=ok
// SIG undefined FUN_148660af8(void)

void FUN_148660af8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x148) == '\x01') {
    FUN_140dd08f8(param_2);
    *(undefined1 *)(param_2 + 0x148) = 0;
  }
  return;
}



// FUNCTION 148660b6c FUN_148660b6c body=55 status=ok
// SIG undefined FUN_148660b6c(void)

void FUN_148660b6c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb59420 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb59420 = FUN_140002ddd(FUN_1464c653f,uVar1,L"GbxAnimNode_LayeredBoneSetBlend");
  }
  return;
}



// FUNCTION 148660ba4 FUN_148660ba4 body=115 status=ok
// SIG undefined FUN_148660ba4(void)

void FUN_148660ba4(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc,4);
    iVar2 = (int)(uVar1 / 0xc);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xc,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148660c5c FUN_148660c5c body=59 status=ok
// SIG undefined FUN_148660c5c(void)

undefined8 FUN_148660c5c(longlong *param_1)

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



// FUNCTION 148660ca8 FUN_148660ca8 body=38 status=ok
// SIG undefined FUN_148660ca8(void)

void FUN_148660ca8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1e8) == '\x01') {
    FUN_140f5e5d2(param_2);
    *(undefined1 *)(param_2 + 0x1e8) = 0;
  }
  return;
}



// FUNCTION 148660e24 FUN_148660e24 body=55 status=ok
// SIG undefined FUN_148660e24(void)

void FUN_148660e24(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb59438 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb59438 = FUN_140002ddd(FUN_1464c65d5,uVar1,L"GbxAnimNode_Locomotion");
  }
  return;
}



// FUNCTION 148660e60 FUN_148660e60 body=98 status=ok
// SIG undefined FUN_148660e60(void)

void FUN_148660e60(longlong param_1,int param_2,int param_3)

{
  int extraout_var;
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    FUN_144a3809e((longlong)param_2 << 8,8);
    iVar1 = 0x7fffffff;
    if (param_2 <= extraout_var) {
      iVar1 = extraout_var;
    }
  }
  if (param_3 < iVar1) {
    FUN_1446f8d3c(param_1,0,iVar1,0x100,8);
    param_3 = iVar1;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148660ec2 FUN_148660ec2 body=105 status=ok
// SIG undefined FUN_148660ec2(void)

void FUN_148660ec2(undefined8 *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148660f2c(param_1,param_2);
    *param_1 = &PTR_FUN_14b0a4df0;
    puVar2 = (undefined8 *)(param_2 + 0xa0);
    puVar3 = param_1 + 0x14;
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x100;
  }
  return;
}



// FUNCTION 148660f2c FUN_148660f2c body=197 status=ok
// SIG undefined FUN_148660f2c(void)

undefined8 * FUN_148660f2c(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  *param_1 = &PTR_FUN_14a42d7f0;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 0x10);
  *param_1 = &PTR_FUN_14a7bb2d0;
  uVar2 = *(undefined4 *)(param_2 + 0x1c);
  uVar3 = *(undefined4 *)(param_2 + 0x20);
  uVar4 = *(undefined4 *)(param_2 + 0x24);
  uVar5 = *(undefined4 *)(param_2 + 0x28);
  uVar6 = *(undefined4 *)(param_2 + 0x2c);
  uVar7 = *(undefined4 *)(param_2 + 0x30);
  uVar8 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 4) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar4;
  *(undefined4 *)(param_1 + 5) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar6;
  *(undefined4 *)(param_1 + 6) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar8;
  *(undefined8 *)((longlong)param_1 + 0x35) = *(undefined8 *)(param_2 + 0x35);
  *param_1 = &PTR_FUN_14a7bccc0;
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *param_1 = &PTR_FUN_14a7be320;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0x50);
  param_1[9] = *(undefined8 *)(param_2 + 0x48);
  lVar1 = *(longlong *)(param_2 + 0x58);
  param_1[0xb] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  uVar9 = *(undefined8 *)(param_2 + 0x60);
  uVar10 = *(undefined8 *)(param_2 + 0x68);
  uVar11 = *(undefined8 *)(param_2 + 0x70);
  uVar12 = *(undefined8 *)(param_2 + 0x78);
  uVar13 = *(undefined8 *)(param_2 + 0x80);
  uVar14 = *(undefined8 *)(param_2 + 0x88);
  uVar15 = *(undefined8 *)(param_2 + 0x92);
  *(undefined8 *)((longlong)param_1 + 0x8a) = *(undefined8 *)(param_2 + 0x8a);
  *(undefined8 *)((longlong)param_1 + 0x92) = uVar15;
  param_1[0x10] = uVar13;
  param_1[0x11] = uVar14;
  param_1[0xe] = uVar11;
  param_1[0xf] = uVar12;
  param_1[0xc] = uVar9;
  param_1[0xd] = uVar10;
  return param_1;
}



// FUNCTION 148660ff8 FUN_148660ff8 body=118 status=ok
// SIG undefined FUN_148660ff8(void)

void FUN_148660ff8(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x108,8);
    iVar2 = (int)(uVar1 / 0x108);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x108,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14866106e FUN_14866106e body=119 status=ok
// SIG undefined FUN_14866106e(void)

void FUN_14866106e(undefined8 *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1486610e6(param_1,param_2);
    *param_1 = &PTR_FUN_14b0a5020;
    puVar2 = (undefined8 *)(param_2 + 0x98);
    puVar3 = param_1 + 0x13;
    for (lVar1 = 0xd; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x100);
    param_1 = param_1 + 0x21;
    param_2 = param_2 + 0x108;
  }
  return;
}



// FUNCTION 1486610e6 FUN_1486610e6 body=94 status=ok
// SIG undefined FUN_1486610e6(void)

undefined8 * FUN_1486610e6(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  FUN_148661144();
  *param_1 = &PTR_FUN_14a42de10;
  uVar2 = *(undefined4 *)(param_2 + 0x70);
  uVar3 = *(undefined4 *)(param_2 + 0x74);
  uVar4 = *(undefined4 *)(param_2 + 0x78);
  uVar5 = *(undefined4 *)(param_2 + 0x7c);
  uVar6 = *(undefined4 *)(param_2 + 0x84);
  uVar7 = *(undefined4 *)(param_2 + 0x88);
  uVar8 = *(undefined4 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar6;
  *(undefined4 *)(param_1 + 0x11) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar8;
  *(undefined4 *)(param_1 + 0xe) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar3;
  *(undefined4 *)(param_1 + 0xf) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar5;
  lVar1 = *(longlong *)(param_2 + 0x90);
  param_1[0x12] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  return param_1;
}



// FUNCTION 148661144 FUN_148661144 body=212 status=ok
// SIG undefined FUN_148661144(void)

undefined8 * FUN_148661144(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  *param_1 = &PTR_FUN_14a42d7f0;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 0x10);
  *param_1 = &PTR_FUN_14a7bb2d0;
  uVar4 = *(undefined4 *)(param_2 + 0x1c);
  uVar5 = *(undefined4 *)(param_2 + 0x20);
  uVar6 = *(undefined4 *)(param_2 + 0x24);
  uVar7 = *(undefined4 *)(param_2 + 0x28);
  uVar8 = *(undefined4 *)(param_2 + 0x2c);
  uVar9 = *(undefined4 *)(param_2 + 0x30);
  uVar10 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  *(undefined4 *)(param_1 + 4) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar6;
  *(undefined4 *)(param_1 + 5) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar8;
  *(undefined4 *)(param_1 + 6) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar10;
  *(undefined8 *)((longlong)param_1 + 0x35) = *(undefined8 *)(param_2 + 0x35);
  *param_1 = &PTR_FUN_14a42e020;
  FUN_148661218(param_1 + 8,param_2 + 0x40);
  param_1[10] = 0;
  iVar1 = *(int *)(param_2 + 0x58);
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  *(int *)(param_1 + 0xb) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_140276ede(param_1 + 10,iVar1,0);
    FUN_1448d848f(param_1[10],uVar2,iVar1);
  }
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x60);
  lVar3 = *(longlong *)(param_2 + 0x68);
  param_1[0xd] = lVar3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  return param_1;
}



// FUNCTION 148661218 FUN_148661218 body=77 status=ok
// SIG undefined FUN_148661218(void)

undefined8 * FUN_148661218(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1474d0c00(param_1,iVar1,0);
    FUN_1474d0c6f(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1486612d8 FUN_1486612d8 body=127 status=ok
// SIG undefined FUN_1486612d8(void)

undefined1 FUN_1486612d8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (param_4 != 0) {
    lVar8 = 0x28;
    bVar6 = DAT_14c950c29;
    do {
      *(undefined2 *)(param_2 + -0x18 + lVar8) = *(undefined2 *)(param_3 + -0x18 + lVar8);
      *(undefined8 *)(param_2 + -0x20 + lVar8) = *(undefined8 *)(param_3 + -0x20 + lVar8);
      puVar1 = (undefined4 *)(param_3 + -0x10 + lVar8);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + -0x10 + lVar8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      lVar7 = *(longlong *)(param_3 + lVar8);
      if ((bVar6 & 1) != 0) {
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_14689c22e();
          lVar7 = *(longlong *)(param_3 + lVar8);
          bVar6 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar8) = lVar7;
      lVar8 = lVar8 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148661380 FUN_148661380 body=59 status=ok
// SIG undefined FUN_148661380(void)

undefined8 FUN_148661380(longlong *param_1)

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



// FUNCTION 148661420 FUN_148661420 body=29 status=ok
// SIG undefined FUN_148661420(void)

undefined8 FUN_148661420(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14866143e FUN_14866143e body=55 status=ok
// SIG undefined FUN_14866143e(void)

void FUN_14866143e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb59450 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb59450 = FUN_140002ddd(FUN_1464c666b,uVar1,L"GbxAnimNode_Mirror");
  }
  return;
}



// FUNCTION 1486614aa FUN_1486614aa body=71 status=ok
// SIG undefined FUN_1486614aa(void)

undefined8 FUN_1486614aa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0x10;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x2b4);
      lVar1 = lVar1 + 0x2d0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14866151a FUN_14866151a body=59 status=ok
// SIG undefined FUN_14866151a(void)

undefined8 FUN_14866151a(longlong *param_1)

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



// FUNCTION 1486615b6 FUN_1486615b6 body=76 status=ok
// SIG undefined FUN_1486615b6(void)

void FUN_1486615b6(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x100);
  FUN_140c83e26(param_2);
  *param_2 = &PTR_FUN_14b0a0e90;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0x200000000;
  return;
}



// FUNCTION 148661602 FUN_148661602 body=60 status=ok
// SIG undefined FUN_148661602(void)

void FUN_148661602(undefined8 param_1,undefined8 *param_2)

{
  FUN_140c83e26(param_2);
  *param_2 = &PTR_FUN_14b0a0e90;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0x200000000;
  return;
}



// FUNCTION 148661662 FUN_148661662 body=63 status=ok
// SIG undefined FUN_148661662(void)

undefined1 FUN_148661662(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140e7c0e8(param_2,param_3);
    param_3 = param_3 + 0x100;
    param_2 = param_2 + 0x100;
  }
  return 1;
}



// FUNCTION 1486616ca FUN_1486616ca body=59 status=ok
// SIG undefined FUN_1486616ca(void)

undefined8 FUN_1486616ca(longlong *param_1)

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



// FUNCTION 148661716 FUN_148661716 body=38 status=ok
// SIG undefined FUN_148661716(void)

void FUN_148661716(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x100) == '\x01') {
    FUN_14184a80a(param_2);
    *(undefined1 *)(param_2 + 0x100) = 0;
  }
  return;
}



// FUNCTION 1486617e8 FUN_1486617e8 body=54 status=ok
// SIG undefined FUN_1486617e8(void)

undefined1 FUN_1486617e8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486618e6(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 148661846 FUN_148661846 body=59 status=ok
// SIG undefined FUN_148661846(void)

undefined8 FUN_148661846(longlong *param_1)

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



// FUNCTION 1486618e6 FUN_1486618e6 body=120 status=ok
// SIG undefined FUN_1486618e6(void)

undefined8 * FUN_1486618e6(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *param_1 = *param_2;
  lVar2 = param_2[1];
  if (DAT_14c950c29 == '\x01') {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_14689c22e();
      lVar2 = param_2[1];
    }
  }
  param_1[1] = lVar2;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x1d);
  param_1[3] = param_2[3];
  *(undefined8 *)((longlong)param_1 + 0x1d) = uVar1;
  FUN_140e78ece(param_1 + 5,param_2 + 5);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  FUN_140e78ece(param_1 + 10,param_2 + 10);
  return param_1;
}



// FUNCTION 1486619a6 FUN_1486619a6 body=59 status=ok
// SIG undefined FUN_1486619a6(void)

undefined8 FUN_1486619a6(longlong *param_1)

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



// FUNCTION 1486619f2 FUN_1486619f2 body=38 status=ok
// SIG undefined FUN_1486619f2(void)

void FUN_1486619f2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2c8) == '\x01') {
    FUN_148661a68(param_2);
    *(undefined1 *)(param_2 + 0x2c8) = 0;
  }
  return;
}



// FUNCTION 148661a68 FUN_148661a68 body=153 status=ok
// SIG undefined FUN_148661a68(void)

void FUN_148661a68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0a4bc0;
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a42e670;
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x1f) == '\x01') {
    if (param_1[0x19] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x1f) = 0;
  }
  if (*(char *)((longlong)param_1 + 100) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 100) = 0;
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148661b02 FUN_148661b02 body=55 status=ok
// SIG undefined FUN_148661b02(void)

void FUN_148661b02(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb594b0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb594b0 = FUN_140002ddd(FUN_1464c6867,uVar1,L"GbxAnimNode_RandomOverride");
  }
  return;
}



// FUNCTION 148661b3a FUN_148661b3a body=106 status=ok
// SIG undefined FUN_148661b3a(void)

void FUN_148661b3a(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 1;
  param_2[3] = 0x3f800000;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined1 **)((longlong)param_2 + 0x24) = &DAT_3f8000003f800000;
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 7) = 0x3e4ccccd;
  *(undefined8 *)((longlong)param_2 + 0x4c) = 0x3f80000000000000;
  *(undefined1 *)((longlong)param_2 + 0x54) = 0;
  FUN_1404163bc(param_2 + 6);
  *(undefined1 *)(param_2 + 0xc) = 0;
  return;
}



// FUNCTION 148661ba4 FUN_148661ba4 body=106 status=ok
// SIG undefined FUN_148661ba4(void)

void FUN_148661ba4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 1;
  param_2[3] = 0x3f800000;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined1 **)((longlong)param_2 + 0x24) = &DAT_3f8000003f800000;
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 7) = 0x3e4ccccd;
  *(undefined8 *)((longlong)param_2 + 0x4c) = 0x3f80000000000000;
  *(undefined1 *)((longlong)param_2 + 0x54) = 0;
  FUN_1404163bc(param_2 + 6);
  *(undefined1 *)(param_2 + 0xc) = 0;
  return;
}



// FUNCTION 148661c26 FUN_148661c26 body=54 status=ok
// SIG undefined FUN_148661c26(void)

undefined1 FUN_148661c26(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148661d24(param_2,param_3);
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return 1;
}



// FUNCTION 148661c84 FUN_148661c84 body=59 status=ok
// SIG undefined FUN_148661c84(void)

undefined8 FUN_148661c84(longlong *param_1)

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



// FUNCTION 148661d24 FUN_148661d24 body=148 status=ok
// SIG undefined FUN_148661d24(void)

undefined8 * FUN_148661d24(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  longlong lVar8;
  
  *param_1 = *param_2;
  lVar8 = param_2[1];
  if (DAT_14c950c29 == 1) {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_14689c22e();
      lVar8 = param_2[1];
    }
  }
  bVar7 = DAT_14c950c29;
  param_1[1] = lVar8;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 4);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
  lVar8 = param_2[6];
  if ((bVar7 & 1) != 0) {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_14689c22e();
      lVar8 = param_2[6];
    }
  }
  param_1[6] = lVar8;
  uVar4 = param_2[8];
  uVar5 = param_2[9];
  uVar6 = param_2[10];
  param_1[7] = param_2[7];
  param_1[8] = uVar4;
  param_1[9] = uVar5;
  param_1[10] = uVar6;
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  return param_1;
}



// FUNCTION 148661dee FUN_148661dee body=63 status=ok
// SIG undefined FUN_148661dee(void)

undefined1 FUN_148661dee(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148661f18(param_2,param_3);
    param_3 = param_3 + 0x138;
    param_2 = param_2 + 0x138;
  }
  return 1;
}



// FUNCTION 148661e56 FUN_148661e56 body=59 status=ok
// SIG undefined FUN_148661e56(void)

undefined8 FUN_148661e56(longlong *param_1)

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



// FUNCTION 148661ea2 FUN_148661ea2 body=40 status=ok
// SIG undefined FUN_148661ea2(void)

void FUN_148661ea2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x138) == '\x01') {
    FUN_148662320(param_2);
    *(undefined1 *)(param_2 + 0x138) = 0;
  }
  return;
}



// FUNCTION 148661f18 FUN_148661f18 body=263 status=ok
// SIG undefined FUN_148661f18(void)

longlong FUN_148661f18(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined2 *)(param_1 + 0x20) = *(undefined2 *)(param_2 + 0x20);
  FUN_148661d24(param_1 + 0x28,param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x94);
  uVar2 = *(undefined4 *)(param_2 + 0x98);
  uVar3 = *(undefined4 *)(param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x94) = uVar1;
  *(undefined4 *)(param_1 + 0x98) = uVar2;
  *(undefined4 *)(param_1 + 0x9c) = uVar3;
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  FUN_148662020(param_1 + 0xa8,param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  FUN_144a67f5c(param_1 + 0xc0,param_2 + 0xc0);
  *(undefined2 *)(param_1 + 0xd0) = *(undefined2 *)(param_2 + 0xd0);
  FUN_148662070(param_1 + 0xd8,param_2 + 0xd8);
  FUN_144a67f5c(param_1 + 0xe8,param_2 + 0xe8);
  FUN_1486620c8(param_1 + 0xf8,param_2 + 0xf8);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0x108);
  FUN_14054c6c4(param_1 + 0x110,param_2 + 0x110);
  uVar4 = *(undefined8 *)(param_2 + 0x128);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x120);
  *(undefined8 *)(param_1 + 0x128) = uVar4;
  *(undefined1 *)(param_1 + 0x130) = *(undefined1 *)(param_2 + 0x130);
  return param_1;
}



// FUNCTION 148662020 FUN_148662020 body=79 status=ok
// SIG undefined FUN_148662020(void)

undefined8 * FUN_148662020(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14866211e(param_1,iVar1);
      FUN_14866218d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148662070 FUN_148662070 body=88 status=ok
// SIG undefined FUN_148662070(void)

undefined8 * FUN_148662070(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14866224e(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 1486620c8 FUN_1486620c8 body=85 status=ok
// SIG undefined FUN_1486620c8(void)

undefined8 * FUN_1486620c8(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1486622b0(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x38);
      }
    }
  }
  return param_1;
}



// FUNCTION 14866211e FUN_14866211e body=111 status=ok
// SIG undefined FUN_14866211e(void)

void FUN_14866211e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x68,8);
    iVar2 = (int)(uVar1 / 0x68);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x68,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14866218d FUN_14866218d body=52 status=ok
// SIG undefined FUN_14866218d(void)

void FUN_14866218d(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1486621c2(param_1,param_2);
    param_1 = param_1 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return;
}



// FUNCTION 1486621c2 FUN_1486621c2 body=140 status=ok
// SIG undefined FUN_1486621c2(void)

undefined8 * FUN_1486621c2(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte bVar8;
  
  *param_1 = *param_2;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  bVar8 = DAT_14c950c29;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar3 = *(undefined4 *)(param_2 + 4);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 4) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar4;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  lVar1 = param_2[6];
  param_1[6] = lVar1;
  if ((lVar1 != 0 & bVar8) == 1) {
    FUN_14689c22e();
  }
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  uVar5 = param_2[7];
  uVar6 = param_2[8];
  uVar7 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar7;
  param_1[7] = uVar5;
  param_1[8] = uVar6;
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  return param_1;
}



// FUNCTION 14866224e FUN_14866224e body=98 status=ok
// SIG undefined FUN_14866224e(void)

void FUN_14866224e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1486622b0 FUN_1486622b0 body=111 status=ok
// SIG undefined FUN_1486622b0(void)

void FUN_1486622b0(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148662320 FUN_148662320 body=132 status=ok
// SIG undefined FUN_148662320(void)

void FUN_148662320(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0a3900;
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1486623a4 FUN_1486623a4 body=38 status=ok
// SIG undefined FUN_1486623a4(void)

undefined8 FUN_1486623a4(undefined8 param_1,int param_2)

{
  FUN_148662320();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486623ca FUN_1486623ca body=55 status=ok
// SIG undefined FUN_1486623ca(void)

void FUN_1486623ca(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb594e0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb594e0 = FUN_140002ddd(FUN_1464c6995,uVar1,L"GbxAnimNode_RandomPlayer");
  }
  return;
}



// FUNCTION 1486624a4 FUN_1486624a4 body=59 status=ok
// SIG undefined FUN_1486624a4(void)

undefined8 FUN_1486624a4(longlong *param_1)

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



// FUNCTION 14866257a FUN_14866257a body=63 status=ok
// SIG undefined FUN_14866257a(void)

undefined1 FUN_14866257a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486626a4(param_2,param_3);
    param_3 = param_3 + 0xf8;
    param_2 = param_2 + 0xf8;
  }
  return 1;
}



// FUNCTION 1486625e2 FUN_1486625e2 body=59 status=ok
// SIG undefined FUN_1486625e2(void)

undefined8 FUN_1486625e2(longlong *param_1)

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



// FUNCTION 14866262e FUN_14866262e body=40 status=ok
// SIG undefined FUN_14866262e(void)

void FUN_14866262e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf8) == '\x01') {
    FUN_145ce09e0(param_2);
    *(undefined1 *)(param_2 + 0xf8) = 0;
  }
  return;
}



// FUNCTION 1486626a4 FUN_1486626a4 body=197 status=ok
// SIG undefined FUN_1486626a4(void)

longlong FUN_1486626a4(longlong param_1,longlong param_2)

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
  
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  uVar4 = *(undefined4 *)(param_2 + 0x28);
  uVar5 = *(undefined4 *)(param_2 + 0x2c);
  uVar6 = *(undefined4 *)(param_2 + 0x30);
  uVar7 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  *(undefined4 *)(param_1 + 0x30) = uVar6;
  *(undefined4 *)(param_1 + 0x34) = uVar7;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  FUN_14123bd80(param_1 + 0x40,param_2 + 0x40);
  uVar1 = *(undefined4 *)(param_2 + 0x8c);
  uVar2 = *(undefined4 *)(param_2 + 0x90);
  uVar3 = *(undefined4 *)(param_2 + 0x94);
  uVar4 = *(undefined4 *)(param_2 + 0x98);
  uVar5 = *(undefined4 *)(param_2 + 0x9c);
  uVar6 = *(undefined4 *)(param_2 + 0xa0);
  uVar7 = *(undefined4 *)(param_2 + 0xa4);
  uVar8 = *(undefined4 *)(param_2 + 0xa8);
  uVar9 = *(undefined4 *)(param_2 + 0xac);
  uVar10 = *(undefined4 *)(param_2 + 0xb0);
  uVar11 = *(undefined4 *)(param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = uVar1;
  *(undefined4 *)(param_1 + 0x90) = uVar2;
  *(undefined4 *)(param_1 + 0x94) = uVar3;
  *(undefined4 *)(param_1 + 0x98) = uVar4;
  *(undefined4 *)(param_1 + 0x9c) = uVar5;
  *(undefined4 *)(param_1 + 0xa0) = uVar6;
  *(undefined4 *)(param_1 + 0xa4) = uVar7;
  *(undefined4 *)(param_1 + 0xa8) = uVar8;
  *(undefined4 *)(param_1 + 0xac) = uVar9;
  *(undefined4 *)(param_1 + 0xb0) = uVar10;
  *(undefined4 *)(param_1 + 0xb4) = uVar11;
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  FUN_140d2c6ac(param_1 + 0xc0,param_2 + 0xc0);
  *(undefined1 *)(param_1 + 0xd0) = *(undefined1 *)(param_2 + 0xd0);
  FUN_14866276a(param_1 + 0xd8,param_2 + 0xd8);
  FUN_14054c6c4(param_1 + 0xe8,param_2 + 0xe8);
  return param_1;
}



// FUNCTION 14866276a FUN_14866276a body=89 status=ok
// SIG undefined FUN_14866276a(void)

undefined8 * FUN_14866276a(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1486627c4(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x14);
      }
    }
  }
  return param_1;
}



// FUNCTION 1486627c4 FUN_1486627c4 body=115 status=ok
// SIG undefined FUN_1486627c4(void)

void FUN_1486627c4(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x14,4);
    iVar2 = (int)(uVar1 / 0x14);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x14,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148662838 FUN_148662838 body=57 status=ok
// SIG undefined FUN_148662838(void)

void FUN_148662838(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb59510 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb59510 = FUN_140002ddd(FUN_1464c6ac1,uVar1,L"GbxAnimNode_RefPoseConstraints");
  }
  return;
}



// FUNCTION 1486628ce FUN_1486628ce body=75 status=ok
// SIG undefined FUN_1486628ce(void)

void FUN_1486628ce(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_14186ee64(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486629ae FUN_1486629ae body=45 status=ok
// SIG undefined FUN_1486629ae(void)

longlong FUN_1486629ae(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1458becb6(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486629dc FUN_1486629dc body=48 status=ok
// SIG undefined FUN_1486629dc(void)

longlong FUN_1486629dc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_1458becb6(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148662a0c FUN_148662a0c body=48 status=ok
// SIG undefined FUN_148662a0c(void)

longlong FUN_148662a0c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_1458becb6(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148662a3c FUN_148662a3c body=48 status=ok
// SIG undefined FUN_148662a3c(void)

longlong FUN_148662a3c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_1458becb6(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148662a6c FUN_148662a6c body=45 status=ok
// SIG undefined FUN_148662a6c(void)

longlong FUN_148662a6c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140e64f32(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148662a9a FUN_148662a9a body=48 status=ok
// SIG undefined FUN_148662a9a(void)

longlong FUN_148662a9a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_140e64f32(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148662aca FUN_148662aca body=48 status=ok
// SIG undefined FUN_148662aca(void)

longlong FUN_148662aca(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_140e64f32(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148662afa FUN_148662afa body=48 status=ok
// SIG undefined FUN_148662afa(void)

longlong FUN_148662afa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_140e64f32(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148662b2a FUN_148662b2a body=45 status=ok
// SIG undefined FUN_148662b2a(void)

longlong FUN_148662b2a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_14071fe68(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148662b58 FUN_148662b58 body=45 status=ok
// SIG undefined FUN_148662b58(void)

longlong FUN_148662b58(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x50;
  thunk_FUN_14071fe68(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148662b86 FUN_148662b86 body=45 status=ok
// SIG undefined FUN_148662b86(void)

longlong FUN_148662b86(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x58;
  thunk_FUN_14071fe68(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148662c08 FUN_148662c08 body=59 status=ok
// SIG undefined FUN_148662c08(void)

undefined8 FUN_148662c08(longlong *param_1)

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



// FUNCTION 148662c54 FUN_148662c54 body=57 status=ok
// SIG undefined FUN_148662c54(void)

void FUN_148662c54(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x32) == '\x01') {
    *param_2 = &PTR_FUN_14a42dce0;
    if (param_2[0x18] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x32) = 0;
  }
  return;
}



// FUNCTION 148662cde FUN_148662cde body=92 status=ok
// SIG undefined FUN_148662cde(void)

void FUN_148662cde(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x160);
  FUN_140bf2984(param_2);
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  *(undefined2 *)(param_2 + 0x26) = 0x201;
  param_2[0x27] = 0;
  param_2[0x28] = 0;
  *(undefined8 *)((longlong)param_2 + 0x145) = 0;
  param_2[0x2a] = 0;
  param_2[0x2b] = 0;
  *param_2 = &PTR_FUN_14b0ac2b0;
  return;
}



// FUNCTION 148662d3a FUN_148662d3a body=76 status=ok
// SIG undefined FUN_148662d3a(void)

void FUN_148662d3a(undefined8 param_1,undefined8 *param_2)

{
  FUN_140bf2984(param_2);
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  *(undefined2 *)(param_2 + 0x26) = 0x201;
  param_2[0x27] = 0;
  param_2[0x28] = 0;
  *(undefined8 *)((longlong)param_2 + 0x145) = 0;
  param_2[0x2a] = 0;
  param_2[0x2b] = 0;
  *param_2 = &PTR_FUN_14b0ac2b0;
  return;
}



// FUNCTION 148662daa FUN_148662daa body=118 status=ok
// SIG undefined FUN_148662daa(void)

undefined1 FUN_148662daa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140d11d9c(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x124);
    uVar2 = *(undefined4 *)(param_3 + 0x128);
    uVar3 = *(undefined4 *)(param_3 + 300);
    uVar4 = *(undefined4 *)(param_3 + 0x130);
    uVar5 = *(undefined4 *)(param_3 + 0x134);
    uVar6 = *(undefined4 *)(param_3 + 0x138);
    uVar7 = *(undefined4 *)(param_3 + 0x13c);
    uVar8 = *(undefined4 *)(param_3 + 0x140);
    uVar9 = *(undefined4 *)(param_3 + 0x144);
    uVar10 = *(undefined4 *)(param_3 + 0x148);
    uVar11 = *(undefined4 *)(param_3 + 0x14c);
    uVar12 = *(undefined4 *)(param_3 + 0x150);
    uVar13 = *(undefined4 *)(param_3 + 0x154);
    uVar14 = *(undefined4 *)(param_3 + 0x158);
    uVar15 = *(undefined4 *)(param_3 + 0x15c);
    *(undefined4 *)(param_2 + 0x120) = *(undefined4 *)(param_3 + 0x120);
    *(undefined4 *)(param_2 + 0x124) = uVar1;
    *(undefined4 *)(param_2 + 0x128) = uVar2;
    *(undefined4 *)(param_2 + 300) = uVar3;
    *(undefined4 *)(param_2 + 0x130) = uVar4;
    *(undefined4 *)(param_2 + 0x134) = uVar5;
    *(undefined4 *)(param_2 + 0x138) = uVar6;
    *(undefined4 *)(param_2 + 0x13c) = uVar7;
    *(undefined4 *)(param_2 + 0x140) = uVar8;
    *(undefined4 *)(param_2 + 0x144) = uVar9;
    *(undefined4 *)(param_2 + 0x148) = uVar10;
    *(undefined4 *)(param_2 + 0x14c) = uVar11;
    *(undefined4 *)(param_2 + 0x150) = uVar12;
    *(undefined4 *)(param_2 + 0x154) = uVar13;
    *(undefined4 *)(param_2 + 0x158) = uVar14;
    *(undefined4 *)(param_2 + 0x15c) = uVar15;
    param_2 = param_2 + 0x160;
    param_3 = param_3 + 0x160;
  }
  return 1;
}



// FUNCTION 148662e48 FUN_148662e48 body=59 status=ok
// SIG undefined FUN_148662e48(void)

undefined8 FUN_148662e48(longlong *param_1)

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



// FUNCTION 148662e94 FUN_148662e94 body=38 status=ok
// SIG undefined FUN_148662e94(void)

void FUN_148662e94(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x160) == '\x01') {
    FUN_140f5e6f8(param_2);
    *(undefined1 *)(param_2 + 0x160) = 0;
  }
  return;
}



// FUNCTION 148662f08 FUN_148662f08 body=38 status=ok
// SIG undefined FUN_148662f08(void)

undefined8 FUN_148662f08(undefined8 param_1,int param_2)

{
  FUN_140f5e6f8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148662f2e FUN_148662f2e body=55 status=ok
// SIG undefined FUN_148662f2e(void)

void FUN_148662f2e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb59d70 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb59d70 = FUN_140002ddd(FUN_1464c705b,uVar1,L"GbxAnimNode_Rotation_Aim");
  }
  return;
}



// FUNCTION 148662f66 FUN_148662f66 body=76 status=ok
// SIG undefined FUN_148662f66(void)

void FUN_148662f66(undefined8 param_1,undefined8 *param_2)

{
  FUN_140bf2984(param_2);
  *param_2 = &PTR_FUN_14b0ac4c0;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  *(undefined2 *)(param_2 + 0x26) = 0x201;
  param_2[0x27] = 0;
  param_2[0x28] = 0;
  *(undefined8 *)((longlong)param_2 + 0x145) = 0;
  param_2[0x2a] = 0;
  param_2[0x2b] = 0;
  return;
}



// FUNCTION 148662ff0 FUN_148662ff0 body=59 status=ok
// SIG undefined FUN_148662ff0(void)

undefined8 FUN_148662ff0(longlong *param_1)

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



// FUNCTION 14866303c FUN_14866303c body=38 status=ok
// SIG undefined FUN_14866303c(void)

void FUN_14866303c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x160) == '\x01') {
    FUN_140f5e6f8(param_2);
    *(undefined1 *)(param_2 + 0x160) = 0;
  }
  return;
}



// FUNCTION 1486630f8 FUN_1486630f8 body=59 status=ok
// SIG undefined FUN_1486630f8(void)

undefined8 FUN_1486630f8(longlong *param_1)

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



// FUNCTION 148663144 FUN_148663144 body=38 status=ok
// SIG undefined FUN_148663144(void)

void FUN_148663144(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1e0) == '\x01') {
    FUN_143c47564(param_2);
    *(undefined1 *)(param_2 + 0x1e0) = 0;
  }
  return;
}



// FUNCTION 1486631c2 FUN_1486631c2 body=133 status=ok
// SIG undefined FUN_1486631c2(void)

void FUN_1486631c2(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x140);
  FUN_140c83e26(param_2);
  *param_2 = &PTR_FUN_14b0acaf0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0xffffffff7fffffff;
  FUN_1459762fa(param_2 + 0x1e);
  param_2[0x23] = 0;
  param_2[0x24] = 0xffffffff7fffffff;
  *(undefined2 *)(param_2 + 0x25) = 0;
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  return;
}



// FUNCTION 148663248 FUN_148663248 body=117 status=ok
// SIG undefined FUN_148663248(void)

void FUN_148663248(undefined8 param_1,undefined8 *param_2)

{
  FUN_140c83e26(param_2);
  *param_2 = &PTR_FUN_14b0acaf0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0xffffffff7fffffff;
  FUN_1459762fa(param_2 + 0x1e);
  param_2[0x23] = 0;
  param_2[0x24] = 0xffffffff7fffffff;
  *(undefined2 *)(param_2 + 0x25) = 0;
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  return;
}



// FUNCTION 1486632e2 FUN_1486632e2 body=63 status=ok
// SIG undefined FUN_1486632e2(void)

undefined1 FUN_1486632e2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486634c6(param_2,param_3);
    param_3 = param_3 + 0x140;
    param_2 = param_2 + 0x140;
  }
  return 1;
}



// FUNCTION 14866334a FUN_14866334a body=59 status=ok
// SIG undefined FUN_14866334a(void)

undefined8 FUN_14866334a(longlong *param_1)

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



// FUNCTION 148663396 FUN_148663396 body=40 status=ok
// SIG undefined FUN_148663396(void)

void FUN_148663396(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x140) == '\x01') {
    FUN_14866346a(param_2);
    *(undefined1 *)(param_2 + 0x140) = 0;
  }
  return;
}



// FUNCTION 14866340c FUN_14866340c body=38 status=ok
// SIG undefined FUN_14866340c(void)

undefined8 FUN_14866340c(undefined8 param_1,int param_2)

{
  FUN_14866346a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148663432 FUN_148663432 body=55 status=ok
// SIG undefined FUN_148663432(void)

void FUN_148663432(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb59db8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb59db8 = FUN_140002ddd(FUN_1464c721f,uVar1,L"GbxAnimNode_Rotation_Head");
  }
  return;
}



// FUNCTION 14866346a FUN_14866346a body=91 status=ok
// SIG undefined FUN_14866346a(void)

void FUN_14866346a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0acaf0;
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a42dce0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1486634c6 FUN_1486634c6 body=277 status=ok
// SIG undefined FUN_1486634c6(void)

longlong FUN_1486634c6(longlong param_1,longlong param_2)

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
  
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  uVar4 = *(undefined4 *)(param_2 + 0x28);
  uVar5 = *(undefined4 *)(param_2 + 0x2c);
  uVar6 = *(undefined4 *)(param_2 + 0x30);
  uVar7 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  *(undefined4 *)(param_1 + 0x30) = uVar6;
  *(undefined4 *)(param_1 + 0x34) = uVar7;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  FUN_14123bd80(param_1 + 0x40,param_2 + 0x40);
  uVar1 = *(undefined4 *)(param_2 + 0x8c);
  uVar2 = *(undefined4 *)(param_2 + 0x90);
  uVar3 = *(undefined4 *)(param_2 + 0x94);
  uVar4 = *(undefined4 *)(param_2 + 0x98);
  uVar5 = *(undefined4 *)(param_2 + 0x9c);
  uVar6 = *(undefined4 *)(param_2 + 0xa0);
  uVar7 = *(undefined4 *)(param_2 + 0xa4);
  uVar8 = *(undefined4 *)(param_2 + 0xa8);
  uVar9 = *(undefined4 *)(param_2 + 0xac);
  uVar10 = *(undefined4 *)(param_2 + 0xb0);
  uVar11 = *(undefined4 *)(param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = uVar1;
  *(undefined4 *)(param_1 + 0x90) = uVar2;
  *(undefined4 *)(param_1 + 0x94) = uVar3;
  *(undefined4 *)(param_1 + 0x98) = uVar4;
  *(undefined4 *)(param_1 + 0x9c) = uVar5;
  *(undefined4 *)(param_1 + 0xa0) = uVar6;
  *(undefined4 *)(param_1 + 0xa4) = uVar7;
  *(undefined4 *)(param_1 + 0xa8) = uVar8;
  *(undefined4 *)(param_1 + 0xac) = uVar9;
  *(undefined4 *)(param_1 + 0xb0) = uVar10;
  *(undefined4 *)(param_1 + 0xb4) = uVar11;
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  FUN_140d2c6ac(param_1 + 0xc0,param_2 + 0xc0);
  *(undefined1 *)(param_1 + 0xd0) = *(undefined1 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  uVar12 = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xe0) = uVar12;
  uVar1 = *(undefined4 *)(param_2 + 0xf4);
  uVar2 = *(undefined4 *)(param_2 + 0xf8);
  uVar3 = *(undefined4 *)(param_2 + 0xfc);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
  *(undefined4 *)(param_1 + 0xf4) = uVar1;
  *(undefined4 *)(param_1 + 0xf8) = uVar2;
  *(undefined4 *)(param_1 + 0xfc) = uVar3;
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
  FUN_145c09234(param_1 + 0x108,param_2 + 0x108);
  uVar1 = *(undefined4 *)(param_2 + 0x11c);
  uVar2 = *(undefined4 *)(param_2 + 0x120);
  uVar3 = *(undefined4 *)(param_2 + 0x124);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
  *(undefined4 *)(param_1 + 0x11c) = uVar1;
  *(undefined4 *)(param_1 + 0x120) = uVar2;
  *(undefined4 *)(param_1 + 0x124) = uVar3;
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_2 + 0x128);
  FUN_14103fc1e(param_1 + 0x130,param_2 + 0x130);
  return param_1;
}



// FUNCTION 148663622 FUN_148663622 body=59 status=ok
// SIG undefined FUN_148663622(void)

undefined8 FUN_148663622(longlong *param_1)

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



// FUNCTION 14866366e FUN_14866366e body=38 status=ok
// SIG undefined FUN_14866366e(void)

void FUN_14866366e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x160) == '\x01') {
    FUN_141294dce(param_2);
    *(undefined1 *)(param_2 + 0x160) = 0;
  }
  return;
}



// FUNCTION 1486636e4 FUN_1486636e4 body=57 status=ok
// SIG undefined FUN_1486636e4(void)

void FUN_1486636e4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb59dd0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb59dd0 = FUN_140002ddd(FUN_1464c72b5,uVar1,L"GbxAnimNode_Rotation_HeadBones");
  }
  return;
}



// FUNCTION 14866375a FUN_14866375a body=130 status=ok
// SIG undefined FUN_14866375a(void)

undefined1 FUN_14866375a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140d11d9c(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x124);
    uVar2 = *(undefined4 *)(param_3 + 0x128);
    uVar3 = *(undefined4 *)(param_3 + 300);
    uVar4 = *(undefined4 *)(param_3 + 0x130);
    uVar5 = *(undefined4 *)(param_3 + 0x134);
    uVar6 = *(undefined4 *)(param_3 + 0x138);
    uVar7 = *(undefined4 *)(param_3 + 0x13c);
    uVar8 = *(undefined4 *)(param_3 + 0x140);
    uVar9 = *(undefined4 *)(param_3 + 0x144);
    uVar10 = *(undefined4 *)(param_3 + 0x148);
    uVar11 = *(undefined4 *)(param_3 + 0x14c);
    uVar12 = *(undefined4 *)(param_3 + 0x150);
    uVar13 = *(undefined4 *)(param_3 + 0x154);
    uVar14 = *(undefined4 *)(param_3 + 0x158);
    uVar15 = *(undefined4 *)(param_3 + 0x15c);
    *(undefined4 *)(param_2 + 0x120) = *(undefined4 *)(param_3 + 0x120);
    *(undefined4 *)(param_2 + 0x124) = uVar1;
    *(undefined4 *)(param_2 + 0x128) = uVar2;
    *(undefined4 *)(param_2 + 300) = uVar3;
    *(undefined4 *)(param_2 + 0x130) = uVar4;
    *(undefined4 *)(param_2 + 0x134) = uVar5;
    *(undefined4 *)(param_2 + 0x138) = uVar6;
    *(undefined4 *)(param_2 + 0x13c) = uVar7;
    *(undefined4 *)(param_2 + 0x140) = uVar8;
    *(undefined4 *)(param_2 + 0x144) = uVar9;
    *(undefined4 *)(param_2 + 0x148) = uVar10;
    *(undefined4 *)(param_2 + 0x14c) = uVar11;
    *(undefined4 *)(param_2 + 0x150) = uVar12;
    *(undefined4 *)(param_2 + 0x154) = uVar13;
    *(undefined4 *)(param_2 + 0x158) = uVar14;
    *(undefined4 *)(param_2 + 0x15c) = uVar15;
    *(undefined1 *)(param_2 + 0x160) = *(undefined1 *)(param_3 + 0x160);
    param_2 = param_2 + 0x168;
    param_3 = param_3 + 0x168;
  }
  return 1;
}



// FUNCTION 148663804 FUN_148663804 body=59 status=ok
// SIG undefined FUN_148663804(void)

undefined8 FUN_148663804(longlong *param_1)

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



// FUNCTION 148663850 FUN_148663850 body=38 status=ok
// SIG undefined FUN_148663850(void)

void FUN_148663850(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x168) == '\x01') {
    FUN_140f5e6f8(param_2);
    *(undefined1 *)(param_2 + 0x168) = 0;
  }
  return;
}



// FUNCTION 1486638c6 FUN_1486638c6 body=39 status=ok
// SIG undefined FUN_1486638c6(void)

void FUN_1486638c6(undefined8 param_1,undefined8 *param_2)

{
  FUN_14328834a(param_2);
  *param_2 = &PTR_FUN_14b0afa80;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  return;
}



// FUNCTION 14866392c FUN_14866392c body=59 status=ok
// SIG undefined FUN_14866392c(void)

undefined8 FUN_14866392c(longlong *param_1)

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



// FUNCTION 1486639d8 FUN_1486639d8 body=55 status=ok
// SIG undefined FUN_1486639d8(void)

void FUN_1486639d8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb59e00 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb59e00 = FUN_140002ddd(FUN_1464c73e1,uVar1,L"GbxAnimNode_SequenceEvaluator");
  }
  return;
}



// FUNCTION 148663a10 FUN_148663a10 body=128 status=ok
// SIG undefined FUN_148663a10(void)

void FUN_148663a10(undefined8 param_1,undefined8 *param_2)

{
  FUN_141315e2a(param_2);
  *param_2 = &PTR_FUN_14b0a4df0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  *(undefined1 *)((longlong)param_2 + 0xa4) = 0;
  *(undefined1 *)(param_2 + 0x15) = 0;
  param_2[0x16] = 0x47efffffe0000000;
  param_2[0x17] = 0x47efffffe0000000;
  param_2[0x18] = 0x47efffffe0000000;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  *(undefined4 *)(param_2 + 0x1c) = 0x3f800000;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  return;
}



// FUNCTION 148663ace FUN_148663ace body=59 status=ok
// SIG undefined FUN_148663ace(void)

undefined8 FUN_148663ace(longlong *param_1)

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



// FUNCTION 148663bb0 FUN_148663bb0 body=63 status=ok
// SIG undefined FUN_148663bb0(void)

undefined1 FUN_148663bb0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148663cd8(param_2,param_3);
    param_3 = param_3 + 0x468;
    param_2 = param_2 + 0x468;
  }
  return 1;
}



// FUNCTION 148663c18 FUN_148663c18 body=59 status=ok
// SIG undefined FUN_148663c18(void)

undefined8 FUN_148663c18(longlong *param_1)

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



// FUNCTION 148663c64 FUN_148663c64 body=38 status=ok
// SIG undefined FUN_148663c64(void)

void FUN_148663c64(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x468) == '\x01') {
    FUN_140c51a26(param_2);
    *(undefined1 *)(param_2 + 0x468) = 0;
  }
  return;
}



// FUNCTION 148663cd8 FUN_148663cd8 body=1225 status=ok
// SIG undefined FUN_148663cd8(void)

longlong FUN_148663cd8(longlong param_1,longlong param_2)

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
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  uVar4 = *(undefined4 *)(param_2 + 0x28);
  uVar5 = *(undefined4 *)(param_2 + 0x2c);
  uVar6 = *(undefined4 *)(param_2 + 0x30);
  uVar7 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  *(undefined4 *)(param_1 + 0x30) = uVar6;
  *(undefined4 *)(param_1 + 0x34) = uVar7;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  FUN_14123bd80(param_1 + 0x40,param_2 + 0x40);
  uVar1 = *(undefined4 *)(param_2 + 0x8c);
  uVar2 = *(undefined4 *)(param_2 + 0x90);
  uVar3 = *(undefined4 *)(param_2 + 0x94);
  uVar4 = *(undefined4 *)(param_2 + 0x98);
  uVar5 = *(undefined4 *)(param_2 + 0x9c);
  uVar6 = *(undefined4 *)(param_2 + 0xa0);
  uVar7 = *(undefined4 *)(param_2 + 0xa4);
  uVar8 = *(undefined4 *)(param_2 + 0xa8);
  uVar9 = *(undefined4 *)(param_2 + 0xac);
  uVar10 = *(undefined4 *)(param_2 + 0xb0);
  uVar11 = *(undefined4 *)(param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = uVar1;
  *(undefined4 *)(param_1 + 0x90) = uVar2;
  *(undefined4 *)(param_1 + 0x94) = uVar3;
  *(undefined4 *)(param_1 + 0x98) = uVar4;
  *(undefined4 *)(param_1 + 0x9c) = uVar5;
  *(undefined4 *)(param_1 + 0xa0) = uVar6;
  *(undefined4 *)(param_1 + 0xa4) = uVar7;
  *(undefined4 *)(param_1 + 0xa8) = uVar8;
  *(undefined4 *)(param_1 + 0xac) = uVar9;
  *(undefined4 *)(param_1 + 0xb0) = uVar10;
  *(undefined4 *)(param_1 + 0xb4) = uVar11;
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  FUN_140d2c6ac(param_1 + 0xc0,param_2 + 0xc0);
  *(undefined1 *)(param_1 + 0xd0) = *(undefined1 *)(param_2 + 0xd0);
  puVar15 = (undefined8 *)(param_2 + 0xd8);
  puVar16 = (undefined8 *)(param_1 + 0xd8);
  for (lVar14 = 0xb; lVar14 != 0; lVar14 = lVar14 + -1) {
    *puVar16 = *puVar15;
    puVar15 = puVar15 + 1;
    puVar16 = puVar16 + 1;
  }
  *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_2 + 0x138);
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x130);
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  uVar1 = *(undefined4 *)(param_2 + 0x14c);
  uVar2 = *(undefined4 *)(param_2 + 0x150);
  uVar3 = *(undefined4 *)(param_2 + 0x154);
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_2 + 0x148);
  *(undefined4 *)(param_1 + 0x14c) = uVar1;
  *(undefined4 *)(param_1 + 0x150) = uVar2;
  *(undefined4 *)(param_1 + 0x154) = uVar3;
  FUN_144a787a6(param_1 + 0x158,param_2 + 0x158);
  *(undefined1 *)(param_1 + 0x16c) = *(undefined1 *)(param_2 + 0x16c);
  *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_2 + 0x168);
  *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_2 + 0x170);
  *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_2 + 0x178);
  *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_2 + 0x180);
  uVar1 = *(undefined4 *)(param_2 + 0x18c);
  uVar2 = *(undefined4 *)(param_2 + 400);
  uVar3 = *(undefined4 *)(param_2 + 0x194);
  *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_2 + 0x188);
  *(undefined4 *)(param_1 + 0x18c) = uVar1;
  *(undefined4 *)(param_1 + 400) = uVar2;
  *(undefined4 *)(param_1 + 0x194) = uVar3;
  FUN_144a787a6(param_1 + 0x198,param_2 + 0x198);
  *(undefined1 *)(param_1 + 0x1ac) = *(undefined1 *)(param_2 + 0x1ac);
  *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_2 + 0x1a8);
  *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(param_2 + 0x1b0);
  *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_2 + 0x1b8);
  *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(param_2 + 0x1c0);
  uVar1 = *(undefined4 *)(param_2 + 0x1cc);
  uVar2 = *(undefined4 *)(param_2 + 0x1d0);
  uVar3 = *(undefined4 *)(param_2 + 0x1d4);
  *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_2 + 0x1c8);
  *(undefined4 *)(param_1 + 0x1cc) = uVar1;
  *(undefined4 *)(param_1 + 0x1d0) = uVar2;
  *(undefined4 *)(param_1 + 0x1d4) = uVar3;
  FUN_144a787a6(param_1 + 0x1d8,param_2 + 0x1d8);
  *(undefined1 *)(param_1 + 0x1ec) = *(undefined1 *)(param_2 + 0x1ec);
  *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_2 + 0x1e8);
  *(undefined8 *)(param_1 + 0x220) = *(undefined8 *)(param_2 + 0x220);
  uVar12 = *(undefined8 *)(param_2 + 0x1f0);
  uVar13 = *(undefined8 *)(param_2 + 0x1f8);
  uVar1 = *(undefined4 *)(param_2 + 0x200);
  uVar2 = *(undefined4 *)(param_2 + 0x204);
  uVar3 = *(undefined4 *)(param_2 + 0x208);
  uVar4 = *(undefined4 *)(param_2 + 0x20c);
  uVar5 = *(undefined4 *)(param_2 + 0x214);
  uVar6 = *(undefined4 *)(param_2 + 0x218);
  uVar7 = *(undefined4 *)(param_2 + 0x21c);
  *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_2 + 0x210);
  *(undefined4 *)(param_1 + 0x214) = uVar5;
  *(undefined4 *)(param_1 + 0x218) = uVar6;
  *(undefined4 *)(param_1 + 0x21c) = uVar7;
  *(undefined4 *)(param_1 + 0x200) = uVar1;
  *(undefined4 *)(param_1 + 0x204) = uVar2;
  *(undefined4 *)(param_1 + 0x208) = uVar3;
  *(undefined4 *)(param_1 + 0x20c) = uVar4;
  *(undefined8 *)(param_1 + 0x1f0) = uVar12;
  *(undefined8 *)(param_1 + 0x1f8) = uVar13;
  *(undefined8 *)(param_1 + 0x228) = *(undefined8 *)(param_2 + 0x228);
  *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(param_2 + 0x230);
  *(undefined8 *)(param_1 + 0x238) = *(undefined8 *)(param_2 + 0x238);
  uVar1 = *(undefined4 *)(param_2 + 0x244);
  uVar2 = *(undefined4 *)(param_2 + 0x248);
  uVar3 = *(undefined4 *)(param_2 + 0x24c);
  *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)(param_2 + 0x240);
  *(undefined4 *)(param_1 + 0x244) = uVar1;
  *(undefined4 *)(param_1 + 0x248) = uVar2;
  *(undefined4 *)(param_1 + 0x24c) = uVar3;
  FUN_144a787a6(param_1 + 0x250,param_2 + 0x250);
  *(undefined1 *)(param_1 + 0x264) = *(undefined1 *)(param_2 + 0x264);
  *(undefined4 *)(param_1 + 0x260) = *(undefined4 *)(param_2 + 0x260);
  *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_2 + 0x268);
  *(undefined4 *)(param_1 + 0x270) = *(undefined4 *)(param_2 + 0x270);
  *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(param_2 + 0x278);
  uVar1 = *(undefined4 *)(param_2 + 0x284);
  uVar2 = *(undefined4 *)(param_2 + 0x288);
  uVar3 = *(undefined4 *)(param_2 + 0x28c);
  *(undefined4 *)(param_1 + 0x280) = *(undefined4 *)(param_2 + 0x280);
  *(undefined4 *)(param_1 + 0x284) = uVar1;
  *(undefined4 *)(param_1 + 0x288) = uVar2;
  *(undefined4 *)(param_1 + 0x28c) = uVar3;
  FUN_144a787a6(param_1 + 0x290,param_2 + 0x290);
  *(undefined1 *)(param_1 + 0x2a4) = *(undefined1 *)(param_2 + 0x2a4);
  *(undefined4 *)(param_1 + 0x2a0) = *(undefined4 *)(param_2 + 0x2a0);
  *(undefined8 *)(param_1 + 0x2a8) = *(undefined8 *)(param_2 + 0x2a8);
  *(undefined4 *)(param_1 + 0x2b0) = *(undefined4 *)(param_2 + 0x2b0);
  *(undefined8 *)(param_1 + 0x2b8) = *(undefined8 *)(param_2 + 0x2b8);
  uVar1 = *(undefined4 *)(param_2 + 0x2c4);
  uVar2 = *(undefined4 *)(param_2 + 0x2c8);
  uVar3 = *(undefined4 *)(param_2 + 0x2cc);
  *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)(param_2 + 0x2c0);
  *(undefined4 *)(param_1 + 0x2c4) = uVar1;
  *(undefined4 *)(param_1 + 0x2c8) = uVar2;
  *(undefined4 *)(param_1 + 0x2cc) = uVar3;
  FUN_144a787a6(param_1 + 0x2d0,param_2 + 0x2d0);
  *(undefined1 *)(param_1 + 0x2e4) = *(undefined1 *)(param_2 + 0x2e4);
  *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(param_2 + 0x2e0);
  *(undefined8 *)(param_1 + 0x318) = *(undefined8 *)(param_2 + 0x318);
  uVar12 = *(undefined8 *)(param_2 + 0x2e8);
  uVar13 = *(undefined8 *)(param_2 + 0x2f0);
  uVar1 = *(undefined4 *)(param_2 + 0x2f8);
  uVar2 = *(undefined4 *)(param_2 + 0x2fc);
  uVar3 = *(undefined4 *)(param_2 + 0x300);
  uVar4 = *(undefined4 *)(param_2 + 0x304);
  uVar5 = *(undefined4 *)(param_2 + 0x30c);
  uVar6 = *(undefined4 *)(param_2 + 0x310);
  uVar7 = *(undefined4 *)(param_2 + 0x314);
  *(undefined4 *)(param_1 + 0x308) = *(undefined4 *)(param_2 + 0x308);
  *(undefined4 *)(param_1 + 0x30c) = uVar5;
  *(undefined4 *)(param_1 + 0x310) = uVar6;
  *(undefined4 *)(param_1 + 0x314) = uVar7;
  *(undefined4 *)(param_1 + 0x2f8) = uVar1;
  *(undefined4 *)(param_1 + 0x2fc) = uVar2;
  *(undefined4 *)(param_1 + 0x300) = uVar3;
  *(undefined4 *)(param_1 + 0x304) = uVar4;
  *(undefined8 *)(param_1 + 0x2e8) = uVar12;
  *(undefined8 *)(param_1 + 0x2f0) = uVar13;
  *(undefined8 *)(param_1 + 800) = *(undefined8 *)(param_2 + 800);
  *(undefined4 *)(param_1 + 0x328) = *(undefined4 *)(param_2 + 0x328);
  *(undefined8 *)(param_1 + 0x330) = *(undefined8 *)(param_2 + 0x330);
  uVar1 = *(undefined4 *)(param_2 + 0x33c);
  uVar2 = *(undefined4 *)(param_2 + 0x340);
  uVar3 = *(undefined4 *)(param_2 + 0x344);
  *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(param_2 + 0x338);
  *(undefined4 *)(param_1 + 0x33c) = uVar1;
  *(undefined4 *)(param_1 + 0x340) = uVar2;
  *(undefined4 *)(param_1 + 0x344) = uVar3;
  FUN_144a787a6(param_1 + 0x348,param_2 + 0x348);
  *(undefined1 *)(param_1 + 0x35c) = *(undefined1 *)(param_2 + 0x35c);
  *(undefined4 *)(param_1 + 0x358) = *(undefined4 *)(param_2 + 0x358);
  *(undefined8 *)(param_1 + 0x360) = *(undefined8 *)(param_2 + 0x360);
  *(undefined4 *)(param_1 + 0x368) = *(undefined4 *)(param_2 + 0x368);
  *(undefined8 *)(param_1 + 0x370) = *(undefined8 *)(param_2 + 0x370);
  uVar1 = *(undefined4 *)(param_2 + 0x37c);
  uVar2 = *(undefined4 *)(param_2 + 0x380);
  uVar3 = *(undefined4 *)(param_2 + 900);
  *(undefined4 *)(param_1 + 0x378) = *(undefined4 *)(param_2 + 0x378);
  *(undefined4 *)(param_1 + 0x37c) = uVar1;
  *(undefined4 *)(param_1 + 0x380) = uVar2;
  *(undefined4 *)(param_1 + 900) = uVar3;
  FUN_144a787a6(param_1 + 0x388,param_2 + 0x388);
  *(undefined1 *)(param_1 + 0x39c) = *(undefined1 *)(param_2 + 0x39c);
  *(undefined4 *)(param_1 + 0x398) = *(undefined4 *)(param_2 + 0x398);
  *(undefined8 *)(param_1 + 0x3a0) = *(undefined8 *)(param_2 + 0x3a0);
  *(undefined4 *)(param_1 + 0x3a8) = *(undefined4 *)(param_2 + 0x3a8);
  *(undefined8 *)(param_1 + 0x3b0) = *(undefined8 *)(param_2 + 0x3b0);
  uVar1 = *(undefined4 *)(param_2 + 0x3bc);
  uVar2 = *(undefined4 *)(param_2 + 0x3c0);
  uVar3 = *(undefined4 *)(param_2 + 0x3c4);
  *(undefined4 *)(param_1 + 0x3b8) = *(undefined4 *)(param_2 + 0x3b8);
  *(undefined4 *)(param_1 + 0x3bc) = uVar1;
  *(undefined4 *)(param_1 + 0x3c0) = uVar2;
  *(undefined4 *)(param_1 + 0x3c4) = uVar3;
  FUN_144a787a6(param_1 + 0x3c8,param_2 + 0x3c8);
  *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_2 + 0x3d8);
  *(undefined1 *)(param_1 + 0x3dc) = *(undefined1 *)(param_2 + 0x3dc);
  memcpy((void *)(param_1 + 0x3e0),(void *)(param_2 + 0x3e0),0x81);
  return param_1;
}



// FUNCTION 1486641e8 FUN_1486641e8 body=59 status=ok
// SIG undefined FUN_1486641e8(void)

undefined8 FUN_1486641e8(longlong *param_1)

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



// FUNCTION 148664234 FUN_148664234 body=38 status=ok
// SIG undefined FUN_148664234(void)

void FUN_148664234(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x620) == '\x01') {
    FUN_140c85d5c(param_2);
    *(undefined1 *)(param_2 + 0x620) = 0;
  }
  return;
}



// FUNCTION 1486642a8 FUN_1486642a8 body=111 status=ok
// SIG undefined FUN_1486642a8(void)

void FUN_1486642a8(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x58,4);
    iVar2 = (int)(uVar1 / 0x58);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x58,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1486643a8 FUN_1486643a8 body=59 status=ok
// SIG undefined FUN_1486643a8(void)

undefined8 FUN_1486643a8(longlong *param_1)

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



// FUNCTION 1486644b8 FUN_1486644b8 body=63 status=ok
// SIG undefined FUN_1486644b8(void)

undefined1 FUN_1486644b8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486646ba(param_2,param_3);
    param_3 = param_3 + 0x90;
    param_2 = param_2 + 0x90;
  }
  return 1;
}



// FUNCTION 148664520 FUN_148664520 body=59 status=ok
// SIG undefined FUN_148664520(void)

undefined8 FUN_148664520(longlong *param_1)

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



// FUNCTION 14866456c FUN_14866456c body=38 status=ok
// SIG undefined FUN_14866456c(void)

void FUN_14866456c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x90) == '\x01') {
    FUN_14866463e(param_2);
    *(undefined1 *)(param_2 + 0x90) = 0;
  }
  return;
}



// FUNCTION 1486645e0 FUN_1486645e0 body=38 status=ok
// SIG undefined FUN_1486645e0(void)

undefined8 FUN_1486645e0(undefined8 param_1,int param_2)

{
  FUN_14866463e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148664606 FUN_148664606 body=55 status=ok
// SIG undefined FUN_148664606(void)

void FUN_148664606(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb59fb0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb59fb0 = FUN_140002ddd(FUN_1464c7979,uVar1,L"GbxAnimSetOption");
  }
  return;
}



// FUNCTION 14866463e FUN_14866463e body=123 status=ok
// SIG undefined FUN_14866463e(void)

void FUN_14866463e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b0ad9d0;
  FUN_140c866d1(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0xe];
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
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1486646ba FUN_1486646ba body=179 status=ok
// SIG undefined FUN_1486646ba(void)

longlong FUN_1486646ba(longlong param_1,longlong param_2)

{
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  if ((*(longlong *)(param_1 + 0x10) != *(longlong *)(param_2 + 0x10)) ||
     (*(int *)(param_1 + 0x18) != *(int *)(param_2 + 0x18))) {
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  if ((*(longlong *)(param_1 + 0x28) != *(longlong *)(param_2 + 0x28)) ||
     (*(int *)(param_1 + 0x30) != *(int *)(param_2 + 0x30))) {
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_2 + 0x28);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  if ((*(longlong *)(param_1 + 0x40) != *(longlong *)(param_2 + 0x40)) ||
     (*(int *)(param_1 + 0x48) != *(int *)(param_2 + 0x48))) {
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_2 + 0x40);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  FUN_14866476e(param_1 + 0x58,param_2 + 0x58);
  FUN_1401f3db8(param_1 + 0x68,param_2 + 0x68);
  FUN_1486647be(param_1 + 0x80,param_2 + 0x80);
  return param_1;
}



// FUNCTION 14866476e FUN_14866476e body=79 status=ok
// SIG undefined FUN_14866476e(void)

undefined8 * FUN_14866476e(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14866481c(param_1,iVar1);
      FUN_14866487e(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1486647be FUN_1486647be body=93 status=ok
// SIG undefined FUN_1486647be(void)

undefined8 * FUN_1486647be(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140c866d1(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1486648d0(param_1,iVar1);
      FUN_148664943(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14866481c FUN_14866481c body=98 status=ok
// SIG undefined FUN_14866481c(void)

void FUN_14866481c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14866487e FUN_14866487e body=82 status=ok
// SIG undefined FUN_14866487e(void)

void FUN_14866487e(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 1486648d0 FUN_1486648d0 body=115 status=ok
// SIG undefined FUN_1486648d0(void)

void FUN_1486648d0(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148664943 FUN_148664943 body=52 status=ok
// SIG undefined FUN_148664943(void)

void FUN_148664943(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1401f3da4(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 1486649f2 FUN_1486649f2 body=70 status=ok
// SIG undefined FUN_1486649f2(void)

undefined1 FUN_1486649f2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_1486646ba(param_2,param_3);
      param_3 = param_3 + 0x98;
      param_2 = param_2 + 0x98;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148664a60 FUN_148664a60 body=59 status=ok
// SIG undefined FUN_148664a60(void)

undefined8 FUN_148664a60(longlong *param_1)

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



// FUNCTION 148664aac FUN_148664aac body=49 status=ok
// SIG undefined FUN_148664aac(void)

void FUN_148664aac(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x13) == '\x01') {
    *param_2 = &PTR_FUN_14b0adb50;
    FUN_14866463e(param_2 + 1);
    *(undefined1 *)(param_2 + 0x13) = 0;
  }
  return;
}



// FUNCTION 148664ba0 FUN_148664ba0 body=59 status=ok
// SIG undefined FUN_148664ba0(void)

undefined8 FUN_148664ba0(longlong *param_1)

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



// FUNCTION 148664be6 FUN_148664be6 body=37 status=ok
// SIG undefined FUN_148664be6(void)

void FUN_148664be6(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[3] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 148664c5c FUN_148664c5c body=56 status=ok
// SIG undefined FUN_148664c5c(void)

void FUN_148664c5c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *param_2 = &PTR_FUN_14b0ade20;
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined2 *)(param_2 + 5) = 1;
  return;
}



// FUNCTION 148664caa FUN_148664caa body=83 status=ok
// SIG undefined FUN_148664caa(void)

undefined8 FUN_148664caa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      FUN_141289ada(param_2 + -0x10,param_3 + -0x10);
      FUN_144a67f5c(param_2,param_3);
      *(undefined2 *)(param_2 + 0x10) = *(undefined2 *)(param_3 + 0x10);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148664d26 FUN_148664d26 body=59 status=ok
// SIG undefined FUN_148664d26(void)

undefined8 FUN_148664d26(longlong *param_1)

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



// FUNCTION 148664d6c FUN_148664d6c body=34 status=ok
// SIG undefined FUN_148664d6c(void)

void FUN_148664d6c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_145829cf8(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148664dd4 FUN_148664dd4 body=57 status=ok
// SIG undefined FUN_148664dd4(void)

void FUN_148664dd4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a028 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a028 = FUN_140002ddd(FUN_1464c7b9c,uVar1,L"GbxAnimUpdateRateParametersDef");
  }
  return;
}



// FUNCTION 148664e0e FUN_148664e0e body=28 status=ok
// SIG undefined FUN_148664e0e(void)

undefined8 FUN_148664e0e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148664ea4 FUN_148664ea4 body=59 status=ok
// SIG undefined FUN_148664ea4(void)

undefined8 FUN_148664ea4(longlong *param_1)

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



// FUNCTION 148664f44 FUN_148664f44 body=29 status=ok
// SIG undefined FUN_148664f44(void)

undefined8 FUN_148664f44(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148664f62 FUN_148664f62 body=55 status=ok
// SIG undefined FUN_148664f62(void)

void FUN_148664f62(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a068 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a068 = FUN_140002ddd(FUN_1464c7cc3,uVar1,L"GbxAOEComponentTargetHandler");
  }
  return;
}



// FUNCTION 148664ff0 FUN_148664ff0 body=62 status=ok
// SIG undefined FUN_148664ff0(void)

undefined1 FUN_148664ff0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_140bf093e(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148665056 FUN_148665056 body=59 status=ok
// SIG undefined FUN_148665056(void)

undefined8 FUN_148665056(longlong *param_1)

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



// FUNCTION 14866509c FUN_14866509c body=48 status=ok
// SIG undefined FUN_14866509c(void)

void FUN_14866509c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_2 = &PTR_FUN_14b0ae150;
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 14866511a FUN_14866511a body=57 status=ok
// SIG undefined FUN_14866511a(void)

undefined8 * FUN_14866511a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b0ae150;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148665154 FUN_148665154 body=55 status=ok
// SIG undefined FUN_148665154(void)

void FUN_148665154(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a080 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a080 = FUN_140002ddd(FUN_1464c7d5b,uVar1,L"GbxAOEComponentTargetHandler_Basic");
  }
  return;
}



// FUNCTION 148665200 FUN_148665200 body=54 status=ok
// SIG undefined FUN_148665200(void)

undefined1 FUN_148665200(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14866534e(param_2,param_3);
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return 1;
}



// FUNCTION 14866525e FUN_14866525e body=59 status=ok
// SIG undefined FUN_14866525e(void)

undefined8 FUN_14866525e(longlong *param_1)

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



// FUNCTION 1486652a4 FUN_1486652a4 body=34 status=ok
// SIG undefined FUN_1486652a4(void)

void FUN_1486652a4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_1458378be(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 148665314 FUN_148665314 body=57 status=ok
// SIG undefined FUN_148665314(void)

void FUN_148665314(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a0c8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a0c8 =
         FUN_140002ddd(FUN_1464c7ed1,uVar1,L"GbxAOEComponentTargetHandler_SkillTargetList");
  }
  return;
}



// FUNCTION 14866534e FUN_14866534e body=124 status=ok
// SIG undefined FUN_14866534e(void)

longlong FUN_14866534e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if ((*(longlong *)(param_1 + 8) != *(longlong *)(param_2 + 8)) ||
     (*(int *)(param_1 + 0x10) != *(int *)(param_2 + 0x10))) {
    *(longlong *)(param_1 + 8) = *(longlong *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  lVar4 = *(longlong *)(param_2 + 0x30);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(longlong *)(param_1 + 0x30) = lVar4;
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
  return param_1;
}



// FUNCTION 1486653f0 FUN_1486653f0 body=63 status=ok
// SIG undefined FUN_1486653f0(void)

undefined1 FUN_1486653f0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148665534(param_2,param_3);
    param_3 = param_3 + 600;
    param_2 = param_2 + 600;
  }
  return 1;
}



// FUNCTION 148665458 FUN_148665458 body=59 status=ok
// SIG undefined FUN_148665458(void)

undefined8 FUN_148665458(longlong *param_1)

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



// FUNCTION 1486654a4 FUN_1486654a4 body=65 status=ok
// SIG undefined FUN_1486654a4(void)

void FUN_1486654a4(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x4b) == '\x01') {
    *param_2 = &PTR_FUN_14b0ae520;
    if (param_2[0x48] != 0) {
      FUN_1400020a8();
    }
    FUN_140d2194c(param_2);
    *(undefined1 *)(param_2 + 0x4b) = 0;
  }
  return;
}



// FUNCTION 148665534 FUN_148665534 body=116 status=ok
// SIG undefined FUN_148665534(void)

longlong FUN_148665534(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  FUN_14862f10e();
  *(undefined8 *)(param_1 + 0x228) = *(undefined8 *)(param_2 + 0x228);
  uVar1 = *(undefined4 *)(param_2 + 0x234);
  uVar2 = *(undefined4 *)(param_2 + 0x238);
  uVar3 = *(undefined4 *)(param_2 + 0x23c);
  *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(param_2 + 0x230);
  *(undefined4 *)(param_1 + 0x234) = uVar1;
  *(undefined4 *)(param_1 + 0x238) = uVar2;
  *(undefined4 *)(param_1 + 0x23c) = uVar3;
  FUN_144a787a6(param_1 + 0x240,param_2 + 0x240);
  lVar4 = *(longlong *)(param_2 + 0x250);
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = *(longlong *)(param_2 + 0x250);
    }
  }
  *(longlong *)(param_1 + 0x250) = lVar4;
  return param_1;
}



// FUNCTION 1486655b2 FUN_1486655b2 body=67 status=ok
// SIG undefined FUN_1486655b2(void)

void FUN_1486655b2(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x240);
  FUN_1411c3dfa(param_2);
  *param_2 = &PTR_FUN_14b0ae760;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  *(undefined2 *)(param_2 + 0x46) = 0;
  return;
}



// FUNCTION 1486655f6 FUN_1486655f6 body=51 status=ok
// SIG undefined FUN_1486655f6(void)

void FUN_1486655f6(undefined8 param_1,undefined8 *param_2)

{
  FUN_1411c3dfa(param_2);
  *param_2 = &PTR_FUN_14b0ae760;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  *(undefined2 *)(param_2 + 0x46) = 0;
  return;
}



// FUNCTION 148665684 FUN_148665684 body=59 status=ok
// SIG undefined FUN_148665684(void)

undefined8 FUN_148665684(longlong *param_1)

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



// FUNCTION 1486656d0 FUN_1486656d0 body=40 status=ok
// SIG undefined FUN_1486656d0(void)

void FUN_1486656d0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x240) == '\x01') {
    FUN_145902170(param_2);
    *(undefined1 *)(param_2 + 0x240) = 0;
  }
  return;
}



// FUNCTION 148665746 FUN_148665746 body=38 status=ok
// SIG undefined FUN_148665746(void)

undefined8 FUN_148665746(undefined8 param_1,int param_2)

{
  FUN_145902170();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14866576c FUN_14866576c body=57 status=ok
// SIG undefined FUN_14866576c(void)

void FUN_14866576c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a140 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a140 = FUN_140002ddd(FUN_1464c8068,uVar1,L"GbxAttachableBodyState");
  }
  return;
}



// FUNCTION 1486657a6 FUN_1486657a6 body=57 status=ok
// SIG undefined FUN_1486657a6(void)

void FUN_1486657a6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a110 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a110 = FUN_140002ddd(FUN_1464c7fcf,uVar1,L"GbxAttachableBodySettings");
  }
  return;
}



// FUNCTION 148665812 FUN_148665812 body=167 status=ok
// SIG undefined FUN_148665812(void)

void FUN_148665812(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar2 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1403e3464(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148665910 FUN_148665910 body=230 status=ok
// SIG undefined FUN_148665910(void)

void FUN_148665910(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
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
  FUN_143d53ee4(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486659f8 FUN_1486659f8 body=230 status=ok
// SIG undefined FUN_1486659f8(void)

void FUN_1486659f8(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
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
  FUN_143d53fb8(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148665ae0 FUN_148665ae0 body=366 status=ok
// SIG undefined FUN_148665ae0(void)

void FUN_148665ae0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58 [4];
  undefined2 local_38;
  undefined1 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_58[0] = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_68 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143d53a54(local_60,puVar1,local_68);
  FUN_144a2da94(local_58);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148665c8c FUN_148665c8c body=45 status=ok
// SIG undefined FUN_148665c8c(void)

longlong FUN_148665c8c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_145bcce22(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148665cc4 FUN_148665cc4 body=45 status=ok
// SIG undefined FUN_148665cc4(void)

longlong FUN_148665cc4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_141160264(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148665cf2 FUN_148665cf2 body=48 status=ok
// SIG undefined FUN_148665cf2(void)

longlong FUN_148665cf2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_141160264(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148665d22 FUN_148665d22 body=48 status=ok
// SIG undefined FUN_148665d22(void)

longlong FUN_148665d22(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_141160264(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148665d52 FUN_148665d52 body=48 status=ok
// SIG undefined FUN_148665d52(void)

longlong FUN_148665d52(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_141160264(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148665d82 FUN_148665d82 body=45 status=ok
// SIG undefined FUN_148665d82(void)

longlong FUN_148665d82(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e79a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148665e60 FUN_148665e60 body=39 status=ok
// SIG undefined FUN_148665e60(void)

undefined8 FUN_148665e60(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 0xe; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148665eb0 FUN_148665eb0 body=59 status=ok
// SIG undefined FUN_148665eb0(void)

undefined8 FUN_148665eb0(longlong *param_1)

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



// FUNCTION 148665fb6 FUN_148665fb6 body=59 status=ok
// SIG undefined FUN_148665fb6(void)

undefined8 FUN_148665fb6(longlong *param_1)

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



// FUNCTION 148666058 FUN_148666058 body=99 status=ok
// SIG undefined FUN_148666058(void)

void FUN_148666058(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xa8);
  *param_2 = &PTR_FUN_14b0b84a0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0xf00000d0;
  *(undefined4 *)(param_2 + 0xb) = 0x3f800000;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  *(undefined4 *)(param_2 + 0x13) = 0xf00000d0;
  *(undefined4 *)(param_2 + 0x15) = 0x3f800000;
  return;
}



// FUNCTION 148666134 FUN_148666134 body=95 status=ok
// SIG undefined FUN_148666134(void)

undefined8 FUN_148666134(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
    do {
      *(undefined1 *)(param_2 + -0x54) = *(undefined1 *)(param_3 + -0x54);
      *(undefined4 *)(param_2 + -0x58) = *(undefined4 *)(param_3 + -0x58);
      FUN_140d02432(param_2 + -0x50,param_3 + -0x50);
      FUN_140d02432(param_2,param_3);
      param_3 = param_3 + 0xb0;
      param_2 = param_2 + 0xb0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486661bc FUN_1486661bc body=59 status=ok
// SIG undefined FUN_1486661bc(void)

undefined8 FUN_1486661bc(longlong *param_1)

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



// FUNCTION 148666268 FUN_148666268 body=55 status=ok
// SIG undefined FUN_148666268(void)

void FUN_148666268(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a2d0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a2d0 = FUN_140002ddd(FUN_1464c8c43,uVar1,L"GbxBlendSpaceValueResolver");
  }
  return;
}



// FUNCTION 148666356 FUN_148666356 body=78 status=ok
// SIG undefined FUN_148666356(void)

undefined1 FUN_148666356(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0xc);
      uVar6 = *(undefined4 *)(param_3 + -8);
      uVar7 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_1470d00c2(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486663cc FUN_1486663cc body=59 status=ok
// SIG undefined FUN_1486663cc(void)

undefined8 FUN_1486663cc(longlong *param_1)

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



// FUNCTION 148666412 FUN_148666412 body=32 status=ok
// SIG undefined FUN_148666412(void)

void FUN_148666412(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 148666480 FUN_148666480 body=38 status=ok
// SIG undefined FUN_148666480(void)

undefined8 FUN_148666480(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486664a6 FUN_1486664a6 body=55 status=ok
// SIG undefined FUN_1486664a6(void)

void FUN_1486664a6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a330 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a330 = FUN_140002ddd(FUN_14184b05e,uVar1,L"GbxBodyNodeSettings");
  }
  return;
}



// FUNCTION 148666578 FUN_148666578 body=54 status=ok
// SIG undefined FUN_148666578(void)

undefined1 FUN_148666578(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486666e8(param_2,param_3);
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return 1;
}



// FUNCTION 1486665d6 FUN_1486665d6 body=59 status=ok
// SIG undefined FUN_1486665d6(void)

undefined8 FUN_1486665d6(longlong *param_1)

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



// FUNCTION 14866661c FUN_14866661c body=32 status=ok
// SIG undefined FUN_14866661c(void)

void FUN_14866661c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_1412218b2(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 14866668a FUN_14866668a body=38 status=ok
// SIG undefined FUN_14866668a(void)

undefined8 FUN_14866668a(undefined8 param_1,int param_2)

{
  FUN_1412218b2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486666b0 FUN_1486666b0 body=55 status=ok
// SIG undefined FUN_1486666b0(void)

void FUN_1486666b0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a348 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a348 = FUN_140002ddd(FUN_14184b08f,uVar1,L"GbxBodyNodeState");
  }
  return;
}



// FUNCTION 1486666e8 FUN_1486666e8 body=88 status=ok
// SIG undefined FUN_1486666e8(void)

longlong FUN_1486666e8(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_2 != param_1) {
    FUN_1470d03b0(param_1 + 8,param_2 + 8);
    FUN_1470d03b0(param_1 + 0x20,param_2 + 0x20);
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined4 *)(param_2 + 0x3c);
  uVar2 = *(undefined4 *)(param_2 + 0x40);
  uVar3 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  FUN_148666740(param_1 + 0x50,param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_2 + 0x60);
  return param_1;
}



// FUNCTION 148666740 FUN_148666740 body=93 status=ok
// SIG undefined FUN_148666740(void)

undefined8 * FUN_148666740(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140160f86(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14866679e(param_1,iVar1);
      FUN_148666811(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14866679e FUN_14866679e body=115 status=ok
// SIG undefined FUN_14866679e(void)

void FUN_14866679e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148666811 FUN_148666811 body=55 status=ok
// SIG undefined FUN_148666811(void)

void FUN_148666811(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      lVar1 = *(longlong *)(param_2 + 8 + lVar2);
      *(longlong *)(param_1 + 8 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
        UNLOCK();
      }
      *(undefined8 *)(param_1 + 0x10 + lVar2) = *(undefined8 *)(param_2 + 0x10 + lVar2);
      lVar2 = lVar2 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1486668ea FUN_1486668ea body=54 status=ok
// SIG undefined FUN_1486668ea(void)

undefined1 FUN_1486668ea(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148666a5a(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 148666948 FUN_148666948 body=59 status=ok
// SIG undefined FUN_148666948(void)

undefined8 FUN_148666948(longlong *param_1)

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



// FUNCTION 14866698e FUN_14866698e body=32 status=ok
// SIG undefined FUN_14866698e(void)

void FUN_14866698e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1486669fc FUN_1486669fc body=38 status=ok
// SIG undefined FUN_1486669fc(void)

undefined8 FUN_1486669fc(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148666a22 FUN_148666a22 body=55 status=ok
// SIG undefined FUN_148666a22(void)

void FUN_148666a22(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a360 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a360 = FUN_140002ddd(FUN_1464c8ecb,uVar1,L"GbxBodyNodeSettings_AttachableBody");
  }
  return;
}



// FUNCTION 148666a5a FUN_148666a5a body=86 status=ok
// SIG undefined FUN_148666a5a(void)

longlong FUN_148666a5a(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  lVar8 = *(longlong *)(param_2 + 0x38);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_14689c22e();
      lVar8 = *(longlong *)(param_2 + 0x38);
    }
  }
  *(longlong *)(param_1 + 0x38) = lVar8;
  return param_1;
}



// FUNCTION 148666ab2 FUN_148666ab2 body=116 status=ok
// SIG undefined FUN_148666ab2(void)

void FUN_148666ab2(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 7,0,0x130);
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined1 *)(param_2 + 0xc) = 0;
  *param_2 = &PTR_FUN_14b0b8bf0;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0x800000000;
  return;
}



// FUNCTION 148666ba0 FUN_148666ba0 body=97 status=ok
// SIG undefined FUN_148666ba0(void)

undefined1 FUN_148666ba0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486666e8(param_2,param_3);
    FUN_148666dfc(param_2 + 0x68,param_3 + 0x68);
    param_3 = param_3 + 0x178;
    param_2 = param_2 + 0x178;
  }
  return 1;
}



// FUNCTION 148666c2a FUN_148666c2a body=59 status=ok
// SIG undefined FUN_148666c2a(void)

undefined8 FUN_148666c2a(longlong *param_1)

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



// FUNCTION 148666c76 FUN_148666c76 body=59 status=ok
// SIG undefined FUN_148666c76(void)

void FUN_148666c76(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x2f) == '\x01') {
    *param_2 = &PTR_FUN_14b0b8bf0;
    FUN_148666d74(param_2 + 0xd);
    FUN_1412218b2(param_2);
    *(undefined1 *)(param_2 + 0x2f) = 0;
  }
  return;
}



// FUNCTION 148666d00 FUN_148666d00 body=60 status=ok
// SIG undefined FUN_148666d00(void)

undefined8 * FUN_148666d00(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b0b8bf0;
  FUN_148666d74(param_1 + 0xd);
  FUN_1412218b2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148666d3c FUN_148666d3c body=55 status=ok
// SIG undefined FUN_148666d3c(void)

void FUN_148666d3c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a378 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a378 = FUN_140002ddd(FUN_1464c8f61,uVar1,L"GbxBodyNodeState_AttachableBody");
  }
  return;
}



// FUNCTION 148666d74 FUN_148666d74 body=62 status=ok
// SIG undefined FUN_148666d74(void)

void FUN_148666d74(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x100) == 0) {
    lVar1 = param_1;
  }
  FUN_148666db2(lVar1,*(undefined4 *)(param_1 + 0x108));
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148666db2 FUN_148666db2 body=73 status=ok
// SIG undefined FUN_148666db2(void)

void FUN_148666db2(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x18);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 148666dfc FUN_148666dfc body=90 status=ok
// SIG undefined FUN_148666dfc(void)

longlong FUN_148666dfc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_1 != param_2) {
    lVar1 = *(longlong *)(param_1 + 0x100);
    if (*(longlong *)(param_1 + 0x100) == 0) {
      lVar1 = param_1;
    }
    FUN_148666db2(lVar1,*(undefined4 *)(param_1 + 0x108));
    lVar1 = *(longlong *)(param_2 + 0x100);
    if (*(longlong *)(param_2 + 0x100) == 0) {
      lVar1 = param_2;
    }
    FUN_148666e56(param_1,lVar1,*(undefined4 *)(param_2 + 0x108),*(undefined4 *)(param_1 + 0x10c));
  }
  return param_1;
}



// FUNCTION 148666e56 FUN_148666e56 body=95 status=ok
// SIG undefined FUN_148666e56(void)

void FUN_148666e56(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  
  *(int *)(param_1 + 0x108) = param_3;
  if (param_4 == 0 && param_3 == 0) {
    *(undefined4 *)(param_1 + 0x10c) = 8;
    return;
  }
  FUN_148666eb6(param_1,param_3,param_4);
  lVar1 = *(longlong *)(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x100) == 0) {
    lVar1 = param_1;
  }
  FUN_148666f1e(lVar1,param_2,param_3);
  return;
}



// FUNCTION 148666eb6 FUN_148666eb6 body=104 status=ok
// SIG undefined FUN_148666eb6(void)

void FUN_148666eb6(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 8;
    if (8 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 5,0);
      iVar1 = (int)(uVar2 >> 5);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_148666f56(param_1,0,iVar3,0x20);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x10c) = param_3;
  return;
}



// FUNCTION 148666f1e FUN_148666f1e body=55 status=ok
// SIG undefined FUN_148666f1e(void)

void FUN_148666f1e(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    do {
      uVar2 = ((undefined8 *)(param_2 + lVar3))[1];
      *(undefined8 *)(param_1 + lVar3) = *(undefined8 *)(param_2 + lVar3);
      ((undefined8 *)(param_1 + lVar3))[1] = uVar2;
      *(undefined8 *)(param_1 + 0x10 + lVar3) = *(undefined8 *)(param_2 + 0x10 + lVar3);
      lVar1 = *(longlong *)(param_2 + 0x18 + lVar3);
      *(longlong *)(param_1 + 0x18 + lVar3) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar3 = lVar3 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148666f56 FUN_148666f56 body=142 status=ok
// SIG undefined FUN_148666f56(void)

void FUN_148666f56(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x100);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 5);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 5);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,param_4);
  return;
}



// FUNCTION 14866707a FUN_14866707a body=54 status=ok
// SIG undefined FUN_14866707a(void)

undefined1 FUN_14866707a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14866718c(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 1486670d8 FUN_1486670d8 body=59 status=ok
// SIG undefined FUN_1486670d8(void)

undefined8 FUN_1486670d8(longlong *param_1)

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



// FUNCTION 14866711e FUN_14866711e body=32 status=ok
// SIG undefined FUN_14866711e(void)

void FUN_14866711e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 14866718c FUN_14866718c body=94 status=ok
// SIG undefined FUN_14866718c(void)

longlong FUN_14866718c(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  lVar9 = *(longlong *)(param_2 + 0x38);
  if (DAT_14c950c29 == '\x01') {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_14689c22e();
      lVar9 = *(longlong *)(param_2 + 0x38);
    }
  }
  *(longlong *)(param_1 + 0x38) = lVar9;
  uVar8 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = uVar8;
  return param_1;
}



// FUNCTION 14866728c FUN_14866728c body=54 status=ok
// SIG undefined FUN_14866728c(void)

undefined1 FUN_14866728c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486673f8(param_2,param_3);
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return 1;
}



// FUNCTION 1486672ea FUN_1486672ea body=59 status=ok
// SIG undefined FUN_1486672ea(void)

undefined8 FUN_1486672ea(longlong *param_1)

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



// FUNCTION 148667330 FUN_148667330 body=63 status=ok
// SIG undefined FUN_148667330(void)

void FUN_148667330(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  if (*(char *)(param_2 + 0xf) == '\x01') {
    *param_2 = &PTR_FUN_14b0b9000;
    plVar2 = (longlong *)param_2[0xe];
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    FUN_1412218b2(param_2);
    *(undefined1 *)(param_2 + 0xf) = 0;
  }
  return;
}



// FUNCTION 1486673be FUN_1486673be body=57 status=ok
// SIG undefined FUN_1486673be(void)

void FUN_1486673be(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a3a8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a3a8 = FUN_140002ddd(FUN_1464c9056,uVar1,L"GbxBodyNodeState_AttachableRoot");
  }
  return;
}


