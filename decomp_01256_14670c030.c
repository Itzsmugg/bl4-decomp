// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14670c030 FUN_14670c030 body=55 status=ok
// SIG undefined FUN_14670c030(void)

void FUN_14670c030(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0ab40 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc0ab40 = FUN_140002ddd(FUN_14670c067,uVar1,L"RigUnit_MultiFABRIK_WorkData");
  }
  return;
}



// FUNCTION 14670c067 FUN_14670c067 body=47 status=ok
// SIG undefined FUN_14670c067(void)

longlong FUN_14670c067(void)

{
  if (DAT_14cc0ab38 == 0) {
    FUN_14086a14e(&DAT_14cc0ab38,&PTR_FUN_14bbce770);
  }
  return DAT_14cc0ab38;
}



// FUNCTION 14670c096 FUN_14670c096 body=48 status=ok
// SIG undefined FUN_14670c096(void)

void FUN_14670c096(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000068;
  *puVar1 = &PTR_FUN_14bc01fb0;
  return;
}



// FUNCTION 14670c0c6 FUN_14670c0c6 body=55 status=ok
// SIG undefined FUN_14670c0c6(void)

void FUN_14670c0c6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0ab58 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc0ab58 = FUN_140002ddd(FUN_14670c0fd,uVar1,L"RigUnit_MultiFABRIK_EndEffector");
  }
  return;
}



// FUNCTION 14670c0fd FUN_14670c0fd body=47 status=ok
// SIG undefined FUN_14670c0fd(void)

longlong FUN_14670c0fd(void)

{
  if (DAT_14cc0ab50 == 0) {
    FUN_14086a14e(&DAT_14cc0ab50,&PTR_FUN_14bbce890);
  }
  return DAT_14cc0ab50;
}



// FUNCTION 14670c12c FUN_14670c12c body=48 status=ok
// SIG undefined FUN_14670c12c(void)

void FUN_14670c12c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14bc02110;
  return;
}



// FUNCTION 14670c15c FUN_14670c15c body=829 status=ok
// SIG undefined FUN_14670c15c(void)

longlong FUN_14670c15c(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  undefined8 uStack_50;
  longlong local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc0ab70 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0ab70 = FUN_140002ddd(FUN_14670c49a,uVar4,L"RigUnit_MultiFABRIK");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"RootBone";
    local_58[1] = L"FName";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,iVar2);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"Effectors";
    local_58[lVar6 * 7 + 1] = L"TArray<FRigUnit_MultiFABRIK_EndEffector>";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"Precision";
    local_58[lVar6 * 7 + 1] = L"float";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"bPropagateToChildren";
    local_58[lVar6 * 7 + 1] = L"bool";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"MaxIterations";
    local_58[lVar6 * 7 + 1] = L"int32";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"WorkData";
    local_58[lVar6 * 7 + 1] = L"FRigUnit_MultiFABRIK_WorkData";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    local_58[lVar6 * 7] = L"bIsInitialized";
    local_58[lVar6 * 7 + 1] = L"bool";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0ab70;
    local_38 = 0x101;
    local_40 = lVar5;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x3a0));
    LOCK();
    piVar1 = (int *)(lVar5 + 0x3ac);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (iVar2 == 0) {
      LOCK();
      *(undefined1 *)(local_40 + 0x3a8) = (undefined1)local_38;
      UNLOCK();
    }
    local_68 = &local_58;
    FUN_1446f2f9a(lVar5,L"FRigUnit_MultiFABRIK::Execute",FUN_14926f33a,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0ab70;
}



// FUNCTION 14670c49a FUN_14670c49a body=47 status=ok
// SIG undefined FUN_14670c49a(void)

longlong FUN_14670c49a(void)

{
  if (DAT_14cc0ab68 == 0) {
    FUN_14086a14e(&DAT_14cc0ab68,&PTR_FUN_14bbcec28);
  }
  return DAT_14cc0ab68;
}



// FUNCTION 14670c4ca FUN_14670c4ca body=48 status=ok
// SIG undefined FUN_14670c4ca(void)

void FUN_14670c4ca(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000290;
  *puVar1 = &PTR_FUN_14bc02270;
  return;
}



// FUNCTION 14670c4fa FUN_14670c4fa body=55 status=ok
// SIG undefined FUN_14670c4fa(void)

void FUN_14670c4fa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0ab88 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc0ab88 = FUN_140002ddd(FUN_14670c531,uVar1,L"RigUnit_SlideChain_WorkData");
  }
  return;
}



// FUNCTION 14670c531 FUN_14670c531 body=49 status=ok
// SIG undefined FUN_14670c531(void)

longlong FUN_14670c531(void)

{
  if (DAT_14cc0ab80 == 0) {
    FUN_14086a14e(&DAT_14cc0ab80,&PTR_FUN_14bbcefa8);
  }
  return DAT_14cc0ab80;
}



// FUNCTION 14670c562 FUN_14670c562 body=48 status=ok
// SIG undefined FUN_14670c562(void)

void FUN_14670c562(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000048;
  *puVar1 = &PTR_FUN_14bc02460;
  return;
}



// FUNCTION 14670c592 FUN_14670c592 body=654 status=ok
// SIG undefined FUN_14670c592(void)

longlong FUN_14670c592(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  undefined8 uStack_50;
  longlong local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc0aba0 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0aba0 = FUN_140002ddd(FUN_14670c821,uVar4,L"RigUnit_SlideChain");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"StartBone";
    local_58[1] = L"FName";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,iVar2);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"EndBone";
    local_58[lVar6 * 7 + 1] = L"FName";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"SlideAmount";
    local_58[lVar6 * 7 + 1] = L"float";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"bPropagateToChildren";
    local_58[lVar6 * 7 + 1] = L"bool";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    local_58[lVar6 * 7] = L"WorkData";
    local_58[lVar6 * 7 + 1] = L"FRigUnit_SlideChain_WorkData";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0aba0;
    local_38 = 0x101;
    local_40 = lVar5;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x3a0));
    LOCK();
    piVar1 = (int *)(lVar5 + 0x3ac);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (iVar2 == 0) {
      LOCK();
      *(undefined1 *)(local_40 + 0x3a8) = (undefined1)local_38;
      UNLOCK();
    }
    local_68 = &local_58;
    FUN_1446f2f9a(lVar5,L"FRigUnit_SlideChain::Execute",FUN_149270d8a,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0aba0;
}



// FUNCTION 14670c821 FUN_14670c821 body=47 status=ok
// SIG undefined FUN_14670c821(void)

longlong FUN_14670c821(void)

{
  if (DAT_14cc0ab98 == 0) {
    FUN_14086a14e(&DAT_14cc0ab98,&PTR_FUN_14bbcf210);
  }
  return DAT_14cc0ab98;
}



// FUNCTION 14670c850 FUN_14670c850 body=48 status=ok
// SIG undefined FUN_14670c850(void)

void FUN_14670c850(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000250;
  *puVar1 = &PTR_FUN_14bc025c0;
  return;
}



// FUNCTION 14670c880 FUN_14670c880 body=581 status=ok
// SIG undefined FUN_14670c880(void)

longlong FUN_14670c880(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  undefined8 uStack_50;
  longlong local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc0abb8 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0abb8 = FUN_140002ddd(FUN_14670cac6,uVar4,L"RigUnit_SlideChainPerItem");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"Items";
    local_58[1] = L"FRigElementKeyCollection";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,iVar2);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"SlideAmount";
    local_58[lVar6 * 7 + 1] = L"float";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"bPropagateToChildren";
    local_58[lVar6 * 7 + 1] = L"bool";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    local_58[lVar6 * 7] = L"WorkData";
    local_58[lVar6 * 7 + 1] = L"FRigUnit_SlideChain_WorkData";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0abb8;
    local_38 = 0x101;
    local_40 = lVar5;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x3a0));
    LOCK();
    piVar1 = (int *)(lVar5 + 0x3ac);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (iVar2 == 0) {
      LOCK();
      *(undefined1 *)(local_40 + 0x3a8) = (undefined1)local_38;
      UNLOCK();
    }
    local_68 = &local_58;
    FUN_1446f2f9a(lVar5,L"FRigUnit_SlideChainPerItem::Execute",FUN_149270f3c,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0abb8;
}



// FUNCTION 14670cac6 FUN_14670cac6 body=47 status=ok
// SIG undefined FUN_14670cac6(void)

longlong FUN_14670cac6(void)

{
  if (DAT_14cc0abb0 == 0) {
    FUN_14086a14e(&DAT_14cc0abb0,&PTR_FUN_14bbcf400);
  }
  return DAT_14cc0abb0;
}



// FUNCTION 14670caf6 FUN_14670caf6 body=48 status=ok
// SIG undefined FUN_14670caf6(void)

void FUN_14670caf6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000250;
  *puVar1 = &PTR_FUN_14bc027b0;
  return;
}



// FUNCTION 14670cb26 FUN_14670cb26 body=581 status=ok
// SIG undefined FUN_14670cb26(void)

longlong FUN_14670cb26(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  undefined8 uStack_50;
  longlong local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc0abd0 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0abd0 = FUN_140002ddd(FUN_14670cd6c,uVar4,L"RigUnit_SlideChainItemArray");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"Items";
    local_58[1] = L"TArray<FRigElementKey>";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,iVar2);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"SlideAmount";
    local_58[lVar6 * 7 + 1] = L"float";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"bPropagateToChildren";
    local_58[lVar6 * 7 + 1] = L"bool";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    local_58[lVar6 * 7] = L"WorkData";
    local_58[lVar6 * 7 + 1] = L"FRigUnit_SlideChain_WorkData";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0abd0;
    local_38 = 0x101;
    local_40 = lVar5;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x3a0));
    LOCK();
    piVar1 = (int *)(lVar5 + 0x3ac);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (iVar2 == 0) {
      LOCK();
      *(undefined1 *)(local_40 + 0x3a8) = (undefined1)local_38;
      UNLOCK();
    }
    local_68 = &local_58;
    FUN_1446f2f9a(lVar5,L"FRigUnit_SlideChainItemArray::Execute",FUN_14927106e,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0abd0;
}



// FUNCTION 14670cd6c FUN_14670cd6c body=47 status=ok
// SIG undefined FUN_14670cd6c(void)

longlong FUN_14670cd6c(void)

{
  if (DAT_14cc0abc8 == 0) {
    FUN_14086a14e(&DAT_14cc0abc8,&PTR_FUN_14bbcf638);
  }
  return DAT_14cc0abc8;
}



// FUNCTION 14670cd9c FUN_14670cd9c body=48 status=ok
// SIG undefined FUN_14670cd9c(void)

void FUN_14670cd9c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000250;
  *puVar1 = &PTR_FUN_14bc029a0;
  return;
}



// FUNCTION 14670cdcc FUN_14670cdcc body=55 status=ok
// SIG undefined FUN_14670cdcc(void)

