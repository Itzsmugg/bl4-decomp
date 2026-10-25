// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14669514f FUN_14669514f body=47 status=ok
// SIG undefined FUN_14669514f(void)

longlong FUN_14669514f(void)

{
  if (DAT_14cc02580 == 0) {
    FUN_14086a14e(&DAT_14cc02580,&PTR_FUN_14bae69c0);
  }
  return DAT_14cc02580;
}



// FUNCTION 14669517e FUN_14669517e body=48 status=ok
// SIG undefined FUN_14669517e(void)

void FUN_14669517e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb0fd20;
  return;
}



// FUNCTION 1466951ae FUN_1466951ae body=408 status=ok
// SIG undefined FUN_1466951ae(void)

longlong FUN_1466951ae(void)

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
  if (DAT_14cc025a0 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc025a0 = FUN_140002ddd(FUN_146695347,uVar3,L"RigVMFunction_MathDoubleAsin");
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
    lVar4 = DAT_14cc025a0;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathDoubleAsin::Execute",FUN_1491068ec,lVar4);
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
  return DAT_14cc025a0;
}



// FUNCTION 146695347 FUN_146695347 body=47 status=ok
// SIG undefined FUN_146695347(void)

longlong FUN_146695347(void)

{
  if (DAT_14cc02598 == 0) {
    FUN_14086a14e(&DAT_14cc02598,&PTR_FUN_14bae6aa0);
  }
  return DAT_14cc02598;
}



// FUNCTION 146695376 FUN_146695376 body=48 status=ok
// SIG undefined FUN_146695376(void)

void FUN_146695376(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb0ff00;
  return;
}



// FUNCTION 1466953a6 FUN_1466953a6 body=408 status=ok
// SIG undefined FUN_1466953a6(void)

longlong FUN_1466953a6(void)

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
  if (DAT_14cc025b8 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc025b8 = FUN_140002ddd(FUN_14669553f,uVar3,L"RigVMFunction_MathDoubleAcos");
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
    lVar4 = DAT_14cc025b8;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathDoubleAcos::Execute",FUN_149106a7e,lVar4);
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
  return DAT_14cc025b8;
}



// FUNCTION 14669553f FUN_14669553f body=47 status=ok
// SIG undefined FUN_14669553f(void)

longlong FUN_14669553f(void)

{
  if (DAT_14cc025b0 == 0) {
    FUN_14086a14e(&DAT_14cc025b0,&PTR_FUN_14bae6b80);
  }
  return DAT_14cc025b0;
}



// FUNCTION 14669556e FUN_14669556e body=48 status=ok
// SIG undefined FUN_14669556e(void)

void FUN_14669556e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb100e0;
  return;
}



// FUNCTION 14669559e FUN_14669559e body=408 status=ok
// SIG undefined FUN_14669559e(void)

longlong FUN_14669559e(void)

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
  if (DAT_14cc025d0 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc025d0 = FUN_140002ddd(FUN_146695737,uVar3,L"RigVMFunction_MathDoubleAtan");
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
    lVar4 = DAT_14cc025d0;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathDoubleAtan::Execute",FUN_149106c10,lVar4);
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
  return DAT_14cc025d0;
}



// FUNCTION 146695737 FUN_146695737 body=47 status=ok
// SIG undefined FUN_146695737(void)

longlong FUN_146695737(void)

{
  if (DAT_14cc025c8 == 0) {
    FUN_14086a14e(&DAT_14cc025c8,&PTR_FUN_14bae6c60);
  }
  return DAT_14cc025c8;
}



// FUNCTION 146695766 FUN_146695766 body=48 status=ok
// SIG undefined FUN_146695766(void)

void FUN_146695766(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb102c0;
  return;
}



// FUNCTION 146695796 FUN_146695796 body=490 status=ok
// SIG undefined FUN_146695796(void)

longlong FUN_146695796(void)

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
  if (DAT_14cc025e8 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc025e8 = FUN_140002ddd(FUN_146695981,uVar3,L"RigVMFunction_MathDoubleAtan2");
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
    lVar4 = DAT_14cc025e8;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathDoubleAtan2::Execute",FUN_149106d14,lVar4);
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
  return DAT_14cc025e8;
}



// FUNCTION 146695981 FUN_146695981 body=47 status=ok
// SIG undefined FUN_146695981(void)

longlong FUN_146695981(void)

{
  if (DAT_14cc025e0 == 0) {
    FUN_14086a14e(&DAT_14cc025e0,&PTR_FUN_14bae6d48);
  }
  return DAT_14cc025e0;
}



// FUNCTION 1466959b0 FUN_1466959b0 body=48 status=ok
// SIG undefined FUN_1466959b0(void)

void FUN_1466959b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14bb104a0;
  return;
}



// FUNCTION 1466959e0 FUN_1466959e0 body=810 status=ok
// SIG undefined FUN_1466959e0(void)

longlong FUN_1466959e0(void)

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
  if (DAT_14cc02600 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02600 = FUN_140002ddd(FUN_146695d0b,uVar3,L"RigVMFunction_MathDoubleLawOfCosine");
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
    local_58[lVar4 * 7] = &DAT_149e25bec;
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
    local_58[lVar4 * 7] = L"AlphaAngle";
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
    local_58[lVar4 * 7] = L"BetaAngle";
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
    local_58[lVar4 * 7] = L"GammaAngle";
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
    local_58[lVar4 * 7] = L"bValid";
    local_58[lVar4 * 7 + 1] = L"bool";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02600;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathDoubleLawOfCosine::Execute",FUN_149106e24,
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
  return DAT_14cc02600;
}



// FUNCTION 146695d0b FUN_146695d0b body=47 status=ok
// SIG undefined FUN_146695d0b(void)

longlong FUN_146695d0b(void)

{
  if (DAT_14cc025f8 == 0) {
    FUN_14086a14e(&DAT_14cc025f8,&PTR_FUN_14bae70a0);
  }
  return DAT_14cc025f8;
}



// FUNCTION 146695d3a FUN_146695d3a body=48 status=ok
// SIG undefined FUN_146695d3a(void)

void FUN_146695d3a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14bb10680;
  return;
}



// FUNCTION 146695d6a FUN_146695d6a body=408 status=ok
// SIG undefined FUN_146695d6a(void)

longlong FUN_146695d6a(void)

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
  if (DAT_14cc02618 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02618 = FUN_140002ddd(FUN_146695f03,uVar3,L"RigVMFunction_MathDoubleExponential");
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
    lVar4 = DAT_14cc02618;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathDoubleExponential::Execute",FUN_149107152,
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
  return DAT_14cc02618;
}



// FUNCTION 146695f03 FUN_146695f03 body=47 status=ok
// SIG undefined FUN_146695f03(void)

longlong FUN_146695f03(void)

{
  if (DAT_14cc02610 == 0) {
    FUN_14086a14e(&DAT_14cc02610,&PTR_FUN_14bae71a0);
  }
  return DAT_14cc02610;
}



// FUNCTION 146695f32 FUN_146695f32 body=48 status=ok
// SIG undefined FUN_146695f32(void)

void FUN_146695f32(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb10860;
  return;
}



// FUNCTION 146695f62 FUN_146695f62 body=413 status=ok
// SIG undefined FUN_146695f62(void)

longlong FUN_146695f62(void)

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
  if (DAT_14cc02630 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02630 = FUN_140002ddd(FUN_146696100,uVar3,L"RigVMFunction_MathDoubleArraySum");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = L"Array";
    local_58[1] = L"TArray<double>";
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
    local_58[lVar4 * 7 + 1] = L"double";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02630;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathDoubleArraySum::Execute",&LAB_149107256,lVar4)
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
  return DAT_14cc02630;
}



// FUNCTION 146696100 FUN_146696100 body=47 status=ok
// SIG undefined FUN_146696100(void)

longlong FUN_146696100(void)

{
  if (DAT_14cc02628 == 0) {
    FUN_14086a14e(&DAT_14cc02628,&PTR_FUN_14bae7360);
  }
  return DAT_14cc02628;
}



// FUNCTION 146696130 FUN_146696130 body=48 status=ok
// SIG undefined FUN_146696130(void)

void FUN_146696130(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14bb10a40;
  return;
}



// FUNCTION 146696160 FUN_146696160 body=413 status=ok
// SIG undefined FUN_146696160(void)

longlong FUN_146696160(void)

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
  if (DAT_14cc02648 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02648 = FUN_140002ddd(FUN_1466962fe,uVar3,L"RigVMFunction_MathDoubleArrayAverage");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = L"Array";
    local_58[1] = L"TArray<double>";
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
    local_58[lVar4 * 7 + 1] = L"double";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02648;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathDoubleArrayAverage::Execute",&LAB_14910739e,
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
  return DAT_14cc02648;
}



// FUNCTION 1466962fe FUN_1466962fe body=47 status=ok
// SIG undefined FUN_1466962fe(void)

longlong FUN_1466962fe(void)

{
  if (DAT_14cc02640 == 0) {
    FUN_14086a14e(&DAT_14cc02640,&PTR_FUN_14bae7540);
  }
  return DAT_14cc02640;
}



// FUNCTION 14669632e FUN_14669632e body=48 status=ok
// SIG undefined FUN_14669632e(void)

void FUN_14669632e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14bb10c20;
  return;
}



// FUNCTION 14669635e FUN_14669635e body=55 status=ok
// SIG undefined FUN_14669635e(void)

void FUN_14669635e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc02660 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc02660 = FUN_140002ddd(FUN_1419061a6,uVar1,L"RigVMFunction_MathFloatBase");
  }
  return;
}



// FUNCTION 146696396 FUN_146696396 body=48 status=ok
// SIG undefined FUN_146696396(void)

void FUN_146696396(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14bb10e00;
  return;
}



// FUNCTION 1466963c6 FUN_1466963c6 body=55 status=ok
// SIG undefined FUN_1466963c6(void)

void FUN_1466963c6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc02678 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc02678 = FUN_140002ddd(FUN_1466963fd,uVar1,L"RigVMFunction_MathFloatConstant");
  }
  return;
}



// FUNCTION 1466963fd FUN_1466963fd body=49 status=ok
// SIG undefined FUN_1466963fd(void)

longlong FUN_1466963fd(void)

{
  if (DAT_14cc02670 == 0) {
    FUN_14086a14e(&DAT_14cc02670,&PTR_FUN_14bae7ea8);
  }
  return DAT_14cc02670;
}



// FUNCTION 14669642e FUN_14669642e body=48 status=ok
// SIG undefined FUN_14669642e(void)

void FUN_14669642e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb10fe0;
  return;
}



// FUNCTION 14669645e FUN_14669645e body=55 status=ok
// SIG undefined FUN_14669645e(void)

void FUN_14669645e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc02690 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc02690 = FUN_140002ddd(FUN_146696495,uVar1,L"RigVMFunction_MathFloatUnaryOp");
  }
  return;
}



// FUNCTION 146696495 FUN_146696495 body=49 status=ok
// SIG undefined FUN_146696495(void)

