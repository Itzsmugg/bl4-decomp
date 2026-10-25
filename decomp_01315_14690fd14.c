// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14690fd14 FUN_14690fd14 body=37 status=ok
// SIG undefined FUN_14690fd14(void)

void FUN_14690fd14(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 14690fdf6 FUN_14690fdf6 body=59 status=ok
// SIG undefined FUN_14690fdf6(void)

undefined8 FUN_14690fdf6(longlong *param_1)

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



// FUNCTION 14690ff14 FUN_14690ff14 body=80 status=ok
// SIG undefined FUN_14690ff14(void)

undefined1 FUN_14690ff14(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146910096(param_2,param_3);
    FUN_144756208(param_2 + 0x10,param_3 + 0x10);
    FUN_140816cc4(param_2 + 0x20,param_3 + 0x20);
    param_2 = param_2 + 0x70;
    param_3 = param_3 + 0x70;
  }
  return 1;
}



// FUNCTION 14690ff8c FUN_14690ff8c body=59 status=ok
// SIG undefined FUN_14690ff8c(void)

undefined8 FUN_14690ff8c(longlong *param_1)

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



// FUNCTION 14690ffd2 FUN_14690ffd2 body=34 status=ok
// SIG undefined FUN_14690ffd2(void)

void FUN_14690ffd2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_146910042(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 146910042 FUN_146910042 body=83 status=ok
// SIG undefined FUN_146910042(void)

void FUN_146910042(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(param_1 + 4);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146910096 FUN_146910096 body=88 status=ok
// SIG undefined FUN_146910096(void)

undefined8 * FUN_146910096(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1469100ee(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 1469100ee FUN_1469100ee body=98 status=ok
// SIG undefined FUN_1469100ee(void)

void FUN_1469100ee(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,4);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1469101ea FUN_1469101ea body=88 status=ok
// SIG undefined FUN_1469101ea(void)

undefined1 FUN_1469101ea(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      FUN_146910096(param_2 + -0x20,param_3 + -0x20);
      FUN_144756208(param_2 + -0x10,param_3 + -0x10);
      FUN_140816cc4(param_2,param_3);
      param_3 = param_3 + 0x78;
      param_2 = param_2 + 0x78;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14691026a FUN_14691026a body=59 status=ok
// SIG undefined FUN_14691026a(void)

undefined8 FUN_14691026a(longlong *param_1)

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



// FUNCTION 1469102b0 FUN_1469102b0 body=45 status=ok
// SIG undefined FUN_1469102b0(void)

void FUN_1469102b0(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xf) == '\x01') {
    *param_2 = &PTR_FUN_149eba250;
    FUN_146910042(param_2 + 1);
    *(undefined1 *)(param_2 + 0xf) = 0;
  }
  return;
}



// FUNCTION 14691032c FUN_14691032c body=57 status=ok
// SIG undefined FUN_14691032c(void)

undefined8 * FUN_14691032c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149eba250;
  FUN_146910042(param_1 + 1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 146910366 FUN_146910366 body=64 status=ok
// SIG undefined FUN_146910366(void)

longlong FUN_146910366(longlong param_1,int param_2)

{
  FUN_140033559(".\\Runtime/AnimationCore/Public/NodeHierarchy.h",0xdf,
                L"Pure virtual not implemented (%s)",
                L"FNodeHierarchyWithUserData::GetLocalTransform");
  return (longlong)param_2 * 0x60 + *(longlong *)(param_1 + 0x18);
}



// FUNCTION 1469103a6 FUN_1469103a6 body=64 status=ok
// SIG undefined FUN_1469103a6(void)

longlong FUN_1469103a6(longlong param_1,int param_2)

{
  FUN_140033559(".\\Runtime/AnimationCore/Public/NodeHierarchy.h",0xdd,
                L"Pure virtual not implemented (%s)",
                L"FNodeHierarchyWithUserData::GetLocalTransform");
  return (longlong)param_2 * 0x60 + *(longlong *)(param_1 + 0x18);
}



// FUNCTION 1469103e6 FUN_1469103e6 body=64 status=ok
// SIG undefined FUN_1469103e6(void)

longlong FUN_1469103e6(longlong param_1,int param_2)

{
  FUN_140033559(".\\Runtime/AnimationCore/Public/NodeHierarchy.h",0xe0,
                L"Pure virtual not implemented (%s)",
                L"FNodeHierarchyWithUserData::GetGlobalTransform");
  return (longlong)param_2 * 0x60 + *(longlong *)(param_1 + 0x18);
}



// FUNCTION 146910426 FUN_146910426 body=64 status=ok
// SIG undefined FUN_146910426(void)

longlong FUN_146910426(longlong param_1,int param_2)

{
  FUN_140033559(".\\Runtime/AnimationCore/Public/NodeHierarchy.h",0xde,
                L"Pure virtual not implemented (%s)",
                L"FNodeHierarchyWithUserData::GetGlobalTransform");
  return (longlong)param_2 * 0x60 + *(longlong *)(param_1 + 0x18);
}



// FUNCTION 14691048e FUN_14691048e body=165 status=ok
// SIG undefined FUN_14691048e(void)

void FUN_14691048e(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140171a5c(param_1 + 4,0);
  if (0 < (int)param_1[1]) {
    lVar2 = 0;
    lVar1 = 0;
    do {
      local_48 = *param_1 + lVar2;
      FUN_140818534(param_1 + 4,&local_3c,&local_48,0);
      *(int *)(param_1[4] + 8 + (longlong)local_3c * 0x14) = (int)lVar1;
      lVar1 = lVar1 + 1;
      lVar2 = lVar2 + 0x10;
    } while (lVar1 < (int)param_1[1]);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146910646 FUN_146910646 body=129 status=ok
// SIG undefined FUN_146910646(void)

undefined8 FUN_146910646(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0xc4);
      FUN_14054c6c4(param_2 + lVar1 + 200,param_3 + lVar1 + 200);
      *(undefined8 *)(param_2 + 0xd8 + lVar1) = *(undefined8 *)(param_3 + 0xd8 + lVar1);
      lVar1 = lVar1 + 0xe0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1469106f0 FUN_1469106f0 body=59 status=ok
// SIG undefined FUN_1469106f0(void)

undefined8 FUN_1469106f0(longlong *param_1)

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



// FUNCTION 14691073c FUN_14691073c body=47 status=ok
// SIG undefined FUN_14691073c(void)

void FUN_14691073c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe0) == '\x01') {
    if (*(longlong *)(param_2 + 200) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xe0) = 0;
  }
  return;
}



// FUNCTION 146910836 FUN_146910836 body=59 status=ok
// SIG undefined FUN_146910836(void)

undefined8 FUN_146910836(longlong *param_1)

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



// FUNCTION 146910960 FUN_146910960 body=59 status=ok
// SIG undefined FUN_146910960(void)

undefined8 FUN_146910960(longlong *param_1)

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



// FUNCTION 146910a9c FUN_146910a9c body=59 status=ok
// SIG undefined FUN_146910a9c(void)

undefined8 FUN_146910a9c(longlong *param_1)

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



// FUNCTION 146910b3e FUN_146910b3e body=89 status=ok
// SIG undefined FUN_146910b3e(void)

void FUN_146910b3e(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  param_2[2] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *param_2 = DAT_14c8464e0;
  param_2[1] = uVar1;
  uVar1 = DAT_14c8463d8;
  param_2[4] = DAT_14c8463d0;
  param_2[5] = uVar1;
  uVar1 = DAT_14c8463e8;
  param_2[6] = DAT_14c8463e0;
  param_2[7] = uVar1;
  uVar1 = DAT_14c846518;
  param_2[8] = DAT_14c846510;
  param_2[9] = uVar1;
  param_2[10] = DAT_14c846520;
  puVar3 = &DAT_14c846480;
  puVar4 = param_2 + 0xc;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return;
}



// FUNCTION 146910b98 FUN_146910b98 body=89 status=ok
// SIG undefined FUN_146910b98(void)

void FUN_146910b98(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  param_2[2] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *param_2 = DAT_14c8464e0;
  param_2[1] = uVar1;
  uVar1 = DAT_14c8463d8;
  param_2[4] = DAT_14c8463d0;
  param_2[5] = uVar1;
  uVar1 = DAT_14c8463e8;
  param_2[6] = DAT_14c8463e0;
  param_2[7] = uVar1;
  uVar1 = DAT_14c846518;
  param_2[8] = DAT_14c846510;
  param_2[9] = uVar1;
  param_2[10] = DAT_14c846520;
  puVar3 = &DAT_14c846480;
  puVar4 = param_2 + 0xc;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return;
}



// FUNCTION 146910c0a FUN_146910c0a body=68 status=ok
// SIG undefined FUN_146910c0a(void)

undefined8 FUN_146910c0a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0xc0);
      lVar1 = lVar1 + 0xc0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 146910c76 FUN_146910c76 body=59 status=ok
// SIG undefined FUN_146910c76(void)

undefined8 FUN_146910c76(longlong *param_1)

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



// FUNCTION 146910dee FUN_146910dee body=59 status=ok
// SIG undefined FUN_146910dee(void)

undefined8 FUN_146910dee(longlong *param_1)

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



// FUNCTION 146910f2e FUN_146910f2e body=59 status=ok
// SIG undefined FUN_146910f2e(void)

undefined8 FUN_146910f2e(longlong *param_1)

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



// FUNCTION 146910fce FUN_146910fce body=34 status=ok
// SIG undefined FUN_146910fce(void)

undefined8 FUN_146910fce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146910ff0 FUN_146910ff0 body=41 status=ok
// SIG undefined FUN_146910ff0(void)

void FUN_146910ff0(void)

{
  FUN_140033559(".\\Runtime/AnimationCore/Public\\Constraint.h",0x168,
                L"Pure virtual not implemented (%s)",L"AccumulateConstraintTransform");
  return;
}



// FUNCTION 14691102a FUN_14691102a body=63 status=ok
// SIG undefined FUN_14691102a(void)

undefined8 FUN_14691102a(undefined8 param_1,undefined8 param_2)

{
  FUN_140033559(".\\Runtime/AnimationCore/Public\\Constraint.h",0x178,
                L"Pure virtual not implemented (%s)",L"GetDisplayString");
  FUN_140056680(param_2,&DAT_149e01fe8);
  return param_2;
}



// FUNCTION 146911079 FUN_146911079 body=351 status=ok
// SIG undefined FUN_146911079(void)

longlong * FUN_146911079(longlong *param_1,byte *param_2)

{
  int *piVar1;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_24 = (uint)*param_2;
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    *param_2 = local_24 != 0;
  }
  else {
    *param_2 = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_24 = (uint)param_2[1];
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    param_2[1] = local_24 != 0;
  }
  else {
    param_2[1] = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_24 = (uint)param_2[2];
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    param_2[2] = local_24 != 0;
  }
  else {
    param_2[2] = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14691128c FUN_14691128c body=59 status=ok
// SIG undefined FUN_14691128c(void)

undefined8 FUN_14691128c(longlong *param_1)

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



// FUNCTION 14691132c FUN_14691132c body=34 status=ok
// SIG undefined FUN_14691132c(void)

undefined8 FUN_14691132c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14691136e FUN_14691136e body=55 status=ok
// SIG undefined FUN_14691136e(void)

undefined8 FUN_14691136e(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  
  if ((ulonglong)*(byte *)(param_1 + 0x10) < 4) {
    puVar1 = (undefined2 *)(&PTR_u_Translation_149ebbae0)[*(byte *)(param_1 + 0x10)];
  }
  else {
    puVar1 = &DAT_149e01fe8;
  }
  FUN_140056680(param_2,puVar1);
  return param_2;
}



// FUNCTION 1469113a6 FUN_1469113a6 body=94 status=ok
// SIG undefined FUN_1469113a6(void)

void FUN_1469113a6(longlong param_1,longlong *param_2)

{
  undefined1 *puVar1;
  
  FUN_146911079(param_2,param_1 + 8);
  puVar1 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
                    /* WARNING: Could not recover jumptable at 0x0001469113ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x170))(param_2,(undefined1 *)(param_1 + 0x10),1);
    return;
  }
  *(undefined1 *)(param_1 + 0x10) = *puVar1;
  *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  return;
}



// FUNCTION 14691143a FUN_14691143a body=62 status=ok
// SIG undefined FUN_14691143a(void)

undefined8 FUN_14691143a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0x10;
    do {
      *(undefined1 *)(param_2 + -6 + lVar1) = *(undefined1 *)(param_3 + -6 + lVar1);
      *(undefined2 *)(param_2 + -8 + lVar1) = *(undefined2 *)(param_3 + -8 + lVar1);
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
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



// FUNCTION 1469114a0 FUN_1469114a0 body=59 status=ok
// SIG undefined FUN_1469114a0(void)

undefined8 FUN_1469114a0(longlong *param_1)

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



// FUNCTION 146911540 FUN_146911540 body=368 status=ok
// SIG undefined FUN_146911540(void)

void FUN_146911540(undefined8 *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  *(undefined2 *)(param_1 + 1) = 0x101;
  *(undefined1 *)((longlong)param_1 + 10) = 1;
  *param_1 = &PTR_FUN_149ebb2c0;
  *(undefined1 *)(param_1 + 5) = 1;
  dVar3 = DAT_14c8462e8 * DAT_14c8462e8 +
          DAT_14c8462d8 * DAT_14c8462d8 + DAT_14c8462e0 * DAT_14c8462e0;
  if (((dVar3 != 1.0) ||
      (dVar4 = DAT_14c8462d8, dVar1 = DAT_14c8462e0, dVar2 = DAT_14c8462e8, NAN(dVar3))) &&
     (dVar4 = DAT_14c8464e0, dVar1 = DAT_14c8464e8, dVar2 = DAT_14c8464f0,
     9.99999993922529e-09 <= dVar3)) {
    dVar4 = 1.0 / SQRT(dVar3);
    dVar2 = DAT_14c8462e8 * dVar4;
    dVar1 = DAT_14c8462e0 * dVar4;
    dVar4 = DAT_14c8462d8 * dVar4;
  }
  param_1[2] = dVar4;
  param_1[3] = dVar1;
  param_1[4] = dVar2;
  *(undefined1 *)(param_1 + 9) = 1;
  dVar3 = DAT_14c8462d0 * DAT_14c8462d0 +
          DAT_14c8462c0 * DAT_14c8462c0 + DAT_14c8462c8 * DAT_14c8462c8;
  if (((dVar3 != 1.0) ||
      (dVar4 = DAT_14c8462c0, dVar1 = DAT_14c8462c8, dVar2 = DAT_14c8462d0, NAN(dVar3))) &&
     (dVar4 = DAT_14c8464e0, dVar1 = DAT_14c8464e8, dVar2 = DAT_14c8464f0,
     9.99999993922529e-09 <= dVar3)) {
    dVar4 = 1.0 / SQRT(dVar3);
    dVar2 = DAT_14c8462d0 * dVar4;
    dVar1 = DAT_14c8462c8 * dVar4;
    dVar4 = DAT_14c8462c0 * dVar4;
  }
  param_1[6] = dVar4;
  param_1[7] = dVar1;
  param_1[8] = dVar2;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return;
}



// FUNCTION 1469116b0 FUN_1469116b0 body=34 status=ok
// SIG undefined FUN_1469116b0(void)

undefined8 FUN_1469116b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1469116d6 FUN_1469116d6 body=32 status=ok
// SIG undefined FUN_1469116d6(void)

undefined8 FUN_1469116d6(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,&DAT_149ebb300);
  return param_2;
}



// FUNCTION 1469116f6 FUN_1469116f6 body=187 status=ok
// SIG undefined FUN_1469116f6(void)

void FUN_1469116f6(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146911079(param_2,param_1 + 8);
  FUN_1469117b2(param_2,param_1 + 0x10);
  FUN_1469117b2(param_2,param_1 + 0x30);
  piVar1 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar1 + 1) {
    local_24 = (uint)*(byte *)(param_1 + 0x50);
    (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_2);
    }
    *(bool *)(param_1 + 0x50) = local_24 != 0;
  }
  else {
    *(bool *)(param_1 + 0x50) = *piVar1 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469117b2 FUN_1469117b2 body=159 status=ok
// SIG undefined FUN_1469117b2(void)

longlong * FUN_1469117b2(longlong *param_1,longlong param_2)

{
  int *piVar1;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14480c34d();
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_24 = (uint)*(byte *)(param_2 + 0x18);
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    *(bool *)(param_2 + 0x18) = local_24 != 0;
  }
  else {
    *(bool *)(param_2 + 0x18) = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14691186c FUN_14691186c body=41 status=ok
// SIG undefined FUN_14691186c(void)

void FUN_14691186c(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 1469118ac FUN_1469118ac body=54 status=ok
// SIG undefined FUN_1469118ac(void)

undefined1 FUN_1469118ac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1469119d2(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 14691190a FUN_14691190a body=59 status=ok
// SIG undefined FUN_14691190a(void)

undefined8 FUN_14691190a(longlong *param_1)

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



// FUNCTION 146911950 FUN_146911950 body=51 status=ok
// SIG undefined FUN_146911950(void)

void FUN_146911950(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if (*(char *)(param_2 + 0x10) == '\x01') {
    puVar1 = *(undefined8 **)(param_2 + 8);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
      *(undefined8 *)(param_2 + 8) = 0;
    }
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 1469119d2 FUN_1469119d2 body=170 status=ok
// SIG undefined FUN_1469119d2(void)

char * FUN_1469119d2(char *param_1,char *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar5 = *(undefined8 **)(param_1 + 8);
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5,1);
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
  }
  cVar1 = *param_2;
  *param_1 = cVar1;
  lVar2 = *(longlong *)(param_2 + 8);
  if (lVar2 != 0) {
    if (cVar1 == '\x01') {
      puVar3 = (undefined8 *)FUN_14494321d(0x70);
      *(undefined2 *)(puVar3 + 1) = *(undefined2 *)(lVar2 + 8);
      *(undefined1 *)((longlong)puVar3 + 10) = *(undefined1 *)(lVar2 + 10);
      *puVar3 = &PTR_FUN_149ebb2c0;
      puVar5 = (undefined8 *)(lVar2 + 0x10);
      puVar6 = puVar3 + 2;
      for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
    }
    else {
      if (cVar1 != '\0') {
        return param_1;
      }
      puVar3 = (undefined8 *)FUN_14494321d(0x18);
      *(undefined2 *)(puVar3 + 1) = *(undefined2 *)(lVar2 + 8);
      *(undefined1 *)((longlong)puVar3 + 10) = *(undefined1 *)(lVar2 + 10);
      *puVar3 = &PTR_FUN_149ebb0e0;
      *(undefined1 *)(puVar3 + 2) = *(undefined1 *)(lVar2 + 0x10);
    }
    *(undefined8 **)(param_1 + 8) = puVar3;
  }
  return param_1;
}



// FUNCTION 146911a7e FUN_146911a7e body=116 status=ok
// SIG undefined FUN_146911a7e(void)

void FUN_146911a7e(undefined8 param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = 2;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0x10) = 0x3f800000;
  param_2[0x14] = 1;
  puVar2 = &DAT_14c846480;
  puVar3 = (undefined8 *)(param_2 + 0x20);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined4 *)(param_2 + 0x90) = 0;
  *(undefined4 *)(param_2 + 0x94) = 0;
  *(undefined4 *)(param_2 + 0x98) = 0;
  *(undefined4 *)(param_2 + 0x9c) = 0x3ff00000;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(undefined8 *)(param_2 + 0xb0) = 0;
  *(undefined8 *)(param_2 + 0xb8) = 0;
  *(undefined8 *)(param_2 + 0xc0) = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 200) = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 0xd0) = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 0xd8) = 0;
  return;
}



// FUNCTION 146911af2 FUN_146911af2 body=116 status=ok
// SIG undefined FUN_146911af2(void)

void FUN_146911af2(undefined8 param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = 2;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0x10) = 0x3f800000;
  param_2[0x14] = 1;
  puVar2 = &DAT_14c846480;
  puVar3 = (undefined8 *)(param_2 + 0x20);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined4 *)(param_2 + 0x90) = 0;
  *(undefined4 *)(param_2 + 0x94) = 0;
  *(undefined4 *)(param_2 + 0x98) = 0;
  *(undefined4 *)(param_2 + 0x9c) = 0x3ff00000;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(undefined8 *)(param_2 + 0xb0) = 0;
  *(undefined8 *)(param_2 + 0xb8) = 0;
  *(undefined8 *)(param_2 + 0xc0) = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 200) = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 0xd0) = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 0xd8) = 0;
  return;
}



// FUNCTION 146911b66 FUN_146911b66 body=41 status=ok
// SIG undefined FUN_146911b66(void)

void FUN_146911b66(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 146911ba6 FUN_146911ba6 body=81 status=ok
// SIG undefined FUN_146911ba6(void)

undefined8 FUN_146911ba6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1469119d2(param_2,param_3);
    memcpy((void *)(param_2 + 0x10),(void *)(param_3 + 0x10),0xd0);
    param_2 = param_2 + 0xe0;
    param_3 = param_3 + 0xe0;
  }
  return 1;
}



// FUNCTION 146911c20 FUN_146911c20 body=59 status=ok
// SIG undefined FUN_146911c20(void)

undefined8 FUN_146911c20(longlong *param_1)

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



// FUNCTION 146911c6c FUN_146911c6c body=57 status=ok
// SIG undefined FUN_146911c6c(void)

void FUN_146911c6c(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if (*(char *)(param_2 + 0xe0) == '\x01') {
    puVar1 = *(undefined8 **)(param_2 + 8);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
      *(undefined8 *)(param_2 + 8) = 0;
    }
    *(undefined1 *)(param_2 + 0xe0) = 0;
  }
  return;
}



// FUNCTION 146911d32 FUN_146911d32 body=39 status=ok
// SIG undefined FUN_146911d32(void)

undefined8 FUN_146911d32(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 146911d82 FUN_146911d82 body=59 status=ok
// SIG undefined FUN_146911d82(void)

undefined8 FUN_146911d82(longlong *param_1)

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



// FUNCTION 146911ebc FUN_146911ebc body=96 status=ok
// SIG undefined FUN_146911ebc(void)

undefined1 FUN_146911ebc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
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
  undefined4 uVar16;
  undefined4 uVar17;
  longlong lVar18;
  
  if (param_4 != 0) {
    lVar18 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar18);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      uVar7 = puVar1[4];
      uVar8 = puVar1[5];
      uVar9 = puVar1[6];
      uVar10 = puVar1[7];
      uVar11 = puVar1[8];
      uVar12 = puVar1[9];
      uVar13 = puVar1[10];
      uVar14 = puVar1[0xb];
      uVar15 = puVar1[0xd];
      uVar16 = puVar1[0xe];
      uVar17 = puVar1[0xf];
      lVar2 = param_2 + 0x40 + lVar18;
      *(undefined4 *)(lVar2 + -0x10) = puVar1[0xc];
      *(undefined4 *)(lVar2 + -0xc) = uVar15;
      *(undefined4 *)(lVar2 + -8) = uVar16;
      *(undefined4 *)(lVar2 + -4) = uVar17;
      *(undefined4 *)(lVar2 + -0x20) = uVar11;
      *(undefined4 *)(lVar2 + -0x1c) = uVar12;
      *(undefined4 *)(lVar2 + -0x18) = uVar13;
      *(undefined4 *)(lVar2 + -0x14) = uVar14;
      *(undefined4 *)(lVar2 + -0x30) = uVar7;
      *(undefined4 *)(lVar2 + -0x2c) = uVar8;
      *(undefined4 *)(lVar2 + -0x28) = uVar9;
      *(undefined4 *)(lVar2 + -0x24) = uVar10;
      *(undefined4 *)(lVar2 + -0x40) = uVar3;
      *(undefined4 *)(lVar2 + -0x3c) = uVar4;
      *(undefined4 *)(lVar2 + -0x38) = uVar5;
      *(undefined4 *)(lVar2 + -0x34) = uVar6;
      FUN_14054c6c4();
      lVar18 = lVar18 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 146911f44 FUN_146911f44 body=59 status=ok
// SIG undefined FUN_146911f44(void)

undefined8 FUN_146911f44(longlong *param_1)

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



// FUNCTION 146911f8a FUN_146911f8a body=38 status=ok
// SIG undefined FUN_146911f8a(void)

void FUN_146911f8a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 1469120ae FUN_1469120ae body=59 status=ok
// SIG undefined FUN_1469120ae(void)

undefined8 FUN_1469120ae(longlong *param_1)

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



// FUNCTION 146912150 FUN_146912150 body=3 status=ok
// SIG undefined FUN_146912150(void)

undefined8 FUN_146912150(void)

{
  return 0;
}



// FUNCTION 146912154 FUN_146912154 body=5 status=ok
// SIG undefined FUN_146912154(void)

undefined8 FUN_146912154(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// FUNCTION 14691215a FUN_14691215a body=5 status=ok
// SIG undefined FUN_14691215a(void)

undefined8 FUN_14691215a(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// FUNCTION 146912160 FUN_146912160 body=8 status=ok
// SIG undefined FUN_146912160(void)

bool FUN_146912160(longlong param_1,longlong param_2)

{
  return *(longlong *)(param_1 + 0x18) == param_2;
}



// FUNCTION 146912168 FUN_146912168 body=3 status=ok
// SIG undefined FUN_146912168(void)

undefined1 FUN_146912168(void)

{
  return 1;
}



// FUNCTION 14691216c FUN_14691216c body=93 status=ok
// SIG undefined FUN_14691216c(void)

void FUN_14691216c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FDefaultModuleImpl>,class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1469121ca FUN_1469121ca body=123 status=ok
// SIG undefined FUN_1469121ca(void)

void FUN_1469121ca(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 =
       TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FDefaultModuleImpl>,class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146912246 FUN_146912246 body=21 status=ok
// SIG undefined FUN_146912246(void)

undefined8 FUN_146912246(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14691225c FUN_14691225c body=114 status=ok
// SIG undefined FUN_14691225c(void)

void FUN_14691225c(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 1469122ce FUN_1469122ce body=68 status=ok
// SIG undefined FUN_1469122ce(void)

void FUN_1469122ce(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_1457c2a36(param_1);
  return;
}



// FUNCTION 146912312 FUN_146912312 body=132 status=ok
// SIG undefined FUN_146912312(void)

void FUN_146912312(longlong *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     (int)(((uint)param_2 << 0x10 | uVar4) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x18) == param_2) {
          FUN_146912396(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 146912396 FUN_146912396 body=87 status=ok
// SIG undefined FUN_146912396(void)

void FUN_146912396(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_14691225c();
  return;
}



// FUNCTION 1469123ee FUN_1469123ee body=65 status=ok
// SIG undefined FUN_1469123ee(void)

undefined8 * FUN_1469123ee(void)

{
  DWORD DVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14494321d(0x20);
  *puVar2 = 0;
  puVar2[1] = 0;
  DVar1 = GetCurrentThreadId();
  *(DWORD *)(puVar2 + 1) = DVar1;
  *puVar2 = &PTR_FUN_149ebbad0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  return puVar2;
}



// FUNCTION 146912430 FUN_146912430 body=43 status=ok
// SIG undefined FUN_146912430(void)

undefined8 FUN_146912430(undefined8 param_1,int param_2)

{
  FUN_1469124aa();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14691245c FUN_14691245c body=77 status=ok
// SIG undefined FUN_14691245c(void)

undefined8 * FUN_14691245c(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149ebbad8;
  puVar1 = TlsGetValue(DAT_14c75ecfc);
  if (puVar1 == param_1) {
    TlsSetValue(DAT_14c75ecfc,(LPVOID)0x0);
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1469124aa FUN_1469124aa body=82 status=ok
// SIG undefined FUN_1469124aa(void)

void FUN_1469124aa(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149ebbad0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_149ebbad8;
  puVar1 = TlsGetValue(DAT_14c75ecfc);
  if (puVar1 != param_1) {
    return;
  }
  TlsSetValue(DAT_14c75ecfc,(LPVOID)0x0);
  return;
}



// FUNCTION 1469124fc FUN_1469124fc body=63 status=ok
// SIG undefined FUN_1469124fc(void)

void FUN_1469124fc(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14691253c(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x60,0x10);
  }
  return;
}



// FUNCTION 14691253c FUN_14691253c body=117 status=ok
// SIG undefined FUN_14691253c(void)

ulonglong FUN_14691253c(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x60) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x60,0x10);
      uVar1 = uVar1 / 0x60;
    }
  }
  return uVar1;
}



// FUNCTION 1469125b3 FUN_1469125b3 body=57 status=ok
// SIG undefined FUN_1469125b3(void)

void FUN_1469125b3(void)

{
  undefined8 uVar1;
  
  if (DAT_14c964c28 == 0) {
    uVar1 = FUN_145c5ab6f();
    DAT_14c964c28 = FUN_14171c317(FUN_146277e85,uVar1,L"EControllerHand");
  }
  return;
}



// FUNCTION 1469125f0 FUN_1469125f0 body=10 status=ok
// SIG undefined FUN_1469125f0(void)

undefined8 FUN_1469125f0(longlong *param_1,longlong *param_2)

{
  return CONCAT71((int7)((ulonglong)*param_1 >> 8),*param_1 == *param_2);
}



// FUNCTION 1469125fa FUN_1469125fa body=40 status=ok
// SIG undefined FUN_1469125fa(void)

undefined8 FUN_1469125fa(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  FUN_1413a51d4();
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x40)) &
            0xffffffffffffff10;
    uVar3 = CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 4);
  }
  return uVar3;
}



// FUNCTION 146912622 FUN_146912622 body=366 status=ok
// SIG undefined FUN_146912622(void)

undefined8 FUN_146912622(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined2 *local_60;
  int local_58;
  undefined8 local_50;
  uint local_48;
  undefined4 uStack_44;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = *(uint *)(param_2 + 8);
  FUN_1446f470e(&local_38,L"EKeys",1);
  cVar2 = FUN_1468ec31e(&local_48,local_38);
  if (cVar2 == '\0') {
    uVar1 = *(ulonglong *)(param_2 + 0xc);
    FUN_1401a700c(&local_48,6);
    if (uVar1 == local_48) {
      (**(code **)(**(longlong **)(*param_3 + 8) + 0x160))(*(longlong **)(*param_3 + 8),param_1);
    }
  }
  else {
    (**(code **)(**(longlong **)(*param_3 + 8) + 0x160))(*(longlong **)(*param_3 + 8),param_1);
    FUN_1400021e4(param_1,&local_48);
    local_70 = 0xffffffff;
    local_78 = 0;
    iVar3 = FUN_1447ee042(&local_48,L"EKeys::",7,1);
    if (iVar3 != -1) {
      FUN_144a49bb4(&local_48,&local_60,iVar3 + 7);
      puVar5 = local_60;
      if (local_58 == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      FUN_1446f470e(&local_50,puVar5,1);
      *param_1 = local_50;
      if (local_60 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    if (CONCAT44(uStack_44,local_48) != 0) {
      FUN_1400020a8();
    }
    uVar4 = 1;
    if (iVar3 != -1) goto LAB_146912727;
  }
  uVar4 = 0;
LAB_146912727:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 146912792 FUN_146912792 body=104 status=ok
// SIG undefined FUN_146912792(void)

void FUN_146912792(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400021e4(param_1,&local_28);
  iVar1 = local_20 + -1;
  if (local_20 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(param_2,local_28,iVar1);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469127fc FUN_1469127fc body=40 status=ok
// SIG undefined FUN_1469127fc(void)

ulonglong FUN_1469127fc(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  FUN_1413a51d4();
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x98)) &
            0xffffffffffffff01;
  }
  return uVar2;
}



// FUNCTION 146912824 FUN_146912824 body=137 status=ok
// SIG undefined FUN_146912824(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_146912824(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c966e60) {
    FUN_144b3d300(&DAT_14c966e60);
    if (DAT_14c966e60 == -1) {
      DAT_14c966e50 = 0;
      _DAT_14c966e58 = 0;
      atexit(FUN_14284874f);
      _Init_thread_footer(&DAT_14c966e60);
    }
  }
  FUN_1413a51d4(param_1);
  puVar1 = &DAT_14c966e50;
  if (*(longlong *)(param_1 + 8) != 0) {
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 8) + 0xa0);
  }
  return puVar1;
}



// FUNCTION 1469128ce FUN_1469128ce body=72 status=ok
// SIG undefined FUN_1469128ce(void)

void FUN_1469128ce(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_2 + 8) = 0;
  plVar3 = *(longlong **)(param_2 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x10) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00014691290b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146912924 FUN_146912924 body=117 status=ok
// SIG undefined FUN_146912924(void)

undefined8 FUN_146912924(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined1 auStack_58 [40];
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_4 == 0) {
    (**(code **)(*param_1 + 8))(param_1,local_30);
    FUN_146912792(param_3,param_2);
    (**(code **)(*param_1 + 8))(param_1,local_30);
  }
  else {
    FUN_146912792(param_3,param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469129bc FUN_1469129bc body=64 status=ok
// SIG undefined FUN_1469129bc(void)

void FUN_1469129bc(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x18) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 0x10);
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
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 146912a40 FUN_146912a40 body=102 status=ok
// SIG undefined FUN_146912a40(void)

void FUN_146912a40(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
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
  plVar3 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x000146912a81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146912aa6 FUN_146912aa6 body=31 status=ok
// SIG undefined FUN_146912aa6(void)

undefined8 FUN_146912aa6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146912ae2 FUN_146912ae2 body=93 status=ok
// SIG undefined FUN_146912ae2(void)

void FUN_146912ae2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149ec51b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146912b40 FUN_146912b40 body=123 status=ok
// SIG undefined FUN_146912b40(void)

void FUN_146912b40(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149ec51b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146912bbc FUN_146912bbc body=21 status=ok
// SIG undefined FUN_146912bbc(void)

undefined8 FUN_146912bbc(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146912bf4 FUN_146912bf4 body=126 status=ok
// SIG undefined FUN_146912bf4(void)

void FUN_146912bf4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149ec52d0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  lVar2 = *(longlong *)(param_1 + 0x18);
  puVar1[3] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  *puVar1 = &PTR_FUN_149ec5260;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 146912c72 FUN_146912c72 body=161 status=ok
// SIG undefined FUN_146912c72(void)

void FUN_146912c72(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  _LIST_ENTRY *p_Var2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149ec52d0;
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var2 = *(_LIST_ENTRY **)(param_1 + 0x18);
  (p_Var1->ProcessLocksList).Blink = p_Var2;
  if (p_Var2 != (_LIST_ENTRY *)0x0) {
    LOCK();
    *(int *)&p_Var2->Blink = *(int *)&p_Var2->Blink + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar3;
  p_Var1->ContentionCount = (int)((ulonglong)uVar3 >> 0x20);
  *(undefined ***)p_Var1 = &PTR_FUN_149ec5260;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146912d14 FUN_146912d14 body=104 status=ok
// SIG undefined FUN_146912d14(void)

undefined8 FUN_146912d14(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(undefined8 *)(param_1 + 8);
  pcVar1 = *(code **)(param_1 + 0x28);
  local_20 = *(undefined8 *)(param_1 + 0x10);
  local_18 = *(longlong *)(param_1 + 0x18);
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  (*pcVar1)(param_2,&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146912d7e FUN_146912d7e body=119 status=ok
// SIG undefined FUN_146912d7e(void)

undefined8 FUN_146912d7e(longlong param_1)

{
  code *pcVar1;
  undefined1 auStack_58 [32];
  longlong *local_38 [2];
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *(undefined8 *)(param_1 + 8);
  pcVar1 = *(code **)(param_1 + 0x28);
  local_20 = *(undefined8 *)(param_1 + 0x10);
  local_18 = *(longlong *)(param_1 + 0x18);
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  (*pcVar1)(local_38,&local_28);
  if (local_38[0] != (longlong *)0x0) {
    (**(code **)(*local_38[0] + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146912df8 FUN_146912df8 body=136 status=ok
// SIG undefined FUN_146912df8(void)

void FUN_146912df8(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14c966da0;
  if (DAT_14c966dd4 != 0) {
    *(int *)(DAT_14c966da0 + (longlong)DAT_14c966dd0 * 0x30) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x30) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14c966dd4) {
    iVar4 = DAT_14c966dd0;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x30) = iVar4;
  DAT_14c966dd4 = DAT_14c966dd4 + 1;
  puVar3 = &DAT_14c966db0;
  if (DAT_14c966dc0 != (undefined *)0x0) {
    puVar3 = DAT_14c966dc0;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14c966dd0 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 146912e80 FUN_146912e80 body=128 status=ok
// SIG undefined FUN_146912e80(void)

void FUN_146912e80(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14c966df0;
  if (DAT_14c966e24 != 0) {
    *(int *)(DAT_14c966df0 + (longlong)DAT_14c966e20 * 0x28) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x28) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14c966e24) {
    iVar4 = DAT_14c966e20;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x28) = iVar4;
  DAT_14c966e24 = DAT_14c966e24 + 1;
  puVar3 = &DAT_14c966e00;
  if (DAT_14c966e10 != (undefined *)0x0) {
    puVar3 = DAT_14c966e10;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14c966e20 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 146912f00 FUN_146912f00 body=322 status=ok
// SIG undefined FUN_146912f00(void)

void FUN_146912f00(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x24 + (longlong)iVar4 * 0x28) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146913044 FUN_146913044 body=311 status=ok
// SIG undefined FUN_146913044(void)

void FUN_146913044(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      plVar3 = *(longlong **)(*local_68 + 0x18 + (longlong)iStack_4c * 0x28);
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
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14691317c FUN_14691317c body=114 status=ok
// SIG undefined FUN_14691317c(void)

void FUN_14691317c(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 1469131ee FUN_1469131ee body=81 status=ok
// SIG undefined FUN_1469131ee(void)

longlong FUN_1469131ee(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  bool bVar3;
  
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar1 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x48);
    }
    iVar2 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        bVar3 = *(uint *)(*(longlong *)(param_1 + 8) + (longlong)iVar2 * 0x20) == param_2;
        lVar1 = CONCAT71((int7)((ulonglong)lVar1 >> 8),bVar3);
        if (bVar3) {
          return lVar1;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 8) + 0x18);
      } while (iVar2 != -1);
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 146913240 FUN_146913240 body=141 status=ok
// SIG undefined FUN_146913240(void)

void FUN_146913240(longlong param_1,undefined8 *param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar2 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x48);
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & param_3) * 4);
    if (iVar1 != -1) {
      lVar2 = *(longlong *)(param_1 + 8);
      iVar4 = iVar1;
      do {
        if (*(uint *)(lVar2 + (longlong)iVar4 * 0x20) == param_3) goto LAB_14691329f;
        iVar4 = *(int *)((longlong)iVar4 * 0x20 + lVar2 + 0x18);
      } while (iVar4 != -1);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return;
  while (iVar1 = *(int *)(lVar3 + 0x18), iVar1 != -1) {
LAB_14691329f:
    lVar3 = lVar2 + (longlong)iVar1 * 0x20;
    if (*(uint *)(lVar2 + (longlong)iVar1 * 0x20) == param_3) goto LAB_1469132b4;
  }
  lVar3 = 0;
LAB_1469132b4:
  *param_2 = *(undefined8 *)(lVar3 + 8);
  lVar2 = *(longlong *)(lVar3 + 0x10);
  param_2[1] = lVar2;
  if (lVar2 == 0) {
    return;
  }
  LOCK();
  *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  UNLOCK();
  return;
}



// FUNCTION 1469132ce FUN_1469132ce body=125 status=ok
// SIG undefined FUN_1469132ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1469132ce(void)

{
  _DAT_14c967010 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c967018,1);
  _DAT_14c967000 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014691332c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c967008,1);
  return;
}



// FUNCTION 14691334c FUN_14691334c body=118 status=ok
// SIG undefined FUN_14691334c(void)

void FUN_14691334c(longlong param_1,undefined4 *param_2,double *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar3 = 0;
    do {
      if (((((double)*(int *)(lVar2 + 0x30 + lVar3) <= *param_3) &&
           (*param_3 < (double)*(int *)(lVar2 + 0x38 + lVar3))) &&
          ((double)*(int *)(lVar2 + 0x34 + lVar3) <= param_3[1])) &&
         (param_3[1] < (double)*(int *)(lVar2 + 0x3c + lVar3))) {
        puVar1 = (undefined4 *)(lVar2 + 0x40 + lVar3);
        uVar4 = *puVar1;
        uVar5 = puVar1[1];
        uVar6 = puVar1[2];
        uVar7 = puVar1[3];
        goto LAB_1469133b6;
      }
      lVar3 = lVar3 + 0x58;
    } while ((longlong)*(int *)(param_1 + 0x10) * 0x58 - lVar3 != 0);
  }
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
LAB_1469133b6:
  *param_2 = uVar4;
  param_2[1] = uVar5;
  param_2[2] = uVar6;
  param_2[3] = uVar7;
  return;
}



// FUNCTION 1469133c2 FUN_1469133c2 body=7 status=ok
// SIG undefined FUN_1469133c2(void)

undefined1 FUN_1469133c2(void)

{
  return DAT_14c967048;
}



// FUNCTION 1469133ca FUN_1469133ca body=175 status=ok
// SIG undefined FUN_1469133ca(void)

ulonglong FUN_1469133ca(void)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c967058) {
    FUN_144b3d300(&DAT_14c967058);
    if (DAT_14c967058 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14c967050 =
           (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"rhi.SyncInterval",1);
      _Init_thread_footer(&DAT_14c967058);
    }
  }
  uVar3 = 0;
  if (DAT_14c967050 != (longlong *)0x0) {
    iVar1 = (**(code **)(*DAT_14c967050 + 0xb0))();
    if (0 < iVar1) {
      iVar2 = FUN_14682fdfe();
      uVar3 = (longlong)iVar2 / (longlong)iVar1 & 0xffffffff;
    }
  }
  return uVar3;
}



// FUNCTION 14691347a FUN_14691347a body=229 status=ok
// SIG undefined FUN_14691347a(void)

void FUN_14691347a(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c967068) && (FUN_144b3d300(&DAT_14c967068), DAT_14c967068 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14c967060 = (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"rhi.SyncInterval",1);
    _Init_thread_footer(&DAT_14c967068);
  }
  if (-1 < param_1) {
    if (param_1 == 0) {
      iVar1 = 0;
      if (DAT_14c967060 == 0) goto LAB_1469134a6;
    }
    else {
      iVar1 = FUN_14682fdfe();
      if ((iVar1 % param_1 != 0) || (FUN_14682fdfe(), DAT_14c967060 == 0)) goto LAB_1469134a6;
      iVar2 = FUN_14682fdfe();
      iVar1 = 1;
      if (1 < iVar2 / param_1) {
        iVar1 = iVar2 / param_1;
      }
    }
    FUN_140635eb8(DAT_14c967060,iVar1,0xd000000,0);
  }
LAB_1469134a6:
  FUN_1469133ca();
  return;
}



// FUNCTION 146913560 FUN_146913560 body=330 status=ok
// SIG undefined FUN_146913560(void)

undefined4 FUN_146913560(longlong param_1,int param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined4 *)(param_3 + 8) = 0;
  if (*(int *)(param_3 + 0xc) < 0) {
    FUN_146927b06(param_3,0);
  }
  plVar1 = (longlong *)(param_1 + 8);
  lVar2 = param_1 + 0x18;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = lVar2;
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar4 = *(int *)(param_1 + 0x30);
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = plVar1;
  if ((iStack_44 != iVar4) || (uStack_50 != lVar2)) {
    do {
      uVar3 = *(undefined8 *)(*local_80 + (longlong)iStack_64 * 0x14);
      uStack_50 = CONCAT44(uStack_50._4_4_,
                           *(undefined4 *)(*local_80 + 8 + (longlong)iStack_64 * 0x14));
      local_58._4_4_ = (uint)((ulonglong)uVar3 >> 0x20);
      bVar5 = local_58._4_4_ == param_2;
      local_58 = uVar3;
      if (bVar5) {
        FUN_146927b66(param_3,&local_58);
      }
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar1 || (CONCAT44(uStack_6c,uStack_70) != lVar2 || iStack_64 != iVar4));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return *(undefined4 *)(param_3 + 8);
}



// FUNCTION 1469136b6 FUN_1469136b6 body=696 status=ok
// SIG undefined FUN_1469136b6(void)

undefined4 FUN_1469136b6(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  longlong *local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_146927b06(param_2,0);
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  uVar4 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar4 != 0) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_146927c54(&local_98,uVar4);
    iVar3 = 1;
    if (3 < uVar4) {
      uVar4 = (uVar4 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((local_50 == 0) || (local_50 < iVar3)) {
      local_50 = iVar3;
      FUN_146927df0();
    }
  }
  iVar3 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
    FUN_146927b06(param_2);
  }
  local_b0 = param_1 + 2;
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_b8);
  }
  local_c8 = local_a8;
  iStack_c4 = iStack_a4;
  local_c0 = local_a0;
  local_bc = local_9c;
  local_d8 = local_b8;
  local_d0 = local_b0;
  local_e0 = param_1;
  if (iStack_a4 < (int)local_b0[3]) {
    do {
      puVar5 = (uint *)((longlong)iStack_c4 * 0x14 + *local_e0);
      if ((int)uStack_90 != local_64) {
        uVar4 = *puVar5;
        puVar2 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar2 = local_60;
        }
        for (iVar3 = *(int *)(puVar2 + (ulonglong)(local_50 - 1U & uVar4) * 4); iVar3 != -1;
            iVar3 = *(int *)(local_98 + (longlong)iVar3 * 0xc + 4)) {
          if (*(uint *)(local_98 + (longlong)iVar3 * 0xc) == uVar4) goto LAB_14691389b;
        }
      }
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_146927bce(param_2,iVar3);
      }
      *(uint *)(*param_2 + (longlong)iVar3 * 4) = *puVar5;
      FUN_146927f94(&local_98,&local_b8,(longlong)iStack_c4 * 0x14 + *local_e0);
LAB_14691389b:
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (iStack_c4 < (int)local_d0[3]);
  }
  lVar1 = param_2[1];
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_146928276(&local_98);
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return (int)lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146913970 FUN_146913970 body=321 status=ok
// SIG undefined FUN_146913970(void)

undefined4 FUN_146913970(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) < 0) {
    FUN_146927b06(param_2,0);
  }
  plVar1 = (longlong *)(param_1 + 8);
  lVar2 = param_1 + 0x18;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = lVar2;
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar4 = *(int *)(param_1 + 0x30);
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = plVar1;
  if ((iStack_3c != iVar4) || (uStack_48 != lVar2)) {
    do {
      uVar3 = *(undefined4 *)(*local_78 + 8 + (longlong)iStack_5c * 0x14);
      uStack_48 = CONCAT44(uStack_48._4_4_,uVar3);
      local_50 = *(undefined8 *)(*local_78 + (longlong)iStack_5c * 0x14);
      if ((char)uVar3 == '\x03') {
        FUN_146927b66(param_2,&local_50);
      }
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != plVar1 || (CONCAT44(uStack_64,uStack_68) != lVar2 || iStack_5c != iVar4));
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return *(undefined4 *)(param_2 + 8);
}



// FUNCTION 146913ab2 FUN_146913ab2 body=322 status=ok
// SIG undefined FUN_146913ab2(void)

undefined4 FUN_146913ab2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) < 0) {
    FUN_146928304(param_2);
  }
  plVar1 = (longlong *)(param_1 + 8);
  lVar2 = param_1 + 0x18;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = lVar2;
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar3 = *(int *)(param_1 + 0x30);
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = plVar1;
  if ((iStack_44 != iVar3) || (uStack_50 != lVar2)) {
    do {
      uStack_50 = CONCAT44(uStack_50._4_4_,
                           *(undefined4 *)(*local_80 + 8 + (longlong)iStack_64 * 0x14));
      local_58 = *(undefined8 *)(*local_80 + (longlong)iStack_64 * 0x14);
      FUN_146928334(param_2,(longlong)&local_58 + 4);
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar1 || (CONCAT44(uStack_6c,uStack_70) != lVar2 || iStack_64 != iVar3));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return *(undefined4 *)(param_2 + 8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146913bf6 FUN_146913bf6 body=159 status=ok
// SIG undefined FUN_146913bf6(void)

int * FUN_146913bf6(longlong *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x30))(param_1,&local_44);
  lVar2 = param_1[0xd];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = param_1[0xc];
    lVar4 = 0;
    do {
      iVar3 = *(int *)(lVar1 + lVar4);
      if (iVar3 != local_44) {
        (**(code **)(*param_1 + 0x60))(param_1,&local_48,iVar3);
        if (local_48 < 0) goto LAB_146913c6b;
      }
      lVar4 = lVar4 + 4;
    } while ((longlong)(int)lVar2 * 4 != lVar4);
  }
  iVar3 = -1;
LAB_146913c6b:
  *param_2 = iVar3;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146913c96 FUN_146913c96 body=71 status=ok
// SIG undefined FUN_146913c96(void)

bool FUN_146913c96(longlong *param_1,int param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x30))(param_1,&local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_1c == param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146913cde FUN_146913cde body=120 status=ok
// SIG undefined FUN_146913cde(void)

undefined8 FUN_146913cde(longlong *param_1,uint param_2)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined7 uVar6;
  
  if ((int)param_1[2] != *(int *)((longlong)param_1 + 0x3c)) {
    plVar4 = param_1 + 8;
    if ((longlong *)param_1[9] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[9];
    }
    uVar3 = *(uint *)((longlong)plVar4 + (ulonglong)((int)param_1[10] - 1U & param_2) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar1 = (uint *)(param_1[1] + (longlong)(int)uVar3 * 0x14);
        if (*puVar1 == param_2) {
          if (puVar1 + 1 != (uint *)0x0 && puVar1 != (uint *)0x0) {
            uVar5 = (**(code **)(*param_1 + 0x38))(param_1,puVar1[1]);
            param_1 = (longlong *)(uVar5 & 0xffffffff);
            uVar6 = (undefined7)(uVar5 >> 8);
            bVar2 = 1;
            goto LAB_146913cec;
          }
          break;
        }
        uVar3 = puVar1[3];
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = 0;
  uVar6 = 0;
LAB_146913cec:
  return CONCAT71(uVar6,bVar2 & (byte)param_1);
}



// FUNCTION 146913dc2 FUN_146913dc2 body=248 status=ok
// SIG undefined FUN_146913dc2(void)

int FUN_146913dc2(void)

{
  char cVar1;
  undefined2 *puVar2;
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  undefined2 *local_140;
  int local_138;
  int local_12c;
  undefined1 local_128 [256];
  longlong local_28;
  undefined8 local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (DAT_14c75ed0c == -1) {
    local_12c = -1;
    FUN_144a81018(local_128,"Windows");
    FUN_140002266(&local_140,L"InputPlatformSettings_%s InputPlatformSettings",local_20);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    puVar2 = local_140;
    if (local_138 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    local_148 = &DAT_14c872ae8;
    cVar1 = FUN_1414d73b6(DAT_14c872ce0,puVar2,L"MaxPlatformUserCount",&local_12c);
    DAT_14c75ed0c = 8;
    if (cVar1 != '\0') {
      DAT_14c75ed0c = local_12c;
    }
    if (local_140 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14c75ed0c;
}



// FUNCTION 146913ebc FUN_146913ebc body=59 status=ok
// SIG undefined FUN_146913ebc(void)

void FUN_146913ebc(undefined8 param_1)

{
  undefined1 auStack_38 [40];
  undefined1 local_10 [8];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1459393a6(local_10,param_1);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146913f28 FUN_146913f28 body=213 status=ok
// SIG undefined FUN_146913f28(void)

void FUN_146913f28(longlong *param_1,char param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0xa8))(param_1,&local_2c,param_4);
  if (((param_2 == '\0') && (*(char *)((longlong)param_1 + 0x72) == '\x01')) &&
     ((**(code **)(*param_1 + 0x30))(param_1,&local_30), local_2c != local_30)) {
    local_48 = 0;
    uStack_40 = 0;
    (**(code **)(*param_1 + 8))(param_1,local_2c,&local_48);
    lVar1 = local_48;
    lVar2 = (longlong)(int)uStack_40;
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        (**(code **)(*param_1 + 0x80))(param_1,*(undefined4 *)(lVar1 + lVar3),local_30,local_2c);
        lVar3 = lVar3 + 4;
      } while (lVar2 * 4 != lVar3);
    }
    if (local_48 != 0) {
      FUN_1400020a8(local_48);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146913ffe FUN_146913ffe body=55 status=ok
// SIG undefined FUN_146913ffe(void)

undefined4 * FUN_146913ffe(longlong *param_1,undefined4 *param_2)

{
  *(int *)(param_1 + 0xb) = (int)param_1[0xb] + 1;
  FUN_146928334(param_1 + 0xc,param_1 + 0xb);
  (**(code **)(*param_1 + 0x88))(param_1);
  *param_2 = (int)param_1[0xb];
  return param_2;
}



// FUNCTION 146914044 FUN_146914044 body=242 status=ok
// SIG undefined FUN_146914044(void)

float FUN_146914044(longlong param_1,longlong *param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((param_2 != (longlong *)0x0) &&
     (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
    FUN_14482f6fa(param_2,0);
  }
  fVar6 = 0.0;
  fVar7 = *(float *)(param_1 + 0x24) + 0.0 + *(float *)(param_1 + 0x4c);
  lVar3 = 0;
  bVar2 = true;
  do {
    bVar4 = bVar2;
    fVar8 = (*(float *)(param_1 + 0x10 + lVar3 * 0x28) * 100.0) /
            *(float *)(param_1 + 0xc + lVar3 * 0x28);
    if (param_2 != (longlong *)0x0) {
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_14475e4ac(param_2,iVar1);
      }
      *(float *)(*param_2 + (longlong)iVar1 * 4) = fVar8;
    }
    fVar5 = 0.0;
    if (0.0 < fVar7) {
      fVar5 = *(float *)(param_1 + lVar3 * 0x28 + 0x24) / fVar7;
    }
    fVar6 = fVar6 + fVar8 * fVar5;
    lVar3 = 1;
    bVar2 = false;
  } while (bVar4);
  return fVar6;
}



// FUNCTION 146914136 FUN_146914136 body=243 status=ok
// SIG undefined FUN_146914136(void)

float FUN_146914136(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((param_2 != (longlong *)0x0) &&
     (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 7)) {
    FUN_14482f6fa(param_2,7);
  }
  fVar5 = 0.0;
  lVar2 = 0x74;
  do {
    fVar5 = fVar5 + *(float *)(param_1 + lVar2);
    lVar2 = lVar2 + 0x28;
  } while (lVar2 != 0x18c);
  fVar4 = 0.0;
  lVar2 = 0;
  do {
    fVar6 = (*(float *)(param_1 + 0x60 + lVar2) * 100.0) / *(float *)(param_1 + 0x5c + lVar2);
    if (param_2 != (longlong *)0x0) {
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_14475e4ac(param_2,iVar1);
      }
      *(float *)(*param_2 + (longlong)iVar1 * 4) = fVar6;
    }
    fVar3 = 0.0;
    if (0.0 < fVar5) {
      fVar3 = *(float *)(param_1 + 0x74 + lVar2) / fVar5;
    }
    fVar4 = fVar4 + fVar6 * fVar3;
    lVar2 = lVar2 + 0x28;
  } while (lVar2 != 0x118);
  return fVar4;
}



// FUNCTION 14691422a FUN_14691422a body=66 status=ok
// SIG undefined FUN_14691422a(void)

void FUN_14691422a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149ec5bf0;
  plVar3 = (longlong *)param_1[2];
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
                    /* WARNING: Could not recover jumptable at 0x000146914261. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14691426c FUN_14691426c body=93 status=ok
// SIG undefined FUN_14691426c(void)

undefined8 FUN_14691426c(void)

{
  char cVar1;
  
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar1 = FUN_14054d46e(&DAT_14c846b20,L"RenderOffScreen");
  if (cVar1 == '\0') {
    FUN_140033559(".\\Runtime/ApplicationCore/Private/GenericPlatform/GenericWindow.cpp",0x1e,
                  L"GetFullScreenInfo is not expected to be called on this platform");
  }
  return 0;
}



// FUNCTION 1469142f0 FUN_1469142f0 body=271 status=ok
// SIG undefined FUN_1469142f0(void)

undefined8 FUN_1469142f0(void)

{
  byte bVar1;
  char cVar2;
  
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar2 = FUN_14054d46e(&DAT_14c846b20,L"RenderOffScreen");
  if (cVar2 == '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
      _Init_thread_footer(&DAT_14c8442bc);
    }
    bVar1 = DAT_14c8442b8;
    if (DAT_14c872bf0 == '\x01') {
      if (DAT_14c872bf1 != '\x01') {
        return 0;
      }
      bVar1 = DAT_14c8442b8 & 1;
    }
    if (bVar1 == 0) {
      FUN_140033559(".\\Runtime/ApplicationCore/Private/GenericPlatform/GenericWindow.cpp",0x75,
                    L"GetRestoredDimensions is not expected to be called on this platform");
    }
  }
  return 0;
}



// FUNCTION 146914436 FUN_146914436 body=702 status=ok
// SIG undefined FUN_146914436(void)

undefined8 * FUN_146914436(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined4 local_50;
  undefined4 local_4c;
  undefined2 *local_48;
  int local_40;
  undefined8 *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  FUN_14284e8c6(puVar5);
  local_38 = puVar5;
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_149ec9700;
  plVar6[2] = (longlong)puVar5;
  local_30 = plVar6;
  FUN_14593c3a4(param_1,&local_38);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  FUN_14118b488(param_1 + 0x13);
  *param_1 = &PTR_FUN_149ec5f20;
  param_1[0x13] = &PTR_FUN_149ec6040;
  param_1[0x14] = &PTR_FUN_149ec6070;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0x100000001000;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9670e8) && (FUN_144b3d300(&DAT_14c9670e8), DAT_14c9670e8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14c9670e0 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SetRes",1);
    _Init_thread_footer(&DAT_14c9670e8);
  }
  (**(code **)(*DAT_14c9670e0 + 0xc0))(DAT_14c9670e0,&local_48);
  local_50 = 0;
  puVar7 = local_48;
  if (local_40 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  cVar4 = FUN_146915128(puVar7,&local_4c,&local_50);
  if (cVar4 != '\0') {
    *(undefined4 *)(param_1 + 0x1f) = local_4c;
    *(undefined4 *)((longlong)param_1 + 0xfc) = local_50;
  }
  local_38 = (undefined8 *)0x0;
  local_30 = (longlong *)((ulonglong)local_30 & 0xffffffff00000000);
  FUN_1446efa72(&local_38,0,2,0x10);
  local_30 = (longlong *)CONCAT44(local_30._4_4_,2);
  *local_38 = &PTR_LAB_149ec9790;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_38[2] = lVar8;
  *local_38 = &PTR_FUN_149ec9720;
  local_38[3] = param_1;
  FUN_14692894e(&DAT_14c867950,local_58,&local_38);
  FUN_1449db362(&local_38);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1469146f6 FUN_1469146f6 body=394 status=ok
// SIG undefined FUN_1469146f6(void)

void FUN_1469146f6(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_40 [8];
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14c9670d8 == 0) {
    lVar6 = FUN_14001cc68(0x100,0x10);
    FUN_146914436(lVar6);
    DAT_14c9670d8 = lVar6;
    if (lVar6 == 0) goto LAB_146914749;
  }
  lVar6 = DAT_14c9670d8;
  FUN_146914882(DAT_14c9670d8,local_40,param_1);
  plVar5 = local_38;
  plVar3 = *(longlong **)(lVar6 + 0x18);
  plVar4 = *(longlong **)(lVar6 + 0x20);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (local_38 == (longlong *)0x0) {
    local_48 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    local_48 = local_38;
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x180))(plVar3,local_50,param_2,param_3);
  plVar3 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
LAB_146914749:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146914882 FUN_146914882 body=209 status=ok
// SIG undefined FUN_146914882(void)

longlong * FUN_146914882(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (0 < *(int *)(param_1 + 0xb0)) {
    lVar6 = 8;
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + -8 + lVar6);
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0xa8) + lVar6);
      if (plVar4 == (longlong *)0x0) {
        if (lVar3 == param_3) {
          *param_2 = lVar3;
          param_2[1] = 0;
          return param_2;
        }
      }
      else {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        if (lVar3 == param_3) {
          *param_2 = lVar3;
          param_2[1] = (longlong)plVar4;
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          LOCK();
          plVar1 = plVar4 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 != 0) {
            return param_2;
          }
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 != 0) {
            return param_2;
          }
          (**(code **)(*plVar4 + 0x10))(plVar4);
          return param_2;
        }
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
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x10;
    } while (lVar5 < *(int *)(param_1 + 0xb0));
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 146914954 FUN_146914954 body=399 status=ok
// SIG undefined FUN_146914954(void)

void FUN_146914954(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_40 [8];
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14c9670d8 == 0) {
    lVar6 = FUN_14001cc68(0x100,0x10);
    FUN_146914436(lVar6);
    DAT_14c9670d8 = lVar6;
    if (lVar6 == 0) goto LAB_1469149a7;
  }
  lVar6 = DAT_14c9670d8;
  FUN_146914882(DAT_14c9670d8,local_40,param_1);
  plVar5 = local_38;
  plVar3 = *(longlong **)(lVar6 + 0x18);
  plVar4 = *(longlong **)(lVar6 + 0x20);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (local_38 == (longlong *)0x0) {
    local_48 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    local_48 = local_38;
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  local_58 = 0;
  (**(code **)(*plVar3 + 0x140))(plVar3,local_50,param_2,param_3);
  plVar3 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
LAB_1469149a7:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146914ae4 FUN_146914ae4 body=214 status=ok
// SIG undefined FUN_146914ae4(void)

void FUN_146914ae4(int *param_1,int *param_2,int *param_3,int *param_4)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9670d8 == (longlong *)0x0) {
    plVar1 = (longlong *)FUN_14001cc68(0x100,0x10);
    FUN_146914436(plVar1);
    DAT_14c9670d8 = plVar1;
    if (plVar1 == (longlong *)0x0) goto LAB_146914b68;
  }
  local_58 = 0;
  uStack_50 = 0;
  (**(code **)(*DAT_14c9670d8 + 0xb0))(DAT_14c9670d8,&local_68,&local_58);
  *param_1 = local_68;
  *param_2 = iStack_64;
  *param_3 = iStack_60 - local_68;
  *param_4 = iStack_5c - iStack_64;
LAB_146914b68:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146914bbc FUN_146914bbc body=175 status=ok
// SIG undefined FUN_146914bbc(void)

void FUN_146914bbc(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c9670d8 == 0) {
    lVar3 = FUN_14001cc68(0x100,0x10);
    FUN_146914436(lVar3);
    DAT_14c9670d8 = lVar3;
    if (lVar3 == 0) goto LAB_146914c07;
  }
  lVar3 = DAT_14c9670d8;
  FUN_146914882(DAT_14c9670d8,local_30,param_1);
  FUN_146914c6c(lVar3,local_30);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
LAB_146914c07:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146914c6c FUN_146914c6c body=695 status=ok
// SIG undefined FUN_146914c6c(void)

void FUN_146914c6c(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong *local_a0;
  uint local_98 [14];
  longlong local_60;
  char local_44;
  char local_3c;
  char local_34;
  char local_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar7 = (**(code **)(*(longlong *)*param_2 + 0xe0))();
  FUN_14691563e(local_98,uVar7);
  if (((local_98[0] & 0xfffffffe) != 2) &&
     (lVar3 = *(longlong *)(param_1 + 0xd0), lVar3 != *param_2)) {
    lVar4 = *(longlong *)(param_1 + 0xd8);
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    plVar5 = *(longlong **)(param_1 + 0xe8);
    *(longlong *)(param_1 + 0xe0) = lVar3;
    *(longlong *)(param_1 + 0xe8) = lVar4;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar5 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    lVar3 = *param_2;
    lVar4 = param_2[1];
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    plVar5 = *(longlong **)(param_1 + 0xd8);
    *(longlong *)(param_1 + 0xd0) = lVar3;
    *(longlong *)(param_1 + 0xd8) = lVar4;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar5 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    local_a8 = *(longlong *)(param_1 + 0xe0);
    if (local_a8 != 0) {
      plVar5 = *(longlong **)(param_1 + 0x18);
      plVar6 = *(longlong **)(param_1 + 0xe8);
      if (plVar6 == (longlong *)0x0) {
        local_a0 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        local_a0 = plVar6;
      }
      (**(code **)(*plVar5 + 0x188))(plVar5,&local_a8,2);
      plVar5 = local_a0;
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_a0 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_a0)(local_a0);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar6 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
    }
    plVar5 = *(longlong **)(param_1 + 0x18);
    local_a8 = *(longlong *)(param_1 + 0xd0);
    plVar6 = *(longlong **)(param_1 + 0xd8);
    if (plVar6 == (longlong *)0x0) {
      local_a0 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      local_a0 = plVar6;
    }
    (**(code **)(*plVar5 + 0x188))(plVar5,&local_a8,0);
    plVar5 = local_a0;
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_a0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar6 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  if (local_2c == '\x01') {
    local_2c = '\0';
  }
  if (local_34 == '\x01') {
    local_34 = '\0';
  }
  if (local_3c == '\x01') {
    local_3c = '\0';
  }
  if (local_44 == '\x01') {
    local_44 = '\0';
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146914f24 FUN_146914f24 body=164 status=ok
// SIG undefined FUN_146914f24(void)

void FUN_146914f24(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c9670d8 == 0) {
    lVar3 = FUN_14001cc68(0x100,0x10);
    FUN_146914436(lVar3);
    DAT_14c9670d8 = lVar3;
    if (lVar3 == 0) goto LAB_146914f6f;
  }
  FUN_146914882(DAT_14c9670d8,local_30,param_1);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
LAB_146914f6f:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146914fca FUN_146914fca body=212 status=ok
// SIG undefined FUN_146914fca(void)

void FUN_146914fca(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c9670d8 == 0) {
    lVar3 = FUN_14001cc68(0x100,0x10);
    FUN_146914436(lVar3);
    DAT_14c9670d8 = lVar3;
    if (lVar3 == 0) goto LAB_146915015;
  }
  lVar3 = DAT_14c9670d8;
  FUN_146914882(DAT_14c9670d8,&local_30,param_1);
  if (local_30 != 0) {
    local_40 = local_30;
    local_38 = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      UNLOCK();
    }
    FUN_1469150a0(lVar3,&local_40);
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
LAB_146915015:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469150a0 FUN_1469150a0 body=118 status=ok
// SIG undefined FUN_1469150a0(void)

void FUN_1469150a0(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  FUN_146928aca(param_1 + 0xa8);
  puVar2 = *(undefined8 **)(param_2 + 8);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2);
      LOCK();
      piVar1 = (int *)((longlong)puVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146915128 FUN_146915128 body=473 status=ok
// SIG undefined FUN_146915128(void)

undefined8 FUN_146915128(short *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  wchar_t *pwVar5;
  int iVar6;
  undefined1 auStack_88 [32];
  wchar_t *local_68;
  int local_60;
  undefined4 local_5c;
  wchar_t *local_58;
  undefined8 uStack_50;
  wchar_t *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*param_1 != 0) {
    FUN_140056680(&local_48,param_1);
    FUN_140ded208(&local_48,&local_68);
    FUN_144a6c01e(&local_68,&local_58);
    if (local_48 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    local_48 = local_58;
    local_58 = (wchar_t *)0x0;
    local_40 = (int)uStack_50;
    local_3c = uStack_50._4_4_;
    uStack_50 = 0;
    if (local_68 != (wchar_t *)0x0) {
      FUN_1400020a8(local_68);
    }
    pwVar5 = local_48;
    if (local_40 == 0) {
      pwVar5 = L"";
    }
    iVar2 = _wtoi(pwVar5);
    iVar6 = 0;
    if (0 < iVar2) {
      iVar6 = iVar2;
    }
    local_58 = (wchar_t *)0x0;
    uStack_50 = 0;
    pwVar5 = L"";
    if (local_40 != 0) {
      pwVar5 = local_48;
    }
    pwVar5 = wcschr(pwVar5,L'x');
    iVar2 = 1;
    if (pwVar5 != (wchar_t *)0x0) {
      pwVar5 = local_48;
      if (local_40 == 0) {
        pwVar5 = L"";
      }
      pwVar5 = wcschr(pwVar5,L'x');
      pwVar5 = pwVar5 + 1;
      FUN_14020fad6(&local_58,pwVar5);
      FUN_140ded208(&local_58,&local_68);
      if (local_58 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      local_58 = local_68;
      uStack_50 = CONCAT44(local_5c,local_60);
      if ((local_60 - 2U < 0x7fffffff && pwVar5 != (wchar_t *)0x0) &&
         (cVar1 = FUN_1405b43cc(&local_58), cVar1 != '\0')) {
        iVar3 = _wtoi(pwVar5);
        iVar2 = 0;
        if (iVar3 < 1) {
          iVar3 = iVar2;
        }
        *param_2 = iVar6;
        *param_3 = iVar3;
      }
    }
    if (local_58 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_48 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    uVar4 = 1;
    if ((char)iVar2 == '\0') goto LAB_1469152de;
  }
  uVar4 = 0;
LAB_1469152de:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 146915302 FUN_146915302 body=228 status=ok
// SIG undefined FUN_146915302(void)

void FUN_146915302(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149ec5f20;
  param_1[0x13] = &PTR_FUN_149ec6040;
  param_1[0x14] = &PTR_FUN_149ec6070;
  plVar3 = (longlong *)param_1[0x1d];
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
  plVar3 = (longlong *)param_1[0x1b];
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
  FUN_145e37552(param_1[0x17],*(undefined4 *)(param_1 + 0x18));
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_146928905(param_1[0x15],*(undefined4 *)(param_1 + 0x16));
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_1410c966c(param_1 + 0x13);
  FUN_145e376c2(param_1);
  return;
}



// FUNCTION 1469153e8 FUN_1469153e8 body=175 status=ok
// SIG undefined FUN_1469153e8(void)

undefined8 * FUN_1469153e8(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_149ec61b0;
  *(undefined4 *)(puVar4 + 4) = 0x3f800000;
  uVar3 = DAT_14c967818;
  *(undefined8 *)((longlong)puVar4 + 0x24) = DAT_14c967818;
  *(undefined8 *)((longlong)puVar4 + 0x2c) = uVar3;
  *(undefined2 *)((longlong)puVar4 + 0x34) = 0;
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_149ec9800;
  plVar5[2] = (longlong)puVar4;
  *param_2 = puVar4;
  param_2[1] = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 146915498 FUN_146915498 body=229 status=ok
// SIG undefined FUN_146915498(void)

void FUN_146915498(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  
  uVar4 = *param_2;
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  plVar6 = *(longlong **)(param_4 + 8);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  FUN_14691557e(uVar4,param_3);
  iVar3 = *(int *)(param_1 + 0xb0);
  *(uint *)(param_1 + 0xb0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0xb4) < iVar3 + 1U) {
    FUN_146928a44((longlong *)(param_1 + 0xa8),iVar3);
  }
  lVar7 = *(longlong *)(param_1 + 0xa8);
  *(undefined8 *)(lVar7 + (longlong)iVar3 * 0x10) = uVar4;
  *(longlong **)(lVar7 + 8 + (longlong)iVar3 * 0x10) = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014691555a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14691557e FUN_14691557e body=191 status=ok
// SIG undefined FUN_14691557e(void)

void FUN_14691557e(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  lVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    *(longlong *)(param_1 + 8) = lVar3;
    plVar5 = *(longlong **)(param_1 + 0x10);
    if (plVar5 == (longlong *)0x0) goto LAB_146915603;
    *(undefined8 *)(param_1 + 0x10) = 0;
LAB_1469155cb:
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_146915603;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar4 = plVar5;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong *)(param_1 + 8) = lVar3;
    plVar5 = *(longlong **)(param_1 + 0x10);
    if (plVar4 != plVar5) {
      *(longlong **)(param_1 + 0x10) = plVar4;
      if (plVar5 == (longlong *)0x0) goto LAB_146915603;
      goto LAB_1469155cb;
    }
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_146915603;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_146915603:
  *(int *)(param_1 + 0x24) = (int)*(float *)(*param_2 + 4);
  *(int *)(param_1 + 0x28) = (int)*(float *)(*param_2 + 8);
  *(int *)(param_1 + 0x2c) = (int)*(float *)(*param_2 + 0xc);
  *(int *)(param_1 + 0x30) = (int)*(float *)(*param_2 + 0x10);
  *(undefined1 *)(param_1 + 0x35) = 1;
  return;
}



// FUNCTION 14691563e FUN_14691563e body=225 status=ok
// SIG undefined FUN_14691563e(void)

undefined4 * FUN_14691563e(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  void *_Src;
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
  
  param_1[0xc] = param_2[0xc];
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_2[4];
  uVar8 = param_2[5];
  uVar9 = param_2[6];
  uVar10 = param_2[7];
  uVar11 = param_2[9];
  uVar12 = param_2[10];
  uVar13 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar11;
  param_1[10] = uVar12;
  param_1[0xb] = uVar13;
  param_1[4] = uVar7;
  param_1[5] = uVar8;
  param_1[6] = uVar9;
  param_1[7] = uVar10;
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  *(undefined8 *)(param_1 + 0xe) = 0;
  iVar2 = param_2[0x10];
  _Src = *(void **)(param_2 + 0xe);
  param_1[0x10] = iVar2;
  if ((longlong)iVar2 == 0) {
    param_1[0x11] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xe,iVar2,0);
    memcpy(*(void **)(param_1 + 0xe),_Src,(longlong)iVar2 * 2);
  }
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  cVar1 = *(char *)(param_2 + 0x15);
  *(char *)(param_1 + 0x15) = cVar1;
  if (cVar1 == '\x01') {
    param_1[0x14] = param_2[0x14];
  }
  cVar1 = *(char *)(param_2 + 0x17);
  *(char *)(param_1 + 0x17) = cVar1;
  if (cVar1 == '\x01') {
    param_1[0x16] = param_2[0x16];
  }
  cVar1 = *(char *)(param_2 + 0x19);
  *(char *)(param_1 + 0x19) = cVar1;
  if (cVar1 == '\x01') {
    param_1[0x18] = param_2[0x18];
  }
  cVar1 = *(char *)(param_2 + 0x1b);
  *(char *)(param_1 + 0x1b) = cVar1;
  if (cVar1 == '\x01') {
    param_1[0x1a] = param_2[0x1a];
  }
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  return param_1;
}



// FUNCTION 14691574c FUN_14691574c body=37 status=ok
// SIG undefined FUN_14691574c(void)

void FUN_14691574c(longlong param_1,undefined1 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x80))();
  *(undefined1 *)(param_1 + 0xc9) = param_2;
  return;
}



// FUNCTION 146915780 FUN_146915780 body=176 status=ok
// SIG undefined FUN_146915780(void)

undefined8 FUN_146915780(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  cVar1 = FUN_140988638(&local_20,L"NullApp",1);
  if (cVar1 != '\0') {
    cVar1 = FUN_140988638(&local_20,L"Cursor",1);
    if (cVar1 != '\0') {
      uVar2 = FUN_146915832(param_1 + -0x98,local_20,param_4);
      goto LAB_1469157ef;
    }
    cVar1 = FUN_140988638(&local_20,L"Window",1);
    if (cVar1 != '\0') {
      uVar2 = FUN_1469158d0(param_1 + -0x98,local_20,param_4);
      goto LAB_1469157ef;
    }
  }
  uVar2 = 0;
LAB_1469157ef:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 146915832 FUN_146915832 body=156 status=ok
// SIG undefined FUN_146915832(void)

undefined4 FUN_146915832(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = param_2;
  uVar1 = FUN_140988638(&local_28,L"Status",1);
  if ((char)uVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8),&local_38);
    FUN_1468161aa(param_3,L"Cursor status:");
    FUN_140047918(param_3,L"Position: (%f, %f)",local_38,local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469158d0 FUN_1469158d0 body=149 status=ok
// SIG undefined FUN_1469158d0(void)

undefined4 FUN_1469158d0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_2;
  uVar2 = FUN_140988638(&local_38,L"List",1);
  if ((char)uVar2 != '\0') {
    FUN_1468161aa(param_3,L"Window list:");
    iVar1 = *(int *)(param_1 + 0xb0);
    if (0 < iVar1) {
      iVar3 = 0;
      do {
        FUN_140047918(param_3,&DAT_149e063bc,iVar3);
        iVar3 = iVar3 + 1;
      } while (iVar1 != iVar3);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146915966 FUN_146915966 body=86 status=ok
// SIG undefined FUN_146915966(void)

void FUN_146915966(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar3 = 0;
    iVar2 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + lVar3);
      (**(code **)(*plVar1 + 0x28))(plVar1,param_2,param_3,param_4);
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 0x10;
    } while (iVar2 < *(int *)(param_1 + 0x20));
  }
  return;
}



// FUNCTION 1469159bc FUN_1469159bc body=88 status=ok
// SIG undefined FUN_1469159bc(void)

void FUN_1469159bc(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar4 = 0;
    iVar3 = 0;
    do {
      cVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x18) + lVar4) + 0x60))();
      if (cVar2 != '\0') {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + lVar4);
        (**(code **)(*plVar1 + 0x30))(plVar1,param_2,param_3);
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 0x20));
  }
  return;
}



// FUNCTION 146915a14 FUN_146915a14 body=95 status=ok
// SIG undefined FUN_146915a14(void)

void FUN_146915a14(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar3 = 0;
    iVar2 = 0;
    do {
      puVar1 = (undefined8 *)
               (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x18) + lVar3) + 0x58))();
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,param_2,param_3,param_4);
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 0x10;
    } while (iVar2 < *(int *)(param_1 + 0x20));
  }
  return;
}



// FUNCTION 146915a74 FUN_146915a74 body=147 status=ok
// SIG undefined FUN_146915a74(void)

void FUN_146915a74(int *param_1)

{
  undefined1 auStack_68 [40];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146914ae4(&local_34,&local_38,&local_3c,&local_40);
  *param_1 = local_3c;
  param_1[1] = local_40;
  param_1[6] = local_34;
  param_1[7] = local_38;
  param_1[8] = local_3c + local_34;
  param_1[9] = local_40 + local_38;
  param_1[10] = local_34;
  param_1[0xb] = local_38;
  param_1[0xc] = local_3c + local_34;
  param_1[0xd] = local_40 + local_38;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146915b42 FUN_146915b42 body=61 status=ok
// SIG undefined FUN_146915b42(void)

longlong FUN_146915b42(void)

{
  longlong lVar1;
  
  if (DAT_14c9670d8 == 0) {
    lVar1 = FUN_14001cc68(0x100,0x10);
    FUN_146914436(lVar1);
    DAT_14c9670d8 = lVar1;
  }
  return DAT_14c9670d8;
}



// FUNCTION 146915b80 FUN_146915b80 body=49 status=ok
// SIG undefined FUN_146915b80(void)

void FUN_146915b80(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  (**(code **)(*param_1 + 0x18))();
  *(undefined4 *)((longlong)param_1 + 0x2c) = param_4;
  *(undefined4 *)(param_1 + 6) = param_5;
  FUN_146914954(param_1,param_4,param_5);
  return;
}



// FUNCTION 146915bb2 FUN_146915bb2 body=33 status=ok
// SIG undefined FUN_146915bb2(void)

undefined8
FUN_146915bb2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  FUN_146914ae4(param_2,param_3,param_4,param_5);
  return 1;
}



// FUNCTION 146915bec FUN_146915bec body=121 status=ok
// SIG undefined FUN_146915bec(void)

void FUN_146915bec(longlong *param_1)

{
  char cVar1;
  undefined1 auStack_48 [32];
  undefined4 *local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = &local_20;
  cVar1 = (**(code **)(*param_1 + 0x10))(param_1,&local_14,&local_18,&local_1c);
  if (cVar1 != '\0') {
    local_28 = (undefined4 *)CONCAT44(local_28._4_4_,local_20);
    (**(code **)(*param_1 + 8))(param_1,local_14,local_18,local_1c);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146915c66 FUN_146915c66 body=162 status=ok
// SIG undefined FUN_146915c66(void)

void FUN_146915c66(longlong *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_48 [32];
  int *local_28;
  int local_20;
  int local_1c;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = &local_20;
  cVar1 = (**(code **)(*param_1 + 0x10))(param_1,local_14,local_18,&local_1c);
  if (cVar1 != '\0') {
    iVar3 = local_20 + 3;
    if (-1 < local_20) {
      iVar3 = local_20;
    }
    iVar2 = local_1c + 3;
    if (-1 < local_1c) {
      iVar2 = local_1c;
    }
    local_28 = (int *)CONCAT44(local_28._4_4_,local_20 / 2);
    (**(code **)(*param_1 + 8))(param_1,iVar2 >> 2,iVar3 >> 2,local_1c / 2);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146915d0a FUN_146915d0a body=31 status=ok
// SIG undefined FUN_146915d0a(void)

void FUN_146915d0a(longlong param_1)

{
  if (*(char *)(param_1 + 0x34) == '\0') {
    FUN_146914bbc();
    *(undefined1 *)(param_1 + 0x34) = 1;
  }
  return;
}



// FUNCTION 146915d2a FUN_146915d2a body=31 status=ok
// SIG undefined FUN_146915d2a(void)

void FUN_146915d2a(longlong param_1)

{
  if (*(char *)(param_1 + 0x34) == '\x01') {
    FUN_146914f24();
    *(undefined1 *)(param_1 + 0x34) = 0;
  }
  return;
}



// FUNCTION 146915d50 FUN_146915d50 body=111 status=ok
// SIG undefined FUN_146915d50(void)

undefined4 FUN_146915d50(longlong *param_1)

{
  undefined4 uVar1;
  undefined1 auStack_58 [32];
  int *local_38;
  int local_28;
  int local_24;
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = &local_28;
  (**(code **)(*param_1 + 0x10))(param_1,local_1c,local_20,&local_24);
  if (*(int *)((longlong)param_1 + 0x2c) == local_24) {
    uVar1 = CONCAT31((int3)((uint)(int)param_1[6] >> 8),(int)param_1[6] == local_28);
  }
  else {
    uVar1 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146915e24 FUN_146915e24 body=174 status=ok
// SIG undefined FUN_146915e24(void)

undefined8 * FUN_146915e24(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [36];
  undefined1 local_24 [4];
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_149ec62d8;
  param_1[1] = param_2;
  param_1[2] = *param_3;
  lVar3 = param_3[1];
  param_1[3] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
    param_2 = param_1[1];
  }
  *(undefined4 *)(param_1 + 4) = 1;
  local_20 = param_1;
  FUN_146928c08(param_2 + 0x50,local_24);
  plVar4 = (longlong *)param_3[1];
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146915ed4 FUN_146915ed4 body=92 status=ok
// SIG undefined FUN_146915ed4(void)

void FUN_146915ed4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149ec62d8;
  if (param_1[1] != 0) {
    FUN_146915f30(param_1[1] + 0x50,param_1);
  }
  plVar3 = (longlong *)param_1[3];
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
                    /* WARNING: Could not recover jumptable at 0x000146915f17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146915f30 FUN_146915f30 body=132 status=ok
// SIG undefined FUN_146915f30(void)

void FUN_146915f30(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar1 >> 0x10 ^ uVar1) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x10) == param_2) {
          FUN_1469290f4(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x10 + *param_1 + 8);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 146915fb4 FUN_146915fb4 body=166 status=ok
// SIG undefined FUN_146915fb4(void)

undefined8 *
FUN_146915fb4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_3;
  local_28 = param_3[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_146915e24(param_1,param_2,&local_30);
  *param_1 = &PTR_FUN_149ec62e0;
  param_1[5] = &PTR_FUN_149ec62f0;
  param_1[6] = param_4;
  plVar3 = (longlong *)param_3[1];
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14691605c FUN_14691605c body=82 status=ok
// SIG undefined FUN_14691605c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14691605c(longlong *param_1,undefined1 (*param_2) [16],undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_3 = 0;
  if ((*param_2 != _DAT_149ec53b0) && (*param_2 != _DAT_149ec53c0)) {
    return 0x80004002;
  }
  *param_3 = param_1;
  if (param_1 == (longlong *)0x0) {
    uVar1 = 0x80004002;
  }
  else {
    (**(code **)(*param_1 + 8))();
    uVar1 = 0;
  }
                    /* WARNING: Read-only address (ram,0x000149ec53b0) is written */
                    /* WARNING: Read-only address (ram,0x000149ec53c0) is written */
  return uVar1;
}



// FUNCTION 1469160b8 FUN_1469160b8 body=45 status=ok
// SIG undefined FUN_1469160b8(void)

int FUN_1469160b8(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + -8) + -1;
  *(int *)(param_1 + -8) = iVar2;
  puVar1 = (undefined8 *)(param_1 + -0x28);
  if (puVar1 != (undefined8 *)0x0 && iVar2 == 0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return iVar2;
}



// FUNCTION 1469160e6 FUN_1469160e6 body=170 status=ok
// SIG undefined FUN_1469160e6(void)

undefined4 FUN_1469160e6(longlong param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  undefined8 local_60;
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  undefined4 *local_28;
  undefined8 *local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = &local_60;
  local_28 = &local_64;
  local_64 = 0x80040201;
  local_30 = param_1 + -0x28;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_149ec9820;
  local_58[0] = FUN_1428517ca;
  local_60 = param_2;
  FUN_146916192(*(undefined8 *)(param_1 + -0x20),local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_64;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146916192 FUN_146916192 body=110 status=ok
// SIG undefined FUN_146916192(void)

void FUN_146916192(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + 0x28);
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + 0x30);
  if (plVar3 == (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001469161fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x20))(plVar2,param_2,1,1);
    return;
  }
  LOCK();
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  UNLOCK();
  (**(code **)(*plVar2 + 0x20))(plVar2,param_2,1,1);
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
                    /* WARNING: Could not recover jumptable at 0x0001469161dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))(plVar3);
      return;
    }
  }
  return;
}



// FUNCTION 146916200 FUN_146916200 body=165 status=ok
// SIG undefined FUN_146916200(void)

undefined8 FUN_146916200(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined1 *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = &local_60;
  local_28 = &local_68;
  local_30 = param_1 + -0x28;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_149ec9840;
  local_58[0] = &LAB_1428518d0;
  local_68 = param_2;
  local_60 = param_3;
  FUN_146916192(*(undefined8 *)(param_1 + -0x20),local_58);
  if (local_58[0] != (undefined1 *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469162d6 FUN_1469162d6 body=170 status=ok
// SIG undefined FUN_1469162d6(void)

undefined4 FUN_1469162d6(longlong param_1,undefined4 param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  undefined4 *local_28;
  undefined4 *local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = &local_5c;
  local_28 = &local_60;
  local_60 = 0x80040201;
  local_30 = param_1 + -0x28;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_149ec9860;
  local_58[0] = FUN_142851958;
  local_5c = param_2;
  FUN_146916192(*(undefined8 *)(param_1 + -0x20),local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_60;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146916388 FUN_146916388 body=263 status=ok
// SIG undefined FUN_146916388(void)

undefined4 FUN_146916388(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_b8 [44];
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78 [2];
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_8c = 0x80040201;
  uVar1 = *(undefined8 *)(param_1 + -0x20);
  local_78[0] = (code *)0x0;
  local_88 = param_2;
  local_80 = param_3;
  local_7c = param_4;
  local_68 = (longlong *)FUN_14001cc68(0x38,8);
  *local_68 = (longlong)&PTR_FUN_149ec9880;
  local_68[1] = param_1 + -0x28;
  local_68[2] = (longlong)&local_8c;
  local_68[3] = (longlong)&local_88;
  local_68[4] = (longlong)&local_80;
  local_68[5] = (longlong)&local_7c;
  local_68[6] = (longlong)&stack0x00000028;
  if (local_68 + 1 != (longlong *)0x0) {
    local_78[0] = FUN_142851a5a;
  }
  FUN_146916192(uVar1,local_78);
  if (local_78[0] != (code *)0x0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return local_8c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14691649c FUN_14691649c body=170 status=ok
// SIG undefined FUN_14691649c(void)

undefined4 FUN_14691649c(longlong param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  undefined8 local_60;
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  undefined4 *local_28;
  undefined8 *local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = &local_60;
  local_28 = &local_64;
  local_64 = 0x80040201;
  local_30 = param_1 + -0x28;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_149ec98a0;
  local_58[0] = FUN_142851cda;
  local_60 = param_2;
  FUN_146916192(*(undefined8 *)(param_1 + -0x20),local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_64;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146916548 FUN_146916548 body=228 status=ok
// SIG undefined FUN_146916548(void)

undefined4 FUN_146916548(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  code *local_78 [2];
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0x80040201;
  uVar1 = *(undefined8 *)(param_1 + -0x20);
  local_78[0] = (code *)0x0;
  local_84 = param_2;
  local_80 = param_3;
  local_68 = (longlong *)FUN_14001cc68(0x28,8);
  *local_68 = (longlong)&PTR_FUN_149ec98c0;
  local_68[1] = param_1 + -0x28;
  local_68[2] = (longlong)&local_88;
  local_68[3] = (longlong)&local_84;
  local_68[4] = (longlong)&local_80;
  if (local_68 + 1 != (longlong *)0x0) {
    local_78[0] = FUN_142851dc2;
  }
  FUN_146916192(uVar1,local_78);
  if (local_78[0] != (code *)0x0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return local_88;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14691663a FUN_14691663a body=228 status=ok
// SIG undefined FUN_14691663a(void)

undefined8 FUN_14691663a(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_b8 [44];
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined1 *local_78 [2];
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = *(undefined8 *)(param_1 + -0x20);
  local_78[0] = (undefined1 *)0x0;
  local_8c = param_2;
  local_88 = param_3;
  local_7c = param_4;
  local_68 = (longlong *)FUN_14001cc68(0x28,8);
  *local_68 = (longlong)&PTR_FUN_149ec98e0;
  local_68[1] = param_1 + -0x28;
  local_68[2] = (longlong)&local_8c;
  local_68[3] = (longlong)&local_88;
  local_68[4] = (longlong)&local_7c;
  if (local_68 + 1 != (longlong *)0x0) {
    local_78[0] = &LAB_142851fcc;
  }
  FUN_146916192(uVar1,local_78);
  if (local_78[0] != (undefined1 *)0x0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146916742 FUN_146916742 body=245 status=ok
// SIG undefined FUN_146916742(void)

undefined8 * FUN_146916742(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_3;
  local_20 = param_3[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_146915e24(param_1,param_2,&local_28);
  *param_1 = &PTR_FUN_149ec63a8;
  param_1[5] = &PTR_FUN_149ec63b0;
  param_1[6] = &PTR_LAB_149ec63d0;
  param_1[7] = &PTR_LAB_149ec6420;
  param_1[8] = &PTR_LAB_149ec6470;
  param_1[9] = &PTR_LAB_149ec64a0;
  param_1[10] = &PTR_LAB_149ec64f0;
  param_1[0xb] = &PTR_LAB_149ec6520;
  param_1[0xc] = &PTR_LAB_149ec6580;
  param_1[0xd] = &PTR_LAB_149ec65b0;
  plVar3 = (longlong *)param_3[1];
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146916838 FUN_146916838 body=251 status=ok
// SIG undefined FUN_146916838(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_146916838(longlong *param_1,undefined1 (*param_2) [16],undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  *param_3 = 0;
  plVar1 = param_1;
  if (*param_2 != _DAT_149ec53d0) {
    if (*param_2 == _DAT_149ec53e0) {
      plVar1 = param_1 + 1;
    }
    else if (*param_2 == _DAT_149ec53f0) {
      plVar1 = param_1 + 2;
    }
    else if (*param_2 == _DAT_149ec5400) {
      plVar1 = param_1 + 3;
    }
    else if (*param_2 == _DAT_149ec5410) {
      plVar1 = param_1 + 5;
    }
    else if (*param_2 == _DAT_149ec5420) {
      plVar1 = param_1 + 6;
    }
    else if (*param_2 == _DAT_149ec5430) {
      plVar1 = param_1 + 7;
    }
    else {
      if (*param_2 != _DAT_149ec5440) {
        return 0x80004002;
      }
      plVar1 = param_1 + 8;
    }
  }
  *param_3 = plVar1;
  if (plVar1 == (longlong *)0x0) {
    uVar2 = 0x80004002;
  }
  else {
    (**(code **)(*param_1 + 8))();
    uVar2 = 0;
  }
                    /* WARNING: Read-only address (ram,0x000149ec53d0) is written */
                    /* WARNING: Read-only address (ram,0x000149ec53e0) is written */
                    /* WARNING: Read-only address (ram,0x000149ec53f0) is written */
                    /* WARNING: Read-only address (ram,0x000149ec5400) is written */
                    /* WARNING: Read-only address (ram,0x000149ec5410) is written */
                    /* WARNING: Read-only address (ram,0x000149ec5420) is written */
                    /* WARNING: Read-only address (ram,0x000149ec5430) is written */
                    /* WARNING: Read-only address (ram,0x000149ec5440) is written */
  return uVar2;
}



// FUNCTION 146916952 FUN_146916952 body=45 status=ok
// SIG undefined FUN_146916952(void)

int FUN_146916952(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + -8) + -1;
  *(int *)(param_1 + -8) = iVar2;
  puVar1 = (undefined8 *)(param_1 + -0x28);
  if (puVar1 != (undefined8 *)0x0 && iVar2 == 0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return iVar2;
}



// FUNCTION 146916980 FUN_146916980 body=45 status=ok
// SIG undefined FUN_146916980(void)

int FUN_146916980(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + -0x10) + -1;
  *(int *)(param_1 + -0x10) = iVar2;
  puVar1 = (undefined8 *)(param_1 + -0x30);
  if (puVar1 != (undefined8 *)0x0 && iVar2 == 0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return iVar2;
}



// FUNCTION 1469169ae FUN_1469169ae body=158 status=ok
// SIG undefined FUN_1469169ae(void)

undefined4 FUN_1469169ae(longlong param_1)

{
  undefined ***pppuVar1;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  undefined4 *local_28;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = &local_5c;
  local_5c = 0x80040201;
  local_30 = param_1 + -0x28;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_149ec9900;
  local_58[0] = FUN_14285209e;
  FUN_146916192(*(undefined8 *)(param_1 + -0x20),local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_5c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146916a4e FUN_146916a4e body=172 status=ok
// SIG undefined FUN_146916a4e(void)

undefined4 FUN_146916a4e(longlong param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  undefined8 local_60;
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  undefined4 *local_28;
  undefined8 *local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = &local_60;
  local_28 = &local_64;
  local_64 = 0x80040201;
  local_30 = param_1 + -0x30;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_149ec9920;
  local_58[0] = FUN_14285212e;
  local_60 = param_2;
  FUN_146916192(*(undefined8 *)(param_1 + -0x28),local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_64;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146916afc FUN_146916afc body=170 status=ok
// SIG undefined FUN_146916afc(void)

undefined4 FUN_146916afc(longlong param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  undefined8 local_60;
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  undefined4 *local_28;
  undefined8 *local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = &local_60;
  local_28 = &local_64;
  local_64 = 0x80040201;
  local_30 = param_1 + -0x30;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_149ec9940;
  local_58[0] = FUN_14285221c;
  local_60 = param_2;
  FUN_146916192(*(undefined8 *)(param_1 + -0x28),local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_64;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146916ba8 FUN_146916ba8 body=170 status=ok
// SIG undefined FUN_146916ba8(void)

undefined4 FUN_146916ba8(longlong param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  undefined8 local_60;
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  undefined4 *local_28;
  undefined8 *local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = &local_60;
  local_28 = &local_64;
  local_64 = 0x80040201;
  local_30 = param_1 + -0x30;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_149ec9960;
  local_58[0] = FUN_14285231a;
  local_60 = param_2;
  FUN_146916192(*(undefined8 *)(param_1 + -0x28),local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_64;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146916c5e FUN_146916c5e body=170 status=ok
// SIG undefined FUN_146916c5e(void)

undefined4 FUN_146916c5e(longlong param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  undefined8 local_60;
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  undefined4 *local_28;
  undefined8 *local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = &local_60;
  local_28 = &local_64;
  local_64 = 0x80040201;
  local_30 = param_1 + -0x30;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_149ec9980;
  local_58[0] = FUN_14285241a;
  local_60 = param_2;
  FUN_146916192(*(undefined8 *)(param_1 + -0x28),local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_64;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146916d0a FUN_146916d0a body=170 status=ok
// SIG undefined FUN_146916d0a(void)

undefined4 FUN_146916d0a(longlong param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  undefined8 local_60;
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  undefined4 *local_28;
  undefined8 *local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = &local_60;
  local_28 = &local_64;
  local_64 = 0x80040201;
  local_30 = param_1 + -0x30;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_149ec99a0;
  local_58[0] = FUN_142852518;
  local_60 = param_2;
  FUN_146916192(*(undefined8 *)(param_1 + -0x28),local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_64;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146916db6 FUN_146916db6 body=170 status=ok
// SIG undefined FUN_146916db6(void)

undefined4 FUN_146916db6(longlong param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  undefined8 local_60;
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  undefined4 *local_28;
  undefined8 *local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = &local_60;
  local_28 = &local_64;
  local_64 = 0x80040201;
  local_30 = param_1 + -0x30;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_149ec99c0;
  local_58[0] = FUN_142852616;
  local_60 = param_2;
  FUN_146916192(*(undefined8 *)(param_1 + -0x28),local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_64;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146916e62 FUN_146916e62 body=170 status=ok
// SIG undefined FUN_146916e62(void)

undefined4 FUN_146916e62(longlong param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  undefined8 local_60;
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  undefined4 *local_28;
  undefined8 *local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = &local_60;
  local_28 = &local_64;
  local_64 = 0x80040201;
  local_30 = param_1 + -0x30;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_149ec99e0;
  local_58[0] = FUN_142852714;
  local_60 = param_2;
  FUN_146916192(*(undefined8 *)(param_1 + -0x28),local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_64;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146916f0e FUN_146916f0e body=170 status=ok
// SIG undefined FUN_146916f0e(void)

undefined4 FUN_146916f0e(longlong param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  undefined8 local_60;
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  undefined4 *local_28;
  undefined8 *local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = &local_60;
  local_28 = &local_64;
  local_64 = 0x80040201;
  local_30 = param_1 + -0x38;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_149ec9a00;
  local_58[0] = FUN_142852812;
  local_60 = param_2;
  FUN_146916192(*(undefined8 *)(param_1 + -0x30),local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_64;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146916fc4 FUN_146916fc4 body=170 status=ok
// SIG undefined FUN_146916fc4(void)

undefined4 FUN_146916fc4(longlong param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  undefined8 local_60;
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  undefined4 *local_28;
  undefined8 *local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = &local_60;
  local_28 = &local_64;
  local_64 = 0x80004001;
  local_30 = param_1 + -0x38;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_149ec9a20;
  local_58[0] = FUN_14285293c;
  local_60 = param_2;
  FUN_146916192(*(undefined8 *)(param_1 + -0x30),local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_64;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14691708c FUN_14691708c body=170 status=ok
// SIG undefined FUN_14691708c(void)

undefined4 FUN_14691708c(longlong param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  undefined8 local_60;
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  undefined4 *local_28;
  undefined8 *local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = &local_60;
  local_28 = &local_64;
  local_64 = 0x80040201;
  local_30 = param_1 + -0x40;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_149ec9a40;
  local_58[0] = FUN_142852b02;
  local_60 = param_2;
  FUN_146916192(*(undefined8 *)(param_1 + -0x38),local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_64;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146917138 FUN_146917138 body=158 status=ok
// SIG undefined FUN_146917138(void)

undefined4 FUN_146917138(longlong param_1)

{
  undefined ***pppuVar1;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  undefined4 *local_28;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = &local_5c;
  local_5c = 0x80040201;
  local_30 = param_1 + -0x40;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_149ec9a60;
  local_58[0] = FUN_142852bfe;
  FUN_146916192(*(undefined8 *)(param_1 + -0x38),local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_5c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469171d8 FUN_1469171d8 body=170 status=ok
// SIG undefined FUN_1469171d8(void)

undefined4 FUN_1469171d8(longlong param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  undefined8 local_60;
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  undefined4 *local_28;
  undefined8 *local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = &local_60;
  local_28 = &local_64;
  local_64 = 0x80040201;
  local_30 = param_1 + -0x48;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_149ec9a80;
  local_58[0] = FUN_142852c8e;
  local_60 = param_2;
  FUN_146916192(*(undefined8 *)(param_1 + -0x40),local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_64;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146917284 FUN_146917284 body=170 status=ok
// SIG undefined FUN_146917284(void)

undefined4 FUN_146917284(longlong param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  undefined8 local_60;
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  undefined4 *local_28;
  undefined8 *local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = &local_60;
  local_28 = &local_64;
  local_64 = 0x80040201;
  local_30 = param_1 + -0x48;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_149ec9aa0;
  local_58[0] = FUN_142852d8e;
  local_60 = param_2;
  FUN_146916192(*(undefined8 *)(param_1 + -0x40),local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_64;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146917330 FUN_146917330 body=170 status=ok
// SIG undefined FUN_146917330(void)

undefined4 FUN_146917330(longlong param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  undefined8 local_60;
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  undefined4 *local_28;
  undefined8 *local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = &local_60;
  local_28 = &local_64;
  local_64 = 0x80040201;
  local_30 = param_1 + -0x48;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_149ec9ac0;
  local_58[0] = FUN_142852e8e;
  local_60 = param_2;
  FUN_146916192(*(undefined8 *)(param_1 + -0x40),local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_64;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469173ee FUN_1469173ee body=170 status=ok
// SIG undefined FUN_1469173ee(void)

undefined4 FUN_1469173ee(longlong param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  undefined8 local_60;
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  undefined4 *local_28;
  undefined8 *local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = &local_60;
  local_28 = &local_64;
  local_64 = 0x80040201;
  local_30 = param_1 + -0x50;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_149ec9ae0;
  local_58[0] = FUN_142852f8e;
  local_60 = param_2;
  FUN_146916192(*(undefined8 *)(param_1 + -0x48),local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_64;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14691749a FUN_14691749a body=170 status=ok
// SIG undefined FUN_14691749a(void)

undefined4 FUN_14691749a(longlong param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  undefined8 local_60;
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  undefined4 *local_28;
  undefined8 *local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = &local_60;
  local_28 = &local_64;
  local_64 = 0x80040201;
  local_30 = param_1 + -0x50;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_149ec9b00;
  local_58[0] = FUN_142853076;
  local_60 = param_2;
  FUN_146916192(*(undefined8 *)(param_1 + -0x48),local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_64;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146917546 FUN_146917546 body=158 status=ok
// SIG undefined FUN_146917546(void)

undefined4 FUN_146917546(longlong param_1)

{
  undefined ***pppuVar1;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  undefined4 *local_28;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = &local_5c;
  local_5c = 0x80040201;
  local_30 = param_1 + -0x58;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_149ec9b20;
  local_58[0] = FUN_1428531aa;
  FUN_146916192(*(undefined8 *)(param_1 + -0x50),local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_5c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469175e6 FUN_1469175e6 body=170 status=ok
// SIG undefined FUN_1469175e6(void)

undefined4 FUN_1469175e6(longlong param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  undefined8 local_60;
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  undefined4 *local_28;
  undefined8 *local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = &local_60;
  local_28 = &local_64;
  local_64 = 0x80040201;
  local_30 = param_1 + -0x58;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_149ec9b40;
  local_58[0] = FUN_14285323a;
  local_60 = param_2;
  FUN_146916192(*(undefined8 *)(param_1 + -0x50),local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_64;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146917692 FUN_146917692 body=170 status=ok
// SIG undefined FUN_146917692(void)

undefined4 FUN_146917692(longlong param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  undefined8 local_60;
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  undefined4 *local_28;
  undefined8 *local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = &local_60;
  local_28 = &local_64;
  local_64 = 0x80040201;
  local_30 = param_1 + -0x58;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_149ec9b60;
  local_58[0] = FUN_14285333a;
  local_60 = param_2;
  FUN_146916192(*(undefined8 *)(param_1 + -0x50),local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_64;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14691773e FUN_14691773e body=170 status=ok
// SIG undefined FUN_14691773e(void)

undefined4 FUN_14691773e(longlong param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  undefined8 local_60;
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  undefined4 *local_28;
  undefined8 *local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = &local_60;
  local_28 = &local_64;
  local_64 = 0x80040201;
  local_30 = param_1 + -0x58;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_149ec9b80;
  local_58[0] = FUN_14285343a;
  local_60 = param_2;
  FUN_146916192(*(undefined8 *)(param_1 + -0x50),local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_64;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469177ea FUN_1469177ea body=170 status=ok
// SIG undefined FUN_1469177ea(void)

undefined4 FUN_1469177ea(longlong param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  undefined8 local_60;
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  undefined4 *local_28;
  undefined8 *local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = &local_60;
  local_28 = &local_64;
  local_64 = 0x80004001;
  local_30 = param_1 + -0x58;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_149ec9ba0;
  local_58[0] = FUN_14285353a;
  local_60 = param_2;
  FUN_146916192(*(undefined8 *)(param_1 + -0x50),local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_64;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146917896 FUN_146917896 body=153 status=ok
// SIG undefined FUN_146917896(void)

undefined8 FUN_146917896(longlong param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  undefined8 *local_28;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = &local_60;
  local_30 = param_1 + -0x58;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_149ec9bc0;
  local_58[0] = FUN_142853618;
  local_60 = param_2;
  FUN_146916192(*(undefined8 *)(param_1 + -0x50),local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146917930 FUN_146917930 body=170 status=ok
// SIG undefined FUN_146917930(void)

undefined4 FUN_146917930(longlong param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  undefined8 local_60;
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  undefined4 *local_28;
  undefined8 *local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = &local_60;
  local_28 = &local_64;
  local_64 = 0x80040201;
  local_30 = param_1 + -0x58;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_149ec9be0;
  local_58[0] = FUN_142853710;
  local_60 = param_2;
  FUN_146916192(*(undefined8 *)(param_1 + -0x50),local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_64;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469179dc FUN_1469179dc body=170 status=ok
// SIG undefined FUN_1469179dc(void)

undefined4 FUN_1469179dc(longlong param_1,undefined4 param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  undefined4 *local_28;
  undefined4 *local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = &local_5c;
  local_28 = &local_60;
  local_60 = 0x80040201;
  local_30 = param_1 + -0x58;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_149ec9c00;
  local_58[0] = FUN_14285380c;
  local_5c = param_2;
  FUN_146916192(*(undefined8 *)(param_1 + -0x50),local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_60;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146917a8e FUN_146917a8e body=170 status=ok
// SIG undefined FUN_146917a8e(void)

undefined4 FUN_146917a8e(longlong param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  undefined8 local_60;
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  undefined4 *local_28;
  undefined8 *local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = &local_60;
  local_28 = &local_64;
  local_64 = 0x80004001;
  local_30 = param_1 + -0x60;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_149ec9c20;
  local_58[0] = FUN_1428538c0;
  local_60 = param_2;
  FUN_146916192(*(undefined8 *)(param_1 + -0x58),local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_64;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146917b3a FUN_146917b3a body=170 status=ok
// SIG undefined FUN_146917b3a(void)

undefined4 FUN_146917b3a(longlong param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  undefined8 local_60;
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  undefined4 *local_28;
  undefined8 *local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = &local_60;
  local_28 = &local_64;
  local_64 = 0x80004001;
  local_30 = param_1 + -0x60;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_149ec9c40;
  local_58[0] = FUN_142853976;
  local_60 = param_2;
  FUN_146916192(*(undefined8 *)(param_1 + -0x58),local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_64;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146917be6 FUN_146917be6 body=158 status=ok
// SIG undefined FUN_146917be6(void)

undefined4 FUN_146917be6(longlong param_1)

{
  undefined ***pppuVar1;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  undefined4 *local_28;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = &local_5c;
  local_5c = 0x80004001;
  local_30 = param_1 + -0x68;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_149ec9c60;
  local_58[0] = FUN_142853a2c;
  FUN_146916192(*(undefined8 *)(param_1 + -0x60),local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_5c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146917c92 FUN_146917c92 body=170 status=ok
// SIG undefined FUN_146917c92(void)

undefined4 FUN_146917c92(longlong param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  undefined8 local_60;
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  undefined4 *local_28;
  undefined8 *local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = &local_60;
  local_28 = &local_64;
  local_64 = 0x80004001;
  local_30 = param_1 + -0x68;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_149ec9c80;
  local_58[0] = FUN_142853ace;
  local_60 = param_2;
  FUN_146916192(*(undefined8 *)(param_1 + -0x60),local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_64;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146917d3e FUN_146917d3e body=170 status=ok
// SIG undefined FUN_146917d3e(void)

undefined4 FUN_146917d3e(longlong param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  undefined8 local_60;
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  undefined4 *local_28;
  undefined8 *local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = &local_60;
  local_28 = &local_64;
  local_64 = 0x80004001;
  local_30 = param_1 + -0x68;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_149ec9ca0;
  local_58[0] = FUN_142853b84;
  local_60 = param_2;
  FUN_146916192(*(undefined8 *)(param_1 + -0x60),local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_64;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146917de9 FUN_146917de9 body=248 status=ok
// SIG undefined FUN_146917de9(void)

undefined2 * FUN_146917de9(undefined2 *param_1,uint *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  switch(*param_2 >> 1 | (uint)((*param_2 & 1) != 0) << 0x1f) {
  case 1:
    *param_1 = 0xb;
    bVar1 = FUN_146918d3a(param_2);
    param_1[4] = -(ushort)bVar1;
    break;
  default:
    *param_1 = 0;
    break;
  case 4:
    *param_1 = 5;
    uVar3 = FUN_146918e4a(param_2);
    *(undefined8 *)(param_1 + 4) = uVar3;
    break;
  case 5:
    *param_1 = 4;
    uVar2 = FUN_146918f70(param_2);
    *(undefined4 *)(param_1 + 4) = uVar2;
    break;
  case 7:
    *param_1 = 3;
    uVar2 = FUN_146919094(param_2);
    *(undefined4 *)(param_1 + 4) = uVar2;
    break;
  case 0xc:
    *param_1 = 8;
    FUN_14691873a(param_2,&local_28);
    puVar4 = local_28;
    if (local_20 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    uVar3 = Ordinal_2(puVar4);
    *(undefined8 *)(param_1 + 4) = uVar3;
    if (local_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146917ee2 FUN_146917ee2 body=600 status=ok
// SIG undefined FUN_146917ee2(void)

undefined8 FUN_146917ee2(longlong *param_1,ulonglong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_98 [40];
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  longlong local_50;
  ulonglong *local_48;
  longlong *local_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar4 = (ulonglong *)*param_2;
  plVar5 = (longlong *)param_2[1];
  local_48 = puVar4;
  if (plVar5 == (longlong *)0x0) {
    local_40 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    local_40 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      plVar3 = plVar5 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  }
  uVar6 = ((uint)((ulonglong)puVar4 >> 0x14) & 0xffff ^ (uint)((ulonglong)puVar4 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  iVar7 = FUN_146929406(param_1,uVar6 >> 0x10 ^ uVar6,&local_48);
  plVar3 = local_40;
  if (iVar7 == -1) {
    lVar9 = 0;
  }
  else {
    lVar9 = (longlong)iVar7 * 0x20 + *param_1;
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if (lVar9 == 0) {
    lVar9 = (**(code **)(*(longlong *)*param_2 + 0xc0))();
    if (lVar9 == 0) {
      local_50 = FUN_14001cc68(0x38,0x10);
      local_70 = *param_2;
      local_68 = param_2[1];
      if (local_68 != 0) {
        LOCK();
        *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
        UNLOCK();
      }
      FUN_1469181fc(local_50,param_1,&local_70);
    }
    else {
      local_50 = FUN_14001cc68(0x40,0x10);
      local_60 = *param_2;
      local_58 = param_2[1];
      if (local_58 != 0) {
        LOCK();
        *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
        UNLOCK();
      }
      FUN_14691813c(local_50,param_1,&local_60);
    }
    local_40 = &local_50;
    local_48 = param_2;
    FUN_1469294ea(param_1,&local_34);
    uVar8 = *(undefined8 *)(*param_1 + 0x10 + (longlong)local_34 * 0x20);
  }
  else {
    (**(code **)(*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x28) + 8))
              (*(longlong *)(lVar9 + 0x10) + 0x28);
    uVar8 = *(undefined8 *)(lVar9 + 0x10);
  }
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14691813c FUN_14691813c body=191 status=ok
// SIG undefined FUN_14691813c(void)

undefined8 * FUN_14691813c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_3;
  local_20 = param_3[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_1469181fc(param_1,param_2,&local_28);
  *param_1 = &PTR_FUN_149ec69c8;
  param_1[5] = &PTR_FUN_149ec69d0;
  param_1[6] = &PTR_LAB_149ec6a10;
  param_1[7] = &PTR_LAB_149ec6a60;
  (**(code **)(*(longlong *)*param_3 + 0xc0))();
  plVar3 = (longlong *)param_3[1];
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469181fc FUN_1469181fc body=168 status=ok
// SIG undefined FUN_1469181fc(void)

undefined8 * FUN_1469181fc(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_3;
  local_20 = param_3[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_146915e24(param_1,param_2,&local_28);
  *param_1 = &PTR_FUN_149ec6938;
  param_1[5] = &PTR_FUN_149ec6940;
  param_1[6] = &PTR_LAB_149ec6980;
  plVar3 = (longlong *)param_3[1];
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469182a6 FUN_1469182a6 body=346 status=ok
// SIG undefined FUN_1469182a6(void)

undefined8 FUN_1469182a6(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 8) == *(int *)(param_1 + 0x34)) {
    FUN_14284eeaa(param_1);
  }
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + 0x28);
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + 0x30);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_48 = *param_2;
  local_40 = (longlong *)param_2[1];
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  (**(code **)(*plVar3 + 8))(plVar3,&local_38,&local_48);
  plVar3 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  local_58 = local_38;
  local_50 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
  }
  uVar5 = FUN_146917ee2(param_1,&local_58);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146918402 FUN_146918402 body=185 status=ok
// SIG undefined FUN_146918402(void)

void FUN_146918402(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  
  lVar7 = FUN_140d5712e();
  uVar3 = *(undefined8 *)(lVar7 + 0x38);
  plVar4 = *(longlong **)(lVar7 + 0x40);
  if (plVar4 == (longlong *)0x0) {
    iVar6 = FUN_14580d440(uVar3);
    *(int *)(param_1 + 0xb0) = iVar6;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    uVar5 = FUN_14580d440(uVar3);
    *(undefined4 *)(param_1 + 0xb0) = uVar5;
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
    iVar6 = *(int *)(param_1 + 0xb0);
  }
  if (iVar6 == 0) {
    lVar7 = FUN_140d5712e();
    uVar3 = *(undefined8 *)(lVar7 + 0x68);
    plVar4 = *(longlong **)(lVar7 + 0x70);
    if (plVar4 == (longlong *)0x0) {
      uVar5 = FUN_14580d440(uVar3);
      *(undefined4 *)(param_1 + 0xb0) = uVar5;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      uVar5 = FUN_14580d440(uVar3);
      *(undefined4 *)(param_1 + 0xb0) = uVar5;
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
                    /* WARNING: Could not recover jumptable at 0x0001469184ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x10))(plVar4);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1469184bc FUN_1469184bc body=228 status=ok
// SIG undefined FUN_1469184bc(void)

undefined8 FUN_1469184bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_149ec9de0;
  local_38[3] = param_3;
  local_38[4] = FUN_146918402;
  FUN_1448b6402(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469185a2 FUN_1469185a2 body=225 status=ok
// SIG undefined FUN_1469185a2(void)

void FUN_1469185a2(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 == (longlong *)0x0) {
    local_28 = (longlong *)0x0;
    FUN_146929cc4(param_1);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    local_28 = plVar3;
    FUN_146929cc4(param_1);
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
  if (*(int *)(param_1 + 8) == *(int *)(param_1 + 0x34)) {
    FUN_14284ef62(param_1);
  }
  puVar4 = (undefined8 *)param_2[1];
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(puVar4);
      LOCK();
      piVar1 = (int *)((longlong)puVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146918696 FUN_146918696 body=163 status=ok
// SIG undefined FUN_146918696(void)

undefined1 FUN_146918696(longlong param_1,undefined4 param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_88 [43];
  undefined1 local_5d;
  undefined4 local_5c;
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  undefined4 *local_28;
  undefined1 *local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = &local_5c;
  local_20 = &local_5d;
  local_5d = 0;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_149ec9e50;
  local_58[0] = FUN_142853cd8;
  local_5c = param_2;
  local_30 = param_1;
  FUN_146916192(*(undefined8 *)(param_1 + 8),local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_5d;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14691873a FUN_14691873a body=200 status=ok
// SIG undefined FUN_14691873a(void)

undefined8 * FUN_14691873a(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_e8 [32];
  undefined **local_c8 [18];
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *param_2 = 0;
  param_2[1] = 0;
  memset(local_c8,0,0x90);
  FUN_144869430(local_c8);
  local_38 = 0;
  local_c8[0] = &PTR_FUN_149e1e050;
  local_28 = 0x7fffffffffffffff;
  local_30 = param_1 + 8;
  FUN_140996f94(local_c8,1);
  (*(code *)local_c8[0][0x1e])(local_c8,1);
  FUN_14021219d(local_c8,param_2);
  FUN_144a7fc42(local_c8);
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146918803 FUN_146918803 body=603 status=ok
// SIG undefined FUN_146918803(void)

undefined4 * FUN_146918803(undefined4 *param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  wchar_t *_Str;
  undefined8 uVar8;
  longlong lVar9;
  float fVar10;
  double dVar11;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  wchar_t *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  switch(param_3) {
  case 0x755d:
    plVar7 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0xd0))();
    (**(code **)(*plVar7 + 0x28))(plVar7,local_40);
    FUN_146918c70(param_1,local_40);
    goto LAB_1469188f2;
  case 0x755e:
  case 0x7560:
    puVar6 = (undefined8 *)(**(code **)(*(longlong *)*param_2 + 0xd0))();
    uVar4 = (**(code **)*puVar6)(puVar6);
    break;
  case 0x755f:
    plVar7 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0xd0))();
    (**(code **)(*plVar7 + 0x28))(plVar7,&local_30);
    _Str = local_30;
    if (local_28 == 0) {
      _Str = L"";
    }
    dVar11 = _wtof(_Str);
    FUN_146918a60(param_1,(double)(float)dVar11);
    if (local_30 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    goto LAB_1469188f2;
  case 0x7561:
    plVar7 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0xd0))();
    fVar10 = (float)(**(code **)(*plVar7 + 0x20))(plVar7);
    goto LAB_14691894f;
  case 0x7562:
    plVar7 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0xd0))();
    fVar10 = (float)(**(code **)(*plVar7 + 0x18))(plVar7);
    goto LAB_14691894f;
  case 0x7563:
  case 0x7564:
    plVar7 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0xd0))();
    fVar10 = (float)(**(code **)(*plVar7 + 0x10))(plVar7);
LAB_14691894f:
    FUN_146918a60(param_1,(double)fVar10);
    goto LAB_1469188f2;
  default:
switchD_14691883a_caseD_7565:
    *param_1 = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    goto LAB_1469188f2;
  case 0x7579:
    plVar7 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0xc0))();
    lVar9 = *plVar7;
    uVar8 = 2;
    goto LAB_1469188e4;
  case 0x757a:
    plVar7 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0xc0))();
    lVar9 = *plVar7;
    uVar8 = 1;
LAB_1469188e4:
    uVar4 = (**(code **)(lVar9 + 0x20))(plVar7,uVar8);
    break;
  case 0x757b:
    plVar7 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0xc0))();
    iVar5 = (**(code **)(*plVar7 + 0x28))(plVar7);
    if (iVar5 == 2) {
      uVar3 = 1;
    }
    else {
      if (iVar5 != 1) {
        if (iVar5 == 0) goto switchD_14691883a_caseD_757c;
        goto switchD_14691883a_caseD_7565;
      }
      uVar3 = 2;
    }
    goto LAB_146918962;
  case 0x757c:
switchD_14691883a_caseD_757c:
    uVar3 = 0;
    goto LAB_146918962;
  case 0x757d:
    plVar7 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0xc0))();
    uVar4 = (**(code **)(*plVar7 + 0x38))(plVar7);
    break;
  case 0x757e:
  case 0x7587:
  case 0x7588:
  case 0x7589:
    uVar4 = 0;
    break;
  case 0x7586:
    plVar7 = (longlong *)(**(code **)(*(longlong *)*param_2 + 200))();
    uVar3 = (**(code **)(*plVar7 + 0x10))(plVar7);
LAB_146918962:
    FUN_146918b6a(param_1,uVar3);
    goto LAB_1469188f2;
  }
  FUN_14171d2aa(param_1,uVar4);
LAB_1469188f2:
  plVar7 = (longlong *)param_2[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146918a60 FUN_146918a60 body=265 status=ok
// SIG undefined FUN_146918a60(void)

undefined4 * FUN_146918a60(undefined4 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_f8 [32];
  undefined **local_d8;
  ulonglong *local_d0;
  byte local_b0;
  byte local_af;
  byte local_ae;
  undefined8 local_48;
  undefined4 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  puVar1 = param_1 + 2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  local_30 = param_2;
  memset(&local_d8,0,0x90);
  FUN_144869430(&local_d8);
  local_48 = 0;
  local_38 = 0;
  local_b0 = local_b0 | 4;
  local_af = local_af | 1;
  local_d8 = &PTR_FUN_149e1e330;
  puVar2 = (undefined8 *)*local_d0 + 1;
  local_40 = puVar1;
  if ((undefined8 *)local_d0[1] < puVar2) {
    if ((local_ae & 2) == 0) {
      FUN_144a2420a(&local_d8,&local_30,8);
    }
    else {
      thunk_FUN_146821949(&local_d8,&local_30);
    }
  }
  else {
    local_30 = *(undefined8 *)*local_d0;
    *local_d0 = (ulonglong)puVar2;
  }
  *param_1 = 8;
  FUN_144a7fc42(&local_d8);
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146918b6a FUN_146918b6a body=261 status=ok
// SIG undefined FUN_146918b6a(void)

undefined4 * FUN_146918b6a(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_f8 [32];
  undefined **local_d8;
  ulonglong *local_d0;
  byte local_b0;
  byte local_af;
  byte local_ae;
  undefined8 local_48;
  undefined4 *local_40;
  undefined8 local_38;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  puVar1 = param_1 + 2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  local_2c = param_2;
  memset(&local_d8,0,0x90);
  FUN_144869430(&local_d8);
  local_48 = 0;
  local_38 = 0;
  local_b0 = local_b0 | 4;
  local_af = local_af | 1;
  local_d8 = &PTR_FUN_149e1e330;
  puVar2 = (undefined4 *)*local_d0 + 1;
  local_40 = puVar1;
  if ((undefined4 *)local_d0[1] < puVar2) {
    if ((local_ae & 2) == 0) {
      FUN_144a2420a(&local_d8,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(&local_d8,&local_2c);
    }
  }
  else {
    local_2c = *(undefined4 *)*local_d0;
    *local_d0 = (ulonglong)puVar2;
  }
  *param_1 = 0xe;
  FUN_144a7fc42(&local_d8);
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146918c70 FUN_146918c70 body=201 status=ok
// SIG undefined FUN_146918c70(void)

undefined4 * FUN_146918c70(undefined4 *param_1,longlong *param_2)

{
  undefined1 auStack_f8 [32];
  undefined **local_d8 [5];
  byte local_b0;
  byte local_af;
  undefined8 local_48;
  undefined4 *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  memset(local_d8,0,0x90);
  FUN_144869430(local_d8);
  local_48 = 0;
  local_38 = 0;
  local_b0 = local_b0 | 4;
  local_af = local_af | 1;
  local_d8[0] = &PTR_FUN_149e1e330;
  local_40 = param_1 + 2;
  FUN_14021219d(local_d8,param_2);
  *param_1 = 0x18;
  FUN_144a7fc42(local_d8);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146918d3a FUN_146918d3a body=271 status=ok
// SIG undefined FUN_146918d3a(void)

ulonglong FUN_146918d3a(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined8 unaff_RBX;
  undefined1 auStack_f8 [40];
  undefined **local_d0;
  ulonglong *local_c8;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  memset(&local_d0,0,0x90);
  FUN_144869430(&local_d0);
  local_40 = 0;
  local_d0 = &PTR_FUN_149e1e050;
  local_30 = 0x7fffffffffffffff;
  local_38 = param_1 + 8;
  FUN_140996f94(&local_d0,1);
  (*(code *)local_d0[0x1e])(&local_d0,1);
  puVar1 = (uint *)*local_c8 + 1;
  if ((uint *)local_c8[1] < puVar1) {
    local_24 = 0;
    (*(code *)local_d0[0x2e])(&local_d0,&local_24,4);
    uVar2 = local_24;
    if (1 < local_24) {
      FUN_14572541c(&local_d0);
      uVar2 = local_24;
    }
  }
  else {
    uVar2 = *(uint *)*local_c8;
    *local_c8 = (ulonglong)puVar1;
  }
  FUN_144a7fc42(&local_d0);
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar2 != 0) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146918e4a FUN_146918e4a body=293 status=ok
// SIG undefined FUN_146918e4a(void)

undefined8 FUN_146918e4a(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_108 [40];
  undefined **local_e0;
  ulonglong *local_d8;
  byte local_b6;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  memset(&local_e0,0,0x90);
  FUN_144869430(&local_e0);
  local_50 = 0;
  local_e0 = &PTR_FUN_149e1e050;
  local_40 = 0x7fffffffffffffff;
  local_48 = param_1 + 8;
  FUN_140996f94(&local_e0,1);
  (*(code *)local_e0[0x1e])(&local_e0,1);
  puVar1 = (undefined8 *)*local_d8 + 1;
  if ((undefined8 *)local_d8[1] < puVar1) {
    if ((local_b6 & 2) == 0) {
      (*(code *)local_e0[0x2e])(&local_e0,&local_38,8);
    }
    else {
      thunk_FUN_146821949(&local_e0,&local_38);
    }
  }
  else {
    local_38 = *(undefined8 *)*local_d8;
    *local_d8 = (ulonglong)puVar1;
  }
  uVar2 = local_38;
  FUN_144a7fc42(&local_e0);
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146918f70 FUN_146918f70 body=291 status=ok
// SIG undefined FUN_146918f70(void)

undefined4 FUN_146918f70(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_108 [40];
  undefined **local_e0;
  ulonglong *local_d8;
  byte local_b6;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  memset(&local_e0,0,0x90);
  FUN_144869430(&local_e0);
  local_50 = 0;
  local_e0 = &PTR_FUN_149e1e050;
  local_40 = 0x7fffffffffffffff;
  local_48 = param_1 + 8;
  FUN_140996f94(&local_e0,1);
  (*(code *)local_e0[0x1e])(&local_e0,1);
  puVar1 = (undefined4 *)*local_d8 + 1;
  if ((undefined4 *)local_d8[1] < puVar1) {
    if ((local_b6 & 2) == 0) {
      (*(code *)local_e0[0x2e])(&local_e0,&local_34,4);
    }
    else {
      thunk_FUN_14572512c(&local_e0,&local_34);
    }
  }
  else {
    local_34 = *(undefined4 *)*local_d8;
    *local_d8 = (ulonglong)puVar1;
  }
  uVar2 = local_34;
  FUN_144a7fc42(&local_e0);
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146919094 FUN_146919094 body=272 status=ok
// SIG undefined FUN_146919094(void)

undefined4 FUN_146919094(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_e8 [32];
  undefined **local_c8;
  ulonglong *local_c0;
  byte local_9e;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  memset(&local_c8,0,0x90);
  FUN_144869430(&local_c8);
  local_38 = 0;
  local_c8 = &PTR_FUN_149e1e050;
  local_28 = 0x7fffffffffffffff;
  local_30 = param_1 + 8;
  FUN_140996f94(&local_c8,1);
  (*(code *)local_c8[0x1e])(&local_c8,1);
  puVar1 = (undefined4 *)*local_c0 + 1;
  if ((undefined4 *)local_c0[1] < puVar1) {
    if ((local_9e & 2) == 0) {
      (*(code *)local_c8[0x2e])(&local_c8,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(&local_c8,&local_1c);
    }
  }
  else {
    local_1c = *(undefined4 *)*local_c0;
    *local_c0 = (ulonglong)puVar1;
  }
  uVar2 = local_1c;
  FUN_144a7fc42(&local_c8);
  if ((local_18 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469191a5 FUN_1469191a5 body=189 status=ok
// SIG undefined FUN_1469191a5(void)

undefined4 FUN_1469191a5(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  byte bVar6;
  undefined4 uVar7;
  undefined *puVar8;
  
  bVar6 = (**(code **)(*(longlong *)*param_1 + 0x60))();
  uVar7 = 0xc369;
  if (DAT_14c967100 != DAT_14c96712c) {
    puVar8 = &DAT_14c967130;
    if (DAT_14c967138 != (undefined *)0x0) {
      puVar8 = DAT_14c967138;
    }
    iVar4 = *(int *)(puVar8 + (ulonglong)(DAT_14c967140 - 1U & (uint)bVar6) * 4);
    while (iVar4 != -1) {
      lVar3 = DAT_14c9670f8 + (longlong)iVar4 * 0x10;
      if (*(byte *)(DAT_14c9670f8 + (longlong)iVar4 * 0x10) == bVar6) {
        if ((undefined4 *)(lVar3 + 4) != (undefined4 *)0x0 && lVar3 != 0) {
          uVar7 = *(undefined4 *)(lVar3 + 4);
        }
        break;
      }
      iVar4 = *(int *)(lVar3 + 8);
    }
  }
  plVar5 = (longlong *)param_1[1];
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
  return uVar7;
}



// FUNCTION 146919262 FUN_146919262 body=509 status=ok
// SIG undefined FUN_146919262(void)

undefined8 * FUN_146919262(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  void *_Src;
  longlong *plVar5;
  byte bVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  bVar6 = (**(code **)(*(longlong *)*param_2 + 0x60))();
  if (DAT_14c967150 != DAT_14c96717c) {
    puVar8 = &DAT_14c967180;
    if (DAT_14c967188 != (undefined *)0x0) {
      puVar8 = DAT_14c967188;
    }
    iVar4 = *(int *)(puVar8 + (ulonglong)(DAT_14c967190 - 1U & (uint)bVar6) * 4);
    while (iVar4 != -1) {
      lVar3 = DAT_14c967148 + (longlong)iVar4 * 0x20;
      if (*(byte *)(DAT_14c967148 + (longlong)iVar4 * 0x20) == bVar6) {
        puVar7 = (undefined8 *)(lVar3 + 8);
        if (puVar7 != (undefined8 *)0x0 && lVar3 != 0) goto LAB_1469192c7;
        break;
      }
      iVar4 = *(int *)(lVar3 + 0x18);
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9671c8) && (FUN_144b3d300(&DAT_14c9671c8), DAT_14c9671c8 == -1)) {
    local_38 = L"ControlTypeCustom";
    local_30 = 0x11;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"SlateAccessibility";
    local_30 = 0x12;
    FUN_1446e940c(local_40,&local_38);
    FUN_140208bae(&DAT_14c9671b8,local_40,local_3c,L"custom");
    atexit((_func_5014 *)&LAB_14284eff8);
    _Init_thread_footer(&DAT_14c9671c8);
  }
  puVar7 = &DAT_14c9671b8;
LAB_1469192c7:
  puVar7 = (undefined8 *)FUN_1447a1f4a(puVar7);
  *param_1 = 0;
  iVar4 = *(int *)(puVar7 + 1);
  _Src = (void *)*puVar7;
  *(int *)(param_1 + 1) = iVar4;
  if ((longlong)iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar4,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar4 * 2);
  }
  plVar5 = (longlong *)param_2[1];
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
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146919460 FUN_146919460 body=136 status=ok
// SIG undefined FUN_146919460(void)

void FUN_146919460(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_149ec6938;
  param_1[5] = &PTR_FUN_149ec6940;
  param_1[6] = &PTR_LAB_149ec6980;
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    local_20 = param_1[2];
    local_18 = param_1[3];
    if (local_18 != 0) {
      LOCK();
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      UNLOCK();
    }
    FUN_1469185a2(lVar1,&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_146915ed4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469194ea FUN_1469194ea body=108 status=ok
// SIG undefined FUN_1469194ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1469194ea(longlong *param_1,undefined1 (*param_2) [16],undefined8 *param_3)

{
  longlong *plVar1;
  
  plVar1 = param_1;
  if ((*param_2 != _DAT_149ec53b0) && (*param_2 != _DAT_149ec5450)) {
    if (*param_2 != _DAT_149ec5460) {
      *param_3 = 0;
      return 0x80004002;
    }
    plVar1 = param_1 + 1;
  }
  *param_3 = plVar1;
  if (plVar1 == (longlong *)0x0) {
                    /* WARNING: Read-only address (ram,0x000149ec53b0) is written */
                    /* WARNING: Read-only address (ram,0x000149ec5450) is written */
                    /* WARNING: Read-only address (ram,0x000149ec5460) is written */
                    /* WARNING: Read-only address (ram,0x000149ec53b0) is written */
                    /* WARNING: Read-only address (ram,0x000149ec5450) is written */
                    /* WARNING: Read-only address (ram,0x000149ec5460) is written */
    return 0x80004002;
  }
  (**(code **)(*param_1 + 8))();
  return 0;
}



// FUNCTION 146919574 FUN_146919574 body=45 status=ok
// SIG undefined FUN_146919574(void)

int FUN_146919574(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + -8) + -1;
  *(int *)(param_1 + -8) = iVar2;
  puVar1 = (undefined8 *)(param_1 + -0x28);
  if (puVar1 != (undefined8 *)0x0 && iVar2 == 0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return iVar2;
}



// FUNCTION 1469195a2 FUN_1469195a2 body=45 status=ok
// SIG undefined FUN_1469195a2(void)

int FUN_1469195a2(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + -0x10) + -1;
  *(int *)(param_1 + -0x10) = iVar2;
  puVar1 = (undefined8 *)(param_1 + -0x30);
  if (puVar1 != (undefined8 *)0x0 && iVar2 == 0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return iVar2;
}



// FUNCTION 1469195da FUN_1469195da body=228 status=ok
// SIG undefined FUN_1469195da(void)

undefined4 FUN_1469195da(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  code *local_78 [2];
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0x80040201;
  uVar1 = *(undefined8 *)(param_1 + -0x20);
  local_78[0] = (code *)0x0;
  local_84 = param_2;
  local_80 = param_3;
  local_68 = (longlong *)FUN_14001cc68(0x28,8);
  *local_68 = (longlong)&PTR_FUN_149ec9e70;
  local_68[1] = param_1 + -0x28;
  local_68[2] = (longlong)&local_88;
  local_68[3] = (longlong)&local_84;
  local_68[4] = (longlong)&local_80;
  if (local_68 + 1 != (longlong *)0x0) {
    local_78[0] = FUN_142853e3e;
  }
  FUN_146916192(uVar1,local_78);
  if (local_78[0] != (code *)0x0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return local_88;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469196ca FUN_1469196ca body=170 status=ok
// SIG undefined FUN_1469196ca(void)

undefined4 FUN_1469196ca(longlong param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  undefined8 local_60;
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  undefined4 *local_28;
  undefined8 *local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = &local_60;
  local_28 = &local_64;
  local_64 = 0;
  local_30 = param_1 + -0x30;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_149ec9ee0;
  local_58[0] = FUN_142854788;
  local_60 = param_2;
  FUN_146916192(*(undefined8 *)(param_1 + -0x28),local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_64;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146919776 FUN_146919776 body=170 status=ok
// SIG undefined FUN_146919776(void)

undefined4 FUN_146919776(longlong param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  undefined8 local_60;
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  undefined4 *local_28;
  undefined8 *local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = &local_60;
  local_28 = &local_64;
  local_64 = 0;
  local_30 = param_1 + -0x30;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_149ec9f00;
  local_58[0] = FUN_1428548d4;
  local_60 = param_2;
  FUN_146916192(*(undefined8 *)(param_1 + -0x28),local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_64;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14691982c FUN_14691982c body=158 status=ok
// SIG undefined FUN_14691982c(void)

undefined4 FUN_14691982c(longlong param_1)

{
  undefined ***pppuVar1;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  undefined4 *local_28;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = &local_5c;
  local_5c = 0;
  local_30 = param_1 + -0x30;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_149ec9f20;
  local_58[0] = FUN_1428549e4;
  FUN_146916192(*(undefined8 *)(param_1 + -0x28),local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_5c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469198cc FUN_1469198cc body=170 status=ok
// SIG undefined FUN_1469198cc(void)

undefined4 FUN_1469198cc(longlong param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  undefined8 local_60;
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  undefined4 *local_28;
  undefined8 *local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = &local_60;
  local_28 = &local_64;
  local_64 = 0x80040201;
  local_30 = param_1 + -0x30;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_149ec9f40;
  local_58[0] = FUN_142854a88;
  local_60 = param_2;
  FUN_146916192(*(undefined8 *)(param_1 + -0x28),local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_64;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146919978 FUN_146919978 body=52 status=ok
// SIG undefined FUN_146919978(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_146919978(longlong *param_1,undefined1 (*param_2) [16],longlong *param_3)

{
  undefined8 uVar1;
  
  if (*param_2 == _DAT_149ec5470) {
    *param_3 = (longlong)(param_1 + 2);
    (**(code **)(*param_1 + 8))();
    return 0;
  }
  uVar1 = FUN_1469194ea();
  return uVar1;
}



// FUNCTION 1469199ca FUN_1469199ca body=45 status=ok
// SIG undefined FUN_1469199ca(void)

int FUN_1469199ca(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + -8) + -1;
  *(int *)(param_1 + -8) = iVar2;
  puVar1 = (undefined8 *)(param_1 + -0x28);
  if (puVar1 != (undefined8 *)0x0 && iVar2 == 0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return iVar2;
}



// FUNCTION 1469199f8 FUN_1469199f8 body=45 status=ok
// SIG undefined FUN_1469199f8(void)

int FUN_1469199f8(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + -0x10) + -1;
  *(int *)(param_1 + -0x10) = iVar2;
  puVar1 = (undefined8 *)(param_1 + -0x30);
  if (puVar1 != (undefined8 *)0x0 && iVar2 == 0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return iVar2;
}



// FUNCTION 146919a26 FUN_146919a26 body=170 status=ok
// SIG undefined FUN_146919a26(void)

undefined4 FUN_146919a26(longlong param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  undefined8 local_60;
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  undefined4 *local_28;
  undefined8 *local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = &local_60;
  local_28 = &local_64;
  local_64 = 0x80040201;
  local_30 = param_1 + -0x28;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_149ec9f60;
  local_58[0] = FUN_142854bb4;
  local_60 = param_2;
  FUN_146916192(*(undefined8 *)(param_1 + -0x20),local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_64;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146919ad2 FUN_146919ad2 body=228 status=ok
// SIG undefined FUN_146919ad2(void)

undefined4 FUN_146919ad2(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  code *local_78 [2];
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0x80040201;
  uVar1 = *(undefined8 *)(param_1 + -0x20);
  local_78[0] = (code *)0x0;
  local_84 = param_2;
  local_80 = param_3;
  local_68 = (longlong *)FUN_14001cc68(0x28,8);
  *local_68 = (longlong)&PTR_FUN_149ec9f80;
  local_68[1] = param_1 + -0x28;
  local_68[2] = (longlong)&local_88;
  local_68[3] = (longlong)&local_84;
  local_68[4] = (longlong)&local_80;
  if (local_68 + 1 != (longlong *)0x0) {
    local_78[0] = FUN_142854cc2;
  }
  FUN_146916192(uVar1,local_78);
  if (local_78[0] != (code *)0x0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return local_88;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146919bb8 FUN_146919bb8 body=255 status=ok
// SIG undefined FUN_146919bb8(void)

undefined4 FUN_146919bb8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_b8 [36];
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  code *local_78 [2];
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_94 = 0x80040201;
  uVar1 = *(undefined8 *)(param_1 + -0x30);
  local_78[0] = (code *)0x0;
  local_90 = param_2;
  local_88 = param_3;
  local_80 = param_4;
  local_68 = (longlong *)FUN_14001cc68(0x30,8);
  *local_68 = (longlong)&PTR_FUN_149ec9fa0;
  local_68[1] = param_1 + -0x38;
  local_68[2] = (longlong)&local_94;
  local_68[3] = (longlong)&local_80;
  local_68[4] = (longlong)&local_90;
  local_68[5] = (longlong)&local_88;
  if (local_68 + 1 != (longlong *)0x0) {
    local_78[0] = FUN_142854e1e;
  }
  FUN_146916192(uVar1,local_78);
  if (local_78[0] != (code *)0x0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return local_94;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146919cb8 FUN_146919cb8 body=170 status=ok
// SIG undefined FUN_146919cb8(void)

undefined4 FUN_146919cb8(longlong param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  undefined8 local_60;
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  undefined4 *local_28;
  undefined8 *local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = &local_60;
  local_28 = &local_64;
  local_64 = 0x80040201;
  local_30 = param_1 + -0x38;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_149ec9fc0;
  local_58[0] = FUN_142854fae;
  local_60 = param_2;
  FUN_146916192(*(undefined8 *)(param_1 + -0x30),local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_64;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146919d78 FUN_146919d78 body=51 status=ok
// SIG undefined FUN_146919d78(void)

int FUN_146919d78(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8) + -1;
  *(int *)(param_1 + 8) = iVar2;
  plVar1 = (longlong *)(param_1 + -8);
  if (plVar1 != (longlong *)0x0 && iVar2 == 0) {
    (**(code **)(*plVar1 + 0xe8))(plVar1,1);
  }
  return iVar2;
}



// FUNCTION 146919dac FUN_146919dac body=230 status=ok
// SIG undefined FUN_146919dac(void)

void FUN_146919dac(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_14593bf7e(param_1,1);
  FUN_145ff2c7c(DAT_14c872ce0,L"WindowsApplication.Accessibility",&DAT_14c872ce8);
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  plVar3 = *(longlong **)(param_1 + 0x1e8);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1e8) = 0;
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
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    UnhookWindowsHookEx(*(HHOOK *)(param_1 + 0xa0));
    *(undefined1 *)(param_1 + 0xa8) = 0;
  }
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xb8))
            (DAT_14c8407a8,L"WindowsApplication.ApplyLowLevelMouseFilter",1);
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000146919e8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xb8))
            (DAT_14c8407a8,L"WindowsApplication.RemoveLowLevelMouseFilter",1);
  return;
}



// FUNCTION 146919e92 FUN_146919e92 body=61 status=ok
// SIG undefined FUN_146919e92(void)

void FUN_146919e92(longlong param_1)

{
  HHOOK pHVar1;
  
  if (*(char *)(param_1 + 0xa8) == '\0') {
    pHVar1 = SetWindowsHookExW(0xe,FUN_146919efc,(HINSTANCE)0x0,0);
    *(HHOOK *)(param_1 + 0xa0) = pHVar1;
    *(undefined1 *)(param_1 + 0xa8) = 1;
  }
  return;
}



// FUNCTION 146919ed0 FUN_146919ed0 body=43 status=ok
// SIG undefined FUN_146919ed0(void)

void FUN_146919ed0(longlong param_1)

{
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    UnhookWindowsHookEx(*(HHOOK *)(param_1 + 0xa0));
    *(undefined1 *)(param_1 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 146919efc FUN_146919efc body=133 status=ok
// SIG undefined FUN_146919efc(void)

LRESULT FUN_146919efc(int param_1,WPARAM param_2,longlong param_3)

{
  uint uVar1;
  LRESULT LVar2;
  LPARAM LVar3;
  LRESULT LVar4;
  
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000146919f20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LVar2 = CallNextHookEx((HHOOK)0x0,param_1,param_2,param_3);
    return LVar2;
  }
  LVar3 = GetMessageExtraInfo();
  if (((uint)LVar3 & 0xff515700) == 0xff515700) {
    CallNextHookEx((HHOOK)0x0,0,param_2,param_3);
    LVar2 = 1;
  }
  else {
    uVar1 = *(uint *)(param_3 + 0x18);
    LVar4 = CallNextHookEx((HHOOK)0x0,0,param_2,param_3);
    LVar2 = 1;
    if ((uVar1 & 0xff515700) != 0xff515700) {
      LVar2 = LVar4;
    }
  }
  return LVar2;
}



// FUNCTION 146919f90 FUN_146919f90 body=120 status=ok
// SIG undefined FUN_146919f90(void)

ulonglong FUN_146919f90(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  uint uVar4;
  char *pcVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  plVar1 = (longlong *)(param_1 + 0x220);
  uVar8 = (ulonglong)*(int *)(param_1 + 0x228);
  if (0 < (longlong)uVar8) {
    pcVar5 = (char *)(*plVar1 + 0x1c);
    uVar7 = 0;
    do {
      if (*pcVar5 != '\x01') {
        uVar8 = uVar7 & 0xffffffff;
        goto LAB_146919fef;
      }
      uVar7 = uVar7 + 1;
      pcVar5 = pcVar5 + 0x20;
    } while (uVar8 != uVar7);
  }
  uVar4 = *(int *)(param_1 + 0x228) + 1;
  *(uint *)(param_1 + 0x228) = uVar4;
  if (*(uint *)(param_1 + 0x22c) < uVar4) {
    FUN_14692a4ae(plVar1);
  }
  lVar3 = *plVar1;
  lVar6 = uVar8 * 0x20;
  *(undefined1 *)(lVar3 + lVar6) = 0;
  *(undefined1 *)(lVar3 + 0x1c + lVar6) = 0;
  puVar2 = (undefined8 *)(lVar3 + 8 + lVar6);
  *puVar2 = 0;
  puVar2[1] = 0;
LAB_146919fef:
  return uVar8 & 0xffffffff;
}



// FUNCTION 14691a008 FUN_14691a008 body=179 status=ok
// SIG undefined FUN_14691a008(void)

void FUN_14691a008(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined1 *local_30;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  switch(*param_2) {
  case 0:
    local_30 = local_1c;
    FUN_14691a0ce(param_1,*(undefined8 *)(param_2 + 2),param_2 + 4);
    break;
  case 1:
    local_38 = local_1c;
    FUN_14691a2ca(param_1,*(undefined8 *)(param_2 + 2));
    break;
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
  case 3:
    local_30 = local_1c;
    FUN_14691a51e(param_1,*(undefined8 *)(param_2 + 2));
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14691a0ce FUN_14691a0ce body=507 status=ok
// SIG undefined FUN_14691a0ce(void)

undefined8
FUN_14691a0ce(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5,undefined4 *param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  byte bVar4;
  longlong *plVar5;
  char cVar6;
  undefined4 uVar7;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1428503e2(&local_38,param_1 + 0x100,param_2);
  if (local_38 != 0) {
    cVar6 = FUN_14692b452(local_38);
    plVar3 = local_30;
    if (cVar6 == '\0') {
      *param_6 = 0;
    }
    else {
      bVar4 = *(byte *)(param_3 + 0x20);
      if ((~bVar4 & 3) == 0) {
        plVar5 = *(longlong **)(param_1 + 0x18);
        if (local_30 == (longlong *)0x0) {
          local_40 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(local_30 + 1) = (int)local_30[1] + 1;
          UNLOCK();
          local_40 = local_30;
          LOCK();
          *(int *)(local_30 + 1) = (int)local_30[1] + 1;
          UNLOCK();
        }
        uVar7 = (**(code **)(*plVar5 + 0x1c0))(plVar5,local_48,param_3,param_3 + 0x10);
      }
      else if ((bVar4 & 1) == 0) {
        if ((bVar4 & 2) == 0) goto LAB_14691a1c8;
        plVar5 = *(longlong **)(param_1 + 0x18);
        if (local_30 == (longlong *)0x0) {
          local_40 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(local_30 + 1) = (int)local_30[1] + 1;
          UNLOCK();
          local_40 = local_30;
          LOCK();
          *(int *)(local_30 + 1) = (int)local_30[1] + 1;
          UNLOCK();
        }
        uVar7 = (**(code **)(*plVar5 + 0x1b8))(plVar5,local_48,param_3 + 0x10);
      }
      else {
        plVar5 = *(longlong **)(param_1 + 0x18);
        if (local_30 == (longlong *)0x0) {
          local_40 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(local_30 + 1) = (int)local_30[1] + 1;
          UNLOCK();
          local_40 = local_30;
          LOCK();
          *(int *)(local_30 + 1) = (int)local_30[1] + 1;
          UNLOCK();
        }
        uVar7 = (**(code **)(*plVar5 + 0x1b0))(plVar5,local_48,param_3);
      }
      plVar5 = local_40;
      *param_6 = uVar7;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar3 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
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
    }
  }
LAB_14691a1c8:
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


