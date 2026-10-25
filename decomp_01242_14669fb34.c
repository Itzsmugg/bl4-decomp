// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14669fb34 FUN_14669fb34 body=47 status=ok
// SIG undefined FUN_14669fb34(void)

longlong FUN_14669fb34(void)

{
  if (DAT_14cc02d60 == 0) {
    FUN_14086a14e(&DAT_14cc02d60,&PTR_FUN_14baee330);
  }
  return DAT_14cc02d60;
}



// FUNCTION 14669fb64 FUN_14669fb64 body=48 status=ok
// SIG undefined FUN_14669fb64(void)

void FUN_14669fb64(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb19aa0;
  return;
}



// FUNCTION 14669fb94 FUN_14669fb94 body=497 status=ok
// SIG undefined FUN_14669fb94(void)

longlong FUN_14669fb94(void)

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
  if (DAT_14cc02d80 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02d80 = FUN_140002ddd(FUN_14669fd86,uVar3,L"RigVMFunction_MathIntLessEqual");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
    local_58[1] = L"int32";
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"bool";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02d80;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathIntLessEqual::Execute",&LAB_14910be1c,lVar4);
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
  return DAT_14cc02d80;
}



// FUNCTION 14669fd86 FUN_14669fd86 body=47 status=ok
// SIG undefined FUN_14669fd86(void)

longlong FUN_14669fd86(void)

{
  if (DAT_14cc02d78 == 0) {
    FUN_14086a14e(&DAT_14cc02d78,&PTR_FUN_14baee4e8);
  }
  return DAT_14cc02d78;
}



// FUNCTION 14669fdb6 FUN_14669fdb6 body=48 status=ok
// SIG undefined FUN_14669fdb6(void)

void FUN_14669fdb6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb19c80;
  return;
}



// FUNCTION 14669fde6 FUN_14669fde6 body=413 status=ok
// SIG undefined FUN_14669fde6(void)

longlong FUN_14669fde6(void)

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
  if (DAT_14cc02d98 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02d98 = FUN_140002ddd(FUN_14669ff84,uVar3,L"RigVMFunction_MathIntArraySum");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = L"Array";
    local_58[1] = L"TArray<int32>";
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
    local_58[lVar4 * 7 + 1] = L"int32";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02d98;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathIntArraySum::Execute",&LAB_14910bf14,lVar4);
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
  return DAT_14cc02d98;
}



// FUNCTION 14669ff84 FUN_14669ff84 body=47 status=ok
// SIG undefined FUN_14669ff84(void)

longlong FUN_14669ff84(void)

{
  if (DAT_14cc02d90 == 0) {
    FUN_14086a14e(&DAT_14cc02d90,&PTR_FUN_14baee698);
  }
  return DAT_14cc02d90;
}



// FUNCTION 14669ffb4 FUN_14669ffb4 body=48 status=ok
// SIG undefined FUN_14669ffb4(void)

void FUN_14669ffb4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14bb19e60;
  return;
}



// FUNCTION 14669ffe4 FUN_14669ffe4 body=413 status=ok
// SIG undefined FUN_14669ffe4(void)

longlong FUN_14669ffe4(void)

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
  if (DAT_14cc02db0 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02db0 = FUN_140002ddd(FUN_1466a0182,uVar3,L"RigVMFunction_MathIntArrayAverage");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = L"Array";
    local_58[1] = L"TArray<int32>";
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
    local_58[lVar4 * 7 + 1] = L"int32";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02db0;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathIntArrayAverage::Execute",&LAB_14910c04a,lVar4
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
  return DAT_14cc02db0;
}



// FUNCTION 1466a0182 FUN_1466a0182 body=47 status=ok
// SIG undefined FUN_1466a0182(void)

longlong FUN_1466a0182(void)

{
  if (DAT_14cc02da8 == 0) {
    FUN_14086a14e(&DAT_14cc02da8,&PTR_FUN_14baee860);
  }
  return DAT_14cc02da8;
}



// FUNCTION 1466a01b2 FUN_1466a01b2 body=48 status=ok
// SIG undefined FUN_1466a01b2(void)

void FUN_1466a01b2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14bb1a040;
  return;
}



// FUNCTION 1466a01e2 FUN_1466a01e2 body=497 status=ok
// SIG undefined FUN_1466a01e2(void)

longlong FUN_1466a01e2(void)

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
  if (DAT_14cc02dc8 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02dc8 = FUN_140002ddd(FUN_1466a03d4,uVar3,L"RigVMFunction_MathIntToString");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"Number";
    local_58[1] = L"int32";
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
    local_58[lVar4 * 7] = L"PaddedSize";
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"FString";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02dc8;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathIntToString::Execute",&LAB_14910c196,lVar4);
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
  return DAT_14cc02dc8;
}



// FUNCTION 1466a03d4 FUN_1466a03d4 body=47 status=ok
// SIG undefined FUN_1466a03d4(void)

longlong FUN_1466a03d4(void)

{
  if (DAT_14cc02dc0 == 0) {
    FUN_14086a14e(&DAT_14cc02dc0,&PTR_FUN_14baeea38);
  }
  return DAT_14cc02dc0;
}



// FUNCTION 1466a0404 FUN_1466a0404 body=48 status=ok
// SIG undefined FUN_1466a0404(void)

void FUN_1466a0404(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14bb1a220;
  return;
}



// FUNCTION 1466a0434 FUN_1466a0434 body=497 status=ok
// SIG undefined FUN_1466a0434(void)

longlong FUN_1466a0434(void)

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
  if (DAT_14cc02de0 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02de0 = FUN_140002ddd(FUN_1466a0626,uVar3,L"RigVMFunction_MathIntToName");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"Number";
    local_58[1] = L"int32";
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
    local_58[lVar4 * 7] = L"PaddedSize";
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"FName";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02de0;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathIntToName::Execute",&LAB_14910c436,lVar4);
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
  return DAT_14cc02de0;
}



// FUNCTION 1466a0626 FUN_1466a0626 body=47 status=ok
// SIG undefined FUN_1466a0626(void)

longlong FUN_1466a0626(void)

{
  if (DAT_14cc02dd8 == 0) {
    FUN_14086a14e(&DAT_14cc02dd8,&PTR_FUN_14baeebd8);
  }
  return DAT_14cc02dd8;
}



// FUNCTION 1466a0656 FUN_1466a0656 body=48 status=ok
// SIG undefined FUN_1466a0656(void)

void FUN_1466a0656(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb1a400;
  return;
}



// FUNCTION 1466a0686 FUN_1466a0686 body=55 status=ok
// SIG undefined FUN_1466a0686(void)

void FUN_1466a0686(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc03268 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc03268 = FUN_140002ddd(FUN_1466a06bd,uVar1,L"RigVMFunction_MathMatrixBase");
  }
  return;
}



// FUNCTION 1466a06bd FUN_1466a06bd body=49 status=ok
// SIG undefined FUN_1466a06bd(void)

longlong FUN_1466a06bd(void)

{
  if (DAT_14cc03260 == 0) {
    FUN_14086a14e(&DAT_14cc03260,&PTR_FUN_14baef168);
  }
  return DAT_14cc03260;
}



// FUNCTION 1466a06ee FUN_1466a06ee body=48 status=ok
// SIG undefined FUN_1466a06ee(void)

void FUN_1466a06ee(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14bb1a7f0;
  return;
}



// FUNCTION 1466a071e FUN_1466a071e body=55 status=ok
// SIG undefined FUN_1466a071e(void)

void FUN_1466a071e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc03280 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc03280 = FUN_140002ddd(FUN_1466a0755,uVar1,L"RigVMFunction_MathMatrixUnaryOp");
  }
  return;
}



// FUNCTION 1466a0755 FUN_1466a0755 body=47 status=ok
// SIG undefined FUN_1466a0755(void)

longlong FUN_1466a0755(void)

{
  if (DAT_14cc03278 == 0) {
    FUN_14086a14e(&DAT_14cc03278,&PTR_FUN_14baef290);
  }
  return DAT_14cc03278;
}



// FUNCTION 1466a0784 FUN_1466a0784 body=48 status=ok
// SIG undefined FUN_1466a0784(void)

void FUN_1466a0784(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000110;
  *puVar1 = &PTR_FUN_14bb1a9d0;
  return;
}



// FUNCTION 1466a07b4 FUN_1466a07b4 body=55 status=ok
// SIG undefined FUN_1466a07b4(void)

void FUN_1466a07b4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc03298 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc03298 = FUN_140002ddd(FUN_1466a07eb,uVar1,L"RigVMFunction_MathMatrixBinaryOp");
  }
  return;
}



// FUNCTION 1466a07eb FUN_1466a07eb body=47 status=ok
// SIG undefined FUN_1466a07eb(void)

longlong FUN_1466a07eb(void)

{
  if (DAT_14cc03290 == 0) {
    FUN_14086a14e(&DAT_14cc03290,&PTR_FUN_14baef410);
  }
  return DAT_14cc03290;
}



// FUNCTION 1466a081a FUN_1466a081a body=48 status=ok
// SIG undefined FUN_1466a081a(void)

void FUN_1466a081a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000190;
  *puVar1 = &PTR_FUN_14bb1abb0;
  return;
}



// FUNCTION 1466a084a FUN_1466a084a body=55 status=ok
// SIG undefined FUN_1466a084a(void)

void FUN_1466a084a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc032b0 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc032b0 = FUN_140002ddd(FUN_1466a0881,uVar1,L"RigVMFunction_MathMatrixBinaryAggregateOp");
  }
  return;
}



// FUNCTION 1466a0881 FUN_1466a0881 body=47 status=ok
// SIG undefined FUN_1466a0881(void)

longlong FUN_1466a0881(void)

{
  if (DAT_14cc032a8 == 0) {
    FUN_14086a14e(&DAT_14cc032a8,&PTR_FUN_14baef5a8);
  }
  return DAT_14cc032a8;
}



// FUNCTION 1466a08b0 FUN_1466a08b0 body=48 status=ok
// SIG undefined FUN_1466a08b0(void)

void FUN_1466a08b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000190;
  *puVar1 = &PTR_FUN_14bb1ad90;
  return;
}



// FUNCTION 1466a08e0 FUN_1466a08e0 body=413 status=ok
// SIG undefined FUN_1466a08e0(void)

longlong FUN_1466a08e0(void)

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
  if (DAT_14cc032c8 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc032c8 = FUN_140002ddd(FUN_1466a0a7e,uVar3,L"RigVMFunction_MathMatrixToTransform");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"FMatrix";
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
    lVar4 = DAT_14cc032c8;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathMatrixToTransform::Execute",&LAB_14910c6bc,
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
  return DAT_14cc032c8;
}



// FUNCTION 1466a0a7e FUN_1466a0a7e body=47 status=ok
// SIG undefined FUN_1466a0a7e(void)

longlong FUN_1466a0a7e(void)

{
  if (DAT_14cc032c0 == 0) {
    FUN_14086a14e(&DAT_14cc032c0,&PTR_FUN_14baef758);
  }
  return DAT_14cc032c0;
}



// FUNCTION 1466a0aae FUN_1466a0aae body=48 status=ok
// SIG undefined FUN_1466a0aae(void)

void FUN_1466a0aae(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000000f0;
  *puVar1 = &PTR_FUN_14bb1af70;
  return;
}



// FUNCTION 1466a0ade FUN_1466a0ade body=413 status=ok
// SIG undefined FUN_1466a0ade(void)

longlong FUN_1466a0ade(void)

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
  if (DAT_14cc032e0 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc032e0 = FUN_140002ddd(FUN_1466a0c7c,uVar3,L"RigVMFunction_MathMatrixFromTransform");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = L"Transform";
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
    local_58[lVar4 * 7 + 1] = L"FMatrix";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc032e0;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathMatrixFromTransform::Execute",&LAB_14910c7b2,
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
  return DAT_14cc032e0;
}



// FUNCTION 1466a0c7c FUN_1466a0c7c body=47 status=ok
// SIG undefined FUN_1466a0c7c(void)

longlong FUN_1466a0c7c(void)

{
  if (DAT_14cc032d8 == 0) {
    FUN_14086a14e(&DAT_14cc032d8,&PTR_FUN_14baef8f8);
  }
  return DAT_14cc032d8;
}



// FUNCTION 1466a0cac FUN_1466a0cac body=48 status=ok
// SIG undefined FUN_1466a0cac(void)

void FUN_1466a0cac(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000000f0;
  *puVar1 = &PTR_FUN_14bb1b150;
  return;
}



// FUNCTION 1466a0cdc FUN_1466a0cdc body=413 status=ok
// SIG undefined FUN_1466a0cdc(void)