longlong FUN_146696495(void)

{
  if (DAT_14cc02688 == 0) {
    FUN_14086a14e(&DAT_14cc02688,&PTR_FUN_14bae7fc0);
  }
  return DAT_14cc02688;
}



// FUNCTION 1466964c6 FUN_1466964c6 body=48 status=ok
// SIG undefined FUN_1466964c6(void)

void FUN_1466964c6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb111c0;
  return;
}



// FUNCTION 1466964f6 FUN_1466964f6 body=55 status=ok
// SIG undefined FUN_1466964f6(void)

void FUN_1466964f6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc026a8 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc026a8 = FUN_140002ddd(FUN_14669652d,uVar1,L"RigVMFunction_MathFloatBinaryOp");
  }
  return;
}



// FUNCTION 14669652d FUN_14669652d body=49 status=ok
// SIG undefined FUN_14669652d(void)

longlong FUN_14669652d(void)

{
  if (DAT_14cc026a0 == 0) {
    FUN_14086a14e(&DAT_14cc026a0,&PTR_FUN_14bae8118);
  }
  return DAT_14cc026a0;
}



// FUNCTION 14669655e FUN_14669655e body=48 status=ok
// SIG undefined FUN_14669655e(void)

void FUN_14669655e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb113a0;
  return;
}



// FUNCTION 14669658e FUN_14669658e body=55 status=ok
// SIG undefined FUN_14669658e(void)

void FUN_14669658e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc026c0 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc026c0 = FUN_140002ddd(FUN_1466965c5,uVar1,L"RigVMFunction_MathFloatBinaryAggregateOp");
  }
  return;
}



// FUNCTION 1466965c5 FUN_1466965c5 body=49 status=ok
// SIG undefined FUN_1466965c5(void)

longlong FUN_1466965c5(void)

{
  if (DAT_14cc026b8 == 0) {
    FUN_14086a14e(&DAT_14cc026b8,&PTR_FUN_14bae8298);
  }
  return DAT_14cc026b8;
}



// FUNCTION 1466965f6 FUN_1466965f6 body=48 status=ok
// SIG undefined FUN_1466965f6(void)

void FUN_1466965f6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb11580;
  return;
}



// FUNCTION 146696626 FUN_146696626 body=328 status=ok
// SIG undefined FUN_146696626(void)

longlong FUN_146696626(void)

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
  if (DAT_14cc026d8 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc026d8 = FUN_140002ddd(FUN_14669676f,uVar3,L"RigVMFunction_MathFloatMake");
    local_58 = (undefined8 *)0x0;
    uStack_50 = 1;
    FUN_140c0351c(&local_58,0);
    *local_58 = L"Value";
    local_58[1] = L"float";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    FUN_14001a7b2();
    lVar2 = DAT_14cc026d8;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathFloatMake::Execute",&DAT_149107564,lVar2);
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
  return DAT_14cc026d8;
}



// FUNCTION 14669676f FUN_14669676f body=47 status=ok
// SIG undefined FUN_14669676f(void)

longlong FUN_14669676f(void)

{
  if (DAT_14cc026d0 == 0) {
    FUN_14086a14e(&DAT_14cc026d0,&PTR_FUN_14bae83b8);
  }
  return DAT_14cc026d0;
}



// FUNCTION 14669679e FUN_14669679e body=48 status=ok
// SIG undefined FUN_14669679e(void)

void FUN_14669679e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb11760;
  return;
}



// FUNCTION 1466967ce FUN_1466967ce body=328 status=ok
// SIG undefined FUN_1466967ce(void)

longlong FUN_1466967ce(void)

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
  if (DAT_14cc026f0 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc026f0 = FUN_140002ddd(FUN_146696917,uVar3,L"RigVMFunction_MathFloatConstPi");
    local_58 = (undefined8 *)0x0;
    uStack_50 = 1;
    FUN_140c0351c(&local_58,0);
    *local_58 = L"Value";
    local_58[1] = L"float";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    FUN_14001a7b2();
    lVar2 = DAT_14cc026f0;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathFloatConstPi::Execute",&LAB_149107634,lVar2);
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
  return DAT_14cc026f0;
}



// FUNCTION 146696917 FUN_146696917 body=47 status=ok
// SIG undefined FUN_146696917(void)

longlong FUN_146696917(void)

{
  if (DAT_14cc026e8 == 0) {
    FUN_14086a14e(&DAT_14cc026e8,&PTR_FUN_14bae84a0);
  }
  return DAT_14cc026e8;
}



// FUNCTION 146696946 FUN_146696946 body=48 status=ok
// SIG undefined FUN_146696946(void)

void FUN_146696946(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb11940;
  return;
}



// FUNCTION 146696976 FUN_146696976 body=328 status=ok
// SIG undefined FUN_146696976(void)

longlong FUN_146696976(void)

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
  if (DAT_14cc02708 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02708 = FUN_140002ddd(FUN_146696abf,uVar3,L"RigVMFunction_MathFloatConstHalfPi");
    local_58 = (undefined8 *)0x0;
    uStack_50 = 1;
    FUN_140c0351c(&local_58,0);
    *local_58 = L"Value";
    local_58[1] = L"float";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    FUN_14001a7b2();
    lVar2 = DAT_14cc02708;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathFloatConstHalfPi::Execute",&LAB_14910771c,
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
  return DAT_14cc02708;
}



// FUNCTION 146696abf FUN_146696abf body=47 status=ok
// SIG undefined FUN_146696abf(void)

longlong FUN_146696abf(void)

{
  if (DAT_14cc02700 == 0) {
    FUN_14086a14e(&DAT_14cc02700,&PTR_FUN_14bae85a0);
  }
  return DAT_14cc02700;
}



// FUNCTION 146696aee FUN_146696aee body=48 status=ok
// SIG undefined FUN_146696aee(void)

void FUN_146696aee(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb11b20;
  return;
}



// FUNCTION 146696b1e FUN_146696b1e body=328 status=ok
// SIG undefined FUN_146696b1e(void)

longlong FUN_146696b1e(void)

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
  if (DAT_14cc02720 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02720 = FUN_140002ddd(FUN_146696c67,uVar3,L"RigVMFunction_MathFloatConstTwoPi");
    local_58 = (undefined8 *)0x0;
    uStack_50 = 1;
    FUN_140c0351c(&local_58,0);
    *local_58 = L"Value";
    local_58[1] = L"float";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    FUN_14001a7b2();
    lVar2 = DAT_14cc02720;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathFloatConstTwoPi::Execute",&LAB_149107804,lVar2
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
  return DAT_14cc02720;
}



// FUNCTION 146696c67 FUN_146696c67 body=47 status=ok
// SIG undefined FUN_146696c67(void)

longlong FUN_146696c67(void)

{
  if (DAT_14cc02718 == 0) {
    FUN_14086a14e(&DAT_14cc02718,&PTR_FUN_14bae8698);
  }
  return DAT_14cc02718;
}



// FUNCTION 146696c96 FUN_146696c96 body=48 status=ok
// SIG undefined FUN_146696c96(void)

void FUN_146696c96(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb11d00;
  return;
}



// FUNCTION 146696cc6 FUN_146696cc6 body=328 status=ok
// SIG undefined FUN_146696cc6(void)

longlong FUN_146696cc6(void)

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
  if (DAT_14cc02738 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02738 = FUN_140002ddd(FUN_146696e0f,uVar3,L"RigVMFunction_MathFloatConstE");
    local_58 = (undefined8 *)0x0;
    uStack_50 = 1;
    FUN_140c0351c(&local_58,0);
    *local_58 = L"Value";
    local_58[1] = L"float";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    FUN_14001a7b2();
    lVar2 = DAT_14cc02738;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathFloatConstE::Execute",&LAB_1491078ec,lVar2);
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
  return DAT_14cc02738;
}



// FUNCTION 146696e0f FUN_146696e0f body=47 status=ok
// SIG undefined FUN_146696e0f(void)

longlong FUN_146696e0f(void)

{
  if (DAT_14cc02730 == 0) {
    FUN_14086a14e(&DAT_14cc02730,&PTR_FUN_14bae8780);
  }
  return DAT_14cc02730;
}



// FUNCTION 146696e3e FUN_146696e3e body=48 status=ok
// SIG undefined FUN_146696e3e(void)

void FUN_146696e3e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb11ee0;
  return;
}



// FUNCTION 146696e6e FUN_146696e6e body=490 status=ok
// SIG undefined FUN_146696e6e(void)

longlong FUN_146696e6e(void)

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
  if (DAT_14cc02750 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02750 = FUN_140002ddd(FUN_146697059,uVar3,L"RigVMFunction_MathFloatAdd");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02750;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathFloatAdd::Execute",&LAB_1491079d4,lVar4);
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
  return DAT_14cc02750;
}



// FUNCTION 146697059 FUN_146697059 body=47 status=ok
// SIG undefined FUN_146697059(void)

longlong FUN_146697059(void)

{
  if (DAT_14cc02748 == 0) {
    FUN_14086a14e(&DAT_14cc02748,&PTR_FUN_14bae8858);
  }
  return DAT_14cc02748;
}



// FUNCTION 146697088 FUN_146697088 body=48 status=ok
// SIG undefined FUN_146697088(void)

void FUN_146697088(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb120c0;
  return;
}



// FUNCTION 1466970b8 FUN_1466970b8 body=490 status=ok
// SIG undefined FUN_1466970b8(void)

longlong FUN_1466970b8(void)

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
  if (DAT_14cc02768 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02768 = FUN_140002ddd(FUN_1466972a3,uVar3,L"RigVMFunction_MathFloatSub");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02768;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathFloatSub::Execute",&LAB_149107ad2,lVar4);
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
  return DAT_14cc02768;
}



// FUNCTION 1466972a3 FUN_1466972a3 body=47 status=ok
// SIG undefined FUN_1466972a3(void)

longlong FUN_1466972a3(void)

{
  if (DAT_14cc02760 == 0) {
    FUN_14086a14e(&DAT_14cc02760,&PTR_FUN_14bae8930);
  }
  return DAT_14cc02760;
}



// FUNCTION 1466972d2 FUN_1466972d2 body=48 status=ok
// SIG undefined FUN_1466972d2(void)

void FUN_1466972d2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb122a0;
  return;
}



// FUNCTION 146697302 FUN_146697302 body=490 status=ok
// SIG undefined FUN_146697302(void)

longlong FUN_146697302(void)

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
  if (DAT_14cc02780 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02780 = FUN_140002ddd(FUN_1466974ed,uVar3,L"RigVMFunction_MathFloatMul");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02780;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathFloatMul::Execute",&LAB_149107bd0,lVar4);
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
  return DAT_14cc02780;
}



// FUNCTION 1466974ed FUN_1466974ed body=47 status=ok
// SIG undefined FUN_1466974ed(void)

longlong FUN_1466974ed(void)

{
  if (DAT_14cc02778 == 0) {
    FUN_14086a14e(&DAT_14cc02778,&PTR_FUN_14bae8a08);
  }
  return DAT_14cc02778;
}



