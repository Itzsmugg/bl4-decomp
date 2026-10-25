// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146683ab4 FUN_146683ab4 body=55 status=ok
// SIG undefined FUN_146683ab4(void)

void FUN_146683ab4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc00928 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc00928 = FUN_140002ddd(FUN_146683aeb,uVar1,L"RigVMRuntimeSettings");
  }
  return;
}



// FUNCTION 146683aeb FUN_146683aeb body=47 status=ok
// SIG undefined FUN_146683aeb(void)

longlong FUN_146683aeb(void)

{
  if (DAT_14cc00920 == 0) {
    FUN_14086a14e(&DAT_14cc00920,&PTR_FUN_14bacc7b0);
  }
  return DAT_14cc00920;
}



// FUNCTION 146683b1a FUN_146683b1a body=48 status=ok
// SIG undefined FUN_146683b1a(void)

void FUN_146683b1a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bad47d0;
  return;
}



// FUNCTION 146683b4a FUN_146683b4a body=48 status=ok
// SIG undefined FUN_146683b4a(void)

void FUN_146683b4a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000110;
  *puVar1 = &PTR_FUN_14bad4930;
  return;
}



// FUNCTION 146683b7a FUN_146683b7a body=55 status=ok
// SIG undefined FUN_146683b7a(void)

void FUN_146683b7a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc00958 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc00958 = FUN_140002ddd(FUN_14668239f,uVar1,L"RigVMExtendedExecuteContext");
  }
  return;
}



// FUNCTION 146683bb2 FUN_146683bb2 body=48 status=ok
// SIG undefined FUN_146683bb2(void)

void FUN_146683bb2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000228;
  *puVar1 = &PTR_FUN_14bad4aa0;
  return;
}



// FUNCTION 146683be2 FUN_146683be2 body=176 status=ok
// SIG undefined FUN_146683be2(void)

void FUN_146683be2(longlong param_1)

{
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446e6d0e(&local_40);
  if ((longlong *)(param_1 + 0xb0) != &local_40) {
    (**(code **)(*(longlong *)(param_1 + 0xb0) + 0x48))();
    *(undefined8 *)(param_1 + 0xb8) = local_38;
    *(undefined8 *)(param_1 + 0xc0) = local_30;
    *(undefined1 *)(param_1 + 0xd0) = local_20;
    local_20 = 0;
    (**(code **)(local_40 + 0x48))();
  }
  FUN_1448eac94(&local_40);
  *(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x108) = param_1;
  *(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x50) = param_1 + 0x108;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146683c94 FUN_146683c94 body=55 status=ok
// SIG undefined FUN_146683c94(void)

void FUN_146683c94(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc009b8 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc009b8 =
         FUN_140002ddd(FUN_146683ccb,uVar1,L"RigVMFunctionCompilationPropertyDescription");
  }
  return;
}



// FUNCTION 146683ccb FUN_146683ccb body=49 status=ok
// SIG undefined FUN_146683ccb(void)

longlong FUN_146683ccb(void)

{
  if (DAT_14cc009b0 == 0) {
    FUN_14086a14e(&DAT_14cc009b0,&PTR_FUN_14baccc40);
  }
  return DAT_14cc009b0;
}



// FUNCTION 146683cfc FUN_146683cfc body=48 status=ok
// SIG undefined FUN_146683cfc(void)

void FUN_146683cfc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14bad4c00;
  return;
}



// FUNCTION 146683d2c FUN_146683d2c body=55 status=ok
// SIG undefined FUN_146683d2c(void)

void FUN_146683d2c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc009d0 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc009d0 = FUN_140002ddd(FUN_146683d63,uVar1,L"RigVMFunctionCompilationPropertyPath");
  }
  return;
}



// FUNCTION 146683d63 FUN_146683d63 body=49 status=ok
// SIG undefined FUN_146683d63(void)

longlong FUN_146683d63(void)

{
  if (DAT_14cc009c8 == 0) {
    FUN_14086a14e(&DAT_14cc009c8,&PTR_FUN_14baccde0);
  }
  return DAT_14cc009c8;
}



// FUNCTION 146683d94 FUN_146683d94 body=48 status=ok
// SIG undefined FUN_146683d94(void)

void FUN_146683d94(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14bad4d60;
  return;
}



// FUNCTION 146683dc4 FUN_146683dc4 body=55 status=ok
// SIG undefined FUN_146683dc4(void)

void FUN_146683dc4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc009e8 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc009e8 = FUN_140002ddd(FUN_146683dfb,uVar1,L"RigVMFunctionCompilationData");
  }
  return;
}



// FUNCTION 146683dfb FUN_146683dfb body=47 status=ok
// SIG undefined FUN_146683dfb(void)

longlong FUN_146683dfb(void)

{
  if (DAT_14cc009e0 == 0) {
    FUN_14086a14e(&DAT_14cc009e0,&PTR_FUN_14bacd738);
  }
  return DAT_14cc009e0;
}



// FUNCTION 146683e2a FUN_146683e2a body=48 status=ok
// SIG undefined FUN_146683e2a(void)

void FUN_146683e2a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000238;
  *puVar1 = &PTR_FUN_14bad4ec0;
  return;
}



// FUNCTION 146683e5a FUN_146683e5a body=55 status=ok
// SIG undefined FUN_146683e5a(void)

void FUN_146683e5a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc00a00 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc00a00 = FUN_140002ddd(FUN_146683e91,uVar1,L"RigVMGraphFunctionArgument");
  }
  return;
}



// FUNCTION 146683e91 FUN_146683e91 body=47 status=ok
// SIG undefined FUN_146683e91(void)

longlong FUN_146683e91(void)

{
  if (DAT_14cc009f8 == 0) {
    FUN_14086a14e(&DAT_14cc009f8,&PTR_FUN_14bacdb20);
  }
  return DAT_14cc009f8;
}



// FUNCTION 146683ec0 FUN_146683ec0 body=48 status=ok
// SIG undefined FUN_146683ec0(void)

void FUN_146683ec0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000b0;
  *puVar1 = &PTR_FUN_14bad5020;
  return;
}



// FUNCTION 146683ef0 FUN_146683ef0 body=55 status=ok
// SIG undefined FUN_146683ef0(void)

void FUN_146683ef0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc00a18 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc00a18 = FUN_140002ddd(FUN_146683f27,uVar1,L"RigVMGraphFunctionIdentifier");
  }
  return;
}



// FUNCTION 146683f27 FUN_146683f27 body=49 status=ok
// SIG undefined FUN_146683f27(void)

longlong FUN_146683f27(void)

{
  if (DAT_14cc00a10 == 0) {
    FUN_14086a14e(&DAT_14cc00a10,&PTR_FUN_14bacdcb8);
  }
  return DAT_14cc00a10;
}



// FUNCTION 146683f58 FUN_146683f58 body=48 status=ok
// SIG undefined FUN_146683f58(void)

void FUN_146683f58(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14bad5180;
  return;
}



// FUNCTION 146683f88 FUN_146683f88 body=55 status=ok
// SIG undefined FUN_146683f88(void)

void FUN_146683f88(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc00a30 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc00a30 = FUN_140002ddd(FUN_146682180,uVar1,L"RigVMGraphFunctionHeader");
  }
  return;
}



// FUNCTION 146683fc0 FUN_146683fc0 body=48 status=ok
// SIG undefined FUN_146683fc0(void)

void FUN_146683fc0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000001f8;
  *puVar1 = &PTR_FUN_14bad52e0;
  return;
}



// FUNCTION 146683ff0 FUN_146683ff0 body=55 status=ok
// SIG undefined FUN_146683ff0(void)

void FUN_146683ff0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc00a48 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc00a48 = FUN_140002ddd(FUN_146681bfe,uVar1,L"RigVMGraphFunctionData");
  }
  return;
}



// FUNCTION 146684028 FUN_146684028 body=48 status=ok
// SIG undefined FUN_146684028(void)

void FUN_146684028(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000440;
  *puVar1 = &PTR_FUN_14bad5450;
  return;
}



// FUNCTION 146684058 FUN_146684058 body=40 status=ok
// SIG undefined FUN_146684058(void)

