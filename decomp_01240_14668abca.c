// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14668abca FUN_14668abca body=48 status=ok
// SIG undefined FUN_14668abca(void)

void FUN_14668abca(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14bb05fa0;
  return;
}



// FUNCTION 14668abfa FUN_14668abfa body=55 status=ok
// SIG undefined FUN_14668abfa(void)

void FUN_14668abfa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc01dc0 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc01dc0 = FUN_140002ddd(FUN_14668ac31,uVar1,L"RigVMFunction_MathBoolConstant");
  }
  return;
}



// FUNCTION 14668ac31 FUN_14668ac31 body=47 status=ok
// SIG undefined FUN_14668ac31(void)

longlong FUN_14668ac31(void)

{
  if (DAT_14cc01db8 == 0) {
    FUN_14086a14e(&DAT_14cc01db8,&PTR_FUN_14badf288);
  }
  return DAT_14cc01db8;
}



// FUNCTION 14668ac60 FUN_14668ac60 body=48 status=ok
// SIG undefined FUN_14668ac60(void)

void FUN_14668ac60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb06180;
  return;
}



// FUNCTION 14668ac90 FUN_14668ac90 body=55 status=ok
// SIG undefined FUN_14668ac90(void)

void FUN_14668ac90(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc01dd8 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc01dd8 = FUN_140002ddd(FUN_14668acc7,uVar1,L"RigVMFunction_MathBoolUnaryOp");
  }
  return;
}



// FUNCTION 14668acc7 FUN_14668acc7 body=47 status=ok
// SIG undefined FUN_14668acc7(void)

longlong FUN_14668acc7(void)

{
  if (DAT_14cc01dd0 == 0) {
    FUN_14086a14e(&DAT_14cc01dd0,&PTR_FUN_14badf3b0);
  }
  return DAT_14cc01dd0;
}



// FUNCTION 14668acf6 FUN_14668acf6 body=48 status=ok
// SIG undefined FUN_14668acf6(void)

void FUN_14668acf6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb06360;
  return;
}



// FUNCTION 14668ad26 FUN_14668ad26 body=55 status=ok
// SIG undefined FUN_14668ad26(void)

void FUN_14668ad26(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc01df0 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc01df0 = FUN_140002ddd(FUN_14668ad5d,uVar1,L"RigVMFunction_MathBoolBinaryOp");
  }
  return;
}



// FUNCTION 14668ad5d FUN_14668ad5d body=47 status=ok
// SIG undefined FUN_14668ad5d(void)

longlong FUN_14668ad5d(void)

{
  if (DAT_14cc01de8 == 0) {
    FUN_14086a14e(&DAT_14cc01de8,&PTR_FUN_14badf528);
  }
  return DAT_14cc01de8;
}



// FUNCTION 14668ad8c FUN_14668ad8c body=48 status=ok
// SIG undefined FUN_14668ad8c(void)

void FUN_14668ad8c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb06540;
  return;
}



// FUNCTION 14668adbc FUN_14668adbc body=55 status=ok
// SIG undefined FUN_14668adbc(void)

void FUN_14668adbc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc01e08 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc01e08 = FUN_140002ddd(FUN_14668adf3,uVar1,L"RigVMFunction_MathBoolBinaryAggregateOp");
  }
  return;
}



// FUNCTION 14668adf3 FUN_14668adf3 body=47 status=ok
// SIG undefined FUN_14668adf3(void)

longlong FUN_14668adf3(void)

{
  if (DAT_14cc01e00 == 0) {
    FUN_14086a14e(&DAT_14cc01e00,&PTR_FUN_14badf6b0);
  }
  return DAT_14cc01e00;
}



// FUNCTION 14668ae22 FUN_14668ae22 body=48 status=ok
// SIG undefined FUN_14668ae22(void)

void FUN_14668ae22(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb06720;
  return;
}



// FUNCTION 14668ae52 FUN_14668ae52 body=328 status=ok
// SIG undefined FUN_14668ae52(void)

longlong FUN_14668ae52(void)

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
  if (DAT_14cc01e20 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc01e20 = FUN_140002ddd(FUN_14668af9b,uVar3,L"RigVMFunction_MathBoolMake");
    local_58 = (undefined8 *)0x0;
    uStack_50 = 1;
    FUN_140c0351c(&local_58,0);
    *local_58 = L"Value";
    local_58[1] = L"bool";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    FUN_14001a7b2();
    lVar2 = DAT_14cc01e20;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathBoolMake::Execute",&DAT_149101178,lVar2);
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
  return DAT_14cc01e20;
}



// FUNCTION 14668af9b FUN_14668af9b body=47 status=ok
// SIG undefined FUN_14668af9b(void)

longlong FUN_14668af9b(void)

{
  if (DAT_14cc01e18 == 0) {
    FUN_14086a14e(&DAT_14cc01e18,&PTR_FUN_14badf7d0);
  }
  return DAT_14cc01e18;
}



// FUNCTION 14668afca FUN_14668afca body=48 status=ok
// SIG undefined FUN_14668afca(void)

void FUN_14668afca(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb06900;
  return;
}



// FUNCTION 14668affa FUN_14668affa body=328 status=ok
// SIG undefined FUN_14668affa(void)

longlong FUN_14668affa(void)

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
  if (DAT_14cc01e38 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc01e38 = FUN_140002ddd(FUN_14668b143,uVar3,L"RigVMFunction_MathBoolConstTrue");
    local_58 = (undefined8 *)0x0;
    uStack_50 = 1;
    FUN_140c0351c(&local_58,0);
    *local_58 = L"Value";
    local_58[1] = L"bool";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    FUN_14001a7b2();
    lVar2 = DAT_14cc01e38;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathBoolConstTrue::Execute",&LAB_14910124e,lVar2);
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
  return DAT_14cc01e38;
}



// FUNCTION 14668b143 FUN_14668b143 body=47 status=ok
// SIG undefined FUN_14668b143(void)

longlong FUN_14668b143(void)

{
  if (DAT_14cc01e30 == 0) {
    FUN_14086a14e(&DAT_14cc01e30,&PTR_FUN_14badf8c0);
  }
  return DAT_14cc01e30;
}



// FUNCTION 14668b172 FUN_14668b172 body=48 status=ok
// SIG undefined FUN_14668b172(void)

void FUN_14668b172(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb06ae0;
  return;
}



// FUNCTION 14668b1a2 FUN_14668b1a2 body=328 status=ok
// SIG undefined FUN_14668b1a2(void)

longlong FUN_14668b1a2(void)

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
  if (DAT_14cc01e50 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc01e50 = FUN_140002ddd(FUN_14668b2eb,uVar3,L"RigVMFunction_MathBoolConstFalse");
    local_58 = (undefined8 *)0x0;
    uStack_50 = 1;
    FUN_140c0351c(&local_58,0);
    *local_58 = L"Value";
    local_58[1] = L"bool";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    FUN_14001a7b2();
    lVar2 = DAT_14cc01e50;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathBoolConstFalse::Execute",&LAB_14910132e,lVar2)
    ;
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
  return DAT_14cc01e50;
}



// FUNCTION 14668b2eb FUN_14668b2eb body=47 status=ok
// SIG undefined FUN_14668b2eb(void)

longlong FUN_14668b2eb(void)

{
  if (DAT_14cc01e48 == 0) {
    FUN_14086a14e(&DAT_14cc01e48,&PTR_FUN_14badf9b8);
  }
  return DAT_14cc01e48;
}



// FUNCTION 14668b31a FUN_14668b31a body=48 status=ok
// SIG undefined FUN_14668b31a(void)

void FUN_14668b31a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb06cc0;
  return;
}



// FUNCTION 14668b34a FUN_14668b34a body=408 status=ok
// SIG undefined FUN_14668b34a(void)

longlong FUN_14668b34a(void)

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
  if (DAT_14cc01e68 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc01e68 = FUN_140002ddd(FUN_14668b4e3,uVar3,L"RigVMFunction_MathBoolNot");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"bool";
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"bool";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc01e68;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathBoolNot::Execute",&LAB_14910140e,lVar4);
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
  return DAT_14cc01e68;
}



// FUNCTION 14668b4e3 FUN_14668b4e3 body=47 status=ok
// SIG undefined FUN_14668b4e3(void)

longlong FUN_14668b4e3(void)

{
  if (DAT_14cc01e60 == 0) {
    FUN_14086a14e(&DAT_14cc01e60,&PTR_FUN_14badfa88);
  }
  return DAT_14cc01e60;
}



// FUNCTION 14668b512 FUN_14668b512 body=48 status=ok
// SIG undefined FUN_14668b512(void)

void FUN_14668b512(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb06ea0;
  return;
}



// FUNCTION 14668b542 FUN_14668b542 body=490 status=ok
// SIG undefined FUN_14668b542(void)

longlong FUN_14668b542(void)

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
  if (DAT_14cc01e80 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc01e80 = FUN_140002ddd(FUN_14668b72d,uVar3,L"RigVMFunction_MathBoolAnd");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
    local_58[1] = L"bool";
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"bool";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc01e80;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathBoolAnd::Execute",&LAB_1491014fa,lVar4);
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
  return DAT_14cc01e80;
}



// FUNCTION 14668b72d FUN_14668b72d body=47 status=ok
// SIG undefined FUN_14668b72d(void)

longlong FUN_14668b72d(void)

{
  if (DAT_14cc01e78 == 0) {
    FUN_14086a14e(&DAT_14cc01e78,&PTR_FUN_14badfb58);
  }
  return DAT_14cc01e78;
}



// FUNCTION 14668b75c FUN_14668b75c body=48 status=ok
// SIG undefined FUN_14668b75c(void)

void FUN_14668b75c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb07080;
  return;
}



// FUNCTION 14668b78c FUN_14668b78c body=490 status=ok
// SIG undefined FUN_14668b78c(void)

longlong FUN_14668b78c(void)

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
  if (DAT_14cc01e98 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc01e98 = FUN_140002ddd(FUN_14668b977,uVar3,L"RigVMFunction_MathBoolNand");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
    local_58[1] = L"bool";
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"bool";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc01e98;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathBoolNand::Execute",&LAB_1491015ec,lVar4);
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
  return DAT_14cc01e98;
}



// FUNCTION 14668b977 FUN_14668b977 body=47 status=ok
// SIG undefined FUN_14668b977(void)

longlong FUN_14668b977(void)

{
  if (DAT_14cc01e90 == 0) {
    FUN_14086a14e(&DAT_14cc01e90,&PTR_FUN_14badfc30);
  }
  return DAT_14cc01e90;
}



// FUNCTION 14668b9a6 FUN_14668b9a6 body=48 status=ok
// SIG undefined FUN_14668b9a6(void)

void FUN_14668b9a6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb07260;
  return;
}



// FUNCTION 14668b9d6 FUN_14668b9d6 body=490 status=ok
// SIG undefined FUN_14668b9d6(void)

longlong FUN_14668b9d6(void)

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
  if (DAT_14cc01eb0 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc01eb0 = FUN_140002ddd(FUN_14668bbc1,uVar3,L"RigVMFunction_MathBoolNand2");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
    local_58[1] = L"bool";
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"bool";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc01eb0;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathBoolNand2::Execute",&LAB_1491016e2,lVar4);
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
  return DAT_14cc01eb0;
}



// FUNCTION 14668bbc1 FUN_14668bbc1 body=47 status=ok
// SIG undefined FUN_14668bbc1(void)

longlong FUN_14668bbc1(void)

{
  if (DAT_14cc01ea8 == 0) {
    FUN_14086a14e(&DAT_14cc01ea8,&PTR_FUN_14badfd08);
  }
  return DAT_14cc01ea8;
}



// FUNCTION 14668bbf0 FUN_14668bbf0 body=48 status=ok
// SIG undefined FUN_14668bbf0(void)