// FUNCTION 14669751c FUN_14669751c body=48 status=ok
// SIG undefined FUN_14669751c(void)

void FUN_14669751c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb12480;
  return;
}



// FUNCTION 14669754c FUN_14669754c body=490 status=ok
// SIG undefined FUN_14669754c(void)

longlong FUN_14669754c(void)

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
  if (DAT_14cc02798 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02798 = FUN_140002ddd(FUN_146697737,uVar3,L"RigVMFunction_MathFloatDiv");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02798;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathFloatDiv::Execute",&LAB_149107cce,lVar4);
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
  return DAT_14cc02798;
}



// FUNCTION 146697737 FUN_146697737 body=47 status=ok
// SIG undefined FUN_146697737(void)

longlong FUN_146697737(void)

{
  if (DAT_14cc02790 == 0) {
    FUN_14086a14e(&DAT_14cc02790,&PTR_FUN_14bae8ae0);
  }
  return DAT_14cc02790;
}



// FUNCTION 146697766 FUN_146697766 body=48 status=ok
// SIG undefined FUN_146697766(void)

void FUN_146697766(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb12660;
  return;
}



// FUNCTION 146697796 FUN_146697796 body=490 status=ok
// SIG undefined FUN_146697796(void)

longlong FUN_146697796(void)

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
  if (DAT_14cc027b0 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc027b0 = FUN_140002ddd(FUN_146697981,uVar3,L"RigVMFunction_MathFloatMod");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc027b0;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathFloatMod::Execute",FUN_149107dfc,lVar4);
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
  return DAT_14cc027b0;
}



// FUNCTION 146697981 FUN_146697981 body=47 status=ok
// SIG undefined FUN_146697981(void)

longlong FUN_146697981(void)

{
  if (DAT_14cc027a8 == 0) {
    FUN_14086a14e(&DAT_14cc027a8,&PTR_FUN_14bae8bb8);
  }
  return DAT_14cc027a8;
}



// FUNCTION 1466979b0 FUN_1466979b0 body=48 status=ok
// SIG undefined FUN_1466979b0(void)

void FUN_1466979b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb12840;
  return;
}



// FUNCTION 1466979e0 FUN_1466979e0 body=490 status=ok
// SIG undefined FUN_1466979e0(void)

longlong FUN_1466979e0(void)

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
  if (DAT_14cc027c8 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc027c8 = FUN_140002ddd(FUN_146697bcb,uVar3,L"RigVMFunction_MathFloatMin");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc027c8;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathFloatMin::Execute",&LAB_149107f4a,lVar4);
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
  return DAT_14cc027c8;
}



// FUNCTION 146697bcb FUN_146697bcb body=47 status=ok
// SIG undefined FUN_146697bcb(void)

longlong FUN_146697bcb(void)

{
  if (DAT_14cc027c0 == 0) {
    FUN_14086a14e(&DAT_14cc027c0,&PTR_FUN_14bae8c90);
  }
  return DAT_14cc027c0;
}



// FUNCTION 146697bfa FUN_146697bfa body=48 status=ok
// SIG undefined FUN_146697bfa(void)

void FUN_146697bfa(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb12a20;
  return;
}



// FUNCTION 146697c2a FUN_146697c2a body=490 status=ok
// SIG undefined FUN_146697c2a(void)

longlong FUN_146697c2a(void)

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
  if (DAT_14cc027e0 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc027e0 = FUN_140002ddd(FUN_146697e15,uVar3,L"RigVMFunction_MathFloatMax");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc027e0;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathFloatMax::Execute",&LAB_149108048,lVar4);
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
  return DAT_14cc027e0;
}



// FUNCTION 146697e15 FUN_146697e15 body=47 status=ok
// SIG undefined FUN_146697e15(void)

longlong FUN_146697e15(void)

{
  if (DAT_14cc027d8 == 0) {
    FUN_14086a14e(&DAT_14cc027d8,&PTR_FUN_14bae8d68);
  }
  return DAT_14cc027d8;
}



// FUNCTION 146697e44 FUN_146697e44 body=48 status=ok
// SIG undefined FUN_146697e44(void)

void FUN_146697e44(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb12c00;
  return;
}



// FUNCTION 146697e74 FUN_146697e74 body=490 status=ok
// SIG undefined FUN_146697e74(void)

longlong FUN_146697e74(void)

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
  if (DAT_14cc027f8 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc027f8 = FUN_140002ddd(FUN_14669805f,uVar3,L"RigVMFunction_MathFloatPow");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc027f8;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathFloatPow::Execute",FUN_149108146,lVar4);
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
  return DAT_14cc027f8;
}



// FUNCTION 14669805f FUN_14669805f body=47 status=ok
// SIG undefined FUN_14669805f(void)

longlong FUN_14669805f(void)

{
  if (DAT_14cc027f0 == 0) {
    FUN_14086a14e(&DAT_14cc027f0,&PTR_FUN_14bae8e40);
  }
  return DAT_14cc027f0;
}



// FUNCTION 14669808e FUN_14669808e body=48 status=ok
// SIG undefined FUN_14669808e(void)

void FUN_14669808e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb12de0;
  return;
}



// FUNCTION 1466980be FUN_1466980be body=408 status=ok
// SIG undefined FUN_1466980be(void)

longlong FUN_1466980be(void)

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
  if (DAT_14cc02810 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02810 = FUN_140002ddd(FUN_146698257,uVar3,L"RigVMFunction_MathFloatSqrt");
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
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02810;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathFloatSqrt::Execute",FUN_14910825a,lVar4);
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
  return DAT_14cc02810;
}



// FUNCTION 146698257 FUN_146698257 body=47 status=ok
// SIG undefined FUN_146698257(void)

longlong FUN_146698257(void)

{
  if (DAT_14cc02808 == 0) {
    FUN_14086a14e(&DAT_14cc02808,&PTR_FUN_14bae8f18);
  }
  return DAT_14cc02808;
}



// FUNCTION 146698286 FUN_146698286 body=48 status=ok
// SIG undefined FUN_146698286(void)

void FUN_146698286(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb12fc0;
  return;
}



// FUNCTION 1466982b6 FUN_1466982b6 body=408 status=ok
// SIG undefined FUN_1466982b6(void)

longlong FUN_1466982b6(void)

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
  if (DAT_14cc02828 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02828 = FUN_140002ddd(FUN_14669844f,uVar3,L"RigVMFunction_MathFloatNegate");
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
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02828;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathFloatNegate::Execute",&LAB_149108394,lVar4);
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
  return DAT_14cc02828;
}



// FUNCTION 14669844f FUN_14669844f body=47 status=ok
// SIG undefined FUN_14669844f(void)

longlong FUN_14669844f(void)

{
  if (DAT_14cc02820 == 0) {
    FUN_14086a14e(&DAT_14cc02820,&PTR_FUN_14bae9000);
  }
  return DAT_14cc02820;
}



// FUNCTION 14669847e FUN_14669847e body=48 status=ok
// SIG undefined FUN_14669847e(void)

void FUN_14669847e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb131a0;
  return;
}



// FUNCTION 1466984ae FUN_1466984ae body=408 status=ok
// SIG undefined FUN_1466984ae(void)

longlong FUN_1466984ae(void)

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
  if (DAT_14cc02840 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02840 = FUN_140002ddd(FUN_146698647,uVar3,L"RigVMFunction_MathFloatAbs");
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
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02840;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathFloatAbs::Execute",&LAB_149108492,lVar4);
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
  return DAT_14cc02840;
}



// FUNCTION 146698647 FUN_146698647 body=47 status=ok
// SIG undefined FUN_146698647(void)

longlong FUN_146698647(void)

{
  if (DAT_14cc02838 == 0) {
    FUN_14086a14e(&DAT_14cc02838,&PTR_FUN_14bae90d8);
  }
  return DAT_14cc02838;
}



// FUNCTION 146698676 FUN_146698676 body=48 status=ok
// SIG undefined FUN_146698676(void)

void FUN_146698676(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb13380;
  return;
}



// FUNCTION 1466986a6 FUN_1466986a6 body=497 status=ok
// SIG undefined FUN_1466986a6(void)

longlong FUN_1466986a6(void)

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
  if (DAT_14cc02858 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02858 = FUN_140002ddd(FUN_146698898,uVar3,L"RigVMFunction_MathFloatFloor");
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
    local_58[lVar4 * 7] = L"Result";
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
    local_58[lVar4 * 7] = &DAT_149e0151c;
    local_58[lVar4 * 7 + 1] = L"int32";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02858;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathFloatFloor::Execute",&LAB_149108590,lVar4);
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
  return DAT_14cc02858;
}



// FUNCTION 146698898 FUN_146698898 body=47 status=ok
// SIG undefined FUN_146698898(void)

longlong FUN_146698898(void)

{
  if (DAT_14cc02850 == 0) {
    FUN_14086a14e(&DAT_14cc02850,&PTR_FUN_14bae9278);
  }
  return DAT_14cc02850;
}



// FUNCTION 1466988c8 FUN_1466988c8 body=48 status=ok
// SIG undefined FUN_1466988c8(void)

void FUN_1466988c8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb13560;
  return;
}



// FUNCTION 1466988f8 FUN_1466988f8 body=497 status=ok
// SIG undefined FUN_1466988f8(void)

longlong FUN_1466988f8(void)

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
  if (DAT_14cc02870 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02870 = FUN_140002ddd(FUN_146698aea,uVar3,L"RigVMFunction_MathFloatCeil");
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
    local_58[lVar4 * 7] = L"Result";
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
    local_58[lVar4 * 7] = &DAT_149e0151c;
    local_58[lVar4 * 7 + 1] = L"int32";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02870;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathFloatCeil::Execute",&LAB_14910869e,lVar4);
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
  return DAT_14cc02870;
}



// FUNCTION 146698aea FUN_146698aea body=47 status=ok
// SIG undefined FUN_146698aea(void)

longlong FUN_146698aea(void)

{
  if (DAT_14cc02868 == 0) {
    FUN_14086a14e(&DAT_14cc02868,&PTR_FUN_14bae9418);
  }
  return DAT_14cc02868;
}



// FUNCTION 146698b1a FUN_146698b1a body=48 status=ok
// SIG undefined FUN_146698b1a(void)

void FUN_146698b1a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb13740;
  return;
}



// FUNCTION 146698b4a FUN_146698b4a body=497 status=ok
// SIG undefined FUN_146698b4a(void)

longlong FUN_146698b4a(void)

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
  if (DAT_14cc02888 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02888 = FUN_140002ddd(FUN_146698d3c,uVar3,L"RigVMFunction_MathFloatRound");
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
    local_58[lVar4 * 7] = L"Result";
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
    local_58[lVar4 * 7] = &DAT_149e0151c;
    local_58[lVar4 * 7 + 1] = L"int32";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02888;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathFloatRound::Execute",&LAB_1491087ac,lVar4);
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
  return DAT_14cc02888;
}