undefined8 FUN_146684058(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146684080 FUN_146684080 body=93 status=ok
// SIG undefined FUN_146684080(void)

undefined8 * FUN_146684080(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bac69a0;
  param_1[0x4a] = &PTR_LAB_14bac6da0;
  param_1[0x76] = &PTR_LAB_14bac6dc0;
  FUN_1458688fe(param_1 + 0x77);
  FUN_140731102(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466840de FUN_1466840de body=72 status=ok
// SIG undefined FUN_1466840de(void)

undefined8 * FUN_1466840de(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bac9e10;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_145bf1ed8(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146684126 FUN_146684126 body=29 status=ok
// SIG undefined FUN_146684126(void)

undefined8 FUN_146684126(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146684144 FUN_146684144 body=29 status=ok
// SIG undefined FUN_146684144(void)

undefined8 FUN_146684144(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146684162 FUN_146684162 body=29 status=ok
// SIG undefined FUN_146684162(void)

undefined8 FUN_146684162(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146684180 FUN_146684180 body=29 status=ok
// SIG undefined FUN_146684180(void)

undefined8 FUN_146684180(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14668419e FUN_14668419e body=29 status=ok
// SIG undefined FUN_14668419e(void)

undefined8 FUN_14668419e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466841bc FUN_1466841bc body=29 status=ok
// SIG undefined FUN_1466841bc(void)

undefined8 FUN_1466841bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466841da FUN_1466841da body=29 status=ok
// SIG undefined FUN_1466841da(void)

undefined8 FUN_1466841da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466841f8 FUN_1466841f8 body=29 status=ok
// SIG undefined FUN_1466841f8(void)

undefined8 FUN_1466841f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146684216 FUN_146684216 body=29 status=ok
// SIG undefined FUN_146684216(void)

undefined8 FUN_146684216(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146684234 FUN_146684234 body=29 status=ok
// SIG undefined FUN_146684234(void)

undefined8 FUN_146684234(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146684252 FUN_146684252 body=29 status=ok
// SIG undefined FUN_146684252(void)

undefined8 FUN_146684252(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146684270 FUN_146684270 body=29 status=ok
// SIG undefined FUN_146684270(void)

undefined8 FUN_146684270(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14668428e FUN_14668428e body=29 status=ok
// SIG undefined FUN_14668428e(void)

undefined8 FUN_14668428e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466842ac FUN_1466842ac body=29 status=ok
// SIG undefined FUN_1466842ac(void)

undefined8 FUN_1466842ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466842ca FUN_1466842ca body=29 status=ok
// SIG undefined FUN_1466842ca(void)

undefined8 FUN_1466842ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466842e8 FUN_1466842e8 body=29 status=ok
// SIG undefined FUN_1466842e8(void)

undefined8 FUN_1466842e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146684306 FUN_146684306 body=29 status=ok
// SIG undefined FUN_146684306(void)

undefined8 FUN_146684306(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146684324 FUN_146684324 body=29 status=ok
// SIG undefined FUN_146684324(void)

undefined8 FUN_146684324(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146684342 FUN_146684342 body=29 status=ok
// SIG undefined FUN_146684342(void)

undefined8 FUN_146684342(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146684360 FUN_146684360 body=29 status=ok
// SIG undefined FUN_146684360(void)

undefined8 FUN_146684360(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14668437e FUN_14668437e body=29 status=ok
// SIG undefined FUN_14668437e(void)

undefined8 FUN_14668437e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14668439c FUN_14668439c body=29 status=ok
// SIG undefined FUN_14668439c(void)

undefined8 FUN_14668439c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466843ba FUN_1466843ba body=29 status=ok
// SIG undefined FUN_1466843ba(void)

undefined8 FUN_1466843ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466843d8 FUN_1466843d8 body=29 status=ok
// SIG undefined FUN_1466843d8(void)

undefined8 FUN_1466843d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466843f6 FUN_1466843f6 body=147 status=ok
// SIG undefined FUN_1466843f6(void)

void FUN_1466843f6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14668448a FUN_14668448a body=29 status=ok
// SIG undefined FUN_14668448a(void)

undefined8 FUN_14668448a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466844a8 FUN_1466844a8 body=29 status=ok
// SIG undefined FUN_1466844a8(void)

undefined8 FUN_1466844a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466844c6 FUN_1466844c6 body=29 status=ok
// SIG undefined FUN_1466844c6(void)

undefined8 FUN_1466844c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466844e4 FUN_1466844e4 body=29 status=ok
// SIG undefined FUN_1466844e4(void)

undefined8 FUN_1466844e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146684502 FUN_146684502 body=29 status=ok
// SIG undefined FUN_146684502(void)

undefined8 FUN_146684502(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146684520 FUN_146684520 body=29 status=ok
// SIG undefined FUN_146684520(void)

undefined8 FUN_146684520(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14668453e FUN_14668453e body=29 status=ok
// SIG undefined FUN_14668453e(void)

undefined8 FUN_14668453e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14668455c FUN_14668455c body=29 status=ok
// SIG undefined FUN_14668455c(void)

undefined8 FUN_14668455c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14668457a FUN_14668457a body=29 status=ok
// SIG undefined FUN_14668457a(void)

undefined8 FUN_14668457a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146684598 FUN_146684598 body=29 status=ok
// SIG undefined FUN_146684598(void)

undefined8 FUN_146684598(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466845b6 FUN_1466845b6 body=29 status=ok
// SIG undefined FUN_1466845b6(void)

undefined8 FUN_1466845b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466845d4 FUN_1466845d4 body=29 status=ok
// SIG undefined FUN_1466845d4(void)

undefined8 FUN_1466845d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466845f2 FUN_1466845f2 body=29 status=ok
// SIG undefined FUN_1466845f2(void)

undefined8 FUN_1466845f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146684610 FUN_146684610 body=29 status=ok
// SIG undefined FUN_146684610(void)

undefined8 FUN_146684610(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14668462e FUN_14668462e body=29 status=ok
// SIG undefined FUN_14668462e(void)

undefined8 FUN_14668462e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14668464c FUN_14668464c body=29 status=ok
// SIG undefined FUN_14668464c(void)

undefined8 FUN_14668464c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14668466a FUN_14668466a body=29 status=ok
// SIG undefined FUN_14668466a(void)

undefined8 FUN_14668466a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146684688 FUN_146684688 body=29 status=ok
// SIG undefined FUN_146684688(void)

undefined8 FUN_146684688(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466846a6 FUN_1466846a6 body=29 status=ok
// SIG undefined FUN_1466846a6(void)

undefined8 FUN_1466846a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466846c4 FUN_1466846c4 body=29 status=ok
// SIG undefined FUN_1466846c4(void)

undefined8 FUN_1466846c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466846e2 FUN_1466846e2 body=29 status=ok
// SIG undefined FUN_1466846e2(void)

undefined8 FUN_1466846e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146684700 FUN_146684700 body=29 status=ok
// SIG undefined FUN_146684700(void)

undefined8 FUN_146684700(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14668471e FUN_14668471e body=29 status=ok
// SIG undefined FUN_14668471e(void)

undefined8 FUN_14668471e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14668473c FUN_14668473c body=29 status=ok
// SIG undefined FUN_14668473c(void)

undefined8 FUN_14668473c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14668475a FUN_14668475a body=29 status=ok
// SIG undefined FUN_14668475a(void)

undefined8 FUN_14668475a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146684778 FUN_146684778 body=29 status=ok
// SIG undefined FUN_146684778(void)

undefined8 FUN_146684778(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146684796 FUN_146684796 body=29 status=ok
// SIG undefined FUN_146684796(void)

undefined8 FUN_146684796(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466847b4 FUN_1466847b4 body=62 status=ok
// SIG undefined FUN_1466847b4(void)

undefined1 FUN_1466847b4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_140ad4584(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1466847f2 FUN_1466847f2 body=29 status=ok
// SIG undefined FUN_1466847f2(void)

undefined8 FUN_1466847f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146684810 FUN_146684810 body=29 status=ok
// SIG undefined FUN_146684810(void)

undefined8 FUN_146684810(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14668482e FUN_14668482e body=29 status=ok
// SIG undefined FUN_14668482e(void)

undefined8 FUN_14668482e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14668484c FUN_14668484c body=29 status=ok
// SIG undefined FUN_14668484c(void)

undefined8 FUN_14668484c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14668486a FUN_14668486a body=54 status=ok
// SIG undefined FUN_14668486a(void)

undefined1 FUN_14668486a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14591e93c(param_2,param_3);
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return 1;
}



// FUNCTION 1466848a0 FUN_1466848a0 body=29 status=ok
// SIG undefined FUN_1466848a0(void)

undefined8 FUN_1466848a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466848be FUN_1466848be body=29 status=ok
// SIG undefined FUN_1466848be(void)

undefined8 FUN_1466848be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466848dc FUN_1466848dc body=29 status=ok
// SIG undefined FUN_1466848dc(void)

undefined8 FUN_1466848dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466848fa FUN_1466848fa body=29 status=ok
// SIG undefined FUN_1466848fa(void)

undefined8 FUN_1466848fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146684918 FUN_146684918 body=29 status=ok
// SIG undefined FUN_146684918(void)

undefined8 FUN_146684918(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146684936 FUN_146684936 body=29 status=ok
// SIG undefined FUN_146684936(void)

undefined8 FUN_146684936(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146684954 FUN_146684954 body=29 status=ok
// SIG undefined FUN_146684954(void)

undefined8 FUN_146684954(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146684972 FUN_146684972 body=29 status=ok
// SIG undefined FUN_146684972(void)

undefined8 FUN_146684972(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146684990 FUN_146684990 body=29 status=ok
// SIG undefined FUN_146684990(void)

undefined8 FUN_146684990(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466849ad FUN_1466849ad body=47 status=ok
// SIG undefined FUN_1466849ad(void)

longlong FUN_1466849ad(void)

{
  if (DAT_14cc01008 == 0) {
    FUN_1409ce572(&DAT_14cc01008,&PTR_FUN_14bad63a0);
  }
  return DAT_14cc01008;
}



// FUNCTION 1466849dc FUN_1466849dc body=55 status=ok
// SIG undefined FUN_1466849dc(void)

void FUN_1466849dc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc01028 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc01028 = FUN_140002ddd(FUN_146684a13,uVar1,L"RigVMInstructionSetExecuteState");
  }
  return;
}



// FUNCTION 146684a13 FUN_146684a13 body=47 status=ok
// SIG undefined FUN_146684a13(void)

longlong FUN_146684a13(void)

{
  if (DAT_14cc01020 == 0) {
    FUN_14086a14e(&DAT_14cc01020,&PTR_FUN_14bad6538);
  }
  return DAT_14cc01020;
}



// FUNCTION 146684a42 FUN_146684a42 body=48 status=ok
// SIG undefined FUN_146684a42(void)

void FUN_146684a42(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14bb00f50;
  return;
}



// FUNCTION 146684a72 FUN_146684a72 body=47 status=ok
// SIG undefined FUN_146684a72(void)

longlong FUN_146684a72(void)

{
  if (DAT_14cc01038 == 0) {
    FUN_14086a14e(&DAT_14cc01038,&PTR_FUN_14bad66d0);
  }
  return DAT_14cc01038;
}



// FUNCTION 146684aa2 FUN_146684aa2 body=48 status=ok
// SIG undefined FUN_146684aa2(void)

void FUN_146684aa2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x200000006;
  *puVar1 = &PTR_FUN_14bb010b0;
  return;
}



// FUNCTION 146684ad2 FUN_146684ad2 body=47 status=ok
// SIG undefined FUN_146684ad2(void)

longlong FUN_146684ad2(void)

{
  if (DAT_14cc01050 == 0) {
    FUN_1409ce572(&DAT_14cc01050,&PTR_FUN_14bad67f0);
  }
  return DAT_14cc01050;
}



// FUNCTION 146684b02 FUN_146684b02 body=55 status=ok
// SIG undefined FUN_146684b02(void)

void FUN_146684b02(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc01070 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc01070 = FUN_140002ddd(FUN_146684b39,uVar1,L"RigVMRegister");
  }
  return;
}



// FUNCTION 146684b39 FUN_146684b39 body=47 status=ok
// SIG undefined FUN_146684b39(void)

longlong FUN_146684b39(void)

{
  if (DAT_14cc01068 == 0) {
    FUN_14086a14e(&DAT_14cc01068,&PTR_FUN_14bad6be0);
  }
  return DAT_14cc01068;
}



// FUNCTION 146684b68 FUN_146684b68 body=48 status=ok
// SIG undefined FUN_146684b68(void)

void FUN_146684b68(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000024;
  *puVar1 = &PTR_FUN_14bb012c0;
  return;
}



// FUNCTION 146684b98 FUN_146684b98 body=55 status=ok
// SIG undefined FUN_146684b98(void)

void FUN_146684b98(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc01088 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc01088 = FUN_140002ddd(FUN_146684bcf,uVar1,L"RigVMRegisterOffset");
  }
  return;
}



// FUNCTION 146684bcf FUN_146684bcf body=47 status=ok
// SIG undefined FUN_146684bcf(void)

longlong FUN_146684bcf(void)

{
  if (DAT_14cc01080 == 0) {
    FUN_14086a14e(&DAT_14cc01080,&PTR_FUN_14bad6f28);
  }
  return DAT_14cc01080;
}



// FUNCTION 146684bfe FUN_146684bfe body=48 status=ok
// SIG undefined FUN_146684bfe(void)

void FUN_146684bfe(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000048;
  *puVar1 = &PTR_FUN_14bb01420;
  return;
}



// FUNCTION 146684c2e FUN_146684c2e body=55 status=ok
// SIG undefined FUN_146684c2e(void)

void FUN_146684c2e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc010a0 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc010a0 = FUN_140002ddd(FUN_146684c65,uVar1,L"RigVMMemoryContainer");
  }
  return;
}



// FUNCTION 146684c65 FUN_146684c65 body=47 status=ok
// SIG undefined FUN_146684c65(void)

longlong FUN_146684c65(void)

{
  if (DAT_14cc01098 == 0) {
    FUN_14086a14e(&DAT_14cc01098,&PTR_FUN_14bad7410);
  }
  return DAT_14cc01098;
}



// FUNCTION 146684c94 FUN_146684c94 body=48 status=ok
// SIG undefined FUN_146684c94(void)

void FUN_146684c94(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000a0;
  *puVar1 = &PTR_FUN_14bb01580;
  return;
}



// FUNCTION 146684cc4 FUN_146684cc4 body=55 status=ok
// SIG undefined FUN_146684cc4(void)

void FUN_146684cc4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc010b8 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc010b8 = FUN_140002ddd(FUN_146684cfb,uVar1,L"RigVMBranchInfo");
  }
  return;
}



// FUNCTION 146684cfb FUN_146684cfb body=47 status=ok
// SIG undefined FUN_146684cfb(void)

longlong FUN_146684cfb(void)

{
  if (DAT_14cc010b0 == 0) {
    FUN_14086a14e(&DAT_14cc010b0,&PTR_FUN_14bad76d0);
  }
  return DAT_14cc010b0;
}



// FUNCTION 146684d2a FUN_146684d2a body=48 status=ok
// SIG undefined FUN_146684d2a(void)

void FUN_146684d2a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000018;
  *puVar1 = &PTR_FUN_14bb01740;
  return;
}



// FUNCTION 146684d5a FUN_146684d5a body=81 status=ok
// SIG undefined FUN_146684d5a(void)

void FUN_146684d5a(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_14007ca06();
  FUN_14094d944(puVar1,uVar2);
  *puVar1 = &PTR_FUN_14bad77b0;
  *(undefined1 *)(puVar1 + 0x4a) = 1;
  puVar1[0x4b] = 0;
  puVar1[0x4c] = 0;
  puVar1[0x4d] = 0;
  puVar1[0x4e] = 0;
  puVar1[0x4f] = 0;
  puVar1[0x50] = 0;
  *(undefined4 *)(puVar1 + 0x51) = 0;
  return;
}



// FUNCTION 146684dab FUN_146684dab body=47 status=ok
// SIG undefined FUN_146684dab(void)

longlong FUN_146684dab(void)

{
  if (DAT_14cc010d0 == 0) {
    FUN_14073dd9a(&DAT_14cc010d0,&PTR_LAB_14bad7768);
  }
  return DAT_14cc010d0;
}



// FUNCTION 146684dda FUN_146684dda body=234 status=ok
// SIG undefined FUN_146684dda(void)

void FUN_146684dda(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(byte *)(param_2 + 0x28) & 1) == 0) || (*(longlong *)(param_1 + 0x50) == 0)) {
    FUN_14095939c(param_1,param_2);
    if ((*(byte *)(param_2 + 0x28) & 5) != 0) {
      FUN_14581458c(param_2,param_1 + 0x278);
      puVar1 = (undefined1 *)**(undefined8 **)(param_2 + 8);
      if ((undefined1 *)(*(undefined8 **)(param_2 + 8))[1] < puVar1 + 1) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
      }
      *(undefined1 *)(param_1 + 0x250) = *puVar1;
      **(longlong **)(param_2 + 8) = **(longlong **)(param_2 + 8) + 1;
    }
  }
  else {
    FUN_1446f470e(&local_28,L"URigVMMemoryStorageGeneratorClass_Auxiliary",1);
    plVar2 = (longlong *)FUN_1490f5f19(DAT_14c951640,local_28);
    plVar2[0x18] = (longlong)FUN_140631fbe;
    (**(code **)(*plVar2 + 0xd8))(plVar2,param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146684ede FUN_146684ede body=35 status=ok
// SIG undefined FUN_146684ede(void)

void FUN_146684ede(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bad7c30;
  return;
}



// FUNCTION 146684f01 FUN_146684f01 body=47 status=ok
// SIG undefined FUN_146684f01(void)

longlong FUN_146684f01(void)

{
  if (DAT_14cc010e8 == 0) {
    FUN_14073dd9a(&DAT_14cc010e8,&PTR_LAB_14bad7be8);
  }
  return DAT_14cc010e8;
}



// FUNCTION 146684f30 FUN_146684f30 body=34 status=ok
// SIG undefined FUN_146684f30(void)

void FUN_146684f30(undefined8 param_1)

{
  FUN_1408a74d8();
  FUN_1414b36c4(param_1);
  FUN_145ae8d4e(param_1);
  return;
}



// FUNCTION 146684f52 FUN_146684f52 body=59 status=ok
// SIG undefined FUN_146684f52(void)

void FUN_146684f52(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145c73166(puVar1);
  *puVar1 = &PTR_FUN_14bad80c0;
  *(undefined4 *)(puVar1 + 0x72) = 0xffffffff;
  puVar1[0x73] = 0;
  puVar1[0x74] = 0;
  puVar1[0x75] = 0;
  puVar1[0x76] = 0;
  return;
}



// FUNCTION 146684f8d FUN_146684f8d body=47 status=ok
// SIG undefined FUN_146684f8d(void)

longlong FUN_146684f8d(void)

{
  if (DAT_14cc01220 == 0) {
    FUN_14073dd9a(&DAT_14cc01220,&PTR_LAB_14bad8078);
  }
  return DAT_14cc01220;
}



// FUNCTION 146684fbc FUN_146684fbc body=55 status=ok
// SIG undefined FUN_146684fbc(void)

void FUN_146684fbc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc01250 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc01250 = FUN_140002ddd(FUN_146684ff3,uVar1,L"RigVMPinCategory");
  }
  return;
}



// FUNCTION 146684ff3 FUN_146684ff3 body=47 status=ok
// SIG undefined FUN_146684ff3(void)

longlong FUN_146684ff3(void)

{
  if (DAT_14cc01248 == 0) {
    FUN_14086a14e(&DAT_14cc01248,&PTR_FUN_14bad8628);
  }
  return DAT_14cc01248;
}



// FUNCTION 146685022 FUN_146685022 body=48 status=ok
// SIG undefined FUN_146685022(void)

void FUN_146685022(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14bb01920;
  return;
}



// FUNCTION 146685052 FUN_146685052 body=55 status=ok
// SIG undefined FUN_146685052(void)

void FUN_146685052(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc01268 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc01268 = FUN_140002ddd(FUN_146685089,uVar1,L"RigVMNodeLayout");
  }
  return;
}



// FUNCTION 146685089 FUN_146685089 body=47 status=ok
// SIG undefined FUN_146685089(void)

longlong FUN_146685089(void)

{
  if (DAT_14cc01260 == 0) {
    FUN_14086a14e(&DAT_14cc01260,&PTR_FUN_14bad88f0);
  }
  return DAT_14cc01260;
}



// FUNCTION 1466850b8 FUN_1466850b8 body=48 status=ok
// SIG undefined FUN_1466850b8(void)

void FUN_1466850b8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000b0;
  *puVar1 = &PTR_FUN_14bb01a80;
  return;
}



// FUNCTION 1466850e8 FUN_1466850e8 body=55 status=ok
// SIG undefined FUN_1466850e8(void)

void FUN_1466850e8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc01280 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc01280 = FUN_140002ddd(FUN_14668511f,uVar1,L"RigVMInstructionVisitInfo");
  }
  return;
}



// FUNCTION 14668511f FUN_14668511f body=47 status=ok
// SIG undefined FUN_14668511f(void)

longlong FUN_14668511f(void)

{
  if (DAT_14cc01278 == 0) {
    FUN_14086a14e(&DAT_14cc01278,&PTR_FUN_14bad89d0);
  }
  return DAT_14cc01278;
}



// FUNCTION 14668514e FUN_14668514e body=48 status=ok
// SIG undefined FUN_14668514e(void)

void FUN_14668514e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14bb01bf0;
  return;
}



// FUNCTION 14668517e FUN_14668517e body=55 status=ok
// SIG undefined FUN_14668517e(void)

void FUN_14668517e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc01298 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc01298 = FUN_140002ddd(FUN_1466851b5,uVar1,L"RigVMProfilingInfo");
  }
  return;
}



// FUNCTION 1466851b5 FUN_1466851b5 body=47 status=ok
// SIG undefined FUN_1466851b5(void)

longlong FUN_1466851b5(void)

{
  if (DAT_14cc01290 == 0) {
    FUN_14086a14e(&DAT_14cc01290,&PTR_FUN_14bad8a48);
  }
  return DAT_14cc01290;
}



// FUNCTION 1466851e4 FUN_1466851e4 body=48 status=ok
// SIG undefined FUN_1466851e4(void)

void FUN_1466851e4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14bb01d50;
  return;
}



// FUNCTION 146685214 FUN_146685214 body=54 status=ok
// SIG undefined FUN_146685214(void)

void FUN_146685214(void)

{
  DAT_14cc041f8 = 0x8000000149e71d50;
  DAT_14cc04200 = FUN_140b397c6(&DAT_149e71d50,1);
  DAT_14cc04204 = 1;
  return;
}



// FUNCTION 14668524a FUN_14668524a body=54 status=ok
// SIG undefined FUN_14668524a(void)

void FUN_14668524a(void)

{
  DAT_14cc04208 = 0x8000000149e060e8;
  DAT_14cc04210 = FUN_140b397c6(&DAT_149e060e8,1);
  DAT_14cc04214 = 1;
  return;
}



// FUNCTION 146685280 FUN_146685280 body=54 status=ok
// SIG undefined FUN_146685280(void)

void FUN_146685280(void)

{
  DAT_14cc04218 = 0x800000014a9d0608;
  DAT_14cc04220 = FUN_140b397c6(L"Result",6);
  DAT_14cc04224 = 1;
  return;
}



// FUNCTION 1466852b6 FUN_1466852b6 body=49 status=ok
// SIG undefined FUN_1466852b6(void)

longlong FUN_1466852b6(void)

{
  if (DAT_14cc01800 == 0) {
    FUN_14086a14e(&DAT_14cc01800,&PTR_FUN_14bad9200);
  }
  return DAT_14cc01800;
}



// FUNCTION 1466852e8 FUN_1466852e8 body=48 status=ok
// SIG undefined FUN_1466852e8(void)

void FUN_1466852e8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14bb01f80;
  return;
}



// FUNCTION 146685318 FUN_146685318 body=55 status=ok
// SIG undefined FUN_146685318(void)

void FUN_146685318(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc01820 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc01820 = FUN_140002ddd(FUN_14668534f,uVar1,L"RigVMStructMutable");
  }
  return;
}



// FUNCTION 14668534f FUN_14668534f body=49 status=ok
// SIG undefined FUN_14668534f(void)

longlong FUN_14668534f(void)

{
  if (DAT_14cc01818 == 0) {
    FUN_14086a14e(&DAT_14cc01818,&PTR_FUN_14bad92c0);
  }
  return DAT_14cc01818;
}



// FUNCTION 146685380 FUN_146685380 body=48 status=ok
// SIG undefined FUN_146685380(void)

void FUN_146685380(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000120;
  *puVar1 = &PTR_FUN_14bb02160;
  return;
}



// FUNCTION 1466853b0 FUN_1466853b0 body=55 status=ok
// SIG undefined FUN_1466853b0(void)

void FUN_1466853b0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc01850 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc01850 = FUN_140002ddd(FUN_1466853e7,uVar1,L"RigVMTemplateArgumentType");
  }
  return;
}



// FUNCTION 1466853e7 FUN_1466853e7 body=47 status=ok
// SIG undefined FUN_1466853e7(void)

longlong FUN_1466853e7(void)

{
  if (DAT_14cc01848 == 0) {
    FUN_14086a14e(&DAT_14cc01848,&PTR_FUN_14bad9440);
  }
  return DAT_14cc01848;
}



// FUNCTION 146685416 FUN_146685416 body=48 status=ok
// SIG undefined FUN_146685416(void)

void FUN_146685416(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb022c0;
  return;
}



// FUNCTION 146685446 FUN_146685446 body=47 status=ok
// SIG undefined FUN_146685446(void)

longlong FUN_146685446(void)

{
  if (DAT_14cc018d8 == 0) {
    FUN_14086a14e(&DAT_14cc018d8,&PTR_FUN_14bad9558);
  }
  return DAT_14cc018d8;
}



// FUNCTION 146685476 FUN_146685476 body=48 status=ok
// SIG undefined FUN_146685476(void)

void FUN_146685476(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000004;
  *puVar1 = &PTR_FUN_14bb02690;
  return;
}



// FUNCTION 1466854ab FUN_1466854ab body=47 status=ok
// SIG undefined FUN_1466854ab(void)

longlong FUN_1466854ab(void)

{
  if (DAT_14cc018f0 == 0) {
    FUN_14000fc22(&DAT_14cc018f0,&PTR_FUN_14bad96e8);
  }
  return DAT_14cc018f0;
}



// FUNCTION 1466854da FUN_1466854da body=47 status=ok
// SIG undefined FUN_1466854da(void)

longlong FUN_1466854da(void)

{
  if (DAT_14cc018f8 == 0) {
    FUN_1409ce572(&DAT_14cc018f8,&PTR_FUN_14bad9790);
  }
  return DAT_14cc018f8;
}



// FUNCTION 14668550a FUN_14668550a body=55 status=ok
// SIG undefined FUN_14668550a(void)

void FUN_14668550a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc01918 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc01918 = FUN_140002ddd(FUN_146685541,uVar1,L"RigVMUserWorkflow");
  }
  return;
}



// FUNCTION 146685541 FUN_146685541 body=49 status=ok
// SIG undefined FUN_146685541(void)

longlong FUN_146685541(void)

{
  if (DAT_14cc01910 == 0) {
    FUN_14086a14e(&DAT_14cc01910,&PTR_FUN_14bad99d8);
  }
  return DAT_14cc01910;
}



// FUNCTION 146685572 FUN_146685572 body=48 status=ok
// SIG undefined FUN_146685572(void)

void FUN_146685572(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000058;
  *puVar1 = &PTR_FUN_14bb028d0;
  return;
}



// FUNCTION 1466855a2 FUN_1466855a2 body=49 status=ok
// SIG undefined FUN_1466855a2(void)

longlong FUN_1466855a2(void)

{
  if (DAT_14cc01958 == 0) {
    FUN_14073dd9a(&DAT_14cc01958,&PTR_LAB_14bad9e90);
  }
  return DAT_14cc01958;
}



// FUNCTION 1466855d3 FUN_1466855d3 body=47 status=ok
// SIG undefined FUN_1466855d3(void)

longlong FUN_1466855d3(void)

{
  if (DAT_14cc01928 == 0) {
    FUN_14000fc22(&DAT_14cc01928,&PTR_FUN_14bad9a58);
  }
  return DAT_14cc01928;
}



// FUNCTION 146685602 FUN_146685602 body=47 status=ok
// SIG undefined FUN_146685602(void)

longlong FUN_146685602(void)

{
  if (DAT_14cc01930 == 0) {
    FUN_14000fc22(&DAT_14cc01930,&PTR_FUN_14bad9af8);
  }
  return DAT_14cc01930;
}



// FUNCTION 146685631 FUN_146685631 body=47 status=ok
// SIG undefined FUN_146685631(void)

longlong FUN_146685631(void)

{
  if (DAT_14cc01938 == 0) {
    FUN_14000fc22(&DAT_14cc01938,&PTR_FUN_14bad9b88);
  }
  return DAT_14cc01938;
}



// FUNCTION 146685660 FUN_146685660 body=47 status=ok
// SIG undefined FUN_146685660(void)

longlong FUN_146685660(void)

{
  if (DAT_14cc01940 == 0) {
    FUN_14000fc22(&DAT_14cc01940,&PTR_FUN_14bad9c18);
  }
  return DAT_14cc01940;
}



// FUNCTION 14668568f FUN_14668568f body=47 status=ok
// SIG undefined FUN_14668568f(void)

longlong FUN_14668568f(void)

{
  if (DAT_14cc01948 == 0) {
    FUN_14000fc22(&DAT_14cc01948,&PTR_FUN_14bad9cb0);
  }
  return DAT_14cc01948;
}



// FUNCTION 1466856be FUN_1466856be body=34 status=ok
// SIG undefined FUN_1466856be(void)

void FUN_1466856be(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14594c950();
  FUN_14069c8d6(uVar1,&PTR_s_IsValid_14bad9cf0,5);
  return;
}



// FUNCTION 1466856e0 FUN_1466856e0 body=91 status=ok
// SIG undefined FUN_1466856e0(void)

void FUN_1466856e0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bad9ed0;
  puVar1[5] = 0;
  puVar1[6] = &PTR_FUN_14bb02a30;
  puVar1[0xc] = 0;
  *(undefined4 *)(puVar1 + 0xd) = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  *(undefined1 *)(puVar1 + 0xb) = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  *(undefined4 *)(puVar1 + 0x12) = 0;
  return;
}



// FUNCTION 14668573c FUN_14668573c body=328 status=ok
// SIG undefined FUN_14668573c(void)

longlong FUN_14668573c(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  ulonglong uStack_50;
  undefined8 *local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc01988 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc01988 = FUN_140002ddd(FUN_146685885,uVar3,L"RigVMFunction_AnimEasingType");
    local_58 = (undefined8 *)0x0;
    uStack_50 = 1;
    FUN_140c0351c(&local_58,0);
    *local_58 = L"Type";
    local_58[1] = L"ERigVMAnimEasingType";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    FUN_14001a7b2();
    lVar2 = DAT_14cc01988;
    local_40 = &DAT_14cc012d0;
    local_38 = 0x101;
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14cc01670);
    LOCK();
    iVar1 = DAT_14cc0167c + 1;
    UNLOCK();
    bVar4 = DAT_14cc0167c == 0;
    DAT_14cc0167c = iVar1;
    if (bVar4) {
      LOCK();
      *(undefined1 *)(local_40 + 0x75) = (undefined1)local_38;
      UNLOCK();
    }
    local_68 = &local_58;
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_AnimEasingType::Execute",&DAT_1490fd5e8,lVar2);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc01988;
}



// FUNCTION 146685885 FUN_146685885 body=47 status=ok
// SIG undefined FUN_146685885(void)

longlong FUN_146685885(void)

{
  if (DAT_14cc01980 == 0) {
    FUN_14086a14e(&DAT_14cc01980,&PTR_FUN_14bada3e0);
  }
  return DAT_14cc01980;
}



// FUNCTION 1466858b4 FUN_1466858b4 body=48 status=ok
// SIG undefined FUN_1466858b4(void)

void FUN_1466858b4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb02a40;
  return;
}



// FUNCTION 1466858e4 FUN_1466858e4 body=810 status=ok
// SIG undefined FUN_1466858e4(void)

longlong FUN_1466858e4(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc019a0 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc019a0 = FUN_140002ddd(FUN_146685c0f,uVar3,L"RigVMFunction_AnimEasing");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"float";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,iVar1);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"Type";
    local_58[lVar4 * 7 + 1] = L"ERigVMAnimEasingType";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"SourceMinimum";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"SourceMaximum";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"TargetMinimum";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"TargetMaximum";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc019a0;
    local_40 = &DAT_14cc012d0;
    local_38 = 0x101;
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14cc01670);
    LOCK();
    iVar1 = DAT_14cc0167c + 1;
    UNLOCK();
    bVar5 = DAT_14cc0167c == 0;
    DAT_14cc0167c = iVar1;
    if (bVar5) {
      LOCK();
      *(undefined1 *)(local_40 + 0x75) = (undefined1)local_38;
      UNLOCK();
    }
    local_68 = &local_58;
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_AnimEasing::Execute",FUN_1490fd6b8,lVar4);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc019a0;
}



