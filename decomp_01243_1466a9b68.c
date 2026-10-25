// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1466a9b68 FUN_1466a9b68 body=583 status=ok
// SIG undefined FUN_1466a9b68(void)

longlong FUN_1466a9b68(void)

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
  if (DAT_14cc039e8 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc039e8 = FUN_140002ddd(FUN_1466a9db0,uVar3,L"RigVMFunction_MathTransformMake");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"Translation";
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
    local_58[lVar4 * 7] = L"Rotation";
    local_58[lVar4 * 7 + 1] = L"FQuat";
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
    local_58[lVar4 * 7 + 1] = L"FTransform";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc039e8;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathTransformMake::Execute",&LAB_149117952,lVar4);
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
  return DAT_14cc039e8;
}



// FUNCTION 1466a9db0 FUN_1466a9db0 body=47 status=ok
// SIG undefined FUN_1466a9db0(void)

longlong FUN_1466a9db0(void)

{
  if (DAT_14cc039e0 == 0) {
    FUN_14086a14e(&DAT_14cc039e0,&PTR_FUN_14baf8770);
  }
  return DAT_14cc039e0;
}



// FUNCTION 1466a9de0 FUN_1466a9de0 body=48 status=ok
// SIG undefined FUN_1466a9de0(void)

void FUN_1466a9de0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000000c0;
  *puVar1 = &PTR_FUN_14bb233c0;
  return;
}



// FUNCTION 1466a9e10 FUN_1466a9e10 body=413 status=ok
// SIG undefined FUN_1466a9e10(void)

longlong FUN_1466a9e10(void)

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
  if (DAT_14cc03a00 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03a00 =
         FUN_140002ddd(FUN_1466a9fae,uVar3,L"RigVMFunction_MathTransformFromEulerTransform");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = L"EulerTransform";
    local_58[1] = L"FEulerTransform";
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
    local_58[lVar4 * 7 + 1] = L"FTransform";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03a00;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathTransformFromEulerTransform::Execute",
                  FUN_149117aa6,lVar4);
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
  return DAT_14cc03a00;
}



// FUNCTION 1466a9fae FUN_1466a9fae body=47 status=ok
// SIG undefined FUN_1466a9fae(void)

longlong FUN_1466a9fae(void)

{
  if (DAT_14cc039f8 == 0) {
    FUN_14086a14e(&DAT_14cc039f8,&PTR_FUN_14baf8960);
  }
  return DAT_14cc039f8;
}



// FUNCTION 1466a9fde FUN_1466a9fde body=48 status=ok
// SIG undefined FUN_1466a9fde(void)

void FUN_1466a9fde(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000000b0;
  *puVar1 = &PTR_FUN_14bb235a0;
  return;
}



// FUNCTION 1466aa00e FUN_1466aa00e body=413 status=ok
// SIG undefined FUN_1466aa00e(void)

longlong FUN_1466aa00e(void)

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
  if (DAT_14cc03a18 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03a18 =
         FUN_140002ddd(FUN_1466aa1ac,uVar3,L"RigVMFunction_MathTransformFromEulerTransformV2");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"FEulerTransform";
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
    local_58[lVar4 * 7 + 1] = L"FTransform";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03a18;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathTransformFromEulerTransformV2::Execute",
                  FUN_149117c46,lVar4);
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
  return DAT_14cc03a18;
}



// FUNCTION 1466aa1ac FUN_1466aa1ac body=47 status=ok
// SIG undefined FUN_1466aa1ac(void)

longlong FUN_1466aa1ac(void)

{
  if (DAT_14cc03a10 == 0) {
    FUN_14086a14e(&DAT_14cc03a10,&PTR_FUN_14baf8b30);
  }
  return DAT_14cc03a10;
}



// FUNCTION 1466aa1dc FUN_1466aa1dc body=48 status=ok
// SIG undefined FUN_1466aa1dc(void)

void FUN_1466aa1dc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000000b0;
  *puVar1 = &PTR_FUN_14bb23780;
  return;
}



// FUNCTION 1466aa20c FUN_1466aa20c body=413 status=ok
// SIG undefined FUN_1466aa20c(void)

longlong FUN_1466aa20c(void)

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
  if (DAT_14cc03a30 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03a30 =
         FUN_140002ddd(FUN_1466aa3aa,uVar3,L"RigVMFunction_MathTransformToEulerTransform");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"FTransform";
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
    local_58[lVar4 * 7 + 1] = L"FEulerTransform";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03a30;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathTransformToEulerTransform::Execute",
                  FUN_149117de6,lVar4);
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
  return DAT_14cc03a30;
}



// FUNCTION 1466aa3aa FUN_1466aa3aa body=47 status=ok
// SIG undefined FUN_1466aa3aa(void)

longlong FUN_1466aa3aa(void)

{
  if (DAT_14cc03a28 == 0) {
    FUN_14086a14e(&DAT_14cc03a28,&PTR_FUN_14baf8cf0);
  }
  return DAT_14cc03a28;
}



// FUNCTION 1466aa3da FUN_1466aa3da body=48 status=ok
// SIG undefined FUN_1466aa3da(void)

void FUN_1466aa3da(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000000c0;
  *puVar1 = &PTR_FUN_14bb238e0;
  return;
}



// FUNCTION 1466aa40a FUN_1466aa40a body=576 status=ok
// SIG undefined FUN_1466aa40a(void)

longlong FUN_1466aa40a(void)

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
  if (DAT_14cc03a48 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03a48 = FUN_140002ddd(FUN_1466aa64b,uVar3,L"RigVMFunction_MathTransformToVectors");
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
    local_58[lVar4 * 7] = L"Forward";
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
    local_58[lVar4 * 7] = L"Right";
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
    local_58[lVar4 * 7] = &DAT_149ebe6fc;
    local_58[lVar4 * 7 + 1] = L"FVector";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03a48;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathTransformToVectors::Execute",&LAB_149117fb4,
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
  return DAT_14cc03a48;
}



// FUNCTION 1466aa64b FUN_1466aa64b body=47 status=ok
// SIG undefined FUN_1466aa64b(void)

longlong FUN_1466aa64b(void)

{
  if (DAT_14cc03a40 == 0) {
    FUN_14086a14e(&DAT_14cc03a40,&PTR_FUN_14baf8f18);
  }
  return DAT_14cc03a40;
}



// FUNCTION 1466aa67a FUN_1466aa67a body=48 status=ok
// SIG undefined FUN_1466aa67a(void)

void FUN_1466aa67a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000000c0;
  *puVar1 = &PTR_FUN_14bb23ac0;
  return;
}



// FUNCTION 1466aa6aa FUN_1466aa6aa body=490 status=ok
// SIG undefined FUN_1466aa6aa(void)

longlong FUN_1466aa6aa(void)

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
  if (DAT_14cc03a60 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03a60 = FUN_140002ddd(FUN_1466aa895,uVar3,L"RigVMFunction_MathTransformMul");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
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
    local_58[lVar4 * 7] = &DAT_149e060e8;
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
    local_58[lVar4 * 7 + 1] = L"FTransform";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03a60;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathTransformMul::Execute",&LAB_1491183f0,lVar4);
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
  return DAT_14cc03a60;
}



// FUNCTION 1466aa895 FUN_1466aa895 body=47 status=ok
// SIG undefined FUN_1466aa895(void)

longlong FUN_1466aa895(void)

{
  if (DAT_14cc03a58 == 0) {
    FUN_14086a14e(&DAT_14cc03a58,&PTR_FUN_14baf9000);
  }
  return DAT_14cc03a58;
}



// FUNCTION 1466aa8c4 FUN_1466aa8c4 body=48 status=ok
// SIG undefined FUN_1466aa8c4(void)

void FUN_1466aa8c4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000130;
  *puVar1 = &PTR_FUN_14bb23ca0;
  return;
}



// FUNCTION 1466aa8f4 FUN_1466aa8f4 body=490 status=ok
// SIG undefined FUN_1466aa8f4(void)

longlong FUN_1466aa8f4(void)

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
  if (DAT_14cc03a78 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03a78 = FUN_140002ddd(FUN_1466aaadf,uVar3,L"RigVMFunction_MathTransformMakeRelative");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"Global";
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
    local_58[lVar4 * 7] = L"Parent";
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
    local_58[lVar4 * 7] = L"Local";
    local_58[lVar4 * 7 + 1] = L"FTransform";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03a78;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathTransformMakeRelative::Execute",FUN_14190626a,
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
  return DAT_14cc03a78;
}



// FUNCTION 1466aaadf FUN_1466aaadf body=47 status=ok
// SIG undefined FUN_1466aaadf(void)

longlong FUN_1466aaadf(void)

{
  if (DAT_14cc03a70 == 0) {
    FUN_14086a14e(&DAT_14cc03a70,&PTR_FUN_14baf91f0);
  }
  return DAT_14cc03a70;
}



// FUNCTION 1466aab0e FUN_1466aab0e body=48 status=ok
// SIG undefined FUN_1466aab0e(void)

void FUN_1466aab0e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000130;
  *puVar1 = &PTR_FUN_14bb23e80;
  return;
}



// FUNCTION 1466aab3e FUN_1466aab3e body=490 status=ok
// SIG undefined FUN_1466aab3e(void)

longlong FUN_1466aab3e(void)

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
  if (DAT_14cc03a90 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03a90 = FUN_140002ddd(FUN_1466aad29,uVar3,L"RigVMFunction_MathTransformMakeAbsolute");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"Local";
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
    local_58[lVar4 * 7] = L"Parent";
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
    local_58[lVar4 * 7] = L"Global";
    local_58[lVar4 * 7 + 1] = L"FTransform";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03a90;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathTransformMakeAbsolute::Execute",&LAB_149118df4
                  ,lVar4);
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
  return DAT_14cc03a90;
}



// FUNCTION 1466aad29 FUN_1466aad29 body=47 status=ok
// SIG undefined FUN_1466aad29(void)

longlong FUN_1466aad29(void)

{
  if (DAT_14cc03a88 == 0) {
    FUN_14086a14e(&DAT_14cc03a88,&PTR_FUN_14baf93e0);
  }
  return DAT_14cc03a88;
}



// FUNCTION 1466aad58 FUN_1466aad58 body=48 status=ok
// SIG undefined FUN_1466aad58(void)

void FUN_1466aad58(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000130;
  *puVar1 = &PTR_FUN_14bb24060;
  return;
}



// FUNCTION 1466aad88 FUN_1466aad88 body=588 status=ok
// SIG undefined FUN_1466aad88(void)

longlong FUN_1466aad88(void)

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
  if (DAT_14cc03aa8 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03aa8 = FUN_140002ddd(FUN_1466aafd5,uVar3,L"RigVMFunction_MathTransformAccumulateArray")
    ;
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
    local_58[lVar4 * 7] = L"TargetSpace";
    local_58[lVar4 * 7 + 1] = L"ERigVMTransformSpace";
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
    local_58[lVar4 * 7] = L"Root";
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
    local_58[lVar4 * 7] = L"ParentIndices";
    local_58[lVar4 * 7 + 1] = L"TArray<int32>";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03aa8;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathTransformAccumulateArray::Execute",
                  FUN_149118ef2,lVar4);
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
  return DAT_14cc03aa8;
}



// FUNCTION 1466aafd5 FUN_1466aafd5 body=47 status=ok
// SIG undefined FUN_1466aafd5(void)

longlong FUN_1466aafd5(void)

{
  if (DAT_14cc03aa0 == 0) {
    FUN_14086a14e(&DAT_14cc03aa0,&PTR_FUN_14baf9718);
  }
  return DAT_14cc03aa0;
}



// FUNCTION 1466ab004 FUN_1466ab004 body=48 status=ok
// SIG undefined FUN_1466ab004(void)

void FUN_1466ab004(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000001b0;
  *puVar1 = &PTR_FUN_14bb24240;
  return;
}



// FUNCTION 1466ab034 FUN_1466ab034 body=408 status=ok
// SIG undefined FUN_1466ab034(void)