longlong FUN_1466a0cdc(void)

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
  if (DAT_14cc032f8 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc032f8 = FUN_140002ddd(FUN_1466a0e7a,uVar3,L"RigVMFunction_MathMatrixFromTransformV2");
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
    local_58[lVar4 * 7 + 1] = L"FMatrix";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc032f8;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathMatrixFromTransformV2::Execute",&LAB_14910ca10
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
  return DAT_14cc032f8;
}



// FUNCTION 1466a0e7a FUN_1466a0e7a body=47 status=ok
// SIG undefined FUN_1466a0e7a(void)

longlong FUN_1466a0e7a(void)

{
  if (DAT_14cc032f0 == 0) {
    FUN_14086a14e(&DAT_14cc032f0,&PTR_FUN_14baefaa8);
  }
  return DAT_14cc032f0;
}



// FUNCTION 1466a0eaa FUN_1466a0eaa body=48 status=ok
// SIG undefined FUN_1466a0eaa(void)

void FUN_1466a0eaa(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000000f0;
  *puVar1 = &PTR_FUN_14bb1b330;
  return;
}



// FUNCTION 1466a0eda FUN_1466a0eda body=649 status=ok
// SIG undefined FUN_1466a0eda(void)

longlong FUN_1466a0eda(void)

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
  if (DAT_14cc03310 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03310 = FUN_140002ddd(FUN_1466a1164,uVar3,L"RigVMFunction_MathMatrixToVectors");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"FMatrix";
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
    local_58[lVar4 * 7] = L"Origin";
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
    local_58[lVar4 * 7] = &DAT_149e25cc8;
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
    local_58[lVar4 * 7] = &DAT_149e25ccc;
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
    local_58[lVar4 * 7] = &DAT_149e25cd0;
    local_58[lVar4 * 7 + 1] = L"FVector";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03310;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathMatrixToVectors::Execute",&LAB_14910cc6e,lVar4
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
  return DAT_14cc03310;
}



// FUNCTION 1466a1164 FUN_1466a1164 body=47 status=ok
// SIG undefined FUN_1466a1164(void)

longlong FUN_1466a1164(void)

{
  if (DAT_14cc03308 == 0) {
    FUN_14086a14e(&DAT_14cc03308,&PTR_FUN_14baefd10);
  }
  return DAT_14cc03308;
}



// FUNCTION 1466a1194 FUN_1466a1194 body=48 status=ok
// SIG undefined FUN_1466a1194(void)

void FUN_1466a1194(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000000f0;
  *puVar1 = &PTR_FUN_14bb1b490;
  return;
}



// FUNCTION 1466a11c4 FUN_1466a11c4 body=649 status=ok
// SIG undefined FUN_1466a11c4(void)

longlong FUN_1466a11c4(void)

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
  if (DAT_14cc03328 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03328 = FUN_140002ddd(FUN_1466a144e,uVar3,L"RigVMFunction_MathMatrixFromVectors");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"Origin";
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
    local_58[lVar4 * 7] = &DAT_149e25cc8;
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
    local_58[lVar4 * 7] = &DAT_149e25ccc;
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
    local_58[lVar4 * 7] = &DAT_149e25cd0;
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
    local_58[lVar4 * 7 + 1] = L"FMatrix";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03328;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathMatrixFromVectors::Execute",FUN_14910ce14,
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
  return DAT_14cc03328;
}



// FUNCTION 1466a144e FUN_1466a144e body=47 status=ok
// SIG undefined FUN_1466a144e(void)

longlong FUN_1466a144e(void)

{
  if (DAT_14cc03320 == 0) {
    FUN_14086a14e(&DAT_14cc03320,&PTR_FUN_14baeff80);
  }
  return DAT_14cc03320;
}



// FUNCTION 1466a147e FUN_1466a147e body=48 status=ok
// SIG undefined FUN_1466a147e(void)

void FUN_1466a147e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000000f0;
  *puVar1 = &PTR_FUN_14bb1b670;
  return;
}



// FUNCTION 1466a14ae FUN_1466a14ae body=490 status=ok
// SIG undefined FUN_1466a14ae(void)

longlong FUN_1466a14ae(void)

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
  if (DAT_14cc03340 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03340 = FUN_140002ddd(FUN_1466a1699,uVar3,L"RigVMFunction_MathMatrixMul");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
    local_58[1] = L"FMatrix";
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
    local_58[lVar4 * 7 + 1] = L"FMatrix";
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
    local_58[lVar4 * 7 + 1] = L"FMatrix";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03340;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathMatrixMul::Execute",FUN_14910d030,lVar4);
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
  return DAT_14cc03340;
}



// FUNCTION 1466a1699 FUN_1466a1699 body=47 status=ok
// SIG undefined FUN_1466a1699(void)

longlong FUN_1466a1699(void)

{
  if (DAT_14cc03338 == 0) {
    FUN_14086a14e(&DAT_14cc03338,&PTR_FUN_14baf0058);
  }
  return DAT_14cc03338;
}



// FUNCTION 1466a16c8 FUN_1466a16c8 body=48 status=ok
// SIG undefined FUN_1466a16c8(void)

void FUN_1466a16c8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000190;
  *puVar1 = &PTR_FUN_14bb1b850;
  return;
}



// FUNCTION 1466a16f8 FUN_1466a16f8 body=408 status=ok
// SIG undefined FUN_1466a16f8(void)

longlong FUN_1466a16f8(void)

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
  if (DAT_14cc03358 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03358 = FUN_140002ddd(FUN_1466a1891,uVar3,L"RigVMFunction_MathMatrixInverse");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"FMatrix";
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
    local_58[lVar4 * 7 + 1] = L"FMatrix";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03358;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathMatrixInverse::Execute",FUN_14910d196,lVar4);
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
  return DAT_14cc03358;
}



// FUNCTION 1466a1891 FUN_1466a1891 body=47 status=ok
// SIG undefined FUN_1466a1891(void)

longlong FUN_1466a1891(void)

{
  if (DAT_14cc03350 == 0) {
    FUN_14086a14e(&DAT_14cc03350,&PTR_FUN_14baf0148);
  }
  return DAT_14cc03350;
}



// FUNCTION 1466a18c0 FUN_1466a18c0 body=48 status=ok
// SIG undefined FUN_1466a18c0(void)

void FUN_1466a18c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000110;
  *puVar1 = &PTR_FUN_14bb1ba30;
  return;
}



// FUNCTION 1466a18f0 FUN_1466a18f0 body=55 status=ok
// SIG undefined FUN_1466a18f0(void)

void FUN_1466a18f0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc03370 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc03370 = FUN_140002ddd(FUN_141906208,uVar1,L"RigVMFunction_MathQuaternionBase");
  }
  return;
}



// FUNCTION 1466a1928 FUN_1466a1928 body=48 status=ok
// SIG undefined FUN_1466a1928(void)

void FUN_1466a1928(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14bb1bc90;
  return;
}



// FUNCTION 1466a1958 FUN_1466a1958 body=55 status=ok
// SIG undefined FUN_1466a1958(void)

void FUN_1466a1958(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc03388 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc03388 = FUN_140002ddd(FUN_1466a198f,uVar1,L"RigVMFunction_MathQuaternionUnaryOp");
  }
  return;
}



// FUNCTION 1466a198f FUN_1466a198f body=47 status=ok
// SIG undefined FUN_1466a198f(void)

longlong FUN_1466a198f(void)

{
  if (DAT_14cc03380 == 0) {
    FUN_14086a14e(&DAT_14cc03380,&PTR_FUN_14baf04d8);
  }
  return DAT_14cc03380;
}



// FUNCTION 1466a19be FUN_1466a19be body=48 status=ok
// SIG undefined FUN_1466a19be(void)

void FUN_1466a19be(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000050;
  *puVar1 = &PTR_FUN_14bb1be70;
  return;
}



// FUNCTION 1466a19ee FUN_1466a19ee body=55 status=ok
// SIG undefined FUN_1466a19ee(void)

void FUN_1466a19ee(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc033a0 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc033a0 = FUN_140002ddd(FUN_1466a1a25,uVar1,L"RigVMFunction_MathQuaternionBinaryOp");
  }
  return;
}



// FUNCTION 1466a1a25 FUN_1466a1a25 body=47 status=ok
// SIG undefined FUN_1466a1a25(void)

longlong FUN_1466a1a25(void)

{
  if (DAT_14cc03398 == 0) {
    FUN_14086a14e(&DAT_14cc03398,&PTR_FUN_14baf0660);
  }
  return DAT_14cc03398;
}



// FUNCTION 1466a1a54 FUN_1466a1a54 body=48 status=ok
// SIG undefined FUN_1466a1a54(void)

void FUN_1466a1a54(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000070;
  *puVar1 = &PTR_FUN_14bb1c050;
  return;
}



// FUNCTION 1466a1a84 FUN_1466a1a84 body=55 status=ok
// SIG undefined FUN_1466a1a84(void)

void FUN_1466a1a84(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc033b8 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc033b8 =
         FUN_140002ddd(FUN_1466a1abb,uVar1,L"RigVMFunction_MathQuaternionBinaryAggregateOp");
  }
  return;
}



// FUNCTION 1466a1abb FUN_1466a1abb body=47 status=ok
// SIG undefined FUN_1466a1abb(void)

longlong FUN_1466a1abb(void)

{
  if (DAT_14cc033b0 == 0) {
    FUN_14086a14e(&DAT_14cc033b0,&PTR_FUN_14baf0808);
  }
  return DAT_14cc033b0;
}



// FUNCTION 1466a1aea FUN_1466a1aea body=48 status=ok
// SIG undefined FUN_1466a1aea(void)

void FUN_1466a1aea(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000070;
  *puVar1 = &PTR_FUN_14bb1c230;
  return;
}



// FUNCTION 1466a1b1a FUN_1466a1b1a body=649 status=ok
// SIG undefined FUN_1466a1b1a(void)

longlong FUN_1466a1b1a(void)

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
  if (DAT_14cc033d0 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc033d0 = FUN_140002ddd(FUN_1466a1da4,uVar3,L"RigVMFunction_MathQuaternionMake");
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
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = &DAT_149ebbc1a;
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
    local_58[lVar4 * 7 + 1] = L"FQuat";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc033d0;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathQuaternionMake::Execute",&LAB_14910d4dc,lVar4)
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
  return DAT_14cc033d0;
}



// FUNCTION 1466a1da4 FUN_1466a1da4 body=47 status=ok
// SIG undefined FUN_1466a1da4(void)

longlong FUN_1466a1da4(void)

{
  if (DAT_14cc033c8 == 0) {
    FUN_14086a14e(&DAT_14cc033c8,&PTR_FUN_14baf0a50);
  }
  return DAT_14cc033c8;
}



// FUNCTION 1466a1dd4 FUN_1466a1dd4 body=48 status=ok
// SIG undefined FUN_1466a1dd4(void)

void FUN_1466a1dd4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000040;
  *puVar1 = &PTR_FUN_14bb1c410;
  return;
}



// FUNCTION 1466a1e04 FUN_1466a1e04 body=502 status=ok
// SIG undefined FUN_1466a1e04(void)

longlong FUN_1466a1e04(void)

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
  if (DAT_14cc033e8 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc033e8 =
         FUN_140002ddd(FUN_1466a1ffb,uVar3,L"RigVMFunction_MathQuaternionFromAxisAndAngle");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"Axis";
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
    local_58[lVar4 * 7] = L"Angle";
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
    local_58[lVar4 * 7 + 1] = L"FQuat";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc033e8;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathQuaternionFromAxisAndAngle::Execute",
                  &LAB_14910d61a,lVar4);
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
  return DAT_14cc033e8;
}



// FUNCTION 1466a1ffb FUN_1466a1ffb body=47 status=ok
// SIG undefined FUN_1466a1ffb(void)

longlong FUN_1466a1ffb(void)

{
  if (DAT_14cc033e0 == 0) {
    FUN_14086a14e(&DAT_14cc033e0,&PTR_FUN_14baf0c58);
  }
  return DAT_14cc033e0;
}



// FUNCTION 1466a202a FUN_1466a202a body=48 status=ok
// SIG undefined FUN_1466a202a(void)

void FUN_1466a202a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000050;
  *puVar1 = &PTR_FUN_14bb1c5f0;
  return;
}



// FUNCTION 1466a205a FUN_1466a205a body=502 status=ok
// SIG undefined FUN_1466a205a(void)

longlong FUN_1466a205a(void)

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
  if (DAT_14cc03400 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03400 = FUN_140002ddd(FUN_1466a2251,uVar3,L"RigVMFunction_MathQuaternionFromEuler");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"Euler";
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"FQuat";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03400;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathQuaternionFromEuler::Execute",FUN_14910d856,
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
  return DAT_14cc03400;
}



