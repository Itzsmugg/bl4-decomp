// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147e68c6c FUN_147e68c6c body=229 status=ok
// SIG undefined FUN_147e68c6c(void)

void FUN_147e68c6c(longlong param_1,longlong param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  *(float *)(param_2 + 0x18) = *(float *)(param_1 + 0x30) * 0.017453292;
  *(float *)(param_2 + 0x1c) = *(float *)(param_1 + 0x34) * 0.017453292;
  *(float *)(param_2 + 0x28) = *(float *)(param_1 + 0x38) * 0.01;
  fVar1 = *(float *)(param_1 + 0x58) * 0.01;
  *(float *)(param_2 + 0x30) = fVar1;
  *(float *)(param_2 + 0x34) = *(float *)(param_1 + 0x5c) * 0.01;
  *(float *)(param_2 + 0x38) = *(float *)(param_1 + 0x60) * 0.01;
  *(float *)(param_2 + 0x3c) = *(float *)(param_1 + 100) * 0.01;
  *(float *)(param_2 + 0x40) = *(float *)(param_1 + 0x68) * 0.01;
  fVar2 = *(float *)(param_1 + 0x6c) * 0.01;
  *(float *)(param_2 + 0x44) = fVar2;
  *(float *)(param_2 + 0x48) = *(float *)(param_1 + 0x70) * 0.01;
  *(undefined4 *)(param_2 + 0x4c) = *(undefined4 *)(param_1 + 0x74);
  *(float *)(param_2 + 0x50) = *(float *)(param_1 + 0x78) * 0.01;
  *(float *)(param_2 + 0x54) = *(float *)(param_1 + 0x7c) * 0.01;
  *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_1 + 0x80);
  fVar1 = (param_3 + param_3) * 0.01 + fVar1 + 0.01;
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  *(float *)(param_2 + 0x44) = fVar2;
  return;
}



// FUNCTION 147e68d52 FUN_147e68d52 body=227 status=ok
// SIG undefined FUN_147e68d52(void)

undefined8 * FUN_147e68d52(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0x70;
  puVar1 = (undefined8 *)(*DAT_14c787670)(0,&local_38,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar1,"hkaiClimbUpAnalyzer");
  }
  puVar1[1] = 0xffffffff;
  puVar1[2] = 1;
  puVar1[3] = 0x3fc90fdb3fbc430e;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  *puVar1 = &PTR_LAB_14aba51f0;
  puVar1[6] = 0x404000003f000000;
  puVar1[7] = 0x400000003f000000;
  puVar1[8] = &DAT_3f8000003f800000;
  puVar1[9] = &DAT_3f8000003f800000;
  *(undefined4 *)(puVar1 + 10) = 0x3d4ccccd;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  FUN_147e68e36(param_1,puVar1,param_2);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e68e36 FUN_147e68e36 body=240 status=ok
// SIG undefined FUN_147e68e36(void)

void FUN_147e68e36(longlong param_1,longlong param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  *(float *)(param_2 + 0x18) = *(float *)(param_1 + 0x30) * 0.017453292;
  *(float *)(param_2 + 0x1c) = *(float *)(param_1 + 0x34) * 0.017453292;
  *(float *)(param_2 + 0x28) = *(float *)(param_1 + 0x38) * 0.01;
  fVar3 = *(float *)(param_1 + 0x58) * 0.01;
  *(float *)(param_2 + 0x30) = fVar3;
  fVar4 = *(float *)(param_1 + 0x5c) * 0.01;
  *(float *)(param_2 + 0x34) = fVar4;
  fVar1 = *(float *)(param_1 + 0x60) * 0.01;
  *(float *)(param_2 + 0x38) = fVar1;
  fVar2 = *(float *)(param_1 + 100) * 0.01;
  *(float *)(param_2 + 0x3c) = fVar2;
  *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_1 + 0x68);
  *(float *)(param_2 + 0x44) = *(float *)(param_1 + 0x6c) * 0.01;
  *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_1 + 0x70);
  *(float *)(param_2 + 0x4c) = *(float *)(param_1 + 0x74) * 0.01;
  *(float *)(param_2 + 0x50) = *(float *)(param_1 + 0x78) * 0.01;
  if (fVar4 <= 0.01) {
    fVar4 = 0.01;
  }
  fVar3 = fVar3 + 0.01;
  if (fVar4 <= fVar3) {
    fVar4 = fVar3;
  }
  *(float *)(param_2 + 0x34) = fVar4;
  fVar4 = (param_3 + param_3) * 0.01 + 0.01;
  if (fVar1 <= fVar4) {
    fVar1 = fVar4;
  }
  *(float *)(param_2 + 0x38) = fVar1;
  if (fVar2 <= fVar1 + 0.01) {
    fVar2 = fVar1 + 0.01;
  }
  *(float *)(param_2 + 0x3c) = fVar2;
  return;
}



// FUNCTION 147e68f26 FUN_147e68f26 body=221 status=ok
// SIG undefined FUN_147e68f26(void)

undefined8 * FUN_147e68f26(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0x58;
  puVar1 = (undefined8 *)(*DAT_14c787670)(0,&local_38,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar1,"hkaiDropDownAnalyzer");
  }
  puVar1[1] = 0xffffffff;
  puVar1[2] = 1;
  puVar1[3] = 0x3fc90fdb3fbc430e;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  *puVar1 = &PTR_LAB_14aba5230;
  puVar1[6] = 0x404000003f000000;
  puVar1[7] = 0x400000003f000000;
  puVar1[8] = 0x3d4ccccd3f800000;
  puVar1[9] = 0;
  puVar1[10] = 0;
  FUN_147e69004(param_1,puVar1,param_2);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e69004 FUN_147e69004 body=211 status=ok
// SIG undefined FUN_147e69004(void)

void FUN_147e69004(longlong param_1,longlong param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  *(float *)(param_2 + 0x18) = *(float *)(param_1 + 0x30) * 0.017453292;
  *(float *)(param_2 + 0x1c) = *(float *)(param_1 + 0x34) * 0.017453292;
  *(float *)(param_2 + 0x28) = *(float *)(param_1 + 0x38) * 0.01;
  fVar3 = *(float *)(param_1 + 0x58) * 0.01;
  *(float *)(param_2 + 0x30) = fVar3;
  fVar4 = *(float *)(param_1 + 0x5c) * 0.01;
  *(float *)(param_2 + 0x34) = fVar4;
  fVar1 = *(float *)(param_1 + 0x60) * 0.01;
  *(float *)(param_2 + 0x38) = fVar1;
  fVar2 = *(float *)(param_1 + 100) * 0.01;
  *(float *)(param_2 + 0x3c) = fVar2;
  *(float *)(param_2 + 0x40) = *(float *)(param_1 + 0x68) * 0.01;
  *(float *)(param_2 + 0x44) = *(float *)(param_1 + 0x6c) * 0.01;
  if (fVar3 <= 0.01) {
    fVar3 = 0.01;
  }
  *(float *)(param_2 + 0x30) = fVar3;
  if (fVar4 <= fVar3 + 0.01) {
    fVar4 = fVar3 + 0.01;
  }
  *(float *)(param_2 + 0x34) = fVar4;
  fVar4 = (param_3 + param_3) * 0.01 + 0.01;
  if (fVar1 <= fVar4) {
    fVar1 = fVar4;
  }
  *(float *)(param_2 + 0x38) = fVar1;
  if (fVar2 <= fVar1 + 0.01) {
    fVar2 = fVar1 + 0.01;
  }
  *(float *)(param_2 + 0x3c) = fVar2;
  return;
}



// FUNCTION 147e690d8 FUN_147e690d8 body=324 status=ok
// SIG undefined FUN_147e690d8(void)

undefined8 * FUN_147e690d8(longlong param_1,float param_2)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0x50;
  puVar1 = (undefined8 *)(*DAT_14c787670)(0,&local_38,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar1,"hkaiDuckUnderAnalyzer");
  }
  puVar1[1] = 0xffffffff;
  puVar1[2] = 1;
  puVar1[3] = 0x3fc90fdb3fbc430e;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  *puVar1 = &PTR_LAB_14aba5270;
  puVar1[6] = 0x3f00000040000000;
  puVar1[7] = 0x3f00000040400000;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(float *)(puVar1 + 3) = *(float *)(param_1 + 0x30) * 0.017453292;
  *(float *)((longlong)puVar1 + 0x1c) = *(float *)(param_1 + 0x34) * 0.017453292;
  *(float *)(puVar1 + 5) = *(float *)(param_1 + 0x38) * 0.01;
  fVar2 = *(float *)(param_1 + 0x58) * 0.01;
  *(float *)(puVar1 + 6) = fVar2;
  *(float *)((longlong)puVar1 + 0x34) = *(float *)(param_1 + 0x5c) * 0.01;
  *(float *)(puVar1 + 7) = *(float *)(param_1 + 0x60) * 0.01;
  *(float *)((longlong)puVar1 + 0x3c) = *(float *)(param_1 + 100) * 0.01;
  fVar3 = (param_2 + param_2) * 0.01 + 0.01;
  if (fVar2 <= fVar3) {
    fVar2 = fVar3;
  }
  *(float *)(puVar1 + 6) = fVar2;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e6921e FUN_147e6921e body=210 status=ok
// SIG undefined FUN_147e6921e(void)

undefined8 * FUN_147e6921e(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0x58;
  puVar1 = (undefined8 *)(*DAT_14c787670)(0,&local_38,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar1,"hkaiJumpAnalyzer");
  }
  puVar1[1] = 0xffffffff;
  puVar1[2] = 1;
  puVar1[3] = 0x3fc90fdb3fbc430e;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  *puVar1 = &PTR_LAB_14aba52b0;
  puVar1[6] = 0x404000003f000000;
  puVar1[7] = 0x3f8000003f000000;
  *(undefined4 *)(puVar1 + 8) = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  FUN_147e692f2(param_1,puVar1,param_2);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e692f2 FUN_147e692f2 body=159 status=ok
// SIG undefined FUN_147e692f2(void)

void FUN_147e692f2(longlong param_1,longlong param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *(float *)(param_2 + 0x18) = *(float *)(param_1 + 0x30) * 0.017453292;
  *(float *)(param_2 + 0x1c) = *(float *)(param_1 + 0x34) * 0.017453292;
  *(float *)(param_2 + 0x28) = *(float *)(param_1 + 0x38) * 0.01;
  fVar1 = *(float *)(param_1 + 0x58) * 0.01;
  *(float *)(param_2 + 0x30) = fVar1;
  fVar3 = *(float *)(param_1 + 0x5c) * 0.01;
  *(float *)(param_2 + 0x34) = fVar3;
  *(float *)(param_2 + 0x38) = *(float *)(param_1 + 0x60) * 0.01;
  *(float *)(param_2 + 0x3c) = *(float *)(param_1 + 100) * 0.01;
  *(float *)(param_2 + 0x40) = *(float *)(param_1 + 0x68) * 0.01;
  fVar2 = (param_3 + param_3) * 0.01 + 0.01;
  if (fVar1 <= fVar2) {
    fVar1 = fVar2;
  }
  *(float *)(param_2 + 0x30) = fVar1;
  if (fVar3 <= fVar1 + 0.01) {
    fVar3 = fVar1 + 0.01;
  }
  *(float *)(param_2 + 0x34) = fVar3;
  return;
}



// FUNCTION 147e69392 FUN_147e69392 body=231 status=ok
// SIG undefined FUN_147e69392(void)

undefined8 * FUN_147e69392(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0x78;
  puVar1 = (undefined8 *)(*DAT_14c787670)(0,&local_38,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar1,"hkaiVaultAnalyzer");
  }
  puVar1[1] = 0xffffffff;
  puVar1[2] = 1;
  puVar1[3] = 0x3fc90fdb3fbc430e;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  *puVar1 = &PTR_LAB_14aba52f0;
  puVar1[6] = 0x3f6666663ecccccd;
  puVar1[7] = 0x3fc000003f000000;
  puVar1[8] = 0x3f8000003f000000;
  puVar1[9] = 0x3f0000003fc00000;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0x3f800000;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  FUN_147e6947a(param_1,puVar1,param_2);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e6947a FUN_147e6947a body=344 status=ok
// SIG undefined FUN_147e6947a(void)

void FUN_147e6947a(longlong param_1,longlong param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  *(float *)(param_2 + 0x18) = *(float *)(param_1 + 0x30) * 0.017453292;
  *(float *)(param_2 + 0x1c) = *(float *)(param_1 + 0x34) * 0.017453292;
  *(float *)(param_2 + 0x28) = *(float *)(param_1 + 0x38) * 0.01;
  param_3 = param_3 + param_3;
  fVar1 = (*(float *)(param_1 + 0x58) + param_3) * 0.01;
  *(float *)(param_2 + 0x30) = fVar1;
  fVar2 = (*(float *)(param_1 + 0x5c) + param_3) * 0.01;
  *(float *)(param_2 + 0x34) = fVar2;
  fVar3 = *(float *)(param_1 + 0x60) * 0.01;
  *(float *)(param_2 + 0x38) = fVar3;
  fVar5 = *(float *)(param_1 + 100) * 0.01;
  *(float *)(param_2 + 0x3c) = fVar5;
  fVar4 = *(float *)(param_1 + 0x68) * 0.01;
  *(float *)(param_2 + 0x40) = fVar4;
  fVar6 = *(float *)(param_1 + 0x6c) * 0.01;
  *(float *)(param_2 + 0x44) = fVar6;
  *(float *)(param_2 + 0x48) = *(float *)(param_1 + 0x70) * 0.01;
  *(undefined4 *)(param_2 + 0x4c) = *(undefined4 *)(param_1 + 0x74);
  *(float *)(param_2 + 0x50) = *(float *)(param_1 + 0x78) * 0.01;
  *(float *)(param_2 + 0x54) = *(float *)(param_1 + 0x7c) * 0.01;
  *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_1 + 0x80);
  if (fVar5 <= fVar3 + 0.01) {
    fVar5 = fVar3 + 0.01;
  }
  *(float *)(param_2 + 0x3c) = fVar5;
  fVar6 = 0.01 - fVar6;
  if (fVar4 <= fVar6) {
    fVar4 = fVar6;
  }
  if (fVar3 + -0.01 <= fVar4) {
    fVar4 = fVar3 + -0.01;
  }
  *(float *)(param_2 + 0x40) = fVar4;
  fVar4 = param_3 * 0.01 + 0.01;
  if (fVar1 <= fVar4) {
    fVar1 = fVar4;
  }
  *(float *)(param_2 + 0x30) = fVar1;
  if (fVar2 <= fVar1 + 0.01) {
    fVar2 = fVar1 + 0.01;
  }
  *(float *)(param_2 + 0x34) = fVar2;
  return;
}



// FUNCTION 147e695d2 FUN_147e695d2 body=28 status=ok
// SIG undefined FUN_147e695d2(void)

undefined8 FUN_147e695d2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_147e695ee(param_2,param_3);
  return param_2;
}



// FUNCTION 147e695ee FUN_147e695ee body=606 status=ok
// SIG undefined FUN_147e695ee(void)

undefined8 * FUN_147e695ee(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined3 uStack_7b;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(int *)(param_2 + 0x10) - 1U < 2) {
    puVar7 = (undefined8 *)0x0;
    if ((*(int *)(param_2 + 8) == -1) || (*(int *)(param_2 + 0xc) == -1)) goto LAB_147e697fb;
LAB_147e69653:
    cVar6 = FUN_144a872af(param_2 + 0x18);
    if (cVar6 != '\0') {
      if (*(int *)(param_2 + 0x68) - 1U < 2) {
        puVar7 = (undefined8 *)0x0;
        if ((*(int *)(param_2 + 0x60) == -1) ||
           (puVar7 = (undefined8 *)0x0, *(int *)(param_2 + 100) == -1)) goto LAB_147e697fb;
      }
      else if (*(int *)(param_2 + 0x68) != 3) goto LAB_147e697f9;
      puVar1 = (undefined8 *)(param_2 + 0x70);
      cVar6 = FUN_144a872af(puVar1);
      if (cVar6 != '\0') {
        puVar7 = (undefined8 *)FUN_14001cc68(0x180,0x10);
        *(undefined4 *)(puVar7 + 1) = 0;
        *puVar7 = &PTR_FUN_14aba5530;
        FUN_147e6a39e(puVar7 + 2);
        puVar7[0x2e] = 0;
        puVar7[0x2f] = 0;
        FUN_1402fcd52(puVar7 + 2,param_2);
        *(undefined4 *)(puVar7 + 0x2d) = 0;
        uVar3 = *(undefined4 *)(param_2 + 0x108);
        local_c8 = *(undefined8 *)(param_2 + 0x80);
        local_d8 = *puVar1;
        uStack_d0 = *(undefined8 *)(param_2 + 0x78);
        local_b8 = *puVar1;
        uStack_b0 = *(undefined8 *)(param_2 + 0x78);
        local_a8 = *(undefined8 *)(param_2 + 0x80);
        uStack_a0 = DAT_14cb1c860;
        uStack_98 = DAT_14cb1c868;
        uStack_90 = DAT_14cb1c870;
        local_78 = (undefined4)DAT_14c8464e0;
        uStack_74 = DAT_14c8464e0._4_4_;
        uStack_70 = (undefined4)DAT_14c8464e8;
        uStack_6c = DAT_14c8464e8._4_4_;
        local_68 = DAT_14c8464f0;
        iVar4 = *(int *)(puVar7 + 0x2f);
        *(uint *)(puVar7 + 0x2f) = iVar4 + 1U;
        if (*(uint *)((longlong)puVar7 + 0x17c) < iVar4 + 1U) {
          FUN_147e6c362(puVar7 + 0x2e,iVar4);
        }
        lVar5 = puVar7[0x2e];
        lVar8 = (longlong)iVar4 * 0x90;
        puVar1 = (undefined8 *)(lVar5 + 0x20 + lVar8);
        *puVar1 = uStack_98;
        puVar1[1] = uStack_90;
        puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar8);
        *puVar1 = local_a8;
        puVar1[1] = uStack_a0;
        *(undefined8 *)(lVar5 + lVar8) = local_b8;
        ((undefined8 *)(lVar5 + lVar8))[1] = uStack_b0;
        puVar1 = (undefined8 *)(lVar5 + 0x30 + lVar8);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined4 *)(lVar5 + 0x40 + lVar8) = 0xffffffff;
        *(undefined8 *)(lVar5 + 0x48 + lVar8) = 0xffffffffffffffff;
        *(undefined4 *)(lVar5 + 0x50 + lVar8) = 0xffffffff;
        *(undefined4 *)(lVar5 + 0x54 + lVar8) = uVar3;
        *(undefined4 *)(lVar5 + 0x58 + lVar8) = 0;
        *(undefined1 *)(lVar5 + 0x5c + lVar8) = 0;
        puVar1 = (undefined8 *)(lVar5 + 0x5d + lVar8);
        *puVar1 = CONCAT17((undefined1)uStack_74,CONCAT43(local_78,uStack_7b));
        puVar1[1] = CONCAT17((undefined1)uStack_6c,CONCAT43(uStack_70,uStack_74._1_3_));
        puVar1 = (undefined8 *)(lVar5 + 0x68 + lVar8);
        *puVar1 = CONCAT44(uStack_6c,uStack_70);
        puVar1[1] = local_68;
        puVar2 = (undefined4 *)(lVar5 + 0x78 + lVar8);
        *puVar2 = (undefined4)local_d8;
        puVar2[1] = local_d8._4_4_;
        puVar2[2] = (undefined4)uStack_d0;
        puVar2[3] = uStack_d0._4_4_;
        *(undefined8 *)(lVar5 + 0x88 + lVar8) = local_c8;
        goto LAB_147e697fb;
      }
    }
  }
  else if (*(int *)(param_2 + 0x10) == 3) goto LAB_147e69653;
LAB_147e697f9:
  puVar7 = (undefined8 *)0x0;
LAB_147e697fb:
  *param_1 = puVar7;
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147e69851 FUN_147e69851 body=262 status=ok
// SIG undefined FUN_147e69851(void)

void FUN_147e69851(double *param_1,longlong param_2,double *param_3,float param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = DAT_14c8464e8;
  dVar4 = DAT_14c8464f0;
  dVar2 = DAT_14c8464e0;
  if (0.0 < param_4) {
    dVar2 = 1.0 / (double)param_4;
    dVar3 = param_3[1] * dVar2;
    dVar4 = param_3[2] * dVar2;
    dVar2 = dVar2 * *param_3;
  }
  switch(*(undefined1 *)(param_2 + 0x1539)) {
  default:
    goto switchD_147e698ba_caseD_0;
  case 1:
  case 4:
    dVar4 = 0.0;
    if (0.009999999776482582 < ABS(*param_3)) goto LAB_147e69948;
    dVar1 = param_3[1];
    break;
  case 2:
    if ((0.009999999776482582 < ABS(*param_3)) || (0.009999999776482582 < ABS(param_3[1])))
    goto LAB_147e69948;
    dVar1 = param_3[2];
  }
  if (0.009999999776482582 < ABS(dVar1)) {
LAB_147e69948:
    *param_1 = dVar2;
    param_1[1] = dVar3;
    param_1[2] = dVar4;
    return;
  }
switchD_147e698ba_caseD_0:
  param_1[2] = DAT_14c8464f0;
  dVar2 = DAT_14c8464e8;
  *param_1 = DAT_14c8464e0;
  param_1[1] = dVar2;
  return;
}



// FUNCTION 147e69958 FUN_147e69958 body=475 status=ok
// SIG undefined FUN_147e69958(void)

void FUN_147e69958(longlong param_1,double *param_2)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double *pdVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  *param_2 = 0.0;
  param_2[1] = 0.0;
  *(undefined1 *)(param_2 + 6) = 0;
  lVar1 = *(longlong *)(param_1 + 0x1c8);
  if (lVar1 == 0) {
    pdVar9 = (double *)&DAT_14c8464e0;
    uVar10 = (undefined4)DAT_14c8464f0;
    uVar11 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  }
  else {
    pdVar9 = (double *)(lVar1 + 0x260);
    uVar10 = (undefined4)*(undefined8 *)(lVar1 + 0x270);
    uVar11 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x270) >> 0x20);
  }
  dVar13 = *pdVar9;
  dVar3 = pdVar9[1];
  dVar12 = pdVar9[1];
  param_2[3] = dVar13;
  param_2[4] = dVar3;
  param_2[5] = (double)CONCAT44(uVar11,uVar10);
  *param_2 = param_2[3];
  param_2[1] = param_2[4];
  param_2[2] = param_2[5];
  *(undefined1 *)(param_2 + 6) = 1;
  lVar2 = *(longlong *)(param_1 + 0x3a0);
  if (lVar2 != 0) {
    dVar3 = (double)(*(float *)(lVar2 + 0x660) * 0.5);
    dVar14 = (double)*(float *)(lVar2 + 0x658);
    uVar17 = (undefined4)DAT_14c8464f0;
    uVar19 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    if (lVar1 == 0) {
      pdVar9 = (double *)&DAT_14c8464e0;
      uVar16 = uVar17;
      uVar18 = uVar19;
    }
    else {
      pdVar9 = (double *)(lVar1 + 0x260);
      uVar16 = (int)*(undefined8 *)(lVar1 + 0x270);
      uVar18 = (int)((ulonglong)*(undefined8 *)(lVar1 + 0x270) >> 0x20);
    }
    dVar5 = *pdVar9 + dVar14;
    dVar6 = pdVar9[1] + dVar14;
    dVar4 = (double)CONCAT44(uVar18,uVar16) + dVar3;
    dVar7 = *param_2;
    if (dVar5 <= *param_2) {
      dVar7 = dVar5;
    }
    dVar15 = param_2[1];
    if (dVar6 <= param_2[1]) {
      dVar15 = dVar6;
    }
    dVar8 = param_2[2];
    if (dVar4 <= param_2[2]) {
      dVar8 = dVar4;
    }
    if (dVar13 <= dVar5) {
      dVar13 = dVar5;
    }
    if (dVar12 <= dVar6) {
      dVar12 = dVar6;
    }
    dVar5 = (double)CONCAT44(uVar11,uVar10);
    if ((double)CONCAT44(uVar11,uVar10) <= dVar4) {
      dVar5 = dVar4;
    }
    if (lVar1 == 0) {
      pdVar9 = (double *)&DAT_14c8464e0;
    }
    else {
      uVar17 = (undefined4)*(undefined8 *)(lVar1 + 0x270);
      uVar19 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x270) >> 0x20);
      pdVar9 = (double *)(lVar1 + 0x260);
    }
    dVar4 = *pdVar9 - dVar14;
    dVar14 = pdVar9[1] - dVar14;
    dVar3 = (double)CONCAT44(uVar19,uVar17) - dVar3;
    if (dVar4 <= dVar7) {
      dVar7 = dVar4;
    }
    *param_2 = dVar7;
    if (dVar14 <= dVar15) {
      dVar15 = dVar14;
    }
    param_2[1] = dVar15;
    if (dVar3 <= dVar8) {
      dVar8 = dVar3;
    }
    param_2[2] = dVar8;
    if (dVar13 <= dVar4) {
      dVar13 = dVar4;
    }
    param_2[3] = dVar13;
    if (dVar12 <= dVar14) {
      dVar12 = dVar14;
    }
    param_2[4] = dVar12;
    if (dVar5 <= dVar3) {
      dVar5 = dVar3;
    }
    param_2[5] = dVar5;
  }
  return;
}



// FUNCTION 147e69b34 FUN_147e69b34 body=51 status=ok
// SIG undefined FUN_147e69b34(void)

void FUN_147e69b34(undefined8 param_1,undefined8 *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = (code *)*param_2;
  plVar2 = param_2 + 4;
  if ((longlong *)param_2[2] != (longlong *)0x0) {
    plVar2 = (longlong *)param_2[2];
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000147e69b64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_1);
  return;
}



// FUNCTION 147e69b67 FUN_147e69b67 body=179 status=ok
// SIG undefined FUN_147e69b67(void)

void FUN_147e69b67(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [38];
  char local_22;
  char local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_22 = *(char *)(param_2 + 2);
    (**(code **)(*param_1 + 0x178))(param_1,&local_22,1);
    if (local_22 != '\x01') goto LAB_147e69bf2;
  }
  else {
    (**(code **)(*param_1 + 0x178))(param_1,&local_21,1);
    if (local_21 == '\0') {
      if (*(char *)(param_2 + 2) != '\0') {
        *(undefined1 *)(param_2 + 2) = 0;
      }
      goto LAB_147e69bf2;
    }
    if (*(char *)(param_2 + 2) == '\0') {
      *param_2 = 0;
      *(undefined4 *)(param_2 + 1) = 0;
      *(undefined1 *)(param_2 + 2) = 1;
    }
  }
  FUN_1408006ae(param_1,param_2);
LAB_147e69bf2:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e69c1c FUN_147e69c1c body=278 status=ok
// SIG undefined FUN_147e69c1c(void)

void FUN_147e69c1c(longlong param_1)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x308) == '\x01') {
    FUN_1402f9fda(param_1 + 0x2b8,local_38);
  }
  if (*(char *)(param_1 + 0xf9) == '\x01') {
    cVar1 = FUN_144a872af(param_1 + 0x78);
    if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0xa8) != 0)) {
      FUN_1402f9fda(param_1 + 0x78,local_38);
      FUN_140801b3e(param_1,*(undefined4 *)(param_1 + 0xcc));
    }
  }
  if (*(char *)(param_1 + 0x2b0) == '\x01') {
    *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(param_1 + 0x3c);
    if (*(char *)(param_1 + 0x251) == '\x01') {
      cVar1 = FUN_144a872af(param_1 + 0x1d0);
      if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0x200) != 0)) {
        FUN_1402f9fda(param_1 + 0x1d0,local_38);
        FUN_140801b3e((undefined4 *)(param_1 + 0x158),*(undefined4 *)(param_1 + 0x224));
        *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x180);
        *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x170);
        *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x174);
        *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x178);
        *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x17c);
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



// FUNCTION 147e69d36 FUN_147e69d36 body=100 status=ok
// SIG undefined FUN_147e69d36(void)

void FUN_147e69d36(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 600) == '\x01') {
    *(undefined1 *)(param_1 + 600) = 0;
  }
  if (*(char *)(param_1 + 0x240) == '\x01') {
    plVar3 = *(longlong **)(param_1 + 0x228);
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
    *(undefined1 *)(param_1 + 0x240) = 0;
  }
  FUN_1402f4baa(param_1);
  return;
}



// FUNCTION 147e69d9a FUN_147e69d9a body=434 status=ok
// SIG undefined FUN_147e69d9a(void)

void FUN_147e69d9a(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  double *pdVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  iVar1 = *(int *)(param_1 + 0x168);
  lVar2 = *(longlong *)(param_1 + 0x170);
  lVar7 = (longlong)iVar1 * 0x90;
  dVar8 = *(double *)(lVar2 + 0x88 + lVar7);
  dVar9 = dVar8 - *(double *)(param_2 + 0x20);
  dVar13 = *(double *)(lVar2 + 0x80 + lVar7);
  dVar11 = dVar13 - *(double *)(param_2 + 0x18);
  dVar14 = *(double *)(lVar2 + 0x78 + lVar7);
  dVar15 = dVar14 - *(double *)(param_2 + 0x10);
  dVar3 = dVar9 * dVar9 + dVar15 * dVar15 + dVar11 * dVar11;
  if (((dVar3 != 1.0) || (dVar10 = dVar9, dVar12 = dVar11, dVar16 = dVar15, NAN(dVar3))) &&
     (dVar10 = DAT_14c8464f0, dVar12 = DAT_14c8464e8, dVar16 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar3)) {
    dVar16 = 1.0 / SQRT(dVar3);
    dVar10 = dVar9 * dVar16;
    dVar12 = dVar11 * dVar16;
    dVar16 = dVar15 * dVar16;
  }
  if (10.0 <= (float)SQRT(dVar3)) {
    pdVar6 = (double *)(lVar2 + -0x18 + lVar7);
    if (iVar1 < 1) {
      pdVar6 = (double *)(param_1 + 0x28);
    }
    dVar14 = dVar14 - *pdVar6;
    dVar8 = dVar8 - pdVar6[2];
    dVar13 = dVar13 - pdVar6[1];
    dVar3 = 1.0 / SQRT(dVar8 * dVar8 + dVar14 * dVar14 + dVar13 * dVar13);
    if (0.0 <= dVar3 * dVar8 * dVar10 + dVar12 * dVar13 * dVar3 + dVar14 * dVar3 * dVar16) {
      return;
    }
  }
  iVar5 = *(int *)(param_1 + 0x178) + -1;
  iVar4 = iVar1 + 1;
  if (iVar5 <= iVar1 + 1) {
    iVar4 = iVar5;
  }
  *(int *)(param_1 + 0x168) = iVar4;
  return;
}



// FUNCTION 147e69f4c FUN_147e69f4c body=715 status=ok
// SIG undefined FUN_147e69f4c(void)

longlong FUN_147e69f4c(longlong param_1,longlong param_2,undefined8 param_3,undefined1 param_4,
                      undefined8 param_5,int param_6)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
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
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  ulonglong uVar22;
  uint uVar23;
  undefined8 *puVar24;
  int iVar25;
  longlong lVar26;
  longlong lVar27;
  int iVar28;
  longlong lVar29;
  longlong lVar30;
  undefined1 auStack_2d8 [39];
  undefined1 local_2b1;
  longlong local_2b0;
  undefined8 local_2a8 [60];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [80];
  undefined1 local_68;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  iVar4 = *(int *)(param_1 + 0x168);
  lVar29 = (longlong)iVar4;
  iVar25 = *(int *)(param_1 + 0x178) - iVar4;
  if (param_6 < iVar25) {
    iVar25 = param_6;
  }
  iVar28 = 100;
  if (iVar25 < 100) {
    iVar28 = iVar25;
  }
  local_c8 = (undefined8 *)0x0;
  local_c0 = 0x400000000;
  local_68 = 0;
  local_50 = 0;
  if (iVar25 < 1) {
    local_c0 = 0x400000001;
  }
  else {
    lVar27 = lVar29 * 0x90 + 0x48;
    local_2b1 = param_4;
    local_2b0 = param_2;
    do {
      uVar22 = local_c0;
      lVar5 = *(longlong *)(param_1 + 0x170);
      lVar30 = (longlong)(int)local_c0;
      uVar23 = (int)local_c0 + 1;
      local_c0 = CONCAT44(local_c0._4_4_,uVar23);
      if (local_c0._4_4_ < uVar23) {
        FUN_1407d4a32(local_2a8,uVar22 & 0xffffffff);
      }
      param_2 = local_2b0;
      param_4 = local_2b1;
      lVar1 = lVar5 + lVar27;
      puVar24 = local_c8;
      if (local_c8 == (undefined8 *)0x0) {
        puVar24 = local_2a8;
      }
      lVar26 = lVar30 * 0x78;
      uVar17 = *(undefined8 *)(lVar1 + -0x48);
      uVar18 = *(undefined8 *)(lVar1 + -0x40);
      uVar19 = *(undefined8 *)(lVar1 + -0x38);
      uVar20 = *(undefined8 *)(lVar1 + -0x30);
      uVar21 = *(undefined8 *)(lVar1 + -0x20);
      puVar24[lVar30 * 0xf + 4] = *(undefined8 *)(lVar1 + -0x28);
      (puVar24 + lVar30 * 0xf + 4)[1] = uVar21;
      puVar24[lVar30 * 0xf + 2] = uVar19;
      (puVar24 + lVar30 * 0xf + 2)[1] = uVar20;
      puVar24[lVar30 * 0xf] = uVar17;
      (puVar24 + lVar30 * 0xf)[1] = uVar18;
      puVar24[lVar30 * 0xf + 6] = *(undefined8 *)(lVar1 + -0x18);
      lVar1 = *(longlong *)(lVar1 + -0x10);
      puVar24[lVar30 * 0xf + 7] = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      *(undefined4 *)(puVar24 + lVar30 * 0xf + 8) = *(undefined4 *)(lVar5 + -8 + lVar27);
      puVar2 = (undefined4 *)(lVar5 + lVar27);
      uVar6 = puVar2[1];
      uVar7 = puVar2[2];
      uVar8 = puVar2[3];
      puVar3 = (undefined4 *)(lVar5 + 0x10 + lVar27);
      uVar9 = *puVar3;
      uVar10 = puVar3[1];
      uVar11 = puVar3[2];
      uVar12 = puVar3[3];
      puVar3 = (undefined4 *)(lVar5 + 0x20 + lVar27);
      uVar13 = *puVar3;
      uVar14 = puVar3[1];
      uVar15 = puVar3[2];
      uVar16 = puVar3[3];
      *(undefined4 *)(puVar24 + lVar30 * 0xf + 9) = *puVar2;
      *(undefined4 *)((longlong)puVar24 + lVar26 + 0x4c) = uVar6;
      *(undefined4 *)(puVar24 + lVar30 * 0xf + 10) = uVar7;
      *(undefined4 *)((longlong)puVar24 + lVar26 + 0x54) = uVar8;
      *(undefined4 *)(puVar24 + lVar30 * 0xf + 0xb) = uVar9;
      *(undefined4 *)((longlong)puVar24 + lVar26 + 0x5c) = uVar10;
      *(undefined4 *)(puVar24 + lVar30 * 0xf + 0xc) = uVar11;
      *(undefined4 *)((longlong)puVar24 + lVar26 + 100) = uVar12;
      *(undefined4 *)(puVar24 + lVar30 * 0xf + 0xd) = uVar13;
      *(undefined4 *)((longlong)puVar24 + lVar26 + 0x6c) = uVar14;
      *(undefined4 *)(puVar24 + lVar30 * 0xf + 0xe) = uVar15;
      *(undefined4 *)((longlong)puVar24 + lVar26 + 0x74) = uVar16;
      lVar29 = lVar29 + 1;
      lVar27 = lVar27 + 0x90;
    } while (lVar29 < iVar28 + iVar4);
    if ((int)local_c0 != 0) goto LAB_147e6a18f;
    local_c0 = CONCAT44(local_c0._4_4_,1);
    if (local_c0._4_4_ == 0) {
      FUN_1407d4a32(local_2a8,0);
    }
  }
  puVar24 = local_c8;
  if (local_c8 == (undefined8 *)0x0) {
    puVar24 = local_2a8;
  }
  puVar24[2] = *(undefined8 *)(param_1 + 0x90);
  uVar17 = *(undefined8 *)(param_1 + 0x88);
  *puVar24 = *(undefined8 *)(param_1 + 0x80);
  puVar24[1] = uVar17;
  puVar24[5] = DAT_14cb1c870;
  puVar24[3] = DAT_14cb1c860;
  puVar24[4] = DAT_14cb1c868;
  puVar24[6] = 0;
  puVar24[7] = 0;
  *(undefined4 *)(puVar24 + 8) = 0xffffffff;
  puVar24[9] = 0xffffffffffffffff;
  *(undefined4 *)(puVar24 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)puVar24 + 0x5c) = 0;
  *(undefined8 *)((longlong)puVar24 + 0x54) = 0;
  *(undefined4 *)(puVar24 + 0xc) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)puVar24 + 100) = DAT_14c8464e0._4_4_;
  *(undefined4 *)(puVar24 + 0xd) = (undefined4)DAT_14c8464e8;
  *(undefined4 *)((longlong)puVar24 + 0x6c) = DAT_14c8464e8._4_4_;
  puVar24[0xe] = DAT_14c8464f0;
  puVar24 = local_c8;
  if (local_c8 == (undefined8 *)0x0) {
    puVar24 = local_2a8;
  }
  *(undefined4 *)(puVar24 + (longlong)((int)local_c0 + -1) * 0xf + 0xb) = 3;