longlong FUN_1466ab034(void)

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
  if (DAT_14cc03ac0 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03ac0 = FUN_140002ddd(FUN_1466ab1cd,uVar3,L"RigVMFunction_MathTransformInverse");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"FTransform";
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
    local_58[lVar4 * 7 + 1] = L"FTransform";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03ac0;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathTransformInverse::Execute",&LAB_149119f4a,
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
  return DAT_14cc03ac0;
}



// FUNCTION 1466ab1cd FUN_1466ab1cd body=47 status=ok
// SIG undefined FUN_1466ab1cd(void)

longlong FUN_1466ab1cd(void)

{
  if (DAT_14cc03ab8 == 0) {
    FUN_14086a14e(&DAT_14cc03ab8,&PTR_FUN_14baf9818);
  }
  return DAT_14cc03ab8;
}



// FUNCTION 1466ab1fc FUN_1466ab1fc body=48 status=ok
// SIG undefined FUN_1466ab1fc(void)

void FUN_1466ab1fc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000000d0;
  *puVar1 = &PTR_FUN_14bb24420;
  return;
}



// FUNCTION 1466ab22c FUN_1466ab22c body=576 status=ok
// SIG undefined FUN_1466ab22c(void)

longlong FUN_1466ab22c(void)

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
  if (DAT_14cc03ad8 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03ad8 = FUN_140002ddd(FUN_1466ab46d,uVar3,L"RigVMFunction_MathTransformLerp");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
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
    local_58[lVar4 * 7] = &DAT_149e060e8;
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
    local_58[lVar4 * 7 + 1] = L"FTransform";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03ad8;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathTransformLerp::Execute",FUN_14911a296,lVar4);
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
  return DAT_14cc03ad8;
}



// FUNCTION 1466ab46d FUN_1466ab46d body=47 status=ok
// SIG undefined FUN_1466ab46d(void)

longlong FUN_1466ab46d(void)

{
  if (DAT_14cc03ad0 == 0) {
    FUN_14086a14e(&DAT_14cc03ad0,&PTR_FUN_14baf9a20);
  }
  return DAT_14cc03ad0;
}



// FUNCTION 1466ab49c FUN_1466ab49c body=48 status=ok
// SIG undefined FUN_1466ab49c(void)

void FUN_1466ab49c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000140;
  *puVar1 = &PTR_FUN_14bb24600;
  return;
}



// FUNCTION 1466ab4cc FUN_1466ab4cc body=576 status=ok
// SIG undefined FUN_1466ab4cc(void)

longlong FUN_1466ab4cc(void)

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
  if (DAT_14cc03af0 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03af0 = FUN_140002ddd(FUN_1466ab70d,uVar3,L"RigVMFunction_MathTransformSelectBool");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"Condition";
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
    local_58[lVar4 * 7] = L"IfTrue";
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
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"IfFalse";
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
    local_58[lVar4 * 7 + 1] = L"FTransform";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03af0;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathTransformSelectBool::Execute",FUN_14911a408,
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
  return DAT_14cc03af0;
}



// FUNCTION 1466ab70d FUN_1466ab70d body=47 status=ok
// SIG undefined FUN_1466ab70d(void)

longlong FUN_1466ab70d(void)

{
  if (DAT_14cc03ae8 == 0) {
    FUN_14086a14e(&DAT_14cc03ae8,&PTR_FUN_14baf9c58);
  }
  return DAT_14cc03ae8;
}



// FUNCTION 1466ab73c FUN_1466ab73c body=48 status=ok
// SIG undefined FUN_1466ab73c(void)

void FUN_1466ab73c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000130;
  *puVar1 = &PTR_FUN_14bb247e0;
  return;
}



// FUNCTION 1466ab76c FUN_1466ab76c body=497 status=ok
// SIG undefined FUN_1466ab76c(void)

longlong FUN_1466ab76c(void)

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
  if (DAT_14cc03b08 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03b08 = FUN_140002ddd(FUN_1466ab95e,uVar3,L"RigVMFunction_MathTransformRotateVector");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"Transform";
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
    local_58[lVar4 * 7] = L"Vector";
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
    local_58[lVar4 * 7 + 1] = L"FVector";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03b08;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathTransformRotateVector::Execute",FUN_14911a52a,
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
  return DAT_14cc03b08;
}



// FUNCTION 1466ab95e FUN_1466ab95e body=47 status=ok
// SIG undefined FUN_1466ab95e(void)

longlong FUN_1466ab95e(void)

{
  if (DAT_14cc03b00 == 0) {
    FUN_14086a14e(&DAT_14cc03b00,&PTR_FUN_14baf9e50);
  }
  return DAT_14cc03b00;
}



// FUNCTION 1466ab98e FUN_1466ab98e body=48 status=ok
// SIG undefined FUN_1466ab98e(void)

void FUN_1466ab98e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000000a0;
  *puVar1 = &PTR_FUN_14bb249c0;
  return;
}



// FUNCTION 1466ab9be FUN_1466ab9be body=497 status=ok
// SIG undefined FUN_1466ab9be(void)

longlong FUN_1466ab9be(void)

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
  if (DAT_14cc03b20 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03b20 = FUN_140002ddd(FUN_1466abbb0,uVar3,L"RigVMFunction_MathTransformTransformVector")
    ;
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"Transform";
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
    local_58[lVar4 * 7] = L"Location";
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
    local_58[lVar4 * 7 + 1] = L"FVector";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03b20;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathTransformTransformVector::Execute",
                  FUN_14911a826,lVar4);
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
  return DAT_14cc03b20;
}



// FUNCTION 1466abbb0 FUN_1466abbb0 body=47 status=ok
// SIG undefined FUN_1466abbb0(void)

longlong FUN_1466abbb0(void)

{
  if (DAT_14cc03b18 == 0) {
    FUN_14086a14e(&DAT_14cc03b18,&PTR_FUN_14bafa058);
  }
  return DAT_14cc03b18;
}



// FUNCTION 1466abbe0 FUN_1466abbe0 body=48 status=ok
// SIG undefined FUN_1466abbe0(void)

void FUN_1466abbe0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000000a0;
  *puVar1 = &PTR_FUN_14bb24ba0;
  return;
}



// FUNCTION 1466abc10 FUN_1466abc10 body=742 status=ok
// SIG undefined FUN_1466abc10(void)

longlong FUN_1466abc10(void)

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
  if (DAT_14cc03b38 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03b38 = FUN_140002ddd(FUN_1466abef7,uVar3,L"RigVMFunction_MathTransformFromSRT");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"Location";
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
    local_58[lVar4 * 7] = L"Rotation";
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
    local_58[lVar4 * 7] = L"RotationOrder";
    local_58[lVar4 * 7 + 1] = L"EEulerRotationOrder";
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
    local_58[lVar4 * 7] = L"EulerTransform";
    local_58[lVar4 * 7 + 1] = L"FEulerTransform";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03b38;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathTransformFromSRT::Execute",FUN_14911ab38,lVar4
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
  return DAT_14cc03b38;
}



// FUNCTION 1466abef7 FUN_1466abef7 body=47 status=ok
// SIG undefined FUN_1466abef7(void)

longlong FUN_1466abef7(void)

{
  if (DAT_14cc03b30 == 0) {
    FUN_14086a14e(&DAT_14cc03b30,&PTR_FUN_14bafa350);
  }
  return DAT_14cc03b30;
}



// FUNCTION 1466abf26 FUN_1466abf26 body=48 status=ok
// SIG undefined FUN_1466abf26(void)

void FUN_1466abf26(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000110;
  *puVar1 = &PTR_FUN_14bb24d80;
  return;
}



// FUNCTION 1466abf56 FUN_1466abf56 body=583 status=ok
// SIG undefined FUN_1466abf56(void)

longlong FUN_1466abf56(void)

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
  if (DAT_14cc03b50 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03b50 = FUN_140002ddd(FUN_1466ac19e,uVar3,L"RigVMFunction_MathTransformArrayToSRT");
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
    local_58[lVar4 * 7] = L"Translations";
    local_58[lVar4 * 7 + 1] = L"TArray<FVector>";
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
    local_58[lVar4 * 7] = L"Rotations";
    local_58[lVar4 * 7 + 1] = L"TArray<FQuat>";
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
    local_58[lVar4 * 7] = L"Scales";
    local_58[lVar4 * 7 + 1] = L"TArray<FVector>";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03b50;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathTransformArrayToSRT::Execute",FUN_14911ad5c,
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
  return DAT_14cc03b50;
}



// FUNCTION 1466ac19e FUN_1466ac19e body=47 status=ok
// SIG undefined FUN_1466ac19e(void)

longlong FUN_1466ac19e(void)

{
  if (DAT_14cc03b48 == 0) {
    FUN_14086a14e(&DAT_14cc03b48,&PTR_FUN_14bafa6e8);
  }
  return DAT_14cc03b48;
}



// FUNCTION 1466ac1ce FUN_1466ac1ce body=48 status=ok
// SIG undefined FUN_1466ac1ce(void)

void FUN_1466ac1ce(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000048;
  *puVar1 = &PTR_FUN_14bb24f60;
  return;
}



// FUNCTION 1466ac1fe FUN_1466ac1fe body=1082 status=ok
// SIG undefined FUN_1466ac1fe(void)

longlong FUN_1466ac1fe(void)

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
  if (DAT_14cc03b68 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03b68 = FUN_140002ddd(FUN_1466ac639,uVar3,L"RigVMFunction_MathTransformClampSpatially");
    local_68 = (undefined8 *)0x0;
    uStack_60._0_4_ = 1;
    uStack_60._4_4_ = 0;
    FUN_140c0351c(&local_68,0);
    iVar1 = (uint)uStack_60;
    *local_68 = L"Value";
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
    local_68[lVar4 * 7] = L"Axis";
    local_68[lVar4 * 7 + 1] = L"EAxis::Type";
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
    local_68[lVar4 * 7] = L"Type";
    local_68[lVar4 * 7 + 1] = L"ERigVMClampSpatialMode::Type";
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
    local_68[lVar4 * 7] = L"Minimum";
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
    local_68[lVar4 * 7] = L"Maximum";
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
    uVar2 = (uint)uStack_60;
    local_68[lVar4 * 7] = L"bDrawDebug";
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
    local_68[lVar4 * 7] = L"DebugColor";
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
    local_68[lVar4 * 7] = L"DebugThickness";
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
    local_68[lVar4 * 7] = L"Result";
    local_68[lVar4 * 7 + 1] = L"FTransform";
    local_68[lVar4 * 7 + 2] = 0;
    (local_68 + lVar4 * 7 + 2)[1] = 0;
    local_68[lVar4 * 7 + 4] = 0;
    (local_68 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03b68;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathTransformClampSpatially::Execute",
                  FUN_14911af82,lVar4);
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
  return DAT_14cc03b68;
}



// FUNCTION 1466ac639 FUN_1466ac639 body=47 status=ok
// SIG undefined FUN_1466ac639(void)

longlong FUN_1466ac639(void)

{
  if (DAT_14cc03b60 == 0) {
    FUN_14086a14e(&DAT_14cc03b60,&PTR_FUN_14bafab50);
  }
  return DAT_14cc03b60;
}



// FUNCTION 1466ac668 FUN_1466ac668 body=48 status=ok
// SIG undefined FUN_1466ac668(void)

void FUN_1466ac668(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000160;
  *puVar1 = &PTR_FUN_14bb25140;
  return;
}



// FUNCTION 1466ac698 FUN_1466ac698 body=653 status=ok
// SIG undefined FUN_1466ac698(void)