// FUNCTION 1466a2251 FUN_1466a2251 body=47 status=ok
// SIG undefined FUN_1466a2251(void)

longlong FUN_1466a2251(void)

{
  if (DAT_14cc033f8 == 0) {
    FUN_14086a14e(&DAT_14cc033f8,&PTR_FUN_14baf0ec8);
  }
  return DAT_14cc033f8;
}



// FUNCTION 1466a2280 FUN_1466a2280 body=48 status=ok
// SIG undefined FUN_1466a2280(void)

void FUN_1466a2280(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000050;
  *puVar1 = &PTR_FUN_14bb1c7d0;
  return;
}



// FUNCTION 1466a22b0 FUN_1466a22b0 body=413 status=ok
// SIG undefined FUN_1466a22b0(void)

longlong FUN_1466a22b0(void)

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
  if (DAT_14cc03418 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03418 = FUN_140002ddd(FUN_1466a244e,uVar3,L"RigVMFunction_MathQuaternionFromRotator");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = L"Rotator";
    local_58[1] = L"FRotator";
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
    local_58[lVar4 * 7 + 1] = L"FQuat";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03418;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathQuaternionFromRotator::Execute",FUN_1466a247e,
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
  return DAT_14cc03418;
}



// FUNCTION 1466a244e FUN_1466a244e body=47 status=ok
// SIG undefined FUN_1466a244e(void)

longlong FUN_1466a244e(void)

{
  if (DAT_14cc03410 == 0) {
    FUN_14086a14e(&DAT_14cc03410,&PTR_FUN_14baf1078);
  }
  return DAT_14cc03410;
}



// FUNCTION 1466a247e FUN_1466a247e body=87 status=ok
// SIG undefined FUN_1466a247e(void)

void FUN_1466a247e(undefined8 param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined4 *)((undefined8 *)*param_2)[4];
  FUN_144a7484c(*(undefined8 *)*param_2,&local_38);
  puVar1[4] = local_28;
  puVar1[5] = uStack_24;
  puVar1[6] = uStack_20;
  puVar1[7] = uStack_1c;
  *puVar1 = local_38;
  puVar1[1] = uStack_34;
  puVar1[2] = uStack_30;
  puVar1[3] = uStack_2c;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1466a24d6 FUN_1466a24d6 body=48 status=ok
// SIG undefined FUN_1466a24d6(void)

void FUN_1466a24d6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000040;
  *puVar1 = &PTR_FUN_14bb1c9b0;
  return;
}



// FUNCTION 1466a2506 FUN_1466a2506 body=413 status=ok
// SIG undefined FUN_1466a2506(void)

longlong FUN_1466a2506(void)

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
  if (DAT_14cc03430 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03430 = FUN_140002ddd(FUN_1466a26a4,uVar3,L"RigVMFunction_MathQuaternionFromRotatorV2");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"FRotator";
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
    local_58[lVar4 * 7 + 1] = L"FQuat";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03430;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathQuaternionFromRotatorV2::Execute",
                  FUN_14910daaa,lVar4);
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
  return DAT_14cc03430;
}



// FUNCTION 1466a26a4 FUN_1466a26a4 body=47 status=ok
// SIG undefined FUN_1466a26a4(void)

longlong FUN_1466a26a4(void)

{
  if (DAT_14cc03428 == 0) {
    FUN_14086a14e(&DAT_14cc03428,&PTR_FUN_14baf1230);
  }
  return DAT_14cc03428;
}



// FUNCTION 1466a26d4 FUN_1466a26d4 body=48 status=ok
// SIG undefined FUN_1466a26d4(void)

void FUN_1466a26d4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000040;
  *puVar1 = &PTR_FUN_14bb1cb90;
  return;
}



// FUNCTION 1466a2704 FUN_1466a2704 body=497 status=ok
// SIG undefined FUN_1466a2704(void)

longlong FUN_1466a2704(void)

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
  if (DAT_14cc03448 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03448 = FUN_140002ddd(FUN_1466a28f6,uVar3,L"RigVMFunction_MathQuaternionFromTwoVectors")
    ;
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
    local_58[lVar4 * 7 + 1] = L"FQuat";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03448;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathQuaternionFromTwoVectors::Execute",
                  &LAB_14910dbf8,lVar4);
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
  return DAT_14cc03448;
}



// FUNCTION 1466a28f6 FUN_1466a28f6 body=47 status=ok
// SIG undefined FUN_1466a28f6(void)

longlong FUN_1466a28f6(void)

{
  if (DAT_14cc03440 == 0) {
    FUN_14086a14e(&DAT_14cc03440,&PTR_FUN_14baf1438);
  }
  return DAT_14cc03440;
}



// FUNCTION 1466a2926 FUN_1466a2926 body=48 status=ok
// SIG undefined FUN_1466a2926(void)

void FUN_1466a2926(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000060;
  *puVar1 = &PTR_FUN_14bb1ccf0;
  return;
}



// FUNCTION 1466a2956 FUN_1466a2956 body=502 status=ok
// SIG undefined FUN_1466a2956(void)

longlong FUN_1466a2956(void)

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
  if (DAT_14cc03460 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03460 = FUN_140002ddd(FUN_1466a2b4d,uVar3,L"RigVMFunction_MathQuaternionToAxisAndAngle")
    ;
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
    local_58[lVar4 * 7] = L"Axis";
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
    local_58[lVar4 * 7] = L"Angle";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03460;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathQuaternionToAxisAndAngle::Execute",
                  &LAB_14910ddee,lVar4);
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
  return DAT_14cc03460;
}



// FUNCTION 1466a2b4d FUN_1466a2b4d body=47 status=ok
// SIG undefined FUN_1466a2b4d(void)

longlong FUN_1466a2b4d(void)

{
  if (DAT_14cc03458 == 0) {
    FUN_14086a14e(&DAT_14cc03458,&PTR_FUN_14baf1638);
  }
  return DAT_14cc03458;
}



// FUNCTION 1466a2b7c FUN_1466a2b7c body=48 status=ok
// SIG undefined FUN_1466a2b7c(void)

void FUN_1466a2b7c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000050;
  *puVar1 = &PTR_FUN_14bb1ced0;
  return;
}



// FUNCTION 1466a2bac FUN_1466a2bac body=576 status=ok
// SIG undefined FUN_1466a2bac(void)

longlong FUN_1466a2bac(void)

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
  if (DAT_14cc03478 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03478 = FUN_140002ddd(FUN_1466a2ded,uVar3,L"RigVMFunction_MathQuaternionToVectors");
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
    lVar4 = DAT_14cc03478;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathQuaternionToVectors::Execute",&LAB_14910e0fa,
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
  return DAT_14cc03478;
}



// FUNCTION 1466a2ded FUN_1466a2ded body=47 status=ok
// SIG undefined FUN_1466a2ded(void)

longlong FUN_1466a2ded(void)

{
  if (DAT_14cc03470 == 0) {
    FUN_14086a14e(&DAT_14cc03470,&PTR_FUN_14baf1868);
  }
  return DAT_14cc03470;
}



// FUNCTION 1466a2e1c FUN_1466a2e1c body=48 status=ok
// SIG undefined FUN_1466a2e1c(void)

void FUN_1466a2e1c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000080;
  *puVar1 = &PTR_FUN_14bb1d0b0;
  return;
}



// FUNCTION 1466a2e4c FUN_1466a2e4c body=413 status=ok
// SIG undefined FUN_1466a2e4c(void)

longlong FUN_1466a2e4c(void)

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
  if (DAT_14cc03490 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03490 = FUN_140002ddd(FUN_1466a2fea,uVar3,L"RigVMFunction_MathQuaternionScale");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"FQuat";
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
    local_58[lVar4 * 7] = L"Scale";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03490;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathQuaternionScale::Execute",FUN_14910e530,lVar4)
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
  return DAT_14cc03490;
}



// FUNCTION 1466a2fea FUN_1466a2fea body=47 status=ok
// SIG undefined FUN_1466a2fea(void)

longlong FUN_1466a2fea(void)

{
  if (DAT_14cc03488 == 0) {
    FUN_14086a14e(&DAT_14cc03488,&PTR_FUN_14baf19f8);
  }
  return DAT_14cc03488;
}



// FUNCTION 1466a301a FUN_1466a301a body=48 status=ok
// SIG undefined FUN_1466a301a(void)

void FUN_1466a301a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000040;
  *puVar1 = &PTR_FUN_14bb1d290;
  return;
}



// FUNCTION 1466a304a FUN_1466a304a body=497 status=ok
// SIG undefined FUN_1466a304a(void)

longlong FUN_1466a304a(void)

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
  if (DAT_14cc034a8 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc034a8 = FUN_140002ddd(FUN_1466a323c,uVar3,L"RigVMFunction_MathQuaternionScaleV2");
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
    local_58[lVar4 * 7 + 1] = L"FQuat";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc034a8;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathQuaternionScaleV2::Execute",FUN_14910e896,
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
  return DAT_14cc034a8;
}



// FUNCTION 1466a323c FUN_1466a323c body=47 status=ok
// SIG undefined FUN_1466a323c(void)

longlong FUN_1466a323c(void)

{
  if (DAT_14cc034a0 == 0) {
    FUN_14086a14e(&DAT_14cc034a0,&PTR_FUN_14baf1be0);
  }
  return DAT_14cc034a0;
}



// FUNCTION 1466a326c FUN_1466a326c body=48 status=ok
// SIG undefined FUN_1466a326c(void)

void FUN_1466a326c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000060;
  *puVar1 = &PTR_FUN_14bb1d470;
  return;
}



// FUNCTION 1466a329c FUN_1466a329c body=502 status=ok
// SIG undefined FUN_1466a329c(void)

longlong FUN_1466a329c(void)

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
  if (DAT_14cc034c0 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc034c0 = FUN_140002ddd(FUN_1466a3493,uVar3,L"RigVMFunction_MathQuaternionToEuler");
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"FVector";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc034c0;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathQuaternionToEuler::Execute",FUN_14910ec02,
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
  return DAT_14cc034c0;
}



// FUNCTION 1466a3493 FUN_1466a3493 body=47 status=ok
// SIG undefined FUN_1466a3493(void)

longlong FUN_1466a3493(void)

{
  if (DAT_14cc034b8 == 0) {
    FUN_14086a14e(&DAT_14cc034b8,&PTR_FUN_14baf1e08);
  }
  return DAT_14cc034b8;
}



// FUNCTION 1466a34c2 FUN_1466a34c2 body=48 status=ok
// SIG undefined FUN_1466a34c2(void)

void FUN_1466a34c2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000050;
  *puVar1 = &PTR_FUN_14bb1d5d0;
  return;
}



// FUNCTION 1466a34f2 FUN_1466a34f2 body=413 status=ok
// SIG undefined FUN_1466a34f2(void)

longlong FUN_1466a34f2(void)

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
  if (DAT_14cc034d8 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc034d8 = FUN_140002ddd(FUN_1466a3690,uVar3,L"RigVMFunction_MathQuaternionToRotator");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"FQuat";
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
    local_58[lVar4 * 7 + 1] = L"FRotator";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc034d8;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathQuaternionToRotator::Execute",FUN_14910ed60,
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
  return DAT_14cc034d8;
}



// FUNCTION 1466a3690 FUN_1466a3690 body=47 status=ok
// SIG undefined FUN_1466a3690(void)

longlong FUN_1466a3690(void)

{
  if (DAT_14cc034d0 == 0) {
    FUN_14086a14e(&DAT_14cc034d0,&PTR_FUN_14baf1fa8);
  }
  return DAT_14cc034d0;
}



// FUNCTION 1466a36c0 FUN_1466a36c0 body=48 status=ok
// SIG undefined FUN_1466a36c0(void)

void FUN_1466a36c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000050;
  *puVar1 = &PTR_FUN_14bb1d7b0;
  return;
}



// FUNCTION 1466a36f0 FUN_1466a36f0 body=490 status=ok
// SIG undefined FUN_1466a36f0(void)

longlong FUN_1466a36f0(void)

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
  if (DAT_14cc034f0 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc034f0 = FUN_140002ddd(FUN_1466a38db,uVar3,L"RigVMFunction_MathQuaternionMul");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
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
    local_58[lVar4 * 7] = &DAT_149e060e8;
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"FQuat";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc034f0;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathQuaternionMul::Execute",FUN_14910eeae,lVar4);
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
  return DAT_14cc034f0;
}



// FUNCTION 1466a38db FUN_1466a38db body=47 status=ok
// SIG undefined FUN_1466a38db(void)

longlong FUN_1466a38db(void)

{
  if (DAT_14cc034e8 == 0) {
    FUN_14086a14e(&DAT_14cc034e8,&PTR_FUN_14baf2098);
  }
  return DAT_14cc034e8;
}