// FUNCTION 146685c0f FUN_146685c0f body=47 status=ok
// SIG undefined FUN_146685c0f(void)

longlong FUN_146685c0f(void)

{
  if (DAT_14cc01998 == 0) {
    FUN_14086a14e(&DAT_14cc01998,&PTR_FUN_14bada730);
  }
  return DAT_14cc01998;
}



// FUNCTION 146685c3e FUN_146685c3e body=48 status=ok
// SIG undefined FUN_146685c3e(void)

void FUN_146685c3e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14bb02c20;
  return;
}



// FUNCTION 146685c6e FUN_146685c6e body=810 status=ok
// SIG undefined FUN_146685c6e(void)

longlong FUN_146685c6e(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc019b8 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc019b8 = FUN_140002ddd(FUN_146685f99,uVar3,L"RigVMFunction_AnimEvalRichCurve");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"float";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,iVar1);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"Curve";
    local_58[lVar4 * 7 + 1] = L"FRuntimeFloatCurve";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"SourceMinimum";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"SourceMaximum";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"TargetMinimum";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"TargetMaximum";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc019b8;
    local_40 = &DAT_14cc012d0;
    local_38 = 0x101;
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14cc01670);
    LOCK();
    iVar1 = DAT_14cc0167c + 1;
    UNLOCK();
    bVar5 = DAT_14cc0167c == 0;
    DAT_14cc0167c = iVar1;
    if (bVar5) {
      LOCK();
      *(undefined1 *)(local_40 + 0x75) = (undefined1)local_38;
      UNLOCK();
    }
    local_68 = &local_58;
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_AnimEvalRichCurve::Execute",FUN_1490fd88c,lVar4);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc019b8;
}