longlong FUN_1466ac698(void)

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
  if (DAT_14cc03b80 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03b80 = FUN_140002ddd(FUN_1466ac926,uVar3,L"RigVMFunction_MathTransformMirrorTransform")
    ;
    local_68 = (undefined8 *)0x0;
    uStack_60._0_4_ = 1;
    uStack_60._4_4_ = 0;
    FUN_140c0351c(&local_68,0);
    iVar1 = (uint)uStack_60;
    *local_68 = L"Value";
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
    local_68[lVar4 * 7] = L"MirrorAxis";
    local_68[lVar4 * 7 + 1] = L"EAxis::Type";
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
    local_68[lVar4 * 7] = L"AxisToFlip";
    local_68[lVar4 * 7 + 1] = L"EAxis::Type";
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
    local_68[lVar4 * 7] = L"CentralTransform";
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
    local_68[lVar4 * 7] = L"Result";
    local_68[lVar4 * 7 + 1] = L"FTransform";
    local_68[lVar4 * 7 + 2] = 0;
    (local_68 + lVar4 * 7 + 2)[1] = 0;
    local_68[lVar4 * 7 + 4] = 0;
    (local_68 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03b80;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathTransformMirrorTransform::Execute",
                  FUN_14911b20a,lVar4);
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
  return DAT_14cc03b80;
}



// FUNCTION 1466ac926 FUN_1466ac926 body=47 status=ok
// SIG undefined FUN_1466ac926(void)

longlong FUN_1466ac926(void)

{
  if (DAT_14cc03b78 == 0) {
    FUN_14086a14e(&DAT_14cc03b78,&PTR_FUN_14bafade8);
  }
  return DAT_14cc03b78;
}



// FUNCTION 1466ac956 FUN_1466ac956 body=48 status=ok
// SIG undefined FUN_1466ac956(void)

void FUN_1466ac956(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000140;
  *puVar1 = &PTR_FUN_14bb25320;
  return;
}



// FUNCTION 1466ac986 FUN_1466ac986 body=55 status=ok
// SIG undefined FUN_1466ac986(void)

void FUN_1466ac986(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc03bd8 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc03bd8 = FUN_140002ddd(FUN_141906331,uVar1,L"RigVMFunction_MathVectorBase");
  }
  return;
}



// FUNCTION 1466ac9be FUN_1466ac9be body=48 status=ok
// SIG undefined FUN_1466ac9be(void)

void FUN_1466ac9be(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14bb25580;
  return;
}



// FUNCTION 1466ac9ee FUN_1466ac9ee body=55 status=ok
// SIG undefined FUN_1466ac9ee(void)

void FUN_1466ac9ee(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc03bf0 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc03bf0 = FUN_140002ddd(FUN_1466aca25,uVar1,L"RigVMFunction_MathVectorUnaryOp");
  }
  return;
}



// FUNCTION 1466aca25 FUN_1466aca25 body=49 status=ok
// SIG undefined FUN_1466aca25(void)

longlong FUN_1466aca25(void)

{
  if (DAT_14cc03be8 == 0) {
    FUN_14086a14e(&DAT_14cc03be8,&PTR_FUN_14bafb3b0);
  }
  return DAT_14cc03be8;
}



// FUNCTION 1466aca56 FUN_1466aca56 body=48 status=ok
// SIG undefined FUN_1466aca56(void)

void FUN_1466aca56(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14bb25760;
  return;
}



// FUNCTION 1466aca86 FUN_1466aca86 body=55 status=ok
// SIG undefined FUN_1466aca86(void)

void FUN_1466aca86(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc03c08 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc03c08 = FUN_140002ddd(FUN_1466acabd,uVar1,L"RigVMFunction_MathVectorBinaryOp");
  }
  return;
}



// FUNCTION 1466acabd FUN_1466acabd body=49 status=ok
// SIG undefined FUN_1466acabd(void)

longlong FUN_1466acabd(void)

{
  if (DAT_14cc03c00 == 0) {
    FUN_14086a14e(&DAT_14cc03c00,&PTR_FUN_14bafb530);
  }
  return DAT_14cc03c00;
}



// FUNCTION 1466acaee FUN_1466acaee body=48 status=ok
// SIG undefined FUN_1466acaee(void)

void FUN_1466acaee(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14bb25940;
  return;
}



// FUNCTION 1466acb1e FUN_1466acb1e body=55 status=ok
// SIG undefined FUN_1466acb1e(void)

void FUN_1466acb1e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc03c20 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc03c20 = FUN_140002ddd(FUN_1466acb55,uVar1,L"RigVMFunction_MathVectorBinaryAggregateOp");
  }
  return;
}



// FUNCTION 1466acb55 FUN_1466acb55 body=49 status=ok
// SIG undefined FUN_1466acb55(void)

longlong FUN_1466acb55(void)

{
  if (DAT_14cc03c18 == 0) {
    FUN_14086a14e(&DAT_14cc03c18,&PTR_FUN_14bafb6c8);
  }
  return DAT_14cc03c18;
}



// FUNCTION 1466acb86 FUN_1466acb86 body=48 status=ok
// SIG undefined FUN_1466acb86(void)

void FUN_1466acb86(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14bb25b20;
  return;
}



// FUNCTION 1466acbb6 FUN_1466acbb6 body=576 status=ok
// SIG undefined FUN_1466acbb6(void)

longlong FUN_1466acbb6(void)

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
  if (DAT_14cc03c38 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03c38 = FUN_140002ddd(FUN_1466acdf7,uVar3,L"RigVMFunction_MathVectorMake");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e25cc8;
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
    local_58[lVar4 * 7] = &DAT_149e25ccc;
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
    local_58[lVar4 * 7] = &DAT_149e25cd0;
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
    local_58[lVar4 * 7 + 1] = L"FVector";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03c38;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathVectorMake::Execute",&LAB_14911ce40,lVar4);
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
  return DAT_14cc03c38;
}



// FUNCTION 1466acdf7 FUN_1466acdf7 body=47 status=ok
// SIG undefined FUN_1466acdf7(void)

longlong FUN_1466acdf7(void)

{
  if (DAT_14cc03c30 == 0) {
    FUN_14086a14e(&DAT_14cc03c30,&PTR_FUN_14bafb8b0);
  }
  return DAT_14cc03c30;
}



// FUNCTION 1466ace26 FUN_1466ace26 body=48 status=ok
// SIG undefined FUN_1466ace26(void)

void FUN_1466ace26(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14bb25d00;
  return;
}



// FUNCTION 1466ace56 FUN_1466ace56 body=413 status=ok
// SIG undefined FUN_1466ace56(void)

longlong FUN_1466ace56(void)

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
  if (DAT_14cc03c50 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03c50 = FUN_140002ddd(FUN_1466acff4,uVar3,L"RigVMFunction_MathVectorFromFloat");
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
    local_58[lVar4 * 7 + 1] = L"FVector";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03c50;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathVectorFromFloat::Execute",&LAB_14911cf62,lVar4
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
  return DAT_14cc03c50;
}



// FUNCTION 1466acff4 FUN_1466acff4 body=47 status=ok
// SIG undefined FUN_1466acff4(void)

longlong FUN_1466acff4(void)

{
  if (DAT_14cc03c48 == 0) {
    FUN_14086a14e(&DAT_14cc03c48,&PTR_FUN_14bafba38);
  }
  return DAT_14cc03c48;
}



// FUNCTION 1466ad024 FUN_1466ad024 body=48 status=ok
// SIG undefined FUN_1466ad024(void)

void FUN_1466ad024(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14bb25ee0;
  return;
}



// FUNCTION 1466ad054 FUN_1466ad054 body=413 status=ok
// SIG undefined FUN_1466ad054(void)

longlong FUN_1466ad054(void)

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
  if (DAT_14cc03c68 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03c68 = FUN_140002ddd(FUN_1466ad1f2,uVar3,L"RigVMFunction_MathVectorFromDouble");
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
    local_58[lVar4 * 7 + 1] = L"FVector";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03c68;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathVectorFromDouble::Execute",&LAB_14911d06a,
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
  return DAT_14cc03c68;
}



// FUNCTION 1466ad1f2 FUN_1466ad1f2 body=47 status=ok
// SIG undefined FUN_1466ad1f2(void)

longlong FUN_1466ad1f2(void)

{
  if (DAT_14cc03c60 == 0) {
    FUN_14086a14e(&DAT_14cc03c60,&PTR_FUN_14bafbbc8);
  }
  return DAT_14cc03c60;
}



// FUNCTION 1466ad222 FUN_1466ad222 body=48 status=ok
// SIG undefined FUN_1466ad222(void)

void FUN_1466ad222(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14bb260c0;
  return;
}



// FUNCTION 1466ad252 FUN_1466ad252 body=490 status=ok
// SIG undefined FUN_1466ad252(void)

longlong FUN_1466ad252(void)

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
  if (DAT_14cc03c80 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03c80 = FUN_140002ddd(FUN_1466ad43d,uVar3,L"RigVMFunction_MathVectorAdd");
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"FVector";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03c80;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathVectorAdd::Execute",&LAB_14911d17a,lVar4);
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
  return DAT_14cc03c80;
}



// FUNCTION 1466ad43d FUN_1466ad43d body=47 status=ok
// SIG undefined FUN_1466ad43d(void)

longlong FUN_1466ad43d(void)

{
  if (DAT_14cc03c78 == 0) {
    FUN_14086a14e(&DAT_14cc03c78,&PTR_FUN_14bafbca0);
  }
  return DAT_14cc03c78;
}



// FUNCTION 1466ad46c FUN_1466ad46c body=48 status=ok
// SIG undefined FUN_1466ad46c(void)

void FUN_1466ad46c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14bb262a0;
  return;
}



// FUNCTION 1466ad49c FUN_1466ad49c body=490 status=ok
// SIG undefined FUN_1466ad49c(void)

longlong FUN_1466ad49c(void)

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
  if (DAT_14cc03c98 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03c98 = FUN_140002ddd(FUN_1466ad687,uVar3,L"RigVMFunction_MathVectorSub");
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"FVector";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03c98;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathVectorSub::Execute",&LAB_14911d2b4,lVar4);
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
  return DAT_14cc03c98;
}



// FUNCTION 1466ad687 FUN_1466ad687 body=47 status=ok
// SIG undefined FUN_1466ad687(void)

longlong FUN_1466ad687(void)

{
  if (DAT_14cc03c90 == 0) {
    FUN_14086a14e(&DAT_14cc03c90,&PTR_FUN_14bafbd78);
  }
  return DAT_14cc03c90;
}



// FUNCTION 1466ad6b6 FUN_1466ad6b6 body=48 status=ok
// SIG undefined FUN_1466ad6b6(void)

void FUN_1466ad6b6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14bb26480;
  return;
}



// FUNCTION 1466ad6e6 FUN_1466ad6e6 body=490 status=ok
// SIG undefined FUN_1466ad6e6(void)

longlong FUN_1466ad6e6(void)

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
  if (DAT_14cc03cb0 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03cb0 = FUN_140002ddd(FUN_1466ad8d1,uVar3,L"RigVMFunction_MathVectorMul");
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"FVector";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03cb0;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathVectorMul::Execute",&LAB_14911d3ee,lVar4);
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
  return DAT_14cc03cb0;
}



// FUNCTION 1466ad8d1 FUN_1466ad8d1 body=47 status=ok
// SIG undefined FUN_1466ad8d1(void)

longlong FUN_1466ad8d1(void)

{
  if (DAT_14cc03ca8 == 0) {
    FUN_14086a14e(&DAT_14cc03ca8,&PTR_FUN_14bafbe50);
  }
  return DAT_14cc03ca8;
}



// FUNCTION 1466ad900 FUN_1466ad900 body=48 status=ok
// SIG undefined FUN_1466ad900(void)

void FUN_1466ad900(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14bb26660;
  return;
}



// FUNCTION 1466ad930 FUN_1466ad930 body=497 status=ok
// SIG undefined FUN_1466ad930(void)

longlong FUN_1466ad930(void)

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
  if (DAT_14cc03cc8 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03cc8 = FUN_140002ddd(FUN_1466adb22,uVar3,L"RigVMFunction_MathVectorScale");
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
    local_58[lVar4 * 7] = L"Factor";
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
    local_58[lVar4 * 7 + 1] = L"FVector";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03cc8;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathVectorScale::Execute",&LAB_14911d528,lVar4);
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
  return DAT_14cc03cc8;
}



