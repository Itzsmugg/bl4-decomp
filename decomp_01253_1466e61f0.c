// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1466e61f0 FUN_1466e61f0 body=55 status=ok
// SIG undefined FUN_1466e61f0(void)

void FUN_1466e61f0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc092e0 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc092e0 =
         FUN_140002ddd(FUN_1466e6227,uVar1,L"RigUnit_HierarchyAddControlRotator_LimitSettings");
  }
  return;
}



// FUNCTION 1466e6227 FUN_1466e6227 body=47 status=ok
// SIG undefined FUN_1466e6227(void)

longlong FUN_1466e6227(void)

{
  if (DAT_14cc092d8 == 0) {
    FUN_14086a14e(&DAT_14cc092d8,&PTR_FUN_14bba7de8);
  }
  return DAT_14cc092d8;
}



// FUNCTION 1466e6256 FUN_1466e6256 body=48 status=ok
// SIG undefined FUN_1466e6256(void)

void FUN_1466e6256(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14bbe5750;
  return;
}



// FUNCTION 1466e6286 FUN_1466e6286 body=55 status=ok
// SIG undefined FUN_1466e6286(void)

void FUN_1466e6286(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc092f8 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc092f8 =
         FUN_140002ddd(FUN_1466e62bd,uVar1,L"RigUnit_HierarchyAddControlRotator_Settings");
  }
  return;
}



// FUNCTION 1466e62bd FUN_1466e62bd body=47 status=ok
// SIG undefined FUN_1466e62bd(void)

longlong FUN_1466e62bd(void)

{
  if (DAT_14cc092f0 == 0) {
    FUN_14086a14e(&DAT_14cc092f0,&PTR_FUN_14bba80e0);
  }
  return DAT_14cc092f0;
}



// FUNCTION 1466e62ec FUN_1466e62ec body=48 status=ok
// SIG undefined FUN_1466e62ec(void)

void FUN_1466e62ec(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000110;
  *puVar1 = &PTR_FUN_14bbe58b0;
  return;
}



// FUNCTION 1466e631c FUN_1466e631c body=829 status=ok
// SIG undefined FUN_1466e631c(void)

longlong FUN_1466e631c(void)

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
  if (DAT_14cc09310 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc09310 = FUN_140002ddd(FUN_1466e665a,uVar4,L"RigUnit_HierarchyAddControlRotator");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"InitialValue";
    local_58[1] = L"FRotator";
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
    local_58[lVar6 * 7] = L"Settings";
    local_58[lVar6 * 7 + 1] = L"FRigUnit_HierarchyAddControlRotator_Settings";
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
    local_58[lVar6 * 7] = L"OffsetTransform";
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
    local_58[lVar6 * 7] = L"OffsetSpace";
    local_58[lVar6 * 7 + 1] = L"ERigVMTransformSpace";
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
    local_58[lVar6 * 7] = L"Parent";
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
    local_58[lVar6 * 7] = L"Name";
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
    local_58[lVar6 * 7] = L"Item";
    local_58[lVar6 * 7 + 1] = L"FRigElementKey";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc09310;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_HierarchyAddControlRotator::Execute",FUN_149237914,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc09310;
}



// FUNCTION 1466e665a FUN_1466e665a body=47 status=ok
// SIG undefined FUN_1466e665a(void)

longlong FUN_1466e665a(void)

{
  if (DAT_14cc09308 == 0) {
    FUN_14086a14e(&DAT_14cc09308,&PTR_FUN_14bba82d8);
  }
  return DAT_14cc09308;
}



// FUNCTION 1466e668a FUN_1466e668a body=48 status=ok
// SIG undefined FUN_1466e668a(void)

void FUN_1466e668a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000003a0;
  *puVar1 = &PTR_FUN_14bbe5a30;
  return;
}



// FUNCTION 1466e66ba FUN_1466e66ba body=55 status=ok
// SIG undefined FUN_1466e66ba(void)

void FUN_1466e66ba(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc09328 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc09328 =
         FUN_140002ddd(FUN_1466e66f1,uVar1,L"RigUnit_HierarchyAddControlTransform_LimitSettings");
  }
  return;
}



// FUNCTION 1466e66f1 FUN_1466e66f1 body=47 status=ok
// SIG undefined FUN_1466e66f1(void)

longlong FUN_1466e66f1(void)

{
  if (DAT_14cc09320 == 0) {
    FUN_14086a14e(&DAT_14cc09320,&PTR_FUN_14bba8788);
  }
  return DAT_14cc09320;
}



// FUNCTION 1466e6720 FUN_1466e6720 body=48 status=ok
// SIG undefined FUN_1466e6720(void)

void FUN_1466e6720(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000b0;
  *puVar1 = &PTR_FUN_14bbe5c30;
  return;
}



// FUNCTION 1466e6750 FUN_1466e6750 body=55 status=ok
// SIG undefined FUN_1466e6750(void)

void FUN_1466e6750(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc09340 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc09340 =
         FUN_140002ddd(FUN_1466e6787,uVar1,L"RigUnit_HierarchyAddControlTransform_Settings");
  }
  return;
}



// FUNCTION 1466e6787 FUN_1466e6787 body=47 status=ok
// SIG undefined FUN_1466e6787(void)

longlong FUN_1466e6787(void)

{
  if (DAT_14cc09338 == 0) {
    FUN_14086a14e(&DAT_14cc09338,&PTR_FUN_14bba8b68);
  }
  return DAT_14cc09338;
}



// FUNCTION 1466e67b6 FUN_1466e67b6 body=48 status=ok
// SIG undefined FUN_1466e67b6(void)

void FUN_1466e67b6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000180;
  *puVar1 = &PTR_FUN_14bbe5d90;
  return;
}



// FUNCTION 1466e67e6 FUN_1466e67e6 body=822 status=ok
// SIG undefined FUN_1466e67e6(void)

longlong FUN_1466e67e6(void)

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
  if (DAT_14cc09358 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc09358 = FUN_140002ddd(FUN_1466e6b1d,uVar4,L"RigUnit_HierarchyAddControlTransform");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"InitialValue";
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
    local_58[lVar6 * 7] = L"Settings";
    local_58[lVar6 * 7 + 1] = L"FRigUnit_HierarchyAddControlTransform_Settings";
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
    local_58[lVar6 * 7] = L"OffsetTransform";
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
    local_58[lVar6 * 7] = L"OffsetSpace";
    local_58[lVar6 * 7 + 1] = L"ERigVMTransformSpace";
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
    local_58[lVar6 * 7] = L"Parent";
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
    local_58[lVar6 * 7] = L"Name";
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
    local_58[lVar6 * 7] = L"Item";
    local_58[lVar6 * 7 + 1] = L"FRigElementKey";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc09358;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_HierarchyAddControlTransform::Execute",FUN_149238518,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc09358;
}



// FUNCTION 1466e6b1d FUN_1466e6b1d body=47 status=ok
// SIG undefined FUN_1466e6b1d(void)

longlong FUN_1466e6b1d(void)

{
  if (DAT_14cc09350 == 0) {
    FUN_14086a14e(&DAT_14cc09350,&PTR_FUN_14bba8d68);
  }
  return DAT_14cc09350;
}



// FUNCTION 1466e6b4c FUN_1466e6b4c body=48 status=ok
// SIG undefined FUN_1466e6b4c(void)

void FUN_1466e6b4c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000460;
  *puVar1 = &PTR_FUN_14bbe5f10;
  return;
}



// FUNCTION 1466e6b7c FUN_1466e6b7c body=55 status=ok
// SIG undefined FUN_1466e6b7c(void)

void FUN_1466e6b7c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc09370 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc09370 =
         FUN_140002ddd(FUN_1466e6bb3,uVar1,L"RigUnit_HierarchyAddAnimationChannelEmptyLimitSettings"
                      );
  }
  return;
}



// FUNCTION 1466e6bb3 FUN_1466e6bb3 body=49 status=ok
// SIG undefined FUN_1466e6bb3(void)

longlong FUN_1466e6bb3(void)

{
  if (DAT_14cc09368 == 0) {
    FUN_14086a14e(&DAT_14cc09368,&PTR_FUN_14bba8e48);
  }
  return DAT_14cc09368;
}



// FUNCTION 1466e6be4 FUN_1466e6be4 body=48 status=ok
// SIG undefined FUN_1466e6be4(void)

void FUN_1466e6be4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14bbe6110;
  return;
}



// FUNCTION 1466e6c14 FUN_1466e6c14 body=815 status=ok
// SIG undefined FUN_1466e6c14(void)

longlong FUN_1466e6c14(void)

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
  if (DAT_14cc09388 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc09388 = FUN_140002ddd(FUN_1466e6f44,uVar4,L"RigUnit_HierarchyAddAnimationChannelBool");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"InitialValue";
    local_58[1] = L"bool";
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
    local_58[lVar6 * 7] = L"MinimumValue";
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
    local_58[lVar6 * 7] = L"MaximumValue";
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
    local_58[lVar6 * 7] = L"LimitsEnabled";
    local_58[lVar6 * 7 + 1] = L"FRigUnit_HierarchyAddAnimationChannelEmptyLimitSettings";
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
    local_58[lVar6 * 7] = L"Parent";
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
    local_58[lVar6 * 7] = L"Name";
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
    local_58[lVar6 * 7] = L"Item";
    local_58[lVar6 * 7 + 1] = L"FRigElementKey";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc09388;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_HierarchyAddAnimationChannelBool::Execute",FUN_149239128,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc09388;
}



// FUNCTION 1466e6f44 FUN_1466e6f44 body=47 status=ok
// SIG undefined FUN_1466e6f44(void)

longlong FUN_1466e6f44(void)

{
  if (DAT_14cc09380 == 0) {
    FUN_14086a14e(&DAT_14cc09380,&PTR_FUN_14bba9160);
  }
  return DAT_14cc09380;
}



// FUNCTION 1466e6f74 FUN_1466e6f74 body=48 status=ok
// SIG undefined FUN_1466e6f74(void)

void FUN_1466e6f74(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000220;
  *puVar1 = &PTR_FUN_14bbe6270;
  return;
}



// FUNCTION 1466e6fa4 FUN_1466e6fa4 body=55 status=ok
// SIG undefined FUN_1466e6fa4(void)

void FUN_1466e6fa4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc093a0 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc093a0 =
         FUN_140002ddd(FUN_1466e6fdb,uVar1,
                       L"RigUnit_HierarchyAddAnimationChannelSingleLimitSettings");
  }
  return;
}



// FUNCTION 1466e6fdb FUN_1466e6fdb body=49 status=ok
// SIG undefined FUN_1466e6fdb(void)

longlong FUN_1466e6fdb(void)

{
  if (DAT_14cc09398 == 0) {
    FUN_14086a14e(&DAT_14cc09398,&PTR_FUN_14bba9288);
  }
  return DAT_14cc09398;
}



// FUNCTION 1466e700c FUN_1466e700c body=48 status=ok
// SIG undefined FUN_1466e700c(void)

void FUN_1466e700c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000002;
  *puVar1 = &PTR_FUN_14bbe6480;
  return;
}



// FUNCTION 1466e703c FUN_1466e703c body=815 status=ok
// SIG undefined FUN_1466e703c(void)

longlong FUN_1466e703c(void)

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
  if (DAT_14cc093b8 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc093b8 = FUN_140002ddd(FUN_1466e736c,uVar4,L"RigUnit_HierarchyAddAnimationChannelFloat");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"InitialValue";
    local_58[1] = L"float";
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
    local_58[lVar6 * 7] = L"MinimumValue";
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
    local_58[lVar6 * 7] = L"MaximumValue";
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
    local_58[lVar6 * 7] = L"LimitsEnabled";
    local_58[lVar6 * 7 + 1] = L"FRigUnit_HierarchyAddAnimationChannelSingleLimitSettings";
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
    local_58[lVar6 * 7] = L"Parent";
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
    local_58[lVar6 * 7] = L"Name";
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
    local_58[lVar6 * 7] = L"Item";
    local_58[lVar6 * 7 + 1] = L"FRigElementKey";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc093b8;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_HierarchyAddAnimationChannelFloat::Execute",FUN_1492396cc,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc093b8;
}



// FUNCTION 1466e736c FUN_1466e736c body=47 status=ok
// SIG undefined FUN_1466e736c(void)

longlong FUN_1466e736c(void)

{
  if (DAT_14cc093b0 == 0) {
    FUN_14086a14e(&DAT_14cc093b0,&PTR_FUN_14bba9530);
  }
  return DAT_14cc093b0;
}



// FUNCTION 1466e739c FUN_1466e739c body=48 status=ok
// SIG undefined FUN_1466e739c(void)

void FUN_1466e739c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000220;
  *puVar1 = &PTR_FUN_14bbe65e0;
  return;
}



// FUNCTION 1466e73cc FUN_1466e73cc body=815 status=ok
// SIG undefined FUN_1466e73cc(void)

longlong FUN_1466e73cc(void)

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
  if (DAT_14cc093d0 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc093d0 =
         FUN_140002ddd(FUN_1466e76fc,uVar4,L"RigUnit_HierarchyAddAnimationChannelScaleFloat");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"InitialValue";
    local_58[1] = L"float";
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
    local_58[lVar6 * 7] = L"MinimumValue";
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
    local_58[lVar6 * 7] = L"MaximumValue";
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
    local_58[lVar6 * 7] = L"LimitsEnabled";
    local_58[lVar6 * 7 + 1] = L"FRigUnit_HierarchyAddAnimationChannelSingleLimitSettings";
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
    local_58[lVar6 * 7] = L"Parent";
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
    local_58[lVar6 * 7] = L"Name";
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
    local_58[lVar6 * 7] = L"Item";
    local_58[lVar6 * 7 + 1] = L"FRigElementKey";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc093d0;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_HierarchyAddAnimationChannelScaleFloat::Execute",FUN_149239ca4,
                  lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc093d0;
}



// FUNCTION 1466e76fc FUN_1466e76fc body=47 status=ok
// SIG undefined FUN_1466e76fc(void)

longlong FUN_1466e76fc(void)

{
  if (DAT_14cc093c8 == 0) {
    FUN_14086a14e(&DAT_14cc093c8,&PTR_FUN_14bba9770);
  }
  return DAT_14cc093c8;
}



// FUNCTION 1466e772c FUN_1466e772c body=48 status=ok
// SIG undefined FUN_1466e772c(void)

void FUN_1466e772c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000220;
  *puVar1 = &PTR_FUN_14bbe67d0;
  return;
}



// FUNCTION 1466e775c FUN_1466e775c body=901 status=ok
// SIG undefined FUN_1466e775c(void)

longlong FUN_1466e775c(void)

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
  if (DAT_14cc093e8 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc093e8 =
         FUN_140002ddd(FUN_1466e7ae2,uVar4,L"RigUnit_HierarchyAddAnimationChannelInteger");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"InitialValue";
    local_58[1] = L"int32";
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
    local_58[lVar6 * 7] = L"MinimumValue";
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
    local_58[lVar6 * 7] = L"MaximumValue";
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
    local_58[lVar6 * 7] = L"LimitsEnabled";
    local_58[lVar6 * 7 + 1] = L"FRigUnit_HierarchyAddAnimationChannelSingleLimitSettings";
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
    local_58[lVar6 * 7] = L"ControlEnum";
    local_58[lVar6 * 7 + 1] = L"TObjectPtr<UEnum>";
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
    local_58[lVar6 * 7] = L"Parent";
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
    local_58[lVar6 * 7] = L"Name";
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
    local_58[lVar6 * 7] = L"Item";
    local_58[lVar6 * 7 + 1] = L"FRigElementKey";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc093e8;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_HierarchyAddAnimationChannelInteger::Execute",FUN_14923a27c,lVar6
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
  return DAT_14cc093e8;
}