LAB_147e6a18f:
  if (iVar28 + iVar4 == *(int *)(param_1 + 0x178)) {
    if ((undefined1 *)(param_1 + 200) != local_b8) {
      FUN_1402faf4a(local_b8,(undefined1 *)(param_1 + 200));
    }
  }
  *(undefined1 *)(param_2 + 0x328) = 0xff;
  FUN_1449493b2(param_2);
  FUN_140105c28(param_2,local_2a8);
  *(undefined1 *)(param_2 + 0x328) = 1;
  *(undefined1 *)(param_2 + 0x330) = param_4;
  FUN_147e69d36(local_2a8);
  if ((local_48 ^ (ulonglong)auStack_2d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e6a218 FUN_147e6a218 body=67 status=ok
// SIG undefined FUN_147e6a218(void)

undefined8 FUN_147e6a218(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((longlong *)*param_1 != (longlong *)0x0) {
    cVar1 = (**(code **)(*(longlong *)*param_1 + 0x18))();
    if (cVar1 != '\0') {
      cVar1 = FUN_14383039a(param_1 + 2);
      if (cVar1 != '\0') {
        uVar2 = FUN_14383039a(param_1 + 0x11);
        return uVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 147e6a25b FUN_147e6a25b body=164 status=ok
// SIG undefined FUN_147e6a25b(void)

longlong * FUN_147e6a25b(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [36];
  undefined8 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14080095c();
  FUN_14382f1f0(param_1,param_2 + 0x54);
  (**(code **)(*param_1 + 0x178))(param_1,param_2 + 0x5c,1);
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x178))(param_1,param_2 + 0x58,3);
  local_24 = 0xffffffffffffffff;
  local_1c = 0xffffffff;
  uVar2 = CONCAT71((int7)((ulonglong)plVar1 >> 8),(char)param_1[5]) & 0xffffffffffffff04;
  FUN_147e6a300(CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 2),param_1,param_2 + 0x48);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e6a300 FUN_147e6a300 body=157 status=ok
// SIG undefined FUN_147e6a300(void)

void FUN_147e6a300(char param_1,longlong *param_2,int *param_3,int *param_4)

{
  undefined1 auStack_58 [39];
  char local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 == '\0') {
    local_31 = false;
  }
  else {
    local_31 = param_4[1] != param_3[1] || *param_3 != *param_4;
  }
  (**(code **)(*param_2 + 0x178))(param_2,&local_31,1);
  if (local_31 == '\x01') {
    FUN_140801ee6(param_2,param_3);
  }
  else if (param_1 == '\0') {
    param_3[2] = param_4[2];
    *(undefined8 *)param_3 = *(undefined8 *)param_4;
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e6a39e FUN_147e6a39e body=279 status=ok
// SIG undefined FUN_147e6a39e(void)

void FUN_147e6a39e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 2) = 0;
  uVar1 = DAT_14cb1d028;
  param_1[3] = DAT_14cb1d020;
  param_1[4] = uVar1;
  param_1[5] = DAT_14cb1d030;
  uVar1 = DAT_14cb1d028;
  param_1[6] = DAT_14cb1d020;
  param_1[7] = uVar1;
  param_1[8] = DAT_14cb1d030;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  param_1[0xc] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0xd) = 0;
  uVar1 = DAT_14cb1d028;
  param_1[0xe] = DAT_14cb1d020;
  param_1[0xf] = uVar1;
  param_1[0x10] = DAT_14cb1d030;
  uVar1 = DAT_14cb1d028;
  param_1[0x11] = DAT_14cb1d020;
  param_1[0x12] = uVar1;
  param_1[0x13] = DAT_14cb1d030;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  param_1[0x19] = DAT_14cb1d030;
  uVar1 = DAT_14cb1d028;
  param_1[0x17] = DAT_14cb1d020;
  param_1[0x18] = uVar1;
  uVar1 = DAT_14cb1c868;
  param_1[0x1a] = DAT_14cb1c860;
  param_1[0x1b] = uVar1;
  param_1[0x1c] = DAT_14cb1c870;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0xffffffff;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  return;
}



// FUNCTION 147e6a4b6 FUN_147e6a4b6 body=216 status=ok
// SIG undefined FUN_147e6a4b6(void)

void FUN_147e6a4b6(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x150) == '\x01') {
    *(undefined1 *)(param_1 + 0x150) = 0;
  }
  if (*(char *)(param_1 + 0x13c) == '\x01') {
    *(undefined1 *)(param_1 + 0x13c) = 0;
  }
  plVar3 = *(longlong **)(param_1 + 0x120);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = *(longlong **)(param_1 + 0xf0);
  if (plVar3 != (longlong *)0x0) {
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
  plVar3 = *(longlong **)(param_1 + 0xa8);
  if (plVar3 != (longlong *)0x0) {
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
  plVar3 = *(longlong **)(param_1 + 0x50);
  if (plVar3 != (longlong *)0x0) {
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
                    /* WARNING: Could not recover jumptable at 0x000147e6a57f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147e6a58e FUN_147e6a58e body=314 status=ok
// SIG undefined FUN_147e6a58e(void)

void FUN_147e6a58e(float *param_1,longlong *param_2)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  
  lVar1 = *(longlong *)(((undefined8 *)*param_2)[2] + 0x48);
  uVar4 = -(uint)(*param_1 < 0.0);
  fVar6 = ABS(*param_1 /
              (float)(~uVar4 & (*(uint *)(lVar1 + 0x50) ^ 0x80000000) |
                     *(uint *)(lVar1 + 0x4c) & uVar4));
  pcVar2 = *(code **)(**(longlong **)*param_2 + 0x18);
  if ((pcVar2 != (code *)&LAB_14494a6dc) &&
     ((((lVar1 = param_2[1], pcVar2 == (code *)&LAB_1402f53cc || (iVar3 = (*pcVar2)(), iVar3 != 1))
       && (*(char *)(lVar1 + 0x90) == '\x01')) &&
      ((0.0 < *param_1 &&
       (fVar5 = (float)FUN_140dcf062(*(undefined8 *)(*(longlong *)(*param_2 + 0x10) + 0x48)),
       fVar5 <= fVar6)))))) {
    fVar6 = fVar5;
  }
  if ((1.0 <= ABS(0.0 - param_1[2])) || (0.01 < ABS(fVar6) == ABS(param_1[4]) <= 0.01)) {
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = *param_1;
    param_1[4] = fVar6;
  }
  return;
}



// FUNCTION 147e6a6c8 FUN_147e6a6c8 body=164 status=ok
// SIG undefined FUN_147e6a6c8(void)

void FUN_147e6a6c8(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(longlong *)(param_1 + 0x58) != 0 && -1 < (longlong)*(int *)(param_1 + 100)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x58),
               (longlong)*(int *)(param_1 + 100) * 0x30);
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 100) = 0x80000000;
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0 && -1 < (longlong)*(int *)(param_1 + 0x54)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x48),
               (longlong)*(int *)(param_1 + 0x54) * 0x30);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0x80000000;
  return;
}



// FUNCTION 147e6a76c FUN_147e6a76c body=1861 status=ok
// SIG undefined FUN_147e6a76c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147e6a76c(longlong param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined4 uVar18;
  int iVar19;
  longlong *plVar20;
  double *pdVar21;
  uint uVar22;
  ulonglong uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar27;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  double dVar34;
  double dVar35;
  undefined4 uVar36;
  undefined1 auStack_2a8 [32];
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  undefined1 local_268 [32];
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  undefined8 uStack_210;
  undefined1 local_208 [16];
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  undefined8 uStack_190;
  undefined1 local_188 [16];
  double local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  if ((((param_3 != 1) || (*(int *)(param_1 + -0x560) == 1)) ||
      (plVar20 = (longlong *)FUN_1400d690e(param_1 + -0x218), plVar20 == (longlong *)0x0)) ||
     (uVar18 = (**(code **)(*plVar20 + 0x90))(), auVar31 = _DAT_149934d80, (char)uVar18 == '\0'))
  goto LAB_147e6a7fc;
  if (*(int *)(param_1 + -0x4f4) == 2) {
    dVar5 = *(double *)(param_1 + -0x4c0);
    dVar6 = *(double *)(param_1 + -0x4b8);
    auVar29 = *(undefined1 (*) [16])(param_1 + -0x4a0);
    dVar24 = auVar29._0_8_;
    dVar2 = auVar29._8_8_;
    dVar28 = SUB168(*(undefined1 (*) [16])(param_1 + -0x490),0);
    auVar30 = *(undefined1 (*) [16])(param_1 + -0x970);
    dVar7 = auVar30._0_8_;
    dVar8 = auVar30._8_8_;
    dVar25 = SUB168(*(undefined1 (*) [16])(param_1 + -0x960),0);
    auVar29 = minpd(auVar29,auVar30);
    auVar32 = minpd(*(undefined1 (*) [16])(param_1 + -0x490),
                    *(undefined1 (*) [16])(param_1 + -0x960));
    auVar30._8_8_ = -(ulonglong)(auVar29._8_8_ < 0.0);
    auVar30._0_8_ = -(ulonglong)(auVar29._0_8_ < 0.0);
    iVar19 = movmskpd(uVar18,auVar30);
    auVar29._8_8_ = -(ulonglong)(auVar32._8_8_ < 0.0);
    auVar29._0_8_ = -(ulonglong)(auVar32._0_8_ < 0.0);
    uVar22 = movmskpd((int)plVar20,auVar29);
    if ((uVar22 & 0x3fffffff) == 0 && iVar19 == 0) {
      dVar33 = *(double *)(param_1 + -0x9b0);
      dVar10 = *(double *)(param_1 + -0x9a8);
      dVar3 = *(double *)(param_1 + -0x9a0);
      dVar24 = *(double *)(param_1 + -0x998);
      dVar5 = dVar5 * dVar7;
      dVar6 = dVar6 * dVar8;
      dVar25 = *(double *)(param_1 + -0x4b0) * dVar25;
      dVar28 = dVar6 * dVar33 - dVar5 * dVar10;
      dVar7 = dVar25 * dVar10 - dVar6 * dVar3;
      dVar2 = dVar5 * dVar3 - dVar25 * dVar33;
      dVar7 = dVar7 + dVar7;
      dVar2 = dVar2 + dVar2;
      dVar28 = dVar28 + dVar28;
      local_e8 = (dVar28 * dVar10 - dVar3 * dVar2) + dVar24 * dVar7 + dVar5 +
                 *(double *)(param_1 + -0x990);
      dStack_e0 = (dVar7 * dVar3 - dVar28 * dVar33) + *(double *)(param_1 + -0x998) * dVar2 + dVar6
                  + *(double *)(param_1 + -0x988);
      local_d8 = (dVar2 * dVar33 - dVar10 * dVar7) + dVar24 * dVar28 + dVar25 +
                 *(double *)(param_1 + -0x980);
    }
    else {
      dVar12 = *(double *)(param_1 + -0x4e0);
      dVar13 = *(double *)(param_1 + -0x4d8);
      dVar14 = *(double *)(param_1 + -0x4d0);
      local_278 = dVar24 * dVar7;
      dStack_270 = dVar2 * dVar8;
      dVar15 = *(double *)(param_1 + -0x9b0);
      dVar16 = *(double *)(param_1 + -0x9a8);
      dVar17 = *(double *)(param_1 + -0x9a0);
      dVar35 = dVar16 + dVar16;
      dVar34 = dVar17 + dVar17;
      dVar3 = dVar15 * (dVar15 + dVar15);
      dVar26 = *(double *)(param_1 + -0x9b0) * dVar34;
      dVar33 = *(double *)(param_1 + -0x998);
      dVar9 = dVar34 * dVar33;
      dVar10 = (dVar15 + dVar15) * *(double *)(param_1 + -0x998);
      dVar33 = dVar35 * dVar33;
      dVar27 = (dVar34 * dVar16 - dVar10) * dVar25;
      dVar11 = (1.0 - (dVar17 * dVar34 + dVar3)) * dVar8;
      dVar4 = (dVar35 * dVar15 + dVar9) * dVar7;
      local_198 = (dVar34 * dVar16 + dVar10) * dVar8;
      local_1b8 = (dVar26 - dVar33) * dVar7;
      dVar10 = *(double *)(param_1 + -0x4c8);
      local_1c8._8_4_ = SUB84(dVar4,0);
      local_1c8._0_8_ = (1.0 - (dVar17 * dVar34 + dVar16 * dVar35)) * dVar7;
      local_1c8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      uStack_1b0 = 0;
      local_178 = (1.0 - (dVar3 + dVar16 * dVar35)) * dVar25;
      local_1a8._8_4_ = SUB84(dVar11,0);
      local_1a8._0_8_ = (dVar35 * dVar15 - dVar9) * dVar8;
      local_1a8._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
      uStack_190 = 0;
      local_188._8_4_ = SUB84(dVar27,0);
      local_188._0_8_ = (dVar33 + dVar26) * dVar25;
      local_188._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
      uStack_170 = 0;
      local_168 = *(undefined8 *)(param_1 + -0x990);
      uStack_160 = *(undefined8 *)(param_1 + -0x988);
      local_158 = *(undefined4 *)(param_1 + -0x980);
      uStack_154 = *(undefined4 *)(param_1 + -0x97c);
      uStack_150 = 0;
      uStack_14c = 0x3ff00000;
      dVar8 = dVar13 + dVar13;
      dVar33 = dVar14 + dVar14;
      dVar27 = dVar12 * (dVar12 + dVar12);
      dVar34 = *(double *)(param_1 + -0x4e0) * dVar33;
      dVar3 = dVar33 * dVar10;
      dVar4 = (dVar12 + dVar12) * *(double *)(param_1 + -0x4c8);
      dVar10 = dVar8 * dVar10;
      local_228 = (dVar8 * dVar12 - dVar3) * dVar2;
      dVar7 = (dVar33 * dVar13 - dVar4) * dVar28;
      local_248 = ((double)DAT_149934d80 - (dVar14 * dVar33 + dVar13 * dVar8)) * dVar24;
      dStack_220 = (DAT_149934d80._8_8_ - (dVar14 * dVar33 + dVar27)) * dVar2;
      dStack_240 = (dVar8 * dVar12 + dVar3) * dVar24;
      local_218 = (dVar33 * dVar13 + dVar4) * dVar2;
      local_238 = (dVar34 - dVar10) * dVar24;
      uStack_230 = 0;
      uStack_210 = 0;
      local_208._8_4_ = SUB84(dVar7,0);
      local_208._0_8_ = (dVar34 + dVar10) * dVar28;
      local_208._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      local_1f8 = (1.0 - (dVar27 + dVar13 * dVar8)) * dVar28;
      uStack_1f0 = 0;
      uStack_1d0 = 0x3ff0000000000000;
      local_288 = dVar5;
      dStack_280 = dVar6;
      local_1e8 = dVar5;
      dStack_1e0 = dVar6;
      local_1d8 = *(double *)(param_1 + -0x4b0);
      FUN_1447fea8d(&local_148);
      FUN_144a1c686(&local_148,0x3e45798ee0000000);
      auVar32._8_8_ = -(ulonglong)(0.0 <= dStack_270);
      auVar32._0_8_ = -(ulonglong)(0.0 <= local_278);
      auVar31 = blendvpd(_DAT_149936790,auVar31,auVar32);
      uVar23 = -(ulonglong)(0.0 <= dVar28 * dVar25);
      dVar24 = (double)(~uVar23 & 0xbff0000000000000 |
                       (ulonglong)((uint)(uVar23 >> 0x20) & 0x3ff00000) << 0x20);
      dVar28 = auVar31._0_8_;
      local_138 = local_138 * dVar28;
      local_140 = local_140 * dVar28;
      local_148 = local_148 * dVar28;
      dVar28 = auVar31._8_8_;
      local_118 = local_118 * dVar28;
      local_120 = local_120 * dVar28;
      local_128 = dVar28 * local_128;
      local_f8 = local_f8 * dVar24;
      local_100 = local_100 * dVar24;
      local_108 = dVar24 * local_108;
      FUN_14481fd10(local_268,&local_148);
    }
  }
  else {
    dVar28 = *(double *)(param_1 + -0x990);
    dVar7 = *(double *)(param_1 + -0x988);
    dVar24 = *(double *)(param_1 + -0x980);
    iVar19 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar19 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar19 + 1U) {
      FUN_1403e3958(param_2,iVar19);
    }
    lVar1 = *param_2;
    pdVar21 = (double *)(lVar1 + (longlong)iVar19 * 0x18);
    *pdVar21 = dVar28;
    pdVar21[1] = dVar7;
    *(double *)(lVar1 + 0x10 + (longlong)iVar19 * 0x18) = dVar24;
    if (*(longlong *)(param_1 + -0xb48) == 0) goto LAB_147e6a7fc;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + -0xb48) + 0x1c8);
    if (lVar1 == 0) {
      pdVar21 = (double *)&DAT_14c8464e0;
      uVar18 = (undefined4)DAT_14c8464f0;
      uVar36 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar18 = (undefined4)*(undefined8 *)(lVar1 + 0x270);
      uVar36 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x270) >> 0x20);
      pdVar21 = (double *)(lVar1 + 0x260);
    }
    local_e8 = *pdVar21;
    dStack_e0 = pdVar21[1];
    local_d8 = (double)CONCAT44(uVar36,uVar18);
    if (((ABS(local_e8 - dVar28) < 1.9999999494757503e-05) &&
        (local_d8 = (double)CONCAT44(uVar36,uVar18), ABS(dStack_e0 - dVar7) < 1.9999999494757503e-05
        )) && (local_d8 = (double)CONCAT44(uVar36,uVar18),
              ABS((double)CONCAT44(uVar36,uVar18) - dVar24) < 1.9999999494757503e-05))
    goto LAB_147e6a7fc;
  }
  iVar19 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar19 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar19 + 1U) {
    FUN_1403e3958(param_2,iVar19);
  }
  lVar1 = *param_2;
  auVar31._8_4_ = SUB84(dStack_e0,0);
  auVar31._0_8_ = local_e8;
  auVar31._12_4_ = (int)((ulonglong)dStack_e0 >> 0x20);
  *(undefined1 (*) [16])(lVar1 + (longlong)iVar19 * 0x18) = auVar31;
  *(double *)(lVar1 + 0x10 + (longlong)iVar19 * 0x18) = local_d8;
LAB_147e6a7fc:
  if ((local_c0 ^ (ulonglong)auStack_2a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e6aeb2 FUN_147e6aeb2 body=437 status=ok
// SIG undefined FUN_147e6aeb2(void)

void FUN_147e6aeb2(longlong param_1,longlong *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double *pdVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [32];
  double local_a8;
  double dStack_a0;
  double local_98;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_3 == 1) {
    FUN_1405e53f8(param_1 + -0x7f8,local_c8);
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_1403e3958(param_2,iVar1);
    }
    lVar2 = *param_2;
    pdVar5 = (double *)(lVar2 + (longlong)iVar1 * 0x18);
    *pdVar5 = local_a8;
    pdVar5[1] = dStack_a0;
    *(double *)(lVar2 + 0x10 + (longlong)iVar1 * 0x18) = local_98;
    if ((*(int *)(param_1 + -0xfc) != 2) && (*(longlong *)(param_1 + -0x750) != 0)) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + -0x750) + 0x1c8);
      if (lVar2 == 0) {
        pdVar5 = (double *)&DAT_14c8464e0;
        uVar6 = (undefined4)DAT_14c8464f0;
        uVar7 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      }
      else {
        uVar6 = (undefined4)*(undefined8 *)(lVar2 + 0x270);
        uVar7 = (undefined4)((ulonglong)*(undefined8 *)(lVar2 + 0x270) >> 0x20);
        pdVar5 = (double *)(lVar2 + 0x260);
      }
      dVar3 = *pdVar5;
      dVar4 = pdVar5[1];
      if (((1.9999999494757503e-05 <= ABS(dVar3 - local_a8)) ||
          (1.9999999494757503e-05 <= ABS(dVar4 - dStack_a0))) ||
         (1.9999999494757503e-05 <= ABS((double)CONCAT44(uVar7,uVar6) - local_98))) {
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_1403e3958(param_2,iVar1);
        }
        lVar2 = *param_2;
        pdVar5 = (double *)(lVar2 + (longlong)iVar1 * 0x18);
        *pdVar5 = dVar3;
        pdVar5[1] = dVar4;
        *(ulonglong *)(lVar2 + 0x10 + (longlong)iVar1 * 0x18) = CONCAT44(uVar7,uVar6);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e6b068 FUN_147e6b068 body=230 status=ok
// SIG undefined FUN_147e6b068(void)

longlong * FUN_147e6b068(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  
  lVar4 = FUN_14152bd28(param_3);
  if ((lVar4 != 0) && (*(int *)(lVar4 + 0xb8) != *(int *)(lVar4 + 0xe4))) {
    lVar2 = *param_2;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar7 = (uint)lVar2 & 0xffff;
    lVar6 = lVar4 + 0xe8;
    if (*(longlong *)(lVar4 + 0xf0) != 0) {
      lVar6 = *(longlong *)(lVar4 + 0xf0);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(lVar4 + 0xf8) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar7) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(lVar4 + 0xb0) + (longlong)iVar5 * 0x28);
        if (*plVar1 == lVar2) {
          if (plVar1 != (longlong *)0x0) {
            *param_1 = plVar1[1];
            *(int *)(param_1 + 1) = (int)plVar1[2];
            goto LAB_147e6b09d;
          }
          break;
        }
        iVar5 = (int)plVar1[4];
      } while (iVar5 != -1);
    }
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0xc;
LAB_147e6b09d:
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 147e6b14e FUN_147e6b14e body=114 status=ok
// SIG undefined FUN_147e6b14e(void)

undefined8 * FUN_147e6b14e(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_14152bd28(param_2);
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    FUN_144a79b68(&local_20,*(undefined8 *)(lVar1 + 0x140));
  }
  *param_1 = local_20;
  *(undefined4 *)(param_1 + 1) = 0xc;
  param_1[2] = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e6b1c2 FUN_147e6b1c2 body=47 status=ok
// SIG undefined FUN_147e6b1c2(void)

undefined8 FUN_147e6b1c2(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_14058d91e();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e6b1e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,param_2,*(code **)(*plVar1 + 0x20));
    return uVar2;
  }
  return 0;
}



// FUNCTION 147e6b1f2 FUN_147e6b1f2 body=59 status=ok
// SIG undefined FUN_147e6b1f2(void)

undefined8 FUN_147e6b1f2(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_14152bd28(param_2);
  if ((lVar2 != 0) && (plVar1 = *(longlong **)(lVar2 + 0x140), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000147e6b222. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,param_1);
    return uVar3;
  }
  return 0;
}



// FUNCTION 147e6b22e FUN_147e6b22e body=47 status=ok
// SIG undefined FUN_147e6b22e(void)

undefined8 FUN_147e6b22e(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_14058d91e();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e6b252. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_2,*(code **)(*plVar1 + 0x18));
    return uVar2;
  }
  return 0;
}



// FUNCTION 147e6b25e FUN_147e6b25e body=59 status=ok
// SIG undefined FUN_147e6b25e(void)

undefined8 FUN_147e6b25e(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_14152bd28(param_2);
  if ((lVar2 != 0) && (plVar1 = *(longlong **)(lVar2 + 0x140), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000147e6b28e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*plVar1 + 0x18))(plVar1,param_1);
    return uVar3;
  }
  return 0;
}



// FUNCTION 147e6b29a FUN_147e6b29a body=83 status=ok
// SIG undefined FUN_147e6b29a(void)

void FUN_147e6b29a(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_1;
  lVar1 = FUN_14152bd28(param_2);
  if (lVar1 != 0) {
    FUN_1400bc96c(lVar1 + 0x118,&local_10);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e6b2ee FUN_147e6b2ee body=83 status=ok
// SIG undefined FUN_147e6b2ee(void)

void FUN_147e6b2ee(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_1;
  lVar1 = FUN_14152bd28(param_2);
  if (lVar1 != 0) {
    FUN_1400bc8c2(lVar1 + 0x118,&local_10);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e6b342 FUN_147e6b342 body=231 status=ok
// SIG undefined FUN_147e6b342(void)

void FUN_147e6b342(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_1;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  FUN_14012a5dc(&local_38,
                *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xfd0,&local_40);
  if ((local_30 == 0) && ((longlong)*(int *)(param_1 + 0x20) != 0)) {
    lVar3 = (longlong)*(int *)(param_1 + 0x20) * 0x58;
    lVar2 = *(longlong *)(param_1 + 0x18) + 0x40;
    do {
      plVar1 = (longlong *)FUN_14058d91e(lVar2);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x30))(plVar1,param_2,param_3);
      }
      lVar2 = lVar2 + 0x58;
      lVar3 = lVar3 + -0x58;
    } while (lVar3 != 0);
  }
  if ((local_30 & 1) == 0) {
    *(int *)(local_38 + 0x28) = *(int *)(local_38 + 0x28) + -1;
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e6b42a FUN_147e6b42a body=244 status=ok
// SIG undefined FUN_147e6b42a(void)

undefined8 FUN_147e6b42a(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 uVar7;
  
  FUN_140ce3ff6(*(undefined4 *)(param_3 + 0x60));
  uVar7 = FUN_140ce4006();
  uVar3 = FUN_147e6b51e((longlong *)(param_1 + 0x18),param_2,uVar7);
  if ((-1 < (int)uVar3) && ((int)uVar3 < *(int *)(param_1 + 0x20))) {
    lVar1 = *(longlong *)(param_1 + 0x18) + (ulonglong)uVar3 * 0x50;
    lVar5 = *(longlong *)(lVar1 + 0x40);
    if (lVar5 == 0) {
      uVar4 = FUN_140bed5ca();
      lVar5 = FUN_14477b664(uVar4);
      *(longlong *)(lVar1 + 0x40) = lVar5;
    }
    plVar6 = *(longlong **)(lVar1 + 0x48);
    if (plVar6 != (longlong *)0x0) {
LAB_147e6b4a5:
                    /* WARNING: Could not recover jumptable at 0x000147e6b4bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*plVar6 + 0x28))(plVar6,param_2,param_3);
      return uVar4;
    }
    if ((lVar5 != 0) && (*(longlong *)(lVar1 + 0x38) != 0)) {
      plVar6 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar6 != (longlong *)0x0) &&
         (cVar2 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar2 != '\0')) {
        uVar4 = (**(code **)(*plVar6 + 0x110))(plVar6);
        plVar6 = (longlong *)FUN_144aff482(uVar4,(longlong *)(lVar1 + 0x38));
        *(longlong **)(lVar1 + 0x48) = plVar6;
        if (plVar6 == (longlong *)0x0) {
          return 0;
        }
        goto LAB_147e6b4a5;
      }
      *(undefined8 *)(lVar1 + 0x48) = 0;
    }
  }
  return 0;
}



// FUNCTION 147e6b51e FUN_147e6b51e body=407 status=ok
// SIG undefined FUN_147e6b51e(void)

ulonglong FUN_147e6b51e(longlong *param_1,undefined8 param_2,float param_3)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [128];
  undefined1 *local_60;
  int local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_3 < 0.0) {
    uVar3 = rand();
    param_3 = (float)(uVar3 & 0x7fff) / 32767.0;
  }
  local_60 = (undefined1 *)0x0;
  local_54 = 0x20;
  local_58 = (int)param_1[1];
  uVar5 = (ulonglong)local_58;
  if (0x20 < uVar5) {
    FUN_140fb08bc(local_e0);
  }
  puVar4 = local_60;
  if (local_60 == (undefined1 *)0x0) {
    puVar4 = local_e0;
  }
  memset(puVar4,0,uVar5 << 2);
  if ((int)param_1[1] < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    fVar11 = 0.0;
    lVar6 = 0;
    lVar8 = 0;
    do {
      uVar9 = FUN_147e6c6f4(*param_1 + lVar6,param_2);
      puVar4 = local_60;
      if (local_60 == (undefined1 *)0x0) {
        puVar4 = local_e0;
      }
      *(undefined4 *)(puVar4 + lVar8 * 4) = uVar9;
      puVar4 = local_60;
      if (local_60 == (undefined1 *)0x0) {
        puVar4 = local_e0;
      }
      fVar11 = fVar11 + *(float *)(puVar4 + lVar8 * 4);
      lVar8 = lVar8 + 1;
      iVar1 = (int)param_1[1];
      lVar6 = lVar6 + 0x50;
    } while (lVar8 < iVar1);
    uVar5 = 0xffffffff;
    if (0 < iVar1) {
      fVar10 = 0.0;
      uVar7 = 0;
      do {
        bVar2 = fVar10 <= param_3 * fVar11;
        fVar10 = fVar10 + *(float *)(puVar4 + uVar7 * 4);
        if ((bVar2) && (param_3 * fVar11 <= fVar10)) {
          uVar5 = uVar7 & 0xffffffff;
          break;
        }
        uVar7 = uVar7 + 1;
      } while ((longlong)iVar1 != uVar7);
    }
  }
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 147e6b6b6 FUN_147e6b6b6 body=356 status=ok
// SIG undefined FUN_147e6b6b6(void)

void FUN_147e6b6b6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = param_1;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  FUN_14012a5dc(&local_40,
                *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xfd0,&local_48);
  if ((local_38 == 0) && ((longlong)*(int *)(param_1 + 0x20) != 0)) {
    lVar6 = (longlong)*(int *)(param_1 + 0x20) * 0x50;
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0x18) + 0x38);
    do {
      lVar3 = plVar5[1];
      if (lVar3 == 0) {
        uVar2 = FUN_140bed5ca();
        lVar3 = FUN_14477b664(uVar2);
        plVar5[1] = lVar3;
      }
      plVar4 = (longlong *)plVar5[2];
      if (plVar4 == (longlong *)0x0) {
        if ((lVar3 != 0) && (*plVar5 != 0)) {
          plVar4 = *(longlong **)(lVar3 + 0xb8);
          if ((plVar4 == (longlong *)0x0) ||
             (cVar1 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar1 == '\0')) {
            plVar5[2] = 0;
          }
          else {
            uVar2 = (**(code **)(*plVar4 + 0x110))(plVar4);
            plVar4 = (longlong *)FUN_144aff482(uVar2,plVar5);
            plVar5[2] = (longlong)plVar4;
            if (plVar4 != (longlong *)0x0) goto LAB_147e6b777;
          }
        }
      }
      else {
LAB_147e6b777:
        (**(code **)(*plVar4 + 0x30))(plVar4,param_2,param_3);
      }
      plVar5 = plVar5 + 10;
      lVar6 = lVar6 + -0x50;
    } while (lVar6 != 0);
  }
  if ((local_38 & 1) == 0) {
    *(int *)(local_40 + 0x28) = *(int *)(local_40 + 0x28) + -1;
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e6b81c FUN_147e6b81c body=427 status=ok
// SIG undefined FUN_147e6b81c(void)

void FUN_147e6b81c(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_88 [32];
  longlong local_68;
  char local_60;
  longlong local_58;
  longlong local_50 [3];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50[0] = param_1;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  FUN_14012a5dc(&local_68,
                *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xfd0,local_50);
  if ((local_60 == '\0') && ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34))) {
    lVar1 = *(longlong *)(param_1 + 0x18);
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar4 = (uint)lVar1 & 0xffff;
    plVar3 = param_2 + 7;
    if ((longlong *)param_2[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_2[8];
    }
    iVar5 = *(int *)((longlong)plVar3 +
                    (ulonglong)
                    ((int)param_2[9] - 1U &
                    (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar4) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar3 = (longlong *)(*param_2 + (longlong)iVar5 * 0x28);
        if (*plVar3 == lVar1) {
          if (plVar3 + 1 != (longlong *)0x0 && plVar3 != (longlong *)0x0) {
            local_58 = plVar3[1];
            FUN_1446dcdd4(local_50);
            if (DAT_14cb1d1f0 == 0) {
              if (local_38 != 0) {
                FUN_1400020a8();
              }
            }
            else {
              plVar3 = (longlong *)FUN_144837462(DAT_14cb1d1f0,local_50);
              if (local_38 != 0) {
                FUN_1400020a8();
              }
              if (plVar3 != (longlong *)0x0) {
                (**(code **)(*plVar3 + 0x30))(plVar3,param_2,param_3);
              }
            }
          }
          break;
        }
        iVar5 = (int)plVar3[4];
      } while (iVar5 != -1);
    }
  }
  if (local_60 == '\0') {
    *(int *)(local_68 + 0x28) = *(int *)(local_68 + 0x28) + -1;
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e6b9c8 FUN_147e6b9c8 body=22 status=ok
// SIG undefined FUN_147e6b9c8(void)

undefined8 FUN_147e6b9c8(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  
  plVar4 = DAT_14cb1d1d0;
  if (DAT_14cb1d1d0 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb1d1d0 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb1d1d0 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb1d1d0[0x3a] <= *(int *)((longlong)DAT_14cb1d1d0 + 0x1fc))) {
LAB_144837614:
      lVar8 = FUN_144837648(plVar4,param_1,1);
      if (lVar8 == 0) {
        return 0;
      }
      FUN_14012a344(plVar4,lVar8,0);
      puVar9 = (undefined8 *)(lVar8 + 0x30);
      goto LAB_144837566;
    }
  }
  else {
    cVar5 = (**(code **)(*DAT_14cb1d1d0 + 0x300))(DAT_14cb1d1d0);
    if (cVar5 == '\0') goto LAB_144837614;
  }
  puVar7 = (uint *)&DAT_14c948618;
  if (((*param_1 != 0) && (0 < param_1[1])) && (*param_1 != DAT_14c948000)) {
    puVar7 = (uint *)(param_1 + 2);
    if (0 < param_1[9]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
    if (1 < (uint)param_1[1]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
  }
  uVar2 = *puVar7;
  uVar3 = puVar7[2];
  uVar6 = uVar2;
  if (uVar3 != 0) {
    uVar6 = uVar3 >> 0xd ^ uVar2 - uVar3;
    uVar10 = uVar6 << 8 ^ (-0x61c88647 - uVar3) - uVar6;
    uVar13 = uVar10 >> 0xd ^ (uVar3 - uVar6) - uVar10;
    uVar6 = uVar13 >> 0xc ^ (uVar6 - uVar10) - uVar13;
    uVar15 = uVar6 << 0x10 ^ (uVar10 - uVar13) - uVar6;
    uVar10 = uVar15 >> 5 ^ (uVar13 - uVar6) - uVar15;
    uVar13 = uVar10 >> 3 ^ (uVar6 - uVar15) - uVar10;
    uVar6 = uVar13 << 10 ^ (uVar15 - uVar10) - uVar13;
    uVar6 = uVar6 >> 0xf ^ uVar10 - (uVar13 + uVar6);
  }
  if ((int)plVar4[0x3a] != *(int *)((longlong)plVar4 + 0x1fc)) {
    plVar11 = plVar4 + 0x40;
    if ((longlong *)plVar4[0x41] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar4[0x41];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar4[0x42] - 1U & uVar6) * 4);
    if (iVar12 != -1) {
      lVar8 = plVar4[0x39];
      while ((lVar14 = (longlong)iVar12 * 0x20, *(uint *)(lVar8 + lVar14) != uVar2 ||
             (lVar1 = lVar8 + lVar14, *(uint *)(lVar1 + 8) != uVar3))) {
        iVar12 = *(int *)(lVar8 + 0x18 + lVar14);
        if (iVar12 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      puVar9 = (undefined8 *)(lVar1 + 0x10);
      if (puVar9 == (undefined8 *)0x0) {
        return 0;
      }
LAB_144837566:
      return *puVar9;
    }
  }
  return 0;
}



// FUNCTION 147e6ba36 FUN_147e6ba36 body=45 status=ok
// SIG undefined FUN_147e6ba36(void)

undefined8 * FUN_147e6ba36(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ab67d10;
  if (param_2 != 0) {
    (*DAT_14c787678)(0,param_1,0);
  }
  return param_1;
}



// FUNCTION 147e6ba64 FUN_147e6ba64 body=45 status=ok
// SIG undefined FUN_147e6ba64(void)

undefined8 * FUN_147e6ba64(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ab67d10;
  if (param_2 != 0) {
    (*DAT_14c787678)(0,param_1,0);
  }
  return param_1;
}



// FUNCTION 147e6ba92 FUN_147e6ba92 body=45 status=ok
// SIG undefined FUN_147e6ba92(void)

undefined8 * FUN_147e6ba92(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ab67d10;
  if (param_2 != 0) {
    (*DAT_14c787678)(0,param_1,0);
  }
  return param_1;
}



// FUNCTION 147e6bac0 FUN_147e6bac0 body=45 status=ok
// SIG undefined FUN_147e6bac0(void)

undefined8 * FUN_147e6bac0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ab67d10;
  if (param_2 != 0) {
    (*DAT_14c787678)(0,param_1,0);
  }
  return param_1;
}



// FUNCTION 147e6baee FUN_147e6baee body=45 status=ok
// SIG undefined FUN_147e6baee(void)

undefined8 * FUN_147e6baee(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ab67d10;
  if (param_2 != 0) {
    (*DAT_14c787678)(0,param_1,0);
  }
  return param_1;
}



// FUNCTION 147e6bb1c FUN_147e6bb1c body=45 status=ok
// SIG undefined FUN_147e6bb1c(void)

undefined8 * FUN_147e6bb1c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ab67d10;
  if (param_2 != 0) {
    (*DAT_14c787678)(0,param_1,0);
  }
  return param_1;
}



// FUNCTION 147e6bb4c FUN_147e6bb4c body=29 status=ok
// SIG undefined FUN_147e6bb4c(void)

undefined8 FUN_147e6bb4c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e6bb6a FUN_147e6bb6a body=38 status=ok
// SIG undefined FUN_147e6bb6a(void)

undefined8 FUN_147e6bb6a(undefined8 param_1,int param_2)

{
  FUN_1410b361c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e6bb96 FUN_147e6bb96 body=57 status=ok
// SIG undefined FUN_147e6bb96(void)

undefined8 * FUN_147e6bb96(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aba54d8;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e6bbd0 FUN_147e6bbd0 body=38 status=ok
// SIG undefined FUN_147e6bbd0(void)

undefined8 FUN_147e6bbd0(undefined8 param_1,int param_2)

{
  FUN_147e6bc04();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e6bc04 FUN_147e6bc04 body=70 status=ok
// SIG undefined FUN_147e6bc04(void)

void FUN_147e6bc04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aba5530;
  FUN_147e6bc4a(param_1[0x2e],*(undefined4 *)(param_1 + 0x2f));
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  FUN_147e6a4b6(param_1 + 2);
  return;
}



// FUNCTION 147e6bc4a FUN_147e6bc4a body=76 status=ok
// SIG undefined FUN_147e6bc4a(void)

void FUN_147e6bc4a(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x38);
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
      plVar4 = plVar4 + 0x12;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147e6bc96 FUN_147e6bc96 body=77 status=ok
// SIG undefined FUN_147e6bc96(void)

void FUN_147e6bc96(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x1e0);
  if (*(longlong *)(param_1 + 0x1e0) == 0) {
    lVar1 = param_1;
  }
  FUN_14494a737(lVar1,*(undefined4 *)(param_1 + 0x1e8));
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  if (*(int *)(param_1 + 0x1ec) == param_2) {
    return;
  }
  FUN_147e6bce4(param_1,param_2);
  return;
}



// FUNCTION 147e6bce4 FUN_147e6bce4 body=122 status=ok
// SIG undefined FUN_147e6bce4(void)

void FUN_147e6bce4(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 4;
    if (4 < param_2) {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x78,0);
      uVar2 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar1 / 0x78)) {
        uVar2 = uVar1 / 0x78 & 0xffffffff;
      }
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0x1ec)) {
    *(int *)(param_1 + 0x1ec) = (int)uVar2;
    FUN_140105f56(param_1,*(undefined4 *)(param_1 + 0x1e8),uVar2,0x78);
    return;
  }
  return;
}



// FUNCTION 147e6bd5e FUN_147e6bd5e body=268 status=ok
// SIG undefined FUN_147e6bd5e(void)

longlong FUN_147e6bd5e(longlong *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[10] == 0) {
    FUN_144b44800(&local_68);
    lVar2 = FUN_147e6bf7e(&local_68,(longlong)param_2 + *param_1,param_3);
    FUN_144b44810(&local_68);
  }
  else {
    lVar2 = FUN_147e6bf7e(param_1[10],(longlong)param_2 + *param_1,param_3);
  }
  if (lVar2 == 0) {
    FUN_144bfd270(&local_68);
    lVar2 = FUN_147e6bee4(&local_68,(longlong)param_2 + *param_1,param_3);
    FUN_144bfd310(&local_68);
  }
  else {
    FUN_1437ef51a(&local_68,param_2,param_3,0);
    iVar1 = (int)param_1[9];
    *(uint *)(param_1 + 9) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0x4c) < iVar1 + 1U) {
      FUN_147e6779a(param_1 + 2,iVar1);
    }
    plVar3 = param_1 + 2;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    *(undefined4 *)((longlong)plVar3 + (longlong)iVar1 * 0xc + 8) = local_60;
    *(undefined8 *)((longlong)plVar3 + (longlong)iVar1 * 0xc) = local_68;
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e6be6c FUN_147e6be6c body=119 status=ok
// SIG undefined FUN_147e6be6c(void)

undefined8 * FUN_147e6be6c(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != param_2) {
    FUN_1409f51ce(param_1);
    *param_1 = *param_2;
    *param_2 = 0;
    param_1[1] = param_2[1];
    param_2[1] = 0;
    plVar2 = (longlong *)param_2[2];
    plVar3 = (longlong *)param_1[2];
    if (plVar2 != plVar3) {
      param_2[2] = 0;
      param_1[2] = plVar2;
      if (plVar3 != (longlong *)0x0) {
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
    }
  }
  return param_1;
}



// FUNCTION 147e6bee4 FUN_147e6bee4 body=153 status=ok
// SIG undefined FUN_147e6bee4(void)

longlong FUN_147e6bee4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined *local_38;
  undefined8 local_30;
  longlong local_28 [2];
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = &DAT_14c6e5d00;
  local_30 = 0;
  FUN_144b464e0(param_1,local_28,param_2,param_3);
  if (local_28[0] != 0) {
    lVar1 = FUN_147e6bffc(local_28);
    if (lVar1 != 0) goto LAB_147e6bf28;
    FUN_144becfe0(local_28,3,1);
  }
  lVar1 = 0;
LAB_147e6bf28:
  if ((local_18 & 1) != 0) {
    FUN_144be6b30(local_18 & 0xfffffffffffffffe);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e6bf7e FUN_147e6bf7e body=124 status=ok
// SIG undefined FUN_147e6bf7e(void)

undefined8 FUN_147e6bf7e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined *local_38;
  longlong local_28 [2];
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = &DAT_14c6e5d00;
  FUN_144b45ed0(param_1,local_28,param_2,param_3);
  if (local_28[0] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_147e6bffc(local_28);
  }
  if ((local_18 & 1) != 0) {
    FUN_144be6b30(local_18 & 0xfffffffffffffffe);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e6bffc FUN_147e6bffc body=112 status=ok
// SIG undefined FUN_147e6bffc(void)

undefined8 FUN_147e6bffc(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [36];
  byte local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    uVar2 = *param_1;
    cVar3 = FUN_144b45dd0(lVar1,&DAT_14c6e5d00);
    if (cVar3 != '\0') {
      FUN_144b45d50(lVar1,local_24);
      uVar4 = 0;
      if ((local_24[0] & 8) == 0) {
        uVar4 = uVar2;
      }
      goto LAB_147e6c04e;
    }
  }
  uVar4 = 0;
LAB_147e6c04e:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 147e6c06e FUN_147e6c06e body=246 status=ok
// SIG undefined FUN_147e6c06e(void)

undefined8 FUN_147e6c06e(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58;
  ulonglong local_50;
  undefined8 local_48;
  longlong lStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = 0;
  if (param_3 == (longlong *)0x0) {
    local_48 = 0;
    lStack_40 = 0;
  }
  else if ((undefined8 *)*param_3 == (undefined8 *)0x0) {
    FUN_144beec10(&local_48,param_3,&DAT_14c6e5d00);
  }
  else {
    (**(code **)*param_3)(param_3,&local_48);
  }
  local_60 = local_48;
  local_58 = lStack_40;
  if (lStack_40 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144befdb0();
    if ((uVar1 & 1) != 0) {
      FUN_144be6b20(uVar1 & 0xfffffffffffffffe);
    }
  }
  local_50 = uVar1;
  FUN_144bfe540(param_1,param_2,&local_60,param_4);
  if ((local_50 & 1) != 0) {
    FUN_144be6b30(local_50 & 0xfffffffffffffffe);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e6c166 FUN_147e6c166 body=107 status=ok
// SIG undefined FUN_147e6c166(void)

/* WARNING: Removing unreachable block (ram,0x000147e6c198) */
/* WARNING: Removing unreachable block (ram,0x000147e6c174) */
/* WARNING: Removing unreachable block (ram,0x000147e6c18a) */
/* WARNING: Removing unreachable block (ram,0x000147e6c1a3) */
/* WARNING: Removing unreachable block (ram,0x000147e6c18c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147e6c166(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_14cb1d060;
  LOCK();
  UNLOCK();
  DAT_14cb1d060 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    _DAT_14cb1d068 = _DAT_14cb1d068 + -1;
    UNLOCK();
    do {
      puVar1 = (undefined8 *)*puVar2;
      if (puVar2[2] != 0) {
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
    LOCK();
    _DAT_14cb1d068 = _DAT_14cb1d068 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 147e6c1d2 FUN_147e6c1d2 body=48 status=ok
// SIG undefined FUN_147e6c1d2(void)

void FUN_147e6c1d2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x30,8);
  }
  return;
}



// FUNCTION 147e6c202 FUN_147e6c202 body=351 status=ok
// SIG undefined FUN_147e6c202(void)

longlong * FUN_147e6c202(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)*(int *)(param_2 + 0x1e8) * 0x78,
             (longlong)*(int *)(param_2 + 0x1ec) * 0x78);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 0x1e8);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_147e6bc96(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x22222 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 0x1e8) = local_2c;
    lVar6 = 0;
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(param_2 + 0x1e0);
      if (*(longlong *)(param_2 + 0x1e0) == 0) {
        lVar4 = param_2;
      }
      FUN_147e6a25b(param_1,lVar4 + lVar6);
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x78;
    } while (lVar7 < *(int *)(param_2 + 0x1e8));
  }
  else {
    FUN_147e6bc96(param_2);
    if (0 < (int)local_2c) {
      iVar5 = 0;
      do {
        uVar3 = FUN_1407d3788(param_2);
        FUN_147e6a25b(param_1,uVar3);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147e6c362 FUN_147e6c362 body=147 status=ok
// SIG undefined FUN_147e6c362(void)

void FUN_147e6c362(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x90,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x90)) {
      uVar5 = uVar4 / 0x90 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x90,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147e6c3f6 FUN_147e6c3f6 body=71 status=ok
// SIG undefined FUN_147e6c3f6(void)

void FUN_147e6c3f6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x940);
  if (*(longlong *)(param_1 + 0x940) == 0) {
    lVar1 = param_1;
  }
  FUN_14494a6e2(lVar1,*(undefined4 *)(param_1 + 0x948));
  *(undefined4 *)(param_1 + 0x948) = 0;
  if (*(int *)(param_1 + 0x94c) == 0) {
    return;
  }
  FUN_147e6c43e(param_1);
  return;
}



// FUNCTION 147e6c43e FUN_147e6c43e body=93 status=ok
// SIG undefined FUN_147e6c43e(void)

void FUN_147e6c43e(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x94c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x94c) = 0;
    if (*(void **)((longlong)param_1 + 0x940) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x940),
              (longlong)*(int *)((longlong)param_1 + 0x948) * 0x128);
      FUN_1446efa72((longlong)param_1 + 0x940,0,0,0x128);
      return;
    }
  }
  return;
}



// FUNCTION 147e6c49c FUN_147e6c49c body=104 status=ok
// SIG undefined FUN_147e6c49c(void)

undefined8 * FUN_147e6c49c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  switch(*(undefined1 *)(param_1 + 0x24)) {
  case 0:
  case 1:
  case 3:
    *(undefined1 *)(param_1 + 0x24) = 0xff;
    break;
  case 2:
    *(undefined1 *)(param_1 + 0x24) = 0xff;
    FUN_140302978(param_1);
  }
  param_1[4] = param_2[4];
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 0x24) = 0;
  return param_1;
}



// FUNCTION 147e6c504 FUN_147e6c504 body=252 status=ok
// SIG undefined FUN_147e6c504(void)

undefined8 * FUN_147e6c504(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  switch(*(undefined1 *)(param_1 + 0x24)) {
  case 0:
  case 1:
  case 3:
    *(undefined1 *)(param_1 + 0x24) = 0xff;
    break;
  case 2:
    *(undefined1 *)(param_1 + 0x24) = 0xff;
    FUN_140302978(param_1);
  }
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  puVar5 = param_2 + 2;
  puVar6 = param_1 + 2;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  param_1[0xe] = param_2[0xe];
  lVar4 = param_2[0xf];
  param_1[0xf] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  puVar5 = param_2 + 0x11;
  puVar6 = param_1 + 0x11;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  param_1[0x1d] = param_2[0x1d];
  lVar4 = param_2[0x1e];
  param_1[0x1e] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)(param_2 + 0x1f);
  uVar1 = param_2[0x21];
  uVar2 = *(undefined8 *)((longlong)param_2 + 0x10d);
  uVar3 = *(undefined8 *)((longlong)param_2 + 0x115);
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x10d) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x115) = uVar3;
  *(undefined1 *)(param_1 + 0x24) = 2;
  return param_1;
}



// FUNCTION 147e6c600 FUN_147e6c600 body=110 status=ok
// SIG undefined FUN_147e6c600(void)

void FUN_147e6c600(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x2c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x2c) = iVar5;
    FUN_147e6c670(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147e6c670 FUN_147e6c670 body=132 status=ok
// SIG undefined FUN_147e6c670(void)

void FUN_147e6c670(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,8);
  return;
}



// FUNCTION 147e6c6f4 FUN_147e6c6f4 body=210 status=ok
// SIG undefined FUN_147e6c6f4(void)

undefined4 FUN_147e6c6f4(undefined8 param_1)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined4 uVar3;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [40];
  undefined4 local_60;
  undefined8 **local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88[0] = 0;
  local_60 = 0;
  FUN_1456bb102(local_88);
  FUN_1447c3578(param_1,local_58,local_88);
  uVar3 = FUN_144a7ecd0(local_58);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_58;
    if (0x18 < local_40) {
      pppuVar2 = (undefined8 ***)local_58[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58[0]);
  }
  FUN_144a5ac3a(local_88);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e6c7c8 FUN_147e6c7c8 body=473 status=ok
// SIG undefined FUN_147e6c7c8(void)

void FUN_147e6c7c8(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar6 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x28);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x24 + lVar6 * 0x28) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar6 * 0x28) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e6c9b4 FUN_147e6c9b4 body=93 status=ok
// SIG undefined FUN_147e6c9b4(void)

void FUN_147e6c9b4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aba5670;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14aba5600;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147e6ca12 FUN_147e6ca12 body=126 status=ok
// SIG undefined FUN_147e6ca12(void)

void FUN_147e6ca12(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14aba5670;
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)&p_Var1->CriticalSection = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)&p_Var1->CriticalSection + 4) = uVar2;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Flink = uVar3;
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Flink + 4) = uVar4;
  *(undefined ***)p_Var1 = &PTR_FUN_14aba5600;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e6ca81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e6ca9e FUN_147e6ca9e body=375 status=ok
// SIG undefined FUN_147e6ca9e(void)

void FUN_147e6ca9e(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1470dde52();
  lVar3 = *(longlong *)(param_1 + 0x400);
  iVar6 = 0;
  if (lVar3 == 0) {
    iVar7 = 0;
    iVar10 = 0;
    iVar9 = 0;
  }
  else {
    lVar4 = *(longlong *)(lVar3 + 0x3a0);
    iVar7 = 0;
    iVar10 = 0;
    iVar9 = 0;
    iVar6 = 0;
    if (lVar4 != 0) {
      iVar9 = *(int *)(lVar4 + 0x684);
      iVar10 = *(int *)(lVar4 + 0x688);
      iVar7 = *(int *)(lVar4 + 0x68c);
      iVar6 = *(int *)(lVar4 + 0x690);
    }
  }
  *(int *)(param_1 + 0x420) = iVar9;
  *(int *)(param_1 + 0x424) = iVar10;
  *(int *)(param_1 + 0x428) = iVar7;
  *(int *)(param_1 + 0x42c) = iVar6;
  if (((((iVar7 == 0 && iVar6 == 0) && iVar10 == 0) && iVar9 == 0) || (lVar3 == 0)) ||
     (lVar3 = *(longlong *)(lVar3 + 0x3a0), lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  uVar5 = FUN_1447210f0(param_1);
  FUN_141246736(&local_30,uVar5);
  if (local_28 != (longlong *)0x0) {
    iVar6 = (int)local_28[1];
    do {
      if (iVar6 == 0) {
        plVar8 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar9 = (int)local_28[1];
      bVar11 = iVar6 == iVar9;
      if (bVar11) {
        *(int *)(local_28 + 1) = iVar6 + 1;
        iVar9 = iVar6;
      }
      iVar6 = iVar9;
      UNLOCK();
      plVar8 = local_28;
    } while (!bVar11);
    LOCK();
    piVar1 = (int *)((longlong)local_28 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
    if (plVar8 != (longlong *)0x0) {
      if (local_30 == 0) {
        FUN_1470ddf8e(param_1);
      }
      else {
        FUN_147e40466(local_30 + 0x378,1);
        FUN_143813148(lVar3);
      }
      LOCK();
      plVar2 = plVar8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
      goto LAB_147e6cbfc;
    }
  }
  FUN_1470ddf8e(param_1);
LAB_147e6cbfc:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e6cc26 FUN_147e6cc26 body=386 status=ok
// SIG undefined FUN_147e6cc26(void)

void FUN_147e6cc26(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  uint local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar3 = 0;
  if (*(longlong *)(param_1 + 0x400) == 0) {
    iVar4 = 0;
    iVar5 = 0;
    iVar6 = 0;
  }
  else {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x400) + 0x3a0);
    iVar4 = 0;
    iVar5 = 0;
    iVar6 = 0;
    iVar3 = 0;
    if (lVar2 != 0) {
      iVar3 = *(int *)(lVar2 + 0x684);
      iVar4 = *(int *)(lVar2 + 0x688);
      iVar5 = *(int *)(lVar2 + 0x68c);
      iVar6 = *(int *)(lVar2 + 0x690);
    }
  }
  if ((((iVar3 != *(int *)(param_1 + 0x420)) || (iVar4 != *(int *)(param_1 + 0x424))) ||
      (iVar5 != *(int *)(param_1 + 0x428))) || (iVar6 != *(int *)(param_1 + 0x42c))) {
    if (((iVar4 == 0 && iVar3 == 0) && iVar5 == 0) && iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
    FUN_147e6cdb8(param_1,&local_28);
    uVar1 = *(uint *)(param_1 + 0x418);
    if (uVar1 == local_20) {
      if (0 < (int)uVar1) {
        lVar2 = *(longlong *)(param_1 + 0x410);
        lVar7 = 0;
        do {
          if (((0.10000000149011612 <
                ABS(*(double *)(local_28 + lVar7) - *(double *)(lVar2 + lVar7))) ||
              (0.10000000149011612 <
               ABS(*(double *)(local_28 + 8 + lVar7) - *(double *)(lVar2 + 8 + lVar7)))) ||
             (0.10000000149011612 <
              ABS(*(double *)(local_28 + 0x10 + lVar7) - *(double *)(lVar2 + 0x10 + lVar7))))
          goto LAB_147e6cd97;
          lVar7 = lVar7 + 0x18;
        } while ((ulonglong)uVar1 * 0x18 != lVar7);
      }
      FUN_1470de156(param_1);
    }
    else {
LAB_147e6cd97:
      FUN_1470ddf8e(param_1);
    }
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e6cdb8 FUN_147e6cdb8 body=297 status=ok
// SIG undefined FUN_147e6cdb8(void)

longlong * FUN_147e6cdb8(longlong param_1,longlong *param_2)

{
  float *pfVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (((*(longlong *)(param_1 + 0x400) != 0) &&
      (lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x400) + 0x3a0), lVar11 != 0)) &&
     (*(int *)(lVar11 + 0x658) != 0)) {
    plVar5 = *(longlong **)(lVar11 + 0x650);
    lVar11 = *plVar5;
    if (lVar11 != 0) {
      uVar3 = *(uint *)(lVar11 + 0x40);
      uVar10 = (ulonglong)uVar3;
      if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar10);
      }
      if (uVar10 != 0) {
        FUN_1447a8aa0(param_2,uVar10);
        lVar11 = 0;
        do {
          lVar9 = *(longlong *)(*plVar5 + 0x38);
          pfVar1 = (float *)(lVar9 + lVar11);
          fVar7 = *pfVar1;
          fVar8 = pfVar1[1];
          fVar2 = *(float *)(lVar9 + 8 + lVar11);
          iVar4 = (int)param_2[1];
          lVar9 = (longlong)iVar4;
          *(uint *)(param_2 + 1) = iVar4 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
            FUN_1403e3958(param_2,iVar4);
          }
          lVar6 = *param_2;
          *(double *)(lVar6 + lVar9 * 0x18) = (double)fVar7 * 100.0;
          *(double *)(lVar6 + 8 + lVar9 * 0x18) = (double)fVar8 * 100.0;
          *(double *)(lVar6 + 0x10 + lVar9 * 0x18) = (double)fVar2 * 100.0;
          lVar11 = lVar11 + 0x10;
        } while (uVar10 << 4 != lVar11);
      }
    }
  }
  return param_2;
}



// FUNCTION 147e6cee2 FUN_147e6cee2 body=185 status=ok
// SIG undefined FUN_147e6cee2(void)

void FUN_147e6cee2(undefined8 param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1470de2a6();
  uVar5 = FUN_1447210f0(param_1);
  FUN_141246736(&local_20,uVar5);
  if (local_18 != (longlong *)0x0) {
    iVar4 = (int)local_18[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_18[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(local_18 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = local_18;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)local_18 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_18 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      if (local_20 != 0) {
        FUN_147e40466(local_20 + 0x378,0);
      }
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e6cfd2 FUN_147e6cfd2 body=272 status=ok
// SIG undefined FUN_147e6cfd2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_147e6cfd2(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14abb6ed0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  uVar4 = _DAT_14cb1d698;
  param_1[0xe] = _DAT_14cb1d690;
  param_1[0xf] = uVar4;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 2;
  *(uint *)(param_1 + 0x13) = *(uint *)(param_1 + 0x13) & 0xfffffc0f | 0xd0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x7fefffff;
  *(undefined4 *)(param_1 + 0x17) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x7fefffff;
  param_1[0x1b] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 0x19) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x7fefffff;
  *(undefined4 *)(param_1 + 0x1a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x7fefffff;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(byte *)((longlong)param_1 + 0xfc) = *(byte *)((longlong)param_1 + 0xfc) | 3;
  param_1[0x20] = 0xbff0000000000000;
  *(undefined4 *)(param_1 + 0x21) = 0xbf800000;
  param_1[0x24] = DAT_14c8464f0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x22) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x114) = uVar1;
  *(undefined4 *)(param_1 + 0x23) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x11c) = uVar3;
  FUN_147e73d72(param_1);
  return param_1;
}



// FUNCTION 147e6d0e2 FUN_147e6d0e2 body=34 status=ok
// SIG undefined FUN_147e6d0e2(void)

void FUN_147e6d0e2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14abb3a00;
  return;
}



// FUNCTION 147e6d104 FUN_147e6d104 body=534 status=ok
// SIG undefined FUN_147e6d104(void)

longlong * FUN_147e6d104(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar7 = FUN_14479d2ce(param_3 + 0x58);
  if (lVar7 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    uVar6 = 1;
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    lVar8 = *(longlong *)(param_3 + 0x60);
    if (lVar8 == 0) {
      FUN_147e6d4c6(lVar7,&local_58,param_3);
      plVar10 = (longlong *)CONCAT44(uStack_54,local_58);
      *param_1 = (longlong)plVar10;
      if (CONCAT44(uStack_4c,uStack_50) != 0) {
        param_1[1] = CONCAT44(uStack_4c,uStack_50);
      }
    }
    else {
      lVar7 = *(longlong *)(param_3 + 0x68);
      if (lVar7 == 0) {
        *param_1 = lVar8;
        param_1[1] = 0;
      }
      else {
        LOCK();
        *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
        UNLOCK();
        plVar10 = (longlong *)param_1[1];
        *param_1 = lVar8;
        param_1[1] = lVar7;
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar10 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar2 = (int *)((longlong)plVar10 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
        }
      }
      plVar10 = (longlong *)*param_1;
      (**(code **)(*plVar10 + 8))(plVar10);
    }
    uVar5 = *(uint *)((longlong)plVar10 + 0x34);
    if ((int)uVar5 < 0) {
      *(undefined4 *)(plVar10 + 6) = 0;
      FUN_147e81cb6(plVar10 + 5,0);
      plVar10 = (longlong *)*param_1;
      iVar11 = (int)plVar10[6];
      uVar5 = *(uint *)((longlong)plVar10 + 0x34);
    }
    else {
      *(undefined4 *)(plVar10 + 6) = 0;
      iVar11 = 0;
    }
    local_48 = *(undefined8 *)(param_3 + 0x18);
    local_58 = *(undefined4 *)(param_3 + 8);
    uStack_54 = *(undefined4 *)(param_3 + 0xc);
    uStack_50 = *(undefined4 *)(param_3 + 0x10);
    uStack_4c = *(undefined4 *)(param_3 + 0x14);
    *(uint *)(plVar10 + 6) = iVar11 + 1U;
    if (uVar5 < iVar11 + 1U) {
      FUN_147e81d28(plVar10 + 5,iVar11);
    }
    lVar7 = plVar10[5];
    lVar8 = (longlong)iVar11 * 0x30;
    *(undefined8 *)(lVar7 + 0x10 + lVar8) = local_48;
    *(undefined8 *)(lVar7 + lVar8) = CONCAT44(uStack_54,local_58);
    ((undefined8 *)(lVar7 + lVar8))[1] = CONCAT44(uStack_4c,uStack_50);
    puVar4 = (undefined8 *)(lVar7 + 0x18 + lVar8);
    *puVar4 = 0;
    puVar4[1] = 0;
    *(undefined8 *)(lVar7 + 0x28 + lVar8) = 0;
    lVar7 = *param_1;
    local_48 = *(undefined8 *)(param_3 + 0x30);
    local_58 = *(undefined4 *)(param_3 + 0x20);
    uStack_54 = *(undefined4 *)(param_3 + 0x24);
    uStack_50 = *(undefined4 *)(param_3 + 0x28);
    uStack_4c = *(undefined4 *)(param_3 + 0x2c);
    iVar11 = *(int *)(lVar7 + 0x30);
    *(uint *)(lVar7 + 0x30) = iVar11 + 1U;
    if (*(uint *)(lVar7 + 0x34) < iVar11 + 1U) {
      FUN_147e81d28(lVar7 + 0x28,iVar11);
    }
    lVar8 = *(longlong *)(lVar7 + 0x28);
    lVar9 = (longlong)iVar11 * 0x30;
    *(undefined8 *)(lVar8 + 0x10 + lVar9) = local_48;
    puVar3 = (undefined4 *)(lVar8 + lVar9);
    *puVar3 = local_58;
    puVar3[1] = uStack_54;
    puVar3[2] = uStack_50;
    puVar3[3] = uStack_4c;
    puVar4 = (undefined8 *)(lVar8 + 0x18 + lVar9);
    *puVar4 = 0;
    puVar4[1] = 0;
    *(undefined8 *)(lVar8 + 0x28 + lVar9) = 0;
    *(byte *)(lVar7 + 0x98) = *(byte *)(lVar7 + 0x98) | 2;
    uVar6 = 3;
  }
  *(undefined4 *)(param_1 + 2) = uVar6;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e6d320 FUN_147e6d320 body=56 status=ok
// SIG undefined FUN_147e6d320(void)

undefined8 FUN_147e6d320(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong in_stack_00000030;
  
  plVar3 = *(longlong **)(in_stack_00000030 + 8);
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
  return 0;
}



// FUNCTION 147e6d358 FUN_147e6d358 body=179 status=ok
// SIG undefined FUN_147e6d358(void)

void FUN_147e6d358(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  
  puVar4 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar4 = &PTR_FUN_14abb3a00;
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14abb5160;
  plVar5[2] = (longlong)puVar4;
  *(undefined8 **)(param_1 + 0x10) = puVar4;
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar5 == plVar3) {
    if (plVar5 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) {
      return;
    }
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar5;
  }
  else {
    *(longlong **)(param_1 + 0x18) = plVar5;
    if (plVar3 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar5 = plVar3 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) {
      return;
    }
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 != 0) {
    return;
  }
  (**(code **)(*plVar3 + 0x10))(plVar3);
  return;
}



// FUNCTION 147e6d40c FUN_147e6d40c body=138 status=ok
// SIG undefined FUN_147e6d40c(void)

uint FUN_147e6d40c(longlong param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  
  FUN_1401b2056();
  cVar2 = FUN_147e705f6(param_1);
  *(byte *)(param_1 + 0x61) = *(byte *)(param_1 + 0x61) & 0xf7 | cVar2 << 3;
  FUN_147e70770(param_1);
  FUN_144757f48(param_1,0x40);
  FUN_144757f48(param_1,0x40000000);
  uVar1 = *(uint *)(param_1 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar4 = 0;
  }
  do {
    uVar1 = *(uint *)(lVar4 + 8);
    if ((uVar1 >> 0x15 & 1) != 0) {
      return uVar1;
    }
    LOCK();
    uVar3 = *(uint *)(lVar4 + 8);
    bVar5 = uVar1 == uVar3;
    if (bVar5) {
      *(uint *)(lVar4 + 8) = uVar1 | 0x200000;
      uVar3 = uVar1;
    }
    UNLOCK();
  } while (!bVar5);
  return uVar3;
}



// FUNCTION 147e6d496 FUN_147e6d496 body=48 status=ok
// SIG undefined FUN_147e6d496(void)

void FUN_147e6d496(longlong param_1)

{
  char cVar1;
  
  FUN_1401b2056();
  cVar1 = FUN_147e705f6(param_1);
  *(byte *)(param_1 + 0x61) = *(byte *)(param_1 + 0x61) & 0xf7 | cVar1 << 3;
  FUN_147e70770(param_1);
  return;
}



// FUNCTION 147e6d4c6 FUN_147e6d4c6 body=461 status=ok
// SIG undefined FUN_147e6d4c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_147e6d4c6(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar4 = (undefined8 *)FUN_14001cc68(0x128,0x10);
  FUN_147e6cfd2(puVar4);
  *puVar4 = &PTR_FUN_14aba8960;
  uVar3 = uRam000000014cb1d3e4;
  uVar9 = _DAT_14cb1d3e0;
  uVar8 = uRam000000014cb1d3dc;
  *(undefined4 *)(puVar4 + 0xe) = DAT_14cb1d3d8;
  *(undefined4 *)((longlong)puVar4 + 0x74) = uVar8;
  *(undefined4 *)(puVar4 + 0xf) = uVar9;
  *(undefined4 *)((longlong)puVar4 + 0x7c) = uVar3;
  *param_2 = (longlong)puVar4;
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14abb5180;
  plVar5[2] = (longlong)puVar4;
  param_2[1] = (longlong)plVar5;
  if ((puVar4 == (undefined8 *)0x0) ||
     (((puVar4[1] != 0 && (puVar4[2] != 0)) && (0 < *(int *)(puVar4[2] + 8))))) goto LAB_147e6d557;
  if (plVar5 == (longlong *)0x0) {
    puVar4[1] = puVar4;
    plVar7 = (longlong *)puVar4[2];
    if (plVar7 == (longlong *)0x0) goto LAB_147e6d557;
LAB_147e6d623:
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    puVar4[2] = plVar5;
    if (plVar5 == (longlong *)0x0) goto LAB_147e6d557;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    puVar4[1] = puVar4;
    if ((longlong *)puVar4[2] != plVar5) {
      LOCK();
      *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
      UNLOCK();
      plVar7 = (longlong *)puVar4[2];
      if (plVar7 != (longlong *)0x0) goto LAB_147e6d623;
      puVar4[2] = plVar5;
    }
  }
  LOCK();
  plVar7 = plVar5 + 1;
  *(int *)plVar7 = (int)*plVar7 + -1;
  UNLOCK();
  if ((int)*plVar7 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
LAB_147e6d557:
  lVar2 = *param_2;
  local_38 = 0;
  FUN_14485c47a(&local_38,param_1);
  *(undefined8 *)(lVar2 + 0x9c) = local_38;
  FUN_147e81c30(lVar2 + 0xa8,param_3);
  lVar6 = FUN_1447210f0(param_1);
  uVar8 = 0;
  uVar9 = 0;
  if (lVar6 != 0) {
    uVar8 = (undefined4)*(undefined8 *)(lVar6 + 0x6d0);
    uVar9 = (undefined4)((ulonglong)*(undefined8 *)(lVar6 + 0x6d0) >> 0x20);
  }
  *(ulonglong *)(lVar2 + 0x100) = CONCAT44(uVar9,uVar8);
  local_40 = param_2[1];
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  local_48 = lVar2;
  FUN_147e70b54(param_1,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147e6d712 FUN_147e6d712 body=125 status=ok
// SIG undefined FUN_147e6d712(void)

void FUN_147e6d712(longlong param_1,longlong *param_2)

{
  undefined1 auStack_1b8 [32];
  undefined **local_198;
  longlong local_190;
  undefined ***local_188;
  undefined8 **local_180;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_190 = *(longlong *)(*param_2 + 8);
  if (((*(byte *)(local_190 + 0x28) & 4) != 0) && (-1 < (int)*(uint *)(param_1 + 0x3c))) {
    *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 0x80000000;
  }
  local_180 = &local_188;
  local_198 = &PTR_FUN_149e37810;
  local_188 = &local_198;
  switchD_143c3d4dc::caseD_20();
  if ((local_8 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e6d790 FUN_147e6d790 body=120 status=ok
// SIG undefined FUN_147e6d790(void)

void FUN_147e6d790(longlong param_1,longlong param_2)

{
  undefined1 auStack_1b8 [32];
  undefined **local_198;
  longlong local_190;
  undefined ***local_188;
  undefined8 **local_180;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (((*(byte *)(param_2 + 0x28) & 4) != 0) && (-1 < (int)*(uint *)(param_1 + 0x3c))) {
    *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 0x80000000;
  }
  local_180 = &local_188;
  local_198 = &PTR_FUN_149e37810;
  local_188 = &local_198;
  local_190 = param_2;
  switchD_143c3d4dc::caseD_20(param_1,local_180);
  if ((local_8 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e6d80a FUN_147e6d80a body=26 status=ok
// SIG undefined FUN_147e6d80a(void)

void FUN_147e6d80a(undefined8 param_1)

{
  FUN_1446e0b6e();
  FUN_14583af9a(param_1);
  return;
}



// FUNCTION 147e6d824 FUN_147e6d824 body=163 status=ok
// SIG undefined FUN_147e6d824(void)

void FUN_147e6d824(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  uint local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1458faff8(&local_30);
  uVar1 = (ulonglong)local_20;
  if ((-1 < (int)local_20) && ((int)local_20 < local_28)) {
    do {
      FUN_147e78394(*(undefined8 *)(local_30 + (uVar1 & 0xffffffff) * 8),param_1);
      uVar1 = (longlong)(int)local_20;
      do {
        uVar2 = uVar1;
        uVar1 = uVar2 + 1;
        local_20 = (uint)uVar1;
        if ((longlong)local_28 <= (longlong)uVar1) break;
      } while (*(longlong *)(local_30 + uVar1 * 8) == 0);
    } while ((-2 < (longlong)uVar2) && ((int)local_20 < local_28));
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e6d8c8 FUN_147e6d8c8 body=75 status=ok
// SIG undefined FUN_147e6d8c8(void)

undefined4 * FUN_147e6d8c8(undefined4 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  if (param_2 == (longlong *)0x0) {
    puVar1 = &DAT_149e1e2f4;
  }
  else {
    lVar2 = param_2[0x22];
    if (lVar2 == 0) {
      (**(code **)(*param_2 + 1000))(param_2);
      lVar2 = param_2[0x22];
    }
    puVar1 = (undefined4 *)(lVar2 + 0x38);
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 147e6d914 FUN_147e6d914 body=184 status=ok
// SIG undefined FUN_147e6d914(void)

void FUN_147e6d914(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    lVar2 = FUN_1410e186c();
    if ((((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
         lVar2 + 0x30)) && (lVar1 = *param_2, lVar1 != 0)) {
      lVar2 = FUN_1410e186c();
      if (((lVar2 == 0) || (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30)) {
        param_2 = (longlong *)0x0;
      }
      else {
        param_2 = (longlong *)*param_2;
      }
      plVar3 = (longlong *)param_2[0x22];
      if (plVar3 == (longlong *)0x0) {
        (**(code **)(*param_2 + 1000))(param_2);
        plVar3 = (longlong *)param_2[0x22];
      }
      *(int *)(param_1 + 0x30) = (int)plVar3[6];
      uVar4 = (**(code **)(*plVar3 + 0x2c0))(plVar3);
      *(undefined4 *)(param_1 + 0x34) = uVar4;
      *(undefined2 *)(param_1 + 0x44) = *(undefined2 *)((longlong)plVar3 + 0x44);
      *(int *)(param_1 + 0x38) = (int)plVar3[7];
    }
  }
  return;
}



// FUNCTION 147e6d9d4 FUN_147e6d9d4 body=345 status=ok
// SIG undefined FUN_147e6d9d4(void)

longlong * FUN_147e6d9d4(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)FUN_1409035a4();
  lVar4 = plVar2[0x22];
  if (lVar4 == 0) {
    (**(code **)(*plVar2 + 1000))(plVar2);
    lVar4 = plVar2[0x22];
    if (lVar4 == 0) goto switchD_147e6da4a_default;
  }
  uVar1 = FUN_147e6db2e(lVar4,param_4);
  switch(uVar1) {
  case 0:
    plVar2 = (longlong *)(param_1 + 0x48);
    break;
  case 1:
    plVar2 = (longlong *)(param_1 + 0x50);
    break;
  case 2:
    plVar2 = (longlong *)(param_1 + 0x58);
    break;
  case 3:
    plVar2 = (longlong *)(param_1 + 0x60);
    break;
  case 4:
    plVar2 = (longlong *)(param_1 + 0x68);
    break;
  case 5:
    plVar2 = (longlong *)(param_1 + 0x70);
    break;
  case 6:
    plVar2 = (longlong *)(param_1 + 0x78);
    break;
  case 7:
    plVar2 = (longlong *)(param_1 + 0x80);
    break;
  case 8:
    plVar2 = (longlong *)(param_1 + 0x88);
    break;
  case 9:
    plVar2 = (longlong *)(param_1 + 0x90);
    break;
  case 10:
    plVar2 = (longlong *)(param_1 + 0x98);
    break;
  case 0xb:
    plVar2 = (longlong *)(param_1 + 0xa0);
    break;
  case 0xc:
    plVar2 = (longlong *)(param_1 + 0xa8);
    break;
  case 0xd:
    plVar2 = (longlong *)(param_1 + 0xb0);
    break;
  case 0xe:
    plVar2 = (longlong *)(param_1 + 0xb8);
    break;
  case 0xf:
    plVar2 = (longlong *)(param_1 + 0xc0);
    break;
  default:
    goto switchD_147e6da4a_default;
  }
  if (DAT_14c950c29 != '\0') {
    if (*plVar2 == 0) goto switchD_147e6da4a_default;
    FUN_1456cec3c();
  }
  lVar4 = *plVar2;
  if ((((lVar4 != 0) && (lVar3 = FUN_1410e186c(), lVar3 != 0)) &&
      (*(int *)(lVar3 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
     (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
      lVar3 + 0x30)) {
    *param_2 = lVar4;
    if (DAT_14c950c29 != '\x01') {
      return param_2;
    }
    FUN_1456cec3c(lVar4);
    return param_2;
  }
switchD_147e6da4a_default:
  FUN_1478c98a7(param_2);
  return param_2;
}



// FUNCTION 147e6db2e FUN_147e6db2e body=301 status=ok
// SIG undefined FUN_147e6db2e(void)

ulonglong FUN_147e6db2e(longlong param_1,longlong param_2)

{
  float fVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar4 = 0;
  if ((*(int *)(param_1 + 0x98) != 1) && (uVar4 = 0xffffffff, 0 < *(int *)(param_1 + 0x98))) {
    lVar6 = 0x18;
    uVar5 = 0;
    do {
      cVar3 = FUN_1478cda0a(*(longlong *)(param_1 + 0x90) + lVar6 + -0x18);
      if ((((cVar3 != '\0') &&
           (lVar2 = *(longlong *)(param_1 + 0x90),
           ABS(*(float *)(lVar2 + -0x14 + lVar6) - *(float *)(param_2 + 4)) < 5.0)) &&
          (ABS(*(float *)(lVar2 + -0x10 + lVar6) - *(float *)(param_2 + 8)) < 5.0)) &&
         (((fVar1 = *(float *)(lVar2 + -0xc + lVar6), fVar1 < 0.0 ||
           (*(float *)(param_2 + 0xc) < 0.0)) || (ABS(fVar1 - *(float *)(param_2 + 0xc)) < 5.0)))) {
        cVar3 = FUN_144a7afa6((longlong *)(lVar2 + lVar6),(longlong *)(param_2 + 0x18));
        if (((cVar3 != '\0') || (*(longlong *)(lVar2 + lVar6) == 0)) ||
           (*(longlong *)(param_2 + 0x18) == 0)) {
          return uVar5 & 0xffffffff;
        }
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x88;
    } while ((longlong)uVar5 < (longlong)*(int *)(param_1 + 0x98));
  }
  return uVar4;
}



// FUNCTION 147e6dc8c FUN_147e6dc8c body=1544 status=ok
// SIG undefined FUN_147e6dc8c(void)

void FUN_147e6dc8c(longlong param_1)

{
  undefined4 *puVar1;
  double *pdVar2;
  undefined8 *puVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_218 [32];
  undefined **local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  byte local_1e0;
  undefined1 local_1df;
  undefined4 local_1d8;
  undefined ***local_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  longlong local_178;
  undefined8 uStack_170;
  longlong local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  int iStack_120;
  undefined4 uStack_11c;
  undefined1 uStack_118;
  undefined8 uStack_117;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_143831374();
  lVar12 = *(longlong *)(param_1 + 0x20);
  if (lVar12 != 0) {
    lVar11 = FUN_1406d0862();
    if ((((*(int *)(lVar11 + 0x38) <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar11 + 0x38) * 8) == lVar11 + 0x30)) &&
        ((*(byte *)(param_1 + 0xe0) & 1) != 0)) && (*(longlong *)(lVar12 + 0x188) != 0)) {
      FUN_147e899b3(*(longlong *)(lVar12 + 0x188),param_1);
    }
  }
  uStack_118 = 0;
  uStack_117 = 0;
  local_128 = 0;
  iStack_120 = 0;
  uStack_11c = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0;
  uStack_180 = 0;
  if (0 < *(int *)(param_1 + 0xd0)) {
    lVar11 = 0x28;
    lVar12 = 0;
    do {
      lVar13 = *(longlong *)(param_1 + 200);
      dVar4 = *(double *)(lVar13 + -0x10 + lVar11);
      local_198 = (float)(dVar4 + dVar4);
      dVar4 = *(double *)(lVar13 + -8 + lVar11);
      fStack_194 = (float)(dVar4 + dVar4);
      fStack_190 = (float)(*(double *)(lVar13 + lVar11) + *(double *)(lVar13 + lVar11));
      local_1f0 = 0;
      uStack_1ec = 0;
      uStack_1e8 = 0;
      uStack_1e4 = 1;
      local_1e0 = local_1e0 | 1;
      local_1df = 3;
      local_1d8 = 6;
      local_1d0 = &local_1f8;
      local_1f8 = &PTR_FUN_14a1e3c70;
      local_1b8 = (double)DAT_14c8464f0;
      local_1c8._0_8_ = DAT_14c8464e0;
      local_1c8._8_8_ = DAT_14c8464e8;
      uStack_1a0 = (undefined4)DAT_14c846508;
      uStack_19c = (undefined4)((ulonglong)DAT_14c846508 >> 0x20);
      uStack_1b0 = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
      uStack_1a8 = CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
      dVar4 = *(double *)(lVar13 + -0x18 + lVar11);
      auVar8 = *(undefined1 (*) [16])(lVar13 + -0x28 + lVar11);
      local_e8 = 0;
      uStack_e0 = 0;
      local_d8 = 0;
      uStack_d4 = 0;
      uStack_d0 = 0;
      uStack_cc = 0x3ff00000;
      FUN_1448052ee(&local_e8,&local_100);
      uVar9 = uStack_170;
      uStack_1a0 = (undefined4)local_f0;
      uStack_19c = (undefined4)((ulonglong)local_f0 >> 0x20);
      uStack_1b0 = (double)CONCAT44(uStack_fc,local_100);
      uStack_1a8 = CONCAT44(uStack_f4,uStack_f8);
      lVar13 = (longlong)(int)uStack_170;
      uVar10 = (int)uStack_170 + 1;
      uStack_170 = CONCAT44(uStack_170._4_4_,uVar10);
      local_1c8 = auVar8;
      local_1b8 = dVar4;
      if (uStack_170._4_4_ < uVar10) {
        FUN_140c9d5a2(&local_178,uVar9 & 0xffffffff);
      }
      lVar13 = lVar13 * 0x70;
      *(undefined ***)(local_178 + lVar13) = &PTR_FUN_14a1dee50;
      *(undefined4 *)(local_178 + 8 + lVar13) = local_1f0;
      *(ulonglong *)(local_178 + 0xc + lVar13) = CONCAT44(uStack_1e8,uStack_1ec);
      *(undefined4 *)(local_178 + 0x14 + lVar13) = uStack_1e4;
      *(byte *)(local_178 + 0x18 + lVar13) =
           *(byte *)(local_178 + 0x18 + lVar13) & 0xfe | local_1e0 & 1;
      *(undefined1 *)(local_178 + 0x19 + lVar13) = local_1df;
      *(undefined4 *)(local_178 + 0x20 + lVar13) = 6;
      *(longlong *)(local_178 + 0x28 + lVar13) = local_178 + lVar13;
      *(undefined ***)(local_178 + lVar13) = &PTR_FUN_14a1e3c70;
      puVar1 = (undefined4 *)(local_178 + 0x30 + lVar13);
      *puVar1 = local_1c8._0_4_;
      puVar1[1] = local_1c8._4_4_;
      puVar1[2] = local_1c8._8_4_;
      puVar1[3] = local_1c8._12_4_;
      pdVar2 = (double *)(local_178 + 0x40 + lVar13);
      *pdVar2 = local_1b8;
      pdVar2[1] = uStack_1b0;
      puVar3 = (undefined8 *)(local_178 + 0x50 + lVar13);
      *puVar3 = uStack_1a8;
      puVar3[1] = CONCAT44(uStack_19c,uStack_1a0);
      puVar3 = (undefined8 *)(local_178 + 0x5c + lVar13);
      *puVar3 = CONCAT44(local_198,uStack_19c);
      puVar3[1] = CONCAT44(fStack_190,fStack_194);
      lVar12 = lVar12 + 1;
      lVar11 = lVar11 + 0x30;
    } while (lVar12 < *(int *)(param_1 + 0xd0));
  }
  if (0 < *(int *)(param_1 + 0xc0)) {
    lVar11 = 0x1c;
    lVar12 = 0;
    do {
      lVar13 = *(longlong *)(param_1 + 0xb8);
      uVar5 = *(undefined8 *)(lVar13 + -4 + lVar11);
      local_1f0 = 0;
      uStack_1ec = 0;
      uStack_1e8 = 0;
      uStack_1e4 = 2;
      local_1e0 = local_1e0 | 1;
      local_1df = 3;
      local_1d8 = 6;
      local_1d0 = &local_1f8;
      local_1f8 = &PTR_FUN_14a1dee70;
      local_1b8 = (double)DAT_14c8464f0;
      local_1c8._8_8_ = DAT_14c8464e8;
      local_1c8._0_8_ = DAT_14c8464e0;
      uStack_1a0 = (undefined4)DAT_14c846508;
      uStack_19c = (undefined4)((ulonglong)DAT_14c846508 >> 0x20);
      uStack_1b0 = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
      uStack_1a8 = CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
      local_198 = (float)uVar5;
      fStack_194 = (float)((ulonglong)uVar5 >> 0x20);
      dVar7 = (double)(*(float *)(lVar13 + lVar11) * 0.5) + *(double *)(lVar13 + -0xc + lVar11);
      dVar6 = *(double *)(lVar13 + -0x14 + lVar11) + 0.0;
      dVar4 = *(double *)(lVar13 + -0x1c + lVar11);
      local_e8 = 0;
      uStack_e0 = 0;
      local_d8 = 0;
      uStack_d4 = 0;
      uStack_d0 = 0;
      uStack_cc = 0x3ff00000;
      FUN_1448052ee(&local_e8,&local_100);
      uVar9 = uStack_160;
      uStack_1a0 = (undefined4)local_f0;
      uStack_19c = (undefined4)((ulonglong)local_f0 >> 0x20);
      uStack_1b0 = (double)CONCAT44(uStack_fc,local_100);
      uStack_1a8 = CONCAT44(uStack_f4,uStack_f8);
      local_1c8._8_4_ = SUB84(dVar6,0);
      local_1c8._0_8_ = dVar4 + 0.0;
      local_1c8._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      lVar13 = (longlong)(int)uStack_160;
      uVar10 = (int)uStack_160 + 1;
      uStack_160 = CONCAT44(uStack_160._4_4_,uVar10);
      local_1b8 = dVar7;
      if (uStack_160._4_4_ < uVar10) {
        FUN_1407e1e9e(&local_168,uVar9 & 0xffffffff);
      }
      lVar13 = lVar13 * 0x68;
      *(undefined ***)(local_168 + lVar13) = &PTR_FUN_14a1dee50;
      *(undefined4 *)(local_168 + 8 + lVar13) = local_1f0;
      *(ulonglong *)(local_168 + 0xc + lVar13) = CONCAT44(uStack_1e8,uStack_1ec);
      *(undefined4 *)(local_168 + 0x14 + lVar13) = uStack_1e4;
      *(byte *)(local_168 + 0x18 + lVar13) =
           *(byte *)(local_168 + 0x18 + lVar13) & 0xfe | local_1e0 & 1;
      *(undefined1 *)(local_168 + 0x19 + lVar13) = local_1df;
      *(undefined4 *)(local_168 + 0x20 + lVar13) = 6;
      *(longlong *)(local_168 + 0x28 + lVar13) = local_168 + lVar13;
      *(undefined ***)(local_168 + lVar13) = &PTR_FUN_14a1dee70;
      puVar1 = (undefined4 *)(local_168 + 0x30 + lVar13);
      *puVar1 = local_1c8._0_4_;
      puVar1[1] = local_1c8._4_4_;
      puVar1[2] = local_1c8._8_4_;
      puVar1[3] = local_1c8._12_4_;
      pdVar2 = (double *)(local_168 + 0x40 + lVar13);
      *pdVar2 = local_1b8;
      pdVar2[1] = uStack_1b0;
      puVar3 = (undefined8 *)(local_168 + 0x50 + lVar13);
      *puVar3 = uStack_1a8;
      puVar3[1] = CONCAT44(uStack_19c,uStack_1a0);
      *(ulonglong *)(local_168 + 0x60 + lVar13) = CONCAT44(fStack_194,local_198);
      lVar12 = lVar12 + 1;
      lVar11 = lVar11 + 0x20;
    } while (lVar12 < *(int *)(param_1 + 0xc0));
  }
  if ((int)uStack_160 + (int)uStack_180 + (int)uStack_170 + (int)uStack_150 + (int)uStack_140 +
      (int)uStack_130 + iStack_120 != 0) {
    FUN_147e899b4(&local_188,param_1);
  }
  uVar10 = 2;
  if (*(int *)(param_1 + 0x38) < 1) {
    uVar10 = (uint)(0 < *(int *)(param_1 + 0x58)) * 2;
  }
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xfffffffd | uVar10;
  FUN_1400d7d10(&local_188);
  if ((local_c0 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e6e296 FUN_147e6e296 body=109 status=ok
// SIG undefined FUN_147e6e296(void)

undefined8 FUN_147e6e296(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  if ((*(byte *)(param_1 + 0x28) & 2) == 0) {
    uVar1 = 0;
  }
  else {
    (**(code **)(*param_3 + 0x30))
              (param_3,*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58),
               *(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68),param_2);
    uVar1 = (**(code **)(*param_3 + 0x30))
                      (param_3,*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38),
                       *(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48),param_2);
    uVar2 = CONCAT71((int7)((ulonglong)uVar1 >> 8),*(undefined1 *)(param_1 + 0x28)) &
            0xffffffffffffff02;
    uVar1 = CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 1);
  }
  return uVar1;
}



// FUNCTION 147e6e303 FUN_147e6e303 body=1289 status=ok
// SIG undefined FUN_147e6e303(void)

void FUN_147e6e303(longlong *param_1,longlong param_2,double param_3,double param_4,uint param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong *plVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  float fVar13;
  undefined1 auStack_228 [32];
  undefined1 local_208;
  undefined4 local_200;
  undefined4 local_1f8;
  undefined1 local_1f0;
  int local_1dc;
  longlong *local_1d8;
  ulonglong local_1d0;
  ulonglong local_1c8;
  ulonglong local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  double local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  double local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  float local_174;
  double local_170;
  double dStack_168;
  double local_160;
  double local_158;
  double dStack_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_1d8 = param_1;
  FUN_14276fba8(param_2,&local_108,&local_120,&local_138);
  plVar8 = local_1d8;
  local_148 = local_f8 * param_3 + *(double *)(param_2 + 0x70);
  dStack_150 = local_100 * param_3 + *(double *)(param_2 + 0x68);
  local_158 = local_108 * param_3 + *(double *)(param_2 + 0x60);
  uVar12 = (ulonglong)(param_5 >> 0x10 & 0xff);
  uVar11 = (ulonglong)(param_5 >> 8 & 0xff);
  uVar10 = (ulonglong)(param_5 & 0xff);
  fVar13 = (float)(param_5 >> 0x18) * 0.003921569;
  iVar9 = 1;
  local_1d0 = uVar12;
  local_1c8 = uVar11;
  local_1c0 = uVar10;
  local_1b8 = param_2;
  do {
    dVar1 = *(double *)(local_1b8 + 0x70);
    dVar2 = *(double *)(local_1b8 + 0x60);
    dVar3 = *(double *)(local_1b8 + 0x68);
    local_1dc = iVar9;
    dVar4 = cos((double)iVar9 * 0.39269908169872414);
    dVar7 = local_f8 * dVar4;
    dVar6 = local_100 * dVar4;
    dVar4 = dVar4 * local_108;
    dVar5 = sin((double)iVar9 * 0.39269908169872414);
    local_160 = (local_110 * dVar5 + dVar7) * param_3 + dVar1;
    dStack_168 = (local_118 * dVar5 + dVar6) * param_3 + dVar3;
    local_170 = (dVar5 * local_120 + dVar4) * param_3 + dVar2;
    local_198 = (double)CONCAT44((&DAT_14c758c60)[uVar11],(&DAT_14c758c60)[uVar12]);
    local_190 = (double)CONCAT44(fVar13,(&DAT_14c758c60)[uVar10]);
    local_1f0 = 0;
    local_1f8 = 0;
    local_200 = 0;
    local_208 = 0;
    (**(code **)(*plVar8 + 0x30))(plVar8,&local_158,&local_170,&local_198);
    local_180 = (&DAT_14c758c60)[uVar12];
    local_17c = (&DAT_14c758c60)[uVar11];
    local_178 = (&DAT_14c758c60)[uVar10];
    local_188 = local_160 + local_128 * param_4;
    local_190 = dStack_168 + local_130 * param_4;
    local_198 = local_170 + local_138 * param_4;
    local_1a0 = local_128 * param_4 + local_148;
    local_1a8 = local_130 * param_4 + dStack_150;
    local_1b0 = local_138 * param_4 + local_158;
    local_1f0 = 0;
    local_1f8 = 0;
    local_200 = 0;
    local_208 = 0;
    local_174 = fVar13;
    (**(code **)(*plVar8 + 0x30))(plVar8,&local_1b0,&local_198,&local_180);
    local_1b0 = (double)CONCAT44((&DAT_14c758c60)[uVar11],(&DAT_14c758c60)[uVar12]);
    local_1a8 = (double)CONCAT44(fVar13,(&DAT_14c758c60)[uVar10]);
    local_188 = local_128 * param_4 + local_148;
    local_190 = local_130 * param_4 + dStack_150;
    local_198 = local_138 * param_4 + local_158;
    local_1f0 = 0;
    local_1f8 = 0;
    local_200 = 0;
    local_208 = 0;
    (**(code **)(*plVar8 + 0x30))(plVar8,&local_158,&local_198,&local_1b0);
    local_158 = local_170;
    dStack_150 = dStack_168;
    local_148 = local_160;
    iVar9 = local_1dc + 1;
  } while (iVar9 != 0x11);
  if ((local_f0 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e6e80d FUN_147e6e80d body=1593 status=ok
// SIG undefined FUN_147e6e80d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147e6e80d(longlong *param_1,double *param_2,double *param_3,uint param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double *pdVar6;
  uint uVar7;
  uint uVar8;
  double *pdVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auStack_248 [32];
  undefined1 local_228;
  undefined4 local_220;
  undefined4 local_218;
  undefined1 local_210;
  double *local_208;
  ulonglong local_200;
  ulonglong local_1f8;
  uint local_1f0;
  uint local_1ec;
  undefined1 local_1e8 [16];
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double local_150;
  double dStack_148;
  double local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  float local_12c;
  double local_128;
  double dStack_120;
  double local_118;
  double local_110;
  undefined8 uStack_108;
  double local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  dVar4 = param_3[2];
  local_118 = dVar4;
  local_1d8 = *param_3;
  dVar5 = param_3[1];
  local_128 = local_1d8;
  dStack_120 = dVar5;
  dVar1 = param_3[2];
  auVar16._8_8_ = 0;
  auVar16._0_8_ = dVar1;
  auVar16 = auVar16 ^ _DAT_149931e80;
  local_188._8_8_ = 0;
  local_188._0_8_ = *param_3;
  local_198._8_8_ = 0;
  local_198._0_8_ = param_3[1];
  auVar10 = local_198 ^ _DAT_149931e80;
  auVar13 = _DAT_149931e80 ^ local_188;
  local_1a8._0_8_ = auVar13._0_8_;
  local_1a8._8_4_ = auVar13._0_4_;
  local_1a8._12_4_ = auVar13._4_4_;
  local_1e8._0_8_ = auVar10._0_8_;
  local_110 = (double)local_1a8._0_8_;
  uStack_108 = local_1e8._0_8_;
  dVar11 = auVar16._0_8_;
  local_100 = dVar11;
  uVar8 = param_4 >> 0x10 & 0xff;
  local_1f8 = (ulonglong)(param_4 >> 8 & 0xff);
  local_200 = (ulonglong)(param_4 & 0xff);
  fVar15 = (float)(param_4 >> 0x18) * 0.003921569;
  uStack_1b0 = 0;
  local_1e8._8_4_ = auVar10._0_4_;
  local_1e8._12_4_ = auVar10._4_4_;
  uStack_1c0 = 0;
  local_208 = &local_128;
  dStack_1d0 = local_1d8;
  local_1c8 = dVar5;
  local_1b8 = local_1d8;
  uVar7 = 1;
  do {
    local_1f0 = uVar7;
    dVar2 = *local_208;
    pdVar9 = &local_128;
    local_178 = dVar2;
    dStack_170 = dVar2;
    uVar7 = 1;
    do {
      local_1ec = uVar7;
      dVar3 = pdVar9[1];
      local_138 = (&DAT_14c758c60)[uVar8];
      local_134 = (&DAT_14c758c60)[local_1f8];
      local_130 = (&DAT_14c758c60)[local_200];
      dVar12 = dVar3 * param_2[4] + *param_2 * local_178;
      dVar14 = dVar3 * param_2[5] + param_2[1] * dStack_170;
      auVar10._8_4_ = auVar16._0_4_;
      auVar10._0_8_ = dVar11;
      auVar10._12_4_ = auVar16._4_4_;
      local_150 = dVar11 * param_2[8] + dVar12 + param_2[0xc];
      dStack_148 = auVar10._8_8_ * param_2[9] + dVar14 + param_2[0xd];
      dVar3 = param_2[2] * dVar2 + dVar3 * param_2[6];
      local_140 = (dVar3 - dVar1 * param_2[10]) + param_2[0xe];
      local_168 = param_2[8] * dVar4 + dVar12 + param_2[0xc];
      dStack_160 = param_2[9] * dVar4 + dVar14 + param_2[0xd];
      local_158 = param_2[10] * dVar4 + dVar3 + param_2[0xe];
      local_210 = 0;
      local_218 = 0;
      local_220 = 0;
      local_228 = 0;
      local_12c = fVar15;
      (**(code **)(*param_1 + 0x30))(param_1,&local_168,&local_150,&local_138);
      pdVar6 = local_208;
      dVar3 = local_208[1];
      dVar12 = pdVar9[2];
      local_138 = (&DAT_14c758c60)[uVar8];
      local_134 = (&DAT_14c758c60)[local_1f8];
      local_130 = (&DAT_14c758c60)[local_200];
      local_150 = (double)local_1a8._0_8_ * *param_2 + dVar3 * param_2[4] + dVar12 * param_2[8] +
                  param_2[0xc];
      dStack_148 = (double)local_1a8._8_8_ * param_2[1] + dVar3 * param_2[5] + dVar12 * param_2[9] +
                   param_2[0xd];
      local_140 = (dVar3 * param_2[6] - (double)local_188._0_8_ * param_2[2]) + dVar12 * param_2[10]
                  + param_2[0xe];
      local_168 = *param_2 * local_1d8 + dVar3 * param_2[4] + dVar12 * param_2[8] + param_2[0xc];
      dStack_160 = param_2[1] * dStack_1d0 + dVar3 * param_2[5] + dVar12 * param_2[9] + param_2[0xd]
      ;
      local_158 = param_2[2] * local_1b8 + dVar3 * param_2[6] + dVar12 * param_2[10] + param_2[0xe];
      local_210 = 0;
      local_218 = 0;
      local_220 = 0;
      local_228 = 0;
      local_12c = fVar15;
      (**(code **)(*param_1 + 0x30))(param_1,&local_168,&local_150,&local_138);
      dVar3 = pdVar6[2];
      dVar12 = *pdVar9;
      local_138 = (&DAT_14c758c60)[uVar8];
      local_134 = (&DAT_14c758c60)[local_1f8];
      local_130 = (&DAT_14c758c60)[local_200];
      local_150 = (double)local_1e8._0_8_ * param_2[4] + dVar12 * *param_2 + dVar3 * param_2[8] +
                  param_2[0xc];
      dStack_148 = (double)local_1e8._8_8_ * param_2[5] + dVar12 * param_2[1] + dVar3 * param_2[9] +
                   param_2[0xd];
      local_140 = (dVar12 * param_2[2] - (double)local_198._0_8_ * param_2[6]) + dVar3 * param_2[10]
                  + param_2[0xe];
      local_168 = param_2[4] * dVar5 + dVar12 * *param_2 + dVar3 * param_2[8] + param_2[0xc];
      dStack_160 = param_2[5] * dVar5 + dVar12 * param_2[1] + dVar3 * param_2[9] + param_2[0xd];
      local_158 = param_2[6] * local_1c8 + dVar12 * param_2[2] + dVar3 * param_2[10] + param_2[0xe];
      local_210 = 0;
      local_218 = 0;
      local_220 = 0;
      local_228 = 0;
      local_12c = fVar15;
      (**(code **)(*param_1 + 0x30))(param_1,&local_168,&local_150,&local_138);
      pdVar9 = &local_110;
      uVar7 = 0;
    } while ((local_1ec & 1) != 0);
    local_208 = pdVar9;
  } while ((local_1f0 & 1) != 0);
  if ((local_f0 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e6ee48 FUN_147e6ee48 body=934 status=ok
// SIG undefined FUN_147e6ee48(void)

void FUN_147e6ee48(longlong param_1,undefined8 param_2,double *param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_1d8 [32];
  undefined4 local_1b8;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined1 local_128 [16];
  double local_118;
  undefined8 uStack_110;
  undefined1 local_108 [16];
  double local_f8;
  undefined8 uStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined8 uStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  dVar7 = *param_3;
  dVar8 = param_3[1];
  dVar9 = param_3[2];
  dVar10 = param_3[8];
  dVar11 = param_3[9];
  dStack_e0 = param_3[10];
  dVar15 = dVar8 + dVar8;
  dVar2 = dVar9 + dVar9;
  dVar14 = dVar7 * (dVar7 + dVar7);
  dVar5 = (1.0 - (dVar9 * dVar2 + dVar14)) * dVar11;
  local_d8 = (1.0 - (dVar14 + dVar8 * dVar15)) * dStack_e0;
  dVar14 = param_3[3];
  dVar3 = dVar2 * dVar14;
  dVar4 = (dVar7 + dVar7) * param_3[3];
  dVar14 = dVar15 * dVar14;
  dVar6 = (dVar15 * dVar7 + dVar3) * dVar10;
  local_f8 = (dVar2 * dVar8 + dVar4) * dVar11;
  local_e8 = (dVar14 + *param_3 * dVar2) * dStack_e0;
  local_118 = (*param_3 * dVar2 - dVar14) * dVar10;
  dStack_e0 = (dVar2 * dVar8 - dVar4) * dStack_e0;
  local_128._8_4_ = SUB84(dVar6,0);
  local_128._0_8_ = (1.0 - (dVar9 * dVar2 + dVar8 * dVar15)) * dVar10;
  local_128._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  uStack_110 = 0;
  local_108._8_4_ = SUB84(dVar5,0);
  local_108._0_8_ = (dVar15 * dVar7 - dVar3) * dVar11;
  local_108._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  uStack_f0 = 0;
  uStack_d0 = 0;
  local_c8 = param_3[4];
  dStack_c0 = param_3[5];
  local_b8 = param_3[6];
  uStack_b0 = 0x3ff0000000000000;
  if (0 < *(int *)(param_1 + 0xc0)) {
    lVar12 = 0;
    lVar13 = 0;
    do {
      local_138 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + 0x10 + lVar12);
      puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0xb8) + lVar12);
      local_148 = *puVar1;
      uStack_140 = puVar1[1];
      local_1a8 = 0x3ff0000000000000;
      local_190 = 0;
      uStack_188 = 0;
      local_1a0 = 0;
      uStack_198 = 0;
      local_180 = 0x3ff0000000000000;
      local_168 = 0;
      uStack_160 = 0;
      local_178 = 0;
      uStack_170 = 0;
      local_158 = 0x3ff0000000000000;
      local_150 = 0;
      local_130 = 0x3ff0000000000000;
      FUN_1447fea8d(&local_1a8,&local_1a8,local_128);
      local_1b8 = param_4;
      FUN_147e6e303(param_2,&local_1a8,
                    SUB84((double)*(float *)(*(longlong *)(param_1 + 0xb8) + 0x18 + lVar12),0),
                    (double)*(float *)(*(longlong *)(param_1 + 0xb8) + 0x1c + lVar12));
      lVar13 = lVar13 + 1;
      lVar12 = lVar12 + 0x20;
    } while (lVar13 < *(int *)(param_1 + 0xc0));
  }
  if (0 < *(int *)(param_1 + 0xd0)) {
    lVar12 = 0x18;
    lVar13 = 0;
    do {
      local_138 = *(undefined8 *)(*(longlong *)(param_1 + 200) + -8 + lVar12);
      puVar1 = (undefined8 *)(*(longlong *)(param_1 + 200) + -0x18 + lVar12);
      local_148 = *puVar1;
      uStack_140 = puVar1[1];
      local_1a8 = 0x3ff0000000000000;
      local_190 = 0;
      uStack_188 = 0;
      local_1a0 = 0;
      uStack_198 = 0;
      local_180 = 0x3ff0000000000000;
      local_168 = 0;
      uStack_160 = 0;
      local_178 = 0;
      uStack_170 = 0;
      local_158 = 0x3ff0000000000000;
      local_150 = 0;
      local_130 = 0x3ff0000000000000;
      FUN_1447fea8d(&local_1a8,&local_1a8,local_128);
      FUN_147e6e80d(param_2,&local_1a8,*(longlong *)(param_1 + 200) + lVar12,param_4);
      lVar13 = lVar13 + 1;
      lVar12 = lVar12 + 0x30;
    } while (lVar13 < *(int *)(param_1 + 0xd0));
  }
  if ((local_a0 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e6f1f0 FUN_147e6f1f0 body=94 status=ok
// SIG undefined FUN_147e6f1f0(void)

void FUN_147e6f1f0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  
  switchD_143c3d4dc::caseD_38();
  cVar1 = FUN_1401cf654(param_1 + 0xf8,DAT_14cb1d500);
  if (cVar1 != '\0') {
    lVar2 = FUN_14043030a(param_1 + 0xf8,DAT_14cb1d500);
    FUN_14484255c(param_2,(ulonglong)*(uint5 *)(lVar2 + 8));
    return;
  }
  return;
}



// FUNCTION 147e6f2b8 FUN_147e6f2b8 body=657 status=ok
// SIG undefined FUN_147e6f2b8(void)

longlong * FUN_147e6f2b8(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong *local_48;
  longlong *local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar5 = *(uint *)(param_1 + 8);
  if (param_4 != 0 && (uVar5 & 2) != 0) {
    (**(code **)(*param_1 + 0x2a8))(param_1,&local_48,param_4);
    plVar4 = local_48;
    if ((((local_48 != (longlong *)0x0) && (lVar6 = FUN_14118cf76(), plVar7 = local_48, lVar6 != 0))
        && (*(int *)(lVar6 + 0x38) <= (int)plVar4[7])) &&
       (local_48 != (longlong *)0x0 &&
        *(longlong *)(plVar4[6] + (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
      lVar6 = local_48[0x22];
      if (lVar6 == 0) {
        (**(code **)(*local_48 + 1000))(local_48);
        lVar6 = plVar7[0x22];
      }
      if ((*(byte *)(lVar6 + 0x40) & 2) == 0) {
        FUN_147e6f2b8(lVar6,param_2,param_3,param_4);
        goto LAB_147e6f464;
      }
    }
    uVar5 = *(uint *)(param_1 + 8);
  }
  if ((uVar5 & 1) == 0) {
    local_38 = param_1[2];
    if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_147e6f54a(param_3,param_2,&local_38);
    if (*param_2 != 0) goto LAB_147e6f464;
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
  }
  uVar3 = *(undefined8 *)(param_3 + 0x4e8);
  plVar4 = *(longlong **)(param_3 + 0x4f0);
  if (plVar4 == (longlong *)0x0) {
    FUN_1478cdbb2(uVar3,&local_48);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    FUN_1478cdbb2(uVar3,&local_48);
    LOCK();
    plVar7 = plVar4 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  (**(code **)(*param_1 + 0x2a0))(param_1,param_3,param_4,local_48);
  plVar4 = local_40;
  if (local_40 == (longlong *)0x0) {
    *param_2 = (longlong)local_48;
    plVar7 = (longlong *)param_2[1];
    if (plVar7 != (longlong *)0x0) {
      param_2[1] = 0;
LAB_147e6f3f9:
      LOCK();
      plVar4 = plVar7 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x000147e6f428:
        if (iVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    *param_2 = (longlong)local_48;
    plVar7 = (longlong *)param_2[1];
    if (local_40 == plVar7) {
      LOCK();
      plVar7 = local_40 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar7 = plVar4;
        goto joined_r0x000147e6f428;
      }
    }
    else {
      param_2[1] = (longlong)local_40;
      if (plVar7 != (longlong *)0x0) goto LAB_147e6f3f9;
    }
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    local_58 = *param_2;
    local_50 = param_2[1];
    if (local_50 != 0) {
      LOCK();
      *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
      UNLOCK();
    }
    local_60 = param_1[2];
    if ((local_60 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_147e6f658(param_3,&local_60,&local_58);
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_40 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
LAB_147e6f464:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e6f54a FUN_147e6f54a body=269 status=ok
// SIG undefined FUN_147e6f54a(void)

undefined8 * FUN_147e6f54a(longlong param_1,undefined8 *param_2,ulonglong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = *param_3;
  if ((((uVar2 == 0) || (lVar1 = FUN_14118cf76(), lVar1 == 0)) ||
      (*(int *)(uVar2 + 0x38) < *(int *)(lVar1 + 0x38))) ||
     (*(longlong *)(*(longlong *)(uVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
      lVar1 + 0x30)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *param_3;
  }
  if (*(int *)(param_1 + 0x500) != *(int *)(param_1 + 0x52c)) {
    uVar3 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    lVar1 = param_1 + 0x530;
    if (*(longlong *)(param_1 + 0x538) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x538);
    }
    iVar4 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x540) - 1U & (uVar3 >> 0x10 ^ uVar3)) *
                             4);
    if (iVar4 != -1) {
      do {
        lVar1 = *(longlong *)(param_1 + 0x4f8) + (longlong)iVar4 * 0x20;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x4f8) + (longlong)iVar4 * 0x20) == uVar2) {
          if (lVar1 != 0) {
            *param_2 = *(undefined8 *)(lVar1 + 8);
            lVar1 = *(longlong *)(lVar1 + 0x10);
            param_2[1] = lVar1;
            if (lVar1 == 0) {
              return param_2;
            }
            LOCK();
            *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
            UNLOCK();
            return param_2;
          }
          break;
        }
        iVar4 = *(int *)(lVar1 + 0x18);
      } while (iVar4 != -1);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 147e6f658 FUN_147e6f658 body=192 status=ok
// SIG undefined FUN_147e6f658(void)

void FUN_147e6f658(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *param_2;
  if (lVar3 != 0) {
    lVar5 = FUN_14118cf76();
    if (((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
        lVar5 + 0x30)) {
      local_48 = *param_2;
      goto LAB_147e6f6b1;
    }
  }
  local_48 = 0;
LAB_147e6f6b1:
  local_40 = &local_48;
  local_38 = param_3;
  FUN_147e8285c(param_1 + 0x4f8,local_2c);
  plVar4 = *(longlong **)(param_3 + 8);
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
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e6f71a FUN_147e6f71a body=266 status=ok
// SIG undefined FUN_147e6f71a(void)

void FUN_147e6f71a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar7 = 0x10;
    lVar8 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x28);
      lVar2 = *(longlong *)(lVar1 + -0x10 + lVar7);
      if ((((lVar2 == 0) || (lVar5 = FUN_1410e186c(), lVar5 == 0)) ||
          (*(int *)(lVar2 + 0x38) < *(int *)(lVar5 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
          lVar5 + 0x30)) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined8 *)(lVar1 + -0x10 + lVar7);
      }
      iVar3 = FUN_147e6f824(param_2,uVar6);
      if (iVar3 != -1) {
        uVar4 = *(uint *)(lVar1 + lVar7);
        if ((uVar4 & 1) == 0) {
          if ((uVar4 & 2) != 0) {
            FUN_1478cdd1a(param_4);
            uVar4 = *(uint *)(lVar1 + lVar7);
          }
          if ((uVar4 & 4) != 0) {
            FUN_1478cdd28(param_4);
          }
        }
        else {
          FUN_1478cdd36(param_4);
        }
      }
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 0x18;
    } while (lVar8 < *(int *)(param_1 + 0x30));
  }
  FUN_1478cdd44(param_4,*(undefined2 *)(param_1 + 0x38));
  FUN_1478cdd52(param_4,*(undefined2 *)(param_1 + 0x3c));
  return;
}



// FUNCTION 147e6f824 FUN_147e6f824 body=185 status=ok
// SIG undefined FUN_147e6f824(void)

undefined4 FUN_147e6f824(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x560) != *(int *)(param_1 + 0x58c)) {
    uVar2 = ((uint)(uint7)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar3 = param_1 + 0x590;
    if (*(longlong *)(param_1 + 0x598) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x598);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x5a0) - 1U & (uVar2 >> 0x10 ^ uVar2)) *
                             4);
    if (iVar4 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x558) + (longlong)iVar4 * 0x18);
        if (*puVar1 == param_2) {
          if (puVar1 + 1 == (ulonglong *)0x0 || puVar1 == (ulonglong *)0x0) {
            return 0xffffffff;
          }
          return (int)puVar1[1];
        }
        iVar4 = (int)puVar1[2];
      } while (iVar4 != -1);
    }
  }
  return 0xffffffff;
}



// FUNCTION 147e6f8de FUN_147e6f8de body=134 status=ok
// SIG undefined FUN_147e6f8de(void)

undefined8 * FUN_147e6f8de(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_3;
  if ((((lVar2 != 0) && (lVar1 = FUN_14118cf76(), lVar1 != 0)) &&
      (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
     ((*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
       lVar1 + 0x30 && (param_3 = (longlong *)*param_3, param_3 != (longlong *)0x0)))) {
    lVar2 = param_3[0x22];
    if (lVar2 == 0) {
      (**(code **)(*param_3 + 1000))(param_3);
      lVar2 = param_3[0x22];
    }
    FUN_147e6f2b8(lVar2,param_1,param_2,0);
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 147e6f964 FUN_147e6f964 body=141 status=ok
// SIG undefined FUN_147e6f964(void)

undefined8 *
FUN_147e6f964(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_4;
  if ((((lVar2 != 0) && (lVar1 = FUN_14118cf76(), lVar1 != 0)) &&
      (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
     ((*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
       lVar1 + 0x30 && (param_4 = (longlong *)*param_4, param_4 != (longlong *)0x0)))) {
    lVar2 = param_4[0x22];
    if (lVar2 == 0) {
      (**(code **)(*param_4 + 1000))(param_4);
      lVar2 = param_4[0x22];
    }
    FUN_147e6f2b8(lVar2,param_1,param_2,param_3);
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 147e6f9fc FUN_147e6f9fc body=76 status=ok
// SIG undefined FUN_147e6f9fc(void)

void FUN_147e6f9fc(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14abac950;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147e6fa3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 147e6fa80 FUN_147e6fa80 body=489 status=ok
// SIG undefined FUN_147e6fa80(void)

longlong FUN_147e6fa80(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 *param_6,undefined8 *param_7,undefined8 param_8,
                      undefined1 param_9)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = *param_6;
  local_38 = param_6[1];
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
    UNLOCK();
  }
  local_48 = param_9;
  local_50 = param_8;
  local_58 = &local_40;
  FUN_147e6fc6a(param_1,param_2,param_4,param_5);
  lVar7 = param_1 + 0x58;
  *(undefined8 *)(param_1 + 0x58) = 0;
  FUN_14485c47a(lVar7,param_3);
  *(undefined8 *)(param_1 + 0x60) = *param_7;
  lVar3 = param_7[1];
  *(longlong *)(param_1 + 0x68) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  FUN_1478cd7e2(param_1 + 0x70,param_3 + 0x3a0);
  if ((*(longlong *)(param_1 + 0x38) != 0) || (cVar6 = FUN_144729dda(lVar7), cVar6 == '\0'))
  goto LAB_147e6fb4e;
  lVar7 = FUN_14479d2ce(lVar7);
  uVar5 = *(undefined8 *)(lVar7 + 0x4e8);
  plVar4 = *(longlong **)(lVar7 + 0x4f0);
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x38) = uVar5;
    plVar8 = *(longlong **)(param_1 + 0x40);
    if (plVar8 == (longlong *)0x0) goto LAB_147e6fb4e;
    *(undefined8 *)(param_1 + 0x40) = 0;
LAB_147e6fc1f:
    LOCK();
    plVar4 = plVar8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_147e6fb4e;
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar4 = plVar8;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x38) = uVar5;
    plVar8 = *(longlong **)(param_1 + 0x40);
    if (plVar4 != plVar8) {
      *(longlong **)(param_1 + 0x40) = plVar4;
      if (plVar8 == (longlong *)0x0) goto LAB_147e6fb4e;
      goto LAB_147e6fc1f;
    }
    LOCK();
    plVar8 = plVar4 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 != 0) goto LAB_147e6fb4e;
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
LAB_147e6fb4e:
  plVar4 = (longlong *)param_6[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar4 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = (longlong *)param_7[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar4 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e6fc6a FUN_147e6fc6a body=202 status=ok
// SIG undefined FUN_147e6fc6a(void)

undefined8 *
FUN_147e6fc6a(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
             undefined8 *param_5,undefined8 param_6,byte param_7)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  *param_1 = 0;
  FUN_14485c47a();
  param_1[3] = param_3[2];
  uVar8 = param_3[1];
  param_1[1] = *param_3;
  param_1[2] = uVar8;
  uVar5 = param_4[1];
  uVar6 = param_4[2];
  uVar7 = param_4[3];
  *(undefined4 *)(param_1 + 4) = *param_4;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar5;
  *(undefined4 *)(param_1 + 5) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar7;
  param_1[6] = *(undefined8 *)(param_4 + 4);
  param_1[7] = *param_5;
  lVar3 = param_5[1];
  param_1[8] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  param_1[9] = param_6;
  *(undefined4 *)(param_1 + 10) = 0;
  *(uint *)((longlong)param_1 + 0x54) =
       (*(uint *)((longlong)param_1 + 0x54) & 0xfffffffc) + (uint)param_7 * 2 + 1;
  plVar4 = (longlong *)param_5[1];
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
  return param_1;
}



// FUNCTION 147e6fd34 FUN_147e6fd34 body=553 status=ok
// SIG undefined FUN_147e6fd34(void)

longlong FUN_147e6fd34(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 *param_6,undefined8 *param_7,undefined8 param_8,
                      undefined1 param_9)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = *param_6;
  local_68 = param_6[1];
  if (local_68 != 0) {
    LOCK();
    *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
    UNLOCK();
  }
  if ((param_2 == (longlong *)0x0) || (lVar6 = (**(code **)(*param_2 + 8))(param_2), lVar6 == 0)) {
    lVar6 = 0;
  }
  local_78 = param_9;
  local_80 = param_8;
  local_88 = &local_70;
  FUN_147e6fc6a(param_1,lVar6,param_4,param_5);
  lVar6 = param_1 + 0x58;
  *(undefined8 *)(param_1 + 0x58) = 0;
  FUN_14485c47a(lVar6,param_3);
  *(undefined8 *)(param_1 + 0x60) = *param_7;
  lVar3 = param_7[1];
  *(longlong *)(param_1 + 0x68) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar7 = (**(code **)(*param_2 + 0x10))(param_2);
  FUN_1478cd7e2(param_1 + 0x70,uVar7);
  if ((*(longlong *)(param_1 + 0x38) != 0) || (cVar5 = FUN_144729dda(lVar6), cVar5 == '\0'))
  goto LAB_147e6fe33;
  lVar6 = FUN_14479d2ce(lVar6);
  uVar7 = *(undefined8 *)(lVar6 + 0x4e8);
  plVar4 = *(longlong **)(lVar6 + 0x4f0);
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x38) = uVar7;
    plVar8 = *(longlong **)(param_1 + 0x40);
    if (plVar8 == (longlong *)0x0) goto LAB_147e6fe33;
    *(undefined8 *)(param_1 + 0x40) = 0;
LAB_147e6ff13:
    LOCK();
    plVar4 = plVar8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_147e6fe33;
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar4 = plVar8;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x38) = uVar7;
    plVar8 = *(longlong **)(param_1 + 0x40);
    if (plVar4 != plVar8) {
      *(longlong **)(param_1 + 0x40) = plVar4;
      if (plVar8 == (longlong *)0x0) goto LAB_147e6fe33;
      goto LAB_147e6ff13;
    }
    LOCK();
    plVar8 = plVar4 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 != 0) goto LAB_147e6fe33;
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
LAB_147e6fe33:
  plVar4 = (longlong *)param_6[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar4 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = (longlong *)param_7[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar4 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e6ff5e FUN_147e6ff5e body=851 status=ok
// SIG undefined FUN_147e6ff5e(void)

undefined4 * FUN_147e6ff5e(undefined4 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  char cVar15;
  undefined8 uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong *plVar19;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined5 uStack_40;
  undefined3 local_3b;
  undefined5 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar18 = *param_2;
  local_48 = *(undefined8 *)(lVar18 + 0xd8);
  dVar9 = *(double *)(lVar18 + 0xa8);
  dVar10 = *(double *)(lVar18 + 0xb0);
  dVar11 = *(double *)(lVar18 + 0xb8);
  uVar12 = *(undefined8 *)(lVar18 + 0xc0);
  uVar13 = *(undefined8 *)(lVar18 + 200);
  uVar14 = *(undefined8 *)(lVar18 + 0xd0);
  uVar16 = *(undefined8 *)(lVar18 + 0xe0);
  lVar17 = *(longlong *)(lVar18 + 0xe8);
  if (lVar17 != 0) {
    LOCK();
    *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
    UNLOCK();
  }
  uVar4 = *(undefined8 *)(lVar18 + 0xf0);
  uStack_38 = (undefined5)((ulonglong)*(undefined8 *)(lVar18 + 0xf5) >> 0x18);
  uStack_40 = (undefined5)uVar4;
  local_3b = (undefined3)((ulonglong)uVar4 >> 0x28);
  *(undefined8 *)(param_1 + 0xc) = local_48;
  local_78._0_4_ = SUB84(dVar9,0);
  local_78._4_4_ = (undefined4)((ulonglong)dVar9 >> 0x20);
  uStack_70._0_4_ = SUB84(dVar10,0);
  uStack_70._4_4_ = (undefined4)((ulonglong)dVar10 >> 0x20);
  local_68._0_4_ = SUB84(dVar11,0);
  local_68._4_4_ = (undefined4)((ulonglong)dVar11 >> 0x20);
  uStack_60._0_4_ = (undefined4)uVar12;
  uStack_60._4_4_ = (undefined4)((ulonglong)uVar12 >> 0x20);
  local_58._0_4_ = (undefined4)uVar13;
  local_58._4_4_ = (undefined4)((ulonglong)uVar13 >> 0x20);
  uStack_50._0_4_ = (undefined4)uVar14;
  uStack_50._4_4_ = (undefined4)((ulonglong)uVar14 >> 0x20);
  param_1[8] = (undefined4)local_58;
  param_1[9] = local_58._4_4_;
  param_1[10] = (undefined4)uStack_50;
  param_1[0xb] = uStack_50._4_4_;
  param_1[4] = (undefined4)local_68;
  param_1[5] = local_68._4_4_;
  param_1[6] = (undefined4)uStack_60;
  param_1[7] = uStack_60._4_4_;
  *param_1 = (undefined4)local_78;
  param_1[1] = local_78._4_4_;
  param_1[2] = (undefined4)uStack_70;
  param_1[3] = uStack_70._4_4_;
  *(undefined8 *)(param_1 + 0xe) = uVar16;
  *(longlong *)(param_1 + 0x10) = lVar17;
  *(undefined8 *)(param_1 + 0x12) = uVar4;
  *(ulonglong *)((longlong)param_1 + 0x4d) = CONCAT53(uStack_38,local_3b);
  puVar1 = param_1 + 0x16;
  local_78 = dVar9;
  uStack_70 = dVar10;
  local_68 = dVar11;
  uStack_60 = uVar12;
  local_58 = uVar13;
  uStack_50 = uVar14;
  uVar16 = FUN_14479d2ce(*param_2 + 0x9c);
  *(undefined8 *)(param_1 + 0x16) = 0;
  FUN_14485c47a(puVar1,uVar16);
  *(longlong *)(param_1 + 0x18) = *param_2;
  lVar18 = param_2[1];
  *(longlong *)(param_1 + 0x1a) = lVar18;
  if (lVar18 != 0) {
    LOCK();
    *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
    UNLOCK();
  }
  FUN_1478cd7e2(param_1 + 0x1c,&DAT_14cacb108);
  lVar18 = *param_2;
  if ((*(byte *)(lVar18 + 0x98) & 0x40) != 0) {
    lVar17 = FUN_14479d2ce(lVar18 + 0x50);
    lVar18 = *param_2;
    if (lVar17 != 0) {
      FUN_147e702b2(lVar18,&local_78);
      if ((((local_78 != 1.79769313486232e+308) || (NAN(local_78))) ||
          (uStack_70 != 1.79769313486232e+308)) ||
         (((NAN(uStack_70) || (local_68 != 1.79769313486232e+308)) || (NAN(local_68))))) {
        *(double *)(param_1 + 6) = local_68;
        param_1[2] = (undefined4)local_78;
        param_1[3] = local_78._4_4_;
        param_1[4] = (undefined4)uStack_70;
        param_1[5] = uStack_70._4_4_;
      }
      lVar18 = *param_2;
    }
  }
  if (((~*(uint *)(lVar18 + 0x98) & 0x480) == 0) &&
     (lVar18 = FUN_14479d2ce(lVar18 + 0x40), lVar18 != 0)) {
    FUN_147e70350(*param_2,&local_78);
    if ((local_78 != 1.79769313486232e+308) ||
       ((((NAN(local_78) || (uStack_70 != 1.79769313486232e+308)) || (NAN(uStack_70))) ||
        ((local_68 != 1.79769313486232e+308 || (NAN(local_68))))))) {
      *(double *)(param_1 + 0xc) = local_68;
      param_1[8] = (undefined4)local_78;
      param_1[9] = local_78._4_4_;
      param_1[10] = (undefined4)uStack_70;
      param_1[0xb] = uStack_70._4_4_;
    }
  }
  cVar15 = FUN_144729dda(puVar1);
  if (cVar15 == '\0') goto LAB_147e70103;
  if (*(longlong *)(param_1 + 0xe) == 0) {
    lVar18 = FUN_14479d2ce(puVar1);
    uVar16 = *(undefined8 *)(lVar18 + 0x4e8);
    plVar5 = *(longlong **)(lVar18 + 0x4f0);
    if (plVar5 == (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0xe) = uVar16;
      plVar19 = *(longlong **)(param_1 + 0x10);
      if (plVar19 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x10) = 0;
LAB_147e701a3:
        LOCK();
        plVar5 = plVar19 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plVar19)(plVar19);
          LOCK();
          piVar2 = (int *)((longlong)plVar19 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar3 = *piVar2;
          UNLOCK();
joined_r0x000147e701de:
          if (iVar3 == 0) {
            (**(code **)(*plVar19 + 0x10))(plVar19);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      *(undefined8 *)(param_1 + 0xe) = uVar16;
      plVar19 = *(longlong **)(param_1 + 0x10);
      if (plVar5 == plVar19) {
        LOCK();
        plVar19 = plVar5 + 1;
        *(int *)plVar19 = (int)*plVar19 + -1;
        UNLOCK();
        if ((int)*plVar19 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar3 = *piVar2;
          UNLOCK();
          plVar19 = plVar5;
          goto joined_r0x000147e701de;
        }
      }
      else {
        *(longlong **)(param_1 + 0x10) = plVar5;
        if (plVar19 != (longlong *)0x0) goto LAB_147e701a3;
      }
    }
  }
  lVar18 = FUN_14479d2ce(puVar1);
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(lVar18 + 0x3a0);
  uVar16 = *(undefined8 *)(lVar18 + 0x3ac);
  *(undefined8 *)(param_1 + 0x1d) = *(undefined8 *)(lVar18 + 0x3a4);
  *(undefined8 *)(param_1 + 0x1f) = uVar16;
  uVar6 = *(undefined4 *)(lVar18 + 0x3bc);
  uVar7 = *(undefined4 *)(lVar18 + 0x3c0);
  uVar8 = *(undefined4 *)(lVar18 + 0x3c4);
  param_1[0x22] = *(undefined4 *)(lVar18 + 0x3b8);
  param_1[0x23] = uVar6;
  param_1[0x24] = uVar7;
  param_1[0x25] = uVar8;
  FUN_144a787a6(param_1 + 0x26,lVar18 + 0x3c8);
LAB_147e70103:
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar19 = plVar5 + 1;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)*plVar19 == 0) {
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
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e702b2 FUN_147e702b2 body=158 status=ok
// SIG undefined FUN_147e702b2(void)

undefined8 * FUN_147e702b2(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  cVar3 = FUN_147e73dfe(param_1 + 0x50);
  if (cVar3 == '\0') {
    plVar1 = *(longlong **)(param_1 + 0x58);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return param_2;
    }
    lVar5 = FUN_14479d2ce(param_1 + 0x50);
    lVar5 = *(longlong *)(lVar5 + 0x1c8);
    if (lVar5 != 0) {
      uVar2 = *(undefined8 *)(lVar5 + 0x268);
      *param_2 = *(undefined8 *)(lVar5 + 0x260);
      param_2[1] = uVar2;
      param_2[2] = *(undefined8 *)(lVar5 + 0x270);
      return param_2;
    }
    param_2[2] = DAT_14c8464f0;
    uVar6 = (undefined4)DAT_14c8464e0;
    uVar7 = DAT_14c8464e0._4_4_;
    uVar8 = (undefined4)DAT_14c8464e8;
    uVar9 = DAT_14c8464e8._4_4_;
  }
  else {
    if (*(int *)(param_1 + 0x30) < 1) {
      puVar4 = &DAT_14a83cd78;
    }
    else {
      puVar4 = *(undefined8 **)(param_1 + 0x28);
    }
    param_2[2] = puVar4[2];
    uVar6 = *(undefined4 *)puVar4;
    uVar7 = *(undefined4 *)((longlong)puVar4 + 4);
    uVar8 = *(undefined4 *)(puVar4 + 1);
    uVar9 = *(undefined4 *)((longlong)puVar4 + 0xc);
  }
  *(undefined4 *)param_2 = uVar6;
  *(undefined4 *)((longlong)param_2 + 4) = uVar7;
  *(undefined4 *)(param_2 + 1) = uVar8;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar9;
  return param_2;
}



// FUNCTION 147e70350 FUN_147e70350 body=176 status=ok
// SIG undefined FUN_147e70350(void)

undefined8 * FUN_147e70350(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  cVar3 = FUN_147e73dfe(param_1 + 0x40);
  if (cVar3 == '\0') {
    plVar1 = *(longlong **)(param_1 + 0x48);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return param_2;
    }
    lVar5 = FUN_14479d2ce(param_1 + 0x40);
    lVar5 = *(longlong *)(lVar5 + 0x1c8);
    if (lVar5 != 0) {
      uVar2 = *(undefined8 *)(lVar5 + 0x268);
      *param_2 = *(undefined8 *)(lVar5 + 0x260);
      param_2[1] = uVar2;
      param_2[2] = *(undefined8 *)(lVar5 + 0x270);
      return param_2;
    }
    param_2[2] = DAT_14c8464f0;
    uVar6 = (undefined4)DAT_14c8464e0;
    uVar7 = DAT_14c8464e0._4_4_;
    uVar8 = (undefined4)DAT_14c8464e8;
    uVar9 = DAT_14c8464e8._4_4_;
  }
  else {
    if ((longlong)*(int *)(param_1 + 0x30) < 1) {
      puVar4 = &DAT_14a83cd78;
    }
    else {
      puVar4 = (undefined8 *)
               ((longlong)*(int *)(param_1 + 0x30) * 0x30 + *(longlong *)(param_1 + 0x28) + -0x30);
    }
    param_2[2] = puVar4[2];
    uVar6 = *(undefined4 *)puVar4;
    uVar7 = *(undefined4 *)((longlong)puVar4 + 4);
    uVar8 = *(undefined4 *)(puVar4 + 1);
    uVar9 = *(undefined4 *)((longlong)puVar4 + 0xc);
  }
  *(undefined4 *)param_2 = uVar6;
  *(undefined4 *)((longlong)param_2 + 4) = uVar7;
  *(undefined4 *)(param_2 + 1) = uVar8;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar9;
  return param_2;
}



// FUNCTION 147e70400 FUN_147e70400 body=93 status=ok
// SIG undefined FUN_147e70400(void)

double FUN_147e70400(double *param_1,double *param_2,double param_3,double param_4,double param_5)

{
  double dVar1;
  
  if ((param_4 != 3.4028234663852886e+38) || (dVar1 = 3.4028234663852886e+38, NAN(param_4))) {
    dVar1 = SQRT((param_2[2] - param_1[2]) * (param_2[2] - param_1[2]) +
                 (param_2[1] - param_1[1]) * (param_2[1] - param_1[1]) +
                 (*param_2 - *param_1) * (*param_2 - *param_1)) * param_3 * param_4;
    if (1.79769313486232e+308 <= dVar1) {
      dVar1 = 1.79769313486232e+308;
    }
    if (dVar1 <= param_5) {
      dVar1 = param_5;
    }
  }
  return dVar1;
}



// FUNCTION 147e7045e FUN_147e7045e body=134 status=ok
// SIG undefined FUN_147e7045e(void)

undefined4 * FUN_147e7045e(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
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
  
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
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
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  lVar1 = *(longlong *)(param_2 + 0x10);
  *(longlong *)(param_1 + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  uVar2 = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)((longlong)param_1 + 0x4d) = *(undefined8 *)((longlong)param_2 + 0x4d);
  *(undefined8 *)(param_1 + 0x12) = uVar2;
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  lVar1 = *(longlong *)(param_2 + 0x1a);
  *(longlong *)(param_1 + 0x1a) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  FUN_1478cd7e2(param_1 + 0x1c,param_2 + 0x1c);
  return param_1;
}



// FUNCTION 147e704e4 FUN_147e704e4 body=273 status=ok
// SIG undefined FUN_147e704e4(void)

longlong * FUN_147e704e4(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  lVar2 = *param_2;
  if (lVar2 == 0) {
LAB_147e70528:
    param_1[3] = 0;
  }
  else {
    lVar1 = FUN_1410e186c();
    if ((lVar1 == 0) || (*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38))) goto LAB_147e70528;
    if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30) {
      lVar2 = *param_2;
    }
    else {
      lVar2 = 0;
    }
    param_1[3] = lVar2;
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
      lVar2 = param_1[3];
    }
    if (lVar2 != 0) {
      local_28 = *(undefined8 *)(lVar2 + 0x18);
      FUN_1400021e4(&local_28,&local_38);
      if (&local_38 == param_1) {
        if (local_38 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_1 != 0) {
          FUN_1400020a8();
        }
        *param_1 = local_38;
        *(undefined4 *)(param_1 + 1) = local_30;
        *(undefined4 *)((longlong)param_1 + 0xc) = local_2c;
      }
      goto LAB_147e7053f;
    }
  }
  FUN_14020fad6(param_1,L"Invalid");
LAB_147e7053f:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e705f6 FUN_147e705f6 body=377 status=ok
// SIG undefined FUN_147e705f6(void)

undefined8 FUN_147e705f6(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  lVar1 = FUN_1447210f0();
  lVar2 = DAT_14cb0d2b0;
  if ((lVar1 == 0) || (plVar7 = *(longlong **)(lVar1 + 0x168), plVar7 == (longlong *)0x0)) {
    lVar1 = *(longlong *)(DAT_14cb0d2b0 + 0x200);
    if (((lVar1 != 0) &&
        (((lVar4 = FUN_14594a93c(), lVar5 = DAT_14cb0d2b0, lVar4 != 0 &&
          (*(int *)(lVar4 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)))) && (*(longlong *)(lVar2 + 0x200) != 0)) {
      lVar2 = *(longlong *)(DAT_14cb0d2b0 + 0x200);
      if (((lVar2 == 0) || (lVar1 = FUN_14594a93c(), lVar1 == 0)) ||
         ((*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38) ||
          (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
           lVar1 + 0x30)))) {
        lVar2 = 0;
      }
      else {
        lVar2 = *(longlong *)(lVar5 + 0x200);
      }
      lVar5 = FUN_1409035a4();
      lVar1 = DAT_14cb0d2b0;
      if (((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
          lVar5 + 0x30)) {
        lVar2 = *(longlong *)(DAT_14cb0d2b0 + 0x200);
        if ((((lVar2 == 0) || (lVar5 = FUN_14594a93c(), lVar5 == 0)) ||
            (*(int *)(lVar2 + 0x38) < *(int *)(lVar5 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
            lVar5 + 0x30)) {
          plVar6 = (longlong *)0x0;
        }
        else {
          plVar6 = *(longlong **)(lVar1 + 0x200);
        }
        plVar7 = (longlong *)plVar6[0x22];
        if (plVar7 == (longlong *)0x0) {
          (**(code **)(*plVar6 + 1000))(plVar6);
          plVar7 = (longlong *)plVar6[0x22];
          if (plVar7 == (longlong *)0x0) {
            return 0;
          }
        }
        goto LAB_147e70636;
      }
    }
  }
  else {
    lVar2 = FUN_1409035a4();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar7[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
LAB_147e70636:
                    /* WARNING: Could not recover jumptable at 0x000147e7064d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar7 + 0x370))(plVar7,param_1);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 147e70770 FUN_147e70770 body=114 status=ok
// SIG undefined FUN_147e70770(void)

void FUN_147e70770(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (((*(byte *)(param_1 + 0x5a8) & 1) == 0) && ((*(uint *)(param_1 + 8) & 0x10) == 0)) {
    lVar2 = FUN_1447210f0(param_1);
    if ((lVar2 != 0) && (plVar1 = *(longlong **)(lVar2 + 0x168), plVar1 != (longlong *)0x0)) {
      lVar2 = FUN_1409035a4();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x000147e707df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x3b0))(plVar1,param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147e707e2 FUN_147e707e2 body=166 status=ok
// SIG undefined FUN_147e707e2(void)

void FUN_147e707e2(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  
  FUN_141348dd0();
  lVar3 = FUN_1447210f0(param_1);
  if (lVar3 == 0) {
    if ((*(byte *)(param_1 + 0x85) & 4) == 0) {
      return;
    }
    goto LAB_147e70849;
  }
  lVar1 = *(longlong *)(lVar3 + 0x168);
  if (lVar1 == 0) {
LAB_147e7082d:
    bVar5 = 1;
  }
  else {
    lVar4 = FUN_1409035a4();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar1 + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
        lVar4 + 0x30)) goto LAB_147e7082d;
    bVar5 = 0;
  }
  if (((*(byte *)(param_1 + 0x85) & 4) == 0) ||
     ((iVar2 = FUN_14490d72a(lVar3), !(bool)(bVar5 & iVar2 != 3) &&
      ((iVar2 = FUN_14490d72a(lVar3), iVar2 != 3 || ((*(byte *)((longlong)param_1 + 0x61) & 8) != 0)
       ))))) {
    return;
  }
LAB_147e70849:
                    /* WARNING: Could not recover jumptable at 0x000147e70856. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x640))(param_1);
  return;
}



// FUNCTION 147e70888 FUN_147e70888 body=135 status=ok
// SIG undefined FUN_147e70888(void)

void FUN_147e70888(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x498));
  uVar3 = (ulonglong)*(int *)(param_1 + 0x490);
  if (0 < (longlong)uVar3) {
    lVar4 = uVar3 * 0x10 + -8;
    do {
      lVar1 = *(longlong *)(param_1 + 0x488);
      if (((*(longlong *)(lVar1 + -8 + lVar4) == 0) ||
          (lVar1 = *(longlong *)(lVar1 + lVar4), lVar1 == 0)) || (*(int *)(lVar1 + 8) < 1)) {
        FUN_147e82074((longlong *)(param_1 + 0x488),(int)uVar3 + -1);
      }
      lVar4 = lVar4 + -0x10;
      bVar2 = 1 < uVar3;
      uVar3 = uVar3 - 1;
    } while (bVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x000147e70908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x498));
  return;
}



// FUNCTION 147e70910 FUN_147e70910 body=266 status=ok
// SIG undefined FUN_147e70910(void)

char FUN_147e70910(longlong param_1)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  longlong lVar5;
  char cVar6;
  double dVar7;
  undefined1 auStack_58 [32];
  double local_38;
  double dStack_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar6 = '\0';
  if ((*(byte *)(param_1 + 0x99) & 4) != 0) {
    cVar4 = FUN_144729dda(param_1 + 0x40);
    cVar6 = '\0';
    if (cVar4 != '\0') {
      plVar1 = *(longlong **)(param_1 + 0x48);
      if (plVar1 == (longlong *)0x0) {
        lVar5 = FUN_14479d2ce(param_1 + 0x40);
        lVar5 = *(longlong *)(lVar5 + 0x1c8);
        if (lVar5 == 0) {
          local_28 = DAT_14c8464f0;
          local_38 = DAT_14c8464e0;
          dStack_30 = DAT_14c8464e8;
        }
        else {
          local_38 = *(double *)(lVar5 + 0x260);
          dStack_30 = *(double *)(lVar5 + 0x268);
          local_28 = *(double *)(lVar5 + 0x270);
        }
      }
      else {
        (**(code **)(*plVar1 + 0x18))(plVar1,&local_38);
      }
      dVar2 = *(double *)(param_1 + 0x110) - local_38;
      dVar7 = *(double *)(param_1 + 0x118) - dStack_30;
      dVar3 = *(double *)(param_1 + 0x120) - local_28;
      cVar6 = ((double)*(float *)(param_1 + 0x108) < dVar3 * dVar3 + dVar7 * dVar7 + dVar2 * dVar2)
              + '\x01';
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return cVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e70a1c FUN_147e70a1c body=124 status=ok
// SIG undefined FUN_147e70a1c(void)

longlong FUN_147e70a1c(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
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
  return param_1;
}



// FUNCTION 147e70a98 FUN_147e70a98 body=187 status=ok
// SIG undefined FUN_147e70a98(void)

void FUN_147e70a98(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar2 = FUN_144729dda(param_1 + 0x40);
  if (cVar2 != '\0') {
    plVar1 = *(longlong **)(param_1 + 0x48);
    if (plVar1 == (longlong *)0x0) {
      lVar3 = FUN_14479d2ce(param_1 + 0x40);
      lVar3 = *(longlong *)(lVar3 + 0x1c8);
      if (lVar3 == 0) {
        local_28 = DAT_14c8464f0;
        local_38 = DAT_14c8464e0;
        uStack_30 = DAT_14c8464e8;
      }
      else {
        local_38 = *(undefined8 *)(lVar3 + 0x260);
        uStack_30 = *(undefined8 *)(lVar3 + 0x268);
        local_28 = *(undefined8 *)(lVar3 + 0x270);
      }
    }
    else {
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_38);
    }
    *(undefined8 *)(param_1 + 0x120) = local_28;
    *(undefined4 *)(param_1 + 0x110) = (undefined4)local_38;
    *(undefined4 *)(param_1 + 0x114) = local_38._4_4_;
    *(undefined4 *)(param_1 + 0x118) = (undefined4)uStack_30;
    *(undefined4 *)(param_1 + 0x11c) = uStack_30._4_4_;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e70b54 FUN_147e70b54 body=195 status=ok
// SIG undefined FUN_147e70b54(void)

void FUN_147e70b54(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x498));
  uVar4 = *param_2;
  lVar5 = param_2[1];
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 0xc) = *(int *)(lVar5 + 0xc) + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(param_1 + 0x490);
  *(uint *)(param_1 + 0x490) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x494) < iVar3 + 1U) {
    FUN_147e81b3e((longlong *)(param_1 + 0x488),iVar3);
  }
  lVar6 = *(longlong *)(param_1 + 0x488);
  *(undefined8 *)(lVar6 + (longlong)iVar3 * 0x10) = uVar4;
  *(longlong *)(lVar6 + 8 + (longlong)iVar3 * 0x10) = lVar5;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x498));
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
                    /* WARNING: Could not recover jumptable at 0x000147e70bf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x10))(plVar7);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147e70c18 FUN_147e70c18 body=117 status=ok
// SIG undefined FUN_147e70c18(void)

void FUN_147e70c18(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x68);
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
  plVar3 = *(longlong **)(param_1 + 0x40);
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
                    /* WARNING: Could not recover jumptable at 0x000147e70c81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147e70ca0 FUN_147e70ca0 body=166 status=ok
// SIG undefined FUN_147e70ca0(void)

bool FUN_147e70ca0(longlong param_1,longlong param_2)

{
  char cVar1;
  bool bVar2;
  
  if (((5.0 <= ABS(*(float *)(param_1 + 0x3a4) - *(float *)(param_2 + 4))) ||
      (5.0 <= ABS(*(float *)(param_1 + 0x3a8) - *(float *)(param_2 + 8)))) ||
     ((0.0 <= *(float *)(param_1 + 0x3ac) &&
      ((0.0 <= *(float *)(param_2 + 0xc) &&
       (5.0 <= ABS(*(float *)(param_1 + 0x3ac) - *(float *)(param_2 + 0xc)))))))) {
    bVar2 = false;
  }
  else {
    cVar1 = FUN_144a7afa6((longlong *)(param_1 + 0x3b8),(longlong *)(param_2 + 0x18));
    bVar2 = true;
    if ((cVar1 == '\0') && (*(longlong *)(param_1 + 0x3b8) != 0)) {
      bVar2 = *(longlong *)(param_2 + 0x18) == 0;
    }
  }
  return bVar2;
}



// FUNCTION 147e70d46 FUN_147e70d46 body=32 status=ok
// SIG undefined FUN_147e70d46(void)

void FUN_147e70d46(undefined8 param_1,undefined4 param_2)

{
  FUN_147e70d66();
  FUN_1403d8a98(param_1,param_2);
  return;
}



// FUNCTION 147e70d66 FUN_147e70d66 body=121 status=ok
// SIG undefined FUN_147e70d66(void)

void FUN_147e70d66(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((*(uint *)(param_1 + 0xb5) & 1) != 0) {
    *(uint *)(param_1 + 0xb5) = *(uint *)(param_1 + 0xb5) & 0xfffffffe;
    lVar2 = FUN_1447210f0(param_1);
    if ((lVar2 != 0) && (plVar1 = *(longlong **)(lVar2 + 0x168), plVar1 != (longlong *)0x0)) {
      lVar2 = FUN_1409035a4();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30)) {
        (**(code **)(*plVar1 + 0x3a0))(plVar1,param_1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147e70d85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x638))(param_1);
  return;
}



// FUNCTION 147e70de0 FUN_147e70de0 body=26 status=ok
// SIG undefined FUN_147e70de0(void)

void FUN_147e70de0(undefined8 param_1)

{
  FUN_147e70d66();
  FUN_1407fb560(param_1);
  return;
}



// FUNCTION 147e70e04 FUN_147e70e04 body=247 status=ok
// SIG undefined FUN_147e70e04(void)

void FUN_147e70e04(longlong *param_1)

{
  uint uVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong lVar4;
  bool bVar5;
  
  (**(code **)(*param_1 + 0x638))();
  lVar4 = DAT_14cb1d608;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar3 = 0;
  }
  else {
    bVar2 = FUN_144a61b4f();
    uVar3 = (ulonglong)(bVar2 ^ 1);
  }
  if (((*(int *)(lVar4 + uVar3 * 4) != 0) && (lVar4 = FUN_1447210f0(param_1), lVar4 != 0)) &&
     ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0)) {
    FUN_140aeefbc(param_1,0,1);
    return;
  }
  (**(code **)(*param_1 + 0x330))(param_1,1);
  lVar4 = FUN_1447210f0(param_1);
  if (lVar4 != 0) {
    FUN_14021bad2(lVar4,param_1);
  }
  FUN_144757f48(param_1,0x40000000);
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar4 = 0;
  }
  do {
    uVar1 = *(uint *)(lVar4 + 8);
    if ((uVar1 >> 0x15 & 1) != 0) break;
    LOCK();
    bVar5 = uVar1 == *(uint *)(lVar4 + 8);
    if (bVar5) {
      *(uint *)(lVar4 + 8) = uVar1 | 0x200000;
    }
    UNLOCK();
  } while (!bVar5);
  FUN_1417b2844(param_1,1);
  return;
}



// FUNCTION 147e70f2e FUN_147e70f2e body=62 status=ok
// SIG undefined FUN_147e70f2e(void)

void FUN_147e70f2e(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[0x8d];
  if (plVar1 == (longlong *)0x0) {
    (**(code **)(*param_1 + 0x6b8))(param_1);
    plVar1 = (longlong *)param_1[0x8d];
    if (plVar1 == (longlong *)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147e70f4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))();
  return;
}



// FUNCTION 147e70fb0 FUN_147e70fb0 body=95 status=ok
// SIG undefined FUN_147e70fb0(void)

void FUN_147e70fb0(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_147e8232a(param_1,iVar2);
  }
  FUN_147e822c4((longlong)iVar2 * 0x50 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 147e71010 FUN_147e71010 body=134 status=ok
// SIG undefined FUN_147e71010(void)

void FUN_147e71010(longlong *param_1,byte param_2)

{
  if (((((*(uint *)(param_1 + 0xb5) & 4) == 0) == (bool)param_2) &&
      (*(uint *)(param_1 + 0xb5) = (*(uint *)(param_1 + 0xb5) & 0xfffffffb) + (uint)param_2 * 4,
      param_2 == 0)) && (0 < (int)param_1[0x90])) {
    (**(code **)(*param_1 + 0x6f0))(param_1,param_1 + 0x8f);
    FUN_145972389(param_1[0x8f],(int)param_1[0x90]);
    *(undefined4 *)(param_1 + 0x90) = 0;
    if (*(int *)((longlong)param_1 + 0x484) != 0) {
      FUN_147e823be(param_1 + 0x8f,0);
      return;
    }
  }
  return;
}



// FUNCTION 147e71096 FUN_147e71096 body=644 status=ok
// SIG undefined FUN_147e71096(void)

void FUN_147e71096(longlong *param_1,longlong *param_2,uint param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong **local_80;
  longlong local_78;
  undefined4 local_70 [2];
  longlong *local_68;
  longlong local_60;
  int local_58;
  longlong *local_50;
  longlong **local_48;
  undefined4 *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar5 = (longlong *)param_2[0x22];
  local_50 = param_2;
  if (plVar5 == (longlong *)0x0) {
    (**(code **)(*param_2 + 1000))(param_2);
    plVar5 = (longlong *)param_2[0x22];
    if (plVar5 == (longlong *)0x0) goto LAB_147e7119f;
  }
  cVar2 = (**(code **)(*plVar5 + 0x2a8))(plVar5);
  if (((param_3 < 0x10) && (cVar2 == '\0')) &&
     ((*(uint *)((longlong)plVar5 + 0x3c) >> (param_3 & 0x1f) & 1) != 0)) {
    local_80 = (longlong **)param_2[3];
    FUN_1400021e4(&local_80,&local_60);
    plVar5 = param_1 + 0xa9;
    iVar3 = (int)param_1[0xaa];
    if (0 < iVar3) {
      lVar4 = 0x10;
      lVar6 = 0;
      do {
        lVar7 = *plVar5;
        iVar1 = *(int *)(lVar7 + -8 + lVar4);
        if (iVar1 == local_58) {
          if (1 < iVar1) {
            iVar3 = FUN_144a80a00(*(undefined8 *)(lVar7 + -0x10 + lVar4),local_60);
            if (iVar3 != 0) {
              iVar3 = (int)param_1[0xaa];
              goto LAB_147e7116d;
            }
            lVar7 = *plVar5;
          }
LAB_147e712ca:
          plVar5 = local_50;
          if ((local_50 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(local_50);
          }
          *(longlong **)(lVar7 + 8 + lVar4) = plVar5;
          local_78 = lVar4 + param_1[0xa9];
          local_80 = &local_50;
          FUN_147e8242e(param_1 + 0xab,&local_48);
          goto LAB_147e71190;
        }
        if (local_58 + iVar1 == 1) goto LAB_147e712ca;
LAB_147e7116d:
        lVar6 = lVar6 + 1;
        lVar4 = lVar4 + 0x20;
      } while (lVar6 < iVar3);
    }
    iVar3 = (**(code **)(*param_1 + 0x7a8))(param_1);
    if ((int)param_1[0xaa] < iVar3) {
      local_88 = 0;
      FUN_147e704e4(&local_80);
      local_68 = local_50;
      if ((local_50 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(local_50);
      }
      iVar3 = local_58 + -1;
      if (local_58 == 0) {
        iVar3 = 0;
      }
      FUN_1402980a2(&local_80,local_60,iVar3);
      local_70[0] = (**(code **)(*param_1 + 0x7c0))(param_1,local_50);
      iVar3 = (int)param_1[0xaa];
      *(uint *)(param_1 + 0xaa) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0x554) < iVar3 + 1U) {
        FUN_147e82600(plVar5,iVar3);
      }
      FUN_147e82582((longlong)iVar3 * 0x20 + param_1[0xa9],&local_80);
      local_48 = &local_50;
      local_40 = local_70;
      FUN_147e8242e(param_1 + 0xab,local_34);
      if (local_80 != (longlong **)0x0) {
        FUN_1400020a8();
      }
    }
LAB_147e71190:
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
LAB_147e7119f:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e7131c FUN_147e7131c body=144 status=ok
// SIG undefined FUN_147e7131c(void)

void FUN_147e7131c(longlong *param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    (**(code **)(*param_1 + 0x798))(param_1,param_2);
    goto LAB_147e7133d;
  }
  lVar2 = FUN_1447210f0(param_1);
  if ((lVar2 == 0) || (lVar2 = *(longlong *)(lVar2 + 0x168), lVar2 == 0)) {
LAB_147e7138a:
    lVar2 = 0;
  }
  else {
    lVar3 = FUN_1409035a4();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) goto LAB_147e7138a;
  }
  uVar1 = FUN_147e713ac(lVar2,param_1);
  (**(code **)(*param_1 + 0x790))(param_1,param_2,uVar1);
LAB_147e7133d:
                    /* WARNING: Could not recover jumptable at 0x000147e7134a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x7a0))(param_1);
  return;
}



// FUNCTION 147e713ac FUN_147e713ac body=313 status=ok
// SIG undefined FUN_147e713ac(void)

ulonglong FUN_147e713ac(longlong param_1,longlong param_2)

{
  float fVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar4 = 0;
  if ((*(int *)(param_1 + 0x98) != 1) && (uVar4 = 0xffffffff, 0 < *(int *)(param_1 + 0x98))) {
    lVar6 = 0x18;
    uVar5 = 0;
    do {
      cVar3 = FUN_1478cda0a(*(longlong *)(param_1 + 0x90) + lVar6 + -0x18);
      if ((((cVar3 != '\0') &&
           (lVar2 = *(longlong *)(param_1 + 0x90),
           ABS(*(float *)(lVar2 + -0x14 + lVar6) - *(float *)(param_2 + 0x3a4)) < 5.0)) &&
          (ABS(*(float *)(lVar2 + -0x10 + lVar6) - *(float *)(param_2 + 0x3a8)) < 5.0)) &&
         (((fVar1 = *(float *)(lVar2 + -0xc + lVar6), fVar1 < 0.0 ||
           (*(float *)(param_2 + 0x3ac) < 0.0)) || (ABS(fVar1 - *(float *)(param_2 + 0x3ac)) < 5.0))
         )) {
        cVar3 = FUN_144a7afa6((longlong *)(lVar2 + lVar6),(longlong *)(param_2 + 0x3b8));
        if (((cVar3 != '\0') || (*(longlong *)(lVar2 + lVar6) == 0)) ||
           (*(longlong *)(param_2 + 0x3b8) == 0)) {
          return uVar5 & 0xffffffff;
        }
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x88;
    } while ((longlong)uVar5 < (longlong)*(int *)(param_1 + 0x98));
  }
  return uVar4;
}



// FUNCTION 147e714e6 FUN_147e714e6 body=94 status=ok
// SIG undefined FUN_147e714e6(void)

void FUN_147e714e6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  
  if (0 < (longlong)*(int *)(param_1 + 0x550)) {
    plVar1 = (longlong *)(param_1 + 0x548);
    plVar3 = (longlong *)(*plVar1 + 0x18);
    uVar2 = 0;
    do {
      if (*plVar3 == param_2) {
        FUN_147e82686(param_1 + 0x558);
        FUN_147e82768(plVar1,uVar2 & 0xffffffff);
        FUN_147e827c0(plVar1);
        return;
      }
      uVar2 = uVar2 + 1;
      plVar3 = plVar3 + 4;
    } while ((longlong)*(int *)(param_1 + 0x550) != uVar2);
  }
  return;
}



// FUNCTION 147e71546 FUN_147e71546 body=284 status=ok
// SIG undefined FUN_147e71546(void)

void FUN_147e71546(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int iVar2;
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
  plVar1 = param_2 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar2 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar2 = (int)param_2[5];
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = param_2;
  if ((iStack_44 != iVar2) || (uStack_50 != plVar1)) {
    do {
      (**(code **)(*param_1 + 0x790))
                (param_1,*(undefined8 *)(*local_80 + (longlong)iStack_64 * 0x10),param_3);
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != param_2 ||
             ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || iStack_64 != iVar2));
  }
  (**(code **)(*param_1 + 0x7a0))(param_1);
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e716a4 FUN_147e716a4 body=214 status=ok
// SIG undefined FUN_147e716a4(void)

int FUN_147e716a4(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x498));
  iVar1 = *(int *)(param_1 + 0x494);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x498));
  iVar2 = *(int *)(param_1 + 0x554);
  iVar3 = *(int *)(param_1 + 0x504);
  iVar4 = *(int *)(param_1 + 0x524);
  uVar5 = *(uint *)(param_1 + 0x540);
  iVar6 = *(int *)(param_1 + 0x564);
  iVar7 = *(int *)(param_1 + 0x584);
  uVar8 = *(uint *)(param_1 + 0x5a0);
  if (*(longlong **)(param_1 + 0x468) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x468) + 0x58))();
  }
  iVar9 = uVar5 * 4;
  if (uVar5 < 2) {
    iVar9 = 0;
  }
  iVar10 = uVar8 * 4;
  if (uVar8 < 2) {
    iVar10 = 0;
  }
  return (iVar3 + iVar2) * 0x20 + iVar1 * 0x10 + (iVar4 + 0x1fU >> 5) * 4 + iVar9 + iVar6 * 0x18 +
         (iVar7 + 0x1fU >> 5) * 4 + iVar10;
}



// FUNCTION 147e7177a FUN_147e7177a body=82 status=ok
// SIG undefined FUN_147e7177a(void)

void FUN_147e7177a(longlong param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  *(undefined1 *)(param_1 + 0x5b0) = *param_2;
  uVar4 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x5b4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0x5bc) = uVar4;
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x5c8) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x5cc) = uVar1;
  *(undefined4 *)(param_1 + 0x5d0) = uVar2;
  *(undefined4 *)(param_1 + 0x5d4) = uVar3;
  FUN_144a787a6(param_1 + 0x5d8,param_2 + 0x28);
  FUN_1478cd852(param_1 + 0x3a0,param_2);
  return;
}



// FUNCTION 147e717cc FUN_147e717cc body=772 status=ok
// SIG undefined FUN_147e717cc(void)

void FUN_147e717cc(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  double *pdVar1;
  uint uVar2;
  longlong lVar3;
  double dVar4;
  byte bVar5;
  undefined ***pppuVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  code *pcVar10;
  byte bVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined1 local_100 [8];
  double *local_f8;
  undefined4 local_f0;
  code *local_e8 [2];
  undefined ***local_d8;
  undefined **local_c8;
  double *local_c0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  undefined1 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar9 = *param_1;
  lVar7 = *(longlong *)(lVar9 + 0xa0);
  if (lVar7 != 0) {
    pcVar10 = (code *)*param_2;
    if ((int)pcVar10 != -1) {
      lVar12 = *(longlong *)(lVar7 + 0x90);
      lVar8 = (longlong)(int)pcVar10 * 0x490;
      if ((int)((ulonglong)pcVar10 >> 0x20) < *(int *)(lVar12 + 0x488 + lVar8)) {
        lVar3 = *(longlong *)(lVar12 + 0x480 + lVar8);
        lVar12 = lVar12 + lVar8;
        if (lVar3 != 0) {
          lVar12 = lVar3;
        }
        dVar4 = *(double *)(lVar12 + 0x38 + ((longlong)pcVar10 >> 0x20) * 0x48);
        uVar2 = *(uint *)((longlong)dVar4 + 0xe8);
        if ((uVar2 & 0x10) == 0) {
          bVar13 = true;
          if (((*(int *)((longlong)dVar4 + 0x28) == 0) &&
              ((uVar2 & 1) == 0 && *(int *)((longlong)dVar4 + 0x18) == 0)) &&
             ((*(byte *)((longlong)dVar4 + 0xd0) & 0x30) == 0)) {
            if (DAT_14c76124c == '\x01') {
              bVar13 = *(char *)((longlong)dVar4 + 0xd4) != '\x03';
            }
            else {
              bVar13 = false;
            }
          }
          pdVar1 = (double *)(lVar12 + ((longlong)pcVar10 >> 0x20) * 0x48);
          bVar11 = 2;
          if (((*(int *)((longlong)dVar4 + 0xa8) == 0) && (*(int *)((longlong)dVar4 + 0xb8) == 0))
             && (*(int *)((longlong)dVar4 + 200) == 0)) {
            bVar11 = ((uVar2 & 6) != 0) * '\x02';
          }
          bVar5 = 2;
          if ((param_3 & 2) == 0) {
            bVar5 = (char)*(undefined4 *)((longlong)dVar4 + 0xd0) * '\x02' & 4U | bVar13 | bVar11;
          }
          bVar11 = 3;
          if ((param_3 & 1) == 0) {
            bVar11 = bVar5;
          }
          lVar9 = param_1[1];
          FUN_1446ddc76(local_100,"Remove from navoctree",1);
          local_d8 = (undefined ***)0x0;
          local_c8 = &PTR_LAB_14abb5250;
          local_e8[0] = FUN_14383c68e;
          local_80 = pdVar1[2] + pdVar1[5];
          local_88 = pdVar1[1] + pdVar1[4];
          local_90 = *pdVar1 + pdVar1[3];
          local_98 = pdVar1[2] - pdVar1[5];
          local_a0 = pdVar1[1] - pdVar1[4];
          local_a8 = *pdVar1 - pdVar1[3];
          local_f8 = &local_a8;
          local_78 = 1;
          local_f0 = 1;
          local_118 = 0;
          local_c0 = pdVar1;
          FUN_143833572(lVar9,&local_f8,bVar11,local_e8);
          if (local_e8[0] != (code *)0x0) {
            pppuVar6 = local_d8;
            if (local_d8 == (undefined ***)0x0) {
              pppuVar6 = &local_c8;
            }
            (*(code *)(*pppuVar6)[2])();
          }
          lVar9 = *param_1;
          dVar4 = pdVar1[7];
          pcVar10 = (code *)*param_2;
          lVar7 = *(longlong *)(lVar9 + 0xa0);
        }
        lVar12 = *(longlong *)((longlong)dVar4 + 0xd8);
        local_110 = *(undefined4 *)(lVar12 + 0x40);
        uStack_10c = *(undefined4 *)(lVar12 + 0x44);
        uStack_108 = *(undefined4 *)(lVar12 + 0x48);
        uStack_104 = *(undefined4 *)(lVar12 + 0x4c);
        local_e8[0] = pcVar10;
        if (lVar7 != 0) {
          FUN_1438347c4(local_110,local_e8);
          FUN_147e7edf0(*(longlong *)(lVar9 + 0xa0) + 0xf8,&local_110);
        }
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e71ad2 FUN_147e71ad2 body=74 status=ok
// SIG undefined FUN_147e71ad2(void)

void FUN_147e71ad2(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147e71b1c FUN_147e71b1c body=278 status=ok
// SIG undefined FUN_147e71b1c(void)

double * FUN_147e71b1c(double *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  undefined8 *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  lVar4 = *param_2;
  dVar2 = *(double *)(lVar4 + 200);
  dVar3 = *(double *)(lVar4 + 0xd0);
  dVar7 = (*(double *)(lVar4 + 0xe8) - dVar3) * 0.5;
  dVar8 = (*(double *)(lVar4 + 0xe0) - dVar2) * 0.5;
  dVar6 = (*(double *)(lVar4 + 0xd8) - *(double *)(lVar4 + 0xc0)) * 0.5;
  *param_1 = *(double *)(lVar4 + 0xc0) + dVar6;
  param_1[1] = dVar2 + dVar8;
  param_1[2] = dVar3 + dVar7;
  param_1[3] = dVar6;
  param_1[4] = dVar8;
  param_1[5] = dVar7;
  param_1[6] = SQRT(dVar7 * dVar7 + dVar6 * dVar6 + dVar8 * dVar8);
  puVar5 = (undefined8 *)FUN_14001cc68(0x100,0x10);
  puVar5[1] = &DAT_100000001;
  *puVar5 = &PTR_LAB_14abb4570;
  puVar1 = puVar5 + 2;
  FUN_147e7f4f2(puVar1,param_2);
  param_1[7] = (double)puVar1;
  param_1[8] = (double)puVar5;
  FUN_147e7f5a0(param_1 + 7,puVar1);
  return param_1;
}



// FUNCTION 147e71c32 FUN_147e71c32 body=264 status=ok
// SIG undefined FUN_147e71c32(void)

undefined8 FUN_147e71c32(longlong param_1,uint *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    plVar7 = (longlong *)(*(longlong *)(param_1 + 0xa0) + 0xf8);
    uVar2 = FUN_144a78877(uStack_34 ^ local_38,uStack_2c * 0x17 + uStack_30);
    iVar3 = FUN_147e7f48c(plVar7,uVar2,&local_38);
    if (((iVar3 != -1) &&
        (lVar5 = (longlong)iVar3 * 0x20 + *plVar7, plVar7 = (longlong *)(lVar5 + 0x10),
        plVar7 != (longlong *)0x0 && lVar5 != 0)) && (*(longlong *)(param_1 + 0xa0) != 0)) {
      lVar5 = *plVar7;
      if ((int)lVar5 != -1) {
        lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x90);
        lVar6 = (longlong)(int)lVar5 * 0x490;
        if ((int)((ulonglong)lVar5 >> 0x20) < *(int *)(lVar8 + 0x488 + lVar6)) {
          lVar1 = *(longlong *)(lVar8 + 0x480 + lVar6);
          lVar8 = lVar8 + lVar6;
          if (lVar1 != 0) {
            lVar8 = lVar1;
          }
          uVar4 = *(undefined8 *)(lVar8 + 0x38 + (lVar5 >> 0x20) * 0x48);
          goto LAB_147e71c5e;
        }
      }
    }
  }
  uVar4 = 0;
LAB_147e71c5e:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e71d3c FUN_147e71d3c body=284 status=ok
// SIG undefined FUN_147e71d3c(void)

void FUN_147e71d3c(longlong *param_1,longlong *param_2,undefined1 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [36];
  undefined1 local_74 [4];
  undefined1 *local_70;
  longlong *local_68;
  longlong *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  ulonglong uStack_40;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = 0;
  uStack_40 = 0;
  lVar3 = *param_2;
  local_58 = *(undefined4 *)(lVar3 + 0x40);
  uStack_54 = *(undefined4 *)(lVar3 + 0x44);
  uStack_50 = *(undefined4 *)(lVar3 + 0x48);
  uStack_4c = *(undefined4 *)(lVar3 + 0x4c);
  local_29 = param_3;
  FUN_147e7f844(*param_1 + 0x108,&local_58,&local_48);
  local_70 = &local_29;
  local_68 = param_2;
  local_60 = param_1;
  if ((longlong)(int)uStack_40 == 0) {
    FUN_143833d44(&local_70);
  }
  else {
    lVar2 = (longlong)(int)uStack_40 << 4;
    lVar3 = local_48;
    do {
      FUN_143833876(param_1,lVar3,0xc);
      lVar3 = lVar3 + 0x10;
      lVar2 = lVar2 + -0x10;
    } while (lVar2 != 0);
    cVar1 = FUN_143833d44(&local_70);
    if (cVar1 != '\0') {
      if ((longlong)(int)uStack_40 != 0) {
        lVar2 = (longlong)(int)uStack_40 << 4;
        lVar3 = local_48;
        do {
          FUN_14383229e(param_1,local_74,lVar3,0xc);
          lVar3 = lVar3 + 0x10;
          lVar2 = lVar2 + -0x10;
        } while (lVar2 != 0);
      }
    }
  }
  FUN_147e83186(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e71e5a FUN_147e71e5a body=591 status=ok
// SIG undefined FUN_147e71e5a(void)

undefined8 FUN_147e71e5a(longlong param_1,undefined8 *param_2,byte *param_3,double *param_4)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  undefined4 uVar9;
  int iVar10;
  longlong lVar11;
  int7 iVar13;
  undefined8 uVar12;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  byte bVar17;
  longlong *plVar18;
  bool bVar19;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar12 = *param_2;
  uStack_70 = param_2[1];
  local_78 = uVar12;
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    plVar18 = (longlong *)(*(longlong *)(param_1 + 0xa0) + 0xf8);
    local_78._4_4_ = (uint)((ulonglong)uVar12 >> 0x20);
    local_78._0_4_ = (uint)uVar12;
    uVar14 = local_78._4_4_ ^ (uint)local_78;
    uVar9 = FUN_144a78877(uVar14,(int)((ulonglong)uStack_70 >> 0x20) * 0x17 + (int)uStack_70);
    iVar10 = FUN_147e7f48c(plVar18,uVar9,&local_78);
    if (((iVar10 != -1) &&
        (lVar11 = (longlong)iVar10 * 0x20 + *plVar18, plVar18 = (longlong *)(lVar11 + 0x10),
        plVar18 != (longlong *)0x0 && lVar11 != 0)) && (*(longlong *)(param_1 + 0xa0) != 0)) {
      lVar11 = *plVar18;
      if ((int)lVar11 != -1) {
        lVar15 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x90);
        lVar16 = (longlong)(int)lVar11 * 0x490;
        if ((int)((ulonglong)lVar11 >> 0x20) < *(int *)(lVar15 + 0x488 + lVar16)) {
          lVar8 = *(longlong *)(lVar15 + 0x480 + lVar16);
          lVar15 = lVar15 + lVar16;
          if (lVar8 != 0) {
            lVar15 = lVar8;
          }
          lVar16 = *(longlong *)(lVar15 + 0x38 + (lVar11 >> 0x20) * 0x48);
          iVar13 = (int7)(lVar11 >> 0x28);
          bVar19 = true;
          if (((*(int *)(lVar16 + 0x28) == 0) && (*(int *)(lVar16 + 0x18) == 0)) &&
             (((*(byte *)(lVar16 + 0xe8) & 1) == 0 && ((*(byte *)(lVar16 + 0xd0) & 0x30) == 0)))) {
            if (DAT_14c76124c == '\x01') {
              bVar19 = *(char *)(lVar16 + 0xd4) != '\x03';
            }
            else {
              bVar19 = false;
              iVar13 = 0;
            }
          }
          pdVar1 = (double *)(lVar15 + (lVar11 >> 0x20) * 0x48);
          bVar17 = 2;
          if (((*(int *)(lVar16 + 0xa8) == 0) && (*(int *)(lVar16 + 0xb8) == 0)) &&
             (*(int *)(lVar16 + 200) == 0)) {
            bVar17 = ((*(byte *)(lVar16 + 0xe8) & 6) != 0) * '\x02';
          }
          *param_3 = (char)*(undefined4 *)(lVar16 + 0xd0) * '\x02' & 4U | bVar19 | bVar17;
          dVar2 = pdVar1[2];
          dVar3 = pdVar1[5];
          dVar4 = *pdVar1;
          dVar5 = pdVar1[1];
          dVar6 = pdVar1[4];
          dVar7 = pdVar1[3];
          *param_4 = dVar4 - dVar7;
          param_4[1] = dVar5 - dVar6;
          param_4[2] = dVar2 - dVar3;
          param_4[3] = dVar4 + dVar7;
          param_4[4] = dVar5 + dVar6;
          param_4[5] = dVar2 + dVar3;
          *(undefined1 *)(param_4 + 6) = 1;
          uVar12 = CONCAT71(iVar13,1);
          goto LAB_147e71e9f;
        }
      }
    }
  }
  uVar12 = 0;
LAB_147e71e9f:
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e720aa FUN_147e720aa body=1283 status=ok
// SIG undefined FUN_147e720aa(void)

void FUN_147e720aa(longlong *param_1,uint *param_2,undefined4 *param_3,undefined4 *param_4)

{
  longlong *plVar1;
  code *pcVar2;
  int *piVar3;
  undefined8 uVar4;
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
  int iVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong lVar19;
  byte bVar20;
  longlong lVar21;
  undefined8 *puVar22;
  longlong lVar23;
  ulonglong uVar24;
  undefined ***pppuVar25;
  bool bVar26;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a0 [8];
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  code *local_78;
  longlong *local_70;
  undefined ***local_68;
  undefined **local_58;
  undefined8 local_50;
  longlong *local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar23 = *param_1;
  local_88 = *param_2;
  uStack_84 = param_2[1];
  uStack_80 = param_2[2];
  uStack_7c = param_2[3];
  if (*(longlong *)(lVar23 + 0xa0) == 0) {
LAB_147e720ef:
    uVar15 = FUN_144a78877(param_2[1] ^ *param_2,
                           (int)((ulonglong)*(undefined8 *)(param_2 + 2) >> 0x20) * 0x17 +
                           (int)*(undefined8 *)(param_2 + 2));
    iVar16 = FUN_147e82de0(lVar23 + 0x50,uVar15,param_2);
    if (iVar16 == -1) goto LAB_147e7213e;
    if ((*(byte *)(*(longlong *)(*param_1 + 0x50) + 0x5a + (longlong)iVar16 * 0x68) & 2) != 0)
    goto LAB_147e7213e;
    lVar23 = *(longlong *)(*param_1 + 0x50) + (longlong)iVar16 * 0x68;
    uVar4 = *(undefined8 *)(lVar23 + 0x10);
    plVar18 = (longlong *)FUN_14001cc68(0x120,0x10);
    plVar18[1] = (longlong)&DAT_100000001;
    *plVar18 = (longlong)&PTR_FUN_14a79d310;
    pcVar2 = (code *)(plVar18 + 2);
    FUN_147e831d0(pcVar2,uVar4);
    local_78 = pcVar2;
    local_70 = plVar18;
    FUN_1478d8b32(&local_78,pcVar2);
    *(longlong *)(local_78 + 0xf0) = *(longlong *)(param_3 + 0xc);
    uVar15 = *param_3;
    uVar5 = param_3[1];
    uVar6 = param_3[2];
    uVar7 = param_3[3];
    uVar8 = param_3[4];
    uVar9 = param_3[5];
    uVar10 = param_3[6];
    uVar11 = param_3[7];
    uVar12 = param_3[9];
    uVar13 = param_3[10];
    uVar14 = param_3[0xb];
    *(undefined4 *)(local_78 + 0xe0) = param_3[8];
    *(undefined4 *)(local_78 + 0xe4) = uVar12;
    *(undefined4 *)(local_78 + 0xe8) = uVar13;
    *(undefined4 *)(local_78 + 0xec) = uVar14;
    *(undefined4 *)(local_78 + 0xd0) = uVar8;
    *(undefined4 *)(local_78 + 0xd4) = uVar9;
    *(undefined4 *)(local_78 + 0xd8) = uVar10;
    *(undefined4 *)(local_78 + 0xdc) = uVar11;
    *(undefined4 *)(local_78 + 0xc0) = uVar15;
    *(undefined4 *)(local_78 + 0xc4) = uVar5;
    *(undefined4 *)(local_78 + 200) = uVar6;
    *(undefined4 *)(local_78 + 0xcc) = uVar7;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_70 + 1) = (int)local_70[1] + 1;
      UNLOCK();
    }
    plVar18 = *(longlong **)(lVar23 + 0x18);
    *(code **)(lVar23 + 0x10) = local_78;
    *(longlong **)(lVar23 + 0x18) = local_70;
    if (plVar18 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar18 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar18)(plVar18);
        LOCK();
        piVar3 = (int *)((longlong)plVar18 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
        }
      }
    }
    FUN_147e72796(lVar23,param_4);
    plVar18 = local_70;
    if (local_70 == (longlong *)0x0) goto LAB_147e7213e;
    LOCK();
    plVar1 = local_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_147e7213e;
    (**(code **)*local_70)(local_70);
    LOCK();
    piVar3 = (int *)((longlong)plVar18 + 0xc);
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 != 0) goto LAB_147e7213e;
    lVar23 = *plVar18;
  }
  else {
    plVar18 = (longlong *)(*(longlong *)(lVar23 + 0xa0) + 0xf8);
    uVar15 = FUN_144a78877(uStack_84 ^ local_88,uStack_7c * 0x17 + uStack_80);
    iVar16 = FUN_147e7f48c(plVar18,uVar15,&local_88);
    if (iVar16 == -1) {
      lVar23 = *param_1;
      goto LAB_147e720ef;
    }
    lVar21 = (longlong)iVar16 * 0x20 + *plVar18;
    puVar22 = (undefined8 *)(lVar21 + 0x10);
    lVar23 = *param_1;
    if ((puVar22 == (undefined8 *)0x0 || lVar21 == 0) ||
       (lVar21 = *(longlong *)(lVar23 + 0xa0), lVar21 == 0)) goto LAB_147e720ef;
    iVar16 = (int)*puVar22;
    if ((iVar16 == -1) ||
       (*(int *)(*(longlong *)(lVar21 + 0x90) + 0x488 + (longlong)iVar16 * 0x490) <=
        (int)((ulonglong)*puVar22 >> 0x20))) goto LAB_147e720ef;
    FUN_147e725ae(lVar21,puVar22,param_3);
    if ((int)param_4[2] < 1) goto LAB_147e7213e;
    local_98 = *param_2;
    uStack_94 = param_2[1];
    uStack_90 = param_2[2];
    uStack_8c = param_2[3];
    if (*(longlong *)(*param_1 + 0xa0) == 0) goto LAB_147e7213e;
    plVar18 = (longlong *)(*(longlong *)(*param_1 + 0xa0) + 0xf8);
    uVar15 = FUN_144a78877(uStack_94 ^ local_98,uStack_8c * 0x17 + uStack_90);
    iVar16 = FUN_147e7f48c(plVar18,uVar15,&local_98);
    if (((iVar16 == -1) ||
        (lVar23 = (longlong)iVar16 * 0x20 + *plVar18, plVar18 = (longlong *)(lVar23 + 0x10),
        plVar18 == (longlong *)0x0 || lVar23 == 0)) || (*(longlong *)(*param_1 + 0xa0) == 0))
    goto LAB_147e7213e;
    lVar23 = *plVar18;
    if ((int)lVar23 == -1) goto LAB_147e7213e;
    lVar21 = *(longlong *)(*(longlong *)(*param_1 + 0xa0) + 0x90);
    lVar19 = (longlong)(int)lVar23 * 0x490;
    if (*(int *)(lVar21 + 0x488 + lVar19) <= (int)((ulonglong)lVar23 >> 0x20)) goto LAB_147e7213e;
    lVar17 = *(longlong *)(lVar21 + 0x480 + lVar19);
    lVar21 = lVar21 + lVar19;
    if (lVar17 != 0) {
      lVar21 = lVar17;
    }
    lVar19 = param_1[1];
    FUN_1446ddc76(local_a0,"Bounds change",1);
    lVar17 = *(longlong *)(lVar21 + 0x38 + (lVar23 >> 0x20) * 0x48);
    local_50 = *(undefined8 *)(lVar17 + 0xd8);
    plVar18 = *(longlong **)(lVar17 + 0xe0);
    if (plVar18 == (longlong *)0x0) {
      local_48 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      UNLOCK();
      lVar17 = *(longlong *)(lVar21 + (lVar23 >> 0x20) * 0x48 + 0x38);
      local_48 = plVar18;
    }
    local_58 = &PTR_LAB_14abb52d0;
    local_68 = (undefined ***)0x0;
    local_78 = FUN_14383c9b0;
    bVar26 = true;
    if (((*(int *)(lVar17 + 0x28) == 0) && (*(int *)(lVar17 + 0x18) == 0)) &&
       (((*(byte *)(lVar17 + 0xe8) & 1) == 0 && ((*(byte *)(lVar17 + 0xd0) & 0x30) == 0)))) {
      if (DAT_14c76124c == '\x01') {
        bVar26 = *(char *)(lVar17 + 0xd4) != '\x03';
      }
      else {
        bVar26 = false;
      }
    }
    bVar20 = 2;
    if (((*(int *)(lVar17 + 0xa8) == 0) && (*(int *)(lVar17 + 0xb8) == 0)) &&
       (*(int *)(lVar17 + 200) == 0)) {
      bVar20 = ((*(byte *)(lVar17 + 0xe8) & 6) != 0) * '\x02';
    }
    uVar24 = (ulonglong)
             CONCAT31((int3)((uint)*(undefined4 *)(lVar17 + 0xd0) >> 8),
                      (char)*(undefined4 *)(lVar17 + 0xd0) * '\x02') & 0xffffffffffffff04;
    local_b8 = *param_4;
    uStack_b4 = param_4[1];
    uStack_b0 = param_4[2];
    uStack_ac = param_4[3];
    local_c8 = 0;
    FUN_143833572(lVar19,&local_b8,CONCAT71((int7)(uVar24 >> 8),(byte)uVar24 | bVar26 | bVar20),
                  &local_78);
    if (local_78 != (code *)0x0) {
      pppuVar25 = &local_58;
      if (local_68 != (undefined ***)0x0) {
        pppuVar25 = local_68;
      }
      (*(code *)(*pppuVar25)[2])(pppuVar25);
    }
    if (plVar18 == (longlong *)0x0) goto LAB_147e7213e;
    LOCK();
    plVar1 = plVar18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_147e7213e;
    (**(code **)*plVar18)(plVar18);
    LOCK();
    piVar3 = (int *)((longlong)plVar18 + 0xc);
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 != 0) goto LAB_147e7213e;
    lVar23 = *plVar18;
  }
  (**(code **)(lVar23 + 0x10))(plVar18);
LAB_147e7213e:
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e725ae FUN_147e725ae body=486 status=ok
// SIG undefined FUN_147e725ae(void)

void FUN_147e725ae(longlong param_1,longlong *param_2,double *param_3)

{
  longlong *plVar1;
  int *piVar2;
  double *pdVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar6 = *param_2;
  lVar8 = (longlong)(int)lVar6 * 0x490;
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x480 + lVar8);
  lVar8 = *(longlong *)(param_1 + 0x90) + lVar8;
  if (lVar7 != 0) {
    lVar8 = lVar7;
  }
  lVar7 = lVar6 >> 0x20;
  local_48 = *(double *)(lVar8 + 0x30 + lVar7 * 0x48);
  pdVar3 = (double *)(lVar8 + lVar7 * 0x48);
  local_78 = *pdVar3;
  dStack_70 = pdVar3[1];
  puVar4 = (undefined8 *)(lVar8 + 0x10 + lVar7 * 0x48);
  local_68 = (double)*puVar4;
  dStack_60 = (double)puVar4[1];
  puVar4 = (undefined8 *)(lVar8 + 0x20 + lVar7 * 0x48);
  local_58 = (double)*puVar4;
  dStack_50 = (double)puVar4[1];
  local_40 = *(undefined8 *)(lVar8 + 0x38 + lVar7 * 0x48);
  local_38 = *(longlong **)(lVar8 + 0x40 + lVar7 * 0x48);
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    lVar6 = *param_2;
  }
  FUN_147e80600(param_1 + 0x10,lVar6);
  *(ulonglong *)(param_1 + 0x158) =
       (longlong)*(int *)(param_1 + 0x9c) * 0x490 + (longlong)*(int *)(param_1 + 0x7c) * 8 +
       (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x70) + 4) * 0x48;
  dStack_50 = (param_3[5] - param_3[2]) * 0.5;
  local_58 = (param_3[4] - param_3[1]) * 0.5;
  dStack_60 = (param_3[3] - *param_3) * 0.5;
  local_68 = param_3[2] + dStack_50;
  dStack_70 = param_3[1] + local_58;
  local_78 = *param_3 + dStack_60;
  local_48 = SQRT(dStack_50 * dStack_50 + dStack_60 * dStack_60 + local_58 * local_58);
  FUN_147e7fb40(param_1 + 0x10,&local_78);
  plVar5 = local_38;
  *(ulonglong *)(param_1 + 0x158) =
       (longlong)*(int *)(param_1 + 0x9c) * 0x490 + (longlong)*(int *)(param_1 + 0x7c) * 8 +
       (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x70) + 4) * 0x48;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e72796 FUN_147e72796 body=94 status=ok
// SIG undefined FUN_147e72796(void)

void FUN_147e72796(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140555802(param_1,iVar2);
    }
    memcpy((void *)((longlong)iVar2 * 0x38 + *param_1),(void *)*param_2,(longlong)(int)uVar1 * 0x38)
    ;
    return;
  }
  return;
}



// FUNCTION 147e727f4 FUN_147e727f4 body=759 status=ok
// SIG undefined FUN_147e727f4(void)

undefined8
FUN_147e727f4(undefined8 *param_1,undefined4 *param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  lVar1 = FUN_147e72aec(*param_1);
  if (lVar1 == 0) {
LAB_147e72ae8:
    uVar6 = 0;
    goto LAB_147e72a95;
  }
  if ((longlong)*(int *)(lVar1 + 0xa8) == 0) {
    lVar8 = (longlong)*(int *)(lVar1 + 0xb8);
    if (lVar8 != 0) goto LAB_147e72930;
    if (((*(int *)(lVar1 + 200) == 0) && ((*(byte *)(lVar1 + 0xd0) & 0x30) == 0)) &&
       (*(char *)(lVar1 + 0xd4) == '\x03')) goto LAB_147e72ae8;
  }
  else {
    lVar8 = *(longlong *)(lVar1 + 0xa0);
    lVar7 = (longlong)*(int *)(lVar1 + 0xa8) * 0x70;
    do {
      lVar2 = FUN_14479d2ce(lVar8 + 0xc);
      if ((lVar2 == 0) || (DAT_14c950c29 == 0)) {
        if (lVar2 != 0) goto LAB_147e728e8;
LAB_147e72877:
        lVar2 = 0;
      }
      else {
        FUN_1456cec3c(lVar2);
LAB_147e728e8:
        lVar4 = FUN_145909544();
        if (((lVar4 == 0) || (*(int *)(lVar2 + 0x38) < *(int *)(lVar4 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
            lVar4 + 0x30)) goto LAB_147e72877;
      }
      lVar4 = *param_3;
      if ((((lVar4 == 0) || (lVar3 = FUN_1410e186c(), lVar3 == 0)) ||
          (*(int *)(lVar4 + 0x38) < *(int *)(lVar3 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30)) {
        lVar4 = 0;
      }
      else {
        lVar4 = *param_3;
      }
      if (lVar2 == lVar4) {
        local_60 = *param_4;
        if ((local_60 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_1478ccd90(lVar8,&local_60);
      }
      lVar8 = lVar8 + 0x70;
      lVar7 = lVar7 + -0x70;
    } while (lVar7 != 0);
    lVar8 = (longlong)*(int *)(lVar1 + 0xb8);
    if (lVar8 != 0) {
LAB_147e72930:
      lVar1 = *(longlong *)(lVar1 + 0xb0);
      lVar8 = lVar8 * 0xb0 + lVar1;
      do {
        if ((longlong)*(int *)(lVar1 + 0x10) != 0) {
          lVar7 = *(longlong *)(lVar1 + 8);
          lVar2 = (longlong)*(int *)(lVar1 + 0x10) * 0x70;
          do {
            lVar3 = FUN_1478cb278(lVar7);
            lVar4 = *param_3;
            if (((lVar4 == 0) || (lVar5 = FUN_1410e186c(), lVar5 == 0)) ||
               ((*(int *)(lVar4 + 0x38) < *(int *)(lVar5 + 0x38) ||
                (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
                 != lVar5 + 0x30)))) {
              lVar4 = 0;
            }
            else {
              lVar4 = *param_3;
            }
            if (lVar3 == lVar4) {
              lVar4 = *param_4;
              if (((lVar4 == 0) || (lVar3 = FUN_1410e186c(), lVar3 == 0)) ||
                 ((*(int *)(lVar4 + 0x38) < *(int *)(lVar3 + 0x38) ||
                  (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
                   != lVar3 + 0x30)))) {
                lVar4 = 0;
              }
              else {
                lVar4 = *param_4;
              }
              FUN_145be65ee(lVar7,lVar4);
            }
            lVar7 = lVar7 + 0x70;
            lVar2 = lVar2 + -0x70;
          } while (lVar2 != 0);
        }
        if ((longlong)*(int *)(lVar1 + 0x20) != 0) {
          lVar7 = *(longlong *)(lVar1 + 0x18);
          lVar2 = (longlong)*(int *)(lVar1 + 0x20) * 0xa0;
          do {
            lVar3 = FUN_1478cb278(lVar7);
            lVar4 = *param_3;
            if ((((lVar4 == 0) || (lVar5 = FUN_1410e186c(), lVar5 == 0)) ||
                (*(int *)(lVar4 + 0x38) < *(int *)(lVar5 + 0x38))) ||
               (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
                lVar5 + 0x30)) {
              lVar4 = 0;
            }
            else {
              lVar4 = *param_3;
            }
            if (lVar3 == lVar4) {
              lVar4 = *param_4;
              if (((lVar4 == 0) || (lVar3 = FUN_1410e186c(), lVar3 == 0)) ||
                 ((*(int *)(lVar4 + 0x38) < *(int *)(lVar3 + 0x38) ||
                  (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
                   != lVar3 + 0x30)))) {
                lVar4 = 0;
              }
              else {
                lVar4 = *param_4;
              }
              FUN_145be65ee(lVar7,lVar4);
            }
            lVar7 = lVar7 + 0xa0;
            lVar2 = lVar2 + -0xa0;
          } while (lVar2 != 0);
        }
        lVar1 = lVar1 + 0xb0;
      } while (lVar1 != lVar8);
    }
  }
  uVar6 = 1;
LAB_147e72a95:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 147e72aec FUN_147e72aec body=264 status=ok
// SIG undefined FUN_147e72aec(void)

undefined8 FUN_147e72aec(longlong param_1,uint *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    plVar7 = (longlong *)(*(longlong *)(param_1 + 0xa0) + 0xf8);
    uVar2 = FUN_144a78877(uStack_34 ^ local_38,uStack_2c * 0x17 + uStack_30);
    iVar3 = FUN_147e7f48c(plVar7,uVar2,&local_38);
    if (((iVar3 != -1) &&
        (lVar5 = (longlong)iVar3 * 0x20 + *plVar7, plVar7 = (longlong *)(lVar5 + 0x10),
        plVar7 != (longlong *)0x0 && lVar5 != 0)) && (*(longlong *)(param_1 + 0xa0) != 0)) {
      lVar5 = *plVar7;
      if ((int)lVar5 != -1) {
        lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x90);
        lVar6 = (longlong)(int)lVar5 * 0x490;
        if ((int)((ulonglong)lVar5 >> 0x20) < *(int *)(lVar8 + 0x488 + lVar6)) {
          lVar1 = *(longlong *)(lVar8 + 0x480 + lVar6);
          lVar8 = lVar8 + lVar6;
          if (lVar1 != 0) {
            lVar8 = lVar1;
          }
          uVar4 = *(undefined8 *)(lVar8 + 0x38 + (lVar5 >> 0x20) * 0x48);
          goto LAB_147e72b18;
        }
      }
    }
  }
  uVar4 = 0;
LAB_147e72b18:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e72bf5 FUN_147e72bf5 body=115 status=ok
// SIG undefined FUN_147e72bf5(void)

longlong FUN_147e72bf5(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = param_1[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_1;
    lVar5 = 0;
    do {
      if (((*(longlong *)(lVar1 + lVar5) != 0) && (lVar3 = FUN_1447210f0(), lVar3 != 0)) &&
         (lVar3 = *(longlong *)(lVar3 + 0x168), lVar3 != 0)) {
        lVar4 = FUN_1409035a4();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          return lVar3;
        }
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar5);
  }
  return 0;
}



// FUNCTION 147e72c6c FUN_147e72c6c body=71 status=ok
// SIG undefined FUN_147e72c6c(void)

void FUN_147e72c6c(longlong param_1)

{
  FUN_1408453d0();
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_147e72cb4(*(longlong *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0x110),
                  *(undefined4 *)(param_1 + 0x114),param_1 + 0x118,*(undefined1 *)(param_1 + 0x11c))
    ;
  }
  return;
}



// FUNCTION 147e72cb4 FUN_147e72cb4 body=139 status=ok
// SIG undefined FUN_147e72cb4(void)

void FUN_147e72cb4(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = FUN_1447210f0();
  if ((lVar2 != 0) && (plVar1 = *(longlong **)(lVar2 + 0x168), plVar1 != (longlong *)0x0)) {
    lVar2 = FUN_1409035a4();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      (**(code **)(*plVar1 + 0x388))(plVar1,param_1,param_2,param_3,param_4,param_5);
    }
  }
  return;
}



// FUNCTION 147e72d40 FUN_147e72d40 body=41 status=ok
// SIG undefined FUN_147e72d40(void)

void FUN_147e72d40(longlong param_1)

{
  FUN_1402b6186();
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    return;
  }
  FUN_147e72d6a();
  return;
}



// FUNCTION 147e72d6a FUN_147e72d6a body=95 status=ok
// SIG undefined FUN_147e72d6a(void)

void FUN_147e72d6a(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = FUN_1447210f0();
  if ((lVar2 != 0) && (plVar1 = *(longlong **)(lVar2 + 0x168), plVar1 != (longlong *)0x0)) {
    lVar2 = FUN_1409035a4();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x000147e72dc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x398))(plVar1,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 147e72dca FUN_147e72dca body=390 status=ok
// SIG undefined FUN_147e72dca(void)

longlong * FUN_147e72dca(longlong param_1,longlong *param_2,longlong param_3,char param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong ***ppplVar3;
  longlong ****pppplVar4;
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  longlong ***local_60;
  longlong ***local_58;
  longlong ***local_50;
  longlong ***local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  pppplVar4 = (longlong ****)FUN_14001cc68(0x120,0x10);
  FUN_147e83582(pppplVar4,param_3);
  local_60 = (longlong ***)(pppplVar4 + 2);
  local_58 = (longlong ***)pppplVar4;
  FUN_1478d8b32(&local_60);
  local_70 = *(undefined4 *)(param_3 + 0x40);
  uStack_6c = *(undefined4 *)(param_3 + 0x44);
  uStack_68 = *(undefined4 *)(param_3 + 0x48);
  uStack_64 = *(undefined4 *)(param_3 + 0x4c);
  local_50 = (longlong ***)&local_70;
  local_48 = (longlong ***)&local_60;
  FUN_147e83618(param_1 + 0xc0,local_3c);
  if (param_4 == '\x01') {
    local_50 = local_60;
    local_48 = local_58;
    if ((longlong ****)local_58 != (longlong ****)0x0) {
      LOCK();
      *(int *)(local_58 + 1) = *(int *)(local_58 + 1) + 1;
      UNLOCK();
    }
    if ((*(int *)(param_1 + 0x38) != 0) &&
       (plVar2 = *(longlong **)(param_1 + 0x30), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x60))(plVar2,&local_50);
    }
    ppplVar3 = local_48;
    if ((longlong ****)local_48 != (longlong ****)0x0) {
      LOCK();
      pppplVar4 = (longlong ****)(local_48 + 1);
      *(int *)pppplVar4 = *(int *)pppplVar4 + -1;
      UNLOCK();
      if (*(int *)pppplVar4 == 0) {
        (*(code *)**local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)ppplVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (*(code *)(*ppplVar3)[2])(ppplVar3);
        }
      }
    }
  }
  ppplVar3 = local_58;
  if ((longlong ****)local_58 == (longlong ****)0x0) {
    *param_2 = (longlong)local_60;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(local_58 + 1) = *(int *)(local_58 + 1) + 1;
    UNLOCK();
    *param_2 = (longlong)local_60;
    param_2[1] = (longlong)local_58;
    LOCK();
    *(int *)(local_58 + 1) = *(int *)(local_58 + 1) + 1;
    UNLOCK();
    LOCK();
    pppplVar4 = (longlong ****)(local_58 + 1);
    *(int *)pppplVar4 = *(int *)pppplVar4 + -1;
    UNLOCK();
    if (*(int *)pppplVar4 == 0) {
      (*(code *)**local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)ppplVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (*(code *)(*ppplVar3)[2])(ppplVar3);
      }
    }
  }
  ppplVar3 = local_58;
  if ((longlong ****)local_58 != (longlong ****)0x0) {
    LOCK();
    pppplVar4 = (longlong ****)(local_58 + 1);
    *(int *)pppplVar4 = *(int *)pppplVar4 + -1;
    UNLOCK();
    if (*(int *)pppplVar4 == 0) {
      (*(code *)**local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)ppplVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (*(code *)(*ppplVar3)[2])(ppplVar3);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147e72f52 FUN_147e72f52 body=333 status=ok
// SIG undefined FUN_147e72f52(void)

void FUN_147e72f52(longlong param_1,uint *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = (longlong *)(param_1 + 0xc0);
  uVar7 = FUN_144a78877(param_2[1] ^ *param_2,
                        (int)((ulonglong)*(undefined8 *)(param_2 + 2) >> 0x20) * 0x17 +
                        (int)*(undefined8 *)(param_2 + 2));
  iVar8 = FUN_147e838e2(plVar3,uVar7,param_2);
  if (iVar8 != -1) {
    lVar4 = *plVar3;
    lVar9 = (longlong)iVar8;
    uVar5 = *(undefined8 *)(lVar4 + 0x10 + lVar9 * 0x28);
    plVar6 = *(longlong **)(lVar4 + 0x18 + lVar9 * 0x28);
    *(undefined8 *)(lVar4 + 0x10 + lVar9 * 0x28) = 0;
    if (plVar6 == (longlong *)0x0) {
      FUN_147e83b90(plVar3,iVar8);
      local_30 = (longlong *)0x0;
    }
    else {
      *(undefined8 *)(lVar4 + lVar9 * 0x28 + 0x18) = 0;
      FUN_147e83b90(plVar3,iVar8);
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      local_30 = plVar6;
    }
    local_38 = uVar5;
    if ((*(int *)(param_1 + 0x48) != 0) &&
       (plVar3 = *(longlong **)(param_1 + 0x40), plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x60))(plVar3,&local_38);
    }
    plVar3 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar6 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e730a0 FUN_147e730a0 body=343 status=ok
// SIG undefined FUN_147e730a0(void)

void FUN_147e730a0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  longlong local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_40 = (longlong *)(param_1 + 0xd0);
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if (*(int *)(param_1 + 0xe8) != 0) {
    FUN_1449c0562(&local_48);
  }
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_68 = local_48;
  local_60 = local_40;
  local_70 = (longlong *)(param_1 + 0xc0);
  if (iStack_34 < (int)local_40[3]) {
    do {
      lVar3 = *(longlong *)(*local_70 + 0x10 + (longlong)iStack_54 * 0x28);
      if (lVar3 != 0) {
        local_40 = *(longlong **)(*local_70 + 0x18 + (longlong)iStack_54 * 0x28);
        if (local_40 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_40 + 1) = (int)local_40[1] + 1;
          UNLOCK();
        }
        local_48 = lVar3;
        (*(code *)*param_2)(param_2[1],&local_48);
        plVar4 = local_40;
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_40 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e731f8 FUN_147e731f8 body=372 status=ok
// SIG undefined FUN_147e731f8(void)

undefined8 * FUN_147e731f8(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 == 0) {
    iVar8 = 0;
    iVar5 = 0;
  }
  else {
    local_30 = 0;
    FUN_14485c47a(&local_30,param_3);
    iVar5 = (int)local_30;
    iVar8 = local_30._4_4_;
  }
  uVar2 = FUN_144a78877(iVar5,iVar8);
  if (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0xa4)) {
    lVar6 = param_1 + 0xa8;
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      lVar6 = *(longlong *)(param_1 + 0xb0);
    }
    iVar3 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0xb8) - 1U & uVar2) * 4);
    if (iVar3 != -1) {
      lVar6 = *(longlong *)(param_1 + 0x70);
      do {
        lVar7 = (longlong)iVar3 * 0x20;
        lVar1 = lVar6 + lVar7;
        if ((*(int *)(lVar6 + lVar7) == iVar5) && (*(int *)(lVar6 + 4 + lVar7) == iVar8)) {
          if (lVar1 + 8 != 0 && lVar1 != 0) {
            uVar4 = FUN_144a78877(*(uint *)(lVar1 + 0xc) ^ *(uint *)(lVar1 + 8),
                                  (int)((ulonglong)*(undefined8 *)(lVar1 + 0x10) >> 0x20) * 0x17 +
                                  (int)*(undefined8 *)(lVar1 + 0x10));
            iVar5 = FUN_147e838e2((longlong *)(param_1 + 0xc0),uVar4,lVar1 + 8);
            if (iVar5 != -1) {
              lVar6 = *(longlong *)(param_1 + 0xc0);
              if ((lVar6 + (longlong)iVar5 * 0x28 + 0x10U & 0xffffffffffffffef) != 0) {
                lVar6 = lVar6 + (longlong)iVar5 * 0x28;
                *param_2 = *(undefined8 *)(lVar6 + 0x10);
                lVar6 = *(longlong *)(lVar6 + 0x18);
                param_2[1] = lVar6;
                if (lVar6 != 0) {
                  LOCK();
                  *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
                  UNLOCK();
                }
                if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
                  return param_2;
                }
                    /* WARNING: Subroutine does not return */
                FUN_144d8e3a0();
              }
            }
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x18);
      } while (iVar3 != -1);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 147e7336e FUN_147e7336e body=251 status=ok