void FUN_14670cdcc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0abe8 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc0abe8 = FUN_140002ddd(FUN_14670ce03,uVar1,L"RegionScaleFactors");
  }
  return;
}



// FUNCTION 14670ce03 FUN_14670ce03 body=49 status=ok
// SIG undefined FUN_14670ce03(void)

longlong FUN_14670ce03(void)

{
  if (DAT_14cc0abe0 == 0) {
    FUN_14086a14e(&DAT_14cc0abe0,&PTR_FUN_14bbcf898);
  }
  return DAT_14cc0abe0;
}



// FUNCTION 14670ce34 FUN_14670ce34 body=48 status=ok
// SIG undefined FUN_14670ce34(void)

void FUN_14670ce34(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000010;
  *puVar1 = &PTR_FUN_14bc02b90;
  return;
}



// FUNCTION 14670ce64 FUN_14670ce64 body=55 status=ok
// SIG undefined FUN_14670ce64(void)

void FUN_14670ce64(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0ac00 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc0ac00 = FUN_140002ddd(FUN_14670ce9b,uVar1,L"SphericalRegion");
  }
  return;
}



// FUNCTION 14670ce9b FUN_14670ce9b body=49 status=ok
// SIG undefined FUN_14670ce9b(void)

longlong FUN_14670ce9b(void)

{
  if (DAT_14cc0abf8 == 0) {
    FUN_14086a14e(&DAT_14cc0abf8,&PTR_FUN_14bbcf900);
  }
  return DAT_14cc0abf8;
}



// FUNCTION 14670cecc FUN_14670cecc body=48 status=ok
// SIG undefined FUN_14670cecc(void)

void FUN_14670cecc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000014;
  *puVar1 = &PTR_FUN_14bc02cf0;
  return;
}



// FUNCTION 14670cefc FUN_14670cefc body=55 status=ok
// SIG undefined FUN_14670cefc(void)

void FUN_14670cefc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0ac18 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc0ac18 = FUN_140002ddd(FUN_14670cf33,uVar1,L"SphericalPoseReaderDebugSettings");
  }
  return;
}



// FUNCTION 14670cf33 FUN_14670cf33 body=47 status=ok
// SIG undefined FUN_14670cf33(void)

longlong FUN_14670cf33(void)

{
  if (DAT_14cc0ac10 == 0) {
    FUN_14086a14e(&DAT_14cc0ac10,&PTR_FUN_14bbcfb78);
  }
  return DAT_14cc0ac10;
}



// FUNCTION 14670cf62 FUN_14670cf62 body=48 status=ok
// SIG undefined FUN_14670cf62(void)

void FUN_14670cf62(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000010;
  *puVar1 = &PTR_FUN_14bc02e50;
  return;
}



// FUNCTION 14670cf92 FUN_14670cf92 body=1989 status=ok
// SIG undefined FUN_14670cf92(void)