// FUNCTION 1466a390a FUN_1466a390a body=48 status=ok
// SIG undefined FUN_1466a390a(void)

void FUN_1466a390a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000070;
  *puVar1 = &PTR_FUN_14bb1d990;
  return;
}



// FUNCTION 1466a393a FUN_1466a393a body=408 status=ok
// SIG undefined FUN_1466a393a(void)

longlong FUN_1466a393a(void)

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
  if (DAT_14cc03508 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03508 = FUN_140002ddd(FUN_1466a3ad3,uVar3,L"RigVMFunction_MathQuaternionInverse");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"FQuat";
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
    local_58[lVar4 * 7 + 1] = L"FQuat";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03508;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathQuaternionInverse::Execute",&LAB_14447a788,
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
  return DAT_14cc03508;
}



// FUNCTION 1466a3ad3 FUN_1466a3ad3 body=47 status=ok
// SIG undefined FUN_1466a3ad3(void)

longlong FUN_1466a3ad3(void)

{
  if (DAT_14cc03500 == 0) {
    FUN_14086a14e(&DAT_14cc03500,&PTR_FUN_14baf2198);
  }
  return DAT_14cc03500;
}



// FUNCTION 1466a3b02 FUN_1466a3b02 body=48 status=ok
// SIG undefined FUN_1466a3b02(void)

void FUN_1466a3b02(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000050;
  *puVar1 = &PTR_FUN_14bb1db70;
  return;
}



// FUNCTION 1466a3b32 FUN_1466a3b32 body=576 status=ok
// SIG undefined FUN_1466a3b32(void)

longlong FUN_1466a3b32(void)

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
  if (DAT_14cc03520 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03520 = FUN_140002ddd(FUN_1466a3d73,uVar3,L"RigVMFunction_MathQuaternionSlerp");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
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
    local_58[lVar4 * 7] = &DAT_149e060e8;
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
    local_58[lVar4 * 7 + 1] = L"FQuat";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03520;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathQuaternionSlerp::Execute",FUN_14447a7b2,lVar4)
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
  return DAT_14cc03520;
}



// FUNCTION 1466a3d73 FUN_1466a3d73 body=47 status=ok
// SIG undefined FUN_1466a3d73(void)

longlong FUN_1466a3d73(void)

{
  if (DAT_14cc03518 == 0) {
    FUN_14086a14e(&DAT_14cc03518,&PTR_FUN_14baf23b8);
  }
  return DAT_14cc03518;
}



// FUNCTION 1466a3da2 FUN_1466a3da2 body=48 status=ok
// SIG undefined FUN_1466a3da2(void)

void FUN_1466a3da2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000080;
  *puVar1 = &PTR_FUN_14bb1dd50;
  return;
}



// FUNCTION 1466a3dd2 FUN_1466a3dd2 body=497 status=ok
// SIG undefined FUN_1466a3dd2(void)

longlong FUN_1466a3dd2(void)

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
  if (DAT_14cc03538 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03538 = FUN_140002ddd(FUN_1466a3fc4,uVar3,L"RigVMFunction_MathQuaternionEquals");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
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
    local_58[lVar4 * 7] = &DAT_149e060e8;
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"bool";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03538;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathQuaternionEquals::Execute",&LAB_14910f36e,
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
  return DAT_14cc03538;
}



// FUNCTION 1466a3fc4 FUN_1466a3fc4 body=47 status=ok
// SIG undefined FUN_1466a3fc4(void)

longlong FUN_1466a3fc4(void)

{
  if (DAT_14cc03530 == 0) {
    FUN_14086a14e(&DAT_14cc03530,&PTR_FUN_14baf2590);
  }
  return DAT_14cc03530;
}



// FUNCTION 1466a3ff4 FUN_1466a3ff4 body=48 status=ok
// SIG undefined FUN_1466a3ff4(void)

void FUN_1466a3ff4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000060;
  *puVar1 = &PTR_FUN_14bb1df30;
  return;
}



// FUNCTION 1466a4024 FUN_1466a4024 body=497 status=ok
// SIG undefined FUN_1466a4024(void)

longlong FUN_1466a4024(void)

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
  if (DAT_14cc03550 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03550 = FUN_140002ddd(FUN_1466a4216,uVar3,L"RigVMFunction_MathQuaternionNotEquals");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
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
    local_58[lVar4 * 7] = &DAT_149e060e8;
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"bool";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03550;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathQuaternionNotEquals::Execute",&LAB_14910f4a2,
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
  return DAT_14cc03550;
}



// FUNCTION 1466a4216 FUN_1466a4216 body=47 status=ok
// SIG undefined FUN_1466a4216(void)

longlong FUN_1466a4216(void)

{
  if (DAT_14cc03548 == 0) {
    FUN_14086a14e(&DAT_14cc03548,&PTR_FUN_14baf2780);
  }
  return DAT_14cc03548;
}



// FUNCTION 1466a4246 FUN_1466a4246 body=48 status=ok
// SIG undefined FUN_1466a4246(void)

void FUN_1466a4246(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000060;
  *puVar1 = &PTR_FUN_14bb1e110;
  return;
}



// FUNCTION 1466a4276 FUN_1466a4276 body=576 status=ok
// SIG undefined FUN_1466a4276(void)

longlong FUN_1466a4276(void)

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
  if (DAT_14cc03568 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03568 = FUN_140002ddd(FUN_1466a44b7,uVar3,L"RigVMFunction_MathQuaternionSelectBool");
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
    local_58[lVar4 * 7] = L"IfFalse";
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"FQuat";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03568;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathQuaternionSelectBool::Execute",&LAB_14910f5d6,
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
  return DAT_14cc03568;
}



// FUNCTION 1466a44b7 FUN_1466a44b7 body=47 status=ok
// SIG undefined FUN_1466a44b7(void)

longlong FUN_1466a44b7(void)

{
  if (DAT_14cc03560 == 0) {
    FUN_14086a14e(&DAT_14cc03560,&PTR_FUN_14baf29b8);
  }
  return DAT_14cc03560;
}



// FUNCTION 1466a44e6 FUN_1466a44e6 body=48 status=ok
// SIG undefined FUN_1466a44e6(void)

void FUN_1466a44e6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000070;
  *puVar1 = &PTR_FUN_14bb1e2f0;
  return;
}



// FUNCTION 1466a4516 FUN_1466a4516 body=497 status=ok
// SIG undefined FUN_1466a4516(void)

longlong FUN_1466a4516(void)

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
  if (DAT_14cc03580 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03580 = FUN_140002ddd(FUN_1466a4708,uVar3,L"RigVMFunction_MathQuaternionDot");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
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
    local_58[lVar4 * 7] = &DAT_149e060e8;
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03580;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathQuaternionDot::Execute",&LAB_14910f6f2,lVar4);
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
  return DAT_14cc03580;
}



// FUNCTION 1466a4708 FUN_1466a4708 body=47 status=ok
// SIG undefined FUN_1466a4708(void)

longlong FUN_1466a4708(void)

{
  if (DAT_14cc03578 == 0) {
    FUN_14086a14e(&DAT_14cc03578,&PTR_FUN_14baf2b78);
  }
  return DAT_14cc03578;
}



// FUNCTION 1466a4738 FUN_1466a4738 body=48 status=ok
// SIG undefined FUN_1466a4738(void)

void FUN_1466a4738(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000060;
  *puVar1 = &PTR_FUN_14bb1e4d0;
  return;
}



// FUNCTION 1466a4768 FUN_1466a4768 body=408 status=ok
// SIG undefined FUN_1466a4768(void)

longlong FUN_1466a4768(void)

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
  if (DAT_14cc03598 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03598 = FUN_140002ddd(FUN_1466a4901,uVar3,L"RigVMFunction_MathQuaternionUnit");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"FQuat";
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
    local_58[lVar4 * 7 + 1] = L"FQuat";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03598;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathQuaternionUnit::Execute",&LAB_14910f84c,lVar4)
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
  return DAT_14cc03598;
}



// FUNCTION 1466a4901 FUN_1466a4901 body=47 status=ok
// SIG undefined FUN_1466a4901(void)

longlong FUN_1466a4901(void)

{
  if (DAT_14cc03590 == 0) {
    FUN_14086a14e(&DAT_14cc03590,&PTR_FUN_14baf2c70);
  }
  return DAT_14cc03590;
}



// FUNCTION 1466a4930 FUN_1466a4930 body=48 status=ok
// SIG undefined FUN_1466a4930(void)

void FUN_1466a4930(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000050;
  *puVar1 = &PTR_FUN_14bb1e6b0;
  return;
}



// FUNCTION 1466a4960 FUN_1466a4960 body=497 status=ok
// SIG undefined FUN_1466a4960(void)

longlong FUN_1466a4960(void)

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
  if (DAT_14cc035b0 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc035b0 = FUN_140002ddd(FUN_1466a4b52,uVar3,L"RigVMFunction_MathQuaternionRotateVector");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"Transform";
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
    lVar4 = DAT_14cc035b0;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathQuaternionRotateVector::Execute",
                  &LAB_14910fa0a,lVar4);
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
  return DAT_14cc035b0;
}



// FUNCTION 1466a4b52 FUN_1466a4b52 body=47 status=ok
// SIG undefined FUN_1466a4b52(void)

longlong FUN_1466a4b52(void)

{
  if (DAT_14cc035a8 == 0) {
    FUN_14086a14e(&DAT_14cc035a8,&PTR_FUN_14baf2e68);
  }
  return DAT_14cc035a8;
}



// FUNCTION 1466a4b82 FUN_1466a4b82 body=48 status=ok
// SIG undefined FUN_1466a4b82(void)

void FUN_1466a4b82(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000060;
  *puVar1 = &PTR_FUN_14bb1e890;
  return;
}



// FUNCTION 1466a4bb2 FUN_1466a4bb2 body=502 status=ok
// SIG undefined FUN_1466a4bb2(void)

longlong FUN_1466a4bb2(void)

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
  if (DAT_14cc035c8 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc035c8 = FUN_140002ddd(FUN_1466a4da9,uVar3,L"RigVMFunction_MathQuaternionGetAxis");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"Quaternion";
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
    local_58[lVar4 * 7] = L"Axis";
    local_58[lVar4 * 7 + 1] = L"EAxis::Type";
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
    lVar4 = DAT_14cc035c8;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathQuaternionGetAxis::Execute",&LAB_14910fc1e,
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
  return DAT_14cc035c8;
}



// FUNCTION 1466a4da9 FUN_1466a4da9 body=47 status=ok
// SIG undefined FUN_1466a4da9(void)

longlong FUN_1466a4da9(void)

{
  if (DAT_14cc035c0 == 0) {
    FUN_14086a14e(&DAT_14cc035c0,&PTR_FUN_14baf3080);
  }
  return DAT_14cc035c0;
}



// FUNCTION 1466a4dd8 FUN_1466a4dd8 body=48 status=ok
// SIG undefined FUN_1466a4dd8(void)

void FUN_1466a4dd8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000050;
  *puVar1 = &PTR_FUN_14bb1ea70;
  return;
}



// FUNCTION 1466a4e08 FUN_1466a4e08 body=576 status=ok
// SIG undefined FUN_1466a4e08(void)

longlong FUN_1466a4e08(void)

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
  if (DAT_14cc035e0 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc035e0 = FUN_140002ddd(FUN_1466a5049,uVar3,L"RigVMFunction_MathQuaternionSwingTwist");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"Input";
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
    local_58[lVar4 * 7] = L"TwistAxis";
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
    local_58[lVar4 * 7] = L"Swing";
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
    local_58[lVar4 * 7] = L"Twist";
    local_58[lVar4 * 7 + 1] = L"FQuat";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc035e0;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathQuaternionSwingTwist::Execute",&LAB_140283baa,
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
  return DAT_14cc035e0;
}



// FUNCTION 1466a5049 FUN_1466a5049 body=47 status=ok
// SIG undefined FUN_1466a5049(void)

longlong FUN_1466a5049(void)

{
  if (DAT_14cc035d8 == 0) {
    FUN_14086a14e(&DAT_14cc035d8,&PTR_FUN_14baf32e8);
  }
  return DAT_14cc035d8;
}



// FUNCTION 1466a5078 FUN_1466a5078 body=48 status=ok
// SIG undefined FUN_1466a5078(void)

void FUN_1466a5078(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000090;
  *puVar1 = &PTR_FUN_14bb1ec50;
  return;
}



// FUNCTION 1466a50a8 FUN_1466a50a8 body=328 status=ok
// SIG undefined FUN_1466a50a8(void)