// FUNCTION 146685f99 FUN_146685f99 body=47 status=ok
// SIG undefined FUN_146685f99(void)

longlong FUN_146685f99(void)

{
  if (DAT_14cc019b0 == 0) {
    FUN_14086a14e(&DAT_14cc019b0,&PTR_FUN_14badaa68);
  }
  return DAT_14cc019b0;
}



// FUNCTION 146685fc8 FUN_146685fc8 body=48 status=ok
// SIG undefined FUN_146685fc8(void)

void FUN_146685fc8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000b0;
  *puVar1 = &PTR_FUN_14bb02e00;
  return;
}



// FUNCTION 146685ff8 FUN_146685ff8 body=328 status=ok
// SIG undefined FUN_146685ff8(void)

longlong FUN_146685ff8(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  ulonglong uStack_50;
  undefined8 *local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc019d0 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc019d0 = FUN_140002ddd(FUN_146686141,uVar3,L"RigVMFunction_AnimRichCurve");
    local_58 = (undefined8 *)0x0;
    uStack_50 = 1;
    FUN_140c0351c(&local_58,0);
    *local_58 = L"Curve";
    local_58[1] = L"FRuntimeFloatCurve";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    FUN_14001a7b2();
    lVar2 = DAT_14cc019d0;
    local_40 = &DAT_14cc012d0;
    local_38 = 0x101;
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14cc01670);
    LOCK();
    iVar1 = DAT_14cc0167c + 1;
    UNLOCK();
    bVar4 = DAT_14cc0167c == 0;
    DAT_14cc0167c = iVar1;
    if (bVar4) {
      LOCK();
      *(undefined1 *)(local_40 + 0x75) = (undefined1)local_38;
      UNLOCK();
    }
    local_68 = &local_58;
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_AnimRichCurve::Execute",&DAT_1490fda9c,lVar2);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc019d0;
}



// FUNCTION 146686141 FUN_146686141 body=47 status=ok
// SIG undefined FUN_146686141(void)

longlong FUN_146686141(void)

{
  if (DAT_14cc019c8 == 0) {
    FUN_14086a14e(&DAT_14cc019c8,&PTR_FUN_14badabb8);
  }
  return DAT_14cc019c8;
}



// FUNCTION 146686170 FUN_146686170 body=48 status=ok
// SIG undefined FUN_146686170(void)

void FUN_146686170(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000090;
  *puVar1 = &PTR_FUN_14bb02fe0;
  return;
}



// FUNCTION 1466861a0 FUN_1466861a0 body=328 status=ok
// SIG undefined FUN_1466861a0(void)

longlong FUN_1466861a0(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  ulonglong uStack_50;
  undefined8 *local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc019e8 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc019e8 = FUN_140002ddd(FUN_1466862e9,uVar3,L"RigVMFunction_GetDeltaTime");
    local_58 = (undefined8 *)0x0;
    uStack_50 = 1;
    FUN_140c0351c(&local_58,0);
    *local_58 = L"Result";
    local_58[1] = L"float";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    FUN_14001a7b2();
    lVar2 = DAT_14cc019e8;
    local_40 = &DAT_14cc012d0;
    local_38 = 0x101;
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14cc01670);
    LOCK();
    iVar1 = DAT_14cc0167c + 1;
    UNLOCK();
    bVar4 = DAT_14cc0167c == 0;
    DAT_14cc0167c = iVar1;
    if (bVar4) {
      LOCK();
      *(undefined1 *)(local_40 + 0x75) = (undefined1)local_38;
      UNLOCK();
    }
    local_68 = &local_58;
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_GetDeltaTime::Execute",&LAB_1490fdb6c,lVar2);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc019e8;
}



// FUNCTION 1466862e9 FUN_1466862e9 body=47 status=ok
// SIG undefined FUN_1466862e9(void)

longlong FUN_1466862e9(void)

{
  if (DAT_14cc019e0 == 0) {
    FUN_14086a14e(&DAT_14cc019e0,&PTR_FUN_14badacf8);
  }
  return DAT_14cc019e0;
}



// FUNCTION 146686318 FUN_146686318 body=48 status=ok
// SIG undefined FUN_146686318(void)

void FUN_146686318(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb031c0;
  return;
}



// FUNCTION 146686348 FUN_146686348 body=882 status=ok
// SIG undefined FUN_146686348(void)

longlong FUN_146686348(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc01a00 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc01a00 = FUN_140002ddd(FUN_1466866bb,uVar3,L"RigVMFunction_GetWorldTime");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"Year";
    local_58[1] = L"float";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,iVar1);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"Month";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = &DAT_14badada4;
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"WeekDay";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"Hours";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"Minutes";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"Seconds";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    local_58[lVar4 * 7] = L"OverallSeconds";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc01a00;
    local_40 = &DAT_14cc012d0;
    local_38 = 0x101;
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14cc01670);
    LOCK();
    iVar1 = DAT_14cc0167c + 1;
    UNLOCK();
    bVar5 = DAT_14cc0167c == 0;
    DAT_14cc0167c = iVar1;
    if (bVar5) {
      LOCK();
      *(undefined1 *)(local_40 + 0x75) = (undefined1)local_38;
      UNLOCK();
    }
    local_68 = &local_58;
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_GetWorldTime::Execute",FUN_1490fdc64,lVar4);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc01a00;
}



// FUNCTION 1466866bb FUN_1466866bb body=47 status=ok
// SIG undefined FUN_1466866bb(void)

longlong FUN_1466866bb(void)

{
  if (DAT_14cc019f8 == 0) {
    FUN_14086a14e(&DAT_14cc019f8,&PTR_FUN_14badb060);
  }
  return DAT_14cc019f8;
}



// FUNCTION 1466866ea FUN_1466866ea body=48 status=ok
// SIG undefined FUN_1466866ea(void)

void FUN_1466866ea(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14bb033a0;
  return;
}



// FUNCTION 14668671a FUN_14668671a body=408 status=ok
// SIG undefined FUN_14668671a(void)

longlong FUN_14668671a(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc01a18 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc01a18 = FUN_140002ddd(FUN_1466868b3,uVar3,L"RigVMFunction_FramesToSeconds");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = L"Frames";
    local_58[1] = L"float";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar4 = (longlong)(int)uStack_50;
    uVar2 = (int)uStack_50 + 1;
    uStack_50 = CONCAT44(uStack_50._4_4_,uVar2);
    if (uStack_50._4_4_ < uVar2) {
      FUN_140c0351c(&local_58,iVar1);
    }
    local_58[lVar4 * 7] = L"Seconds";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc01a18;
    local_40 = &DAT_14cc012d0;
    local_38 = 0x101;
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14cc01670);
    LOCK();
    iVar1 = DAT_14cc0167c + 1;
    UNLOCK();
    bVar5 = DAT_14cc0167c == 0;
    DAT_14cc0167c = iVar1;
    if (bVar5) {
      LOCK();
      *(undefined1 *)(local_40 + 0x75) = (undefined1)local_38;
      UNLOCK();
    }
    local_68 = &local_58;
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_FramesToSeconds::Execute",&LAB_1490fe002,lVar4);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc01a18;
}



// FUNCTION 1466868b3 FUN_1466868b3 body=47 status=ok
// SIG undefined FUN_1466868b3(void)

longlong FUN_1466868b3(void)

{
  if (DAT_14cc01a10 == 0) {
    FUN_14086a14e(&DAT_14cc01a10,&PTR_FUN_14badb210);
  }
  return DAT_14cc01a10;
}



// FUNCTION 1466868e2 FUN_1466868e2 body=48 status=ok
// SIG undefined FUN_1466868e2(void)

void FUN_1466868e2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb03580;
  return;
}



// FUNCTION 146686912 FUN_146686912 body=408 status=ok
// SIG undefined FUN_146686912(void)

longlong FUN_146686912(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc01a30 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc01a30 = FUN_140002ddd(FUN_146686aab,uVar3,L"RigVMFunction_SecondsToFrames");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = L"Seconds";
    local_58[1] = L"float";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar4 = (longlong)(int)uStack_50;
    uVar2 = (int)uStack_50 + 1;
    uStack_50 = CONCAT44(uStack_50._4_4_,uVar2);
    if (uStack_50._4_4_ < uVar2) {
      FUN_140c0351c(&local_58,iVar1);
    }
    local_58[lVar4 * 7] = L"Frames";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc01a30;
    local_40 = &DAT_14cc012d0;
    local_38 = 0x101;
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14cc01670);
    LOCK();
    iVar1 = DAT_14cc0167c + 1;
    UNLOCK();
    bVar5 = DAT_14cc0167c == 0;
    DAT_14cc0167c = iVar1;
    if (bVar5) {
      LOCK();
      *(undefined1 *)(local_40 + 0x75) = (undefined1)local_38;
      UNLOCK();
    }
    local_68 = &local_58;
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_SecondsToFrames::Execute",&LAB_1490fe138,lVar4);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc01a30;
}



// FUNCTION 146686aab FUN_146686aab body=47 status=ok
// SIG undefined FUN_146686aab(void)

longlong FUN_146686aab(void)

{
  if (DAT_14cc01a28 == 0) {
    FUN_14086a14e(&DAT_14cc01a28,&PTR_FUN_14badb380);
  }
  return DAT_14cc01a28;
}



