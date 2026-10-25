// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1463ab354 FUN_1463ab354 body=200 status=ok
// SIG undefined FUN_1463ab354(void)

void FUN_1463ab354(ulonglong param_1)

{
  ulonglong *puVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  undefined *puVar5;
  
  if (DAT_14cacd610 != DAT_14cacd63c) {
    uVar4 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    puVar5 = &DAT_14cacd640;
    if (DAT_14cacd648 != (undefined *)0x0) {
      puVar5 = DAT_14cacd648;
    }
    iVar2 = *(int *)(puVar5 + (ulonglong)(DAT_14cacd650 - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
    while (iVar2 != -1) {
      puVar1 = (ulonglong *)(DAT_14cacd608 + (longlong)iVar2 * 0x18);
      if (*puVar1 == param_1) {
        if (puVar1 + 1 == (ulonglong *)0x0 || puVar1 == (ulonglong *)0x0) {
          return;
        }
        plVar3 = (longlong *)puVar1[1];
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x30))(plVar3,1);
        }
        FUN_14585e394(&DAT_14cacd608,param_1);
        return;
      }
      iVar2 = (int)puVar1[2];
    }
  }
  return;
}



// FUNCTION 1463ab41c FUN_1463ab41c body=55 status=ok
// SIG undefined FUN_1463ab41c(void)

void FUN_1463ab41c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacd660 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacd660 = FUN_140002ddd(FUN_1463ab453,uVar1,L"SmartNameMapping");
  }
  return;
}



// FUNCTION 1463ab453 FUN_1463ab453 body=47 status=ok
// SIG undefined FUN_1463ab453(void)

longlong FUN_1463ab453(void)

{
  if (DAT_14cacd658 == 0) {
    FUN_14086a14e(&DAT_14cacd658,&PTR_FUN_14a7da578);
  }
  return DAT_14cacd658;
}



// FUNCTION 1463ab482 FUN_1463ab482 body=48 status=ok
// SIG undefined FUN_1463ab482(void)

void FUN_1463ab482(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000070;
  *puVar1 = &PTR_FUN_14a7df1e0;
  return;
}



// FUNCTION 1463ab4b2 FUN_1463ab4b2 body=55 status=ok
// SIG undefined FUN_1463ab4b2(void)

void FUN_1463ab4b2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacd678 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacd678 = FUN_140002ddd(FUN_1463ab136,uVar1,L"SmartNameContainer");
  }
  return;
}



// FUNCTION 1463ab4ea FUN_1463ab4ea body=48 status=ok
// SIG undefined FUN_1463ab4ea(void)

void FUN_1463ab4ea(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14a7df350;
  return;
}



// FUNCTION 1463ab51a FUN_1463ab51a body=55 status=ok
// SIG undefined FUN_1463ab51a(void)

void FUN_1463ab51a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacd690 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacd690 = FUN_140002ddd(FUN_1463ab551,uVar1,L"SmartName");
  }
  return;
}



// FUNCTION 1463ab551 FUN_1463ab551 body=47 status=ok
// SIG undefined FUN_1463ab551(void)

longlong FUN_1463ab551(void)

{
  if (DAT_14cacd688 == 0) {
    FUN_14086a14e(&DAT_14cacd688,&PTR_FUN_14a7da690);
  }
  return DAT_14cacd688;
}



// FUNCTION 1463ab580 FUN_1463ab580 body=48 status=ok
// SIG undefined FUN_1463ab580(void)

void FUN_1463ab580(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x40000000c;
  *puVar1 = &PTR_FUN_14a7df4c0;
  return;
}



// FUNCTION 1463ab5b0 FUN_1463ab5b0 body=40 status=ok
// SIG undefined FUN_1463ab5b0(void)