longlong FUN_14670cf92(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  undefined8 **local_88;
  undefined8 *local_78;
  undefined8 uStack_70;
  longlong local_60;
  undefined2 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (DAT_14cc0ac30 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0ac30 = FUN_140002ddd(FUN_14670d758,uVar4,L"RigUnit_SphericalPoseReader");
    local_78 = (undefined8 *)0x0;
    uStack_70._0_4_ = 1;
    uStack_70._4_4_ = 0;
    FUN_140c0351c(&local_78,0);
    iVar2 = (uint)uStack_70;
    *local_78 = L"OutputParam";
    local_78[1] = L"float";
    local_78[2] = 0;
    local_78[3] = 0;
    local_78[4] = 0;
    local_78[5] = 0;
    *(undefined1 *)(local_78 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_70;
    uStack_70._0_4_ = (uint)uStack_70 + 1;
    if (uStack_70._4_4_ < (uint)uStack_70) {
      FUN_140c0351c(&local_78,iVar2);
    }
    uVar3 = (uint)uStack_70;
    local_78[lVar6 * 7] = L"DriverItem";
    local_78[lVar6 * 7 + 1] = L"FRigElementKey";
    local_78[lVar6 * 7 + 2] = 0;
    (local_78 + lVar6 * 7 + 2)[1] = 0;
    local_78[lVar6 * 7 + 4] = 0;
    (local_78 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_78 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_70;
    uStack_70._0_4_ = (uint)uStack_70 + 1;
    if (uStack_70._4_4_ < (uint)uStack_70) {
      FUN_140c0351c(&local_78,uVar3);
    }
    uVar3 = (uint)uStack_70;
    local_78[lVar6 * 7] = L"DriverAxis";
    local_78[lVar6 * 7 + 1] = L"FVector";
    local_78[lVar6 * 7 + 2] = 0;
    (local_78 + lVar6 * 7 + 2)[1] = 0;
    local_78[lVar6 * 7 + 4] = 0;
    (local_78 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_78 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_70;
    uStack_70._0_4_ = (uint)uStack_70 + 1;
    if (uStack_70._4_4_ < (uint)uStack_70) {
      FUN_140c0351c(&local_78,uVar3);
    }
    uVar3 = (uint)uStack_70;
    local_78[lVar6 * 7] = L"RotationOffset";
    local_78[lVar6 * 7 + 1] = L"FVector";
    local_78[lVar6 * 7 + 2] = 0;
    (local_78 + lVar6 * 7 + 2)[1] = 0;
    local_78[lVar6 * 7 + 4] = 0;
    (local_78 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_78 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_70;
    uStack_70._0_4_ = (uint)uStack_70 + 1;
    if (uStack_70._4_4_ < (uint)uStack_70) {
      FUN_140c0351c(&local_78,uVar3);
    }
    uVar3 = (uint)uStack_70;
    local_78[lVar6 * 7] = L"ActiveRegionSize";
    local_78[lVar6 * 7 + 1] = L"float";
    local_78[lVar6 * 7 + 2] = 0;
    (local_78 + lVar6 * 7 + 2)[1] = 0;
    local_78[lVar6 * 7 + 4] = 0;
    (local_78 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_78 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_70;
    uStack_70._0_4_ = (uint)uStack_70 + 1;
    if (uStack_70._4_4_ < (uint)uStack_70) {
      FUN_140c0351c(&local_78,uVar3);
    }
    uVar3 = (uint)uStack_70;
    local_78[lVar6 * 7] = L"ActiveRegionScaleFactors";
    local_78[lVar6 * 7 + 1] = L"FRegionScaleFactors";
    local_78[lVar6 * 7 + 2] = 0;
    (local_78 + lVar6 * 7 + 2)[1] = 0;
    local_78[lVar6 * 7 + 4] = 0;
    (local_78 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_78 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_70;
    uStack_70._0_4_ = (uint)uStack_70 + 1;
    if (uStack_70._4_4_ < (uint)uStack_70) {
      FUN_140c0351c(&local_78,uVar3);
    }
    uVar3 = (uint)uStack_70;
    local_78[lVar6 * 7] = L"FalloffSize";
    local_78[lVar6 * 7 + 1] = L"float";
    local_78[lVar6 * 7 + 2] = 0;
    (local_78 + lVar6 * 7 + 2)[1] = 0;
    local_78[lVar6 * 7 + 4] = 0;
    (local_78 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_78 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_70;
    uStack_70._0_4_ = (uint)uStack_70 + 1;
    if (uStack_70._4_4_ < (uint)uStack_70) {
      FUN_140c0351c(&local_78,uVar3);
    }
    uVar3 = (uint)uStack_70;
    local_78[lVar6 * 7] = L"FalloffRegionScaleFactors";
    local_78[lVar6 * 7 + 1] = L"FRegionScaleFactors";
    local_78[lVar6 * 7 + 2] = 0;
    (local_78 + lVar6 * 7 + 2)[1] = 0;
    local_78[lVar6 * 7 + 4] = 0;
    (local_78 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_78 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_70;
    uStack_70._0_4_ = (uint)uStack_70 + 1;
    if (uStack_70._4_4_ < (uint)uStack_70) {
      FUN_140c0351c(&local_78,uVar3);
    }
    uVar3 = (uint)uStack_70;
    local_78[lVar6 * 7] = L"FlipWidthScaling";
    local_78[lVar6 * 7 + 1] = L"bool";
    local_78[lVar6 * 7 + 2] = 0;
    (local_78 + lVar6 * 7 + 2)[1] = 0;
    local_78[lVar6 * 7 + 4] = 0;
    (local_78 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_78 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_70;
    uStack_70._0_4_ = (uint)uStack_70 + 1;
    if (uStack_70._4_4_ < (uint)uStack_70) {
      FUN_140c0351c(&local_78,uVar3);
    }
    uVar3 = (uint)uStack_70;
    local_78[lVar6 * 7] = L"FlipHeightScaling";
    local_78[lVar6 * 7 + 1] = L"bool";
    local_78[lVar6 * 7 + 2] = 0;
    (local_78 + lVar6 * 7 + 2)[1] = 0;
    local_78[lVar6 * 7 + 4] = 0;
    (local_78 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_78 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_70;
    uStack_70._0_4_ = (uint)uStack_70 + 1;
    if (uStack_70._4_4_ < (uint)uStack_70) {
      FUN_140c0351c(&local_78,uVar3);
    }
    uVar3 = (uint)uStack_70;
    local_78[lVar6 * 7] = L"OptionalParentItem";
    local_78[lVar6 * 7 + 1] = L"FRigElementKey";
    local_78[lVar6 * 7 + 2] = 0;
    (local_78 + lVar6 * 7 + 2)[1] = 0;
    local_78[lVar6 * 7 + 4] = 0;
    (local_78 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_78 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_70;
    uStack_70._0_4_ = (uint)uStack_70 + 1;
    if (uStack_70._4_4_ < (uint)uStack_70) {
      FUN_140c0351c(&local_78,uVar3);
    }
    uVar3 = (uint)uStack_70;
    local_78[lVar6 * 7] = L"Debug";
    local_78[lVar6 * 7 + 1] = L"FSphericalPoseReaderDebugSettings";
    local_78[lVar6 * 7 + 2] = 0;
    (local_78 + lVar6 * 7 + 2)[1] = 0;
    local_78[lVar6 * 7 + 4] = 0;
    (local_78 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_78 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_70;
    uStack_70._0_4_ = (uint)uStack_70 + 1;
    if (uStack_70._4_4_ < (uint)uStack_70) {
      FUN_140c0351c(&local_78,uVar3);
    }
    uVar3 = (uint)uStack_70;
    local_78[lVar6 * 7] = L"InnerRegion";
    local_78[lVar6 * 7 + 1] = L"FSphericalRegion";
    local_78[lVar6 * 7 + 2] = 0;
    (local_78 + lVar6 * 7 + 2)[1] = 0;
    local_78[lVar6 * 7 + 4] = 0;
    (local_78 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_78 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_70;
    uStack_70._0_4_ = (uint)uStack_70 + 1;
    if (uStack_70._4_4_ < (uint)uStack_70) {
      FUN_140c0351c(&local_78,uVar3);
    }
    uVar3 = (uint)uStack_70;
    local_78[lVar6 * 7] = L"OuterRegion";
    local_78[lVar6 * 7 + 1] = L"FSphericalRegion";
    local_78[lVar6 * 7 + 2] = 0;
    (local_78 + lVar6 * 7 + 2)[1] = 0;
    local_78[lVar6 * 7 + 4] = 0;
    (local_78 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_78 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_70;
    uStack_70._0_4_ = (uint)uStack_70 + 1;
    if (uStack_70._4_4_ < (uint)uStack_70) {
      FUN_140c0351c(&local_78,uVar3);
    }
    uVar3 = (uint)uStack_70;
    local_78[lVar6 * 7] = L"DriverNormal";
    local_78[lVar6 * 7 + 1] = L"FVector";
    local_78[lVar6 * 7 + 2] = 0;
    (local_78 + lVar6 * 7 + 2)[1] = 0;
    local_78[lVar6 * 7 + 4] = 0;
    (local_78 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_78 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_70;
    uStack_70._0_4_ = (uint)uStack_70 + 1;
    if (uStack_70._4_4_ < (uint)uStack_70) {
      FUN_140c0351c(&local_78,uVar3);
    }
    uVar3 = (uint)uStack_70;
    local_78[lVar6 * 7] = L"Driver2D";
    local_78[lVar6 * 7 + 1] = L"FVector";
    local_78[lVar6 * 7 + 2] = 0;
    (local_78 + lVar6 * 7 + 2)[1] = 0;
    local_78[lVar6 * 7 + 4] = 0;
    (local_78 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_78 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_70;
    uStack_70._0_4_ = (uint)uStack_70 + 1;
    if (uStack_70._4_4_ < (uint)uStack_70) {
      FUN_140c0351c(&local_78,uVar3);
    }
    uVar3 = (uint)uStack_70;
    local_78[lVar6 * 7] = L"DriverCache";
    local_78[lVar6 * 7 + 1] = L"FCachedRigElement";
    local_78[lVar6 * 7 + 2] = 0;
    (local_78 + lVar6 * 7 + 2)[1] = 0;
    local_78[lVar6 * 7 + 4] = 0;
    (local_78 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_78 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_70;
    uStack_70._0_4_ = (uint)uStack_70 + 1;
    if (uStack_70._4_4_ < (uint)uStack_70) {
      FUN_140c0351c(&local_78,uVar3);
    }
    uVar3 = (uint)uStack_70;
    local_78[lVar6 * 7] = L"OptionalParentCache";
    local_78[lVar6 * 7 + 1] = L"FCachedRigElement";
    local_78[lVar6 * 7 + 2] = 0;
    (local_78 + lVar6 * 7 + 2)[1] = 0;
    local_78[lVar6 * 7 + 4] = 0;
    (local_78 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_78 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_70;
    uStack_70._0_4_ = (uint)uStack_70 + 1;
    if (uStack_70._4_4_ < (uint)uStack_70) {
      FUN_140c0351c(&local_78,uVar3);
    }
    uVar3 = (uint)uStack_70;
    local_78[lVar6 * 7] = L"LocalDriverTransformInit";
    local_78[lVar6 * 7 + 1] = L"FTransform";
    local_78[lVar6 * 7 + 2] = 0;
    (local_78 + lVar6 * 7 + 2)[1] = 0;
    local_78[lVar6 * 7 + 4] = 0;
    (local_78 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_78 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_70;
    uStack_70._0_4_ = (uint)uStack_70 + 1;
    if (uStack_70._4_4_ < (uint)uStack_70) {
      FUN_140c0351c(&local_78,uVar3);
    }
    uVar3 = (uint)uStack_70;
    local_78[lVar6 * 7] = L"CachedRotationOffset";
    local_78[lVar6 * 7 + 1] = L"FVector";
    local_78[lVar6 * 7 + 2] = 0;
    (local_78 + lVar6 * 7 + 2)[1] = 0;
    local_78[lVar6 * 7 + 4] = 0;
    (local_78 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_78 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_70;
    uStack_70._0_4_ = (uint)uStack_70 + 1;
    if (uStack_70._4_4_ < (uint)uStack_70) {
      FUN_140c0351c(&local_78,uVar3);
    }
    local_78[lVar6 * 7] = L"bCachedInitTransforms";
    local_78[lVar6 * 7 + 1] = L"bool";
    local_78[lVar6 * 7 + 2] = 0;
    (local_78 + lVar6 * 7 + 2)[1] = 0;
    local_78[lVar6 * 7 + 4] = 0;
    (local_78 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_78 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0ac30;
    local_58 = 0x101;
    local_60 = lVar5;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x3a0));
    LOCK();
    piVar1 = (int *)(lVar5 + 0x3ac);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (iVar2 == 0) {
      LOCK();
      *(undefined1 *)(local_60 + 0x3a8) = (undefined1)local_58;
      UNLOCK();
    }
    local_88 = &local_78;
    FUN_1446f2f9a(lVar5,L"FRigUnit_SphericalPoseReader::Execute",FUN_149271c14,lVar6);
    FUN_1409be446(&local_60);
    FUN_140e03040(local_78,uStack_70 & 0xffffffff);
    if (local_78 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0ac30;
}



// FUNCTION 14670d758 FUN_14670d758 body=47 status=ok
// SIG undefined FUN_14670d758(void)

longlong FUN_14670d758(void)

{
  if (DAT_14cc0ac28 == 0) {
    FUN_14086a14e(&DAT_14cc0ac28,&PTR_FUN_14bbd06d8);
  }
  return DAT_14cc0ac28;
}



// FUNCTION 14670d788 FUN_14670d788 body=48 status=ok
// SIG undefined FUN_14670d788(void)

void FUN_14670d788(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000390;
  *puVar1 = &PTR_FUN_14bc02fb0;
  return;
}



// FUNCTION 14670d7b8 FUN_14670d7b8 body=55 status=ok
// SIG undefined FUN_14670d7b8(void)

void FUN_14670d7b8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0ac48 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc0ac48 = FUN_140002ddd(FUN_14670d7ef,uVar1,L"RigUnit_SpringIK_DebugSettings");
  }
  return;
}



// FUNCTION 14670d7ef FUN_14670d7ef body=47 status=ok
// SIG undefined FUN_14670d7ef(void)

longlong FUN_14670d7ef(void)

{
  if (DAT_14cc0ac40 == 0) {
    FUN_14086a14e(&DAT_14cc0ac40,&PTR_FUN_14bbd0930);
  }
  return DAT_14cc0ac40;
}



// FUNCTION 14670d81e FUN_14670d81e body=48 status=ok
// SIG undefined FUN_14670d81e(void)

void FUN_14670d81e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000080;
  *puVar1 = &PTR_FUN_14bc031a0;
  return;
}



// FUNCTION 14670d84e FUN_14670d84e body=55 status=ok
// SIG undefined FUN_14670d84e(void)

void FUN_14670d84e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0ac60 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc0ac60 = FUN_140002ddd(FUN_14670d885,uVar1,L"RigUnit_SpringIK_WorkData");
  }
  return;
}



// FUNCTION 14670d885 FUN_14670d885 body=47 status=ok
// SIG undefined FUN_14670d885(void)

longlong FUN_14670d885(void)

{
  if (DAT_14cc0ac58 == 0) {
    FUN_14086a14e(&DAT_14cc0ac58,&PTR_FUN_14bbd0b80);
  }
  return DAT_14cc0ac58;
}



// FUNCTION 14670d8b4 FUN_14670d8b4 body=48 status=ok
// SIG undefined FUN_14670d8b4(void)

void FUN_14670d8b4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000b8;
  *puVar1 = &PTR_FUN_14bc03300;
  return;
}



// FUNCTION 14670d8e4 FUN_14670d8e4 body=1896 status=ok
// SIG undefined FUN_14670d8e4(void)

longlong FUN_14670d8e4(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  undefined8 **local_78;
  undefined8 *local_68;
  undefined8 uStack_60;
  longlong local_50;
  undefined2 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cc0ac78 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0ac78 = FUN_140002ddd(FUN_14670e04d,uVar4,L"RigUnit_SpringIK");
    local_68 = (undefined8 *)0x0;
    uStack_60._0_4_ = 1;
    uStack_60._4_4_ = 0;
    FUN_140c0351c(&local_68,0);
    iVar2 = (uint)uStack_60;
    *local_68 = L"StartBone";
    local_68[1] = L"FName";
    local_68[2] = 0;
    local_68[3] = 0;
    local_68[4] = 0;
    local_68[5] = 0;
    *(undefined1 *)(local_68 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,iVar2);
    }
    uVar3 = (uint)uStack_60;
    local_68[lVar6 * 7] = L"EndBone";
    local_68[lVar6 * 7 + 1] = L"FName";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar3);
    }
    uVar3 = (uint)uStack_60;
    local_68[lVar6 * 7] = L"HierarchyStrength";
    local_68[lVar6 * 7 + 1] = L"float";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar3);
    }
    uVar3 = (uint)uStack_60;
    local_68[lVar6 * 7] = L"EffectorStrength";
    local_68[lVar6 * 7 + 1] = L"float";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar3);
    }
    uVar3 = (uint)uStack_60;
    local_68[lVar6 * 7] = L"EffectorRatio";
    local_68[lVar6 * 7 + 1] = L"float";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar3);
    }
    uVar3 = (uint)uStack_60;
    local_68[lVar6 * 7] = L"RootStrength";
    local_68[lVar6 * 7 + 1] = L"float";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar3);
    }
    uVar3 = (uint)uStack_60;
    local_68[lVar6 * 7] = L"RootRatio";
    local_68[lVar6 * 7 + 1] = L"float";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar3);
    }
    uVar3 = (uint)uStack_60;
    local_68[lVar6 * 7] = L"Damping";
    local_68[lVar6 * 7 + 1] = L"float";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar3);
    }
    uVar3 = (uint)uStack_60;
    local_68[lVar6 * 7] = L"PoleVector";
    local_68[lVar6 * 7 + 1] = L"FVector";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar3);
    }
    uVar3 = (uint)uStack_60;
    local_68[lVar6 * 7] = L"bFlipPolePlane";
    local_68[lVar6 * 7 + 1] = L"bool";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar3);
    }
    uVar3 = (uint)uStack_60;
    local_68[lVar6 * 7] = L"PoleVectorKind";
    local_68[lVar6 * 7 + 1] = L"EControlRigVectorKind";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar3);
    }
    uVar3 = (uint)uStack_60;
    local_68[lVar6 * 7] = L"PoleVectorSpace";
    local_68[lVar6 * 7 + 1] = L"FName";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar3);
    }
    uVar3 = (uint)uStack_60;
    local_68[lVar6 * 7] = L"PrimaryAxis";
    local_68[lVar6 * 7 + 1] = L"FVector";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar3);
    }
    uVar3 = (uint)uStack_60;
    local_68[lVar6 * 7] = L"SecondaryAxis";
    local_68[lVar6 * 7 + 1] = L"FVector";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar3);
    }
    uVar3 = (uint)uStack_60;
    local_68[lVar6 * 7] = L"bLiveSimulation";
    local_68[lVar6 * 7 + 1] = L"bool";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar3);
    }
    uVar3 = (uint)uStack_60;
    local_68[lVar6 * 7] = L"Iterations";
    local_68[lVar6 * 7 + 1] = L"int32";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar3);
    }
    uVar3 = (uint)uStack_60;
    local_68[lVar6 * 7] = L"bLimitLocalPosition";
    local_68[lVar6 * 7 + 1] = L"bool";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar3);
    }
    uVar3 = (uint)uStack_60;
    local_68[lVar6 * 7] = L"bPropagateToChildren";
    local_68[lVar6 * 7 + 1] = L"bool";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar3);
    }
    uVar3 = (uint)uStack_60;
    local_68[lVar6 * 7] = L"DebugSettings";
    local_68[lVar6 * 7 + 1] = L"FRigUnit_SpringIK_DebugSettings";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar3);
    }
    local_68[lVar6 * 7] = L"WorkData";
    local_68[lVar6 * 7 + 1] = L"FRigUnit_SpringIK_WorkData";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0ac78;
    local_48 = 0x101;
    local_50 = lVar5;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x3a0));
    LOCK();
    piVar1 = (int *)(lVar5 + 0x3ac);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (iVar2 == 0) {
      LOCK();
      *(undefined1 *)(local_50 + 0x3a8) = (undefined1)local_48;
      UNLOCK();
    }
    local_78 = &local_68;
    FUN_1446f2f9a(lVar5,L"FRigUnit_SpringIK::Execute",FUN_149274a42,lVar6);
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
  return DAT_14cc0ac78;
}