void FUN_14668bbf0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb07440;
  return;
}



// FUNCTION 14668bc20 FUN_14668bc20 body=490 status=ok
// SIG undefined FUN_14668bc20(void)

longlong FUN_14668bc20(void)

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
  if (DAT_14cc01ec8 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc01ec8 = FUN_140002ddd(FUN_14668be0b,uVar3,L"RigVMFunction_MathBoolOr");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
    local_58[1] = L"bool";
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"bool";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc01ec8;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathBoolOr::Execute",&LAB_1491017d8,lVar4);
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
  return DAT_14cc01ec8;
}



// FUNCTION 14668be0b FUN_14668be0b body=47 status=ok
// SIG undefined FUN_14668be0b(void)

longlong FUN_14668be0b(void)

{
  if (DAT_14cc01ec0 == 0) {
    FUN_14086a14e(&DAT_14cc01ec0,&PTR_FUN_14badfdd8);
  }
  return DAT_14cc01ec0;
}



// FUNCTION 14668be3a FUN_14668be3a body=48 status=ok
// SIG undefined FUN_14668be3a(void)

void FUN_14668be3a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb075a0;
  return;
}



// FUNCTION 14668be6a FUN_14668be6a body=490 status=ok
// SIG undefined FUN_14668be6a(void)

longlong FUN_14668be6a(void)

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
  if (DAT_14cc01ee0 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc01ee0 = FUN_140002ddd(FUN_14668c055,uVar3,L"RigVMFunction_MathBoolEquals");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
    local_58[1] = L"bool";
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"bool";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc01ee0;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathBoolEquals::Execute",&LAB_1491018ca,lVar4);
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
  return DAT_14cc01ee0;
}



// FUNCTION 14668c055 FUN_14668c055 body=47 status=ok
// SIG undefined FUN_14668c055(void)

longlong FUN_14668c055(void)

{
  if (DAT_14cc01ed8 == 0) {
    FUN_14086a14e(&DAT_14cc01ed8,&PTR_FUN_14badff98);
  }
  return DAT_14cc01ed8;
}



// FUNCTION 14668c084 FUN_14668c084 body=48 status=ok
// SIG undefined FUN_14668c084(void)

void FUN_14668c084(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb07780;
  return;
}



// FUNCTION 14668c0b4 FUN_14668c0b4 body=490 status=ok
// SIG undefined FUN_14668c0b4(void)

longlong FUN_14668c0b4(void)

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
  if (DAT_14cc01ef8 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc01ef8 = FUN_140002ddd(FUN_14668c29f,uVar3,L"RigVMFunction_MathBoolNotEquals");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
    local_58[1] = L"bool";
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"bool";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc01ef8;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathBoolNotEquals::Execute",&LAB_1491019ce,lVar4);
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
  return DAT_14cc01ef8;
}



// FUNCTION 14668c29f FUN_14668c29f body=47 status=ok
// SIG undefined FUN_14668c29f(void)

longlong FUN_14668c29f(void)

{
  if (DAT_14cc01ef0 == 0) {
    FUN_14086a14e(&DAT_14cc01ef0,&PTR_FUN_14bae0168);
  }
  return DAT_14cc01ef0;
}



// FUNCTION 14668c2ce FUN_14668c2ce body=48 status=ok
// SIG undefined FUN_14668c2ce(void)

void FUN_14668c2ce(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb07960;
  return;
}



// FUNCTION 14668c2fe FUN_14668c2fe body=569 status=ok
// SIG undefined FUN_14668c2fe(void)

longlong FUN_14668c2fe(void)

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
  if (DAT_14cc01f10 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc01f10 = FUN_140002ddd(FUN_14668c538,uVar3,L"RigVMFunction_MathBoolToggled");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"bool";
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
    local_58[lVar4 * 7] = L"Toggled";
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
    local_58[lVar4 * 7] = L"Initialized";
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
    local_58[lVar4 * 7] = L"LastValue";
    local_58[lVar4 * 7 + 1] = L"bool";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc01f10;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathBoolToggled::Execute",FUN_149101ad2,lVar4);
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
  return DAT_14cc01f10;
}



// FUNCTION 14668c538 FUN_14668c538 body=47 status=ok
// SIG undefined FUN_14668c538(void)

longlong FUN_14668c538(void)

{
  if (DAT_14cc01f08 == 0) {
    FUN_14086a14e(&DAT_14cc01f08,&PTR_FUN_14bae03c0);
  }
  return DAT_14cc01f08;
}



// FUNCTION 14668c568 FUN_14668c568 body=48 status=ok
// SIG undefined FUN_14668c568(void)

void FUN_14668c568(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb07b40;
  return;
}



// FUNCTION 14668c598 FUN_14668c598 body=653 status=ok
// SIG undefined FUN_14668c598(void)

longlong FUN_14668c598(void)

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
  if (DAT_14cc01f28 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc01f28 = FUN_140002ddd(FUN_14668c826,uVar3,L"RigVMFunction_MathBoolFlipFlop");
    local_68 = (undefined8 *)0x0;
    uStack_60._0_4_ = 1;
    uStack_60._4_4_ = 0;
    FUN_140c0351c(&local_68,0);
    iVar1 = (uint)uStack_60;
    *local_68 = L"StartValue";
    local_68[1] = L"bool";
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
    local_68[lVar4 * 7] = L"Duration";
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
    local_68[lVar4 * 7] = L"Result";
    local_68[lVar4 * 7 + 1] = L"bool";
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
    local_68[lVar4 * 7] = L"LastValue";
    local_68[lVar4 * 7 + 1] = L"bool";
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
    local_68[lVar4 * 7] = L"TimeLeft";
    local_68[lVar4 * 7 + 1] = L"float";
    local_68[lVar4 * 7 + 2] = 0;
    (local_68 + lVar4 * 7 + 2)[1] = 0;
    local_68[lVar4 * 7 + 4] = 0;
    (local_68 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc01f28;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathBoolFlipFlop::Execute",FUN_149101c72,lVar4);
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
  return DAT_14cc01f28;
}



// FUNCTION 14668c826 FUN_14668c826 body=47 status=ok
// SIG undefined FUN_14668c826(void)

longlong FUN_14668c826(void)

{
  if (DAT_14cc01f20 == 0) {
    FUN_14086a14e(&DAT_14cc01f20,&PTR_FUN_14bae0628);
  }
  return DAT_14cc01f20;
}



// FUNCTION 14668c856 FUN_14668c856 body=48 status=ok
// SIG undefined FUN_14668c856(void)

void FUN_14668c856(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb07d20;
  return;
}



// FUNCTION 14668c886 FUN_14668c886 body=580 status=ok
// SIG undefined FUN_14668c886(void)

longlong FUN_14668c886(void)

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
  if (DAT_14cc01f40 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc01f40 = FUN_140002ddd(FUN_14668cacb,uVar3,L"RigVMFunction_MathBoolOnce");
    local_68 = (undefined8 *)0x0;
    uStack_60._0_4_ = 1;
    uStack_60._4_4_ = 0;
    FUN_140c0351c(&local_68,0);
    iVar1 = (uint)uStack_60;
    *local_68 = L"Duration";
    local_68[1] = L"float";
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
    local_68[lVar4 * 7] = L"Result";
    local_68[lVar4 * 7 + 1] = L"bool";
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
    local_68[lVar4 * 7] = L"LastValue";
    local_68[lVar4 * 7 + 1] = L"bool";
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
    local_68[lVar4 * 7] = L"TimeLeft";
    local_68[lVar4 * 7 + 1] = L"float";
    local_68[lVar4 * 7 + 2] = 0;
    (local_68 + lVar4 * 7 + 2)[1] = 0;
    local_68[lVar4 * 7 + 4] = 0;
    (local_68 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc01f40;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathBoolOnce::Execute",FUN_149101e40,lVar4);
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
  return DAT_14cc01f40;
}



// FUNCTION 14668cacb FUN_14668cacb body=47 status=ok
// SIG undefined FUN_14668cacb(void)

longlong FUN_14668cacb(void)

{
  if (DAT_14cc01f38 == 0) {
    FUN_14086a14e(&DAT_14cc01f38,&PTR_FUN_14bae0810);
  }
  return DAT_14cc01f38;
}



// FUNCTION 14668cafa FUN_14668cafa body=48 status=ok
// SIG undefined FUN_14668cafa(void)

void FUN_14668cafa(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb07f00;
  return;
}



// FUNCTION 14668cb2a FUN_14668cb2a body=413 status=ok
// SIG undefined FUN_14668cb2a(void)

longlong FUN_14668cb2a(void)

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
  if (DAT_14cc01f58 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc01f58 = FUN_140002ddd(FUN_14668ccc8,uVar3,L"RigVMFunction_MathBoolToFloat");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"bool";
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc01f58;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathBoolToFloat::Execute",&LAB_14910201e,lVar4);
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
  return DAT_14cc01f58;
}



// FUNCTION 14668ccc8 FUN_14668ccc8 body=47 status=ok
// SIG undefined FUN_14668ccc8(void)

longlong FUN_14668ccc8(void)

{
  if (DAT_14cc01f50 == 0) {
    FUN_14086a14e(&DAT_14cc01f50,&PTR_FUN_14bae0980);
  }
  return DAT_14cc01f50;
}



// FUNCTION 14668ccf8 FUN_14668ccf8 body=48 status=ok
// SIG undefined FUN_14668ccf8(void)

void FUN_14668ccf8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb080e0;
  return;
}



// FUNCTION 14668cd28 FUN_14668cd28 body=413 status=ok
// SIG undefined FUN_14668cd28(void)

longlong FUN_14668cd28(void)

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
  if (DAT_14cc01f70 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc01f70 = FUN_140002ddd(FUN_14668cec6,uVar3,L"RigVMFunction_MathBoolToInteger");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"bool";
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"int32";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc01f70;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathBoolToInteger::Execute",&LAB_149102130,lVar4);
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
  return DAT_14cc01f70;
}



// FUNCTION 14668cec6 FUN_14668cec6 body=47 status=ok
// SIG undefined FUN_14668cec6(void)

longlong FUN_14668cec6(void)

{
  if (DAT_14cc01f68 == 0) {
    FUN_14086a14e(&DAT_14cc01f68,&PTR_FUN_14bae0b00);
  }
  return DAT_14cc01f68;
}



// FUNCTION 14668cef6 FUN_14668cef6 body=48 status=ok
// SIG undefined FUN_14668cef6(void)

void FUN_14668cef6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb082c0;
  return;
}



// FUNCTION 14668cf26 FUN_14668cf26 body=55 status=ok
// SIG undefined FUN_14668cf26(void)

void FUN_14668cf26(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc01f88 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc01f88 = FUN_140002ddd(FUN_14668cf5d,uVar1,L"RigVMFunction_MathBoxBase");
  }
  return;
}



// FUNCTION 14668cf5d FUN_14668cf5d body=49 status=ok
// SIG undefined FUN_14668cf5d(void)

longlong FUN_14668cf5d(void)

{
  if (DAT_14cc01f80 == 0) {
    FUN_14086a14e(&DAT_14cc01f80,&PTR_FUN_14bae0eb0);
  }
  return DAT_14cc01f80;
}



// FUNCTION 14668cf8e FUN_14668cf8e body=48 status=ok
// SIG undefined FUN_14668cf8e(void)

void FUN_14668cf8e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14bb08520;
  return;
}



// FUNCTION 14668cfbe FUN_14668cfbe body=735 status=ok
// SIG undefined FUN_14668cfbe(void)