undefined8 FUN_1463ab5b0(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ab5d8 FUN_1463ab5d8 body=78 status=ok
// SIG undefined FUN_1463ab5d8(void)

undefined8 * FUN_1463ab5d8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a7ceec0;
  param_1[5] = &PTR_LAB_14a7cf170;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ab626 FUN_1463ab626 body=40 status=ok
// SIG undefined FUN_1463ab626(void)

undefined8 FUN_1463ab626(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ab64e FUN_1463ab64e body=40 status=ok
// SIG undefined FUN_1463ab64e(void)

undefined8 FUN_1463ab64e(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ab676 FUN_1463ab676 body=40 status=ok
// SIG undefined FUN_1463ab676(void)

undefined8 FUN_1463ab676(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ab69e FUN_1463ab69e body=40 status=ok
// SIG undefined FUN_1463ab69e(void)

undefined8 FUN_1463ab69e(undefined8 param_1,int param_2)

{
  FUN_14119d272();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ab6c6 FUN_1463ab6c6 body=40 status=ok
// SIG undefined FUN_1463ab6c6(void)

undefined8 FUN_1463ab6c6(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ab6ee FUN_1463ab6ee body=40 status=ok
// SIG undefined FUN_1463ab6ee(void)

undefined8 FUN_1463ab6ee(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ab716 FUN_1463ab716 body=40 status=ok
// SIG undefined FUN_1463ab716(void)

undefined8 FUN_1463ab716(undefined8 param_1,int param_2)

{
  FUN_140fd6abc();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ab73e FUN_1463ab73e body=29 status=ok
// SIG undefined FUN_1463ab73e(void)

undefined8 FUN_1463ab73e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ab75c FUN_1463ab75c body=29 status=ok
// SIG undefined FUN_1463ab75c(void)

undefined8 FUN_1463ab75c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ab77a FUN_1463ab77a body=29 status=ok
// SIG undefined FUN_1463ab77a(void)

undefined8 FUN_1463ab77a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ab798 FUN_1463ab798 body=29 status=ok
// SIG undefined FUN_1463ab798(void)

undefined8 FUN_1463ab798(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ab7b6 FUN_1463ab7b6 body=29 status=ok
// SIG undefined FUN_1463ab7b6(void)

undefined8 FUN_1463ab7b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ab7d4 FUN_1463ab7d4 body=29 status=ok
// SIG undefined FUN_1463ab7d4(void)

undefined8 FUN_1463ab7d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ab7f2 FUN_1463ab7f2 body=29 status=ok
// SIG undefined FUN_1463ab7f2(void)

undefined8 FUN_1463ab7f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ab810 FUN_1463ab810 body=29 status=ok
// SIG undefined FUN_1463ab810(void)

undefined8 FUN_1463ab810(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ab82e FUN_1463ab82e body=29 status=ok
// SIG undefined FUN_1463ab82e(void)

undefined8 FUN_1463ab82e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ab84c FUN_1463ab84c body=29 status=ok
// SIG undefined FUN_1463ab84c(void)

undefined8 FUN_1463ab84c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ab86a FUN_1463ab86a body=29 status=ok
// SIG undefined FUN_1463ab86a(void)

undefined8 FUN_1463ab86a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ab888 FUN_1463ab888 body=29 status=ok
// SIG undefined FUN_1463ab888(void)

undefined8 FUN_1463ab888(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ab8a6 FUN_1463ab8a6 body=29 status=ok
// SIG undefined FUN_1463ab8a6(void)

undefined8 FUN_1463ab8a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ab8c4 FUN_1463ab8c4 body=29 status=ok
// SIG undefined FUN_1463ab8c4(void)

undefined8 FUN_1463ab8c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ab8e2 FUN_1463ab8e2 body=29 status=ok
// SIG undefined FUN_1463ab8e2(void)

undefined8 FUN_1463ab8e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ab900 FUN_1463ab900 body=29 status=ok
// SIG undefined FUN_1463ab900(void)

undefined8 FUN_1463ab900(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ab91e FUN_1463ab91e body=29 status=ok
// SIG undefined FUN_1463ab91e(void)

undefined8 FUN_1463ab91e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ab93c FUN_1463ab93c body=29 status=ok
// SIG undefined FUN_1463ab93c(void)

undefined8 FUN_1463ab93c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ab95a FUN_1463ab95a body=29 status=ok
// SIG undefined FUN_1463ab95a(void)

undefined8 FUN_1463ab95a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ab978 FUN_1463ab978 body=29 status=ok
// SIG undefined FUN_1463ab978(void)

undefined8 FUN_1463ab978(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ab996 FUN_1463ab996 body=29 status=ok
// SIG undefined FUN_1463ab996(void)

undefined8 FUN_1463ab996(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ab9b4 FUN_1463ab9b4 body=29 status=ok
// SIG undefined FUN_1463ab9b4(void)

undefined8 FUN_1463ab9b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ab9d2 FUN_1463ab9d2 body=29 status=ok
// SIG undefined FUN_1463ab9d2(void)

undefined8 FUN_1463ab9d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ab9f0 FUN_1463ab9f0 body=29 status=ok
// SIG undefined FUN_1463ab9f0(void)

undefined8 FUN_1463ab9f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463aba0e FUN_1463aba0e body=29 status=ok
// SIG undefined FUN_1463aba0e(void)

undefined8 FUN_1463aba0e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463aba2c FUN_1463aba2c body=29 status=ok
// SIG undefined FUN_1463aba2c(void)

undefined8 FUN_1463aba2c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463aba4a FUN_1463aba4a body=29 status=ok
// SIG undefined FUN_1463aba4a(void)

undefined8 FUN_1463aba4a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463aba68 FUN_1463aba68 body=29 status=ok
// SIG undefined FUN_1463aba68(void)

undefined8 FUN_1463aba68(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463aba86 FUN_1463aba86 body=29 status=ok
// SIG undefined FUN_1463aba86(void)

undefined8 FUN_1463aba86(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463abaa4 FUN_1463abaa4 body=29 status=ok
// SIG undefined FUN_1463abaa4(void)

undefined8 FUN_1463abaa4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463abac2 FUN_1463abac2 body=29 status=ok
// SIG undefined FUN_1463abac2(void)

undefined8 FUN_1463abac2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463abae0 FUN_1463abae0 body=29 status=ok
// SIG undefined FUN_1463abae0(void)

undefined8 FUN_1463abae0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463abafe FUN_1463abafe body=29 status=ok
// SIG undefined FUN_1463abafe(void)

undefined8 FUN_1463abafe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463abb1c FUN_1463abb1c body=29 status=ok
// SIG undefined FUN_1463abb1c(void)

undefined8 FUN_1463abb1c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463abb3a FUN_1463abb3a body=29 status=ok
// SIG undefined FUN_1463abb3a(void)

undefined8 FUN_1463abb3a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463abb58 FUN_1463abb58 body=29 status=ok
// SIG undefined FUN_1463abb58(void)

undefined8 FUN_1463abb58(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463abb76 FUN_1463abb76 body=29 status=ok
// SIG undefined FUN_1463abb76(void)

undefined8 FUN_1463abb76(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463abb94 FUN_1463abb94 body=29 status=ok
// SIG undefined FUN_1463abb94(void)

undefined8 FUN_1463abb94(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463abbb2 FUN_1463abbb2 body=29 status=ok
// SIG undefined FUN_1463abbb2(void)

undefined8 FUN_1463abbb2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463abbd0 FUN_1463abbd0 body=29 status=ok
// SIG undefined FUN_1463abbd0(void)

undefined8 FUN_1463abbd0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463abbee FUN_1463abbee body=29 status=ok
// SIG undefined FUN_1463abbee(void)

undefined8 FUN_1463abbee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463abc0c FUN_1463abc0c body=29 status=ok
// SIG undefined FUN_1463abc0c(void)

undefined8 FUN_1463abc0c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463abc2a FUN_1463abc2a body=29 status=ok
// SIG undefined FUN_1463abc2a(void)

undefined8 FUN_1463abc2a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463abc48 FUN_1463abc48 body=29 status=ok
// SIG undefined FUN_1463abc48(void)

undefined8 FUN_1463abc48(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463abc66 FUN_1463abc66 body=29 status=ok
// SIG undefined FUN_1463abc66(void)

undefined8 FUN_1463abc66(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463abc84 FUN_1463abc84 body=29 status=ok
// SIG undefined FUN_1463abc84(void)

undefined8 FUN_1463abc84(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463abca2 FUN_1463abca2 body=29 status=ok
// SIG undefined FUN_1463abca2(void)

undefined8 FUN_1463abca2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463abcc0 FUN_1463abcc0 body=29 status=ok
// SIG undefined FUN_1463abcc0(void)

undefined8 FUN_1463abcc0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463abcde FUN_1463abcde body=29 status=ok
// SIG undefined FUN_1463abcde(void)

undefined8 FUN_1463abcde(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463abcfc FUN_1463abcfc body=29 status=ok
// SIG undefined FUN_1463abcfc(void)

undefined8 FUN_1463abcfc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463abd1a FUN_1463abd1a body=29 status=ok
// SIG undefined FUN_1463abd1a(void)

undefined8 FUN_1463abd1a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463abd38 FUN_1463abd38 body=29 status=ok
// SIG undefined FUN_1463abd38(void)

undefined8 FUN_1463abd38(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463abd56 FUN_1463abd56 body=29 status=ok
// SIG undefined FUN_1463abd56(void)

undefined8 FUN_1463abd56(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463abd74 FUN_1463abd74 body=29 status=ok
// SIG undefined FUN_1463abd74(void)

undefined8 FUN_1463abd74(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463abd92 FUN_1463abd92 body=29 status=ok
// SIG undefined FUN_1463abd92(void)

undefined8 FUN_1463abd92(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463abdb0 FUN_1463abdb0 body=105 status=ok
// SIG undefined FUN_1463abdb0(void)

void FUN_1463abdb0(void)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = FUN_14143f0c0();
  lVar3 = *(longlong *)(lVar1 + 0x110);
  if (lVar3 == 0) {
    FUN_140aa6c08(lVar1);
    lVar3 = *(longlong *)(lVar1 + 0x110);
  }
  if ((longlong)*(int *)(lVar3 + 0x120) != 0) {
    lVar1 = *(longlong *)(lVar3 + 0x118);
    lVar3 = (longlong)*(int *)(lVar3 + 0x120) * 0x28;
    do {
      uVar2 = FUN_14794a14a(lVar1);
      FUN_147938450(uVar2);
      lVar1 = lVar1 + 0x28;
      lVar3 = lVar3 + -0x28;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 1463abe1a FUN_1463abe1a body=488 status=ok
// SIG undefined FUN_1463abe1a(void)

void FUN_1463abe1a(longlong *param_1)

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



// FUNCTION 1463ac003 FUN_1463ac003 body=47 status=ok
// SIG undefined FUN_1463ac003(void)

longlong FUN_1463ac003(void)

{
  if (DAT_14cacd710 == 0) {
    FUN_1409ce572(&DAT_14cacd710,&PTR_FUN_14a7dfc70);
  }
  return DAT_14cacd710;
}



// FUNCTION 1463ac032 FUN_1463ac032 body=55 status=ok
// SIG undefined FUN_1463ac032(void)

void FUN_1463ac032(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacd730 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacd730 = FUN_140002ddd(FUN_1463ac069,uVar1,L"TimeStretchCurveMarker");
  }
  return;
}



// FUNCTION 1463ac069 FUN_1463ac069 body=47 status=ok
// SIG undefined FUN_1463ac069(void)

longlong FUN_1463ac069(void)

{
  if (DAT_14cacd728 == 0) {
    FUN_14086a14e(&DAT_14cacd728,&PTR_FUN_14a7dfd68);
  }
  return DAT_14cacd728;
}



// FUNCTION 1463ac098 FUN_1463ac098 body=48 status=ok
// SIG undefined FUN_1463ac098(void)

void FUN_1463ac098(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000010;
  *puVar1 = &PTR_FUN_14a7ead30;
  return;
}



// FUNCTION 1463ac0c8 FUN_1463ac0c8 body=55 status=ok
// SIG undefined FUN_1463ac0c8(void)

void FUN_1463ac0c8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacd748 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacd748 = FUN_140002ddd(FUN_1463ac0ff,uVar1,L"TimeStretchCurve");
  }
  return;
}



// FUNCTION 1463ac0ff FUN_1463ac0ff body=47 status=ok
// SIG undefined FUN_1463ac0ff(void)

longlong FUN_1463ac0ff(void)

{
  if (DAT_14cacd740 == 0) {
    FUN_14086a14e(&DAT_14cacd740,&PTR_FUN_14a7dff48);
  }
  return DAT_14cacd740;
}



// FUNCTION 1463ac12e FUN_1463ac12e body=48 status=ok
// SIG undefined FUN_1463ac12e(void)

void FUN_1463ac12e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14a7eae90;
  return;
}



// FUNCTION 1463ac15e FUN_1463ac15e body=55 status=ok
// SIG undefined FUN_1463ac15e(void)

void FUN_1463ac15e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacd760 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacd760 = FUN_140002ddd(FUN_1463ac195,uVar1,L"TimeStretchCurveInstance");
  }
  return;
}



// FUNCTION 1463ac195 FUN_1463ac195 body=47 status=ok
// SIG undefined FUN_1463ac195(void)

longlong FUN_1463ac195(void)

{
  if (DAT_14cacd758 == 0) {
    FUN_14086a14e(&DAT_14cacd758,&PTR_FUN_14a7e0028);
  }
  return DAT_14cacd758;
}



// FUNCTION 1463ac1c4 FUN_1463ac1c4 body=48 status=ok
// SIG undefined FUN_1463ac1c4(void)

void FUN_1463ac1c4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14a7eaff0;
  return;
}



// FUNCTION 1463ac1f4 FUN_1463ac1f4 body=55 status=ok
// SIG undefined FUN_1463ac1f4(void)

void FUN_1463ac1f4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacd788 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacd788 = FUN_140002ddd(FUN_1463ac22b,uVar1,L"AnimGroupInfo");
  }
  return;
}



// FUNCTION 1463ac22b FUN_1463ac22b body=47 status=ok
// SIG undefined FUN_1463ac22b(void)

longlong FUN_1463ac22b(void)

{
  if (DAT_14cacd780 == 0) {
    FUN_14086a14e(&DAT_14cacd780,&PTR_FUN_14a7e01b0);
  }
  return DAT_14cacd780;
}



// FUNCTION 1463ac25a FUN_1463ac25a body=48 status=ok
// SIG undefined FUN_1463ac25a(void)

void FUN_1463ac25a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000018;
  *puVar1 = &PTR_FUN_14a7eb150;
  return;
}



// FUNCTION 1463ac28a FUN_1463ac28a body=55 status=ok
// SIG undefined FUN_1463ac28a(void)

void FUN_1463ac28a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacd7a0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacd7a0 = FUN_140002ddd(FUN_1463ac2c1,uVar1,L"AnimParentNodeAssetOverride");
  }
  return;
}



// FUNCTION 1463ac2c1 FUN_1463ac2c1 body=47 status=ok
// SIG undefined FUN_1463ac2c1(void)

longlong FUN_1463ac2c1(void)

{
  if (DAT_14cacd798 == 0) {
    FUN_14086a14e(&DAT_14cacd798,&PTR_FUN_14a7e02e0);
  }
  return DAT_14cacd798;
}



// FUNCTION 1463ac2f0 FUN_1463ac2f0 body=48 status=ok
// SIG undefined FUN_1463ac2f0(void)

void FUN_1463ac2f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14a7eb2b0;
  return;
}



// FUNCTION 1463ac320 FUN_1463ac320 body=47 status=ok
// SIG undefined FUN_1463ac320(void)

longlong FUN_1463ac320(void)

{
  if (DAT_14cacd7b0 == 0) {
    FUN_1409ce572(&DAT_14cacd7b0,&PTR_FUN_14a7e0370);
  }
  return DAT_14cacd7b0;
}



// FUNCTION 1463ac34f FUN_1463ac34f body=102 status=ok
// SIG undefined FUN_1463ac34f(void)

void FUN_1463ac34f(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145894f8e(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a7e0690;
  puVar1[10] = &PTR_LAB_14a7e0970;
  puVar1[0x16] = &PTR_LAB_14a7e0990;
  puVar1[0x17] = &PTR_LAB_14a7e09c0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  *(undefined1 *)((longlong)puVar1 + 0xd9) = 1;
  return;
}



// FUNCTION 1463ac3ba FUN_1463ac3ba body=47 status=ok
// SIG undefined FUN_1463ac3ba(void)

longlong FUN_1463ac3ba(void)

{
  if (DAT_14cacd7d0 == 0) {
    FUN_14073dd9a(&DAT_14cacd7d0,&PTR_LAB_14a7e0648);
  }
  return DAT_14cacd7d0;
}



// FUNCTION 1463ac3ea FUN_1463ac3ea body=55 status=ok
// SIG undefined FUN_1463ac3ea(void)

void FUN_1463ac3ea(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacd7e8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacd7e8 = FUN_140002ddd(FUN_1463ac421,uVar1,L"AssetCompileData");
  }
  return;
}



// FUNCTION 1463ac421 FUN_1463ac421 body=47 status=ok
// SIG undefined FUN_1463ac421(void)

longlong FUN_1463ac421(void)

{
  if (DAT_14cacd7e0 == 0) {
    FUN_14086a14e(&DAT_14cacd7e0,&PTR_FUN_14a7e0b10);
  }
  return DAT_14cacd7e0;
}



// FUNCTION 1463ac450 FUN_1463ac450 body=48 status=ok
// SIG undefined FUN_1463ac450(void)

void FUN_1463ac450(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000008;
  *puVar1 = &PTR_FUN_14a7eb4e0;
  return;
}



// FUNCTION 1463ac480 FUN_1463ac480 body=98 status=ok
// SIG undefined FUN_1463ac480(void)

void FUN_1463ac480(void)

{
  FUN_144760e21(DAT_14cacd860,DAT_14cacd868);
  if (DAT_14cacd860 != 0) {
    FUN_1400020a8();
  }
  FUN_14141661e(&DAT_14cacd820);
  if (DAT_14cacd810 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cacd800 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1463ac4ef FUN_1463ac4ef body=47 status=ok
// SIG undefined FUN_1463ac4ef(void)

longlong FUN_1463ac4ef(void)

{
  if (DAT_14cacd890 == 0) {
    FUN_14073dd9a(&DAT_14cacd890,&PTR_LAB_14a7e1118);
  }
  return DAT_14cacd890;
}



// FUNCTION 1463ac51e FUN_1463ac51e body=47 status=ok
// SIG undefined FUN_1463ac51e(void)

longlong FUN_1463ac51e(void)

{
  if (DAT_14cacd9e0 == 0) {
    FUN_1409ce572(&DAT_14cacd9e0,&PTR_FUN_14a7e1ff0);
  }
  return DAT_14cacd9e0;
}



// FUNCTION 1463ac54e FUN_1463ac54e body=55 status=ok
// SIG undefined FUN_1463ac54e(void)

void FUN_1463ac54e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacda00 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacda00 = FUN_140002ddd(FUN_1463ac585,uVar1,L"PrimaryAssetRules");
  }
  return;
}



// FUNCTION 1463ac585 FUN_1463ac585 body=49 status=ok
// SIG undefined FUN_1463ac585(void)

longlong FUN_1463ac585(void)

{
  if (DAT_14cacd9f8 == 0) {
    FUN_14086a14e(&DAT_14cacd9f8,&PTR_FUN_14a7e21b8);
  }
  return DAT_14cacd9f8;
}



// FUNCTION 1463ac5b6 FUN_1463ac5b6 body=48 status=ok
// SIG undefined FUN_1463ac5b6(void)

void FUN_1463ac5b6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x40000000c;
  *puVar1 = &PTR_FUN_14a7eb7d0;
  return;
}



// FUNCTION 1463ac5e6 FUN_1463ac5e6 body=55 status=ok
// SIG undefined FUN_1463ac5e6(void)

void FUN_1463ac5e6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacda18 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacda18 = FUN_140002ddd(FUN_1463ac61d,uVar1,L"PrimaryAssetTypeInfo");
  }
  return;
}



// FUNCTION 1463ac61d FUN_1463ac61d body=47 status=ok
// SIG undefined FUN_1463ac61d(void)

longlong FUN_1463ac61d(void)

{
  if (DAT_14cacda10 == 0) {
    FUN_14086a14e(&DAT_14cacda10,&PTR_FUN_14a7e2678);
  }
  return DAT_14cacda10;
}



// FUNCTION 1463ac64c FUN_1463ac64c body=48 status=ok
// SIG undefined FUN_1463ac64c(void)

void FUN_1463ac64c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000088;
  *puVar1 = &PTR_FUN_14a7eb940;
  return;
}



// FUNCTION 1463ac67c FUN_1463ac67c body=55 status=ok
// SIG undefined FUN_1463ac67c(void)

void FUN_1463ac67c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacda30 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacda30 = FUN_140002ddd(FUN_1463ac6b3,uVar1,L"AssetManagerSearchRules");
  }
  return;
}



// FUNCTION 1463ac6b3 FUN_1463ac6b3 body=47 status=ok
// SIG undefined FUN_1463ac6b3(void)

longlong FUN_1463ac6b3(void)

{
  if (DAT_14cacda28 == 0) {
    FUN_14086a14e(&DAT_14cacda28,&PTR_FUN_14a7e2a60);
  }
  return DAT_14cacda28;
}



// FUNCTION 1463ac6e2 FUN_1463ac6e2 body=48 status=ok
// SIG undefined FUN_1463ac6e2(void)

void FUN_1463ac6e2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14a7ebaa0;
  return;
}



// FUNCTION 1463ac712 FUN_1463ac712 body=35 status=ok
// SIG undefined FUN_1463ac712(void)

void FUN_1463ac712(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a7e2bc0;
  return;
}



// FUNCTION 1463ac735 FUN_1463ac735 body=49 status=ok
// SIG undefined FUN_1463ac735(void)

longlong FUN_1463ac735(void)

{
  if (DAT_14cacda48 == 0) {
    FUN_14073dd9a(&DAT_14cacda48,&PTR_FUN_14a7e2b78);
  }
  return DAT_14cacda48;
}



// FUNCTION 1463ac766 FUN_1463ac766 body=54 status=ok
// SIG undefined FUN_1463ac766(void)

void FUN_1463ac766(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_141069aea(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a7e2f50;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  return;
}



// FUNCTION 1463ac79c FUN_1463ac79c body=49 status=ok
// SIG undefined FUN_1463ac79c(void)

longlong FUN_1463ac79c(void)

{
  if (DAT_14cacda60 == 0) {
    FUN_14073dd9a(&DAT_14cacda60,&PTR_LAB_14a7e2f08);
  }
  return DAT_14cacda60;
}



// FUNCTION 1463ac7cd FUN_1463ac7cd body=47 status=ok
// SIG undefined FUN_1463ac7cd(void)

longlong FUN_1463ac7cd(void)

{
  if (DAT_14cacda70 == 0) {
    FUN_14000fc22(&DAT_14cacda70,&PTR_FUN_14a7e3290);
  }
  return DAT_14cacda70;
}



// FUNCTION 1463ac801 FUN_1463ac801 body=47 status=ok
// SIG undefined FUN_1463ac801(void)

longlong FUN_1463ac801(void)

{
  if (DAT_14cacda88 == 0) {
    FUN_14073dd9a(&DAT_14cacda88,&PTR_LAB_14a7e3570);
  }
  return DAT_14cacda88;
}



// FUNCTION 1463ac830 FUN_1463ac830 body=47 status=ok
// SIG undefined FUN_1463ac830(void)

longlong FUN_1463ac830(void)

{
  if (DAT_14cacda78 == 0) {
    FUN_14000fc22(&DAT_14cacda78,&PTR_FUN_14a7e3460);
  }
  return DAT_14cacda78;
}



// FUNCTION 1463ac860 FUN_1463ac860 body=34 status=ok
// SIG undefined FUN_1463ac860(void)

void FUN_1463ac860(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145992574();
  FUN_14069c8d6(uVar1,&PTR_s_AsyncLoadPrimaryAsset_14a7e34a0,1);
  return;
}



// FUNCTION 1463ac882 FUN_1463ac882 body=58 status=ok
// SIG undefined FUN_1463ac882(void)

void FUN_1463ac882(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_141069aea(puVar1,param_1);
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  *puVar1 = &PTR_FUN_14a7e35b0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  return;
}



// FUNCTION 1463ac8bc FUN_1463ac8bc body=47 status=ok
// SIG undefined FUN_1463ac8bc(void)

longlong FUN_1463ac8bc(void)

{
  if (DAT_14cacda98 == 0) {
    FUN_14000fc22(&DAT_14cacda98,&PTR_FUN_14a7e3900);
  }
  return DAT_14cacda98;
}



// FUNCTION 1463ac8f0 FUN_1463ac8f0 body=47 status=ok
// SIG undefined FUN_1463ac8f0(void)

longlong FUN_1463ac8f0(void)

{
  if (DAT_14cacdab0 == 0) {
    FUN_14073dd9a(&DAT_14cacdab0,&PTR_LAB_14a7e3bd0);
  }
  return DAT_14cacdab0;
}



// FUNCTION 1463ac91f FUN_1463ac91f body=47 status=ok
// SIG undefined FUN_1463ac91f(void)

longlong FUN_1463ac91f(void)

{
  if (DAT_14cacdaa0 == 0) {
    FUN_14000fc22(&DAT_14cacdaa0,&PTR_FUN_14a7e3ab8);
  }
  return DAT_14cacdaa0;
}



// FUNCTION 1463ac94e FUN_1463ac94e body=34 status=ok
// SIG undefined FUN_1463ac94e(void)

void FUN_1463ac94e(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145992660();
  FUN_14069c8d6(uVar1,&PTR_s_AsyncLoadPrimaryAssetClass_14a7e3b00,1);
  return;
}



// FUNCTION 1463ac970 FUN_1463ac970 body=58 status=ok
// SIG undefined FUN_1463ac970(void)

void FUN_1463ac970(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_141069aea(puVar1,param_1);
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  *puVar1 = &PTR_FUN_14a7e3c10;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  return;
}



// FUNCTION 1463ac9aa FUN_1463ac9aa body=47 status=ok
// SIG undefined FUN_1463ac9aa(void)

longlong FUN_1463ac9aa(void)

{
  if (DAT_14cacdac0 == 0) {
    FUN_14000fc22(&DAT_14cacdac0,&PTR_FUN_14a7e3fa0);
  }
  return DAT_14cacdac0;
}



// FUNCTION 1463ac9de FUN_1463ac9de body=47 status=ok
// SIG undefined FUN_1463ac9de(void)

longlong FUN_1463ac9de(void)

{
  if (DAT_14cacdad8 == 0) {
    FUN_14073dd9a(&DAT_14cacdad8,&PTR_LAB_14a7e42c0);
  }
  return DAT_14cacdad8;
}



// FUNCTION 1463aca0d FUN_1463aca0d body=47 status=ok
// SIG undefined FUN_1463aca0d(void)

longlong FUN_1463aca0d(void)

{
  if (DAT_14cacdac8 == 0) {
    FUN_14000fc22(&DAT_14cacdac8,&PTR_FUN_14a7e41b0);
  }
  return DAT_14cacdac8;
}



// FUNCTION 1463aca3c FUN_1463aca3c body=34 status=ok
// SIG undefined FUN_1463aca3c(void)

void FUN_1463aca3c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14599274c();
  FUN_14069c8d6(uVar1,&PTR_s_AsyncLoadPrimaryAssetList_14a7e41f0,1);
  return;
}



// FUNCTION 1463aca5e FUN_1463aca5e body=58 status=ok
// SIG undefined FUN_1463aca5e(void)

void FUN_1463aca5e(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_141069aea(puVar1,param_1);
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  *puVar1 = &PTR_FUN_14a7e4300;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  return;
}



// FUNCTION 1463aca98 FUN_1463aca98 body=47 status=ok
// SIG undefined FUN_1463aca98(void)

longlong FUN_1463aca98(void)

{
  if (DAT_14cacdae8 == 0) {
    FUN_14000fc22(&DAT_14cacdae8,&PTR_FUN_14a7e4698);
  }
  return DAT_14cacdae8;
}



// FUNCTION 1463acacc FUN_1463acacc body=47 status=ok
// SIG undefined FUN_1463acacc(void)

longlong FUN_1463acacc(void)

{
  if (DAT_14cacdb00 == 0) {
    FUN_14073dd9a(&DAT_14cacdb00,&PTR_LAB_14a7e49b0);
  }
  return DAT_14cacdb00;
}



// FUNCTION 1463acafb FUN_1463acafb body=47 status=ok
// SIG undefined FUN_1463acafb(void)

longlong FUN_1463acafb(void)

{
  if (DAT_14cacdaf0 == 0) {
    FUN_14000fc22(&DAT_14cacdaf0,&PTR_FUN_14a7e4890);
  }
  return DAT_14cacdaf0;
}



// FUNCTION 1463acb2a FUN_1463acb2a body=34 status=ok
// SIG undefined FUN_1463acb2a(void)

void FUN_1463acb2a(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145992838();
  FUN_14069c8d6(uVar1,&PTR_s_AsyncLoadPrimaryAssetClassList_14a7e48d0,1);
  return;
}



// FUNCTION 1463acb4c FUN_1463acb4c body=58 status=ok
// SIG undefined FUN_1463acb4c(void)

void FUN_1463acb4c(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_141069aea(puVar1,param_1);
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  *puVar1 = &PTR_FUN_14a7e49f0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  return;
}



// FUNCTION 1463acb86 FUN_1463acb86 body=47 status=ok
// SIG undefined FUN_1463acb86(void)

longlong FUN_1463acb86(void)

{
  if (DAT_14cacdb10 == 0) {
    FUN_14000fc22(&DAT_14cacdb10,&PTR_FUN_14a7e4cf0);
  }
  return DAT_14cacdb10;
}



// FUNCTION 1463acbb5 FUN_1463acbb5 body=47 status=ok
// SIG undefined FUN_1463acbb5(void)

longlong FUN_1463acbb5(void)

{
  if (DAT_14cacdb30 == 0) {
    FUN_14073dd9a(&DAT_14cacdb30,&PTR_LAB_14a7e5300);
  }
  return DAT_14cacdb30;
}



// FUNCTION 1463acbe4 FUN_1463acbe4 body=47 status=ok
// SIG undefined FUN_1463acbe4(void)

longlong FUN_1463acbe4(void)

{
  if (DAT_14cacdb18 == 0) {
    FUN_14000fc22(&DAT_14cacdb18,&PTR_FUN_14a7e4f10);
  }
  return DAT_14cacdb18;
}



// FUNCTION 1463acc13 FUN_1463acc13 body=47 status=ok
// SIG undefined FUN_1463acc13(void)

longlong FUN_1463acc13(void)

{
  if (DAT_14cacdb20 == 0) {
    FUN_14000fc22(&DAT_14cacdb20,&PTR_FUN_14a7e51c0);
  }
  return DAT_14cacdb20;
}



// FUNCTION 1463acc42 FUN_1463acc42 body=34 status=ok
// SIG undefined FUN_1463acc42(void)

void FUN_1463acc42(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145921968();
  FUN_14069c8d6(uVar1,&PTR_s_AsyncChangeBundleStateForMatchin_14a7e5200,2);
  return;
}



// FUNCTION 1463acc69 FUN_1463acc69 body=58 status=ok
// SIG undefined FUN_1463acc69(void)

void FUN_1463acc69(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_141069aea(puVar1,param_1);
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  *puVar1 = &PTR_FUN_14a7e5340;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  return;
}



// FUNCTION 1463acca8 FUN_1463acca8 body=47 status=ok
// SIG undefined FUN_1463acca8(void)

longlong FUN_1463acca8(void)

{
  if (DAT_14cacdb48 == 0) {
    FUN_14073dd9a(&DAT_14cacdb48,&PTR_LAB_14a7e5798);
  }
  return DAT_14cacdb48;
}



// FUNCTION 1463accd7 FUN_1463accd7 body=49 status=ok
// SIG undefined FUN_1463accd7(void)

longlong FUN_1463accd7(void)

{
  if (DAT_14cacdbc8 == 0) {
    FUN_14073dd9a(&DAT_14cacdbc8,&PTR_LAB_14a7e69e0);
  }
  return DAT_14cacdbc8;
}



// FUNCTION 1463acd08 FUN_1463acd08 body=47 status=ok
// SIG undefined FUN_1463acd08(void)

longlong FUN_1463acd08(void)

{
  if (DAT_14cacdb58 == 0) {
    FUN_14000fc22(&DAT_14cacdb58,&PTR_FUN_14a7e5ef0);
  }
  return DAT_14cacdb58;
}



// FUNCTION 1463acd37 FUN_1463acd37 body=47 status=ok
// SIG undefined FUN_1463acd37(void)

longlong FUN_1463acd37(void)

{
  if (DAT_14cacdb60 == 0) {
    FUN_14000fc22(&DAT_14cacdb60,&PTR_FUN_14a7e5f98);
  }
  return DAT_14cacdb60;
}



// FUNCTION 1463acd66 FUN_1463acd66 body=47 status=ok
// SIG undefined FUN_1463acd66(void)

longlong FUN_1463acd66(void)

{
  if (DAT_14cacdb68 == 0) {
    FUN_14000fc22(&DAT_14cacdb68,&PTR_FUN_14a7e6048);
  }
  return DAT_14cacdb68;
}



// FUNCTION 1463acd95 FUN_1463acd95 body=47 status=ok
// SIG undefined FUN_1463acd95(void)

longlong FUN_1463acd95(void)

{
  if (DAT_14cacdb70 == 0) {
    FUN_14000fc22(&DAT_14cacdb70,&PTR_FUN_14a7e60e0);
  }
  return DAT_14cacdb70;
}



// FUNCTION 1463acdc4 FUN_1463acdc4 body=47 status=ok
// SIG undefined FUN_1463acdc4(void)

longlong FUN_1463acdc4(void)

{
  if (DAT_14cacdb78 == 0) {
    FUN_14000fc22(&DAT_14cacdb78,&PTR_FUN_14a7e6180);
  }
  return DAT_14cacdb78;
}



// FUNCTION 1463acdf3 FUN_1463acdf3 body=47 status=ok
// SIG undefined FUN_1463acdf3(void)

longlong FUN_1463acdf3(void)

{
  if (DAT_14cacdb80 == 0) {
    FUN_14000fc22(&DAT_14cacdb80,&PTR_FUN_14a7e6230);
  }
  return DAT_14cacdb80;
}



// FUNCTION 1463ace22 FUN_1463ace22 body=47 status=ok
// SIG undefined FUN_1463ace22(void)

longlong FUN_1463ace22(void)

{
  if (DAT_14cacdb88 == 0) {
    FUN_14000fc22(&DAT_14cacdb88,&PTR_FUN_14a7e62e0);
  }
  return DAT_14cacdb88;
}



// FUNCTION 1463ace51 FUN_1463ace51 body=47 status=ok
// SIG undefined FUN_1463ace51(void)

longlong FUN_1463ace51(void)

{
  if (DAT_14cacdb90 == 0) {
    FUN_14000fc22(&DAT_14cacdb90,&PTR_FUN_14a7e6390);
  }
  return DAT_14cacdb90;
}



// FUNCTION 1463ace80 FUN_1463ace80 body=47 status=ok
// SIG undefined FUN_1463ace80(void)

longlong FUN_1463ace80(void)

{
  if (DAT_14cacdb98 == 0) {
    FUN_14000fc22(&DAT_14cacdb98,&PTR_FUN_14a7e6440);
  }
  return DAT_14cacdb98;
}



// FUNCTION 1463aceaf FUN_1463aceaf body=47 status=ok
// SIG undefined FUN_1463aceaf(void)

longlong FUN_1463aceaf(void)

{
  if (DAT_14cacdba0 == 0) {
    FUN_14000fc22(&DAT_14cacdba0,&PTR_FUN_14a7e64f0);
  }
  return DAT_14cacdba0;
}



// FUNCTION 1463acede FUN_1463acede body=47 status=ok
// SIG undefined FUN_1463acede(void)

longlong FUN_1463acede(void)

{
  if (DAT_14cacdba8 == 0) {
    FUN_14000fc22(&DAT_14cacdba8,&PTR_FUN_14a7e6650);
  }
  return DAT_14cacdba8;
}



// FUNCTION 1463acf0d FUN_1463acf0d body=47 status=ok
// SIG undefined FUN_1463acf0d(void)

longlong FUN_1463acf0d(void)

{
  if (DAT_14cacdbb0 == 0) {
    FUN_14000fc22(&DAT_14cacdbb0,&PTR_FUN_14a7e66e8);
  }
  return DAT_14cacdbb0;
}



// FUNCTION 1463acf3c FUN_1463acf3c body=47 status=ok
// SIG undefined FUN_1463acf3c(void)

longlong FUN_1463acf3c(void)

{
  if (DAT_14cacdbb8 == 0) {
    FUN_14000fc22(&DAT_14cacdbb8,&PTR_FUN_14a7e6798);
  }
  return DAT_14cacdbb8;
}



// FUNCTION 1463acf6c FUN_1463acf6c body=34 status=ok
// SIG undefined FUN_1463acf6c(void)

void FUN_1463acf6c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145959b26();
  FUN_14069c8d6(uVar1,&PTR_s_DisableGroundScattering_14a7e67e0,0xd);
  return;
}



// FUNCTION 1463acf93 FUN_1463acf93 body=47 status=ok
// SIG undefined FUN_1463acf93(void)

longlong FUN_1463acf93(void)

{
  if (DAT_14cacdbd8 == 0) {
    FUN_1409ce572(&DAT_14cacdbd8,&PTR_FUN_14a7e7140);
  }
  return DAT_14cacdbd8;
}



// FUNCTION 1463acfc2 FUN_1463acfc2 body=47 status=ok
// SIG undefined FUN_1463acfc2(void)

longlong FUN_1463acfc2(void)

{
  if (DAT_14cacdbf0 == 0) {
    FUN_1409ce572(&DAT_14cacdbf0,&PTR_FUN_14a7e71e0);
  }
  return DAT_14cacdbf0;
}



// FUNCTION 1463acff1 FUN_1463acff1 body=47 status=ok
// SIG undefined FUN_1463acff1(void)

longlong FUN_1463acff1(void)

{
  if (DAT_14cacdc08 == 0) {
    FUN_1409ce572(&DAT_14cacdc08,&PTR_FUN_14a7e7260);
  }
  return DAT_14cacdc08;
}



// FUNCTION 1463ad020 FUN_1463ad020 body=55 status=ok
// SIG undefined FUN_1463ad020(void)

void FUN_1463ad020(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacdc28 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacdc28 = FUN_140002ddd(FUN_1463ad057,uVar1,L"BaseAttenuationSettings");
  }
  return;
}



// FUNCTION 1463ad057 FUN_1463ad057 body=47 status=ok
// SIG undefined FUN_1463ad057(void)

longlong FUN_1463ad057(void)

{
  if (DAT_14cacdc20 == 0) {
    FUN_14086a14e(&DAT_14cacdc20,&PTR_FUN_14a7e76f8);
  }
  return DAT_14cacdc20;
}



// FUNCTION 1463ad086 FUN_1463ad086 body=48 status=ok
// SIG undefined FUN_1463ad086(void)

void FUN_1463ad086(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000c0;
  *puVar1 = &PTR_FUN_14a7ebe30;
  return;
}



// FUNCTION 1463ad0b6 FUN_1463ad0b6 body=47 status=ok
// SIG undefined FUN_1463ad0b6(void)

longlong FUN_1463ad0b6(void)

{
  if (DAT_14cacdcf0 == 0) {
    FUN_1409ce572(&DAT_14cacdcf0,&PTR_FUN_14a7e8280);
  }
  return DAT_14cacdcf0;
}



// FUNCTION 1463ad0e5 FUN_1463ad0e5 body=50 status=ok
// SIG undefined FUN_1463ad0e5(void)

void FUN_1463ad0e5(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a7e83d0;
  puVar1[5] = &PTR_LAB_14a7e8670;
  *(undefined1 *)(puVar1 + 6) = 0;
  return;
}



// FUNCTION 1463ad11d FUN_1463ad11d body=47 status=ok
// SIG undefined FUN_1463ad11d(void)

longlong FUN_1463ad11d(void)

{
  if (DAT_14cacdd10 == 0) {
    FUN_14073dd9a(&DAT_14cacdd10,&PTR_LAB_14a7e8388);
  }
  return DAT_14cacdd10;
}



// FUNCTION 1463ad14c FUN_1463ad14c body=189 status=ok
// SIG undefined FUN_1463ad14c(void)

void FUN_1463ad14c(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  switchD_143c3d4dc::caseD_1d();
  if ((DAT_14cb0d2b0 != 0) && (*(longlong *)(DAT_14cb0d2b0 + 0xf50) != 0)) {
    uVar1 = *(uint *)(param_1 + 0xc);
    FUN_14797388a(*(longlong *)(DAT_14cb0d2b0 + 0xf50),&local_38);
    lVar2 = local_38;
    if ((longlong)local_30 != 0) {
      lVar4 = 0;
      do {
        uVar3 = FUN_1477b91ee(*(undefined8 *)(lVar2 + lVar4));
        FUN_1477b3340(uVar3,(ulonglong)uVar1 | 0xffffffff00000000);
        lVar4 = lVar4 + 8;
      } while ((longlong)local_30 * 8 != lVar4);
    }
    if (local_38 != 0) {
      FUN_1400020a8(local_38);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1463ad20a FUN_1463ad20a body=111 status=ok
// SIG undefined FUN_1463ad20a(void)

undefined8 * FUN_1463ad20a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a7e0690;
  param_1[10] = &PTR_LAB_14a7e0970;
  param_1[0x16] = &PTR_LAB_14a7e0990;
  param_1[0x17] = &PTR_LAB_14a7e09c0;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_145898044(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ad27a FUN_1463ad27a body=40 status=ok
// SIG undefined FUN_1463ad27a(void)

undefined8 FUN_1463ad27a(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ad2a2 FUN_1463ad2a2 body=69 status=ok
// SIG undefined FUN_1463ad2a2(void)

undefined8 * FUN_1463ad2a2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a7e35b0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_1458faeb0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ad2e8 FUN_1463ad2e8 body=69 status=ok
// SIG undefined FUN_1463ad2e8(void)

undefined8 * FUN_1463ad2e8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a7e3c10;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_1458faeb0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ad32e FUN_1463ad32e body=69 status=ok
// SIG undefined FUN_1463ad32e(void)

undefined8 * FUN_1463ad32e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a7e4300;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_1458faeb0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ad374 FUN_1463ad374 body=69 status=ok
// SIG undefined FUN_1463ad374(void)

undefined8 * FUN_1463ad374(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a7e49f0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_1458faeb0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ad3ba FUN_1463ad3ba body=69 status=ok
// SIG undefined FUN_1463ad3ba(void)

undefined8 * FUN_1463ad3ba(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a7e5340;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_1458faeb0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ad400 FUN_1463ad400 body=40 status=ok
// SIG undefined FUN_1463ad400(void)

undefined8 FUN_1463ad400(undefined8 param_1,int param_2)

{
  thunk_FUN_1402ef4ac();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ad428 FUN_1463ad428 body=40 status=ok
// SIG undefined FUN_1463ad428(void)

undefined8 FUN_1463ad428(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ad450 FUN_1463ad450 body=29 status=ok
// SIG undefined FUN_1463ad450(void)

undefined8 FUN_1463ad450(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ad46e FUN_1463ad46e body=29 status=ok
// SIG undefined FUN_1463ad46e(void)

undefined8 FUN_1463ad46e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ad48c FUN_1463ad48c body=29 status=ok
// SIG undefined FUN_1463ad48c(void)

undefined8 FUN_1463ad48c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ad4aa FUN_1463ad4aa body=29 status=ok
// SIG undefined FUN_1463ad4aa(void)

undefined8 FUN_1463ad4aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ad4c8 FUN_1463ad4c8 body=29 status=ok
// SIG undefined FUN_1463ad4c8(void)

undefined8 FUN_1463ad4c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ad4e6 FUN_1463ad4e6 body=29 status=ok
// SIG undefined FUN_1463ad4e6(void)

undefined8 FUN_1463ad4e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ad504 FUN_1463ad504 body=29 status=ok
// SIG undefined FUN_1463ad504(void)

undefined8 FUN_1463ad504(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ad522 FUN_1463ad522 body=29 status=ok
// SIG undefined FUN_1463ad522(void)

undefined8 FUN_1463ad522(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ad540 FUN_1463ad540 body=29 status=ok
// SIG undefined FUN_1463ad540(void)

undefined8 FUN_1463ad540(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ad55e FUN_1463ad55e body=29 status=ok
// SIG undefined FUN_1463ad55e(void)

undefined8 FUN_1463ad55e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ad57c FUN_1463ad57c body=496 status=ok
// SIG undefined FUN_1463ad57c(void)

void FUN_1463ad57c(uint param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined *puVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  
  iVar3 = DAT_14cacdfc8;
  uVar9 = param_1 - DAT_14cacdfc8;
  if (uVar9 != 0 && DAT_14cacdfc8 <= (int)param_1) {
    iVar8 = DAT_14cacdfc8;
    if (DAT_14cacdfcc < (int)param_1) {
      FUN_140f776e6(&DAT_14cacdfc0);
      iVar8 = DAT_14cacdfc8;
    }
    DAT_14cacdfc8 = iVar8 + uVar9;
    if ((uint)(DAT_14cacdfcc - iVar8) < uVar9) {
      FUN_14125fb0c(&DAT_14cacdfc0);
    }
    lVar2 = DAT_14cacdfc0;
    if (iVar8 < (int)param_1) {
      piVar7 = (int *)((ulonglong)param_1 * 0x98 + DAT_14cacdfc0 + -0x94);
      uVar12 = (ulonglong)param_1;
      do {
        uVar1 = uVar12 - 1;
        if (DAT_14cacdff4 == 0) {
          iVar11 = (int)uVar12 + -1;
        }
        else {
          *(int *)(lVar2 + (longlong)DAT_14cacdff0 * 0x98) = (int)uVar12 + -1;
          iVar11 = (int)uVar1;
        }
        piVar7[-1] = -1;
        iVar13 = -1;
        if (0 < DAT_14cacdff4) {
          iVar13 = DAT_14cacdff0;
        }
        *piVar7 = iVar13;
        DAT_14cacdff4 = DAT_14cacdff4 + 1;
        piVar7 = piVar7 + -0x26;
        uVar12 = uVar1;
        DAT_14cacdff0 = iVar11;
      } while ((longlong)iVar8 < (longlong)uVar1);
    }
    if (iVar3 == 0) {
      DAT_14cacdfe8 = uVar9;
      if (param_1 != 0) {
        uVar10 = uVar9 + 0x1f >> 5;
        if (DAT_14cacdfec + 0x1f >> 5 < uVar10) {
          FUN_14499171c(&DAT_14cacdfd0,0,uVar10,4);
          DAT_14cacdfec = uVar9 + 0x1f & 0xffffffe0;
        }
        puVar6 = DAT_14cacdfe0;
        if (DAT_14cacdfe0 == (undefined *)0x0) {
          puVar6 = &DAT_14cacdfd0;
        }
        if (uVar9 < 0x101) {
          uVar10 = uVar10 + (uVar10 == 0);
        }
        memset(puVar6,0,(ulonglong)(uVar10 << 2));
        uVar9 = DAT_14cacdfe8 + 0x1f;
        if (-1 < (int)DAT_14cacdfe8) {
          uVar9 = DAT_14cacdfe8;
        }
        if ((int)DAT_14cacdfe8 % 0x20 != 0) {
          puVar6 = &DAT_14cacdfd0;
          if (DAT_14cacdfe0 != (undefined *)0x0) {
            puVar6 = DAT_14cacdfe0;
          }
          bVar5 = -(char)((int)DAT_14cacdfe8 % 0x20);
          *(uint *)(puVar6 + (longlong)((int)uVar9 >> 5) * 4) =
               (uint)(*(int *)(puVar6 + (longlong)((int)uVar9 >> 5) * 4) << (bVar5 & 0x1f)) >>
               (bVar5 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar9) {
      uVar4 = FUN_144a54ea4(&DAT_14cacdfd0,uVar9);
      FUN_1447c6044(&DAT_14cacdfd0,uVar4,uVar9,0);
      return;
    }
  }
  return;
}



// FUNCTION 1463ad76c FUN_1463ad76c body=534 status=ok
// SIG undefined FUN_1463ad76c(void)

void FUN_1463ad76c(void)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  undefined *puVar7;
  undefined2 *puVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (DAT_14cace000 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cace000,0,0,4);
  }
  uVar2 = DAT_14cace008;
  uVar3 = local_70;
  if (DAT_14cace008 != 0) {
    uVar9 = 0;
    FUN_144a1cbf0(&DAT_14cacdff8,0,DAT_14cace008,4);
    if (0 < (int)uVar2) {
      do {
        puVar7 = DAT_14cace000;
        if (DAT_14cace000 == (undefined *)0x0) {
          puVar7 = &DAT_14cacdff8;
        }
        *(undefined4 *)(puVar7 + (ulonglong)(DAT_14cace008 + 0x7fffffff & uVar9) * 4) = 0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    local_60 = 0x100000000;
    local_58 = &DAT_14cacdfd0;
    local_50 = 0xffffffff;
    local_48 = 0;
    if (DAT_14cacdfe8 != 0) {
      FUN_1449c0562(&local_60);
    }
    local_88 = &DAT_14cacdfc0;
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar3 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    if (local_70._4_4_ < *(int *)(local_58 + 0x18)) {
      iVar11 = local_70._4_4_;
      local_70 = uVar3;
      do {
        lVar1 = *local_88;
        lVar10 = (longlong)iVar11 * 0x98;
        iVar4 = *(int *)(lVar1 + 8 + lVar10);
        puVar8 = &DAT_149dfb77a;
        iVar6 = 0;
        if (iVar4 != 0) {
          puVar8 = *(undefined2 **)(lVar1 + lVar10);
          iVar6 = iVar4 + -1;
        }
        iVar4 = FUN_144a49b4a(iVar6,puVar8);
        uVar5 = (longlong)iVar4 & (longlong)(int)DAT_14cace008 - 1U;
        iVar4 = (int)uVar5;
        *(int *)(lVar1 + 0x94 + lVar10) = iVar4;
        puVar7 = DAT_14cace000;
        if (DAT_14cace000 == (undefined *)0x0) {
          puVar7 = &DAT_14cacdff8;
        }
        *(undefined4 *)(lVar1 + 0x90 + lVar10) =
             *(undefined4 *)(puVar7 + ((longlong)(int)DAT_14cace008 - 1U & uVar5) * 4);
        puVar7 = DAT_14cace000;
        if (DAT_14cace000 == (undefined *)0x0) {
          puVar7 = &DAT_14cacdff8;
        }
        *(int *)(puVar7 + ((longlong)iVar4 & (longlong)(int)DAT_14cace008 - 1U) * 4) = iVar11;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar11 = local_70._4_4_;
        uVar3 = local_70;
      } while (local_70._4_4_ < *(int *)(local_78 + 0x18));
    }
  }
  local_70 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463ad984 FUN_1463ad984 body=24 status=ok
// SIG undefined FUN_1463ad984(void)

bool FUN_1463ad984(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1463ad99c FUN_1463ad99c body=742 status=ok
// SIG undefined FUN_1463ad99c(void)

void FUN_1463ad99c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
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
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_14480809c(param_2,0);
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
    FUN_146b7f620(&local_98,uVar4);
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
      FUN_1449809d4();
    }
  }
  iVar3 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
    FUN_14480809c(param_2);
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
      lVar1 = *local_e0;
      lVar5 = (longlong)iStack_c4;
      if ((int)uStack_90 != local_64) {
        uVar4 = *(uint *)(lVar1 + lVar5 * 0x40);
        puVar2 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar2 = local_60;
        }
        for (iVar3 = *(int *)(puVar2 + (ulonglong)(local_50 - 1U & uVar4) * 4); iVar3 != -1;
            iVar3 = *(int *)(local_98 + (longlong)iVar3 * 0xc + 4)) {
          if (*(uint *)(local_98 + (longlong)iVar3 * 0xc) == uVar4) goto LAB_1463adc52;
        }
      }
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1447808da(param_2,iVar3);
      }
      *(undefined4 *)(*param_2 + (longlong)iVar3 * 4) = *(undefined4 *)(lVar1 + lVar5 * 0x40);
      FUN_144980568(&local_98,&local_b8,(longlong)iStack_c4 * 0x40 + *local_e0,0);
LAB_1463adc52:
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (iStack_c4 < (int)local_d0[3]);
  }
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1401bc218(&local_98);
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463adc84 FUN_1463adc84 body=55 status=ok
// SIG undefined FUN_1463adc84(void)

void FUN_1463adc84(void)

{
  undefined8 uVar1;
  
  if (DAT_14cace0f0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cace0f0 = FUN_140002ddd(FUN_1463adcbb,uVar1,L"AudioReverbEffect");
  }
  return;
}



// FUNCTION 1463adcbb FUN_1463adcbb body=47 status=ok
// SIG undefined FUN_1463adcbb(void)

longlong FUN_1463adcbb(void)

{
  if (DAT_14cace0e8 == 0) {
    FUN_14086a14e(&DAT_14cace0e8,&PTR_FUN_14a7ed720);
  }
  return DAT_14cace0e8;
}



// FUNCTION 1463adcea FUN_1463adcea body=48 status=ok
// SIG undefined FUN_1463adcea(void)

void FUN_1463adcea(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000048;
  *puVar1 = &PTR_FUN_14a7fc880;
  return;
}



// FUNCTION 1463add1a FUN_1463add1a body=47 status=ok
// SIG undefined FUN_1463add1a(void)

longlong FUN_1463add1a(void)

{
  if (DAT_14cace130 == 0) {
    FUN_1409ce572(&DAT_14cace130,&PTR_FUN_14a7eda10);
  }
  return DAT_14cace130;
}



// FUNCTION 1463add49 FUN_1463add49 body=47 status=ok
// SIG undefined FUN_1463add49(void)

longlong FUN_1463add49(void)

{
  if (DAT_14cace148 == 0) {
    FUN_1409ce572(&DAT_14cace148,&PTR_FUN_14a7eda70);
  }
  return DAT_14cace148;
}



// FUNCTION 1463add78 FUN_1463add78 body=47 status=ok
// SIG undefined FUN_1463add78(void)

longlong FUN_1463add78(void)

{
  if (DAT_14cace160 == 0) {
    FUN_1409ce572(&DAT_14cace160,&PTR_FUN_14a7edaf0);
  }
  return DAT_14cace160;
}



// FUNCTION 1463adda7 FUN_1463adda7 body=47 status=ok
// SIG undefined FUN_1463adda7(void)

longlong FUN_1463adda7(void)

{
  if (DAT_14cace178 == 0) {
    FUN_1409ce572(&DAT_14cace178,&PTR_FUN_14a7edba0);
  }
  return DAT_14cace178;
}



// FUNCTION 1463addd6 FUN_1463addd6 body=55 status=ok
// SIG undefined FUN_1463addd6(void)

void FUN_1463addd6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cace198 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cace198 = FUN_140002ddd(FUN_1463ade0d,uVar1,L"AudioQualitySettings");
  }
  return;
}



// FUNCTION 1463ade0d FUN_1463ade0d body=47 status=ok
// SIG undefined FUN_1463ade0d(void)

longlong FUN_1463ade0d(void)

{
  if (DAT_14cace190 == 0) {
    FUN_14086a14e(&DAT_14cace190,&PTR_FUN_14a7edca8);
  }
  return DAT_14cace190;
}



// FUNCTION 1463ade3c FUN_1463ade3c body=48 status=ok
// SIG undefined FUN_1463ade3c(void)

void FUN_1463ade3c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14a7fcdf0;
  return;
}



// FUNCTION 1463ade6c FUN_1463ade6c body=55 status=ok
// SIG undefined FUN_1463ade6c(void)

void FUN_1463ade6c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cace1b0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cace1b0 = FUN_140002ddd(FUN_1463adea3,uVar1,L"SoundDebugEntry");
  }
  return;
}



// FUNCTION 1463adea3 FUN_1463adea3 body=47 status=ok
// SIG undefined FUN_1463adea3(void)

longlong FUN_1463adea3(void)

{
  if (DAT_14cace1a8 == 0) {
    FUN_14086a14e(&DAT_14cace1a8,&PTR_FUN_14a7eddb0);
  }
  return DAT_14cace1a8;
}



// FUNCTION 1463aded2 FUN_1463aded2 body=48 status=ok
// SIG undefined FUN_1463aded2(void)

void FUN_1463aded2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14a7fcf50;
  return;
}



// FUNCTION 1463adf02 FUN_1463adf02 body=55 status=ok
// SIG undefined FUN_1463adf02(void)

void FUN_1463adf02(void)

{
  undefined8 uVar1;
  
  if (DAT_14cace1c8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cace1c8 = FUN_140002ddd(FUN_1463adf39,uVar1,L"DefaultAudioBusSettings");
  }
  return;
}



// FUNCTION 1463adf39 FUN_1463adf39 body=47 status=ok
// SIG undefined FUN_1463adf39(void)

longlong FUN_1463adf39(void)

{
  if (DAT_14cace1c0 == 0) {
    FUN_14086a14e(&DAT_14cace1c0,&PTR_FUN_14a7ede78);
  }
  return DAT_14cace1c0;
}



// FUNCTION 1463adf68 FUN_1463adf68 body=48 status=ok
// SIG undefined FUN_1463adf68(void)

void FUN_1463adf68(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14a7fd0b0;
  return;
}



// FUNCTION 1463adf98 FUN_1463adf98 body=47 status=ok
// SIG undefined FUN_1463adf98(void)

longlong FUN_1463adf98(void)

{
  if (DAT_14cace1e0 == 0) {
    FUN_14073dd9a(&DAT_14cace1e0,&PTR_LAB_14a7eeb38);
  }
  return DAT_14cace1e0;
}



// FUNCTION 1463adfc8 FUN_1463adfc8 body=122 status=ok
// SIG undefined FUN_1463adfc8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1463adfc8(void)

{
  FUN_141067f4a(&DAT_14cace4c8);
  _DAT_14cace4c8 = &PTR_FUN_14a7fd210;
  DAT_14cace4f0 = (undefined8 *)0x0;
  DAT_14cace4f0 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  *DAT_14cace4f0 = 0;
  DAT_14cace508 = DAT_14cace4f0;
  DAT_14cace500 = DAT_14cace4f0;
  DAT_14cace4f8 = DAT_14cace4f0;
  DAT_14cace4d0 = 0;
  DAT_14cace4d2 = DAT_14cace4d2 & 0xb0 | 6;
  DAT_14cace510 = 0;
  return;
}



// FUNCTION 1463ae042 FUN_1463ae042 body=78 status=ok
// SIG undefined FUN_1463ae042(void)

void FUN_1463ae042(void)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_14cace5b8;
  if (DAT_14cace5b8 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(DAT_14cace5b8 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_144a80dc3(DAT_14cace5a8,DAT_14cace5b0);
  if (DAT_14cace5a8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1463ae090 FUN_1463ae090 body=401 status=ok
// SIG undefined FUN_1463ae090(void)

undefined8 * FUN_1463ae090(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  longlong *plVar5;
  undefined1 auStack_a8 [64];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar5 = param_2 + 4;
  if (DAT_14cace480 == 1) {
    lVar1 = *param_2;
    lVar2 = param_2[2];
    param_2[2] = 0;
    local_68 = (undefined4)*plVar5;
    uStack_64 = *(undefined4 *)((longlong)param_2 + 0x24);
    uStack_60 = (undefined4)param_2[5];
    uStack_5c = *(undefined4 *)((longlong)param_2 + 0x2c);
    local_58 = (undefined4)param_2[6];
    uStack_54 = *(undefined4 *)((longlong)param_2 + 0x34);
    uStack_50 = (undefined4)param_2[7];
    uStack_4c = *(undefined4 *)((longlong)param_2 + 0x3c);
    if (lVar1 != 0) {
      *param_2 = 0;
    }
    *param_1 = 0;
    puVar3 = (undefined8 *)FUN_14001cc68(0x60,0x10);
    param_1[2] = puVar3;
    *puVar3 = &PTR_LAB_14a7fea80;
    puVar3[2] = lVar1;
    puVar3[4] = lVar2;
    *(undefined4 *)(puVar3 + 8) = local_58;
    *(undefined4 *)((longlong)puVar3 + 0x44) = uStack_54;
    *(undefined4 *)(puVar3 + 9) = uStack_50;
    *(undefined4 *)((longlong)puVar3 + 0x4c) = uStack_4c;
    *(undefined4 *)(puVar3 + 6) = local_68;
    *(undefined4 *)((longlong)puVar3 + 0x34) = uStack_64;
    *(undefined4 *)(puVar3 + 7) = uStack_60;
    *(undefined4 *)((longlong)puVar3 + 0x3c) = uStack_5c;
    if (puVar3 + 2 == (longlong *)0x0) goto LAB_1463ae146;
    pcVar4 = FUN_14341a36e;
  }
  else {
    lVar1 = *param_2;
    lVar2 = param_2[2];
    param_2[2] = 0;
    local_68 = (undefined4)*plVar5;
    uStack_64 = *(undefined4 *)((longlong)param_2 + 0x24);
    uStack_60 = (undefined4)param_2[5];
    uStack_5c = *(undefined4 *)((longlong)param_2 + 0x2c);
    local_58 = (undefined4)param_2[6];
    uStack_54 = *(undefined4 *)((longlong)param_2 + 0x34);
    uStack_50 = (undefined4)param_2[7];
    uStack_4c = *(undefined4 *)((longlong)param_2 + 0x3c);
    if (lVar1 != 0) {
      *param_2 = 0;
    }
    *param_1 = 0;
    puVar3 = (undefined8 *)FUN_14001cc68(0x60,0x10);
    param_1[2] = puVar3;
    *puVar3 = &PTR_LAB_14a7feaa0;
    puVar3[2] = lVar1;
    puVar3[4] = lVar2;
    *(undefined4 *)(puVar3 + 8) = local_58;
    *(undefined4 *)((longlong)puVar3 + 0x44) = uStack_54;
    *(undefined4 *)(puVar3 + 9) = uStack_50;
    *(undefined4 *)((longlong)puVar3 + 0x4c) = uStack_4c;
    *(undefined4 *)(puVar3 + 6) = local_68;
    *(undefined4 *)((longlong)puVar3 + 0x34) = uStack_64;
    *(undefined4 *)(puVar3 + 7) = uStack_60;
    *(undefined4 *)((longlong)puVar3 + 0x3c) = uStack_5c;
    if (puVar3 + 2 == (longlong *)0x0) goto LAB_1463ae146;
    pcVar4 = FUN_14341a4f4;
  }
  *param_1 = pcVar4;
LAB_1463ae146:
  if (*param_2 != 0) {
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_a8);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463ae227 FUN_1463ae227 body=47 status=ok
// SIG undefined FUN_1463ae227(void)

longlong FUN_1463ae227(void)

{
  if (DAT_14cace630 == 0) {
    FUN_1409ce572(&DAT_14cace630,&PTR_FUN_14a7f2ac0);
  }
  return DAT_14cace630;
}



// FUNCTION 1463ae256 FUN_1463ae256 body=55 status=ok
// SIG undefined FUN_1463ae256(void)

void FUN_1463ae256(void)

{
  undefined8 uVar1;
  
  if (DAT_14cace650 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cace650 = FUN_140002ddd(FUN_1463ae28d,uVar1,L"AudioVolumeSubmixSendSettings");
  }
  return;
}



// FUNCTION 1463ae28d FUN_1463ae28d body=49 status=ok
// SIG undefined FUN_1463ae28d(void)

longlong FUN_1463ae28d(void)

{
  if (DAT_14cace648 == 0) {
    FUN_14086a14e(&DAT_14cace648,&PTR_FUN_14a7f2d40);
  }
  return DAT_14cace648;
}



// FUNCTION 1463ae2be FUN_1463ae2be body=48 status=ok
// SIG undefined FUN_1463ae2be(void)

void FUN_1463ae2be(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14a7fd3a0;
  return;
}



// FUNCTION 1463ae2ee FUN_1463ae2ee body=55 status=ok
// SIG undefined FUN_1463ae2ee(void)

void FUN_1463ae2ee(void)

{
  undefined8 uVar1;
  
  if (DAT_14cace668 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cace668 = FUN_140002ddd(FUN_1463ae325,uVar1,L"AudioVolumeSubmixOverrideSettings");
  }
  return;
}



// FUNCTION 1463ae325 FUN_1463ae325 body=49 status=ok
// SIG undefined FUN_1463ae325(void)

longlong FUN_1463ae325(void)

{
  if (DAT_14cace660 == 0) {
    FUN_14086a14e(&DAT_14cace660,&PTR_FUN_14a7f2f08);
  }
  return DAT_14cace660;
}



// FUNCTION 1463ae356 FUN_1463ae356 body=48 status=ok
// SIG undefined FUN_1463ae356(void)

void FUN_1463ae356(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14a7fd500;
  return;
}



// FUNCTION 1463ae386 FUN_1463ae386 body=55 status=ok
// SIG undefined FUN_1463ae386(void)

void FUN_1463ae386(void)

{
  undefined8 uVar1;
  
  if (DAT_14cace680 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cace680 = FUN_140002ddd(FUN_1463ae3bd,uVar1,L"InteriorSettings");
  }
  return;
}



// FUNCTION 1463ae3bd FUN_1463ae3bd body=49 status=ok
// SIG undefined FUN_1463ae3bd(void)

longlong FUN_1463ae3bd(void)

{
  if (DAT_14cace678 == 0) {
    FUN_14086a14e(&DAT_14cace678,&PTR_FUN_14a7f3260);
  }
  return DAT_14cace678;
}



// FUNCTION 1463ae3ee FUN_1463ae3ee body=48 status=ok
// SIG undefined FUN_1463ae3ee(void)

void FUN_1463ae3ee(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000024;
  *puVar1 = &PTR_FUN_14a7fd660;
  return;
}



// FUNCTION 1463ae41e FUN_1463ae41e body=49 status=ok
// SIG undefined FUN_1463ae41e(void)

longlong FUN_1463ae41e(void)

{
  if (DAT_14cace6d0 == 0) {
    FUN_14073dd9a(&DAT_14cace6d0,&PTR_LAB_14a7f3af0);
  }
  return DAT_14cace6d0;
}



// FUNCTION 1463ae44f FUN_1463ae44f body=47 status=ok
// SIG undefined FUN_1463ae44f(void)

longlong FUN_1463ae44f(void)

{
  if (DAT_14cace690 == 0) {
    FUN_14000fc22(&DAT_14cace690,&PTR_FUN_14a7f3298);
  }
  return DAT_14cace690;
}



// FUNCTION 1463ae47e FUN_1463ae47e body=47 status=ok
// SIG undefined FUN_1463ae47e(void)

longlong FUN_1463ae47e(void)

{
  if (DAT_14cace698 == 0) {
    FUN_14000fc22(&DAT_14cace698,&PTR_FUN_14a7f3330);
  }
  return DAT_14cace698;
}



// FUNCTION 1463ae4ad FUN_1463ae4ad body=47 status=ok
// SIG undefined FUN_1463ae4ad(void)

longlong FUN_1463ae4ad(void)

{
  if (DAT_14cace6a0 == 0) {
    FUN_14000fc22(&DAT_14cace6a0,&PTR_FUN_14a7f33e8);
  }
  return DAT_14cace6a0;
}



// FUNCTION 1463ae4dc FUN_1463ae4dc body=47 status=ok
// SIG undefined FUN_1463ae4dc(void)

longlong FUN_1463ae4dc(void)

{
  if (DAT_14cace6a8 == 0) {
    FUN_14000fc22(&DAT_14cace6a8,&PTR_FUN_14a7f3468);
  }
  return DAT_14cace6a8;
}



// FUNCTION 1463ae50b FUN_1463ae50b body=47 status=ok
// SIG undefined FUN_1463ae50b(void)

longlong FUN_1463ae50b(void)

{
  if (DAT_14cace6b0 == 0) {
    FUN_14000fc22(&DAT_14cace6b0,&PTR_FUN_14a7f3520);
  }
  return DAT_14cace6b0;
}



// FUNCTION 1463ae53a FUN_1463ae53a body=47 status=ok
// SIG undefined FUN_1463ae53a(void)

longlong FUN_1463ae53a(void)

{
  if (DAT_14cace6b8 == 0) {
    FUN_14000fc22(&DAT_14cace6b8,&PTR_FUN_14a7f3630);
  }
  return DAT_14cace6b8;
}



// FUNCTION 1463ae569 FUN_1463ae569 body=47 status=ok
// SIG undefined FUN_1463ae569(void)

longlong FUN_1463ae569(void)

{
  if (DAT_14cace6c0 == 0) {
    FUN_14000fc22(&DAT_14cace6c0,&PTR_FUN_14a7f3728);
  }
  return DAT_14cace6c0;
}



// FUNCTION 1463ae598 FUN_1463ae598 body=34 status=ok
// SIG undefined FUN_1463ae598(void)

void FUN_1463ae598(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a7019a();
  FUN_14069c8d6(uVar1,&PTR_s_OnRep_bEnabled_14a7f3770,7);
  return;
}



// FUNCTION 1463ae5ba FUN_1463ae5ba body=47 status=ok
// SIG undefined FUN_1463ae5ba(void)

longlong FUN_1463ae5ba(void)

{
  if (DAT_14cace708 == 0) {
    FUN_14073dd9a(&DAT_14cace708,&PTR_LAB_14a7f4400);
  }
  return DAT_14cace708;
}



// FUNCTION 1463ae5e9 FUN_1463ae5e9 body=47 status=ok
// SIG undefined FUN_1463ae5e9(void)

longlong FUN_1463ae5e9(void)

{
  if (DAT_14cace6f8 == 0) {
    FUN_14000fc22(&DAT_14cace6f8,&PTR_FUN_14a7f4338);
  }
  return DAT_14cace6f8;
}



// FUNCTION 1463ae618 FUN_1463ae618 body=34 status=ok
// SIG undefined FUN_1463ae618(void)

void FUN_1463ae618(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a70286();
  FUN_14069c8d6(uVar1,&PTR_s_GetActorSoundParams_14a7f4380,1);
  return;
}



// FUNCTION 1463ae63a FUN_1463ae63a body=35 status=ok
// SIG undefined FUN_1463ae63a(void)

void FUN_1463ae63a(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a7f4440;
  return;
}



// FUNCTION 1463ae65d FUN_1463ae65d body=32 status=ok
// SIG undefined FUN_1463ae65d(void)

void FUN_1463ae65d(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  FUN_140dbffdc(param_1);
  *param_1 = &PTR_FUN_14a7f48d0;
  return;
}



// FUNCTION 1463ae67d FUN_1463ae67d body=47 status=ok
// SIG undefined FUN_1463ae67d(void)

longlong FUN_1463ae67d(void)

{
  if (DAT_14cace740 == 0) {
    FUN_14073dd9a(&DAT_14cace740,&PTR_LAB_14a7f4888);
  }
  return DAT_14cace740;
}



// FUNCTION 1463ae6b1 FUN_1463ae6b1 body=47 status=ok
// SIG undefined FUN_1463ae6b1(void)

longlong FUN_1463ae6b1(void)

{
  if (DAT_14cace758 == 0) {
    FUN_14073dd9a(&DAT_14cace758,&PTR_LAB_14a7f4c18);
  }
  return DAT_14cace758;
}



// FUNCTION 1463ae6e0 FUN_1463ae6e0 body=49 status=ok
// SIG undefined FUN_1463ae6e0(void)

longlong FUN_1463ae6e0(void)

{
  if (DAT_14cace7c0 == 0) {
    FUN_14073dd9a(&DAT_14cace7c0,&PTR_LAB_14a7f5dc0);
  }
  return DAT_14cace7c0;
}



// FUNCTION 1463ae711 FUN_1463ae711 body=47 status=ok
// SIG undefined FUN_1463ae711(void)

longlong FUN_1463ae711(void)

{
  if (DAT_14cace768 == 0) {
    FUN_14000fc22(&DAT_14cace768,&PTR_FUN_14a7f5030);
  }
  return DAT_14cace768;
}



// FUNCTION 1463ae740 FUN_1463ae740 body=47 status=ok
// SIG undefined FUN_1463ae740(void)

longlong FUN_1463ae740(void)

{
  if (DAT_14cace770 == 0) {
    FUN_14000fc22(&DAT_14cace770,&PTR_FUN_14a7f5160);
  }
  return DAT_14cace770;
}



// FUNCTION 1463ae76f FUN_1463ae76f body=47 status=ok
// SIG undefined FUN_1463ae76f(void)

longlong FUN_1463ae76f(void)

{
  if (DAT_14cace778 == 0) {
    FUN_14000fc22(&DAT_14cace778,&PTR_FUN_14a7f52d0);
  }
  return DAT_14cace778;
}



// FUNCTION 1463ae79e FUN_1463ae79e body=47 status=ok
// SIG undefined FUN_1463ae79e(void)

longlong FUN_1463ae79e(void)

{
  if (DAT_14cace780 == 0) {
    FUN_14000fc22(&DAT_14cace780,&PTR_FUN_14a7f53f0);
  }
  return DAT_14cace780;
}



// FUNCTION 1463ae7cd FUN_1463ae7cd body=47 status=ok
// SIG undefined FUN_1463ae7cd(void)

longlong FUN_1463ae7cd(void)

{
  if (DAT_14cace788 == 0) {
    FUN_14000fc22(&DAT_14cace788,&PTR_FUN_14a7f5570);
  }
  return DAT_14cace788;
}



// FUNCTION 1463ae7fc FUN_1463ae7fc body=47 status=ok
// SIG undefined FUN_1463ae7fc(void)

longlong FUN_1463ae7fc(void)

{
  if (DAT_14cace790 == 0) {
    FUN_14000fc22(&DAT_14cace790,&PTR_FUN_14a7f5690);
  }
  return DAT_14cace790;
}



// FUNCTION 1463ae82b FUN_1463ae82b body=47 status=ok
// SIG undefined FUN_1463ae82b(void)

longlong FUN_1463ae82b(void)

{
  if (DAT_14cace798 == 0) {
    FUN_14000fc22(&DAT_14cace798,&PTR_FUN_14a7f5810);
  }
  return DAT_14cace798;
}



// FUNCTION 1463ae85a FUN_1463ae85a body=47 status=ok
// SIG undefined FUN_1463ae85a(void)

longlong FUN_1463ae85a(void)

{
  if (DAT_14cace7a0 == 0) {
    FUN_14000fc22(&DAT_14cace7a0,&PTR_FUN_14a7f5940);
  }
  return DAT_14cace7a0;
}



// FUNCTION 1463ae889 FUN_1463ae889 body=47 status=ok
// SIG undefined FUN_1463ae889(void)

longlong FUN_1463ae889(void)

{
  if (DAT_14cace7a8 == 0) {
    FUN_14000fc22(&DAT_14cace7a8,&PTR_FUN_14a7f5ab0);
  }
  return DAT_14cace7a8;
}



// FUNCTION 1463ae8b8 FUN_1463ae8b8 body=47 status=ok
// SIG undefined FUN_1463ae8b8(void)

longlong FUN_1463ae8b8(void)

{
  if (DAT_14cace7b0 == 0) {
    FUN_14000fc22(&DAT_14cace7b0,&PTR_FUN_14a7f5bd0);
  }
  return DAT_14cace7b0;
}



// FUNCTION 1463ae8e8 FUN_1463ae8e8 body=34 status=ok
// SIG undefined FUN_1463ae8e8(void)

void FUN_1463ae8e8(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a7045e();
  FUN_14069c8d6(uVar1,&PTR_s_BooleanArrayToAudioParameter_14a7f5c10,10);
  return;
}



// FUNCTION 1463ae90a FUN_1463ae90a body=35 status=ok
// SIG undefined FUN_1463ae90a(void)

void FUN_1463ae90a(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a7f5e00;
  return;
}



// FUNCTION 1463ae92e FUN_1463ae92e body=67 status=ok
// SIG undefined FUN_1463ae92e(void)

void FUN_1463ae92e(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a7f6120;
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 1463ae972 FUN_1463ae972 body=200 status=ok
// SIG undefined FUN_1463ae972(void)

void FUN_1463ae972(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = 0x4000040000;
  local_98 = 0x4001041000;
  local_90 = 0x4002022000;
  local_88 = 0x4003042800;
  local_18 = 0x1100000005;
  local_80 = 0x4004083800;
  lVar4 = FUN_14486d71a();
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 != lVar4) {
    *(longlong *)(param_1 + 0x10) = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463aea3b FUN_1463aea3b body=47 status=ok
// SIG undefined FUN_1463aea3b(void)

longlong FUN_1463aea3b(void)

{
  if (DAT_14cace828 == 0) {
    FUN_14073dd9a(&DAT_14cace828,&PTR_LAB_14a7f62e8);
  }
  return DAT_14cace828;
}