// FUNCTION 146698d3c FUN_146698d3c body=47 status=ok
// SIG undefined FUN_146698d3c(void)

longlong FUN_146698d3c(void)

{
  if (DAT_14cc02880 == 0) {
    FUN_14086a14e(&DAT_14cc02880,&PTR_FUN_14bae95b8);
  }
  return DAT_14cc02880;
}



// FUNCTION 146698d6c FUN_146698d6c body=48 status=ok
// SIG undefined FUN_146698d6c(void)

void FUN_146698d6c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb13920;
  return;
}



// FUNCTION 146698d9c FUN_146698d9c body=413 status=ok
// SIG undefined FUN_146698d9c(void)

longlong FUN_146698d9c(void)

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
  if (DAT_14cc028a0 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc028a0 = FUN_140002ddd(FUN_146698f3a,uVar3,L"RigVMFunction_MathFloatToInt");
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
    local_58[lVar4 * 7 + 1] = L"int32";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc028a0;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathFloatToInt::Execute",&LAB_1491088e6,lVar4);
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
  return DAT_14cc028a0;
}



// FUNCTION 146698f3a FUN_146698f3a body=47 status=ok
// SIG undefined FUN_146698f3a(void)

longlong FUN_146698f3a(void)

{
  if (DAT_14cc02898 == 0) {
    FUN_14086a14e(&DAT_14cc02898,&PTR_FUN_14bae9720);
  }
  return DAT_14cc02898;
}



// FUNCTION 146698f6a FUN_146698f6a body=48 status=ok
// SIG undefined FUN_146698f6a(void)

void FUN_146698f6a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb13b00;
  return;
}



// FUNCTION 146698f9a FUN_146698f9a body=413 status=ok
// SIG undefined FUN_146698f9a(void)

longlong FUN_146698f9a(void)

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
  if (DAT_14cc028b8 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc028b8 = FUN_140002ddd(FUN_146699138,uVar3,L"RigVMFunction_MathFloatToDouble");
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
    local_58[lVar4 * 7 + 1] = L"double";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc028b8;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathFloatToDouble::Execute",&LAB_1491089f6,lVar4);
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
  return DAT_14cc028b8;
}



// FUNCTION 146699138 FUN_146699138 body=47 status=ok
// SIG undefined FUN_146699138(void)

longlong FUN_146699138(void)

{
  if (DAT_14cc028b0 == 0) {
    FUN_14086a14e(&DAT_14cc028b0,&PTR_FUN_14bae9890);
  }
  return DAT_14cc028b0;
}



// FUNCTION 146699168 FUN_146699168 body=48 status=ok
// SIG undefined FUN_146699168(void)

void FUN_146699168(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb13ce0;
  return;
}



// FUNCTION 146699198 FUN_146699198 body=408 status=ok
// SIG undefined FUN_146699198(void)

longlong FUN_146699198(void)

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
  if (DAT_14cc028d0 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc028d0 = FUN_140002ddd(FUN_146699331,uVar3,L"RigVMFunction_MathFloatSign");
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
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc028d0;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathFloatSign::Execute",&LAB_149108aea,lVar4);
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
  return DAT_14cc028d0;
}



// FUNCTION 146699331 FUN_146699331 body=47 status=ok
// SIG undefined FUN_146699331(void)

longlong FUN_146699331(void)

{
  if (DAT_14cc028c8 == 0) {
    FUN_14086a14e(&DAT_14cc028c8,&PTR_FUN_14bae9968);
  }
  return DAT_14cc028c8;
}



// FUNCTION 146699360 FUN_146699360 body=48 status=ok
// SIG undefined FUN_146699360(void)

void FUN_146699360(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb13ec0;
  return;
}



// FUNCTION 146699390 FUN_146699390 body=569 status=ok
// SIG undefined FUN_146699390(void)

longlong FUN_146699390(void)

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
  if (DAT_14cc028e8 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc028e8 = FUN_140002ddd(FUN_1466995ca,uVar3,L"RigVMFunction_MathFloatClamp");
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
    local_58[lVar4 * 7] = L"Minimum";
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
    local_58[lVar4 * 7] = L"Maximum";
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
    lVar4 = DAT_14cc028e8;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathFloatClamp::Execute",&LAB_149108c00,lVar4);
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
  return DAT_14cc028e8;
}



// FUNCTION 1466995ca FUN_1466995ca body=47 status=ok
// SIG undefined FUN_1466995ca(void)

longlong FUN_1466995ca(void)

{
  if (DAT_14cc028e0 == 0) {
    FUN_14086a14e(&DAT_14cc028e0,&PTR_FUN_14bae9b50);
  }
  return DAT_14cc028e0;
}



// FUNCTION 1466995fa FUN_1466995fa body=48 status=ok
// SIG undefined FUN_1466995fa(void)

void FUN_1466995fa(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb140a0;
  return;
}



// FUNCTION 14669962a FUN_14669962a body=569 status=ok
// SIG undefined FUN_14669962a(void)

longlong FUN_14669962a(void)

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
  if (DAT_14cc02900 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02900 = FUN_140002ddd(FUN_146699864,uVar3,L"RigVMFunction_MathFloatLerp");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
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
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02900;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathFloatLerp::Execute",&LAB_149108d0a,lVar4);
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
  return DAT_14cc02900;
}



// FUNCTION 146699864 FUN_146699864 body=47 status=ok
// SIG undefined FUN_146699864(void)

longlong FUN_146699864(void)

{
  if (DAT_14cc028f8 == 0) {
    FUN_14086a14e(&DAT_14cc028f8,&PTR_FUN_14bae9d30);
  }
  return DAT_14cc028f8;
}



// FUNCTION 146699894 FUN_146699894 body=48 status=ok
// SIG undefined FUN_146699894(void)

void FUN_146699894(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb14280;
  return;
}



// FUNCTION 1466998c4 FUN_1466998c4 body=810 status=ok
// SIG undefined FUN_1466998c4(void)

longlong FUN_1466998c4(void)

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
  if (DAT_14cc02918 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02918 = FUN_140002ddd(FUN_146699bef,uVar3,L"RigVMFunction_MathFloatRemap");
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
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02918;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathFloatRemap::Execute",&LAB_149108e24,lVar4);
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
  return DAT_14cc02918;
}



// FUNCTION 146699bef FUN_146699bef body=47 status=ok
// SIG undefined FUN_146699bef(void)

longlong FUN_146699bef(void)

{
  if (DAT_14cc02910 == 0) {
    FUN_14086a14e(&DAT_14cc02910,&PTR_FUN_14bae9fd8);
  }
  return DAT_14cc02910;
}



// FUNCTION 146699c1e FUN_146699c1e body=48 status=ok
// SIG undefined FUN_146699c1e(void)

void FUN_146699c1e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14bb14460;
  return;
}



// FUNCTION 146699c4e FUN_146699c4e body=497 status=ok
// SIG undefined FUN_146699c4e(void)

longlong FUN_146699c4e(void)

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
  if (DAT_14cc02930 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02930 = FUN_140002ddd(FUN_146699e40,uVar3,L"RigVMFunction_MathFloatEquals");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"bool";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02930;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathFloatEquals::Execute",&LAB_149108fe6,lVar4);
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
  return DAT_14cc02930;
}



// FUNCTION 146699e40 FUN_146699e40 body=47 status=ok
// SIG undefined FUN_146699e40(void)

longlong FUN_146699e40(void)

{
  if (DAT_14cc02928 == 0) {
    FUN_14086a14e(&DAT_14cc02928,&PTR_FUN_14baea188);
  }
  return DAT_14cc02928;
}



// FUNCTION 146699e70 FUN_146699e70 body=48 status=ok
// SIG undefined FUN_146699e70(void)

void FUN_146699e70(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb14640;
  return;
}



// FUNCTION 146699ea0 FUN_146699ea0 body=497 status=ok
// SIG undefined FUN_146699ea0(void)

longlong FUN_146699ea0(void)

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
  if (DAT_14cc02948 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02948 = FUN_140002ddd(FUN_14669a092,uVar3,L"RigVMFunction_MathFloatNotEquals");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"bool";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02948;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathFloatNotEquals::Execute",&LAB_1491090f2,lVar4)
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
  return DAT_14cc02948;
}



// FUNCTION 14669a092 FUN_14669a092 body=47 status=ok
// SIG undefined FUN_14669a092(void)

longlong FUN_14669a092(void)

{
  if (DAT_14cc02940 == 0) {
    FUN_14086a14e(&DAT_14cc02940,&PTR_FUN_14baea350);
  }
  return DAT_14cc02940;
}



// FUNCTION 14669a0c2 FUN_14669a0c2 body=48 status=ok
// SIG undefined FUN_14669a0c2(void)

void FUN_14669a0c2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb14820;
  return;
}



// FUNCTION 14669a0f2 FUN_14669a0f2 body=497 status=ok
// SIG undefined FUN_14669a0f2(void)

longlong FUN_14669a0f2(void)

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
  if (DAT_14cc02960 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02960 = FUN_140002ddd(FUN_14669a2e4,uVar3,L"RigVMFunction_MathFloatGreater");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"bool";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02960;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathFloatGreater::Execute",&LAB_1491091fe,lVar4);
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
  return DAT_14cc02960;
}



// FUNCTION 14669a2e4 FUN_14669a2e4 body=47 status=ok
// SIG undefined FUN_14669a2e4(void)

longlong FUN_14669a2e4(void)

{
  if (DAT_14cc02958 == 0) {
    FUN_14086a14e(&DAT_14cc02958,&PTR_FUN_14baea508);
  }
  return DAT_14cc02958;
}



// FUNCTION 14669a314 FUN_14669a314 body=48 status=ok
// SIG undefined FUN_14669a314(void)

void FUN_14669a314(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb14a00;
  return;
}



// FUNCTION 14669a344 FUN_14669a344 body=497 status=ok
// SIG undefined FUN_14669a344(void)

longlong FUN_14669a344(void)

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
  if (DAT_14cc02978 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02978 = FUN_140002ddd(FUN_14669a536,uVar3,L"RigVMFunction_MathFloatLess");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"bool";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02978;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathFloatLess::Execute",&LAB_1491092fe,lVar4);
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
  return DAT_14cc02978;
}



// FUNCTION 14669a536 FUN_14669a536 body=47 status=ok
// SIG undefined FUN_14669a536(void)

longlong FUN_14669a536(void)

{
  if (DAT_14cc02970 == 0) {
    FUN_14086a14e(&DAT_14cc02970,&PTR_FUN_14baea6b8);
  }
  return DAT_14cc02970;
}



// FUNCTION 14669a566 FUN_14669a566 body=48 status=ok
// SIG undefined FUN_14669a566(void)

void FUN_14669a566(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb14be0;
  return;
}



// FUNCTION 14669a596 FUN_14669a596 body=497 status=ok
// SIG undefined FUN_14669a596(void)