// SIG undefined FUN_147e7336e(void)

undefined4 * FUN_147e7336e(longlong param_1,undefined4 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 == 0) {
    iVar11 = 0;
    iVar10 = 0;
  }
  else {
    local_30 = 0;
    FUN_14485c47a(&local_30,param_3);
    iVar10 = (int)local_30;
    iVar11 = local_30._4_4_;
  }
  uVar5 = FUN_144a78877(iVar10,iVar11);
  if (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0xa4)) {
    lVar8 = param_1 + 0xa8;
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      lVar8 = *(longlong *)(param_1 + 0xb0);
    }
    iVar6 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0xb8) - 1U & uVar5) * 4);
    if (iVar6 != -1) {
      lVar8 = *(longlong *)(param_1 + 0x70);
      do {
        lVar9 = (longlong)iVar6 * 0x20;
        lVar1 = lVar8 + lVar9;
        if ((*(int *)(lVar8 + lVar9) == iVar10) && (*(int *)(lVar8 + 4 + lVar9) == iVar11)) {
          puVar7 = (undefined4 *)(lVar1 + 8);
          if (puVar7 != (undefined4 *)0x0 && lVar1 != 0) goto LAB_147e733ce;
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x18);
      } while (iVar6 != -1);
    }
  }
  puVar7 = &DAT_14cacb140;