longlong FUN_1466a50a8(void)

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
  if (DAT_14cc035f8 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc035f8 = FUN_140002ddd(FUN_1466a51f1,uVar3,L"RigVMFunction_MathQuaternionRotationOrder");
    local_58 = (undefined8 *)0x0;
    uStack_50 = 1;
    FUN_140c0351c(&local_58,0);
    *local_58 = L"RotationOrder";
    local_58[1] = L"EEulerRotationOrder";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    FUN_14001a7b2();
    lVar2 = DAT_14cc035f8;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathQuaternionRotationOrder::Execute",
                  &DAT_14910fffa,lVar2);
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
  return DAT_14cc035f8;
}



// FUNCTION 1466a51f1 FUN_1466a51f1 body=47 status=ok
// SIG undefined FUN_1466a51f1(void)

longlong FUN_1466a51f1(void)

{
  if (DAT_14cc035f0 == 0) {
    FUN_14086a14e(&DAT_14cc035f0,&PTR_FUN_14baf34a0);
  }
  return DAT_14cc035f0;
}



// FUNCTION 1466a5220 FUN_1466a5220 body=48 status=ok
// SIG undefined FUN_1466a5220(void)

void FUN_1466a5220(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb1ee30;
  return;
}



// FUNCTION 1466a5250 FUN_1466a5250 body=490 status=ok
// SIG undefined FUN_1466a5250(void)

longlong FUN_1466a5250(void)

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
  if (DAT_14cc03610 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03610 = FUN_140002ddd(FUN_1466a543b,uVar3,L"RigVMFunction_MathQuaternionMakeRelative");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"Global";
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
    local_58[lVar4 * 7] = L"Parent";
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
    local_58[lVar4 * 7] = L"Local";
    local_58[lVar4 * 7 + 1] = L"FQuat";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03610;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathQuaternionMakeRelative::Execute",FUN_1491100ca
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
  return DAT_14cc03610;
}



// FUNCTION 1466a543b FUN_1466a543b body=47 status=ok
// SIG undefined FUN_1466a543b(void)

longlong FUN_1466a543b(void)

{
  if (DAT_14cc03608 == 0) {
    FUN_14086a14e(&DAT_14cc03608,&PTR_FUN_14baf36a8);
  }
  return DAT_14cc03608;
}



// FUNCTION 1466a546a FUN_1466a546a body=48 status=ok
// SIG undefined FUN_1466a546a(void)

void FUN_1466a546a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000070;
  *puVar1 = &PTR_FUN_14bb1f010;
  return;
}



// FUNCTION 1466a549a FUN_1466a549a body=490 status=ok
// SIG undefined FUN_1466a549a(void)

longlong FUN_1466a549a(void)

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
  if (DAT_14cc03628 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03628 = FUN_140002ddd(FUN_1466a5685,uVar3,L"RigVMFunction_MathQuaternionMakeAbsolute");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"Local";
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
    local_58[lVar4 * 7] = L"Parent";
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
    local_58[lVar4 * 7] = L"Global";
    local_58[lVar4 * 7 + 1] = L"FQuat";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03628;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathQuaternionMakeAbsolute::Execute",FUN_149110454
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
  return DAT_14cc03628;
}



// FUNCTION 1466a5685 FUN_1466a5685 body=47 status=ok
// SIG undefined FUN_1466a5685(void)

longlong FUN_1466a5685(void)

{
  if (DAT_14cc03620 == 0) {
    FUN_14086a14e(&DAT_14cc03620,&PTR_FUN_14baf38a8);
  }
  return DAT_14cc03620;
}



// FUNCTION 1466a56b4 FUN_1466a56b4 body=48 status=ok
// SIG undefined FUN_1466a56b4(void)

void FUN_1466a56b4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000070;
  *puVar1 = &PTR_FUN_14bb1f1f0;
  return;
}



// FUNCTION 1466a56e4 FUN_1466a56e4 body=660 status=ok
// SIG undefined FUN_1466a56e4(void)

longlong FUN_1466a56e4(void)

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
  if (DAT_14cc03640 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03640 =
         FUN_140002ddd(FUN_1466a5979,uVar3,L"RigVMFunction_MathQuaternionMirrorTransform");
    local_68 = (undefined8 *)0x0;
    uStack_60._0_4_ = 1;
    uStack_60._4_4_ = 0;
    FUN_140c0351c(&local_68,0);
    iVar1 = (uint)uStack_60;
    *local_68 = L"Value";
    local_68[1] = L"FQuat";
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
    local_68[lVar4 * 7 + 1] = L"FQuat";
    local_68[lVar4 * 7 + 2] = 0;
    (local_68 + lVar4 * 7 + 2)[1] = 0;
    local_68[lVar4 * 7 + 4] = 0;
    (local_68 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03640;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathQuaternionMirrorTransform::Execute",
                  FUN_149110776,lVar4);
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
  return DAT_14cc03640;
}



// FUNCTION 1466a5979 FUN_1466a5979 body=47 status=ok
// SIG undefined FUN_1466a5979(void)

longlong FUN_1466a5979(void)

{
  if (DAT_14cc03638 == 0) {
    FUN_14086a14e(&DAT_14cc03638,&PTR_FUN_14baf3ba8);
  }
  return DAT_14cc03638;
}



// FUNCTION 1466a59a8 FUN_1466a59a8 body=48 status=ok
// SIG undefined FUN_1466a59a8(void)

void FUN_1466a59a8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000000c0;
  *puVar1 = &PTR_FUN_14bb1f3d0;
  return;
}



// FUNCTION 1466a59d8 FUN_1466a59d8 body=55 status=ok
// SIG undefined FUN_1466a59d8(void)

void FUN_1466a59d8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc03658 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc03658 = FUN_140002ddd(FUN_1466a5a0f,uVar1,L"RigVMFunction_MathRayBase");
  }
  return;
}



// FUNCTION 1466a5a0f FUN_1466a5a0f body=49 status=ok
// SIG undefined FUN_1466a5a0f(void)

longlong FUN_1466a5a0f(void)

{
  if (DAT_14cc03650 == 0) {
    FUN_14086a14e(&DAT_14cc03650,&PTR_FUN_14baf4108);
  }
  return DAT_14cc03650;
}



// FUNCTION 1466a5a40 FUN_1466a5a40 body=48 status=ok
// SIG undefined FUN_1466a5a40(void)

void FUN_1466a5a40(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14bb1f6b0;
  return;
}



// FUNCTION 1466a5a70 FUN_1466a5a70 body=735 status=ok
// SIG undefined FUN_1466a5a70(void)

longlong FUN_1466a5a70(void)

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
  if (DAT_14cc03670 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03670 = FUN_140002ddd(FUN_1466a5d50,uVar3,L"RigVMFunction_MathRayIntersectRay");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
    local_58[1] = L"FRay";
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
    local_58[lVar4 * 7 + 1] = L"FRay";
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
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"Distance";
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
    local_58[lVar4 * 7] = L"RatioA";
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
    local_58[lVar4 * 7] = L"RatioB";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03670;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathRayIntersectRay::Execute",FUN_149110f58,lVar4)
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
  return DAT_14cc03670;
}



// FUNCTION 1466a5d50 FUN_1466a5d50 body=47 status=ok
// SIG undefined FUN_1466a5d50(void)

longlong FUN_1466a5d50(void)

{
  if (DAT_14cc03668 == 0) {
    FUN_14086a14e(&DAT_14cc03668,&PTR_FUN_14baf43d8);
  }
  return DAT_14cc03668;
}



// FUNCTION 1466a5d80 FUN_1466a5d80 body=48 status=ok
// SIG undefined FUN_1466a5d80(void)

void FUN_1466a5d80(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000090;
  *puVar1 = &PTR_FUN_14bb1f890;
  return;
}



// FUNCTION 1466a5db0 FUN_1466a5db0 body=735 status=ok
// SIG undefined FUN_1466a5db0(void)

longlong FUN_1466a5db0(void)

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
  if (DAT_14cc03688 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03688 = FUN_140002ddd(FUN_1466a6090,uVar3,L"RigVMFunction_MathRayIntersectPlane");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e3a882;
    local_58[1] = L"FRay";
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
    uVar2 = (uint)uStack_50;
    local_58[lVar4 * 7] = L"Distance";
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
    local_58[lVar4 * 7] = L"Ratio";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03688;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathRayIntersectPlane::Execute",FUN_1491113d6,
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
  return DAT_14cc03688;
}



// FUNCTION 1466a6090 FUN_1466a6090 body=47 status=ok
// SIG undefined FUN_1466a6090(void)

longlong FUN_1466a6090(void)

{
  if (DAT_14cc03680 == 0) {
    FUN_14086a14e(&DAT_14cc03680,&PTR_FUN_14baf46c8);
  }
  return DAT_14cc03680;
}



// FUNCTION 1466a60c0 FUN_1466a60c0 body=48 status=ok
// SIG undefined FUN_1466a60c0(void)

void FUN_1466a60c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000088;
  *puVar1 = &PTR_FUN_14bb1fa70;
  return;
}



// FUNCTION 1466a60f0 FUN_1466a60f0 body=502 status=ok
// SIG undefined FUN_1466a60f0(void)

longlong FUN_1466a60f0(void)

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
  if (DAT_14cc036a0 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc036a0 = FUN_140002ddd(FUN_1466a62e7,uVar3,L"RigVMFunction_MathRayGetAt");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e3a882;
    local_58[1] = L"FRay";
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
    local_58[lVar4 * 7] = L"Ratio";
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
    lVar4 = DAT_14cc036a0;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathRayGetAt::Execute",&LAB_149111776,lVar4);
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
  return DAT_14cc036a0;
}



// FUNCTION 1466a62e7 FUN_1466a62e7 body=47 status=ok
// SIG undefined FUN_1466a62e7(void)

longlong FUN_1466a62e7(void)

{
  if (DAT_14cc03698 == 0) {
    FUN_14086a14e(&DAT_14cc03698,&PTR_FUN_14baf4878);
  }
  return DAT_14cc03698;
}



// FUNCTION 1466a6316 FUN_1466a6316 body=48 status=ok
// SIG undefined FUN_1466a6316(void)

void FUN_1466a6316(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000058;
  *puVar1 = &PTR_FUN_14bb1fc50;
  return;
}



// FUNCTION 1466a6346 FUN_1466a6346 body=497 status=ok
// SIG undefined FUN_1466a6346(void)

longlong FUN_1466a6346(void)

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
  if (DAT_14cc036b8 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc036b8 = FUN_140002ddd(FUN_1466a6538,uVar3,L"RigVMFunction_MathRayTransform");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e3a882;
    local_58[1] = L"FRay";
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
    local_58[lVar4 * 7 + 1] = L"FRay";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc036b8;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathRayTransform::Execute",&LAB_1491118cc,lVar4);
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
  return DAT_14cc036b8;
}



// FUNCTION 1466a6538 FUN_1466a6538 body=47 status=ok
// SIG undefined FUN_1466a6538(void)

longlong FUN_1466a6538(void)

{
  if (DAT_14cc036b0 == 0) {
    FUN_14086a14e(&DAT_14cc036b0,&PTR_FUN_14baf4a38);
  }
  return DAT_14cc036b0;
}



// FUNCTION 1466a6568 FUN_1466a6568 body=48 status=ok
// SIG undefined FUN_1466a6568(void)

void FUN_1466a6568(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000000d0;
  *puVar1 = &PTR_FUN_14bb1fe30;
  return;
}



// FUNCTION 1466a6598 FUN_1466a6598 body=47 status=ok
// SIG undefined FUN_1466a6598(void)

longlong FUN_1466a6598(void)

{
  if (DAT_14cc036c8 == 0) {
    FUN_1409ce572(&DAT_14cc036c8,&PTR_FUN_14baf4ba0);
  }
  return DAT_14cc036c8;
}



// FUNCTION 1466a65c7 FUN_1466a65c7 body=47 status=ok
// SIG undefined FUN_1466a65c7(void)

longlong FUN_1466a65c7(void)

{
  if (DAT_14cc036e0 == 0) {
    FUN_1409ce572(&DAT_14cc036e0,&PTR_FUN_14baf4c30);
  }
  return DAT_14cc036e0;
}



// FUNCTION 1466a65f6 FUN_1466a65f6 body=47 status=ok
// SIG undefined FUN_1466a65f6(void)

longlong FUN_1466a65f6(void)

{
  if (DAT_14cc036f8 == 0) {
    FUN_1409ce572(&DAT_14cc036f8,&PTR_FUN_14baf4cb0);
  }
  return DAT_14cc036f8;
}



// FUNCTION 1466a6626 FUN_1466a6626 body=55 status=ok
// SIG undefined FUN_1466a6626(void)

void FUN_1466a6626(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc03718 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc03718 =
         FUN_140002ddd(FUN_1466a665d,uVar1,L"RigVMFunction_MathRBFInterpolateQuatWorkData");
  }
  return;
}