// FUNCTION 14670e04d FUN_14670e04d body=47 status=ok
// SIG undefined FUN_14670e04d(void)

longlong FUN_14670e04d(void)

{
  if (DAT_14cc0ac70 == 0) {
    FUN_14086a14e(&DAT_14cc0ac70,&PTR_FUN_14bbd13a0);
  }
  return DAT_14cc0ac70;
}



// FUNCTION 14670e07c FUN_14670e07c body=48 status=ok
// SIG undefined FUN_14670e07c(void)

void FUN_14670e07c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000003c0;
  *puVar1 = &PTR_FUN_14bc03460;
  return;
}



// FUNCTION 14670e0ac FUN_14670e0ac body=55 status=ok
// SIG undefined FUN_14670e0ac(void)

void FUN_14670e0ac(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0ac90 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc0ac90 = FUN_140002ddd(FUN_14670e0e3,uVar1,L"ConstraintTarget");
  }
  return;
}



// FUNCTION 14670e0e3 FUN_14670e0e3 body=49 status=ok
// SIG undefined FUN_14670e0e3(void)

longlong FUN_14670e0e3(void)

{
  if (DAT_14cc0ac88 == 0) {
    FUN_14086a14e(&DAT_14cc0ac88,&PTR_FUN_14bbd15b8);
  }
  return DAT_14cc0ac88;
}



// FUNCTION 14670e114 FUN_14670e114 body=48 status=ok
// SIG undefined FUN_14670e114(void)

void FUN_14670e114(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000070;
  *puVar1 = &PTR_FUN_14bc03650;
  return;
}



// FUNCTION 14670e144 FUN_14670e144 body=55 status=ok
// SIG undefined FUN_14670e144(void)

void FUN_14670e144(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0aca8 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc0aca8 = FUN_140002ddd(FUN_14670e17b,uVar1,L"RigUnit_TransformConstraint_WorkData");
  }
  return;
}



// FUNCTION 14670e17b FUN_14670e17b body=49 status=ok
// SIG undefined FUN_14670e17b(void)

longlong FUN_14670e17b(void)

{
  if (DAT_14cc0aca0 == 0) {
    FUN_14086a14e(&DAT_14cc0aca0,&PTR_FUN_14bbd17f0);
  }
  return DAT_14cc0aca0;
}



// FUNCTION 14670e1ac FUN_14670e1ac body=48 status=ok
// SIG undefined FUN_14670e1ac(void)

void FUN_14670e1ac(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000060;
  *puVar1 = &PTR_FUN_14bc037b0;
  return;
}



// FUNCTION 14670e1dc FUN_14670e1dc body=829 status=ok
// SIG undefined FUN_14670e1dc(void)

longlong FUN_14670e1dc(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  undefined8 uStack_50;
  longlong local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc0acc0 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0acc0 = FUN_140002ddd(FUN_14670e51a,uVar4,L"RigUnit_TransformConstraint");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"Bone";
    local_58[1] = L"FName";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,iVar2);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"BaseTransformSpace";
    local_58[lVar6 * 7 + 1] = L"ETransformSpaceMode";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"BaseTransform";
    local_58[lVar6 * 7 + 1] = L"FTransform";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"BaseBone";
    local_58[lVar6 * 7 + 1] = L"FName";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"Targets";
    local_58[lVar6 * 7 + 1] = L"TArray<FConstraintTarget>";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"bUseInitialTransforms";
    local_58[lVar6 * 7 + 1] = L"bool";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    local_58[lVar6 * 7] = L"WorkData";
    local_58[lVar6 * 7 + 1] = L"FRigUnit_TransformConstraint_WorkData";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0acc0;
    local_38 = 0x101;
    local_40 = lVar5;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x3a0));
    LOCK();
    piVar1 = (int *)(lVar5 + 0x3ac);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (iVar2 == 0) {
      LOCK();
      *(undefined1 *)(local_40 + 0x3a8) = (undefined1)local_38;
      UNLOCK();
    }
    local_68 = &local_58;
    FUN_1446f2f9a(lVar5,L"FRigUnit_TransformConstraint::Execute",FUN_1492776d6,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0acc0;
}



// FUNCTION 14670e51a FUN_14670e51a body=47 status=ok
// SIG undefined FUN_14670e51a(void)

longlong FUN_14670e51a(void)

{
  if (DAT_14cc0acb8 == 0) {
    FUN_14086a14e(&DAT_14cc0acb8,&PTR_FUN_14bbd1c58);
  }
  return DAT_14cc0acb8;
}



// FUNCTION 14670e54a FUN_14670e54a body=48 status=ok
// SIG undefined FUN_14670e54a(void)

void FUN_14670e54a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000002e0;
  *puVar1 = &PTR_FUN_14bc03910;
  return;
}



// FUNCTION 14670e57a FUN_14670e57a body=829 status=ok
// SIG undefined FUN_14670e57a(void)

longlong FUN_14670e57a(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  undefined8 uStack_50;
  longlong local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc0acd8 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0acd8 = FUN_140002ddd(FUN_14670e8b8,uVar4,L"RigUnit_TransformConstraintPerItem");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"Item";
    local_58[1] = L"FRigElementKey";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,iVar2);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"BaseTransformSpace";
    local_58[lVar6 * 7 + 1] = L"ETransformSpaceMode";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"BaseTransform";
    local_58[lVar6 * 7 + 1] = L"FTransform";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"BaseItem";
    local_58[lVar6 * 7 + 1] = L"FRigElementKey";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"Targets";
    local_58[lVar6 * 7 + 1] = L"TArray<FConstraintTarget>";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"bUseInitialTransforms";
    local_58[lVar6 * 7 + 1] = L"bool";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    local_58[lVar6 * 7] = L"WorkData";
    local_58[lVar6 * 7 + 1] = L"FRigUnit_TransformConstraint_WorkData";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0acd8;
    local_38 = 0x101;
    local_40 = lVar5;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x3a0));
    LOCK();
    piVar1 = (int *)(lVar5 + 0x3ac);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (iVar2 == 0) {
      LOCK();
      *(undefined1 *)(local_40 + 0x3a8) = (undefined1)local_38;
      UNLOCK();
    }
    local_68 = &local_58;
    FUN_1446f2f9a(lVar5,L"FRigUnit_TransformConstraintPerItem::Execute",FUN_149277892,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0acd8;
}



// FUNCTION 14670e8b8 FUN_14670e8b8 body=47 status=ok
// SIG undefined FUN_14670e8b8(void)

longlong FUN_14670e8b8(void)

{
  if (DAT_14cc0acd0 == 0) {
    FUN_14086a14e(&DAT_14cc0acd0,&PTR_FUN_14bbd2000);
  }
  return DAT_14cc0acd0;
}



// FUNCTION 14670e8e8 FUN_14670e8e8 body=48 status=ok
// SIG undefined FUN_14670e8e8(void)

void FUN_14670e8e8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000002f0;
  *puVar1 = &PTR_FUN_14bc03b00;
  return;
}



// FUNCTION 14670e918 FUN_14670e918 body=55 status=ok
// SIG undefined FUN_14670e918(void)

void FUN_14670e918(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0acf0 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc0acf0 = FUN_140002ddd(FUN_141907173,uVar1,L"ConstraintParent");
  }
  return;
}



// FUNCTION 14670e950 FUN_14670e950 body=48 status=ok
// SIG undefined FUN_14670e950(void)

void FUN_14670e950(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000010;
  *puVar1 = &PTR_FUN_14bc03c60;
  return;
}



// FUNCTION 14670e980 FUN_14670e980 body=49 status=ok
// SIG undefined FUN_14670e980(void)

longlong FUN_14670e980(void)

{
  if (DAT_14cc0ad00 == 0) {
    FUN_1409ce572(&DAT_14cc0ad00,&PTR_FUN_14bbd2190);
  }
  return DAT_14cc0ad00;
}



// FUNCTION 14670e9b2 FUN_14670e9b2 body=55 status=ok
// SIG undefined FUN_14670e9b2(void)

void FUN_14670e9b2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0ad20 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc0ad20 = FUN_140002ddd(FUN_14670e9e9,uVar1,L"RigUnit_ParentConstraint_AdvancedSettings");
  }
  return;
}



// FUNCTION 14670e9e9 FUN_14670e9e9 body=47 status=ok
// SIG undefined FUN_14670e9e9(void)

longlong FUN_14670e9e9(void)

{
  if (DAT_14cc0ad18 == 0) {
    FUN_14086a14e(&DAT_14cc0ad18,&PTR_FUN_14bbd2370);
  }
  return DAT_14cc0ad18;
}



// FUNCTION 14670ea18 FUN_14670ea18 body=48 status=ok
// SIG undefined FUN_14670ea18(void)

void FUN_14670ea18(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000002;
  *puVar1 = &PTR_FUN_14bc03e50;
  return;
}



// FUNCTION 14670ea48 FUN_14670ea48 body=922 status=ok
// SIG undefined FUN_14670ea48(void)

