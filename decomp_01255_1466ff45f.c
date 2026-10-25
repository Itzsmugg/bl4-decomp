// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1466ff45f FUN_1466ff45f body=47 status=ok
// SIG undefined FUN_1466ff45f(void)

longlong FUN_1466ff45f(void)

{
  if (DAT_14cc0a340 == 0) {
    FUN_14086a14e(&DAT_14cc0a340,&PTR_FUN_14bbbed58);
  }
  return DAT_14cc0a340;
}



// FUNCTION 1466ff48e FUN_1466ff48e body=48 status=ok
// SIG undefined FUN_1466ff48e(void)

void FUN_1466ff48e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000220;
  *puVar1 = &PTR_FUN_14bbf8fe0;
  return;
}



// FUNCTION 1466ff4be FUN_1466ff4be body=55 status=ok
// SIG undefined FUN_1466ff4be(void)

void FUN_1466ff4be(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0a360 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc0a360 = FUN_140002ddd(FUN_1466ff4f5,uVar1,L"RigUnit_SetMultiControlFloat_Entry");
  }
  return;
}



// FUNCTION 1466ff4f5 FUN_1466ff4f5 body=47 status=ok
// SIG undefined FUN_1466ff4f5(void)

longlong FUN_1466ff4f5(void)

{
  if (DAT_14cc0a358 == 0) {
    FUN_14086a14e(&DAT_14cc0a358,&PTR_FUN_14bbbee88);
  }
  return DAT_14cc0a358;
}



// FUNCTION 1466ff524 FUN_1466ff524 body=48 status=ok
// SIG undefined FUN_1466ff524(void)

void FUN_1466ff524(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x40000000c;
  *puVar1 = &PTR_FUN_14bbf91d0;
  return;
}



// FUNCTION 1466ff554 FUN_1466ff554 body=495 status=ok
// SIG undefined FUN_1466ff554(void)

longlong FUN_1466ff554(void)

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
  if (DAT_14cc0a378 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0a378 = FUN_140002ddd(FUN_1466ff744,uVar4,L"RigUnit_SetMultiControlFloat");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"Entries";
    local_58[1] = L"TArray<FRigUnit_SetMultiControlFloat_Entry>";
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
    local_58[lVar6 * 7] = L"CachedControlIndices";
    local_58[lVar6 * 7 + 1] = L"TArray<FCachedRigElement>";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0a378;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_SetMultiControlFloat::Execute",FUN_149256b46,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0a378;
}



// FUNCTION 1466ff744 FUN_1466ff744 body=47 status=ok
// SIG undefined FUN_1466ff744(void)

longlong FUN_1466ff744(void)

{
  if (DAT_14cc0a370 == 0) {
    FUN_14086a14e(&DAT_14cc0a370,&PTR_FUN_14bbbf118);
  }
  return DAT_14cc0a370;
}



// FUNCTION 1466ff774 FUN_1466ff774 body=48 status=ok
// SIG undefined FUN_1466ff774(void)

void FUN_1466ff774(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000220;
  *puVar1 = &PTR_FUN_14bbf9330;
  return;
}



// FUNCTION 1466ff7a4 FUN_1466ff7a4 body=574 status=ok
// SIG undefined FUN_1466ff7a4(void)

longlong FUN_1466ff7a4(void)

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
  if (DAT_14cc0a390 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0a390 = FUN_140002ddd(FUN_1466ff9e3,uVar4,L"RigUnit_SetControlInteger");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"Control";
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
    local_58[lVar6 * 7] = L"Weight";
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
    local_58[lVar6 * 7] = L"IntegerValue";
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
    local_58[lVar6 * 7] = L"CachedControlIndex";
    local_58[lVar6 * 7 + 1] = L"FCachedRigElement";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0a390;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_SetControlInteger::Execute",FUN_149256d22,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0a390;
}



// FUNCTION 1466ff9e3 FUN_1466ff9e3 body=47 status=ok
// SIG undefined FUN_1466ff9e3(void)

longlong FUN_1466ff9e3(void)

{
  if (DAT_14cc0a388 == 0) {
    FUN_14086a14e(&DAT_14cc0a388,&PTR_FUN_14bbbf300);
  }
  return DAT_14cc0a388;
}



// FUNCTION 1466ffa12 FUN_1466ffa12 body=48 status=ok
// SIG undefined FUN_1466ffa12(void)

void FUN_1466ffa12(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000220;
  *puVar1 = &PTR_FUN_14bbf9520;
  return;
}



// FUNCTION 1466ffa42 FUN_1466ffa42 body=55 status=ok
// SIG undefined FUN_1466ffa42(void)

void FUN_1466ffa42(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0a3a8 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc0a3a8 = FUN_140002ddd(FUN_1466ffa79,uVar1,L"RigUnit_SetMultiControlInteger_Entry");
  }
  return;
}



// FUNCTION 1466ffa79 FUN_1466ffa79 body=47 status=ok
// SIG undefined FUN_1466ffa79(void)

longlong FUN_1466ffa79(void)

{
  if (DAT_14cc0a3a0 == 0) {
    FUN_14086a14e(&DAT_14cc0a3a0,&PTR_FUN_14bbbf438);
  }
  return DAT_14cc0a3a0;
}



// FUNCTION 1466ffaa8 FUN_1466ffaa8 body=48 status=ok
// SIG undefined FUN_1466ffaa8(void)

void FUN_1466ffaa8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x40000000c;
  *puVar1 = &PTR_FUN_14bbf9710;
  return;
}



// FUNCTION 1466ffad8 FUN_1466ffad8 body=495 status=ok
// SIG undefined FUN_1466ffad8(void)

longlong FUN_1466ffad8(void)

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
  if (DAT_14cc0a3c0 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0a3c0 = FUN_140002ddd(FUN_1466ffcc8,uVar4,L"RigUnit_SetMultiControlInteger");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"Entries";
    local_58[1] = L"TArray<FRigUnit_SetMultiControlInteger_Entry>";
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
    local_58[lVar6 * 7] = L"CachedControlIndices";
    local_58[lVar6 * 7 + 1] = L"TArray<FCachedRigElement>";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0a3c0;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_SetMultiControlInteger::Execute",FUN_149256fd2,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0a3c0;
}



// FUNCTION 1466ffcc8 FUN_1466ffcc8 body=47 status=ok
// SIG undefined FUN_1466ffcc8(void)

longlong FUN_1466ffcc8(void)

{
  if (DAT_14cc0a3b8 == 0) {
    FUN_14086a14e(&DAT_14cc0a3b8,&PTR_FUN_14bbbf6d8);
  }
  return DAT_14cc0a3b8;
}



// FUNCTION 1466ffcf8 FUN_1466ffcf8 body=48 status=ok
// SIG undefined FUN_1466ffcf8(void)

void FUN_1466ffcf8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000220;
  *puVar1 = &PTR_FUN_14bbf9870;
  return;
}



// FUNCTION 1466ffd28 FUN_1466ffd28 body=581 status=ok
// SIG undefined FUN_1466ffd28(void)

longlong FUN_1466ffd28(void)

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
  if (DAT_14cc0a3d8 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0a3d8 = FUN_140002ddd(FUN_1466fff6e,uVar4,L"RigUnit_SetControlVector2D");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"Control";
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
    local_58[lVar6 * 7] = L"Vector";
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
    local_58[lVar6 * 7] = L"CachedControlIndex";
    local_58[lVar6 * 7 + 1] = L"FCachedRigElement";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0a3d8;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_SetControlVector2D::Execute",FUN_1492571b0,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0a3d8;
}



// FUNCTION 1466fff6e FUN_1466fff6e body=47 status=ok
// SIG undefined FUN_1466fff6e(void)

longlong FUN_1466fff6e(void)

{
  if (DAT_14cc0a3d0 == 0) {
    FUN_14086a14e(&DAT_14cc0a3d0,&PTR_FUN_14bbbf8c0);
  }
  return DAT_14cc0a3d0;
}



// FUNCTION 1466fff9e FUN_1466fff9e body=48 status=ok
// SIG undefined FUN_1466fff9e(void)

void FUN_1466fff9e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000230;
  *puVar1 = &PTR_FUN_14bbf9a60;
  return;
}



// FUNCTION 1466fffce FUN_1466fffce body=55 status=ok
// SIG undefined FUN_1466fffce(void)

void FUN_1466fffce(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0a3f0 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc0a3f0 = FUN_140002ddd(FUN_146700005,uVar1,L"RigUnit_SetMultiControlVector2D_Entry");
  }
  return;
}



// FUNCTION 146700005 FUN_146700005 body=47 status=ok
// SIG undefined FUN_146700005(void)

longlong FUN_146700005(void)

{
  if (DAT_14cc0a3e8 == 0) {
    FUN_14086a14e(&DAT_14cc0a3e8,&PTR_FUN_14bbbf9f8);
  }
  return DAT_14cc0a3e8;
}



// FUNCTION 146700034 FUN_146700034 body=48 status=ok
// SIG undefined FUN_146700034(void)

void FUN_146700034(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bbf9c50;
  return;
}



// FUNCTION 146700064 FUN_146700064 body=495 status=ok
// SIG undefined FUN_146700064(void)

longlong FUN_146700064(void)

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
  if (DAT_14cc0a408 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0a408 = FUN_140002ddd(FUN_146700254,uVar4,L"RigUnit_SetMultiControlVector2D");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"Entries";
    local_58[1] = L"TArray<FRigUnit_SetMultiControlVector2D_Entry>";
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
    local_58[lVar6 * 7] = L"CachedControlIndices";
    local_58[lVar6 * 7 + 1] = L"TArray<FCachedRigElement>";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0a408;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_SetMultiControlVector2D::Execute",FUN_1492574ae,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0a408;
}



// FUNCTION 146700254 FUN_146700254 body=47 status=ok
// SIG undefined FUN_146700254(void)

longlong FUN_146700254(void)

{
  if (DAT_14cc0a400 == 0) {
    FUN_14086a14e(&DAT_14cc0a400,&PTR_FUN_14bbbfc98);
  }
  return DAT_14cc0a400;
}



// FUNCTION 146700284 FUN_146700284 body=48 status=ok
// SIG undefined FUN_146700284(void)

void FUN_146700284(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000220;
  *puVar1 = &PTR_FUN_14bbf9db0;
  return;
}



// FUNCTION 1467002b4 FUN_1467002b4 body=661 status=ok
// SIG undefined FUN_1467002b4(void)

longlong FUN_1467002b4(void)

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
  if (DAT_14cc0a420 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0a420 = FUN_140002ddd(FUN_14670054a,uVar4,L"RigUnit_SetControlVector");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"Control";
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
    local_58[lVar6 * 7] = L"Vector";
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
    local_58[lVar6 * 7] = L"CachedControlIndex";
    local_58[lVar6 * 7 + 1] = L"FCachedRigElement";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0a420;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_SetControlVector::Execute",FUN_149257688,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0a420;
}



// FUNCTION 14670054a FUN_14670054a body=47 status=ok
// SIG undefined FUN_14670054a(void)

longlong FUN_14670054a(void)

{
  if (DAT_14cc0a418 == 0) {
    FUN_14086a14e(&DAT_14cc0a418,&PTR_FUN_14bbbff10);
  }
  return DAT_14cc0a418;
}



// FUNCTION 14670057a FUN_14670057a body=48 status=ok
// SIG undefined FUN_14670057a(void)

void FUN_14670057a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000240;
  *puVar1 = &PTR_FUN_14bbf9fa0;
  return;
}



// FUNCTION 1467005aa FUN_1467005aa body=661 status=ok
// SIG undefined FUN_1467005aa(void)

longlong FUN_1467005aa(void)

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
  if (DAT_14cc0a438 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0a438 = FUN_140002ddd(FUN_146700840,uVar4,L"RigUnit_SetControlRotator");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"Control";
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
    local_58[lVar6 * 7] = L"Rotator";
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
    local_58[lVar6 * 7] = L"CachedControlIndex";
    local_58[lVar6 * 7 + 1] = L"FCachedRigElement";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0a438;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_SetControlRotator::Execute",FUN_149257aba,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0a438;
}



// FUNCTION 146700840 FUN_146700840 body=47 status=ok
// SIG undefined FUN_146700840(void)

longlong FUN_146700840(void)

{
  if (DAT_14cc0a430 == 0) {
    FUN_14086a14e(&DAT_14cc0a430,&PTR_FUN_14bbc0190);
  }
  return DAT_14cc0a430;
}



// FUNCTION 146700870 FUN_146700870 body=48 status=ok
// SIG undefined FUN_146700870(void)

void FUN_146700870(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000240;
  *puVar1 = &PTR_FUN_14bbfa190;
  return;
}



// FUNCTION 1467008a0 FUN_1467008a0 body=55 status=ok
// SIG undefined FUN_1467008a0(void)

void FUN_1467008a0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0a450 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc0a450 = FUN_140002ddd(FUN_1467008d7,uVar1,L"RigUnit_SetMultiControlRotator_Entry");
  }
  return;
}



// FUNCTION 1467008d7 FUN_1467008d7 body=47 status=ok
// SIG undefined FUN_1467008d7(void)

longlong FUN_1467008d7(void)

{
  if (DAT_14cc0a448 == 0) {
    FUN_14086a14e(&DAT_14cc0a448,&PTR_FUN_14bbc0358);
  }
  return DAT_14cc0a448;
}



// FUNCTION 146700906 FUN_146700906 body=48 status=ok
// SIG undefined FUN_146700906(void)

void FUN_146700906(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14bbfa380;
  return;
}



// FUNCTION 146700936 FUN_146700936 body=495 status=ok
// SIG undefined FUN_146700936(void)

