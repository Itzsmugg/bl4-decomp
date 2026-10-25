// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146fbb2f6 FUN_146fbb2f6 body=38 status=ok
// SIG undefined FUN_146fbb2f6(void)

undefined8 FUN_146fbb2f6(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fbb31c FUN_146fbb31c body=38 status=ok
// SIG undefined FUN_146fbb31c(void)

undefined8 FUN_146fbb31c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDataflowMathCubeNode",1);
  return param_2;
}



// FUNCTION 146fbb342 FUN_146fbb342 body=38 status=ok
// SIG undefined FUN_146fbb342(void)

undefined8 FUN_146fbb342(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,&DAT_149fb8616,1);
  return param_2;
}



// FUNCTION 146fbb368 FUN_146fbb368 body=38 status=ok
// SIG undefined FUN_146fbb368(void)

undefined8 FUN_146fbb368(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Scalar",1);
  return param_2;
}



// FUNCTION 146fbb38e FUN_146fbb38e body=32 status=ok
// SIG undefined FUN_146fbb38e(void)

undefined8 FUN_146fbb38e(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 146fbb3ae FUN_146fbb3ae body=123 status=ok
// SIG undefined FUN_146fbb3ae(void)

void FUN_146fbb3ae(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14c99c9e8 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99c9e8 = FUN_140002ddd(FUN_146290a69,uVar1,L"DataflowMathCubeNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14c99c9e8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146fbb426. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 146fbb42a FUN_146fbb42a body=93 status=ok
// SIG undefined FUN_146fbb42a(void)

void FUN_146fbb42a(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14c99c9e8 == 0) {
    uVar2 = FUN_140d02f86();
    DAT_14c99c9e8 = FUN_140002ddd(FUN_146290a69,uVar2,L"DataflowMathCubeNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14c99c9e8,param_1);
  return;
}



// FUNCTION 146fbb488 FUN_146fbb488 body=55 status=ok
// SIG undefined FUN_146fbb488(void)

void FUN_146fbb488(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99c9e8 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99c9e8 = FUN_140002ddd(FUN_146290a69,uVar1,L"DataflowMathCubeNode");
  }
  return;
}



// FUNCTION 146fbb4c0 FUN_146fbb4c0 body=233 status=ok
// SIG undefined FUN_146fbb4c0(void)

ulonglong FUN_146fbb4c0(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FDataflowMathCubeNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_146fbb55a;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_146fbb55a;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_146fbb55a;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_146fbb55a:
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



// FUNCTION 146fbb5aa FUN_146fbb5aa body=38 status=ok
// SIG undefined FUN_146fbb5aa(void)

undefined8 FUN_146fbb5aa(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fbb5d0 FUN_146fbb5d0 body=38 status=ok
// SIG undefined FUN_146fbb5d0(void)

undefined8 FUN_146fbb5d0(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDataflowMathSquareRootNode",1);
  return param_2;
}



// FUNCTION 146fbb5f6 FUN_146fbb5f6 body=38 status=ok
// SIG undefined FUN_146fbb5f6(void)

undefined8 FUN_146fbb5f6(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"SquareRoot",1);
  return param_2;
}



// FUNCTION 146fbb61c FUN_146fbb61c body=38 status=ok
// SIG undefined FUN_146fbb61c(void)

undefined8 FUN_146fbb61c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Scalar",1);
  return param_2;
}



// FUNCTION 146fbb642 FUN_146fbb642 body=32 status=ok
// SIG undefined FUN_146fbb642(void)

undefined8 FUN_146fbb642(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 146fbb662 FUN_146fbb662 body=123 status=ok
// SIG undefined FUN_146fbb662(void)

void FUN_146fbb662(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14c99ca00 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99ca00 = FUN_140002ddd(FUN_146290aff,uVar1,L"DataflowMathSquareRootNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14c99ca00,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146fbb6da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 146fbb6de FUN_146fbb6de body=93 status=ok
// SIG undefined FUN_146fbb6de(void)

void FUN_146fbb6de(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14c99ca00 == 0) {
    uVar2 = FUN_140d02f86();
    DAT_14c99ca00 = FUN_140002ddd(FUN_146290aff,uVar2,L"DataflowMathSquareRootNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14c99ca00,param_1);
  return;
}



// FUNCTION 146fbb73c FUN_146fbb73c body=55 status=ok
// SIG undefined FUN_146fbb73c(void)

void FUN_146fbb73c(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99ca00 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99ca00 = FUN_140002ddd(FUN_146290aff,uVar1,L"DataflowMathSquareRootNode");
  }
  return;
}



// FUNCTION 146fbb774 FUN_146fbb774 body=233 status=ok
// SIG undefined FUN_146fbb774(void)

ulonglong FUN_146fbb774(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FDataflowMathSquareRootNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_146fbb80e;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_146fbb80e;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_146fbb80e;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_146fbb80e:
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



// FUNCTION 146fbb85e FUN_146fbb85e body=38 status=ok
// SIG undefined FUN_146fbb85e(void)

undefined8 FUN_146fbb85e(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fbb884 FUN_146fbb884 body=38 status=ok
// SIG undefined FUN_146fbb884(void)

undefined8 FUN_146fbb884(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDataflowMathInverseSquareRootNode",1);
  return param_2;
}



// FUNCTION 146fbb8aa FUN_146fbb8aa body=38 status=ok
// SIG undefined FUN_146fbb8aa(void)

undefined8 FUN_146fbb8aa(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"InverseSquareRoot",1);
  return param_2;
}



// FUNCTION 146fbb8d0 FUN_146fbb8d0 body=38 status=ok
// SIG undefined FUN_146fbb8d0(void)

undefined8 FUN_146fbb8d0(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Scalar",1);
  return param_2;
}



// FUNCTION 146fbb8f6 FUN_146fbb8f6 body=32 status=ok
// SIG undefined FUN_146fbb8f6(void)

undefined8 FUN_146fbb8f6(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 146fbb916 FUN_146fbb916 body=123 status=ok
// SIG undefined FUN_146fbb916(void)

void FUN_146fbb916(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14c99ca18 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99ca18 = FUN_140002ddd(FUN_146290b95,uVar1,L"DataflowMathInverseSquareRootNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14c99ca18,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146fbb98e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 146fbb992 FUN_146fbb992 body=93 status=ok
// SIG undefined FUN_146fbb992(void)

void FUN_146fbb992(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14c99ca18 == 0) {
    uVar2 = FUN_140d02f86();
    DAT_14c99ca18 = FUN_140002ddd(FUN_146290b95,uVar2,L"DataflowMathInverseSquareRootNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14c99ca18,param_1);
  return;
}



// FUNCTION 146fbb9f0 FUN_146fbb9f0 body=55 status=ok
// SIG undefined FUN_146fbb9f0(void)

void FUN_146fbb9f0(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99ca18 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99ca18 = FUN_140002ddd(FUN_146290b95,uVar1,L"DataflowMathInverseSquareRootNode");
  }
  return;
}



// FUNCTION 146fbba28 FUN_146fbba28 body=233 status=ok
// SIG undefined FUN_146fbba28(void)

ulonglong FUN_146fbba28(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FDataflowMathInverseSquareRootNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_146fbbac2;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_146fbbac2;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_146fbbac2;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_146fbbac2:
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



// FUNCTION 146fbbb12 FUN_146fbbb12 body=38 status=ok
// SIG undefined FUN_146fbbb12(void)

undefined8 FUN_146fbbb12(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fbbb38 FUN_146fbbb38 body=38 status=ok
// SIG undefined FUN_146fbbb38(void)

undefined8 FUN_146fbbb38(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDataflowMathNegateNode",1);
  return param_2;
}



// FUNCTION 146fbbb5e FUN_146fbbb5e body=38 status=ok
// SIG undefined FUN_146fbbb5e(void)

undefined8 FUN_146fbbb5e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Negate",1);
  return param_2;
}



// FUNCTION 146fbbb84 FUN_146fbbb84 body=38 status=ok
// SIG undefined FUN_146fbbb84(void)

undefined8 FUN_146fbbb84(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Scalar",1);
  return param_2;
}



// FUNCTION 146fbbbaa FUN_146fbbbaa body=32 status=ok
// SIG undefined FUN_146fbbbaa(void)

undefined8 FUN_146fbbbaa(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 146fbbbca FUN_146fbbbca body=123 status=ok
// SIG undefined FUN_146fbbbca(void)

void FUN_146fbbbca(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14c99ca30 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99ca30 = FUN_140002ddd(FUN_146290c2b,uVar1,L"DataflowMathNegateNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14c99ca30,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146fbbc42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 146fbbc46 FUN_146fbbc46 body=93 status=ok
// SIG undefined FUN_146fbbc46(void)

void FUN_146fbbc46(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14c99ca30 == 0) {
    uVar2 = FUN_140d02f86();
    DAT_14c99ca30 = FUN_140002ddd(FUN_146290c2b,uVar2,L"DataflowMathNegateNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14c99ca30,param_1);
  return;
}



// FUNCTION 146fbbca4 FUN_146fbbca4 body=55 status=ok
// SIG undefined FUN_146fbbca4(void)

void FUN_146fbbca4(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99ca30 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99ca30 = FUN_140002ddd(FUN_146290c2b,uVar1,L"DataflowMathNegateNode");
  }
  return;
}



// FUNCTION 146fbbcdc FUN_146fbbcdc body=233 status=ok
// SIG undefined FUN_146fbbcdc(void)

ulonglong FUN_146fbbcdc(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FDataflowMathNegateNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_146fbbd76;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_146fbbd76;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_146fbbd76;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_146fbbd76:
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



// FUNCTION 146fbbdc6 FUN_146fbbdc6 body=38 status=ok
// SIG undefined FUN_146fbbdc6(void)

undefined8 FUN_146fbbdc6(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fbbdec FUN_146fbbdec body=38 status=ok
// SIG undefined FUN_146fbbdec(void)

undefined8 FUN_146fbbdec(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDataflowMathAbsNode",1);
  return param_2;
}



// FUNCTION 146fbbe12 FUN_146fbbe12 body=38 status=ok
// SIG undefined FUN_146fbbe12(void)

undefined8 FUN_146fbbe12(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,&DAT_149fb8500,1);
  return param_2;
}



// FUNCTION 146fbbe38 FUN_146fbbe38 body=38 status=ok
// SIG undefined FUN_146fbbe38(void)

undefined8 FUN_146fbbe38(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Scalar",1);
  return param_2;
}



// FUNCTION 146fbbe5e FUN_146fbbe5e body=32 status=ok
// SIG undefined FUN_146fbbe5e(void)

undefined8 FUN_146fbbe5e(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 146fbbe7e FUN_146fbbe7e body=123 status=ok
// SIG undefined FUN_146fbbe7e(void)

void FUN_146fbbe7e(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14c99ca48 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99ca48 = FUN_140002ddd(FUN_146290cc1,uVar1,L"DataflowMathAbsNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14c99ca48,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146fbbef6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 146fbbefa FUN_146fbbefa body=93 status=ok
// SIG undefined FUN_146fbbefa(void)

void FUN_146fbbefa(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14c99ca48 == 0) {
    uVar2 = FUN_140d02f86();
    DAT_14c99ca48 = FUN_140002ddd(FUN_146290cc1,uVar2,L"DataflowMathAbsNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14c99ca48,param_1);
  return;
}



// FUNCTION 146fbbf58 FUN_146fbbf58 body=55 status=ok
// SIG undefined FUN_146fbbf58(void)

void FUN_146fbbf58(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99ca48 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99ca48 = FUN_140002ddd(FUN_146290cc1,uVar1,L"DataflowMathAbsNode");
  }
  return;
}



// FUNCTION 146fbbf90 FUN_146fbbf90 body=233 status=ok
// SIG undefined FUN_146fbbf90(void)

ulonglong FUN_146fbbf90(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FDataflowMathAbsNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_146fbc02a;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_146fbc02a;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_146fbc02a;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_146fbc02a:
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



// FUNCTION 146fbc07a FUN_146fbc07a body=38 status=ok
// SIG undefined FUN_146fbc07a(void)

undefined8 FUN_146fbc07a(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fbc0a0 FUN_146fbc0a0 body=38 status=ok
// SIG undefined FUN_146fbc0a0(void)

undefined8 FUN_146fbc0a0(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDataflowMathFloorNode",1);
  return param_2;
}



// FUNCTION 146fbc0c6 FUN_146fbc0c6 body=38 status=ok
// SIG undefined FUN_146fbc0c6(void)

undefined8 FUN_146fbc0c6(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Floor",1);
  return param_2;
}



// FUNCTION 146fbc0ec FUN_146fbc0ec body=38 status=ok
// SIG undefined FUN_146fbc0ec(void)

undefined8 FUN_146fbc0ec(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Scalar",1);
  return param_2;
}



// FUNCTION 146fbc112 FUN_146fbc112 body=32 status=ok
// SIG undefined FUN_146fbc112(void)

undefined8 FUN_146fbc112(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 146fbc132 FUN_146fbc132 body=123 status=ok
// SIG undefined FUN_146fbc132(void)

void FUN_146fbc132(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14c99ca60 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99ca60 = FUN_140002ddd(FUN_146290d57,uVar1,L"DataflowMathFloorNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14c99ca60,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146fbc1aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 146fbc1ae FUN_146fbc1ae body=93 status=ok
// SIG undefined FUN_146fbc1ae(void)

void FUN_146fbc1ae(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14c99ca60 == 0) {
    uVar2 = FUN_140d02f86();
    DAT_14c99ca60 = FUN_140002ddd(FUN_146290d57,uVar2,L"DataflowMathFloorNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14c99ca60,param_1);
  return;
}



// FUNCTION 146fbc20c FUN_146fbc20c body=55 status=ok
// SIG undefined FUN_146fbc20c(void)

void FUN_146fbc20c(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99ca60 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99ca60 = FUN_140002ddd(FUN_146290d57,uVar1,L"DataflowMathFloorNode");
  }
  return;
}



// FUNCTION 146fbc244 FUN_146fbc244 body=233 status=ok
// SIG undefined FUN_146fbc244(void)

ulonglong FUN_146fbc244(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FDataflowMathFloorNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_146fbc2de;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_146fbc2de;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_146fbc2de;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_146fbc2de:
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



// FUNCTION 146fbc32e FUN_146fbc32e body=38 status=ok
// SIG undefined FUN_146fbc32e(void)

undefined8 FUN_146fbc32e(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fbc354 FUN_146fbc354 body=38 status=ok
// SIG undefined FUN_146fbc354(void)

undefined8 FUN_146fbc354(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDataflowMathCeilNode",1);
  return param_2;
}



// FUNCTION 146fbc37a FUN_146fbc37a body=38 status=ok
// SIG undefined FUN_146fbc37a(void)

undefined8 FUN_146fbc37a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,&DAT_149fb8586,1);
  return param_2;
}



// FUNCTION 146fbc3a0 FUN_146fbc3a0 body=38 status=ok
// SIG undefined FUN_146fbc3a0(void)

undefined8 FUN_146fbc3a0(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Scalar",1);
  return param_2;
}



// FUNCTION 146fbc3c6 FUN_146fbc3c6 body=32 status=ok
// SIG undefined FUN_146fbc3c6(void)

undefined8 FUN_146fbc3c6(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 146fbc3e6 FUN_146fbc3e6 body=123 status=ok
// SIG undefined FUN_146fbc3e6(void)

void FUN_146fbc3e6(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14c99ca78 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99ca78 = FUN_140002ddd(FUN_146290ded,uVar1,L"DataflowMathCeilNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14c99ca78,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146fbc45e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 146fbc462 FUN_146fbc462 body=93 status=ok
// SIG undefined FUN_146fbc462(void)

void FUN_146fbc462(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14c99ca78 == 0) {
    uVar2 = FUN_140d02f86();
    DAT_14c99ca78 = FUN_140002ddd(FUN_146290ded,uVar2,L"DataflowMathCeilNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14c99ca78,param_1);
  return;
}



// FUNCTION 146fbc4c0 FUN_146fbc4c0 body=55 status=ok
// SIG undefined FUN_146fbc4c0(void)

void FUN_146fbc4c0(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99ca78 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99ca78 = FUN_140002ddd(FUN_146290ded,uVar1,L"DataflowMathCeilNode");
  }
  return;
}



// FUNCTION 146fbc4f8 FUN_146fbc4f8 body=233 status=ok
// SIG undefined FUN_146fbc4f8(void)

ulonglong FUN_146fbc4f8(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FDataflowMathCeilNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_146fbc592;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_146fbc592;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_146fbc592;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_146fbc592:
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



// FUNCTION 146fbc5e2 FUN_146fbc5e2 body=38 status=ok
// SIG undefined FUN_146fbc5e2(void)

undefined8 FUN_146fbc5e2(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fbc608 FUN_146fbc608 body=38 status=ok
// SIG undefined FUN_146fbc608(void)

undefined8 FUN_146fbc608(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDataflowMathRoundNode",1);
  return param_2;
}



// FUNCTION 146fbc62e FUN_146fbc62e body=38 status=ok
// SIG undefined FUN_146fbc62e(void)

undefined8 FUN_146fbc62e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Round",1);
  return param_2;
}



// FUNCTION 146fbc654 FUN_146fbc654 body=38 status=ok
// SIG undefined FUN_146fbc654(void)

undefined8 FUN_146fbc654(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Scalar",1);
  return param_2;
}



// FUNCTION 146fbc67a FUN_146fbc67a body=32 status=ok
// SIG undefined FUN_146fbc67a(void)

undefined8 FUN_146fbc67a(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 146fbc69a FUN_146fbc69a body=123 status=ok
// SIG undefined FUN_146fbc69a(void)

void FUN_146fbc69a(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14c99ca90 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99ca90 = FUN_140002ddd(FUN_146290e83,uVar1,L"DataflowMathRoundNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14c99ca90,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146fbc712. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 146fbc716 FUN_146fbc716 body=93 status=ok
// SIG undefined FUN_146fbc716(void)

void FUN_146fbc716(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14c99ca90 == 0) {
    uVar2 = FUN_140d02f86();
    DAT_14c99ca90 = FUN_140002ddd(FUN_146290e83,uVar2,L"DataflowMathRoundNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14c99ca90,param_1);
  return;
}



// FUNCTION 146fbc774 FUN_146fbc774 body=55 status=ok
// SIG undefined FUN_146fbc774(void)

void FUN_146fbc774(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99ca90 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99ca90 = FUN_140002ddd(FUN_146290e83,uVar1,L"DataflowMathRoundNode");
  }
  return;
}



// FUNCTION 146fbc7ac FUN_146fbc7ac body=233 status=ok
// SIG undefined FUN_146fbc7ac(void)

ulonglong FUN_146fbc7ac(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FDataflowMathRoundNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_146fbc846;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_146fbc846;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_146fbc846;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_146fbc846:
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



// FUNCTION 146fbc896 FUN_146fbc896 body=38 status=ok
// SIG undefined FUN_146fbc896(void)

undefined8 FUN_146fbc896(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fbc8bc FUN_146fbc8bc body=38 status=ok
// SIG undefined FUN_146fbc8bc(void)

undefined8 FUN_146fbc8bc(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDataflowMathTruncNode",1);
  return param_2;
}



// FUNCTION 146fbc8e2 FUN_146fbc8e2 body=38 status=ok
// SIG undefined FUN_146fbc8e2(void)

undefined8 FUN_146fbc8e2(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Trunc",1);
  return param_2;
}



// FUNCTION 146fbc908 FUN_146fbc908 body=38 status=ok
// SIG undefined FUN_146fbc908(void)

undefined8 FUN_146fbc908(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Scalar",1);
  return param_2;
}



// FUNCTION 146fbc92e FUN_146fbc92e body=32 status=ok
// SIG undefined FUN_146fbc92e(void)

undefined8 FUN_146fbc92e(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 146fbc94e FUN_146fbc94e body=123 status=ok
// SIG undefined FUN_146fbc94e(void)

void FUN_146fbc94e(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14c99caa8 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99caa8 = FUN_140002ddd(FUN_146290f19,uVar1,L"DataflowMathTruncNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14c99caa8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146fbc9c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 146fbc9ca FUN_146fbc9ca body=93 status=ok
// SIG undefined FUN_146fbc9ca(void)

void FUN_146fbc9ca(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14c99caa8 == 0) {
    uVar2 = FUN_140d02f86();
    DAT_14c99caa8 = FUN_140002ddd(FUN_146290f19,uVar2,L"DataflowMathTruncNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14c99caa8,param_1);
  return;
}



// FUNCTION 146fbca28 FUN_146fbca28 body=55 status=ok
// SIG undefined FUN_146fbca28(void)

void FUN_146fbca28(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99caa8 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99caa8 = FUN_140002ddd(FUN_146290f19,uVar1,L"DataflowMathTruncNode");
  }
  return;
}



// FUNCTION 146fbca60 FUN_146fbca60 body=233 status=ok
// SIG undefined FUN_146fbca60(void)

ulonglong FUN_146fbca60(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FDataflowMathTruncNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_146fbcafa;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_146fbcafa;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_146fbcafa;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_146fbcafa:
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



// FUNCTION 146fbcb4a FUN_146fbcb4a body=38 status=ok
// SIG undefined FUN_146fbcb4a(void)

undefined8 FUN_146fbcb4a(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fbcb70 FUN_146fbcb70 body=38 status=ok
// SIG undefined FUN_146fbcb70(void)

undefined8 FUN_146fbcb70(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDataflowMathFracNode",1);
  return param_2;
}



// FUNCTION 146fbcb96 FUN_146fbcb96 body=38 status=ok
// SIG undefined FUN_146fbcb96(void)

undefined8 FUN_146fbcb96(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,&DAT_149fb8716,1);
  return param_2;
}



// FUNCTION 146fbcbbc FUN_146fbcbbc body=38 status=ok
// SIG undefined FUN_146fbcbbc(void)

undefined8 FUN_146fbcbbc(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Scalar",1);
  return param_2;
}



// FUNCTION 146fbcbe2 FUN_146fbcbe2 body=32 status=ok
// SIG undefined FUN_146fbcbe2(void)

undefined8 FUN_146fbcbe2(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 146fbcc02 FUN_146fbcc02 body=123 status=ok
// SIG undefined FUN_146fbcc02(void)

void FUN_146fbcc02(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14c99cac0 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cac0 = FUN_140002ddd(FUN_146290faf,uVar1,L"DataflowMathFracNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14c99cac0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146fbcc7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 146fbcc7e FUN_146fbcc7e body=93 status=ok
// SIG undefined FUN_146fbcc7e(void)

void FUN_146fbcc7e(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14c99cac0 == 0) {
    uVar2 = FUN_140d02f86();
    DAT_14c99cac0 = FUN_140002ddd(FUN_146290faf,uVar2,L"DataflowMathFracNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14c99cac0,param_1);
  return;
}



// FUNCTION 146fbccdc FUN_146fbccdc body=55 status=ok
// SIG undefined FUN_146fbccdc(void)

void FUN_146fbccdc(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99cac0 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cac0 = FUN_140002ddd(FUN_146290faf,uVar1,L"DataflowMathFracNode");
  }
  return;
}



// FUNCTION 146fbcd14 FUN_146fbcd14 body=233 status=ok
// SIG undefined FUN_146fbcd14(void)

ulonglong FUN_146fbcd14(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FDataflowMathFracNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_146fbcdae;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_146fbcdae;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_146fbcdae;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_146fbcdae:
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



// FUNCTION 146fbcdfe FUN_146fbcdfe body=38 status=ok
// SIG undefined FUN_146fbcdfe(void)

undefined8 FUN_146fbcdfe(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fbce24 FUN_146fbce24 body=38 status=ok
// SIG undefined FUN_146fbce24(void)

undefined8 FUN_146fbce24(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDataflowMathPowNode",1);
  return param_2;
}



// FUNCTION 146fbce4a FUN_146fbce4a body=38 status=ok
// SIG undefined FUN_146fbce4a(void)

undefined8 FUN_146fbce4a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,&DAT_149fb8985,1);
  return param_2;
}



// FUNCTION 146fbce70 FUN_146fbce70 body=38 status=ok
// SIG undefined FUN_146fbce70(void)

undefined8 FUN_146fbce70(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Scalar",1);
  return param_2;
}



// FUNCTION 146fbce96 FUN_146fbce96 body=32 status=ok
// SIG undefined FUN_146fbce96(void)

undefined8 FUN_146fbce96(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 146fbceb6 FUN_146fbceb6 body=123 status=ok
// SIG undefined FUN_146fbceb6(void)

void FUN_146fbceb6(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14c99cad8 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cad8 = FUN_140002ddd(FUN_146291045,uVar1,L"DataflowMathPowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14c99cad8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146fbcf2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 146fbcf32 FUN_146fbcf32 body=93 status=ok
// SIG undefined FUN_146fbcf32(void)

void FUN_146fbcf32(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14c99cad8 == 0) {
    uVar2 = FUN_140d02f86();
    DAT_14c99cad8 = FUN_140002ddd(FUN_146291045,uVar2,L"DataflowMathPowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14c99cad8,param_1);
  return;
}



// FUNCTION 146fbcf90 FUN_146fbcf90 body=55 status=ok
// SIG undefined FUN_146fbcf90(void)

void FUN_146fbcf90(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99cad8 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cad8 = FUN_140002ddd(FUN_146291045,uVar1,L"DataflowMathPowNode");
  }
  return;
}



// FUNCTION 146fbcfc8 FUN_146fbcfc8 body=233 status=ok
// SIG undefined FUN_146fbcfc8(void)

ulonglong FUN_146fbcfc8(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FDataflowMathPowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_146fbd062;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_146fbd062;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_146fbd062;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_146fbd062:
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



// FUNCTION 146fbd0b2 FUN_146fbd0b2 body=38 status=ok
// SIG undefined FUN_146fbd0b2(void)

undefined8 FUN_146fbd0b2(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fbd0d8 FUN_146fbd0d8 body=38 status=ok
// SIG undefined FUN_146fbd0d8(void)

undefined8 FUN_146fbd0d8(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDataflowMathLogXNode",1);
  return param_2;
}



// FUNCTION 146fbd0fe FUN_146fbd0fe body=38 status=ok
// SIG undefined FUN_146fbd0fe(void)

undefined8 FUN_146fbd0fe(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,&DAT_149fb87f6,1);
  return param_2;
}



// FUNCTION 146fbd124 FUN_146fbd124 body=38 status=ok
// SIG undefined FUN_146fbd124(void)

undefined8 FUN_146fbd124(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Scalar",1);
  return param_2;
}



// FUNCTION 146fbd14a FUN_146fbd14a body=32 status=ok
// SIG undefined FUN_146fbd14a(void)

undefined8 FUN_146fbd14a(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 146fbd16a FUN_146fbd16a body=123 status=ok
// SIG undefined FUN_146fbd16a(void)

void FUN_146fbd16a(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14c99caf0 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99caf0 = FUN_140002ddd(FUN_1462910db,uVar1,L"DataflowMathLogXNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14c99caf0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146fbd1e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 146fbd1e6 FUN_146fbd1e6 body=93 status=ok
// SIG undefined FUN_146fbd1e6(void)

void FUN_146fbd1e6(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14c99caf0 == 0) {
    uVar2 = FUN_140d02f86();
    DAT_14c99caf0 = FUN_140002ddd(FUN_1462910db,uVar2,L"DataflowMathLogXNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14c99caf0,param_1);
  return;
}



// FUNCTION 146fbd244 FUN_146fbd244 body=55 status=ok
// SIG undefined FUN_146fbd244(void)

void FUN_146fbd244(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99caf0 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99caf0 = FUN_140002ddd(FUN_1462910db,uVar1,L"DataflowMathLogXNode");
  }
  return;
}



// FUNCTION 146fbd27c FUN_146fbd27c body=233 status=ok
// SIG undefined FUN_146fbd27c(void)

ulonglong FUN_146fbd27c(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FDataflowMathLogXNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_146fbd316;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_146fbd316;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_146fbd316;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_146fbd316:
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



// FUNCTION 146fbd366 FUN_146fbd366 body=38 status=ok
// SIG undefined FUN_146fbd366(void)

undefined8 FUN_146fbd366(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fbd38c FUN_146fbd38c body=38 status=ok
// SIG undefined FUN_146fbd38c(void)

undefined8 FUN_146fbd38c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDataflowMathLogNode",1);
  return param_2;
}



// FUNCTION 146fbd3b2 FUN_146fbd3b2 body=38 status=ok
// SIG undefined FUN_146fbd3b2(void)

undefined8 FUN_146fbd3b2(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,&DAT_149fb87b5,1);
  return param_2;
}



// FUNCTION 146fbd3d8 FUN_146fbd3d8 body=38 status=ok
// SIG undefined FUN_146fbd3d8(void)

undefined8 FUN_146fbd3d8(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Scalar",1);
  return param_2;
}



// FUNCTION 146fbd3fe FUN_146fbd3fe body=32 status=ok
// SIG undefined FUN_146fbd3fe(void)

undefined8 FUN_146fbd3fe(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 146fbd41e FUN_146fbd41e body=123 status=ok
// SIG undefined FUN_146fbd41e(void)

void FUN_146fbd41e(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14c99cb08 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cb08 = FUN_140002ddd(FUN_146291171,uVar1,L"DataflowMathLogNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14c99cb08,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146fbd496. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 146fbd49a FUN_146fbd49a body=93 status=ok
// SIG undefined FUN_146fbd49a(void)

void FUN_146fbd49a(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14c99cb08 == 0) {
    uVar2 = FUN_140d02f86();
    DAT_14c99cb08 = FUN_140002ddd(FUN_146291171,uVar2,L"DataflowMathLogNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14c99cb08,param_1);
  return;
}



// FUNCTION 146fbd4f8 FUN_146fbd4f8 body=55 status=ok
// SIG undefined FUN_146fbd4f8(void)

void FUN_146fbd4f8(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99cb08 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cb08 = FUN_140002ddd(FUN_146291171,uVar1,L"DataflowMathLogNode");
  }
  return;
}



// FUNCTION 146fbd530 FUN_146fbd530 body=233 status=ok
// SIG undefined FUN_146fbd530(void)

ulonglong FUN_146fbd530(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FDataflowMathLogNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_146fbd5ca;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_146fbd5ca;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_146fbd5ca;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_146fbd5ca:
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



// FUNCTION 146fbd61a FUN_146fbd61a body=38 status=ok
// SIG undefined FUN_146fbd61a(void)

undefined8 FUN_146fbd61a(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fbd640 FUN_146fbd640 body=38 status=ok
// SIG undefined FUN_146fbd640(void)

undefined8 FUN_146fbd640(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDataflowMathExpNode",1);
  return param_2;
}



// FUNCTION 146fbd666 FUN_146fbd666 body=38 status=ok
// SIG undefined FUN_146fbd666(void)

undefined8 FUN_146fbd666(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,&DAT_149fb8695,1);
  return param_2;
}



// FUNCTION 146fbd68c FUN_146fbd68c body=38 status=ok
// SIG undefined FUN_146fbd68c(void)

undefined8 FUN_146fbd68c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Scalar",1);
  return param_2;
}



// FUNCTION 146fbd6b2 FUN_146fbd6b2 body=32 status=ok
// SIG undefined FUN_146fbd6b2(void)

undefined8 FUN_146fbd6b2(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 146fbd6d2 FUN_146fbd6d2 body=123 status=ok
// SIG undefined FUN_146fbd6d2(void)

void FUN_146fbd6d2(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14c99cb20 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cb20 = FUN_140002ddd(FUN_146291207,uVar1,L"DataflowMathExpNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14c99cb20,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146fbd74a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 146fbd74e FUN_146fbd74e body=93 status=ok
// SIG undefined FUN_146fbd74e(void)

void FUN_146fbd74e(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14c99cb20 == 0) {
    uVar2 = FUN_140d02f86();
    DAT_14c99cb20 = FUN_140002ddd(FUN_146291207,uVar2,L"DataflowMathExpNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14c99cb20,param_1);
  return;
}



// FUNCTION 146fbd7ac FUN_146fbd7ac body=55 status=ok
// SIG undefined FUN_146fbd7ac(void)

void FUN_146fbd7ac(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99cb20 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cb20 = FUN_140002ddd(FUN_146291207,uVar1,L"DataflowMathExpNode");
  }
  return;
}



// FUNCTION 146fbd7e4 FUN_146fbd7e4 body=233 status=ok
// SIG undefined FUN_146fbd7e4(void)

ulonglong FUN_146fbd7e4(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FDataflowMathExpNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_146fbd87e;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_146fbd87e;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_146fbd87e;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_146fbd87e:
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



// FUNCTION 146fbd8ce FUN_146fbd8ce body=38 status=ok
// SIG undefined FUN_146fbd8ce(void)

undefined8 FUN_146fbd8ce(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fbd8f4 FUN_146fbd8f4 body=38 status=ok
// SIG undefined FUN_146fbd8f4(void)

undefined8 FUN_146fbd8f4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDataflowMathSignNode",1);
  return param_2;
}



// FUNCTION 146fbd91a FUN_146fbd91a body=38 status=ok
// SIG undefined FUN_146fbd91a(void)

undefined8 FUN_146fbd91a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,&DAT_149fb8a56,1);
  return param_2;
}



// FUNCTION 146fbd940 FUN_146fbd940 body=38 status=ok
// SIG undefined FUN_146fbd940(void)

undefined8 FUN_146fbd940(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Scalar",1);
  return param_2;
}



// FUNCTION 146fbd966 FUN_146fbd966 body=32 status=ok
// SIG undefined FUN_146fbd966(void)

undefined8 FUN_146fbd966(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 146fbd986 FUN_146fbd986 body=123 status=ok
// SIG undefined FUN_146fbd986(void)

void FUN_146fbd986(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14c99cb38 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cb38 = FUN_140002ddd(FUN_14629129d,uVar1,L"DataflowMathSignNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14c99cb38,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146fbd9fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 146fbda02 FUN_146fbda02 body=93 status=ok
// SIG undefined FUN_146fbda02(void)

void FUN_146fbda02(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14c99cb38 == 0) {
    uVar2 = FUN_140d02f86();
    DAT_14c99cb38 = FUN_140002ddd(FUN_14629129d,uVar2,L"DataflowMathSignNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14c99cb38,param_1);
  return;
}



// FUNCTION 146fbda60 FUN_146fbda60 body=55 status=ok
// SIG undefined FUN_146fbda60(void)

void FUN_146fbda60(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99cb38 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cb38 = FUN_140002ddd(FUN_14629129d,uVar1,L"DataflowMathSignNode");
  }
  return;
}



// FUNCTION 146fbda98 FUN_146fbda98 body=233 status=ok
// SIG undefined FUN_146fbda98(void)

ulonglong FUN_146fbda98(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FDataflowMathSignNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_146fbdb32;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_146fbdb32;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_146fbdb32;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_146fbdb32:
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



// FUNCTION 146fbdb82 FUN_146fbdb82 body=38 status=ok
// SIG undefined FUN_146fbdb82(void)

undefined8 FUN_146fbdb82(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fbdba8 FUN_146fbdba8 body=38 status=ok
// SIG undefined FUN_146fbdba8(void)

undefined8 FUN_146fbdba8(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDataflowMathOneMinusNode",1);
  return param_2;
}



// FUNCTION 146fbdbce FUN_146fbdbce body=38 status=ok
// SIG undefined FUN_146fbdbce(void)

undefined8 FUN_146fbdbce(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"OneMinus",1);
  return param_2;
}



// FUNCTION 146fbdbf4 FUN_146fbdbf4 body=38 status=ok
// SIG undefined FUN_146fbdbf4(void)

undefined8 FUN_146fbdbf4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Scalar",1);
  return param_2;
}



// FUNCTION 146fbdc1a FUN_146fbdc1a body=32 status=ok
// SIG undefined FUN_146fbdc1a(void)

undefined8 FUN_146fbdc1a(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 146fbdc3a FUN_146fbdc3a body=123 status=ok
// SIG undefined FUN_146fbdc3a(void)

void FUN_146fbdc3a(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14c99cb50 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cb50 = FUN_140002ddd(FUN_146291333,uVar1,L"DataflowMathOneMinusNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14c99cb50,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146fbdcb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 146fbdcb6 FUN_146fbdcb6 body=93 status=ok
// SIG undefined FUN_146fbdcb6(void)

void FUN_146fbdcb6(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14c99cb50 == 0) {
    uVar2 = FUN_140d02f86();
    DAT_14c99cb50 = FUN_140002ddd(FUN_146291333,uVar2,L"DataflowMathOneMinusNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14c99cb50,param_1);
  return;
}



// FUNCTION 146fbdd14 FUN_146fbdd14 body=55 status=ok
// SIG undefined FUN_146fbdd14(void)

void FUN_146fbdd14(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99cb50 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cb50 = FUN_140002ddd(FUN_146291333,uVar1,L"DataflowMathOneMinusNode");
  }
  return;
}



// FUNCTION 146fbdd4c FUN_146fbdd4c body=233 status=ok
// SIG undefined FUN_146fbdd4c(void)

ulonglong FUN_146fbdd4c(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FDataflowMathOneMinusNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_146fbdde6;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_146fbdde6;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_146fbdde6;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_146fbdde6:
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



// FUNCTION 146fbde36 FUN_146fbde36 body=38 status=ok
// SIG undefined FUN_146fbde36(void)

undefined8 FUN_146fbde36(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fbde5c FUN_146fbde5c body=38 status=ok
// SIG undefined FUN_146fbde5c(void)

undefined8 FUN_146fbde5c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDataflowMathConstantNode",1);
  return param_2;
}



// FUNCTION 146fbde82 FUN_146fbde82 body=38 status=ok
// SIG undefined FUN_146fbde82(void)

undefined8 FUN_146fbde82(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Constants",1);
  return param_2;
}



// FUNCTION 146fbdea8 FUN_146fbdea8 body=38 status=ok
// SIG undefined FUN_146fbdea8(void)

undefined8 FUN_146fbdea8(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Scalar",1);
  return param_2;
}



// FUNCTION 146fbdece FUN_146fbdece body=32 status=ok
// SIG undefined FUN_146fbdece(void)

undefined8 FUN_146fbdece(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 146fbdeee FUN_146fbdeee body=123 status=ok
// SIG undefined FUN_146fbdeee(void)

void FUN_146fbdeee(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14c99cb80 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cb80 = FUN_140002ddd(FUN_1462913f9,uVar1,L"DataflowMathConstantNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14c99cb80,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146fbdf66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 146fbdf6a FUN_146fbdf6a body=93 status=ok
// SIG undefined FUN_146fbdf6a(void)

void FUN_146fbdf6a(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14c99cb80 == 0) {
    uVar2 = FUN_140d02f86();
    DAT_14c99cb80 = FUN_140002ddd(FUN_1462913f9,uVar2,L"DataflowMathConstantNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14c99cb80,param_1);
  return;
}



// FUNCTION 146fbdfc8 FUN_146fbdfc8 body=55 status=ok
// SIG undefined FUN_146fbdfc8(void)

void FUN_146fbdfc8(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99cb80 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cb80 = FUN_140002ddd(FUN_1462913f9,uVar1,L"DataflowMathConstantNode");
  }
  return;
}



// FUNCTION 146fbe000 FUN_146fbe000 body=233 status=ok
// SIG undefined FUN_146fbe000(void)

ulonglong FUN_146fbe000(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FDataflowMathConstantNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_146fbe09a;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_146fbe09a;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_146fbe09a;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_146fbe09a:
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



// FUNCTION 146fbe0ea FUN_146fbe0ea body=38 status=ok
// SIG undefined FUN_146fbe0ea(void)

undefined8 FUN_146fbe0ea(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fbe110 FUN_146fbe110 body=38 status=ok
// SIG undefined FUN_146fbe110(void)

undefined8 FUN_146fbe110(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDataflowMathSinNode",1);
  return param_2;
}



// FUNCTION 146fbe136 FUN_146fbe136 body=38 status=ok
// SIG undefined FUN_146fbe136(void)

undefined8 FUN_146fbe136(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,&DAT_149fb8bf5,1);
  return param_2;
}



// FUNCTION 146fbe15c FUN_146fbe15c body=38 status=ok
// SIG undefined FUN_146fbe15c(void)

undefined8 FUN_146fbe15c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Trig",1);
  return param_2;
}



// FUNCTION 146fbe182 FUN_146fbe182 body=32 status=ok
// SIG undefined FUN_146fbe182(void)

undefined8 FUN_146fbe182(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 146fbe1a2 FUN_146fbe1a2 body=123 status=ok
// SIG undefined FUN_146fbe1a2(void)

void FUN_146fbe1a2(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14c99cb98 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cb98 = FUN_140002ddd(FUN_14629148f,uVar1,L"DataflowMathSinNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14c99cb98,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146fbe21a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 146fbe21e FUN_146fbe21e body=93 status=ok
// SIG undefined FUN_146fbe21e(void)

void FUN_146fbe21e(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14c99cb98 == 0) {
    uVar2 = FUN_140d02f86();
    DAT_14c99cb98 = FUN_140002ddd(FUN_14629148f,uVar2,L"DataflowMathSinNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14c99cb98,param_1);
  return;
}



// FUNCTION 146fbe27c FUN_146fbe27c body=55 status=ok
// SIG undefined FUN_146fbe27c(void)

void FUN_146fbe27c(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99cb98 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cb98 = FUN_140002ddd(FUN_14629148f,uVar1,L"DataflowMathSinNode");
  }
  return;
}



// FUNCTION 146fbe2b4 FUN_146fbe2b4 body=233 status=ok
// SIG undefined FUN_146fbe2b4(void)

ulonglong FUN_146fbe2b4(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FDataflowMathSinNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_146fbe34e;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_146fbe34e;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_146fbe34e;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_146fbe34e:
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



// FUNCTION 146fbe39e FUN_146fbe39e body=38 status=ok
// SIG undefined FUN_146fbe39e(void)

undefined8 FUN_146fbe39e(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fbe3c4 FUN_146fbe3c4 body=38 status=ok
// SIG undefined FUN_146fbe3c4(void)

undefined8 FUN_146fbe3c4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDataflowMathCosNode",1);
  return param_2;
}



// FUNCTION 146fbe3ea FUN_146fbe3ea body=38 status=ok
// SIG undefined FUN_146fbe3ea(void)

undefined8 FUN_146fbe3ea(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,&DAT_149fb8ba5,1);
  return param_2;
}



// FUNCTION 146fbe410 FUN_146fbe410 body=38 status=ok
// SIG undefined FUN_146fbe410(void)

undefined8 FUN_146fbe410(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Trig",1);
  return param_2;
}



// FUNCTION 146fbe436 FUN_146fbe436 body=32 status=ok
// SIG undefined FUN_146fbe436(void)

undefined8 FUN_146fbe436(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 146fbe456 FUN_146fbe456 body=123 status=ok
// SIG undefined FUN_146fbe456(void)

void FUN_146fbe456(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14c99cbb0 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cbb0 = FUN_140002ddd(FUN_146291525,uVar1,L"DataflowMathCosNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14c99cbb0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146fbe4ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 146fbe4d2 FUN_146fbe4d2 body=93 status=ok
// SIG undefined FUN_146fbe4d2(void)

void FUN_146fbe4d2(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14c99cbb0 == 0) {
    uVar2 = FUN_140d02f86();
    DAT_14c99cbb0 = FUN_140002ddd(FUN_146291525,uVar2,L"DataflowMathCosNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14c99cbb0,param_1);
  return;
}



// FUNCTION 146fbe530 FUN_146fbe530 body=55 status=ok
// SIG undefined FUN_146fbe530(void)

void FUN_146fbe530(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99cbb0 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cbb0 = FUN_140002ddd(FUN_146291525,uVar1,L"DataflowMathCosNode");
  }
  return;
}



// FUNCTION 146fbe568 FUN_146fbe568 body=233 status=ok
// SIG undefined FUN_146fbe568(void)

ulonglong FUN_146fbe568(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FDataflowMathCosNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_146fbe602;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_146fbe602;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_146fbe602;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_146fbe602:
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



// FUNCTION 146fbe652 FUN_146fbe652 body=38 status=ok
// SIG undefined FUN_146fbe652(void)

undefined8 FUN_146fbe652(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fbe678 FUN_146fbe678 body=38 status=ok
// SIG undefined FUN_146fbe678(void)

undefined8 FUN_146fbe678(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDataflowMathTanNode",1);
  return param_2;
}



// FUNCTION 146fbe69e FUN_146fbe69e body=38 status=ok
// SIG undefined FUN_146fbe69e(void)

undefined8 FUN_146fbe69e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,&DAT_149fb8c35,1);
  return param_2;
}



// FUNCTION 146fbe6c4 FUN_146fbe6c4 body=38 status=ok
// SIG undefined FUN_146fbe6c4(void)

undefined8 FUN_146fbe6c4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Trig",1);
  return param_2;
}



// FUNCTION 146fbe6ea FUN_146fbe6ea body=32 status=ok
// SIG undefined FUN_146fbe6ea(void)

undefined8 FUN_146fbe6ea(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 146fbe70a FUN_146fbe70a body=123 status=ok
// SIG undefined FUN_146fbe70a(void)

void FUN_146fbe70a(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14c99cbc8 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cbc8 = FUN_140002ddd(FUN_1462915bb,uVar1,L"DataflowMathTanNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14c99cbc8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146fbe782. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 146fbe786 FUN_146fbe786 body=93 status=ok
// SIG undefined FUN_146fbe786(void)

void FUN_146fbe786(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14c99cbc8 == 0) {
    uVar2 = FUN_140d02f86();
    DAT_14c99cbc8 = FUN_140002ddd(FUN_1462915bb,uVar2,L"DataflowMathTanNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14c99cbc8,param_1);
  return;
}



// FUNCTION 146fbe7e4 FUN_146fbe7e4 body=55 status=ok
// SIG undefined FUN_146fbe7e4(void)

void FUN_146fbe7e4(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99cbc8 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cbc8 = FUN_140002ddd(FUN_1462915bb,uVar1,L"DataflowMathTanNode");
  }
  return;
}



// FUNCTION 146fbe81c FUN_146fbe81c body=233 status=ok
// SIG undefined FUN_146fbe81c(void)

ulonglong FUN_146fbe81c(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FDataflowMathTanNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_146fbe8b6;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_146fbe8b6;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_146fbe8b6;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_146fbe8b6:
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



// FUNCTION 146fbe906 FUN_146fbe906 body=38 status=ok
// SIG undefined FUN_146fbe906(void)

undefined8 FUN_146fbe906(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fbe92c FUN_146fbe92c body=38 status=ok
// SIG undefined FUN_146fbe92c(void)

undefined8 FUN_146fbe92c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDataflowMathArcSinNode",1);
  return param_2;
}



// FUNCTION 146fbe952 FUN_146fbe952 body=38 status=ok
// SIG undefined FUN_146fbe952(void)

undefined8 FUN_146fbe952(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"ArcSin",1);
  return param_2;
}



// FUNCTION 146fbe978 FUN_146fbe978 body=38 status=ok
// SIG undefined FUN_146fbe978(void)

undefined8 FUN_146fbe978(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Trig",1);
  return param_2;
}



// FUNCTION 146fbe99e FUN_146fbe99e body=32 status=ok
// SIG undefined FUN_146fbe99e(void)

undefined8 FUN_146fbe99e(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 146fbe9be FUN_146fbe9be body=123 status=ok
// SIG undefined FUN_146fbe9be(void)

void FUN_146fbe9be(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14c99cbe0 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cbe0 = FUN_140002ddd(FUN_146291651,uVar1,L"DataflowMathArcSinNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14c99cbe0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146fbea36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 146fbea3a FUN_146fbea3a body=93 status=ok
// SIG undefined FUN_146fbea3a(void)

void FUN_146fbea3a(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14c99cbe0 == 0) {
    uVar2 = FUN_140d02f86();
    DAT_14c99cbe0 = FUN_140002ddd(FUN_146291651,uVar2,L"DataflowMathArcSinNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14c99cbe0,param_1);
  return;
}



// FUNCTION 146fbea98 FUN_146fbea98 body=55 status=ok
// SIG undefined FUN_146fbea98(void)

void FUN_146fbea98(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99cbe0 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cbe0 = FUN_140002ddd(FUN_146291651,uVar1,L"DataflowMathArcSinNode");
  }
  return;
}



// FUNCTION 146fbead0 FUN_146fbead0 body=233 status=ok
// SIG undefined FUN_146fbead0(void)

ulonglong FUN_146fbead0(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FDataflowMathArcSinNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_146fbeb6a;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_146fbeb6a;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_146fbeb6a;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_146fbeb6a:
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



// FUNCTION 146fbebba FUN_146fbebba body=38 status=ok
// SIG undefined FUN_146fbebba(void)

undefined8 FUN_146fbebba(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fbebe0 FUN_146fbebe0 body=38 status=ok
// SIG undefined FUN_146fbebe0(void)

undefined8 FUN_146fbebe0(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDataflowMathArcCosNode",1);
  return param_2;
}



// FUNCTION 146fbec06 FUN_146fbec06 body=38 status=ok
// SIG undefined FUN_146fbec06(void)

undefined8 FUN_146fbec06(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"ArcCos",1);
  return param_2;
}



// FUNCTION 146fbec2c FUN_146fbec2c body=38 status=ok
// SIG undefined FUN_146fbec2c(void)

undefined8 FUN_146fbec2c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Trig",1);
  return param_2;
}



// FUNCTION 146fbec52 FUN_146fbec52 body=32 status=ok
// SIG undefined FUN_146fbec52(void)

undefined8 FUN_146fbec52(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 146fbec72 FUN_146fbec72 body=123 status=ok
// SIG undefined FUN_146fbec72(void)

void FUN_146fbec72(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14c99cbf8 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cbf8 = FUN_140002ddd(FUN_1462916e7,uVar1,L"DataflowMathArcCosNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14c99cbf8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146fbecea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 146fbecee FUN_146fbecee body=93 status=ok
// SIG undefined FUN_146fbecee(void)

void FUN_146fbecee(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14c99cbf8 == 0) {
    uVar2 = FUN_140d02f86();
    DAT_14c99cbf8 = FUN_140002ddd(FUN_1462916e7,uVar2,L"DataflowMathArcCosNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14c99cbf8,param_1);
  return;
}



// FUNCTION 146fbed4c FUN_146fbed4c body=55 status=ok
// SIG undefined FUN_146fbed4c(void)

void FUN_146fbed4c(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99cbf8 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cbf8 = FUN_140002ddd(FUN_1462916e7,uVar1,L"DataflowMathArcCosNode");
  }
  return;
}



// FUNCTION 146fbed84 FUN_146fbed84 body=233 status=ok
// SIG undefined FUN_146fbed84(void)

ulonglong FUN_146fbed84(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FDataflowMathArcCosNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_146fbee1e;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_146fbee1e;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_146fbee1e;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_146fbee1e:
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



// FUNCTION 146fbee6e FUN_146fbee6e body=38 status=ok
// SIG undefined FUN_146fbee6e(void)

undefined8 FUN_146fbee6e(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fbee94 FUN_146fbee94 body=38 status=ok
// SIG undefined FUN_146fbee94(void)

undefined8 FUN_146fbee94(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDataflowMathArcTanNode",1);
  return param_2;
}



// FUNCTION 146fbeeba FUN_146fbeeba body=38 status=ok
// SIG undefined FUN_146fbeeba(void)

undefined8 FUN_146fbeeba(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"ArcTan",1);
  return param_2;
}



// FUNCTION 146fbeee0 FUN_146fbeee0 body=38 status=ok
// SIG undefined FUN_146fbeee0(void)

undefined8 FUN_146fbeee0(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Trig",1);
  return param_2;
}



// FUNCTION 146fbef06 FUN_146fbef06 body=32 status=ok
// SIG undefined FUN_146fbef06(void)

undefined8 FUN_146fbef06(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 146fbef26 FUN_146fbef26 body=123 status=ok
// SIG undefined FUN_146fbef26(void)

void FUN_146fbef26(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14c99cc10 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cc10 = FUN_140002ddd(FUN_14629177d,uVar1,L"DataflowMathArcTanNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14c99cc10,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146fbef9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 146fbefa2 FUN_146fbefa2 body=93 status=ok
// SIG undefined FUN_146fbefa2(void)

void FUN_146fbefa2(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14c99cc10 == 0) {
    uVar2 = FUN_140d02f86();
    DAT_14c99cc10 = FUN_140002ddd(FUN_14629177d,uVar2,L"DataflowMathArcTanNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14c99cc10,param_1);
  return;
}



// FUNCTION 146fbf000 FUN_146fbf000 body=55 status=ok
// SIG undefined FUN_146fbf000(void)

void FUN_146fbf000(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99cc10 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cc10 = FUN_140002ddd(FUN_14629177d,uVar1,L"DataflowMathArcTanNode");
  }
  return;
}



// FUNCTION 146fbf038 FUN_146fbf038 body=233 status=ok
// SIG undefined FUN_146fbf038(void)

ulonglong FUN_146fbf038(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FDataflowMathArcTanNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_146fbf0d2;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_146fbf0d2;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_146fbf0d2;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_146fbf0d2:
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



// FUNCTION 146fbf122 FUN_146fbf122 body=38 status=ok
// SIG undefined FUN_146fbf122(void)

undefined8 FUN_146fbf122(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fbf148 FUN_146fbf148 body=38 status=ok
// SIG undefined FUN_146fbf148(void)

undefined8 FUN_146fbf148(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDataflowMathArcTan2Node",1);
  return param_2;
}



// FUNCTION 146fbf16e FUN_146fbf16e body=38 status=ok
// SIG undefined FUN_146fbf16e(void)

undefined8 FUN_146fbf16e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"ArcTan2",1);
  return param_2;
}



// FUNCTION 146fbf194 FUN_146fbf194 body=38 status=ok
// SIG undefined FUN_146fbf194(void)

undefined8 FUN_146fbf194(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Trig",1);
  return param_2;
}



// FUNCTION 146fbf1ba FUN_146fbf1ba body=32 status=ok
// SIG undefined FUN_146fbf1ba(void)

undefined8 FUN_146fbf1ba(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 146fbf1da FUN_146fbf1da body=123 status=ok
// SIG undefined FUN_146fbf1da(void)

void FUN_146fbf1da(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14c99cc28 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cc28 = FUN_140002ddd(FUN_146291813,uVar1,L"DataflowMathArcTan2Node");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14c99cc28,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146fbf252. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 146fbf256 FUN_146fbf256 body=93 status=ok
// SIG undefined FUN_146fbf256(void)

void FUN_146fbf256(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14c99cc28 == 0) {
    uVar2 = FUN_140d02f86();
    DAT_14c99cc28 = FUN_140002ddd(FUN_146291813,uVar2,L"DataflowMathArcTan2Node");
  }
  FUN_1468fbe3e(uVar1,DAT_14c99cc28,param_1);
  return;
}



// FUNCTION 146fbf2b4 FUN_146fbf2b4 body=55 status=ok
// SIG undefined FUN_146fbf2b4(void)

void FUN_146fbf2b4(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99cc28 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cc28 = FUN_140002ddd(FUN_146291813,uVar1,L"DataflowMathArcTan2Node");
  }
  return;
}



// FUNCTION 146fbf2ec FUN_146fbf2ec body=233 status=ok
// SIG undefined FUN_146fbf2ec(void)

ulonglong FUN_146fbf2ec(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FDataflowMathArcTan2Node",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_146fbf386;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_146fbf386;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_146fbf386;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_146fbf386:
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



// FUNCTION 146fbf3d6 FUN_146fbf3d6 body=38 status=ok
// SIG undefined FUN_146fbf3d6(void)

undefined8 FUN_146fbf3d6(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fbf3fc FUN_146fbf3fc body=38 status=ok
// SIG undefined FUN_146fbf3fc(void)

undefined8 FUN_146fbf3fc(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDataflowMathDegToRadNode",1);
  return param_2;
}



// FUNCTION 146fbf422 FUN_146fbf422 body=38 status=ok
// SIG undefined FUN_146fbf422(void)

undefined8 FUN_146fbf422(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"DegToRad",1);
  return param_2;
}



// FUNCTION 146fbf448 FUN_146fbf448 body=38 status=ok
// SIG undefined FUN_146fbf448(void)

undefined8 FUN_146fbf448(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Trig",1);
  return param_2;
}



// FUNCTION 146fbf46e FUN_146fbf46e body=32 status=ok
// SIG undefined FUN_146fbf46e(void)

undefined8 FUN_146fbf46e(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 146fbf48e FUN_146fbf48e body=123 status=ok
// SIG undefined FUN_146fbf48e(void)

void FUN_146fbf48e(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14c99cc40 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cc40 = FUN_140002ddd(FUN_1462918a9,uVar1,L"DataflowMathDegToRadNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14c99cc40,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146fbf506. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 146fbf50a FUN_146fbf50a body=93 status=ok
// SIG undefined FUN_146fbf50a(void)

void FUN_146fbf50a(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14c99cc40 == 0) {
    uVar2 = FUN_140d02f86();
    DAT_14c99cc40 = FUN_140002ddd(FUN_1462918a9,uVar2,L"DataflowMathDegToRadNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14c99cc40,param_1);
  return;
}



// FUNCTION 146fbf568 FUN_146fbf568 body=55 status=ok
// SIG undefined FUN_146fbf568(void)

void FUN_146fbf568(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99cc40 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cc40 = FUN_140002ddd(FUN_1462918a9,uVar1,L"DataflowMathDegToRadNode");
  }
  return;
}



// FUNCTION 146fbf5a0 FUN_146fbf5a0 body=233 status=ok
// SIG undefined FUN_146fbf5a0(void)

ulonglong FUN_146fbf5a0(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FDataflowMathDegToRadNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_146fbf63a;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_146fbf63a;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_146fbf63a;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_146fbf63a:
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



// FUNCTION 146fbf68a FUN_146fbf68a body=38 status=ok
// SIG undefined FUN_146fbf68a(void)

undefined8 FUN_146fbf68a(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fbf6b0 FUN_146fbf6b0 body=38 status=ok
// SIG undefined FUN_146fbf6b0(void)

undefined8 FUN_146fbf6b0(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDataflowMathRadToDegNode",1);
  return param_2;
}



// FUNCTION 146fbf6d6 FUN_146fbf6d6 body=38 status=ok
// SIG undefined FUN_146fbf6d6(void)

undefined8 FUN_146fbf6d6(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"RadToDeg",1);
  return param_2;
}



// FUNCTION 146fbf6fc FUN_146fbf6fc body=38 status=ok
// SIG undefined FUN_146fbf6fc(void)

undefined8 FUN_146fbf6fc(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Trig",1);
  return param_2;
}



// FUNCTION 146fbf722 FUN_146fbf722 body=32 status=ok
// SIG undefined FUN_146fbf722(void)

undefined8 FUN_146fbf722(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 146fbf742 FUN_146fbf742 body=123 status=ok
// SIG undefined FUN_146fbf742(void)

void FUN_146fbf742(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14c99cc58 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cc58 = FUN_140002ddd(FUN_14629193f,uVar1,L"DataflowMathRadToDegNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14c99cc58,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146fbf7ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 146fbf7be FUN_146fbf7be body=93 status=ok
// SIG undefined FUN_146fbf7be(void)

void FUN_146fbf7be(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14c99cc58 == 0) {
    uVar2 = FUN_140d02f86();
    DAT_14c99cc58 = FUN_140002ddd(FUN_14629193f,uVar2,L"DataflowMathRadToDegNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14c99cc58,param_1);
  return;
}



// FUNCTION 146fbf81c FUN_146fbf81c body=55 status=ok
// SIG undefined FUN_146fbf81c(void)

void FUN_146fbf81c(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99cc58 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cc58 = FUN_140002ddd(FUN_14629193f,uVar1,L"DataflowMathRadToDegNode");
  }
  return;
}



// FUNCTION 146fbf854 FUN_146fbf854 body=233 status=ok
// SIG undefined FUN_146fbf854(void)

ulonglong FUN_146fbf854(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FDataflowMathRadToDegNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_146fbf8ee;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_146fbf8ee;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_146fbf8ee;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_146fbf8ee:
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



// FUNCTION 146fbf986 FUN_146fbf986 body=59 status=ok
// SIG undefined FUN_146fbf986(void)

undefined8 FUN_146fbf986(longlong *param_1)

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



// FUNCTION 146fbfa70 FUN_146fbfa70 body=59 status=ok
// SIG undefined FUN_146fbfa70(void)

undefined8 FUN_146fbfa70(longlong *param_1)

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



// FUNCTION 146fbfb7e FUN_146fbfb7e body=59 status=ok
// SIG undefined FUN_146fbfb7e(void)

undefined8 FUN_146fbfb7e(longlong *param_1)

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



// FUNCTION 146fbfca0 FUN_146fbfca0 body=59 status=ok
// SIG undefined FUN_146fbfca0(void)

undefined8 FUN_146fbfca0(longlong *param_1)

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



// FUNCTION 146fbfd76 FUN_146fbfd76 body=54 status=ok
// SIG undefined FUN_146fbfd76(void)

undefined1 FUN_146fbfd76(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 146fbfdd4 FUN_146fbfdd4 body=59 status=ok
// SIG undefined FUN_146fbfdd4(void)

undefined8 FUN_146fbfdd4(longlong *param_1)

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



// FUNCTION 146fbfe1a FUN_146fbfe1a body=37 status=ok
// SIG undefined FUN_146fbfe1a(void)

void FUN_146fbfe1a(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 146fbfec4 FUN_146fbfec4 body=54 status=ok
// SIG undefined FUN_146fbfec4(void)

undefined1 FUN_146fbfec4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 146fbff22 FUN_146fbff22 body=59 status=ok
// SIG undefined FUN_146fbff22(void)

undefined8 FUN_146fbff22(longlong *param_1)

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



// FUNCTION 146fbff68 FUN_146fbff68 body=37 status=ok
// SIG undefined FUN_146fbff68(void)

void FUN_146fbff68(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 146fc0006 FUN_146fc0006 body=90 status=ok
// SIG undefined FUN_146fc0006(void)

undefined1 FUN_146fc0006(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3 * 8);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3 * 8);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3 * 8) = lVar2;
      lVar3 = lVar3 + 1;
    } while (param_4 != (int)lVar3);
  }
  return 1;
}



// FUNCTION 146fc0088 FUN_146fc0088 body=59 status=ok
// SIG undefined FUN_146fc0088(void)

undefined8 FUN_146fc0088(longlong *param_1)

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



// FUNCTION 146fc012a FUN_146fc012a body=32 status=ok
// SIG undefined FUN_146fc012a(void)

void FUN_146fc012a(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_149faf220;
  return;
}



// FUNCTION 146fc014a FUN_146fc014a body=32 status=ok
// SIG undefined FUN_146fc014a(void)

void FUN_146fc014a(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_149faf220;
  return;
}



// FUNCTION 146fc018e FUN_146fc018e body=63 status=ok
// SIG undefined FUN_146fc018e(void)

undefined1 FUN_146fc018e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    param_3 = param_3 + 0x1a0;
    param_2 = param_2 + 0x1a0;
  }
  return 1;
}



// FUNCTION 146fc01f6 FUN_146fc01f6 body=59 status=ok
// SIG undefined FUN_146fc01f6(void)

undefined8 FUN_146fc01f6(longlong *param_1)

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