LAB_147e733ce:
  uVar2 = puVar7[1];
  uVar3 = puVar7[2];
  uVar4 = puVar7[3];
  *param_2 = *puVar7;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147e7346a FUN_147e7346a body=117 status=ok
// SIG undefined FUN_147e7346a(void)

void FUN_147e7346a(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  
  iVar1 = *(int *)(param_1 + 0x118);
  *(uint *)(param_1 + 0x118) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x11c) < iVar1 + 1U) {
    FUN_147e841ec(param_1 + 0x110,iVar1);
  }
  FUN_147e7355c((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x110),param_2);
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (plVar2 = *(longlong **)(param_1 + 0x50), plVar2 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000147e734d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x60))(plVar2,param_2);
    return;
  }
  return;
}



// FUNCTION 147e734e0 FUN_147e734e0 body=122 status=ok
// SIG undefined FUN_147e734e0(void)

void FUN_147e734e0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  undefined1 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147e7355c(local_40);
  local_30 = local_40;
  FUN_147e84272(param_1 + 0x110);
  if ((*(int *)(param_1 + 0x68) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x60), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x60))(plVar1,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e7355c FUN_147e7355c body=78 status=ok
// SIG undefined FUN_147e7355c(void)

undefined8 * FUN_147e7355c(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_2 + 8))(param_2);
    if (lVar2 != 0) goto LAB_147e73586;
  }
  lVar2 = 0;