longlong FUN_14670ea48(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  undefined8 uStack_50;
  longlong local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc0ad38 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0ad38 = FUN_140002ddd(FUN_14670ede3,uVar4,L"RigUnit_ParentConstraint");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"Child";
    local_58[1] = L"FRigElementKey";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,iVar2);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"bMaintainOffset";
    local_58[lVar6 * 7 + 1] = L"bool";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"Filter";
    local_58[lVar6 * 7 + 1] = L"FTransformFilter";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"Parents";
    local_58[lVar6 * 7 + 1] = L"TArray<FConstraintParent>";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"AdvancedSettings";
    local_58[lVar6 * 7 + 1] = L"FRigUnit_ParentConstraint_AdvancedSettings";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"Weight";
    local_58[lVar6 * 7 + 1] = L"float";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"ChildCache";
    local_58[lVar6 * 7 + 1] = L"FCachedRigElement";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    local_58[lVar6 * 7] = L"ParentCaches";
    local_58[lVar6 * 7 + 1] = L"TArray<FCachedRigElement>";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0ad38;
    local_38 = 0x101;
    local_40 = lVar5;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x3a0));
    LOCK();
    piVar1 = (int *)(lVar5 + 0x3ac);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (iVar2 == 0) {
      LOCK();
      *(undefined1 *)(local_40 + 0x3a8) = (undefined1)local_38;
      UNLOCK();
    }
    local_68 = &local_58;
    FUN_1446f2f9a(lVar5,L"FRigUnit_ParentConstraint::Execute",FUN_14927818c,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0ad38;
}



// FUNCTION 14670ede3 FUN_14670ede3 body=47 status=ok
// SIG undefined FUN_14670ede3(void)

longlong FUN_14670ede3(void)

{
  if (DAT_14cc0ad30 == 0) {
    FUN_14086a14e(&DAT_14cc0ad30,&PTR_FUN_14bbd2750);
  }
  return DAT_14cc0ad30;
}



// FUNCTION 14670ee12 FUN_14670ee12 body=48 status=ok
// SIG undefined FUN_14670ee12(void)

void FUN_14670ee12(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000250;
  *puVar1 = &PTR_FUN_14bc03fb0;
  return;
}



// FUNCTION 14670ee42 FUN_14670ee42 body=55 status=ok
// SIG undefined FUN_14670ee42(void)

void FUN_14670ee42(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0ad50 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc0ad50 =
         FUN_140002ddd(FUN_14670ee79,uVar1,L"RigUnit_ParentConstraintMath_AdvancedSettings");
  }
  return;
}



// FUNCTION 14670ee79 FUN_14670ee79 body=47 status=ok
// SIG undefined FUN_14670ee79(void)

longlong FUN_14670ee79(void)

{
  if (DAT_14cc0ad48 == 0) {
    FUN_14086a14e(&DAT_14cc0ad48,&PTR_FUN_14bbd28b0);
  }
  return DAT_14cc0ad48;
}



// FUNCTION 14670eea8 FUN_14670eea8 body=48 status=ok
// SIG undefined FUN_14670eea8(void)

void FUN_14670eea8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14bc041a0;
  return;
}



// FUNCTION 14670eed8 FUN_14670eed8 body=654 status=ok
// SIG undefined FUN_14670eed8(void)

longlong FUN_14670eed8(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  undefined8 uStack_50;
  longlong local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc0ad68 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0ad68 = FUN_140002ddd(FUN_14670f167,uVar4,L"RigUnit_ParentConstraintMath");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"Input";
    local_58[1] = L"FTransform";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,iVar2);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"Parents";
    local_58[lVar6 * 7 + 1] = L"TArray<FConstraintParent>";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"AdvancedSettings";
    local_58[lVar6 * 7 + 1] = L"FRigUnit_ParentConstraintMath_AdvancedSettings";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"Output";
    local_58[lVar6 * 7 + 1] = L"FTransform";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    local_58[lVar6 * 7] = L"ParentCaches";
    local_58[lVar6 * 7 + 1] = L"TArray<FCachedRigElement>";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0ad68;
    local_38 = 0x101;
    local_40 = lVar5;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x3a0));
    LOCK();
    piVar1 = (int *)(lVar5 + 0x3ac);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (iVar2 == 0) {
      LOCK();
      *(undefined1 *)(local_40 + 0x3a8) = (undefined1)local_38;
      UNLOCK();
    }
    local_68 = &local_58;
    FUN_1446f2f9a(lVar5,L"FRigUnit_ParentConstraintMath::Execute",FUN_149279e64,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0ad68;
}



// FUNCTION 14670f167 FUN_14670f167 body=47 status=ok
// SIG undefined FUN_14670f167(void)

longlong FUN_14670f167(void)

{
  if (DAT_14cc0ad60 == 0) {
    FUN_14086a14e(&DAT_14cc0ad60,&PTR_FUN_14bbd2bd8);
  }
  return DAT_14cc0ad60;
}



// FUNCTION 14670f196 FUN_14670f196 body=48 status=ok
// SIG undefined FUN_14670f196(void)

void FUN_14670f196(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000100;
  *puVar1 = &PTR_FUN_14bc04300;
  return;
}



// FUNCTION 14670f1c6 FUN_14670f1c6 body=661 status=ok
// SIG undefined FUN_14670f1c6(void)

longlong FUN_14670f1c6(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  undefined8 uStack_50;
  longlong local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc0ad80 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0ad80 = FUN_140002ddd(FUN_14670f45c,uVar4,L"RigUnit_PositionConstraint");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"Child";
    local_58[1] = L"FRigElementKey";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,iVar2);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"bMaintainOffset";
    local_58[lVar6 * 7 + 1] = L"bool";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"Filter";
    local_58[lVar6 * 7 + 1] = L"FFilterOptionPerAxis";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"Parents";
    local_58[lVar6 * 7 + 1] = L"TArray<FConstraintParent>";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    local_58[lVar6 * 7] = L"Weight";
    local_58[lVar6 * 7 + 1] = L"float";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0ad80;
    local_38 = 0x101;
    local_40 = lVar5;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x3a0));
    LOCK();
    piVar1 = (int *)(lVar5 + 0x3ac);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (iVar2 == 0) {
      LOCK();
      *(undefined1 *)(local_40 + 0x3a8) = (undefined1)local_38;
      UNLOCK();
    }
    local_68 = &local_58;
    FUN_1446f2f9a(lVar5,L"FRigUnit_PositionConstraint::Execute",FUN_14927ad34,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0ad80;
}



// FUNCTION 14670f45c FUN_14670f45c body=47 status=ok
// SIG undefined FUN_14670f45c(void)

longlong FUN_14670f45c(void)

{
  if (DAT_14cc0ad78 == 0) {
    FUN_14086a14e(&DAT_14cc0ad78,&PTR_FUN_14bbd2e50);
  }
  return DAT_14cc0ad78;
}



// FUNCTION 14670f48c FUN_14670f48c body=48 status=ok
// SIG undefined FUN_14670f48c(void)

void FUN_14670f48c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000220;
  *puVar1 = &PTR_FUN_14bc044f0;
  return;
}



// FUNCTION 14670f4bc FUN_14670f4bc body=836 status=ok
// SIG undefined FUN_14670f4bc(void)

longlong FUN_14670f4bc(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  undefined8 uStack_50;
  longlong local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc0ad98 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0ad98 = FUN_140002ddd(FUN_14670f801,uVar4,L"RigUnit_PositionConstraintLocalSpaceOffset")
    ;
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"Child";
    local_58[1] = L"FRigElementKey";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,iVar2);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"bMaintainOffset";
    local_58[lVar6 * 7 + 1] = L"bool";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"Filter";
    local_58[lVar6 * 7 + 1] = L"FFilterOptionPerAxis";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"Parents";
    local_58[lVar6 * 7 + 1] = L"TArray<FConstraintParent>";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"Weight";
    local_58[lVar6 * 7 + 1] = L"float";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"ChildCache";
    local_58[lVar6 * 7 + 1] = L"FCachedRigElement";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    local_58[lVar6 * 7] = L"ParentCaches";
    local_58[lVar6 * 7 + 1] = L"TArray<FCachedRigElement>";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0ad98;
    local_38 = 0x101;
    local_40 = lVar5;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x3a0));
    LOCK();
    piVar1 = (int *)(lVar5 + 0x3ac);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (iVar2 == 0) {
      LOCK();
      *(undefined1 *)(local_40 + 0x3a8) = (undefined1)local_38;
      UNLOCK();
    }
    local_68 = &local_58;
    FUN_1446f2f9a(lVar5,L"FRigUnit_PositionConstraintLocalSpaceOffset::Execute",FUN_14927be70,lVar6)
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
  return DAT_14cc0ad98;
}



// FUNCTION 14670f801 FUN_14670f801 body=47 status=ok
// SIG undefined FUN_14670f801(void)

longlong FUN_14670f801(void)

{
  if (DAT_14cc0ad90 == 0) {
    FUN_14086a14e(&DAT_14cc0ad90,&PTR_FUN_14bbd31e8);
  }
  return DAT_14cc0ad90;
}



// FUNCTION 14670f830 FUN_14670f830 body=48 status=ok
// SIG undefined FUN_14670f830(void)

void FUN_14670f830(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000250;
  *puVar1 = &PTR_FUN_14bc046e0;
  return;
}



// FUNCTION 14670f860 FUN_14670f860 body=55 status=ok
// SIG undefined FUN_14670f860(void)

void FUN_14670f860(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0adb0 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc0adb0 =
         FUN_140002ddd(FUN_14670f897,uVar1,L"RigUnit_RotationConstraint_AdvancedSettings");
  }
  return;
}



// FUNCTION 14670f897 FUN_14670f897 body=49 status=ok
// SIG undefined FUN_14670f897(void)

longlong FUN_14670f897(void)

{
  if (DAT_14cc0ada8 == 0) {
    FUN_14086a14e(&DAT_14cc0ada8,&PTR_FUN_14bbd33d0);
  }
  return DAT_14cc0ada8;
}



// FUNCTION 14670f8c8 FUN_14670f8c8 body=48 status=ok
// SIG undefined FUN_14670f8c8(void)

void FUN_14670f8c8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000002;
  *puVar1 = &PTR_FUN_14bc04840;
  return;
}



// FUNCTION 14670f8f8 FUN_14670f8f8 body=747 status=ok
// SIG undefined FUN_14670f8f8(void)