// FUNCTION 1466adb22 FUN_1466adb22 body=47 status=ok
// SIG undefined FUN_1466adb22(void)

longlong FUN_1466adb22(void)

{
  if (DAT_14cc03cc0 == 0) {
    FUN_14086a14e(&DAT_14cc03cc0,&PTR_FUN_14bafc008);
  }
  return DAT_14cc03cc0;
}



// FUNCTION 1466adb52 FUN_1466adb52 body=48 status=ok
// SIG undefined FUN_1466adb52(void)

void FUN_1466adb52(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14bb26840;
  return;
}



// FUNCTION 1466adb82 FUN_1466adb82 body=490 status=ok
// SIG undefined FUN_1466adb82(void)

longlong FUN_1466adb82(void)

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
  if (DAT_14cc03ce0 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03ce0 = FUN_140002ddd(FUN_1466add6d,uVar3,L"RigVMFunction_MathVectorDiv");
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"FVector";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03ce0;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathVectorDiv::Execute",&LAB_14911d660,lVar4);
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
  return DAT_14cc03ce0;
}



// FUNCTION 1466add6d FUN_1466add6d body=47 status=ok
// SIG undefined FUN_1466add6d(void)

longlong FUN_1466add6d(void)

{
  if (DAT_14cc03cd8 == 0) {
    FUN_14086a14e(&DAT_14cc03cd8,&PTR_FUN_14bafc0e0);
  }
  return DAT_14cc03cd8;
}



// FUNCTION 1466add9c FUN_1466add9c body=48 status=ok
// SIG undefined FUN_1466add9c(void)

void FUN_1466add9c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14bb26a20;
  return;
}



// FUNCTION 1466addcc FUN_1466addcc body=490 status=ok
// SIG undefined FUN_1466addcc(void)

longlong FUN_1466addcc(void)

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
  if (DAT_14cc03cf8 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03cf8 = FUN_140002ddd(FUN_1466adfb7,uVar3,L"RigVMFunction_MathVectorMod");
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"FVector";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03cf8;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathVectorMod::Execute",&LAB_14911d860,lVar4);
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
  return DAT_14cc03cf8;
}



// FUNCTION 1466adfb7 FUN_1466adfb7 body=47 status=ok
// SIG undefined FUN_1466adfb7(void)

longlong FUN_1466adfb7(void)

{
  if (DAT_14cc03cf0 == 0) {
    FUN_14086a14e(&DAT_14cc03cf0,&PTR_FUN_14bafc1b8);
  }
  return DAT_14cc03cf0;
}



// FUNCTION 1466adfe6 FUN_1466adfe6 body=48 status=ok
// SIG undefined FUN_1466adfe6(void)

void FUN_1466adfe6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14bb26c00;
  return;
}



// FUNCTION 1466ae016 FUN_1466ae016 body=490 status=ok
// SIG undefined FUN_1466ae016(void)

longlong FUN_1466ae016(void)

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
  if (DAT_14cc03d10 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03d10 = FUN_140002ddd(FUN_1466ae201,uVar3,L"RigVMFunction_MathVectorMin");
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"FVector";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03d10;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathVectorMin::Execute",&LAB_14911da28,lVar4);
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
  return DAT_14cc03d10;
}



// FUNCTION 1466ae201 FUN_1466ae201 body=47 status=ok
// SIG undefined FUN_1466ae201(void)

longlong FUN_1466ae201(void)

{
  if (DAT_14cc03d08 == 0) {
    FUN_14086a14e(&DAT_14cc03d08,&PTR_FUN_14bafc290);
  }
  return DAT_14cc03d08;
}



// FUNCTION 1466ae230 FUN_1466ae230 body=48 status=ok
// SIG undefined FUN_1466ae230(void)

void FUN_1466ae230(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14bb26de0;
  return;
}



// FUNCTION 1466ae260 FUN_1466ae260 body=490 status=ok
// SIG undefined FUN_1466ae260(void)

longlong FUN_1466ae260(void)

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
  if (DAT_14cc03d28 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03d28 = FUN_140002ddd(FUN_1466ae44b,uVar3,L"RigVMFunction_MathVectorMax");
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"FVector";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03d28;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathVectorMax::Execute",&LAB_14911db88,lVar4);
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
  return DAT_14cc03d28;
}



// FUNCTION 1466ae44b FUN_1466ae44b body=47 status=ok
// SIG undefined FUN_1466ae44b(void)

longlong FUN_1466ae44b(void)

{
  if (DAT_14cc03d20 == 0) {
    FUN_14086a14e(&DAT_14cc03d20,&PTR_FUN_14bafc368);
  }
  return DAT_14cc03d20;
}



// FUNCTION 1466ae47a FUN_1466ae47a body=48 status=ok
// SIG undefined FUN_1466ae47a(void)

void FUN_1466ae47a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14bb26fc0;
  return;
}



// FUNCTION 1466ae4aa FUN_1466ae4aa body=408 status=ok
// SIG undefined FUN_1466ae4aa(void)

longlong FUN_1466ae4aa(void)

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
  if (DAT_14cc03d40 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03d40 = FUN_140002ddd(FUN_1466ae643,uVar3,L"RigVMFunction_MathVectorNegate");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"FVector";
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
    local_58[lVar4 * 7 + 1] = L"FVector";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03d40;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathVectorNegate::Execute",&LAB_14911dce8,lVar4);
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
  return DAT_14cc03d40;
}



// FUNCTION 1466ae643 FUN_1466ae643 body=47 status=ok
// SIG undefined FUN_1466ae643(void)

longlong FUN_1466ae643(void)

{
  if (DAT_14cc03d38 == 0) {
    FUN_14086a14e(&DAT_14cc03d38,&PTR_FUN_14bafc450);
  }
  return DAT_14cc03d38;
}



// FUNCTION 1466ae672 FUN_1466ae672 body=48 status=ok
// SIG undefined FUN_1466ae672(void)

void FUN_1466ae672(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14bb271a0;
  return;
}



// FUNCTION 1466ae6a2 FUN_1466ae6a2 body=408 status=ok
// SIG undefined FUN_1466ae6a2(void)

longlong FUN_1466ae6a2(void)

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
  if (DAT_14cc03d58 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03d58 = FUN_140002ddd(FUN_1466ae83b,uVar3,L"RigVMFunction_MathVectorAbs");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"FVector";
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
    local_58[lVar4 * 7 + 1] = L"FVector";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03d58;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathVectorAbs::Execute",&LAB_14911de00,lVar4);
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
  return DAT_14cc03d58;
}



// FUNCTION 1466ae83b FUN_1466ae83b body=47 status=ok
// SIG undefined FUN_1466ae83b(void)

longlong FUN_1466ae83b(void)

{
  if (DAT_14cc03d50 == 0) {
    FUN_14086a14e(&DAT_14cc03d50,&PTR_FUN_14bafc528);
  }
  return DAT_14cc03d50;
}



// FUNCTION 1466ae86a FUN_1466ae86a body=48 status=ok
// SIG undefined FUN_1466ae86a(void)

void FUN_1466ae86a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14bb27380;
  return;
}



// FUNCTION 1466ae89a FUN_1466ae89a body=408 status=ok
// SIG undefined FUN_1466ae89a(void)

longlong FUN_1466ae89a(void)

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
  if (DAT_14cc03d70 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03d70 = FUN_140002ddd(FUN_1466aea33,uVar3,L"RigVMFunction_MathVectorFloor");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"FVector";
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
    local_58[lVar4 * 7 + 1] = L"FVector";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03d70;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathVectorFloor::Execute",&LAB_14911df24,lVar4);
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
  return DAT_14cc03d70;
}



// FUNCTION 1466aea33 FUN_1466aea33 body=47 status=ok
// SIG undefined FUN_1466aea33(void)

longlong FUN_1466aea33(void)

{
  if (DAT_14cc03d68 == 0) {
    FUN_14086a14e(&DAT_14cc03d68,&PTR_FUN_14bafc610);
  }
  return DAT_14cc03d68;
}



// FUNCTION 1466aea62 FUN_1466aea62 body=48 status=ok
// SIG undefined FUN_1466aea62(void)

void FUN_1466aea62(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14bb27560;
  return;
}



// FUNCTION 1466aea92 FUN_1466aea92 body=408 status=ok
// SIG undefined FUN_1466aea92(void)

longlong FUN_1466aea92(void)

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
  if (DAT_14cc03d88 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03d88 = FUN_140002ddd(FUN_1466aec2b,uVar3,L"RigVMFunction_MathVectorCeil");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"FVector";
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
    local_58[lVar4 * 7 + 1] = L"FVector";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03d88;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathVectorCeil::Execute",&LAB_14911e060,lVar4);
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
  return DAT_14cc03d88;
}



// FUNCTION 1466aec2b FUN_1466aec2b body=47 status=ok
// SIG undefined FUN_1466aec2b(void)

longlong FUN_1466aec2b(void)

{
  if (DAT_14cc03d80 == 0) {
    FUN_14086a14e(&DAT_14cc03d80,&PTR_FUN_14bafc6f0);
  }
  return DAT_14cc03d80;
}



// FUNCTION 1466aec5a FUN_1466aec5a body=48 status=ok
// SIG undefined FUN_1466aec5a(void)

void FUN_1466aec5a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14bb27740;
  return;
}



// FUNCTION 1466aec8a FUN_1466aec8a body=408 status=ok
// SIG undefined FUN_1466aec8a(void)

longlong FUN_1466aec8a(void)

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
  if (DAT_14cc03da0 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03da0 = FUN_140002ddd(FUN_1466aee23,uVar3,L"RigVMFunction_MathVectorRound");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"FVector";
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
    local_58[lVar4 * 7 + 1] = L"FVector";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03da0;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathVectorRound::Execute",&LAB_14911e19c,lVar4);
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
  return DAT_14cc03da0;
}



// FUNCTION 1466aee23 FUN_1466aee23 body=47 status=ok
// SIG undefined FUN_1466aee23(void)

longlong FUN_1466aee23(void)

{
  if (DAT_14cc03d98 == 0) {
    FUN_14086a14e(&DAT_14cc03d98,&PTR_FUN_14bafc7d8);
  }
  return DAT_14cc03d98;
}



// FUNCTION 1466aee52 FUN_1466aee52 body=48 status=ok
// SIG undefined FUN_1466aee52(void)

void FUN_1466aee52(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14bb27920;
  return;
}



// FUNCTION 1466aee82 FUN_1466aee82 body=408 status=ok
// SIG undefined FUN_1466aee82(void)

longlong FUN_1466aee82(void)

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
  if (DAT_14cc03db8 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03db8 = FUN_140002ddd(FUN_1466af01b,uVar3,L"RigVMFunction_MathVectorSign");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"FVector";
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
    local_58[lVar4 * 7 + 1] = L"FVector";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03db8;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathVectorSign::Execute",&LAB_14911e310,lVar4);
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
  return DAT_14cc03db8;
}



// FUNCTION 1466af01b FUN_1466af01b body=47 status=ok
// SIG undefined FUN_1466af01b(void)

longlong FUN_1466af01b(void)

{
  if (DAT_14cc03db0 == 0) {
    FUN_14086a14e(&DAT_14cc03db0,&PTR_FUN_14bafc8b8);
  }
  return DAT_14cc03db0;
}



// FUNCTION 1466af04a FUN_1466af04a body=48 status=ok
// SIG undefined FUN_1466af04a(void)

void FUN_1466af04a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14bb27b00;
  return;
}



// FUNCTION 1466af07a FUN_1466af07a body=569 status=ok
// SIG undefined FUN_1466af07a(void)

longlong FUN_1466af07a(void)

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
  if (DAT_14cc03dd0 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03dd0 = FUN_140002ddd(FUN_1466af2b4,uVar3,L"RigVMFunction_MathVectorClamp");
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"FVector";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03dd0;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathVectorClamp::Execute",&LAB_14911e4c6,lVar4);
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
  return DAT_14cc03dd0;
}