longlong FUN_146700936(void)

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
  if (DAT_14cc0a468 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0a468 = FUN_140002ddd(FUN_146700b26,uVar4,L"RigUnit_SetMultiControlRotator");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"Entries";
    local_58[1] = L"TArray<FRigUnit_SetMultiControlRotator_Entry>";
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
    local_58[lVar6 * 7] = L"CachedControlIndices";
    local_58[lVar6 * 7 + 1] = L"TArray<FCachedRigElement>";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0a468;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_SetMultiControlRotator::Execute",FUN_149257f38,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0a468;
}



// FUNCTION 146700b26 FUN_146700b26 body=47 status=ok
// SIG undefined FUN_146700b26(void)

longlong FUN_146700b26(void)

{
  if (DAT_14cc0a460 == 0) {
    FUN_14086a14e(&DAT_14cc0a460,&PTR_FUN_14bbc05f8);
  }
  return DAT_14cc0a460;
}



// FUNCTION 146700b56 FUN_146700b56 body=48 status=ok
// SIG undefined FUN_146700b56(void)

void FUN_146700b56(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000220;
  *puVar1 = &PTR_FUN_14bbfa4e0;
  return;
}



// FUNCTION 146700b86 FUN_146700b86 body=661 status=ok
// SIG undefined FUN_146700b86(void)

longlong FUN_146700b86(void)

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
  if (DAT_14cc0a480 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0a480 = FUN_140002ddd(FUN_146700e1c,uVar4,L"RigUnit_SetControlTransform");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"Control";
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
    local_58[lVar6 * 7] = L"CachedControlIndex";
    local_58[lVar6 * 7 + 1] = L"FCachedRigElement";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0a480;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_SetControlTransform::Execute",FUN_149258126,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0a480;
}



// FUNCTION 146700e1c FUN_146700e1c body=47 status=ok
// SIG undefined FUN_146700e1c(void)

longlong FUN_146700e1c(void)

{
  if (DAT_14cc0a478 == 0) {
    FUN_14086a14e(&DAT_14cc0a478,&PTR_FUN_14bbc0880);
  }
  return DAT_14cc0a478;
}



// FUNCTION 146700e4c FUN_146700e4c body=48 status=ok
// SIG undefined FUN_146700e4c(void)

void FUN_146700e4c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000290;
  *puVar1 = &PTR_FUN_14bbfa6d0;
  return;
}



// FUNCTION 146700e7c FUN_146700e7c body=495 status=ok
// SIG undefined FUN_146700e7c(void)

longlong FUN_146700e7c(void)

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
  if (DAT_14cc0a498 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0a498 = FUN_140002ddd(FUN_14670106c,uVar4,L"RigUnit_GetControlVisibility");
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
    local_58[lVar6 * 7] = L"bVisible";
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
    local_58[lVar6 * 7] = L"CachedControlIndex";
    local_58[lVar6 * 7 + 1] = L"FCachedRigElement";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0a498;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_GetControlVisibility::Execute",FUN_14925872a,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0a498;
}



// FUNCTION 14670106c FUN_14670106c body=47 status=ok
// SIG undefined FUN_14670106c(void)

longlong FUN_14670106c(void)

{
  if (DAT_14cc0a490 == 0) {
    FUN_14086a14e(&DAT_14cc0a490,&PTR_FUN_14bbc0ce8);
  }
  return DAT_14cc0a490;
}



// FUNCTION 14670109c FUN_14670109c body=48 status=ok
// SIG undefined FUN_14670109c(void)

void FUN_14670109c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14bbfa8c0;
  return;
}



// FUNCTION 1467010cc FUN_1467010cc body=581 status=ok
// SIG undefined FUN_1467010cc(void)

longlong FUN_1467010cc(void)

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
  if (DAT_14cc0a4b0 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0a4b0 = FUN_140002ddd(FUN_146701312,uVar4,L"RigUnit_SetControlVisibility");
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
    local_58[lVar6 * 7] = L"Pattern";
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
    local_58[lVar6 * 7] = L"bVisible";
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
    local_58[lVar6 * 7] = L"CachedControlIndices";
    local_58[lVar6 * 7 + 1] = L"TArray<FCachedRigElement>";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0a4b0;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_SetControlVisibility::Execute",FUN_149258868,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0a4b0;
}



// FUNCTION 146701312 FUN_146701312 body=47 status=ok
// SIG undefined FUN_146701312(void)

longlong FUN_146701312(void)

{
  if (DAT_14cc0a4a8 == 0) {
    FUN_14086a14e(&DAT_14cc0a4a8,&PTR_FUN_14bbc0f38);
  }
  return DAT_14cc0a4a8;
}



// FUNCTION 146701342 FUN_146701342 body=48 status=ok
// SIG undefined FUN_146701342(void)

void FUN_146701342(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000230;
  *puVar1 = &PTR_FUN_14bbfaab0;
  return;
}



// FUNCTION 146701372 FUN_146701372 body=495 status=ok
// SIG undefined FUN_146701372(void)

longlong FUN_146701372(void)

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
  if (DAT_14cc0a4c8 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0a4c8 = FUN_140002ddd(FUN_146701562,uVar4,L"RigUnit_SetCurveValue");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"Curve";
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
    local_58[lVar6 * 7] = L"Value";
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
    local_58[lVar6 * 7] = L"CachedCurveIndex";
    local_58[lVar6 * 7 + 1] = L"FCachedRigElement";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0a4c8;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_SetCurveValue::Execute",FUN_149258b94,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0a4c8;
}



// FUNCTION 146701562 FUN_146701562 body=47 status=ok
// SIG undefined FUN_146701562(void)

longlong FUN_146701562(void)

{
  if (DAT_14cc0a4c0 == 0) {
    FUN_14086a14e(&DAT_14cc0a4c0,&PTR_FUN_14bbc1110);
  }
  return DAT_14cc0a4c0;
}



// FUNCTION 146701592 FUN_146701592 body=48 status=ok
// SIG undefined FUN_146701592(void)

void FUN_146701592(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000220;
  *puVar1 = &PTR_FUN_14bbfaca0;
  return;
}



// FUNCTION 1467015c2 FUN_1467015c2 body=822 status=ok
// SIG undefined FUN_1467015c2(void)

longlong FUN_1467015c2(void)

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
  if (DAT_14cc0a4e0 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0a4e0 = FUN_140002ddd(FUN_1467018f9,uVar4,L"RigUnit_SetRelativeBoneTransform");
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
    local_58[lVar6 * 7] = L"Space";
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
    local_58[lVar6 * 7] = L"CachedBone";
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
    local_58[lVar6 * 7] = L"CachedSpaceIndex";
    local_58[lVar6 * 7 + 1] = L"FCachedRigElement";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0a4e0;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_SetRelativeBoneTransform::Execute",FUN_149258cc8,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0a4e0;
}



// FUNCTION 1467018f9 FUN_1467018f9 body=47 status=ok
// SIG undefined FUN_1467018f9(void)

longlong FUN_1467018f9(void)

{
  if (DAT_14cc0a4d8 == 0) {
    FUN_14086a14e(&DAT_14cc0a4d8,&PTR_FUN_14bbc1420);
  }
  return DAT_14cc0a4d8;
}



// FUNCTION 146701928 FUN_146701928 body=48 status=ok
// SIG undefined FUN_146701928(void)

void FUN_146701928(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000002b0;
  *puVar1 = &PTR_FUN_14bbfae90;
  return;
}



// FUNCTION 146701958 FUN_146701958 body=901 status=ok
// SIG undefined FUN_146701958(void)

longlong FUN_146701958(void)

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
  if (DAT_14cc0a4f8 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0a4f8 = FUN_140002ddd(FUN_146701cde,uVar4,L"RigUnit_SetRelativeTransformForItem");
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
    local_58[lVar6 * 7] = L"bParentInitial";
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
    local_58[lVar6 * 7] = L"Value";
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
    lVar6 = DAT_14cc0a4f8;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_SetRelativeTransformForItem::Execute",FUN_1492599f2,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0a4f8;
}



// FUNCTION 146701cde FUN_146701cde body=47 status=ok
// SIG undefined FUN_146701cde(void)

longlong FUN_146701cde(void)

{
  if (DAT_14cc0a4f0 == 0) {
    FUN_14086a14e(&DAT_14cc0a4f0,&PTR_FUN_14bbc1798);
  }
  return DAT_14cc0a4f0;
}



// FUNCTION 146701d0e FUN_146701d0e body=48 status=ok
// SIG undefined FUN_146701d0e(void)

void FUN_146701d0e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000002c0;
  *puVar1 = &PTR_FUN_14bbfb110;
  return;
}



// FUNCTION 146701d3e FUN_146701d3e body=901 status=ok
// SIG undefined FUN_146701d3e(void)

longlong FUN_146701d3e(void)

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
  if (DAT_14cc0a510 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0a510 = FUN_140002ddd(FUN_1467020c4,uVar4,L"RigUnit_SetRelativeTranslationForItem");
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
    local_58[lVar6 * 7] = L"bParentInitial";
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
    local_58[lVar6 * 7] = L"Value";
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
    lVar6 = DAT_14cc0a510;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_SetRelativeTranslationForItem::Execute",FUN_149259c8a,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0a510;
}



// FUNCTION 1467020c4 FUN_1467020c4 body=47 status=ok
// SIG undefined FUN_1467020c4(void)

longlong FUN_1467020c4(void)

{
  if (DAT_14cc0a508 == 0) {
    FUN_14086a14e(&DAT_14cc0a508,&PTR_FUN_14bbc1ae8);
  }
  return DAT_14cc0a508;
}



// FUNCTION 1467020f4 FUN_1467020f4 body=48 status=ok
// SIG undefined FUN_1467020f4(void)

void FUN_1467020f4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000270;
  *puVar1 = &PTR_FUN_14bbfb270;
  return;
}



// FUNCTION 146702124 FUN_146702124 body=901 status=ok
// SIG undefined FUN_146702124(void)

longlong FUN_146702124(void)

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
  if (DAT_14cc0a528 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0a528 = FUN_140002ddd(FUN_1467024aa,uVar4,L"RigUnit_SetRelativeRotationForItem");
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
    local_58[lVar6 * 7] = L"bParentInitial";
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
    local_58[lVar6 * 7] = L"Value";
    local_58[lVar6 * 7 + 1] = L"FQuat";
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
    lVar6 = DAT_14cc0a528;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_SetRelativeRotationForItem::Execute",FUN_149259f7c,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0a528;
}



// FUNCTION 1467024aa FUN_1467024aa body=47 status=ok
// SIG undefined FUN_1467024aa(void)

longlong FUN_1467024aa(void)

{
  if (DAT_14cc0a520 == 0) {
    FUN_14086a14e(&DAT_14cc0a520,&PTR_FUN_14bbc1e28);
  }
  return DAT_14cc0a520;
}



// FUNCTION 1467024da FUN_1467024da body=48 status=ok
// SIG undefined FUN_1467024da(void)

void FUN_1467024da(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000280;
  *puVar1 = &PTR_FUN_14bbfb460;
  return;
}



// FUNCTION 14670250a FUN_14670250a body=654 status=ok
// SIG undefined FUN_14670250a(void)

longlong FUN_14670250a(void)

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
  if (DAT_14cc0a540 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0a540 = FUN_140002ddd(FUN_146702799,uVar4,L"RigUnit_SetSpaceInitialTransform");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"SpaceName";
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
    local_58[lVar6 * 7] = L"Result";
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
    local_58[lVar6 * 7] = L"CachedSpaceIndex";
    local_58[lVar6 * 7 + 1] = L"FCachedRigElement";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0a540;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_SetSpaceInitialTransform::Execute",FUN_14925a2bc,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0a540;
}



// FUNCTION 146702799 FUN_146702799 body=47 status=ok
// SIG undefined FUN_146702799(void)

longlong FUN_146702799(void)

{
  if (DAT_14cc0a538 == 0) {
    FUN_14086a14e(&DAT_14cc0a538,&PTR_FUN_14bbc2158);
  }
  return DAT_14cc0a538;
}



// FUNCTION 1467027c8 FUN_1467027c8 body=48 status=ok
// SIG undefined FUN_1467027c8(void)

void FUN_1467027c8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000002f0;
  *puVar1 = &PTR_FUN_14bbfb650;
  return;
}



// FUNCTION 1467027f8 FUN_1467027f8 body=661 status=ok
// SIG undefined FUN_1467027f8(void)

longlong FUN_1467027f8(void)

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
  if (DAT_14cc0a558 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0a558 = FUN_140002ddd(FUN_146702a8e,uVar4,L"RigUnit_SetSpaceTransform");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"Space";
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
    local_58[lVar6 * 7] = L"SpaceType";
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
    local_58[lVar6 * 7] = L"CachedSpaceIndex";
    local_58[lVar6 * 7 + 1] = L"FCachedRigElement";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0a558;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_SetSpaceTransform::Execute",FUN_14925a762,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0a558;
}



// FUNCTION 146702a8e FUN_146702a8e body=47 status=ok
// SIG undefined FUN_146702a8e(void)

longlong FUN_146702a8e(void)

{
  if (DAT_14cc0a550 == 0) {
    FUN_14086a14e(&DAT_14cc0a550,&PTR_FUN_14bbc2400);
  }
  return DAT_14cc0a550;
}



// FUNCTION 146702abe FUN_146702abe body=48 status=ok
// SIG undefined FUN_146702abe(void)

void FUN_146702abe(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000290;
  *puVar1 = &PTR_FUN_14bbfb840;
  return;
}



// FUNCTION 146702aee FUN_146702aee body=829 status=ok
// SIG undefined FUN_146702aee(void)