// FUNCTION 1466a665d FUN_1466a665d body=47 status=ok
// SIG undefined FUN_1466a665d(void)

longlong FUN_1466a665d(void)

{
  if (DAT_14cc03710 == 0) {
    FUN_14086a14e(&DAT_14cc03710,&PTR_FUN_14baf4d68);
  }
  return DAT_14cc03710;
}



// FUNCTION 1466a668c FUN_1466a668c body=48 status=ok
// SIG undefined FUN_1466a668c(void)

void FUN_1466a668c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000090;
  *puVar1 = &PTR_FUN_14bb20170;
  return;
}



// FUNCTION 1466a66bc FUN_1466a66bc body=55 status=ok
// SIG undefined FUN_1466a66bc(void)

void FUN_1466a66bc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc03730 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc03730 =
         FUN_140002ddd(FUN_1466a66f3,uVar1,L"RigVMFunction_MathRBFInterpolateVectorWorkData");
  }
  return;
}



// FUNCTION 1466a66f3 FUN_1466a66f3 body=47 status=ok
// SIG undefined FUN_1466a66f3(void)

longlong FUN_1466a66f3(void)

{
  if (DAT_14cc03728 == 0) {
    FUN_14086a14e(&DAT_14cc03728,&PTR_FUN_14baf4e30);
  }
  return DAT_14cc03728;
}



// FUNCTION 1466a6722 FUN_1466a6722 body=48 status=ok
// SIG undefined FUN_1466a6722(void)

void FUN_1466a6722(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000090;
  *puVar1 = &PTR_FUN_14bb202d0;
  return;
}



// FUNCTION 1466a6752 FUN_1466a6752 body=55 status=ok
// SIG undefined FUN_1466a6752(void)

void FUN_1466a6752(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc03748 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc03748 = FUN_140002ddd(FUN_1466a6789,uVar1,L"RigVMFunction_MathRBFInterpolateBase");
  }
  return;
}



// FUNCTION 1466a6789 FUN_1466a6789 body=47 status=ok
// SIG undefined FUN_1466a6789(void)

longlong FUN_1466a6789(void)

{
  if (DAT_14cc03740 == 0) {
    FUN_14086a14e(&DAT_14cc03740,&PTR_FUN_14baf4ed8);
  }
  return DAT_14cc03740;
}



// FUNCTION 1466a67b8 FUN_1466a67b8 body=48 status=ok
// SIG undefined FUN_1466a67b8(void)

void FUN_1466a67b8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14bb20430;
  return;
}



// FUNCTION 1466a67e8 FUN_1466a67e8 body=55 status=ok
// SIG undefined FUN_1466a67e8(void)

void FUN_1466a67e8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc03760 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc03760 = FUN_140002ddd(FUN_1466a681f,uVar1,L"RigVMFunction_MathRBFInterpolateQuatBase");
  }
  return;
}



// FUNCTION 1466a681f FUN_1466a681f body=49 status=ok
// SIG undefined FUN_1466a681f(void)

longlong FUN_1466a681f(void)

{
  if (DAT_14cc03758 == 0) {
    FUN_14086a14e(&DAT_14cc03758,&PTR_FUN_14baf5288);
  }
  return DAT_14cc03758;
}



// FUNCTION 1466a6850 FUN_1466a6850 body=48 status=ok
// SIG undefined FUN_1466a6850(void)

void FUN_1466a6850(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000000f0;
  *puVar1 = &PTR_FUN_14bb20610;
  return;
}



// FUNCTION 1466a6880 FUN_1466a6880 body=55 status=ok
// SIG undefined FUN_1466a6880(void)

void FUN_1466a6880(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc03778 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc03778 = FUN_140002ddd(FUN_1466a68b7,uVar1,L"RigVMFunction_MathRBFInterpolateVectorBase")
    ;
  }
  return;
}



// FUNCTION 1466a68b7 FUN_1466a68b7 body=49 status=ok
// SIG undefined FUN_1466a68b7(void)

longlong FUN_1466a68b7(void)

{
  if (DAT_14cc03770 == 0) {
    FUN_14086a14e(&DAT_14cc03770,&PTR_FUN_14baf5590);
  }
  return DAT_14cc03770;
}



// FUNCTION 1466a68e8 FUN_1466a68e8 body=48 status=ok
// SIG undefined FUN_1466a68e8(void)

void FUN_1466a68e8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000000c0;
  *puVar1 = &PTR_FUN_14bb207f0;
  return;
}



// FUNCTION 1466a6918 FUN_1466a6918 body=55 status=ok
// SIG undefined FUN_1466a6918(void)

void FUN_1466a6918(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc03790 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc03790 = FUN_140002ddd(FUN_1466a694f,uVar1,L"MathRBFInterpolateQuatFloat_Target");
  }
  return;
}



// FUNCTION 1466a694f FUN_1466a694f body=47 status=ok
// SIG undefined FUN_1466a694f(void)

longlong FUN_1466a694f(void)

{
  if (DAT_14cc03788 == 0) {
    FUN_14086a14e(&DAT_14cc03788,&PTR_FUN_14baf56c8);
  }
  return DAT_14cc03788;
}



// FUNCTION 1466a697e FUN_1466a697e body=48 status=ok
// SIG undefined FUN_1466a697e(void)

void FUN_1466a697e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000030;
  *puVar1 = &PTR_FUN_14bb209d0;
  return;
}



// FUNCTION 1466a69ae FUN_1466a69ae body=1013 status=ok
// SIG undefined FUN_1466a69ae(void)

longlong FUN_1466a69ae(void)

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
  if (DAT_14cc037a8 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc037a8 = FUN_140002ddd(FUN_1466a6da4,uVar3,L"RigVMFunction_MathRBFInterpolateQuatFloat");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"Targets";
    local_58[1] = L"TArray<FMathRBFInterpolateQuatFloat_Target>";
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
    local_58[lVar4 * 7] = L"Output";
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
    local_58[lVar4 * 7] = L"Input";
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
    local_58[lVar4 * 7] = L"DistanceFunction";
    local_58[lVar4 * 7 + 1] = L"ERBFQuatDistanceType";
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
    local_58[lVar4 * 7] = L"SmoothingFunction";
    local_58[lVar4 * 7 + 1] = L"ERBFKernelType";
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
    local_58[lVar4 * 7] = L"SmoothingAngle";
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
    local_58[lVar4 * 7] = L"bNormalizeOutput";
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
    local_58[lVar4 * 7] = L"TwistAxis";
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
    local_58[lVar4 * 7] = L"WorkData";
    local_58[lVar4 * 7 + 1] = L"FRigVMFunction_MathRBFInterpolateQuatWorkData";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc037a8;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathRBFInterpolateQuatFloat::Execute",
                  FUN_149111bb0,lVar4);
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
  return DAT_14cc037a8;
}



// FUNCTION 1466a6da4 FUN_1466a6da4 body=47 status=ok
// SIG undefined FUN_1466a6da4(void)

longlong FUN_1466a6da4(void)

{
  if (DAT_14cc037a0 == 0) {
    FUN_14086a14e(&DAT_14cc037a0,&PTR_FUN_14baf5a48);
  }
  return DAT_14cc037a0;
}



// FUNCTION 1466a6dd4 FUN_1466a6dd4 body=48 status=ok
// SIG undefined FUN_1466a6dd4(void)

void FUN_1466a6dd4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000110;
  *puVar1 = &PTR_FUN_14bb20b30;
  return;
}



// FUNCTION 1466a6e04 FUN_1466a6e04 body=55 status=ok
// SIG undefined FUN_1466a6e04(void)

void FUN_1466a6e04(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc037c0 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc037c0 = FUN_140002ddd(FUN_1466a6e3b,uVar1,L"MathRBFInterpolateQuatVector_Target");
  }
  return;
}



// FUNCTION 1466a6e3b FUN_1466a6e3b body=47 status=ok
// SIG undefined FUN_1466a6e3b(void)

longlong FUN_1466a6e3b(void)

{
  if (DAT_14cc037b8 == 0) {
    FUN_14086a14e(&DAT_14cc037b8,&PTR_FUN_14baf5b88);
  }
  return DAT_14cc037b8;
}



// FUNCTION 1466a6e6a FUN_1466a6e6a body=48 status=ok
// SIG undefined FUN_1466a6e6a(void)

void FUN_1466a6e6a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000040;
  *puVar1 = &PTR_FUN_14bb20d10;
  return;
}



// FUNCTION 1466a6e9a FUN_1466a6e9a body=1013 status=ok
// SIG undefined FUN_1466a6e9a(void)

longlong FUN_1466a6e9a(void)

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
  if (DAT_14cc037d8 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc037d8 = FUN_140002ddd(FUN_1466a7290,uVar3,L"RigVMFunction_MathRBFInterpolateQuatVector")
    ;
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"Targets";
    local_58[1] = L"TArray<FMathRBFInterpolateQuatVector_Target>";
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
    local_58[lVar4 * 7] = L"Output";
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
    local_58[lVar4 * 7] = L"Input";
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
    local_58[lVar4 * 7] = L"DistanceFunction";
    local_58[lVar4 * 7 + 1] = L"ERBFQuatDistanceType";
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
    local_58[lVar4 * 7] = L"SmoothingFunction";
    local_58[lVar4 * 7 + 1] = L"ERBFKernelType";
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
    local_58[lVar4 * 7] = L"SmoothingAngle";
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
    local_58[lVar4 * 7] = L"bNormalizeOutput";
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
    local_58[lVar4 * 7] = L"TwistAxis";
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
    local_58[lVar4 * 7] = L"WorkData";
    local_58[lVar4 * 7 + 1] = L"FRigVMFunction_MathRBFInterpolateQuatWorkData";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc037d8;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathRBFInterpolateQuatVector::Execute",
                  FUN_149111ee4,lVar4);
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
  return DAT_14cc037d8;
}



// FUNCTION 1466a7290 FUN_1466a7290 body=47 status=ok
// SIG undefined FUN_1466a7290(void)

longlong FUN_1466a7290(void)

{
  if (DAT_14cc037d0 == 0) {
    FUN_14086a14e(&DAT_14cc037d0,&PTR_FUN_14baf5de8);
  }
  return DAT_14cc037d0;
}



// FUNCTION 1466a72c0 FUN_1466a72c0 body=48 status=ok
// SIG undefined FUN_1466a72c0(void)

void FUN_1466a72c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000120;
  *puVar1 = &PTR_FUN_14bb20e70;
  return;
}



// FUNCTION 1466a72f0 FUN_1466a72f0 body=55 status=ok
// SIG undefined FUN_1466a72f0(void)

void FUN_1466a72f0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc037f0 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc037f0 = FUN_140002ddd(FUN_1466a7327,uVar1,L"MathRBFInterpolateQuatColor_Target");
  }
  return;
}



// FUNCTION 1466a7327 FUN_1466a7327 body=47 status=ok
// SIG undefined FUN_1466a7327(void)

longlong FUN_1466a7327(void)

{
  if (DAT_14cc037e8 == 0) {
    FUN_14086a14e(&DAT_14cc037e8,&PTR_FUN_14baf5f28);
  }
  return DAT_14cc037e8;
}



// FUNCTION 1466a7356 FUN_1466a7356 body=48 status=ok
// SIG undefined FUN_1466a7356(void)

void FUN_1466a7356(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000030;
  *puVar1 = &PTR_FUN_14bb21050;
  return;
}



// FUNCTION 1466a7386 FUN_1466a7386 body=1018 status=ok
// SIG undefined FUN_1466a7386(void)

longlong FUN_1466a7386(void)

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
  if (DAT_14cc03808 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03808 = FUN_140002ddd(FUN_1466a7781,uVar3,L"RigVMFunction_MathRBFInterpolateQuatColor");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"Targets";
    local_58[1] = L"TArray<FMathRBFInterpolateQuatColor_Target>";
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
    local_58[lVar4 * 7] = L"Output";
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
    local_58[lVar4 * 7] = L"Input";
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
    local_58[lVar4 * 7] = L"DistanceFunction";
    local_58[lVar4 * 7 + 1] = L"ERBFQuatDistanceType";
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
    local_58[lVar4 * 7] = L"SmoothingFunction";
    local_58[lVar4 * 7 + 1] = L"ERBFKernelType";
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
    local_58[lVar4 * 7] = L"SmoothingAngle";
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
    local_58[lVar4 * 7] = L"bNormalizeOutput";
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
    local_58[lVar4 * 7] = L"TwistAxis";
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
    local_58[lVar4 * 7] = L"WorkData";
    local_58[lVar4 * 7 + 1] = L"FRigVMFunction_MathRBFInterpolateQuatWorkData";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03808;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathRBFInterpolateQuatColor::Execute",
                  FUN_149112262,lVar4);
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
  return DAT_14cc03808;
}