longlong FUN_14668cfbe(void)

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
  if (DAT_14cc01fa0 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc01fa0 = FUN_140002ddd(FUN_14668d29e,uVar3,L"RigVMFunction_MathBoxFromArray");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"Array";
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
    local_58[lVar4 * 7] = &DAT_149e3c97a;
    local_58[lVar4 * 7 + 1] = L"FBox";
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
    local_58[lVar4 * 7] = L"Minimum";
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
    local_58[lVar4 * 7] = L"Maximum";
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
    local_58[lVar4 * 7] = L"Center";
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
    local_58[lVar4 * 7] = L"Size";
    local_58[lVar4 * 7 + 1] = L"FVector";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc01fa0;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathBoxFromArray::Execute",FUN_1491023ae,lVar4);
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
  return DAT_14cc01fa0;
}



// FUNCTION 14668d29e FUN_14668d29e body=47 status=ok
// SIG undefined FUN_14668d29e(void)

longlong FUN_14668d29e(void)

{
  if (DAT_14cc01f98 == 0) {
    FUN_14086a14e(&DAT_14cc01f98,&PTR_FUN_14bae1188);
  }
  return DAT_14cc01f98;
}



// FUNCTION 14668d2ce FUN_14668d2ce body=48 status=ok
// SIG undefined FUN_14668d2ce(void)

void FUN_14668d2ce(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000b0;
  *puVar1 = &PTR_FUN_14bb08700;
  return;
}



// FUNCTION 14668d2fe FUN_14668d2fe body=413 status=ok
// SIG undefined FUN_14668d2fe(void)

longlong FUN_14668d2fe(void)

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
  if (DAT_14cc01fb8 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc01fb8 = FUN_140002ddd(FUN_14668d49c,uVar3,L"RigVMFunction_MathBoxIsValid");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = &DAT_149e3c97a;
    local_58[1] = L"FBox";
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
    local_58[lVar4 * 7] = L"Valid";
    local_58[lVar4 * 7 + 1] = L"bool";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc01fb8;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathBoxIsValid::Execute",&LAB_149102758,lVar4);
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
  return DAT_14cc01fb8;
}



// FUNCTION 14668d49c FUN_14668d49c body=47 status=ok
// SIG undefined FUN_14668d49c(void)

longlong FUN_14668d49c(void)

{
  if (DAT_14cc01fb0 == 0) {
    FUN_14086a14e(&DAT_14cc01fb0,&PTR_FUN_14bae1300);
  }
  return DAT_14cc01fb0;
}



// FUNCTION 14668d4cc FUN_14668d4cc body=48 status=ok
// SIG undefined FUN_14668d4cc(void)

void FUN_14668d4cc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000048;
  *puVar1 = &PTR_FUN_14bb088e0;
  return;
}



// FUNCTION 14668d4fc FUN_14668d4fc body=413 status=ok
// SIG undefined FUN_14668d4fc(void)

longlong FUN_14668d4fc(void)

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
  if (DAT_14cc01fd0 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc01fd0 = FUN_140002ddd(FUN_14668d69a,uVar3,L"RigVMFunction_MathBoxGetCenter");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = &DAT_149e3c97a;
    local_58[1] = L"FBox";
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
    local_58[lVar4 * 7] = L"Center";
    local_58[lVar4 * 7 + 1] = L"FVector";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc01fd0;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathBoxGetCenter::Execute",&LAB_14910284a,lVar4);
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
  return DAT_14cc01fd0;
}



// FUNCTION 14668d69a FUN_14668d69a body=47 status=ok
// SIG undefined FUN_14668d69a(void)

longlong FUN_14668d69a(void)

{
  if (DAT_14cc01fc8 == 0) {
    FUN_14086a14e(&DAT_14cc01fc8,&PTR_FUN_14bae1480);
  }
  return DAT_14cc01fc8;
}



// FUNCTION 14668d6ca FUN_14668d6ca body=48 status=ok
// SIG undefined FUN_14668d6ca(void)

void FUN_14668d6ca(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000058;
  *puVar1 = &PTR_FUN_14bb08ac0;
  return;
}



// FUNCTION 14668d6fa FUN_14668d6fa body=497 status=ok
// SIG undefined FUN_14668d6fa(void)

longlong FUN_14668d6fa(void)

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
  if (DAT_14cc01fe8 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc01fe8 = FUN_140002ddd(FUN_14668d8ec,uVar3,L"RigVMFunction_MathBoxGetSize");
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
    local_58[lVar4 * 7] = L"Size";
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
    local_58[lVar4 * 7] = L"Extent";
    local_58[lVar4 * 7 + 1] = L"FVector";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc01fe8;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathBoxGetSize::Execute",&LAB_1491029e6,lVar4);
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
  return DAT_14cc01fe8;
}



// FUNCTION 14668d8ec FUN_14668d8ec body=47 status=ok
// SIG undefined FUN_14668d8ec(void)

longlong FUN_14668d8ec(void)

{
  if (DAT_14cc01fe0 == 0) {
    FUN_14086a14e(&DAT_14cc01fe0,&PTR_FUN_14bae1638);
  }
  return DAT_14cc01fe0;
}



// FUNCTION 14668d91c FUN_14668d91c body=48 status=ok
// SIG undefined FUN_14668d91c(void)

void FUN_14668d91c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000070;
  *puVar1 = &PTR_FUN_14bb08ca0;
  return;
}



// FUNCTION 14668d94c FUN_14668d94c body=497 status=ok
// SIG undefined FUN_14668d94c(void)

longlong FUN_14668d94c(void)

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
  if (DAT_14cc02000 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02000 = FUN_140002ddd(FUN_14668db3e,uVar3,L"RigVMFunction_MathBoxShift");
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
    local_58[lVar4 * 7] = L"Amount";
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"FBox";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02000;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathBoxShift::Execute",&LAB_149102b80,lVar4);
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
  return DAT_14cc02000;
}



// FUNCTION 14668db3e FUN_14668db3e body=47 status=ok
// SIG undefined FUN_14668db3e(void)

longlong FUN_14668db3e(void)

{
  if (DAT_14cc01ff8 == 0) {
    FUN_14086a14e(&DAT_14cc01ff8,&PTR_FUN_14bae17f8);
  }
  return DAT_14cc01ff8;
}



// FUNCTION 14668db6e FUN_14668db6e body=48 status=ok
// SIG undefined FUN_14668db6e(void)

void FUN_14668db6e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000090;
  *puVar1 = &PTR_FUN_14bb08e80;
  return;
}



// FUNCTION 14668db9e FUN_14668db9e body=497 status=ok
// SIG undefined FUN_14668db9e(void)

longlong FUN_14668db9e(void)

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
  if (DAT_14cc02018 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02018 = FUN_140002ddd(FUN_14668dd90,uVar3,L"RigVMFunction_MathBoxMoveTo");
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
    local_58[lVar4 * 7] = L"Center";
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"FBox";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02018;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathBoxMoveTo::Execute",&LAB_149102cfe,lVar4);
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
  return DAT_14cc02018;
}



// FUNCTION 14668dd90 FUN_14668dd90 body=47 status=ok
// SIG undefined FUN_14668dd90(void)

longlong FUN_14668dd90(void)

{
  if (DAT_14cc02010 == 0) {
    FUN_14086a14e(&DAT_14cc02010,&PTR_FUN_14bae19b8);
  }
  return DAT_14cc02010;
}



// FUNCTION 14668ddc0 FUN_14668ddc0 body=48 status=ok
// SIG undefined FUN_14668ddc0(void)

void FUN_14668ddc0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000090;
  *puVar1 = &PTR_FUN_14bb09060;
  return;
}



// FUNCTION 14668ddf0 FUN_14668ddf0 body=497 status=ok
// SIG undefined FUN_14668ddf0(void)

longlong FUN_14668ddf0(void)

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
  if (DAT_14cc02030 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02030 = FUN_140002ddd(FUN_14668dfe2,uVar3,L"RigVMFunction_MathBoxExpand");
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
    local_58[lVar4 * 7] = L"Amount";
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"FBox";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02030;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathBoxExpand::Execute",&LAB_149102f06,lVar4);
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
  return DAT_14cc02030;
}



// FUNCTION 14668dfe2 FUN_14668dfe2 body=47 status=ok
// SIG undefined FUN_14668dfe2(void)

longlong FUN_14668dfe2(void)

{
  if (DAT_14cc02028 == 0) {
    FUN_14086a14e(&DAT_14cc02028,&PTR_FUN_14bae1b78);
  }
  return DAT_14cc02028;
}



// FUNCTION 14668e012 FUN_14668e012 body=48 status=ok
// SIG undefined FUN_14668e012(void)

void FUN_14668e012(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000090;
  *puVar1 = &PTR_FUN_14bb09240;
  return;
}



// FUNCTION 14668e042 FUN_14668e042 body=497 status=ok
// SIG undefined FUN_14668e042(void)

longlong FUN_14668e042(void)

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
  if (DAT_14cc02048 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02048 = FUN_140002ddd(FUN_14668e234,uVar3,L"RigVMFunction_MathBoxTransform");
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
    local_58[lVar4 * 7] = L"Transform";
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"FBox";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02048;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathBoxTransform::Execute",FUN_1491030ac,lVar4);
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
  return DAT_14cc02048;
}



// FUNCTION 14668e234 FUN_14668e234 body=47 status=ok
// SIG undefined FUN_14668e234(void)

longlong FUN_14668e234(void)

{
  if (DAT_14cc02040 == 0) {
    FUN_14086a14e(&DAT_14cc02040,&PTR_FUN_14bae1d38);
  }
  return DAT_14cc02040;
}



// FUNCTION 14668e264 FUN_14668e264 body=48 status=ok
// SIG undefined FUN_14668e264(void)

void FUN_14668e264(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000000e0;
  *puVar1 = &PTR_FUN_14bb09420;
  return;
}



// FUNCTION 14668e294 FUN_14668e294 body=663 status=ok
// SIG undefined FUN_14668e294(void)

longlong FUN_14668e294(void)

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
  if (DAT_14cc02060 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02060 = FUN_140002ddd(FUN_14668e52c,uVar3,L"RigVMFunction_MathBoxGetDistance");
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
    local_58[lVar4 * 7] = L"Position";
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
    local_58[lVar4 * 7] = L"Square";
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
    local_58[lVar4 * 7] = L"Valid";
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
    local_58[lVar4 * 7] = L"Distance";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02060;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathBoxGetDistance::Execute",FUN_149103276,lVar4);
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
  return DAT_14cc02060;
}



// FUNCTION 14668e52c FUN_14668e52c body=47 status=ok
// SIG undefined FUN_14668e52c(void)

longlong FUN_14668e52c(void)

{
  if (DAT_14cc02058 == 0) {
    FUN_14086a14e(&DAT_14cc02058,&PTR_FUN_14bae1fa0);
  }
  return DAT_14cc02058;
}



// FUNCTION 14668e55c FUN_14668e55c body=48 status=ok
// SIG undefined FUN_14668e55c(void)

void FUN_14668e55c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000060;
  *puVar1 = &PTR_FUN_14bb09600;
  return;
}



// FUNCTION 14668e58c FUN_14668e58c body=502 status=ok
// SIG undefined FUN_14668e58c(void)

longlong FUN_14668e58c(void)

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
  if (DAT_14cc02078 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02078 = FUN_140002ddd(FUN_14668e783,uVar3,L"RigVMFunction_MathBoxIsInside");
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
    local_58[lVar4 * 7] = L"Position";
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"bool";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02078;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathBoxIsInside::Execute",&LAB_149103488,lVar4);
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
  return DAT_14cc02078;
}



// FUNCTION 14668e783 FUN_14668e783 body=47 status=ok
// SIG undefined FUN_14668e783(void)

longlong FUN_14668e783(void)

{
  if (DAT_14cc02070 == 0) {
    FUN_14086a14e(&DAT_14cc02070,&PTR_FUN_14bae2168);
  }
  return DAT_14cc02070;
}