longlong FUN_146702aee(void)

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
  if (DAT_14cc0a570 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0a570 = FUN_140002ddd(FUN_146702e2c,uVar4,L"RigUnit_SetTransform");
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
    local_58[lVar6 * 7] = L"Value";
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
    local_58[lVar6 * 7] = L"CachedIndex";
    local_58[lVar6 * 7 + 1] = L"FCachedRigElement";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0a570;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_SetTransform::Execute",FUN_14925adc0,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0a570;
}



// FUNCTION 146702e2c FUN_146702e2c body=47 status=ok
// SIG undefined FUN_146702e2c(void)

longlong FUN_146702e2c(void)

{
  if (DAT_14cc0a568 == 0) {
    FUN_14086a14e(&DAT_14cc0a568,&PTR_FUN_14bbc2728);
  }
  return DAT_14cc0a568;
}



// FUNCTION 146702e5c FUN_146702e5c body=48 status=ok
// SIG undefined FUN_146702e5c(void)

void FUN_146702e5c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000290;
  *puVar1 = &PTR_FUN_14bbfba30;
  return;
}



// FUNCTION 146702e8c FUN_146702e8c body=829 status=ok
// SIG undefined FUN_146702e8c(void)

longlong FUN_146702e8c(void)

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
  if (DAT_14cc0a588 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0a588 = FUN_140002ddd(FUN_1467031ca,uVar4,L"RigUnit_SetTranslation");
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
    local_58[lVar6 * 7] = L"Value";
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
    local_58[lVar6 * 7] = L"CachedIndex";
    local_58[lVar6 * 7 + 1] = L"FCachedRigElement";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0a588;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_SetTranslation::Execute",FUN_14925aeea,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0a588;
}



// FUNCTION 1467031ca FUN_1467031ca body=47 status=ok
// SIG undefined FUN_1467031ca(void)

longlong FUN_1467031ca(void)

{
  if (DAT_14cc0a580 == 0) {
    FUN_14086a14e(&DAT_14cc0a580,&PTR_FUN_14bbc2a28);
  }
  return DAT_14cc0a580;
}



// FUNCTION 1467031fa FUN_1467031fa body=48 status=ok
// SIG undefined FUN_1467031fa(void)

void FUN_1467031fa(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000240;
  *puVar1 = &PTR_FUN_14bbfbb90;
  return;
}



// FUNCTION 14670322a FUN_14670322a body=829 status=ok
// SIG undefined FUN_14670322a(void)

longlong FUN_14670322a(void)

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
  if (DAT_14cc0a5a0 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0a5a0 = FUN_140002ddd(FUN_146703568,uVar4,L"RigUnit_SetRotation");
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
    local_58[lVar6 * 7] = L"Value";
    local_58[lVar6 * 7 + 1] = L"FQuat";
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
    local_58[lVar6 * 7] = L"CachedIndex";
    local_58[lVar6 * 7 + 1] = L"FCachedRigElement";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0a5a0;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_SetRotation::Execute",FUN_14012278c,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0a5a0;
}



// FUNCTION 146703568 FUN_146703568 body=47 status=ok
// SIG undefined FUN_146703568(void)

longlong FUN_146703568(void)

{
  if (DAT_14cc0a598 == 0) {
    FUN_14086a14e(&DAT_14cc0a598,&PTR_FUN_14bbc2d18);
  }
  return DAT_14cc0a598;
}



// FUNCTION 146703598 FUN_146703598 body=48 status=ok
// SIG undefined FUN_146703598(void)

void FUN_146703598(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000250;
  *puVar1 = &PTR_FUN_14bbfbcf0;
  return;
}



// FUNCTION 1467035c8 FUN_1467035c8 body=829 status=ok
// SIG undefined FUN_1467035c8(void)

longlong FUN_1467035c8(void)

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
  if (DAT_14cc0a5b8 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0a5b8 = FUN_140002ddd(FUN_146703906,uVar4,L"RigUnit_SetScale");
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
    local_58[lVar6 * 7] = L"Scale";
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
    local_58[lVar6 * 7] = L"CachedIndex";
    local_58[lVar6 * 7 + 1] = L"FCachedRigElement";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0a5b8;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_SetScale::Execute",FUN_14925b2b8,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0a5b8;
}



// FUNCTION 146703906 FUN_146703906 body=47 status=ok
// SIG undefined FUN_146703906(void)

longlong FUN_146703906(void)

{
  if (DAT_14cc0a5b0 == 0) {
    FUN_14086a14e(&DAT_14cc0a5b0,&PTR_FUN_14bbc2ff8);
  }
  return DAT_14cc0a5b0;
}



// FUNCTION 146703936 FUN_146703936 body=48 status=ok
// SIG undefined FUN_146703936(void)

void FUN_146703936(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000240;
  *puVar1 = &PTR_FUN_14bbfbe50;
  return;
}



// FUNCTION 146703966 FUN_146703966 body=829 status=ok
// SIG undefined FUN_146703966(void)

longlong FUN_146703966(void)

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
  if (DAT_14cc0a5d0 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0a5d0 = FUN_140002ddd(FUN_146703ca4,uVar4,L"RigUnit_SetTransformArray");
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
    local_58[lVar6 * 7] = L"Transforms";
    local_58[lVar6 * 7 + 1] = L"TArray<FTransform>";
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
    local_58[lVar6 * 7] = L"CachedIndex";
    local_58[lVar6 * 7 + 1] = L"TArray<FCachedRigElement>";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0a5d0;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_SetTransformArray::Execute",FUN_14925b56a,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0a5d0;
}



// FUNCTION 146703ca4 FUN_146703ca4 body=47 status=ok
// SIG undefined FUN_146703ca4(void)

longlong FUN_146703ca4(void)

{
  if (DAT_14cc0a5c8 == 0) {
    FUN_14086a14e(&DAT_14cc0a5c8,&PTR_FUN_14bbc3390);
  }
  return DAT_14cc0a5c8;
}



// FUNCTION 146703cd4 FUN_146703cd4 body=48 status=ok
// SIG undefined FUN_146703cd4(void)

void FUN_146703cd4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000230;
  *puVar1 = &PTR_FUN_14bbfc040;
  return;
}



// FUNCTION 146703d04 FUN_146703d04 body=829 status=ok
// SIG undefined FUN_146703d04(void)

longlong FUN_146703d04(void)

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
  if (DAT_14cc0a5e8 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0a5e8 = FUN_140002ddd(FUN_146704042,uVar4,L"RigUnit_SetTransformItemArray");
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
    local_58[lVar6 * 7] = L"Transforms";
    local_58[lVar6 * 7 + 1] = L"TArray<FTransform>";
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
    local_58[lVar6 * 7] = L"CachedIndex";
    local_58[lVar6 * 7 + 1] = L"TArray<FCachedRigElement>";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0a5e8;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_SetTransformItemArray::Execute",FUN_14925b72a,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0a5e8;
}



// FUNCTION 146704042 FUN_146704042 body=47 status=ok
// SIG undefined FUN_146704042(void)

longlong FUN_146704042(void)

{
  if (DAT_14cc0a5e0 == 0) {
    FUN_14086a14e(&DAT_14cc0a5e0,&PTR_FUN_14bbc3778);
  }
  return DAT_14cc0a5e0;
}



// FUNCTION 146704072 FUN_146704072 body=48 status=ok
// SIG undefined FUN_146704072(void)

void FUN_146704072(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000230;
  *puVar1 = &PTR_FUN_14bbfc230;
  return;
}



// FUNCTION 1467040a2 FUN_1467040a2 body=406 status=ok
// SIG undefined FUN_1467040a2(void)

longlong FUN_1467040a2(void)

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
  if (DAT_14cc0a600 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0a600 = FUN_140002ddd(FUN_146704239,uVar4,L"RigUnit_UnsetCurveValue");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (int)uStack_50;
    *local_58 = L"Curve";
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
    local_58[lVar6 * 7] = L"CachedCurveIndex";
    local_58[lVar6 * 7 + 1] = L"FCachedRigElement";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0a600;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_UnsetCurveValue::Execute",FUN_14925c074,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0a600;
}



// FUNCTION 146704239 FUN_146704239 body=47 status=ok
// SIG undefined FUN_146704239(void)

longlong FUN_146704239(void)

{
  if (DAT_14cc0a5f8 == 0) {
    FUN_14086a14e(&DAT_14cc0a5f8,&PTR_FUN_14bbc3a58);
  }
  return DAT_14cc0a5f8;
}



// FUNCTION 146704268 FUN_146704268 body=48 status=ok
// SIG undefined FUN_146704268(void)

void FUN_146704268(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000220;
  *puVar1 = &PTR_FUN_14bbfc420;
  return;
}



// FUNCTION 146704298 FUN_146704298 body=399 status=ok
// SIG undefined FUN_146704298(void)

longlong FUN_146704298(void)

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
  if (DAT_14cc0a618 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0a618 = FUN_140002ddd(FUN_146704428,uVar4,L"RigUnit_ToWorldSpace_Transform");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (int)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"FTransform";
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
    local_58[lVar6 * 7] = L"World";
    local_58[lVar6 * 7 + 1] = L"FTransform";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0a618;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_ToWorldSpace_Transform::Execute",FUN_14925c17e,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0a618;
}



// FUNCTION 146704428 FUN_146704428 body=47 status=ok
// SIG undefined FUN_146704428(void)

longlong FUN_146704428(void)

{
  if (DAT_14cc0a610 == 0) {
    FUN_14086a14e(&DAT_14cc0a610,&PTR_FUN_14bbc3c00);
  }
  return DAT_14cc0a610;
}



// FUNCTION 146704458 FUN_146704458 body=48 status=ok
// SIG undefined FUN_146704458(void)

void FUN_146704458(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000000d0;
  *puVar1 = &PTR_FUN_14bbfc610;
  return;
}



// FUNCTION 146704488 FUN_146704488 body=399 status=ok
// SIG undefined FUN_146704488(void)

longlong FUN_146704488(void)

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
  if (DAT_14cc0a630 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0a630 = FUN_140002ddd(FUN_146704618,uVar4,L"RigUnit_ToRigSpace_Transform");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (int)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"FTransform";
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
    local_58[lVar6 * 7] = L"Global";
    local_58[lVar6 * 7 + 1] = L"FTransform";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0a630;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_ToRigSpace_Transform::Execute",FUN_14925c272,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0a630;
}



// FUNCTION 146704618 FUN_146704618 body=47 status=ok
// SIG undefined FUN_146704618(void)

longlong FUN_146704618(void)

{
  if (DAT_14cc0a628 == 0) {
    FUN_14086a14e(&DAT_14cc0a628,&PTR_FUN_14bbc3d70);
  }
  return DAT_14cc0a628;
}



// FUNCTION 146704648 FUN_146704648 body=48 status=ok
// SIG undefined FUN_146704648(void)

void FUN_146704648(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000000d0;
  *puVar1 = &PTR_FUN_14bbfc800;
  return;
}



// FUNCTION 146704678 FUN_146704678 body=399 status=ok
// SIG undefined FUN_146704678(void)

longlong FUN_146704678(void)

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
  if (DAT_14cc0a648 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0a648 = FUN_140002ddd(FUN_146704808,uVar4,L"RigUnit_ToWorldSpace_Location");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (int)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"FVector";
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
    local_58[lVar6 * 7] = L"World";
    local_58[lVar6 * 7 + 1] = L"FVector";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0a648;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_ToWorldSpace_Location::Execute",FUN_14925c372,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0a648;
}



// FUNCTION 146704808 FUN_146704808 body=47 status=ok
// SIG undefined FUN_146704808(void)

longlong FUN_146704808(void)

{
  if (DAT_14cc0a640 == 0) {
    FUN_14086a14e(&DAT_14cc0a640,&PTR_FUN_14bbc3ef0);
  }
  return DAT_14cc0a640;
}



// FUNCTION 146704838 FUN_146704838 body=48 status=ok
// SIG undefined FUN_146704838(void)

void FUN_146704838(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14bbfc9f0;
  return;
}



// FUNCTION 146704868 FUN_146704868 body=399 status=ok
// SIG undefined FUN_146704868(void)

longlong FUN_146704868(void)

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
  if (DAT_14cc0a660 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0a660 = FUN_140002ddd(FUN_1467049f8,uVar4,L"RigUnit_ToRigSpace_Location");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (int)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"FVector";
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
    local_58[lVar6 * 7] = L"Global";
    local_58[lVar6 * 7 + 1] = L"FVector";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0a660;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_ToRigSpace_Location::Execute",&LAB_14925c630,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0a660;
}



// FUNCTION 1467049f8 FUN_1467049f8 body=47 status=ok
// SIG undefined FUN_1467049f8(void)

longlong FUN_1467049f8(void)

{
  if (DAT_14cc0a658 == 0) {
    FUN_14086a14e(&DAT_14cc0a658,&PTR_FUN_14bbc4060);
  }
  return DAT_14cc0a658;
}



// FUNCTION 146704a28 FUN_146704a28 body=48 status=ok
// SIG undefined FUN_146704a28(void)

void FUN_146704a28(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14bbfcbe0;
  return;
}



// FUNCTION 146704a58 FUN_146704a58 body=399 status=ok
// SIG undefined FUN_146704a58(void)

longlong FUN_146704a58(void)

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
  if (DAT_14cc0a678 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0a678 = FUN_140002ddd(FUN_146704be8,uVar4,L"RigUnit_ToWorldSpace_Rotation");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (int)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"FQuat";
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
    local_58[lVar6 * 7] = L"World";
    local_58[lVar6 * 7 + 1] = L"FQuat";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0a678;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_ToWorldSpace_Rotation::Execute",FUN_14925c9d8,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0a678;
}



// FUNCTION 146704be8 FUN_146704be8 body=47 status=ok
// SIG undefined FUN_146704be8(void)