longlong FUN_14670f8f8(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  undefined8 uStack_50;
  longlong local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc0adc8 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0adc8 = FUN_140002ddd(FUN_14670fbe4,uVar4,L"RigUnit_RotationConstraint");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"Child";
    local_58[1] = L"FRigElementKey";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,iVar2);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"bMaintainOffset";
    local_58[lVar6 * 7 + 1] = L"bool";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"Filter";
    local_58[lVar6 * 7 + 1] = L"FFilterOptionPerAxis";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"Parents";
    local_58[lVar6 * 7 + 1] = L"TArray<FConstraintParent>";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"AdvancedSettings";
    local_58[lVar6 * 7 + 1] = L"FRigUnit_RotationConstraint_AdvancedSettings";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    local_58[lVar6 * 7] = L"Weight";
    local_58[lVar6 * 7 + 1] = L"float";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0adc8;
    local_38 = 0x101;
    local_40 = lVar5;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x3a0));
    LOCK();
    piVar1 = (int *)(lVar5 + 0x3ac);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (iVar2 == 0) {
      LOCK();
      *(undefined1 *)(local_40 + 0x3a8) = (undefined1)local_38;
      UNLOCK();
    }
    local_68 = &local_58;
    FUN_1446f2f9a(lVar5,L"FRigUnit_RotationConstraint::Execute",FUN_14927d86a,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0adc8;
}



// FUNCTION 14670fbe4 FUN_14670fbe4 body=47 status=ok
// SIG undefined FUN_14670fbe4(void)

longlong FUN_14670fbe4(void)

{
  if (DAT_14cc0adc0 == 0) {
    FUN_14086a14e(&DAT_14cc0adc0,&PTR_FUN_14bbd36f8);
  }
  return DAT_14cc0adc0;
}



// FUNCTION 14670fc14 FUN_14670fc14 body=48 status=ok
// SIG undefined FUN_14670fc14(void)

void FUN_14670fc14(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000220;
  *puVar1 = &PTR_FUN_14bc049b0;
  return;
}



// FUNCTION 14670fc44 FUN_14670fc44 body=922 status=ok
// SIG undefined FUN_14670fc44(void)

longlong FUN_14670fc44(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  undefined8 uStack_50;
  longlong local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc0ade0 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0ade0 = FUN_140002ddd(FUN_14670ffdf,uVar4,L"RigUnit_RotationConstraintLocalSpaceOffset")
    ;
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"Child";
    local_58[1] = L"FRigElementKey";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,iVar2);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"bMaintainOffset";
    local_58[lVar6 * 7 + 1] = L"bool";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"Filter";
    local_58[lVar6 * 7 + 1] = L"FFilterOptionPerAxis";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"Parents";
    local_58[lVar6 * 7 + 1] = L"TArray<FConstraintParent>";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"AdvancedSettings";
    local_58[lVar6 * 7 + 1] = L"FRigUnit_RotationConstraint_AdvancedSettings";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"Weight";
    local_58[lVar6 * 7 + 1] = L"float";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"ChildCache";
    local_58[lVar6 * 7 + 1] = L"FCachedRigElement";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    local_58[lVar6 * 7] = L"ParentCaches";
    local_58[lVar6 * 7 + 1] = L"TArray<FCachedRigElement>";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0ade0;
    local_38 = 0x101;
    local_40 = lVar5;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x3a0));
    LOCK();
    piVar1 = (int *)(lVar5 + 0x3ac);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (iVar2 == 0) {
      LOCK();
      *(undefined1 *)(local_40 + 0x3a8) = (undefined1)local_38;
      UNLOCK();
    }
    local_68 = &local_58;
    FUN_1446f2f9a(lVar5,L"FRigUnit_RotationConstraintLocalSpaceOffset::Execute",FUN_14927eb7a,lVar6)
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
  return DAT_14cc0ade0;
}



// FUNCTION 14670ffdf FUN_14670ffdf body=47 status=ok
// SIG undefined FUN_14670ffdf(void)

longlong FUN_14670ffdf(void)

{
  if (DAT_14cc0add8 == 0) {
    FUN_14086a14e(&DAT_14cc0add8,&PTR_FUN_14bbd3ae0);
  }
  return DAT_14cc0add8;
}



// FUNCTION 14671000e FUN_14671000e body=48 status=ok
// SIG undefined FUN_14671000e(void)

void FUN_14671000e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000250;
  *puVar1 = &PTR_FUN_14bc04ba0;
  return;
}



// FUNCTION 14671003e FUN_14671003e body=661 status=ok
// SIG undefined FUN_14671003e(void)

longlong FUN_14671003e(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  undefined8 uStack_50;
  longlong local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc0adf8 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0adf8 = FUN_140002ddd(FUN_1467102d4,uVar4,L"RigUnit_ScaleConstraint");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"Child";
    local_58[1] = L"FRigElementKey";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,iVar2);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"bMaintainOffset";
    local_58[lVar6 * 7 + 1] = L"bool";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"Filter";
    local_58[lVar6 * 7 + 1] = L"FFilterOptionPerAxis";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"Parents";
    local_58[lVar6 * 7 + 1] = L"TArray<FConstraintParent>";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    local_58[lVar6 * 7] = L"Weight";
    local_58[lVar6 * 7 + 1] = L"float";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0adf8;
    local_38 = 0x101;
    local_40 = lVar5;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x3a0));
    LOCK();
    piVar1 = (int *)(lVar5 + 0x3ac);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (iVar2 == 0) {
      LOCK();
      *(undefined1 *)(local_40 + 0x3a8) = (undefined1)local_38;
      UNLOCK();
    }
    local_68 = &local_58;
    FUN_1446f2f9a(lVar5,L"FRigUnit_ScaleConstraint::Execute",FUN_149280ae2,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0adf8;
}



// FUNCTION 1467102d4 FUN_1467102d4 body=47 status=ok
// SIG undefined FUN_1467102d4(void)

longlong FUN_1467102d4(void)

{
  if (DAT_14cc0adf0 == 0) {
    FUN_14086a14e(&DAT_14cc0adf0,&PTR_FUN_14bbd3d48);
  }
  return DAT_14cc0adf0;
}



// FUNCTION 146710304 FUN_146710304 body=48 status=ok
// SIG undefined FUN_146710304(void)

void FUN_146710304(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000220;
  *puVar1 = &PTR_FUN_14bc04d00;
  return;
}



// FUNCTION 146710334 FUN_146710334 body=836 status=ok
// SIG undefined FUN_146710334(void)

longlong FUN_146710334(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  undefined8 uStack_50;
  longlong local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc0ae10 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0ae10 = FUN_140002ddd(FUN_146710679,uVar4,L"RigUnit_ScaleConstraintLocalSpaceOffset");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"Child";
    local_58[1] = L"FRigElementKey";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,iVar2);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"bMaintainOffset";
    local_58[lVar6 * 7 + 1] = L"bool";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"Filter";
    local_58[lVar6 * 7 + 1] = L"FFilterOptionPerAxis";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"Parents";
    local_58[lVar6 * 7 + 1] = L"TArray<FConstraintParent>";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"Weight";
    local_58[lVar6 * 7 + 1] = L"float";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"ChildCache";
    local_58[lVar6 * 7 + 1] = L"FCachedRigElement";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    local_58[lVar6 * 7] = L"ParentCaches";
    local_58[lVar6 * 7 + 1] = L"TArray<FCachedRigElement>";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0ae10;
    local_38 = 0x101;
    local_40 = lVar5;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x3a0));
    LOCK();
    piVar1 = (int *)(lVar5 + 0x3ac);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (iVar2 == 0) {
      LOCK();
      *(undefined1 *)(local_40 + 0x3a8) = (undefined1)local_38;
      UNLOCK();
    }
    local_68 = &local_58;
    FUN_1446f2f9a(lVar5,L"FRigUnit_ScaleConstraintLocalSpaceOffset::Execute",FUN_149281a8e,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0ae10;
}



// FUNCTION 146710679 FUN_146710679 body=47 status=ok
// SIG undefined FUN_146710679(void)

longlong FUN_146710679(void)

{
  if (DAT_14cc0ae08 == 0) {
    FUN_14086a14e(&DAT_14cc0ae08,&PTR_FUN_14bbd40d0);
  }
  return DAT_14cc0ae08;
}



// FUNCTION 1467106a8 FUN_1467106a8 body=48 status=ok
// SIG undefined FUN_1467106a8(void)

void FUN_1467106a8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000250;
  *puVar1 = &PTR_FUN_14bc04ef0;
  return;
}



// FUNCTION 1467106d8 FUN_1467106d8 body=81 status=ok
// SIG undefined FUN_1467106d8(void)

void FUN_1467106d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc050f0;
  if (param_1[0x47] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  return;
}



// FUNCTION 14671072a FUN_14671072a body=187 status=ok
// SIG undefined FUN_14671072a(void)

undefined8 * FUN_14671072a(undefined8 *param_1)

{
  undefined1 *puVar1;
  
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *param_1 = &PTR_FUN_14bc05180;
  *(undefined1 *)(param_1 + 0x3e) = 1;
  *(undefined8 *)((longlong)param_1 + 500) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0x1010101;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined2 *)(param_1 + 0x42) = 0x100;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x43) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x224) = 0xffff;
  *(undefined4 *)(param_1 + 0x45) = 0xffffffff;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x41) = 1;
  FUN_1459610f2(param_1 + 0x40);
  puVar1 = (undefined1 *)param_1[0x40];
  *puVar1 = 1;
  *(undefined8 *)(puVar1 + 4) = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0x3f800000;
  return param_1;
}



// FUNCTION 1467107e6 FUN_1467107e6 body=81 status=ok
// SIG undefined FUN_1467107e6(void)

void FUN_1467107e6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc05180;
  if (param_1[0x47] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  return;
}



// FUNCTION 146710838 FUN_146710838 body=178 status=ok
// SIG undefined FUN_146710838(void)

undefined8 * FUN_146710838(undefined8 *param_1)

{
  undefined1 *puVar1;
  
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *param_1 = &PTR_FUN_14bc05210;
  *(undefined1 *)(param_1 + 0x3e) = 1;
  *(undefined8 *)((longlong)param_1 + 500) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0x1010101;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x43) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x224) = 0xffff;
  *(undefined4 *)(param_1 + 0x45) = 0xffffffff;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x41) = 1;
  FUN_1459610f2(param_1 + 0x40);
  puVar1 = (undefined1 *)param_1[0x40];
  *puVar1 = 1;
  *(undefined8 *)(puVar1 + 4) = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0x3f800000;
  return param_1;
}



// FUNCTION 1467108ea FUN_1467108ea body=81 status=ok
// SIG undefined FUN_1467108ea(void)