// FUNCTION 14668e7b2 FUN_14668e7b2 body=48 status=ok
// SIG undefined FUN_14668e7b2(void)

void FUN_14668e7b2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000060;
  *puVar1 = &PTR_FUN_14bb097e0;
  return;
}



// FUNCTION 14668e7e2 FUN_14668e7e2 body=413 status=ok
// SIG undefined FUN_14668e7e2(void)

longlong FUN_14668e7e2(void)

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
  if (DAT_14cc02090 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02090 = FUN_140002ddd(FUN_14668e980,uVar3,L"RigVMFunction_MathBoxGetVolume");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = &DAT_149e3c97a;
    local_58[1] = L"FBox";
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
    local_58[lVar4 * 7] = L"Volume";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02090;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathBoxGetVolume::Execute",&LAB_1491035de,lVar4);
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
  return DAT_14cc02090;
}



// FUNCTION 14668e980 FUN_14668e980 body=47 status=ok
// SIG undefined FUN_14668e980(void)

longlong FUN_14668e980(void)

{
  if (DAT_14cc02088 == 0) {
    FUN_14086a14e(&DAT_14cc02088,&PTR_FUN_14bae22e0);
  }
  return DAT_14cc02088;
}



// FUNCTION 14668e9b0 FUN_14668e9b0 body=48 status=ok
// SIG undefined FUN_14668e9b0(void)

void FUN_14668e9b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000048;
  *puVar1 = &PTR_FUN_14bb099c0;
  return;
}



// FUNCTION 14668e9e0 FUN_14668e9e0 body=55 status=ok
// SIG undefined FUN_14668e9e0(void)

void FUN_14668e9e0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc020a8 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc020a8 = FUN_140002ddd(FUN_14668ea17,uVar1,L"RigVMFunction_MathColorBase");
  }
  return;
}



// FUNCTION 14668ea17 FUN_14668ea17 body=49 status=ok
// SIG undefined FUN_14668ea17(void)

longlong FUN_14668ea17(void)

{
  if (DAT_14cc020a0 == 0) {
    FUN_14086a14e(&DAT_14cc020a0,&PTR_FUN_14bae2558);
  }
  return DAT_14cc020a0;
}



// FUNCTION 14668ea48 FUN_14668ea48 body=48 status=ok
// SIG undefined FUN_14668ea48(void)

void FUN_14668ea48(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14bb09ba0;
  return;
}



// FUNCTION 14668ea78 FUN_14668ea78 body=55 status=ok
// SIG undefined FUN_14668ea78(void)

void FUN_14668ea78(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc020c0 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc020c0 = FUN_140002ddd(FUN_14668eaaf,uVar1,L"RigVMFunction_MathColorBinaryOp");
  }
  return;
}



// FUNCTION 14668eaaf FUN_14668eaaf body=47 status=ok
// SIG undefined FUN_14668eaaf(void)

longlong FUN_14668eaaf(void)

{
  if (DAT_14cc020b8 == 0) {
    FUN_14086a14e(&DAT_14cc020b8,&PTR_FUN_14bae26c8);
  }
  return DAT_14cc020b8;
}



// FUNCTION 14668eade FUN_14668eade body=48 status=ok
// SIG undefined FUN_14668eade(void)

void FUN_14668eade(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14bb09d80;
  return;
}



// FUNCTION 14668eb0e FUN_14668eb0e body=55 status=ok
// SIG undefined FUN_14668eb0e(void)

void FUN_14668eb0e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc020d8 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc020d8 = FUN_140002ddd(FUN_14668eb45,uVar1,L"RigVMFunction_MathColorBinaryAggregateOp");
  }
  return;
}



// FUNCTION 14668eb45 FUN_14668eb45 body=47 status=ok
// SIG undefined FUN_14668eb45(void)

longlong FUN_14668eb45(void)

{
  if (DAT_14cc020d0 == 0) {
    FUN_14086a14e(&DAT_14cc020d0,&PTR_FUN_14bae2868);
  }
  return DAT_14cc020d0;
}



// FUNCTION 14668eb74 FUN_14668eb74 body=48 status=ok
// SIG undefined FUN_14668eb74(void)

void FUN_14668eb74(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14bb09f60;
  return;
}



// FUNCTION 14668eba4 FUN_14668eba4 body=649 status=ok
// SIG undefined FUN_14668eba4(void)

longlong FUN_14668eba4(void)

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
  if (DAT_14cc020f0 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc020f0 = FUN_140002ddd(FUN_14668ee2e,uVar3,L"RigVMFunction_MathColorMake");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149ebbc0e;
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
    local_58[lVar4 * 7] = &DAT_149ebbbea;
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
    local_58[lVar4 * 7] = &DAT_149e060e8;
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
    local_58[lVar4 * 7] = &DAT_149e71d50;
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
    local_58[lVar4 * 7 + 1] = L"FLinearColor";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc020f0;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathColorMake::Execute",&LAB_149103732,lVar4);
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
  return DAT_14cc020f0;
}



// FUNCTION 14668ee2e FUN_14668ee2e body=47 status=ok
// SIG undefined FUN_14668ee2e(void)

longlong FUN_14668ee2e(void)

{
  if (DAT_14cc020e8 == 0) {
    FUN_14086a14e(&DAT_14cc020e8,&PTR_FUN_14bae2a98);
  }
  return DAT_14cc020e8;
}



// FUNCTION 14668ee5e FUN_14668ee5e body=48 status=ok
// SIG undefined FUN_14668ee5e(void)

void FUN_14668ee5e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14bb0a140;
  return;
}



// FUNCTION 14668ee8e FUN_14668ee8e body=413 status=ok
// SIG undefined FUN_14668ee8e(void)

longlong FUN_14668ee8e(void)

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
  if (DAT_14cc02108 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02108 = FUN_140002ddd(FUN_14668f02c,uVar3,L"RigVMFunction_MathColorFromFloat");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = L"Value";
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"FLinearColor";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02108;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathColorFromFloat::Execute",&LAB_14910384a,lVar4)
    ;
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
  return DAT_14cc02108;
}



// FUNCTION 14668f02c FUN_14668f02c body=47 status=ok
// SIG undefined FUN_14668f02c(void)

longlong FUN_14668f02c(void)

{
  if (DAT_14cc02100 == 0) {
    FUN_14086a14e(&DAT_14cc02100,&PTR_FUN_14bae2c18);
  }
  return DAT_14cc02100;
}



// FUNCTION 14668f05c FUN_14668f05c body=48 status=ok
// SIG undefined FUN_14668f05c(void)

void FUN_14668f05c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14bb0a320;
  return;
}



// FUNCTION 14668f08c FUN_14668f08c body=413 status=ok
// SIG undefined FUN_14668f08c(void)

longlong FUN_14668f08c(void)

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
  if (DAT_14cc02120 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02120 = FUN_140002ddd(FUN_14668f22a,uVar3,L"RigVMFunction_MathColorFromDouble");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"double";
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"FLinearColor";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02120;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathColorFromDouble::Execute",&LAB_14910395c,lVar4
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
  return DAT_14cc02120;
}



// FUNCTION 14668f22a FUN_14668f22a body=47 status=ok
// SIG undefined FUN_14668f22a(void)

longlong FUN_14668f22a(void)

{
  if (DAT_14cc02118 == 0) {
    FUN_14086a14e(&DAT_14cc02118,&PTR_FUN_14bae2da8);
  }
  return DAT_14cc02118;
}



// FUNCTION 14668f25a FUN_14668f25a body=48 status=ok
// SIG undefined FUN_14668f25a(void)

void FUN_14668f25a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14bb0a500;
  return;
}



// FUNCTION 14668f28a FUN_14668f28a body=490 status=ok
// SIG undefined FUN_14668f28a(void)

longlong FUN_14668f28a(void)

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
  if (DAT_14cc02138 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02138 = FUN_140002ddd(FUN_14668f475,uVar3,L"RigVMFunction_MathColorAdd");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
    local_58[1] = L"FLinearColor";
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"FLinearColor";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02138;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathColorAdd::Execute",&LAB_149103a70,lVar4);
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
  return DAT_14cc02138;
}



// FUNCTION 14668f475 FUN_14668f475 body=47 status=ok
// SIG undefined FUN_14668f475(void)

longlong FUN_14668f475(void)

{
  if (DAT_14cc02130 == 0) {
    FUN_14086a14e(&DAT_14cc02130,&PTR_FUN_14bae2e80);
  }
  return DAT_14cc02130;
}



// FUNCTION 14668f4a4 FUN_14668f4a4 body=48 status=ok
// SIG undefined FUN_14668f4a4(void)

void FUN_14668f4a4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14bb0a6e0;
  return;
}



// FUNCTION 14668f4d4 FUN_14668f4d4 body=490 status=ok
// SIG undefined FUN_14668f4d4(void)

longlong FUN_14668f4d4(void)

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
  if (DAT_14cc02150 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02150 = FUN_140002ddd(FUN_14668f6bf,uVar3,L"RigVMFunction_MathColorSub");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
    local_58[1] = L"FLinearColor";
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"FLinearColor";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02150;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathColorSub::Execute",&LAB_149103bc6,lVar4);
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
  return DAT_14cc02150;
}



// FUNCTION 14668f6bf FUN_14668f6bf body=47 status=ok
// SIG undefined FUN_14668f6bf(void)

longlong FUN_14668f6bf(void)

{
  if (DAT_14cc02148 == 0) {
    FUN_14086a14e(&DAT_14cc02148,&PTR_FUN_14bae2f58);
  }
  return DAT_14cc02148;
}



// FUNCTION 14668f6ee FUN_14668f6ee body=48 status=ok
// SIG undefined FUN_14668f6ee(void)

void FUN_14668f6ee(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14bb0a8c0;
  return;
}



// FUNCTION 14668f71e FUN_14668f71e body=490 status=ok
// SIG undefined FUN_14668f71e(void)

longlong FUN_14668f71e(void)

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
  if (DAT_14cc02168 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02168 = FUN_140002ddd(FUN_14668f909,uVar3,L"RigVMFunction_MathColorMul");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
    local_58[1] = L"FLinearColor";
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"FLinearColor";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02168;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathColorMul::Execute",&LAB_149103d1c,lVar4);
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
  return DAT_14cc02168;
}



// FUNCTION 14668f909 FUN_14668f909 body=47 status=ok
// SIG undefined FUN_14668f909(void)

longlong FUN_14668f909(void)

{
  if (DAT_14cc02160 == 0) {
    FUN_14086a14e(&DAT_14cc02160,&PTR_FUN_14bae3030);
  }
  return DAT_14cc02160;
}



// FUNCTION 14668f938 FUN_14668f938 body=48 status=ok
// SIG undefined FUN_14668f938(void)

void FUN_14668f938(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14bb0aaa0;
  return;
}



// FUNCTION 14668f968 FUN_14668f968 body=576 status=ok
// SIG undefined FUN_14668f968(void)

longlong FUN_14668f968(void)

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
  if (DAT_14cc02180 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02180 = FUN_140002ddd(FUN_14668fba9,uVar3,L"RigVMFunction_MathColorLerp");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
    local_58[1] = L"FLinearColor";
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
    local_58[lVar4 * 7] = &DAT_149ebbc16;
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
    local_58[lVar4 * 7 + 1] = L"FLinearColor";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02180;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathColorLerp::Execute",FUN_149103e72,lVar4);
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
  return DAT_14cc02180;
}



// FUNCTION 14668fba9 FUN_14668fba9 body=47 status=ok
// SIG undefined FUN_14668fba9(void)

longlong FUN_14668fba9(void)

{
  if (DAT_14cc02178 == 0) {
    FUN_14086a14e(&DAT_14cc02178,&PTR_FUN_14bae3230);
  }
  return DAT_14cc02178;
}