longlong FUN_146704be8(void)

{
  if (DAT_14cc0a670 == 0) {
    FUN_14086a14e(&DAT_14cc0a670,&PTR_FUN_14bbc41e0);
  }
  return DAT_14cc0a670;
}



// FUNCTION 146704c18 FUN_146704c18 body=48 status=ok
// SIG undefined FUN_146704c18(void)

void FUN_146704c18(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000050;
  *puVar1 = &PTR_FUN_14bbfcdd0;
  return;
}



// FUNCTION 146704c48 FUN_146704c48 body=399 status=ok
// SIG undefined FUN_146704c48(void)

longlong FUN_146704c48(void)

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
  if (DAT_14cc0a690 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0a690 = FUN_140002ddd(FUN_146704dd8,uVar4,L"RigUnit_ToRigSpace_Rotation");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (int)uStack_50;
    *local_58 = L"Value";
    local_58[1] = L"FQuat";
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
    local_58[lVar6 * 7] = L"Global";
    local_58[lVar6 * 7 + 1] = L"FQuat";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0a690;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_ToRigSpace_Rotation::Execute",FUN_14925cbd8,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0a690;
}



// FUNCTION 146704dd8 FUN_146704dd8 body=47 status=ok
// SIG undefined FUN_146704dd8(void)

longlong FUN_146704dd8(void)

{
  if (DAT_14cc0a688 == 0) {
    FUN_14086a14e(&DAT_14cc0a688,&PTR_FUN_14bbc4350);
  }
  return DAT_14cc0a688;
}



// FUNCTION 146704e08 FUN_146704e08 body=48 status=ok
// SIG undefined FUN_146704e08(void)

void FUN_146704e08(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000050;
  *puVar1 = &PTR_FUN_14bbfcfc0;
  return;
}



// FUNCTION 146704e38 FUN_146704e38 body=55 status=ok
// SIG undefined FUN_146704e38(void)

void FUN_146704e38(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0a6a8 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc0a6a8 = FUN_140002ddd(FUN_146704e6f,uVar1,L"RigUnit_BoneHarmonics_BoneTarget");
  }
  return;
}



// FUNCTION 146704e6f FUN_146704e6f body=47 status=ok
// SIG undefined FUN_146704e6f(void)

longlong FUN_146704e6f(void)

{
  if (DAT_14cc0a6a0 == 0) {
    FUN_14086a14e(&DAT_14cc0a6a0,&PTR_FUN_14bbc4578);
  }
  return DAT_14cc0a6a0;
}



// FUNCTION 146704e9e FUN_146704e9e body=48 status=ok
// SIG undefined FUN_146704e9e(void)

void FUN_146704e9e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x40000000c;
  *puVar1 = &PTR_FUN_14bbfd1b0;
  return;
}



// FUNCTION 146704ece FUN_146704ece body=55 status=ok
// SIG undefined FUN_146704ece(void)

void FUN_146704ece(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0a6c0 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc0a6c0 = FUN_140002ddd(FUN_146704f05,uVar1,L"RigUnit_Harmonics_TargetItem");
  }
  return;
}



// FUNCTION 146704f05 FUN_146704f05 body=47 status=ok
// SIG undefined FUN_146704f05(void)

longlong FUN_146704f05(void)

{
  if (DAT_14cc0a6b8 == 0) {
    FUN_14086a14e(&DAT_14cc0a6b8,&PTR_FUN_14bbc46a0);
  }
  return DAT_14cc0a6b8;
}



// FUNCTION 146704f34 FUN_146704f34 body=48 status=ok
// SIG undefined FUN_146704f34(void)

void FUN_146704f34(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000010;
  *puVar1 = &PTR_FUN_14bbfd310;
  return;
}



// FUNCTION 146704f64 FUN_146704f64 body=55 status=ok
// SIG undefined FUN_146704f64(void)

void FUN_146704f64(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0a6d8 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc0a6d8 = FUN_140002ddd(FUN_146704f9b,uVar1,L"RigUnit_BoneHarmonics_WorkData");
  }
  return;
}



// FUNCTION 146704f9b FUN_146704f9b body=49 status=ok
// SIG undefined FUN_146704f9b(void)

longlong FUN_146704f9b(void)

{
  if (DAT_14cc0a6d0 == 0) {
    FUN_14086a14e(&DAT_14cc0a6d0,&PTR_FUN_14bbc4818);
  }
  return DAT_14cc0a6d0;
}



// FUNCTION 146704fcc FUN_146704fcc body=48 status=ok
// SIG undefined FUN_146704fcc(void)

void FUN_146704fcc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14bbfd470;
  return;
}



// FUNCTION 146704ffc FUN_146704ffc body=1237 status=ok
// SIG undefined FUN_146704ffc(void)

longlong FUN_146704ffc(void)

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
  if (DAT_14cc0a6f0 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0a6f0 = FUN_140002ddd(FUN_1467054d2,uVar4,L"RigUnit_BoneHarmonics");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"Bones";
    local_58[1] = L"TArray<FRigUnit_BoneHarmonics_BoneTarget>";
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
    local_58[lVar6 * 7] = L"WaveSpeed";
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
    local_58[lVar6 * 7] = L"WaveFrequency";
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
    local_58[lVar6 * 7] = L"WaveAmplitude";
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
    local_58[lVar6 * 7] = L"WaveOffset";
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
    local_58[lVar6 * 7] = L"WaveNoise";
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
    local_58[lVar6 * 7] = L"WaveEase";
    local_58[lVar6 * 7 + 1] = L"ERigVMAnimEasingType";
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
    local_58[lVar6 * 7] = L"WaveMinimum";
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
    local_58[lVar6 * 7] = L"WaveMaximum";
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
    local_58[lVar6 * 7] = L"RotationOrder";
    local_58[lVar6 * 7 + 1] = L"EEulerRotationOrder";
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
    local_58[lVar6 * 7 + 1] = L"FRigUnit_BoneHarmonics_WorkData";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0a6f0;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_BoneHarmonics::Execute",FUN_14925d54c,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0a6f0;
}



// FUNCTION 1467054d2 FUN_1467054d2 body=47 status=ok
// SIG undefined FUN_1467054d2(void)

longlong FUN_1467054d2(void)

{
  if (DAT_14cc0a6e8 == 0) {
    FUN_14086a14e(&DAT_14cc0a6e8,&PTR_FUN_14bbc4ea0);
  }
  return DAT_14cc0a6e8;
}



// FUNCTION 146705502 FUN_146705502 body=48 status=ok
// SIG undefined FUN_146705502(void)

void FUN_146705502(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000002b0;
  *puVar1 = &PTR_FUN_14bbfd5d0;
  return;
}



// FUNCTION 146705532 FUN_146705532 body=1151 status=ok
// SIG undefined FUN_146705532(void)

longlong FUN_146705532(void)

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
  if (DAT_14cc0a708 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0a708 = FUN_140002ddd(FUN_1467059b2,uVar4,L"RigUnit_ItemHarmonics");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"Targets";
    local_58[1] = L"TArray<FRigUnit_Harmonics_TargetItem>";
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
    local_58[lVar6 * 7] = L"WaveSpeed";
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
    local_58[lVar6 * 7] = L"WaveFrequency";
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
    local_58[lVar6 * 7] = L"WaveAmplitude";
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
    local_58[lVar6 * 7] = L"WaveOffset";
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
    local_58[lVar6 * 7] = L"WaveNoise";
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
    local_58[lVar6 * 7] = L"WaveEase";
    local_58[lVar6 * 7 + 1] = L"ERigVMAnimEasingType";
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
    local_58[lVar6 * 7] = L"WaveMinimum";
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
    local_58[lVar6 * 7] = L"WaveMaximum";
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
    local_58[lVar6 * 7] = L"RotationOrder";
    local_58[lVar6 * 7 + 1] = L"EEulerRotationOrder";
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
    local_58[lVar6 * 7 + 1] = L"FRigUnit_BoneHarmonics_WorkData";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0a708;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_ItemHarmonics::Execute",FUN_14925d96c,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0a708;
}



// FUNCTION 1467059b2 FUN_1467059b2 body=47 status=ok
// SIG undefined FUN_1467059b2(void)

longlong FUN_1467059b2(void)

{
  if (DAT_14cc0a700 == 0) {
    FUN_14086a14e(&DAT_14cc0a700,&PTR_FUN_14bbc5388);
  }
  return DAT_14cc0a700;
}



// FUNCTION 1467059e2 FUN_1467059e2 body=48 status=ok
// SIG undefined FUN_1467059e2(void)

void FUN_1467059e2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000002b0;
  *puVar1 = &PTR_FUN_14bbfd7c0;
  return;
}



// FUNCTION 146705a12 FUN_146705a12 body=55 status=ok
// SIG undefined FUN_146705a12(void)

void FUN_146705a12(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0a720 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc0a720 = FUN_140002ddd(FUN_146705a49,uVar1,L"RigUnit_ChainHarmonics_Reach");
  }
  return;
}



// FUNCTION 146705a49 FUN_146705a49 body=49 status=ok
// SIG undefined FUN_146705a49(void)

longlong FUN_146705a49(void)

{
  if (DAT_14cc0a718 == 0) {
    FUN_14086a14e(&DAT_14cc0a718,&PTR_FUN_14bbc5768);
  }
  return DAT_14cc0a718;
}



// FUNCTION 146705a7a FUN_146705a7a body=48 status=ok
// SIG undefined FUN_146705a7a(void)

void FUN_146705a7a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000048;
  *puVar1 = &PTR_FUN_14bbfd9b0;
  return;
}



// FUNCTION 146705aaa FUN_146705aaa body=55 status=ok
// SIG undefined FUN_146705aaa(void)

void FUN_146705aaa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0a738 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc0a738 = FUN_140002ddd(FUN_146705ae1,uVar1,L"RigUnit_ChainHarmonics_Wave");
  }
  return;
}



// FUNCTION 146705ae1 FUN_146705ae1 body=49 status=ok
// SIG undefined FUN_146705ae1(void)

longlong FUN_146705ae1(void)

{
  if (DAT_14cc0a730 == 0) {
    FUN_14086a14e(&DAT_14cc0a730,&PTR_FUN_14bbc5a78);
  }
  return DAT_14cc0a730;
}



// FUNCTION 146705b12 FUN_146705b12 body=48 status=ok
// SIG undefined FUN_146705b12(void)

void FUN_146705b12(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000078;
  *puVar1 = &PTR_FUN_14bbfdb10;
  return;
}



// FUNCTION 146705b42 FUN_146705b42 body=55 status=ok
// SIG undefined FUN_146705b42(void)

void FUN_146705b42(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0a750 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc0a750 = FUN_140002ddd(FUN_146705b79,uVar1,L"RigUnit_ChainHarmonics_Pendulum");
  }
  return;
}



// FUNCTION 146705b79 FUN_146705b79 body=49 status=ok
// SIG undefined FUN_146705b79(void)

longlong FUN_146705b79(void)

{
  if (DAT_14cc0a748 == 0) {
    FUN_14086a14e(&DAT_14cc0a748,&PTR_FUN_14bbc5ee0);
  }
  return DAT_14cc0a748;
}



// FUNCTION 146705baa FUN_146705baa body=48 status=ok
// SIG undefined FUN_146705baa(void)

void FUN_146705baa(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000058;
  *puVar1 = &PTR_FUN_14bbfdc70;
  return;
}



// FUNCTION 146705bda FUN_146705bda body=55 status=ok
// SIG undefined FUN_146705bda(void)

void FUN_146705bda(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0a768 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc0a768 = FUN_140002ddd(FUN_146705c11,uVar1,L"RigUnit_ChainHarmonics_WorkData");
  }
  return;
}



// FUNCTION 146705c11 FUN_146705c11 body=49 status=ok
// SIG undefined FUN_146705c11(void)

longlong FUN_146705c11(void)

{
  if (DAT_14cc0a760 == 0) {
    FUN_14086a14e(&DAT_14cc0a760,&PTR_FUN_14bbc6468);
  }
  return DAT_14cc0a760;
}



// FUNCTION 146705c42 FUN_146705c42 body=48 status=ok
// SIG undefined FUN_146705c42(void)

void FUN_146705c42(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000098;
  *puVar1 = &PTR_FUN_14bbfddd0;
  return;
}



// FUNCTION 146705c72 FUN_146705c72 body=1011 status=ok
// SIG undefined FUN_146705c72(void)

longlong FUN_146705c72(void)

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
  if (DAT_14cc0a780 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0a780 = FUN_140002ddd(FUN_146706066,uVar4,L"RigUnit_ChainHarmonics");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"ChainRoot";
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
    local_58[lVar6 * 7] = L"Speed";
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
    local_58[lVar6 * 7] = L"Reach";
    local_58[lVar6 * 7 + 1] = L"FRigUnit_ChainHarmonics_Reach";
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
    local_58[lVar6 * 7] = L"Wave";
    local_58[lVar6 * 7 + 1] = L"FRigUnit_ChainHarmonics_Wave";
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
    local_58[lVar6 * 7] = L"WaveCurve";
    local_58[lVar6 * 7 + 1] = L"FRuntimeFloatCurve";
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
    local_58[lVar6 * 7] = L"Pendulum";
    local_58[lVar6 * 7 + 1] = L"FRigUnit_ChainHarmonics_Pendulum";
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
    local_58[lVar6 * 7] = L"bDrawDebug";
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
    local_58[lVar6 * 7] = L"DrawWorldOffset";
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
    local_58[lVar6 * 7] = L"WorkData";
    local_58[lVar6 * 7 + 1] = L"FRigUnit_ChainHarmonics_WorkData";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0a780;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_ChainHarmonics::Execute",FUN_14925e5d0,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0a780;
}