// FUNCTION 1466e7ae2 FUN_1466e7ae2 body=47 status=ok
// SIG undefined FUN_1466e7ae2(void)

longlong FUN_1466e7ae2(void)

{
  if (DAT_14cc093e0 == 0) {
    FUN_14086a14e(&DAT_14cc093e0,&PTR_FUN_14bba9a28);
  }
  return DAT_14cc093e0;
}



// FUNCTION 1466e7b12 FUN_1466e7b12 body=48 status=ok
// SIG undefined FUN_1466e7b12(void)

void FUN_1466e7b12(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000230;
  *puVar1 = &PTR_FUN_14bbe69c0;
  return;
}



// FUNCTION 1466e7b42 FUN_1466e7b42 body=55 status=ok
// SIG undefined FUN_1466e7b42(void)

void FUN_1466e7b42(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc09400 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc09400 =
         FUN_140002ddd(FUN_1466e7b79,uVar1,L"RigUnit_HierarchyAddAnimationChannel2DLimitSettings");
  }
  return;
}



// FUNCTION 1466e7b79 FUN_1466e7b79 body=47 status=ok
// SIG undefined FUN_1466e7b79(void)

longlong FUN_1466e7b79(void)

{
  if (DAT_14cc093f8 == 0) {
    FUN_14086a14e(&DAT_14cc093f8,&PTR_FUN_14bba9b98);
  }
  return DAT_14cc093f8;
}



// FUNCTION 1466e7ba8 FUN_1466e7ba8 body=48 status=ok
// SIG undefined FUN_1466e7ba8(void)

void FUN_1466e7ba8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000004;
  *puVar1 = &PTR_FUN_14bbe6bb0;
  return;
}



// FUNCTION 1466e7bd8 FUN_1466e7bd8 body=815 status=ok
// SIG undefined FUN_1466e7bd8(void)

longlong FUN_1466e7bd8(void)

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
  if (DAT_14cc09418 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc09418 =
         FUN_140002ddd(FUN_1466e7f08,uVar4,L"RigUnit_HierarchyAddAnimationChannelVector2D");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"InitialValue";
    local_58[1] = L"FVector2D";
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
    local_58[lVar6 * 7] = L"MinimumValue";
    local_58[lVar6 * 7 + 1] = L"FVector2D";
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
    local_58[lVar6 * 7] = L"MaximumValue";
    local_58[lVar6 * 7 + 1] = L"FVector2D";
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
    local_58[lVar6 * 7] = L"LimitsEnabled";
    local_58[lVar6 * 7 + 1] = L"FRigUnit_HierarchyAddAnimationChannel2DLimitSettings";
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
    local_58[lVar6 * 7] = L"Parent";
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
    local_58[lVar6 * 7] = L"Name";
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
    local_58[lVar6 * 7] = L"Item";
    local_58[lVar6 * 7 + 1] = L"FRigElementKey";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc09418;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_HierarchyAddAnimationChannelVector2D::Execute",FUN_14923a88c,
                  lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc09418;
}



// FUNCTION 1466e7f08 FUN_1466e7f08 body=47 status=ok
// SIG undefined FUN_1466e7f08(void)

longlong FUN_1466e7f08(void)

{
  if (DAT_14cc09410 == 0) {
    FUN_14086a14e(&DAT_14cc09410,&PTR_FUN_14bba9e60);
  }
  return DAT_14cc09410;
}



// FUNCTION 1466e7f38 FUN_1466e7f38 body=48 status=ok
// SIG undefined FUN_1466e7f38(void)

void FUN_1466e7f38(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000250;
  *puVar1 = &PTR_FUN_14bbe6d10;
  return;
}



// FUNCTION 1466e7f68 FUN_1466e7f68 body=55 status=ok
// SIG undefined FUN_1466e7f68(void)

void FUN_1466e7f68(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc09430 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc09430 =
         FUN_140002ddd(FUN_1466e7f9f,uVar1,
                       L"RigUnit_HierarchyAddAnimationChannelVectorLimitSettings");
  }
  return;
}



// FUNCTION 1466e7f9f FUN_1466e7f9f body=49 status=ok
// SIG undefined FUN_1466e7f9f(void)

longlong FUN_1466e7f9f(void)

{
  if (DAT_14cc09428 == 0) {
    FUN_14086a14e(&DAT_14cc09428,&PTR_FUN_14bbaa020);
  }
  return DAT_14cc09428;
}



// FUNCTION 1466e7fd0 FUN_1466e7fd0 body=48 status=ok
// SIG undefined FUN_1466e7fd0(void)

void FUN_1466e7fd0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x100000006;
  *puVar1 = &PTR_FUN_14bbe6f00;
  return;
}



// FUNCTION 1466e8000 FUN_1466e8000 body=815 status=ok
// SIG undefined FUN_1466e8000(void)

longlong FUN_1466e8000(void)

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
  if (DAT_14cc09448 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc09448 = FUN_140002ddd(FUN_1466e8330,uVar4,L"RigUnit_HierarchyAddAnimationChannelVector")
    ;
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"InitialValue";
    local_58[1] = L"FVector";
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
    local_58[lVar6 * 7] = L"MinimumValue";
    local_58[lVar6 * 7 + 1] = L"FVector";
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
    local_58[lVar6 * 7] = L"MaximumValue";
    local_58[lVar6 * 7 + 1] = L"FVector";
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
    local_58[lVar6 * 7] = L"LimitsEnabled";
    local_58[lVar6 * 7 + 1] = L"FRigUnit_HierarchyAddAnimationChannelVectorLimitSettings";
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
    local_58[lVar6 * 7] = L"Parent";
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
    local_58[lVar6 * 7] = L"Name";
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
    local_58[lVar6 * 7] = L"Item";
    local_58[lVar6 * 7 + 1] = L"FRigElementKey";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc09448;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_HierarchyAddAnimationChannelVector::Execute",FUN_14923aea0,lVar6)
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
  return DAT_14cc09448;
}



// FUNCTION 1466e8330 FUN_1466e8330 body=47 status=ok
// SIG undefined FUN_1466e8330(void)

longlong FUN_1466e8330(void)

{
  if (DAT_14cc09440 == 0) {
    FUN_14086a14e(&DAT_14cc09440,&PTR_FUN_14bbaa2e0);
  }
  return DAT_14cc09440;
}



// FUNCTION 1466e8360 FUN_1466e8360 body=48 status=ok
// SIG undefined FUN_1466e8360(void)

void FUN_1466e8360(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000260;
  *puVar1 = &PTR_FUN_14bbe7060;
  return;
}



// FUNCTION 1466e8390 FUN_1466e8390 body=815 status=ok
// SIG undefined FUN_1466e8390(void)

longlong FUN_1466e8390(void)

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
  if (DAT_14cc09460 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc09460 =
         FUN_140002ddd(FUN_1466e86c0,uVar4,L"RigUnit_HierarchyAddAnimationChannelScaleVector");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"InitialValue";
    local_58[1] = L"FVector";
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
    local_58[lVar6 * 7] = L"MinimumValue";
    local_58[lVar6 * 7 + 1] = L"FVector";
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
    local_58[lVar6 * 7] = L"MaximumValue";
    local_58[lVar6 * 7 + 1] = L"FVector";
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
    local_58[lVar6 * 7] = L"LimitsEnabled";
    local_58[lVar6 * 7 + 1] = L"FRigUnit_HierarchyAddAnimationChannelVectorLimitSettings";
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
    local_58[lVar6 * 7] = L"Parent";
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
    local_58[lVar6 * 7] = L"Name";
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
    local_58[lVar6 * 7] = L"Item";
    local_58[lVar6 * 7 + 1] = L"FRigElementKey";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc09460;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_HierarchyAddAnimationChannelScaleVector::Execute",FUN_14923b4fe,
                  lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc09460;
}



// FUNCTION 1466e86c0 FUN_1466e86c0 body=47 status=ok
// SIG undefined FUN_1466e86c0(void)

longlong FUN_1466e86c0(void)

{
  if (DAT_14cc09458 == 0) {
    FUN_14086a14e(&DAT_14cc09458,&PTR_FUN_14bbaa540);
  }
  return DAT_14cc09458;
}



// FUNCTION 1466e86f0 FUN_1466e86f0 body=48 status=ok
// SIG undefined FUN_1466e86f0(void)

void FUN_1466e86f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000260;
  *puVar1 = &PTR_FUN_14bbe7250;
  return;
}



// FUNCTION 1466e8720 FUN_1466e8720 body=55 status=ok
// SIG undefined FUN_1466e8720(void)

void FUN_1466e8720(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc09478 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc09478 =
         FUN_140002ddd(FUN_1466e8757,uVar1,
                       L"RigUnit_HierarchyAddAnimationChannelRotatorLimitSettings");
  }
  return;
}



// FUNCTION 1466e8757 FUN_1466e8757 body=47 status=ok
// SIG undefined FUN_1466e8757(void)

longlong FUN_1466e8757(void)

{
  if (DAT_14cc09470 == 0) {
    FUN_14086a14e(&DAT_14cc09470,&PTR_FUN_14bbaa708);
  }
  return DAT_14cc09470;
}



// FUNCTION 1466e8786 FUN_1466e8786 body=48 status=ok
// SIG undefined FUN_1466e8786(void)

void FUN_1466e8786(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x100000006;
  *puVar1 = &PTR_FUN_14bbe7440;
  return;
}



// FUNCTION 1466e87b6 FUN_1466e87b6 body=815 status=ok
// SIG undefined FUN_1466e87b6(void)

longlong FUN_1466e87b6(void)

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
  if (DAT_14cc09490 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc09490 =
         FUN_140002ddd(FUN_1466e8ae6,uVar4,L"RigUnit_HierarchyAddAnimationChannelRotator");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"InitialValue";
    local_58[1] = L"FRotator";
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
    local_58[lVar6 * 7] = L"MinimumValue";
    local_58[lVar6 * 7 + 1] = L"FRotator";
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
    local_58[lVar6 * 7] = L"MaximumValue";
    local_58[lVar6 * 7 + 1] = L"FRotator";
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
    local_58[lVar6 * 7] = L"LimitsEnabled";
    local_58[lVar6 * 7 + 1] = L"FRigUnit_HierarchyAddAnimationChannelRotatorLimitSettings";
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
    local_58[lVar6 * 7] = L"Parent";
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
    local_58[lVar6 * 7] = L"Name";
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
    local_58[lVar6 * 7] = L"Item";
    local_58[lVar6 * 7 + 1] = L"FRigElementKey";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc09490;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_HierarchyAddAnimationChannelRotator::Execute",FUN_14923bb5c,lVar6
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
  return DAT_14cc09490;
}



// FUNCTION 1466e8ae6 FUN_1466e8ae6 body=47 status=ok
// SIG undefined FUN_1466e8ae6(void)

longlong FUN_1466e8ae6(void)

{
  if (DAT_14cc09488 == 0) {
    FUN_14086a14e(&DAT_14cc09488,&PTR_FUN_14bbaa9d0);
  }
  return DAT_14cc09488;
}



// FUNCTION 1466e8b16 FUN_1466e8b16 body=48 status=ok
// SIG undefined FUN_1466e8b16(void)

void FUN_1466e8b16(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000260;
  *puVar1 = &PTR_FUN_14bbe75a0;
  return;
}



// FUNCTION 1466e8b46 FUN_1466e8b46 body=406 status=ok
// SIG undefined FUN_1466e8b46(void)

longlong FUN_1466e8b46(void)

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
  if (DAT_14cc094a8 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc094a8 = FUN_140002ddd(FUN_1466e8cdd,uVar4,L"RigUnit_HierarchyGetShapeSettings");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (int)uStack_50;
    *local_58 = L"Item";
    local_58[1] = L"FRigElementKey";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar6 = (longlong)(int)uStack_50;
    uVar3 = (int)uStack_50 + 1;
    uStack_50 = CONCAT44(uStack_50._4_4_,uVar3);
    if (uStack_50._4_4_ < uVar3) {
      FUN_140c0351c(&local_58,iVar2);
    }
    local_58[lVar6 * 7] = L"Settings";
    local_58[lVar6 * 7 + 1] = L"FRigUnit_HierarchyAddControl_ShapeSettings";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc094a8;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_HierarchyGetShapeSettings::Execute",&LAB_14923c1f6,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc094a8;
}



// FUNCTION 1466e8cdd FUN_1466e8cdd body=47 status=ok
// SIG undefined FUN_1466e8cdd(void)

longlong FUN_1466e8cdd(void)

{
  if (DAT_14cc094a0 == 0) {
    FUN_14086a14e(&DAT_14cc094a0,&PTR_FUN_14bbaabb8);
  }
  return DAT_14cc094a0;
}



// FUNCTION 1466e8d0c FUN_1466e8d0c body=48 status=ok
// SIG undefined FUN_1466e8d0c(void)

void FUN_1466e8d0c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000000a0;
  *puVar1 = &PTR_FUN_14bbe7790;
  return;
}



// FUNCTION 1466e8d3c FUN_1466e8d3c body=406 status=ok
// SIG undefined FUN_1466e8d3c(void)

longlong FUN_1466e8d3c(void)

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
  if (DAT_14cc094c0 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc094c0 = FUN_140002ddd(FUN_1466e8ed3,uVar4,L"RigUnit_HierarchySetShapeSettings");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (int)uStack_50;
    *local_58 = L"Item";
    local_58[1] = L"FRigElementKey";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar6 = (longlong)(int)uStack_50;
    uVar3 = (int)uStack_50 + 1;
    uStack_50 = CONCAT44(uStack_50._4_4_,uVar3);
    if (uStack_50._4_4_ < uVar3) {
      FUN_140c0351c(&local_58,iVar2);
    }
    local_58[lVar6 * 7] = L"Settings";
    local_58[lVar6 * 7 + 1] = L"FRigUnit_HierarchyAddControl_ShapeSettings";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc094c0;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_HierarchySetShapeSettings::Execute",&LAB_14923c39e,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc094c0;
}



// FUNCTION 1466e8ed3 FUN_1466e8ed3 body=47 status=ok
// SIG undefined FUN_1466e8ed3(void)

longlong FUN_1466e8ed3(void)

{
  if (DAT_14cc094b8 == 0) {
    FUN_14086a14e(&DAT_14cc094b8,&PTR_FUN_14bbaad48);
  }
  return DAT_14cc094b8;
}



// FUNCTION 1466e8f02 FUN_1466e8f02 body=48 status=ok
// SIG undefined FUN_1466e8f02(void)

void FUN_1466e8f02(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000280;
  *puVar1 = &PTR_FUN_14bbe7980;
  return;
}



// FUNCTION 1466e8f32 FUN_1466e8f32 body=829 status=ok
// SIG undefined FUN_1466e8f32(void)