// FUNCTION 1466a7781 FUN_1466a7781 body=47 status=ok
// SIG undefined FUN_1466a7781(void)

longlong FUN_1466a7781(void)

{
  if (DAT_14cc03800 == 0) {
    FUN_14086a14e(&DAT_14cc03800,&PTR_FUN_14baf6178);
  }
  return DAT_14cc03800;
}



// FUNCTION 1466a77b0 FUN_1466a77b0 body=48 status=ok
// SIG undefined FUN_1466a77b0(void)

void FUN_1466a77b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000110;
  *puVar1 = &PTR_FUN_14bb211b0;
  return;
}



// FUNCTION 1466a77e0 FUN_1466a77e0 body=55 status=ok
// SIG undefined FUN_1466a77e0(void)

void FUN_1466a77e0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc03820 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc03820 = FUN_140002ddd(FUN_1466a7817,uVar1,L"MathRBFInterpolateQuatQuat_Target");
  }
  return;
}



// FUNCTION 1466a7817 FUN_1466a7817 body=47 status=ok
// SIG undefined FUN_1466a7817(void)

longlong FUN_1466a7817(void)

{
  if (DAT_14cc03818 == 0) {
    FUN_14086a14e(&DAT_14cc03818,&PTR_FUN_14baf62b8);
  }
  return DAT_14cc03818;
}



// FUNCTION 1466a7846 FUN_1466a7846 body=48 status=ok
// SIG undefined FUN_1466a7846(void)

void FUN_1466a7846(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000040;
  *puVar1 = &PTR_FUN_14bb21390;
  return;
}



// FUNCTION 1466a7876 FUN_1466a7876 body=1013 status=ok
// SIG undefined FUN_1466a7876(void)

longlong FUN_1466a7876(void)

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
  if (DAT_14cc03838 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03838 = FUN_140002ddd(FUN_1466a7c6c,uVar3,L"RigVMFunction_MathRBFInterpolateQuatQuat");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"Targets";
    local_58[1] = L"TArray<FMathRBFInterpolateQuatQuat_Target>";
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
    local_58[lVar4 * 7] = L"Output";
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
    local_58[lVar4 * 7] = L"Input";
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
    local_58[lVar4 * 7] = L"DistanceFunction";
    local_58[lVar4 * 7 + 1] = L"ERBFQuatDistanceType";
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
    local_58[lVar4 * 7] = L"SmoothingFunction";
    local_58[lVar4 * 7 + 1] = L"ERBFKernelType";
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
    local_58[lVar4 * 7] = L"SmoothingAngle";
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
    local_58[lVar4 * 7] = L"bNormalizeOutput";
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
    local_58[lVar4 * 7] = L"TwistAxis";
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
    local_58[lVar4 * 7] = L"WorkData";
    local_58[lVar4 * 7 + 1] = L"FRigVMFunction_MathRBFInterpolateQuatWorkData";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03838;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathRBFInterpolateQuatQuat::Execute",FUN_1491125e8
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
  return DAT_14cc03838;
}



// FUNCTION 1466a7c6c FUN_1466a7c6c body=47 status=ok
// SIG undefined FUN_1466a7c6c(void)

longlong FUN_1466a7c6c(void)

{
  if (DAT_14cc03830 == 0) {
    FUN_14086a14e(&DAT_14cc03830,&PTR_FUN_14baf6508);
  }
  return DAT_14cc03830;
}



// FUNCTION 1466a7c9c FUN_1466a7c9c body=48 status=ok
// SIG undefined FUN_1466a7c9c(void)

void FUN_1466a7c9c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000120;
  *puVar1 = &PTR_FUN_14bb214f0;
  return;
}



// FUNCTION 1466a7ccc FUN_1466a7ccc body=55 status=ok
// SIG undefined FUN_1466a7ccc(void)

void FUN_1466a7ccc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc03850 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc03850 = FUN_140002ddd(FUN_1466a7d03,uVar1,L"MathRBFInterpolateQuatXform_Target");
  }
  return;
}



// FUNCTION 1466a7d03 FUN_1466a7d03 body=47 status=ok
// SIG undefined FUN_1466a7d03(void)

longlong FUN_1466a7d03(void)

{
  if (DAT_14cc03848 == 0) {
    FUN_14086a14e(&DAT_14cc03848,&PTR_FUN_14baf6648);
  }
  return DAT_14cc03848;
}



// FUNCTION 1466a7d32 FUN_1466a7d32 body=48 status=ok
// SIG undefined FUN_1466a7d32(void)

void FUN_1466a7d32(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000080;
  *puVar1 = &PTR_FUN_14bb216d0;
  return;
}



// FUNCTION 1466a7d62 FUN_1466a7d62 body=1018 status=ok
// SIG undefined FUN_1466a7d62(void)

longlong FUN_1466a7d62(void)

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
  if (DAT_14cc03868 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03868 = FUN_140002ddd(FUN_1466a815d,uVar3,L"RigVMFunction_MathRBFInterpolateQuatXform");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"Targets";
    local_58[1] = L"TArray<FMathRBFInterpolateQuatXform_Target>";
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
    local_58[lVar4 * 7] = L"Output";
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
    local_58[lVar4 * 7] = L"Input";
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
    local_58[lVar4 * 7] = L"DistanceFunction";
    local_58[lVar4 * 7 + 1] = L"ERBFQuatDistanceType";
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
    local_58[lVar4 * 7] = L"SmoothingFunction";
    local_58[lVar4 * 7 + 1] = L"ERBFKernelType";
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
    local_58[lVar4 * 7] = L"SmoothingAngle";
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
    local_58[lVar4 * 7] = L"bNormalizeOutput";
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
    local_58[lVar4 * 7] = L"TwistAxis";
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
    local_58[lVar4 * 7] = L"WorkData";
    local_58[lVar4 * 7 + 1] = L"FRigVMFunction_MathRBFInterpolateQuatWorkData";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03868;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathRBFInterpolateQuatXform::Execute",
                  FUN_149112aa4,lVar4);
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
  return DAT_14cc03868;
}



// FUNCTION 1466a815d FUN_1466a815d body=47 status=ok
// SIG undefined FUN_1466a815d(void)

longlong FUN_1466a815d(void)

{
  if (DAT_14cc03860 == 0) {
    FUN_14086a14e(&DAT_14cc03860,&PTR_FUN_14baf6898);
  }
  return DAT_14cc03860;
}



// FUNCTION 1466a818c FUN_1466a818c body=48 status=ok
// SIG undefined FUN_1466a818c(void)

void FUN_1466a818c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000160;
  *puVar1 = &PTR_FUN_14bb21830;
  return;
}



// FUNCTION 1466a81bc FUN_1466a81bc body=55 status=ok
// SIG undefined FUN_1466a81bc(void)

void FUN_1466a81bc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc03880 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc03880 = FUN_140002ddd(FUN_1466a81f3,uVar1,L"MathRBFInterpolateVectorFloat_Target");
  }
  return;
}



// FUNCTION 1466a81f3 FUN_1466a81f3 body=47 status=ok
// SIG undefined FUN_1466a81f3(void)

longlong FUN_1466a81f3(void)

{
  if (DAT_14cc03878 == 0) {
    FUN_14086a14e(&DAT_14cc03878,&PTR_FUN_14baf69d8);
  }
  return DAT_14cc03878;
}



// FUNCTION 1466a8222 FUN_1466a8222 body=48 status=ok
// SIG undefined FUN_1466a8222(void)

void FUN_1466a8222(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14bb21a10;
  return;
}



// FUNCTION 1466a8252 FUN_1466a8252 body=924 status=ok
// SIG undefined FUN_1466a8252(void)

longlong FUN_1466a8252(void)

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
  if (DAT_14cc03898 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03898 =
         FUN_140002ddd(FUN_1466a85ef,uVar3,L"RigVMFunction_MathRBFInterpolateVectorFloat");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"Targets";
    local_58[1] = L"TArray<FMathRBFInterpolateVectorFloat_Target>";
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
    local_58[lVar4 * 7] = L"Output";
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
    local_58[lVar4 * 7] = L"Input";
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
    local_58[lVar4 * 7] = L"DistanceFunction";
    local_58[lVar4 * 7 + 1] = L"ERBFVectorDistanceType";
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
    local_58[lVar4 * 7] = L"SmoothingFunction";
    local_58[lVar4 * 7 + 1] = L"ERBFKernelType";
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
    local_58[lVar4 * 7] = L"SmoothingRadius";
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
    local_58[lVar4 * 7] = L"bNormalizeOutput";
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
    local_58[lVar4 * 7] = L"WorkData";
    local_58[lVar4 * 7 + 1] = L"FRigVMFunction_MathRBFInterpolateVectorWorkData";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03898;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathRBFInterpolateVectorFloat::Execute",
                  FUN_14911303e,lVar4);
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
  return DAT_14cc03898;
}



// FUNCTION 1466a85ef FUN_1466a85ef body=47 status=ok
// SIG undefined FUN_1466a85ef(void)

longlong FUN_1466a85ef(void)

{
  if (DAT_14cc03890 == 0) {
    FUN_14086a14e(&DAT_14cc03890,&PTR_FUN_14baf6cd8);
  }
  return DAT_14cc03890;
}



// FUNCTION 1466a861e FUN_1466a861e body=48 status=ok
// SIG undefined FUN_1466a861e(void)

void FUN_1466a861e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000000e0;
  *puVar1 = &PTR_FUN_14bb21b70;
  return;
}



// FUNCTION 1466a864e FUN_1466a864e body=55 status=ok
// SIG undefined FUN_1466a864e(void)

void FUN_1466a864e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc038b0 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc038b0 = FUN_140002ddd(FUN_1466a8685,uVar1,L"MathRBFInterpolateVectorVector_Target");
  }
  return;
}



// FUNCTION 1466a8685 FUN_1466a8685 body=47 status=ok
// SIG undefined FUN_1466a8685(void)

longlong FUN_1466a8685(void)

{
  if (DAT_14cc038a8 == 0) {
    FUN_14086a14e(&DAT_14cc038a8,&PTR_FUN_14baf6e18);
  }
  return DAT_14cc038a8;
}



// FUNCTION 1466a86b4 FUN_1466a86b4 body=48 status=ok
// SIG undefined FUN_1466a86b4(void)

void FUN_1466a86b4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14bb21d50;
  return;
}



// FUNCTION 1466a86e4 FUN_1466a86e4 body=924 status=ok
// SIG undefined FUN_1466a86e4(void)

longlong FUN_1466a86e4(void)

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
  if (DAT_14cc038c8 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc038c8 =
         FUN_140002ddd(FUN_1466a8a81,uVar3,L"RigVMFunction_MathRBFInterpolateVectorVector");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"Targets";
    local_58[1] = L"TArray<FMathRBFInterpolateVectorVector_Target>";
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
    local_58[lVar4 * 7] = L"Output";
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
    local_58[lVar4 * 7] = L"Input";
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
    local_58[lVar4 * 7] = L"DistanceFunction";
    local_58[lVar4 * 7 + 1] = L"ERBFVectorDistanceType";
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
    local_58[lVar4 * 7] = L"SmoothingFunction";
    local_58[lVar4 * 7 + 1] = L"ERBFKernelType";
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
    local_58[lVar4 * 7] = L"SmoothingRadius";
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
    local_58[lVar4 * 7] = L"bNormalizeOutput";
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
    local_58[lVar4 * 7] = L"WorkData";
    local_58[lVar4 * 7 + 1] = L"FRigVMFunction_MathRBFInterpolateVectorWorkData";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc038c8;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathRBFInterpolateVectorVector::Execute",
                  FUN_149113324,lVar4);
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
  return DAT_14cc038c8;
}



// FUNCTION 1466a8a81 FUN_1466a8a81 body=47 status=ok
// SIG undefined FUN_1466a8a81(void)

longlong FUN_1466a8a81(void)

{
  if (DAT_14cc038c0 == 0) {
    FUN_14086a14e(&DAT_14cc038c0,&PTR_FUN_14baf7078);
  }
  return DAT_14cc038c0;
}



// FUNCTION 1466a8ab0 FUN_1466a8ab0 body=48 status=ok
// SIG undefined FUN_1466a8ab0(void)

void FUN_1466a8ab0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000000f0;
  *puVar1 = &PTR_FUN_14bb21eb0;
  return;
}



// FUNCTION 1466a8ae0 FUN_1466a8ae0 body=55 status=ok
// SIG undefined FUN_1466a8ae0(void)

void FUN_1466a8ae0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc038e0 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc038e0 = FUN_140002ddd(FUN_1466a8b17,uVar1,L"MathRBFInterpolateVectorColor_Target");
  }
  return;
}