void FUN_1467108ea(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc05210;
  if (param_1[0x47] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  return;
}



// FUNCTION 14671093c FUN_14671093c body=40 status=ok
// SIG undefined FUN_14671093c(void)

undefined8 FUN_14671093c(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146710964 FUN_146710964 body=72 status=ok
// SIG undefined FUN_146710964(void)

undefined8 * FUN_146710964(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb95200;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_14598bac0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467109ac FUN_1467109ac body=29 status=ok
// SIG undefined FUN_1467109ac(void)

undefined8 FUN_1467109ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467109ca FUN_1467109ca body=29 status=ok
// SIG undefined FUN_1467109ca(void)

undefined8 FUN_1467109ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467109e8 FUN_1467109e8 body=29 status=ok
// SIG undefined FUN_1467109e8(void)

undefined8 FUN_1467109e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146710a06 FUN_146710a06 body=29 status=ok
// SIG undefined FUN_146710a06(void)

undefined8 FUN_146710a06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146710a24 FUN_146710a24 body=29 status=ok
// SIG undefined FUN_146710a24(void)

undefined8 FUN_146710a24(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146710a42 FUN_146710a42 body=29 status=ok
// SIG undefined FUN_146710a42(void)

undefined8 FUN_146710a42(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146710a60 FUN_146710a60 body=29 status=ok
// SIG undefined FUN_146710a60(void)

undefined8 FUN_146710a60(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146710a7e FUN_146710a7e body=29 status=ok
// SIG undefined FUN_146710a7e(void)

undefined8 FUN_146710a7e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146710a9c FUN_146710a9c body=77 status=ok
// SIG undefined FUN_146710a9c(void)

void FUN_146710a9c(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xa0);
  FUN_141094b14(param_2);
  *param_2 = &PTR_FUN_14bbd5090;
  *(undefined1 (*) [16])(param_2 + 0xe) = (undefined1  [16])0x0;
  *(undefined4 *)(param_2 + 0x10) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x84) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x11) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x8c) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x12) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x94) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x13) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x9c) = 0xffffffff;
  return;
}



// FUNCTION 146710aea FUN_146710aea body=29 status=ok
// SIG undefined FUN_146710aea(void)

undefined8 FUN_146710aea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146710b08 FUN_146710b08 body=29 status=ok
// SIG undefined FUN_146710b08(void)