longlong FUN_1466e8f32(void)

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
  if (DAT_14cc094d8 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc094d8 = FUN_140002ddd(FUN_1466e9270,uVar4,L"RigUnit_HierarchyAddSocket");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"Transform";
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
    local_58[lVar6 * 7] = L"Space";
    local_58[lVar6 * 7 + 1] = L"ERigVMTransformSpace";
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
    local_58[lVar6 * 7] = L"Color";
    local_58[lVar6 * 7 + 1] = L"FLinearColor";
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
    local_58[lVar6 * 7] = L"Description";
    local_58[lVar6 * 7 + 1] = L"FString";
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
    local_58[lVar6 * 7] = L"Parent";
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
    local_58[lVar6 * 7] = L"Name";
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
    local_58[lVar6 * 7] = L"Item";
    local_58[lVar6 * 7 + 1] = L"FRigElementKey";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc094d8;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_HierarchyAddSocket::Execute",FUN_14923c4fc,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc094d8;
}



// FUNCTION 1466e9270 FUN_1466e9270 body=47 status=ok
// SIG undefined FUN_1466e9270(void)

longlong FUN_1466e9270(void)

{
  if (DAT_14cc094d0 == 0) {
    FUN_14086a14e(&DAT_14cc094d0,&PTR_FUN_14bbaaf88);
  }
  return DAT_14cc094d0;
}



// FUNCTION 1466e92a0 FUN_1466e92a0 body=48 status=ok
// SIG undefined FUN_1466e92a0(void)

void FUN_1466e92a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000002a0;
  *puVar1 = &PTR_FUN_14bbe7b70;
  return;
}



// FUNCTION 1466e92d0 FUN_1466e92d0 body=55 status=ok
// SIG undefined FUN_1466e92d0(void)

void FUN_1466e92d0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc09548 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc09548 = FUN_140002ddd(FUN_141907142,uVar1,L"RigUnit_HierarchyBase");
  }
  return;
}



// FUNCTION 1466e9308 FUN_1466e9308 body=48 status=ok
// SIG undefined FUN_1466e9308(void)

void FUN_1466e9308(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14bbe7e10;
  return;
}



// FUNCTION 1466e9338 FUN_1466e9338 body=55 status=ok
// SIG undefined FUN_1466e9338(void)

void FUN_1466e9338(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc09560 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc09560 = FUN_140002ddd(FUN_1466e936f,uVar1,L"RigUnit_HierarchyBaseMutable");
  }
  return;
}



// FUNCTION 1466e936f FUN_1466e936f body=49 status=ok
// SIG undefined FUN_1466e936f(void)

longlong FUN_1466e936f(void)

{
  if (DAT_14cc09558 == 0) {
    FUN_14086a14e(&DAT_14cc09558,&PTR_FUN_14bbaba00);
  }
  return DAT_14cc09558;
}



// FUNCTION 1466e93a0 FUN_1466e93a0 body=48 status=ok
// SIG undefined FUN_1466e93a0(void)

void FUN_1466e93a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000001f0;
  *puVar1 = &PTR_FUN_14bbe7f70;
  return;
}



// FUNCTION 1466e93d0 FUN_1466e93d0 body=647 status=ok
// SIG undefined FUN_1466e93d0(void)

longlong FUN_1466e93d0(void)

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
  if (DAT_14cc09578 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc09578 = FUN_140002ddd(FUN_1466e9658,uVar4,L"RigUnit_HierarchyGetParent");
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
    local_58[lVar6 * 7] = L"bDefaultParent";
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
    local_58[lVar6 * 7] = L"Parent";
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
    local_58[lVar6 * 7] = L"CachedChild";
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
    local_58[lVar6 * 7] = L"CachedParent";
    local_58[lVar6 * 7 + 1] = L"FCachedRigElement";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc09578;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_HierarchyGetParent::Execute",FUN_14923dda6,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc09578;
}



// FUNCTION 1466e9658 FUN_1466e9658 body=47 status=ok
// SIG undefined FUN_1466e9658(void)

longlong FUN_1466e9658(void)

{
  if (DAT_14cc09570 == 0) {
    FUN_14086a14e(&DAT_14cc09570,&PTR_FUN_14bbabcc8);
  }
  return DAT_14cc09570;
}



// FUNCTION 1466e9688 FUN_1466e9688 body=48 status=ok
// SIG undefined FUN_1466e9688(void)

void FUN_1466e9688(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000068;
  *puVar1 = &PTR_FUN_14bbe8160;
  return;
}



// FUNCTION 1466e96b8 FUN_1466e96b8 body=733 status=ok
// SIG undefined FUN_1466e96b8(void)

longlong FUN_1466e96b8(void)

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
  if (DAT_14cc09590 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc09590 = FUN_140002ddd(FUN_1466e9996,uVar4,L"RigUnit_HierarchyGetParents");
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
    local_58[lVar6 * 7] = L"bIncludeChild";
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
    local_58[lVar6 * 7] = L"bReverse";
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
    local_58[lVar6 * 7] = L"Parents";
    local_58[lVar6 * 7 + 1] = L"FRigElementKeyCollection";
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
    local_58[lVar6 * 7] = L"CachedChild";
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
    local_58[lVar6 * 7] = L"CachedParents";
    local_58[lVar6 * 7 + 1] = L"FRigElementKeyCollection";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc09590;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_HierarchyGetParents::Execute",FUN_14923e05e,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc09590;
}



// FUNCTION 1466e9996 FUN_1466e9996 body=47 status=ok
// SIG undefined FUN_1466e9996(void)

longlong FUN_1466e9996(void)

{
  if (DAT_14cc09588 == 0) {
    FUN_14086a14e(&DAT_14cc09588,&PTR_FUN_14bbabfc0);
  }
  return DAT_14cc09588;
}



// FUNCTION 1466e99c6 FUN_1466e99c6 body=48 status=ok
// SIG undefined FUN_1466e99c6(void)

void FUN_1466e99c6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000058;
  *puVar1 = &PTR_FUN_14bbe8350;
  return;
}



// FUNCTION 1466e99f6 FUN_1466e99f6 body=822 status=ok
// SIG undefined FUN_1466e99f6(void)

longlong FUN_1466e99f6(void)

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
  if (DAT_14cc095a8 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc095a8 = FUN_140002ddd(FUN_1466e9d2d,uVar4,L"RigUnit_HierarchyGetParentsItemArray");
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
    local_58[lVar6 * 7] = L"bIncludeChild";
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
    local_58[lVar6 * 7] = L"bReverse";
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
    local_58[lVar6 * 7] = L"bDefaultParent";
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
    local_58[lVar6 * 7] = L"Parents";
    local_58[lVar6 * 7 + 1] = L"TArray<FRigElementKey>";
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
    local_58[lVar6 * 7] = L"CachedChild";
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
    local_58[lVar6 * 7] = L"CachedParents";
    local_58[lVar6 * 7 + 1] = L"FRigElementKeyCollection";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc095a8;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_HierarchyGetParentsItemArray::Execute",FUN_14923e1c4,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc095a8;
}



// FUNCTION 1466e9d2d FUN_1466e9d2d body=47 status=ok
// SIG undefined FUN_1466e9d2d(void)

longlong FUN_1466e9d2d(void)

{
  if (DAT_14cc095a0 == 0) {
    FUN_14086a14e(&DAT_14cc095a0,&PTR_FUN_14bbac308);
  }
  return DAT_14cc095a0;
}



// FUNCTION 1466e9d5c FUN_1466e9d5c body=48 status=ok
// SIG undefined FUN_1466e9d5c(void)

void FUN_1466e9d5c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000058;
  *puVar1 = &PTR_FUN_14bbe8540;
  return;
}



// FUNCTION 1466e9d8c FUN_1466e9d8c body=733 status=ok
// SIG undefined FUN_1466e9d8c(void)

longlong FUN_1466e9d8c(void)

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
  if (DAT_14cc095c0 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc095c0 = FUN_140002ddd(FUN_1466ea06a,uVar4,L"RigUnit_HierarchyGetChildren");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"Parent";
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
    local_58[lVar6 * 7] = L"bIncludeParent";
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
    local_58[lVar6 * 7] = L"bRecursive";
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
    local_58[lVar6 * 7] = L"Children";
    local_58[lVar6 * 7 + 1] = L"FRigElementKeyCollection";
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
    local_58[lVar6 * 7] = L"CachedParent";
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
    local_58[lVar6 * 7] = L"CachedChildren";
    local_58[lVar6 * 7 + 1] = L"FRigElementKeyCollection";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc095c0;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_HierarchyGetChildren::Execute",FUN_14923e810,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc095c0;
}



// FUNCTION 1466ea06a FUN_1466ea06a body=47 status=ok
// SIG undefined FUN_1466ea06a(void)

longlong FUN_1466ea06a(void)

{
  if (DAT_14cc095b8 == 0) {
    FUN_14086a14e(&DAT_14cc095b8,&PTR_FUN_14bbac5d0);
  }
  return DAT_14cc095b8;
}



// FUNCTION 1466ea09a FUN_1466ea09a body=48 status=ok
// SIG undefined FUN_1466ea09a(void)

void FUN_1466ea09a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000058;
  *puVar1 = &PTR_FUN_14bbe86a0;
  return;
}



// FUNCTION 1466ea0ca FUN_1466ea0ca body=654 status=ok
// SIG undefined FUN_1466ea0ca(void)

longlong FUN_1466ea0ca(void)

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
  if (DAT_14cc095d8 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc095d8 = FUN_140002ddd(FUN_1466ea359,uVar4,L"RigUnit_HierarchyGetSiblings");
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
    local_58[lVar6 * 7] = L"bIncludeItem";
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
    local_58[lVar6 * 7] = L"Siblings";
    local_58[lVar6 * 7 + 1] = L"FRigElementKeyCollection";
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
    local_58[lVar6 * 7] = L"CachedItem";
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
    local_58[lVar6 * 7] = L"CachedSiblings";
    local_58[lVar6 * 7 + 1] = L"FRigElementKeyCollection";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc095d8;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_HierarchyGetSiblings::Execute",FUN_14923ebca,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc095d8;
}



// FUNCTION 1466ea359 FUN_1466ea359 body=47 status=ok
// SIG undefined FUN_1466ea359(void)

longlong FUN_1466ea359(void)

{
  if (DAT_14cc095d0 == 0) {
    FUN_14086a14e(&DAT_14cc095d0,&PTR_FUN_14bbac8b8);
  }
  return DAT_14cc095d0;
}



// FUNCTION 1466ea388 FUN_1466ea388 body=48 status=ok
// SIG undefined FUN_1466ea388(void)

void FUN_1466ea388(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000058;
  *puVar1 = &PTR_FUN_14bbe8890;
  return;
}



// FUNCTION 1466ea3b8 FUN_1466ea3b8 body=740 status=ok
// SIG undefined FUN_1466ea3b8(void)

longlong FUN_1466ea3b8(void)

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
  if (DAT_14cc095f0 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc095f0 = FUN_140002ddd(FUN_1466ea69d,uVar4,L"RigUnit_HierarchyGetSiblingsItemArray");
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
    local_58[lVar6 * 7] = L"bIncludeItem";
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
    local_58[lVar6 * 7] = L"bDefaultSiblings";
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
    local_58[lVar6 * 7] = L"Siblings";
    local_58[lVar6 * 7 + 1] = L"TArray<FRigElementKey>";
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
    local_58[lVar6 * 7] = L"CachedItem";
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
    local_58[lVar6 * 7] = L"CachedSiblings";
    local_58[lVar6 * 7 + 1] = L"FRigElementKeyCollection";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc095f0;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_HierarchyGetSiblingsItemArray::Execute",FUN_14923ed10,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc095f0;
}



// FUNCTION 1466ea69d FUN_1466ea69d body=47 status=ok
// SIG undefined FUN_1466ea69d(void)

longlong FUN_1466ea69d(void)

{
  if (DAT_14cc095e8 == 0) {
    FUN_14086a14e(&DAT_14cc095e8,&PTR_FUN_14bbacbf0);
  }
  return DAT_14cc095e8;
}



// FUNCTION 1466ea6cc FUN_1466ea6cc body=48 status=ok
// SIG undefined FUN_1466ea6cc(void)

void FUN_1466ea6cc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000058;
  *puVar1 = &PTR_FUN_14bbe8a80;
  return;
}



// FUNCTION 1466ea6fc FUN_1466ea6fc body=983 status=ok
// SIG undefined FUN_1466ea6fc(void)

longlong FUN_1466ea6fc(void)

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
  if (DAT_14cc09608 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc09608 = FUN_140002ddd(FUN_1466eaad4,uVar4,L"RigUnit_HierarchyGetChainItemArray");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"Start";
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
    local_58[lVar6 * 7] = &DAT_149ebe6ea;
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
    local_58[lVar6 * 7] = L"bIncludeStart";
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
    local_58[lVar6 * 7] = L"bIncludeEnd";
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
    local_58[lVar6 * 7] = L"bReverse";
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
    local_58[lVar6 * 7] = L"Chain";
    local_58[lVar6 * 7 + 1] = L"TArray<FRigElementKey>";
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
    local_58[lVar6 * 7] = L"CachedStart";
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
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"CachedEnd";
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
    local_58[lVar6 * 7] = L"CachedChain";
    local_58[lVar6 * 7 + 1] = L"FRigElementKeyCollection";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc09608;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_HierarchyGetChainItemArray::Execute",FUN_14923f2fc,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc09608;
}



// FUNCTION 1466eaad4 FUN_1466eaad4 body=47 status=ok
// SIG undefined FUN_1466eaad4(void)

longlong FUN_1466eaad4(void)

{
  if (DAT_14cc09600 == 0) {
    FUN_14086a14e(&DAT_14cc09600,&PTR_FUN_14bbad098);
  }
  return DAT_14cc09600;
}



// FUNCTION 1466eab04 FUN_1466eab04 body=48 status=ok
// SIG undefined FUN_1466eab04(void)

void FUN_1466eab04(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000088;
  *puVar1 = &PTR_FUN_14bbe8be0;
  return;
}



// FUNCTION 1466eab34 FUN_1466eab34 body=581 status=ok
// SIG undefined FUN_1466eab34(void)

longlong FUN_1466eab34(void)

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
  if (DAT_14cc09620 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc09620 = FUN_140002ddd(FUN_1466ead7a,uVar4,L"RigUnit_HierarchyGetPose");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"Initial";
    local_58[1] = L"bool";
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
    local_58[lVar6 * 7] = L"ElementType";
    local_58[lVar6 * 7 + 1] = L"ERigElementType";
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
    local_58[lVar6 * 7] = L"ItemsToGet";
    local_58[lVar6 * 7 + 1] = L"FRigElementKeyCollection";
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
    local_58[lVar6 * 7] = L"Pose";
    local_58[lVar6 * 7 + 1] = L"FRigPose";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc09620;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_HierarchyGetPose::Execute",FUN_14923f4de,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc09620;
}



// FUNCTION 1466ead7a FUN_1466ead7a body=47 status=ok
// SIG undefined FUN_1466ead7a(void)

longlong FUN_1466ead7a(void)

{
  if (DAT_14cc09618 == 0) {
    FUN_14086a14e(&DAT_14cc09618,&PTR_FUN_14bbad318);
  }
  return DAT_14cc09618;
}