// FUNCTION 146686ada FUN_146686ada body=48 status=ok
// SIG undefined FUN_146686ada(void)

void FUN_146686ada(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb03760;
  return;
}



// FUNCTION 146686b0a FUN_146686b0a body=749 status=ok
// SIG undefined FUN_146686b0a(void)

longlong FUN_146686b0a(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc01a48 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc01a48 = FUN_140002ddd(FUN_146686df8,uVar3,L"RigVMFunction_DebugLineNoSpace");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
    local_58[1] = L"FVector";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,iVar1);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = &DAT_149e060e8;
    local_58[lVar4 * 7 + 1] = L"FVector";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"Color";
    local_58[lVar4 * 7 + 1] = L"FLinearColor";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"Thickness";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"WorldOffset";
    local_58[lVar4 * 7 + 1] = L"FTransform";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    local_58[lVar4 * 7] = L"bEnabled";
    local_58[lVar4 * 7 + 1] = L"bool";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc01a48;
    local_40 = &DAT_14cc012d0;
    local_38 = 0x101;
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14cc01670);
    LOCK();
    iVar1 = DAT_14cc0167c + 1;
    UNLOCK();
    bVar5 = DAT_14cc0167c == 0;
    DAT_14cc0167c = iVar1;
    if (bVar5) {
      LOCK();
      *(undefined1 *)(local_40 + 0x75) = (undefined1)local_38;
      UNLOCK();
    }
    local_68 = &local_58;
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_DebugLineNoSpace::Execute",FUN_1490fe26a,lVar4);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc01a48;
}



// FUNCTION 146686df8 FUN_146686df8 body=47 status=ok
// SIG undefined FUN_146686df8(void)

longlong FUN_146686df8(void)

{
  if (DAT_14cc01a40 == 0) {
    FUN_14086a14e(&DAT_14cc01a40,&PTR_FUN_14badb6b0);
  }
  return DAT_14cc01a40;
}



// FUNCTION 146686e28 FUN_146686e28 body=48 status=ok
// SIG undefined FUN_146686e28(void)

void FUN_146686e28(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000001e0;
  *puVar1 = &PTR_FUN_14bb03940;
  return;
}



// FUNCTION 146686e58 FUN_146686e58 body=668 status=ok
// SIG undefined FUN_146686e58(void)

longlong FUN_146686e58(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc01a60 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc01a60 = FUN_140002ddd(FUN_1466870f5,uVar3,L"RigVMFunction_DebugLineStripNoSpace");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"Points";
    local_58[1] = L"TArray<FVector>";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,iVar1);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"Color";
    local_58[lVar4 * 7 + 1] = L"FLinearColor";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"Thickness";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"WorldOffset";
    local_58[lVar4 * 7 + 1] = L"FTransform";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    local_58[lVar4 * 7] = L"bEnabled";
    local_58[lVar4 * 7 + 1] = L"bool";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc01a60;
    local_40 = &DAT_14cc012d0;
    local_38 = 0x101;
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14cc01670);
    LOCK();
    iVar1 = DAT_14cc0167c + 1;
    UNLOCK();
    bVar5 = DAT_14cc0167c == 0;
    DAT_14cc0167c = iVar1;
    if (bVar5) {
      LOCK();
      *(undefined1 *)(local_40 + 0x75) = (undefined1)local_38;
      UNLOCK();
    }
    local_68 = &local_58;
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_DebugLineStripNoSpace::Execute",FUN_1490fe32a,
                  lVar4);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc01a60;
}



// FUNCTION 1466870f5 FUN_1466870f5 body=47 status=ok
// SIG undefined FUN_1466870f5(void)

longlong FUN_1466870f5(void)

{
  if (DAT_14cc01a58 == 0) {
    FUN_14086a14e(&DAT_14cc01a58,&PTR_FUN_14badb998);
  }
  return DAT_14cc01a58;
}



// FUNCTION 146687124 FUN_146687124 body=48 status=ok
// SIG undefined FUN_146687124(void)

void FUN_146687124(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000001c0;
  *puVar1 = &PTR_FUN_14bb03b20;
  return;
}



// FUNCTION 146687154 FUN_146687154 body=47 status=ok
// SIG undefined FUN_146687154(void)

longlong FUN_146687154(void)

{
  if (DAT_14cc01a70 == 0) {
    FUN_1409ce572(&DAT_14cc01a70,&PTR_FUN_14badba40);
  }
  return DAT_14cc01a70;
}



// FUNCTION 146687184 FUN_146687184 body=924 status=ok
// SIG undefined FUN_146687184(void)

longlong FUN_146687184(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc01a90 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc01a90 = FUN_140002ddd(FUN_146687521,uVar3,L"RigVMFunction_DebugPoint");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"Vector";
    local_58[1] = L"FVector";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,iVar1);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"Mode";
    local_58[lVar4 * 7 + 1] = L"ERigUnitDebugPointMode";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"Color";
    local_58[lVar4 * 7 + 1] = L"FLinearColor";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"Scale";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"Thickness";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"Space";
    local_58[lVar4 * 7 + 1] = L"FName";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"WorldOffset";
    local_58[lVar4 * 7 + 1] = L"FTransform";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    local_58[lVar4 * 7] = L"bEnabled";
    local_58[lVar4 * 7 + 1] = L"bool";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc01a90;
    local_40 = &DAT_14cc012d0;
    local_38 = 0x101;
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14cc01670);
    LOCK();
    iVar1 = DAT_14cc0167c + 1;
    UNLOCK();
    bVar5 = DAT_14cc0167c == 0;
    DAT_14cc0167c = iVar1;
    if (bVar5) {
      LOCK();
      *(undefined1 *)(local_40 + 0x75) = (undefined1)local_38;
      UNLOCK();
    }
    local_68 = &local_58;
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_DebugPoint::Execute",FUN_1490fe43e,lVar4);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc01a90;
}



// FUNCTION 146687521 FUN_146687521 body=47 status=ok
// SIG undefined FUN_146687521(void)

longlong FUN_146687521(void)

{
  if (DAT_14cc01a88 == 0) {
    FUN_14086a14e(&DAT_14cc01a88,&PTR_FUN_14badbda8);
  }
  return DAT_14cc01a88;
}



// FUNCTION 146687550 FUN_146687550 body=48 status=ok
// SIG undefined FUN_146687550(void)

void FUN_146687550(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000000c0;
  *puVar1 = &PTR_FUN_14bb03d60;
  return;
}



// FUNCTION 146687580 FUN_146687580 body=924 status=ok
// SIG undefined FUN_146687580(void)

longlong FUN_146687580(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc01aa8 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc01aa8 = FUN_140002ddd(FUN_14668791d,uVar3,L"RigVMFunction_DebugPointMutable");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"Vector";
    local_58[1] = L"FVector";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,iVar1);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"Mode";
    local_58[lVar4 * 7 + 1] = L"ERigUnitDebugPointMode";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"Color";
    local_58[lVar4 * 7 + 1] = L"FLinearColor";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"Scale";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"Thickness";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"Space";
    local_58[lVar4 * 7 + 1] = L"FName";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"WorldOffset";
    local_58[lVar4 * 7 + 1] = L"FTransform";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    local_58[lVar4 * 7] = L"bEnabled";
    local_58[lVar4 * 7 + 1] = L"bool";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc01aa8;
    local_40 = &DAT_14cc012d0;
    local_38 = 0x101;
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14cc01670);
    LOCK();
    iVar1 = DAT_14cc0167c + 1;
    UNLOCK();
    bVar5 = DAT_14cc0167c == 0;
    DAT_14cc0167c = iVar1;
    if (bVar5) {
      LOCK();
      *(undefined1 *)(local_40 + 0x75) = (undefined1)local_38;
      UNLOCK();
    }
    local_68 = &local_58;
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_DebugPointMutable::Execute",FUN_1490fe6f0,lVar4);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc01aa8;
}



// FUNCTION 14668791d FUN_14668791d body=47 status=ok
// SIG undefined FUN_14668791d(void)

longlong FUN_14668791d(void)

{
  if (DAT_14cc01aa0 == 0) {
    FUN_14086a14e(&DAT_14cc01aa0,&PTR_FUN_14badc108);
  }
  return DAT_14cc01aa0;
}



// FUNCTION 14668794c FUN_14668794c body=48 status=ok
// SIG undefined FUN_14668794c(void)

void FUN_14668794c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000001d0;
  *puVar1 = &PTR_FUN_14bb03f40;
  return;
}



// FUNCTION 14668797c FUN_14668797c body=835 status=ok
// SIG undefined FUN_14668797c(void)

longlong FUN_14668797c(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_98 [32];
  undefined8 **local_78;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 *local_50;
  undefined2 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cc01b00 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc01b00 = FUN_140002ddd(FUN_146687cc0,uVar3,L"RigVMFunction_DebugRectangle");
    local_68 = (undefined8 *)0x0;
    uStack_60._0_4_ = 1;
    uStack_60._4_4_ = 0;
    FUN_140c0351c(&local_68,0);
    iVar1 = (uint)uStack_60;
    *local_68 = L"Transform";
    local_68[1] = L"FTransform";
    local_68[2] = 0;
    local_68[3] = 0;
    local_68[4] = 0;
    local_68[5] = 0;
    *(undefined1 *)(local_68 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,iVar1);
    }
    uVar2 = (uint)uStack_60;
    local_68[lVar4 * 7] = L"Color";
    local_68[lVar4 * 7 + 1] = L"FLinearColor";
    local_68[lVar4 * 7 + 2] = 0;
    (local_68 + lVar4 * 7 + 2)[1] = 0;
    local_68[lVar4 * 7 + 4] = 0;
    (local_68 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar2);
    }
    uVar2 = (uint)uStack_60;
    local_68[lVar4 * 7] = L"Scale";
    local_68[lVar4 * 7 + 1] = L"float";
    local_68[lVar4 * 7 + 2] = 0;
    (local_68 + lVar4 * 7 + 2)[1] = 0;
    local_68[lVar4 * 7 + 4] = 0;
    (local_68 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar2);
    }
    uVar2 = (uint)uStack_60;
    local_68[lVar4 * 7] = L"Thickness";
    local_68[lVar4 * 7 + 1] = L"float";
    local_68[lVar4 * 7 + 2] = 0;
    (local_68 + lVar4 * 7 + 2)[1] = 0;
    local_68[lVar4 * 7 + 4] = 0;
    (local_68 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar2);
    }
    uVar2 = (uint)uStack_60;
    local_68[lVar4 * 7] = L"Space";
    local_68[lVar4 * 7 + 1] = L"FName";
    local_68[lVar4 * 7 + 2] = 0;
    (local_68 + lVar4 * 7 + 2)[1] = 0;
    local_68[lVar4 * 7 + 4] = 0;
    (local_68 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar2);
    }
    uVar2 = (uint)uStack_60;
    local_68[lVar4 * 7] = L"WorldOffset";
    local_68[lVar4 * 7 + 1] = L"FTransform";
    local_68[lVar4 * 7 + 2] = 0;
    (local_68 + lVar4 * 7 + 2)[1] = 0;
    local_68[lVar4 * 7 + 4] = 0;
    (local_68 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar2);
    }
    local_68[lVar4 * 7] = L"bEnabled";
    local_68[lVar4 * 7 + 1] = L"bool";
    local_68[lVar4 * 7 + 2] = 0;
    (local_68 + lVar4 * 7 + 2)[1] = 0;
    local_68[lVar4 * 7 + 4] = 0;
    (local_68 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc01b00;
    local_50 = &DAT_14cc012d0;
    local_48 = 0x101;
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14cc01670);
    LOCK();
    iVar1 = DAT_14cc0167c + 1;
    UNLOCK();
    bVar5 = DAT_14cc0167c == 0;
    DAT_14cc0167c = iVar1;
    if (bVar5) {
      LOCK();
      *(undefined1 *)(local_50 + 0x75) = (undefined1)local_48;
      UNLOCK();
    }
    local_78 = &local_68;
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_DebugRectangle::Execute",FUN_1490febbc,lVar4);
    FUN_1409be446(&local_50);
    FUN_140e03040(local_68,uStack_60 & 0xffffffff);
    if (local_68 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc01b00;
}



// FUNCTION 146687cc0 FUN_146687cc0 body=47 status=ok
// SIG undefined FUN_146687cc0(void)

longlong FUN_146687cc0(void)

{
  if (DAT_14cc01af8 == 0) {
    FUN_14086a14e(&DAT_14cc01af8,&PTR_FUN_14badc458);
  }
  return DAT_14cc01af8;
}



// FUNCTION 146687cf0 FUN_146687cf0 body=48 status=ok
// SIG undefined FUN_146687cf0(void)

void FUN_146687cf0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000210;
  *puVar1 = &PTR_FUN_14bb041a0;
  return;
}



// FUNCTION 146687d20 FUN_146687d20 body=746 status=ok
// SIG undefined FUN_146687d20(void)