// FUNCTION 14668fbd8 FUN_14668fbd8 body=48 status=ok
// SIG undefined FUN_14668fbd8(void)

void FUN_14668fbd8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14bb0ac80;
  return;
}



// FUNCTION 14668fc08 FUN_14668fc08 body=55 status=ok
// SIG undefined FUN_14668fc08(void)

void FUN_14668fc08(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc02198 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc02198 = FUN_140002ddd(FUN_141906175,uVar1,L"RigVMFunction_MathDoubleBase");
  }
  return;
}



// FUNCTION 14668fc40 FUN_14668fc40 body=48 status=ok
// SIG undefined FUN_14668fc40(void)

void FUN_14668fc40(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14bb0ae60;
  return;
}



// FUNCTION 14668fc70 FUN_14668fc70 body=55 status=ok
// SIG undefined FUN_14668fc70(void)

void FUN_14668fc70(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc021b0 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc021b0 = FUN_140002ddd(FUN_14668fca7,uVar1,L"RigVMFunction_MathDoubleConstant");
  }
  return;
}



// FUNCTION 14668fca7 FUN_14668fca7 body=49 status=ok
// SIG undefined FUN_14668fca7(void)

longlong FUN_14668fca7(void)

{
  if (DAT_14cc021a8 == 0) {
    FUN_14086a14e(&DAT_14cc021a8,&PTR_FUN_14bae3540);
  }
  return DAT_14cc021a8;
}



// FUNCTION 14668fcd8 FUN_14668fcd8 body=48 status=ok
// SIG undefined FUN_14668fcd8(void)

void FUN_14668fcd8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb0b040;
  return;
}



// FUNCTION 14668fd08 FUN_14668fd08 body=55 status=ok
// SIG undefined FUN_14668fd08(void)

void FUN_14668fd08(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc021c8 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc021c8 = FUN_140002ddd(FUN_14668fd3f,uVar1,L"RigVMFunction_MathDoubleUnaryOp");
  }
  return;
}



// FUNCTION 14668fd3f FUN_14668fd3f body=49 status=ok
// SIG undefined FUN_14668fd3f(void)

longlong FUN_14668fd3f(void)

{
  if (DAT_14cc021c0 == 0) {
    FUN_14086a14e(&DAT_14cc021c0,&PTR_FUN_14bae3660);
  }
  return DAT_14cc021c0;
}



// FUNCTION 14668fd70 FUN_14668fd70 body=48 status=ok
// SIG undefined FUN_14668fd70(void)

void FUN_14668fd70(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb0b220;
  return;
}



// FUNCTION 14668fda0 FUN_14668fda0 body=55 status=ok
// SIG undefined FUN_14668fda0(void)

void FUN_14668fda0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc021e0 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc021e0 = FUN_140002ddd(FUN_14668fdd7,uVar1,L"RigVMFunction_MathDoubleBinaryOp");
  }
  return;
}



// FUNCTION 14668fdd7 FUN_14668fdd7 body=49 status=ok
// SIG undefined FUN_14668fdd7(void)

longlong FUN_14668fdd7(void)

{
  if (DAT_14cc021d8 == 0) {
    FUN_14086a14e(&DAT_14cc021d8,&PTR_FUN_14bae37d0);
  }
  return DAT_14cc021d8;
}



// FUNCTION 14668fe08 FUN_14668fe08 body=48 status=ok
// SIG undefined FUN_14668fe08(void)

void FUN_14668fe08(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14bb0b400;
  return;
}



// FUNCTION 14668fe38 FUN_14668fe38 body=55 status=ok
// SIG undefined FUN_14668fe38(void)

void FUN_14668fe38(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc021f8 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc021f8 = FUN_140002ddd(FUN_14668fe6f,uVar1,L"RigVMFunction_MathDoubleBinaryAggregateOp");
  }
  return;
}



// FUNCTION 14668fe6f FUN_14668fe6f body=49 status=ok
// SIG undefined FUN_14668fe6f(void)

longlong FUN_14668fe6f(void)

{
  if (DAT_14cc021f0 == 0) {
    FUN_14086a14e(&DAT_14cc021f0,&PTR_FUN_14bae3958);
  }
  return DAT_14cc021f0;
}



// FUNCTION 14668fea0 FUN_14668fea0 body=48 status=ok
// SIG undefined FUN_14668fea0(void)

void FUN_14668fea0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14bb0b5e0;
  return;
}



// FUNCTION 14668fed0 FUN_14668fed0 body=328 status=ok
// SIG undefined FUN_14668fed0(void)

longlong FUN_14668fed0(void)

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
  if (DAT_14cc02210 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02210 = FUN_140002ddd(FUN_146690019,uVar3,L"RigVMFunction_MathDoubleMake");
    local_58 = (undefined8 *)0x0;
    uStack_50 = 1;
    FUN_140c0351c(&local_58,0);
    *local_58 = L"Value";
    local_58[1] = L"double";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    FUN_14001a7b2();
    lVar2 = DAT_14cc02210;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathDoubleMake::Execute",&DAT_149104096,lVar2);
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
  return DAT_14cc02210;
}



// FUNCTION 146690019 FUN_146690019 body=47 status=ok
// SIG undefined FUN_146690019(void)

longlong FUN_146690019(void)

{
  if (DAT_14cc02208 == 0) {
    FUN_14086a14e(&DAT_14cc02208,&PTR_FUN_14bae3a78);
  }
  return DAT_14cc02208;
}



// FUNCTION 146690048 FUN_146690048 body=48 status=ok
// SIG undefined FUN_146690048(void)

void FUN_146690048(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb0b7c0;
  return;
}



// FUNCTION 146690078 FUN_146690078 body=328 status=ok
// SIG undefined FUN_146690078(void)

longlong FUN_146690078(void)

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
  if (DAT_14cc02228 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02228 = FUN_140002ddd(FUN_1466901c1,uVar3,L"RigVMFunction_MathDoubleConstPi");
    local_58 = (undefined8 *)0x0;
    uStack_50 = 1;
    FUN_140c0351c(&local_58,0);
    *local_58 = L"Value";
    local_58[1] = L"double";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    FUN_14001a7b2();
    lVar2 = DAT_14cc02228;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathDoubleConstPi::Execute",&LAB_149104166,lVar2);
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
  return DAT_14cc02228;
}



// FUNCTION 1466901c1 FUN_1466901c1 body=47 status=ok
// SIG undefined FUN_1466901c1(void)

longlong FUN_1466901c1(void)

{
  if (DAT_14cc02220 == 0) {
    FUN_14086a14e(&DAT_14cc02220,&PTR_FUN_14bae3b68);
  }
  return DAT_14cc02220;
}



// FUNCTION 1466901f0 FUN_1466901f0 body=48 status=ok
// SIG undefined FUN_1466901f0(void)

void FUN_1466901f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb0b9a0;
  return;
}



// FUNCTION 146690220 FUN_146690220 body=328 status=ok
// SIG undefined FUN_146690220(void)

longlong FUN_146690220(void)

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
  if (DAT_14cc02240 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02240 = FUN_140002ddd(FUN_146690369,uVar3,L"RigVMFunction_MathDoubleConstHalfPi");
    local_58 = (undefined8 *)0x0;
    uStack_50 = 1;
    FUN_140c0351c(&local_58,0);
    *local_58 = L"Value";
    local_58[1] = L"double";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    FUN_14001a7b2();
    lVar2 = DAT_14cc02240;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathDoubleConstHalfPi::Execute",&LAB_14910425a,
                  lVar2);
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
  return DAT_14cc02240;
}



// FUNCTION 146690369 FUN_146690369 body=47 status=ok
// SIG undefined FUN_146690369(void)

longlong FUN_146690369(void)

{
  if (DAT_14cc02238 == 0) {
    FUN_14086a14e(&DAT_14cc02238,&PTR_FUN_14bae3c68);
  }
  return DAT_14cc02238;
}



// FUNCTION 146690398 FUN_146690398 body=48 status=ok
// SIG undefined FUN_146690398(void)

void FUN_146690398(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb0bb80;
  return;
}



// FUNCTION 1466903c8 FUN_1466903c8 body=328 status=ok
// SIG undefined FUN_1466903c8(void)

longlong FUN_1466903c8(void)

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
  if (DAT_14cc02258 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02258 = FUN_140002ddd(FUN_146690511,uVar3,L"RigVMFunction_MathDoubleConstTwoPi");
    local_58 = (undefined8 *)0x0;
    uStack_50 = 1;
    FUN_140c0351c(&local_58,0);
    *local_58 = L"Value";
    local_58[1] = L"double";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    FUN_14001a7b2();
    lVar2 = DAT_14cc02258;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathDoubleConstTwoPi::Execute",&LAB_14910434e,
                  lVar2);
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
  return DAT_14cc02258;
}



// FUNCTION 146690511 FUN_146690511 body=47 status=ok
// SIG undefined FUN_146690511(void)

longlong FUN_146690511(void)

{
  if (DAT_14cc02250 == 0) {
    FUN_14086a14e(&DAT_14cc02250,&PTR_FUN_14bae3d68);
  }
  return DAT_14cc02250;
}



// FUNCTION 146690540 FUN_146690540 body=48 status=ok
// SIG undefined FUN_146690540(void)

void FUN_146690540(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb0bd60;
  return;
}



// FUNCTION 146690570 FUN_146690570 body=328 status=ok
// SIG undefined FUN_146690570(void)

longlong FUN_146690570(void)

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
  if (DAT_14cc02270 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02270 = FUN_140002ddd(FUN_1466906b9,uVar3,L"RigVMFunction_MathDoubleConstE");
    local_58 = (undefined8 *)0x0;
    uStack_50 = 1;
    FUN_140c0351c(&local_58,0);
    *local_58 = L"Value";
    local_58[1] = L"double";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    FUN_14001a7b2();
    lVar2 = DAT_14cc02270;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathDoubleConstE::Execute",&LAB_149104442,lVar2);
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
  return DAT_14cc02270;
}



// FUNCTION 1466906b9 FUN_1466906b9 body=47 status=ok
// SIG undefined FUN_1466906b9(void)

longlong FUN_1466906b9(void)

{
  if (DAT_14cc02268 == 0) {
    FUN_14086a14e(&DAT_14cc02268,&PTR_FUN_14bae3e50);
  }
  return DAT_14cc02268;
}



// FUNCTION 1466906e8 FUN_1466906e8 body=48 status=ok
// SIG undefined FUN_1466906e8(void)

void FUN_1466906e8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb0bf40;
  return;
}



// FUNCTION 146690718 FUN_146690718 body=490 status=ok
// SIG undefined FUN_146690718(void)

longlong FUN_146690718(void)

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
  if (DAT_14cc02288 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02288 = FUN_140002ddd(FUN_146690903,uVar3,L"RigVMFunction_MathDoubleAdd");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
    local_58[1] = L"double";
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
    local_58[lVar4 * 7 + 1] = L"double";
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
    local_58[lVar4 * 7 + 1] = L"double";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02288;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathDoubleAdd::Execute",&LAB_149104536,lVar4);
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
  return DAT_14cc02288;
}



// FUNCTION 146690903 FUN_146690903 body=47 status=ok
// SIG undefined FUN_146690903(void)

longlong FUN_146690903(void)

{
  if (DAT_14cc02280 == 0) {
    FUN_14086a14e(&DAT_14cc02280,&PTR_FUN_14bae3f28);
  }
  return DAT_14cc02280;
}



// FUNCTION 146690932 FUN_146690932 body=48 status=ok
// SIG undefined FUN_146690932(void)

void FUN_146690932(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14bb0c120;
  return;
}



// FUNCTION 146690962 FUN_146690962 body=490 status=ok
// SIG undefined FUN_146690962(void)