// FUNCTION 1466eadaa FUN_1466eadaa body=48 status=ok
// SIG undefined FUN_1466eadaa(void)

void FUN_1466eadaa(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000090;
  *puVar1 = &PTR_FUN_14bbe8d40;
  return;
}



// FUNCTION 1466eadda FUN_1466eadda body=581 status=ok
// SIG undefined FUN_1466eadda(void)

longlong FUN_1466eadda(void)

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
  if (DAT_14cc09638 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc09638 = FUN_140002ddd(FUN_1466eb020,uVar4,L"RigUnit_HierarchyGetPoseItemArray");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"Initial";
    local_58[1] = L"bool";
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
    local_58[lVar6 * 7] = L"ElementType";
    local_58[lVar6 * 7 + 1] = L"ERigElementType";
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
    local_58[lVar6 * 7] = L"ItemsToGet";
    local_58[lVar6 * 7 + 1] = L"TArray<FRigElementKey>";
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
    local_58[lVar6 * 7] = L"Pose";
    local_58[lVar6 * 7 + 1] = L"FRigPose";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc09638;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_HierarchyGetPoseItemArray::Execute",FUN_14923f660,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc09638;
}



// FUNCTION 1466eb020 FUN_1466eb020 body=47 status=ok
// SIG undefined FUN_1466eb020(void)

longlong FUN_1466eb020(void)

{
  if (DAT_14cc09630 == 0) {
    FUN_14086a14e(&DAT_14cc09630,&PTR_FUN_14bbad5c8);
  }
  return DAT_14cc09630;
}



// FUNCTION 1466eb050 FUN_1466eb050 body=48 status=ok
// SIG undefined FUN_1466eb050(void)

void FUN_1466eb050(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000090;
  *puVar1 = &PTR_FUN_14bbe8f30;
  return;
}



// FUNCTION 1466eb080 FUN_1466eb080 body=661 status=ok
// SIG undefined FUN_1466eb080(void)

longlong FUN_1466eb080(void)

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
  if (DAT_14cc09650 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc09650 = FUN_140002ddd(FUN_1466eb316,uVar4,L"RigUnit_HierarchySetPose");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"Pose";
    local_58[1] = L"FRigPose";
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
    local_58[lVar6 * 7] = L"ElementType";
    local_58[lVar6 * 7 + 1] = L"ERigElementType";
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
    local_58[lVar6 * 7] = L"Space";
    local_58[lVar6 * 7 + 1] = L"ERigVMTransformSpace";
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
    local_58[lVar6 * 7] = L"ItemsToSet";
    local_58[lVar6 * 7 + 1] = L"FRigElementKeyCollection";
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
    lVar6 = DAT_14cc09650;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_HierarchySetPose::Execute",FUN_14923f802,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc09650;
}



// FUNCTION 1466eb316 FUN_1466eb316 body=47 status=ok
// SIG undefined FUN_1466eb316(void)

longlong FUN_1466eb316(void)

{
  if (DAT_14cc09648 == 0) {
    FUN_14086a14e(&DAT_14cc09648,&PTR_FUN_14bbad8b8);
  }
  return DAT_14cc09648;
}



// FUNCTION 1466eb346 FUN_1466eb346 body=48 status=ok
// SIG undefined FUN_1466eb346(void)

void FUN_1466eb346(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000280;
  *puVar1 = &PTR_FUN_14bbe9090;
  return;
}



// FUNCTION 1466eb376 FUN_1466eb376 body=661 status=ok
// SIG undefined FUN_1466eb376(void)

longlong FUN_1466eb376(void)

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
  if (DAT_14cc09668 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc09668 = FUN_140002ddd(FUN_1466eb60c,uVar4,L"RigUnit_HierarchySetPoseItemArray");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"Pose";
    local_58[1] = L"FRigPose";
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
    local_58[lVar6 * 7] = L"ElementType";
    local_58[lVar6 * 7 + 1] = L"ERigElementType";
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
    local_58[lVar6 * 7] = L"Space";
    local_58[lVar6 * 7 + 1] = L"ERigVMTransformSpace";
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
    local_58[lVar6 * 7] = L"ItemsToSet";
    local_58[lVar6 * 7 + 1] = L"TArray<FRigElementKey>";
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
    lVar6 = DAT_14cc09668;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_HierarchySetPoseItemArray::Execute",FUN_14923f932,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc09668;
}



// FUNCTION 1466eb60c FUN_1466eb60c body=47 status=ok
// SIG undefined FUN_1466eb60c(void)

longlong FUN_1466eb60c(void)

{
  if (DAT_14cc09660 == 0) {
    FUN_14086a14e(&DAT_14cc09660,&PTR_FUN_14bbadbe8);
  }
  return DAT_14cc09660;
}



// FUNCTION 1466eb63c FUN_1466eb63c body=48 status=ok
// SIG undefined FUN_1466eb63c(void)

void FUN_1466eb63c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000280;
  *puVar1 = &PTR_FUN_14bbe9280;
  return;
}



// FUNCTION 1466eb66c FUN_1466eb66c body=406 status=ok
// SIG undefined FUN_1466eb66c(void)

longlong FUN_1466eb66c(void)

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
  if (DAT_14cc09680 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc09680 = FUN_140002ddd(FUN_1466eb803,uVar4,L"RigUnit_PoseIsEmpty");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (int)uStack_50;
    *local_58 = L"Pose";
    local_58[1] = L"FRigPose";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar6 = (longlong)(int)uStack_50;
    uVar3 = (int)uStack_50 + 1;
    uStack_50 = CONCAT44(uStack_50._4_4_,uVar3);
    if (uStack_50._4_4_ < uVar3) {
      FUN_140c0351c(&local_58,iVar2);
    }
    local_58[lVar6 * 7] = L"IsEmpty";
    local_58[lVar6 * 7 + 1] = L"bool";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc09680;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_PoseIsEmpty::Execute",&LAB_14923fa60,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc09680;
}



// FUNCTION 1466eb803 FUN_1466eb803 body=47 status=ok
// SIG undefined FUN_1466eb803(void)

longlong FUN_1466eb803(void)

{
  if (DAT_14cc09678 == 0) {
    FUN_14086a14e(&DAT_14cc09678,&PTR_FUN_14bbadd48);
  }
  return DAT_14cc09678;
}



// FUNCTION 1466eb832 FUN_1466eb832 body=48 status=ok
// SIG undefined FUN_1466eb832(void)

void FUN_1466eb832(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000080;
  *puVar1 = &PTR_FUN_14bbe93e0;
  return;
}



// FUNCTION 1466eb862 FUN_1466eb862 body=495 status=ok
// SIG undefined FUN_1466eb862(void)

longlong FUN_1466eb862(void)

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
  if (DAT_14cc09698 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc09698 = FUN_140002ddd(FUN_1466eba52,uVar4,L"RigUnit_PoseGetItems");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"Pose";
    local_58[1] = L"FRigPose";
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
    local_58[lVar6 * 7] = L"ElementType";
    local_58[lVar6 * 7 + 1] = L"ERigElementType";
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
    local_58[lVar6 * 7] = L"Items";
    local_58[lVar6 * 7 + 1] = L"FRigElementKeyCollection";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc09698;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_PoseGetItems::Execute",&LAB_14923fae0,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc09698;
}



// FUNCTION 1466eba52 FUN_1466eba52 body=47 status=ok
// SIG undefined FUN_1466eba52(void)

longlong FUN_1466eba52(void)

{
  if (DAT_14cc09690 == 0) {
    FUN_14086a14e(&DAT_14cc09690,&PTR_FUN_14bbadf28);
  }
  return DAT_14cc09690;
}



// FUNCTION 1466eba82 FUN_1466eba82 body=48 status=ok
// SIG undefined FUN_1466eba82(void)

void FUN_1466eba82(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000090;
  *puVar1 = &PTR_FUN_14bbe95d0;
  return;
}



// FUNCTION 1466ebab2 FUN_1466ebab2 body=495 status=ok
// SIG undefined FUN_1466ebab2(void)

longlong FUN_1466ebab2(void)

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
  if (DAT_14cc096b0 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc096b0 = FUN_140002ddd(FUN_1466ebca2,uVar4,L"RigUnit_PoseGetItemsItemArray");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"Pose";
    local_58[1] = L"FRigPose";
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
    local_58[lVar6 * 7] = L"ElementType";
    local_58[lVar6 * 7 + 1] = L"ERigElementType";
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
    local_58[lVar6 * 7] = L"Items";
    local_58[lVar6 * 7 + 1] = L"TArray<FRigElementKey>";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc096b0;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_PoseGetItemsItemArray::Execute",&LAB_14923fb6c,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc096b0;
}



// FUNCTION 1466ebca2 FUN_1466ebca2 body=47 status=ok
// SIG undefined FUN_1466ebca2(void)

longlong FUN_1466ebca2(void)

{
  if (DAT_14cc096a8 == 0) {
    FUN_14086a14e(&DAT_14cc096a8,&PTR_FUN_14bbae178);
  }
  return DAT_14cc096a8;
}



// FUNCTION 1466ebcd2 FUN_1466ebcd2 body=48 status=ok
// SIG undefined FUN_1466ebcd2(void)

void FUN_1466ebcd2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000090;
  *puVar1 = &PTR_FUN_14bbe97c0;
  return;
}



// FUNCTION 1466ebd02 FUN_1466ebd02 body=1151 status=ok
// SIG undefined FUN_1466ebd02(void)

longlong FUN_1466ebd02(void)

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
  if (DAT_14cc096c8 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc096c8 = FUN_140002ddd(FUN_1466ec182,uVar4,L"RigUnit_PoseGetDelta");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"PoseA";
    local_58[1] = L"FRigPose";
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
    local_58[lVar6 * 7] = L"PoseB";
    local_58[lVar6 * 7 + 1] = L"FRigPose";
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
    local_58[lVar6 * 7] = L"PositionThreshold";
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
    local_58[lVar6 * 7] = L"RotationThreshold";
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
    local_58[lVar6 * 7] = L"ScaleThreshold";
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
    local_58[lVar6 * 7] = L"CurveThreshold";
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
    local_58[lVar6 * 7] = L"ElementType";
    local_58[lVar6 * 7 + 1] = L"ERigElementType";
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
    local_58[lVar6 * 7] = L"Space";
    local_58[lVar6 * 7 + 1] = L"ERigVMTransformSpace";
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
    local_58[lVar6 * 7] = L"ItemsToCompare";
    local_58[lVar6 * 7 + 1] = L"FRigElementKeyCollection";
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
    local_58[lVar6 * 7] = L"PosesAreEqual";
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
    local_58[lVar6 * 7] = L"ItemsWithDelta";
    local_58[lVar6 * 7 + 1] = L"FRigElementKeyCollection";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc096c8;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_PoseGetDelta::Execute",FUN_14923fc96,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc096c8;
}



// FUNCTION 1466ec182 FUN_1466ec182 body=47 status=ok
// SIG undefined FUN_1466ec182(void)

longlong FUN_1466ec182(void)

{
  if (DAT_14cc096c0 == 0) {
    FUN_14086a14e(&DAT_14cc096c0,&PTR_FUN_14bbae730);
  }
  return DAT_14cc096c0;
}



// FUNCTION 1466ec1b2 FUN_1466ec1b2 body=48 status=ok
// SIG undefined FUN_1466ec1b2(void)

void FUN_1466ec1b2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000128;
  *puVar1 = &PTR_FUN_14bbe9920;
  return;
}



// FUNCTION 1466ec1e2 FUN_1466ec1e2 body=915 status=ok
// SIG undefined FUN_1466ec1e2(void)

longlong FUN_1466ec1e2(void)

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
  if (DAT_14cc096e0 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc096e0 = FUN_140002ddd(FUN_1466ec576,uVar4,L"RigUnit_PoseGetTransform");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"Pose";
    local_58[1] = L"FRigPose";
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
    local_58[lVar6 * 7] = L"Item";
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
    local_58[lVar6 * 7] = L"Space";
    local_58[lVar6 * 7 + 1] = L"ERigVMTransformSpace";
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
    local_58[lVar6 * 7] = L"Valid";
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
    local_58[lVar6 * 7] = L"Transform";
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
    local_58[lVar6 * 7] = L"CurveValue";
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
    local_58[lVar6 * 7] = L"CachedPoseElementIndex";
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
    local_58[lVar6 * 7] = L"CachedPoseHash";
    local_58[lVar6 * 7 + 1] = L"int32";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc096e0;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_PoseGetTransform::Execute",FUN_14924045e,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc096e0;
}



// FUNCTION 1466ec576 FUN_1466ec576 body=47 status=ok
// SIG undefined FUN_1466ec576(void)

longlong FUN_1466ec576(void)

{
  if (DAT_14cc096d8 == 0) {
    FUN_14086a14e(&DAT_14cc096d8,&PTR_FUN_14bbaeb08);
  }
  return DAT_14cc096d8;
}



// FUNCTION 1466ec5a6 FUN_1466ec5a6 body=48 status=ok
// SIG undefined FUN_1466ec5a6(void)

void FUN_1466ec5a6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000100;
  *puVar1 = &PTR_FUN_14bbe9b10;
  return;
}



// FUNCTION 1466ec5d6 FUN_1466ec5d6 body=581 status=ok
// SIG undefined FUN_1466ec5d6(void)

longlong FUN_1466ec5d6(void)

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
  if (DAT_14cc096f8 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc096f8 = FUN_140002ddd(FUN_1466ec81c,uVar4,L"RigUnit_PoseGetTransformArray");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"Pose";
    local_58[1] = L"FRigPose";
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
    local_58[lVar6 * 7] = L"Space";
    local_58[lVar6 * 7 + 1] = L"ERigVMTransformSpace";
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
    local_58[lVar6 * 7] = L"Valid";
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
    local_58[lVar6 * 7] = L"Transforms";
    local_58[lVar6 * 7 + 1] = L"TArray<FTransform>";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc096f8;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_PoseGetTransformArray::Execute",&LAB_149240690,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc096f8;
}



// FUNCTION 1466ec81c FUN_1466ec81c body=47 status=ok
// SIG undefined FUN_1466ec81c(void)

longlong FUN_1466ec81c(void)

{
  if (DAT_14cc096f0 == 0) {
    FUN_14086a14e(&DAT_14cc096f0,&PTR_FUN_14bbaeda0);
  }
  return DAT_14cc096f0;
}



// FUNCTION 1466ec84c FUN_1466ec84c body=48 status=ok
// SIG undefined FUN_1466ec84c(void)

void FUN_1466ec84c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000090;
  *puVar1 = &PTR_FUN_14bbe9d00;
  return;
}



// FUNCTION 1466ec87c FUN_1466ec87c body=740 status=ok
// SIG undefined FUN_1466ec87c(void)

longlong FUN_1466ec87c(void)

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
  if (DAT_14cc09710 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc09710 = FUN_140002ddd(FUN_1466ecb61,uVar4,L"RigUnit_PoseGetCurve");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"Pose";
    local_58[1] = L"FRigPose";
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
    local_58[lVar6 * 7] = L"Curve";
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
    local_58[lVar6 * 7] = L"Valid";
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
    local_58[lVar6 * 7] = L"CurveValue";
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
    local_58[lVar6 * 7] = L"CachedPoseElementIndex";
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
    local_58[lVar6 * 7] = L"CachedPoseHash";
    local_58[lVar6 * 7 + 1] = L"int32";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc09710;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_PoseGetCurve::Execute",FUN_1492407f4,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc09710;
}