longlong FUN_14669a596(void)

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
  if (DAT_14cc02990 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02990 = FUN_140002ddd(FUN_14669a788,uVar3,L"RigVMFunction_MathFloatGreaterEqual");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"bool";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02990;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathFloatGreaterEqual::Execute",&LAB_1491093fe,
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
  return DAT_14cc02990;
}



// FUNCTION 14669a788 FUN_14669a788 body=47 status=ok
// SIG undefined FUN_14669a788(void)

longlong FUN_14669a788(void)

{
  if (DAT_14cc02988 == 0) {
    FUN_14086a14e(&DAT_14cc02988,&PTR_FUN_14baea890);
  }
  return DAT_14cc02988;
}



// FUNCTION 14669a7b8 FUN_14669a7b8 body=48 status=ok
// SIG undefined FUN_14669a7b8(void)

void FUN_14669a7b8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb14dc0;
  return;
}



// FUNCTION 14669a7e8 FUN_14669a7e8 body=497 status=ok
// SIG undefined FUN_14669a7e8(void)

longlong FUN_14669a7e8(void)

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
  if (DAT_14cc029a8 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc029a8 = FUN_140002ddd(FUN_14669a9da,uVar3,L"RigVMFunction_MathFloatLessEqual");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"bool";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc029a8;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathFloatLessEqual::Execute",&LAB_1491094fe,lVar4)
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
  return DAT_14cc029a8;
}



// FUNCTION 14669a9da FUN_14669a9da body=47 status=ok
// SIG undefined FUN_14669a9da(void)

longlong FUN_14669a9da(void)

{
  if (DAT_14cc029a0 == 0) {
    FUN_14086a14e(&DAT_14cc029a0,&PTR_FUN_14baeaa50);
  }
  return DAT_14cc029a0;
}



// FUNCTION 14669aa0a FUN_14669aa0a body=48 status=ok
// SIG undefined FUN_14669aa0a(void)

void FUN_14669aa0a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb14fa0;
  return;
}



// FUNCTION 14669aa3a FUN_14669aa3a body=497 status=ok
// SIG undefined FUN_14669aa3a(void)

longlong FUN_14669aa3a(void)

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
  if (DAT_14cc029c0 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc029c0 = FUN_140002ddd(FUN_14669ac2c,uVar3,L"RigVMFunction_MathFloatIsNearlyZero");
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
    lVar4 = DAT_14cc029c0;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathFloatIsNearlyZero::Execute",&LAB_1491095fe,
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
  return DAT_14cc029c0;
}



// FUNCTION 14669ac2c FUN_14669ac2c body=47 status=ok
// SIG undefined FUN_14669ac2c(void)

longlong FUN_14669ac2c(void)

{
  if (DAT_14cc029b8 == 0) {
    FUN_14086a14e(&DAT_14cc029b8,&PTR_FUN_14baeac20);
  }
  return DAT_14cc029b8;
}



// FUNCTION 14669ac5c FUN_14669ac5c body=48 status=ok
// SIG undefined FUN_14669ac5c(void)

void FUN_14669ac5c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb15180;
  return;
}



// FUNCTION 14669ac8c FUN_14669ac8c body=576 status=ok
// SIG undefined FUN_14669ac8c(void)

longlong FUN_14669ac8c(void)

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
  if (DAT_14cc029d8 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc029d8 = FUN_140002ddd(FUN_14669aecd,uVar3,L"RigVMFunction_MathFloatIsNearlyEqual");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
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
    lVar4 = DAT_14cc029d8;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathFloatIsNearlyEqual::Execute",&LAB_149109722,
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
  return DAT_14cc029d8;
}



// FUNCTION 14669aecd FUN_14669aecd body=47 status=ok
// SIG undefined FUN_14669aecd(void)

longlong FUN_14669aecd(void)

{
  if (DAT_14cc029d0 == 0) {
    FUN_14086a14e(&DAT_14cc029d0,&PTR_FUN_14baeae38);
  }
  return DAT_14cc029d0;
}



// FUNCTION 14669aefc FUN_14669aefc body=48 status=ok
// SIG undefined FUN_14669aefc(void)

void FUN_14669aefc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb15360;
  return;
}



// FUNCTION 14669af2c FUN_14669af2c body=576 status=ok
// SIG undefined FUN_14669af2c(void)

longlong FUN_14669af2c(void)

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
  if (DAT_14cc029f0 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc029f0 = FUN_140002ddd(FUN_14669b16d,uVar3,L"RigVMFunction_MathFloatSelectBool");
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
    local_58[lVar4 * 7] = L"IfFalse";
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
    lVar4 = DAT_14cc029f0;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathFloatSelectBool::Execute",&LAB_149109854,lVar4
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
  return DAT_14cc029f0;
}



// FUNCTION 14669b16d FUN_14669b16d body=47 status=ok
// SIG undefined FUN_14669b16d(void)

longlong FUN_14669b16d(void)

{
  if (DAT_14cc029e8 == 0) {
    FUN_14086a14e(&DAT_14cc029e8,&PTR_FUN_14baeb078);
  }
  return DAT_14cc029e8;
}



// FUNCTION 14669b19c FUN_14669b19c body=48 status=ok
// SIG undefined FUN_14669b19c(void)

void FUN_14669b19c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb15540;
  return;
}



// FUNCTION 14669b1cc FUN_14669b1cc body=408 status=ok
// SIG undefined FUN_14669b1cc(void)

longlong FUN_14669b1cc(void)

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
  if (DAT_14cc02a08 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02a08 = FUN_140002ddd(FUN_14669b365,uVar3,L"RigVMFunction_MathFloatDeg");
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
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02a08;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathFloatDeg::Execute",&LAB_149109960,lVar4);
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
  return DAT_14cc02a08;
}



// FUNCTION 14669b365 FUN_14669b365 body=47 status=ok
// SIG undefined FUN_14669b365(void)

longlong FUN_14669b365(void)

{
  if (DAT_14cc02a00 == 0) {
    FUN_14086a14e(&DAT_14cc02a00,&PTR_FUN_14baeb150);
  }
  return DAT_14cc02a00;
}



// FUNCTION 14669b394 FUN_14669b394 body=48 status=ok
// SIG undefined FUN_14669b394(void)

void FUN_14669b394(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb15720;
  return;
}



// FUNCTION 14669b3c4 FUN_14669b3c4 body=408 status=ok
// SIG undefined FUN_14669b3c4(void)

longlong FUN_14669b3c4(void)

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
  if (DAT_14cc02a20 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02a20 = FUN_140002ddd(FUN_14669b55d,uVar3,L"RigVMFunction_MathFloatRad");
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
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02a20;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathFloatRad::Execute",&LAB_149109a60,lVar4);
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
  return DAT_14cc02a20;
}



// FUNCTION 14669b55d FUN_14669b55d body=47 status=ok
// SIG undefined FUN_14669b55d(void)

longlong FUN_14669b55d(void)

{
  if (DAT_14cc02a18 == 0) {
    FUN_14086a14e(&DAT_14cc02a18,&PTR_FUN_14baeb228);
  }
  return DAT_14cc02a18;
}



// FUNCTION 14669b58c FUN_14669b58c body=48 status=ok
// SIG undefined FUN_14669b58c(void)

void FUN_14669b58c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb15900;
  return;
}



// FUNCTION 14669b5bc FUN_14669b5bc body=408 status=ok
// SIG undefined FUN_14669b5bc(void)

longlong FUN_14669b5bc(void)

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
  if (DAT_14cc02a38 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02a38 = FUN_140002ddd(FUN_14669b755,uVar3,L"RigVMFunction_MathFloatSin");
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
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02a38;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathFloatSin::Execute",FUN_149109b60,lVar4);
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
  return DAT_14cc02a38;
}



// FUNCTION 14669b755 FUN_14669b755 body=47 status=ok
// SIG undefined FUN_14669b755(void)

longlong FUN_14669b755(void)

{
  if (DAT_14cc02a30 == 0) {
    FUN_14086a14e(&DAT_14cc02a30,&PTR_FUN_14baeb300);
  }
  return DAT_14cc02a30;
}



// FUNCTION 14669b784 FUN_14669b784 body=48 status=ok
// SIG undefined FUN_14669b784(void)

void FUN_14669b784(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb15ae0;
  return;
}



// FUNCTION 14669b7b4 FUN_14669b7b4 body=408 status=ok
// SIG undefined FUN_14669b7b4(void)

longlong FUN_14669b7b4(void)

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
  if (DAT_14cc02a50 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02a50 = FUN_140002ddd(FUN_14669b94d,uVar3,L"RigVMFunction_MathFloatCos");
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
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02a50;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathFloatCos::Execute",FUN_149109c66,lVar4);
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
  return DAT_14cc02a50;
}



// FUNCTION 14669b94d FUN_14669b94d body=47 status=ok
// SIG undefined FUN_14669b94d(void)

longlong FUN_14669b94d(void)

{
  if (DAT_14cc02a48 == 0) {
    FUN_14086a14e(&DAT_14cc02a48,&PTR_FUN_14baeb3d8);
  }
  return DAT_14cc02a48;
}



// FUNCTION 14669b97c FUN_14669b97c body=48 status=ok
// SIG undefined FUN_14669b97c(void)

void FUN_14669b97c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb15cc0;
  return;
}



// FUNCTION 14669b9ac FUN_14669b9ac body=408 status=ok
// SIG undefined FUN_14669b9ac(void)

longlong FUN_14669b9ac(void)

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
  if (DAT_14cc02a68 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02a68 = FUN_140002ddd(FUN_14669bb45,uVar3,L"RigVMFunction_MathFloatTan");
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
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02a68;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathFloatTan::Execute",FUN_149109d6c,lVar4);
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
  return DAT_14cc02a68;
}



// FUNCTION 14669bb45 FUN_14669bb45 body=47 status=ok
// SIG undefined FUN_14669bb45(void)

longlong FUN_14669bb45(void)

{
  if (DAT_14cc02a60 == 0) {
    FUN_14086a14e(&DAT_14cc02a60,&PTR_FUN_14baeb4b0);
  }
  return DAT_14cc02a60;
}



// FUNCTION 14669bb74 FUN_14669bb74 body=48 status=ok
// SIG undefined FUN_14669bb74(void)

void FUN_14669bb74(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb15ea0;
  return;
}



// FUNCTION 14669bba4 FUN_14669bba4 body=408 status=ok
// SIG undefined FUN_14669bba4(void)

longlong FUN_14669bba4(void)

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
  if (DAT_14cc02a80 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02a80 = FUN_140002ddd(FUN_14669bd3d,uVar3,L"RigVMFunction_MathFloatAsin");
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
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02a80;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathFloatAsin::Execute",FUN_149109e72,lVar4);
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
  return DAT_14cc02a80;
}



// FUNCTION 14669bd3d FUN_14669bd3d body=47 status=ok
// SIG undefined FUN_14669bd3d(void)

longlong FUN_14669bd3d(void)

{
  if (DAT_14cc02a78 == 0) {
    FUN_14086a14e(&DAT_14cc02a78,&PTR_FUN_14baeb588);
  }
  return DAT_14cc02a78;
}



