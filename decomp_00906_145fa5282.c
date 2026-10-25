// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145fa5282 FUN_145fa5282 body=496 status=ok
// SIG undefined FUN_145fa5282(void)

void FUN_145fa5282(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FPlaneFalloffFieldDataflowNode",1);
  FUN_1446ddc76(&local_e0,"PlaneFalloffField",1);
  FUN_1446ddc76(&local_e8,"Fields",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"PlaneFalloffField",1);
  FUN_1446ddc76(local_118,"FPlaneFalloffFieldDataflowNode",1);
  uVar3 = FUN_145fa5474();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145fa5474();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145fa5474();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FPlaneFalloffFieldDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be6c300;
  local_60 = FUN_14979c8a2;
  local_88 = FUN_14979cd5c;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa5474 FUN_145fa5474 body=57 status=ok
// SIG undefined FUN_145fa5474(void)

void FUN_145fa5474(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24758 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24758 = FUN_140002ddd(FUN_146750aa0,uVar1,L"PlaneFalloffFieldDataflowNode");
  }
  return;
}



// FUNCTION 145fa54ae FUN_145fa54ae body=496 status=ok
// SIG undefined FUN_145fa54ae(void)

void FUN_145fa54ae(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FRadialIntMaskFieldDataflowNode",1);
  FUN_1446ddc76(&local_e0,"RadialIntMaskField",1);
  FUN_1446ddc76(&local_e8,"Fields",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"RadialIntMaskField",1);
  FUN_1446ddc76(local_118,"FRadialIntMaskFieldDataflowNode",1);
  uVar3 = FUN_145fa56a0();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145fa56a0();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145fa56a0();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FRadialIntMaskFieldDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be6c320;
  local_60 = FUN_14979cd94;
  local_88 = FUN_14979d0e2;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa56a0 FUN_145fa56a0 body=57 status=ok
// SIG undefined FUN_145fa56a0(void)

void FUN_145fa56a0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24788 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24788 = FUN_140002ddd(FUN_146750b2f,uVar1,L"RadialIntMaskFieldDataflowNode");
  }
  return;
}



// FUNCTION 145fa56da FUN_145fa56da body=496 status=ok
// SIG undefined FUN_145fa56da(void)

void FUN_145fa56da(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FUniformScalarFieldDataflowNode",1);
  FUN_1446ddc76(&local_e0,"UniformScalarField",1);
  FUN_1446ddc76(&local_e8,"Fields",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"UniformScalarField",1);
  FUN_1446ddc76(local_118,"FUniformScalarFieldDataflowNode",1);
  uVar3 = FUN_145fa58cc();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145fa58cc();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145fa58cc();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FUniformScalarFieldDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be6c340;
  local_60 = FUN_14979d11a;
  local_88 = FUN_14979d390;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa58cc FUN_145fa58cc body=57 status=ok
// SIG undefined FUN_145fa58cc(void)

void FUN_145fa58cc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc247a0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc247a0 = FUN_140002ddd(FUN_146750b8e,uVar1,L"UniformScalarFieldDataflowNode");
  }
  return;
}



// FUNCTION 145fa5906 FUN_145fa5906 body=496 status=ok
// SIG undefined FUN_145fa5906(void)

void FUN_145fa5906(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FUniformVectorFieldDataflowNode",1);
  FUN_1446ddc76(&local_e0,"UniformVectorField",1);
  FUN_1446ddc76(&local_e8,"Fields",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"UniformVectorField",1);
  FUN_1446ddc76(local_118,"FUniformVectorFieldDataflowNode",1);
  uVar3 = FUN_145fa5af8();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145fa5af8();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145fa5af8();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FUniformVectorFieldDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be6c360;
  local_60 = FUN_14979d3c8;
  local_88 = FUN_14979d68c;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa5af8 FUN_145fa5af8 body=57 status=ok
// SIG undefined FUN_145fa5af8(void)

void FUN_145fa5af8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc247b8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc247b8 = FUN_140002ddd(FUN_146750bee,uVar1,L"UniformVectorFieldDataflowNode");
  }
  return;
}



// FUNCTION 145fa5b32 FUN_145fa5b32 body=496 status=ok
// SIG undefined FUN_145fa5b32(void)

void FUN_145fa5b32(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FRadialVectorFieldDataflowNode",1);
  FUN_1446ddc76(&local_e0,"RadialVectorField",1);
  FUN_1446ddc76(&local_e8,"Fields",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"RadialVectorField",1);
  FUN_1446ddc76(local_118,"FRadialVectorFieldDataflowNode",1);
  uVar3 = FUN_145fa5d24();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145fa5d24();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145fa5d24();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FRadialVectorFieldDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be6c380;
  local_60 = FUN_14979d6c4;
  local_88 = FUN_14979d97a;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa5d24 FUN_145fa5d24 body=57 status=ok
// SIG undefined FUN_145fa5d24(void)

void FUN_145fa5d24(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc247d0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc247d0 = FUN_140002ddd(FUN_146750c4e,uVar1,L"RadialVectorFieldDataflowNode");
  }
  return;
}



// FUNCTION 145fa5d5e FUN_145fa5d5e body=496 status=ok
// SIG undefined FUN_145fa5d5e(void)

void FUN_145fa5d5e(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FRandomVectorFieldDataflowNode",1);
  FUN_1446ddc76(&local_e0,"RandomVectorField",1);
  FUN_1446ddc76(&local_e8,"Fields",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"RandomVectorField",1);
  FUN_1446ddc76(local_118,"FRandomVectorFieldDataflowNode",1);
  uVar3 = FUN_145fa5f50();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145fa5f50();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145fa5f50();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FRandomVectorFieldDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be6c3a0;
  local_60 = FUN_14979d9b2;
  local_88 = FUN_14979dc28;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa5f50 FUN_145fa5f50 body=57 status=ok
// SIG undefined FUN_145fa5f50(void)

void FUN_145fa5f50(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc247e8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc247e8 = FUN_140002ddd(FUN_146750cae,uVar1,L"RandomVectorFieldDataflowNode");
  }
  return;
}



// FUNCTION 145fa5f8a FUN_145fa5f8a body=496 status=ok
// SIG undefined FUN_145fa5f8a(void)

void FUN_145fa5f8a(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FNoiseFieldDataflowNode",1);
  FUN_1446ddc76(&local_e0,"NoiseField",1);
  FUN_1446ddc76(&local_e8,"Fields",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"NoiseField",1);
  FUN_1446ddc76(local_118,"FNoiseFieldDataflowNode",1);
  uVar3 = FUN_145fa617c();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145fa617c();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145fa617c();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FNoiseFieldDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be6c3c0;
  local_60 = FUN_14979dc60;
  local_88 = FUN_14979df6c;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa617c FUN_145fa617c body=57 status=ok
// SIG undefined FUN_145fa617c(void)

void FUN_145fa617c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24800 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24800 = FUN_140002ddd(FUN_146750d0e,uVar1,L"NoiseFieldDataflowNode");
  }
  return;
}



// FUNCTION 145fa61b6 FUN_145fa61b6 body=496 status=ok
// SIG undefined FUN_145fa61b6(void)

void FUN_145fa61b6(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FUniformIntegerFieldDataflowNode",1);
  FUN_1446ddc76(&local_e0,"UniformIntegerField",1);
  FUN_1446ddc76(&local_e8,"Fields",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"UniformIntegerField",1);
  FUN_1446ddc76(local_118,"FUniformIntegerFieldDataflowNode",1);
  uVar3 = FUN_145fa63a8();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145fa63a8();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145fa63a8();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FUniformIntegerFieldDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be6c3e0;
  local_60 = FUN_14979dfa4;
  local_88 = FUN_14979e214;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa63a8 FUN_145fa63a8 body=57 status=ok
// SIG undefined FUN_145fa63a8(void)

void FUN_145fa63a8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24818 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24818 = FUN_140002ddd(FUN_146750d6e,uVar1,L"UniformIntegerFieldDataflowNode");
  }
  return;
}



// FUNCTION 145fa63e2 FUN_145fa63e2 body=496 status=ok
// SIG undefined FUN_145fa63e2(void)

void FUN_145fa63e2(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FWaveScalarFieldDataflowNode",1);
  FUN_1446ddc76(&local_e0,"WaveScalarField",1);
  FUN_1446ddc76(&local_e8,"Fields",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"WaveScalarField",1);
  FUN_1446ddc76(local_118,"FWaveScalarFieldDataflowNode",1);
  uVar3 = FUN_145fa65d4();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145fa65d4();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145fa65d4();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FWaveScalarFieldDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be6c400;
  local_60 = FUN_14979e24c;
  local_88 = FUN_14979e5d4;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa65d4 FUN_145fa65d4 body=57 status=ok
// SIG undefined FUN_145fa65d4(void)

void FUN_145fa65d4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24848 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24848 = FUN_140002ddd(FUN_146750dfd,uVar1,L"WaveScalarFieldDataflowNode");
  }
  return;
}



// FUNCTION 145fa660e FUN_145fa660e body=496 status=ok
// SIG undefined FUN_145fa660e(void)

void FUN_145fa660e(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FSumScalarFieldDataflowNode",1);
  FUN_1446ddc76(&local_e0,"SumScalarField",1);
  FUN_1446ddc76(&local_e8,"Fields",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"SumScalarField",1);
  FUN_1446ddc76(local_118,"FSumScalarFieldDataflowNode",1);
  uVar3 = FUN_145fa6800();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145fa6800();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145fa6800();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FSumScalarFieldDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be6c420;
  local_60 = FUN_14979e60c;
  local_88 = FUN_14979e884;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa6800 FUN_145fa6800 body=57 status=ok
// SIG undefined FUN_145fa6800(void)

void FUN_145fa6800(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24878 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24878 = FUN_140002ddd(FUN_146750e8b,uVar1,L"SumScalarFieldDataflowNode");
  }
  return;
}



// FUNCTION 145fa683a FUN_145fa683a body=496 status=ok
// SIG undefined FUN_145fa683a(void)

void FUN_145fa683a(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FSumVectorFieldDataflowNode",1);
  FUN_1446ddc76(&local_e0,"SumVectorField",1);
  FUN_1446ddc76(&local_e8,"Fields",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"SumVectorField",1);
  FUN_1446ddc76(local_118,"FSumVectorFieldDataflowNode",1);
  uVar3 = FUN_145fa6a2c();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145fa6a2c();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145fa6a2c();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FSumVectorFieldDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be6c440;
  local_60 = FUN_14979e8bc;
  local_88 = FUN_14979ebf0;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa6a2c FUN_145fa6a2c body=57 status=ok
// SIG undefined FUN_145fa6a2c(void)

void FUN_145fa6a2c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc248a8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc248a8 = FUN_140002ddd(FUN_146750f19,uVar1,L"SumVectorFieldDataflowNode");
  }
  return;
}



// FUNCTION 145fa6a66 FUN_145fa6a66 body=496 status=ok
// SIG undefined FUN_145fa6a66(void)

void FUN_145fa6a66(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FFieldMakeDenseFloatArrayDataflowNode",1);
  FUN_1446ddc76(&local_e0,"FieldMakeDenseFloatArray",1);
  FUN_1446ddc76(&local_e8,"Fields",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"FieldMakeDenseFloatArray",1);
  FUN_1446ddc76(local_118,"FFieldMakeDenseFloatArrayDataflowNode",1);
  uVar3 = FUN_145fa6c58();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145fa6c58();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145fa6c58();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FFieldMakeDenseFloatArrayDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be6c460;
  local_60 = FUN_14979ec28;
  local_88 = FUN_14979ee12;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa6c58 FUN_145fa6c58 body=57 status=ok
// SIG undefined FUN_145fa6c58(void)

void FUN_145fa6c58(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc248c0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc248c0 = FUN_140002ddd(FUN_146750f78,uVar1,L"FieldMakeDenseFloatArrayDataflowNode");
  }
  return;
}



// FUNCTION 145fa6c92 FUN_145fa6c92 body=496 status=ok
// SIG undefined FUN_145fa6c92(void)

void FUN_145fa6c92(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FAddMaterialToCollectionDataflowNode",1);
  FUN_1446ddc76(&local_e0,"AddMaterialToCollection",1);
  FUN_1446ddc76(&local_e8,"GeometryCollection|Materials",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"AddMaterialToCollection",1);
  FUN_1446ddc76(local_118,"FAddMaterialToCollectionDataflowNode",1);
  uVar3 = FUN_145fa6e84();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145fa6e84();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145fa6e84();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FAddMaterialToCollectionDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be6c880;
  local_60 = FUN_1497a58ee;
  local_88 = FUN_1497a5b6a;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa6e84 FUN_145fa6e84 body=57 status=ok
// SIG undefined FUN_145fa6e84(void)

void FUN_145fa6e84(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc248d8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc248d8 = FUN_140002ddd(FUN_146751418,uVar1,L"AddMaterialToCollectionDataflowNode");
  }
  return;
}



// FUNCTION 145fa6ebe FUN_145fa6ebe body=496 status=ok
// SIG undefined FUN_145fa6ebe(void)

void FUN_145fa6ebe(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FReAssignMaterialInCollectionDataflowNode",1);
  FUN_1446ddc76(&local_e0,"ReAssignMaterialInCollection",1);
  FUN_1446ddc76(&local_e8,"GeometryCollection|Materials",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"ReAssignMaterialInCollection",1);
  FUN_1446ddc76(local_118,"FReAssignMaterialInCollectionDataflowNode",1);
  uVar3 = FUN_145fa70b0();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145fa70b0();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145fa70b0();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FReAssignMaterialInCollectionDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be6c8a0;
  local_60 = FUN_1497a5ba2;
  local_88 = FUN_1497a5e22;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa70b0 FUN_145fa70b0 body=57 status=ok
// SIG undefined FUN_145fa70b0(void)

void FUN_145fa70b0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc248f0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc248f0 = FUN_140002ddd(FUN_146751478,uVar1,L"ReAssignMaterialInCollectionDataflowNode");
  }
  return;
}



// FUNCTION 145fa70ea FUN_145fa70ea body=496 status=ok
// SIG undefined FUN_145fa70ea(void)

void FUN_145fa70ea(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FMaterialsInfoDataflowNode",1);
  FUN_1446ddc76(&local_e0,"MaterialsInfo",1);
  FUN_1446ddc76(&local_e8,"GeometryCollection|Materials",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"MaterialsInfo",1);
  FUN_1446ddc76(local_118,"FMaterialsInfoDataflowNode",1);
  uVar3 = FUN_145fa72dc();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145fa72dc();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145fa72dc();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FMaterialsInfoDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be6c8c0;
  local_60 = FUN_1497a5e5a;
  local_88 = FUN_1497a5fd6;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa72dc FUN_145fa72dc body=57 status=ok
// SIG undefined FUN_145fa72dc(void)

void FUN_145fa72dc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24908 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24908 = FUN_140002ddd(FUN_1467514d8,uVar1,L"MaterialsInfoDataflowNode");
  }
  return;
}



// FUNCTION 145fa7316 FUN_145fa7316 body=496 status=ok
// SIG undefined FUN_145fa7316(void)

void FUN_145fa7316(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FGetMaterialFromMaterialsArrayDataflowNode",1);
  FUN_1446ddc76(&local_e0,"GetMaterialFromMaterialsArray",1);
  FUN_1446ddc76(&local_e8,"Utilities|Materials",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"GetMaterialFromMaterialsArray",1);
  FUN_1446ddc76(local_118,"FGetMaterialFromMaterialsArrayDataflowNode",1);
  uVar3 = FUN_145fa7508();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145fa7508();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145fa7508();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FGetMaterialFromMaterialsArrayDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be6c8e0;
  local_60 = FUN_1497a600e;
  local_88 = FUN_1497a61ba;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa7508 FUN_145fa7508 body=57 status=ok
// SIG undefined FUN_145fa7508(void)

void FUN_145fa7508(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24920 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24920 = FUN_140002ddd(FUN_146751538,uVar1,L"GetMaterialFromMaterialsArrayDataflowNode");
  }
  return;
}



// FUNCTION 145fa7542 FUN_145fa7542 body=496 status=ok
// SIG undefined FUN_145fa7542(void)

void FUN_145fa7542(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FSetMaterialInMaterialsArrayDataflowNode",1);
  FUN_1446ddc76(&local_e0,"SetMaterialInMaterialsArray",1);
  FUN_1446ddc76(&local_e8,"Utilities|Materials",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"SetMaterialInMaterialsArray",1);
  FUN_1446ddc76(local_118,"FSetMaterialInMaterialsArrayDataflowNode",1);
  uVar3 = FUN_145fa7734();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145fa7734();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145fa7734();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FSetMaterialInMaterialsArrayDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be6c900;
  local_60 = FUN_1497a61f2;
  local_88 = FUN_1497a63c8;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa7734 FUN_145fa7734 body=57 status=ok
// SIG undefined FUN_145fa7734(void)

void FUN_145fa7734(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24950 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24950 = FUN_140002ddd(FUN_1467515c7,uVar1,L"SetMaterialInMaterialsArrayDataflowNode");
  }
  return;
}



// FUNCTION 145fa776e FUN_145fa776e body=496 status=ok
// SIG undefined FUN_145fa776e(void)

void FUN_145fa776e(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FMakeMaterialDataflowNode",1);
  FUN_1446ddc76(&local_e0,"MakeMaterial",1);
  FUN_1446ddc76(&local_e8,"Generators|Material",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"MakeMaterial",1);
  FUN_1446ddc76(local_118,"FMakeMaterialDataflowNode",1);
  uVar3 = FUN_145fa7960();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145fa7960();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145fa7960();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FMakeMaterialDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be6c920;
  local_60 = FUN_1497a6400;
  local_88 = FUN_1497a64f0;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa7960 FUN_145fa7960 body=57 status=ok
// SIG undefined FUN_145fa7960(void)

void FUN_145fa7960(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24968 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24968 = FUN_140002ddd(FUN_146751626,uVar1,L"MakeMaterialDataflowNode");
  }
  return;
}



// FUNCTION 145fa799a FUN_145fa799a body=496 status=ok
// SIG undefined FUN_145fa799a(void)

void FUN_145fa799a(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FMakeMaterialsArrayDataflowNode",1);
  FUN_1446ddc76(&local_e0,"MakeMaterialsArray",1);
  FUN_1446ddc76(&local_e8,"Generators|Material",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"MakeMaterialsArray",1);
  FUN_1446ddc76(local_118,"FMakeMaterialsArrayDataflowNode",1);
  uVar3 = FUN_145fa7b8c();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145fa7b8c();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145fa7b8c();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FMakeMaterialsArrayDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be6c940;
  local_60 = FUN_1497a6528;
  local_88 = FUN_1497a6618;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa7b8c FUN_145fa7b8c body=57 status=ok
// SIG undefined FUN_145fa7b8c(void)

void FUN_145fa7b8c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24980 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24980 = FUN_140002ddd(FUN_146751686,uVar1,L"MakeMaterialsArrayDataflowNode");
  }
  return;
}



// FUNCTION 145fa7bc6 FUN_145fa7bc6 body=496 status=ok
// SIG undefined FUN_145fa7bc6(void)

void FUN_145fa7bc6(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FCloseGeometryOnCollectionDataflowNode",1);
  FUN_1446ddc76(&local_e0,"CloseGeometryOnCollection",1);
  FUN_1446ddc76(&local_e8,"GeometryCollection",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"CloseGeometryOnCollection",1);
  FUN_1446ddc76(local_118,"FCloseGeometryOnCollectionDataflowNode",1);
  uVar3 = FUN_145fa7db8();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145fa7db8();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145fa7db8();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FCloseGeometryOnCollectionDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be6e090;
  local_60 = FUN_1497bab96;
  local_88 = FUN_1497bad04;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa7db8 FUN_145fa7db8 body=57 status=ok
// SIG undefined FUN_145fa7db8(void)

void FUN_145fa7db8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc249b0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc249b0 = FUN_140002ddd(FUN_1467516e6,uVar1,L"CloseGeometryOnCollectionDataflowNode");
  }
  return;
}



// FUNCTION 145fa7df2 FUN_145fa7df2 body=496 status=ok
// SIG undefined FUN_145fa7df2(void)

void FUN_145fa7df2(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FCreateColorArrayFromFloatArrayDataflowNode",1);
  FUN_1446ddc76(&local_e0,"CreateColorArrayFromFloatArray",1);
  FUN_1446ddc76(&local_e8,"Collection|Utilities",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"CreateColorArrayFromFloatArray",1);
  FUN_1446ddc76(local_118,"FCreateColorArrayFromFloatArrayDataflowNode",1);
  uVar3 = FUN_145fa7fe4();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145fa7fe4();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145fa7fe4();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FCreateColorArrayFromFloatArrayDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be6d930;
  local_60 = FUN_1497b8552;
  local_88 = FUN_1497b8708;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa7fe4 FUN_145fa7fe4 body=57 status=ok
// SIG undefined FUN_145fa7fe4(void)

void FUN_145fa7fe4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24bc0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24bc0 = FUN_140002ddd(FUN_146751f36,uVar1,L"CreateColorArrayFromFloatArrayDataflowNode")
    ;
  }
  return;
}



// FUNCTION 145fa801e FUN_145fa801e body=496 status=ok
// SIG undefined FUN_145fa801e(void)

void FUN_145fa801e(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FSetVertexColorFromFloatArrayDataflowNode",1);
  FUN_1446ddc76(&local_e0,"SetVertexColorFromFloatArray",1);
  FUN_1446ddc76(&local_e8,"Collection|Utilities",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"SetVertexColorFromFloatArray",1);
  FUN_1446ddc76(local_118,"FSetVertexColorFromFloatArrayDataflowNode",1);
  uVar3 = FUN_145fa8210();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145fa8210();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145fa8210();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FSetVertexColorFromFloatArrayDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be6db50;
  local_60 = FUN_1497b8828;
  local_88 = FUN_1497b8c68;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa8210 FUN_145fa8210 body=57 status=ok
// SIG undefined FUN_145fa8210(void)

void FUN_145fa8210(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc26138 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc26138 = FUN_140002ddd(FUN_14675b480,uVar1,L"SetVertexColorFromFloatArrayDataflowNode");
  }
  return;
}



// FUNCTION 145fa824a FUN_145fa824a body=496 status=ok
// SIG undefined FUN_145fa824a(void)

void FUN_145fa824a(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FSetVertexColorFromVertexIndicesDataflowNode",1);
  FUN_1446ddc76(&local_e0,"SetVertexColorFromVertexIndices",1);
  FUN_1446ddc76(&local_e8,"Collection|Utilities",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"SetVertexColorFromVertexIndices",1);
  FUN_1446ddc76(local_118,"FSetVertexColorFromVertexIndicesDataflowNode",1);
  uVar3 = FUN_145fa843c();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145fa843c();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145fa843c();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FSetVertexColorFromVertexIndicesDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be6dcd0;
  local_60 = FUN_1497b8ca0;
  local_88 = FUN_1497b90d8;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa843c FUN_145fa843c body=57 status=ok
// SIG undefined FUN_145fa843c(void)

void FUN_145fa843c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc26150 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc26150 =
         FUN_140002ddd(FUN_14675b4e0,uVar1,L"SetVertexColorFromVertexIndicesDataflowNode");
  }
  return;
}



// FUNCTION 145fa8476 FUN_145fa8476 body=496 status=ok
// SIG undefined FUN_145fa8476(void)

void FUN_145fa8476(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FSetVertexColorFromVertexSelectionDataflowNode",1);
  FUN_1446ddc76(&local_e0,"SetVertexColorFromVertexSelection",1);
  FUN_1446ddc76(&local_e8,"Collection|Utilities",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"SetVertexColorFromVertexSelection",1);
  FUN_1446ddc76(local_118,"FSetVertexColorFromVertexSelectionDataflowNode",1);
  uVar3 = FUN_145fa8668();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145fa8668();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145fa8668();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FSetVertexColorFromVertexSelectionDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be6de60;
  local_60 = FUN_1497b9110;
  local_88 = FUN_1497b9556;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa8668 FUN_145fa8668 body=57 status=ok
// SIG undefined FUN_145fa8668(void)

void FUN_145fa8668(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc26168 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc26168 =
         FUN_140002ddd(FUN_14675b540,uVar1,L"SetVertexColorFromVertexSelectionDataflowNode");
  }
  return;
}



// FUNCTION 145fa86a2 FUN_145fa86a2 body=496 status=ok
// SIG undefined FUN_145fa86a2(void)

void FUN_145fa86a2(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FSkeletalMeshToCollectionDataflowNode",1);
  FUN_1446ddc76(&local_e0,"SkeletalMeshToCollection",1);
  FUN_1446ddc76(&local_e8,"GeometryCollection",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"SkeletalMeshToCollection",1);
  FUN_1446ddc76(local_118,"FSkeletalMeshToCollectionDataflowNode",1);
  uVar3 = FUN_145fa8894();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145fa8894();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145fa8894();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FSkeletalMeshToCollectionDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be6de80;
  local_60 = FUN_1497b958e;
  local_88 = FUN_1497b9716;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa8894 FUN_145fa8894 body=57 status=ok
// SIG undefined FUN_145fa8894(void)

void FUN_145fa8894(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc249c8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc249c8 = FUN_140002ddd(FUN_146751746,uVar1,L"SkeletalMeshToCollectionDataflowNode");
  }
  return;
}



// FUNCTION 145fa88ce FUN_145fa88ce body=496 status=ok
// SIG undefined FUN_145fa88ce(void)

void FUN_145fa88ce(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FStaticMeshToCollectionDataflowNode",1);
  FUN_1446ddc76(&local_e0,"StaticMeshToCollection",1);
  FUN_1446ddc76(&local_e8,"GeometryCollection|Asset",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"StaticMeshToCollection",1);
  FUN_1446ddc76(local_118,"FStaticMeshToCollectionDataflowNode",1);
  uVar3 = FUN_145fa8ac0();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145fa8ac0();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145fa8ac0();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FStaticMeshToCollectionDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be6df00;
  local_60 = FUN_1497b9e40;
  local_88 = FUN_1497b9ef0;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa8ac0 FUN_145fa8ac0 body=57 status=ok
// SIG undefined FUN_145fa8ac0(void)

void FUN_145fa8ac0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc249f8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc249f8 = FUN_140002ddd(FUN_146751806,uVar1,L"StaticMeshToCollectionDataflowNode");
  }
  return;
}



// FUNCTION 145fa8afa FUN_145fa8afa body=496 status=ok
// SIG undefined FUN_145fa8afa(void)

void FUN_145fa8afa(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FSkeletonToCollectionDataflowNode",1);
  FUN_1446ddc76(&local_e0,"SkeletonToCollection",1);
  FUN_1446ddc76(&local_e8,"GeometryCollection",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"SkeletonToCollection",1);
  FUN_1446ddc76(local_118,"FSkeletonToCollectionDataflowNode",1);
  uVar3 = FUN_145fa8cec();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145fa8cec();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145fa8cec();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FSkeletonToCollectionDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be6df40;
  local_60 = FUN_1497ba0e2;
  local_88 = FUN_1497ba262;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa8cec FUN_145fa8cec body=57 status=ok
// SIG undefined FUN_145fa8cec(void)

void FUN_145fa8cec(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc249e0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc249e0 = FUN_140002ddd(FUN_1467517a6,uVar1,L"SkeletonToCollectionDataflowNode");
  }
  return;
}



// FUNCTION 145fa8d26 FUN_145fa8d26 body=496 status=ok
// SIG undefined FUN_145fa8d26(void)