// FUNCTION 1466ecb61 FUN_1466ecb61 body=47 status=ok
// SIG undefined FUN_1466ecb61(void)

longlong FUN_1466ecb61(void)

{
  if (DAT_14cc09708 == 0) {
    FUN_14086a14e(&DAT_14cc09708,&PTR_FUN_14bbaefe8);
  }
  return DAT_14cc09708;
}



// FUNCTION 1466ecb90 FUN_1466ecb90 body=48 status=ok
// SIG undefined FUN_1466ecb90(void)

void FUN_1466ecb90(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000090;
  *puVar1 = &PTR_FUN_14bbe9ef0;
  return;
}



// FUNCTION 1466ecbc0 FUN_1466ecbc0 body=994 status=ok
// SIG undefined FUN_1466ecbc0(void)

longlong FUN_1466ecbc0(void)

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
  if (DAT_14cc09728 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc09728 = FUN_140002ddd(FUN_1466ecfa3,uVar4,L"RigUnit_PoseLoop");
    local_68 = (undefined8 *)0x0;
    uStack_60._0_4_ = 1;
    uStack_60._4_4_ = 0;
    FUN_140c0351c(&local_68,0);
    iVar2 = (uint)uStack_60;
    *local_68 = L"BlockToRun";
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
    local_68[lVar6 * 7] = L"Pose";
    local_68[lVar6 * 7 + 1] = L"FRigPose";
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
    local_68[lVar6 * 7] = L"Item";
    local_68[lVar6 * 7 + 1] = L"FRigElementKey";
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
    local_68[lVar6 * 7] = L"GlobalTransform";
    local_68[lVar6 * 7 + 1] = L"FTransform";
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
    local_68[lVar6 * 7] = L"LocalTransform";
    local_68[lVar6 * 7 + 1] = L"FTransform";
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
    local_68[lVar6 * 7] = L"CurveValue";
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
    local_68[lVar6 * 7] = L"Index";
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
    local_68[lVar6 * 7] = L"Count";
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
    local_68[lVar6 * 7] = L"Ratio";
    local_68[lVar6 * 7 + 1] = L"float";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc09728;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_PoseLoop::Execute",FUN_1492409f4,lVar6);
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
  return DAT_14cc09728;
}



// FUNCTION 1466ecfa3 FUN_1466ecfa3 body=47 status=ok
// SIG undefined FUN_1466ecfa3(void)

longlong FUN_1466ecfa3(void)

{
  if (DAT_14cc09720 == 0) {
    FUN_14086a14e(&DAT_14cc09720,&PTR_FUN_14bbaf358);
  }
  return DAT_14cc09720;
}



// FUNCTION 1466ecfd2 FUN_1466ecfd2 body=48 status=ok
// SIG undefined FUN_1466ecfd2(void)

void FUN_1466ecfd2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000530;
  *puVar1 = &PTR_FUN_14bbea0e0;
  return;
}



// FUNCTION 1466ed002 FUN_1466ed002 body=55 status=ok
// SIG undefined FUN_1466ed002(void)

void FUN_1466ed002(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc09740 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc09740 = FUN_140002ddd(FUN_1466ed039,uVar1,L"RigUnit_HierarchyCreatePoseItemArray_Entry")
    ;
  }
  return;
}



// FUNCTION 1466ed039 FUN_1466ed039 body=47 status=ok
// SIG undefined FUN_1466ed039(void)

longlong FUN_1466ed039(void)

{
  if (DAT_14cc09738 == 0) {
    FUN_14086a14e(&DAT_14cc09738,&PTR_FUN_14bbaf5e0);
  }
  return DAT_14cc09738;
}



// FUNCTION 1466ed068 FUN_1466ed068 body=48 status=ok
// SIG undefined FUN_1466ed068(void)

void FUN_1466ed068(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000100;
  *puVar1 = &PTR_FUN_14bbea2d0;
  return;
}



// FUNCTION 1466ed098 FUN_1466ed098 body=406 status=ok
// SIG undefined FUN_1466ed098(void)

longlong FUN_1466ed098(void)

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
  if (DAT_14cc09758 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc09758 = FUN_140002ddd(FUN_1466ed22f,uVar4,L"RigUnit_HierarchyCreatePoseItemArray");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (int)uStack_50;
    *local_58 = L"Entries";
    local_58[1] = L"TArray<FRigUnit_HierarchyCreatePoseItemArray_Entry>";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar6 = (longlong)(int)uStack_50;
    uVar3 = (int)uStack_50 + 1;
    uStack_50 = CONCAT44(uStack_50._4_4_,uVar3);
    if (uStack_50._4_4_ < uVar3) {
      FUN_140c0351c(&local_58,iVar2);
    }
    local_58[lVar6 * 7] = L"Pose";
    local_58[lVar6 * 7 + 1] = L"FRigPose";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc09758;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_HierarchyCreatePoseItemArray::Execute",FUN_149240c68,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc09758;
}



// FUNCTION 1466ed22f FUN_1466ed22f body=47 status=ok
// SIG undefined FUN_1466ed22f(void)

longlong FUN_1466ed22f(void)

{
  if (DAT_14cc09750 == 0) {
    FUN_14086a14e(&DAT_14cc09750,&PTR_FUN_14bbaf820);
  }
  return DAT_14cc09750;
}



// FUNCTION 1466ed25e FUN_1466ed25e body=48 status=ok
// SIG undefined FUN_1466ed25e(void)

void FUN_1466ed25e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000088;
  *puVar1 = &PTR_FUN_14bbea430;
  return;
}



// FUNCTION 1466ed28e FUN_1466ed28e body=259 status=ok
// SIG undefined FUN_1466ed28e(void)

longlong FUN_1466ed28e(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_48;
  ulonglong uStack_40;
  longlong local_30;
  undefined2 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cc09770 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc09770 = FUN_140002ddd(FUN_1466ed392,uVar4,L"RigUnit_InteractionExecution");
    local_48 = 0;
    uStack_40 = 0;
    lVar5 = FUN_14001a7b2();
    lVar3 = DAT_14cc09770;
    local_28 = 0x101;
    local_30 = lVar5;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x3a0));
    LOCK();
    piVar1 = (int *)(lVar5 + 0x3ac);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (iVar2 == 0) {
      LOCK();
      *(undefined1 *)(local_30 + 0x3a8) = (undefined1)local_28;
      UNLOCK();
    }
    local_58 = &local_48;
    FUN_1446f2f9a(lVar5,L"FRigUnit_InteractionExecution::Execute",FUN_149241f0a,lVar3);
    FUN_1409be446(&local_30);
    FUN_140e03040(local_48,uStack_40 & 0xffffffff);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc09770;
}



// FUNCTION 1466ed392 FUN_1466ed392 body=47 status=ok
// SIG undefined FUN_1466ed392(void)

longlong FUN_1466ed392(void)

{
  if (DAT_14cc09768 == 0) {
    FUN_14086a14e(&DAT_14cc09768,&PTR_FUN_14bbafce8);
  }
  return DAT_14cc09768;
}



// FUNCTION 1466ed3c2 FUN_1466ed3c2 body=48 status=ok
// SIG undefined FUN_1466ed3c2(void)

void FUN_1466ed3c2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000001f0;
  *puVar1 = &PTR_FUN_14bbea8f0;
  return;
}



// FUNCTION 1466ed3f2 FUN_1466ed3f2 body=259 status=ok
// SIG undefined FUN_1466ed3f2(void)

longlong FUN_1466ed3f2(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_48;
  ulonglong uStack_40;
  longlong local_30;
  undefined2 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cc09788 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc09788 = FUN_140002ddd(FUN_1466ed4f6,uVar4,L"RigUnit_InverseExecution");
    local_48 = 0;
    uStack_40 = 0;
    lVar5 = FUN_14001a7b2();
    lVar3 = DAT_14cc09788;
    local_28 = 0x101;
    local_30 = lVar5;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x3a0));
    LOCK();
    piVar1 = (int *)(lVar5 + 0x3ac);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (iVar2 == 0) {
      LOCK();
      *(undefined1 *)(local_30 + 0x3a8) = (undefined1)local_28;
      UNLOCK();
    }
    local_58 = &local_48;
    FUN_1446f2f9a(lVar5,L"FRigUnit_InverseExecution::Execute",FUN_149241fbc,lVar3);
    FUN_1409be446(&local_30);
    FUN_140e03040(local_48,uStack_40 & 0xffffffff);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc09788;
}



// FUNCTION 1466ed4f6 FUN_1466ed4f6 body=47 status=ok
// SIG undefined FUN_1466ed4f6(void)

longlong FUN_1466ed4f6(void)

{
  if (DAT_14cc09780 == 0) {
    FUN_14086a14e(&DAT_14cc09780,&PTR_FUN_14bbafe28);
  }
  return DAT_14cc09780;
}



// FUNCTION 1466ed526 FUN_1466ed526 body=48 status=ok
// SIG undefined FUN_1466ed526(void)

void FUN_1466ed526(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000001f0;
  *puVar1 = &PTR_FUN_14bbeaae0;
  return;
}



// FUNCTION 1466ed556 FUN_1466ed556 body=640 status=ok
// SIG undefined FUN_1466ed556(void)

longlong FUN_1466ed556(void)

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
  if (DAT_14cc097a0 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc097a0 = FUN_140002ddd(FUN_1466ed7d7,uVar4,L"RigUnit_IsInteracting");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"bIsInteracting";
    local_58[1] = L"bool";
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
    local_58[lVar6 * 7] = L"bIsTranslating";
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
    local_58[lVar6 * 7] = L"bIsRotating";
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
    local_58[lVar6 * 7] = L"bIsScaling";
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
    local_58[lVar6 * 7] = L"Items";
    local_58[lVar6 * 7 + 1] = L"TArray<FRigElementKey>";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc097a0;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_IsInteracting::Execute",&LAB_14924206e,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc097a0;
}



// FUNCTION 1466ed7d7 FUN_1466ed7d7 body=47 status=ok
// SIG undefined FUN_1466ed7d7(void)

longlong FUN_1466ed7d7(void)

{
  if (DAT_14cc09798 == 0) {
    FUN_14086a14e(&DAT_14cc09798,&PTR_FUN_14bbb0168);
  }
  return DAT_14cc09798;
}



// FUNCTION 1466ed806 FUN_1466ed806 body=48 status=ok
// SIG undefined FUN_1466ed806(void)

void FUN_1466ed806(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14bbeacd0;
  return;
}



// FUNCTION 1466ed836 FUN_1466ed836 body=55 status=ok
// SIG undefined FUN_1466ed836(void)

void FUN_1466ed836(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc097b8 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc097b8 = FUN_140002ddd(FUN_1466ed86d,uVar1,L"RigUnit_ItemBase");
  }
  return;
}



// FUNCTION 1466ed86d FUN_1466ed86d body=49 status=ok
// SIG undefined FUN_1466ed86d(void)

longlong FUN_1466ed86d(void)

{
  if (DAT_14cc097b0 == 0) {
    FUN_14086a14e(&DAT_14cc097b0,&PTR_FUN_14bbb0200);
  }
  return DAT_14cc097b0;
}



// FUNCTION 1466ed89e FUN_1466ed89e body=48 status=ok
// SIG undefined FUN_1466ed89e(void)

void FUN_1466ed89e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14bbeaec0;
  return;
}



// FUNCTION 1466ed8ce FUN_1466ed8ce body=55 status=ok
// SIG undefined FUN_1466ed8ce(void)

void FUN_1466ed8ce(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc097d0 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc097d0 = FUN_140002ddd(FUN_1466ed905,uVar1,L"RigUnit_ItemBaseMutable");
  }
  return;
}



// FUNCTION 1466ed905 FUN_1466ed905 body=47 status=ok
// SIG undefined FUN_1466ed905(void)

longlong FUN_1466ed905(void)

{
  if (DAT_14cc097c8 == 0) {
    FUN_14086a14e(&DAT_14cc097c8,&PTR_FUN_14bbb0280);
  }
  return DAT_14cc097c8;
}



// FUNCTION 1466ed934 FUN_1466ed934 body=48 status=ok
// SIG undefined FUN_1466ed934(void)

void FUN_1466ed934(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000001f0;
  *puVar1 = &PTR_FUN_14bbeb0b0;
  return;
}



// FUNCTION 1466ed964 FUN_1466ed964 body=495 status=ok
// SIG undefined FUN_1466ed964(void)

longlong FUN_1466ed964(void)

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
  if (DAT_14cc097e8 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc097e8 = FUN_140002ddd(FUN_1466edb54,uVar4,L"RigUnit_ItemExists");
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
    local_58[lVar6 * 7] = L"Exists";
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
    local_58[lVar6 * 7] = L"CachedIndex";
    local_58[lVar6 * 7 + 1] = L"FCachedRigElement";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc097e8;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_ItemExists::Execute",FUN_1492421ce,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc097e8;
}



// FUNCTION 1466edb54 FUN_1466edb54 body=47 status=ok
// SIG undefined FUN_1466edb54(void)

longlong FUN_1466edb54(void)

{
  if (DAT_14cc097e0 == 0) {
    FUN_14086a14e(&DAT_14cc097e0,&PTR_FUN_14bbb0450);
  }
  return DAT_14cc097e0;
}



// FUNCTION 1466edb84 FUN_1466edb84 body=48 status=ok
// SIG undefined FUN_1466edb84(void)

void FUN_1466edb84(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14bbeb2a0;
  return;
}



// FUNCTION 1466edbb4 FUN_1466edbb4 body=571 status=ok
// SIG undefined FUN_1466edbb4(void)

longlong FUN_1466edbb4(void)

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
  if (DAT_14cc09800 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc09800 = FUN_140002ddd(FUN_1466eddf0,uVar4,L"RigUnit_ItemReplace");
    local_68 = (undefined8 *)0x0;
    uStack_60._0_4_ = 1;
    uStack_60._4_4_ = 0;
    FUN_140c0351c(&local_68,0);
    iVar2 = (uint)uStack_60;
    *local_68 = L"Item";
    local_68[1] = L"FRigElementKey";
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
    local_68[lVar6 * 7] = &DAT_149f20826;
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
    local_68[lVar6 * 7] = &DAT_149f2082e;
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
    local_68[lVar6 * 7] = L"Result";
    local_68[lVar6 * 7 + 1] = L"FRigElementKey";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc09800;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_ItemReplace::Execute",FUN_1492422ac,lVar6);
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
  return DAT_14cc09800;
}



// FUNCTION 1466eddf0 FUN_1466eddf0 body=47 status=ok
// SIG undefined FUN_1466eddf0(void)

longlong FUN_1466eddf0(void)

{
  if (DAT_14cc097f8 == 0) {
    FUN_14086a14e(&DAT_14cc097f8,&PTR_FUN_14bbb0618);
  }
  return DAT_14cc097f8;
}



// FUNCTION 1466ede20 FUN_1466ede20 body=48 status=ok
// SIG undefined FUN_1466ede20(void)

void FUN_1466ede20(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14bbeb490;
  return;
}



// FUNCTION 1466ede50 FUN_1466ede50 body=488 status=ok
// SIG undefined FUN_1466ede50(void)