longlong FUN_146687d20(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_98 [32];
  undefined8 **local_78;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 *local_50;
  undefined2 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cc01b18 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc01b18 = FUN_140002ddd(FUN_14668800b,uVar3,L"RigVMFunction_DebugRectangleNoSpace");
    local_68 = (undefined8 *)0x0;
    uStack_60._0_4_ = 1;
    uStack_60._4_4_ = 0;
    FUN_140c0351c(&local_68,0);
    iVar1 = (uint)uStack_60;
    *local_68 = L"Transform";
    local_68[1] = L"FTransform";
    local_68[2] = 0;
    local_68[3] = 0;
    local_68[4] = 0;
    local_68[5] = 0;
    *(undefined1 *)(local_68 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,iVar1);
    }
    uVar2 = (uint)uStack_60;
    local_68[lVar4 * 7] = L"Color";
    local_68[lVar4 * 7 + 1] = L"FLinearColor";
    local_68[lVar4 * 7 + 2] = 0;
    (local_68 + lVar4 * 7 + 2)[1] = 0;
    local_68[lVar4 * 7 + 4] = 0;
    (local_68 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar2);
    }
    uVar2 = (uint)uStack_60;
    local_68[lVar4 * 7] = L"Scale";
    local_68[lVar4 * 7 + 1] = L"float";
    local_68[lVar4 * 7 + 2] = 0;
    (local_68 + lVar4 * 7 + 2)[1] = 0;
    local_68[lVar4 * 7 + 4] = 0;
    (local_68 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar2);
    }
    uVar2 = (uint)uStack_60;
    local_68[lVar4 * 7] = L"Thickness";
    local_68[lVar4 * 7 + 1] = L"float";
    local_68[lVar4 * 7 + 2] = 0;
    (local_68 + lVar4 * 7 + 2)[1] = 0;
    local_68[lVar4 * 7 + 4] = 0;
    (local_68 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar2);
    }
    uVar2 = (uint)uStack_60;
    local_68[lVar4 * 7] = L"WorldOffset";
    local_68[lVar4 * 7 + 1] = L"FTransform";
    local_68[lVar4 * 7 + 2] = 0;
    (local_68 + lVar4 * 7 + 2)[1] = 0;
    local_68[lVar4 * 7 + 4] = 0;
    (local_68 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar2);
    }
    local_68[lVar4 * 7] = L"bEnabled";
    local_68[lVar4 * 7 + 1] = L"bool";
    local_68[lVar4 * 7 + 2] = 0;
    (local_68 + lVar4 * 7 + 2)[1] = 0;
    local_68[lVar4 * 7 + 4] = 0;
    (local_68 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc01b18;
    local_50 = &DAT_14cc012d0;
    local_48 = 0x101;
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14cc01670);
    LOCK();
    iVar1 = DAT_14cc0167c + 1;
    UNLOCK();
    bVar5 = DAT_14cc0167c == 0;
    DAT_14cc0167c = iVar1;
    if (bVar5) {
      LOCK();
      *(undefined1 *)(local_50 + 0x75) = (undefined1)local_48;
      UNLOCK();
    }
    local_78 = &local_68;
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_DebugRectangleNoSpace::Execute",FUN_1490fec82,
                  lVar4);
    FUN_1409be446(&local_50);
    FUN_140e03040(local_68,uStack_60 & 0xffffffff);
    if (local_68 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc01b18;
}



// FUNCTION 14668800b FUN_14668800b body=47 status=ok
// SIG undefined FUN_14668800b(void)

longlong FUN_14668800b(void)

{
  if (DAT_14cc01b10 == 0) {
    FUN_14086a14e(&DAT_14cc01b10,&PTR_FUN_14badc708);
  }
  return DAT_14cc01b10;
}



// FUNCTION 14668803a FUN_14668803a body=48 status=ok
// SIG undefined FUN_14668803a(void)

void FUN_14668803a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000210;
  *puVar1 = &PTR_FUN_14bb04380;
  return;
}



// FUNCTION 14668806a FUN_14668806a body=1082 status=ok
// SIG undefined FUN_14668806a(void)

longlong FUN_14668806a(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_98 [32];
  undefined8 **local_78;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 *local_50;
  undefined2 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cc01b30 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc01b30 = FUN_140002ddd(FUN_1466884a5,uVar3,L"RigVMFunction_DebugArc");
    local_68 = (undefined8 *)0x0;
    uStack_60._0_4_ = 1;
    uStack_60._4_4_ = 0;
    FUN_140c0351c(&local_68,0);
    iVar1 = (uint)uStack_60;
    *local_68 = L"Transform";
    local_68[1] = L"FTransform";
    local_68[2] = 0;
    local_68[3] = 0;
    local_68[4] = 0;
    local_68[5] = 0;
    *(undefined1 *)(local_68 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,iVar1);
    }
    uVar2 = (uint)uStack_60;
    local_68[lVar4 * 7] = L"Color";
    local_68[lVar4 * 7 + 1] = L"FLinearColor";
    local_68[lVar4 * 7 + 2] = 0;
    (local_68 + lVar4 * 7 + 2)[1] = 0;
    local_68[lVar4 * 7 + 4] = 0;
    (local_68 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar2);
    }
    uVar2 = (uint)uStack_60;
    local_68[lVar4 * 7] = L"Radius";
    local_68[lVar4 * 7 + 1] = L"float";
    local_68[lVar4 * 7 + 2] = 0;
    (local_68 + lVar4 * 7 + 2)[1] = 0;
    local_68[lVar4 * 7 + 4] = 0;
    (local_68 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar2);
    }
    uVar2 = (uint)uStack_60;
    local_68[lVar4 * 7] = L"MinimumDegrees";
    local_68[lVar4 * 7 + 1] = L"float";
    local_68[lVar4 * 7 + 2] = 0;
    (local_68 + lVar4 * 7 + 2)[1] = 0;
    local_68[lVar4 * 7 + 4] = 0;
    (local_68 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar2);
    }
    uVar2 = (uint)uStack_60;
    local_68[lVar4 * 7] = L"MaximumDegrees";
    local_68[lVar4 * 7 + 1] = L"float";
    local_68[lVar4 * 7 + 2] = 0;
    (local_68 + lVar4 * 7 + 2)[1] = 0;
    local_68[lVar4 * 7 + 4] = 0;
    (local_68 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar2);
    }
    uVar2 = (uint)uStack_60;
    local_68[lVar4 * 7] = L"Thickness";
    local_68[lVar4 * 7 + 1] = L"float";
    local_68[lVar4 * 7 + 2] = 0;
    (local_68 + lVar4 * 7 + 2)[1] = 0;
    local_68[lVar4 * 7 + 4] = 0;
    (local_68 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar2);
    }
    uVar2 = (uint)uStack_60;
    local_68[lVar4 * 7] = L"Detail";
    local_68[lVar4 * 7 + 1] = L"int32";
    local_68[lVar4 * 7 + 2] = 0;
    (local_68 + lVar4 * 7 + 2)[1] = 0;
    local_68[lVar4 * 7 + 4] = 0;
    (local_68 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar2);
    }
    uVar2 = (uint)uStack_60;
    local_68[lVar4 * 7] = L"Space";
    local_68[lVar4 * 7 + 1] = L"FName";
    local_68[lVar4 * 7 + 2] = 0;
    (local_68 + lVar4 * 7 + 2)[1] = 0;
    local_68[lVar4 * 7 + 4] = 0;
    (local_68 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar2);
    }
    uVar2 = (uint)uStack_60;
    local_68[lVar4 * 7] = L"WorldOffset";
    local_68[lVar4 * 7 + 1] = L"FTransform";
    local_68[lVar4 * 7 + 2] = 0;
    (local_68 + lVar4 * 7 + 2)[1] = 0;
    local_68[lVar4 * 7 + 4] = 0;
    (local_68 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar2);
    }
    local_68[lVar4 * 7] = L"bEnabled";
    local_68[lVar4 * 7 + 1] = L"bool";
    local_68[lVar4 * 7 + 2] = 0;
    (local_68 + lVar4 * 7 + 2)[1] = 0;
    local_68[lVar4 * 7 + 4] = 0;
    (local_68 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc01b30;
    local_50 = &DAT_14cc012d0;
    local_48 = 0x101;
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14cc01670);
    LOCK();
    iVar1 = DAT_14cc0167c + 1;
    UNLOCK();
    bVar5 = DAT_14cc0167c == 0;
    DAT_14cc0167c = iVar1;
    if (bVar5) {
      LOCK();
      *(undefined1 *)(local_50 + 0x75) = (undefined1)local_48;
      UNLOCK();
    }
    local_78 = &local_68;
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_DebugArc::Execute",FUN_1490fed48,lVar4);
    FUN_1409be446(&local_50);
    FUN_140e03040(local_68,uStack_60 & 0xffffffff);
    if (local_68 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc01b30;
}



// FUNCTION 1466884a5 FUN_1466884a5 body=47 status=ok
// SIG undefined FUN_1466884a5(void)

longlong FUN_1466884a5(void)

{
  if (DAT_14cc01b28 == 0) {
    FUN_14086a14e(&DAT_14cc01b28,&PTR_FUN_14badcad8);
  }
  return DAT_14cc01b28;
}



// FUNCTION 1466884d4 FUN_1466884d4 body=48 status=ok
// SIG undefined FUN_1466884d4(void)

void FUN_1466884d4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000220;
  *puVar1 = &PTR_FUN_14bb044e0;
  return;
}



// FUNCTION 146688504 FUN_146688504 body=996 status=ok
// SIG undefined FUN_146688504(void)

longlong FUN_146688504(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_98 [32];
  undefined8 **local_78;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 *local_50;
  undefined2 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cc01b48 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc01b48 = FUN_140002ddd(FUN_1466888e9,uVar3,L"RigVMFunction_DebugArcNoSpace");
    local_68 = (undefined8 *)0x0;
    uStack_60._0_4_ = 1;
    uStack_60._4_4_ = 0;
    FUN_140c0351c(&local_68,0);
    iVar1 = (uint)uStack_60;
    *local_68 = L"Transform";
    local_68[1] = L"FTransform";
    local_68[2] = 0;
    local_68[3] = 0;
    local_68[4] = 0;
    local_68[5] = 0;
    *(undefined1 *)(local_68 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,iVar1);
    }
    uVar2 = (uint)uStack_60;
    local_68[lVar4 * 7] = L"Color";
    local_68[lVar4 * 7 + 1] = L"FLinearColor";
    local_68[lVar4 * 7 + 2] = 0;
    (local_68 + lVar4 * 7 + 2)[1] = 0;
    local_68[lVar4 * 7 + 4] = 0;
    (local_68 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar2);
    }
    uVar2 = (uint)uStack_60;
    local_68[lVar4 * 7] = L"Radius";
    local_68[lVar4 * 7 + 1] = L"float";
    local_68[lVar4 * 7 + 2] = 0;
    (local_68 + lVar4 * 7 + 2)[1] = 0;
    local_68[lVar4 * 7 + 4] = 0;
    (local_68 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar2);
    }
    uVar2 = (uint)uStack_60;
    local_68[lVar4 * 7] = L"MinimumDegrees";
    local_68[lVar4 * 7 + 1] = L"float";
    local_68[lVar4 * 7 + 2] = 0;
    (local_68 + lVar4 * 7 + 2)[1] = 0;
    local_68[lVar4 * 7 + 4] = 0;
    (local_68 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar2);
    }
    uVar2 = (uint)uStack_60;
    local_68[lVar4 * 7] = L"MaximumDegrees";
    local_68[lVar4 * 7 + 1] = L"float";
    local_68[lVar4 * 7 + 2] = 0;
    (local_68 + lVar4 * 7 + 2)[1] = 0;
    local_68[lVar4 * 7 + 4] = 0;
    (local_68 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar2);
    }
    uVar2 = (uint)uStack_60;
    local_68[lVar4 * 7] = L"Thickness";
    local_68[lVar4 * 7 + 1] = L"float";
    local_68[lVar4 * 7 + 2] = 0;
    (local_68 + lVar4 * 7 + 2)[1] = 0;
    local_68[lVar4 * 7 + 4] = 0;
    (local_68 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar2);
    }
    uVar2 = (uint)uStack_60;
    local_68[lVar4 * 7] = L"Detail";
    local_68[lVar4 * 7 + 1] = L"int32";
    local_68[lVar4 * 7 + 2] = 0;
    (local_68 + lVar4 * 7 + 2)[1] = 0;
    local_68[lVar4 * 7 + 4] = 0;
    (local_68 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar2);
    }
    uVar2 = (uint)uStack_60;
    local_68[lVar4 * 7] = L"WorldOffset";
    local_68[lVar4 * 7 + 1] = L"FTransform";
    local_68[lVar4 * 7 + 2] = 0;
    (local_68 + lVar4 * 7 + 2)[1] = 0;
    local_68[lVar4 * 7 + 4] = 0;
    (local_68 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar2);
    }
    local_68[lVar4 * 7] = L"bEnabled";
    local_68[lVar4 * 7 + 1] = L"bool";
    local_68[lVar4 * 7 + 2] = 0;
    (local_68 + lVar4 * 7 + 2)[1] = 0;
    local_68[lVar4 * 7 + 4] = 0;
    (local_68 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc01b48;
    local_50 = &DAT_14cc012d0;
    local_48 = 0x101;
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14cc01670);
    LOCK();
    iVar1 = DAT_14cc0167c + 1;
    UNLOCK();
    bVar5 = DAT_14cc0167c == 0;
    DAT_14cc0167c = iVar1;
    if (bVar5) {
      LOCK();
      *(undefined1 *)(local_50 + 0x75) = (undefined1)local_48;
      UNLOCK();
    }
    local_78 = &local_68;
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_DebugArcNoSpace::Execute",FUN_1490fee98,lVar4);
    FUN_1409be446(&local_50);
    FUN_140e03040(local_68,uStack_60 & 0xffffffff);
    if (local_68 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc01b48;
}