// FUNCTION 14669bd6c FUN_14669bd6c body=48 status=ok
// SIG undefined FUN_14669bd6c(void)

void FUN_14669bd6c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb16080;
  return;
}



// FUNCTION 14669bd9c FUN_14669bd9c body=408 status=ok
// SIG undefined FUN_14669bd9c(void)

longlong FUN_14669bd9c(void)

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
  if (DAT_14cc02a98 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02a98 = FUN_140002ddd(FUN_14669bf35,uVar3,L"RigVMFunction_MathFloatAcos");
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
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02a98;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathFloatAcos::Execute",FUN_149109ff4,lVar4);
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
  return DAT_14cc02a98;
}



// FUNCTION 14669bf35 FUN_14669bf35 body=47 status=ok
// SIG undefined FUN_14669bf35(void)

longlong FUN_14669bf35(void)

{
  if (DAT_14cc02a90 == 0) {
    FUN_14086a14e(&DAT_14cc02a90,&PTR_FUN_14baeb660);
  }
  return DAT_14cc02a90;
}



// FUNCTION 14669bf64 FUN_14669bf64 body=48 status=ok
// SIG undefined FUN_14669bf64(void)

void FUN_14669bf64(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb16260;
  return;
}



// FUNCTION 14669bf94 FUN_14669bf94 body=408 status=ok
// SIG undefined FUN_14669bf94(void)

longlong FUN_14669bf94(void)

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
  if (DAT_14cc02ab0 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02ab0 = FUN_140002ddd(FUN_14669c12d,uVar3,L"RigVMFunction_MathFloatAtan");
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
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02ab0;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathFloatAtan::Execute",FUN_14910a176,lVar4);
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
  return DAT_14cc02ab0;
}



// FUNCTION 14669c12d FUN_14669c12d body=47 status=ok
// SIG undefined FUN_14669c12d(void)

longlong FUN_14669c12d(void)

{
  if (DAT_14cc02aa8 == 0) {
    FUN_14086a14e(&DAT_14cc02aa8,&PTR_FUN_14baeb738);
  }
  return DAT_14cc02aa8;
}



// FUNCTION 14669c15c FUN_14669c15c body=48 status=ok
// SIG undefined FUN_14669c15c(void)

void FUN_14669c15c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb16440;
  return;
}



// FUNCTION 14669c18c FUN_14669c18c body=490 status=ok
// SIG undefined FUN_14669c18c(void)

longlong FUN_14669c18c(void)

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
  if (DAT_14cc02ac8 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02ac8 = FUN_140002ddd(FUN_14669c377,uVar3,L"RigVMFunction_MathFloatAtan2");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
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
    local_58[lVar4 * 7] = L"Result";
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02ac8;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathFloatAtan2::Execute",FUN_14910a27c,lVar4);
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
  return DAT_14cc02ac8;
}



// FUNCTION 14669c377 FUN_14669c377 body=47 status=ok
// SIG undefined FUN_14669c377(void)

longlong FUN_14669c377(void)

{
  if (DAT_14cc02ac0 == 0) {
    FUN_14086a14e(&DAT_14cc02ac0,&PTR_FUN_14baeb818);
  }
  return DAT_14cc02ac0;
}



// FUNCTION 14669c3a6 FUN_14669c3a6 body=48 status=ok
// SIG undefined FUN_14669c3a6(void)

void FUN_14669c3a6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb16620;
  return;
}



// FUNCTION 14669c3d6 FUN_14669c3d6 body=810 status=ok
// SIG undefined FUN_14669c3d6(void)

longlong FUN_14669c3d6(void)

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
  if (DAT_14cc02ae0 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02ae0 = FUN_140002ddd(FUN_14669c701,uVar3,L"RigVMFunction_MathFloatLawOfCosine");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
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
    local_58[lVar4 * 7] = &DAT_149e25bec;
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
    local_58[lVar4 * 7] = L"AlphaAngle";
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
    local_58[lVar4 * 7] = L"BetaAngle";
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
    local_58[lVar4 * 7] = L"GammaAngle";
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
    local_58[lVar4 * 7] = L"bValid";
    local_58[lVar4 * 7 + 1] = L"bool";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02ae0;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathFloatLawOfCosine::Execute",FUN_14910a38c,lVar4
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
  return DAT_14cc02ae0;
}



// FUNCTION 14669c701 FUN_14669c701 body=47 status=ok
// SIG undefined FUN_14669c701(void)

longlong FUN_14669c701(void)

{
  if (DAT_14cc02ad8 == 0) {
    FUN_14086a14e(&DAT_14cc02ad8,&PTR_FUN_14baebae0);
  }
  return DAT_14cc02ad8;
}



// FUNCTION 14669c730 FUN_14669c730 body=48 status=ok
// SIG undefined FUN_14669c730(void)

void FUN_14669c730(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14bb16800;
  return;
}



// FUNCTION 14669c760 FUN_14669c760 body=408 status=ok
// SIG undefined FUN_14669c760(void)

longlong FUN_14669c760(void)

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
  if (DAT_14cc02af8 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02af8 = FUN_140002ddd(FUN_14669c8f9,uVar3,L"RigVMFunction_MathFloatExponential");
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
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02af8;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathFloatExponential::Execute",FUN_14910a69e,lVar4
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
  return DAT_14cc02af8;
}



// FUNCTION 14669c8f9 FUN_14669c8f9 body=47 status=ok
// SIG undefined FUN_14669c8f9(void)

longlong FUN_14669c8f9(void)

{
  if (DAT_14cc02af0 == 0) {
    FUN_14086a14e(&DAT_14cc02af0,&PTR_FUN_14baebbe0);
  }
  return DAT_14cc02af0;
}



// FUNCTION 14669c928 FUN_14669c928 body=48 status=ok
// SIG undefined FUN_14669c928(void)

void FUN_14669c928(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb169e0;
  return;
}



// FUNCTION 14669c958 FUN_14669c958 body=413 status=ok
// SIG undefined FUN_14669c958(void)

longlong FUN_14669c958(void)

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
  if (DAT_14cc02b10 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02b10 = FUN_140002ddd(FUN_14669caf6,uVar3,L"RigVMFunction_MathFloatArraySum");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = L"Array";
    local_58[1] = L"TArray<float>";
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
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02b10;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathFloatArraySum::Execute",&LAB_14910a7a4,lVar4);
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
  return DAT_14cc02b10;
}



// FUNCTION 14669caf6 FUN_14669caf6 body=47 status=ok
// SIG undefined FUN_14669caf6(void)

longlong FUN_14669caf6(void)

{
  if (DAT_14cc02b08 == 0) {
    FUN_14086a14e(&DAT_14cc02b08,&PTR_FUN_14baebd98);
  }
  return DAT_14cc02b08;
}



// FUNCTION 14669cb26 FUN_14669cb26 body=48 status=ok
// SIG undefined FUN_14669cb26(void)

void FUN_14669cb26(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14bb16bc0;
  return;
}



// FUNCTION 14669cb56 FUN_14669cb56 body=413 status=ok
// SIG undefined FUN_14669cb56(void)

longlong FUN_14669cb56(void)

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
  if (DAT_14cc02b28 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02b28 = FUN_140002ddd(FUN_14669ccf4,uVar3,L"RigVMFunction_MathFloatArrayAverage");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = L"Array";
    local_58[1] = L"TArray<float>";
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
    local_58[lVar4 * 7 + 1] = L"float";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02b28;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathFloatArrayAverage::Execute",&LAB_14910a8dc,
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
  return DAT_14cc02b28;
}



// FUNCTION 14669ccf4 FUN_14669ccf4 body=47 status=ok
// SIG undefined FUN_14669ccf4(void)

longlong FUN_14669ccf4(void)

{
  if (DAT_14cc02b20 == 0) {
    FUN_14086a14e(&DAT_14cc02b20,&PTR_FUN_14baebf60);
  }
  return DAT_14cc02b20;
}



// FUNCTION 14669cd24 FUN_14669cd24 body=48 status=ok
// SIG undefined FUN_14669cd24(void)

void FUN_14669cd24(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14bb16da0;
  return;
}



// FUNCTION 14669cd54 FUN_14669cd54 body=55 status=ok
// SIG undefined FUN_14669cd54(void)

void FUN_14669cd54(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc02b40 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc02b40 = FUN_140002ddd(FUN_1419061d7,uVar1,L"RigVMFunction_MathIntBase");
  }
  return;
}



// FUNCTION 14669cd8c FUN_14669cd8c body=48 status=ok
// SIG undefined FUN_14669cd8c(void)

void FUN_14669cd8c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14bb16f80;
  return;
}



// FUNCTION 14669cdbc FUN_14669cdbc body=55 status=ok
// SIG undefined FUN_14669cdbc(void)

void FUN_14669cdbc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc02b58 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc02b58 = FUN_140002ddd(FUN_14669cdf3,uVar1,L"RigVMFunction_MathIntUnaryOp");
  }
  return;
}



// FUNCTION 14669cdf3 FUN_14669cdf3 body=49 status=ok
// SIG undefined FUN_14669cdf3(void)

longlong FUN_14669cdf3(void)

{
  if (DAT_14cc02b50 == 0) {
    FUN_14086a14e(&DAT_14cc02b50,&PTR_FUN_14baec930);
  }
  return DAT_14cc02b50;
}



// FUNCTION 14669ce24 FUN_14669ce24 body=48 status=ok
// SIG undefined FUN_14669ce24(void)

void FUN_14669ce24(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb17160;
  return;
}



// FUNCTION 14669ce54 FUN_14669ce54 body=55 status=ok
// SIG undefined FUN_14669ce54(void)

void FUN_14669ce54(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc02b70 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc02b70 = FUN_140002ddd(FUN_14669ce8b,uVar1,L"RigVMFunction_MathIntBinaryOp");
  }
  return;
}



// FUNCTION 14669ce8b FUN_14669ce8b body=49 status=ok
// SIG undefined FUN_14669ce8b(void)

longlong FUN_14669ce8b(void)

{
  if (DAT_14cc02b68 == 0) {
    FUN_14086a14e(&DAT_14cc02b68,&PTR_FUN_14baeca88);
  }
  return DAT_14cc02b68;
}



// FUNCTION 14669cebc FUN_14669cebc body=48 status=ok
// SIG undefined FUN_14669cebc(void)

void FUN_14669cebc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb17340;
  return;
}



// FUNCTION 14669ceec FUN_14669ceec body=55 status=ok
// SIG undefined FUN_14669ceec(void)

void FUN_14669ceec(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc02b88 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc02b88 = FUN_140002ddd(FUN_14669cf23,uVar1,L"RigVMFunction_MathIntBinaryAggregateOp");
  }
  return;
}



// FUNCTION 14669cf23 FUN_14669cf23 body=49 status=ok
// SIG undefined FUN_14669cf23(void)

longlong FUN_14669cf23(void)

{
  if (DAT_14cc02b80 == 0) {
    FUN_14086a14e(&DAT_14cc02b80,&PTR_FUN_14baecc00);
  }
  return DAT_14cc02b80;
}