longlong FUN_1466ede50(void)

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
  if (DAT_14cc09818 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc09818 = FUN_140002ddd(FUN_1466ee039,uVar4,L"RigUnit_ItemEquals");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
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
    local_58[lVar6 * 7] = &DAT_149e060e8;
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
    local_58[lVar6 * 7] = L"Result";
    local_58[lVar6 * 7 + 1] = L"bool";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc09818;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_ItemEquals::Execute",&LAB_14924237e,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc09818;
}



// FUNCTION 1466ee039 FUN_1466ee039 body=47 status=ok
// SIG undefined FUN_1466ee039(void)

longlong FUN_1466ee039(void)

{
  if (DAT_14cc09810 == 0) {
    FUN_14086a14e(&DAT_14cc09810,&PTR_FUN_14bbb07a0);
  }
  return DAT_14cc09810;
}



// FUNCTION 1466ee068 FUN_1466ee068 body=48 status=ok
// SIG undefined FUN_1466ee068(void)

void FUN_1466ee068(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14bbeb680;
  return;
}



// FUNCTION 1466ee098 FUN_1466ee098 body=488 status=ok
// SIG undefined FUN_1466ee098(void)

longlong FUN_1466ee098(void)

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
  if (DAT_14cc09830 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc09830 = FUN_140002ddd(FUN_1466ee281,uVar4,L"RigUnit_ItemNotEquals");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
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
    local_58[lVar6 * 7] = &DAT_149e060e8;
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
    local_58[lVar6 * 7] = L"Result";
    local_58[lVar6 * 7 + 1] = L"bool";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc09830;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_ItemNotEquals::Execute",&LAB_149242424,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc09830;
}



// FUNCTION 1466ee281 FUN_1466ee281 body=47 status=ok
// SIG undefined FUN_1466ee281(void)

longlong FUN_1466ee281(void)

{
  if (DAT_14cc09828 == 0) {
    FUN_14086a14e(&DAT_14cc09828,&PTR_FUN_14bbb0940);
  }
  return DAT_14cc09828;
}



// FUNCTION 1466ee2b0 FUN_1466ee2b0 body=48 status=ok
// SIG undefined FUN_1466ee2b0(void)

void FUN_1466ee2b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14bbeb870;
  return;
}



// FUNCTION 1466ee2e0 FUN_1466ee2e0 body=488 status=ok
// SIG undefined FUN_1466ee2e0(void)

longlong FUN_1466ee2e0(void)

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
  if (DAT_14cc09848 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc09848 = FUN_140002ddd(FUN_1466ee4c9,uVar4,L"RigUnit_ItemTypeEquals");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
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
    local_58[lVar6 * 7] = &DAT_149e060e8;
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
    local_58[lVar6 * 7] = L"Result";
    local_58[lVar6 * 7 + 1] = L"bool";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc09848;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_ItemTypeEquals::Execute",&LAB_1492424ca,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc09848;
}



// FUNCTION 1466ee4c9 FUN_1466ee4c9 body=47 status=ok
// SIG undefined FUN_1466ee4c9(void)

longlong FUN_1466ee4c9(void)

{
  if (DAT_14cc09840 == 0) {
    FUN_14086a14e(&DAT_14cc09840,&PTR_FUN_14bbb0ae0);
  }
  return DAT_14cc09840;
}



// FUNCTION 1466ee4f8 FUN_1466ee4f8 body=48 status=ok
// SIG undefined FUN_1466ee4f8(void)

void FUN_1466ee4f8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14bbeba60;
  return;
}



// FUNCTION 1466ee528 FUN_1466ee528 body=488 status=ok
// SIG undefined FUN_1466ee528(void)

longlong FUN_1466ee528(void)

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
  if (DAT_14cc09860 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc09860 = FUN_140002ddd(FUN_1466ee711,uVar4,L"RigUnit_ItemTypeNotEquals");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = &DAT_149e71d50;
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
    local_58[lVar6 * 7] = &DAT_149e060e8;
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
    local_58[lVar6 * 7] = L"Result";
    local_58[lVar6 * 7 + 1] = L"bool";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc09860;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_ItemTypeNotEquals::Execute",&LAB_149242550,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc09860;
}



// FUNCTION 1466ee711 FUN_1466ee711 body=47 status=ok
// SIG undefined FUN_1466ee711(void)

longlong FUN_1466ee711(void)

{
  if (DAT_14cc09858 == 0) {
    FUN_14086a14e(&DAT_14cc09858,&PTR_FUN_14bbb0c98);
  }
  return DAT_14cc09858;
}



// FUNCTION 1466ee740 FUN_1466ee740 body=48 status=ok
// SIG undefined FUN_1466ee740(void)

void FUN_1466ee740(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14bbebc50;
  return;
}



// FUNCTION 1466ee770 FUN_1466ee770 body=406 status=ok
// SIG undefined FUN_1466ee770(void)

longlong FUN_1466ee770(void)

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
  if (DAT_14cc09878 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc09878 = FUN_140002ddd(FUN_1466ee907,uVar4,L"RigUnit_ItemToName");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (int)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"FRigElementKey";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar6 = (longlong)(int)uStack_50;
    uVar3 = (int)uStack_50 + 1;
    uStack_50 = CONCAT44(uStack_50._4_4_,uVar3);
    if (uStack_50._4_4_ < uVar3) {
      FUN_140c0351c(&local_58,iVar2);
    }
    local_58[lVar6 * 7] = L"Result";
    local_58[lVar6 * 7 + 1] = L"FName";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc09878;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_ItemToName::Execute",&LAB_1492425d6,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc09878;
}



// FUNCTION 1466ee907 FUN_1466ee907 body=47 status=ok
// SIG undefined FUN_1466ee907(void)

longlong FUN_1466ee907(void)

{
  if (DAT_14cc09870 == 0) {
    FUN_14086a14e(&DAT_14cc09870,&PTR_FUN_14bbb0dd8);
  }
  return DAT_14cc09870;
}



// FUNCTION 1466ee936 FUN_1466ee936 body=48 status=ok
// SIG undefined FUN_1466ee936(void)

void FUN_1466ee936(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14bbebe40;
  return;
}



// FUNCTION 1466ee966 FUN_1466ee966 body=406 status=ok
// SIG undefined FUN_1466ee966(void)

longlong FUN_1466ee966(void)

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
  if (DAT_14cc09890 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc09890 = FUN_140002ddd(FUN_1466eeafd,uVar4,L"RigUnit_HierarchyAddPhysicsSolver");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (int)uStack_50;
    *local_58 = L"Name";
    local_58[1] = L"FName";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar6 = (longlong)(int)uStack_50;
    uVar3 = (int)uStack_50 + 1;
    uStack_50 = CONCAT44(uStack_50._4_4_,uVar3);
    if (uStack_50._4_4_ < uVar3) {
      FUN_140c0351c(&local_58,iVar2);
    }
    local_58[lVar6 * 7] = L"Solver";
    local_58[lVar6 * 7 + 1] = L"FRigPhysicsSolverID";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc09890;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_HierarchyAddPhysicsSolver::Execute",&LAB_14924271e,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc09890;
}



// FUNCTION 1466eeafd FUN_1466eeafd body=47 status=ok
// SIG undefined FUN_1466eeafd(void)

longlong FUN_1466eeafd(void)

{
  if (DAT_14cc09888 == 0) {
    FUN_14086a14e(&DAT_14cc09888,&PTR_FUN_14bbb10f8);
  }
  return DAT_14cc09888;
}



// FUNCTION 1466eeb2c FUN_1466eeb2c body=48 status=ok
// SIG undefined FUN_1466eeb2c(void)

void FUN_1466eeb2c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000210;
  *puVar1 = &PTR_FUN_14bbec030;
  return;
}



// FUNCTION 1466eeb5c FUN_1466eeb5c body=740 status=ok
// SIG undefined FUN_1466eeb5c(void)

longlong FUN_1466eeb5c(void)

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
  if (DAT_14cc098a8 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc098a8 = FUN_140002ddd(FUN_1466eee41,uVar4,L"RigUnit_HierarchyAddPhysicsJoint");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"Transform";
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
    local_58[lVar6 * 7] = L"Solver";
    local_58[lVar6 * 7 + 1] = L"FRigPhysicsSolverID";
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
    local_58[lVar6 * 7] = L"Settings";
    local_58[lVar6 * 7 + 1] = L"FRigPhysicsSettings";
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
    local_58[lVar6 * 7] = L"Parent";
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
    local_58[lVar6 * 7] = L"Name";
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
    local_58[lVar6 * 7] = L"Item";
    local_58[lVar6 * 7 + 1] = L"FRigElementKey";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc098a8;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_HierarchyAddPhysicsJoint::Execute",FUN_14924282a,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc098a8;
}



// FUNCTION 1466eee41 FUN_1466eee41 body=47 status=ok
// SIG undefined FUN_1466eee41(void)

longlong FUN_1466eee41(void)

{
  if (DAT_14cc098a0 == 0) {
    FUN_14086a14e(&DAT_14cc098a0,&PTR_FUN_14bbb12f0);
  }
  return DAT_14cc098a0;
}



// FUNCTION 1466eee70 FUN_1466eee70 body=48 status=ok
// SIG undefined FUN_1466eee70(void)

void FUN_1466eee70(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000290;
  *puVar1 = &PTR_FUN_14bbec220;
  return;
}



// FUNCTION 1466eeea0 FUN_1466eeea0 body=259 status=ok
// SIG undefined FUN_1466eeea0(void)

longlong FUN_1466eeea0(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_48;
  ulonglong uStack_40;
  longlong local_30;
  undefined2 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cc098c0 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc098c0 = FUN_140002ddd(FUN_1466eefa4,uVar4,L"RigUnit_PrepareForExecution");
    local_48 = 0;
    uStack_40 = 0;
    lVar5 = FUN_14001a7b2();
    lVar3 = DAT_14cc098c0;
    local_28 = 0x101;
    local_30 = lVar5;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x3a0));
    LOCK();
    piVar1 = (int *)(lVar5 + 0x3ac);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (iVar2 == 0) {
      LOCK();
      *(undefined1 *)(local_30 + 0x3a8) = (undefined1)local_28;
      UNLOCK();
    }
    local_58 = &local_48;
    FUN_1446f2f9a(lVar5,L"FRigUnit_PrepareForExecution::Execute",FUN_149242a1a,lVar3);
    FUN_1409be446(&local_30);
    FUN_140e03040(local_48,uStack_40 & 0xffffffff);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc098c0;
}



// FUNCTION 1466eefa4 FUN_1466eefa4 body=47 status=ok
// SIG undefined FUN_1466eefa4(void)

longlong FUN_1466eefa4(void)

{
  if (DAT_14cc098b8 == 0) {
    FUN_14086a14e(&DAT_14cc098b8,&PTR_FUN_14bbb1470);
  }
  return DAT_14cc098b8;
}



// FUNCTION 1466eefd4 FUN_1466eefd4 body=48 status=ok
// SIG undefined FUN_1466eefd4(void)

void FUN_1466eefd4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000001f0;
  *puVar1 = &PTR_FUN_14bbec430;
  return;
}



// FUNCTION 1466ef004 FUN_1466ef004 body=259 status=ok
// SIG undefined FUN_1466ef004(void)

longlong FUN_1466ef004(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_48;
  ulonglong uStack_40;
  longlong local_30;
  undefined2 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cc098d8 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc098d8 = FUN_140002ddd(FUN_1466ef108,uVar4,L"RigUnit_PostPrepareForExecution");
    local_48 = 0;
    uStack_40 = 0;
    lVar5 = FUN_14001a7b2();
    lVar3 = DAT_14cc098d8;
    local_28 = 0x101;
    local_30 = lVar5;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x3a0));
    LOCK();
    piVar1 = (int *)(lVar5 + 0x3ac);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (iVar2 == 0) {
      LOCK();
      *(undefined1 *)(local_30 + 0x3a8) = (undefined1)local_28;
      UNLOCK();
    }
    local_58 = &local_48;
    FUN_1446f2f9a(lVar5,L"FRigUnit_PostPrepareForExecution::Execute",FUN_149242acc,lVar3);
    FUN_1409be446(&local_30);
    FUN_140e03040(local_48,uStack_40 & 0xffffffff);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc098d8;
}



// FUNCTION 1466ef108 FUN_1466ef108 body=47 status=ok
// SIG undefined FUN_1466ef108(void)

longlong FUN_1466ef108(void)

{
  if (DAT_14cc098d0 == 0) {
    FUN_14086a14e(&DAT_14cc098d0,&PTR_FUN_14bbb15a8);
  }
  return DAT_14cc098d0;
}



// FUNCTION 1466ef138 FUN_1466ef138 body=48 status=ok
// SIG undefined FUN_1466ef138(void)

void FUN_1466ef138(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000001f0;
  *puVar1 = &PTR_FUN_14bbec620;
  return;
}



// FUNCTION 1466ef168 FUN_1466ef168 body=55 status=ok
// SIG undefined FUN_1466ef168(void)

void FUN_1466ef168(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc098f0 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc098f0 = FUN_140002ddd(FUN_1466ef19f,uVar1,L"RigUnit_RigModulesBase");
  }
  return;
}



// FUNCTION 1466ef19f FUN_1466ef19f body=49 status=ok
// SIG undefined FUN_1466ef19f(void)

longlong FUN_1466ef19f(void)

{
  if (DAT_14cc098e8 == 0) {
    FUN_14086a14e(&DAT_14cc098e8,&PTR_FUN_14bbb1678);
  }
  return DAT_14cc098e8;
}



// FUNCTION 1466ef1d0 FUN_1466ef1d0 body=48 status=ok
// SIG undefined FUN_1466ef1d0(void)

void FUN_1466ef1d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14bbec810;
  return;
}



// FUNCTION 1466ef200 FUN_1466ef200 body=55 status=ok
// SIG undefined FUN_1466ef200(void)

void FUN_1466ef200(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc09908 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc09908 = FUN_140002ddd(FUN_1466ef237,uVar1,L"RigUnit_RigModulesBaseMutable");
  }
  return;
}



// FUNCTION 1466ef237 FUN_1466ef237 body=47 status=ok
// SIG undefined FUN_1466ef237(void)

longlong FUN_1466ef237(void)

{
  if (DAT_14cc09900 == 0) {
    FUN_14086a14e(&DAT_14cc09900,&PTR_FUN_14bbb1710);
  }
  return DAT_14cc09900;
}



// FUNCTION 1466ef266 FUN_1466ef266 body=48 status=ok
// SIG undefined FUN_1466ef266(void)

void FUN_1466ef266(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000001f0;
  *puVar1 = &PTR_FUN_14bbeca00;
  return;
}



// FUNCTION 1466ef296 FUN_1466ef296 body=571 status=ok
// SIG undefined FUN_1466ef296(void)