// FUNCTION 146706066 FUN_146706066 body=47 status=ok
// SIG undefined FUN_146706066(void)

longlong FUN_146706066(void)

{
  if (DAT_14cc0a778 == 0) {
    FUN_14086a14e(&DAT_14cc0a778,&PTR_FUN_14bbc6960);
  }
  return DAT_14cc0a778;
}



// FUNCTION 146706096 FUN_146706096 body=48 status=ok
// SIG undefined FUN_146706096(void)

void FUN_146706096(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000004c0;
  *puVar1 = &PTR_FUN_14bbfdf30;
  return;
}



// FUNCTION 1467060c6 FUN_1467060c6 body=1011 status=ok
// SIG undefined FUN_1467060c6(void)

longlong FUN_1467060c6(void)

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
  if (DAT_14cc0a798 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0a798 = FUN_140002ddd(FUN_1467064ba,uVar4,L"RigUnit_ChainHarmonicsPerItem");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"ChainRoot";
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
    local_58[lVar6 * 7] = L"Speed";
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
    local_58[lVar6 * 7] = L"Reach";
    local_58[lVar6 * 7 + 1] = L"FRigUnit_ChainHarmonics_Reach";
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
    local_58[lVar6 * 7] = L"Wave";
    local_58[lVar6 * 7 + 1] = L"FRigUnit_ChainHarmonics_Wave";
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
    local_58[lVar6 * 7] = L"WaveCurve";
    local_58[lVar6 * 7 + 1] = L"FRuntimeFloatCurve";
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
    local_58[lVar6 * 7] = L"Pendulum";
    local_58[lVar6 * 7 + 1] = L"FRigUnit_ChainHarmonics_Pendulum";
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
    local_58[lVar6 * 7] = L"bDrawDebug";
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
    local_58[lVar6 * 7] = L"DrawWorldOffset";
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
    local_58[lVar6 * 7] = L"WorkData";
    local_58[lVar6 * 7 + 1] = L"FRigUnit_ChainHarmonics_WorkData";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0a798;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_ChainHarmonicsPerItem::Execute",FUN_14925e786,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0a798;
}



// FUNCTION 1467064ba FUN_1467064ba body=47 status=ok
// SIG undefined FUN_1467064ba(void)

longlong FUN_1467064ba(void)

{
  if (DAT_14cc0a790 == 0) {
    FUN_14086a14e(&DAT_14cc0a790,&PTR_FUN_14bbc6cd8);
  }
  return DAT_14cc0a790;
}



// FUNCTION 1467064ea FUN_1467064ea body=48 status=ok
// SIG undefined FUN_1467064ea(void)

void FUN_1467064ea(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000004c0;
  *puVar1 = &PTR_FUN_14bbfe120;
  return;
}



// FUNCTION 14670651a FUN_14670651a body=55 status=ok
// SIG undefined FUN_14670651a(void)

void FUN_14670651a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0a7b0 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc0a7b0 = FUN_140002ddd(FUN_146706551,uVar1,L"RigUnit_AimBone_Target");
  }
  return;
}



// FUNCTION 146706551 FUN_146706551 body=49 status=ok
// SIG undefined FUN_146706551(void)

longlong FUN_146706551(void)

{
  if (DAT_14cc0a7a8 == 0) {
    FUN_14086a14e(&DAT_14cc0a7a8,&PTR_FUN_14bbc7008);
  }
  return DAT_14cc0a7a8;
}



// FUNCTION 146706582 FUN_146706582 body=48 status=ok
// SIG undefined FUN_146706582(void)

void FUN_146706582(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000048;
  *puVar1 = &PTR_FUN_14bbfe310;
  return;
}



// FUNCTION 1467065b2 FUN_1467065b2 body=55 status=ok
// SIG undefined FUN_1467065b2(void)

void FUN_1467065b2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0a7c8 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc0a7c8 = FUN_140002ddd(FUN_1467065e9,uVar1,L"RigUnit_AimItem_Target");
  }
  return;
}



// FUNCTION 1467065e9 FUN_1467065e9 body=49 status=ok
// SIG undefined FUN_1467065e9(void)

longlong FUN_1467065e9(void)

{
  if (DAT_14cc0a7c0 == 0) {
    FUN_14086a14e(&DAT_14cc0a7c0,&PTR_FUN_14bbc7238);
  }
  return DAT_14cc0a7c0;
}



// FUNCTION 14670661a FUN_14670661a body=48 status=ok
// SIG undefined FUN_14670661a(void)

void FUN_14670661a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000048;
  *puVar1 = &PTR_FUN_14bbfe470;
  return;
}



// FUNCTION 14670664a FUN_14670664a body=55 status=ok
// SIG undefined FUN_14670664a(void)

void FUN_14670664a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0a7e0 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc0a7e0 = FUN_140002ddd(FUN_146706681,uVar1,L"RigUnit_AimBone_DebugSettings");
  }
  return;
}



// FUNCTION 146706681 FUN_146706681 body=49 status=ok
// SIG undefined FUN_146706681(void)

longlong FUN_146706681(void)

{
  if (DAT_14cc0a7d8 == 0) {
    FUN_14086a14e(&DAT_14cc0a7d8,&PTR_FUN_14bbc73a8);
  }
  return DAT_14cc0a7d8;
}



// FUNCTION 1467066b2 FUN_1467066b2 body=48 status=ok
// SIG undefined FUN_1467066b2(void)

void FUN_1467066b2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000070;
  *puVar1 = &PTR_FUN_14bbfe5d0;
  return;
}



// FUNCTION 1467066e2 FUN_1467066e2 body=994 status=ok
// SIG undefined FUN_1467066e2(void)

longlong FUN_1467066e2(void)

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
  if (DAT_14cc0a7f8 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0a7f8 = FUN_140002ddd(FUN_146706ac5,uVar4,L"RigUnit_AimBoneMath");
    local_68 = (undefined8 *)0x0;
    uStack_60._0_4_ = 1;
    uStack_60._4_4_ = 0;
    FUN_140c0351c(&local_68,0);
    iVar2 = (uint)uStack_60;
    *local_68 = L"InputTransform";
    local_68[1] = L"FTransform";
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
    local_68[lVar6 * 7] = L"Primary";
    local_68[lVar6 * 7 + 1] = L"FRigUnit_AimItem_Target";
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
    local_68[lVar6 * 7] = L"Secondary";
    local_68[lVar6 * 7 + 1] = L"FRigUnit_AimItem_Target";
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
    local_68[lVar6 * 7] = L"Weight";
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
    local_68[lVar6 * 7] = L"Result";
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
    local_68[lVar6 * 7] = L"DebugSettings";
    local_68[lVar6 * 7 + 1] = L"FRigUnit_AimBone_DebugSettings";
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
    local_68[lVar6 * 7] = L"PrimaryCachedSpace";
    local_68[lVar6 * 7 + 1] = L"FCachedRigElement";
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
    local_68[lVar6 * 7] = L"SecondaryCachedSpace";
    local_68[lVar6 * 7 + 1] = L"FCachedRigElement";
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
    local_68[lVar6 * 7] = L"bIsInitialized";
    local_68[lVar6 * 7 + 1] = L"bool";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0a7f8;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_AimBoneMath::Execute",FUN_1492616f6,lVar6);
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
  return DAT_14cc0a7f8;
}



// FUNCTION 146706ac5 FUN_146706ac5 body=47 status=ok
// SIG undefined FUN_146706ac5(void)

longlong FUN_146706ac5(void)

{
  if (DAT_14cc0a7f0 == 0) {
    FUN_14086a14e(&DAT_14cc0a7f0,&PTR_FUN_14bbc7800);
  }
  return DAT_14cc0a7f0;
}



// FUNCTION 146706af4 FUN_146706af4 body=48 status=ok
// SIG undefined FUN_146706af4(void)

void FUN_146706af4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000230;
  *puVar1 = &PTR_FUN_14bbfe730;
  return;
}



// FUNCTION 146706b24 FUN_146706b24 body=1073 status=ok
// SIG undefined FUN_146706b24(void)

longlong FUN_146706b24(void)

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
  if (DAT_14cc0a810 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0a810 = FUN_140002ddd(FUN_146706f56,uVar4,L"RigUnit_AimBone");
    local_68 = (undefined8 *)0x0;
    uStack_60._0_4_ = 1;
    uStack_60._4_4_ = 0;
    FUN_140c0351c(&local_68,0);
    iVar2 = (uint)uStack_60;
    *local_68 = L"Bone";
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
    local_68[lVar6 * 7] = L"Primary";
    local_68[lVar6 * 7 + 1] = L"FRigUnit_AimBone_Target";
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
    local_68[lVar6 * 7] = L"Secondary";
    local_68[lVar6 * 7 + 1] = L"FRigUnit_AimBone_Target";
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
    local_68[lVar6 * 7] = L"Weight";
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
    local_68[lVar6 * 7 + 1] = L"FRigUnit_AimBone_DebugSettings";
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
    local_68[lVar6 * 7] = L"CachedBoneIndex";
    local_68[lVar6 * 7 + 1] = L"FCachedRigElement";
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
    local_68[lVar6 * 7] = L"PrimaryCachedSpace";
    local_68[lVar6 * 7 + 1] = L"FCachedRigElement";
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
    local_68[lVar6 * 7] = L"SecondaryCachedSpace";
    local_68[lVar6 * 7 + 1] = L"FCachedRigElement";
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
    local_68[lVar6 * 7] = L"bIsInitialized";
    local_68[lVar6 * 7 + 1] = L"bool";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0a810;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_AimBone::Execute",FUN_149262d90,lVar6);
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
  return DAT_14cc0a810;
}



// FUNCTION 146706f56 FUN_146706f56 body=47 status=ok
// SIG undefined FUN_146706f56(void)

longlong FUN_146706f56(void)

{
  if (DAT_14cc0a808 == 0) {
    FUN_14086a14e(&DAT_14cc0a808,&PTR_FUN_14bbc7ba0);
  }
  return DAT_14cc0a808;
}



// FUNCTION 146706f86 FUN_146706f86 body=48 status=ok
// SIG undefined FUN_146706f86(void)

void FUN_146706f86(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000370;
  *puVar1 = &PTR_FUN_14bbfe920;
  return;
}



// FUNCTION 146706fb6 FUN_146706fb6 body=990 status=ok
// SIG undefined FUN_146706fb6(void)

longlong FUN_146706fb6(void)

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
  if (DAT_14cc0a828 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0a828 = FUN_140002ddd(FUN_146707395,uVar4,L"RigUnit_AimItem");
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
    local_58[lVar6 * 7] = L"Primary";
    local_58[lVar6 * 7 + 1] = L"FRigUnit_AimItem_Target";
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
    local_58[lVar6 * 7] = L"Secondary";
    local_58[lVar6 * 7 + 1] = L"FRigUnit_AimItem_Target";
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
    local_58[lVar6 * 7] = L"DebugSettings";
    local_58[lVar6 * 7 + 1] = L"FRigUnit_AimBone_DebugSettings";
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
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"PrimaryCachedSpace";
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
    local_58[lVar6 * 7] = L"SecondaryCachedSpace";
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
    local_58[lVar6 * 7] = L"bIsInitialized";
    local_58[lVar6 * 7 + 1] = L"bool";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0a828;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_AimItem::Execute",FUN_149263098,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0a828;
}



// FUNCTION 146707395 FUN_146707395 body=47 status=ok
// SIG undefined FUN_146707395(void)

longlong FUN_146707395(void)

{
  if (DAT_14cc0a820 == 0) {
    FUN_14086a14e(&DAT_14cc0a820,&PTR_FUN_14bbc7ec8);
  }
  return DAT_14cc0a820;
}



// FUNCTION 1467073c4 FUN_1467073c4 body=48 status=ok
// SIG undefined FUN_1467073c4(void)

void FUN_1467073c4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000380;
  *puVar1 = &PTR_FUN_14bbfeb10;
  return;
}



// FUNCTION 1467073f4 FUN_1467073f4 body=55 status=ok
// SIG undefined FUN_1467073f4(void)

void FUN_1467073f4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0a840 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc0a840 = FUN_140002ddd(FUN_14670742b,uVar1,L"RigUnit_AimConstraint_WorldUp");
  }
  return;
}



// FUNCTION 14670742b FUN_14670742b body=47 status=ok
// SIG undefined FUN_14670742b(void)

longlong FUN_14670742b(void)

{
  if (DAT_14cc0a838 == 0) {
    FUN_14086a14e(&DAT_14cc0a838,&PTR_FUN_14bbc8080);
  }
  return DAT_14cc0a838;
}



// FUNCTION 14670745a FUN_14670745a body=48 status=ok
// SIG undefined FUN_14670745a(void)

void FUN_14670745a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14bbfec70;
  return;
}



// FUNCTION 14670748a FUN_14670748a body=55 status=ok
// SIG undefined FUN_14670748a(void)

void FUN_14670748a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0a858 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc0a858 = FUN_140002ddd(FUN_1467074c1,uVar1,L"RigUnit_AimConstraint_AdvancedSettings");
  }
  return;
}



// FUNCTION 1467074c1 FUN_1467074c1 body=47 status=ok
// SIG undefined FUN_1467074c1(void)

longlong FUN_1467074c1(void)

{
  if (DAT_14cc0a850 == 0) {
    FUN_14086a14e(&DAT_14cc0a850,&PTR_FUN_14bbc8220);
  }
  return DAT_14cc0a850;
}



// FUNCTION 1467074f0 FUN_1467074f0 body=48 status=ok
// SIG undefined FUN_1467074f0(void)

void FUN_1467074f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000080;
  *puVar1 = &PTR_FUN_14bbfedd0;
  return;
}