// FUNCTION 1466af2b4 FUN_1466af2b4 body=47 status=ok
// SIG undefined FUN_1466af2b4(void)

longlong FUN_1466af2b4(void)

{
  if (DAT_14cc03dc8 == 0) {
    FUN_14086a14e(&DAT_14cc03dc8,&PTR_FUN_14bafcac0);
  }
  return DAT_14cc03dc8;
}



// FUNCTION 1466af2e4 FUN_1466af2e4 body=48 status=ok
// SIG undefined FUN_1466af2e4(void)

void FUN_1466af2e4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000068;
  *puVar1 = &PTR_FUN_14bb27ce0;
  return;
}



// FUNCTION 1466af314 FUN_1466af314 body=576 status=ok
// SIG undefined FUN_1466af314(void)

longlong FUN_1466af314(void)

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
  if (DAT_14cc03de8 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03de8 = FUN_140002ddd(FUN_1466af555,uVar3,L"RigVMFunction_MathVectorLerp");
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
    local_58[lVar4 * 7 + 1] = L"FVector";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03de8;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathVectorLerp::Execute",FUN_14911e64a,lVar4);
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
  return DAT_14cc03de8;
}



// FUNCTION 1466af555 FUN_1466af555 body=47 status=ok
// SIG undefined FUN_1466af555(void)

longlong FUN_1466af555(void)

{
  if (DAT_14cc03de0 == 0) {
    FUN_14086a14e(&DAT_14cc03de0,&PTR_FUN_14bafccc0);
  }
  return DAT_14cc03de0;
}



// FUNCTION 1466af584 FUN_1466af584 body=48 status=ok
// SIG undefined FUN_1466af584(void)

void FUN_1466af584(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000058;
  *puVar1 = &PTR_FUN_14bb27ec0;
  return;
}



// FUNCTION 1466af5b4 FUN_1466af5b4 body=810 status=ok
// SIG undefined FUN_1466af5b4(void)

longlong FUN_1466af5b4(void)

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
  if (DAT_14cc03e00 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03e00 = FUN_140002ddd(FUN_1466af8df,uVar3,L"RigVMFunction_MathVectorRemap");
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
    local_58[lVar4 * 7] = L"SourceMinimum";
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
    local_58[lVar4 * 7] = L"SourceMaximum";
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
    local_58[lVar4 * 7] = L"TargetMinimum";
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
    local_58[lVar4 * 7] = L"TargetMaximum";
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
    local_58[lVar4 * 7 + 1] = L"FVector";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03e00;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathVectorRemap::Execute",FUN_14911e800,lVar4);
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
  return DAT_14cc03e00;
}



// FUNCTION 1466af8df FUN_1466af8df body=47 status=ok
// SIG undefined FUN_1466af8df(void)

longlong FUN_1466af8df(void)

{
  if (DAT_14cc03df8 == 0) {
    FUN_14086a14e(&DAT_14cc03df8,&PTR_FUN_14bafcfa8);
  }
  return DAT_14cc03df8;
}



// FUNCTION 1466af90e FUN_1466af90e body=48 status=ok
// SIG undefined FUN_1466af90e(void)

void FUN_1466af90e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000a0;
  *puVar1 = &PTR_FUN_14bb280a0;
  return;
}



// FUNCTION 1466af93e FUN_1466af93e body=497 status=ok
// SIG undefined FUN_1466af93e(void)

longlong FUN_1466af93e(void)

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
  if (DAT_14cc03e18 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03e18 = FUN_140002ddd(FUN_1466afb30,uVar3,L"RigVMFunction_MathVectorEquals");
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"bool";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03e18;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathVectorEquals::Execute",&LAB_14911eadc,lVar4);
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
  return DAT_14cc03e18;
}



// FUNCTION 1466afb30 FUN_1466afb30 body=47 status=ok
// SIG undefined FUN_1466afb30(void)

longlong FUN_1466afb30(void)

{
  if (DAT_14cc03e10 == 0) {
    FUN_14086a14e(&DAT_14cc03e10,&PTR_FUN_14bafd168);
  }
  return DAT_14cc03e10;
}



// FUNCTION 1466afb60 FUN_1466afb60 body=48 status=ok
// SIG undefined FUN_1466afb60(void)

void FUN_1466afb60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14bb28280;
  return;
}



// FUNCTION 1466afb90 FUN_1466afb90 body=497 status=ok
// SIG undefined FUN_1466afb90(void)

longlong FUN_1466afb90(void)

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
  if (DAT_14cc03e30 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03e30 = FUN_140002ddd(FUN_1466afd82,uVar3,L"RigVMFunction_MathVectorNotEquals");
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"bool";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03e30;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathVectorNotEquals::Execute",&LAB_14911ec2c,lVar4
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
  return DAT_14cc03e30;
}



// FUNCTION 1466afd82 FUN_1466afd82 body=47 status=ok
// SIG undefined FUN_1466afd82(void)

longlong FUN_1466afd82(void)

{
  if (DAT_14cc03e28 == 0) {
    FUN_14086a14e(&DAT_14cc03e28,&PTR_FUN_14bafd340);
  }
  return DAT_14cc03e28;
}



// FUNCTION 1466afdb2 FUN_1466afdb2 body=48 status=ok
// SIG undefined FUN_1466afdb2(void)

void FUN_1466afdb2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14bb28460;
  return;
}



// FUNCTION 1466afde2 FUN_1466afde2 body=502 status=ok
// SIG undefined FUN_1466afde2(void)

longlong FUN_1466afde2(void)

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
  if (DAT_14cc03e48 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03e48 = FUN_140002ddd(FUN_1466affd9,uVar3,L"RigVMFunction_MathVectorIsNearlyZero");
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
    local_58[lVar4 * 7] = L"Tolerance";
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
    local_58[lVar4 * 7 + 1] = L"bool";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03e48;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathVectorIsNearlyZero::Execute",&LAB_14911ed80,
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
  return DAT_14cc03e48;
}



// FUNCTION 1466affd9 FUN_1466affd9 body=47 status=ok
// SIG undefined FUN_1466affd9(void)

longlong FUN_1466affd9(void)

{
  if (DAT_14cc03e40 == 0) {
    FUN_14086a14e(&DAT_14cc03e40,&PTR_FUN_14bafd520);
  }
  return DAT_14cc03e40;
}



// FUNCTION 1466b0008 FUN_1466b0008 body=48 status=ok
// SIG undefined FUN_1466b0008(void)

void FUN_1466b0008(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14bb28640;
  return;
}



// FUNCTION 1466b0038 FUN_1466b0038 body=583 status=ok
// SIG undefined FUN_1466b0038(void)

longlong FUN_1466b0038(void)

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
  if (DAT_14cc03e60 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03e60 = FUN_140002ddd(FUN_1466b0280,uVar3,L"RigVMFunction_MathVectorIsNearlyEqual");
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
    local_58[lVar4 * 7] = L"Tolerance";
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
    local_58[lVar4 * 7 + 1] = L"bool";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03e60;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathVectorIsNearlyEqual::Execute",&LAB_14911ef08,
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
  return DAT_14cc03e60;
}



// FUNCTION 1466b0280 FUN_1466b0280 body=47 status=ok
// SIG undefined FUN_1466b0280(void)

longlong FUN_1466b0280(void)

{
  if (DAT_14cc03e58 == 0) {
    FUN_14086a14e(&DAT_14cc03e58,&PTR_FUN_14bafd748);
  }
  return DAT_14cc03e58;
}



// FUNCTION 1466b02b0 FUN_1466b02b0 body=48 status=ok
// SIG undefined FUN_1466b02b0(void)

void FUN_1466b02b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14bb28820;
  return;
}



// FUNCTION 1466b02e0 FUN_1466b02e0 body=576 status=ok
// SIG undefined FUN_1466b02e0(void)

longlong FUN_1466b02e0(void)

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
  if (DAT_14cc03e78 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03e78 = FUN_140002ddd(FUN_1466b0521,uVar3,L"RigVMFunction_MathVectorSelectBool");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"Condition";
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
    local_58[lVar4 * 7] = L"IfTrue";
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
    local_58[lVar4 * 7] = L"IfFalse";
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
    local_58[lVar4 * 7 + 1] = L"FVector";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03e78;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathVectorSelectBool::Execute",&LAB_14911f0ba,
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
  return DAT_14cc03e78;
}



// FUNCTION 1466b0521 FUN_1466b0521 body=47 status=ok
// SIG undefined FUN_1466b0521(void)

longlong FUN_1466b0521(void)

{
  if (DAT_14cc03e70 == 0) {
    FUN_14086a14e(&DAT_14cc03e70,&PTR_FUN_14bafd968);
  }
  return DAT_14cc03e70;
}



// FUNCTION 1466b0550 FUN_1466b0550 body=48 status=ok
// SIG undefined FUN_1466b0550(void)

void FUN_1466b0550(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000058;
  *puVar1 = &PTR_FUN_14bb28a00;
  return;
}



// FUNCTION 1466b0580 FUN_1466b0580 body=408 status=ok
// SIG undefined FUN_1466b0580(void)

longlong FUN_1466b0580(void)

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
  if (DAT_14cc03e90 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03e90 = FUN_140002ddd(FUN_1466b0719,uVar3,L"RigVMFunction_MathVectorDeg");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"FVector";
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
    local_58[lVar4 * 7 + 1] = L"FVector";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03e90;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathVectorDeg::Execute",&LAB_14911f1da,lVar4);
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
  return DAT_14cc03e90;
}



// FUNCTION 1466b0719 FUN_1466b0719 body=47 status=ok
// SIG undefined FUN_1466b0719(void)

longlong FUN_1466b0719(void)

{
  if (DAT_14cc03e88 == 0) {
    FUN_14086a14e(&DAT_14cc03e88,&PTR_FUN_14bafda40);
  }
  return DAT_14cc03e88;
}



// FUNCTION 1466b0748 FUN_1466b0748 body=48 status=ok
// SIG undefined FUN_1466b0748(void)

void FUN_1466b0748(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14bb28be0;
  return;
}



// FUNCTION 1466b0778 FUN_1466b0778 body=408 status=ok
// SIG undefined FUN_1466b0778(void)

longlong FUN_1466b0778(void)

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
  if (DAT_14cc03ea8 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03ea8 = FUN_140002ddd(FUN_1466b0911,uVar3,L"RigVMFunction_MathVectorRad");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"FVector";
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
    local_58[lVar4 * 7 + 1] = L"FVector";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03ea8;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathVectorRad::Execute",&LAB_14911f312,lVar4);
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
  return DAT_14cc03ea8;
}



// FUNCTION 1466b0911 FUN_1466b0911 body=47 status=ok
// SIG undefined FUN_1466b0911(void)

longlong FUN_1466b0911(void)

{
  if (DAT_14cc03ea0 == 0) {
    FUN_14086a14e(&DAT_14cc03ea0,&PTR_FUN_14bafdb18);
  }
  return DAT_14cc03ea0;
}



// FUNCTION 1466b0940 FUN_1466b0940 body=48 status=ok
// SIG undefined FUN_1466b0940(void)

void FUN_1466b0940(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14bb28dc0;
  return;
}



// FUNCTION 1466b0970 FUN_1466b0970 body=413 status=ok
// SIG undefined FUN_1466b0970(void)

longlong FUN_1466b0970(void)

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
  if (DAT_14cc03ec0 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03ec0 = FUN_140002ddd(FUN_1466b0b0e,uVar3,L"RigVMFunction_MathVectorLengthSquared");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"FVector";
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
    lVar4 = DAT_14cc03ec0;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathVectorLengthSquared::Execute",&LAB_14911f44a,
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
  return DAT_14cc03ec0;
}



// FUNCTION 1466b0b0e FUN_1466b0b0e body=47 status=ok
// SIG undefined FUN_1466b0b0e(void)

longlong FUN_1466b0b0e(void)