// FUNCTION 1466888e9 FUN_1466888e9 body=47 status=ok
// SIG undefined FUN_1466888e9(void)

longlong FUN_1466888e9(void)

{
  if (DAT_14cc01b40 == 0) {
    FUN_14086a14e(&DAT_14cc01b40,&PTR_FUN_14badce28);
  }
  return DAT_14cc01b40;
}



// FUNCTION 146688918 FUN_146688918 body=48 status=ok
// SIG undefined FUN_146688918(void)

void FUN_146688918(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000220;
  *puVar1 = &PTR_FUN_14bb046c0;
  return;
}



// FUNCTION 146688948 FUN_146688948 body=668 status=ok
// SIG undefined FUN_146688948(void)

longlong FUN_146688948(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc01b60 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc01b60 = FUN_140002ddd(FUN_146688be5,uVar3,L"RigVMFunction_DebugBoxNoSpace");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e3c97a;
    local_58[1] = L"FBox";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,iVar1);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"Color";
    local_58[lVar4 * 7 + 1] = L"FLinearColor";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"Thickness";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"WorldOffset";
    local_58[lVar4 * 7 + 1] = L"FTransform";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    local_58[lVar4 * 7] = L"bEnabled";
    local_58[lVar4 * 7 + 1] = L"bool";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc01b60;
    local_40 = &DAT_14cc012d0;
    local_38 = 0x101;
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14cc01670);
    LOCK();
    iVar1 = DAT_14cc0167c + 1;
    UNLOCK();
    bVar5 = DAT_14cc0167c == 0;
    DAT_14cc0167c = iVar1;
    if (bVar5) {
      LOCK();
      *(undefined1 *)(local_40 + 0x75) = (undefined1)local_38;
      UNLOCK();
    }
    local_68 = &local_58;
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_DebugBoxNoSpace::Execute",FUN_1490fefe8,lVar4);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc01b60;
}



// FUNCTION 146688be5 FUN_146688be5 body=47 status=ok
// SIG undefined FUN_146688be5(void)

longlong FUN_146688be5(void)

{
  if (DAT_14cc01b58 == 0) {
    FUN_14086a14e(&DAT_14cc01b58,&PTR_FUN_14badd078);
  }
  return DAT_14cc01b58;
}



// FUNCTION 146688c14 FUN_146688c14 body=48 status=ok
// SIG undefined FUN_146688c14(void)

void FUN_146688c14(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000001e0;
  *puVar1 = &PTR_FUN_14bb04820;
  return;
}



// FUNCTION 146688c44 FUN_146688c44 body=49 status=ok
// SIG undefined FUN_146688c44(void)

longlong FUN_146688c44(void)

{
  if (DAT_14cc01b70 == 0) {
    FUN_1409ce572(&DAT_14cc01b70,&PTR_FUN_14badd1e0);
  }
  return DAT_14cc01b70;
}



// FUNCTION 146688c76 FUN_146688c76 body=835 status=ok
// SIG undefined FUN_146688c76(void)

longlong FUN_146688c76(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_98 [32];
  undefined8 **local_78;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 *local_50;
  undefined2 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cc01b90 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc01b90 = FUN_140002ddd(FUN_146688fba,uVar3,L"RigVMFunction_DebugTransformMutableNoSpace")
    ;
    local_68 = (undefined8 *)0x0;
    uStack_60._0_4_ = 1;
    uStack_60._4_4_ = 0;
    FUN_140c0351c(&local_68,0);
    iVar1 = (uint)uStack_60;
    *local_68 = L"Transform";
    local_68[1] = L"FTransform";
    local_68[2] = 0;
    local_68[3] = 0;
    local_68[4] = 0;
    local_68[5] = 0;
    *(undefined1 *)(local_68 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,iVar1);
    }
    uVar2 = (uint)uStack_60;
    local_68[lVar4 * 7] = L"Mode";
    local_68[lVar4 * 7 + 1] = L"ERigUnitDebugTransformMode";
    local_68[lVar4 * 7 + 2] = 0;
    (local_68 + lVar4 * 7 + 2)[1] = 0;
    local_68[lVar4 * 7 + 4] = 0;
    (local_68 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar2);
    }
    uVar2 = (uint)uStack_60;
    local_68[lVar4 * 7] = L"Color";
    local_68[lVar4 * 7 + 1] = L"FLinearColor";
    local_68[lVar4 * 7 + 2] = 0;
    (local_68 + lVar4 * 7 + 2)[1] = 0;
    local_68[lVar4 * 7 + 4] = 0;
    (local_68 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar2);
    }
    uVar2 = (uint)uStack_60;
    local_68[lVar4 * 7] = L"Thickness";
    local_68[lVar4 * 7 + 1] = L"float";
    local_68[lVar4 * 7 + 2] = 0;
    (local_68 + lVar4 * 7 + 2)[1] = 0;
    local_68[lVar4 * 7 + 4] = 0;
    (local_68 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar2);
    }
    uVar2 = (uint)uStack_60;
    local_68[lVar4 * 7] = L"Scale";
    local_68[lVar4 * 7 + 1] = L"float";
    local_68[lVar4 * 7 + 2] = 0;
    (local_68 + lVar4 * 7 + 2)[1] = 0;
    local_68[lVar4 * 7 + 4] = 0;
    (local_68 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar2);
    }
    uVar2 = (uint)uStack_60;
    local_68[lVar4 * 7] = L"WorldOffset";
    local_68[lVar4 * 7 + 1] = L"FTransform";
    local_68[lVar4 * 7 + 2] = 0;
    (local_68 + lVar4 * 7 + 2)[1] = 0;
    local_68[lVar4 * 7 + 4] = 0;
    (local_68 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar2);
    }
    local_68[lVar4 * 7] = L"bEnabled";
    local_68[lVar4 * 7 + 1] = L"bool";
    local_68[lVar4 * 7 + 2] = 0;
    (local_68 + lVar4 * 7 + 2)[1] = 0;
    local_68[lVar4 * 7 + 4] = 0;
    (local_68 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc01b90;
    local_50 = &DAT_14cc012d0;
    local_48 = 0x101;
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14cc01670);
    LOCK();
    iVar1 = DAT_14cc0167c + 1;
    UNLOCK();
    bVar5 = DAT_14cc0167c == 0;
    DAT_14cc0167c = iVar1;
    if (bVar5) {
      LOCK();
      *(undefined1 *)(local_50 + 0x75) = (undefined1)local_48;
      UNLOCK();
    }
    local_78 = &local_68;
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_DebugTransformMutableNoSpace::Execute",
                  FUN_1490ff87e,lVar4);
    FUN_1409be446(&local_50);
    FUN_140e03040(local_68,uStack_60 & 0xffffffff);
    if (local_68 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc01b90;
}



// FUNCTION 146688fba FUN_146688fba body=47 status=ok
// SIG undefined FUN_146688fba(void)

longlong FUN_146688fba(void)

{
  if (DAT_14cc01b88 == 0) {
    FUN_14086a14e(&DAT_14cc01b88,&PTR_FUN_14badd570);
  }
  return DAT_14cc01b88;
}



// FUNCTION 146688fea FUN_146688fea body=48 status=ok
// SIG undefined FUN_146688fea(void)

void FUN_146688fea(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000210;
  *puVar1 = &PTR_FUN_14bb04b80;
  return;
}



// FUNCTION 14668901a FUN_14668901a body=55 status=ok
// SIG undefined FUN_14668901a(void)

void FUN_14668901a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc01ba8 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc01ba8 =
         FUN_140002ddd(FUN_146689051,uVar1,L"RigVMFunction_DebugTransformArrayMutable_WorkData");
  }
  return;
}



// FUNCTION 146689051 FUN_146689051 body=47 status=ok
// SIG undefined FUN_146689051(void)

longlong FUN_146689051(void)

{
  if (DAT_14cc01ba0 == 0) {
    FUN_14086a14e(&DAT_14cc01ba0,&PTR_FUN_14badd6e8);
  }
  return DAT_14cc01ba0;
}



// FUNCTION 146689080 FUN_146689080 body=48 status=ok
// SIG undefined FUN_146689080(void)

void FUN_146689080(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb04d60;
  return;
}



// FUNCTION 1466890b0 FUN_1466890b0 body=924 status=ok
// SIG undefined FUN_1466890b0(void)

longlong FUN_1466890b0(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc01bc0 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc01bc0 =
         FUN_140002ddd(FUN_14668944d,uVar3,L"RigVMFunction_DebugTransformArrayMutableNoSpace");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"Transforms";
    local_58[1] = L"TArray<FTransform>";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,iVar1);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"ParentIndices";
    local_58[lVar4 * 7 + 1] = L"TArray<int32>";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"Mode";
    local_58[lVar4 * 7 + 1] = L"ERigUnitDebugTransformMode";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"Color";
    local_58[lVar4 * 7 + 1] = L"FLinearColor";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"Thickness";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"Scale";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"WorldOffset";
    local_58[lVar4 * 7 + 1] = L"FTransform";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    local_58[lVar4 * 7] = L"bEnabled";
    local_58[lVar4 * 7 + 1] = L"bool";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc01bc0;
    local_40 = &DAT_14cc012d0;
    local_38 = 0x101;
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14cc01670);
    LOCK();
    iVar1 = DAT_14cc0167c + 1;
    UNLOCK();
    bVar5 = DAT_14cc0167c == 0;
    DAT_14cc0167c = iVar1;
    if (bVar5) {
      LOCK();
      *(undefined1 *)(local_40 + 0x75) = (undefined1)local_38;
      UNLOCK();
    }
    local_68 = &local_58;
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_DebugTransformArrayMutableNoSpace::Execute",
                  FUN_1490ffa7c,lVar4);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc01bc0;
}



// FUNCTION 14668944d FUN_14668944d body=47 status=ok
// SIG undefined FUN_14668944d(void)

longlong FUN_14668944d(void)

{
  if (DAT_14cc01bb8 == 0) {
    FUN_14086a14e(&DAT_14cc01bb8,&PTR_FUN_14baddb58);
  }
  return DAT_14cc01bb8;
}



// FUNCTION 14668947c FUN_14668947c body=48 status=ok
// SIG undefined FUN_14668947c(void)

void FUN_14668947c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000001d0;
  *puVar1 = &PTR_FUN_14bb04ec0;
  return;
}



// FUNCTION 1466894ac FUN_1466894ac body=49 status=ok
// SIG undefined FUN_1466894ac(void)

longlong FUN_1466894ac(void)

{
  if (DAT_14cc01bd0 == 0) {
    FUN_1409ce572(&DAT_14cc01bd0,&PTR_FUN_14baddc80);
  }
  return DAT_14cc01bd0;
}



// FUNCTION 1466894de FUN_1466894de body=838 status=ok
// SIG undefined FUN_1466894de(void)

longlong FUN_1466894de(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc01bf0 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc01bf0 = FUN_140002ddd(FUN_146689825,uVar3,L"RigVMFunction_VisualDebugVector");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"FVector";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,iVar1);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"bEnabled";
    local_58[lVar4 * 7 + 1] = L"bool";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"Mode";
    local_58[lVar4 * 7 + 1] = L"ERigUnitVisualDebugPointMode";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"Color";
    local_58[lVar4 * 7 + 1] = L"FLinearColor";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"Thickness";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"Scale";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    local_58[lVar4 * 7] = L"BoneSpace";
    local_58[lVar4 * 7 + 1] = L"FName";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc01bf0;
    local_40 = &DAT_14cc012d0;
    local_38 = 0x101;
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14cc01670);
    LOCK();
    iVar1 = DAT_14cc0167c + 1;
    UNLOCK();
    bVar5 = DAT_14cc0167c == 0;
    DAT_14cc0167c = iVar1;
    if (bVar5) {
      LOCK();
      *(undefined1 *)(local_40 + 0x75) = (undefined1)local_38;
      UNLOCK();
    }
    local_68 = &local_58;
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_VisualDebugVector::Execute",FUN_1490ffda4,lVar4);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc01bf0;
}



// FUNCTION 146689825 FUN_146689825 body=47 status=ok
// SIG undefined FUN_146689825(void)

longlong FUN_146689825(void)

{
  if (DAT_14cc01be8 == 0) {
    FUN_14086a14e(&DAT_14cc01be8,&PTR_FUN_14baddfd0);
  }
  return DAT_14cc01be8;
}



// FUNCTION 146689854 FUN_146689854 body=48 status=ok
// SIG undefined FUN_146689854(void)