undefined8 FUN_146710b08(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146710b26 FUN_146710b26 body=29 status=ok
// SIG undefined FUN_146710b26(void)

undefined8 FUN_146710b26(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146710b44 FUN_146710b44 body=29 status=ok
// SIG undefined FUN_146710b44(void)

undefined8 FUN_146710b44(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146710b62 FUN_146710b62 body=29 status=ok
// SIG undefined FUN_146710b62(void)

undefined8 FUN_146710b62(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146710b80 FUN_146710b80 body=29 status=ok
// SIG undefined FUN_146710b80(void)

undefined8 FUN_146710b80(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146710b9e FUN_146710b9e body=29 status=ok
// SIG undefined FUN_146710b9e(void)

undefined8 FUN_146710b9e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146710bbc FUN_146710bbc body=29 status=ok
// SIG undefined FUN_146710bbc(void)

undefined8 FUN_146710bbc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146710bda FUN_146710bda body=29 status=ok
// SIG undefined FUN_146710bda(void)

undefined8 FUN_146710bda(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146710bf8 FUN_146710bf8 body=29 status=ok
// SIG undefined FUN_146710bf8(void)

undefined8 FUN_146710bf8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146710c16 FUN_146710c16 body=29 status=ok
// SIG undefined FUN_146710c16(void)

undefined8 FUN_146710c16(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146710c34 FUN_146710c34 body=29 status=ok
// SIG undefined FUN_146710c34(void)

undefined8 FUN_146710c34(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146710c52 FUN_146710c52 body=29 status=ok
// SIG undefined FUN_146710c52(void)

undefined8 FUN_146710c52(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146710c70 FUN_146710c70 body=29 status=ok
// SIG undefined FUN_146710c70(void)

undefined8 FUN_146710c70(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146710c8e FUN_146710c8e body=29 status=ok
// SIG undefined FUN_146710c8e(void)

undefined8 FUN_146710c8e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146710cac FUN_146710cac body=29 status=ok
// SIG undefined FUN_146710cac(void)

undefined8 FUN_146710cac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146710cca FUN_146710cca body=29 status=ok
// SIG undefined FUN_146710cca(void)

undefined8 FUN_146710cca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146710ce8 FUN_146710ce8 body=29 status=ok
// SIG undefined FUN_146710ce8(void)

undefined8 FUN_146710ce8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146710d06 FUN_146710d06 body=29 status=ok
// SIG undefined FUN_146710d06(void)

undefined8 FUN_146710d06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146710d24 FUN_146710d24 body=29 status=ok
// SIG undefined FUN_146710d24(void)

undefined8 FUN_146710d24(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146710d42 FUN_146710d42 body=29 status=ok
// SIG undefined FUN_146710d42(void)

undefined8 FUN_146710d42(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146710d60 FUN_146710d60 body=29 status=ok
// SIG undefined FUN_146710d60(void)

undefined8 FUN_146710d60(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146710d7e FUN_146710d7e body=29 status=ok
// SIG undefined FUN_146710d7e(void)

undefined8 FUN_146710d7e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146710d9c FUN_146710d9c body=29 status=ok
// SIG undefined FUN_146710d9c(void)

undefined8 FUN_146710d9c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146710dba FUN_146710dba body=29 status=ok
// SIG undefined FUN_146710dba(void)

undefined8 FUN_146710dba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146710dd8 FUN_146710dd8 body=29 status=ok
// SIG undefined FUN_146710dd8(void)

undefined8 FUN_146710dd8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146710df6 FUN_146710df6 body=29 status=ok
// SIG undefined FUN_146710df6(void)

undefined8 FUN_146710df6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146710e14 FUN_146710e14 body=29 status=ok
// SIG undefined FUN_146710e14(void)

undefined8 FUN_146710e14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146710e32 FUN_146710e32 body=29 status=ok
// SIG undefined FUN_146710e32(void)

undefined8 FUN_146710e32(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146710e50 FUN_146710e50 body=29 status=ok
// SIG undefined FUN_146710e50(void)

undefined8 FUN_146710e50(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146710e6e FUN_146710e6e body=29 status=ok
// SIG undefined FUN_146710e6e(void)

undefined8 FUN_146710e6e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146710e8c FUN_146710e8c body=29 status=ok
// SIG undefined FUN_146710e8c(void)

undefined8 FUN_146710e8c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146710eaa FUN_146710eaa body=29 status=ok
// SIG undefined FUN_146710eaa(void)

undefined8 FUN_146710eaa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146710ec8 FUN_146710ec8 body=29 status=ok
// SIG undefined FUN_146710ec8(void)

undefined8 FUN_146710ec8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146710ee6 FUN_146710ee6 body=29 status=ok
// SIG undefined FUN_146710ee6(void)

undefined8 FUN_146710ee6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146710f04 FUN_146710f04 body=29 status=ok
// SIG undefined FUN_146710f04(void)

undefined8 FUN_146710f04(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146710f22 FUN_146710f22 body=29 status=ok
// SIG undefined FUN_146710f22(void)

undefined8 FUN_146710f22(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146710f40 FUN_146710f40 body=29 status=ok
// SIG undefined FUN_146710f40(void)

undefined8 FUN_146710f40(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146710f5e FUN_146710f5e body=29 status=ok
// SIG undefined FUN_146710f5e(void)

undefined8 FUN_146710f5e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146710f7c FUN_146710f7c body=29 status=ok
// SIG undefined FUN_146710f7c(void)

undefined8 FUN_146710f7c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146710f9a FUN_146710f9a body=29 status=ok
// SIG undefined FUN_146710f9a(void)

undefined8 FUN_146710f9a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146710fb8 FUN_146710fb8 body=29 status=ok
// SIG undefined FUN_146710fb8(void)

undefined8 FUN_146710fb8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146710fd6 FUN_146710fd6 body=29 status=ok
// SIG undefined FUN_146710fd6(void)

undefined8 FUN_146710fd6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146710ff4 FUN_146710ff4 body=29 status=ok
// SIG undefined FUN_146710ff4(void)

undefined8 FUN_146710ff4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146711012 FUN_146711012 body=29 status=ok
// SIG undefined FUN_146711012(void)

undefined8 FUN_146711012(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146711030 FUN_146711030 body=29 status=ok
// SIG undefined FUN_146711030(void)

undefined8 FUN_146711030(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14671104e FUN_14671104e body=29 status=ok
// SIG undefined FUN_14671104e(void)

undefined8 FUN_14671104e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14671106c FUN_14671106c body=29 status=ok
// SIG undefined FUN_14671106c(void)

undefined8 FUN_14671106c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14671108a FUN_14671108a body=29 status=ok
// SIG undefined FUN_14671108a(void)

undefined8 FUN_14671108a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467110a8 FUN_1467110a8 body=29 status=ok
// SIG undefined FUN_1467110a8(void)

undefined8 FUN_1467110a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467110c6 FUN_1467110c6 body=29 status=ok
// SIG undefined FUN_1467110c6(void)

undefined8 FUN_1467110c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467110e4 FUN_1467110e4 body=29 status=ok
// SIG undefined FUN_1467110e4(void)

undefined8 FUN_1467110e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146711102 FUN_146711102 body=29 status=ok
// SIG undefined FUN_146711102(void)

undefined8 FUN_146711102(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146711120 FUN_146711120 body=29 status=ok
// SIG undefined FUN_146711120(void)

undefined8 FUN_146711120(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14671113e FUN_14671113e body=29 status=ok
// SIG undefined FUN_14671113e(void)

undefined8 FUN_14671113e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14671115c FUN_14671115c body=29 status=ok
// SIG undefined FUN_14671115c(void)

undefined8 FUN_14671115c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14671117a FUN_14671117a body=29 status=ok
// SIG undefined FUN_14671117a(void)

undefined8 FUN_14671117a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146711198 FUN_146711198 body=29 status=ok
// SIG undefined FUN_146711198(void)

undefined8 FUN_146711198(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467111b6 FUN_1467111b6 body=29 status=ok
// SIG undefined FUN_1467111b6(void)

undefined8 FUN_1467111b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467111d4 FUN_1467111d4 body=29 status=ok
// SIG undefined FUN_1467111d4(void)

undefined8 FUN_1467111d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467111f2 FUN_1467111f2 body=29 status=ok
// SIG undefined FUN_1467111f2(void)

undefined8 FUN_1467111f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146711210 FUN_146711210 body=29 status=ok
// SIG undefined FUN_146711210(void)

undefined8 FUN_146711210(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14671122e FUN_14671122e body=29 status=ok
// SIG undefined FUN_14671122e(void)

undefined8 FUN_14671122e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14671124c FUN_14671124c body=29 status=ok
// SIG undefined FUN_14671124c(void)

undefined8 FUN_14671124c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14671126a FUN_14671126a body=29 status=ok
// SIG undefined FUN_14671126a(void)

undefined8 FUN_14671126a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146711288 FUN_146711288 body=29 status=ok
// SIG undefined FUN_146711288(void)

undefined8 FUN_146711288(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467112a6 FUN_1467112a6 body=29 status=ok
// SIG undefined FUN_1467112a6(void)

undefined8 FUN_1467112a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467112c4 FUN_1467112c4 body=29 status=ok
// SIG undefined FUN_1467112c4(void)

undefined8 FUN_1467112c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467112e2 FUN_1467112e2 body=29 status=ok
// SIG undefined FUN_1467112e2(void)

undefined8 FUN_1467112e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146711300 FUN_146711300 body=29 status=ok
// SIG undefined FUN_146711300(void)

undefined8 FUN_146711300(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14671131e FUN_14671131e body=29 status=ok
// SIG undefined FUN_14671131e(void)

undefined8 FUN_14671131e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14671133c FUN_14671133c body=29 status=ok
// SIG undefined FUN_14671133c(void)

undefined8 FUN_14671133c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14671135a FUN_14671135a body=29 status=ok
// SIG undefined FUN_14671135a(void)

undefined8 FUN_14671135a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146711378 FUN_146711378 body=29 status=ok
// SIG undefined FUN_146711378(void)

undefined8 FUN_146711378(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146711396 FUN_146711396 body=207 status=ok
// SIG undefined FUN_146711396(void)

undefined8 * FUN_146711396(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *param_1 = &PTR_FUN_14bbddd80;
  param_1[0x3e] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0x3ff00000;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0x3ff0000000000000;
  param_1[0x49] = 0x3ff0000000000000;
  param_1[0x4a] = 0x3ff0000000000000;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0x101010101010101;
  *(undefined1 *)(param_1 + 0x4d) = 1;
  *(undefined2 *)((longlong)param_1 + 0x269) = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x284) = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28c) = 0x3ff00000;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0x3ff0000000000000;
  param_1[0x57] = 0x3ff0000000000000;
  param_1[0x58] = 0x3ff0000000000000;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  return param_1;
}



// FUNCTION 146711466 FUN_146711466 body=29 status=ok
// SIG undefined FUN_146711466(void)

undefined8 FUN_146711466(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146711484 FUN_146711484 body=29 status=ok
// SIG undefined FUN_146711484(void)

undefined8 FUN_146711484(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467114a2 FUN_1467114a2 body=29 status=ok
// SIG undefined FUN_1467114a2(void)

undefined8 FUN_1467114a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467114c0 FUN_1467114c0 body=29 status=ok
// SIG undefined FUN_1467114c0(void)

undefined8 FUN_1467114c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467114de FUN_1467114de body=29 status=ok
// SIG undefined FUN_1467114de(void)

undefined8 FUN_1467114de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467114fc FUN_1467114fc body=29 status=ok
// SIG undefined FUN_1467114fc(void)

undefined8 FUN_1467114fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14671151a FUN_14671151a body=29 status=ok
// SIG undefined FUN_14671151a(void)

undefined8 FUN_14671151a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146711538 FUN_146711538 body=29 status=ok
// SIG undefined FUN_146711538(void)

undefined8 FUN_146711538(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146711556 FUN_146711556 body=29 status=ok
// SIG undefined FUN_146711556(void)

undefined8 FUN_146711556(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146711574 FUN_146711574 body=29 status=ok
// SIG undefined FUN_146711574(void)

undefined8 FUN_146711574(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146711592 FUN_146711592 body=29 status=ok
// SIG undefined FUN_146711592(void)

undefined8 FUN_146711592(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467115b0 FUN_1467115b0 body=29 status=ok
// SIG undefined FUN_1467115b0(void)

undefined8 FUN_1467115b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467115ce FUN_1467115ce body=29 status=ok
// SIG undefined FUN_1467115ce(void)

undefined8 FUN_1467115ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467115ec FUN_1467115ec body=29 status=ok
// SIG undefined FUN_1467115ec(void)

undefined8 FUN_1467115ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14671160a FUN_14671160a body=29 status=ok
// SIG undefined FUN_14671160a(void)

undefined8 FUN_14671160a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146711628 FUN_146711628 body=29 status=ok
// SIG undefined FUN_146711628(void)

undefined8 FUN_146711628(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146711646 FUN_146711646 body=29 status=ok
// SIG undefined FUN_146711646(void)

undefined8 FUN_146711646(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146711664 FUN_146711664 body=29 status=ok
// SIG undefined FUN_146711664(void)

undefined8 FUN_146711664(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146711682 FUN_146711682 body=29 status=ok
// SIG undefined FUN_146711682(void)

undefined8 FUN_146711682(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467116a0 FUN_1467116a0 body=29 status=ok
// SIG undefined FUN_1467116a0(void)

undefined8 FUN_1467116a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467116be FUN_1467116be body=29 status=ok
// SIG undefined FUN_1467116be(void)

undefined8 FUN_1467116be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467116dc FUN_1467116dc body=29 status=ok
// SIG undefined FUN_1467116dc(void)

undefined8 FUN_1467116dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467116fa FUN_1467116fa body=29 status=ok
// SIG undefined FUN_1467116fa(void)

undefined8 FUN_1467116fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146711718 FUN_146711718 body=29 status=ok
// SIG undefined FUN_146711718(void)

undefined8 FUN_146711718(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146711736 FUN_146711736 body=29 status=ok
// SIG undefined FUN_146711736(void)

undefined8 FUN_146711736(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146711754 FUN_146711754 body=29 status=ok
// SIG undefined FUN_146711754(void)

undefined8 FUN_146711754(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146711772 FUN_146711772 body=29 status=ok
// SIG undefined FUN_146711772(void)

undefined8 FUN_146711772(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146711790 FUN_146711790 body=29 status=ok
// SIG undefined FUN_146711790(void)

undefined8 FUN_146711790(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467117ae FUN_1467117ae body=29 status=ok
// SIG undefined FUN_1467117ae(void)

undefined8 FUN_1467117ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467117cc FUN_1467117cc body=29 status=ok
// SIG undefined FUN_1467117cc(void)

undefined8 FUN_1467117cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467117ea FUN_1467117ea body=29 status=ok
// SIG undefined FUN_1467117ea(void)

undefined8 FUN_1467117ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146711808 FUN_146711808 body=29 status=ok
// SIG undefined FUN_146711808(void)

undefined8 FUN_146711808(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146711826 FUN_146711826 body=29 status=ok
// SIG undefined FUN_146711826(void)

undefined8 FUN_146711826(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146711844 FUN_146711844 body=29 status=ok
// SIG undefined FUN_146711844(void)

undefined8 FUN_146711844(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146711862 FUN_146711862 body=29 status=ok
// SIG undefined FUN_146711862(void)

undefined8 FUN_146711862(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146711880 FUN_146711880 body=29 status=ok
// SIG undefined FUN_146711880(void)

undefined8 FUN_146711880(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14671189e FUN_14671189e body=29 status=ok
// SIG undefined FUN_14671189e(void)

undefined8 FUN_14671189e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467118bc FUN_1467118bc body=29 status=ok
// SIG undefined FUN_1467118bc(void)

undefined8 FUN_1467118bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467118da FUN_1467118da body=29 status=ok
// SIG undefined FUN_1467118da(void)

undefined8 FUN_1467118da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467118f8 FUN_1467118f8 body=29 status=ok
// SIG undefined FUN_1467118f8(void)

undefined8 FUN_1467118f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146711916 FUN_146711916 body=29 status=ok
// SIG undefined FUN_146711916(void)

undefined8 FUN_146711916(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146711934 FUN_146711934 body=29 status=ok
// SIG undefined FUN_146711934(void)

undefined8 FUN_146711934(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146711952 FUN_146711952 body=29 status=ok
// SIG undefined FUN_146711952(void)

undefined8 FUN_146711952(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146711970 FUN_146711970 body=29 status=ok
// SIG undefined FUN_146711970(void)

undefined8 FUN_146711970(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14671198e FUN_14671198e body=29 status=ok
// SIG undefined FUN_14671198e(void)

undefined8 FUN_14671198e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467119ac FUN_1467119ac body=29 status=ok
// SIG undefined FUN_1467119ac(void)

undefined8 FUN_1467119ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467119ca FUN_1467119ca body=29 status=ok
// SIG undefined FUN_1467119ca(void)

undefined8 FUN_1467119ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467119e8 FUN_1467119e8 body=29 status=ok
// SIG undefined FUN_1467119e8(void)

undefined8 FUN_1467119e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146711a06 FUN_146711a06 body=29 status=ok
// SIG undefined FUN_146711a06(void)

undefined8 FUN_146711a06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146711a24 FUN_146711a24 body=29 status=ok
// SIG undefined FUN_146711a24(void)

undefined8 FUN_146711a24(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146711a42 FUN_146711a42 body=29 status=ok
// SIG undefined FUN_146711a42(void)

undefined8 FUN_146711a42(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146711a60 FUN_146711a60 body=29 status=ok
// SIG undefined FUN_146711a60(void)

undefined8 FUN_146711a60(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146711a7e FUN_146711a7e body=29 status=ok
// SIG undefined FUN_146711a7e(void)

undefined8 FUN_146711a7e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146711a9c FUN_146711a9c body=29 status=ok
// SIG undefined FUN_146711a9c(void)

undefined8 FUN_146711a9c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146711aba FUN_146711aba body=29 status=ok
// SIG undefined FUN_146711aba(void)

undefined8 FUN_146711aba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146711ad8 FUN_146711ad8 body=29 status=ok
// SIG undefined FUN_146711ad8(void)

undefined8 FUN_146711ad8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146711af6 FUN_146711af6 body=29 status=ok
// SIG undefined FUN_146711af6(void)

undefined8 FUN_146711af6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146711b14 FUN_146711b14 body=29 status=ok
// SIG undefined FUN_146711b14(void)

undefined8 FUN_146711b14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146711b32 FUN_146711b32 body=29 status=ok
// SIG undefined FUN_146711b32(void)

undefined8 FUN_146711b32(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146711b50 FUN_146711b50 body=29 status=ok
// SIG undefined FUN_146711b50(void)

undefined8 FUN_146711b50(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146711b6e FUN_146711b6e body=29 status=ok
// SIG undefined FUN_146711b6e(void)

undefined8 FUN_146711b6e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146711b8c FUN_146711b8c body=29 status=ok
// SIG undefined FUN_146711b8c(void)

undefined8 FUN_146711b8c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146711baa FUN_146711baa body=29 status=ok
// SIG undefined FUN_146711baa(void)

undefined8 FUN_146711baa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146711bc8 FUN_146711bc8 body=29 status=ok
// SIG undefined FUN_146711bc8(void)

undefined8 FUN_146711bc8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146711be6 FUN_146711be6 body=29 status=ok
// SIG undefined FUN_146711be6(void)

undefined8 FUN_146711be6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146711c04 FUN_146711c04 body=29 status=ok
// SIG undefined FUN_146711c04(void)

undefined8 FUN_146711c04(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146711c22 FUN_146711c22 body=29 status=ok
// SIG undefined FUN_146711c22(void)

undefined8 FUN_146711c22(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146711c40 FUN_146711c40 body=29 status=ok
// SIG undefined FUN_146711c40(void)

undefined8 FUN_146711c40(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146711c5e FUN_146711c5e body=29 status=ok
// SIG undefined FUN_146711c5e(void)

undefined8 FUN_146711c5e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