// FUNCTION 14669cf54 FUN_14669cf54 body=48 status=ok
// SIG undefined FUN_14669cf54(void)

void FUN_14669cf54(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb17520;
  return;
}



// FUNCTION 14669cf84 FUN_14669cf84 body=328 status=ok
// SIG undefined FUN_14669cf84(void)

longlong FUN_14669cf84(void)

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
  if (DAT_14cc02ba0 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02ba0 = FUN_140002ddd(FUN_14669d0cd,uVar3,L"RigVMFunction_MathIntMake");
    local_58 = (undefined8 *)0x0;
    uStack_50 = 1;
    FUN_140c0351c(&local_58,0);
    *local_58 = L"Value";
    local_58[1] = L"int32";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    FUN_14001a7b2();
    lVar2 = DAT_14cc02ba0;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathIntMake::Execute",&DAT_14910aaac,lVar2);
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
  return DAT_14cc02ba0;
}



// FUNCTION 14669d0cd FUN_14669d0cd body=47 status=ok
// SIG undefined FUN_14669d0cd(void)

longlong FUN_14669d0cd(void)

{
  if (DAT_14cc02b98 == 0) {
    FUN_14086a14e(&DAT_14cc02b98,&PTR_FUN_14baecd18);
  }
  return DAT_14cc02b98;
}



// FUNCTION 14669d0fc FUN_14669d0fc body=48 status=ok
// SIG undefined FUN_14669d0fc(void)

void FUN_14669d0fc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb17700;
  return;
}



// FUNCTION 14669d12c FUN_14669d12c body=490 status=ok
// SIG undefined FUN_14669d12c(void)

longlong FUN_14669d12c(void)

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
  if (DAT_14cc02bb8 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02bb8 = FUN_140002ddd(FUN_14669d317,uVar3,L"RigVMFunction_MathIntAdd");
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
    local_58[lVar4 * 7 + 1] = L"int32";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02bb8;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathIntAdd::Execute",&LAB_14910ab7c,lVar4);
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
  return DAT_14cc02bb8;
}



// FUNCTION 14669d317 FUN_14669d317 body=47 status=ok
// SIG undefined FUN_14669d317(void)

longlong FUN_14669d317(void)

{
  if (DAT_14cc02bb0 == 0) {
    FUN_14086a14e(&DAT_14cc02bb0,&PTR_FUN_14baecde8);
  }
  return DAT_14cc02bb0;
}



// FUNCTION 14669d346 FUN_14669d346 body=48 status=ok
// SIG undefined FUN_14669d346(void)

void FUN_14669d346(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb178e0;
  return;
}



// FUNCTION 14669d376 FUN_14669d376 body=490 status=ok
// SIG undefined FUN_14669d376(void)

longlong FUN_14669d376(void)

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
  if (DAT_14cc02bd0 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02bd0 = FUN_140002ddd(FUN_14669d561,uVar3,L"RigVMFunction_MathIntSub");
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
    local_58[lVar4 * 7 + 1] = L"int32";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02bd0;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathIntSub::Execute",&LAB_14910ac6e,lVar4);
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
  return DAT_14cc02bd0;
}



// FUNCTION 14669d561 FUN_14669d561 body=47 status=ok
// SIG undefined FUN_14669d561(void)

longlong FUN_14669d561(void)

{
  if (DAT_14cc02bc8 == 0) {
    FUN_14086a14e(&DAT_14cc02bc8,&PTR_FUN_14baeceb8);
  }
  return DAT_14cc02bc8;
}



// FUNCTION 14669d590 FUN_14669d590 body=48 status=ok
// SIG undefined FUN_14669d590(void)

void FUN_14669d590(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb17ac0;
  return;
}



// FUNCTION 14669d5c0 FUN_14669d5c0 body=490 status=ok
// SIG undefined FUN_14669d5c0(void)

longlong FUN_14669d5c0(void)

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
  if (DAT_14cc02be8 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02be8 = FUN_140002ddd(FUN_14669d7ab,uVar3,L"RigVMFunction_MathIntMul");
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
    local_58[lVar4 * 7 + 1] = L"int32";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02be8;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathIntMul::Execute",&LAB_14910ad60,lVar4);
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
  return DAT_14cc02be8;
}



// FUNCTION 14669d7ab FUN_14669d7ab body=47 status=ok
// SIG undefined FUN_14669d7ab(void)

longlong FUN_14669d7ab(void)

{
  if (DAT_14cc02be0 == 0) {
    FUN_14086a14e(&DAT_14cc02be0,&PTR_FUN_14baecf88);
  }
  return DAT_14cc02be0;
}



// FUNCTION 14669d7da FUN_14669d7da body=48 status=ok
// SIG undefined FUN_14669d7da(void)

void FUN_14669d7da(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb17ca0;
  return;
}



// FUNCTION 14669d80a FUN_14669d80a body=490 status=ok
// SIG undefined FUN_14669d80a(void)

longlong FUN_14669d80a(void)

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
  if (DAT_14cc02c00 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02c00 = FUN_140002ddd(FUN_14669d9f5,uVar3,L"RigVMFunction_MathIntDiv");
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
    local_58[lVar4 * 7 + 1] = L"int32";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02c00;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathIntDiv::Execute",&LAB_14910ae52,lVar4);
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
  return DAT_14cc02c00;
}



// FUNCTION 14669d9f5 FUN_14669d9f5 body=47 status=ok
// SIG undefined FUN_14669d9f5(void)

longlong FUN_14669d9f5(void)

{
  if (DAT_14cc02bf8 == 0) {
    FUN_14086a14e(&DAT_14cc02bf8,&PTR_FUN_14baed058);
  }
  return DAT_14cc02bf8;
}



// FUNCTION 14669da24 FUN_14669da24 body=48 status=ok
// SIG undefined FUN_14669da24(void)

void FUN_14669da24(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb17e80;
  return;
}



// FUNCTION 14669da54 FUN_14669da54 body=490 status=ok
// SIG undefined FUN_14669da54(void)

longlong FUN_14669da54(void)

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
  if (DAT_14cc02c18 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02c18 = FUN_140002ddd(FUN_14669dc3f,uVar3,L"RigVMFunction_MathIntMod");
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
    local_58[lVar4 * 7 + 1] = L"int32";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02c18;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathIntMod::Execute",&LAB_14910af5c,lVar4);
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
  return DAT_14cc02c18;
}



// FUNCTION 14669dc3f FUN_14669dc3f body=47 status=ok
// SIG undefined FUN_14669dc3f(void)

longlong FUN_14669dc3f(void)

{
  if (DAT_14cc02c10 == 0) {
    FUN_14086a14e(&DAT_14cc02c10,&PTR_FUN_14baed128);
  }
  return DAT_14cc02c10;
}



// FUNCTION 14669dc6e FUN_14669dc6e body=48 status=ok
// SIG undefined FUN_14669dc6e(void)

void FUN_14669dc6e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb18060;
  return;
}



// FUNCTION 14669dc9e FUN_14669dc9e body=490 status=ok
// SIG undefined FUN_14669dc9e(void)

longlong FUN_14669dc9e(void)

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
  if (DAT_14cc02c30 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02c30 = FUN_140002ddd(FUN_14669de89,uVar3,L"RigVMFunction_MathIntMin");
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
    local_58[lVar4 * 7 + 1] = L"int32";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02c30;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathIntMin::Execute",&LAB_14910b066,lVar4);
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
  return DAT_14cc02c30;
}



// FUNCTION 14669de89 FUN_14669de89 body=47 status=ok
// SIG undefined FUN_14669de89(void)

longlong FUN_14669de89(void)

{
  if (DAT_14cc02c28 == 0) {
    FUN_14086a14e(&DAT_14cc02c28,&PTR_FUN_14baed1f8);
  }
  return DAT_14cc02c28;
}



// FUNCTION 14669deb8 FUN_14669deb8 body=48 status=ok
// SIG undefined FUN_14669deb8(void)

void FUN_14669deb8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb18240;
  return;
}



// FUNCTION 14669dee8 FUN_14669dee8 body=490 status=ok
// SIG undefined FUN_14669dee8(void)

longlong FUN_14669dee8(void)

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
  if (DAT_14cc02c48 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02c48 = FUN_140002ddd(FUN_14669e0d3,uVar3,L"RigVMFunction_MathIntMax");
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
    local_58[lVar4 * 7 + 1] = L"int32";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02c48;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathIntMax::Execute",&LAB_14910b160,lVar4);
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
  return DAT_14cc02c48;
}



// FUNCTION 14669e0d3 FUN_14669e0d3 body=47 status=ok
// SIG undefined FUN_14669e0d3(void)

longlong FUN_14669e0d3(void)

{
  if (DAT_14cc02c40 == 0) {
    FUN_14086a14e(&DAT_14cc02c40,&PTR_FUN_14baed2c8);
  }
  return DAT_14cc02c40;
}



// FUNCTION 14669e102 FUN_14669e102 body=48 status=ok
// SIG undefined FUN_14669e102(void)

void FUN_14669e102(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb18420;
  return;
}



// FUNCTION 14669e132 FUN_14669e132 body=490 status=ok
// SIG undefined FUN_14669e132(void)

longlong FUN_14669e132(void)

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
  if (DAT_14cc02c60 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02c60 = FUN_140002ddd(FUN_14669e31d,uVar3,L"RigVMFunction_MathIntPow");
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
    local_58[lVar4 * 7 + 1] = L"int32";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02c60;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathIntPow::Execute",FUN_14910b25a,lVar4);
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
  return DAT_14cc02c60;
}



// FUNCTION 14669e31d FUN_14669e31d body=47 status=ok
// SIG undefined FUN_14669e31d(void)

longlong FUN_14669e31d(void)

{
  if (DAT_14cc02c58 == 0) {
    FUN_14086a14e(&DAT_14cc02c58,&PTR_FUN_14baed398);
  }
  return DAT_14cc02c58;
}



// FUNCTION 14669e34c FUN_14669e34c body=48 status=ok
// SIG undefined FUN_14669e34c(void)

void FUN_14669e34c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb18600;
  return;
}



// FUNCTION 14669e37c FUN_14669e37c body=408 status=ok
// SIG undefined FUN_14669e37c(void)

longlong FUN_14669e37c(void)

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
  if (DAT_14cc02c78 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02c78 = FUN_140002ddd(FUN_14669e515,uVar3,L"RigVMFunction_MathIntNegate");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"int32";
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
    lVar4 = DAT_14cc02c78;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathIntNegate::Execute",&LAB_14910b374,lVar4);
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
  return DAT_14cc02c78;
}



// FUNCTION 14669e515 FUN_14669e515 body=47 status=ok
// SIG undefined FUN_14669e515(void)

longlong FUN_14669e515(void)

{
  if (DAT_14cc02c70 == 0) {
    FUN_14086a14e(&DAT_14cc02c70,&PTR_FUN_14baed470);
  }
  return DAT_14cc02c70;
}