{
  if (DAT_14cc03eb8 == 0) {
    FUN_14086a14e(&DAT_14cc03eb8,&PTR_FUN_14bafdcb8);
  }
  return DAT_14cc03eb8;
}



// FUNCTION 1466b0b3e FUN_1466b0b3e body=48 status=ok
// SIG undefined FUN_1466b0b3e(void)

void FUN_1466b0b3e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14bb28fa0;
  return;
}



// FUNCTION 1466b0b6e FUN_1466b0b6e body=413 status=ok
// SIG undefined FUN_1466b0b6e(void)

longlong FUN_1466b0b6e(void)

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
  if (DAT_14cc03ed8 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03ed8 = FUN_140002ddd(FUN_1466b0d0c,uVar3,L"RigVMFunction_MathVectorLength");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"FVector";
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
    lVar4 = DAT_14cc03ed8;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathVectorLength::Execute",&LAB_14911f584,lVar4);
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
  return DAT_14cc03ed8;
}



// FUNCTION 1466b0d0c FUN_1466b0d0c body=47 status=ok
// SIG undefined FUN_1466b0d0c(void)

longlong FUN_1466b0d0c(void)

{
  if (DAT_14cc03ed0 == 0) {
    FUN_14086a14e(&DAT_14cc03ed0,&PTR_FUN_14bafde30);
  }
  return DAT_14cc03ed0;
}



// FUNCTION 1466b0d3c FUN_1466b0d3c body=48 status=ok
// SIG undefined FUN_1466b0d3c(void)

void FUN_1466b0d3c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14bb29180;
  return;
}



// FUNCTION 1466b0d6c FUN_1466b0d6c body=497 status=ok
// SIG undefined FUN_1466b0d6c(void)

longlong FUN_1466b0d6c(void)

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
  if (DAT_14cc03ef0 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03ef0 = FUN_140002ddd(FUN_1466b0f5e,uVar3,L"RigVMFunction_MathVectorDistance");
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03ef0;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathVectorDistance::Execute",&LAB_14911f6c6,lVar4)
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
  return DAT_14cc03ef0;
}



// FUNCTION 1466b0f5e FUN_1466b0f5e body=47 status=ok
// SIG undefined FUN_1466b0f5e(void)

longlong FUN_1466b0f5e(void)

{
  if (DAT_14cc03ee8 == 0) {
    FUN_14086a14e(&DAT_14cc03ee8,&PTR_FUN_14bafe000);
  }
  return DAT_14cc03ee8;
}



// FUNCTION 1466b0f8e FUN_1466b0f8e body=48 status=ok
// SIG undefined FUN_1466b0f8e(void)

void FUN_1466b0f8e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14bb29360;
  return;
}



// FUNCTION 1466b0fbe FUN_1466b0fbe body=490 status=ok
// SIG undefined FUN_1466b0fbe(void)

longlong FUN_1466b0fbe(void)

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
  if (DAT_14cc03f08 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03f08 = FUN_140002ddd(FUN_1466b11a9,uVar3,L"RigVMFunction_MathVectorCross");
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"FVector";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03f08;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathVectorCross::Execute",FUN_14911f824,lVar4);
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
  return DAT_14cc03f08;
}



// FUNCTION 1466b11a9 FUN_1466b11a9 body=47 status=ok
// SIG undefined FUN_1466b11a9(void)

longlong FUN_1466b11a9(void)

{
  if (DAT_14cc03f00 == 0) {
    FUN_14086a14e(&DAT_14cc03f00,&PTR_FUN_14bafe0e8);
  }
  return DAT_14cc03f00;
}



// FUNCTION 1466b11d8 FUN_1466b11d8 body=48 status=ok
// SIG undefined FUN_1466b11d8(void)

void FUN_1466b11d8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14bb29540;
  return;
}



// FUNCTION 1466b1208 FUN_1466b1208 body=497 status=ok
// SIG undefined FUN_1466b1208(void)

longlong FUN_1466b1208(void)

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
  if (DAT_14cc03f20 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03f20 = FUN_140002ddd(FUN_1466b13fa,uVar3,L"RigVMFunction_MathVectorDot");
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03f20;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathVectorDot::Execute",&LAB_14911f9d6,lVar4);
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
  return DAT_14cc03f20;
}



// FUNCTION 1466b13fa FUN_1466b13fa body=47 status=ok
// SIG undefined FUN_1466b13fa(void)

longlong FUN_1466b13fa(void)

{
  if (DAT_14cc03f18 == 0) {
    FUN_14086a14e(&DAT_14cc03f18,&PTR_FUN_14bafe298);
  }
  return DAT_14cc03f18;
}



// FUNCTION 1466b142a FUN_1466b142a body=48 status=ok
// SIG undefined FUN_1466b142a(void)

void FUN_1466b142a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14bb29720;
  return;
}



// FUNCTION 1466b145a FUN_1466b145a body=408 status=ok
// SIG undefined FUN_1466b145a(void)

longlong FUN_1466b145a(void)

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
  if (DAT_14cc03f38 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03f38 = FUN_140002ddd(FUN_1466b15f3,uVar3,L"RigVMFunction_MathVectorUnit");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"FVector";
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
    local_58[lVar4 * 7 + 1] = L"FVector";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03f38;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathVectorUnit::Execute",&LAB_14911fb18,lVar4);
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
  return DAT_14cc03f38;
}



// FUNCTION 1466b15f3 FUN_1466b15f3 body=47 status=ok
// SIG undefined FUN_1466b15f3(void)

longlong FUN_1466b15f3(void)

{
  if (DAT_14cc03f30 == 0) {
    FUN_14086a14e(&DAT_14cc03f30,&PTR_FUN_14bafe378);
  }
  return DAT_14cc03f30;
}



// FUNCTION 1466b1622 FUN_1466b1622 body=48 status=ok
// SIG undefined FUN_1466b1622(void)

void FUN_1466b1622(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14bb29900;
  return;
}



// FUNCTION 1466b1652 FUN_1466b1652 body=497 status=ok
// SIG undefined FUN_1466b1652(void)

longlong FUN_1466b1652(void)

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
  if (DAT_14cc03f50 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03f50 = FUN_140002ddd(FUN_1466b1844,uVar3,L"RigVMFunction_MathVectorSetLength");
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
    local_58[lVar4 * 7] = L"Length";
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
    local_58[lVar4 * 7 + 1] = L"FVector";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03f50;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathVectorSetLength::Execute",&LAB_14911fcb0,lVar4
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
  return DAT_14cc03f50;
}



// FUNCTION 1466b1844 FUN_1466b1844 body=47 status=ok
// SIG undefined FUN_1466b1844(void)

longlong FUN_1466b1844(void)

{
  if (DAT_14cc03f48 == 0) {
    FUN_14086a14e(&DAT_14cc03f48,&PTR_FUN_14bafe550);
  }
  return DAT_14cc03f48;
}



// FUNCTION 1466b1874 FUN_1466b1874 body=48 status=ok
// SIG undefined FUN_1466b1874(void)

void FUN_1466b1874(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14bb29ae0;
  return;
}



// FUNCTION 1466b18a4 FUN_1466b18a4 body=580 status=ok
// SIG undefined FUN_1466b18a4(void)

longlong FUN_1466b18a4(void)

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
  if (DAT_14cc03f68 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03f68 = FUN_140002ddd(FUN_1466b1ae9,uVar3,L"RigVMFunction_MathVectorClampLength");
    local_68 = (undefined8 *)0x0;
    uStack_60._0_4_ = 1;
    uStack_60._4_4_ = 0;
    FUN_140c0351c(&local_68,0);
    iVar1 = (uint)uStack_60;
    *local_68 = L"Value";
    local_68[1] = L"FVector";
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
    local_68[lVar4 * 7] = L"MinimumLength";
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
    local_68[lVar4 * 7] = L"MaximumLength";
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
    local_68[lVar4 * 7] = L"Result";
    local_68[lVar4 * 7 + 1] = L"FVector";
    local_68[lVar4 * 7 + 2] = 0;
    (local_68 + lVar4 * 7 + 2)[1] = 0;
    local_68[lVar4 * 7 + 4] = 0;
    (local_68 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03f68;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathVectorClampLength::Execute",&LAB_14911fe7e,
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
  return DAT_14cc03f68;
}



// FUNCTION 1466b1ae9 FUN_1466b1ae9 body=47 status=ok
// SIG undefined FUN_1466b1ae9(void)

longlong FUN_1466b1ae9(void)

{
  if (DAT_14cc03f60 == 0) {
    FUN_14086a14e(&DAT_14cc03f60,&PTR_FUN_14bafe7c8);
  }
  return DAT_14cc03f60;
}



// FUNCTION 1466b1b18 FUN_1466b1b18 body=48 status=ok
// SIG undefined FUN_1466b1b18(void)

void FUN_1466b1b18(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14bb29cc0;
  return;
}



// FUNCTION 1466b1b48 FUN_1466b1b48 body=490 status=ok
// SIG undefined FUN_1466b1b48(void)

longlong FUN_1466b1b48(void)

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
  if (DAT_14cc03f80 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03f80 = FUN_140002ddd(FUN_1466b1d33,uVar3,L"RigVMFunction_MathVectorMirror");
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
    local_58[lVar4 * 7] = L"Normal";
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
    local_58[lVar4 * 7 + 1] = L"FVector";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03f80;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathVectorMirror::Execute",&LAB_149120078,lVar4);
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
  return DAT_14cc03f80;
}



// FUNCTION 1466b1d33 FUN_1466b1d33 body=47 status=ok
// SIG undefined FUN_1466b1d33(void)

longlong FUN_1466b1d33(void)

{
  if (DAT_14cc03f78 == 0) {
    FUN_14086a14e(&DAT_14cc03f78,&PTR_FUN_14bafe988);
  }
  return DAT_14cc03f78;
}



// FUNCTION 1466b1d62 FUN_1466b1d62 body=48 status=ok
// SIG undefined FUN_1466b1d62(void)

void FUN_1466b1d62(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14bb29ea0;
  return;
}



// FUNCTION 1466b1d92 FUN_1466b1d92 body=497 status=ok
// SIG undefined FUN_1466b1d92(void)

longlong FUN_1466b1d92(void)

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
  if (DAT_14cc03f98 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03f98 = FUN_140002ddd(FUN_1466b1f84,uVar3,L"RigVMFunction_MathVectorAngle");
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03f98;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathVectorAngle::Execute",&LAB_1491202c4,lVar4);
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
  return DAT_14cc03f98;
}



// FUNCTION 1466b1f84 FUN_1466b1f84 body=47 status=ok
// SIG undefined FUN_1466b1f84(void)

longlong FUN_1466b1f84(void)

{
  if (DAT_14cc03f90 == 0) {
    FUN_14086a14e(&DAT_14cc03f90,&PTR_FUN_14bafeb48);
  }
  return DAT_14cc03f90;
}



// FUNCTION 1466b1fb4 FUN_1466b1fb4 body=48 status=ok
// SIG undefined FUN_1466b1fb4(void)

void FUN_1466b1fb4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14bb2a080;
  return;
}



// FUNCTION 1466b1fe4 FUN_1466b1fe4 body=497 status=ok
// SIG undefined FUN_1466b1fe4(void)

longlong FUN_1466b1fe4(void)

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
  if (DAT_14cc03fb0 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03fb0 = FUN_140002ddd(FUN_1466b21d6,uVar3,L"RigVMFunction_MathVectorParallel");
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"bool";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03fb0;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathVectorParallel::Execute",&LAB_1491204cc,lVar4)
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
  return DAT_14cc03fb0;
}



// FUNCTION 1466b21d6 FUN_1466b21d6 body=47 status=ok
// SIG undefined FUN_1466b21d6(void)

longlong FUN_1466b21d6(void)

{
  if (DAT_14cc03fa8 == 0) {
    FUN_14086a14e(&DAT_14cc03fa8,&PTR_FUN_14bafed20);
  }
  return DAT_14cc03fa8;
}



// FUNCTION 1466b2206 FUN_1466b2206 body=48 status=ok
// SIG undefined FUN_1466b2206(void)