longlong FUN_1466ef296(void)

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
  if (DAT_14cc09920 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc09920 = FUN_140002ddd(FUN_1466ef4d2,uVar4,L"RigUnit_ResolveConnector");
    local_68 = (undefined8 *)0x0;
    uStack_60._0_4_ = 1;
    uStack_60._4_4_ = 0;
    FUN_140c0351c(&local_68,0);
    iVar2 = (uint)uStack_60;
    *local_68 = L"Connector";
    local_68[1] = L"FRigElementKey";
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
    local_68[lVar6 * 7] = L"SkipSocket";
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
    local_68[lVar6 * 7] = L"Result";
    local_68[lVar6 * 7 + 1] = L"FRigElementKey";
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
    local_68[lVar6 * 7] = L"bIsConnected";
    local_68[lVar6 * 7 + 1] = L"bool";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc09920;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_ResolveConnector::Execute",FUN_149242b7e,lVar6);
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
  return DAT_14cc09920;
}



// FUNCTION 1466ef4d2 FUN_1466ef4d2 body=47 status=ok
// SIG undefined FUN_1466ef4d2(void)

longlong FUN_1466ef4d2(void)

{
  if (DAT_14cc09918 == 0) {
    FUN_14086a14e(&DAT_14cc09918,&PTR_FUN_14bbb1950);
  }
  return DAT_14cc09918;
}



// FUNCTION 1466ef502 FUN_1466ef502 body=48 status=ok
// SIG undefined FUN_1466ef502(void)

void FUN_1466ef502(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14bbecbf0;
  return;
}



// FUNCTION 1466ef532 FUN_1466ef532 body=321 status=ok
// SIG undefined FUN_1466ef532(void)

longlong FUN_1466ef532(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined8 **local_78;
  undefined8 *local_68;
  ulonglong uStack_60;
  longlong local_50;
  undefined2 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cc09938 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc09938 = FUN_140002ddd(FUN_1466ef674,uVar4,L"RigUnit_GetCurrentNameSpace");
    local_68 = (undefined8 *)0x0;
    uStack_60 = 1;
    FUN_140c0351c(&local_68,0);
    *local_68 = L"NameSpace";
    local_68[1] = L"FString";
    local_68[2] = 0;
    local_68[3] = 0;
    local_68[4] = 0;
    local_68[5] = 0;
    *(undefined1 *)(local_68 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar3 = DAT_14cc09938;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_GetCurrentNameSpace::Execute",&LAB_149242d78,lVar3);
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
  return DAT_14cc09938;
}



// FUNCTION 1466ef674 FUN_1466ef674 body=47 status=ok
// SIG undefined FUN_1466ef674(void)

longlong FUN_1466ef674(void)

{
  if (DAT_14cc09930 == 0) {
    FUN_14086a14e(&DAT_14cc09930,&PTR_FUN_14bbb1a70);
  }
  return DAT_14cc09930;
}



// FUNCTION 1466ef6a4 FUN_1466ef6a4 body=48 status=ok
// SIG undefined FUN_1466ef6a4(void)

void FUN_1466ef6a4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bbecde0;
  return;
}



// FUNCTION 1466ef6d4 FUN_1466ef6d4 body=406 status=ok
// SIG undefined FUN_1466ef6d4(void)

longlong FUN_1466ef6d4(void)

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
  if (DAT_14cc09950 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc09950 = FUN_140002ddd(FUN_1466ef86b,uVar4,L"RigUnit_GetItemShortName");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (int)uStack_50;
    *local_58 = L"Item";
    local_58[1] = L"FRigElementKey";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar6 = (longlong)(int)uStack_50;
    uVar3 = (int)uStack_50 + 1;
    uStack_50 = CONCAT44(uStack_50._4_4_,uVar3);
    if (uStack_50._4_4_ < uVar3) {
      FUN_140c0351c(&local_58,iVar2);
    }
    local_58[lVar6 * 7] = L"ShortName";
    local_58[lVar6 * 7 + 1] = L"FName";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc09950;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_GetItemShortName::Execute",&LAB_149242eb4,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc09950;
}



// FUNCTION 1466ef86b FUN_1466ef86b body=47 status=ok
// SIG undefined FUN_1466ef86b(void)

longlong FUN_1466ef86b(void)

{
  if (DAT_14cc09948 == 0) {
    FUN_14086a14e(&DAT_14cc09948,&PTR_FUN_14bbb1be0);
  }
  return DAT_14cc09948;
}



// FUNCTION 1466ef89a FUN_1466ef89a body=48 status=ok
// SIG undefined FUN_1466ef89a(void)

void FUN_1466ef89a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14bbecfd0;
  return;
}



// FUNCTION 1466ef8ca FUN_1466ef8ca body=495 status=ok
// SIG undefined FUN_1466ef8ca(void)

longlong FUN_1466ef8ca(void)

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
  if (DAT_14cc09968 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc09968 = FUN_140002ddd(FUN_1466efaba,uVar4,L"RigUnit_GetItemNameSpace");
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
    local_58[lVar6 * 7] = L"HasNameSpace";
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
    local_58[lVar6 * 7] = L"NameSpace";
    local_58[lVar6 * 7 + 1] = L"FString";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc09968;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_GetItemNameSpace::Execute",&LAB_149242ff0,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc09968;
}



// FUNCTION 1466efaba FUN_1466efaba body=47 status=ok
// SIG undefined FUN_1466efaba(void)

longlong FUN_1466efaba(void)

{
  if (DAT_14cc09960 == 0) {
    FUN_14086a14e(&DAT_14cc09960,&PTR_FUN_14bbb1db8);
  }
  return DAT_14cc09960;
}



// FUNCTION 1466efaea FUN_1466efaea body=48 status=ok
// SIG undefined FUN_1466efaea(void)

void FUN_1466efaea(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14bbed1c0;
  return;
}



// FUNCTION 1466efb1a FUN_1466efb1a body=406 status=ok
// SIG undefined FUN_1466efb1a(void)

longlong FUN_1466efb1a(void)

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
  if (DAT_14cc09980 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc09980 = FUN_140002ddd(FUN_1466efcb1,uVar4,L"RigUnit_IsItemInCurrentNameSpace");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (int)uStack_50;
    *local_58 = L"Item";
    local_58[1] = L"FRigElementKey";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar6 = (longlong)(int)uStack_50;
    uVar3 = (int)uStack_50 + 1;
    uStack_50 = CONCAT44(uStack_50._4_4_,uVar3);
    if (uStack_50._4_4_ < uVar3) {
      FUN_140c0351c(&local_58,iVar2);
    }
    local_58[lVar6 * 7] = L"Result";
    local_58[lVar6 * 7 + 1] = L"bool";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc09980;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_IsItemInCurrentNameSpace::Execute",&LAB_149243164,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc09980;
}



// FUNCTION 1466efcb1 FUN_1466efcb1 body=47 status=ok
// SIG undefined FUN_1466efcb1(void)

longlong FUN_1466efcb1(void)

{
  if (DAT_14cc09978 == 0) {
    FUN_14086a14e(&DAT_14cc09978,&PTR_FUN_14bbb1f48);
  }
  return DAT_14cc09978;
}



// FUNCTION 1466efce0 FUN_1466efce0 body=48 status=ok
// SIG undefined FUN_1466efce0(void)

void FUN_1466efce0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bbed3b0;
  return;
}



// FUNCTION 1466efd10 FUN_1466efd10 body=406 status=ok
// SIG undefined FUN_1466efd10(void)

longlong FUN_1466efd10(void)

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
  if (DAT_14cc09998 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc09998 = FUN_140002ddd(FUN_1466efea7,uVar4,L"RigUnit_GetItemsInNameSpace");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (int)uStack_50;
    *local_58 = L"TypeToSearch";
    local_58[1] = L"ERigElementType";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar6 = (longlong)(int)uStack_50;
    uVar3 = (int)uStack_50 + 1;
    uStack_50 = CONCAT44(uStack_50._4_4_,uVar3);
    if (uStack_50._4_4_ < uVar3) {
      FUN_140c0351c(&local_58,iVar2);
    }
    local_58[lVar6 * 7] = L"Items";
    local_58[lVar6 * 7 + 1] = L"TArray<FRigElementKey>";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc09998;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_GetItemsInNameSpace::Execute",&LAB_1492432bc,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc09998;
}



// FUNCTION 1466efea7 FUN_1466efea7 body=47 status=ok
// SIG undefined FUN_1466efea7(void)

longlong FUN_1466efea7(void)

{
  if (DAT_14cc09990 == 0) {
    FUN_14086a14e(&DAT_14cc09990,&PTR_FUN_14bbb2140);
  }
  return DAT_14cc09990;
}



// FUNCTION 1466efed6 FUN_1466efed6 body=48 status=ok
// SIG undefined FUN_1466efed6(void)

void FUN_1466efed6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14bbed5a0;
  return;
}



// FUNCTION 1466eff06 FUN_1466eff06 body=259 status=ok
// SIG undefined FUN_1466eff06(void)

longlong FUN_1466eff06(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_48;
  ulonglong uStack_40;
  longlong local_30;
  undefined2 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cc099b0 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc099b0 = FUN_140002ddd(FUN_1466f000a,uVar4,L"RigUnit_SequenceExecution");
    local_48 = 0;
    uStack_40 = 0;
    lVar5 = FUN_14001a7b2();
    lVar3 = DAT_14cc099b0;
    local_28 = 0x101;
    local_30 = lVar5;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x3a0));
    LOCK();
    piVar1 = (int *)(lVar5 + 0x3ac);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (iVar2 == 0) {
      LOCK();
      *(undefined1 *)(local_30 + 0x3a8) = (undefined1)local_28;
      UNLOCK();
    }
    local_58 = &local_48;
    FUN_1446f2f9a(lVar5,L"FRigUnit_SequenceExecution::Execute",&DAT_1444b0200,lVar3);
    FUN_1409be446(&local_30);
    FUN_140e03040(local_48,uStack_40 & 0xffffffff);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc099b0;
}



// FUNCTION 1466f000a FUN_1466f000a body=47 status=ok
// SIG undefined FUN_1466f000a(void)

longlong FUN_1466f000a(void)

{
  if (DAT_14cc099a8 == 0) {
    FUN_14086a14e(&DAT_14cc099a8,&PTR_FUN_14bbb24c8);
  }
  return DAT_14cc099a8;
}



// FUNCTION 1466f003a FUN_1466f003a body=48 status=ok
// SIG undefined FUN_1466f003a(void)

void FUN_1466f003a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000970;
  *puVar1 = &PTR_FUN_14bbed790;
  return;
}



// FUNCTION 1466f006a FUN_1466f006a body=740 status=ok
// SIG undefined FUN_1466f006a(void)

longlong FUN_1466f006a(void)

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
  if (DAT_14cc099c8 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc099c8 = FUN_140002ddd(FUN_1466f034f,uVar4,L"RigUnit_AddBoneTransform");
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
    local_58[lVar6 * 7] = L"Transform";
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
    local_58[lVar6 * 7] = L"bPostMultiply";
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
    local_58[lVar6 * 7] = L"CachedBone";
    local_58[lVar6 * 7 + 1] = L"FCachedRigElement";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc099c8;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_AddBoneTransform::Execute",FUN_1492438e2,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc099c8;
}



// FUNCTION 1466f034f FUN_1466f034f body=47 status=ok
// SIG undefined FUN_1466f034f(void)

longlong FUN_1466f034f(void)

{
  if (DAT_14cc099c0 == 0) {
    FUN_14086a14e(&DAT_14cc099c0,&PTR_FUN_14bbb27c0);
  }
  return DAT_14cc099c0;
}



// FUNCTION 1466f037e FUN_1466f037e body=48 status=ok
// SIG undefined FUN_1466f037e(void)

void FUN_1466f037e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000290;
  *puVar1 = &PTR_FUN_14bbed980;
  return;
}



// FUNCTION 1466f03ae FUN_1466f03ae body=321 status=ok
// SIG undefined FUN_1466f03ae(void)

