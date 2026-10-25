// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148747166 FUN_148747166 body=59 status=ok
// SIG undefined FUN_148747166(void)

undefined8 FUN_148747166(longlong *param_1)

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



// FUNCTION 1487471b2 FUN_1487471b2 body=38 status=ok
// SIG undefined FUN_1487471b2(void)

void FUN_1487471b2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x110) == '\x01') {
    FUN_14185bb5c(param_2);
    *(undefined1 *)(param_2 + 0x110) = 0;
  }
  return;
}



// FUNCTION 14874721a FUN_14874721a body=133 status=ok
// SIG undefined FUN_14874721a(void)

undefined8 * FUN_14874721a(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FUN_1406fa324(param_1 + 1,param_2 + 1);
  FUN_1401f3db8(param_1 + 3,param_2 + 3);
  FUN_140d02432(param_1 + 6,param_2 + 6);
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  FUN_140d02432(param_1 + 0x11,param_2 + 0x11);
  FUN_14124fed2(param_1 + 0x1b,param_2 + 0x1b);
  FUN_1403de7ba(param_1 + 0x1e,param_2 + 0x1e);
  return param_1;
}



// FUNCTION 1487472ca FUN_1487472ca body=62 status=ok
// SIG undefined FUN_1487472ca(void)

undefined1 FUN_1487472ca(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1418557ae(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x1c);
    uVar2 = *(undefined4 *)(param_3 + 0x20);
    uVar3 = *(undefined4 *)(param_3 + 0x24);
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_3 + 0x18);
    *(undefined4 *)(param_2 + 0x1c) = uVar1;
    *(undefined4 *)(param_2 + 0x20) = uVar2;
    *(undefined4 *)(param_2 + 0x24) = uVar3;
    param_2 = param_2 + 0x28;
    param_3 = param_3 + 0x28;
  }
  return 1;
}



// FUNCTION 148747330 FUN_148747330 body=70 status=ok
// SIG undefined FUN_148747330(void)

void FUN_148747330(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_148935b7c(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148747402 FUN_148747402 body=62 status=ok
// SIG undefined FUN_148747402(void)

undefined8 FUN_148747402(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1418557ae(param_2,param_3);
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_3 + 0x18);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 148747468 FUN_148747468 body=70 status=ok
// SIG undefined FUN_148747468(void)

void FUN_148747468(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_148935c9b(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14874757e FUN_14874757e body=59 status=ok
// SIG undefined FUN_14874757e(void)

undefined8 FUN_14874757e(longlong *param_1)

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



// FUNCTION 14874761e FUN_14874761e body=29 status=ok
// SIG undefined FUN_14874761e(void)

undefined8 FUN_14874761e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14874763c FUN_14874763c body=55 status=ok
// SIG undefined FUN_14874763c(void)

void FUN_14874763c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68908 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68908 = FUN_140002ddd(FUN_14651c179,uVar1,L"GbxUnlockableItemData");
  }
  return;
}



// FUNCTION 148747674 FUN_148747674 body=32 status=ok
// SIG undefined FUN_148747674(void)

undefined8 FUN_148747674(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Unknown");
  return param_2;
}



// FUNCTION 148747696 FUN_148747696 body=54 status=ok
// SIG undefined FUN_148747696(void)

undefined8 * FUN_148747696(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/Progression/GbxUnlockableItemData.h"
                ,0x27,L"Pure virtual not implemented (%s)",
                L"FGbxUnlockableItemData::DoCreateUnlockableItem");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 14874770f FUN_14874770f body=62 status=ok
// SIG undefined FUN_14874770f(void)

void FUN_14874770f(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1447cd2ec(param_1,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14874774e FUN_14874774e body=92 status=ok
// SIG undefined FUN_14874774e(void)

void FUN_14874774e(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cb68b68);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487477ac FUN_1487477ac body=92 status=ok
// SIG undefined FUN_1487477ac(void)

void FUN_1487477ac(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cb68b78);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14874780a FUN_14874780a body=92 status=ok
// SIG undefined FUN_14874780a(void)

void FUN_14874780a(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cb68b88);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148747868 FUN_148747868 body=92 status=ok
// SIG undefined FUN_148747868(void)

void FUN_148747868(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cb68b98);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487478f6 FUN_1487478f6 body=104 status=ok
// SIG undefined FUN_1487478f6(void)

void FUN_1487478f6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb68bd0) {
    FUN_144b3d300(&DAT_14cb68bd0);
    if (DAT_14cb68bd0 == -1) {
      FUN_1446f470e(&DAT_14cb68bc8,L"UsableActorState",1);
      _Init_thread_footer(&DAT_14cb68bd0);
      return;
    }
  }
  return;
}



// FUNCTION 14874799e FUN_14874799e body=75 status=ok
// SIG undefined FUN_14874799e(void)

void FUN_14874799e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_1418908f2(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148747a0c FUN_148747a0c body=45 status=ok
// SIG undefined FUN_148747a0c(void)

longlong FUN_148747a0c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e79a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148747a3a FUN_148747a3a body=45 status=ok
// SIG undefined FUN_148747a3a(void)

longlong FUN_148747a3a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148747a68 FUN_148747a68 body=48 status=ok
// SIG undefined FUN_148747a68(void)

longlong FUN_148747a68(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148747a98 FUN_148747a98 body=48 status=ok
// SIG undefined FUN_148747a98(void)

longlong FUN_148747a98(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148747ac8 FUN_148747ac8 body=48 status=ok
// SIG undefined FUN_148747ac8(void)

longlong FUN_148747ac8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148747af8 FUN_148747af8 body=45 status=ok
// SIG undefined FUN_148747af8(void)

longlong FUN_148747af8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_145ab715e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148747b92 FUN_148747b92 body=41 status=ok
// SIG undefined FUN_148747b92(void)

void FUN_148747b92(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/Gestalt/GestaltPartData.h",
                0x51,L"Pure virtual not implemented (%s)",L"CollectGestaltParts_Internal");
  return;
}



// FUNCTION 148747bbc FUN_148747bbc body=41 status=ok
// SIG undefined FUN_148747bbc(void)

void FUN_148747bbc(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/Gestalt/GestaltPartData.h",
                0x54,L"Pure virtual not implemented (%s)",L"CollectAllGestaltMeshParts");
  return;
}



// FUNCTION 148747be6 FUN_148747be6 body=45 status=ok
// SIG undefined FUN_148747be6(void)

longlong FUN_148747be6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148747c1a FUN_148747c1a body=45 status=ok
// SIG undefined FUN_148747c1a(void)

longlong FUN_148747c1a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148747c4e FUN_148747c4e body=42 status=ok
// SIG undefined FUN_148747c4e(void)

undefined8 FUN_148747c4e(void)

{
  FUN_140033559("Runtime\\Engine\\Public\\Gearbox/SkeletonProviderInterface.h",0x1a,
                L"Pure virtual not implemented (%s)",L"ISkeletonProviderInterface::GetSkeleton");
  return 0;
}



// FUNCTION 148747c90 FUN_148747c90 body=45 status=ok
// SIG undefined FUN_148747c90(void)

longlong FUN_148747c90(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_140cea31a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148747cc4 FUN_148747cc4 body=45 status=ok
// SIG undefined FUN_148747cc4(void)

longlong FUN_148747cc4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_140cea31a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148747cf8 FUN_148747cf8 body=45 status=ok
// SIG undefined FUN_148747cf8(void)

longlong FUN_148747cf8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x48;
  FUN_140cea31a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148747d2c FUN_148747d2c body=45 status=ok
// SIG undefined FUN_148747d2c(void)

longlong FUN_148747d2c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x50;
  FUN_140cea31a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148747dae FUN_148747dae body=73 status=ok
// SIG undefined FUN_148747dae(void)

undefined1 FUN_148747dae(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14150acc4(param_2,param_3);
    *(undefined1 *)(param_2 + 0x18) = *(undefined1 *)(param_3 + 0x18);
    FUN_140d02432(param_2 + 0x20,param_3 + 0x20);
    param_2 = param_2 + 0x70;
    param_3 = param_3 + 0x70;
  }
  return 1;
}



// FUNCTION 148747e20 FUN_148747e20 body=59 status=ok
// SIG undefined FUN_148747e20(void)

undefined8 FUN_148747e20(longlong *param_1)

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



// FUNCTION 148747ede FUN_148747ede body=62 status=ok
// SIG undefined FUN_148747ede(void)

undefined1 FUN_148747ede(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_148748034(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148747f44 FUN_148747f44 body=59 status=ok
// SIG undefined FUN_148747f44(void)

undefined8 FUN_148747f44(longlong *param_1)

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



// FUNCTION 148747f8a FUN_148747f8a body=48 status=ok
// SIG undefined FUN_148747f8a(void)

void FUN_148747f8a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_2 = &PTR_FUN_14b2d2b30;
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 148747ffc FUN_148747ffc body=55 status=ok
// SIG undefined FUN_148747ffc(void)

void FUN_148747ffc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68938 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68938 = FUN_140002ddd(FUN_14651c74b,uVar1,L"GbxUnlockableItemData_ModifyAttributes");
  }
  return;
}



// FUNCTION 148748034 FUN_148748034 body=79 status=ok
// SIG undefined FUN_148748034(void)

undefined8 * FUN_148748034(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148748084(param_1,iVar1);
      FUN_1487480f3(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148748084 FUN_148748084 body=111 status=ok
// SIG undefined FUN_148748084(void)

void FUN_148748084(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x70,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x70,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1487480f3 FUN_1487480f3 body=121 status=ok
// SIG undefined FUN_1487480f3(void)

void FUN_1487480f3(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_144a76ff0(param_1,param_2);
    *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    FUN_144a7f96e(param_1 + 0x28,param_2 + 0x28);
    uVar1 = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x48) = uVar1;
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
    param_1 = param_1 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return;
}



// FUNCTION 1487481c6 FUN_1487481c6 body=301 status=ok
// SIG undefined FUN_1487481c6(void)

undefined8 FUN_1487481c6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_4 != 0) {
    do {
      if (param_2 != param_3) {
        uStack_b0 = CONCAT71(uStack_b0._1_7_,*(byte *)(param_3 + 0x40));
        (*(code *)(&PTR_caseD_2_14b1f3420)[*(byte *)(param_3 + 0x40)])(&local_e8,param_3 + 8);
        local_78 = (undefined4)local_b8;
        uStack_74 = local_b8._4_4_;
        uStack_70 = (undefined4)uStack_b0;
        uStack_6c = uStack_b0._4_4_;
        local_88 = (undefined4)local_c8;
        uStack_84 = local_c8._4_4_;
        uStack_80 = (undefined4)uStack_c0;
        uStack_7c = uStack_c0._4_4_;
        local_98 = (undefined4)local_d8;
        uStack_94 = local_d8._4_4_;
        uStack_90 = (undefined4)uStack_d0;
        uStack_8c = uStack_d0._4_4_;
        local_a8 = (undefined4)local_e8;
        uStack_a4 = local_e8._4_4_;
        uStack_a0 = (undefined4)uStack_e0;
        uStack_9c = uStack_e0._4_4_;
        uVar1 = *(undefined8 *)(param_2 + 8);
        uVar2 = *(undefined8 *)(param_2 + 0x10);
        uVar3 = *(undefined8 *)(param_2 + 0x18);
        uVar4 = *(undefined8 *)(param_2 + 0x20);
        uVar5 = *(undefined8 *)(param_2 + 0x28);
        uVar6 = *(undefined8 *)(param_2 + 0x30);
        uVar7 = *(undefined8 *)(param_2 + 0x38);
        uVar8 = *(ulonglong *)(param_2 + 0x40);
        *(undefined4 *)(param_2 + 0x38) = (undefined4)local_b8;
        *(undefined4 *)(param_2 + 0x3c) = local_b8._4_4_;
        *(undefined4 *)(param_2 + 0x40) = (undefined4)uStack_b0;
        *(undefined4 *)(param_2 + 0x44) = uStack_b0._4_4_;
        *(undefined4 *)(param_2 + 0x28) = (undefined4)local_c8;
        *(undefined4 *)(param_2 + 0x2c) = local_c8._4_4_;
        *(undefined4 *)(param_2 + 0x30) = (undefined4)uStack_c0;
        *(undefined4 *)(param_2 + 0x34) = uStack_c0._4_4_;
        *(undefined4 *)(param_2 + 0x18) = (undefined4)local_d8;
        *(undefined4 *)(param_2 + 0x1c) = local_d8._4_4_;
        *(undefined4 *)(param_2 + 0x20) = (undefined4)uStack_d0;
        *(undefined4 *)(param_2 + 0x24) = uStack_d0._4_4_;
        *(undefined4 *)(param_2 + 8) = (undefined4)local_e8;
        *(undefined4 *)(param_2 + 0xc) = local_e8._4_4_;
        *(undefined4 *)(param_2 + 0x10) = (undefined4)uStack_e0;
        *(undefined4 *)(param_2 + 0x14) = uStack_e0._4_4_;
        local_e8 = uVar1;
        uStack_e0 = uVar2;
        local_d8 = uVar3;
        uStack_d0 = uVar4;
        local_c8 = uVar5;
        uStack_c0 = uVar6;
        local_b8 = uVar7;
        uStack_b0 = uVar8;
        (*(code *)(&switchD_14400f025::switchdataD_14b1f3410)[uVar8 & 0xff])(&local_e8);
      }
      param_3 = param_3 + 0x48;
      param_2 = param_2 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14874831c FUN_14874831c body=59 status=ok
// SIG undefined FUN_14874831c(void)

undefined8 FUN_14874831c(longlong *param_1)

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



// FUNCTION 148748362 FUN_148748362 body=52 status=ok
// SIG undefined FUN_148748362(void)

void FUN_148748362(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 9) == '\x01') {
    *param_2 = &PTR_FUN_14b2d2cc0;
    (*(code *)(&switchD_14400f025::switchdataD_14b1f3410)[*(byte *)(param_2 + 8)])(param_2 + 1);
    *(undefined1 *)(param_2 + 9) = 0;
  }
  return;
}



// FUNCTION 1487483e4 FUN_1487483e4 body=55 status=ok
// SIG undefined FUN_1487483e4(void)

void FUN_1487483e4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68958 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68958 = FUN_140002ddd(FUN_14651c7e1,uVar1,L"GbxUnlockableItemData_Reward");
  }
  return;
}



// FUNCTION 14874844c FUN_14874844c body=75 status=ok
// SIG undefined FUN_14874844c(void)

undefined1 FUN_14874844c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      FUN_145c56af0(param_2 + -0x18,param_3 + -0x18);
      FUN_145c43818(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487484c0 FUN_1487484c0 body=59 status=ok
// SIG undefined FUN_1487484c0(void)

undefined8 FUN_1487484c0(longlong *param_1)

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



// FUNCTION 148748554 FUN_148748554 body=55 status=ok
// SIG undefined FUN_148748554(void)

void FUN_148748554(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68970 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68970 = FUN_140002ddd(FUN_14651c877,uVar1,L"GbxUnlockableItemData_Skill");
  }
  return;
}



// FUNCTION 1487485de FUN_1487485de body=147 status=ok
// SIG undefined FUN_1487485de(void)

undefined8 FUN_1487485de(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      lVar1 = param_3 + lVar6;
      lVar2 = param_2 + 0x20 + lVar6;
      *(undefined8 *)(lVar2 + -0x18) = *(undefined8 *)(lVar1 + 8);
      uVar3 = *(undefined4 *)(lVar1 + 0x14);
      uVar4 = *(undefined4 *)(lVar1 + 0x18);
      uVar5 = *(undefined4 *)(lVar1 + 0x1c);
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(lVar1 + 0x10);
      *(undefined4 *)(lVar2 + -0xc) = uVar3;
      *(undefined4 *)(lVar2 + -8) = uVar4;
      *(undefined4 *)(lVar2 + -4) = uVar5;
      FUN_144a787a6();
      FUN_145c56af0(param_2 + lVar6 + 0x30,param_3 + lVar6 + 0x30);
      FUN_144983130(param_2 + lVar6 + 0x48,param_3 + lVar6 + 0x48);
      *(undefined1 *)(param_2 + lVar6 + 0x80) = *(undefined1 *)(param_3 + lVar6 + 0x80);
      lVar6 = lVar6 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14874869a FUN_14874869a body=59 status=ok
// SIG undefined FUN_14874869a(void)

undefined8 FUN_14874869a(longlong *param_1)

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



// FUNCTION 1487486e6 FUN_1487486e6 body=38 status=ok
// SIG undefined FUN_1487486e6(void)

void FUN_1487486e6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_148748786(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 14874874e FUN_14874874e body=55 status=ok
// SIG undefined FUN_14874874e(void)

void FUN_14874874e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68988 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68988 = FUN_140002ddd(FUN_14651c90d,uVar1,L"GbxUnlockableItemData_SkillParam");
  }
  return;
}



// FUNCTION 148748786 FUN_148748786 body=117 status=ok
// SIG undefined FUN_148748786(void)

void FUN_148748786(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b2d2fe0;
  plVar1 = param_1 + 10;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xe) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xd)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xd)) {
    FUN_1400020a8(*plVar1);
  }
  if (param_1[4] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 148748860 FUN_148748860 body=63 status=ok
// SIG undefined FUN_148748860(void)

undefined1 FUN_148748860(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148748988(param_2,param_3);
    param_3 = param_3 + 0xa8;
    param_2 = param_2 + 0xa8;
  }
  return 1;
}