// FUNCTION 146707520 FUN_146707520 body=1344 status=ok
// SIG undefined FUN_146707520(void)

longlong FUN_146707520(void)

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
  if (DAT_14cc0a870 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0a870 = FUN_140002ddd(FUN_146707a61,uVar4,L"RigUnit_AimConstraintLocalSpaceOffset");
    local_68 = (undefined8 *)0x0;
    uStack_60._0_4_ = 1;
    uStack_60._4_4_ = 0;
    FUN_140c0351c(&local_68,0);
    iVar2 = (uint)uStack_60;
    *local_68 = L"Child";
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
    local_68[lVar6 * 7] = L"bMaintainOffset";
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
    local_68[lVar6 * 7] = L"Filter";
    local_68[lVar6 * 7 + 1] = L"FFilterOptionPerAxis";
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
    local_68[lVar6 * 7] = L"AimAxis";
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
    local_68[lVar6 * 7] = L"UpAxis";
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
    local_68[lVar6 * 7] = L"WorldUp";
    local_68[lVar6 * 7 + 1] = L"FRigUnit_AimConstraint_WorldUp";
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
    local_68[lVar6 * 7] = L"Parents";
    local_68[lVar6 * 7 + 1] = L"TArray<FConstraintParent>";
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
    local_68[lVar6 * 7] = L"AdvancedSettings";
    local_68[lVar6 * 7 + 1] = L"FRigUnit_AimConstraint_AdvancedSettings";
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
    local_68[lVar6 * 7] = L"Weight";
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
    local_68[lVar6 * 7] = L"WorldUpSpaceCache";
    local_68[lVar6 * 7 + 1] = L"FCachedRigElement";
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
    local_68[lVar6 * 7] = L"ChildCache";
    local_68[lVar6 * 7 + 1] = L"FCachedRigElement";
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
    local_68[lVar6 * 7] = L"ParentCaches";
    local_68[lVar6 * 7 + 1] = L"TArray<FCachedRigElement>";
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
    local_68[lVar6 * 7] = L"bIsInitialized";
    local_68[lVar6 * 7 + 1] = L"bool";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0a870;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_AimConstraintLocalSpaceOffset::Execute",FUN_14926343e,lVar6);
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
  return DAT_14cc0a870;
}



// FUNCTION 146707a61 FUN_146707a61 body=47 status=ok
// SIG undefined FUN_146707a61(void)

longlong FUN_146707a61(void)

{
  if (DAT_14cc0a868 == 0) {
    FUN_14086a14e(&DAT_14cc0a868,&PTR_FUN_14bbc8940);
  }
  return DAT_14cc0a868;
}



// FUNCTION 146707a90 FUN_146707a90 body=48 status=ok
// SIG undefined FUN_146707a90(void)

void FUN_146707a90(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000350;
  *puVar1 = &PTR_FUN_14bbfef30;
  return;
}



// FUNCTION 146707ac0 FUN_146707ac0 body=55 status=ok
// SIG undefined FUN_146707ac0(void)

void FUN_146707ac0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0a888 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc0a888 = FUN_140002ddd(FUN_146707af7,uVar1,L"RigUnit_CCDIK_RotationLimit");
  }
  return;
}



// FUNCTION 146707af7 FUN_146707af7 body=47 status=ok
// SIG undefined FUN_146707af7(void)

longlong FUN_146707af7(void)

{
  if (DAT_14cc0a880 == 0) {
    FUN_14086a14e(&DAT_14cc0a880,&PTR_FUN_14bbc8c70);
  }
  return DAT_14cc0a880;
}



// FUNCTION 146707b26 FUN_146707b26 body=48 status=ok
// SIG undefined FUN_146707b26(void)

void FUN_146707b26(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x40000000c;
  *puVar1 = &PTR_FUN_14bbff1b0;
  return;
}



// FUNCTION 146707b56 FUN_146707b56 body=55 status=ok
// SIG undefined FUN_146707b56(void)

void FUN_146707b56(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0a8a0 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc0a8a0 = FUN_140002ddd(FUN_146707b8d,uVar1,L"RigUnit_CCDIK_RotationLimitPerItem");
  }
  return;
}



// FUNCTION 146707b8d FUN_146707b8d body=49 status=ok
// SIG undefined FUN_146707b8d(void)

longlong FUN_146707b8d(void)

{
  if (DAT_14cc0a898 == 0) {
    FUN_14086a14e(&DAT_14cc0a898,&PTR_FUN_14bbc8da8);
  }
  return DAT_14cc0a898;
}



// FUNCTION 146707bbe FUN_146707bbe body=48 status=ok
// SIG undefined FUN_146707bbe(void)

void FUN_146707bbe(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000010;
  *puVar1 = &PTR_FUN_14bbff310;
  return;
}



// FUNCTION 146707bee FUN_146707bee body=55 status=ok
// SIG undefined FUN_146707bee(void)

void FUN_146707bee(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0a8b8 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc0a8b8 = FUN_140002ddd(FUN_146707c25,uVar1,L"RigUnit_CCDIK_WorkData");
  }
  return;
}



// FUNCTION 146707c25 FUN_146707c25 body=49 status=ok
// SIG undefined FUN_146707c25(void)

longlong FUN_146707c25(void)

{
  if (DAT_14cc0a8b0 == 0) {
    FUN_14086a14e(&DAT_14cc0a8b0,&PTR_FUN_14bbc90c0);
  }
  return DAT_14cc0a8b0;
}



// FUNCTION 146707c56 FUN_146707c56 body=48 status=ok
// SIG undefined FUN_146707c56(void)

void FUN_146707c56(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000060;
  *puVar1 = &PTR_FUN_14bbff470;
  return;
}



// FUNCTION 146707c86 FUN_146707c86 body=1162 status=ok
// SIG undefined FUN_146707c86(void)

longlong FUN_146707c86(void)

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
  if (DAT_14cc0a8d0 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0a8d0 = FUN_140002ddd(FUN_146708111,uVar4,L"RigUnit_CCDIK");
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
    local_68[lVar6 * 7] = L"EffectorBone";
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
    local_68[lVar6 * 7] = L"EffectorTransform";
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
    local_68[lVar6 * 7] = L"Precision";
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
    local_68[lVar6 * 7] = L"Weight";
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
    local_68[lVar6 * 7] = L"MaxIterations";
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
    local_68[lVar6 * 7] = L"bStartFromTail";
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
    local_68[lVar6 * 7] = L"BaseRotationLimit";
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
    local_68[lVar6 * 7] = L"RotationLimits";
    local_68[lVar6 * 7 + 1] = L"TArray<FRigUnit_CCDIK_RotationLimit>";
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
    local_68[lVar6 * 7] = L"WorkData";
    local_68[lVar6 * 7 + 1] = L"FRigUnit_CCDIK_WorkData";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0a8d0;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_CCDIK::Execute",FUN_149265850,lVar6);
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
  return DAT_14cc0a8d0;
}



// FUNCTION 146708111 FUN_146708111 body=47 status=ok
// SIG undefined FUN_146708111(void)

longlong FUN_146708111(void)

{
  if (DAT_14cc0a8c8 == 0) {
    FUN_14086a14e(&DAT_14cc0a8c8,&PTR_FUN_14bbc95b0);
  }
  return DAT_14cc0a8c8;
}



// FUNCTION 146708140 FUN_146708140 body=48 status=ok
// SIG undefined FUN_146708140(void)

void FUN_146708140(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000002f0;
  *puVar1 = &PTR_FUN_14bbff5d0;
  return;
}



// FUNCTION 146708170 FUN_146708170 body=1080 status=ok
// SIG undefined FUN_146708170(void)

longlong FUN_146708170(void)

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
  if (DAT_14cc0a8e8 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0a8e8 = FUN_140002ddd(FUN_1467085a9,uVar4,L"RigUnit_CCDIKPerItem");
    local_68 = (undefined8 *)0x0;
    uStack_60._0_4_ = 1;
    uStack_60._4_4_ = 0;
    FUN_140c0351c(&local_68,0);
    iVar2 = (uint)uStack_60;
    *local_68 = L"Items";
    local_68[1] = L"FRigElementKeyCollection";
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
    local_68[lVar6 * 7] = L"EffectorTransform";
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
    local_68[lVar6 * 7] = L"Precision";
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
    local_68[lVar6 * 7] = L"Weight";
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
    local_68[lVar6 * 7] = L"MaxIterations";
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
    local_68[lVar6 * 7] = L"bStartFromTail";
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
    local_68[lVar6 * 7] = L"BaseRotationLimit";
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
    local_68[lVar6 * 7] = L"RotationLimits";
    local_68[lVar6 * 7 + 1] = L"TArray<FRigUnit_CCDIK_RotationLimitPerItem>";
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
    local_68[lVar6 * 7] = L"WorkData";
    local_68[lVar6 * 7 + 1] = L"FRigUnit_CCDIK_WorkData";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0a8e8;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_CCDIKPerItem::Execute",FUN_149265d0a,lVar6);
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
  return DAT_14cc0a8e8;
}



// FUNCTION 1467085a9 FUN_1467085a9 body=47 status=ok
// SIG undefined FUN_1467085a9(void)

longlong FUN_1467085a9(void)

{
  if (DAT_14cc0a8e0 == 0) {
    FUN_14086a14e(&DAT_14cc0a8e0,&PTR_FUN_14bbc99b0);
  }
  return DAT_14cc0a8e0;
}



// FUNCTION 1467085d8 FUN_1467085d8 body=48 status=ok
// SIG undefined FUN_1467085d8(void)

void FUN_1467085d8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000002f0;
  *puVar1 = &PTR_FUN_14bbff7c0;
  return;
}



// FUNCTION 146708608 FUN_146708608 body=1080 status=ok
// SIG undefined FUN_146708608(void)

longlong FUN_146708608(void)

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
  if (DAT_14cc0a900 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0a900 = FUN_140002ddd(FUN_146708a41,uVar4,L"RigUnit_CCDIKItemArray");
    local_68 = (undefined8 *)0x0;
    uStack_60._0_4_ = 1;
    uStack_60._4_4_ = 0;
    FUN_140c0351c(&local_68,0);
    iVar2 = (uint)uStack_60;
    *local_68 = L"Items";
    local_68[1] = L"TArray<FRigElementKey>";
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
    local_68[lVar6 * 7] = L"EffectorTransform";
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
    local_68[lVar6 * 7] = L"Precision";
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
    local_68[lVar6 * 7] = L"Weight";
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
    local_68[lVar6 * 7] = L"MaxIterations";
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
    local_68[lVar6 * 7] = L"bStartFromTail";
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
    local_68[lVar6 * 7] = L"BaseRotationLimit";
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
    local_68[lVar6 * 7] = L"RotationLimits";
    local_68[lVar6 * 7 + 1] = L"TArray<FRigUnit_CCDIK_RotationLimitPerItem>";
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
    local_68[lVar6 * 7] = L"WorkData";
    local_68[lVar6 * 7 + 1] = L"FRigUnit_CCDIK_WorkData";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0a900;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_CCDIKItemArray::Execute",FUN_149265f6a,lVar6);
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
  return DAT_14cc0a900;
}



// FUNCTION 146708a41 FUN_146708a41 body=47 status=ok
// SIG undefined FUN_146708a41(void)

longlong FUN_146708a41(void)

{
  if (DAT_14cc0a8f8 == 0) {
    FUN_14086a14e(&DAT_14cc0a8f8,&PTR_FUN_14bbc9da8);
  }
  return DAT_14cc0a8f8;
}



// FUNCTION 146708a70 FUN_146708a70 body=48 status=ok
// SIG undefined FUN_146708a70(void)

void FUN_146708a70(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000002f0;
  *puVar1 = &PTR_FUN_14bbff9b0;
  return;
}



// FUNCTION 146708aa0 FUN_146708aa0 body=55 status=ok
// SIG undefined FUN_146708aa0(void)

void FUN_146708aa0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0a918 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc0a918 = FUN_140002ddd(FUN_146708ad7,uVar1,L"RigUnit_DistributeRotation_Rotation");
  }
  return;
}



// FUNCTION 146708ad7 FUN_146708ad7 body=49 status=ok
// SIG undefined FUN_146708ad7(void)

longlong FUN_146708ad7(void)

{
  if (DAT_14cc0a910 == 0) {
    FUN_14086a14e(&DAT_14cc0a910,&PTR_FUN_14bbc9fc8);
  }
  return DAT_14cc0a910;
}



// FUNCTION 146708b08 FUN_146708b08 body=48 status=ok
// SIG undefined FUN_146708b08(void)

void FUN_146708b08(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000030;
  *puVar1 = &PTR_FUN_14bbffba0;
  return;
}



// FUNCTION 146708b38 FUN_146708b38 body=55 status=ok
// SIG undefined FUN_146708b38(void)

void FUN_146708b38(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0a930 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc0a930 = FUN_140002ddd(FUN_146708b6f,uVar1,L"RigUnit_DistributeRotation_WorkData");
  }
  return;
}



// FUNCTION 146708b6f FUN_146708b6f body=49 status=ok
// SIG undefined FUN_146708b6f(void)

longlong FUN_146708b6f(void)

{
  if (DAT_14cc0a928 == 0) {
    FUN_14086a14e(&DAT_14cc0a928,&PTR_FUN_14bbca348);
  }
  return DAT_14cc0a928;
}



// FUNCTION 146708ba0 FUN_146708ba0 body=48 status=ok
// SIG undefined FUN_146708ba0(void)

void FUN_146708ba0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14bbffd00;
  return;
}



// FUNCTION 146708bd0 FUN_146708bd0 body=829 status=ok
// SIG undefined FUN_146708bd0(void)