// FUNCTION 1466a8b17 FUN_1466a8b17 body=47 status=ok
// SIG undefined FUN_1466a8b17(void)

longlong FUN_1466a8b17(void)

{
  if (DAT_14cc038d8 == 0) {
    FUN_14086a14e(&DAT_14cc038d8,&PTR_FUN_14baf71b8);
  }
  return DAT_14cc038d8;
}



// FUNCTION 1466a8b46 FUN_1466a8b46 body=48 status=ok
// SIG undefined FUN_1466a8b46(void)

void FUN_1466a8b46(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14bb22090;
  return;
}



// FUNCTION 1466a8b76 FUN_1466a8b76 body=929 status=ok
// SIG undefined FUN_1466a8b76(void)

longlong FUN_1466a8b76(void)

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
  if (DAT_14cc038f8 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc038f8 =
         FUN_140002ddd(FUN_1466a8f18,uVar3,L"RigVMFunction_MathRBFInterpolateVectorColor");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"Targets";
    local_58[1] = L"TArray<FMathRBFInterpolateVectorColor_Target>";
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
    local_58[lVar4 * 7] = L"Output";
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
    local_58[lVar4 * 7] = L"Input";
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
    local_58[lVar4 * 7] = L"DistanceFunction";
    local_58[lVar4 * 7 + 1] = L"ERBFVectorDistanceType";
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
    local_58[lVar4 * 7] = L"SmoothingFunction";
    local_58[lVar4 * 7 + 1] = L"ERBFKernelType";
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
    local_58[lVar4 * 7] = L"SmoothingRadius";
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
    local_58[lVar4 * 7] = L"bNormalizeOutput";
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
    local_58[lVar4 * 7] = L"WorkData";
    local_58[lVar4 * 7 + 1] = L"FRigVMFunction_MathRBFInterpolateVectorWorkData";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc038f8;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathRBFInterpolateVectorColor::Execute",
                  FUN_149113652,lVar4);
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
  return DAT_14cc038f8;
}



// FUNCTION 1466a8f18 FUN_1466a8f18 body=47 status=ok
// SIG undefined FUN_1466a8f18(void)

longlong FUN_1466a8f18(void)

{
  if (DAT_14cc038f0 == 0) {
    FUN_14086a14e(&DAT_14cc038f0,&PTR_FUN_14baf7418);
  }
  return DAT_14cc038f0;
}



// FUNCTION 1466a8f48 FUN_1466a8f48 body=48 status=ok
// SIG undefined FUN_1466a8f48(void)

void FUN_1466a8f48(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000000e0;
  *puVar1 = &PTR_FUN_14bb221f0;
  return;
}



// FUNCTION 1466a8f78 FUN_1466a8f78 body=55 status=ok
// SIG undefined FUN_1466a8f78(void)

void FUN_1466a8f78(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc03910 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc03910 = FUN_140002ddd(FUN_1466a8faf,uVar1,L"MathRBFInterpolateVectorQuat_Target");
  }
  return;
}



// FUNCTION 1466a8faf FUN_1466a8faf body=47 status=ok
// SIG undefined FUN_1466a8faf(void)

longlong FUN_1466a8faf(void)

{
  if (DAT_14cc03908 == 0) {
    FUN_14086a14e(&DAT_14cc03908,&PTR_FUN_14baf7558);
  }
  return DAT_14cc03908;
}



// FUNCTION 1466a8fde FUN_1466a8fde body=48 status=ok
// SIG undefined FUN_1466a8fde(void)

void FUN_1466a8fde(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000040;
  *puVar1 = &PTR_FUN_14bb223d0;
  return;
}



// FUNCTION 1466a900e FUN_1466a900e body=929 status=ok
// SIG undefined FUN_1466a900e(void)

longlong FUN_1466a900e(void)

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
  if (DAT_14cc03928 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03928 = FUN_140002ddd(FUN_1466a93b0,uVar3,L"RigVMFunction_MathRBFInterpolateVectorQuat")
    ;
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"Targets";
    local_58[1] = L"TArray<FMathRBFInterpolateVectorQuat_Target>";
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
    local_58[lVar4 * 7] = L"Output";
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
    local_58[lVar4 * 7] = L"Input";
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
    local_58[lVar4 * 7] = L"DistanceFunction";
    local_58[lVar4 * 7 + 1] = L"ERBFVectorDistanceType";
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
    local_58[lVar4 * 7] = L"SmoothingFunction";
    local_58[lVar4 * 7 + 1] = L"ERBFKernelType";
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
    local_58[lVar4 * 7] = L"SmoothingRadius";
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
    local_58[lVar4 * 7] = L"bNormalizeOutput";
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
    local_58[lVar4 * 7] = L"WorkData";
    local_58[lVar4 * 7 + 1] = L"FRigVMFunction_MathRBFInterpolateVectorWorkData";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03928;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathRBFInterpolateVectorQuat::Execute",
                  FUN_14911398a,lVar4);
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
  return DAT_14cc03928;
}



// FUNCTION 1466a93b0 FUN_1466a93b0 body=47 status=ok
// SIG undefined FUN_1466a93b0(void)

longlong FUN_1466a93b0(void)

{
  if (DAT_14cc03920 == 0) {
    FUN_14086a14e(&DAT_14cc03920,&PTR_FUN_14baf77b8);
  }
  return DAT_14cc03920;
}



// FUNCTION 1466a93e0 FUN_1466a93e0 body=48 status=ok
// SIG undefined FUN_1466a93e0(void)

void FUN_1466a93e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000000f0;
  *puVar1 = &PTR_FUN_14bb22530;
  return;
}



// FUNCTION 1466a9410 FUN_1466a9410 body=55 status=ok
// SIG undefined FUN_1466a9410(void)

void FUN_1466a9410(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc03940 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc03940 = FUN_140002ddd(FUN_1466a9447,uVar1,L"MathRBFInterpolateVectorXform_Target");
  }
  return;
}



// FUNCTION 1466a9447 FUN_1466a9447 body=47 status=ok
// SIG undefined FUN_1466a9447(void)

longlong FUN_1466a9447(void)

{
  if (DAT_14cc03938 == 0) {
    FUN_14086a14e(&DAT_14cc03938,&PTR_FUN_14baf78f8);
  }
  return DAT_14cc03938;
}



// FUNCTION 1466a9476 FUN_1466a9476 body=48 status=ok
// SIG undefined FUN_1466a9476(void)

void FUN_1466a9476(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000080;
  *puVar1 = &PTR_FUN_14bb22710;
  return;
}



// FUNCTION 1466a94a6 FUN_1466a94a6 body=929 status=ok
// SIG undefined FUN_1466a94a6(void)

longlong FUN_1466a94a6(void)

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
  if (DAT_14cc03958 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc03958 =
         FUN_140002ddd(FUN_1466a9848,uVar3,L"RigVMFunction_MathRBFInterpolateVectorXform");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"Targets";
    local_58[1] = L"TArray<FMathRBFInterpolateVectorXform_Target>";
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
    local_58[lVar4 * 7] = L"Output";
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
    local_58[lVar4 * 7] = L"Input";
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
    local_58[lVar4 * 7] = L"DistanceFunction";
    local_58[lVar4 * 7 + 1] = L"ERBFVectorDistanceType";
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
    local_58[lVar4 * 7] = L"SmoothingFunction";
    local_58[lVar4 * 7 + 1] = L"ERBFKernelType";
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
    local_58[lVar4 * 7] = L"SmoothingRadius";
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
    local_58[lVar4 * 7] = L"bNormalizeOutput";
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
    local_58[lVar4 * 7] = L"WorkData";
    local_58[lVar4 * 7 + 1] = L"FRigVMFunction_MathRBFInterpolateVectorWorkData";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc03958;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathRBFInterpolateVectorXform::Execute",
                  FUN_149113df8,lVar4);
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
  return DAT_14cc03958;
}



// FUNCTION 1466a9848 FUN_1466a9848 body=47 status=ok
// SIG undefined FUN_1466a9848(void)

longlong FUN_1466a9848(void)

{
  if (DAT_14cc03950 == 0) {
    FUN_14086a14e(&DAT_14cc03950,&PTR_FUN_14baf7b58);
  }
  return DAT_14cc03950;
}



// FUNCTION 1466a9878 FUN_1466a9878 body=48 status=ok
// SIG undefined FUN_1466a9878(void)

void FUN_1466a9878(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000130;
  *puVar1 = &PTR_FUN_14bb22880;
  return;
}



// FUNCTION 1466a98a8 FUN_1466a98a8 body=55 status=ok
// SIG undefined FUN_1466a98a8(void)

void FUN_1466a98a8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc03970 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc03970 = FUN_140002ddd(FUN_141906239,uVar1,L"RigVMFunction_MathTransformBase");
  }
  return;
}



// FUNCTION 1466a98e0 FUN_1466a98e0 body=48 status=ok
// SIG undefined FUN_1466a98e0(void)

void FUN_1466a98e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14bb22a60;
  return;
}



// FUNCTION 1466a9910 FUN_1466a9910 body=55 status=ok
// SIG undefined FUN_1466a9910(void)

void FUN_1466a9910(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc03988 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc03988 = FUN_140002ddd(FUN_1466a9947,uVar1,L"RigVMFunction_MathTransformMutableBase");
  }
  return;
}



// FUNCTION 1466a9947 FUN_1466a9947 body=47 status=ok
// SIG undefined FUN_1466a9947(void)

longlong FUN_1466a9947(void)

{
  if (DAT_14cc03980 == 0) {
    FUN_14086a14e(&DAT_14cc03980,&PTR_FUN_14baf80e8);
  }
  return DAT_14cc03980;
}



// FUNCTION 1466a9976 FUN_1466a9976 body=48 status=ok
// SIG undefined FUN_1466a9976(void)

void FUN_1466a9976(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000120;
  *puVar1 = &PTR_FUN_14bb22c40;
  return;
}



// FUNCTION 1466a99a6 FUN_1466a99a6 body=55 status=ok
// SIG undefined FUN_1466a99a6(void)

void FUN_1466a99a6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc039a0 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc039a0 = FUN_140002ddd(FUN_1466a99dd,uVar1,L"RigVMFunction_MathTransformUnaryOp");
  }
  return;
}



// FUNCTION 1466a99dd FUN_1466a99dd body=47 status=ok
// SIG undefined FUN_1466a99dd(void)

longlong FUN_1466a99dd(void)

{
  if (DAT_14cc03998 == 0) {
    FUN_14086a14e(&DAT_14cc03998,&PTR_FUN_14baf8228);
  }
  return DAT_14cc03998;
}



// FUNCTION 1466a9a0c FUN_1466a9a0c body=48 status=ok
// SIG undefined FUN_1466a9a0c(void)

void FUN_1466a9a0c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000000d0;
  *puVar1 = &PTR_FUN_14bb22e20;
  return;
}



// FUNCTION 1466a9a3c FUN_1466a9a3c body=55 status=ok
// SIG undefined FUN_1466a9a3c(void)

void FUN_1466a9a3c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc039b8 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc039b8 = FUN_140002ddd(FUN_1466a9a73,uVar1,L"RigVMFunction_MathTransformBinaryOp");
  }
  return;
}



// FUNCTION 1466a9a73 FUN_1466a9a73 body=47 status=ok
// SIG undefined FUN_1466a9a73(void)

longlong FUN_1466a9a73(void)

{
  if (DAT_14cc039b0 == 0) {
    FUN_14086a14e(&DAT_14cc039b0,&PTR_FUN_14baf83b0);
  }
  return DAT_14cc039b0;
}



// FUNCTION 1466a9aa2 FUN_1466a9aa2 body=48 status=ok
// SIG undefined FUN_1466a9aa2(void)

void FUN_1466a9aa2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000130;
  *puVar1 = &PTR_FUN_14bb23000;
  return;
}



// FUNCTION 1466a9ad2 FUN_1466a9ad2 body=55 status=ok
// SIG undefined FUN_1466a9ad2(void)

void FUN_1466a9ad2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc039d0 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc039d0 =
         FUN_140002ddd(FUN_1466a9b09,uVar1,L"RigVMFunction_MathTransformBinaryAggregateOp");
  }
  return;
}



// FUNCTION 1466a9b09 FUN_1466a9b09 body=47 status=ok
// SIG undefined FUN_1466a9b09(void)

longlong FUN_1466a9b09(void)

{
  if (DAT_14cc039c8 == 0) {
    FUN_14086a14e(&DAT_14cc039c8,&PTR_FUN_14baf8558);
  }
  return DAT_14cc039c8;
}



// FUNCTION 1466a9b38 FUN_1466a9b38 body=48 status=ok
// SIG undefined FUN_1466a9b38(void)

void FUN_1466a9b38(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000130;
  *puVar1 = &PTR_FUN_14bb231e0;
  return;
}