// FUNCTION 1487488c8 FUN_1487488c8 body=59 status=ok
// SIG undefined FUN_1487488c8(void)

undefined8 FUN_1487488c8(longlong *param_1)

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



// FUNCTION 148748914 FUN_148748914 body=38 status=ok
// SIG undefined FUN_148748914(void)

void FUN_148748914(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa8) == '\x01') {
    FUN_140e96476(param_2);
    *(undefined1 *)(param_2 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 148748988 FUN_148748988 body=251 status=ok
// SIG undefined FUN_148748988(void)

longlong FUN_148748988(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (param_2 != param_1) {
    FUN_148748adc(param_1,param_2);
    FUN_148748adc(param_1 + 0x18,param_2 + 0x18);
    FUN_148748adc(param_1 + 0x30,param_2 + 0x30);
  }
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  uVar6 = *(undefined4 *)(param_2 + 0x4c);
  uVar7 = *(undefined4 *)(param_2 + 0x50);
  uVar8 = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = uVar6;
  *(undefined4 *)(param_1 + 0x50) = uVar7;
  *(undefined4 *)(param_1 + 0x54) = uVar8;
  uVar3 = *(undefined8 *)(param_2 + 0x60);
  lVar4 = *(longlong *)(param_2 + 0x68);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  *(longlong *)(param_1 + 0x68) = lVar4;
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
  uVar3 = *(undefined8 *)(param_2 + 0x70);
  lVar4 = *(longlong *)(param_2 + 0x78);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = uVar3;
  *(longlong *)(param_1 + 0x78) = lVar4;
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
  FUN_148748a84(param_1 + 0x80,param_2 + 0x80);
  uVar3 = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x98) = uVar3;
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  return param_1;
}



// FUNCTION 148748a84 FUN_148748a84 body=88 status=ok
// SIG undefined FUN_148748a84(void)

undefined8 * FUN_148748a84(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14651dd56(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 148748adc FUN_148748adc body=304 status=ok
// SIG undefined FUN_148748adc(void)

void FUN_148748adc(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar4 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar5 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
        if (uStack_50._4_4_ < uVar5) {
          FUN_1447a71f6(&local_58,uVar4 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
        FUN_1449db362(&local_68);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  FUN_144a3e8f2(param_1,&local_58);
  FUN_144760e21(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148748c58 FUN_148748c58 body=63 status=ok
// SIG undefined FUN_148748c58(void)

undefined1 FUN_148748c58(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148748d74(param_2,param_3);
    param_3 = param_3 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return 1;
}



// FUNCTION 148748cc0 FUN_148748cc0 body=59 status=ok
// SIG undefined FUN_148748cc0(void)

undefined8 FUN_148748cc0(longlong *param_1)

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



// FUNCTION 148748d0c FUN_148748d0c body=38 status=ok
// SIG undefined FUN_148748d0c(void)

void FUN_148748d0c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    FUN_143c75eb4(param_2);
    *(undefined1 *)(param_2 + 0x80) = 0;
  }
  return;
}



// FUNCTION 148748d74 FUN_148748d74 body=89 status=ok
// SIG undefined FUN_148748d74(void)

undefined4 * FUN_148748d74(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1401f3db8(param_1 + 6,param_2 + 6);
  FUN_1401f3db8(param_1 + 0xc,param_2 + 0xc);
  FUN_14124fed2(param_1 + 0x12,param_2 + 0x12);
  FUN_1403de7ba(param_1 + 0x18,param_2 + 0x18);
  return param_1;
}



// FUNCTION 148748df0 FUN_148748df0 body=62 status=ok
// SIG undefined FUN_148748df0(void)

undefined8 FUN_148748df0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1418557ae(param_2,param_3);
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_3 + 0x18);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 148748e56 FUN_148748e56 body=70 status=ok
// SIG undefined FUN_148748e56(void)

void FUN_148748e56(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_148935d79(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148748f60 FUN_148748f60 body=59 status=ok
// SIG undefined FUN_148748f60(void)

undefined8 FUN_148748f60(longlong *param_1)

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



// FUNCTION 148749000 FUN_148749000 body=34 status=ok
// SIG undefined FUN_148749000(void)

undefined8 FUN_148749000(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 148749022 FUN_148749022 body=55 status=ok
// SIG undefined FUN_148749022(void)

void FUN_148749022(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb689e8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb689e8 = FUN_140002ddd(FUN_14651ca68,uVar1,L"GbxUnlockConditionData");
  }
  return;
}



// FUNCTION 14874905a FUN_14874905a body=54 status=ok
// SIG undefined FUN_14874905a(void)

undefined8 * FUN_14874905a(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/Progression/GbxUnlockConditionData.h"
                ,0x2e,L"Pure virtual not implemented (%s)",L"DoCreateUnlockCondition");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1487490fa FUN_1487490fa body=59 status=ok
// SIG undefined FUN_1487490fa(void)

undefined8 FUN_1487490fa(longlong *param_1)

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



// FUNCTION 14874919a FUN_14874919a body=34 status=ok
// SIG undefined FUN_14874919a(void)

undefined8 FUN_14874919a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1487491bc FUN_1487491bc body=55 status=ok
// SIG undefined FUN_1487491bc(void)

void FUN_1487491bc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68a00 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68a00 = FUN_140002ddd(FUN_14651cbd1,uVar1,L"GbxUnlockConditionDataProgressGraph");
  }
  return;
}



// FUNCTION 1487491f4 FUN_1487491f4 body=54 status=ok
// SIG undefined FUN_1487491f4(void)

undefined8 * FUN_1487491f4(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/Progression/GbxUnlockConditionData.h"
                ,0x46,L"Pure virtual not implemented (%s)",
                L"FGbxUnlockConditionDataProgressGraph.DoCreateUnlockCondition");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 148749294 FUN_148749294 body=59 status=ok
// SIG undefined FUN_148749294(void)

undefined8 FUN_148749294(longlong *param_1)

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



// FUNCTION 148749334 FUN_148749334 body=34 status=ok
// SIG undefined FUN_148749334(void)

undefined8 FUN_148749334(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 148749356 FUN_148749356 body=55 status=ok
// SIG undefined FUN_148749356(void)

void FUN_148749356(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68a18 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68a18 = FUN_140002ddd(FUN_14651cc69,uVar1,L"GbxUnlockConditionDataNoGraph");
  }
  return;
}



// FUNCTION 1487493b6 FUN_1487493b6 body=62 status=ok
// SIG undefined FUN_1487493b6(void)

undefined1 FUN_1487493b6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_14874953c(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14874941c FUN_14874941c body=59 status=ok
// SIG undefined FUN_14874941c(void)

undefined8 FUN_14874941c(longlong *param_1)

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



// FUNCTION 148749462 FUN_148749462 body=32 status=ok
// SIG undefined FUN_148749462(void)

void FUN_148749462(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_148749504(param_2);
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1487494cc FUN_1487494cc body=55 status=ok
// SIG undefined FUN_1487494cc(void)

void FUN_1487494cc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68a30 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68a30 = FUN_140002ddd(FUN_14651cd01,uVar1,L"GbxUnlockConditionData_CompositeAnd");
  }
  return;
}



// FUNCTION 148749504 FUN_148749504 body=55 status=ok
// SIG undefined FUN_148749504(void)

void FUN_148749504(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b2d3b40;
  FUN_14105af0a(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14874953c FUN_14874953c body=93 status=ok
// SIG undefined FUN_14874953c(void)

undefined8 * FUN_14874953c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14105af0a(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14874959a(param_1,iVar1);
      FUN_14874960d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14874959a FUN_14874959a body=115 status=ok
// SIG undefined FUN_14874959a(void)

void FUN_14874959a(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14874960d FUN_14874960d body=76 status=ok
// SIG undefined FUN_14874960d(void)

void FUN_14874960d(undefined8 *param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_1401f3db8(param_1,param_2);
    param_1 = param_1 + 3;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 1487496a2 FUN_1487496a2 body=62 status=ok
// SIG undefined FUN_1487496a2(void)

undefined1 FUN_1487496a2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_14874953c(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148749708 FUN_148749708 body=59 status=ok
// SIG undefined FUN_148749708(void)

undefined8 FUN_148749708(longlong *param_1)

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



// FUNCTION 14874974e FUN_14874974e body=34 status=ok
// SIG undefined FUN_14874974e(void)

void FUN_14874974e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_148749822(param_2);
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1487497be FUN_1487497be body=43 status=ok
// SIG undefined FUN_1487497be(void)

undefined8 FUN_1487497be(undefined8 param_1,int param_2)

{
  FUN_148749822();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1487497ea FUN_1487497ea body=55 status=ok
// SIG undefined FUN_1487497ea(void)

void FUN_1487497ea(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68a48 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68a48 = FUN_140002ddd(FUN_14651cd97,uVar1,L"GbxUnlockConditionData_CompositeOr");
  }
  return;
}



// FUNCTION 148749822 FUN_148749822 body=56 status=ok
// SIG undefined FUN_148749822(void)

void FUN_148749822(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b2d3cc0;
  FUN_14105af0a(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14874988c FUN_14874988c body=75 status=ok
// SIG undefined FUN_14874988c(void)

undefined1 FUN_14874988c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      FUN_1418557ae(param_2 + -0x18,param_3 + -0x18);
      FUN_1401f3db8(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148749900 FUN_148749900 body=59 status=ok
// SIG undefined FUN_148749900(void)

undefined8 FUN_148749900(longlong *param_1)

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



// FUNCTION 148749946 FUN_148749946 body=32 status=ok
// SIG undefined FUN_148749946(void)

void FUN_148749946(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_1487499a8(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 1487499a8 FUN_1487499a8 body=65 status=ok
// SIG undefined FUN_1487499a8(void)

void FUN_1487499a8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b2d3e40;
  plVar3 = (longlong *)param_1[5];
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
                    /* WARNING: Could not recover jumptable at 0x0001487499e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148749a24 FUN_148749a24 body=62 status=ok
// SIG undefined FUN_148749a24(void)

undefined1 FUN_148749a24(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_1400fce78(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148749a8a FUN_148749a8a body=59 status=ok
// SIG undefined FUN_148749a8a(void)

undefined8 FUN_148749a8a(longlong *param_1)

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



// FUNCTION 148749ad0 FUN_148749ad0 body=34 status=ok
// SIG undefined FUN_148749ad0(void)

void FUN_148749ad0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_14582a8d2(param_2);
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 148749b40 FUN_148749b40 body=55 status=ok
// SIG undefined FUN_148749b40(void)

void FUN_148749b40(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68a78 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68a78 = FUN_140002ddd(FUN_14651cec3,uVar1,L"GbxUnlockConditionData_Fact");
  }
  return;
}



// FUNCTION 148749c1a FUN_148749c1a body=59 status=ok
// SIG undefined FUN_148749c1a(void)

undefined8 FUN_148749c1a(longlong *param_1)

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



// FUNCTION 148749cba FUN_148749cba body=34 status=ok
// SIG undefined FUN_148749cba(void)

undefined8 FUN_148749cba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 148749cdc FUN_148749cdc body=55 status=ok
// SIG undefined FUN_148749cdc(void)

void FUN_148749cdc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68a90 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68a90 =
         FUN_140002ddd(FUN_14651cf59,uVar1,L"GbxUnlockConditionData_GroupMaxNodesActivated");
  }
  return;
}



// FUNCTION 148749d66 FUN_148749d66 body=75 status=ok
// SIG undefined FUN_148749d66(void)

undefined1 FUN_148749d66(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      FUN_1406fa324(param_2 + -0x10,param_3 + -0x10);
      FUN_140d02432(param_2,param_3);
      param_3 = param_3 + 0x68;
      param_2 = param_2 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148749dda FUN_148749dda body=59 status=ok
// SIG undefined FUN_148749dda(void)

undefined8 FUN_148749dda(longlong *param_1)

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



// FUNCTION 148749e20 FUN_148749e20 body=48 status=ok
// SIG undefined FUN_148749e20(void)

void FUN_148749e20(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xd) == '\x01') {
    *param_2 = &PTR_FUN_14b2d42d0;
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xd) = 0;
  }
  return;
}



// FUNCTION 148749f28 FUN_148749f28 body=59 status=ok
// SIG undefined FUN_148749f28(void)

undefined8 FUN_148749f28(longlong *param_1)

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



// FUNCTION 148749fc8 FUN_148749fc8 body=55 status=ok
// SIG undefined FUN_148749fc8(void)

void FUN_148749fc8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68ac0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68ac0 = FUN_140002ddd(FUN_14651d04f,uVar1,L"GbxUnlockConditionData_GroupUnlocked");
  }
  return;
}



// FUNCTION 14874a07e FUN_14874a07e body=59 status=ok
// SIG undefined FUN_14874a07e(void)

undefined8 FUN_14874a07e(longlong *param_1)

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



// FUNCTION 14874a112 FUN_14874a112 body=55 status=ok
// SIG undefined FUN_14874a112(void)

void FUN_14874a112(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68ad8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68ad8 = FUN_140002ddd(FUN_14651d0e5,uVar1,L"GbxUnlockConditionData_NodeActivated");
  }
  return;
}



// FUNCTION 14874a1a0 FUN_14874a1a0 body=81 status=ok
// SIG undefined FUN_14874a1a0(void)

undefined1 FUN_14874a1a0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      FUN_1406fa324(param_2 + -0x18,param_3 + -0x18);
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_140d02432(param_2,param_3);
      param_3 = param_3 + 0x70;
      param_2 = param_2 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14874a21a FUN_14874a21a body=59 status=ok
// SIG undefined FUN_14874a21a(void)

undefined8 FUN_14874a21a(longlong *param_1)

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



// FUNCTION 14874a260 FUN_14874a260 body=48 status=ok
// SIG undefined FUN_14874a260(void)

void FUN_14874a260(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xe) == '\x01') {
    *param_2 = &PTR_FUN_14b2d4780;
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xe) = 0;
  }
  return;
}



// FUNCTION 14874a2d2 FUN_14874a2d2 body=57 status=ok
// SIG undefined FUN_14874a2d2(void)

void FUN_14874a2d2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68af0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68af0 =
         FUN_140002ddd(FUN_14651d144,uVar1,L"GbxUnlockConditionData_NodeProgressPointsSpent");
  }
  return;
}



// FUNCTION 14874a3ae FUN_14874a3ae body=59 status=ok
// SIG undefined FUN_14874a3ae(void)

undefined8 FUN_14874a3ae(longlong *param_1)

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



// FUNCTION 14874a44e FUN_14874a44e body=34 status=ok
// SIG undefined FUN_14874a44e(void)

undefined8 FUN_14874a44e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14874a470 FUN_14874a470 body=55 status=ok
// SIG undefined FUN_14874a470(void)

void FUN_14874a470(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68b08 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68b08 = FUN_140002ddd(FUN_14651d1db,uVar1,L"GbxUnlockConditionData_NodeUnlocked");
  }
  return;
}



// FUNCTION 14874a500 FUN_14874a500 body=62 status=ok
// SIG undefined FUN_14874a500(void)

undefined1 FUN_14874a500(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_1401f3db8(param_2,param_3);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14874a566 FUN_14874a566 body=59 status=ok
// SIG undefined FUN_14874a566(void)

undefined8 FUN_14874a566(longlong *param_1)

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



// FUNCTION 14874a5ac FUN_14874a5ac body=34 status=ok
// SIG undefined FUN_14874a5ac(void)

void FUN_14874a5ac(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_14874a680(param_2);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 14874a61c FUN_14874a61c body=43 status=ok
// SIG undefined FUN_14874a61c(void)

undefined8 FUN_14874a61c(undefined8 param_1,int param_2)

{
  FUN_14874a680();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14874a648 FUN_14874a648 body=55 status=ok
// SIG undefined FUN_14874a648(void)

void FUN_14874a648(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68b20 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68b20 = FUN_140002ddd(FUN_14651d271,uVar1,L"GbxUnlockConditionData_Reward");
  }
  return;
}



// FUNCTION 14874a680 FUN_14874a680 body=66 status=ok
// SIG undefined FUN_14874a680(void)

void FUN_14874a680(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b2d4aa0;
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
                    /* WARNING: Could not recover jumptable at 0x00014874a6b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14874a712 FUN_14874a712 body=75 status=ok
// SIG undefined FUN_14874a712(void)

undefined1 FUN_14874a712(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      FUN_1486b7d4c(param_2 + -0x18,param_3 + -0x18);
      FUN_140d02432(param_2,param_3);
      param_3 = param_3 + 0x70;
      param_2 = param_2 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14874a786 FUN_14874a786 body=59 status=ok
// SIG undefined FUN_14874a786(void)

undefined8 FUN_14874a786(longlong *param_1)

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



// FUNCTION 14874a822 FUN_14874a822 body=55 status=ok
// SIG undefined FUN_14874a822(void)

void FUN_14874a822(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68b38 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68b38 =
         FUN_140002ddd(FUN_14651d307,uVar1,L"GbxUnlockConditionData_TotalProgressPointsAcquired");
  }
  return;
}



// FUNCTION 14874a8d2 FUN_14874a8d2 body=59 status=ok
// SIG undefined FUN_14874a8d2(void)

undefined8 FUN_14874a8d2(longlong *param_1)

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



// FUNCTION 14874a9a6 FUN_14874a9a6 body=54 status=ok
// SIG undefined FUN_14874a9a6(void)

undefined1 FUN_14874a9a6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140115bdc(param_2,param_3);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 14874a9dc FUN_14874a9dc body=31 status=ok
// SIG undefined FUN_14874a9dc(void)

undefined1
FUN_14874a9dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_144b082da(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 14874a9fc FUN_14874a9fc body=262 status=ok
// SIG undefined FUN_14874a9fc(void)

undefined4
FUN_14874a9fc(longlong *param_1,undefined8 param_2,longlong *param_3,longlong param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_80;
  undefined1 local_78 [12];
  byte local_6c;
  longlong local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_4 != 0) {
    local_80 = param_7;
    local_88 = param_6;
    (**(code **)(*param_3 + 0x30))(param_3,param_2,param_4,param_5);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_a8);
  }
  local_68[2] = 0;
  local_68[3] = 0;
  local_68[0] = 0;
  local_68[1] = 0;
  (**(code **)(*param_1 + 8))(0,local_78);
  if ((local_6c & 2) == 0) {
    FUN_140c13428(local_68);
  }
  local_80 = param_7;
  local_88 = param_6;
  uVar1 = (**(code **)(*param_3 + 0x30))(param_3,param_2,local_68,param_5);
  (**(code **)(*param_1 + 8))(param_1,local_78);
  if ((local_6c & 4) != 0) {
    (**(code **)(local_68[0] + 0x58))(local_68,0);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 14874ab04 FUN_14874ab04 body=41 status=ok
// SIG undefined FUN_14874ab04(void)

void FUN_14874ab04(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  (**(code **)(*param_3 + 0x28))(param_3,param_2,param_4,param_5,param_6);
  return;
}



// FUNCTION 14874ab42 FUN_14874ab42 body=59 status=ok
// SIG undefined FUN_14874ab42(void)

undefined8 FUN_14874ab42(longlong *param_1)

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



// FUNCTION 14874abde FUN_14874abde body=82 status=ok
// SIG undefined FUN_14874abde(void)

void FUN_14874abde(undefined8 *param_1)

{
  if (*(char *)(param_1 + 4) == '\x01') {
    *param_1 = &DAT_14a171d50;
    *(undefined4 *)(param_1 + 3) = 0;
    if (*(int *)((longlong)param_1 + 0x1c) != 0) {
      FUN_140115c12(param_1 + 2,0);
    }
    param_1[1] = 0;
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 14874ac8a FUN_14874ac8a body=59 status=ok
// SIG undefined FUN_14874ac8a(void)

undefined8 FUN_14874ac8a(longlong *param_1)

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



// FUNCTION 14874ad60 FUN_14874ad60 body=63 status=ok
// SIG undefined FUN_14874ad60(void)

undefined1 FUN_14874ad60(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14874ae80(param_2,param_3);
    param_3 = param_3 + 0xe8;
    param_2 = param_2 + 0xe8;
  }
  return 1;
}



// FUNCTION 14874adc8 FUN_14874adc8 body=59 status=ok
// SIG undefined FUN_14874adc8(void)

undefined8 FUN_14874adc8(longlong *param_1)

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



// FUNCTION 14874ae14 FUN_14874ae14 body=38 status=ok
// SIG undefined FUN_14874ae14(void)

void FUN_14874ae14(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe8) == '\x01') {
    FUN_140e91c1c(param_2);
    *(undefined1 *)(param_2 + 0xe8) = 0;
  }
  return;
}



// FUNCTION 14874ae80 FUN_14874ae80 body=237 status=ok
// SIG undefined FUN_14874ae80(void)

longlong FUN_14874ae80(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  FUN_14874af6e(param_1 + 0x18,param_2 + 0x18);
  if ((*(longlong *)(param_1 + 0x30) != *(longlong *)(param_2 + 0x30)) ||
     (*(int *)(param_1 + 0x38) != *(int *)(param_2 + 0x38))) {
    *(longlong *)(param_1 + 0x30) = *(longlong *)(param_2 + 0x30);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  plVar1 = *(longlong **)(param_2 + 0x50);
  plVar2 = *(longlong **)(param_1 + 0x50);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x50) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  FUN_1447715ec(param_1 + 0x70,param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  FUN_1447715ec(param_1 + 0xa8,param_2 + 0xa8);
  FUN_14863e21c(param_1 + 0xd0,param_2 + 0xd0);
  return param_1;
}



// FUNCTION 14874af6e FUN_14874af6e body=84 status=ok
// SIG undefined FUN_14874af6e(void)

longlong * FUN_14874af6e(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 14874afc4 FUN_14874afc4 body=43 status=ok
// SIG undefined FUN_14874afc4(void)

undefined8 FUN_14874afc4(undefined8 param_1,int param_2)

{
  FUN_140e91c1c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 14874aff0 FUN_14874aff0 body=55 status=ok
// SIG undefined FUN_14874aff0(void)

void FUN_14874aff0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68c98 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68c98 = FUN_140002ddd(FUN_14651d885,uVar1,L"GbxWorldRegionDef");
  }
  return;
}



// FUNCTION 14874b05a FUN_14874b05a body=54 status=ok
// SIG undefined FUN_14874b05a(void)

undefined1 FUN_14874b05a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14874b158(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 14874b0b8 FUN_14874b0b8 body=59 status=ok
// SIG undefined FUN_14874b0b8(void)

undefined8 FUN_14874b0b8(longlong *param_1)

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



// FUNCTION 14874b158 FUN_14874b158 body=91 status=ok
// SIG undefined FUN_14874b158(void)

longlong * FUN_14874b158(longlong *param_1,longlong *param_2)

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
    }
  }
  param_1[1] = lVar2;
  return param_1;
}



// FUNCTION 14874b1de FUN_14874b1de body=76 status=ok
// SIG undefined FUN_14874b1de(void)

undefined8 FUN_14874b1de(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14874b158(param_2,param_3);
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return 1;
}



// FUNCTION 14874b252 FUN_14874b252 body=59 status=ok
// SIG undefined FUN_14874b252(void)

undefined8 FUN_14874b252(longlong *param_1)

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



// FUNCTION 14874b330 FUN_14874b330 body=80 status=ok
// SIG undefined FUN_14874b330(void)

undefined8 FUN_14874b330(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14874b158(param_2,param_3);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    *(undefined1 *)(param_2 + 0x14) = *(undefined1 *)(param_3 + 0x14);
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return 1;
}



// FUNCTION 14874b3a8 FUN_14874b3a8 body=59 status=ok
// SIG undefined FUN_14874b3a8(void)

undefined8 FUN_14874b3a8(longlong *param_1)

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



// FUNCTION 14874b57a FUN_14874b57a body=59 status=ok
// SIG undefined FUN_14874b57a(void)

undefined8 FUN_14874b57a(longlong *param_1)

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



// FUNCTION 14874b5c0 FUN_14874b5c0 body=38 status=ok
// SIG undefined FUN_14874b5c0(void)

void FUN_14874b5c0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 14874b6c8 FUN_14874b6c8 body=59 status=ok
// SIG undefined FUN_14874b6c8(void)

undefined8 FUN_14874b6c8(longlong *param_1)

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



// FUNCTION 14874b774 FUN_14874b774 body=29 status=ok
// SIG undefined FUN_14874b774(void)

undefined8 FUN_14874b774(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14874b792 FUN_14874b792 body=55 status=ok
// SIG undefined FUN_14874b792(void)

void FUN_14874b792(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68d88 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68d88 = FUN_140002ddd(FUN_14651e287,uVar1,L"GimmeConditionBaseStruct");
  }
  return;
}



// FUNCTION 14874b802 FUN_14874b802 body=70 status=ok
// SIG undefined FUN_14874b802(void)

undefined8 FUN_14874b802(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_1400fce78(param_2,param_3);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14874b870 FUN_14874b870 body=59 status=ok
// SIG undefined FUN_14874b870(void)

undefined8 FUN_14874b870(longlong *param_1)

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



// FUNCTION 14874b8b6 FUN_14874b8b6 body=34 status=ok
// SIG undefined FUN_14874b8b6(void)

void FUN_14874b8b6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_14874b934(param_2);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 14874b934 FUN_14874b934 body=56 status=ok
// SIG undefined FUN_14874b934(void)

void FUN_14874b934(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b2e1010;
  FUN_1447cd778(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14874b96c FUN_14874b96c body=38 status=ok
// SIG undefined FUN_14874b96c(void)

undefined8 FUN_14874b96c(undefined8 param_1,int param_2)

{
  FUN_14874b934();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14874b992 FUN_14874b992 body=55 status=ok
// SIG undefined FUN_14874b992(void)

void FUN_14874b992(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68da0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68da0 = FUN_140002ddd(FUN_14651e31f,uVar1,L"GimmeCondition_FactExpression");
  }
  return;
}



// FUNCTION 14874ba0a FUN_14874ba0a body=70 status=ok
// SIG undefined FUN_14874ba0a(void)

undefined8 FUN_14874ba0a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_145787078(param_2,param_3);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14874ba78 FUN_14874ba78 body=59 status=ok
// SIG undefined FUN_14874ba78(void)

undefined8 FUN_14874ba78(longlong *param_1)

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



// FUNCTION 14874babe FUN_14874babe body=48 status=ok
// SIG undefined FUN_14874babe(void)

void FUN_14874babe(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 4) == '\x01') {
    *param_2 = &PTR_FUN_14b2e1030;
    if (param_2[2] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



// FUNCTION 14874bb4a FUN_14874bb4a body=57 status=ok
// SIG undefined FUN_14874bb4a(void)

undefined8 * FUN_14874bb4a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b2e1030;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14874bb84 FUN_14874bb84 body=55 status=ok
// SIG undefined FUN_14874bb84(void)

void FUN_14874bb84(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68dc0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68dc0 = FUN_140002ddd(FUN_14651e3b5,uVar1,L"GimmeCondition_Unlockable");
  }
  return;
}



// FUNCTION 14874bc5a FUN_14874bc5a body=59 status=ok
// SIG undefined FUN_14874bc5a(void)

undefined8 FUN_14874bc5a(longlong *param_1)

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



// FUNCTION 14874bd06 FUN_14874bd06 body=29 status=ok
// SIG undefined FUN_14874bd06(void)

undefined8 FUN_14874bd06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14874bd24 FUN_14874bd24 body=55 status=ok
// SIG undefined FUN_14874bd24(void)

void FUN_14874bd24(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68dd8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68dd8 = FUN_140002ddd(FUN_14651e44b,uVar1,L"GimmeYieldBaseStruct");
  }
  return;
}



// FUNCTION 14874bd94 FUN_14874bd94 body=70 status=ok
// SIG undefined FUN_14874bd94(void)

undefined8 FUN_14874bd94(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_1457b9446(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14874be02 FUN_14874be02 body=59 status=ok
// SIG undefined FUN_14874be02(void)

undefined8 FUN_14874be02(longlong *param_1)

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



// FUNCTION 14874bf0a FUN_14874bf0a body=54 status=ok
// SIG undefined FUN_14874bf0a(void)

undefined1 FUN_14874bf0a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14874c008(param_2,param_3);
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return 1;
}



// FUNCTION 14874bf68 FUN_14874bf68 body=59 status=ok
// SIG undefined FUN_14874bf68(void)

undefined8 FUN_14874bf68(longlong *param_1)

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



// FUNCTION 14874bfae FUN_14874bfae body=32 status=ok
// SIG undefined FUN_14874bfae(void)

void FUN_14874bfae(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_140d74b90(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 14874c008 FUN_14874c008 body=98 status=ok
// SIG undefined FUN_14874c008(void)

longlong FUN_14874c008(longlong param_1,longlong param_2)

{
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  FUN_14874c06a(param_1 + 0x20,param_2 + 0x20);
  FUN_14874c06a(param_1 + 0x30,param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  FUN_141414bf6(param_1 + 0x48,param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  return param_1;
}



// FUNCTION 14874c06a FUN_14874c06a body=79 status=ok
// SIG undefined FUN_14874c06a(void)

undefined8 * FUN_14874c06a(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14874c0ba(param_1,iVar1);
      FUN_14874c12d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14874c0ba FUN_14874c0ba body=115 status=ok
// SIG undefined FUN_14874c0ba(void)

void FUN_14874c0ba(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14874c12d FUN_14874c12d body=52 status=ok
// SIG undefined FUN_14874c12d(void)

void FUN_14874c12d(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14874c162(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 14874c162 FUN_14874c162 body=71 status=ok
// SIG undefined FUN_14874c162(void)

undefined8 * FUN_14874c162(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 14874c1aa FUN_14874c1aa body=28 status=ok
// SIG undefined FUN_14874c1aa(void)

undefined8 FUN_14874c1aa(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 14874c220 FUN_14874c220 body=59 status=ok
// SIG undefined FUN_14874c220(void)

undefined8 FUN_14874c220(longlong *param_1)

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



// FUNCTION 14874c2c2 FUN_14874c2c2 body=77 status=ok
// SIG undefined FUN_14874c2c2(void)

void FUN_14874c2c2(undefined8 param_1,undefined8 *param_2)

{
  FUN_1404e2388(param_2);
  *param_2 = &PTR_FUN_14b2dd180;
  *(undefined4 *)(param_2 + 0x12) = 0x3f800000;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0x3ecccccd42c80000;
  param_2[0x17] = 0x3f0000003f4ccccd;
  return;
}



// FUNCTION 14874c326 FUN_14874c326 body=129 status=ok
// SIG undefined FUN_14874c326(void)

undefined8 FUN_14874c326(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147e1a790(param_2,param_3);
    *(undefined4 *)(param_2 + 0x90) = *(undefined4 *)(param_3 + 0x90);
    FUN_141844d90(param_2 + 0x98,param_3 + 0x98);
    *(undefined8 *)(param_2 + 0xb0) = *(undefined8 *)(param_3 + 0xb0);
    *(undefined8 *)(param_2 + 0xb8) = *(undefined8 *)(param_3 + 0xb8);
    param_2 = param_2 + 0xc0;
    param_3 = param_3 + 0xc0;
  }
  return 1;
}



// FUNCTION 14874c3d0 FUN_14874c3d0 body=59 status=ok
// SIG undefined FUN_14874c3d0(void)

undefined8 FUN_14874c3d0(longlong *param_1)

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



// FUNCTION 14874c41c FUN_14874c41c body=38 status=ok
// SIG undefined FUN_14874c41c(void)

void FUN_14874c41c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xc0) == '\x01') {
    FUN_140753ab6(param_2);
    *(undefined1 *)(param_2 + 0xc0) = 0;
  }
  return;
}



// FUNCTION 14874c484 FUN_14874c484 body=80 status=ok
// SIG undefined FUN_14874c484(void)

void FUN_14874c484(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  FUN_1400d6974(local_38);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14874c4d6 FUN_14874c4d6 body=28 status=ok
// SIG undefined FUN_14874c4d6(void)

undefined8 FUN_14874c4d6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 14874c556 FUN_14874c556 body=63 status=ok
// SIG undefined FUN_14874c556(void)

undefined1 FUN_14874c556(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14867f270(param_2,param_3);
    param_3 = param_3 + 0x90;
    param_2 = param_2 + 0x90;
  }
  return 1;
}



// FUNCTION 14874c5be FUN_14874c5be body=59 status=ok
// SIG undefined FUN_14874c5be(void)

undefined8 FUN_14874c5be(longlong *param_1)

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



// FUNCTION 14874c60a FUN_14874c60a body=38 status=ok
// SIG undefined FUN_14874c60a(void)

void FUN_14874c60a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x90) == '\x01') {
    FUN_140af8b9e(param_2);
    *(undefined1 *)(param_2 + 0x90) = 0;
  }
  return;
}



// FUNCTION 14874c684 FUN_14874c684 body=46 status=ok
// SIG undefined FUN_14874c684(void)

void FUN_14874c684(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  puVar2 = &DAT_14c964b40;
  puVar3 = param_2 + 10;
  for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 14874c6c8 FUN_14874c6c8 body=158 status=ok
// SIG undefined FUN_14874c6c8(void)

undefined8 FUN_14874c6c8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  if (param_4 != 0) {
    lVar7 = 0;
    do {
      puVar5 = (undefined8 *)(param_3 + lVar7);
      lVar4 = param_2 + 0x18 + lVar7;
      *(undefined8 *)(lVar4 + -0x18) = *puVar5;
      uVar1 = *(undefined4 *)((longlong)puVar5 + 0xc);
      uVar2 = *(undefined4 *)(puVar5 + 2);
      uVar3 = *(undefined4 *)((longlong)puVar5 + 0x14);
      *(undefined4 *)(lVar4 + -0x10) = *(undefined4 *)(puVar5 + 1);
      *(undefined4 *)(lVar4 + -0xc) = uVar1;
      *(undefined4 *)(lVar4 + -8) = uVar2;
      *(undefined4 *)(lVar4 + -4) = uVar3;
      FUN_144a787a6(lVar4,puVar5 + 3);
      *(undefined8 *)(lVar4 + 0x10) = puVar5[5];
      uVar1 = *(undefined4 *)((longlong)puVar5 + 0x34);
      uVar2 = *(undefined4 *)(puVar5 + 7);
      uVar3 = *(undefined4 *)((longlong)puVar5 + 0x3c);
      *(undefined4 *)(lVar4 + 0x18) = *(undefined4 *)(puVar5 + 6);
      *(undefined4 *)(lVar4 + 0x1c) = uVar1;
      *(undefined4 *)(lVar4 + 0x20) = uVar2;
      *(undefined4 *)(lVar4 + 0x24) = uVar3;
      FUN_144a787a6(param_2 + lVar7 + 0x40,param_3 + lVar7 + 0x40);
      puVar5 = (undefined8 *)(param_3 + lVar7 + 0x50);
      puVar6 = (undefined8 *)(param_2 + lVar7 + 0x50);
      for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      lVar7 = lVar7 + 0x98;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14874c78e FUN_14874c78e body=59 status=ok
// SIG undefined FUN_14874c78e(void)

undefined8 FUN_14874c78e(longlong *param_1)

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



// FUNCTION 14874c826 FUN_14874c826 body=58 status=ok
// SIG undefined FUN_14874c826(void)

void FUN_14874c826(longlong param_1)

{
  if (*(char *)(param_1 + 0x98) == '\x01') {
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x98) = 0;
  }
  return;
}



// FUNCTION 14874c87e FUN_14874c87e body=63 status=ok
// SIG undefined FUN_14874c87e(void)

undefined1 FUN_14874c87e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14874c990(param_2,param_3);
    param_3 = param_3 + 0x1f8;
    param_2 = param_2 + 0x1f8;
  }
  return 1;
}



// FUNCTION 14874c8e6 FUN_14874c8e6 body=59 status=ok
// SIG undefined FUN_14874c8e6(void)

undefined8 FUN_14874c8e6(longlong *param_1)

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



// FUNCTION 14874c932 FUN_14874c932 body=38 status=ok
// SIG undefined FUN_14874c932(void)

void FUN_14874c932(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1f8) == '\x01') {
    FUN_140ae7120(param_2);
    *(undefined1 *)(param_2 + 0x1f8) = 0;
  }
  return;
}



// FUNCTION 14874c990 FUN_14874c990 body=337 status=ok
// SIG undefined FUN_14874c990(void)

longlong FUN_14874c990(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
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
  FUN_14874cae2(param_1 + 0x38,param_2 + 0x38);
  puVar9 = (undefined8 *)(param_2 + 0x48);
  puVar10 = (undefined8 *)(param_1 + 0x48);
  for (lVar8 = 9; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  FUN_14874cb40(param_1 + 0x90,param_2 + 0x90);
  uVar1 = *(undefined4 *)(param_2 + 0xa4);
  uVar2 = *(undefined4 *)(param_2 + 0xa8);
  uVar3 = *(undefined4 *)(param_2 + 0xac);
  uVar4 = *(undefined4 *)(param_2 + 0xac);
  uVar5 = *(undefined4 *)(param_2 + 0xb0);
  uVar6 = *(undefined4 *)(param_2 + 0xb4);
  uVar7 = *(undefined4 *)(param_2 + 0xb8);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0xa4) = uVar1;
  *(undefined4 *)(param_1 + 0xa8) = uVar2;
  *(undefined4 *)(param_1 + 0xac) = uVar3;
  *(undefined4 *)(param_1 + 0xac) = uVar4;
  *(undefined4 *)(param_1 + 0xb0) = uVar5;
  *(undefined4 *)(param_1 + 0xb4) = uVar6;
  *(undefined4 *)(param_1 + 0xb8) = uVar7;
  FUN_147b4c404(param_1 + 0xc0,param_2 + 0xc0);
  puVar9 = (undefined8 *)(param_2 + 0xd0);
  puVar10 = (undefined8 *)(param_1 + 0xd0);
  for (lVar8 = 9; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  FUN_14874cae2(param_1 + 0x118,param_2 + 0x118);
  FUN_14874cb9e(param_1 + 0x128,param_2 + 0x128);
  puVar9 = (undefined8 *)(param_2 + 0x138);
  puVar10 = (undefined8 *)(param_1 + 0x138);
  for (lVar8 = 9; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  FUN_14874cbfc(param_1 + 0x180,param_2 + 0x180);
  FUN_141844d90(param_1 + 0x198,param_2 + 0x198);
  *(undefined1 *)(param_1 + 0x1b0) = *(undefined1 *)(param_2 + 0x1b0);
  FUN_141844d90(param_1 + 0x1b8,param_2 + 0x1b8);
  *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(param_2 + 0x1d0);
  *(undefined1 *)(param_1 + 0x1d8) = *(undefined1 *)(param_2 + 0x1d8);
  FUN_141414bf6(param_1 + 0x1e0,param_2 + 0x1e0);
  return param_1;
}



// FUNCTION 14874cae2 FUN_14874cae2 body=93 status=ok
// SIG undefined FUN_14874cae2(void)

undefined8 * FUN_14874cae2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140ae7249(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14874cc50(param_1,iVar1);
      FUN_14874ccc3(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14874cb40 FUN_14874cb40 body=93 status=ok
// SIG undefined FUN_14874cb40(void)

undefined8 * FUN_14874cb40(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140ae727c(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14874cd4a(param_1,iVar1);
      FUN_14874cdbd(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14874cb9e FUN_14874cb9e body=93 status=ok
// SIG undefined FUN_14874cb9e(void)

undefined8 * FUN_14874cb9e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140ae72af(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14874ce44(param_1,iVar1);
      FUN_14874ceb6(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14874cbfc FUN_14874cbfc body=84 status=ok
// SIG undefined FUN_14874cbfc(void)

longlong * FUN_14874cbfc(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 14874cc50 FUN_14874cc50 body=115 status=ok
// SIG undefined FUN_14874cc50(void)

void FUN_14874cc50(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    iVar2 = (int)(uVar1 / 0x28);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x28,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14874ccc3 FUN_14874ccc3 body=134 status=ok
// SIG undefined FUN_14874ccc3(void)

void FUN_14874ccc3(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  if (param_3 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x18);
    do {
      puVar5[-3] = *param_2;
      uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
      uVar3 = *(undefined4 *)(param_2 + 2);
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
      *(undefined4 *)(puVar5 + -2) = *(undefined4 *)(param_2 + 1);
      *(undefined4 *)((longlong)puVar5 + -0xc) = uVar2;
      *(undefined4 *)(puVar5 + -1) = uVar3;
      *(undefined4 *)((longlong)puVar5 + -4) = uVar4;
      *puVar5 = 0;
      iVar1 = *(int *)(param_2 + 4);
      _Src = (void *)param_2[3];
      *(int *)(puVar5 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar5,iVar1,0);
        memcpy((void *)*puVar5,_Src,(longlong)iVar1 * 2);
      }
      param_2 = param_2 + 5;
      puVar5 = puVar5 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14874cd4a FUN_14874cd4a body=115 status=ok
// SIG undefined FUN_14874cd4a(void)

void FUN_14874cd4a(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    iVar2 = (int)(uVar1 / 0x28);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x28,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14874cdbd FUN_14874cdbd body=134 status=ok
// SIG undefined FUN_14874cdbd(void)

void FUN_14874cdbd(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  if (param_3 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x18);
    do {
      puVar5[-3] = *param_2;
      uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
      uVar3 = *(undefined4 *)(param_2 + 2);
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
      *(undefined4 *)(puVar5 + -2) = *(undefined4 *)(param_2 + 1);
      *(undefined4 *)((longlong)puVar5 + -0xc) = uVar2;
      *(undefined4 *)(puVar5 + -1) = uVar3;
      *(undefined4 *)((longlong)puVar5 + -4) = uVar4;
      *puVar5 = 0;
      iVar1 = *(int *)(param_2 + 4);
      _Src = (void *)param_2[3];
      *(int *)(puVar5 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar5,iVar1,0);
        memcpy((void *)*puVar5,_Src,(longlong)iVar1 * 2);
      }
      param_2 = param_2 + 5;
      puVar5 = puVar5 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14874ce44 FUN_14874ce44 body=114 status=ok
// SIG undefined FUN_14874ce44(void)

void FUN_14874ce44(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x98,8);
    iVar2 = (int)(uVar1 / 0x98);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x98,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14874ceb6 FUN_14874ceb6 body=60 status=ok
// SIG undefined FUN_14874ceb6(void)

void FUN_14874ceb6(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_143c76cca(param_1,param_2);
    param_1 = param_1 + 0x98;
    param_2 = param_2 + 0x98;
  }
  return;
}



// FUNCTION 14874cef4 FUN_14874cef4 body=28 status=ok
// SIG undefined FUN_14874cef4(void)

undefined8 FUN_14874cef4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 14874cf22 FUN_14874cf22 body=250 status=ok
// SIG undefined FUN_14874cf22(void)

void FUN_14874cf22(undefined8 param_1,void *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  memset(param_2,0,0x280);
  puVar2 = &DAT_14c846480;
  puVar3 = (undefined8 *)((longlong)param_2 + 0x10);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = (undefined8 *)((longlong)param_2 + 0x80);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined8 *)((longlong)param_2 + 0x140) = 0;
  *(undefined8 *)((longlong)param_2 + 0x130) = 0;
  *(undefined8 *)((longlong)param_2 + 0x138) = 0;
  *(undefined8 *)((longlong)param_2 + 0x120) = 0;
  *(undefined8 *)((longlong)param_2 + 0x128) = 0;
  *(undefined8 *)((longlong)param_2 + 0x110) = 0;
  *(undefined8 *)((longlong)param_2 + 0x118) = 0;
  *(undefined8 *)((longlong)param_2 + 0x100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x108) = 0;
  *(undefined8 *)((longlong)param_2 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xe8) = 0;
  puVar2 = &DAT_14c964b40;
  puVar3 = (undefined8 *)((longlong)param_2 + 0x148);
  for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = (undefined8 *)((longlong)param_2 + 400);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined8 *)((longlong)param_2 + 0x220) = 0;
  *(undefined8 *)((longlong)param_2 + 0x210) = 0;
  *(undefined8 *)((longlong)param_2 + 0x218) = 0;
  *(undefined8 *)((longlong)param_2 + 0x200) = 0;
  *(undefined8 *)((longlong)param_2 + 0x208) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1f0) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1f8) = 0;
  *(undefined8 *)((longlong)param_2 + 0x228) = 0x3ecccccd42c80000;
  *(undefined8 *)((longlong)param_2 + 0x238) = 0;
  *(undefined8 *)((longlong)param_2 + 0x240) = 0;
  *(undefined8 *)((longlong)param_2 + 0x248) = 0;
  *(undefined8 *)((longlong)param_2 + 0x250) = 0;
  *(undefined8 *)((longlong)param_2 + 600) = 0;
  *(undefined8 *)((longlong)param_2 + 0x260) = 0;
  *(undefined8 *)((longlong)param_2 + 0x268) = 0;
  *(undefined8 *)((longlong)param_2 + 0x270) = 0;
  return;
}



// FUNCTION 14874d01c FUN_14874d01c body=230 status=ok
// SIG undefined FUN_14874d01c(void)

void FUN_14874d01c(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = 0;
  param_2[1] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x10;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_2[0x28] = 0;
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  puVar2 = &DAT_14c964b40;
  puVar3 = param_2 + 0x29;
  for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x32;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_2[0x44] = 0;
  param_2[0x42] = 0;
  param_2[0x43] = 0;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  param_2[0x45] = 0x3ecccccd42c80000;
  *(undefined4 *)(param_2 + 0x46) = 0;
  param_2[0x47] = 0;
  param_2[0x48] = 0;
  param_2[0x49] = 0;
  param_2[0x4a] = 0;
  param_2[0x4b] = 0;
  param_2[0x4c] = 0;
  param_2[0x4d] = 0;
  param_2[0x4e] = 0;
  return;
}



// FUNCTION 14874d120 FUN_14874d120 body=63 status=ok
// SIG undefined FUN_14874d120(void)

undefined1 FUN_14874d120(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14874d248(param_2,param_3);
    param_3 = param_3 + 0x280;
    param_2 = param_2 + 0x280;
  }
  return 1;
}



// FUNCTION 14874d188 FUN_14874d188 body=59 status=ok
// SIG undefined FUN_14874d188(void)

undefined8 FUN_14874d188(longlong *param_1)

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



// FUNCTION 14874d1d4 FUN_14874d1d4 body=38 status=ok
// SIG undefined FUN_14874d1d4(void)

void FUN_14874d1d4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x280) == '\x01') {
    FUN_1405bd7e2(param_2);
    *(undefined1 *)(param_2 + 0x280) = 0;
  }
  return;
}



// FUNCTION 14874d248 FUN_14874d248 body=446 status=ok
// SIG undefined FUN_14874d248(void)

undefined8 * FUN_14874d248(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  *param_1 = *param_2;
  lVar5 = param_2[1];
  if (DAT_14c950c29 == 1) {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_14689c22e();
      lVar5 = param_2[1];
    }
  }
  bVar4 = DAT_14c950c29;
  param_1[1] = lVar5;
  puVar6 = param_2 + 2;
  puVar7 = param_1 + 2;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  lVar5 = param_2[0xe];
  if ((bVar4 & 1) != 0) {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_14689c22e();
      lVar5 = param_2[0xe];
      bVar4 = DAT_14c950c29;
    }
  }
  param_1[0xe] = lVar5;
  lVar5 = param_2[0xf];
  if ((bVar4 & 1) != 0) {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_14689c22e();
      lVar5 = param_2[0xf];
    }
  }
  param_1[0xf] = lVar5;
  puVar6 = param_2 + 0x10;
  puVar7 = param_1 + 0x10;
  for (lVar5 = 0xf; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  param_1[0x1f] = param_2[0x1f];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x104);
  uVar2 = *(undefined4 *)(param_2 + 0x21);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x10c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x104) = uVar1;
  *(undefined4 *)(param_1 + 0x21) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x10c) = uVar3;
  FUN_144a787a6(param_1 + 0x22,param_2 + 0x22);
  param_1[0x24] = param_2[0x24];
  uVar1 = *(undefined4 *)((longlong)param_2 + 300);
  uVar2 = *(undefined4 *)(param_2 + 0x26);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x134);
  *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x25);
  *(undefined4 *)((longlong)param_1 + 300) = uVar1;
  *(undefined4 *)(param_1 + 0x26) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x134) = uVar3;
  FUN_144a787a6(param_1 + 0x27,param_2 + 0x27);
  puVar6 = param_2 + 0x29;
  puVar7 = param_1 + 0x29;
  for (lVar5 = 9; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar6 = param_2 + 0x32;
  puVar7 = param_1 + 0x32;
  for (lVar5 = 0xd; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  FUN_141844d90(param_1 + 0x3f,param_2 + 0x3f);
  FUN_141844d90(param_1 + 0x42,param_2 + 0x42);
  param_1[0x45] = param_2[0x45];
  *(undefined4 *)(param_1 + 0x46) = *(undefined4 *)(param_2 + 0x46);
  FUN_14054c6c4(param_1 + 0x47,param_2 + 0x47);
  FUN_141414bf6(param_1 + 0x49,param_2 + 0x49);
  FUN_141414bf6(param_1 + 0x4c,param_2 + 0x4c);
  return param_1;
}



// FUNCTION 14874d408 FUN_14874d408 body=127 status=ok
// SIG undefined FUN_14874d408(void)

void FUN_14874d408(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_2[2] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *param_2 = DAT_14c8464e0;
  param_2[1] = uVar1;
  uVar1 = DAT_14c8464e8;
  param_2[3] = DAT_14c8464e0;
  param_2[4] = uVar1;
  param_2[5] = DAT_14c8464f0;
  param_2[8] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_2[6] = DAT_14c8464e0;
  param_2[7] = uVar1;
  *(undefined4 *)(param_2 + 9) = 0;
  memset(param_2 + 10,0,0x100);
  *(undefined4 *)(param_2 + 0x24) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x54) = 0x3f800000;
  *(undefined4 *)((longlong)param_2 + 0xf4) = 0xffffffff;
  return;
}



// FUNCTION 14874d488 FUN_14874d488 body=127 status=ok
// SIG undefined FUN_14874d488(void)

void FUN_14874d488(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_2[2] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *param_2 = DAT_14c8464e0;
  param_2[1] = uVar1;
  uVar1 = DAT_14c8464e8;
  param_2[3] = DAT_14c8464e0;
  param_2[4] = uVar1;
  param_2[5] = DAT_14c8464f0;
  param_2[8] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_2[6] = DAT_14c8464e0;
  param_2[7] = uVar1;
  *(undefined4 *)(param_2 + 9) = 0;
  memset(param_2 + 10,0,0x100);
  *(undefined4 *)(param_2 + 0x24) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x54) = 0x3f800000;
  *(undefined4 *)((longlong)param_2 + 0xf4) = 0xffffffff;
  return;
}



// FUNCTION 14874d520 FUN_14874d520 body=68 status=ok
// SIG undefined FUN_14874d520(void)

undefined8 FUN_14874d520(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x150);
      lVar1 = lVar1 + 0x150;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14874d58c FUN_14874d58c body=59 status=ok
// SIG undefined FUN_14874d58c(void)

undefined8 FUN_14874d58c(longlong *param_1)

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



// FUNCTION 14874d63a FUN_14874d63a body=164 status=ok
// SIG undefined FUN_14874d63a(void)

void FUN_14874d63a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[0xb] = 0;
  *param_2 = 0xffffffff;
  *(undefined1 *)((longlong)param_2 + 9) = 1;
  param_2[4] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_2[2] = DAT_14c8464e0;
  param_2[3] = uVar1;
  uVar1 = DAT_14c8464e8;
  param_2[5] = DAT_14c8464e0;
  param_2[6] = uVar1;
  param_2[7] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_2[8] = DAT_14c8464e0;
  param_2[9] = uVar1;
  param_2[10] = DAT_14c8464f0;
  memset(param_2 + 0xc,0,0x100);
  *(undefined4 *)(param_2 + 0x26) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 100) = 0x3f800000;
  *(undefined4 *)((longlong)param_2 + 0x104) = 0xffffffff;
  return;
}



// FUNCTION 14874d6de FUN_14874d6de body=142 status=ok
// SIG undefined FUN_14874d6de(void)

void FUN_14874d6de(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = 0xffffffff;
  *(undefined2 *)(param_2 + 1) = 0x100;
  param_2[4] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_2[2] = DAT_14c8464e0;
  param_2[3] = uVar1;
  uVar1 = DAT_14c8464e8;
  param_2[5] = DAT_14c8464e0;
  param_2[6] = uVar1;
  param_2[7] = DAT_14c8464f0;
  param_2[10] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_2[8] = DAT_14c8464e0;
  param_2[9] = uVar1;
  *(undefined4 *)(param_2 + 0xb) = 0;
  memset(param_2 + 0xc,0,0x100);
  *(undefined4 *)(param_2 + 0x26) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 100) = 0x3f800000;
  *(undefined4 *)((longlong)param_2 + 0x104) = 0xffffffff;
  return;
}



// FUNCTION 14874d784 FUN_14874d784 body=68 status=ok
// SIG undefined FUN_14874d784(void)

undefined8 FUN_14874d784(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x160);
      lVar1 = lVar1 + 0x160;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14874d7f0 FUN_14874d7f0 body=59 status=ok
// SIG undefined FUN_14874d7f0(void)

undefined8 FUN_14874d7f0(longlong *param_1)

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



// FUNCTION 14874d922 FUN_14874d922 body=59 status=ok
// SIG undefined FUN_14874d922(void)

undefined8 FUN_14874d922(longlong *param_1)

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



// FUNCTION 14874da0a FUN_14874da0a body=63 status=ok
// SIG undefined FUN_14874da0a(void)

undefined1 FUN_14874da0a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140db4996(param_2,param_3);
    param_3 = param_3 + 0x498;
    param_2 = param_2 + 0x498;
  }
  return 1;
}



// FUNCTION 14874da72 FUN_14874da72 body=59 status=ok
// SIG undefined FUN_14874da72(void)

undefined8 FUN_14874da72(longlong *param_1)

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



// FUNCTION 14874dabe FUN_14874dabe body=38 status=ok
// SIG undefined FUN_14874dabe(void)

void FUN_14874dabe(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x498) == '\x01') {
    FUN_140893974(param_2);
    *(undefined1 *)(param_2 + 0x498) = 0;
  }
  return;
}



// FUNCTION 14874db32 FUN_14874db32 body=47 status=ok
// SIG undefined FUN_14874db32(void)

undefined8 * FUN_14874db32(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b2e1720;
  param_1[1] = 0;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14874db62 FUN_14874db62 body=55 status=ok
// SIG undefined FUN_14874db62(void)

void FUN_14874db62(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68fe0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68fe0 = FUN_140002ddd(FUN_14651ebc1,uVar1,L"GoreRegionState");
  }
  return;
}



// FUNCTION 14874db9a FUN_14874db9a body=98 status=ok
// SIG undefined FUN_14874db9a(void)

void FUN_14874db9a(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14874dbfe FUN_14874dbfe body=118 status=ok
// SIG undefined FUN_14874dbfe(void)

void FUN_14874dbfe(undefined8 param_1,undefined8 *param_2)

{
  FUN_1412ebe6c(param_2);
  *param_2 = &PTR_FUN_14b2de4e0;
  *(undefined4 *)(param_2 + 0x39) = 0;
  *(undefined1 *)((longlong)param_2 + 0x1cc) = 0;
  *(undefined4 *)(param_2 + 0x3a) = 0;
  *(undefined1 *)((longlong)param_2 + 0x1d4) = 0;
  param_2[0x3b] = 0x101010000000000;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  param_2[0x3d] = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  param_2[0x42] = 0;
  param_2[0x43] = 0;
  param_2[0x44] = 0;
  *(undefined1 *)(param_2 + 0x45) = 0;
  return;
}



// FUNCTION 14874dc9c FUN_14874dc9c body=125 status=ok
// SIG undefined FUN_14874dc9c(void)

undefined8 FUN_14874dc9c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f313ac(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x1cc);
    uVar2 = *(undefined4 *)(param_3 + 0x1d0);
    uVar3 = *(undefined4 *)(param_3 + 0x1d4);
    *(undefined4 *)(param_2 + 0x1c8) = *(undefined4 *)(param_3 + 0x1c8);
    *(undefined4 *)(param_2 + 0x1cc) = uVar1;
    *(undefined4 *)(param_2 + 0x1d0) = uVar2;
    *(undefined4 *)(param_2 + 0x1d4) = uVar3;
    *(undefined8 *)(param_2 + 0x1d8) = *(undefined8 *)(param_3 + 0x1d8);
    FUN_140c19bee(param_2 + 0x1e0,param_3 + 0x1e0);
    *(undefined1 *)(param_2 + 0x228) = *(undefined1 *)(param_3 + 0x228);
    param_2 = param_2 + 0x230;
    param_3 = param_3 + 0x230;
  }
  return 1;
}



// FUNCTION 14874dd42 FUN_14874dd42 body=59 status=ok
// SIG undefined FUN_14874dd42(void)

undefined8 FUN_14874dd42(longlong *param_1)

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



// FUNCTION 14874dd8e FUN_14874dd8e body=60 status=ok
// SIG undefined FUN_14874dd8e(void)

void FUN_14874dd8e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x46) == '\x01') {
    *param_2 = &PTR_FUN_14b2de4e0;
    FUN_1412dafa6(param_2 + 0x3c);
    FUN_140ff0132(param_2);
    *(undefined1 *)(param_2 + 0x46) = 0;
  }
  return;
}



// FUNCTION 14874de46 FUN_14874de46 body=104 status=ok
// SIG undefined FUN_14874de46(void)

undefined1 FUN_14874de46(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f2f73c(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x41c);
    uVar2 = *(undefined4 *)(param_3 + 0x420);
    uVar3 = *(undefined4 *)(param_3 + 0x424);
    uVar4 = *(undefined4 *)(param_3 + 0x428);
    uVar5 = *(undefined4 *)(param_3 + 0x42c);
    uVar6 = *(undefined4 *)(param_3 + 0x430);
    uVar7 = *(undefined4 *)(param_3 + 0x434);
    uVar8 = *(undefined4 *)(param_3 + 0x434);
    uVar9 = *(undefined4 *)(param_3 + 0x438);
    uVar10 = *(undefined4 *)(param_3 + 0x43c);
    uVar11 = *(undefined4 *)(param_3 + 0x440);
    *(undefined4 *)(param_2 + 0x418) = *(undefined4 *)(param_3 + 0x418);
    *(undefined4 *)(param_2 + 0x41c) = uVar1;
    *(undefined4 *)(param_2 + 0x420) = uVar2;
    *(undefined4 *)(param_2 + 0x424) = uVar3;
    *(undefined4 *)(param_2 + 0x428) = uVar4;
    *(undefined4 *)(param_2 + 0x42c) = uVar5;
    *(undefined4 *)(param_2 + 0x430) = uVar6;
    *(undefined4 *)(param_2 + 0x434) = uVar7;
    *(undefined4 *)(param_2 + 0x434) = uVar8;
    *(undefined4 *)(param_2 + 0x438) = uVar9;
    *(undefined4 *)(param_2 + 0x43c) = uVar10;
    *(undefined4 *)(param_2 + 0x440) = uVar11;
    param_2 = param_2 + 0x448;
    param_3 = param_3 + 0x448;
  }
  return 1;
}



// FUNCTION 14874ded6 FUN_14874ded6 body=59 status=ok
// SIG undefined FUN_14874ded6(void)

undefined8 FUN_14874ded6(longlong *param_1)

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



// FUNCTION 14874df22 FUN_14874df22 body=38 status=ok
// SIG undefined FUN_14874df22(void)

void FUN_14874df22(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x448) == '\x01') {
    FUN_1405f0b44(param_2);
    *(undefined1 *)(param_2 + 0x448) = 0;
  }
  return;
}



// FUNCTION 14874e014 FUN_14874e014 body=96 status=ok
// SIG undefined FUN_14874e014(void)

void FUN_14874e014(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x218);
  FUN_1412ebe6c(param_2);
  *param_2 = &PTR_FUN_14b2de930;
  *(undefined4 *)(param_2 + 0x39) = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  *(undefined1 *)(param_2 + 0x42) = 0;
  return;
}



// FUNCTION 14874e074 FUN_14874e074 body=80 status=ok
// SIG undefined FUN_14874e074(void)

void FUN_14874e074(undefined8 param_1,undefined8 *param_2)

{
  FUN_1412ebe6c(param_2);
  *param_2 = &PTR_FUN_14b2de930;
  *(undefined4 *)(param_2 + 0x39) = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  *(undefined1 *)(param_2 + 0x42) = 0;
  return;
}



// FUNCTION 14874e108 FUN_14874e108 body=97 status=ok
// SIG undefined FUN_14874e108(void)

undefined1 FUN_14874e108(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f313ac(param_2,param_3);
    FUN_140c19bee(param_2 + 0x1c8,param_3 + 0x1c8);
    *(undefined1 *)(param_2 + 0x210) = *(undefined1 *)(param_3 + 0x210);
    param_2 = param_2 + 0x218;
    param_3 = param_3 + 0x218;
  }
  return 1;
}



// FUNCTION 14874e192 FUN_14874e192 body=59 status=ok
// SIG undefined FUN_14874e192(void)

undefined8 FUN_14874e192(longlong *param_1)

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



// FUNCTION 14874e1de FUN_14874e1de body=60 status=ok
// SIG undefined FUN_14874e1de(void)

void FUN_14874e1de(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x43) == '\x01') {
    *param_2 = &PTR_FUN_14b2de930;
    FUN_1412dafa6(param_2 + 0x39);
    FUN_140ff0132(param_2);
    *(undefined1 *)(param_2 + 0x43) = 0;
  }
  return;
}



// FUNCTION 14874e268 FUN_14874e268 body=63 status=ok
// SIG undefined FUN_14874e268(void)

undefined8 * FUN_14874e268(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b2de930;
  FUN_1412dafa6(param_1 + 0x39);
  FUN_140ff0132(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14874e2a8 FUN_14874e2a8 body=55 status=ok
// SIG undefined FUN_14874e2a8(void)

void FUN_14874e2a8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb690b8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb690b8 = FUN_140002ddd(FUN_14651eecf,uVar1,L"GpsGeneratorSettings_DangerZones");
  }
  return;
}



// FUNCTION 14874e2e0 FUN_14874e2e0 body=37 status=ok
// SIG undefined FUN_14874e2e0(void)

void FUN_14874e2e0(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x448);
  FUN_14874e482(param_2);
  return;
}



// FUNCTION 14874e332 FUN_14874e332 body=104 status=ok
// SIG undefined FUN_14874e332(void)

undefined1 FUN_14874e332(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f2f73c(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x41c);
    uVar2 = *(undefined4 *)(param_3 + 0x420);
    uVar3 = *(undefined4 *)(param_3 + 0x424);
    uVar4 = *(undefined4 *)(param_3 + 0x428);
    uVar5 = *(undefined4 *)(param_3 + 0x42c);
    uVar6 = *(undefined4 *)(param_3 + 0x430);
    uVar7 = *(undefined4 *)(param_3 + 0x434);
    uVar8 = *(undefined4 *)(param_3 + 0x434);
    uVar9 = *(undefined4 *)(param_3 + 0x438);
    uVar10 = *(undefined4 *)(param_3 + 0x43c);
    uVar11 = *(undefined4 *)(param_3 + 0x440);
    *(undefined4 *)(param_2 + 0x418) = *(undefined4 *)(param_3 + 0x418);
    *(undefined4 *)(param_2 + 0x41c) = uVar1;
    *(undefined4 *)(param_2 + 0x420) = uVar2;
    *(undefined4 *)(param_2 + 0x424) = uVar3;
    *(undefined4 *)(param_2 + 0x428) = uVar4;
    *(undefined4 *)(param_2 + 0x42c) = uVar5;
    *(undefined4 *)(param_2 + 0x430) = uVar6;
    *(undefined4 *)(param_2 + 0x434) = uVar7;
    *(undefined4 *)(param_2 + 0x434) = uVar8;
    *(undefined4 *)(param_2 + 0x438) = uVar9;
    *(undefined4 *)(param_2 + 0x43c) = uVar10;
    *(undefined4 *)(param_2 + 0x440) = uVar11;
    param_2 = param_2 + 0x448;
    param_3 = param_3 + 0x448;
  }
  return 1;
}



// FUNCTION 14874e3c2 FUN_14874e3c2 body=59 status=ok
// SIG undefined FUN_14874e3c2(void)

undefined8 FUN_14874e3c2(longlong *param_1)

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



// FUNCTION 14874e40e FUN_14874e40e body=38 status=ok
// SIG undefined FUN_14874e40e(void)

void FUN_14874e40e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x448) == '\x01') {
    FUN_1405f0b44(param_2);
    *(undefined1 *)(param_2 + 0x448) = 0;
  }
  return;
}



// FUNCTION 14874e482 FUN_14874e482 body=125 status=ok
// SIG undefined FUN_14874e482(void)

void FUN_14874e482(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  param_1[6] = 2;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0x1000000000;
  *(undefined1 *)((longlong)param_1 + 0x3e4) = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0xffffffff00000000;
  *(undefined1 *)(param_1 + 0x82) = 0;
  param_1[0x87] = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *param_1 = &PTR_FUN_14b2deb30;
  return;
}



// FUNCTION 14874e500 FUN_14874e500 body=38 status=ok
// SIG undefined FUN_14874e500(void)

undefined8 FUN_14874e500(undefined8 param_1,int param_2)

{
  FUN_1405f0b44();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14874e526 FUN_14874e526 body=55 status=ok
// SIG undefined FUN_14874e526(void)

void FUN_14874e526(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb690d0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb690d0 = FUN_140002ddd(FUN_14651ef65,uVar1,L"GpsGenerator_DangerZones");
  }
  return;
}



// FUNCTION 14874e55e FUN_14874e55e body=76 status=ok
// SIG undefined FUN_14874e55e(void)

void FUN_14874e55e(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x1e0);
  FUN_1412ebe6c(param_2);
  *param_2 = &PTR_FUN_14b2ded80;
  param_2[0x39] = 0;
  *(undefined4 *)(param_2 + 0x3a) = 0x19105;
  param_2[0x3b] = 0;
  return;
}