longlong FUN_146708bd0(void)

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
  if (DAT_14cc0a948 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0a948 = FUN_140002ddd(FUN_146708f0e,uVar4,L"RigUnit_DistributeRotation");
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
    local_58[lVar6 * 7] = L"Rotations";
    local_58[lVar6 * 7 + 1] = L"TArray<FRigUnit_DistributeRotation_Rotation>";
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
    local_58[lVar6 * 7] = L"RotationEaseType";
    local_58[lVar6 * 7 + 1] = L"ERigVMAnimEasingType";
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
    local_58[lVar6 * 7 + 1] = L"FRigUnit_DistributeRotation_WorkData";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0a948;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_DistributeRotation::Execute",FUN_149266eec,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0a948;
}



// FUNCTION 146708f0e FUN_146708f0e body=47 status=ok
// SIG undefined FUN_146708f0e(void)

longlong FUN_146708f0e(void)

{
  if (DAT_14cc0a940 == 0) {
    FUN_14086a14e(&DAT_14cc0a940,&PTR_FUN_14bbca768);
  }
  return DAT_14cc0a940;
}



// FUNCTION 146708f3e FUN_146708f3e body=48 status=ok
// SIG undefined FUN_146708f3e(void)

void FUN_146708f3e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000270;
  *puVar1 = &PTR_FUN_14bbffe60;
  return;
}



// FUNCTION 146708f6e FUN_146708f6e body=661 status=ok
// SIG undefined FUN_146708f6e(void)

longlong FUN_146708f6e(void)

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
  if (DAT_14cc0a960 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0a960 = FUN_140002ddd(FUN_146709204,uVar4,L"RigUnit_DistributeRotationForCollection");
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
    local_58[lVar6 * 7] = L"Rotations";
    local_58[lVar6 * 7 + 1] = L"TArray<FRigUnit_DistributeRotation_Rotation>";
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
    local_58[lVar6 * 7] = L"RotationEaseType";
    local_58[lVar6 * 7 + 1] = L"ERigVMAnimEasingType";
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
    local_58[lVar6 * 7] = L"WorkData";
    local_58[lVar6 * 7 + 1] = L"FRigUnit_DistributeRotation_WorkData";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0a960;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_DistributeRotationForCollection::Execute",FUN_149267352,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0a960;
}



// FUNCTION 146709204 FUN_146709204 body=47 status=ok
// SIG undefined FUN_146709204(void)

longlong FUN_146709204(void)

{
  if (DAT_14cc0a958 == 0) {
    FUN_14086a14e(&DAT_14cc0a958,&PTR_FUN_14bbcaa70);
  }
  return DAT_14cc0a958;
}



// FUNCTION 146709234 FUN_146709234 body=48 status=ok
// SIG undefined FUN_146709234(void)

void FUN_146709234(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000270;
  *puVar1 = &PTR_FUN_14bc00050;
  return;
}



// FUNCTION 146709264 FUN_146709264 body=661 status=ok
// SIG undefined FUN_146709264(void)

longlong FUN_146709264(void)

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
  if (DAT_14cc0a978 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0a978 = FUN_140002ddd(FUN_1467094fa,uVar4,L"RigUnit_DistributeRotationForItemArray");
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
    local_58[lVar6 * 7] = L"Rotations";
    local_58[lVar6 * 7 + 1] = L"TArray<FRigUnit_DistributeRotation_Rotation>";
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
    local_58[lVar6 * 7] = L"RotationEaseType";
    local_58[lVar6 * 7 + 1] = L"ERigVMAnimEasingType";
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
    local_58[lVar6 * 7] = L"WorkData";
    local_58[lVar6 * 7 + 1] = L"FRigUnit_DistributeRotation_WorkData";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0a978;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_DistributeRotationForItemArray::Execute",FUN_1492674b8,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0a978;
}



// FUNCTION 1467094fa FUN_1467094fa body=47 status=ok
// SIG undefined FUN_1467094fa(void)

longlong FUN_1467094fa(void)

{
  if (DAT_14cc0a970 == 0) {
    FUN_14086a14e(&DAT_14cc0a970,&PTR_FUN_14bbcada8);
  }
  return DAT_14cc0a970;
}



// FUNCTION 14670952a FUN_14670952a body=48 status=ok
// SIG undefined FUN_14670952a(void)

void FUN_14670952a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000270;
  *puVar1 = &PTR_FUN_14bc00240;
  return;
}



// FUNCTION 14670955a FUN_14670955a body=55 status=ok
// SIG undefined FUN_14670955a(void)

void FUN_14670955a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0a990 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc0a990 = FUN_140002ddd(FUN_146709591,uVar1,L"RigUnit_FABRIK_WorkData");
  }
  return;
}



// FUNCTION 146709591 FUN_146709591 body=49 status=ok
// SIG undefined FUN_146709591(void)

longlong FUN_146709591(void)

{
  if (DAT_14cc0a988 == 0) {
    FUN_14086a14e(&DAT_14cc0a988,&PTR_FUN_14bbcb050);
  }
  return DAT_14cc0a988;
}



// FUNCTION 1467095c2 FUN_1467095c2 body=48 status=ok
// SIG undefined FUN_1467095c2(void)

void FUN_1467095c2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14bc00430;
  return;
}



// FUNCTION 1467095f2 FUN_1467095f2 body=990 status=ok
// SIG undefined FUN_1467095f2(void)

longlong FUN_1467095f2(void)

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
  if (DAT_14cc0a9a8 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0a9a8 = FUN_140002ddd(FUN_1467099d1,uVar4,L"RigUnit_FABRIK");
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
    local_58[lVar6 * 7] = L"EffectorBone";
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
    local_58[lVar6 * 7] = L"EffectorTransform";
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
    local_58[lVar6 * 7 + 1] = L"FRigUnit_FABRIK_WorkData";
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
    local_58[lVar6 * 7] = L"bSetEffectorTransform";
    local_58[lVar6 * 7 + 1] = L"bool";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0a9a8;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_FABRIK::Execute",FUN_149268b6e,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0a9a8;
}



// FUNCTION 1467099d1 FUN_1467099d1 body=47 status=ok
// SIG undefined FUN_1467099d1(void)

longlong FUN_1467099d1(void)

{
  if (DAT_14cc0a9a0 == 0) {
    FUN_14086a14e(&DAT_14cc0a9a0,&PTR_FUN_14bbcb3c8);
  }
  return DAT_14cc0a9a0;
}



// FUNCTION 146709a00 FUN_146709a00 body=48 status=ok
// SIG undefined FUN_146709a00(void)

void FUN_146709a00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000002c0;
  *puVar1 = &PTR_FUN_14bc00590;
  return;
}



// FUNCTION 146709a30 FUN_146709a30 body=908 status=ok
// SIG undefined FUN_146709a30(void)

longlong FUN_146709a30(void)

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
  if (DAT_14cc0a9c0 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0a9c0 = FUN_140002ddd(FUN_146709dbd,uVar4,L"RigUnit_FABRIKPerItem");
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
    local_58[lVar6 * 7] = L"EffectorTransform";
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
    local_58[lVar6 * 7 + 1] = L"FRigUnit_FABRIK_WorkData";
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
    local_58[lVar6 * 7] = L"bSetEffectorTransform";
    local_58[lVar6 * 7 + 1] = L"bool";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0a9c0;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_FABRIKPerItem::Execute",FUN_149268e14,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0a9c0;
}



// FUNCTION 146709dbd FUN_146709dbd body=47 status=ok
// SIG undefined FUN_146709dbd(void)

longlong FUN_146709dbd(void)

{
  if (DAT_14cc0a9b8 == 0) {
    FUN_14086a14e(&DAT_14cc0a9b8,&PTR_FUN_14bbcb6b8);
  }
  return DAT_14cc0a9b8;
}



// FUNCTION 146709dec FUN_146709dec body=48 status=ok
// SIG undefined FUN_146709dec(void)

void FUN_146709dec(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000002c0;
  *puVar1 = &PTR_FUN_14bc00780;
  return;
}



// FUNCTION 146709e1c FUN_146709e1c body=908 status=ok
// SIG undefined FUN_146709e1c(void)

longlong FUN_146709e1c(void)

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
  if (DAT_14cc0a9d8 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0a9d8 = FUN_140002ddd(FUN_14670a1a9,uVar4,L"RigUnit_FABRIKItemArray");
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
    local_58[lVar6 * 7] = L"EffectorTransform";
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
    local_58[lVar6 * 7 + 1] = L"FRigUnit_FABRIK_WorkData";
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
    local_58[lVar6 * 7] = L"bSetEffectorTransform";
    local_58[lVar6 * 7 + 1] = L"bool";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0a9d8;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_FABRIKItemArray::Execute",FUN_149268fdc,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0a9d8;
}



// FUNCTION 14670a1a9 FUN_14670a1a9 body=47 status=ok
// SIG undefined FUN_14670a1a9(void)

longlong FUN_14670a1a9(void)

{
  if (DAT_14cc0a9d0 == 0) {
    FUN_14086a14e(&DAT_14cc0a9d0,&PTR_FUN_14bbcb9f0);
  }
  return DAT_14cc0a9d0;
}



// FUNCTION 14670a1d8 FUN_14670a1d8 body=48 status=ok
// SIG undefined FUN_14670a1d8(void)

void FUN_14670a1d8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000002c0;
  *puVar1 = &PTR_FUN_14bc00970;
  return;
}



// FUNCTION 14670a208 FUN_14670a208 body=49 status=ok
// SIG undefined FUN_14670a208(void)

longlong FUN_14670a208(void)

{
  if (DAT_14cc0a9e8 == 0) {
    FUN_1409ce572(&DAT_14cc0a9e8,&PTR_FUN_14bbcbb10);
  }
  return DAT_14cc0a9e8;
}



// FUNCTION 14670a23a FUN_14670a23a body=55 status=ok
// SIG undefined FUN_14670a23a(void)

void FUN_14670a23a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0aa08 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc0aa08 = FUN_140002ddd(FUN_14670a271,uVar1,L"RigUnit_FitChainToCurve_Rotation");
  }
  return;
}



// FUNCTION 14670a271 FUN_14670a271 body=49 status=ok
// SIG undefined FUN_14670a271(void)

longlong FUN_14670a271(void)

{
  if (DAT_14cc0aa00 == 0) {
    FUN_14086a14e(&DAT_14cc0aa00,&PTR_FUN_14bbcbc38);
  }
  return DAT_14cc0aa00;
}



// FUNCTION 14670a2a2 FUN_14670a2a2 body=48 status=ok
// SIG undefined FUN_14670a2a2(void)

void FUN_14670a2a2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000030;
  *puVar1 = &PTR_FUN_14bc00ba0;
  return;
}



// FUNCTION 14670a2d2 FUN_14670a2d2 body=55 status=ok
// SIG undefined FUN_14670a2d2(void)

void FUN_14670a2d2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0aa20 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc0aa20 = FUN_140002ddd(FUN_14670a309,uVar1,L"RigUnit_FitChainToCurve_DebugSettings");
  }
  return;
}



// FUNCTION 14670a309 FUN_14670a309 body=49 status=ok
// SIG undefined FUN_14670a309(void)

longlong FUN_14670a309(void)

{
  if (DAT_14cc0aa18 == 0) {
    FUN_14086a14e(&DAT_14cc0aa18,&PTR_FUN_14bbcbe60);
  }
  return DAT_14cc0aa18;
}



// FUNCTION 14670a33a FUN_14670a33a body=48 status=ok
// SIG undefined FUN_14670a33a(void)

void FUN_14670a33a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000090;
  *puVar1 = &PTR_FUN_14bc00d00;
  return;
}



// FUNCTION 14670a36a FUN_14670a36a body=55 status=ok
// SIG undefined FUN_14670a36a(void)

void FUN_14670a36a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0aa38 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc0aa38 = FUN_140002ddd(FUN_14670a3a1,uVar1,L"RigUnit_FitChainToCurve_WorkData");
  }
  return;
}



// FUNCTION 14670a3a1 FUN_14670a3a1 body=49 status=ok
// SIG undefined FUN_14670a3a1(void)

longlong FUN_14670a3a1(void)

{
  if (DAT_14cc0aa30 == 0) {
    FUN_14086a14e(&DAT_14cc0aa30,&PTR_FUN_14bbcc420);
  }
  return DAT_14cc0aa30;
}



// FUNCTION 14670a3d2 FUN_14670a3d2 body=48 status=ok
// SIG undefined FUN_14670a3d2(void)

void FUN_14670a3d2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000098;
  *puVar1 = &PTR_FUN_14bc00e60;
  return;
}



// FUNCTION 14670a402 FUN_14670a402 body=1591 status=ok
// SIG undefined FUN_14670a402(void)

longlong FUN_14670a402(void)

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
  if (DAT_14cc0aa50 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0aa50 = FUN_140002ddd(FUN_14670aa3a,uVar4,L"RigUnit_FitChainToCurve");
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
    local_68[lVar6 * 7] = L"Bezier";
    local_68[lVar6 * 7 + 1] = L"FRigVMFourPointBezier";
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
    local_68[lVar6 * 7] = L"Alignment";
    local_68[lVar6 * 7 + 1] = L"EControlRigCurveAlignment";
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
    local_68[lVar6 * 7] = L"Minimum";
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
    local_68[lVar6 * 7] = L"Maximum";
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
    local_68[lVar6 * 7] = L"SamplingPrecision";
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
    local_68[lVar6 * 7] = L"PoleVectorPosition";
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
    local_68[lVar6 * 7] = L"Rotations";
    local_68[lVar6 * 7 + 1] = L"TArray<FRigUnit_FitChainToCurve_Rotation>";
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
    local_68[lVar6 * 7] = L"RotationEaseType";
    local_68[lVar6 * 7 + 1] = L"ERigVMAnimEasingType";
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
    local_68[lVar6 * 7] = L"Weight";
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
    local_68[lVar6 * 7 + 1] = L"FRigUnit_FitChainToCurve_DebugSettings";
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
    local_68[lVar6 * 7 + 1] = L"FRigUnit_FitChainToCurve_WorkData";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0aa50;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_FitChainToCurve::Execute",FUN_14926a162,lVar6);
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
  return DAT_14cc0aa50;
}