void FUN_145fa8d26(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FMakeDataflowConvexDecompositionSettingsNode",1);
  FUN_1446ddc76(&local_e0,"MakeConvexDecompositionSettings",1);
  FUN_1446ddc76(&local_e8,"GeometryCollection|Utilities",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"MakeConvexDecompositionSettings",1);
  FUN_1446ddc76(local_118,"FMakeDataflowConvexDecompositionSettingsNode",1);
  uVar3 = FUN_145fa8f18();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145fa8f18();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145fa8f18();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FMakeDataflowConvexDecompositionSettingsNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be6e5f0;
  local_60 = FUN_1497c1542;
  local_88 = FUN_1497c15f2;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa8f18 FUN_145fa8f18 body=57 status=ok
// SIG undefined FUN_145fa8f18(void)

void FUN_145fa8f18(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24a40 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24a40 =
         FUN_140002ddd(FUN_14675192e,uVar1,L"MakeDataflowConvexDecompositionSettingsNode");
  }
  return;
}



// FUNCTION 145fa8f52 FUN_145fa8f52 body=496 status=ok
// SIG undefined FUN_145fa8f52(void)

void FUN_145fa8f52(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FCreateLeafConvexHullsDataflowNode",1);
  FUN_1446ddc76(&local_e0,"CreateLeafConvexHulls",1);
  FUN_1446ddc76(&local_e8,"GeometryCollection|Utilities",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"CreateLeafConvexHulls",1);
  FUN_1446ddc76(local_118,"FCreateLeafConvexHullsDataflowNode",1);
  uVar3 = FUN_145fa9144();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145fa9144();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145fa9144();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FCreateLeafConvexHullsDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be6e610;
  local_60 = FUN_1497c162a;
  local_88 = FUN_1497c16da;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa9144 FUN_145fa9144 body=57 status=ok
// SIG undefined FUN_145fa9144(void)

void FUN_145fa9144(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24a58 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24a58 = FUN_140002ddd(FUN_14675198e,uVar1,L"CreateLeafConvexHullsDataflowNode");
  }
  return;
}



// FUNCTION 145fa917e FUN_145fa917e body=496 status=ok
// SIG undefined FUN_145fa917e(void)

void FUN_145fa917e(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FSimplifyConvexHullsDataflowNode",1);
  FUN_1446ddc76(&local_e0,"SimplifyConvexHulls",1);
  FUN_1446ddc76(&local_e8,"GeometryCollection|Utilities",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"SimplifyConvexHulls",1);
  FUN_1446ddc76(local_118,"FSimplifyConvexHullsDataflowNode",1);
  uVar3 = FUN_145fa9370();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145fa9370();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145fa9370();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FSimplifyConvexHullsDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be6e630;
  local_60 = FUN_1497c1712;
  local_88 = FUN_1497c17c2;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa9370 FUN_145fa9370 body=57 status=ok
// SIG undefined FUN_145fa9370(void)

void FUN_145fa9370(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24a70 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24a70 = FUN_140002ddd(FUN_1467519ee,uVar1,L"SimplifyConvexHullsDataflowNode");
  }
  return;
}



// FUNCTION 145fa93aa FUN_145fa93aa body=496 status=ok
// SIG undefined FUN_145fa93aa(void)

void FUN_145fa93aa(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FCreateNonOverlappingConvexHullsDataflowNode",1);
  FUN_1446ddc76(&local_e0,"CreateNonOverlappingConvexHulls",1);
  FUN_1446ddc76(&local_e8,"GeometryCollection|Utilities",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"CreateNonOverlappingConvexHulls",1);
  FUN_1446ddc76(local_118,"FCreateNonOverlappingConvexHullsDataflowNode",1);
  uVar3 = FUN_145fa959c();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145fa959c();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145fa959c();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FCreateNonOverlappingConvexHullsDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be6e650;
  local_60 = FUN_1497c17fa;
  local_88 = FUN_1497c18aa;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa959c FUN_145fa959c body=57 status=ok
// SIG undefined FUN_145fa959c(void)

void FUN_145fa959c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24a88 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24a88 =
         FUN_140002ddd(FUN_146751a4e,uVar1,L"CreateNonOverlappingConvexHullsDataflowNode");
  }
  return;
}



// FUNCTION 145fa95d6 FUN_145fa95d6 body=496 status=ok
// SIG undefined FUN_145fa95d6(void)

void FUN_145fa95d6(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FGenerateClusterConvexHullsFromLeafHullsDataflowNode",1);
  FUN_1446ddc76(&local_e0,"GenerateClusterConvexHullsFromLeafHulls",1);
  FUN_1446ddc76(&local_e8,"GeometryCollection|Utilities",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"GenerateClusterConvexHullsFromLeafHulls",1);
  FUN_1446ddc76(local_118,"FGenerateClusterConvexHullsFromLeafHullsDataflowNode",1);
  uVar3 = FUN_145fa97c8();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145fa97c8();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145fa97c8();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FGenerateClusterConvexHullsFromLeafHullsDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be6e670;
  local_60 = FUN_1497c18e2;
  local_88 = FUN_1497c1992;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa97c8 FUN_145fa97c8 body=57 status=ok
// SIG undefined FUN_145fa97c8(void)

void FUN_145fa97c8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24ad0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24ad0 =
         FUN_140002ddd(FUN_146751b77,uVar1,L"GenerateClusterConvexHullsFromLeafHullsDataflowNode");
  }
  return;
}



// FUNCTION 145fa9802 FUN_145fa9802 body=496 status=ok
// SIG undefined FUN_145fa9802(void)

void FUN_145fa9802(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FGenerateClusterConvexHullsFromChildrenHullsDataflowNode",1);
  FUN_1446ddc76(&local_e0,"GenerateClusterConvexHullsFromChildrenHulls",1);
  FUN_1446ddc76(&local_e8,"GeometryCollection|Utilities",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"GenerateClusterConvexHullsFromChildrenHulls",1);
  FUN_1446ddc76(local_118,"FGenerateClusterConvexHullsFromChildrenHullsDataflowNode",1);
  uVar3 = FUN_145fa99f4();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145fa99f4();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145fa99f4();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FGenerateClusterConvexHullsFromChildrenHullsDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be6e690;
  local_60 = FUN_1497c19ca;
  local_88 = FUN_1497c1a7a;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa99f4 FUN_145fa99f4 body=57 status=ok
// SIG undefined FUN_145fa99f4(void)

void FUN_145fa99f4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24ae8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24ae8 =
         FUN_140002ddd(FUN_146751bd6,uVar1,
                       L"GenerateClusterConvexHullsFromChildrenHullsDataflowNode");
  }
  return;
}



// FUNCTION 145fa9a2e FUN_145fa9a2e body=496 status=ok
// SIG undefined FUN_145fa9a2e(void)

void FUN_145fa9a2e(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FClearConvexHullsDataflowNode",1);
  FUN_1446ddc76(&local_e0,"ClearConvexHulls",1);
  FUN_1446ddc76(&local_e8,"GeometryCollection|Utilities",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"ClearConvexHulls",1);
  FUN_1446ddc76(local_118,"FClearConvexHullsDataflowNode",1);
  uVar3 = FUN_145fa9c20();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145fa9c20();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145fa9c20();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FClearConvexHullsDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be6e6b0;
  local_60 = FUN_1497c1ab2;
  local_88 = FUN_1497c1c5c;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa9c20 FUN_145fa9c20 body=57 status=ok
// SIG undefined FUN_145fa9c20(void)

void FUN_145fa9c20(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24b00 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24b00 = FUN_140002ddd(FUN_146751c36,uVar1,L"ClearConvexHullsDataflowNode");
  }
  return;
}



// FUNCTION 145fa9c5a FUN_145fa9c5a body=496 status=ok
// SIG undefined FUN_145fa9c5a(void)

void FUN_145fa9c5a(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FMergeConvexHullsDataflowNode",1);
  FUN_1446ddc76(&local_e0,"MergeConvexHulls",1);
  FUN_1446ddc76(&local_e8,"GeometryCollection|Utilities",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"MergeConvexHulls",1);
  FUN_1446ddc76(local_118,"FMergeConvexHullsDataflowNode",1);
  uVar3 = FUN_145fa9e4c();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145fa9e4c();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145fa9e4c();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FMergeConvexHullsDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be6e6d0;
  local_60 = FUN_1497c1c94;
  local_88 = FUN_1497c1d44;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa9e4c FUN_145fa9e4c body=57 status=ok
// SIG undefined FUN_145fa9e4c(void)

void FUN_145fa9e4c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24b18 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24b18 = FUN_140002ddd(FUN_146751c96,uVar1,L"MergeConvexHullsDataflowNode");
  }
  return;
}



// FUNCTION 145fa9e86 FUN_145fa9e86 body=496 status=ok
// SIG undefined FUN_145fa9e86(void)

void FUN_145fa9e86(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FUpdateVolumeAttributesDataflowNode",1);
  FUN_1446ddc76(&local_e0,"UpdateVolumeAttributes",1);
  FUN_1446ddc76(&local_e8,"GeometryCollection|Utilities",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"UpdateVolumeAttributes",1);
  FUN_1446ddc76(local_118,"FUpdateVolumeAttributesDataflowNode",1);
  uVar3 = FUN_145faa078();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145faa078();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145faa078();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FUpdateVolumeAttributesDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be6e6f0;
  local_60 = FUN_1497c1d7c;
  local_88 = FUN_1497c1e2c;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145faa078 FUN_145faa078 body=57 status=ok
// SIG undefined FUN_145faa078(void)

void FUN_145faa078(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24b30 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24b30 = FUN_140002ddd(FUN_146751cf6,uVar1,L"UpdateVolumeAttributesDataflowNode");
  }
  return;
}



// FUNCTION 145faa0b2 FUN_145faa0b2 body=496 status=ok
// SIG undefined FUN_145faa0b2(void)

void FUN_145faa0b2(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FGetConvexHullVolumeDataflowNode",1);
  FUN_1446ddc76(&local_e0,"GetConvexHullVolume",1);
  FUN_1446ddc76(&local_e8,"GeometryCollection|Utilities",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"GetConvexHullVolume",1);
  FUN_1446ddc76(local_118,"FGetConvexHullVolumeDataflowNode",1);
  uVar3 = FUN_145faa2a4();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145faa2a4();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145faa2a4();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FGetConvexHullVolumeDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be6e710;
  local_60 = FUN_1497c1e64;
  local_88 = FUN_1497c1f14;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145faa2a4 FUN_145faa2a4 body=57 status=ok
// SIG undefined FUN_145faa2a4(void)

void FUN_145faa2a4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24b48 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24b48 = FUN_140002ddd(FUN_146751d56,uVar1,L"GetConvexHullVolumeDataflowNode");
  }
  return;
}



// FUNCTION 145faa2de FUN_145faa2de body=496 status=ok
// SIG undefined FUN_145faa2de(void)

void FUN_145faa2de(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FFixTinyGeoDataflowNode",1);
  FUN_1446ddc76(&local_e0,"FixTinyGeo",1);
  FUN_1446ddc76(&local_e8,"GeometryCollection|Fracture|Utilities",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"FixTinyGeo",1);
  FUN_1446ddc76(local_118,"FFixTinyGeoDataflowNode",1);
  uVar3 = FUN_145faa4d0();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145faa4d0();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145faa4d0();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FFixTinyGeoDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be6e730;
  local_60 = FUN_1497c1f4c;
  local_88 = FUN_1497c2186;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145faa4d0 FUN_145faa4d0 body=57 status=ok
// SIG undefined FUN_145faa4d0(void)

void FUN_145faa4d0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24b60 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24b60 = FUN_140002ddd(FUN_146751db6,uVar1,L"FixTinyGeoDataflowNode");
  }
  return;
}



// FUNCTION 145faa50a FUN_145faa50a body=496 status=ok
// SIG undefined FUN_145faa50a(void)

void FUN_145faa50a(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FRecomputeNormalsInGeometryCollectionDataflowNode",1);
  FUN_1446ddc76(&local_e0,"RecomputeNormalsInGeometryCollection",1);
  FUN_1446ddc76(&local_e8,"GeometryCollection|Fracture|Utilities",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"RecomputeNormalsInGeometryCollection",1);
  FUN_1446ddc76(local_118,"FRecomputeNormalsInGeometryCollectionDataflowNode",1);
  uVar3 = FUN_145faa6fc();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145faa6fc();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145faa6fc();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FRecomputeNormalsInGeometryCollectionDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be6e750;
  local_60 = FUN_1497c21be;
  local_88 = FUN_1497c2382;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145faa6fc FUN_145faa6fc body=57 status=ok
// SIG undefined FUN_145faa6fc(void)

void FUN_145faa6fc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24b78 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24b78 =
         FUN_140002ddd(FUN_146751e16,uVar1,L"RecomputeNormalsInGeometryCollectionDataflowNode");
  }
  return;
}



// FUNCTION 145faa736 FUN_145faa736 body=496 status=ok
// SIG undefined FUN_145faa736(void)

void FUN_145faa736(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FResampleGeometryCollectionDataflowNode",1);
  FUN_1446ddc76(&local_e0,"ResampleGeometryCollection",1);
  FUN_1446ddc76(&local_e8,"GeometryCollection|Fracture|Utilities",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"ResampleGeometryCollection",1);
  FUN_1446ddc76(local_118,"FResampleGeometryCollectionDataflowNode",1);
  uVar3 = FUN_145faa928();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145faa928();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145faa928();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FResampleGeometryCollectionDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be6e770;
  local_60 = FUN_1497c23ba;
  local_88 = FUN_1497c25a6;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145faa928 FUN_145faa928 body=57 status=ok
// SIG undefined FUN_145faa928(void)

void FUN_145faa928(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24b90 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24b90 = FUN_140002ddd(FUN_146751e76,uVar1,L"ResampleGeometryCollectionDataflowNode");
  }
  return;
}



// FUNCTION 145faa962 FUN_145faa962 body=496 status=ok
// SIG undefined FUN_145faa962(void)

void FUN_145faa962(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FValidateGeometryCollectionDataflowNode",1);
  FUN_1446ddc76(&local_e0,"ValidateGeometryCollection",1);
  FUN_1446ddc76(&local_e8,"GeometryCollection|Fracture|Utilities",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"ValidateGeometryCollection",1);
  FUN_1446ddc76(local_118,"FValidateGeometryCollectionDataflowNode",1);
  uVar3 = FUN_145faab54();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145faab54();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145faab54();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FValidateGeometryCollectionDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be6e790;
  local_60 = FUN_1497c25de;
  local_88 = FUN_1497c2748;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145faab54 FUN_145faab54 body=57 status=ok
// SIG undefined FUN_145faab54(void)

void FUN_145faab54(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24ba8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24ba8 = FUN_140002ddd(FUN_146751ed6,uVar1,L"ValidateGeometryCollectionDataflowNode");
  }
  return;
}



// FUNCTION 145faab8d FUN_145faab8d body=643 status=ok
// SIG undefined FUN_145faab8d(void)

void FUN_145faab8d(void)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145fbe11e();
  FUN_145fbe3ac();
  FUN_145fbe63a();
  FUN_145fbe8c8();
  FUN_145fbeb56();
  FUN_145fbede4();
  FUN_145fbf072();
  FUN_145fbf300();
  FUN_145fbf58e();
  FUN_145fbf81c();
  FUN_145fbfaaa();
  FUN_145fbfd38();
  FUN_145fbffc6();
  FUN_145fc0254();
  FUN_145fc04e2();
  FUN_145fc0770();
  FUN_145fc09fe();
  FUN_145fc0c8c();
  FUN_145fc0f1a();
  FUN_145fc11a8();
  FUN_145fc1436();
  FUN_145fc16c4();
  FUN_145fc1952();
  FUN_145fc1be0();
  FUN_145fc1e6e();
  FUN_145fc20fc();
  FUN_145fc238a();
  FUN_145fc2618();
  FUN_145fc28a6();
  FUN_145fc2b34();
  FUN_145fc2dc2();
  FUN_145fc3050();
  FUN_145fc32de();
  FUN_145fc356c();
  FUN_145fc37fa();
  uVar1 = thunk_FUN_1415ac724();
  local_50 = 0x3f0ccccd;
  uStack_4c = 0x3ee66666;
  uStack_48 = 0x3f800000;
  uStack_44 = 0x3f800000;
  local_40 = 0;
  uStack_38 = 0x3f00000000000000;
  FUN_1446ddc76(local_58,"GeometryCollection",1);
  FUN_1415ac798(uVar1,local_58,&local_50);
  uVar1 = thunk_FUN_1415ac724();
  local_50 = 0x3f800000;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0x3f800000;
  local_40 = 0;
  uStack_38 = 0x3f00000000000000;
  FUN_1446ddc76(local_58,"Development",1);
  FUN_1415ac798(uVar1,local_58,&local_50);
  uVar1 = thunk_FUN_1415ac724();
  local_50 = 0x3f000000;
  uStack_4c = 0;
  uStack_48 = 0x3f000000;
  uStack_44 = 0x3f800000;
  local_40 = 0;
  uStack_38 = 0x3f00000000000000;
  FUN_1446ddc76(local_58,"Utilities|String",1);
  FUN_1415ac798(uVar1,local_58,&local_50);
  uVar1 = thunk_FUN_1415ac724();
  local_50 = 0x3f800000;
  uStack_4c = 0x3f800000;
  uStack_48 = 0x3f4ccccd;
  uStack_44 = 0x3f800000;
  local_40 = 0;
  uStack_38 = 0x3f00000000000000;
  FUN_1446ddc76(local_58,"Fracture",1);
  FUN_1415ac798(uVar1,local_58,&local_50);
  uVar1 = thunk_FUN_1415ac724();
  local_50 = 0x3f800000;
  uStack_4c = 0x3f800000;
  uStack_48 = 0;
  uStack_44 = 0x3f800000;
  local_40 = 0;
  uStack_38 = 0x3f00000000000000;
  FUN_1446ddc76(local_58,"Utilities",1);
  FUN_1415ac798(uVar1,local_58,&local_50);
  uVar1 = thunk_FUN_1415ac724();
  local_50 = 0x3ecccccd;
  uStack_4c = 0x3f4ccccd;
  uStack_48 = 0;
  uStack_44 = 0x3f800000;
  local_40 = 0;
  uStack_38 = 0x3f00000000000000;
  FUN_1446ddc76(local_58,"Generators",1);
  FUN_1415ac798(uVar1,local_58,&local_50);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145faae12 FUN_145faae12 body=147 status=ok
// SIG undefined FUN_145faae12(void)