LAB_147e73586:
  FUN_14485c47a(param_1,lVar2);
  cVar1 = FUN_14493c216(param_1,0);
  if (cVar1 == '\0') {
    param_1[1] = param_2;
  }
  return param_1;
}



// FUNCTION 147e735aa FUN_147e735aa body=172 status=ok
// SIG undefined FUN_147e735aa(void)

undefined8 * FUN_147e735aa(undefined8 *param_1,undefined8 *param_2,double param_3)

{
  undefined8 uVar1;
  double dVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[1];
  uVar1 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar1;
  param_1[3] = 0;
  param_1[4] = param_3;
  param_1[5] = param_3;
  param_1[6] = param_3;
  param_1[7] = 0;
  param_1[10] = 0;
  dVar2 = param_3 * 0.5 * 1.0625;
  param_1[8] = dVar2;
  param_1[9] = param_3 - dVar2;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = param_3 * 0.0005053442362742975;
  FUN_147e84370(param_1 + 0xc);
  FUN_147e843ac(param_1 + 0x10);
  return param_1;
}



// FUNCTION 147e73656 FUN_147e73656 body=100 status=ok
// SIG undefined FUN_147e73656(void)

void FUN_147e73656(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_147e7fa8f(*(undefined8 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x88));
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147e736ba FUN_147e736ba body=69 status=ok
// SIG undefined FUN_147e736ba(void)

void FUN_147e736ba(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_1433c5c54();
  if (cVar1 != '\0') {
    FUN_1478cdb74(param_1);
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_144893a1c(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 147e73700 FUN_147e73700 body=122 status=ok
// SIG undefined FUN_147e73700(void)

undefined8 * FUN_147e73700(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (param_1 != param_2) {
    plVar3 = (longlong *)param_1[8];
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
    param_1[6] = param_2[6];
    uVar5 = *param_2;
    uVar6 = param_2[1];
    uVar7 = param_2[2];
    uVar8 = param_2[3];
    uVar9 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = uVar9;
    param_1[2] = uVar7;
    param_1[3] = uVar8;
    *param_1 = uVar5;
    param_1[1] = uVar6;
    param_1[7] = param_2[7];
    lVar4 = param_2[8];
    param_1[8] = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
  }
  return param_1;
}



// FUNCTION 147e7377a FUN_147e7377a body=203 status=ok
// SIG undefined FUN_147e7377a(void)

void FUN_147e7377a(longlong param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) < 1) {
    FUN_147e849cc(param_1 + 0x60);
  }
  iVar1 = *(int *)(param_1 + 0x8c);
  FUN_147e7fa8f(*(undefined8 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x88));
  *(undefined4 *)(param_1 + 0x88) = 0;
  if ((iVar1 < 1) && (*(int *)(param_1 + 0x8c) != 1)) {
    FUN_147e84a5c(param_1 + 0x80);
  }
  if (*(int *)(param_1 + 0x9c) < 0) {
    *(undefined4 *)(param_1 + 0x98) = 0;
    FUN_14480809c(param_1 + 0x90,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  if (*(int *)(param_1 + 0x7c) < 0) {
    *(undefined4 *)(param_1 + 0x78) = 0;
    FUN_14480809c(param_1 + 0x70,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  FUN_147e84370(param_1 + 0x60);
  FUN_147e843ac(param_1 + 0x80);
  return;
}



// FUNCTION 147e7384a FUN_147e7384a body=237 status=ok
// SIG undefined FUN_147e7384a(void)

void FUN_147e7384a(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_34;
  uStack_44 = uStack_30;
  uStack_40 = uStack_2c;
  uStack_3c = uStack_28;
  FUN_147e73938(param_1,iVar1 != 0);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e73938 FUN_147e73938 body=326 status=ok
// SIG undefined FUN_147e73938(void)

void FUN_147e73938(longlong param_1,byte param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1411ab38a(param_3,&local_38);
  *(undefined4 *)(param_1 + 0x50) = local_38._0_4_;
  if (((*(uint *)(param_1 + 0x4c) & 2) == 0) == (bool)param_2) {
    *(uint *)(param_1 + 0x4c) = (*(uint *)(param_1 + 0x4c) & 0xfffffffd) + (uint)param_2 * 2;
    if (param_2 == 0) {
      FUN_1414dc69c(*(undefined8 *)(param_1 + 0x58));
    }
    else {
      local_38 = (undefined8 *)0x0;
      local_30 = 0;
      FUN_1446efa72(&local_38,0,3,0x10);
      puVar1 = local_38;
      local_30 = 3;
      *local_38 = &PTR_LAB_14a8bc3e0;
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar3 == 0) {
        LOCK();
        UNLOCK();
        lVar3 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      local_38[2] = lVar3;
      *local_38 = &PTR_FUN_14abb5360;
      local_38[3] = 0;
      FUN_14485c47a(local_38 + 3,param_1);
      puVar1[4] = FUN_147e74886;
      FUN_145bf3bbe(&local_28,L"Navigation",&local_38);
      *(undefined8 *)(param_1 + 0x58) = local_28;
      FUN_1449db362(&local_38);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e73a80 FUN_147e73a80 body=197 status=ok
// SIG undefined FUN_147e73a80(void)

void FUN_147e73a80(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  char local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = '\0';
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (((*(char *)(param_1 + 0x48) != local_19) &&
      (*(char *)(param_1 + 0x48) = local_19, local_19 != '\0')) &&
     ((*(uint *)(param_1 + 0x4c) & 1) != 0)) {
    *(uint *)(*(longlong *)(param_1 + 0x60) + 0x98) =
         *(uint *)(*(longlong *)(param_1 + 0x60) + 0x98) & 0xffffffef |
         (uint)(local_19 == '\x01') << 4;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e73b46 FUN_147e73b46 body=139 status=ok
// SIG undefined FUN_147e73b46(void)

void FUN_147e73b46(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147e73bd2(param_1,&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e73bd2 FUN_147e73bd2 body=107 status=ok
// SIG undefined FUN_147e73bd2(void)

undefined8 FUN_147e73bd2(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
  if ((*(byte *)(param_1 + 0x4c) & 1) == 0) {
    FUN_140056680(param_2,L"Invalid path");
  }
  else {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x60) + 0x98);
    pwVar2 = L", OUT OF DATE!";
    if ((uVar1 & 1) != 0) {
      pwVar2 = L"";
    }
    pwVar3 = L", partial";
    if ((uVar1 & 4) == 0) {
      pwVar3 = L"";
    }
    FUN_140002266(param_2,L"Path: points %d%s%s",
                  *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0x30),pwVar3,pwVar2);
  }
  return param_2;
}



// FUNCTION 147e73c3e FUN_147e73c3e body=62 status=ok
// SIG undefined FUN_147e73c3e(void)

void FUN_147e73c3e(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((*(byte *)(param_1 + 0x4c) & 1) == 0) {
    uVar1 = 0xbff0000000000000;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x38))(*(longlong **)(param_1 + 0x60),0);
  }
  *param_3 = uVar1;
  return;
}



// FUNCTION 147e73c7c FUN_147e73c7c body=137 status=ok
// SIG undefined FUN_147e73c7c(void)

void FUN_147e73c7c(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((*(byte *)(param_1 + 0x4c) & 1) == 0) {
    uVar3 = 0xbff0000000000000;
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x60);
    if ((int)plVar1[6] == 0) {
      uVar3 = 0;
    }
    else {
      puVar2 = (undefined4 *)plVar1[5];
      local_18 = *(undefined8 *)(puVar2 + 4);
      local_28 = *puVar2;
      uStack_24 = puVar2[1];
      uStack_20 = puVar2[2];
      uStack_1c = puVar2[3];
      uVar3 = (**(code **)(*plVar1 + 0x48))(plVar1,&local_28,1);
    }
  }
  *param_3 = uVar3;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e73d72 FUN_147e73d72 body=139 status=ok
// SIG undefined FUN_147e73d72(void)

void FUN_147e73d72(longlong param_1)

{
  byte bVar1;
  
  if (*(int *)(param_1 + 0x24) < 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    FUN_1448f21ac(param_1 + 0x18,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (*(int *)(param_1 + 0x34) < 0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    FUN_147e81cb6(param_1 + 0x28,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(uint *)(param_1 + 0x98) = (*(uint *)(param_1 + 0x98) & 0xfffffff0) + 1;
  bVar1 = FUN_144729dda(param_1 + 0x40);
  *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) & 0xfffffbff | (uint)bVar1 << 10;
  return;
}



// FUNCTION 147e73dfe FUN_147e73dfe body=16 status=ok
// SIG undefined FUN_147e73dfe(void)

byte FUN_147e73dfe(void)

{
  byte bVar1;
  
  bVar1 = FUN_144729dda();
  return bVar1 ^ 1;
}



// FUNCTION 147e73e0e FUN_147e73e0e body=181 status=ok
// SIG undefined FUN_147e73e0e(void)

void FUN_147e73e0e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x4c8);
  if (iVar7 == 0) {
    *(undefined4 *)(param_1 + 0x4e0) = *(undefined4 *)(param_1 + 0x430);
  }
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
    iVar7 = *(int *)(param_1 + 0x4c8);
  }
  *(uint *)(param_1 + 0x4c8) = iVar7 + 1U;
  if (*(uint *)(param_1 + 0x4cc) < iVar7 + 1U) {
    FUN_147e81b3e((longlong *)(param_1 + 0x4c0),iVar7);
  }
  lVar5 = *(longlong *)(param_1 + 0x4c0);
  *(undefined8 *)(lVar5 + (longlong)iVar7 * 0x10) = uVar3;
  *(longlong *)(lVar5 + 8 + (longlong)iVar7 * 0x10) = lVar4;
  plVar6 = (longlong *)param_2[1];
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
                    /* WARNING: Could not recover jumptable at 0x000147e73ea6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147e73ec4 FUN_147e73ec4 body=57 status=ok
// SIG undefined FUN_147e73ec4(void)

void FUN_147e73ec4(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_14485c47a(param_1 + 0x50);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_145958f2a();
    uVar1 = FUN_144718840(param_2,uVar1);
  }
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  return;
}



// FUNCTION 147e73efe FUN_147e73efe body=25 status=ok
// SIG undefined FUN_147e73efe(void)

void FUN_147e73efe(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0xbf800000;
  *(byte *)(param_1 + 0x99) = *(byte *)(param_1 + 0x99) & 0xfb;
  return;
}



// FUNCTION 147e73f18 FUN_147e73f18 body=241 status=ok
// SIG undefined FUN_147e73f18(void)

void FUN_147e73f18(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar3 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    local_38 = plVar3;
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
  local_30 = param_3;
  FUN_147e80aa4(param_1 + 0x4d0,&local_40);
  if (local_38 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_38 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
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
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e74072 FUN_147e74072 body=183 status=ok
// SIG undefined FUN_147e74072(void)

double FUN_147e74072(longlong param_1,double *param_2,uint param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  uVar4 = *(uint *)(param_1 + 0x30);
  dVar7 = 0.0;
  if (param_3 < uVar4) {
    dVar8 = param_2[2];
    dVar9 = param_2[1];
    dVar10 = *param_2;
    do {
      lVar5 = *(longlong *)(param_1 + 0x28);
      lVar6 = (longlong)(int)param_3 * 0x30;
      dVar1 = *(double *)(lVar5 + lVar6);
      dVar2 = *(double *)(lVar5 + 8 + lVar6);
      dVar3 = *(double *)(lVar5 + 0x10 + lVar6);
      dVar7 = dVar7 + SQRT((dVar3 - dVar8) * (dVar3 - dVar8) +
                           (dVar2 - dVar9) * (dVar2 - dVar9) + (dVar1 - dVar10) * (dVar1 - dVar10));
      *param_2 = dVar1;
      param_2[1] = dVar2;
      param_3 = param_3 + 1;
      param_2[2] = dVar3;
      dVar8 = dVar3;
      dVar9 = dVar2;
      dVar10 = dVar1;
    } while (uVar4 != param_3);
  }
  return dVar7;
}



// FUNCTION 147e741aa FUN_147e741aa body=541 status=ok
// SIG undefined FUN_147e741aa(void)

undefined8
FUN_147e741aa(longlong param_1,undefined8 param_2,uint param_3,undefined4 *param_4,longlong param_5)

{
  undefined4 *puVar1;
  double *pdVar2;
  double dVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  undefined4 *local_f0;
  undefined1 local_e4 [4];
  undefined1 local_e0 [24];
  undefined1 local_c8 [24];
  double local_b0;
  double local_a8;
  double local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  double local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar5 = *(uint *)(param_1 + 0x30);
  if (param_3 < uVar5 && 1 < (int)uVar5) {
    local_68 = *(double *)(*(longlong *)(param_1 + 0x28) + 0x10 + (ulonglong)param_3 * 0x30);
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x28) + (ulonglong)param_3 * 0x30);
    local_78 = *puVar1;
    uStack_74 = puVar1[1];
    uStack_70 = puVar1[2];
    uStack_6c = puVar1[3];
    if ((int)(param_3 + 1) < (int)uVar5) {
      lVar7 = (longlong)(int)(param_3 + 1);
      lVar8 = lVar7 * 0x30;
      local_f0 = param_4;
      do {
        pdVar2 = (double *)(*(longlong *)(param_1 + 0x28) + lVar8);
        local_98 = *pdVar2;
        uStack_90 = pdVar2[1];
        local_88 = *(double *)(*(longlong *)(param_1 + 0x28) + 0x10 + lVar8);
        dVar3 = local_98 - (double)CONCAT44(uStack_74,local_78);
        dVar9 = uStack_90 - (double)CONCAT44(uStack_6c,uStack_70);
        dVar10 = local_88 - local_68;
        if (9.99999993922529e-09 < dVar10 * dVar10 + dVar9 * dVar9 + dVar3 * dVar3) {
          local_b0 = dVar3;
          local_a8 = dVar9;
          local_a0 = dVar10;
          if (param_5 == 0) {
            local_108 = (undefined1 *)0x0;
            cVar4 = FUN_144a3f41e(param_2,&local_78,&local_98,&local_b0);
          }
          else {
            local_f8 = local_e4;
            local_100 = local_e0;
            local_108 = local_c8;
            cVar4 = FUN_1467f6da8(param_2,&local_78,&local_98,param_5);
          }
          if (cVar4 != '\0') {
            if (local_f0 != (undefined4 *)0x0) {
              *local_f0 = (int)lVar7;
            }
            uVar6 = 1;
            goto LAB_147e74382;
          }
          uVar5 = *(uint *)(param_1 + 0x30);
        }
        local_68 = local_88;
        local_78 = (undefined4)local_98;
        uStack_74 = local_98._4_4_;
        uStack_70 = (undefined4)uStack_90;
        uStack_6c = uStack_90._4_4_;
        lVar7 = lVar7 + 1;
        lVar8 = lVar8 + 0x30;
      } while (lVar7 < (int)uVar5);
    }
  }
  uVar6 = 0;
LAB_147e74382:
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 147e743c8 FUN_147e743c8 body=503 status=ok
// SIG undefined FUN_147e743c8(void)

undefined8
FUN_147e743c8(longlong param_1,undefined8 param_2,double *param_3,uint param_4,undefined4 *param_5,
             longlong param_6)

{
  double *pdVar1;
  double dVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  undefined1 local_e4 [4];
  undefined1 local_e0 [24];
  undefined1 local_c8 [24];
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double local_78;
  double dStack_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar4 = *(uint *)(param_1 + 0x30);
  if (param_4 < uVar4 && 1 < (int)uVar4) {
    local_68 = param_3[2];
    local_78 = *param_3;
    dStack_70 = param_3[1];
    lVar6 = (longlong)(int)param_4;
    lVar7 = lVar6 * 0x30;
    do {
      pdVar1 = (double *)(*(longlong *)(param_1 + 0x28) + lVar7);
      local_98 = *pdVar1;
      dStack_90 = pdVar1[1];
      local_88 = *(double *)(*(longlong *)(param_1 + 0x28) + 0x10 + lVar7);
      dVar2 = local_98 - local_78;
      dVar8 = dStack_90 - dStack_70;
      dVar9 = local_88 - local_68;
      if (9.99999993922529e-09 < dVar9 * dVar9 + dVar8 * dVar8 + dVar2 * dVar2) {
        local_b0 = dVar2;
        local_a8 = dVar8;
        local_a0 = dVar9;
        if (param_6 == 0) {
          local_108 = (undefined1 *)0x0;
          cVar3 = FUN_144a3f41e(param_2,&local_78,&local_98,&local_b0);
        }
        else {
          local_f8 = local_e4;
          local_100 = local_e0;
          local_108 = local_c8;
          cVar3 = FUN_1467f6da8(param_2,&local_78,&local_98,param_6);
        }
        if (cVar3 != '\0') {
          if (param_5 != (undefined4 *)0x0) {
            *param_5 = (int)lVar6;
          }
          uVar5 = 1;
          goto LAB_147e74577;
        }
        uVar4 = *(uint *)(param_1 + 0x30);
      }
      local_68 = local_88;
      local_78 = local_98;
      dStack_70 = dStack_90;
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 0x30;
    } while (lVar6 < (int)uVar4);
  }
  uVar5 = 0;
LAB_147e74577:
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 147e74700 FUN_147e74700 body=118 status=ok
// SIG undefined FUN_147e74700(void)

longlong * FUN_147e74700(longlong param_1,longlong *param_2,uint param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  FUN_1458cb102(param_2);
  if ((-1 < (int)param_3) && ((int)param_3 < *(int *)(param_1 + 0x30))) {
    lVar2 = FUN_14479d2ce(param_1 + 0x38);
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    *param_2 = lVar2;
    lVar2 = *(longlong *)(param_1 + 0x28);
    param_2[3] = *(longlong *)(lVar2 + 0x10 + (ulonglong)param_3 * 0x30);
    plVar1 = (longlong *)(lVar2 + (ulonglong)param_3 * 0x30);
    lVar2 = plVar1[1];
    param_2[1] = *plVar1;
    param_2[2] = lVar2;
  }
  return param_2;
}



// FUNCTION 147e74776 FUN_147e74776 body=137 status=ok
// SIG undefined FUN_147e74776(void)

void FUN_147e74776(longlong param_1,longlong param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x60) == param_2) {
    local_28 = param_1;
    local_20 = param_3;
    FUN_1447cd2ec(param_1 + 0x28);
    lVar1 = *(longlong *)(param_1 + 0x60);
    if ((((lVar1 == 0) || ((*(uint *)(lVar1 + 0x98) & 2) == 0)) ||
        ((*(uint *)(lVar1 + 0x98) & 1) == 0)) || (*(int *)(lVar1 + 0x30) < 2)) {
      *(byte *)(param_1 + 0x4c) = *(byte *)(param_1 + 0x4c) & 0xfe;
    }
    else {
      *(byte *)(param_1 + 0x4c) = *(byte *)(param_1 + 0x4c) | 1;
      FUN_147e74800(param_1,param_2);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e74800 FUN_147e74800 body=133 status=ok
// SIG undefined FUN_147e74800(void)

void FUN_147e74800(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  
  plVar1 = (longlong *)(param_1 + 0x38);
  FUN_1417247dc(plVar1,*(undefined4 *)(param_2 + 0x30));
  iVar4 = *(int *)(param_2 + 0x30);
  if ((longlong)iVar4 != 0) {
    lVar6 = *(longlong *)(param_2 + 0x28);
    lVar11 = 0;
    do {
      iVar5 = *(int *)(param_1 + 0x40);
      *(uint *)(param_1 + 0x40) = iVar5 + 1U;
      if (*(uint *)(param_1 + 0x44) < iVar5 + 1U) {
        FUN_1403e3958(plVar1,iVar5);
      }
      puVar2 = (undefined4 *)(lVar6 + lVar11);
      lVar7 = *plVar1;
      *(undefined8 *)(lVar7 + 0x10 + (longlong)iVar5 * 0x18) = *(undefined8 *)(puVar2 + 4);
      uVar8 = puVar2[1];
      uVar9 = puVar2[2];
      uVar10 = puVar2[3];
      puVar3 = (undefined4 *)(lVar7 + (longlong)iVar5 * 0x18);
      *puVar3 = *puVar2;
      puVar3[1] = uVar8;
      puVar3[2] = uVar9;
      puVar3[3] = uVar10;
      lVar11 = lVar11 + 0x30;
    } while ((longlong)iVar4 * 0x30 != lVar11);
  }
  return;
}



// FUNCTION 147e74886 FUN_147e74886 body=83 status=ok
// SIG undefined FUN_147e74886(void)

void FUN_147e74886(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar2 = *(longlong **)(param_1 + 0x60);
  if (plVar2 != (longlong *)0x0) {
    uVar1 = *(undefined4 *)(param_1 + 0x50);
    uVar3 = FUN_14479d2ce((longlong)plVar2 + 0x9c);
    (**(code **)(*plVar2 + 0x10))(plVar2,uVar3,uVar1,param_2,0,0xbf800000,0);
  }
  return;
}



// FUNCTION 147e748da FUN_147e748da body=440 status=ok
// SIG undefined FUN_147e748da(void)

void FUN_147e748da(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *param_2;
  lVar4 = *(longlong *)(param_1 + 0x60);
  if (lVar4 != lVar3) {
    lVar6 = lVar3;
    if ((lVar4 != 0) && (*(longlong *)(param_1 + 0x80) != 0)) {
      FUN_14480f766(lVar4 + 0x80);
      lVar6 = *param_2;
    }
    lVar4 = param_2[1];
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    plVar5 = *(longlong **)(param_1 + 0x68);
    *(longlong *)(param_1 + 0x60) = lVar6;
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
    if (lVar3 == 0) {
      if (*(int *)(param_1 + 0x44) < 0) {
        *(undefined4 *)(param_1 + 0x40) = 0;
        FUN_1447a8aa0(param_1 + 0x38,0);
      }
      else {
        *(undefined4 *)(param_1 + 0x40) = 0;
      }
    }
    else {
      local_68 = 0;
      local_60 = 0;
      FUN_147e85030(&local_68,param_1 + 0x70);
      local_50 = 0;
      local_48 = 0;
      FUN_147e85030(&local_50,&local_68);
      FUN_147e80bea(lVar3 + 0x80,&local_58,&local_50);
      FUN_1449db362(&local_50);
      FUN_1449db362(&local_68);
      *(undefined8 *)(param_1 + 0x80) = local_58;
      if (*(char *)(param_1 + 0x48) != '\0') {
        *(uint *)(lVar3 + 0x98) =
             *(uint *)(lVar3 + 0x98) & 0xffffffef | (uint)(*(char *)(param_1 + 0x48) == '\x01') << 4
        ;
      }
      FUN_147e74800(param_1,lVar3);
    }
    FUN_147e74776(param_1,lVar3,lVar3 != 0);
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
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e74a94 FUN_147e74a94 body=587 status=ok
// SIG undefined FUN_147e74a94(void)

void FUN_147e74a94(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong *local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined1 local_40 [24];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  local_58 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_60 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_60;
  if ((local_60 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  puVar3 = local_40;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  local_70 = &local_68;
  local_78 = local_58;
  uVar2 = FUN_147e74ce0(local_28,puVar3,local_48,local_4c);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e74ce0 FUN_147e74ce0 body=455 status=ok
// SIG undefined FUN_147e74ce0(void)

longlong FUN_147e74ce0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
                      undefined8 param_5,longlong *param_6)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_3 != 0) {
    uVar3 = FUN_145958f2a();
    plVar4 = (longlong *)FUN_144718840(param_3,uVar3);
    local_48 = *param_6;
    if ((local_48 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    if (plVar4 == (longlong *)0x0) {
      lVar5 = *(longlong *)(param_3 + 0x1c8);
      if (lVar5 == 0) {
        local_58 = DAT_14c8464f0;
        local_68 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_60 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      }
      else {
        local_68 = *(undefined8 *)(lVar5 + 0x260);
        uStack_60 = *(undefined8 *)(lVar5 + 0x268);
        local_58 = *(undefined8 *)(lVar5 + 0x270);
      }
    }
    else {
      (**(code **)(*plVar4 + 0x18))(plVar4,&local_68);
    }
    local_78 = &local_48;
    lVar5 = FUN_147e750b6(param_1,param_2,&local_68,param_5);
    if (lVar5 != 0) {
      lVar6 = *(longlong *)(lVar5 + 0x60);
      plVar4 = *(longlong **)(lVar5 + 0x68);
      if (plVar4 == (longlong *)0x0) {
        if (lVar6 == 0) goto LAB_147e74d06;
      }
      else {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
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
        if (lVar6 == 0) goto LAB_147e74d06;
        lVar6 = *(longlong *)(lVar5 + 0x60);
        plVar4 = *(longlong **)(lVar5 + 0x68);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          FUN_143834864(lVar6,param_3,param_4);
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
          goto LAB_147e74d06;
        }
      }
      FUN_143834864(lVar6,param_3,param_4);
      goto LAB_147e74d06;
    }
  }
  lVar5 = 0;
LAB_147e74d06:
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e74ea8 FUN_147e74ea8 body=524 status=ok
// SIG undefined FUN_147e74ea8(void)

void FUN_147e74ea8(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60 [24];
  undefined1 local_48 [24];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  local_68 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_70 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = local_70;
  if ((local_70 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  puVar4 = local_60;
  if (puVar3 != (undefined1 *)0x0) {
    puVar4 = puVar3;
  }
  puVar3 = local_48;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  local_88 = &local_78;
  uVar2 = FUN_147e750b6(local_30,puVar3,puVar4,local_68);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e750b6 FUN_147e750b6 body=652 status=ok
// SIG undefined FUN_147e750b6(void)

undefined8
FUN_147e750b6(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             longlong *param_5)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_228 [32];
  undefined8 local_208;
  undefined1 *local_200;
  undefined8 *local_1f8;
  undefined8 local_1f0;
  undefined1 local_1e8;
  undefined8 local_1e0;
  longlong *local_1d8;
  undefined1 local_1d0 [168];
  undefined8 local_128;
  longlong *local_120;
  int local_118;
  longlong local_110;
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [168];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_228;
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  }
  if (param_4 != 0 && lVar3 == 0) {
    lVar3 = FUN_1402ad3be(DAT_14cb0d2b0,param_4,1);
  }
  if ((lVar3 != 0) && (plVar2 = *(longlong **)(lVar3 + 0x168), plVar2 != (longlong *)0x0)) {
    lVar3 = FUN_1409035a4();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
       ((*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30 && (plVar2[5] != 0)))) {
      uVar4 = FUN_147e7992d(plVar2);
      if (param_4 == 0) {
LAB_147e751eb:
        lVar3 = plVar2[5];
      }
      else {
        uVar5 = FUN_145958f2a();
        plVar6 = (longlong *)FUN_144718840(param_4,uVar5);
        if (plVar6 == (longlong *)0x0) {
          lVar7 = FUN_14110d034();
          if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
             (lVar3 = param_4,
             *(longlong *)
              (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) goto LAB_147e751eb;
        }
        else {
          uVar5 = (**(code **)(*plVar6 + 0x10))(plVar6);
          lVar3 = (**(code **)(*plVar2 + 0x340))(plVar2,uVar5,param_2,&DAT_14c8464e0);
        }
      }
      local_f8 = 0;
      uStack_f0 = 0;
      local_110 = *param_5;
      if ((local_110 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      FUN_147e6f964(local_108,lVar3,param_4,&local_110);
      local_1f0 = 0x7fefffffffffffff;
      local_1f8 = &local_f8;
      local_1e8 = 1;
      local_208 = param_3;
      local_200 = local_108;
      FUN_147e6fa80(local_e8,param_4,lVar3,param_2);
      FUN_147e7045e(local_1d0,local_e8);
      FUN_14383659e(plVar2,&local_128,local_1d0,0);
      if (local_118 == 3) {
        local_1e0 = local_128;
        local_1d8 = local_120;
        if (local_120 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_120 + 1) = (int)local_120[1] + 1;
          UNLOCK();
        }
        FUN_147e748da(uVar4,&local_1e0);
      }
      if (local_120 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_120 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_120)(local_120);
          LOCK();
          piVar1 = (int *)((longlong)local_120 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_120 + 0x10))(local_120);
          }
        }
      }
      FUN_147e70c18(local_e8);
      goto LAB_147e75160;
    }
  }
  uVar4 = 0;
LAB_147e75160:
  if ((local_40 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e75344 FUN_147e75344 body=156 status=ok
// SIG undefined FUN_147e75344(void)

void FUN_147e75344(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_147e7b700(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e753e2 FUN_147e753e2 body=633 status=ok
// SIG undefined FUN_147e753e2(void)

void FUN_147e753e2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [24];
  undefined1 local_50 [24];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  puVar4 = *(undefined1 **)(param_2 + 0x38);
  local_70 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  local_78 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_80 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = local_80;
  if ((local_80 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  puVar6 = &local_70;
  if (puVar2 != (undefined8 *)0x0) {
    puVar6 = puVar2;
  }
  puVar5 = local_68;
  if (puVar4 != (undefined1 *)0x0) {
    puVar5 = puVar4;
  }
  puVar4 = local_50;
  if (puVar1 != (undefined1 *)0x0) {
    puVar4 = puVar1;
  }
  local_90 = &local_88;
  local_98 = local_78;
  uVar3 = FUN_147e7565c(local_38,puVar4,puVar5,puVar6);
  *param_3 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e7565c FUN_147e7565c body=275 status=ok
// SIG undefined FUN_147e7565c(void)

undefined4
FUN_147e7565c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5,longlong *param_6)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  longlong local_58;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = 1;
  lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x168), lVar2 != 0)) {
    lVar3 = FUN_1409035a4();
    if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
         == lVar3 + 0x30)) && ((param_5 != 0 || (param_5 = FUN_147e791d4(lVar2), param_5 != 0)))) {
      local_58 = *param_6;
      if ((local_58 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      FUN_147e6f964(local_50,param_5,param_1,&local_58);
      local_68 = local_50;
      uVar1 = FUN_143836cde(param_2,param_3,param_4,param_5);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 147e75770 FUN_147e75770 body=633 status=ok
// SIG undefined FUN_147e75770(void)

void FUN_147e75770(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [24];
  undefined1 local_50 [24];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  puVar4 = *(undefined1 **)(param_2 + 0x38);
  local_70 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  local_78 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_80 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = local_80;
  if ((local_80 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  puVar6 = &local_70;
  if (puVar2 != (undefined8 *)0x0) {
    puVar6 = puVar2;
  }
  puVar5 = local_68;
  if (puVar4 != (undefined1 *)0x0) {
    puVar5 = puVar4;
  }
  puVar4 = local_50;
  if (puVar1 != (undefined1 *)0x0) {
    puVar4 = puVar1;
  }
  local_90 = &local_88;
  local_98 = local_78;
  uVar3 = FUN_147e759ea(local_38,puVar4,puVar5,puVar6);
  *param_3 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e759ea FUN_147e759ea body=275 status=ok
// SIG undefined FUN_147e759ea(void)

undefined4
FUN_147e759ea(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5,longlong *param_6)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  longlong local_58;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = 1;
  lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x168), lVar2 != 0)) {
    lVar3 = FUN_1409035a4();
    if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
         == lVar3 + 0x30)) && ((param_5 != 0 || (param_5 = FUN_147e791d4(lVar2), param_5 != 0)))) {
      local_58 = *param_6;
      if ((local_58 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      FUN_147e6f964(local_50,param_5,param_1,&local_58);
      local_68 = local_50;
      uVar1 = FUN_143836d8a(param_2,param_3,param_4,param_5);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 147e75b04 FUN_147e75b04 body=155 status=ok
// SIG undefined FUN_147e75b04(void)

void FUN_147e75b04(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_147e75ba0(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e75ba0 FUN_147e75ba0 body=116 status=ok
// SIG undefined FUN_147e75ba0(void)

undefined8 FUN_147e75ba0(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x168), lVar1 != 0)) {
    lVar2 = FUN_1409035a4();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       ((*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         == lVar2 + 0x30 && ((*(byte *)(lVar1 + 0x528) & 0xf7) == 0)))) {
      if (0 < *(int *)(lVar1 + 0x4d8)) {
        return CONCAT71((int7)((ulonglong)(lVar2 + 0x30) >> 8),1);
      }
      uVar3 = FUN_147e7ca66(lVar1);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 147e75c1a FUN_147e75c1a body=155 status=ok
// SIG undefined FUN_147e75c1a(void)

void FUN_147e75c1a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_147e75cb6(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e75cb6 FUN_147e75cb6 body=116 status=ok
// SIG undefined FUN_147e75cb6(void)

undefined8 FUN_147e75cb6(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x168), lVar1 != 0)) {
    lVar2 = FUN_1409035a4();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      uVar3 = CONCAT71((int7)((ulonglong)(lVar2 + 0x30) >> 8),1);
      if (*(char *)(lVar1 + 0x528) != '\0') {
        return uVar3;
      }
      if (0 < *(int *)(lVar1 + 0x4d8)) {
        return uVar3;
      }
      uVar3 = FUN_147e7ca66(lVar1);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 147e75d30 FUN_147e75d30 body=616 status=ok
// SIG undefined FUN_147e75d30(void)

void FUN_147e75d30(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *local_90;
  longlong local_80;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_64;
  undefined1 local_60 [24];
  undefined1 local_48 [24];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  local_64 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_64);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  local_70 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_78 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_80 = local_78;
  if ((local_78 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  puVar4 = local_60;
  if (puVar3 != (undefined1 *)0x0) {
    puVar4 = puVar3;
  }
  puVar3 = local_48;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  local_90 = &local_80;
  local_98 = local_70;
  uVar2 = FUN_147e75f9a(local_30,puVar3,puVar4,local_64);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e75f9a FUN_147e75f9a body=347 status=ok
// SIG undefined FUN_147e75f9a(void)

undefined8
FUN_147e75f9a(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,undefined4 param_4,
             longlong param_5,longlong *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  longlong local_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = param_2[2];
  local_68 = *param_2;
  uStack_60 = param_2[1];
  local_50 = 0;
  *(undefined8 *)(param_3 + 4) = param_2[2];
  uVar1 = *(undefined4 *)((longlong)param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 1);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  *param_3 = *(undefined4 *)param_2;
  param_3[1] = uVar1;
  param_3[2] = uVar2;
  param_3[3] = uVar3;
  lVar5 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if ((lVar5 != 0) && (lVar5 = *(longlong *)(lVar5 + 0x168), lVar5 != 0)) {
    lVar6 = FUN_1409035a4();
    if (((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
         == lVar6 + 0x30)) && ((param_5 != 0 || (param_5 = FUN_147e791d4(lVar5), param_5 != 0)))) {
      local_80 = *param_6;
      if ((local_80 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      FUN_147e6f964(local_78,param_5,param_1,&local_80);
      local_88 = local_78;
      cVar4 = FUN_143836c36(param_2,param_4,&local_68,param_5);
      if (cVar4 != '\0') {
        *(undefined8 *)(param_3 + 4) = local_58;
        *param_3 = (undefined4)local_68;
        param_3[1] = local_68._4_4_;
        param_3[2] = (undefined4)uStack_60;
        param_3[3] = uStack_60._4_4_;
        uVar7 = 1;
        goto LAB_147e76039;
      }
    }
  }
  uVar7 = 0;
LAB_147e76039:
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 147e760fc FUN_147e760fc body=672 status=ok
// SIG undefined FUN_147e760fc(void)

void FUN_147e760fc(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  longlong *local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined4 local_94;
  undefined1 local_90 [24];
  undefined1 local_78 [24];
  undefined8 local_60;
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_60 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_90);
  }
  puVar7 = *(undefined1 **)(param_2 + 0x38);
  local_94 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_94);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_94);
  }
  local_a0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  local_a8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  lVar2 = local_a8;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_a8 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(local_a8);
  }
  uVar5 = local_60;
  uVar4 = local_94;
  uVar3 = local_a0;
  local_58 = lVar2;
  if ((lVar2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(lVar2);
  }
  puVar8 = local_90;
  if (puVar7 != (undefined1 *)0x0) {
    puVar8 = puVar7;
  }
  puVar7 = local_78;
  if (puVar1 != (undefined1 *)0x0) {
    puVar7 = puVar1;
  }
  local_b0 = &local_58;
  local_b8 = uVar3;
  uVar6 = FUN_147e75f9a(uVar5,puVar7,puVar8,uVar4);
  *param_3 = uVar6;
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e763a4 FUN_147e763a4 body=616 status=ok
// SIG undefined FUN_147e763a4(void)

void FUN_147e763a4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *local_90;
  longlong local_80;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_64;
  undefined1 local_60 [24];
  undefined1 local_48 [24];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  local_64 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_64);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  local_70 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_78 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_80 = local_78;
  if ((local_78 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  puVar4 = local_60;
  if (puVar3 != (undefined1 *)0x0) {
    puVar4 = puVar3;
  }
  puVar3 = local_48;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  local_90 = &local_80;
  local_98 = local_70;
  uVar2 = FUN_147e7660e(local_30,puVar3,puVar4,local_64);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e7660e FUN_147e7660e body=322 status=ok
// SIG undefined FUN_147e7660e(void)

undefined8
FUN_147e7660e(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
             longlong param_5,longlong *param_6)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  longlong local_80;
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = *(undefined8 *)(param_2 + 4);
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_50 = 0;
  lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x168), lVar1 != 0)) {
    lVar2 = FUN_1409035a4();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         == lVar2 + 0x30)) && ((param_5 != 0 || (param_5 = FUN_147e791d4(lVar1), param_5 != 0)))) {
      local_80 = *param_6;
      if ((local_80 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      FUN_147e6f964(local_78,param_5,param_1,&local_80);
      local_88 = local_78;
      uVar3 = FUN_143836b8e(param_2,param_4,&local_68,param_5);
      *param_3 = local_68;
      param_3[1] = uStack_64;
      param_3[2] = uStack_60;
      param_3[3] = uStack_5c;
      *(undefined8 *)(param_3 + 4) = local_58;
      goto LAB_147e7669e;
    }
  }
  uVar3 = 0;
LAB_147e7669e:
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 147e76758 FUN_147e76758 body=657 status=ok
// SIG undefined FUN_147e76758(void)

void FUN_147e76758(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  undefined4 *local_c0;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60 [24];
  undefined1 local_48 [24];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  local_68 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_70 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = local_78;
  local_a8 = local_88;
  uStack_a4 = uStack_84;
  uStack_a0 = uStack_80;
  uStack_9c = uStack_7c;
  local_b0 = local_70;
  if ((local_70 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  puVar4 = local_60;
  if (puVar3 != (undefined1 *)0x0) {
    puVar4 = puVar3;
  }
  puVar3 = local_48;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  local_c0 = &local_a8;
  local_c8 = &local_b0;
  uVar2 = FUN_147e769ea(local_30,puVar3,puVar4,local_68);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e769ea FUN_147e769ea body=359 status=ok
// SIG undefined FUN_147e769ea(void)

undefined8
FUN_147e769ea(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
             longlong *param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined1 *local_90;
  longlong local_80;
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar4 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if ((lVar4 == 0) || (lVar4 = *(longlong *)(lVar4 + 0x168), lVar4 == 0)) {
LAB_147e76a5b:
    param_3[2] = param_2[2];
    uVar1 = *(undefined4 *)((longlong)param_2 + 4);
    uVar2 = *(undefined4 *)(param_2 + 1);
    uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
    *(undefined4 *)param_3 = *(undefined4 *)param_2;
    *(undefined4 *)((longlong)param_3 + 4) = uVar1;
    *(undefined4 *)(param_3 + 1) = uVar2;
    *(undefined4 *)((longlong)param_3 + 0xc) = uVar3;
  }
  else {
    lVar5 = FUN_1409035a4();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        != lVar5 + 0x30)) goto LAB_147e76a5b;
    param_3[2] = param_2[2];
    uVar6 = param_2[1];
    *param_3 = *param_2;
    param_3[1] = uVar6;
    local_58 = DAT_14c8464f0;
    local_68 = (undefined4)DAT_14c8464e0;
    uStack_64 = DAT_14c8464e0._4_4_;
    uStack_60 = (undefined4)DAT_14c8464e8;
    uStack_5c = DAT_14c8464e8._4_4_;
    local_50 = 0;
    lVar5 = param_4;
    if ((param_4 != 0) || (lVar5 = FUN_147e791d4(lVar4), lVar5 != 0)) {
      local_80 = *param_5;
      if ((local_80 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      FUN_147e6f964(local_78,lVar5,param_1,&local_80);
      local_98 = param_4;
      local_90 = local_78;
      uVar6 = FUN_143836e36(lVar4,param_2,&local_68,param_6);
      *(undefined4 *)param_3 = local_68;
      *(undefined4 *)((longlong)param_3 + 4) = uStack_64;
      *(undefined4 *)(param_3 + 1) = uStack_60;
      *(undefined4 *)((longlong)param_3 + 0xc) = uStack_5c;
      param_3[2] = local_58;
      goto LAB_147e76a6b;
    }
  }
  uVar6 = 0;
LAB_147e76a6b:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 147e76b58 FUN_147e76b58 body=422 status=ok
// SIG undefined FUN_147e76b58(void)

void FUN_147e76b58(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_40 = local_38;
  if (local_38 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c();
  }
  local_48 = local_30;
  if ((local_30 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c();
  }
  uVar1 = FUN_143834ae6(param_1,local_28,&local_48,&local_40);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e76d06 FUN_147e76d06 body=672 status=ok
// SIG undefined FUN_147e76d06(void)

void FUN_147e76d06(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined1 local_98 [24];
  undefined1 local_80 [24];
  undefined1 local_68 [24];
  undefined8 local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_80);
  }
  puVar6 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  puVar7 = *(undefined1 **)(param_2 + 0x38);
  local_a0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  local_a8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  lVar3 = local_a0;
  uVar2 = local_a8;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_a0 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(local_a0);
  }
  uVar4 = local_50;
  local_48 = lVar3;
  if ((lVar3 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(lVar3);
  }
  puVar8 = local_98;
  if (puVar7 != (undefined1 *)0x0) {
    puVar8 = puVar7;
  }
  puVar7 = local_80;
  if (puVar6 != (undefined1 *)0x0) {
    puVar7 = puVar6;
  }
  puVar6 = local_68;
  if (puVar1 != (undefined1 *)0x0) {
    puVar6 = puVar1;
  }
  local_b0 = uVar2;
  local_b8 = &local_48;
  uVar5 = FUN_147e799c2(uVar4,puVar6,puVar7,puVar8);
  *param_3 = uVar5;
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e76fa8 FUN_147e76fa8 body=156 status=ok
// SIG undefined FUN_147e76fa8(void)

void FUN_147e76fa8(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_147e77046(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e77046 FUN_147e77046 body=208 status=ok
// SIG undefined FUN_147e77046(void)

void FUN_147e77046(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [40];
  undefined4 local_80 [2];
  undefined1 local_78 [48];
  char local_48;
  undefined8 local_40;
  undefined4 local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((param_2 != (longlong *)0x0) && (DAT_14cb1d8f0 == '\0')) {
    local_48 = '\0';
    local_40 = 0x7fffffff;
    local_38 = 0;
    local_80[0] = *(undefined4 *)((longlong)param_2 + 0xc);
    (**(code **)(*param_2 + 0x520))(param_2,local_78,1,0);
    uVar1 = FUN_144a79cc8(param_2);
    FUN_14485c47a((longlong)&local_40 + 4,uVar1);
    local_40 = CONCAT44(local_40._4_4_,(int)param_2[0x79]);
    local_30 = 2 - (uint)(local_48 == '\0');
    FUN_147e7b942(param_1,local_80);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e77118 FUN_147e77118 body=360 status=ok
// SIG undefined FUN_147e77118(void)

void FUN_147e77118(longlong *param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  undefined1 local_40;
  undefined4 local_30;
  undefined4 local_2c;
  longlong local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_28 != 0) {
    local_48 = &local_1c;
    local_1c = 0x7fffffff;
    local_40 = 3;
    (**(code **)(*param_1 + 0x388))(param_1,local_28,local_2c,local_30);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e77294 FUN_147e77294 body=167 status=ok
// SIG undefined FUN_147e77294(void)

void FUN_147e77294(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 0x80) = local_19;
  if (*(longlong *)(param_1 + 0x370) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x370) + 0x148) = local_19;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e7733c FUN_147e7733c body=137 status=ok
// SIG undefined FUN_147e7733c(void)

void FUN_147e7733c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_14);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_14);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e773c6 FUN_147e773c6 body=165 status=ok
// SIG undefined FUN_147e773c6(void)

void FUN_147e773c6(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  if (local_20 != 0) {
    (**(code **)(*param_1 + 0x398))(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e774a6 FUN_147e774a6 body=183 status=ok
// SIG undefined FUN_147e774a6(void)

void FUN_147e774a6(undefined8 *param_1)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) & 0xfe;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  return;
}



// FUNCTION 147e77579 FUN_147e77579 body=119 status=ok
// SIG undefined FUN_147e77579(void)

void FUN_147e77579(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb1d828) {
    FUN_144b3d300(&DAT_14cb1d828);
    if (DAT_14cb1d828 == -1) {
      FUN_145c12714(&DAT_14cb1d7a0,0x420c0000,0x43100000);
      atexit(FUN_143834ca5);
      _Init_thread_footer(&DAT_14cb1d828);
      return;
    }
  }
  return;
}



// FUNCTION 147e775f0 FUN_147e775f0 body=206 status=ok
// SIG undefined FUN_147e775f0(void)

undefined8 FUN_147e775f0(int *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*param_1 == 0) && (param_1[1] == 0)) {
    if (*(longlong *)(param_1 + 4) != 0) {
      cVar2 = FUN_144729dda(param_1 + 2);
      if ((cVar2 != '\0') && (plVar1 = *(longlong **)(param_1 + 4), plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x10))(plVar1,&local_30);
        param_2[2] = local_20;
        *(undefined4 *)param_2 = local_30;
        *(undefined4 *)((longlong)param_2 + 4) = uStack_2c;
        *(undefined4 *)(param_2 + 1) = uStack_28;
        *(undefined4 *)((longlong)param_2 + 0xc) = uStack_24;
        goto LAB_147e77646;
      }
    }
  }
  else {
    lVar3 = FUN_14479d2ce(param_1);
    if (lVar3 != 0) {
      lVar3 = *(longlong *)(lVar3 + 0x1c8);
      if (lVar3 == 0) {
        puVar4 = &DAT_14c8464e0;
        uVar6 = (undefined4)DAT_14c8464f0;
        uVar7 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      }
      else {
        uVar6 = (undefined4)*(undefined8 *)(lVar3 + 0x270);
        uVar7 = (undefined4)((ulonglong)*(undefined8 *)(lVar3 + 0x270) >> 0x20);
        puVar4 = (undefined8 *)(lVar3 + 0x260);
      }
      uVar5 = puVar4[1];
      *param_2 = *puVar4;
      param_2[1] = uVar5;
      param_2[2] = CONCAT44(uVar7,uVar6);
LAB_147e77646:
      uVar5 = 1;
      goto LAB_147e77648;
    }
  }
  uVar5 = 0;
LAB_147e77648:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e776c0 FUN_147e776c0 body=87 status=ok
// SIG undefined FUN_147e776c0(void)

void FUN_147e776c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_147e77718(param_1 + 0x1058,*(undefined4 *)(param_2 + 8));
  if ((longlong)*(int *)(param_1 + 0x1060) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x1058);
    lVar2 = (longlong)*(int *)(param_1 + 0x1060) << 4;
    do {
      *(undefined4 *)(lVar1 + 8) = 0;
      if (*(int *)(lVar1 + 0xc) != 0) {
        FUN_140cb0586(lVar1,0);
      }
      lVar1 = lVar1 + 0x10;
      lVar2 = lVar2 + -0x10;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 147e77718 FUN_147e77718 body=130 status=ok
// SIG undefined FUN_147e77718(void)

void FUN_147e77718(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_147e853da(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_147e85460(param_1,param_2,iVar1 - param_2);
    FUN_147e854ba(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147e7779c FUN_147e7779c body=42 status=ok
// SIG undefined FUN_147e7779c(void)

void FUN_147e7779c(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < param_2) {
    FUN_140cb0586();
    return;
  }
  return;
}



// FUNCTION 147e777c8 FUN_147e777c8 body=295 status=ok
// SIG undefined FUN_147e777c8(void)

void FUN_147e777c8(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  QueryPerformanceCounter(&local_28);
  dVar4 = (double)local_28.QuadPart * DAT_14c83f420 + 16777216.0;
  if (*(longlong *)(param_1 + 0x1078) + 1 == param_2) {
    dVar5 = dVar4 - *(double *)(param_1 + 0x1088);
    if ((ulonglong)*(uint *)(param_1 + 0x1054) == 0x100) {
      dVar6 = *(double *)(param_1 + 0x840 + (ulonglong)*(uint *)(param_1 + 0x1050) * 8);
      *(double *)(param_1 + 0x840 + (ulonglong)*(uint *)(param_1 + 0x1050) * 8) = dVar5;
      iVar1 = *(int *)(param_1 + 0x1050);
      iVar2 = *(int *)(param_1 + 0x1054);
      uVar3 = iVar1 + 0x100;
      if (-1 < (int)(iVar1 + 1U)) {
        uVar3 = iVar1 + 1U;
      }
      *(uint *)(param_1 + 0x1050) = (iVar1 - (uVar3 & 0xffffff00)) + 1;
    }
    else {
      *(double *)(param_1 + 0x840 + (ulonglong)*(uint *)(param_1 + 0x1054) * 8) = dVar5;
      iVar2 = *(int *)(param_1 + 0x1054) + 1;
      *(int *)(param_1 + 0x1054) = iVar2;
      dVar6 = 0.0;
    }
    dVar5 = dVar5 + (*(double *)(param_1 + 0x1040) - dVar6);
    *(double *)(param_1 + 0x1040) = dVar5;
    *(double *)(param_1 + 0x1048) = dVar5 / (double)iVar2;
  }
  *(double *)(param_1 + 0x1088) = dVar4;
  *(longlong *)(param_1 + 0x1078) = param_2;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e778f0 FUN_147e778f0 body=239 status=ok
// SIG undefined FUN_147e778f0(void)

undefined8 FUN_147e778f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = &PTR_LAB_14a3ea200;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_30[2] = lVar3;
  *local_30 = &PTR_FUN_14abb5720;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = &LAB_147e779e0;
  FUN_14585199c(&DAT_14cb10868,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e779e6 FUN_147e779e6 body=244 status=ok
// SIG undefined FUN_147e779e6(void)

undefined8
FUN_147e779e6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar1 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14a1ca6c0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_40[2] = lVar3;
  *local_40 = &PTR_FUN_14abb5790;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = param_4;
  FUN_1411df00c(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e77adc FUN_147e77adc body=329 status=ok
// SIG undefined FUN_147e77adc(void)

void FUN_147e77adc(longlong *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = (**(code **)(*param_1 + 0x180))();
  if ((param_2 != 0) && (lVar5 == param_3)) {
    if (DAT_14cb1d8f0 == '\0') {
      local_40 = param_1 + 0x99;
      local_48 = param_1 + 0x5a;
      FUN_143833e1c(&local_48,param_2);
    }
    if ((*(longlong *)(param_2 + 0xc0) == 0) ||
       (*(longlong *)(*(longlong *)(param_2 + 0xc0) + 0x30) != param_2)) {
      iVar1 = (int)param_1[0x1d];
      if (0 < (longlong)iVar1) {
        iVar6 = -iVar1;
        uVar7 = (longlong)iVar1;
        do {
          plVar2 = *(longlong **)(param_1[0x1c] + -8 + uVar7 * 8);
          if (plVar2 != (longlong *)0x0) {
            lVar5 = FUN_144a79cc8(plVar2);
            if (lVar5 == param_2) {
              uVar4 = *(uint *)(param_1 + 0x1d);
              if (uVar7 != uVar4) {
                memmove((void *)(param_1[0x1c] + uVar7 * 8 + -8),(void *)(param_1[0x1c] + uVar7 * 8)
                        ,(longlong)(int)(uVar4 + iVar6) << 3);
                uVar4 = *(uint *)(param_1 + 0x1d);
              }
              *(uint *)(param_1 + 0x1d) = uVar4 - 1;
              (**(code **)(*param_1 + 0x3a0))(param_1,plVar2);
            }
            else {
              (**(code **)(*plVar2 + 0x690))(plVar2,param_2,param_3);
            }
          }
          iVar6 = iVar6 + 1;
          bVar3 = 1 < uVar7;
          uVar7 = uVar7 - 1;
        } while (bVar3);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e77c44 FUN_147e77c44 body=61 status=ok
// SIG undefined FUN_147e77c44(void)

void FUN_147e77c44(longlong *param_1)

{
  if ((*(byte *)((longlong)param_1 + 0x52a) & 1) == 0) {
    (**(code **)(*param_1 + 0x430))();
    (**(code **)(*param_1 + 0x338))(param_1);
    FUN_147e77c82(param_1);
    *(byte *)((longlong)param_1 + 0x52a) = *(byte *)((longlong)param_1 + 0x52a) | 1;
  }
  return;
}



// FUNCTION 147e77c82 FUN_147e77c82 body=594 status=ok
// SIG undefined FUN_147e77c82(void)

void FUN_147e77c82(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x4f8);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x58) != 3) {
      FUN_1446efa72((longlong *)(lVar1 + 0x50),0,3,0x10);
      *(undefined4 *)(lVar1 + 0x58) = 3;
    }
    puVar2 = *(undefined8 **)(lVar1 + 0x50);
    *puVar2 = &PTR_LAB_14abb5bf0;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    puVar2[2] = lVar3;
    *puVar2 = &PTR_FUN_14abb5b80;
    puVar2[3] = 0;
    FUN_14485c47a(puVar2 + 3,param_1);
    puVar2[4] = param_1;
    lVar1 = *(longlong *)(param_1 + 0x4f8);
    if (*(int *)(lVar1 + 0x68) != 3) {
      FUN_1446efa72((longlong *)(lVar1 + 0x60),0,3,0x10);
      *(undefined4 *)(lVar1 + 0x68) = 3;
    }
    puVar2 = *(undefined8 **)(lVar1 + 0x60);
    *puVar2 = &PTR_LAB_14abb5bf0;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    puVar2[2] = lVar3;
    *puVar2 = &PTR_FUN_14abb5c60;
    puVar2[3] = 0;
    FUN_14485c47a(puVar2 + 3,param_1);
    puVar2[4] = param_1;
    lVar1 = *(longlong *)(param_1 + 0x4f8);
    if (*(int *)(lVar1 + 0x38) != 3) {
      FUN_1446efa72((longlong *)(lVar1 + 0x30),0,3,0x10);
      *(undefined4 *)(lVar1 + 0x38) = 3;
    }
    puVar2 = *(undefined8 **)(lVar1 + 0x30);
    *puVar2 = &PTR_LAB_14abb5d40;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    puVar2[2] = lVar3;
    *puVar2 = &PTR_FUN_14abb5cd0;
    puVar2[3] = 0;
    FUN_14485c47a(puVar2 + 3,param_1);
    puVar2[4] = param_1;
    lVar1 = *(longlong *)(param_1 + 0x4f8);
    if (*(int *)(lVar1 + 0x48) != 3) {
      FUN_1446efa72((longlong *)(lVar1 + 0x40),0,3,0x10);
      *(undefined4 *)(lVar1 + 0x48) = 3;
    }
    puVar2 = *(undefined8 **)(lVar1 + 0x40);
    *puVar2 = &PTR_LAB_14abb5d40;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    puVar2[2] = lVar3;
    *puVar2 = &PTR_FUN_14abb5db0;
    puVar2[3] = 0;
    FUN_14485c47a(puVar2 + 3,param_1);
    puVar2[4] = param_1;
  }
  return;
}



// FUNCTION 147e77ed4 FUN_147e77ed4 body=431 status=ok
// SIG undefined FUN_147e77ed4(void)

void FUN_147e77ed4(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  undefined1 local_a8 [8];
  undefined1 local_a0 [28];
  char local_84;
  longlong local_80;
  longlong local_78;
  char local_50;
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((param_1[6] != 0) && ((*(uint *)(param_1[6] + 8) >> 0x1e & 1) == 0)) goto LAB_147e77f05;
  uVar1 = (**(code **)(*param_1 + 0x180))(param_1);
  local_b0 = FUN_145b5efc2();
  if ((local_b0 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_b0);
  }
  FUN_147e78084(local_a8,uVar1,&local_b0);
  if (local_84 == '\0') {
    do {
      if ((local_78 != 0) && ((*(uint *)(local_78 + 8) >> 0x1e & 1) == 0)) {
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(local_78);
        }
        param_1[6] = local_78;
        break;
      }
      FUN_147e78106(local_a8);
    } while (local_84 != '\x01');
  }
  if (local_50 == '\x01') {
    FUN_14024445c(local_a0);
  }
  if (param_1[6] != 0) goto LAB_147e77f05;
  FUN_145c12714(local_a8,0x420c0000,0x43100000);
  uVar1 = FUN_145b5efc2();
  FUN_1478cd8c2(local_a8,uVar1);
  lVar2 = (**(code **)(*param_1 + 0x360))(param_1,local_a8,0);
  if ((lVar2 == 0) || (DAT_14c950c29 == '\0')) {
    param_1[6] = lVar2;
    if (lVar2 != 0) goto LAB_147e77ff4;
  }
  else {
    FUN_1456cec3c(lVar2);
    param_1[6] = lVar2;
LAB_147e77ff4:
    FUN_144757f48(lVar2,0x40);
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if (local_80 != 0) {
    FUN_1400020a8();
  }
LAB_147e77f05:
  if ((local_20 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e78084 FUN_147e78084 body=128 status=ok
// SIG undefined FUN_147e78084(void)

undefined4 * FUN_147e78084(undefined4 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_3;
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *param_1 = 5;
  *(undefined1 *)(param_1 + 0x16) = 0;
  local_20 = param_2;
  FUN_140244552(param_1 + 2,&local_20,&local_28);
  FUN_147e78106(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e78106 FUN_147e78106 body=440 status=ok
// SIG undefined FUN_147e78106(void)

void FUN_147e78106(uint *param_1)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  uint *puVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  byte bVar8;
  longlong lVar9;
  longlong lVar10;
  char *pcVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  
  lVar13 = (longlong)(int)param_1[6];
  if ((int)(param_1[8] + 1) < (int)(param_1[0x10] + param_1[6])) {
    lVar2 = *(longlong *)(param_1 + 2);
    lVar12 = (longlong)(int)param_1[8] + 1;
    do {
      lVar9 = lVar13;
      puVar4 = param_1 + 0xe;
      if (lVar12 < lVar13) {
        lVar9 = 0;
        puVar4 = param_1 + 4;
      }
      lVar9 = *(longlong *)(*(longlong *)puVar4 + lVar9 * -8 + lVar12 * 8);
      param_1[10] = param_1[10] + 1;
      if (((lVar9 != 0) && (lVar7 = FUN_144a79cc8(lVar9), lVar7 != 0)) &&
         ((uVar6 = *param_1, (uVar6 & 1) == 0 || ((*(uint *)(lVar9 + 8) >> 0x1e & 1) == 0)))) {
        if ((uVar6 & 2) != 0) {
          cVar5 = FUN_144affb44(lVar9);
          if (cVar5 == '\0') goto LAB_147e781aa;
          uVar6 = *param_1;
        }
        if ((uVar6 & 4) == 0) {
          lVar10 = *(longlong *)(lVar7 + 0xc0);
        }
        else {
          if (((*(byte *)(lVar7 + 0x240) & 0x20) == 0) ||
             (bVar8 = 1, (*(byte *)(lVar7 + 0x242) & 8) != 0)) {
            bVar8 = 1;
            if ((*(byte *)(lVar7 + 0x241) & 0x20) == 0) {
              bVar8 = (*(byte *)(lVar7 + 0x241) & 0x40) >> 6;
            }
          }
          lVar10 = *(longlong *)(lVar7 + 0xc0);
          if (lVar10 == 0) {
LAB_147e7828d:
            pcVar11 = (char *)0x0;
          }
          else {
            iVar1 = *(int *)(lVar10 + 0x1b0);
            if (((longlong)iVar1 < 0) || (*(int *)(lVar10 + 0x1a8) <= iVar1)) goto LAB_147e7828d;
            pcVar11 = (char *)((longlong)iVar1 * 0x78 + *(longlong *)(lVar10 + 0x1a0));
          }
          pcVar3 = *(char **)(lVar7 + 0x2e8);
          if (pcVar3 == (char *)0x0) {
            bVar14 = true;
          }
          else {
            bVar14 = *pcVar3 == '\x02';
          }
          if ((bVar8 & ((pcVar11 == (char *)0x0 || pcVar3 == pcVar11) | bVar14)) != 1)
          goto LAB_147e781aa;
        }
        if (lVar10 == lVar2) {
          if (*(longlong *)(lVar2 + 0x30) == lVar7) {
LAB_147e782b4:
            *(longlong *)(param_1 + 0xc) = lVar9;
            param_1[8] = (uint)lVar12;
            return;
          }
          lVar7 = FUN_14059e8cc();
          if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) goto LAB_147e782b4;
        }
      }
LAB_147e781aa:
      lVar12 = lVar12 + 1;
    } while (lVar12 < (int)param_1[0x10] + lVar13);
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  return;
}



// FUNCTION 147e782be FUN_147e782be body=213 status=ok
// SIG undefined FUN_147e782be(void)

void FUN_147e782be(longlong param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((int)param_2 < 0) || (*(int *)(param_1 + 0x98) <= (int)param_2)) goto LAB_147e78365;
  lVar1 = *(longlong *)(param_1 + 0x90);
  lVar3 = *param_3;
  if (lVar3 == 0) {
LAB_147e7832f:
    lVar3 = 0;
  }
  else {
    lVar2 = FUN_14110d034();
    if (((lVar2 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
        lVar2 + 0x30)) goto LAB_147e7832f;
    lVar3 = *param_3;
  }
  FUN_1478cd8c2(lVar1 + (ulonglong)param_2 * 0x88,lVar3);
  lVar1 = *(longlong *)(param_1 + 0x90);
  local_38 = *param_3;
  if ((local_38 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_1478cddda((ulonglong)param_2 * 0x88 + lVar1,&local_38);
LAB_147e78365:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e78394 FUN_147e78394 body=562 status=ok
// SIG undefined FUN_147e78394(void)

void FUN_147e78394(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  longlong *local_40 [2];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_2 != (longlong *)0x0) && ((*(uint *)((longlong)param_2 + 0xd4) & 1) == 0)) {
    if ((*(uint *)((longlong)param_2 + 0xd4) >> 0x12 & 1) != 0) {
      local_30 = param_2[3];
      FUN_1400021e4(&local_30,local_40);
      local_50 = 0xffffffff;
      local_58 = 0;
      iVar2 = FUN_1447ee042(local_40,L"SKEL_",5,1);
      if (local_40[0] != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (iVar2 != -1) goto LAB_147e7842b;
      lVar3 = FUN_144a79778(param_2);
      if (lVar3 != 0) {
        local_30 = *(longlong *)(lVar3 + 0x18);
        FUN_1400021e4(&local_30,local_40);
        local_50 = 0xffffffff;
        local_58 = 0;
        iVar2 = FUN_1447ee042(local_40,L"/Developers/",0xc,1);
        if (local_40[0] != (longlong *)0x0) {
          FUN_1400020a8();
        }
        if (iVar2 != -1) goto LAB_147e7842b;
      }
    }
    local_48 = param_2;
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(param_2);
    }
    if ((DAT_14c950c29 & 1) != 0) {
      FUN_1456cec3c(param_2);
    }
    uVar1 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
            -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    iVar2 = FUN_1408cc9a2(param_1 + 0xae,uVar1 >> 0x10 ^ uVar1,&local_48);
    if (iVar2 == -1) {
      plVar5 = (longlong *)param_2[0x22];
      if (plVar5 == (longlong *)0x0) {
        (**(code **)(*param_2 + 1000))(param_2);
        plVar5 = (longlong *)param_2[0x22];
      }
      (**(code **)(*plVar5 + 0x2b8))();
      local_40[0] = param_2;
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(param_2);
      }
      FUN_1459af580(param_1 + 0xae,&local_30,local_40,0);
      FUN_147e7b668(param_1,param_2,0);
      lVar3 = (**(code **)(*param_1 + 0x180))(param_1);
      if (lVar3 != 0) {
        uVar4 = FUN_1478c9b96();
        FUN_147e88288(uVar4,lVar3,param_2);
      }
    }
  }
LAB_147e7842b:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e785c8 FUN_147e785c8 body=226 status=ok
// SIG undefined FUN_147e785c8(void)

void FUN_147e785c8(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  lVar4 = plVar1[0x22];
  if (lVar4 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar4 = plVar1[0x22];
  }
  FUN_147e7d332(param_1 + 0x90,lVar4 + 0x90);
  iVar2 = *(int *)(param_1 + 0x98);
  if (iVar2 == 0) {
    FUN_147e77579();
    iVar2 = *(int *)(param_1 + 0x98);
    *(uint *)(param_1 + 0x98) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x9c) < iVar2 + 1U) {
      FUN_147e89852(param_1 + 0x90,iVar2);
    }
    FUN_1478cd74c((longlong)iVar2 * 0x88 + *(longlong *)(param_1 + 0x90),&DAT_14cb1d7a0);
    iVar2 = *(int *)(param_1 + 0x98);
  }
  if (0 < iVar2) {
    lVar4 = 0;
    uVar3 = 0;
    do {
      if ((0xf < uVar3) || ((*(uint *)(param_1 + 0xa0) >> ((uint)uVar3 & 0x1f) & 1) == 0)) {
        FUN_1478cdb16(*(longlong *)(param_1 + 0x90) + lVar4);
        iVar2 = *(int *)(param_1 + 0x98);
      }
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0x88;
    } while ((longlong)uVar3 < (longlong)iVar2);
  }
  return;
}



// FUNCTION 147e786aa FUN_147e786aa body=303 status=ok
// SIG undefined FUN_147e786aa(void)

longlong * FUN_147e786aa(longlong param_1,longlong *param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = param_1 + 0x60;
  lVar3 = FUN_14479d2ce(lVar4);
  if (lVar3 == 0) {
    if (*(longlong *)(param_1 + 0x68) == 0) goto LAB_147e787c5;
    lVar3 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar3 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(lVar4,lVar3);
      if (lVar3 == 0) goto LAB_147e787c5;
    }
    else {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(lVar4,lVar3);
      }
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0) goto LAB_147e787c5;
  }
  lVar4 = FUN_144a797b2();
  if ((((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) && (lVar4 = FUN_144a6c4d8(), lVar4 != 0)) &&
     (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))) {
    lVar5 = 0;
    if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
        lVar4 + 0x30) {
      lVar5 = lVar3;
    }
    *param_2 = lVar5;
    if (lVar5 == 0) {
      return param_2;
    }
    if (DAT_14c950c29 == '\0') {
      return param_2;
    }
    FUN_1456cec3c();
    return param_2;
  }
LAB_147e787c5:
  *param_2 = 0;
  return param_2;
}



// FUNCTION 147e787da FUN_147e787da body=239 status=ok
// SIG undefined FUN_147e787da(void)

undefined8 FUN_147e787da(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = &PTR_LAB_14a1e1a40;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_30[2] = lVar3;
  *local_30 = &PTR_FUN_14abb5870;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = FUN_143834df0;
  FUN_141211c46(&DAT_14c9647a0,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e788ca FUN_147e788ca body=232 status=ok
// SIG undefined FUN_147e788ca(void)

undefined8 FUN_147e788ca(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = &PTR_LAB_14abb5950;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_30[2] = lVar3;
  *local_30 = &PTR_FUN_14abb58e0;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = FUN_147e789b4;
  FUN_147e86156(param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e789b4 FUN_147e789b4 body=93 status=ok
// SIG undefined FUN_147e789b4(void)

void FUN_147e789b4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446ddc76(local_20,"OnNavigationDirtied",1);
  FUN_147e7b1b6(param_1,param_2,3);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e78a12 FUN_147e78a12 body=232 status=ok
// SIG undefined FUN_147e78a12(void)

undefined8 FUN_147e78a12(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = &PTR_LAB_14abb5a30;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_30[2] = lVar3;
  *local_30 = &PTR_FUN_14abb59c0;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = &LAB_147e78afc;
  FUN_147e864dc(param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e78b0a FUN_147e78b0a body=409 status=ok
// SIG undefined FUN_147e78b0a(void)

void FUN_147e78b0a(longlong *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_e8 [40];
  longlong *local_c0;
  longlong *local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  char local_80;
  double local_78;
  double dStack_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_68 = DAT_14c8464f0;
  local_78 = DAT_14c8464e0;
  dStack_70 = DAT_14c8464e8;
  (**(code **)(*param_1 + 0x2f0))(DAT_14c8464e0,&local_b0);
  if (local_80 == '\0') {
    dVar3 = 64000.0;
  }
  else {
    local_68 = (local_a0 + local_88) * 0.5;
    dStack_70 = (local_a8 + local_90) * 0.5;
    local_78 = (local_b0 + local_98) * 0.5;
    dVar1 = ABS((local_88 - local_a0) * 0.5);
    dVar2 = ABS((local_90 - local_a8) * 0.5);
    dVar3 = ABS((local_98 - local_b0) * 0.5);
    if (dVar3 <= dVar2) {
      dVar3 = dVar2;
    }
    if (dVar3 <= dVar1) {
      dVar3 = dVar1;
    }
  }
  local_b8 = param_1 + 0x99;
  local_c0 = param_1 + 0x5a;
  FUN_143832062(&local_c0,&local_78,dVar3,(char)param_1[0x10]);
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e78ca4 FUN_147e78ca4 body=104 status=ok
// SIG undefined FUN_147e78ca4(void)

undefined8 * FUN_147e78ca4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_147e868be(param_1 + 1,iVar1,0);
    FUN_147e822c4(param_1[1],uVar2,iVar1);
    param_2 = (undefined8 *)*param_1;
  }
  FUN_147e8685e(param_2,param_3);
  return param_1;
}



// FUNCTION 147e78d0c FUN_147e78d0c body=124 status=ok
// SIG undefined FUN_147e78d0c(void)

ulonglong FUN_147e78d0c(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  longlong lVar6;
  
  lVar4 = (**(code **)(*param_1 + 0x180))();
  bVar1 = *(byte *)(lVar4 + 0x152);
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((bVar1 == 1) || ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) {
    lVar4 = param_1[0x1d];
    if ((longlong)(int)lVar4 != 0) {
      lVar2 = param_1[0x1c];
      lVar6 = 0;
      do {
        if ((*(longlong **)(lVar2 + lVar6) != (longlong *)0x0) &&
           (cVar3 = (**(code **)(**(longlong **)(lVar2 + lVar6) + 0x658))(), cVar3 != '\0'))
        goto LAB_147e78d6b;
        lVar6 = lVar6 + 8;
      } while ((longlong)(int)lVar4 * 8 != lVar6);
    }
    uVar5 = 0;
  }
LAB_147e78d6b:
  return uVar5 & 0xffffffff;
}



// FUNCTION 147e78d88 FUN_147e78d88 body=58 status=ok
// SIG undefined FUN_147e78d88(void)

void FUN_147e78d88(undefined8 *param_1)

{
  FUN_147e8685e(*param_1,param_1 + 1);
  FUN_145972389(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147e78dc4 FUN_147e78dc4 body=57 status=ok
// SIG undefined FUN_147e78dc4(void)

void FUN_147e78dc4(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if (lVar1 != param_2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000147e78dfa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2a8))(param_1,0);
  return;
}