// FUNCTION 14670aa3a FUN_14670aa3a body=47 status=ok
// SIG undefined FUN_14670aa3a(void)

longlong FUN_14670aa3a(void)

{
  if (DAT_14cc0aa48 == 0) {
    FUN_14086a14e(&DAT_14cc0aa48,&PTR_FUN_14bbccba0);
  }
  return DAT_14cc0aa48;
}



// FUNCTION 14670aa6a FUN_14670aa6a body=48 status=ok
// SIG undefined FUN_14670aa6a(void)

void FUN_14670aa6a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000410;
  *puVar1 = &PTR_FUN_14bc00fc0;
  return;
}



// FUNCTION 14670aa9a FUN_14670aa9a body=1512 status=ok
// SIG undefined FUN_14670aa9a(void)

longlong FUN_14670aa9a(void)

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
  if (DAT_14cc0aa68 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0aa68 = FUN_140002ddd(FUN_14670b083,uVar4,L"RigUnit_FitChainToCurvePerItem");
    local_68 = (undefined8 *)0x0;
    uStack_60._0_4_ = 1;
    uStack_60._4_4_ = 0;
    FUN_140c0351c(&local_68,0);
    iVar2 = (uint)uStack_60;
    *local_68 = L"Items";
    local_68[1] = L"FRigElementKeyCollection";
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
    local_68[lVar6 * 7] = L"Bezier";
    local_68[lVar6 * 7 + 1] = L"FRigVMFourPointBezier";
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
    local_68[lVar6 * 7] = L"Alignment";
    local_68[lVar6 * 7 + 1] = L"EControlRigCurveAlignment";
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
    local_68[lVar6 * 7] = L"Minimum";
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
    local_68[lVar6 * 7] = L"Maximum";
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
    local_68[lVar6 * 7] = L"SamplingPrecision";
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
    local_68[lVar6 * 7] = L"PoleVectorPosition";
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
    local_68[lVar6 * 7] = L"Rotations";
    local_68[lVar6 * 7 + 1] = L"TArray<FRigUnit_FitChainToCurve_Rotation>";
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
    local_68[lVar6 * 7] = L"RotationEaseType";
    local_68[lVar6 * 7 + 1] = L"ERigVMAnimEasingType";
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
    local_68[lVar6 * 7] = L"Weight";
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
    local_68[lVar6 * 7 + 1] = L"FRigUnit_FitChainToCurve_DebugSettings";
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
    local_68[lVar6 * 7 + 1] = L"FRigUnit_FitChainToCurve_WorkData";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0aa68;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_FitChainToCurvePerItem::Execute",FUN_14926a690,lVar6);
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
  return DAT_14cc0aa68;
}



// FUNCTION 14670b083 FUN_14670b083 body=47 status=ok
// SIG undefined FUN_14670b083(void)

longlong FUN_14670b083(void)

{
  if (DAT_14cc0aa60 == 0) {
    FUN_14086a14e(&DAT_14cc0aa60,&PTR_FUN_14bbcd170);
  }
  return DAT_14cc0aa60;
}



// FUNCTION 14670b0b2 FUN_14670b0b2 body=48 status=ok
// SIG undefined FUN_14670b0b2(void)

void FUN_14670b0b2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000410;
  *puVar1 = &PTR_FUN_14bc011b0;
  return;
}



// FUNCTION 14670b0e2 FUN_14670b0e2 body=1512 status=ok
// SIG undefined FUN_14670b0e2(void)

longlong FUN_14670b0e2(void)

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
  if (DAT_14cc0aa80 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0aa80 = FUN_140002ddd(FUN_14670b6cb,uVar4,L"RigUnit_FitChainToCurveItemArray");
    local_68 = (undefined8 *)0x0;
    uStack_60._0_4_ = 1;
    uStack_60._4_4_ = 0;
    FUN_140c0351c(&local_68,0);
    iVar2 = (uint)uStack_60;
    *local_68 = L"Items";
    local_68[1] = L"TArray<FRigElementKey>";
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
    local_68[lVar6 * 7] = L"Bezier";
    local_68[lVar6 * 7 + 1] = L"FRigVMFourPointBezier";
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
    local_68[lVar6 * 7] = L"Alignment";
    local_68[lVar6 * 7 + 1] = L"EControlRigCurveAlignment";
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
    local_68[lVar6 * 7] = L"Minimum";
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
    local_68[lVar6 * 7] = L"Maximum";
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
    local_68[lVar6 * 7] = L"SamplingPrecision";
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
    local_68[lVar6 * 7] = L"PoleVectorPosition";
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
    local_68[lVar6 * 7] = L"Rotations";
    local_68[lVar6 * 7 + 1] = L"TArray<FRigUnit_FitChainToCurve_Rotation>";
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
    local_68[lVar6 * 7] = L"RotationEaseType";
    local_68[lVar6 * 7 + 1] = L"ERigVMAnimEasingType";
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
    local_68[lVar6 * 7] = L"Weight";
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
    local_68[lVar6 * 7 + 1] = L"FRigUnit_FitChainToCurve_DebugSettings";
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
    local_68[lVar6 * 7 + 1] = L"FRigUnit_FitChainToCurve_WorkData";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0aa80;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_FitChainToCurveItemArray::Execute",FUN_14926a9c4,lVar6);
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
  return DAT_14cc0aa80;
}



// FUNCTION 14670b6cb FUN_14670b6cb body=47 status=ok
// SIG undefined FUN_14670b6cb(void)

longlong FUN_14670b6cb(void)

{
  if (DAT_14cc0aa78 == 0) {
    FUN_14086a14e(&DAT_14cc0aa78,&PTR_FUN_14bbcd790);
  }
  return DAT_14cc0aa78;
}



// FUNCTION 14670b6fa FUN_14670b6fa body=48 status=ok
// SIG undefined FUN_14670b6fa(void)

void FUN_14670b6fa(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000410;
  *puVar1 = &PTR_FUN_14bc013a0;
  return;
}



// FUNCTION 14670b72a FUN_14670b72a body=55 status=ok
// SIG undefined FUN_14670b72a(void)

void FUN_14670b72a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0aa98 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc0aa98 = FUN_140002ddd(FUN_14670b761,uVar1,L"RigUnit_ModifyBoneTransforms_PerBone");
  }
  return;
}



// FUNCTION 14670b761 FUN_14670b761 body=47 status=ok
// SIG undefined FUN_14670b761(void)

longlong FUN_14670b761(void)

{
  if (DAT_14cc0aa90 == 0) {
    FUN_14086a14e(&DAT_14cc0aa90,&PTR_FUN_14bbcd9e8);
  }
  return DAT_14cc0aa90;
}



// FUNCTION 14670b790 FUN_14670b790 body=48 status=ok
// SIG undefined FUN_14670b790(void)

void FUN_14670b790(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000070;
  *puVar1 = &PTR_FUN_14bc01590;
  return;
}



// FUNCTION 14670b7c0 FUN_14670b7c0 body=55 status=ok
// SIG undefined FUN_14670b7c0(void)

void FUN_14670b7c0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0aab0 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc0aab0 = FUN_140002ddd(FUN_14670b7f7,uVar1,L"RigUnit_ModifyBoneTransforms_WorkData");
  }
  return;
}



// FUNCTION 14670b7f7 FUN_14670b7f7 body=47 status=ok
// SIG undefined FUN_14670b7f7(void)

longlong FUN_14670b7f7(void)

{
  if (DAT_14cc0aaa8 == 0) {
    FUN_14086a14e(&DAT_14cc0aaa8,&PTR_FUN_14bbcda98);
  }
  return DAT_14cc0aaa8;
}



// FUNCTION 14670b826 FUN_14670b826 body=49 status=ok
// SIG undefined FUN_14670b826(void)

longlong FUN_14670b826(void)

{
  if (DAT_14cc0ab08 == 0) {
    FUN_14086a14e(&DAT_14cc0ab08,&PTR_FUN_14bbce288);
  }
  return DAT_14cc0ab08;
}



// FUNCTION 14670b858 FUN_14670b858 body=48 status=ok
// SIG undefined FUN_14670b858(void)

void FUN_14670b858(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bc016f0;
  return;
}



// FUNCTION 14670b888 FUN_14670b888 body=733 status=ok
// SIG undefined FUN_14670b888(void)

longlong FUN_14670b888(void)

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
  if (DAT_14cc0aac8 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0aac8 = FUN_140002ddd(FUN_14670bb66,uVar4,L"RigUnit_ModifyBoneTransforms");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"BoneToModify";
    local_58[1] = L"TArray<FRigUnit_ModifyBoneTransforms_PerBone>";
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
    local_58[lVar6 * 7] = L"WeightMinimum";
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
    local_58[lVar6 * 7] = L"WeightMaximum";
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
    local_58[lVar6 * 7] = L"Mode";
    local_58[lVar6 * 7 + 1] = L"EControlRigModifyBoneMode";
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
    local_58[lVar6 * 7 + 1] = L"FRigUnit_ModifyBoneTransforms_WorkData";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0aac8;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_ModifyBoneTransforms::Execute",FUN_14926db4e,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0aac8;
}



// FUNCTION 14670bb66 FUN_14670bb66 body=47 status=ok
// SIG undefined FUN_14670bb66(void)

longlong FUN_14670bb66(void)

{
  if (DAT_14cc0aac0 == 0) {
    FUN_14086a14e(&DAT_14cc0aac0,&PTR_FUN_14bbcdef0);
  }
  return DAT_14cc0aac0;
}



// FUNCTION 14670bb95 FUN_14670bb95 body=47 status=ok
// SIG undefined FUN_14670bb95(void)

longlong FUN_14670bb95(void)

{
  if (DAT_14cc0aad8 == 0) {
    FUN_1409ce572(&DAT_14cc0aad8,&PTR_FUN_14bbce020);
  }
  return DAT_14cc0aad8;
}



// FUNCTION 14670bbc4 FUN_14670bbc4 body=48 status=ok
// SIG undefined FUN_14670bbc4(void)

void FUN_14670bbc4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000220;
  *puVar1 = &PTR_FUN_14bc01850;
  return;
}



// FUNCTION 14670bbf4 FUN_14670bbf4 body=55 status=ok
// SIG undefined FUN_14670bbf4(void)

void FUN_14670bbf4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0aaf8 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc0aaf8 = FUN_140002ddd(FUN_14670bc2b,uVar1,L"RigUnit_ModifyTransforms_PerItem");
  }
  return;
}



// FUNCTION 14670bc2b FUN_14670bc2b body=47 status=ok
// SIG undefined FUN_14670bc2b(void)

longlong FUN_14670bc2b(void)

{
  if (DAT_14cc0aaf0 == 0) {
    FUN_14086a14e(&DAT_14cc0aaf0,&PTR_FUN_14bbce158);
  }
  return DAT_14cc0aaf0;
}



// FUNCTION 14670bc5a FUN_14670bc5a body=48 status=ok
// SIG undefined FUN_14670bc5a(void)

void FUN_14670bc5a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000070;
  *puVar1 = &PTR_FUN_14bc01b00;
  return;
}



// FUNCTION 14670bc8a FUN_14670bc8a body=55 status=ok
// SIG undefined FUN_14670bc8a(void)

void FUN_14670bc8a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0ab10 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc0ab10 = FUN_140002ddd(FUN_14670b826,uVar1,L"RigUnit_ModifyTransforms_WorkData");
  }
  return;
}



// FUNCTION 14670bcc2 FUN_14670bcc2 body=48 status=ok
// SIG undefined FUN_14670bcc2(void)

void FUN_14670bcc2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bc01c60;
  return;
}



// FUNCTION 14670bcf2 FUN_14670bcf2 body=733 status=ok
// SIG undefined FUN_14670bcf2(void)

longlong FUN_14670bcf2(void)

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
  if (DAT_14cc0ab28 == 0) {
    uVar4 = FUN_1408c25db();
    DAT_14cc0ab28 = FUN_140002ddd(FUN_14670bfd0,uVar4,L"RigUnit_ModifyTransforms");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"ItemToModify";
    local_58[1] = L"TArray<FRigUnit_ModifyTransforms_PerItem>";
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
    local_58[lVar6 * 7] = L"WeightMinimum";
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
    local_58[lVar6 * 7] = L"WeightMaximum";
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
    local_58[lVar6 * 7] = L"Mode";
    local_58[lVar6 * 7 + 1] = L"EControlRigModifyBoneMode";
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
    local_58[lVar6 * 7 + 1] = L"FRigUnit_ModifyTransforms_WorkData";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc0ab28;
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
    FUN_1446f2f9a(lVar5,L"FRigUnit_ModifyTransforms::Execute",FUN_14926f1bc,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0ab28;
}



// FUNCTION 14670bfd0 FUN_14670bfd0 body=47 status=ok
// SIG undefined FUN_14670bfd0(void)

longlong FUN_14670bfd0(void)

{
  if (DAT_14cc0ab20 == 0) {
    FUN_14086a14e(&DAT_14cc0ab20,&PTR_FUN_14bbce640);
  }
  return DAT_14cc0ab20;
}



// FUNCTION 14670c000 FUN_14670c000 body=48 status=ok
// SIG undefined FUN_14670c000(void)

void FUN_14670c000(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000220;
  *puVar1 = &PTR_FUN_14bc01dc0;
  return;
}