void FUN_145faae12(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145faaea6 FUN_145faaea6 body=644 status=ok
// SIG undefined FUN_145faaea6(void)

void FUN_145faaea6(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FGeometryCollectionTransferVertexAttributeNode",1);
  FUN_1446ddc76(&local_d0,"TransferVertexAttribute",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection",1);
  FUN_1400b22c2(local_e8,
                "Transfer a named vertex attribute from the Source Collection to the Target Collection"
               );
  FUN_1446ddc76(local_100,"TransferVertexAttribute",1);
  FUN_1446ddc76(local_108,"FGeometryCollectionTransferVertexAttributeNode",1);
  if (DAT_14cc26058 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc26058 =
         FUN_140002ddd(FUN_1467599d9,uVar3,L"GeometryCollectionTransferVertexAttributeNode");
  }
  FUN_1406751de(local_f8,DAT_14cc26058,local_108,local_100);
  if (DAT_14cc26058 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc26058 =
         FUN_140002ddd(FUN_1467599d9,uVar3,L"GeometryCollectionTransferVertexAttributeNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc26058);
  if (DAT_14cc26058 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc26058 =
         FUN_140002ddd(FUN_1467599d9,uVar3,L"GeometryCollectionTransferVertexAttributeNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc26058);
  FUN_1446ddc76(local_118,"FGeometryCollectionTransferVertexAttributeNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6dea0;
  local_50 = FUN_1497b974e;
  local_78 = FUN_1497b9a28;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fab12c FUN_145fab12c body=644 status=ok
// SIG undefined FUN_145fab12c(void)

void FUN_145fab12c(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FGeometryCollectionTransferVertexSkinWeightsNode",1);
  FUN_1446ddc76(&local_d0,"TransferVertexSkinWeights",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection",1);
  FUN_1400b22c2(local_e8,
                "Transfer vertex skin weights from the Source Collection to the Target Collection");
  FUN_1446ddc76(local_100,"TransferVertexSkinWeights",1);
  FUN_1446ddc76(local_108,"FGeometryCollectionTransferVertexSkinWeightsNode",1);
  if (DAT_14cc26070 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc26070 =
         FUN_140002ddd(FUN_146759a6f,uVar3,L"GeometryCollectionTransferVertexSkinWeightsNode");
  }
  FUN_1406751de(local_f8,DAT_14cc26070,local_108,local_100);
  if (DAT_14cc26070 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc26070 =
         FUN_140002ddd(FUN_146759a6f,uVar3,L"GeometryCollectionTransferVertexSkinWeightsNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc26070);
  if (DAT_14cc26070 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc26070 =
         FUN_140002ddd(FUN_146759a6f,uVar3,L"GeometryCollectionTransferVertexSkinWeightsNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc26070);
  FUN_1446ddc76(local_118,"FGeometryCollectionTransferVertexSkinWeightsNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6dec0;
  local_50 = FUN_1497b9a60;
  local_78 = FUN_1497b9c26;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fab3b2 FUN_145fab3b2 body=644 status=ok
// SIG undefined FUN_145fab3b2(void)

void FUN_145fab3b2(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FGeometryCollectionSetKinematicVertexSelectionNode",1);
  FUN_1446ddc76(&local_d0,"SetKinematicVertexSelection",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection",1);
  FUN_1400b22c2(local_e8,"Set Vertex Collection to be kinematic");
  FUN_1446ddc76(local_100,"SetKinematicVertexSelection",1);
  FUN_1446ddc76(local_108,"FGeometryCollectionSetKinematicVertexSelectionNode",1);
  if (DAT_14cc26088 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc26088 =
         FUN_140002ddd(FUN_146759b05,uVar3,L"GeometryCollectionSetKinematicVertexSelectionNode");
  }
  FUN_1406751de(local_f8,DAT_14cc26088,local_108,local_100);
  if (DAT_14cc26088 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc26088 =
         FUN_140002ddd(FUN_146759b05,uVar3,L"GeometryCollectionSetKinematicVertexSelectionNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc26088);
  if (DAT_14cc26088 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc26088 =
         FUN_140002ddd(FUN_146759b05,uVar3,L"GeometryCollectionSetKinematicVertexSelectionNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc26088);
  FUN_1446ddc76(local_118,"FGeometryCollectionSetKinematicVertexSelectionNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6dee0;
  local_50 = FUN_1497b9c5e;
  local_78 = FUN_1497b9e08;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fab638 FUN_145fab638 body=653 status=ok
// SIG undefined FUN_145fab638(void)

void FUN_145fab638(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FAutoClusterDataflowNode",1);
  FUN_1446ddc76(&local_d0,"AutoCluster",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Cluster",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"AutoCluster",1);
  FUN_1446ddc76(local_108,"FAutoClusterDataflowNode",1);
  if (DAT_14cc24c00 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24c00 = FUN_140002ddd(FUN_1467523b5,uVar3,L"AutoClusterDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc24c00,local_108,local_100);
  if (DAT_14cc24c00 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24c00 = FUN_140002ddd(FUN_1467523b5,uVar3,L"AutoClusterDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc24c00);
  if (DAT_14cc24c00 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24c00 = FUN_140002ddd(FUN_1467523b5,uVar3,L"AutoClusterDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc24c00);
  FUN_1446ddc76(local_118,"FAutoClusterDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6be40;
  local_50 = FUN_1497974bc;
  local_78 = FUN_1497978dc;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fab8c6 FUN_145fab8c6 body=653 status=ok
// SIG undefined FUN_145fab8c6(void)

void FUN_145fab8c6(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FClusterFlattenDataflowNode",1);
  FUN_1446ddc76(&local_d0,"Flatten",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Cluster",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"Flatten",1);
  FUN_1446ddc76(local_108,"FClusterFlattenDataflowNode",1);
  if (DAT_14cc24c18 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24c18 = FUN_140002ddd(FUN_14675244b,uVar3,L"ClusterFlattenDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc24c18,local_108,local_100);
  if (DAT_14cc24c18 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24c18 = FUN_140002ddd(FUN_14675244b,uVar3,L"ClusterFlattenDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc24c18);
  if (DAT_14cc24c18 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24c18 = FUN_140002ddd(FUN_14675244b,uVar3,L"ClusterFlattenDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc24c18);
  FUN_1446ddc76(local_118,"FClusterFlattenDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6be60;
  local_50 = FUN_149797914;
  local_78 = FUN_149797abe;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fabb54 FUN_145fabb54 body=653 status=ok
// SIG undefined FUN_145fabb54(void)

void FUN_145fabb54(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FClusterUnclusterDataflowNode",1);
  FUN_1446ddc76(&local_d0,"Uncluster",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Cluster",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"Uncluster",1);
  FUN_1446ddc76(local_108,"FClusterUnclusterDataflowNode",1);
  if (DAT_14cc24c30 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24c30 = FUN_140002ddd(FUN_1467524e1,uVar3,L"ClusterUnclusterDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc24c30,local_108,local_100);
  if (DAT_14cc24c30 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24c30 = FUN_140002ddd(FUN_1467524e1,uVar3,L"ClusterUnclusterDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc24c30);
  if (DAT_14cc24c30 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24c30 = FUN_140002ddd(FUN_1467524e1,uVar3,L"ClusterUnclusterDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc24c30);
  FUN_1446ddc76(local_118,"FClusterUnclusterDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6be80;
  local_50 = FUN_149797af6;
  local_78 = FUN_149797ca0;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fabde2 FUN_145fabde2 body=653 status=ok
// SIG undefined FUN_145fabde2(void)

void FUN_145fabde2(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FClusterDataflowNode",1);
  FUN_1446ddc76(&local_d0,"Cluster",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Cluster",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"Cluster",1);
  FUN_1446ddc76(local_108,"FClusterDataflowNode",1);
  if (DAT_14cc24c48 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24c48 = FUN_140002ddd(FUN_146752577,uVar3,L"ClusterDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc24c48,local_108,local_100);
  if (DAT_14cc24c48 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24c48 = FUN_140002ddd(FUN_146752577,uVar3,L"ClusterDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc24c48);
  if (DAT_14cc24c48 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24c48 = FUN_140002ddd(FUN_146752577,uVar3,L"ClusterDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc24c48);
  FUN_1446ddc76(local_118,"FClusterDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6bea0;
  local_50 = FUN_149797cd8;
  local_78 = FUN_149797e82;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fac070 FUN_145fac070 body=653 status=ok
// SIG undefined FUN_145fac070(void)

void FUN_145fac070(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FClusterMergeToNeighborsDataflowNode",1);
  FUN_1446ddc76(&local_d0,"ClusterMergeToNeighbors",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Cluster",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"ClusterMergeToNeighbors",1);
  FUN_1446ddc76(local_108,"FClusterMergeToNeighborsDataflowNode",1);
  if (DAT_14cc24c78 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24c78 = FUN_140002ddd(FUN_14675263d,uVar3,L"ClusterMergeToNeighborsDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc24c78,local_108,local_100);
  if (DAT_14cc24c78 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24c78 = FUN_140002ddd(FUN_14675263d,uVar3,L"ClusterMergeToNeighborsDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc24c78);
  if (DAT_14cc24c78 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24c78 = FUN_140002ddd(FUN_14675263d,uVar3,L"ClusterMergeToNeighborsDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc24c78);
  FUN_1446ddc76(local_118,"FClusterMergeToNeighborsDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6bec0;
  local_50 = FUN_149797eba;
  local_78 = FUN_14979811a;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fac2fe FUN_145fac2fe body=653 status=ok
// SIG undefined FUN_145fac2fe(void)

void FUN_145fac2fe(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FClusterMergeDataflowNode",1);
  FUN_1446ddc76(&local_d0,"ClusterMerge",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Cluster",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"ClusterMerge",1);
  FUN_1446ddc76(local_108,"FClusterMergeDataflowNode",1);
  if (DAT_14cc24c90 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24c90 = FUN_140002ddd(FUN_1467526d3,uVar3,L"ClusterMergeDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc24c90,local_108,local_100);
  if (DAT_14cc24c90 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24c90 = FUN_140002ddd(FUN_1467526d3,uVar3,L"ClusterMergeDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc24c90);
  if (DAT_14cc24c90 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24c90 = FUN_140002ddd(FUN_1467526d3,uVar3,L"ClusterMergeDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc24c90);
  FUN_1446ddc76(local_118,"FClusterMergeDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6bee0;
  local_50 = FUN_149798152;
  local_78 = FUN_1497982fc;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fac58c FUN_145fac58c body=653 status=ok
// SIG undefined FUN_145fac58c(void)

void FUN_145fac58c(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FClusterIsolatedRootsDataflowNode",1);
  FUN_1446ddc76(&local_d0,"ClusterIsolatedRoots",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Cluster",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"ClusterIsolatedRoots",1);
  FUN_1446ddc76(local_108,"FClusterIsolatedRootsDataflowNode",1);
  if (DAT_14cc24ca8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24ca8 = FUN_140002ddd(FUN_146752769,uVar3,L"ClusterIsolatedRootsDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc24ca8,local_108,local_100);
  if (DAT_14cc24ca8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24ca8 = FUN_140002ddd(FUN_146752769,uVar3,L"ClusterIsolatedRootsDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc24ca8);
  if (DAT_14cc24ca8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24ca8 = FUN_140002ddd(FUN_146752769,uVar3,L"ClusterIsolatedRootsDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc24ca8);
  FUN_1446ddc76(local_118,"FClusterIsolatedRootsDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6bf00;
  local_50 = FUN_149798334;
  local_78 = FUN_14979848e;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fac81a FUN_145fac81a body=653 status=ok
// SIG undefined FUN_145fac81a(void)

void FUN_145fac81a(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FClusterMagnetDataflowNode",1);
  FUN_1446ddc76(&local_d0,"ClusterMagnet",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Cluster",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"ClusterMagnet",1);
  FUN_1446ddc76(local_108,"FClusterMagnetDataflowNode",1);
  if (DAT_14cc24cc0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24cc0 = FUN_140002ddd(FUN_1467527ff,uVar3,L"ClusterMagnetDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc24cc0,local_108,local_100);
  if (DAT_14cc24cc0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24cc0 = FUN_140002ddd(FUN_1467527ff,uVar3,L"ClusterMagnetDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc24cc0);
  if (DAT_14cc24cc0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24cc0 = FUN_140002ddd(FUN_1467527ff,uVar3,L"ClusterMagnetDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc24cc0);
  FUN_1446ddc76(local_118,"FClusterMagnetDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6bf20;
  local_50 = FUN_1497984c6;
  local_78 = FUN_1497986aa;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145facaa8 FUN_145facaa8 body=653 status=ok
// SIG undefined FUN_145facaa8(void)

void FUN_145facaa8(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FVectorToStringDataflowNode",1);
  FUN_1446ddc76(&local_d0,"VectorToString",1);
  FUN_1446ddc76(&local_d8,"Utilities|String",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"VectorToString",1);
  FUN_1446ddc76(local_108,"FVectorToStringDataflowNode",1);
  if (DAT_14cc24cd8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24cd8 = FUN_140002ddd(FUN_146752895,uVar3,L"VectorToStringDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc24cd8,local_108,local_100);
  if (DAT_14cc24cd8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24cd8 = FUN_140002ddd(FUN_146752895,uVar3,L"VectorToStringDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc24cd8);
  if (DAT_14cc24cd8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24cd8 = FUN_140002ddd(FUN_146752895,uVar3,L"VectorToStringDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc24cd8);
  FUN_1446ddc76(local_118,"FVectorToStringDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6bf40;
  local_50 = FUN_1497986e2;
  local_78 = FUN_149798874;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145facd36 FUN_145facd36 body=653 status=ok
// SIG undefined FUN_145facd36(void)

void FUN_145facd36(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FFloatToStringDataflowNode",1);
  FUN_1446ddc76(&local_d0,"FloatToString",1);
  FUN_1446ddc76(&local_d8,"Utilities|String",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"FloatToString",1);
  FUN_1446ddc76(local_108,"FFloatToStringDataflowNode",1);
  if (DAT_14cc24cf0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24cf0 = FUN_140002ddd(FUN_14675292b,uVar3,L"FloatToStringDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc24cf0,local_108,local_100);
  if (DAT_14cc24cf0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24cf0 = FUN_140002ddd(FUN_14675292b,uVar3,L"FloatToStringDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc24cf0);
  if (DAT_14cc24cf0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24cf0 = FUN_140002ddd(FUN_14675292b,uVar3,L"FloatToStringDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc24cf0);
  FUN_1446ddc76(local_118,"FFloatToStringDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6bf60;
  local_50 = FUN_1497988ac;
  local_78 = FUN_149798a36;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145facfc4 FUN_145facfc4 body=653 status=ok
// SIG undefined FUN_145facfc4(void)

void FUN_145facfc4(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FIntToStringDataflowNode",1);
  FUN_1446ddc76(&local_d0,"IntToString",1);
  FUN_1446ddc76(&local_d8,"Utilities|String",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"IntToString",1);
  FUN_1446ddc76(local_108,"FIntToStringDataflowNode",1);
  if (DAT_14cc24d08 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24d08 = FUN_140002ddd(FUN_1467529c1,uVar3,L"IntToStringDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc24d08,local_108,local_100);
  if (DAT_14cc24d08 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24d08 = FUN_140002ddd(FUN_1467529c1,uVar3,L"IntToStringDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc24d08);
  if (DAT_14cc24d08 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24d08 = FUN_140002ddd(FUN_1467529c1,uVar3,L"IntToStringDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc24d08);
  FUN_1446ddc76(local_118,"FIntToStringDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6bf80;
  local_50 = FUN_149798a6e;
  local_78 = FUN_149798bf8;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fad252 FUN_145fad252 body=653 status=ok
// SIG undefined FUN_145fad252(void)

void FUN_145fad252(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FBoolToStringDataflowNode",1);
  FUN_1446ddc76(&local_d0,"BoolToString",1);
  FUN_1446ddc76(&local_d8,"Utilities|String",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"BoolToString",1);
  FUN_1446ddc76(local_108,"FBoolToStringDataflowNode",1);
  if (DAT_14cc24d20 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24d20 = FUN_140002ddd(FUN_146752a57,uVar3,L"BoolToStringDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc24d20,local_108,local_100);
  if (DAT_14cc24d20 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24d20 = FUN_140002ddd(FUN_146752a57,uVar3,L"BoolToStringDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc24d20);
  if (DAT_14cc24d20 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24d20 = FUN_140002ddd(FUN_146752a57,uVar3,L"BoolToStringDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc24d20);
  FUN_1446ddc76(local_118,"FBoolToStringDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6bfa0;
  local_50 = FUN_149798c30;
  local_78 = FUN_149798db8;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fad4e0 FUN_145fad4e0 body=653 status=ok
// SIG undefined FUN_145fad4e0(void)

void FUN_145fad4e0(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FIntToFloatDataflowNode",1);
  FUN_1446ddc76(&local_d0,"IntToFloat",1);
  FUN_1446ddc76(&local_d8,"Math|Conversions",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"IntToFloat",1);
  FUN_1446ddc76(local_108,"FIntToFloatDataflowNode",1);
  if (DAT_14cc24d38 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24d38 = FUN_140002ddd(FUN_146752aed,uVar3,L"IntToFloatDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc24d38,local_108,local_100);
  if (DAT_14cc24d38 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24d38 = FUN_140002ddd(FUN_146752aed,uVar3,L"IntToFloatDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc24d38);
  if (DAT_14cc24d38 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24d38 = FUN_140002ddd(FUN_146752aed,uVar3,L"IntToFloatDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc24d38);
  FUN_1446ddc76(local_118,"FIntToFloatDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6bfc0;
  local_50 = FUN_149798df0;
  local_78 = FUN_149798f62;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fad76e FUN_145fad76e body=653 status=ok
// SIG undefined FUN_145fad76e(void)

void FUN_145fad76e(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FFloatToDoubleDataflowNode",1);
  FUN_1446ddc76(&local_d0,"FloatToDouble",1);
  FUN_1446ddc76(&local_d8,"Math|Conversions",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"FloatToDouble",1);
  FUN_1446ddc76(local_108,"FFloatToDoubleDataflowNode",1);
  if (DAT_14cc24d68 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24d68 = FUN_140002ddd(FUN_146752c19,uVar3,L"FloatToDoubleDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc24d68,local_108,local_100);
  if (DAT_14cc24d68 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24d68 = FUN_140002ddd(FUN_146752c19,uVar3,L"FloatToDoubleDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc24d68);
  if (DAT_14cc24d68 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24d68 = FUN_140002ddd(FUN_146752c19,uVar3,L"FloatToDoubleDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc24d68);
  FUN_1446ddc76(local_118,"FFloatToDoubleDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6bfe0;
  local_50 = FUN_149798f9a;
  local_78 = FUN_149799116;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fad9fc FUN_145fad9fc body=653 status=ok
// SIG undefined FUN_145fad9fc(void)

void FUN_145fad9fc(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FIntToDoubleDataflowNode",1);
  FUN_1446ddc76(&local_d0,"IntToDouble",1);
  FUN_1446ddc76(&local_d8,"Math|Conversions",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"IntToDouble",1);
  FUN_1446ddc76(local_108,"FIntToDoubleDataflowNode",1);
  if (DAT_14cc24d50 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24d50 = FUN_140002ddd(FUN_146752b83,uVar3,L"IntToDoubleDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc24d50,local_108,local_100);
  if (DAT_14cc24d50 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24d50 = FUN_140002ddd(FUN_146752b83,uVar3,L"IntToDoubleDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc24d50);
  if (DAT_14cc24d50 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24d50 = FUN_140002ddd(FUN_146752b83,uVar3,L"IntToDoubleDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc24d50);
  FUN_1446ddc76(local_118,"FIntToDoubleDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6c000;
  local_50 = FUN_14979914e;
  local_78 = FUN_1497992ca;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fadc8a FUN_145fadc8a body=653 status=ok
// SIG undefined FUN_145fadc8a(void)

void FUN_145fadc8a(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FFloatToIntDataflowNode",1);
  FUN_1446ddc76(&local_d0,"FloatToInt",1);
  FUN_1446ddc76(&local_d8,"Math|Conversions",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"FloatToInt",1);
  FUN_1446ddc76(local_108,"FFloatToIntDataflowNode",1);
  if (DAT_14cc24d98 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24d98 = FUN_140002ddd(FUN_146752cdf,uVar3,L"FloatToIntDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc24d98,local_108,local_100);
  if (DAT_14cc24d98 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24d98 = FUN_140002ddd(FUN_146752cdf,uVar3,L"FloatToIntDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc24d98);
  if (DAT_14cc24d98 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24d98 = FUN_140002ddd(FUN_146752cdf,uVar3,L"FloatToIntDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc24d98);
  FUN_1446ddc76(local_118,"FFloatToIntDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6c020;
  local_50 = FUN_149799302;
  local_78 = FUN_14979947c;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fadf18 FUN_145fadf18 body=653 status=ok
// SIG undefined FUN_145fadf18(void)

void FUN_145fadf18(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FIntToBoolDataflowNode",1);
  FUN_1446ddc76(&local_d0,"IntToBool",1);
  FUN_1446ddc76(&local_d8,"Math|Conversions",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"IntToBool",1);
  FUN_1446ddc76(local_108,"FIntToBoolDataflowNode",1);
  if (DAT_14cc24db0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24db0 = FUN_140002ddd(FUN_146752d75,uVar3,L"IntToBoolDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc24db0,local_108,local_100);
  if (DAT_14cc24db0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24db0 = FUN_140002ddd(FUN_146752d75,uVar3,L"IntToBoolDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc24db0);
  if (DAT_14cc24db0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24db0 = FUN_140002ddd(FUN_146752d75,uVar3,L"IntToBoolDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc24db0);
  FUN_1446ddc76(local_118,"FIntToBoolDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6c040;
  local_50 = FUN_1497994b4;
  local_78 = FUN_149799630;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fae1a6 FUN_145fae1a6 body=653 status=ok
// SIG undefined FUN_145fae1a6(void)

void FUN_145fae1a6(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FBoolToIntDataflowNode",1);
  FUN_1446ddc76(&local_d0,"BoolToInt",1);
  FUN_1446ddc76(&local_d8,"Math|Conversions",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"BoolToInt",1);
  FUN_1446ddc76(local_108,"FBoolToIntDataflowNode",1);
  if (DAT_14cc24dc8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24dc8 = FUN_140002ddd(FUN_146752e0b,uVar3,L"BoolToIntDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc24dc8,local_108,local_100);
  if (DAT_14cc24dc8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24dc8 = FUN_140002ddd(FUN_146752e0b,uVar3,L"BoolToIntDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc24dc8);
  if (DAT_14cc24dc8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24dc8 = FUN_140002ddd(FUN_146752e0b,uVar3,L"BoolToIntDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc24dc8);
  FUN_1446ddc76(local_118,"FBoolToIntDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6c060;
  local_50 = FUN_149799668;
  local_78 = FUN_1497997e4;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fae434 FUN_145fae434 body=653 status=ok
// SIG undefined FUN_145fae434(void)

void FUN_145fae434(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FConvexHullToMeshDataflowNode",1);
  FUN_1446ddc76(&local_d0,"Convex Hull to Mesh",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Mesh",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"Convex Hull to Mesh",1);
  FUN_1446ddc76(local_108,"FConvexHullToMeshDataflowNode",1);
  if (DAT_14cc24de0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24de0 = FUN_140002ddd(FUN_146752ea1,uVar3,L"ConvexHullToMeshDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc24de0,local_108,local_100);
  if (DAT_14cc24de0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24de0 = FUN_140002ddd(FUN_146752ea1,uVar3,L"ConvexHullToMeshDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc24de0);
  if (DAT_14cc24de0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24de0 = FUN_140002ddd(FUN_146752ea1,uVar3,L"ConvexHullToMeshDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc24de0);
  FUN_1446ddc76(local_118,"FConvexHullToMeshDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6c0e0;
  local_50 = FUN_14979a1a6;
  local_78 = FUN_14979a3e8;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fae6c2 FUN_145fae6c2 body=653 status=ok
// SIG undefined FUN_145fae6c2(void)

void FUN_145fae6c2(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FSphereCoveringToMeshDataflowNode",1);
  FUN_1446ddc76(&local_d0,"Sphere Covering to Mesh",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Mesh",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"Sphere Covering to Mesh",1);
  FUN_1446ddc76(local_108,"FSphereCoveringToMeshDataflowNode",1);
  if (DAT_14cc24df8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24df8 = FUN_140002ddd(FUN_146752f37,uVar3,L"SphereCoveringToMeshDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc24df8,local_108,local_100);
  if (DAT_14cc24df8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24df8 = FUN_140002ddd(FUN_146752f37,uVar3,L"SphereCoveringToMeshDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc24df8);
  if (DAT_14cc24df8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24df8 = FUN_140002ddd(FUN_146752f37,uVar3,L"SphereCoveringToMeshDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc24df8);
  FUN_1446ddc76(local_118,"FSphereCoveringToMeshDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6c100;
  local_50 = FUN_14979a420;
  local_78 = FUN_14979a5ae;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fae950 FUN_145fae950 body=653 status=ok
// SIG undefined FUN_145fae950(void)

void FUN_145fae950(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FMeshToOBJStringDebugDataflowNode",1);
  FUN_1446ddc76(&local_d0,"Convert Mesh to OBJ String",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Development",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"Convert Mesh to OBJ String",1);
  FUN_1446ddc76(local_108,"FMeshToOBJStringDebugDataflowNode",1);
  if (DAT_14cc24e28 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24e28 = FUN_140002ddd(FUN_146753063,uVar3,L"MeshToOBJStringDebugDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc24e28,local_108,local_100);
  if (DAT_14cc24e28 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24e28 = FUN_140002ddd(FUN_146753063,uVar3,L"MeshToOBJStringDebugDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc24e28);
  if (DAT_14cc24e28 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24e28 = FUN_140002ddd(FUN_146753063,uVar3,L"MeshToOBJStringDebugDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc24e28);
  FUN_1446ddc76(local_118,"FMeshToOBJStringDebugDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6c120;
  local_50 = FUN_14979a5e6;
  local_78 = FUN_14979a79a;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145faebde FUN_145faebde body=653 status=ok
// SIG undefined FUN_145faebde(void)

void FUN_145faebde(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FSphereCoveringCountSpheresNode",1);
  FUN_1446ddc76(&local_d0,"Get Sphere Covering Sphere Count",1);
  FUN_1446ddc76(&local_d8,"SphereCovering",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"Get Sphere Covering Sphere Count",1);
  FUN_1446ddc76(local_108,"FSphereCoveringCountSpheresNode",1);
  if (DAT_14cc24e10 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24e10 = FUN_140002ddd(FUN_146752fcd,uVar3,L"SphereCoveringCountSpheresNode");
  }
  FUN_1406751de(local_f8,DAT_14cc24e10,local_108,local_100);
  if (DAT_14cc24e10 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24e10 = FUN_140002ddd(FUN_146752fcd,uVar3,L"SphereCoveringCountSpheresNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc24e10);
  if (DAT_14cc24e10 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24e10 = FUN_140002ddd(FUN_146752fcd,uVar3,L"SphereCoveringCountSpheresNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc24e10);
  FUN_1446ddc76(local_118,"FSphereCoveringCountSpheresNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6c140;
  local_50 = FUN_14979a7d2;
  local_78 = FUN_14979a958;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145faee6c FUN_145faee6c body=653 status=ok
// SIG undefined FUN_145faee6c(void)

void FUN_145faee6c(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FWriteStringToFile",1);
  FUN_1446ddc76(&local_d0,"Write String to File",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Development",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"Write String to File",1);
  FUN_1446ddc76(local_108,"FWriteStringToFile",1);
  if (DAT_14cc24e40 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24e40 = FUN_140002ddd(FUN_1467530f9,uVar3,L"WriteStringToFile");
  }
  FUN_1406751de(local_f8,DAT_14cc24e40,local_108,local_100);
  if (DAT_14cc24e40 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24e40 = FUN_140002ddd(FUN_1467530f9,uVar3,L"WriteStringToFile");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc24e40);
  if (DAT_14cc24e40 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24e40 = FUN_140002ddd(FUN_1467530f9,uVar3,L"WriteStringToFile");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc24e40);
  FUN_1446ddc76(local_118,"FWriteStringToFile",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6c160;
  local_50 = FUN_14979a990;
  local_78 = FUN_14979ab0c;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145faf0fa FUN_145faf0fa body=653 status=ok
// SIG undefined FUN_145faf0fa(void)

void FUN_145faf0fa(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FPruneInCollectionDataflowNode",1);
  FUN_1446ddc76(&local_d0,"PruneInCollection",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Edit",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"PruneInCollection",1);
  FUN_1446ddc76(local_108,"FPruneInCollectionDataflowNode",1);
  if (DAT_14cc24e58 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24e58 = FUN_140002ddd(FUN_14675318f,uVar3,L"PruneInCollectionDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc24e58,local_108,local_100);
  if (DAT_14cc24e58 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24e58 = FUN_140002ddd(FUN_14675318f,uVar3,L"PruneInCollectionDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc24e58);
  if (DAT_14cc24e58 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24e58 = FUN_140002ddd(FUN_14675318f,uVar3,L"PruneInCollectionDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc24e58);
  FUN_1446ddc76(local_118,"FPruneInCollectionDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6c240;
  local_50 = FUN_14979b62a;
  local_78 = FUN_14979b7d4;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145faf388 FUN_145faf388 body=653 status=ok
// SIG undefined FUN_145faf388(void)

void FUN_145faf388(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FSetVisibilityInCollectionDataflowNode",1);
  FUN_1446ddc76(&local_d0,"SetVisibilityInCollection",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Edit",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"SetVisibilityInCollection",1);
  FUN_1446ddc76(local_108,"FSetVisibilityInCollectionDataflowNode",1);
  if (DAT_14cc24e88 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24e88 = FUN_140002ddd(FUN_146753255,uVar3,L"SetVisibilityInCollectionDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc24e88,local_108,local_100);
  if (DAT_14cc24e88 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24e88 = FUN_140002ddd(FUN_146753255,uVar3,L"SetVisibilityInCollectionDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc24e88);
  if (DAT_14cc24e88 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24e88 = FUN_140002ddd(FUN_146753255,uVar3,L"SetVisibilityInCollectionDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc24e88);
  FUN_1446ddc76(local_118,"FSetVisibilityInCollectionDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6c260;
  local_50 = FUN_14979b80c;
  local_78 = FUN_14979b9fc;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145faf616 FUN_145faf616 body=653 status=ok
// SIG undefined FUN_145faf616(void)

void FUN_145faf616(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FMergeInCollectionDataflowNode",1);
  FUN_1446ddc76(&local_d0,"MergeInCollection",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Edit",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"MergeInCollection",1);
  FUN_1446ddc76(local_108,"FMergeInCollectionDataflowNode",1);
  if (DAT_14cc24ea0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24ea0 = FUN_140002ddd(FUN_1467532eb,uVar3,L"MergeInCollectionDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc24ea0,local_108,local_100);
  if (DAT_14cc24ea0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24ea0 = FUN_140002ddd(FUN_1467532eb,uVar3,L"MergeInCollectionDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc24ea0);
  if (DAT_14cc24ea0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24ea0 = FUN_140002ddd(FUN_1467532eb,uVar3,L"MergeInCollectionDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc24ea0);
  FUN_1446ddc76(local_118,"FMergeInCollectionDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6c280;
  local_50 = FUN_14979ba34;
  local_78 = FUN_14979bbde;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145faf8a4 FUN_145faf8a4 body=653 status=ok
// SIG undefined FUN_145faf8a4(void)

void FUN_145faf8a4(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FUniformScatterPointsDataflowNode",1);
  FUN_1446ddc76(&local_d0,"UniformScatterPoints",1);
  FUN_1446ddc76(&local_d8,"Generators|Point",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"UniformScatterPoints",1);
  FUN_1446ddc76(local_108,"FUniformScatterPointsDataflowNode",1);
  if (DAT_14cc24ec8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24ec8 = FUN_140002ddd(FUN_146753381,uVar3,L"UniformScatterPointsDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc24ec8,local_108,local_100);
  if (DAT_14cc24ec8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24ec8 = FUN_140002ddd(FUN_146753381,uVar3,L"UniformScatterPointsDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc24ec8);
  if (DAT_14cc24ec8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24ec8 = FUN_140002ddd(FUN_146753381,uVar3,L"UniformScatterPointsDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc24ec8);
  FUN_1446ddc76(local_118,"FUniformScatterPointsDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6c4c0;
  local_50 = FUN_14979f5ba;
  local_78 = FUN_14979f7fc;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fafb32 FUN_145fafb32 body=653 status=ok
// SIG undefined FUN_145fafb32(void)

void FUN_145fafb32(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FUniformScatterPointsDataflowNode_v2",1);
  FUN_1446ddc76(&local_d0,"UniformScatterPoints",1);
  FUN_1446ddc76(&local_d8,"Generators|Point",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"UniformScatterPoints",1);
  FUN_1446ddc76(local_108,"FUniformScatterPointsDataflowNode_v2",1);
  if (DAT_14cc24ee0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24ee0 = FUN_140002ddd(FUN_146753417,uVar3,L"UniformScatterPointsDataflowNode_v2");
  }
  FUN_1406751de(local_f8,DAT_14cc24ee0,local_108,local_100);
  if (DAT_14cc24ee0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24ee0 = FUN_140002ddd(FUN_146753417,uVar3,L"UniformScatterPointsDataflowNode_v2");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc24ee0);
  if (DAT_14cc24ee0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24ee0 = FUN_140002ddd(FUN_146753417,uVar3,L"UniformScatterPointsDataflowNode_v2");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc24ee0);
  FUN_1446ddc76(local_118,"FUniformScatterPointsDataflowNode_v2",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6c4e0;
  local_50 = FUN_14979f834;
  local_78 = FUN_14979fa76;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fafdc0 FUN_145fafdc0 body=653 status=ok
// SIG undefined FUN_145fafdc0(void)

void FUN_145fafdc0(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FRadialScatterPointsDataflowNode",1);
  FUN_1446ddc76(&local_d0,"RadialScatterPoints",1);
  FUN_1446ddc76(&local_d8,"Generators|Point",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"RadialScatterPoints",1);
  FUN_1446ddc76(local_108,"FRadialScatterPointsDataflowNode",1);
  if (DAT_14cc24ef8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24ef8 = FUN_140002ddd(FUN_1467534ad,uVar3,L"RadialScatterPointsDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc24ef8,local_108,local_100);
  if (DAT_14cc24ef8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24ef8 = FUN_140002ddd(FUN_1467534ad,uVar3,L"RadialScatterPointsDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc24ef8);
  if (DAT_14cc24ef8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24ef8 = FUN_140002ddd(FUN_1467534ad,uVar3,L"RadialScatterPointsDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc24ef8);
  FUN_1446ddc76(local_118,"FRadialScatterPointsDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6c500;
  local_50 = FUN_14979faae;
  local_78 = FUN_14979fdf0;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb004e FUN_145fb004e body=653 status=ok
// SIG undefined FUN_145fb004e(void)

void FUN_145fb004e(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FRadialScatterPointsDataflowNode_v2",1);
  FUN_1446ddc76(&local_d0,"RadialScatterPoints",1);
  FUN_1446ddc76(&local_d8,"Generators|Point",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"RadialScatterPoints",1);
  FUN_1446ddc76(local_108,"FRadialScatterPointsDataflowNode_v2",1);
  if (DAT_14cc24f10 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24f10 = FUN_140002ddd(FUN_146753543,uVar3,L"RadialScatterPointsDataflowNode_v2");
  }
  FUN_1406751de(local_f8,DAT_14cc24f10,local_108,local_100);
  if (DAT_14cc24f10 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24f10 = FUN_140002ddd(FUN_146753543,uVar3,L"RadialScatterPointsDataflowNode_v2");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc24f10);
  if (DAT_14cc24f10 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24f10 = FUN_140002ddd(FUN_146753543,uVar3,L"RadialScatterPointsDataflowNode_v2");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc24f10);
  FUN_1446ddc76(local_118,"FRadialScatterPointsDataflowNode_v2",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6c520;
  local_50 = FUN_14979fe28;
  local_78 = FUN_1497a037e;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb02dc FUN_145fb02dc body=653 status=ok
// SIG undefined FUN_145fb02dc(void)

void FUN_145fb02dc(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FGridScatterPointsDataflowNode",1);
  FUN_1446ddc76(&local_d0,"GridScatterPoints",1);
  FUN_1446ddc76(&local_d8,"Generators|Point",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"GridScatterPoints",1);
  FUN_1446ddc76(local_108,"FGridScatterPointsDataflowNode",1);
  if (DAT_14cc24f28 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24f28 = FUN_140002ddd(FUN_1467535d9,uVar3,L"GridScatterPointsDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc24f28,local_108,local_100);
  if (DAT_14cc24f28 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24f28 = FUN_140002ddd(FUN_1467535d9,uVar3,L"GridScatterPointsDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc24f28);
  if (DAT_14cc24f28 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24f28 = FUN_140002ddd(FUN_1467535d9,uVar3,L"GridScatterPointsDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc24f28);
  FUN_1446ddc76(local_118,"FGridScatterPointsDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6c540;
  local_50 = FUN_1497a03b6;
  local_78 = FUN_1497a06e4;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb056a FUN_145fb056a body=653 status=ok
// SIG undefined FUN_145fb056a(void)

void FUN_145fb056a(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FVoronoiFractureDataflowNode",1);
  FUN_1446ddc76(&local_d0,"VoronoiFracture",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Fracture",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"VoronoiFracture",1);
  FUN_1446ddc76(local_108,"FVoronoiFractureDataflowNode",1);
  if (DAT_14cc24f40 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24f40 = FUN_140002ddd(FUN_14675366f,uVar3,L"VoronoiFractureDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc24f40,local_108,local_100);
  if (DAT_14cc24f40 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24f40 = FUN_140002ddd(FUN_14675366f,uVar3,L"VoronoiFractureDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc24f40);
  if (DAT_14cc24f40 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24f40 = FUN_140002ddd(FUN_14675366f,uVar3,L"VoronoiFractureDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc24f40);
  FUN_1446ddc76(local_118,"FVoronoiFractureDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6c560;
  local_50 = FUN_1497a071c;
  local_78 = FUN_1497a0ba4;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb07f8 FUN_145fb07f8 body=653 status=ok
// SIG undefined FUN_145fb07f8(void)

void FUN_145fb07f8(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FVoronoiFractureDataflowNode_v2",1);
  FUN_1446ddc76(&local_d0,"VoronoiFracture",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Fracture",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"VoronoiFracture",1);
  FUN_1446ddc76(local_108,"FVoronoiFractureDataflowNode_v2",1);
  if (DAT_14cc24f58 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24f58 = FUN_140002ddd(FUN_146753705,uVar3,L"VoronoiFractureDataflowNode_v2");
  }
  FUN_1406751de(local_f8,DAT_14cc24f58,local_108,local_100);
  if (DAT_14cc24f58 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24f58 = FUN_140002ddd(FUN_146753705,uVar3,L"VoronoiFractureDataflowNode_v2");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc24f58);
  if (DAT_14cc24f58 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24f58 = FUN_140002ddd(FUN_146753705,uVar3,L"VoronoiFractureDataflowNode_v2");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc24f58);
  FUN_1446ddc76(local_118,"FVoronoiFractureDataflowNode_v2",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6c580;
  local_50 = FUN_1497a0bdc;
  local_78 = FUN_1497a1152;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb0a86 FUN_145fb0a86 body=653 status=ok
// SIG undefined FUN_145fb0a86(void)

void FUN_145fb0a86(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FPlaneCutterDataflowNode",1);
  FUN_1446ddc76(&local_d0,"PlaneCutter",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Fracture",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"PlaneCutter",1);
  FUN_1446ddc76(local_108,"FPlaneCutterDataflowNode",1);
  if (DAT_14cc24f70 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24f70 = FUN_140002ddd(FUN_14675379b,uVar3,L"PlaneCutterDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc24f70,local_108,local_100);
  if (DAT_14cc24f70 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24f70 = FUN_140002ddd(FUN_14675379b,uVar3,L"PlaneCutterDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc24f70);
  if (DAT_14cc24f70 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24f70 = FUN_140002ddd(FUN_14675379b,uVar3,L"PlaneCutterDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc24f70);
  FUN_1446ddc76(local_118,"FPlaneCutterDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6c5a0;
  local_50 = FUN_1497a118a;
  local_78 = FUN_1497a165a;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb0d14 FUN_145fb0d14 body=653 status=ok
// SIG undefined FUN_145fb0d14(void)

void FUN_145fb0d14(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FPlaneCutterDataflowNode_v2",1);
  FUN_1446ddc76(&local_d0,"PlaneCutter",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Fracture",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"PlaneCutter",1);
  FUN_1446ddc76(local_108,"FPlaneCutterDataflowNode_v2",1);
  if (DAT_14cc24f88 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24f88 = FUN_140002ddd(FUN_146753831,uVar3,L"PlaneCutterDataflowNode_v2");
  }
  FUN_1406751de(local_f8,DAT_14cc24f88,local_108,local_100);
  if (DAT_14cc24f88 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24f88 = FUN_140002ddd(FUN_146753831,uVar3,L"PlaneCutterDataflowNode_v2");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc24f88);
  if (DAT_14cc24f88 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24f88 = FUN_140002ddd(FUN_146753831,uVar3,L"PlaneCutterDataflowNode_v2");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc24f88);
  FUN_1446ddc76(local_118,"FPlaneCutterDataflowNode_v2",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6c5c0;
  local_50 = FUN_1497a1692;
  local_78 = FUN_1497a1c4e;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb0fa2 FUN_145fb0fa2 body=653 status=ok
// SIG undefined FUN_145fb0fa2(void)

void FUN_145fb0fa2(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FExplodedViewDataflowNode",1);
  FUN_1446ddc76(&local_d0,"ExplodedView",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Fracture|Utilities",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"ExplodedView",1);
  FUN_1446ddc76(local_108,"FExplodedViewDataflowNode",1);
  if (DAT_14cc24fa0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24fa0 = FUN_140002ddd(FUN_1467538c7,uVar3,L"ExplodedViewDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc24fa0,local_108,local_100);
  if (DAT_14cc24fa0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24fa0 = FUN_140002ddd(FUN_1467538c7,uVar3,L"ExplodedViewDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc24fa0);
  if (DAT_14cc24fa0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24fa0 = FUN_140002ddd(FUN_1467538c7,uVar3,L"ExplodedViewDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc24fa0);
  FUN_1446ddc76(local_118,"FExplodedViewDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6c5e0;
  local_50 = FUN_1497a1c86;
  local_78 = FUN_1497a1e72;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb1230 FUN_145fb1230 body=653 status=ok
// SIG undefined FUN_145fb1230(void)

void FUN_145fb1230(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FSliceCutterDataflowNode",1);
  FUN_1446ddc76(&local_d0,"SliceCutter",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Fracture",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"SliceCutter",1);
  FUN_1446ddc76(local_108,"FSliceCutterDataflowNode",1);
  if (DAT_14cc24fb8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24fb8 = FUN_140002ddd(FUN_14675395d,uVar3,L"SliceCutterDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc24fb8,local_108,local_100);
  if (DAT_14cc24fb8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24fb8 = FUN_140002ddd(FUN_14675395d,uVar3,L"SliceCutterDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc24fb8);
  if (DAT_14cc24fb8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24fb8 = FUN_140002ddd(FUN_14675395d,uVar3,L"SliceCutterDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc24fb8);
  FUN_1446ddc76(local_118,"FSliceCutterDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6c600;
  local_50 = FUN_1497a1eaa;
  local_78 = FUN_1497a253c;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb14be FUN_145fb14be body=653 status=ok
// SIG undefined FUN_145fb14be(void)

void FUN_145fb14be(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FBrickCutterDataflowNode",1);
  FUN_1446ddc76(&local_d0,"BrickCutter",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Fracture",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"BrickCutter",1);
  FUN_1446ddc76(local_108,"FBrickCutterDataflowNode",1);
  if (DAT_14cc24fd0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24fd0 = FUN_140002ddd(FUN_1467539f3,uVar3,L"BrickCutterDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc24fd0,local_108,local_100);
  if (DAT_14cc24fd0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24fd0 = FUN_140002ddd(FUN_1467539f3,uVar3,L"BrickCutterDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc24fd0);
  if (DAT_14cc24fd0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24fd0 = FUN_140002ddd(FUN_1467539f3,uVar3,L"BrickCutterDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc24fd0);
  FUN_1446ddc76(local_118,"FBrickCutterDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6c620;
  local_50 = FUN_1497a2574;
  local_78 = FUN_1497a2bbe;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb174c FUN_145fb174c body=653 status=ok
// SIG undefined FUN_145fb174c(void)

void FUN_145fb174c(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FMeshCutterDataflowNode",1);
  FUN_1446ddc76(&local_d0,"MeshCutter",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Fracture",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"MeshCutter",1);
  FUN_1446ddc76(local_108,"FMeshCutterDataflowNode",1);
  if (DAT_14cc24fe8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24fe8 = FUN_140002ddd(FUN_146753a89,uVar3,L"MeshCutterDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc24fe8,local_108,local_100);
  if (DAT_14cc24fe8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24fe8 = FUN_140002ddd(FUN_146753a89,uVar3,L"MeshCutterDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc24fe8);
  if (DAT_14cc24fe8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc24fe8 = FUN_140002ddd(FUN_146753a89,uVar3,L"MeshCutterDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc24fe8);
  FUN_1446ddc76(local_118,"FMeshCutterDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6c640;
  local_50 = FUN_1497a2bf6;
  local_78 = FUN_1497a32a2;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb19da FUN_145fb19da body=653 status=ok
// SIG undefined FUN_145fb19da(void)

void FUN_145fb19da(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FMakeLiteralStringDataflowNode",1);
  FUN_1446ddc76(&local_d0,"MakeLiteralString",1);
  FUN_1446ddc76(&local_d8,"Utilities|String",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"MakeLiteralString",1);
  FUN_1446ddc76(local_108,"FMakeLiteralStringDataflowNode",1);
  if (DAT_14cc25000 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25000 = FUN_140002ddd(FUN_146753b1f,uVar3,L"MakeLiteralStringDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25000,local_108,local_100);
  if (DAT_14cc25000 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25000 = FUN_140002ddd(FUN_146753b1f,uVar3,L"MakeLiteralStringDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25000);
  if (DAT_14cc25000 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25000 = FUN_140002ddd(FUN_146753b1f,uVar3,L"MakeLiteralStringDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25000);
  FUN_1446ddc76(local_118,"FMakeLiteralStringDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6c6a0;
  local_50 = FUN_1497a3858;
  local_78 = FUN_1497a39a4;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb1c68 FUN_145fb1c68 body=653 status=ok
// SIG undefined FUN_145fb1c68(void)

void FUN_145fb1c68(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FMakePointsDataflowNode",1);
  FUN_1446ddc76(&local_d0,"MakePoints",1);
  FUN_1446ddc76(&local_d8,"Generators|Point",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"MakePoints",1);
  FUN_1446ddc76(local_108,"FMakePointsDataflowNode",1);
  if (DAT_14cc25018 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25018 = FUN_140002ddd(FUN_146753bb5,uVar3,L"MakePointsDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25018,local_108,local_100);
  if (DAT_14cc25018 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25018 = FUN_140002ddd(FUN_146753bb5,uVar3,L"MakePointsDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25018);
  if (DAT_14cc25018 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25018 = FUN_140002ddd(FUN_146753bb5,uVar3,L"MakePointsDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25018);
  FUN_1446ddc76(local_118,"FMakePointsDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6c6c0;
  local_50 = FUN_1497a39dc;
  local_78 = FUN_1497a3ad4;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb1ef6 FUN_145fb1ef6 body=653 status=ok
// SIG undefined FUN_145fb1ef6(void)

void FUN_145fb1ef6(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FMakeBoxDataflowNode",1);
  FUN_1446ddc76(&local_d0,"MakeBox",1);
  FUN_1446ddc76(&local_d8,"Generators|Box",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"MakeBox",1);
  FUN_1446ddc76(local_108,"FMakeBoxDataflowNode",1);
  if (DAT_14cc25048 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25048 = FUN_140002ddd(FUN_146753c7b,uVar3,L"MakeBoxDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25048,local_108,local_100);
  if (DAT_14cc25048 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25048 = FUN_140002ddd(FUN_146753c7b,uVar3,L"MakeBoxDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25048);
  if (DAT_14cc25048 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25048 = FUN_140002ddd(FUN_146753c7b,uVar3,L"MakeBoxDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25048);
  FUN_1446ddc76(local_118,"FMakeBoxDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6c6e0;
  local_50 = FUN_1497a3b0c;
  local_78 = FUN_1497a3d84;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb2184 FUN_145fb2184 body=653 status=ok
// SIG undefined FUN_145fb2184(void)

void FUN_145fb2184(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FMakeSphereDataflowNode",1);
  FUN_1446ddc76(&local_d0,"MakeSphere",1);
  FUN_1446ddc76(&local_d8,"Generators|Sphere",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"MakeSphere",1);
  FUN_1446ddc76(local_108,"FMakeSphereDataflowNode",1);
  if (DAT_14cc25060 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25060 = FUN_140002ddd(FUN_146753d11,uVar3,L"MakeSphereDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25060,local_108,local_100);
  if (DAT_14cc25060 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25060 = FUN_140002ddd(FUN_146753d11,uVar3,L"MakeSphereDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25060);
  if (DAT_14cc25060 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25060 = FUN_140002ddd(FUN_146753d11,uVar3,L"MakeSphereDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25060);
  FUN_1446ddc76(local_118,"FMakeSphereDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6c700;
  local_50 = FUN_1497a3dbc;
  local_78 = FUN_1497a3f80;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb2412 FUN_145fb2412 body=653 status=ok
// SIG undefined FUN_145fb2412(void)

void FUN_145fb2412(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FMakeLiteralFloatDataflowNode",1);
  FUN_1446ddc76(&local_d0,"MakeLiteralFloat",1);
  FUN_1446ddc76(&local_d8,"Math|Float",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"MakeLiteralFloat",1);
  FUN_1446ddc76(local_108,"FMakeLiteralFloatDataflowNode",1);
  if (DAT_14cc25078 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25078 = FUN_140002ddd(FUN_146753da7,uVar3,L"MakeLiteralFloatDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25078,local_108,local_100);
  if (DAT_14cc25078 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25078 = FUN_140002ddd(FUN_146753da7,uVar3,L"MakeLiteralFloatDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25078);
  if (DAT_14cc25078 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25078 = FUN_140002ddd(FUN_146753da7,uVar3,L"MakeLiteralFloatDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25078);
  FUN_1446ddc76(local_118,"FMakeLiteralFloatDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6c720;
  local_50 = FUN_1497a3fb8;
  local_78 = FUN_1497a40a6;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb26a0 FUN_145fb26a0 body=653 status=ok
// SIG undefined FUN_145fb26a0(void)

void FUN_145fb26a0(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FMakeLiteralIntDataflowNode",1);
  FUN_1446ddc76(&local_d0,"MakeLiteralInt",1);
  FUN_1446ddc76(&local_d8,"Math|Int",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"MakeLiteralInt",1);
  FUN_1446ddc76(local_108,"FMakeLiteralIntDataflowNode",1);
  if (DAT_14cc25090 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25090 = FUN_140002ddd(FUN_146753e3d,uVar3,L"MakeLiteralIntDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25090,local_108,local_100);
  if (DAT_14cc25090 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25090 = FUN_140002ddd(FUN_146753e3d,uVar3,L"MakeLiteralIntDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25090);
  if (DAT_14cc25090 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25090 = FUN_140002ddd(FUN_146753e3d,uVar3,L"MakeLiteralIntDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25090);
  FUN_1446ddc76(local_118,"FMakeLiteralIntDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6c740;
  local_50 = FUN_1497a40de;
  local_78 = FUN_1497a41cc;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb292e FUN_145fb292e body=653 status=ok
// SIG undefined FUN_145fb292e(void)

void FUN_145fb292e(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FMakeLiteralBoolDataflowNode",1);
  FUN_1446ddc76(&local_d0,"MakeLiteralBool",1);
  FUN_1446ddc76(&local_d8,"Math|Boolean",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"MakeLiteralBool",1);
  FUN_1446ddc76(local_108,"FMakeLiteralBoolDataflowNode",1);
  if (DAT_14cc250a8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc250a8 = FUN_140002ddd(FUN_146753ed3,uVar3,L"MakeLiteralBoolDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc250a8,local_108,local_100);
  if (DAT_14cc250a8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc250a8 = FUN_140002ddd(FUN_146753ed3,uVar3,L"MakeLiteralBoolDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc250a8);
  if (DAT_14cc250a8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc250a8 = FUN_140002ddd(FUN_146753ed3,uVar3,L"MakeLiteralBoolDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc250a8);
  FUN_1446ddc76(local_118,"FMakeLiteralBoolDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6c760;
  local_50 = FUN_1497a4204;
  local_78 = FUN_1497a42f4;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb2bbc FUN_145fb2bbc body=653 status=ok
// SIG undefined FUN_145fb2bbc(void)

void FUN_145fb2bbc(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FMakeLiteralVectorDataflowNode",1);
  FUN_1446ddc76(&local_d0,"MakeLiteralVector",1);
  FUN_1446ddc76(&local_d8,"Math|Vector",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"MakeLiteralVector",1);
  FUN_1446ddc76(local_108,"FMakeLiteralVectorDataflowNode",1);
  if (DAT_14cc250c0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc250c0 = FUN_140002ddd(FUN_146753f69,uVar3,L"MakeLiteralVectorDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc250c0,local_108,local_100);
  if (DAT_14cc250c0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc250c0 = FUN_140002ddd(FUN_146753f69,uVar3,L"MakeLiteralVectorDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc250c0);
  if (DAT_14cc250c0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc250c0 = FUN_140002ddd(FUN_146753f69,uVar3,L"MakeLiteralVectorDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc250c0);
  FUN_1446ddc76(local_118,"FMakeLiteralVectorDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6c780;
  local_50 = FUN_1497a432c;
  local_78 = FUN_1497a451a;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb2e4a FUN_145fb2e4a body=653 status=ok
// SIG undefined FUN_145fb2e4a(void)

void FUN_145fb2e4a(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FMakeTransformDataflowNode",1);
  FUN_1446ddc76(&local_d0,"MakeTransform",1);
  FUN_1446ddc76(&local_d8,"Generators|Transform",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"MakeTransform",1);
  FUN_1446ddc76(local_108,"FMakeTransformDataflowNode",1);
  if (DAT_14cc250d8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc250d8 = FUN_140002ddd(FUN_146753fff,uVar3,L"MakeTransformDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc250d8,local_108,local_100);
  if (DAT_14cc250d8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc250d8 = FUN_140002ddd(FUN_146753fff,uVar3,L"MakeTransformDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc250d8);
  if (DAT_14cc250d8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc250d8 = FUN_140002ddd(FUN_146753fff,uVar3,L"MakeTransformDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc250d8);
  FUN_1446ddc76(local_118,"FMakeTransformDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6c7a0;
  local_50 = FUN_1497a4552;
  local_78 = FUN_1497a4766;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb30d8 FUN_145fb30d8 body=653 status=ok
// SIG undefined FUN_145fb30d8(void)

void FUN_145fb30d8(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FMakeQuaternionDataflowNode",1);
  FUN_1446ddc76(&local_d0,"MakeQuaternion",1);
  FUN_1446ddc76(&local_d8,"Math|Vector",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"MakeQuaternion",1);
  FUN_1446ddc76(local_108,"FMakeQuaternionDataflowNode",1);
  if (DAT_14cc250f0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc250f0 = FUN_140002ddd(FUN_146754095,uVar3,L"MakeQuaternionDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc250f0,local_108,local_100);
  if (DAT_14cc250f0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc250f0 = FUN_140002ddd(FUN_146754095,uVar3,L"MakeQuaternionDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc250f0);
  if (DAT_14cc250f0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc250f0 = FUN_140002ddd(FUN_146754095,uVar3,L"MakeQuaternionDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc250f0);
  FUN_1446ddc76(local_118,"FMakeQuaternionDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6c7c0;
  local_50 = FUN_1497a479e;
  local_78 = FUN_1497a49b8;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb3366 FUN_145fb3366 body=653 status=ok
// SIG undefined FUN_145fb3366(void)

void FUN_145fb3366(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FMakeFloatArrayDataflowNode",1);
  FUN_1446ddc76(&local_d0,"MakeFloatArray",1);
  FUN_1446ddc76(&local_d8,"Math|Float",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"MakeFloatArray",1);
  FUN_1446ddc76(local_108,"FMakeFloatArrayDataflowNode",1);
  if (DAT_14cc25108 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25108 = FUN_140002ddd(FUN_14675412b,uVar3,L"MakeFloatArrayDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25108,local_108,local_100);
  if (DAT_14cc25108 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25108 = FUN_140002ddd(FUN_14675412b,uVar3,L"MakeFloatArrayDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25108);
  if (DAT_14cc25108 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25108 = FUN_140002ddd(FUN_14675412b,uVar3,L"MakeFloatArrayDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25108);
  FUN_1446ddc76(local_118,"FMakeFloatArrayDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6c7e0;
  local_50 = FUN_1497a49f0;
  local_78 = FUN_1497a4baa;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb35f4 FUN_145fb35f4 body=653 status=ok
// SIG undefined FUN_145fb35f4(void)

void FUN_145fb35f4(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FAddDataflowNode",1);
  FUN_1446ddc76(&local_d0,&DAT_149ebc865,1);
  FUN_1446ddc76(&local_d8,"Math|Float",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,&DAT_149ebc865,1);
  FUN_1446ddc76(local_108,"FAddDataflowNode",1);
  if (DAT_14cc25120 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25120 = FUN_140002ddd(FUN_1467541c1,uVar3,L"AddDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25120,local_108,local_100);
  if (DAT_14cc25120 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25120 = FUN_140002ddd(FUN_1467541c1,uVar3,L"AddDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25120);
  if (DAT_14cc25120 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25120 = FUN_140002ddd(FUN_1467541c1,uVar3,L"AddDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25120);
  FUN_1446ddc76(local_118,"FAddDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6c9e0;
  local_50 = FUN_1497a6f32;
  local_78 = FUN_1497a70de;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb3882 FUN_145fb3882 body=653 status=ok
// SIG undefined FUN_145fb3882(void)

void FUN_145fb3882(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FSubtractDataflowNode",1);
  FUN_1446ddc76(&local_d0,"Subtract",1);
  FUN_1446ddc76(&local_d8,"Math|Float",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"Subtract",1);
  FUN_1446ddc76(local_108,"FSubtractDataflowNode",1);
  if (DAT_14cc25138 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25138 = FUN_140002ddd(FUN_146754257,uVar3,L"SubtractDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25138,local_108,local_100);
  if (DAT_14cc25138 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25138 = FUN_140002ddd(FUN_146754257,uVar3,L"SubtractDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25138);
  if (DAT_14cc25138 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25138 = FUN_140002ddd(FUN_146754257,uVar3,L"SubtractDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25138);
  FUN_1446ddc76(local_118,"FSubtractDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6ca00;
  local_50 = FUN_1497a7116;
  local_78 = FUN_1497a72c2;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb3b10 FUN_145fb3b10 body=653 status=ok
// SIG undefined FUN_145fb3b10(void)

void FUN_145fb3b10(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FMultiplyDataflowNode",1);
  FUN_1446ddc76(&local_d0,"Multiply",1);
  FUN_1446ddc76(&local_d8,"Math|Float",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"Multiply",1);
  FUN_1446ddc76(local_108,"FMultiplyDataflowNode",1);
  if (DAT_14cc25150 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25150 = FUN_140002ddd(FUN_1467542ed,uVar3,L"MultiplyDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25150,local_108,local_100);
  if (DAT_14cc25150 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25150 = FUN_140002ddd(FUN_1467542ed,uVar3,L"MultiplyDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25150);
  if (DAT_14cc25150 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25150 = FUN_140002ddd(FUN_1467542ed,uVar3,L"MultiplyDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25150);
  FUN_1446ddc76(local_118,"FMultiplyDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6ca20;
  local_50 = FUN_1497a72fa;
  local_78 = FUN_1497a74a6;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb3d9e FUN_145fb3d9e body=653 status=ok
// SIG undefined FUN_145fb3d9e(void)

void FUN_145fb3d9e(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FSafeDivideDataflowNode",1);
  FUN_1446ddc76(&local_d0,"SafeDivide",1);
  FUN_1446ddc76(&local_d8,"Math|Float",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"SafeDivide",1);
  FUN_1446ddc76(local_108,"FSafeDivideDataflowNode",1);
  if (DAT_14cc25168 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25168 = FUN_140002ddd(FUN_146754383,uVar3,L"SafeDivideDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25168,local_108,local_100);
  if (DAT_14cc25168 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25168 = FUN_140002ddd(FUN_146754383,uVar3,L"SafeDivideDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25168);
  if (DAT_14cc25168 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25168 = FUN_140002ddd(FUN_146754383,uVar3,L"SafeDivideDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25168);
  FUN_1446ddc76(local_118,"FSafeDivideDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6ca40;
  local_50 = FUN_1497a74de;
  local_78 = FUN_1497a768a;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb402c FUN_145fb402c body=653 status=ok
// SIG undefined FUN_145fb402c(void)

void FUN_145fb402c(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FDivideDataflowNode",1);
  FUN_1446ddc76(&local_d0,"Divide",1);
  FUN_1446ddc76(&local_d8,"Math|Float",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"Divide",1);
  FUN_1446ddc76(local_108,"FDivideDataflowNode",1);
  if (DAT_14cc25180 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25180 = FUN_140002ddd(FUN_146754419,uVar3,L"DivideDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25180,local_108,local_100);
  if (DAT_14cc25180 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25180 = FUN_140002ddd(FUN_146754419,uVar3,L"DivideDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25180);
  if (DAT_14cc25180 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25180 = FUN_140002ddd(FUN_146754419,uVar3,L"DivideDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25180);
  FUN_1446ddc76(local_118,"FDivideDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6ca60;
  local_50 = FUN_1497a76c2;
  local_78 = FUN_1497a7778;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb42ba FUN_145fb42ba body=653 status=ok
// SIG undefined FUN_145fb42ba(void)

void FUN_145fb42ba(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FDivisionDataflowNode",1);
  FUN_1446ddc76(&local_d0,"Division (Whole and Remainder)",1);
  FUN_1446ddc76(&local_d8,"Math|Float",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"Division (Whole and Remainder)",1);
  FUN_1446ddc76(local_108,"FDivisionDataflowNode",1);
  if (DAT_14cc25198 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25198 = FUN_140002ddd(FUN_1467544af,uVar3,L"DivisionDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25198,local_108,local_100);
  if (DAT_14cc25198 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25198 = FUN_140002ddd(FUN_1467544af,uVar3,L"DivisionDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25198);
  if (DAT_14cc25198 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25198 = FUN_140002ddd(FUN_1467544af,uVar3,L"DivisionDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25198);
  FUN_1446ddc76(local_118,"FDivisionDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6ca80;
  local_50 = FUN_1497a77b0;
  local_78 = FUN_1497a7986;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb4548 FUN_145fb4548 body=653 status=ok
// SIG undefined FUN_145fb4548(void)

void FUN_145fb4548(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FSafeReciprocalDataflowNode",1);
  FUN_1446ddc76(&local_d0,"SafeReciprocal",1);
  FUN_1446ddc76(&local_d8,"Math|Float",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"SafeReciprocal",1);
  FUN_1446ddc76(local_108,"FSafeReciprocalDataflowNode",1);
  if (DAT_14cc251b0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc251b0 = FUN_140002ddd(FUN_146754545,uVar3,L"SafeReciprocalDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc251b0,local_108,local_100);
  if (DAT_14cc251b0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc251b0 = FUN_140002ddd(FUN_146754545,uVar3,L"SafeReciprocalDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc251b0);
  if (DAT_14cc251b0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc251b0 = FUN_140002ddd(FUN_146754545,uVar3,L"SafeReciprocalDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc251b0);
  FUN_1446ddc76(local_118,"FSafeReciprocalDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6caa0;
  local_50 = FUN_1497a79be;
  local_78 = FUN_1497a7b30;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb47d6 FUN_145fb47d6 body=653 status=ok
// SIG undefined FUN_145fb47d6(void)

void FUN_145fb47d6(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FSquareDataflowNode",1);
  FUN_1446ddc76(&local_d0,"Square",1);
  FUN_1446ddc76(&local_d8,"Math|Float",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"Square",1);
  FUN_1446ddc76(local_108,"FSquareDataflowNode",1);
  if (DAT_14cc251c8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc251c8 = FUN_140002ddd(FUN_1467545db,uVar3,L"SquareDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc251c8,local_108,local_100);
  if (DAT_14cc251c8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc251c8 = FUN_140002ddd(FUN_1467545db,uVar3,L"SquareDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc251c8);
  if (DAT_14cc251c8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc251c8 = FUN_140002ddd(FUN_1467545db,uVar3,L"SquareDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc251c8);
  FUN_1446ddc76(local_118,"FSquareDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6cac0;
  local_50 = FUN_1497a7b68;
  local_78 = FUN_1497a7cda;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb4a64 FUN_145fb4a64 body=653 status=ok
// SIG undefined FUN_145fb4a64(void)

void FUN_145fb4a64(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FSquareRootDataflowNode",1);
  FUN_1446ddc76(&local_d0,"SquareRoot",1);
  FUN_1446ddc76(&local_d8,"Math|Float",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"SquareRoot",1);
  FUN_1446ddc76(local_108,"FSquareRootDataflowNode",1);
  if (DAT_14cc251e0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc251e0 = FUN_140002ddd(FUN_146754671,uVar3,L"SquareRootDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc251e0,local_108,local_100);
  if (DAT_14cc251e0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc251e0 = FUN_140002ddd(FUN_146754671,uVar3,L"SquareRootDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc251e0);
  if (DAT_14cc251e0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc251e0 = FUN_140002ddd(FUN_146754671,uVar3,L"SquareRootDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc251e0);
  FUN_1446ddc76(local_118,"FSquareRootDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6cae0;
  local_50 = FUN_1497a7d12;
  local_78 = FUN_1497a7e84;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb4cf2 FUN_145fb4cf2 body=653 status=ok
// SIG undefined FUN_145fb4cf2(void)

void FUN_145fb4cf2(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FInverseSqrtDataflowNode",1);
  FUN_1446ddc76(&local_d0,"InverseSqrt",1);
  FUN_1446ddc76(&local_d8,"Math|Float",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"InverseSqrt",1);
  FUN_1446ddc76(local_108,"FInverseSqrtDataflowNode",1);
  if (DAT_14cc251f8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc251f8 = FUN_140002ddd(FUN_146754707,uVar3,L"InverseSqrtDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc251f8,local_108,local_100);
  if (DAT_14cc251f8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc251f8 = FUN_140002ddd(FUN_146754707,uVar3,L"InverseSqrtDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc251f8);
  if (DAT_14cc251f8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc251f8 = FUN_140002ddd(FUN_146754707,uVar3,L"InverseSqrtDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc251f8);
  FUN_1446ddc76(local_118,"FInverseSqrtDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6cb00;
  local_50 = FUN_1497a7ebc;
  local_78 = FUN_1497a802e;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb4f80 FUN_145fb4f80 body=653 status=ok
// SIG undefined FUN_145fb4f80(void)

void FUN_145fb4f80(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FCubeDataflowNode",1);
  FUN_1446ddc76(&local_d0,&DAT_149fb8616,1);
  FUN_1446ddc76(&local_d8,"Math|Float",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,&DAT_149fb8616,1);
  FUN_1446ddc76(local_108,"FCubeDataflowNode",1);
  if (DAT_14cc25210 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25210 = FUN_140002ddd(FUN_14675479d,uVar3,L"CubeDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25210,local_108,local_100);
  if (DAT_14cc25210 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25210 = FUN_140002ddd(FUN_14675479d,uVar3,L"CubeDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25210);
  if (DAT_14cc25210 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25210 = FUN_140002ddd(FUN_14675479d,uVar3,L"CubeDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25210);
  FUN_1446ddc76(local_118,"FCubeDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6cb20;
  local_50 = FUN_1497a8066;
  local_78 = FUN_1497a81d8;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb520e FUN_145fb520e body=653 status=ok
// SIG undefined FUN_145fb520e(void)

void FUN_145fb520e(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FNegateDataflowNode",1);
  FUN_1446ddc76(&local_d0,"Negate",1);
  FUN_1446ddc76(&local_d8,"Math|Float",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"Negate",1);
  FUN_1446ddc76(local_108,"FNegateDataflowNode",1);
  if (DAT_14cc25228 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25228 = FUN_140002ddd(FUN_146754833,uVar3,L"NegateDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25228,local_108,local_100);
  if (DAT_14cc25228 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25228 = FUN_140002ddd(FUN_146754833,uVar3,L"NegateDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25228);
  if (DAT_14cc25228 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25228 = FUN_140002ddd(FUN_146754833,uVar3,L"NegateDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25228);
  FUN_1446ddc76(local_118,"FNegateDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6cb40;
  local_50 = FUN_1497a8210;
  local_78 = FUN_1497a8382;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb549c FUN_145fb549c body=653 status=ok
// SIG undefined FUN_145fb549c(void)

void FUN_145fb549c(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FAbsDataflowNode",1);
  FUN_1446ddc76(&local_d0,&DAT_149fb8500,1);
  FUN_1446ddc76(&local_d8,"Math|Float",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,&DAT_149fb8500,1);
  FUN_1446ddc76(local_108,"FAbsDataflowNode",1);
  if (DAT_14cc25240 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25240 = FUN_140002ddd(FUN_1467548c9,uVar3,L"AbsDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25240,local_108,local_100);
  if (DAT_14cc25240 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25240 = FUN_140002ddd(FUN_1467548c9,uVar3,L"AbsDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25240);
  if (DAT_14cc25240 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25240 = FUN_140002ddd(FUN_1467548c9,uVar3,L"AbsDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25240);
  FUN_1446ddc76(local_118,"FAbsDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6cb60;
  local_50 = FUN_1497a83ba;
  local_78 = FUN_1497a852c;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb572a FUN_145fb572a body=653 status=ok
// SIG undefined FUN_145fb572a(void)

void FUN_145fb572a(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FFloorDataflowNode",1);
  FUN_1446ddc76(&local_d0,"Floor",1);
  FUN_1446ddc76(&local_d8,"Math|Float",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"Floor",1);
  FUN_1446ddc76(local_108,"FFloorDataflowNode",1);
  if (DAT_14cc25258 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25258 = FUN_140002ddd(FUN_14675495f,uVar3,L"FloorDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25258,local_108,local_100);
  if (DAT_14cc25258 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25258 = FUN_140002ddd(FUN_14675495f,uVar3,L"FloorDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25258);
  if (DAT_14cc25258 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25258 = FUN_140002ddd(FUN_14675495f,uVar3,L"FloorDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25258);
  FUN_1446ddc76(local_118,"FFloorDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6cb80;
  local_50 = FUN_1497a8564;
  local_78 = FUN_1497a86d6;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb59b8 FUN_145fb59b8 body=653 status=ok
// SIG undefined FUN_145fb59b8(void)

void FUN_145fb59b8(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FCeilDataflowNode",1);
  FUN_1446ddc76(&local_d0,&DAT_149fb8586,1);
  FUN_1446ddc76(&local_d8,"Math|Float",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,&DAT_149fb8586,1);
  FUN_1446ddc76(local_108,"FCeilDataflowNode",1);
  if (DAT_14cc25270 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25270 = FUN_140002ddd(FUN_1467549f5,uVar3,L"CeilDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25270,local_108,local_100);
  if (DAT_14cc25270 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25270 = FUN_140002ddd(FUN_1467549f5,uVar3,L"CeilDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25270);
  if (DAT_14cc25270 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25270 = FUN_140002ddd(FUN_1467549f5,uVar3,L"CeilDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25270);
  FUN_1446ddc76(local_118,"FCeilDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6cba0;
  local_50 = FUN_1497a870e;
  local_78 = FUN_1497a8880;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb5c46 FUN_145fb5c46 body=653 status=ok
// SIG undefined FUN_145fb5c46(void)

void FUN_145fb5c46(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FRoundDataflowNode",1);
  FUN_1446ddc76(&local_d0,"Round",1);
  FUN_1446ddc76(&local_d8,"Math|Float",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"Round",1);
  FUN_1446ddc76(local_108,"FRoundDataflowNode",1);
  if (DAT_14cc25288 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25288 = FUN_140002ddd(FUN_146754a8b,uVar3,L"RoundDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25288,local_108,local_100);
  if (DAT_14cc25288 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25288 = FUN_140002ddd(FUN_146754a8b,uVar3,L"RoundDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25288);
  if (DAT_14cc25288 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25288 = FUN_140002ddd(FUN_146754a8b,uVar3,L"RoundDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25288);
  FUN_1446ddc76(local_118,"FRoundDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6cbc0;
  local_50 = FUN_1497a88b8;
  local_78 = FUN_1497a8a2a;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb5ed4 FUN_145fb5ed4 body=653 status=ok
// SIG undefined FUN_145fb5ed4(void)

void FUN_145fb5ed4(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FTruncDataflowNode",1);
  FUN_1446ddc76(&local_d0,"Trunc",1);
  FUN_1446ddc76(&local_d8,"Math|Float",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"Trunc",1);
  FUN_1446ddc76(local_108,"FTruncDataflowNode",1);
  if (DAT_14cc252a0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc252a0 = FUN_140002ddd(FUN_146754b21,uVar3,L"TruncDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc252a0,local_108,local_100);
  if (DAT_14cc252a0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc252a0 = FUN_140002ddd(FUN_146754b21,uVar3,L"TruncDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc252a0);
  if (DAT_14cc252a0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc252a0 = FUN_140002ddd(FUN_146754b21,uVar3,L"TruncDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc252a0);
  FUN_1446ddc76(local_118,"FTruncDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6cbe0;
  local_50 = FUN_1497a8a62;
  local_78 = FUN_1497a8bd4;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb6162 FUN_145fb6162 body=653 status=ok
// SIG undefined FUN_145fb6162(void)

void FUN_145fb6162(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FFracDataflowNode",1);
  FUN_1446ddc76(&local_d0,&DAT_149fb8716,1);
  FUN_1446ddc76(&local_d8,"Math|Float",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,&DAT_149fb8716,1);
  FUN_1446ddc76(local_108,"FFracDataflowNode",1);
  if (DAT_14cc252b8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc252b8 = FUN_140002ddd(FUN_146754bb7,uVar3,L"FracDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc252b8,local_108,local_100);
  if (DAT_14cc252b8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc252b8 = FUN_140002ddd(FUN_146754bb7,uVar3,L"FracDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc252b8);
  if (DAT_14cc252b8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc252b8 = FUN_140002ddd(FUN_146754bb7,uVar3,L"FracDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc252b8);
  FUN_1446ddc76(local_118,"FFracDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6cc00;
  local_50 = FUN_1497a8c0c;
  local_78 = FUN_1497a8d7e;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb63f0 FUN_145fb63f0 body=653 status=ok
// SIG undefined FUN_145fb63f0(void)

void FUN_145fb63f0(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FMinDataflowNode",1);
  FUN_1446ddc76(&local_d0,&DAT_149e4faf8,1);
  FUN_1446ddc76(&local_d8,"Math|Float",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,&DAT_149e4faf8,1);
  FUN_1446ddc76(local_108,"FMinDataflowNode",1);
  if (DAT_14cc252d0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc252d0 = FUN_140002ddd(FUN_146754c4d,uVar3,L"MinDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc252d0,local_108,local_100);
  if (DAT_14cc252d0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc252d0 = FUN_140002ddd(FUN_146754c4d,uVar3,L"MinDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc252d0);
  if (DAT_14cc252d0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc252d0 = FUN_140002ddd(FUN_146754c4d,uVar3,L"MinDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc252d0);
  FUN_1446ddc76(local_118,"FMinDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6cc20;
  local_50 = FUN_1497a8db6;
  local_78 = FUN_1497a8f62;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb667e FUN_145fb667e body=653 status=ok
// SIG undefined FUN_145fb667e(void)

void FUN_145fb667e(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FMaxDataflowNode",1);
  FUN_1446ddc76(&local_d0,&DAT_149e4fb40,1);
  FUN_1446ddc76(&local_d8,"Math|Float",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,&DAT_149e4fb40,1);
  FUN_1446ddc76(local_108,"FMaxDataflowNode",1);
  if (DAT_14cc252e8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc252e8 = FUN_140002ddd(FUN_146754ce3,uVar3,L"MaxDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc252e8,local_108,local_100);
  if (DAT_14cc252e8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc252e8 = FUN_140002ddd(FUN_146754ce3,uVar3,L"MaxDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc252e8);
  if (DAT_14cc252e8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc252e8 = FUN_140002ddd(FUN_146754ce3,uVar3,L"MaxDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc252e8);
  FUN_1446ddc76(local_118,"FMaxDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6cc40;
  local_50 = FUN_1497a8f9a;
  local_78 = FUN_1497a9146;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb690c FUN_145fb690c body=653 status=ok
// SIG undefined FUN_145fb690c(void)

void FUN_145fb690c(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FMin3DataflowNode",1);
  FUN_1446ddc76(&local_d0,&DAT_14be54ef2,1);
  FUN_1446ddc76(&local_d8,"Math|Float",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,&DAT_14be54ef2,1);
  FUN_1446ddc76(local_108,"FMin3DataflowNode",1);
  if (DAT_14cc25300 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25300 = FUN_140002ddd(FUN_146754d79,uVar3,L"Min3DataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25300,local_108,local_100);
  if (DAT_14cc25300 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25300 = FUN_140002ddd(FUN_146754d79,uVar3,L"Min3DataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25300);
  if (DAT_14cc25300 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25300 = FUN_140002ddd(FUN_146754d79,uVar3,L"Min3DataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25300);
  FUN_1446ddc76(local_118,"FMin3DataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6cc60;
  local_50 = FUN_1497a917e;
  local_78 = FUN_1497a9354;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb6b9a FUN_145fb6b9a body=653 status=ok
// SIG undefined FUN_145fb6b9a(void)

void FUN_145fb6b9a(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FMax3DataflowNode",1);
  FUN_1446ddc76(&local_d0,&DAT_14be55182,1);
  FUN_1446ddc76(&local_d8,"Math|Float",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,&DAT_14be55182,1);
  FUN_1446ddc76(local_108,"FMax3DataflowNode",1);
  if (DAT_14cc25318 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25318 = FUN_140002ddd(FUN_146754e0f,uVar3,L"Max3DataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25318,local_108,local_100);
  if (DAT_14cc25318 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25318 = FUN_140002ddd(FUN_146754e0f,uVar3,L"Max3DataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25318);
  if (DAT_14cc25318 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25318 = FUN_140002ddd(FUN_146754e0f,uVar3,L"Max3DataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25318);
  FUN_1446ddc76(local_118,"FMax3DataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6cc80;
  local_50 = FUN_1497a938c;
  local_78 = FUN_1497a9562;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb6e28 FUN_145fb6e28 body=653 status=ok
// SIG undefined FUN_145fb6e28(void)

void FUN_145fb6e28(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FSignDataflowNode",1);
  FUN_1446ddc76(&local_d0,&DAT_149fb8a56,1);
  FUN_1446ddc76(&local_d8,"Math|Float",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,&DAT_149fb8a56,1);
  FUN_1446ddc76(local_108,"FSignDataflowNode",1);
  if (DAT_14cc25330 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25330 = FUN_140002ddd(FUN_146754ea5,uVar3,L"SignDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25330,local_108,local_100);
  if (DAT_14cc25330 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25330 = FUN_140002ddd(FUN_146754ea5,uVar3,L"SignDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25330);
  if (DAT_14cc25330 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25330 = FUN_140002ddd(FUN_146754ea5,uVar3,L"SignDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25330);
  FUN_1446ddc76(local_118,"FSignDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6cca0;
  local_50 = FUN_1497a959a;
  local_78 = FUN_1497a970c;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb70b6 FUN_145fb70b6 body=653 status=ok
// SIG undefined FUN_145fb70b6(void)

void FUN_145fb70b6(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FClampDataflowNode",1);
  FUN_1446ddc76(&local_d0,"Clamp",1);
  FUN_1446ddc76(&local_d8,"Math|Float",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"Clamp",1);
  FUN_1446ddc76(local_108,"FClampDataflowNode",1);
  if (DAT_14cc25348 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25348 = FUN_140002ddd(FUN_146754f3b,uVar3,L"ClampDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25348,local_108,local_100);
  if (DAT_14cc25348 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25348 = FUN_140002ddd(FUN_146754f3b,uVar3,L"ClampDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25348);
  if (DAT_14cc25348 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25348 = FUN_140002ddd(FUN_146754f3b,uVar3,L"ClampDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25348);
  FUN_1446ddc76(local_118,"FClampDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6ccc0;
  local_50 = FUN_1497a9744;
  local_78 = FUN_1497a991e;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb7344 FUN_145fb7344 body=653 status=ok
// SIG undefined FUN_145fb7344(void)

void FUN_145fb7344(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FFitDataflowNode",1);
  FUN_1446ddc76(&local_d0,&DAT_14be55931,1);
  FUN_1446ddc76(&local_d8,"Math|Float",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,&DAT_14be55931,1);
  FUN_1446ddc76(local_108,"FFitDataflowNode",1);
  if (DAT_14cc25360 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25360 = FUN_140002ddd(FUN_146754fd1,uVar3,L"FitDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25360,local_108,local_100);
  if (DAT_14cc25360 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25360 = FUN_140002ddd(FUN_146754fd1,uVar3,L"FitDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25360);
  if (DAT_14cc25360 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25360 = FUN_140002ddd(FUN_146754fd1,uVar3,L"FitDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25360);
  FUN_1446ddc76(local_118,"FFitDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6cce0;
  local_50 = FUN_1497a9956;
  local_78 = FUN_1497a9ba6;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb75d2 FUN_145fb75d2 body=653 status=ok
// SIG undefined FUN_145fb75d2(void)

void FUN_145fb75d2(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FEFitDataflowNode",1);
  FUN_1446ddc76(&local_d0,&DAT_14be55bc2,1);
  FUN_1446ddc76(&local_d8,"Math|Float",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,&DAT_14be55bc2,1);
  FUN_1446ddc76(local_108,"FEFitDataflowNode",1);
  if (DAT_14cc25378 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25378 = FUN_140002ddd(FUN_146755067,uVar3,L"EFitDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25378,local_108,local_100);
  if (DAT_14cc25378 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25378 = FUN_140002ddd(FUN_146755067,uVar3,L"EFitDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25378);
  if (DAT_14cc25378 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25378 = FUN_140002ddd(FUN_146755067,uVar3,L"EFitDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25378);
  FUN_1446ddc76(local_118,"FEFitDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6cd00;
  local_50 = FUN_1497a9bde;
  local_78 = FUN_1497a9e2e;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb7860 FUN_145fb7860 body=653 status=ok
// SIG undefined FUN_145fb7860(void)

void FUN_145fb7860(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FPowDataflowNode",1);
  FUN_1446ddc76(&local_d0,&DAT_149fb8985,1);
  FUN_1446ddc76(&local_d8,"Math|Float",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,&DAT_149fb8985,1);
  FUN_1446ddc76(local_108,"FPowDataflowNode",1);
  if (DAT_14cc25390 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25390 = FUN_140002ddd(FUN_1467550fd,uVar3,L"PowDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25390,local_108,local_100);
  if (DAT_14cc25390 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25390 = FUN_140002ddd(FUN_1467550fd,uVar3,L"PowDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25390);
  if (DAT_14cc25390 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25390 = FUN_140002ddd(FUN_1467550fd,uVar3,L"PowDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25390);
  FUN_1446ddc76(local_118,"FPowDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6cd20;
  local_50 = FUN_1497a9e66;
  local_78 = FUN_1497aa012;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb7aee FUN_145fb7aee body=653 status=ok
// SIG undefined FUN_145fb7aee(void)

void FUN_145fb7aee(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FLogDataflowNode",1);
  FUN_1446ddc76(&local_d0,&DAT_149fb87b5,1);
  FUN_1446ddc76(&local_d8,"Math|Float",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,&DAT_149fb87b5,1);
  FUN_1446ddc76(local_108,"FLogDataflowNode",1);
  if (DAT_14cc253a8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc253a8 = FUN_140002ddd(FUN_146755193,uVar3,L"LogDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc253a8,local_108,local_100);
  if (DAT_14cc253a8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc253a8 = FUN_140002ddd(FUN_146755193,uVar3,L"LogDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc253a8);
  if (DAT_14cc253a8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc253a8 = FUN_140002ddd(FUN_146755193,uVar3,L"LogDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc253a8);
  FUN_1446ddc76(local_118,"FLogDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6cd40;
  local_50 = FUN_1497aa04a;
  local_78 = FUN_1497aa1fa;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb7d7c FUN_145fb7d7c body=653 status=ok
// SIG undefined FUN_145fb7d7c(void)

void FUN_145fb7d7c(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FLogeDataflowNode",1);
  FUN_1446ddc76(&local_d0,&DAT_14a94f420,1);
  FUN_1446ddc76(&local_d8,"Math|Float",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,&DAT_14a94f420,1);
  FUN_1446ddc76(local_108,"FLogeDataflowNode",1);
  if (DAT_14cc253c0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc253c0 = FUN_140002ddd(FUN_146755229,uVar3,L"LogeDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc253c0,local_108,local_100);
  if (DAT_14cc253c0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc253c0 = FUN_140002ddd(FUN_146755229,uVar3,L"LogeDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc253c0);
  if (DAT_14cc253c0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc253c0 = FUN_140002ddd(FUN_146755229,uVar3,L"LogeDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc253c0);
  FUN_1446ddc76(local_118,"FLogeDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6cd60;
  local_50 = FUN_1497aa232;
  local_78 = FUN_1497aa3a4;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb800a FUN_145fb800a body=653 status=ok
// SIG undefined FUN_145fb800a(void)

void FUN_145fb800a(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FLerpDataflowNode",1);
  FUN_1446ddc76(&local_d0,&DAT_149e3bc24,1);
  FUN_1446ddc76(&local_d8,"Math|Float",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,&DAT_149e3bc24,1);
  FUN_1446ddc76(local_108,"FLerpDataflowNode",1);
  if (DAT_14cc253d8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc253d8 = FUN_140002ddd(FUN_1467552bf,uVar3,L"LerpDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc253d8,local_108,local_100);
  if (DAT_14cc253d8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc253d8 = FUN_140002ddd(FUN_1467552bf,uVar3,L"LerpDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc253d8);
  if (DAT_14cc253d8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc253d8 = FUN_140002ddd(FUN_1467552bf,uVar3,L"LerpDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc253d8);
  FUN_1446ddc76(local_118,"FLerpDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6cd80;
  local_50 = FUN_1497aa3dc;
  local_78 = FUN_1497aa5b6;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb8298 FUN_145fb8298 body=653 status=ok
// SIG undefined FUN_145fb8298(void)

void FUN_145fb8298(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FWrapDataflowNode",1);
  FUN_1446ddc76(&local_d0,&DAT_14a96b7e0,1);
  FUN_1446ddc76(&local_d8,"Math|Float",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,&DAT_14a96b7e0,1);
  FUN_1446ddc76(local_108,"FWrapDataflowNode",1);
  if (DAT_14cc253f0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc253f0 = FUN_140002ddd(FUN_146755355,uVar3,L"WrapDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc253f0,local_108,local_100);
  if (DAT_14cc253f0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc253f0 = FUN_140002ddd(FUN_146755355,uVar3,L"WrapDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc253f0);
  if (DAT_14cc253f0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc253f0 = FUN_140002ddd(FUN_146755355,uVar3,L"WrapDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc253f0);
  FUN_1446ddc76(local_118,"FWrapDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6cda0;
  local_50 = FUN_1497aa5ee;
  local_78 = FUN_1497aa7c8;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb8526 FUN_145fb8526 body=653 status=ok
// SIG undefined FUN_145fb8526(void)

void FUN_145fb8526(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FExpDataflowNode",1);
  FUN_1446ddc76(&local_d0,&DAT_149fb8695,1);
  FUN_1446ddc76(&local_d8,"Math|Float",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,&DAT_149fb8695,1);
  FUN_1446ddc76(local_108,"FExpDataflowNode",1);
  if (DAT_14cc25408 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25408 = FUN_140002ddd(FUN_1467553eb,uVar3,L"ExpDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25408,local_108,local_100);
  if (DAT_14cc25408 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25408 = FUN_140002ddd(FUN_1467553eb,uVar3,L"ExpDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25408);
  if (DAT_14cc25408 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25408 = FUN_140002ddd(FUN_1467553eb,uVar3,L"ExpDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25408);
  FUN_1446ddc76(local_118,"FExpDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6cdc0;
  local_50 = FUN_1497aa800;
  local_78 = FUN_1497aa972;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb87b4 FUN_145fb87b4 body=653 status=ok
// SIG undefined FUN_145fb87b4(void)

void FUN_145fb87b4(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FSinDataflowNode",1);
  FUN_1446ddc76(&local_d0,&DAT_149fb8bf5,1);
  FUN_1446ddc76(&local_d8,"Math|Trigonometry",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,&DAT_149fb8bf5,1);
  FUN_1446ddc76(local_108,"FSinDataflowNode",1);
  if (DAT_14cc25420 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25420 = FUN_140002ddd(FUN_146755481,uVar3,L"SinDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25420,local_108,local_100);
  if (DAT_14cc25420 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25420 = FUN_140002ddd(FUN_146755481,uVar3,L"SinDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25420);
  if (DAT_14cc25420 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25420 = FUN_140002ddd(FUN_146755481,uVar3,L"SinDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25420);
  FUN_1446ddc76(local_118,"FSinDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6cde0;
  local_50 = FUN_1497aa9aa;
  local_78 = FUN_1497aab1c;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb8a42 FUN_145fb8a42 body=653 status=ok
// SIG undefined FUN_145fb8a42(void)

void FUN_145fb8a42(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FArcSinDataflowNode",1);
  FUN_1446ddc76(&local_d0,"ArcSin",1);
  FUN_1446ddc76(&local_d8,"Math|Trigonometry",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"ArcSin",1);
  FUN_1446ddc76(local_108,"FArcSinDataflowNode",1);
  if (DAT_14cc25438 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25438 = FUN_140002ddd(FUN_146755517,uVar3,L"ArcSinDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25438,local_108,local_100);
  if (DAT_14cc25438 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25438 = FUN_140002ddd(FUN_146755517,uVar3,L"ArcSinDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25438);
  if (DAT_14cc25438 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25438 = FUN_140002ddd(FUN_146755517,uVar3,L"ArcSinDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25438);
  FUN_1446ddc76(local_118,"FArcSinDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6ce00;
  local_50 = FUN_1497aab54;
  local_78 = FUN_1497aacc6;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb8cd0 FUN_145fb8cd0 body=653 status=ok
// SIG undefined FUN_145fb8cd0(void)

void FUN_145fb8cd0(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FCosDataflowNode",1);
  FUN_1446ddc76(&local_d0,&DAT_149fb8ba5,1);
  FUN_1446ddc76(&local_d8,"Math|Trigonometry",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,&DAT_149fb8ba5,1);
  FUN_1446ddc76(local_108,"FCosDataflowNode",1);
  if (DAT_14cc25450 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25450 = FUN_140002ddd(FUN_1467555ad,uVar3,L"CosDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25450,local_108,local_100);
  if (DAT_14cc25450 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25450 = FUN_140002ddd(FUN_1467555ad,uVar3,L"CosDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25450);
  if (DAT_14cc25450 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25450 = FUN_140002ddd(FUN_1467555ad,uVar3,L"CosDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25450);
  FUN_1446ddc76(local_118,"FCosDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6ce20;
  local_50 = FUN_1497aacfe;
  local_78 = FUN_1497aae70;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb8f5e FUN_145fb8f5e body=653 status=ok
// SIG undefined FUN_145fb8f5e(void)

void FUN_145fb8f5e(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FArcCosDataflowNode",1);
  FUN_1446ddc76(&local_d0,"ArcCos",1);
  FUN_1446ddc76(&local_d8,"Math|Trigonometry",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"ArcCos",1);
  FUN_1446ddc76(local_108,"FArcCosDataflowNode",1);
  if (DAT_14cc25468 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25468 = FUN_140002ddd(FUN_146755643,uVar3,L"ArcCosDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25468,local_108,local_100);
  if (DAT_14cc25468 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25468 = FUN_140002ddd(FUN_146755643,uVar3,L"ArcCosDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25468);
  if (DAT_14cc25468 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25468 = FUN_140002ddd(FUN_146755643,uVar3,L"ArcCosDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25468);
  FUN_1446ddc76(local_118,"FArcCosDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6ce40;
  local_50 = FUN_1497aaea8;
  local_78 = FUN_1497ab01a;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb91ec FUN_145fb91ec body=653 status=ok
// SIG undefined FUN_145fb91ec(void)

void FUN_145fb91ec(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FTanDataflowNode",1);
  FUN_1446ddc76(&local_d0,&DAT_149fb8c35,1);
  FUN_1446ddc76(&local_d8,"Math|Trigonometry",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,&DAT_149fb8c35,1);
  FUN_1446ddc76(local_108,"FTanDataflowNode",1);
  if (DAT_14cc25480 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25480 = FUN_140002ddd(FUN_1467556d9,uVar3,L"TanDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25480,local_108,local_100);
  if (DAT_14cc25480 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25480 = FUN_140002ddd(FUN_1467556d9,uVar3,L"TanDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25480);
  if (DAT_14cc25480 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25480 = FUN_140002ddd(FUN_1467556d9,uVar3,L"TanDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25480);
  FUN_1446ddc76(local_118,"FTanDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6ce60;
  local_50 = FUN_1497ab052;
  local_78 = FUN_1497ab1c4;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb947a FUN_145fb947a body=653 status=ok
// SIG undefined FUN_145fb947a(void)

void FUN_145fb947a(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FArcTanDataflowNode",1);
  FUN_1446ddc76(&local_d0,"ArcTan",1);
  FUN_1446ddc76(&local_d8,"Math|Trigonometry",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"ArcTan",1);
  FUN_1446ddc76(local_108,"FArcTanDataflowNode",1);
  if (DAT_14cc25498 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25498 = FUN_140002ddd(FUN_14675576f,uVar3,L"ArcTanDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25498,local_108,local_100);
  if (DAT_14cc25498 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25498 = FUN_140002ddd(FUN_14675576f,uVar3,L"ArcTanDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25498);
  if (DAT_14cc25498 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25498 = FUN_140002ddd(FUN_14675576f,uVar3,L"ArcTanDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25498);
  FUN_1446ddc76(local_118,"FArcTanDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6ce80;
  local_50 = FUN_1497ab1fc;
  local_78 = FUN_1497ab36e;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb9708 FUN_145fb9708 body=653 status=ok
// SIG undefined FUN_145fb9708(void)

void FUN_145fb9708(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FArcTan2DataflowNode",1);
  FUN_1446ddc76(&local_d0,"ArcTan2",1);
  FUN_1446ddc76(&local_d8,"Math|Trigonometry",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"ArcTan2",1);
  FUN_1446ddc76(local_108,"FArcTan2DataflowNode",1);
  if (DAT_14cc254b0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc254b0 = FUN_140002ddd(FUN_146755805,uVar3,L"ArcTan2DataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc254b0,local_108,local_100);
  if (DAT_14cc254b0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc254b0 = FUN_140002ddd(FUN_146755805,uVar3,L"ArcTan2DataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc254b0);
  if (DAT_14cc254b0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc254b0 = FUN_140002ddd(FUN_146755805,uVar3,L"ArcTan2DataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc254b0);
  FUN_1446ddc76(local_118,"FArcTan2DataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6cea0;
  local_50 = FUN_1497ab3a6;
  local_78 = FUN_1497ab552;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb9996 FUN_145fb9996 body=653 status=ok
// SIG undefined FUN_145fb9996(void)

void FUN_145fb9996(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FNormalizeToRangeDataflowNode",1);
  FUN_1446ddc76(&local_d0,"NormalizeToRange",1);
  FUN_1446ddc76(&local_d8,"Math|Float",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"NormalizeToRange",1);
  FUN_1446ddc76(local_108,"FNormalizeToRangeDataflowNode",1);
  if (DAT_14cc254c8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc254c8 = FUN_140002ddd(FUN_14675589b,uVar3,L"NormalizeToRangeDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc254c8,local_108,local_100);
  if (DAT_14cc254c8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc254c8 = FUN_140002ddd(FUN_14675589b,uVar3,L"NormalizeToRangeDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc254c8);
  if (DAT_14cc254c8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc254c8 = FUN_140002ddd(FUN_14675589b,uVar3,L"NormalizeToRangeDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc254c8);
  FUN_1446ddc76(local_118,"FNormalizeToRangeDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6cec0;
  local_50 = FUN_1497ab58a;
  local_78 = FUN_1497ab764;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb9c24 FUN_145fb9c24 body=653 status=ok
// SIG undefined FUN_145fb9c24(void)

void FUN_145fb9c24(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FScaleVectorDataflowNode",1);
  FUN_1446ddc76(&local_d0,"ScaleVector",1);
  FUN_1446ddc76(&local_d8,"Math|Vector",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"ScaleVector",1);
  FUN_1446ddc76(local_108,"FScaleVectorDataflowNode",1);
  if (DAT_14cc254e0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc254e0 = FUN_140002ddd(FUN_146755931,uVar3,L"ScaleVectorDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc254e0,local_108,local_100);
  if (DAT_14cc254e0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc254e0 = FUN_140002ddd(FUN_146755931,uVar3,L"ScaleVectorDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc254e0);
  if (DAT_14cc254e0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc254e0 = FUN_140002ddd(FUN_146755931,uVar3,L"ScaleVectorDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc254e0);
  FUN_1446ddc76(local_118,"FScaleVectorDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6cee0;
  local_50 = FUN_1497ab79c;
  local_78 = FUN_1497ab960;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fb9eb2 FUN_145fb9eb2 body=653 status=ok
// SIG undefined FUN_145fb9eb2(void)

void FUN_145fb9eb2(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FDotProductDataflowNode",1);
  FUN_1446ddc76(&local_d0,"DotProduct",1);
  FUN_1446ddc76(&local_d8,"Math|Vector",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"DotProduct",1);
  FUN_1446ddc76(local_108,"FDotProductDataflowNode",1);
  if (DAT_14cc254f8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc254f8 = FUN_140002ddd(FUN_1467559c7,uVar3,L"DotProductDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc254f8,local_108,local_100);
  if (DAT_14cc254f8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc254f8 = FUN_140002ddd(FUN_1467559c7,uVar3,L"DotProductDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc254f8);
  if (DAT_14cc254f8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc254f8 = FUN_140002ddd(FUN_1467559c7,uVar3,L"DotProductDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc254f8);
  FUN_1446ddc76(local_118,"FDotProductDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6cf00;
  local_50 = FUN_1497ab998;
  local_78 = FUN_1497abb56;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fba140 FUN_145fba140 body=653 status=ok
// SIG undefined FUN_145fba140(void)

void FUN_145fba140(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FCrossProductDataflowNode",1);
  FUN_1446ddc76(&local_d0,"CrossProduct",1);
  FUN_1446ddc76(&local_d8,"Math|Vector",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"CrossProduct",1);
  FUN_1446ddc76(local_108,"FCrossProductDataflowNode",1);
  if (DAT_14cc25510 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25510 = FUN_140002ddd(FUN_146755a5d,uVar3,L"CrossProductDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25510,local_108,local_100);
  if (DAT_14cc25510 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25510 = FUN_140002ddd(FUN_146755a5d,uVar3,L"CrossProductDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25510);
  if (DAT_14cc25510 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25510 = FUN_140002ddd(FUN_146755a5d,uVar3,L"CrossProductDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25510);
  FUN_1446ddc76(local_118,"FCrossProductDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6cf20;
  local_50 = FUN_1497abb8e;
  local_78 = FUN_1497abd50;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fba3ce FUN_145fba3ce body=653 status=ok
// SIG undefined FUN_145fba3ce(void)

void FUN_145fba3ce(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FNormalizeDataflowNode",1);
  FUN_1446ddc76(&local_d0,"Normalize",1);
  FUN_1446ddc76(&local_d8,"Math|Vector",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"Normalize",1);
  FUN_1446ddc76(local_108,"FNormalizeDataflowNode",1);
  if (DAT_14cc25528 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25528 = FUN_140002ddd(FUN_146755af3,uVar3,L"NormalizeDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25528,local_108,local_100);
  if (DAT_14cc25528 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25528 = FUN_140002ddd(FUN_146755af3,uVar3,L"NormalizeDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25528);
  if (DAT_14cc25528 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25528 = FUN_140002ddd(FUN_146755af3,uVar3,L"NormalizeDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25528);
  FUN_1446ddc76(local_118,"FNormalizeDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6cf40;
  local_50 = FUN_1497abd88;
  local_78 = FUN_1497abf4c;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fba65c FUN_145fba65c body=653 status=ok
// SIG undefined FUN_145fba65c(void)

void FUN_145fba65c(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FLengthDataflowNode",1);
  FUN_1446ddc76(&local_d0,"Length",1);
  FUN_1446ddc76(&local_d8,"Math|Vector",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"Length",1);
  FUN_1446ddc76(local_108,"FLengthDataflowNode",1);
  if (DAT_14cc25540 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25540 = FUN_140002ddd(FUN_146755b89,uVar3,L"LengthDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25540,local_108,local_100);
  if (DAT_14cc25540 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25540 = FUN_140002ddd(FUN_146755b89,uVar3,L"LengthDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25540);
  if (DAT_14cc25540 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25540 = FUN_140002ddd(FUN_146755b89,uVar3,L"LengthDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25540);
  FUN_1446ddc76(local_118,"FLengthDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6cf60;
  local_50 = FUN_1497abf84;
  local_78 = FUN_1497ac100;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fba8ea FUN_145fba8ea body=653 status=ok
// SIG undefined FUN_145fba8ea(void)

void FUN_145fba8ea(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FDistanceDataflowNode",1);
  FUN_1446ddc76(&local_d0,"Distance",1);
  FUN_1446ddc76(&local_d8,"Math|Points",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"Distance",1);
  FUN_1446ddc76(local_108,"FDistanceDataflowNode",1);
  if (DAT_14cc25558 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25558 = FUN_140002ddd(FUN_146755c1f,uVar3,L"DistanceDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25558,local_108,local_100);
  if (DAT_14cc25558 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25558 = FUN_140002ddd(FUN_146755c1f,uVar3,L"DistanceDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25558);
  if (DAT_14cc25558 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25558 = FUN_140002ddd(FUN_146755c1f,uVar3,L"DistanceDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25558);
  FUN_1446ddc76(local_118,"FDistanceDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6cf80;
  local_50 = FUN_1497ac138;
  local_78 = FUN_1497ac2f6;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fbab78 FUN_145fbab78 body=653 status=ok
// SIG undefined FUN_145fbab78(void)

void FUN_145fbab78(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FIsNearlyZeroDataflowNode",1);
  FUN_1446ddc76(&local_d0,"IsNearlyZero",1);
  FUN_1446ddc76(&local_d8,"Math|Utilities",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"IsNearlyZero",1);
  FUN_1446ddc76(local_108,"FIsNearlyZeroDataflowNode",1);
  if (DAT_14cc25570 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25570 = FUN_140002ddd(FUN_146755cb5,uVar3,L"IsNearlyZeroDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25570,local_108,local_100);
  if (DAT_14cc25570 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25570 = FUN_140002ddd(FUN_146755cb5,uVar3,L"IsNearlyZeroDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25570);
  if (DAT_14cc25570 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25570 = FUN_140002ddd(FUN_146755cb5,uVar3,L"IsNearlyZeroDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25570);
  FUN_1446ddc76(local_118,"FIsNearlyZeroDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6cfa0;
  local_50 = FUN_1497ac32e;
  local_78 = FUN_1497ac4aa;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fbae06 FUN_145fbae06 body=653 status=ok
// SIG undefined FUN_145fbae06(void)

void FUN_145fbae06(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FRandomFloatDataflowNode",1);
  FUN_1446ddc76(&local_d0,"RandomFloat",1);
  FUN_1446ddc76(&local_d8,"Math|Random",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"RandomFloat",1);
  FUN_1446ddc76(local_108,"FRandomFloatDataflowNode",1);
  if (DAT_14cc25588 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25588 = FUN_140002ddd(FUN_146755d4b,uVar3,L"RandomFloatDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25588,local_108,local_100);
  if (DAT_14cc25588 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25588 = FUN_140002ddd(FUN_146755d4b,uVar3,L"RandomFloatDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25588);
  if (DAT_14cc25588 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25588 = FUN_140002ddd(FUN_146755d4b,uVar3,L"RandomFloatDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25588);
  FUN_1446ddc76(local_118,"FRandomFloatDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6cfc0;
  local_50 = FUN_1497ac4e2;
  local_78 = FUN_1497ac69a;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fbb094 FUN_145fbb094 body=653 status=ok
// SIG undefined FUN_145fbb094(void)

void FUN_145fbb094(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FRandomFloatInRangeDataflowNode",1);
  FUN_1446ddc76(&local_d0,"RandomFloatInRange",1);
  FUN_1446ddc76(&local_d8,"Math|Random",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"RandomFloatInRange",1);
  FUN_1446ddc76(local_108,"FRandomFloatInRangeDataflowNode",1);
  if (DAT_14cc255a0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc255a0 = FUN_140002ddd(FUN_146755de1,uVar3,L"RandomFloatInRangeDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc255a0,local_108,local_100);
  if (DAT_14cc255a0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc255a0 = FUN_140002ddd(FUN_146755de1,uVar3,L"RandomFloatInRangeDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc255a0);
  if (DAT_14cc255a0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc255a0 = FUN_140002ddd(FUN_146755de1,uVar3,L"RandomFloatInRangeDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc255a0);
  FUN_1446ddc76(local_118,"FRandomFloatInRangeDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6cfe0;
  local_50 = FUN_1497ac6d2;
  local_78 = FUN_1497ac8ec;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fbb322 FUN_145fbb322 body=653 status=ok
// SIG undefined FUN_145fbb322(void)

void FUN_145fbb322(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FRandomUnitVectorDataflowNode",1);
  FUN_1446ddc76(&local_d0,"RandomUnitVector",1);
  FUN_1446ddc76(&local_d8,"Math|Random",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"RandomUnitVector",1);
  FUN_1446ddc76(local_108,"FRandomUnitVectorDataflowNode",1);
  if (DAT_14cc255b8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc255b8 = FUN_140002ddd(FUN_146755e77,uVar3,L"RandomUnitVectorDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc255b8,local_108,local_100);
  if (DAT_14cc255b8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc255b8 = FUN_140002ddd(FUN_146755e77,uVar3,L"RandomUnitVectorDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc255b8);
  if (DAT_14cc255b8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc255b8 = FUN_140002ddd(FUN_146755e77,uVar3,L"RandomUnitVectorDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc255b8);
  FUN_1446ddc76(local_118,"FRandomUnitVectorDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6d000;
  local_50 = FUN_1497ac924;
  local_78 = FUN_1497acae6;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fbb5b0 FUN_145fbb5b0 body=653 status=ok
// SIG undefined FUN_145fbb5b0(void)

void FUN_145fbb5b0(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FRandomUnitVectorInConeDataflowNode",1);
  FUN_1446ddc76(&local_d0,"RandomUnitVectorInCone",1);
  FUN_1446ddc76(&local_d8,"Math|Random",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"RandomUnitVectorInCone",1);
  FUN_1446ddc76(local_108,"FRandomUnitVectorInConeDataflowNode",1);
  if (DAT_14cc255d0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc255d0 = FUN_140002ddd(FUN_146755f0d,uVar3,L"RandomUnitVectorInConeDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc255d0,local_108,local_100);
  if (DAT_14cc255d0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc255d0 = FUN_140002ddd(FUN_146755f0d,uVar3,L"RandomUnitVectorInConeDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc255d0);
  if (DAT_14cc255d0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc255d0 = FUN_140002ddd(FUN_146755f0d,uVar3,L"RandomUnitVectorInConeDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc255d0);
  FUN_1446ddc76(local_118,"FRandomUnitVectorInConeDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6d020;
  local_50 = FUN_1497acb1e;
  local_78 = FUN_1497acd68;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fbb83e FUN_145fbb83e body=653 status=ok
// SIG undefined FUN_145fbb83e(void)

void FUN_145fbb83e(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FRadiansToDegreesDataflowNode",1);
  FUN_1446ddc76(&local_d0,"RadiansToDegrees",1);
  FUN_1446ddc76(&local_d8,"Math|Trigonometry",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"RadiansToDegrees",1);
  FUN_1446ddc76(local_108,"FRadiansToDegreesDataflowNode",1);
  if (DAT_14cc255e8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc255e8 = FUN_140002ddd(FUN_146755fa3,uVar3,L"RadiansToDegreesDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc255e8,local_108,local_100);
  if (DAT_14cc255e8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc255e8 = FUN_140002ddd(FUN_146755fa3,uVar3,L"RadiansToDegreesDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc255e8);
  if (DAT_14cc255e8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc255e8 = FUN_140002ddd(FUN_146755fa3,uVar3,L"RadiansToDegreesDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc255e8);
  FUN_1446ddc76(local_118,"FRadiansToDegreesDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6d040;
  local_50 = FUN_1497acda0;
  local_78 = FUN_1497acf12;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fbbacc FUN_145fbbacc body=653 status=ok
// SIG undefined FUN_145fbbacc(void)

void FUN_145fbbacc(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FDegreesToRadiansDataflowNode",1);
  FUN_1446ddc76(&local_d0,"DegreesToRadians",1);
  FUN_1446ddc76(&local_d8,"Math|Trigonometry",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"DegreesToRadians",1);
  FUN_1446ddc76(local_108,"FDegreesToRadiansDataflowNode",1);
  if (DAT_14cc25600 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25600 = FUN_140002ddd(FUN_146756039,uVar3,L"DegreesToRadiansDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25600,local_108,local_100);
  if (DAT_14cc25600 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25600 = FUN_140002ddd(FUN_146756039,uVar3,L"DegreesToRadiansDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25600);
  if (DAT_14cc25600 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25600 = FUN_140002ddd(FUN_146756039,uVar3,L"DegreesToRadiansDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25600);
  FUN_1446ddc76(local_118,"FDegreesToRadiansDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6d060;
  local_50 = FUN_1497acf4a;
  local_78 = FUN_1497ad0bc;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fbbd5a FUN_145fbbd5a body=653 status=ok
// SIG undefined FUN_145fbbd5a(void)

void FUN_145fbbd5a(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FMathConstantsDataflowNode",1);
  FUN_1446ddc76(&local_d0,"MathConstants",1);
  FUN_1446ddc76(&local_d8,"Math|Utilities",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"MathConstants",1);
  FUN_1446ddc76(local_108,"FMathConstantsDataflowNode",1);
  if (DAT_14cc25630 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25630 = FUN_140002ddd(FUN_1467560ff,uVar3,L"MathConstantsDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25630,local_108,local_100);
  if (DAT_14cc25630 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25630 = FUN_140002ddd(FUN_1467560ff,uVar3,L"MathConstantsDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25630);
  if (DAT_14cc25630 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25630 = FUN_140002ddd(FUN_1467560ff,uVar3,L"MathConstantsDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25630);
  FUN_1446ddc76(local_118,"FMathConstantsDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6d080;
  local_50 = FUN_1497ad0f4;
  local_78 = FUN_1497ad1ec;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fbbfe8 FUN_145fbbfe8 body=653 status=ok
// SIG undefined FUN_145fbbfe8(void)

void FUN_145fbbfe8(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FOneMinusDataflowNode",1);
  FUN_1446ddc76(&local_d0,"OneMinus",1);
  FUN_1446ddc76(&local_d8,"Math|Float",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"OneMinus",1);
  FUN_1446ddc76(local_108,"FOneMinusDataflowNode",1);
  if (DAT_14cc25648 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25648 = FUN_140002ddd(FUN_146756195,uVar3,L"OneMinusDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25648,local_108,local_100);
  if (DAT_14cc25648 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25648 = FUN_140002ddd(FUN_146756195,uVar3,L"OneMinusDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25648);
  if (DAT_14cc25648 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25648 = FUN_140002ddd(FUN_146756195,uVar3,L"OneMinusDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25648);
  FUN_1446ddc76(local_118,"FOneMinusDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6d0a0;
  local_50 = FUN_1497ad224;
  local_78 = FUN_1497ad396;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fbc276 FUN_145fbc276 body=653 status=ok
// SIG undefined FUN_145fbc276(void)

void FUN_145fbc276(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FFloatMathExpressionDataflowNode",1);
  FUN_1446ddc76(&local_d0,"FloatMathExpression",1);
  FUN_1446ddc76(&local_d8,"Math|Float",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"FloatMathExpression",1);
  FUN_1446ddc76(local_108,"FFloatMathExpressionDataflowNode",1);
  if (DAT_14cc25660 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25660 = FUN_140002ddd(FUN_14675622b,uVar3,L"FloatMathExpressionDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25660,local_108,local_100);
  if (DAT_14cc25660 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25660 = FUN_140002ddd(FUN_14675622b,uVar3,L"FloatMathExpressionDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25660);
  if (DAT_14cc25660 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25660 = FUN_140002ddd(FUN_14675622b,uVar3,L"FloatMathExpressionDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25660);
  FUN_1446ddc76(local_118,"FFloatMathExpressionDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6d100;
  local_50 = FUN_1497ad3ce;
  local_78 = FUN_1497ad47e;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fbc504 FUN_145fbc504 body=653 status=ok
// SIG undefined FUN_145fbc504(void)

void FUN_145fbc504(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FMathExpressionDataflowNode",1);
  FUN_1446ddc76(&local_d0,"MathExpression",1);
  FUN_1446ddc76(&local_d8,&DAT_149faf950,1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"MathExpression",1);
  FUN_1446ddc76(local_108,"FMathExpressionDataflowNode",1);
  if (DAT_14cc25678 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25678 = FUN_140002ddd(FUN_1467562c1,uVar3,L"MathExpressionDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25678,local_108,local_100);
  if (DAT_14cc25678 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25678 = FUN_140002ddd(FUN_1467562c1,uVar3,L"MathExpressionDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25678);
  if (DAT_14cc25678 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25678 = FUN_140002ddd(FUN_1467562c1,uVar3,L"MathExpressionDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25678);
  FUN_1446ddc76(local_118,"FMathExpressionDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6d150;
  local_50 = FUN_1497ad4b6;
  local_78 = FUN_1497ad566;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fbc792 FUN_145fbc792 body=653 status=ok
// SIG undefined FUN_145fbc792(void)

void FUN_145fbc792(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FPointsToMeshDataflowNode",1);
  FUN_1446ddc76(&local_d0,"PointsToMesh",1);
  FUN_1446ddc76(&local_d8,"Mesh|Utilities",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"PointsToMesh",1);
  FUN_1446ddc76(local_108,"FPointsToMeshDataflowNode",1);
  if (DAT_14cc25690 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25690 = FUN_140002ddd(FUN_146756357,uVar3,L"PointsToMeshDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25690,local_108,local_100);
  if (DAT_14cc25690 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25690 = FUN_140002ddd(FUN_146756357,uVar3,L"PointsToMeshDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25690);
  if (DAT_14cc25690 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25690 = FUN_140002ddd(FUN_146756357,uVar3,L"PointsToMeshDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25690);
  FUN_1446ddc76(local_118,"FPointsToMeshDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6d170;
  local_50 = FUN_1497ad650;
  local_78 = FUN_1497ad7fc;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fbca20 FUN_145fbca20 body=653 status=ok
// SIG undefined FUN_145fbca20(void)

void FUN_145fbca20(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FBoxToMeshDataflowNode",1);
  FUN_1446ddc76(&local_d0,"BoxToMesh",1);
  FUN_1446ddc76(&local_d8,"Mesh|Utilities",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"BoxToMesh",1);
  FUN_1446ddc76(local_108,"FBoxToMeshDataflowNode",1);
  if (DAT_14cc256a8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc256a8 = FUN_140002ddd(FUN_1467563ed,uVar3,L"BoxToMeshDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc256a8,local_108,local_100);
  if (DAT_14cc256a8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc256a8 = FUN_140002ddd(FUN_1467563ed,uVar3,L"BoxToMeshDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc256a8);
  if (DAT_14cc256a8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc256a8 = FUN_140002ddd(FUN_1467563ed,uVar3,L"BoxToMeshDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc256a8);
  FUN_1446ddc76(local_118,"FBoxToMeshDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6d190;
  local_50 = FUN_1497ad834;
  local_78 = FUN_1497ada00;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fbccae FUN_145fbccae body=653 status=ok
// SIG undefined FUN_145fbccae(void)

void FUN_145fbccae(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FMeshInfoDataflowNode",1);
  FUN_1446ddc76(&local_d0,"MeshInfo",1);
  FUN_1446ddc76(&local_d8,"Mesh|Utilities",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"MeshInfo",1);
  FUN_1446ddc76(local_108,"FMeshInfoDataflowNode",1);
  if (DAT_14cc256c0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc256c0 = FUN_140002ddd(FUN_146756483,uVar3,L"MeshInfoDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc256c0,local_108,local_100);
  if (DAT_14cc256c0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc256c0 = FUN_140002ddd(FUN_146756483,uVar3,L"MeshInfoDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc256c0);
  if (DAT_14cc256c0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc256c0 = FUN_140002ddd(FUN_146756483,uVar3,L"MeshInfoDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc256c0);
  FUN_1446ddc76(local_118,"FMeshInfoDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6d1b0;
  local_50 = FUN_1497ada38;
  local_78 = FUN_1497adbc0;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fbcf3c FUN_145fbcf3c body=653 status=ok
// SIG undefined FUN_145fbcf3c(void)

void FUN_145fbcf3c(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FMeshToCollectionDataflowNode",1);
  FUN_1446ddc76(&local_d0,"MeshToCollection",1);
  FUN_1446ddc76(&local_d8,"Mesh|Utilities",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"MeshToCollection",1);
  FUN_1446ddc76(local_108,"FMeshToCollectionDataflowNode",1);
  if (DAT_14cc256d8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc256d8 = FUN_140002ddd(FUN_146756519,uVar3,L"MeshToCollectionDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc256d8,local_108,local_100);
  if (DAT_14cc256d8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc256d8 = FUN_140002ddd(FUN_146756519,uVar3,L"MeshToCollectionDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc256d8);
  if (DAT_14cc256d8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc256d8 = FUN_140002ddd(FUN_146756519,uVar3,L"MeshToCollectionDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc256d8);
  FUN_1446ddc76(local_118,"FMeshToCollectionDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6d1d0;
  local_50 = FUN_1497adbf8;
  local_78 = FUN_1497add78;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fbd1ca FUN_145fbd1ca body=653 status=ok
// SIG undefined FUN_145fbd1ca(void)

void FUN_145fbd1ca(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FCollectionToMeshDataflowNode",1);
  FUN_1446ddc76(&local_d0,"CollectionToMesh",1);
  FUN_1446ddc76(&local_d8,"Mesh|Utilities",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"CollectionToMesh",1);
  FUN_1446ddc76(local_108,"FCollectionToMeshDataflowNode",1);
  if (DAT_14cc256f0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc256f0 = FUN_140002ddd(FUN_1467565af,uVar3,L"CollectionToMeshDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc256f0,local_108,local_100);
  if (DAT_14cc256f0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc256f0 = FUN_140002ddd(FUN_1467565af,uVar3,L"CollectionToMeshDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc256f0);
  if (DAT_14cc256f0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc256f0 = FUN_140002ddd(FUN_1467565af,uVar3,L"CollectionToMeshDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc256f0);
  FUN_1446ddc76(local_118,"FCollectionToMeshDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6d1f0;
  local_50 = FUN_1497addb0;
  local_78 = FUN_1497adf36;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fbd458 FUN_145fbd458 body=653 status=ok
// SIG undefined FUN_145fbd458(void)

void FUN_145fbd458(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FStaticMeshToMeshDataflowNode",1);
  FUN_1446ddc76(&local_d0,"StaticMeshToMesh",1);
  FUN_1446ddc76(&local_d8,"Mesh|Utilities",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"StaticMeshToMesh",1);
  FUN_1446ddc76(local_108,"FStaticMeshToMeshDataflowNode",1);
  if (DAT_14cc25708 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25708 = FUN_140002ddd(FUN_146756645,uVar3,L"StaticMeshToMeshDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25708,local_108,local_100);
  if (DAT_14cc25708 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25708 = FUN_140002ddd(FUN_146756645,uVar3,L"StaticMeshToMeshDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25708);
  if (DAT_14cc25708 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25708 = FUN_140002ddd(FUN_146756645,uVar3,L"StaticMeshToMeshDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25708);
  FUN_1446ddc76(local_118,"FStaticMeshToMeshDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6d210;
  local_50 = FUN_1497adf6e;
  local_78 = FUN_1497ae074;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fbd6e6 FUN_145fbd6e6 body=653 status=ok
// SIG undefined FUN_145fbd6e6(void)

void FUN_145fbd6e6(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FMeshAppendDataflowNode",1);
  FUN_1446ddc76(&local_d0,"MeshAppend",1);
  FUN_1446ddc76(&local_d8,"Mesh|Utilities",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"MeshAppend",1);
  FUN_1446ddc76(local_108,"FMeshAppendDataflowNode",1);
  if (DAT_14cc25720 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25720 = FUN_140002ddd(FUN_1467566db,uVar3,L"MeshAppendDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25720,local_108,local_100);
  if (DAT_14cc25720 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25720 = FUN_140002ddd(FUN_1467566db,uVar3,L"MeshAppendDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25720);
  if (DAT_14cc25720 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25720 = FUN_140002ddd(FUN_1467566db,uVar3,L"MeshAppendDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25720);
  FUN_1446ddc76(local_118,"FMeshAppendDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6d230;
  local_50 = FUN_1497ae0ac;
  local_78 = FUN_1497ae258;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fbd974 FUN_145fbd974 body=653 status=ok
// SIG undefined FUN_145fbd974(void)

void FUN_145fbd974(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FMeshBooleanDataflowNode",1);
  FUN_1446ddc76(&local_d0,"MeshBoolean",1);
  FUN_1446ddc76(&local_d8,"Mesh|Utilities",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"MeshBoolean",1);
  FUN_1446ddc76(local_108,"FMeshBooleanDataflowNode",1);
  if (DAT_14cc25750 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25750 = FUN_140002ddd(FUN_1467567a1,uVar3,L"MeshBooleanDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25750,local_108,local_100);
  if (DAT_14cc25750 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25750 = FUN_140002ddd(FUN_1467567a1,uVar3,L"MeshBooleanDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25750);
  if (DAT_14cc25750 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25750 = FUN_140002ddd(FUN_1467567a1,uVar3,L"MeshBooleanDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25750);
  FUN_1446ddc76(local_118,"FMeshBooleanDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6d250;
  local_50 = FUN_1497ae290;
  local_78 = FUN_1497ae444;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fbdc02 FUN_145fbdc02 body=653 status=ok
// SIG undefined FUN_145fbdc02(void)

void FUN_145fbdc02(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FMeshCopyToPointsDataflowNode",1);
  FUN_1446ddc76(&local_d0,"MeshCopyToPoints",1);
  FUN_1446ddc76(&local_d8,"Mesh|Utilities",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"MeshCopyToPoints",1);
  FUN_1446ddc76(local_108,"FMeshCopyToPointsDataflowNode",1);
  if (DAT_14cc25768 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25768 = FUN_140002ddd(FUN_146756837,uVar3,L"MeshCopyToPointsDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25768,local_108,local_100);
  if (DAT_14cc25768 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25768 = FUN_140002ddd(FUN_146756837,uVar3,L"MeshCopyToPointsDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25768);
  if (DAT_14cc25768 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25768 = FUN_140002ddd(FUN_146756837,uVar3,L"MeshCopyToPointsDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25768);
  FUN_1446ddc76(local_118,"FMeshCopyToPointsDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6d270;
  local_50 = FUN_1497ae47c;
  local_78 = FUN_1497ae63a;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fbde90 FUN_145fbde90 body=653 status=ok
// SIG undefined FUN_145fbde90(void)

void FUN_145fbde90(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FGetMeshDataDataflowNode",1);
  FUN_1446ddc76(&local_d0,"GetMeshData",1);
  FUN_1446ddc76(&local_d8,"Mesh|Utilities",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"GetMeshData",1);
  FUN_1446ddc76(local_108,"FGetMeshDataDataflowNode",1);
  if (DAT_14cc25780 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25780 = FUN_140002ddd(FUN_1467568cd,uVar3,L"GetMeshDataDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25780,local_108,local_100);
  if (DAT_14cc25780 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25780 = FUN_140002ddd(FUN_1467568cd,uVar3,L"GetMeshDataDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25780);
  if (DAT_14cc25780 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25780 = FUN_140002ddd(FUN_1467568cd,uVar3,L"GetMeshDataDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25780);
  FUN_1446ddc76(local_118,"FGetMeshDataDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6d290;
  local_50 = FUN_1497ae672;
  local_78 = FUN_1497ae852;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fbe11e FUN_145fbe11e body=653 status=ok
// SIG undefined FUN_145fbe11e(void)

void FUN_145fbe11e(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FGetCollectionFromAssetDataflowNode",1);
  FUN_1446ddc76(&local_d0,"GetCollectionFromAsset",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Asset",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"GetCollectionFromAsset",1);
  FUN_1446ddc76(local_108,"FGetCollectionFromAssetDataflowNode",1);
  if (DAT_14cc25798 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25798 = FUN_140002ddd(FUN_146756963,uVar3,L"GetCollectionFromAssetDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25798,local_108,local_100);
  if (DAT_14cc25798 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25798 = FUN_140002ddd(FUN_146756963,uVar3,L"GetCollectionFromAssetDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25798);
  if (DAT_14cc25798 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25798 = FUN_140002ddd(FUN_146756963,uVar3,L"GetCollectionFromAssetDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25798);
  FUN_1446ddc76(local_118,"FGetCollectionFromAssetDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6d2f0;
  local_50 = FUN_1497aec5e;
  local_78 = FUN_1497aedde;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fbe3ac FUN_145fbe3ac body=653 status=ok
// SIG undefined FUN_145fbe3ac(void)

void FUN_145fbe3ac(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FAppendCollectionAssetsDataflowNode",1);
  FUN_1446ddc76(&local_d0,"AppendCollections",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"AppendCollections",1);
  FUN_1446ddc76(local_108,"FAppendCollectionAssetsDataflowNode",1);
  if (DAT_14cc257b0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc257b0 = FUN_140002ddd(FUN_1467569f9,uVar3,L"AppendCollectionAssetsDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc257b0,local_108,local_100);
  if (DAT_14cc257b0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc257b0 = FUN_140002ddd(FUN_1467569f9,uVar3,L"AppendCollectionAssetsDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc257b0);
  if (DAT_14cc257b0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc257b0 = FUN_140002ddd(FUN_1467569f9,uVar3,L"AppendCollectionAssetsDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc257b0);
  FUN_1446ddc76(local_118,"FAppendCollectionAssetsDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6d310;
  local_50 = FUN_1497aee16;
  local_78 = FUN_1497af028;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fbe63a FUN_145fbe63a body=653 status=ok
// SIG undefined FUN_145fbe63a(void)

void FUN_145fbe63a(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FPrintStringDataflowNode",1);
  FUN_1446ddc76(&local_d0,"PrintString",1);
  FUN_1446ddc76(&local_d8,"Development",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"PrintString",1);
  FUN_1446ddc76(local_108,"FPrintStringDataflowNode",1);
  if (DAT_14cc257c8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc257c8 = FUN_140002ddd(FUN_146756a8f,uVar3,L"PrintStringDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc257c8,local_108,local_100);
  if (DAT_14cc257c8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc257c8 = FUN_140002ddd(FUN_146756a8f,uVar3,L"PrintStringDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc257c8);
  if (DAT_14cc257c8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc257c8 = FUN_140002ddd(FUN_146756a8f,uVar3,L"PrintStringDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc257c8);
  FUN_1446ddc76(local_118,"FPrintStringDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6d330;
  local_50 = FUN_1497af060;
  local_78 = FUN_1497af1ba;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fbe8c8 FUN_145fbe8c8 body=653 status=ok
// SIG undefined FUN_145fbe8c8(void)

void FUN_145fbe8c8(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FLogStringDataflowNode",1);
  FUN_1446ddc76(&local_d0,"LogString",1);
  FUN_1446ddc76(&local_d8,"Development",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"LogString",1);
  FUN_1446ddc76(local_108,"FLogStringDataflowNode",1);
  if (DAT_14cc257e0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc257e0 = FUN_140002ddd(FUN_146756b25,uVar3,L"LogStringDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc257e0,local_108,local_100);
  if (DAT_14cc257e0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc257e0 = FUN_140002ddd(FUN_146756b25,uVar3,L"LogStringDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc257e0);
  if (DAT_14cc257e0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc257e0 = FUN_140002ddd(FUN_146756b25,uVar3,L"LogStringDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc257e0);
  FUN_1446ddc76(local_118,"FLogStringDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6d350;
  local_50 = FUN_1497af1f2;
  local_78 = FUN_1497af33a;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fbeb56 FUN_145fbeb56 body=653 status=ok
// SIG undefined FUN_145fbeb56(void)

void FUN_145fbeb56(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FBoundingBoxDataflowNode",1);
  FUN_1446ddc76(&local_d0,"BoundingBox",1);
  FUN_1446ddc76(&local_d8,"Utilities|Box",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"BoundingBox",1);
  FUN_1446ddc76(local_108,"FBoundingBoxDataflowNode",1);
  if (DAT_14cc257f8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc257f8 = FUN_140002ddd(FUN_146756bbb,uVar3,L"BoundingBoxDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc257f8,local_108,local_100);
  if (DAT_14cc257f8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc257f8 = FUN_140002ddd(FUN_146756bbb,uVar3,L"BoundingBoxDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc257f8);
  if (DAT_14cc257f8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc257f8 = FUN_140002ddd(FUN_146756bbb,uVar3,L"BoundingBoxDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc257f8);
  FUN_1446ddc76(local_118,"FBoundingBoxDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6d370;
  local_50 = FUN_1497af372;
  local_78 = FUN_1497af508;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fbede4 FUN_145fbede4 body=653 status=ok
// SIG undefined FUN_145fbede4(void)

void FUN_145fbede4(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FExpandBoundingBoxDataflowNode",1);
  FUN_1446ddc76(&local_d0,"ExpandBoundingBox",1);
  FUN_1446ddc76(&local_d8,"Utilities|Box",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"ExpandBoundingBox",1);
  FUN_1446ddc76(local_108,"FExpandBoundingBoxDataflowNode",1);
  if (DAT_14cc25840 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25840 = FUN_140002ddd(FUN_146756d17,uVar3,L"ExpandBoundingBoxDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25840,local_108,local_100);
  if (DAT_14cc25840 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25840 = FUN_140002ddd(FUN_146756d17,uVar3,L"ExpandBoundingBoxDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25840);
  if (DAT_14cc25840 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25840 = FUN_140002ddd(FUN_146756d17,uVar3,L"ExpandBoundingBoxDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25840);
  FUN_1446ddc76(local_118,"FExpandBoundingBoxDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6d390;
  local_50 = FUN_1497af540;
  local_78 = FUN_1497af7ca;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fbf072 FUN_145fbf072 body=653 status=ok
// SIG undefined FUN_145fbf072(void)

void FUN_145fbf072(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FGetBoxLengthsDataflowNode",1);
  FUN_1446ddc76(&local_d0,"GetBoxLengths",1);
  FUN_1446ddc76(&local_d8,"Utilities|Box",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"GetBoxLengths",1);
  FUN_1446ddc76(local_108,"FGetBoxLengthsDataflowNode",1);
  if (DAT_14cc25828 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25828 = FUN_140002ddd(FUN_146756c81,uVar3,L"GetBoxLengthsDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25828,local_108,local_100);
  if (DAT_14cc25828 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25828 = FUN_140002ddd(FUN_146756c81,uVar3,L"GetBoxLengthsDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25828);
  if (DAT_14cc25828 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25828 = FUN_140002ddd(FUN_146756c81,uVar3,L"GetBoxLengthsDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25828);
  FUN_1446ddc76(local_118,"FGetBoxLengthsDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6d3b0;
  local_50 = FUN_1497af802;
  local_78 = FUN_1497af986;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fbf300 FUN_145fbf300 body=653 status=ok
// SIG undefined FUN_145fbf300(void)

void FUN_145fbf300(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FExpandVectorDataflowNode",1);
  FUN_1446ddc76(&local_d0,"ExpandVector",1);
  FUN_1446ddc76(&local_d8,"Utilities|Vector",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"ExpandVector",1);
  FUN_1446ddc76(local_108,"FExpandVectorDataflowNode",1);
  if (DAT_14cc25858 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25858 = FUN_140002ddd(FUN_146756dad,uVar3,L"ExpandVectorDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25858,local_108,local_100);
  if (DAT_14cc25858 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25858 = FUN_140002ddd(FUN_146756dad,uVar3,L"ExpandVectorDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25858);
  if (DAT_14cc25858 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25858 = FUN_140002ddd(FUN_146756dad,uVar3,L"ExpandVectorDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25858);
  FUN_1446ddc76(local_118,"FExpandVectorDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6d3d0;
  local_50 = FUN_1497af9be;
  local_78 = FUN_1497afba4;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fbf58e FUN_145fbf58e body=653 status=ok
// SIG undefined FUN_145fbf58e(void)

void FUN_145fbf58e(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FStringAppendDataflowNode",1);
  FUN_1446ddc76(&local_d0,"StringAppend",1);
  FUN_1446ddc76(&local_d8,"Utilities|String",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"StringAppend",1);
  FUN_1446ddc76(local_108,"FStringAppendDataflowNode",1);
  if (DAT_14cc25870 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25870 = FUN_140002ddd(FUN_146756e43,uVar3,L"StringAppendDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25870,local_108,local_100);
  if (DAT_14cc25870 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25870 = FUN_140002ddd(FUN_146756e43,uVar3,L"StringAppendDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25870);
  if (DAT_14cc25870 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25870 = FUN_140002ddd(FUN_146756e43,uVar3,L"StringAppendDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25870);
  FUN_1446ddc76(local_118,"FStringAppendDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6d3f0;
  local_50 = FUN_1497afbdc;
  local_78 = FUN_1497afdac;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fbf81c FUN_145fbf81c body=653 status=ok
// SIG undefined FUN_145fbf81c(void)

void FUN_145fbf81c(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FHashStringDataflowNode",1);
  FUN_1446ddc76(&local_d0,"HashString",1);
  FUN_1446ddc76(&local_d8,"Utilities|String",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"HashString",1);
  FUN_1446ddc76(local_108,"FHashStringDataflowNode",1);
  if (DAT_14cc25888 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25888 = FUN_140002ddd(FUN_146756ed9,uVar3,L"HashStringDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25888,local_108,local_100);
  if (DAT_14cc25888 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25888 = FUN_140002ddd(FUN_146756ed9,uVar3,L"HashStringDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25888);
  if (DAT_14cc25888 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25888 = FUN_140002ddd(FUN_146756ed9,uVar3,L"HashStringDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25888);
  FUN_1446ddc76(local_118,"FHashStringDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6d410;
  local_50 = FUN_1497afde4;
  local_78 = FUN_1497aff6c;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fbfaaa FUN_145fbfaaa body=653 status=ok
// SIG undefined FUN_145fbfaaa(void)

void FUN_145fbfaaa(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FHashVectorDataflowNode",1);
  FUN_1446ddc76(&local_d0,"HashVector",1);
  FUN_1446ddc76(&local_d8,"Utilities|Vector",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"HashVector",1);
  FUN_1446ddc76(local_108,"FHashVectorDataflowNode",1);
  if (DAT_14cc258a0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc258a0 = FUN_140002ddd(FUN_146756f6f,uVar3,L"HashVectorDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc258a0,local_108,local_100);
  if (DAT_14cc258a0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc258a0 = FUN_140002ddd(FUN_146756f6f,uVar3,L"HashVectorDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc258a0);
  if (DAT_14cc258a0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc258a0 = FUN_140002ddd(FUN_146756f6f,uVar3,L"HashVectorDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc258a0);
  FUN_1446ddc76(local_118,"FHashVectorDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6d430;
  local_50 = FUN_1497affa4;
  local_78 = FUN_1497b0120;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fbfd38 FUN_145fbfd38 body=653 status=ok
// SIG undefined FUN_145fbfd38(void)

void FUN_145fbfd38(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FGetBoundingBoxesFromCollectionDataflowNode",1);
  FUN_1446ddc76(&local_d0,"GetBoundingBoxesFromCollection",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Utilities",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"GetBoundingBoxesFromCollection",1);
  FUN_1446ddc76(local_108,"FGetBoundingBoxesFromCollectionDataflowNode",1);
  if (DAT_14cc258b8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc258b8 = FUN_140002ddd(FUN_146757005,uVar3,L"GetBoundingBoxesFromCollectionDataflowNode")
    ;
  }
  FUN_1406751de(local_f8,DAT_14cc258b8,local_108,local_100);
  if (DAT_14cc258b8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc258b8 = FUN_140002ddd(FUN_146757005,uVar3,L"GetBoundingBoxesFromCollectionDataflowNode")
    ;
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc258b8);
  if (DAT_14cc258b8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc258b8 = FUN_140002ddd(FUN_146757005,uVar3,L"GetBoundingBoxesFromCollectionDataflowNode")
    ;
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc258b8);
  FUN_1446ddc76(local_118,"FGetBoundingBoxesFromCollectionDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6d450;
  local_50 = FUN_1497b0158;
  local_78 = FUN_1497b0324;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fbffc6 FUN_145fbffc6 body=653 status=ok
// SIG undefined FUN_145fbffc6(void)

void FUN_145fbffc6(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FGetRootIndexFromCollectionDataflowNode",1);
  FUN_1446ddc76(&local_d0,"GetRootIndexFromCollection",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Utilities",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"GetRootIndexFromCollection",1);
  FUN_1446ddc76(local_108,"FGetRootIndexFromCollectionDataflowNode",1);
  if (DAT_14cc258d0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc258d0 = FUN_140002ddd(FUN_14675709b,uVar3,L"GetRootIndexFromCollectionDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc258d0,local_108,local_100);
  if (DAT_14cc258d0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc258d0 = FUN_140002ddd(FUN_14675709b,uVar3,L"GetRootIndexFromCollectionDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc258d0);
  if (DAT_14cc258d0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc258d0 = FUN_140002ddd(FUN_14675709b,uVar3,L"GetRootIndexFromCollectionDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc258d0);
  FUN_1446ddc76(local_118,"FGetRootIndexFromCollectionDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6d470;
  local_50 = FUN_1497b035c;
  local_78 = FUN_1497b04dc;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fc0254 FUN_145fc0254 body=653 status=ok
// SIG undefined FUN_145fc0254(void)

void FUN_145fc0254(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FGetCentroidsFromCollectionDataflowNode",1);
  FUN_1446ddc76(&local_d0,"GetCentroidsFromCollection",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Utilities",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"GetCentroidsFromCollection",1);
  FUN_1446ddc76(local_108,"FGetCentroidsFromCollectionDataflowNode",1);
  if (DAT_14cc258e8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc258e8 = FUN_140002ddd(FUN_146757131,uVar3,L"GetCentroidsFromCollectionDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc258e8,local_108,local_100);
  if (DAT_14cc258e8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc258e8 = FUN_140002ddd(FUN_146757131,uVar3,L"GetCentroidsFromCollectionDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc258e8);
  if (DAT_14cc258e8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc258e8 = FUN_140002ddd(FUN_146757131,uVar3,L"GetCentroidsFromCollectionDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc258e8);
  FUN_1446ddc76(local_118,"FGetCentroidsFromCollectionDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6d490;
  local_50 = FUN_1497b0514;
  local_78 = FUN_1497b06e0;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fc04e2 FUN_145fc04e2 body=653 status=ok
// SIG undefined FUN_145fc04e2(void)

void FUN_145fc04e2(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FTransformCollectionDataflowNode",1);
  FUN_1446ddc76(&local_d0,"TransformCollection",1);
  FUN_1446ddc76(&local_d8,"Math|Transform",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"TransformCollection",1);
  FUN_1446ddc76(local_108,"FTransformCollectionDataflowNode",1);
  if (DAT_14cc25918 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25918 = FUN_140002ddd(FUN_1467571f7,uVar3,L"TransformCollectionDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25918,local_108,local_100);
  if (DAT_14cc25918 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25918 = FUN_140002ddd(FUN_1467571f7,uVar3,L"TransformCollectionDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25918);
  if (DAT_14cc25918 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25918 = FUN_140002ddd(FUN_1467571f7,uVar3,L"TransformCollectionDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25918);
  FUN_1446ddc76(local_118,"FTransformCollectionDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6d4b0;
  local_50 = FUN_1497b0718;
  local_78 = FUN_1497b08d6;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fc0770 FUN_145fc0770 body=653 status=ok
// SIG undefined FUN_145fc0770(void)

void FUN_145fc0770(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FBakeTransformsInCollectionDataflowNode",1);
  FUN_1446ddc76(&local_d0,"BakeTransformsInCollection",1);
  FUN_1446ddc76(&local_d8,"Math|Transform",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"BakeTransformsInCollection",1);
  FUN_1446ddc76(local_108,"FBakeTransformsInCollectionDataflowNode",1);
  if (DAT_14cc25930 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25930 = FUN_140002ddd(FUN_14675728d,uVar3,L"BakeTransformsInCollectionDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25930,local_108,local_100);
  if (DAT_14cc25930 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25930 = FUN_140002ddd(FUN_14675728d,uVar3,L"BakeTransformsInCollectionDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25930);
  if (DAT_14cc25930 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25930 = FUN_140002ddd(FUN_14675728d,uVar3,L"BakeTransformsInCollectionDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25930);
  FUN_1446ddc76(local_118,"FBakeTransformsInCollectionDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6d4d0;
  local_50 = FUN_1497b090e;
  local_78 = FUN_1497b0a68;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fc09fe FUN_145fc09fe body=653 status=ok
// SIG undefined FUN_145fc09fe(void)

void FUN_145fc09fe(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FTransformMeshDataflowNode",1);
  FUN_1446ddc76(&local_d0,"TransformMesh",1);
  FUN_1446ddc76(&local_d8,"Math|Transform",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"TransformMesh",1);
  FUN_1446ddc76(local_108,"FTransformMeshDataflowNode",1);
  if (DAT_14cc25948 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25948 = FUN_140002ddd(FUN_146757323,uVar3,L"TransformMeshDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25948,local_108,local_100);
  if (DAT_14cc25948 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25948 = FUN_140002ddd(FUN_146757323,uVar3,L"TransformMeshDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25948);
  if (DAT_14cc25948 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25948 = FUN_140002ddd(FUN_146757323,uVar3,L"TransformMeshDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25948);
  FUN_1446ddc76(local_118,"FTransformMeshDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6d4f0;
  local_50 = FUN_1497b0aa0;
  local_78 = FUN_1497b0c5c;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fc0c8c FUN_145fc0c8c body=653 status=ok
// SIG undefined FUN_145fc0c8c(void)

void FUN_145fc0c8c(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FCompareIntDataflowNode",1);
  FUN_1446ddc76(&local_d0,"CompareInt",1);
  FUN_1446ddc76(&local_d8,"Math|Compare",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"CompareInt",1);
  FUN_1446ddc76(local_108,"FCompareIntDataflowNode",1);
  if (DAT_14cc25978 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25978 = FUN_140002ddd(FUN_1467573e9,uVar3,L"CompareIntDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25978,local_108,local_100);
  if (DAT_14cc25978 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25978 = FUN_140002ddd(FUN_1467573e9,uVar3,L"CompareIntDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25978);
  if (DAT_14cc25978 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25978 = FUN_140002ddd(FUN_1467573e9,uVar3,L"CompareIntDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25978);
  FUN_1446ddc76(local_118,"FCompareIntDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6d510;
  local_50 = FUN_1497b0c94;
  local_78 = FUN_1497b0e44;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fc0f1a FUN_145fc0f1a body=653 status=ok
// SIG undefined FUN_145fc0f1a(void)

void FUN_145fc0f1a(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FCompareFloatDataflowNode",1);
  FUN_1446ddc76(&local_d0,"CompareFloat",1);
  FUN_1446ddc76(&local_d8,"Math|Compare",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"CompareFloat",1);
  FUN_1446ddc76(local_108,"FCompareFloatDataflowNode",1);
  if (DAT_14cc25990 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25990 = FUN_140002ddd(FUN_14675747f,uVar3,L"CompareFloatDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25990,local_108,local_100);
  if (DAT_14cc25990 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25990 = FUN_140002ddd(FUN_14675747f,uVar3,L"CompareFloatDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25990);
  if (DAT_14cc25990 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25990 = FUN_140002ddd(FUN_14675747f,uVar3,L"CompareFloatDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25990);
  FUN_1446ddc76(local_118,"FCompareFloatDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6d530;
  local_50 = FUN_1497b0e7c;
  local_78 = FUN_1497b102c;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fc11a8 FUN_145fc11a8 body=653 status=ok
// SIG undefined FUN_145fc11a8(void)

void FUN_145fc11a8(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FBranchMeshDataflowNode",1);
  FUN_1446ddc76(&local_d0,"BranchMesh",1);
  FUN_1446ddc76(&local_d8,"Utilities|FlowControl",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"BranchMesh",1);
  FUN_1446ddc76(local_108,"FBranchMeshDataflowNode",1);
  if (DAT_14cc259a8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc259a8 = FUN_140002ddd(FUN_146757515,uVar3,L"BranchMeshDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc259a8,local_108,local_100);
  if (DAT_14cc259a8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc259a8 = FUN_140002ddd(FUN_146757515,uVar3,L"BranchMeshDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc259a8);
  if (DAT_14cc259a8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc259a8 = FUN_140002ddd(FUN_146757515,uVar3,L"BranchMeshDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc259a8);
  FUN_1446ddc76(local_118,"FBranchMeshDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6d550;
  local_50 = FUN_1497b1064;
  local_78 = FUN_1497b1248;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fc1436 FUN_145fc1436 body=653 status=ok
// SIG undefined FUN_145fc1436(void)

void FUN_145fc1436(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FBranchCollectionDataflowNode",1);
  FUN_1446ddc76(&local_d0,"BranchCollection",1);
  FUN_1446ddc76(&local_d8,"Utilities|FlowControl",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"BranchCollection",1);
  FUN_1446ddc76(local_108,"FBranchCollectionDataflowNode",1);
  if (DAT_14cc259c0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc259c0 = FUN_140002ddd(FUN_1467575ab,uVar3,L"BranchCollectionDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc259c0,local_108,local_100);
  if (DAT_14cc259c0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc259c0 = FUN_140002ddd(FUN_1467575ab,uVar3,L"BranchCollectionDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc259c0);
  if (DAT_14cc259c0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc259c0 = FUN_140002ddd(FUN_1467575ab,uVar3,L"BranchCollectionDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc259c0);
  FUN_1446ddc76(local_118,"FBranchCollectionDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6d570;
  local_50 = FUN_1497b1280;
  local_78 = FUN_1497b147c;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fc16c4 FUN_145fc16c4 body=653 status=ok
// SIG undefined FUN_145fc16c4(void)

void FUN_145fc16c4(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FGetSchemaDataflowNode",1);
  FUN_1446ddc76(&local_d0,"GetSchema",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Utilities",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"GetSchema",1);
  FUN_1446ddc76(local_108,"FGetSchemaDataflowNode",1);
  if (DAT_14cc259d8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc259d8 = FUN_140002ddd(FUN_146757641,uVar3,L"GetSchemaDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc259d8,local_108,local_100);
  if (DAT_14cc259d8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc259d8 = FUN_140002ddd(FUN_146757641,uVar3,L"GetSchemaDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc259d8);
  if (DAT_14cc259d8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc259d8 = FUN_140002ddd(FUN_146757641,uVar3,L"GetSchemaDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc259d8);
  FUN_1446ddc76(local_118,"FGetSchemaDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6d590;
  local_50 = FUN_1497b14b4;
  local_78 = FUN_1497b1636;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fc1952 FUN_145fc1952 body=653 status=ok
// SIG undefined FUN_145fc1952(void)

void FUN_145fc1952(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FRemoveOnBreakDataflowNode",1);
  FUN_1446ddc76(&local_d0,"RemoveOnBreak",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Utilities",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"RemoveOnBreak",1);
  FUN_1446ddc76(local_108,"FRemoveOnBreakDataflowNode",1);
  if (DAT_14cc259f0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc259f0 = FUN_140002ddd(FUN_1467576d7,uVar3,L"RemoveOnBreakDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc259f0,local_108,local_100);
  if (DAT_14cc259f0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc259f0 = FUN_140002ddd(FUN_1467576d7,uVar3,L"RemoveOnBreakDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc259f0);
  if (DAT_14cc259f0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc259f0 = FUN_140002ddd(FUN_1467576d7,uVar3,L"RemoveOnBreakDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc259f0);
  FUN_1446ddc76(local_118,"FRemoveOnBreakDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6d5b0;
  local_50 = FUN_1497b166e;
  local_78 = FUN_1497b1906;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fc1be0 FUN_145fc1be0 body=653 status=ok
// SIG undefined FUN_145fc1be0(void)

void FUN_145fc1be0(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FSetAnchorStateDataflowNode",1);
  FUN_1446ddc76(&local_d0,"SetAnchorState",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Utilities",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"SetAnchorState",1);
  FUN_1446ddc76(local_108,"FSetAnchorStateDataflowNode",1);
  if (DAT_14cc25a20 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25a20 = FUN_140002ddd(FUN_14675779d,uVar3,L"SetAnchorStateDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25a20,local_108,local_100);
  if (DAT_14cc25a20 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25a20 = FUN_140002ddd(FUN_14675779d,uVar3,L"SetAnchorStateDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25a20);
  if (DAT_14cc25a20 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25a20 = FUN_140002ddd(FUN_14675779d,uVar3,L"SetAnchorStateDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25a20);
  FUN_1446ddc76(local_118,"FSetAnchorStateDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6d5d0;
  local_50 = FUN_1497b193e;
  local_78 = FUN_1497b1af2;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fc1e6e FUN_145fc1e6e body=653 status=ok
// SIG undefined FUN_145fc1e6e(void)

void FUN_145fc1e6e(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FProximityDataflowNode",1);
  FUN_1446ddc76(&local_d0,"Proximity",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Utilities",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"Proximity",1);
  FUN_1446ddc76(local_108,"FProximityDataflowNode",1);
  if (DAT_14cc25a80 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25a80 = FUN_140002ddd(FUN_1467578c1,uVar3,L"ProximityDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25a80,local_108,local_100);
  if (DAT_14cc25a80 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25a80 = FUN_140002ddd(FUN_1467578c1,uVar3,L"ProximityDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25a80);
  if (DAT_14cc25a80 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25a80 = FUN_140002ddd(FUN_1467578c1,uVar3,L"ProximityDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25a80);
  FUN_1446ddc76(local_118,"FProximityDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6d5f0;
  local_50 = FUN_1497b1b2a;
  local_78 = FUN_1497b1d10;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fc20fc FUN_145fc20fc body=653 status=ok
// SIG undefined FUN_145fc20fc(void)

void FUN_145fc20fc(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FCollectionSetPivotDataflowNode",1);
  FUN_1446ddc76(&local_d0,"SetPivot",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Utilities",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"SetPivot",1);
  FUN_1446ddc76(local_108,"FCollectionSetPivotDataflowNode",1);
  if (DAT_14cc25a98 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25a98 = FUN_140002ddd(FUN_146757957,uVar3,L"CollectionSetPivotDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25a98,local_108,local_100);
  if (DAT_14cc25a98 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25a98 = FUN_140002ddd(FUN_146757957,uVar3,L"CollectionSetPivotDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25a98);
  if (DAT_14cc25a98 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25a98 = FUN_140002ddd(FUN_146757957,uVar3,L"CollectionSetPivotDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25a98);
  FUN_1446ddc76(local_118,"FCollectionSetPivotDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6d610;
  local_50 = FUN_1497b1d48;
  local_78 = FUN_1497b1f20;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fc238a FUN_145fc238a body=653 status=ok
// SIG undefined FUN_145fc238a(void)

void FUN_145fc238a(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FAddCustomCollectionAttributeDataflowNode",1);
  FUN_1446ddc76(&local_d0,"AddCustomCollectionAttribute",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Utilities",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"AddCustomCollectionAttribute",1);
  FUN_1446ddc76(local_108,"FAddCustomCollectionAttributeDataflowNode",1);
  if (DAT_14cc25ae0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25ae0 = FUN_140002ddd(FUN_146757a4d,uVar3,L"AddCustomCollectionAttributeDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25ae0,local_108,local_100);
  if (DAT_14cc25ae0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25ae0 = FUN_140002ddd(FUN_146757a4d,uVar3,L"AddCustomCollectionAttributeDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25ae0);
  if (DAT_14cc25ae0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25ae0 = FUN_140002ddd(FUN_146757a4d,uVar3,L"AddCustomCollectionAttributeDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25ae0);
  FUN_1446ddc76(local_118,"FAddCustomCollectionAttributeDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6d630;
  local_50 = FUN_1497b1f58;
  local_78 = FUN_1497b2128;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fc2618 FUN_145fc2618 body=653 status=ok
// SIG undefined FUN_145fc2618(void)

void FUN_145fc2618(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FGetNumElementsInCollectionGroupDataflowNode",1);
  FUN_1446ddc76(&local_d0,"GetNumElementsInCollectionGroup",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Utilities",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"GetNumElementsInCollectionGroup",1);
  FUN_1446ddc76(local_108,"FGetNumElementsInCollectionGroupDataflowNode",1);
  if (DAT_14cc25af8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25af8 =
         FUN_140002ddd(FUN_146757ae3,uVar3,L"GetNumElementsInCollectionGroupDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25af8,local_108,local_100);
  if (DAT_14cc25af8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25af8 =
         FUN_140002ddd(FUN_146757ae3,uVar3,L"GetNumElementsInCollectionGroupDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25af8);
  if (DAT_14cc25af8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25af8 =
         FUN_140002ddd(FUN_146757ae3,uVar3,L"GetNumElementsInCollectionGroupDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25af8);
  FUN_1446ddc76(local_118,"FGetNumElementsInCollectionGroupDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6d650;
  local_50 = FUN_1497b2160;
  local_78 = FUN_1497b22fc;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fc28a6 FUN_145fc28a6 body=653 status=ok
// SIG undefined FUN_145fc28a6(void)

void FUN_145fc28a6(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FGetCollectionAttributeDataTypedDataflowNode",1);
  FUN_1446ddc76(&local_d0,"GetCollectionAttributeDataTyped",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Utilities",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"GetCollectionAttributeDataTyped",1);
  FUN_1446ddc76(local_108,"FGetCollectionAttributeDataTypedDataflowNode",1);
  if (DAT_14cc25b10 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25b10 =
         FUN_140002ddd(FUN_146757b79,uVar3,L"GetCollectionAttributeDataTypedDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25b10,local_108,local_100);
  if (DAT_14cc25b10 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25b10 =
         FUN_140002ddd(FUN_146757b79,uVar3,L"GetCollectionAttributeDataTypedDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25b10);
  if (DAT_14cc25b10 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25b10 =
         FUN_140002ddd(FUN_146757b79,uVar3,L"GetCollectionAttributeDataTypedDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25b10);
  FUN_1446ddc76(local_118,"FGetCollectionAttributeDataTypedDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6d670;
  local_50 = FUN_1497b2334;
  local_78 = FUN_1497b26ee;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fc2b34 FUN_145fc2b34 body=653 status=ok
// SIG undefined FUN_145fc2b34(void)

void FUN_145fc2b34(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FSetCollectionAttributeDataTypedDataflowNode",1);
  FUN_1446ddc76(&local_d0,"SetCollectionAttributeDataTyped",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Utilities",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"SetCollectionAttributeDataTyped",1);
  FUN_1446ddc76(local_108,"FSetCollectionAttributeDataTypedDataflowNode",1);
  if (DAT_14cc25b28 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25b28 =
         FUN_140002ddd(FUN_146757c0f,uVar3,L"SetCollectionAttributeDataTypedDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25b28,local_108,local_100);
  if (DAT_14cc25b28 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25b28 =
         FUN_140002ddd(FUN_146757c0f,uVar3,L"SetCollectionAttributeDataTypedDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25b28);
  if (DAT_14cc25b28 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25b28 =
         FUN_140002ddd(FUN_146757c0f,uVar3,L"SetCollectionAttributeDataTypedDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25b28);
  FUN_1446ddc76(local_118,"FSetCollectionAttributeDataTypedDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6d690;
  local_50 = FUN_1497b2726;
  local_78 = FUN_1497b2af8;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fc2dc2 FUN_145fc2dc2 body=653 status=ok
// SIG undefined FUN_145fc2dc2(void)

void FUN_145fc2dc2(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FMultiplyTransformDataflowNode",1);
  FUN_1446ddc76(&local_d0,"MultiplyTransform",1);
  FUN_1446ddc76(&local_d8,"Math|Transform",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"MultiplyTransform",1);
  FUN_1446ddc76(local_108,"FMultiplyTransformDataflowNode",1);
  if (DAT_14cc25b58 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25b58 = FUN_140002ddd(FUN_146757d3b,uVar3,L"MultiplyTransformDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25b58,local_108,local_100);
  if (DAT_14cc25b58 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25b58 = FUN_140002ddd(FUN_146757d3b,uVar3,L"MultiplyTransformDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25b58);
  if (DAT_14cc25b58 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25b58 = FUN_140002ddd(FUN_146757d3b,uVar3,L"MultiplyTransformDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25b58);
  FUN_1446ddc76(local_118,"FMultiplyTransformDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6d6b0;
  local_50 = FUN_1497b2b30;
  local_78 = FUN_1497b2cfc;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fc3050 FUN_145fc3050 body=653 status=ok
// SIG undefined FUN_145fc3050(void)

void FUN_145fc3050(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FInvertTransformDataflowNode",1);
  FUN_1446ddc76(&local_d0,"InvertTransform",1);
  FUN_1446ddc76(&local_d8,"Math|Transform",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"InvertTransform",1);
  FUN_1446ddc76(local_108,"FInvertTransformDataflowNode",1);
  if (DAT_14cc25b70 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25b70 = FUN_140002ddd(FUN_146757dd1,uVar3,L"InvertTransformDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25b70,local_108,local_100);
  if (DAT_14cc25b70 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25b70 = FUN_140002ddd(FUN_146757dd1,uVar3,L"InvertTransformDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25b70);
  if (DAT_14cc25b70 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25b70 = FUN_140002ddd(FUN_146757dd1,uVar3,L"InvertTransformDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25b70);
  FUN_1446ddc76(local_118,"FInvertTransformDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6d6d0;
  local_50 = FUN_1497b2d34;
  local_78 = FUN_1497b2ec2;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fc32de FUN_145fc32de body=653 status=ok
// SIG undefined FUN_145fc32de(void)

void FUN_145fc32de(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FSelectionToVertexListDataflowNode",1);
  FUN_1446ddc76(&local_d0,"SelectionToVertexList",1);
  FUN_1446ddc76(&local_d8,"Selection|Utility",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"SelectionToVertexList",1);
  FUN_1446ddc76(local_108,"FSelectionToVertexListDataflowNode",1);
  if (DAT_14cc25b40 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25b40 = FUN_140002ddd(FUN_146757ca5,uVar3,L"SelectionToVertexListDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25b40,local_108,local_100);
  if (DAT_14cc25b40 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25b40 = FUN_140002ddd(FUN_146757ca5,uVar3,L"SelectionToVertexListDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25b40);
  if (DAT_14cc25b40 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25b40 = FUN_140002ddd(FUN_146757ca5,uVar3,L"SelectionToVertexListDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25b40);
  FUN_1446ddc76(local_118,"FSelectionToVertexListDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6d6f0;
  local_50 = FUN_1497b2efa;
  local_78 = FUN_1497b3088;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fc356c FUN_145fc356c body=653 status=ok
// SIG undefined FUN_145fc356c(void)

void FUN_145fc356c(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FBranchFloatDataflowNode",1);
  FUN_1446ddc76(&local_d0,"BranchFloat",1);
  FUN_1446ddc76(&local_d8,"Utilities|FlowControl",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"BranchFloat",1);
  FUN_1446ddc76(local_108,"FBranchFloatDataflowNode",1);
  if (DAT_14cc25b88 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25b88 = FUN_140002ddd(FUN_146757e67,uVar3,L"BranchFloatDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25b88,local_108,local_100);
  if (DAT_14cc25b88 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25b88 = FUN_140002ddd(FUN_146757e67,uVar3,L"BranchFloatDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25b88);
  if (DAT_14cc25b88 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25b88 = FUN_140002ddd(FUN_146757e67,uVar3,L"BranchFloatDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25b88);
  FUN_1446ddc76(local_118,"FBranchFloatDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6d710;
  local_50 = FUN_1497b30c0;
  local_78 = FUN_1497b32a4;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fc37fa FUN_145fc37fa body=653 status=ok
// SIG undefined FUN_145fc37fa(void)

void FUN_145fc37fa(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FBranchIntDataflowNode",1);
  FUN_1446ddc76(&local_d0,"BranchInt",1);
  FUN_1446ddc76(&local_d8,"Utilities|FlowControl",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"BranchInt",1);
  FUN_1446ddc76(local_108,"FBranchIntDataflowNode",1);
  if (DAT_14cc25ba0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25ba0 = FUN_140002ddd(FUN_146757efd,uVar3,L"BranchIntDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25ba0,local_108,local_100);
  if (DAT_14cc25ba0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25ba0 = FUN_140002ddd(FUN_146757efd,uVar3,L"BranchIntDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25ba0);
  if (DAT_14cc25ba0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25ba0 = FUN_140002ddd(FUN_146757efd,uVar3,L"BranchIntDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25ba0);
  FUN_1446ddc76(local_118,"FBranchIntDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6d730;
  local_50 = FUN_1497b32dc;
  local_78 = FUN_1497b34c0;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fc3a88 FUN_145fc3a88 body=653 status=ok
// SIG undefined FUN_145fc3a88(void)

void FUN_145fc3a88(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FTriangleBoundaryIndicesNode",1);
  FUN_1446ddc76(&local_d0,"TriangleBoundaryIndices",1);
  FUN_1446ddc76(&local_d8,"Geometry Collection|Utiltites",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"TriangleBoundaryIndices",1);
  FUN_1446ddc76(local_108,"FTriangleBoundaryIndicesNode",1);
  if (DAT_14cc260a0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc260a0 = FUN_140002ddd(FUN_146759b9b,uVar3,L"TriangleBoundaryIndicesNode");
  }
  FUN_1406751de(local_f8,DAT_14cc260a0,local_108,local_100);
  if (DAT_14cc260a0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc260a0 = FUN_140002ddd(FUN_146759b9b,uVar3,L"TriangleBoundaryIndicesNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc260a0);
  if (DAT_14cc260a0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc260a0 = FUN_140002ddd(FUN_146759b9b,uVar3,L"TriangleBoundaryIndicesNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc260a0);
  FUN_1446ddc76(local_118,"FTriangleBoundaryIndicesNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6df20;
  local_50 = FUN_1497b9f28;
  local_78 = FUN_1497ba0aa;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fc3d16 FUN_145fc3d16 body=653 status=ok
// SIG undefined FUN_145fc3d16(void)

void FUN_145fc3d16(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FCollectionTransformSelectionAllDataflowNode",1);
  FUN_1446ddc76(&local_d0,"CollectionTransformSelectAll",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Selection|Transform",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"CollectionTransformSelectAll",1);
  FUN_1446ddc76(local_108,"FCollectionTransformSelectionAllDataflowNode",1);
  if (DAT_14cc25c68 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25c68 =
         FUN_140002ddd(FUN_14675846f,uVar3,L"CollectionTransformSelectionAllDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25c68,local_108,local_100);
  if (DAT_14cc25c68 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25c68 =
         FUN_140002ddd(FUN_14675846f,uVar3,L"CollectionTransformSelectionAllDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25c68);
  if (DAT_14cc25c68 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25c68 =
         FUN_140002ddd(FUN_14675846f,uVar3,L"CollectionTransformSelectionAllDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25c68);
  FUN_1446ddc76(local_118,"FCollectionTransformSelectionAllDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6e130;
  local_50 = FUN_1497bbcbe;
  local_78 = FUN_1497bbe68;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fc3fa4 FUN_145fc3fa4 body=653 status=ok
// SIG undefined FUN_145fc3fa4(void)

void FUN_145fc3fa4(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FCollectionTransformSelectionSetOperationDataflowNode",1);
  FUN_1446ddc76(&local_d0,"CollectionTransformSelectionSetOperation",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Selection|Transform",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"CollectionTransformSelectionSetOperation",1);
  FUN_1446ddc76(local_108,"FCollectionTransformSelectionSetOperationDataflowNode",1);
  if (DAT_14cc25c98 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25c98 =
         FUN_140002ddd(FUN_146758535,uVar3,L"CollectionTransformSelectionSetOperationDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25c98,local_108,local_100);
  if (DAT_14cc25c98 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25c98 =
         FUN_140002ddd(FUN_146758535,uVar3,L"CollectionTransformSelectionSetOperationDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25c98);
  if (DAT_14cc25c98 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25c98 =
         FUN_140002ddd(FUN_146758535,uVar3,L"CollectionTransformSelectionSetOperationDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25c98);
  FUN_1446ddc76(local_118,"FCollectionTransformSelectionSetOperationDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6e150;
  local_50 = FUN_1497bbea0;
  local_78 = FUN_1497bc070;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fc4232 FUN_145fc4232 body=653 status=ok
// SIG undefined FUN_145fc4232(void)

void FUN_145fc4232(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FCollectionTransformSelectionInfoDataflowNode",1);
  FUN_1446ddc76(&local_d0,"CollectionTransformSelectionInfo",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Selection|Transform",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"CollectionTransformSelectionInfo",1);
  FUN_1446ddc76(local_108,"FCollectionTransformSelectionInfoDataflowNode",1);
  if (DAT_14cc25cb0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25cb0 =
         FUN_140002ddd(FUN_1467585cb,uVar3,L"CollectionTransformSelectionInfoDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25cb0,local_108,local_100);
  if (DAT_14cc25cb0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25cb0 =
         FUN_140002ddd(FUN_1467585cb,uVar3,L"CollectionTransformSelectionInfoDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25cb0);
  if (DAT_14cc25cb0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25cb0 =
         FUN_140002ddd(FUN_1467585cb,uVar3,L"CollectionTransformSelectionInfoDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25cb0);
  FUN_1446ddc76(local_118,"FCollectionTransformSelectionInfoDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6e170;
  local_50 = FUN_1497bc0a8;
  local_78 = FUN_1497bc274;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fc44c0 FUN_145fc44c0 body=653 status=ok
// SIG undefined FUN_145fc44c0(void)

void FUN_145fc44c0(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FCollectionTransformSelectionNoneDataflowNode",1);
  FUN_1446ddc76(&local_d0,"CollectionTransformSelectNone",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Selection|Transform",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"CollectionTransformSelectNone",1);
  FUN_1446ddc76(local_108,"FCollectionTransformSelectionNoneDataflowNode",1);
  if (DAT_14cc25cc8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25cc8 =
         FUN_140002ddd(FUN_146758661,uVar3,L"CollectionTransformSelectionNoneDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25cc8,local_108,local_100);
  if (DAT_14cc25cc8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25cc8 =
         FUN_140002ddd(FUN_146758661,uVar3,L"CollectionTransformSelectionNoneDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25cc8);
  if (DAT_14cc25cc8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25cc8 =
         FUN_140002ddd(FUN_146758661,uVar3,L"CollectionTransformSelectionNoneDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25cc8);
  FUN_1446ddc76(local_118,"FCollectionTransformSelectionNoneDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6e190;
  local_50 = FUN_1497bc2ac;
  local_78 = FUN_1497bc456;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fc474e FUN_145fc474e body=653 status=ok
// SIG undefined FUN_145fc474e(void)

void FUN_145fc474e(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FCollectionTransformSelectionInvertDataflowNode",1);
  FUN_1446ddc76(&local_d0,"CollectionTransformSelectInvert",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Selection|Transform",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"CollectionTransformSelectInvert",1);
  FUN_1446ddc76(local_108,"FCollectionTransformSelectionInvertDataflowNode",1);
  if (DAT_14cc25ce0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25ce0 =
         FUN_140002ddd(FUN_1467586f7,uVar3,L"CollectionTransformSelectionInvertDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25ce0,local_108,local_100);
  if (DAT_14cc25ce0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25ce0 =
         FUN_140002ddd(FUN_1467586f7,uVar3,L"CollectionTransformSelectionInvertDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25ce0);
  if (DAT_14cc25ce0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25ce0 =
         FUN_140002ddd(FUN_1467586f7,uVar3,L"CollectionTransformSelectionInvertDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25ce0);
  FUN_1446ddc76(local_118,"FCollectionTransformSelectionInvertDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6e1b0;
  local_50 = FUN_1497bc48e;
  local_78 = FUN_1497bc5f8;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fc49dc FUN_145fc49dc body=653 status=ok
// SIG undefined FUN_145fc49dc(void)

void FUN_145fc49dc(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FCollectionTransformSelectionRandomDataflowNode",1);
  FUN_1446ddc76(&local_d0,"CollectionTransformSelectRandom",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Selection|Transform",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"CollectionTransformSelectRandom",1);
  FUN_1446ddc76(local_108,"FCollectionTransformSelectionRandomDataflowNode",1);
  if (DAT_14cc25cf8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25cf8 =
         FUN_140002ddd(FUN_14675878d,uVar3,L"CollectionTransformSelectionRandomDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25cf8,local_108,local_100);
  if (DAT_14cc25cf8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25cf8 =
         FUN_140002ddd(FUN_14675878d,uVar3,L"CollectionTransformSelectionRandomDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25cf8);
  if (DAT_14cc25cf8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25cf8 =
         FUN_140002ddd(FUN_14675878d,uVar3,L"CollectionTransformSelectionRandomDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25cf8);
  FUN_1446ddc76(local_118,"FCollectionTransformSelectionRandomDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6e1d0;
  local_50 = FUN_1497bc630;
  local_78 = FUN_1497bc896;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fc4c6a FUN_145fc4c6a body=653 status=ok
// SIG undefined FUN_145fc4c6a(void)

void FUN_145fc4c6a(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FCollectionTransformSelectionRootDataflowNode",1);
  FUN_1446ddc76(&local_d0,"CollectionTransformSelectRoot",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Selection|Transform",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"CollectionTransformSelectRoot",1);
  FUN_1446ddc76(local_108,"FCollectionTransformSelectionRootDataflowNode",1);
  if (DAT_14cc25d10 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25d10 =
         FUN_140002ddd(FUN_146758823,uVar3,L"CollectionTransformSelectionRootDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25d10,local_108,local_100);
  if (DAT_14cc25d10 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25d10 =
         FUN_140002ddd(FUN_146758823,uVar3,L"CollectionTransformSelectionRootDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25d10);
  if (DAT_14cc25d10 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25d10 =
         FUN_140002ddd(FUN_146758823,uVar3,L"CollectionTransformSelectionRootDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25d10);
  FUN_1446ddc76(local_118,"FCollectionTransformSelectionRootDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6e1f0;
  local_50 = FUN_1497bc8ce;
  local_78 = FUN_1497bca78;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fc4ef8 FUN_145fc4ef8 body=653 status=ok
// SIG undefined FUN_145fc4ef8(void)

void FUN_145fc4ef8(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FCollectionTransformSelectionCustomDataflowNode",1);
  FUN_1446ddc76(&local_d0,"CollectionTransformSelectCustom",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Selection|Transform",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"CollectionTransformSelectCustom",1);
  FUN_1446ddc76(local_108,"FCollectionTransformSelectionCustomDataflowNode",1);
  if (DAT_14cc25d28 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25d28 =
         FUN_140002ddd(FUN_1467588b9,uVar3,L"CollectionTransformSelectionCustomDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25d28,local_108,local_100);
  if (DAT_14cc25d28 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25d28 =
         FUN_140002ddd(FUN_1467588b9,uVar3,L"CollectionTransformSelectionCustomDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25d28);
  if (DAT_14cc25d28 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25d28 =
         FUN_140002ddd(FUN_1467588b9,uVar3,L"CollectionTransformSelectionCustomDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25d28);
  FUN_1446ddc76(local_118,"FCollectionTransformSelectionCustomDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6e210;
  local_50 = FUN_1497bcab0;
  local_78 = FUN_1497bcc94;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fc5186 FUN_145fc5186 body=653 status=ok
// SIG undefined FUN_145fc5186(void)

void FUN_145fc5186(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FCollectionTransformSelectionFromIndexArrayDataflowNode",1);
  FUN_1446ddc76(&local_d0,"CollectionTransformSelectionFromIndexArray",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Selection|Array",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"CollectionTransformSelectionFromIndexArray",1);
  FUN_1446ddc76(local_108,"FCollectionTransformSelectionFromIndexArrayDataflowNode",1);
  if (DAT_14cc25d40 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25d40 =
         FUN_140002ddd(FUN_14675894f,uVar3,L"CollectionTransformSelectionFromIndexArrayDataflowNode"
                      );
  }
  FUN_1406751de(local_f8,DAT_14cc25d40,local_108,local_100);
  if (DAT_14cc25d40 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25d40 =
         FUN_140002ddd(FUN_14675894f,uVar3,L"CollectionTransformSelectionFromIndexArrayDataflowNode"
                      );
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25d40);
  if (DAT_14cc25d40 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25d40 =
         FUN_140002ddd(FUN_14675894f,uVar3,L"CollectionTransformSelectionFromIndexArrayDataflowNode"
                      );
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25d40);
  FUN_1446ddc76(local_118,"FCollectionTransformSelectionFromIndexArrayDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6e230;
  local_50 = FUN_1497bcccc;
  local_78 = FUN_1497bceb0;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fc5414 FUN_145fc5414 body=653 status=ok
// SIG undefined FUN_145fc5414(void)

void FUN_145fc5414(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FCollectionTransformSelectionParentDataflowNode",1);
  FUN_1446ddc76(&local_d0,"CollectionTransformSelectParent",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Selection|Transform",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"CollectionTransformSelectParent",1);
  FUN_1446ddc76(local_108,"FCollectionTransformSelectionParentDataflowNode",1);
  if (DAT_14cc25d58 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25d58 =
         FUN_140002ddd(FUN_1467589e5,uVar3,L"CollectionTransformSelectionParentDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25d58,local_108,local_100);
  if (DAT_14cc25d58 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25d58 =
         FUN_140002ddd(FUN_1467589e5,uVar3,L"CollectionTransformSelectionParentDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25d58);
  if (DAT_14cc25d58 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25d58 =
         FUN_140002ddd(FUN_1467589e5,uVar3,L"CollectionTransformSelectionParentDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25d58);
  FUN_1446ddc76(local_118,"FCollectionTransformSelectionParentDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6e250;
  local_50 = FUN_1497bcee8;
  local_78 = FUN_1497bd0ac;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