longlong FUN_146690962(void)

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
  if (DAT_14cc022a0 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc022a0 = FUN_140002ddd(FUN_146690b4d,uVar3,L"RigVMFunction_MathDoubleSub");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
    local_58[1] = L"double";
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
    local_58[lVar4 * 7 + 1] = L"double";
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
    local_58[lVar4 * 7 + 1] = L"double";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc022a0;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathDoubleSub::Execute",&LAB_149104634,lVar4);
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
  return DAT_14cc022a0;
}



// FUNCTION 146690b4d FUN_146690b4d body=47 status=ok
// SIG undefined FUN_146690b4d(void)

longlong FUN_146690b4d(void)

{
  if (DAT_14cc02298 == 0) {
    FUN_14086a14e(&DAT_14cc02298,&PTR_FUN_14bae4000);
  }
  return DAT_14cc02298;
}



// FUNCTION 146690b7c FUN_146690b7c body=48 status=ok
// SIG undefined FUN_146690b7c(void)

void FUN_146690b7c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14bb0c300;
  return;
}



// FUNCTION 146690bac FUN_146690bac body=490 status=ok
// SIG undefined FUN_146690bac(void)

longlong FUN_146690bac(void)

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
  if (DAT_14cc022b8 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc022b8 = FUN_140002ddd(FUN_146690d97,uVar3,L"RigVMFunction_MathDoubleMul");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
    local_58[1] = L"double";
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
    local_58[lVar4 * 7 + 1] = L"double";
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
    local_58[lVar4 * 7 + 1] = L"double";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc022b8;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathDoubleMul::Execute",&LAB_149104732,lVar4);
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
  return DAT_14cc022b8;
}



// FUNCTION 146690d97 FUN_146690d97 body=47 status=ok
// SIG undefined FUN_146690d97(void)

longlong FUN_146690d97(void)

{
  if (DAT_14cc022b0 == 0) {
    FUN_14086a14e(&DAT_14cc022b0,&PTR_FUN_14bae40d8);
  }
  return DAT_14cc022b0;
}



// FUNCTION 146690dc6 FUN_146690dc6 body=48 status=ok
// SIG undefined FUN_146690dc6(void)

void FUN_146690dc6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14bb0c4e0;
  return;
}



// FUNCTION 146690df6 FUN_146690df6 body=490 status=ok
// SIG undefined FUN_146690df6(void)

longlong FUN_146690df6(void)

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
  if (DAT_14cc022d0 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc022d0 = FUN_140002ddd(FUN_146690fe1,uVar3,L"RigVMFunction_MathDoubleDiv");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
    local_58[1] = L"double";
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
    local_58[lVar4 * 7 + 1] = L"double";
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
    local_58[lVar4 * 7 + 1] = L"double";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc022d0;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathDoubleDiv::Execute",&LAB_149104830,lVar4);
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
  return DAT_14cc022d0;
}



// FUNCTION 146690fe1 FUN_146690fe1 body=47 status=ok
// SIG undefined FUN_146690fe1(void)

longlong FUN_146690fe1(void)

{
  if (DAT_14cc022c8 == 0) {
    FUN_14086a14e(&DAT_14cc022c8,&PTR_FUN_14bae41b0);
  }
  return DAT_14cc022c8;
}



// FUNCTION 146691010 FUN_146691010 body=48 status=ok
// SIG undefined FUN_146691010(void)

void FUN_146691010(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14bb0c6c0;
  return;
}



// FUNCTION 146691040 FUN_146691040 body=490 status=ok
// SIG undefined FUN_146691040(void)

longlong FUN_146691040(void)

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
  if (DAT_14cc022e8 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc022e8 = FUN_140002ddd(FUN_14669122b,uVar3,L"RigVMFunction_MathDoubleMod");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
    local_58[1] = L"double";
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
    local_58[lVar4 * 7 + 1] = L"double";
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
    local_58[lVar4 * 7 + 1] = L"double";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc022e8;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathDoubleMod::Execute",FUN_149104962,lVar4);
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
  return DAT_14cc022e8;
}



// FUNCTION 14669122b FUN_14669122b body=47 status=ok
// SIG undefined FUN_14669122b(void)

longlong FUN_14669122b(void)

{
  if (DAT_14cc022e0 == 0) {
    FUN_14086a14e(&DAT_14cc022e0,&PTR_FUN_14bae4288);
  }
  return DAT_14cc022e0;
}



// FUNCTION 14669125a FUN_14669125a body=48 status=ok
// SIG undefined FUN_14669125a(void)

void FUN_14669125a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14bb0c8a0;
  return;
}



// FUNCTION 14669128a FUN_14669128a body=490 status=ok
// SIG undefined FUN_14669128a(void)

longlong FUN_14669128a(void)

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
  if (DAT_14cc02300 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02300 = FUN_140002ddd(FUN_146691475,uVar3,L"RigVMFunction_MathDoubleMin");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
    local_58[1] = L"double";
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
    local_58[lVar4 * 7 + 1] = L"double";
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
    local_58[lVar4 * 7 + 1] = L"double";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02300;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathDoubleMin::Execute",&LAB_149104ac2,lVar4);
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
  return DAT_14cc02300;
}



// FUNCTION 146691475 FUN_146691475 body=47 status=ok
// SIG undefined FUN_146691475(void)

longlong FUN_146691475(void)

{
  if (DAT_14cc022f8 == 0) {
    FUN_14086a14e(&DAT_14cc022f8,&PTR_FUN_14bae4360);
  }
  return DAT_14cc022f8;
}



// FUNCTION 1466914a4 FUN_1466914a4 body=48 status=ok
// SIG undefined FUN_1466914a4(void)

void FUN_1466914a4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14bb0ca80;
  return;
}



// FUNCTION 1466914d4 FUN_1466914d4 body=490 status=ok
// SIG undefined FUN_1466914d4(void)

longlong FUN_1466914d4(void)

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
  if (DAT_14cc02318 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02318 = FUN_140002ddd(FUN_1466916bf,uVar3,L"RigVMFunction_MathDoubleMax");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
    local_58[1] = L"double";
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
    local_58[lVar4 * 7 + 1] = L"double";
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
    local_58[lVar4 * 7 + 1] = L"double";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02318;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathDoubleMax::Execute",&LAB_149104bc0,lVar4);
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
  return DAT_14cc02318;
}



// FUNCTION 1466916bf FUN_1466916bf body=47 status=ok
// SIG undefined FUN_1466916bf(void)

longlong FUN_1466916bf(void)

{
  if (DAT_14cc02310 == 0) {
    FUN_14086a14e(&DAT_14cc02310,&PTR_FUN_14bae4438);
  }
  return DAT_14cc02310;
}



// FUNCTION 1466916ee FUN_1466916ee body=48 status=ok
// SIG undefined FUN_1466916ee(void)

void FUN_1466916ee(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14bb0cc60;
  return;
}



// FUNCTION 14669171e FUN_14669171e body=490 status=ok
// SIG undefined FUN_14669171e(void)

longlong FUN_14669171e(void)

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
  if (DAT_14cc02330 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02330 = FUN_140002ddd(FUN_146691909,uVar3,L"RigVMFunction_MathDoublePow");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
    local_58[1] = L"double";
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
    local_58[lVar4 * 7 + 1] = L"double";
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
    local_58[lVar4 * 7 + 1] = L"double";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02330;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathDoublePow::Execute",FUN_149104cbe,lVar4);
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
  return DAT_14cc02330;
}



// FUNCTION 146691909 FUN_146691909 body=47 status=ok
// SIG undefined FUN_146691909(void)

longlong FUN_146691909(void)

{
  if (DAT_14cc02328 == 0) {
    FUN_14086a14e(&DAT_14cc02328,&PTR_FUN_14bae4510);
  }
  return DAT_14cc02328;
}



// FUNCTION 146691938 FUN_146691938 body=48 status=ok
// SIG undefined FUN_146691938(void)

void FUN_146691938(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14bb0ce40;
  return;
}



// FUNCTION 146691968 FUN_146691968 body=408 status=ok
// SIG undefined FUN_146691968(void)

longlong FUN_146691968(void)

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
  if (DAT_14cc02348 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02348 = FUN_140002ddd(FUN_146691b01,uVar3,L"RigVMFunction_MathDoubleSqrt");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"double";
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"double";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02348;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathDoubleSqrt::Execute",FUN_149104dce,lVar4);
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
  return DAT_14cc02348;
}



// FUNCTION 146691b01 FUN_146691b01 body=47 status=ok
// SIG undefined FUN_146691b01(void)

longlong FUN_146691b01(void)

{
  if (DAT_14cc02340 == 0) {
    FUN_14086a14e(&DAT_14cc02340,&PTR_FUN_14bae45f0);
  }
  return DAT_14cc02340;
}



// FUNCTION 146691b30 FUN_146691b30 body=48 status=ok
// SIG undefined FUN_146691b30(void)

void FUN_146691b30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb0d020;
  return;
}



// FUNCTION 146691b60 FUN_146691b60 body=408 status=ok
// SIG undefined FUN_146691b60(void)

longlong FUN_146691b60(void)

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
  if (DAT_14cc02360 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02360 = FUN_140002ddd(FUN_146691cf9,uVar3,L"RigVMFunction_MathDoubleNegate");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"double";
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"double";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02360;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathDoubleNegate::Execute",&LAB_149104f10,lVar4);
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
  return DAT_14cc02360;
}



// FUNCTION 146691cf9 FUN_146691cf9 body=47 status=ok
// SIG undefined FUN_146691cf9(void)

longlong FUN_146691cf9(void)

{
  if (DAT_14cc02358 == 0) {
    FUN_14086a14e(&DAT_14cc02358,&PTR_FUN_14bae46d8);
  }
  return DAT_14cc02358;
}



// FUNCTION 146691d28 FUN_146691d28 body=48 status=ok
// SIG undefined FUN_146691d28(void)

void FUN_146691d28(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb0d200;
  return;
}



// FUNCTION 146691d58 FUN_146691d58 body=408 status=ok
// SIG undefined FUN_146691d58(void)

longlong FUN_146691d58(void)

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
  if (DAT_14cc02378 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02378 = FUN_140002ddd(FUN_146691ef1,uVar3,L"RigVMFunction_MathDoubleAbs");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"double";
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"double";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02378;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathDoubleAbs::Execute",&LAB_14910500c,lVar4);
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
  return DAT_14cc02378;
}



// FUNCTION 146691ef1 FUN_146691ef1 body=47 status=ok
// SIG undefined FUN_146691ef1(void)

longlong FUN_146691ef1(void)

{
  if (DAT_14cc02370 == 0) {
    FUN_14086a14e(&DAT_14cc02370,&PTR_FUN_14bae47b0);
  }
  return DAT_14cc02370;
}



// FUNCTION 146691f20 FUN_146691f20 body=48 status=ok
// SIG undefined FUN_146691f20(void)

void FUN_146691f20(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb0d3e0;
  return;
}



// FUNCTION 146691f50 FUN_146691f50 body=497 status=ok
// SIG undefined FUN_146691f50(void)

longlong FUN_146691f50(void)

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
  if (DAT_14cc02390 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02390 = FUN_140002ddd(FUN_146692142,uVar3,L"RigVMFunction_MathDoubleFloor");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"double";
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"double";
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
    local_58[lVar4 * 7] = &DAT_149e0151c;
    local_58[lVar4 * 7 + 1] = L"int32";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02390;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathDoubleFloor::Execute",&LAB_149105108,lVar4);
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
  return DAT_14cc02390;
}



// FUNCTION 146692142 FUN_146692142 body=47 status=ok
// SIG undefined FUN_146692142(void)

longlong FUN_146692142(void)

{
  if (DAT_14cc02388 == 0) {
    FUN_14086a14e(&DAT_14cc02388,&PTR_FUN_14bae4958);
  }
  return DAT_14cc02388;
}