void FUN_1466b2206(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14bb2a260;
  return;
}



// FUNCTION 1466b2236 FUN_1466b2236 body=497 status=ok
// SIG undefined FUN_1466b2236(void)

longlong FUN_1466b2236(void)

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
  if (DAT_14cc03fc8 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03fc8 = FUN_140002ddd(FUN_1466b2428,uVar3,L"RigVMFunction_MathVectorOrthogonal");
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"bool";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03fc8;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathVectorOrthogonal::Execute",&LAB_14912068e,
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
  return DAT_14cc03fc8;
}



// FUNCTION 1466b2428 FUN_1466b2428 body=47 status=ok
// SIG undefined FUN_1466b2428(void)

longlong FUN_1466b2428(void)

{
  if (DAT_14cc03fc0 == 0) {
    FUN_14086a14e(&DAT_14cc03fc0,&PTR_FUN_14bafef00);
  }
  return DAT_14cc03fc0;
}



// FUNCTION 1466b2458 FUN_1466b2458 body=48 status=ok
// SIG undefined FUN_1466b2458(void)

void FUN_1466b2458(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14bb2a440;
  return;
}



// FUNCTION 1466b2488 FUN_1466b2488 body=583 status=ok
// SIG undefined FUN_1466b2488(void)

longlong FUN_1466b2488(void)

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
  if (DAT_14cc03fe0 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03fe0 = FUN_140002ddd(FUN_1466b26d0,uVar3,L"RigVMFunction_MathVectorBezierFourPoint");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"Bezier";
    local_58[1] = L"FRigVMFourPointBezier";
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
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"Result";
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
    local_58[lVar4 * 7] = L"Tangent";
    local_58[lVar4 * 7 + 1] = L"FVector";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03fe0;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathVectorBezierFourPoint::Execute",&LAB_149120854
                  ,lVar4);
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
  return DAT_14cc03fe0;
}



// FUNCTION 1466b26d0 FUN_1466b26d0 body=47 status=ok
// SIG undefined FUN_1466b26d0(void)

longlong FUN_1466b26d0(void)

{
  if (DAT_14cc03fd8 == 0) {
    FUN_14086a14e(&DAT_14cc03fd8,&PTR_FUN_14baff178);
  }
  return DAT_14cc03fd8;
}



// FUNCTION 1466b2700 FUN_1466b2700 body=48 status=ok
// SIG undefined FUN_1466b2700(void)

void FUN_1466b2700(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000a0;
  *puVar1 = &PTR_FUN_14bb2a620;
  return;
}



// FUNCTION 1466b2730 FUN_1466b2730 body=328 status=ok
// SIG undefined FUN_1466b2730(void)

longlong FUN_1466b2730(void)

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
  if (DAT_14cc03ff8 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03ff8 =
         FUN_140002ddd(FUN_1466b2879,uVar3,L"RigVMFunction_MathVectorMakeBezierFourPoint");
    local_58 = (undefined8 *)0x0;
    uStack_50 = 1;
    FUN_140c0351c(&local_58,0);
    *local_58 = L"Bezier";
    local_58[1] = L"FRigVMFourPointBezier";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    FUN_14001a7b2();
    lVar2 = DAT_14cc03ff8;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathVectorMakeBezierFourPoint::Execute",
                  &DAT_14912095e,lVar2);
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
  return DAT_14cc03ff8;
}



// FUNCTION 1466b2879 FUN_1466b2879 body=47 status=ok
// SIG undefined FUN_1466b2879(void)

longlong FUN_1466b2879(void)

{
  if (DAT_14cc03ff0 == 0) {
    FUN_14086a14e(&DAT_14cc03ff0,&PTR_FUN_14baff2f0);
  }
  return DAT_14cc03ff0;
}



// FUNCTION 1466b28a8 FUN_1466b28a8 body=48 status=ok
// SIG undefined FUN_1466b28a8(void)

void FUN_1466b28a8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000068;
  *puVar1 = &PTR_FUN_14bb2a800;
  return;
}



// FUNCTION 1466b28d8 FUN_1466b28d8 body=1089 status=ok
// SIG undefined FUN_1466b28d8(void)

longlong FUN_1466b28d8(void)

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
  if (DAT_14cc04010 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc04010 = FUN_140002ddd(FUN_1466b2d1a,uVar3,L"RigVMFunction_MathVectorClampSpatially");
    local_68 = (undefined8 *)0x0;
    uStack_60._0_4_ = 1;
    uStack_60._4_4_ = 0;
    FUN_140c0351c(&local_68,0);
    iVar1 = (uint)uStack_60;
    *local_68 = L"Value";
    local_68[1] = L"FVector";
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
    local_68[lVar4 * 7] = L"Axis";
    local_68[lVar4 * 7 + 1] = L"EAxis::Type";
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
    local_68[lVar4 * 7] = L"Type";
    local_68[lVar4 * 7 + 1] = L"ERigVMClampSpatialMode::Type";
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
    local_68[lVar4 * 7] = L"Minimum";
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
    local_68[lVar4 * 7] = L"Maximum";
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
    uVar2 = (uint)uStack_60;
    local_68[lVar4 * 7] = L"bDrawDebug";
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
    local_68[lVar4 * 7] = L"DebugColor";
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
    local_68[lVar4 * 7] = L"DebugThickness";
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
    local_68[lVar4 * 7] = L"Result";
    local_68[lVar4 * 7 + 1] = L"FVector";
    local_68[lVar4 * 7 + 2] = 0;
    (local_68 + lVar4 * 7 + 2)[1] = 0;
    local_68[lVar4 * 7 + 4] = 0;
    (local_68 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc04010;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathVectorClampSpatially::Execute",FUN_149120a2e,
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
  return DAT_14cc04010;
}



// FUNCTION 1466b2d1a FUN_1466b2d1a body=47 status=ok
// SIG undefined FUN_1466b2d1a(void)

longlong FUN_1466b2d1a(void)

{
  if (DAT_14cc04008 == 0) {
    FUN_14086a14e(&DAT_14cc04008,&PTR_FUN_14baff6b8);
  }
  return DAT_14cc04008;
}



// FUNCTION 1466b2d4a FUN_1466b2d4a body=48 status=ok
// SIG undefined FUN_1466b2d4a(void)

void FUN_1466b2d4a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000000c0;
  *puVar1 = &PTR_FUN_14bb2a9e0;
  return;
}



// FUNCTION 1466b2d7a FUN_1466b2d7a body=728 status=ok
// SIG undefined FUN_1466b2d7a(void)

longlong FUN_1466b2d7a(void)

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
  if (DAT_14cc04028 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc04028 = FUN_140002ddd(FUN_1466b3053,uVar3,L"RigVMFunction_MathIntersectPlane");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"Start";
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
    local_58[lVar4 * 7] = L"Direction";
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
    local_58[lVar4 * 7] = L"PlanePoint";
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
    local_58[lVar4 * 7] = L"PlaneNormal";
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
    local_58[lVar4 * 7] = L"Result";
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
    local_58[lVar4 * 7] = L"Distance";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc04028;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathIntersectPlane::Execute",FUN_149120bfc,lVar4);
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
  return DAT_14cc04028;
}



// FUNCTION 1466b3053 FUN_1466b3053 body=47 status=ok
// SIG undefined FUN_1466b3053(void)

longlong FUN_1466b3053(void)

{
  if (DAT_14cc04020 == 0) {
    FUN_14086a14e(&DAT_14cc04020,&PTR_FUN_14baff958);
  }
  return DAT_14cc04020;
}



// FUNCTION 1466b3082 FUN_1466b3082 body=48 status=ok
// SIG undefined FUN_1466b3082(void)

void FUN_1466b3082(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000088;
  *puVar1 = &PTR_FUN_14bb2abc0;
  return;
}



// FUNCTION 1466b30b2 FUN_1466b30b2 body=649 status=ok
// SIG undefined FUN_1466b30b2(void)

longlong FUN_1466b30b2(void)

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
  if (DAT_14cc04040 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc04040 = FUN_140002ddd(FUN_1466b333c,uVar3,L"RigVMFunction_MathDistanceToPlane");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"Point";
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
    local_58[lVar4 * 7] = L"PlanePoint";
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
    local_58[lVar4 * 7] = L"PlaneNormal";
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
    local_58[lVar4 * 7] = L"ClosestPointOnPlane";
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
    local_58[lVar4 * 7] = L"SignedDistance";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc04040;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathDistanceToPlane::Execute",FUN_149120f7a,lVar4)
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
  return DAT_14cc04040;
}



// FUNCTION 1466b333c FUN_1466b333c body=47 status=ok
// SIG undefined FUN_1466b333c(void)

longlong FUN_1466b333c(void)

{
  if (DAT_14cc04038 == 0) {
    FUN_14086a14e(&DAT_14cc04038,&PTR_FUN_14baffc30);
  }
  return DAT_14cc04038;
}



// FUNCTION 1466b336c FUN_1466b336c body=48 status=ok
// SIG undefined FUN_1466b336c(void)

void FUN_1466b336c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000070;
  *puVar1 = &PTR_FUN_14bb2ada0;
  return;
}



// FUNCTION 1466b339c FUN_1466b339c body=490 status=ok
// SIG undefined FUN_1466b339c(void)

longlong FUN_1466b339c(void)

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
  if (DAT_14cc04058 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc04058 = FUN_140002ddd(FUN_1466b3587,uVar3,L"RigVMFunction_MathVectorMakeRelative");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"Global";
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
    local_58[lVar4 * 7] = L"Parent";
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
    local_58[lVar4 * 7] = L"Local";
    local_58[lVar4 * 7 + 1] = L"FVector";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc04058;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathVectorMakeRelative::Execute",&LAB_14912125e,
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
  return DAT_14cc04058;
}



// FUNCTION 1466b3587 FUN_1466b3587 body=47 status=ok
// SIG undefined FUN_1466b3587(void)

longlong FUN_1466b3587(void)

{
  if (DAT_14cc04050 == 0) {
    FUN_14086a14e(&DAT_14cc04050,&PTR_FUN_14baffe10);
  }
  return DAT_14cc04050;
}



// FUNCTION 1466b35b6 FUN_1466b35b6 body=48 status=ok
// SIG undefined FUN_1466b35b6(void)

void FUN_1466b35b6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14bb2af80;
  return;
}



// FUNCTION 1466b35e6 FUN_1466b35e6 body=490 status=ok
// SIG undefined FUN_1466b35e6(void)

longlong FUN_1466b35e6(void)

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
  if (DAT_14cc04070 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc04070 = FUN_140002ddd(FUN_1466b37d1,uVar3,L"RigVMFunction_MathVectorMakeAbsolute");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"Local";
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
    local_58[lVar4 * 7] = L"Parent";
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
    local_58[lVar4 * 7] = L"Global";
    local_58[lVar4 * 7 + 1] = L"FVector";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc04070;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathVectorMakeAbsolute::Execute",&LAB_149121398,
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
  return DAT_14cc04070;
}



// FUNCTION 1466b37d1 FUN_1466b37d1 body=47 status=ok
// SIG undefined FUN_1466b37d1(void)

longlong FUN_1466b37d1(void)

{
  if (DAT_14cc04068 == 0) {
    FUN_14086a14e(&DAT_14cc04068,&PTR_FUN_14baffff0);
  }
  return DAT_14cc04068;
}



// FUNCTION 1466b3800 FUN_1466b3800 body=48 status=ok
// SIG undefined FUN_1466b3800(void)

void FUN_1466b3800(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14bb2b160;
  return;
}



// FUNCTION 1466b3830 FUN_1466b3830 body=660 status=ok
// SIG undefined FUN_1466b3830(void)