void FUN_146689854(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000048;
  *puVar1 = &PTR_FUN_14bb05110;
  return;
}



// FUNCTION 146689884 FUN_146689884 body=749 status=ok
// SIG undefined FUN_146689884(void)

longlong FUN_146689884(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc01c08 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc01c08 = FUN_140002ddd(FUN_146689b72,uVar3,L"RigVMFunction_VisualDebugVectorNoSpace");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"FVector";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,iVar1);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"bEnabled";
    local_58[lVar4 * 7 + 1] = L"bool";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"Mode";
    local_58[lVar4 * 7 + 1] = L"ERigUnitVisualDebugPointMode";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"Color";
    local_58[lVar4 * 7 + 1] = L"FLinearColor";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"Thickness";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    local_58[lVar4 * 7] = L"Scale";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc01c08;
    local_40 = &DAT_14cc012d0;
    local_38 = 0x101;
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14cc01670);
    LOCK();
    iVar1 = DAT_14cc0167c + 1;
    UNLOCK();
    bVar5 = DAT_14cc0167c == 0;
    DAT_14cc0167c = iVar1;
    if (bVar5) {
      LOCK();
      *(undefined1 *)(local_40 + 0x75) = (undefined1)local_38;
      UNLOCK();
    }
    local_68 = &local_58;
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_VisualDebugVectorNoSpace::Execute",FUN_1490fff08,
                  lVar4);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc01c08;
}



// FUNCTION 146689b72 FUN_146689b72 body=47 status=ok
// SIG undefined FUN_146689b72(void)

longlong FUN_146689b72(void)

{
  if (DAT_14cc01c00 == 0) {
    FUN_14086a14e(&DAT_14cc01c00,&PTR_FUN_14bade2d0);
  }
  return DAT_14cc01c00;
}



// FUNCTION 146689ba2 FUN_146689ba2 body=48 status=ok
// SIG undefined FUN_146689ba2(void)

void FUN_146689ba2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14bb05270;
  return;
}



// FUNCTION 146689bd2 FUN_146689bd2 body=663 status=ok
// SIG undefined FUN_146689bd2(void)

longlong FUN_146689bd2(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc01c20 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc01c20 = FUN_140002ddd(FUN_146689e6a,uVar3,L"RigVMFunction_VisualDebugQuat");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"FQuat";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,iVar1);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"bEnabled";
    local_58[lVar4 * 7 + 1] = L"bool";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"Thickness";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"Scale";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    local_58[lVar4 * 7] = L"BoneSpace";
    local_58[lVar4 * 7 + 1] = L"FName";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc01c20;
    local_40 = &DAT_14cc012d0;
    local_38 = 0x101;
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14cc01670);
    LOCK();
    iVar1 = DAT_14cc0167c + 1;
    UNLOCK();
    bVar5 = DAT_14cc0167c == 0;
    DAT_14cc0167c = iVar1;
    if (bVar5) {
      LOCK();
      *(undefined1 *)(local_40 + 0x75) = (undefined1)local_38;
      UNLOCK();
    }
    local_68 = &local_58;
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_VisualDebugQuat::Execute",FUN_149100200,lVar4);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc01c20;
}



// FUNCTION 146689e6a FUN_146689e6a body=47 status=ok
// SIG undefined FUN_146689e6a(void)

longlong FUN_146689e6a(void)

{
  if (DAT_14cc01c18 == 0) {
    FUN_14086a14e(&DAT_14cc01c18,&PTR_FUN_14bade508);
  }
  return DAT_14cc01c18;
}



// FUNCTION 146689e9a FUN_146689e9a body=48 status=ok
// SIG undefined FUN_146689e9a(void)

void FUN_146689e9a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000050;
  *puVar1 = &PTR_FUN_14bb053d0;
  return;
}



// FUNCTION 146689eca FUN_146689eca body=583 status=ok
// SIG undefined FUN_146689eca(void)

longlong FUN_146689eca(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc01c38 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc01c38 = FUN_140002ddd(FUN_14668a112,uVar3,L"RigVMFunction_VisualDebugQuatNoSpace");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"FQuat";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,iVar1);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"bEnabled";
    local_58[lVar4 * 7 + 1] = L"bool";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"Thickness";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    local_58[lVar4 * 7] = L"Scale";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc01c38;
    local_40 = &DAT_14cc012d0;
    local_38 = 0x101;
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14cc01670);
    LOCK();
    iVar1 = DAT_14cc0167c + 1;
    UNLOCK();
    bVar5 = DAT_14cc0167c == 0;
    DAT_14cc0167c = iVar1;
    if (bVar5) {
      LOCK();
      *(undefined1 *)(local_40 + 0x75) = (undefined1)local_38;
      UNLOCK();
    }
    local_68 = &local_58;
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_VisualDebugQuatNoSpace::Execute",FUN_1491003bc,
                  lVar4);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc01c38;
}



// FUNCTION 14668a112 FUN_14668a112 body=47 status=ok
// SIG undefined FUN_14668a112(void)

longlong FUN_14668a112(void)

{
  if (DAT_14cc01c30 == 0) {
    FUN_14086a14e(&DAT_14cc01c30,&PTR_FUN_14bade728);
  }
  return DAT_14cc01c30;
}



// FUNCTION 14668a142 FUN_14668a142 body=48 status=ok
// SIG undefined FUN_14668a142(void)

void FUN_14668a142(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000040;
  *puVar1 = &PTR_FUN_14bb055b0;
  return;
}



// FUNCTION 14668a172 FUN_14668a172 body=663 status=ok
// SIG undefined FUN_14668a172(void)

longlong FUN_14668a172(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc01c50 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc01c50 = FUN_140002ddd(FUN_14668a40a,uVar3,L"RigVMFunction_VisualDebugTransform");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"FTransform";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,iVar1);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"bEnabled";
    local_58[lVar4 * 7 + 1] = L"bool";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"Thickness";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"Scale";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    local_58[lVar4 * 7] = L"BoneSpace";
    local_58[lVar4 * 7 + 1] = L"FName";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc01c50;
    local_40 = &DAT_14cc012d0;
    local_38 = 0x101;
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14cc01670);
    LOCK();
    iVar1 = DAT_14cc0167c + 1;
    UNLOCK();
    bVar5 = DAT_14cc0167c == 0;
    DAT_14cc0167c = iVar1;
    if (bVar5) {
      LOCK();
      *(undefined1 *)(local_40 + 0x75) = (undefined1)local_38;
      UNLOCK();
    }
    local_68 = &local_58;
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_VisualDebugTransform::Execute",FUN_149100578,lVar4
                 );
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc01c50;
}



// FUNCTION 14668a40a FUN_14668a40a body=47 status=ok
// SIG undefined FUN_14668a40a(void)

longlong FUN_14668a40a(void)

{
  if (DAT_14cc01c48 == 0) {
    FUN_14086a14e(&DAT_14cc01c48,&PTR_FUN_14bade980);
  }
  return DAT_14cc01c48;
}



// FUNCTION 14668a43a FUN_14668a43a body=48 status=ok
// SIG undefined FUN_14668a43a(void)

void FUN_14668a43a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000090;
  *puVar1 = &PTR_FUN_14bb05710;
  return;
}



// FUNCTION 14668a46a FUN_14668a46a body=583 status=ok
// SIG undefined FUN_14668a46a(void)

longlong FUN_14668a46a(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc01c68 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc01c68 = FUN_140002ddd(FUN_14668a6b2,uVar3,L"RigVMFunction_VisualDebugTransformNoSpace");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"FTransform";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,iVar1);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"bEnabled";
    local_58[lVar4 * 7 + 1] = L"bool";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"Thickness";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    local_58[lVar4 * 7] = L"Scale";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc01c68;
    local_40 = &DAT_14cc012d0;
    local_38 = 0x101;
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14cc01670);
    LOCK();
    iVar1 = DAT_14cc0167c + 1;
    UNLOCK();
    bVar5 = DAT_14cc0167c == 0;
    DAT_14cc0167c = iVar1;
    if (bVar5) {
      LOCK();
      *(undefined1 *)(local_40 + 0x75) = (undefined1)local_38;
      UNLOCK();
    }
    local_68 = &local_58;
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_VisualDebugTransformNoSpace::Execute",
                  FUN_1491006ae,lVar4);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc01c68;
}



// FUNCTION 14668a6b2 FUN_14668a6b2 body=47 status=ok
// SIG undefined FUN_14668a6b2(void)

longlong FUN_14668a6b2(void)

{
  if (DAT_14cc01c60 == 0) {
    FUN_14086a14e(&DAT_14cc01c60,&PTR_FUN_14badebc0);
  }
  return DAT_14cc01c60;
}



// FUNCTION 14668a6e2 FUN_14668a6e2 body=48 status=ok
// SIG undefined FUN_14668a6e2(void)

void FUN_14668a6e2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000080;
  *puVar1 = &PTR_FUN_14bb058f0;
  return;
}



// FUNCTION 14668a712 FUN_14668a712 body=583 status=ok
// SIG undefined FUN_14668a712(void)

longlong FUN_14668a712(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc01d60 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc01d60 = FUN_140002ddd(FUN_14668a95a,uVar3,L"RigVMFunction_ForLoopCount");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"BlockToRun";
    local_58[1] = L"FName";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,iVar1);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"Count";
    local_58[lVar4 * 7 + 1] = L"int32";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"Index";
    local_58[lVar4 * 7 + 1] = L"int32";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    lVar4 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar2);
    }
    local_58[lVar4 * 7] = L"Ratio";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc01d60;
    local_40 = &DAT_14cc012d0;
    local_38 = 0x101;
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14cc01670);
    LOCK();
    iVar1 = DAT_14cc0167c + 1;
    UNLOCK();
    bVar5 = DAT_14cc0167c == 0;
    DAT_14cc0167c = iVar1;
    if (bVar5) {
      LOCK();
      *(undefined1 *)(local_40 + 0x75) = (undefined1)local_38;
      UNLOCK();
    }
    local_68 = &local_58;
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_ForLoopCount::Execute",&LAB_149100e80,lVar4);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc01d60;
}



// FUNCTION 14668a95a FUN_14668a95a body=47 status=ok
// SIG undefined FUN_14668a95a(void)

longlong FUN_14668a95a(void)

{
  if (DAT_14cc01d58 == 0) {
    FUN_14086a14e(&DAT_14cc01d58,&PTR_FUN_14badef18);
  }
  return DAT_14cc01d58;
}



// FUNCTION 14668a98a FUN_14668a98a body=48 status=ok
// SIG undefined FUN_14668a98a(void)

void FUN_14668a98a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000250;
  *puVar1 = &PTR_FUN_14bb05bd0;
  return;
}



// FUNCTION 14668a9ba FUN_14668a9ba body=328 status=ok
// SIG undefined FUN_14668a9ba(void)

longlong FUN_14668a9ba(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  ulonglong uStack_50;
  undefined8 *local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc01d78 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc01d78 = FUN_140002ddd(FUN_14668ab03,uVar3,L"RigVMFunction_UserDefinedEvent");
    local_58 = (undefined8 *)0x0;
    uStack_50 = 1;
    FUN_140c0351c(&local_58,0);
    *local_58 = L"EventName";
    local_58[1] = L"FName";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    FUN_14001a7b2();
    lVar2 = DAT_14cc01d78;
    local_40 = &DAT_14cc012d0;
    local_38 = 0x101;
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14cc01670);
    LOCK();
    iVar1 = DAT_14cc0167c + 1;
    UNLOCK();
    bVar4 = DAT_14cc0167c == 0;
    DAT_14cc0167c = iVar1;
    if (bVar4) {
      LOCK();
      *(undefined1 *)(local_40 + 0x75) = (undefined1)local_38;
      UNLOCK();
    }
    local_68 = &local_58;
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_UserDefinedEvent::Execute",&LAB_149100fb2,lVar2);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc01d78;
}



// FUNCTION 14668ab03 FUN_14668ab03 body=47 status=ok
// SIG undefined FUN_14668ab03(void)

longlong FUN_14668ab03(void)

{
  if (DAT_14cc01d70 == 0) {
    FUN_14086a14e(&DAT_14cc01d70,&PTR_FUN_14badf0d0);
  }
  return DAT_14cc01d70;
}



// FUNCTION 14668ab32 FUN_14668ab32 body=48 status=ok
// SIG undefined FUN_14668ab32(void)

void FUN_14668ab32(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000130;
  *puVar1 = &PTR_FUN_14bb05db0;
  return;
}



// FUNCTION 14668ab62 FUN_14668ab62 body=55 status=ok
// SIG undefined FUN_14668ab62(void)

void FUN_14668ab62(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc01da8 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc01da8 = FUN_140002ddd(FUN_14668ab99,uVar1,L"RigVMFunction_MathBoolBase");
  }
  return;
}



// FUNCTION 14668ab99 FUN_14668ab99 body=49 status=ok
// SIG undefined FUN_14668ab99(void)

longlong FUN_14668ab99(void)

{
  if (DAT_14cc01da0 == 0) {
    FUN_14086a14e(&DAT_14cc01da0,&PTR_FUN_14badf1a8);
  }
  return DAT_14cc01da0;
}