// FUNCTION 146692172 FUN_146692172 body=48 status=ok
// SIG undefined FUN_146692172(void)

void FUN_146692172(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14bb0d5c0;
  return;
}



// FUNCTION 1466921a2 FUN_1466921a2 body=497 status=ok
// SIG undefined FUN_1466921a2(void)

longlong FUN_1466921a2(void)

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
  if (DAT_14cc023a8 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc023a8 = FUN_140002ddd(FUN_146692394,uVar3,L"RigVMFunction_MathDoubleCeil");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"double";
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"double";
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
    local_58[lVar4 * 7] = &DAT_149e0151c;
    local_58[lVar4 * 7 + 1] = L"int32";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc023a8;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathDoubleCeil::Execute",&LAB_149105216,lVar4);
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
  return DAT_14cc023a8;
}



// FUNCTION 146692394 FUN_146692394 body=47 status=ok
// SIG undefined FUN_146692394(void)

longlong FUN_146692394(void)

{
  if (DAT_14cc023a0 == 0) {
    FUN_14086a14e(&DAT_14cc023a0,&PTR_FUN_14bae4af8);
  }
  return DAT_14cc023a0;
}



// FUNCTION 1466923c4 FUN_1466923c4 body=48 status=ok
// SIG undefined FUN_1466923c4(void)

void FUN_1466923c4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14bb0d7a0;
  return;
}



// FUNCTION 1466923f4 FUN_1466923f4 body=497 status=ok
// SIG undefined FUN_1466923f4(void)

longlong FUN_1466923f4(void)

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
  if (DAT_14cc023c0 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc023c0 = FUN_140002ddd(FUN_1466925e6,uVar3,L"RigVMFunction_MathDoubleRound");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"double";
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"double";
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
    local_58[lVar4 * 7] = &DAT_149e0151c;
    local_58[lVar4 * 7 + 1] = L"int32";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc023c0;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathDoubleRound::Execute",&LAB_149105324,lVar4);
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
  return DAT_14cc023c0;
}



// FUNCTION 1466925e6 FUN_1466925e6 body=47 status=ok
// SIG undefined FUN_1466925e6(void)

longlong FUN_1466925e6(void)

{
  if (DAT_14cc023b8 == 0) {
    FUN_14086a14e(&DAT_14cc023b8,&PTR_FUN_14bae4ca8);
  }
  return DAT_14cc023b8;
}



// FUNCTION 146692616 FUN_146692616 body=48 status=ok
// SIG undefined FUN_146692616(void)

void FUN_146692616(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14bb0d980;
  return;
}



// FUNCTION 146692646 FUN_146692646 body=413 status=ok
// SIG undefined FUN_146692646(void)

longlong FUN_146692646(void)

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
  if (DAT_14cc023d8 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc023d8 = FUN_140002ddd(FUN_1466927e4,uVar3,L"RigVMFunction_MathDoubleToInt");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"double";
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"int32";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc023d8;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathDoubleToInt::Execute",&LAB_14910544a,lVar4);
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
  return DAT_14cc023d8;
}



// FUNCTION 1466927e4 FUN_1466927e4 body=47 status=ok
// SIG undefined FUN_1466927e4(void)

longlong FUN_1466927e4(void)

{
  if (DAT_14cc023d0 == 0) {
    FUN_14086a14e(&DAT_14cc023d0,&PTR_FUN_14bae4e10);
  }
  return DAT_14cc023d0;
}



// FUNCTION 146692814 FUN_146692814 body=48 status=ok
// SIG undefined FUN_146692814(void)

void FUN_146692814(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb0db60;
  return;
}



// FUNCTION 146692844 FUN_146692844 body=413 status=ok
// SIG undefined FUN_146692844(void)

longlong FUN_146692844(void)

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
  if (DAT_14cc023f0 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc023f0 = FUN_140002ddd(FUN_1466929e2,uVar3,L"RigVMFunction_MathDoubleToFloat");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"double";
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc023f0;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathDoubleToFloat::Execute",&LAB_14910555e,lVar4);
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
  return DAT_14cc023f0;
}



// FUNCTION 1466929e2 FUN_1466929e2 body=47 status=ok
// SIG undefined FUN_1466929e2(void)

longlong FUN_1466929e2(void)

{
  if (DAT_14cc023e8 == 0) {
    FUN_14086a14e(&DAT_14cc023e8,&PTR_FUN_14bae4f80);
  }
  return DAT_14cc023e8;
}



// FUNCTION 146692a12 FUN_146692a12 body=48 status=ok
// SIG undefined FUN_146692a12(void)

void FUN_146692a12(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb0dd40;
  return;
}



// FUNCTION 146692a42 FUN_146692a42 body=408 status=ok
// SIG undefined FUN_146692a42(void)

longlong FUN_146692a42(void)

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
  if (DAT_14cc02408 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02408 = FUN_140002ddd(FUN_146692bdb,uVar3,L"RigVMFunction_MathDoubleSign");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"double";
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"double";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02408;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathDoubleSign::Execute",&LAB_149105652,lVar4);
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
  return DAT_14cc02408;
}



// FUNCTION 146692bdb FUN_146692bdb body=47 status=ok
// SIG undefined FUN_146692bdb(void)

longlong FUN_146692bdb(void)

{
  if (DAT_14cc02400 == 0) {
    FUN_14086a14e(&DAT_14cc02400,&PTR_FUN_14bae5060);
  }
  return DAT_14cc02400;
}



// FUNCTION 146692c0a FUN_146692c0a body=48 status=ok
// SIG undefined FUN_146692c0a(void)

void FUN_146692c0a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb0df20;
  return;
}



// FUNCTION 146692c3a FUN_146692c3a body=569 status=ok
// SIG undefined FUN_146692c3a(void)

longlong FUN_146692c3a(void)

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
  if (DAT_14cc02420 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02420 = FUN_140002ddd(FUN_146692e74,uVar3,L"RigVMFunction_MathDoubleClamp");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"double";
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
    local_58[lVar4 * 7] = L"Minimum";
    local_58[lVar4 * 7 + 1] = L"double";
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
    local_58[lVar4 * 7] = L"Maximum";
    local_58[lVar4 * 7 + 1] = L"double";
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
    local_58[lVar4 * 7 + 1] = L"double";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02420;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathDoubleClamp::Execute",&LAB_149105774,lVar4);
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
  return DAT_14cc02420;
}



// FUNCTION 146692e74 FUN_146692e74 body=47 status=ok
// SIG undefined FUN_146692e74(void)

longlong FUN_146692e74(void)

{
  if (DAT_14cc02418 == 0) {
    FUN_14086a14e(&DAT_14cc02418,&PTR_FUN_14bae5250);
  }
  return DAT_14cc02418;
}



// FUNCTION 146692ea4 FUN_146692ea4 body=48 status=ok
// SIG undefined FUN_146692ea4(void)

void FUN_146692ea4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14bb0e100;
  return;
}



// FUNCTION 146692ed4 FUN_146692ed4 body=569 status=ok
// SIG undefined FUN_146692ed4(void)

longlong FUN_146692ed4(void)

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
  if (DAT_14cc02438 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02438 = FUN_140002ddd(FUN_14669310e,uVar3,L"RigVMFunction_MathDoubleLerp");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
    local_58[1] = L"double";
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
    local_58[lVar4 * 7 + 1] = L"double";
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
    local_58[lVar4 * 7] = &DAT_149ebbc16;
    local_58[lVar4 * 7 + 1] = L"double";
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
    local_58[lVar4 * 7 + 1] = L"double";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02438;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathDoubleLerp::Execute",&LAB_14910587e,lVar4);
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
  return DAT_14cc02438;
}



// FUNCTION 14669310e FUN_14669310e body=47 status=ok
// SIG undefined FUN_14669310e(void)

longlong FUN_14669310e(void)

{
  if (DAT_14cc02430 == 0) {
    FUN_14086a14e(&DAT_14cc02430,&PTR_FUN_14bae5430);
  }
  return DAT_14cc02430;
}



// FUNCTION 14669313e FUN_14669313e body=48 status=ok
// SIG undefined FUN_14669313e(void)

void FUN_14669313e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14bb0e2e0;
  return;
}



// FUNCTION 14669316e FUN_14669316e body=810 status=ok
// SIG undefined FUN_14669316e(void)

longlong FUN_14669316e(void)

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
  if (DAT_14cc02450 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02450 = FUN_140002ddd(FUN_146693499,uVar3,L"RigVMFunction_MathDoubleRemap");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"double";
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
    local_58[lVar4 * 7] = L"SourceMinimum";
    local_58[lVar4 * 7 + 1] = L"double";
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
    local_58[lVar4 * 7 + 1] = L"double";
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
    local_58[lVar4 * 7 + 1] = L"double";
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
    local_58[lVar4 * 7 + 1] = L"double";
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
    local_58[lVar4 * 7] = L"bClamp";
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"double";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02450;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathDoubleRemap::Execute",&LAB_149105998,lVar4);
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
  return DAT_14cc02450;
}



// FUNCTION 146693499 FUN_146693499 body=47 status=ok
// SIG undefined FUN_146693499(void)

longlong FUN_146693499(void)

{
  if (DAT_14cc02448 == 0) {
    FUN_14086a14e(&DAT_14cc02448,&PTR_FUN_14bae56f8);
  }
  return DAT_14cc02448;
}



// FUNCTION 1466934c8 FUN_1466934c8 body=48 status=ok
// SIG undefined FUN_1466934c8(void)

void FUN_1466934c8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14bb0e4c0;
  return;
}



// FUNCTION 1466934f8 FUN_1466934f8 body=497 status=ok
// SIG undefined FUN_1466934f8(void)

longlong FUN_1466934f8(void)

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
  if (DAT_14cc02468 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02468 = FUN_140002ddd(FUN_1466936ea,uVar3,L"RigVMFunction_MathDoubleEquals");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
    local_58[1] = L"double";
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
    local_58[lVar4 * 7 + 1] = L"double";
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
    local_58[lVar4 * 7 + 1] = L"bool";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02468;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathDoubleEquals::Execute",&LAB_149105b62,lVar4);
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
  return DAT_14cc02468;
}



// FUNCTION 1466936ea FUN_1466936ea body=47 status=ok
// SIG undefined FUN_1466936ea(void)

longlong FUN_1466936ea(void)

{
  if (DAT_14cc02460 == 0) {
    FUN_14086a14e(&DAT_14cc02460,&PTR_FUN_14bae58a8);
  }
  return DAT_14cc02460;
}



// FUNCTION 14669371a FUN_14669371a body=48 status=ok
// SIG undefined FUN_14669371a(void)

void FUN_14669371a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14bb0e6a0;
  return;
}



// FUNCTION 14669374a FUN_14669374a body=497 status=ok
// SIG undefined FUN_14669374a(void)

longlong FUN_14669374a(void)

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
  if (DAT_14cc02480 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02480 = FUN_140002ddd(FUN_14669393c,uVar3,L"RigVMFunction_MathDoubleNotEquals");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
    local_58[1] = L"double";
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
    local_58[lVar4 * 7 + 1] = L"double";
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
    local_58[lVar4 * 7 + 1] = L"bool";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02480;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathDoubleNotEquals::Execute",&LAB_149105c72,lVar4
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
  return DAT_14cc02480;
}



// FUNCTION 14669393c FUN_14669393c body=47 status=ok
// SIG undefined FUN_14669393c(void)

longlong FUN_14669393c(void)

{
  if (DAT_14cc02478 == 0) {
    FUN_14086a14e(&DAT_14cc02478,&PTR_FUN_14bae5a70);
  }
  return DAT_14cc02478;
}