longlong FUN_1466f03ae(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined8 **local_78;
  undefined8 *local_68;
  ulonglong uStack_60;
  longlong local_50;
  undefined2 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cc099e0 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc099e0 = FUN_140002ddd(FUN_1466f04f0,uVar4,L"RigUnit_Item");
    local_68 = (undefined8 *)0x0;
    uStack_60 = 1;
    FUN_140c0351c(&local_68,0);
    *local_68 = L"Item";
    local_68[1] = L"FRigElementKey";
    local_68[2] = 0;
    local_68[3] = 0;
    local_68[4] = 0;
    local_68[5] = 0;
    *(undefined1 *)(local_68 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar3 = DAT_14cc099e0;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_Item::Execute",&DAT_149244a74,lVar3);
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
  return DAT_14cc099e0;
}



// FUNCTION 1466f04f0 FUN_1466f04f0 body=47 status=ok
// SIG undefined FUN_1466f04f0(void)

longlong FUN_1466f04f0(void)

{
  if (DAT_14cc099d8 == 0) {
    FUN_14086a14e(&DAT_14cc099d8,&PTR_FUN_14bbb28e0);
  }
  return DAT_14cc099d8;
}



// FUNCTION 1466f0520 FUN_1466f0520 body=48 status=ok
// SIG undefined FUN_1466f0520(void)

void FUN_1466f0520(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bbedb70;
  return;
}



// FUNCTION 1466f0550 FUN_1466f0550 body=321 status=ok
// SIG undefined FUN_1466f0550(void)

longlong FUN_1466f0550(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined8 **local_78;
  undefined8 *local_68;
  ulonglong uStack_60;
  longlong local_50;
  undefined2 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cc099f8 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc099f8 = FUN_140002ddd(FUN_1466f0692,uVar4,L"RigUnit_ItemArray");
    local_68 = (undefined8 *)0x0;
    uStack_60 = 1;
    FUN_140c0351c(&local_68,0);
    *local_68 = L"Items";
    local_68[1] = L"TArray<FRigElementKey>";
    local_68[2] = 0;
    local_68[3] = 0;
    local_68[4] = 0;
    local_68[5] = 0;
    *(undefined1 *)(local_68 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar3 = DAT_14cc099f8;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_ItemArray::Execute",&DAT_149244ad0,lVar3);
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
  return DAT_14cc099f8;
}



// FUNCTION 1466f0692 FUN_1466f0692 body=47 status=ok
// SIG undefined FUN_1466f0692(void)

longlong FUN_1466f0692(void)

{
  if (DAT_14cc099f0 == 0) {
    FUN_14086a14e(&DAT_14cc099f0,&PTR_FUN_14bbb2a18);
  }
  return DAT_14cc099f0;
}



// FUNCTION 1466f06c2 FUN_1466f06c2 body=48 status=ok
// SIG undefined FUN_1466f06c2(void)

void FUN_1466f06c2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bbedcd0;
  return;
}



// FUNCTION 1466f06f2 FUN_1466f06f2 body=321 status=ok
// SIG undefined FUN_1466f06f2(void)

longlong FUN_1466f06f2(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined8 **local_78;
  undefined8 *local_68;
  ulonglong uStack_60;
  longlong local_50;
  undefined2 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cc09a10 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc09a10 = FUN_140002ddd(FUN_1466f0834,uVar4,L"RigUnit_BoneName");
    local_68 = (undefined8 *)0x0;
    uStack_60 = 1;
    FUN_140c0351c(&local_68,0);
    *local_68 = L"Bone";
    local_68[1] = L"FName";
    local_68[2] = 0;
    local_68[3] = 0;
    local_68[4] = 0;
    local_68[5] = 0;
    *(undefined1 *)(local_68 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar3 = DAT_14cc09a10;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_BoneName::Execute",&DAT_149244b2c,lVar3);
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
  return DAT_14cc09a10;
}



// FUNCTION 1466f0834 FUN_1466f0834 body=47 status=ok
// SIG undefined FUN_1466f0834(void)

longlong FUN_1466f0834(void)

{
  if (DAT_14cc09a08 == 0) {
    FUN_14086a14e(&DAT_14cc09a08,&PTR_FUN_14bbb2b00);
  }
  return DAT_14cc09a08;
}



// FUNCTION 1466f0864 FUN_1466f0864 body=48 status=ok
// SIG undefined FUN_1466f0864(void)

void FUN_1466f0864(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bbedec0;
  return;
}



// FUNCTION 1466f0894 FUN_1466f0894 body=321 status=ok
// SIG undefined FUN_1466f0894(void)

longlong FUN_1466f0894(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined8 **local_78;
  undefined8 *local_68;
  ulonglong uStack_60;
  longlong local_50;
  undefined2 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cc09a28 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc09a28 = FUN_140002ddd(FUN_1466f09d6,uVar4,L"RigUnit_SpaceName");
    local_68 = (undefined8 *)0x0;
    uStack_60 = 1;
    FUN_140c0351c(&local_68,0);
    *local_68 = L"Space";
    local_68[1] = L"FName";
    local_68[2] = 0;
    local_68[3] = 0;
    local_68[4] = 0;
    local_68[5] = 0;
    *(undefined1 *)(local_68 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar3 = DAT_14cc09a28;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_SpaceName::Execute",&DAT_149244b88,lVar3);
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
  return DAT_14cc09a28;
}



// FUNCTION 1466f09d6 FUN_1466f09d6 body=47 status=ok
// SIG undefined FUN_1466f09d6(void)

longlong FUN_1466f09d6(void)

{
  if (DAT_14cc09a20 == 0) {
    FUN_14086a14e(&DAT_14cc09a20,&PTR_FUN_14bbb2bf0);
  }
  return DAT_14cc09a20;
}



// FUNCTION 1466f0a06 FUN_1466f0a06 body=48 status=ok
// SIG undefined FUN_1466f0a06(void)

void FUN_1466f0a06(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bbee0b0;
  return;
}



// FUNCTION 1466f0a36 FUN_1466f0a36 body=321 status=ok
// SIG undefined FUN_1466f0a36(void)

longlong FUN_1466f0a36(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined8 **local_78;
  undefined8 *local_68;
  ulonglong uStack_60;
  longlong local_50;
  undefined2 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cc09a40 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc09a40 = FUN_140002ddd(FUN_1466f0b78,uVar4,L"RigUnit_ControlName");
    local_68 = (undefined8 *)0x0;
    uStack_60 = 1;
    FUN_140c0351c(&local_68,0);
    *local_68 = L"Control";
    local_68[1] = L"FName";
    local_68[2] = 0;
    local_68[3] = 0;
    local_68[4] = 0;
    local_68[5] = 0;
    *(undefined1 *)(local_68 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar3 = DAT_14cc09a40;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_ControlName::Execute",&DAT_149244be4,lVar3);
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
  return DAT_14cc09a40;
}



// FUNCTION 1466f0b78 FUN_1466f0b78 body=47 status=ok
// SIG undefined FUN_1466f0b78(void)

longlong FUN_1466f0b78(void)

{
  if (DAT_14cc09a38 == 0) {
    FUN_14086a14e(&DAT_14cc09a38,&PTR_FUN_14bbb2ce8);
  }
  return DAT_14cc09a38;
}



// FUNCTION 1466f0ba8 FUN_1466f0ba8 body=48 status=ok
// SIG undefined FUN_1466f0ba8(void)

void FUN_1466f0ba8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bbee2a0;
  return;
}



// FUNCTION 1466f0bd8 FUN_1466f0bd8 body=55 status=ok
// SIG undefined FUN_1466f0bd8(void)

void FUN_1466f0bd8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc09a58 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc09a58 = FUN_140002ddd(FUN_1466f0c0f,uVar1,L"RigUnit_GetAnimationChannelBase");
  }
  return;
}



// FUNCTION 1466f0c0f FUN_1466f0c0f body=49 status=ok
// SIG undefined FUN_1466f0c0f(void)

longlong FUN_1466f0c0f(void)

{
  if (DAT_14cc09a50 == 0) {
    FUN_14086a14e(&DAT_14cc09a50,&PTR_FUN_14bbb2fc8);
  }
  return DAT_14cc09a50;
}



// FUNCTION 1466f0c40 FUN_1466f0c40 body=48 status=ok
// SIG undefined FUN_1466f0c40(void)

void FUN_1466f0c40(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14bbee520;
  return;
}



// FUNCTION 1466f0c70 FUN_1466f0c70 body=737 status=ok
// SIG undefined FUN_1466f0c70(void)

longlong FUN_1466f0c70(void)

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
  if (DAT_14cc09a70 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc09a70 = FUN_140002ddd(FUN_1466f0f52,uVar4,L"RigUnit_GetBoolAnimationChannel");
    local_68 = (undefined8 *)0x0;
    uStack_60._0_4_ = 1;
    uStack_60._4_4_ = 0;
    FUN_140c0351c(&local_68,0);
    iVar2 = (uint)uStack_60;
    *local_68 = L"Value";
    local_68[1] = L"bool";
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
    local_68[lVar6 * 7] = L"Control";
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
    local_68[lVar6 * 7] = L"Channel";
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
    local_68[lVar6 * 7] = L"bInitial";
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
    local_68[lVar6 * 7] = L"CachedChannelKey";
    local_68[lVar6 * 7 + 1] = L"FRigElementKey";
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
    local_68[lVar6 * 7] = L"CachedChannelHash";
    local_68[lVar6 * 7 + 1] = L"int32";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc09a70;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_GetBoolAnimationChannel::Execute",FUN_1492450f0,lVar6);
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
  return DAT_14cc09a70;
}



// FUNCTION 1466f0f52 FUN_1466f0f52 body=47 status=ok
// SIG undefined FUN_1466f0f52(void)

longlong FUN_1466f0f52(void)

{
  if (DAT_14cc09a68 == 0) {
    FUN_14086a14e(&DAT_14cc09a68,&PTR_FUN_14bbb3158);
  }
  return DAT_14cc09a68;
}



// FUNCTION 1466f0f82 FUN_1466f0f82 body=48 status=ok
// SIG undefined FUN_1466f0f82(void)

void FUN_1466f0f82(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14bbee710;
  return;
}



// FUNCTION 1466f0fb2 FUN_1466f0fb2 body=740 status=ok
// SIG undefined FUN_1466f0fb2(void)

longlong FUN_1466f0fb2(void)

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
  if (DAT_14cc09a88 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc09a88 = FUN_140002ddd(FUN_1466f1297,uVar4,L"RigUnit_GetFloatAnimationChannel");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"float";
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
    local_58[lVar6 * 7] = L"Control";
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
    local_58[lVar6 * 7] = L"Channel";
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
    local_58[lVar6 * 7] = L"bInitial";
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
    local_58[lVar6 * 7] = L"CachedChannelKey";
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
    local_58[lVar6 * 7] = L"CachedChannelHash";
    local_58[lVar6 * 7 + 1] = L"int32";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc09a88;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_GetFloatAnimationChannel::Execute",FUN_1492452a4,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc09a88;
}



// FUNCTION 1466f1297 FUN_1466f1297 body=47 status=ok
// SIG undefined FUN_1466f1297(void)

longlong FUN_1466f1297(void)

{
  if (DAT_14cc09a80 == 0) {
    FUN_14086a14e(&DAT_14cc09a80,&PTR_FUN_14bbb3290);
  }
  return DAT_14cc09a80;
}



// FUNCTION 1466f12c6 FUN_1466f12c6 body=48 status=ok
// SIG undefined FUN_1466f12c6(void)

void FUN_1466f12c6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14bbee900;
  return;
}



// FUNCTION 1466f12f6 FUN_1466f12f6 body=737 status=ok
// SIG undefined FUN_1466f12f6(void)

longlong FUN_1466f12f6(void)

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
  if (DAT_14cc09aa0 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc09aa0 = FUN_140002ddd(FUN_1466f15d8,uVar4,L"RigUnit_GetIntAnimationChannel");
    local_68 = (undefined8 *)0x0;
    uStack_60._0_4_ = 1;
    uStack_60._4_4_ = 0;
    FUN_140c0351c(&local_68,0);
    iVar2 = (uint)uStack_60;
    *local_68 = L"Value";
    local_68[1] = L"int32";
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
    local_68[lVar6 * 7] = L"Control";
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
    local_68[lVar6 * 7] = L"Channel";
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
    local_68[lVar6 * 7] = L"bInitial";
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
    local_68[lVar6 * 7] = L"CachedChannelKey";
    local_68[lVar6 * 7 + 1] = L"FRigElementKey";
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
    local_68[lVar6 * 7] = L"CachedChannelHash";
    local_68[lVar6 * 7 + 1] = L"int32";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc09aa0;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_GetIntAnimationChannel::Execute",FUN_149245458,lVar6);
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
  return DAT_14cc09aa0;
}



// FUNCTION 1466f15d8 FUN_1466f15d8 body=47 status=ok
// SIG undefined FUN_1466f15d8(void)

longlong FUN_1466f15d8(void)

{
  if (DAT_14cc09a98 == 0) {
    FUN_14086a14e(&DAT_14cc09a98,&PTR_FUN_14bbb33b8);
  }
  return DAT_14cc09a98;
}



// FUNCTION 1466f1608 FUN_1466f1608 body=48 status=ok
// SIG undefined FUN_1466f1608(void)

void FUN_1466f1608(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14bbeeaf0;
  return;
}



// FUNCTION 1466f1638 FUN_1466f1638 body=740 status=ok
// SIG undefined FUN_1466f1638(void)

longlong FUN_1466f1638(void)

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
  if (DAT_14cc09ab8 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc09ab8 = FUN_140002ddd(FUN_1466f191d,uVar4,L"RigUnit_GetVector2DAnimationChannel");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"FVector2D";
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
    local_58[lVar6 * 7] = L"Control";
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
    local_58[lVar6 * 7] = L"Channel";
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
    local_58[lVar6 * 7] = L"bInitial";
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
    local_58[lVar6 * 7] = L"CachedChannelKey";
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
    local_58[lVar6 * 7] = L"CachedChannelHash";
    local_58[lVar6 * 7 + 1] = L"int32";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc09ab8;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_GetVector2DAnimationChannel::Execute",FUN_14924560c,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc09ab8;
}



// FUNCTION 1466f191d FUN_1466f191d body=47 status=ok
// SIG undefined FUN_1466f191d(void)

longlong FUN_1466f191d(void)

{
  if (DAT_14cc09ab0 == 0) {
    FUN_14086a14e(&DAT_14cc09ab0,&PTR_FUN_14bbb3508);
  }
  return DAT_14cc09ab0;
}



// FUNCTION 1466f194c FUN_1466f194c body=48 status=ok
// SIG undefined FUN_1466f194c(void)

void FUN_1466f194c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14bbeece0;
  return;
}



// FUNCTION 1466f197c FUN_1466f197c body=740 status=ok
// SIG undefined FUN_1466f197c(void)

longlong FUN_1466f197c(void)

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
  if (DAT_14cc09ad0 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc09ad0 = FUN_140002ddd(FUN_1466f1c61,uVar4,L"RigUnit_GetVectorAnimationChannel");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"FVector";
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
    local_58[lVar6 * 7] = L"Control";
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
    local_58[lVar6 * 7] = L"Channel";
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
    local_58[lVar6 * 7] = L"bInitial";
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
    local_58[lVar6 * 7] = L"CachedChannelKey";
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
    local_58[lVar6 * 7] = L"CachedChannelHash";
    local_58[lVar6 * 7 + 1] = L"int32";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc09ad0;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_GetVectorAnimationChannel::Execute",FUN_1492457c8,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc09ad0;
}



// FUNCTION 1466f1c61 FUN_1466f1c61 body=47 status=ok
// SIG undefined FUN_1466f1c61(void)

longlong FUN_1466f1c61(void)

{
  if (DAT_14cc09ac8 == 0) {
    FUN_14086a14e(&DAT_14cc09ac8,&PTR_FUN_14bbb3650);
  }
  return DAT_14cc09ac8;
}



// FUNCTION 1466f1c90 FUN_1466f1c90 body=48 status=ok
// SIG undefined FUN_1466f1c90(void)

void FUN_1466f1c90(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000048;
  *puVar1 = &PTR_FUN_14bbeeed0;
  return;
}



// FUNCTION 1466f1cc0 FUN_1466f1cc0 body=740 status=ok
// SIG undefined FUN_1466f1cc0(void)

longlong FUN_1466f1cc0(void)

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
  if (DAT_14cc09ae8 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc09ae8 = FUN_140002ddd(FUN_1466f1fa5,uVar4,L"RigUnit_GetRotatorAnimationChannel");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"FRotator";
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
    local_58[lVar6 * 7] = L"Control";
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
    local_58[lVar6 * 7] = L"Channel";
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
    local_58[lVar6 * 7] = L"bInitial";
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
    local_58[lVar6 * 7] = L"CachedChannelKey";
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
    local_58[lVar6 * 7] = L"CachedChannelHash";
    local_58[lVar6 * 7 + 1] = L"int32";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc09ae8;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_GetRotatorAnimationChannel::Execute",FUN_14924599a,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc09ae8;
}



// FUNCTION 1466f1fa5 FUN_1466f1fa5 body=47 status=ok
// SIG undefined FUN_1466f1fa5(void)

longlong FUN_1466f1fa5(void)

{
  if (DAT_14cc09ae0 == 0) {
    FUN_14086a14e(&DAT_14cc09ae0,&PTR_FUN_14bbb3798);
  }
  return DAT_14cc09ae0;
}



// FUNCTION 1466f1fd4 FUN_1466f1fd4 body=48 status=ok
// SIG undefined FUN_1466f1fd4(void)

void FUN_1466f1fd4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000048;
  *puVar1 = &PTR_FUN_14bbef0c0;
  return;
}



// FUNCTION 1466f2004 FUN_1466f2004 body=740 status=ok
// SIG undefined FUN_1466f2004(void)

longlong FUN_1466f2004(void)

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
  if (DAT_14cc09b00 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc09b00 = FUN_140002ddd(FUN_1466f22e9,uVar4,L"RigUnit_GetTransformAnimationChannel");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"Value";
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
    local_58[lVar6 * 7] = L"Control";
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
    local_58[lVar6 * 7] = L"Channel";
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
    local_58[lVar6 * 7] = L"bInitial";
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
    local_58[lVar6 * 7] = L"CachedChannelKey";
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
    local_58[lVar6 * 7] = L"CachedChannelHash";
    local_58[lVar6 * 7 + 1] = L"int32";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc09b00;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_GetTransformAnimationChannel::Execute",FUN_149245b6c,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc09b00;
}



// FUNCTION 1466f22e9 FUN_1466f22e9 body=47 status=ok
// SIG undefined FUN_1466f22e9(void)

longlong FUN_1466f22e9(void)

{
  if (DAT_14cc09af8 == 0) {
    FUN_14086a14e(&DAT_14cc09af8,&PTR_FUN_14bbb38e8);
  }
  return DAT_14cc09af8;
}