// FUNCTION 14669e544 FUN_14669e544 body=48 status=ok
// SIG undefined FUN_14669e544(void)

void FUN_14669e544(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb187e0;
  return;
}



// FUNCTION 14669e574 FUN_14669e574 body=408 status=ok
// SIG undefined FUN_14669e574(void)

longlong FUN_14669e574(void)

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
  if (DAT_14cc02c90 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02c90 = FUN_140002ddd(FUN_14669e70d,uVar3,L"RigVMFunction_MathIntAbs");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"int32";
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
    lVar4 = DAT_14cc02c90;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathIntAbs::Execute",&LAB_14910b45e,lVar4);
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
  return DAT_14cc02c90;
}



// FUNCTION 14669e70d FUN_14669e70d body=47 status=ok
// SIG undefined FUN_14669e70d(void)

longlong FUN_14669e70d(void)

{
  if (DAT_14cc02c88 == 0) {
    FUN_14086a14e(&DAT_14cc02c88,&PTR_FUN_14baed540);
  }
  return DAT_14cc02c88;
}



// FUNCTION 14669e73c FUN_14669e73c body=48 status=ok
// SIG undefined FUN_14669e73c(void)

void FUN_14669e73c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb189c0;
  return;
}



// FUNCTION 14669e76c FUN_14669e76c body=413 status=ok
// SIG undefined FUN_14669e76c(void)

longlong FUN_14669e76c(void)

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
  if (DAT_14cc02ca8 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02ca8 = FUN_140002ddd(FUN_14669e90a,uVar3,L"RigVMFunction_MathIntToFloat");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"int32";
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
    lVar4 = DAT_14cc02ca8;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathIntToFloat::Execute",&LAB_14910b554,lVar4);
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
  return DAT_14cc02ca8;
}



// FUNCTION 14669e90a FUN_14669e90a body=47 status=ok
// SIG undefined FUN_14669e90a(void)

longlong FUN_14669e90a(void)

{
  if (DAT_14cc02ca0 == 0) {
    FUN_14086a14e(&DAT_14cc02ca0,&PTR_FUN_14baed6a0);
  }
  return DAT_14cc02ca0;
}



// FUNCTION 14669e93a FUN_14669e93a body=48 status=ok
// SIG undefined FUN_14669e93a(void)

void FUN_14669e93a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb18ba0;
  return;
}



// FUNCTION 14669e96a FUN_14669e96a body=413 status=ok
// SIG undefined FUN_14669e96a(void)

longlong FUN_14669e96a(void)

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
  if (DAT_14cc02cc0 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02cc0 = FUN_140002ddd(FUN_14669eb08,uVar3,L"RigVMFunction_MathIntToDouble");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"int32";
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
    lVar4 = DAT_14cc02cc0;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathIntToDouble::Execute",&LAB_14910b648,lVar4);
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
  return DAT_14cc02cc0;
}



// FUNCTION 14669eb08 FUN_14669eb08 body=47 status=ok
// SIG undefined FUN_14669eb08(void)

longlong FUN_14669eb08(void)

{
  if (DAT_14cc02cb8 == 0) {
    FUN_14086a14e(&DAT_14cc02cb8,&PTR_FUN_14baed810);
  }
  return DAT_14cc02cb8;
}



// FUNCTION 14669eb38 FUN_14669eb38 body=48 status=ok
// SIG undefined FUN_14669eb38(void)

void FUN_14669eb38(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb18d80;
  return;
}



// FUNCTION 14669eb68 FUN_14669eb68 body=408 status=ok
// SIG undefined FUN_14669eb68(void)

longlong FUN_14669eb68(void)

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
  if (DAT_14cc02cd8 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02cd8 = FUN_140002ddd(FUN_14669ed01,uVar3,L"RigVMFunction_MathIntSign");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (int)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"int32";
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
    lVar4 = DAT_14cc02cd8;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathIntSign::Execute",&LAB_14910b73c,lVar4);
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
  return DAT_14cc02cd8;
}



// FUNCTION 14669ed01 FUN_14669ed01 body=47 status=ok
// SIG undefined FUN_14669ed01(void)

longlong FUN_14669ed01(void)

{
  if (DAT_14cc02cd0 == 0) {
    FUN_14086a14e(&DAT_14cc02cd0,&PTR_FUN_14baed8e0);
  }
  return DAT_14cc02cd0;
}



// FUNCTION 14669ed30 FUN_14669ed30 body=48 status=ok
// SIG undefined FUN_14669ed30(void)

void FUN_14669ed30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb18f60;
  return;
}



// FUNCTION 14669ed60 FUN_14669ed60 body=569 status=ok
// SIG undefined FUN_14669ed60(void)

longlong FUN_14669ed60(void)

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
  if (DAT_14cc02cf0 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02cf0 = FUN_140002ddd(FUN_14669ef9a,uVar3,L"RigVMFunction_MathIntClamp");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar1 = (uint)uStack_50;
    *local_58 = L"Value";
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
    local_58[lVar4 * 7] = L"Minimum";
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
    local_58[lVar4 * 7] = L"Maximum";
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
    local_58[lVar4 * 7 + 1] = L"int32";
    local_58[lVar4 * 7 + 2] = 0;
    (local_58 + lVar4 * 7 + 2)[1] = 0;
    local_58[lVar4 * 7 + 4] = 0;
    (local_58 + lVar4 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar4 * 7 + 6) = 0;
    FUN_14001a7b2();
    lVar4 = DAT_14cc02cf0;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathIntClamp::Execute",&LAB_14910b830,lVar4);
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
  return DAT_14cc02cf0;
}



// FUNCTION 14669ef9a FUN_14669ef9a body=47 status=ok
// SIG undefined FUN_14669ef9a(void)

longlong FUN_14669ef9a(void)

{
  if (DAT_14cc02ce8 == 0) {
    FUN_14086a14e(&DAT_14cc02ce8,&PTR_FUN_14baedac0);
  }
  return DAT_14cc02ce8;
}



// FUNCTION 14669efca FUN_14669efca body=48 status=ok
// SIG undefined FUN_14669efca(void)

void FUN_14669efca(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb19140;
  return;
}



// FUNCTION 14669effa FUN_14669effa body=497 status=ok
// SIG undefined FUN_14669effa(void)

longlong FUN_14669effa(void)

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
  if (DAT_14cc02d08 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02d08 = FUN_140002ddd(FUN_14669f1ec,uVar3,L"RigVMFunction_MathIntEquals");
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
    lVar4 = DAT_14cc02d08;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathIntEquals::Execute",&LAB_14910b944,lVar4);
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
  return DAT_14cc02d08;
}



// FUNCTION 14669f1ec FUN_14669f1ec body=47 status=ok
// SIG undefined FUN_14669f1ec(void)

longlong FUN_14669f1ec(void)

{
  if (DAT_14cc02d00 == 0) {
    FUN_14086a14e(&DAT_14cc02d00,&PTR_FUN_14baedc68);
  }
  return DAT_14cc02d00;
}



// FUNCTION 14669f21c FUN_14669f21c body=48 status=ok
// SIG undefined FUN_14669f21c(void)

void FUN_14669f21c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb19320;
  return;
}



// FUNCTION 14669f24c FUN_14669f24c body=497 status=ok
// SIG undefined FUN_14669f24c(void)

longlong FUN_14669f24c(void)

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
  if (DAT_14cc02d20 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02d20 = FUN_140002ddd(FUN_14669f43e,uVar3,L"RigVMFunction_MathIntNotEquals");
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
    lVar4 = DAT_14cc02d20;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathIntNotEquals::Execute",&LAB_14910ba3c,lVar4);
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
  return DAT_14cc02d20;
}



// FUNCTION 14669f43e FUN_14669f43e body=47 status=ok
// SIG undefined FUN_14669f43e(void)

longlong FUN_14669f43e(void)

{
  if (DAT_14cc02d18 == 0) {
    FUN_14086a14e(&DAT_14cc02d18,&PTR_FUN_14baede18);
  }
  return DAT_14cc02d18;
}



// FUNCTION 14669f46e FUN_14669f46e body=48 status=ok
// SIG undefined FUN_14669f46e(void)

void FUN_14669f46e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb19500;
  return;
}



// FUNCTION 14669f49e FUN_14669f49e body=497 status=ok
// SIG undefined FUN_14669f49e(void)

longlong FUN_14669f49e(void)

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
  if (DAT_14cc02d38 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02d38 = FUN_140002ddd(FUN_14669f690,uVar3,L"RigVMFunction_MathIntGreater");
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
    lVar4 = DAT_14cc02d38;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathIntGreater::Execute",&LAB_14910bb34,lVar4);
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
  return DAT_14cc02d38;
}



// FUNCTION 14669f690 FUN_14669f690 body=47 status=ok
// SIG undefined FUN_14669f690(void)

longlong FUN_14669f690(void)

{
  if (DAT_14cc02d30 == 0) {
    FUN_14086a14e(&DAT_14cc02d30,&PTR_FUN_14baedfc8);
  }
  return DAT_14cc02d30;
}



// FUNCTION 14669f6c0 FUN_14669f6c0 body=48 status=ok
// SIG undefined FUN_14669f6c0(void)

void FUN_14669f6c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb196e0;
  return;
}



// FUNCTION 14669f6f0 FUN_14669f6f0 body=497 status=ok
// SIG undefined FUN_14669f6f0(void)

longlong FUN_14669f6f0(void)

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
  if (DAT_14cc02d50 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02d50 = FUN_140002ddd(FUN_14669f8e2,uVar3,L"RigVMFunction_MathIntLess");
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
    lVar4 = DAT_14cc02d50;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathIntLess::Execute",&LAB_14910bc2c,lVar4);
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
  return DAT_14cc02d50;
}



// FUNCTION 14669f8e2 FUN_14669f8e2 body=47 status=ok
// SIG undefined FUN_14669f8e2(void)

longlong FUN_14669f8e2(void)

{
  if (DAT_14cc02d48 == 0) {
    FUN_14086a14e(&DAT_14cc02d48,&PTR_FUN_14baee168);
  }
  return DAT_14cc02d48;
}



// FUNCTION 14669f912 FUN_14669f912 body=48 status=ok
// SIG undefined FUN_14669f912(void)

void FUN_14669f912(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb198c0;
  return;
}



// FUNCTION 14669f942 FUN_14669f942 body=497 status=ok
// SIG undefined FUN_14669f942(void)

longlong FUN_14669f942(void)

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
  if (DAT_14cc02d68 == 0) {
    uVar3 = FUN_1408ed7fc();
    DAT_14cc02d68 = FUN_140002ddd(FUN_14669fb34,uVar3,L"RigVMFunction_MathIntGreaterEqual");
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
    lVar4 = DAT_14cc02d68;
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
    FUN_1446f2f9a(&DAT_14cc012d0,L"FRigVMFunction_MathIntGreaterEqual::Execute",&LAB_14910bd24,lVar4
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
  return DAT_14cc02d68;
}