// FUNCTION 14669396c FUN_14669396c body=48 status=ok
// SIG undefined FUN_14669396c(void)

void FUN_14669396c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14bb0e880;
  return;
}



// FUNCTION 14669399c FUN_14669399c body=497 status=ok
// SIG undefined FUN_14669399c(void)

longlong FUN_14669399c(void)

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
  if (DAT_14cc02498 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02498 = FUN_140002ddd(FUN_146693b8e,uVar3,L"RigVMFunction_MathDoubleGreater");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
    local_58[1] = L"double";
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
    local_58[lVar4 * 7 + 1] = L"double";
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
    local_58[lVar4 * 7 + 1] = L"bool";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02498;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathDoubleGreater::Execute",&LAB_149105d82,lVar4);
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
  return DAT_14cc02498;
}



// FUNCTION 146693b8e FUN_146693b8e body=47 status=ok
// SIG undefined FUN_146693b8e(void)

longlong FUN_146693b8e(void)

{
  if (DAT_14cc02490 == 0) {
    FUN_14086a14e(&DAT_14cc02490,&PTR_FUN_14bae5c28);
  }
  return DAT_14cc02490;
}



// FUNCTION 146693bbe FUN_146693bbe body=48 status=ok
// SIG undefined FUN_146693bbe(void)

void FUN_146693bbe(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14bb0ea60;
  return;
}



// FUNCTION 146693bee FUN_146693bee body=497 status=ok
// SIG undefined FUN_146693bee(void)

longlong FUN_146693bee(void)

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
  if (DAT_14cc024b0 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc024b0 = FUN_140002ddd(FUN_146693de0,uVar3,L"RigVMFunction_MathDoubleLess");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
    local_58[1] = L"double";
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
    local_58[lVar4 * 7 + 1] = L"double";
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
    local_58[lVar4 * 7 + 1] = L"bool";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc024b0;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathDoubleLess::Execute",&LAB_149105e82,lVar4);
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
  return DAT_14cc024b0;
}



// FUNCTION 146693de0 FUN_146693de0 body=47 status=ok
// SIG undefined FUN_146693de0(void)

longlong FUN_146693de0(void)

{
  if (DAT_14cc024a8 == 0) {
    FUN_14086a14e(&DAT_14cc024a8,&PTR_FUN_14bae5dd8);
  }
  return DAT_14cc024a8;
}



// FUNCTION 146693e10 FUN_146693e10 body=48 status=ok
// SIG undefined FUN_146693e10(void)

void FUN_146693e10(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14bb0ec40;
  return;
}



// FUNCTION 146693e40 FUN_146693e40 body=497 status=ok
// SIG undefined FUN_146693e40(void)

longlong FUN_146693e40(void)

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
  if (DAT_14cc024c8 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc024c8 = FUN_140002ddd(FUN_146694032,uVar3,L"RigVMFunction_MathDoubleGreaterEqual");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
    local_58[1] = L"double";
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
    local_58[lVar4 * 7 + 1] = L"double";
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
    local_58[lVar4 * 7 + 1] = L"bool";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc024c8;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathDoubleGreaterEqual::Execute",&LAB_149105f82,
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
  return DAT_14cc024c8;
}



// FUNCTION 146694032 FUN_146694032 body=47 status=ok
// SIG undefined FUN_146694032(void)

longlong FUN_146694032(void)

{
  if (DAT_14cc024c0 == 0) {
    FUN_14086a14e(&DAT_14cc024c0,&PTR_FUN_14bae5fb0);
  }
  return DAT_14cc024c0;
}



// FUNCTION 146694062 FUN_146694062 body=48 status=ok
// SIG undefined FUN_146694062(void)

void FUN_146694062(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14bb0ee20;
  return;
}



// FUNCTION 146694092 FUN_146694092 body=497 status=ok
// SIG undefined FUN_146694092(void)

longlong FUN_146694092(void)

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
  if (DAT_14cc024e0 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc024e0 = FUN_140002ddd(FUN_146694284,uVar3,L"RigVMFunction_MathDoubleLessEqual");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
    local_58[1] = L"double";
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
    local_58[lVar4 * 7 + 1] = L"double";
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
    local_58[lVar4 * 7 + 1] = L"bool";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc024e0;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathDoubleLessEqual::Execute",&LAB_149106082,lVar4
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
  return DAT_14cc024e0;
}



// FUNCTION 146694284 FUN_146694284 body=47 status=ok
// SIG undefined FUN_146694284(void)

longlong FUN_146694284(void)

{
  if (DAT_14cc024d8 == 0) {
    FUN_14086a14e(&DAT_14cc024d8,&PTR_FUN_14bae6180);
  }
  return DAT_14cc024d8;
}



// FUNCTION 1466942b4 FUN_1466942b4 body=48 status=ok
// SIG undefined FUN_1466942b4(void)

void FUN_1466942b4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14bb0f000;
  return;
}



// FUNCTION 1466942e4 FUN_1466942e4 body=497 status=ok
// SIG undefined FUN_1466942e4(void)

longlong FUN_1466942e4(void)

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
  if (DAT_14cc024f8 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc024f8 = FUN_140002ddd(FUN_1466944d6,uVar3,L"RigVMFunction_MathDoubleIsNearlyZero");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"double";
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
    local_58[lVar4 * 7] = L"Tolerance";
    local_58[lVar4 * 7 + 1] = L"double";
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
    local_58[lVar4 * 7 + 1] = L"bool";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc024f8;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathDoubleIsNearlyZero::Execute",&LAB_149106182,
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
  return DAT_14cc024f8;
}



// FUNCTION 1466944d6 FUN_1466944d6 body=47 status=ok
// SIG undefined FUN_1466944d6(void)

longlong FUN_1466944d6(void)

{
  if (DAT_14cc024f0 == 0) {
    FUN_14086a14e(&DAT_14cc024f0,&PTR_FUN_14bae6370);
  }
  return DAT_14cc024f0;
}



// FUNCTION 146694506 FUN_146694506 body=48 status=ok
// SIG undefined FUN_146694506(void)

void FUN_146694506(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14bb0f1e0;
  return;
}



// FUNCTION 146694536 FUN_146694536 body=576 status=ok
// SIG undefined FUN_146694536(void)

longlong FUN_146694536(void)

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
  if (DAT_14cc02510 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02510 = FUN_140002ddd(FUN_146694777,uVar3,L"RigVMFunction_MathDoubleIsNearlyEqual");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
    local_58[1] = L"double";
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
    local_58[lVar4 * 7 + 1] = L"double";
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
    local_58[lVar4 * 7] = L"Tolerance";
    local_58[lVar4 * 7 + 1] = L"double";
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
    local_58[lVar4 * 7 + 1] = L"bool";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02510;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathDoubleIsNearlyEqual::Execute",&LAB_1491062aa,
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
  return DAT_14cc02510;
}



// FUNCTION 146694777 FUN_146694777 body=47 status=ok
// SIG undefined FUN_146694777(void)

longlong FUN_146694777(void)

{
  if (DAT_14cc02508 == 0) {
    FUN_14086a14e(&DAT_14cc02508,&PTR_FUN_14bae6588);
  }
  return DAT_14cc02508;
}



// FUNCTION 1466947a6 FUN_1466947a6 body=48 status=ok
// SIG undefined FUN_1466947a6(void)

void FUN_1466947a6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14bb0f3c0;
  return;
}



// FUNCTION 1466947d6 FUN_1466947d6 body=408 status=ok
// SIG undefined FUN_1466947d6(void)

longlong FUN_1466947d6(void)

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
  if (DAT_14cc02528 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02528 = FUN_140002ddd(FUN_14669496f,uVar3,L"RigVMFunction_MathDoubleDeg");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"double";
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"double";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02528;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathDoubleDeg::Execute",&LAB_1491063e0,lVar4);
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
  return DAT_14cc02528;
}



// FUNCTION 14669496f FUN_14669496f body=47 status=ok
// SIG undefined FUN_14669496f(void)

longlong FUN_14669496f(void)

{
  if (DAT_14cc02520 == 0) {
    FUN_14086a14e(&DAT_14cc02520,&PTR_FUN_14bae6660);
  }
  return DAT_14cc02520;
}



// FUNCTION 14669499e FUN_14669499e body=48 status=ok
// SIG undefined FUN_14669499e(void)

void FUN_14669499e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb0f5a0;
  return;
}



// FUNCTION 1466949ce FUN_1466949ce body=408 status=ok
// SIG undefined FUN_1466949ce(void)

longlong FUN_1466949ce(void)

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
  if (DAT_14cc02540 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02540 = FUN_140002ddd(FUN_146694b67,uVar3,L"RigVMFunction_MathDoubleRad");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"double";
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"double";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02540;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathDoubleRad::Execute",&LAB_1491064e0,lVar4);
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
  return DAT_14cc02540;
}



// FUNCTION 146694b67 FUN_146694b67 body=47 status=ok
// SIG undefined FUN_146694b67(void)

longlong FUN_146694b67(void)

{
  if (DAT_14cc02538 == 0) {
    FUN_14086a14e(&DAT_14cc02538,&PTR_FUN_14bae6738);
  }
  return DAT_14cc02538;
}



// FUNCTION 146694b96 FUN_146694b96 body=48 status=ok
// SIG undefined FUN_146694b96(void)

void FUN_146694b96(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb0f780;
  return;
}



// FUNCTION 146694bc6 FUN_146694bc6 body=408 status=ok
// SIG undefined FUN_146694bc6(void)

longlong FUN_146694bc6(void)

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
  if (DAT_14cc02558 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02558 = FUN_140002ddd(FUN_146694d5f,uVar3,L"RigVMFunction_MathDoubleSin");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"double";
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"double";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02558;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathDoubleSin::Execute",FUN_1491065e0,lVar4);
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
  return DAT_14cc02558;
}



// FUNCTION 146694d5f FUN_146694d5f body=47 status=ok
// SIG undefined FUN_146694d5f(void)

longlong FUN_146694d5f(void)

{
  if (DAT_14cc02550 == 0) {
    FUN_14086a14e(&DAT_14cc02550,&PTR_FUN_14bae6810);
  }
  return DAT_14cc02550;
}



// FUNCTION 146694d8e FUN_146694d8e body=48 status=ok
// SIG undefined FUN_146694d8e(void)

void FUN_146694d8e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb0f960;
  return;
}



// FUNCTION 146694dbe FUN_146694dbe body=408 status=ok
// SIG undefined FUN_146694dbe(void)

longlong FUN_146694dbe(void)

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
  if (DAT_14cc02570 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02570 = FUN_140002ddd(FUN_146694f57,uVar3,L"RigVMFunction_MathDoubleCos");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"double";
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"double";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02570;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathDoubleCos::Execute",FUN_1491066e4,lVar4);
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
  return DAT_14cc02570;
}



// FUNCTION 146694f57 FUN_146694f57 body=47 status=ok
// SIG undefined FUN_146694f57(void)

longlong FUN_146694f57(void)

{
  if (DAT_14cc02568 == 0) {
    FUN_14086a14e(&DAT_14cc02568,&PTR_FUN_14bae68e8);
  }
  return DAT_14cc02568;
}



// FUNCTION 146694f86 FUN_146694f86 body=48 status=ok
// SIG undefined FUN_146694f86(void)

void FUN_146694f86(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb0fb40;
  return;
}



// FUNCTION 146694fb6 FUN_146694fb6 body=408 status=ok
// SIG undefined FUN_146694fb6(void)

longlong FUN_146694fb6(void)

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
  if (DAT_14cc02588 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02588 = FUN_140002ddd(FUN_14669514f,uVar3,L"RigVMFunction_MathDoubleTan");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"double";
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"double";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02588;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathDoubleTan::Execute",FUN_1491067e8,lVar4);
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
  return DAT_14cc02588;
}