longlong FUN_1466b3830(void)

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
  if (DAT_14cc04088 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc04088 = FUN_140002ddd(FUN_1466b3ac5,uVar3,L"RigVMFunction_MathVectorMirrorTransform");
    local_68 = (undefined8 *)0x0;
    uStack_60._0_4_ = 1;
    uStack_60._4_4_ = 0;
    FUN_140c0351c(&local_68,0);
    iVar1 = (uint)uStack_60;
    *local_68 = L"Value";
    local_68[1] = L"FVector";
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
    local_68[lVar4 * 7] = L"MirrorAxis";
    local_68[lVar4 * 7 + 1] = L"EAxis::Type";
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
    local_68[lVar4 * 7] = L"AxisToFlip";
    local_68[lVar4 * 7 + 1] = L"EAxis::Type";
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
    local_68[lVar4 * 7] = L"CentralTransform";
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
    local_68[lVar4 * 7] = L"Result";
    local_68[lVar4 * 7 + 1] = L"FVector";
    local_68[lVar4 * 7 + 2] = 0;
    (local_68 + lVar4 * 7 + 2)[1] = 0;
    local_68[lVar4 * 7 + 4] = 0;
    (local_68 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc04088;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathVectorMirrorTransform::Execute",FUN_1491214d2,
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
  return DAT_14cc04088;
}



// FUNCTION 1466b3ac5 FUN_1466b3ac5 body=47 status=ok
// SIG undefined FUN_1466b3ac5(void)

longlong FUN_1466b3ac5(void)

{
  if (DAT_14cc04080 == 0) {
    FUN_14086a14e(&DAT_14cc04080,&PTR_FUN_14bb00270);
  }
  return DAT_14cc04080;
}



// FUNCTION 1466b3af4 FUN_1466b3af4 body=48 status=ok
// SIG undefined FUN_1466b3af4(void)

void FUN_1466b3af4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000000b0;
  *puVar1 = &PTR_FUN_14bb2b340;
  return;
}



// FUNCTION 1466b3b24 FUN_1466b3b24 body=413 status=ok
// SIG undefined FUN_1466b3b24(void)

longlong FUN_1466b3b24(void)

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
  if (DAT_14cc040a0 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc040a0 = FUN_140002ddd(FUN_1466b3cc2,uVar3,L"RigVMFunction_MathVectorArraySum");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = L"Array";
    local_58[1] = L"TArray<FVector>";
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
    local_58[lVar4 * 7] = &DAT_14ba39ee8;
    local_58[lVar4 * 7 + 1] = L"FVector";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc040a0;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathVectorArraySum::Execute",&LAB_1491216bc,lVar4)
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
  return DAT_14cc040a0;
}



// FUNCTION 1466b3cc2 FUN_1466b3cc2 body=47 status=ok
// SIG undefined FUN_1466b3cc2(void)

longlong FUN_1466b3cc2(void)

{
  if (DAT_14cc04098 == 0) {
    FUN_14086a14e(&DAT_14cc04098,&PTR_FUN_14bb00440);
  }
  return DAT_14cc04098;
}



// FUNCTION 1466b3cf2 FUN_1466b3cf2 body=48 status=ok
// SIG undefined FUN_1466b3cf2(void)

void FUN_1466b3cf2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14bb2b520;
  return;
}



// FUNCTION 1466b3d22 FUN_1466b3d22 body=413 status=ok
// SIG undefined FUN_1466b3d22(void)

longlong FUN_1466b3d22(void)

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
  if (DAT_14cc040b8 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc040b8 = FUN_140002ddd(FUN_1466b3ec0,uVar3,L"RigVMFunction_MathVectorArrayAverage");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = L"Array";
    local_58[1] = L"TArray<FVector>";
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
    local_58[lVar4 * 7] = L"Average";
    local_58[lVar4 * 7 + 1] = L"FVector";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc040b8;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathVectorArrayAverage::Execute",FUN_14912185a,
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
  return DAT_14cc040b8;
}



// FUNCTION 1466b3ec0 FUN_1466b3ec0 body=47 status=ok
// SIG undefined FUN_1466b3ec0(void)

longlong FUN_1466b3ec0(void)

{
  if (DAT_14cc040b0 == 0) {
    FUN_14086a14e(&DAT_14cc040b0,&PTR_FUN_14bb00620);
  }
  return DAT_14cc040b0;
}



// FUNCTION 1466b3ef0 FUN_1466b3ef0 body=48 status=ok
// SIG undefined FUN_1466b3ef0(void)

void FUN_1466b3ef0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14bb2b700;
  return;
}



// FUNCTION 1466b3f20 FUN_1466b3f20 body=40 status=ok
// SIG undefined FUN_1466b3f20(void)

undefined8 FUN_1466b3f20(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466b3f4e FUN_1466b3f4e body=74 status=ok
// SIG undefined FUN_1466b3f4e(void)

undefined8 * FUN_1466b3f4e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bad9ed0;
  FUN_1449db362(param_1 + 0x11);
  FUN_14598baf4(param_1 + 6);
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466b3f98 FUN_1466b3f98 body=29 status=ok
// SIG undefined FUN_1466b3f98(void)

undefined8 FUN_1466b3f98(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466b3fb6 FUN_1466b3fb6 body=29 status=ok
// SIG undefined FUN_1466b3fb6(void)

undefined8 FUN_1466b3fb6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466b3fd4 FUN_1466b3fd4 body=29 status=ok
// SIG undefined FUN_1466b3fd4(void)

undefined8 FUN_1466b3fd4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466b3ff2 FUN_1466b3ff2 body=29 status=ok
// SIG undefined FUN_1466b3ff2(void)

undefined8 FUN_1466b3ff2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466b4010 FUN_1466b4010 body=29 status=ok
// SIG undefined FUN_1466b4010(void)

undefined8 FUN_1466b4010(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466b402e FUN_1466b402e body=29 status=ok
// SIG undefined FUN_1466b402e(void)

undefined8 FUN_1466b402e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466b404c FUN_1466b404c body=29 status=ok
// SIG undefined FUN_1466b404c(void)

undefined8 FUN_1466b404c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466b406a FUN_1466b406a body=29 status=ok
// SIG undefined FUN_1466b406a(void)

undefined8 FUN_1466b406a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466b4088 FUN_1466b4088 body=29 status=ok
// SIG undefined FUN_1466b4088(void)

undefined8 FUN_1466b4088(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466b40a6 FUN_1466b40a6 body=29 status=ok
// SIG undefined FUN_1466b40a6(void)

undefined8 FUN_1466b40a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466b40c4 FUN_1466b40c4 body=29 status=ok
// SIG undefined FUN_1466b40c4(void)

undefined8 FUN_1466b40c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466b40e2 FUN_1466b40e2 body=29 status=ok
// SIG undefined FUN_1466b40e2(void)

undefined8 FUN_1466b40e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466b4100 FUN_1466b4100 body=29 status=ok
// SIG undefined FUN_1466b4100(void)

undefined8 FUN_1466b4100(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466b411e FUN_1466b411e body=29 status=ok
// SIG undefined FUN_1466b411e(void)

undefined8 FUN_1466b411e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466b413c FUN_1466b413c body=29 status=ok
// SIG undefined FUN_1466b413c(void)

undefined8 FUN_1466b413c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466b415a FUN_1466b415a body=29 status=ok
// SIG undefined FUN_1466b415a(void)

undefined8 FUN_1466b415a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466b4178 FUN_1466b4178 body=29 status=ok
// SIG undefined FUN_1466b4178(void)

undefined8 FUN_1466b4178(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466b4196 FUN_1466b4196 body=29 status=ok
// SIG undefined FUN_1466b4196(void)

undefined8 FUN_1466b4196(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466b41b4 FUN_1466b41b4 body=499 status=ok
// SIG undefined FUN_1466b41b4(void)

undefined8 * FUN_1466b41b4(undefined8 *param_1)

{
  undefined ***pppuVar1;
  undefined8 uVar2;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined4 local_d0;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined **local_b8 [13];
  undefined4 local_50;
  undefined1 local_4c;
  undefined1 local_4b;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *param_1 = &PTR_FUN_14bb02f60;
  pppuVar1 = (undefined ***)(param_1 + 2);
  FUN_14109baa4(pppuVar1);
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_14109baa4(local_b8);
  *(undefined4 *)(param_1 + 0xf) = local_50;
  *(undefined1 *)((longlong)param_1 + 0x7c) = local_4c;
  *(undefined1 *)((longlong)param_1 + 0x7d) = local_4b;
  if (pppuVar1 != local_b8) {
    if (param_1[0x10] != 0) {
      FUN_1400020a8();
    }
    param_1[0x10] = local_48;
    local_48 = 0;
    *(undefined4 *)(param_1 + 0x11) = (undefined4)local_40;
    *(undefined4 *)((longlong)param_1 + 0x8c) = local_40._4_4_;
    local_40 = 0;
  }
  if (DAT_14c950c29 == '\x01') {
    if (local_38 == 0) {
      local_38 = 0;
    }
    else {
      FUN_1456cec3c();
    }
  }
  param_1[0x12] = local_38;
  local_b8[0] = (undefined **)&DAT_14a176f00;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  local_b8[0] = &PTR_FUN_14a177080;
  FUN_144a78a1a();
  uVar2 = FUN_1414cd6fa(pppuVar1);
  FUN_14045d416(&local_bc);
  local_d0 = local_bc;
  local_d8 = 0;
  FUN_1406507bc(uVar2,local_b8,0,0);
  uVar2 = FUN_1414cd6fa(pppuVar1);
  FUN_14045d416(&local_c0);
  local_d0 = local_c0;
  local_d8 = 0;
  FUN_1406507bc(uVar2,local_b8,0x3f800000,0x3f800000);
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0x3f800000;
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1466b43a8 FUN_1466b43a8 body=29 status=ok
// SIG undefined FUN_1466b43a8(void)

undefined8 FUN_1466b43a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466b43c6 FUN_1466b43c6 body=29 status=ok
// SIG undefined FUN_1466b43c6(void)

undefined8 FUN_1466b43c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466b43e4 FUN_1466b43e4 body=29 status=ok
// SIG undefined FUN_1466b43e4(void)

undefined8 FUN_1466b43e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466b4402 FUN_1466b4402 body=29 status=ok
// SIG undefined FUN_1466b4402(void)

undefined8 FUN_1466b4402(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466b4420 FUN_1466b4420 body=29 status=ok
// SIG undefined FUN_1466b4420(void)

undefined8 FUN_1466b4420(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466b443e FUN_1466b443e body=29 status=ok
// SIG undefined FUN_1466b443e(void)

undefined8 FUN_1466b443e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466b445c FUN_1466b445c body=29 status=ok
// SIG undefined FUN_1466b445c(void)

undefined8 FUN_1466b445c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466b447a FUN_1466b447a body=29 status=ok
// SIG undefined FUN_1466b447a(void)

undefined8 FUN_1466b447a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466b4498 FUN_1466b4498 body=29 status=ok
// SIG undefined FUN_1466b4498(void)

undefined8 FUN_1466b4498(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466b44b6 FUN_1466b44b6 body=29 status=ok
// SIG undefined FUN_1466b44b6(void)

undefined8 FUN_1466b44b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466b44d4 FUN_1466b44d4 body=29 status=ok
// SIG undefined FUN_1466b44d4(void)

undefined8 FUN_1466b44d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466b44f2 FUN_1466b44f2 body=29 status=ok
// SIG undefined FUN_1466b44f2(void)

undefined8 FUN_1466b44f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466b4510 FUN_1466b4510 body=29 status=ok
// SIG undefined FUN_1466b4510(void)

undefined8 FUN_1466b4510(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466b452e FUN_1466b452e body=29 status=ok
// SIG undefined FUN_1466b452e(void)

undefined8 FUN_1466b452e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466b454c FUN_1466b454c body=29 status=ok
// SIG undefined FUN_1466b454c(void)

undefined8 FUN_1466b454c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466b456a FUN_1466b456a body=29 status=ok
// SIG undefined FUN_1466b456a(void)

undefined8 FUN_1466b456a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466b4588 FUN_1466b4588 body=29 status=ok
// SIG undefined FUN_1466b4588(void)

undefined8 FUN_1466b4588(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


